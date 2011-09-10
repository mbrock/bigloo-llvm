/*===========================================================================*/
/*   (Ieee/input.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Ieee/input.scm -indent -o objs/obj_s/Ieee/input.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Object type definitions */
typedef struct BgL_z62iozd2errorzb0_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2errorzb0_bglt;


static obj_t BGl_symbol4428z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl__passwordz00zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl_symbol4432z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4434z00zz__r4_input_6_10_2z00 = BUNSPEC;
extern obj_t bgl_password(char *);
static obj_t BGl_symbol4437z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4442z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4446z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4451z00zz__r4_input_6_10_2z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_readzf2rpzf2zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t);
static obj_t BGl__readzd2charzd2zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl_symbol4456z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl__unreadzd2stringz12zc0zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl_symbol4460z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4464z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4468z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4478z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4482z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4486z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4492z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4496z00zz__r4_input_6_10_2z00 = BUNSPEC;
extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
BGL_EXPORTED_DECL obj_t BGl_readzd2linezd2zz__r4_input_6_10_2z00(obj_t);
extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
extern long bgl_rgc_blit_string(obj_t, char *, long, long);
extern obj_t make_string_sans_fill(long);
static obj_t BGl_requirezd2initializa7ationz75zz__r4_input_6_10_2z00 = BUNSPEC;
extern bool_t rgc_buffer_insert_char(obj_t, int);
extern obj_t BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(obj_t, long, obj_t, long, long);
BGL_EXPORTED_DECL long BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00(obj_t, obj_t, long, long);
BGL_EXPORTED_DECL obj_t BGl_portzd2ze3stringzd2listze3zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl_thezd2stringzd2zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl_genericzd2initzd2zz__r4_input_6_10_2z00();
BGL_EXPORTED_DECL obj_t BGl_unreadzd2substringz12zc0zz__r4_input_6_10_2z00(obj_t, long, long, obj_t);
static int BGl_z52sendcharsz52zz__r4_input_6_10_2z00(obj_t, obj_t, long, long);
extern bool_t fexists(char *);
extern obj_t BGl_stringzd2indexzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl__readzf2lalrpzf2zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern int default_io_bufsiz;
BGL_EXPORTED_DECL long BGl_sendzd2charszd2zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_unreadzd2stringz12zc0zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl__filezd2ze3stringz31zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl__charzd2readyzf3z21zz__r4_input_6_10_2z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_peekzd2bytezd2zz__r4_input_6_10_2z00(obj_t);
extern obj_t bgl_reverse_bang(obj_t);
BGL_EXPORTED_DECL obj_t BGl_readzd2bytezd2zz__r4_input_6_10_2z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_eofzd2objectzf3z21zz__r4_input_6_10_2z00(obj_t);
extern obj_t bgl_file_to_string(char *);
BGL_EXPORTED_DECL obj_t BGl_filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00(int, obj_t);
static obj_t BGl__sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__r4_input_6_10_2z00();
static obj_t BGl__readzd2charszd2zz__r4_input_6_10_2z00(obj_t, obj_t);
extern obj_t bgl_find_runtime_type(obj_t);
static obj_t BGl__unreadzd2charz12zc0zz__r4_input_6_10_2z00(obj_t, obj_t);
extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
static obj_t BGl_thezd2stringz72za0zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl__portzd2ze3stringzd2listze3zz__r4_input_6_10_2z00(obj_t, obj_t);
extern obj_t bgl_display_obj(obj_t, obj_t);
static obj_t BGl__unreadzd2substringz12zc0zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__r4_input_6_10_2z00();
BGL_EXPORTED_DECL obj_t BGl_filezd2ze3stringz31zz__r4_input_6_10_2z00(obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_zc3anonymousza33233ze3z83zz__r4_input_6_10_2z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_readzd2stringzd2zz__r4_input_6_10_2z00(obj_t);
BGL_EXPORTED_DECL long BGl_sendzd2filezd2zz__r4_input_6_10_2z00(obj_t, obj_t, long, long);
extern obj_t BGl_gunza7ipzd2sendcharsz75zz__gunza7ipza7(obj_t, obj_t);
extern bool_t rgc_buffer_eof_p(obj_t);
BGL_EXPORTED_DECL obj_t BGl_unreadzd2charz12zc0zz__r4_input_6_10_2z00(unsigned char, obj_t);
static obj_t BGl_zc3exitza33082ze3z83zz__r4_input_6_10_2z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_peekzd2charzd2zz__r4_input_6_10_2z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_readzf2lalrpzf2zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
extern obj_t bgl_sendfile(obj_t, obj_t, long, long);
static obj_t BGl__readzf2rpzf2zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list4337z00zz__r4_input_6_10_2z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_readzd2charzd2zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl_list4342z00zz__r4_input_6_10_2z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__gunza7ipza7(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_list4345z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_list4346z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_list4349z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_list4354z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_list4357z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_list4363z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_toplevelzd2initzd2zz__r4_input_6_10_2z00();
static obj_t BGl_list4366z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_list4371z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl__filezd2lineszd2zz__r4_input_6_10_2z00(obj_t, obj_t);
extern obj_t BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern long bgl_list_length(obj_t);
static obj_t BGl_list4380z00zz__r4_input_6_10_2z00 = BUNSPEC;
extern bool_t rgc_buffer_insert_substring(obj_t, obj_t, long, long);
extern obj_t make_string(long, unsigned char);
static obj_t BGl_list4431z00zz__r4_input_6_10_2z00 = BUNSPEC;
extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
extern obj_t rgc_buffer_substring(obj_t, long, long);
static obj_t BGl_zc3anonymousza33119ze3z83zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl__readzd2lineszd2zz__r4_input_6_10_2z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_readzd2charszd2zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl__eofzd2objectzf3z21zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl__readzd2linezd2zz__r4_input_6_10_2z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_readzd2ofzd2stringsz00zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00 = BUNSPEC;
BGL_EXPORTED_DECL int BGl_readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00(obj_t, long, long, obj_t);
static obj_t BGl_zc3exitza33116ze3z83zz__r4_input_6_10_2z00(long, long, obj_t, obj_t);
extern obj_t bgl_input_port_seek(obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_passwordz00zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl__readzd2stringzd2zz__r4_input_6_10_2z00(obj_t, obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_readzd2linezd2newlinez00zz__r4_input_6_10_2z00(obj_t);
extern obj_t bgl_system_failure(int, obj_t, obj_t, obj_t);
extern BgL_z62iozd2errorzb0_bglt BGl_makezd2z62iozd2errorz62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__peekzd2bytezd2zz__r4_input_6_10_2z00(obj_t, obj_t);
extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl__readzd2charsz12zc0zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl__readzd2ofzd2stringsz00zz__r4_input_6_10_2z00(obj_t, obj_t);
extern bool_t bgl_rgc_charready(obj_t);
extern obj_t bgl_close_input_port(obj_t);
extern bool_t rgc_fill_buffer(obj_t);
static obj_t BGl__readzd2bytezd2zz__r4_input_6_10_2z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_filezd2lineszd2zz__r4_input_6_10_2z00(obj_t);
extern obj_t bgl_sendchars(obj_t, obj_t, long, long);
extern bool_t BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00(obj_t, obj_t);
extern obj_t BGl_raisez00zz__errorz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_readzd2lineszd2zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl__sendzd2charszd2zz__r4_input_6_10_2z00(obj_t, obj_t);
extern obj_t BGl_getzd2tracezd2stackz00zz__errorz00(obj_t);
static obj_t BGl_symbol4334z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4338z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4340z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4343z00zz__r4_input_6_10_2z00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_charzd2readyzf3z21zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl_symbol4347z00zz__r4_input_6_10_2z00 = BUNSPEC;
extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
static obj_t BGl_symbol4350z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4352z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl__sendzd2filezd2zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl_symbol4355z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4358z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4360z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4364z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl__readzd2linezd2newlinez00zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl_symbol4372z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4374z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4376z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_ignorez00zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol4381z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4384z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4388z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4400z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4391z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4394z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_methodzd2initzd2zz__r4_input_6_10_2z00();
static obj_t BGl_symbol4397z00zz__r4_input_6_10_2z00 = BUNSPEC;
extern int rgc_buffer_unget_char(obj_t, int);
static obj_t BGl_symbol4412z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl__peekzd2charzd2zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl_symbol4420z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4423z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_zc3anonymousza32086ze3z83zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_passwordzd2envzd2zz__r4_input_6_10_2z00, BgL_bgl__passwordza700za7za7__4502za7, opt_generic_entry, BGl__passwordz00zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_sendzd2charszd2envz00zz__r4_input_6_10_2z00, BgL_bgl__sendza7d2charsza7d24503z00, opt_generic_entry, BGl__sendzd2charszd2zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_readzd2lineszd2envz00zz__r4_input_6_10_2z00, BgL_bgl__readza7d2linesza7d24504z00, opt_generic_entry, BGl__readzd2lineszd2zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_readzd2charzd2envz00zz__r4_input_6_10_2z00, BgL_bgl__readza7d2charza7d2za74505za7, opt_generic_entry, BGl__readzd2charzd2zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_unreadzd2stringz12zd2envz12zz__r4_input_6_10_2z00, BgL_bgl__unreadza7d2string4506za7, opt_generic_entry, BGl__unreadzd2stringz12zc0zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4313z00zz__r4_input_6_10_2z00, BgL_bgl_za7c3anonymousza7a324507z00, BGl_zc3anonymousza32086ze3z83zz__r4_input_6_10_2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_readzf2lalrpzd2envz20zz__r4_input_6_10_2z00, BgL_bgl__readza7f2lalrpza7f24508z00, va_generic_entry, BGl__readzf2lalrpzf2zz__r4_input_6_10_2z00, BUNSPEC, -4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_unreadzd2charz12zd2envz12zz__r4_input_6_10_2z00, BgL_bgl__unreadza7d2charza714509z00, opt_generic_entry, BGl__unreadzd2charz12zc0zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_readzd2fillzd2stringz12zd2envzc0zz__r4_input_6_10_2z00, BgL_bgl__readza7d2fillza7d2s4510z00, opt_generic_entry, BGl__readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2ze3stringzd2envze3zz__r4_input_6_10_2z00, BgL_bgl__fileza7d2za7e3strin4511z00, BGl__filezd2ze3stringz31zz__r4_input_6_10_2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_sendzd2charszf2siza7ezd2envz55zz__r4_input_6_10_2z00, BgL_bgl__sendza7d2charsza7f24512z00, BGl__sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00, 0L, BUNSPEC, 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_readzd2linezd2envz00zz__r4_input_6_10_2z00, BgL_bgl__readza7d2lineza7d2za74513za7, opt_generic_entry, BGl__readzd2linezd2zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_STRING( BGl_string4314z00zz__r4_input_6_10_2z00, BgL_bgl_string4314za700za7za7_4514za7, "/tmp/bigloo/runtime/Ieee/input.scm", 34 );
DEFINE_STRING( BGl_string4315z00zz__r4_input_6_10_2z00, BgL_bgl_string4315za700za7za7_4515za7, "STATE-6-1906", 12 );
DEFINE_STRING( BGl_string4316z00zz__r4_input_6_10_2z00, BgL_bgl_string4316za700za7za7_4516za7, "input-port", 10 );
DEFINE_STRING( BGl_string4317z00zz__r4_input_6_10_2z00, BgL_bgl_string4317za700za7za7_4517za7, "STATE-0-1900", 12 );
DEFINE_STRING( BGl_string4318z00zz__r4_input_6_10_2z00, BgL_bgl_string4318za700za7za7_4518za7, "STATE-2-1902", 12 );
DEFINE_STRING( BGl_string4320z00zz__r4_input_6_10_2z00, BgL_bgl_string4320za700za7za7_4519za7, "STATE-1-1901", 12 );
DEFINE_STRING( BGl_string4319z00zz__r4_input_6_10_2z00, BgL_bgl_string4319za700za7za7_4520za7, "STATE-9-1909", 12 );
DEFINE_STRING( BGl_string4321z00zz__r4_input_6_10_2z00, BgL_bgl_string4321za700za7za7_4521za7, "STATE-3-1903", 12 );
DEFINE_STRING( BGl_string4322z00zz__r4_input_6_10_2z00, BgL_bgl_string4322za700za7za7_4522za7, "STATE-4-1904", 12 );
DEFINE_STRING( BGl_string4323z00zz__r4_input_6_10_2z00, BgL_bgl_string4323za700za7za7_4523za7, "STATE-8-1908", 12 );
DEFINE_STRING( BGl_string4324z00zz__r4_input_6_10_2z00, BgL_bgl_string4324za700za7za7_4524za7, "the-substring", 13 );
DEFINE_STRING( BGl_string4325z00zz__r4_input_6_10_2z00, BgL_bgl_string4325za700za7za7_4525za7, "Illegal range `~a'", 18 );
DEFINE_STRING( BGl_string4326z00zz__r4_input_6_10_2z00, BgL_bgl_string4326za700za7za7_4526za7, "bstring", 7 );
DEFINE_STRING( BGl_string4327z00zz__r4_input_6_10_2z00, BgL_bgl_string4327za700za7za7_4527za7, "the-failure", 11 );
DEFINE_STRING( BGl_string4328z00zz__r4_input_6_10_2z00, BgL_bgl_string4328za700za7za7_4528za7, "ignore", 6 );
DEFINE_STRING( BGl_string4330z00zz__r4_input_6_10_2z00, BgL_bgl_string4330za700za7za7_4529za7, "Illegal match", 13 );
DEFINE_STRING( BGl_string4329z00zz__r4_input_6_10_2z00, BgL_bgl_string4329za700za7za7_4530za7, "regular-grammar", 15 );
DEFINE_STRING( BGl_string4331z00zz__r4_input_6_10_2z00, BgL_bgl_string4331za700za7za7_4531za7, "<anonymous:2086>", 16 );
DEFINE_STRING( BGl_string4332z00zz__r4_input_6_10_2z00, BgL_bgl_string4332za700za7za7_4532za7, "Can't read on a closed input port", 33 );
DEFINE_STRING( BGl_string4333z00zz__r4_input_6_10_2z00, BgL_bgl_string4333za700za7za7_4533za7, "the-string'", 11 );
DEFINE_STRING( BGl_string4335z00zz__r4_input_6_10_2z00, BgL_bgl_string4335za700za7za7_4534za7, "read/rp", 7 );
DEFINE_STRING( BGl_string4336z00zz__r4_input_6_10_2z00, BgL_bgl_string4336za700za7za7_4535za7, "Wrong number of arguments", 25 );
DEFINE_STRING( BGl_string4339z00zz__r4_input_6_10_2z00, BgL_bgl_string4339za700za7za7_4536za7, "apply", 5 );
DEFINE_STRING( BGl_string4341z00zz__r4_input_6_10_2z00, BgL_bgl_string4341za700za7za7_4537za7, "grammar", 7 );
DEFINE_STRING( BGl_string4344z00zz__r4_input_6_10_2z00, BgL_bgl_string4344za700za7za7_4538za7, "let", 3 );
DEFINE_STRING( BGl_string4348z00zz__r4_input_6_10_2z00, BgL_bgl_string4348za700za7za7_4539za7, "list2213", 8 );
DEFINE_STRING( BGl_string4351z00zz__r4_input_6_10_2z00, BgL_bgl_string4351za700za7za7_4540za7, "c-cons", 6 );
DEFINE_STRING( BGl_string4353z00zz__r4_input_6_10_2z00, BgL_bgl_string4353za700za7za7_4541za7, "opts", 4 );
DEFINE_STRING( BGl_string4356z00zz__r4_input_6_10_2z00, BgL_bgl_string4356za700za7za7_4542za7, "quote", 5 );
DEFINE_STRING( BGl_string4359z00zz__r4_input_6_10_2z00, BgL_bgl_string4359za700za7za7_4543za7, "cons*", 5 );
DEFINE_STRING( BGl_string4361z00zz__r4_input_6_10_2z00, BgL_bgl_string4361za700za7za7_4544za7, "port", 4 );
DEFINE_STRING( BGl_string4362z00zz__r4_input_6_10_2z00, BgL_bgl_string4362za700za7za7_4545za7, "read/rp:Wrong number of arguments", 33 );
DEFINE_STRING( BGl_string4365z00zz__r4_input_6_10_2z00, BgL_bgl_string4365za700za7za7_4546za7, "funcall", 7 );
DEFINE_STRING( BGl_string4367z00zz__r4_input_6_10_2z00, BgL_bgl_string4367za700za7za7_4547za7, "Grammar arity mismatch", 22 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_readzd2bytezd2envz00zz__r4_input_6_10_2z00, BgL_bgl__readza7d2byteza7d2za74548za7, opt_generic_entry, BGl__readzd2bytezd2zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_eofzd2objectzf3zd2envzf3zz__r4_input_6_10_2z00, BgL_bgl__eofza7d2objectza7f34549z00, BGl__eofzd2objectzf3z21zz__r4_input_6_10_2z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4368z00zz__r4_input_6_10_2z00, BgL_bgl_string4368za700za7za7_4550za7, "_read/rp", 8 );
DEFINE_STRING( BGl_string4370z00zz__r4_input_6_10_2z00, BgL_bgl_string4370za700za7za7_4551za7, "read/lalrp:Wrong number of arguments", 36 );
DEFINE_STRING( BGl_string4369z00zz__r4_input_6_10_2z00, BgL_bgl_string4369za700za7za7_4552za7, "procedure", 9 );
DEFINE_STRING( BGl_string4373z00zz__r4_input_6_10_2z00, BgL_bgl_string4373za700za7za7_4553za7, "lalr", 4 );
DEFINE_STRING( BGl_string4375z00zz__r4_input_6_10_2z00, BgL_bgl_string4375za700za7za7_4554za7, "rgc", 3 );
DEFINE_STRING( BGl_string4377z00zz__r4_input_6_10_2z00, BgL_bgl_string4377za700za7za7_4555za7, "eof-object?-env", 15 );
DEFINE_STRING( BGl_string4378z00zz__r4_input_6_10_2z00, BgL_bgl_string4378za700za7za7_4556za7, "read/lalrp", 10 );
DEFINE_STRING( BGl_string4379z00zz__r4_input_6_10_2z00, BgL_bgl_string4379za700za7za7_4557za7, "pair", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2lineszd2envz00zz__r4_input_6_10_2z00, BgL_bgl__fileza7d2linesza7d24558z00, BGl__filezd2lineszd2zz__r4_input_6_10_2z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4382z00zz__r4_input_6_10_2z00, BgL_bgl_string4382za700za7za7_4559za7, "arg2217", 7 );
DEFINE_STRING( BGl_string4383z00zz__r4_input_6_10_2z00, BgL_bgl_string4383za700za7za7_4560za7, "_read/lalrp", 11 );
DEFINE_STRING( BGl_string4385z00zz__r4_input_6_10_2z00, BgL_bgl_string4385za700za7za7_4561za7, "read-char", 9 );
DEFINE_STRING( BGl_string4386z00zz__r4_input_6_10_2z00, BgL_bgl_string4386za700za7za7_4562za7, "wrong number of arguments: [0..1] expected, provided", 52 );
DEFINE_STRING( BGl_string4387z00zz__r4_input_6_10_2z00, BgL_bgl_string4387za700za7za7_4563za7, "STATE-0-1825", 12 );
DEFINE_STRING( BGl_string4390z00zz__r4_input_6_10_2z00, BgL_bgl_string4390za700za7za7_4564za7, "STATE-0-1831", 12 );
DEFINE_STRING( BGl_string4389z00zz__r4_input_6_10_2z00, BgL_bgl_string4389za700za7za7_4565za7, "peek-char", 9 );
DEFINE_STRING( BGl_string4401z00zz__r4_input_6_10_2z00, BgL_bgl_string4401za700za7za7_4566za7, "read-line", 9 );
DEFINE_STRING( BGl_string4402z00zz__r4_input_6_10_2z00, BgL_bgl_string4402za700za7za7_4567za7, "", 0 );
DEFINE_STRING( BGl_string4392z00zz__r4_input_6_10_2z00, BgL_bgl_string4392za700za7za7_4568za7, "read-byte", 9 );
DEFINE_STRING( BGl_string4403z00zz__r4_input_6_10_2z00, BgL_bgl_string4403za700za7za7_4569za7, "STATE-3-1854", 12 );
DEFINE_STRING( BGl_string4393z00zz__r4_input_6_10_2z00, BgL_bgl_string4393za700za7za7_4570za7, "STATE-0-1837", 12 );
DEFINE_STRING( BGl_string4404z00zz__r4_input_6_10_2z00, BgL_bgl_string4404za700za7za7_4571za7, "STATE-8-1859", 12 );
DEFINE_STRING( BGl_string4405z00zz__r4_input_6_10_2z00, BgL_bgl_string4405za700za7za7_4572za7, "STATE-0-1851", 12 );
DEFINE_STRING( BGl_string4395z00zz__r4_input_6_10_2z00, BgL_bgl_string4395za700za7za7_4573za7, "peek-byte", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_unreadzd2substringz12zd2envz12zz__r4_input_6_10_2z00, BgL_bgl__unreadza7d2substr4574za7, opt_generic_entry, BGl__unreadzd2substringz12zc0zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_STRING( BGl_string4406z00zz__r4_input_6_10_2z00, BgL_bgl_string4406za700za7za7_4575za7, "STATE-6-1857", 12 );
DEFINE_STRING( BGl_string4396z00zz__r4_input_6_10_2z00, BgL_bgl_string4396za700za7za7_4576za7, "STATE-0-1843", 12 );
DEFINE_STRING( BGl_string4407z00zz__r4_input_6_10_2z00, BgL_bgl_string4407za700za7za7_4577za7, "STATE-1-1852", 12 );
DEFINE_STRING( BGl_string4408z00zz__r4_input_6_10_2z00, BgL_bgl_string4408za700za7za7_4578za7, "loop", 4 );
DEFINE_STRING( BGl_string4398z00zz__r4_input_6_10_2z00, BgL_bgl_string4398za700za7za7_4579za7, "char-ready?", 11 );
DEFINE_STRING( BGl_string4410z00zz__r4_input_6_10_2z00, BgL_bgl_string4410za700za7za7_4580za7, "string-set!", 11 );
DEFINE_STRING( BGl_string4409z00zz__r4_input_6_10_2z00, BgL_bgl_string4409za700za7za7_4581za7, "uchar", 5 );
DEFINE_STRING( BGl_string4399z00zz__r4_input_6_10_2z00, BgL_bgl_string4399za700za7za7_4582za7, "_char-ready?", 12 );
DEFINE_STRING( BGl_string4411z00zz__r4_input_6_10_2z00, BgL_bgl_string4411za700za7za7_4583za7, "the-string", 10 );
DEFINE_STRING( BGl_string4413z00zz__r4_input_6_10_2z00, BgL_bgl_string4413za700za7za7_4584za7, "read-line-newline", 17 );
DEFINE_STRING( BGl_string4414z00zz__r4_input_6_10_2z00, BgL_bgl_string4414za700za7za7_4585za7, "STATE-0-1872", 12 );
DEFINE_STRING( BGl_string4415z00zz__r4_input_6_10_2z00, BgL_bgl_string4415za700za7za7_4586za7, "STATE-6-1878", 12 );
DEFINE_STRING( BGl_string4416z00zz__r4_input_6_10_2z00, BgL_bgl_string4416za700za7za7_4587za7, "STATE-7-1879", 12 );
DEFINE_STRING( BGl_string4417z00zz__r4_input_6_10_2z00, BgL_bgl_string4417za700za7za7_4588za7, "STATE-3-1875", 12 );
DEFINE_STRING( BGl_string4418z00zz__r4_input_6_10_2z00, BgL_bgl_string4418za700za7za7_4589za7, "STATE-1-1873", 12 );
DEFINE_STRING( BGl_string4419z00zz__r4_input_6_10_2z00, BgL_bgl_string4419za700za7za7_4590za7, "long", 4 );
DEFINE_STRING( BGl_string4421z00zz__r4_input_6_10_2z00, BgL_bgl_string4421za700za7za7_4591za7, "read-lines", 10 );
DEFINE_STRING( BGl_string4422z00zz__r4_input_6_10_2z00, BgL_bgl_string4422za700za7za7_4592za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string4424z00zz__r4_input_6_10_2z00, BgL_bgl_string4424za700za7za7_4593za7, "read-string", 11 );
DEFINE_STRING( BGl_string4425z00zz__r4_input_6_10_2z00, BgL_bgl_string4425za700za7za7_4594za7, "STATE-2-1896", 12 );
DEFINE_STRING( BGl_string4426z00zz__r4_input_6_10_2z00, BgL_bgl_string4426za700za7za7_4595za7, "STATE-1-1895", 12 );
DEFINE_STRING( BGl_string4427z00zz__r4_input_6_10_2z00, BgL_bgl_string4427za700za7za7_4596za7, "STATE-0-1894", 12 );
DEFINE_STRING( BGl_string4430z00zz__r4_input_6_10_2z00, BgL_bgl_string4430za700za7za7_4597za7, "_read-of-strings:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string4429z00zz__r4_input_6_10_2z00, BgL_bgl_string4429za700za7za7_4598za7, "read-of-strings", 15 );
DEFINE_STRING( BGl_string4433z00zz__r4_input_6_10_2z00, BgL_bgl_string4433za700za7za7_4599za7, "*read-of-strings-grammar*", 25 );
DEFINE_STRING( BGl_string4435z00zz__r4_input_6_10_2z00, BgL_bgl_string4435za700za7za7_4600za7, "ip", 2 );
DEFINE_STRING( BGl_string4436z00zz__r4_input_6_10_2z00, BgL_bgl_string4436za700za7za7_4601za7, "read-of-strings:Wrong number of arguments", 41 );
DEFINE_STRING( BGl_string4438z00zz__r4_input_6_10_2z00, BgL_bgl_string4438za700za7za7_4602za7, "read-chars", 10 );
DEFINE_STRING( BGl_string4440z00zz__r4_input_6_10_2z00, BgL_bgl_string4440za700za7za7_4603za7, "integer", 7 );
DEFINE_STRING( BGl_string4439z00zz__r4_input_6_10_2z00, BgL_bgl_string4439za700za7za7_4604za7, "wrong number of arguments: [1..2] expected, provided", 52 );
DEFINE_STRING( BGl_string4441z00zz__r4_input_6_10_2z00, BgL_bgl_string4441za700za7za7_4605za7, "Illegal negative length", 23 );
DEFINE_STRING( BGl_string4443z00zz__r4_input_6_10_2z00, BgL_bgl_string4443za700za7za7_4606za7, "read-chars!", 11 );
DEFINE_STRING( BGl_string4444z00zz__r4_input_6_10_2z00, BgL_bgl_string4444za700za7za7_4607za7, "wrong number of arguments: [2..3] expected, provided", 52 );
DEFINE_STRING( BGl_string4445z00zz__r4_input_6_10_2z00, BgL_bgl_string4445za700za7za7_4608za7, "_read-chars!", 12 );
DEFINE_STRING( BGl_string4447z00zz__r4_input_6_10_2z00, BgL_bgl_string4447za700za7za7_4609za7, "read-fill-string!", 17 );
DEFINE_STRING( BGl_string4448z00zz__r4_input_6_10_2z00, BgL_bgl_string4448za700za7za7_4610za7, "wrong number of arguments: [3..4] expected, provided", 52 );
DEFINE_STRING( BGl_string4450z00zz__r4_input_6_10_2z00, BgL_bgl_string4450za700za7za7_4611za7, "int", 3 );
DEFINE_STRING( BGl_string4449z00zz__r4_input_6_10_2z00, BgL_bgl_string4449za700za7za7_4612za7, "_read-fill-string!", 18 );
DEFINE_STRING( BGl_string4452z00zz__r4_input_6_10_2z00, BgL_bgl_string4452za700za7za7_4613za7, "unread-char!", 12 );
DEFINE_STRING( BGl_string4453z00zz__r4_input_6_10_2z00, BgL_bgl_string4453za700za7za7_4614za7, "_unread-char!", 13 );
DEFINE_STRING( BGl_string4454z00zz__r4_input_6_10_2z00, BgL_bgl_string4454za700za7za7_4615za7, "char", 4 );
DEFINE_STRING( BGl_string4455z00zz__r4_input_6_10_2z00, BgL_bgl_string4455za700za7za7_4616za7, "Unread char failed", 18 );
DEFINE_STRING( BGl_string4457z00zz__r4_input_6_10_2z00, BgL_bgl_string4457za700za7za7_4617za7, "unread-string!", 14 );
DEFINE_STRING( BGl_string4458z00zz__r4_input_6_10_2z00, BgL_bgl_string4458za700za7za7_4618za7, "_unread-string!", 15 );
DEFINE_STRING( BGl_string4459z00zz__r4_input_6_10_2z00, BgL_bgl_string4459za700za7za7_4619za7, "Unread string failed", 20 );
DEFINE_STRING( BGl_string4461z00zz__r4_input_6_10_2z00, BgL_bgl_string4461za700za7za7_4620za7, "unread-substring!", 17 );
DEFINE_STRING( BGl_string4462z00zz__r4_input_6_10_2z00, BgL_bgl_string4462za700za7za7_4621za7, "_unread-substring!", 18 );
DEFINE_STRING( BGl_string4463z00zz__r4_input_6_10_2z00, BgL_bgl_string4463za700za7za7_4622za7, "Invalid positional parameters", 29 );
DEFINE_STRING( BGl_string4465z00zz__r4_input_6_10_2z00, BgL_bgl_string4465za700za7za7_4623za7, "unread-sustring!", 16 );
DEFINE_STRING( BGl_string4466z00zz__r4_input_6_10_2z00, BgL_bgl_string4466za700za7za7_4624za7, "loop:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string4467z00zz__r4_input_6_10_2z00, BgL_bgl_string4467za700za7za7_4625za7, "_port->string-list", 18 );
DEFINE_STRING( BGl_string4470z00zz__r4_input_6_10_2z00, BgL_bgl_string4470za700za7za7_4626za7, "Can't seek port", 15 );
DEFINE_STRING( BGl_string4469z00zz__r4_input_6_10_2z00, BgL_bgl_string4469za700za7za7_4627za7, "set-input-port-position!", 24 );
DEFINE_STRING( BGl_string4471z00zz__r4_input_6_10_2z00, BgL_bgl_string4471za700za7za7_4628za7, "file:", 5 );
DEFINE_STRING( BGl_string4472z00zz__r4_input_6_10_2z00, BgL_bgl_string4472za700za7za7_4629za7, "file->string", 12 );
DEFINE_STRING( BGl_string4473z00zz__r4_input_6_10_2z00, BgL_bgl_string4473za700za7za7_4630za7, "_file->string", 13 );
DEFINE_STRING( BGl_string4474z00zz__r4_input_6_10_2z00, BgL_bgl_string4474za700za7za7_4631za7, "send-chars/size", 15 );
DEFINE_STRING( BGl_string4475z00zz__r4_input_6_10_2z00, BgL_bgl_string4475za700za7za7_4632za7, "_send-chars/size", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_readzd2ofzd2stringszd2envzd2zz__r4_input_6_10_2z00, BgL_bgl__readza7d2ofza7d2str4633z00, opt_generic_entry, BGl__readzd2ofzd2stringsz00zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_STRING( BGl_string4476z00zz__r4_input_6_10_2z00, BgL_bgl_string4476za700za7za7_4634za7, "output-port", 11 );
DEFINE_STRING( BGl_string4477z00zz__r4_input_6_10_2z00, BgL_bgl_string4477za700za7za7_4635za7, "elong", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_readzd2stringzd2envz00zz__r4_input_6_10_2z00, BgL_bgl__readza7d2stringza7d4636z00, opt_generic_entry, BGl__readzd2stringzd2zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_STRING( BGl_string4480z00zz__r4_input_6_10_2z00, BgL_bgl_string4480za700za7za7_4637za7, "wrong number of arguments: [2..4] expected, provided", 52 );
DEFINE_STRING( BGl_string4479z00zz__r4_input_6_10_2z00, BgL_bgl_string4479za700za7za7_4638za7, "send-chars::long", 16 );
DEFINE_STRING( BGl_string4481z00zz__r4_input_6_10_2z00, BgL_bgl_string4481za700za7za7_4639za7, "_send-chars", 11 );
DEFINE_STRING( BGl_string4483z00zz__r4_input_6_10_2z00, BgL_bgl_string4483za700za7za7_4640za7, "send-chars", 10 );
DEFINE_STRING( BGl_string4484z00zz__r4_input_6_10_2z00, BgL_bgl_string4484za700za7za7_4641za7, "Illegal size", 12 );
DEFINE_STRING( BGl_string4485z00zz__r4_input_6_10_2z00, BgL_bgl_string4485za700za7za7_4642za7, "Illegal offset", 14 );
DEFINE_STRING( BGl_string4487z00zz__r4_input_6_10_2z00, BgL_bgl_string4487za700za7za7_4643za7, "send-file::long", 15 );
DEFINE_STRING( BGl_string4488z00zz__r4_input_6_10_2z00, BgL_bgl_string4488za700za7za7_4644za7, "_send-file", 10 );
DEFINE_STRING( BGl_string4490z00zz__r4_input_6_10_2z00, BgL_bgl_string4490za700za7za7_4645za7, "<exit:3116>", 11 );
DEFINE_STRING( BGl_string4489z00zz__r4_input_6_10_2z00, BgL_bgl_string4489za700za7za7_4646za7, "send-file", 9 );
DEFINE_STRING( BGl_string4491z00zz__r4_input_6_10_2z00, BgL_bgl_string4491za700za7za7_4647za7, "_file-lines", 11 );
DEFINE_STRING( BGl_string4493z00zz__r4_input_6_10_2z00, BgL_bgl_string4493za700za7za7_4648za7, "file-lines", 10 );
DEFINE_STRING( BGl_string4494z00zz__r4_input_6_10_2z00, BgL_bgl_string4494za700za7za7_4649za7, "Illegal files", 13 );
DEFINE_STRING( BGl_string4495z00zz__r4_input_6_10_2z00, BgL_bgl_string4495za700za7za7_4650za7, "_file-position->line", 20 );
DEFINE_STRING( BGl_string4497z00zz__r4_input_6_10_2z00, BgL_bgl_string4497za700za7za7_4651za7, "password", 8 );
DEFINE_STRING( BGl_string4498z00zz__r4_input_6_10_2z00, BgL_bgl_string4498za700za7za7_4652za7, "_password", 9 );
DEFINE_STRING( BGl_string4499z00zz__r4_input_6_10_2z00, BgL_bgl_string4499za700za7za7_4653za7, "__r4_input_6_10_2", 17 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_readzd2charsz12zd2envz12zz__r4_input_6_10_2z00, BgL_bgl__readza7d2charsza7124654z00, opt_generic_entry, BGl__readzd2charsz12zc0zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_peekzd2charzd2envz00zz__r4_input_6_10_2z00, BgL_bgl__peekza7d2charza7d2za74655za7, opt_generic_entry, BGl__peekzd2charzd2zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_readzd2linezd2newlinezd2envzd2zz__r4_input_6_10_2z00, BgL_bgl__readza7d2lineza7d2n4656z00, opt_generic_entry, BGl__readzd2linezd2newlinez00zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_sendzd2filezd2envz00zz__r4_input_6_10_2z00, BgL_bgl__sendza7d2fileza7d2za74657za7, opt_generic_entry, BGl__sendzd2filezd2zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2readyzf3zd2envzf3zz__r4_input_6_10_2z00, BgL_bgl__charza7d2readyza7f34658z00, opt_generic_entry, BGl__charzd2readyzf3z21zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_readzf2rpzd2envz20zz__r4_input_6_10_2z00, BgL_bgl__readza7f2rpza7f2za7za7_4659z00, va_generic_entry, BGl__readzf2rpzf2zz__r4_input_6_10_2z00, BUNSPEC, -3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2positionzd2ze3linezd2envz31zz__r4_input_6_10_2z00, BgL_bgl__fileza7d2position4660za7, BGl__filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_portzd2ze3stringzd2listzd2envz31zz__r4_input_6_10_2z00, BgL_bgl__portza7d2za7e3strin4661z00, BGl__portzd2ze3stringzd2listze3zz__r4_input_6_10_2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_readzd2charszd2envz00zz__r4_input_6_10_2z00, BgL_bgl__readza7d2charsza7d24662z00, opt_generic_entry, BGl__readzd2charszd2zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_peekzd2bytezd2envz00zz__r4_input_6_10_2z00, BgL_bgl__peekza7d2byteza7d2za74663za7, opt_generic_entry, BGl__peekzd2bytezd2zz__r4_input_6_10_2z00, BFALSE, -1 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long BgL_checksumz00_5508, char * BgL_fromz00_5509)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r4_input_6_10_2z00))
{ 
BGl_requirezd2initializa7ationz75zz__r4_input_6_10_2z00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__r4_input_6_10_2z00(); 
BGl_importedzd2moduleszd2initz00zz__r4_input_6_10_2z00(); 
BGl_toplevelzd2initzd2zz__r4_input_6_10_2z00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__r4_input_6_10_2z00()
{ AN_OBJECT;
{ /* Ieee/input.scm 14 */
BGl_symbol4334z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4335z00zz__r4_input_6_10_2z00); 
BGl_symbol4338z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4339z00zz__r4_input_6_10_2z00); 
BGl_symbol4340z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4341z00zz__r4_input_6_10_2z00); 
BGl_symbol4343z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4344z00zz__r4_input_6_10_2z00); 
BGl_symbol4347z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4348z00zz__r4_input_6_10_2z00); 
BGl_symbol4350z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4351z00zz__r4_input_6_10_2z00); 
BGl_symbol4352z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4353z00zz__r4_input_6_10_2z00); 
BGl_symbol4355z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4356z00zz__r4_input_6_10_2z00); 
BGl_list4354z00zz__r4_input_6_10_2z00 = 
MAKE_PAIR(BGl_symbol4355z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BNIL, BNIL)); 
BGl_list4349z00zz__r4_input_6_10_2z00 = 
MAKE_PAIR(BGl_symbol4350z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_symbol4352z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_list4354z00zz__r4_input_6_10_2z00, BNIL))); 
BGl_list4346z00zz__r4_input_6_10_2z00 = 
MAKE_PAIR(BGl_symbol4347z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_list4349z00zz__r4_input_6_10_2z00, BNIL)); 
BGl_list4345z00zz__r4_input_6_10_2z00 = 
MAKE_PAIR(BGl_list4346z00zz__r4_input_6_10_2z00, BNIL); 
BGl_symbol4358z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4359z00zz__r4_input_6_10_2z00); 
BGl_symbol4360z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4361z00zz__r4_input_6_10_2z00); 
BGl_list4357z00zz__r4_input_6_10_2z00 = 
MAKE_PAIR(BGl_symbol4358z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_symbol4360z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_symbol4347z00zz__r4_input_6_10_2z00, BNIL))); 
BGl_list4342z00zz__r4_input_6_10_2z00 = 
MAKE_PAIR(BGl_symbol4343z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_list4345z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_list4357z00zz__r4_input_6_10_2z00, BNIL))); 
BGl_list4337z00zz__r4_input_6_10_2z00 = 
MAKE_PAIR(BGl_symbol4338z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_symbol4340z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_list4342z00zz__r4_input_6_10_2z00, BNIL))); 
BGl_symbol4364z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4365z00zz__r4_input_6_10_2z00); 
BGl_list4363z00zz__r4_input_6_10_2z00 = 
MAKE_PAIR(BGl_symbol4364z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_symbol4340z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_symbol4340z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_symbol4360z00zz__r4_input_6_10_2z00, BNIL)))); 
BGl_list4366z00zz__r4_input_6_10_2z00 = 
MAKE_PAIR(BGl_symbol4364z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_symbol4340z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_symbol4340z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_symbol4360z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BUNSPEC, BNIL))))); 
BGl_symbol4372z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4373z00zz__r4_input_6_10_2z00); 
BGl_symbol4374z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4375z00zz__r4_input_6_10_2z00); 
BGl_symbol4376z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4377z00zz__r4_input_6_10_2z00); 
BGl_list4371z00zz__r4_input_6_10_2z00 = 
MAKE_PAIR(BGl_symbol4364z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_symbol4372z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_symbol4372z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_symbol4374z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_symbol4360z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_symbol4376z00zz__r4_input_6_10_2z00, BNIL)))))); 
BGl_symbol4381z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4382z00zz__r4_input_6_10_2z00); 
BGl_list4380z00zz__r4_input_6_10_2z00 = 
MAKE_PAIR(BGl_symbol4364z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_symbol4372z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_symbol4372z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_symbol4374z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_symbol4360z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_symbol4381z00zz__r4_input_6_10_2z00, BNIL)))))); 
BGl_symbol4384z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4385z00zz__r4_input_6_10_2z00); 
BGl_symbol4388z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4389z00zz__r4_input_6_10_2z00); 
BGl_symbol4391z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4392z00zz__r4_input_6_10_2z00); 
BGl_symbol4394z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4395z00zz__r4_input_6_10_2z00); 
BGl_symbol4397z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4398z00zz__r4_input_6_10_2z00); 
BGl_symbol4400z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4401z00zz__r4_input_6_10_2z00); 
BGl_symbol4412z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4413z00zz__r4_input_6_10_2z00); 
BGl_symbol4420z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4421z00zz__r4_input_6_10_2z00); 
BGl_symbol4423z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4424z00zz__r4_input_6_10_2z00); 
BGl_symbol4428z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4429z00zz__r4_input_6_10_2z00); 
BGl_symbol4432z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4433z00zz__r4_input_6_10_2z00); 
BGl_symbol4434z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4435z00zz__r4_input_6_10_2z00); 
BGl_list4431z00zz__r4_input_6_10_2z00 = 
MAKE_PAIR(BGl_symbol4364z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_symbol4432z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_symbol4432z00zz__r4_input_6_10_2z00, 
MAKE_PAIR(BGl_symbol4434z00zz__r4_input_6_10_2z00, BNIL)))); 
BGl_symbol4437z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4438z00zz__r4_input_6_10_2z00); 
BGl_symbol4442z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4443z00zz__r4_input_6_10_2z00); 
BGl_symbol4446z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4447z00zz__r4_input_6_10_2z00); 
BGl_symbol4451z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4452z00zz__r4_input_6_10_2z00); 
BGl_symbol4456z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4457z00zz__r4_input_6_10_2z00); 
BGl_symbol4460z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4461z00zz__r4_input_6_10_2z00); 
BGl_symbol4464z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4465z00zz__r4_input_6_10_2z00); 
BGl_symbol4468z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4469z00zz__r4_input_6_10_2z00); 
BGl_symbol4478z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4479z00zz__r4_input_6_10_2z00); 
BGl_symbol4482z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4483z00zz__r4_input_6_10_2z00); 
BGl_symbol4486z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4487z00zz__r4_input_6_10_2z00); 
BGl_symbol4492z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4493z00zz__r4_input_6_10_2z00); 
return ( 
BGl_symbol4496z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4497z00zz__r4_input_6_10_2z00), BUNSPEC) ;} 
}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__r4_input_6_10_2z00()
{ AN_OBJECT;
{ /* Ieee/input.scm 14 */
return ( 
BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00 = BGl_proc4313z00zz__r4_input_6_10_2z00, BUNSPEC) ;} 
}



/* <anonymous:2086> */
obj_t BGl_zc3anonymousza32086ze3z83zz__r4_input_6_10_2z00(obj_t BgL_envz00_4787, obj_t BgL_inputzd2portzd2_4788)
{ AN_OBJECT;
{ /* Ieee/input.scm 298 */
{ 
obj_t BgL_inputzd2portzd2_887;
BgL_inputzd2portzd2_887 = BgL_inputzd2portzd2_4788; 
{ 
int BgL_minz00_1023;int BgL_maxz00_1024;obj_t BgL_inputzd2portzd2_1002;long BgL_lastzd2matchzd2_1003;obj_t BgL_inputzd2portzd2_990;long BgL_lastzd2matchzd2_991;obj_t BgL_inputzd2portzd2_981;long BgL_lastzd2matchzd2_982;obj_t BgL_inputzd2portzd2_969;long BgL_lastzd2matchzd2_970;obj_t BgL_inputzd2portzd2_957;long BgL_lastzd2matchzd2_958;obj_t BgL_inputzd2portzd2_947;long BgL_lastzd2matchzd2_948;obj_t BgL_inputzd2portzd2_936;long BgL_lastzd2matchzd2_937;obj_t BgL_inputzd2portzd2_928;long BgL_lastzd2matchzd2_929;
{ /* Ieee/input.scm 298 */
bool_t BgL_testz00_5598;
{ /* Ieee/input.scm 298 */
obj_t BgL_arg2092z00_927;
{ /* Ieee/input.scm 298 */
obj_t BgL_res3589z00_3732;
if(
INPUT_PORTP(BgL_inputzd2portzd2_887))
{ /* Ieee/input.scm 298 */
BgL_res3589z00_3732 = BgL_inputzd2portzd2_887; }  else 
{ 
obj_t BgL_auxz00_5601;
BgL_auxz00_5601 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11894)), BGl_string4331z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_887); 
FAILURE(BgL_auxz00_5601,BFALSE,BFALSE);} 
BgL_arg2092z00_927 = BgL_res3589z00_3732; } 
BgL_testz00_5598 = 
INPUT_PORT_CLOSEP(BgL_arg2092z00_927); } 
if(BgL_testz00_5598)
{ /* Ieee/input.scm 298 */
return 
BGl_errorz00zz__errorz00(BGl_string4329z00zz__r4_input_6_10_2z00, BGl_string4332z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_887);}  else 
{ /* Ieee/input.scm 298 */
BgL_zc3anonymousza32210ze3z83_1093:
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_3863;
if(
INPUT_PORTP(BgL_inputzd2portzd2_887))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_3863 = BgL_inputzd2portzd2_887; }  else 
{ 
obj_t BgL_auxz00_5609;
BgL_auxz00_5609 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11894)), BGl_string4328z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_887); 
FAILURE(BgL_auxz00_5609,BFALSE,BFALSE);} 
RGC_START_MATCH(BgL_inputzd2portzd2_3863); } 
{ /* Ieee/input.scm 298 */
long BgL_matchz00_1094;
BgL_inputzd2portzd2_936 = BgL_inputzd2portzd2_887; 
BgL_lastzd2matchzd2_937 = ((long)4); 
BgL_zc3anonymousza32098ze3z83_938:
{ /* Ieee/input.scm 298 */
int BgL_currentzd2charzd2_939;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_3742;
if(
INPUT_PORTP(BgL_inputzd2portzd2_936))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_3742 = BgL_inputzd2portzd2_936; }  else 
{ 
obj_t BgL_auxz00_5616;
BgL_auxz00_5616 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11894)), BGl_string4317z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_936); 
FAILURE(BgL_auxz00_5616,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_939 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3742); } 
if(
(
(long)(BgL_currentzd2charzd2_939)==((long)0)))
{ /* Ieee/input.scm 298 */
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_936))
{ /* Ieee/input.scm 298 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_936))
{ 

goto BgL_zc3anonymousza32098ze3z83_938;}  else 
{ /* Ieee/input.scm 298 */
BgL_matchz00_1094 = BgL_lastzd2matchzd2_937; } }  else 
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_969 = BgL_inputzd2portzd2_936; 
BgL_lastzd2matchzd2_970 = BgL_lastzd2matchzd2_937; 
BgL_zc3anonymousza32120ze3z83_971:
{ /* Ieee/input.scm 298 */
long BgL_newzd2matchzd2_972;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_3784;
if(
INPUT_PORTP(BgL_inputzd2portzd2_969))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_3784 = BgL_inputzd2portzd2_969; }  else 
{ 
obj_t BgL_auxz00_5630;
BgL_auxz00_5630 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11894)), BGl_string4320z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_969); 
FAILURE(BgL_auxz00_5630,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_3784); } 
BgL_newzd2matchzd2_972 = ((long)3); 
{ /* Ieee/input.scm 298 */
int BgL_currentzd2charzd2_973;
BgL_currentzd2charzd2_973 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_969); 
if(
(
(long)(BgL_currentzd2charzd2_973)==((long)0)))
{ /* Ieee/input.scm 298 */
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_969))
{ /* Ieee/input.scm 298 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_969))
{ 

goto BgL_zc3anonymousza32120ze3z83_971;}  else 
{ /* Ieee/input.scm 298 */
BgL_matchz00_1094 = BgL_newzd2matchzd2_972; } }  else 
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_957 = BgL_inputzd2portzd2_969; 
BgL_lastzd2matchzd2_958 = BgL_newzd2matchzd2_972; 
BgL_zc3anonymousza32112ze3z83_959:
{ /* Ieee/input.scm 298 */
long BgL_newzd2matchzd2_960;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_3770;
if(
INPUT_PORTP(BgL_inputzd2portzd2_957))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_3770 = BgL_inputzd2portzd2_957; }  else 
{ 
obj_t BgL_auxz00_5645;
BgL_auxz00_5645 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11894)), BGl_string4319z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_957); 
FAILURE(BgL_auxz00_5645,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_3770); } 
BgL_newzd2matchzd2_960 = ((long)3); 
{ /* Ieee/input.scm 298 */
int BgL_currentzd2charzd2_961;
BgL_currentzd2charzd2_961 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_957); 
if(
(
(long)(BgL_currentzd2charzd2_961)==((long)0)))
{ /* Ieee/input.scm 298 */
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_957))
{ /* Ieee/input.scm 298 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_957))
{ 

goto BgL_zc3anonymousza32112ze3z83_959;}  else 
{ /* Ieee/input.scm 298 */
BgL_matchz00_1094 = BgL_newzd2matchzd2_960; } }  else 
{ 
long BgL_lastzd2matchzd2_5658;
BgL_lastzd2matchzd2_5658 = BgL_newzd2matchzd2_960; 
BgL_lastzd2matchzd2_958 = BgL_lastzd2matchzd2_5658; 
goto BgL_zc3anonymousza32112ze3z83_959;} }  else 
{ /* Ieee/input.scm 298 */
bool_t BgL_testz00_5659;
{ /* Ieee/input.scm 298 */
bool_t BgL_testz00_5660;
if(
(
(long)(BgL_currentzd2charzd2_961)==((long)10)))
{ /* Ieee/input.scm 298 */
BgL_testz00_5660 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 298 */
BgL_testz00_5660 = 
(
(long)(BgL_currentzd2charzd2_961)==((long)9))
; } 
if(BgL_testz00_5660)
{ /* Ieee/input.scm 298 */
BgL_testz00_5659 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 298 */
if(
(
(long)(BgL_currentzd2charzd2_961)==((long)32)))
{ /* Ieee/input.scm 298 */
BgL_testz00_5659 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 298 */
BgL_testz00_5659 = 
(
(long)(BgL_currentzd2charzd2_961)==((long)34))
; } } } 
if(BgL_testz00_5659)
{ /* Ieee/input.scm 298 */
BgL_matchz00_1094 = BgL_newzd2matchzd2_960; }  else 
{ 
long BgL_lastzd2matchzd2_5671;
BgL_lastzd2matchzd2_5671 = BgL_newzd2matchzd2_960; 
BgL_lastzd2matchzd2_958 = BgL_lastzd2matchzd2_5671; 
goto BgL_zc3anonymousza32112ze3z83_959;} } } } } }  else 
{ /* Ieee/input.scm 298 */
bool_t BgL_testz00_5672;
{ /* Ieee/input.scm 298 */
bool_t BgL_testz00_5673;
if(
(
(long)(BgL_currentzd2charzd2_973)==((long)10)))
{ /* Ieee/input.scm 298 */
BgL_testz00_5673 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 298 */
BgL_testz00_5673 = 
(
(long)(BgL_currentzd2charzd2_973)==((long)9))
; } 
if(BgL_testz00_5673)
{ /* Ieee/input.scm 298 */
BgL_testz00_5672 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 298 */
if(
(
(long)(BgL_currentzd2charzd2_973)==((long)32)))
{ /* Ieee/input.scm 298 */
BgL_testz00_5672 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 298 */
BgL_testz00_5672 = 
(
(long)(BgL_currentzd2charzd2_973)==((long)34))
; } } } 
if(BgL_testz00_5672)
{ /* Ieee/input.scm 298 */
BgL_matchz00_1094 = BgL_newzd2matchzd2_972; }  else 
{ 
long BgL_lastzd2matchzd2_5685;obj_t BgL_inputzd2portzd2_5684;
BgL_inputzd2portzd2_5684 = BgL_inputzd2portzd2_969; 
BgL_lastzd2matchzd2_5685 = BgL_newzd2matchzd2_972; 
BgL_lastzd2matchzd2_958 = BgL_lastzd2matchzd2_5685; 
BgL_inputzd2portzd2_957 = BgL_inputzd2portzd2_5684; 
goto BgL_zc3anonymousza32112ze3z83_959;} } } } } }  else 
{ /* Ieee/input.scm 298 */
if(
(
(long)(BgL_currentzd2charzd2_939)==((long)34)))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_981 = BgL_inputzd2portzd2_936; 
BgL_lastzd2matchzd2_982 = BgL_lastzd2matchzd2_937; 
BgL_zc3anonymousza32128ze3z83_983:
{ /* Ieee/input.scm 298 */
long BgL_newzd2matchzd2_984;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_3798;
if(
INPUT_PORTP(BgL_inputzd2portzd2_981))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_3798 = BgL_inputzd2portzd2_981; }  else 
{ 
obj_t BgL_auxz00_5691;
BgL_auxz00_5691 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11894)), BGl_string4321z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_981); 
FAILURE(BgL_auxz00_5691,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_3798); } 
BgL_newzd2matchzd2_984 = ((long)1); 
{ /* Ieee/input.scm 298 */
int BgL_currentzd2charzd2_985;
BgL_currentzd2charzd2_985 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_981); 
switch( 
(long)(BgL_currentzd2charzd2_985)) { case ((long)0) : 

{ /* Ieee/input.scm 298 */
bool_t BgL_testz00_5697;
{ /* Ieee/input.scm 298 */
bool_t BgL_res3592z00_3804;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_3800;
BgL_inputzd2portzd2_3800 = BgL_inputzd2portzd2_981; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3800))
{ /* Ieee/input.scm 298 */
BgL_res3592z00_3804 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3800); }  else 
{ /* Ieee/input.scm 298 */
BgL_res3592z00_3804 = ((bool_t)0); } } 
BgL_testz00_5697 = BgL_res3592z00_3804; } 
if(BgL_testz00_5697)
{ 

goto BgL_zc3anonymousza32128ze3z83_983;}  else 
{ /* Ieee/input.scm 298 */
BgL_matchz00_1094 = BgL_newzd2matchzd2_984; } } break;case ((long)92) : 

BgL_inputzd2portzd2_928 = BgL_inputzd2portzd2_981; 
BgL_lastzd2matchzd2_929 = BgL_newzd2matchzd2_984; 
BgL_zc3anonymousza32093ze3z83_930:
{ /* Ieee/input.scm 298 */
int BgL_currentzd2charzd2_931;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_3735;
if(
INPUT_PORTP(BgL_inputzd2portzd2_928))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_3735 = BgL_inputzd2portzd2_928; }  else 
{ 
obj_t BgL_auxz00_5703;
BgL_auxz00_5703 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11894)), BGl_string4315z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_928); 
FAILURE(BgL_auxz00_5703,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_931 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3735); } 
if(
(
(long)(BgL_currentzd2charzd2_931)==((long)0)))
{ /* Ieee/input.scm 298 */
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_928))
{ /* Ieee/input.scm 298 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_928))
{ 

goto BgL_zc3anonymousza32093ze3z83_930;}  else 
{ /* Ieee/input.scm 298 */
BgL_matchz00_1094 = BgL_lastzd2matchzd2_929; } }  else 
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_990 = BgL_inputzd2portzd2_928; 
BgL_lastzd2matchzd2_991 = BgL_lastzd2matchzd2_929; 
BgL_zc3anonymousza32131ze3z83_992:
{ /* Ieee/input.scm 298 */
int BgL_currentzd2charzd2_993;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_3809;
if(
INPUT_PORTP(BgL_inputzd2portzd2_990))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_3809 = BgL_inputzd2portzd2_990; }  else 
{ 
obj_t BgL_auxz00_5717;
BgL_auxz00_5717 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11894)), BGl_string4322z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_990); 
FAILURE(BgL_auxz00_5717,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_993 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3809); } 
switch( 
(long)(BgL_currentzd2charzd2_993)) { case ((long)0) : 

{ /* Ieee/input.scm 298 */
bool_t BgL_testz00_5722;
{ /* Ieee/input.scm 298 */
bool_t BgL_res3593z00_3814;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_3810;
BgL_inputzd2portzd2_3810 = BgL_inputzd2portzd2_990; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3810))
{ /* Ieee/input.scm 298 */
BgL_res3593z00_3814 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3810); }  else 
{ /* Ieee/input.scm 298 */
BgL_res3593z00_3814 = ((bool_t)0); } } 
BgL_testz00_5722 = BgL_res3593z00_3814; } 
if(BgL_testz00_5722)
{ 

goto BgL_zc3anonymousza32131ze3z83_992;}  else 
{ /* Ieee/input.scm 298 */
BgL_matchz00_1094 = BgL_lastzd2matchzd2_991; } } break;case ((long)92) : 

{ 
long BgL_lastzd2matchzd2_5727;obj_t BgL_inputzd2portzd2_5726;
BgL_inputzd2portzd2_5726 = BgL_inputzd2portzd2_990; 
BgL_lastzd2matchzd2_5727 = BgL_lastzd2matchzd2_991; 
BgL_lastzd2matchzd2_929 = BgL_lastzd2matchzd2_5727; 
BgL_inputzd2portzd2_928 = BgL_inputzd2portzd2_5726; 
goto BgL_zc3anonymousza32093ze3z83_930;} break;case ((long)34) : 

{ /* Ieee/input.scm 298 */
long BgL_newzd2matchzd2_3817;
RGC_STOP_MATCH(BgL_inputzd2portzd2_990); 
BgL_newzd2matchzd2_3817 = ((long)2); 
BgL_matchz00_1094 = BgL_newzd2matchzd2_3817; } break;
default: 
{ 

goto BgL_zc3anonymousza32131ze3z83_992;} } } } }  else 
{ /* Ieee/input.scm 298 */
if(
(
(long)(BgL_currentzd2charzd2_931)==((long)10)))
{ /* Ieee/input.scm 298 */
BgL_matchz00_1094 = BgL_lastzd2matchzd2_929; }  else 
{ 
long BgL_lastzd2matchzd2_5735;obj_t BgL_inputzd2portzd2_5734;
BgL_inputzd2portzd2_5734 = BgL_inputzd2portzd2_928; 
BgL_lastzd2matchzd2_5735 = BgL_lastzd2matchzd2_929; 
BgL_lastzd2matchzd2_991 = BgL_lastzd2matchzd2_5735; 
BgL_inputzd2portzd2_990 = BgL_inputzd2portzd2_5734; 
goto BgL_zc3anonymousza32131ze3z83_992;} } } break;case ((long)34) : 

{ /* Ieee/input.scm 298 */
long BgL_newzd2matchzd2_3807;
RGC_STOP_MATCH(BgL_inputzd2portzd2_981); 
BgL_newzd2matchzd2_3807 = ((long)2); 
BgL_matchz00_1094 = BgL_newzd2matchzd2_3807; } break;
default: 
{ 
long BgL_lastzd2matchzd2_5738;obj_t BgL_inputzd2portzd2_5737;
BgL_inputzd2portzd2_5737 = BgL_inputzd2portzd2_981; 
BgL_lastzd2matchzd2_5738 = BgL_newzd2matchzd2_984; 
BgL_lastzd2matchzd2_991 = BgL_lastzd2matchzd2_5738; 
BgL_inputzd2portzd2_990 = BgL_inputzd2portzd2_5737; 
goto BgL_zc3anonymousza32131ze3z83_992;} } } } }  else 
{ /* Ieee/input.scm 298 */
bool_t BgL_testz00_5741;
{ /* Ieee/input.scm 298 */
bool_t BgL_testz00_5742;
if(
(
(long)(BgL_currentzd2charzd2_939)==((long)10)))
{ /* Ieee/input.scm 298 */
BgL_testz00_5742 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 298 */
BgL_testz00_5742 = 
(
(long)(BgL_currentzd2charzd2_939)==((long)9))
; } 
if(BgL_testz00_5742)
{ /* Ieee/input.scm 298 */
BgL_testz00_5741 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 298 */
BgL_testz00_5741 = 
(
(long)(BgL_currentzd2charzd2_939)==((long)32))
; } } 
if(BgL_testz00_5741)
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_947 = BgL_inputzd2portzd2_936; 
BgL_lastzd2matchzd2_948 = BgL_lastzd2matchzd2_937; 
BgL_zc3anonymousza32106ze3z83_949:
{ /* Ieee/input.scm 298 */
long BgL_newzd2matchzd2_950;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_3755;
if(
INPUT_PORTP(BgL_inputzd2portzd2_947))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_3755 = BgL_inputzd2portzd2_947; }  else 
{ 
obj_t BgL_auxz00_5752;
BgL_auxz00_5752 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11894)), BGl_string4318z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_947); 
FAILURE(BgL_auxz00_5752,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_3755); } 
BgL_newzd2matchzd2_950 = ((long)0); 
{ /* Ieee/input.scm 298 */
int BgL_currentzd2charzd2_951;
BgL_currentzd2charzd2_951 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_947); 
if(
(
(long)(BgL_currentzd2charzd2_951)==((long)0)))
{ /* Ieee/input.scm 298 */
bool_t BgL_testz00_5761;
{ /* Ieee/input.scm 298 */
bool_t BgL_res3591z00_3763;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_3759;
BgL_inputzd2portzd2_3759 = BgL_inputzd2portzd2_947; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3759))
{ /* Ieee/input.scm 298 */
BgL_res3591z00_3763 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3759); }  else 
{ /* Ieee/input.scm 298 */
BgL_res3591z00_3763 = ((bool_t)0); } } 
BgL_testz00_5761 = BgL_res3591z00_3763; } 
if(BgL_testz00_5761)
{ 

goto BgL_zc3anonymousza32106ze3z83_949;}  else 
{ /* Ieee/input.scm 298 */
BgL_matchz00_1094 = BgL_newzd2matchzd2_950; } }  else 
{ /* Ieee/input.scm 298 */
bool_t BgL_testz00_5765;
{ /* Ieee/input.scm 298 */
bool_t BgL_testz00_5766;
if(
(
(long)(BgL_currentzd2charzd2_951)==((long)10)))
{ /* Ieee/input.scm 298 */
BgL_testz00_5766 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 298 */
BgL_testz00_5766 = 
(
(long)(BgL_currentzd2charzd2_951)==((long)9))
; } 
if(BgL_testz00_5766)
{ /* Ieee/input.scm 298 */
BgL_testz00_5765 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 298 */
BgL_testz00_5765 = 
(
(long)(BgL_currentzd2charzd2_951)==((long)32))
; } } 
if(BgL_testz00_5765)
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_1002 = BgL_inputzd2portzd2_947; 
BgL_lastzd2matchzd2_1003 = BgL_newzd2matchzd2_950; 
BgL_zc3anonymousza32135ze3z83_1004:
{ /* Ieee/input.scm 298 */
long BgL_newzd2matchzd2_1005;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_3821;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1002))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_3821 = BgL_inputzd2portzd2_1002; }  else 
{ 
obj_t BgL_auxz00_5776;
BgL_auxz00_5776 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11894)), BGl_string4323z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1002); 
FAILURE(BgL_auxz00_5776,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_3821); } 
BgL_newzd2matchzd2_1005 = ((long)0); 
{ /* Ieee/input.scm 298 */
int BgL_currentzd2charzd2_1006;
BgL_currentzd2charzd2_1006 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1002); 
if(
(
(long)(BgL_currentzd2charzd2_1006)==((long)0)))
{ /* Ieee/input.scm 298 */
bool_t BgL_testz00_5785;
{ /* Ieee/input.scm 298 */
bool_t BgL_res3594z00_3829;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_3825;
BgL_inputzd2portzd2_3825 = BgL_inputzd2portzd2_1002; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3825))
{ /* Ieee/input.scm 298 */
BgL_res3594z00_3829 = 
rgc_fill_buffer(BgL_inputzd2portzd2_3825); }  else 
{ /* Ieee/input.scm 298 */
BgL_res3594z00_3829 = ((bool_t)0); } } 
BgL_testz00_5785 = BgL_res3594z00_3829; } 
if(BgL_testz00_5785)
{ 

goto BgL_zc3anonymousza32135ze3z83_1004;}  else 
{ /* Ieee/input.scm 298 */
BgL_matchz00_1094 = BgL_newzd2matchzd2_1005; } }  else 
{ /* Ieee/input.scm 298 */
bool_t BgL_testz00_5789;
{ /* Ieee/input.scm 298 */
bool_t BgL_testz00_5790;
if(
(
(long)(BgL_currentzd2charzd2_1006)==((long)10)))
{ /* Ieee/input.scm 298 */
BgL_testz00_5790 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 298 */
BgL_testz00_5790 = 
(
(long)(BgL_currentzd2charzd2_1006)==((long)9))
; } 
if(BgL_testz00_5790)
{ /* Ieee/input.scm 298 */
BgL_testz00_5789 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 298 */
BgL_testz00_5789 = 
(
(long)(BgL_currentzd2charzd2_1006)==((long)32))
; } } 
if(BgL_testz00_5789)
{ 
long BgL_lastzd2matchzd2_5798;
BgL_lastzd2matchzd2_5798 = BgL_newzd2matchzd2_1005; 
BgL_lastzd2matchzd2_1003 = BgL_lastzd2matchzd2_5798; 
goto BgL_zc3anonymousza32135ze3z83_1004;}  else 
{ /* Ieee/input.scm 298 */
BgL_matchz00_1094 = BgL_newzd2matchzd2_1005; } } } } }  else 
{ /* Ieee/input.scm 298 */
BgL_matchz00_1094 = BgL_newzd2matchzd2_950; } } } } }  else 
{ 
long BgL_lastzd2matchzd2_5800;obj_t BgL_inputzd2portzd2_5799;
BgL_inputzd2portzd2_5799 = BgL_inputzd2portzd2_936; 
BgL_lastzd2matchzd2_5800 = BgL_lastzd2matchzd2_937; 
BgL_lastzd2matchzd2_970 = BgL_lastzd2matchzd2_5800; 
BgL_inputzd2portzd2_969 = BgL_inputzd2portzd2_5799; 
goto BgL_zc3anonymousza32120ze3z83_971;} } } } 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_887); 
switch( BgL_matchz00_1094) { case ((long)4) : 

{ /* Ieee/input.scm 298 */
bool_t BgL_testz00_5802;
{ /* Ieee/input.scm 298 */
long BgL_arg2203z00_1083;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_3859;
if(
INPUT_PORTP(BgL_inputzd2portzd2_887))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_3859 = BgL_inputzd2portzd2_887; }  else 
{ 
obj_t BgL_auxz00_5805;
BgL_auxz00_5805 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11894)), BGl_string4327z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_887); 
FAILURE(BgL_auxz00_5805,BFALSE,BFALSE);} 
BgL_arg2203z00_1083 = 
RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_3859); } 
BgL_testz00_5802 = 
(BgL_arg2203z00_1083==((long)0)); } 
if(BgL_testz00_5802)
{ /* Ieee/input.scm 298 */
return BCNST(256);}  else 
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_3862;
if(
INPUT_PORTP(BgL_inputzd2portzd2_887))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_3862 = BgL_inputzd2portzd2_887; }  else 
{ 
obj_t BgL_auxz00_5813;
BgL_auxz00_5813 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11894)), BGl_string4327z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_887); 
FAILURE(BgL_auxz00_5813,BFALSE,BFALSE);} 
return 
BCHAR(
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_3862));} } break;case ((long)3) : 

return 
BGl_thezd2stringz72za0zz__r4_input_6_10_2z00(BgL_inputzd2portzd2_887);break;case ((long)2) : 

BgL_minz00_1023 = 
(int)(((long)1)); 
BgL_maxz00_1024 = 
(int)(((long)-1)); 
if(
(
(long)(BgL_maxz00_1024)<((long)0)))
{ /* Ieee/input.scm 298 */
int BgL_arg2151z00_1027;
{ /* Ieee/input.scm 298 */
int BgL_res3596z00_3844;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_3843;
if(
INPUT_PORTP(BgL_inputzd2portzd2_887))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_3843 = BgL_inputzd2portzd2_887; }  else 
{ 
obj_t BgL_auxz00_5825;
BgL_auxz00_5825 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11894)), BGl_string4324z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_887); 
FAILURE(BgL_auxz00_5825,BFALSE,BFALSE);} 
BgL_res3596z00_3844 = 
(int)(
RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_3843)); } 
BgL_arg2151z00_1027 = BgL_res3596z00_3844; } 
{ /* Ieee/input.scm 298 */
long BgL_za71za7_3845;long BgL_za72za7_3846;
BgL_za71za7_3845 = 
(long)(BgL_arg2151z00_1027); 
BgL_za72za7_3846 = 
(long)(BgL_maxz00_1024); 
BgL_maxz00_1024 = 
(int)(
(BgL_za71za7_3845+BgL_za72za7_3846)); } }  else 
{ /* Ieee/input.scm 298 */BFALSE; } 
{ /* Ieee/input.scm 298 */
bool_t BgL_testz00_5835;
if(
(
(long)(BgL_minz00_1023)>=((long)0)))
{ /* Ieee/input.scm 298 */
if(
(
(long)(BgL_maxz00_1024)>=
(long)(BgL_minz00_1023)))
{ /* Ieee/input.scm 298 */
int BgL_arg2161z00_1037;
{ /* Ieee/input.scm 298 */
int BgL_res3597z00_3852;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_3851;
if(
INPUT_PORTP(BgL_inputzd2portzd2_887))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_3851 = BgL_inputzd2portzd2_887; }  else 
{ 
obj_t BgL_auxz00_5845;
BgL_auxz00_5845 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11894)), BGl_string4324z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_887); 
FAILURE(BgL_auxz00_5845,BFALSE,BFALSE);} 
BgL_res3597z00_3852 = 
(int)(
RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_3851)); } 
BgL_arg2161z00_1037 = BgL_res3597z00_3852; } 
BgL_testz00_5835 = 
(
(long)(BgL_maxz00_1024)<=
(long)(BgL_arg2161z00_1037)); }  else 
{ /* Ieee/input.scm 298 */
BgL_testz00_5835 = ((bool_t)0)
; } }  else 
{ /* Ieee/input.scm 298 */
BgL_testz00_5835 = ((bool_t)0)
; } 
if(BgL_testz00_5835)
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_3855;long BgL_startz00_3856;long BgL_stopz00_3857;
if(
INPUT_PORTP(BgL_inputzd2portzd2_887))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_3855 = BgL_inputzd2portzd2_887; }  else 
{ 
obj_t BgL_auxz00_5856;
BgL_auxz00_5856 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11894)), BGl_string4324z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_887); 
FAILURE(BgL_auxz00_5856,BFALSE,BFALSE);} 
BgL_startz00_3856 = 
(long)(BgL_minz00_1023); 
BgL_stopz00_3857 = 
(long)(BgL_maxz00_1024); 
return 
rgc_buffer_substring(BgL_inputzd2portzd2_3855, BgL_startz00_3856, BgL_stopz00_3857);}  else 
{ /* Ieee/input.scm 298 */
obj_t BgL_arg2154z00_1030;obj_t BgL_arg2155z00_1031;
{ /* Ieee/input.scm 298 */
obj_t BgL_arg2157z00_1033;
BgL_arg2157z00_1033 = 
BGl_thezd2stringz72za0zz__r4_input_6_10_2z00(BgL_inputzd2portzd2_887); 
{ /* Ieee/input.scm 298 */
obj_t BgL_list2158z00_1034;
BgL_list2158z00_1034 = 
MAKE_PAIR(BgL_arg2157z00_1033, BNIL); 
BgL_arg2154z00_1030 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string4325z00zz__r4_input_6_10_2z00, BgL_list2158z00_1034); } } 
BgL_arg2155z00_1031 = 
MAKE_PAIR(
BINT(BgL_minz00_1023), 
BINT(BgL_maxz00_1024)); 
{ /* Ieee/input.scm 298 */
obj_t BgL_aux3759z00_4920;
BgL_aux3759z00_4920 = 
BGl_errorz00zz__errorz00(BGl_string4324z00zz__r4_input_6_10_2z00, BgL_arg2154z00_1030, BgL_arg2155z00_1031); 
if(
STRINGP(BgL_aux3759z00_4920))
{ /* Ieee/input.scm 298 */
return BgL_aux3759z00_4920;}  else 
{ 
obj_t BgL_auxz00_5872;
BgL_auxz00_5872 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11894)), BGl_string4324z00zz__r4_input_6_10_2z00, BGl_string4326z00zz__r4_input_6_10_2z00, BgL_aux3759z00_4920); 
FAILURE(BgL_auxz00_5872,BFALSE,BFALSE);} } } } break;case ((long)1) : 

return 
BGl_thezd2stringz72za0zz__r4_input_6_10_2z00(BgL_inputzd2portzd2_887);break;case ((long)0) : 

goto BgL_zc3anonymousza32210ze3z83_1093;break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string4329z00zz__r4_input_6_10_2z00, BGl_string4330z00zz__r4_input_6_10_2z00, 
BINT(BgL_matchz00_1094));} } } } } } } 
}



/* the-string' */
obj_t BGl_thezd2stringz72za0zz__r4_input_6_10_2z00(obj_t BgL_inputzd2portzd2_4831)
{ AN_OBJECT;
{ /* Ieee/input.scm 298 */
{ /* Ieee/input.scm 298 */
int BgL_arg2148z00_1022;
{ /* Ieee/input.scm 298 */
int BgL_res3595z00_3837;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_3836;
if(
INPUT_PORTP(BgL_inputzd2portzd2_4831))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_3836 = BgL_inputzd2portzd2_4831; }  else 
{ 
obj_t BgL_auxz00_5884;
BgL_auxz00_5884 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11894)), BGl_string4333z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_4831); 
FAILURE(BgL_auxz00_5884,BFALSE,BFALSE);} 
BgL_res3595z00_3837 = 
(int)(
RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_3836)); } 
BgL_arg2148z00_1022 = BgL_res3595z00_3837; } 
return 
rgc_buffer_substring(BgL_inputzd2portzd2_4831, ((long)0), 
(long)(BgL_arg2148z00_1022));} } 
}



/* read/rp */
BGL_EXPORTED_DEF obj_t BGl_readzf2rpzf2zz__r4_input_6_10_2z00(obj_t BgL_grammarz00_1, obj_t BgL_portz00_2, obj_t BgL_optsz00_3)
{ AN_OBJECT;
{ /* Ieee/input.scm 103 */
if(
PAIRP(BgL_optsz00_3))
{ /* Ieee/input.scm 106 */
obj_t BgL_valz00_4939;
{ /* Ieee/input.scm 106 */
obj_t BgL_list2213z00_1133;
BgL_list2213z00_1133 = 
MAKE_PAIR(BgL_optsz00_3, BNIL); 
BgL_valz00_4939 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_portz00_2, BgL_list2213z00_1133); } 
{ /* Ieee/input.scm 106 */
int BgL_len3777z00_4940;
BgL_len3777z00_4940 = 
(int)(
bgl_list_length(BgL_valz00_4939)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_grammarz00_1, BgL_len3777z00_4940))
{ /* Ieee/input.scm 106 */
return 
apply(BgL_grammarz00_1, BgL_valz00_4939);}  else 
{ /* Ieee/input.scm 106 */
FAILURE(BGl_symbol4334z00zz__r4_input_6_10_2z00,BGl_string4336z00zz__r4_input_6_10_2z00,BGl_list4337z00zz__r4_input_6_10_2z00);} } }  else 
{ /* Ieee/input.scm 105 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_grammarz00_1, 
(int)(((long)1))))
{ /* Ieee/input.scm 107 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_grammarz00_1, ((long)1)))
{ /* Ieee/input.scm 108 */
return 
PROCEDURE_ENTRY(BgL_grammarz00_1)(BgL_grammarz00_1, BgL_portz00_2, BEOA);}  else 
{ /* Ieee/input.scm 108 */
FAILURE(BGl_string4362z00zz__r4_input_6_10_2z00,BGl_list4363z00zz__r4_input_6_10_2z00,BgL_grammarz00_1);} }  else 
{ /* Ieee/input.scm 107 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_grammarz00_1, 
(int)(((long)2))))
{ /* Ieee/input.scm 109 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_grammarz00_1, ((long)2)))
{ /* Ieee/input.scm 110 */
return 
PROCEDURE_ENTRY(BgL_grammarz00_1)(BgL_grammarz00_1, BgL_portz00_2, BUNSPEC, BEOA);}  else 
{ /* Ieee/input.scm 110 */
FAILURE(BGl_string4362z00zz__r4_input_6_10_2z00,BGl_list4366z00zz__r4_input_6_10_2z00,BgL_grammarz00_1);} }  else 
{ /* Ieee/input.scm 109 */
return 
BGl_errorz00zz__errorz00(BGl_symbol4334z00zz__r4_input_6_10_2z00, BGl_string4367z00zz__r4_input_6_10_2z00, BgL_grammarz00_1);} } } } 
}



/* _read/rp */
obj_t BGl__readzf2rpzf2zz__r4_input_6_10_2z00(obj_t BgL_envz00_4789, obj_t BgL_grammarz00_4790, obj_t BgL_portz00_4791, obj_t BgL_optsz00_4792)
{ AN_OBJECT;
{ /* Ieee/input.scm 103 */
{ /* Ieee/input.scm 105 */
obj_t BgL_auxz00_5927;obj_t BgL_auxz00_5920;
if(
INPUT_PORTP(BgL_portz00_4791))
{ /* Ieee/input.scm 105 */
BgL_auxz00_5927 = BgL_portz00_4791
; }  else 
{ 
obj_t BgL_auxz00_5930;
BgL_auxz00_5930 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)4584)), BGl_string4368z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_portz00_4791); 
FAILURE(BgL_auxz00_5930,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_grammarz00_4790))
{ /* Ieee/input.scm 105 */
BgL_auxz00_5920 = BgL_grammarz00_4790
; }  else 
{ 
obj_t BgL_auxz00_5923;
BgL_auxz00_5923 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)4584)), BGl_string4368z00zz__r4_input_6_10_2z00, BGl_string4369z00zz__r4_input_6_10_2z00, BgL_grammarz00_4790); 
FAILURE(BgL_auxz00_5923,BFALSE,BFALSE);} 
return 
BGl_readzf2rpzf2zz__r4_input_6_10_2z00(BgL_auxz00_5920, BgL_auxz00_5927, BgL_optsz00_4792);} } 
}



/* read/lalrp */
BGL_EXPORTED_DEF obj_t BGl_readzf2lalrpzf2zz__r4_input_6_10_2z00(obj_t BgL_lalrz00_4, obj_t BgL_rgcz00_5, obj_t BgL_portz00_6, obj_t BgL_eofzd2funzf3z21_7)
{ AN_OBJECT;
{ /* Ieee/input.scm 117 */
if(
NULLP(BgL_eofzd2funzf3z21_7))
{ /* Ieee/input.scm 118 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_lalrz00_4, ((long)3)))
{ /* Ieee/input.scm 118 */
return 
PROCEDURE_ENTRY(BgL_lalrz00_4)(BgL_lalrz00_4, BgL_rgcz00_5, BgL_portz00_6, BGl_eofzd2objectzf3zd2envzf3zz__r4_input_6_10_2z00, BEOA);}  else 
{ /* Ieee/input.scm 118 */
FAILURE(BGl_string4370z00zz__r4_input_6_10_2z00,BGl_list4371z00zz__r4_input_6_10_2z00,BgL_lalrz00_4);} }  else 
{ /* Ieee/input.scm 118 */
obj_t BgL_arg2217z00_3867;
{ /* Ieee/input.scm 118 */
obj_t BgL_pairz00_3869;
if(
PAIRP(BgL_eofzd2funzf3z21_7))
{ /* Ieee/input.scm 118 */
BgL_pairz00_3869 = BgL_eofzd2funzf3z21_7; }  else 
{ 
obj_t BgL_auxz00_5944;
BgL_auxz00_5944 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)5102)), BGl_string4378z00zz__r4_input_6_10_2z00, BGl_string4379z00zz__r4_input_6_10_2z00, BgL_eofzd2funzf3z21_7); 
FAILURE(BgL_auxz00_5944,BFALSE,BFALSE);} 
BgL_arg2217z00_3867 = 
CAR(BgL_pairz00_3869); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_lalrz00_4, ((long)3)))
{ /* Ieee/input.scm 118 */
return 
PROCEDURE_ENTRY(BgL_lalrz00_4)(BgL_lalrz00_4, BgL_rgcz00_5, BgL_portz00_6, BgL_arg2217z00_3867, BEOA);}  else 
{ /* Ieee/input.scm 118 */
FAILURE(BGl_string4370z00zz__r4_input_6_10_2z00,BGl_list4380z00zz__r4_input_6_10_2z00,BgL_lalrz00_4);} } } 
}



/* _read/lalrp */
obj_t BGl__readzf2lalrpzf2zz__r4_input_6_10_2z00(obj_t BgL_envz00_4793, obj_t BgL_lalrz00_4794, obj_t BgL_rgcz00_4795, obj_t BgL_portz00_4796, obj_t BgL_eofzd2funzf3z21_4797)
{ AN_OBJECT;
{ /* Ieee/input.scm 117 */
{ /* Ieee/input.scm 118 */
obj_t BgL_auxz00_5968;obj_t BgL_auxz00_5961;obj_t BgL_auxz00_5954;
if(
INPUT_PORTP(BgL_portz00_4796))
{ /* Ieee/input.scm 118 */
BgL_auxz00_5968 = BgL_portz00_4796
; }  else 
{ 
obj_t BgL_auxz00_5971;
BgL_auxz00_5971 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)5102)), BGl_string4383z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_portz00_4796); 
FAILURE(BgL_auxz00_5971,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_rgcz00_4795))
{ /* Ieee/input.scm 118 */
BgL_auxz00_5961 = BgL_rgcz00_4795
; }  else 
{ 
obj_t BgL_auxz00_5964;
BgL_auxz00_5964 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)5102)), BGl_string4383z00zz__r4_input_6_10_2z00, BGl_string4369z00zz__r4_input_6_10_2z00, BgL_rgcz00_4795); 
FAILURE(BgL_auxz00_5964,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_lalrz00_4794))
{ /* Ieee/input.scm 118 */
BgL_auxz00_5954 = BgL_lalrz00_4794
; }  else 
{ 
obj_t BgL_auxz00_5957;
BgL_auxz00_5957 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)5102)), BGl_string4383z00zz__r4_input_6_10_2z00, BGl_string4369z00zz__r4_input_6_10_2z00, BgL_lalrz00_4794); 
FAILURE(BgL_auxz00_5957,BFALSE,BFALSE);} 
return 
BGl_readzf2lalrpzf2zz__r4_input_6_10_2z00(BgL_auxz00_5954, BgL_auxz00_5961, BgL_auxz00_5968, BgL_eofzd2funzf3z21_4797);} } 
}



/* _read-char */
obj_t BGl__readzd2charzd2zz__r4_input_6_10_2z00(obj_t BgL_envz00_10, obj_t BgL_optz00_9)
{ AN_OBJECT;
{ /* Ieee/input.scm 125 */
{ /* Ieee/input.scm 125 */

{ 

{ /* Ieee/input.scm 125 */
int BgL_aux2008z00_1139;
BgL_aux2008z00_1139 = 
VECTOR_LENGTH(BgL_optz00_9); 
switch( 
(long)(BgL_aux2008z00_1139)) { case ((long)0) : 

{ /* Ieee/input.scm 125 */
obj_t BgL_ipz00_1141;
{ /* Ieee/input.scm 125 */
obj_t BgL_res3598z00_3871;
{ /* Ieee/input.scm 125 */
obj_t BgL_auxz00_5977;
BgL_auxz00_5977 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3598z00_3871 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_5977); } 
BgL_ipz00_1141 = BgL_res3598z00_3871; } 
{ /* Ieee/input.scm 125 */

return 
BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_1141);} } break;case ((long)1) : 

{ /* Ieee/input.scm 125 */
obj_t BgL_ipz00_1142;
BgL_ipz00_1142 = 
VECTOR_REF(BgL_optz00_9,
(int)(((long)0))); 
{ /* Ieee/input.scm 125 */

return 
BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_1142);} } break;
default: 
{ /* Ieee/input.scm 125 */
obj_t BgL_arg2222z00_1143;int BgL_arg2224z00_1145;
BgL_arg2222z00_1143 = BGl_symbol4384z00zz__r4_input_6_10_2z00; 
BgL_arg2224z00_1145 = 
VECTOR_LENGTH(BgL_optz00_9); 
return 
BGl_errorz00zz__errorz00(BgL_arg2222z00_1143, BGl_string4386z00zz__r4_input_6_10_2z00, 
BINT(BgL_arg2224z00_1145));} } } } } } 
}



/* read-char */
BGL_EXPORTED_DEF obj_t BGl_readzd2charzd2zz__r4_input_6_10_2z00(obj_t BgL_ipz00_8)
{ AN_OBJECT;
{ /* Ieee/input.scm 125 */
{ 
obj_t BgL_inputzd2portzd2_1148;
BgL_inputzd2portzd2_1148 = BgL_ipz00_8; 
{ 
obj_t BgL_inputzd2portzd2_1186;long BgL_lastzd2matchzd2_1187;
{ /* Ieee/input.scm 126 */
bool_t BgL_testz00_5989;
{ /* Ieee/input.scm 126 */
obj_t BgL_arg2234z00_1181;
{ /* Ieee/input.scm 126 */
obj_t BgL_res3599z00_3872;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1148))
{ /* Ieee/input.scm 126 */
BgL_res3599z00_3872 = BgL_inputzd2portzd2_1148; }  else 
{ 
obj_t BgL_auxz00_5992;
BgL_auxz00_5992 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)5496)), BGl_string4341z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1148); 
FAILURE(BgL_auxz00_5992,BFALSE,BFALSE);} 
BgL_arg2234z00_1181 = BgL_res3599z00_3872; } 
BgL_testz00_5989 = 
INPUT_PORT_CLOSEP(BgL_arg2234z00_1181); } 
if(BgL_testz00_5989)
{ /* Ieee/input.scm 126 */
return 
BGl_errorz00zz__errorz00(BGl_string4329z00zz__r4_input_6_10_2z00, BGl_string4332z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1148);}  else 
{ /* Ieee/input.scm 126 */
{ /* Ieee/input.scm 126 */
obj_t BgL_inputzd2portzd2_3895;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1148))
{ /* Ieee/input.scm 126 */
BgL_inputzd2portzd2_3895 = BgL_inputzd2portzd2_1148; }  else 
{ 
obj_t BgL_auxz00_6000;
BgL_auxz00_6000 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)5496)), BGl_string4328z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1148); 
FAILURE(BgL_auxz00_6000,BFALSE,BFALSE);} 
RGC_START_MATCH(BgL_inputzd2portzd2_3895); } 
{ /* Ieee/input.scm 126 */
long BgL_matchz00_1275;
BgL_inputzd2portzd2_1186 = BgL_inputzd2portzd2_1148; 
BgL_lastzd2matchzd2_1187 = ((long)1); 
BgL_zc3anonymousza32236ze3z83_1188:
{ /* Ieee/input.scm 126 */
int BgL_currentzd2charzd2_1189;
{ /* Ieee/input.scm 126 */
obj_t BgL_inputzd2portzd2_3877;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1186))
{ /* Ieee/input.scm 126 */
BgL_inputzd2portzd2_3877 = BgL_inputzd2portzd2_1186; }  else 
{ 
obj_t BgL_auxz00_6007;
BgL_auxz00_6007 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)5496)), BGl_string4387z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1186); 
FAILURE(BgL_auxz00_6007,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_1189 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3877); } 
if(
(
(long)(BgL_currentzd2charzd2_1189)==((long)0)))
{ /* Ieee/input.scm 126 */
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1186))
{ /* Ieee/input.scm 126 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_1186))
{ 

goto BgL_zc3anonymousza32236ze3z83_1188;}  else 
{ /* Ieee/input.scm 126 */
BgL_matchz00_1275 = BgL_lastzd2matchzd2_1187; } }  else 
{ /* Ieee/input.scm 126 */
long BgL_newzd2matchzd2_3884;
RGC_STOP_MATCH(BgL_inputzd2portzd2_1186); 
BgL_newzd2matchzd2_3884 = ((long)0); 
BgL_matchz00_1275 = BgL_newzd2matchzd2_3884; } }  else 
{ /* Ieee/input.scm 126 */
long BgL_newzd2matchzd2_3888;
RGC_STOP_MATCH(BgL_inputzd2portzd2_1186); 
BgL_newzd2matchzd2_3888 = ((long)0); 
BgL_matchz00_1275 = BgL_newzd2matchzd2_3888; } } 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_1148); 
switch( BgL_matchz00_1275) { case ((long)1) : 

{ /* Ieee/input.scm 126 */
bool_t BgL_testz00_6022;
{ /* Ieee/input.scm 126 */
long BgL_arg2304z00_1264;
{ /* Ieee/input.scm 126 */
obj_t BgL_inputzd2portzd2_3891;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1148))
{ /* Ieee/input.scm 126 */
BgL_inputzd2portzd2_3891 = BgL_inputzd2portzd2_1148; }  else 
{ 
obj_t BgL_auxz00_6025;
BgL_auxz00_6025 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)5496)), BGl_string4327z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1148); 
FAILURE(BgL_auxz00_6025,BFALSE,BFALSE);} 
BgL_arg2304z00_1264 = 
RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_3891); } 
BgL_testz00_6022 = 
(BgL_arg2304z00_1264==((long)0)); } 
if(BgL_testz00_6022)
{ /* Ieee/input.scm 126 */
return BCNST(256);}  else 
{ /* Ieee/input.scm 126 */
obj_t BgL_inputzd2portzd2_3894;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1148))
{ /* Ieee/input.scm 126 */
BgL_inputzd2portzd2_3894 = BgL_inputzd2portzd2_1148; }  else 
{ 
obj_t BgL_auxz00_6033;
BgL_auxz00_6033 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)5496)), BGl_string4327z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1148); 
FAILURE(BgL_auxz00_6033,BFALSE,BFALSE);} 
return 
BCHAR(
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_3894));} } break;case ((long)0) : 

{ /* Ieee/input.scm 127 */
obj_t BgL_inputzd2portzd2_3897;
BgL_inputzd2portzd2_3897 = BgL_inputzd2portzd2_1148; 
return 
BCHAR(
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_3897));} break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string4329z00zz__r4_input_6_10_2z00, BGl_string4330z00zz__r4_input_6_10_2z00, 
BINT(BgL_matchz00_1275));} } } } } } } 
}



/* _peek-char */
obj_t BGl__peekzd2charzd2zz__r4_input_6_10_2z00(obj_t BgL_envz00_13, obj_t BgL_optz00_12)
{ AN_OBJECT;
{ /* Ieee/input.scm 133 */
{ /* Ieee/input.scm 133 */

{ 

{ /* Ieee/input.scm 133 */
int BgL_aux2010z00_1308;
BgL_aux2010z00_1308 = 
VECTOR_LENGTH(BgL_optz00_12); 
switch( 
(long)(BgL_aux2010z00_1308)) { case ((long)0) : 

{ /* Ieee/input.scm 133 */
obj_t BgL_ipz00_1310;
{ /* Ieee/input.scm 133 */
obj_t BgL_res3601z00_3899;
{ /* Ieee/input.scm 133 */
obj_t BgL_auxz00_6045;
BgL_auxz00_6045 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3601z00_3899 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_6045); } 
BgL_ipz00_1310 = BgL_res3601z00_3899; } 
{ /* Ieee/input.scm 133 */

return 
BGl_peekzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_1310);} } break;case ((long)1) : 

{ /* Ieee/input.scm 133 */
obj_t BgL_ipz00_1311;
BgL_ipz00_1311 = 
VECTOR_REF(BgL_optz00_12,
(int)(((long)0))); 
{ /* Ieee/input.scm 133 */

return 
BGl_peekzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_1311);} } break;
default: 
{ /* Ieee/input.scm 133 */
obj_t BgL_arg2314z00_1312;int BgL_arg2316z00_1314;
BgL_arg2314z00_1312 = BGl_symbol4388z00zz__r4_input_6_10_2z00; 
BgL_arg2316z00_1314 = 
VECTOR_LENGTH(BgL_optz00_12); 
return 
BGl_errorz00zz__errorz00(BgL_arg2314z00_1312, BGl_string4386z00zz__r4_input_6_10_2z00, 
BINT(BgL_arg2316z00_1314));} } } } } } 
}



/* peek-char */
BGL_EXPORTED_DEF obj_t BGl_peekzd2charzd2zz__r4_input_6_10_2z00(obj_t BgL_ipz00_11)
{ AN_OBJECT;
{ /* Ieee/input.scm 133 */
{ 
obj_t BgL_inputzd2portzd2_1317;
BgL_inputzd2portzd2_1317 = BgL_ipz00_11; 
{ 
obj_t BgL_inputzd2portzd2_1355;long BgL_lastzd2matchzd2_1356;
{ /* Ieee/input.scm 134 */
bool_t BgL_testz00_6057;
{ /* Ieee/input.scm 134 */
obj_t BgL_arg2321z00_1350;
{ /* Ieee/input.scm 134 */
obj_t BgL_res3602z00_3900;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1317))
{ /* Ieee/input.scm 134 */
BgL_res3602z00_3900 = BgL_inputzd2portzd2_1317; }  else 
{ 
obj_t BgL_auxz00_6060;
BgL_auxz00_6060 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)5890)), BGl_string4341z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1317); 
FAILURE(BgL_auxz00_6060,BFALSE,BFALSE);} 
BgL_arg2321z00_1350 = BgL_res3602z00_3900; } 
BgL_testz00_6057 = 
INPUT_PORT_CLOSEP(BgL_arg2321z00_1350); } 
if(BgL_testz00_6057)
{ /* Ieee/input.scm 134 */
return 
BGl_errorz00zz__errorz00(BGl_string4329z00zz__r4_input_6_10_2z00, BGl_string4332z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1317);}  else 
{ /* Ieee/input.scm 134 */
{ /* Ieee/input.scm 134 */
obj_t BgL_inputzd2portzd2_3923;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1317))
{ /* Ieee/input.scm 134 */
BgL_inputzd2portzd2_3923 = BgL_inputzd2portzd2_1317; }  else 
{ 
obj_t BgL_auxz00_6068;
BgL_auxz00_6068 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)5890)), BGl_string4328z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1317); 
FAILURE(BgL_auxz00_6068,BFALSE,BFALSE);} 
RGC_START_MATCH(BgL_inputzd2portzd2_3923); } 
{ /* Ieee/input.scm 134 */
long BgL_matchz00_1444;
BgL_inputzd2portzd2_1355 = BgL_inputzd2portzd2_1317; 
BgL_lastzd2matchzd2_1356 = ((long)1); 
BgL_zc3anonymousza32323ze3z83_1357:
{ /* Ieee/input.scm 134 */
int BgL_currentzd2charzd2_1358;
{ /* Ieee/input.scm 134 */
obj_t BgL_inputzd2portzd2_3905;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1355))
{ /* Ieee/input.scm 134 */
BgL_inputzd2portzd2_3905 = BgL_inputzd2portzd2_1355; }  else 
{ 
obj_t BgL_auxz00_6075;
BgL_auxz00_6075 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)5890)), BGl_string4390z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1355); 
FAILURE(BgL_auxz00_6075,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_1358 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3905); } 
if(
(
(long)(BgL_currentzd2charzd2_1358)==((long)0)))
{ /* Ieee/input.scm 134 */
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1355))
{ /* Ieee/input.scm 134 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_1355))
{ 

goto BgL_zc3anonymousza32323ze3z83_1357;}  else 
{ /* Ieee/input.scm 134 */
BgL_matchz00_1444 = BgL_lastzd2matchzd2_1356; } }  else 
{ /* Ieee/input.scm 134 */
long BgL_newzd2matchzd2_3912;
RGC_STOP_MATCH(BgL_inputzd2portzd2_1355); 
BgL_newzd2matchzd2_3912 = ((long)0); 
BgL_matchz00_1444 = BgL_newzd2matchzd2_3912; } }  else 
{ /* Ieee/input.scm 134 */
long BgL_newzd2matchzd2_3916;
RGC_STOP_MATCH(BgL_inputzd2portzd2_1355); 
BgL_newzd2matchzd2_3916 = ((long)0); 
BgL_matchz00_1444 = BgL_newzd2matchzd2_3916; } } 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_1317); 
switch( BgL_matchz00_1444) { case ((long)1) : 

{ /* Ieee/input.scm 134 */
bool_t BgL_testz00_6090;
{ /* Ieee/input.scm 134 */
long BgL_arg2387z00_1433;
{ /* Ieee/input.scm 134 */
obj_t BgL_inputzd2portzd2_3919;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1317))
{ /* Ieee/input.scm 134 */
BgL_inputzd2portzd2_3919 = BgL_inputzd2portzd2_1317; }  else 
{ 
obj_t BgL_auxz00_6093;
BgL_auxz00_6093 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)5890)), BGl_string4327z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1317); 
FAILURE(BgL_auxz00_6093,BFALSE,BFALSE);} 
BgL_arg2387z00_1433 = 
RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_3919); } 
BgL_testz00_6090 = 
(BgL_arg2387z00_1433==((long)0)); } 
if(BgL_testz00_6090)
{ /* Ieee/input.scm 134 */
return BCNST(256);}  else 
{ /* Ieee/input.scm 134 */
obj_t BgL_inputzd2portzd2_3922;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1317))
{ /* Ieee/input.scm 134 */
BgL_inputzd2portzd2_3922 = BgL_inputzd2portzd2_1317; }  else 
{ 
obj_t BgL_auxz00_6101;
BgL_auxz00_6101 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)5890)), BGl_string4327z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1317); 
FAILURE(BgL_auxz00_6101,BFALSE,BFALSE);} 
return 
BCHAR(
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_3922));} } break;case ((long)0) : 

{ /* Ieee/input.scm 136 */
unsigned char BgL_cz00_1448;
BgL_cz00_1448 = 
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_1317); 
{ /* Ieee/input.scm 137 */
obj_t BgL_arg2396z00_1449;long BgL_arg2397z00_1450;
BgL_arg2396z00_1449 = BgL_inputzd2portzd2_1317; 
BgL_arg2397z00_1450 = 
(
(unsigned char)(BgL_cz00_1448)); 
rgc_buffer_unget_char(BgL_arg2396z00_1449, 
(int)(BgL_arg2397z00_1450)); } 
return 
BCHAR(BgL_cz00_1448);} break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string4329z00zz__r4_input_6_10_2z00, BGl_string4330z00zz__r4_input_6_10_2z00, 
BINT(BgL_matchz00_1444));} } } } } } } 
}



/* _read-byte */
obj_t BGl__readzd2bytezd2zz__r4_input_6_10_2z00(obj_t BgL_envz00_16, obj_t BgL_optz00_15)
{ AN_OBJECT;
{ /* Ieee/input.scm 144 */
{ /* Ieee/input.scm 144 */

{ 

{ /* Ieee/input.scm 144 */
int BgL_aux2012z00_1480;
BgL_aux2012z00_1480 = 
VECTOR_LENGTH(BgL_optz00_15); 
switch( 
(long)(BgL_aux2012z00_1480)) { case ((long)0) : 

{ /* Ieee/input.scm 144 */
obj_t BgL_ipz00_1482;
{ /* Ieee/input.scm 144 */
obj_t BgL_res3605z00_3931;
{ /* Ieee/input.scm 144 */
obj_t BgL_auxz00_6117;
BgL_auxz00_6117 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3605z00_3931 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_6117); } 
BgL_ipz00_1482 = BgL_res3605z00_3931; } 
{ /* Ieee/input.scm 144 */

return 
BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_ipz00_1482);} } break;case ((long)1) : 

{ /* Ieee/input.scm 144 */
obj_t BgL_ipz00_1483;
BgL_ipz00_1483 = 
VECTOR_REF(BgL_optz00_15,
(int)(((long)0))); 
{ /* Ieee/input.scm 144 */

return 
BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_ipz00_1483);} } break;
default: 
{ /* Ieee/input.scm 144 */
obj_t BgL_arg2399z00_1484;int BgL_arg2401z00_1486;
BgL_arg2399z00_1484 = BGl_symbol4391z00zz__r4_input_6_10_2z00; 
BgL_arg2401z00_1486 = 
VECTOR_LENGTH(BgL_optz00_15); 
return 
BGl_errorz00zz__errorz00(BgL_arg2399z00_1484, BGl_string4386z00zz__r4_input_6_10_2z00, 
BINT(BgL_arg2401z00_1486));} } } } } } 
}



/* read-byte */
BGL_EXPORTED_DEF obj_t BGl_readzd2bytezd2zz__r4_input_6_10_2z00(obj_t BgL_ipz00_14)
{ AN_OBJECT;
{ /* Ieee/input.scm 144 */
{ 
obj_t BgL_inputzd2portzd2_1489;
BgL_inputzd2portzd2_1489 = BgL_ipz00_14; 
{ 
obj_t BgL_inputzd2portzd2_1527;long BgL_lastzd2matchzd2_1528;
{ /* Ieee/input.scm 145 */
bool_t BgL_testz00_6129;
{ /* Ieee/input.scm 145 */
obj_t BgL_arg2406z00_1522;
{ /* Ieee/input.scm 145 */
obj_t BgL_res3606z00_3932;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1489))
{ /* Ieee/input.scm 145 */
BgL_res3606z00_3932 = BgL_inputzd2portzd2_1489; }  else 
{ 
obj_t BgL_auxz00_6132;
BgL_auxz00_6132 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)6367)), BGl_string4341z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1489); 
FAILURE(BgL_auxz00_6132,BFALSE,BFALSE);} 
BgL_arg2406z00_1522 = BgL_res3606z00_3932; } 
BgL_testz00_6129 = 
INPUT_PORT_CLOSEP(BgL_arg2406z00_1522); } 
if(BgL_testz00_6129)
{ /* Ieee/input.scm 145 */
return 
BGl_errorz00zz__errorz00(BGl_string4329z00zz__r4_input_6_10_2z00, BGl_string4332z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1489);}  else 
{ /* Ieee/input.scm 145 */
{ /* Ieee/input.scm 145 */
obj_t BgL_inputzd2portzd2_3955;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1489))
{ /* Ieee/input.scm 145 */
BgL_inputzd2portzd2_3955 = BgL_inputzd2portzd2_1489; }  else 
{ 
obj_t BgL_auxz00_6140;
BgL_auxz00_6140 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)6367)), BGl_string4328z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1489); 
FAILURE(BgL_auxz00_6140,BFALSE,BFALSE);} 
RGC_START_MATCH(BgL_inputzd2portzd2_3955); } 
{ /* Ieee/input.scm 145 */
long BgL_matchz00_1616;
BgL_inputzd2portzd2_1527 = BgL_inputzd2portzd2_1489; 
BgL_lastzd2matchzd2_1528 = ((long)1); 
BgL_zc3anonymousza32408ze3z83_1529:
{ /* Ieee/input.scm 145 */
int BgL_currentzd2charzd2_1530;
{ /* Ieee/input.scm 145 */
obj_t BgL_inputzd2portzd2_3937;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1527))
{ /* Ieee/input.scm 145 */
BgL_inputzd2portzd2_3937 = BgL_inputzd2portzd2_1527; }  else 
{ 
obj_t BgL_auxz00_6147;
BgL_auxz00_6147 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)6367)), BGl_string4393z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1527); 
FAILURE(BgL_auxz00_6147,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_1530 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3937); } 
if(
(
(long)(BgL_currentzd2charzd2_1530)==((long)0)))
{ /* Ieee/input.scm 145 */
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1527))
{ /* Ieee/input.scm 145 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_1527))
{ 

goto BgL_zc3anonymousza32408ze3z83_1529;}  else 
{ /* Ieee/input.scm 145 */
BgL_matchz00_1616 = BgL_lastzd2matchzd2_1528; } }  else 
{ /* Ieee/input.scm 145 */
long BgL_newzd2matchzd2_3944;
RGC_STOP_MATCH(BgL_inputzd2portzd2_1527); 
BgL_newzd2matchzd2_3944 = ((long)0); 
BgL_matchz00_1616 = BgL_newzd2matchzd2_3944; } }  else 
{ /* Ieee/input.scm 145 */
long BgL_newzd2matchzd2_3948;
RGC_STOP_MATCH(BgL_inputzd2portzd2_1527); 
BgL_newzd2matchzd2_3948 = ((long)0); 
BgL_matchz00_1616 = BgL_newzd2matchzd2_3948; } } 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_1489); 
switch( BgL_matchz00_1616) { case ((long)1) : 

{ /* Ieee/input.scm 145 */
bool_t BgL_testz00_6162;
{ /* Ieee/input.scm 145 */
long BgL_arg2476z00_1605;
{ /* Ieee/input.scm 145 */
obj_t BgL_inputzd2portzd2_3951;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1489))
{ /* Ieee/input.scm 145 */
BgL_inputzd2portzd2_3951 = BgL_inputzd2portzd2_1489; }  else 
{ 
obj_t BgL_auxz00_6165;
BgL_auxz00_6165 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)6367)), BGl_string4327z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1489); 
FAILURE(BgL_auxz00_6165,BFALSE,BFALSE);} 
BgL_arg2476z00_1605 = 
RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_3951); } 
BgL_testz00_6162 = 
(BgL_arg2476z00_1605==((long)0)); } 
if(BgL_testz00_6162)
{ /* Ieee/input.scm 145 */
return BCNST(256);}  else 
{ /* Ieee/input.scm 145 */
obj_t BgL_inputzd2portzd2_3954;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1489))
{ /* Ieee/input.scm 145 */
BgL_inputzd2portzd2_3954 = BgL_inputzd2portzd2_1489; }  else 
{ 
obj_t BgL_auxz00_6173;
BgL_auxz00_6173 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)6367)), BGl_string4327z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1489); 
FAILURE(BgL_auxz00_6173,BFALSE,BFALSE);} 
return 
BCHAR(
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_3954));} } break;case ((long)0) : 

{ /* Ieee/input.scm 146 */
obj_t BgL_inputzd2portzd2_3957;
BgL_inputzd2portzd2_3957 = BgL_inputzd2portzd2_1489; 
return 
BINT(
RGC_BUFFER_BYTE(BgL_inputzd2portzd2_3957));} break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string4329z00zz__r4_input_6_10_2z00, BGl_string4330z00zz__r4_input_6_10_2z00, 
BINT(BgL_matchz00_1616));} } } } } } } 
}



/* _peek-byte */
obj_t BGl__peekzd2bytezd2zz__r4_input_6_10_2z00(obj_t BgL_envz00_19, obj_t BgL_optz00_18)
{ AN_OBJECT;
{ /* Ieee/input.scm 152 */
{ /* Ieee/input.scm 152 */

{ 

{ /* Ieee/input.scm 152 */
int BgL_aux2014z00_1649;
BgL_aux2014z00_1649 = 
VECTOR_LENGTH(BgL_optz00_18); 
switch( 
(long)(BgL_aux2014z00_1649)) { case ((long)0) : 

{ /* Ieee/input.scm 152 */
obj_t BgL_ipz00_1651;
{ /* Ieee/input.scm 152 */
obj_t BgL_res3608z00_3959;
{ /* Ieee/input.scm 152 */
obj_t BgL_auxz00_6185;
BgL_auxz00_6185 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3608z00_3959 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_6185); } 
BgL_ipz00_1651 = BgL_res3608z00_3959; } 
{ /* Ieee/input.scm 152 */

return 
BGl_peekzd2bytezd2zz__r4_input_6_10_2z00(BgL_ipz00_1651);} } break;case ((long)1) : 

{ /* Ieee/input.scm 152 */
obj_t BgL_ipz00_1652;
BgL_ipz00_1652 = 
VECTOR_REF(BgL_optz00_18,
(int)(((long)0))); 
{ /* Ieee/input.scm 152 */

return 
BGl_peekzd2bytezd2zz__r4_input_6_10_2z00(BgL_ipz00_1652);} } break;
default: 
{ /* Ieee/input.scm 152 */
obj_t BgL_arg2486z00_1653;int BgL_arg2488z00_1655;
BgL_arg2486z00_1653 = BGl_symbol4394z00zz__r4_input_6_10_2z00; 
BgL_arg2488z00_1655 = 
VECTOR_LENGTH(BgL_optz00_18); 
return 
BGl_errorz00zz__errorz00(BgL_arg2486z00_1653, BGl_string4386z00zz__r4_input_6_10_2z00, 
BINT(BgL_arg2488z00_1655));} } } } } } 
}



/* peek-byte */
BGL_EXPORTED_DEF obj_t BGl_peekzd2bytezd2zz__r4_input_6_10_2z00(obj_t BgL_ipz00_17)
{ AN_OBJECT;
{ /* Ieee/input.scm 152 */
{ 
obj_t BgL_inputzd2portzd2_1658;
BgL_inputzd2portzd2_1658 = BgL_ipz00_17; 
{ 
obj_t BgL_inputzd2portzd2_1696;long BgL_lastzd2matchzd2_1697;
{ /* Ieee/input.scm 153 */
bool_t BgL_testz00_6197;
{ /* Ieee/input.scm 153 */
obj_t BgL_arg2494z00_1691;
{ /* Ieee/input.scm 153 */
obj_t BgL_res3609z00_3960;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1658))
{ /* Ieee/input.scm 153 */
BgL_res3609z00_3960 = BgL_inputzd2portzd2_1658; }  else 
{ 
obj_t BgL_auxz00_6200;
BgL_auxz00_6200 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)6756)), BGl_string4341z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1658); 
FAILURE(BgL_auxz00_6200,BFALSE,BFALSE);} 
BgL_arg2494z00_1691 = BgL_res3609z00_3960; } 
BgL_testz00_6197 = 
INPUT_PORT_CLOSEP(BgL_arg2494z00_1691); } 
if(BgL_testz00_6197)
{ /* Ieee/input.scm 153 */
return 
BGl_errorz00zz__errorz00(BGl_string4329z00zz__r4_input_6_10_2z00, BGl_string4332z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1658);}  else 
{ /* Ieee/input.scm 153 */
{ /* Ieee/input.scm 153 */
obj_t BgL_inputzd2portzd2_3983;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1658))
{ /* Ieee/input.scm 153 */
BgL_inputzd2portzd2_3983 = BgL_inputzd2portzd2_1658; }  else 
{ 
obj_t BgL_auxz00_6208;
BgL_auxz00_6208 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)6756)), BGl_string4328z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1658); 
FAILURE(BgL_auxz00_6208,BFALSE,BFALSE);} 
RGC_START_MATCH(BgL_inputzd2portzd2_3983); } 
{ /* Ieee/input.scm 153 */
long BgL_matchz00_1785;
BgL_inputzd2portzd2_1696 = BgL_inputzd2portzd2_1658; 
BgL_lastzd2matchzd2_1697 = ((long)1); 
BgL_zc3anonymousza32496ze3z83_1698:
{ /* Ieee/input.scm 153 */
int BgL_currentzd2charzd2_1699;
{ /* Ieee/input.scm 153 */
obj_t BgL_inputzd2portzd2_3965;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1696))
{ /* Ieee/input.scm 153 */
BgL_inputzd2portzd2_3965 = BgL_inputzd2portzd2_1696; }  else 
{ 
obj_t BgL_auxz00_6215;
BgL_auxz00_6215 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)6756)), BGl_string4396z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1696); 
FAILURE(BgL_auxz00_6215,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_1699 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3965); } 
if(
(
(long)(BgL_currentzd2charzd2_1699)==((long)0)))
{ /* Ieee/input.scm 153 */
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1696))
{ /* Ieee/input.scm 153 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_1696))
{ 

goto BgL_zc3anonymousza32496ze3z83_1698;}  else 
{ /* Ieee/input.scm 153 */
BgL_matchz00_1785 = BgL_lastzd2matchzd2_1697; } }  else 
{ /* Ieee/input.scm 153 */
long BgL_newzd2matchzd2_3972;
RGC_STOP_MATCH(BgL_inputzd2portzd2_1696); 
BgL_newzd2matchzd2_3972 = ((long)0); 
BgL_matchz00_1785 = BgL_newzd2matchzd2_3972; } }  else 
{ /* Ieee/input.scm 153 */
long BgL_newzd2matchzd2_3976;
RGC_STOP_MATCH(BgL_inputzd2portzd2_1696); 
BgL_newzd2matchzd2_3976 = ((long)0); 
BgL_matchz00_1785 = BgL_newzd2matchzd2_3976; } } 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_1658); 
switch( BgL_matchz00_1785) { case ((long)1) : 

{ /* Ieee/input.scm 153 */
bool_t BgL_testz00_6230;
{ /* Ieee/input.scm 153 */
long BgL_arg2560z00_1774;
{ /* Ieee/input.scm 153 */
obj_t BgL_inputzd2portzd2_3979;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1658))
{ /* Ieee/input.scm 153 */
BgL_inputzd2portzd2_3979 = BgL_inputzd2portzd2_1658; }  else 
{ 
obj_t BgL_auxz00_6233;
BgL_auxz00_6233 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)6756)), BGl_string4327z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1658); 
FAILURE(BgL_auxz00_6233,BFALSE,BFALSE);} 
BgL_arg2560z00_1774 = 
RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_3979); } 
BgL_testz00_6230 = 
(BgL_arg2560z00_1774==((long)0)); } 
if(BgL_testz00_6230)
{ /* Ieee/input.scm 153 */
return BCNST(256);}  else 
{ /* Ieee/input.scm 153 */
obj_t BgL_inputzd2portzd2_3982;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1658))
{ /* Ieee/input.scm 153 */
BgL_inputzd2portzd2_3982 = BgL_inputzd2portzd2_1658; }  else 
{ 
obj_t BgL_auxz00_6241;
BgL_auxz00_6241 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)6756)), BGl_string4327z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1658); 
FAILURE(BgL_auxz00_6241,BFALSE,BFALSE);} 
return 
BCHAR(
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_3982));} } break;case ((long)0) : 

{ /* Ieee/input.scm 155 */
int BgL_cz00_1789;
BgL_cz00_1789 = 
RGC_BUFFER_BYTE(BgL_inputzd2portzd2_1658); 
rgc_buffer_unget_char(BgL_inputzd2portzd2_1658, BgL_cz00_1789); 
return 
BINT(BgL_cz00_1789);} break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string4329z00zz__r4_input_6_10_2z00, BGl_string4330z00zz__r4_input_6_10_2z00, 
BINT(BgL_matchz00_1785));} } } } } } } 
}



/* eof-object? */
BGL_EXPORTED_DEF bool_t BGl_eofzd2objectzf3z21zz__r4_input_6_10_2z00(obj_t BgL_objectz00_20)
{ AN_OBJECT;
{ /* Ieee/input.scm 163 */
return 
EOF_OBJECTP(BgL_objectz00_20);} 
}



/* _eof-object? */
obj_t BGl__eofzd2objectzf3z21zz__r4_input_6_10_2z00(obj_t BgL_envz00_4798, obj_t BgL_objectz00_4799)
{ AN_OBJECT;
{ /* Ieee/input.scm 163 */
return 
BBOOL(
EOF_OBJECTP(BgL_objectz00_4799));} 
}



/* _char-ready? */
obj_t BGl__charzd2readyzf3z21zz__r4_input_6_10_2z00(obj_t BgL_envz00_23, obj_t BgL_optz00_22)
{ AN_OBJECT;
{ /* Ieee/input.scm 169 */
{ /* Ieee/input.scm 169 */

{ 

{ /* Ieee/input.scm 169 */
int BgL_aux2016z00_5488;
BgL_aux2016z00_5488 = 
VECTOR_LENGTH(BgL_optz00_22); 
switch( 
(long)(BgL_aux2016z00_5488)) { case ((long)0) : 

{ /* Ieee/input.scm 169 */
obj_t BgL_ipz00_5489;
{ /* Ieee/input.scm 169 */
obj_t BgL_res3612z00_5490;
{ /* Ieee/input.scm 169 */
obj_t BgL_auxz00_6257;
BgL_auxz00_6257 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3612z00_5490 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_6257); } 
BgL_ipz00_5489 = BgL_res3612z00_5490; } 
{ /* Ieee/input.scm 169 */

return 
BBOOL(
bgl_rgc_charready(BgL_ipz00_5489));} } break;case ((long)1) : 

{ /* Ieee/input.scm 169 */
obj_t BgL_ipz00_5491;
BgL_ipz00_5491 = 
VECTOR_REF(BgL_optz00_22,
(int)(((long)0))); 
{ /* Ieee/input.scm 169 */

{ /* Ieee/input.scm 169 */
bool_t BgL_auxz00_6264;
{ /* Ieee/input.scm 169 */
obj_t BgL_auxz00_6265;
if(
INPUT_PORTP(BgL_ipz00_5491))
{ /* Ieee/input.scm 169 */
BgL_auxz00_6265 = BgL_ipz00_5491
; }  else 
{ 
obj_t BgL_auxz00_6268;
BgL_auxz00_6268 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)7423)), BGl_string4399z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_ipz00_5491); 
FAILURE(BgL_auxz00_6268,BFALSE,BFALSE);} 
BgL_auxz00_6264 = 
bgl_rgc_charready(BgL_auxz00_6265); } 
return 
BBOOL(BgL_auxz00_6264);} } } break;
default: 
{ /* Ieee/input.scm 169 */
obj_t BgL_arg2571z00_5486;int BgL_arg2573z00_5487;
BgL_arg2571z00_5486 = BGl_symbol4397z00zz__r4_input_6_10_2z00; 
BgL_arg2573z00_5487 = 
VECTOR_LENGTH(BgL_optz00_22); 
return 
BGl_errorz00zz__errorz00(BgL_arg2571z00_5486, BGl_string4386z00zz__r4_input_6_10_2z00, 
BINT(BgL_arg2573z00_5487));} } } } } } 
}



/* char-ready? */
BGL_EXPORTED_DEF bool_t BGl_charzd2readyzf3z21zz__r4_input_6_10_2z00(obj_t BgL_ipz00_21)
{ AN_OBJECT;
{ /* Ieee/input.scm 169 */
{ /* Ieee/input.scm 170 */
obj_t BgL_auxz00_6279;
if(
INPUT_PORTP(BgL_ipz00_21))
{ /* Ieee/input.scm 170 */
BgL_auxz00_6279 = BgL_ipz00_21
; }  else 
{ 
obj_t BgL_auxz00_6282;
BgL_auxz00_6282 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)7507)), BGl_string4398z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_ipz00_21); 
FAILURE(BgL_auxz00_6282,BFALSE,BFALSE);} 
return 
bgl_rgc_charready(BgL_auxz00_6279);} } 
}



/* _read-line */
obj_t BGl__readzd2linezd2zz__r4_input_6_10_2z00(obj_t BgL_envz00_26, obj_t BgL_optz00_25)
{ AN_OBJECT;
{ /* Ieee/input.scm 175 */
{ /* Ieee/input.scm 175 */

{ 

{ /* Ieee/input.scm 175 */
int BgL_aux2018z00_1828;
BgL_aux2018z00_1828 = 
VECTOR_LENGTH(BgL_optz00_25); 
switch( 
(long)(BgL_aux2018z00_1828)) { case ((long)0) : 

{ /* Ieee/input.scm 175 */
obj_t BgL_ipz00_1830;
{ /* Ieee/input.scm 175 */
obj_t BgL_res3613z00_4002;
{ /* Ieee/input.scm 175 */
obj_t BgL_auxz00_6288;
BgL_auxz00_6288 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3613z00_4002 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_6288); } 
BgL_ipz00_1830 = BgL_res3613z00_4002; } 
{ /* Ieee/input.scm 175 */

return 
BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_1830);} } break;case ((long)1) : 

{ /* Ieee/input.scm 175 */
obj_t BgL_ipz00_1831;
BgL_ipz00_1831 = 
VECTOR_REF(BgL_optz00_25,
(int)(((long)0))); 
{ /* Ieee/input.scm 175 */

return 
BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_1831);} } break;
default: 
{ /* Ieee/input.scm 175 */
obj_t BgL_arg2575z00_1832;int BgL_arg2577z00_1834;
BgL_arg2575z00_1832 = BGl_symbol4400z00zz__r4_input_6_10_2z00; 
BgL_arg2577z00_1834 = 
VECTOR_LENGTH(BgL_optz00_25); 
return 
BGl_errorz00zz__errorz00(BgL_arg2575z00_1832, BGl_string4386z00zz__r4_input_6_10_2z00, 
BINT(BgL_arg2577z00_1834));} } } } } } 
}



/* read-line */
BGL_EXPORTED_DEF obj_t BGl_readzd2linezd2zz__r4_input_6_10_2z00(obj_t BgL_ipz00_24)
{ AN_OBJECT;
{ /* Ieee/input.scm 175 */
{ /* Ieee/input.scm 176 */
bool_t BgL_testz00_6300;
{ /* Ieee/input.scm 176 */
int BgL_arg2703z00_2094;
{ /* Ieee/input.scm 176 */
obj_t BgL_auxz00_6301;
if(
INPUT_PORTP(BgL_ipz00_24))
{ /* Ieee/input.scm 176 */
BgL_auxz00_6301 = BgL_ipz00_24
; }  else 
{ 
obj_t BgL_auxz00_6304;
BgL_auxz00_6304 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)7825)), BGl_string4401z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_ipz00_24); 
FAILURE(BgL_auxz00_6304,BFALSE,BFALSE);} 
BgL_arg2703z00_2094 = 
BGL_INPUT_PORT_BUFSIZ(BgL_auxz00_6301); } 
BgL_testz00_6300 = 
(
(long)(BgL_arg2703z00_2094)>((long)2)); } 
if(BgL_testz00_6300)
{ 
obj_t BgL_inputzd2portzd2_1838;
BgL_inputzd2portzd2_1838 = BgL_ipz00_24; 
{ 
obj_t BgL_inputzd2portzd2_1879;long BgL_lastzd2matchzd2_1880;obj_t BgL_inputzd2portzd2_1897;long BgL_lastzd2matchzd2_1898;obj_t BgL_inputzd2portzd2_1907;long BgL_lastzd2matchzd2_1908;obj_t BgL_inputzd2portzd2_1920;long BgL_lastzd2matchzd2_1921;obj_t BgL_inputzd2portzd2_1928;long BgL_lastzd2matchzd2_1929;int BgL_minz00_1951;int BgL_maxz00_1952;
{ /* Ieee/input.scm 177 */
bool_t BgL_testz00_6311;
{ /* Ieee/input.scm 177 */
obj_t BgL_arg2583z00_1878;
{ /* Ieee/input.scm 177 */
obj_t BgL_res3614z00_4005;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1838))
{ /* Ieee/input.scm 177 */
BgL_res3614z00_4005 = BgL_inputzd2portzd2_1838; }  else 
{ 
obj_t BgL_auxz00_6314;
BgL_auxz00_6314 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)7854)), BGl_string4341z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1838); 
FAILURE(BgL_auxz00_6314,BFALSE,BFALSE);} 
BgL_arg2583z00_1878 = BgL_res3614z00_4005; } 
BgL_testz00_6311 = 
INPUT_PORT_CLOSEP(BgL_arg2583z00_1878); } 
if(BgL_testz00_6311)
{ /* Ieee/input.scm 177 */
return 
BGl_errorz00zz__errorz00(BGl_string4329z00zz__r4_input_6_10_2z00, BGl_string4332z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1838);}  else 
{ /* Ieee/input.scm 177 */
{ /* Ieee/input.scm 177 */
obj_t BgL_inputzd2portzd2_4096;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1838))
{ /* Ieee/input.scm 177 */
BgL_inputzd2portzd2_4096 = BgL_inputzd2portzd2_1838; }  else 
{ 
obj_t BgL_auxz00_6322;
BgL_auxz00_6322 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)7854)), BGl_string4328z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1838); 
FAILURE(BgL_auxz00_6322,BFALSE,BFALSE);} 
RGC_START_MATCH(BgL_inputzd2portzd2_4096); } 
{ /* Ieee/input.scm 177 */
long BgL_matchz00_2022;
BgL_inputzd2portzd2_1907 = BgL_inputzd2portzd2_1838; 
BgL_lastzd2matchzd2_1908 = ((long)4); 
BgL_zc3anonymousza32594ze3z83_1909:
{ /* Ieee/input.scm 177 */
int BgL_currentzd2charzd2_1910;
{ /* Ieee/input.scm 177 */
obj_t BgL_inputzd2portzd2_4028;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1907))
{ /* Ieee/input.scm 177 */
BgL_inputzd2portzd2_4028 = BgL_inputzd2portzd2_1907; }  else 
{ 
obj_t BgL_auxz00_6329;
BgL_auxz00_6329 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)7854)), BGl_string4405z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1907); 
FAILURE(BgL_auxz00_6329,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_1910 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_4028); } 
switch( 
(long)(BgL_currentzd2charzd2_1910)) { case ((long)0) : 

if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1907))
{ /* Ieee/input.scm 177 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_1907))
{ 

goto BgL_zc3anonymousza32594ze3z83_1909;}  else 
{ /* Ieee/input.scm 177 */
BgL_matchz00_2022 = BgL_lastzd2matchzd2_1908; } }  else 
{ /* Ieee/input.scm 177 */
BgL_inputzd2portzd2_1879 = BgL_inputzd2portzd2_1907; 
BgL_lastzd2matchzd2_1880 = BgL_lastzd2matchzd2_1908; 
BgL_zc3anonymousza32584ze3z83_1881:
{ /* Ieee/input.scm 177 */
long BgL_newzd2matchzd2_1882;
{ /* Ieee/input.scm 177 */
obj_t BgL_inputzd2portzd2_4008;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1879))
{ /* Ieee/input.scm 177 */
BgL_inputzd2portzd2_4008 = BgL_inputzd2portzd2_1879; }  else 
{ 
obj_t BgL_auxz00_6340;
BgL_auxz00_6340 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)7854)), BGl_string4407z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1879); 
FAILURE(BgL_auxz00_6340,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_4008); } 
BgL_newzd2matchzd2_1882 = ((long)2); 
{ /* Ieee/input.scm 177 */
int BgL_currentzd2charzd2_1883;
BgL_currentzd2charzd2_1883 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1879); 
switch( 
(long)(BgL_currentzd2charzd2_1883)) { case ((long)0) : 

if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1879))
{ /* Ieee/input.scm 177 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_1879))
{ 

goto BgL_zc3anonymousza32584ze3z83_1881;}  else 
{ /* Ieee/input.scm 177 */
BgL_matchz00_2022 = BgL_newzd2matchzd2_1882; } }  else 
{ /* Ieee/input.scm 177 */
BgL_inputzd2portzd2_1897 = BgL_inputzd2portzd2_1879; 
BgL_lastzd2matchzd2_1898 = BgL_newzd2matchzd2_1882; 
BgL_zc3anonymousza32590ze3z83_1899:
{ /* Ieee/input.scm 177 */
long BgL_newzd2matchzd2_1900;
{ /* Ieee/input.scm 177 */
obj_t BgL_inputzd2portzd2_4020;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1897))
{ /* Ieee/input.scm 177 */
BgL_inputzd2portzd2_4020 = BgL_inputzd2portzd2_1897; }  else 
{ 
obj_t BgL_auxz00_6352;
BgL_auxz00_6352 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)7854)), BGl_string4406z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1897); 
FAILURE(BgL_auxz00_6352,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_4020); } 
BgL_newzd2matchzd2_1900 = ((long)2); 
{ /* Ieee/input.scm 177 */
int BgL_currentzd2charzd2_1901;
BgL_currentzd2charzd2_1901 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1897); 
switch( 
(long)(BgL_currentzd2charzd2_1901)) { case ((long)0) : 

if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1897))
{ /* Ieee/input.scm 177 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_1897))
{ 

goto BgL_zc3anonymousza32590ze3z83_1899;}  else 
{ /* Ieee/input.scm 177 */
BgL_matchz00_2022 = BgL_newzd2matchzd2_1900; } }  else 
{ 
long BgL_lastzd2matchzd2_6362;
BgL_lastzd2matchzd2_6362 = BgL_newzd2matchzd2_1900; 
BgL_lastzd2matchzd2_1898 = BgL_lastzd2matchzd2_6362; 
goto BgL_zc3anonymousza32590ze3z83_1899;} break;case ((long)13) : 

BgL_inputzd2portzd2_1920 = BgL_inputzd2portzd2_1897; 
BgL_lastzd2matchzd2_1921 = BgL_newzd2matchzd2_1900; 
BgL_zc3anonymousza32599ze3z83_1922:
{ /* Ieee/input.scm 177 */
long BgL_newzd2matchzd2_1923;
{ /* Ieee/input.scm 177 */
obj_t BgL_inputzd2portzd2_4037;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1920))
{ /* Ieee/input.scm 177 */
BgL_inputzd2portzd2_4037 = BgL_inputzd2portzd2_1920; }  else 
{ 
obj_t BgL_auxz00_6365;
BgL_auxz00_6365 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)7854)), BGl_string4404z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1920); 
FAILURE(BgL_auxz00_6365,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_4037); } 
BgL_newzd2matchzd2_1923 = ((long)0); 
{ /* Ieee/input.scm 177 */
int BgL_currentzd2charzd2_1924;
BgL_currentzd2charzd2_1924 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1920); 
if(
(
(long)(BgL_currentzd2charzd2_1924)==((long)0)))
{ /* Ieee/input.scm 177 */
bool_t BgL_testz00_6374;
{ /* Ieee/input.scm 177 */
bool_t BgL_res3616z00_4045;
{ /* Ieee/input.scm 177 */
obj_t BgL_inputzd2portzd2_4041;
BgL_inputzd2portzd2_4041 = BgL_inputzd2portzd2_1920; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4041))
{ /* Ieee/input.scm 177 */
BgL_res3616z00_4045 = 
rgc_fill_buffer(BgL_inputzd2portzd2_4041); }  else 
{ /* Ieee/input.scm 177 */
BgL_res3616z00_4045 = ((bool_t)0); } } 
BgL_testz00_6374 = BgL_res3616z00_4045; } 
if(BgL_testz00_6374)
{ 

goto BgL_zc3anonymousza32599ze3z83_1922;}  else 
{ /* Ieee/input.scm 177 */
BgL_matchz00_2022 = BgL_newzd2matchzd2_1923; } }  else 
{ /* Ieee/input.scm 177 */
if(
(
(long)(BgL_currentzd2charzd2_1924)==((long)10)))
{ /* Ieee/input.scm 177 */
long BgL_newzd2matchzd2_4050;
RGC_STOP_MATCH(BgL_inputzd2portzd2_1920); 
BgL_newzd2matchzd2_4050 = ((long)1); 
BgL_matchz00_2022 = BgL_newzd2matchzd2_4050; }  else 
{ /* Ieee/input.scm 177 */
BgL_matchz00_2022 = BgL_newzd2matchzd2_1923; } } } } break;case ((long)10) : 

{ /* Ieee/input.scm 177 */
long BgL_newzd2matchzd2_4026;
RGC_STOP_MATCH(BgL_inputzd2portzd2_1897); 
BgL_newzd2matchzd2_4026 = ((long)0); 
BgL_matchz00_2022 = BgL_newzd2matchzd2_4026; } break;
default: 
{ 
long BgL_lastzd2matchzd2_6383;
BgL_lastzd2matchzd2_6383 = BgL_newzd2matchzd2_1900; 
BgL_lastzd2matchzd2_1898 = BgL_lastzd2matchzd2_6383; 
goto BgL_zc3anonymousza32590ze3z83_1899;} } } } } break;case ((long)13) : 

{ 
long BgL_lastzd2matchzd2_6387;obj_t BgL_inputzd2portzd2_6386;
BgL_inputzd2portzd2_6386 = BgL_inputzd2portzd2_1879; 
BgL_lastzd2matchzd2_6387 = BgL_newzd2matchzd2_1882; 
BgL_lastzd2matchzd2_1921 = BgL_lastzd2matchzd2_6387; 
BgL_inputzd2portzd2_1920 = BgL_inputzd2portzd2_6386; 
goto BgL_zc3anonymousza32599ze3z83_1922;} break;case ((long)10) : 

{ /* Ieee/input.scm 177 */
long BgL_newzd2matchzd2_4014;
RGC_STOP_MATCH(BgL_inputzd2portzd2_1879); 
BgL_newzd2matchzd2_4014 = ((long)0); 
BgL_matchz00_2022 = BgL_newzd2matchzd2_4014; } break;
default: 
{ 
long BgL_lastzd2matchzd2_6390;obj_t BgL_inputzd2portzd2_6389;
BgL_inputzd2portzd2_6389 = BgL_inputzd2portzd2_1879; 
BgL_lastzd2matchzd2_6390 = BgL_newzd2matchzd2_1882; 
BgL_lastzd2matchzd2_1898 = BgL_lastzd2matchzd2_6390; 
BgL_inputzd2portzd2_1897 = BgL_inputzd2portzd2_6389; 
goto BgL_zc3anonymousza32590ze3z83_1899;} } } } } break;case ((long)13) : 

BgL_inputzd2portzd2_1928 = BgL_inputzd2portzd2_1907; 
BgL_lastzd2matchzd2_1929 = BgL_lastzd2matchzd2_1908; 
BgL_zc3anonymousza32603ze3z83_1930:
{ /* Ieee/input.scm 177 */
long BgL_newzd2matchzd2_1931;
{ /* Ieee/input.scm 177 */
obj_t BgL_inputzd2portzd2_4052;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1928))
{ /* Ieee/input.scm 177 */
BgL_inputzd2portzd2_4052 = BgL_inputzd2portzd2_1928; }  else 
{ 
obj_t BgL_auxz00_6395;
BgL_auxz00_6395 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)7854)), BGl_string4403z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1928); 
FAILURE(BgL_auxz00_6395,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_4052); } 
BgL_newzd2matchzd2_1931 = ((long)3); 
{ /* Ieee/input.scm 177 */
int BgL_currentzd2charzd2_1932;
BgL_currentzd2charzd2_1932 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1928); 
if(
(
(long)(BgL_currentzd2charzd2_1932)==((long)0)))
{ /* Ieee/input.scm 177 */
bool_t BgL_testz00_6404;
{ /* Ieee/input.scm 177 */
bool_t BgL_res3617z00_4060;
{ /* Ieee/input.scm 177 */
obj_t BgL_inputzd2portzd2_4056;
BgL_inputzd2portzd2_4056 = BgL_inputzd2portzd2_1928; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4056))
{ /* Ieee/input.scm 177 */
BgL_res3617z00_4060 = 
rgc_fill_buffer(BgL_inputzd2portzd2_4056); }  else 
{ /* Ieee/input.scm 177 */
BgL_res3617z00_4060 = ((bool_t)0); } } 
BgL_testz00_6404 = BgL_res3617z00_4060; } 
if(BgL_testz00_6404)
{ 

goto BgL_zc3anonymousza32603ze3z83_1930;}  else 
{ /* Ieee/input.scm 177 */
BgL_matchz00_2022 = BgL_newzd2matchzd2_1931; } }  else 
{ /* Ieee/input.scm 177 */
if(
(
(long)(BgL_currentzd2charzd2_1932)==((long)10)))
{ /* Ieee/input.scm 177 */
long BgL_newzd2matchzd2_4065;
RGC_STOP_MATCH(BgL_inputzd2portzd2_1928); 
BgL_newzd2matchzd2_4065 = ((long)3); 
BgL_matchz00_2022 = BgL_newzd2matchzd2_4065; }  else 
{ /* Ieee/input.scm 177 */
BgL_matchz00_2022 = BgL_newzd2matchzd2_1931; } } } } break;case ((long)10) : 

{ /* Ieee/input.scm 177 */
long BgL_newzd2matchzd2_4033;
RGC_STOP_MATCH(BgL_inputzd2portzd2_1907); 
BgL_newzd2matchzd2_4033 = ((long)3); 
BgL_matchz00_2022 = BgL_newzd2matchzd2_4033; } break;
default: 
{ 
long BgL_lastzd2matchzd2_6414;obj_t BgL_inputzd2portzd2_6413;
BgL_inputzd2portzd2_6413 = BgL_inputzd2portzd2_1907; 
BgL_lastzd2matchzd2_6414 = BgL_lastzd2matchzd2_1908; 
BgL_lastzd2matchzd2_1880 = BgL_lastzd2matchzd2_6414; 
BgL_inputzd2portzd2_1879 = BgL_inputzd2portzd2_6413; 
goto BgL_zc3anonymousza32584ze3z83_1881;} } } 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_1838); 
switch( BgL_matchz00_2022) { case ((long)4) : 

{ /* Ieee/input.scm 177 */
bool_t BgL_testz00_6418;
{ /* Ieee/input.scm 177 */
long BgL_arg2671z00_2011;
{ /* Ieee/input.scm 177 */
obj_t BgL_inputzd2portzd2_4092;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1838))
{ /* Ieee/input.scm 177 */
BgL_inputzd2portzd2_4092 = BgL_inputzd2portzd2_1838; }  else 
{ 
obj_t BgL_auxz00_6421;
BgL_auxz00_6421 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)7854)), BGl_string4327z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1838); 
FAILURE(BgL_auxz00_6421,BFALSE,BFALSE);} 
BgL_arg2671z00_2011 = 
RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_4092); } 
BgL_testz00_6418 = 
(BgL_arg2671z00_2011==((long)0)); } 
if(BgL_testz00_6418)
{ /* Ieee/input.scm 177 */
return BCNST(256);}  else 
{ /* Ieee/input.scm 177 */
obj_t BgL_inputzd2portzd2_4095;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1838))
{ /* Ieee/input.scm 177 */
BgL_inputzd2portzd2_4095 = BgL_inputzd2portzd2_1838; }  else 
{ 
obj_t BgL_auxz00_6429;
BgL_auxz00_6429 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)7854)), BGl_string4327z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1838); 
FAILURE(BgL_auxz00_6429,BFALSE,BFALSE);} 
return 
BCHAR(
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_4095));} } break;case ((long)3) : 

return BGl_string4402z00zz__r4_input_6_10_2z00;break;case ((long)2) : 

return 
BGl_thezd2stringzd2zz__r4_input_6_10_2z00(BgL_inputzd2portzd2_1838);break;case ((long)1) : 

{ /* Ieee/input.scm 182 */
long BgL_arg2681z00_2027;
{ /* Ieee/input.scm 182 */
int BgL_arg2682z00_2028;
{ /* Ieee/input.scm 182 */
int BgL_res3621z00_4099;
{ /* Ieee/input.scm 182 */
obj_t BgL_inputzd2portzd2_4098;
BgL_inputzd2portzd2_4098 = BgL_inputzd2portzd2_1838; 
BgL_res3621z00_4099 = 
(int)(
RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_4098)); } 
BgL_arg2682z00_2028 = BgL_res3621z00_4099; } 
BgL_arg2681z00_2027 = 
(
(long)(BgL_arg2682z00_2028)-((long)2)); } 
BgL_minz00_1951 = 
(int)(((long)0)); 
BgL_maxz00_1952 = 
(int)(BgL_arg2681z00_2027); 
BgL_lambda2616z00_1953:
if(
(
(long)(BgL_maxz00_1952)<((long)0)))
{ /* Ieee/input.scm 177 */
int BgL_arg2618z00_1955;
{ /* Ieee/input.scm 177 */
int BgL_res3619z00_4077;
{ /* Ieee/input.scm 177 */
obj_t BgL_inputzd2portzd2_4076;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1838))
{ /* Ieee/input.scm 177 */
BgL_inputzd2portzd2_4076 = BgL_inputzd2portzd2_1838; }  else 
{ 
obj_t BgL_auxz00_6445;
BgL_auxz00_6445 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)7854)), BGl_string4324z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1838); 
FAILURE(BgL_auxz00_6445,BFALSE,BFALSE);} 
BgL_res3619z00_4077 = 
(int)(
RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_4076)); } 
BgL_arg2618z00_1955 = BgL_res3619z00_4077; } 
{ /* Ieee/input.scm 177 */
long BgL_za71za7_4078;long BgL_za72za7_4079;
BgL_za71za7_4078 = 
(long)(BgL_arg2618z00_1955); 
BgL_za72za7_4079 = 
(long)(BgL_maxz00_1952); 
BgL_maxz00_1952 = 
(int)(
(BgL_za71za7_4078+BgL_za72za7_4079)); } }  else 
{ /* Ieee/input.scm 177 */BFALSE; } 
{ /* Ieee/input.scm 177 */
bool_t BgL_testz00_6455;
if(
(
(long)(BgL_minz00_1951)>=((long)0)))
{ /* Ieee/input.scm 177 */
if(
(
(long)(BgL_maxz00_1952)>=
(long)(BgL_minz00_1951)))
{ /* Ieee/input.scm 177 */
int BgL_arg2628z00_1965;
{ /* Ieee/input.scm 177 */
int BgL_res3620z00_4085;
{ /* Ieee/input.scm 177 */
obj_t BgL_inputzd2portzd2_4084;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1838))
{ /* Ieee/input.scm 177 */
BgL_inputzd2portzd2_4084 = BgL_inputzd2portzd2_1838; }  else 
{ 
obj_t BgL_auxz00_6465;
BgL_auxz00_6465 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)7854)), BGl_string4324z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1838); 
FAILURE(BgL_auxz00_6465,BFALSE,BFALSE);} 
BgL_res3620z00_4085 = 
(int)(
RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_4084)); } 
BgL_arg2628z00_1965 = BgL_res3620z00_4085; } 
BgL_testz00_6455 = 
(
(long)(BgL_maxz00_1952)<=
(long)(BgL_arg2628z00_1965)); }  else 
{ /* Ieee/input.scm 177 */
BgL_testz00_6455 = ((bool_t)0)
; } }  else 
{ /* Ieee/input.scm 177 */
BgL_testz00_6455 = ((bool_t)0)
; } 
if(BgL_testz00_6455)
{ /* Ieee/input.scm 177 */
obj_t BgL_inputzd2portzd2_4088;long BgL_startz00_4089;long BgL_stopz00_4090;
if(
INPUT_PORTP(BgL_inputzd2portzd2_1838))
{ /* Ieee/input.scm 177 */
BgL_inputzd2portzd2_4088 = BgL_inputzd2portzd2_1838; }  else 
{ 
obj_t BgL_auxz00_6476;
BgL_auxz00_6476 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)7854)), BGl_string4324z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_1838); 
FAILURE(BgL_auxz00_6476,BFALSE,BFALSE);} 
BgL_startz00_4089 = 
(long)(BgL_minz00_1951); 
BgL_stopz00_4090 = 
(long)(BgL_maxz00_1952); 
return 
rgc_buffer_substring(BgL_inputzd2portzd2_4088, BgL_startz00_4089, BgL_stopz00_4090);}  else 
{ /* Ieee/input.scm 177 */
obj_t BgL_arg2621z00_1958;obj_t BgL_arg2622z00_1959;
{ /* Ieee/input.scm 177 */
obj_t BgL_arg2624z00_1961;
BgL_arg2624z00_1961 = 
BGl_thezd2stringzd2zz__r4_input_6_10_2z00(BgL_inputzd2portzd2_1838); 
{ /* Ieee/input.scm 177 */
obj_t BgL_list2625z00_1962;
BgL_list2625z00_1962 = 
MAKE_PAIR(BgL_arg2624z00_1961, BNIL); 
BgL_arg2621z00_1958 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string4325z00zz__r4_input_6_10_2z00, BgL_list2625z00_1962); } } 
BgL_arg2622z00_1959 = 
MAKE_PAIR(
BINT(BgL_minz00_1951), 
BINT(BgL_maxz00_1952)); 
{ /* Ieee/input.scm 177 */
obj_t BgL_aux3925z00_5092;
BgL_aux3925z00_5092 = 
BGl_errorz00zz__errorz00(BGl_string4324z00zz__r4_input_6_10_2z00, BgL_arg2621z00_1958, BgL_arg2622z00_1959); 
if(
STRINGP(BgL_aux3925z00_5092))
{ /* Ieee/input.scm 177 */
return BgL_aux3925z00_5092;}  else 
{ 
obj_t BgL_auxz00_6492;
BgL_auxz00_6492 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)7854)), BGl_string4324z00zz__r4_input_6_10_2z00, BGl_string4326z00zz__r4_input_6_10_2z00, BgL_aux3925z00_5092); 
FAILURE(BgL_auxz00_6492,BFALSE,BFALSE);} } } } } break;case ((long)0) : 

{ /* Ieee/input.scm 180 */
long BgL_arg2685z00_2031;
{ /* Ieee/input.scm 180 */
int BgL_arg2686z00_2032;
{ /* Ieee/input.scm 180 */
int BgL_res3622z00_4103;
{ /* Ieee/input.scm 180 */
obj_t BgL_inputzd2portzd2_4102;
BgL_inputzd2portzd2_4102 = BgL_inputzd2portzd2_1838; 
BgL_res3622z00_4103 = 
(int)(
RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_4102)); } 
BgL_arg2686z00_2032 = BgL_res3622z00_4103; } 
BgL_arg2685z00_2031 = 
(
(long)(BgL_arg2686z00_2032)-((long)1)); } 
{ 
int BgL_maxz00_6504;int BgL_minz00_6502;
BgL_minz00_6502 = 
(int)(((long)0)); 
BgL_maxz00_6504 = 
(int)(BgL_arg2685z00_2031); 
BgL_maxz00_1952 = BgL_maxz00_6504; 
BgL_minz00_1951 = BgL_minz00_6502; 
goto BgL_lambda2616z00_1953;} } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string4329z00zz__r4_input_6_10_2z00, BGl_string4330z00zz__r4_input_6_10_2z00, 
BINT(BgL_matchz00_2022));} } } } } }  else 
{ /* Ieee/input.scm 192 */
obj_t BgL_g1869z00_2069;obj_t BgL_g1870z00_2070;
BgL_g1869z00_2069 = 
BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_24); 
BgL_g1870z00_2070 = 
make_string(((long)100), ((unsigned char)' ')); 
{ 
obj_t BgL_cz00_2072;long BgL_wz00_2073;long BgL_mz00_2074;obj_t BgL_accz00_2075;
BgL_cz00_2072 = BgL_g1869z00_2069; 
BgL_wz00_2073 = ((long)0); 
BgL_mz00_2074 = ((long)100); 
BgL_accz00_2075 = BgL_g1870z00_2070; 
BgL_zc3anonymousza32688ze3z83_2076:
if(
EOF_OBJECTP(BgL_cz00_2072))
{ /* Ieee/input.scm 197 */
if(
(BgL_wz00_2073==((long)0)))
{ /* Ieee/input.scm 199 */
return BgL_cz00_2072;}  else 
{ /* Ieee/input.scm 199 */
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_accz00_2075, ((long)0), BgL_wz00_2073);} }  else 
{ /* Ieee/input.scm 197 */
if(
(BgL_wz00_2073==BgL_mz00_2074))
{ /* Ieee/input.scm 204 */
long BgL_arg2692z00_2080;obj_t BgL_arg2693z00_2081;
BgL_arg2692z00_2080 = 
(BgL_mz00_2074*((long)2)); 
{ /* Ieee/input.scm 205 */
obj_t BgL_newzd2acczd2_2082;
BgL_newzd2acczd2_2082 = 
make_string(
(BgL_mz00_2074*((long)2)), ((unsigned char)' ')); 
BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BgL_accz00_2075, ((long)0), BgL_newzd2acczd2_2082, ((long)0), BgL_mz00_2074); 
BgL_arg2693z00_2081 = BgL_newzd2acczd2_2082; } 
{ 
obj_t BgL_accz00_6523;long BgL_mz00_6522;
BgL_mz00_6522 = BgL_arg2692z00_2080; 
BgL_accz00_6523 = BgL_arg2693z00_2081; 
BgL_accz00_2075 = BgL_accz00_6523; 
BgL_mz00_2074 = BgL_mz00_6522; 
goto BgL_zc3anonymousza32688ze3z83_2076;} }  else 
{ /* Ieee/input.scm 208 */
bool_t BgL_testz00_6524;
{ /* Ieee/input.scm 208 */
unsigned char BgL_char1z00_4129;
{ /* Ieee/input.scm 208 */
obj_t BgL_auxz00_6525;
if(
CHARP(BgL_cz00_2072))
{ /* Ieee/input.scm 208 */
BgL_auxz00_6525 = BgL_cz00_2072
; }  else 
{ 
obj_t BgL_auxz00_6528;
BgL_auxz00_6528 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)8749)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4409z00zz__r4_input_6_10_2z00, BgL_cz00_2072); 
FAILURE(BgL_auxz00_6528,BFALSE,BFALSE);} 
BgL_char1z00_4129 = 
CCHAR(BgL_auxz00_6525); } 
BgL_testz00_6524 = 
(BgL_char1z00_4129==((unsigned char)'\r')); } 
if(BgL_testz00_6524)
{ /* Ieee/input.scm 209 */
obj_t BgL_c2z00_2086;
BgL_c2z00_2086 = 
BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_24); 
{ /* Ieee/input.scm 210 */
bool_t BgL_testz00_6535;
{ /* Ieee/input.scm 210 */
unsigned char BgL_char1z00_4131;
{ /* Ieee/input.scm 210 */
obj_t BgL_auxz00_6536;
if(
CHARP(BgL_c2z00_2086))
{ /* Ieee/input.scm 210 */
BgL_auxz00_6536 = BgL_c2z00_2086
; }  else 
{ 
obj_t BgL_auxz00_6539;
BgL_auxz00_6539 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)8810)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4409z00zz__r4_input_6_10_2z00, BgL_c2z00_2086); 
FAILURE(BgL_auxz00_6539,BFALSE,BFALSE);} 
BgL_char1z00_4131 = 
CCHAR(BgL_auxz00_6536); } 
BgL_testz00_6535 = 
(BgL_char1z00_4131==((unsigned char)'\n')); } 
if(BgL_testz00_6535)
{ /* Ieee/input.scm 210 */
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_accz00_2075, ((long)0), BgL_wz00_2073);}  else 
{ /* Ieee/input.scm 210 */
{ /* Ieee/input.scm 213 */
unsigned char BgL_charz00_4135;
{ /* Ieee/input.scm 213 */
obj_t BgL_auxz00_6546;
if(
CHARP(BgL_cz00_2072))
{ /* Ieee/input.scm 213 */
BgL_auxz00_6546 = BgL_cz00_2072
; }  else 
{ 
obj_t BgL_auxz00_6549;
BgL_auxz00_6549 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)8887)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4409z00zz__r4_input_6_10_2z00, BgL_cz00_2072); 
FAILURE(BgL_auxz00_6549,BFALSE,BFALSE);} 
BgL_charz00_4135 = 
CCHAR(BgL_auxz00_6546); } 
{ /* Ieee/input.scm 213 */
long BgL_l3673z00_4834;
BgL_l3673z00_4834 = 
STRING_LENGTH(BgL_accz00_2075); 
if(
BOUND_CHECK(BgL_wz00_2073, BgL_l3673z00_4834))
{ /* Ieee/input.scm 213 */
STRING_SET(BgL_accz00_2075, BgL_wz00_2073, BgL_charz00_4135); }  else 
{ 
obj_t BgL_auxz00_6558;
BgL_auxz00_6558 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)8868)), BGl_string4410z00zz__r4_input_6_10_2z00, 
BINT(BgL_wz00_2073), BgL_accz00_2075); 
FAILURE(BgL_auxz00_6558,BFALSE,BFALSE);} } } 
{ 
long BgL_wz00_6564;obj_t BgL_cz00_6563;
BgL_cz00_6563 = BgL_c2z00_2086; 
BgL_wz00_6564 = 
(BgL_wz00_2073+((long)1)); 
BgL_wz00_2073 = BgL_wz00_6564; 
BgL_cz00_2072 = BgL_cz00_6563; 
goto BgL_zc3anonymousza32688ze3z83_2076;} } } }  else 
{ /* Ieee/input.scm 215 */
bool_t BgL_testz00_6566;
{ /* Ieee/input.scm 215 */
unsigned char BgL_char1z00_4138;
{ /* Ieee/input.scm 215 */
obj_t BgL_auxz00_6567;
if(
CHARP(BgL_cz00_2072))
{ /* Ieee/input.scm 215 */
BgL_auxz00_6567 = BgL_cz00_2072
; }  else 
{ 
obj_t BgL_auxz00_6570;
BgL_auxz00_6570 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)8938)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4409z00zz__r4_input_6_10_2z00, BgL_cz00_2072); 
FAILURE(BgL_auxz00_6570,BFALSE,BFALSE);} 
BgL_char1z00_4138 = 
CCHAR(BgL_auxz00_6567); } 
BgL_testz00_6566 = 
(BgL_char1z00_4138==((unsigned char)'\n')); } 
if(BgL_testz00_6566)
{ /* Ieee/input.scm 215 */
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_accz00_2075, ((long)0), BgL_wz00_2073);}  else 
{ /* Ieee/input.scm 215 */
{ /* Ieee/input.scm 220 */
unsigned char BgL_charz00_4142;
{ /* Ieee/input.scm 220 */
obj_t BgL_auxz00_6577;
if(
CHARP(BgL_cz00_2072))
{ /* Ieee/input.scm 220 */
BgL_auxz00_6577 = BgL_cz00_2072
; }  else 
{ 
obj_t BgL_auxz00_6580;
BgL_auxz00_6580 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)9083)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4409z00zz__r4_input_6_10_2z00, BgL_cz00_2072); 
FAILURE(BgL_auxz00_6580,BFALSE,BFALSE);} 
BgL_charz00_4142 = 
CCHAR(BgL_auxz00_6577); } 
{ /* Ieee/input.scm 220 */
long BgL_l3677z00_4838;
BgL_l3677z00_4838 = 
STRING_LENGTH(BgL_accz00_2075); 
if(
BOUND_CHECK(BgL_wz00_2073, BgL_l3677z00_4838))
{ /* Ieee/input.scm 220 */
STRING_SET(BgL_accz00_2075, BgL_wz00_2073, BgL_charz00_4142); }  else 
{ 
obj_t BgL_auxz00_6589;
BgL_auxz00_6589 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)9064)), BGl_string4410z00zz__r4_input_6_10_2z00, 
BINT(BgL_wz00_2073), BgL_accz00_2075); 
FAILURE(BgL_auxz00_6589,BFALSE,BFALSE);} } } 
{ 
long BgL_wz00_6596;obj_t BgL_cz00_6594;
BgL_cz00_6594 = 
BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_24); 
BgL_wz00_6596 = 
(BgL_wz00_2073+((long)1)); 
BgL_wz00_2073 = BgL_wz00_6596; 
BgL_cz00_2072 = BgL_cz00_6594; 
goto BgL_zc3anonymousza32688ze3z83_2076;} } } } } } } } } 
}



/* the-string */
obj_t BGl_thezd2stringzd2zz__r4_input_6_10_2z00(obj_t BgL_inputzd2portzd2_4830)
{ AN_OBJECT;
{ /* Ieee/input.scm 177 */
{ /* Ieee/input.scm 177 */
int BgL_arg2615z00_1950;
{ /* Ieee/input.scm 177 */
int BgL_res3618z00_4070;
{ /* Ieee/input.scm 177 */
obj_t BgL_inputzd2portzd2_4069;
if(
INPUT_PORTP(BgL_inputzd2portzd2_4830))
{ /* Ieee/input.scm 177 */
BgL_inputzd2portzd2_4069 = BgL_inputzd2portzd2_4830; }  else 
{ 
obj_t BgL_auxz00_6600;
BgL_auxz00_6600 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)7854)), BGl_string4411z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_4830); 
FAILURE(BgL_auxz00_6600,BFALSE,BFALSE);} 
BgL_res3618z00_4070 = 
(int)(
RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_4069)); } 
BgL_arg2615z00_1950 = BgL_res3618z00_4070; } 
return 
rgc_buffer_substring(BgL_inputzd2portzd2_4830, ((long)0), 
(long)(BgL_arg2615z00_1950));} } 
}



/* _read-line-newline */
obj_t BGl__readzd2linezd2newlinez00zz__r4_input_6_10_2z00(obj_t BgL_envz00_29, obj_t BgL_optz00_28)
{ AN_OBJECT;
{ /* Ieee/input.scm 226 */
{ /* Ieee/input.scm 226 */

{ 

{ /* Ieee/input.scm 226 */
int BgL_aux2020z00_2097;
BgL_aux2020z00_2097 = 
VECTOR_LENGTH(BgL_optz00_28); 
switch( 
(long)(BgL_aux2020z00_2097)) { case ((long)0) : 

{ /* Ieee/input.scm 226 */
obj_t BgL_ipz00_2099;
{ /* Ieee/input.scm 226 */
obj_t BgL_res3625z00_4146;
{ /* Ieee/input.scm 226 */
obj_t BgL_auxz00_6609;
BgL_auxz00_6609 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3625z00_4146 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_6609); } 
BgL_ipz00_2099 = BgL_res3625z00_4146; } 
{ /* Ieee/input.scm 226 */

return 
BGl_readzd2linezd2newlinez00zz__r4_input_6_10_2z00(BgL_ipz00_2099);} } break;case ((long)1) : 

{ /* Ieee/input.scm 226 */
obj_t BgL_ipz00_2100;
BgL_ipz00_2100 = 
VECTOR_REF(BgL_optz00_28,
(int)(((long)0))); 
{ /* Ieee/input.scm 226 */

return 
BGl_readzd2linezd2newlinez00zz__r4_input_6_10_2z00(BgL_ipz00_2100);} } break;
default: 
{ /* Ieee/input.scm 226 */
obj_t BgL_arg2706z00_2101;int BgL_arg2708z00_2103;
BgL_arg2706z00_2101 = BGl_symbol4412z00zz__r4_input_6_10_2z00; 
BgL_arg2708z00_2103 = 
VECTOR_LENGTH(BgL_optz00_28); 
return 
BGl_errorz00zz__errorz00(BgL_arg2706z00_2101, BGl_string4386z00zz__r4_input_6_10_2z00, 
BINT(BgL_arg2708z00_2103));} } } } } } 
}



/* read-line-newline */
BGL_EXPORTED_DEF obj_t BGl_readzd2linezd2newlinez00zz__r4_input_6_10_2z00(obj_t BgL_ipz00_27)
{ AN_OBJECT;
{ /* Ieee/input.scm 226 */
{ /* Ieee/input.scm 227 */
bool_t BgL_testz00_6621;
{ /* Ieee/input.scm 227 */
int BgL_arg2831z00_2349;
{ /* Ieee/input.scm 227 */
obj_t BgL_auxz00_6622;
if(
INPUT_PORTP(BgL_ipz00_27))
{ /* Ieee/input.scm 227 */
BgL_auxz00_6622 = BgL_ipz00_27
; }  else 
{ 
obj_t BgL_auxz00_6625;
BgL_auxz00_6625 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)9457)), BGl_string4413z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_ipz00_27); 
FAILURE(BgL_auxz00_6625,BFALSE,BFALSE);} 
BgL_arg2831z00_2349 = 
BGL_INPUT_PORT_BUFSIZ(BgL_auxz00_6622); } 
BgL_testz00_6621 = 
(
(long)(BgL_arg2831z00_2349)>((long)2)); } 
if(BgL_testz00_6621)
{ 
obj_t BgL_inputzd2portzd2_2107;
BgL_inputzd2portzd2_2107 = BgL_ipz00_27; 
{ 
obj_t BgL_inputzd2portzd2_2185;long BgL_lastzd2matchzd2_2186;obj_t BgL_inputzd2portzd2_2177;long BgL_lastzd2matchzd2_2178;obj_t BgL_inputzd2portzd2_2165;long BgL_lastzd2matchzd2_2166;obj_t BgL_inputzd2portzd2_2155;long BgL_lastzd2matchzd2_2156;obj_t BgL_inputzd2portzd2_2146;long BgL_lastzd2matchzd2_2147;
{ /* Ieee/input.scm 228 */
bool_t BgL_testz00_6632;
{ /* Ieee/input.scm 228 */
obj_t BgL_arg2714z00_2145;
{ /* Ieee/input.scm 228 */
obj_t BgL_res3626z00_4149;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2107))
{ /* Ieee/input.scm 228 */
BgL_res3626z00_4149 = BgL_inputzd2portzd2_2107; }  else 
{ 
obj_t BgL_auxz00_6635;
BgL_auxz00_6635 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)9486)), BGl_string4341z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_2107); 
FAILURE(BgL_auxz00_6635,BFALSE,BFALSE);} 
BgL_arg2714z00_2145 = BgL_res3626z00_4149; } 
BgL_testz00_6632 = 
INPUT_PORT_CLOSEP(BgL_arg2714z00_2145); } 
if(BgL_testz00_6632)
{ /* Ieee/input.scm 228 */
return 
BGl_errorz00zz__errorz00(BGl_string4329z00zz__r4_input_6_10_2z00, BGl_string4332z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_2107);}  else 
{ /* Ieee/input.scm 228 */
{ /* Ieee/input.scm 228 */
obj_t BgL_inputzd2portzd2_4219;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2107))
{ /* Ieee/input.scm 228 */
BgL_inputzd2portzd2_4219 = BgL_inputzd2portzd2_2107; }  else 
{ 
obj_t BgL_auxz00_6643;
BgL_auxz00_6643 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)9486)), BGl_string4328z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_2107); 
FAILURE(BgL_auxz00_6643,BFALSE,BFALSE);} 
RGC_START_MATCH(BgL_inputzd2portzd2_4219); } 
{ /* Ieee/input.scm 228 */
long BgL_matchz00_2281;
BgL_inputzd2portzd2_2146 = BgL_inputzd2portzd2_2107; 
BgL_lastzd2matchzd2_2147 = ((long)1); 
BgL_zc3anonymousza32715ze3z83_2148:
{ /* Ieee/input.scm 228 */
int BgL_currentzd2charzd2_2149;
{ /* Ieee/input.scm 228 */
obj_t BgL_inputzd2portzd2_4152;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2146))
{ /* Ieee/input.scm 228 */
BgL_inputzd2portzd2_4152 = BgL_inputzd2portzd2_2146; }  else 
{ 
obj_t BgL_auxz00_6650;
BgL_auxz00_6650 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)9486)), BGl_string4414z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_2146); 
FAILURE(BgL_auxz00_6650,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_2149 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_4152); } 
switch( 
(long)(BgL_currentzd2charzd2_2149)) { case ((long)0) : 

if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2146))
{ /* Ieee/input.scm 228 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_2146))
{ 

goto BgL_zc3anonymousza32715ze3z83_2148;}  else 
{ /* Ieee/input.scm 228 */
BgL_matchz00_2281 = BgL_lastzd2matchzd2_2147; } }  else 
{ /* Ieee/input.scm 228 */
BgL_inputzd2portzd2_2185 = BgL_inputzd2portzd2_2146; 
BgL_lastzd2matchzd2_2186 = BgL_lastzd2matchzd2_2147; 
BgL_zc3anonymousza32732ze3z83_2187:
{ /* Ieee/input.scm 228 */
long BgL_newzd2matchzd2_2188;
{ /* Ieee/input.scm 228 */
obj_t BgL_inputzd2portzd2_4199;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2185))
{ /* Ieee/input.scm 228 */
BgL_inputzd2portzd2_4199 = BgL_inputzd2portzd2_2185; }  else 
{ 
obj_t BgL_auxz00_6661;
BgL_auxz00_6661 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)9486)), BGl_string4418z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_2185); 
FAILURE(BgL_auxz00_6661,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_4199); } 
BgL_newzd2matchzd2_2188 = ((long)0); 
{ /* Ieee/input.scm 228 */
int BgL_currentzd2charzd2_2189;
BgL_currentzd2charzd2_2189 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2185); 
switch( 
(long)(BgL_currentzd2charzd2_2189)) { case ((long)0) : 

if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2185))
{ /* Ieee/input.scm 228 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_2185))
{ 

goto BgL_zc3anonymousza32732ze3z83_2187;}  else 
{ /* Ieee/input.scm 228 */
BgL_matchz00_2281 = BgL_newzd2matchzd2_2188; } }  else 
{ /* Ieee/input.scm 228 */
BgL_inputzd2portzd2_2155 = BgL_inputzd2portzd2_2185; 
BgL_lastzd2matchzd2_2156 = BgL_newzd2matchzd2_2188; 
BgL_zc3anonymousza32719ze3z83_2157:
{ /* Ieee/input.scm 228 */
long BgL_newzd2matchzd2_2158;
{ /* Ieee/input.scm 228 */
obj_t BgL_inputzd2portzd2_4159;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2155))
{ /* Ieee/input.scm 228 */
BgL_inputzd2portzd2_4159 = BgL_inputzd2portzd2_2155; }  else 
{ 
obj_t BgL_auxz00_6673;
BgL_auxz00_6673 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)9486)), BGl_string4415z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_2155); 
FAILURE(BgL_auxz00_6673,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_4159); } 
BgL_newzd2matchzd2_2158 = ((long)0); 
{ /* Ieee/input.scm 228 */
int BgL_currentzd2charzd2_2159;
BgL_currentzd2charzd2_2159 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2155); 
switch( 
(long)(BgL_currentzd2charzd2_2159)) { case ((long)0) : 

if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2155))
{ /* Ieee/input.scm 228 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_2155))
{ 

goto BgL_zc3anonymousza32719ze3z83_2157;}  else 
{ /* Ieee/input.scm 228 */
BgL_matchz00_2281 = BgL_newzd2matchzd2_2158; } }  else 
{ 
long BgL_lastzd2matchzd2_6683;
BgL_lastzd2matchzd2_6683 = BgL_newzd2matchzd2_2158; 
BgL_lastzd2matchzd2_2156 = BgL_lastzd2matchzd2_6683; 
goto BgL_zc3anonymousza32719ze3z83_2157;} break;case ((long)13) : 

BgL_inputzd2portzd2_2165 = BgL_inputzd2portzd2_2155; 
BgL_lastzd2matchzd2_2166 = BgL_newzd2matchzd2_2158; 
BgL_zc3anonymousza32723ze3z83_2167:
{ /* Ieee/input.scm 228 */
long BgL_newzd2matchzd2_2168;
{ /* Ieee/input.scm 228 */
obj_t BgL_inputzd2portzd2_4167;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2165))
{ /* Ieee/input.scm 228 */
BgL_inputzd2portzd2_4167 = BgL_inputzd2portzd2_2165; }  else 
{ 
obj_t BgL_auxz00_6686;
BgL_auxz00_6686 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)9486)), BGl_string4416z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_2165); 
FAILURE(BgL_auxz00_6686,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_4167); } 
BgL_newzd2matchzd2_2168 = ((long)0); 
{ /* Ieee/input.scm 228 */
int BgL_currentzd2charzd2_2169;
BgL_currentzd2charzd2_2169 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2165); 
if(
(
(long)(BgL_currentzd2charzd2_2169)==((long)0)))
{ /* Ieee/input.scm 228 */
bool_t BgL_testz00_6695;
{ /* Ieee/input.scm 228 */
bool_t BgL_res3628z00_4175;
{ /* Ieee/input.scm 228 */
obj_t BgL_inputzd2portzd2_4171;
BgL_inputzd2portzd2_4171 = BgL_inputzd2portzd2_2165; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4171))
{ /* Ieee/input.scm 228 */
BgL_res3628z00_4175 = 
rgc_fill_buffer(BgL_inputzd2portzd2_4171); }  else 
{ /* Ieee/input.scm 228 */
BgL_res3628z00_4175 = ((bool_t)0); } } 
BgL_testz00_6695 = BgL_res3628z00_4175; } 
if(BgL_testz00_6695)
{ 

goto BgL_zc3anonymousza32723ze3z83_2167;}  else 
{ /* Ieee/input.scm 228 */
BgL_matchz00_2281 = BgL_newzd2matchzd2_2168; } }  else 
{ /* Ieee/input.scm 228 */
if(
(
(long)(BgL_currentzd2charzd2_2169)==((long)10)))
{ /* Ieee/input.scm 228 */
long BgL_newzd2matchzd2_4180;
RGC_STOP_MATCH(BgL_inputzd2portzd2_2165); 
BgL_newzd2matchzd2_4180 = ((long)0); 
BgL_matchz00_2281 = BgL_newzd2matchzd2_4180; }  else 
{ /* Ieee/input.scm 228 */
BgL_matchz00_2281 = BgL_newzd2matchzd2_2168; } } } } break;case ((long)10) : 

{ /* Ieee/input.scm 228 */
long BgL_newzd2matchzd2_4165;
RGC_STOP_MATCH(BgL_inputzd2portzd2_2155); 
BgL_newzd2matchzd2_4165 = ((long)0); 
BgL_matchz00_2281 = BgL_newzd2matchzd2_4165; } break;
default: 
{ 
long BgL_lastzd2matchzd2_6704;
BgL_lastzd2matchzd2_6704 = BgL_newzd2matchzd2_2158; 
BgL_lastzd2matchzd2_2156 = BgL_lastzd2matchzd2_6704; 
goto BgL_zc3anonymousza32719ze3z83_2157;} } } } } break;case ((long)13) : 

{ 
long BgL_lastzd2matchzd2_6708;obj_t BgL_inputzd2portzd2_6707;
BgL_inputzd2portzd2_6707 = BgL_inputzd2portzd2_2185; 
BgL_lastzd2matchzd2_6708 = BgL_newzd2matchzd2_2188; 
BgL_lastzd2matchzd2_2166 = BgL_lastzd2matchzd2_6708; 
BgL_inputzd2portzd2_2165 = BgL_inputzd2portzd2_6707; 
goto BgL_zc3anonymousza32723ze3z83_2167;} break;case ((long)10) : 

{ /* Ieee/input.scm 228 */
long BgL_newzd2matchzd2_4205;
RGC_STOP_MATCH(BgL_inputzd2portzd2_2185); 
BgL_newzd2matchzd2_4205 = ((long)0); 
BgL_matchz00_2281 = BgL_newzd2matchzd2_4205; } break;
default: 
{ 
long BgL_lastzd2matchzd2_6711;obj_t BgL_inputzd2portzd2_6710;
BgL_inputzd2portzd2_6710 = BgL_inputzd2portzd2_2185; 
BgL_lastzd2matchzd2_6711 = BgL_newzd2matchzd2_2188; 
BgL_lastzd2matchzd2_2156 = BgL_lastzd2matchzd2_6711; 
BgL_inputzd2portzd2_2155 = BgL_inputzd2portzd2_6710; 
goto BgL_zc3anonymousza32719ze3z83_2157;} } } } } break;case ((long)13) : 

BgL_inputzd2portzd2_2177 = BgL_inputzd2portzd2_2146; 
BgL_lastzd2matchzd2_2178 = BgL_lastzd2matchzd2_2147; 
BgL_zc3anonymousza32728ze3z83_2179:
{ /* Ieee/input.scm 228 */
long BgL_newzd2matchzd2_2180;
{ /* Ieee/input.scm 228 */
obj_t BgL_inputzd2portzd2_4184;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2177))
{ /* Ieee/input.scm 228 */
BgL_inputzd2portzd2_4184 = BgL_inputzd2portzd2_2177; }  else 
{ 
obj_t BgL_auxz00_6716;
BgL_auxz00_6716 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)9486)), BGl_string4417z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_2177); 
FAILURE(BgL_auxz00_6716,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_4184); } 
BgL_newzd2matchzd2_2180 = ((long)0); 
{ /* Ieee/input.scm 228 */
int BgL_currentzd2charzd2_2181;
BgL_currentzd2charzd2_2181 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2177); 
if(
(
(long)(BgL_currentzd2charzd2_2181)==((long)0)))
{ /* Ieee/input.scm 228 */
bool_t BgL_testz00_6725;
{ /* Ieee/input.scm 228 */
bool_t BgL_res3629z00_4192;
{ /* Ieee/input.scm 228 */
obj_t BgL_inputzd2portzd2_4188;
BgL_inputzd2portzd2_4188 = BgL_inputzd2portzd2_2177; 
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4188))
{ /* Ieee/input.scm 228 */
BgL_res3629z00_4192 = 
rgc_fill_buffer(BgL_inputzd2portzd2_4188); }  else 
{ /* Ieee/input.scm 228 */
BgL_res3629z00_4192 = ((bool_t)0); } } 
BgL_testz00_6725 = BgL_res3629z00_4192; } 
if(BgL_testz00_6725)
{ 

goto BgL_zc3anonymousza32728ze3z83_2179;}  else 
{ /* Ieee/input.scm 228 */
BgL_matchz00_2281 = BgL_newzd2matchzd2_2180; } }  else 
{ /* Ieee/input.scm 228 */
if(
(
(long)(BgL_currentzd2charzd2_2181)==((long)10)))
{ /* Ieee/input.scm 228 */
long BgL_newzd2matchzd2_4197;
RGC_STOP_MATCH(BgL_inputzd2portzd2_2177); 
BgL_newzd2matchzd2_4197 = ((long)0); 
BgL_matchz00_2281 = BgL_newzd2matchzd2_4197; }  else 
{ /* Ieee/input.scm 228 */
BgL_matchz00_2281 = BgL_newzd2matchzd2_2180; } } } } break;case ((long)10) : 

{ /* Ieee/input.scm 228 */
long BgL_newzd2matchzd2_4157;
RGC_STOP_MATCH(BgL_inputzd2portzd2_2146); 
BgL_newzd2matchzd2_4157 = ((long)0); 
BgL_matchz00_2281 = BgL_newzd2matchzd2_4157; } break;
default: 
{ 
long BgL_lastzd2matchzd2_6735;obj_t BgL_inputzd2portzd2_6734;
BgL_inputzd2portzd2_6734 = BgL_inputzd2portzd2_2146; 
BgL_lastzd2matchzd2_6735 = BgL_lastzd2matchzd2_2147; 
BgL_lastzd2matchzd2_2186 = BgL_lastzd2matchzd2_6735; 
BgL_inputzd2portzd2_2185 = BgL_inputzd2portzd2_6734; 
goto BgL_zc3anonymousza32732ze3z83_2187;} } } 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_2107); 
switch( BgL_matchz00_2281) { case ((long)1) : 

{ /* Ieee/input.scm 228 */
bool_t BgL_testz00_6739;
{ /* Ieee/input.scm 228 */
long BgL_arg2801z00_2270;
{ /* Ieee/input.scm 228 */
obj_t BgL_inputzd2portzd2_4215;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2107))
{ /* Ieee/input.scm 228 */
BgL_inputzd2portzd2_4215 = BgL_inputzd2portzd2_2107; }  else 
{ 
obj_t BgL_auxz00_6742;
BgL_auxz00_6742 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)9486)), BGl_string4327z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_2107); 
FAILURE(BgL_auxz00_6742,BFALSE,BFALSE);} 
BgL_arg2801z00_2270 = 
RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_4215); } 
BgL_testz00_6739 = 
(BgL_arg2801z00_2270==((long)0)); } 
if(BgL_testz00_6739)
{ /* Ieee/input.scm 228 */
return BCNST(256);}  else 
{ /* Ieee/input.scm 228 */
obj_t BgL_inputzd2portzd2_4218;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2107))
{ /* Ieee/input.scm 228 */
BgL_inputzd2portzd2_4218 = BgL_inputzd2portzd2_2107; }  else 
{ 
obj_t BgL_auxz00_6750;
BgL_auxz00_6750 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)9486)), BGl_string4327z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_2107); 
FAILURE(BgL_auxz00_6750,BFALSE,BFALSE);} 
return 
BCHAR(
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_4218));} } break;case ((long)0) : 

{ /* Ieee/input.scm 228 */
int BgL_arg2745z00_2209;
{ /* Ieee/input.scm 228 */
int BgL_res3630z00_4210;
{ /* Ieee/input.scm 228 */
obj_t BgL_inputzd2portzd2_4209;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2107))
{ /* Ieee/input.scm 228 */
BgL_inputzd2portzd2_4209 = BgL_inputzd2portzd2_2107; }  else 
{ 
obj_t BgL_auxz00_6758;
BgL_auxz00_6758 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)9486)), BGl_string4411z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_2107); 
FAILURE(BgL_auxz00_6758,BFALSE,BFALSE);} 
BgL_res3630z00_4210 = 
(int)(
RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_4209)); } 
BgL_arg2745z00_2209 = BgL_res3630z00_4210; } 
return 
rgc_buffer_substring(BgL_inputzd2portzd2_2107, ((long)0), 
(long)(BgL_arg2745z00_2209));} break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string4329z00zz__r4_input_6_10_2z00, BGl_string4330z00zz__r4_input_6_10_2z00, 
BINT(BgL_matchz00_2281));} } } } } }  else 
{ /* Ieee/input.scm 240 */
obj_t BgL_g1888z00_2318;obj_t BgL_g1889z00_2319;
BgL_g1888z00_2318 = 
BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_27); 
BgL_g1889z00_2319 = 
make_string(((long)100), ((unsigned char)' ')); 
{ 
obj_t BgL_cz00_2321;long BgL_wz00_2322;long BgL_mz00_2323;obj_t BgL_accz00_2324;
BgL_cz00_2321 = BgL_g1888z00_2318; 
BgL_wz00_2322 = ((long)0); 
BgL_mz00_2323 = ((long)100); 
BgL_accz00_2324 = BgL_g1889z00_2319; 
BgL_zc3anonymousza32810ze3z83_2325:
if(
EOF_OBJECTP(BgL_cz00_2321))
{ /* Ieee/input.scm 245 */
if(
(BgL_wz00_2322==((long)0)))
{ /* Ieee/input.scm 247 */
return BgL_cz00_2321;}  else 
{ /* Ieee/input.scm 247 */
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_accz00_2324, ((long)0), BgL_wz00_2322);} }  else 
{ /* Ieee/input.scm 248 */
bool_t BgL_testz00_6776;
{ /* Ieee/input.scm 248 */
long BgL_arg2829z00_2346;
{ /* Ieee/input.scm 248 */
obj_t BgL_auxz00_6777;
{ /* Ieee/input.scm 248 */
obj_t BgL_aux4063z00_5230;
BgL_aux4063z00_5230 = 
BGl_2zd2zd2zz__r4_numbers_6_5z00(
BINT(BgL_mz00_2323), 
BINT(((long)2))); 
if(
INTEGERP(BgL_aux4063z00_5230))
{ /* Ieee/input.scm 248 */
BgL_auxz00_6777 = BgL_aux4063z00_5230
; }  else 
{ 
obj_t BgL_auxz00_6783;
BgL_auxz00_6783 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)10104)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_aux4063z00_5230); 
FAILURE(BgL_auxz00_6783,BFALSE,BFALSE);} } 
BgL_arg2829z00_2346 = 
(long)CINT(BgL_auxz00_6777); } 
BgL_testz00_6776 = 
(BgL_wz00_2322==BgL_arg2829z00_2346); } 
if(BgL_testz00_6776)
{ /* Ieee/input.scm 252 */
long BgL_arg2814z00_2329;obj_t BgL_arg2815z00_2330;
BgL_arg2814z00_2329 = 
(BgL_mz00_2323*((long)2)); 
{ /* Ieee/input.scm 253 */
obj_t BgL_newzd2acczd2_2331;
BgL_newzd2acczd2_2331 = 
make_string(
(BgL_mz00_2323*((long)2)), ((unsigned char)' ')); 
BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BgL_accz00_2324, ((long)0), BgL_newzd2acczd2_2331, ((long)0), BgL_mz00_2323); 
BgL_arg2815z00_2330 = BgL_newzd2acczd2_2331; } 
{ 
obj_t BgL_accz00_6794;long BgL_mz00_6793;
BgL_mz00_6793 = BgL_arg2814z00_2329; 
BgL_accz00_6794 = BgL_arg2815z00_2330; 
BgL_accz00_2324 = BgL_accz00_6794; 
BgL_mz00_2323 = BgL_mz00_6793; 
goto BgL_zc3anonymousza32810ze3z83_2325;} }  else 
{ /* Ieee/input.scm 256 */
bool_t BgL_testz00_6795;
{ /* Ieee/input.scm 256 */
unsigned char BgL_char1z00_4244;
{ /* Ieee/input.scm 256 */
obj_t BgL_auxz00_6796;
if(
CHARP(BgL_cz00_2321))
{ /* Ieee/input.scm 256 */
BgL_auxz00_6796 = BgL_cz00_2321
; }  else 
{ 
obj_t BgL_auxz00_6799;
BgL_auxz00_6799 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)10305)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4409z00zz__r4_input_6_10_2z00, BgL_cz00_2321); 
FAILURE(BgL_auxz00_6799,BFALSE,BFALSE);} 
BgL_char1z00_4244 = 
CCHAR(BgL_auxz00_6796); } 
BgL_testz00_6795 = 
(BgL_char1z00_4244==((unsigned char)'\r')); } 
if(BgL_testz00_6795)
{ /* Ieee/input.scm 257 */
obj_t BgL_c2z00_2335;
BgL_c2z00_2335 = 
BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_27); 
{ /* Ieee/input.scm 258 */
bool_t BgL_testz00_6806;
{ /* Ieee/input.scm 258 */
unsigned char BgL_char1z00_4246;
{ /* Ieee/input.scm 258 */
obj_t BgL_auxz00_6807;
if(
CHARP(BgL_c2z00_2335))
{ /* Ieee/input.scm 258 */
BgL_auxz00_6807 = BgL_c2z00_2335
; }  else 
{ 
obj_t BgL_auxz00_6810;
BgL_auxz00_6810 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)10366)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4409z00zz__r4_input_6_10_2z00, BgL_c2z00_2335); 
FAILURE(BgL_auxz00_6810,BFALSE,BFALSE);} 
BgL_char1z00_4246 = 
CCHAR(BgL_auxz00_6807); } 
BgL_testz00_6806 = 
(BgL_char1z00_4246==((unsigned char)'\n')); } 
if(BgL_testz00_6806)
{ /* Ieee/input.scm 258 */
{ /* Ieee/input.scm 260 */
long BgL_l3681z00_4842;
BgL_l3681z00_4842 = 
STRING_LENGTH(BgL_accz00_2324); 
if(
BOUND_CHECK(BgL_wz00_2322, BgL_l3681z00_4842))
{ /* Ieee/input.scm 260 */
STRING_SET(BgL_accz00_2324, BgL_wz00_2322, ((unsigned char)'\r')); }  else 
{ 
obj_t BgL_auxz00_6820;
BgL_auxz00_6820 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)10397)), BGl_string4410z00zz__r4_input_6_10_2z00, 
BINT(BgL_wz00_2322), BgL_accz00_2324); 
FAILURE(BgL_auxz00_6820,BFALSE,BFALSE);} } 
{ /* Ieee/input.scm 261 */
long BgL_arg2820z00_2337;
BgL_arg2820z00_2337 = 
(((long)1)+BgL_wz00_2322); 
{ /* Ieee/input.scm 261 */
long BgL_l3685z00_4846;
BgL_l3685z00_4846 = 
STRING_LENGTH(BgL_accz00_2324); 
if(
BOUND_CHECK(BgL_arg2820z00_2337, BgL_l3685z00_4846))
{ /* Ieee/input.scm 261 */
STRING_SET(BgL_accz00_2324, BgL_arg2820z00_2337, ((unsigned char)'\n')); }  else 
{ 
obj_t BgL_auxz00_6830;
BgL_auxz00_6830 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)10429)), BGl_string4410z00zz__r4_input_6_10_2z00, 
BINT(BgL_arg2820z00_2337), BgL_accz00_2324); 
FAILURE(BgL_auxz00_6830,BFALSE,BFALSE);} } } 
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_accz00_2324, ((long)0), 
(BgL_wz00_2322+((long)2)));}  else 
{ /* Ieee/input.scm 258 */
{ /* Ieee/input.scm 264 */
unsigned char BgL_charz00_4260;
{ /* Ieee/input.scm 264 */
obj_t BgL_auxz00_6837;
if(
CHARP(BgL_cz00_2321))
{ /* Ieee/input.scm 264 */
BgL_auxz00_6837 = BgL_cz00_2321
; }  else 
{ 
obj_t BgL_auxz00_6840;
BgL_auxz00_6840 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)10535)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4409z00zz__r4_input_6_10_2z00, BgL_cz00_2321); 
FAILURE(BgL_auxz00_6840,BFALSE,BFALSE);} 
BgL_charz00_4260 = 
CCHAR(BgL_auxz00_6837); } 
{ /* Ieee/input.scm 264 */
long BgL_l3689z00_4850;
BgL_l3689z00_4850 = 
STRING_LENGTH(BgL_accz00_2324); 
if(
BOUND_CHECK(BgL_wz00_2322, BgL_l3689z00_4850))
{ /* Ieee/input.scm 264 */
STRING_SET(BgL_accz00_2324, BgL_wz00_2322, BgL_charz00_4260); }  else 
{ 
obj_t BgL_auxz00_6849;
BgL_auxz00_6849 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)10516)), BGl_string4410z00zz__r4_input_6_10_2z00, 
BINT(BgL_wz00_2322), BgL_accz00_2324); 
FAILURE(BgL_auxz00_6849,BFALSE,BFALSE);} } } 
{ 
long BgL_wz00_6855;obj_t BgL_cz00_6854;
BgL_cz00_6854 = BgL_c2z00_2335; 
BgL_wz00_6855 = 
(BgL_wz00_2322+((long)1)); 
BgL_wz00_2322 = BgL_wz00_6855; 
BgL_cz00_2321 = BgL_cz00_6854; 
goto BgL_zc3anonymousza32810ze3z83_2325;} } } }  else 
{ /* Ieee/input.scm 266 */
bool_t BgL_testz00_6857;
{ /* Ieee/input.scm 266 */
unsigned char BgL_char1z00_4263;
{ /* Ieee/input.scm 266 */
obj_t BgL_auxz00_6858;
if(
CHARP(BgL_cz00_2321))
{ /* Ieee/input.scm 266 */
BgL_auxz00_6858 = BgL_cz00_2321
; }  else 
{ 
obj_t BgL_auxz00_6861;
BgL_auxz00_6861 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)10586)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4409z00zz__r4_input_6_10_2z00, BgL_cz00_2321); 
FAILURE(BgL_auxz00_6861,BFALSE,BFALSE);} 
BgL_char1z00_4263 = 
CCHAR(BgL_auxz00_6858); } 
BgL_testz00_6857 = 
(BgL_char1z00_4263==((unsigned char)'\n')); } 
if(BgL_testz00_6857)
{ /* Ieee/input.scm 266 */
{ /* Ieee/input.scm 268 */
long BgL_l3693z00_4854;
BgL_l3693z00_4854 = 
STRING_LENGTH(BgL_accz00_2324); 
if(
BOUND_CHECK(BgL_wz00_2322, BgL_l3693z00_4854))
{ /* Ieee/input.scm 268 */
STRING_SET(BgL_accz00_2324, BgL_wz00_2322, ((unsigned char)'\n')); }  else 
{ 
obj_t BgL_auxz00_6871;
BgL_auxz00_6871 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)10645)), BGl_string4410z00zz__r4_input_6_10_2z00, 
BINT(BgL_wz00_2322), BgL_accz00_2324); 
FAILURE(BgL_auxz00_6871,BFALSE,BFALSE);} } 
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_accz00_2324, ((long)0), 
(BgL_wz00_2322+((long)1)));}  else 
{ /* Ieee/input.scm 266 */
{ /* Ieee/input.scm 272 */
unsigned char BgL_charz00_4272;
{ /* Ieee/input.scm 272 */
obj_t BgL_auxz00_6878;
if(
CHARP(BgL_cz00_2321))
{ /* Ieee/input.scm 272 */
BgL_auxz00_6878 = BgL_cz00_2321
; }  else 
{ 
obj_t BgL_auxz00_6881;
BgL_auxz00_6881 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)10775)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4409z00zz__r4_input_6_10_2z00, BgL_cz00_2321); 
FAILURE(BgL_auxz00_6881,BFALSE,BFALSE);} 
BgL_charz00_4272 = 
CCHAR(BgL_auxz00_6878); } 
{ /* Ieee/input.scm 272 */
long BgL_l3697z00_4858;
BgL_l3697z00_4858 = 
STRING_LENGTH(BgL_accz00_2324); 
if(
BOUND_CHECK(BgL_wz00_2322, BgL_l3697z00_4858))
{ /* Ieee/input.scm 272 */
STRING_SET(BgL_accz00_2324, BgL_wz00_2322, BgL_charz00_4272); }  else 
{ 
obj_t BgL_auxz00_6890;
BgL_auxz00_6890 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)10756)), BGl_string4410z00zz__r4_input_6_10_2z00, 
BINT(BgL_wz00_2322), BgL_accz00_2324); 
FAILURE(BgL_auxz00_6890,BFALSE,BFALSE);} } } 
{ 
long BgL_wz00_6897;obj_t BgL_cz00_6895;
BgL_cz00_6895 = 
BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_27); 
BgL_wz00_6897 = 
(BgL_wz00_2322+((long)1)); 
BgL_wz00_2322 = BgL_wz00_6897; 
BgL_cz00_2321 = BgL_cz00_6895; 
goto BgL_zc3anonymousza32810ze3z83_2325;} } } } } } } } } 
}



/* _read-lines */
obj_t BGl__readzd2lineszd2zz__r4_input_6_10_2z00(obj_t BgL_envz00_32, obj_t BgL_optz00_31)
{ AN_OBJECT;
{ /* Ieee/input.scm 278 */
{ /* Ieee/input.scm 278 */

{ 

{ /* Ieee/input.scm 278 */
int BgL_aux2022z00_2352;
BgL_aux2022z00_2352 = 
VECTOR_LENGTH(BgL_optz00_31); 
switch( 
(long)(BgL_aux2022z00_2352)) { case ((long)0) : 

{ /* Ieee/input.scm 278 */
obj_t BgL_ipz00_2354;
{ /* Ieee/input.scm 278 */
obj_t BgL_res3633z00_4276;
{ /* Ieee/input.scm 278 */
obj_t BgL_auxz00_6900;
BgL_auxz00_6900 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3633z00_4276 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_6900); } 
BgL_ipz00_2354 = BgL_res3633z00_4276; } 
{ /* Ieee/input.scm 278 */

return 
BGl_readzd2lineszd2zz__r4_input_6_10_2z00(BgL_ipz00_2354);} } break;case ((long)1) : 

{ /* Ieee/input.scm 278 */
obj_t BgL_ipz00_2355;
BgL_ipz00_2355 = 
VECTOR_REF(BgL_optz00_31,
(int)(((long)0))); 
{ /* Ieee/input.scm 278 */

return 
BGl_readzd2lineszd2zz__r4_input_6_10_2z00(BgL_ipz00_2355);} } break;
default: 
{ /* Ieee/input.scm 278 */
obj_t BgL_arg2834z00_2356;int BgL_arg2836z00_2358;
BgL_arg2834z00_2356 = BGl_symbol4420z00zz__r4_input_6_10_2z00; 
BgL_arg2836z00_2358 = 
VECTOR_LENGTH(BgL_optz00_31); 
return 
BGl_errorz00zz__errorz00(BgL_arg2834z00_2356, BGl_string4386z00zz__r4_input_6_10_2z00, 
BINT(BgL_arg2836z00_2358));} } } } } } 
}



/* read-lines */
BGL_EXPORTED_DEF obj_t BGl_readzd2lineszd2zz__r4_input_6_10_2z00(obj_t BgL_ipz00_30)
{ AN_OBJECT;
{ /* Ieee/input.scm 278 */
{ /* Ieee/input.scm 279 */
obj_t BgL_g1891z00_2359;
BgL_g1891z00_2359 = 
BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_30); 
{ 
obj_t BgL_lz00_4278;obj_t BgL_lsz00_4279;
BgL_lz00_4278 = BgL_g1891z00_2359; 
BgL_lsz00_4279 = BNIL; 
BgL_loopz00_4277:
if(
EOF_OBJECTP(BgL_lz00_4278))
{ /* Ieee/input.scm 279 */
obj_t BgL_auxz00_6915;
{ /* Ieee/input.scm 279 */
bool_t BgL_testz00_6916;
if(
PAIRP(BgL_lsz00_4279))
{ /* Ieee/input.scm 279 */
BgL_testz00_6916 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 279 */
BgL_testz00_6916 = 
NULLP(BgL_lsz00_4279)
; } 
if(BgL_testz00_6916)
{ /* Ieee/input.scm 279 */
BgL_auxz00_6915 = BgL_lsz00_4279
; }  else 
{ 
obj_t BgL_auxz00_6920;
BgL_auxz00_6920 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11112)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4422z00zz__r4_input_6_10_2z00, BgL_lsz00_4279); 
FAILURE(BgL_auxz00_6920,BFALSE,BFALSE);} } 
return 
bgl_reverse_bang(BgL_auxz00_6915);}  else 
{ /* Ieee/input.scm 279 */
obj_t BgL_arg2839z00_4284;obj_t BgL_arg2841z00_4285;
BgL_arg2839z00_4284 = 
BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_30); 
BgL_arg2841z00_4285 = 
MAKE_PAIR(BgL_lz00_4278, BgL_lsz00_4279); 
{ 
obj_t BgL_lsz00_6928;obj_t BgL_lz00_6927;
BgL_lz00_6927 = BgL_arg2839z00_4284; 
BgL_lsz00_6928 = BgL_arg2841z00_4285; 
BgL_lsz00_4279 = BgL_lsz00_6928; 
BgL_lz00_4278 = BgL_lz00_6927; 
goto BgL_loopz00_4277;} } } } } 
}



/* _read-string */
obj_t BGl__readzd2stringzd2zz__r4_input_6_10_2z00(obj_t BgL_envz00_35, obj_t BgL_optz00_34)
{ AN_OBJECT;
{ /* Ieee/input.scm 288 */
{ /* Ieee/input.scm 288 */

{ 

{ /* Ieee/input.scm 288 */
int BgL_aux2024z00_2370;
BgL_aux2024z00_2370 = 
VECTOR_LENGTH(BgL_optz00_34); 
switch( 
(long)(BgL_aux2024z00_2370)) { case ((long)0) : 

{ /* Ieee/input.scm 288 */
obj_t BgL_ipz00_2372;
{ /* Ieee/input.scm 288 */
obj_t BgL_res3634z00_4298;
{ /* Ieee/input.scm 288 */
obj_t BgL_auxz00_6930;
BgL_auxz00_6930 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3634z00_4298 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_6930); } 
BgL_ipz00_2372 = BgL_res3634z00_4298; } 
{ /* Ieee/input.scm 288 */

return 
BGl_readzd2stringzd2zz__r4_input_6_10_2z00(BgL_ipz00_2372);} } break;case ((long)1) : 

{ /* Ieee/input.scm 288 */
obj_t BgL_ipz00_2373;
BgL_ipz00_2373 = 
VECTOR_REF(BgL_optz00_34,
(int)(((long)0))); 
{ /* Ieee/input.scm 288 */

return 
BGl_readzd2stringzd2zz__r4_input_6_10_2z00(BgL_ipz00_2373);} } break;
default: 
{ /* Ieee/input.scm 288 */
obj_t BgL_arg2843z00_2374;int BgL_arg2845z00_2376;
BgL_arg2843z00_2374 = BGl_symbol4423z00zz__r4_input_6_10_2z00; 
BgL_arg2845z00_2376 = 
VECTOR_LENGTH(BgL_optz00_34); 
return 
BGl_errorz00zz__errorz00(BgL_arg2843z00_2374, BGl_string4386z00zz__r4_input_6_10_2z00, 
BINT(BgL_arg2845z00_2376));} } } } } } 
}



/* read-string */
BGL_EXPORTED_DEF obj_t BGl_readzd2stringzd2zz__r4_input_6_10_2z00(obj_t BgL_ipz00_33)
{ AN_OBJECT;
{ /* Ieee/input.scm 288 */
{ 
obj_t BgL_inputzd2portzd2_2428;long BgL_lastzd2matchzd2_2429;obj_t BgL_inputzd2portzd2_2420;long BgL_lastzd2matchzd2_2421;obj_t BgL_inputzd2portzd2_2412;long BgL_lastzd2matchzd2_2413;
{ /* Ieee/input.scm 289 */
bool_t BgL_testz00_6942;
{ /* Ieee/input.scm 289 */
obj_t BgL_arg2849z00_2411;
{ /* Ieee/input.scm 289 */
obj_t BgL_res3635z00_4299;
if(
INPUT_PORTP(BgL_ipz00_33))
{ /* Ieee/input.scm 289 */
BgL_res3635z00_4299 = BgL_ipz00_33; }  else 
{ 
obj_t BgL_auxz00_6945;
BgL_auxz00_6945 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11527)), BGl_string4424z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_ipz00_33); 
FAILURE(BgL_auxz00_6945,BFALSE,BFALSE);} 
BgL_arg2849z00_2411 = BgL_res3635z00_4299; } 
BgL_testz00_6942 = 
INPUT_PORT_CLOSEP(BgL_arg2849z00_2411); } 
if(BgL_testz00_6942)
{ /* Ieee/input.scm 289 */
obj_t BgL_arg2848z00_2410;
{ /* Ieee/input.scm 289 */
obj_t BgL_res3636z00_4301;
if(
INPUT_PORTP(BgL_ipz00_33))
{ /* Ieee/input.scm 289 */
BgL_res3636z00_4301 = BgL_ipz00_33; }  else 
{ 
obj_t BgL_auxz00_6952;
BgL_auxz00_6952 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11527)), BGl_string4424z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_ipz00_33); 
FAILURE(BgL_auxz00_6952,BFALSE,BFALSE);} 
BgL_arg2848z00_2410 = BgL_res3636z00_4301; } 
{ /* Ieee/input.scm 289 */
obj_t BgL_aux4115z00_5282;
BgL_aux4115z00_5282 = 
BGl_errorz00zz__errorz00(BGl_string4329z00zz__r4_input_6_10_2z00, BGl_string4332z00zz__r4_input_6_10_2z00, BgL_arg2848z00_2410); 
if(
STRINGP(BgL_aux4115z00_5282))
{ /* Ieee/input.scm 289 */
return BgL_aux4115z00_5282;}  else 
{ 
obj_t BgL_auxz00_6959;
BgL_auxz00_6959 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11527)), BGl_string4424z00zz__r4_input_6_10_2z00, BGl_string4326z00zz__r4_input_6_10_2z00, BgL_aux4115z00_5282); 
FAILURE(BgL_auxz00_6959,BFALSE,BFALSE);} } }  else 
{ /* Ieee/input.scm 289 */
obj_t BgL_aux4117z00_5284;
{ /* Ieee/input.scm 289 */
obj_t BgL_inputzd2portzd2_4325;
if(
INPUT_PORTP(BgL_ipz00_33))
{ /* Ieee/input.scm 289 */
BgL_inputzd2portzd2_4325 = BgL_ipz00_33; }  else 
{ 
obj_t BgL_auxz00_6965;
BgL_auxz00_6965 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11527)), BGl_string4328z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_ipz00_33); 
FAILURE(BgL_auxz00_6965,BFALSE,BFALSE);} 
RGC_START_MATCH(BgL_inputzd2portzd2_4325); } 
{ /* Ieee/input.scm 289 */
long BgL_matchz00_2517;
BgL_inputzd2portzd2_2428 = BgL_ipz00_33; 
BgL_lastzd2matchzd2_2429 = ((long)1); 
BgL_zc3anonymousza32858ze3z83_2430:
{ /* Ieee/input.scm 289 */
int BgL_currentzd2charzd2_2431;
{ /* Ieee/input.scm 289 */
obj_t BgL_inputzd2portzd2_4314;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2428))
{ /* Ieee/input.scm 289 */
BgL_inputzd2portzd2_4314 = BgL_inputzd2portzd2_2428; }  else 
{ 
obj_t BgL_auxz00_6972;
BgL_auxz00_6972 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11527)), BGl_string4427z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_2428); 
FAILURE(BgL_auxz00_6972,BFALSE,BFALSE);} 
BgL_currentzd2charzd2_2431 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_4314); } 
if(
(
(long)(BgL_currentzd2charzd2_2431)==((long)0)))
{ /* Ieee/input.scm 289 */
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2428))
{ /* Ieee/input.scm 289 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_2428))
{ 

goto BgL_zc3anonymousza32858ze3z83_2430;}  else 
{ /* Ieee/input.scm 289 */
BgL_matchz00_2517 = BgL_lastzd2matchzd2_2429; } }  else 
{ /* Ieee/input.scm 289 */
BgL_inputzd2portzd2_2420 = BgL_inputzd2portzd2_2428; 
BgL_lastzd2matchzd2_2421 = BgL_lastzd2matchzd2_2429; 
BgL_zc3anonymousza32854ze3z83_2422:
{ /* Ieee/input.scm 289 */
long BgL_newzd2matchzd2_2423;
{ /* Ieee/input.scm 289 */
obj_t BgL_inputzd2portzd2_4308;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2420))
{ /* Ieee/input.scm 289 */
BgL_inputzd2portzd2_4308 = BgL_inputzd2portzd2_2420; }  else 
{ 
obj_t BgL_auxz00_6986;
BgL_auxz00_6986 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11527)), BGl_string4426z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_2420); 
FAILURE(BgL_auxz00_6986,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_4308); } 
BgL_newzd2matchzd2_2423 = ((long)0); 
{ /* Ieee/input.scm 289 */
int BgL_currentzd2charzd2_2424;
BgL_currentzd2charzd2_2424 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2420); 
if(
(
(long)(BgL_currentzd2charzd2_2424)==((long)0)))
{ /* Ieee/input.scm 289 */
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2420))
{ /* Ieee/input.scm 289 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_2420))
{ 

goto BgL_zc3anonymousza32854ze3z83_2422;}  else 
{ /* Ieee/input.scm 289 */
BgL_matchz00_2517 = BgL_newzd2matchzd2_2423; } }  else 
{ /* Ieee/input.scm 289 */
BgL_inputzd2portzd2_2412 = BgL_inputzd2portzd2_2420; 
BgL_lastzd2matchzd2_2413 = BgL_newzd2matchzd2_2423; 
BgL_zc3anonymousza32850ze3z83_2414:
{ /* Ieee/input.scm 289 */
long BgL_newzd2matchzd2_2415;
{ /* Ieee/input.scm 289 */
obj_t BgL_inputzd2portzd2_4302;
if(
INPUT_PORTP(BgL_inputzd2portzd2_2412))
{ /* Ieee/input.scm 289 */
BgL_inputzd2portzd2_4302 = BgL_inputzd2portzd2_2412; }  else 
{ 
obj_t BgL_auxz00_7001;
BgL_auxz00_7001 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11527)), BGl_string4425z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_2412); 
FAILURE(BgL_auxz00_7001,BFALSE,BFALSE);} 
RGC_STOP_MATCH(BgL_inputzd2portzd2_4302); } 
BgL_newzd2matchzd2_2415 = ((long)0); 
{ /* Ieee/input.scm 289 */
int BgL_currentzd2charzd2_2416;
BgL_currentzd2charzd2_2416 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2412); 
if(
(
(long)(BgL_currentzd2charzd2_2416)==((long)0)))
{ /* Ieee/input.scm 289 */
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2412))
{ /* Ieee/input.scm 289 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_2412))
{ 

goto BgL_zc3anonymousza32850ze3z83_2414;}  else 
{ /* Ieee/input.scm 289 */
BgL_matchz00_2517 = BgL_newzd2matchzd2_2415; } }  else 
{ 
long BgL_lastzd2matchzd2_7014;
BgL_lastzd2matchzd2_7014 = BgL_newzd2matchzd2_2415; 
BgL_lastzd2matchzd2_2413 = BgL_lastzd2matchzd2_7014; 
goto BgL_zc3anonymousza32850ze3z83_2414;} }  else 
{ 
long BgL_lastzd2matchzd2_7015;
BgL_lastzd2matchzd2_7015 = BgL_newzd2matchzd2_2415; 
BgL_lastzd2matchzd2_2413 = BgL_lastzd2matchzd2_7015; 
goto BgL_zc3anonymousza32850ze3z83_2414;} } } } }  else 
{ 
long BgL_lastzd2matchzd2_7017;obj_t BgL_inputzd2portzd2_7016;
BgL_inputzd2portzd2_7016 = BgL_inputzd2portzd2_2420; 
BgL_lastzd2matchzd2_7017 = BgL_newzd2matchzd2_2423; 
BgL_lastzd2matchzd2_2413 = BgL_lastzd2matchzd2_7017; 
BgL_inputzd2portzd2_2412 = BgL_inputzd2portzd2_7016; 
goto BgL_zc3anonymousza32850ze3z83_2414;} } } } }  else 
{ 
long BgL_lastzd2matchzd2_7019;obj_t BgL_inputzd2portzd2_7018;
BgL_inputzd2portzd2_7018 = BgL_inputzd2portzd2_2428; 
BgL_lastzd2matchzd2_7019 = BgL_lastzd2matchzd2_2429; 
BgL_lastzd2matchzd2_2421 = BgL_lastzd2matchzd2_7019; 
BgL_inputzd2portzd2_2420 = BgL_inputzd2portzd2_7018; 
goto BgL_zc3anonymousza32854ze3z83_2422;} } 
{ /* Ieee/input.scm 289 */
obj_t BgL_inputzd2portzd2_4326;
if(
INPUT_PORTP(BgL_ipz00_33))
{ /* Ieee/input.scm 289 */
BgL_inputzd2portzd2_4326 = BgL_ipz00_33; }  else 
{ 
obj_t BgL_auxz00_7022;
BgL_auxz00_7022 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11527)), BGl_string4328z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_ipz00_33); 
FAILURE(BgL_auxz00_7022,BFALSE,BFALSE);} 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_4326); } 
{ 

{ /* Ieee/input.scm 289 */
obj_t BgL_aux1988z00_2522;
BgL_aux1988z00_2522 = 
BINT(BgL_matchz00_2517); 
switch( 
(long)CINT(BgL_aux1988z00_2522)) { case ((long)1) : 

BgL_aux4117z00_5284 = BGl_string4402z00zz__r4_input_6_10_2z00; break;case ((long)0) : 

{ /* Ieee/input.scm 289 */
int BgL_arg2869z00_2445;
{ /* Ieee/input.scm 289 */
int BgL_res3637z00_4320;
{ /* Ieee/input.scm 289 */
obj_t BgL_inputzd2portzd2_4319;
if(
INPUT_PORTP(BgL_ipz00_33))
{ /* Ieee/input.scm 289 */
BgL_inputzd2portzd2_4319 = BgL_ipz00_33; }  else 
{ 
obj_t BgL_auxz00_7030;
BgL_auxz00_7030 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11527)), BGl_string4411z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_ipz00_33); 
FAILURE(BgL_auxz00_7030,BFALSE,BFALSE);} 
BgL_res3637z00_4320 = 
(int)(
RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_4319)); } 
BgL_arg2869z00_2445 = BgL_res3637z00_4320; } 
{ /* Ieee/input.scm 289 */
obj_t BgL_inputzd2portzd2_4321;long BgL_stopz00_4323;
if(
INPUT_PORTP(BgL_ipz00_33))
{ /* Ieee/input.scm 289 */
BgL_inputzd2portzd2_4321 = BgL_ipz00_33; }  else 
{ 
obj_t BgL_auxz00_7038;
BgL_auxz00_7038 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11527)), BGl_string4411z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_ipz00_33); 
FAILURE(BgL_auxz00_7038,BFALSE,BFALSE);} 
BgL_stopz00_4323 = 
(long)(BgL_arg2869z00_2445); 
BgL_aux4117z00_5284 = 
rgc_buffer_substring(BgL_inputzd2portzd2_4321, ((long)0), BgL_stopz00_4323); } } break;
default: 
BgL_aux4117z00_5284 = 
BGl_errorz00zz__errorz00(BGl_string4329z00zz__r4_input_6_10_2z00, BGl_string4330z00zz__r4_input_6_10_2z00, 
BINT(BgL_matchz00_2517)); } } } } 
if(
STRINGP(BgL_aux4117z00_5284))
{ /* Ieee/input.scm 289 */
return BgL_aux4117z00_5284;}  else 
{ 
obj_t BgL_auxz00_7050;
BgL_auxz00_7050 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)11527)), BGl_string4424z00zz__r4_input_6_10_2z00, BGl_string4326z00zz__r4_input_6_10_2z00, BgL_aux4117z00_5284); 
FAILURE(BgL_auxz00_7050,BFALSE,BFALSE);} } } } } 
}



/* _read-of-strings */
obj_t BGl__readzd2ofzd2stringsz00zz__r4_input_6_10_2z00(obj_t BgL_envz00_38, obj_t BgL_optz00_37)
{ AN_OBJECT;
{ /* Ieee/input.scm 311 */
{ /* Ieee/input.scm 311 */

{ 

{ /* Ieee/input.scm 311 */
int BgL_aux2026z00_2553;
BgL_aux2026z00_2553 = 
VECTOR_LENGTH(BgL_optz00_37); 
switch( 
(long)(BgL_aux2026z00_2553)) { case ((long)0) : 

{ /* Ieee/input.scm 311 */
obj_t BgL_ipz00_2555;
{ /* Ieee/input.scm 311 */
obj_t BgL_res3638z00_4328;
{ /* Ieee/input.scm 311 */
obj_t BgL_auxz00_7055;
BgL_auxz00_7055 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3638z00_4328 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_7055); } 
BgL_ipz00_2555 = BgL_res3638z00_4328; } 
{ /* Ieee/input.scm 311 */

{ /* Ieee/input.scm 311 */
obj_t BgL_funz00_5286;
BgL_funz00_5286 = BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_5286, ((long)1)))
{ /* Ieee/input.scm 311 */
return 
PROCEDURE_ENTRY(BgL_funz00_5286)(BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00, BgL_ipz00_2555, BEOA);}  else 
{ /* Ieee/input.scm 311 */
FAILURE(BGl_string4430z00zz__r4_input_6_10_2z00,BGl_list4431z00zz__r4_input_6_10_2z00,BgL_funz00_5286);} } } } break;case ((long)1) : 

{ /* Ieee/input.scm 311 */
obj_t BgL_ipz00_2556;
BgL_ipz00_2556 = 
VECTOR_REF(BgL_optz00_37,
(int)(((long)0))); 
{ /* Ieee/input.scm 311 */

{ /* Ieee/input.scm 311 */
obj_t BgL_funz00_5289;
BgL_funz00_5289 = BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_5289, ((long)1)))
{ /* Ieee/input.scm 311 */
return 
PROCEDURE_ENTRY(BgL_funz00_5289)(BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00, BgL_ipz00_2556, BEOA);}  else 
{ /* Ieee/input.scm 311 */
FAILURE(BGl_string4430z00zz__r4_input_6_10_2z00,BGl_list4431z00zz__r4_input_6_10_2z00,BgL_funz00_5289);} } } } break;
default: 
{ /* Ieee/input.scm 311 */
obj_t BgL_arg2934z00_2557;int BgL_arg2936z00_2559;
BgL_arg2934z00_2557 = BGl_symbol4428z00zz__r4_input_6_10_2z00; 
BgL_arg2936z00_2559 = 
VECTOR_LENGTH(BgL_optz00_37); 
return 
BGl_errorz00zz__errorz00(BgL_arg2934z00_2557, BGl_string4386z00zz__r4_input_6_10_2z00, 
BINT(BgL_arg2936z00_2559));} } } } } } 
}



/* read-of-strings */
BGL_EXPORTED_DEF obj_t BGl_readzd2ofzd2stringsz00zz__r4_input_6_10_2z00(obj_t BgL_ipz00_36)
{ AN_OBJECT;
{ /* Ieee/input.scm 311 */
{ /* Ieee/input.scm 312 */
obj_t BgL_funz00_5292;
BgL_funz00_5292 = BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_5292, ((long)1)))
{ /* Ieee/input.scm 312 */
return 
PROCEDURE_ENTRY(BgL_funz00_5292)(BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00, BgL_ipz00_36, BEOA);}  else 
{ /* Ieee/input.scm 312 */
FAILURE(BGl_string4436z00zz__r4_input_6_10_2z00,BGl_list4431z00zz__r4_input_6_10_2z00,BgL_funz00_5292);} } } 
}



/* _read-chars */
obj_t BGl__readzd2charszd2zz__r4_input_6_10_2z00(obj_t BgL_envz00_42, obj_t BgL_optz00_41)
{ AN_OBJECT;
{ /* Ieee/input.scm 317 */
{ /* Ieee/input.scm 317 */
obj_t BgL_g2027z00_2560;
BgL_g2027z00_2560 = 
VECTOR_REF(BgL_optz00_41,
(int)(((long)0))); 
{ 

{ /* Ieee/input.scm 317 */
int BgL_aux2029z00_2562;
BgL_aux2029z00_2562 = 
VECTOR_LENGTH(BgL_optz00_41); 
switch( 
(long)(BgL_aux2029z00_2562)) { case ((long)1) : 

{ /* Ieee/input.scm 317 */
obj_t BgL_ipz00_2564;
{ /* Ieee/input.scm 317 */
obj_t BgL_res3639z00_4332;
{ /* Ieee/input.scm 317 */
obj_t BgL_auxz00_7083;
BgL_auxz00_7083 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3639z00_4332 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_7083); } 
BgL_ipz00_2564 = BgL_res3639z00_4332; } 
{ /* Ieee/input.scm 317 */

return 
BGl_readzd2charszd2zz__r4_input_6_10_2z00(
VECTOR_REF(BgL_optz00_41,
(int)(((long)0))), BgL_ipz00_2564);} } break;case ((long)2) : 

{ /* Ieee/input.scm 317 */
obj_t BgL_ipz00_2566;
BgL_ipz00_2566 = 
VECTOR_REF(BgL_optz00_41,
(int)(((long)1))); 
{ /* Ieee/input.scm 317 */

return 
BGl_readzd2charszd2zz__r4_input_6_10_2z00(
VECTOR_REF(BgL_optz00_41,
(int)(((long)0))), BgL_ipz00_2566);} } break;
default: 
{ /* Ieee/input.scm 317 */
obj_t BgL_arg2940z00_2568;int BgL_arg2943z00_2570;
BgL_arg2940z00_2568 = BGl_symbol4437z00zz__r4_input_6_10_2z00; 
BgL_arg2943z00_2570 = 
VECTOR_LENGTH(BgL_optz00_41); 
return 
BGl_errorz00zz__errorz00(BgL_arg2940z00_2568, BGl_string4439z00zz__r4_input_6_10_2z00, 
BINT(BgL_arg2943z00_2570));} } } } } } 
}



/* read-chars */
BGL_EXPORTED_DEF obj_t BGl_readzd2charszd2zz__r4_input_6_10_2z00(obj_t BgL_lz00_39, obj_t BgL_ipz00_40)
{ AN_OBJECT;
{ /* Ieee/input.scm 317 */
{ /* Ieee/input.scm 318 */
obj_t BgL_lenz00_2571;
if(
INTEGERP(BgL_lz00_39))
{ /* Ieee/input.scm 319 */
BgL_lenz00_2571 = BgL_lz00_39; }  else 
{ /* Ieee/input.scm 319 */
if(
ELONGP(BgL_lz00_39))
{ /* Ieee/input.scm 320 */
long BgL_res3640z00_4336;
{ /* Ieee/input.scm 320 */
long BgL_xz00_4335;
BgL_xz00_4335 = 
BELONG_TO_LONG(BgL_lz00_39); 
{ /* Ieee/input.scm 320 */
long BgL_auxz00_7104;
{ /* Ieee/input.scm 320 */
long BgL_auxz00_7105;
BgL_auxz00_7105 = 
ELONG_TO_LONG(BgL_xz00_4335); 
BgL_auxz00_7104 = 
ELONG_TO_LONG(BgL_auxz00_7105); } 
BgL_res3640z00_4336 = 
ELONG_TO_LONG(BgL_auxz00_7104); } } 
BgL_lenz00_2571 = 
BINT(BgL_res3640z00_4336); }  else 
{ /* Ieee/input.scm 320 */
if(
LLONGP(BgL_lz00_39))
{ /* Ieee/input.scm 321 */
BGL_LONGLONG_T BgL_xz00_4338;
BgL_xz00_4338 = 
BLLONG_TO_LLONG(BgL_lz00_39); 
BgL_lenz00_2571 = 
BINT(
LLONG_TO_LONG(BgL_xz00_4338)); }  else 
{ /* Ieee/input.scm 321 */
BgL_lenz00_2571 = 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_symbol4437z00zz__r4_input_6_10_2z00, BGl_string4440z00zz__r4_input_6_10_2z00, 
bgl_find_runtime_type(BgL_lz00_39)); } } } 
{ /* Ieee/input.scm 325 */
bool_t BgL_testz00_7117;
{ /* Ieee/input.scm 325 */
long BgL_n1z00_4339;
{ /* Ieee/input.scm 325 */
obj_t BgL_auxz00_7118;
if(
INTEGERP(BgL_lenz00_2571))
{ /* Ieee/input.scm 325 */
BgL_auxz00_7118 = BgL_lenz00_2571
; }  else 
{ 
obj_t BgL_auxz00_7121;
BgL_auxz00_7121 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)12982)), BGl_string4438z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_lenz00_2571); 
FAILURE(BgL_auxz00_7121,BFALSE,BFALSE);} 
BgL_n1z00_4339 = 
(long)CINT(BgL_auxz00_7118); } 
BgL_testz00_7117 = 
(BgL_n1z00_4339<=((long)0)); } 
if(BgL_testz00_7117)
{ /* Ieee/input.scm 326 */
bool_t BgL_testz00_7127;
{ /* Ieee/input.scm 326 */
long BgL_n1z00_4341;
{ /* Ieee/input.scm 326 */
obj_t BgL_auxz00_7128;
if(
INTEGERP(BgL_lenz00_2571))
{ /* Ieee/input.scm 326 */
BgL_auxz00_7128 = BgL_lenz00_2571
; }  else 
{ 
obj_t BgL_auxz00_7131;
BgL_auxz00_7131 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)13001)), BGl_string4438z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_lenz00_2571); 
FAILURE(BgL_auxz00_7131,BFALSE,BFALSE);} 
BgL_n1z00_4341 = 
(long)CINT(BgL_auxz00_7128); } 
BgL_testz00_7127 = 
(BgL_n1z00_4341==((long)0)); } 
if(BgL_testz00_7127)
{ /* Ieee/input.scm 326 */
return BGl_string4402z00zz__r4_input_6_10_2z00;}  else 
{ /* Llib/object.scm 90 */
BgL_z62iozd2errorzb0_bglt BgL_arg2946z00_2574;
{ /* Llib/object.scm 90 */
obj_t BgL_arg2947z00_2575;obj_t BgL_arg2948z00_2576;
{ /* Llib/object.scm 90 */

{ /* Llib/object.scm 90 */

BgL_arg2947z00_2575 = 
BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE); } } 
BgL_arg2948z00_2576 = BGl_symbol4437z00zz__r4_input_6_10_2z00; 
BgL_arg2946z00_2574 = 
BGl_makezd2z62iozd2errorz62zz__objectz00(BFALSE, BFALSE, BgL_arg2947z00_2575, BgL_arg2948z00_2576, BGl_string4441z00zz__r4_input_6_10_2z00, BgL_lenz00_2571); } 
return 
BGl_raisez00zz__errorz00(
(obj_t)(BgL_arg2946z00_2574));} }  else 
{ /* Ieee/input.scm 334 */
obj_t BgL_sz00_2579;
{ /* Ieee/input.scm 334 */
long BgL_auxz00_7141;
{ /* Ieee/input.scm 334 */
obj_t BgL_auxz00_7142;
if(
INTEGERP(BgL_lenz00_2571))
{ /* Ieee/input.scm 334 */
BgL_auxz00_7142 = BgL_lenz00_2571
; }  else 
{ 
obj_t BgL_auxz00_7145;
BgL_auxz00_7145 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)13184)), BGl_string4438z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_lenz00_2571); 
FAILURE(BgL_auxz00_7145,BFALSE,BFALSE);} 
BgL_auxz00_7141 = 
(long)CINT(BgL_auxz00_7142); } 
BgL_sz00_2579 = 
make_string_sans_fill(BgL_auxz00_7141); } 
{ /* Ieee/input.scm 334 */
long BgL_nz00_2580;
{ /* Ieee/input.scm 335 */
long BgL_auxz00_7158;obj_t BgL_auxz00_7151;
{ /* Ieee/input.scm 335 */
obj_t BgL_auxz00_7160;
if(
INTEGERP(BgL_lenz00_2571))
{ /* Ieee/input.scm 335 */
BgL_auxz00_7160 = BgL_lenz00_2571
; }  else 
{ 
obj_t BgL_auxz00_7163;
BgL_auxz00_7163 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)13222)), BGl_string4438z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_lenz00_2571); 
FAILURE(BgL_auxz00_7163,BFALSE,BFALSE);} 
BgL_auxz00_7158 = 
(long)CINT(BgL_auxz00_7160); } 
if(
INPUT_PORTP(BgL_ipz00_40))
{ /* Ieee/input.scm 335 */
BgL_auxz00_7151 = BgL_ipz00_40
; }  else 
{ 
obj_t BgL_auxz00_7154;
BgL_auxz00_7154 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)13215)), BGl_string4438z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_ipz00_40); 
FAILURE(BgL_auxz00_7154,BFALSE,BFALSE);} 
BgL_nz00_2580 = 
bgl_rgc_blit_string(BgL_auxz00_7151, 
BSTRING_TO_STRING(BgL_sz00_2579), ((long)0), BgL_auxz00_7158); } 
{ /* Ieee/input.scm 335 */

if(
(BgL_nz00_2580==((long)0)))
{ /* Ieee/input.scm 338 */
bool_t BgL_testz00_7171;
{ /* Ieee/input.scm 338 */
obj_t BgL_inputzd2portzd2_4345;
if(
INPUT_PORTP(BgL_ipz00_40))
{ /* Ieee/input.scm 338 */
BgL_inputzd2portzd2_4345 = BgL_ipz00_40; }  else 
{ 
obj_t BgL_auxz00_7174;
BgL_auxz00_7174 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)13278)), BGl_string4438z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_ipz00_40); 
FAILURE(BgL_auxz00_7174,BFALSE,BFALSE);} 
BgL_testz00_7171 = 
rgc_buffer_eof_p(BgL_inputzd2portzd2_4345); } 
if(BgL_testz00_7171)
{ /* Ieee/input.scm 338 */
return BEOF;}  else 
{ /* Ieee/input.scm 338 */
return BGl_string4402z00zz__r4_input_6_10_2z00;} }  else 
{ /* Ieee/input.scm 341 */
bool_t BgL_testz00_7179;
{ /* Ieee/input.scm 341 */
long BgL_n2z00_4347;
{ /* Ieee/input.scm 341 */
obj_t BgL_auxz00_7180;
if(
INTEGERP(BgL_lenz00_2571))
{ /* Ieee/input.scm 341 */
BgL_auxz00_7180 = BgL_lenz00_2571
; }  else 
{ 
obj_t BgL_auxz00_7183;
BgL_auxz00_7183 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)13316)), BGl_string4438z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_lenz00_2571); 
FAILURE(BgL_auxz00_7183,BFALSE,BFALSE);} 
BgL_n2z00_4347 = 
(long)CINT(BgL_auxz00_7180); } 
BgL_testz00_7179 = 
(BgL_nz00_2580<BgL_n2z00_4347); } 
if(BgL_testz00_7179)
{ /* Ieee/input.scm 341 */
return 
bgl_string_shrink(BgL_sz00_2579, BgL_nz00_2580);}  else 
{ /* Ieee/input.scm 341 */
return BgL_sz00_2579;} } } } } } } } 
}



/* _read-chars! */
obj_t BGl__readzd2charsz12zc0zz__r4_input_6_10_2z00(obj_t BgL_envz00_47, obj_t BgL_optz00_46)
{ AN_OBJECT;
{ /* Ieee/input.scm 349 */
{ /* Ieee/input.scm 349 */
obj_t BgL_g2030z00_2590;obj_t BgL_g2031z00_2591;
BgL_g2030z00_2590 = 
VECTOR_REF(BgL_optz00_46,
(int)(((long)0))); 
BgL_g2031z00_2591 = 
VECTOR_REF(BgL_optz00_46,
(int)(((long)1))); 
{ 

{ /* Ieee/input.scm 349 */
int BgL_aux2033z00_2593;
BgL_aux2033z00_2593 = 
VECTOR_LENGTH(BgL_optz00_46); 
switch( 
(long)(BgL_aux2033z00_2593)) { case ((long)2) : 

{ /* Ieee/input.scm 349 */
obj_t BgL_ipz00_2595;
{ /* Ieee/input.scm 349 */
obj_t BgL_res3641z00_4351;
{ /* Ieee/input.scm 349 */
obj_t BgL_auxz00_7195;
BgL_auxz00_7195 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3641z00_4351 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_7195); } 
BgL_ipz00_2595 = BgL_res3641z00_4351; } 
{ /* Ieee/input.scm 349 */

{ /* Ieee/input.scm 349 */
obj_t BgL_arg2961z00_2596;obj_t BgL_arg2962z00_2597;
BgL_arg2961z00_2596 = 
VECTOR_REF(BgL_optz00_46,
(int)(((long)0))); 
BgL_arg2962z00_2597 = 
VECTOR_REF(BgL_optz00_46,
(int)(((long)1))); 
{ /* Ieee/input.scm 349 */
obj_t BgL_auxz00_7202;
if(
STRINGP(BgL_arg2961z00_2596))
{ /* Ieee/input.scm 349 */
BgL_auxz00_7202 = BgL_arg2961z00_2596
; }  else 
{ 
obj_t BgL_auxz00_7205;
BgL_auxz00_7205 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)13589)), BGl_string4445z00zz__r4_input_6_10_2z00, BGl_string4326z00zz__r4_input_6_10_2z00, BgL_arg2961z00_2596); 
FAILURE(BgL_auxz00_7205,BFALSE,BFALSE);} 
return 
BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00(BgL_auxz00_7202, BgL_arg2962z00_2597, BgL_ipz00_2595);} } } } break;case ((long)3) : 

{ /* Ieee/input.scm 349 */
obj_t BgL_ipz00_2598;
BgL_ipz00_2598 = 
VECTOR_REF(BgL_optz00_46,
(int)(((long)2))); 
{ /* Ieee/input.scm 349 */

{ /* Ieee/input.scm 349 */
obj_t BgL_arg2963z00_2599;obj_t BgL_arg2964z00_2600;
BgL_arg2963z00_2599 = 
VECTOR_REF(BgL_optz00_46,
(int)(((long)0))); 
BgL_arg2964z00_2600 = 
VECTOR_REF(BgL_optz00_46,
(int)(((long)1))); 
{ /* Ieee/input.scm 349 */
obj_t BgL_auxz00_7216;
if(
STRINGP(BgL_arg2963z00_2599))
{ /* Ieee/input.scm 349 */
BgL_auxz00_7216 = BgL_arg2963z00_2599
; }  else 
{ 
obj_t BgL_auxz00_7219;
BgL_auxz00_7219 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)13589)), BGl_string4445z00zz__r4_input_6_10_2z00, BGl_string4326z00zz__r4_input_6_10_2z00, BgL_arg2963z00_2599); 
FAILURE(BgL_auxz00_7219,BFALSE,BFALSE);} 
return 
BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00(BgL_auxz00_7216, BgL_arg2964z00_2600, BgL_ipz00_2598);} } } } break;
default: 
{ /* Ieee/input.scm 349 */
obj_t BgL_arg2965z00_2601;int BgL_arg2967z00_2603;
BgL_arg2965z00_2601 = BGl_symbol4442z00zz__r4_input_6_10_2z00; 
BgL_arg2967z00_2603 = 
VECTOR_LENGTH(BgL_optz00_46); 
return 
BGl_errorz00zz__errorz00(BgL_arg2965z00_2601, BGl_string4444z00zz__r4_input_6_10_2z00, 
BINT(BgL_arg2967z00_2603));} } } } } } 
}



/* read-chars! */
BGL_EXPORTED_DEF obj_t BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00(obj_t BgL_bufz00_43, obj_t BgL_lz00_44, obj_t BgL_ipz00_45)
{ AN_OBJECT;
{ /* Ieee/input.scm 349 */
{ /* Ieee/input.scm 350 */
obj_t BgL_lenz00_2604;
if(
INTEGERP(BgL_lz00_44))
{ /* Ieee/input.scm 351 */
BgL_lenz00_2604 = BgL_lz00_44; }  else 
{ /* Ieee/input.scm 351 */
if(
ELONGP(BgL_lz00_44))
{ /* Ieee/input.scm 352 */
long BgL_res3642z00_4355;
{ /* Ieee/input.scm 352 */
long BgL_xz00_4354;
BgL_xz00_4354 = 
BELONG_TO_LONG(BgL_lz00_44); 
{ /* Ieee/input.scm 352 */
long BgL_auxz00_7234;
{ /* Ieee/input.scm 352 */
long BgL_auxz00_7235;
BgL_auxz00_7235 = 
ELONG_TO_LONG(BgL_xz00_4354); 
BgL_auxz00_7234 = 
ELONG_TO_LONG(BgL_auxz00_7235); } 
BgL_res3642z00_4355 = 
ELONG_TO_LONG(BgL_auxz00_7234); } } 
BgL_lenz00_2604 = 
BINT(BgL_res3642z00_4355); }  else 
{ /* Ieee/input.scm 352 */
if(
LLONGP(BgL_lz00_44))
{ /* Ieee/input.scm 353 */
BGL_LONGLONG_T BgL_xz00_4357;
BgL_xz00_4357 = 
BLLONG_TO_LLONG(BgL_lz00_44); 
BgL_lenz00_2604 = 
BINT(
LLONG_TO_LONG(BgL_xz00_4357)); }  else 
{ /* Ieee/input.scm 353 */
BgL_lenz00_2604 = 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_symbol4442z00zz__r4_input_6_10_2z00, BGl_string4440z00zz__r4_input_6_10_2z00, 
bgl_find_runtime_type(BgL_lz00_44)); } } } 
{ /* Ieee/input.scm 357 */
bool_t BgL_testz00_7247;
{ /* Ieee/input.scm 357 */
long BgL_n1z00_4358;
{ /* Ieee/input.scm 357 */
obj_t BgL_auxz00_7248;
if(
INTEGERP(BgL_lenz00_2604))
{ /* Ieee/input.scm 357 */
BgL_auxz00_7248 = BgL_lenz00_2604
; }  else 
{ 
obj_t BgL_auxz00_7251;
BgL_auxz00_7251 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)13863)), BGl_string4443z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_lenz00_2604); 
FAILURE(BgL_auxz00_7251,BFALSE,BFALSE);} 
BgL_n1z00_4358 = 
(long)CINT(BgL_auxz00_7248); } 
BgL_testz00_7247 = 
(BgL_n1z00_4358<=((long)0)); } 
if(BgL_testz00_7247)
{ /* Ieee/input.scm 358 */
bool_t BgL_testz00_7257;
{ /* Ieee/input.scm 358 */
long BgL_n1z00_4360;
{ /* Ieee/input.scm 358 */
obj_t BgL_auxz00_7258;
if(
INTEGERP(BgL_lenz00_2604))
{ /* Ieee/input.scm 358 */
BgL_auxz00_7258 = BgL_lenz00_2604
; }  else 
{ 
obj_t BgL_auxz00_7261;
BgL_auxz00_7261 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)13882)), BGl_string4443z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_lenz00_2604); 
FAILURE(BgL_auxz00_7261,BFALSE,BFALSE);} 
BgL_n1z00_4360 = 
(long)CINT(BgL_auxz00_7258); } 
BgL_testz00_7257 = 
(BgL_n1z00_4360==((long)0)); } 
if(BgL_testz00_7257)
{ /* Ieee/input.scm 358 */
return 
BINT(((long)0));}  else 
{ /* Llib/object.scm 90 */
BgL_z62iozd2errorzb0_bglt BgL_arg2970z00_2607;
{ /* Llib/object.scm 90 */
obj_t BgL_arg2971z00_2608;obj_t BgL_arg2972z00_2609;
{ /* Llib/object.scm 90 */

{ /* Llib/object.scm 90 */

BgL_arg2971z00_2608 = 
BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE); } } 
BgL_arg2972z00_2609 = BGl_symbol4437z00zz__r4_input_6_10_2z00; 
BgL_arg2970z00_2607 = 
BGl_makezd2z62iozd2errorz62zz__objectz00(BFALSE, BFALSE, BgL_arg2971z00_2608, BgL_arg2972z00_2609, BGl_string4441z00zz__r4_input_6_10_2z00, BgL_lenz00_2604); } 
return 
BGl_raisez00zz__errorz00(
(obj_t)(BgL_arg2970z00_2607));} }  else 
{ /* Ieee/input.scm 366 */
obj_t BgL_arg2975z00_2613;
{ /* Ieee/input.scm 366 */
long BgL_xz00_2614;
BgL_xz00_2614 = 
STRING_LENGTH(BgL_bufz00_43); 
{ /* Ieee/input.scm 366 */
bool_t BgL_testz00_7273;
{ /* Ieee/input.scm 366 */
long BgL_n2z00_4364;
{ /* Ieee/input.scm 366 */
obj_t BgL_auxz00_7274;
if(
INTEGERP(BgL_lenz00_2604))
{ /* Ieee/input.scm 366 */
BgL_auxz00_7274 = BgL_lenz00_2604
; }  else 
{ 
obj_t BgL_auxz00_7277;
BgL_auxz00_7277 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)14060)), BGl_string4443z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_lenz00_2604); 
FAILURE(BgL_auxz00_7277,BFALSE,BFALSE);} 
BgL_n2z00_4364 = 
(long)CINT(BgL_auxz00_7274); } 
BgL_testz00_7273 = 
(BgL_xz00_2614<BgL_n2z00_4364); } 
if(BgL_testz00_7273)
{ /* Ieee/input.scm 366 */
BgL_arg2975z00_2613 = 
BINT(BgL_xz00_2614); }  else 
{ /* Ieee/input.scm 366 */
BgL_arg2975z00_2613 = BgL_lenz00_2604; } } } 
{ /* Ieee/input.scm 366 */
long BgL_auxz00_7284;
{ /* Ieee/input.scm 366 */
long BgL_auxz00_7292;obj_t BgL_auxz00_7285;
{ /* Ieee/input.scm 366 */
obj_t BgL_auxz00_7294;
if(
INTEGERP(BgL_arg2975z00_2613))
{ /* Ieee/input.scm 366 */
BgL_auxz00_7294 = BgL_arg2975z00_2613
; }  else 
{ 
obj_t BgL_auxz00_7297;
BgL_auxz00_7297 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)14090)), BGl_string4443z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_arg2975z00_2613); 
FAILURE(BgL_auxz00_7297,BFALSE,BFALSE);} 
BgL_auxz00_7292 = 
(long)CINT(BgL_auxz00_7294); } 
if(
INPUT_PORTP(BgL_ipz00_45))
{ /* Ieee/input.scm 366 */
BgL_auxz00_7285 = BgL_ipz00_45
; }  else 
{ 
obj_t BgL_auxz00_7288;
BgL_auxz00_7288 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)14051)), BGl_string4443z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_ipz00_45); 
FAILURE(BgL_auxz00_7288,BFALSE,BFALSE);} 
BgL_auxz00_7284 = 
bgl_rgc_blit_string(BgL_auxz00_7285, 
BSTRING_TO_STRING(BgL_bufz00_43), ((long)0), BgL_auxz00_7292); } 
return 
BINT(BgL_auxz00_7284);} } } } } 
}



/* _read-fill-string! */
obj_t BGl__readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00(obj_t BgL_envz00_53, obj_t BgL_optz00_52)
{ AN_OBJECT;
{ /* Ieee/input.scm 371 */
{ /* Ieee/input.scm 371 */
obj_t BgL_g2034z00_2623;obj_t BgL_g2035z00_2624;obj_t BgL_g2036z00_2625;
BgL_g2034z00_2623 = 
VECTOR_REF(BgL_optz00_52,
(int)(((long)0))); 
BgL_g2035z00_2624 = 
VECTOR_REF(BgL_optz00_52,
(int)(((long)1))); 
BgL_g2036z00_2625 = 
VECTOR_REF(BgL_optz00_52,
(int)(((long)2))); 
{ 

{ /* Ieee/input.scm 371 */
int BgL_aux2038z00_2627;
BgL_aux2038z00_2627 = 
VECTOR_LENGTH(BgL_optz00_52); 
switch( 
(long)(BgL_aux2038z00_2627)) { case ((long)3) : 

{ /* Ieee/input.scm 371 */
obj_t BgL_ipz00_2629;
{ /* Ieee/input.scm 371 */
obj_t BgL_res3643z00_4366;
{ /* Ieee/input.scm 371 */
obj_t BgL_auxz00_7311;
BgL_auxz00_7311 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3643z00_4366 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_7311); } 
BgL_ipz00_2629 = BgL_res3643z00_4366; } 
{ /* Ieee/input.scm 371 */

{ /* Ieee/input.scm 371 */
obj_t BgL_arg2984z00_2630;obj_t BgL_arg2985z00_2631;obj_t BgL_arg2986z00_2632;
BgL_arg2984z00_2630 = 
VECTOR_REF(BgL_optz00_52,
(int)(((long)0))); 
BgL_arg2985z00_2631 = 
VECTOR_REF(BgL_optz00_52,
(int)(((long)1))); 
BgL_arg2986z00_2632 = 
VECTOR_REF(BgL_optz00_52,
(int)(((long)2))); 
{ /* Ieee/input.scm 371 */
int BgL_auxz00_7320;
{ /* Ieee/input.scm 371 */
long BgL_auxz00_7337;long BgL_auxz00_7328;obj_t BgL_auxz00_7321;
{ /* Ieee/input.scm 371 */
obj_t BgL_auxz00_7338;
if(
INTEGERP(BgL_arg2986z00_2632))
{ /* Ieee/input.scm 371 */
BgL_auxz00_7338 = BgL_arg2986z00_2632
; }  else 
{ 
obj_t BgL_auxz00_7341;
BgL_auxz00_7341 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)14320)), BGl_string4449z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_arg2986z00_2632); 
FAILURE(BgL_auxz00_7341,BFALSE,BFALSE);} 
BgL_auxz00_7337 = 
(long)CINT(BgL_auxz00_7338); } 
{ /* Ieee/input.scm 371 */
obj_t BgL_auxz00_7329;
if(
INTEGERP(BgL_arg2985z00_2631))
{ /* Ieee/input.scm 371 */
BgL_auxz00_7329 = BgL_arg2985z00_2631
; }  else 
{ 
obj_t BgL_auxz00_7332;
BgL_auxz00_7332 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)14320)), BGl_string4449z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_arg2985z00_2631); 
FAILURE(BgL_auxz00_7332,BFALSE,BFALSE);} 
BgL_auxz00_7328 = 
(long)CINT(BgL_auxz00_7329); } 
if(
STRINGP(BgL_arg2984z00_2630))
{ /* Ieee/input.scm 371 */
BgL_auxz00_7321 = BgL_arg2984z00_2630
; }  else 
{ 
obj_t BgL_auxz00_7324;
BgL_auxz00_7324 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)14320)), BGl_string4449z00zz__r4_input_6_10_2z00, BGl_string4326z00zz__r4_input_6_10_2z00, BgL_arg2984z00_2630); 
FAILURE(BgL_auxz00_7324,BFALSE,BFALSE);} 
BgL_auxz00_7320 = 
BGl_readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00(BgL_auxz00_7321, BgL_auxz00_7328, BgL_auxz00_7337, BgL_ipz00_2629); } 
return 
BINT(BgL_auxz00_7320);} } } } break;case ((long)4) : 

{ /* Ieee/input.scm 371 */
obj_t BgL_ipz00_2633;
BgL_ipz00_2633 = 
VECTOR_REF(BgL_optz00_52,
(int)(((long)3))); 
{ /* Ieee/input.scm 371 */

{ /* Ieee/input.scm 371 */
obj_t BgL_arg2987z00_2634;obj_t BgL_arg2988z00_2635;obj_t BgL_arg2989z00_2636;
BgL_arg2987z00_2634 = 
VECTOR_REF(BgL_optz00_52,
(int)(((long)0))); 
BgL_arg2988z00_2635 = 
VECTOR_REF(BgL_optz00_52,
(int)(((long)1))); 
BgL_arg2989z00_2636 = 
VECTOR_REF(BgL_optz00_52,
(int)(((long)2))); 
{ /* Ieee/input.scm 371 */
int BgL_auxz00_7356;
{ /* Ieee/input.scm 371 */
long BgL_auxz00_7373;long BgL_auxz00_7364;obj_t BgL_auxz00_7357;
{ /* Ieee/input.scm 371 */
obj_t BgL_auxz00_7374;
if(
INTEGERP(BgL_arg2989z00_2636))
{ /* Ieee/input.scm 371 */
BgL_auxz00_7374 = BgL_arg2989z00_2636
; }  else 
{ 
obj_t BgL_auxz00_7377;
BgL_auxz00_7377 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)14320)), BGl_string4449z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_arg2989z00_2636); 
FAILURE(BgL_auxz00_7377,BFALSE,BFALSE);} 
BgL_auxz00_7373 = 
(long)CINT(BgL_auxz00_7374); } 
{ /* Ieee/input.scm 371 */
obj_t BgL_auxz00_7365;
if(
INTEGERP(BgL_arg2988z00_2635))
{ /* Ieee/input.scm 371 */
BgL_auxz00_7365 = BgL_arg2988z00_2635
; }  else 
{ 
obj_t BgL_auxz00_7368;
BgL_auxz00_7368 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)14320)), BGl_string4449z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_arg2988z00_2635); 
FAILURE(BgL_auxz00_7368,BFALSE,BFALSE);} 
BgL_auxz00_7364 = 
(long)CINT(BgL_auxz00_7365); } 
if(
STRINGP(BgL_arg2987z00_2634))
{ /* Ieee/input.scm 371 */
BgL_auxz00_7357 = BgL_arg2987z00_2634
; }  else 
{ 
obj_t BgL_auxz00_7360;
BgL_auxz00_7360 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)14320)), BGl_string4449z00zz__r4_input_6_10_2z00, BGl_string4326z00zz__r4_input_6_10_2z00, BgL_arg2987z00_2634); 
FAILURE(BgL_auxz00_7360,BFALSE,BFALSE);} 
BgL_auxz00_7356 = 
BGl_readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00(BgL_auxz00_7357, BgL_auxz00_7364, BgL_auxz00_7373, BgL_ipz00_2633); } 
return 
BINT(BgL_auxz00_7356);} } } } break;
default: 
{ /* Ieee/input.scm 371 */
obj_t BgL_arg2990z00_2637;int BgL_arg2992z00_2639;
BgL_arg2990z00_2637 = BGl_symbol4446z00zz__r4_input_6_10_2z00; 
BgL_arg2992z00_2639 = 
VECTOR_LENGTH(BgL_optz00_52); 
return 
BGl_errorz00zz__errorz00(BgL_arg2990z00_2637, BGl_string4448z00zz__r4_input_6_10_2z00, 
BINT(BgL_arg2992z00_2639));} } } } } } 
}



/* read-fill-string! */
BGL_EXPORTED_DEF int BGl_readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00(obj_t BgL_sz00_48, long BgL_oz00_49, long BgL_lenz00_50, obj_t BgL_ipz00_51)
{ AN_OBJECT;
{ /* Ieee/input.scm 371 */
if(
(BgL_lenz00_50<=((long)0)))
{ /* Ieee/input.scm 373 */
if(
(BgL_lenz00_50==((long)0)))
{ /* Ieee/input.scm 374 */
return 
(int)(((long)0));}  else 
{ /* Llib/object.scm 90 */
BgL_z62iozd2errorzb0_bglt BgL_arg2995z00_2642;
{ /* Llib/object.scm 90 */
obj_t BgL_arg2996z00_2643;obj_t BgL_arg2997z00_2644;
{ /* Llib/object.scm 90 */

{ /* Llib/object.scm 90 */

BgL_arg2996z00_2643 = 
BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE); } } 
BgL_arg2997z00_2644 = BGl_symbol4437z00zz__r4_input_6_10_2z00; 
BgL_arg2995z00_2642 = 
BGl_makezd2z62iozd2errorz62zz__objectz00(BFALSE, BFALSE, BgL_arg2996z00_2643, BgL_arg2997z00_2644, BGl_string4441z00zz__r4_input_6_10_2z00, 
BINT(BgL_lenz00_50)); } 
{ /* Ieee/input.scm 376 */
obj_t BgL_auxz00_7397;
{ /* Ieee/input.scm 376 */
obj_t BgL_aux4165z00_5335;
BgL_aux4165z00_5335 = 
BGl_raisez00zz__errorz00(
(obj_t)(BgL_arg2995z00_2642)); 
if(
INTEGERP(BgL_aux4165z00_5335))
{ /* Ieee/input.scm 376 */
BgL_auxz00_7397 = BgL_aux4165z00_5335
; }  else 
{ 
obj_t BgL_auxz00_7402;
BgL_auxz00_7402 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)14461)), BGl_string4447z00zz__r4_input_6_10_2z00, BGl_string4450z00zz__r4_input_6_10_2z00, BgL_aux4165z00_5335); 
FAILURE(BgL_auxz00_7402,BFALSE,BFALSE);} } 
return 
CINT(BgL_auxz00_7397);} } }  else 
{ /* Ieee/input.scm 382 */
long BgL_arg3000z00_2647;
{ /* Ieee/input.scm 382 */
long BgL_yz00_2649;
BgL_yz00_2649 = 
(
STRING_LENGTH(BgL_sz00_48)-BgL_oz00_49); 
if(
(BgL_lenz00_50<BgL_yz00_2649))
{ /* Ieee/input.scm 382 */
BgL_arg3000z00_2647 = BgL_lenz00_50; }  else 
{ /* Ieee/input.scm 382 */
BgL_arg3000z00_2647 = BgL_yz00_2649; } } 
{ /* Ieee/input.scm 382 */
long BgL_auxz00_7411;
{ /* Ieee/input.scm 382 */
obj_t BgL_auxz00_7412;
if(
INPUT_PORTP(BgL_ipz00_51))
{ /* Ieee/input.scm 382 */
BgL_auxz00_7412 = BgL_ipz00_51
; }  else 
{ 
obj_t BgL_auxz00_7415;
BgL_auxz00_7415 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)14624)), BGl_string4447z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_ipz00_51); 
FAILURE(BgL_auxz00_7415,BFALSE,BFALSE);} 
BgL_auxz00_7411 = 
bgl_rgc_blit_string(BgL_auxz00_7412, 
BSTRING_TO_STRING(BgL_sz00_48), BgL_oz00_49, BgL_arg3000z00_2647); } 
return 
(int)(BgL_auxz00_7411);} } } 
}



/* _unread-char! */
obj_t BGl__unreadzd2charz12zc0zz__r4_input_6_10_2z00(obj_t BgL_envz00_57, obj_t BgL_optz00_56)
{ AN_OBJECT;
{ /* Ieee/input.scm 387 */
{ /* Ieee/input.scm 387 */
obj_t BgL_g2039z00_2652;
BgL_g2039z00_2652 = 
VECTOR_REF(BgL_optz00_56,
(int)(((long)0))); 
{ 

{ /* Ieee/input.scm 387 */
int BgL_aux2041z00_2654;
BgL_aux2041z00_2654 = 
VECTOR_LENGTH(BgL_optz00_56); 
switch( 
(long)(BgL_aux2041z00_2654)) { case ((long)1) : 

{ /* Ieee/input.scm 387 */
obj_t BgL_ipz00_2656;
{ /* Ieee/input.scm 387 */
obj_t BgL_res3644z00_4377;
{ /* Ieee/input.scm 387 */
obj_t BgL_auxz00_7425;
BgL_auxz00_7425 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3644z00_4377 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_7425); } 
BgL_ipz00_2656 = BgL_res3644z00_4377; } 
{ /* Ieee/input.scm 387 */

{ /* Ieee/input.scm 387 */
obj_t BgL_arg3004z00_2657;
BgL_arg3004z00_2657 = 
VECTOR_REF(BgL_optz00_56,
(int)(((long)0))); 
{ /* Ieee/input.scm 387 */
unsigned char BgL_auxz00_7430;
{ /* Ieee/input.scm 387 */
obj_t BgL_auxz00_7431;
if(
CHARP(BgL_arg3004z00_2657))
{ /* Ieee/input.scm 387 */
BgL_auxz00_7431 = BgL_arg3004z00_2657
; }  else 
{ 
obj_t BgL_auxz00_7434;
BgL_auxz00_7434 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)14896)), BGl_string4453z00zz__r4_input_6_10_2z00, BGl_string4454z00zz__r4_input_6_10_2z00, BgL_arg3004z00_2657); 
FAILURE(BgL_auxz00_7434,BFALSE,BFALSE);} 
BgL_auxz00_7430 = 
CCHAR(BgL_auxz00_7431); } 
return 
BGl_unreadzd2charz12zc0zz__r4_input_6_10_2z00(BgL_auxz00_7430, BgL_ipz00_2656);} } } } break;case ((long)2) : 

{ /* Ieee/input.scm 387 */
obj_t BgL_ipz00_2658;
BgL_ipz00_2658 = 
VECTOR_REF(BgL_optz00_56,
(int)(((long)1))); 
{ /* Ieee/input.scm 387 */

{ /* Ieee/input.scm 387 */
obj_t BgL_arg3005z00_2659;
BgL_arg3005z00_2659 = 
VECTOR_REF(BgL_optz00_56,
(int)(((long)0))); 
{ /* Ieee/input.scm 387 */
unsigned char BgL_auxz00_7444;
{ /* Ieee/input.scm 387 */
obj_t BgL_auxz00_7445;
if(
CHARP(BgL_arg3005z00_2659))
{ /* Ieee/input.scm 387 */
BgL_auxz00_7445 = BgL_arg3005z00_2659
; }  else 
{ 
obj_t BgL_auxz00_7448;
BgL_auxz00_7448 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)14896)), BGl_string4453z00zz__r4_input_6_10_2z00, BGl_string4454z00zz__r4_input_6_10_2z00, BgL_arg3005z00_2659); 
FAILURE(BgL_auxz00_7448,BFALSE,BFALSE);} 
BgL_auxz00_7444 = 
CCHAR(BgL_auxz00_7445); } 
return 
BGl_unreadzd2charz12zc0zz__r4_input_6_10_2z00(BgL_auxz00_7444, BgL_ipz00_2658);} } } } break;
default: 
{ /* Ieee/input.scm 387 */
obj_t BgL_arg3006z00_2660;int BgL_arg3008z00_2662;
BgL_arg3006z00_2660 = BGl_symbol4451z00zz__r4_input_6_10_2z00; 
BgL_arg3008z00_2662 = 
VECTOR_LENGTH(BgL_optz00_56); 
return 
BGl_errorz00zz__errorz00(BgL_arg3006z00_2660, BGl_string4439z00zz__r4_input_6_10_2z00, 
BINT(BgL_arg3008z00_2662));} } } } } } 
}



/* unread-char! */
BGL_EXPORTED_DEF obj_t BGl_unreadzd2charz12zc0zz__r4_input_6_10_2z00(unsigned char BgL_cz00_54, obj_t BgL_ipz00_55)
{ AN_OBJECT;
{ /* Ieee/input.scm 387 */
{ /* Ieee/input.scm 388 */
bool_t BgL_testz00_7459;
{ /* Ieee/input.scm 388 */
long BgL_arg3014z00_2669;
BgL_arg3014z00_2669 = 
(
(unsigned char)(BgL_cz00_54)); 
{ /* Ieee/input.scm 388 */
obj_t BgL_inputzd2portzd2_4379;
if(
INPUT_PORTP(BgL_ipz00_55))
{ /* Ieee/input.scm 388 */
BgL_inputzd2portzd2_4379 = BgL_ipz00_55; }  else 
{ 
obj_t BgL_auxz00_7464;
BgL_auxz00_7464 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)15003)), BGl_string4452z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_ipz00_55); 
FAILURE(BgL_auxz00_7464,BFALSE,BFALSE);} 
BgL_testz00_7459 = 
rgc_buffer_insert_char(BgL_inputzd2portzd2_4379, 
(int)(BgL_arg3014z00_2669)); } } 
if(BgL_testz00_7459)
{ /* Ieee/input.scm 388 */
return BFALSE;}  else 
{ /* Llib/object.scm 90 */
BgL_z62iozd2errorzb0_bglt BgL_arg3010z00_2664;
{ /* Llib/object.scm 90 */
obj_t BgL_arg3011z00_2665;obj_t BgL_arg3012z00_2666;
{ /* Llib/object.scm 90 */

{ /* Llib/object.scm 90 */

BgL_arg3011z00_2665 = 
BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE); } } 
BgL_arg3012z00_2666 = BGl_symbol4451z00zz__r4_input_6_10_2z00; 
BgL_arg3010z00_2664 = 
BGl_makezd2z62iozd2errorz62zz__objectz00(BFALSE, BFALSE, BgL_arg3011z00_2665, BgL_arg3012z00_2666, BGl_string4455z00zz__r4_input_6_10_2z00, 
BCHAR(BgL_cz00_54)); } 
return 
BGl_raisez00zz__errorz00(
(obj_t)(BgL_arg3010z00_2664));} } } 
}



/* _unread-string! */
obj_t BGl__unreadzd2stringz12zc0zz__r4_input_6_10_2z00(obj_t BgL_envz00_61, obj_t BgL_optz00_60)
{ AN_OBJECT;
{ /* Ieee/input.scm 398 */
{ /* Ieee/input.scm 398 */
obj_t BgL_g2043z00_2670;
BgL_g2043z00_2670 = 
VECTOR_REF(BgL_optz00_60,
(int)(((long)0))); 
{ 

{ /* Ieee/input.scm 398 */
int BgL_aux2045z00_2672;
BgL_aux2045z00_2672 = 
VECTOR_LENGTH(BgL_optz00_60); 
switch( 
(long)(BgL_aux2045z00_2672)) { case ((long)1) : 

{ /* Ieee/input.scm 398 */
obj_t BgL_ipz00_2674;
{ /* Ieee/input.scm 398 */
obj_t BgL_res3645z00_4382;
{ /* Ieee/input.scm 398 */
obj_t BgL_auxz00_7478;
BgL_auxz00_7478 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3645z00_4382 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_7478); } 
BgL_ipz00_2674 = BgL_res3645z00_4382; } 
{ /* Ieee/input.scm 398 */

{ /* Ieee/input.scm 398 */
obj_t BgL_arg3016z00_2675;
BgL_arg3016z00_2675 = 
VECTOR_REF(BgL_optz00_60,
(int)(((long)0))); 
{ /* Ieee/input.scm 398 */
obj_t BgL_auxz00_7483;
if(
STRINGP(BgL_arg3016z00_2675))
{ /* Ieee/input.scm 398 */
BgL_auxz00_7483 = BgL_arg3016z00_2675
; }  else 
{ 
obj_t BgL_auxz00_7486;
BgL_auxz00_7486 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)15362)), BGl_string4458z00zz__r4_input_6_10_2z00, BGl_string4326z00zz__r4_input_6_10_2z00, BgL_arg3016z00_2675); 
FAILURE(BgL_auxz00_7486,BFALSE,BFALSE);} 
return 
BGl_unreadzd2stringz12zc0zz__r4_input_6_10_2z00(BgL_auxz00_7483, BgL_ipz00_2674);} } } } break;case ((long)2) : 

{ /* Ieee/input.scm 398 */
obj_t BgL_ipz00_2676;
BgL_ipz00_2676 = 
VECTOR_REF(BgL_optz00_60,
(int)(((long)1))); 
{ /* Ieee/input.scm 398 */

{ /* Ieee/input.scm 398 */
obj_t BgL_arg3017z00_2677;
BgL_arg3017z00_2677 = 
VECTOR_REF(BgL_optz00_60,
(int)(((long)0))); 
{ /* Ieee/input.scm 398 */
obj_t BgL_auxz00_7495;
if(
STRINGP(BgL_arg3017z00_2677))
{ /* Ieee/input.scm 398 */
BgL_auxz00_7495 = BgL_arg3017z00_2677
; }  else 
{ 
obj_t BgL_auxz00_7498;
BgL_auxz00_7498 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)15362)), BGl_string4458z00zz__r4_input_6_10_2z00, BGl_string4326z00zz__r4_input_6_10_2z00, BgL_arg3017z00_2677); 
FAILURE(BgL_auxz00_7498,BFALSE,BFALSE);} 
return 
BGl_unreadzd2stringz12zc0zz__r4_input_6_10_2z00(BgL_auxz00_7495, BgL_ipz00_2676);} } } } break;
default: 
{ /* Ieee/input.scm 398 */
obj_t BgL_arg3018z00_2678;int BgL_arg3020z00_2680;
BgL_arg3018z00_2678 = BGl_symbol4456z00zz__r4_input_6_10_2z00; 
BgL_arg3020z00_2680 = 
VECTOR_LENGTH(BgL_optz00_60); 
return 
BGl_errorz00zz__errorz00(BgL_arg3018z00_2678, BGl_string4439z00zz__r4_input_6_10_2z00, 
BINT(BgL_arg3020z00_2680));} } } } } } 
}



/* unread-string! */
BGL_EXPORTED_DEF obj_t BGl_unreadzd2stringz12zc0zz__r4_input_6_10_2z00(obj_t BgL_strz00_58, obj_t BgL_ipz00_59)
{ AN_OBJECT;
{ /* Ieee/input.scm 398 */
{ /* Ieee/input.scm 399 */
bool_t BgL_testz00_7508;
{ /* Ieee/input.scm 399 */
long BgL_arg3027z00_2688;
BgL_arg3027z00_2688 = 
STRING_LENGTH(BgL_strz00_58); 
{ /* Ieee/input.scm 399 */
obj_t BgL_inputzd2portzd2_4384;
if(
INPUT_PORTP(BgL_ipz00_59))
{ /* Ieee/input.scm 399 */
BgL_inputzd2portzd2_4384 = BgL_ipz00_59; }  else 
{ 
obj_t BgL_auxz00_7512;
BgL_auxz00_7512 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)15481)), BGl_string4457z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_ipz00_59); 
FAILURE(BgL_auxz00_7512,BFALSE,BFALSE);} 
BgL_testz00_7508 = 
rgc_buffer_insert_substring(BgL_inputzd2portzd2_4384, BgL_strz00_58, ((long)0), BgL_arg3027z00_2688); } } 
if(BgL_testz00_7508)
{ /* Ieee/input.scm 399 */
return BFALSE;}  else 
{ /* Llib/object.scm 90 */
BgL_z62iozd2errorzb0_bglt BgL_arg3022z00_2682;
{ /* Llib/object.scm 90 */
obj_t BgL_arg3023z00_2683;obj_t BgL_arg3024z00_2684;
{ /* Llib/object.scm 90 */

{ /* Llib/object.scm 90 */

BgL_arg3023z00_2683 = 
BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE); } } 
BgL_arg3024z00_2684 = BGl_symbol4456z00zz__r4_input_6_10_2z00; 
BgL_arg3022z00_2682 = 
BGl_makezd2z62iozd2errorz62zz__objectz00(BFALSE, BFALSE, BgL_arg3023z00_2683, BgL_arg3024z00_2684, BGl_string4459z00zz__r4_input_6_10_2z00, BgL_strz00_58); } 
return 
BGl_raisez00zz__errorz00(
(obj_t)(BgL_arg3022z00_2682));} } } 
}



/* _unread-substring! */
obj_t BGl__unreadzd2substringz12zc0zz__r4_input_6_10_2z00(obj_t BgL_envz00_67, obj_t BgL_optz00_66)
{ AN_OBJECT;
{ /* Ieee/input.scm 409 */
{ /* Ieee/input.scm 409 */
obj_t BgL_g2046z00_2689;obj_t BgL_g2047z00_2690;obj_t BgL_g2048z00_2691;
BgL_g2046z00_2689 = 
VECTOR_REF(BgL_optz00_66,
(int)(((long)0))); 
BgL_g2047z00_2690 = 
VECTOR_REF(BgL_optz00_66,
(int)(((long)1))); 
BgL_g2048z00_2691 = 
VECTOR_REF(BgL_optz00_66,
(int)(((long)2))); 
{ 

{ /* Ieee/input.scm 409 */
int BgL_aux2050z00_2693;
BgL_aux2050z00_2693 = 
VECTOR_LENGTH(BgL_optz00_66); 
switch( 
(long)(BgL_aux2050z00_2693)) { case ((long)3) : 

{ /* Ieee/input.scm 410 */
obj_t BgL_ipz00_2695;
{ /* Ieee/input.scm 410 */
obj_t BgL_res3646z00_4389;
{ /* Ieee/input.scm 410 */
obj_t BgL_auxz00_7528;
BgL_auxz00_7528 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3646z00_4389 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_7528); } 
BgL_ipz00_2695 = BgL_res3646z00_4389; } 
{ /* Ieee/input.scm 409 */

{ /* Ieee/input.scm 409 */
obj_t BgL_arg3029z00_2696;obj_t BgL_arg3030z00_2697;obj_t BgL_arg3031z00_2698;
BgL_arg3029z00_2696 = 
VECTOR_REF(BgL_optz00_66,
(int)(((long)0))); 
BgL_arg3030z00_2697 = 
VECTOR_REF(BgL_optz00_66,
(int)(((long)1))); 
BgL_arg3031z00_2698 = 
VECTOR_REF(BgL_optz00_66,
(int)(((long)2))); 
{ /* Ieee/input.scm 409 */
long BgL_auxz00_7553;long BgL_auxz00_7544;obj_t BgL_auxz00_7537;
{ /* Ieee/input.scm 409 */
obj_t BgL_auxz00_7554;
if(
INTEGERP(BgL_arg3031z00_2698))
{ /* Ieee/input.scm 409 */
BgL_auxz00_7554 = BgL_arg3031z00_2698
; }  else 
{ 
obj_t BgL_auxz00_7557;
BgL_auxz00_7557 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)15854)), BGl_string4462z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_arg3031z00_2698); 
FAILURE(BgL_auxz00_7557,BFALSE,BFALSE);} 
BgL_auxz00_7553 = 
(long)CINT(BgL_auxz00_7554); } 
{ /* Ieee/input.scm 409 */
obj_t BgL_auxz00_7545;
if(
INTEGERP(BgL_arg3030z00_2697))
{ /* Ieee/input.scm 409 */
BgL_auxz00_7545 = BgL_arg3030z00_2697
; }  else 
{ 
obj_t BgL_auxz00_7548;
BgL_auxz00_7548 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)15854)), BGl_string4462z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_arg3030z00_2697); 
FAILURE(BgL_auxz00_7548,BFALSE,BFALSE);} 
BgL_auxz00_7544 = 
(long)CINT(BgL_auxz00_7545); } 
if(
STRINGP(BgL_arg3029z00_2696))
{ /* Ieee/input.scm 409 */
BgL_auxz00_7537 = BgL_arg3029z00_2696
; }  else 
{ 
obj_t BgL_auxz00_7540;
BgL_auxz00_7540 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)15854)), BGl_string4462z00zz__r4_input_6_10_2z00, BGl_string4326z00zz__r4_input_6_10_2z00, BgL_arg3029z00_2696); 
FAILURE(BgL_auxz00_7540,BFALSE,BFALSE);} 
return 
BGl_unreadzd2substringz12zc0zz__r4_input_6_10_2z00(BgL_auxz00_7537, BgL_auxz00_7544, BgL_auxz00_7553, BgL_ipz00_2695);} } } } break;case ((long)4) : 

{ /* Ieee/input.scm 409 */
obj_t BgL_ipz00_2699;
BgL_ipz00_2699 = 
VECTOR_REF(BgL_optz00_66,
(int)(((long)3))); 
{ /* Ieee/input.scm 409 */

{ /* Ieee/input.scm 409 */
obj_t BgL_arg3032z00_2700;obj_t BgL_arg3033z00_2701;obj_t BgL_arg3034z00_2702;
BgL_arg3032z00_2700 = 
VECTOR_REF(BgL_optz00_66,
(int)(((long)0))); 
BgL_arg3033z00_2701 = 
VECTOR_REF(BgL_optz00_66,
(int)(((long)1))); 
BgL_arg3034z00_2702 = 
VECTOR_REF(BgL_optz00_66,
(int)(((long)2))); 
{ /* Ieee/input.scm 409 */
long BgL_auxz00_7587;long BgL_auxz00_7578;obj_t BgL_auxz00_7571;
{ /* Ieee/input.scm 409 */
obj_t BgL_auxz00_7588;
if(
INTEGERP(BgL_arg3034z00_2702))
{ /* Ieee/input.scm 409 */
BgL_auxz00_7588 = BgL_arg3034z00_2702
; }  else 
{ 
obj_t BgL_auxz00_7591;
BgL_auxz00_7591 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)15854)), BGl_string4462z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_arg3034z00_2702); 
FAILURE(BgL_auxz00_7591,BFALSE,BFALSE);} 
BgL_auxz00_7587 = 
(long)CINT(BgL_auxz00_7588); } 
{ /* Ieee/input.scm 409 */
obj_t BgL_auxz00_7579;
if(
INTEGERP(BgL_arg3033z00_2701))
{ /* Ieee/input.scm 409 */
BgL_auxz00_7579 = BgL_arg3033z00_2701
; }  else 
{ 
obj_t BgL_auxz00_7582;
BgL_auxz00_7582 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)15854)), BGl_string4462z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_arg3033z00_2701); 
FAILURE(BgL_auxz00_7582,BFALSE,BFALSE);} 
BgL_auxz00_7578 = 
(long)CINT(BgL_auxz00_7579); } 
if(
STRINGP(BgL_arg3032z00_2700))
{ /* Ieee/input.scm 409 */
BgL_auxz00_7571 = BgL_arg3032z00_2700
; }  else 
{ 
obj_t BgL_auxz00_7574;
BgL_auxz00_7574 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)15854)), BGl_string4462z00zz__r4_input_6_10_2z00, BGl_string4326z00zz__r4_input_6_10_2z00, BgL_arg3032z00_2700); 
FAILURE(BgL_auxz00_7574,BFALSE,BFALSE);} 
return 
BGl_unreadzd2substringz12zc0zz__r4_input_6_10_2z00(BgL_auxz00_7571, BgL_auxz00_7578, BgL_auxz00_7587, BgL_ipz00_2699);} } } } break;
default: 
{ /* Ieee/input.scm 409 */
obj_t BgL_arg3035z00_2703;int BgL_arg3037z00_2705;
BgL_arg3035z00_2703 = BGl_symbol4460z00zz__r4_input_6_10_2z00; 
BgL_arg3037z00_2705 = 
VECTOR_LENGTH(BgL_optz00_66); 
return 
BGl_errorz00zz__errorz00(BgL_arg3035z00_2703, BGl_string4448z00zz__r4_input_6_10_2z00, 
BINT(BgL_arg3037z00_2705));} } } } } } 
}



/* unread-substring! */
BGL_EXPORTED_DEF obj_t BGl_unreadzd2substringz12zc0zz__r4_input_6_10_2z00(obj_t BgL_strz00_62, long BgL_fromz00_63, long BgL_toz00_64, obj_t BgL_ipz00_65)
{ AN_OBJECT;
{ /* Ieee/input.scm 409 */
{ /* Ieee/input.scm 411 */
bool_t BgL_testz00_7602;
if(
(BgL_toz00_64>=BgL_fromz00_63))
{ /* Ieee/input.scm 411 */
if(
(BgL_fromz00_63<((long)0)))
{ /* Ieee/input.scm 412 */
BgL_testz00_7602 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 412 */
BgL_testz00_7602 = 
(BgL_toz00_64>
STRING_LENGTH(BgL_strz00_62))
; } }  else 
{ /* Ieee/input.scm 411 */
BgL_testz00_7602 = ((bool_t)1)
; } 
if(BgL_testz00_7602)
{ /* Llib/object.scm 90 */
BgL_z62iozd2errorzb0_bglt BgL_arg3039z00_2707;
{ /* Llib/object.scm 90 */
obj_t BgL_arg3040z00_2708;obj_t BgL_arg3041z00_2709;obj_t BgL_arg3043z00_2711;
{ /* Llib/object.scm 90 */

{ /* Llib/object.scm 90 */

BgL_arg3040z00_2708 = 
BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE); } } 
BgL_arg3041z00_2709 = BGl_symbol4460z00zz__r4_input_6_10_2z00; 
{ /* Ieee/input.scm 417 */
long BgL_arg3044z00_2713;
BgL_arg3044z00_2713 = 
STRING_LENGTH(BgL_strz00_62); 
{ /* Ieee/input.scm 417 */
obj_t BgL_list3045z00_2714;
{ /* Ieee/input.scm 417 */
obj_t BgL_arg3046z00_2715;
{ /* Ieee/input.scm 417 */
obj_t BgL_arg3047z00_2716;
BgL_arg3047z00_2716 = 
MAKE_PAIR(
BINT(BgL_arg3044z00_2713), BNIL); 
BgL_arg3046z00_2715 = 
MAKE_PAIR(
BINT(BgL_toz00_64), BgL_arg3047z00_2716); } 
BgL_list3045z00_2714 = 
MAKE_PAIR(
BINT(BgL_fromz00_63), BgL_arg3046z00_2715); } 
BgL_arg3043z00_2711 = BgL_list3045z00_2714; } } 
BgL_arg3039z00_2707 = 
BGl_makezd2z62iozd2errorz62zz__objectz00(BFALSE, BFALSE, BgL_arg3040z00_2708, BgL_arg3041z00_2709, BGl_string4463z00zz__r4_input_6_10_2z00, BgL_arg3043z00_2711); } 
BGl_raisez00zz__errorz00(
(obj_t)(BgL_arg3039z00_2707)); }  else 
{ /* Ieee/input.scm 411 */BFALSE; } } 
{ /* Ieee/input.scm 418 */
bool_t BgL_testz00_7620;
{ /* Ieee/input.scm 418 */
obj_t BgL_inputzd2portzd2_4400;
if(
INPUT_PORTP(BgL_ipz00_65))
{ /* Ieee/input.scm 418 */
BgL_inputzd2portzd2_4400 = BgL_ipz00_65; }  else 
{ 
obj_t BgL_auxz00_7623;
BgL_auxz00_7623 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)16230)), BGl_string4461z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_ipz00_65); 
FAILURE(BgL_auxz00_7623,BFALSE,BFALSE);} 
BgL_testz00_7620 = 
rgc_buffer_insert_substring(BgL_inputzd2portzd2_4400, BgL_strz00_62, BgL_fromz00_63, BgL_toz00_64); } 
if(BgL_testz00_7620)
{ /* Ieee/input.scm 418 */
return BFALSE;}  else 
{ /* Llib/object.scm 90 */
BgL_z62iozd2errorzb0_bglt BgL_arg3052z00_2721;
{ /* Llib/object.scm 90 */
obj_t BgL_arg3053z00_2722;obj_t BgL_arg3054z00_2723;
{ /* Llib/object.scm 90 */

{ /* Llib/object.scm 90 */

BgL_arg3053z00_2722 = 
BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE); } } 
BgL_arg3054z00_2723 = BGl_symbol4464z00zz__r4_input_6_10_2z00; 
BgL_arg3052z00_2721 = 
BGl_makezd2z62iozd2errorz62zz__objectz00(BFALSE, BFALSE, BgL_arg3053z00_2722, BgL_arg3054z00_2723, BGl_string4459z00zz__r4_input_6_10_2z00, BgL_strz00_62); } 
return 
BGl_raisez00zz__errorz00(
(obj_t)(BgL_arg3052z00_2721));} } } 
}



/* port->string-list */
BGL_EXPORTED_DEF obj_t BGl_portzd2ze3stringzd2listze3zz__r4_input_6_10_2z00(obj_t BgL_ipz00_68)
{ AN_OBJECT;
{ /* Ieee/input.scm 427 */
{ 
obj_t BgL_resz00_2728;
BgL_resz00_2728 = BNIL; 
BgL_zc3anonymousza33056ze3z83_2729:
{ /* Ieee/input.scm 429 */
obj_t BgL_expz00_2730;
{ /* Ieee/input.scm 429 */
obj_t BgL_funz00_5365;
BgL_funz00_5365 = BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_5365, ((long)1)))
{ /* Ieee/input.scm 429 */
BgL_expz00_2730 = 
PROCEDURE_ENTRY(BgL_funz00_5365)(BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00, BgL_ipz00_68, BEOA); }  else 
{ /* Ieee/input.scm 429 */
FAILURE(BGl_string4466z00zz__r4_input_6_10_2z00,BGl_list4431z00zz__r4_input_6_10_2z00,BgL_funz00_5365);} } 
if(
EOF_OBJECTP(BgL_expz00_2730))
{ /* Ieee/input.scm 431 */
obj_t BgL_auxz00_7639;
{ /* Ieee/input.scm 431 */
bool_t BgL_testz00_7640;
if(
PAIRP(BgL_resz00_2728))
{ /* Ieee/input.scm 431 */
BgL_testz00_7640 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 431 */
BgL_testz00_7640 = 
NULLP(BgL_resz00_2728)
; } 
if(BgL_testz00_7640)
{ /* Ieee/input.scm 431 */
BgL_auxz00_7639 = BgL_resz00_2728
; }  else 
{ 
obj_t BgL_auxz00_7644;
BgL_auxz00_7644 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)16717)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4422z00zz__r4_input_6_10_2z00, BgL_resz00_2728); 
FAILURE(BgL_auxz00_7644,BFALSE,BFALSE);} } 
return 
bgl_reverse_bang(BgL_auxz00_7639);}  else 
{ /* Ieee/input.scm 432 */
obj_t BgL_arg3058z00_2732;
BgL_arg3058z00_2732 = 
MAKE_PAIR(BgL_expz00_2730, BgL_resz00_2728); 
{ 
obj_t BgL_resz00_7650;
BgL_resz00_7650 = BgL_arg3058z00_2732; 
BgL_resz00_2728 = BgL_resz00_7650; 
goto BgL_zc3anonymousza33056ze3z83_2729;} } } } } 
}



/* _port->string-list */
obj_t BGl__portzd2ze3stringzd2listze3zz__r4_input_6_10_2z00(obj_t BgL_envz00_4800, obj_t BgL_ipz00_4801)
{ AN_OBJECT;
{ /* Ieee/input.scm 427 */
{ /* Ieee/input.scm 429 */
obj_t BgL_auxz00_7651;
if(
INPUT_PORTP(BgL_ipz00_4801))
{ /* Ieee/input.scm 429 */
BgL_auxz00_7651 = BgL_ipz00_4801
; }  else 
{ 
obj_t BgL_auxz00_7654;
BgL_auxz00_7654 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)16643)), BGl_string4467z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_ipz00_4801); 
FAILURE(BgL_auxz00_7654,BFALSE,BFALSE);} 
return 
BGl_portzd2ze3stringzd2listze3zz__r4_input_6_10_2z00(BgL_auxz00_7651);} } 
}



/* %sendchars */
int BGl_z52sendcharsz52zz__r4_input_6_10_2z00(obj_t BgL_ipz00_69, obj_t BgL_opz00_70, long BgL_sza7za7_71, long BgL_offsetz00_72)
{ AN_OBJECT;
{ /* Ieee/input.scm 441 */
if(
(BgL_offsetz00_72>=((long)0)))
{ /* Ieee/input.scm 442 */
if(
CBOOL(
bgl_input_port_seek(BgL_ipz00_69, BgL_offsetz00_72)))
{ /* Ieee/input.scm 442 */((bool_t)0); }  else 
{ /* Ieee/input.scm 442 */
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_symbol4468z00zz__r4_input_6_10_2z00, BGl_string4470z00zz__r4_input_6_10_2z00, BgL_ipz00_69); } }  else 
{ /* Ieee/input.scm 442 */((bool_t)0); } 
{ /* Ieee/input.scm 443 */
int BgL_bufsiza7eza7_2735;
if(
(BgL_sza7za7_71==((long)-1)))
{ /* Ieee/input.scm 444 */
BgL_bufsiza7eza7_2735 = 
BGL_INPUT_PORT_BUFSIZ(BgL_ipz00_69); }  else 
{ /* Ieee/input.scm 444 */
if(
(
(long)(default_io_bufsiz)<BgL_sza7za7_71))
{ /* Ieee/input.scm 446 */
BgL_bufsiza7eza7_2735 = default_io_bufsiz; }  else 
{ /* Ieee/input.scm 446 */
BgL_bufsiza7eza7_2735 = 
(int)(BgL_sza7za7_71); } } 
{ /* Ieee/input.scm 443 */
obj_t BgL_bufz00_2736;
BgL_bufz00_2736 = 
make_string(
(long)(BgL_bufsiza7eza7_2735), ((unsigned char)' ')); 
{ /* Ieee/input.scm 452 */

if(
(BgL_sza7za7_71<((long)0)))
{ 
long BgL_charszd2readzd2_2741;
{ /* Ieee/input.scm 454 */
long BgL_auxz00_7676;
BgL_charszd2readzd2_2741 = ((long)0); 
BgL_zc3anonymousza33061ze3z83_2742:
{ /* Ieee/input.scm 455 */
obj_t BgL_nz00_2743;
BgL_nz00_2743 = 
BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00(BgL_bufz00_2736, 
BINT(BgL_bufsiza7eza7_2735), BgL_ipz00_69); 
{ /* Ieee/input.scm 456 */
bool_t BgL_testz00_7679;
{ /* Ieee/input.scm 456 */
long BgL_n1z00_4424;
{ /* Ieee/input.scm 456 */
obj_t BgL_auxz00_7680;
if(
INTEGERP(BgL_nz00_2743))
{ /* Ieee/input.scm 456 */
BgL_auxz00_7680 = BgL_nz00_2743
; }  else 
{ 
obj_t BgL_auxz00_7683;
BgL_auxz00_7683 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)17778)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_nz00_2743); 
FAILURE(BgL_auxz00_7683,BFALSE,BFALSE);} 
BgL_n1z00_4424 = 
(long)CINT(BgL_auxz00_7680); } 
BgL_testz00_7679 = 
(BgL_n1z00_4424==((long)0)); } 
if(BgL_testz00_7679)
{ /* Ieee/input.scm 456 */
FLUSH_OUTPUT_PORT(BgL_opz00_70); 
BgL_auxz00_7676 = BgL_charszd2readzd2_2741; }  else 
{ /* Ieee/input.scm 460 */
obj_t BgL_sz00_2745;
{ /* Ieee/input.scm 460 */
bool_t BgL_testz00_7690;
{ /* Ieee/input.scm 460 */
long BgL_n1z00_4427;long BgL_n2z00_4428;
{ /* Ieee/input.scm 460 */
obj_t BgL_auxz00_7691;
if(
INTEGERP(BgL_nz00_2743))
{ /* Ieee/input.scm 460 */
BgL_auxz00_7691 = BgL_nz00_2743
; }  else 
{ 
obj_t BgL_auxz00_7694;
BgL_auxz00_7694 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)17873)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_nz00_2743); 
FAILURE(BgL_auxz00_7694,BFALSE,BFALSE);} 
BgL_n1z00_4427 = 
(long)CINT(BgL_auxz00_7691); } 
BgL_n2z00_4428 = 
(long)(BgL_bufsiza7eza7_2735); 
BgL_testz00_7690 = 
(BgL_n1z00_4427<BgL_n2z00_4428); } 
if(BgL_testz00_7690)
{ /* Ieee/input.scm 460 */
long BgL_auxz00_7701;
{ /* Ieee/input.scm 460 */
obj_t BgL_auxz00_7702;
if(
INTEGERP(BgL_nz00_2743))
{ /* Ieee/input.scm 460 */
BgL_auxz00_7702 = BgL_nz00_2743
; }  else 
{ 
obj_t BgL_auxz00_7705;
BgL_auxz00_7705 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)17884)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_nz00_2743); 
FAILURE(BgL_auxz00_7705,BFALSE,BFALSE);} 
BgL_auxz00_7701 = 
(long)CINT(BgL_auxz00_7702); } 
BgL_sz00_2745 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_bufz00_2736, ((long)0), BgL_auxz00_7701); }  else 
{ /* Ieee/input.scm 460 */
BgL_sz00_2745 = BgL_bufz00_2736; } } 
bgl_display_obj(BgL_sz00_2745, BgL_opz00_70); 
{ /* Ieee/input.scm 462 */
long BgL_arg3063z00_2746;
{ /* Ieee/input.scm 462 */
long BgL_za72za7_4430;
{ /* Ieee/input.scm 462 */
obj_t BgL_auxz00_7712;
if(
INTEGERP(BgL_nz00_2743))
{ /* Ieee/input.scm 462 */
BgL_auxz00_7712 = BgL_nz00_2743
; }  else 
{ 
obj_t BgL_auxz00_7715;
BgL_auxz00_7715 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)17950)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_nz00_2743); 
FAILURE(BgL_auxz00_7715,BFALSE,BFALSE);} 
BgL_za72za7_4430 = 
(long)CINT(BgL_auxz00_7712); } 
BgL_arg3063z00_2746 = 
(BgL_charszd2readzd2_2741+BgL_za72za7_4430); } 
{ 
long BgL_charszd2readzd2_7721;
BgL_charszd2readzd2_7721 = BgL_arg3063z00_2746; 
BgL_charszd2readzd2_2741 = BgL_charszd2readzd2_7721; 
goto BgL_zc3anonymousza33061ze3z83_2742;} } } } } 
return 
(int)(BgL_auxz00_7676);} }  else 
{ 
long BgL_charszd2readzd2_2750;int BgL_charszd2tozd2readz00_2751;long BgL_sza7za7_2752;
{ /* Ieee/input.scm 463 */
long BgL_auxz00_7723;
BgL_charszd2readzd2_2750 = ((long)0); 
BgL_charszd2tozd2readz00_2751 = BgL_bufsiza7eza7_2735; 
BgL_sza7za7_2752 = BgL_sza7za7_71; 
BgL_zc3anonymousza33065ze3z83_2753:
if(
(
(long)(BgL_charszd2tozd2readz00_2751)==((long)0)))
{ /* Ieee/input.scm 466 */
BgL_auxz00_7723 = BgL_charszd2readzd2_2750
; }  else 
{ /* Ieee/input.scm 468 */
obj_t BgL_nz00_2755;
BgL_nz00_2755 = 
BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00(BgL_bufz00_2736, 
BINT(BgL_charszd2tozd2readz00_2751), BgL_ipz00_69); 
{ /* Ieee/input.scm 469 */
bool_t BgL_testz00_7729;
{ /* Ieee/input.scm 469 */
long BgL_n1z00_4433;
{ /* Ieee/input.scm 469 */
obj_t BgL_auxz00_7730;
if(
INTEGERP(BgL_nz00_2755))
{ /* Ieee/input.scm 469 */
BgL_auxz00_7730 = BgL_nz00_2755
; }  else 
{ 
obj_t BgL_auxz00_7733;
BgL_auxz00_7733 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)18160)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_nz00_2755); 
FAILURE(BgL_auxz00_7733,BFALSE,BFALSE);} 
BgL_n1z00_4433 = 
(long)CINT(BgL_auxz00_7730); } 
BgL_testz00_7729 = 
(BgL_n1z00_4433==((long)0)); } 
if(BgL_testz00_7729)
{ /* Ieee/input.scm 469 */
FLUSH_OUTPUT_PORT(BgL_opz00_70); 
BgL_auxz00_7723 = BgL_charszd2readzd2_2750; }  else 
{ /* Ieee/input.scm 473 */
obj_t BgL_sz00_2757;
{ /* Ieee/input.scm 473 */
bool_t BgL_testz00_7740;
{ /* Ieee/input.scm 473 */
long BgL_n1z00_4436;long BgL_n2z00_4437;
{ /* Ieee/input.scm 473 */
obj_t BgL_auxz00_7741;
if(
INTEGERP(BgL_nz00_2755))
{ /* Ieee/input.scm 473 */
BgL_auxz00_7741 = BgL_nz00_2755
; }  else 
{ 
obj_t BgL_auxz00_7744;
BgL_auxz00_7744 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)18243)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_nz00_2755); 
FAILURE(BgL_auxz00_7744,BFALSE,BFALSE);} 
BgL_n1z00_4436 = 
(long)CINT(BgL_auxz00_7741); } 
BgL_n2z00_4437 = 
(long)(BgL_bufsiza7eza7_2735); 
BgL_testz00_7740 = 
(BgL_n1z00_4436<BgL_n2z00_4437); } 
if(BgL_testz00_7740)
{ /* Ieee/input.scm 473 */
long BgL_auxz00_7751;
{ /* Ieee/input.scm 473 */
obj_t BgL_auxz00_7752;
if(
INTEGERP(BgL_nz00_2755))
{ /* Ieee/input.scm 473 */
BgL_auxz00_7752 = BgL_nz00_2755
; }  else 
{ 
obj_t BgL_auxz00_7755;
BgL_auxz00_7755 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)18254)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_nz00_2755); 
FAILURE(BgL_auxz00_7755,BFALSE,BFALSE);} 
BgL_auxz00_7751 = 
(long)CINT(BgL_auxz00_7752); } 
BgL_sz00_2757 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_bufz00_2736, ((long)0), BgL_auxz00_7751); }  else 
{ /* Ieee/input.scm 473 */
BgL_sz00_2757 = BgL_bufz00_2736; } } 
bgl_display_obj(BgL_sz00_2757, BgL_opz00_70); 
{ /* Ieee/input.scm 475 */
long BgL_sza7za7_2758;
{ /* Ieee/input.scm 475 */
long BgL_za72za7_4439;
{ /* Ieee/input.scm 475 */
obj_t BgL_auxz00_7762;
if(
INTEGERP(BgL_nz00_2755))
{ /* Ieee/input.scm 475 */
BgL_auxz00_7762 = BgL_nz00_2755
; }  else 
{ 
obj_t BgL_auxz00_7765;
BgL_auxz00_7765 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)18319)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_nz00_2755); 
FAILURE(BgL_auxz00_7765,BFALSE,BFALSE);} 
BgL_za72za7_4439 = 
(long)CINT(BgL_auxz00_7762); } 
BgL_sza7za7_2758 = 
(BgL_sza7za7_2752-BgL_za72za7_4439); } 
{ /* Ieee/input.scm 475 */
long BgL_ctrz00_2759;
if(
(BgL_sza7za7_2758<
(long)(BgL_bufsiza7eza7_2735)))
{ /* Ieee/input.scm 476 */
BgL_ctrz00_2759 = BgL_sza7za7_2758; }  else 
{ /* Ieee/input.scm 476 */
BgL_ctrz00_2759 = 
(long)(BgL_bufsiza7eza7_2735); } 
{ /* Ieee/input.scm 476 */

{ /* Ieee/input.scm 477 */
long BgL_arg3068z00_2760;
{ /* Ieee/input.scm 477 */
long BgL_za72za7_4443;
{ /* Ieee/input.scm 477 */
obj_t BgL_auxz00_7775;
if(
INTEGERP(BgL_nz00_2755))
{ /* Ieee/input.scm 477 */
BgL_auxz00_7775 = BgL_nz00_2755
; }  else 
{ 
obj_t BgL_auxz00_7778;
BgL_auxz00_7778 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)18392)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_nz00_2755); 
FAILURE(BgL_auxz00_7778,BFALSE,BFALSE);} 
BgL_za72za7_4443 = 
(long)CINT(BgL_auxz00_7775); } 
BgL_arg3068z00_2760 = 
(BgL_charszd2readzd2_2750+BgL_za72za7_4443); } 
{ 
long BgL_sza7za7_7787;int BgL_charszd2tozd2readz00_7785;long BgL_charszd2readzd2_7784;
BgL_charszd2readzd2_7784 = BgL_arg3068z00_2760; 
BgL_charszd2tozd2readz00_7785 = 
(int)(BgL_ctrz00_2759); 
BgL_sza7za7_7787 = BgL_sza7za7_2758; 
BgL_sza7za7_2752 = BgL_sza7za7_7787; 
BgL_charszd2tozd2readz00_2751 = BgL_charszd2tozd2readz00_7785; 
BgL_charszd2readzd2_2750 = BgL_charszd2readzd2_7784; 
goto BgL_zc3anonymousza33065ze3z83_2753;} } } } } } } } 
return 
(int)(BgL_auxz00_7723);} } } } } } 
}



/* file->string */
BGL_EXPORTED_DEF obj_t BGl_filezd2ze3stringz31zz__r4_input_6_10_2z00(obj_t BgL_pathz00_73)
{ AN_OBJECT;
{ /* Ieee/input.scm 482 */
{ /* Ieee/input.scm 485 */
obj_t BgL_iz00_2767;
{ /* Ieee/string.scm 208 */

BgL_iz00_2767 = 
BGl_stringzd2indexzd2zz__r4_strings_6_7z00(BgL_pathz00_73, 
BCHAR(((unsigned char)':')), 
BINT(((long)0))); } 
if(
CBOOL(BgL_iz00_2767))
{ /* Ieee/input.scm 489 */
bool_t BgL_testz00_7794;
{ /* Ieee/input.scm 489 */

BgL_testz00_7794 = 
BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(BGl_string4471z00zz__r4_input_6_10_2z00, BgL_pathz00_73, BFALSE, BFALSE, BFALSE, BFALSE); } 
if(BgL_testz00_7794)
{ /* Ieee/input.scm 490 */
obj_t BgL_arg3075z00_2769;
BgL_arg3075z00_2769 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_pathz00_73, ((long)5), 
STRING_LENGTH(BgL_pathz00_73)); 
return 
bgl_file_to_string(
BSTRING_TO_STRING(BgL_arg3075z00_2769));}  else 
{ /* Ieee/input.scm 492 */
obj_t BgL_ipz00_2772;
{ /* Ieee/port.scm 375 */

BgL_ipz00_2772 = 
BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_pathz00_73, BTRUE); } 
{ /* Ieee/input.scm 493 */
obj_t BgL_val1931z00_2773;
BgL_val1931z00_2773 = 
BGl_zc3exitza33082ze3z83zz__r4_input_6_10_2z00(BgL_ipz00_2772); 
{ /* Ieee/input.scm 495 */
obj_t BgL_portz00_4445;
if(
INPUT_PORTP(BgL_ipz00_2772))
{ /* Ieee/input.scm 495 */
BgL_portz00_4445 = BgL_ipz00_2772; }  else 
{ 
obj_t BgL_auxz00_7804;
BgL_auxz00_7804 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)19027)), BGl_string4472z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_ipz00_2772); 
FAILURE(BgL_auxz00_7804,BFALSE,BFALSE);} 
bgl_close_input_port(BgL_portz00_4445); } 
if(
CBOOL(
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val1931z00_2773)))
{ /* Ieee/input.scm 495 */
obj_t BgL_arg3079z00_2775;obj_t BgL_arg3081z00_2776;
{ /* Ieee/input.scm 495 */
obj_t BgL_pairz00_4446;
if(
PAIRP(BgL_val1931z00_2773))
{ /* Ieee/input.scm 495 */
BgL_pairz00_4446 = BgL_val1931z00_2773; }  else 
{ 
obj_t BgL_auxz00_7814;
BgL_auxz00_7814 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)19009)), BGl_string4472z00zz__r4_input_6_10_2z00, BGl_string4379z00zz__r4_input_6_10_2z00, BgL_val1931z00_2773); 
FAILURE(BgL_auxz00_7814,BFALSE,BFALSE);} 
BgL_arg3079z00_2775 = 
CAR(BgL_pairz00_4446); } 
BgL_arg3081z00_2776 = 
CDR(BgL_val1931z00_2773); 
{ /* Ieee/input.scm 495 */
obj_t BgL_aux4229z00_5400;
BgL_aux4229z00_5400 = 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg3079z00_2775, BgL_arg3081z00_2776); 
if(
STRINGP(BgL_aux4229z00_5400))
{ /* Ieee/input.scm 495 */
return BgL_aux4229z00_5400;}  else 
{ 
obj_t BgL_auxz00_7823;
BgL_auxz00_7823 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)19009)), BGl_string4472z00zz__r4_input_6_10_2z00, BGl_string4326z00zz__r4_input_6_10_2z00, BgL_aux4229z00_5400); 
FAILURE(BgL_auxz00_7823,BFALSE,BFALSE);} } }  else 
{ /* Ieee/input.scm 495 */
if(
STRINGP(BgL_val1931z00_2773))
{ /* Ieee/input.scm 495 */
return BgL_val1931z00_2773;}  else 
{ 
obj_t BgL_auxz00_7829;
BgL_auxz00_7829 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)19009)), BGl_string4472z00zz__r4_input_6_10_2z00, BGl_string4326z00zz__r4_input_6_10_2z00, BgL_val1931z00_2773); 
FAILURE(BgL_auxz00_7829,BFALSE,BFALSE);} } } } }  else 
{ /* Ieee/input.scm 487 */
return 
bgl_file_to_string(
BSTRING_TO_STRING(BgL_pathz00_73));} } } 
}



/* <exit:3082> */
obj_t BGl_zc3exitza33082ze3z83zz__r4_input_6_10_2z00(obj_t BgL_ipz00_4829)
{ AN_OBJECT;
{ /* Ieee/input.scm 495 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit1932z00_2778;
if( SET_EXIT(BgL_an_exit1932z00_2778) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit1932z00_2778 = 
(void *)jmpbuf; 
{ /* Ieee/input.scm 495 */

PUSH_EXIT(BgL_an_exit1932z00_2778, ((long)0)); 
{ /* Ieee/input.scm 494 */
obj_t BgL_val1933z00_2779;
BgL_val1933z00_2779 = 
BGl_readzd2stringzd2zz__r4_input_6_10_2z00(BgL_ipz00_4829); 
POP_EXIT(); 
return BgL_val1933z00_2779;} } 
} } 
}



/* _file->string */
obj_t BGl__filezd2ze3stringz31zz__r4_input_6_10_2z00(obj_t BgL_envz00_4802, obj_t BgL_pathz00_4803)
{ AN_OBJECT;
{ /* Ieee/input.scm 482 */
{ /* Ieee/input.scm 485 */
obj_t BgL_auxz00_7840;
if(
STRINGP(BgL_pathz00_4803))
{ /* Ieee/input.scm 485 */
BgL_auxz00_7840 = BgL_pathz00_4803
; }  else 
{ 
obj_t BgL_auxz00_7843;
BgL_auxz00_7843 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)18718)), BGl_string4473z00zz__r4_input_6_10_2z00, BGl_string4326z00zz__r4_input_6_10_2z00, BgL_pathz00_4803); 
FAILURE(BgL_auxz00_7843,BFALSE,BFALSE);} 
return 
BGl_filezd2ze3stringz31zz__r4_input_6_10_2z00(BgL_auxz00_7840);} } 
}



/* send-chars/size */
BGL_EXPORTED_DEF long BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00(obj_t BgL_ipz00_74, obj_t BgL_opz00_75, long BgL_siza7eza7_76, long BgL_offsetz00_77)
{ AN_OBJECT;
{ /* Ieee/input.scm 505 */
{ /* Ieee/input.scm 507 */
long BgL_sza7za7_2791;long BgL_offz00_2792;
{ /* Ieee/input.scm 507 */
long BgL_res3649z00_4449;
{ /* Ieee/input.scm 507 */
long BgL_auxz00_7848;
{ /* Ieee/input.scm 507 */
long BgL_auxz00_7849;
BgL_auxz00_7849 = 
ELONG_TO_LONG(BgL_siza7eza7_76); 
BgL_auxz00_7848 = 
ELONG_TO_LONG(BgL_auxz00_7849); } 
BgL_res3649z00_4449 = 
ELONG_TO_LONG(BgL_auxz00_7848); } 
BgL_sza7za7_2791 = BgL_res3649z00_4449; } 
{ /* Ieee/input.scm 508 */
long BgL_res3650z00_4451;
{ /* Ieee/input.scm 508 */
long BgL_auxz00_7853;
{ /* Ieee/input.scm 508 */
long BgL_auxz00_7854;
BgL_auxz00_7854 = 
ELONG_TO_LONG(BgL_offsetz00_77); 
BgL_auxz00_7853 = 
ELONG_TO_LONG(BgL_auxz00_7854); } 
BgL_res3650z00_4451 = 
ELONG_TO_LONG(BgL_auxz00_7853); } 
BgL_offz00_2792 = BgL_res3650z00_4451; } 
{ /* Ieee/input.scm 511 */
obj_t BgL__ortest_1934z00_2793;
BgL__ortest_1934z00_2793 = 
bgl_sendchars(BgL_ipz00_74, BgL_opz00_75, BgL_sza7za7_2791, BgL_offz00_2792); 
if(
CBOOL(BgL__ortest_1934z00_2793))
{ /* Ieee/input.scm 511 */
obj_t BgL_auxz00_7861;
if(
INTEGERP(BgL__ortest_1934z00_2793))
{ /* Ieee/input.scm 511 */
BgL_auxz00_7861 = BgL__ortest_1934z00_2793
; }  else 
{ 
obj_t BgL_auxz00_7864;
BgL_auxz00_7864 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)19593)), BGl_string4474z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL__ortest_1934z00_2793); 
FAILURE(BgL_auxz00_7864,BFALSE,BFALSE);} 
return 
(long)CINT(BgL_auxz00_7861);}  else 
{ /* Ieee/input.scm 513 */
bool_t BgL_testz00_7869;
if(
INPUT_GZIP_PORTP(BgL_ipz00_74))
{ /* Ieee/input.scm 513 */
if(
(BgL_sza7za7_2791==((long)-1)))
{ /* Ieee/input.scm 513 */
BgL_testz00_7869 = 
(BgL_offz00_2792==((long)-1))
; }  else 
{ /* Ieee/input.scm 513 */
BgL_testz00_7869 = ((bool_t)0)
; } }  else 
{ /* Ieee/input.scm 513 */
BgL_testz00_7869 = ((bool_t)0)
; } 
if(BgL_testz00_7869)
{ /* Ieee/input.scm 514 */
obj_t BgL_auxz00_7875;
{ /* Ieee/input.scm 514 */
obj_t BgL_aux4237z00_5408;
BgL_aux4237z00_5408 = 
BGl_gunza7ipzd2sendcharsz75zz__gunza7ipza7(BgL_ipz00_74, BgL_opz00_75); 
if(
INTEGERP(BgL_aux4237z00_5408))
{ /* Ieee/input.scm 514 */
BgL_auxz00_7875 = BgL_aux4237z00_5408
; }  else 
{ 
obj_t BgL_auxz00_7879;
BgL_auxz00_7879 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)19693)), BGl_string4474z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_aux4237z00_5408); 
FAILURE(BgL_auxz00_7879,BFALSE,BFALSE);} } 
return 
(long)CINT(BgL_auxz00_7875);}  else 
{ /* Ieee/input.scm 513 */
return 
(long)(
BGl_z52sendcharsz52zz__r4_input_6_10_2z00(BgL_ipz00_74, BgL_opz00_75, BgL_sza7za7_2791, BgL_offz00_2792));} } } } } 
}



/* _send-chars/size */
obj_t BGl__sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00(obj_t BgL_envz00_4804, obj_t BgL_ipz00_4805, obj_t BgL_opz00_4806, obj_t BgL_siza7eza7_4807, obj_t BgL_offsetz00_4808)
{ AN_OBJECT;
{ /* Ieee/input.scm 505 */
{ /* Ieee/input.scm 507 */
long BgL_auxz00_7886;
{ /* Ieee/input.scm 507 */
long BgL_auxz00_7910;long BgL_auxz00_7901;obj_t BgL_auxz00_7894;obj_t BgL_auxz00_7887;
{ /* Ieee/input.scm 507 */
obj_t BgL_auxz00_7911;
if(
ELONGP(BgL_offsetz00_4808))
{ /* Ieee/input.scm 507 */
BgL_auxz00_7911 = BgL_offsetz00_4808
; }  else 
{ 
obj_t BgL_auxz00_7914;
BgL_auxz00_7914 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)19479)), BGl_string4475z00zz__r4_input_6_10_2z00, BGl_string4477z00zz__r4_input_6_10_2z00, BgL_offsetz00_4808); 
FAILURE(BgL_auxz00_7914,BFALSE,BFALSE);} 
BgL_auxz00_7910 = 
BELONG_TO_LONG(BgL_auxz00_7911); } 
{ /* Ieee/input.scm 507 */
obj_t BgL_auxz00_7902;
if(
ELONGP(BgL_siza7eza7_4807))
{ /* Ieee/input.scm 507 */
BgL_auxz00_7902 = BgL_siza7eza7_4807
; }  else 
{ 
obj_t BgL_auxz00_7905;
BgL_auxz00_7905 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)19479)), BGl_string4475z00zz__r4_input_6_10_2z00, BGl_string4477z00zz__r4_input_6_10_2z00, BgL_siza7eza7_4807); 
FAILURE(BgL_auxz00_7905,BFALSE,BFALSE);} 
BgL_auxz00_7901 = 
BELONG_TO_LONG(BgL_auxz00_7902); } 
if(
OUTPUT_PORTP(BgL_opz00_4806))
{ /* Ieee/input.scm 507 */
BgL_auxz00_7894 = BgL_opz00_4806
; }  else 
{ 
obj_t BgL_auxz00_7897;
BgL_auxz00_7897 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)19479)), BGl_string4475z00zz__r4_input_6_10_2z00, BGl_string4476z00zz__r4_input_6_10_2z00, BgL_opz00_4806); 
FAILURE(BgL_auxz00_7897,BFALSE,BFALSE);} 
if(
INPUT_PORTP(BgL_ipz00_4805))
{ /* Ieee/input.scm 507 */
BgL_auxz00_7887 = BgL_ipz00_4805
; }  else 
{ 
obj_t BgL_auxz00_7890;
BgL_auxz00_7890 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)19479)), BGl_string4475z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_ipz00_4805); 
FAILURE(BgL_auxz00_7890,BFALSE,BFALSE);} 
BgL_auxz00_7886 = 
BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00(BgL_auxz00_7887, BgL_auxz00_7894, BgL_auxz00_7901, BgL_auxz00_7910); } 
return 
BINT(BgL_auxz00_7886);} } 
}



/* _send-chars */
obj_t BGl__sendzd2charszd2zz__r4_input_6_10_2z00(obj_t BgL_envz00_83, obj_t BgL_optz00_82)
{ AN_OBJECT;
{ /* Ieee/input.scm 527 */
{ /* Ieee/input.scm 527 */
obj_t BgL_g2051z00_2797;obj_t BgL_g2052z00_2798;
BgL_g2051z00_2797 = 
VECTOR_REF(BgL_optz00_82,
(int)(((long)0))); 
BgL_g2052z00_2798 = 
VECTOR_REF(BgL_optz00_82,
(int)(((long)1))); 
{ 

{ /* Ieee/input.scm 527 */
int BgL_aux2054z00_2800;
BgL_aux2054z00_2800 = 
VECTOR_LENGTH(BgL_optz00_82); 
switch( 
(long)(BgL_aux2054z00_2800)) { case ((long)2) : 

{ /* Ieee/input.scm 527 */

{ /* Ieee/input.scm 527 */
obj_t BgL_arg3090z00_2804;obj_t BgL_arg3091z00_2805;
BgL_arg3090z00_2804 = 
VECTOR_REF(BgL_optz00_82,
(int)(((long)0))); 
BgL_arg3091z00_2805 = 
VECTOR_REF(BgL_optz00_82,
(int)(((long)1))); 
{ /* Ieee/input.scm 527 */
long BgL_auxz00_7930;
{ /* Ieee/input.scm 527 */
obj_t BgL_auxz00_7938;obj_t BgL_auxz00_7931;
if(
OUTPUT_PORTP(BgL_arg3091z00_2805))
{ /* Ieee/input.scm 527 */
BgL_auxz00_7938 = BgL_arg3091z00_2805
; }  else 
{ 
obj_t BgL_auxz00_7941;
BgL_auxz00_7941 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)20146)), BGl_string4481z00zz__r4_input_6_10_2z00, BGl_string4476z00zz__r4_input_6_10_2z00, BgL_arg3091z00_2805); 
FAILURE(BgL_auxz00_7941,BFALSE,BFALSE);} 
if(
INPUT_PORTP(BgL_arg3090z00_2804))
{ /* Ieee/input.scm 527 */
BgL_auxz00_7931 = BgL_arg3090z00_2804
; }  else 
{ 
obj_t BgL_auxz00_7934;
BgL_auxz00_7934 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)20146)), BGl_string4481z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_arg3090z00_2804); 
FAILURE(BgL_auxz00_7934,BFALSE,BFALSE);} 
BgL_auxz00_7930 = 
BGl_sendzd2charszd2zz__r4_input_6_10_2z00(BgL_auxz00_7931, BgL_auxz00_7938, 
BINT(((long)-1)), 
BINT(((long)-1))); } 
return 
BINT(BgL_auxz00_7930);} } } break;case ((long)3) : 

{ /* Ieee/input.scm 527 */
obj_t BgL_siza7eza7_2806;
BgL_siza7eza7_2806 = 
VECTOR_REF(BgL_optz00_82,
(int)(((long)2))); 
{ /* Ieee/input.scm 527 */

{ /* Ieee/input.scm 527 */
obj_t BgL_arg3092z00_2808;obj_t BgL_arg3093z00_2809;
BgL_arg3092z00_2808 = 
VECTOR_REF(BgL_optz00_82,
(int)(((long)0))); 
BgL_arg3093z00_2809 = 
VECTOR_REF(BgL_optz00_82,
(int)(((long)1))); 
{ /* Ieee/input.scm 527 */
long BgL_auxz00_7955;
{ /* Ieee/input.scm 527 */
obj_t BgL_auxz00_7963;obj_t BgL_auxz00_7956;
if(
OUTPUT_PORTP(BgL_arg3093z00_2809))
{ /* Ieee/input.scm 527 */
BgL_auxz00_7963 = BgL_arg3093z00_2809
; }  else 
{ 
obj_t BgL_auxz00_7966;
BgL_auxz00_7966 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)20146)), BGl_string4481z00zz__r4_input_6_10_2z00, BGl_string4476z00zz__r4_input_6_10_2z00, BgL_arg3093z00_2809); 
FAILURE(BgL_auxz00_7966,BFALSE,BFALSE);} 
if(
INPUT_PORTP(BgL_arg3092z00_2808))
{ /* Ieee/input.scm 527 */
BgL_auxz00_7956 = BgL_arg3092z00_2808
; }  else 
{ 
obj_t BgL_auxz00_7959;
BgL_auxz00_7959 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)20146)), BGl_string4481z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_arg3092z00_2808); 
FAILURE(BgL_auxz00_7959,BFALSE,BFALSE);} 
BgL_auxz00_7955 = 
BGl_sendzd2charszd2zz__r4_input_6_10_2z00(BgL_auxz00_7956, BgL_auxz00_7963, BgL_siza7eza7_2806, 
BINT(((long)-1))); } 
return 
BINT(BgL_auxz00_7955);} } } } break;case ((long)4) : 

{ /* Ieee/input.scm 527 */
obj_t BgL_siza7eza7_2810;
BgL_siza7eza7_2810 = 
VECTOR_REF(BgL_optz00_82,
(int)(((long)2))); 
{ /* Ieee/input.scm 527 */
obj_t BgL_offsetz00_2811;
BgL_offsetz00_2811 = 
VECTOR_REF(BgL_optz00_82,
(int)(((long)3))); 
{ /* Ieee/input.scm 527 */

{ /* Ieee/input.scm 527 */
obj_t BgL_arg3094z00_2812;obj_t BgL_arg3095z00_2813;
BgL_arg3094z00_2812 = 
VECTOR_REF(BgL_optz00_82,
(int)(((long)0))); 
BgL_arg3095z00_2813 = 
VECTOR_REF(BgL_optz00_82,
(int)(((long)1))); 
{ /* Ieee/input.scm 527 */
long BgL_auxz00_7981;
{ /* Ieee/input.scm 527 */
obj_t BgL_auxz00_7989;obj_t BgL_auxz00_7982;
if(
OUTPUT_PORTP(BgL_arg3095z00_2813))
{ /* Ieee/input.scm 527 */
BgL_auxz00_7989 = BgL_arg3095z00_2813
; }  else 
{ 
obj_t BgL_auxz00_7992;
BgL_auxz00_7992 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)20146)), BGl_string4481z00zz__r4_input_6_10_2z00, BGl_string4476z00zz__r4_input_6_10_2z00, BgL_arg3095z00_2813); 
FAILURE(BgL_auxz00_7992,BFALSE,BFALSE);} 
if(
INPUT_PORTP(BgL_arg3094z00_2812))
{ /* Ieee/input.scm 527 */
BgL_auxz00_7982 = BgL_arg3094z00_2812
; }  else 
{ 
obj_t BgL_auxz00_7985;
BgL_auxz00_7985 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)20146)), BGl_string4481z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_arg3094z00_2812); 
FAILURE(BgL_auxz00_7985,BFALSE,BFALSE);} 
BgL_auxz00_7981 = 
BGl_sendzd2charszd2zz__r4_input_6_10_2z00(BgL_auxz00_7982, BgL_auxz00_7989, BgL_siza7eza7_2810, BgL_offsetz00_2811); } 
return 
BINT(BgL_auxz00_7981);} } } } } break;
default: 
{ /* Ieee/input.scm 527 */
obj_t BgL_arg3096z00_2814;int BgL_arg3098z00_2816;
BgL_arg3096z00_2814 = BGl_symbol4478z00zz__r4_input_6_10_2z00; 
BgL_arg3098z00_2816 = 
VECTOR_LENGTH(BgL_optz00_82); 
return 
BGl_errorz00zz__errorz00(BgL_arg3096z00_2814, BGl_string4480z00zz__r4_input_6_10_2z00, 
BINT(BgL_arg3098z00_2816));} } } } } } 
}



/* send-chars */
BGL_EXPORTED_DEF long BGl_sendzd2charszd2zz__r4_input_6_10_2z00(obj_t BgL_ipz00_78, obj_t BgL_opz00_79, obj_t BgL_siza7eza7_80, obj_t BgL_offsetz00_81)
{ AN_OBJECT;
{ /* Ieee/input.scm 527 */
{ /* Ieee/input.scm 529 */
long BgL_sza7za7_2817;long BgL_offz00_2818;
if(
INTEGERP(BgL_siza7eza7_80))
{ /* Ieee/input.scm 530 */
long BgL_auxz00_8005;
BgL_auxz00_8005 = 
(long)CINT(BgL_siza7eza7_80); 
BgL_sza7za7_2817 = 
LONG_TO_ELONG(BgL_auxz00_8005); }  else 
{ /* Ieee/input.scm 530 */
if(
ELONGP(BgL_siza7eza7_80))
{ /* Ieee/input.scm 531 */
BgL_sza7za7_2817 = 
BELONG_TO_LONG(BgL_siza7eza7_80); }  else 
{ /* Ieee/input.scm 532 */
obj_t BgL_auxz00_8011;
{ /* Ieee/input.scm 532 */
obj_t BgL_aux4259z00_5430;
BgL_aux4259z00_5430 = 
BGl_errorz00zz__errorz00(BGl_symbol4482z00zz__r4_input_6_10_2z00, BGl_string4484z00zz__r4_input_6_10_2z00, BgL_siza7eza7_80); 
if(
ELONGP(BgL_aux4259z00_5430))
{ /* Ieee/input.scm 532 */
BgL_auxz00_8011 = BgL_aux4259z00_5430
; }  else 
{ 
obj_t BgL_auxz00_8015;
BgL_auxz00_8015 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)20360)), BGl_string4483z00zz__r4_input_6_10_2z00, BGl_string4477z00zz__r4_input_6_10_2z00, BgL_aux4259z00_5430); 
FAILURE(BgL_auxz00_8015,BFALSE,BFALSE);} } 
BgL_sza7za7_2817 = 
BELONG_TO_LONG(BgL_auxz00_8011); } } 
if(
INTEGERP(BgL_offsetz00_81))
{ /* Ieee/input.scm 534 */
long BgL_auxz00_8022;
BgL_auxz00_8022 = 
(long)CINT(BgL_offsetz00_81); 
BgL_offz00_2818 = 
LONG_TO_ELONG(BgL_auxz00_8022); }  else 
{ /* Ieee/input.scm 534 */
if(
ELONGP(BgL_offsetz00_81))
{ /* Ieee/input.scm 535 */
BgL_offz00_2818 = 
BELONG_TO_LONG(BgL_offsetz00_81); }  else 
{ /* Ieee/input.scm 536 */
obj_t BgL_auxz00_8028;
{ /* Ieee/input.scm 536 */
obj_t BgL_aux4261z00_5432;
BgL_aux4261z00_5432 = 
BGl_errorz00zz__errorz00(BGl_symbol4482z00zz__r4_input_6_10_2z00, BGl_string4485z00zz__r4_input_6_10_2z00, BgL_offsetz00_81); 
if(
ELONGP(BgL_aux4261z00_5432))
{ /* Ieee/input.scm 536 */
BgL_auxz00_8028 = BgL_aux4261z00_5432
; }  else 
{ 
obj_t BgL_auxz00_8032;
BgL_auxz00_8032 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)20505)), BGl_string4483z00zz__r4_input_6_10_2z00, BGl_string4477z00zz__r4_input_6_10_2z00, BgL_aux4261z00_5432); 
FAILURE(BgL_auxz00_8032,BFALSE,BFALSE);} } 
BgL_offz00_2818 = 
BELONG_TO_LONG(BgL_auxz00_8028); } } 
return 
BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00(BgL_ipz00_78, BgL_opz00_79, BgL_sza7za7_2817, BgL_offz00_2818);} } 
}



/* _send-file */
obj_t BGl__sendzd2filezd2zz__r4_input_6_10_2z00(obj_t BgL_envz00_89, obj_t BgL_optz00_88)
{ AN_OBJECT;
{ /* Ieee/input.scm 542 */
{ /* Ieee/input.scm 542 */
obj_t BgL_filez00_2823;obj_t BgL_opz00_2824;
BgL_filez00_2823 = 
VECTOR_REF(BgL_optz00_88,
(int)(((long)0))); 
BgL_opz00_2824 = 
VECTOR_REF(BgL_optz00_88,
(int)(((long)1))); 
{ 

{ /* Ieee/input.scm 542 */
int BgL_aux2056z00_2826;
BgL_aux2056z00_2826 = 
VECTOR_LENGTH(BgL_optz00_88); 
switch( 
(long)(BgL_aux2056z00_2826)) { case ((long)2) : 

{ /* Ieee/input.scm 542 */

{ /* Ieee/input.scm 542 */
obj_t BgL_arg3104z00_2830;obj_t BgL_arg3105z00_2831;
BgL_arg3104z00_2830 = 
VECTOR_REF(BgL_optz00_88,
(int)(((long)0))); 
BgL_arg3105z00_2831 = 
VECTOR_REF(BgL_optz00_88,
(int)(((long)1))); 
{ /* Ieee/input.scm 542 */
long BgL_auxz00_8047;
{ /* Ieee/input.scm 542 */
obj_t BgL_auxz00_8055;obj_t BgL_auxz00_8048;
if(
OUTPUT_PORTP(BgL_arg3105z00_2831))
{ /* Ieee/input.scm 542 */
BgL_auxz00_8055 = BgL_arg3105z00_2831
; }  else 
{ 
obj_t BgL_auxz00_8058;
BgL_auxz00_8058 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)20815)), BGl_string4488z00zz__r4_input_6_10_2z00, BGl_string4476z00zz__r4_input_6_10_2z00, BgL_arg3105z00_2831); 
FAILURE(BgL_auxz00_8058,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg3104z00_2830))
{ /* Ieee/input.scm 542 */
BgL_auxz00_8048 = BgL_arg3104z00_2830
; }  else 
{ 
obj_t BgL_auxz00_8051;
BgL_auxz00_8051 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)20815)), BGl_string4488z00zz__r4_input_6_10_2z00, BGl_string4326z00zz__r4_input_6_10_2z00, BgL_arg3104z00_2830); 
FAILURE(BgL_auxz00_8051,BFALSE,BFALSE);} 
BgL_auxz00_8047 = 
BGl_sendzd2filezd2zz__r4_input_6_10_2z00(BgL_auxz00_8048, BgL_auxz00_8055, ((long)-1), ((long)-1)); } 
return 
BINT(BgL_auxz00_8047);} } } break;case ((long)3) : 

{ /* Ieee/input.scm 542 */
obj_t BgL_siza7eza7_2832;
BgL_siza7eza7_2832 = 
VECTOR_REF(BgL_optz00_88,
(int)(((long)2))); 
{ /* Ieee/input.scm 542 */

{ /* Ieee/input.scm 542 */
obj_t BgL_arg3106z00_2834;obj_t BgL_arg3107z00_2835;
BgL_arg3106z00_2834 = 
VECTOR_REF(BgL_optz00_88,
(int)(((long)0))); 
BgL_arg3107z00_2835 = 
VECTOR_REF(BgL_optz00_88,
(int)(((long)1))); 
{ /* Ieee/input.scm 542 */
long BgL_auxz00_8070;
{ /* Ieee/input.scm 542 */
long BgL_auxz00_8085;obj_t BgL_auxz00_8078;obj_t BgL_auxz00_8071;
{ /* Ieee/input.scm 542 */
obj_t BgL_auxz00_8086;
if(
ELONGP(BgL_siza7eza7_2832))
{ /* Ieee/input.scm 542 */
BgL_auxz00_8086 = BgL_siza7eza7_2832
; }  else 
{ 
obj_t BgL_auxz00_8089;
BgL_auxz00_8089 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)20815)), BGl_string4488z00zz__r4_input_6_10_2z00, BGl_string4477z00zz__r4_input_6_10_2z00, BgL_siza7eza7_2832); 
FAILURE(BgL_auxz00_8089,BFALSE,BFALSE);} 
BgL_auxz00_8085 = 
BELONG_TO_LONG(BgL_auxz00_8086); } 
if(
OUTPUT_PORTP(BgL_arg3107z00_2835))
{ /* Ieee/input.scm 542 */
BgL_auxz00_8078 = BgL_arg3107z00_2835
; }  else 
{ 
obj_t BgL_auxz00_8081;
BgL_auxz00_8081 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)20815)), BGl_string4488z00zz__r4_input_6_10_2z00, BGl_string4476z00zz__r4_input_6_10_2z00, BgL_arg3107z00_2835); 
FAILURE(BgL_auxz00_8081,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg3106z00_2834))
{ /* Ieee/input.scm 542 */
BgL_auxz00_8071 = BgL_arg3106z00_2834
; }  else 
{ 
obj_t BgL_auxz00_8074;
BgL_auxz00_8074 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)20815)), BGl_string4488z00zz__r4_input_6_10_2z00, BGl_string4326z00zz__r4_input_6_10_2z00, BgL_arg3106z00_2834); 
FAILURE(BgL_auxz00_8074,BFALSE,BFALSE);} 
BgL_auxz00_8070 = 
BGl_sendzd2filezd2zz__r4_input_6_10_2z00(BgL_auxz00_8071, BgL_auxz00_8078, BgL_auxz00_8085, ((long)-1)); } 
return 
BINT(BgL_auxz00_8070);} } } } break;case ((long)4) : 

{ /* Ieee/input.scm 542 */
obj_t BgL_siza7eza7_2836;
BgL_siza7eza7_2836 = 
VECTOR_REF(BgL_optz00_88,
(int)(((long)2))); 
{ /* Ieee/input.scm 542 */
obj_t BgL_offsetz00_2837;
BgL_offsetz00_2837 = 
VECTOR_REF(BgL_optz00_88,
(int)(((long)3))); 
{ /* Ieee/input.scm 542 */

{ /* Ieee/input.scm 542 */
obj_t BgL_arg3108z00_2838;obj_t BgL_arg3109z00_2839;
BgL_arg3108z00_2838 = 
VECTOR_REF(BgL_optz00_88,
(int)(((long)0))); 
BgL_arg3109z00_2839 = 
VECTOR_REF(BgL_optz00_88,
(int)(((long)1))); 
{ /* Ieee/input.scm 542 */
long BgL_auxz00_8104;
{ /* Ieee/input.scm 542 */
long BgL_auxz00_8128;long BgL_auxz00_8119;obj_t BgL_auxz00_8112;obj_t BgL_auxz00_8105;
{ /* Ieee/input.scm 542 */
obj_t BgL_auxz00_8129;
if(
ELONGP(BgL_offsetz00_2837))
{ /* Ieee/input.scm 542 */
BgL_auxz00_8129 = BgL_offsetz00_2837
; }  else 
{ 
obj_t BgL_auxz00_8132;
BgL_auxz00_8132 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)20815)), BGl_string4488z00zz__r4_input_6_10_2z00, BGl_string4477z00zz__r4_input_6_10_2z00, BgL_offsetz00_2837); 
FAILURE(BgL_auxz00_8132,BFALSE,BFALSE);} 
BgL_auxz00_8128 = 
BELONG_TO_LONG(BgL_auxz00_8129); } 
{ /* Ieee/input.scm 542 */
obj_t BgL_auxz00_8120;
if(
ELONGP(BgL_siza7eza7_2836))
{ /* Ieee/input.scm 542 */
BgL_auxz00_8120 = BgL_siza7eza7_2836
; }  else 
{ 
obj_t BgL_auxz00_8123;
BgL_auxz00_8123 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)20815)), BGl_string4488z00zz__r4_input_6_10_2z00, BGl_string4477z00zz__r4_input_6_10_2z00, BgL_siza7eza7_2836); 
FAILURE(BgL_auxz00_8123,BFALSE,BFALSE);} 
BgL_auxz00_8119 = 
BELONG_TO_LONG(BgL_auxz00_8120); } 
if(
OUTPUT_PORTP(BgL_arg3109z00_2839))
{ /* Ieee/input.scm 542 */
BgL_auxz00_8112 = BgL_arg3109z00_2839
; }  else 
{ 
obj_t BgL_auxz00_8115;
BgL_auxz00_8115 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)20815)), BGl_string4488z00zz__r4_input_6_10_2z00, BGl_string4476z00zz__r4_input_6_10_2z00, BgL_arg3109z00_2839); 
FAILURE(BgL_auxz00_8115,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg3108z00_2838))
{ /* Ieee/input.scm 542 */
BgL_auxz00_8105 = BgL_arg3108z00_2838
; }  else 
{ 
obj_t BgL_auxz00_8108;
BgL_auxz00_8108 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)20815)), BGl_string4488z00zz__r4_input_6_10_2z00, BGl_string4326z00zz__r4_input_6_10_2z00, BgL_arg3108z00_2838); 
FAILURE(BgL_auxz00_8108,BFALSE,BFALSE);} 
BgL_auxz00_8104 = 
BGl_sendzd2filezd2zz__r4_input_6_10_2z00(BgL_auxz00_8105, BgL_auxz00_8112, BgL_auxz00_8119, BgL_auxz00_8128); } 
return 
BINT(BgL_auxz00_8104);} } } } } break;
default: 
{ /* Ieee/input.scm 542 */
obj_t BgL_arg3110z00_2840;int BgL_arg3112z00_2842;
BgL_arg3110z00_2840 = BGl_symbol4486z00zz__r4_input_6_10_2z00; 
BgL_arg3112z00_2842 = 
VECTOR_LENGTH(BgL_optz00_88); 
return 
BGl_errorz00zz__errorz00(BgL_arg3110z00_2840, BGl_string4480z00zz__r4_input_6_10_2z00, 
BINT(BgL_arg3112z00_2842));} } } } } } 
}



/* send-file */
BGL_EXPORTED_DEF long BGl_sendzd2filezd2zz__r4_input_6_10_2z00(obj_t BgL_filez00_84, obj_t BgL_opz00_85, long BgL_siza7eza7_86, long BgL_offsetz00_87)
{ AN_OBJECT;
{ /* Ieee/input.scm 542 */
{ /* Ieee/input.scm 546 */
long BgL_sza7za7_2843;long BgL_offz00_2844;
{ /* Ieee/input.scm 546 */
long BgL_res3651z00_4464;
{ /* Ieee/input.scm 546 */
long BgL_auxz00_8144;
{ /* Ieee/input.scm 546 */
long BgL_auxz00_8145;
BgL_auxz00_8145 = 
ELONG_TO_LONG(BgL_siza7eza7_86); 
BgL_auxz00_8144 = 
ELONG_TO_LONG(BgL_auxz00_8145); } 
BgL_res3651z00_4464 = 
ELONG_TO_LONG(BgL_auxz00_8144); } 
BgL_sza7za7_2843 = BgL_res3651z00_4464; } 
{ /* Ieee/input.scm 547 */
long BgL_res3652z00_4466;
{ /* Ieee/input.scm 547 */
long BgL_auxz00_8149;
{ /* Ieee/input.scm 547 */
long BgL_auxz00_8150;
BgL_auxz00_8150 = 
ELONG_TO_LONG(BgL_offsetz00_87); 
BgL_auxz00_8149 = 
ELONG_TO_LONG(BgL_auxz00_8150); } 
BgL_res3652z00_4466 = 
ELONG_TO_LONG(BgL_auxz00_8149); } 
BgL_offz00_2844 = BgL_res3652z00_4466; } 
{ /* Ieee/input.scm 550 */
obj_t BgL__ortest_1937z00_2845;
BgL__ortest_1937z00_2845 = 
bgl_sendfile(BgL_filez00_84, BgL_opz00_85, 
ELONG_TO_LONG(BgL_siza7eza7_86), 
ELONG_TO_LONG(BgL_offsetz00_87)); 
if(
CBOOL(BgL__ortest_1937z00_2845))
{ /* Ieee/input.scm 550 */
obj_t BgL_auxz00_8159;
if(
INTEGERP(BgL__ortest_1937z00_2845))
{ /* Ieee/input.scm 550 */
BgL_auxz00_8159 = BgL__ortest_1937z00_2845
; }  else 
{ 
obj_t BgL_auxz00_8162;
BgL_auxz00_8162 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)21054)), BGl_string4489z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL__ortest_1937z00_2845); 
FAILURE(BgL_auxz00_8162,BFALSE,BFALSE);} 
return 
(long)CINT(BgL_auxz00_8159);}  else 
{ /* Ieee/input.scm 551 */
obj_t BgL_ipz00_2846;
{ /* Ieee/port.scm 375 */

BgL_ipz00_2846 = 
BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_filez00_84, BTRUE); } 
{ /* Ieee/input.scm 552 */
obj_t BgL_val1938z00_2847;
BgL_val1938z00_2847 = 
BGl_zc3exitza33116ze3z83zz__r4_input_6_10_2z00(BgL_offsetz00_87, BgL_siza7eza7_86, BgL_opz00_85, BgL_ipz00_2846); 
{ /* Ieee/input.scm 554 */
obj_t BgL_portz00_4467;
if(
INPUT_PORTP(BgL_ipz00_2846))
{ /* Ieee/input.scm 554 */
BgL_portz00_4467 = BgL_ipz00_2846; }  else 
{ 
obj_t BgL_auxz00_8171;
BgL_auxz00_8171 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)21213)), BGl_string4489z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_ipz00_2846); 
FAILURE(BgL_auxz00_8171,BFALSE,BFALSE);} 
bgl_close_input_port(BgL_portz00_4467); } 
if(
CBOOL(
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val1938z00_2847)))
{ /* Ieee/input.scm 554 */
obj_t BgL_arg3114z00_2849;obj_t BgL_arg3115z00_2850;
{ /* Ieee/input.scm 554 */
obj_t BgL_pairz00_4468;
if(
PAIRP(BgL_val1938z00_2847))
{ /* Ieee/input.scm 554 */
BgL_pairz00_4468 = BgL_val1938z00_2847; }  else 
{ 
obj_t BgL_auxz00_8181;
BgL_auxz00_8181 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)21195)), BGl_string4489z00zz__r4_input_6_10_2z00, BGl_string4379z00zz__r4_input_6_10_2z00, BgL_val1938z00_2847); 
FAILURE(BgL_auxz00_8181,BFALSE,BFALSE);} 
BgL_arg3114z00_2849 = 
CAR(BgL_pairz00_4468); } 
BgL_arg3115z00_2850 = 
CDR(BgL_val1938z00_2847); 
{ /* Ieee/input.scm 554 */
obj_t BgL_auxz00_8187;
{ /* Ieee/input.scm 554 */
obj_t BgL_aux4289z00_5460;
BgL_aux4289z00_5460 = 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg3114z00_2849, BgL_arg3115z00_2850); 
if(
INTEGERP(BgL_aux4289z00_5460))
{ /* Ieee/input.scm 554 */
BgL_auxz00_8187 = BgL_aux4289z00_5460
; }  else 
{ 
obj_t BgL_auxz00_8191;
BgL_auxz00_8191 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)21195)), BGl_string4489z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_aux4289z00_5460); 
FAILURE(BgL_auxz00_8191,BFALSE,BFALSE);} } 
return 
(long)CINT(BgL_auxz00_8187);} }  else 
{ /* Ieee/input.scm 554 */
obj_t BgL_auxz00_8196;
if(
INTEGERP(BgL_val1938z00_2847))
{ /* Ieee/input.scm 554 */
BgL_auxz00_8196 = BgL_val1938z00_2847
; }  else 
{ 
obj_t BgL_auxz00_8199;
BgL_auxz00_8199 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)21195)), BGl_string4489z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_val1938z00_2847); 
FAILURE(BgL_auxz00_8199,BFALSE,BFALSE);} 
return 
(long)CINT(BgL_auxz00_8196);} } } } } } 
}



/* <exit:3116> */
obj_t BGl_zc3exitza33116ze3z83zz__r4_input_6_10_2z00(long BgL_offsetz00_4828, long BgL_siza7eza7_4827, obj_t BgL_opz00_4826, obj_t BgL_ipz00_4825)
{ AN_OBJECT;
{ /* Ieee/input.scm 554 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit1939z00_2852;
if( SET_EXIT(BgL_an_exit1939z00_2852) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit1939z00_2852 = 
(void *)jmpbuf; 
{ /* Ieee/input.scm 554 */

PUSH_EXIT(BgL_an_exit1939z00_2852, ((long)0)); 
{ /* Ieee/input.scm 553 */
long BgL_val1940z00_2853;
{ /* Ieee/input.scm 553 */
obj_t BgL_auxz00_8207;
if(
INPUT_PORTP(BgL_ipz00_4825))
{ /* Ieee/input.scm 553 */
BgL_auxz00_8207 = BgL_ipz00_4825
; }  else 
{ 
obj_t BgL_auxz00_8210;
BgL_auxz00_8210 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)21170)), BGl_string4490z00zz__r4_input_6_10_2z00, BGl_string4316z00zz__r4_input_6_10_2z00, BgL_ipz00_4825); 
FAILURE(BgL_auxz00_8210,BFALSE,BFALSE);} 
BgL_val1940z00_2853 = 
BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00(BgL_auxz00_8207, BgL_opz00_4826, BgL_siza7eza7_4827, BgL_offsetz00_4828); } 
POP_EXIT(); 
return 
BINT(BgL_val1940z00_2853);} } 
} } 
}



/* file-lines */
BGL_EXPORTED_DEF obj_t BGl_filezd2lineszd2zz__r4_input_6_10_2z00(obj_t BgL_filez00_90)
{ AN_OBJECT;
{ /* Ieee/input.scm 566 */
if(
fexists(
BSTRING_TO_STRING(BgL_filez00_90)))
{ /* Ieee/input.scm 588 */
obj_t BgL_zc3anonymousza33119ze3z83_4809;
BgL_zc3anonymousza33119ze3z83_4809 = 
make_fx_procedure(BGl_zc3anonymousza33119ze3z83zz__r4_input_6_10_2z00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3anonymousza33119ze3z83_4809, 
(int)(((long)0)), BgL_filez00_90); 
return 
BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(BgL_filez00_90, BgL_zc3anonymousza33119ze3z83_4809);}  else 
{ /* Ieee/input.scm 584 */
return BFALSE;} } 
}



/* _file-lines */
obj_t BGl__filezd2lineszd2zz__r4_input_6_10_2z00(obj_t BgL_envz00_4810, obj_t BgL_filez00_4811)
{ AN_OBJECT;
{ /* Ieee/input.scm 566 */
{ /* Ieee/input.scm 568 */
obj_t BgL_auxz00_8226;
if(
STRINGP(BgL_filez00_4811))
{ /* Ieee/input.scm 568 */
BgL_auxz00_8226 = BgL_filez00_4811
; }  else 
{ 
obj_t BgL_auxz00_8229;
BgL_auxz00_8229 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)21776)), BGl_string4491z00zz__r4_input_6_10_2z00, BGl_string4326z00zz__r4_input_6_10_2z00, BgL_filez00_4811); 
FAILURE(BgL_auxz00_8229,BFALSE,BFALSE);} 
return 
BGl_filezd2lineszd2zz__r4_input_6_10_2z00(BgL_auxz00_8226);} } 
}



/* <anonymous:3119> */
obj_t BGl_zc3anonymousza33119ze3z83zz__r4_input_6_10_2z00(obj_t BgL_envz00_4812)
{ AN_OBJECT;
{ /* Ieee/input.scm 587 */
{ /* Ieee/input.scm 588 */
obj_t BgL_filez00_4813;
BgL_filez00_4813 = 
PROCEDURE_REF(BgL_envz00_4812, 
(int)(((long)0))); 
{ 

{ 
obj_t BgL_inputzd2portzd2_2864;long BgL_startz00_2865;
{ /* Ieee/input.scm 588 */
obj_t BgL_arg3120z00_4471;
{ /* Ieee/input.scm 588 */
obj_t BgL_res3653z00_4474;
{ /* Ieee/input.scm 588 */
obj_t BgL_auxz00_8236;
BgL_auxz00_8236 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3653z00_4474 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_8236); } 
BgL_arg3120z00_4471 = BgL_res3653z00_4474; } 
BgL_inputzd2portzd2_2864 = BgL_arg3120z00_4471; 
BgL_startz00_2865 = ((long)0); 
{ /* Ieee/input.scm 568 */
obj_t BgL_startz00_4824;
{ /* Ieee/input.scm 568 */
obj_t BgL_cellvalz00_8239;
BgL_cellvalz00_8239 = 
BINT(BgL_startz00_2865); 
BgL_startz00_4824 = 
MAKE_CELL(BgL_cellvalz00_8239); } 
if(
INPUT_PORT_CLOSEP(BgL_inputzd2portzd2_2864))
{ /* Ieee/input.scm 568 */
return 
BGl_errorz00zz__errorz00(BGl_string4329z00zz__r4_input_6_10_2z00, BGl_string4332z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_2864);}  else 
{ /* Ieee/input.scm 568 */
return 
BGl_ignorez00zz__r4_input_6_10_2z00(BgL_startz00_4824, BgL_filez00_4813, BgL_inputzd2portzd2_2864);} } } } } } } 
}



/* ignore */
obj_t BGl_ignorez00zz__r4_input_6_10_2z00(obj_t BgL_startz00_4822, obj_t BgL_filez00_4821, obj_t BgL_inputzd2portzd2_4820)
{ AN_OBJECT;
{ /* Ieee/input.scm 568 */
BGl_ignorez00zz__r4_input_6_10_2z00:
{ 
obj_t BgL_inputzd2portzd2_2923;long BgL_lastzd2matchzd2_2924;obj_t BgL_inputzd2portzd2_2910;long BgL_lastzd2matchzd2_2911;obj_t BgL_inputzd2portzd2_2901;long BgL_lastzd2matchzd2_2902;
RGC_START_MATCH(BgL_inputzd2portzd2_4820); 
{ /* Ieee/input.scm 568 */
long BgL_matchz00_3013;
BgL_inputzd2portzd2_2923 = BgL_inputzd2portzd2_4820; 
BgL_lastzd2matchzd2_2924 = ((long)2); 
BgL_zc3anonymousza33138ze3z83_2925:
{ /* Ieee/input.scm 568 */
int BgL_currentzd2charzd2_2926;
BgL_currentzd2charzd2_2926 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2923); 
if(
(
(long)(BgL_currentzd2charzd2_2926)==((long)0)))
{ /* Ieee/input.scm 568 */
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2923))
{ /* Ieee/input.scm 568 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_2923))
{ 

goto BgL_zc3anonymousza33138ze3z83_2925;}  else 
{ /* Ieee/input.scm 568 */
BgL_matchz00_3013 = BgL_lastzd2matchzd2_2924; } }  else 
{ /* Ieee/input.scm 568 */
BgL_inputzd2portzd2_2910 = BgL_inputzd2portzd2_2923; 
BgL_lastzd2matchzd2_2911 = BgL_lastzd2matchzd2_2924; 
BgL_zc3anonymousza33132ze3z83_2912:
{ /* Ieee/input.scm 568 */
long BgL_newzd2matchzd2_2913;
RGC_STOP_MATCH(BgL_inputzd2portzd2_2910); 
BgL_newzd2matchzd2_2913 = ((long)1); 
{ /* Ieee/input.scm 568 */
int BgL_currentzd2charzd2_2914;
BgL_currentzd2charzd2_2914 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2910); 
if(
(
(long)(BgL_currentzd2charzd2_2914)==((long)0)))
{ /* Ieee/input.scm 568 */
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2910))
{ /* Ieee/input.scm 568 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_2910))
{ 

goto BgL_zc3anonymousza33132ze3z83_2912;}  else 
{ /* Ieee/input.scm 568 */
BgL_matchz00_3013 = BgL_newzd2matchzd2_2913; } }  else 
{ /* Ieee/input.scm 568 */
BgL_inputzd2portzd2_2901 = BgL_inputzd2portzd2_2910; 
BgL_lastzd2matchzd2_2902 = BgL_newzd2matchzd2_2913; 
BgL_zc3anonymousza33127ze3z83_2903:
{ /* Ieee/input.scm 568 */
long BgL_newzd2matchzd2_2904;
RGC_STOP_MATCH(BgL_inputzd2portzd2_2901); 
BgL_newzd2matchzd2_2904 = ((long)1); 
{ /* Ieee/input.scm 568 */
int BgL_currentzd2charzd2_2905;
BgL_currentzd2charzd2_2905 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2901); 
if(
(
(long)(BgL_currentzd2charzd2_2905)==((long)0)))
{ /* Ieee/input.scm 568 */
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2901))
{ /* Ieee/input.scm 568 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_2901))
{ 

goto BgL_zc3anonymousza33127ze3z83_2903;}  else 
{ /* Ieee/input.scm 568 */
BgL_matchz00_3013 = BgL_newzd2matchzd2_2904; } }  else 
{ 
long BgL_lastzd2matchzd2_8272;
BgL_lastzd2matchzd2_8272 = BgL_newzd2matchzd2_2904; 
BgL_lastzd2matchzd2_2902 = BgL_lastzd2matchzd2_8272; 
goto BgL_zc3anonymousza33127ze3z83_2903;} }  else 
{ /* Ieee/input.scm 568 */
if(
(
(long)(BgL_currentzd2charzd2_2905)==((long)10)))
{ /* Ieee/input.scm 568 */
BgL_matchz00_3013 = BgL_newzd2matchzd2_2904; }  else 
{ 
long BgL_lastzd2matchzd2_8276;
BgL_lastzd2matchzd2_8276 = BgL_newzd2matchzd2_2904; 
BgL_lastzd2matchzd2_2902 = BgL_lastzd2matchzd2_8276; 
goto BgL_zc3anonymousza33127ze3z83_2903;} } } } } }  else 
{ /* Ieee/input.scm 568 */
if(
(
(long)(BgL_currentzd2charzd2_2914)==((long)10)))
{ /* Ieee/input.scm 568 */
BgL_matchz00_3013 = BgL_newzd2matchzd2_2913; }  else 
{ 
long BgL_lastzd2matchzd2_8281;obj_t BgL_inputzd2portzd2_8280;
BgL_inputzd2portzd2_8280 = BgL_inputzd2portzd2_2910; 
BgL_lastzd2matchzd2_8281 = BgL_newzd2matchzd2_2913; 
BgL_lastzd2matchzd2_2902 = BgL_lastzd2matchzd2_8281; 
BgL_inputzd2portzd2_2901 = BgL_inputzd2portzd2_8280; 
goto BgL_zc3anonymousza33127ze3z83_2903;} } } } } }  else 
{ /* Ieee/input.scm 568 */
if(
(
(long)(BgL_currentzd2charzd2_2926)==((long)10)))
{ /* Ieee/input.scm 568 */
long BgL_newzd2matchzd2_4505;
RGC_STOP_MATCH(BgL_inputzd2portzd2_2923); 
BgL_newzd2matchzd2_4505 = ((long)0); 
BgL_matchz00_3013 = BgL_newzd2matchzd2_4505; }  else 
{ 
long BgL_lastzd2matchzd2_8287;obj_t BgL_inputzd2portzd2_8286;
BgL_inputzd2portzd2_8286 = BgL_inputzd2portzd2_2923; 
BgL_lastzd2matchzd2_8287 = BgL_lastzd2matchzd2_2924; 
BgL_lastzd2matchzd2_2911 = BgL_lastzd2matchzd2_8287; 
BgL_inputzd2portzd2_2910 = BgL_inputzd2portzd2_8286; 
goto BgL_zc3anonymousza33132ze3z83_2912;} } } 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_4820); 
switch( BgL_matchz00_3013) { case ((long)2) : 

{ /* Ieee/input.scm 577 */
obj_t BgL_cz00_3017;
{ /* Ieee/input.scm 568 */
bool_t BgL_testz00_8289;
{ /* Ieee/input.scm 568 */
long BgL_arg3206z00_3002;
BgL_arg3206z00_3002 = 
RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_4820); 
BgL_testz00_8289 = 
(BgL_arg3206z00_3002==((long)0)); } 
if(BgL_testz00_8289)
{ /* Ieee/input.scm 568 */
BgL_cz00_3017 = BCNST(256); }  else 
{ /* Ieee/input.scm 568 */
BgL_cz00_3017 = 
BCHAR(
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_4820)); } } 
if(
EOF_OBJECTP(BgL_cz00_3017))
{ /* Ieee/input.scm 579 */
long BgL_stopz00_3019;
BgL_stopz00_3019 = 
INPUT_PORT_FILEPOS(BgL_inputzd2portzd2_4820); 
{ /* Ieee/input.scm 580 */
bool_t BgL_testz00_8297;
{ /* Ieee/input.scm 580 */
long BgL_n2z00_4517;
{ /* Ieee/input.scm 580 */
obj_t BgL_auxz00_8298;
{ /* Ieee/input.scm 580 */
obj_t BgL_aux4297z00_5468;
BgL_aux4297z00_5468 = 
CELL_REF(BgL_startz00_4822); 
if(
INTEGERP(BgL_aux4297z00_5468))
{ /* Ieee/input.scm 580 */
BgL_auxz00_8298 = BgL_aux4297z00_5468
; }  else 
{ 
obj_t BgL_auxz00_8301;
BgL_auxz00_8301 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)22110)), BGl_string4328z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_aux4297z00_5468); 
FAILURE(BgL_auxz00_8301,BFALSE,BFALSE);} } 
BgL_n2z00_4517 = 
(long)CINT(BgL_auxz00_8298); } 
BgL_testz00_8297 = 
(BgL_stopz00_3019>BgL_n2z00_4517); } 
if(BgL_testz00_8297)
{ /* Ieee/input.scm 581 */
obj_t BgL_arg3217z00_3021;
BgL_arg3217z00_3021 = 
MAKE_PAIR(
CELL_REF(BgL_startz00_4822), 
BINT(BgL_stopz00_3019)); 
{ /* Ieee/input.scm 581 */
obj_t BgL_list3218z00_3022;
BgL_list3218z00_3022 = 
MAKE_PAIR(BgL_arg3217z00_3021, BNIL); 
return BgL_list3218z00_3022;} }  else 
{ /* Ieee/input.scm 580 */
return BNIL;} } }  else 
{ /* Ieee/input.scm 578 */
return 
BGl_errorz00zz__errorz00(BGl_symbol4492z00zz__r4_input_6_10_2z00, BGl_string4494z00zz__r4_input_6_10_2z00, BgL_filez00_4821);} } break;case ((long)1) : 

{ 

goto BGl_ignorez00zz__r4_input_6_10_2z00;} break;case ((long)0) : 

{ /* Ieee/input.scm 570 */
long BgL_stopz00_3024;
BgL_stopz00_3024 = 
INPUT_PORT_FILEPOS(BgL_inputzd2portzd2_4820); 
{ /* Ieee/input.scm 570 */
obj_t BgL_descz00_3025;
BgL_descz00_3025 = 
MAKE_PAIR(
CELL_REF(BgL_startz00_4822), 
BINT(BgL_stopz00_3024)); 
{ /* Ieee/input.scm 571 */

{ /* Ieee/input.scm 572 */
obj_t BgL_auxz00_4823;
BgL_auxz00_4823 = 
BINT(
(((long)1)+BgL_stopz00_3024)); 
CELL_SET(BgL_startz00_4822, BgL_auxz00_4823); } 
return 
MAKE_PAIR(BgL_descz00_3025, 
BGl_ignorez00zz__r4_input_6_10_2z00(BgL_startz00_4822, BgL_filez00_4821, BgL_inputzd2portzd2_4820));} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string4329z00zz__r4_input_6_10_2z00, BGl_string4330z00zz__r4_input_6_10_2z00, 
BINT(BgL_matchz00_3013));} } } } 
}



/* file-position->line */
BGL_EXPORTED_DEF obj_t BGl_filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00(int BgL_posz00_91, obj_t BgL_fdescz00_92)
{ AN_OBJECT;
{ /* Ieee/input.scm 593 */
if(
PAIRP(BgL_fdescz00_92))
{ 
obj_t BgL_flinesz00_3060;long BgL_linez00_3061;
BgL_flinesz00_3060 = BgL_fdescz00_92; 
BgL_linez00_3061 = ((long)1); 
BgL_zc3anonymousza33223ze3z83_3062:
if(
NULLP(BgL_flinesz00_3060))
{ /* Ieee/input.scm 599 */
return BFALSE;}  else 
{ /* Ieee/input.scm 601 */
bool_t BgL_testz00_8325;
{ /* Ieee/input.scm 601 */
long BgL_n1z00_4530;long BgL_n2z00_4531;
BgL_n1z00_4530 = 
(long)(BgL_posz00_91); 
{ /* Ieee/input.scm 601 */
obj_t BgL_pairz00_4526;
if(
PAIRP(BgL_flinesz00_3060))
{ /* Ieee/input.scm 601 */
BgL_pairz00_4526 = BgL_flinesz00_3060; }  else 
{ 
obj_t BgL_auxz00_8329;
BgL_auxz00_8329 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)22747)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4379z00zz__r4_input_6_10_2z00, BgL_flinesz00_3060); 
FAILURE(BgL_auxz00_8329,BFALSE,BFALSE);} 
{ /* Ieee/input.scm 601 */
obj_t BgL_pairz00_4529;
{ /* Ieee/input.scm 601 */
obj_t BgL_aux4301z00_5472;
BgL_aux4301z00_5472 = 
CAR(BgL_pairz00_4526); 
if(
PAIRP(BgL_aux4301z00_5472))
{ /* Ieee/input.scm 601 */
BgL_pairz00_4529 = BgL_aux4301z00_5472; }  else 
{ 
obj_t BgL_auxz00_8336;
BgL_auxz00_8336 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)22741)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4379z00zz__r4_input_6_10_2z00, BgL_aux4301z00_5472); 
FAILURE(BgL_auxz00_8336,BFALSE,BFALSE);} } 
{ /* Ieee/input.scm 601 */
obj_t BgL_auxz00_8340;
{ /* Ieee/input.scm 601 */
obj_t BgL_aux4303z00_5474;
BgL_aux4303z00_5474 = 
CDR(BgL_pairz00_4529); 
if(
INTEGERP(BgL_aux4303z00_5474))
{ /* Ieee/input.scm 601 */
BgL_auxz00_8340 = BgL_aux4303z00_5474
; }  else 
{ 
obj_t BgL_auxz00_8344;
BgL_auxz00_8344 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)22741)), BGl_string4408z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_aux4303z00_5474); 
FAILURE(BgL_auxz00_8344,BFALSE,BFALSE);} } 
BgL_n2z00_4531 = 
(long)CINT(BgL_auxz00_8340); } } } 
BgL_testz00_8325 = 
(BgL_n1z00_4530>=BgL_n2z00_4531); } 
if(BgL_testz00_8325)
{ 
long BgL_linez00_8352;obj_t BgL_flinesz00_8350;
BgL_flinesz00_8350 = 
CDR(BgL_flinesz00_3060); 
BgL_linez00_8352 = 
(BgL_linez00_3061+((long)1)); 
BgL_linez00_3061 = BgL_linez00_8352; 
BgL_flinesz00_3060 = BgL_flinesz00_8350; 
goto BgL_zc3anonymousza33223ze3z83_3062;}  else 
{ /* Ieee/input.scm 601 */
return 
BINT(BgL_linez00_3061);} } }  else 
{ /* Ieee/input.scm 595 */
if(
STRINGP(BgL_fdescz00_92))
{ /* Ieee/input.scm 605 */
if(
fexists(
BSTRING_TO_STRING(BgL_fdescz00_92)))
{ /* Ieee/input.scm 621 */
obj_t BgL_zc3anonymousza33233ze3z83_4814;
BgL_zc3anonymousza33233ze3z83_4814 = 
make_fx_procedure(BGl_zc3anonymousza33233ze3z83zz__r4_input_6_10_2z00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3anonymousza33233ze3z83_4814, 
(int)(((long)0)), 
BINT(BgL_posz00_91)); 
return 
BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(BgL_fdescz00_92, BgL_zc3anonymousza33233ze3z83_4814);}  else 
{ /* Ieee/input.scm 617 */
return BFALSE;} }  else 
{ /* Ieee/input.scm 605 */
return BNIL;} } } 
}



/* _file-position->line */
obj_t BGl__filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00(obj_t BgL_envz00_4815, obj_t BgL_posz00_4816, obj_t BgL_fdescz00_4817)
{ AN_OBJECT;
{ /* Ieee/input.scm 593 */
{ /* Ieee/input.scm 595 */
int BgL_auxz00_8367;
{ /* Ieee/input.scm 595 */
obj_t BgL_auxz00_8368;
if(
INTEGERP(BgL_posz00_4816))
{ /* Ieee/input.scm 595 */
BgL_auxz00_8368 = BgL_posz00_4816
; }  else 
{ 
obj_t BgL_auxz00_8371;
BgL_auxz00_8371 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)22621)), BGl_string4495z00zz__r4_input_6_10_2z00, BGl_string4450z00zz__r4_input_6_10_2z00, BgL_posz00_4816); 
FAILURE(BgL_auxz00_8371,BFALSE,BFALSE);} 
BgL_auxz00_8367 = 
CINT(BgL_auxz00_8368); } 
return 
BGl_filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00(BgL_auxz00_8367, BgL_fdescz00_4817);} } 
}



/* <anonymous:3233> */
obj_t BGl_zc3anonymousza33233ze3z83zz__r4_input_6_10_2z00(obj_t BgL_envz00_4818)
{ AN_OBJECT;
{ /* Ieee/input.scm 620 */
{ /* Ieee/input.scm 621 */
obj_t BgL_posz00_4819;
BgL_posz00_4819 = 
PROCEDURE_REF(BgL_envz00_4818, 
(int)(((long)0))); 
{ 

{ 
obj_t BgL_inputzd2portzd2_3078;obj_t BgL_posz00_3079;long BgL_linez00_3080;
{ /* Ieee/input.scm 621 */
obj_t BgL_arg3234z00_3074;
{ /* Ieee/input.scm 621 */
obj_t BgL_res3659z00_4538;
{ /* Ieee/input.scm 621 */
obj_t BgL_auxz00_8379;
BgL_auxz00_8379 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3659z00_4538 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_8379); } 
BgL_arg3234z00_3074 = BgL_res3659z00_4538; } 
BgL_inputzd2portzd2_3078 = BgL_arg3234z00_3074; 
BgL_posz00_3079 = BgL_posz00_4819; 
BgL_linez00_3080 = ((long)1); 
{ 
obj_t BgL_inputzd2portzd2_3116;long BgL_lastzd2matchzd2_3117;obj_t BgL_inputzd2portzd2_3125;long BgL_lastzd2matchzd2_3126;obj_t BgL_inputzd2portzd2_3138;long BgL_lastzd2matchzd2_3139;
if(
INPUT_PORT_CLOSEP(BgL_inputzd2portzd2_3078))
{ /* Ieee/input.scm 606 */
return 
BGl_errorz00zz__errorz00(BGl_string4329z00zz__r4_input_6_10_2z00, BGl_string4332z00zz__r4_input_6_10_2z00, BgL_inputzd2portzd2_3078);}  else 
{ /* Ieee/input.scm 606 */
BgL_zc3anonymousza33324ze3z83_3227:
RGC_START_MATCH(BgL_inputzd2portzd2_3078); 
{ /* Ieee/input.scm 606 */
long BgL_matchz00_3228;
BgL_inputzd2portzd2_3138 = BgL_inputzd2portzd2_3078; 
BgL_lastzd2matchzd2_3139 = ((long)2); 
BgL_zc3anonymousza33252ze3z83_3140:
{ /* Ieee/input.scm 606 */
int BgL_currentzd2charzd2_3141;
BgL_currentzd2charzd2_3141 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3138); 
if(
(
(long)(BgL_currentzd2charzd2_3141)==((long)0)))
{ /* Ieee/input.scm 606 */
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3138))
{ /* Ieee/input.scm 606 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_3138))
{ 

goto BgL_zc3anonymousza33252ze3z83_3140;}  else 
{ /* Ieee/input.scm 606 */
BgL_matchz00_3228 = BgL_lastzd2matchzd2_3139; } }  else 
{ /* Ieee/input.scm 606 */
BgL_inputzd2portzd2_3125 = BgL_inputzd2portzd2_3138; 
BgL_lastzd2matchzd2_3126 = BgL_lastzd2matchzd2_3139; 
BgL_zc3anonymousza33246ze3z83_3127:
{ /* Ieee/input.scm 606 */
long BgL_newzd2matchzd2_3128;
RGC_STOP_MATCH(BgL_inputzd2portzd2_3125); 
BgL_newzd2matchzd2_3128 = ((long)1); 
{ /* Ieee/input.scm 606 */
int BgL_currentzd2charzd2_3129;
BgL_currentzd2charzd2_3129 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3125); 
if(
(
(long)(BgL_currentzd2charzd2_3129)==((long)0)))
{ /* Ieee/input.scm 606 */
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3125))
{ /* Ieee/input.scm 606 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_3125))
{ 

goto BgL_zc3anonymousza33246ze3z83_3127;}  else 
{ /* Ieee/input.scm 606 */
BgL_matchz00_3228 = BgL_newzd2matchzd2_3128; } }  else 
{ /* Ieee/input.scm 606 */
BgL_inputzd2portzd2_3116 = BgL_inputzd2portzd2_3125; 
BgL_lastzd2matchzd2_3117 = BgL_newzd2matchzd2_3128; 
BgL_zc3anonymousza33241ze3z83_3118:
{ /* Ieee/input.scm 606 */
long BgL_newzd2matchzd2_3119;
RGC_STOP_MATCH(BgL_inputzd2portzd2_3116); 
BgL_newzd2matchzd2_3119 = ((long)1); 
{ /* Ieee/input.scm 606 */
int BgL_currentzd2charzd2_3120;
BgL_currentzd2charzd2_3120 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3116); 
if(
(
(long)(BgL_currentzd2charzd2_3120)==((long)0)))
{ /* Ieee/input.scm 606 */
if(
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3116))
{ /* Ieee/input.scm 606 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_3116))
{ 

goto BgL_zc3anonymousza33241ze3z83_3118;}  else 
{ /* Ieee/input.scm 606 */
BgL_matchz00_3228 = BgL_newzd2matchzd2_3119; } }  else 
{ 
long BgL_lastzd2matchzd2_8412;
BgL_lastzd2matchzd2_8412 = BgL_newzd2matchzd2_3119; 
BgL_lastzd2matchzd2_3117 = BgL_lastzd2matchzd2_8412; 
goto BgL_zc3anonymousza33241ze3z83_3118;} }  else 
{ /* Ieee/input.scm 606 */
if(
(
(long)(BgL_currentzd2charzd2_3120)==((long)10)))
{ /* Ieee/input.scm 606 */
BgL_matchz00_3228 = BgL_newzd2matchzd2_3119; }  else 
{ 
long BgL_lastzd2matchzd2_8416;
BgL_lastzd2matchzd2_8416 = BgL_newzd2matchzd2_3119; 
BgL_lastzd2matchzd2_3117 = BgL_lastzd2matchzd2_8416; 
goto BgL_zc3anonymousza33241ze3z83_3118;} } } } } }  else 
{ /* Ieee/input.scm 606 */
if(
(
(long)(BgL_currentzd2charzd2_3129)==((long)10)))
{ /* Ieee/input.scm 606 */
BgL_matchz00_3228 = BgL_newzd2matchzd2_3128; }  else 
{ 
long BgL_lastzd2matchzd2_8421;obj_t BgL_inputzd2portzd2_8420;
BgL_inputzd2portzd2_8420 = BgL_inputzd2portzd2_3125; 
BgL_lastzd2matchzd2_8421 = BgL_newzd2matchzd2_3128; 
BgL_lastzd2matchzd2_3117 = BgL_lastzd2matchzd2_8421; 
BgL_inputzd2portzd2_3116 = BgL_inputzd2portzd2_8420; 
goto BgL_zc3anonymousza33241ze3z83_3118;} } } } } }  else 
{ /* Ieee/input.scm 606 */
if(
(
(long)(BgL_currentzd2charzd2_3141)==((long)10)))
{ /* Ieee/input.scm 606 */
long BgL_newzd2matchzd2_4569;
RGC_STOP_MATCH(BgL_inputzd2portzd2_3138); 
BgL_newzd2matchzd2_4569 = ((long)0); 
BgL_matchz00_3228 = BgL_newzd2matchzd2_4569; }  else 
{ 
long BgL_lastzd2matchzd2_8427;obj_t BgL_inputzd2portzd2_8426;
BgL_inputzd2portzd2_8426 = BgL_inputzd2portzd2_3138; 
BgL_lastzd2matchzd2_8427 = BgL_lastzd2matchzd2_3139; 
BgL_lastzd2matchzd2_3126 = BgL_lastzd2matchzd2_8427; 
BgL_inputzd2portzd2_3125 = BgL_inputzd2portzd2_8426; 
goto BgL_zc3anonymousza33246ze3z83_3127;} } } 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_3078); 
switch( BgL_matchz00_3228) { case ((long)2) : 

return BNIL;break;case ((long)1) : 

goto BgL_zc3anonymousza33324ze3z83_3227;break;case ((long)0) : 

{ /* Ieee/input.scm 608 */
bool_t BgL_testz00_8429;
{ /* Ieee/input.scm 608 */
long BgL_arg3327z00_3233;
BgL_arg3327z00_3233 = 
INPUT_PORT_FILEPOS(BgL_inputzd2portzd2_3078); 
{ /* Ieee/input.scm 608 */
long BgL_n2z00_4576;
{ /* Ieee/input.scm 608 */
obj_t BgL_auxz00_8431;
if(
INTEGERP(BgL_posz00_3079))
{ /* Ieee/input.scm 608 */
BgL_auxz00_8431 = BgL_posz00_3079
; }  else 
{ 
obj_t BgL_auxz00_8434;
BgL_auxz00_8434 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)22966)), BGl_string4328z00zz__r4_input_6_10_2z00, BGl_string4419z00zz__r4_input_6_10_2z00, BgL_posz00_3079); 
FAILURE(BgL_auxz00_8434,BFALSE,BFALSE);} 
BgL_n2z00_4576 = 
(long)CINT(BgL_auxz00_8431); } 
BgL_testz00_8429 = 
(BgL_arg3327z00_3233>=BgL_n2z00_4576); } } 
if(BgL_testz00_8429)
{ /* Ieee/input.scm 608 */
return 
BINT(BgL_linez00_3080);}  else 
{ /* Ieee/input.scm 608 */
BgL_linez00_3080 = 
(BgL_linez00_3080+((long)1)); 
goto BgL_zc3anonymousza33324ze3z83_3227;} } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string4329z00zz__r4_input_6_10_2z00, BGl_string4330z00zz__r4_input_6_10_2z00, 
BINT(BgL_matchz00_3228));} } } } } } } } } 
}



/* _password */
obj_t BGl__passwordz00zz__r4_input_6_10_2z00(obj_t BgL_envz00_95, obj_t BgL_optz00_94)
{ AN_OBJECT;
{ /* Ieee/input.scm 628 */
{ /* Ieee/input.scm 628 */

{ 

{ /* Ieee/input.scm 628 */
int BgL_aux2058z00_5505;
BgL_aux2058z00_5505 = 
VECTOR_LENGTH(BgL_optz00_94); 
switch( 
(long)(BgL_aux2058z00_5505)) { case ((long)0) : 

{ /* Ieee/input.scm 628 */

return 
bgl_password(
BSTRING_TO_STRING(BGl_string4402z00zz__r4_input_6_10_2z00));} break;case ((long)1) : 

{ /* Ieee/input.scm 628 */
obj_t BgL_promptz00_5506;
BgL_promptz00_5506 = 
VECTOR_REF(BgL_optz00_94,
(int)(((long)0))); 
{ /* Ieee/input.scm 628 */

{ /* Ieee/input.scm 628 */
obj_t BgL_promptz00_5507;
if(
STRINGP(BgL_promptz00_5506))
{ /* Ieee/input.scm 628 */
BgL_promptz00_5507 = BgL_promptz00_5506; }  else 
{ 
obj_t BgL_auxz00_8452;
BgL_auxz00_8452 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4314z00zz__r4_input_6_10_2z00, 
BINT(((long)23519)), BGl_string4498z00zz__r4_input_6_10_2z00, BGl_string4326z00zz__r4_input_6_10_2z00, BgL_promptz00_5506); 
FAILURE(BgL_auxz00_8452,BFALSE,BFALSE);} 
return 
bgl_password(
BSTRING_TO_STRING(BgL_promptz00_5507));} } } break;
default: 
{ /* Ieee/input.scm 628 */
obj_t BgL_arg3330z00_5503;int BgL_arg3332z00_5504;
BgL_arg3330z00_5503 = BGl_symbol4496z00zz__r4_input_6_10_2z00; 
BgL_arg3332z00_5504 = 
VECTOR_LENGTH(BgL_optz00_94); 
return 
BGl_errorz00zz__errorz00(BgL_arg3330z00_5503, BGl_string4386z00zz__r4_input_6_10_2z00, 
BINT(BgL_arg3332z00_5504));} } } } } } 
}



/* password */
BGL_EXPORTED_DEF obj_t BGl_passwordz00zz__r4_input_6_10_2z00(obj_t BgL_promptz00_93)
{ AN_OBJECT;
{ /* Ieee/input.scm 628 */
return 
bgl_password(
BSTRING_TO_STRING(BgL_promptz00_93));} 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__r4_input_6_10_2z00()
{ AN_OBJECT;
{ /* Ieee/input.scm 14 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__r4_input_6_10_2z00()
{ AN_OBJECT;
{ /* Ieee/input.scm 14 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r4_input_6_10_2z00()
{ AN_OBJECT;
{ /* Ieee/input.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string4499z00zz__r4_input_6_10_2z00)); 
BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long)466504979), 
BSTRING_TO_STRING(BGl_string4499z00zz__r4_input_6_10_2z00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string4499z00zz__r4_input_6_10_2z00)); 
return 
BGl_modulezd2initializa7ationz75zz__gunza7ipza7(((long)23251724), 
BSTRING_TO_STRING(BGl_string4499z00zz__r4_input_6_10_2z00));} 
}

#ifdef __cplusplus
}
#endif
