/*===========================================================================*/
/*   (Llib/date.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/date.scm -indent -o objs/obj_s/Llib/date.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Object type definitions */
typedef struct BgL_z62iozd2parsezd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2parsezd2errorz62_bglt;


static obj_t BGl_symbol4427z00zz__datez00 = BUNSPEC;
static obj_t BGl__datezd2monthzd2lengthz00zz__datez00(obj_t, obj_t);
static obj_t BGl_symbol4429z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4431z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4433z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4452z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4454z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4456z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4459z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4461z00zz__datez00 = BUNSPEC;
static obj_t BGl__datezd2ze3secondsz31zz__datez00(obj_t, obj_t);
extern obj_t bgl_day_name(int);
static obj_t BGl_symbol4464z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4466z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4469z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4471z00zz__datez00 = BUNSPEC;
static obj_t BGl_zc3anonymousza32521ze3z83zz__datez00(obj_t, obj_t);
extern obj_t bgl_month_aname(int);
static obj_t BGl_symbol4475z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4478z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4481z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4484z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4487z00zz__datez00 = BUNSPEC;
static obj_t BGl_zc3anonymousza32240ze3z83zz__datez00(obj_t, obj_t);
static obj_t BGl_symbol4519z00zz__datez00 = BUNSPEC;
extern obj_t bstring_to_symbol(obj_t);
extern obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
static obj_t BGl_symbol4525z00zz__datez00 = BUNSPEC;
extern BgL_z62iozd2parsezd2errorz62_bglt BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__datezf3zf3zz__datez00(obj_t, obj_t);
extern obj_t BGl_readzd2linezd2zz__r4_input_6_10_2z00(obj_t);
extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol4552z00zz__datez00 = BUNSPEC;
static obj_t BGl_requirezd2initializa7ationz75zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4557z00zz__datez00 = BUNSPEC;
static obj_t BGl_fixnumzd2grammarzd2zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4560z00zz__datez00 = BUNSPEC;
static obj_t BGl__datezd2yearzd2dayz00zz__datez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_secondszd2ze3stringz31zz__datez00(long);
static obj_t BGl_symbol4574z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4576z00zz__datez00 = BUNSPEC;
static obj_t BGl__datezd2monthzd2zz__datez00(obj_t, obj_t);
static obj_t BGl_genericzd2initzd2zz__datez00();
BGL_EXPORTED_DECL long BGl_datezd2za7onezd2offsetza7zz__datez00(obj_t);
BGL_EXPORTED_DECL long BGl_datezd2ze3secondsz31zz__datez00(obj_t);
static obj_t BGl__datezd2timeza7onez75zz__datez00(obj_t, obj_t);
static obj_t BGl__datezd2weekzd2dayz00zz__datez00(obj_t, obj_t);
static obj_t BGl_keyword4501z00zz__datez00 = BUNSPEC;
static obj_t BGl_keyword4503z00zz__datez00 = BUNSPEC;
static obj_t BGl_keyword4505z00zz__datez00 = BUNSPEC;
static obj_t BGl_keyword4507z00zz__datez00 = BUNSPEC;
static obj_t BGl_keyword4509z00zz__datez00 = BUNSPEC;
static obj_t BGl_keyword4511z00zz__datez00 = BUNSPEC;
static obj_t BGl_keyword4513z00zz__datez00 = BUNSPEC;
static obj_t BGl_keyword4515z00zz__datez00 = BUNSPEC;
extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl_keyword4517z00zz__datez00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_dayzd2namezd2zz__datez00(int);
static obj_t BGl__datezd2copyzd2zz__datez00(obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_datezd2yearzd2dayz00zz__datez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_dayzd2anamezd2zz__datez00(int);
static obj_t BGl__rfc2822zd2datezd2ze3dateze3zz__datez00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_leapzd2yearzf3z21zz__datez00(int);
static obj_t BGl__secondszd2ze3stringz31zz__datez00(obj_t, obj_t);
extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
extern unsigned char BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(long);
static obj_t BGl_2digitsz00zz__datez00(int);
static obj_t BGl__monthzd2anamezd2zz__datez00(obj_t, obj_t);
extern BGL_LONGLONG_T bgl_current_microseconds();
static obj_t BGl__secondszd2ze3datez31zz__datez00(obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__datez00();
BGL_EXPORTED_DECL long BGl_datezd2timeza7onez75zz__datez00(obj_t);
static obj_t BGl__makezd2datezd2zz__datez00(obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_datezd2hourzd2zz__datez00(obj_t);
BGL_EXPORTED_DECL int BGl_datezd2weekzd2dayz00zz__datez00(obj_t);
BGL_EXPORTED_DECL long BGl_dayzd2secondszd2zz__datez00();
extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_currentzd2microsecondszd2zz__datez00();
static obj_t BGl__monthzd2namezd2zz__datez00(obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__datez00();
BGL_EXPORTED_DECL long BGl_integerzd2ze3secondz31zz__datez00(long);
BGL_EXPORTED_DECL obj_t BGl_rfc2822zd2datezd2ze3dateze3zz__datez00(obj_t);
BGL_EXPORTED_DECL int BGl_datezd2ydayzd2zz__datez00(obj_t);
static obj_t BGl__datezd2ze3utczd2stringze3zz__datez00(obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_zc3exitza33074ze3z83zz__datez00(obj_t);
static obj_t BGl__currentzd2microsecondszd2zz__datez00(obj_t);
BGL_EXPORTED_DECL int BGl_datezd2monthzd2zz__datez00(obj_t);
static obj_t BGl_dayzd2ofzd2weekzd2grammarzd2zz__datez00 = BUNSPEC;
extern obj_t bgl_month_name(int);
BGL_EXPORTED_DECL obj_t BGl_secondszd2ze3datez31zz__datez00(long);
static obj_t BGl_parsezd2errorzd2zz__datez00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_datezd2iszd2dstz00zz__datez00(obj_t);
BGL_EXPORTED_DECL int BGl_datezd2yearzd2zz__datez00(obj_t);
extern obj_t bgl_day_aname(int);
extern obj_t bstring_to_keyword(obj_t);
static obj_t BGl__datezd2wdayzd2zz__datez00(obj_t, obj_t);
static obj_t BGl_list4334z00zz__datez00 = BUNSPEC;
static obj_t BGl_list4335z00zz__datez00 = BUNSPEC;
static obj_t BGl__rfc2822zd2parsezd2datez00zz__datez00(obj_t, obj_t);
static obj_t BGl__currentzd2datezd2zz__datez00(obj_t);
static obj_t BGl_list4338z00zz__datez00 = BUNSPEC;
static obj_t BGl_list4341z00zz__datez00 = BUNSPEC;
static obj_t BGl_list4344z00zz__datez00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__datez00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_list4347z00zz__datez00 = BUNSPEC;
static obj_t BGl_list4350z00zz__datez00 = BUNSPEC;
static obj_t BGl_za7onezd2grammarz75zz__datez00 = BUNSPEC;
static obj_t BGl_list4353z00zz__datez00 = BUNSPEC;
static obj_t BGl__dayzd2namezd2zz__datez00(obj_t, obj_t);
static obj_t BGl_list4356z00zz__datez00 = BUNSPEC;
static obj_t BGl_list4359z00zz__datez00 = BUNSPEC;
static obj_t BGl_list4362z00zz__datez00 = BUNSPEC;
static obj_t BGl_toplevelzd2initzd2zz__datez00();
BGL_EXPORTED_DECL long BGl_currentzd2secondszd2zz__datez00();
static obj_t BGl__integerzd2ze3secondz31zz__datez00(obj_t, obj_t);
extern long bgl_current_seconds();
extern obj_t bgl_seconds_to_date(long);
static obj_t BGl_za2timezd2za7onesza2z75zz__datez00 = BUNSPEC;
extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
extern obj_t rgc_buffer_substring(obj_t, long, long);
BGL_EXPORTED_DECL int BGl_datezd2dayzd2zz__datez00(obj_t);
static obj_t BGl_list4451z00zz__datez00 = BUNSPEC;
extern long rgc_buffer_fixnum(obj_t);
static obj_t BGl_list4458z00zz__datez00 = BUNSPEC;
static obj_t BGl_list4463z00zz__datez00 = BUNSPEC;
static obj_t BGl_list4468z00zz__datez00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_rfc2822zd2parsezd2datez00zz__datez00(obj_t);
static obj_t BGl_list4474z00zz__datez00 = BUNSPEC;
static obj_t BGl_list4477z00zz__datez00 = BUNSPEC;
static obj_t BGl_list4480z00zz__datez00 = BUNSPEC;
static obj_t BGl_list4483z00zz__datez00 = BUNSPEC;
static obj_t BGl_list4486z00zz__datez00 = BUNSPEC;
static obj_t BGl_list4500z00zz__datez00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_currentzd2datezd2zz__datez00();
static obj_t BGl__datezd2za7onezd2offsetza7zz__datez00(obj_t, obj_t);
extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
static obj_t BGl__datezd2ze3stringz31zz__datez00(obj_t, obj_t);
static obj_t BGl_list4524z00zz__datez00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_monthzd2namezd2zz__datez00(int);
BGL_EXPORTED_DECL int BGl_datezd2minutezd2zz__datez00(obj_t);
BGL_EXPORTED_DECL int BGl_datezd2secondzd2zz__datez00(obj_t);
extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__dayzd2secondszd2zz__datez00(obj_t);
static obj_t BGl_monthzd2grammarzd2zz__datez00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_secondszd2ze3utczd2stringze3zz__datez00(long);
static obj_t BGl__secondszd2ze3utczd2stringze3zz__datez00(obj_t, obj_t);
static obj_t BGl_zc3anonymousza32748ze3z83zz__datez00(obj_t, obj_t);
static obj_t BGl_list4573z00zz__datez00 = BUNSPEC;
extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long, long);
static obj_t BGl_timezd2grammarzd2zz__datez00 = BUNSPEC;
static obj_t BGl__currentzd2secondszd2zz__datez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_datezd2copyzd2zz__datez00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_datezd2nanosecondzd2zz__datez00(obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__datezd2iszd2dstz00zz__datez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_datezd2ze3stringz31zz__datez00(obj_t);
static obj_t BGl_search1976z00zz__datez00(int, obj_t, obj_t, long);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__dayzd2anamezd2zz__datez00(obj_t, obj_t);
static obj_t BGl_zc3anonymousza32058ze3z83zz__datez00(obj_t, obj_t);
static obj_t BGl_search1990z00zz__datez00(int, obj_t, obj_t, long);
extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
extern obj_t bgl_seconds_to_string(long);
BGL_EXPORTED_DECL int BGl_datezd2monthzd2lengthz00zz__datez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2datezd2zz__datez00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t bgl_close_input_port(obj_t);
static obj_t BGl__datezd2ze3rfc2822zd2dateze3zz__datez00(obj_t, obj_t);
extern bool_t rgc_fill_buffer(obj_t);
extern obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_za2monthzd2lengthsza2zd2zz__datez00 = BUNSPEC;
extern obj_t bgl_make_date(int, int, int, int, int, int, long, bool_t, int);
static obj_t BGl__datezd2hourzd2zz__datez00(obj_t, obj_t);
static obj_t BGl__datezd2dayzd2zz__datez00(obj_t, obj_t);
extern obj_t bgl_seconds_to_utc_string(long);
extern obj_t BGl_raisez00zz__errorz00(obj_t);
static obj_t BGl__datezd2ydayzd2zz__datez00(obj_t, obj_t);
static obj_t BGl__datezd2nanosecondzd2zz__datez00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_datezf3zf3zz__datez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_datezd2ze3rfc2822zd2dateze3zz__datez00(obj_t);
static obj_t BGl_zc3anonymousza32358ze3z83zz__datez00(obj_t, obj_t);
extern obj_t BGl_getzd2tracezd2stackz00zz__errorz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_datezd2ze3utczd2stringze3zz__datez00(obj_t);
extern obj_t rgc_buffer_symbol(obj_t);
static obj_t BGl_symbol4336z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4339z00zz__datez00 = BUNSPEC;
extern long bgl_date_to_seconds(obj_t);
static obj_t BGl_symbol4342z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4345z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4348z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4351z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4354z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4357z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4360z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4363z00zz__datez00 = BUNSPEC;
BGL_EXPORTED_DECL int BGl_datezd2wdayzd2zz__datez00(obj_t);
static obj_t BGl_symbol4369z00zz__datez00 = BUNSPEC;
static obj_t BGl__datezd2minutezd2zz__datez00(obj_t, obj_t);
static obj_t BGl__datezd2secondzd2zz__datez00(obj_t, obj_t);
static obj_t BGl__datezd2yearzd2zz__datez00(obj_t, obj_t);
static obj_t BGl__leapzd2yearzf3z21zz__datez00(obj_t, obj_t);
extern obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_methodzd2initzd2zz__datez00();
BGL_EXPORTED_DECL obj_t BGl_monthzd2anamezd2zz__datez00(int);
static obj_t BGl_symbol4411z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4413z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4415z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4417z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4419z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4421z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4423z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol4425z00zz__datez00 = BUNSPEC;
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_dayzd2secondszd2envz00zz__datez00, BgL_bgl__dayza7d2secondsza7d4590z00, BGl__dayzd2secondszd2zz__datez00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2copyzd2envz00zz__datez00, BgL_bgl__dateza7d2copyza7d2za74591za7, opt_generic_entry, BGl__datezd2copyzd2zz__datez00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2secondzd2envz00zz__datez00, BgL_bgl__dateza7d2secondza7d4592z00, BGl__datezd2secondzd2zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_secondszd2ze3stringzd2envze3zz__datez00, BgL_bgl__secondsza7d2za7e3st4593z00, BGl__secondszd2ze3stringz31zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2monthzd2lengthzd2envzd2zz__datez00, BgL_bgl__dateza7d2monthza7d24594z00, BGl__datezd2monthzd2lengthz00zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dayzd2namezd2envz00zz__datez00, BgL_bgl__dayza7d2nameza7d2za7za74595z00, BGl__dayzd2namezd2zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_currentzd2secondszd2envz00zz__datez00, BgL_bgl__currentza7d2secon4596za7, BGl__currentzd2secondszd2zz__datez00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2weekzd2dayzd2envzd2zz__datez00, BgL_bgl__dateza7d2weekza7d2d4597z00, BGl__datezd2weekzd2dayz00zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4330z00zz__datez00, BgL_bgl_za7c3anonymousza7a324598z00, BGl_zc3anonymousza32058ze3z83zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4331z00zz__datez00, BgL_bgl_za7c3anonymousza7a324599z00, BGl_zc3anonymousza32240ze3z83zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4332z00zz__datez00, BgL_bgl_za7c3anonymousza7a324600z00, BGl_zc3anonymousza32358ze3z83zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4333z00zz__datez00, BgL_bgl_za7c3anonymousza7a324601z00, BGl_zc3anonymousza32521ze3z83zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_rfc2822zd2datezd2ze3datezd2envz31zz__datez00, BgL_bgl__rfc2822za7d2dateza74602z00, BGl__rfc2822zd2datezd2ze3dateze3zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_integerzd2ze3secondzd2envze3zz__datez00, BgL_bgl__integerza7d2za7e3se4603z00, BGl__integerzd2ze3secondz31zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4365z00zz__datez00, BgL_bgl_za7c3anonymousza7a324604z00, BGl_zc3anonymousza32748ze3z83zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2minutezd2envz00zz__datez00, BgL_bgl__dateza7d2minuteza7d4605z00, BGl__datezd2minutezd2zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2ydayzd2envz00zz__datez00, BgL_bgl__dateza7d2ydayza7d2za74606za7, BGl__datezd2ydayzd2zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_monthzd2anamezd2envz00zz__datez00, BgL_bgl__monthza7d2anameza7d4607z00, BGl__monthzd2anamezd2zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2ze3stringzd2envze3zz__datez00, BgL_bgl__dateza7d2za7e3strin4608z00, BGl__datezd2ze3stringz31zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dayzd2anamezd2envz00zz__datez00, BgL_bgl__dayza7d2anameza7d2za74609za7, BGl__dayzd2anamezd2zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2iszd2dstzd2envzd2zz__datez00, BgL_bgl__dateza7d2isza7d2dst4610z00, BGl__datezd2iszd2dstz00zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4337z00zz__datez00, BgL_bgl_string4337za700za7za7_4611za7, "EDT", 3 );
DEFINE_STRING( BGl_string4340z00zz__datez00, BgL_bgl_string4340za700za7za7_4612za7, "EST", 3 );
DEFINE_STRING( BGl_string4343z00zz__datez00, BgL_bgl_string4343za700za7za7_4613za7, "CDT", 3 );
DEFINE_STRING( BGl_string4346z00zz__datez00, BgL_bgl_string4346za700za7za7_4614za7, "CST", 3 );
DEFINE_STRING( BGl_string4349z00zz__datez00, BgL_bgl_string4349za700za7za7_4615za7, "MDT", 3 );
DEFINE_STRING( BGl_string4352z00zz__datez00, BgL_bgl_string4352za700za7za7_4616za7, "MST", 3 );
DEFINE_STRING( BGl_string4355z00zz__datez00, BgL_bgl_string4355za700za7za7_4617za7, "PDT", 3 );
DEFINE_STRING( BGl_string4358z00zz__datez00, BgL_bgl_string4358za700za7za7_4618za7, "PST", 3 );
DEFINE_STRING( BGl_string4361z00zz__datez00, BgL_bgl_string4361za700za7za7_4619za7, "CEST", 4 );
DEFINE_STRING( BGl_string4364z00zz__datez00, BgL_bgl_string4364za700za7za7_4620za7, "UT", 2 );
DEFINE_STRING( BGl_string4366z00zz__datez00, BgL_bgl_string4366za700za7za7_4621za7, "/tmp/bigloo/runtime/Llib/date.scm", 33 );
DEFINE_STRING( BGl_string4367z00zz__datez00, BgL_bgl_string4367za700za7za7_4622za7, "ignore", 6 );
DEFINE_STRING( BGl_string4368z00zz__datez00, BgL_bgl_string4368za700za7za7_4623za7, "input-port", 10 );
DEFINE_STRING( BGl_string4370z00zz__datez00, BgL_bgl_string4370za700za7za7_4624za7, "rfc2822-parse-date", 18 );
DEFINE_STRING( BGl_string4371z00zz__datez00, BgL_bgl_string4371za700za7za7_4625za7, "Illegal zone", 12 );
DEFINE_STRING( BGl_string4372z00zz__datez00, BgL_bgl_string4372za700za7za7_4626za7, "long", 4 );
DEFINE_STRING( BGl_string4373z00zz__datez00, BgL_bgl_string4373za700za7za7_4627za7, "regular-grammar", 15 );
DEFINE_STRING( BGl_string4374z00zz__datez00, BgL_bgl_string4374za700za7za7_4628za7, "Illegal match", 13 );
DEFINE_STRING( BGl_string4375z00zz__datez00, BgL_bgl_string4375za700za7za7_4629za7, "the-failure", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2yearzd2envz00zz__datez00, BgL_bgl__dateza7d2yearza7d2za74630za7, BGl__datezd2yearzd2zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4376z00zz__datez00, BgL_bgl_string4376za700za7za7_4631za7, "STATE-16-1916", 13 );
DEFINE_STRING( BGl_string4377z00zz__datez00, BgL_bgl_string4377za700za7za7_4632za7, "STATE-14-1914", 13 );
DEFINE_STRING( BGl_string4378z00zz__datez00, BgL_bgl_string4378za700za7za7_4633za7, "STATE-10-1910", 13 );
DEFINE_STRING( BGl_string4380z00zz__datez00, BgL_bgl_string4380za700za7za7_4634za7, "STATE-4-1904", 12 );
DEFINE_STRING( BGl_string4379z00zz__datez00, BgL_bgl_string4379za700za7za7_4635za7, "STATE-13-1913", 13 );
DEFINE_STRING( BGl_string4381z00zz__datez00, BgL_bgl_string4381za700za7za7_4636za7, "STATE-6-1906", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2monthzd2envz00zz__datez00, BgL_bgl__dateza7d2monthza7d24637z00, BGl__datezd2monthzd2zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4382z00zz__datez00, BgL_bgl_string4382za700za7za7_4638za7, "STATE-2-1902", 12 );
DEFINE_STRING( BGl_string4383z00zz__datez00, BgL_bgl_string4383za700za7za7_4639za7, "STATE-5-1905", 12 );
DEFINE_STRING( BGl_string4384z00zz__datez00, BgL_bgl_string4384za700za7za7_4640za7, "STATE-3-1903", 12 );
DEFINE_STRING( BGl_string4385z00zz__datez00, BgL_bgl_string4385za700za7za7_4641za7, "STATE-11-1911", 13 );
DEFINE_STRING( BGl_string4386z00zz__datez00, BgL_bgl_string4386za700za7za7_4642za7, "STATE-9-1909", 12 );
DEFINE_STRING( BGl_string4387z00zz__datez00, BgL_bgl_string4387za700za7za7_4643za7, "STATE-8-1908", 12 );
DEFINE_STRING( BGl_string4388z00zz__datez00, BgL_bgl_string4388za700za7za7_4644za7, "STATE-0-1900", 12 );
DEFINE_STRING( BGl_string4400z00zz__datez00, BgL_bgl_string4400za700za7za7_4645za7, "STATE-3-1879", 12 );
DEFINE_STRING( BGl_string4390z00zz__datez00, BgL_bgl_string4390za700za7za7_4646za7, "Can't read on a closed input port", 33 );
DEFINE_STRING( BGl_string4389z00zz__datez00, BgL_bgl_string4389za700za7za7_4647za7, "<anonymous:2748>", 16 );
DEFINE_STRING( BGl_string4401z00zz__datez00, BgL_bgl_string4401za700za7za7_4648za7, "STATE-12-1888", 13 );
DEFINE_STRING( BGl_string4391z00zz__datez00, BgL_bgl_string4391za700za7za7_4649za7, "Illegal time", 12 );
DEFINE_STRING( BGl_string4402z00zz__datez00, BgL_bgl_string4402za700za7za7_4650za7, "STATE-11-1887", 13 );
DEFINE_STRING( BGl_string4392z00zz__datez00, BgL_bgl_string4392za700za7za7_4651za7, "STATE-21-1897", 13 );
DEFINE_STRING( BGl_string4403z00zz__datez00, BgL_bgl_string4403za700za7za7_4652za7, "STATE-17-1893", 13 );
DEFINE_STRING( BGl_string4393z00zz__datez00, BgL_bgl_string4393za700za7za7_4653za7, "STATE-19-1895", 13 );
DEFINE_STRING( BGl_string4404z00zz__datez00, BgL_bgl_string4404za700za7za7_4654za7, "STATE-9-1885", 12 );
DEFINE_STRING( BGl_string4394z00zz__datez00, BgL_bgl_string4394za700za7za7_4655za7, "STATE-15-1891", 13 );
DEFINE_STRING( BGl_string4405z00zz__datez00, BgL_bgl_string4405za700za7za7_4656za7, "STATE-10-1886", 13 );
DEFINE_STRING( BGl_string4395z00zz__datez00, BgL_bgl_string4395za700za7za7_4657za7, "STATE-0-1876", 12 );
DEFINE_STRING( BGl_string4406z00zz__datez00, BgL_bgl_string4406za700za7za7_4658za7, "STATE-5-1881", 12 );
DEFINE_STRING( BGl_string4396z00zz__datez00, BgL_bgl_string4396za700za7za7_4659za7, "STATE-16-1892", 13 );
DEFINE_STRING( BGl_string4407z00zz__datez00, BgL_bgl_string4407za700za7za7_4660za7, "STATE-4-1880", 12 );
DEFINE_STRING( BGl_string4397z00zz__datez00, BgL_bgl_string4397za700za7za7_4661za7, "STATE-13-1889", 13 );
DEFINE_STRING( BGl_string4408z00zz__datez00, BgL_bgl_string4408za700za7za7_4662za7, "STATE-2-1878", 12 );
DEFINE_STRING( BGl_string4398z00zz__datez00, BgL_bgl_string4398za700za7za7_4663za7, "STATE-8-1884", 12 );
DEFINE_STRING( BGl_string4410z00zz__datez00, BgL_bgl_string4410za700za7za7_4664za7, "Illegal month", 13 );
DEFINE_STRING( BGl_string4409z00zz__datez00, BgL_bgl_string4409za700za7za7_4665za7, "<anonymous:2521>", 16 );
DEFINE_STRING( BGl_string4399z00zz__datez00, BgL_bgl_string4399za700za7za7_4666za7, "STATE-18-1894", 13 );
DEFINE_STRING( BGl_string4412z00zz__datez00, BgL_bgl_string4412za700za7za7_4667za7, "Jan", 3 );
DEFINE_STRING( BGl_string4414z00zz__datez00, BgL_bgl_string4414za700za7za7_4668za7, "Feb", 3 );
DEFINE_STRING( BGl_string4416z00zz__datez00, BgL_bgl_string4416za700za7za7_4669za7, "Mar", 3 );
DEFINE_STRING( BGl_string4418z00zz__datez00, BgL_bgl_string4418za700za7za7_4670za7, "Apr", 3 );
DEFINE_STRING( BGl_string4420z00zz__datez00, BgL_bgl_string4420za700za7za7_4671za7, "May", 3 );
DEFINE_STRING( BGl_string4422z00zz__datez00, BgL_bgl_string4422za700za7za7_4672za7, "Jun", 3 );
DEFINE_STRING( BGl_string4424z00zz__datez00, BgL_bgl_string4424za700za7za7_4673za7, "Jul", 3 );
DEFINE_STRING( BGl_string4426z00zz__datez00, BgL_bgl_string4426za700za7za7_4674za7, "Aug", 3 );
DEFINE_STRING( BGl_string4428z00zz__datez00, BgL_bgl_string4428za700za7za7_4675za7, "Sep", 3 );
DEFINE_STRING( BGl_string4430z00zz__datez00, BgL_bgl_string4430za700za7za7_4676za7, "Oct", 3 );
DEFINE_STRING( BGl_string4432z00zz__datez00, BgL_bgl_string4432za700za7za7_4677za7, "Nov", 3 );
DEFINE_STRING( BGl_string4434z00zz__datez00, BgL_bgl_string4434za700za7za7_4678za7, "Dec", 3 );
DEFINE_STRING( BGl_string4435z00zz__datez00, BgL_bgl_string4435za700za7za7_4679za7, "the-string", 10 );
DEFINE_STRING( BGl_string4436z00zz__datez00, BgL_bgl_string4436za700za7za7_4680za7, "STATE-3-1866", 12 );
DEFINE_STRING( BGl_string4437z00zz__datez00, BgL_bgl_string4437za700za7za7_4681za7, "STATE-0-1863", 12 );
DEFINE_STRING( BGl_string4438z00zz__datez00, BgL_bgl_string4438za700za7za7_4682za7, "STATE-2-1865", 12 );
DEFINE_STRING( BGl_string4440z00zz__datez00, BgL_bgl_string4440za700za7za7_4683za7, "STATE-7-1870", 12 );
DEFINE_STRING( BGl_string4439z00zz__datez00, BgL_bgl_string4439za700za7za7_4684za7, "STATE-4-1867", 12 );
DEFINE_STRING( BGl_string4441z00zz__datez00, BgL_bgl_string4441za700za7za7_4685za7, "<anonymous:2358>", 16 );
DEFINE_STRING( BGl_string4442z00zz__datez00, BgL_bgl_string4442za700za7za7_4686za7, "Illegal integer", 15 );
DEFINE_STRING( BGl_string4443z00zz__datez00, BgL_bgl_string4443za700za7za7_4687za7, "STATE-0-1854", 12 );
DEFINE_STRING( BGl_string4444z00zz__datez00, BgL_bgl_string4444za700za7za7_4688za7, "STATE-6-1860", 12 );
DEFINE_STRING( BGl_string4445z00zz__datez00, BgL_bgl_string4445za700za7za7_4689za7, "STATE-2-1856", 12 );
DEFINE_STRING( BGl_string4446z00zz__datez00, BgL_bgl_string4446za700za7za7_4690za7, "STATE-4-1858", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2za7onezd2offsetzd2envz75zz__datez00, BgL_bgl__dateza7d2za7a7oneza7d4691za7, BGl__datezd2za7onezd2offsetza7zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4447z00zz__datez00, BgL_bgl_string4447za700za7za7_4692za7, "STATE-3-1857", 12 );
DEFINE_STRING( BGl_string4448z00zz__datez00, BgL_bgl_string4448za700za7za7_4693za7, "<anonymous:2240>", 16 );
DEFINE_STRING( BGl_string4450z00zz__datez00, BgL_bgl_string4450za700za7za7_4694za7, "ignore:Wrong number of arguments", 32 );
DEFINE_STRING( BGl_string4449z00zz__datez00, BgL_bgl_string4449za700za7za7_4695za7, "Illegal day of week", 19 );
DEFINE_STRING( BGl_string4453z00zz__datez00, BgL_bgl_string4453za700za7za7_4696za7, "funcall", 7 );
DEFINE_STRING( BGl_string4455z00zz__datez00, BgL_bgl_string4455za700za7za7_4697za7, "month-grammar", 13 );
DEFINE_STRING( BGl_string4457z00zz__datez00, BgL_bgl_string4457za700za7za7_4698za7, "arg2226", 7 );
DEFINE_STRING( BGl_string4460z00zz__datez00, BgL_bgl_string4460za700za7za7_4699za7, "fixnum-grammar", 14 );
DEFINE_STRING( BGl_string4462z00zz__datez00, BgL_bgl_string4462za700za7za7_4700za7, "arg2224", 7 );
DEFINE_STRING( BGl_string4465z00zz__datez00, BgL_bgl_string4465za700za7za7_4701za7, "time-grammar", 12 );
DEFINE_STRING( BGl_string4467z00zz__datez00, BgL_bgl_string4467za700za7za7_4702za7, "arg2223", 7 );
DEFINE_STRING( BGl_string4470z00zz__datez00, BgL_bgl_string4470za700za7za7_4703za7, "zone-grammar", 12 );
DEFINE_STRING( BGl_string4472z00zz__datez00, BgL_bgl_string4472za700za7za7_4704za7, "arg2222", 7 );
DEFINE_STRING( BGl_string4473z00zz__datez00, BgL_bgl_string4473za700za7za7_4705za7, "int", 3 );
DEFINE_STRING( BGl_string4476z00zz__datez00, BgL_bgl_string4476za700za7za7_4706za7, "arg2239", 7 );
DEFINE_STRING( BGl_string4479z00zz__datez00, BgL_bgl_string4479za700za7za7_4707za7, "arg2238", 7 );
DEFINE_STRING( BGl_string4482z00zz__datez00, BgL_bgl_string4482za700za7za7_4708za7, "arg2237", 7 );
DEFINE_STRING( BGl_string4485z00zz__datez00, BgL_bgl_string4485za700za7za7_4709za7, "arg2236", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2ze3secondszd2envze3zz__datez00, BgL_bgl__dateza7d2za7e3secon4710z00, BGl__datezd2ze3secondsz31zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4488z00zz__datez00, BgL_bgl_string4488za700za7za7_4711za7, "arg2235", 7 );
DEFINE_STRING( BGl_string4490z00zz__datez00, BgL_bgl_string4490za700za7za7_4712za7, "STATE-7-1845", 12 );
DEFINE_STRING( BGl_string4489z00zz__datez00, BgL_bgl_string4489za700za7za7_4713za7, "STATE-11-1849", 13 );
DEFINE_STRING( BGl_string4491z00zz__datez00, BgL_bgl_string4491za700za7za7_4714za7, "STATE-10-1848", 13 );
DEFINE_STRING( BGl_string4502z00zz__datez00, BgL_bgl_string4502za700za7za7_4715za7, "day", 3 );
DEFINE_STRING( BGl_string4492z00zz__datez00, BgL_bgl_string4492za700za7za7_4716za7, "STATE-3-1841", 12 );
DEFINE_STRING( BGl_string4493z00zz__datez00, BgL_bgl_string4493za700za7za7_4717za7, "STATE-8-1846", 12 );
DEFINE_STRING( BGl_string4504z00zz__datez00, BgL_bgl_string4504za700za7za7_4718za7, "dst", 3 );
DEFINE_STRING( BGl_string4494z00zz__datez00, BgL_bgl_string4494za700za7za7_4719za7, "STATE-0-1838", 12 );
DEFINE_STRING( BGl_string4495z00zz__datez00, BgL_bgl_string4495za700za7za7_4720za7, "STATE-2-1840", 12 );
DEFINE_STRING( BGl_string4506z00zz__datez00, BgL_bgl_string4506za700za7za7_4721za7, "hour", 4 );
DEFINE_STRING( BGl_string4496z00zz__datez00, BgL_bgl_string4496za700za7za7_4722za7, "STATE-4-1842", 12 );
DEFINE_STRING( BGl_string4497z00zz__datez00, BgL_bgl_string4497za700za7za7_4723za7, "STATE-5-1843", 12 );
DEFINE_STRING( BGl_string4508z00zz__datez00, BgL_bgl_string4508za700za7za7_4724za7, "min", 3 );
DEFINE_STRING( BGl_string4498z00zz__datez00, BgL_bgl_string4498za700za7za7_4725za7, "<anonymous:2058>", 16 );
DEFINE_STRING( BGl_string4510z00zz__datez00, BgL_bgl_string4510za700za7za7_4726za7, "month", 5 );
DEFINE_STRING( BGl_string4499z00zz__datez00, BgL_bgl_string4499za700za7za7_4727za7, "vector-ref", 10 );
DEFINE_STRING( BGl_string4512z00zz__datez00, BgL_bgl_string4512za700za7za7_4728za7, "nsec", 4 );
DEFINE_STRING( BGl_string4514z00zz__datez00, BgL_bgl_string4514za700za7za7_4729za7, "sec", 3 );
DEFINE_STRING( BGl_string4516z00zz__datez00, BgL_bgl_string4516za700za7za7_4730za7, "timezone", 8 );
DEFINE_STRING( BGl_string4518z00zz__datez00, BgL_bgl_string4518za700za7za7_4731za7, "year", 4 );
DEFINE_STRING( BGl_string4520z00zz__datez00, BgL_bgl_string4520za700za7za7_4732za7, "make-date", 9 );
DEFINE_STRING( BGl_string4521z00zz__datez00, BgL_bgl_string4521za700za7za7_4733za7, "Illegal keyword argument", 24 );
DEFINE_STRING( BGl_string4522z00zz__datez00, BgL_bgl_string4522za700za7za7_4734za7, "_make-date", 10 );
DEFINE_STRING( BGl_string4523z00zz__datez00, BgL_bgl_string4523za700za7za7_4735za7, "wrong number of arguments: [0..9] expected, provided", 52 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_secondszd2ze3datezd2envze3zz__datez00, BgL_bgl__secondsza7d2za7e3da4736z00, BGl__secondszd2ze3datez31zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4526z00zz__datez00, BgL_bgl_string4526za700za7za7_4737za7, "date-copy", 9 );
DEFINE_STRING( BGl_string4527z00zz__datez00, BgL_bgl_string4527za700za7za7_4738za7, "_date-copy", 10 );
DEFINE_STRING( BGl_string4528z00zz__datez00, BgL_bgl_string4528za700za7za7_4739za7, "wrong number of arguments: [1..7] expected, provided", 52 );
DEFINE_STRING( BGl_string4530z00zz__datez00, BgL_bgl_string4530za700za7za7_4740za7, "_integer->second", 16 );
DEFINE_STRING( BGl_string4529z00zz__datez00, BgL_bgl_string4529za700za7za7_4741za7, "date", 4 );
DEFINE_STRING( BGl_string4531z00zz__datez00, BgL_bgl_string4531za700za7za7_4742za7, "_date-nanosecond", 16 );
DEFINE_STRING( BGl_string4532z00zz__datez00, BgL_bgl_string4532za700za7za7_4743za7, "_date-second", 12 );
DEFINE_STRING( BGl_string4533z00zz__datez00, BgL_bgl_string4533za700za7za7_4744za7, "_date-minute", 12 );
DEFINE_STRING( BGl_string4534z00zz__datez00, BgL_bgl_string4534za700za7za7_4745za7, "_date-hour", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2datezd2envz00zz__datez00, BgL_bgl__makeza7d2dateza7d2za74746za7, opt_generic_entry, BGl__makezd2datezd2zz__datez00, BFALSE, -1 );
DEFINE_STRING( BGl_string4535z00zz__datez00, BgL_bgl_string4535za700za7za7_4747za7, "_date-day", 9 );
DEFINE_STRING( BGl_string4536z00zz__datez00, BgL_bgl_string4536za700za7za7_4748za7, "_date-week-day", 14 );
DEFINE_STRING( BGl_string4537z00zz__datez00, BgL_bgl_string4537za700za7za7_4749za7, "_date-wday", 10 );
DEFINE_STRING( BGl_string4538z00zz__datez00, BgL_bgl_string4538za700za7za7_4750za7, "_date-year-day", 14 );
DEFINE_STRING( BGl_string4540z00zz__datez00, BgL_bgl_string4540za700za7za7_4751za7, "_date-month", 11 );
DEFINE_STRING( BGl_string4539z00zz__datez00, BgL_bgl_string4539za700za7za7_4752za7, "_date-yday", 10 );
DEFINE_STRING( BGl_string4541z00zz__datez00, BgL_bgl_string4541za700za7za7_4753za7, "_date-year", 10 );
DEFINE_STRING( BGl_string4542z00zz__datez00, BgL_bgl_string4542za700za7za7_4754za7, "_date-timezone", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2wdayzd2envz00zz__datez00, BgL_bgl__dateza7d2wdayza7d2za74755za7, BGl__datezd2wdayzd2zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4543z00zz__datez00, BgL_bgl_string4543za700za7za7_4756za7, "_date-zone-offset", 17 );
DEFINE_STRING( BGl_string4544z00zz__datez00, BgL_bgl_string4544za700za7za7_4757za7, "_date-is-dst", 12 );
DEFINE_STRING( BGl_string4545z00zz__datez00, BgL_bgl_string4545za700za7za7_4758za7, "_seconds->date", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2nanosecondzd2envz00zz__datez00, BgL_bgl__dateza7d2nanoseco4759za7, BGl__datezd2nanosecondzd2zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4546z00zz__datez00, BgL_bgl_string4546za700za7za7_4760za7, "elong", 5 );
DEFINE_STRING( BGl_string4547z00zz__datez00, BgL_bgl_string4547za700za7za7_4761za7, "_date->seconds", 14 );
DEFINE_STRING( BGl_string4548z00zz__datez00, BgL_bgl_string4548za700za7za7_4762za7, "_date->string", 13 );
DEFINE_STRING( BGl_string4550z00zz__datez00, BgL_bgl_string4550za700za7za7_4763za7, "_seconds->string", 16 );
DEFINE_STRING( BGl_string4549z00zz__datez00, BgL_bgl_string4549za700za7za7_4764za7, "_date->utc-string", 17 );
DEFINE_STRING( BGl_string4551z00zz__datez00, BgL_bgl_string4551za700za7za7_4765za7, "_seconds->utc-string", 20 );
DEFINE_STRING( BGl_string4553z00zz__datez00, BgL_bgl_string4553za700za7za7_4766za7, "day-name", 8 );
DEFINE_STRING( BGl_string4554z00zz__datez00, BgL_bgl_string4554za700za7za7_4767za7, "Illegal day number", 18 );
DEFINE_STRING( BGl_string4555z00zz__datez00, BgL_bgl_string4555za700za7za7_4768za7, "bstring", 7 );
DEFINE_STRING( BGl_string4556z00zz__datez00, BgL_bgl_string4556za700za7za7_4769za7, "_day-name", 9 );
DEFINE_STRING( BGl_string4558z00zz__datez00, BgL_bgl_string4558za700za7za7_4770za7, "day-aname", 9 );
DEFINE_STRING( BGl_string4559z00zz__datez00, BgL_bgl_string4559za700za7za7_4771za7, "_day-aname", 10 );
DEFINE_STRING( BGl_string4561z00zz__datez00, BgL_bgl_string4561za700za7za7_4772za7, "month-aname", 11 );
DEFINE_STRING( BGl_string4562z00zz__datez00, BgL_bgl_string4562za700za7za7_4773za7, "Illegal month number", 20 );
DEFINE_STRING( BGl_string4563z00zz__datez00, BgL_bgl_string4563za700za7za7_4774za7, "month-name", 10 );
DEFINE_STRING( BGl_string4564z00zz__datez00, BgL_bgl_string4564za700za7za7_4775za7, "_month-name", 11 );
DEFINE_STRING( BGl_string4565z00zz__datez00, BgL_bgl_string4565za700za7za7_4776za7, "_month-aname", 12 );
DEFINE_STRING( BGl_string4566z00zz__datez00, BgL_bgl_string4566za700za7za7_4777za7, "date-month-length", 17 );
DEFINE_STRING( BGl_string4567z00zz__datez00, BgL_bgl_string4567za700za7za7_4778za7, "_date-month-length", 18 );
DEFINE_STRING( BGl_string4568z00zz__datez00, BgL_bgl_string4568za700za7za7_4779za7, "_leap-year?", 11 );
DEFINE_STRING( BGl_string4570z00zz__datez00, BgL_bgl_string4570za700za7za7_4780za7, "pair", 4 );
DEFINE_STRING( BGl_string4569z00zz__datez00, BgL_bgl_string4569za700za7za7_4781za7, "rfc2822-date->date", 18 );
DEFINE_STRING( BGl_string4571z00zz__datez00, BgL_bgl_string4571za700za7za7_4782za7, "<exit:3074>", 11 );
DEFINE_STRING( BGl_string4572z00zz__datez00, BgL_bgl_string4572za700za7za7_4783za7, "<exit:3074>:Wrong number of arguments", 37 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_rfc2822zd2parsezd2datezd2envzd2zz__datez00, BgL_bgl__rfc2822za7d2parse4784za7, BGl__rfc2822zd2parsezd2datez00zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4575z00zz__datez00, BgL_bgl_string4575za700za7za7_4785za7, "day-of-week-grammar", 19 );
DEFINE_STRING( BGl_string4577z00zz__datez00, BgL_bgl_string4577za700za7za7_4786za7, "ip", 2 );
DEFINE_STRING( BGl_string4578z00zz__datez00, BgL_bgl_string4578za700za7za7_4787za7, "_rfc2822-date->date", 19 );
DEFINE_STRING( BGl_string4580z00zz__datez00, BgL_bgl_string4580za700za7za7_4788za7, "_rfc2822-parse-date", 19 );
DEFINE_STRING( BGl_string4579z00zz__datez00, BgL_bgl_string4579za700za7za7_4789za7, "rfc2822-parse-date:Wrong number of arguments", 44 );
DEFINE_STRING( BGl_string4581z00zz__datez00, BgL_bgl_string4581za700za7za7_4790za7, "+", 1 );
DEFINE_STRING( BGl_string4582z00zz__datez00, BgL_bgl_string4582za700za7za7_4791za7, "-", 1 );
DEFINE_STRING( BGl_string4583z00zz__datez00, BgL_bgl_string4583za700za7za7_4792za7, "~a, ~a ~a ~a ~a:~a:~a ~a~a~a", 28 );
DEFINE_STRING( BGl_string4584z00zz__datez00, BgL_bgl_string4584za700za7za7_4793za7, "date->rfc2822-date", 18 );
DEFINE_STRING( BGl_string4585z00zz__datez00, BgL_bgl_string4585za700za7za7_4794za7, "_date->rfc2822-date", 19 );
DEFINE_STRING( BGl_string4586z00zz__datez00, BgL_bgl_string4586za700za7za7_4795za7, "}", 1 );
DEFINE_STRING( BGl_string4587z00zz__datez00, BgL_bgl_string4587za700za7za7_4796za7, "{", 1 );
DEFINE_STRING( BGl_string4588z00zz__datez00, BgL_bgl_string4588za700za7za7_4797za7, "__date", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2timeza7onezd2envza7zz__datez00, BgL_bgl__dateza7d2timeza7a7o4798z00, BGl__datezd2timeza7onez75zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2ze3utczd2stringzd2envz31zz__datez00, BgL_bgl__dateza7d2za7e3utcza7d4799za7, BGl__datezd2ze3utczd2stringze3zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2yearzd2dayzd2envzd2zz__datez00, BgL_bgl__dateza7d2yearza7d2d4800z00, BGl__datezd2yearzd2dayz00zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_leapzd2yearzf3zd2envzf3zz__datez00, BgL_bgl__leapza7d2yearza7f3za74801za7, BGl__leapzd2yearzf3z21zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2ze3rfc2822zd2datezd2envz31zz__datez00, BgL_bgl__dateza7d2za7e3rfc284802z00, BGl__datezd2ze3rfc2822zd2dateze3zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezf3zd2envz21zz__datez00, BgL_bgl__dateza7f3za7f3za7za7__d4803z00, BGl__datezf3zf3zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2hourzd2envz00zz__datez00, BgL_bgl__dateza7d2hourza7d2za74804za7, BGl__datezd2hourzd2zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_secondszd2ze3utczd2stringzd2envz31zz__datez00, BgL_bgl__secondsza7d2za7e3ut4805z00, BGl__secondszd2ze3utczd2stringze3zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2dayzd2envz00zz__datez00, BgL_bgl__dateza7d2dayza7d2za7za74806z00, BGl__datezd2dayzd2zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_currentzd2microsecondszd2envz00zz__datez00, BgL_bgl__currentza7d2micro4807za7, BGl__currentzd2microsecondszd2zz__datez00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_monthzd2namezd2envz00zz__datez00, BgL_bgl__monthza7d2nameza7d24808z00, BGl__monthzd2namezd2zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_currentzd2datezd2envz00zz__datez00, BgL_bgl__currentza7d2dateza74809z00, BGl__currentzd2datezd2zz__datez00, 0L, BUNSPEC, 0 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__datez00(long BgL_checksumz00_5999, char * BgL_fromz00_6000)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__datez00))
{ 
BGl_requirezd2initializa7ationz75zz__datez00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__datez00(); 
BGl_importedzd2moduleszd2initz00zz__datez00(); 
BGl_toplevelzd2initzd2zz__datez00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__datez00()
{ AN_OBJECT;
{ /* Llib/date.scm 19 */
BGl_symbol4336z00zz__datez00 = 
bstring_to_symbol(BGl_string4337z00zz__datez00); 
BGl_list4335z00zz__datez00 = 
MAKE_PAIR(BGl_symbol4336z00zz__datez00, 
BINT(((long)-4))); 
BGl_symbol4339z00zz__datez00 = 
bstring_to_symbol(BGl_string4340z00zz__datez00); 
BGl_list4338z00zz__datez00 = 
MAKE_PAIR(BGl_symbol4339z00zz__datez00, 
BINT(((long)-5))); 
BGl_symbol4342z00zz__datez00 = 
bstring_to_symbol(BGl_string4343z00zz__datez00); 
BGl_list4341z00zz__datez00 = 
MAKE_PAIR(BGl_symbol4342z00zz__datez00, 
BINT(((long)-5))); 
BGl_symbol4345z00zz__datez00 = 
bstring_to_symbol(BGl_string4346z00zz__datez00); 
BGl_list4344z00zz__datez00 = 
MAKE_PAIR(BGl_symbol4345z00zz__datez00, 
BINT(((long)-6))); 
BGl_symbol4348z00zz__datez00 = 
bstring_to_symbol(BGl_string4349z00zz__datez00); 
BGl_list4347z00zz__datez00 = 
MAKE_PAIR(BGl_symbol4348z00zz__datez00, 
BINT(((long)-6))); 
BGl_symbol4351z00zz__datez00 = 
bstring_to_symbol(BGl_string4352z00zz__datez00); 
BGl_list4350z00zz__datez00 = 
MAKE_PAIR(BGl_symbol4351z00zz__datez00, 
BINT(((long)-7))); 
BGl_symbol4354z00zz__datez00 = 
bstring_to_symbol(BGl_string4355z00zz__datez00); 
BGl_list4353z00zz__datez00 = 
MAKE_PAIR(BGl_symbol4354z00zz__datez00, 
BINT(((long)-7))); 
BGl_symbol4357z00zz__datez00 = 
bstring_to_symbol(BGl_string4358z00zz__datez00); 
BGl_list4356z00zz__datez00 = 
MAKE_PAIR(BGl_symbol4357z00zz__datez00, 
BINT(((long)-8))); 
BGl_symbol4360z00zz__datez00 = 
bstring_to_symbol(BGl_string4361z00zz__datez00); 
BGl_list4359z00zz__datez00 = 
MAKE_PAIR(BGl_symbol4360z00zz__datez00, 
BINT(((long)1))); 
BGl_symbol4363z00zz__datez00 = 
bstring_to_symbol(BGl_string4364z00zz__datez00); 
BGl_list4362z00zz__datez00 = 
MAKE_PAIR(BGl_symbol4363z00zz__datez00, 
BINT(((long)0))); 
BGl_list4334z00zz__datez00 = 
MAKE_PAIR(BGl_list4335z00zz__datez00, 
MAKE_PAIR(BGl_list4338z00zz__datez00, 
MAKE_PAIR(BGl_list4341z00zz__datez00, 
MAKE_PAIR(BGl_list4344z00zz__datez00, 
MAKE_PAIR(BGl_list4347z00zz__datez00, 
MAKE_PAIR(BGl_list4350z00zz__datez00, 
MAKE_PAIR(BGl_list4353z00zz__datez00, 
MAKE_PAIR(BGl_list4356z00zz__datez00, 
MAKE_PAIR(BGl_list4359z00zz__datez00, 
MAKE_PAIR(BGl_list4362z00zz__datez00, BNIL)))))))))); 
BGl_symbol4369z00zz__datez00 = 
bstring_to_symbol(BGl_string4370z00zz__datez00); 
BGl_symbol4411z00zz__datez00 = 
bstring_to_symbol(BGl_string4412z00zz__datez00); 
BGl_symbol4413z00zz__datez00 = 
bstring_to_symbol(BGl_string4414z00zz__datez00); 
BGl_symbol4415z00zz__datez00 = 
bstring_to_symbol(BGl_string4416z00zz__datez00); 
BGl_symbol4417z00zz__datez00 = 
bstring_to_symbol(BGl_string4418z00zz__datez00); 
BGl_symbol4419z00zz__datez00 = 
bstring_to_symbol(BGl_string4420z00zz__datez00); 
BGl_symbol4421z00zz__datez00 = 
bstring_to_symbol(BGl_string4422z00zz__datez00); 
BGl_symbol4423z00zz__datez00 = 
bstring_to_symbol(BGl_string4424z00zz__datez00); 
BGl_symbol4425z00zz__datez00 = 
bstring_to_symbol(BGl_string4426z00zz__datez00); 
BGl_symbol4427z00zz__datez00 = 
bstring_to_symbol(BGl_string4428z00zz__datez00); 
BGl_symbol4429z00zz__datez00 = 
bstring_to_symbol(BGl_string4430z00zz__datez00); 
BGl_symbol4431z00zz__datez00 = 
bstring_to_symbol(BGl_string4432z00zz__datez00); 
BGl_symbol4433z00zz__datez00 = 
bstring_to_symbol(BGl_string4434z00zz__datez00); 
BGl_symbol4452z00zz__datez00 = 
bstring_to_symbol(BGl_string4453z00zz__datez00); 
BGl_symbol4454z00zz__datez00 = 
bstring_to_symbol(BGl_string4455z00zz__datez00); 
BGl_symbol4456z00zz__datez00 = 
bstring_to_symbol(BGl_string4457z00zz__datez00); 
BGl_list4451z00zz__datez00 = 
MAKE_PAIR(BGl_symbol4452z00zz__datez00, 
MAKE_PAIR(BGl_symbol4454z00zz__datez00, 
MAKE_PAIR(BGl_symbol4454z00zz__datez00, 
MAKE_PAIR(BGl_symbol4456z00zz__datez00, BNIL)))); 
BGl_symbol4459z00zz__datez00 = 
bstring_to_symbol(BGl_string4460z00zz__datez00); 
BGl_symbol4461z00zz__datez00 = 
bstring_to_symbol(BGl_string4462z00zz__datez00); 
BGl_list4458z00zz__datez00 = 
MAKE_PAIR(BGl_symbol4452z00zz__datez00, 
MAKE_PAIR(BGl_symbol4459z00zz__datez00, 
MAKE_PAIR(BGl_symbol4459z00zz__datez00, 
MAKE_PAIR(BGl_symbol4461z00zz__datez00, BNIL)))); 
BGl_symbol4464z00zz__datez00 = 
bstring_to_symbol(BGl_string4465z00zz__datez00); 
BGl_symbol4466z00zz__datez00 = 
bstring_to_symbol(BGl_string4467z00zz__datez00); 
BGl_list4463z00zz__datez00 = 
MAKE_PAIR(BGl_symbol4452z00zz__datez00, 
MAKE_PAIR(BGl_symbol4464z00zz__datez00, 
MAKE_PAIR(BGl_symbol4464z00zz__datez00, 
MAKE_PAIR(BGl_symbol4466z00zz__datez00, BNIL)))); 
BGl_symbol4469z00zz__datez00 = 
bstring_to_symbol(BGl_string4470z00zz__datez00); 
BGl_symbol4471z00zz__datez00 = 
bstring_to_symbol(BGl_string4472z00zz__datez00); 
BGl_list4468z00zz__datez00 = 
MAKE_PAIR(BGl_symbol4452z00zz__datez00, 
MAKE_PAIR(BGl_symbol4469z00zz__datez00, 
MAKE_PAIR(BGl_symbol4469z00zz__datez00, 
MAKE_PAIR(BGl_symbol4471z00zz__datez00, BNIL)))); 
BGl_symbol4475z00zz__datez00 = 
bstring_to_symbol(BGl_string4476z00zz__datez00); 
BGl_list4474z00zz__datez00 = 
MAKE_PAIR(BGl_symbol4452z00zz__datez00, 
MAKE_PAIR(BGl_symbol4459z00zz__datez00, 
MAKE_PAIR(BGl_symbol4459z00zz__datez00, 
MAKE_PAIR(BGl_symbol4475z00zz__datez00, BNIL)))); 
BGl_symbol4478z00zz__datez00 = 
bstring_to_symbol(BGl_string4479z00zz__datez00); 
BGl_list4477z00zz__datez00 = 
MAKE_PAIR(BGl_symbol4452z00zz__datez00, 
MAKE_PAIR(BGl_symbol4454z00zz__datez00, 
MAKE_PAIR(BGl_symbol4454z00zz__datez00, 
MAKE_PAIR(BGl_symbol4478z00zz__datez00, BNIL)))); 
BGl_symbol4481z00zz__datez00 = 
bstring_to_symbol(BGl_string4482z00zz__datez00); 
BGl_list4480z00zz__datez00 = 
MAKE_PAIR(BGl_symbol4452z00zz__datez00, 
MAKE_PAIR(BGl_symbol4459z00zz__datez00, 
MAKE_PAIR(BGl_symbol4459z00zz__datez00, 
MAKE_PAIR(BGl_symbol4481z00zz__datez00, BNIL)))); 
BGl_symbol4484z00zz__datez00 = 
bstring_to_symbol(BGl_string4485z00zz__datez00); 
BGl_list4483z00zz__datez00 = 
MAKE_PAIR(BGl_symbol4452z00zz__datez00, 
MAKE_PAIR(BGl_symbol4464z00zz__datez00, 
MAKE_PAIR(BGl_symbol4464z00zz__datez00, 
MAKE_PAIR(BGl_symbol4484z00zz__datez00, BNIL)))); 
BGl_symbol4487z00zz__datez00 = 
bstring_to_symbol(BGl_string4488z00zz__datez00); 
BGl_list4486z00zz__datez00 = 
MAKE_PAIR(BGl_symbol4452z00zz__datez00, 
MAKE_PAIR(BGl_symbol4469z00zz__datez00, 
MAKE_PAIR(BGl_symbol4469z00zz__datez00, 
MAKE_PAIR(BGl_symbol4487z00zz__datez00, BNIL)))); 
BGl_keyword4501z00zz__datez00 = 
bstring_to_keyword(BGl_string4502z00zz__datez00); 
BGl_keyword4503z00zz__datez00 = 
bstring_to_keyword(BGl_string4504z00zz__datez00); 
BGl_keyword4505z00zz__datez00 = 
bstring_to_keyword(BGl_string4506z00zz__datez00); 
BGl_keyword4507z00zz__datez00 = 
bstring_to_keyword(BGl_string4508z00zz__datez00); 
BGl_keyword4509z00zz__datez00 = 
bstring_to_keyword(BGl_string4510z00zz__datez00); 
BGl_keyword4511z00zz__datez00 = 
bstring_to_keyword(BGl_string4512z00zz__datez00); 
BGl_keyword4513z00zz__datez00 = 
bstring_to_keyword(BGl_string4514z00zz__datez00); 
BGl_keyword4515z00zz__datez00 = 
bstring_to_keyword(BGl_string4516z00zz__datez00); 
BGl_keyword4517z00zz__datez00 = 
bstring_to_keyword(BGl_string4518z00zz__datez00); 
BGl_list4500z00zz__datez00 = 
MAKE_PAIR(BGl_keyword4501z00zz__datez00, 
MAKE_PAIR(BGl_keyword4503z00zz__datez00, 
MAKE_PAIR(BGl_keyword4505z00zz__datez00, 
MAKE_PAIR(BGl_keyword4507z00zz__datez00, 
MAKE_PAIR(BGl_keyword4509z00zz__datez00, 
MAKE_PAIR(BGl_keyword4511z00zz__datez00, 
MAKE_PAIR(BGl_keyword4513z00zz__datez00, 
MAKE_PAIR(BGl_keyword4515z00zz__datez00, 
MAKE_PAIR(BGl_keyword4517z00zz__datez00, BNIL))))))))); 
BGl_symbol4519z00zz__datez00 = 
bstring_to_symbol(BGl_string4520z00zz__datez00); 
BGl_list4524z00zz__datez00 = 
MAKE_PAIR(BGl_keyword4501z00zz__datez00, 
MAKE_PAIR(BGl_keyword4505z00zz__datez00, 
MAKE_PAIR(BGl_keyword4507z00zz__datez00, 
MAKE_PAIR(BGl_keyword4509z00zz__datez00, 
MAKE_PAIR(BGl_keyword4513z00zz__datez00, 
MAKE_PAIR(BGl_keyword4517z00zz__datez00, BNIL)))))); 
BGl_symbol4525z00zz__datez00 = 
bstring_to_symbol(BGl_string4526z00zz__datez00); 
BGl_symbol4552z00zz__datez00 = 
bstring_to_symbol(BGl_string4553z00zz__datez00); 
BGl_symbol4557z00zz__datez00 = 
bstring_to_symbol(BGl_string4558z00zz__datez00); 
BGl_symbol4560z00zz__datez00 = 
bstring_to_symbol(BGl_string4561z00zz__datez00); 
BGl_symbol4574z00zz__datez00 = 
bstring_to_symbol(BGl_string4575z00zz__datez00); 
BGl_symbol4576z00zz__datez00 = 
bstring_to_symbol(BGl_string4577z00zz__datez00); 
return ( 
BGl_list4573z00zz__datez00 = 
MAKE_PAIR(BGl_symbol4452z00zz__datez00, 
MAKE_PAIR(BGl_symbol4574z00zz__datez00, 
MAKE_PAIR(BGl_symbol4574z00zz__datez00, 
MAKE_PAIR(BGl_symbol4576z00zz__datez00, BNIL)))), BUNSPEC) ;} 
}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__datez00()
{ AN_OBJECT;
{ /* Llib/date.scm 19 */
{ /* Llib/date.scm 403 */
obj_t BgL_arg2030z00_864;
{ /* Llib/date.scm 403 */
obj_t BgL_arg2033z00_866;
{ /* Llib/date.scm 403 */
obj_t BgL_list2034z00_867;
{ /* Llib/date.scm 403 */
obj_t BgL_arg2037z00_869;
{ /* Llib/date.scm 403 */
obj_t BgL_arg2039z00_871;
{ /* Llib/date.scm 403 */
obj_t BgL_arg2041z00_873;
{ /* Llib/date.scm 403 */
obj_t BgL_arg2043z00_875;
{ /* Llib/date.scm 403 */
obj_t BgL_arg2045z00_877;
{ /* Llib/date.scm 403 */
obj_t BgL_arg2047z00_879;
{ /* Llib/date.scm 403 */
obj_t BgL_arg2051z00_881;
{ /* Llib/date.scm 403 */
obj_t BgL_arg2053z00_883;
{ /* Llib/date.scm 403 */
obj_t BgL_arg2055z00_885;
{ /* Llib/date.scm 403 */
obj_t BgL_arg2057z00_887;
BgL_arg2057z00_887 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_arg2055z00_885 = 
MAKE_PAIR(
BINT(((long)31)), BgL_arg2057z00_887); } 
BgL_arg2053z00_883 = 
MAKE_PAIR(
BINT(((long)30)), BgL_arg2055z00_885); } 
BgL_arg2051z00_881 = 
MAKE_PAIR(
BINT(((long)31)), BgL_arg2053z00_883); } 
BgL_arg2047z00_879 = 
MAKE_PAIR(
BINT(((long)30)), BgL_arg2051z00_881); } 
BgL_arg2045z00_877 = 
MAKE_PAIR(
BINT(((long)31)), BgL_arg2047z00_879); } 
BgL_arg2043z00_875 = 
MAKE_PAIR(
BINT(((long)31)), BgL_arg2045z00_877); } 
BgL_arg2041z00_873 = 
MAKE_PAIR(
BINT(((long)30)), BgL_arg2043z00_875); } 
BgL_arg2039z00_871 = 
MAKE_PAIR(
BINT(((long)31)), BgL_arg2041z00_873); } 
BgL_arg2037z00_869 = 
MAKE_PAIR(
BINT(((long)30)), BgL_arg2039z00_871); } 
BgL_list2034z00_867 = 
MAKE_PAIR(
BINT(((long)31)), BgL_arg2037z00_869); } 
BgL_arg2033z00_866 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
BINT(((long)28)), BgL_list2034z00_867); } 
BgL_arg2030z00_864 = 
MAKE_PAIR(
BINT(((long)31)), BgL_arg2033z00_866); } 
BGl_za2monthzd2lengthsza2zd2zz__datez00 = 
BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BgL_arg2030z00_864); } 
BGl_dayzd2ofzd2weekzd2grammarzd2zz__datez00 = BGl_proc4330z00zz__datez00; 
BGl_fixnumzd2grammarzd2zz__datez00 = BGl_proc4331z00zz__datez00; 
BGl_monthzd2grammarzd2zz__datez00 = BGl_proc4332z00zz__datez00; 
BGl_timezd2grammarzd2zz__datez00 = BGl_proc4333z00zz__datez00; 
BGl_za2timezd2za7onesza2z75zz__datez00 = BGl_list4334z00zz__datez00; 
return ( 
BGl_za7onezd2grammarz75zz__datez00 = BGl_proc4365z00zz__datez00, BUNSPEC) ;} 
}



/* <anonymous:2748> */
obj_t BGl_zc3anonymousza32748ze3z83zz__datez00(obj_t BgL_envz00_5035, obj_t BgL_inputzd2portzd2_5036)
{ AN_OBJECT;
{ /* Llib/date.scm 651 */
{ 
obj_t BgL_inputzd2portzd2_2148;
BgL_inputzd2portzd2_2148 = BgL_inputzd2portzd2_5036; 
{ 
obj_t BgL_inputzd2portzd2_2196;long BgL_lastzd2matchzd2_2197;obj_t BgL_inputzd2portzd2_2213;long BgL_lastzd2matchzd2_2214;obj_t BgL_inputzd2portzd2_2221;long BgL_lastzd2matchzd2_2222;obj_t BgL_inputzd2portzd2_2229;long BgL_lastzd2matchzd2_2230;obj_t BgL_inputzd2portzd2_2238;long BgL_lastzd2matchzd2_2239;obj_t BgL_inputzd2portzd2_2247;long BgL_lastzd2matchzd2_2248;obj_t BgL_inputzd2portzd2_2258;long BgL_lastzd2matchzd2_2259;obj_t BgL_inputzd2portzd2_2273;long BgL_lastzd2matchzd2_2274;obj_t BgL_inputzd2portzd2_2284;long BgL_lastzd2matchzd2_2285;obj_t BgL_inputzd2portzd2_2294;long BgL_lastzd2matchzd2_2295;obj_t BgL_inputzd2portzd2_2302;long BgL_lastzd2matchzd2_2303;obj_t BgL_inputzd2portzd2_2310;long BgL_lastzd2matchzd2_2311;obj_t BgL_inputzd2portzd2_2326;long BgL_lastzd2matchzd2_2327;
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6171;
{ /* Llib/date.scm 651 */
obj_t BgL_arg2753z00_2195;
{ /* Llib/date.scm 651 */
obj_t BgL_res3463z00_4230;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2148))
{ /* Llib/date.scm 651 */
BgL_res3463z00_4230 = BgL_inputzd2portzd2_2148; }  else 
{ 
obj_t BgL_auxz00_6174;
BgL_auxz00_6174 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)26385)), BGl_string4389z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_2148); 
FAILURE(BgL_auxz00_6174,BFALSE,BFALSE);} 
BgL_arg2753z00_2195 = BgL_res3463z00_4230; } 
BgL_testz00_6171 = 
INPUT_PORT_CLOSEP(BgL_arg2753z00_2195); } 
if(BgL_testz00_6171)
{ /* Llib/date.scm 651 */
return 
BGl_errorz00zz__errorz00(BGl_string4373z00zz__datez00, BGl_string4390z00zz__datez00, BgL_inputzd2portzd2_2148);}  else 
{ /* Llib/date.scm 651 */
BgL_zc3anonymousza32905ze3z83_2418:
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4456;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2148))
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_4456 = BgL_inputzd2portzd2_2148; }  else 
{ 
obj_t BgL_auxz00_6182;
BgL_auxz00_6182 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)26385)), BGl_string4367z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_2148); 
FAILURE(BgL_auxz00_6182,BFALSE,BFALSE);} 
RGC_START_MATCH(BgL_inputzd2portzd2_4456); } 
{ /* Llib/date.scm 651 */
long BgL_matchz00_2419;
BgL_inputzd2portzd2_2196 = BgL_inputzd2portzd2_2148; 
BgL_lastzd2matchzd2_2197 = ((long)5); 
BgL_zc3anonymousza32754ze3z83_2198:
{ /* Llib/date.scm 651 */
int BgL_currentzd2charzd2_2199;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4233;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2196))
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_4233 = BgL_inputzd2portzd2_2196; }  else 
{ 
obj_t BgL_auxz00_6189;
BgL_auxz00_6189 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)26385)), BGl_string4388z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_2196); 
FAILURE(BgL_auxz00_6189,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_2199 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_4233); } 
if(
(
(long)(BgL_currentzd2charzd2_2199)==((long)0)))
{ /* Llib/date.scm 651 */
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2196))
{ /* Llib/date.scm 651 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_2196))
{ 

goto BgL_zc3anonymousza32754ze3z83_2198;}  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_lastzd2matchzd2_2197; } }  else 
{ /* Llib/date.scm 651 */
long BgL_newzd2matchzd2_4240;
RGC_STOP_MATCH(BgL_inputzd2portzd2_2196); 
BgL_newzd2matchzd2_4240 = ((long)5); 
BgL_matchz00_2419 = BgL_newzd2matchzd2_4240; } }  else 
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6202;
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6203;
if(
(
(long)(BgL_currentzd2charzd2_2199)>=((long)65)))
{ /* Llib/date.scm 651 */
BgL_testz00_6203 = 
(
(long)(BgL_currentzd2charzd2_2199)<((long)91))
; }  else 
{ /* Llib/date.scm 651 */
BgL_testz00_6203 = ((bool_t)0)
; } 
if(BgL_testz00_6203)
{ /* Llib/date.scm 651 */
BgL_testz00_6202 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 651 */
if(
(
(long)(BgL_currentzd2charzd2_2199)>=((long)97)))
{ /* Llib/date.scm 651 */
BgL_testz00_6202 = 
(
(long)(BgL_currentzd2charzd2_2199)<((long)123))
; }  else 
{ /* Llib/date.scm 651 */
BgL_testz00_6202 = ((bool_t)0)
; } } } 
if(BgL_testz00_6202)
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_2247 = BgL_inputzd2portzd2_2196; 
BgL_lastzd2matchzd2_2248 = BgL_lastzd2matchzd2_2197; 
BgL_zc3anonymousza32787ze3z83_2249:
{ /* Llib/date.scm 651 */
long BgL_newzd2matchzd2_2250;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4320;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2247))
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_4320 = BgL_inputzd2portzd2_2247; }  else 
{ 
obj_t BgL_auxz00_6216;
BgL_auxz00_6216 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)26385)), BGl_string4383z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_2247); 
FAILURE(BgL_auxz00_6216,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_4320); } 
BgL_newzd2matchzd2_2250 = ((long)5); 
{ /* Llib/date.scm 651 */
int BgL_currentzd2charzd2_2251;
BgL_currentzd2charzd2_2251 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2247); 
if(
(
(long)(BgL_currentzd2charzd2_2251)==((long)0)))
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6225;
{ /* Llib/date.scm 651 */
bool_t BgL_res3469z00_4328;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4324;
BgL_inputzd2portzd2_4324 = BgL_inputzd2portzd2_2247; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4324))
{ /* Llib/date.scm 651 */
BgL_res3469z00_4328 = 
rgc_fill_buffer(BgL_inputzd2portzd2_4324); }  else 
{ /* Llib/date.scm 651 */
BgL_res3469z00_4328 = ((bool_t)0); } } 
BgL_testz00_6225 = BgL_res3469z00_4328; } 
if(BgL_testz00_6225)
{ 

goto BgL_zc3anonymousza32787ze3z83_2249;}  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_newzd2matchzd2_2250; } }  else 
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6229;
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6230;
if(
(
(long)(BgL_currentzd2charzd2_2251)>=((long)65)))
{ /* Llib/date.scm 651 */
BgL_testz00_6230 = 
(
(long)(BgL_currentzd2charzd2_2251)<((long)91))
; }  else 
{ /* Llib/date.scm 651 */
BgL_testz00_6230 = ((bool_t)0)
; } 
if(BgL_testz00_6230)
{ /* Llib/date.scm 651 */
BgL_testz00_6229 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 651 */
if(
(
(long)(BgL_currentzd2charzd2_2251)>=((long)97)))
{ /* Llib/date.scm 651 */
BgL_testz00_6229 = 
(
(long)(BgL_currentzd2charzd2_2251)<((long)123))
; }  else 
{ /* Llib/date.scm 651 */
BgL_testz00_6229 = ((bool_t)0)
; } } } 
if(BgL_testz00_6229)
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_2273 = BgL_inputzd2portzd2_2247; 
BgL_lastzd2matchzd2_2274 = BgL_newzd2matchzd2_2250; 
BgL_zc3anonymousza32801ze3z83_2275:
{ /* Llib/date.scm 651 */
long BgL_newzd2matchzd2_2276;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4356;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2273))
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_4356 = BgL_inputzd2portzd2_2273; }  else 
{ 
obj_t BgL_auxz00_6243;
BgL_auxz00_6243 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)26385)), BGl_string4381z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_2273); 
FAILURE(BgL_auxz00_6243,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_4356); } 
BgL_newzd2matchzd2_2276 = ((long)4); 
{ /* Llib/date.scm 651 */
int BgL_currentzd2charzd2_2277;
BgL_currentzd2charzd2_2277 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2273); 
if(
(
(long)(BgL_currentzd2charzd2_2277)==((long)0)))
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6252;
{ /* Llib/date.scm 651 */
bool_t BgL_res3471z00_4364;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4360;
BgL_inputzd2portzd2_4360 = BgL_inputzd2portzd2_2273; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4360))
{ /* Llib/date.scm 651 */
BgL_res3471z00_4364 = 
rgc_fill_buffer(BgL_inputzd2portzd2_4360); }  else 
{ /* Llib/date.scm 651 */
BgL_res3471z00_4364 = ((bool_t)0); } } 
BgL_testz00_6252 = BgL_res3471z00_4364; } 
if(BgL_testz00_6252)
{ 

goto BgL_zc3anonymousza32801ze3z83_2275;}  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_newzd2matchzd2_2276; } }  else 
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6256;
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6257;
if(
(
(long)(BgL_currentzd2charzd2_2277)>=((long)65)))
{ /* Llib/date.scm 651 */
BgL_testz00_6257 = 
(
(long)(BgL_currentzd2charzd2_2277)<((long)91))
; }  else 
{ /* Llib/date.scm 651 */
BgL_testz00_6257 = ((bool_t)0)
; } 
if(BgL_testz00_6257)
{ /* Llib/date.scm 651 */
BgL_testz00_6256 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 651 */
if(
(
(long)(BgL_currentzd2charzd2_2277)>=((long)97)))
{ /* Llib/date.scm 651 */
BgL_testz00_6256 = 
(
(long)(BgL_currentzd2charzd2_2277)<((long)123))
; }  else 
{ /* Llib/date.scm 651 */
BgL_testz00_6256 = ((bool_t)0)
; } } } 
if(BgL_testz00_6256)
{ 
long BgL_lastzd2matchzd2_6268;
BgL_lastzd2matchzd2_6268 = BgL_newzd2matchzd2_2276; 
BgL_lastzd2matchzd2_2274 = BgL_lastzd2matchzd2_6268; 
goto BgL_zc3anonymousza32801ze3z83_2275;}  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_newzd2matchzd2_2276; } } } } }  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_newzd2matchzd2_2250; } } } } }  else 
{ /* Llib/date.scm 651 */
if(
(
(long)(BgL_currentzd2charzd2_2199)==((long)45)))
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_2284 = BgL_inputzd2portzd2_2196; 
BgL_lastzd2matchzd2_2285 = BgL_lastzd2matchzd2_2197; 
BgL_zc3anonymousza32807ze3z83_2286:
{ /* Llib/date.scm 651 */
long BgL_newzd2matchzd2_2287;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4373;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2284))
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_4373 = BgL_inputzd2portzd2_2284; }  else 
{ 
obj_t BgL_auxz00_6274;
BgL_auxz00_6274 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)26385)), BGl_string4380z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_2284); 
FAILURE(BgL_auxz00_6274,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_4373); } 
BgL_newzd2matchzd2_2287 = ((long)5); 
{ /* Llib/date.scm 651 */
int BgL_currentzd2charzd2_2288;
BgL_currentzd2charzd2_2288 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2284); 
if(
(
(long)(BgL_currentzd2charzd2_2288)==((long)0)))
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6283;
{ /* Llib/date.scm 651 */
bool_t BgL_res3472z00_4381;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4377;
BgL_inputzd2portzd2_4377 = BgL_inputzd2portzd2_2284; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4377))
{ /* Llib/date.scm 651 */
BgL_res3472z00_4381 = 
rgc_fill_buffer(BgL_inputzd2portzd2_4377); }  else 
{ /* Llib/date.scm 651 */
BgL_res3472z00_4381 = ((bool_t)0); } } 
BgL_testz00_6283 = BgL_res3472z00_4381; } 
if(BgL_testz00_6283)
{ 

goto BgL_zc3anonymousza32807ze3z83_2286;}  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_newzd2matchzd2_2287; } }  else 
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6287;
if(
(
(long)(BgL_currentzd2charzd2_2288)>=((long)48)))
{ /* Llib/date.scm 651 */
BgL_testz00_6287 = 
(
(long)(BgL_currentzd2charzd2_2288)<((long)58))
; }  else 
{ /* Llib/date.scm 651 */
BgL_testz00_6287 = ((bool_t)0)
; } 
if(BgL_testz00_6287)
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_2221 = BgL_inputzd2portzd2_2284; 
BgL_lastzd2matchzd2_2222 = BgL_newzd2matchzd2_2287; 
BgL_zc3anonymousza32772ze3z83_2223:
{ /* Llib/date.scm 651 */
int BgL_currentzd2charzd2_2224;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4278;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2221))
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_4278 = BgL_inputzd2portzd2_2221; }  else 
{ 
obj_t BgL_auxz00_6295;
BgL_auxz00_6295 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)26385)), BGl_string4386z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_2221); 
FAILURE(BgL_auxz00_6295,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_2224 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_4278); } 
if(
(
(long)(BgL_currentzd2charzd2_2224)==((long)0)))
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6303;
{ /* Llib/date.scm 651 */
bool_t BgL_res3466z00_4285;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4281;
BgL_inputzd2portzd2_4281 = BgL_inputzd2portzd2_2221; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4281))
{ /* Llib/date.scm 651 */
BgL_res3466z00_4285 = 
rgc_fill_buffer(BgL_inputzd2portzd2_4281); }  else 
{ /* Llib/date.scm 651 */
BgL_res3466z00_4285 = ((bool_t)0); } } 
BgL_testz00_6303 = BgL_res3466z00_4285; } 
if(BgL_testz00_6303)
{ 

goto BgL_zc3anonymousza32772ze3z83_2223;}  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_lastzd2matchzd2_2222; } }  else 
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6307;
if(
(
(long)(BgL_currentzd2charzd2_2224)>=((long)48)))
{ /* Llib/date.scm 651 */
BgL_testz00_6307 = 
(
(long)(BgL_currentzd2charzd2_2224)<((long)58))
; }  else 
{ /* Llib/date.scm 651 */
BgL_testz00_6307 = ((bool_t)0)
; } 
if(BgL_testz00_6307)
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_2302 = BgL_inputzd2portzd2_2221; 
BgL_lastzd2matchzd2_2303 = BgL_lastzd2matchzd2_2222; 
BgL_zc3anonymousza32818ze3z83_2304:
{ /* Llib/date.scm 651 */
int BgL_currentzd2charzd2_2305;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4400;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2302))
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_4400 = BgL_inputzd2portzd2_2302; }  else 
{ 
obj_t BgL_auxz00_6315;
BgL_auxz00_6315 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)26385)), BGl_string4378z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_2302); 
FAILURE(BgL_auxz00_6315,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_2305 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_4400); } 
if(
(
(long)(BgL_currentzd2charzd2_2305)==((long)0)))
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6323;
{ /* Llib/date.scm 651 */
bool_t BgL_res3474z00_4407;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4403;
BgL_inputzd2portzd2_4403 = BgL_inputzd2portzd2_2302; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4403))
{ /* Llib/date.scm 651 */
BgL_res3474z00_4407 = 
rgc_fill_buffer(BgL_inputzd2portzd2_4403); }  else 
{ /* Llib/date.scm 651 */
BgL_res3474z00_4407 = ((bool_t)0); } } 
BgL_testz00_6323 = BgL_res3474z00_4407; } 
if(BgL_testz00_6323)
{ 

goto BgL_zc3anonymousza32818ze3z83_2304;}  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_lastzd2matchzd2_2303; } }  else 
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6327;
if(
(
(long)(BgL_currentzd2charzd2_2305)>=((long)48)))
{ /* Llib/date.scm 651 */
BgL_testz00_6327 = 
(
(long)(BgL_currentzd2charzd2_2305)<((long)58))
; }  else 
{ /* Llib/date.scm 651 */
BgL_testz00_6327 = ((bool_t)0)
; } 
if(BgL_testz00_6327)
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_2229 = BgL_inputzd2portzd2_2302; 
BgL_lastzd2matchzd2_2230 = BgL_lastzd2matchzd2_2303; 
BgL_zc3anonymousza32777ze3z83_2231:
{ /* Llib/date.scm 651 */
long BgL_newzd2matchzd2_2232;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4290;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2229))
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_4290 = BgL_inputzd2portzd2_2229; }  else 
{ 
obj_t BgL_auxz00_6335;
BgL_auxz00_6335 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)26385)), BGl_string4385z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_2229); 
FAILURE(BgL_auxz00_6335,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_4290); } 
BgL_newzd2matchzd2_2232 = ((long)2); 
{ /* Llib/date.scm 651 */
int BgL_currentzd2charzd2_2233;
BgL_currentzd2charzd2_2233 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2229); 
if(
(
(long)(BgL_currentzd2charzd2_2233)==((long)0)))
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6344;
{ /* Llib/date.scm 651 */
bool_t BgL_res3467z00_4298;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4294;
BgL_inputzd2portzd2_4294 = BgL_inputzd2portzd2_2229; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4294))
{ /* Llib/date.scm 651 */
BgL_res3467z00_4298 = 
rgc_fill_buffer(BgL_inputzd2portzd2_4294); }  else 
{ /* Llib/date.scm 651 */
BgL_res3467z00_4298 = ((bool_t)0); } } 
BgL_testz00_6344 = BgL_res3467z00_4298; } 
if(BgL_testz00_6344)
{ 

goto BgL_zc3anonymousza32777ze3z83_2231;}  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_newzd2matchzd2_2232; } }  else 
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6348;
if(
(
(long)(BgL_currentzd2charzd2_2233)>=((long)48)))
{ /* Llib/date.scm 651 */
BgL_testz00_6348 = 
(
(long)(BgL_currentzd2charzd2_2233)<((long)58))
; }  else 
{ /* Llib/date.scm 651 */
BgL_testz00_6348 = ((bool_t)0)
; } 
if(BgL_testz00_6348)
{ /* Llib/date.scm 651 */
long BgL_newzd2matchzd2_4305;
RGC_STOP_MATCH(BgL_inputzd2portzd2_2229); 
BgL_newzd2matchzd2_4305 = ((long)1); 
BgL_matchz00_2419 = BgL_newzd2matchzd2_4305; }  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_newzd2matchzd2_2232; } } } } }  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_lastzd2matchzd2_2303; } } } }  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_lastzd2matchzd2_2222; } } } }  else 
{ /* Llib/date.scm 651 */
if(
(
(long)(BgL_currentzd2charzd2_2288)==((long)45)))
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_2213 = BgL_inputzd2portzd2_2284; 
BgL_lastzd2matchzd2_2214 = BgL_newzd2matchzd2_2287; 
BgL_zc3anonymousza32767ze3z83_2215:
{ /* Llib/date.scm 651 */
int BgL_currentzd2charzd2_2216;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4266;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2213))
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_4266 = BgL_inputzd2portzd2_2213; }  else 
{ 
obj_t BgL_auxz00_6360;
BgL_auxz00_6360 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)26385)), BGl_string4387z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_2213); 
FAILURE(BgL_auxz00_6360,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_2216 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_4266); } 
if(
(
(long)(BgL_currentzd2charzd2_2216)==((long)0)))
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6368;
{ /* Llib/date.scm 651 */
bool_t BgL_res3465z00_4273;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4269;
BgL_inputzd2portzd2_4269 = BgL_inputzd2portzd2_2213; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4269))
{ /* Llib/date.scm 651 */
BgL_res3465z00_4273 = 
rgc_fill_buffer(BgL_inputzd2portzd2_4269); }  else 
{ /* Llib/date.scm 651 */
BgL_res3465z00_4273 = ((bool_t)0); } } 
BgL_testz00_6368 = BgL_res3465z00_4273; } 
if(BgL_testz00_6368)
{ 

goto BgL_zc3anonymousza32767ze3z83_2215;}  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_lastzd2matchzd2_2214; } }  else 
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6372;
if(
(
(long)(BgL_currentzd2charzd2_2216)>=((long)48)))
{ /* Llib/date.scm 651 */
BgL_testz00_6372 = 
(
(long)(BgL_currentzd2charzd2_2216)<((long)58))
; }  else 
{ /* Llib/date.scm 651 */
BgL_testz00_6372 = ((bool_t)0)
; } 
if(BgL_testz00_6372)
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_2294 = BgL_inputzd2portzd2_2213; 
BgL_lastzd2matchzd2_2295 = BgL_lastzd2matchzd2_2214; 
BgL_zc3anonymousza32813ze3z83_2296:
{ /* Llib/date.scm 651 */
int BgL_currentzd2charzd2_2297;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4388;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2294))
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_4388 = BgL_inputzd2portzd2_2294; }  else 
{ 
obj_t BgL_auxz00_6380;
BgL_auxz00_6380 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)26385)), BGl_string4379z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_2294); 
FAILURE(BgL_auxz00_6380,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_2297 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_4388); } 
if(
(
(long)(BgL_currentzd2charzd2_2297)==((long)0)))
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6388;
{ /* Llib/date.scm 651 */
bool_t BgL_res3473z00_4395;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4391;
BgL_inputzd2portzd2_4391 = BgL_inputzd2portzd2_2294; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4391))
{ /* Llib/date.scm 651 */
BgL_res3473z00_4395 = 
rgc_fill_buffer(BgL_inputzd2portzd2_4391); }  else 
{ /* Llib/date.scm 651 */
BgL_res3473z00_4395 = ((bool_t)0); } } 
BgL_testz00_6388 = BgL_res3473z00_4395; } 
if(BgL_testz00_6388)
{ 

goto BgL_zc3anonymousza32813ze3z83_2296;}  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_lastzd2matchzd2_2295; } }  else 
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6392;
if(
(
(long)(BgL_currentzd2charzd2_2297)>=((long)48)))
{ /* Llib/date.scm 651 */
BgL_testz00_6392 = 
(
(long)(BgL_currentzd2charzd2_2297)<((long)58))
; }  else 
{ /* Llib/date.scm 651 */
BgL_testz00_6392 = ((bool_t)0)
; } 
if(BgL_testz00_6392)
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_2310 = BgL_inputzd2portzd2_2294; 
BgL_lastzd2matchzd2_2311 = BgL_lastzd2matchzd2_2295; 
BgL_zc3anonymousza32823ze3z83_2312:
{ /* Llib/date.scm 651 */
int BgL_currentzd2charzd2_2313;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4412;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2310))
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_4412 = BgL_inputzd2portzd2_2310; }  else 
{ 
obj_t BgL_auxz00_6400;
BgL_auxz00_6400 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)26385)), BGl_string4377z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_2310); 
FAILURE(BgL_auxz00_6400,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_2313 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_4412); } 
if(
(
(long)(BgL_currentzd2charzd2_2313)==((long)0)))
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6408;
{ /* Llib/date.scm 651 */
bool_t BgL_res3475z00_4419;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4415;
BgL_inputzd2portzd2_4415 = BgL_inputzd2portzd2_2310; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4415))
{ /* Llib/date.scm 651 */
BgL_res3475z00_4419 = 
rgc_fill_buffer(BgL_inputzd2portzd2_4415); }  else 
{ /* Llib/date.scm 651 */
BgL_res3475z00_4419 = ((bool_t)0); } } 
BgL_testz00_6408 = BgL_res3475z00_4419; } 
if(BgL_testz00_6408)
{ 

goto BgL_zc3anonymousza32823ze3z83_2312;}  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_lastzd2matchzd2_2311; } }  else 
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6412;
if(
(
(long)(BgL_currentzd2charzd2_2313)>=((long)48)))
{ /* Llib/date.scm 651 */
BgL_testz00_6412 = 
(
(long)(BgL_currentzd2charzd2_2313)<((long)58))
; }  else 
{ /* Llib/date.scm 651 */
BgL_testz00_6412 = ((bool_t)0)
; } 
if(BgL_testz00_6412)
{ /* Llib/date.scm 651 */
long BgL_newzd2matchzd2_4426;
RGC_STOP_MATCH(BgL_inputzd2portzd2_2310); 
BgL_newzd2matchzd2_4426 = ((long)3); 
BgL_matchz00_2419 = BgL_newzd2matchzd2_4426; }  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_lastzd2matchzd2_2311; } } } }  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_lastzd2matchzd2_2295; } } } }  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_lastzd2matchzd2_2214; } } } }  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_newzd2matchzd2_2287; } } } } } }  else 
{ /* Llib/date.scm 651 */
if(
(
(long)(BgL_currentzd2charzd2_2199)==((long)43)))
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_2238 = BgL_inputzd2portzd2_2196; 
BgL_lastzd2matchzd2_2239 = BgL_lastzd2matchzd2_2197; 
BgL_zc3anonymousza32782ze3z83_2240:
{ /* Llib/date.scm 651 */
long BgL_newzd2matchzd2_2241;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4307;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2238))
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_4307 = BgL_inputzd2portzd2_2238; }  else 
{ 
obj_t BgL_auxz00_6424;
BgL_auxz00_6424 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)26385)), BGl_string4384z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_2238); 
FAILURE(BgL_auxz00_6424,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_4307); } 
BgL_newzd2matchzd2_2241 = ((long)5); 
{ /* Llib/date.scm 651 */
int BgL_currentzd2charzd2_2242;
BgL_currentzd2charzd2_2242 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2238); 
if(
(
(long)(BgL_currentzd2charzd2_2242)==((long)0)))
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6433;
{ /* Llib/date.scm 651 */
bool_t BgL_res3468z00_4315;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4311;
BgL_inputzd2portzd2_4311 = BgL_inputzd2portzd2_2238; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4311))
{ /* Llib/date.scm 651 */
BgL_res3468z00_4315 = 
rgc_fill_buffer(BgL_inputzd2portzd2_4311); }  else 
{ /* Llib/date.scm 651 */
BgL_res3468z00_4315 = ((bool_t)0); } } 
BgL_testz00_6433 = BgL_res3468z00_4315; } 
if(BgL_testz00_6433)
{ 

goto BgL_zc3anonymousza32782ze3z83_2240;}  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_newzd2matchzd2_2241; } }  else 
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6437;
if(
(
(long)(BgL_currentzd2charzd2_2242)>=((long)48)))
{ /* Llib/date.scm 651 */
BgL_testz00_6437 = 
(
(long)(BgL_currentzd2charzd2_2242)<((long)58))
; }  else 
{ /* Llib/date.scm 651 */
BgL_testz00_6437 = ((bool_t)0)
; } 
if(BgL_testz00_6437)
{ 
long BgL_lastzd2matchzd2_6444;obj_t BgL_inputzd2portzd2_6443;
BgL_inputzd2portzd2_6443 = BgL_inputzd2portzd2_2238; 
BgL_lastzd2matchzd2_6444 = BgL_newzd2matchzd2_2241; 
BgL_lastzd2matchzd2_2222 = BgL_lastzd2matchzd2_6444; 
BgL_inputzd2portzd2_2221 = BgL_inputzd2portzd2_6443; 
goto BgL_zc3anonymousza32772ze3z83_2223;}  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_newzd2matchzd2_2241; } } } } }  else 
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6445;
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6446;
if(
(
(long)(BgL_currentzd2charzd2_2199)==((long)10)))
{ /* Llib/date.scm 651 */
BgL_testz00_6446 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 651 */
BgL_testz00_6446 = 
(
(long)(BgL_currentzd2charzd2_2199)==((long)9))
; } 
if(BgL_testz00_6446)
{ /* Llib/date.scm 651 */
BgL_testz00_6445 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 651 */
if(
(
(long)(BgL_currentzd2charzd2_2199)==((long)13)))
{ /* Llib/date.scm 651 */
BgL_testz00_6445 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 651 */
BgL_testz00_6445 = 
(
(long)(BgL_currentzd2charzd2_2199)==((long)32))
; } } } 
if(BgL_testz00_6445)
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_2258 = BgL_inputzd2portzd2_2196; 
BgL_lastzd2matchzd2_2259 = BgL_lastzd2matchzd2_2197; 
BgL_zc3anonymousza32793ze3z83_2260:
{ /* Llib/date.scm 651 */
long BgL_newzd2matchzd2_2261;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4337;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2258))
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_4337 = BgL_inputzd2portzd2_2258; }  else 
{ 
obj_t BgL_auxz00_6459;
BgL_auxz00_6459 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)26385)), BGl_string4382z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_2258); 
FAILURE(BgL_auxz00_6459,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_4337); } 
BgL_newzd2matchzd2_2261 = ((long)0); 
{ /* Llib/date.scm 651 */
int BgL_currentzd2charzd2_2262;
BgL_currentzd2charzd2_2262 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2258); 
if(
(
(long)(BgL_currentzd2charzd2_2262)==((long)0)))
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6468;
{ /* Llib/date.scm 651 */
bool_t BgL_res3470z00_4345;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4341;
BgL_inputzd2portzd2_4341 = BgL_inputzd2portzd2_2258; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4341))
{ /* Llib/date.scm 651 */
BgL_res3470z00_4345 = 
rgc_fill_buffer(BgL_inputzd2portzd2_4341); }  else 
{ /* Llib/date.scm 651 */
BgL_res3470z00_4345 = ((bool_t)0); } } 
BgL_testz00_6468 = BgL_res3470z00_4345; } 
if(BgL_testz00_6468)
{ 

goto BgL_zc3anonymousza32793ze3z83_2260;}  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_newzd2matchzd2_2261; } }  else 
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6472;
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6473;
if(
(
(long)(BgL_currentzd2charzd2_2262)==((long)10)))
{ /* Llib/date.scm 651 */
BgL_testz00_6473 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 651 */
BgL_testz00_6473 = 
(
(long)(BgL_currentzd2charzd2_2262)==((long)9))
; } 
if(BgL_testz00_6473)
{ /* Llib/date.scm 651 */
BgL_testz00_6472 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 651 */
if(
(
(long)(BgL_currentzd2charzd2_2262)==((long)13)))
{ /* Llib/date.scm 651 */
BgL_testz00_6472 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 651 */
BgL_testz00_6472 = 
(
(long)(BgL_currentzd2charzd2_2262)==((long)32))
; } } } 
if(BgL_testz00_6472)
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_2326 = BgL_inputzd2portzd2_2258; 
BgL_lastzd2matchzd2_2327 = BgL_newzd2matchzd2_2261; 
BgL_zc3anonymousza32830ze3z83_2328:
{ /* Llib/date.scm 651 */
long BgL_newzd2matchzd2_2329;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4432;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2326))
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_4432 = BgL_inputzd2portzd2_2326; }  else 
{ 
obj_t BgL_auxz00_6486;
BgL_auxz00_6486 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)26385)), BGl_string4376z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_2326); 
FAILURE(BgL_auxz00_6486,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_4432); } 
BgL_newzd2matchzd2_2329 = ((long)0); 
{ /* Llib/date.scm 651 */
int BgL_currentzd2charzd2_2330;
BgL_currentzd2charzd2_2330 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2326); 
if(
(
(long)(BgL_currentzd2charzd2_2330)==((long)0)))
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6495;
{ /* Llib/date.scm 651 */
bool_t BgL_res3476z00_4440;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4436;
BgL_inputzd2portzd2_4436 = BgL_inputzd2portzd2_2326; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4436))
{ /* Llib/date.scm 651 */
BgL_res3476z00_4440 = 
rgc_fill_buffer(BgL_inputzd2portzd2_4436); }  else 
{ /* Llib/date.scm 651 */
BgL_res3476z00_4440 = ((bool_t)0); } } 
BgL_testz00_6495 = BgL_res3476z00_4440; } 
if(BgL_testz00_6495)
{ 

goto BgL_zc3anonymousza32830ze3z83_2328;}  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_newzd2matchzd2_2329; } }  else 
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6499;
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6500;
if(
(
(long)(BgL_currentzd2charzd2_2330)==((long)10)))
{ /* Llib/date.scm 651 */
BgL_testz00_6500 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 651 */
BgL_testz00_6500 = 
(
(long)(BgL_currentzd2charzd2_2330)==((long)9))
; } 
if(BgL_testz00_6500)
{ /* Llib/date.scm 651 */
BgL_testz00_6499 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 651 */
if(
(
(long)(BgL_currentzd2charzd2_2330)==((long)13)))
{ /* Llib/date.scm 651 */
BgL_testz00_6499 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 651 */
BgL_testz00_6499 = 
(
(long)(BgL_currentzd2charzd2_2330)==((long)32))
; } } } 
if(BgL_testz00_6499)
{ 
long BgL_lastzd2matchzd2_6511;
BgL_lastzd2matchzd2_6511 = BgL_newzd2matchzd2_2329; 
BgL_lastzd2matchzd2_2327 = BgL_lastzd2matchzd2_6511; 
goto BgL_zc3anonymousza32830ze3z83_2328;}  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_newzd2matchzd2_2329; } } } } }  else 
{ /* Llib/date.scm 651 */
BgL_matchz00_2419 = BgL_newzd2matchzd2_2261; } } } } }  else 
{ /* Llib/date.scm 651 */
long BgL_newzd2matchzd2_4264;
RGC_STOP_MATCH(BgL_inputzd2portzd2_2196); 
BgL_newzd2matchzd2_4264 = ((long)5); 
BgL_matchz00_2419 = BgL_newzd2matchzd2_4264; } } } } } } 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_2148); 
switch( BgL_matchz00_2419) { case ((long)5) : 

{ /* Llib/date.scm 678 */
obj_t BgL_auxz00_6514;
{ /* Llib/date.scm 651 */
bool_t BgL_testz00_6515;
{ /* Llib/date.scm 651 */
long BgL_arg2898z00_2408;
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4452;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2148))
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_4452 = BgL_inputzd2portzd2_2148; }  else 
{ 
obj_t BgL_auxz00_6518;
BgL_auxz00_6518 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)26385)), BGl_string4375z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_2148); 
FAILURE(BgL_auxz00_6518,BFALSE,BFALSE);} 
BgL_arg2898z00_2408 = 
RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_4452); } 
BgL_testz00_6515 = 
(BgL_arg2898z00_2408==((long)0)); } 
if(BgL_testz00_6515)
{ /* Llib/date.scm 651 */
BgL_auxz00_6514 = BCNST(256)
; }  else 
{ /* Llib/date.scm 651 */
obj_t BgL_inputzd2portzd2_4455;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2148))
{ /* Llib/date.scm 651 */
BgL_inputzd2portzd2_4455 = BgL_inputzd2portzd2_2148; }  else 
{ 
obj_t BgL_auxz00_6526;
BgL_auxz00_6526 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)26385)), BGl_string4375z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_2148); 
FAILURE(BgL_auxz00_6526,BFALSE,BFALSE);} 
BgL_auxz00_6514 = 
BCHAR(
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_4455)); } } 
return 
BGl_parsezd2errorzd2zz__datez00(BGl_symbol4369z00zz__datez00, BGl_string4371z00zz__datez00, BgL_auxz00_6514, BgL_inputzd2portzd2_2148);} break;case ((long)4) : 

{ /* Llib/date.scm 673 */
obj_t BgL_cz00_2427;
{ /* Llib/date.scm 673 */
obj_t BgL_arg2914z00_2431;
BgL_arg2914z00_2431 = 
rgc_buffer_symbol(BgL_inputzd2portzd2_2148); 
BgL_cz00_2427 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg2914z00_2431, BGl_za2timezd2za7onesza2z75zz__datez00); } 
if(
PAIRP(BgL_cz00_2427))
{ /* Llib/date.scm 675 */
long BgL_za72za7_4463;
{ /* Llib/date.scm 675 */
obj_t BgL_auxz00_6537;
{ /* Llib/date.scm 675 */
obj_t BgL_aux3520z00_5144;
BgL_aux3520z00_5144 = 
CDR(BgL_cz00_2427); 
if(
INTEGERP(BgL_aux3520z00_5144))
{ /* Llib/date.scm 675 */
BgL_auxz00_6537 = BgL_aux3520z00_5144
; }  else 
{ 
obj_t BgL_auxz00_6541;
BgL_auxz00_6541 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)27338)), BGl_string4367z00zz__datez00, BGl_string4372z00zz__datez00, BgL_aux3520z00_5144); 
FAILURE(BgL_auxz00_6541,BFALSE,BFALSE);} } 
BgL_za72za7_4463 = 
(long)CINT(BgL_auxz00_6537); } 
return 
BINT(
(((long)3600)*BgL_za72za7_4463));}  else 
{ /* Llib/date.scm 674 */
return 
BINT(((long)0));} } break;case ((long)3) : 

{ /* Llib/date.scm 668 */
long BgL_hz00_2432;long BgL_mz00_2433;
{ /* Llib/date.scm 668 */
int BgL_arg2918z00_2437;
{ /* Llib/date.scm 668 */
int BgL_auxz00_6549;
BgL_auxz00_6549 = 
(int)(((long)2)); 
BgL_arg2918z00_2437 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_2148, BgL_auxz00_6549); } 
BgL_hz00_2432 = 
(
(long)(BgL_arg2918z00_2437)-((long)48)); } 
{ /* Llib/date.scm 669 */
long BgL_arg2920z00_2439;long BgL_arg2921z00_2440;
{ /* Llib/date.scm 669 */
long BgL_arg2923z00_2442;
{ /* Llib/date.scm 669 */
int BgL_arg2924z00_2443;
{ /* Llib/date.scm 669 */
int BgL_auxz00_6554;
BgL_auxz00_6554 = 
(int)(((long)3)); 
BgL_arg2924z00_2443 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_2148, BgL_auxz00_6554); } 
BgL_arg2923z00_2442 = 
(
(long)(BgL_arg2924z00_2443)-((long)48)); } 
BgL_arg2920z00_2439 = 
(((long)10)*BgL_arg2923z00_2442); } 
{ /* Llib/date.scm 669 */
int BgL_arg2926z00_2445;
{ /* Llib/date.scm 669 */
int BgL_auxz00_6560;
BgL_auxz00_6560 = 
(int)(((long)4)); 
BgL_arg2926z00_2445 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_2148, BgL_auxz00_6560); } 
BgL_arg2921z00_2440 = 
(
(long)(BgL_arg2926z00_2445)-((long)48)); } 
BgL_mz00_2433 = 
(BgL_arg2920z00_2439+BgL_arg2921z00_2440); } 
return 
BINT(
(((long)60)*
(
(BgL_hz00_2432*((long)60))+BgL_mz00_2433)));} break;case ((long)2) : 

{ /* Llib/date.scm 661 */
long BgL_hz00_2447;long BgL_mz00_2448;
{ /* Llib/date.scm 661 */
int BgL_arg2938z00_2459;
{ /* Llib/date.scm 661 */
int BgL_auxz00_6570;
BgL_auxz00_6570 = 
(int)(((long)1)); 
BgL_arg2938z00_2459 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_2148, BgL_auxz00_6570); } 
BgL_hz00_2447 = 
(
(long)(BgL_arg2938z00_2459)-((long)48)); } 
{ /* Llib/date.scm 662 */
long BgL_arg2940z00_2461;long BgL_arg2942z00_2462;
{ /* Llib/date.scm 662 */
long BgL_arg2944z00_2464;
{ /* Llib/date.scm 662 */
int BgL_arg2945z00_2465;
{ /* Llib/date.scm 662 */
int BgL_auxz00_6575;
BgL_auxz00_6575 = 
(int)(((long)2)); 
BgL_arg2945z00_2465 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_2148, BgL_auxz00_6575); } 
BgL_arg2944z00_2464 = 
(
(long)(BgL_arg2945z00_2465)-((long)48)); } 
BgL_arg2940z00_2461 = 
(((long)10)*BgL_arg2944z00_2464); } 
{ /* Llib/date.scm 662 */
int BgL_arg2947z00_2467;
{ /* Llib/date.scm 662 */
int BgL_auxz00_6581;
BgL_auxz00_6581 = 
(int)(((long)3)); 
BgL_arg2947z00_2467 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_2148, BgL_auxz00_6581); } 
BgL_arg2942z00_2462 = 
(
(long)(BgL_arg2947z00_2467)-((long)48)); } 
BgL_mz00_2448 = 
(BgL_arg2940z00_2461+BgL_arg2942z00_2462); } 
{ /* Llib/date.scm 663 */
bool_t BgL_testz00_6587;
{ /* Llib/date.scm 663 */
int BgL_arg2936z00_2457;
{ /* Llib/date.scm 663 */
int BgL_auxz00_6588;
BgL_auxz00_6588 = 
(int)(((long)0)); 
BgL_arg2936z00_2457 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_2148, BgL_auxz00_6588); } 
BgL_testz00_6587 = 
(
(long)(BgL_arg2936z00_2457)==((long)43)); } 
if(BgL_testz00_6587)
{ /* Llib/date.scm 663 */
return 
BINT(
NEG(
(((long)60)*
(
(BgL_hz00_2447*((long)60))+BgL_mz00_2448))));}  else 
{ /* Llib/date.scm 663 */
return 
BINT(
(((long)60)*
(
(BgL_hz00_2447*((long)60))+BgL_mz00_2448)));} } } break;case ((long)1) : 

{ /* Llib/date.scm 655 */
long BgL_hz00_2469;long BgL_mz00_2470;
{ /* Llib/date.scm 655 */
long BgL_arg2960z00_2481;long BgL_arg2961z00_2482;
{ /* Llib/date.scm 655 */
long BgL_arg2963z00_2484;
{ /* Llib/date.scm 655 */
int BgL_arg2964z00_2485;
{ /* Llib/date.scm 655 */
int BgL_auxz00_6602;
BgL_auxz00_6602 = 
(int)(((long)1)); 
BgL_arg2964z00_2485 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_2148, BgL_auxz00_6602); } 
BgL_arg2963z00_2484 = 
(
(long)(BgL_arg2964z00_2485)-((long)48)); } 
BgL_arg2960z00_2481 = 
(((long)10)*BgL_arg2963z00_2484); } 
{ /* Llib/date.scm 655 */
int BgL_arg2966z00_2487;
{ /* Llib/date.scm 655 */
int BgL_auxz00_6608;
BgL_auxz00_6608 = 
(int)(((long)2)); 
BgL_arg2966z00_2487 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_2148, BgL_auxz00_6608); } 
BgL_arg2961z00_2482 = 
(
(long)(BgL_arg2966z00_2487)-((long)48)); } 
BgL_hz00_2469 = 
(BgL_arg2960z00_2481+BgL_arg2961z00_2482); } 
{ /* Llib/date.scm 656 */
long BgL_arg2968z00_2489;long BgL_arg2969z00_2490;
{ /* Llib/date.scm 656 */
long BgL_arg2971z00_2492;
{ /* Llib/date.scm 656 */
int BgL_arg2972z00_2493;
{ /* Llib/date.scm 656 */
int BgL_auxz00_6614;
BgL_auxz00_6614 = 
(int)(((long)3)); 
BgL_arg2972z00_2493 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_2148, BgL_auxz00_6614); } 
BgL_arg2971z00_2492 = 
(
(long)(BgL_arg2972z00_2493)-((long)48)); } 
BgL_arg2968z00_2489 = 
(((long)10)*BgL_arg2971z00_2492); } 
{ /* Llib/date.scm 656 */
int BgL_arg2974z00_2495;
{ /* Llib/date.scm 656 */
int BgL_auxz00_6620;
BgL_auxz00_6620 = 
(int)(((long)4)); 
BgL_arg2974z00_2495 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_2148, BgL_auxz00_6620); } 
BgL_arg2969z00_2490 = 
(
(long)(BgL_arg2974z00_2495)-((long)48)); } 
BgL_mz00_2470 = 
(BgL_arg2968z00_2489+BgL_arg2969z00_2490); } 
{ /* Llib/date.scm 657 */
bool_t BgL_testz00_6626;
{ /* Llib/date.scm 657 */
int BgL_arg2958z00_2479;
{ /* Llib/date.scm 657 */
int BgL_auxz00_6627;
BgL_auxz00_6627 = 
(int)(((long)0)); 
BgL_arg2958z00_2479 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_2148, BgL_auxz00_6627); } 
BgL_testz00_6626 = 
(
(long)(BgL_arg2958z00_2479)==((long)43)); } 
if(BgL_testz00_6626)
{ /* Llib/date.scm 657 */
return 
BINT(
NEG(
(((long)60)*
(
(BgL_hz00_2469*((long)60))+BgL_mz00_2470))));}  else 
{ /* Llib/date.scm 657 */
return 
BINT(
(((long)60)*
(
(BgL_hz00_2469*((long)60))+BgL_mz00_2470)));} } } break;case ((long)0) : 

goto BgL_zc3anonymousza32905ze3z83_2418;break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string4373z00zz__datez00, BGl_string4374z00zz__datez00, 
BINT(BgL_matchz00_2419));} } } } } } } 
}



/* <anonymous:2521> */
obj_t BGl_zc3anonymousza32521ze3z83zz__datez00(obj_t BgL_envz00_5037, obj_t BgL_inputzd2portzd2_5038)
{ AN_OBJECT;
{ /* Llib/date.scm 585 */
{ 
obj_t BgL_inputzd2portzd2_1708;
BgL_inputzd2portzd2_1708 = BgL_inputzd2portzd2_5038; 
{ 
obj_t BgL_inputzd2portzd2_1761;long BgL_lastzd2matchzd2_1762;obj_t BgL_inputzd2portzd2_1772;long BgL_lastzd2matchzd2_1773;obj_t BgL_inputzd2portzd2_1781;long BgL_lastzd2matchzd2_1782;obj_t BgL_inputzd2portzd2_1789;long BgL_lastzd2matchzd2_1790;obj_t BgL_inputzd2portzd2_1797;long BgL_lastzd2matchzd2_1798;obj_t BgL_inputzd2portzd2_1805;long BgL_lastzd2matchzd2_1806;obj_t BgL_inputzd2portzd2_1813;long BgL_lastzd2matchzd2_1814;obj_t BgL_inputzd2portzd2_1821;long BgL_lastzd2matchzd2_1822;obj_t BgL_inputzd2portzd2_1829;long BgL_lastzd2matchzd2_1830;obj_t BgL_inputzd2portzd2_1839;long BgL_lastzd2matchzd2_1840;obj_t BgL_inputzd2portzd2_1847;long BgL_lastzd2matchzd2_1848;obj_t BgL_inputzd2portzd2_1854;long BgL_lastzd2matchzd2_1855;obj_t BgL_inputzd2portzd2_1862;long BgL_lastzd2matchzd2_1863;obj_t BgL_inputzd2portzd2_1870;long BgL_lastzd2matchzd2_1871;obj_t BgL_inputzd2portzd2_1892;long BgL_lastzd2matchzd2_1893;obj_t BgL_inputzd2portzd2_1900;long BgL_lastzd2matchzd2_1901;obj_t BgL_inputzd2portzd2_1916;long BgL_lastzd2matchzd2_1917;
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6644;
{ /* Llib/date.scm 585 */
obj_t BgL_arg2525z00_1760;
{ /* Llib/date.scm 585 */
obj_t BgL_res3444z00_3808;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1708))
{ /* Llib/date.scm 585 */
BgL_res3444z00_3808 = BgL_inputzd2portzd2_1708; }  else 
{ 
obj_t BgL_auxz00_6647;
BgL_auxz00_6647 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)24501)), BGl_string4409z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1708); 
FAILURE(BgL_auxz00_6647,BFALSE,BFALSE);} 
BgL_arg2525z00_1760 = BgL_res3444z00_3808; } 
BgL_testz00_6644 = 
INPUT_PORT_CLOSEP(BgL_arg2525z00_1760); } 
if(BgL_testz00_6644)
{ /* Llib/date.scm 585 */
return 
BGl_errorz00zz__errorz00(BGl_string4373z00zz__datez00, BGl_string4390z00zz__datez00, BgL_inputzd2portzd2_1708);}  else 
{ /* Llib/date.scm 585 */
BgL_zc3anonymousza32690ze3z83_2008:
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_4066;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1708))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_4066 = BgL_inputzd2portzd2_1708; }  else 
{ 
obj_t BgL_auxz00_6655;
BgL_auxz00_6655 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)24501)), BGl_string4367z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1708); 
FAILURE(BgL_auxz00_6655,BFALSE,BFALSE);} 
RGC_START_MATCH(BgL_inputzd2portzd2_4066); } 
{ /* Llib/date.scm 585 */
long BgL_matchz00_2009;
BgL_inputzd2portzd2_1870 = BgL_inputzd2portzd2_1708; 
BgL_lastzd2matchzd2_1871 = ((long)6); 
BgL_zc3anonymousza32591ze3z83_1872:
{ /* Llib/date.scm 585 */
int BgL_currentzd2charzd2_1873;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3980;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1870))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_3980 = BgL_inputzd2portzd2_1870; }  else 
{ 
obj_t BgL_auxz00_6662;
BgL_auxz00_6662 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)24501)), BGl_string4395z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1870); 
FAILURE(BgL_auxz00_6662,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_1873 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3980); } 
if(
(
(long)(BgL_currentzd2charzd2_1873)==((long)0)))
{ /* Llib/date.scm 585 */
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1870))
{ /* Llib/date.scm 585 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_1870))
{ 

goto BgL_zc3anonymousza32591ze3z83_1872;}  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_lastzd2matchzd2_1871; } }  else 
{ /* Llib/date.scm 585 */
long BgL_newzd2matchzd2_3987;
RGC_STOP_MATCH(BgL_inputzd2portzd2_1870); 
BgL_newzd2matchzd2_3987 = ((long)6); 
BgL_matchz00_2009 = BgL_newzd2matchzd2_3987; } }  else 
{ /* Llib/date.scm 585 */
if(
(
(long)(BgL_currentzd2charzd2_1873)==((long)58)))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_1772 = BgL_inputzd2portzd2_1870; 
BgL_lastzd2matchzd2_1773 = BgL_lastzd2matchzd2_1871; 
BgL_zc3anonymousza32533ze3z83_1774:
{ /* Llib/date.scm 585 */
long BgL_newzd2matchzd2_1775;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3828;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1772))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_3828 = BgL_inputzd2portzd2_1772; }  else 
{ 
obj_t BgL_auxz00_6680;
BgL_auxz00_6680 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)24501)), BGl_string4407z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1772); 
FAILURE(BgL_auxz00_6680,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_3828); } 
BgL_newzd2matchzd2_1775 = ((long)6); 
{ /* Llib/date.scm 585 */
int BgL_currentzd2charzd2_1776;
BgL_currentzd2charzd2_1776 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1772); 
if(
(
(long)(BgL_currentzd2charzd2_1776)==((long)0)))
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6689;
{ /* Llib/date.scm 585 */
bool_t BgL_res3447z00_3836;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3832;
BgL_inputzd2portzd2_3832 = BgL_inputzd2portzd2_1772; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3832))
{ /* Llib/date.scm 585 */
BgL_res3447z00_3836 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3832); }  else 
{ /* Llib/date.scm 585 */
BgL_res3447z00_3836 = ((bool_t)0); } } 
BgL_testz00_6689 = BgL_res3447z00_3836; } 
if(BgL_testz00_6689)
{ 

goto BgL_zc3anonymousza32533ze3z83_1774;}  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_newzd2matchzd2_1775; } }  else 
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6693;
if(
(
(long)(BgL_currentzd2charzd2_1776)>=((long)48)))
{ /* Llib/date.scm 585 */
BgL_testz00_6693 = 
(
(long)(BgL_currentzd2charzd2_1776)<((long)58))
; }  else 
{ /* Llib/date.scm 585 */
BgL_testz00_6693 = ((bool_t)0)
; } 
if(BgL_testz00_6693)
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_1781 = BgL_inputzd2portzd2_1772; 
BgL_lastzd2matchzd2_1782 = BgL_newzd2matchzd2_1775; 
BgL_zc3anonymousza32538ze3z83_1783:
{ /* Llib/date.scm 585 */
int BgL_currentzd2charzd2_1784;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3841;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1781))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_3841 = BgL_inputzd2portzd2_1781; }  else 
{ 
obj_t BgL_auxz00_6701;
BgL_auxz00_6701 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)24501)), BGl_string4406z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1781); 
FAILURE(BgL_auxz00_6701,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_1784 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3841); } 
if(
(
(long)(BgL_currentzd2charzd2_1784)==((long)0)))
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6709;
{ /* Llib/date.scm 585 */
bool_t BgL_res3448z00_3848;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3844;
BgL_inputzd2portzd2_3844 = BgL_inputzd2portzd2_1781; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3844))
{ /* Llib/date.scm 585 */
BgL_res3448z00_3848 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3844); }  else 
{ /* Llib/date.scm 585 */
BgL_res3448z00_3848 = ((bool_t)0); } } 
BgL_testz00_6709 = BgL_res3448z00_3848; } 
if(BgL_testz00_6709)
{ 

goto BgL_zc3anonymousza32538ze3z83_1783;}  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_lastzd2matchzd2_1782; } }  else 
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6713;
if(
(
(long)(BgL_currentzd2charzd2_1784)>=((long)48)))
{ /* Llib/date.scm 585 */
BgL_testz00_6713 = 
(
(long)(BgL_currentzd2charzd2_1784)<((long)58))
; }  else 
{ /* Llib/date.scm 585 */
BgL_testz00_6713 = ((bool_t)0)
; } 
if(BgL_testz00_6713)
{ /* Llib/date.scm 585 */
long BgL_newzd2matchzd2_3855;
RGC_STOP_MATCH(BgL_inputzd2portzd2_1781); 
BgL_newzd2matchzd2_3855 = ((long)5); 
BgL_matchz00_2009 = BgL_newzd2matchzd2_3855; }  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_lastzd2matchzd2_1782; } } } }  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_newzd2matchzd2_1775; } } } } }  else 
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6720;
if(
(
(long)(BgL_currentzd2charzd2_1873)>=((long)48)))
{ /* Llib/date.scm 585 */
BgL_testz00_6720 = 
(
(long)(BgL_currentzd2charzd2_1873)<((long)58))
; }  else 
{ /* Llib/date.scm 585 */
BgL_testz00_6720 = ((bool_t)0)
; } 
if(BgL_testz00_6720)
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_1829 = BgL_inputzd2portzd2_1870; 
BgL_lastzd2matchzd2_1830 = BgL_lastzd2matchzd2_1871; 
BgL_zc3anonymousza32566ze3z83_1831:
{ /* Llib/date.scm 585 */
long BgL_newzd2matchzd2_1832;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3915;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1829))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_3915 = BgL_inputzd2portzd2_1829; }  else 
{ 
obj_t BgL_auxz00_6728;
BgL_auxz00_6728 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)24501)), BGl_string4400z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1829); 
FAILURE(BgL_auxz00_6728,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_3915); } 
BgL_newzd2matchzd2_1832 = ((long)6); 
{ /* Llib/date.scm 585 */
int BgL_currentzd2charzd2_1833;
BgL_currentzd2charzd2_1833 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1829); 
if(
(
(long)(BgL_currentzd2charzd2_1833)==((long)0)))
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6737;
{ /* Llib/date.scm 585 */
bool_t BgL_res3454z00_3923;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3919;
BgL_inputzd2portzd2_3919 = BgL_inputzd2portzd2_1829; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3919))
{ /* Llib/date.scm 585 */
BgL_res3454z00_3923 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3919); }  else 
{ /* Llib/date.scm 585 */
BgL_res3454z00_3923 = ((bool_t)0); } } 
BgL_testz00_6737 = BgL_res3454z00_3923; } 
if(BgL_testz00_6737)
{ 

goto BgL_zc3anonymousza32566ze3z83_1831;}  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_newzd2matchzd2_1832; } }  else 
{ /* Llib/date.scm 585 */
if(
(
(long)(BgL_currentzd2charzd2_1833)==((long)58)))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_1797 = BgL_inputzd2portzd2_1829; 
BgL_lastzd2matchzd2_1798 = BgL_newzd2matchzd2_1832; 
BgL_zc3anonymousza32548ze3z83_1799:
{ /* Llib/date.scm 585 */
int BgL_currentzd2charzd2_1800;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3869;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1797))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_3869 = BgL_inputzd2portzd2_1797; }  else 
{ 
obj_t BgL_auxz00_6746;
BgL_auxz00_6746 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)24501)), BGl_string4404z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1797); 
FAILURE(BgL_auxz00_6746,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_1800 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3869); } 
if(
(
(long)(BgL_currentzd2charzd2_1800)==((long)0)))
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6754;
{ /* Llib/date.scm 585 */
bool_t BgL_res3450z00_3876;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3872;
BgL_inputzd2portzd2_3872 = BgL_inputzd2portzd2_1797; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3872))
{ /* Llib/date.scm 585 */
BgL_res3450z00_3876 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3872); }  else 
{ /* Llib/date.scm 585 */
BgL_res3450z00_3876 = ((bool_t)0); } } 
BgL_testz00_6754 = BgL_res3450z00_3876; } 
if(BgL_testz00_6754)
{ 

goto BgL_zc3anonymousza32548ze3z83_1799;}  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_lastzd2matchzd2_1798; } }  else 
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6758;
if(
(
(long)(BgL_currentzd2charzd2_1800)>=((long)48)))
{ /* Llib/date.scm 585 */
BgL_testz00_6758 = 
(
(long)(BgL_currentzd2charzd2_1800)<((long)58))
; }  else 
{ /* Llib/date.scm 585 */
BgL_testz00_6758 = ((bool_t)0)
; } 
if(BgL_testz00_6758)
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_1789 = BgL_inputzd2portzd2_1797; 
BgL_lastzd2matchzd2_1790 = BgL_lastzd2matchzd2_1798; 
BgL_zc3anonymousza32543ze3z83_1791:
{ /* Llib/date.scm 585 */
int BgL_currentzd2charzd2_1792;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3857;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1789))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_3857 = BgL_inputzd2portzd2_1789; }  else 
{ 
obj_t BgL_auxz00_6766;
BgL_auxz00_6766 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)24501)), BGl_string4405z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1789); 
FAILURE(BgL_auxz00_6766,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_1792 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3857); } 
if(
(
(long)(BgL_currentzd2charzd2_1792)==((long)0)))
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6774;
{ /* Llib/date.scm 585 */
bool_t BgL_res3449z00_3864;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3860;
BgL_inputzd2portzd2_3860 = BgL_inputzd2portzd2_1789; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3860))
{ /* Llib/date.scm 585 */
BgL_res3449z00_3864 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3860); }  else 
{ /* Llib/date.scm 585 */
BgL_res3449z00_3864 = ((bool_t)0); } } 
BgL_testz00_6774 = BgL_res3449z00_3864; } 
if(BgL_testz00_6774)
{ 

goto BgL_zc3anonymousza32543ze3z83_1791;}  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_lastzd2matchzd2_1790; } }  else 
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6778;
if(
(
(long)(BgL_currentzd2charzd2_1792)>=((long)48)))
{ /* Llib/date.scm 585 */
BgL_testz00_6778 = 
(
(long)(BgL_currentzd2charzd2_1792)<((long)58))
; }  else 
{ /* Llib/date.scm 585 */
BgL_testz00_6778 = ((bool_t)0)
; } 
if(BgL_testz00_6778)
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_1813 = BgL_inputzd2portzd2_1789; 
BgL_lastzd2matchzd2_1814 = BgL_lastzd2matchzd2_1790; 
BgL_zc3anonymousza32557ze3z83_1815:
{ /* Llib/date.scm 585 */
long BgL_newzd2matchzd2_1816;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3892;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1813))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_3892 = BgL_inputzd2portzd2_1813; }  else 
{ 
obj_t BgL_auxz00_6786;
BgL_auxz00_6786 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)24501)), BGl_string4402z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1813); 
FAILURE(BgL_auxz00_6786,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_3892); } 
BgL_newzd2matchzd2_1816 = ((long)1); 
{ /* Llib/date.scm 585 */
int BgL_currentzd2charzd2_1817;
BgL_currentzd2charzd2_1817 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1813); 
if(
(
(long)(BgL_currentzd2charzd2_1817)==((long)0)))
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6795;
{ /* Llib/date.scm 585 */
bool_t BgL_res3452z00_3900;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3896;
BgL_inputzd2portzd2_3896 = BgL_inputzd2portzd2_1813; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3896))
{ /* Llib/date.scm 585 */
BgL_res3452z00_3900 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3896); }  else 
{ /* Llib/date.scm 585 */
BgL_res3452z00_3900 = ((bool_t)0); } } 
BgL_testz00_6795 = BgL_res3452z00_3900; } 
if(BgL_testz00_6795)
{ 

goto BgL_zc3anonymousza32557ze3z83_1815;}  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_newzd2matchzd2_1816; } }  else 
{ /* Llib/date.scm 585 */
if(
(
(long)(BgL_currentzd2charzd2_1817)==((long)58)))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_1821 = BgL_inputzd2portzd2_1813; 
BgL_lastzd2matchzd2_1822 = BgL_newzd2matchzd2_1816; 
BgL_zc3anonymousza32561ze3z83_1823:
{ /* Llib/date.scm 585 */
int BgL_currentzd2charzd2_1824;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3903;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1821))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_3903 = BgL_inputzd2portzd2_1821; }  else 
{ 
obj_t BgL_auxz00_6804;
BgL_auxz00_6804 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)24501)), BGl_string4401z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1821); 
FAILURE(BgL_auxz00_6804,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_1824 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3903); } 
if(
(
(long)(BgL_currentzd2charzd2_1824)==((long)0)))
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6812;
{ /* Llib/date.scm 585 */
bool_t BgL_res3453z00_3910;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3906;
BgL_inputzd2portzd2_3906 = BgL_inputzd2portzd2_1821; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3906))
{ /* Llib/date.scm 585 */
BgL_res3453z00_3910 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3906); }  else 
{ /* Llib/date.scm 585 */
BgL_res3453z00_3910 = ((bool_t)0); } } 
BgL_testz00_6812 = BgL_res3453z00_3910; } 
if(BgL_testz00_6812)
{ 

goto BgL_zc3anonymousza32561ze3z83_1823;}  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_lastzd2matchzd2_1822; } }  else 
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6816;
if(
(
(long)(BgL_currentzd2charzd2_1824)>=((long)48)))
{ /* Llib/date.scm 585 */
BgL_testz00_6816 = 
(
(long)(BgL_currentzd2charzd2_1824)<((long)58))
; }  else 
{ /* Llib/date.scm 585 */
BgL_testz00_6816 = ((bool_t)0)
; } 
if(BgL_testz00_6816)
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_1854 = BgL_inputzd2portzd2_1821; 
BgL_lastzd2matchzd2_1855 = BgL_lastzd2matchzd2_1822; 
BgL_zc3anonymousza32581ze3z83_1856:
{ /* Llib/date.scm 585 */
int BgL_currentzd2charzd2_1857;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3952;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1854))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_3952 = BgL_inputzd2portzd2_1854; }  else 
{ 
obj_t BgL_auxz00_6824;
BgL_auxz00_6824 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)24501)), BGl_string4397z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1854); 
FAILURE(BgL_auxz00_6824,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_1857 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3952); } 
if(
(
(long)(BgL_currentzd2charzd2_1857)==((long)0)))
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6832;
{ /* Llib/date.scm 585 */
bool_t BgL_res3457z00_3959;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3955;
BgL_inputzd2portzd2_3955 = BgL_inputzd2portzd2_1854; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3955))
{ /* Llib/date.scm 585 */
BgL_res3457z00_3959 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3955); }  else 
{ /* Llib/date.scm 585 */
BgL_res3457z00_3959 = ((bool_t)0); } } 
BgL_testz00_6832 = BgL_res3457z00_3959; } 
if(BgL_testz00_6832)
{ 

goto BgL_zc3anonymousza32581ze3z83_1856;}  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_lastzd2matchzd2_1855; } }  else 
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6836;
if(
(
(long)(BgL_currentzd2charzd2_1857)>=((long)48)))
{ /* Llib/date.scm 585 */
BgL_testz00_6836 = 
(
(long)(BgL_currentzd2charzd2_1857)<((long)58))
; }  else 
{ /* Llib/date.scm 585 */
BgL_testz00_6836 = ((bool_t)0)
; } 
if(BgL_testz00_6836)
{ /* Llib/date.scm 585 */
long BgL_newzd2matchzd2_3966;
RGC_STOP_MATCH(BgL_inputzd2portzd2_1854); 
BgL_newzd2matchzd2_3966 = ((long)4); 
BgL_matchz00_2009 = BgL_newzd2matchzd2_3966; }  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_lastzd2matchzd2_1855; } } } }  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_lastzd2matchzd2_1822; } } } }  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_newzd2matchzd2_1816; } } } } }  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_lastzd2matchzd2_1790; } } } }  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_lastzd2matchzd2_1798; } } } }  else 
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6843;
if(
(
(long)(BgL_currentzd2charzd2_1833)>=((long)48)))
{ /* Llib/date.scm 585 */
BgL_testz00_6843 = 
(
(long)(BgL_currentzd2charzd2_1833)<((long)58))
; }  else 
{ /* Llib/date.scm 585 */
BgL_testz00_6843 = ((bool_t)0)
; } 
if(BgL_testz00_6843)
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_1847 = BgL_inputzd2portzd2_1829; 
BgL_lastzd2matchzd2_1848 = BgL_newzd2matchzd2_1832; 
BgL_zc3anonymousza32577ze3z83_1849:
{ /* Llib/date.scm 585 */
int BgL_currentzd2charzd2_1850;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3942;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1847))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_3942 = BgL_inputzd2portzd2_1847; }  else 
{ 
obj_t BgL_auxz00_6851;
BgL_auxz00_6851 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)24501)), BGl_string4398z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1847); 
FAILURE(BgL_auxz00_6851,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_1850 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3942); } 
if(
(
(long)(BgL_currentzd2charzd2_1850)==((long)0)))
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6859;
{ /* Llib/date.scm 585 */
bool_t BgL_res3456z00_3949;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3945;
BgL_inputzd2portzd2_3945 = BgL_inputzd2portzd2_1847; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3945))
{ /* Llib/date.scm 585 */
BgL_res3456z00_3949 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3945); }  else 
{ /* Llib/date.scm 585 */
BgL_res3456z00_3949 = ((bool_t)0); } } 
BgL_testz00_6859 = BgL_res3456z00_3949; } 
if(BgL_testz00_6859)
{ 

goto BgL_zc3anonymousza32577ze3z83_1849;}  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_lastzd2matchzd2_1848; } }  else 
{ /* Llib/date.scm 585 */
if(
(
(long)(BgL_currentzd2charzd2_1850)==((long)58)))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_1892 = BgL_inputzd2portzd2_1847; 
BgL_lastzd2matchzd2_1893 = BgL_lastzd2matchzd2_1848; 
BgL_zc3anonymousza32604ze3z83_1894:
{ /* Llib/date.scm 585 */
int BgL_currentzd2charzd2_1895;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_4011;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1892))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_4011 = BgL_inputzd2portzd2_1892; }  else 
{ 
obj_t BgL_auxz00_6868;
BgL_auxz00_6868 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)24501)), BGl_string4394z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1892); 
FAILURE(BgL_auxz00_6868,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_1895 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_4011); } 
if(
(
(long)(BgL_currentzd2charzd2_1895)==((long)0)))
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6876;
{ /* Llib/date.scm 585 */
bool_t BgL_res3459z00_4018;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_4014;
BgL_inputzd2portzd2_4014 = BgL_inputzd2portzd2_1892; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4014))
{ /* Llib/date.scm 585 */
BgL_res3459z00_4018 = 
rgc_fill_buffer(BgL_inputzd2portzd2_4014); }  else 
{ /* Llib/date.scm 585 */
BgL_res3459z00_4018 = ((bool_t)0); } } 
BgL_testz00_6876 = BgL_res3459z00_4018; } 
if(BgL_testz00_6876)
{ 

goto BgL_zc3anonymousza32604ze3z83_1894;}  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_lastzd2matchzd2_1893; } }  else 
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6880;
if(
(
(long)(BgL_currentzd2charzd2_1895)>=((long)48)))
{ /* Llib/date.scm 585 */
BgL_testz00_6880 = 
(
(long)(BgL_currentzd2charzd2_1895)<((long)58))
; }  else 
{ /* Llib/date.scm 585 */
BgL_testz00_6880 = ((bool_t)0)
; } 
if(BgL_testz00_6880)
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_1862 = BgL_inputzd2portzd2_1892; 
BgL_lastzd2matchzd2_1863 = BgL_lastzd2matchzd2_1893; 
BgL_zc3anonymousza32586ze3z83_1864:
{ /* Llib/date.scm 585 */
int BgL_currentzd2charzd2_1865;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3968;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1862))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_3968 = BgL_inputzd2portzd2_1862; }  else 
{ 
obj_t BgL_auxz00_6888;
BgL_auxz00_6888 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)24501)), BGl_string4396z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1862); 
FAILURE(BgL_auxz00_6888,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_1865 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3968); } 
if(
(
(long)(BgL_currentzd2charzd2_1865)==((long)0)))
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6896;
{ /* Llib/date.scm 585 */
bool_t BgL_res3458z00_3975;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3971;
BgL_inputzd2portzd2_3971 = BgL_inputzd2portzd2_1862; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3971))
{ /* Llib/date.scm 585 */
BgL_res3458z00_3975 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3971); }  else 
{ /* Llib/date.scm 585 */
BgL_res3458z00_3975 = ((bool_t)0); } } 
BgL_testz00_6896 = BgL_res3458z00_3975; } 
if(BgL_testz00_6896)
{ 

goto BgL_zc3anonymousza32586ze3z83_1864;}  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_lastzd2matchzd2_1863; } }  else 
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6900;
if(
(
(long)(BgL_currentzd2charzd2_1865)>=((long)48)))
{ /* Llib/date.scm 585 */
BgL_testz00_6900 = 
(
(long)(BgL_currentzd2charzd2_1865)<((long)58))
; }  else 
{ /* Llib/date.scm 585 */
BgL_testz00_6900 = ((bool_t)0)
; } 
if(BgL_testz00_6900)
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_1805 = BgL_inputzd2portzd2_1862; 
BgL_lastzd2matchzd2_1806 = BgL_lastzd2matchzd2_1863; 
BgL_zc3anonymousza32553ze3z83_1807:
{ /* Llib/date.scm 585 */
long BgL_newzd2matchzd2_1808;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3881;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1805))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_3881 = BgL_inputzd2portzd2_1805; }  else 
{ 
obj_t BgL_auxz00_6908;
BgL_auxz00_6908 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)24501)), BGl_string4403z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1805); 
FAILURE(BgL_auxz00_6908,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_3881); } 
BgL_newzd2matchzd2_1808 = ((long)2); 
{ /* Llib/date.scm 585 */
int BgL_currentzd2charzd2_1809;
BgL_currentzd2charzd2_1809 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1805); 
if(
(
(long)(BgL_currentzd2charzd2_1809)==((long)0)))
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6917;
{ /* Llib/date.scm 585 */
bool_t BgL_res3451z00_3889;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3885;
BgL_inputzd2portzd2_3885 = BgL_inputzd2portzd2_1805; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3885))
{ /* Llib/date.scm 585 */
BgL_res3451z00_3889 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3885); }  else 
{ /* Llib/date.scm 585 */
BgL_res3451z00_3889 = ((bool_t)0); } } 
BgL_testz00_6917 = BgL_res3451z00_3889; } 
if(BgL_testz00_6917)
{ 

goto BgL_zc3anonymousza32553ze3z83_1807;}  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_newzd2matchzd2_1808; } }  else 
{ /* Llib/date.scm 585 */
if(
(
(long)(BgL_currentzd2charzd2_1809)==((long)58)))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_1839 = BgL_inputzd2portzd2_1805; 
BgL_lastzd2matchzd2_1840 = BgL_newzd2matchzd2_1808; 
BgL_zc3anonymousza32572ze3z83_1841:
{ /* Llib/date.scm 585 */
int BgL_currentzd2charzd2_1842;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3930;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1839))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_3930 = BgL_inputzd2portzd2_1839; }  else 
{ 
obj_t BgL_auxz00_6926;
BgL_auxz00_6926 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)24501)), BGl_string4399z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1839); 
FAILURE(BgL_auxz00_6926,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_1842 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3930); } 
if(
(
(long)(BgL_currentzd2charzd2_1842)==((long)0)))
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6934;
{ /* Llib/date.scm 585 */
bool_t BgL_res3455z00_3937;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3933;
BgL_inputzd2portzd2_3933 = BgL_inputzd2portzd2_1839; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3933))
{ /* Llib/date.scm 585 */
BgL_res3455z00_3937 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3933); }  else 
{ /* Llib/date.scm 585 */
BgL_res3455z00_3937 = ((bool_t)0); } } 
BgL_testz00_6934 = BgL_res3455z00_3937; } 
if(BgL_testz00_6934)
{ 

goto BgL_zc3anonymousza32572ze3z83_1841;}  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_lastzd2matchzd2_1840; } }  else 
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6938;
if(
(
(long)(BgL_currentzd2charzd2_1842)>=((long)48)))
{ /* Llib/date.scm 585 */
BgL_testz00_6938 = 
(
(long)(BgL_currentzd2charzd2_1842)<((long)58))
; }  else 
{ /* Llib/date.scm 585 */
BgL_testz00_6938 = ((bool_t)0)
; } 
if(BgL_testz00_6938)
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_1900 = BgL_inputzd2portzd2_1839; 
BgL_lastzd2matchzd2_1901 = BgL_lastzd2matchzd2_1840; 
BgL_zc3anonymousza32609ze3z83_1902:
{ /* Llib/date.scm 585 */
int BgL_currentzd2charzd2_1903;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_4023;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1900))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_4023 = BgL_inputzd2portzd2_1900; }  else 
{ 
obj_t BgL_auxz00_6946;
BgL_auxz00_6946 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)24501)), BGl_string4393z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1900); 
FAILURE(BgL_auxz00_6946,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_1903 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_4023); } 
if(
(
(long)(BgL_currentzd2charzd2_1903)==((long)0)))
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6954;
{ /* Llib/date.scm 585 */
bool_t BgL_res3460z00_4030;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_4026;
BgL_inputzd2portzd2_4026 = BgL_inputzd2portzd2_1900; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4026))
{ /* Llib/date.scm 585 */
BgL_res3460z00_4030 = 
rgc_fill_buffer(BgL_inputzd2portzd2_4026); }  else 
{ /* Llib/date.scm 585 */
BgL_res3460z00_4030 = ((bool_t)0); } } 
BgL_testz00_6954 = BgL_res3460z00_4030; } 
if(BgL_testz00_6954)
{ 

goto BgL_zc3anonymousza32609ze3z83_1902;}  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_lastzd2matchzd2_1901; } }  else 
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6958;
if(
(
(long)(BgL_currentzd2charzd2_1903)>=((long)48)))
{ /* Llib/date.scm 585 */
BgL_testz00_6958 = 
(
(long)(BgL_currentzd2charzd2_1903)<((long)58))
; }  else 
{ /* Llib/date.scm 585 */
BgL_testz00_6958 = ((bool_t)0)
; } 
if(BgL_testz00_6958)
{ /* Llib/date.scm 585 */
long BgL_newzd2matchzd2_4037;
RGC_STOP_MATCH(BgL_inputzd2portzd2_1900); 
BgL_newzd2matchzd2_4037 = ((long)3); 
BgL_matchz00_2009 = BgL_newzd2matchzd2_4037; }  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_lastzd2matchzd2_1901; } } } }  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_lastzd2matchzd2_1840; } } } }  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_newzd2matchzd2_1808; } } } } }  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_lastzd2matchzd2_1863; } } } }  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_lastzd2matchzd2_1893; } } } }  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_lastzd2matchzd2_1848; } } } }  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_newzd2matchzd2_1832; } } } } } }  else 
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6965;
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6966;
if(
(
(long)(BgL_currentzd2charzd2_1873)==((long)10)))
{ /* Llib/date.scm 585 */
BgL_testz00_6966 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 585 */
BgL_testz00_6966 = 
(
(long)(BgL_currentzd2charzd2_1873)==((long)9))
; } 
if(BgL_testz00_6966)
{ /* Llib/date.scm 585 */
BgL_testz00_6965 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 585 */
if(
(
(long)(BgL_currentzd2charzd2_1873)==((long)13)))
{ /* Llib/date.scm 585 */
BgL_testz00_6965 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 585 */
BgL_testz00_6965 = 
(
(long)(BgL_currentzd2charzd2_1873)==((long)32))
; } } } 
if(BgL_testz00_6965)
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_1761 = BgL_inputzd2portzd2_1870; 
BgL_lastzd2matchzd2_1762 = BgL_lastzd2matchzd2_1871; 
BgL_zc3anonymousza32526ze3z83_1763:
{ /* Llib/date.scm 585 */
long BgL_newzd2matchzd2_1764;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3811;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1761))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_3811 = BgL_inputzd2portzd2_1761; }  else 
{ 
obj_t BgL_auxz00_6979;
BgL_auxz00_6979 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)24501)), BGl_string4408z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1761); 
FAILURE(BgL_auxz00_6979,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_3811); } 
BgL_newzd2matchzd2_1764 = ((long)0); 
{ /* Llib/date.scm 585 */
int BgL_currentzd2charzd2_1765;
BgL_currentzd2charzd2_1765 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1761); 
if(
(
(long)(BgL_currentzd2charzd2_1765)==((long)0)))
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6988;
{ /* Llib/date.scm 585 */
bool_t BgL_res3446z00_3819;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_3815;
BgL_inputzd2portzd2_3815 = BgL_inputzd2portzd2_1761; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3815))
{ /* Llib/date.scm 585 */
BgL_res3446z00_3819 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3815); }  else 
{ /* Llib/date.scm 585 */
BgL_res3446z00_3819 = ((bool_t)0); } } 
BgL_testz00_6988 = BgL_res3446z00_3819; } 
if(BgL_testz00_6988)
{ 

goto BgL_zc3anonymousza32526ze3z83_1763;}  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_newzd2matchzd2_1764; } }  else 
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6992;
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_6993;
if(
(
(long)(BgL_currentzd2charzd2_1765)==((long)10)))
{ /* Llib/date.scm 585 */
BgL_testz00_6993 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 585 */
BgL_testz00_6993 = 
(
(long)(BgL_currentzd2charzd2_1765)==((long)9))
; } 
if(BgL_testz00_6993)
{ /* Llib/date.scm 585 */
BgL_testz00_6992 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 585 */
if(
(
(long)(BgL_currentzd2charzd2_1765)==((long)13)))
{ /* Llib/date.scm 585 */
BgL_testz00_6992 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 585 */
BgL_testz00_6992 = 
(
(long)(BgL_currentzd2charzd2_1765)==((long)32))
; } } } 
if(BgL_testz00_6992)
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_1916 = BgL_inputzd2portzd2_1761; 
BgL_lastzd2matchzd2_1917 = BgL_newzd2matchzd2_1764; 
BgL_zc3anonymousza32616ze3z83_1918:
{ /* Llib/date.scm 585 */
long BgL_newzd2matchzd2_1919;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_4043;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1916))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_4043 = BgL_inputzd2portzd2_1916; }  else 
{ 
obj_t BgL_auxz00_7006;
BgL_auxz00_7006 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)24501)), BGl_string4392z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1916); 
FAILURE(BgL_auxz00_7006,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_4043); } 
BgL_newzd2matchzd2_1919 = ((long)0); 
{ /* Llib/date.scm 585 */
int BgL_currentzd2charzd2_1920;
BgL_currentzd2charzd2_1920 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1916); 
if(
(
(long)(BgL_currentzd2charzd2_1920)==((long)0)))
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_7015;
{ /* Llib/date.scm 585 */
bool_t BgL_res3461z00_4051;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_4047;
BgL_inputzd2portzd2_4047 = BgL_inputzd2portzd2_1916; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4047))
{ /* Llib/date.scm 585 */
BgL_res3461z00_4051 = 
rgc_fill_buffer(BgL_inputzd2portzd2_4047); }  else 
{ /* Llib/date.scm 585 */
BgL_res3461z00_4051 = ((bool_t)0); } } 
BgL_testz00_7015 = BgL_res3461z00_4051; } 
if(BgL_testz00_7015)
{ 

goto BgL_zc3anonymousza32616ze3z83_1918;}  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_newzd2matchzd2_1919; } }  else 
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_7019;
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_7020;
if(
(
(long)(BgL_currentzd2charzd2_1920)==((long)10)))
{ /* Llib/date.scm 585 */
BgL_testz00_7020 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 585 */
BgL_testz00_7020 = 
(
(long)(BgL_currentzd2charzd2_1920)==((long)9))
; } 
if(BgL_testz00_7020)
{ /* Llib/date.scm 585 */
BgL_testz00_7019 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 585 */
if(
(
(long)(BgL_currentzd2charzd2_1920)==((long)13)))
{ /* Llib/date.scm 585 */
BgL_testz00_7019 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 585 */
BgL_testz00_7019 = 
(
(long)(BgL_currentzd2charzd2_1920)==((long)32))
; } } } 
if(BgL_testz00_7019)
{ 
long BgL_lastzd2matchzd2_7031;
BgL_lastzd2matchzd2_7031 = BgL_newzd2matchzd2_1919; 
BgL_lastzd2matchzd2_1917 = BgL_lastzd2matchzd2_7031; 
goto BgL_zc3anonymousza32616ze3z83_1918;}  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_newzd2matchzd2_1919; } } } } }  else 
{ /* Llib/date.scm 585 */
BgL_matchz00_2009 = BgL_newzd2matchzd2_1764; } } } } }  else 
{ /* Llib/date.scm 585 */
long BgL_newzd2matchzd2_4005;
RGC_STOP_MATCH(BgL_inputzd2portzd2_1870); 
BgL_newzd2matchzd2_4005 = ((long)6); 
BgL_matchz00_2009 = BgL_newzd2matchzd2_4005; } } } } } 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_1708); 
switch( BgL_matchz00_2009) { case ((long)6) : 

{ /* Llib/date.scm 629 */
obj_t BgL_auxz00_7034;
{ /* Llib/date.scm 585 */
bool_t BgL_testz00_7035;
{ /* Llib/date.scm 585 */
long BgL_arg2683z00_1998;
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_4062;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1708))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_4062 = BgL_inputzd2portzd2_1708; }  else 
{ 
obj_t BgL_auxz00_7038;
BgL_auxz00_7038 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)24501)), BGl_string4375z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1708); 
FAILURE(BgL_auxz00_7038,BFALSE,BFALSE);} 
BgL_arg2683z00_1998 = 
RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_4062); } 
BgL_testz00_7035 = 
(BgL_arg2683z00_1998==((long)0)); } 
if(BgL_testz00_7035)
{ /* Llib/date.scm 585 */
BgL_auxz00_7034 = BCNST(256)
; }  else 
{ /* Llib/date.scm 585 */
obj_t BgL_inputzd2portzd2_4065;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1708))
{ /* Llib/date.scm 585 */
BgL_inputzd2portzd2_4065 = BgL_inputzd2portzd2_1708; }  else 
{ 
obj_t BgL_auxz00_7046;
BgL_auxz00_7046 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)24501)), BGl_string4375z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1708); 
FAILURE(BgL_auxz00_7046,BFALSE,BFALSE);} 
BgL_auxz00_7034 = 
BCHAR(
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_4065)); } } 
return 
BGl_parsezd2errorzd2zz__datez00(BGl_symbol4369z00zz__datez00, BGl_string4391z00zz__datez00, BgL_auxz00_7034, BgL_inputzd2portzd2_1708);} break;case ((long)5) : 

{ /* Llib/date.scm 623 */
long BgL_b1z00_2017;long BgL_b2z00_2018;
{ /* Llib/date.scm 623 */
int BgL_arg2697z00_2023;
{ /* Llib/date.scm 623 */
int BgL_auxz00_7053;
BgL_auxz00_7053 = 
(int)(((long)0)); 
BgL_arg2697z00_2023 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1708, BgL_auxz00_7053); } 
BgL_b1z00_2017 = 
(
(long)(BgL_arg2697z00_2023)-((long)48)); } 
{ /* Llib/date.scm 624 */
int BgL_arg2699z00_2025;
{ /* Llib/date.scm 624 */
int BgL_auxz00_7058;
BgL_auxz00_7058 = 
(int)(((long)2)); 
BgL_arg2699z00_2025 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1708, BgL_auxz00_7058); } 
BgL_b2z00_2018 = 
(
(long)(BgL_arg2699z00_2025)-((long)48)); } 
{ /* Llib/date.scm 625 */
long BgL_val2_1951z00_2021;
BgL_val2_1951z00_2021 = 
(
(((long)10)*((long)13))+BgL_b2z00_2018); 
{ /* Llib/date.scm 625 */
int BgL_auxz00_7065;
BgL_auxz00_7065 = 
(int)(((long)3)); 
BGL_MVALUES_NUMBER_SET(BgL_auxz00_7065); } 
{ /* Llib/date.scm 625 */
obj_t BgL_auxz00_7070;int BgL_auxz00_7068;
BgL_auxz00_7070 = 
BINT(((long)0)); 
BgL_auxz00_7068 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_7068, BgL_auxz00_7070); } 
{ /* Llib/date.scm 625 */
obj_t BgL_auxz00_7075;int BgL_auxz00_7073;
BgL_auxz00_7075 = 
BINT(BgL_val2_1951z00_2021); 
BgL_auxz00_7073 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_7073, BgL_auxz00_7075); } 
return 
BINT(((long)0));} } break;case ((long)4) : 

{ /* Llib/date.scm 614 */
long BgL_b1z00_2027;long BgL_b3z00_2028;long BgL_b4z00_2029;long BgL_b5z00_2030;long BgL_b6z00_2031;
{ /* Llib/date.scm 614 */
int BgL_arg2703z00_2037;
{ /* Llib/date.scm 614 */
int BgL_auxz00_7079;
BgL_auxz00_7079 = 
(int)(((long)0)); 
BgL_arg2703z00_2037 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1708, BgL_auxz00_7079); } 
BgL_b1z00_2027 = 
(
(long)(BgL_arg2703z00_2037)-((long)48)); } 
{ /* Llib/date.scm 615 */
int BgL_arg2705z00_2039;
{ /* Llib/date.scm 615 */
int BgL_auxz00_7084;
BgL_auxz00_7084 = 
(int)(((long)2)); 
BgL_arg2705z00_2039 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1708, BgL_auxz00_7084); } 
BgL_b3z00_2028 = 
(
(long)(BgL_arg2705z00_2039)-((long)48)); } 
{ /* Llib/date.scm 616 */
int BgL_arg2707z00_2041;
{ /* Llib/date.scm 616 */
int BgL_auxz00_7089;
BgL_auxz00_7089 = 
(int)(((long)3)); 
BgL_arg2707z00_2041 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1708, BgL_auxz00_7089); } 
BgL_b4z00_2029 = 
(
(long)(BgL_arg2707z00_2041)-((long)48)); } 
{ /* Llib/date.scm 617 */
int BgL_arg2709z00_2043;
{ /* Llib/date.scm 617 */
int BgL_auxz00_7094;
BgL_auxz00_7094 = 
(int)(((long)5)); 
BgL_arg2709z00_2043 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1708, BgL_auxz00_7094); } 
BgL_b5z00_2030 = 
(
(long)(BgL_arg2709z00_2043)-((long)48)); } 
{ /* Llib/date.scm 618 */
int BgL_arg2711z00_2045;
{ /* Llib/date.scm 618 */
int BgL_auxz00_7099;
BgL_auxz00_7099 = 
(int)(((long)6)); 
BgL_arg2711z00_2045 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1708, BgL_auxz00_7099); } 
BgL_b6z00_2031 = 
(
(long)(BgL_arg2711z00_2045)-((long)48)); } 
{ /* Llib/date.scm 619 */
long BgL_val1_1953z00_2033;long BgL_val2_1954z00_2034;
BgL_val1_1953z00_2033 = 
(
(((long)10)*BgL_b3z00_2028)+BgL_b4z00_2029); 
BgL_val2_1954z00_2034 = 
(
(((long)10)*BgL_b5z00_2030)+BgL_b6z00_2031); 
{ /* Llib/date.scm 619 */
int BgL_auxz00_7108;
BgL_auxz00_7108 = 
(int)(((long)3)); 
BGL_MVALUES_NUMBER_SET(BgL_auxz00_7108); } 
{ /* Llib/date.scm 619 */
obj_t BgL_auxz00_7113;int BgL_auxz00_7111;
BgL_auxz00_7113 = 
BINT(BgL_val1_1953z00_2033); 
BgL_auxz00_7111 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_7111, BgL_auxz00_7113); } 
{ /* Llib/date.scm 619 */
obj_t BgL_auxz00_7118;int BgL_auxz00_7116;
BgL_auxz00_7118 = 
BINT(BgL_val2_1954z00_2034); 
BgL_auxz00_7116 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_7116, BgL_auxz00_7118); } 
return 
BINT(BgL_b1z00_2027);} } break;case ((long)3) : 

{ /* Llib/date.scm 604 */
long BgL_b1z00_2047;long BgL_b2z00_2048;long BgL_b3z00_2049;long BgL_b4z00_2050;long BgL_b5z00_2051;long BgL_b6z00_2052;
{ /* Llib/date.scm 604 */
int BgL_arg2717z00_2059;
{ /* Llib/date.scm 604 */
int BgL_auxz00_7122;
BgL_auxz00_7122 = 
(int)(((long)0)); 
BgL_arg2717z00_2059 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1708, BgL_auxz00_7122); } 
BgL_b1z00_2047 = 
(
(long)(BgL_arg2717z00_2059)-((long)48)); } 
{ /* Llib/date.scm 605 */
int BgL_arg2719z00_2061;
{ /* Llib/date.scm 605 */
int BgL_auxz00_7127;
BgL_auxz00_7127 = 
(int)(((long)1)); 
BgL_arg2719z00_2061 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1708, BgL_auxz00_7127); } 
BgL_b2z00_2048 = 
(
(long)(BgL_arg2719z00_2061)-((long)48)); } 
{ /* Llib/date.scm 606 */
int BgL_arg2721z00_2063;
{ /* Llib/date.scm 606 */
int BgL_auxz00_7132;
BgL_auxz00_7132 = 
(int)(((long)3)); 
BgL_arg2721z00_2063 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1708, BgL_auxz00_7132); } 
BgL_b3z00_2049 = 
(
(long)(BgL_arg2721z00_2063)-((long)48)); } 
{ /* Llib/date.scm 607 */
int BgL_arg2724z00_2065;
{ /* Llib/date.scm 607 */
int BgL_auxz00_7137;
BgL_auxz00_7137 = 
(int)(((long)4)); 
BgL_arg2724z00_2065 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1708, BgL_auxz00_7137); } 
BgL_b4z00_2050 = 
(
(long)(BgL_arg2724z00_2065)-((long)48)); } 
{ /* Llib/date.scm 608 */
int BgL_arg2726z00_2067;
{ /* Llib/date.scm 608 */
int BgL_auxz00_7142;
BgL_auxz00_7142 = 
(int)(((long)6)); 
BgL_arg2726z00_2067 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1708, BgL_auxz00_7142); } 
BgL_b5z00_2051 = 
(
(long)(BgL_arg2726z00_2067)-((long)48)); } 
{ /* Llib/date.scm 609 */
int BgL_arg2728z00_2069;
{ /* Llib/date.scm 609 */
int BgL_auxz00_7147;
BgL_auxz00_7147 = 
(int)(((long)7)); 
BgL_arg2728z00_2069 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1708, BgL_auxz00_7147); } 
BgL_b6z00_2052 = 
(
(long)(BgL_arg2728z00_2069)-((long)48)); } 
{ /* Llib/date.scm 610 */
long BgL_val0_1955z00_2053;long BgL_val1_1956z00_2054;long BgL_val2_1957z00_2055;
BgL_val0_1955z00_2053 = 
(
(((long)10)*BgL_b1z00_2047)+BgL_b2z00_2048); 
BgL_val1_1956z00_2054 = 
(
(((long)10)*BgL_b3z00_2049)+BgL_b4z00_2050); 
BgL_val2_1957z00_2055 = 
(
(((long)10)*BgL_b5z00_2051)+BgL_b6z00_2052); 
{ /* Llib/date.scm 610 */
int BgL_auxz00_7158;
BgL_auxz00_7158 = 
(int)(((long)3)); 
BGL_MVALUES_NUMBER_SET(BgL_auxz00_7158); } 
{ /* Llib/date.scm 610 */
obj_t BgL_auxz00_7163;int BgL_auxz00_7161;
BgL_auxz00_7163 = 
BINT(BgL_val1_1956z00_2054); 
BgL_auxz00_7161 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_7161, BgL_auxz00_7163); } 
{ /* Llib/date.scm 610 */
obj_t BgL_auxz00_7168;int BgL_auxz00_7166;
BgL_auxz00_7168 = 
BINT(BgL_val2_1957z00_2055); 
BgL_auxz00_7166 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_7166, BgL_auxz00_7168); } 
return 
BINT(BgL_val0_1955z00_2053);} } break;case ((long)2) : 

{ /* Llib/date.scm 596 */
long BgL_b1z00_2071;long BgL_b2z00_2072;long BgL_b3z00_2073;long BgL_b4z00_2074;
{ /* Llib/date.scm 596 */
int BgL_arg2732z00_2080;
{ /* Llib/date.scm 596 */
int BgL_auxz00_7172;
BgL_auxz00_7172 = 
(int)(((long)0)); 
BgL_arg2732z00_2080 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1708, BgL_auxz00_7172); } 
BgL_b1z00_2071 = 
(
(long)(BgL_arg2732z00_2080)-((long)48)); } 
{ /* Llib/date.scm 597 */
int BgL_arg2734z00_2082;
{ /* Llib/date.scm 597 */
int BgL_auxz00_7177;
BgL_auxz00_7177 = 
(int)(((long)1)); 
BgL_arg2734z00_2082 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1708, BgL_auxz00_7177); } 
BgL_b2z00_2072 = 
(
(long)(BgL_arg2734z00_2082)-((long)48)); } 
{ /* Llib/date.scm 598 */
int BgL_arg2736z00_2084;
{ /* Llib/date.scm 598 */
int BgL_auxz00_7182;
BgL_auxz00_7182 = 
(int)(((long)3)); 
BgL_arg2736z00_2084 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1708, BgL_auxz00_7182); } 
BgL_b3z00_2073 = 
(
(long)(BgL_arg2736z00_2084)-((long)48)); } 
{ /* Llib/date.scm 599 */
int BgL_arg2738z00_2086;
{ /* Llib/date.scm 599 */
int BgL_auxz00_7187;
BgL_auxz00_7187 = 
(int)(((long)4)); 
BgL_arg2738z00_2086 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1708, BgL_auxz00_7187); } 
BgL_b4z00_2074 = 
(
(long)(BgL_arg2738z00_2086)-((long)48)); } 
{ /* Llib/date.scm 600 */
long BgL_val0_1958z00_2075;long BgL_val1_1959z00_2076;
BgL_val0_1958z00_2075 = 
(
(((long)10)*BgL_b1z00_2071)+BgL_b2z00_2072); 
BgL_val1_1959z00_2076 = 
(
(((long)10)*BgL_b3z00_2073)+BgL_b4z00_2074); 
{ /* Llib/date.scm 600 */
int BgL_auxz00_7196;
BgL_auxz00_7196 = 
(int)(((long)3)); 
BGL_MVALUES_NUMBER_SET(BgL_auxz00_7196); } 
{ /* Llib/date.scm 600 */
obj_t BgL_auxz00_7201;int BgL_auxz00_7199;
BgL_auxz00_7201 = 
BINT(BgL_val1_1959z00_2076); 
BgL_auxz00_7199 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_7199, BgL_auxz00_7201); } 
{ /* Llib/date.scm 600 */
obj_t BgL_auxz00_7206;int BgL_auxz00_7204;
BgL_auxz00_7206 = 
BINT(((long)0)); 
BgL_auxz00_7204 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_7204, BgL_auxz00_7206); } 
return 
BINT(BgL_val0_1958z00_2075);} } break;case ((long)1) : 

{ /* Llib/date.scm 589 */
long BgL_b1z00_2088;long BgL_b3z00_2089;long BgL_b4z00_2090;
{ /* Llib/date.scm 589 */
int BgL_arg2741z00_2095;
{ /* Llib/date.scm 589 */
int BgL_auxz00_7210;
BgL_auxz00_7210 = 
(int)(((long)0)); 
BgL_arg2741z00_2095 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1708, BgL_auxz00_7210); } 
BgL_b1z00_2088 = 
(
(long)(BgL_arg2741z00_2095)-((long)48)); } 
{ /* Llib/date.scm 590 */
int BgL_arg2743z00_2097;
{ /* Llib/date.scm 590 */
int BgL_auxz00_7215;
BgL_auxz00_7215 = 
(int)(((long)2)); 
BgL_arg2743z00_2097 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1708, BgL_auxz00_7215); } 
BgL_b3z00_2089 = 
(
(long)(BgL_arg2743z00_2097)-((long)48)); } 
{ /* Llib/date.scm 591 */
int BgL_arg2746z00_2099;
{ /* Llib/date.scm 591 */
int BgL_auxz00_7220;
BgL_auxz00_7220 = 
(int)(((long)3)); 
BgL_arg2746z00_2099 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1708, BgL_auxz00_7220); } 
BgL_b4z00_2090 = 
(
(long)(BgL_arg2746z00_2099)-((long)48)); } 
{ /* Llib/date.scm 592 */
long BgL_val1_1962z00_2092;
BgL_val1_1962z00_2092 = 
(
(((long)10)*BgL_b3z00_2089)+BgL_b4z00_2090); 
{ /* Llib/date.scm 592 */
int BgL_auxz00_7227;
BgL_auxz00_7227 = 
(int)(((long)3)); 
BGL_MVALUES_NUMBER_SET(BgL_auxz00_7227); } 
{ /* Llib/date.scm 592 */
obj_t BgL_auxz00_7232;int BgL_auxz00_7230;
BgL_auxz00_7232 = 
BINT(BgL_val1_1962z00_2092); 
BgL_auxz00_7230 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_7230, BgL_auxz00_7232); } 
{ /* Llib/date.scm 592 */
obj_t BgL_auxz00_7237;int BgL_auxz00_7235;
BgL_auxz00_7237 = 
BINT(((long)0)); 
BgL_auxz00_7235 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_7235, BgL_auxz00_7237); } 
return 
BINT(BgL_b1z00_2088);} } break;case ((long)0) : 

goto BgL_zc3anonymousza32690ze3z83_2008;break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string4373z00zz__datez00, BGl_string4374z00zz__datez00, 
BINT(BgL_matchz00_2009));} } } } } } } 
}



/* <anonymous:2358> */
obj_t BGl_zc3anonymousza32358ze3z83zz__datez00(obj_t BgL_envz00_5039, obj_t BgL_inputzd2portzd2_5040)
{ AN_OBJECT;
{ /* Llib/date.scm 551 */
{ 
obj_t BgL_inputzd2portzd2_1439;
BgL_inputzd2portzd2_1439 = BgL_inputzd2portzd2_5040; 
{ 
obj_t BgL_inputzd2portzd2_1478;long BgL_lastzd2matchzd2_1479;obj_t BgL_inputzd2portzd2_1493;long BgL_lastzd2matchzd2_1494;obj_t BgL_inputzd2portzd2_1513;long BgL_lastzd2matchzd2_1514;obj_t BgL_inputzd2portzd2_1524;long BgL_lastzd2matchzd2_1525;obj_t BgL_inputzd2portzd2_1543;long BgL_lastzd2matchzd2_1544;
{ /* Llib/date.scm 551 */
bool_t BgL_testz00_7244;
{ /* Llib/date.scm 551 */
obj_t BgL_arg2362z00_1477;
{ /* Llib/date.scm 551 */
obj_t BgL_res3435z00_3613;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1439))
{ /* Llib/date.scm 551 */
BgL_res3435z00_3613 = BgL_inputzd2portzd2_1439; }  else 
{ 
obj_t BgL_auxz00_7247;
BgL_auxz00_7247 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)23437)), BGl_string4441z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1439); 
FAILURE(BgL_auxz00_7247,BFALSE,BFALSE);} 
BgL_arg2362z00_1477 = BgL_res3435z00_3613; } 
BgL_testz00_7244 = 
INPUT_PORT_CLOSEP(BgL_arg2362z00_1477); } 
if(BgL_testz00_7244)
{ /* Llib/date.scm 551 */
return 
BGl_errorz00zz__errorz00(BGl_string4373z00zz__datez00, BGl_string4390z00zz__datez00, BgL_inputzd2portzd2_1439);}  else 
{ /* Llib/date.scm 551 */
BgL_zc3anonymousza32499ze3z83_1649:
{ /* Llib/date.scm 551 */
obj_t BgL_inputzd2portzd2_3779;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1439))
{ /* Llib/date.scm 551 */
BgL_inputzd2portzd2_3779 = BgL_inputzd2portzd2_1439; }  else 
{ 
obj_t BgL_auxz00_7255;
BgL_auxz00_7255 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)23437)), BGl_string4367z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1439); 
FAILURE(BgL_auxz00_7255,BFALSE,BFALSE);} 
RGC_START_MATCH(BgL_inputzd2portzd2_3779); } 
{ /* Llib/date.scm 551 */
long BgL_matchz00_1650;
BgL_inputzd2portzd2_1524 = BgL_inputzd2portzd2_1439; 
BgL_lastzd2matchzd2_1525 = ((long)2); 
BgL_zc3anonymousza32395ze3z83_1526:
{ /* Llib/date.scm 551 */
int BgL_currentzd2charzd2_1527;
{ /* Llib/date.scm 551 */
obj_t BgL_inputzd2portzd2_3692;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1524))
{ /* Llib/date.scm 551 */
BgL_inputzd2portzd2_3692 = BgL_inputzd2portzd2_1524; }  else 
{ 
obj_t BgL_auxz00_7262;
BgL_auxz00_7262 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)23437)), BGl_string4437z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1524); 
FAILURE(BgL_auxz00_7262,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_1527 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3692); } 
if(
(
(long)(BgL_currentzd2charzd2_1527)==((long)0)))
{ /* Llib/date.scm 551 */
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1524))
{ /* Llib/date.scm 551 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_1524))
{ 

goto BgL_zc3anonymousza32395ze3z83_1526;}  else 
{ /* Llib/date.scm 551 */
BgL_matchz00_1650 = BgL_lastzd2matchzd2_1525; } }  else 
{ /* Llib/date.scm 551 */
long BgL_newzd2matchzd2_3699;
RGC_STOP_MATCH(BgL_inputzd2portzd2_1524); 
BgL_newzd2matchzd2_3699 = ((long)2); 
BgL_matchz00_1650 = BgL_newzd2matchzd2_3699; } }  else 
{ /* Llib/date.scm 551 */
bool_t BgL_testz00_7275;
if(
(
(long)(BgL_currentzd2charzd2_1527)==((long)65)))
{ /* Llib/date.scm 551 */
BgL_testz00_7275 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
if(
(
(long)(BgL_currentzd2charzd2_1527)==((long)68)))
{ /* Llib/date.scm 551 */
BgL_testz00_7275 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
if(
(
(long)(BgL_currentzd2charzd2_1527)==((long)70)))
{ /* Llib/date.scm 551 */
BgL_testz00_7275 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
if(
(
(long)(BgL_currentzd2charzd2_1527)==((long)74)))
{ /* Llib/date.scm 551 */
BgL_testz00_7275 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
bool_t BgL_testz00_7288;
if(
(
(long)(BgL_currentzd2charzd2_1527)==((long)79)))
{ /* Llib/date.scm 551 */
BgL_testz00_7288 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
if(
(
(long)(BgL_currentzd2charzd2_1527)==((long)78)))
{ /* Llib/date.scm 551 */
BgL_testz00_7288 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
BgL_testz00_7288 = 
(
(long)(BgL_currentzd2charzd2_1527)==((long)77))
; } } 
if(BgL_testz00_7288)
{ /* Llib/date.scm 551 */
BgL_testz00_7275 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
BgL_testz00_7275 = 
(
(long)(BgL_currentzd2charzd2_1527)==((long)83))
; } } } } } 
if(BgL_testz00_7275)
{ /* Llib/date.scm 551 */
BgL_inputzd2portzd2_1543 = BgL_inputzd2portzd2_1524; 
BgL_lastzd2matchzd2_1544 = BgL_lastzd2matchzd2_1525; 
BgL_zc3anonymousza32411ze3z83_1545:
{ /* Llib/date.scm 551 */
long BgL_newzd2matchzd2_1546;
{ /* Llib/date.scm 551 */
obj_t BgL_inputzd2portzd2_3729;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1543))
{ /* Llib/date.scm 551 */
BgL_inputzd2portzd2_3729 = BgL_inputzd2portzd2_1543; }  else 
{ 
obj_t BgL_auxz00_7301;
BgL_auxz00_7301 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)23437)), BGl_string4436z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1543); 
FAILURE(BgL_auxz00_7301,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_3729); } 
BgL_newzd2matchzd2_1546 = ((long)2); 
{ /* Llib/date.scm 551 */
int BgL_currentzd2charzd2_1547;
BgL_currentzd2charzd2_1547 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1543); 
if(
(
(long)(BgL_currentzd2charzd2_1547)==((long)0)))
{ /* Llib/date.scm 551 */
bool_t BgL_testz00_7310;
{ /* Llib/date.scm 551 */
bool_t BgL_res3440z00_3737;
{ /* Llib/date.scm 551 */
obj_t BgL_inputzd2portzd2_3733;
BgL_inputzd2portzd2_3733 = BgL_inputzd2portzd2_1543; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3733))
{ /* Llib/date.scm 551 */
BgL_res3440z00_3737 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3733); }  else 
{ /* Llib/date.scm 551 */
BgL_res3440z00_3737 = ((bool_t)0); } } 
BgL_testz00_7310 = BgL_res3440z00_3737; } 
if(BgL_testz00_7310)
{ 

goto BgL_zc3anonymousza32411ze3z83_1545;}  else 
{ /* Llib/date.scm 551 */
BgL_matchz00_1650 = BgL_newzd2matchzd2_1546; } }  else 
{ /* Llib/date.scm 551 */
bool_t BgL_testz00_7314;
{ /* Llib/date.scm 551 */
bool_t BgL_testz00_7315;
if(
(
(long)(BgL_currentzd2charzd2_1547)==((long)99)))
{ /* Llib/date.scm 551 */
BgL_testz00_7315 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
if(
(
(long)(BgL_currentzd2charzd2_1547)==((long)98)))
{ /* Llib/date.scm 551 */
BgL_testz00_7315 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
BgL_testz00_7315 = 
(
(long)(BgL_currentzd2charzd2_1547)==((long)97))
; } } 
if(BgL_testz00_7315)
{ /* Llib/date.scm 551 */
BgL_testz00_7314 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
if(
(
(long)(BgL_currentzd2charzd2_1547)==((long)101)))
{ /* Llib/date.scm 551 */
BgL_testz00_7314 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
if(
(
(long)(BgL_currentzd2charzd2_1547)==((long)103)))
{ /* Llib/date.scm 551 */
BgL_testz00_7314 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
if(
(
(long)(BgL_currentzd2charzd2_1547)==((long)108)))
{ /* Llib/date.scm 551 */
BgL_testz00_7314 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
bool_t BgL_testz00_7333;
if(
(
(long)(BgL_currentzd2charzd2_1547)==((long)112)))
{ /* Llib/date.scm 551 */
BgL_testz00_7333 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
if(
(
(long)(BgL_currentzd2charzd2_1547)==((long)111)))
{ /* Llib/date.scm 551 */
BgL_testz00_7333 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
BgL_testz00_7333 = 
(
(long)(BgL_currentzd2charzd2_1547)==((long)110))
; } } 
if(BgL_testz00_7333)
{ /* Llib/date.scm 551 */
BgL_testz00_7314 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
if(
(
(long)(BgL_currentzd2charzd2_1547)==((long)114)))
{ /* Llib/date.scm 551 */
BgL_testz00_7314 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
bool_t BgL_testz00_7345;
if(
(
(long)(BgL_currentzd2charzd2_1547)==((long)118)))
{ /* Llib/date.scm 551 */
BgL_testz00_7345 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
if(
(
(long)(BgL_currentzd2charzd2_1547)==((long)117)))
{ /* Llib/date.scm 551 */
BgL_testz00_7345 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
BgL_testz00_7345 = 
(
(long)(BgL_currentzd2charzd2_1547)==((long)116))
; } } 
if(BgL_testz00_7345)
{ /* Llib/date.scm 551 */
BgL_testz00_7314 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
BgL_testz00_7314 = 
(
(long)(BgL_currentzd2charzd2_1547)==((long)121))
; } } } } } } } } 
if(BgL_testz00_7314)
{ /* Llib/date.scm 551 */
BgL_inputzd2portzd2_1493 = BgL_inputzd2portzd2_1543; 
BgL_lastzd2matchzd2_1494 = BgL_newzd2matchzd2_1546; 
BgL_zc3anonymousza32371ze3z83_1495:
{ /* Llib/date.scm 551 */
int BgL_currentzd2charzd2_1496;
{ /* Llib/date.scm 551 */
obj_t BgL_inputzd2portzd2_3635;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1493))
{ /* Llib/date.scm 551 */
BgL_inputzd2portzd2_3635 = BgL_inputzd2portzd2_1493; }  else 
{ 
obj_t BgL_auxz00_7358;
BgL_auxz00_7358 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)23437)), BGl_string4439z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1493); 
FAILURE(BgL_auxz00_7358,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_1496 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3635); } 
if(
(
(long)(BgL_currentzd2charzd2_1496)==((long)0)))
{ /* Llib/date.scm 551 */
bool_t BgL_testz00_7366;
{ /* Llib/date.scm 551 */
bool_t BgL_res3438z00_3642;
{ /* Llib/date.scm 551 */
obj_t BgL_inputzd2portzd2_3638;
BgL_inputzd2portzd2_3638 = BgL_inputzd2portzd2_1493; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3638))
{ /* Llib/date.scm 551 */
BgL_res3438z00_3642 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3638); }  else 
{ /* Llib/date.scm 551 */
BgL_res3438z00_3642 = ((bool_t)0); } } 
BgL_testz00_7366 = BgL_res3438z00_3642; } 
if(BgL_testz00_7366)
{ 

goto BgL_zc3anonymousza32371ze3z83_1495;}  else 
{ /* Llib/date.scm 551 */
BgL_matchz00_1650 = BgL_lastzd2matchzd2_1494; } }  else 
{ /* Llib/date.scm 551 */
bool_t BgL_testz00_7370;
{ /* Llib/date.scm 551 */
bool_t BgL_testz00_7371;
if(
(
(long)(BgL_currentzd2charzd2_1496)==((long)99)))
{ /* Llib/date.scm 551 */
BgL_testz00_7371 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
if(
(
(long)(BgL_currentzd2charzd2_1496)==((long)98)))
{ /* Llib/date.scm 551 */
BgL_testz00_7371 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
BgL_testz00_7371 = 
(
(long)(BgL_currentzd2charzd2_1496)==((long)97))
; } } 
if(BgL_testz00_7371)
{ /* Llib/date.scm 551 */
BgL_testz00_7370 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
if(
(
(long)(BgL_currentzd2charzd2_1496)==((long)101)))
{ /* Llib/date.scm 551 */
BgL_testz00_7370 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
if(
(
(long)(BgL_currentzd2charzd2_1496)==((long)103)))
{ /* Llib/date.scm 551 */
BgL_testz00_7370 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
if(
(
(long)(BgL_currentzd2charzd2_1496)==((long)108)))
{ /* Llib/date.scm 551 */
BgL_testz00_7370 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
bool_t BgL_testz00_7389;
if(
(
(long)(BgL_currentzd2charzd2_1496)==((long)112)))
{ /* Llib/date.scm 551 */
BgL_testz00_7389 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
if(
(
(long)(BgL_currentzd2charzd2_1496)==((long)111)))
{ /* Llib/date.scm 551 */
BgL_testz00_7389 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
BgL_testz00_7389 = 
(
(long)(BgL_currentzd2charzd2_1496)==((long)110))
; } } 
if(BgL_testz00_7389)
{ /* Llib/date.scm 551 */
BgL_testz00_7370 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
if(
(
(long)(BgL_currentzd2charzd2_1496)==((long)114)))
{ /* Llib/date.scm 551 */
BgL_testz00_7370 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
bool_t BgL_testz00_7401;
if(
(
(long)(BgL_currentzd2charzd2_1496)==((long)118)))
{ /* Llib/date.scm 551 */
BgL_testz00_7401 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
if(
(
(long)(BgL_currentzd2charzd2_1496)==((long)117)))
{ /* Llib/date.scm 551 */
BgL_testz00_7401 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
BgL_testz00_7401 = 
(
(long)(BgL_currentzd2charzd2_1496)==((long)116))
; } } 
if(BgL_testz00_7401)
{ /* Llib/date.scm 551 */
BgL_testz00_7370 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
BgL_testz00_7370 = 
(
(long)(BgL_currentzd2charzd2_1496)==((long)121))
; } } } } } } } } 
if(BgL_testz00_7370)
{ /* Llib/date.scm 551 */
long BgL_newzd2matchzd2_3673;
RGC_STOP_MATCH(BgL_inputzd2portzd2_1493); 
BgL_newzd2matchzd2_3673 = ((long)1); 
BgL_matchz00_1650 = BgL_newzd2matchzd2_3673; }  else 
{ /* Llib/date.scm 551 */
BgL_matchz00_1650 = BgL_lastzd2matchzd2_1494; } } } }  else 
{ /* Llib/date.scm 551 */
BgL_matchz00_1650 = BgL_newzd2matchzd2_1546; } } } } }  else 
{ /* Llib/date.scm 551 */
bool_t BgL_testz00_7413;
{ /* Llib/date.scm 551 */
bool_t BgL_testz00_7414;
if(
(
(long)(BgL_currentzd2charzd2_1527)==((long)10)))
{ /* Llib/date.scm 551 */
BgL_testz00_7414 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
BgL_testz00_7414 = 
(
(long)(BgL_currentzd2charzd2_1527)==((long)9))
; } 
if(BgL_testz00_7414)
{ /* Llib/date.scm 551 */
BgL_testz00_7413 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
if(
(
(long)(BgL_currentzd2charzd2_1527)==((long)13)))
{ /* Llib/date.scm 551 */
BgL_testz00_7413 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
BgL_testz00_7413 = 
(
(long)(BgL_currentzd2charzd2_1527)==((long)32))
; } } } 
if(BgL_testz00_7413)
{ /* Llib/date.scm 551 */
BgL_inputzd2portzd2_1513 = BgL_inputzd2portzd2_1524; 
BgL_lastzd2matchzd2_1514 = BgL_lastzd2matchzd2_1525; 
BgL_zc3anonymousza32388ze3z83_1515:
{ /* Llib/date.scm 551 */
long BgL_newzd2matchzd2_1516;
{ /* Llib/date.scm 551 */
obj_t BgL_inputzd2portzd2_3675;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1513))
{ /* Llib/date.scm 551 */
BgL_inputzd2portzd2_3675 = BgL_inputzd2portzd2_1513; }  else 
{ 
obj_t BgL_auxz00_7427;
BgL_auxz00_7427 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)23437)), BGl_string4438z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1513); 
FAILURE(BgL_auxz00_7427,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_3675); } 
BgL_newzd2matchzd2_1516 = ((long)0); 
{ /* Llib/date.scm 551 */
int BgL_currentzd2charzd2_1517;
BgL_currentzd2charzd2_1517 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1513); 
if(
(
(long)(BgL_currentzd2charzd2_1517)==((long)0)))
{ /* Llib/date.scm 551 */
bool_t BgL_testz00_7436;
{ /* Llib/date.scm 551 */
bool_t BgL_res3439z00_3683;
{ /* Llib/date.scm 551 */
obj_t BgL_inputzd2portzd2_3679;
BgL_inputzd2portzd2_3679 = BgL_inputzd2portzd2_1513; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3679))
{ /* Llib/date.scm 551 */
BgL_res3439z00_3683 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3679); }  else 
{ /* Llib/date.scm 551 */
BgL_res3439z00_3683 = ((bool_t)0); } } 
BgL_testz00_7436 = BgL_res3439z00_3683; } 
if(BgL_testz00_7436)
{ 

goto BgL_zc3anonymousza32388ze3z83_1515;}  else 
{ /* Llib/date.scm 551 */
BgL_matchz00_1650 = BgL_newzd2matchzd2_1516; } }  else 
{ /* Llib/date.scm 551 */
bool_t BgL_testz00_7440;
{ /* Llib/date.scm 551 */
bool_t BgL_testz00_7441;
if(
(
(long)(BgL_currentzd2charzd2_1517)==((long)10)))
{ /* Llib/date.scm 551 */
BgL_testz00_7441 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
BgL_testz00_7441 = 
(
(long)(BgL_currentzd2charzd2_1517)==((long)9))
; } 
if(BgL_testz00_7441)
{ /* Llib/date.scm 551 */
BgL_testz00_7440 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
if(
(
(long)(BgL_currentzd2charzd2_1517)==((long)13)))
{ /* Llib/date.scm 551 */
BgL_testz00_7440 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
BgL_testz00_7440 = 
(
(long)(BgL_currentzd2charzd2_1517)==((long)32))
; } } } 
if(BgL_testz00_7440)
{ /* Llib/date.scm 551 */
BgL_inputzd2portzd2_1478 = BgL_inputzd2portzd2_1513; 
BgL_lastzd2matchzd2_1479 = BgL_newzd2matchzd2_1516; 
BgL_zc3anonymousza32363ze3z83_1480:
{ /* Llib/date.scm 551 */
long BgL_newzd2matchzd2_1481;
{ /* Llib/date.scm 551 */
obj_t BgL_inputzd2portzd2_3616;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1478))
{ /* Llib/date.scm 551 */
BgL_inputzd2portzd2_3616 = BgL_inputzd2portzd2_1478; }  else 
{ 
obj_t BgL_auxz00_7454;
BgL_auxz00_7454 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)23437)), BGl_string4440z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1478); 
FAILURE(BgL_auxz00_7454,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_3616); } 
BgL_newzd2matchzd2_1481 = ((long)0); 
{ /* Llib/date.scm 551 */
int BgL_currentzd2charzd2_1482;
BgL_currentzd2charzd2_1482 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1478); 
if(
(
(long)(BgL_currentzd2charzd2_1482)==((long)0)))
{ /* Llib/date.scm 551 */
bool_t BgL_testz00_7463;
{ /* Llib/date.scm 551 */
bool_t BgL_res3437z00_3624;
{ /* Llib/date.scm 551 */
obj_t BgL_inputzd2portzd2_3620;
BgL_inputzd2portzd2_3620 = BgL_inputzd2portzd2_1478; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3620))
{ /* Llib/date.scm 551 */
BgL_res3437z00_3624 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3620); }  else 
{ /* Llib/date.scm 551 */
BgL_res3437z00_3624 = ((bool_t)0); } } 
BgL_testz00_7463 = BgL_res3437z00_3624; } 
if(BgL_testz00_7463)
{ 

goto BgL_zc3anonymousza32363ze3z83_1480;}  else 
{ /* Llib/date.scm 551 */
BgL_matchz00_1650 = BgL_newzd2matchzd2_1481; } }  else 
{ /* Llib/date.scm 551 */
bool_t BgL_testz00_7467;
{ /* Llib/date.scm 551 */
bool_t BgL_testz00_7468;
if(
(
(long)(BgL_currentzd2charzd2_1482)==((long)10)))
{ /* Llib/date.scm 551 */
BgL_testz00_7468 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
BgL_testz00_7468 = 
(
(long)(BgL_currentzd2charzd2_1482)==((long)9))
; } 
if(BgL_testz00_7468)
{ /* Llib/date.scm 551 */
BgL_testz00_7467 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
if(
(
(long)(BgL_currentzd2charzd2_1482)==((long)13)))
{ /* Llib/date.scm 551 */
BgL_testz00_7467 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 551 */
BgL_testz00_7467 = 
(
(long)(BgL_currentzd2charzd2_1482)==((long)32))
; } } } 
if(BgL_testz00_7467)
{ 
long BgL_lastzd2matchzd2_7479;
BgL_lastzd2matchzd2_7479 = BgL_newzd2matchzd2_1481; 
BgL_lastzd2matchzd2_1479 = BgL_lastzd2matchzd2_7479; 
goto BgL_zc3anonymousza32363ze3z83_1480;}  else 
{ /* Llib/date.scm 551 */
BgL_matchz00_1650 = BgL_newzd2matchzd2_1481; } } } } }  else 
{ /* Llib/date.scm 551 */
BgL_matchz00_1650 = BgL_newzd2matchzd2_1516; } } } } }  else 
{ /* Llib/date.scm 551 */
long BgL_newzd2matchzd2_3727;
RGC_STOP_MATCH(BgL_inputzd2portzd2_1524); 
BgL_newzd2matchzd2_3727 = ((long)2); 
BgL_matchz00_1650 = BgL_newzd2matchzd2_3727; } } } } 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_1439); 
switch( BgL_matchz00_1650) { case ((long)2) : 

{ /* Llib/date.scm 572 */
obj_t BgL_auxz00_7482;
{ /* Llib/date.scm 551 */
bool_t BgL_testz00_7483;
{ /* Llib/date.scm 551 */
long BgL_arg2492z00_1639;
{ /* Llib/date.scm 551 */
obj_t BgL_inputzd2portzd2_3775;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1439))
{ /* Llib/date.scm 551 */
BgL_inputzd2portzd2_3775 = BgL_inputzd2portzd2_1439; }  else 
{ 
obj_t BgL_auxz00_7486;
BgL_auxz00_7486 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)23437)), BGl_string4375z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1439); 
FAILURE(BgL_auxz00_7486,BFALSE,BFALSE);} 
BgL_arg2492z00_1639 = 
RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_3775); } 
BgL_testz00_7483 = 
(BgL_arg2492z00_1639==((long)0)); } 
if(BgL_testz00_7483)
{ /* Llib/date.scm 551 */
BgL_auxz00_7482 = BCNST(256)
; }  else 
{ /* Llib/date.scm 551 */
obj_t BgL_inputzd2portzd2_3778;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1439))
{ /* Llib/date.scm 551 */
BgL_inputzd2portzd2_3778 = BgL_inputzd2portzd2_1439; }  else 
{ 
obj_t BgL_auxz00_7494;
BgL_auxz00_7494 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)23437)), BGl_string4375z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1439); 
FAILURE(BgL_auxz00_7494,BFALSE,BFALSE);} 
BgL_auxz00_7482 = 
BCHAR(
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_3778)); } } 
return 
BGl_parsezd2errorzd2zz__datez00(BGl_symbol4369z00zz__datez00, BGl_string4410z00zz__datez00, BgL_auxz00_7482, BgL_inputzd2portzd2_1439);} break;case ((long)1) : 

{ /* Llib/date.scm 555 */
obj_t BgL_casezd2valuezd2_1658;
BgL_casezd2valuezd2_1658 = 
rgc_buffer_symbol(BgL_inputzd2portzd2_1439); 
if(
(BgL_casezd2valuezd2_1658==BGl_symbol4411z00zz__datez00))
{ /* Llib/date.scm 555 */
return 
BINT(((long)1));}  else 
{ /* Llib/date.scm 555 */
if(
(BgL_casezd2valuezd2_1658==BGl_symbol4413z00zz__datez00))
{ /* Llib/date.scm 555 */
return 
BINT(((long)2));}  else 
{ /* Llib/date.scm 555 */
if(
(BgL_casezd2valuezd2_1658==BGl_symbol4415z00zz__datez00))
{ /* Llib/date.scm 555 */
return 
BINT(((long)3));}  else 
{ /* Llib/date.scm 555 */
if(
(BgL_casezd2valuezd2_1658==BGl_symbol4417z00zz__datez00))
{ /* Llib/date.scm 555 */
return 
BINT(((long)4));}  else 
{ /* Llib/date.scm 555 */
if(
(BgL_casezd2valuezd2_1658==BGl_symbol4419z00zz__datez00))
{ /* Llib/date.scm 555 */
return 
BINT(((long)5));}  else 
{ /* Llib/date.scm 555 */
if(
(BgL_casezd2valuezd2_1658==BGl_symbol4421z00zz__datez00))
{ /* Llib/date.scm 555 */
return 
BINT(((long)6));}  else 
{ /* Llib/date.scm 555 */
if(
(BgL_casezd2valuezd2_1658==BGl_symbol4423z00zz__datez00))
{ /* Llib/date.scm 555 */
return 
BINT(((long)7));}  else 
{ /* Llib/date.scm 555 */
if(
(BgL_casezd2valuezd2_1658==BGl_symbol4425z00zz__datez00))
{ /* Llib/date.scm 555 */
return 
BINT(((long)8));}  else 
{ /* Llib/date.scm 555 */
if(
(BgL_casezd2valuezd2_1658==BGl_symbol4427z00zz__datez00))
{ /* Llib/date.scm 555 */
return 
BINT(((long)9));}  else 
{ /* Llib/date.scm 555 */
if(
(BgL_casezd2valuezd2_1658==BGl_symbol4429z00zz__datez00))
{ /* Llib/date.scm 555 */
return 
BINT(((long)10));}  else 
{ /* Llib/date.scm 555 */
if(
(BgL_casezd2valuezd2_1658==BGl_symbol4431z00zz__datez00))
{ /* Llib/date.scm 555 */
return 
BINT(((long)11));}  else 
{ /* Llib/date.scm 555 */
if(
(BgL_casezd2valuezd2_1658==BGl_symbol4433z00zz__datez00))
{ /* Llib/date.scm 555 */
return 
BINT(((long)12));}  else 
{ /* Llib/date.scm 568 */
obj_t BgL_auxz00_7538;
{ /* Llib/date.scm 551 */
int BgL_arg2436z00_1578;
{ /* Llib/date.scm 551 */
int BgL_res3441z00_3769;
{ /* Llib/date.scm 551 */
obj_t BgL_inputzd2portzd2_3768;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1439))
{ /* Llib/date.scm 551 */
BgL_inputzd2portzd2_3768 = BgL_inputzd2portzd2_1439; }  else 
{ 
obj_t BgL_auxz00_7541;
BgL_auxz00_7541 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)23437)), BGl_string4435z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1439); 
FAILURE(BgL_auxz00_7541,BFALSE,BFALSE);} 
BgL_res3441z00_3769 = 
(int)(
RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_3768)); } 
BgL_arg2436z00_1578 = BgL_res3441z00_3769; } 
BgL_auxz00_7538 = 
rgc_buffer_substring(BgL_inputzd2portzd2_1439, ((long)0), 
(long)(BgL_arg2436z00_1578)); } 
return 
BGl_parsezd2errorzd2zz__datez00(BGl_symbol4369z00zz__datez00, BGl_string4410z00zz__datez00, BgL_auxz00_7538, BgL_inputzd2portzd2_1439);} } } } } } } } } } } } } break;case ((long)0) : 

goto BgL_zc3anonymousza32499ze3z83_1649;break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string4373z00zz__datez00, BGl_string4374z00zz__datez00, 
BINT(BgL_matchz00_1650));} } } } } } } 
}



/* <anonymous:2240> */
obj_t BGl_zc3anonymousza32240ze3z83zz__datez00(obj_t BgL_envz00_5041, obj_t BgL_inputzd2portzd2_5042)
{ AN_OBJECT;
{ /* Llib/date.scm 537 */
{ 
obj_t BgL_inputzd2portzd2_1222;
BgL_inputzd2portzd2_1222 = BgL_inputzd2portzd2_5042; 
{ 
obj_t BgL_inputzd2portzd2_1260;long BgL_lastzd2matchzd2_1261;obj_t BgL_inputzd2portzd2_1269;long BgL_lastzd2matchzd2_1270;obj_t BgL_inputzd2portzd2_1278;long BgL_lastzd2matchzd2_1279;obj_t BgL_inputzd2portzd2_1293;long BgL_lastzd2matchzd2_1294;obj_t BgL_inputzd2portzd2_1304;long BgL_lastzd2matchzd2_1305;
{ /* Llib/date.scm 537 */
bool_t BgL_testz00_7553;
{ /* Llib/date.scm 537 */
obj_t BgL_arg2245z00_1259;
{ /* Llib/date.scm 537 */
obj_t BgL_res3428z00_3514;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1222))
{ /* Llib/date.scm 537 */
BgL_res3428z00_3514 = BgL_inputzd2portzd2_1222; }  else 
{ 
obj_t BgL_auxz00_7556;
BgL_auxz00_7556 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22962)), BGl_string4448z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1222); 
FAILURE(BgL_auxz00_7556,BFALSE,BFALSE);} 
BgL_arg2245z00_1259 = BgL_res3428z00_3514; } 
BgL_testz00_7553 = 
INPUT_PORT_CLOSEP(BgL_arg2245z00_1259); } 
if(BgL_testz00_7553)
{ /* Llib/date.scm 537 */
return 
BGl_errorz00zz__errorz00(BGl_string4373z00zz__datez00, BGl_string4390z00zz__datez00, BgL_inputzd2portzd2_1222);}  else 
{ /* Llib/date.scm 537 */
BgL_zc3anonymousza32352ze3z83_1398:
{ /* Llib/date.scm 537 */
obj_t BgL_inputzd2portzd2_3609;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1222))
{ /* Llib/date.scm 537 */
BgL_inputzd2portzd2_3609 = BgL_inputzd2portzd2_1222; }  else 
{ 
obj_t BgL_auxz00_7564;
BgL_auxz00_7564 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22962)), BGl_string4367z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1222); 
FAILURE(BgL_auxz00_7564,BFALSE,BFALSE);} 
RGC_START_MATCH(BgL_inputzd2portzd2_3609); } 
{ /* Llib/date.scm 537 */
long BgL_matchz00_1399;
BgL_inputzd2portzd2_1304 = BgL_inputzd2portzd2_1222; 
BgL_lastzd2matchzd2_1305 = ((long)2); 
BgL_zc3anonymousza32271ze3z83_1306:
{ /* Llib/date.scm 537 */
int BgL_currentzd2charzd2_1307;
{ /* Llib/date.scm 537 */
obj_t BgL_inputzd2portzd2_3579;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1304))
{ /* Llib/date.scm 537 */
BgL_inputzd2portzd2_3579 = BgL_inputzd2portzd2_1304; }  else 
{ 
obj_t BgL_auxz00_7571;
BgL_auxz00_7571 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22962)), BGl_string4443z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1304); 
FAILURE(BgL_auxz00_7571,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_1307 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3579); } 
if(
(
(long)(BgL_currentzd2charzd2_1307)==((long)0)))
{ /* Llib/date.scm 537 */
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1304))
{ /* Llib/date.scm 537 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_1304))
{ 

goto BgL_zc3anonymousza32271ze3z83_1306;}  else 
{ /* Llib/date.scm 537 */
BgL_matchz00_1399 = BgL_lastzd2matchzd2_1305; } }  else 
{ /* Llib/date.scm 537 */
long BgL_newzd2matchzd2_3586;
RGC_STOP_MATCH(BgL_inputzd2portzd2_1304); 
BgL_newzd2matchzd2_3586 = ((long)2); 
BgL_matchz00_1399 = BgL_newzd2matchzd2_3586; } }  else 
{ /* Llib/date.scm 537 */
bool_t BgL_testz00_7584;
if(
(
(long)(BgL_currentzd2charzd2_1307)>=((long)48)))
{ /* Llib/date.scm 537 */
BgL_testz00_7584 = 
(
(long)(BgL_currentzd2charzd2_1307)<((long)58))
; }  else 
{ /* Llib/date.scm 537 */
BgL_testz00_7584 = ((bool_t)0)
; } 
if(BgL_testz00_7584)
{ /* Llib/date.scm 537 */
BgL_inputzd2portzd2_1260 = BgL_inputzd2portzd2_1304; 
BgL_lastzd2matchzd2_1261 = BgL_lastzd2matchzd2_1305; 
BgL_zc3anonymousza32246ze3z83_1262:
{ /* Llib/date.scm 537 */
long BgL_newzd2matchzd2_1263;
{ /* Llib/date.scm 537 */
obj_t BgL_inputzd2portzd2_3517;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1260))
{ /* Llib/date.scm 537 */
BgL_inputzd2portzd2_3517 = BgL_inputzd2portzd2_1260; }  else 
{ 
obj_t BgL_auxz00_7592;
BgL_auxz00_7592 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22962)), BGl_string4447z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1260); 
FAILURE(BgL_auxz00_7592,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_3517); } 
BgL_newzd2matchzd2_1263 = ((long)1); 
{ /* Llib/date.scm 537 */
int BgL_currentzd2charzd2_1264;
BgL_currentzd2charzd2_1264 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1260); 
if(
(
(long)(BgL_currentzd2charzd2_1264)==((long)0)))
{ /* Llib/date.scm 537 */
bool_t BgL_testz00_7601;
{ /* Llib/date.scm 537 */
bool_t BgL_res3430z00_3525;
{ /* Llib/date.scm 537 */
obj_t BgL_inputzd2portzd2_3521;
BgL_inputzd2portzd2_3521 = BgL_inputzd2portzd2_1260; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3521))
{ /* Llib/date.scm 537 */
BgL_res3430z00_3525 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3521); }  else 
{ /* Llib/date.scm 537 */
BgL_res3430z00_3525 = ((bool_t)0); } } 
BgL_testz00_7601 = BgL_res3430z00_3525; } 
if(BgL_testz00_7601)
{ 

goto BgL_zc3anonymousza32246ze3z83_1262;}  else 
{ /* Llib/date.scm 537 */
BgL_matchz00_1399 = BgL_newzd2matchzd2_1263; } }  else 
{ /* Llib/date.scm 537 */
bool_t BgL_testz00_7605;
if(
(
(long)(BgL_currentzd2charzd2_1264)>=((long)48)))
{ /* Llib/date.scm 537 */
BgL_testz00_7605 = 
(
(long)(BgL_currentzd2charzd2_1264)<((long)58))
; }  else 
{ /* Llib/date.scm 537 */
BgL_testz00_7605 = ((bool_t)0)
; } 
if(BgL_testz00_7605)
{ /* Llib/date.scm 537 */
BgL_inputzd2portzd2_1269 = BgL_inputzd2portzd2_1260; 
BgL_lastzd2matchzd2_1270 = BgL_newzd2matchzd2_1263; 
BgL_zc3anonymousza32251ze3z83_1271:
{ /* Llib/date.scm 537 */
long BgL_newzd2matchzd2_1272;
{ /* Llib/date.scm 537 */
obj_t BgL_inputzd2portzd2_3530;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1269))
{ /* Llib/date.scm 537 */
BgL_inputzd2portzd2_3530 = BgL_inputzd2portzd2_1269; }  else 
{ 
obj_t BgL_auxz00_7613;
BgL_auxz00_7613 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22962)), BGl_string4446z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1269); 
FAILURE(BgL_auxz00_7613,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_3530); } 
BgL_newzd2matchzd2_1272 = ((long)1); 
{ /* Llib/date.scm 537 */
int BgL_currentzd2charzd2_1273;
BgL_currentzd2charzd2_1273 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1269); 
if(
(
(long)(BgL_currentzd2charzd2_1273)==((long)0)))
{ /* Llib/date.scm 537 */
bool_t BgL_testz00_7622;
{ /* Llib/date.scm 537 */
bool_t BgL_res3431z00_3538;
{ /* Llib/date.scm 537 */
obj_t BgL_inputzd2portzd2_3534;
BgL_inputzd2portzd2_3534 = BgL_inputzd2portzd2_1269; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3534))
{ /* Llib/date.scm 537 */
BgL_res3431z00_3538 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3534); }  else 
{ /* Llib/date.scm 537 */
BgL_res3431z00_3538 = ((bool_t)0); } } 
BgL_testz00_7622 = BgL_res3431z00_3538; } 
if(BgL_testz00_7622)
{ 

goto BgL_zc3anonymousza32251ze3z83_1271;}  else 
{ /* Llib/date.scm 537 */
BgL_matchz00_1399 = BgL_newzd2matchzd2_1272; } }  else 
{ /* Llib/date.scm 537 */
bool_t BgL_testz00_7626;
if(
(
(long)(BgL_currentzd2charzd2_1273)>=((long)48)))
{ /* Llib/date.scm 537 */
BgL_testz00_7626 = 
(
(long)(BgL_currentzd2charzd2_1273)<((long)58))
; }  else 
{ /* Llib/date.scm 537 */
BgL_testz00_7626 = ((bool_t)0)
; } 
if(BgL_testz00_7626)
{ 
long BgL_lastzd2matchzd2_7632;
BgL_lastzd2matchzd2_7632 = BgL_newzd2matchzd2_1272; 
BgL_lastzd2matchzd2_1270 = BgL_lastzd2matchzd2_7632; 
goto BgL_zc3anonymousza32251ze3z83_1271;}  else 
{ /* Llib/date.scm 537 */
BgL_matchz00_1399 = BgL_newzd2matchzd2_1272; } } } } }  else 
{ /* Llib/date.scm 537 */
BgL_matchz00_1399 = BgL_newzd2matchzd2_1263; } } } } }  else 
{ /* Llib/date.scm 537 */
bool_t BgL_testz00_7633;
{ /* Llib/date.scm 537 */
bool_t BgL_testz00_7634;
if(
(
(long)(BgL_currentzd2charzd2_1307)==((long)10)))
{ /* Llib/date.scm 537 */
BgL_testz00_7634 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 537 */
BgL_testz00_7634 = 
(
(long)(BgL_currentzd2charzd2_1307)==((long)9))
; } 
if(BgL_testz00_7634)
{ /* Llib/date.scm 537 */
BgL_testz00_7633 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 537 */
if(
(
(long)(BgL_currentzd2charzd2_1307)==((long)13)))
{ /* Llib/date.scm 537 */
BgL_testz00_7633 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 537 */
BgL_testz00_7633 = 
(
(long)(BgL_currentzd2charzd2_1307)==((long)32))
; } } } 
if(BgL_testz00_7633)
{ /* Llib/date.scm 537 */
BgL_inputzd2portzd2_1278 = BgL_inputzd2portzd2_1304; 
BgL_lastzd2matchzd2_1279 = BgL_lastzd2matchzd2_1305; 
BgL_zc3anonymousza32256ze3z83_1280:
{ /* Llib/date.scm 537 */
long BgL_newzd2matchzd2_1281;
{ /* Llib/date.scm 537 */
obj_t BgL_inputzd2portzd2_3543;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1278))
{ /* Llib/date.scm 537 */
BgL_inputzd2portzd2_3543 = BgL_inputzd2portzd2_1278; }  else 
{ 
obj_t BgL_auxz00_7647;
BgL_auxz00_7647 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22962)), BGl_string4445z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1278); 
FAILURE(BgL_auxz00_7647,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_3543); } 
BgL_newzd2matchzd2_1281 = ((long)0); 
{ /* Llib/date.scm 537 */
int BgL_currentzd2charzd2_1282;
BgL_currentzd2charzd2_1282 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1278); 
if(
(
(long)(BgL_currentzd2charzd2_1282)==((long)0)))
{ /* Llib/date.scm 537 */
bool_t BgL_testz00_7656;
{ /* Llib/date.scm 537 */
bool_t BgL_res3432z00_3551;
{ /* Llib/date.scm 537 */
obj_t BgL_inputzd2portzd2_3547;
BgL_inputzd2portzd2_3547 = BgL_inputzd2portzd2_1278; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3547))
{ /* Llib/date.scm 537 */
BgL_res3432z00_3551 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3547); }  else 
{ /* Llib/date.scm 537 */
BgL_res3432z00_3551 = ((bool_t)0); } } 
BgL_testz00_7656 = BgL_res3432z00_3551; } 
if(BgL_testz00_7656)
{ 

goto BgL_zc3anonymousza32256ze3z83_1280;}  else 
{ /* Llib/date.scm 537 */
BgL_matchz00_1399 = BgL_newzd2matchzd2_1281; } }  else 
{ /* Llib/date.scm 537 */
bool_t BgL_testz00_7660;
{ /* Llib/date.scm 537 */
bool_t BgL_testz00_7661;
if(
(
(long)(BgL_currentzd2charzd2_1282)==((long)10)))
{ /* Llib/date.scm 537 */
BgL_testz00_7661 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 537 */
BgL_testz00_7661 = 
(
(long)(BgL_currentzd2charzd2_1282)==((long)9))
; } 
if(BgL_testz00_7661)
{ /* Llib/date.scm 537 */
BgL_testz00_7660 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 537 */
if(
(
(long)(BgL_currentzd2charzd2_1282)==((long)13)))
{ /* Llib/date.scm 537 */
BgL_testz00_7660 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 537 */
BgL_testz00_7660 = 
(
(long)(BgL_currentzd2charzd2_1282)==((long)32))
; } } } 
if(BgL_testz00_7660)
{ /* Llib/date.scm 537 */
BgL_inputzd2portzd2_1293 = BgL_inputzd2portzd2_1278; 
BgL_lastzd2matchzd2_1294 = BgL_newzd2matchzd2_1281; 
BgL_zc3anonymousza32264ze3z83_1295:
{ /* Llib/date.scm 537 */
long BgL_newzd2matchzd2_1296;
{ /* Llib/date.scm 537 */
obj_t BgL_inputzd2portzd2_3562;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1293))
{ /* Llib/date.scm 537 */
BgL_inputzd2portzd2_3562 = BgL_inputzd2portzd2_1293; }  else 
{ 
obj_t BgL_auxz00_7674;
BgL_auxz00_7674 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22962)), BGl_string4444z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1293); 
FAILURE(BgL_auxz00_7674,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_3562); } 
BgL_newzd2matchzd2_1296 = ((long)0); 
{ /* Llib/date.scm 537 */
int BgL_currentzd2charzd2_1297;
BgL_currentzd2charzd2_1297 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1293); 
if(
(
(long)(BgL_currentzd2charzd2_1297)==((long)0)))
{ /* Llib/date.scm 537 */
bool_t BgL_testz00_7683;
{ /* Llib/date.scm 537 */
bool_t BgL_res3433z00_3570;
{ /* Llib/date.scm 537 */
obj_t BgL_inputzd2portzd2_3566;
BgL_inputzd2portzd2_3566 = BgL_inputzd2portzd2_1293; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3566))
{ /* Llib/date.scm 537 */
BgL_res3433z00_3570 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3566); }  else 
{ /* Llib/date.scm 537 */
BgL_res3433z00_3570 = ((bool_t)0); } } 
BgL_testz00_7683 = BgL_res3433z00_3570; } 
if(BgL_testz00_7683)
{ 

goto BgL_zc3anonymousza32264ze3z83_1295;}  else 
{ /* Llib/date.scm 537 */
BgL_matchz00_1399 = BgL_newzd2matchzd2_1296; } }  else 
{ /* Llib/date.scm 537 */
bool_t BgL_testz00_7687;
{ /* Llib/date.scm 537 */
bool_t BgL_testz00_7688;
if(
(
(long)(BgL_currentzd2charzd2_1297)==((long)10)))
{ /* Llib/date.scm 537 */
BgL_testz00_7688 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 537 */
BgL_testz00_7688 = 
(
(long)(BgL_currentzd2charzd2_1297)==((long)9))
; } 
if(BgL_testz00_7688)
{ /* Llib/date.scm 537 */
BgL_testz00_7687 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 537 */
if(
(
(long)(BgL_currentzd2charzd2_1297)==((long)13)))
{ /* Llib/date.scm 537 */
BgL_testz00_7687 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 537 */
BgL_testz00_7687 = 
(
(long)(BgL_currentzd2charzd2_1297)==((long)32))
; } } } 
if(BgL_testz00_7687)
{ 
long BgL_lastzd2matchzd2_7699;
BgL_lastzd2matchzd2_7699 = BgL_newzd2matchzd2_1296; 
BgL_lastzd2matchzd2_1294 = BgL_lastzd2matchzd2_7699; 
goto BgL_zc3anonymousza32264ze3z83_1295;}  else 
{ /* Llib/date.scm 537 */
BgL_matchz00_1399 = BgL_newzd2matchzd2_1296; } } } } }  else 
{ /* Llib/date.scm 537 */
BgL_matchz00_1399 = BgL_newzd2matchzd2_1281; } } } } }  else 
{ /* Llib/date.scm 537 */
long BgL_newzd2matchzd2_3602;
RGC_STOP_MATCH(BgL_inputzd2portzd2_1304); 
BgL_newzd2matchzd2_3602 = ((long)2); 
BgL_matchz00_1399 = BgL_newzd2matchzd2_3602; } } } } 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_1222); 
switch( BgL_matchz00_1399) { case ((long)2) : 

{ /* Llib/date.scm 543 */
obj_t BgL_auxz00_7702;
{ /* Llib/date.scm 537 */
bool_t BgL_testz00_7703;
{ /* Llib/date.scm 537 */
long BgL_arg2345z00_1388;
{ /* Llib/date.scm 537 */
obj_t BgL_inputzd2portzd2_3605;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1222))
{ /* Llib/date.scm 537 */
BgL_inputzd2portzd2_3605 = BgL_inputzd2portzd2_1222; }  else 
{ 
obj_t BgL_auxz00_7706;
BgL_auxz00_7706 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22962)), BGl_string4375z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1222); 
FAILURE(BgL_auxz00_7706,BFALSE,BFALSE);} 
BgL_arg2345z00_1388 = 
RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_3605); } 
BgL_testz00_7703 = 
(BgL_arg2345z00_1388==((long)0)); } 
if(BgL_testz00_7703)
{ /* Llib/date.scm 537 */
BgL_auxz00_7702 = BCNST(256)
; }  else 
{ /* Llib/date.scm 537 */
obj_t BgL_inputzd2portzd2_3608;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1222))
{ /* Llib/date.scm 537 */
BgL_inputzd2portzd2_3608 = BgL_inputzd2portzd2_1222; }  else 
{ 
obj_t BgL_auxz00_7714;
BgL_auxz00_7714 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22962)), BGl_string4375z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1222); 
FAILURE(BgL_auxz00_7714,BFALSE,BFALSE);} 
BgL_auxz00_7702 = 
BCHAR(
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_3608)); } } 
return 
BGl_parsezd2errorzd2zz__datez00(BGl_symbol4369z00zz__datez00, BGl_string4442z00zz__datez00, BgL_auxz00_7702, BgL_inputzd2portzd2_1222);} break;case ((long)1) : 

{ /* Llib/date.scm 541 */
obj_t BgL_inputzd2portzd2_3612;
BgL_inputzd2portzd2_3612 = BgL_inputzd2portzd2_1222; 
return 
BINT(
rgc_buffer_fixnum(BgL_inputzd2portzd2_3612));} break;case ((long)0) : 

goto BgL_zc3anonymousza32352ze3z83_1398;break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string4373z00zz__datez00, BGl_string4374z00zz__datez00, 
BINT(BgL_matchz00_1399));} } } } } } } 
}



/* <anonymous:2058> */
obj_t BGl_zc3anonymousza32058ze3z83zz__datez00(obj_t BgL_envz00_5043, obj_t BgL_inputzd2portzd2_5044)
{ AN_OBJECT;
{ /* Llib/date.scm 495 */
{ 
obj_t BgL_inputzd2portzd2_889;
BgL_inputzd2portzd2_889 = BgL_inputzd2portzd2_5044; 
{ 
obj_t BgL_inputzd2portzd2_932;long BgL_lastzd2matchzd2_933;obj_t BgL_inputzd2portzd2_948;long BgL_lastzd2matchzd2_949;obj_t BgL_inputzd2portzd2_965;long BgL_lastzd2matchzd2_966;obj_t BgL_inputzd2portzd2_980;long BgL_lastzd2matchzd2_981;obj_t BgL_inputzd2portzd2_1002;long BgL_lastzd2matchzd2_1003;obj_t BgL_inputzd2portzd2_1012;long BgL_lastzd2matchzd2_1013;obj_t BgL_inputzd2portzd2_1021;long BgL_lastzd2matchzd2_1022;obj_t BgL_inputzd2portzd2_1030;long BgL_lastzd2matchzd2_1031;obj_t BgL_inputzd2portzd2_1037;long BgL_lastzd2matchzd2_1038;
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7726;
{ /* Llib/date.scm 495 */
obj_t BgL_arg2063z00_931;
{ /* Llib/date.scm 495 */
obj_t BgL_res3408z00_3275;
if(
INPUT_PORTP(BgL_inputzd2portzd2_889))
{ /* Llib/date.scm 495 */
BgL_res3408z00_3275 = BgL_inputzd2portzd2_889; }  else 
{ 
obj_t BgL_auxz00_7729;
BgL_auxz00_7729 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21526)), BGl_string4498z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_889); 
FAILURE(BgL_auxz00_7729,BFALSE,BFALSE);} 
BgL_arg2063z00_931 = BgL_res3408z00_3275; } 
BgL_testz00_7726 = 
INPUT_PORT_CLOSEP(BgL_arg2063z00_931); } 
if(BgL_testz00_7726)
{ /* Llib/date.scm 495 */
return 
BGl_errorz00zz__errorz00(BGl_string4373z00zz__datez00, BGl_string4390z00zz__datez00, BgL_inputzd2portzd2_889);}  else 
{ /* Llib/date.scm 495 */
BgL_zc3anonymousza32209ze3z83_1129:
{ /* Llib/date.scm 495 */
obj_t BgL_inputzd2portzd2_3469;
if(
INPUT_PORTP(BgL_inputzd2portzd2_889))
{ /* Llib/date.scm 495 */
BgL_inputzd2portzd2_3469 = BgL_inputzd2portzd2_889; }  else 
{ 
obj_t BgL_auxz00_7737;
BgL_auxz00_7737 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21526)), BGl_string4367z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_889); 
FAILURE(BgL_auxz00_7737,BFALSE,BFALSE);} 
RGC_START_MATCH(BgL_inputzd2portzd2_3469); } 
{ /* Llib/date.scm 495 */
long BgL_matchz00_1130;
BgL_inputzd2portzd2_980 = BgL_inputzd2portzd2_889; 
BgL_lastzd2matchzd2_981 = ((long)3); 
BgL_zc3anonymousza32096ze3z83_982:
{ /* Llib/date.scm 495 */
int BgL_currentzd2charzd2_983;
{ /* Llib/date.scm 495 */
obj_t BgL_inputzd2portzd2_3354;
if(
INPUT_PORTP(BgL_inputzd2portzd2_980))
{ /* Llib/date.scm 495 */
BgL_inputzd2portzd2_3354 = BgL_inputzd2portzd2_980; }  else 
{ 
obj_t BgL_auxz00_7744;
BgL_auxz00_7744 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21526)), BGl_string4494z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_980); 
FAILURE(BgL_auxz00_7744,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_983 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3354); } 
if(
(
(long)(BgL_currentzd2charzd2_983)==((long)0)))
{ /* Llib/date.scm 495 */
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_980))
{ /* Llib/date.scm 495 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_980))
{ 

goto BgL_zc3anonymousza32096ze3z83_982;}  else 
{ /* Llib/date.scm 495 */
BgL_matchz00_1130 = BgL_lastzd2matchzd2_981; } }  else 
{ /* Llib/date.scm 495 */
long BgL_newzd2matchzd2_3361;
RGC_STOP_MATCH(BgL_inputzd2portzd2_980); 
BgL_newzd2matchzd2_3361 = ((long)3); 
BgL_matchz00_1130 = BgL_newzd2matchzd2_3361; } }  else 
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7757;
if(
(
(long)(BgL_currentzd2charzd2_983)==((long)70)))
{ /* Llib/date.scm 495 */
BgL_testz00_7757 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
if(
(
(long)(BgL_currentzd2charzd2_983)==((long)77)))
{ /* Llib/date.scm 495 */
BgL_testz00_7757 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7764;
if(
(
(long)(BgL_currentzd2charzd2_983)==((long)84)))
{ /* Llib/date.scm 495 */
BgL_testz00_7764 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
BgL_testz00_7764 = 
(
(long)(BgL_currentzd2charzd2_983)==((long)83))
; } 
if(BgL_testz00_7764)
{ /* Llib/date.scm 495 */
BgL_testz00_7757 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
BgL_testz00_7757 = 
(
(long)(BgL_currentzd2charzd2_983)==((long)87))
; } } } 
if(BgL_testz00_7757)
{ /* Llib/date.scm 495 */
BgL_inputzd2portzd2_948 = BgL_inputzd2portzd2_980; 
BgL_lastzd2matchzd2_949 = BgL_lastzd2matchzd2_981; 
BgL_zc3anonymousza32076ze3z83_950:
{ /* Llib/date.scm 495 */
long BgL_newzd2matchzd2_951;
{ /* Llib/date.scm 495 */
obj_t BgL_inputzd2portzd2_3306;
if(
INPUT_PORTP(BgL_inputzd2portzd2_948))
{ /* Llib/date.scm 495 */
BgL_inputzd2portzd2_3306 = BgL_inputzd2portzd2_948; }  else 
{ 
obj_t BgL_auxz00_7774;
BgL_auxz00_7774 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21526)), BGl_string4496z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_948); 
FAILURE(BgL_auxz00_7774,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_3306); } 
BgL_newzd2matchzd2_951 = ((long)3); 
{ /* Llib/date.scm 495 */
int BgL_currentzd2charzd2_952;
BgL_currentzd2charzd2_952 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_948); 
if(
(
(long)(BgL_currentzd2charzd2_952)==((long)0)))
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7783;
{ /* Llib/date.scm 495 */
bool_t BgL_res3411z00_3314;
{ /* Llib/date.scm 495 */
obj_t BgL_inputzd2portzd2_3310;
BgL_inputzd2portzd2_3310 = BgL_inputzd2portzd2_948; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3310))
{ /* Llib/date.scm 495 */
BgL_res3411z00_3314 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3310); }  else 
{ /* Llib/date.scm 495 */
BgL_res3411z00_3314 = ((bool_t)0); } } 
BgL_testz00_7783 = BgL_res3411z00_3314; } 
if(BgL_testz00_7783)
{ 

goto BgL_zc3anonymousza32076ze3z83_950;}  else 
{ /* Llib/date.scm 495 */
BgL_matchz00_1130 = BgL_newzd2matchzd2_951; } }  else 
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7787;
if(
(
(long)(BgL_currentzd2charzd2_952)==((long)97)))
{ /* Llib/date.scm 495 */
BgL_testz00_7787 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7791;
if(
(
(long)(BgL_currentzd2charzd2_952)==((long)101)))
{ /* Llib/date.scm 495 */
BgL_testz00_7791 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
BgL_testz00_7791 = 
(
(long)(BgL_currentzd2charzd2_952)==((long)100))
; } 
if(BgL_testz00_7791)
{ /* Llib/date.scm 495 */
BgL_testz00_7787 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7797;
if(
(
(long)(BgL_currentzd2charzd2_952)==((long)105)))
{ /* Llib/date.scm 495 */
BgL_testz00_7797 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
BgL_testz00_7797 = 
(
(long)(BgL_currentzd2charzd2_952)==((long)104))
; } 
if(BgL_testz00_7797)
{ /* Llib/date.scm 495 */
BgL_testz00_7787 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7803;
if(
(
(long)(BgL_currentzd2charzd2_952)==((long)111)))
{ /* Llib/date.scm 495 */
BgL_testz00_7803 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
BgL_testz00_7803 = 
(
(long)(BgL_currentzd2charzd2_952)==((long)110))
; } 
if(BgL_testz00_7803)
{ /* Llib/date.scm 495 */
BgL_testz00_7787 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
if(
(
(long)(BgL_currentzd2charzd2_952)==((long)114)))
{ /* Llib/date.scm 495 */
BgL_testz00_7787 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
bool_t BgL__ortest_1851z00_961;
BgL__ortest_1851z00_961 = 
(
(long)(BgL_currentzd2charzd2_952)==((long)117)); 
if(BgL__ortest_1851z00_961)
{ /* Llib/date.scm 495 */
BgL_testz00_7787 = BgL__ortest_1851z00_961
; }  else 
{ /* Llib/date.scm 495 */
BgL_testz00_7787 = 
(
(long)(BgL_currentzd2charzd2_952)==((long)116))
; } } } } } } 
if(BgL_testz00_7787)
{ /* Llib/date.scm 495 */
BgL_inputzd2portzd2_932 = BgL_inputzd2portzd2_948; 
BgL_lastzd2matchzd2_933 = BgL_newzd2matchzd2_951; 
BgL_zc3anonymousza32064ze3z83_934:
{ /* Llib/date.scm 495 */
int BgL_currentzd2charzd2_935;
{ /* Llib/date.scm 495 */
obj_t BgL_inputzd2portzd2_3278;
if(
INPUT_PORTP(BgL_inputzd2portzd2_932))
{ /* Llib/date.scm 495 */
BgL_inputzd2portzd2_3278 = BgL_inputzd2portzd2_932; }  else 
{ 
obj_t BgL_auxz00_7819;
BgL_auxz00_7819 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21526)), BGl_string4497z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_932); 
FAILURE(BgL_auxz00_7819,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_935 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3278); } 
if(
(
(long)(BgL_currentzd2charzd2_935)==((long)0)))
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7827;
{ /* Llib/date.scm 495 */
bool_t BgL_res3410z00_3285;
{ /* Llib/date.scm 495 */
obj_t BgL_inputzd2portzd2_3281;
BgL_inputzd2portzd2_3281 = BgL_inputzd2portzd2_932; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3281))
{ /* Llib/date.scm 495 */
BgL_res3410z00_3285 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3281); }  else 
{ /* Llib/date.scm 495 */
BgL_res3410z00_3285 = ((bool_t)0); } } 
BgL_testz00_7827 = BgL_res3410z00_3285; } 
if(BgL_testz00_7827)
{ 

goto BgL_zc3anonymousza32064ze3z83_934;}  else 
{ /* Llib/date.scm 495 */
BgL_matchz00_1130 = BgL_lastzd2matchzd2_933; } }  else 
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7831;
if(
(
(long)(BgL_currentzd2charzd2_935)==((long)97)))
{ /* Llib/date.scm 495 */
BgL_testz00_7831 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7835;
if(
(
(long)(BgL_currentzd2charzd2_935)==((long)101)))
{ /* Llib/date.scm 495 */
BgL_testz00_7835 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
BgL_testz00_7835 = 
(
(long)(BgL_currentzd2charzd2_935)==((long)100))
; } 
if(BgL_testz00_7835)
{ /* Llib/date.scm 495 */
BgL_testz00_7831 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7841;
if(
(
(long)(BgL_currentzd2charzd2_935)==((long)105)))
{ /* Llib/date.scm 495 */
BgL_testz00_7841 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
BgL_testz00_7841 = 
(
(long)(BgL_currentzd2charzd2_935)==((long)104))
; } 
if(BgL_testz00_7841)
{ /* Llib/date.scm 495 */
BgL_testz00_7831 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7847;
if(
(
(long)(BgL_currentzd2charzd2_935)==((long)111)))
{ /* Llib/date.scm 495 */
BgL_testz00_7847 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
BgL_testz00_7847 = 
(
(long)(BgL_currentzd2charzd2_935)==((long)110))
; } 
if(BgL_testz00_7847)
{ /* Llib/date.scm 495 */
BgL_testz00_7831 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
if(
(
(long)(BgL_currentzd2charzd2_935)==((long)114)))
{ /* Llib/date.scm 495 */
BgL_testz00_7831 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
bool_t BgL__ortest_1850z00_944;
BgL__ortest_1850z00_944 = 
(
(long)(BgL_currentzd2charzd2_935)==((long)117)); 
if(BgL__ortest_1850z00_944)
{ /* Llib/date.scm 495 */
BgL_testz00_7831 = BgL__ortest_1850z00_944
; }  else 
{ /* Llib/date.scm 495 */
BgL_testz00_7831 = 
(
(long)(BgL_currentzd2charzd2_935)==((long)116))
; } } } } } } 
if(BgL_testz00_7831)
{ /* Llib/date.scm 495 */
BgL_inputzd2portzd2_1030 = BgL_inputzd2portzd2_932; 
BgL_lastzd2matchzd2_1031 = BgL_lastzd2matchzd2_933; 
BgL_zc3anonymousza32129ze3z83_1032:
{ /* Llib/date.scm 495 */
int BgL_currentzd2charzd2_1033;
{ /* Llib/date.scm 495 */
obj_t BgL_inputzd2portzd2_3437;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1030))
{ /* Llib/date.scm 495 */
BgL_inputzd2portzd2_3437 = BgL_inputzd2portzd2_1030; }  else 
{ 
obj_t BgL_auxz00_7863;
BgL_auxz00_7863 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21526)), BGl_string4490z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1030); 
FAILURE(BgL_auxz00_7863,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_1033 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3437); } 
if(
(
(long)(BgL_currentzd2charzd2_1033)==((long)0)))
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7871;
{ /* Llib/date.scm 495 */
bool_t BgL_res3416z00_3444;
{ /* Llib/date.scm 495 */
obj_t BgL_inputzd2portzd2_3440;
BgL_inputzd2portzd2_3440 = BgL_inputzd2portzd2_1030; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3440))
{ /* Llib/date.scm 495 */
BgL_res3416z00_3444 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3440); }  else 
{ /* Llib/date.scm 495 */
BgL_res3416z00_3444 = ((bool_t)0); } } 
BgL_testz00_7871 = BgL_res3416z00_3444; } 
if(BgL_testz00_7871)
{ 

goto BgL_zc3anonymousza32129ze3z83_1032;}  else 
{ /* Llib/date.scm 495 */
BgL_matchz00_1130 = BgL_lastzd2matchzd2_1031; } }  else 
{ /* Llib/date.scm 495 */
if(
(
(long)(BgL_currentzd2charzd2_1033)==((long)44)))
{ /* Llib/date.scm 495 */
BgL_inputzd2portzd2_1002 = BgL_inputzd2portzd2_1030; 
BgL_lastzd2matchzd2_1003 = BgL_lastzd2matchzd2_1031; 
BgL_zc3anonymousza32112ze3z83_1004:
{ /* Llib/date.scm 495 */
int BgL_currentzd2charzd2_1005;
{ /* Llib/date.scm 495 */
obj_t BgL_inputzd2portzd2_3391;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1002))
{ /* Llib/date.scm 495 */
BgL_inputzd2portzd2_3391 = BgL_inputzd2portzd2_1002; }  else 
{ 
obj_t BgL_auxz00_7880;
BgL_auxz00_7880 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21526)), BGl_string4493z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1002); 
FAILURE(BgL_auxz00_7880,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_1005 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3391); } 
if(
(
(long)(BgL_currentzd2charzd2_1005)==((long)0)))
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7888;
{ /* Llib/date.scm 495 */
bool_t BgL_res3413z00_3398;
{ /* Llib/date.scm 495 */
obj_t BgL_inputzd2portzd2_3394;
BgL_inputzd2portzd2_3394 = BgL_inputzd2portzd2_1002; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3394))
{ /* Llib/date.scm 495 */
BgL_res3413z00_3398 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3394); }  else 
{ /* Llib/date.scm 495 */
BgL_res3413z00_3398 = ((bool_t)0); } } 
BgL_testz00_7888 = BgL_res3413z00_3398; } 
if(BgL_testz00_7888)
{ 

goto BgL_zc3anonymousza32112ze3z83_1004;}  else 
{ /* Llib/date.scm 495 */
BgL_matchz00_1130 = BgL_lastzd2matchzd2_1003; } }  else 
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7892;
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7893;
if(
(
(long)(BgL_currentzd2charzd2_1005)==((long)10)))
{ /* Llib/date.scm 495 */
BgL_testz00_7893 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
BgL_testz00_7893 = 
(
(long)(BgL_currentzd2charzd2_1005)==((long)9))
; } 
if(BgL_testz00_7893)
{ /* Llib/date.scm 495 */
BgL_testz00_7892 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
if(
(
(long)(BgL_currentzd2charzd2_1005)==((long)13)))
{ /* Llib/date.scm 495 */
BgL_testz00_7892 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
BgL_testz00_7892 = 
(
(long)(BgL_currentzd2charzd2_1005)==((long)32))
; } } } 
if(BgL_testz00_7892)
{ /* Llib/date.scm 495 */
long BgL_newzd2matchzd2_3409;
RGC_STOP_MATCH(BgL_inputzd2portzd2_1002); 
BgL_newzd2matchzd2_3409 = ((long)1); 
BgL_matchz00_1130 = BgL_newzd2matchzd2_3409; }  else 
{ /* Llib/date.scm 495 */
BgL_matchz00_1130 = BgL_lastzd2matchzd2_1003; } } } }  else 
{ /* Llib/date.scm 495 */
BgL_matchz00_1130 = BgL_lastzd2matchzd2_1031; } } } }  else 
{ /* Llib/date.scm 495 */
BgL_matchz00_1130 = BgL_lastzd2matchzd2_933; } } } }  else 
{ /* Llib/date.scm 495 */
BgL_matchz00_1130 = BgL_newzd2matchzd2_951; } } } } }  else 
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7905;
if(
(
(long)(BgL_currentzd2charzd2_983)>=((long)48)))
{ /* Llib/date.scm 495 */
BgL_testz00_7905 = 
(
(long)(BgL_currentzd2charzd2_983)<((long)58))
; }  else 
{ /* Llib/date.scm 495 */
BgL_testz00_7905 = ((bool_t)0)
; } 
if(BgL_testz00_7905)
{ /* Llib/date.scm 495 */
BgL_inputzd2portzd2_1012 = BgL_inputzd2portzd2_980; 
BgL_lastzd2matchzd2_1013 = BgL_lastzd2matchzd2_981; 
BgL_zc3anonymousza32119ze3z83_1014:
{ /* Llib/date.scm 495 */
long BgL_newzd2matchzd2_1015;
{ /* Llib/date.scm 495 */
obj_t BgL_inputzd2portzd2_3411;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1012))
{ /* Llib/date.scm 495 */
BgL_inputzd2portzd2_3411 = BgL_inputzd2portzd2_1012; }  else 
{ 
obj_t BgL_auxz00_7913;
BgL_auxz00_7913 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21526)), BGl_string4492z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1012); 
FAILURE(BgL_auxz00_7913,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_3411); } 
BgL_newzd2matchzd2_1015 = ((long)2); 
{ /* Llib/date.scm 495 */
int BgL_currentzd2charzd2_1016;
BgL_currentzd2charzd2_1016 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1012); 
if(
(
(long)(BgL_currentzd2charzd2_1016)==((long)0)))
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7922;
{ /* Llib/date.scm 495 */
bool_t BgL_res3414z00_3419;
{ /* Llib/date.scm 495 */
obj_t BgL_inputzd2portzd2_3415;
BgL_inputzd2portzd2_3415 = BgL_inputzd2portzd2_1012; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3415))
{ /* Llib/date.scm 495 */
BgL_res3414z00_3419 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3415); }  else 
{ /* Llib/date.scm 495 */
BgL_res3414z00_3419 = ((bool_t)0); } } 
BgL_testz00_7922 = BgL_res3414z00_3419; } 
if(BgL_testz00_7922)
{ 

goto BgL_zc3anonymousza32119ze3z83_1014;}  else 
{ /* Llib/date.scm 495 */
BgL_matchz00_1130 = BgL_newzd2matchzd2_1015; } }  else 
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7926;
if(
(
(long)(BgL_currentzd2charzd2_1016)>=((long)48)))
{ /* Llib/date.scm 495 */
BgL_testz00_7926 = 
(
(long)(BgL_currentzd2charzd2_1016)<((long)58))
; }  else 
{ /* Llib/date.scm 495 */
BgL_testz00_7926 = ((bool_t)0)
; } 
if(BgL_testz00_7926)
{ /* Llib/date.scm 495 */
BgL_inputzd2portzd2_1021 = BgL_inputzd2portzd2_1012; 
BgL_lastzd2matchzd2_1022 = BgL_newzd2matchzd2_1015; 
BgL_zc3anonymousza32124ze3z83_1023:
{ /* Llib/date.scm 495 */
long BgL_newzd2matchzd2_1024;
{ /* Llib/date.scm 495 */
obj_t BgL_inputzd2portzd2_3424;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1021))
{ /* Llib/date.scm 495 */
BgL_inputzd2portzd2_3424 = BgL_inputzd2portzd2_1021; }  else 
{ 
obj_t BgL_auxz00_7934;
BgL_auxz00_7934 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21526)), BGl_string4491z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1021); 
FAILURE(BgL_auxz00_7934,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_3424); } 
BgL_newzd2matchzd2_1024 = ((long)2); 
{ /* Llib/date.scm 495 */
int BgL_currentzd2charzd2_1025;
BgL_currentzd2charzd2_1025 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1021); 
if(
(
(long)(BgL_currentzd2charzd2_1025)==((long)0)))
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7943;
{ /* Llib/date.scm 495 */
bool_t BgL_res3415z00_3432;
{ /* Llib/date.scm 495 */
obj_t BgL_inputzd2portzd2_3428;
BgL_inputzd2portzd2_3428 = BgL_inputzd2portzd2_1021; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3428))
{ /* Llib/date.scm 495 */
BgL_res3415z00_3432 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3428); }  else 
{ /* Llib/date.scm 495 */
BgL_res3415z00_3432 = ((bool_t)0); } } 
BgL_testz00_7943 = BgL_res3415z00_3432; } 
if(BgL_testz00_7943)
{ 

goto BgL_zc3anonymousza32124ze3z83_1023;}  else 
{ /* Llib/date.scm 495 */
BgL_matchz00_1130 = BgL_newzd2matchzd2_1024; } }  else 
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7947;
if(
(
(long)(BgL_currentzd2charzd2_1025)>=((long)48)))
{ /* Llib/date.scm 495 */
BgL_testz00_7947 = 
(
(long)(BgL_currentzd2charzd2_1025)<((long)58))
; }  else 
{ /* Llib/date.scm 495 */
BgL_testz00_7947 = ((bool_t)0)
; } 
if(BgL_testz00_7947)
{ 
long BgL_lastzd2matchzd2_7953;
BgL_lastzd2matchzd2_7953 = BgL_newzd2matchzd2_1024; 
BgL_lastzd2matchzd2_1022 = BgL_lastzd2matchzd2_7953; 
goto BgL_zc3anonymousza32124ze3z83_1023;}  else 
{ /* Llib/date.scm 495 */
BgL_matchz00_1130 = BgL_newzd2matchzd2_1024; } } } } }  else 
{ /* Llib/date.scm 495 */
BgL_matchz00_1130 = BgL_newzd2matchzd2_1015; } } } } }  else 
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7954;
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7955;
if(
(
(long)(BgL_currentzd2charzd2_983)==((long)10)))
{ /* Llib/date.scm 495 */
BgL_testz00_7955 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
BgL_testz00_7955 = 
(
(long)(BgL_currentzd2charzd2_983)==((long)9))
; } 
if(BgL_testz00_7955)
{ /* Llib/date.scm 495 */
BgL_testz00_7954 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
if(
(
(long)(BgL_currentzd2charzd2_983)==((long)13)))
{ /* Llib/date.scm 495 */
BgL_testz00_7954 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
BgL_testz00_7954 = 
(
(long)(BgL_currentzd2charzd2_983)==((long)32))
; } } } 
if(BgL_testz00_7954)
{ /* Llib/date.scm 495 */
BgL_inputzd2portzd2_965 = BgL_inputzd2portzd2_980; 
BgL_lastzd2matchzd2_966 = BgL_lastzd2matchzd2_981; 
BgL_zc3anonymousza32088ze3z83_967:
{ /* Llib/date.scm 495 */
long BgL_newzd2matchzd2_968;
{ /* Llib/date.scm 495 */
obj_t BgL_inputzd2portzd2_3335;
if(
INPUT_PORTP(BgL_inputzd2portzd2_965))
{ /* Llib/date.scm 495 */
BgL_inputzd2portzd2_3335 = BgL_inputzd2portzd2_965; }  else 
{ 
obj_t BgL_auxz00_7968;
BgL_auxz00_7968 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21526)), BGl_string4495z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_965); 
FAILURE(BgL_auxz00_7968,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_3335); } 
BgL_newzd2matchzd2_968 = ((long)0); 
{ /* Llib/date.scm 495 */
int BgL_currentzd2charzd2_969;
BgL_currentzd2charzd2_969 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_965); 
if(
(
(long)(BgL_currentzd2charzd2_969)==((long)0)))
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7977;
{ /* Llib/date.scm 495 */
bool_t BgL_res3412z00_3343;
{ /* Llib/date.scm 495 */
obj_t BgL_inputzd2portzd2_3339;
BgL_inputzd2portzd2_3339 = BgL_inputzd2portzd2_965; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3339))
{ /* Llib/date.scm 495 */
BgL_res3412z00_3343 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3339); }  else 
{ /* Llib/date.scm 495 */
BgL_res3412z00_3343 = ((bool_t)0); } } 
BgL_testz00_7977 = BgL_res3412z00_3343; } 
if(BgL_testz00_7977)
{ 

goto BgL_zc3anonymousza32088ze3z83_967;}  else 
{ /* Llib/date.scm 495 */
BgL_matchz00_1130 = BgL_newzd2matchzd2_968; } }  else 
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7981;
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_7982;
if(
(
(long)(BgL_currentzd2charzd2_969)==((long)10)))
{ /* Llib/date.scm 495 */
BgL_testz00_7982 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
BgL_testz00_7982 = 
(
(long)(BgL_currentzd2charzd2_969)==((long)9))
; } 
if(BgL_testz00_7982)
{ /* Llib/date.scm 495 */
BgL_testz00_7981 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
if(
(
(long)(BgL_currentzd2charzd2_969)==((long)13)))
{ /* Llib/date.scm 495 */
BgL_testz00_7981 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
BgL_testz00_7981 = 
(
(long)(BgL_currentzd2charzd2_969)==((long)32))
; } } } 
if(BgL_testz00_7981)
{ /* Llib/date.scm 495 */
BgL_inputzd2portzd2_1037 = BgL_inputzd2portzd2_965; 
BgL_lastzd2matchzd2_1038 = BgL_newzd2matchzd2_968; 
BgL_zc3anonymousza32133ze3z83_1039:
{ /* Llib/date.scm 495 */
long BgL_newzd2matchzd2_1040;
{ /* Llib/date.scm 495 */
obj_t BgL_inputzd2portzd2_3447;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1037))
{ /* Llib/date.scm 495 */
BgL_inputzd2portzd2_3447 = BgL_inputzd2portzd2_1037; }  else 
{ 
obj_t BgL_auxz00_7995;
BgL_auxz00_7995 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21526)), BGl_string4489z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_1037); 
FAILURE(BgL_auxz00_7995,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_3447); } 
BgL_newzd2matchzd2_1040 = ((long)0); 
{ /* Llib/date.scm 495 */
int BgL_currentzd2charzd2_1041;
BgL_currentzd2charzd2_1041 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1037); 
if(
(
(long)(BgL_currentzd2charzd2_1041)==((long)0)))
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_8004;
{ /* Llib/date.scm 495 */
bool_t BgL_res3417z00_3455;
{ /* Llib/date.scm 495 */
obj_t BgL_inputzd2portzd2_3451;
BgL_inputzd2portzd2_3451 = BgL_inputzd2portzd2_1037; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3451))
{ /* Llib/date.scm 495 */
BgL_res3417z00_3455 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3451); }  else 
{ /* Llib/date.scm 495 */
BgL_res3417z00_3455 = ((bool_t)0); } } 
BgL_testz00_8004 = BgL_res3417z00_3455; } 
if(BgL_testz00_8004)
{ 

goto BgL_zc3anonymousza32133ze3z83_1039;}  else 
{ /* Llib/date.scm 495 */
BgL_matchz00_1130 = BgL_newzd2matchzd2_1040; } }  else 
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_8008;
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_8009;
if(
(
(long)(BgL_currentzd2charzd2_1041)==((long)10)))
{ /* Llib/date.scm 495 */
BgL_testz00_8009 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
BgL_testz00_8009 = 
(
(long)(BgL_currentzd2charzd2_1041)==((long)9))
; } 
if(BgL_testz00_8009)
{ /* Llib/date.scm 495 */
BgL_testz00_8008 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
if(
(
(long)(BgL_currentzd2charzd2_1041)==((long)13)))
{ /* Llib/date.scm 495 */
BgL_testz00_8008 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 495 */
BgL_testz00_8008 = 
(
(long)(BgL_currentzd2charzd2_1041)==((long)32))
; } } } 
if(BgL_testz00_8008)
{ 
long BgL_lastzd2matchzd2_8020;
BgL_lastzd2matchzd2_8020 = BgL_newzd2matchzd2_1040; 
BgL_lastzd2matchzd2_1038 = BgL_lastzd2matchzd2_8020; 
goto BgL_zc3anonymousza32133ze3z83_1039;}  else 
{ /* Llib/date.scm 495 */
BgL_matchz00_1130 = BgL_newzd2matchzd2_1040; } } } } }  else 
{ /* Llib/date.scm 495 */
BgL_matchz00_1130 = BgL_newzd2matchzd2_968; } } } } }  else 
{ /* Llib/date.scm 495 */
long BgL_newzd2matchzd2_3387;
RGC_STOP_MATCH(BgL_inputzd2portzd2_980); 
BgL_newzd2matchzd2_3387 = ((long)3); 
BgL_matchz00_1130 = BgL_newzd2matchzd2_3387; } } } } } 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_889); 
switch( BgL_matchz00_1130) { case ((long)3) : 

{ /* Llib/date.scm 529 */
obj_t BgL_auxz00_8023;
{ /* Llib/date.scm 495 */
bool_t BgL_testz00_8024;
{ /* Llib/date.scm 495 */
long BgL_arg2200z00_1119;
{ /* Llib/date.scm 495 */
obj_t BgL_inputzd2portzd2_3465;
if(
INPUT_PORTP(BgL_inputzd2portzd2_889))
{ /* Llib/date.scm 495 */
BgL_inputzd2portzd2_3465 = BgL_inputzd2portzd2_889; }  else 
{ 
obj_t BgL_auxz00_8027;
BgL_auxz00_8027 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21526)), BGl_string4375z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_889); 
FAILURE(BgL_auxz00_8027,BFALSE,BFALSE);} 
BgL_arg2200z00_1119 = 
RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_3465); } 
BgL_testz00_8024 = 
(BgL_arg2200z00_1119==((long)0)); } 
if(BgL_testz00_8024)
{ /* Llib/date.scm 495 */
BgL_auxz00_8023 = BCNST(256)
; }  else 
{ /* Llib/date.scm 495 */
obj_t BgL_inputzd2portzd2_3468;
if(
INPUT_PORTP(BgL_inputzd2portzd2_889))
{ /* Llib/date.scm 495 */
BgL_inputzd2portzd2_3468 = BgL_inputzd2portzd2_889; }  else 
{ 
obj_t BgL_auxz00_8035;
BgL_auxz00_8035 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21526)), BGl_string4375z00zz__datez00, BGl_string4368z00zz__datez00, BgL_inputzd2portzd2_889); 
FAILURE(BgL_auxz00_8035,BFALSE,BFALSE);} 
BgL_auxz00_8023 = 
BCHAR(
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_3468)); } } 
return 
BGl_parsezd2errorzd2zz__datez00(BGl_symbol4369z00zz__datez00, BGl_string4449z00zz__datez00, BgL_auxz00_8023, BgL_inputzd2portzd2_889);} break;case ((long)2) : 

{ /* Llib/date.scm 514 */
long BgL_dayz00_1138;
BgL_dayz00_1138 = 
rgc_buffer_fixnum(BgL_inputzd2portzd2_889); 
{ /* Llib/date.scm 514 */
obj_t BgL_monthz00_1139;
{ /* Llib/date.scm 515 */
obj_t BgL_arg2226z00_1160;
BgL_arg2226z00_1160 = BgL_inputzd2portzd2_889; 
{ /* Llib/date.scm 515 */
obj_t BgL_funz00_5516;
BgL_funz00_5516 = BGl_monthzd2grammarzd2zz__datez00; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_5516, ((long)1)))
{ /* Llib/date.scm 515 */
BgL_monthz00_1139 = 
PROCEDURE_ENTRY(BgL_funz00_5516)(BGl_monthzd2grammarzd2zz__datez00, BgL_arg2226z00_1160, BEOA); }  else 
{ /* Llib/date.scm 515 */
FAILURE(BGl_string4450z00zz__datez00,BGl_list4451z00zz__datez00,BgL_funz00_5516);} } } 
{ /* Llib/date.scm 515 */
obj_t BgL_yearz00_1140;
{ /* Llib/date.scm 516 */
obj_t BgL_arg2224z00_1159;
BgL_arg2224z00_1159 = BgL_inputzd2portzd2_889; 
{ /* Llib/date.scm 516 */
obj_t BgL_funz00_5521;
BgL_funz00_5521 = BGl_fixnumzd2grammarzd2zz__datez00; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_5521, ((long)1)))
{ /* Llib/date.scm 516 */
BgL_yearz00_1140 = 
PROCEDURE_ENTRY(BgL_funz00_5521)(BGl_fixnumzd2grammarzd2zz__datez00, BgL_arg2224z00_1159, BEOA); }  else 
{ /* Llib/date.scm 516 */
FAILURE(BGl_string4450z00zz__datez00,BGl_list4458z00zz__datez00,BgL_funz00_5521);} } } 
{ /* Llib/date.scm 516 */

{ /* Llib/date.scm 517 */
obj_t BgL_hourz00_1141;
{ /* Llib/date.scm 518 */
obj_t BgL_arg2223z00_1158;
BgL_arg2223z00_1158 = BgL_inputzd2portzd2_889; 
{ /* Llib/date.scm 518 */
obj_t BgL_funz00_5526;
BgL_funz00_5526 = BGl_timezd2grammarzd2zz__datez00; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_5526, ((long)1)))
{ /* Llib/date.scm 518 */
BgL_hourz00_1141 = 
PROCEDURE_ENTRY(BgL_funz00_5526)(BGl_timezd2grammarzd2zz__datez00, BgL_arg2223z00_1158, BEOA); }  else 
{ /* Llib/date.scm 518 */
FAILURE(BGl_string4450z00zz__datez00,BGl_list4463z00zz__datez00,BgL_funz00_5526);} } } 
{ /* Llib/date.scm 519 */
obj_t BgL_minutez00_1142;obj_t BgL_secondz00_1143;
{ /* Llib/date.scm 519 */
int BgL_auxz00_8058;
BgL_auxz00_8058 = 
(int)(((long)1)); 
BgL_minutez00_1142 = 
BGL_MVALUES_VAL(BgL_auxz00_8058); } 
{ /* Llib/date.scm 519 */
int BgL_auxz00_8061;
BgL_auxz00_8061 = 
(int)(((long)2)); 
BgL_secondz00_1143 = 
BGL_MVALUES_VAL(BgL_auxz00_8061); } 
{ /* Llib/date.scm 519 */
obj_t BgL_za7oneza7_1144;
{ /* Llib/date.scm 519 */
obj_t BgL_arg2222z00_1157;
BgL_arg2222z00_1157 = BgL_inputzd2portzd2_889; 
{ /* Llib/date.scm 519 */
obj_t BgL_funz00_5531;
BgL_funz00_5531 = BGl_za7onezd2grammarz75zz__datez00; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_5531, ((long)1)))
{ /* Llib/date.scm 519 */
BgL_za7oneza7_1144 = 
PROCEDURE_ENTRY(BgL_funz00_5531)(BGl_za7onezd2grammarz75zz__datez00, BgL_arg2222z00_1157, BEOA); }  else 
{ /* Llib/date.scm 519 */
FAILURE(BGl_string4450z00zz__datez00,BGl_list4468z00zz__datez00,BgL_funz00_5531);} } } 
{ /* Llib/date.scm 524 */
obj_t BgL_arg2216z00_1145;
{ /* Llib/date.scm 524 */
bool_t BgL_testz00_8069;
{ /* Llib/date.scm 524 */
long BgL_n1z00_3479;
{ /* Llib/date.scm 524 */
obj_t BgL_auxz00_8070;
if(
INTEGERP(BgL_yearz00_1140))
{ /* Llib/date.scm 524 */
BgL_auxz00_8070 = BgL_yearz00_1140
; }  else 
{ 
obj_t BgL_auxz00_8073;
BgL_auxz00_8073 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22515)), BGl_string4367z00zz__datez00, BGl_string4372z00zz__datez00, BgL_yearz00_1140); 
FAILURE(BgL_auxz00_8073,BFALSE,BFALSE);} 
BgL_n1z00_3479 = 
(long)CINT(BgL_auxz00_8070); } 
BgL_testz00_8069 = 
(BgL_n1z00_3479<((long)100)); } 
if(BgL_testz00_8069)
{ /* Llib/date.scm 524 */
long BgL_za71za7_3481;
{ /* Llib/date.scm 524 */
obj_t BgL_auxz00_8079;
if(
INTEGERP(BgL_yearz00_1140))
{ /* Llib/date.scm 524 */
BgL_auxz00_8079 = BgL_yearz00_1140
; }  else 
{ 
obj_t BgL_auxz00_8082;
BgL_auxz00_8082 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22525)), BGl_string4367z00zz__datez00, BGl_string4372z00zz__datez00, BgL_yearz00_1140); 
FAILURE(BgL_auxz00_8082,BFALSE,BFALSE);} 
BgL_za71za7_3481 = 
(long)CINT(BgL_auxz00_8079); } 
BgL_arg2216z00_1145 = 
BINT(
(BgL_za71za7_3481+((long)2000))); }  else 
{ /* Llib/date.scm 524 */
BgL_arg2216z00_1145 = BgL_yearz00_1140; } } 
{ /* Llib/date.scm 520 */
obj_t BgL_dayz00_3483;obj_t BgL_dstz00_3484;
BgL_dayz00_3483 = 
BINT(BgL_dayz00_1138); 
BgL_dstz00_3484 = 
BINT(((long)0)); 
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_za7oneza7_1144))
{ /* Llib/date.scm 520 */
int BgL_auxz00_8156;long BgL_auxz00_8147;int BgL_auxz00_8138;int BgL_auxz00_8129;int BgL_auxz00_8120;int BgL_auxz00_8111;int BgL_auxz00_8102;int BgL_auxz00_8093;
{ /* Llib/date.scm 520 */
obj_t BgL_auxz00_8157;
if(
INTEGERP(BgL_dstz00_3484))
{ /* Llib/date.scm 520 */
BgL_auxz00_8157 = BgL_dstz00_3484
; }  else 
{ 
obj_t BgL_auxz00_8160;
BgL_auxz00_8160 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22421)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_dstz00_3484); 
FAILURE(BgL_auxz00_8160,BFALSE,BFALSE);} 
BgL_auxz00_8156 = 
CINT(BgL_auxz00_8157); } 
{ /* Llib/date.scm 520 */
obj_t BgL_auxz00_8148;
if(
INTEGERP(BgL_za7oneza7_1144))
{ /* Llib/date.scm 520 */
BgL_auxz00_8148 = BgL_za7oneza7_1144
; }  else 
{ 
obj_t BgL_auxz00_8151;
BgL_auxz00_8151 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22421)), BGl_string4367z00zz__datez00, BGl_string4372z00zz__datez00, BgL_za7oneza7_1144); 
FAILURE(BgL_auxz00_8151,BFALSE,BFALSE);} 
BgL_auxz00_8147 = 
(long)CINT(BgL_auxz00_8148); } 
{ /* Llib/date.scm 520 */
obj_t BgL_auxz00_8139;
if(
INTEGERP(BgL_arg2216z00_1145))
{ /* Llib/date.scm 520 */
BgL_auxz00_8139 = BgL_arg2216z00_1145
; }  else 
{ 
obj_t BgL_auxz00_8142;
BgL_auxz00_8142 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22421)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_arg2216z00_1145); 
FAILURE(BgL_auxz00_8142,BFALSE,BFALSE);} 
BgL_auxz00_8138 = 
CINT(BgL_auxz00_8139); } 
{ /* Llib/date.scm 520 */
obj_t BgL_auxz00_8130;
if(
INTEGERP(BgL_monthz00_1139))
{ /* Llib/date.scm 520 */
BgL_auxz00_8130 = BgL_monthz00_1139
; }  else 
{ 
obj_t BgL_auxz00_8133;
BgL_auxz00_8133 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22421)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_monthz00_1139); 
FAILURE(BgL_auxz00_8133,BFALSE,BFALSE);} 
BgL_auxz00_8129 = 
CINT(BgL_auxz00_8130); } 
{ /* Llib/date.scm 520 */
obj_t BgL_auxz00_8121;
if(
INTEGERP(BgL_dayz00_3483))
{ /* Llib/date.scm 520 */
BgL_auxz00_8121 = BgL_dayz00_3483
; }  else 
{ 
obj_t BgL_auxz00_8124;
BgL_auxz00_8124 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22421)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_dayz00_3483); 
FAILURE(BgL_auxz00_8124,BFALSE,BFALSE);} 
BgL_auxz00_8120 = 
CINT(BgL_auxz00_8121); } 
{ /* Llib/date.scm 520 */
obj_t BgL_auxz00_8112;
if(
INTEGERP(BgL_hourz00_1141))
{ /* Llib/date.scm 520 */
BgL_auxz00_8112 = BgL_hourz00_1141
; }  else 
{ 
obj_t BgL_auxz00_8115;
BgL_auxz00_8115 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22421)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_hourz00_1141); 
FAILURE(BgL_auxz00_8115,BFALSE,BFALSE);} 
BgL_auxz00_8111 = 
CINT(BgL_auxz00_8112); } 
{ /* Llib/date.scm 520 */
obj_t BgL_auxz00_8103;
if(
INTEGERP(BgL_minutez00_1142))
{ /* Llib/date.scm 520 */
BgL_auxz00_8103 = BgL_minutez00_1142
; }  else 
{ 
obj_t BgL_auxz00_8106;
BgL_auxz00_8106 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22421)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_minutez00_1142); 
FAILURE(BgL_auxz00_8106,BFALSE,BFALSE);} 
BgL_auxz00_8102 = 
CINT(BgL_auxz00_8103); } 
{ /* Llib/date.scm 520 */
obj_t BgL_auxz00_8094;
if(
INTEGERP(BgL_secondz00_1143))
{ /* Llib/date.scm 520 */
BgL_auxz00_8094 = BgL_secondz00_1143
; }  else 
{ 
obj_t BgL_auxz00_8097;
BgL_auxz00_8097 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22421)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_secondz00_1143); 
FAILURE(BgL_auxz00_8097,BFALSE,BFALSE);} 
BgL_auxz00_8093 = 
CINT(BgL_auxz00_8094); } 
return 
bgl_make_date(BgL_auxz00_8093, BgL_auxz00_8102, BgL_auxz00_8111, BgL_auxz00_8120, BgL_auxz00_8129, BgL_auxz00_8138, BgL_auxz00_8147, ((bool_t)1), BgL_auxz00_8156);}  else 
{ /* Llib/date.scm 520 */
int BgL_auxz00_8220;int BgL_auxz00_8211;int BgL_auxz00_8202;int BgL_auxz00_8193;int BgL_auxz00_8184;int BgL_auxz00_8175;int BgL_auxz00_8166;
{ /* Llib/date.scm 520 */
obj_t BgL_auxz00_8221;
if(
INTEGERP(BgL_dstz00_3484))
{ /* Llib/date.scm 520 */
BgL_auxz00_8221 = BgL_dstz00_3484
; }  else 
{ 
obj_t BgL_auxz00_8224;
BgL_auxz00_8224 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22421)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_dstz00_3484); 
FAILURE(BgL_auxz00_8224,BFALSE,BFALSE);} 
BgL_auxz00_8220 = 
CINT(BgL_auxz00_8221); } 
{ /* Llib/date.scm 520 */
obj_t BgL_auxz00_8212;
if(
INTEGERP(BgL_arg2216z00_1145))
{ /* Llib/date.scm 520 */
BgL_auxz00_8212 = BgL_arg2216z00_1145
; }  else 
{ 
obj_t BgL_auxz00_8215;
BgL_auxz00_8215 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22421)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_arg2216z00_1145); 
FAILURE(BgL_auxz00_8215,BFALSE,BFALSE);} 
BgL_auxz00_8211 = 
CINT(BgL_auxz00_8212); } 
{ /* Llib/date.scm 520 */
obj_t BgL_auxz00_8203;
if(
INTEGERP(BgL_monthz00_1139))
{ /* Llib/date.scm 520 */
BgL_auxz00_8203 = BgL_monthz00_1139
; }  else 
{ 
obj_t BgL_auxz00_8206;
BgL_auxz00_8206 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22421)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_monthz00_1139); 
FAILURE(BgL_auxz00_8206,BFALSE,BFALSE);} 
BgL_auxz00_8202 = 
CINT(BgL_auxz00_8203); } 
{ /* Llib/date.scm 520 */
obj_t BgL_auxz00_8194;
if(
INTEGERP(BgL_dayz00_3483))
{ /* Llib/date.scm 520 */
BgL_auxz00_8194 = BgL_dayz00_3483
; }  else 
{ 
obj_t BgL_auxz00_8197;
BgL_auxz00_8197 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22421)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_dayz00_3483); 
FAILURE(BgL_auxz00_8197,BFALSE,BFALSE);} 
BgL_auxz00_8193 = 
CINT(BgL_auxz00_8194); } 
{ /* Llib/date.scm 520 */
obj_t BgL_auxz00_8185;
if(
INTEGERP(BgL_hourz00_1141))
{ /* Llib/date.scm 520 */
BgL_auxz00_8185 = BgL_hourz00_1141
; }  else 
{ 
obj_t BgL_auxz00_8188;
BgL_auxz00_8188 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22421)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_hourz00_1141); 
FAILURE(BgL_auxz00_8188,BFALSE,BFALSE);} 
BgL_auxz00_8184 = 
CINT(BgL_auxz00_8185); } 
{ /* Llib/date.scm 520 */
obj_t BgL_auxz00_8176;
if(
INTEGERP(BgL_minutez00_1142))
{ /* Llib/date.scm 520 */
BgL_auxz00_8176 = BgL_minutez00_1142
; }  else 
{ 
obj_t BgL_auxz00_8179;
BgL_auxz00_8179 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22421)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_minutez00_1142); 
FAILURE(BgL_auxz00_8179,BFALSE,BFALSE);} 
BgL_auxz00_8175 = 
CINT(BgL_auxz00_8176); } 
{ /* Llib/date.scm 520 */
obj_t BgL_auxz00_8167;
if(
INTEGERP(BgL_secondz00_1143))
{ /* Llib/date.scm 520 */
BgL_auxz00_8167 = BgL_secondz00_1143
; }  else 
{ 
obj_t BgL_auxz00_8170;
BgL_auxz00_8170 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22421)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_secondz00_1143); 
FAILURE(BgL_auxz00_8170,BFALSE,BFALSE);} 
BgL_auxz00_8166 = 
CINT(BgL_auxz00_8167); } 
return 
bgl_make_date(BgL_auxz00_8166, BgL_auxz00_8175, BgL_auxz00_8184, BgL_auxz00_8193, BgL_auxz00_8202, BgL_auxz00_8211, ((long)0), ((bool_t)0), BgL_auxz00_8220);} } } } } } } } } } break;case ((long)1) : 

{ /* Llib/date.scm 499 */
obj_t BgL_dayz00_1161;
{ /* Llib/date.scm 499 */
obj_t BgL_arg2239z00_1184;
BgL_arg2239z00_1184 = BgL_inputzd2portzd2_889; 
{ /* Llib/date.scm 499 */
obj_t BgL_funz00_5570;
BgL_funz00_5570 = BGl_fixnumzd2grammarzd2zz__datez00; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_5570, ((long)1)))
{ /* Llib/date.scm 499 */
BgL_dayz00_1161 = 
PROCEDURE_ENTRY(BgL_funz00_5570)(BGl_fixnumzd2grammarzd2zz__datez00, BgL_arg2239z00_1184, BEOA); }  else 
{ /* Llib/date.scm 499 */
FAILURE(BGl_string4450z00zz__datez00,BGl_list4474z00zz__datez00,BgL_funz00_5570);} } } 
{ /* Llib/date.scm 499 */
obj_t BgL_monthz00_1162;
{ /* Llib/date.scm 500 */
obj_t BgL_arg2238z00_1183;
BgL_arg2238z00_1183 = BgL_inputzd2portzd2_889; 
{ /* Llib/date.scm 500 */
obj_t BgL_funz00_5575;
BgL_funz00_5575 = BGl_monthzd2grammarzd2zz__datez00; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_5575, ((long)1)))
{ /* Llib/date.scm 500 */
BgL_monthz00_1162 = 
PROCEDURE_ENTRY(BgL_funz00_5575)(BGl_monthzd2grammarzd2zz__datez00, BgL_arg2238z00_1183, BEOA); }  else 
{ /* Llib/date.scm 500 */
FAILURE(BGl_string4450z00zz__datez00,BGl_list4477z00zz__datez00,BgL_funz00_5575);} } } 
{ /* Llib/date.scm 500 */
obj_t BgL_yearz00_1163;
{ /* Llib/date.scm 501 */
obj_t BgL_arg2237z00_1182;
BgL_arg2237z00_1182 = BgL_inputzd2portzd2_889; 
{ /* Llib/date.scm 501 */
obj_t BgL_funz00_5580;
BgL_funz00_5580 = BGl_fixnumzd2grammarzd2zz__datez00; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_5580, ((long)1)))
{ /* Llib/date.scm 501 */
BgL_yearz00_1163 = 
PROCEDURE_ENTRY(BgL_funz00_5580)(BGl_fixnumzd2grammarzd2zz__datez00, BgL_arg2237z00_1182, BEOA); }  else 
{ /* Llib/date.scm 501 */
FAILURE(BGl_string4450z00zz__datez00,BGl_list4480z00zz__datez00,BgL_funz00_5580);} } } 
{ /* Llib/date.scm 501 */

{ /* Llib/date.scm 502 */
obj_t BgL_hourz00_1164;
{ /* Llib/date.scm 503 */
obj_t BgL_arg2236z00_1181;
BgL_arg2236z00_1181 = BgL_inputzd2portzd2_889; 
{ /* Llib/date.scm 503 */
obj_t BgL_funz00_5585;
BgL_funz00_5585 = BGl_timezd2grammarzd2zz__datez00; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_5585, ((long)1)))
{ /* Llib/date.scm 503 */
BgL_hourz00_1164 = 
PROCEDURE_ENTRY(BgL_funz00_5585)(BGl_timezd2grammarzd2zz__datez00, BgL_arg2236z00_1181, BEOA); }  else 
{ /* Llib/date.scm 503 */
FAILURE(BGl_string4450z00zz__datez00,BGl_list4483z00zz__datez00,BgL_funz00_5585);} } } 
{ /* Llib/date.scm 504 */
obj_t BgL_minutez00_1165;obj_t BgL_secondz00_1166;
{ /* Llib/date.scm 504 */
int BgL_auxz00_8250;
BgL_auxz00_8250 = 
(int)(((long)1)); 
BgL_minutez00_1165 = 
BGL_MVALUES_VAL(BgL_auxz00_8250); } 
{ /* Llib/date.scm 504 */
int BgL_auxz00_8253;
BgL_auxz00_8253 = 
(int)(((long)2)); 
BgL_secondz00_1166 = 
BGL_MVALUES_VAL(BgL_auxz00_8253); } 
{ /* Llib/date.scm 504 */
obj_t BgL_za7oneza7_1167;
{ /* Llib/date.scm 504 */
obj_t BgL_arg2235z00_1180;
BgL_arg2235z00_1180 = BgL_inputzd2portzd2_889; 
{ /* Llib/date.scm 504 */
obj_t BgL_funz00_5590;
BgL_funz00_5590 = BGl_za7onezd2grammarz75zz__datez00; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_5590, ((long)1)))
{ /* Llib/date.scm 504 */
BgL_za7oneza7_1167 = 
PROCEDURE_ENTRY(BgL_funz00_5590)(BGl_za7onezd2grammarz75zz__datez00, BgL_arg2235z00_1180, BEOA); }  else 
{ /* Llib/date.scm 504 */
FAILURE(BGl_string4450z00zz__datez00,BGl_list4486z00zz__datez00,BgL_funz00_5590);} } } 
{ /* Llib/date.scm 509 */
obj_t BgL_arg2227z00_1168;
{ /* Llib/date.scm 509 */
bool_t BgL_testz00_8261;
{ /* Llib/date.scm 509 */
long BgL_n1z00_3500;
{ /* Llib/date.scm 509 */
obj_t BgL_auxz00_8262;
if(
INTEGERP(BgL_yearz00_1163))
{ /* Llib/date.scm 509 */
BgL_auxz00_8262 = BgL_yearz00_1163
; }  else 
{ 
obj_t BgL_auxz00_8265;
BgL_auxz00_8265 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22046)), BGl_string4367z00zz__datez00, BGl_string4372z00zz__datez00, BgL_yearz00_1163); 
FAILURE(BgL_auxz00_8265,BFALSE,BFALSE);} 
BgL_n1z00_3500 = 
(long)CINT(BgL_auxz00_8262); } 
BgL_testz00_8261 = 
(BgL_n1z00_3500<((long)100)); } 
if(BgL_testz00_8261)
{ /* Llib/date.scm 509 */
long BgL_za71za7_3502;
{ /* Llib/date.scm 509 */
obj_t BgL_auxz00_8271;
if(
INTEGERP(BgL_yearz00_1163))
{ /* Llib/date.scm 509 */
BgL_auxz00_8271 = BgL_yearz00_1163
; }  else 
{ 
obj_t BgL_auxz00_8274;
BgL_auxz00_8274 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)22056)), BGl_string4367z00zz__datez00, BGl_string4372z00zz__datez00, BgL_yearz00_1163); 
FAILURE(BgL_auxz00_8274,BFALSE,BFALSE);} 
BgL_za71za7_3502 = 
(long)CINT(BgL_auxz00_8271); } 
BgL_arg2227z00_1168 = 
BINT(
(BgL_za71za7_3502+((long)2000))); }  else 
{ /* Llib/date.scm 509 */
BgL_arg2227z00_1168 = BgL_yearz00_1163; } } 
{ /* Llib/date.scm 505 */
obj_t BgL_dstz00_3505;
BgL_dstz00_3505 = 
BINT(((long)0)); 
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_za7oneza7_1167))
{ /* Llib/date.scm 505 */
int BgL_auxz00_8347;long BgL_auxz00_8338;int BgL_auxz00_8329;int BgL_auxz00_8320;int BgL_auxz00_8311;int BgL_auxz00_8302;int BgL_auxz00_8293;int BgL_auxz00_8284;
{ /* Llib/date.scm 505 */
obj_t BgL_auxz00_8348;
if(
INTEGERP(BgL_dstz00_3505))
{ /* Llib/date.scm 505 */
BgL_auxz00_8348 = BgL_dstz00_3505
; }  else 
{ 
obj_t BgL_auxz00_8351;
BgL_auxz00_8351 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21952)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_dstz00_3505); 
FAILURE(BgL_auxz00_8351,BFALSE,BFALSE);} 
BgL_auxz00_8347 = 
CINT(BgL_auxz00_8348); } 
{ /* Llib/date.scm 505 */
obj_t BgL_auxz00_8339;
if(
INTEGERP(BgL_za7oneza7_1167))
{ /* Llib/date.scm 505 */
BgL_auxz00_8339 = BgL_za7oneza7_1167
; }  else 
{ 
obj_t BgL_auxz00_8342;
BgL_auxz00_8342 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21952)), BGl_string4367z00zz__datez00, BGl_string4372z00zz__datez00, BgL_za7oneza7_1167); 
FAILURE(BgL_auxz00_8342,BFALSE,BFALSE);} 
BgL_auxz00_8338 = 
(long)CINT(BgL_auxz00_8339); } 
{ /* Llib/date.scm 505 */
obj_t BgL_auxz00_8330;
if(
INTEGERP(BgL_arg2227z00_1168))
{ /* Llib/date.scm 505 */
BgL_auxz00_8330 = BgL_arg2227z00_1168
; }  else 
{ 
obj_t BgL_auxz00_8333;
BgL_auxz00_8333 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21952)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_arg2227z00_1168); 
FAILURE(BgL_auxz00_8333,BFALSE,BFALSE);} 
BgL_auxz00_8329 = 
CINT(BgL_auxz00_8330); } 
{ /* Llib/date.scm 505 */
obj_t BgL_auxz00_8321;
if(
INTEGERP(BgL_monthz00_1162))
{ /* Llib/date.scm 505 */
BgL_auxz00_8321 = BgL_monthz00_1162
; }  else 
{ 
obj_t BgL_auxz00_8324;
BgL_auxz00_8324 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21952)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_monthz00_1162); 
FAILURE(BgL_auxz00_8324,BFALSE,BFALSE);} 
BgL_auxz00_8320 = 
CINT(BgL_auxz00_8321); } 
{ /* Llib/date.scm 505 */
obj_t BgL_auxz00_8312;
if(
INTEGERP(BgL_dayz00_1161))
{ /* Llib/date.scm 505 */
BgL_auxz00_8312 = BgL_dayz00_1161
; }  else 
{ 
obj_t BgL_auxz00_8315;
BgL_auxz00_8315 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21952)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_dayz00_1161); 
FAILURE(BgL_auxz00_8315,BFALSE,BFALSE);} 
BgL_auxz00_8311 = 
CINT(BgL_auxz00_8312); } 
{ /* Llib/date.scm 505 */
obj_t BgL_auxz00_8303;
if(
INTEGERP(BgL_hourz00_1164))
{ /* Llib/date.scm 505 */
BgL_auxz00_8303 = BgL_hourz00_1164
; }  else 
{ 
obj_t BgL_auxz00_8306;
BgL_auxz00_8306 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21952)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_hourz00_1164); 
FAILURE(BgL_auxz00_8306,BFALSE,BFALSE);} 
BgL_auxz00_8302 = 
CINT(BgL_auxz00_8303); } 
{ /* Llib/date.scm 505 */
obj_t BgL_auxz00_8294;
if(
INTEGERP(BgL_minutez00_1165))
{ /* Llib/date.scm 505 */
BgL_auxz00_8294 = BgL_minutez00_1165
; }  else 
{ 
obj_t BgL_auxz00_8297;
BgL_auxz00_8297 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21952)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_minutez00_1165); 
FAILURE(BgL_auxz00_8297,BFALSE,BFALSE);} 
BgL_auxz00_8293 = 
CINT(BgL_auxz00_8294); } 
{ /* Llib/date.scm 505 */
obj_t BgL_auxz00_8285;
if(
INTEGERP(BgL_secondz00_1166))
{ /* Llib/date.scm 505 */
BgL_auxz00_8285 = BgL_secondz00_1166
; }  else 
{ 
obj_t BgL_auxz00_8288;
BgL_auxz00_8288 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21952)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_secondz00_1166); 
FAILURE(BgL_auxz00_8288,BFALSE,BFALSE);} 
BgL_auxz00_8284 = 
CINT(BgL_auxz00_8285); } 
return 
bgl_make_date(BgL_auxz00_8284, BgL_auxz00_8293, BgL_auxz00_8302, BgL_auxz00_8311, BgL_auxz00_8320, BgL_auxz00_8329, BgL_auxz00_8338, ((bool_t)1), BgL_auxz00_8347);}  else 
{ /* Llib/date.scm 505 */
int BgL_auxz00_8411;int BgL_auxz00_8402;int BgL_auxz00_8393;int BgL_auxz00_8384;int BgL_auxz00_8375;int BgL_auxz00_8366;int BgL_auxz00_8357;
{ /* Llib/date.scm 505 */
obj_t BgL_auxz00_8412;
if(
INTEGERP(BgL_dstz00_3505))
{ /* Llib/date.scm 505 */
BgL_auxz00_8412 = BgL_dstz00_3505
; }  else 
{ 
obj_t BgL_auxz00_8415;
BgL_auxz00_8415 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21952)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_dstz00_3505); 
FAILURE(BgL_auxz00_8415,BFALSE,BFALSE);} 
BgL_auxz00_8411 = 
CINT(BgL_auxz00_8412); } 
{ /* Llib/date.scm 505 */
obj_t BgL_auxz00_8403;
if(
INTEGERP(BgL_arg2227z00_1168))
{ /* Llib/date.scm 505 */
BgL_auxz00_8403 = BgL_arg2227z00_1168
; }  else 
{ 
obj_t BgL_auxz00_8406;
BgL_auxz00_8406 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21952)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_arg2227z00_1168); 
FAILURE(BgL_auxz00_8406,BFALSE,BFALSE);} 
BgL_auxz00_8402 = 
CINT(BgL_auxz00_8403); } 
{ /* Llib/date.scm 505 */
obj_t BgL_auxz00_8394;
if(
INTEGERP(BgL_monthz00_1162))
{ /* Llib/date.scm 505 */
BgL_auxz00_8394 = BgL_monthz00_1162
; }  else 
{ 
obj_t BgL_auxz00_8397;
BgL_auxz00_8397 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21952)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_monthz00_1162); 
FAILURE(BgL_auxz00_8397,BFALSE,BFALSE);} 
BgL_auxz00_8393 = 
CINT(BgL_auxz00_8394); } 
{ /* Llib/date.scm 505 */
obj_t BgL_auxz00_8385;
if(
INTEGERP(BgL_dayz00_1161))
{ /* Llib/date.scm 505 */
BgL_auxz00_8385 = BgL_dayz00_1161
; }  else 
{ 
obj_t BgL_auxz00_8388;
BgL_auxz00_8388 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21952)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_dayz00_1161); 
FAILURE(BgL_auxz00_8388,BFALSE,BFALSE);} 
BgL_auxz00_8384 = 
CINT(BgL_auxz00_8385); } 
{ /* Llib/date.scm 505 */
obj_t BgL_auxz00_8376;
if(
INTEGERP(BgL_hourz00_1164))
{ /* Llib/date.scm 505 */
BgL_auxz00_8376 = BgL_hourz00_1164
; }  else 
{ 
obj_t BgL_auxz00_8379;
BgL_auxz00_8379 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21952)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_hourz00_1164); 
FAILURE(BgL_auxz00_8379,BFALSE,BFALSE);} 
BgL_auxz00_8375 = 
CINT(BgL_auxz00_8376); } 
{ /* Llib/date.scm 505 */
obj_t BgL_auxz00_8367;
if(
INTEGERP(BgL_minutez00_1165))
{ /* Llib/date.scm 505 */
BgL_auxz00_8367 = BgL_minutez00_1165
; }  else 
{ 
obj_t BgL_auxz00_8370;
BgL_auxz00_8370 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21952)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_minutez00_1165); 
FAILURE(BgL_auxz00_8370,BFALSE,BFALSE);} 
BgL_auxz00_8366 = 
CINT(BgL_auxz00_8367); } 
{ /* Llib/date.scm 505 */
obj_t BgL_auxz00_8358;
if(
INTEGERP(BgL_secondz00_1166))
{ /* Llib/date.scm 505 */
BgL_auxz00_8358 = BgL_secondz00_1166
; }  else 
{ 
obj_t BgL_auxz00_8361;
BgL_auxz00_8361 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)21952)), BGl_string4367z00zz__datez00, BGl_string4473z00zz__datez00, BgL_secondz00_1166); 
FAILURE(BgL_auxz00_8361,BFALSE,BFALSE);} 
BgL_auxz00_8357 = 
CINT(BgL_auxz00_8358); } 
return 
bgl_make_date(BgL_auxz00_8357, BgL_auxz00_8366, BgL_auxz00_8375, BgL_auxz00_8384, BgL_auxz00_8393, BgL_auxz00_8402, ((long)0), ((bool_t)0), BgL_auxz00_8411);} } } } } } } } } } break;case ((long)0) : 

goto BgL_zc3anonymousza32209ze3z83_1129;break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string4373z00zz__datez00, BGl_string4374z00zz__datez00, 
BINT(BgL_matchz00_1130));} } } } } } } 
}



/* date? */
BGL_EXPORTED_DEF bool_t BGl_datezf3zf3zz__datez00(obj_t BgL_objz00_1)
{ AN_OBJECT;
{ /* Llib/date.scm 170 */
return 
BGL_DATEP(BgL_objz00_1);} 
}



/* _date? */
obj_t BGl__datezf3zf3zz__datez00(obj_t BgL_envz00_5045, obj_t BgL_objz00_5046)
{ AN_OBJECT;
{ /* Llib/date.scm 170 */
return 
BBOOL(
BGL_DATEP(BgL_objz00_5046));} 
}



/* _make-date */
obj_t BGl__makezd2datezd2zz__datez00(obj_t BgL_envz00_12, obj_t BgL_opt1974z00_11)
{ AN_OBJECT;
{ /* Llib/date.scm 179 */
{ /* Llib/date.scm 179 */
int BgL_l1975z00_2538;
BgL_l1975z00_2538 = 
VECTOR_LENGTH(BgL_opt1974z00_11); 
{ /* Llib/date.scm 179 */

{ /* Llib/date.scm 179 */
obj_t BgL_dayz00_2542;
BgL_dayz00_2542 = 
BINT(((long)1)); 
{ /* Llib/date.scm 179 */
obj_t BgL_dstz00_2543;
BgL_dstz00_2543 = 
BINT(((long)-1)); 
{ /* Llib/date.scm 179 */
obj_t BgL_hourz00_2544;
BgL_hourz00_2544 = 
BINT(((long)1)); 
{ /* Llib/date.scm 179 */
obj_t BgL_minz00_2545;
BgL_minz00_2545 = 
BINT(((long)1)); 
{ /* Llib/date.scm 179 */
obj_t BgL_monthz00_2546;
BgL_monthz00_2546 = 
BINT(((long)1)); 
{ /* Llib/date.scm 179 */
obj_t BgL_nsecz00_2547;
BgL_nsecz00_2547 = 
BINT(((long)0)); 
{ /* Llib/date.scm 179 */
obj_t BgL_secz00_2548;
BgL_secz00_2548 = 
BINT(((long)1)); 
{ /* Llib/date.scm 179 */
obj_t BgL_timeza7oneza7_2549;
BgL_timeza7oneza7_2549 = BFALSE; 
{ /* Llib/date.scm 179 */
obj_t BgL_yearz00_2550;
BgL_yearz00_2550 = 
BINT(((long)1970)); 
{ /* Llib/date.scm 179 */

{ 
long BgL_iz00_2551;
BgL_iz00_2551 = ((long)0); 
BgL_check1977z00_2552:
if(
(BgL_iz00_2551==
(long)(BgL_l1975z00_2538)))
{ /* Llib/date.scm 179 */BNIL; }  else 
{ /* Llib/date.scm 179 */
bool_t BgL_testz00_8439;
{ /* Llib/date.scm 179 */
obj_t BgL_arg2982z00_2559;obj_t BgL_arg2983z00_2560;
{ /* Llib/date.scm 179 */
int BgL_kz00_4576;
BgL_kz00_4576 = 
(int)(BgL_iz00_2551); 
{ /* Llib/date.scm 179 */
int BgL_l3494z00_5118;
BgL_l3494z00_5118 = 
VECTOR_LENGTH(BgL_opt1974z00_11); 
if(
BOUND_CHECK(BgL_kz00_4576, BgL_l3494z00_5118))
{ /* Llib/date.scm 179 */
BgL_arg2982z00_2559 = 
VECTOR_REF(BgL_opt1974z00_11,BgL_kz00_4576); }  else 
{ 
obj_t BgL_auxz00_8445;
BgL_auxz00_8445 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4499z00zz__datez00, 
BINT(BgL_kz00_4576), BgL_opt1974z00_11); 
FAILURE(BgL_auxz00_8445,BFALSE,BFALSE);} } } 
BgL_arg2983z00_2560 = BGl_list4500z00zz__datez00; 
BgL_testz00_8439 = 
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg2982z00_2559, BgL_arg2983z00_2560)); } 
if(BgL_testz00_8439)
{ 
long BgL_iz00_8452;
BgL_iz00_8452 = 
(BgL_iz00_2551+((long)2)); 
BgL_iz00_2551 = BgL_iz00_8452; 
goto BgL_check1977z00_2552;}  else 
{ /* Llib/date.scm 179 */
obj_t BgL_arg2979z00_2556;obj_t BgL_arg2981z00_2558;
BgL_arg2979z00_2556 = BGl_symbol4519z00zz__datez00; 
{ /* Llib/date.scm 179 */
int BgL_kz00_4580;
BgL_kz00_4580 = 
(int)(BgL_iz00_2551); 
{ /* Llib/date.scm 179 */
int BgL_l3498z00_5122;
BgL_l3498z00_5122 = 
VECTOR_LENGTH(BgL_opt1974z00_11); 
if(
BOUND_CHECK(BgL_kz00_4580, BgL_l3498z00_5122))
{ /* Llib/date.scm 179 */
BgL_arg2981z00_2558 = 
VECTOR_REF(BgL_opt1974z00_11,BgL_kz00_4580); }  else 
{ 
obj_t BgL_auxz00_8459;
BgL_auxz00_8459 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4499z00zz__datez00, 
BINT(BgL_kz00_4580), BgL_opt1974z00_11); 
FAILURE(BgL_auxz00_8459,BFALSE,BFALSE);} } } 
BGl_errorz00zz__errorz00(BgL_arg2979z00_2556, BGl_string4521z00zz__datez00, BgL_arg2981z00_2558); } } } 
{ /* Llib/date.scm 179 */
obj_t BgL_index1979z00_2561;
BgL_index1979z00_2561 = 
BGl_search1976z00zz__datez00(BgL_l1975z00_2538, BgL_opt1974z00_11, BGl_keyword4501z00zz__datez00, ((long)0)); 
{ /* Llib/date.scm 179 */
bool_t BgL_testz00_8466;
{ /* Llib/date.scm 179 */
long BgL_n1z00_4581;
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8467;
if(
INTEGERP(BgL_index1979z00_2561))
{ /* Llib/date.scm 179 */
BgL_auxz00_8467 = BgL_index1979z00_2561
; }  else 
{ 
obj_t BgL_auxz00_8470;
BgL_auxz00_8470 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4372z00zz__datez00, BgL_index1979z00_2561); 
FAILURE(BgL_auxz00_8470,BFALSE,BFALSE);} 
BgL_n1z00_4581 = 
(long)CINT(BgL_auxz00_8467); } 
BgL_testz00_8466 = 
(BgL_n1z00_4581>=((long)0)); } 
if(BgL_testz00_8466)
{ 
int BgL_auxz00_8476;
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8477;
{ /* Llib/date.scm 179 */
bool_t BgL_test4059z00_5692;
BgL_test4059z00_5692 = 
INTEGERP(BgL_index1979z00_2561); 
if(BgL_test4059z00_5692)
{ /* Llib/date.scm 179 */
BgL_auxz00_8477 = BgL_index1979z00_2561
; }  else 
{ 
obj_t BgL_auxz00_8480;
BgL_auxz00_8480 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4473z00zz__datez00, BgL_index1979z00_2561); 
FAILURE(BgL_auxz00_8480,BFALSE,BFALSE);} } 
BgL_auxz00_8476 = 
CINT(BgL_auxz00_8477); } 
BgL_dayz00_2542 = 
VECTOR_REF(BgL_opt1974z00_11,BgL_auxz00_8476); }  else 
{ /* Llib/date.scm 179 */BFALSE; } } } 
{ /* Llib/date.scm 179 */
obj_t BgL_index1980z00_2563;
BgL_index1980z00_2563 = 
BGl_search1976z00zz__datez00(BgL_l1975z00_2538, BgL_opt1974z00_11, BGl_keyword4503z00zz__datez00, ((long)0)); 
{ /* Llib/date.scm 179 */
bool_t BgL_testz00_8487;
{ /* Llib/date.scm 179 */
long BgL_n1z00_4583;
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8488;
if(
INTEGERP(BgL_index1980z00_2563))
{ /* Llib/date.scm 179 */
BgL_auxz00_8488 = BgL_index1980z00_2563
; }  else 
{ 
obj_t BgL_auxz00_8491;
BgL_auxz00_8491 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4372z00zz__datez00, BgL_index1980z00_2563); 
FAILURE(BgL_auxz00_8491,BFALSE,BFALSE);} 
BgL_n1z00_4583 = 
(long)CINT(BgL_auxz00_8488); } 
BgL_testz00_8487 = 
(BgL_n1z00_4583>=((long)0)); } 
if(BgL_testz00_8487)
{ 
int BgL_auxz00_8497;
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8498;
{ /* Llib/date.scm 179 */
bool_t BgL_test4063z00_5696;
BgL_test4063z00_5696 = 
INTEGERP(BgL_index1980z00_2563); 
if(BgL_test4063z00_5696)
{ /* Llib/date.scm 179 */
BgL_auxz00_8498 = BgL_index1980z00_2563
; }  else 
{ 
obj_t BgL_auxz00_8501;
BgL_auxz00_8501 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4473z00zz__datez00, BgL_index1980z00_2563); 
FAILURE(BgL_auxz00_8501,BFALSE,BFALSE);} } 
BgL_auxz00_8497 = 
CINT(BgL_auxz00_8498); } 
BgL_dstz00_2543 = 
VECTOR_REF(BgL_opt1974z00_11,BgL_auxz00_8497); }  else 
{ /* Llib/date.scm 179 */BFALSE; } } } 
{ /* Llib/date.scm 179 */
obj_t BgL_index1981z00_2565;
BgL_index1981z00_2565 = 
BGl_search1976z00zz__datez00(BgL_l1975z00_2538, BgL_opt1974z00_11, BGl_keyword4505z00zz__datez00, ((long)0)); 
{ /* Llib/date.scm 179 */
bool_t BgL_testz00_8508;
{ /* Llib/date.scm 179 */
long BgL_n1z00_4585;
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8509;
if(
INTEGERP(BgL_index1981z00_2565))
{ /* Llib/date.scm 179 */
BgL_auxz00_8509 = BgL_index1981z00_2565
; }  else 
{ 
obj_t BgL_auxz00_8512;
BgL_auxz00_8512 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4372z00zz__datez00, BgL_index1981z00_2565); 
FAILURE(BgL_auxz00_8512,BFALSE,BFALSE);} 
BgL_n1z00_4585 = 
(long)CINT(BgL_auxz00_8509); } 
BgL_testz00_8508 = 
(BgL_n1z00_4585>=((long)0)); } 
if(BgL_testz00_8508)
{ 
int BgL_auxz00_8518;
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8519;
{ /* Llib/date.scm 179 */
bool_t BgL_test4067z00_5700;
BgL_test4067z00_5700 = 
INTEGERP(BgL_index1981z00_2565); 
if(BgL_test4067z00_5700)
{ /* Llib/date.scm 179 */
BgL_auxz00_8519 = BgL_index1981z00_2565
; }  else 
{ 
obj_t BgL_auxz00_8522;
BgL_auxz00_8522 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4473z00zz__datez00, BgL_index1981z00_2565); 
FAILURE(BgL_auxz00_8522,BFALSE,BFALSE);} } 
BgL_auxz00_8518 = 
CINT(BgL_auxz00_8519); } 
BgL_hourz00_2544 = 
VECTOR_REF(BgL_opt1974z00_11,BgL_auxz00_8518); }  else 
{ /* Llib/date.scm 179 */BFALSE; } } } 
{ /* Llib/date.scm 179 */
obj_t BgL_index1982z00_2567;
BgL_index1982z00_2567 = 
BGl_search1976z00zz__datez00(BgL_l1975z00_2538, BgL_opt1974z00_11, BGl_keyword4507z00zz__datez00, ((long)0)); 
{ /* Llib/date.scm 179 */
bool_t BgL_testz00_8529;
{ /* Llib/date.scm 179 */
long BgL_n1z00_4587;
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8530;
if(
INTEGERP(BgL_index1982z00_2567))
{ /* Llib/date.scm 179 */
BgL_auxz00_8530 = BgL_index1982z00_2567
; }  else 
{ 
obj_t BgL_auxz00_8533;
BgL_auxz00_8533 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4372z00zz__datez00, BgL_index1982z00_2567); 
FAILURE(BgL_auxz00_8533,BFALSE,BFALSE);} 
BgL_n1z00_4587 = 
(long)CINT(BgL_auxz00_8530); } 
BgL_testz00_8529 = 
(BgL_n1z00_4587>=((long)0)); } 
if(BgL_testz00_8529)
{ 
int BgL_auxz00_8539;
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8540;
{ /* Llib/date.scm 179 */
bool_t BgL_test4071z00_5704;
BgL_test4071z00_5704 = 
INTEGERP(BgL_index1982z00_2567); 
if(BgL_test4071z00_5704)
{ /* Llib/date.scm 179 */
BgL_auxz00_8540 = BgL_index1982z00_2567
; }  else 
{ 
obj_t BgL_auxz00_8543;
BgL_auxz00_8543 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4473z00zz__datez00, BgL_index1982z00_2567); 
FAILURE(BgL_auxz00_8543,BFALSE,BFALSE);} } 
BgL_auxz00_8539 = 
CINT(BgL_auxz00_8540); } 
BgL_minz00_2545 = 
VECTOR_REF(BgL_opt1974z00_11,BgL_auxz00_8539); }  else 
{ /* Llib/date.scm 179 */BFALSE; } } } 
{ /* Llib/date.scm 179 */
obj_t BgL_index1983z00_2569;
BgL_index1983z00_2569 = 
BGl_search1976z00zz__datez00(BgL_l1975z00_2538, BgL_opt1974z00_11, BGl_keyword4509z00zz__datez00, ((long)0)); 
{ /* Llib/date.scm 179 */
bool_t BgL_testz00_8550;
{ /* Llib/date.scm 179 */
long BgL_n1z00_4589;
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8551;
if(
INTEGERP(BgL_index1983z00_2569))
{ /* Llib/date.scm 179 */
BgL_auxz00_8551 = BgL_index1983z00_2569
; }  else 
{ 
obj_t BgL_auxz00_8554;
BgL_auxz00_8554 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4372z00zz__datez00, BgL_index1983z00_2569); 
FAILURE(BgL_auxz00_8554,BFALSE,BFALSE);} 
BgL_n1z00_4589 = 
(long)CINT(BgL_auxz00_8551); } 
BgL_testz00_8550 = 
(BgL_n1z00_4589>=((long)0)); } 
if(BgL_testz00_8550)
{ 
int BgL_auxz00_8560;
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8561;
{ /* Llib/date.scm 179 */
bool_t BgL_test4075z00_5708;
BgL_test4075z00_5708 = 
INTEGERP(BgL_index1983z00_2569); 
if(BgL_test4075z00_5708)
{ /* Llib/date.scm 179 */
BgL_auxz00_8561 = BgL_index1983z00_2569
; }  else 
{ 
obj_t BgL_auxz00_8564;
BgL_auxz00_8564 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4473z00zz__datez00, BgL_index1983z00_2569); 
FAILURE(BgL_auxz00_8564,BFALSE,BFALSE);} } 
BgL_auxz00_8560 = 
CINT(BgL_auxz00_8561); } 
BgL_monthz00_2546 = 
VECTOR_REF(BgL_opt1974z00_11,BgL_auxz00_8560); }  else 
{ /* Llib/date.scm 179 */BFALSE; } } } 
{ /* Llib/date.scm 179 */
obj_t BgL_index1984z00_2571;
BgL_index1984z00_2571 = 
BGl_search1976z00zz__datez00(BgL_l1975z00_2538, BgL_opt1974z00_11, BGl_keyword4511z00zz__datez00, ((long)0)); 
{ /* Llib/date.scm 179 */
bool_t BgL_testz00_8571;
{ /* Llib/date.scm 179 */
long BgL_n1z00_4591;
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8572;
if(
INTEGERP(BgL_index1984z00_2571))
{ /* Llib/date.scm 179 */
BgL_auxz00_8572 = BgL_index1984z00_2571
; }  else 
{ 
obj_t BgL_auxz00_8575;
BgL_auxz00_8575 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4372z00zz__datez00, BgL_index1984z00_2571); 
FAILURE(BgL_auxz00_8575,BFALSE,BFALSE);} 
BgL_n1z00_4591 = 
(long)CINT(BgL_auxz00_8572); } 
BgL_testz00_8571 = 
(BgL_n1z00_4591>=((long)0)); } 
if(BgL_testz00_8571)
{ 
int BgL_auxz00_8581;
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8582;
{ /* Llib/date.scm 179 */
bool_t BgL_test4079z00_5712;
BgL_test4079z00_5712 = 
INTEGERP(BgL_index1984z00_2571); 
if(BgL_test4079z00_5712)
{ /* Llib/date.scm 179 */
BgL_auxz00_8582 = BgL_index1984z00_2571
; }  else 
{ 
obj_t BgL_auxz00_8585;
BgL_auxz00_8585 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4473z00zz__datez00, BgL_index1984z00_2571); 
FAILURE(BgL_auxz00_8585,BFALSE,BFALSE);} } 
BgL_auxz00_8581 = 
CINT(BgL_auxz00_8582); } 
BgL_nsecz00_2547 = 
VECTOR_REF(BgL_opt1974z00_11,BgL_auxz00_8581); }  else 
{ /* Llib/date.scm 179 */BFALSE; } } } 
{ /* Llib/date.scm 179 */
obj_t BgL_index1985z00_2573;
BgL_index1985z00_2573 = 
BGl_search1976z00zz__datez00(BgL_l1975z00_2538, BgL_opt1974z00_11, BGl_keyword4513z00zz__datez00, ((long)0)); 
{ /* Llib/date.scm 179 */
bool_t BgL_testz00_8592;
{ /* Llib/date.scm 179 */
long BgL_n1z00_4593;
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8593;
if(
INTEGERP(BgL_index1985z00_2573))
{ /* Llib/date.scm 179 */
BgL_auxz00_8593 = BgL_index1985z00_2573
; }  else 
{ 
obj_t BgL_auxz00_8596;
BgL_auxz00_8596 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4372z00zz__datez00, BgL_index1985z00_2573); 
FAILURE(BgL_auxz00_8596,BFALSE,BFALSE);} 
BgL_n1z00_4593 = 
(long)CINT(BgL_auxz00_8593); } 
BgL_testz00_8592 = 
(BgL_n1z00_4593>=((long)0)); } 
if(BgL_testz00_8592)
{ 
int BgL_auxz00_8602;
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8603;
{ /* Llib/date.scm 179 */
bool_t BgL_test4083z00_5716;
BgL_test4083z00_5716 = 
INTEGERP(BgL_index1985z00_2573); 
if(BgL_test4083z00_5716)
{ /* Llib/date.scm 179 */
BgL_auxz00_8603 = BgL_index1985z00_2573
; }  else 
{ 
obj_t BgL_auxz00_8606;
BgL_auxz00_8606 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4473z00zz__datez00, BgL_index1985z00_2573); 
FAILURE(BgL_auxz00_8606,BFALSE,BFALSE);} } 
BgL_auxz00_8602 = 
CINT(BgL_auxz00_8603); } 
BgL_secz00_2548 = 
VECTOR_REF(BgL_opt1974z00_11,BgL_auxz00_8602); }  else 
{ /* Llib/date.scm 179 */BFALSE; } } } 
{ /* Llib/date.scm 179 */
obj_t BgL_index1986z00_2575;
BgL_index1986z00_2575 = 
BGl_search1976z00zz__datez00(BgL_l1975z00_2538, BgL_opt1974z00_11, BGl_keyword4515z00zz__datez00, ((long)0)); 
{ /* Llib/date.scm 179 */
bool_t BgL_testz00_8613;
{ /* Llib/date.scm 179 */
long BgL_n1z00_4595;
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8614;
if(
INTEGERP(BgL_index1986z00_2575))
{ /* Llib/date.scm 179 */
BgL_auxz00_8614 = BgL_index1986z00_2575
; }  else 
{ 
obj_t BgL_auxz00_8617;
BgL_auxz00_8617 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4372z00zz__datez00, BgL_index1986z00_2575); 
FAILURE(BgL_auxz00_8617,BFALSE,BFALSE);} 
BgL_n1z00_4595 = 
(long)CINT(BgL_auxz00_8614); } 
BgL_testz00_8613 = 
(BgL_n1z00_4595>=((long)0)); } 
if(BgL_testz00_8613)
{ 
int BgL_auxz00_8623;
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8624;
{ /* Llib/date.scm 179 */
bool_t BgL_test4087z00_5720;
BgL_test4087z00_5720 = 
INTEGERP(BgL_index1986z00_2575); 
if(BgL_test4087z00_5720)
{ /* Llib/date.scm 179 */
BgL_auxz00_8624 = BgL_index1986z00_2575
; }  else 
{ 
obj_t BgL_auxz00_8627;
BgL_auxz00_8627 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4473z00zz__datez00, BgL_index1986z00_2575); 
FAILURE(BgL_auxz00_8627,BFALSE,BFALSE);} } 
BgL_auxz00_8623 = 
CINT(BgL_auxz00_8624); } 
BgL_timeza7oneza7_2549 = 
VECTOR_REF(BgL_opt1974z00_11,BgL_auxz00_8623); }  else 
{ /* Llib/date.scm 179 */BFALSE; } } } 
{ /* Llib/date.scm 179 */
obj_t BgL_index1987z00_2577;
BgL_index1987z00_2577 = 
BGl_search1976z00zz__datez00(BgL_l1975z00_2538, BgL_opt1974z00_11, BGl_keyword4517z00zz__datez00, ((long)0)); 
{ /* Llib/date.scm 179 */
bool_t BgL_testz00_8634;
{ /* Llib/date.scm 179 */
long BgL_n1z00_4597;
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8635;
if(
INTEGERP(BgL_index1987z00_2577))
{ /* Llib/date.scm 179 */
BgL_auxz00_8635 = BgL_index1987z00_2577
; }  else 
{ 
obj_t BgL_auxz00_8638;
BgL_auxz00_8638 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4372z00zz__datez00, BgL_index1987z00_2577); 
FAILURE(BgL_auxz00_8638,BFALSE,BFALSE);} 
BgL_n1z00_4597 = 
(long)CINT(BgL_auxz00_8635); } 
BgL_testz00_8634 = 
(BgL_n1z00_4597>=((long)0)); } 
if(BgL_testz00_8634)
{ 
int BgL_auxz00_8644;
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8645;
{ /* Llib/date.scm 179 */
bool_t BgL_test4091z00_5724;
BgL_test4091z00_5724 = 
INTEGERP(BgL_index1987z00_2577); 
if(BgL_test4091z00_5724)
{ /* Llib/date.scm 179 */
BgL_auxz00_8645 = BgL_index1987z00_2577
; }  else 
{ 
obj_t BgL_auxz00_8648;
BgL_auxz00_8648 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4473z00zz__datez00, BgL_index1987z00_2577); 
FAILURE(BgL_auxz00_8648,BFALSE,BFALSE);} } 
BgL_auxz00_8644 = 
CINT(BgL_auxz00_8645); } 
BgL_yearz00_2550 = 
VECTOR_REF(BgL_opt1974z00_11,BgL_auxz00_8644); }  else 
{ /* Llib/date.scm 179 */BFALSE; } } } 
{ /* Llib/date.scm 179 */
obj_t BgL_dayz00_2579;
BgL_dayz00_2579 = BgL_dayz00_2542; 
{ /* Llib/date.scm 179 */
obj_t BgL_dstz00_2580;
BgL_dstz00_2580 = BgL_dstz00_2543; 
{ /* Llib/date.scm 179 */
obj_t BgL_hourz00_2581;
BgL_hourz00_2581 = BgL_hourz00_2544; 
{ /* Llib/date.scm 179 */
obj_t BgL_minz00_2582;
BgL_minz00_2582 = BgL_minz00_2545; 
{ /* Llib/date.scm 179 */
obj_t BgL_monthz00_2583;
BgL_monthz00_2583 = BgL_monthz00_2546; 
{ /* Llib/date.scm 179 */
obj_t BgL_nsecz00_2584;
BgL_nsecz00_2584 = BgL_nsecz00_2547; 
{ /* Llib/date.scm 179 */
obj_t BgL_secz00_2585;
BgL_secz00_2585 = BgL_secz00_2548; 
{ /* Llib/date.scm 179 */
obj_t BgL_timeza7oneza7_2586;
BgL_timeza7oneza7_2586 = BgL_timeza7oneza7_2549; 
{ /* Llib/date.scm 179 */
obj_t BgL_yearz00_2587;
BgL_yearz00_2587 = BgL_yearz00_2550; 
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_timeza7oneza7_2586))
{ /* Llib/date.scm 179 */
int BgL_auxz00_8719;long BgL_auxz00_8710;int BgL_auxz00_8701;int BgL_auxz00_8692;int BgL_auxz00_8683;int BgL_auxz00_8674;int BgL_auxz00_8665;int BgL_auxz00_8656;
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8720;
if(
INTEGERP(BgL_dstz00_2580))
{ /* Llib/date.scm 179 */
BgL_auxz00_8720 = BgL_dstz00_2580
; }  else 
{ 
obj_t BgL_auxz00_8723;
BgL_auxz00_8723 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4473z00zz__datez00, BgL_dstz00_2580); 
FAILURE(BgL_auxz00_8723,BFALSE,BFALSE);} 
BgL_auxz00_8719 = 
CINT(BgL_auxz00_8720); } 
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8711;
if(
INTEGERP(BgL_timeza7oneza7_2586))
{ /* Llib/date.scm 179 */
BgL_auxz00_8711 = BgL_timeza7oneza7_2586
; }  else 
{ 
obj_t BgL_auxz00_8714;
BgL_auxz00_8714 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4372z00zz__datez00, BgL_timeza7oneza7_2586); 
FAILURE(BgL_auxz00_8714,BFALSE,BFALSE);} 
BgL_auxz00_8710 = 
(long)CINT(BgL_auxz00_8711); } 
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8702;
if(
INTEGERP(BgL_yearz00_2587))
{ /* Llib/date.scm 179 */
BgL_auxz00_8702 = BgL_yearz00_2587
; }  else 
{ 
obj_t BgL_auxz00_8705;
BgL_auxz00_8705 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4473z00zz__datez00, BgL_yearz00_2587); 
FAILURE(BgL_auxz00_8705,BFALSE,BFALSE);} 
BgL_auxz00_8701 = 
CINT(BgL_auxz00_8702); } 
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8693;
if(
INTEGERP(BgL_monthz00_2583))
{ /* Llib/date.scm 179 */
BgL_auxz00_8693 = BgL_monthz00_2583
; }  else 
{ 
obj_t BgL_auxz00_8696;
BgL_auxz00_8696 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4473z00zz__datez00, BgL_monthz00_2583); 
FAILURE(BgL_auxz00_8696,BFALSE,BFALSE);} 
BgL_auxz00_8692 = 
CINT(BgL_auxz00_8693); } 
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8684;
if(
INTEGERP(BgL_dayz00_2579))
{ /* Llib/date.scm 179 */
BgL_auxz00_8684 = BgL_dayz00_2579
; }  else 
{ 
obj_t BgL_auxz00_8687;
BgL_auxz00_8687 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4473z00zz__datez00, BgL_dayz00_2579); 
FAILURE(BgL_auxz00_8687,BFALSE,BFALSE);} 
BgL_auxz00_8683 = 
CINT(BgL_auxz00_8684); } 
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8675;
if(
INTEGERP(BgL_hourz00_2581))
{ /* Llib/date.scm 179 */
BgL_auxz00_8675 = BgL_hourz00_2581
; }  else 
{ 
obj_t BgL_auxz00_8678;
BgL_auxz00_8678 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4473z00zz__datez00, BgL_hourz00_2581); 
FAILURE(BgL_auxz00_8678,BFALSE,BFALSE);} 
BgL_auxz00_8674 = 
CINT(BgL_auxz00_8675); } 
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8666;
if(
INTEGERP(BgL_minz00_2582))
{ /* Llib/date.scm 179 */
BgL_auxz00_8666 = BgL_minz00_2582
; }  else 
{ 
obj_t BgL_auxz00_8669;
BgL_auxz00_8669 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4473z00zz__datez00, BgL_minz00_2582); 
FAILURE(BgL_auxz00_8669,BFALSE,BFALSE);} 
BgL_auxz00_8665 = 
CINT(BgL_auxz00_8666); } 
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8657;
if(
INTEGERP(BgL_secz00_2585))
{ /* Llib/date.scm 179 */
BgL_auxz00_8657 = BgL_secz00_2585
; }  else 
{ 
obj_t BgL_auxz00_8660;
BgL_auxz00_8660 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4473z00zz__datez00, BgL_secz00_2585); 
FAILURE(BgL_auxz00_8660,BFALSE,BFALSE);} 
BgL_auxz00_8656 = 
CINT(BgL_auxz00_8657); } 
return 
bgl_make_date(BgL_auxz00_8656, BgL_auxz00_8665, BgL_auxz00_8674, BgL_auxz00_8683, BgL_auxz00_8692, BgL_auxz00_8701, BgL_auxz00_8710, ((bool_t)1), BgL_auxz00_8719);}  else 
{ /* Llib/date.scm 179 */
int BgL_auxz00_8783;int BgL_auxz00_8774;int BgL_auxz00_8765;int BgL_auxz00_8756;int BgL_auxz00_8747;int BgL_auxz00_8738;int BgL_auxz00_8729;
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8784;
if(
INTEGERP(BgL_dstz00_2580))
{ /* Llib/date.scm 179 */
BgL_auxz00_8784 = BgL_dstz00_2580
; }  else 
{ 
obj_t BgL_auxz00_8787;
BgL_auxz00_8787 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4473z00zz__datez00, BgL_dstz00_2580); 
FAILURE(BgL_auxz00_8787,BFALSE,BFALSE);} 
BgL_auxz00_8783 = 
CINT(BgL_auxz00_8784); } 
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8775;
if(
INTEGERP(BgL_yearz00_2587))
{ /* Llib/date.scm 179 */
BgL_auxz00_8775 = BgL_yearz00_2587
; }  else 
{ 
obj_t BgL_auxz00_8778;
BgL_auxz00_8778 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4473z00zz__datez00, BgL_yearz00_2587); 
FAILURE(BgL_auxz00_8778,BFALSE,BFALSE);} 
BgL_auxz00_8774 = 
CINT(BgL_auxz00_8775); } 
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8766;
if(
INTEGERP(BgL_monthz00_2583))
{ /* Llib/date.scm 179 */
BgL_auxz00_8766 = BgL_monthz00_2583
; }  else 
{ 
obj_t BgL_auxz00_8769;
BgL_auxz00_8769 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4473z00zz__datez00, BgL_monthz00_2583); 
FAILURE(BgL_auxz00_8769,BFALSE,BFALSE);} 
BgL_auxz00_8765 = 
CINT(BgL_auxz00_8766); } 
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8757;
if(
INTEGERP(BgL_dayz00_2579))
{ /* Llib/date.scm 179 */
BgL_auxz00_8757 = BgL_dayz00_2579
; }  else 
{ 
obj_t BgL_auxz00_8760;
BgL_auxz00_8760 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4473z00zz__datez00, BgL_dayz00_2579); 
FAILURE(BgL_auxz00_8760,BFALSE,BFALSE);} 
BgL_auxz00_8756 = 
CINT(BgL_auxz00_8757); } 
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8748;
if(
INTEGERP(BgL_hourz00_2581))
{ /* Llib/date.scm 179 */
BgL_auxz00_8748 = BgL_hourz00_2581
; }  else 
{ 
obj_t BgL_auxz00_8751;
BgL_auxz00_8751 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4473z00zz__datez00, BgL_hourz00_2581); 
FAILURE(BgL_auxz00_8751,BFALSE,BFALSE);} 
BgL_auxz00_8747 = 
CINT(BgL_auxz00_8748); } 
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8739;
if(
INTEGERP(BgL_minz00_2582))
{ /* Llib/date.scm 179 */
BgL_auxz00_8739 = BgL_minz00_2582
; }  else 
{ 
obj_t BgL_auxz00_8742;
BgL_auxz00_8742 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4473z00zz__datez00, BgL_minz00_2582); 
FAILURE(BgL_auxz00_8742,BFALSE,BFALSE);} 
BgL_auxz00_8738 = 
CINT(BgL_auxz00_8739); } 
{ /* Llib/date.scm 179 */
obj_t BgL_auxz00_8730;
if(
INTEGERP(BgL_secz00_2585))
{ /* Llib/date.scm 179 */
BgL_auxz00_8730 = BgL_secz00_2585
; }  else 
{ 
obj_t BgL_auxz00_8733;
BgL_auxz00_8733 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)7884)), BGl_string4522z00zz__datez00, BGl_string4473z00zz__datez00, BgL_secz00_2585); 
FAILURE(BgL_auxz00_8733,BFALSE,BFALSE);} 
BgL_auxz00_8729 = 
CINT(BgL_auxz00_8730); } 
return 
bgl_make_date(BgL_auxz00_8729, BgL_auxz00_8738, BgL_auxz00_8747, BgL_auxz00_8756, BgL_auxz00_8765, BgL_auxz00_8774, ((long)0), ((bool_t)0), BgL_auxz00_8783);} } } } } } } } } } } } } } } } } } } } } } } 
}



/* search1976 */
obj_t BGl_search1976z00zz__datez00(int BgL_l1975z00_5115, obj_t BgL_opt1974z00_5114, obj_t BgL_k1z00_2539, long BgL_iz00_2540)
{ AN_OBJECT;
{ /* Llib/date.scm 179 */
BGl_search1976z00zz__datez00:
if(
(BgL_iz00_2540==
(long)(BgL_l1975z00_5115)))
{ /* Llib/date.scm 179 */
return 
BINT(((long)-1));}  else 
{ /* Llib/date.scm 179 */
if(
(BgL_iz00_2540==
(
(long)(BgL_l1975z00_5115)-((long)1))))
{ /* Llib/date.scm 179 */
obj_t BgL_arg2995z00_2590;int BgL_arg2997z00_2592;
BgL_arg2995z00_2590 = BGl_symbol4519z00zz__datez00; 
BgL_arg2997z00_2592 = 
VECTOR_LENGTH(BgL_opt1974z00_5114); 
return 
BGl_errorz00zz__errorz00(BgL_arg2995z00_2590, BGl_string4523z00zz__datez00, 
BINT(BgL_arg2997z00_2592));}  else 
{ /* Llib/date.scm 179 */
obj_t BgL_vz00_2593;
BgL_vz00_2593 = 
VECTOR_REF(BgL_opt1974z00_5114,
(int)(BgL_iz00_2540)); 
if(
(BgL_vz00_2593==BgL_k1z00_2539))
{ /* Llib/date.scm 179 */
return 
BINT(
(BgL_iz00_2540+((long)1)));}  else 
{ 
long BgL_iz00_8810;
BgL_iz00_8810 = 
(BgL_iz00_2540+((long)2)); 
BgL_iz00_2540 = BgL_iz00_8810; 
goto BGl_search1976z00zz__datez00;} } } } 
}



/* make-date */
BGL_EXPORTED_DEF obj_t BGl_makezd2datezd2zz__datez00(obj_t BgL_dayz00_2, obj_t BgL_dstz00_3, obj_t BgL_hourz00_4, obj_t BgL_minz00_5, obj_t BgL_monthz00_6, obj_t BgL_nsecz00_7, obj_t BgL_secz00_8, obj_t BgL_timeza7oneza7_9, obj_t BgL_yearz00_10)
{ AN_OBJECT;
{ /* Llib/date.scm 179 */
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_timeza7oneza7_9))
{ /* Llib/date.scm 184 */
int BgL_auxz00_8877;long BgL_auxz00_8868;int BgL_auxz00_8859;int BgL_auxz00_8850;int BgL_auxz00_8841;int BgL_auxz00_8832;int BgL_auxz00_8823;int BgL_auxz00_8814;
{ /* Llib/date.scm 184 */
obj_t BgL_auxz00_8878;
if(
INTEGERP(BgL_dstz00_3))
{ /* Llib/date.scm 184 */
BgL_auxz00_8878 = BgL_dstz00_3
; }  else 
{ 
obj_t BgL_auxz00_8881;
BgL_auxz00_8881 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8029)), BGl_string4520z00zz__datez00, BGl_string4473z00zz__datez00, BgL_dstz00_3); 
FAILURE(BgL_auxz00_8881,BFALSE,BFALSE);} 
BgL_auxz00_8877 = 
CINT(BgL_auxz00_8878); } 
{ /* Llib/date.scm 184 */
obj_t BgL_auxz00_8869;
if(
INTEGERP(BgL_timeza7oneza7_9))
{ /* Llib/date.scm 184 */
BgL_auxz00_8869 = BgL_timeza7oneza7_9
; }  else 
{ 
obj_t BgL_auxz00_8872;
BgL_auxz00_8872 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8029)), BGl_string4520z00zz__datez00, BGl_string4372z00zz__datez00, BgL_timeza7oneza7_9); 
FAILURE(BgL_auxz00_8872,BFALSE,BFALSE);} 
BgL_auxz00_8868 = 
(long)CINT(BgL_auxz00_8869); } 
{ /* Llib/date.scm 184 */
obj_t BgL_auxz00_8860;
if(
INTEGERP(BgL_yearz00_10))
{ /* Llib/date.scm 184 */
BgL_auxz00_8860 = BgL_yearz00_10
; }  else 
{ 
obj_t BgL_auxz00_8863;
BgL_auxz00_8863 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8029)), BGl_string4520z00zz__datez00, BGl_string4473z00zz__datez00, BgL_yearz00_10); 
FAILURE(BgL_auxz00_8863,BFALSE,BFALSE);} 
BgL_auxz00_8859 = 
CINT(BgL_auxz00_8860); } 
{ /* Llib/date.scm 184 */
obj_t BgL_auxz00_8851;
if(
INTEGERP(BgL_monthz00_6))
{ /* Llib/date.scm 184 */
BgL_auxz00_8851 = BgL_monthz00_6
; }  else 
{ 
obj_t BgL_auxz00_8854;
BgL_auxz00_8854 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8029)), BGl_string4520z00zz__datez00, BGl_string4473z00zz__datez00, BgL_monthz00_6); 
FAILURE(BgL_auxz00_8854,BFALSE,BFALSE);} 
BgL_auxz00_8850 = 
CINT(BgL_auxz00_8851); } 
{ /* Llib/date.scm 184 */
obj_t BgL_auxz00_8842;
if(
INTEGERP(BgL_dayz00_2))
{ /* Llib/date.scm 184 */
BgL_auxz00_8842 = BgL_dayz00_2
; }  else 
{ 
obj_t BgL_auxz00_8845;
BgL_auxz00_8845 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8029)), BGl_string4520z00zz__datez00, BGl_string4473z00zz__datez00, BgL_dayz00_2); 
FAILURE(BgL_auxz00_8845,BFALSE,BFALSE);} 
BgL_auxz00_8841 = 
CINT(BgL_auxz00_8842); } 
{ /* Llib/date.scm 184 */
obj_t BgL_auxz00_8833;
if(
INTEGERP(BgL_hourz00_4))
{ /* Llib/date.scm 184 */
BgL_auxz00_8833 = BgL_hourz00_4
; }  else 
{ 
obj_t BgL_auxz00_8836;
BgL_auxz00_8836 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8029)), BGl_string4520z00zz__datez00, BGl_string4473z00zz__datez00, BgL_hourz00_4); 
FAILURE(BgL_auxz00_8836,BFALSE,BFALSE);} 
BgL_auxz00_8832 = 
CINT(BgL_auxz00_8833); } 
{ /* Llib/date.scm 184 */
obj_t BgL_auxz00_8824;
if(
INTEGERP(BgL_minz00_5))
{ /* Llib/date.scm 184 */
BgL_auxz00_8824 = BgL_minz00_5
; }  else 
{ 
obj_t BgL_auxz00_8827;
BgL_auxz00_8827 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8029)), BGl_string4520z00zz__datez00, BGl_string4473z00zz__datez00, BgL_minz00_5); 
FAILURE(BgL_auxz00_8827,BFALSE,BFALSE);} 
BgL_auxz00_8823 = 
CINT(BgL_auxz00_8824); } 
{ /* Llib/date.scm 184 */
obj_t BgL_auxz00_8815;
if(
INTEGERP(BgL_secz00_8))
{ /* Llib/date.scm 184 */
BgL_auxz00_8815 = BgL_secz00_8
; }  else 
{ 
obj_t BgL_auxz00_8818;
BgL_auxz00_8818 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8029)), BGl_string4520z00zz__datez00, BGl_string4473z00zz__datez00, BgL_secz00_8); 
FAILURE(BgL_auxz00_8818,BFALSE,BFALSE);} 
BgL_auxz00_8814 = 
CINT(BgL_auxz00_8815); } 
return 
bgl_make_date(BgL_auxz00_8814, BgL_auxz00_8823, BgL_auxz00_8832, BgL_auxz00_8841, BgL_auxz00_8850, BgL_auxz00_8859, BgL_auxz00_8868, ((bool_t)1), BgL_auxz00_8877);}  else 
{ /* Llib/date.scm 184 */
int BgL_auxz00_8941;int BgL_auxz00_8932;int BgL_auxz00_8923;int BgL_auxz00_8914;int BgL_auxz00_8905;int BgL_auxz00_8896;int BgL_auxz00_8887;
{ /* Llib/date.scm 184 */
obj_t BgL_auxz00_8942;
if(
INTEGERP(BgL_dstz00_3))
{ /* Llib/date.scm 184 */
BgL_auxz00_8942 = BgL_dstz00_3
; }  else 
{ 
obj_t BgL_auxz00_8945;
BgL_auxz00_8945 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8029)), BGl_string4520z00zz__datez00, BGl_string4473z00zz__datez00, BgL_dstz00_3); 
FAILURE(BgL_auxz00_8945,BFALSE,BFALSE);} 
BgL_auxz00_8941 = 
CINT(BgL_auxz00_8942); } 
{ /* Llib/date.scm 184 */
obj_t BgL_auxz00_8933;
if(
INTEGERP(BgL_yearz00_10))
{ /* Llib/date.scm 184 */
BgL_auxz00_8933 = BgL_yearz00_10
; }  else 
{ 
obj_t BgL_auxz00_8936;
BgL_auxz00_8936 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8029)), BGl_string4520z00zz__datez00, BGl_string4473z00zz__datez00, BgL_yearz00_10); 
FAILURE(BgL_auxz00_8936,BFALSE,BFALSE);} 
BgL_auxz00_8932 = 
CINT(BgL_auxz00_8933); } 
{ /* Llib/date.scm 184 */
obj_t BgL_auxz00_8924;
if(
INTEGERP(BgL_monthz00_6))
{ /* Llib/date.scm 184 */
BgL_auxz00_8924 = BgL_monthz00_6
; }  else 
{ 
obj_t BgL_auxz00_8927;
BgL_auxz00_8927 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8029)), BGl_string4520z00zz__datez00, BGl_string4473z00zz__datez00, BgL_monthz00_6); 
FAILURE(BgL_auxz00_8927,BFALSE,BFALSE);} 
BgL_auxz00_8923 = 
CINT(BgL_auxz00_8924); } 
{ /* Llib/date.scm 184 */
obj_t BgL_auxz00_8915;
if(
INTEGERP(BgL_dayz00_2))
{ /* Llib/date.scm 184 */
BgL_auxz00_8915 = BgL_dayz00_2
; }  else 
{ 
obj_t BgL_auxz00_8918;
BgL_auxz00_8918 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8029)), BGl_string4520z00zz__datez00, BGl_string4473z00zz__datez00, BgL_dayz00_2); 
FAILURE(BgL_auxz00_8918,BFALSE,BFALSE);} 
BgL_auxz00_8914 = 
CINT(BgL_auxz00_8915); } 
{ /* Llib/date.scm 184 */
obj_t BgL_auxz00_8906;
if(
INTEGERP(BgL_hourz00_4))
{ /* Llib/date.scm 184 */
BgL_auxz00_8906 = BgL_hourz00_4
; }  else 
{ 
obj_t BgL_auxz00_8909;
BgL_auxz00_8909 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8029)), BGl_string4520z00zz__datez00, BGl_string4473z00zz__datez00, BgL_hourz00_4); 
FAILURE(BgL_auxz00_8909,BFALSE,BFALSE);} 
BgL_auxz00_8905 = 
CINT(BgL_auxz00_8906); } 
{ /* Llib/date.scm 184 */
obj_t BgL_auxz00_8897;
if(
INTEGERP(BgL_minz00_5))
{ /* Llib/date.scm 184 */
BgL_auxz00_8897 = BgL_minz00_5
; }  else 
{ 
obj_t BgL_auxz00_8900;
BgL_auxz00_8900 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8029)), BGl_string4520z00zz__datez00, BGl_string4473z00zz__datez00, BgL_minz00_5); 
FAILURE(BgL_auxz00_8900,BFALSE,BFALSE);} 
BgL_auxz00_8896 = 
CINT(BgL_auxz00_8897); } 
{ /* Llib/date.scm 184 */
obj_t BgL_auxz00_8888;
if(
INTEGERP(BgL_secz00_8))
{ /* Llib/date.scm 184 */
BgL_auxz00_8888 = BgL_secz00_8
; }  else 
{ 
obj_t BgL_auxz00_8891;
BgL_auxz00_8891 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8029)), BGl_string4520z00zz__datez00, BGl_string4473z00zz__datez00, BgL_secz00_8); 
FAILURE(BgL_auxz00_8891,BFALSE,BFALSE);} 
BgL_auxz00_8887 = 
CINT(BgL_auxz00_8888); } 
return 
bgl_make_date(BgL_auxz00_8887, BgL_auxz00_8896, BgL_auxz00_8905, BgL_auxz00_8914, BgL_auxz00_8923, BgL_auxz00_8932, ((long)0), ((bool_t)0), BgL_auxz00_8941);} } 
}



/* _date-copy */
obj_t BGl__datezd2copyzd2zz__datez00(obj_t BgL_envz00_21, obj_t BgL_opt1988z00_20)
{ AN_OBJECT;
{ /* Llib/date.scm 191 */
{ /* Llib/date.scm 191 */
int BgL_l1989z00_2598;
BgL_l1989z00_2598 = 
VECTOR_LENGTH(BgL_opt1988z00_20); 
{ /* Llib/date.scm 191 */
obj_t BgL_datez00_2602;
BgL_datez00_2602 = 
VECTOR_REF(BgL_opt1988z00_20,
(int)(((long)0))); 
{ /* Llib/date.scm 191 */
obj_t BgL_dayz00_2603;
BgL_dayz00_2603 = BFALSE; 
{ /* Llib/date.scm 191 */
obj_t BgL_hourz00_2604;
BgL_hourz00_2604 = BFALSE; 
{ /* Llib/date.scm 191 */
obj_t BgL_minz00_2605;
BgL_minz00_2605 = BFALSE; 
{ /* Llib/date.scm 191 */
obj_t BgL_monthz00_2606;
BgL_monthz00_2606 = BFALSE; 
{ /* Llib/date.scm 191 */
obj_t BgL_secz00_2607;
BgL_secz00_2607 = BFALSE; 
{ /* Llib/date.scm 191 */
obj_t BgL_yearz00_2608;
BgL_yearz00_2608 = BFALSE; 
{ /* Llib/date.scm 191 */

{ 
long BgL_iz00_2609;
BgL_iz00_2609 = ((long)1); 
BgL_check1991z00_2610:
if(
(BgL_iz00_2609==
(long)(BgL_l1989z00_2598)))
{ /* Llib/date.scm 191 */BNIL; }  else 
{ /* Llib/date.scm 191 */
bool_t BgL_testz00_8957;
{ /* Llib/date.scm 191 */
obj_t BgL_arg3009z00_2617;obj_t BgL_arg3010z00_2618;
{ /* Llib/date.scm 191 */
int BgL_kz00_4624;
BgL_kz00_4624 = 
(int)(BgL_iz00_2609); 
{ /* Llib/date.scm 191 */
int BgL_l3502z00_5126;
BgL_l3502z00_5126 = 
VECTOR_LENGTH(BgL_opt1988z00_20); 
if(
BOUND_CHECK(BgL_kz00_4624, BgL_l3502z00_5126))
{ /* Llib/date.scm 191 */
BgL_arg3009z00_2617 = 
VECTOR_REF(BgL_opt1988z00_20,BgL_kz00_4624); }  else 
{ 
obj_t BgL_auxz00_8963;
BgL_auxz00_8963 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8399)), BGl_string4499z00zz__datez00, 
BINT(BgL_kz00_4624), BgL_opt1988z00_20); 
FAILURE(BgL_auxz00_8963,BFALSE,BFALSE);} } } 
BgL_arg3010z00_2618 = BGl_list4524z00zz__datez00; 
BgL_testz00_8957 = 
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg3009z00_2617, BgL_arg3010z00_2618)); } 
if(BgL_testz00_8957)
{ 
long BgL_iz00_8970;
BgL_iz00_8970 = 
(BgL_iz00_2609+((long)2)); 
BgL_iz00_2609 = BgL_iz00_8970; 
goto BgL_check1991z00_2610;}  else 
{ /* Llib/date.scm 191 */
obj_t BgL_arg3006z00_2614;obj_t BgL_arg3008z00_2616;
BgL_arg3006z00_2614 = BGl_symbol4525z00zz__datez00; 
{ /* Llib/date.scm 191 */
int BgL_kz00_4628;
BgL_kz00_4628 = 
(int)(BgL_iz00_2609); 
{ /* Llib/date.scm 191 */
int BgL_l3506z00_5130;
BgL_l3506z00_5130 = 
VECTOR_LENGTH(BgL_opt1988z00_20); 
if(
BOUND_CHECK(BgL_kz00_4628, BgL_l3506z00_5130))
{ /* Llib/date.scm 191 */
BgL_arg3008z00_2616 = 
VECTOR_REF(BgL_opt1988z00_20,BgL_kz00_4628); }  else 
{ 
obj_t BgL_auxz00_8977;
BgL_auxz00_8977 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8399)), BGl_string4499z00zz__datez00, 
BINT(BgL_kz00_4628), BgL_opt1988z00_20); 
FAILURE(BgL_auxz00_8977,BFALSE,BFALSE);} } } 
BGl_errorz00zz__errorz00(BgL_arg3006z00_2614, BGl_string4521z00zz__datez00, BgL_arg3008z00_2616); } } } 
{ /* Llib/date.scm 191 */
obj_t BgL_index1993z00_2619;
BgL_index1993z00_2619 = 
BGl_search1990z00zz__datez00(BgL_l1989z00_2598, BgL_opt1988z00_20, BGl_keyword4501z00zz__datez00, ((long)1)); 
{ /* Llib/date.scm 191 */
bool_t BgL_testz00_8984;
{ /* Llib/date.scm 191 */
long BgL_n1z00_4629;
{ /* Llib/date.scm 191 */
obj_t BgL_auxz00_8985;
if(
INTEGERP(BgL_index1993z00_2619))
{ /* Llib/date.scm 191 */
BgL_auxz00_8985 = BgL_index1993z00_2619
; }  else 
{ 
obj_t BgL_auxz00_8988;
BgL_auxz00_8988 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8399)), BGl_string4527z00zz__datez00, BGl_string4372z00zz__datez00, BgL_index1993z00_2619); 
FAILURE(BgL_auxz00_8988,BFALSE,BFALSE);} 
BgL_n1z00_4629 = 
(long)CINT(BgL_auxz00_8985); } 
BgL_testz00_8984 = 
(BgL_n1z00_4629>=((long)0)); } 
if(BgL_testz00_8984)
{ 
int BgL_auxz00_8994;
{ /* Llib/date.scm 191 */
obj_t BgL_auxz00_8995;
{ /* Llib/date.scm 191 */
bool_t BgL_test4155z00_5788;
BgL_test4155z00_5788 = 
INTEGERP(BgL_index1993z00_2619); 
if(BgL_test4155z00_5788)
{ /* Llib/date.scm 191 */
BgL_auxz00_8995 = BgL_index1993z00_2619
; }  else 
{ 
obj_t BgL_auxz00_8998;
BgL_auxz00_8998 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8399)), BGl_string4527z00zz__datez00, BGl_string4473z00zz__datez00, BgL_index1993z00_2619); 
FAILURE(BgL_auxz00_8998,BFALSE,BFALSE);} } 
BgL_auxz00_8994 = 
CINT(BgL_auxz00_8995); } 
BgL_dayz00_2603 = 
VECTOR_REF(BgL_opt1988z00_20,BgL_auxz00_8994); }  else 
{ /* Llib/date.scm 191 */BFALSE; } } } 
{ /* Llib/date.scm 191 */
obj_t BgL_index1994z00_2621;
BgL_index1994z00_2621 = 
BGl_search1990z00zz__datez00(BgL_l1989z00_2598, BgL_opt1988z00_20, BGl_keyword4505z00zz__datez00, ((long)1)); 
{ /* Llib/date.scm 191 */
bool_t BgL_testz00_9005;
{ /* Llib/date.scm 191 */
long BgL_n1z00_4631;
{ /* Llib/date.scm 191 */
obj_t BgL_auxz00_9006;
if(
INTEGERP(BgL_index1994z00_2621))
{ /* Llib/date.scm 191 */
BgL_auxz00_9006 = BgL_index1994z00_2621
; }  else 
{ 
obj_t BgL_auxz00_9009;
BgL_auxz00_9009 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8399)), BGl_string4527z00zz__datez00, BGl_string4372z00zz__datez00, BgL_index1994z00_2621); 
FAILURE(BgL_auxz00_9009,BFALSE,BFALSE);} 
BgL_n1z00_4631 = 
(long)CINT(BgL_auxz00_9006); } 
BgL_testz00_9005 = 
(BgL_n1z00_4631>=((long)0)); } 
if(BgL_testz00_9005)
{ 
int BgL_auxz00_9015;
{ /* Llib/date.scm 191 */
obj_t BgL_auxz00_9016;
{ /* Llib/date.scm 191 */
bool_t BgL_test4159z00_5792;
BgL_test4159z00_5792 = 
INTEGERP(BgL_index1994z00_2621); 
if(BgL_test4159z00_5792)
{ /* Llib/date.scm 191 */
BgL_auxz00_9016 = BgL_index1994z00_2621
; }  else 
{ 
obj_t BgL_auxz00_9019;
BgL_auxz00_9019 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8399)), BGl_string4527z00zz__datez00, BGl_string4473z00zz__datez00, BgL_index1994z00_2621); 
FAILURE(BgL_auxz00_9019,BFALSE,BFALSE);} } 
BgL_auxz00_9015 = 
CINT(BgL_auxz00_9016); } 
BgL_hourz00_2604 = 
VECTOR_REF(BgL_opt1988z00_20,BgL_auxz00_9015); }  else 
{ /* Llib/date.scm 191 */BFALSE; } } } 
{ /* Llib/date.scm 191 */
obj_t BgL_index1995z00_2623;
BgL_index1995z00_2623 = 
BGl_search1990z00zz__datez00(BgL_l1989z00_2598, BgL_opt1988z00_20, BGl_keyword4507z00zz__datez00, ((long)1)); 
{ /* Llib/date.scm 191 */
bool_t BgL_testz00_9026;
{ /* Llib/date.scm 191 */
long BgL_n1z00_4633;
{ /* Llib/date.scm 191 */
obj_t BgL_auxz00_9027;
if(
INTEGERP(BgL_index1995z00_2623))
{ /* Llib/date.scm 191 */
BgL_auxz00_9027 = BgL_index1995z00_2623
; }  else 
{ 
obj_t BgL_auxz00_9030;
BgL_auxz00_9030 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8399)), BGl_string4527z00zz__datez00, BGl_string4372z00zz__datez00, BgL_index1995z00_2623); 
FAILURE(BgL_auxz00_9030,BFALSE,BFALSE);} 
BgL_n1z00_4633 = 
(long)CINT(BgL_auxz00_9027); } 
BgL_testz00_9026 = 
(BgL_n1z00_4633>=((long)0)); } 
if(BgL_testz00_9026)
{ 
int BgL_auxz00_9036;
{ /* Llib/date.scm 191 */
obj_t BgL_auxz00_9037;
{ /* Llib/date.scm 191 */
bool_t BgL_test4163z00_5796;
BgL_test4163z00_5796 = 
INTEGERP(BgL_index1995z00_2623); 
if(BgL_test4163z00_5796)
{ /* Llib/date.scm 191 */
BgL_auxz00_9037 = BgL_index1995z00_2623
; }  else 
{ 
obj_t BgL_auxz00_9040;
BgL_auxz00_9040 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8399)), BGl_string4527z00zz__datez00, BGl_string4473z00zz__datez00, BgL_index1995z00_2623); 
FAILURE(BgL_auxz00_9040,BFALSE,BFALSE);} } 
BgL_auxz00_9036 = 
CINT(BgL_auxz00_9037); } 
BgL_minz00_2605 = 
VECTOR_REF(BgL_opt1988z00_20,BgL_auxz00_9036); }  else 
{ /* Llib/date.scm 191 */BFALSE; } } } 
{ /* Llib/date.scm 191 */
obj_t BgL_index1996z00_2625;
BgL_index1996z00_2625 = 
BGl_search1990z00zz__datez00(BgL_l1989z00_2598, BgL_opt1988z00_20, BGl_keyword4509z00zz__datez00, ((long)1)); 
{ /* Llib/date.scm 191 */
bool_t BgL_testz00_9047;
{ /* Llib/date.scm 191 */
long BgL_n1z00_4635;
{ /* Llib/date.scm 191 */
obj_t BgL_auxz00_9048;
if(
INTEGERP(BgL_index1996z00_2625))
{ /* Llib/date.scm 191 */
BgL_auxz00_9048 = BgL_index1996z00_2625
; }  else 
{ 
obj_t BgL_auxz00_9051;
BgL_auxz00_9051 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8399)), BGl_string4527z00zz__datez00, BGl_string4372z00zz__datez00, BgL_index1996z00_2625); 
FAILURE(BgL_auxz00_9051,BFALSE,BFALSE);} 
BgL_n1z00_4635 = 
(long)CINT(BgL_auxz00_9048); } 
BgL_testz00_9047 = 
(BgL_n1z00_4635>=((long)0)); } 
if(BgL_testz00_9047)
{ 
int BgL_auxz00_9057;
{ /* Llib/date.scm 191 */
obj_t BgL_auxz00_9058;
{ /* Llib/date.scm 191 */
bool_t BgL_test4167z00_5800;
BgL_test4167z00_5800 = 
INTEGERP(BgL_index1996z00_2625); 
if(BgL_test4167z00_5800)
{ /* Llib/date.scm 191 */
BgL_auxz00_9058 = BgL_index1996z00_2625
; }  else 
{ 
obj_t BgL_auxz00_9061;
BgL_auxz00_9061 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8399)), BGl_string4527z00zz__datez00, BGl_string4473z00zz__datez00, BgL_index1996z00_2625); 
FAILURE(BgL_auxz00_9061,BFALSE,BFALSE);} } 
BgL_auxz00_9057 = 
CINT(BgL_auxz00_9058); } 
BgL_monthz00_2606 = 
VECTOR_REF(BgL_opt1988z00_20,BgL_auxz00_9057); }  else 
{ /* Llib/date.scm 191 */BFALSE; } } } 
{ /* Llib/date.scm 191 */
obj_t BgL_index1997z00_2627;
BgL_index1997z00_2627 = 
BGl_search1990z00zz__datez00(BgL_l1989z00_2598, BgL_opt1988z00_20, BGl_keyword4513z00zz__datez00, ((long)1)); 
{ /* Llib/date.scm 191 */
bool_t BgL_testz00_9068;
{ /* Llib/date.scm 191 */
long BgL_n1z00_4637;
{ /* Llib/date.scm 191 */
obj_t BgL_auxz00_9069;
if(
INTEGERP(BgL_index1997z00_2627))
{ /* Llib/date.scm 191 */
BgL_auxz00_9069 = BgL_index1997z00_2627
; }  else 
{ 
obj_t BgL_auxz00_9072;
BgL_auxz00_9072 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8399)), BGl_string4527z00zz__datez00, BGl_string4372z00zz__datez00, BgL_index1997z00_2627); 
FAILURE(BgL_auxz00_9072,BFALSE,BFALSE);} 
BgL_n1z00_4637 = 
(long)CINT(BgL_auxz00_9069); } 
BgL_testz00_9068 = 
(BgL_n1z00_4637>=((long)0)); } 
if(BgL_testz00_9068)
{ 
int BgL_auxz00_9078;
{ /* Llib/date.scm 191 */
obj_t BgL_auxz00_9079;
{ /* Llib/date.scm 191 */
bool_t BgL_test4171z00_5804;
BgL_test4171z00_5804 = 
INTEGERP(BgL_index1997z00_2627); 
if(BgL_test4171z00_5804)
{ /* Llib/date.scm 191 */
BgL_auxz00_9079 = BgL_index1997z00_2627
; }  else 
{ 
obj_t BgL_auxz00_9082;
BgL_auxz00_9082 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8399)), BGl_string4527z00zz__datez00, BGl_string4473z00zz__datez00, BgL_index1997z00_2627); 
FAILURE(BgL_auxz00_9082,BFALSE,BFALSE);} } 
BgL_auxz00_9078 = 
CINT(BgL_auxz00_9079); } 
BgL_secz00_2607 = 
VECTOR_REF(BgL_opt1988z00_20,BgL_auxz00_9078); }  else 
{ /* Llib/date.scm 191 */BFALSE; } } } 
{ /* Llib/date.scm 191 */
obj_t BgL_index1998z00_2629;
BgL_index1998z00_2629 = 
BGl_search1990z00zz__datez00(BgL_l1989z00_2598, BgL_opt1988z00_20, BGl_keyword4517z00zz__datez00, ((long)1)); 
{ /* Llib/date.scm 191 */
bool_t BgL_testz00_9089;
{ /* Llib/date.scm 191 */
long BgL_n1z00_4639;
{ /* Llib/date.scm 191 */
obj_t BgL_auxz00_9090;
if(
INTEGERP(BgL_index1998z00_2629))
{ /* Llib/date.scm 191 */
BgL_auxz00_9090 = BgL_index1998z00_2629
; }  else 
{ 
obj_t BgL_auxz00_9093;
BgL_auxz00_9093 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8399)), BGl_string4527z00zz__datez00, BGl_string4372z00zz__datez00, BgL_index1998z00_2629); 
FAILURE(BgL_auxz00_9093,BFALSE,BFALSE);} 
BgL_n1z00_4639 = 
(long)CINT(BgL_auxz00_9090); } 
BgL_testz00_9089 = 
(BgL_n1z00_4639>=((long)0)); } 
if(BgL_testz00_9089)
{ 
int BgL_auxz00_9099;
{ /* Llib/date.scm 191 */
obj_t BgL_auxz00_9100;
{ /* Llib/date.scm 191 */
bool_t BgL_test4175z00_5808;
BgL_test4175z00_5808 = 
INTEGERP(BgL_index1998z00_2629); 
if(BgL_test4175z00_5808)
{ /* Llib/date.scm 191 */
BgL_auxz00_9100 = BgL_index1998z00_2629
; }  else 
{ 
obj_t BgL_auxz00_9103;
BgL_auxz00_9103 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8399)), BGl_string4527z00zz__datez00, BGl_string4473z00zz__datez00, BgL_index1998z00_2629); 
FAILURE(BgL_auxz00_9103,BFALSE,BFALSE);} } 
BgL_auxz00_9099 = 
CINT(BgL_auxz00_9100); } 
BgL_yearz00_2608 = 
VECTOR_REF(BgL_opt1988z00_20,BgL_auxz00_9099); }  else 
{ /* Llib/date.scm 191 */BFALSE; } } } 
{ /* Llib/date.scm 191 */
obj_t BgL_arg3017z00_2631;
BgL_arg3017z00_2631 = 
VECTOR_REF(BgL_opt1988z00_20,
(int)(((long)0))); 
{ /* Llib/date.scm 191 */
obj_t BgL_dayz00_2632;
BgL_dayz00_2632 = BgL_dayz00_2603; 
{ /* Llib/date.scm 191 */
obj_t BgL_hourz00_2633;
BgL_hourz00_2633 = BgL_hourz00_2604; 
{ /* Llib/date.scm 191 */
obj_t BgL_minz00_2634;
BgL_minz00_2634 = BgL_minz00_2605; 
{ /* Llib/date.scm 191 */
obj_t BgL_monthz00_2635;
BgL_monthz00_2635 = BgL_monthz00_2606; 
{ /* Llib/date.scm 191 */
obj_t BgL_secz00_2636;
BgL_secz00_2636 = BgL_secz00_2607; 
return 
BGl_datezd2copyzd2zz__datez00(BgL_arg3017z00_2631, BgL_dayz00_2632, BgL_hourz00_2633, BgL_minz00_2634, BgL_monthz00_2635, BgL_secz00_2636, BgL_yearz00_2608);} } } } } } } } } } } } } } } } 
}



/* search1990 */
obj_t BGl_search1990z00zz__datez00(int BgL_l1989z00_5113, obj_t BgL_opt1988z00_5112, obj_t BgL_k1z00_2599, long BgL_iz00_2600)
{ AN_OBJECT;
{ /* Llib/date.scm 191 */
BGl_search1990z00zz__datez00:
if(
(BgL_iz00_2600==
(long)(BgL_l1989z00_5113)))
{ /* Llib/date.scm 191 */
return 
BINT(((long)-1));}  else 
{ /* Llib/date.scm 191 */
if(
(BgL_iz00_2600==
(
(long)(BgL_l1989z00_5113)-((long)1))))
{ /* Llib/date.scm 191 */
obj_t BgL_arg3020z00_2640;int BgL_arg3022z00_2642;
BgL_arg3020z00_2640 = BGl_symbol4525z00zz__datez00; 
BgL_arg3022z00_2642 = 
VECTOR_LENGTH(BgL_opt1988z00_5112); 
return 
BGl_errorz00zz__errorz00(BgL_arg3020z00_2640, BGl_string4528z00zz__datez00, 
BINT(BgL_arg3022z00_2642));}  else 
{ /* Llib/date.scm 191 */
obj_t BgL_vz00_2643;
BgL_vz00_2643 = 
VECTOR_REF(BgL_opt1988z00_5112,
(int)(BgL_iz00_2600)); 
if(
(BgL_vz00_2643==BgL_k1z00_2599))
{ /* Llib/date.scm 191 */
return 
BINT(
(BgL_iz00_2600+((long)1)));}  else 
{ 
long BgL_iz00_9129;
BgL_iz00_9129 = 
(BgL_iz00_2600+((long)2)); 
BgL_iz00_2600 = BgL_iz00_9129; 
goto BGl_search1990z00zz__datez00;} } } } 
}



/* date-copy */
BGL_EXPORTED_DEF obj_t BGl_datezd2copyzd2zz__datez00(obj_t BgL_datez00_13, obj_t BgL_dayz00_14, obj_t BgL_hourz00_15, obj_t BgL_minz00_16, obj_t BgL_monthz00_17, obj_t BgL_secz00_18, obj_t BgL_yearz00_19)
{ AN_OBJECT;
{ /* Llib/date.scm 191 */
{ /* Llib/date.scm 192 */
obj_t BgL_arg3026z00_2647;obj_t BgL_arg3027z00_2648;obj_t BgL_arg3028z00_2649;obj_t BgL_arg3029z00_2650;obj_t BgL_arg3030z00_2651;obj_t BgL_arg3031z00_2652;int BgL_arg3033z00_2654;
if(
CBOOL(BgL_secz00_18))
{ /* Llib/date.scm 192 */
BgL_arg3026z00_2647 = BgL_secz00_18; }  else 
{ /* Llib/date.scm 192 */
obj_t BgL_dz00_4651;
if(
BGL_DATEP(BgL_datez00_13))
{ /* Llib/date.scm 192 */
BgL_dz00_4651 = BgL_datez00_13; }  else 
{ 
obj_t BgL_auxz00_9135;
BgL_auxz00_9135 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8494)), BGl_string4526z00zz__datez00, BGl_string4529z00zz__datez00, BgL_datez00_13); 
FAILURE(BgL_auxz00_9135,BFALSE,BFALSE);} 
BgL_arg3026z00_2647 = 
BINT(
BGL_DATE_SECOND(BgL_dz00_4651)); } 
if(
CBOOL(BgL_minz00_16))
{ /* Llib/date.scm 193 */
BgL_arg3027z00_2648 = BgL_minz00_16; }  else 
{ /* Llib/date.scm 193 */
obj_t BgL_dz00_4652;
if(
BGL_DATEP(BgL_datez00_13))
{ /* Llib/date.scm 193 */
BgL_dz00_4652 = BgL_datez00_13; }  else 
{ 
obj_t BgL_auxz00_9145;
BgL_auxz00_9145 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8530)), BGl_string4526z00zz__datez00, BGl_string4529z00zz__datez00, BgL_datez00_13); 
FAILURE(BgL_auxz00_9145,BFALSE,BFALSE);} 
BgL_arg3027z00_2648 = 
BINT(
BGL_DATE_MINUTE(BgL_dz00_4652)); } 
if(
CBOOL(BgL_hourz00_15))
{ /* Llib/date.scm 194 */
BgL_arg3028z00_2649 = BgL_hourz00_15; }  else 
{ /* Llib/date.scm 194 */
obj_t BgL_dz00_4653;
if(
BGL_DATEP(BgL_datez00_13))
{ /* Llib/date.scm 194 */
BgL_dz00_4653 = BgL_datez00_13; }  else 
{ 
obj_t BgL_auxz00_9155;
BgL_auxz00_9155 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8565)), BGl_string4526z00zz__datez00, BGl_string4529z00zz__datez00, BgL_datez00_13); 
FAILURE(BgL_auxz00_9155,BFALSE,BFALSE);} 
BgL_arg3028z00_2649 = 
BINT(
BGL_DATE_HOUR(BgL_dz00_4653)); } 
if(
CBOOL(BgL_dayz00_14))
{ /* Llib/date.scm 195 */
BgL_arg3029z00_2650 = BgL_dayz00_14; }  else 
{ /* Llib/date.scm 195 */
obj_t BgL_dz00_4654;
if(
BGL_DATEP(BgL_datez00_13))
{ /* Llib/date.scm 195 */
BgL_dz00_4654 = BgL_datez00_13; }  else 
{ 
obj_t BgL_auxz00_9165;
BgL_auxz00_9165 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8598)), BGl_string4526z00zz__datez00, BGl_string4529z00zz__datez00, BgL_datez00_13); 
FAILURE(BgL_auxz00_9165,BFALSE,BFALSE);} 
BgL_arg3029z00_2650 = 
BINT(
BGL_DATE_DAY(BgL_dz00_4654)); } 
if(
CBOOL(BgL_monthz00_17))
{ /* Llib/date.scm 196 */
BgL_arg3030z00_2651 = BgL_monthz00_17; }  else 
{ /* Llib/date.scm 196 */
obj_t BgL_dz00_4655;
if(
BGL_DATEP(BgL_datez00_13))
{ /* Llib/date.scm 196 */
BgL_dz00_4655 = BgL_datez00_13; }  else 
{ 
obj_t BgL_auxz00_9175;
BgL_auxz00_9175 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8635)), BGl_string4526z00zz__datez00, BGl_string4529z00zz__datez00, BgL_datez00_13); 
FAILURE(BgL_auxz00_9175,BFALSE,BFALSE);} 
BgL_arg3030z00_2651 = 
BINT(
BGL_DATE_MONTH(BgL_dz00_4655)); } 
if(
CBOOL(BgL_yearz00_19))
{ /* Llib/date.scm 197 */
BgL_arg3031z00_2652 = BgL_yearz00_19; }  else 
{ /* Llib/date.scm 197 */
obj_t BgL_dz00_4656;
if(
BGL_DATEP(BgL_datez00_13))
{ /* Llib/date.scm 197 */
BgL_dz00_4656 = BgL_datez00_13; }  else 
{ 
obj_t BgL_auxz00_9185;
BgL_auxz00_9185 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8670)), BGl_string4526z00zz__datez00, BGl_string4529z00zz__datez00, BgL_datez00_13); 
FAILURE(BgL_auxz00_9185,BFALSE,BFALSE);} 
BgL_arg3031z00_2652 = 
BINT(
BGL_DATE_YEAR(BgL_dz00_4656)); } 
{ /* Llib/date.scm 200 */
obj_t BgL_dz00_4657;
if(
BGL_DATEP(BgL_datez00_13))
{ /* Llib/date.scm 200 */
BgL_dz00_4657 = BgL_datez00_13; }  else 
{ 
obj_t BgL_auxz00_9193;
BgL_auxz00_9193 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8719)), BGl_string4526z00zz__datez00, BGl_string4529z00zz__datez00, BgL_datez00_13); 
FAILURE(BgL_auxz00_9193,BFALSE,BFALSE);} 
BgL_arg3033z00_2654 = 
BGL_DATE_ISDST(BgL_dz00_4657); } 
{ /* Llib/date.scm 192 */
int BgL_auxz00_9243;int BgL_auxz00_9234;int BgL_auxz00_9225;int BgL_auxz00_9216;int BgL_auxz00_9207;int BgL_auxz00_9198;
{ /* Llib/date.scm 197 */
obj_t BgL_auxz00_9244;
if(
INTEGERP(BgL_arg3031z00_2652))
{ /* Llib/date.scm 197 */
BgL_auxz00_9244 = BgL_arg3031z00_2652
; }  else 
{ 
obj_t BgL_auxz00_9247;
BgL_auxz00_9247 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8675)), BGl_string4526z00zz__datez00, BGl_string4473z00zz__datez00, BgL_arg3031z00_2652); 
FAILURE(BgL_auxz00_9247,BFALSE,BFALSE);} 
BgL_auxz00_9243 = 
CINT(BgL_auxz00_9244); } 
{ /* Llib/date.scm 196 */
obj_t BgL_auxz00_9235;
if(
INTEGERP(BgL_arg3030z00_2651))
{ /* Llib/date.scm 196 */
BgL_auxz00_9235 = BgL_arg3030z00_2651
; }  else 
{ 
obj_t BgL_auxz00_9238;
BgL_auxz00_9238 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8640)), BGl_string4526z00zz__datez00, BGl_string4473z00zz__datez00, BgL_arg3030z00_2651); 
FAILURE(BgL_auxz00_9238,BFALSE,BFALSE);} 
BgL_auxz00_9234 = 
CINT(BgL_auxz00_9235); } 
{ /* Llib/date.scm 195 */
obj_t BgL_auxz00_9226;
if(
INTEGERP(BgL_arg3029z00_2650))
{ /* Llib/date.scm 195 */
BgL_auxz00_9226 = BgL_arg3029z00_2650
; }  else 
{ 
obj_t BgL_auxz00_9229;
BgL_auxz00_9229 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8603)), BGl_string4526z00zz__datez00, BGl_string4473z00zz__datez00, BgL_arg3029z00_2650); 
FAILURE(BgL_auxz00_9229,BFALSE,BFALSE);} 
BgL_auxz00_9225 = 
CINT(BgL_auxz00_9226); } 
{ /* Llib/date.scm 194 */
obj_t BgL_auxz00_9217;
if(
INTEGERP(BgL_arg3028z00_2649))
{ /* Llib/date.scm 194 */
BgL_auxz00_9217 = BgL_arg3028z00_2649
; }  else 
{ 
obj_t BgL_auxz00_9220;
BgL_auxz00_9220 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8570)), BGl_string4526z00zz__datez00, BGl_string4473z00zz__datez00, BgL_arg3028z00_2649); 
FAILURE(BgL_auxz00_9220,BFALSE,BFALSE);} 
BgL_auxz00_9216 = 
CINT(BgL_auxz00_9217); } 
{ /* Llib/date.scm 193 */
obj_t BgL_auxz00_9208;
if(
INTEGERP(BgL_arg3027z00_2648))
{ /* Llib/date.scm 193 */
BgL_auxz00_9208 = BgL_arg3027z00_2648
; }  else 
{ 
obj_t BgL_auxz00_9211;
BgL_auxz00_9211 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8535)), BGl_string4526z00zz__datez00, BGl_string4473z00zz__datez00, BgL_arg3027z00_2648); 
FAILURE(BgL_auxz00_9211,BFALSE,BFALSE);} 
BgL_auxz00_9207 = 
CINT(BgL_auxz00_9208); } 
{ /* Llib/date.scm 192 */
obj_t BgL_auxz00_9199;
if(
INTEGERP(BgL_arg3026z00_2647))
{ /* Llib/date.scm 192 */
BgL_auxz00_9199 = BgL_arg3026z00_2647
; }  else 
{ 
obj_t BgL_auxz00_9202;
BgL_auxz00_9202 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8499)), BGl_string4526z00zz__datez00, BGl_string4473z00zz__datez00, BgL_arg3026z00_2647); 
FAILURE(BgL_auxz00_9202,BFALSE,BFALSE);} 
BgL_auxz00_9198 = 
CINT(BgL_auxz00_9199); } 
return 
bgl_make_date(BgL_auxz00_9198, BgL_auxz00_9207, BgL_auxz00_9216, BgL_auxz00_9225, BgL_auxz00_9234, BgL_auxz00_9243, ((long)0), ((bool_t)0), BgL_arg3033z00_2654);} } } 
}



/* integer->second */
BGL_EXPORTED_DEF long BGl_integerzd2ze3secondz31zz__datez00(long BgL_iz00_22)
{ AN_OBJECT;
{ /* Llib/date.scm 205 */
return 
(long)(BgL_iz00_22);} 
}



/* _integer->second */
obj_t BGl__integerzd2ze3secondz31zz__datez00(obj_t BgL_envz00_5047, obj_t BgL_iz00_5048)
{ AN_OBJECT;
{ /* Llib/date.scm 205 */
{ /* Llib/date.scm 206 */
long BgL_auxz00_9254;
{ /* Llib/date.scm 206 */
long BgL_iz00_5966;
{ /* Llib/date.scm 206 */
obj_t BgL_auxz00_9255;
if(
INTEGERP(BgL_iz00_5048))
{ /* Llib/date.scm 206 */
BgL_auxz00_9255 = BgL_iz00_5048
; }  else 
{ 
obj_t BgL_auxz00_9258;
BgL_auxz00_9258 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)8994)), BGl_string4530z00zz__datez00, BGl_string4372z00zz__datez00, BgL_iz00_5048); 
FAILURE(BgL_auxz00_9258,BFALSE,BFALSE);} 
BgL_iz00_5966 = 
(long)CINT(BgL_auxz00_9255); } 
BgL_auxz00_9254 = 
(long)(BgL_iz00_5966); } 
return 
make_belong(BgL_auxz00_9254);} } 
}



/* date-nanosecond */
BGL_EXPORTED_DEF long BGl_datezd2nanosecondzd2zz__datez00(obj_t BgL_dz00_23)
{ AN_OBJECT;
{ /* Llib/date.scm 211 */
return ((long)0);} 
}



/* _date-nanosecond */
obj_t BGl__datezd2nanosecondzd2zz__datez00(obj_t BgL_envz00_5049, obj_t BgL_dz00_5050)
{ AN_OBJECT;
{ /* Llib/date.scm 211 */
{ /* Llib/date.scm 211 */
long BgL_auxz00_9265;
{ /* Llib/date.scm 211 */
obj_t BgL_dz00_5967;
if(
BGL_DATEP(BgL_dz00_5050))
{ /* Llib/date.scm 211 */
BgL_dz00_5967 = BgL_dz00_5050; }  else 
{ 
obj_t BgL_auxz00_9268;
BgL_auxz00_9268 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)9245)), BGl_string4531z00zz__datez00, BGl_string4529z00zz__datez00, BgL_dz00_5050); 
FAILURE(BgL_auxz00_9268,BFALSE,BFALSE);} 
BgL_auxz00_9265 = ((long)0); } 
return 
make_belong(BgL_auxz00_9265);} } 
}



/* date-second */
BGL_EXPORTED_DEF int BGl_datezd2secondzd2zz__datez00(obj_t BgL_dz00_24)
{ AN_OBJECT;
{ /* Llib/date.scm 217 */
return 
BGL_DATE_SECOND(BgL_dz00_24);} 
}



/* _date-second */
obj_t BGl__datezd2secondzd2zz__datez00(obj_t BgL_envz00_5051, obj_t BgL_dz00_5052)
{ AN_OBJECT;
{ /* Llib/date.scm 217 */
{ /* Llib/date.scm 218 */
int BgL_auxz00_9274;
{ /* Llib/date.scm 218 */
obj_t BgL_dz00_5968;
if(
BGL_DATEP(BgL_dz00_5052))
{ /* Llib/date.scm 218 */
BgL_dz00_5968 = BgL_dz00_5052; }  else 
{ 
obj_t BgL_auxz00_9277;
BgL_auxz00_9277 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)9557)), BGl_string4532z00zz__datez00, BGl_string4529z00zz__datez00, BgL_dz00_5052); 
FAILURE(BgL_auxz00_9277,BFALSE,BFALSE);} 
BgL_auxz00_9274 = 
BGL_DATE_SECOND(BgL_dz00_5968); } 
return 
BINT(BgL_auxz00_9274);} } 
}



/* date-minute */
BGL_EXPORTED_DEF int BGl_datezd2minutezd2zz__datez00(obj_t BgL_dz00_25)
{ AN_OBJECT;
{ /* Llib/date.scm 223 */
return 
BGL_DATE_MINUTE(BgL_dz00_25);} 
}



/* _date-minute */
obj_t BGl__datezd2minutezd2zz__datez00(obj_t BgL_envz00_5053, obj_t BgL_dz00_5054)
{ AN_OBJECT;
{ /* Llib/date.scm 223 */
{ /* Llib/date.scm 224 */
int BgL_auxz00_9284;
{ /* Llib/date.scm 224 */
obj_t BgL_dz00_5969;
if(
BGL_DATEP(BgL_dz00_5054))
{ /* Llib/date.scm 224 */
BgL_dz00_5969 = BgL_dz00_5054; }  else 
{ 
obj_t BgL_auxz00_9287;
BgL_auxz00_9287 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)9839)), BGl_string4533z00zz__datez00, BGl_string4529z00zz__datez00, BgL_dz00_5054); 
FAILURE(BgL_auxz00_9287,BFALSE,BFALSE);} 
BgL_auxz00_9284 = 
BGL_DATE_MINUTE(BgL_dz00_5969); } 
return 
BINT(BgL_auxz00_9284);} } 
}



/* date-hour */
BGL_EXPORTED_DEF int BGl_datezd2hourzd2zz__datez00(obj_t BgL_dz00_26)
{ AN_OBJECT;
{ /* Llib/date.scm 229 */
return 
BGL_DATE_HOUR(BgL_dz00_26);} 
}



/* _date-hour */
obj_t BGl__datezd2hourzd2zz__datez00(obj_t BgL_envz00_5055, obj_t BgL_dz00_5056)
{ AN_OBJECT;
{ /* Llib/date.scm 229 */
{ /* Llib/date.scm 230 */
int BgL_auxz00_9294;
{ /* Llib/date.scm 230 */
obj_t BgL_dz00_5970;
if(
BGL_DATEP(BgL_dz00_5056))
{ /* Llib/date.scm 230 */
BgL_dz00_5970 = BgL_dz00_5056; }  else 
{ 
obj_t BgL_auxz00_9297;
BgL_auxz00_9297 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)10119)), BGl_string4534z00zz__datez00, BGl_string4529z00zz__datez00, BgL_dz00_5056); 
FAILURE(BgL_auxz00_9297,BFALSE,BFALSE);} 
BgL_auxz00_9294 = 
BGL_DATE_HOUR(BgL_dz00_5970); } 
return 
BINT(BgL_auxz00_9294);} } 
}



/* date-day */
BGL_EXPORTED_DEF int BGl_datezd2dayzd2zz__datez00(obj_t BgL_dz00_27)
{ AN_OBJECT;
{ /* Llib/date.scm 235 */
return 
BGL_DATE_DAY(BgL_dz00_27);} 
}



/* _date-day */
obj_t BGl__datezd2dayzd2zz__datez00(obj_t BgL_envz00_5057, obj_t BgL_dz00_5058)
{ AN_OBJECT;
{ /* Llib/date.scm 235 */
{ /* Llib/date.scm 236 */
int BgL_auxz00_9304;
{ /* Llib/date.scm 236 */
obj_t BgL_dz00_5971;
if(
BGL_DATEP(BgL_dz00_5058))
{ /* Llib/date.scm 236 */
BgL_dz00_5971 = BgL_dz00_5058; }  else 
{ 
obj_t BgL_auxz00_9307;
BgL_auxz00_9307 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)10396)), BGl_string4535z00zz__datez00, BGl_string4529z00zz__datez00, BgL_dz00_5058); 
FAILURE(BgL_auxz00_9307,BFALSE,BFALSE);} 
BgL_auxz00_9304 = 
BGL_DATE_DAY(BgL_dz00_5971); } 
return 
BINT(BgL_auxz00_9304);} } 
}



/* date-week-day */
BGL_EXPORTED_DEF int BGl_datezd2weekzd2dayz00zz__datez00(obj_t BgL_dz00_28)
{ AN_OBJECT;
{ /* Llib/date.scm 241 */
return 
BGL_DATE_WDAY(BgL_dz00_28);} 
}



/* _date-week-day */
obj_t BGl__datezd2weekzd2dayz00zz__datez00(obj_t BgL_envz00_5059, obj_t BgL_dz00_5060)
{ AN_OBJECT;
{ /* Llib/date.scm 241 */
{ /* Llib/date.scm 242 */
int BgL_auxz00_9314;
{ /* Llib/date.scm 242 */
obj_t BgL_dz00_5972;
if(
BGL_DATEP(BgL_dz00_5060))
{ /* Llib/date.scm 242 */
BgL_dz00_5972 = BgL_dz00_5060; }  else 
{ 
obj_t BgL_auxz00_9317;
BgL_auxz00_9317 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)10677)), BGl_string4536z00zz__datez00, BGl_string4529z00zz__datez00, BgL_dz00_5060); 
FAILURE(BgL_auxz00_9317,BFALSE,BFALSE);} 
BgL_auxz00_9314 = 
BGL_DATE_WDAY(BgL_dz00_5972); } 
return 
BINT(BgL_auxz00_9314);} } 
}



/* date-wday */
BGL_EXPORTED_DEF int BGl_datezd2wdayzd2zz__datez00(obj_t BgL_dz00_29)
{ AN_OBJECT;
{ /* Llib/date.scm 247 */
return 
BGL_DATE_WDAY(BgL_dz00_29);} 
}



/* _date-wday */
obj_t BGl__datezd2wdayzd2zz__datez00(obj_t BgL_envz00_5061, obj_t BgL_dz00_5062)
{ AN_OBJECT;
{ /* Llib/date.scm 247 */
{ /* Llib/date.scm 248 */
int BgL_auxz00_9324;
{ /* Llib/date.scm 248 */
obj_t BgL_dz00_5973;
if(
BGL_DATEP(BgL_dz00_5062))
{ /* Llib/date.scm 248 */
BgL_dz00_5973 = BgL_dz00_5062; }  else 
{ 
obj_t BgL_auxz00_9327;
BgL_auxz00_9327 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)10955)), BGl_string4537z00zz__datez00, BGl_string4529z00zz__datez00, BgL_dz00_5062); 
FAILURE(BgL_auxz00_9327,BFALSE,BFALSE);} 
BgL_auxz00_9324 = 
BGL_DATE_WDAY(BgL_dz00_5973); } 
return 
BINT(BgL_auxz00_9324);} } 
}



/* date-year-day */
BGL_EXPORTED_DEF int BGl_datezd2yearzd2dayz00zz__datez00(obj_t BgL_dz00_30)
{ AN_OBJECT;
{ /* Llib/date.scm 253 */
return 
BGL_DATE_YDAY(BgL_dz00_30);} 
}



/* _date-year-day */
obj_t BGl__datezd2yearzd2dayz00zz__datez00(obj_t BgL_envz00_5063, obj_t BgL_dz00_5064)
{ AN_OBJECT;
{ /* Llib/date.scm 253 */
{ /* Llib/date.scm 254 */
int BgL_auxz00_9334;
{ /* Llib/date.scm 254 */
obj_t BgL_dz00_5974;
if(
BGL_DATEP(BgL_dz00_5064))
{ /* Llib/date.scm 254 */
BgL_dz00_5974 = BgL_dz00_5064; }  else 
{ 
obj_t BgL_auxz00_9337;
BgL_auxz00_9337 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)11237)), BGl_string4538z00zz__datez00, BGl_string4529z00zz__datez00, BgL_dz00_5064); 
FAILURE(BgL_auxz00_9337,BFALSE,BFALSE);} 
BgL_auxz00_9334 = 
BGL_DATE_YDAY(BgL_dz00_5974); } 
return 
BINT(BgL_auxz00_9334);} } 
}



/* date-yday */
BGL_EXPORTED_DEF int BGl_datezd2ydayzd2zz__datez00(obj_t BgL_dz00_31)
{ AN_OBJECT;
{ /* Llib/date.scm 259 */
return 
BGL_DATE_YDAY(BgL_dz00_31);} 
}



/* _date-yday */
obj_t BGl__datezd2ydayzd2zz__datez00(obj_t BgL_envz00_5065, obj_t BgL_dz00_5066)
{ AN_OBJECT;
{ /* Llib/date.scm 259 */
{ /* Llib/date.scm 260 */
int BgL_auxz00_9344;
{ /* Llib/date.scm 260 */
obj_t BgL_dz00_5975;
if(
BGL_DATEP(BgL_dz00_5066))
{ /* Llib/date.scm 260 */
BgL_dz00_5975 = BgL_dz00_5066; }  else 
{ 
obj_t BgL_auxz00_9347;
BgL_auxz00_9347 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)11515)), BGl_string4539z00zz__datez00, BGl_string4529z00zz__datez00, BgL_dz00_5066); 
FAILURE(BgL_auxz00_9347,BFALSE,BFALSE);} 
BgL_auxz00_9344 = 
BGL_DATE_YDAY(BgL_dz00_5975); } 
return 
BINT(BgL_auxz00_9344);} } 
}



/* date-month */
BGL_EXPORTED_DEF int BGl_datezd2monthzd2zz__datez00(obj_t BgL_dz00_32)
{ AN_OBJECT;
{ /* Llib/date.scm 265 */
return 
BGL_DATE_MONTH(BgL_dz00_32);} 
}



/* _date-month */
obj_t BGl__datezd2monthzd2zz__datez00(obj_t BgL_envz00_5067, obj_t BgL_dz00_5068)
{ AN_OBJECT;
{ /* Llib/date.scm 265 */
{ /* Llib/date.scm 266 */
int BgL_auxz00_9354;
{ /* Llib/date.scm 266 */
obj_t BgL_dz00_5976;
if(
BGL_DATEP(BgL_dz00_5068))
{ /* Llib/date.scm 266 */
BgL_dz00_5976 = BgL_dz00_5068; }  else 
{ 
obj_t BgL_auxz00_9357;
BgL_auxz00_9357 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)11794)), BGl_string4540z00zz__datez00, BGl_string4529z00zz__datez00, BgL_dz00_5068); 
FAILURE(BgL_auxz00_9357,BFALSE,BFALSE);} 
BgL_auxz00_9354 = 
BGL_DATE_MONTH(BgL_dz00_5976); } 
return 
BINT(BgL_auxz00_9354);} } 
}



/* date-year */
BGL_EXPORTED_DEF int BGl_datezd2yearzd2zz__datez00(obj_t BgL_dz00_33)
{ AN_OBJECT;
{ /* Llib/date.scm 271 */
return 
BGL_DATE_YEAR(BgL_dz00_33);} 
}



/* _date-year */
obj_t BGl__datezd2yearzd2zz__datez00(obj_t BgL_envz00_5069, obj_t BgL_dz00_5070)
{ AN_OBJECT;
{ /* Llib/date.scm 271 */
{ /* Llib/date.scm 272 */
int BgL_auxz00_9364;
{ /* Llib/date.scm 272 */
obj_t BgL_dz00_5977;
if(
BGL_DATEP(BgL_dz00_5070))
{ /* Llib/date.scm 272 */
BgL_dz00_5977 = BgL_dz00_5070; }  else 
{ 
obj_t BgL_auxz00_9367;
BgL_auxz00_9367 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)12073)), BGl_string4541z00zz__datez00, BGl_string4529z00zz__datez00, BgL_dz00_5070); 
FAILURE(BgL_auxz00_9367,BFALSE,BFALSE);} 
BgL_auxz00_9364 = 
BGL_DATE_YEAR(BgL_dz00_5977); } 
return 
BINT(BgL_auxz00_9364);} } 
}



/* date-timezone */
BGL_EXPORTED_DEF long BGl_datezd2timeza7onez75zz__datez00(obj_t BgL_dz00_34)
{ AN_OBJECT;
{ /* Llib/date.scm 277 */
return 
BGL_DATE_TIMEZONE(BgL_dz00_34);} 
}



/* _date-timezone */
obj_t BGl__datezd2timeza7onez75zz__datez00(obj_t BgL_envz00_5071, obj_t BgL_dz00_5072)
{ AN_OBJECT;
{ /* Llib/date.scm 277 */
{ /* Llib/date.scm 278 */
long BgL_auxz00_9374;
{ /* Llib/date.scm 278 */
obj_t BgL_dz00_5978;
if(
BGL_DATEP(BgL_dz00_5072))
{ /* Llib/date.scm 278 */
BgL_dz00_5978 = BgL_dz00_5072; }  else 
{ 
obj_t BgL_auxz00_9377;
BgL_auxz00_9377 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)12355)), BGl_string4542z00zz__datez00, BGl_string4529z00zz__datez00, BgL_dz00_5072); 
FAILURE(BgL_auxz00_9377,BFALSE,BFALSE);} 
BgL_auxz00_9374 = 
BGL_DATE_TIMEZONE(BgL_dz00_5978); } 
return 
BINT(BgL_auxz00_9374);} } 
}



/* date-zone-offset */
BGL_EXPORTED_DEF long BGl_datezd2za7onezd2offsetza7zz__datez00(obj_t BgL_dz00_35)
{ AN_OBJECT;
{ /* Llib/date.scm 283 */
{ /* Llib/date.scm 284 */
long BgL_arg3035z00_5979;
BgL_arg3035z00_5979 = 
BGL_DATE_TIMEZONE(BgL_dz00_35); 
return 
(((long)3600)*BgL_arg3035z00_5979);} } 
}



/* _date-zone-offset */
obj_t BGl__datezd2za7onezd2offsetza7zz__datez00(obj_t BgL_envz00_5073, obj_t BgL_dz00_5074)
{ AN_OBJECT;
{ /* Llib/date.scm 283 */
{ /* Llib/date.scm 284 */
long BgL_auxz00_9385;
{ /* Llib/date.scm 284 */
long BgL_res4589z00_5982;
{ /* Llib/date.scm 284 */
obj_t BgL_dz00_5980;
if(
BGL_DATEP(BgL_dz00_5074))
{ /* Llib/date.scm 284 */
BgL_dz00_5980 = BgL_dz00_5074; }  else 
{ 
obj_t BgL_auxz00_9388;
BgL_auxz00_9388 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)12644)), BGl_string4543z00zz__datez00, BGl_string4529z00zz__datez00, BgL_dz00_5074); 
FAILURE(BgL_auxz00_9388,BFALSE,BFALSE);} 
{ /* Llib/date.scm 284 */
long BgL_arg3035z00_5981;
BgL_arg3035z00_5981 = 
BGL_DATE_TIMEZONE(BgL_dz00_5980); 
BgL_res4589z00_5982 = 
(((long)3600)*BgL_arg3035z00_5981); } } 
BgL_auxz00_9385 = BgL_res4589z00_5982; } 
return 
BINT(BgL_auxz00_9385);} } 
}



/* date-is-dst */
BGL_EXPORTED_DEF int BGl_datezd2iszd2dstz00zz__datez00(obj_t BgL_dz00_36)
{ AN_OBJECT;
{ /* Llib/date.scm 289 */
return 
BGL_DATE_ISDST(BgL_dz00_36);} 
}



/* _date-is-dst */
obj_t BGl__datezd2iszd2dstz00zz__datez00(obj_t BgL_envz00_5075, obj_t BgL_dz00_5076)
{ AN_OBJECT;
{ /* Llib/date.scm 289 */
{ /* Llib/date.scm 290 */
int BgL_auxz00_9396;
{ /* Llib/date.scm 290 */
obj_t BgL_dz00_5983;
if(
BGL_DATEP(BgL_dz00_5076))
{ /* Llib/date.scm 290 */
BgL_dz00_5983 = BgL_dz00_5076; }  else 
{ 
obj_t BgL_auxz00_9399;
BgL_auxz00_9399 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)12939)), BGl_string4544z00zz__datez00, BGl_string4529z00zz__datez00, BgL_dz00_5076); 
FAILURE(BgL_auxz00_9399,BFALSE,BFALSE);} 
BgL_auxz00_9396 = 
BGL_DATE_ISDST(BgL_dz00_5983); } 
return 
BINT(BgL_auxz00_9396);} } 
}



/* current-seconds */
BGL_EXPORTED_DEF long BGl_currentzd2secondszd2zz__datez00()
{ AN_OBJECT;
{ /* Llib/date.scm 295 */
return 
bgl_current_seconds();} 
}



/* _current-seconds */
obj_t BGl__currentzd2secondszd2zz__datez00(obj_t BgL_envz00_5077)
{ AN_OBJECT;
{ /* Llib/date.scm 295 */
{ /* Llib/date.scm 296 */
long BgL_auxz00_9406;
BgL_auxz00_9406 = 
bgl_current_seconds(); 
return 
make_belong(BgL_auxz00_9406);} } 
}



/* current-microseconds */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_currentzd2microsecondszd2zz__datez00()
{ AN_OBJECT;
{ /* Llib/date.scm 301 */
return 
bgl_current_microseconds();} 
}



/* _current-microseconds */
obj_t BGl__currentzd2microsecondszd2zz__datez00(obj_t BgL_envz00_5078)
{ AN_OBJECT;
{ /* Llib/date.scm 301 */
return 
make_bllong(
bgl_current_microseconds());} 
}



/* current-date */
BGL_EXPORTED_DEF obj_t BGl_currentzd2datezd2zz__datez00()
{ AN_OBJECT;
{ /* Llib/date.scm 307 */
return 
bgl_seconds_to_date(
bgl_current_seconds());} 
}



/* _current-date */
obj_t BGl__currentzd2datezd2zz__datez00(obj_t BgL_envz00_5079)
{ AN_OBJECT;
{ /* Llib/date.scm 307 */
return 
bgl_seconds_to_date(
bgl_current_seconds());} 
}



/* seconds->date */
BGL_EXPORTED_DEF obj_t BGl_secondszd2ze3datez31zz__datez00(long BgL_elongz00_37)
{ AN_OBJECT;
{ /* Llib/date.scm 313 */
return 
bgl_seconds_to_date(BgL_elongz00_37);} 
}



/* _seconds->date */
obj_t BGl__secondszd2ze3datez31zz__datez00(obj_t BgL_envz00_5080, obj_t BgL_elongz00_5081)
{ AN_OBJECT;
{ /* Llib/date.scm 313 */
{ /* Llib/date.scm 314 */
long BgL_elongz00_5984;
{ /* Llib/date.scm 314 */
obj_t BgL_auxz00_9417;
if(
ELONGP(BgL_elongz00_5081))
{ /* Llib/date.scm 314 */
BgL_auxz00_9417 = BgL_elongz00_5081
; }  else 
{ 
obj_t BgL_auxz00_9420;
BgL_auxz00_9420 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)14105)), BGl_string4545z00zz__datez00, BGl_string4546z00zz__datez00, BgL_elongz00_5081); 
FAILURE(BgL_auxz00_9420,BFALSE,BFALSE);} 
BgL_elongz00_5984 = 
BELONG_TO_LONG(BgL_auxz00_9417); } 
return 
bgl_seconds_to_date(BgL_elongz00_5984);} } 
}



/* date->seconds */
BGL_EXPORTED_DEF long BGl_datezd2ze3secondsz31zz__datez00(obj_t BgL_datez00_38)
{ AN_OBJECT;
{ /* Llib/date.scm 319 */
return 
bgl_date_to_seconds(BgL_datez00_38);} 
}



/* _date->seconds */
obj_t BGl__datezd2ze3secondsz31zz__datez00(obj_t BgL_envz00_5082, obj_t BgL_datez00_5083)
{ AN_OBJECT;
{ /* Llib/date.scm 319 */
{ /* Llib/date.scm 320 */
long BgL_auxz00_9427;
{ /* Llib/date.scm 320 */
obj_t BgL_datez00_5985;
if(
BGL_DATEP(BgL_datez00_5083))
{ /* Llib/date.scm 320 */
BgL_datez00_5985 = BgL_datez00_5083; }  else 
{ 
obj_t BgL_auxz00_9430;
BgL_auxz00_9430 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)14396)), BGl_string4547z00zz__datez00, BGl_string4529z00zz__datez00, BgL_datez00_5083); 
FAILURE(BgL_auxz00_9430,BFALSE,BFALSE);} 
BgL_auxz00_9427 = 
bgl_date_to_seconds(BgL_datez00_5985); } 
return 
make_belong(BgL_auxz00_9427);} } 
}



/* date->string */
BGL_EXPORTED_DEF obj_t BGl_datezd2ze3stringz31zz__datez00(obj_t BgL_datez00_39)
{ AN_OBJECT;
{ /* Llib/date.scm 325 */
return 
bgl_seconds_to_string(
bgl_date_to_seconds(BgL_datez00_39));} 
}



/* _date->string */
obj_t BGl__datezd2ze3stringz31zz__datez00(obj_t BgL_envz00_5084, obj_t BgL_datez00_5085)
{ AN_OBJECT;
{ /* Llib/date.scm 325 */
{ /* Llib/date.scm 326 */
obj_t BgL_datez00_5986;
if(
BGL_DATEP(BgL_datez00_5085))
{ /* Llib/date.scm 326 */
BgL_datez00_5986 = BgL_datez00_5085; }  else 
{ 
obj_t BgL_auxz00_9440;
BgL_auxz00_9440 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)14700)), BGl_string4548z00zz__datez00, BGl_string4529z00zz__datez00, BgL_datez00_5085); 
FAILURE(BgL_auxz00_9440,BFALSE,BFALSE);} 
return 
bgl_seconds_to_string(
bgl_date_to_seconds(BgL_datez00_5986));} } 
}



/* date->utc-string */
BGL_EXPORTED_DEF obj_t BGl_datezd2ze3utczd2stringze3zz__datez00(obj_t BgL_datez00_40)
{ AN_OBJECT;
{ /* Llib/date.scm 331 */
return 
bgl_seconds_to_utc_string(
bgl_date_to_seconds(BgL_datez00_40));} 
}



/* _date->utc-string */
obj_t BGl__datezd2ze3utczd2stringze3zz__datez00(obj_t BgL_envz00_5086, obj_t BgL_datez00_5087)
{ AN_OBJECT;
{ /* Llib/date.scm 331 */
{ /* Llib/date.scm 332 */
obj_t BgL_datez00_5987;
if(
BGL_DATEP(BgL_datez00_5087))
{ /* Llib/date.scm 332 */
BgL_datez00_5987 = BgL_datez00_5087; }  else 
{ 
obj_t BgL_auxz00_9450;
BgL_auxz00_9450 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)15009)), BGl_string4549z00zz__datez00, BGl_string4529z00zz__datez00, BgL_datez00_5087); 
FAILURE(BgL_auxz00_9450,BFALSE,BFALSE);} 
return 
bgl_seconds_to_utc_string(
bgl_date_to_seconds(BgL_datez00_5987));} } 
}



/* seconds->string */
BGL_EXPORTED_DEF obj_t BGl_secondszd2ze3stringz31zz__datez00(long BgL_secz00_41)
{ AN_OBJECT;
{ /* Llib/date.scm 337 */
return 
bgl_seconds_to_string(BgL_secz00_41);} 
}



/* _seconds->string */
obj_t BGl__secondszd2ze3stringz31zz__datez00(obj_t BgL_envz00_5088, obj_t BgL_secz00_5089)
{ AN_OBJECT;
{ /* Llib/date.scm 337 */
{ /* Llib/date.scm 338 */
long BgL_secz00_5988;
{ /* Llib/date.scm 338 */
obj_t BgL_auxz00_9457;
if(
ELONGP(BgL_secz00_5089))
{ /* Llib/date.scm 338 */
BgL_auxz00_9457 = BgL_secz00_5089
; }  else 
{ 
obj_t BgL_auxz00_9460;
BgL_auxz00_9460 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)15295)), BGl_string4550z00zz__datez00, BGl_string4546z00zz__datez00, BgL_secz00_5089); 
FAILURE(BgL_auxz00_9460,BFALSE,BFALSE);} 
BgL_secz00_5988 = 
BELONG_TO_LONG(BgL_auxz00_9457); } 
return 
bgl_seconds_to_string(BgL_secz00_5988);} } 
}



/* seconds->utc-string */
BGL_EXPORTED_DEF obj_t BGl_secondszd2ze3utczd2stringze3zz__datez00(long BgL_secz00_42)
{ AN_OBJECT;
{ /* Llib/date.scm 343 */
return 
bgl_seconds_to_utc_string(BgL_secz00_42);} 
}



/* _seconds->utc-string */
obj_t BGl__secondszd2ze3utczd2stringze3zz__datez00(obj_t BgL_envz00_5090, obj_t BgL_secz00_5091)
{ AN_OBJECT;
{ /* Llib/date.scm 343 */
{ /* Llib/date.scm 344 */
long BgL_secz00_5989;
{ /* Llib/date.scm 344 */
obj_t BgL_auxz00_9467;
if(
ELONGP(BgL_secz00_5091))
{ /* Llib/date.scm 344 */
BgL_auxz00_9467 = BgL_secz00_5091
; }  else 
{ 
obj_t BgL_auxz00_9470;
BgL_auxz00_9470 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)15594)), BGl_string4551z00zz__datez00, BGl_string4546z00zz__datez00, BgL_secz00_5091); 
FAILURE(BgL_auxz00_9470,BFALSE,BFALSE);} 
BgL_secz00_5989 = 
BELONG_TO_LONG(BgL_auxz00_9467); } 
return 
bgl_seconds_to_utc_string(BgL_secz00_5989);} } 
}



/* day-seconds */
BGL_EXPORTED_DEF long BGl_dayzd2secondszd2zz__datez00()
{ AN_OBJECT;
{ /* Llib/date.scm 349 */
return ((long)86400);} 
}



/* _day-seconds */
obj_t BGl__dayzd2secondszd2zz__datez00(obj_t BgL_envz00_5092)
{ AN_OBJECT;
{ /* Llib/date.scm 349 */
return 
make_belong(((long)86400));} 
}



/* day-name */
BGL_EXPORTED_DEF obj_t BGl_dayzd2namezd2zz__datez00(int BgL_dayz00_43)
{ AN_OBJECT;
{ /* Llib/date.scm 355 */
if(
(
(long)(BgL_dayz00_43)<((long)1)))
{ /* Llib/date.scm 358 */
obj_t BgL_aux4244z00_5877;
BgL_aux4244z00_5877 = 
BGl_errorz00zz__errorz00(BGl_symbol4552z00zz__datez00, BGl_string4554z00zz__datez00, 
BINT(BgL_dayz00_43)); 
if(
STRINGP(BgL_aux4244z00_5877))
{ /* Llib/date.scm 358 */
return BgL_aux4244z00_5877;}  else 
{ 
obj_t BgL_auxz00_9484;
BgL_auxz00_9484 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)16175)), BGl_string4553z00zz__datez00, BGl_string4555z00zz__datez00, BgL_aux4244z00_5877); 
FAILURE(BgL_auxz00_9484,BFALSE,BFALSE);} }  else 
{ /* Llib/date.scm 357 */
if(
(
(long)(BgL_dayz00_43)>((long)7)))
{ /* Llib/date.scm 360 */
long BgL_arg3041z00_2668;
{ /* Llib/date.scm 360 */
long BgL_arg3043z00_2670;
{ /* Llib/date.scm 360 */
long BgL_auxz00_9491;
BgL_auxz00_9491 = 
(long)(BgL_dayz00_43); 
BgL_arg3043z00_2670 = 
(BgL_auxz00_9491%((long)7)); } 
BgL_arg3041z00_2668 = 
(((long)1)+BgL_arg3043z00_2670); } 
return 
bgl_day_name(
(int)(BgL_arg3041z00_2668));}  else 
{ /* Llib/date.scm 359 */
return 
bgl_day_name(BgL_dayz00_43);} } } 
}



/* _day-name */
obj_t BGl__dayzd2namezd2zz__datez00(obj_t BgL_envz00_5093, obj_t BgL_dayz00_5094)
{ AN_OBJECT;
{ /* Llib/date.scm 355 */
{ /* Llib/date.scm 357 */
int BgL_auxz00_9498;
{ /* Llib/date.scm 357 */
obj_t BgL_auxz00_9499;
if(
INTEGERP(BgL_dayz00_5094))
{ /* Llib/date.scm 357 */
BgL_auxz00_9499 = BgL_dayz00_5094
; }  else 
{ 
obj_t BgL_auxz00_9502;
BgL_auxz00_9502 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)16156)), BGl_string4556z00zz__datez00, BGl_string4473z00zz__datez00, BgL_dayz00_5094); 
FAILURE(BgL_auxz00_9502,BFALSE,BFALSE);} 
BgL_auxz00_9498 = 
CINT(BgL_auxz00_9499); } 
return 
BGl_dayzd2namezd2zz__datez00(BgL_auxz00_9498);} } 
}



/* day-aname */
BGL_EXPORTED_DEF obj_t BGl_dayzd2anamezd2zz__datez00(int BgL_dayz00_44)
{ AN_OBJECT;
{ /* Llib/date.scm 367 */
if(
(
(long)(BgL_dayz00_44)<((long)1)))
{ /* Llib/date.scm 370 */
obj_t BgL_aux4248z00_5881;
BgL_aux4248z00_5881 = 
BGl_errorz00zz__errorz00(BGl_symbol4557z00zz__datez00, BGl_string4554z00zz__datez00, 
BINT(BgL_dayz00_44)); 
if(
STRINGP(BgL_aux4248z00_5881))
{ /* Llib/date.scm 370 */
return BgL_aux4248z00_5881;}  else 
{ 
obj_t BgL_auxz00_9515;
BgL_auxz00_9515 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)16618)), BGl_string4558z00zz__datez00, BGl_string4555z00zz__datez00, BgL_aux4248z00_5881); 
FAILURE(BgL_auxz00_9515,BFALSE,BFALSE);} }  else 
{ /* Llib/date.scm 369 */
if(
(
(long)(BgL_dayz00_44)>((long)7)))
{ /* Llib/date.scm 372 */
long BgL_arg3046z00_2673;
{ /* Llib/date.scm 372 */
long BgL_arg3048z00_2675;
{ /* Llib/date.scm 372 */
long BgL_auxz00_9522;
BgL_auxz00_9522 = 
(long)(BgL_dayz00_44); 
BgL_arg3048z00_2675 = 
(BgL_auxz00_9522%((long)7)); } 
BgL_arg3046z00_2673 = 
(((long)1)+BgL_arg3048z00_2675); } 
return 
bgl_day_aname(
(int)(BgL_arg3046z00_2673));}  else 
{ /* Llib/date.scm 371 */
return 
bgl_day_aname(BgL_dayz00_44);} } } 
}



/* _day-aname */
obj_t BGl__dayzd2anamezd2zz__datez00(obj_t BgL_envz00_5095, obj_t BgL_dayz00_5096)
{ AN_OBJECT;
{ /* Llib/date.scm 367 */
{ /* Llib/date.scm 369 */
int BgL_auxz00_9529;
{ /* Llib/date.scm 369 */
obj_t BgL_auxz00_9530;
if(
INTEGERP(BgL_dayz00_5096))
{ /* Llib/date.scm 369 */
BgL_auxz00_9530 = BgL_dayz00_5096
; }  else 
{ 
obj_t BgL_auxz00_9533;
BgL_auxz00_9533 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)16599)), BGl_string4559z00zz__datez00, BGl_string4473z00zz__datez00, BgL_dayz00_5096); 
FAILURE(BgL_auxz00_9533,BFALSE,BFALSE);} 
BgL_auxz00_9529 = 
CINT(BgL_auxz00_9530); } 
return 
BGl_dayzd2anamezd2zz__datez00(BgL_auxz00_9529);} } 
}



/* month-name */
BGL_EXPORTED_DEF obj_t BGl_monthzd2namezd2zz__datez00(int BgL_monthz00_45)
{ AN_OBJECT;
{ /* Llib/date.scm 379 */
if(
(
(long)(BgL_monthz00_45)<((long)1)))
{ /* Llib/date.scm 382 */
obj_t BgL_aux4252z00_5885;
BgL_aux4252z00_5885 = 
BGl_errorz00zz__errorz00(BGl_symbol4560z00zz__datez00, BGl_string4562z00zz__datez00, 
BINT(BgL_monthz00_45)); 
if(
STRINGP(BgL_aux4252z00_5885))
{ /* Llib/date.scm 382 */
return BgL_aux4252z00_5885;}  else 
{ 
obj_t BgL_auxz00_9546;
BgL_auxz00_9546 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)17069)), BGl_string4563z00zz__datez00, BGl_string4555z00zz__datez00, BgL_aux4252z00_5885); 
FAILURE(BgL_auxz00_9546,BFALSE,BFALSE);} }  else 
{ /* Llib/date.scm 381 */
if(
(
(long)(BgL_monthz00_45)>((long)12)))
{ /* Llib/date.scm 384 */
long BgL_arg3051z00_2678;
{ /* Llib/date.scm 384 */
long BgL_arg3053z00_2680;
{ /* Llib/date.scm 384 */
long BgL_auxz00_9553;
BgL_auxz00_9553 = 
(long)(BgL_monthz00_45); 
BgL_arg3053z00_2680 = 
(BgL_auxz00_9553%((long)12)); } 
BgL_arg3051z00_2678 = 
(((long)1)+BgL_arg3053z00_2680); } 
return 
bgl_month_name(
(int)(BgL_arg3051z00_2678));}  else 
{ /* Llib/date.scm 383 */
return 
bgl_month_name(BgL_monthz00_45);} } } 
}



/* _month-name */
obj_t BGl__monthzd2namezd2zz__datez00(obj_t BgL_envz00_5097, obj_t BgL_monthz00_5098)
{ AN_OBJECT;
{ /* Llib/date.scm 379 */
{ /* Llib/date.scm 381 */
int BgL_auxz00_9560;
{ /* Llib/date.scm 381 */
obj_t BgL_auxz00_9561;
if(
INTEGERP(BgL_monthz00_5098))
{ /* Llib/date.scm 381 */
BgL_auxz00_9561 = BgL_monthz00_5098
; }  else 
{ 
obj_t BgL_auxz00_9564;
BgL_auxz00_9564 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)17048)), BGl_string4564z00zz__datez00, BGl_string4473z00zz__datez00, BgL_monthz00_5098); 
FAILURE(BgL_auxz00_9564,BFALSE,BFALSE);} 
BgL_auxz00_9560 = 
CINT(BgL_auxz00_9561); } 
return 
BGl_monthzd2namezd2zz__datez00(BgL_auxz00_9560);} } 
}



/* month-aname */
BGL_EXPORTED_DEF obj_t BGl_monthzd2anamezd2zz__datez00(int BgL_monthz00_46)
{ AN_OBJECT;
{ /* Llib/date.scm 391 */
if(
(
(long)(BgL_monthz00_46)<((long)1)))
{ /* Llib/date.scm 394 */
obj_t BgL_aux4256z00_5889;
BgL_aux4256z00_5889 = 
BGl_errorz00zz__errorz00(BGl_symbol4560z00zz__datez00, BGl_string4562z00zz__datez00, 
BINT(BgL_monthz00_46)); 
if(
STRINGP(BgL_aux4256z00_5889))
{ /* Llib/date.scm 394 */
return BgL_aux4256z00_5889;}  else 
{ 
obj_t BgL_auxz00_9577;
BgL_auxz00_9577 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)17537)), BGl_string4561z00zz__datez00, BGl_string4555z00zz__datez00, BgL_aux4256z00_5889); 
FAILURE(BgL_auxz00_9577,BFALSE,BFALSE);} }  else 
{ /* Llib/date.scm 393 */
if(
(
(long)(BgL_monthz00_46)>((long)12)))
{ /* Llib/date.scm 396 */
long BgL_arg3056z00_2683;
{ /* Llib/date.scm 396 */
long BgL_arg3058z00_2685;
{ /* Llib/date.scm 396 */
long BgL_auxz00_9584;
BgL_auxz00_9584 = 
(long)(BgL_monthz00_46); 
BgL_arg3058z00_2685 = 
(BgL_auxz00_9584%((long)12)); } 
BgL_arg3056z00_2683 = 
(((long)1)+BgL_arg3058z00_2685); } 
return 
bgl_month_aname(
(int)(BgL_arg3056z00_2683));}  else 
{ /* Llib/date.scm 395 */
return 
bgl_month_aname(BgL_monthz00_46);} } } 
}



/* _month-aname */
obj_t BGl__monthzd2anamezd2zz__datez00(obj_t BgL_envz00_5099, obj_t BgL_monthz00_5100)
{ AN_OBJECT;
{ /* Llib/date.scm 391 */
{ /* Llib/date.scm 393 */
int BgL_auxz00_9591;
{ /* Llib/date.scm 393 */
obj_t BgL_auxz00_9592;
if(
INTEGERP(BgL_monthz00_5100))
{ /* Llib/date.scm 393 */
BgL_auxz00_9592 = BgL_monthz00_5100
; }  else 
{ 
obj_t BgL_auxz00_9595;
BgL_auxz00_9595 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)17516)), BGl_string4565z00zz__datez00, BGl_string4473z00zz__datez00, BgL_monthz00_5100); 
FAILURE(BgL_auxz00_9595,BFALSE,BFALSE);} 
BgL_auxz00_9591 = 
CINT(BgL_auxz00_9592); } 
return 
BGl_monthzd2anamezd2zz__datez00(BgL_auxz00_9591);} } 
}



/* date-month-length */
BGL_EXPORTED_DEF int BGl_datezd2monthzd2lengthz00zz__datez00(obj_t BgL_dz00_47)
{ AN_OBJECT;
{ /* Llib/date.scm 408 */
{ /* Llib/date.scm 409 */
int BgL_mz00_2686;
BgL_mz00_2686 = 
BGL_DATE_MONTH(BgL_dz00_47); 
if(
(
(long)(BgL_mz00_2686)==((long)2)))
{ /* Llib/date.scm 411 */
bool_t BgL_testz00_9605;
{ /* Llib/date.scm 411 */
int BgL_arg3061z00_2689;
BgL_arg3061z00_2689 = 
BGL_DATE_YEAR(BgL_dz00_47); 
{ /* Llib/date.scm 411 */
bool_t BgL_res3478z00_4727;
{ /* Llib/date.scm 411 */
bool_t BgL_testz00_9607;
{ /* Llib/date.scm 411 */
long BgL_arg3069z00_4707;
{ /* Llib/date.scm 411 */
long BgL_auxz00_9608;
BgL_auxz00_9608 = 
(long)(BgL_arg3061z00_2689); 
BgL_arg3069z00_4707 = 
(BgL_auxz00_9608%((long)4)); } 
BgL_testz00_9607 = 
(BgL_arg3069z00_4707==((long)0)); } 
if(BgL_testz00_9607)
{ /* Llib/date.scm 411 */
bool_t BgL__ortest_1833z00_4709;
{ /* Llib/date.scm 411 */
bool_t BgL_testz00_9612;
{ /* Llib/date.scm 411 */
long BgL_arg3067z00_4711;
{ /* Llib/date.scm 411 */
long BgL_auxz00_9613;
BgL_auxz00_9613 = 
(long)(BgL_arg3061z00_2689); 
BgL_arg3067z00_4711 = 
(BgL_auxz00_9613%((long)100)); } 
BgL_testz00_9612 = 
(BgL_arg3067z00_4711==((long)0)); } 
if(BgL_testz00_9612)
{ /* Llib/date.scm 411 */
BgL__ortest_1833z00_4709 = ((bool_t)0); }  else 
{ /* Llib/date.scm 411 */
BgL__ortest_1833z00_4709 = ((bool_t)1); } } 
if(BgL__ortest_1833z00_4709)
{ /* Llib/date.scm 411 */
BgL_res3478z00_4727 = BgL__ortest_1833z00_4709; }  else 
{ /* Llib/date.scm 411 */
long BgL_arg3064z00_4713;
{ /* Llib/date.scm 411 */
long BgL_auxz00_9618;
BgL_auxz00_9618 = 
(long)(BgL_arg3061z00_2689); 
BgL_arg3064z00_4713 = 
(BgL_auxz00_9618%((long)400)); } 
BgL_res3478z00_4727 = 
(BgL_arg3064z00_4713==((long)0)); } }  else 
{ /* Llib/date.scm 411 */
BgL_res3478z00_4727 = ((bool_t)0); } } 
BgL_testz00_9605 = BgL_res3478z00_4727; } } 
if(BgL_testz00_9605)
{ /* Llib/date.scm 411 */
return 
(int)(((long)29));}  else 
{ /* Llib/date.scm 411 */
return 
(int)(((long)28));} }  else 
{ /* Llib/date.scm 412 */
long BgL_arg3063z00_2690;
BgL_arg3063z00_2690 = 
(
(long)(BgL_mz00_2686)-((long)1)); 
{ /* Llib/date.scm 412 */
obj_t BgL_vectorz00_4730;int BgL_kz00_4731;
BgL_vectorz00_4730 = BGl_za2monthzd2lengthsza2zd2zz__datez00; 
BgL_kz00_4731 = 
(int)(BgL_arg3063z00_2690); 
{ /* Llib/date.scm 412 */
int BgL_l3510z00_5134;
BgL_l3510z00_5134 = 
VECTOR_LENGTH(BgL_vectorz00_4730); 
if(
BOUND_CHECK(BgL_kz00_4731, BgL_l3510z00_5134))
{ /* Llib/date.scm 412 */
obj_t BgL_auxz00_9630;
{ /* Llib/date.scm 412 */
obj_t BgL_aux4260z00_5893;
BgL_aux4260z00_5893 = 
VECTOR_REF(BgL_vectorz00_4730,BgL_kz00_4731); 
if(
INTEGERP(BgL_aux4260z00_5893))
{ /* Llib/date.scm 412 */
BgL_auxz00_9630 = BgL_aux4260z00_5893
; }  else 
{ 
obj_t BgL_auxz00_9634;
BgL_auxz00_9634 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)18353)), BGl_string4566z00zz__datez00, BGl_string4473z00zz__datez00, BgL_aux4260z00_5893); 
FAILURE(BgL_auxz00_9634,BFALSE,BFALSE);} } 
return 
CINT(BgL_auxz00_9630);}  else 
{ 
obj_t BgL_auxz00_9639;
BgL_auxz00_9639 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)18353)), BGl_string4499z00zz__datez00, 
BINT(BgL_kz00_4731), BgL_vectorz00_4730); 
FAILURE(BgL_auxz00_9639,BFALSE,BFALSE);} } } } } } 
}



/* _date-month-length */
obj_t BGl__datezd2monthzd2lengthz00zz__datez00(obj_t BgL_envz00_5101, obj_t BgL_dz00_5102)
{ AN_OBJECT;
{ /* Llib/date.scm 408 */
{ /* Llib/date.scm 409 */
int BgL_auxz00_9644;
{ /* Llib/date.scm 409 */
obj_t BgL_auxz00_9645;
if(
BGL_DATEP(BgL_dz00_5102))
{ /* Llib/date.scm 409 */
BgL_auxz00_9645 = BgL_dz00_5102
; }  else 
{ 
obj_t BgL_auxz00_9648;
BgL_auxz00_9648 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)18263)), BGl_string4567z00zz__datez00, BGl_string4529z00zz__datez00, BgL_dz00_5102); 
FAILURE(BgL_auxz00_9648,BFALSE,BFALSE);} 
BgL_auxz00_9644 = 
BGl_datezd2monthzd2lengthz00zz__datez00(BgL_auxz00_9645); } 
return 
BINT(BgL_auxz00_9644);} } 
}



/* leap-year? */
BGL_EXPORTED_DEF bool_t BGl_leapzd2yearzf3z21zz__datez00(int BgL_yearz00_48)
{ AN_OBJECT;
{ /* Llib/date.scm 417 */
{ /* Llib/date.scm 418 */
bool_t BgL_testz00_9654;
{ /* Llib/date.scm 418 */
long BgL_arg3069z00_5990;
{ /* Llib/date.scm 418 */
long BgL_auxz00_9655;
BgL_auxz00_9655 = 
(long)(BgL_yearz00_48); 
BgL_arg3069z00_5990 = 
(BgL_auxz00_9655%((long)4)); } 
BgL_testz00_9654 = 
(BgL_arg3069z00_5990==((long)0)); } 
if(BgL_testz00_9654)
{ /* Llib/date.scm 418 */
bool_t BgL__ortest_1833z00_5991;
{ /* Llib/date.scm 418 */
bool_t BgL_testz00_9659;
{ /* Llib/date.scm 418 */
long BgL_arg3067z00_5992;
{ /* Llib/date.scm 418 */
long BgL_auxz00_9660;
BgL_auxz00_9660 = 
(long)(BgL_yearz00_48); 
BgL_arg3067z00_5992 = 
(BgL_auxz00_9660%((long)100)); } 
BgL_testz00_9659 = 
(BgL_arg3067z00_5992==((long)0)); } 
if(BgL_testz00_9659)
{ /* Llib/date.scm 418 */
BgL__ortest_1833z00_5991 = ((bool_t)0); }  else 
{ /* Llib/date.scm 418 */
BgL__ortest_1833z00_5991 = ((bool_t)1); } } 
if(BgL__ortest_1833z00_5991)
{ /* Llib/date.scm 418 */
return BgL__ortest_1833z00_5991;}  else 
{ /* Llib/date.scm 418 */
long BgL_arg3064z00_5993;
{ /* Llib/date.scm 418 */
long BgL_auxz00_9665;
BgL_auxz00_9665 = 
(long)(BgL_yearz00_48); 
BgL_arg3064z00_5993 = 
(BgL_auxz00_9665%((long)400)); } 
return 
(BgL_arg3064z00_5993==((long)0));} }  else 
{ /* Llib/date.scm 418 */
return ((bool_t)0);} } } 
}



/* _leap-year? */
obj_t BGl__leapzd2yearzf3z21zz__datez00(obj_t BgL_envz00_5103, obj_t BgL_yearz00_5104)
{ AN_OBJECT;
{ /* Llib/date.scm 417 */
{ /* Llib/date.scm 418 */
bool_t BgL_auxz00_9669;
{ /* Llib/date.scm 418 */
int BgL_yearz00_5994;
{ /* Llib/date.scm 418 */
obj_t BgL_auxz00_9670;
if(
INTEGERP(BgL_yearz00_5104))
{ /* Llib/date.scm 418 */
BgL_auxz00_9670 = BgL_yearz00_5104
; }  else 
{ 
obj_t BgL_auxz00_9673;
BgL_auxz00_9673 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)18664)), BGl_string4568z00zz__datez00, BGl_string4473z00zz__datez00, BgL_yearz00_5104); 
FAILURE(BgL_auxz00_9673,BFALSE,BFALSE);} 
BgL_yearz00_5994 = 
CINT(BgL_auxz00_9670); } 
{ /* Llib/date.scm 418 */
bool_t BgL_testz00_9678;
{ /* Llib/date.scm 418 */
long BgL_arg3069z00_5995;
{ /* Llib/date.scm 418 */
long BgL_auxz00_9679;
BgL_auxz00_9679 = 
(long)(BgL_yearz00_5994); 
BgL_arg3069z00_5995 = 
(BgL_auxz00_9679%((long)4)); } 
BgL_testz00_9678 = 
(BgL_arg3069z00_5995==((long)0)); } 
if(BgL_testz00_9678)
{ /* Llib/date.scm 418 */
bool_t BgL__ortest_1833z00_5996;
{ /* Llib/date.scm 418 */
bool_t BgL_testz00_9683;
{ /* Llib/date.scm 418 */
long BgL_arg3067z00_5997;
{ /* Llib/date.scm 418 */
long BgL_auxz00_9684;
BgL_auxz00_9684 = 
(long)(BgL_yearz00_5994); 
BgL_arg3067z00_5997 = 
(BgL_auxz00_9684%((long)100)); } 
BgL_testz00_9683 = 
(BgL_arg3067z00_5997==((long)0)); } 
if(BgL_testz00_9683)
{ /* Llib/date.scm 418 */
BgL__ortest_1833z00_5996 = ((bool_t)0); }  else 
{ /* Llib/date.scm 418 */
BgL__ortest_1833z00_5996 = ((bool_t)1); } } 
if(BgL__ortest_1833z00_5996)
{ /* Llib/date.scm 418 */
BgL_auxz00_9669 = BgL__ortest_1833z00_5996
; }  else 
{ /* Llib/date.scm 418 */
long BgL_arg3064z00_5998;
{ /* Llib/date.scm 418 */
long BgL_auxz00_9689;
BgL_auxz00_9689 = 
(long)(BgL_yearz00_5994); 
BgL_arg3064z00_5998 = 
(BgL_auxz00_9689%((long)400)); } 
BgL_auxz00_9669 = 
(BgL_arg3064z00_5998==((long)0)); } }  else 
{ /* Llib/date.scm 418 */
BgL_auxz00_9669 = ((bool_t)0)
; } } } 
return 
BBOOL(BgL_auxz00_9669);} } 
}



/* rfc2822-date->date */
BGL_EXPORTED_DEF obj_t BGl_rfc2822zd2datezd2ze3dateze3zz__datez00(obj_t BgL_stringz00_49)
{ AN_OBJECT;
{ /* Llib/date.scm 425 */
{ /* Llib/date.scm 426 */
obj_t BgL_portz00_2700;
{ /* Ieee/port.scm 376 */

BgL_portz00_2700 = 
BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BgL_stringz00_49, 
BINT(((long)0))); } 
{ /* Llib/date.scm 427 */
obj_t BgL_val1834z00_2701;
BgL_val1834z00_2701 = 
BGl_zc3exitza33074ze3z83zz__datez00(BgL_portz00_2700); 
{ /* Llib/date.scm 429 */
obj_t BgL_portz00_4755;
if(
INPUT_PORTP(BgL_portz00_2700))
{ /* Llib/date.scm 429 */
BgL_portz00_4755 = BgL_portz00_2700; }  else 
{ 
obj_t BgL_auxz00_9699;
BgL_auxz00_9699 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)19142)), BGl_string4569z00zz__datez00, BGl_string4368z00zz__datez00, BgL_portz00_2700); 
FAILURE(BgL_auxz00_9699,BFALSE,BFALSE);} 
bgl_close_input_port(BgL_portz00_4755); } 
if(
CBOOL(
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val1834z00_2701)))
{ /* Llib/date.scm 429 */
obj_t BgL_arg3072z00_2703;obj_t BgL_arg3073z00_2704;
{ /* Llib/date.scm 429 */
obj_t BgL_pairz00_4756;
if(
PAIRP(BgL_val1834z00_2701))
{ /* Llib/date.scm 429 */
BgL_pairz00_4756 = BgL_val1834z00_2701; }  else 
{ 
obj_t BgL_auxz00_9709;
BgL_auxz00_9709 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)19124)), BGl_string4569z00zz__datez00, BGl_string4570z00zz__datez00, BgL_val1834z00_2701); 
FAILURE(BgL_auxz00_9709,BFALSE,BFALSE);} 
BgL_arg3072z00_2703 = 
CAR(BgL_pairz00_4756); } 
BgL_arg3073z00_2704 = 
CDR(BgL_val1834z00_2701); 
{ /* Llib/date.scm 429 */
obj_t BgL_aux4272z00_5905;
BgL_aux4272z00_5905 = 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg3072z00_2703, BgL_arg3073z00_2704); 
if(
BGL_DATEP(BgL_aux4272z00_5905))
{ /* Llib/date.scm 429 */
return BgL_aux4272z00_5905;}  else 
{ 
obj_t BgL_auxz00_9718;
BgL_auxz00_9718 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)19124)), BGl_string4569z00zz__datez00, BGl_string4529z00zz__datez00, BgL_aux4272z00_5905); 
FAILURE(BgL_auxz00_9718,BFALSE,BFALSE);} } }  else 
{ /* Llib/date.scm 429 */
if(
BGL_DATEP(BgL_val1834z00_2701))
{ /* Llib/date.scm 429 */
return BgL_val1834z00_2701;}  else 
{ 
obj_t BgL_auxz00_9724;
BgL_auxz00_9724 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)19124)), BGl_string4569z00zz__datez00, BGl_string4529z00zz__datez00, BgL_val1834z00_2701); 
FAILURE(BgL_auxz00_9724,BFALSE,BFALSE);} } } } } 
}



/* <exit:3074> */
obj_t BGl_zc3exitza33074ze3z83zz__datez00(obj_t BgL_portz00_5111)
{ AN_OBJECT;
{ /* Llib/date.scm 429 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit1835z00_2706;
if( SET_EXIT(BgL_an_exit1835z00_2706) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit1835z00_2706 = 
(void *)jmpbuf; 
{ /* Llib/date.scm 429 */

PUSH_EXIT(BgL_an_exit1835z00_2706, ((long)0)); 
{ /* Llib/date.scm 428 */
obj_t BgL_val1836z00_2707;
{ /* Llib/date.scm 428 */
obj_t BgL_res3479z00_4754;
{ /* Llib/date.scm 428 */
obj_t BgL_ipz00_4753;
if(
INPUT_PORTP(BgL_portz00_5111))
{ /* Llib/date.scm 428 */
BgL_ipz00_4753 = BgL_portz00_5111; }  else 
{ 
obj_t BgL_auxz00_9733;
BgL_auxz00_9733 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)19116)), BGl_string4571z00zz__datez00, BGl_string4368z00zz__datez00, BgL_portz00_5111); 
FAILURE(BgL_auxz00_9733,BFALSE,BFALSE);} 
{ /* Llib/date.scm 428 */
obj_t BgL_funz00_5911;
BgL_funz00_5911 = BGl_dayzd2ofzd2weekzd2grammarzd2zz__datez00; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_5911, ((long)1)))
{ /* Llib/date.scm 428 */
obj_t BgL_aux4279z00_5912;
BgL_aux4279z00_5912 = 
PROCEDURE_ENTRY(BgL_funz00_5911)(BGl_dayzd2ofzd2weekzd2grammarzd2zz__datez00, BgL_ipz00_4753, BEOA); 
if(
BGL_DATEP(BgL_aux4279z00_5912))
{ /* Llib/date.scm 428 */
BgL_res3479z00_4754 = BgL_aux4279z00_5912; }  else 
{ 
obj_t BgL_auxz00_9743;
BgL_auxz00_9743 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)19096)), BGl_string4571z00zz__datez00, BGl_string4529z00zz__datez00, BgL_aux4279z00_5912); 
FAILURE(BgL_auxz00_9743,BFALSE,BFALSE);} }  else 
{ /* Llib/date.scm 428 */
FAILURE(BGl_string4572z00zz__datez00,BGl_list4573z00zz__datez00,BgL_funz00_5911);} } } 
BgL_val1836z00_2707 = BgL_res3479z00_4754; } 
POP_EXIT(); 
return BgL_val1836z00_2707;} } 
} } 
}



/* _rfc2822-date->date */
obj_t BGl__rfc2822zd2datezd2ze3dateze3zz__datez00(obj_t BgL_envz00_5105, obj_t BgL_stringz00_5106)
{ AN_OBJECT;
{ /* Llib/date.scm 425 */
{ /* Llib/date.scm 426 */
obj_t BgL_auxz00_9749;
if(
STRINGP(BgL_stringz00_5106))
{ /* Llib/date.scm 426 */
BgL_auxz00_9749 = BgL_stringz00_5106
; }  else 
{ 
obj_t BgL_auxz00_9752;
BgL_auxz00_9752 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)19031)), BGl_string4578z00zz__datez00, BGl_string4555z00zz__datez00, BgL_stringz00_5106); 
FAILURE(BgL_auxz00_9752,BFALSE,BFALSE);} 
return 
BGl_rfc2822zd2datezd2ze3dateze3zz__datez00(BgL_auxz00_9749);} } 
}



/* rfc2822-parse-date */
BGL_EXPORTED_DEF obj_t BGl_rfc2822zd2parsezd2datez00zz__datez00(obj_t BgL_ipz00_50)
{ AN_OBJECT;
{ /* Llib/date.scm 434 */
{ /* Llib/date.scm 435 */
obj_t BgL_funz00_5918;
BgL_funz00_5918 = BGl_dayzd2ofzd2weekzd2grammarzd2zz__datez00; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_5918, ((long)1)))
{ /* Llib/date.scm 435 */
obj_t BgL_aux4285z00_5919;
BgL_aux4285z00_5919 = 
PROCEDURE_ENTRY(BgL_funz00_5918)(BGl_dayzd2ofzd2weekzd2grammarzd2zz__datez00, BgL_ipz00_50, BEOA); 
if(
BGL_DATEP(BgL_aux4285z00_5919))
{ /* Llib/date.scm 435 */
return BgL_aux4285z00_5919;}  else 
{ 
obj_t BgL_auxz00_9763;
BgL_auxz00_9763 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)19421)), BGl_string4370z00zz__datez00, BGl_string4529z00zz__datez00, BgL_aux4285z00_5919); 
FAILURE(BgL_auxz00_9763,BFALSE,BFALSE);} }  else 
{ /* Llib/date.scm 435 */
FAILURE(BGl_string4579z00zz__datez00,BGl_list4573z00zz__datez00,BgL_funz00_5918);} } } 
}



/* _rfc2822-parse-date */
obj_t BGl__rfc2822zd2parsezd2datez00zz__datez00(obj_t BgL_envz00_5107, obj_t BgL_ipz00_5108)
{ AN_OBJECT;
{ /* Llib/date.scm 434 */
{ /* Llib/date.scm 435 */
obj_t BgL_auxz00_9768;
if(
INPUT_PORTP(BgL_ipz00_5108))
{ /* Llib/date.scm 435 */
BgL_auxz00_9768 = BgL_ipz00_5108
; }  else 
{ 
obj_t BgL_auxz00_9771;
BgL_auxz00_9771 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)19421)), BGl_string4580z00zz__datez00, BGl_string4368z00zz__datez00, BgL_ipz00_5108); 
FAILURE(BgL_auxz00_9771,BFALSE,BFALSE);} 
return 
BGl_rfc2822zd2parsezd2datez00zz__datez00(BgL_auxz00_9768);} } 
}



/* date->rfc2822-date */
BGL_EXPORTED_DEF obj_t BGl_datezd2ze3rfc2822zd2dateze3zz__datez00(obj_t BgL_datez00_51)
{ AN_OBJECT;
{ /* Llib/date.scm 440 */
{ 
obj_t BgL_datez00_2747;long BgL_timeza7oneza7_2748;
{ /* Llib/date.scm 463 */
bool_t BgL_testz00_9776;
{ /* Llib/date.scm 463 */
int BgL_arg3089z00_2736;
BgL_arg3089z00_2736 = 
BGL_DATE_ISDST(BgL_datez00_51); 
BgL_testz00_9776 = 
(
(long)(BgL_arg3089z00_2736)>((long)0)); } 
if(BgL_testz00_9776)
{ /* Llib/date.scm 464 */
obj_t BgL_dateuz00_2713;
{ /* Llib/date.scm 464 */
int BgL_arg3079z00_2718;int BgL_arg3081z00_2719;int BgL_arg3082z00_2720;int BgL_arg3083z00_2721;int BgL_arg3084z00_2722;int BgL_arg3085z00_2723;
BgL_arg3079z00_2718 = 
BGL_DATE_SECOND(BgL_datez00_51); 
BgL_arg3081z00_2719 = 
BGL_DATE_MINUTE(BgL_datez00_51); 
BgL_arg3082z00_2720 = 
BGL_DATE_HOUR(BgL_datez00_51); 
BgL_arg3083z00_2721 = 
BGL_DATE_DAY(BgL_datez00_51); 
BgL_arg3084z00_2722 = 
BGL_DATE_MONTH(BgL_datez00_51); 
BgL_arg3085z00_2723 = 
BGL_DATE_YEAR(BgL_datez00_51); 
{ /* Llib/date.scm 464 */
obj_t BgL_dayz00_4767;obj_t BgL_dstz00_4768;obj_t BgL_hourz00_4769;obj_t BgL_minz00_4770;obj_t BgL_monthz00_4771;obj_t BgL_secz00_4773;obj_t BgL_timeza7oneza7_4774;obj_t BgL_yearz00_4775;
BgL_dayz00_4767 = 
BINT(BgL_arg3083z00_2721); 
BgL_dstz00_4768 = 
BINT(((long)0)); 
BgL_hourz00_4769 = 
BINT(BgL_arg3082z00_2720); 
BgL_minz00_4770 = 
BINT(BgL_arg3081z00_2719); 
BgL_monthz00_4771 = 
BINT(BgL_arg3084z00_2722); 
BgL_secz00_4773 = 
BINT(BgL_arg3079z00_2718); 
BgL_timeza7oneza7_4774 = 
BINT(((long)0)); 
BgL_yearz00_4775 = 
BINT(BgL_arg3085z00_2723); 
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_timeza7oneza7_4774))
{ /* Llib/date.scm 464 */
int BgL_auxz00_9859;long BgL_auxz00_9850;int BgL_auxz00_9841;int BgL_auxz00_9832;int BgL_auxz00_9823;int BgL_auxz00_9814;int BgL_auxz00_9805;int BgL_auxz00_9796;
{ /* Llib/date.scm 464 */
obj_t BgL_auxz00_9860;
if(
INTEGERP(BgL_dstz00_4768))
{ /* Llib/date.scm 464 */
BgL_auxz00_9860 = BgL_dstz00_4768
; }  else 
{ 
obj_t BgL_auxz00_9863;
BgL_auxz00_9863 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)20369)), BGl_string4584z00zz__datez00, BGl_string4473z00zz__datez00, BgL_dstz00_4768); 
FAILURE(BgL_auxz00_9863,BFALSE,BFALSE);} 
BgL_auxz00_9859 = 
CINT(BgL_auxz00_9860); } 
{ /* Llib/date.scm 464 */
obj_t BgL_auxz00_9851;
if(
INTEGERP(BgL_timeza7oneza7_4774))
{ /* Llib/date.scm 464 */
BgL_auxz00_9851 = BgL_timeza7oneza7_4774
; }  else 
{ 
obj_t BgL_auxz00_9854;
BgL_auxz00_9854 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)20369)), BGl_string4584z00zz__datez00, BGl_string4372z00zz__datez00, BgL_timeza7oneza7_4774); 
FAILURE(BgL_auxz00_9854,BFALSE,BFALSE);} 
BgL_auxz00_9850 = 
(long)CINT(BgL_auxz00_9851); } 
{ /* Llib/date.scm 464 */
obj_t BgL_auxz00_9842;
if(
INTEGERP(BgL_yearz00_4775))
{ /* Llib/date.scm 464 */
BgL_auxz00_9842 = BgL_yearz00_4775
; }  else 
{ 
obj_t BgL_auxz00_9845;
BgL_auxz00_9845 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)20369)), BGl_string4584z00zz__datez00, BGl_string4473z00zz__datez00, BgL_yearz00_4775); 
FAILURE(BgL_auxz00_9845,BFALSE,BFALSE);} 
BgL_auxz00_9841 = 
CINT(BgL_auxz00_9842); } 
{ /* Llib/date.scm 464 */
obj_t BgL_auxz00_9833;
if(
INTEGERP(BgL_monthz00_4771))
{ /* Llib/date.scm 464 */
BgL_auxz00_9833 = BgL_monthz00_4771
; }  else 
{ 
obj_t BgL_auxz00_9836;
BgL_auxz00_9836 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)20369)), BGl_string4584z00zz__datez00, BGl_string4473z00zz__datez00, BgL_monthz00_4771); 
FAILURE(BgL_auxz00_9836,BFALSE,BFALSE);} 
BgL_auxz00_9832 = 
CINT(BgL_auxz00_9833); } 
{ /* Llib/date.scm 464 */
obj_t BgL_auxz00_9824;
if(
INTEGERP(BgL_dayz00_4767))
{ /* Llib/date.scm 464 */
BgL_auxz00_9824 = BgL_dayz00_4767
; }  else 
{ 
obj_t BgL_auxz00_9827;
BgL_auxz00_9827 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)20369)), BGl_string4584z00zz__datez00, BGl_string4473z00zz__datez00, BgL_dayz00_4767); 
FAILURE(BgL_auxz00_9827,BFALSE,BFALSE);} 
BgL_auxz00_9823 = 
CINT(BgL_auxz00_9824); } 
{ /* Llib/date.scm 464 */
obj_t BgL_auxz00_9815;
if(
INTEGERP(BgL_hourz00_4769))
{ /* Llib/date.scm 464 */
BgL_auxz00_9815 = BgL_hourz00_4769
; }  else 
{ 
obj_t BgL_auxz00_9818;
BgL_auxz00_9818 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)20369)), BGl_string4584z00zz__datez00, BGl_string4473z00zz__datez00, BgL_hourz00_4769); 
FAILURE(BgL_auxz00_9818,BFALSE,BFALSE);} 
BgL_auxz00_9814 = 
CINT(BgL_auxz00_9815); } 
{ /* Llib/date.scm 464 */
obj_t BgL_auxz00_9806;
if(
INTEGERP(BgL_minz00_4770))
{ /* Llib/date.scm 464 */
BgL_auxz00_9806 = BgL_minz00_4770
; }  else 
{ 
obj_t BgL_auxz00_9809;
BgL_auxz00_9809 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)20369)), BGl_string4584z00zz__datez00, BGl_string4473z00zz__datez00, BgL_minz00_4770); 
FAILURE(BgL_auxz00_9809,BFALSE,BFALSE);} 
BgL_auxz00_9805 = 
CINT(BgL_auxz00_9806); } 
{ /* Llib/date.scm 464 */
obj_t BgL_auxz00_9797;
if(
INTEGERP(BgL_secz00_4773))
{ /* Llib/date.scm 464 */
BgL_auxz00_9797 = BgL_secz00_4773
; }  else 
{ 
obj_t BgL_auxz00_9800;
BgL_auxz00_9800 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)20369)), BGl_string4584z00zz__datez00, BGl_string4473z00zz__datez00, BgL_secz00_4773); 
FAILURE(BgL_auxz00_9800,BFALSE,BFALSE);} 
BgL_auxz00_9796 = 
CINT(BgL_auxz00_9797); } 
BgL_dateuz00_2713 = 
bgl_make_date(BgL_auxz00_9796, BgL_auxz00_9805, BgL_auxz00_9814, BgL_auxz00_9823, BgL_auxz00_9832, BgL_auxz00_9841, BgL_auxz00_9850, ((bool_t)1), BgL_auxz00_9859); }  else 
{ /* Llib/date.scm 464 */
int BgL_auxz00_9923;int BgL_auxz00_9914;int BgL_auxz00_9905;int BgL_auxz00_9896;int BgL_auxz00_9887;int BgL_auxz00_9878;int BgL_auxz00_9869;
{ /* Llib/date.scm 464 */
obj_t BgL_auxz00_9924;
if(
INTEGERP(BgL_dstz00_4768))
{ /* Llib/date.scm 464 */
BgL_auxz00_9924 = BgL_dstz00_4768
; }  else 
{ 
obj_t BgL_auxz00_9927;
BgL_auxz00_9927 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)20369)), BGl_string4584z00zz__datez00, BGl_string4473z00zz__datez00, BgL_dstz00_4768); 
FAILURE(BgL_auxz00_9927,BFALSE,BFALSE);} 
BgL_auxz00_9923 = 
CINT(BgL_auxz00_9924); } 
{ /* Llib/date.scm 464 */
obj_t BgL_auxz00_9915;
if(
INTEGERP(BgL_yearz00_4775))
{ /* Llib/date.scm 464 */
BgL_auxz00_9915 = BgL_yearz00_4775
; }  else 
{ 
obj_t BgL_auxz00_9918;
BgL_auxz00_9918 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)20369)), BGl_string4584z00zz__datez00, BGl_string4473z00zz__datez00, BgL_yearz00_4775); 
FAILURE(BgL_auxz00_9918,BFALSE,BFALSE);} 
BgL_auxz00_9914 = 
CINT(BgL_auxz00_9915); } 
{ /* Llib/date.scm 464 */
obj_t BgL_auxz00_9906;
if(
INTEGERP(BgL_monthz00_4771))
{ /* Llib/date.scm 464 */
BgL_auxz00_9906 = BgL_monthz00_4771
; }  else 
{ 
obj_t BgL_auxz00_9909;
BgL_auxz00_9909 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)20369)), BGl_string4584z00zz__datez00, BGl_string4473z00zz__datez00, BgL_monthz00_4771); 
FAILURE(BgL_auxz00_9909,BFALSE,BFALSE);} 
BgL_auxz00_9905 = 
CINT(BgL_auxz00_9906); } 
{ /* Llib/date.scm 464 */
obj_t BgL_auxz00_9897;
if(
INTEGERP(BgL_dayz00_4767))
{ /* Llib/date.scm 464 */
BgL_auxz00_9897 = BgL_dayz00_4767
; }  else 
{ 
obj_t BgL_auxz00_9900;
BgL_auxz00_9900 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)20369)), BGl_string4584z00zz__datez00, BGl_string4473z00zz__datez00, BgL_dayz00_4767); 
FAILURE(BgL_auxz00_9900,BFALSE,BFALSE);} 
BgL_auxz00_9896 = 
CINT(BgL_auxz00_9897); } 
{ /* Llib/date.scm 464 */
obj_t BgL_auxz00_9888;
if(
INTEGERP(BgL_hourz00_4769))
{ /* Llib/date.scm 464 */
BgL_auxz00_9888 = BgL_hourz00_4769
; }  else 
{ 
obj_t BgL_auxz00_9891;
BgL_auxz00_9891 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)20369)), BGl_string4584z00zz__datez00, BGl_string4473z00zz__datez00, BgL_hourz00_4769); 
FAILURE(BgL_auxz00_9891,BFALSE,BFALSE);} 
BgL_auxz00_9887 = 
CINT(BgL_auxz00_9888); } 
{ /* Llib/date.scm 464 */
obj_t BgL_auxz00_9879;
if(
INTEGERP(BgL_minz00_4770))
{ /* Llib/date.scm 464 */
BgL_auxz00_9879 = BgL_minz00_4770
; }  else 
{ 
obj_t BgL_auxz00_9882;
BgL_auxz00_9882 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)20369)), BGl_string4584z00zz__datez00, BGl_string4473z00zz__datez00, BgL_minz00_4770); 
FAILURE(BgL_auxz00_9882,BFALSE,BFALSE);} 
BgL_auxz00_9878 = 
CINT(BgL_auxz00_9879); } 
{ /* Llib/date.scm 464 */
obj_t BgL_auxz00_9870;
if(
INTEGERP(BgL_secz00_4773))
{ /* Llib/date.scm 464 */
BgL_auxz00_9870 = BgL_secz00_4773
; }  else 
{ 
obj_t BgL_auxz00_9873;
BgL_auxz00_9873 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)20369)), BGl_string4584z00zz__datez00, BGl_string4473z00zz__datez00, BgL_secz00_4773); 
FAILURE(BgL_auxz00_9873,BFALSE,BFALSE);} 
BgL_auxz00_9869 = 
CINT(BgL_auxz00_9870); } 
BgL_dateuz00_2713 = 
bgl_make_date(BgL_auxz00_9869, BgL_auxz00_9878, BgL_auxz00_9887, BgL_auxz00_9896, BgL_auxz00_9905, BgL_auxz00_9914, ((long)0), ((bool_t)0), BgL_auxz00_9923); } } } 
{ /* Llib/date.scm 464 */
long BgL_secuz00_2714;
BgL_secuz00_2714 = 
bgl_date_to_seconds(BgL_dateuz00_2713); 
{ /* Llib/date.scm 472 */
long BgL_secz00_2715;
BgL_secz00_2715 = 
bgl_date_to_seconds(BgL_datez00_51); 
{ /* Llib/date.scm 473 */

{ /* Llib/date.scm 474 */
long BgL_arg3077z00_2716;
{ /* Llib/date.scm 474 */
long BgL_arg3078z00_2717;
{ /* Llib/date.scm 474 */
long BgL_res3480z00_4781;
{ /* Llib/date.scm 474 */
long BgL_auxz00_9935;
BgL_auxz00_9935 = 
(BgL_secz00_2715-BgL_secuz00_2714); 
BgL_res3480z00_4781 = 
LONG_TO_ELONG(BgL_auxz00_9935); } 
BgL_arg3078z00_2717 = BgL_res3480z00_4781; } 
{ /* Llib/date.scm 474 */
long BgL_res3481z00_4783;
{ /* Llib/date.scm 474 */
long BgL_auxz00_9938;
{ /* Llib/date.scm 474 */
long BgL_auxz00_9939;
BgL_auxz00_9939 = 
ELONG_TO_LONG(BgL_arg3078z00_2717); 
BgL_auxz00_9938 = 
ELONG_TO_LONG(BgL_auxz00_9939); } 
BgL_res3481z00_4783 = 
ELONG_TO_LONG(BgL_auxz00_9938); } 
BgL_arg3077z00_2716 = BgL_res3481z00_4783; } } 
{ /* Llib/date.scm 474 */
obj_t BgL_aux4320z00_5955;
BgL_datez00_2747 = BgL_datez00_51; 
BgL_timeza7oneza7_2748 = BgL_arg3077z00_2716; 
BgL_zc3anonymousza33098ze3z83_2749:
{ /* Llib/date.scm 448 */
long BgL_tza7za7_2750;
BgL_tza7za7_2750 = 
(BgL_timeza7oneza7_2748/((long)60)); 
{ /* Llib/date.scm 448 */
long BgL_hz00_2751;
BgL_hz00_2751 = 
(BgL_tza7za7_2750/((long)60)); 
{ /* Llib/date.scm 449 */
long BgL_mz00_2752;
BgL_mz00_2752 = 
(BgL_tza7za7_2750%((long)60)); 
{ /* Llib/date.scm 450 */

{ /* Llib/date.scm 451 */
obj_t BgL_arg3100z00_2754;int BgL_arg3101z00_2755;obj_t BgL_arg3102z00_2756;int BgL_arg3103z00_2757;obj_t BgL_arg3104z00_2758;obj_t BgL_arg3105z00_2759;obj_t BgL_arg3106z00_2760;obj_t BgL_arg3107z00_2761;obj_t BgL_arg3108z00_2762;obj_t BgL_arg3109z00_2763;
{ /* Llib/date.scm 452 */
int BgL_arg3120z00_2774;
BgL_arg3120z00_2774 = 
BGL_DATE_WDAY(BgL_datez00_2747); 
BgL_arg3100z00_2754 = 
BGl_dayzd2anamezd2zz__datez00(BgL_arg3120z00_2774); } 
BgL_arg3101z00_2755 = 
BGL_DATE_DAY(BgL_datez00_2747); 
{ /* Llib/date.scm 454 */
int BgL_arg3121z00_2775;
BgL_arg3121z00_2775 = 
BGL_DATE_MONTH(BgL_datez00_2747); 
BgL_arg3102z00_2756 = 
BGl_monthzd2anamezd2zz__datez00(BgL_arg3121z00_2775); } 
BgL_arg3103z00_2757 = 
BGL_DATE_YEAR(BgL_datez00_2747); 
{ /* Llib/date.scm 456 */
int BgL_arg3122z00_2776;
BgL_arg3122z00_2776 = 
BGL_DATE_HOUR(BgL_datez00_2747); 
BgL_arg3104z00_2758 = 
BGl_2digitsz00zz__datez00(BgL_arg3122z00_2776); } 
{ /* Llib/date.scm 457 */
int BgL_arg3123z00_2777;
BgL_arg3123z00_2777 = 
BGL_DATE_MINUTE(BgL_datez00_2747); 
BgL_arg3105z00_2759 = 
BGl_2digitsz00zz__datez00(BgL_arg3123z00_2777); } 
{ /* Llib/date.scm 458 */
int BgL_arg3124z00_2778;
BgL_arg3124z00_2778 = 
BGL_DATE_SECOND(BgL_datez00_2747); 
BgL_arg3106z00_2760 = 
BGl_2digitsz00zz__datez00(BgL_arg3124z00_2778); } 
if(
(BgL_tza7za7_2750<((long)0)))
{ /* Llib/date.scm 459 */
BgL_arg3107z00_2761 = BGl_string4581z00zz__datez00; }  else 
{ /* Llib/date.scm 459 */
BgL_arg3107z00_2761 = BGl_string4582z00zz__datez00; } 
{ /* Llib/date.scm 460 */
long BgL_arg3126z00_2780;
if(
(BgL_hz00_2751<((long)0)))
{ /* Llib/date.scm 460 */
BgL_arg3126z00_2780 = 
NEG(BgL_hz00_2751); }  else 
{ /* Llib/date.scm 460 */
BgL_arg3126z00_2780 = BgL_hz00_2751; } 
BgL_arg3108z00_2762 = 
BGl_2digitsz00zz__datez00(
(int)(BgL_arg3126z00_2780)); } 
BgL_arg3109z00_2763 = 
BGl_2digitsz00zz__datez00(
(int)(BgL_mz00_2752)); 
{ /* Llib/date.scm 451 */
obj_t BgL_list3110z00_2764;
{ /* Llib/date.scm 451 */
obj_t BgL_arg3111z00_2765;
{ /* Llib/date.scm 451 */
obj_t BgL_arg3112z00_2766;
{ /* Llib/date.scm 451 */
obj_t BgL_arg3113z00_2767;
{ /* Llib/date.scm 451 */
obj_t BgL_arg3114z00_2768;
{ /* Llib/date.scm 451 */
obj_t BgL_arg3115z00_2769;
{ /* Llib/date.scm 451 */
obj_t BgL_arg3116z00_2770;
{ /* Llib/date.scm 451 */
obj_t BgL_arg3117z00_2771;
{ /* Llib/date.scm 451 */
obj_t BgL_arg3118z00_2772;
{ /* Llib/date.scm 451 */
obj_t BgL_arg3119z00_2773;
BgL_arg3119z00_2773 = 
MAKE_PAIR(BgL_arg3109z00_2763, BNIL); 
BgL_arg3118z00_2772 = 
MAKE_PAIR(BgL_arg3108z00_2762, BgL_arg3119z00_2773); } 
BgL_arg3117z00_2771 = 
MAKE_PAIR(BgL_arg3107z00_2761, BgL_arg3118z00_2772); } 
BgL_arg3116z00_2770 = 
MAKE_PAIR(BgL_arg3106z00_2760, BgL_arg3117z00_2771); } 
BgL_arg3115z00_2769 = 
MAKE_PAIR(BgL_arg3105z00_2759, BgL_arg3116z00_2770); } 
BgL_arg3114z00_2768 = 
MAKE_PAIR(BgL_arg3104z00_2758, BgL_arg3115z00_2769); } 
BgL_arg3113z00_2767 = 
MAKE_PAIR(
BINT(BgL_arg3103z00_2757), BgL_arg3114z00_2768); } 
BgL_arg3112z00_2766 = 
MAKE_PAIR(BgL_arg3102z00_2756, BgL_arg3113z00_2767); } 
BgL_arg3111z00_2765 = 
MAKE_PAIR(
BINT(BgL_arg3101z00_2755), BgL_arg3112z00_2766); } 
BgL_list3110z00_2764 = 
MAKE_PAIR(BgL_arg3100z00_2754, BgL_arg3111z00_2765); } 
BgL_aux4320z00_5955 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string4583z00zz__datez00, BgL_list3110z00_2764); } } } } } } 
if(
STRINGP(BgL_aux4320z00_5955))
{ /* Llib/date.scm 474 */
return BgL_aux4320z00_5955;}  else 
{ 
obj_t BgL_auxz00_9982;
BgL_auxz00_9982 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)20636)), BGl_string4584z00zz__datez00, BGl_string4555z00zz__datez00, BgL_aux4320z00_5955); 
FAILURE(BgL_auxz00_9982,BFALSE,BFALSE);} } } } } } }  else 
{ /* Llib/date.scm 475 */
long BgL_arg3088z00_2735;
BgL_arg3088z00_2735 = 
BGL_DATE_TIMEZONE(BgL_datez00_51); 
{ /* Llib/date.scm 475 */
obj_t BgL_aux4322z00_5957;
{ 
long BgL_timeza7oneza7_9988;obj_t BgL_datez00_9987;
BgL_datez00_9987 = BgL_datez00_51; 
BgL_timeza7oneza7_9988 = BgL_arg3088z00_2735; 
BgL_timeza7oneza7_2748 = BgL_timeza7oneza7_9988; 
BgL_datez00_2747 = BgL_datez00_9987; 
goto BgL_zc3anonymousza33098ze3z83_2749;} 
if(
STRINGP(BgL_aux4322z00_5957))
{ /* Llib/date.scm 475 */
return BgL_aux4322z00_5957;}  else 
{ 
obj_t BgL_auxz00_9991;
BgL_auxz00_9991 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)20699)), BGl_string4584z00zz__datez00, BGl_string4555z00zz__datez00, BgL_aux4322z00_5957); 
FAILURE(BgL_auxz00_9991,BFALSE,BFALSE);} } } } } } 
}



/* 2digits */
obj_t BGl_2digitsz00zz__datez00(int BgL_numz00_2738)
{ AN_OBJECT;
{ /* Llib/date.scm 445 */
if(
(
(long)(BgL_numz00_2738)<((long)10)))
{ /* Llib/date.scm 444 */
unsigned char BgL_arg3093z00_2741;
BgL_arg3093z00_2741 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(((long)48)+
(long)(BgL_numz00_2738))); 
{ /* Llib/date.scm 444 */
obj_t BgL_list3094z00_2742;
{ /* Llib/date.scm 444 */
obj_t BgL_arg3095z00_2743;
BgL_arg3095z00_2743 = 
MAKE_PAIR(
BCHAR(BgL_arg3093z00_2741), BNIL); 
BgL_list3094z00_2742 = 
MAKE_PAIR(
BCHAR(((unsigned char)'0')), BgL_arg3095z00_2743); } 
return 
BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_list3094z00_2742);} }  else 
{ /* Ieee/fixnum.scm 355 */

return 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(long)(BgL_numz00_2738), ((long)10));} } 
}



/* _date->rfc2822-date */
obj_t BGl__datezd2ze3rfc2822zd2dateze3zz__datez00(obj_t BgL_envz00_5109, obj_t BgL_datez00_5110)
{ AN_OBJECT;
{ /* Llib/date.scm 440 */
{ /* Llib/date.scm 443 */
obj_t BgL_auxz00_10008;
if(
BGL_DATEP(BgL_datez00_5110))
{ /* Llib/date.scm 443 */
BgL_auxz00_10008 = BgL_datez00_5110
; }  else 
{ 
obj_t BgL_auxz00_10011;
BgL_auxz00_10011 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4366z00zz__datez00, 
BINT(((long)19747)), BGl_string4585z00zz__datez00, BGl_string4529z00zz__datez00, BgL_datez00_5110); 
FAILURE(BgL_auxz00_10011,BFALSE,BFALSE);} 
return 
BGl_datezd2ze3rfc2822zd2dateze3zz__datez00(BgL_auxz00_10008);} } 
}



/* parse-error */
obj_t BGl_parsezd2errorzd2zz__datez00(obj_t BgL_procz00_52, obj_t BgL_messagez00_53, obj_t BgL_objz00_54, obj_t BgL_portz00_55)
{ AN_OBJECT;
{ /* Llib/date.scm 480 */
{ /* Llib/date.scm 488 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_arg3127z00_2783;
{ /* Llib/date.scm 488 */
obj_t BgL_arg3128z00_2784;long BgL_arg3129z00_2785;obj_t BgL_arg3130z00_2786;obj_t BgL_arg3131z00_2787;
BgL_arg3128z00_2784 = 
INPUT_PORT_NAME(BgL_portz00_55); 
BgL_arg3129z00_2785 = 
INPUT_PORT_FILEPOS(BgL_portz00_55); 
{ /* Llib/object.scm 90 */

{ /* Llib/object.scm 90 */

BgL_arg3130z00_2786 = 
BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE); } } 
if(
CHARP(BgL_objz00_54))
{ /* Llib/date.scm 486 */
obj_t BgL_arg3134z00_2791;obj_t BgL_arg3136z00_2793;
{ /* Llib/date.scm 486 */
obj_t BgL_list3141z00_2798;
BgL_list3141z00_2798 = 
MAKE_PAIR(BgL_objz00_54, BNIL); 
BgL_arg3134z00_2791 = 
BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_list3141z00_2798); } 
BgL_arg3136z00_2793 = 
BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_portz00_55); 
{ /* Llib/date.scm 486 */
obj_t BgL_list3137z00_2794;
{ /* Llib/date.scm 486 */
obj_t BgL_arg3138z00_2795;
{ /* Llib/date.scm 486 */
obj_t BgL_arg3139z00_2796;
{ /* Llib/date.scm 486 */
obj_t BgL_arg3140z00_2797;
BgL_arg3140z00_2797 = 
MAKE_PAIR(BgL_arg3136z00_2793, BNIL); 
BgL_arg3139z00_2796 = 
MAKE_PAIR(BGl_string4586z00zz__datez00, BgL_arg3140z00_2797); } 
BgL_arg3138z00_2795 = 
MAKE_PAIR(BgL_arg3134z00_2791, BgL_arg3139z00_2796); } 
BgL_list3137z00_2794 = 
MAKE_PAIR(BGl_string4587z00zz__datez00, BgL_arg3138z00_2795); } 
BgL_arg3131z00_2787 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list3137z00_2794); } }  else 
{ /* Llib/date.scm 485 */
BgL_arg3131z00_2787 = BgL_objz00_54; } 
BgL_arg3127z00_2783 = 
BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(BgL_arg3128z00_2784, 
BINT(BgL_arg3129z00_2785), BgL_arg3130z00_2786, BgL_procz00_52, BgL_messagez00_53, BgL_arg3131z00_2787); } 
return 
BGl_raisez00zz__errorz00(
(obj_t)(BgL_arg3127z00_2783));} } 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__datez00()
{ AN_OBJECT;
{ /* Llib/date.scm 19 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__datez00()
{ AN_OBJECT;
{ /* Llib/date.scm 19 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__datez00()
{ AN_OBJECT;
{ /* Llib/date.scm 19 */
return 
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string4588z00zz__datez00));} 
}

#ifdef __cplusplus
}
#endif
