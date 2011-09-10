/*===========================================================================*/
/*   (Ieee/input.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Ieee/input.scm -indent -o objs/obj_u/Ieee/input.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_z62iozd2errorzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                       *BgL_z62iozd2errorzb0_bglt;


	static obj_t BGl__passwordz00zz__r4_input_6_10_2z00(obj_t, obj_t);
	extern obj_t bgl_password(char *);
	BGL_EXPORTED_DECL obj_t BGl_readzf2rpzf2zz__r4_input_6_10_2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__readzd2charzd2zz__r4_input_6_10_2z00(obj_t, obj_t);
	static obj_t BGl__unreadzd2stringz12zc0zz__r4_input_6_10_2z00(obj_t, obj_t);
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_readzd2linezd2zz__r4_input_6_10_2z00(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern long bgl_rgc_blit_string(obj_t, char *, long, long);
	extern obj_t make_string_sans_fill(long);
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_input_6_10_2z00 =
		BUNSPEC;
	extern bool_t rgc_buffer_insert_char(obj_t, int);
	BGL_EXPORTED_DECL long
		BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00(obj_t, obj_t, long,
		long);
	BGL_EXPORTED_DECL obj_t
		BGl_portzd2ze3stringzd2listze3zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__r4_input_6_10_2z00();
	BGL_EXPORTED_DECL obj_t
		BGl_unreadzd2substringz12zc0zz__r4_input_6_10_2z00(obj_t, long, long,
		obj_t);
	static int BGl_z52sendcharsz52zz__r4_input_6_10_2z00(obj_t, obj_t, long,
		long);
	extern bool_t fexists(char *);
	extern obj_t BGl_stringzd2indexzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
	static obj_t BGl__readzf2lalrpzf2zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern int default_io_bufsiz;
	BGL_EXPORTED_DECL long BGl_sendzd2charszd2zz__r4_input_6_10_2z00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_unreadzd2stringz12zc0zz__r4_input_6_10_2z00(obj_t,
		obj_t);
	static obj_t BGl__filezd2ze3stringz31zz__r4_input_6_10_2z00(obj_t, obj_t);
	static obj_t BGl__charzd2readyzf3z21zz__r4_input_6_10_2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_peekzd2bytezd2zz__r4_input_6_10_2z00(obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_readzd2bytezd2zz__r4_input_6_10_2z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_eofzd2objectzf3z21zz__r4_input_6_10_2z00(obj_t);
	extern obj_t bgl_file_to_string(char *);
	BGL_EXPORTED_DECL obj_t
		BGl_filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00(int, obj_t);
	static obj_t BGl__sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__r4_input_6_10_2z00();
	static obj_t BGl__readzd2charszd2zz__r4_input_6_10_2z00(obj_t, obj_t);
	extern obj_t bgl_find_runtime_type(obj_t);
	static obj_t BGl__unreadzd2charz12zc0zz__r4_input_6_10_2z00(obj_t, obj_t);
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl__portzd2ze3stringzd2listze3zz__r4_input_6_10_2z00(obj_t,
		obj_t);
	extern obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl__unreadzd2substringz12zc0zz__r4_input_6_10_2z00(obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__r4_input_6_10_2z00();
	BGL_EXPORTED_DECL obj_t BGl_filezd2ze3stringz31zz__r4_input_6_10_2z00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_readzd2stringzd2zz__r4_input_6_10_2z00(obj_t);
	BGL_EXPORTED_DECL long BGl_sendzd2filezd2zz__r4_input_6_10_2z00(obj_t, obj_t,
		long, long);
	extern obj_t BGl_gunza7ipzd2sendcharsz75zz__gunza7ipza7(obj_t, obj_t);
	extern bool_t rgc_buffer_eof_p(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_unreadzd2charz12zc0zz__r4_input_6_10_2z00(unsigned
		char, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol3654z00zz__r4_input_6_10_2z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_peekzd2charzd2zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_symbol3664z00zz__r4_input_6_10_2z00 = BUNSPEC;
	static obj_t BGl_symbol3670z00zz__r4_input_6_10_2z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_readzf2lalrpzf2zz__r4_input_6_10_2z00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_symbol3676z00zz__r4_input_6_10_2z00 = BUNSPEC;
	static obj_t BGl_zc3exitza32985ze3z83zz__r4_input_6_10_2z00(obj_t);
	extern obj_t bgl_sendfile(obj_t, obj_t, long, long);
	static obj_t BGl_symbol3680z00zz__r4_input_6_10_2z00 = BUNSPEC;
	static obj_t BGl_symbol3684z00zz__r4_input_6_10_2z00 = BUNSPEC;
	static obj_t BGl__readzf2rpzf2zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol3687z00zz__r4_input_6_10_2z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_readzd2charzd2zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_symbol3690z00zz__r4_input_6_10_2z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__gunza7ipza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_symbol3705z00zz__r4_input_6_10_2z00 = BUNSPEC;
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_symbol3699z00zz__r4_input_6_10_2z00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zz__r4_input_6_10_2z00();
	static obj_t BGl__filezd2lineszd2zz__r4_input_6_10_2z00(obj_t, obj_t);
	extern obj_t BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern bool_t rgc_buffer_insert_substring(obj_t, obj_t, long, long);
	extern obj_t make_string(long, unsigned char);
	extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	extern obj_t rgc_buffer_substring(obj_t, long, long);
	static obj_t BGl__readzd2lineszd2zz__r4_input_6_10_2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_readzd2charszd2zz__r4_input_6_10_2z00(obj_t,
		obj_t);
	static obj_t BGl__eofzd2objectzf3z21zz__r4_input_6_10_2z00(obj_t, obj_t);
	static obj_t BGl__readzd2linezd2zz__r4_input_6_10_2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_readzd2ofzd2stringsz00zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_zc3anonymousza33124ze3z83zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00
		= BUNSPEC;
	BGL_EXPORTED_DECL int
		BGl_readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00(obj_t, long, long,
		obj_t);
	extern obj_t blit_string(obj_t, long, obj_t, long, long);
	extern obj_t bgl_input_port_seek(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_passwordz00zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl__readzd2stringzd2zz__r4_input_6_10_2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_readzd2linezd2newlinez00zz__r4_input_6_10_2z00(obj_t);
	extern obj_t bgl_system_failure(int, obj_t, obj_t, obj_t);
	extern BgL_z62iozd2errorzb0_bglt
		BGl_makezd2z62iozd2errorz62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
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
	extern bool_t BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33016ze3z83zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl__readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00(obj_t,
		obj_t);
	extern obj_t BGl_raisez00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_readzd2lineszd2zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl__sendzd2charszd2zz__r4_input_6_10_2z00(obj_t, obj_t);
	extern obj_t BGl_getzd2tracezd2stackz00zz__errorz00(obj_t);
	static obj_t BGl_zc3exitza33013ze3z83zz__r4_input_6_10_2z00(long, long, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_charzd2readyzf3z21zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl__sendzd2filezd2zz__r4_input_6_10_2z00(obj_t, obj_t);
	static obj_t BGl__readzd2linezd2newlinez00zz__r4_input_6_10_2z00(obj_t,
		obj_t);
	static obj_t BGl_ignorez00zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__r4_input_6_10_2z00();
	extern int rgc_buffer_unget_char(obj_t, int);
	static obj_t BGl__peekzd2charzd2zz__r4_input_6_10_2z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32086ze3z83zz__r4_input_6_10_2z00(obj_t,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_passwordzd2envzd2zz__r4_input_6_10_2z00,
		BgL_bgl__passwordza700za7za7__3712za7, opt_generic_entry,
		BGl__passwordz00zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sendzd2charszd2envz00zz__r4_input_6_10_2z00,
		BgL_bgl__sendza7d2charsza7d23713z00, opt_generic_entry,
		BGl__sendzd2charszd2zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_readzd2lineszd2envz00zz__r4_input_6_10_2z00,
		BgL_bgl__readza7d2linesza7d23714z00, opt_generic_entry,
		BGl__readzd2lineszd2zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_readzd2charzd2envz00zz__r4_input_6_10_2z00,
		BgL_bgl__readza7d2charza7d2za73715za7, opt_generic_entry,
		BGl__readzd2charzd2zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unreadzd2stringz12zd2envz12zz__r4_input_6_10_2z00,
		BgL_bgl__unreadza7d2string3716za7, opt_generic_entry,
		BGl__unreadzd2stringz12zc0zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_readzf2lalrpzd2envz20zz__r4_input_6_10_2z00,
		BgL_bgl__readza7f2lalrpza7f23717z00, va_generic_entry,
		BGl__readzf2lalrpzf2zz__r4_input_6_10_2z00, BUNSPEC, -4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unreadzd2charz12zd2envz12zz__r4_input_6_10_2z00,
		BgL_bgl__unreadza7d2charza713718z00, opt_generic_entry,
		BGl__unreadzd2charz12zc0zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_readzd2fillzd2stringz12zd2envzc0zz__r4_input_6_10_2z00,
		BgL_bgl__readza7d2fillza7d2s3719z00, opt_generic_entry,
		BGl__readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filezd2ze3stringzd2envze3zz__r4_input_6_10_2z00,
		BgL_bgl__fileza7d2za7e3strin3720z00,
		BGl__filezd2ze3stringz31zz__r4_input_6_10_2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sendzd2charszf2siza7ezd2envz55zz__r4_input_6_10_2z00,
		BgL_bgl__sendza7d2charsza7f23721z00,
		BGl__sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_readzd2linezd2envz00zz__r4_input_6_10_2z00,
		BgL_bgl__readza7d2lineza7d2za73722za7, opt_generic_entry,
		BGl__readzd2linezd2zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_readzd2bytezd2envz00zz__r4_input_6_10_2z00,
		BgL_bgl__readza7d2byteza7d2za73723za7, opt_generic_entry,
		BGl__readzd2bytezd2zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_eofzd2objectzf3zd2envzf3zz__r4_input_6_10_2z00,
		BgL_bgl__eofza7d2objectza7f33724z00,
		BGl__eofzd2objectzf3z21zz__r4_input_6_10_2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_filezd2lineszd2envz00zz__r4_input_6_10_2z00,
		BgL_bgl__fileza7d2linesza7d23725z00,
		BGl__filezd2lineszd2zz__r4_input_6_10_2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unreadzd2substringz12zd2envz12zz__r4_input_6_10_2z00,
		BgL_bgl__unreadza7d2substr3726za7, opt_generic_entry,
		BGl__unreadzd2substringz12zc0zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_readzd2ofzd2stringszd2envzd2zz__r4_input_6_10_2z00,
		BgL_bgl__readza7d2ofza7d2str3727z00, opt_generic_entry,
		BGl__readzd2ofzd2stringsz00zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_readzd2stringzd2envz00zz__r4_input_6_10_2z00,
		BgL_bgl__readza7d2stringza7d3728z00, opt_generic_entry,
		BGl__readzd2stringzd2zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_readzd2charsz12zd2envz12zz__r4_input_6_10_2z00,
		BgL_bgl__readza7d2charsza7123729z00, opt_generic_entry,
		BGl__readzd2charsz12zc0zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_peekzd2charzd2envz00zz__r4_input_6_10_2z00,
		BgL_bgl__peekza7d2charza7d2za73730za7, opt_generic_entry,
		BGl__peekzd2charzd2zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_readzd2linezd2newlinezd2envzd2zz__r4_input_6_10_2z00,
		BgL_bgl__readza7d2lineza7d2n3731z00, opt_generic_entry,
		BGl__readzd2linezd2newlinez00zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sendzd2filezd2envz00zz__r4_input_6_10_2z00,
		BgL_bgl__sendza7d2fileza7d2za73732za7, opt_generic_entry,
		BGl__sendzd2filezd2zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2readyzf3zd2envzf3zz__r4_input_6_10_2z00,
		BgL_bgl__charza7d2readyza7f33733z00, opt_generic_entry,
		BGl__charzd2readyzf3z21zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_readzf2rpzd2envz20zz__r4_input_6_10_2z00,
		BgL_bgl__readza7f2rpza7f2za7za7_3734z00, va_generic_entry,
		BGl__readzf2rpzf2zz__r4_input_6_10_2z00, BUNSPEC, -3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filezd2positionzd2ze3linezd2envz31zz__r4_input_6_10_2z00,
		BgL_bgl__fileza7d2position3735za7,
		BGl__filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_portzd2ze3stringzd2listzd2envz31zz__r4_input_6_10_2z00,
		BgL_bgl__portza7d2za7e3strin3736z00,
		BGl__portzd2ze3stringzd2listze3zz__r4_input_6_10_2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_readzd2charszd2envz00zz__r4_input_6_10_2z00,
		BgL_bgl__readza7d2charsza7d23737z00, opt_generic_entry,
		BGl__readzd2charszd2zz__r4_input_6_10_2z00, BFALSE, -1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3649z00zz__r4_input_6_10_2z00,
		BgL_bgl_za7c3anonymousza7a323738z00,
		BGl_zc3anonymousza32086ze3z83zz__r4_input_6_10_2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_peekzd2bytezd2envz00zz__r4_input_6_10_2z00,
		BgL_bgl__peekza7d2byteza7d2za73739za7, opt_generic_entry,
		BGl__peekzd2bytezd2zz__r4_input_6_10_2z00, BFALSE, -1);
	      DEFINE_STRING(BGl_string3650z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3650za700za7za7_3740za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string3651z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3651za700za7za7_3741za7, "Illegal match", 13);
	      DEFINE_STRING(BGl_string3652z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3652za700za7za7_3742za7, "Illegal range `~a'", 18);
	      DEFINE_STRING(BGl_string3653z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3653za700za7za7_3743za7, "the-substring", 13);
	      DEFINE_STRING(BGl_string3655z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3655za700za7za7_3744za7, "read/rp", 7);
	      DEFINE_STRING(BGl_string3656z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3656za700za7za7_3745za7, "Grammar arity mismatch", 22);
	      DEFINE_STRING(BGl_string3657z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3657za700za7za7_3746za7, "/tmp/bigloo/runtime/Ieee/input.scm",
		34);
	      DEFINE_STRING(BGl_string3658z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3658za700za7za7_3747za7, "_read/rp", 8);
	      DEFINE_STRING(BGl_string3660z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3660za700za7za7_3748za7, "input-port", 10);
	      DEFINE_STRING(BGl_string3659z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3659za700za7za7_3749za7, "procedure", 9);
	      DEFINE_STRING(BGl_string3661z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3661za700za7za7_3750za7, "_read/lalrp", 11);
	      DEFINE_STRING(BGl_string3662z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3662za700za7za7_3751za7, "_char-ready?", 12);
	      DEFINE_STRING(BGl_string3663z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3663za700za7za7_3752za7, "", 0);
	      DEFINE_STRING(BGl_string3665z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3665za700za7za7_3753za7, "read-chars", 10);
	      DEFINE_STRING(BGl_string3666z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3666za700za7za7_3754za7, "integer", 7);
	      DEFINE_STRING(BGl_string3667z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3667za700za7za7_3755za7, "Illegal negative length", 23);
	      DEFINE_STRING(BGl_string3668z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3668za700za7za7_3756za7, "_read-chars!", 12);
	      DEFINE_STRING(BGl_string3669z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3669za700za7za7_3757za7, "bstring", 7);
	      DEFINE_STRING(BGl_string3671z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3671za700za7za7_3758za7, "read-chars!", 11);
	      DEFINE_STRING(BGl_string3672z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3672za700za7za7_3759za7, "_read-fill-string!", 18);
	      DEFINE_STRING(BGl_string3673z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3673za700za7za7_3760za7, "long", 4);
	      DEFINE_STRING(BGl_string3674z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3674za700za7za7_3761za7, "_unread-char!", 13);
	      DEFINE_STRING(BGl_string3675z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3675za700za7za7_3762za7, "char", 4);
	      DEFINE_STRING(BGl_string3677z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3677za700za7za7_3763za7, "unread-char!", 12);
	      DEFINE_STRING(BGl_string3678z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3678za700za7za7_3764za7, "Unread char failed", 18);
	      DEFINE_STRING(BGl_string3679z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3679za700za7za7_3765za7, "_unread-string!", 15);
	      DEFINE_STRING(BGl_string3681z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3681za700za7za7_3766za7, "unread-string!", 14);
	      DEFINE_STRING(BGl_string3682z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3682za700za7za7_3767za7, "Unread string failed", 20);
	      DEFINE_STRING(BGl_string3683z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3683za700za7za7_3768za7, "_unread-substring!", 18);
	      DEFINE_STRING(BGl_string3685z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3685za700za7za7_3769za7, "unread-substring!", 17);
	      DEFINE_STRING(BGl_string3686z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3686za700za7za7_3770za7, "Invalid positional parameters", 29);
	      DEFINE_STRING(BGl_string3688z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3688za700za7za7_3771za7, "unread-sustring!", 16);
	      DEFINE_STRING(BGl_string3700z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3700za700za7za7_3772za7, "send-chars", 10);
	      DEFINE_STRING(BGl_string3689z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3689za700za7za7_3773za7, "_port->string-list", 18);
	      DEFINE_STRING(BGl_string3701z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3701za700za7za7_3774za7, "Illegal size", 12);
	      DEFINE_STRING(BGl_string3691z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3691za700za7za7_3775za7, "set-input-port-position!", 24);
	      DEFINE_STRING(BGl_string3702z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3702za700za7za7_3776za7, "Illegal offset", 14);
	      DEFINE_STRING(BGl_string3692z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3692za700za7za7_3777za7, "Can't seek port", 15);
	      DEFINE_STRING(BGl_string3703z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3703za700za7za7_3778za7, "_send-file", 10);
	      DEFINE_STRING(BGl_string3693z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3693za700za7za7_3779za7, "file:", 5);
	      DEFINE_STRING(BGl_string3704z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3704za700za7za7_3780za7, "_file-lines", 11);
	      DEFINE_STRING(BGl_string3694z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3694za700za7za7_3781za7, "_file->string", 13);
	      DEFINE_STRING(BGl_string3695z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3695za700za7za7_3782za7, "_send-chars/size", 16);
	      DEFINE_STRING(BGl_string3706z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3706za700za7za7_3783za7, "file-lines", 10);
	      DEFINE_STRING(BGl_string3696z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3696za700za7za7_3784za7, "output-port", 11);
	      DEFINE_STRING(BGl_string3707z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3707za700za7za7_3785za7, "Illegal files", 13);
	      DEFINE_STRING(BGl_string3697z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3697za700za7za7_3786za7, "elong", 5);
	      DEFINE_STRING(BGl_string3708z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3708za700za7za7_3787za7, "_file-position->line", 20);
	      DEFINE_STRING(BGl_string3698z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3698za700za7za7_3788za7, "_send-chars", 11);
	      DEFINE_STRING(BGl_string3710z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3710za700za7za7_3789za7, "_password", 9);
	      DEFINE_STRING(BGl_string3709z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3709za700za7za7_3790za7, "int", 3);
	      DEFINE_STRING(BGl_string3711z00zz__r4_input_6_10_2z00,
		BgL_bgl_string3711za700za7za7_3791za7, "__r4_input_6_10_2", 17);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long
		BgL_checksumz00_5062, char *BgL_fromz00_5063)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_input_6_10_2z00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_input_6_10_2z00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__r4_input_6_10_2z00();
					BGl_importedzd2moduleszd2initz00zz__r4_input_6_10_2z00();
					BGl_toplevelzd2initzd2zz__r4_input_6_10_2z00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__r4_input_6_10_2z00()
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 14 */
			BGl_symbol3654z00zz__r4_input_6_10_2z00 =
				bstring_to_symbol(BGl_string3655z00zz__r4_input_6_10_2z00);
			BGl_symbol3664z00zz__r4_input_6_10_2z00 =
				bstring_to_symbol(BGl_string3665z00zz__r4_input_6_10_2z00);
			BGl_symbol3670z00zz__r4_input_6_10_2z00 =
				bstring_to_symbol(BGl_string3671z00zz__r4_input_6_10_2z00);
			BGl_symbol3676z00zz__r4_input_6_10_2z00 =
				bstring_to_symbol(BGl_string3677z00zz__r4_input_6_10_2z00);
			BGl_symbol3680z00zz__r4_input_6_10_2z00 =
				bstring_to_symbol(BGl_string3681z00zz__r4_input_6_10_2z00);
			BGl_symbol3684z00zz__r4_input_6_10_2z00 =
				bstring_to_symbol(BGl_string3685z00zz__r4_input_6_10_2z00);
			BGl_symbol3687z00zz__r4_input_6_10_2z00 =
				bstring_to_symbol(BGl_string3688z00zz__r4_input_6_10_2z00);
			BGl_symbol3690z00zz__r4_input_6_10_2z00 =
				bstring_to_symbol(BGl_string3691z00zz__r4_input_6_10_2z00);
			BGl_symbol3699z00zz__r4_input_6_10_2z00 =
				bstring_to_symbol(BGl_string3700z00zz__r4_input_6_10_2z00);
			return (BGl_symbol3705z00zz__r4_input_6_10_2z00 =
				bstring_to_symbol(BGl_string3706z00zz__r4_input_6_10_2z00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__r4_input_6_10_2z00()
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 14 */
			return (BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00 =
				BGl_proc3649z00zz__r4_input_6_10_2z00, BUNSPEC);
		}
	}



/* <anonymous:2086> */
	obj_t BGl_zc3anonymousza32086ze3z83zz__r4_input_6_10_2z00(obj_t
		BgL_envz00_4897, obj_t BgL_inputzd2portzd2_4898)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 298 */
			{
				obj_t BgL_inputzd2portzd2_887;

				BgL_inputzd2portzd2_887 = BgL_inputzd2portzd2_4898;
				{
					obj_t BgL_inputzd2portzd2_923;

					long BgL_lastzd2matchzd2_924;

					obj_t BgL_inputzd2portzd2_931;

					long BgL_lastzd2matchzd2_932;

					obj_t BgL_inputzd2portzd2_942;

					long BgL_lastzd2matchzd2_943;

					obj_t BgL_inputzd2portzd2_952;

					long BgL_lastzd2matchzd2_953;

					obj_t BgL_inputzd2portzd2_964;

					long BgL_lastzd2matchzd2_965;

					obj_t BgL_inputzd2portzd2_976;

					long BgL_lastzd2matchzd2_977;

					obj_t BgL_inputzd2portzd2_985;

					long BgL_lastzd2matchzd2_986;

					obj_t BgL_inputzd2portzd2_997;

					long BgL_lastzd2matchzd2_998;

					int BgL_minz00_1018;

					int BgL_maxz00_1019;

				BgL_zc3anonymousza32204ze3z83_1088:
					RGC_START_MATCH(BgL_inputzd2portzd2_887);
					{	/* Ieee/input.scm 298 */
						long BgL_matchz00_1089;

						BgL_inputzd2portzd2_931 = BgL_inputzd2portzd2_887;
						BgL_lastzd2matchzd2_932 = ((long) 4);
					BgL_zc3anonymousza32092ze3z83_933:
						{	/* Ieee/input.scm 298 */
							int BgL_currentzd2charzd2_934;

							BgL_currentzd2charzd2_934 =
								RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_931);
							if (((long) (BgL_currentzd2charzd2_934) == ((long) 0)))
								{	/* Ieee/input.scm 298 */
									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_931))
										{	/* Ieee/input.scm 298 */
											if (rgc_fill_buffer(BgL_inputzd2portzd2_931))
												{

													goto BgL_zc3anonymousza32092ze3z83_933;
												}
											else
												{	/* Ieee/input.scm 298 */
													BgL_matchz00_1089 = BgL_lastzd2matchzd2_932;
												}
										}
									else
										{	/* Ieee/input.scm 298 */
											BgL_inputzd2portzd2_964 = BgL_inputzd2portzd2_931;
											BgL_lastzd2matchzd2_965 = BgL_lastzd2matchzd2_932;
										BgL_zc3anonymousza32114ze3z83_966:
											{	/* Ieee/input.scm 298 */
												long BgL_newzd2matchzd2_967;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_964);
												BgL_newzd2matchzd2_967 = ((long) 3);
												{	/* Ieee/input.scm 298 */
													int BgL_currentzd2charzd2_968;

													BgL_currentzd2charzd2_968 =
														RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_964);
													if (
														((long) (BgL_currentzd2charzd2_968) == ((long) 0)))
														{	/* Ieee/input.scm 298 */
															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_964))
																{	/* Ieee/input.scm 298 */
																	if (rgc_fill_buffer(BgL_inputzd2portzd2_964))
																		{

																			goto BgL_zc3anonymousza32114ze3z83_966;
																		}
																	else
																		{	/* Ieee/input.scm 298 */
																			BgL_matchz00_1089 =
																				BgL_newzd2matchzd2_967;
																		}
																}
															else
																{	/* Ieee/input.scm 298 */
																	BgL_inputzd2portzd2_952 =
																		BgL_inputzd2portzd2_964;
																	BgL_lastzd2matchzd2_953 =
																		BgL_newzd2matchzd2_967;
																BgL_zc3anonymousza32106ze3z83_954:
																	{	/* Ieee/input.scm 298 */
																		long BgL_newzd2matchzd2_955;

																		RGC_STOP_MATCH(BgL_inputzd2portzd2_952);
																		BgL_newzd2matchzd2_955 = ((long) 3);
																		{	/* Ieee/input.scm 298 */
																			int BgL_currentzd2charzd2_956;

																			BgL_currentzd2charzd2_956 =
																				RGC_BUFFER_GET_CHAR
																				(BgL_inputzd2portzd2_952);
																			if (((long) (BgL_currentzd2charzd2_956) ==
																					((long) 0)))
																				{	/* Ieee/input.scm 298 */
																					if (RGC_BUFFER_EMPTY
																						(BgL_inputzd2portzd2_952))
																						{	/* Ieee/input.scm 298 */
																							if (rgc_fill_buffer
																								(BgL_inputzd2portzd2_952))
																								{

																									goto
																										BgL_zc3anonymousza32106ze3z83_954;
																								}
																							else
																								{	/* Ieee/input.scm 298 */
																									BgL_matchz00_1089 =
																										BgL_newzd2matchzd2_955;
																								}
																						}
																					else
																						{
																							long BgL_lastzd2matchzd2_5107;

																							BgL_lastzd2matchzd2_5107 =
																								BgL_newzd2matchzd2_955;
																							BgL_lastzd2matchzd2_953 =
																								BgL_lastzd2matchzd2_5107;
																							goto
																								BgL_zc3anonymousza32106ze3z83_954;
																						}
																				}
																			else
																				{	/* Ieee/input.scm 298 */
																					bool_t BgL_testz00_5108;

																					{	/* Ieee/input.scm 298 */
																						bool_t BgL_testz00_5109;

																						if (
																							((long)
																								(BgL_currentzd2charzd2_956) ==
																								((long) 10)))
																							{	/* Ieee/input.scm 298 */
																								BgL_testz00_5109 = ((bool_t) 1);
																							}
																						else
																							{	/* Ieee/input.scm 298 */
																								BgL_testz00_5109 =
																									(
																									(long)
																									(BgL_currentzd2charzd2_956) ==
																									((long) 9));
																							}
																						if (BgL_testz00_5109)
																							{	/* Ieee/input.scm 298 */
																								BgL_testz00_5108 = ((bool_t) 1);
																							}
																						else
																							{	/* Ieee/input.scm 298 */
																								if (
																									((long)
																										(BgL_currentzd2charzd2_956)
																										== ((long) 32)))
																									{	/* Ieee/input.scm 298 */
																										BgL_testz00_5108 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Ieee/input.scm 298 */
																										BgL_testz00_5108 =
																											(
																											(long)
																											(BgL_currentzd2charzd2_956)
																											== ((long) 34));
																					}}}
																					if (BgL_testz00_5108)
																						{	/* Ieee/input.scm 298 */
																							BgL_matchz00_1089 =
																								BgL_newzd2matchzd2_955;
																						}
																					else
																						{
																							long BgL_lastzd2matchzd2_5120;

																							BgL_lastzd2matchzd2_5120 =
																								BgL_newzd2matchzd2_955;
																							BgL_lastzd2matchzd2_953 =
																								BgL_lastzd2matchzd2_5120;
																							goto
																								BgL_zc3anonymousza32106ze3z83_954;
																						}
																				}
																		}
																	}
																}
														}
													else
														{	/* Ieee/input.scm 298 */
															bool_t BgL_testz00_5121;

															{	/* Ieee/input.scm 298 */
																bool_t BgL_testz00_5122;

																if (
																	((long) (BgL_currentzd2charzd2_968) ==
																		((long) 10)))
																	{	/* Ieee/input.scm 298 */
																		BgL_testz00_5122 = ((bool_t) 1);
																	}
																else
																	{	/* Ieee/input.scm 298 */
																		BgL_testz00_5122 =
																			(
																			(long) (BgL_currentzd2charzd2_968) ==
																			((long) 9));
																	}
																if (BgL_testz00_5122)
																	{	/* Ieee/input.scm 298 */
																		BgL_testz00_5121 = ((bool_t) 1);
																	}
																else
																	{	/* Ieee/input.scm 298 */
																		if (
																			((long) (BgL_currentzd2charzd2_968) ==
																				((long) 32)))
																			{	/* Ieee/input.scm 298 */
																				BgL_testz00_5121 = ((bool_t) 1);
																			}
																		else
																			{	/* Ieee/input.scm 298 */
																				BgL_testz00_5121 =
																					(
																					(long) (BgL_currentzd2charzd2_968) ==
																					((long) 34));
															}}}
															if (BgL_testz00_5121)
																{	/* Ieee/input.scm 298 */
																	BgL_matchz00_1089 = BgL_newzd2matchzd2_967;
																}
															else
																{
																	long BgL_lastzd2matchzd2_5134;

																	obj_t BgL_inputzd2portzd2_5133;

																	BgL_inputzd2portzd2_5133 =
																		BgL_inputzd2portzd2_964;
																	BgL_lastzd2matchzd2_5134 =
																		BgL_newzd2matchzd2_967;
																	BgL_lastzd2matchzd2_953 =
																		BgL_lastzd2matchzd2_5134;
																	BgL_inputzd2portzd2_952 =
																		BgL_inputzd2portzd2_5133;
																	goto BgL_zc3anonymousza32106ze3z83_954;
																}
														}
												}
											}
										}
								}
							else
								{	/* Ieee/input.scm 298 */
									if (((long) (BgL_currentzd2charzd2_934) == ((long) 34)))
										{	/* Ieee/input.scm 298 */
											BgL_inputzd2portzd2_976 = BgL_inputzd2portzd2_931;
											BgL_lastzd2matchzd2_977 = BgL_lastzd2matchzd2_932;
										BgL_zc3anonymousza32122ze3z83_978:
											{	/* Ieee/input.scm 298 */
												long BgL_newzd2matchzd2_979;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_976);
												BgL_newzd2matchzd2_979 = ((long) 1);
												{	/* Ieee/input.scm 298 */
													int BgL_currentzd2charzd2_980;

													BgL_currentzd2charzd2_980 =
														RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_976);
													switch ((long) (BgL_currentzd2charzd2_980))
														{
														case ((long) 0):

															{	/* Ieee/input.scm 298 */
																bool_t BgL_testz00_5140;

																{	/* Ieee/input.scm 298 */
																	bool_t BgL_res3451z00_3670;

																	{	/* Ieee/input.scm 298 */
																		obj_t BgL_inputzd2portzd2_3666;

																		BgL_inputzd2portzd2_3666 =
																			BgL_inputzd2portzd2_976;
																		if (RGC_BUFFER_EMPTY
																			(BgL_inputzd2portzd2_3666))
																			{	/* Ieee/input.scm 298 */
																				BgL_res3451z00_3670 =
																					rgc_fill_buffer
																					(BgL_inputzd2portzd2_3666);
																			}
																		else
																			{	/* Ieee/input.scm 298 */
																				BgL_res3451z00_3670 = ((bool_t) 0);
																			}
																	}
																	BgL_testz00_5140 = BgL_res3451z00_3670;
																}
																if (BgL_testz00_5140)
																	{

																		goto BgL_zc3anonymousza32122ze3z83_978;
																	}
																else
																	{	/* Ieee/input.scm 298 */
																		BgL_matchz00_1089 = BgL_newzd2matchzd2_979;
																	}
															}
															break;
														case ((long) 92):

															BgL_inputzd2portzd2_923 = BgL_inputzd2portzd2_976;
															BgL_lastzd2matchzd2_924 = BgL_newzd2matchzd2_979;
														BgL_zc3anonymousza32087ze3z83_925:
															{	/* Ieee/input.scm 298 */
																int BgL_currentzd2charzd2_926;

																BgL_currentzd2charzd2_926 =
																	RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_923);
																if (
																	((long) (BgL_currentzd2charzd2_926) ==
																		((long) 0)))
																	{	/* Ieee/input.scm 298 */
																		if (RGC_BUFFER_EMPTY
																			(BgL_inputzd2portzd2_923))
																			{	/* Ieee/input.scm 298 */
																				if (rgc_fill_buffer
																					(BgL_inputzd2portzd2_923))
																					{

																						goto
																							BgL_zc3anonymousza32087ze3z83_925;
																					}
																				else
																					{	/* Ieee/input.scm 298 */
																						BgL_matchz00_1089 =
																							BgL_lastzd2matchzd2_924;
																					}
																			}
																		else
																			{	/* Ieee/input.scm 298 */
																				BgL_inputzd2portzd2_985 =
																					BgL_inputzd2portzd2_923;
																				BgL_lastzd2matchzd2_986 =
																					BgL_lastzd2matchzd2_924;
																			BgL_zc3anonymousza32125ze3z83_987:
																				{	/* Ieee/input.scm 298 */
																					int BgL_currentzd2charzd2_988;

																					BgL_currentzd2charzd2_988 =
																						RGC_BUFFER_GET_CHAR
																						(BgL_inputzd2portzd2_985);
																					switch ((long)
																						(BgL_currentzd2charzd2_988))
																						{
																						case ((long) 0):

																							{	/* Ieee/input.scm 298 */
																								bool_t BgL_testz00_5153;

																								{	/* Ieee/input.scm 298 */
																									bool_t BgL_res3452z00_3680;

																									{	/* Ieee/input.scm 298 */
																										obj_t
																											BgL_inputzd2portzd2_3676;
																										BgL_inputzd2portzd2_3676 =
																											BgL_inputzd2portzd2_985;
																										if (RGC_BUFFER_EMPTY
																											(BgL_inputzd2portzd2_3676))
																											{	/* Ieee/input.scm 298 */
																												BgL_res3452z00_3680 =
																													rgc_fill_buffer
																													(BgL_inputzd2portzd2_3676);
																											}
																										else
																											{	/* Ieee/input.scm 298 */
																												BgL_res3452z00_3680 =
																													((bool_t) 0);
																											}
																									}
																									BgL_testz00_5153 =
																										BgL_res3452z00_3680;
																								}
																								if (BgL_testz00_5153)
																									{

																										goto
																											BgL_zc3anonymousza32125ze3z83_987;
																									}
																								else
																									{	/* Ieee/input.scm 298 */
																										BgL_matchz00_1089 =
																											BgL_lastzd2matchzd2_986;
																									}
																							}
																							break;
																						case ((long) 92):

																							{
																								long BgL_lastzd2matchzd2_5158;

																								obj_t BgL_inputzd2portzd2_5157;

																								BgL_inputzd2portzd2_5157 =
																									BgL_inputzd2portzd2_985;
																								BgL_lastzd2matchzd2_5158 =
																									BgL_lastzd2matchzd2_986;
																								BgL_lastzd2matchzd2_924 =
																									BgL_lastzd2matchzd2_5158;
																								BgL_inputzd2portzd2_923 =
																									BgL_inputzd2portzd2_5157;
																								goto
																									BgL_zc3anonymousza32087ze3z83_925;
																							}
																							break;
																						case ((long) 34):

																							{	/* Ieee/input.scm 298 */
																								long BgL_newzd2matchzd2_3683;

																								RGC_STOP_MATCH
																									(BgL_inputzd2portzd2_985);
																								BgL_newzd2matchzd2_3683 =
																									((long) 2);
																								BgL_matchz00_1089 =
																									BgL_newzd2matchzd2_3683;
																							} break;
																						default:
																							{

																								goto
																									BgL_zc3anonymousza32125ze3z83_987;
																							}
																						}
																				}
																			}
																	}
																else
																	{	/* Ieee/input.scm 298 */
																		if (
																			((long) (BgL_currentzd2charzd2_926) ==
																				((long) 10)))
																			{	/* Ieee/input.scm 298 */
																				BgL_matchz00_1089 =
																					BgL_lastzd2matchzd2_924;
																			}
																		else
																			{
																				long BgL_lastzd2matchzd2_5166;

																				obj_t BgL_inputzd2portzd2_5165;

																				BgL_inputzd2portzd2_5165 =
																					BgL_inputzd2portzd2_923;
																				BgL_lastzd2matchzd2_5166 =
																					BgL_lastzd2matchzd2_924;
																				BgL_lastzd2matchzd2_986 =
																					BgL_lastzd2matchzd2_5166;
																				BgL_inputzd2portzd2_985 =
																					BgL_inputzd2portzd2_5165;
																				goto BgL_zc3anonymousza32125ze3z83_987;
																			}
																	}
															}
															break;
														case ((long) 34):

															{	/* Ieee/input.scm 298 */
																long BgL_newzd2matchzd2_3673;

																RGC_STOP_MATCH(BgL_inputzd2portzd2_976);
																BgL_newzd2matchzd2_3673 = ((long) 2);
																BgL_matchz00_1089 = BgL_newzd2matchzd2_3673;
															} break;
														default:
															{
																long BgL_lastzd2matchzd2_5169;

																obj_t BgL_inputzd2portzd2_5168;

																BgL_inputzd2portzd2_5168 =
																	BgL_inputzd2portzd2_976;
																BgL_lastzd2matchzd2_5169 =
																	BgL_newzd2matchzd2_979;
																BgL_lastzd2matchzd2_986 =
																	BgL_lastzd2matchzd2_5169;
																BgL_inputzd2portzd2_985 =
																	BgL_inputzd2portzd2_5168;
																goto BgL_zc3anonymousza32125ze3z83_987;
															}
														}
												}
											}
										}
									else
										{	/* Ieee/input.scm 298 */
											bool_t BgL_testz00_5172;

											{	/* Ieee/input.scm 298 */
												bool_t BgL_testz00_5173;

												if (((long) (BgL_currentzd2charzd2_934) == ((long) 10)))
													{	/* Ieee/input.scm 298 */
														BgL_testz00_5173 = ((bool_t) 1);
													}
												else
													{	/* Ieee/input.scm 298 */
														BgL_testz00_5173 =
															(
															(long) (BgL_currentzd2charzd2_934) == ((long) 9));
													}
												if (BgL_testz00_5173)
													{	/* Ieee/input.scm 298 */
														BgL_testz00_5172 = ((bool_t) 1);
													}
												else
													{	/* Ieee/input.scm 298 */
														BgL_testz00_5172 =
															(
															(long) (BgL_currentzd2charzd2_934) ==
															((long) 32));
											}}
											if (BgL_testz00_5172)
												{	/* Ieee/input.scm 298 */
													BgL_inputzd2portzd2_942 = BgL_inputzd2portzd2_931;
													BgL_lastzd2matchzd2_943 = BgL_lastzd2matchzd2_932;
												BgL_zc3anonymousza32100ze3z83_944:
													{	/* Ieee/input.scm 298 */
														long BgL_newzd2matchzd2_945;

														RGC_STOP_MATCH(BgL_inputzd2portzd2_942);
														BgL_newzd2matchzd2_945 = ((long) 0);
														{	/* Ieee/input.scm 298 */
															int BgL_currentzd2charzd2_946;

															BgL_currentzd2charzd2_946 =
																RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_942);
															if (
																((long) (BgL_currentzd2charzd2_946) ==
																	((long) 0)))
																{	/* Ieee/input.scm 298 */
																	bool_t BgL_testz00_5186;

																	{	/* Ieee/input.scm 298 */
																		bool_t BgL_res3450z00_3629;

																		{	/* Ieee/input.scm 298 */
																			obj_t BgL_inputzd2portzd2_3625;

																			BgL_inputzd2portzd2_3625 =
																				BgL_inputzd2portzd2_942;
																			if (RGC_BUFFER_EMPTY
																				(BgL_inputzd2portzd2_3625))
																				{	/* Ieee/input.scm 298 */
																					BgL_res3450z00_3629 =
																						rgc_fill_buffer
																						(BgL_inputzd2portzd2_3625);
																				}
																			else
																				{	/* Ieee/input.scm 298 */
																					BgL_res3450z00_3629 = ((bool_t) 0);
																				}
																		}
																		BgL_testz00_5186 = BgL_res3450z00_3629;
																	}
																	if (BgL_testz00_5186)
																		{

																			goto BgL_zc3anonymousza32100ze3z83_944;
																		}
																	else
																		{	/* Ieee/input.scm 298 */
																			BgL_matchz00_1089 =
																				BgL_newzd2matchzd2_945;
																		}
																}
															else
																{	/* Ieee/input.scm 298 */
																	bool_t BgL_testz00_5190;

																	{	/* Ieee/input.scm 298 */
																		bool_t BgL_testz00_5191;

																		if (
																			((long) (BgL_currentzd2charzd2_946) ==
																				((long) 10)))
																			{	/* Ieee/input.scm 298 */
																				BgL_testz00_5191 = ((bool_t) 1);
																			}
																		else
																			{	/* Ieee/input.scm 298 */
																				BgL_testz00_5191 =
																					(
																					(long) (BgL_currentzd2charzd2_946) ==
																					((long) 9));
																			}
																		if (BgL_testz00_5191)
																			{	/* Ieee/input.scm 298 */
																				BgL_testz00_5190 = ((bool_t) 1);
																			}
																		else
																			{	/* Ieee/input.scm 298 */
																				BgL_testz00_5190 =
																					(
																					(long) (BgL_currentzd2charzd2_946) ==
																					((long) 32));
																	}}
																	if (BgL_testz00_5190)
																		{	/* Ieee/input.scm 298 */
																			BgL_inputzd2portzd2_997 =
																				BgL_inputzd2portzd2_942;
																			BgL_lastzd2matchzd2_998 =
																				BgL_newzd2matchzd2_945;
																		BgL_zc3anonymousza32129ze3z83_999:
																			{	/* Ieee/input.scm 298 */
																				long BgL_newzd2matchzd2_1000;

																				RGC_STOP_MATCH(BgL_inputzd2portzd2_997);
																				BgL_newzd2matchzd2_1000 = ((long) 0);
																				{	/* Ieee/input.scm 298 */
																					int BgL_currentzd2charzd2_1001;

																					BgL_currentzd2charzd2_1001 =
																						RGC_BUFFER_GET_CHAR
																						(BgL_inputzd2portzd2_997);
																					if (((long)
																							(BgL_currentzd2charzd2_1001) ==
																							((long) 0)))
																						{	/* Ieee/input.scm 298 */
																							bool_t BgL_testz00_5204;

																							{	/* Ieee/input.scm 298 */
																								bool_t BgL_res3453z00_3695;

																								{	/* Ieee/input.scm 298 */
																									obj_t
																										BgL_inputzd2portzd2_3691;
																									BgL_inputzd2portzd2_3691 =
																										BgL_inputzd2portzd2_997;
																									if (RGC_BUFFER_EMPTY
																										(BgL_inputzd2portzd2_3691))
																										{	/* Ieee/input.scm 298 */
																											BgL_res3453z00_3695 =
																												rgc_fill_buffer
																												(BgL_inputzd2portzd2_3691);
																										}
																									else
																										{	/* Ieee/input.scm 298 */
																											BgL_res3453z00_3695 =
																												((bool_t) 0);
																										}
																								}
																								BgL_testz00_5204 =
																									BgL_res3453z00_3695;
																							}
																							if (BgL_testz00_5204)
																								{

																									goto
																										BgL_zc3anonymousza32129ze3z83_999;
																								}
																							else
																								{	/* Ieee/input.scm 298 */
																									BgL_matchz00_1089 =
																										BgL_newzd2matchzd2_1000;
																								}
																						}
																					else
																						{	/* Ieee/input.scm 298 */
																							bool_t BgL_testz00_5208;

																							{	/* Ieee/input.scm 298 */
																								bool_t BgL_testz00_5209;

																								if (
																									((long)
																										(BgL_currentzd2charzd2_1001)
																										== ((long) 10)))
																									{	/* Ieee/input.scm 298 */
																										BgL_testz00_5209 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Ieee/input.scm 298 */
																										BgL_testz00_5209 =
																											(
																											(long)
																											(BgL_currentzd2charzd2_1001)
																											== ((long) 9));
																									}
																								if (BgL_testz00_5209)
																									{	/* Ieee/input.scm 298 */
																										BgL_testz00_5208 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Ieee/input.scm 298 */
																										BgL_testz00_5208 =
																											(
																											(long)
																											(BgL_currentzd2charzd2_1001)
																											== ((long) 32));
																							}}
																							if (BgL_testz00_5208)
																								{
																									long BgL_lastzd2matchzd2_5217;

																									BgL_lastzd2matchzd2_5217 =
																										BgL_newzd2matchzd2_1000;
																									BgL_lastzd2matchzd2_998 =
																										BgL_lastzd2matchzd2_5217;
																									goto
																										BgL_zc3anonymousza32129ze3z83_999;
																								}
																							else
																								{	/* Ieee/input.scm 298 */
																									BgL_matchz00_1089 =
																										BgL_newzd2matchzd2_1000;
																								}
																						}
																				}
																			}
																		}
																	else
																		{	/* Ieee/input.scm 298 */
																			BgL_matchz00_1089 =
																				BgL_newzd2matchzd2_945;
																		}
																}
														}
													}
												}
											else
												{
													long BgL_lastzd2matchzd2_5219;

													obj_t BgL_inputzd2portzd2_5218;

													BgL_inputzd2portzd2_5218 = BgL_inputzd2portzd2_931;
													BgL_lastzd2matchzd2_5219 = BgL_lastzd2matchzd2_932;
													BgL_lastzd2matchzd2_965 = BgL_lastzd2matchzd2_5219;
													BgL_inputzd2portzd2_964 = BgL_inputzd2portzd2_5218;
													goto BgL_zc3anonymousza32114ze3z83_966;
												}
										}
								}
						}
						RGC_SET_FILEPOS(BgL_inputzd2portzd2_887);
						switch (BgL_matchz00_1089)
							{
							case ((long) 4):

								{	/* Ieee/input.scm 298 */
									bool_t BgL_testz00_5221;

									{	/* Ieee/input.scm 298 */
										long BgL_arg2197z00_1078;

										BgL_arg2197z00_1078 =
											RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_887);
										BgL_testz00_5221 = (BgL_arg2197z00_1078 == ((long) 0));
									}
									if (BgL_testz00_5221)
										{	/* Ieee/input.scm 298 */
											return BCNST(256);
										}
									else
										{	/* Ieee/input.scm 298 */
											obj_t BgL_inputzd2portzd2_3738;

											BgL_inputzd2portzd2_3738 = BgL_inputzd2portzd2_887;
											return
												BCHAR(RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_3738));
										}
								}
								break;
							case ((long) 3):

								{	/* Ieee/input.scm 306 */
									obj_t BgL_res3460z00_3748;

									{	/* Ieee/input.scm 306 */
										int BgL_arg2144z00_3742;

										{	/* Ieee/input.scm 306 */
											int BgL_res3459z00_3744;

											{	/* Ieee/input.scm 306 */
												obj_t BgL_inputzd2portzd2_3743;

												BgL_inputzd2portzd2_3743 = BgL_inputzd2portzd2_887;
												BgL_res3459z00_3744 =
													(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_3743));
											}
											BgL_arg2144z00_3742 = BgL_res3459z00_3744;
										}
										BgL_res3460z00_3748 =
											rgc_buffer_substring(BgL_inputzd2portzd2_887, ((long) 0),
											(long) (BgL_arg2144z00_3742));
									}
									return BgL_res3460z00_3748;
								}
								break;
							case ((long) 2):

								BgL_minz00_1018 = (int) (((long) 1));
								BgL_maxz00_1019 = (int) (((long) -1));
								if (((long) (BgL_maxz00_1019) < ((long) 0)))
									{	/* Ieee/input.scm 298 */
										int BgL_arg2147z00_1022;

										{	/* Ieee/input.scm 298 */
											int BgL_res3455z00_3712;

											{	/* Ieee/input.scm 298 */
												obj_t BgL_inputzd2portzd2_3711;

												BgL_inputzd2portzd2_3711 = BgL_inputzd2portzd2_887;
												BgL_res3455z00_3712 =
													(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_3711));
											}
											BgL_arg2147z00_1022 = BgL_res3455z00_3712;
										}
										{	/* Ieee/input.scm 298 */
											long BgL_za71za7_3713;

											long BgL_za72za7_3714;

											BgL_za71za7_3713 = (long) (BgL_arg2147z00_1022);
											BgL_za72za7_3714 = (long) (BgL_maxz00_1019);
											BgL_maxz00_1019 =
												(int) ((BgL_za71za7_3713 + BgL_za72za7_3714));
									}}
								else
									{	/* Ieee/input.scm 298 */
										BFALSE;
									}
								{	/* Ieee/input.scm 298 */
									bool_t BgL_testz00_5239;

									if (((long) (BgL_minz00_1018) >= ((long) 0)))
										{	/* Ieee/input.scm 298 */
											if (
												((long) (BgL_maxz00_1019) >= (long) (BgL_minz00_1018)))
												{	/* Ieee/input.scm 298 */
													int BgL_arg2157z00_1032;

													{	/* Ieee/input.scm 298 */
														int BgL_res3456z00_3720;

														{	/* Ieee/input.scm 298 */
															obj_t BgL_inputzd2portzd2_3719;

															BgL_inputzd2portzd2_3719 =
																BgL_inputzd2portzd2_887;
															BgL_res3456z00_3720 =
																(int) (RGC_BUFFER_LENGTH
																(BgL_inputzd2portzd2_3719));
														}
														BgL_arg2157z00_1032 = BgL_res3456z00_3720;
													}
													BgL_testz00_5239 =
														(
														(long) (BgL_maxz00_1019) <=
														(long) (BgL_arg2157z00_1032));
												}
											else
												{	/* Ieee/input.scm 298 */
													BgL_testz00_5239 = ((bool_t) 0);
												}
										}
									else
										{	/* Ieee/input.scm 298 */
											BgL_testz00_5239 = ((bool_t) 0);
										}
									if (BgL_testz00_5239)
										{	/* Ieee/input.scm 298 */
											return
												rgc_buffer_substring(BgL_inputzd2portzd2_887,
												(long) (BgL_minz00_1018), (long) (BgL_maxz00_1019));
										}
									else
										{	/* Ieee/input.scm 298 */
											obj_t BgL_arg2150z00_1025;

											obj_t BgL_arg2151z00_1026;

											{	/* Ieee/input.scm 298 */
												obj_t BgL_arg2153z00_1028;

												{	/* Ieee/input.scm 298 */
													obj_t BgL_res3458z00_3733;

													{	/* Ieee/input.scm 298 */
														int BgL_arg2144z00_3727;

														{	/* Ieee/input.scm 298 */
															int BgL_res3457z00_3729;

															{	/* Ieee/input.scm 298 */
																obj_t BgL_inputzd2portzd2_3728;

																BgL_inputzd2portzd2_3728 =
																	BgL_inputzd2portzd2_887;
																BgL_res3457z00_3729 =
																	(int) (RGC_BUFFER_LENGTH
																	(BgL_inputzd2portzd2_3728));
															}
															BgL_arg2144z00_3727 = BgL_res3457z00_3729;
														}
														BgL_res3458z00_3733 =
															rgc_buffer_substring(BgL_inputzd2portzd2_887,
															((long) 0), (long) (BgL_arg2144z00_3727));
													}
													BgL_arg2153z00_1028 = BgL_res3458z00_3733;
												}
												{	/* Ieee/input.scm 298 */
													obj_t BgL_list2154z00_1029;

													BgL_list2154z00_1029 =
														MAKE_PAIR(BgL_arg2153z00_1028, BNIL);
													BgL_arg2150z00_1025 =
														BGl_formatz00zz__r4_output_6_10_3z00
														(BGl_string3652z00zz__r4_input_6_10_2z00,
														BgL_list2154z00_1029);
											}}
											BgL_arg2151z00_1026 =
												MAKE_PAIR(BINT(BgL_minz00_1018), BINT(BgL_maxz00_1019));
											return
												BGl_errorz00zz__errorz00
												(BGl_string3653z00zz__r4_input_6_10_2z00,
												BgL_arg2150z00_1025, BgL_arg2151z00_1026);
										}
								}
								break;
							case ((long) 1):

								{	/* Ieee/input.scm 302 */
									obj_t BgL_res3462z00_3756;

									{	/* Ieee/input.scm 302 */
										int BgL_arg2144z00_3750;

										{	/* Ieee/input.scm 302 */
											int BgL_res3461z00_3752;

											{	/* Ieee/input.scm 302 */
												obj_t BgL_inputzd2portzd2_3751;

												BgL_inputzd2portzd2_3751 = BgL_inputzd2portzd2_887;
												BgL_res3461z00_3752 =
													(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_3751));
											}
											BgL_arg2144z00_3750 = BgL_res3461z00_3752;
										}
										BgL_res3462z00_3756 =
											rgc_buffer_substring(BgL_inputzd2portzd2_887, ((long) 0),
											(long) (BgL_arg2144z00_3750));
									}
									return BgL_res3462z00_3756;
								}
								break;
							case ((long) 0):

								goto BgL_zc3anonymousza32204ze3z83_1088;
								break;
							default:
								return
									BGl_errorz00zz__errorz00
									(BGl_string3650z00zz__r4_input_6_10_2z00,
									BGl_string3651z00zz__r4_input_6_10_2z00,
									BINT(BgL_matchz00_1089));
							}
					}
				}
			}
		}
	}



/* read/rp */
	BGL_EXPORTED_DEF obj_t BGl_readzf2rpzf2zz__r4_input_6_10_2z00(obj_t
		BgL_grammarz00_1, obj_t BgL_portz00_2, obj_t BgL_optsz00_3)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 103 */
			if (PAIRP(BgL_optsz00_3))
				{	/* Ieee/input.scm 106 */
					obj_t BgL_auxz00_5276;

					{	/* Ieee/input.scm 106 */
						obj_t BgL_list2207z00_1128;

						BgL_list2207z00_1128 = MAKE_PAIR(BgL_optsz00_3, BNIL);
						BgL_auxz00_5276 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_portz00_2,
							BgL_list2207z00_1128);
					}
					return apply(BgL_grammarz00_1, BgL_auxz00_5276);
				}
			else
				{	/* Ieee/input.scm 105 */
					if (PROCEDURE_CORRECT_ARITYP(BgL_grammarz00_1, (int) (((long) 1))))
						{	/* Ieee/input.scm 107 */
							return
								PROCEDURE_ENTRY(BgL_grammarz00_1) (BgL_grammarz00_1,
								BgL_portz00_2, BEOA);
						}
					else
						{	/* Ieee/input.scm 107 */
							if (PROCEDURE_CORRECT_ARITYP(BgL_grammarz00_1,
									(int) (((long) 2))))
								{	/* Ieee/input.scm 109 */
									return
										PROCEDURE_ENTRY(BgL_grammarz00_1) (BgL_grammarz00_1,
										BgL_portz00_2, BUNSPEC, BEOA);
								}
							else
								{	/* Ieee/input.scm 109 */
									return
										BGl_errorz00zz__errorz00
										(BGl_symbol3654z00zz__r4_input_6_10_2z00,
										BGl_string3656z00zz__r4_input_6_10_2z00, BgL_grammarz00_1);
								}
						}
				}
		}
	}



/* _read/rp */
	obj_t BGl__readzf2rpzf2zz__r4_input_6_10_2z00(obj_t BgL_envz00_4899,
		obj_t BgL_grammarz00_4900, obj_t BgL_portz00_4901, obj_t BgL_optsz00_4902)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 103 */
			{	/* Ieee/input.scm 105 */
				obj_t BgL_auxz00_5298;

				obj_t BgL_auxz00_5291;

				if (INPUT_PORTP(BgL_portz00_4901))
					{	/* Ieee/input.scm 105 */
						BgL_auxz00_5298 = BgL_portz00_4901;
					}
				else
					{
						obj_t BgL_auxz00_5301;

						BgL_auxz00_5301 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3657z00zz__r4_input_6_10_2z00, BINT(((long) 4584)),
							BGl_string3658z00zz__r4_input_6_10_2z00,
							BGl_string3660z00zz__r4_input_6_10_2z00, BgL_portz00_4901);
						FAILURE(BgL_auxz00_5301, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_grammarz00_4900))
					{	/* Ieee/input.scm 105 */
						BgL_auxz00_5291 = BgL_grammarz00_4900;
					}
				else
					{
						obj_t BgL_auxz00_5294;

						BgL_auxz00_5294 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3657z00zz__r4_input_6_10_2z00, BINT(((long) 4584)),
							BGl_string3658z00zz__r4_input_6_10_2z00,
							BGl_string3659z00zz__r4_input_6_10_2z00, BgL_grammarz00_4900);
						FAILURE(BgL_auxz00_5294, BFALSE, BFALSE);
					}
				return
					BGl_readzf2rpzf2zz__r4_input_6_10_2z00(BgL_auxz00_5291,
					BgL_auxz00_5298, BgL_optsz00_4902);
			}
		}
	}



/* read/lalrp */
	BGL_EXPORTED_DEF obj_t BGl_readzf2lalrpzf2zz__r4_input_6_10_2z00(obj_t
		BgL_lalrz00_4, obj_t BgL_rgcz00_5, obj_t BgL_portz00_6,
		obj_t BgL_eofzd2funzf3z21_7)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 117 */
			if (NULLP(BgL_eofzd2funzf3z21_7))
				{	/* Ieee/input.scm 118 */
					return
						PROCEDURE_ENTRY(BgL_lalrz00_4) (BgL_lalrz00_4, BgL_rgcz00_5,
						BgL_portz00_6, BGl_eofzd2objectzf3zd2envzf3zz__r4_input_6_10_2z00,
						BEOA);
				}
			else
				{	/* Ieee/input.scm 118 */
					obj_t BgL_arg2211z00_3759;

					BgL_arg2211z00_3759 = CAR(BgL_eofzd2funzf3z21_7);
					return
						PROCEDURE_ENTRY(BgL_lalrz00_4) (BgL_lalrz00_4, BgL_rgcz00_5,
						BgL_portz00_6, BgL_arg2211z00_3759, BEOA);
				}
		}
	}



/* _read/lalrp */
	obj_t BGl__readzf2lalrpzf2zz__r4_input_6_10_2z00(obj_t BgL_envz00_4903,
		obj_t BgL_lalrz00_4904, obj_t BgL_rgcz00_4905, obj_t BgL_portz00_4906,
		obj_t BgL_eofzd2funzf3z21_4907)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 117 */
			{	/* Ieee/input.scm 118 */
				obj_t BgL_auxz00_5327;

				obj_t BgL_auxz00_5320;

				obj_t BgL_auxz00_5313;

				if (INPUT_PORTP(BgL_portz00_4906))
					{	/* Ieee/input.scm 118 */
						BgL_auxz00_5327 = BgL_portz00_4906;
					}
				else
					{
						obj_t BgL_auxz00_5330;

						BgL_auxz00_5330 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3657z00zz__r4_input_6_10_2z00, BINT(((long) 5102)),
							BGl_string3661z00zz__r4_input_6_10_2z00,
							BGl_string3660z00zz__r4_input_6_10_2z00, BgL_portz00_4906);
						FAILURE(BgL_auxz00_5330, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_rgcz00_4905))
					{	/* Ieee/input.scm 118 */
						BgL_auxz00_5320 = BgL_rgcz00_4905;
					}
				else
					{
						obj_t BgL_auxz00_5323;

						BgL_auxz00_5323 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3657z00zz__r4_input_6_10_2z00, BINT(((long) 5102)),
							BGl_string3661z00zz__r4_input_6_10_2z00,
							BGl_string3659z00zz__r4_input_6_10_2z00, BgL_rgcz00_4905);
						FAILURE(BgL_auxz00_5323, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_lalrz00_4904))
					{	/* Ieee/input.scm 118 */
						BgL_auxz00_5313 = BgL_lalrz00_4904;
					}
				else
					{
						obj_t BgL_auxz00_5316;

						BgL_auxz00_5316 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3657z00zz__r4_input_6_10_2z00, BINT(((long) 5102)),
							BGl_string3661z00zz__r4_input_6_10_2z00,
							BGl_string3659z00zz__r4_input_6_10_2z00, BgL_lalrz00_4904);
						FAILURE(BgL_auxz00_5316, BFALSE, BFALSE);
					}
				return
					BGl_readzf2lalrpzf2zz__r4_input_6_10_2z00(BgL_auxz00_5313,
					BgL_auxz00_5320, BgL_auxz00_5327, BgL_eofzd2funzf3z21_4907);
			}
		}
	}



/* _read-char */
	obj_t BGl__readzd2charzd2zz__r4_input_6_10_2z00(obj_t BgL_envz00_10,
		obj_t BgL_optz00_9)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 125 */
			{	/* Ieee/input.scm 125 */

				{	/* Ieee/input.scm 125 */
					int BgL_aux2008z00_1134;

					BgL_aux2008z00_1134 = VECTOR_LENGTH(BgL_optz00_9);
					switch ((long) (BgL_aux2008z00_1134))
						{
						case ((long) 0):

							{	/* Ieee/input.scm 125 */
								obj_t BgL_ipz00_1136;

								{	/* Ieee/input.scm 125 */
									obj_t BgL_res3463z00_3763;

									{	/* Ieee/input.scm 125 */
										obj_t BgL_auxz00_5336;

										BgL_auxz00_5336 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res3463z00_3763 =
											BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_5336);
									}
									BgL_ipz00_1136 = BgL_res3463z00_3763;
								}
								{	/* Ieee/input.scm 125 */

									return
										BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_1136);
								}
							}
							break;
						case ((long) 1):

							{	/* Ieee/input.scm 125 */
								obj_t BgL_ipz00_1137;

								BgL_ipz00_1137 = VECTOR_REF(BgL_optz00_9, (int) (((long) 0)));
								{	/* Ieee/input.scm 125 */

									return
										BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_1137);
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* read-char */
	BGL_EXPORTED_DEF obj_t BGl_readzd2charzd2zz__r4_input_6_10_2z00(obj_t
		BgL_ipz00_8)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 125 */
			{
				obj_t BgL_inputzd2portzd2_1140;

				BgL_inputzd2portzd2_1140 = BgL_ipz00_8;
				{
					obj_t BgL_inputzd2portzd2_1173;

					long BgL_lastzd2matchzd2_1174;

					RGC_START_MATCH(BgL_inputzd2portzd2_1140);
					{	/* Ieee/input.scm 126 */
						long BgL_matchz00_1262;

						BgL_inputzd2portzd2_1173 = BgL_inputzd2portzd2_1140;
						BgL_lastzd2matchzd2_1174 = ((long) 1);
					BgL_zc3anonymousza32215ze3z83_1175:
						{	/* Ieee/input.scm 126 */
							int BgL_currentzd2charzd2_1176;

							BgL_currentzd2charzd2_1176 =
								RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1173);
							if (((long) (BgL_currentzd2charzd2_1176) == ((long) 0)))
								{	/* Ieee/input.scm 126 */
									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1173))
										{	/* Ieee/input.scm 126 */
											if (rgc_fill_buffer(BgL_inputzd2portzd2_1173))
												{

													goto BgL_zc3anonymousza32215ze3z83_1175;
												}
											else
												{	/* Ieee/input.scm 126 */
													BgL_matchz00_1262 = BgL_lastzd2matchzd2_1174;
												}
										}
									else
										{	/* Ieee/input.scm 126 */
											long BgL_newzd2matchzd2_3773;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_1173);
											BgL_newzd2matchzd2_3773 = ((long) 0);
											BgL_matchz00_1262 = BgL_newzd2matchzd2_3773;
								}}
							else
								{	/* Ieee/input.scm 126 */
									long BgL_newzd2matchzd2_3777;

									RGC_STOP_MATCH(BgL_inputzd2portzd2_1173);
									BgL_newzd2matchzd2_3777 = ((long) 0);
									BgL_matchz00_1262 = BgL_newzd2matchzd2_3777;
						}}
						RGC_SET_FILEPOS(BgL_inputzd2portzd2_1140);
						switch (BgL_matchz00_1262)
							{
							case ((long) 1):

								{	/* Ieee/input.scm 126 */
									bool_t BgL_testz00_5357;

									{	/* Ieee/input.scm 126 */
										long BgL_arg2283z00_1251;

										BgL_arg2283z00_1251 =
											RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_1140);
										BgL_testz00_5357 = (BgL_arg2283z00_1251 == ((long) 0));
									}
									if (BgL_testz00_5357)
										{	/* Ieee/input.scm 126 */
											return BCNST(256);
										}
									else
										{	/* Ieee/input.scm 126 */
											obj_t BgL_inputzd2portzd2_3783;

											BgL_inputzd2portzd2_3783 = BgL_inputzd2portzd2_1140;
											return
												BCHAR(RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_3783));
										}
								}
								break;
							case ((long) 0):

								{	/* Ieee/input.scm 127 */
									obj_t BgL_inputzd2portzd2_3786;

									BgL_inputzd2portzd2_3786 = BgL_inputzd2portzd2_1140;
									return BCHAR(RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_3786));
								}
								break;
							default:
								return
									BGl_errorz00zz__errorz00
									(BGl_string3650z00zz__r4_input_6_10_2z00,
									BGl_string3651z00zz__r4_input_6_10_2z00,
									BINT(BgL_matchz00_1262));
							}
					}
				}
			}
		}
	}



/* _peek-char */
	obj_t BGl__peekzd2charzd2zz__r4_input_6_10_2z00(obj_t BgL_envz00_13,
		obj_t BgL_optz00_12)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 133 */
			{	/* Ieee/input.scm 133 */

				{	/* Ieee/input.scm 133 */
					int BgL_aux2010z00_1295;

					BgL_aux2010z00_1295 = VECTOR_LENGTH(BgL_optz00_12);
					switch ((long) (BgL_aux2010z00_1295))
						{
						case ((long) 0):

							{	/* Ieee/input.scm 133 */
								obj_t BgL_ipz00_1297;

								{	/* Ieee/input.scm 133 */
									obj_t BgL_res3464z00_3788;

									{	/* Ieee/input.scm 133 */
										obj_t BgL_auxz00_5368;

										BgL_auxz00_5368 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res3464z00_3788 =
											BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_5368);
									}
									BgL_ipz00_1297 = BgL_res3464z00_3788;
								}
								{	/* Ieee/input.scm 133 */

									return
										BGl_peekzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_1297);
								}
							}
							break;
						case ((long) 1):

							{	/* Ieee/input.scm 133 */
								obj_t BgL_ipz00_1298;

								BgL_ipz00_1298 = VECTOR_REF(BgL_optz00_12, (int) (((long) 0)));
								{	/* Ieee/input.scm 133 */

									return
										BGl_peekzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_1298);
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* peek-char */
	BGL_EXPORTED_DEF obj_t BGl_peekzd2charzd2zz__r4_input_6_10_2z00(obj_t
		BgL_ipz00_11)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 133 */
			{
				obj_t BgL_inputzd2portzd2_1301;

				BgL_inputzd2portzd2_1301 = BgL_ipz00_11;
				{
					obj_t BgL_inputzd2portzd2_1334;

					long BgL_lastzd2matchzd2_1335;

					RGC_START_MATCH(BgL_inputzd2portzd2_1301);
					{	/* Ieee/input.scm 134 */
						long BgL_matchz00_1423;

						BgL_inputzd2portzd2_1334 = BgL_inputzd2portzd2_1301;
						BgL_lastzd2matchzd2_1335 = ((long) 1);
					BgL_zc3anonymousza32295ze3z83_1336:
						{	/* Ieee/input.scm 134 */
							int BgL_currentzd2charzd2_1337;

							BgL_currentzd2charzd2_1337 =
								RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1334);
							if (((long) (BgL_currentzd2charzd2_1337) == ((long) 0)))
								{	/* Ieee/input.scm 134 */
									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1334))
										{	/* Ieee/input.scm 134 */
											if (rgc_fill_buffer(BgL_inputzd2portzd2_1334))
												{

													goto BgL_zc3anonymousza32295ze3z83_1336;
												}
											else
												{	/* Ieee/input.scm 134 */
													BgL_matchz00_1423 = BgL_lastzd2matchzd2_1335;
												}
										}
									else
										{	/* Ieee/input.scm 134 */
											long BgL_newzd2matchzd2_3798;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_1334);
											BgL_newzd2matchzd2_3798 = ((long) 0);
											BgL_matchz00_1423 = BgL_newzd2matchzd2_3798;
								}}
							else
								{	/* Ieee/input.scm 134 */
									long BgL_newzd2matchzd2_3802;

									RGC_STOP_MATCH(BgL_inputzd2portzd2_1334);
									BgL_newzd2matchzd2_3802 = ((long) 0);
									BgL_matchz00_1423 = BgL_newzd2matchzd2_3802;
						}}
						RGC_SET_FILEPOS(BgL_inputzd2portzd2_1301);
						switch (BgL_matchz00_1423)
							{
							case ((long) 1):

								{	/* Ieee/input.scm 134 */
									bool_t BgL_testz00_5389;

									{	/* Ieee/input.scm 134 */
										long BgL_arg2359z00_1412;

										BgL_arg2359z00_1412 =
											RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_1301);
										BgL_testz00_5389 = (BgL_arg2359z00_1412 == ((long) 0));
									}
									if (BgL_testz00_5389)
										{	/* Ieee/input.scm 134 */
											return BCNST(256);
										}
									else
										{	/* Ieee/input.scm 134 */
											obj_t BgL_inputzd2portzd2_3808;

											BgL_inputzd2portzd2_3808 = BgL_inputzd2portzd2_1301;
											return
												BCHAR(RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_3808));
										}
								}
								break;
							case ((long) 0):

								{	/* Ieee/input.scm 136 */
									unsigned char BgL_cz00_1427;

									BgL_cz00_1427 =
										RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_1301);
									{	/* Ieee/input.scm 137 */
										obj_t BgL_arg2368z00_1428;

										long BgL_arg2369z00_1429;

										BgL_arg2368z00_1428 = BgL_inputzd2portzd2_1301;
										BgL_arg2369z00_1429 = ((unsigned char) (BgL_cz00_1427));
										rgc_buffer_unget_char(BgL_arg2368z00_1428,
											(int) (BgL_arg2369z00_1429));
									}
									return BCHAR(BgL_cz00_1427);
								}
								break;
							default:
								return
									BGl_errorz00zz__errorz00
									(BGl_string3650z00zz__r4_input_6_10_2z00,
									BGl_string3651z00zz__r4_input_6_10_2z00,
									BINT(BgL_matchz00_1423));
							}
					}
				}
			}
		}
	}



/* _read-byte */
	obj_t BGl__readzd2bytezd2zz__r4_input_6_10_2z00(obj_t BgL_envz00_16,
		obj_t BgL_optz00_15)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 144 */
			{	/* Ieee/input.scm 144 */

				{	/* Ieee/input.scm 144 */
					int BgL_aux2012z00_1459;

					BgL_aux2012z00_1459 = VECTOR_LENGTH(BgL_optz00_15);
					switch ((long) (BgL_aux2012z00_1459))
						{
						case ((long) 0):

							{	/* Ieee/input.scm 144 */
								obj_t BgL_ipz00_1461;

								{	/* Ieee/input.scm 144 */
									obj_t BgL_res3466z00_3817;

									{	/* Ieee/input.scm 144 */
										obj_t BgL_auxz00_5404;

										BgL_auxz00_5404 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res3466z00_3817 =
											BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_5404);
									}
									BgL_ipz00_1461 = BgL_res3466z00_3817;
								}
								{	/* Ieee/input.scm 144 */

									return
										BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_ipz00_1461);
								}
							}
							break;
						case ((long) 1):

							{	/* Ieee/input.scm 144 */
								obj_t BgL_ipz00_1462;

								BgL_ipz00_1462 = VECTOR_REF(BgL_optz00_15, (int) (((long) 0)));
								{	/* Ieee/input.scm 144 */

									return
										BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_ipz00_1462);
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* read-byte */
	BGL_EXPORTED_DEF obj_t BGl_readzd2bytezd2zz__r4_input_6_10_2z00(obj_t
		BgL_ipz00_14)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 144 */
			{
				obj_t BgL_inputzd2portzd2_1465;

				BgL_inputzd2portzd2_1465 = BgL_ipz00_14;
				{
					obj_t BgL_inputzd2portzd2_1498;

					long BgL_lastzd2matchzd2_1499;

					RGC_START_MATCH(BgL_inputzd2portzd2_1465);
					{	/* Ieee/input.scm 145 */
						long BgL_matchz00_1587;

						BgL_inputzd2portzd2_1498 = BgL_inputzd2portzd2_1465;
						BgL_lastzd2matchzd2_1499 = ((long) 1);
					BgL_zc3anonymousza32373ze3z83_1500:
						{	/* Ieee/input.scm 145 */
							int BgL_currentzd2charzd2_1501;

							BgL_currentzd2charzd2_1501 =
								RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1498);
							if (((long) (BgL_currentzd2charzd2_1501) == ((long) 0)))
								{	/* Ieee/input.scm 145 */
									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1498))
										{	/* Ieee/input.scm 145 */
											if (rgc_fill_buffer(BgL_inputzd2portzd2_1498))
												{

													goto BgL_zc3anonymousza32373ze3z83_1500;
												}
											else
												{	/* Ieee/input.scm 145 */
													BgL_matchz00_1587 = BgL_lastzd2matchzd2_1499;
												}
										}
									else
										{	/* Ieee/input.scm 145 */
											long BgL_newzd2matchzd2_3827;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_1498);
											BgL_newzd2matchzd2_3827 = ((long) 0);
											BgL_matchz00_1587 = BgL_newzd2matchzd2_3827;
								}}
							else
								{	/* Ieee/input.scm 145 */
									long BgL_newzd2matchzd2_3831;

									RGC_STOP_MATCH(BgL_inputzd2portzd2_1498);
									BgL_newzd2matchzd2_3831 = ((long) 0);
									BgL_matchz00_1587 = BgL_newzd2matchzd2_3831;
						}}
						RGC_SET_FILEPOS(BgL_inputzd2portzd2_1465);
						switch (BgL_matchz00_1587)
							{
							case ((long) 1):

								{	/* Ieee/input.scm 145 */
									bool_t BgL_testz00_5425;

									{	/* Ieee/input.scm 145 */
										long BgL_arg2437z00_1576;

										BgL_arg2437z00_1576 =
											RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_1465);
										BgL_testz00_5425 = (BgL_arg2437z00_1576 == ((long) 0));
									}
									if (BgL_testz00_5425)
										{	/* Ieee/input.scm 145 */
											return BCNST(256);
										}
									else
										{	/* Ieee/input.scm 145 */
											obj_t BgL_inputzd2portzd2_3837;

											BgL_inputzd2portzd2_3837 = BgL_inputzd2portzd2_1465;
											return
												BCHAR(RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_3837));
										}
								}
								break;
							case ((long) 0):

								{	/* Ieee/input.scm 146 */
									obj_t BgL_inputzd2portzd2_3840;

									BgL_inputzd2portzd2_3840 = BgL_inputzd2portzd2_1465;
									return BINT(RGC_BUFFER_BYTE(BgL_inputzd2portzd2_3840));
								}
								break;
							default:
								return
									BGl_errorz00zz__errorz00
									(BGl_string3650z00zz__r4_input_6_10_2z00,
									BGl_string3651z00zz__r4_input_6_10_2z00,
									BINT(BgL_matchz00_1587));
							}
					}
				}
			}
		}
	}



/* _peek-byte */
	obj_t BGl__peekzd2bytezd2zz__r4_input_6_10_2z00(obj_t BgL_envz00_19,
		obj_t BgL_optz00_18)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 152 */
			{	/* Ieee/input.scm 152 */

				{	/* Ieee/input.scm 152 */
					int BgL_aux2014z00_1620;

					BgL_aux2014z00_1620 = VECTOR_LENGTH(BgL_optz00_18);
					switch ((long) (BgL_aux2014z00_1620))
						{
						case ((long) 0):

							{	/* Ieee/input.scm 152 */
								obj_t BgL_ipz00_1622;

								{	/* Ieee/input.scm 152 */
									obj_t BgL_res3467z00_3842;

									{	/* Ieee/input.scm 152 */
										obj_t BgL_auxz00_5436;

										BgL_auxz00_5436 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res3467z00_3842 =
											BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_5436);
									}
									BgL_ipz00_1622 = BgL_res3467z00_3842;
								}
								{	/* Ieee/input.scm 152 */

									return
										BGl_peekzd2bytezd2zz__r4_input_6_10_2z00(BgL_ipz00_1622);
								}
							}
							break;
						case ((long) 1):

							{	/* Ieee/input.scm 152 */
								obj_t BgL_ipz00_1623;

								BgL_ipz00_1623 = VECTOR_REF(BgL_optz00_18, (int) (((long) 0)));
								{	/* Ieee/input.scm 152 */

									return
										BGl_peekzd2bytezd2zz__r4_input_6_10_2z00(BgL_ipz00_1623);
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* peek-byte */
	BGL_EXPORTED_DEF obj_t BGl_peekzd2bytezd2zz__r4_input_6_10_2z00(obj_t
		BgL_ipz00_17)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 152 */
			{
				obj_t BgL_inputzd2portzd2_1626;

				BgL_inputzd2portzd2_1626 = BgL_ipz00_17;
				{
					obj_t BgL_inputzd2portzd2_1659;

					long BgL_lastzd2matchzd2_1660;

					RGC_START_MATCH(BgL_inputzd2portzd2_1626);
					{	/* Ieee/input.scm 153 */
						long BgL_matchz00_1748;

						BgL_inputzd2portzd2_1659 = BgL_inputzd2portzd2_1626;
						BgL_lastzd2matchzd2_1660 = ((long) 1);
					BgL_zc3anonymousza32449ze3z83_1661:
						{	/* Ieee/input.scm 153 */
							int BgL_currentzd2charzd2_1662;

							BgL_currentzd2charzd2_1662 =
								RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1659);
							if (((long) (BgL_currentzd2charzd2_1662) == ((long) 0)))
								{	/* Ieee/input.scm 153 */
									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1659))
										{	/* Ieee/input.scm 153 */
											if (rgc_fill_buffer(BgL_inputzd2portzd2_1659))
												{

													goto BgL_zc3anonymousza32449ze3z83_1661;
												}
											else
												{	/* Ieee/input.scm 153 */
													BgL_matchz00_1748 = BgL_lastzd2matchzd2_1660;
												}
										}
									else
										{	/* Ieee/input.scm 153 */
											long BgL_newzd2matchzd2_3852;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_1659);
											BgL_newzd2matchzd2_3852 = ((long) 0);
											BgL_matchz00_1748 = BgL_newzd2matchzd2_3852;
								}}
							else
								{	/* Ieee/input.scm 153 */
									long BgL_newzd2matchzd2_3856;

									RGC_STOP_MATCH(BgL_inputzd2portzd2_1659);
									BgL_newzd2matchzd2_3856 = ((long) 0);
									BgL_matchz00_1748 = BgL_newzd2matchzd2_3856;
						}}
						RGC_SET_FILEPOS(BgL_inputzd2portzd2_1626);
						switch (BgL_matchz00_1748)
							{
							case ((long) 1):

								{	/* Ieee/input.scm 153 */
									bool_t BgL_testz00_5457;

									{	/* Ieee/input.scm 153 */
										long BgL_arg2516z00_1737;

										BgL_arg2516z00_1737 =
											RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_1626);
										BgL_testz00_5457 = (BgL_arg2516z00_1737 == ((long) 0));
									}
									if (BgL_testz00_5457)
										{	/* Ieee/input.scm 153 */
											return BCNST(256);
										}
									else
										{	/* Ieee/input.scm 153 */
											obj_t BgL_inputzd2portzd2_3862;

											BgL_inputzd2portzd2_3862 = BgL_inputzd2portzd2_1626;
											return
												BCHAR(RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_3862));
										}
								}
								break;
							case ((long) 0):

								{	/* Ieee/input.scm 155 */
									int BgL_cz00_1752;

									BgL_cz00_1752 = RGC_BUFFER_BYTE(BgL_inputzd2portzd2_1626);
									rgc_buffer_unget_char(BgL_inputzd2portzd2_1626,
										BgL_cz00_1752);
									return BINT(BgL_cz00_1752);
								}
								break;
							default:
								return
									BGl_errorz00zz__errorz00
									(BGl_string3650z00zz__r4_input_6_10_2z00,
									BGl_string3651z00zz__r4_input_6_10_2z00,
									BINT(BgL_matchz00_1748));
							}
					}
				}
			}
		}
	}



/* eof-object? */
	BGL_EXPORTED_DEF bool_t BGl_eofzd2objectzf3z21zz__r4_input_6_10_2z00(obj_t
		BgL_objectz00_20)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 163 */
			return EOF_OBJECTP(BgL_objectz00_20);
		}
	}



/* _eof-object? */
	obj_t BGl__eofzd2objectzf3z21zz__r4_input_6_10_2z00(obj_t BgL_envz00_4908,
		obj_t BgL_objectz00_4909)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 163 */
			return BBOOL(EOF_OBJECTP(BgL_objectz00_4909));
		}
	}



/* _char-ready? */
	obj_t BGl__charzd2readyzf3z21zz__r4_input_6_10_2z00(obj_t BgL_envz00_23,
		obj_t BgL_optz00_22)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 169 */
			{	/* Ieee/input.scm 169 */

				{	/* Ieee/input.scm 169 */
					int BgL_aux2016z00_5055;

					BgL_aux2016z00_5055 = VECTOR_LENGTH(BgL_optz00_22);
					switch ((long) (BgL_aux2016z00_5055))
						{
						case ((long) 0):

							{	/* Ieee/input.scm 169 */
								obj_t BgL_ipz00_5056;

								{	/* Ieee/input.scm 169 */
									obj_t BgL_res3469z00_5057;

									{	/* Ieee/input.scm 169 */
										obj_t BgL_auxz00_5472;

										BgL_auxz00_5472 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res3469z00_5057 =
											BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_5472);
									}
									BgL_ipz00_5056 = BgL_res3469z00_5057;
								}
								{	/* Ieee/input.scm 169 */

									return BBOOL(bgl_rgc_charready(BgL_ipz00_5056));
								}
							}
							break;
						case ((long) 1):

							{	/* Ieee/input.scm 169 */
								obj_t BgL_ipz00_5058;

								BgL_ipz00_5058 = VECTOR_REF(BgL_optz00_22, (int) (((long) 0)));
								{	/* Ieee/input.scm 169 */

									{	/* Ieee/input.scm 169 */
										bool_t BgL_auxz00_5479;

										{	/* Ieee/input.scm 169 */
											obj_t BgL_auxz00_5480;

											if (INPUT_PORTP(BgL_ipz00_5058))
												{	/* Ieee/input.scm 169 */
													BgL_auxz00_5480 = BgL_ipz00_5058;
												}
											else
												{
													obj_t BgL_auxz00_5483;

													BgL_auxz00_5483 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3657z00zz__r4_input_6_10_2z00,
														BINT(((long) 7423)),
														BGl_string3662z00zz__r4_input_6_10_2z00,
														BGl_string3660z00zz__r4_input_6_10_2z00,
														BgL_ipz00_5058);
													FAILURE(BgL_auxz00_5483, BFALSE, BFALSE);
												}
											BgL_auxz00_5479 = bgl_rgc_charready(BgL_auxz00_5480);
										}
										return BBOOL(BgL_auxz00_5479);
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* char-ready? */
	BGL_EXPORTED_DEF bool_t BGl_charzd2readyzf3z21zz__r4_input_6_10_2z00(obj_t
		BgL_ipz00_21)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 169 */
			return bgl_rgc_charready(BgL_ipz00_21);
		}
	}



/* _read-line */
	obj_t BGl__readzd2linezd2zz__r4_input_6_10_2z00(obj_t BgL_envz00_26,
		obj_t BgL_optz00_25)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 175 */
			{	/* Ieee/input.scm 175 */

				{	/* Ieee/input.scm 175 */
					int BgL_aux2018z00_1788;

					BgL_aux2018z00_1788 = VECTOR_LENGTH(BgL_optz00_25);
					switch ((long) (BgL_aux2018z00_1788))
						{
						case ((long) 0):

							{	/* Ieee/input.scm 175 */
								obj_t BgL_ipz00_1790;

								{	/* Ieee/input.scm 175 */
									obj_t BgL_res3470z00_3879;

									{	/* Ieee/input.scm 175 */
										obj_t BgL_auxz00_5493;

										BgL_auxz00_5493 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res3470z00_3879 =
											BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_5493);
									}
									BgL_ipz00_1790 = BgL_res3470z00_3879;
								}
								{	/* Ieee/input.scm 175 */

									return
										BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_1790);
								}
							}
							break;
						case ((long) 1):

							{	/* Ieee/input.scm 175 */
								obj_t BgL_ipz00_1791;

								BgL_ipz00_1791 = VECTOR_REF(BgL_optz00_25, (int) (((long) 0)));
								{	/* Ieee/input.scm 175 */

									return
										BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_1791);
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* read-line */
	BGL_EXPORTED_DEF obj_t BGl_readzd2linezd2zz__r4_input_6_10_2z00(obj_t
		BgL_ipz00_24)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 175 */
			{	/* Ieee/input.scm 176 */
				bool_t BgL_testz00_5502;

				{	/* Ieee/input.scm 176 */
					int BgL_arg2648z00_2046;

					BgL_arg2648z00_2046 = BGL_INPUT_PORT_BUFSIZ(BgL_ipz00_24);
					BgL_testz00_5502 = ((long) (BgL_arg2648z00_2046) > ((long) 2));
				}
				if (BgL_testz00_5502)
					{
						obj_t BgL_inputzd2portzd2_1795;

						BgL_inputzd2portzd2_1795 = BgL_ipz00_24;
						{
							int BgL_minz00_1903;

							int BgL_maxz00_1904;

							obj_t BgL_inputzd2portzd2_1880;

							long BgL_lastzd2matchzd2_1881;

							obj_t BgL_inputzd2portzd2_1872;

							long BgL_lastzd2matchzd2_1873;

							obj_t BgL_inputzd2portzd2_1859;

							long BgL_lastzd2matchzd2_1860;

							obj_t BgL_inputzd2portzd2_1849;

							long BgL_lastzd2matchzd2_1850;

							obj_t BgL_inputzd2portzd2_1831;

							long BgL_lastzd2matchzd2_1832;

							RGC_START_MATCH(BgL_inputzd2portzd2_1795);
							{	/* Ieee/input.scm 177 */
								long BgL_matchz00_1974;

								BgL_inputzd2portzd2_1859 = BgL_inputzd2portzd2_1795;
								BgL_lastzd2matchzd2_1860 = ((long) 4);
							BgL_zc3anonymousza32540ze3z83_1861:
								{	/* Ieee/input.scm 177 */
									int BgL_currentzd2charzd2_1862;

									BgL_currentzd2charzd2_1862 =
										RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1859);
									switch ((long) (BgL_currentzd2charzd2_1862))
										{
										case ((long) 0):

											if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1859))
												{	/* Ieee/input.scm 177 */
													if (rgc_fill_buffer(BgL_inputzd2portzd2_1859))
														{

															goto BgL_zc3anonymousza32540ze3z83_1861;
														}
													else
														{	/* Ieee/input.scm 177 */
															BgL_matchz00_1974 = BgL_lastzd2matchzd2_1860;
														}
												}
											else
												{	/* Ieee/input.scm 177 */
													BgL_inputzd2portzd2_1831 = BgL_inputzd2portzd2_1859;
													BgL_lastzd2matchzd2_1832 = BgL_lastzd2matchzd2_1860;
												BgL_zc3anonymousza32530ze3z83_1833:
													{	/* Ieee/input.scm 177 */
														long BgL_newzd2matchzd2_1834;

														RGC_STOP_MATCH(BgL_inputzd2portzd2_1831);
														BgL_newzd2matchzd2_1834 = ((long) 2);
														{	/* Ieee/input.scm 177 */
															int BgL_currentzd2charzd2_1835;

															BgL_currentzd2charzd2_1835 =
																RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1831);
															switch ((long) (BgL_currentzd2charzd2_1835))
																{
																case ((long) 0):

																	if (RGC_BUFFER_EMPTY
																		(BgL_inputzd2portzd2_1831))
																		{	/* Ieee/input.scm 177 */
																			if (rgc_fill_buffer
																				(BgL_inputzd2portzd2_1831))
																				{

																					goto
																						BgL_zc3anonymousza32530ze3z83_1833;
																				}
																			else
																				{	/* Ieee/input.scm 177 */
																					BgL_matchz00_1974 =
																						BgL_newzd2matchzd2_1834;
																				}
																		}
																	else
																		{	/* Ieee/input.scm 177 */
																			BgL_inputzd2portzd2_1849 =
																				BgL_inputzd2portzd2_1831;
																			BgL_lastzd2matchzd2_1850 =
																				BgL_newzd2matchzd2_1834;
																		BgL_zc3anonymousza32536ze3z83_1851:
																			{	/* Ieee/input.scm 177 */
																				long BgL_newzd2matchzd2_1852;

																				RGC_STOP_MATCH
																					(BgL_inputzd2portzd2_1849);
																				BgL_newzd2matchzd2_1852 = ((long) 2);
																				{	/* Ieee/input.scm 177 */
																					int BgL_currentzd2charzd2_1853;

																					BgL_currentzd2charzd2_1853 =
																						RGC_BUFFER_GET_CHAR
																						(BgL_inputzd2portzd2_1849);
																					switch ((long)
																						(BgL_currentzd2charzd2_1853))
																						{
																						case ((long) 0):

																							if (RGC_BUFFER_EMPTY
																								(BgL_inputzd2portzd2_1849))
																								{	/* Ieee/input.scm 177 */
																									if (rgc_fill_buffer
																										(BgL_inputzd2portzd2_1849))
																										{

																											goto
																												BgL_zc3anonymousza32536ze3z83_1851;
																										}
																									else
																										{	/* Ieee/input.scm 177 */
																											BgL_matchz00_1974 =
																												BgL_newzd2matchzd2_1852;
																										}
																								}
																							else
																								{
																									long BgL_lastzd2matchzd2_5524;

																									BgL_lastzd2matchzd2_5524 =
																										BgL_newzd2matchzd2_1852;
																									BgL_lastzd2matchzd2_1850 =
																										BgL_lastzd2matchzd2_5524;
																									goto
																										BgL_zc3anonymousza32536ze3z83_1851;
																								}
																							break;
																						case ((long) 13):

																							BgL_inputzd2portzd2_1872 =
																								BgL_inputzd2portzd2_1849;
																							BgL_lastzd2matchzd2_1873 =
																								BgL_newzd2matchzd2_1852;
																						BgL_zc3anonymousza32545ze3z83_1874:
																							{	/* Ieee/input.scm 177 */
																								long BgL_newzd2matchzd2_1875;

																								RGC_STOP_MATCH
																									(BgL_inputzd2portzd2_1872);
																								BgL_newzd2matchzd2_1875 =
																									((long) 0);
																								{	/* Ieee/input.scm 177 */
																									int
																										BgL_currentzd2charzd2_1876;
																									BgL_currentzd2charzd2_1876 =
																										RGC_BUFFER_GET_CHAR
																										(BgL_inputzd2portzd2_1872);
																									if (((long)
																											(BgL_currentzd2charzd2_1876)
																											== ((long) 0)))
																										{	/* Ieee/input.scm 177 */
																											bool_t BgL_testz00_5530;

																											{	/* Ieee/input.scm 177 */
																												bool_t
																													BgL_res3471z00_3919;
																												{	/* Ieee/input.scm 177 */
																													obj_t
																														BgL_inputzd2portzd2_3915;
																													BgL_inputzd2portzd2_3915
																														=
																														BgL_inputzd2portzd2_1872;
																													if (RGC_BUFFER_EMPTY
																														(BgL_inputzd2portzd2_3915))
																														{	/* Ieee/input.scm 177 */
																															BgL_res3471z00_3919
																																=
																																rgc_fill_buffer
																																(BgL_inputzd2portzd2_3915);
																														}
																													else
																														{	/* Ieee/input.scm 177 */
																															BgL_res3471z00_3919
																																= ((bool_t) 0);
																														}
																												}
																												BgL_testz00_5530 =
																													BgL_res3471z00_3919;
																											}
																											if (BgL_testz00_5530)
																												{

																													goto
																														BgL_zc3anonymousza32545ze3z83_1874;
																												}
																											else
																												{	/* Ieee/input.scm 177 */
																													BgL_matchz00_1974 =
																														BgL_newzd2matchzd2_1875;
																												}
																										}
																									else
																										{	/* Ieee/input.scm 177 */
																											if (
																												((long)
																													(BgL_currentzd2charzd2_1876)
																													== ((long) 10)))
																												{	/* Ieee/input.scm 177 */
																													long
																														BgL_newzd2matchzd2_3924;
																													RGC_STOP_MATCH
																														(BgL_inputzd2portzd2_1872);
																													BgL_newzd2matchzd2_3924
																														= ((long) 1);
																													BgL_matchz00_1974 =
																														BgL_newzd2matchzd2_3924;
																												}
																											else
																												{	/* Ieee/input.scm 177 */
																													BgL_matchz00_1974 =
																														BgL_newzd2matchzd2_1875;
																												}
																										}
																								}
																							}
																							break;
																						case ((long) 10):

																							{	/* Ieee/input.scm 177 */
																								long BgL_newzd2matchzd2_3900;

																								RGC_STOP_MATCH
																									(BgL_inputzd2portzd2_1849);
																								BgL_newzd2matchzd2_3900 =
																									((long) 0);
																								BgL_matchz00_1974 =
																									BgL_newzd2matchzd2_3900;
																							} break;
																						default:
																							{
																								long BgL_lastzd2matchzd2_5539;

																								BgL_lastzd2matchzd2_5539 =
																									BgL_newzd2matchzd2_1852;
																								BgL_lastzd2matchzd2_1850 =
																									BgL_lastzd2matchzd2_5539;
																								goto
																									BgL_zc3anonymousza32536ze3z83_1851;
																							}
																						}
																				}
																			}
																		}
																	break;
																case ((long) 13):

																	{
																		long BgL_lastzd2matchzd2_5543;

																		obj_t BgL_inputzd2portzd2_5542;

																		BgL_inputzd2portzd2_5542 =
																			BgL_inputzd2portzd2_1831;
																		BgL_lastzd2matchzd2_5543 =
																			BgL_newzd2matchzd2_1834;
																		BgL_lastzd2matchzd2_1873 =
																			BgL_lastzd2matchzd2_5543;
																		BgL_inputzd2portzd2_1872 =
																			BgL_inputzd2portzd2_5542;
																		goto BgL_zc3anonymousza32545ze3z83_1874;
																	}
																	break;
																case ((long) 10):

																	{	/* Ieee/input.scm 177 */
																		long BgL_newzd2matchzd2_3888;

																		RGC_STOP_MATCH(BgL_inputzd2portzd2_1831);
																		BgL_newzd2matchzd2_3888 = ((long) 0);
																		BgL_matchz00_1974 = BgL_newzd2matchzd2_3888;
																	} break;
																default:
																	{
																		long BgL_lastzd2matchzd2_5546;

																		obj_t BgL_inputzd2portzd2_5545;

																		BgL_inputzd2portzd2_5545 =
																			BgL_inputzd2portzd2_1831;
																		BgL_lastzd2matchzd2_5546 =
																			BgL_newzd2matchzd2_1834;
																		BgL_lastzd2matchzd2_1850 =
																			BgL_lastzd2matchzd2_5546;
																		BgL_inputzd2portzd2_1849 =
																			BgL_inputzd2portzd2_5545;
																		goto BgL_zc3anonymousza32536ze3z83_1851;
																	}
																}
														}
													}
												}
											break;
										case ((long) 13):

											BgL_inputzd2portzd2_1880 = BgL_inputzd2portzd2_1859;
											BgL_lastzd2matchzd2_1881 = BgL_lastzd2matchzd2_1860;
										BgL_zc3anonymousza32549ze3z83_1882:
											{	/* Ieee/input.scm 177 */
												long BgL_newzd2matchzd2_1883;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_1880);
												BgL_newzd2matchzd2_1883 = ((long) 3);
												{	/* Ieee/input.scm 177 */
													int BgL_currentzd2charzd2_1884;

													BgL_currentzd2charzd2_1884 =
														RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1880);
													if (
														((long) (BgL_currentzd2charzd2_1884) == ((long) 0)))
														{	/* Ieee/input.scm 177 */
															bool_t BgL_testz00_5554;

															{	/* Ieee/input.scm 177 */
																bool_t BgL_res3472z00_3934;

																{	/* Ieee/input.scm 177 */
																	obj_t BgL_inputzd2portzd2_3930;

																	BgL_inputzd2portzd2_3930 =
																		BgL_inputzd2portzd2_1880;
																	if (RGC_BUFFER_EMPTY
																		(BgL_inputzd2portzd2_3930))
																		{	/* Ieee/input.scm 177 */
																			BgL_res3472z00_3934 =
																				rgc_fill_buffer
																				(BgL_inputzd2portzd2_3930);
																		}
																	else
																		{	/* Ieee/input.scm 177 */
																			BgL_res3472z00_3934 = ((bool_t) 0);
																		}
																}
																BgL_testz00_5554 = BgL_res3472z00_3934;
															}
															if (BgL_testz00_5554)
																{

																	goto BgL_zc3anonymousza32549ze3z83_1882;
																}
															else
																{	/* Ieee/input.scm 177 */
																	BgL_matchz00_1974 = BgL_newzd2matchzd2_1883;
																}
														}
													else
														{	/* Ieee/input.scm 177 */
															if (
																((long) (BgL_currentzd2charzd2_1884) ==
																	((long) 10)))
																{	/* Ieee/input.scm 177 */
																	long BgL_newzd2matchzd2_3939;

																	RGC_STOP_MATCH(BgL_inputzd2portzd2_1880);
																	BgL_newzd2matchzd2_3939 = ((long) 3);
																	BgL_matchz00_1974 = BgL_newzd2matchzd2_3939;
																}
															else
																{	/* Ieee/input.scm 177 */
																	BgL_matchz00_1974 = BgL_newzd2matchzd2_1883;
																}
														}
												}
											}
											break;
										case ((long) 10):

											{	/* Ieee/input.scm 177 */
												long BgL_newzd2matchzd2_3907;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_1859);
												BgL_newzd2matchzd2_3907 = ((long) 3);
												BgL_matchz00_1974 = BgL_newzd2matchzd2_3907;
											} break;
										default:
											{
												long BgL_lastzd2matchzd2_5564;

												obj_t BgL_inputzd2portzd2_5563;

												BgL_inputzd2portzd2_5563 = BgL_inputzd2portzd2_1859;
												BgL_lastzd2matchzd2_5564 = BgL_lastzd2matchzd2_1860;
												BgL_lastzd2matchzd2_1832 = BgL_lastzd2matchzd2_5564;
												BgL_inputzd2portzd2_1831 = BgL_inputzd2portzd2_5563;
												goto BgL_zc3anonymousza32530ze3z83_1833;
											}
										}
								}
								RGC_SET_FILEPOS(BgL_inputzd2portzd2_1795);
								switch (BgL_matchz00_1974)
									{
									case ((long) 4):

										{	/* Ieee/input.scm 177 */
											bool_t BgL_testz00_5568;

											{	/* Ieee/input.scm 177 */
												long BgL_arg2616z00_1963;

												BgL_arg2616z00_1963 =
													RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_1795);
												BgL_testz00_5568 = (BgL_arg2616z00_1963 == ((long) 0));
											}
											if (BgL_testz00_5568)
												{	/* Ieee/input.scm 177 */
													return BCNST(256);
												}
											else
												{	/* Ieee/input.scm 177 */
													obj_t BgL_inputzd2portzd2_3979;

													BgL_inputzd2portzd2_3979 = BgL_inputzd2portzd2_1795;
													return
														BCHAR(RGC_BUFFER_CHARACTER
														(BgL_inputzd2portzd2_3979));
												}
										}
										break;
									case ((long) 3):

										return BGl_string3663z00zz__r4_input_6_10_2z00;
										break;
									case ((long) 2):

										{	/* Ieee/input.scm 184 */
											obj_t BgL_res3479z00_3989;

											{	/* Ieee/input.scm 184 */
												int BgL_arg2561z00_3983;

												{	/* Ieee/input.scm 184 */
													int BgL_res3478z00_3985;

													{	/* Ieee/input.scm 184 */
														obj_t BgL_inputzd2portzd2_3984;

														BgL_inputzd2portzd2_3984 = BgL_inputzd2portzd2_1795;
														BgL_res3478z00_3985 =
															(int) (RGC_BUFFER_LENGTH
															(BgL_inputzd2portzd2_3984));
													}
													BgL_arg2561z00_3983 = BgL_res3478z00_3985;
												}
												BgL_res3479z00_3989 =
													rgc_buffer_substring(BgL_inputzd2portzd2_1795,
													((long) 0), (long) (BgL_arg2561z00_3983));
											}
											return BgL_res3479z00_3989;
										}
										break;
									case ((long) 1):

										{	/* Ieee/input.scm 182 */
											long BgL_arg2626z00_1979;

											{	/* Ieee/input.scm 182 */
												int BgL_arg2627z00_1980;

												{	/* Ieee/input.scm 182 */
													int BgL_res3480z00_3991;

													{	/* Ieee/input.scm 182 */
														obj_t BgL_inputzd2portzd2_3990;

														BgL_inputzd2portzd2_3990 = BgL_inputzd2portzd2_1795;
														BgL_res3480z00_3991 =
															(int) (RGC_BUFFER_LENGTH
															(BgL_inputzd2portzd2_3990));
													}
													BgL_arg2627z00_1980 = BgL_res3480z00_3991;
												}
												BgL_arg2626z00_1979 =
													((long) (BgL_arg2627z00_1980) - ((long) 2));
											}
											BgL_minz00_1903 = (int) (((long) 0));
											BgL_maxz00_1904 = (int) (BgL_arg2626z00_1979);
										BgL_lambda2562z00_1905:
											if (((long) (BgL_maxz00_1904) < ((long) 0)))
												{	/* Ieee/input.scm 177 */
													int BgL_arg2564z00_1907;

													{	/* Ieee/input.scm 177 */
														int BgL_res3474z00_3953;

														{	/* Ieee/input.scm 177 */
															obj_t BgL_inputzd2portzd2_3952;

															BgL_inputzd2portzd2_3952 =
																BgL_inputzd2portzd2_1795;
															BgL_res3474z00_3953 =
																(int) (RGC_BUFFER_LENGTH
																(BgL_inputzd2portzd2_3952));
														}
														BgL_arg2564z00_1907 = BgL_res3474z00_3953;
													}
													{	/* Ieee/input.scm 177 */
														long BgL_za71za7_3954;

														long BgL_za72za7_3955;

														BgL_za71za7_3954 = (long) (BgL_arg2564z00_1907);
														BgL_za72za7_3955 = (long) (BgL_maxz00_1904);
														BgL_maxz00_1904 =
															(int) ((BgL_za71za7_3954 + BgL_za72za7_3955));
												}}
											else
												{	/* Ieee/input.scm 177 */
													BFALSE;
												}
											{	/* Ieee/input.scm 177 */
												bool_t BgL_testz00_5590;

												if (((long) (BgL_minz00_1903) >= ((long) 0)))
													{	/* Ieee/input.scm 177 */
														if (
															((long) (BgL_maxz00_1904) >=
																(long) (BgL_minz00_1903)))
															{	/* Ieee/input.scm 177 */
																int BgL_arg2576z00_1917;

																{	/* Ieee/input.scm 177 */
																	int BgL_res3475z00_3961;

																	{	/* Ieee/input.scm 177 */
																		obj_t BgL_inputzd2portzd2_3960;

																		BgL_inputzd2portzd2_3960 =
																			BgL_inputzd2portzd2_1795;
																		BgL_res3475z00_3961 =
																			(int) (RGC_BUFFER_LENGTH
																			(BgL_inputzd2portzd2_3960));
																	}
																	BgL_arg2576z00_1917 = BgL_res3475z00_3961;
																}
																BgL_testz00_5590 =
																	(
																	(long) (BgL_maxz00_1904) <=
																	(long) (BgL_arg2576z00_1917));
															}
														else
															{	/* Ieee/input.scm 177 */
																BgL_testz00_5590 = ((bool_t) 0);
															}
													}
												else
													{	/* Ieee/input.scm 177 */
														BgL_testz00_5590 = ((bool_t) 0);
													}
												if (BgL_testz00_5590)
													{	/* Ieee/input.scm 177 */
														return
															rgc_buffer_substring(BgL_inputzd2portzd2_1795,
															(long) (BgL_minz00_1903),
															(long) (BgL_maxz00_1904));
													}
												else
													{	/* Ieee/input.scm 177 */
														obj_t BgL_arg2568z00_1910;

														obj_t BgL_arg2569z00_1911;

														{	/* Ieee/input.scm 177 */
															obj_t BgL_arg2572z00_1913;

															{	/* Ieee/input.scm 177 */
																obj_t BgL_res3477z00_3974;

																{	/* Ieee/input.scm 177 */
																	int BgL_arg2561z00_3968;

																	{	/* Ieee/input.scm 177 */
																		int BgL_res3476z00_3970;

																		{	/* Ieee/input.scm 177 */
																			obj_t BgL_inputzd2portzd2_3969;

																			BgL_inputzd2portzd2_3969 =
																				BgL_inputzd2portzd2_1795;
																			BgL_res3476z00_3970 =
																				(int) (RGC_BUFFER_LENGTH
																				(BgL_inputzd2portzd2_3969));
																		}
																		BgL_arg2561z00_3968 = BgL_res3476z00_3970;
																	}
																	BgL_res3477z00_3974 =
																		rgc_buffer_substring
																		(BgL_inputzd2portzd2_1795, ((long) 0),
																		(long) (BgL_arg2561z00_3968));
																}
																BgL_arg2572z00_1913 = BgL_res3477z00_3974;
															}
															{	/* Ieee/input.scm 177 */
																obj_t BgL_list2573z00_1914;

																BgL_list2573z00_1914 =
																	MAKE_PAIR(BgL_arg2572z00_1913, BNIL);
																BgL_arg2568z00_1910 =
																	BGl_formatz00zz__r4_output_6_10_3z00
																	(BGl_string3652z00zz__r4_input_6_10_2z00,
																	BgL_list2573z00_1914);
														}}
														BgL_arg2569z00_1911 =
															MAKE_PAIR(BINT(BgL_minz00_1903),
															BINT(BgL_maxz00_1904));
														return
															BGl_errorz00zz__errorz00
															(BGl_string3653z00zz__r4_input_6_10_2z00,
															BgL_arg2568z00_1910, BgL_arg2569z00_1911);
													}
											}
										}
										break;
									case ((long) 0):

										{	/* Ieee/input.scm 180 */
											long BgL_arg2630z00_1983;

											{	/* Ieee/input.scm 180 */
												int BgL_arg2631z00_1984;

												{	/* Ieee/input.scm 180 */
													int BgL_res3481z00_3995;

													{	/* Ieee/input.scm 180 */
														obj_t BgL_inputzd2portzd2_3994;

														BgL_inputzd2portzd2_3994 = BgL_inputzd2portzd2_1795;
														BgL_res3481z00_3995 =
															(int) (RGC_BUFFER_LENGTH
															(BgL_inputzd2portzd2_3994));
													}
													BgL_arg2631z00_1984 = BgL_res3481z00_3995;
												}
												BgL_arg2630z00_1983 =
													((long) (BgL_arg2631z00_1984) - ((long) 1));
											}
											{
												int BgL_maxz00_5624;

												int BgL_minz00_5622;

												BgL_minz00_5622 = (int) (((long) 0));
												BgL_maxz00_5624 = (int) (BgL_arg2630z00_1983);
												BgL_maxz00_1904 = BgL_maxz00_5624;
												BgL_minz00_1903 = BgL_minz00_5622;
												goto BgL_lambda2562z00_1905;
											}
										}
										break;
									default:
										return
											BGl_errorz00zz__errorz00
											(BGl_string3650z00zz__r4_input_6_10_2z00,
											BGl_string3651z00zz__r4_input_6_10_2z00,
											BINT(BgL_matchz00_1974));
									}
							}
						}
					}
				else
					{	/* Ieee/input.scm 192 */
						obj_t BgL_g1869z00_2021;

						obj_t BgL_g1870z00_2022;

						BgL_g1869z00_2021 =
							BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_24);
						BgL_g1870z00_2022 =
							make_string(((long) 100), ((unsigned char) ' '));
						{
							obj_t BgL_cz00_2024;

							long BgL_wz00_2025;

							long BgL_mz00_2026;

							obj_t BgL_accz00_2027;

							BgL_cz00_2024 = BgL_g1869z00_2021;
							BgL_wz00_2025 = ((long) 0);
							BgL_mz00_2026 = ((long) 100);
							BgL_accz00_2027 = BgL_g1870z00_2022;
						BgL_zc3anonymousza32633ze3z83_2028:
							if (EOF_OBJECTP(BgL_cz00_2024))
								{	/* Ieee/input.scm 197 */
									if ((BgL_wz00_2025 == ((long) 0)))
										{	/* Ieee/input.scm 199 */
											return BgL_cz00_2024;
										}
									else
										{	/* Ieee/input.scm 199 */
											return
												c_substring(BgL_accz00_2027, ((long) 0), BgL_wz00_2025);
								}}
							else
								{	/* Ieee/input.scm 197 */
									if ((BgL_wz00_2025 == BgL_mz00_2026))
										{	/* Ieee/input.scm 204 */
											long BgL_arg2637z00_2032;

											obj_t BgL_arg2638z00_2033;

											BgL_arg2637z00_2032 = (BgL_mz00_2026 * ((long) 2));
											{	/* Ieee/input.scm 205 */
												obj_t BgL_newzd2acczd2_2034;

												BgL_newzd2acczd2_2034 =
													make_string(
													(BgL_mz00_2026 * ((long) 2)), ((unsigned char) ' '));
												blit_string(BgL_accz00_2027, ((long) 0),
													BgL_newzd2acczd2_2034, ((long) 0), BgL_mz00_2026);
												BgL_arg2638z00_2033 = BgL_newzd2acczd2_2034;
											}
											{
												obj_t BgL_accz00_5643;

												long BgL_mz00_5642;

												BgL_mz00_5642 = BgL_arg2637z00_2032;
												BgL_accz00_5643 = BgL_arg2638z00_2033;
												BgL_accz00_2027 = BgL_accz00_5643;
												BgL_mz00_2026 = BgL_mz00_5642;
												goto BgL_zc3anonymousza32633ze3z83_2028;
											}
										}
									else
										{	/* Ieee/input.scm 200 */
											if ((CCHAR(BgL_cz00_2024) == ((unsigned char) '\r')))
												{	/* Ieee/input.scm 209 */
													obj_t BgL_c2z00_2038;

													BgL_c2z00_2038 =
														BGl_readzd2charzd2zz__r4_input_6_10_2z00
														(BgL_ipz00_24);
													if ((CCHAR(BgL_c2z00_2038) == ((unsigned char) '\n')))
														{	/* Ieee/input.scm 210 */
															return
																c_substring(BgL_accz00_2027, ((long) 0),
																BgL_wz00_2025);
														}
													else
														{	/* Ieee/input.scm 210 */
															{	/* Ieee/input.scm 213 */
																unsigned char BgL_auxz00_5652;

																BgL_auxz00_5652 = CCHAR(BgL_cz00_2024);
																STRING_SET(BgL_accz00_2027, BgL_wz00_2025,
																	BgL_auxz00_5652);
															}
															{
																long BgL_wz00_5656;

																obj_t BgL_cz00_5655;

																BgL_cz00_5655 = BgL_c2z00_2038;
																BgL_wz00_5656 = (BgL_wz00_2025 + ((long) 1));
																BgL_wz00_2025 = BgL_wz00_5656;
																BgL_cz00_2024 = BgL_cz00_5655;
																goto BgL_zc3anonymousza32633ze3z83_2028;
															}
														}
												}
											else
												{	/* Ieee/input.scm 208 */
													if ((CCHAR(BgL_cz00_2024) == ((unsigned char) '\n')))
														{	/* Ieee/input.scm 215 */
															return
																c_substring(BgL_accz00_2027, ((long) 0),
																BgL_wz00_2025);
														}
													else
														{	/* Ieee/input.scm 215 */
															{	/* Ieee/input.scm 220 */
																unsigned char BgL_auxz00_5662;

																BgL_auxz00_5662 = CCHAR(BgL_cz00_2024);
																STRING_SET(BgL_accz00_2027, BgL_wz00_2025,
																	BgL_auxz00_5662);
															}
															{
																long BgL_wz00_5667;

																obj_t BgL_cz00_5665;

																BgL_cz00_5665 =
																	BGl_readzd2charzd2zz__r4_input_6_10_2z00
																	(BgL_ipz00_24);
																BgL_wz00_5667 = (BgL_wz00_2025 + ((long) 1));
																BgL_wz00_2025 = BgL_wz00_5667;
																BgL_cz00_2024 = BgL_cz00_5665;
																goto BgL_zc3anonymousza32633ze3z83_2028;
															}
														}
												}
										}
								}
						}
					}
			}
		}
	}



/* _read-line-newline */
	obj_t BGl__readzd2linezd2newlinez00zz__r4_input_6_10_2z00(obj_t BgL_envz00_29,
		obj_t BgL_optz00_28)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 226 */
			{	/* Ieee/input.scm 226 */

				{	/* Ieee/input.scm 226 */
					int BgL_aux2020z00_2049;

					BgL_aux2020z00_2049 = VECTOR_LENGTH(BgL_optz00_28);
					switch ((long) (BgL_aux2020z00_2049))
						{
						case ((long) 0):

							{	/* Ieee/input.scm 226 */
								obj_t BgL_ipz00_2051;

								{	/* Ieee/input.scm 226 */
									obj_t BgL_res3484z00_4052;

									{	/* Ieee/input.scm 226 */
										obj_t BgL_auxz00_5670;

										BgL_auxz00_5670 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res3484z00_4052 =
											BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_5670);
									}
									BgL_ipz00_2051 = BgL_res3484z00_4052;
								}
								{	/* Ieee/input.scm 226 */

									return
										BGl_readzd2linezd2newlinez00zz__r4_input_6_10_2z00
										(BgL_ipz00_2051);
								}
							}
							break;
						case ((long) 1):

							{	/* Ieee/input.scm 226 */
								obj_t BgL_ipz00_2052;

								BgL_ipz00_2052 = VECTOR_REF(BgL_optz00_28, (int) (((long) 0)));
								{	/* Ieee/input.scm 226 */

									return
										BGl_readzd2linezd2newlinez00zz__r4_input_6_10_2z00
										(BgL_ipz00_2052);
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* read-line-newline */
	BGL_EXPORTED_DEF obj_t
		BGl_readzd2linezd2newlinez00zz__r4_input_6_10_2z00(obj_t BgL_ipz00_27)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 226 */
			{	/* Ieee/input.scm 227 */
				bool_t BgL_testz00_5679;

				{	/* Ieee/input.scm 227 */
					int BgL_arg2768z00_2293;

					BgL_arg2768z00_2293 = BGL_INPUT_PORT_BUFSIZ(BgL_ipz00_27);
					BgL_testz00_5679 = ((long) (BgL_arg2768z00_2293) > ((long) 2));
				}
				if (BgL_testz00_5679)
					{
						obj_t BgL_inputzd2portzd2_2056;

						BgL_inputzd2portzd2_2056 = BgL_ipz00_27;
						{
							obj_t BgL_inputzd2portzd2_2129;

							long BgL_lastzd2matchzd2_2130;

							obj_t BgL_inputzd2portzd2_2121;

							long BgL_lastzd2matchzd2_2122;

							obj_t BgL_inputzd2portzd2_2109;

							long BgL_lastzd2matchzd2_2110;

							obj_t BgL_inputzd2portzd2_2099;

							long BgL_lastzd2matchzd2_2100;

							obj_t BgL_inputzd2portzd2_2090;

							long BgL_lastzd2matchzd2_2091;

							RGC_START_MATCH(BgL_inputzd2portzd2_2056);
							{	/* Ieee/input.scm 228 */
								long BgL_matchz00_2225;

								BgL_inputzd2portzd2_2090 = BgL_inputzd2portzd2_2056;
								BgL_lastzd2matchzd2_2091 = ((long) 1);
							BgL_zc3anonymousza32653ze3z83_2092:
								{	/* Ieee/input.scm 228 */
									int BgL_currentzd2charzd2_2093;

									BgL_currentzd2charzd2_2093 =
										RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2090);
									switch ((long) (BgL_currentzd2charzd2_2093))
										{
										case ((long) 0):

											if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2090))
												{	/* Ieee/input.scm 228 */
													if (rgc_fill_buffer(BgL_inputzd2portzd2_2090))
														{

															goto BgL_zc3anonymousza32653ze3z83_2092;
														}
													else
														{	/* Ieee/input.scm 228 */
															BgL_matchz00_2225 = BgL_lastzd2matchzd2_2091;
														}
												}
											else
												{	/* Ieee/input.scm 228 */
													BgL_inputzd2portzd2_2129 = BgL_inputzd2portzd2_2090;
													BgL_lastzd2matchzd2_2130 = BgL_lastzd2matchzd2_2091;
												BgL_zc3anonymousza32670ze3z83_2131:
													{	/* Ieee/input.scm 228 */
														long BgL_newzd2matchzd2_2132;

														RGC_STOP_MATCH(BgL_inputzd2portzd2_2129);
														BgL_newzd2matchzd2_2132 = ((long) 0);
														{	/* Ieee/input.scm 228 */
															int BgL_currentzd2charzd2_2133;

															BgL_currentzd2charzd2_2133 =
																RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2129);
															switch ((long) (BgL_currentzd2charzd2_2133))
																{
																case ((long) 0):

																	if (RGC_BUFFER_EMPTY
																		(BgL_inputzd2portzd2_2129))
																		{	/* Ieee/input.scm 228 */
																			if (rgc_fill_buffer
																				(BgL_inputzd2portzd2_2129))
																				{

																					goto
																						BgL_zc3anonymousza32670ze3z83_2131;
																				}
																			else
																				{	/* Ieee/input.scm 228 */
																					BgL_matchz00_2225 =
																						BgL_newzd2matchzd2_2132;
																				}
																		}
																	else
																		{	/* Ieee/input.scm 228 */
																			BgL_inputzd2portzd2_2099 =
																				BgL_inputzd2portzd2_2129;
																			BgL_lastzd2matchzd2_2100 =
																				BgL_newzd2matchzd2_2132;
																		BgL_zc3anonymousza32657ze3z83_2101:
																			{	/* Ieee/input.scm 228 */
																				long BgL_newzd2matchzd2_2102;

																				RGC_STOP_MATCH
																					(BgL_inputzd2portzd2_2099);
																				BgL_newzd2matchzd2_2102 = ((long) 0);
																				{	/* Ieee/input.scm 228 */
																					int BgL_currentzd2charzd2_2103;

																					BgL_currentzd2charzd2_2103 =
																						RGC_BUFFER_GET_CHAR
																						(BgL_inputzd2portzd2_2099);
																					switch ((long)
																						(BgL_currentzd2charzd2_2103))
																						{
																						case ((long) 0):

																							if (RGC_BUFFER_EMPTY
																								(BgL_inputzd2portzd2_2099))
																								{	/* Ieee/input.scm 228 */
																									if (rgc_fill_buffer
																										(BgL_inputzd2portzd2_2099))
																										{

																											goto
																												BgL_zc3anonymousza32657ze3z83_2101;
																										}
																									else
																										{	/* Ieee/input.scm 228 */
																											BgL_matchz00_2225 =
																												BgL_newzd2matchzd2_2102;
																										}
																								}
																							else
																								{
																									long BgL_lastzd2matchzd2_5701;

																									BgL_lastzd2matchzd2_5701 =
																										BgL_newzd2matchzd2_2102;
																									BgL_lastzd2matchzd2_2100 =
																										BgL_lastzd2matchzd2_5701;
																									goto
																										BgL_zc3anonymousza32657ze3z83_2101;
																								}
																							break;
																						case ((long) 13):

																							BgL_inputzd2portzd2_2109 =
																								BgL_inputzd2portzd2_2099;
																							BgL_lastzd2matchzd2_2110 =
																								BgL_newzd2matchzd2_2102;
																						BgL_zc3anonymousza32661ze3z83_2111:
																							{	/* Ieee/input.scm 228 */
																								long BgL_newzd2matchzd2_2112;

																								RGC_STOP_MATCH
																									(BgL_inputzd2portzd2_2109);
																								BgL_newzd2matchzd2_2112 =
																									((long) 0);
																								{	/* Ieee/input.scm 228 */
																									int
																										BgL_currentzd2charzd2_2113;
																									BgL_currentzd2charzd2_2113 =
																										RGC_BUFFER_GET_CHAR
																										(BgL_inputzd2portzd2_2109);
																									if (((long)
																											(BgL_currentzd2charzd2_2113)
																											== ((long) 0)))
																										{	/* Ieee/input.scm 228 */
																											bool_t BgL_testz00_5707;

																											{	/* Ieee/input.scm 228 */
																												bool_t
																													BgL_res3485z00_4078;
																												{	/* Ieee/input.scm 228 */
																													obj_t
																														BgL_inputzd2portzd2_4074;
																													BgL_inputzd2portzd2_4074
																														=
																														BgL_inputzd2portzd2_2109;
																													if (RGC_BUFFER_EMPTY
																														(BgL_inputzd2portzd2_4074))
																														{	/* Ieee/input.scm 228 */
																															BgL_res3485z00_4078
																																=
																																rgc_fill_buffer
																																(BgL_inputzd2portzd2_4074);
																														}
																													else
																														{	/* Ieee/input.scm 228 */
																															BgL_res3485z00_4078
																																= ((bool_t) 0);
																														}
																												}
																												BgL_testz00_5707 =
																													BgL_res3485z00_4078;
																											}
																											if (BgL_testz00_5707)
																												{

																													goto
																														BgL_zc3anonymousza32661ze3z83_2111;
																												}
																											else
																												{	/* Ieee/input.scm 228 */
																													BgL_matchz00_2225 =
																														BgL_newzd2matchzd2_2112;
																												}
																										}
																									else
																										{	/* Ieee/input.scm 228 */
																											if (
																												((long)
																													(BgL_currentzd2charzd2_2113)
																													== ((long) 10)))
																												{	/* Ieee/input.scm 228 */
																													long
																														BgL_newzd2matchzd2_4083;
																													RGC_STOP_MATCH
																														(BgL_inputzd2portzd2_2109);
																													BgL_newzd2matchzd2_4083
																														= ((long) 0);
																													BgL_matchz00_2225 =
																														BgL_newzd2matchzd2_4083;
																												}
																											else
																												{	/* Ieee/input.scm 228 */
																													BgL_matchz00_2225 =
																														BgL_newzd2matchzd2_2112;
																												}
																										}
																								}
																							}
																							break;
																						case ((long) 10):

																							{	/* Ieee/input.scm 228 */
																								long BgL_newzd2matchzd2_4068;

																								RGC_STOP_MATCH
																									(BgL_inputzd2portzd2_2099);
																								BgL_newzd2matchzd2_4068 =
																									((long) 0);
																								BgL_matchz00_2225 =
																									BgL_newzd2matchzd2_4068;
																							} break;
																						default:
																							{
																								long BgL_lastzd2matchzd2_5716;

																								BgL_lastzd2matchzd2_5716 =
																									BgL_newzd2matchzd2_2102;
																								BgL_lastzd2matchzd2_2100 =
																									BgL_lastzd2matchzd2_5716;
																								goto
																									BgL_zc3anonymousza32657ze3z83_2101;
																							}
																						}
																				}
																			}
																		}
																	break;
																case ((long) 13):

																	{
																		long BgL_lastzd2matchzd2_5720;

																		obj_t BgL_inputzd2portzd2_5719;

																		BgL_inputzd2portzd2_5719 =
																			BgL_inputzd2portzd2_2129;
																		BgL_lastzd2matchzd2_5720 =
																			BgL_newzd2matchzd2_2132;
																		BgL_lastzd2matchzd2_2110 =
																			BgL_lastzd2matchzd2_5720;
																		BgL_inputzd2portzd2_2109 =
																			BgL_inputzd2portzd2_5719;
																		goto BgL_zc3anonymousza32661ze3z83_2111;
																	}
																	break;
																case ((long) 10):

																	{	/* Ieee/input.scm 228 */
																		long BgL_newzd2matchzd2_4108;

																		RGC_STOP_MATCH(BgL_inputzd2portzd2_2129);
																		BgL_newzd2matchzd2_4108 = ((long) 0);
																		BgL_matchz00_2225 = BgL_newzd2matchzd2_4108;
																	} break;
																default:
																	{
																		long BgL_lastzd2matchzd2_5723;

																		obj_t BgL_inputzd2portzd2_5722;

																		BgL_inputzd2portzd2_5722 =
																			BgL_inputzd2portzd2_2129;
																		BgL_lastzd2matchzd2_5723 =
																			BgL_newzd2matchzd2_2132;
																		BgL_lastzd2matchzd2_2100 =
																			BgL_lastzd2matchzd2_5723;
																		BgL_inputzd2portzd2_2099 =
																			BgL_inputzd2portzd2_5722;
																		goto BgL_zc3anonymousza32657ze3z83_2101;
																	}
																}
														}
													}
												}
											break;
										case ((long) 13):

											BgL_inputzd2portzd2_2121 = BgL_inputzd2portzd2_2090;
											BgL_lastzd2matchzd2_2122 = BgL_lastzd2matchzd2_2091;
										BgL_zc3anonymousza32666ze3z83_2123:
											{	/* Ieee/input.scm 228 */
												long BgL_newzd2matchzd2_2124;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_2121);
												BgL_newzd2matchzd2_2124 = ((long) 0);
												{	/* Ieee/input.scm 228 */
													int BgL_currentzd2charzd2_2125;

													BgL_currentzd2charzd2_2125 =
														RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2121);
													if (
														((long) (BgL_currentzd2charzd2_2125) == ((long) 0)))
														{	/* Ieee/input.scm 228 */
															bool_t BgL_testz00_5731;

															{	/* Ieee/input.scm 228 */
																bool_t BgL_res3486z00_4095;

																{	/* Ieee/input.scm 228 */
																	obj_t BgL_inputzd2portzd2_4091;

																	BgL_inputzd2portzd2_4091 =
																		BgL_inputzd2portzd2_2121;
																	if (RGC_BUFFER_EMPTY
																		(BgL_inputzd2portzd2_4091))
																		{	/* Ieee/input.scm 228 */
																			BgL_res3486z00_4095 =
																				rgc_fill_buffer
																				(BgL_inputzd2portzd2_4091);
																		}
																	else
																		{	/* Ieee/input.scm 228 */
																			BgL_res3486z00_4095 = ((bool_t) 0);
																		}
																}
																BgL_testz00_5731 = BgL_res3486z00_4095;
															}
															if (BgL_testz00_5731)
																{

																	goto BgL_zc3anonymousza32666ze3z83_2123;
																}
															else
																{	/* Ieee/input.scm 228 */
																	BgL_matchz00_2225 = BgL_newzd2matchzd2_2124;
																}
														}
													else
														{	/* Ieee/input.scm 228 */
															if (
																((long) (BgL_currentzd2charzd2_2125) ==
																	((long) 10)))
																{	/* Ieee/input.scm 228 */
																	long BgL_newzd2matchzd2_4100;

																	RGC_STOP_MATCH(BgL_inputzd2portzd2_2121);
																	BgL_newzd2matchzd2_4100 = ((long) 0);
																	BgL_matchz00_2225 = BgL_newzd2matchzd2_4100;
																}
															else
																{	/* Ieee/input.scm 228 */
																	BgL_matchz00_2225 = BgL_newzd2matchzd2_2124;
																}
														}
												}
											}
											break;
										case ((long) 10):

											{	/* Ieee/input.scm 228 */
												long BgL_newzd2matchzd2_4060;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_2090);
												BgL_newzd2matchzd2_4060 = ((long) 0);
												BgL_matchz00_2225 = BgL_newzd2matchzd2_4060;
											} break;
										default:
											{
												long BgL_lastzd2matchzd2_5741;

												obj_t BgL_inputzd2portzd2_5740;

												BgL_inputzd2portzd2_5740 = BgL_inputzd2portzd2_2090;
												BgL_lastzd2matchzd2_5741 = BgL_lastzd2matchzd2_2091;
												BgL_lastzd2matchzd2_2130 = BgL_lastzd2matchzd2_5741;
												BgL_inputzd2portzd2_2129 = BgL_inputzd2portzd2_5740;
												goto BgL_zc3anonymousza32670ze3z83_2131;
											}
										}
								}
								RGC_SET_FILEPOS(BgL_inputzd2portzd2_2056);
								switch (BgL_matchz00_2225)
									{
									case ((long) 1):

										{	/* Ieee/input.scm 228 */
											bool_t BgL_testz00_5745;

											{	/* Ieee/input.scm 228 */
												long BgL_arg2736z00_2214;

												BgL_arg2736z00_2214 =
													RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_2056);
												BgL_testz00_5745 = (BgL_arg2736z00_2214 == ((long) 0));
											}
											if (BgL_testz00_5745)
												{	/* Ieee/input.scm 228 */
													return BCNST(256);
												}
											else
												{	/* Ieee/input.scm 228 */
													obj_t BgL_inputzd2portzd2_4123;

													BgL_inputzd2portzd2_4123 = BgL_inputzd2portzd2_2056;
													return
														BCHAR(RGC_BUFFER_CHARACTER
														(BgL_inputzd2portzd2_4123));
												}
										}
										break;
									case ((long) 0):

										{	/* Ieee/input.scm 234 */
											obj_t BgL_res3489z00_4133;

											{	/* Ieee/input.scm 234 */
												int BgL_arg2682z00_4127;

												{	/* Ieee/input.scm 234 */
													int BgL_res3488z00_4129;

													{	/* Ieee/input.scm 234 */
														obj_t BgL_inputzd2portzd2_4128;

														BgL_inputzd2portzd2_4128 = BgL_inputzd2portzd2_2056;
														BgL_res3488z00_4129 =
															(int) (RGC_BUFFER_LENGTH
															(BgL_inputzd2portzd2_4128));
													}
													BgL_arg2682z00_4127 = BgL_res3488z00_4129;
												}
												BgL_res3489z00_4133 =
													rgc_buffer_substring(BgL_inputzd2portzd2_2056,
													((long) 0), (long) (BgL_arg2682z00_4127));
											}
											return BgL_res3489z00_4133;
										}
										break;
									default:
										return
											BGl_errorz00zz__errorz00
											(BGl_string3650z00zz__r4_input_6_10_2z00,
											BGl_string3651z00zz__r4_input_6_10_2z00,
											BINT(BgL_matchz00_2225));
									}
							}
						}
					}
				else
					{	/* Ieee/input.scm 240 */
						obj_t BgL_g1888z00_2262;

						obj_t BgL_g1889z00_2263;

						BgL_g1888z00_2262 =
							BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_27);
						BgL_g1889z00_2263 =
							make_string(((long) 100), ((unsigned char) ' '));
						{
							obj_t BgL_cz00_2265;

							long BgL_wz00_2266;

							long BgL_mz00_2267;

							obj_t BgL_accz00_2268;

							BgL_cz00_2265 = BgL_g1888z00_2262;
							BgL_wz00_2266 = ((long) 0);
							BgL_mz00_2267 = ((long) 100);
							BgL_accz00_2268 = BgL_g1889z00_2263;
						BgL_zc3anonymousza32745ze3z83_2269:
							if (EOF_OBJECTP(BgL_cz00_2265))
								{	/* Ieee/input.scm 245 */
									if ((BgL_wz00_2266 == ((long) 0)))
										{	/* Ieee/input.scm 247 */
											return BgL_cz00_2265;
										}
									else
										{	/* Ieee/input.scm 247 */
											return
												c_substring(BgL_accz00_2268, ((long) 0), BgL_wz00_2266);
								}}
							else
								{	/* Ieee/input.scm 245 */
									if (
										(BgL_wz00_2266 ==
											(long)
											CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(BgL_mz00_2267),
													BINT(((long) 2))))))
										{	/* Ieee/input.scm 252 */
											long BgL_arg2749z00_2273;

											obj_t BgL_arg2750z00_2274;

											BgL_arg2749z00_2273 = (BgL_mz00_2267 * ((long) 2));
											{	/* Ieee/input.scm 253 */
												obj_t BgL_newzd2acczd2_2275;

												BgL_newzd2acczd2_2275 =
													make_string(
													(BgL_mz00_2267 * ((long) 2)), ((unsigned char) ' '));
												blit_string(BgL_accz00_2268, ((long) 0),
													BgL_newzd2acczd2_2275, ((long) 0), BgL_mz00_2267);
												BgL_arg2750z00_2274 = BgL_newzd2acczd2_2275;
											}
											{
												obj_t BgL_accz00_5775;

												long BgL_mz00_5774;

												BgL_mz00_5774 = BgL_arg2749z00_2273;
												BgL_accz00_5775 = BgL_arg2750z00_2274;
												BgL_accz00_2268 = BgL_accz00_5775;
												BgL_mz00_2267 = BgL_mz00_5774;
												goto BgL_zc3anonymousza32745ze3z83_2269;
											}
										}
									else
										{	/* Ieee/input.scm 248 */
											if ((CCHAR(BgL_cz00_2265) == ((unsigned char) '\r')))
												{	/* Ieee/input.scm 257 */
													obj_t BgL_c2z00_2279;

													BgL_c2z00_2279 =
														BGl_readzd2charzd2zz__r4_input_6_10_2z00
														(BgL_ipz00_27);
													if ((CCHAR(BgL_c2z00_2279) == ((unsigned char) '\n')))
														{	/* Ieee/input.scm 258 */
															STRING_SET(BgL_accz00_2268, BgL_wz00_2266,
																((unsigned char) '\r'));
															{	/* Ieee/input.scm 261 */
																long BgL_auxz00_5784;

																BgL_auxz00_5784 = (((long) 1) + BgL_wz00_2266);
																STRING_SET(BgL_accz00_2268, BgL_auxz00_5784,
																	((unsigned char) '\n'));
															}
															return
																c_substring(BgL_accz00_2268, ((long) 0),
																(BgL_wz00_2266 + ((long) 2)));
														}
													else
														{	/* Ieee/input.scm 258 */
															{	/* Ieee/input.scm 264 */
																unsigned char BgL_auxz00_5789;

																BgL_auxz00_5789 = CCHAR(BgL_cz00_2265);
																STRING_SET(BgL_accz00_2268, BgL_wz00_2266,
																	BgL_auxz00_5789);
															}
															{
																long BgL_wz00_5793;

																obj_t BgL_cz00_5792;

																BgL_cz00_5792 = BgL_c2z00_2279;
																BgL_wz00_5793 = (BgL_wz00_2266 + ((long) 1));
																BgL_wz00_2266 = BgL_wz00_5793;
																BgL_cz00_2265 = BgL_cz00_5792;
																goto BgL_zc3anonymousza32745ze3z83_2269;
															}
														}
												}
											else
												{	/* Ieee/input.scm 256 */
													if ((CCHAR(BgL_cz00_2265) == ((unsigned char) '\n')))
														{	/* Ieee/input.scm 266 */
															STRING_SET(BgL_accz00_2268, BgL_wz00_2266,
																((unsigned char) '\n'));
															return c_substring(BgL_accz00_2268, ((long) 0),
																(BgL_wz00_2266 + ((long) 1)));
														}
													else
														{	/* Ieee/input.scm 266 */
															{	/* Ieee/input.scm 272 */
																unsigned char BgL_auxz00_5801;

																BgL_auxz00_5801 = CCHAR(BgL_cz00_2265);
																STRING_SET(BgL_accz00_2268, BgL_wz00_2266,
																	BgL_auxz00_5801);
															}
															{
																long BgL_wz00_5806;

																obj_t BgL_cz00_5804;

																BgL_cz00_5804 =
																	BGl_readzd2charzd2zz__r4_input_6_10_2z00
																	(BgL_ipz00_27);
																BgL_wz00_5806 = (BgL_wz00_2266 + ((long) 1));
																BgL_wz00_2266 = BgL_wz00_5806;
																BgL_cz00_2265 = BgL_cz00_5804;
																goto BgL_zc3anonymousza32745ze3z83_2269;
															}
														}
												}
										}
								}
						}
					}
			}
		}
	}



/* _read-lines */
	obj_t BGl__readzd2lineszd2zz__r4_input_6_10_2z00(obj_t BgL_envz00_32,
		obj_t BgL_optz00_31)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 278 */
			{	/* Ieee/input.scm 278 */

				{	/* Ieee/input.scm 278 */
					int BgL_aux2022z00_2296;

					BgL_aux2022z00_2296 = VECTOR_LENGTH(BgL_optz00_31);
					switch ((long) (BgL_aux2022z00_2296))
						{
						case ((long) 0):

							{	/* Ieee/input.scm 278 */
								obj_t BgL_ipz00_2298;

								{	/* Ieee/input.scm 278 */
									obj_t BgL_res3492z00_4203;

									{	/* Ieee/input.scm 278 */
										obj_t BgL_auxz00_5809;

										BgL_auxz00_5809 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res3492z00_4203 =
											BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_5809);
									}
									BgL_ipz00_2298 = BgL_res3492z00_4203;
								}
								{	/* Ieee/input.scm 278 */

									return
										BGl_readzd2lineszd2zz__r4_input_6_10_2z00(BgL_ipz00_2298);
								}
							}
							break;
						case ((long) 1):

							{	/* Ieee/input.scm 278 */
								obj_t BgL_ipz00_2299;

								BgL_ipz00_2299 = VECTOR_REF(BgL_optz00_31, (int) (((long) 0)));
								{	/* Ieee/input.scm 278 */

									return
										BGl_readzd2lineszd2zz__r4_input_6_10_2z00(BgL_ipz00_2299);
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* read-lines */
	BGL_EXPORTED_DEF obj_t BGl_readzd2lineszd2zz__r4_input_6_10_2z00(obj_t
		BgL_ipz00_30)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 278 */
			{	/* Ieee/input.scm 279 */
				obj_t BgL_g1891z00_2300;

				BgL_g1891z00_2300 =
					BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_30);
				{
					obj_t BgL_lz00_4205;

					obj_t BgL_lsz00_4206;

					BgL_lz00_4205 = BgL_g1891z00_2300;
					BgL_lsz00_4206 = BNIL;
				BgL_loopz00_4204:
					if (EOF_OBJECTP(BgL_lz00_4205))
						{	/* Ieee/input.scm 279 */
							return bgl_reverse_bang(BgL_lsz00_4206);
						}
					else
						{	/* Ieee/input.scm 279 */
							obj_t BgL_arg2773z00_4211;

							obj_t BgL_arg2774z00_4212;

							BgL_arg2773z00_4211 =
								BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_30);
							BgL_arg2774z00_4212 = MAKE_PAIR(BgL_lz00_4205, BgL_lsz00_4206);
							{
								obj_t BgL_lsz00_5825;

								obj_t BgL_lz00_5824;

								BgL_lz00_5824 = BgL_arg2773z00_4211;
								BgL_lsz00_5825 = BgL_arg2774z00_4212;
								BgL_lsz00_4206 = BgL_lsz00_5825;
								BgL_lz00_4205 = BgL_lz00_5824;
								goto BgL_loopz00_4204;
							}
						}
				}
			}
		}
	}



/* _read-string */
	obj_t BGl__readzd2stringzd2zz__r4_input_6_10_2z00(obj_t BgL_envz00_35,
		obj_t BgL_optz00_34)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 288 */
			{	/* Ieee/input.scm 288 */

				{	/* Ieee/input.scm 288 */
					int BgL_aux2024z00_2311;

					BgL_aux2024z00_2311 = VECTOR_LENGTH(BgL_optz00_34);
					switch ((long) (BgL_aux2024z00_2311))
						{
						case ((long) 0):

							{	/* Ieee/input.scm 288 */
								obj_t BgL_ipz00_2313;

								{	/* Ieee/input.scm 288 */
									obj_t BgL_res3493z00_4225;

									{	/* Ieee/input.scm 288 */
										obj_t BgL_auxz00_5827;

										BgL_auxz00_5827 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res3493z00_4225 =
											BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_5827);
									}
									BgL_ipz00_2313 = BgL_res3493z00_4225;
								}
								{	/* Ieee/input.scm 288 */

									return
										BGl_readzd2stringzd2zz__r4_input_6_10_2z00(BgL_ipz00_2313);
								}
							}
							break;
						case ((long) 1):

							{	/* Ieee/input.scm 288 */
								obj_t BgL_ipz00_2314;

								BgL_ipz00_2314 = VECTOR_REF(BgL_optz00_34, (int) (((long) 0)));
								{	/* Ieee/input.scm 288 */

									return
										BGl_readzd2stringzd2zz__r4_input_6_10_2z00(BgL_ipz00_2314);
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* read-string */
	BGL_EXPORTED_DEF obj_t BGl_readzd2stringzd2zz__r4_input_6_10_2z00(obj_t
		BgL_ipz00_33)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 288 */
			{
				obj_t BgL_inputzd2portzd2_2361;

				long BgL_lastzd2matchzd2_2362;

				obj_t BgL_inputzd2portzd2_2353;

				long BgL_lastzd2matchzd2_2354;

				obj_t BgL_inputzd2portzd2_2345;

				long BgL_lastzd2matchzd2_2346;

				RGC_START_MATCH(BgL_ipz00_33);
				{	/* Ieee/input.scm 289 */
					long BgL_matchz00_2450;

					BgL_inputzd2portzd2_2361 = BgL_ipz00_33;
					BgL_lastzd2matchzd2_2362 = ((long) 1);
				BgL_zc3anonymousza32784ze3z83_2363:
					{	/* Ieee/input.scm 289 */
						int BgL_currentzd2charzd2_2364;

						BgL_currentzd2charzd2_2364 =
							RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2361);
						if (((long) (BgL_currentzd2charzd2_2364) == ((long) 0)))
							{	/* Ieee/input.scm 289 */
								if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2361))
									{	/* Ieee/input.scm 289 */
										if (rgc_fill_buffer(BgL_inputzd2portzd2_2361))
											{

												goto BgL_zc3anonymousza32784ze3z83_2363;
											}
										else
											{	/* Ieee/input.scm 289 */
												BgL_matchz00_2450 = BgL_lastzd2matchzd2_2362;
											}
									}
								else
									{	/* Ieee/input.scm 289 */
										BgL_inputzd2portzd2_2353 = BgL_inputzd2portzd2_2361;
										BgL_lastzd2matchzd2_2354 = BgL_lastzd2matchzd2_2362;
									BgL_zc3anonymousza32780ze3z83_2355:
										{	/* Ieee/input.scm 289 */
											long BgL_newzd2matchzd2_2356;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_2353);
											BgL_newzd2matchzd2_2356 = ((long) 0);
											{	/* Ieee/input.scm 289 */
												int BgL_currentzd2charzd2_2357;

												BgL_currentzd2charzd2_2357 =
													RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2353);
												if (((long) (BgL_currentzd2charzd2_2357) == ((long) 0)))
													{	/* Ieee/input.scm 289 */
														if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2353))
															{	/* Ieee/input.scm 289 */
																if (rgc_fill_buffer(BgL_inputzd2portzd2_2353))
																	{

																		goto BgL_zc3anonymousza32780ze3z83_2355;
																	}
																else
																	{	/* Ieee/input.scm 289 */
																		BgL_matchz00_2450 = BgL_newzd2matchzd2_2356;
																	}
															}
														else
															{	/* Ieee/input.scm 289 */
																BgL_inputzd2portzd2_2345 =
																	BgL_inputzd2portzd2_2353;
																BgL_lastzd2matchzd2_2346 =
																	BgL_newzd2matchzd2_2356;
															BgL_zc3anonymousza32776ze3z83_2347:
																{	/* Ieee/input.scm 289 */
																	long BgL_newzd2matchzd2_2348;

																	RGC_STOP_MATCH(BgL_inputzd2portzd2_2345);
																	BgL_newzd2matchzd2_2348 = ((long) 0);
																	{	/* Ieee/input.scm 289 */
																		int BgL_currentzd2charzd2_2349;

																		BgL_currentzd2charzd2_2349 =
																			RGC_BUFFER_GET_CHAR
																			(BgL_inputzd2portzd2_2345);
																		if (((long) (BgL_currentzd2charzd2_2349) ==
																				((long) 0)))
																			{	/* Ieee/input.scm 289 */
																				if (RGC_BUFFER_EMPTY
																					(BgL_inputzd2portzd2_2345))
																					{	/* Ieee/input.scm 289 */
																						if (rgc_fill_buffer
																							(BgL_inputzd2portzd2_2345))
																							{

																								goto
																									BgL_zc3anonymousza32776ze3z83_2347;
																							}
																						else
																							{	/* Ieee/input.scm 289 */
																								BgL_matchz00_2450 =
																									BgL_newzd2matchzd2_2348;
																							}
																					}
																				else
																					{
																						long BgL_lastzd2matchzd2_5863;

																						BgL_lastzd2matchzd2_5863 =
																							BgL_newzd2matchzd2_2348;
																						BgL_lastzd2matchzd2_2346 =
																							BgL_lastzd2matchzd2_5863;
																						goto
																							BgL_zc3anonymousza32776ze3z83_2347;
																					}
																			}
																		else
																			{
																				long BgL_lastzd2matchzd2_5864;

																				BgL_lastzd2matchzd2_5864 =
																					BgL_newzd2matchzd2_2348;
																				BgL_lastzd2matchzd2_2346 =
																					BgL_lastzd2matchzd2_5864;
																				goto BgL_zc3anonymousza32776ze3z83_2347;
																			}
																	}
																}
															}
													}
												else
													{
														long BgL_lastzd2matchzd2_5866;

														obj_t BgL_inputzd2portzd2_5865;

														BgL_inputzd2portzd2_5865 = BgL_inputzd2portzd2_2353;
														BgL_lastzd2matchzd2_5866 = BgL_newzd2matchzd2_2356;
														BgL_lastzd2matchzd2_2346 = BgL_lastzd2matchzd2_5866;
														BgL_inputzd2portzd2_2345 = BgL_inputzd2portzd2_5865;
														goto BgL_zc3anonymousza32776ze3z83_2347;
													}
											}
										}
									}
							}
						else
							{
								long BgL_lastzd2matchzd2_5868;

								obj_t BgL_inputzd2portzd2_5867;

								BgL_inputzd2portzd2_5867 = BgL_inputzd2portzd2_2361;
								BgL_lastzd2matchzd2_5868 = BgL_lastzd2matchzd2_2362;
								BgL_lastzd2matchzd2_2354 = BgL_lastzd2matchzd2_5868;
								BgL_inputzd2portzd2_2353 = BgL_inputzd2portzd2_5867;
								goto BgL_zc3anonymousza32780ze3z83_2355;
							}
					}
					RGC_SET_FILEPOS(BgL_ipz00_33);
					{

						{	/* Ieee/input.scm 289 */
							obj_t BgL_aux1988z00_2455;

							BgL_aux1988z00_2455 = BINT(BgL_matchz00_2450);
							switch ((long) CINT(BgL_aux1988z00_2455))
								{
								case ((long) 1):

									return BGl_string3663z00zz__r4_input_6_10_2z00;
									break;
								case ((long) 0):

									{	/* Ieee/input.scm 290 */
										obj_t BgL_res3496z00_4260;

										{	/* Ieee/input.scm 290 */
											int BgL_arg2795z00_4254;

											{	/* Ieee/input.scm 290 */
												int BgL_res3495z00_4256;

												{	/* Ieee/input.scm 290 */
													obj_t BgL_inputzd2portzd2_4255;

													BgL_inputzd2portzd2_4255 = BgL_ipz00_33;
													BgL_res3495z00_4256 =
														(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_4255));
												}
												BgL_arg2795z00_4254 = BgL_res3495z00_4256;
											}
											BgL_res3496z00_4260 =
												rgc_buffer_substring(BgL_ipz00_33, ((long) 0),
												(long) (BgL_arg2795z00_4254));
										}
										return BgL_res3496z00_4260;
									}
									break;
								default:
									return
										BGl_errorz00zz__errorz00
										(BGl_string3650z00zz__r4_input_6_10_2z00,
										BGl_string3651z00zz__r4_input_6_10_2z00,
										BINT(BgL_matchz00_2450));
								}
						}
					}
				}
			}
		}
	}



/* _read-of-strings */
	obj_t BGl__readzd2ofzd2stringsz00zz__r4_input_6_10_2z00(obj_t BgL_envz00_38,
		obj_t BgL_optz00_37)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 311 */
			{	/* Ieee/input.scm 311 */

				{	/* Ieee/input.scm 311 */
					int BgL_aux2026z00_2486;

					BgL_aux2026z00_2486 = VECTOR_LENGTH(BgL_optz00_37);
					switch ((long) (BgL_aux2026z00_2486))
						{
						case ((long) 0):

							{	/* Ieee/input.scm 311 */
								obj_t BgL_ipz00_2488;

								{	/* Ieee/input.scm 311 */
									obj_t BgL_res3497z00_4262;

									{	/* Ieee/input.scm 311 */
										obj_t BgL_auxz00_5880;

										BgL_auxz00_5880 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res3497z00_4262 =
											BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_5880);
									}
									BgL_ipz00_2488 = BgL_res3497z00_4262;
								}
								{	/* Ieee/input.scm 311 */

									return
										PROCEDURE_ENTRY
										(BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00)
										(BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00,
										BgL_ipz00_2488, BEOA);
								}
							}
							break;
						case ((long) 1):

							{	/* Ieee/input.scm 311 */
								obj_t BgL_ipz00_2489;

								BgL_ipz00_2489 = VECTOR_REF(BgL_optz00_37, (int) (((long) 0)));
								{	/* Ieee/input.scm 311 */

									return
										PROCEDURE_ENTRY
										(BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00)
										(BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00,
										BgL_ipz00_2489, BEOA);
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* read-of-strings */
	BGL_EXPORTED_DEF obj_t BGl_readzd2ofzd2stringsz00zz__r4_input_6_10_2z00(obj_t
		BgL_ipz00_36)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 311 */
			return
				PROCEDURE_ENTRY
				(BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00)
				(BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00,
				BgL_ipz00_36, BEOA);
		}
	}



/* _read-chars */
	obj_t BGl__readzd2charszd2zz__r4_input_6_10_2z00(obj_t BgL_envz00_42,
		obj_t BgL_optz00_41)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 317 */
			{	/* Ieee/input.scm 317 */
				obj_t BgL_g2027z00_2490;

				BgL_g2027z00_2490 = VECTOR_REF(BgL_optz00_41, (int) (((long) 0)));
				{	/* Ieee/input.scm 317 */
					int BgL_aux2029z00_2492;

					BgL_aux2029z00_2492 = VECTOR_LENGTH(BgL_optz00_41);
					switch ((long) (BgL_aux2029z00_2492))
						{
						case ((long) 1):

							{	/* Ieee/input.scm 317 */
								obj_t BgL_ipz00_2494;

								{	/* Ieee/input.scm 317 */
									obj_t BgL_res3498z00_4266;

									{	/* Ieee/input.scm 317 */
										obj_t BgL_auxz00_5896;

										BgL_auxz00_5896 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res3498z00_4266 =
											BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_5896);
									}
									BgL_ipz00_2494 = BgL_res3498z00_4266;
								}
								{	/* Ieee/input.scm 317 */

									return
										BGl_readzd2charszd2zz__r4_input_6_10_2z00(VECTOR_REF
										(BgL_optz00_41, (int) (((long) 0))), BgL_ipz00_2494);
							}} break;
						case ((long) 2):

							{	/* Ieee/input.scm 317 */
								obj_t BgL_ipz00_2496;

								BgL_ipz00_2496 = VECTOR_REF(BgL_optz00_41, (int) (((long) 1)));
								{	/* Ieee/input.scm 317 */

									return
										BGl_readzd2charszd2zz__r4_input_6_10_2z00(VECTOR_REF
										(BgL_optz00_41, (int) (((long) 0))), BgL_ipz00_2496);
							}} break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* read-chars */
	BGL_EXPORTED_DEF obj_t BGl_readzd2charszd2zz__r4_input_6_10_2z00(obj_t
		BgL_lz00_39, obj_t BgL_ipz00_40)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 317 */
			{	/* Ieee/input.scm 318 */
				obj_t BgL_lenz00_2498;

				if (INTEGERP(BgL_lz00_39))
					{	/* Ieee/input.scm 319 */
						BgL_lenz00_2498 = BgL_lz00_39;
					}
				else
					{	/* Ieee/input.scm 319 */
						if (ELONGP(BgL_lz00_39))
							{	/* Ieee/input.scm 320 */
								long BgL_res3499z00_4270;

								{	/* Ieee/input.scm 320 */
									long BgL_xz00_4269;

									BgL_xz00_4269 = BELONG_TO_LONG(BgL_lz00_39);
									{	/* Ieee/input.scm 320 */
										long BgL_auxz00_5914;

										{	/* Ieee/input.scm 320 */
											long BgL_auxz00_5915;

											BgL_auxz00_5915 = ELONG_TO_LONG(BgL_xz00_4269);
											BgL_auxz00_5914 = ELONG_TO_LONG(BgL_auxz00_5915);
										}
										BgL_res3499z00_4270 = ELONG_TO_LONG(BgL_auxz00_5914);
								}}
								BgL_lenz00_2498 = BINT(BgL_res3499z00_4270);
							}
						else
							{	/* Ieee/input.scm 320 */
								if (LLONGP(BgL_lz00_39))
									{	/* Ieee/input.scm 321 */
										BGL_LONGLONG_T BgL_xz00_4272;

										BgL_xz00_4272 = BLLONG_TO_LLONG(BgL_lz00_39);
										BgL_lenz00_2498 = BINT(LLONG_TO_LONG(BgL_xz00_4272));
									}
								else
									{	/* Ieee/input.scm 321 */
										BgL_lenz00_2498 =
											BGl_bigloozd2typezd2errorz00zz__errorz00
											(BGl_symbol3664z00zz__r4_input_6_10_2z00,
											BGl_string3666z00zz__r4_input_6_10_2z00,
											bgl_find_runtime_type(BgL_lz00_39));
									}
							}
					}
				if (((long) CINT(BgL_lenz00_2498) <= ((long) 0)))
					{	/* Ieee/input.scm 325 */
						if (((long) CINT(BgL_lenz00_2498) == ((long) 0)))
							{	/* Ieee/input.scm 326 */
								return BGl_string3663z00zz__r4_input_6_10_2z00;
							}
						else
							{	/* Llib/object.scm 90 */
								BgL_z62iozd2errorzb0_bglt BgL_arg2865z00_2501;

								{	/* Llib/object.scm 90 */
									obj_t BgL_arg2866z00_2502;

									obj_t BgL_arg2867z00_2503;

									{	/* Llib/object.scm 90 */

										{	/* Llib/object.scm 90 */

											BgL_arg2866z00_2502 =
												BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
										}
									}
									BgL_arg2867z00_2503 = BGl_symbol3664z00zz__r4_input_6_10_2z00;
									BgL_arg2865z00_2501 =
										BGl_makezd2z62iozd2errorz62zz__objectz00(BFALSE, BFALSE,
										BgL_arg2866z00_2502, BgL_arg2867z00_2503,
										BGl_string3667z00zz__r4_input_6_10_2z00, BgL_lenz00_2498);
								}
								return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2865z00_2501));
							}
					}
				else
					{	/* Ieee/input.scm 334 */
						obj_t BgL_sz00_2506;

						BgL_sz00_2506 = make_string_sans_fill((long) CINT(BgL_lenz00_2498));
						{	/* Ieee/input.scm 334 */
							long BgL_nz00_2507;

							BgL_nz00_2507 =
								bgl_rgc_blit_string(BgL_ipz00_40,
								BSTRING_TO_STRING(BgL_sz00_2506), ((long) 0),
								(long) CINT(BgL_lenz00_2498));
							{	/* Ieee/input.scm 335 */

								if ((BgL_nz00_2507 == ((long) 0)))
									{	/* Ieee/input.scm 337 */
										if (rgc_buffer_eof_p(BgL_ipz00_40))
											{	/* Ieee/input.scm 338 */
												return BEOF;
											}
										else
											{	/* Ieee/input.scm 338 */
												return BGl_string3663z00zz__r4_input_6_10_2z00;
											}
									}
								else
									{	/* Ieee/input.scm 337 */
										if ((BgL_nz00_2507 < (long) CINT(BgL_lenz00_2498)))
											{	/* Ieee/input.scm 341 */
												return bgl_string_shrink(BgL_sz00_2506, BgL_nz00_2507);
											}
										else
											{	/* Ieee/input.scm 341 */
												return BgL_sz00_2506;
											}
									}
							}
						}
					}
			}
		}
	}



/* _read-chars! */
	obj_t BGl__readzd2charsz12zc0zz__r4_input_6_10_2z00(obj_t BgL_envz00_47,
		obj_t BgL_optz00_46)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 349 */
			{	/* Ieee/input.scm 349 */
				obj_t BgL_g2030z00_2517;

				obj_t BgL_g2031z00_2518;

				BgL_g2030z00_2517 = VECTOR_REF(BgL_optz00_46, (int) (((long) 0)));
				BgL_g2031z00_2518 = VECTOR_REF(BgL_optz00_46, (int) (((long) 1)));
				{	/* Ieee/input.scm 349 */
					int BgL_aux2033z00_2520;

					BgL_aux2033z00_2520 = VECTOR_LENGTH(BgL_optz00_46);
					switch ((long) (BgL_aux2033z00_2520))
						{
						case ((long) 2):

							{	/* Ieee/input.scm 349 */
								obj_t BgL_ipz00_2522;

								{	/* Ieee/input.scm 349 */
									obj_t BgL_res3500z00_4285;

									{	/* Ieee/input.scm 349 */
										obj_t BgL_auxz00_5955;

										BgL_auxz00_5955 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res3500z00_4285 =
											BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_5955);
									}
									BgL_ipz00_2522 = BgL_res3500z00_4285;
								}
								{	/* Ieee/input.scm 349 */

									{	/* Ieee/input.scm 349 */
										obj_t BgL_arg2879z00_2523;

										obj_t BgL_arg2880z00_2524;

										BgL_arg2879z00_2523 =
											VECTOR_REF(BgL_optz00_46, (int) (((long) 0)));
										BgL_arg2880z00_2524 =
											VECTOR_REF(BgL_optz00_46, (int) (((long) 1)));
										{	/* Ieee/input.scm 349 */
											obj_t BgL_auxz00_5962;

											if (STRINGP(BgL_arg2879z00_2523))
												{	/* Ieee/input.scm 349 */
													BgL_auxz00_5962 = BgL_arg2879z00_2523;
												}
											else
												{
													obj_t BgL_auxz00_5965;

													BgL_auxz00_5965 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3657z00zz__r4_input_6_10_2z00,
														BINT(((long) 13589)),
														BGl_string3668z00zz__r4_input_6_10_2z00,
														BGl_string3669z00zz__r4_input_6_10_2z00,
														BgL_arg2879z00_2523);
													FAILURE(BgL_auxz00_5965, BFALSE, BFALSE);
												}
											return
												BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00
												(BgL_auxz00_5962, BgL_arg2880z00_2524, BgL_ipz00_2522);
										}
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Ieee/input.scm 349 */
								obj_t BgL_ipz00_2525;

								BgL_ipz00_2525 = VECTOR_REF(BgL_optz00_46, (int) (((long) 2)));
								{	/* Ieee/input.scm 349 */

									{	/* Ieee/input.scm 349 */
										obj_t BgL_arg2881z00_2526;

										obj_t BgL_arg2882z00_2527;

										BgL_arg2881z00_2526 =
											VECTOR_REF(BgL_optz00_46, (int) (((long) 0)));
										BgL_arg2882z00_2527 =
											VECTOR_REF(BgL_optz00_46, (int) (((long) 1)));
										{	/* Ieee/input.scm 349 */
											obj_t BgL_auxz00_5976;

											if (STRINGP(BgL_arg2881z00_2526))
												{	/* Ieee/input.scm 349 */
													BgL_auxz00_5976 = BgL_arg2881z00_2526;
												}
											else
												{
													obj_t BgL_auxz00_5979;

													BgL_auxz00_5979 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3657z00zz__r4_input_6_10_2z00,
														BINT(((long) 13589)),
														BGl_string3668z00zz__r4_input_6_10_2z00,
														BGl_string3669z00zz__r4_input_6_10_2z00,
														BgL_arg2881z00_2526);
													FAILURE(BgL_auxz00_5979, BFALSE, BFALSE);
												}
											return
												BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00
												(BgL_auxz00_5976, BgL_arg2882z00_2527, BgL_ipz00_2525);
										}
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* read-chars! */
	BGL_EXPORTED_DEF obj_t BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00(obj_t
		BgL_bufz00_43, obj_t BgL_lz00_44, obj_t BgL_ipz00_45)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 349 */
			{	/* Ieee/input.scm 350 */
				obj_t BgL_lenz00_2528;

				if (INTEGERP(BgL_lz00_44))
					{	/* Ieee/input.scm 351 */
						BgL_lenz00_2528 = BgL_lz00_44;
					}
				else
					{	/* Ieee/input.scm 351 */
						if (ELONGP(BgL_lz00_44))
							{	/* Ieee/input.scm 352 */
								long BgL_res3501z00_4289;

								{	/* Ieee/input.scm 352 */
									long BgL_xz00_4288;

									BgL_xz00_4288 = BELONG_TO_LONG(BgL_lz00_44);
									{	/* Ieee/input.scm 352 */
										long BgL_auxz00_5991;

										{	/* Ieee/input.scm 352 */
											long BgL_auxz00_5992;

											BgL_auxz00_5992 = ELONG_TO_LONG(BgL_xz00_4288);
											BgL_auxz00_5991 = ELONG_TO_LONG(BgL_auxz00_5992);
										}
										BgL_res3501z00_4289 = ELONG_TO_LONG(BgL_auxz00_5991);
								}}
								BgL_lenz00_2528 = BINT(BgL_res3501z00_4289);
							}
						else
							{	/* Ieee/input.scm 352 */
								if (LLONGP(BgL_lz00_44))
									{	/* Ieee/input.scm 353 */
										BGL_LONGLONG_T BgL_xz00_4291;

										BgL_xz00_4291 = BLLONG_TO_LLONG(BgL_lz00_44);
										BgL_lenz00_2528 = BINT(LLONG_TO_LONG(BgL_xz00_4291));
									}
								else
									{	/* Ieee/input.scm 353 */
										BgL_lenz00_2528 =
											BGl_bigloozd2typezd2errorz00zz__errorz00
											(BGl_symbol3670z00zz__r4_input_6_10_2z00,
											BGl_string3666z00zz__r4_input_6_10_2z00,
											bgl_find_runtime_type(BgL_lz00_44));
									}
							}
					}
				if (((long) CINT(BgL_lenz00_2528) <= ((long) 0)))
					{	/* Ieee/input.scm 357 */
						if (((long) CINT(BgL_lenz00_2528) == ((long) 0)))
							{	/* Ieee/input.scm 358 */
								return BINT(((long) 0));
							}
						else
							{	/* Llib/object.scm 90 */
								BgL_z62iozd2errorzb0_bglt BgL_arg2885z00_2531;

								{	/* Llib/object.scm 90 */
									obj_t BgL_arg2886z00_2532;

									obj_t BgL_arg2887z00_2533;

									{	/* Llib/object.scm 90 */

										{	/* Llib/object.scm 90 */

											BgL_arg2886z00_2532 =
												BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
										}
									}
									BgL_arg2887z00_2533 = BGl_symbol3664z00zz__r4_input_6_10_2z00;
									BgL_arg2885z00_2531 =
										BGl_makezd2z62iozd2errorz62zz__objectz00(BFALSE, BFALSE,
										BgL_arg2886z00_2532, BgL_arg2887z00_2533,
										BGl_string3667z00zz__r4_input_6_10_2z00, BgL_lenz00_2528);
								}
								return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2885z00_2531));
							}
					}
				else
					{	/* Ieee/input.scm 366 */
						obj_t BgL_arg2891z00_2537;

						{	/* Ieee/input.scm 366 */
							long BgL_xz00_2538;

							BgL_xz00_2538 = STRING_LENGTH(BgL_bufz00_43);
							if ((BgL_xz00_2538 < (long) CINT(BgL_lenz00_2528)))
								{	/* Ieee/input.scm 366 */
									BgL_arg2891z00_2537 = BINT(BgL_xz00_2538);
								}
							else
								{	/* Ieee/input.scm 366 */
									BgL_arg2891z00_2537 = BgL_lenz00_2528;
								}
						}
						return
							BINT(bgl_rgc_blit_string(BgL_ipz00_45,
								BSTRING_TO_STRING(BgL_bufz00_43), ((long) 0),
								(long) CINT(BgL_arg2891z00_2537)));
		}}}
	}



/* _read-fill-string! */
	obj_t BGl__readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00(obj_t
		BgL_envz00_53, obj_t BgL_optz00_52)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 371 */
			{	/* Ieee/input.scm 371 */
				obj_t BgL_g2034z00_2547;

				obj_t BgL_g2035z00_2548;

				obj_t BgL_g2036z00_2549;

				BgL_g2034z00_2547 = VECTOR_REF(BgL_optz00_52, (int) (((long) 0)));
				BgL_g2035z00_2548 = VECTOR_REF(BgL_optz00_52, (int) (((long) 1)));
				BgL_g2036z00_2549 = VECTOR_REF(BgL_optz00_52, (int) (((long) 2)));
				{	/* Ieee/input.scm 371 */
					int BgL_aux2038z00_2551;

					BgL_aux2038z00_2551 = VECTOR_LENGTH(BgL_optz00_52);
					switch ((long) (BgL_aux2038z00_2551))
						{
						case ((long) 3):

							{	/* Ieee/input.scm 371 */
								obj_t BgL_ipz00_2553;

								{	/* Ieee/input.scm 371 */
									obj_t BgL_res3502z00_4300;

									{	/* Ieee/input.scm 371 */
										obj_t BgL_auxz00_6031;

										BgL_auxz00_6031 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res3502z00_4300 =
											BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_6031);
									}
									BgL_ipz00_2553 = BgL_res3502z00_4300;
								}
								{	/* Ieee/input.scm 371 */

									{	/* Ieee/input.scm 371 */
										obj_t BgL_arg2900z00_2554;

										obj_t BgL_arg2901z00_2555;

										obj_t BgL_arg2902z00_2556;

										BgL_arg2900z00_2554 =
											VECTOR_REF(BgL_optz00_52, (int) (((long) 0)));
										BgL_arg2901z00_2555 =
											VECTOR_REF(BgL_optz00_52, (int) (((long) 1)));
										BgL_arg2902z00_2556 =
											VECTOR_REF(BgL_optz00_52, (int) (((long) 2)));
										{	/* Ieee/input.scm 371 */
											int BgL_auxz00_6040;

											{	/* Ieee/input.scm 371 */
												long BgL_auxz00_6057;

												long BgL_auxz00_6048;

												obj_t BgL_auxz00_6041;

												{	/* Ieee/input.scm 371 */
													obj_t BgL_auxz00_6058;

													if (INTEGERP(BgL_arg2902z00_2556))
														{	/* Ieee/input.scm 371 */
															BgL_auxz00_6058 = BgL_arg2902z00_2556;
														}
													else
														{
															obj_t BgL_auxz00_6061;

															BgL_auxz00_6061 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3657z00zz__r4_input_6_10_2z00,
																BINT(((long) 14320)),
																BGl_string3672z00zz__r4_input_6_10_2z00,
																BGl_string3673z00zz__r4_input_6_10_2z00,
																BgL_arg2902z00_2556);
															FAILURE(BgL_auxz00_6061, BFALSE, BFALSE);
														}
													BgL_auxz00_6057 = (long) CINT(BgL_auxz00_6058);
												}
												{	/* Ieee/input.scm 371 */
													obj_t BgL_auxz00_6049;

													if (INTEGERP(BgL_arg2901z00_2555))
														{	/* Ieee/input.scm 371 */
															BgL_auxz00_6049 = BgL_arg2901z00_2555;
														}
													else
														{
															obj_t BgL_auxz00_6052;

															BgL_auxz00_6052 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3657z00zz__r4_input_6_10_2z00,
																BINT(((long) 14320)),
																BGl_string3672z00zz__r4_input_6_10_2z00,
																BGl_string3673z00zz__r4_input_6_10_2z00,
																BgL_arg2901z00_2555);
															FAILURE(BgL_auxz00_6052, BFALSE, BFALSE);
														}
													BgL_auxz00_6048 = (long) CINT(BgL_auxz00_6049);
												}
												if (STRINGP(BgL_arg2900z00_2554))
													{	/* Ieee/input.scm 371 */
														BgL_auxz00_6041 = BgL_arg2900z00_2554;
													}
												else
													{
														obj_t BgL_auxz00_6044;

														BgL_auxz00_6044 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3657z00zz__r4_input_6_10_2z00,
															BINT(((long) 14320)),
															BGl_string3672z00zz__r4_input_6_10_2z00,
															BGl_string3669z00zz__r4_input_6_10_2z00,
															BgL_arg2900z00_2554);
														FAILURE(BgL_auxz00_6044, BFALSE, BFALSE);
													}
												BgL_auxz00_6040 =
													BGl_readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00
													(BgL_auxz00_6041, BgL_auxz00_6048, BgL_auxz00_6057,
													BgL_ipz00_2553);
											}
											return BINT(BgL_auxz00_6040);
										}
									}
								}
							}
							break;
						case ((long) 4):

							{	/* Ieee/input.scm 371 */
								obj_t BgL_ipz00_2557;

								BgL_ipz00_2557 = VECTOR_REF(BgL_optz00_52, (int) (((long) 3)));
								{	/* Ieee/input.scm 371 */

									{	/* Ieee/input.scm 371 */
										obj_t BgL_arg2903z00_2558;

										obj_t BgL_arg2904z00_2559;

										obj_t BgL_arg2905z00_2560;

										BgL_arg2903z00_2558 =
											VECTOR_REF(BgL_optz00_52, (int) (((long) 0)));
										BgL_arg2904z00_2559 =
											VECTOR_REF(BgL_optz00_52, (int) (((long) 1)));
										BgL_arg2905z00_2560 =
											VECTOR_REF(BgL_optz00_52, (int) (((long) 2)));
										{	/* Ieee/input.scm 371 */
											int BgL_auxz00_6076;

											{	/* Ieee/input.scm 371 */
												long BgL_auxz00_6093;

												long BgL_auxz00_6084;

												obj_t BgL_auxz00_6077;

												{	/* Ieee/input.scm 371 */
													obj_t BgL_auxz00_6094;

													if (INTEGERP(BgL_arg2905z00_2560))
														{	/* Ieee/input.scm 371 */
															BgL_auxz00_6094 = BgL_arg2905z00_2560;
														}
													else
														{
															obj_t BgL_auxz00_6097;

															BgL_auxz00_6097 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3657z00zz__r4_input_6_10_2z00,
																BINT(((long) 14320)),
																BGl_string3672z00zz__r4_input_6_10_2z00,
																BGl_string3673z00zz__r4_input_6_10_2z00,
																BgL_arg2905z00_2560);
															FAILURE(BgL_auxz00_6097, BFALSE, BFALSE);
														}
													BgL_auxz00_6093 = (long) CINT(BgL_auxz00_6094);
												}
												{	/* Ieee/input.scm 371 */
													obj_t BgL_auxz00_6085;

													if (INTEGERP(BgL_arg2904z00_2559))
														{	/* Ieee/input.scm 371 */
															BgL_auxz00_6085 = BgL_arg2904z00_2559;
														}
													else
														{
															obj_t BgL_auxz00_6088;

															BgL_auxz00_6088 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3657z00zz__r4_input_6_10_2z00,
																BINT(((long) 14320)),
																BGl_string3672z00zz__r4_input_6_10_2z00,
																BGl_string3673z00zz__r4_input_6_10_2z00,
																BgL_arg2904z00_2559);
															FAILURE(BgL_auxz00_6088, BFALSE, BFALSE);
														}
													BgL_auxz00_6084 = (long) CINT(BgL_auxz00_6085);
												}
												if (STRINGP(BgL_arg2903z00_2558))
													{	/* Ieee/input.scm 371 */
														BgL_auxz00_6077 = BgL_arg2903z00_2558;
													}
												else
													{
														obj_t BgL_auxz00_6080;

														BgL_auxz00_6080 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3657z00zz__r4_input_6_10_2z00,
															BINT(((long) 14320)),
															BGl_string3672z00zz__r4_input_6_10_2z00,
															BGl_string3669z00zz__r4_input_6_10_2z00,
															BgL_arg2903z00_2558);
														FAILURE(BgL_auxz00_6080, BFALSE, BFALSE);
													}
												BgL_auxz00_6076 =
													BGl_readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00
													(BgL_auxz00_6077, BgL_auxz00_6084, BgL_auxz00_6093,
													BgL_ipz00_2557);
											}
											return BINT(BgL_auxz00_6076);
										}
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* read-fill-string! */
	BGL_EXPORTED_DEF int
		BGl_readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00(obj_t BgL_sz00_48,
		long BgL_oz00_49, long BgL_lenz00_50, obj_t BgL_ipz00_51)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 371 */
			if ((BgL_lenz00_50 <= ((long) 0)))
				{	/* Ieee/input.scm 373 */
					if ((BgL_lenz00_50 == ((long) 0)))
						{	/* Ieee/input.scm 374 */
							return (int) (((long) 0));
						}
					else
						{	/* Llib/object.scm 90 */
							BgL_z62iozd2errorzb0_bglt BgL_arg2908z00_2563;

							{	/* Llib/object.scm 90 */
								obj_t BgL_arg2909z00_2564;

								obj_t BgL_arg2910z00_2565;

								{	/* Llib/object.scm 90 */

									{	/* Llib/object.scm 90 */

										BgL_arg2909z00_2564 =
											BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
									}
								}
								BgL_arg2910z00_2565 = BGl_symbol3664z00zz__r4_input_6_10_2z00;
								BgL_arg2908z00_2563 =
									BGl_makezd2z62iozd2errorz62zz__objectz00(BFALSE, BFALSE,
									BgL_arg2909z00_2564, BgL_arg2910z00_2565,
									BGl_string3667z00zz__r4_input_6_10_2z00, BINT(BgL_lenz00_50));
							}
							return
								CINT(BGl_raisez00zz__errorz00((obj_t) (BgL_arg2908z00_2563)));
						}
				}
			else
				{	/* Ieee/input.scm 382 */
					long BgL_arg2912z00_2568;

					{	/* Ieee/input.scm 382 */
						long BgL_yz00_2570;

						BgL_yz00_2570 = (STRING_LENGTH(BgL_sz00_48) - BgL_oz00_49);
						if ((BgL_lenz00_50 < BgL_yz00_2570))
							{	/* Ieee/input.scm 382 */
								BgL_arg2912z00_2568 = BgL_lenz00_50;
							}
						else
							{	/* Ieee/input.scm 382 */
								BgL_arg2912z00_2568 = BgL_yz00_2570;
							}
					}
					return
						(int) (bgl_rgc_blit_string(BgL_ipz00_51,
							BSTRING_TO_STRING(BgL_sz00_48), BgL_oz00_49,
							BgL_arg2912z00_2568));
		}}
	}



/* _unread-char! */
	obj_t BGl__unreadzd2charz12zc0zz__r4_input_6_10_2z00(obj_t BgL_envz00_57,
		obj_t BgL_optz00_56)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 387 */
			{	/* Ieee/input.scm 387 */
				obj_t BgL_g2039z00_2573;

				BgL_g2039z00_2573 = VECTOR_REF(BgL_optz00_56, (int) (((long) 0)));
				{	/* Ieee/input.scm 387 */
					int BgL_aux2041z00_2575;

					BgL_aux2041z00_2575 = VECTOR_LENGTH(BgL_optz00_56);
					switch ((long) (BgL_aux2041z00_2575))
						{
						case ((long) 1):

							{	/* Ieee/input.scm 387 */
								obj_t BgL_ipz00_2577;

								{	/* Ieee/input.scm 387 */
									obj_t BgL_res3503z00_4311;

									{	/* Ieee/input.scm 387 */
										obj_t BgL_auxz00_6127;

										BgL_auxz00_6127 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res3503z00_4311 =
											BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_6127);
									}
									BgL_ipz00_2577 = BgL_res3503z00_4311;
								}
								{	/* Ieee/input.scm 387 */

									{	/* Ieee/input.scm 387 */
										obj_t BgL_arg2916z00_2578;

										BgL_arg2916z00_2578 =
											VECTOR_REF(BgL_optz00_56, (int) (((long) 0)));
										{	/* Ieee/input.scm 387 */
											unsigned char BgL_cz00_4312;

											{	/* Ieee/input.scm 387 */
												obj_t BgL_auxz00_6132;

												if (CHARP(BgL_arg2916z00_2578))
													{	/* Ieee/input.scm 387 */
														BgL_auxz00_6132 = BgL_arg2916z00_2578;
													}
												else
													{
														obj_t BgL_auxz00_6135;

														BgL_auxz00_6135 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3657z00zz__r4_input_6_10_2z00,
															BINT(((long) 14896)),
															BGl_string3674z00zz__r4_input_6_10_2z00,
															BGl_string3675z00zz__r4_input_6_10_2z00,
															BgL_arg2916z00_2578);
														FAILURE(BgL_auxz00_6135, BFALSE, BFALSE);
													}
												BgL_cz00_4312 = CCHAR(BgL_auxz00_6132);
											}
											{	/* Ieee/input.scm 387 */
												bool_t BgL_testz00_6140;

												{	/* Ieee/input.scm 387 */
													long BgL_arg2923z00_4315;

													BgL_arg2923z00_4315 =
														((unsigned char) (BgL_cz00_4312));
													BgL_testz00_6140 =
														rgc_buffer_insert_char(BgL_ipz00_2577,
														(int) (BgL_arg2923z00_4315));
												}
												if (BgL_testz00_6140)
													{	/* Ieee/input.scm 387 */
														return BFALSE;
													}
												else
													{	/* Ieee/input.scm 387 */
														BgL_z62iozd2errorzb0_bglt BgL_arg2919z00_4316;

														{	/* Ieee/input.scm 387 */
															obj_t BgL_arg2920z00_4317;

															obj_t BgL_arg2921z00_4318;

															{	/* Ieee/input.scm 387 */

																{	/* Ieee/input.scm 387 */

																	BgL_arg2920z00_4317 =
																		BGl_getzd2tracezd2stackz00zz__errorz00
																		(BFALSE);
																}
															}
															BgL_arg2921z00_4318 =
																BGl_symbol3676z00zz__r4_input_6_10_2z00;
															BgL_arg2919z00_4316 =
																BGl_makezd2z62iozd2errorz62zz__objectz00(BFALSE,
																BFALSE, BgL_arg2920z00_4317,
																BgL_arg2921z00_4318,
																BGl_string3678z00zz__r4_input_6_10_2z00,
																BCHAR(BgL_cz00_4312));
														}
														return
															BGl_raisez00zz__errorz00(
															(obj_t) (BgL_arg2919z00_4316));
													}
											}
										}
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Ieee/input.scm 387 */
								obj_t BgL_ipz00_2579;

								BgL_ipz00_2579 = VECTOR_REF(BgL_optz00_56, (int) (((long) 1)));
								{	/* Ieee/input.scm 387 */

									{	/* Ieee/input.scm 387 */
										obj_t BgL_arg2917z00_2580;

										BgL_arg2917z00_2580 =
											VECTOR_REF(BgL_optz00_56, (int) (((long) 0)));
										{	/* Ieee/input.scm 387 */
											unsigned char BgL_cz00_4324;

											{	/* Ieee/input.scm 387 */
												obj_t BgL_auxz00_6154;

												if (CHARP(BgL_arg2917z00_2580))
													{	/* Ieee/input.scm 387 */
														BgL_auxz00_6154 = BgL_arg2917z00_2580;
													}
												else
													{
														obj_t BgL_auxz00_6157;

														BgL_auxz00_6157 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3657z00zz__r4_input_6_10_2z00,
															BINT(((long) 14896)),
															BGl_string3674z00zz__r4_input_6_10_2z00,
															BGl_string3675z00zz__r4_input_6_10_2z00,
															BgL_arg2917z00_2580);
														FAILURE(BgL_auxz00_6157, BFALSE, BFALSE);
													}
												BgL_cz00_4324 = CCHAR(BgL_auxz00_6154);
											}
											{	/* Ieee/input.scm 387 */
												bool_t BgL_testz00_6162;

												{	/* Ieee/input.scm 387 */
													long BgL_arg2923z00_4327;

													BgL_arg2923z00_4327 =
														((unsigned char) (BgL_cz00_4324));
													{	/* Ieee/input.scm 387 */
														obj_t BgL_inputzd2portzd2_4334;

														if (INPUT_PORTP(BgL_ipz00_2579))
															{	/* Ieee/input.scm 387 */
																BgL_inputzd2portzd2_4334 = BgL_ipz00_2579;
															}
														else
															{
																obj_t BgL_auxz00_6167;

																BgL_auxz00_6167 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3657z00zz__r4_input_6_10_2z00,
																	BINT(((long) 14896)),
																	BGl_string3674z00zz__r4_input_6_10_2z00,
																	BGl_string3660z00zz__r4_input_6_10_2z00,
																	BgL_ipz00_2579);
																FAILURE(BgL_auxz00_6167, BFALSE, BFALSE);
															}
														BgL_testz00_6162 =
															rgc_buffer_insert_char(BgL_inputzd2portzd2_4334,
															(int) (BgL_arg2923z00_4327));
												}}
												if (BgL_testz00_6162)
													{	/* Ieee/input.scm 387 */
														return BFALSE;
													}
												else
													{	/* Ieee/input.scm 387 */
														BgL_z62iozd2errorzb0_bglt BgL_arg2919z00_4328;

														{	/* Ieee/input.scm 387 */
															obj_t BgL_arg2920z00_4329;

															obj_t BgL_arg2921z00_4330;

															{	/* Ieee/input.scm 387 */

																{	/* Ieee/input.scm 387 */

																	BgL_arg2920z00_4329 =
																		BGl_getzd2tracezd2stackz00zz__errorz00
																		(BFALSE);
																}
															}
															BgL_arg2921z00_4330 =
																BGl_symbol3676z00zz__r4_input_6_10_2z00;
															BgL_arg2919z00_4328 =
																BGl_makezd2z62iozd2errorz62zz__objectz00(BFALSE,
																BFALSE, BgL_arg2920z00_4329,
																BgL_arg2921z00_4330,
																BGl_string3678z00zz__r4_input_6_10_2z00,
																BCHAR(BgL_cz00_4324));
														}
														return
															BGl_raisez00zz__errorz00(
															(obj_t) (BgL_arg2919z00_4328));
													}
											}
										}
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* unread-char! */
	BGL_EXPORTED_DEF obj_t BGl_unreadzd2charz12zc0zz__r4_input_6_10_2z00(unsigned
		char BgL_cz00_54, obj_t BgL_ipz00_55)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 387 */
			{	/* Ieee/input.scm 388 */
				bool_t BgL_testz00_6180;

				{	/* Ieee/input.scm 388 */
					long BgL_arg2923z00_4337;

					BgL_arg2923z00_4337 = ((unsigned char) (BgL_cz00_54));
					BgL_testz00_6180 =
						rgc_buffer_insert_char(BgL_ipz00_55, (int) (BgL_arg2923z00_4337));
				}
				if (BgL_testz00_6180)
					{	/* Ieee/input.scm 388 */
						return BFALSE;
					}
				else
					{	/* Ieee/input.scm 388 */
						BgL_z62iozd2errorzb0_bglt BgL_arg2919z00_4338;

						{	/* Ieee/input.scm 388 */
							obj_t BgL_arg2920z00_4339;

							obj_t BgL_arg2921z00_4340;

							{	/* Ieee/input.scm 388 */

								{	/* Ieee/input.scm 388 */

									BgL_arg2920z00_4339 =
										BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
								}
							}
							BgL_arg2921z00_4340 = BGl_symbol3676z00zz__r4_input_6_10_2z00;
							BgL_arg2919z00_4338 =
								BGl_makezd2z62iozd2errorz62zz__objectz00(BFALSE, BFALSE,
								BgL_arg2920z00_4339, BgL_arg2921z00_4340,
								BGl_string3678z00zz__r4_input_6_10_2z00, BCHAR(BgL_cz00_54));
						}
						return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2919z00_4338));
					}
			}
		}
	}



/* _unread-string! */
	obj_t BGl__unreadzd2stringz12zc0zz__r4_input_6_10_2z00(obj_t BgL_envz00_61,
		obj_t BgL_optz00_60)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 398 */
			{	/* Ieee/input.scm 398 */
				obj_t BgL_g2043z00_2588;

				BgL_g2043z00_2588 = VECTOR_REF(BgL_optz00_60, (int) (((long) 0)));
				{	/* Ieee/input.scm 398 */
					int BgL_aux2045z00_2590;

					BgL_aux2045z00_2590 = VECTOR_LENGTH(BgL_optz00_60);
					switch ((long) (BgL_aux2045z00_2590))
						{
						case ((long) 1):

							{	/* Ieee/input.scm 398 */
								obj_t BgL_ipz00_2592;

								{	/* Ieee/input.scm 398 */
									obj_t BgL_res3504z00_4347;

									{	/* Ieee/input.scm 398 */
										obj_t BgL_auxz00_6193;

										BgL_auxz00_6193 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res3504z00_4347 =
											BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_6193);
									}
									BgL_ipz00_2592 = BgL_res3504z00_4347;
								}
								{	/* Ieee/input.scm 398 */

									{	/* Ieee/input.scm 398 */
										obj_t BgL_arg2925z00_2593;

										BgL_arg2925z00_2593 =
											VECTOR_REF(BgL_optz00_60, (int) (((long) 0)));
										{	/* Ieee/input.scm 398 */
											obj_t BgL_auxz00_6198;

											if (STRINGP(BgL_arg2925z00_2593))
												{	/* Ieee/input.scm 398 */
													BgL_auxz00_6198 = BgL_arg2925z00_2593;
												}
											else
												{
													obj_t BgL_auxz00_6201;

													BgL_auxz00_6201 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3657z00zz__r4_input_6_10_2z00,
														BINT(((long) 15362)),
														BGl_string3679z00zz__r4_input_6_10_2z00,
														BGl_string3669z00zz__r4_input_6_10_2z00,
														BgL_arg2925z00_2593);
													FAILURE(BgL_auxz00_6201, BFALSE, BFALSE);
												}
											return
												BGl_unreadzd2stringz12zc0zz__r4_input_6_10_2z00
												(BgL_auxz00_6198, BgL_ipz00_2592);
										}
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Ieee/input.scm 398 */
								obj_t BgL_ipz00_2594;

								BgL_ipz00_2594 = VECTOR_REF(BgL_optz00_60, (int) (((long) 1)));
								{	/* Ieee/input.scm 398 */

									{	/* Ieee/input.scm 398 */
										obj_t BgL_arg2926z00_2595;

										BgL_arg2926z00_2595 =
											VECTOR_REF(BgL_optz00_60, (int) (((long) 0)));
										{	/* Ieee/input.scm 398 */
											obj_t BgL_auxz00_6210;

											if (STRINGP(BgL_arg2926z00_2595))
												{	/* Ieee/input.scm 398 */
													BgL_auxz00_6210 = BgL_arg2926z00_2595;
												}
											else
												{
													obj_t BgL_auxz00_6213;

													BgL_auxz00_6213 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3657z00zz__r4_input_6_10_2z00,
														BINT(((long) 15362)),
														BGl_string3679z00zz__r4_input_6_10_2z00,
														BGl_string3669z00zz__r4_input_6_10_2z00,
														BgL_arg2926z00_2595);
													FAILURE(BgL_auxz00_6213, BFALSE, BFALSE);
												}
											return
												BGl_unreadzd2stringz12zc0zz__r4_input_6_10_2z00
												(BgL_auxz00_6210, BgL_ipz00_2594);
										}
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* unread-string! */
	BGL_EXPORTED_DEF obj_t BGl_unreadzd2stringz12zc0zz__r4_input_6_10_2z00(obj_t
		BgL_strz00_58, obj_t BgL_ipz00_59)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 398 */
			if (rgc_buffer_insert_substring(BgL_ipz00_59, BgL_strz00_58, ((long) 0),
					STRING_LENGTH(BgL_strz00_58)))
				{	/* Ieee/input.scm 399 */
					return BFALSE;
				}
			else
				{	/* Llib/object.scm 90 */
					BgL_z62iozd2errorzb0_bglt BgL_arg2928z00_2597;

					{	/* Llib/object.scm 90 */
						obj_t BgL_arg2929z00_2598;

						obj_t BgL_arg2930z00_2599;

						{	/* Llib/object.scm 90 */

							{	/* Llib/object.scm 90 */

								BgL_arg2929z00_2598 =
									BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
							}
						}
						BgL_arg2930z00_2599 = BGl_symbol3680z00zz__r4_input_6_10_2z00;
						BgL_arg2928z00_2597 =
							BGl_makezd2z62iozd2errorz62zz__objectz00(BFALSE, BFALSE,
							BgL_arg2929z00_2598, BgL_arg2930z00_2599,
							BGl_string3682z00zz__r4_input_6_10_2z00, BgL_strz00_58);
					}
					return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2928z00_2597));
				}
		}
	}



/* _unread-substring! */
	obj_t BGl__unreadzd2substringz12zc0zz__r4_input_6_10_2z00(obj_t BgL_envz00_67,
		obj_t BgL_optz00_66)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 409 */
			{	/* Ieee/input.scm 409 */
				obj_t BgL_g2046z00_2604;

				obj_t BgL_g2047z00_2605;

				obj_t BgL_g2048z00_2606;

				BgL_g2046z00_2604 = VECTOR_REF(BgL_optz00_66, (int) (((long) 0)));
				BgL_g2047z00_2605 = VECTOR_REF(BgL_optz00_66, (int) (((long) 1)));
				BgL_g2048z00_2606 = VECTOR_REF(BgL_optz00_66, (int) (((long) 2)));
				{	/* Ieee/input.scm 409 */
					int BgL_aux2050z00_2608;

					BgL_aux2050z00_2608 = VECTOR_LENGTH(BgL_optz00_66);
					switch ((long) (BgL_aux2050z00_2608))
						{
						case ((long) 3):

							{	/* Ieee/input.scm 410 */
								obj_t BgL_ipz00_2610;

								{	/* Ieee/input.scm 410 */
									obj_t BgL_res3505z00_4354;

									{	/* Ieee/input.scm 410 */
										obj_t BgL_auxz00_6234;

										BgL_auxz00_6234 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res3505z00_4354 =
											BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_6234);
									}
									BgL_ipz00_2610 = BgL_res3505z00_4354;
								}
								{	/* Ieee/input.scm 409 */

									{	/* Ieee/input.scm 409 */
										obj_t BgL_arg2935z00_2611;

										obj_t BgL_arg2936z00_2612;

										obj_t BgL_arg2937z00_2613;

										BgL_arg2935z00_2611 =
											VECTOR_REF(BgL_optz00_66, (int) (((long) 0)));
										BgL_arg2936z00_2612 =
											VECTOR_REF(BgL_optz00_66, (int) (((long) 1)));
										BgL_arg2937z00_2613 =
											VECTOR_REF(BgL_optz00_66, (int) (((long) 2)));
										{	/* Ieee/input.scm 409 */
											long BgL_auxz00_6259;

											long BgL_auxz00_6250;

											obj_t BgL_auxz00_6243;

											{	/* Ieee/input.scm 409 */
												obj_t BgL_auxz00_6260;

												if (INTEGERP(BgL_arg2937z00_2613))
													{	/* Ieee/input.scm 409 */
														BgL_auxz00_6260 = BgL_arg2937z00_2613;
													}
												else
													{
														obj_t BgL_auxz00_6263;

														BgL_auxz00_6263 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3657z00zz__r4_input_6_10_2z00,
															BINT(((long) 15854)),
															BGl_string3683z00zz__r4_input_6_10_2z00,
															BGl_string3673z00zz__r4_input_6_10_2z00,
															BgL_arg2937z00_2613);
														FAILURE(BgL_auxz00_6263, BFALSE, BFALSE);
													}
												BgL_auxz00_6259 = (long) CINT(BgL_auxz00_6260);
											}
											{	/* Ieee/input.scm 409 */
												obj_t BgL_auxz00_6251;

												if (INTEGERP(BgL_arg2936z00_2612))
													{	/* Ieee/input.scm 409 */
														BgL_auxz00_6251 = BgL_arg2936z00_2612;
													}
												else
													{
														obj_t BgL_auxz00_6254;

														BgL_auxz00_6254 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3657z00zz__r4_input_6_10_2z00,
															BINT(((long) 15854)),
															BGl_string3683z00zz__r4_input_6_10_2z00,
															BGl_string3673z00zz__r4_input_6_10_2z00,
															BgL_arg2936z00_2612);
														FAILURE(BgL_auxz00_6254, BFALSE, BFALSE);
													}
												BgL_auxz00_6250 = (long) CINT(BgL_auxz00_6251);
											}
											if (STRINGP(BgL_arg2935z00_2611))
												{	/* Ieee/input.scm 409 */
													BgL_auxz00_6243 = BgL_arg2935z00_2611;
												}
											else
												{
													obj_t BgL_auxz00_6246;

													BgL_auxz00_6246 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3657z00zz__r4_input_6_10_2z00,
														BINT(((long) 15854)),
														BGl_string3683z00zz__r4_input_6_10_2z00,
														BGl_string3669z00zz__r4_input_6_10_2z00,
														BgL_arg2935z00_2611);
													FAILURE(BgL_auxz00_6246, BFALSE, BFALSE);
												}
											return
												BGl_unreadzd2substringz12zc0zz__r4_input_6_10_2z00
												(BgL_auxz00_6243, BgL_auxz00_6250, BgL_auxz00_6259,
												BgL_ipz00_2610);
										}
									}
								}
							}
							break;
						case ((long) 4):

							{	/* Ieee/input.scm 409 */
								obj_t BgL_ipz00_2614;

								BgL_ipz00_2614 = VECTOR_REF(BgL_optz00_66, (int) (((long) 3)));
								{	/* Ieee/input.scm 409 */

									{	/* Ieee/input.scm 409 */
										obj_t BgL_arg2938z00_2615;

										obj_t BgL_arg2939z00_2616;

										obj_t BgL_arg2940z00_2617;

										BgL_arg2938z00_2615 =
											VECTOR_REF(BgL_optz00_66, (int) (((long) 0)));
										BgL_arg2939z00_2616 =
											VECTOR_REF(BgL_optz00_66, (int) (((long) 1)));
										BgL_arg2940z00_2617 =
											VECTOR_REF(BgL_optz00_66, (int) (((long) 2)));
										{	/* Ieee/input.scm 409 */
											long BgL_auxz00_6293;

											long BgL_auxz00_6284;

											obj_t BgL_auxz00_6277;

											{	/* Ieee/input.scm 409 */
												obj_t BgL_auxz00_6294;

												if (INTEGERP(BgL_arg2940z00_2617))
													{	/* Ieee/input.scm 409 */
														BgL_auxz00_6294 = BgL_arg2940z00_2617;
													}
												else
													{
														obj_t BgL_auxz00_6297;

														BgL_auxz00_6297 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3657z00zz__r4_input_6_10_2z00,
															BINT(((long) 15854)),
															BGl_string3683z00zz__r4_input_6_10_2z00,
															BGl_string3673z00zz__r4_input_6_10_2z00,
															BgL_arg2940z00_2617);
														FAILURE(BgL_auxz00_6297, BFALSE, BFALSE);
													}
												BgL_auxz00_6293 = (long) CINT(BgL_auxz00_6294);
											}
											{	/* Ieee/input.scm 409 */
												obj_t BgL_auxz00_6285;

												if (INTEGERP(BgL_arg2939z00_2616))
													{	/* Ieee/input.scm 409 */
														BgL_auxz00_6285 = BgL_arg2939z00_2616;
													}
												else
													{
														obj_t BgL_auxz00_6288;

														BgL_auxz00_6288 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3657z00zz__r4_input_6_10_2z00,
															BINT(((long) 15854)),
															BGl_string3683z00zz__r4_input_6_10_2z00,
															BGl_string3673z00zz__r4_input_6_10_2z00,
															BgL_arg2939z00_2616);
														FAILURE(BgL_auxz00_6288, BFALSE, BFALSE);
													}
												BgL_auxz00_6284 = (long) CINT(BgL_auxz00_6285);
											}
											if (STRINGP(BgL_arg2938z00_2615))
												{	/* Ieee/input.scm 409 */
													BgL_auxz00_6277 = BgL_arg2938z00_2615;
												}
											else
												{
													obj_t BgL_auxz00_6280;

													BgL_auxz00_6280 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3657z00zz__r4_input_6_10_2z00,
														BINT(((long) 15854)),
														BGl_string3683z00zz__r4_input_6_10_2z00,
														BGl_string3669z00zz__r4_input_6_10_2z00,
														BgL_arg2938z00_2615);
													FAILURE(BgL_auxz00_6280, BFALSE, BFALSE);
												}
											return
												BGl_unreadzd2substringz12zc0zz__r4_input_6_10_2z00
												(BgL_auxz00_6277, BgL_auxz00_6284, BgL_auxz00_6293,
												BgL_ipz00_2614);
										}
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* unread-substring! */
	BGL_EXPORTED_DEF obj_t
		BGl_unreadzd2substringz12zc0zz__r4_input_6_10_2z00(obj_t BgL_strz00_62,
		long BgL_fromz00_63, long BgL_toz00_64, obj_t BgL_ipz00_65)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 409 */
			{	/* Ieee/input.scm 411 */
				bool_t BgL_testz00_6305;

				if ((BgL_toz00_64 >= BgL_fromz00_63))
					{	/* Ieee/input.scm 411 */
						if ((BgL_fromz00_63 < ((long) 0)))
							{	/* Ieee/input.scm 412 */
								BgL_testz00_6305 = ((bool_t) 1);
							}
						else
							{	/* Ieee/input.scm 412 */
								BgL_testz00_6305 =
									(BgL_toz00_64 > STRING_LENGTH(BgL_strz00_62));
							}
					}
				else
					{	/* Ieee/input.scm 411 */
						BgL_testz00_6305 = ((bool_t) 1);
					}
				if (BgL_testz00_6305)
					{	/* Llib/object.scm 90 */
						BgL_z62iozd2errorzb0_bglt BgL_arg2942z00_2619;

						{	/* Llib/object.scm 90 */
							obj_t BgL_arg2943z00_2620;

							obj_t BgL_arg2944z00_2621;

							obj_t BgL_arg2946z00_2623;

							{	/* Llib/object.scm 90 */

								{	/* Llib/object.scm 90 */

									BgL_arg2943z00_2620 =
										BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
								}
							}
							BgL_arg2944z00_2621 = BGl_symbol3684z00zz__r4_input_6_10_2z00;
							{	/* Ieee/input.scm 417 */
								long BgL_arg2947z00_2625;

								BgL_arg2947z00_2625 = STRING_LENGTH(BgL_strz00_62);
								{	/* Ieee/input.scm 417 */
									obj_t BgL_list2948z00_2626;

									{	/* Ieee/input.scm 417 */
										obj_t BgL_arg2949z00_2627;

										{	/* Ieee/input.scm 417 */
											obj_t BgL_arg2950z00_2628;

											BgL_arg2950z00_2628 =
												MAKE_PAIR(BINT(BgL_arg2947z00_2625), BNIL);
											BgL_arg2949z00_2627 =
												MAKE_PAIR(BINT(BgL_toz00_64), BgL_arg2950z00_2628);
										}
										BgL_list2948z00_2626 =
											MAKE_PAIR(BINT(BgL_fromz00_63), BgL_arg2949z00_2627);
									}
									BgL_arg2946z00_2623 = BgL_list2948z00_2626;
							}}
							BgL_arg2942z00_2619 =
								BGl_makezd2z62iozd2errorz62zz__objectz00(BFALSE, BFALSE,
								BgL_arg2943z00_2620, BgL_arg2944z00_2621,
								BGl_string3686z00zz__r4_input_6_10_2z00, BgL_arg2946z00_2623);
						}
						BGl_raisez00zz__errorz00((obj_t) (BgL_arg2942z00_2619));
					}
				else
					{	/* Ieee/input.scm 411 */
						BFALSE;
					}
			}
			if (rgc_buffer_insert_substring(BgL_ipz00_65, BgL_strz00_62,
					BgL_fromz00_63, BgL_toz00_64))
				{	/* Ieee/input.scm 418 */
					return BFALSE;
				}
			else
				{	/* Llib/object.scm 90 */
					BgL_z62iozd2errorzb0_bglt BgL_arg2955z00_2633;

					{	/* Llib/object.scm 90 */
						obj_t BgL_arg2956z00_2634;

						obj_t BgL_arg2958z00_2635;

						{	/* Llib/object.scm 90 */

							{	/* Llib/object.scm 90 */

								BgL_arg2956z00_2634 =
									BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
							}
						}
						BgL_arg2958z00_2635 = BGl_symbol3687z00zz__r4_input_6_10_2z00;
						BgL_arg2955z00_2633 =
							BGl_makezd2z62iozd2errorz62zz__objectz00(BFALSE, BFALSE,
							BgL_arg2956z00_2634, BgL_arg2958z00_2635,
							BGl_string3682z00zz__r4_input_6_10_2z00, BgL_strz00_62);
					}
					return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2955z00_2633));
				}
		}
	}



/* port->string-list */
	BGL_EXPORTED_DEF obj_t
		BGl_portzd2ze3stringzd2listze3zz__r4_input_6_10_2z00(obj_t BgL_ipz00_68)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 427 */
			{
				obj_t BgL_resz00_4370;

				BgL_resz00_4370 = BNIL;
			BgL_loopz00_4369:
				{	/* Ieee/input.scm 428 */
					obj_t BgL_expz00_4374;

					BgL_expz00_4374 =
						PROCEDURE_ENTRY
						(BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00)
						(BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00,
						BgL_ipz00_68, BEOA);
					if (EOF_OBJECTP(BgL_expz00_4374))
						{	/* Ieee/input.scm 428 */
							return bgl_reverse_bang(BgL_resz00_4370);
						}
					else
						{	/* Ieee/input.scm 428 */
							obj_t BgL_arg2962z00_4376;

							BgL_arg2962z00_4376 = MAKE_PAIR(BgL_expz00_4374, BgL_resz00_4370);
							{
								obj_t BgL_resz00_6335;

								BgL_resz00_6335 = BgL_arg2962z00_4376;
								BgL_resz00_4370 = BgL_resz00_6335;
								goto BgL_loopz00_4369;
							}
						}
				}
			}
		}
	}



/* _port->string-list */
	obj_t BGl__portzd2ze3stringzd2listze3zz__r4_input_6_10_2z00(obj_t
		BgL_envz00_4910, obj_t BgL_ipz00_4911)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 427 */
			{	/* Ieee/input.scm 428 */
				obj_t BgL_auxz00_6336;

				if (INPUT_PORTP(BgL_ipz00_4911))
					{	/* Ieee/input.scm 428 */
						BgL_auxz00_6336 = BgL_ipz00_4911;
					}
				else
					{
						obj_t BgL_auxz00_6339;

						BgL_auxz00_6339 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3657z00zz__r4_input_6_10_2z00, BINT(((long) 16615)),
							BGl_string3689z00zz__r4_input_6_10_2z00,
							BGl_string3660z00zz__r4_input_6_10_2z00, BgL_ipz00_4911);
						FAILURE(BgL_auxz00_6339, BFALSE, BFALSE);
					}
				return
					BGl_portzd2ze3stringzd2listze3zz__r4_input_6_10_2z00(BgL_auxz00_6336);
			}
		}
	}



/* %sendchars */
	int BGl_z52sendcharsz52zz__r4_input_6_10_2z00(obj_t BgL_ipz00_69,
		obj_t BgL_opz00_70, long BgL_sza7za7_71, long BgL_offsetz00_72)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 441 */
			if ((BgL_offsetz00_72 >= ((long) 0)))
				{	/* Ieee/input.scm 442 */
					if (CBOOL(bgl_input_port_seek(BgL_ipz00_69, BgL_offsetz00_72)))
						{	/* Ieee/input.scm 442 */
							((bool_t) 0);
						}
					else
						{	/* Ieee/input.scm 442 */
							bgl_system_failure(BGL_IO_PORT_ERROR,
								BGl_symbol3690z00zz__r4_input_6_10_2z00,
								BGl_string3692z00zz__r4_input_6_10_2z00, BgL_ipz00_69);
						}
				}
			else
				{	/* Ieee/input.scm 442 */
					((bool_t) 0);
				}
			{	/* Ieee/input.scm 443 */
				int BgL_bufsiza7eza7_2647;

				if ((BgL_sza7za7_71 == ((long) -1)))
					{	/* Ieee/input.scm 444 */
						BgL_bufsiza7eza7_2647 = BGL_INPUT_PORT_BUFSIZ(BgL_ipz00_69);
					}
				else
					{	/* Ieee/input.scm 444 */
						if (((long) (default_io_bufsiz) < BgL_sza7za7_71))
							{	/* Ieee/input.scm 446 */
								BgL_bufsiza7eza7_2647 = default_io_bufsiz;
							}
						else
							{	/* Ieee/input.scm 446 */
								BgL_bufsiza7eza7_2647 = (int) (BgL_sza7za7_71);
					}}
				{	/* Ieee/input.scm 443 */
					obj_t BgL_bufz00_2648;

					BgL_bufz00_2648 =
						make_string((long) (BgL_bufsiza7eza7_2647), ((unsigned char) ' '));
					{	/* Ieee/input.scm 452 */

						if ((BgL_sza7za7_71 < ((long) 0)))
							{
								long BgL_charszd2readzd2_2653;

								{	/* Ieee/input.scm 454 */
									long BgL_auxz00_6361;

									BgL_charszd2readzd2_2653 = ((long) 0);
								BgL_zc3anonymousza32965ze3z83_2654:
									{	/* Ieee/input.scm 455 */
										obj_t BgL_nz00_2655;

										BgL_nz00_2655 =
											BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00
											(BgL_bufz00_2648, BINT(BgL_bufsiza7eza7_2647),
											BgL_ipz00_69);
										if (((long) CINT(BgL_nz00_2655) == ((long) 0)))
											{	/* Ieee/input.scm 456 */
												FLUSH_OUTPUT_PORT(BgL_opz00_70);
												BgL_auxz00_6361 = BgL_charszd2readzd2_2653;
											}
										else
											{	/* Ieee/input.scm 460 */
												obj_t BgL_sz00_2657;

												if (
													((long) CINT(BgL_nz00_2655) <
														(long) (BgL_bufsiza7eza7_2647)))
													{	/* Ieee/input.scm 460 */
														BgL_sz00_2657 =
															c_substring(BgL_bufz00_2648, ((long) 0),
															(long) CINT(BgL_nz00_2655));
													}
												else
													{	/* Ieee/input.scm 460 */
														BgL_sz00_2657 = BgL_bufz00_2648;
													}
												bgl_display_obj(BgL_sz00_2657, BgL_opz00_70);
												{
													long BgL_charszd2readzd2_6375;

													BgL_charszd2readzd2_6375 =
														(BgL_charszd2readzd2_2653 +
														(long) CINT(BgL_nz00_2655));
													BgL_charszd2readzd2_2653 = BgL_charszd2readzd2_6375;
													goto BgL_zc3anonymousza32965ze3z83_2654;
												}
											}
									}
									return (int) (BgL_auxz00_6361);
							}}
						else
							{
								long BgL_charszd2readzd2_2662;

								int BgL_charszd2tozd2readz00_2663;

								long BgL_sza7za7_2664;

								{	/* Ieee/input.scm 463 */
									long BgL_auxz00_6379;

									BgL_charszd2readzd2_2662 = ((long) 0);
									BgL_charszd2tozd2readz00_2663 = BgL_bufsiza7eza7_2647;
									BgL_sza7za7_2664 = BgL_sza7za7_71;
								BgL_zc3anonymousza32969ze3z83_2665:
									if (((long) (BgL_charszd2tozd2readz00_2663) == ((long) 0)))
										{	/* Ieee/input.scm 466 */
											BgL_auxz00_6379 = BgL_charszd2readzd2_2662;
										}
									else
										{	/* Ieee/input.scm 468 */
											obj_t BgL_nz00_2667;

											BgL_nz00_2667 =
												BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00
												(BgL_bufz00_2648, BINT(BgL_charszd2tozd2readz00_2663),
												BgL_ipz00_69);
											if (((long) CINT(BgL_nz00_2667) == ((long) 0)))
												{	/* Ieee/input.scm 469 */
													FLUSH_OUTPUT_PORT(BgL_opz00_70);
													BgL_auxz00_6379 = BgL_charszd2readzd2_2662;
												}
											else
												{	/* Ieee/input.scm 473 */
													obj_t BgL_sz00_2669;

													if (
														((long) CINT(BgL_nz00_2667) <
															(long) (BgL_bufsiza7eza7_2647)))
														{	/* Ieee/input.scm 473 */
															BgL_sz00_2669 =
																c_substring(BgL_bufz00_2648, ((long) 0),
																(long) CINT(BgL_nz00_2667));
														}
													else
														{	/* Ieee/input.scm 473 */
															BgL_sz00_2669 = BgL_bufz00_2648;
														}
													bgl_display_obj(BgL_sz00_2669, BgL_opz00_70);
													{	/* Ieee/input.scm 475 */
														long BgL_sza7za7_2670;

														BgL_sza7za7_2670 =
															(BgL_sza7za7_2664 - (long) CINT(BgL_nz00_2667));
														{	/* Ieee/input.scm 475 */
															long BgL_ctrz00_2671;

															if (
																(BgL_sza7za7_2670 <
																	(long) (BgL_bufsiza7eza7_2647)))
																{	/* Ieee/input.scm 476 */
																	BgL_ctrz00_2671 = BgL_sza7za7_2670;
																}
															else
																{	/* Ieee/input.scm 476 */
																	BgL_ctrz00_2671 =
																		(long) (BgL_bufsiza7eza7_2647);
																}
															{	/* Ieee/input.scm 476 */

																{
																	long BgL_sza7za7_6407;

																	int BgL_charszd2tozd2readz00_6405;

																	long BgL_charszd2readzd2_6402;

																	BgL_charszd2readzd2_6402 =
																		(BgL_charszd2readzd2_2662 +
																		(long) CINT(BgL_nz00_2667));
																	BgL_charszd2tozd2readz00_6405 =
																		(int) (BgL_ctrz00_2671);
																	BgL_sza7za7_6407 = BgL_sza7za7_2670;
																	BgL_sza7za7_2664 = BgL_sza7za7_6407;
																	BgL_charszd2tozd2readz00_2663 =
																		BgL_charszd2tozd2readz00_6405;
																	BgL_charszd2readzd2_2662 =
																		BgL_charszd2readzd2_6402;
																	goto BgL_zc3anonymousza32969ze3z83_2665;
																}
															}
														}
													}
												}
										}
									return (int) (BgL_auxz00_6379);
		}}}}}}
	}



/* file->string */
	BGL_EXPORTED_DEF obj_t BGl_filezd2ze3stringz31zz__r4_input_6_10_2z00(obj_t
		BgL_pathz00_73)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 482 */
			{	/* Ieee/input.scm 485 */
				obj_t BgL_iz00_2679;

				{	/* Ieee/string.scm 208 */

					BgL_iz00_2679 =
						BGl_stringzd2indexzd2zz__r4_strings_6_7z00(BgL_pathz00_73,
						BCHAR(((unsigned char) ':')), BINT(((long) 0)));
				}
				if (CBOOL(BgL_iz00_2679))
					{	/* Ieee/input.scm 489 */
						bool_t BgL_testz00_6414;

						{	/* Ieee/input.scm 489 */

							BgL_testz00_6414 =
								BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00
								(BGl_string3693z00zz__r4_input_6_10_2z00, BgL_pathz00_73,
								BFALSE, BFALSE, BFALSE, BFALSE);
						}
						if (BgL_testz00_6414)
							{	/* Ieee/input.scm 490 */
								obj_t BgL_arg2979z00_2681;

								BgL_arg2979z00_2681 =
									c_substring(BgL_pathz00_73, ((long) 5),
									STRING_LENGTH(BgL_pathz00_73));
								return
									bgl_file_to_string(BSTRING_TO_STRING(BgL_arg2979z00_2681));
							}
						else
							{	/* Ieee/input.scm 492 */
								obj_t BgL_ipz00_2684;

								{	/* Ieee/port.scm 375 */

									BgL_ipz00_2684 =
										BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
										(BgL_pathz00_73, BTRUE);
								}
								{	/* Ieee/input.scm 493 */
									obj_t BgL_val1931z00_2685;

									BgL_val1931z00_2685 =
										BGl_zc3exitza32985ze3z83zz__r4_input_6_10_2z00
										(BgL_ipz00_2684);
									bgl_close_input_port(BgL_ipz00_2684);
									if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
											(BgL_val1931z00_2685)))
										{	/* Ieee/input.scm 495 */
											return
												BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
												(BgL_val1931z00_2685), CDR(BgL_val1931z00_2685));
										}
									else
										{	/* Ieee/input.scm 495 */
											return BgL_val1931z00_2685;
										}
								}
							}
					}
				else
					{	/* Ieee/input.scm 487 */
						return bgl_file_to_string(BSTRING_TO_STRING(BgL_pathz00_73));
					}
			}
		}
	}



/* <exit:2985> */
	obj_t BGl_zc3exitza32985ze3z83zz__r4_input_6_10_2z00(obj_t BgL_ipz00_4939)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 495 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1932z00_2690;

			if (SET_EXIT(BgL_an_exit1932z00_2690))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1932z00_2690 = (void *) jmpbuf;
					{	/* Ieee/input.scm 495 */

						PUSH_EXIT(BgL_an_exit1932z00_2690, ((long) 0));
						{	/* Ieee/input.scm 494 */
							obj_t BgL_val1933z00_2691;

							BgL_val1933z00_2691 =
								BGl_readzd2stringzd2zz__r4_input_6_10_2z00(BgL_ipz00_4939);
							POP_EXIT();
							return BgL_val1933z00_2691;
						}
					}
				}
		}
	}



/* _file->string */
	obj_t BGl__filezd2ze3stringz31zz__r4_input_6_10_2z00(obj_t BgL_envz00_4912,
		obj_t BgL_pathz00_4913)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 482 */
			{	/* Ieee/input.scm 485 */
				obj_t BgL_auxz00_6436;

				if (STRINGP(BgL_pathz00_4913))
					{	/* Ieee/input.scm 485 */
						BgL_auxz00_6436 = BgL_pathz00_4913;
					}
				else
					{
						obj_t BgL_auxz00_6439;

						BgL_auxz00_6439 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3657z00zz__r4_input_6_10_2z00, BINT(((long) 18718)),
							BGl_string3694z00zz__r4_input_6_10_2z00,
							BGl_string3669z00zz__r4_input_6_10_2z00, BgL_pathz00_4913);
						FAILURE(BgL_auxz00_6439, BFALSE, BFALSE);
					}
				return BGl_filezd2ze3stringz31zz__r4_input_6_10_2z00(BgL_auxz00_6436);
			}
		}
	}



/* send-chars/size */
	BGL_EXPORTED_DEF long BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00(obj_t
		BgL_ipz00_74, obj_t BgL_opz00_75, long BgL_siza7eza7_76,
		long BgL_offsetz00_77)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 505 */
			{	/* Ieee/input.scm 507 */
				long BgL_sza7za7_4441;

				long BgL_offz00_4442;

				{	/* Ieee/input.scm 507 */
					long BgL_res3508z00_4448;

					{	/* Ieee/input.scm 507 */
						long BgL_auxz00_6444;

						{	/* Ieee/input.scm 507 */
							long BgL_auxz00_6445;

							BgL_auxz00_6445 = ELONG_TO_LONG(BgL_siza7eza7_76);
							BgL_auxz00_6444 = ELONG_TO_LONG(BgL_auxz00_6445);
						}
						BgL_res3508z00_4448 = ELONG_TO_LONG(BgL_auxz00_6444);
					}
					BgL_sza7za7_4441 = BgL_res3508z00_4448;
				}
				{	/* Ieee/input.scm 508 */
					long BgL_res3509z00_4450;

					{	/* Ieee/input.scm 508 */
						long BgL_auxz00_6449;

						{	/* Ieee/input.scm 508 */
							long BgL_auxz00_6450;

							BgL_auxz00_6450 = ELONG_TO_LONG(BgL_offsetz00_77);
							BgL_auxz00_6449 = ELONG_TO_LONG(BgL_auxz00_6450);
						}
						BgL_res3509z00_4450 = ELONG_TO_LONG(BgL_auxz00_6449);
					}
					BgL_offz00_4442 = BgL_res3509z00_4450;
				}
				{	/* Ieee/input.scm 507 */
					obj_t BgL__ortest_1934z00_4443;

					BgL__ortest_1934z00_4443 =
						bgl_sendchars(BgL_ipz00_74, BgL_opz00_75, BgL_sza7za7_4441,
						BgL_offz00_4442);
					if (CBOOL(BgL__ortest_1934z00_4443))
						{	/* Ieee/input.scm 507 */
							return (long) CINT(BgL__ortest_1934z00_4443);
						}
					else
						{	/* Ieee/input.scm 507 */
							bool_t BgL_testz00_6458;

							if (INPUT_GZIP_PORTP(BgL_ipz00_74))
								{	/* Ieee/input.scm 507 */
									if ((BgL_sza7za7_4441 == ((long) -1)))
										{	/* Ieee/input.scm 507 */
											BgL_testz00_6458 = (BgL_offz00_4442 == ((long) -1));
										}
									else
										{	/* Ieee/input.scm 507 */
											BgL_testz00_6458 = ((bool_t) 0);
										}
								}
							else
								{	/* Ieee/input.scm 507 */
									BgL_testz00_6458 = ((bool_t) 0);
								}
							if (BgL_testz00_6458)
								{	/* Ieee/input.scm 507 */
									return
										(long)
										CINT(BGl_gunza7ipzd2sendcharsz75zz__gunza7ipza7
										(BgL_ipz00_74, BgL_opz00_75));
								}
							else
								{	/* Ieee/input.scm 507 */
									return
										(long) (BGl_z52sendcharsz52zz__r4_input_6_10_2z00
										(BgL_ipz00_74, BgL_opz00_75, BgL_sza7za7_4441,
											BgL_offz00_4442));
		}}}}}
	}



/* _send-chars/size */
	obj_t BGl__sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00(obj_t
		BgL_envz00_4914, obj_t BgL_ipz00_4915, obj_t BgL_opz00_4916,
		obj_t BgL_siza7eza7_4917, obj_t BgL_offsetz00_4918)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 505 */
			{	/* Ieee/input.scm 507 */
				long BgL_auxz00_6468;

				{	/* Ieee/input.scm 507 */
					long BgL_auxz00_6492;

					long BgL_auxz00_6483;

					obj_t BgL_auxz00_6476;

					obj_t BgL_auxz00_6469;

					{	/* Ieee/input.scm 507 */
						obj_t BgL_auxz00_6493;

						if (ELONGP(BgL_offsetz00_4918))
							{	/* Ieee/input.scm 507 */
								BgL_auxz00_6493 = BgL_offsetz00_4918;
							}
						else
							{
								obj_t BgL_auxz00_6496;

								BgL_auxz00_6496 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3657z00zz__r4_input_6_10_2z00,
									BINT(((long) 19479)), BGl_string3695z00zz__r4_input_6_10_2z00,
									BGl_string3697z00zz__r4_input_6_10_2z00, BgL_offsetz00_4918);
								FAILURE(BgL_auxz00_6496, BFALSE, BFALSE);
							}
						BgL_auxz00_6492 = BELONG_TO_LONG(BgL_auxz00_6493);
					}
					{	/* Ieee/input.scm 507 */
						obj_t BgL_auxz00_6484;

						if (ELONGP(BgL_siza7eza7_4917))
							{	/* Ieee/input.scm 507 */
								BgL_auxz00_6484 = BgL_siza7eza7_4917;
							}
						else
							{
								obj_t BgL_auxz00_6487;

								BgL_auxz00_6487 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3657z00zz__r4_input_6_10_2z00,
									BINT(((long) 19479)), BGl_string3695z00zz__r4_input_6_10_2z00,
									BGl_string3697z00zz__r4_input_6_10_2z00, BgL_siza7eza7_4917);
								FAILURE(BgL_auxz00_6487, BFALSE, BFALSE);
							}
						BgL_auxz00_6483 = BELONG_TO_LONG(BgL_auxz00_6484);
					}
					if (OUTPUT_PORTP(BgL_opz00_4916))
						{	/* Ieee/input.scm 507 */
							BgL_auxz00_6476 = BgL_opz00_4916;
						}
					else
						{
							obj_t BgL_auxz00_6479;

							BgL_auxz00_6479 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3657z00zz__r4_input_6_10_2z00, BINT(((long) 19479)),
								BGl_string3695z00zz__r4_input_6_10_2z00,
								BGl_string3696z00zz__r4_input_6_10_2z00, BgL_opz00_4916);
							FAILURE(BgL_auxz00_6479, BFALSE, BFALSE);
						}
					if (INPUT_PORTP(BgL_ipz00_4915))
						{	/* Ieee/input.scm 507 */
							BgL_auxz00_6469 = BgL_ipz00_4915;
						}
					else
						{
							obj_t BgL_auxz00_6472;

							BgL_auxz00_6472 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3657z00zz__r4_input_6_10_2z00, BINT(((long) 19479)),
								BGl_string3695z00zz__r4_input_6_10_2z00,
								BGl_string3660z00zz__r4_input_6_10_2z00, BgL_ipz00_4915);
							FAILURE(BgL_auxz00_6472, BFALSE, BFALSE);
						}
					BgL_auxz00_6468 =
						BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00(BgL_auxz00_6469,
						BgL_auxz00_6476, BgL_auxz00_6483, BgL_auxz00_6492);
				}
				return BINT(BgL_auxz00_6468);
			}
		}
	}



/* _send-chars */
	obj_t BGl__sendzd2charszd2zz__r4_input_6_10_2z00(obj_t BgL_envz00_83,
		obj_t BgL_optz00_82)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 527 */
			{	/* Ieee/input.scm 527 */
				obj_t BgL_g2051z00_2709;

				obj_t BgL_g2052z00_2710;

				BgL_g2051z00_2709 = VECTOR_REF(BgL_optz00_82, (int) (((long) 0)));
				BgL_g2052z00_2710 = VECTOR_REF(BgL_optz00_82, (int) (((long) 1)));
				{	/* Ieee/input.scm 527 */
					int BgL_aux2054z00_2712;

					BgL_aux2054z00_2712 = VECTOR_LENGTH(BgL_optz00_82);
					switch ((long) (BgL_aux2054z00_2712))
						{
						case ((long) 2):

							{	/* Ieee/input.scm 527 */

								{	/* Ieee/input.scm 527 */
									obj_t BgL_arg2993z00_2716;

									obj_t BgL_arg2994z00_2717;

									BgL_arg2993z00_2716 =
										VECTOR_REF(BgL_optz00_82, (int) (((long) 0)));
									BgL_arg2994z00_2717 =
										VECTOR_REF(BgL_optz00_82, (int) (((long) 1)));
									{	/* Ieee/input.scm 527 */
										long BgL_res3510z00_4472;

										{	/* Ieee/input.scm 527 */
											obj_t BgL_ipz00_4456;

											obj_t BgL_opz00_4457;

											obj_t BgL_siza7eza7_4458;

											obj_t BgL_offsetz00_4459;

											if (INPUT_PORTP(BgL_arg2993z00_2716))
												{	/* Ieee/input.scm 527 */
													BgL_ipz00_4456 = BgL_arg2993z00_2716;
												}
											else
												{
													obj_t BgL_auxz00_6514;

													BgL_auxz00_6514 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3657z00zz__r4_input_6_10_2z00,
														BINT(((long) 20146)),
														BGl_string3698z00zz__r4_input_6_10_2z00,
														BGl_string3660z00zz__r4_input_6_10_2z00,
														BgL_arg2993z00_2716);
													FAILURE(BgL_auxz00_6514, BFALSE, BFALSE);
												}
											if (OUTPUT_PORTP(BgL_arg2994z00_2717))
												{	/* Ieee/input.scm 527 */
													BgL_opz00_4457 = BgL_arg2994z00_2717;
												}
											else
												{
													obj_t BgL_auxz00_6520;

													BgL_auxz00_6520 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3657z00zz__r4_input_6_10_2z00,
														BINT(((long) 20146)),
														BGl_string3698z00zz__r4_input_6_10_2z00,
														BGl_string3696z00zz__r4_input_6_10_2z00,
														BgL_arg2994z00_2717);
													FAILURE(BgL_auxz00_6520, BFALSE, BFALSE);
												}
											BgL_siza7eza7_4458 = BINT(((long) -1));
											BgL_offsetz00_4459 = BINT(((long) -1));
											{	/* Ieee/input.scm 527 */
												long BgL_sza7za7_4460;

												long BgL_offz00_4461;

												if (INTEGERP(BgL_siza7eza7_4458))
													{	/* Ieee/input.scm 527 */
														long BgL_auxz00_6528;

														BgL_auxz00_6528 = (long) CINT(BgL_siza7eza7_4458);
														BgL_sza7za7_4460 = LONG_TO_ELONG(BgL_auxz00_6528);
													}
												else
													{	/* Ieee/input.scm 527 */
														if (ELONGP(BgL_siza7eza7_4458))
															{	/* Ieee/input.scm 527 */
																BgL_sza7za7_4460 =
																	BELONG_TO_LONG(BgL_siza7eza7_4458);
															}
														else
															{	/* Ieee/input.scm 527 */
																obj_t BgL_auxz00_6534;

																{	/* Ieee/input.scm 527 */
																	obj_t BgL_aux3605z00_5010;

																	BgL_aux3605z00_5010 =
																		BGl_errorz00zz__errorz00
																		(BGl_symbol3699z00zz__r4_input_6_10_2z00,
																		BGl_string3701z00zz__r4_input_6_10_2z00,
																		BgL_siza7eza7_4458);
																	if (ELONGP(BgL_aux3605z00_5010))
																		{	/* Ieee/input.scm 527 */
																			BgL_auxz00_6534 = BgL_aux3605z00_5010;
																		}
																	else
																		{
																			obj_t BgL_auxz00_6538;

																			BgL_auxz00_6538 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string3657z00zz__r4_input_6_10_2z00,
																				BINT(((long) 20146)),
																				BGl_string3698z00zz__r4_input_6_10_2z00,
																				BGl_string3697z00zz__r4_input_6_10_2z00,
																				BgL_aux3605z00_5010);
																			FAILURE(BgL_auxz00_6538, BFALSE, BFALSE);
																}}
																BgL_sza7za7_4460 =
																	BELONG_TO_LONG(BgL_auxz00_6534);
													}}
												if (INTEGERP(BgL_offsetz00_4459))
													{	/* Ieee/input.scm 527 */
														long BgL_auxz00_6545;

														BgL_auxz00_6545 = (long) CINT(BgL_offsetz00_4459);
														BgL_offz00_4461 = LONG_TO_ELONG(BgL_auxz00_6545);
													}
												else
													{	/* Ieee/input.scm 527 */
														if (ELONGP(BgL_offsetz00_4459))
															{	/* Ieee/input.scm 527 */
																BgL_offz00_4461 =
																	BELONG_TO_LONG(BgL_offsetz00_4459);
															}
														else
															{	/* Ieee/input.scm 527 */
																obj_t BgL_auxz00_6551;

																{	/* Ieee/input.scm 527 */
																	obj_t BgL_aux3607z00_5012;

																	BgL_aux3607z00_5012 =
																		BGl_errorz00zz__errorz00
																		(BGl_symbol3699z00zz__r4_input_6_10_2z00,
																		BGl_string3702z00zz__r4_input_6_10_2z00,
																		BgL_offsetz00_4459);
																	if (ELONGP(BgL_aux3607z00_5012))
																		{	/* Ieee/input.scm 527 */
																			BgL_auxz00_6551 = BgL_aux3607z00_5012;
																		}
																	else
																		{
																			obj_t BgL_auxz00_6555;

																			BgL_auxz00_6555 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string3657z00zz__r4_input_6_10_2z00,
																				BINT(((long) 20146)),
																				BGl_string3698z00zz__r4_input_6_10_2z00,
																				BGl_string3697z00zz__r4_input_6_10_2z00,
																				BgL_aux3607z00_5012);
																			FAILURE(BgL_auxz00_6555, BFALSE, BFALSE);
																}}
																BgL_offz00_4461 =
																	BELONG_TO_LONG(BgL_auxz00_6551);
													}}
												BgL_res3510z00_4472 =
													BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00
													(BgL_ipz00_4456, BgL_opz00_4457, BgL_sza7za7_4460,
													BgL_offz00_4461);
										}}
										return BINT(BgL_res3510z00_4472);
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Ieee/input.scm 527 */
								obj_t BgL_siza7eza7_2718;

								BgL_siza7eza7_2718 =
									VECTOR_REF(BgL_optz00_82, (int) (((long) 2)));
								{	/* Ieee/input.scm 527 */

									{	/* Ieee/input.scm 527 */
										obj_t BgL_arg2995z00_2720;

										obj_t BgL_arg2996z00_2721;

										BgL_arg2995z00_2720 =
											VECTOR_REF(BgL_optz00_82, (int) (((long) 0)));
										BgL_arg2996z00_2721 =
											VECTOR_REF(BgL_optz00_82, (int) (((long) 1)));
										{	/* Ieee/input.scm 527 */
											long BgL_res3511z00_4489;

											{	/* Ieee/input.scm 527 */
												obj_t BgL_ipz00_4473;

												obj_t BgL_opz00_4474;

												obj_t BgL_offsetz00_4476;

												if (INPUT_PORTP(BgL_arg2995z00_2720))
													{	/* Ieee/input.scm 527 */
														BgL_ipz00_4473 = BgL_arg2995z00_2720;
													}
												else
													{
														obj_t BgL_auxz00_6570;

														BgL_auxz00_6570 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3657z00zz__r4_input_6_10_2z00,
															BINT(((long) 20146)),
															BGl_string3698z00zz__r4_input_6_10_2z00,
															BGl_string3660z00zz__r4_input_6_10_2z00,
															BgL_arg2995z00_2720);
														FAILURE(BgL_auxz00_6570, BFALSE, BFALSE);
													}
												if (OUTPUT_PORTP(BgL_arg2996z00_2721))
													{	/* Ieee/input.scm 527 */
														BgL_opz00_4474 = BgL_arg2996z00_2721;
													}
												else
													{
														obj_t BgL_auxz00_6576;

														BgL_auxz00_6576 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3657z00zz__r4_input_6_10_2z00,
															BINT(((long) 20146)),
															BGl_string3698z00zz__r4_input_6_10_2z00,
															BGl_string3696z00zz__r4_input_6_10_2z00,
															BgL_arg2996z00_2721);
														FAILURE(BgL_auxz00_6576, BFALSE, BFALSE);
													}
												BgL_offsetz00_4476 = BINT(((long) -1));
												{	/* Ieee/input.scm 527 */
													long BgL_sza7za7_4477;

													long BgL_offz00_4478;

													if (INTEGERP(BgL_siza7eza7_2718))
														{	/* Ieee/input.scm 527 */
															long BgL_auxz00_6583;

															BgL_auxz00_6583 = (long) CINT(BgL_siza7eza7_2718);
															BgL_sza7za7_4477 = LONG_TO_ELONG(BgL_auxz00_6583);
														}
													else
														{	/* Ieee/input.scm 527 */
															if (ELONGP(BgL_siza7eza7_2718))
																{	/* Ieee/input.scm 527 */
																	BgL_sza7za7_4477 =
																		BELONG_TO_LONG(BgL_siza7eza7_2718);
																}
															else
																{	/* Ieee/input.scm 527 */
																	obj_t BgL_auxz00_6589;

																	{	/* Ieee/input.scm 527 */
																		obj_t BgL_aux3613z00_5018;

																		BgL_aux3613z00_5018 =
																			BGl_errorz00zz__errorz00
																			(BGl_symbol3699z00zz__r4_input_6_10_2z00,
																			BGl_string3701z00zz__r4_input_6_10_2z00,
																			BgL_siza7eza7_2718);
																		if (ELONGP(BgL_aux3613z00_5018))
																			{	/* Ieee/input.scm 527 */
																				BgL_auxz00_6589 = BgL_aux3613z00_5018;
																			}
																		else
																			{
																				obj_t BgL_auxz00_6593;

																				BgL_auxz00_6593 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string3657z00zz__r4_input_6_10_2z00,
																					BINT(((long) 20146)),
																					BGl_string3698z00zz__r4_input_6_10_2z00,
																					BGl_string3697z00zz__r4_input_6_10_2z00,
																					BgL_aux3613z00_5018);
																				FAILURE(BgL_auxz00_6593, BFALSE,
																					BFALSE);
																	}}
																	BgL_sza7za7_4477 =
																		BELONG_TO_LONG(BgL_auxz00_6589);
														}}
													if (INTEGERP(BgL_offsetz00_4476))
														{	/* Ieee/input.scm 527 */
															long BgL_auxz00_6600;

															BgL_auxz00_6600 = (long) CINT(BgL_offsetz00_4476);
															BgL_offz00_4478 = LONG_TO_ELONG(BgL_auxz00_6600);
														}
													else
														{	/* Ieee/input.scm 527 */
															if (ELONGP(BgL_offsetz00_4476))
																{	/* Ieee/input.scm 527 */
																	BgL_offz00_4478 =
																		BELONG_TO_LONG(BgL_offsetz00_4476);
																}
															else
																{	/* Ieee/input.scm 527 */
																	obj_t BgL_auxz00_6606;

																	{	/* Ieee/input.scm 527 */
																		obj_t BgL_aux3615z00_5020;

																		BgL_aux3615z00_5020 =
																			BGl_errorz00zz__errorz00
																			(BGl_symbol3699z00zz__r4_input_6_10_2z00,
																			BGl_string3702z00zz__r4_input_6_10_2z00,
																			BgL_offsetz00_4476);
																		if (ELONGP(BgL_aux3615z00_5020))
																			{	/* Ieee/input.scm 527 */
																				BgL_auxz00_6606 = BgL_aux3615z00_5020;
																			}
																		else
																			{
																				obj_t BgL_auxz00_6610;

																				BgL_auxz00_6610 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string3657z00zz__r4_input_6_10_2z00,
																					BINT(((long) 20146)),
																					BGl_string3698z00zz__r4_input_6_10_2z00,
																					BGl_string3697z00zz__r4_input_6_10_2z00,
																					BgL_aux3615z00_5020);
																				FAILURE(BgL_auxz00_6610, BFALSE,
																					BFALSE);
																	}}
																	BgL_offz00_4478 =
																		BELONG_TO_LONG(BgL_auxz00_6606);
														}}
													BgL_res3511z00_4489 =
														BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00
														(BgL_ipz00_4473, BgL_opz00_4474, BgL_sza7za7_4477,
														BgL_offz00_4478);
											}}
											return BINT(BgL_res3511z00_4489);
										}
									}
								}
							}
							break;
						case ((long) 4):

							{	/* Ieee/input.scm 527 */
								obj_t BgL_siza7eza7_2722;

								BgL_siza7eza7_2722 =
									VECTOR_REF(BgL_optz00_82, (int) (((long) 2)));
								{	/* Ieee/input.scm 527 */
									obj_t BgL_offsetz00_2723;

									BgL_offsetz00_2723 =
										VECTOR_REF(BgL_optz00_82, (int) (((long) 3)));
									{	/* Ieee/input.scm 527 */

										{	/* Ieee/input.scm 527 */
											obj_t BgL_arg2997z00_2724;

											obj_t BgL_arg2998z00_2725;

											BgL_arg2997z00_2724 =
												VECTOR_REF(BgL_optz00_82, (int) (((long) 0)));
											BgL_arg2998z00_2725 =
												VECTOR_REF(BgL_optz00_82, (int) (((long) 1)));
											{	/* Ieee/input.scm 527 */
												long BgL_res3512z00_4506;

												{	/* Ieee/input.scm 527 */
													obj_t BgL_ipz00_4490;

													obj_t BgL_opz00_4491;

													if (INPUT_PORTP(BgL_arg2997z00_2724))
														{	/* Ieee/input.scm 527 */
															BgL_ipz00_4490 = BgL_arg2997z00_2724;
														}
													else
														{
															obj_t BgL_auxz00_6627;

															BgL_auxz00_6627 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3657z00zz__r4_input_6_10_2z00,
																BINT(((long) 20146)),
																BGl_string3698z00zz__r4_input_6_10_2z00,
																BGl_string3660z00zz__r4_input_6_10_2z00,
																BgL_arg2997z00_2724);
															FAILURE(BgL_auxz00_6627, BFALSE, BFALSE);
														}
													if (OUTPUT_PORTP(BgL_arg2998z00_2725))
														{	/* Ieee/input.scm 527 */
															BgL_opz00_4491 = BgL_arg2998z00_2725;
														}
													else
														{
															obj_t BgL_auxz00_6633;

															BgL_auxz00_6633 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3657z00zz__r4_input_6_10_2z00,
																BINT(((long) 20146)),
																BGl_string3698z00zz__r4_input_6_10_2z00,
																BGl_string3696z00zz__r4_input_6_10_2z00,
																BgL_arg2998z00_2725);
															FAILURE(BgL_auxz00_6633, BFALSE, BFALSE);
														}
													{	/* Ieee/input.scm 527 */
														long BgL_sza7za7_4494;

														long BgL_offz00_4495;

														if (INTEGERP(BgL_siza7eza7_2722))
															{	/* Ieee/input.scm 527 */
																long BgL_auxz00_6639;

																BgL_auxz00_6639 =
																	(long) CINT(BgL_siza7eza7_2722);
																BgL_sza7za7_4494 =
																	LONG_TO_ELONG(BgL_auxz00_6639);
															}
														else
															{	/* Ieee/input.scm 527 */
																if (ELONGP(BgL_siza7eza7_2722))
																	{	/* Ieee/input.scm 527 */
																		BgL_sza7za7_4494 =
																			BELONG_TO_LONG(BgL_siza7eza7_2722);
																	}
																else
																	{	/* Ieee/input.scm 527 */
																		obj_t BgL_auxz00_6645;

																		{	/* Ieee/input.scm 527 */
																			obj_t BgL_aux3621z00_5026;

																			BgL_aux3621z00_5026 =
																				BGl_errorz00zz__errorz00
																				(BGl_symbol3699z00zz__r4_input_6_10_2z00,
																				BGl_string3701z00zz__r4_input_6_10_2z00,
																				BgL_siza7eza7_2722);
																			if (ELONGP(BgL_aux3621z00_5026))
																				{	/* Ieee/input.scm 527 */
																					BgL_auxz00_6645 = BgL_aux3621z00_5026;
																				}
																			else
																				{
																					obj_t BgL_auxz00_6649;

																					BgL_auxz00_6649 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string3657z00zz__r4_input_6_10_2z00,
																						BINT(((long) 20146)),
																						BGl_string3698z00zz__r4_input_6_10_2z00,
																						BGl_string3697z00zz__r4_input_6_10_2z00,
																						BgL_aux3621z00_5026);
																					FAILURE(BgL_auxz00_6649, BFALSE,
																						BFALSE);
																		}}
																		BgL_sza7za7_4494 =
																			BELONG_TO_LONG(BgL_auxz00_6645);
															}}
														if (INTEGERP(BgL_offsetz00_2723))
															{	/* Ieee/input.scm 527 */
																long BgL_auxz00_6656;

																BgL_auxz00_6656 =
																	(long) CINT(BgL_offsetz00_2723);
																BgL_offz00_4495 =
																	LONG_TO_ELONG(BgL_auxz00_6656);
															}
														else
															{	/* Ieee/input.scm 527 */
																if (ELONGP(BgL_offsetz00_2723))
																	{	/* Ieee/input.scm 527 */
																		BgL_offz00_4495 =
																			BELONG_TO_LONG(BgL_offsetz00_2723);
																	}
																else
																	{	/* Ieee/input.scm 527 */
																		obj_t BgL_auxz00_6662;

																		{	/* Ieee/input.scm 527 */
																			obj_t BgL_aux3623z00_5028;

																			BgL_aux3623z00_5028 =
																				BGl_errorz00zz__errorz00
																				(BGl_symbol3699z00zz__r4_input_6_10_2z00,
																				BGl_string3702z00zz__r4_input_6_10_2z00,
																				BgL_offsetz00_2723);
																			if (ELONGP(BgL_aux3623z00_5028))
																				{	/* Ieee/input.scm 527 */
																					BgL_auxz00_6662 = BgL_aux3623z00_5028;
																				}
																			else
																				{
																					obj_t BgL_auxz00_6666;

																					BgL_auxz00_6666 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string3657z00zz__r4_input_6_10_2z00,
																						BINT(((long) 20146)),
																						BGl_string3698z00zz__r4_input_6_10_2z00,
																						BGl_string3697z00zz__r4_input_6_10_2z00,
																						BgL_aux3623z00_5028);
																					FAILURE(BgL_auxz00_6666, BFALSE,
																						BFALSE);
																		}}
																		BgL_offz00_4495 =
																			BELONG_TO_LONG(BgL_auxz00_6662);
															}}
														BgL_res3512z00_4506 =
															BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00
															(BgL_ipz00_4490, BgL_opz00_4491, BgL_sza7za7_4494,
															BgL_offz00_4495);
												}}
												return BINT(BgL_res3512z00_4506);
											}
										}
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* send-chars */
	BGL_EXPORTED_DEF long BGl_sendzd2charszd2zz__r4_input_6_10_2z00(obj_t
		BgL_ipz00_78, obj_t BgL_opz00_79, obj_t BgL_siza7eza7_80,
		obj_t BgL_offsetz00_81)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 527 */
			{	/* Ieee/input.scm 530 */
				long BgL_sza7za7_4507;

				long BgL_offz00_4508;

				if (INTEGERP(BgL_siza7eza7_80))
					{	/* Ieee/input.scm 530 */
						long BgL_auxz00_6677;

						BgL_auxz00_6677 = (long) CINT(BgL_siza7eza7_80);
						BgL_sza7za7_4507 = LONG_TO_ELONG(BgL_auxz00_6677);
					}
				else
					{	/* Ieee/input.scm 530 */
						if (ELONGP(BgL_siza7eza7_80))
							{	/* Ieee/input.scm 530 */
								BgL_sza7za7_4507 = BELONG_TO_LONG(BgL_siza7eza7_80);
							}
						else
							{	/* Ieee/input.scm 530 */
								obj_t BgL_auxz00_6683;

								BgL_auxz00_6683 =
									BGl_errorz00zz__errorz00
									(BGl_symbol3699z00zz__r4_input_6_10_2z00,
									BGl_string3701z00zz__r4_input_6_10_2z00, BgL_siza7eza7_80);
								BgL_sza7za7_4507 = BELONG_TO_LONG(BgL_auxz00_6683);
							}
					}
				if (INTEGERP(BgL_offsetz00_81))
					{	/* Ieee/input.scm 530 */
						long BgL_auxz00_6688;

						BgL_auxz00_6688 = (long) CINT(BgL_offsetz00_81);
						BgL_offz00_4508 = LONG_TO_ELONG(BgL_auxz00_6688);
					}
				else
					{	/* Ieee/input.scm 530 */
						if (ELONGP(BgL_offsetz00_81))
							{	/* Ieee/input.scm 530 */
								BgL_offz00_4508 = BELONG_TO_LONG(BgL_offsetz00_81);
							}
						else
							{	/* Ieee/input.scm 530 */
								obj_t BgL_auxz00_6694;

								BgL_auxz00_6694 =
									BGl_errorz00zz__errorz00
									(BGl_symbol3699z00zz__r4_input_6_10_2z00,
									BGl_string3702z00zz__r4_input_6_10_2z00, BgL_offsetz00_81);
								BgL_offz00_4508 = BELONG_TO_LONG(BgL_auxz00_6694);
							}
					}
				{	/* Ieee/input.scm 530 */
					long BgL_res3515z00_4538;

					{	/* Ieee/input.scm 530 */
						long BgL_sza7za7_4523;

						long BgL_offz00_4524;

						{	/* Ieee/input.scm 530 */
							long BgL_res3513z00_4530;

							{	/* Ieee/input.scm 530 */
								long BgL_auxz00_6697;

								{	/* Ieee/input.scm 530 */
									long BgL_auxz00_6698;

									BgL_auxz00_6698 = ELONG_TO_LONG(BgL_sza7za7_4507);
									BgL_auxz00_6697 = ELONG_TO_LONG(BgL_auxz00_6698);
								}
								BgL_res3513z00_4530 = ELONG_TO_LONG(BgL_auxz00_6697);
							}
							BgL_sza7za7_4523 = BgL_res3513z00_4530;
						}
						{	/* Ieee/input.scm 530 */
							long BgL_res3514z00_4532;

							{	/* Ieee/input.scm 530 */
								long BgL_auxz00_6702;

								{	/* Ieee/input.scm 530 */
									long BgL_auxz00_6703;

									BgL_auxz00_6703 = ELONG_TO_LONG(BgL_offz00_4508);
									BgL_auxz00_6702 = ELONG_TO_LONG(BgL_auxz00_6703);
								}
								BgL_res3514z00_4532 = ELONG_TO_LONG(BgL_auxz00_6702);
							}
							BgL_offz00_4524 = BgL_res3514z00_4532;
						}
						{	/* Ieee/input.scm 530 */
							obj_t BgL__ortest_1934z00_4525;

							BgL__ortest_1934z00_4525 =
								bgl_sendchars(BgL_ipz00_78, BgL_opz00_79, BgL_sza7za7_4523,
								BgL_offz00_4524);
							if (CBOOL(BgL__ortest_1934z00_4525))
								{	/* Ieee/input.scm 530 */
									BgL_res3515z00_4538 = (long) CINT(BgL__ortest_1934z00_4525);
								}
							else
								{	/* Ieee/input.scm 530 */
									bool_t BgL_testz00_6711;

									if (INPUT_GZIP_PORTP(BgL_ipz00_78))
										{	/* Ieee/input.scm 530 */
											if ((BgL_sza7za7_4523 == ((long) -1)))
												{	/* Ieee/input.scm 530 */
													BgL_testz00_6711 = (BgL_offz00_4524 == ((long) -1));
												}
											else
												{	/* Ieee/input.scm 530 */
													BgL_testz00_6711 = ((bool_t) 0);
												}
										}
									else
										{	/* Ieee/input.scm 530 */
											BgL_testz00_6711 = ((bool_t) 0);
										}
									if (BgL_testz00_6711)
										{	/* Ieee/input.scm 530 */
											BgL_res3515z00_4538 =
												(long)
												CINT(BGl_gunza7ipzd2sendcharsz75zz__gunza7ipza7
												(BgL_ipz00_78, BgL_opz00_79));
										}
									else
										{	/* Ieee/input.scm 530 */
											BgL_res3515z00_4538 =
												(long) (BGl_z52sendcharsz52zz__r4_input_6_10_2z00
												(BgL_ipz00_78, BgL_opz00_79, BgL_sza7za7_4523,
													BgL_offz00_4524));
					}}}}
					return BgL_res3515z00_4538;
				}
			}
		}
	}



/* _send-file */
	obj_t BGl__sendzd2filezd2zz__r4_input_6_10_2z00(obj_t BgL_envz00_89,
		obj_t BgL_optz00_88)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 542 */
			{	/* Ieee/input.scm 542 */
				obj_t BgL_filez00_2732;

				obj_t BgL_opz00_2733;

				BgL_filez00_2732 = VECTOR_REF(BgL_optz00_88, (int) (((long) 0)));
				BgL_opz00_2733 = VECTOR_REF(BgL_optz00_88, (int) (((long) 1)));
				{	/* Ieee/input.scm 542 */
					int BgL_aux2056z00_2735;

					BgL_aux2056z00_2735 = VECTOR_LENGTH(BgL_optz00_88);
					switch ((long) (BgL_aux2056z00_2735))
						{
						case ((long) 2):

							{	/* Ieee/input.scm 542 */

								{	/* Ieee/input.scm 542 */
									obj_t BgL_arg3004z00_2739;

									obj_t BgL_arg3005z00_2740;

									BgL_arg3004z00_2739 =
										VECTOR_REF(BgL_optz00_88, (int) (((long) 0)));
									BgL_arg3005z00_2740 =
										VECTOR_REF(BgL_optz00_88, (int) (((long) 1)));
									{	/* Ieee/input.scm 542 */
										long BgL_auxz00_6730;

										{	/* Ieee/input.scm 542 */
											obj_t BgL_auxz00_6738;

											obj_t BgL_auxz00_6731;

											if (OUTPUT_PORTP(BgL_arg3005z00_2740))
												{	/* Ieee/input.scm 542 */
													BgL_auxz00_6738 = BgL_arg3005z00_2740;
												}
											else
												{
													obj_t BgL_auxz00_6741;

													BgL_auxz00_6741 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3657z00zz__r4_input_6_10_2z00,
														BINT(((long) 20815)),
														BGl_string3703z00zz__r4_input_6_10_2z00,
														BGl_string3696z00zz__r4_input_6_10_2z00,
														BgL_arg3005z00_2740);
													FAILURE(BgL_auxz00_6741, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_arg3004z00_2739))
												{	/* Ieee/input.scm 542 */
													BgL_auxz00_6731 = BgL_arg3004z00_2739;
												}
											else
												{
													obj_t BgL_auxz00_6734;

													BgL_auxz00_6734 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3657z00zz__r4_input_6_10_2z00,
														BINT(((long) 20815)),
														BGl_string3703z00zz__r4_input_6_10_2z00,
														BGl_string3669z00zz__r4_input_6_10_2z00,
														BgL_arg3004z00_2739);
													FAILURE(BgL_auxz00_6734, BFALSE, BFALSE);
												}
											BgL_auxz00_6730 =
												BGl_sendzd2filezd2zz__r4_input_6_10_2z00
												(BgL_auxz00_6731, BgL_auxz00_6738, ((long) -1),
												((long) -1));
										}
										return BINT(BgL_auxz00_6730);
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Ieee/input.scm 542 */
								obj_t BgL_siza7eza7_2741;

								BgL_siza7eza7_2741 =
									VECTOR_REF(BgL_optz00_88, (int) (((long) 2)));
								{	/* Ieee/input.scm 542 */

									{	/* Ieee/input.scm 542 */
										obj_t BgL_arg3006z00_2743;

										obj_t BgL_arg3007z00_2744;

										BgL_arg3006z00_2743 =
											VECTOR_REF(BgL_optz00_88, (int) (((long) 0)));
										BgL_arg3007z00_2744 =
											VECTOR_REF(BgL_optz00_88, (int) (((long) 1)));
										{	/* Ieee/input.scm 542 */
											long BgL_auxz00_6753;

											{	/* Ieee/input.scm 542 */
												long BgL_auxz00_6768;

												obj_t BgL_auxz00_6761;

												obj_t BgL_auxz00_6754;

												{	/* Ieee/input.scm 542 */
													obj_t BgL_auxz00_6769;

													if (ELONGP(BgL_siza7eza7_2741))
														{	/* Ieee/input.scm 542 */
															BgL_auxz00_6769 = BgL_siza7eza7_2741;
														}
													else
														{
															obj_t BgL_auxz00_6772;

															BgL_auxz00_6772 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3657z00zz__r4_input_6_10_2z00,
																BINT(((long) 20815)),
																BGl_string3703z00zz__r4_input_6_10_2z00,
																BGl_string3697z00zz__r4_input_6_10_2z00,
																BgL_siza7eza7_2741);
															FAILURE(BgL_auxz00_6772, BFALSE, BFALSE);
														}
													BgL_auxz00_6768 = BELONG_TO_LONG(BgL_auxz00_6769);
												}
												if (OUTPUT_PORTP(BgL_arg3007z00_2744))
													{	/* Ieee/input.scm 542 */
														BgL_auxz00_6761 = BgL_arg3007z00_2744;
													}
												else
													{
														obj_t BgL_auxz00_6764;

														BgL_auxz00_6764 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3657z00zz__r4_input_6_10_2z00,
															BINT(((long) 20815)),
															BGl_string3703z00zz__r4_input_6_10_2z00,
															BGl_string3696z00zz__r4_input_6_10_2z00,
															BgL_arg3007z00_2744);
														FAILURE(BgL_auxz00_6764, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_arg3006z00_2743))
													{	/* Ieee/input.scm 542 */
														BgL_auxz00_6754 = BgL_arg3006z00_2743;
													}
												else
													{
														obj_t BgL_auxz00_6757;

														BgL_auxz00_6757 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3657z00zz__r4_input_6_10_2z00,
															BINT(((long) 20815)),
															BGl_string3703z00zz__r4_input_6_10_2z00,
															BGl_string3669z00zz__r4_input_6_10_2z00,
															BgL_arg3006z00_2743);
														FAILURE(BgL_auxz00_6757, BFALSE, BFALSE);
													}
												BgL_auxz00_6753 =
													BGl_sendzd2filezd2zz__r4_input_6_10_2z00
													(BgL_auxz00_6754, BgL_auxz00_6761, BgL_auxz00_6768,
													((long) -1));
											}
											return BINT(BgL_auxz00_6753);
										}
									}
								}
							}
							break;
						case ((long) 4):

							{	/* Ieee/input.scm 542 */
								obj_t BgL_siza7eza7_2745;

								BgL_siza7eza7_2745 =
									VECTOR_REF(BgL_optz00_88, (int) (((long) 2)));
								{	/* Ieee/input.scm 542 */
									obj_t BgL_offsetz00_2746;

									BgL_offsetz00_2746 =
										VECTOR_REF(BgL_optz00_88, (int) (((long) 3)));
									{	/* Ieee/input.scm 542 */

										{	/* Ieee/input.scm 542 */
											obj_t BgL_arg3008z00_2747;

											obj_t BgL_arg3009z00_2748;

											BgL_arg3008z00_2747 =
												VECTOR_REF(BgL_optz00_88, (int) (((long) 0)));
											BgL_arg3009z00_2748 =
												VECTOR_REF(BgL_optz00_88, (int) (((long) 1)));
											{	/* Ieee/input.scm 542 */
												long BgL_auxz00_6787;

												{	/* Ieee/input.scm 542 */
													long BgL_auxz00_6811;

													long BgL_auxz00_6802;

													obj_t BgL_auxz00_6795;

													obj_t BgL_auxz00_6788;

													{	/* Ieee/input.scm 542 */
														obj_t BgL_auxz00_6812;

														if (ELONGP(BgL_offsetz00_2746))
															{	/* Ieee/input.scm 542 */
																BgL_auxz00_6812 = BgL_offsetz00_2746;
															}
														else
															{
																obj_t BgL_auxz00_6815;

																BgL_auxz00_6815 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3657z00zz__r4_input_6_10_2z00,
																	BINT(((long) 20815)),
																	BGl_string3703z00zz__r4_input_6_10_2z00,
																	BGl_string3697z00zz__r4_input_6_10_2z00,
																	BgL_offsetz00_2746);
																FAILURE(BgL_auxz00_6815, BFALSE, BFALSE);
															}
														BgL_auxz00_6811 = BELONG_TO_LONG(BgL_auxz00_6812);
													}
													{	/* Ieee/input.scm 542 */
														obj_t BgL_auxz00_6803;

														if (ELONGP(BgL_siza7eza7_2745))
															{	/* Ieee/input.scm 542 */
																BgL_auxz00_6803 = BgL_siza7eza7_2745;
															}
														else
															{
																obj_t BgL_auxz00_6806;

																BgL_auxz00_6806 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3657z00zz__r4_input_6_10_2z00,
																	BINT(((long) 20815)),
																	BGl_string3703z00zz__r4_input_6_10_2z00,
																	BGl_string3697z00zz__r4_input_6_10_2z00,
																	BgL_siza7eza7_2745);
																FAILURE(BgL_auxz00_6806, BFALSE, BFALSE);
															}
														BgL_auxz00_6802 = BELONG_TO_LONG(BgL_auxz00_6803);
													}
													if (OUTPUT_PORTP(BgL_arg3009z00_2748))
														{	/* Ieee/input.scm 542 */
															BgL_auxz00_6795 = BgL_arg3009z00_2748;
														}
													else
														{
															obj_t BgL_auxz00_6798;

															BgL_auxz00_6798 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3657z00zz__r4_input_6_10_2z00,
																BINT(((long) 20815)),
																BGl_string3703z00zz__r4_input_6_10_2z00,
																BGl_string3696z00zz__r4_input_6_10_2z00,
																BgL_arg3009z00_2748);
															FAILURE(BgL_auxz00_6798, BFALSE, BFALSE);
														}
													if (STRINGP(BgL_arg3008z00_2747))
														{	/* Ieee/input.scm 542 */
															BgL_auxz00_6788 = BgL_arg3008z00_2747;
														}
													else
														{
															obj_t BgL_auxz00_6791;

															BgL_auxz00_6791 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3657z00zz__r4_input_6_10_2z00,
																BINT(((long) 20815)),
																BGl_string3703z00zz__r4_input_6_10_2z00,
																BGl_string3669z00zz__r4_input_6_10_2z00,
																BgL_arg3008z00_2747);
															FAILURE(BgL_auxz00_6791, BFALSE, BFALSE);
														}
													BgL_auxz00_6787 =
														BGl_sendzd2filezd2zz__r4_input_6_10_2z00
														(BgL_auxz00_6788, BgL_auxz00_6795, BgL_auxz00_6802,
														BgL_auxz00_6811);
												}
												return BINT(BgL_auxz00_6787);
											}
										}
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* send-file */
	BGL_EXPORTED_DEF long BGl_sendzd2filezd2zz__r4_input_6_10_2z00(obj_t
		BgL_filez00_84, obj_t BgL_opz00_85, long BgL_siza7eza7_86,
		long BgL_offsetz00_87)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 542 */
			{	/* Ieee/input.scm 546 */
				long BgL_sza7za7_2749;

				long BgL_offz00_2750;

				{	/* Ieee/input.scm 546 */
					long BgL_res3516z00_4540;

					{	/* Ieee/input.scm 546 */
						long BgL_auxz00_6824;

						{	/* Ieee/input.scm 546 */
							long BgL_auxz00_6825;

							BgL_auxz00_6825 = ELONG_TO_LONG(BgL_siza7eza7_86);
							BgL_auxz00_6824 = ELONG_TO_LONG(BgL_auxz00_6825);
						}
						BgL_res3516z00_4540 = ELONG_TO_LONG(BgL_auxz00_6824);
					}
					BgL_sza7za7_2749 = BgL_res3516z00_4540;
				}
				{	/* Ieee/input.scm 547 */
					long BgL_res3517z00_4542;

					{	/* Ieee/input.scm 547 */
						long BgL_auxz00_6829;

						{	/* Ieee/input.scm 547 */
							long BgL_auxz00_6830;

							BgL_auxz00_6830 = ELONG_TO_LONG(BgL_offsetz00_87);
							BgL_auxz00_6829 = ELONG_TO_LONG(BgL_auxz00_6830);
						}
						BgL_res3517z00_4542 = ELONG_TO_LONG(BgL_auxz00_6829);
					}
					BgL_offz00_2750 = BgL_res3517z00_4542;
				}
				{	/* Ieee/input.scm 550 */
					obj_t BgL__ortest_1937z00_2751;

					BgL__ortest_1937z00_2751 =
						bgl_sendfile(BgL_filez00_84, BgL_opz00_85,
						ELONG_TO_LONG(BgL_siza7eza7_86), ELONG_TO_LONG(BgL_offsetz00_87));
					if (CBOOL(BgL__ortest_1937z00_2751))
						{	/* Ieee/input.scm 550 */
							return (long) CINT(BgL__ortest_1937z00_2751);
						}
					else
						{	/* Ieee/input.scm 551 */
							obj_t BgL_ipz00_2752;

							{	/* Ieee/port.scm 375 */

								BgL_ipz00_2752 =
									BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
									(BgL_filez00_84, BTRUE);
							}
							{	/* Ieee/input.scm 552 */
								obj_t BgL_val1938z00_2753;

								BgL_val1938z00_2753 =
									BGl_zc3exitza33013ze3z83zz__r4_input_6_10_2z00
									(BgL_offsetz00_87, BgL_siza7eza7_86, BgL_opz00_85,
									BgL_ipz00_2752);
								bgl_close_input_port(BgL_ipz00_2752);
								if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
										(BgL_val1938z00_2753)))
									{	/* Ieee/input.scm 554 */
										obj_t BgL_arg3011z00_2755;

										obj_t BgL_arg3012z00_2756;

										BgL_arg3011z00_2755 = CAR(BgL_val1938z00_2753);
										BgL_arg3012z00_2756 = CDR(BgL_val1938z00_2753);
										return
											(long)
											CINT(BGl_unwindzd2untilz12zc0zz__bexitz00
											(BgL_arg3011z00_2755, BgL_arg3012z00_2756));
									}
								else
									{	/* Ieee/input.scm 554 */
										return (long) CINT(BgL_val1938z00_2753);
		}}}}}}
	}



/* <exit:3013> */
	obj_t BGl_zc3exitza33013ze3z83zz__r4_input_6_10_2z00(long BgL_offsetz00_4938,
		long BgL_siza7eza7_4937, obj_t BgL_opz00_4936, obj_t BgL_ipz00_4935)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 554 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1939z00_2758;

			if (SET_EXIT(BgL_an_exit1939z00_2758))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1939z00_2758 = (void *) jmpbuf;
					{	/* Ieee/input.scm 554 */

						PUSH_EXIT(BgL_an_exit1939z00_2758, ((long) 0));
						{	/* Ieee/input.scm 553 */
							long BgL_val1940z00_2759;

							{	/* Ieee/input.scm 553 */
								long BgL_res3520z00_4562;

								{	/* Ieee/input.scm 553 */
									obj_t BgL_ipz00_4543;

									BgL_ipz00_4543 = BgL_ipz00_4935;
									{	/* Ieee/input.scm 553 */
										long BgL_sza7za7_4547;

										long BgL_offz00_4548;

										{	/* Ieee/input.scm 553 */
											long BgL_res3518z00_4554;

											{	/* Ieee/input.scm 553 */
												long BgL_auxz00_6854;

												{	/* Ieee/input.scm 553 */
													long BgL_auxz00_6855;

													BgL_auxz00_6855 = ELONG_TO_LONG(BgL_siza7eza7_4937);
													BgL_auxz00_6854 = ELONG_TO_LONG(BgL_auxz00_6855);
												}
												BgL_res3518z00_4554 = ELONG_TO_LONG(BgL_auxz00_6854);
											}
											BgL_sza7za7_4547 = BgL_res3518z00_4554;
										}
										{	/* Ieee/input.scm 553 */
											long BgL_res3519z00_4556;

											{	/* Ieee/input.scm 553 */
												long BgL_auxz00_6859;

												{	/* Ieee/input.scm 553 */
													long BgL_auxz00_6860;

													BgL_auxz00_6860 = ELONG_TO_LONG(BgL_offsetz00_4938);
													BgL_auxz00_6859 = ELONG_TO_LONG(BgL_auxz00_6860);
												}
												BgL_res3519z00_4556 = ELONG_TO_LONG(BgL_auxz00_6859);
											}
											BgL_offz00_4548 = BgL_res3519z00_4556;
										}
										{	/* Ieee/input.scm 553 */
											obj_t BgL__ortest_1934z00_4549;

											BgL__ortest_1934z00_4549 =
												bgl_sendchars(BgL_ipz00_4543, BgL_opz00_4936,
												BgL_sza7za7_4547, BgL_offz00_4548);
											if (CBOOL(BgL__ortest_1934z00_4549))
												{	/* Ieee/input.scm 553 */
													BgL_res3520z00_4562 =
														(long) CINT(BgL__ortest_1934z00_4549);
												}
											else
												{	/* Ieee/input.scm 553 */
													bool_t BgL_testz00_6868;

													if (INPUT_GZIP_PORTP(BgL_ipz00_4543))
														{	/* Ieee/input.scm 553 */
															if ((BgL_sza7za7_4547 == ((long) -1)))
																{	/* Ieee/input.scm 553 */
																	BgL_testz00_6868 =
																		(BgL_offz00_4548 == ((long) -1));
																}
															else
																{	/* Ieee/input.scm 553 */
																	BgL_testz00_6868 = ((bool_t) 0);
																}
														}
													else
														{	/* Ieee/input.scm 553 */
															BgL_testz00_6868 = ((bool_t) 0);
														}
													if (BgL_testz00_6868)
														{	/* Ieee/input.scm 553 */
															BgL_res3520z00_4562 =
																(long)
																CINT(BGl_gunza7ipzd2sendcharsz75zz__gunza7ipza7
																(BgL_ipz00_4543, BgL_opz00_4936));
														}
													else
														{	/* Ieee/input.scm 553 */
															BgL_res3520z00_4562 =
																(long)
																(BGl_z52sendcharsz52zz__r4_input_6_10_2z00
																(BgL_ipz00_4543, BgL_opz00_4936,
																	BgL_sza7za7_4547, BgL_offz00_4548));
								}}}}}
								BgL_val1940z00_2759 = BgL_res3520z00_4562;
							}
							POP_EXIT();
							return BINT(BgL_val1940z00_2759);
						}
					}
				}
		}
	}



/* file-lines */
	BGL_EXPORTED_DEF obj_t BGl_filezd2lineszd2zz__r4_input_6_10_2z00(obj_t
		BgL_filez00_90)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 566 */
			if (fexists(BSTRING_TO_STRING(BgL_filez00_90)))
				{	/* Ieee/input.scm 588 */
					obj_t BgL_zc3anonymousza33016ze3z83_4919;

					BgL_zc3anonymousza33016ze3z83_4919 =
						make_fx_procedure
						(BGl_zc3anonymousza33016ze3z83zz__r4_input_6_10_2z00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza33016ze3z83_4919, (int) (((long) 0)),
						BgL_filez00_90);
					return
						BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00
						(BgL_filez00_90, BgL_zc3anonymousza33016ze3z83_4919);
				}
			else
				{	/* Ieee/input.scm 584 */
					return BFALSE;
				}
		}
	}



/* _file-lines */
	obj_t BGl__filezd2lineszd2zz__r4_input_6_10_2z00(obj_t BgL_envz00_4920,
		obj_t BgL_filez00_4921)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 566 */
			{	/* Ieee/input.scm 568 */
				obj_t BgL_auxz00_6889;

				if (STRINGP(BgL_filez00_4921))
					{	/* Ieee/input.scm 568 */
						BgL_auxz00_6889 = BgL_filez00_4921;
					}
				else
					{
						obj_t BgL_auxz00_6892;

						BgL_auxz00_6892 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3657z00zz__r4_input_6_10_2z00, BINT(((long) 21776)),
							BGl_string3704z00zz__r4_input_6_10_2z00,
							BGl_string3669z00zz__r4_input_6_10_2z00, BgL_filez00_4921);
						FAILURE(BgL_auxz00_6892, BFALSE, BFALSE);
					}
				return BGl_filezd2lineszd2zz__r4_input_6_10_2z00(BgL_auxz00_6889);
			}
		}
	}



/* <anonymous:3016> */
	obj_t BGl_zc3anonymousza33016ze3z83zz__r4_input_6_10_2z00(obj_t
		BgL_envz00_4922)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 587 */
			{	/* Ieee/input.scm 588 */
				obj_t BgL_filez00_4923;

				BgL_filez00_4923 = PROCEDURE_REF(BgL_envz00_4922, (int) (((long) 0)));
				{

					{
						obj_t BgL_inputzd2portzd2_2770;

						long BgL_startz00_2771;

						{	/* Ieee/input.scm 588 */
							obj_t BgL_arg3017z00_4567;

							{	/* Ieee/input.scm 588 */
								obj_t BgL_res3521z00_4570;

								{	/* Ieee/input.scm 588 */
									obj_t BgL_auxz00_6899;

									BgL_auxz00_6899 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3521z00_4570 =
										BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_6899);
								}
								BgL_arg3017z00_4567 = BgL_res3521z00_4570;
							}
							BgL_inputzd2portzd2_2770 = BgL_arg3017z00_4567;
							BgL_startz00_2771 = ((long) 0);
							{	/* Ieee/input.scm 568 */
								obj_t BgL_startz00_4934;

								{	/* Ieee/input.scm 568 */
									obj_t BgL_cellvalz00_6902;

									BgL_cellvalz00_6902 = BINT(BgL_startz00_2771);
									BgL_startz00_4934 = MAKE_CELL(BgL_cellvalz00_6902);
								}
								return
									BGl_ignorez00zz__r4_input_6_10_2z00(BgL_startz00_4934,
									BgL_filez00_4923, BgL_inputzd2portzd2_2770);
							}
						}
					}
				}
			}
		}
	}



/* ignore */
	obj_t BGl_ignorez00zz__r4_input_6_10_2z00(obj_t BgL_startz00_4932,
		obj_t BgL_filez00_4931, obj_t BgL_inputzd2portzd2_4930)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 568 */
		BGl_ignorez00zz__r4_input_6_10_2z00:
			{
				obj_t BgL_inputzd2portzd2_2824;

				long BgL_lastzd2matchzd2_2825;

				obj_t BgL_inputzd2portzd2_2811;

				long BgL_lastzd2matchzd2_2812;

				obj_t BgL_inputzd2portzd2_2802;

				long BgL_lastzd2matchzd2_2803;

				RGC_START_MATCH(BgL_inputzd2portzd2_4930);
				{	/* Ieee/input.scm 568 */
					long BgL_matchz00_2914;

					BgL_inputzd2portzd2_2824 = BgL_inputzd2portzd2_4930;
					BgL_lastzd2matchzd2_2825 = ((long) 2);
				BgL_zc3anonymousza33031ze3z83_2826:
					{	/* Ieee/input.scm 568 */
						int BgL_currentzd2charzd2_2827;

						BgL_currentzd2charzd2_2827 =
							RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2824);
						if (((long) (BgL_currentzd2charzd2_2827) == ((long) 0)))
							{	/* Ieee/input.scm 568 */
								if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2824))
									{	/* Ieee/input.scm 568 */
										if (rgc_fill_buffer(BgL_inputzd2portzd2_2824))
											{

												goto BgL_zc3anonymousza33031ze3z83_2826;
											}
										else
											{	/* Ieee/input.scm 568 */
												BgL_matchz00_2914 = BgL_lastzd2matchzd2_2825;
											}
									}
								else
									{	/* Ieee/input.scm 568 */
										BgL_inputzd2portzd2_2811 = BgL_inputzd2portzd2_2824;
										BgL_lastzd2matchzd2_2812 = BgL_lastzd2matchzd2_2825;
									BgL_zc3anonymousza33025ze3z83_2813:
										{	/* Ieee/input.scm 568 */
											long BgL_newzd2matchzd2_2814;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_2811);
											BgL_newzd2matchzd2_2814 = ((long) 1);
											{	/* Ieee/input.scm 568 */
												int BgL_currentzd2charzd2_2815;

												BgL_currentzd2charzd2_2815 =
													RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2811);
												if (((long) (BgL_currentzd2charzd2_2815) == ((long) 0)))
													{	/* Ieee/input.scm 568 */
														if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2811))
															{	/* Ieee/input.scm 568 */
																if (rgc_fill_buffer(BgL_inputzd2portzd2_2811))
																	{

																		goto BgL_zc3anonymousza33025ze3z83_2813;
																	}
																else
																	{	/* Ieee/input.scm 568 */
																		BgL_matchz00_2914 = BgL_newzd2matchzd2_2814;
																	}
															}
														else
															{	/* Ieee/input.scm 568 */
																BgL_inputzd2portzd2_2802 =
																	BgL_inputzd2portzd2_2811;
																BgL_lastzd2matchzd2_2803 =
																	BgL_newzd2matchzd2_2814;
															BgL_zc3anonymousza33020ze3z83_2804:
																{	/* Ieee/input.scm 568 */
																	long BgL_newzd2matchzd2_2805;

																	RGC_STOP_MATCH(BgL_inputzd2portzd2_2802);
																	BgL_newzd2matchzd2_2805 = ((long) 1);
																	{	/* Ieee/input.scm 568 */
																		int BgL_currentzd2charzd2_2806;

																		BgL_currentzd2charzd2_2806 =
																			RGC_BUFFER_GET_CHAR
																			(BgL_inputzd2portzd2_2802);
																		if (((long) (BgL_currentzd2charzd2_2806) ==
																				((long) 0)))
																			{	/* Ieee/input.scm 568 */
																				if (RGC_BUFFER_EMPTY
																					(BgL_inputzd2portzd2_2802))
																					{	/* Ieee/input.scm 568 */
																						if (rgc_fill_buffer
																							(BgL_inputzd2portzd2_2802))
																							{

																								goto
																									BgL_zc3anonymousza33020ze3z83_2804;
																							}
																						else
																							{	/* Ieee/input.scm 568 */
																								BgL_matchz00_2914 =
																									BgL_newzd2matchzd2_2805;
																							}
																					}
																				else
																					{
																						long BgL_lastzd2matchzd2_6932;

																						BgL_lastzd2matchzd2_6932 =
																							BgL_newzd2matchzd2_2805;
																						BgL_lastzd2matchzd2_2803 =
																							BgL_lastzd2matchzd2_6932;
																						goto
																							BgL_zc3anonymousza33020ze3z83_2804;
																					}
																			}
																		else
																			{	/* Ieee/input.scm 568 */
																				if (
																					((long) (BgL_currentzd2charzd2_2806)
																						== ((long) 10)))
																					{	/* Ieee/input.scm 568 */
																						BgL_matchz00_2914 =
																							BgL_newzd2matchzd2_2805;
																					}
																				else
																					{
																						long BgL_lastzd2matchzd2_6936;

																						BgL_lastzd2matchzd2_6936 =
																							BgL_newzd2matchzd2_2805;
																						BgL_lastzd2matchzd2_2803 =
																							BgL_lastzd2matchzd2_6936;
																						goto
																							BgL_zc3anonymousza33020ze3z83_2804;
																					}
																			}
																	}
																}
															}
													}
												else
													{	/* Ieee/input.scm 568 */
														if (
															((long) (BgL_currentzd2charzd2_2815) ==
																((long) 10)))
															{	/* Ieee/input.scm 568 */
																BgL_matchz00_2914 = BgL_newzd2matchzd2_2814;
															}
														else
															{
																long BgL_lastzd2matchzd2_6941;

																obj_t BgL_inputzd2portzd2_6940;

																BgL_inputzd2portzd2_6940 =
																	BgL_inputzd2portzd2_2811;
																BgL_lastzd2matchzd2_6941 =
																	BgL_newzd2matchzd2_2814;
																BgL_lastzd2matchzd2_2803 =
																	BgL_lastzd2matchzd2_6941;
																BgL_inputzd2portzd2_2802 =
																	BgL_inputzd2portzd2_6940;
																goto BgL_zc3anonymousza33020ze3z83_2804;
															}
													}
											}
										}
									}
							}
						else
							{	/* Ieee/input.scm 568 */
								if (((long) (BgL_currentzd2charzd2_2827) == ((long) 10)))
									{	/* Ieee/input.scm 568 */
										long BgL_newzd2matchzd2_4598;

										RGC_STOP_MATCH(BgL_inputzd2portzd2_2824);
										BgL_newzd2matchzd2_4598 = ((long) 0);
										BgL_matchz00_2914 = BgL_newzd2matchzd2_4598;
									}
								else
									{
										long BgL_lastzd2matchzd2_6947;

										obj_t BgL_inputzd2portzd2_6946;

										BgL_inputzd2portzd2_6946 = BgL_inputzd2portzd2_2824;
										BgL_lastzd2matchzd2_6947 = BgL_lastzd2matchzd2_2825;
										BgL_lastzd2matchzd2_2812 = BgL_lastzd2matchzd2_6947;
										BgL_inputzd2portzd2_2811 = BgL_inputzd2portzd2_6946;
										goto BgL_zc3anonymousza33025ze3z83_2813;
									}
							}
					}
					RGC_SET_FILEPOS(BgL_inputzd2portzd2_4930);
					switch (BgL_matchz00_2914)
						{
						case ((long) 2):

							{	/* Ieee/input.scm 577 */
								obj_t BgL_cz00_2918;

								{	/* Ieee/input.scm 568 */
									bool_t BgL_testz00_6949;

									{	/* Ieee/input.scm 568 */
										long BgL_arg3098z00_2903;

										BgL_arg3098z00_2903 =
											RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_4930);
										BgL_testz00_6949 = (BgL_arg3098z00_2903 == ((long) 0));
									}
									if (BgL_testz00_6949)
										{	/* Ieee/input.scm 568 */
											BgL_cz00_2918 = BCNST(256);
										}
									else
										{	/* Ieee/input.scm 568 */
											BgL_cz00_2918 =
												BCHAR(RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_4930));
										}
								}
								if (EOF_OBJECTP(BgL_cz00_2918))
									{	/* Ieee/input.scm 579 */
										long BgL_stopz00_2920;

										BgL_stopz00_2920 =
											INPUT_PORT_FILEPOS(BgL_inputzd2portzd2_4930);
										{	/* Ieee/input.scm 580 */
											bool_t BgL_testz00_6957;

											{	/* Ieee/input.scm 580 */
												long BgL_n2z00_4610;

												BgL_n2z00_4610 =
													(long) CINT(CELL_REF(BgL_startz00_4932));
												BgL_testz00_6957 = (BgL_stopz00_2920 > BgL_n2z00_4610);
											}
											if (BgL_testz00_6957)
												{	/* Ieee/input.scm 581 */
													obj_t BgL_arg3109z00_2922;

													BgL_arg3109z00_2922 =
														MAKE_PAIR(CELL_REF(BgL_startz00_4932),
														BINT(BgL_stopz00_2920));
													{	/* Ieee/input.scm 581 */
														obj_t BgL_list3110z00_2923;

														BgL_list3110z00_2923 =
															MAKE_PAIR(BgL_arg3109z00_2922, BNIL);
														return BgL_list3110z00_2923;
													}
												}
											else
												{	/* Ieee/input.scm 580 */
													return BNIL;
												}
										}
									}
								else
									{	/* Ieee/input.scm 578 */
										return
											BGl_errorz00zz__errorz00
											(BGl_symbol3705z00zz__r4_input_6_10_2z00,
											BGl_string3707z00zz__r4_input_6_10_2z00,
											BgL_filez00_4931);
									}
							}
							break;
						case ((long) 1):

							{

								goto BGl_ignorez00zz__r4_input_6_10_2z00;
							}
							break;
						case ((long) 0):

							{	/* Ieee/input.scm 570 */
								long BgL_stopz00_2925;

								BgL_stopz00_2925 = INPUT_PORT_FILEPOS(BgL_inputzd2portzd2_4930);
								{	/* Ieee/input.scm 570 */
									obj_t BgL_descz00_2926;

									BgL_descz00_2926 =
										MAKE_PAIR(CELL_REF(BgL_startz00_4932),
										BINT(BgL_stopz00_2925));
									{	/* Ieee/input.scm 571 */

										{	/* Ieee/input.scm 572 */
											obj_t BgL_auxz00_4933;

											BgL_auxz00_4933 = BINT((((long) 1) + BgL_stopz00_2925));
											CELL_SET(BgL_startz00_4932, BgL_auxz00_4933);
										}
										return
											MAKE_PAIR(BgL_descz00_2926,
											BGl_ignorez00zz__r4_input_6_10_2z00(BgL_startz00_4932,
												BgL_filez00_4931, BgL_inputzd2portzd2_4930));
									}
								}
							}
							break;
						default:
							return
								BGl_errorz00zz__errorz00
								(BGl_string3650z00zz__r4_input_6_10_2z00,
								BGl_string3651z00zz__r4_input_6_10_2z00,
								BINT(BgL_matchz00_2914));
						}
				}
			}
		}
	}



/* file-position->line */
	BGL_EXPORTED_DEF obj_t
		BGl_filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00(int BgL_posz00_91,
		obj_t BgL_fdescz00_92)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 593 */
			if (PAIRP(BgL_fdescz00_92))
				{
					obj_t BgL_flinesz00_4619;

					long BgL_linez00_4620;

					BgL_flinesz00_4619 = BgL_fdescz00_92;
					BgL_linez00_4620 = ((long) 1);
				BgL_loopz00_4618:
					if (NULLP(BgL_flinesz00_4619))
						{	/* Ieee/input.scm 596 */
							return BFALSE;
						}
					else
						{	/* Ieee/input.scm 596 */
							bool_t BgL_testz00_6978;

							{	/* Ieee/input.scm 596 */
								long BgL_auxz00_6979;

								{	/* Ieee/input.scm 596 */
									obj_t BgL_pairz00_4632;

									BgL_pairz00_4632 = BgL_flinesz00_4619;
									{	/* Ieee/input.scm 596 */
										obj_t BgL_pairz00_4635;

										BgL_pairz00_4635 = CAR(BgL_pairz00_4632);
										BgL_auxz00_6979 = (long) CINT(CDR(BgL_pairz00_4635));
								}}
								BgL_testz00_6978 = ((long) (BgL_posz00_91) >= BgL_auxz00_6979);
							}
							if (BgL_testz00_6978)
								{
									long BgL_linez00_6987;

									obj_t BgL_flinesz00_6985;

									BgL_flinesz00_6985 = CDR(BgL_flinesz00_4619);
									BgL_linez00_6987 = (BgL_linez00_4620 + ((long) 1));
									BgL_linez00_4620 = BgL_linez00_6987;
									BgL_flinesz00_4619 = BgL_flinesz00_6985;
									goto BgL_loopz00_4618;
								}
							else
								{	/* Ieee/input.scm 596 */
									return BINT(BgL_linez00_4620);
								}
						}
				}
			else
				{	/* Ieee/input.scm 595 */
					if (STRINGP(BgL_fdescz00_92))
						{	/* Ieee/input.scm 605 */
							if (fexists(BSTRING_TO_STRING(BgL_fdescz00_92)))
								{	/* Ieee/input.scm 621 */
									obj_t BgL_zc3anonymousza33124ze3z83_4924;

									BgL_zc3anonymousza33124ze3z83_4924 =
										make_fx_procedure
										(BGl_zc3anonymousza33124ze3z83zz__r4_input_6_10_2z00,
										(int) (((long) 0)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3anonymousza33124ze3z83_4924,
										(int) (((long) 0)), BINT(BgL_posz00_91));
									return
										BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00
										(BgL_fdescz00_92, BgL_zc3anonymousza33124ze3z83_4924);
								}
							else
								{	/* Ieee/input.scm 617 */
									return BFALSE;
								}
						}
					else
						{	/* Ieee/input.scm 605 */
							return BNIL;
						}
				}
		}
	}



/* _file-position->line */
	obj_t BGl__filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00(obj_t
		BgL_envz00_4925, obj_t BgL_posz00_4926, obj_t BgL_fdescz00_4927)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 593 */
			{	/* Ieee/input.scm 595 */
				int BgL_auxz00_7002;

				{	/* Ieee/input.scm 595 */
					obj_t BgL_auxz00_7003;

					if (INTEGERP(BgL_posz00_4926))
						{	/* Ieee/input.scm 595 */
							BgL_auxz00_7003 = BgL_posz00_4926;
						}
					else
						{
							obj_t BgL_auxz00_7006;

							BgL_auxz00_7006 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3657z00zz__r4_input_6_10_2z00, BINT(((long) 22621)),
								BGl_string3708z00zz__r4_input_6_10_2z00,
								BGl_string3709z00zz__r4_input_6_10_2z00, BgL_posz00_4926);
							FAILURE(BgL_auxz00_7006, BFALSE, BFALSE);
						}
					BgL_auxz00_7002 = CINT(BgL_auxz00_7003);
				}
				return
					BGl_filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00
					(BgL_auxz00_7002, BgL_fdescz00_4927);
			}
		}
	}



/* <anonymous:3124> */
	obj_t BGl_zc3anonymousza33124ze3z83zz__r4_input_6_10_2z00(obj_t
		BgL_envz00_4928)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 620 */
			{	/* Ieee/input.scm 621 */
				obj_t BgL_posz00_4929;

				BgL_posz00_4929 = PROCEDURE_REF(BgL_envz00_4928, (int) (((long) 0)));
				{

					{
						obj_t BgL_inputzd2portzd2_2979;

						obj_t BgL_posz00_2980;

						long BgL_linez00_2981;

						{	/* Ieee/input.scm 621 */
							obj_t BgL_arg3125z00_4675;

							{	/* Ieee/input.scm 621 */
								obj_t BgL_res3525z00_4678;

								{	/* Ieee/input.scm 621 */
									obj_t BgL_auxz00_7014;

									BgL_auxz00_7014 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3525z00_4678 =
										BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_7014);
								}
								BgL_arg3125z00_4675 = BgL_res3525z00_4678;
							}
							BgL_inputzd2portzd2_2979 = BgL_arg3125z00_4675;
							BgL_posz00_2980 = BgL_posz00_4929;
							BgL_linez00_2981 = ((long) 1);
							{
								obj_t BgL_inputzd2portzd2_3012;

								long BgL_lastzd2matchzd2_3013;

								obj_t BgL_inputzd2portzd2_3021;

								long BgL_lastzd2matchzd2_3022;

								obj_t BgL_inputzd2portzd2_3034;

								long BgL_lastzd2matchzd2_3035;

							BgL_zc3anonymousza33213ze3z83_3123:
								RGC_START_MATCH(BgL_inputzd2portzd2_2979);
								{	/* Ieee/input.scm 606 */
									long BgL_matchz00_3124;

									BgL_inputzd2portzd2_3034 = BgL_inputzd2portzd2_2979;
									BgL_lastzd2matchzd2_3035 = ((long) 2);
								BgL_zc3anonymousza33139ze3z83_3036:
									{	/* Ieee/input.scm 606 */
										int BgL_currentzd2charzd2_3037;

										BgL_currentzd2charzd2_3037 =
											RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3034);
										if (((long) (BgL_currentzd2charzd2_3037) == ((long) 0)))
											{	/* Ieee/input.scm 606 */
												if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3034))
													{	/* Ieee/input.scm 606 */
														if (rgc_fill_buffer(BgL_inputzd2portzd2_3034))
															{

																goto BgL_zc3anonymousza33139ze3z83_3036;
															}
														else
															{	/* Ieee/input.scm 606 */
																BgL_matchz00_3124 = BgL_lastzd2matchzd2_3035;
															}
													}
												else
													{	/* Ieee/input.scm 606 */
														BgL_inputzd2portzd2_3021 = BgL_inputzd2portzd2_3034;
														BgL_lastzd2matchzd2_3022 = BgL_lastzd2matchzd2_3035;
													BgL_zc3anonymousza33133ze3z83_3023:
														{	/* Ieee/input.scm 606 */
															long BgL_newzd2matchzd2_3024;

															RGC_STOP_MATCH(BgL_inputzd2portzd2_3021);
															BgL_newzd2matchzd2_3024 = ((long) 1);
															{	/* Ieee/input.scm 606 */
																int BgL_currentzd2charzd2_3025;

																BgL_currentzd2charzd2_3025 =
																	RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_3021);
																if (
																	((long) (BgL_currentzd2charzd2_3025) ==
																		((long) 0)))
																	{	/* Ieee/input.scm 606 */
																		if (RGC_BUFFER_EMPTY
																			(BgL_inputzd2portzd2_3021))
																			{	/* Ieee/input.scm 606 */
																				if (rgc_fill_buffer
																					(BgL_inputzd2portzd2_3021))
																					{

																						goto
																							BgL_zc3anonymousza33133ze3z83_3023;
																					}
																				else
																					{	/* Ieee/input.scm 606 */
																						BgL_matchz00_3124 =
																							BgL_newzd2matchzd2_3024;
																					}
																			}
																		else
																			{	/* Ieee/input.scm 606 */
																				BgL_inputzd2portzd2_3012 =
																					BgL_inputzd2portzd2_3021;
																				BgL_lastzd2matchzd2_3013 =
																					BgL_newzd2matchzd2_3024;
																			BgL_zc3anonymousza33128ze3z83_3014:
																				{	/* Ieee/input.scm 606 */
																					long BgL_newzd2matchzd2_3015;

																					RGC_STOP_MATCH
																						(BgL_inputzd2portzd2_3012);
																					BgL_newzd2matchzd2_3015 = ((long) 1);
																					{	/* Ieee/input.scm 606 */
																						int BgL_currentzd2charzd2_3016;

																						BgL_currentzd2charzd2_3016 =
																							RGC_BUFFER_GET_CHAR
																							(BgL_inputzd2portzd2_3012);
																						if (((long)
																								(BgL_currentzd2charzd2_3016) ==
																								((long) 0)))
																							{	/* Ieee/input.scm 606 */
																								if (RGC_BUFFER_EMPTY
																									(BgL_inputzd2portzd2_3012))
																									{	/* Ieee/input.scm 606 */
																										if (rgc_fill_buffer
																											(BgL_inputzd2portzd2_3012))
																											{

																												goto
																													BgL_zc3anonymousza33128ze3z83_3014;
																											}
																										else
																											{	/* Ieee/input.scm 606 */
																												BgL_matchz00_3124 =
																													BgL_newzd2matchzd2_3015;
																											}
																									}
																								else
																									{
																										long
																											BgL_lastzd2matchzd2_7044;
																										BgL_lastzd2matchzd2_7044 =
																											BgL_newzd2matchzd2_3015;
																										BgL_lastzd2matchzd2_3013 =
																											BgL_lastzd2matchzd2_7044;
																										goto
																											BgL_zc3anonymousza33128ze3z83_3014;
																									}
																							}
																						else
																							{	/* Ieee/input.scm 606 */
																								if (
																									((long)
																										(BgL_currentzd2charzd2_3016)
																										== ((long) 10)))
																									{	/* Ieee/input.scm 606 */
																										BgL_matchz00_3124 =
																											BgL_newzd2matchzd2_3015;
																									}
																								else
																									{
																										long
																											BgL_lastzd2matchzd2_7048;
																										BgL_lastzd2matchzd2_7048 =
																											BgL_newzd2matchzd2_3015;
																										BgL_lastzd2matchzd2_3013 =
																											BgL_lastzd2matchzd2_7048;
																										goto
																											BgL_zc3anonymousza33128ze3z83_3014;
																									}
																							}
																					}
																				}
																			}
																	}
																else
																	{	/* Ieee/input.scm 606 */
																		if (
																			((long) (BgL_currentzd2charzd2_3025) ==
																				((long) 10)))
																			{	/* Ieee/input.scm 606 */
																				BgL_matchz00_3124 =
																					BgL_newzd2matchzd2_3024;
																			}
																		else
																			{
																				long BgL_lastzd2matchzd2_7053;

																				obj_t BgL_inputzd2portzd2_7052;

																				BgL_inputzd2portzd2_7052 =
																					BgL_inputzd2portzd2_3021;
																				BgL_lastzd2matchzd2_7053 =
																					BgL_newzd2matchzd2_3024;
																				BgL_lastzd2matchzd2_3013 =
																					BgL_lastzd2matchzd2_7053;
																				BgL_inputzd2portzd2_3012 =
																					BgL_inputzd2portzd2_7052;
																				goto BgL_zc3anonymousza33128ze3z83_3014;
																			}
																	}
															}
														}
													}
											}
										else
											{	/* Ieee/input.scm 606 */
												if (
													((long) (BgL_currentzd2charzd2_3037) == ((long) 10)))
													{	/* Ieee/input.scm 606 */
														long BgL_newzd2matchzd2_4706;

														RGC_STOP_MATCH(BgL_inputzd2portzd2_3034);
														BgL_newzd2matchzd2_4706 = ((long) 0);
														BgL_matchz00_3124 = BgL_newzd2matchzd2_4706;
													}
												else
													{
														long BgL_lastzd2matchzd2_7059;

														obj_t BgL_inputzd2portzd2_7058;

														BgL_inputzd2portzd2_7058 = BgL_inputzd2portzd2_3034;
														BgL_lastzd2matchzd2_7059 = BgL_lastzd2matchzd2_3035;
														BgL_lastzd2matchzd2_3022 = BgL_lastzd2matchzd2_7059;
														BgL_inputzd2portzd2_3021 = BgL_inputzd2portzd2_7058;
														goto BgL_zc3anonymousza33133ze3z83_3023;
													}
											}
									}
									RGC_SET_FILEPOS(BgL_inputzd2portzd2_2979);
									switch (BgL_matchz00_3124)
										{
										case ((long) 2):

											return BNIL;
											break;
										case ((long) 1):

											goto BgL_zc3anonymousza33213ze3z83_3123;
											break;
										case ((long) 0):

											{	/* Ieee/input.scm 608 */
												bool_t BgL_testz00_7061;

												{	/* Ieee/input.scm 608 */
													long BgL_arg3216z00_3129;

													BgL_arg3216z00_3129 =
														INPUT_PORT_FILEPOS(BgL_inputzd2portzd2_2979);
													BgL_testz00_7061 =
														(BgL_arg3216z00_3129 >=
														(long) CINT(BgL_posz00_2980));
												}
												if (BgL_testz00_7061)
													{	/* Ieee/input.scm 608 */
														return BINT(BgL_linez00_2981);
													}
												else
													{	/* Ieee/input.scm 608 */
														BgL_linez00_2981 = (BgL_linez00_2981 + ((long) 1));
														goto BgL_zc3anonymousza33213ze3z83_3123;
													}
											}
											break;
										default:
											return
												BGl_errorz00zz__errorz00
												(BGl_string3650z00zz__r4_input_6_10_2z00,
												BGl_string3651z00zz__r4_input_6_10_2z00,
												BINT(BgL_matchz00_3124));
										}
								}
							}
						}
					}
				}
			}
		}
	}



/* _password */
	obj_t BGl__passwordz00zz__r4_input_6_10_2z00(obj_t BgL_envz00_95,
		obj_t BgL_optz00_94)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 628 */
			{	/* Ieee/input.scm 628 */

				{	/* Ieee/input.scm 628 */
					int BgL_aux2058z00_5059;

					BgL_aux2058z00_5059 = VECTOR_LENGTH(BgL_optz00_94);
					switch ((long) (BgL_aux2058z00_5059))
						{
						case ((long) 0):

							{	/* Ieee/input.scm 628 */

								return
									bgl_password(BSTRING_TO_STRING
									(BGl_string3663z00zz__r4_input_6_10_2z00));
							}
							break;
						case ((long) 1):

							{	/* Ieee/input.scm 628 */
								obj_t BgL_promptz00_5060;

								BgL_promptz00_5060 =
									VECTOR_REF(BgL_optz00_94, (int) (((long) 0)));
								{	/* Ieee/input.scm 628 */

									{	/* Ieee/input.scm 628 */
										obj_t BgL_promptz00_5061;

										if (STRINGP(BgL_promptz00_5060))
											{	/* Ieee/input.scm 628 */
												BgL_promptz00_5061 = BgL_promptz00_5060;
											}
										else
											{
												obj_t BgL_auxz00_7077;

												BgL_auxz00_7077 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3657z00zz__r4_input_6_10_2z00,
													BINT(((long) 23519)),
													BGl_string3710z00zz__r4_input_6_10_2z00,
													BGl_string3669z00zz__r4_input_6_10_2z00,
													BgL_promptz00_5060);
												FAILURE(BgL_auxz00_7077, BFALSE, BFALSE);
											}
										return bgl_password(BSTRING_TO_STRING(BgL_promptz00_5061));
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* password */
	BGL_EXPORTED_DEF obj_t BGl_passwordz00zz__r4_input_6_10_2z00(obj_t
		BgL_promptz00_93)
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 628 */
			return bgl_password(BSTRING_TO_STRING(BgL_promptz00_93));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__r4_input_6_10_2z00()
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__r4_input_6_10_2z00()
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_input_6_10_2z00()
	{
		AN_OBJECT;
		{	/* Ieee/input.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string3711z00zz__r4_input_6_10_2z00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string3711z00zz__r4_input_6_10_2z00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string3711z00zz__r4_input_6_10_2z00));
			return
				BGl_modulezd2initializa7ationz75zz__gunza7ipza7(((long) 23251724),
				BSTRING_TO_STRING(BGl_string3711z00zz__r4_input_6_10_2z00));
		}
	}

#ifdef __cplusplus
}
#endif
