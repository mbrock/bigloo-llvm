/*===========================================================================*/
/*   (Ieee/output.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Ieee/output.scm -indent -o objs/obj_u/Ieee/output.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */

	extern obj_t bgl_display_substring(obj_t, long, long, obj_t);
	static obj_t BGl__displayzd2elongzd2zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__writezd2bytezd22z00zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2988z00zz__r4_output_6_10_3z00 = BUNSPEC;
	static obj_t BGl__writeza2za2zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_symbol2995z00zz__r4_output_6_10_3z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t);
	extern obj_t BGl_tvectorzd2refzd2zz__tvectorz00(obj_t);
	static obj_t BGl_symbol2999z00zz__r4_output_6_10_3z00 = BUNSPEC;
	extern obj_t bgl_display_ucs2string(obj_t, obj_t);
	extern obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	extern obj_t bgl_write_elong(long, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern bool_t BGl_classzf3zf3zz__objectz00(obj_t);
	extern obj_t bgl_display_fixnum(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl__writezd2bytezd2zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl__illegalzd2charzd2repz00zz__r4_output_6_10_3z00(obj_t,
		obj_t);
	static obj_t BGl__printfz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_writezf2displayzd2vectorz20zz__r4_output_6_10_3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_output_6_10_3z00 =
		BUNSPEC;
	extern obj_t ucs2_string_to_utf8_string(obj_t);
	static obj_t BGl__writezd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_displayzd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	extern obj_t bgl_write_opaque(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_writezd2bytezd22z00zz__r4_output_6_10_3z00(unsigned char, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_displayzd2elongzd2zz__r4_output_6_10_3z00(long,
		obj_t);
	static obj_t BGl__displayzd2fixnumzd2zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t);
	extern bool_t BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00();
	BGL_EXPORTED_DECL obj_t BGl_printz00zz__r4_output_6_10_3z00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__r4_output_6_10_3z00();
	BGL_EXPORTED_DECL obj_t BGl_displayzd2flonumzd2zz__r4_output_6_10_3z00(obj_t,
		obj_t);
	extern obj_t bgl_display_llong(BGL_LONGLONG_T, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_displayzd2substringzd2zz__r4_output_6_10_3z00(obj_t, long, long, obj_t);
	extern obj_t bgl_write_custom(obj_t, obj_t);
	extern obj_t bgl_write_mmap(obj_t, obj_t);
	extern obj_t string_for_read(obj_t);
	extern obj_t bgl_write_ucs2(obj_t, obj_t);
	extern obj_t bgl_write_process(obj_t, obj_t);
	extern obj_t bgl_write_socket(obj_t, obj_t);
	extern obj_t bgl_write_foreign(obj_t, obj_t);
	static obj_t BGl__writez00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
	static obj_t BGl__writezd2charzd22z00zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t);
	extern long BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	extern obj_t bgl_write_procedure(obj_t, obj_t);
	static obj_t BGl__newlinezd21zd2zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_newlinez00zz__r4_output_6_10_3z00(obj_t);
	extern obj_t BGl_stringzd2skipzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
	static obj_t BGl__writezd2charzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tprintz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__r4_output_6_10_3z00();
	extern obj_t bgl_display_bignum(obj_t, obj_t);
	extern obj_t BGl_writezd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	static obj_t BGl__displayza2za2zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl__writezd22zd2zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
	static obj_t BGl_tprintzd2mutexzd2zz__r4_output_6_10_3z00 = BUNSPEC;
	extern obj_t bgl_write_cnst(obj_t, obj_t);
	static obj_t BGl__printz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t bgl_display_elong(long, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_displayzd2fixnumzd2zz__r4_output_6_10_3z00(obj_t,
		obj_t);
	extern obj_t bgl_display_ucs2(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_objectzd2displayzd2zz__objectz00(BgL_objectz00_bglt, obj_t);
	static obj_t BGl_writezd2pairzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__r4_output_6_10_3z00();
	BGL_EXPORTED_DECL obj_t BGl_writezd2bytezd2zz__r4_output_6_10_3z00(unsigned
		char, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_writezd2charzd22z00zz__r4_output_6_10_3z00(unsigned char, obj_t);
	static obj_t BGl__formatz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t);
	static obj_t BGl__displayzd2substringzd2zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_writeza2za2zz__r4_output_6_10_3z00(obj_t);
	static obj_t BGl_writezf2displayzd2tvectorz20zz__r4_output_6_10_3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_displayz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t bgl_display_string(obj_t, obj_t);
	static obj_t BGl__fprintfz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__displayzd2symbolzd2zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_printfz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t bgl_ill_char_rep(unsigned char);
	extern obj_t weakptr_data(obj_t);
	extern obj_t bgl_write_unknown(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_toplevelzd2initzd2zz__r4_output_6_10_3z00();
	extern obj_t bgl_close_output_port(obj_t);
	extern obj_t BGl_objectzd2writezd2zz__objectz00(BgL_objectz00_bglt, obj_t);
	static obj_t BGl__displayzd2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_printzd2flatzd2listz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t bgl_write_input_port(obj_t, obj_t);
	extern obj_t make_string(long, unsigned char);
	static obj_t BGl__displayzd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_tvectorzd2idzd2zz__tvectorz00(obj_t);
	extern obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_writezd2charzd2zz__r4_output_6_10_3z00(unsigned
		char, obj_t);
	static obj_t BGl__fprintz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
	static obj_t BGl_writezf2displayzd2hvectorz20zz__r4_output_6_10_3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_illegalzd2charzd2repz00zz__r4_output_6_10_3z00(unsigned char);
	extern obj_t bgl_write_utf8string(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_writezd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_displayzd2symbolzd2zz__r4_output_6_10_3z00(obj_t,
		obj_t);
	extern obj_t bgl_write_bignum(obj_t, obj_t);
	extern obj_t string_to_bstring(char *);
	BGL_EXPORTED_DECL obj_t
		BGl_displayzd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t bgl_write_char(obj_t, obj_t);
	static obj_t BGl_displayzd2pairzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_xprintfz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__writezd2symbolzd2zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_displayzd2stringzd2zz__r4_output_6_10_3z00(obj_t,
		obj_t);
	extern obj_t bgl_write_dynamic_env(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_newlinezd21zd2zz__r4_output_6_10_3z00(obj_t);
	static obj_t BGl__newlinez00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t bgl_seconds_to_string(long);
	static obj_t BGl__writezd2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t);
	extern obj_t bgl_write_string(obj_t, bool_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_write_obj(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_writezd2symbolzd2zz__r4_output_6_10_3z00(obj_t,
		obj_t);
	extern char *BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__displayzd22zd2zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
	extern obj_t bgl_write_llong(BGL_LONGLONG_T, obj_t);
	extern obj_t bgl_write_output_port(obj_t, obj_t);
	static obj_t BGl__tprintz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
	static obj_t BGl__displayz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_writezd2stringzd2zz__r4_output_6_10_3z00(obj_t,
		obj_t);
	extern obj_t bgl_write_binary_port(obj_t, obj_t);
	extern obj_t real_to_string(double);
	extern long bgl_date_to_seconds(obj_t);
	static obj_t BGl_symbol3002z00zz__r4_output_6_10_3z00 = BUNSPEC;
	static obj_t BGl__displayzd2flonumzd2zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_writezf2displayzd2structurez20zz__r4_output_6_10_3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol3029z00zz__r4_output_6_10_3z00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zz__r4_output_6_10_3z00();
	BGL_EXPORTED_DECL obj_t BGl_fprintfz00zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_fprintz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fprintfzd2envzd2zz__r4_output_6_10_3z00,
		BgL_bgl__fprintfza700za7za7__r3046za7, va_generic_entry,
		BGl__fprintfz00zz__r4_output_6_10_3z00, BUNSPEC, -3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_printzd2envzd2zz__r4_output_6_10_3z00,
		BgL_bgl__printza700za7za7__r4_3047za7, va_generic_entry,
		BGl__printz00zz__r4_output_6_10_3z00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_printfzd2envzd2zz__r4_output_6_10_3z00,
		BgL_bgl__printfza700za7za7__r43048za7, va_generic_entry,
		BGl__printfz00zz__r4_output_6_10_3z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_writezd2bytezd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl__writeza7d2byteza7d23049z00, opt_generic_entry,
		BGl__writezd2bytezd2zz__r4_output_6_10_3z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_writezd2stringzd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl__writeza7d2stringza73050z00,
		BGl__writezd2stringzd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_writezd2ucs2stringzd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl__writeza7d2ucs2str3051za7,
		BGl__writezd2ucs2stringzd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_displayza2zd2envz70zz__r4_output_6_10_3z00,
		BgL_bgl__displayza7a2za7a2za7za73052z00, va_generic_entry,
		BGl__displayza2za2zz__r4_output_6_10_3z00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_displayzd2stringzd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl__displayza7d2strin3053za7,
		BGl__displayzd2stringzd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_displayzd2fixnumzd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl__displayza7d2fixnu3054za7,
		BGl__displayzd2fixnumzd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_formatzd2envzd2zz__r4_output_6_10_3z00,
		BgL_bgl__formatza700za7za7__r43055za7, va_generic_entry,
		BGl__formatz00zz__r4_output_6_10_3z00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tprintzd2envzd2zz__r4_output_6_10_3z00,
		BgL_bgl__tprintza700za7za7__r43056za7, va_generic_entry,
		BGl__tprintz00zz__r4_output_6_10_3z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_displayzd2ucs2stringzd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl__displayza7d2ucs2s3057za7,
		BGl__displayzd2ucs2stringzd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3000z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3000za700za7za7_3058za7, "printf", 6);
	      DEFINE_STRING(BGl_string3001z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3001za700za7za7_3059za7, "_printf", 7);
	      DEFINE_STRING(BGl_string3003z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3003za700za7za7_3060za7, "fprintf", 7);
	      DEFINE_STRING(BGl_string3004z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3004za700za7za7_3061za7, "_fprintf", 8);
	      DEFINE_STRING(BGl_string3005z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3005za700za7za7_3062za7, "()", 2);
	      DEFINE_STRING(BGl_string3006z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3006za700za7za7_3063za7, "#f", 2);
	      DEFINE_STRING(BGl_string3007z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3007za700za7za7_3064za7, "#t", 2);
	      DEFINE_STRING(BGl_string3008z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3008za700za7za7_3065za7, "#unspecified", 12);
	      DEFINE_STRING(BGl_string3010z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3010za700za7za7_3066za7, ">", 1);
	      DEFINE_STRING(BGl_string3009z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3009za700za7za7_3067za7, "#<class:", 8);
	      DEFINE_STRING(BGl_string3011z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3011za700za7za7_3068za7, "#<mutex:", 8);
	      DEFINE_STRING(BGl_string3012z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3012za700za7za7_3069za7, "#<condition-variable:", 21);
	      DEFINE_STRING(BGl_string3013z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3013za700za7za7_3070za7, "#<cell:", 7);
	      DEFINE_STRING(BGl_string3014z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3014za700za7za7_3071za7, "#eof-object", 11);
	      DEFINE_STRING(BGl_string3015z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3015za700za7za7_3072za7, "#!optional", 10);
	      DEFINE_STRING(BGl_string3016z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3016za700za7za7_3073za7, "#!rest", 6);
	      DEFINE_STRING(BGl_string3017z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3017za700za7za7_3074za7, "#!key", 5);
	      DEFINE_STRING(BGl_string3018z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3018za700za7za7_3075za7, "#<output_string_port>", 21);
	      DEFINE_STRING(BGl_string3020z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3020za700za7za7_3076za7, "#<weakptr:", 10);
	      DEFINE_STRING(BGl_string3019z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3019za700za7za7_3077za7, "#<output_procedure_port>", 24);
	      DEFINE_STRING(BGl_string3021z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3021za700za7za7_3078za7, "_display-2", 10);
	      DEFINE_STRING(BGl_string3022z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3022za700za7za7_3079za7, "#<date:", 7);
	      DEFINE_STRING(BGl_string3023z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3023za700za7za7_3080za7, "_write-2", 8);
	      DEFINE_STRING(BGl_string3024z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3024za700za7za7_3081za7, "_display-symbol", 15);
	      DEFINE_STRING(BGl_string3025z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3025za700za7za7_3082za7, "symbol", 6);
	      DEFINE_STRING(BGl_string3026z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3026za700za7za7_3083za7, "|", 1);
	      DEFINE_STRING(BGl_string3027z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3027za700za7za7_3084za7, "_write-symbol", 13);
	      DEFINE_STRING(BGl_string3028z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3028za700za7za7_3085za7, "_display-string", 15);
	      DEFINE_STRING(BGl_string3030z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3030za700za7za7_3086za7, "display-substring", 17);
	      DEFINE_STRING(BGl_string3031z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3031za700za7za7_3087za7, "Illegal index, start=~a end=~a",
		30);
	      DEFINE_STRING(BGl_string3032z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3032za700za7za7_3088za7, "_display-substring", 18);
	      DEFINE_STRING(BGl_string3033z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3033za700za7za7_3089za7, "long", 4);
	      DEFINE_STRING(BGl_string3034z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3034za700za7za7_3090za7, "_write-string", 13);
	      DEFINE_STRING(BGl_string3035z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3035za700za7za7_3091za7, "_display-fixnum", 15);
	      DEFINE_STRING(BGl_string3036z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3036za700za7za7_3092za7, "bint", 4);
	      DEFINE_STRING(BGl_string3037z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3037za700za7za7_3093za7, "_display-elong", 14);
	      DEFINE_STRING(BGl_string3038z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3038za700za7za7_3094za7, "elong", 5);
	      DEFINE_STRING(BGl_string3040z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3040za700za7za7_3095za7, "real", 4);
	      DEFINE_STRING(BGl_string3039z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3039za700za7za7_3096za7, "_display-flonum", 15);
	      DEFINE_STRING(BGl_string3041z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3041za700za7za7_3097za7, "_display-ucs2string", 19);
	      DEFINE_STRING(BGl_string3042z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3042za700za7za7_3098za7, "ucs2string", 10);
	      DEFINE_STRING(BGl_string3043z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3043za700za7za7_3099za7, "_write-ucs2string", 17);
	      DEFINE_STRING(BGl_string3044z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3044za700za7za7_3100za7, "...)", 4);
	      DEFINE_STRING(BGl_string3045z00zz__r4_output_6_10_3z00,
		BgL_bgl_string3045za700za7za7_3101za7, "__r4_output_6_10_3", 18);
	      DEFINE_STRING(BGl_string2964z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2964za700za7za7_3102za7, "tprint", 6);
	      DEFINE_STRING(BGl_string2965z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2965za700za7za7_3103za7, "newline", 7);
	      DEFINE_STRING(BGl_string2966z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2966za700za7za7_3104za7, "wrong number of optional arguments",
		34);
	      DEFINE_STRING(BGl_string2967z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2967za700za7za7_3105za7,
		"/tmp/bigloo/runtime/Ieee/output.scm", 35);
	      DEFINE_STRING(BGl_string2968z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2968za700za7za7_3106za7, "_newline-1", 10);
	      DEFINE_STRING(BGl_string2970z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2970za700za7za7_3107za7, "display", 7);
	      DEFINE_STRING(BGl_string2969z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2969za700za7za7_3108za7, "output-port", 11);
	      DEFINE_STRING(BGl_string2971z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2971za700za7za7_3109za7, "write", 5);
	      DEFINE_STRING(BGl_string2972z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2972za700za7za7_3110za7, "_write-char", 11);
	      DEFINE_STRING(BGl_string2973z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2973za700za7za7_3111za7, "uchar", 5);
	      DEFINE_STRING(BGl_string2974z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2974za700za7za7_3112za7, "_write-char-2", 13);
	      DEFINE_STRING(BGl_string2975z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2975za700za7za7_3113za7, "_write-byte", 11);
	      DEFINE_STRING(BGl_string2976z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2976za700za7za7_3114za7, "ubyte", 5);
	      DEFINE_STRING(BGl_string2977z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2977za700za7za7_3115za7, "_write-byte-2", 13);
	      DEFINE_STRING(BGl_string2978z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2978za700za7za7_3116za7, "#Newline", 8);
	      DEFINE_STRING(BGl_string2980z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2980za700za7za7_3117za7, "#Space", 6);
	      DEFINE_STRING(BGl_string2979z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2979za700za7za7_3118za7, "#Return", 7);
	      DEFINE_STRING(BGl_string2981z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2981za700za7za7_3119za7, "#Tab", 4);
	      DEFINE_STRING(BGl_string2982z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2982za700za7za7_3120za7, "_illegal-char-rep", 17);
	      DEFINE_STRING(BGl_string2983z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2983za700za7za7_3121za7, "_tprint", 7);
	      DEFINE_STRING(BGl_string2984z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2984za700za7za7_3122za7, "_fprint", 7);
	      DEFINE_STRING(BGl_string2985z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2985za700za7za7_3123za7, "Insufficient number of arguments",
		32);
	      DEFINE_STRING(BGl_string2986z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2986za700za7za7_3124za7, "Illegal char", 12);
	      DEFINE_STRING(BGl_string2987z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2987za700za7za7_3125za7, "Illegal number", 14);
	      DEFINE_STRING(BGl_string2990z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2990za700za7za7_3126za7, "Illegal tag", 11);
	      DEFINE_STRING(BGl_string2989z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2989za700za7za7_3127za7, "L", 1);
	      DEFINE_STRING(BGl_string2991z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2991za700za7za7_3128za7, "0123456789", 10);
	      DEFINE_STRING(BGl_string2992z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2992za700za7za7_3129za7, "Tag not allowed here", 20);
	      DEFINE_STRING(BGl_string2993z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2993za700za7za7_3130za7, " ", 1);
	      DEFINE_STRING(BGl_string2994z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2994za700za7za7_3131za7, " . ", 3);
	      DEFINE_STRING(BGl_string2996z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2996za700za7za7_3132za7, "format", 6);
	      DEFINE_STRING(BGl_string2997z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2997za700za7za7_3133za7, "_format", 7);
	      DEFINE_STRING(BGl_string2998z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2998za700za7za7_3134za7, "bstring", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_writezd2charzd22zd2envzd2zz__r4_output_6_10_3z00,
		BgL_bgl__writeza7d2charza7d23135z00,
		BGl__writezd2charzd22z00zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_writezd2envzd2zz__r4_output_6_10_3z00,
		BgL_bgl__writeza700za7za7__r4_3136za7, va_generic_entry,
		BGl__writez00zz__r4_output_6_10_3z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_writezd2symbolzd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl__writeza7d2symbolza73137z00,
		BGl__writezd2symbolzd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_displayzd2substringzd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl__displayza7d2subst3138za7,
		BGl__displayzd2substringzd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_displayzd2symbolzd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl__displayza7d2symbo3139za7,
		BGl__displayzd2symbolzd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_writezd2bytezd22zd2envzd2zz__r4_output_6_10_3z00,
		BgL_bgl__writeza7d2byteza7d23140z00,
		BGl__writezd2bytezd22z00zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_displayzd22zd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl__displayza7d22za7d2za73141za7,
		BGl__displayzd22zd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_displayzd2elongzd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl__displayza7d2elong3142za7,
		BGl__displayzd2elongzd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_writezd22zd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl__writeza7d22za7d2za7za7_3143z00,
		BGl__writezd22zd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_writeza2zd2envz70zz__r4_output_6_10_3z00,
		BgL_bgl__writeza7a2za7a2za7za7__3144z00, va_generic_entry,
		BGl__writeza2za2zz__r4_output_6_10_3z00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fprintzd2envzd2zz__r4_output_6_10_3z00,
		BgL_bgl__fprintza700za7za7__r43145za7, va_generic_entry,
		BGl__fprintz00zz__r4_output_6_10_3z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_newlinezd21zd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl__newlineza7d21za7d2za73146za7,
		BGl__newlinezd21zd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_illegalzd2charzd2repzd2envzd2zz__r4_output_6_10_3z00,
		BgL_bgl__illegalza7d2charza73147z00,
		BGl__illegalzd2charzd2repz00zz__r4_output_6_10_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_writezd2charzd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl__writeza7d2charza7d23148z00, opt_generic_entry,
		BGl__writezd2charzd2zz__r4_output_6_10_3z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_displayzd2flonumzd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl__displayza7d2flonu3149za7,
		BGl__displayzd2flonumzd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_newlinezd2envzd2zz__r4_output_6_10_3z00,
		BgL_bgl__newlineza700za7za7__r3150za7, va_generic_entry,
		BGl__newlinez00zz__r4_output_6_10_3z00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_displayzd2envzd2zz__r4_output_6_10_3z00,
		BgL_bgl__displayza700za7za7__r3151za7, va_generic_entry,
		BGl__displayz00zz__r4_output_6_10_3z00, BUNSPEC, -2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long
		BgL_checksumz00_3727, char *BgL_fromz00_3728)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_output_6_10_3z00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_output_6_10_3z00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__r4_output_6_10_3z00();
					BGl_importedzd2moduleszd2initz00zz__r4_output_6_10_3z00();
					BGl_toplevelzd2initzd2zz__r4_output_6_10_3z00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__r4_output_6_10_3z00()
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 24 */
			BGl_symbol2988z00zz__r4_output_6_10_3z00 =
				bstring_to_symbol(BGl_string2989z00zz__r4_output_6_10_3z00);
			BGl_symbol2995z00zz__r4_output_6_10_3z00 =
				bstring_to_symbol(BGl_string2996z00zz__r4_output_6_10_3z00);
			BGl_symbol2999z00zz__r4_output_6_10_3z00 =
				bstring_to_symbol(BGl_string3000z00zz__r4_output_6_10_3z00);
			BGl_symbol3002z00zz__r4_output_6_10_3z00 =
				bstring_to_symbol(BGl_string3003z00zz__r4_output_6_10_3z00);
			return (BGl_symbol3029z00zz__r4_output_6_10_3z00 =
				bstring_to_symbol(BGl_string3030z00zz__r4_output_6_10_3z00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__r4_output_6_10_3z00()
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 24 */
			return (BGl_tprintzd2mutexzd2zz__r4_output_6_10_3z00 =
				bgl_make_mutex(BGl_string2964z00zz__r4_output_6_10_3z00), BUNSPEC);
		}
	}



/* newline */
	BGL_EXPORTED_DEF obj_t BGl_newlinez00zz__r4_output_6_10_3z00(obj_t
		BgL_portz00_1)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 236 */
			{	/* Ieee/output.scm 237 */
				obj_t BgL_portz00_1118;

				if (NULLP(BgL_portz00_1))
					{	/* Ieee/output.scm 237 */
						obj_t BgL_res2848z00_2416;

						{	/* Ieee/output.scm 237 */
							obj_t BgL_auxz00_3743;

							BgL_auxz00_3743 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2848z00_2416 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3743);
						}
						BgL_portz00_1118 = BgL_res2848z00_2416;
					}
				else
					{	/* Ieee/output.scm 237 */
						if (PAIRP(BgL_portz00_1))
							{	/* Ieee/output.scm 237 */
								if (NULLP(CDR(BgL_portz00_1)))
									{	/* Ieee/output.scm 237 */
										BgL_portz00_1118 = CAR(BgL_portz00_1);
									}
								else
									{	/* Ieee/output.scm 237 */
										BgL_portz00_1118 =
											BGl_errorz00zz__errorz00
											(BGl_string2965z00zz__r4_output_6_10_3z00,
											BGl_string2966z00zz__r4_output_6_10_3z00, BgL_portz00_1);
									}
							}
						else
							{	/* Ieee/output.scm 237 */
								BgL_portz00_1118 =
									BGl_errorz00zz__errorz00
									(BGl_string2965z00zz__r4_output_6_10_3z00,
									BGl_string2966z00zz__r4_output_6_10_3z00, BgL_portz00_1);
							}
					}
				return bgl_display_char(((unsigned char) '\n'), BgL_portz00_1118);
		}}
	}



/* _newline */
	obj_t BGl__newlinez00zz__r4_output_6_10_3z00(obj_t BgL_envz00_3532,
		obj_t BgL_portz00_3533)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 236 */
			return BGl_newlinez00zz__r4_output_6_10_3z00(BgL_portz00_3533);
		}
	}



/* newline-1 */
	BGL_EXPORTED_DEF obj_t BGl_newlinezd21zd2zz__r4_output_6_10_3z00(obj_t
		BgL_portz00_2)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 251 */
			return bgl_display_char(((unsigned char) '\n'), BgL_portz00_2);
		}
	}



/* _newline-1 */
	obj_t BGl__newlinezd21zd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3534,
		obj_t BgL_portz00_3535)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 251 */
			{	/* Ieee/output.scm 252 */
				obj_t BgL_portz00_3698;

				if (OUTPUT_PORTP(BgL_portz00_3535))
					{	/* Ieee/output.scm 252 */
						BgL_portz00_3698 = BgL_portz00_3535;
					}
				else
					{
						obj_t BgL_auxz00_3759;

						BgL_auxz00_3759 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 9855)),
							BGl_string2968z00zz__r4_output_6_10_3z00,
							BGl_string2969z00zz__r4_output_6_10_3z00, BgL_portz00_3535);
						FAILURE(BgL_auxz00_3759, BFALSE, BFALSE);
					}
				return bgl_display_char(((unsigned char) '\n'), BgL_portz00_3698);
		}}
	}



/* display */
	BGL_EXPORTED_DEF obj_t BGl_displayz00zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_3, obj_t BgL_portz00_4)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 257 */
			{	/* Ieee/output.scm 258 */
				obj_t BgL_portz00_1127;

				if (NULLP(BgL_portz00_4))
					{	/* Ieee/output.scm 258 */
						obj_t BgL_res2850z00_2427;

						{	/* Ieee/output.scm 258 */
							obj_t BgL_auxz00_3766;

							BgL_auxz00_3766 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2850z00_2427 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3766);
						}
						BgL_portz00_1127 = BgL_res2850z00_2427;
					}
				else
					{	/* Ieee/output.scm 258 */
						if (PAIRP(BgL_portz00_4))
							{	/* Ieee/output.scm 258 */
								if (NULLP(CDR(BgL_portz00_4)))
									{	/* Ieee/output.scm 258 */
										BgL_portz00_1127 = CAR(BgL_portz00_4);
									}
								else
									{	/* Ieee/output.scm 258 */
										BgL_portz00_1127 =
											BGl_errorz00zz__errorz00
											(BGl_string2970z00zz__r4_output_6_10_3z00,
											BGl_string2966z00zz__r4_output_6_10_3z00, BgL_portz00_4);
									}
							}
						else
							{	/* Ieee/output.scm 258 */
								BgL_portz00_1127 =
									BGl_errorz00zz__errorz00
									(BGl_string2970z00zz__r4_output_6_10_3z00,
									BGl_string2966z00zz__r4_output_6_10_3z00, BgL_portz00_4);
							}
					}
				return bgl_display_obj(BgL_objz00_3, BgL_portz00_1127);
			}
		}
	}



/* _display */
	obj_t BGl__displayz00zz__r4_output_6_10_3z00(obj_t BgL_envz00_3536,
		obj_t BgL_objz00_3537, obj_t BgL_portz00_3538)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 257 */
			return
				BGl_displayz00zz__r4_output_6_10_3z00(BgL_objz00_3537,
				BgL_portz00_3538);
		}
	}



/* write */
	BGL_EXPORTED_DEF obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t BgL_objz00_5,
		obj_t BgL_portz00_6)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 272 */
			{	/* Ieee/output.scm 273 */
				obj_t BgL_portz00_1136;

				if (NULLP(BgL_portz00_6))
					{	/* Ieee/output.scm 273 */
						obj_t BgL_res2852z00_2437;

						{	/* Ieee/output.scm 273 */
							obj_t BgL_auxz00_3781;

							BgL_auxz00_3781 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2852z00_2437 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3781);
						}
						BgL_portz00_1136 = BgL_res2852z00_2437;
					}
				else
					{	/* Ieee/output.scm 273 */
						if (PAIRP(BgL_portz00_6))
							{	/* Ieee/output.scm 273 */
								if (NULLP(CDR(BgL_portz00_6)))
									{	/* Ieee/output.scm 273 */
										BgL_portz00_1136 = CAR(BgL_portz00_6);
									}
								else
									{	/* Ieee/output.scm 273 */
										BgL_portz00_1136 =
											BGl_errorz00zz__errorz00
											(BGl_string2971z00zz__r4_output_6_10_3z00,
											BGl_string2966z00zz__r4_output_6_10_3z00, BgL_portz00_6);
									}
							}
						else
							{	/* Ieee/output.scm 273 */
								BgL_portz00_1136 =
									BGl_errorz00zz__errorz00
									(BGl_string2971z00zz__r4_output_6_10_3z00,
									BGl_string2966z00zz__r4_output_6_10_3z00, BgL_portz00_6);
							}
					}
				return bgl_write_obj(BgL_objz00_5, BgL_portz00_1136);
			}
		}
	}



/* _write */
	obj_t BGl__writez00zz__r4_output_6_10_3z00(obj_t BgL_envz00_3539,
		obj_t BgL_objz00_3540, obj_t BgL_portz00_3541)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 272 */
			return
				BGl_writez00zz__r4_output_6_10_3z00(BgL_objz00_3540, BgL_portz00_3541);
		}
	}



/* _write-char */
	obj_t BGl__writezd2charzd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_10,
		obj_t BgL_optz00_9)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 287 */
			{	/* Ieee/output.scm 287 */
				obj_t BgL_g1885z00_1145;

				BgL_g1885z00_1145 = VECTOR_REF(BgL_optz00_9, (int) (((long) 0)));
				{	/* Ieee/output.scm 287 */
					int BgL_aux1887z00_1147;

					BgL_aux1887z00_1147 = VECTOR_LENGTH(BgL_optz00_9);
					switch ((long) (BgL_aux1887z00_1147))
						{
						case ((long) 1):

							{	/* Ieee/output.scm 287 */
								obj_t BgL_portz00_1149;

								{	/* Ieee/output.scm 287 */
									obj_t BgL_res2854z00_2446;

									{	/* Ieee/output.scm 287 */
										obj_t BgL_auxz00_3797;

										BgL_auxz00_3797 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2854z00_2446 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3797);
									}
									BgL_portz00_1149 = BgL_res2854z00_2446;
								}
								{	/* Ieee/output.scm 287 */

									{	/* Ieee/output.scm 287 */
										obj_t BgL_arg1942z00_1150;

										BgL_arg1942z00_1150 =
											VECTOR_REF(BgL_optz00_9, (int) (((long) 0)));
										{	/* Ieee/output.scm 287 */
											unsigned char BgL_charz00_2447;

											{	/* Ieee/output.scm 287 */
												obj_t BgL_auxz00_3802;

												if (CHARP(BgL_arg1942z00_1150))
													{	/* Ieee/output.scm 287 */
														BgL_auxz00_3802 = BgL_arg1942z00_1150;
													}
												else
													{
														obj_t BgL_auxz00_3805;

														BgL_auxz00_3805 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2967z00zz__r4_output_6_10_3z00,
															BINT(((long) 11034)),
															BGl_string2972z00zz__r4_output_6_10_3z00,
															BGl_string2973z00zz__r4_output_6_10_3z00,
															BgL_arg1942z00_1150);
														FAILURE(BgL_auxz00_3805, BFALSE, BFALSE);
													}
												BgL_charz00_2447 = CCHAR(BgL_auxz00_3802);
											}
											return
												bgl_display_char(BgL_charz00_2447, BgL_portz00_1149);
										}
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Ieee/output.scm 287 */
								obj_t BgL_portz00_1151;

								BgL_portz00_1151 = VECTOR_REF(BgL_optz00_9, (int) (((long) 1)));
								{	/* Ieee/output.scm 287 */

									{	/* Ieee/output.scm 287 */
										obj_t BgL_arg1943z00_1152;

										BgL_arg1943z00_1152 =
											VECTOR_REF(BgL_optz00_9, (int) (((long) 0)));
										{	/* Ieee/output.scm 287 */
											unsigned char BgL_charz00_2451;

											{	/* Ieee/output.scm 287 */
												obj_t BgL_auxz00_3815;

												if (CHARP(BgL_arg1943z00_1152))
													{	/* Ieee/output.scm 287 */
														BgL_auxz00_3815 = BgL_arg1943z00_1152;
													}
												else
													{
														obj_t BgL_auxz00_3818;

														BgL_auxz00_3818 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2967z00zz__r4_output_6_10_3z00,
															BINT(((long) 11034)),
															BGl_string2972z00zz__r4_output_6_10_3z00,
															BGl_string2973z00zz__r4_output_6_10_3z00,
															BgL_arg1943z00_1152);
														FAILURE(BgL_auxz00_3818, BFALSE, BFALSE);
													}
												BgL_charz00_2451 = CCHAR(BgL_auxz00_3815);
											}
											{	/* Ieee/output.scm 287 */
												obj_t BgL_portz00_2454;

												if (OUTPUT_PORTP(BgL_portz00_1151))
													{	/* Ieee/output.scm 287 */
														BgL_portz00_2454 = BgL_portz00_1151;
													}
												else
													{
														obj_t BgL_auxz00_3825;

														BgL_auxz00_3825 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2967z00zz__r4_output_6_10_3z00,
															BINT(((long) 11034)),
															BGl_string2972z00zz__r4_output_6_10_3z00,
															BGl_string2969z00zz__r4_output_6_10_3z00,
															BgL_portz00_1151);
														FAILURE(BgL_auxz00_3825, BFALSE, BFALSE);
													}
												return
													bgl_display_char(BgL_charz00_2451, BgL_portz00_2454);
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



/* write-char */
	BGL_EXPORTED_DEF obj_t BGl_writezd2charzd2zz__r4_output_6_10_3z00(unsigned
		char BgL_charz00_7, obj_t BgL_portz00_8)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 287 */
			return bgl_display_char(BgL_charz00_7, BgL_portz00_8);
		}
	}



/* write-char-2 */
	BGL_EXPORTED_DEF obj_t BGl_writezd2charzd22z00zz__r4_output_6_10_3z00(unsigned
		char BgL_charz00_11, obj_t BgL_portz00_12)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 293 */
			return bgl_display_char(BgL_charz00_11, BgL_portz00_12);
		}
	}



/* _write-char-2 */
	obj_t BGl__writezd2charzd22z00zz__r4_output_6_10_3z00(obj_t BgL_envz00_3542,
		obj_t BgL_charz00_3543, obj_t BgL_portz00_3544)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 293 */
			{	/* Ieee/output.scm 294 */
				unsigned char BgL_charz00_3699;

				obj_t BgL_portz00_3700;

				{	/* Ieee/output.scm 294 */
					obj_t BgL_auxz00_3834;

					if (CHARP(BgL_charz00_3543))
						{	/* Ieee/output.scm 294 */
							BgL_auxz00_3834 = BgL_charz00_3543;
						}
					else
						{
							obj_t BgL_auxz00_3837;

							BgL_auxz00_3837 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 11415)),
								BGl_string2974z00zz__r4_output_6_10_3z00,
								BGl_string2973z00zz__r4_output_6_10_3z00, BgL_charz00_3543);
							FAILURE(BgL_auxz00_3837, BFALSE, BFALSE);
						}
					BgL_charz00_3699 = CCHAR(BgL_auxz00_3834);
				}
				if (OUTPUT_PORTP(BgL_portz00_3544))
					{	/* Ieee/output.scm 294 */
						BgL_portz00_3700 = BgL_portz00_3544;
					}
				else
					{
						obj_t BgL_auxz00_3844;

						BgL_auxz00_3844 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 11415)),
							BGl_string2974z00zz__r4_output_6_10_3z00,
							BGl_string2969z00zz__r4_output_6_10_3z00, BgL_portz00_3544);
						FAILURE(BgL_auxz00_3844, BFALSE, BFALSE);
					}
				return bgl_display_char(BgL_charz00_3699, BgL_portz00_3700);
			}
		}
	}



/* _write-byte */
	obj_t BGl__writezd2bytezd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_16,
		obj_t BgL_optz00_15)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 299 */
			{	/* Ieee/output.scm 299 */
				obj_t BgL_g1888z00_1153;

				BgL_g1888z00_1153 = VECTOR_REF(BgL_optz00_15, (int) (((long) 0)));
				{	/* Ieee/output.scm 299 */
					int BgL_aux1890z00_1155;

					BgL_aux1890z00_1155 = VECTOR_LENGTH(BgL_optz00_15);
					switch ((long) (BgL_aux1890z00_1155))
						{
						case ((long) 1):

							{	/* Ieee/output.scm 299 */
								obj_t BgL_portz00_1157;

								{	/* Ieee/output.scm 299 */
									obj_t BgL_res2855z00_2458;

									{	/* Ieee/output.scm 299 */
										obj_t BgL_auxz00_3852;

										BgL_auxz00_3852 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2855z00_2458 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3852);
									}
									BgL_portz00_1157 = BgL_res2855z00_2458;
								}
								{	/* Ieee/output.scm 299 */

									{	/* Ieee/output.scm 299 */
										obj_t BgL_arg1945z00_1158;

										BgL_arg1945z00_1158 =
											VECTOR_REF(BgL_optz00_15, (int) (((long) 0)));
										{	/* Ieee/output.scm 299 */
											unsigned char BgL_bytez00_2459;

											{	/* Ieee/output.scm 299 */
												obj_t BgL_auxz00_3857;

												if (INTEGERP(BgL_arg1945z00_1158))
													{	/* Ieee/output.scm 299 */
														BgL_auxz00_3857 = BgL_arg1945z00_1158;
													}
												else
													{
														obj_t BgL_auxz00_3860;

														BgL_auxz00_3860 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2967z00zz__r4_output_6_10_3z00,
															BINT(((long) 11666)),
															BGl_string2975z00zz__r4_output_6_10_3z00,
															BGl_string2976z00zz__r4_output_6_10_3z00,
															BgL_arg1945z00_1158);
														FAILURE(BgL_auxz00_3860, BFALSE, BFALSE);
													}
												BgL_bytez00_2459 =
													(unsigned char) CINT(BgL_auxz00_3857);
											}
											return
												bgl_display_char(BgL_bytez00_2459, BgL_portz00_1157);
										}
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Ieee/output.scm 299 */
								obj_t BgL_portz00_1159;

								BgL_portz00_1159 =
									VECTOR_REF(BgL_optz00_15, (int) (((long) 1)));
								{	/* Ieee/output.scm 299 */

									{	/* Ieee/output.scm 299 */
										obj_t BgL_arg1946z00_1160;

										BgL_arg1946z00_1160 =
											VECTOR_REF(BgL_optz00_15, (int) (((long) 0)));
										{	/* Ieee/output.scm 299 */
											unsigned char BgL_bytez00_2463;

											{	/* Ieee/output.scm 299 */
												obj_t BgL_auxz00_3870;

												if (INTEGERP(BgL_arg1946z00_1160))
													{	/* Ieee/output.scm 299 */
														BgL_auxz00_3870 = BgL_arg1946z00_1160;
													}
												else
													{
														obj_t BgL_auxz00_3873;

														BgL_auxz00_3873 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2967z00zz__r4_output_6_10_3z00,
															BINT(((long) 11666)),
															BGl_string2975z00zz__r4_output_6_10_3z00,
															BGl_string2976z00zz__r4_output_6_10_3z00,
															BgL_arg1946z00_1160);
														FAILURE(BgL_auxz00_3873, BFALSE, BFALSE);
													}
												BgL_bytez00_2463 =
													(unsigned char) CINT(BgL_auxz00_3870);
											}
											{	/* Ieee/output.scm 299 */
												obj_t BgL_portz00_2466;

												if (OUTPUT_PORTP(BgL_portz00_1159))
													{	/* Ieee/output.scm 299 */
														BgL_portz00_2466 = BgL_portz00_1159;
													}
												else
													{
														obj_t BgL_auxz00_3880;

														BgL_auxz00_3880 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2967z00zz__r4_output_6_10_3z00,
															BINT(((long) 11666)),
															BGl_string2975z00zz__r4_output_6_10_3z00,
															BGl_string2969z00zz__r4_output_6_10_3z00,
															BgL_portz00_1159);
														FAILURE(BgL_auxz00_3880, BFALSE, BFALSE);
													}
												return
													bgl_display_char(BgL_bytez00_2463, BgL_portz00_2466);
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



/* write-byte */
	BGL_EXPORTED_DEF obj_t BGl_writezd2bytezd2zz__r4_output_6_10_3z00(unsigned
		char BgL_bytez00_13, obj_t BgL_portz00_14)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 299 */
			return bgl_display_char(BgL_bytez00_13, BgL_portz00_14);
		}
	}



/* write-byte-2 */
	BGL_EXPORTED_DEF obj_t BGl_writezd2bytezd22z00zz__r4_output_6_10_3z00(unsigned
		char BgL_bytez00_17, obj_t BgL_portz00_18)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 305 */
			return bgl_display_char(BgL_bytez00_17, BgL_portz00_18);
		}
	}



/* _write-byte-2 */
	obj_t BGl__writezd2bytezd22z00zz__r4_output_6_10_3z00(obj_t BgL_envz00_3545,
		obj_t BgL_bytez00_3546, obj_t BgL_portz00_3547)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 305 */
			{	/* Ieee/output.scm 306 */
				unsigned char BgL_bytez00_3701;

				obj_t BgL_portz00_3702;

				{	/* Ieee/output.scm 306 */
					obj_t BgL_auxz00_3889;

					if (INTEGERP(BgL_bytez00_3546))
						{	/* Ieee/output.scm 306 */
							BgL_auxz00_3889 = BgL_bytez00_3546;
						}
					else
						{
							obj_t BgL_auxz00_3892;

							BgL_auxz00_3892 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 12047)),
								BGl_string2977z00zz__r4_output_6_10_3z00,
								BGl_string2976z00zz__r4_output_6_10_3z00, BgL_bytez00_3546);
							FAILURE(BgL_auxz00_3892, BFALSE, BFALSE);
						}
					BgL_bytez00_3701 = (unsigned char) CINT(BgL_auxz00_3889);
				}
				if (OUTPUT_PORTP(BgL_portz00_3547))
					{	/* Ieee/output.scm 306 */
						BgL_portz00_3702 = BgL_portz00_3547;
					}
				else
					{
						obj_t BgL_auxz00_3899;

						BgL_auxz00_3899 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 12047)),
							BGl_string2977z00zz__r4_output_6_10_3z00,
							BGl_string2969z00zz__r4_output_6_10_3z00, BgL_portz00_3547);
						FAILURE(BgL_auxz00_3899, BFALSE, BFALSE);
					}
				return bgl_display_char(BgL_bytez00_3701, BgL_portz00_3702);
			}
		}
	}



/* illegal-char-rep */
	BGL_EXPORTED_DEF obj_t
		BGl_illegalzd2charzd2repz00zz__r4_output_6_10_3z00(unsigned char
		BgL_charz00_19)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 311 */
			{	/* Ieee/output.scm 312 */
				bool_t BgL_testz00_3904;

				if (isalpha(BgL_charz00_19))
					{	/* Ieee/output.scm 312 */
						BgL_testz00_3904 = ((bool_t) 1);
					}
				else
					{	/* Ieee/output.scm 312 */
						BgL_testz00_3904 = isdigit(BgL_charz00_19);
					}
				if (BgL_testz00_3904)
					{	/* Ieee/output.scm 312 */
						return BCHAR(BgL_charz00_19);
					}
				else
					{

						switch (BgL_charz00_19)
							{
							case ((unsigned char) '\n'):

								return BGl_string2978z00zz__r4_output_6_10_3z00;
								break;
							case ((unsigned char) '\r'):

								return BGl_string2979z00zz__r4_output_6_10_3z00;
								break;
							case ((unsigned char) ' '):

								return BGl_string2980z00zz__r4_output_6_10_3z00;
								break;
							case ((unsigned char) '\t'):

								return BGl_string2981z00zz__r4_output_6_10_3z00;
								break;
							default:
								{	/* Ieee/output.scm 324 */
									long BgL_iz00_1165;

									BgL_iz00_1165 = (BgL_charz00_19);
									if ((BgL_iz00_1165 < ((long) 33)))
										{	/* Ieee/output.scm 325 */
											return bgl_ill_char_rep(BgL_charz00_19);
										}
									else
										{	/* Ieee/output.scm 325 */
											return BCHAR(BgL_charz00_19);
										}
								}
							}
					}
			}
		}
	}



/* _illegal-char-rep */
	obj_t BGl__illegalzd2charzd2repz00zz__r4_output_6_10_3z00(obj_t
		BgL_envz00_3548, obj_t BgL_charz00_3549)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 311 */
			{	/* Ieee/output.scm 312 */
				unsigned char BgL_auxz00_3915;

				{	/* Ieee/output.scm 312 */
					obj_t BgL_auxz00_3916;

					if (CHARP(BgL_charz00_3549))
						{	/* Ieee/output.scm 312 */
							BgL_auxz00_3916 = BgL_charz00_3549;
						}
					else
						{
							obj_t BgL_auxz00_3919;

							BgL_auxz00_3919 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 12332)),
								BGl_string2982z00zz__r4_output_6_10_3z00,
								BGl_string2973z00zz__r4_output_6_10_3z00, BgL_charz00_3549);
							FAILURE(BgL_auxz00_3919, BFALSE, BFALSE);
						}
					BgL_auxz00_3915 = CCHAR(BgL_auxz00_3916);
				}
				return
					BGl_illegalzd2charzd2repz00zz__r4_output_6_10_3z00(BgL_auxz00_3915);
			}
		}
	}



/* print */
	BGL_EXPORTED_DEF obj_t BGl_printz00zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_20)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 332 */
			{	/* Ieee/output.scm 333 */
				obj_t BgL_portz00_1168;

				{	/* Ieee/output.scm 333 */
					obj_t BgL_res2856z00_2475;

					{	/* Ieee/output.scm 333 */
						obj_t BgL_auxz00_3925;

						BgL_auxz00_3925 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2856z00_2475 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3925);
					}
					BgL_portz00_1168 = BgL_res2856z00_2475;
				}
				{
					obj_t BgL_lz00_2477;

					obj_t BgL_resz00_2478;

					BgL_lz00_2477 = BgL_objz00_20;
					BgL_resz00_2478 = BNIL;
				BgL_loopz00_2476:
					if (NULLP(BgL_lz00_2477))
						{	/* Ieee/output.scm 334 */
							bgl_display_char(((unsigned char) '\n'), BgL_portz00_1168);
							return BgL_resz00_2478;
						}
					else
						{	/* Ieee/output.scm 334 */
							obj_t BgL_vz00_2483;

							BgL_vz00_2483 = CAR(BgL_lz00_2477);
							bgl_display_obj(BgL_vz00_2483, BgL_portz00_1168);
							{
								obj_t BgL_resz00_3935;

								obj_t BgL_lz00_3933;

								BgL_lz00_3933 = CDR(BgL_lz00_2477);
								BgL_resz00_3935 = BgL_vz00_2483;
								BgL_resz00_2478 = BgL_resz00_3935;
								BgL_lz00_2477 = BgL_lz00_3933;
								goto BgL_loopz00_2476;
							}
						}
				}
			}
		}
	}



/* _print */
	obj_t BGl__printz00zz__r4_output_6_10_3z00(obj_t BgL_envz00_3550,
		obj_t BgL_objz00_3551)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 332 */
			return BGl_printz00zz__r4_output_6_10_3z00(BgL_objz00_3551);
		}
	}



/* display* */
	BGL_EXPORTED_DEF obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_21)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 347 */
			{	/* Ieee/output.scm 348 */
				obj_t BgL_portz00_1178;

				{	/* Ieee/output.scm 348 */
					obj_t BgL_res2857z00_2503;

					{	/* Ieee/output.scm 348 */
						obj_t BgL_auxz00_3937;

						BgL_auxz00_3937 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2857z00_2503 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3937);
					}
					BgL_portz00_1178 = BgL_res2857z00_2503;
				}
				{
					obj_t BgL_lz00_1180;

					BgL_lz00_1180 = BgL_objz00_21;
				BgL_zc3anonymousza31954ze3z83_1181:
					if (NULLP(BgL_lz00_1180))
						{	/* Ieee/output.scm 350 */
							return BUNSPEC;
						}
					else
						{	/* Ieee/output.scm 350 */
							bgl_display_obj(CAR(BgL_lz00_1180), BgL_portz00_1178);
							{
								obj_t BgL_lz00_3944;

								BgL_lz00_3944 = CDR(BgL_lz00_1180);
								BgL_lz00_1180 = BgL_lz00_3944;
								goto BgL_zc3anonymousza31954ze3z83_1181;
							}
						}
				}
			}
		}
	}



/* _display* */
	obj_t BGl__displayza2za2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3552,
		obj_t BgL_objz00_3553)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 347 */
			return BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_objz00_3553);
		}
	}



/* write* */
	BGL_EXPORTED_DEF obj_t BGl_writeza2za2zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_22)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 359 */
			{	/* Ieee/output.scm 360 */
				obj_t BgL_portz00_1187;

				{	/* Ieee/output.scm 360 */
					obj_t BgL_res2858z00_2509;

					{	/* Ieee/output.scm 360 */
						obj_t BgL_auxz00_3947;

						BgL_auxz00_3947 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2858z00_2509 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3947);
					}
					BgL_portz00_1187 = BgL_res2858z00_2509;
				}
				{
					obj_t BgL_lz00_1189;

					BgL_lz00_1189 = BgL_objz00_22;
				BgL_zc3anonymousza31958ze3z83_1190:
					if (NULLP(BgL_lz00_1189))
						{	/* Ieee/output.scm 362 */
							return BUNSPEC;
						}
					else
						{	/* Ieee/output.scm 362 */
							bgl_write_obj(CAR(BgL_lz00_1189), BgL_portz00_1187);
							{
								obj_t BgL_lz00_3954;

								BgL_lz00_3954 = CDR(BgL_lz00_1189);
								BgL_lz00_1189 = BgL_lz00_3954;
								goto BgL_zc3anonymousza31958ze3z83_1190;
							}
						}
				}
			}
		}
	}



/* _write* */
	obj_t BGl__writeza2za2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3554,
		obj_t BgL_objz00_3555)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 359 */
			return BGl_writeza2za2zz__r4_output_6_10_3z00(BgL_objz00_3555);
		}
	}



/* tprint */
	BGL_EXPORTED_DEF obj_t BGl_tprintz00zz__r4_output_6_10_3z00(obj_t
		BgL_portz00_23, obj_t BgL_objz00_24)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 376 */
			{	/* Ieee/output.scm 377 */
				obj_t BgL_g1917z00_1196;

				BgL_g1917z00_1196 = BGl_tprintzd2mutexzd2zz__r4_output_6_10_3z00;
				{	/* Llib/thread.scm 201 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/thread.scm 201 */
							bgl_mutex_lock(BgL_g1917z00_1196);
						}
					else
						{	/* Llib/thread.scm 201 */
							bgl_mutex_timed_lock(BgL_g1917z00_1196, ((long) 0));
			}}}
			{	/* Ieee/output.scm 378 */
				obj_t BgL_runner1964z00_1200;

				{	/* Ieee/output.scm 378 */
					obj_t BgL_list1962z00_1198;

					BgL_list1962z00_1198 = MAKE_PAIR(BgL_objz00_24, BNIL);
					BgL_runner1964z00_1200 =
						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_portz00_23,
						BgL_list1962z00_1198);
				}
				{	/* Ieee/output.scm 378 */
					obj_t BgL_aux1963z00_1199;

					BgL_aux1963z00_1199 = CAR(BgL_runner1964z00_1200);
					BgL_runner1964z00_1200 = CDR(BgL_runner1964z00_1200);
					BGl_fprintz00zz__r4_output_6_10_3z00(BgL_aux1963z00_1199,
						BgL_runner1964z00_1200);
			}}
			FLUSH_OUTPUT_PORT(BgL_portz00_23);
			{	/* Ieee/output.scm 380 */
				obj_t BgL_mz00_2522;

				BgL_mz00_2522 = BGl_tprintzd2mutexzd2zz__r4_output_6_10_3z00;
				return BBOOL(bgl_mutex_unlock(BgL_mz00_2522));
			}
		}
	}



/* _tprint */
	obj_t BGl__tprintz00zz__r4_output_6_10_3z00(obj_t BgL_envz00_3556,
		obj_t BgL_portz00_3557, obj_t BgL_objz00_3558)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 376 */
			{	/* Ieee/output.scm 380 */
				obj_t BgL_auxz00_3969;

				if (OUTPUT_PORTP(BgL_portz00_3557))
					{	/* Ieee/output.scm 380 */
						BgL_auxz00_3969 = BgL_portz00_3557;
					}
				else
					{
						obj_t BgL_auxz00_3972;

						BgL_auxz00_3972 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 14593)),
							BGl_string2983z00zz__r4_output_6_10_3z00,
							BGl_string2969z00zz__r4_output_6_10_3z00, BgL_portz00_3557);
						FAILURE(BgL_auxz00_3972, BFALSE, BFALSE);
					}
				return
					BGl_tprintz00zz__r4_output_6_10_3z00(BgL_auxz00_3969,
					BgL_objz00_3558);
			}
		}
	}



/* fprint */
	BGL_EXPORTED_DEF obj_t BGl_fprintz00zz__r4_output_6_10_3z00(obj_t
		BgL_portz00_25, obj_t BgL_objz00_26)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 385 */
			{
				obj_t BgL_lz00_2524;

				obj_t BgL_resz00_2525;

				BgL_lz00_2524 = BgL_objz00_26;
				BgL_resz00_2525 = BNIL;
			BgL_loopz00_2523:
				if (NULLP(BgL_lz00_2524))
					{	/* Ieee/output.scm 386 */
						bgl_display_char(((unsigned char) '\n'), BgL_portz00_25);
						return BgL_resz00_2525;
					}
				else
					{	/* Ieee/output.scm 386 */
						obj_t BgL_vz00_2531;

						BgL_vz00_2531 = CAR(BgL_lz00_2524);
						bgl_display_obj(BgL_vz00_2531, BgL_portz00_25);
						{
							obj_t BgL_resz00_3984;

							obj_t BgL_lz00_3982;

							BgL_lz00_3982 = CDR(BgL_lz00_2524);
							BgL_resz00_3984 = BgL_vz00_2531;
							BgL_resz00_2525 = BgL_resz00_3984;
							BgL_lz00_2524 = BgL_lz00_3982;
							goto BgL_loopz00_2523;
						}
					}
			}
		}
	}



/* _fprint */
	obj_t BGl__fprintz00zz__r4_output_6_10_3z00(obj_t BgL_envz00_3559,
		obj_t BgL_portz00_3560, obj_t BgL_objz00_3561)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 385 */
			{	/* Ieee/output.scm 386 */
				obj_t BgL_auxz00_3985;

				if (OUTPUT_PORTP(BgL_portz00_3560))
					{	/* Ieee/output.scm 386 */
						BgL_auxz00_3985 = BgL_portz00_3560;
					}
				else
					{
						obj_t BgL_auxz00_3988;

						BgL_auxz00_3988 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 14850)),
							BGl_string2984z00zz__r4_output_6_10_3z00,
							BGl_string2969z00zz__r4_output_6_10_3z00, BgL_portz00_3560);
						FAILURE(BgL_auxz00_3988, BFALSE, BFALSE);
					}
				return
					BGl_fprintz00zz__r4_output_6_10_3z00(BgL_auxz00_3985,
					BgL_objz00_3561);
			}
		}
	}



/* xprintf */
	obj_t BGl_xprintfz00zz__r4_output_6_10_3z00(obj_t BgL_procnamez00_27,
		obj_t BgL_pz00_28, obj_t BgL_fmtz00_29, obj_t BgL_objsz00_30)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 399 */
			{	/* Ieee/output.scm 400 */
				long BgL_lenz00_1211;

				BgL_lenz00_1211 = STRING_LENGTH(BgL_fmtz00_29);
				{
					obj_t BgL_iz00_1213;

					obj_t BgL_osz00_1214;

					BgL_iz00_1213 = BINT(((long) 0));
					BgL_osz00_1214 = BgL_objsz00_30;
				BgL_zc3anonymousza31969ze3z83_1215:
					{
						obj_t BgL_iz00_1268;

						obj_t BgL_numz00_1269;

						long BgL_mincolz00_1270;

						unsigned char BgL_paddingz00_1271;

						long BgL_iz00_1283;

						obj_t BgL_numz00_1284;

						obj_t BgL_pz00_1285;

						unsigned char BgL_fz00_1302;

						long BgL_iz00_1303;

						bool_t BgL_altzf3zf3_1304;

						if (((long) CINT(BgL_iz00_1213) < BgL_lenz00_1211))
							{	/* Ieee/output.scm 521 */
								unsigned char BgL_cz00_1223;

								BgL_cz00_1223 =
									STRING_REF(BgL_fmtz00_29, (long) CINT(BgL_iz00_1213));
								if ((BgL_cz00_1223 == ((unsigned char) '~')))
									{	/* Ieee/output.scm 522 */
										if (
											((long) CINT(BgL_iz00_1213) ==
												(BgL_lenz00_1211 - ((long) 1))))
											{	/* Ieee/output.scm 524 */
												return
													BGl_errorz00zz__errorz00(BgL_procnamez00_27,
													BGl_string2992z00zz__r4_output_6_10_3z00,
													c_substring(BgL_fmtz00_29, (long) CINT(BgL_iz00_1213),
														BgL_lenz00_1211));
											}
										else
											{	/* Ieee/output.scm 524 */
												if (
													(((unsigned char) ':') ==
														STRING_REF(BgL_fmtz00_29,
															((long) CINT(BgL_iz00_1213) + ((long) 1)))))
													{	/* Ieee/output.scm 528 */
														if (
															((long) CINT(BgL_iz00_1213) ==
																(BgL_lenz00_1211 - ((long) 2))))
															{	/* Ieee/output.scm 529 */
																return
																	BGl_errorz00zz__errorz00(BgL_procnamez00_27,
																	BGl_string2992z00zz__r4_output_6_10_3z00,
																	c_substring(BgL_fmtz00_29,
																		(long) CINT(BgL_iz00_1213),
																		BgL_lenz00_1211));
															}
														else
															{	/* Ieee/output.scm 529 */
																BgL_fz00_1302 =
																	STRING_REF(BgL_fmtz00_29,
																	((long) CINT(BgL_iz00_1213) + ((long) 2)));
																BgL_iz00_1303 =
																	((long) CINT(BgL_iz00_1213) + ((long) 2));
																BgL_altzf3zf3_1304 = ((bool_t) 1);
															BgL_zc3anonymousza32031ze3z83_1305:
																{	/* Ieee/output.scm 466 */
																	bool_t BgL_testz00_4020;

																	if (
																		(BCHAR(BgL_fz00_1302) ==
																			BCHAR(((unsigned char) 'a'))))
																		{	/* Ieee/output.scm 466 */
																			BgL_testz00_4020 = ((bool_t) 1);
																		}
																	else
																		{	/* Ieee/output.scm 466 */
																			BgL_testz00_4020 =
																				(BCHAR(BgL_fz00_1302) ==
																				BCHAR(((unsigned char) 'A')));
																		}
																	if (BgL_testz00_4020)
																		{	/* Ieee/output.scm 466 */
																			if (BgL_altzf3zf3_1304)
																				{	/* Ieee/output.scm 469 */
																					obj_t BgL_arg2033z00_1308;

																					if (NULLP(BgL_osz00_1214))
																						{	/* Ieee/output.scm 469 */
																							BgL_arg2033z00_1308 =
																								BGl_errorz00zz__errorz00
																								(BgL_procnamez00_27,
																								BGl_string2985z00zz__r4_output_6_10_3z00,
																								BCHAR(BgL_fz00_1302));
																						}
																					else
																						{	/* Ieee/output.scm 469 */
																							BgL_arg2033z00_1308 =
																								CAR(BgL_osz00_1214);
																						}
																					BGl_displayzd2circlezd2zz__pp_circlez00
																						(BgL_arg2033z00_1308, BgL_pz00_28);
																				}
																			else
																				{	/* Ieee/output.scm 470 */
																					obj_t BgL_arg2034z00_1309;

																					if (NULLP(BgL_osz00_1214))
																						{	/* Ieee/output.scm 470 */
																							BgL_arg2034z00_1309 =
																								BGl_errorz00zz__errorz00
																								(BgL_procnamez00_27,
																								BGl_string2985z00zz__r4_output_6_10_3z00,
																								BCHAR(BgL_fz00_1302));
																						}
																					else
																						{	/* Ieee/output.scm 470 */
																							BgL_arg2034z00_1309 =
																								CAR(BgL_osz00_1214);
																						}
																					bgl_display_obj(BgL_arg2034z00_1309,
																						BgL_pz00_28);
																				}
																			{	/* Ieee/output.scm 471 */
																				long BgL_arg2036z00_1310;

																				obj_t BgL_arg2037z00_1311;

																				BgL_arg2036z00_1310 =
																					(BgL_iz00_1303 + ((long) 1));
																				BgL_arg2037z00_1311 =
																					CDR(BgL_osz00_1214);
																				{
																					obj_t BgL_osz00_4045;

																					obj_t BgL_iz00_4043;

																					BgL_iz00_4043 =
																						BINT(BgL_arg2036z00_1310);
																					BgL_osz00_4045 = BgL_arg2037z00_1311;
																					BgL_osz00_1214 = BgL_osz00_4045;
																					BgL_iz00_1213 = BgL_iz00_4043;
																					goto
																						BgL_zc3anonymousza31969ze3z83_1215;
																				}
																			}
																		}
																	else
																		{	/* Ieee/output.scm 466 */
																			bool_t BgL_testz00_4046;

																			if (
																				(BCHAR(BgL_fz00_1302) ==
																					BCHAR(((unsigned char) 's'))))
																				{	/* Ieee/output.scm 466 */
																					BgL_testz00_4046 = ((bool_t) 1);
																				}
																			else
																				{	/* Ieee/output.scm 466 */
																					BgL_testz00_4046 =
																						(BCHAR(BgL_fz00_1302) ==
																						BCHAR(((unsigned char) 'S')));
																				}
																			if (BgL_testz00_4046)
																				{	/* Ieee/output.scm 466 */
																					if (BgL_altzf3zf3_1304)
																						{	/* Ieee/output.scm 474 */
																							obj_t BgL_arg2039z00_1313;

																							if (NULLP(BgL_osz00_1214))
																								{	/* Ieee/output.scm 474 */
																									BgL_arg2039z00_1313 =
																										BGl_errorz00zz__errorz00
																										(BgL_procnamez00_27,
																										BGl_string2985z00zz__r4_output_6_10_3z00,
																										BCHAR(BgL_fz00_1302));
																								}
																							else
																								{	/* Ieee/output.scm 474 */
																									BgL_arg2039z00_1313 =
																										CAR(BgL_osz00_1214);
																								}
																							BGl_writezd2circlezd2zz__pp_circlez00
																								(BgL_arg2039z00_1313,
																								BgL_pz00_28);
																						}
																					else
																						{	/* Ieee/output.scm 475 */
																							obj_t BgL_arg2040z00_1314;

																							if (NULLP(BgL_osz00_1214))
																								{	/* Ieee/output.scm 475 */
																									BgL_arg2040z00_1314 =
																										BGl_errorz00zz__errorz00
																										(BgL_procnamez00_27,
																										BGl_string2985z00zz__r4_output_6_10_3z00,
																										BCHAR(BgL_fz00_1302));
																								}
																							else
																								{	/* Ieee/output.scm 475 */
																									BgL_arg2040z00_1314 =
																										CAR(BgL_osz00_1214);
																								}
																							{	/* Ieee/output.scm 475 */
																								obj_t BgL_list2041z00_1315;

																								BgL_list2041z00_1315 =
																									MAKE_PAIR(BgL_pz00_28, BNIL);
																								BGl_writez00zz__r4_output_6_10_3z00
																									(BgL_arg2040z00_1314,
																									BgL_list2041z00_1315);
																							}
																						}
																					{	/* Ieee/output.scm 476 */
																						long BgL_arg2042z00_1316;

																						obj_t BgL_arg2043z00_1317;

																						BgL_arg2042z00_1316 =
																							(BgL_iz00_1303 + ((long) 1));
																						BgL_arg2043z00_1317 =
																							CDR(BgL_osz00_1214);
																						{
																							obj_t BgL_osz00_4072;

																							obj_t BgL_iz00_4070;

																							BgL_iz00_4070 =
																								BINT(BgL_arg2042z00_1316);
																							BgL_osz00_4072 =
																								BgL_arg2043z00_1317;
																							BgL_osz00_1214 = BgL_osz00_4072;
																							BgL_iz00_1213 = BgL_iz00_4070;
																							goto
																								BgL_zc3anonymousza31969ze3z83_1215;
																						}
																					}
																				}
																			else
																				{	/* Ieee/output.scm 466 */
																					bool_t BgL_testz00_4073;

																					if (
																						(BCHAR(BgL_fz00_1302) ==
																							BCHAR(((unsigned char) 'v'))))
																						{	/* Ieee/output.scm 466 */
																							BgL_testz00_4073 = ((bool_t) 1);
																						}
																					else
																						{	/* Ieee/output.scm 466 */
																							BgL_testz00_4073 =
																								(BCHAR(BgL_fz00_1302) ==
																								BCHAR(((unsigned char) 'V')));
																						}
																					if (BgL_testz00_4073)
																						{	/* Ieee/output.scm 466 */
																							if (BgL_altzf3zf3_1304)
																								{	/* Ieee/output.scm 479 */
																									obj_t BgL_arg2045z00_1319;

																									if (NULLP(BgL_osz00_1214))
																										{	/* Ieee/output.scm 479 */
																											BgL_arg2045z00_1319 =
																												BGl_errorz00zz__errorz00
																												(BgL_procnamez00_27,
																												BGl_string2985z00zz__r4_output_6_10_3z00,
																												BCHAR(BgL_fz00_1302));
																										}
																									else
																										{	/* Ieee/output.scm 479 */
																											BgL_arg2045z00_1319 =
																												CAR(BgL_osz00_1214);
																										}
																									BGl_displayzd2circlezd2zz__pp_circlez00
																										(BgL_arg2045z00_1319,
																										BgL_pz00_28);
																								}
																							else
																								{	/* Ieee/output.scm 480 */
																									obj_t BgL_arg2046z00_1320;

																									if (NULLP(BgL_osz00_1214))
																										{	/* Ieee/output.scm 480 */
																											BgL_arg2046z00_1320 =
																												BGl_errorz00zz__errorz00
																												(BgL_procnamez00_27,
																												BGl_string2985z00zz__r4_output_6_10_3z00,
																												BCHAR(BgL_fz00_1302));
																										}
																									else
																										{	/* Ieee/output.scm 480 */
																											BgL_arg2046z00_1320 =
																												CAR(BgL_osz00_1214);
																										}
																									bgl_display_obj
																										(BgL_arg2046z00_1320,
																										BgL_pz00_28);
																								}
																							bgl_display_char(((unsigned char)
																									'\n'), BgL_pz00_28);
																							{	/* Ieee/output.scm 482 */
																								long BgL_arg2047z00_1321;

																								obj_t BgL_arg2048z00_1322;

																								BgL_arg2047z00_1321 =
																									(BgL_iz00_1303 + ((long) 1));
																								BgL_arg2048z00_1322 =
																									CDR(BgL_osz00_1214);
																								{
																									obj_t BgL_osz00_4099;

																									obj_t BgL_iz00_4097;

																									BgL_iz00_4097 =
																										BINT(BgL_arg2047z00_1321);
																									BgL_osz00_4099 =
																										BgL_arg2048z00_1322;
																									BgL_osz00_1214 =
																										BgL_osz00_4099;
																									BgL_iz00_1213 = BgL_iz00_4097;
																									goto
																										BgL_zc3anonymousza31969ze3z83_1215;
																								}
																							}
																						}
																					else
																						{	/* Ieee/output.scm 466 */
																							bool_t BgL_testz00_4100;

																							if (
																								(BCHAR(BgL_fz00_1302) ==
																									BCHAR(((unsigned char) 'c'))))
																								{	/* Ieee/output.scm 466 */
																									BgL_testz00_4100 =
																										((bool_t) 1);
																								}
																							else
																								{	/* Ieee/output.scm 466 */
																									BgL_testz00_4100 =
																										(BCHAR(BgL_fz00_1302) ==
																										BCHAR(((unsigned char)
																												'C')));
																								}
																							if (BgL_testz00_4100)
																								{	/* Ieee/output.scm 484 */
																									obj_t BgL_oz00_1324;

																									if (NULLP(BgL_osz00_1214))
																										{	/* Ieee/output.scm 484 */
																											BgL_oz00_1324 =
																												BGl_errorz00zz__errorz00
																												(BgL_procnamez00_27,
																												BGl_string2985z00zz__r4_output_6_10_3z00,
																												BCHAR(BgL_fz00_1302));
																										}
																									else
																										{	/* Ieee/output.scm 484 */
																											BgL_oz00_1324 =
																												CAR(BgL_osz00_1214);
																										}
																									if (CHARP(BgL_oz00_1324))
																										{	/* Ieee/output.scm 485 */
																											{	/* Ieee/output.scm 488 */
																												unsigned char
																													BgL_auxz00_4115;
																												BgL_auxz00_4115 =
																													CCHAR(BgL_oz00_1324);
																												bgl_display_char
																													(BgL_auxz00_4115,
																													BgL_pz00_28);
																											}
																											{	/* Ieee/output.scm 489 */
																												long
																													BgL_arg2051z00_1326;
																												obj_t
																													BgL_arg2052z00_1327;
																												BgL_arg2051z00_1326 =
																													(BgL_iz00_1303 +
																													((long) 1));
																												BgL_arg2052z00_1327 =
																													CDR(BgL_osz00_1214);
																												{
																													obj_t BgL_osz00_4122;

																													obj_t BgL_iz00_4120;

																													BgL_iz00_4120 =
																														BINT
																														(BgL_arg2051z00_1326);
																													BgL_osz00_4122 =
																														BgL_arg2052z00_1327;
																													BgL_osz00_1214 =
																														BgL_osz00_4122;
																													BgL_iz00_1213 =
																														BgL_iz00_4120;
																													goto
																														BgL_zc3anonymousza31969ze3z83_1215;
																												}
																											}
																										}
																									else
																										{	/* Ieee/output.scm 485 */
																											return
																												BGl_errorz00zz__errorz00
																												(BgL_procnamez00_27,
																												BGl_string2986z00zz__r4_output_6_10_3z00,
																												BgL_oz00_1324);
																										}
																								}
																							else
																								{	/* Ieee/output.scm 466 */
																									bool_t BgL_testz00_4124;

																									if (
																										(BCHAR(BgL_fz00_1302) ==
																											BCHAR(((unsigned char)
																													'd'))))
																										{	/* Ieee/output.scm 466 */
																											BgL_testz00_4124 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Ieee/output.scm 466 */
																											BgL_testz00_4124 =
																												(BCHAR(BgL_fz00_1302) ==
																												BCHAR(((unsigned char)
																														'D')));
																										}
																									if (BgL_testz00_4124)
																										{	/* Ieee/output.scm 466 */
																											{	/* Ieee/output.scm 491 */
																												obj_t
																													BgL_arg2055z00_1330;
																												if (NULLP
																													(BgL_osz00_1214))
																													{	/* Ieee/output.scm 491 */
																														BgL_arg2055z00_1330
																															=
																															BGl_errorz00zz__errorz00
																															(BgL_procnamez00_27,
																															BGl_string2985z00zz__r4_output_6_10_3z00,
																															BCHAR
																															(BgL_fz00_1302));
																													}
																												else
																													{	/* Ieee/output.scm 491 */
																														BgL_arg2055z00_1330
																															=
																															CAR
																															(BgL_osz00_1214);
																													}
																												if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_arg2055z00_1330))
																													{	/* Ieee/output.scm 491 */
																														char
																															*BgL_arg1995z00_2734;
																														BgL_arg1995z00_2734
																															=
																															BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																															(BgL_arg2055z00_1330,
																															BINT(((long)
																																	10)));
																														bgl_display_obj
																															(string_to_bstring
																															(BgL_arg1995z00_2734),
																															BgL_pz00_28);
																													}
																												else
																													{	/* Ieee/output.scm 491 */
																														BGl_errorz00zz__errorz00
																															(BgL_procnamez00_27,
																															BGl_string2987z00zz__r4_output_6_10_3z00,
																															BgL_arg2055z00_1330);
																													}
																											}
																											{	/* Ieee/output.scm 492 */
																												long
																													BgL_arg2056z00_1331;
																												obj_t
																													BgL_arg2057z00_1332;
																												BgL_arg2056z00_1331 =
																													(BgL_iz00_1303 +
																													((long) 1));
																												BgL_arg2057z00_1332 =
																													CDR(BgL_osz00_1214);
																												{
																													obj_t BgL_osz00_4148;

																													obj_t BgL_iz00_4146;

																													BgL_iz00_4146 =
																														BINT
																														(BgL_arg2056z00_1331);
																													BgL_osz00_4148 =
																														BgL_arg2057z00_1332;
																													BgL_osz00_1214 =
																														BgL_osz00_4148;
																													BgL_iz00_1213 =
																														BgL_iz00_4146;
																													goto
																														BgL_zc3anonymousza31969ze3z83_1215;
																												}
																											}
																										}
																									else
																										{	/* Ieee/output.scm 466 */
																											bool_t BgL_testz00_4149;

																											if (
																												(BCHAR(BgL_fz00_1302) ==
																													BCHAR(((unsigned char)
																															'x'))))
																												{	/* Ieee/output.scm 466 */
																													BgL_testz00_4149 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Ieee/output.scm 466 */
																													BgL_testz00_4149 =
																														(BCHAR
																														(BgL_fz00_1302) ==
																														BCHAR(((unsigned
																																	char) 'X')));
																												}
																											if (BgL_testz00_4149)
																												{	/* Ieee/output.scm 466 */
																													{	/* Ieee/output.scm 494 */
																														obj_t
																															BgL_arg2060z00_1335;
																														if (NULLP
																															(BgL_osz00_1214))
																															{	/* Ieee/output.scm 494 */
																																BgL_arg2060z00_1335
																																	=
																																	BGl_errorz00zz__errorz00
																																	(BgL_procnamez00_27,
																																	BGl_string2985z00zz__r4_output_6_10_3z00,
																																	BCHAR
																																	(BgL_fz00_1302));
																															}
																														else
																															{	/* Ieee/output.scm 494 */
																																BgL_arg2060z00_1335
																																	=
																																	CAR
																																	(BgL_osz00_1214);
																															}
																														if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_arg2060z00_1335))
																															{	/* Ieee/output.scm 494 */
																																char
																																	*BgL_arg1995z00_2750;
																																BgL_arg1995z00_2750
																																	=
																																	BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																																	(BgL_arg2060z00_1335,
																																	BINT(((long)
																																			16)));
																																bgl_display_obj
																																	(string_to_bstring
																																	(BgL_arg1995z00_2750),
																																	BgL_pz00_28);
																															}
																														else
																															{	/* Ieee/output.scm 494 */
																																BGl_errorz00zz__errorz00
																																	(BgL_procnamez00_27,
																																	BGl_string2987z00zz__r4_output_6_10_3z00,
																																	BgL_arg2060z00_1335);
																															}
																													}
																													{	/* Ieee/output.scm 495 */
																														long
																															BgL_arg2061z00_1336;
																														obj_t
																															BgL_arg2062z00_1337;
																														BgL_arg2061z00_1336
																															=
																															(BgL_iz00_1303 +
																															((long) 1));
																														BgL_arg2062z00_1337
																															=
																															CDR
																															(BgL_osz00_1214);
																														{
																															obj_t
																																BgL_osz00_4173;
																															obj_t
																																BgL_iz00_4171;
																															BgL_iz00_4171 =
																																BINT
																																(BgL_arg2061z00_1336);
																															BgL_osz00_4173 =
																																BgL_arg2062z00_1337;
																															BgL_osz00_1214 =
																																BgL_osz00_4173;
																															BgL_iz00_1213 =
																																BgL_iz00_4171;
																															goto
																																BgL_zc3anonymousza31969ze3z83_1215;
																														}
																													}
																												}
																											else
																												{	/* Ieee/output.scm 466 */
																													bool_t
																														BgL_testz00_4174;
																													if ((BCHAR
																															(BgL_fz00_1302) ==
																															BCHAR(((unsigned
																																		char)
																																	'o'))))
																														{	/* Ieee/output.scm 466 */
																															BgL_testz00_4174 =
																																((bool_t) 1);
																														}
																													else
																														{	/* Ieee/output.scm 466 */
																															BgL_testz00_4174 =
																																(BCHAR
																																(BgL_fz00_1302)
																																==
																																BCHAR(((unsigned
																																			char)
																																		'O')));
																														}
																													if (BgL_testz00_4174)
																														{	/* Ieee/output.scm 466 */
																															{	/* Ieee/output.scm 497 */
																																obj_t
																																	BgL_arg2065z00_1340;
																																if (NULLP
																																	(BgL_osz00_1214))
																																	{	/* Ieee/output.scm 497 */
																																		BgL_arg2065z00_1340
																																			=
																																			BGl_errorz00zz__errorz00
																																			(BgL_procnamez00_27,
																																			BGl_string2985z00zz__r4_output_6_10_3z00,
																																			BCHAR
																																			(BgL_fz00_1302));
																																	}
																																else
																																	{	/* Ieee/output.scm 497 */
																																		BgL_arg2065z00_1340
																																			=
																																			CAR
																																			(BgL_osz00_1214);
																																	}
																																if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_arg2065z00_1340))
																																	{	/* Ieee/output.scm 497 */
																																		char
																																			*BgL_arg1995z00_2766;
																																		BgL_arg1995z00_2766
																																			=
																																			BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																																			(BgL_arg2065z00_1340,
																																			BINT((
																																					(long)
																																					8)));
																																		bgl_display_obj
																																			(string_to_bstring
																																			(BgL_arg1995z00_2766),
																																			BgL_pz00_28);
																																	}
																																else
																																	{	/* Ieee/output.scm 497 */
																																		BGl_errorz00zz__errorz00
																																			(BgL_procnamez00_27,
																																			BGl_string2987z00zz__r4_output_6_10_3z00,
																																			BgL_arg2065z00_1340);
																																	}
																															}
																															{	/* Ieee/output.scm 498 */
																																long
																																	BgL_arg2066z00_1341;
																																obj_t
																																	BgL_arg2067z00_1342;
																																BgL_arg2066z00_1341
																																	=
																																	(BgL_iz00_1303
																																	+ ((long) 1));
																																BgL_arg2067z00_1342
																																	=
																																	CDR
																																	(BgL_osz00_1214);
																																{
																																	obj_t
																																		BgL_osz00_4198;
																																	obj_t
																																		BgL_iz00_4196;
																																	BgL_iz00_4196
																																		=
																																		BINT
																																		(BgL_arg2066z00_1341);
																																	BgL_osz00_4198
																																		=
																																		BgL_arg2067z00_1342;
																																	BgL_osz00_1214
																																		=
																																		BgL_osz00_4198;
																																	BgL_iz00_1213
																																		=
																																		BgL_iz00_4196;
																																	goto
																																		BgL_zc3anonymousza31969ze3z83_1215;
																																}
																															}
																														}
																													else
																														{	/* Ieee/output.scm 466 */
																															bool_t
																																BgL_testz00_4199;
																															if ((BCHAR
																																	(BgL_fz00_1302)
																																	==
																																	BCHAR((
																																			(unsigned
																																				char)
																																			'b'))))
																																{	/* Ieee/output.scm 466 */
																																	BgL_testz00_4199
																																		=
																																		((bool_t)
																																		1);
																																}
																															else
																																{	/* Ieee/output.scm 466 */
																																	BgL_testz00_4199
																																		=
																																		(BCHAR
																																		(BgL_fz00_1302)
																																		==
																																		BCHAR((
																																				(unsigned
																																					char)
																																				'B')));
																																}
																															if (BgL_testz00_4199)
																																{	/* Ieee/output.scm 466 */
																																	{	/* Ieee/output.scm 500 */
																																		obj_t
																																			BgL_arg2070z00_1345;
																																		if (NULLP
																																			(BgL_osz00_1214))
																																			{	/* Ieee/output.scm 500 */
																																				BgL_arg2070z00_1345
																																					=
																																					BGl_errorz00zz__errorz00
																																					(BgL_procnamez00_27,
																																					BGl_string2985z00zz__r4_output_6_10_3z00,
																																					BCHAR
																																					(BgL_fz00_1302));
																																			}
																																		else
																																			{	/* Ieee/output.scm 500 */
																																				BgL_arg2070z00_1345
																																					=
																																					CAR
																																					(BgL_osz00_1214);
																																			}
																																		if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_arg2070z00_1345))
																																			{	/* Ieee/output.scm 500 */
																																				char
																																					*BgL_arg1995z00_2782;
																																				BgL_arg1995z00_2782
																																					=
																																					BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																																					(BgL_arg2070z00_1345,
																																					BINT((
																																							(long)
																																							2)));
																																				bgl_display_obj
																																					(string_to_bstring
																																					(BgL_arg1995z00_2782),
																																					BgL_pz00_28);
																																			}
																																		else
																																			{	/* Ieee/output.scm 500 */
																																				BGl_errorz00zz__errorz00
																																					(BgL_procnamez00_27,
																																					BGl_string2987z00zz__r4_output_6_10_3z00,
																																					BgL_arg2070z00_1345);
																																			}
																																	}
																																	{	/* Ieee/output.scm 501 */
																																		long
																																			BgL_arg2072z00_1346;
																																		obj_t
																																			BgL_arg2073z00_1347;
																																		BgL_arg2072z00_1346
																																			=
																																			(BgL_iz00_1303
																																			+
																																			((long)
																																				1));
																																		BgL_arg2073z00_1347
																																			=
																																			CDR
																																			(BgL_osz00_1214);
																																		{
																																			obj_t
																																				BgL_osz00_4223;
																																			obj_t
																																				BgL_iz00_4221;
																																			BgL_iz00_4221
																																				=
																																				BINT
																																				(BgL_arg2072z00_1346);
																																			BgL_osz00_4223
																																				=
																																				BgL_arg2073z00_1347;
																																			BgL_osz00_1214
																																				=
																																				BgL_osz00_4223;
																																			BgL_iz00_1213
																																				=
																																				BgL_iz00_4221;
																																			goto
																																				BgL_zc3anonymousza31969ze3z83_1215;
																																		}
																																	}
																																}
																															else
																																{	/* Ieee/output.scm 466 */
																																	bool_t
																																		BgL_testz00_4224;
																																	if ((BCHAR
																																			(BgL_fz00_1302)
																																			==
																																			BCHAR((
																																					(unsigned
																																						char)
																																					'%'))))
																																		{	/* Ieee/output.scm 466 */
																																			BgL_testz00_4224
																																				=
																																				(
																																				(bool_t)
																																				1);
																																		}
																																	else
																																		{	/* Ieee/output.scm 466 */
																																			BgL_testz00_4224
																																				=
																																				(BCHAR
																																				(BgL_fz00_1302)
																																				==
																																				BCHAR((
																																						(unsigned
																																							char)
																																						'n')));
																																		}
																																	if (BgL_testz00_4224)
																																		{	/* Ieee/output.scm 466 */
																																			bgl_display_char
																																				(((unsigned char) '\n'), BgL_pz00_28);
																																			{	/* Ieee/output.scm 504 */
																																				long
																																					BgL_arg2076z00_1349;
																																				BgL_arg2076z00_1349
																																					=
																																					(BgL_iz00_1303
																																					+
																																					((long) 1));
																																				{
																																					obj_t
																																						BgL_iz00_4234;
																																					BgL_iz00_4234
																																						=
																																						BINT
																																						(BgL_arg2076z00_1349);
																																					BgL_iz00_1213
																																						=
																																						BgL_iz00_4234;
																																					goto
																																						BgL_zc3anonymousza31969ze3z83_1215;
																																				}
																																			}
																																		}
																																	else
																																		{	/* Ieee/output.scm 466 */
																																			if (
																																				(BCHAR
																																					(BgL_fz00_1302)
																																					==
																																					BCHAR(
																																						((unsigned char) 'r'))))
																																				{	/* Ieee/output.scm 466 */
																																					bgl_display_char
																																						(((unsigned char) '\r'), BgL_pz00_28);
																																					{	/* Ieee/output.scm 507 */
																																						long
																																							BgL_arg2078z00_1351;
																																						BgL_arg2078z00_1351
																																							=
																																							(BgL_iz00_1303
																																							+
																																							((long) 1));
																																						{
																																							obj_t
																																								BgL_iz00_4242;
																																							BgL_iz00_4242
																																								=
																																								BINT
																																								(BgL_arg2078z00_1351);
																																							BgL_iz00_1213
																																								=
																																								BgL_iz00_4242;
																																							goto
																																								BgL_zc3anonymousza31969ze3z83_1215;
																																						}
																																					}
																																				}
																																			else
																																				{	/* Ieee/output.scm 466 */
																																					bool_t
																																						BgL_testz00_4244;
																																					if (
																																						(BCHAR
																																							(BgL_fz00_1302)
																																							==
																																							BCHAR
																																							(((unsigned char) 'l'))))
																																						{	/* Ieee/output.scm 466 */
																																							BgL_testz00_4244
																																								=
																																								(
																																								(bool_t)
																																								1);
																																						}
																																					else
																																						{	/* Ieee/output.scm 466 */
																																							BgL_testz00_4244
																																								=
																																								(BCHAR
																																								(BgL_fz00_1302)
																																								==
																																								BGl_symbol2988z00zz__r4_output_6_10_3z00);
																																						}
																																					if (BgL_testz00_4244)
																																						{	/* Ieee/output.scm 466 */
																																							{	/* Ieee/output.scm 509 */
																																								obj_t
																																									BgL_arg2080z00_1353;
																																								if (NULLP(BgL_osz00_1214))
																																									{	/* Ieee/output.scm 509 */
																																										BgL_arg2080z00_1353
																																											=
																																											BGl_errorz00zz__errorz00
																																											(BgL_procnamez00_27,
																																											BGl_string2985z00zz__r4_output_6_10_3z00,
																																											BCHAR
																																											(BgL_fz00_1302));
																																									}
																																								else
																																									{	/* Ieee/output.scm 509 */
																																										BgL_arg2080z00_1353
																																											=
																																											CAR
																																											(BgL_osz00_1214);
																																									}
																																								BGl_printzd2flatzd2listz00zz__r4_output_6_10_3z00
																																									(BgL_arg2080z00_1353,
																																									BgL_pz00_28);
																																							}
																																							{	/* Ieee/output.scm 510 */
																																								long
																																									BgL_arg2081z00_1354;
																																								obj_t
																																									BgL_arg2082z00_1355;
																																								BgL_arg2081z00_1354
																																									=
																																									(BgL_iz00_1303
																																									+
																																									((long) 1));
																																								BgL_arg2082z00_1355
																																									=
																																									CDR
																																									(BgL_osz00_1214);
																																								{
																																									obj_t
																																										BgL_osz00_4261;
																																									obj_t
																																										BgL_iz00_4259;
																																									BgL_iz00_4259
																																										=
																																										BINT
																																										(BgL_arg2081z00_1354);
																																									BgL_osz00_4261
																																										=
																																										BgL_arg2082z00_1355;
																																									BgL_osz00_1214
																																										=
																																										BgL_osz00_4261;
																																									BgL_iz00_1213
																																										=
																																										BgL_iz00_4259;
																																									goto
																																										BgL_zc3anonymousza31969ze3z83_1215;
																																								}
																																							}
																																						}
																																					else
																																						{	/* Ieee/output.scm 466 */
																																							if ((BCHAR(BgL_fz00_1302) == BCHAR(((unsigned char) '~'))))
																																								{	/* Ieee/output.scm 466 */
																																									bgl_display_char
																																										(
																																										((unsigned char) '~'), BgL_pz00_28);
																																									{	/* Ieee/output.scm 513 */
																																										long
																																											BgL_arg2084z00_1357;
																																										BgL_arg2084z00_1357
																																											=
																																											(BgL_iz00_1303
																																											+
																																											((long) 1));
																																										{
																																											obj_t
																																												BgL_iz00_4268;
																																											BgL_iz00_4268
																																												=
																																												BINT
																																												(BgL_arg2084z00_1357);
																																											BgL_iz00_1213
																																												=
																																												BgL_iz00_4268;
																																											goto
																																												BgL_zc3anonymousza31969ze3z83_1215;
																																										}
																																									}
																																								}
																																							else
																																								{	/* Ieee/output.scm 466 */
																																									if (isdigit(BgL_fz00_1302))
																																										{	/* Ieee/output.scm 516 */
																																											obj_t
																																												BgL_niz00_1359;
																																											{	/* Ieee/output.scm 516 */
																																												obj_t
																																													BgL_arg2089z00_1361;
																																												if (NULLP(BgL_osz00_1214))
																																													{	/* Ieee/output.scm 516 */
																																														BgL_arg2089z00_1361
																																															=
																																															BGl_errorz00zz__errorz00
																																															(BgL_procnamez00_27,
																																															BGl_string2985z00zz__r4_output_6_10_3z00,
																																															BCHAR
																																															(BgL_fz00_1302));
																																													}
																																												else
																																													{	/* Ieee/output.scm 516 */
																																														BgL_arg2089z00_1361
																																															=
																																															CAR
																																															(BgL_osz00_1214);
																																													}
																																												BgL_iz00_1283
																																													=
																																													BgL_iz00_1303;
																																												BgL_numz00_1284
																																													=
																																													BgL_arg2089z00_1361;
																																												BgL_pz00_1285
																																													=
																																													BgL_pz00_28;
																																												if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_numz00_1284))
																																													{	/* Ieee/output.scm 447 */
																																														obj_t
																																															BgL_jz00_1288;
																																														BgL_jz00_1288
																																															=
																																															BGl_stringzd2skipzd2zz__r4_strings_6_7z00
																																															(BgL_fmtz00_29,
																																															BGl_string2991z00zz__r4_output_6_10_3z00,
																																															BINT
																																															(BgL_iz00_1283));
																																														if (CBOOL(BgL_jz00_1288))
																																															{	/* Ieee/output.scm 449 */
																																																if ((STRING_REF(BgL_fmtz00_29, (long) CINT(BgL_jz00_1288)) == ((unsigned char) ',')))
																																																	{	/* Ieee/output.scm 451 */
																																																		if (((long) CINT(BgL_jz00_1288) == (BgL_lenz00_1211 - ((long) 1))))
																																																			{	/* Ieee/output.scm 452 */
																																																				BgL_niz00_1359
																																																					=
																																																					BGl_errorz00zz__errorz00
																																																					(BgL_procnamez00_27,
																																																					BGl_string2990z00zz__r4_output_6_10_3z00,
																																																					BgL_fmtz00_29);
																																																			}
																																																		else
																																																			{	/* Ieee/output.scm 454 */
																																																				long
																																																					BgL_arg2018z00_1291;
																																																				long
																																																					BgL_arg2019z00_1292;
																																																				unsigned
																																																					char
																																																					BgL_arg2021z00_1293;
																																																				BgL_arg2018z00_1291
																																																					=
																																																					(
																																																					(long)
																																																					CINT
																																																					(BgL_jz00_1288)
																																																					+
																																																					((long) 2));
																																																				BgL_arg2019z00_1292
																																																					=
																																																					BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00
																																																					(c_substring
																																																					(BgL_fmtz00_29,
																																																						BgL_iz00_1283,
																																																						(long)
																																																						CINT
																																																						(BgL_jz00_1288)),
																																																					BNIL);
																																																				BgL_arg2021z00_1293
																																																					=
																																																					STRING_REF
																																																					(BgL_fmtz00_29,
																																																					((long) CINT(BgL_jz00_1288) + ((long) 1)));
																																																				BgL_iz00_1268
																																																					=
																																																					BINT
																																																					(BgL_arg2018z00_1291);
																																																				BgL_numz00_1269
																																																					=
																																																					BgL_numz00_1284;
																																																				BgL_mincolz00_1270
																																																					=
																																																					BgL_arg2019z00_1292;
																																																				BgL_paddingz00_1271
																																																					=
																																																					BgL_arg2021z00_1293;
																																																			BgL_zc3anonymousza32007ze3z83_1272:
																																																				if (((long) CINT(BgL_iz00_1268) == BgL_lenz00_1211))
																																																					{	/* Ieee/output.scm 426 */
																																																						BgL_niz00_1359
																																																							=
																																																							BGl_errorz00zz__errorz00
																																																							(BgL_procnamez00_27,
																																																							BGl_string2990z00zz__r4_output_6_10_3z00,
																																																							BgL_fmtz00_29);
																																																					}
																																																				else
																																																					{	/* Ieee/output.scm 428 */
																																																						obj_t
																																																							BgL_sz00_1274;
																																																						{	/* Ieee/output.scm 428 */
																																																							unsigned
																																																								char
																																																								BgL_aux1831z00_1281;
																																																							BgL_aux1831z00_1281
																																																								=
																																																								STRING_REF
																																																								(BgL_fmtz00_29,
																																																								(long)
																																																								CINT
																																																								(BgL_iz00_1268));
																																																							switch
																																																								(BgL_aux1831z00_1281)
																																																								{
																																																								case ((unsigned char) 'd'):
																																																								case ((unsigned char) 'D'):

																																																									BgL_sz00_1274 = string_to_bstring(BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_numz00_1269, BINT(((long) 10))));
																																																									break;
																																																								case ((unsigned char) 'x'):
																																																								case ((unsigned char) 'X'):

																																																									BgL_sz00_1274 = string_to_bstring(BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_numz00_1269, BINT(((long) 16))));
																																																									break;
																																																								case ((unsigned char) 'o'):
																																																								case ((unsigned char) 'O'):

																																																									BgL_sz00_1274 = string_to_bstring(BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_numz00_1269, BINT(((long) 8))));
																																																									break;
																																																								case ((unsigned char) 'b'):
																																																								case ((unsigned char) 'B'):

																																																									BgL_sz00_1274 = string_to_bstring(BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_numz00_1269, BINT(((long) 2))));
																																																									break;
																																																								default:
																																																									BgL_sz00_1274 = BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string2990z00zz__r4_output_6_10_3z00, BgL_fmtz00_29);
																																																								}
																																																						}
																																																						{	/* Ieee/output.scm 428 */
																																																							long
																																																								BgL_lz00_1275;
																																																							BgL_lz00_1275
																																																								=
																																																								STRING_LENGTH
																																																								(BgL_sz00_1274);
																																																							{	/* Ieee/output.scm 439 */

																																																								if ((BgL_lz00_1275 < BgL_mincolz00_1270))
																																																									{	/* Ieee/output.scm 441 */
																																																										obj_t
																																																											BgL_arg2010z00_1277;
																																																										{	/* Ieee/output.scm 441 */
																																																											long
																																																												BgL_arg2011z00_1278;
																																																											BgL_arg2011z00_1278
																																																												=
																																																												(BgL_mincolz00_1270
																																																												-
																																																												BgL_lz00_1275);
																																																											{	/* Ieee/output.scm 441 */
																																																												obj_t
																																																													BgL_list2012z00_1279;
																																																												BgL_list2012z00_1279
																																																													=
																																																													MAKE_PAIR
																																																													(BCHAR
																																																													(BgL_paddingz00_1271),
																																																													BNIL);
																																																												{	/* Ieee/output.scm 441 */
																																																													obj_t
																																																														BgL_res2859z00_2632;
																																																													{	/* Ieee/output.scm 441 */
																																																														obj_t
																																																															BgL_arg2447z00_2629;
																																																														BgL_arg2447z00_2629
																																																															=
																																																															CAR
																																																															(BgL_list2012z00_1279);
																																																														BgL_res2859z00_2632
																																																															=
																																																															make_string
																																																															(BgL_arg2011z00_1278,
																																																															CCHAR
																																																															(BgL_arg2447z00_2629));
																																																													}
																																																													BgL_arg2010z00_1277
																																																														=
																																																														BgL_res2859z00_2632;
																																																										}}}
																																																										bgl_display_obj
																																																											(BgL_arg2010z00_1277,
																																																											BgL_pz00_28);
																																																									}
																																																								else
																																																									{	/* Ieee/output.scm 440 */
																																																										BFALSE;
																																																									}
																																																								bgl_display_obj
																																																									(BgL_sz00_1274,
																																																									BgL_pz00_28);
																																																								BgL_niz00_1359
																																																									=
																																																									BINT
																																																									(
																																																									((long) CINT(BgL_iz00_1268) + ((long) 1)));
																																																	}}}}}
																																																else
																																																	{
																																																		unsigned
																																																			char
																																																			BgL_paddingz00_4341;
																																																		long
																																																			BgL_mincolz00_4337;
																																																		obj_t
																																																			BgL_numz00_4336;
																																																		obj_t
																																																			BgL_iz00_4335;
																																																		BgL_iz00_4335
																																																			=
																																																			BgL_jz00_1288;
																																																		BgL_numz00_4336
																																																			=
																																																			BgL_numz00_1284;
																																																		BgL_mincolz00_4337
																																																			=
																																																			BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00
																																																			(c_substring
																																																			(BgL_fmtz00_29,
																																																				BgL_iz00_1283,
																																																				(long)
																																																				CINT
																																																				(BgL_jz00_1288)),
																																																			BNIL);
																																																		BgL_paddingz00_4341
																																																			=
																																																			(
																																																			(unsigned
																																																				char)
																																																			' ');
																																																		BgL_paddingz00_1271
																																																			=
																																																			BgL_paddingz00_4341;
																																																		BgL_mincolz00_1270
																																																			=
																																																			BgL_mincolz00_4337;
																																																		BgL_numz00_1269
																																																			=
																																																			BgL_numz00_4336;
																																																		BgL_iz00_1268
																																																			=
																																																			BgL_iz00_4335;
																																																		goto
																																																			BgL_zc3anonymousza32007ze3z83_1272;
																																																	}
																																															}
																																														else
																																															{	/* Ieee/output.scm 449 */
																																																BgL_niz00_1359
																																																	=
																																																	BGl_errorz00zz__errorz00
																																																	(BgL_procnamez00_27,
																																																	BGl_string2990z00zz__r4_output_6_10_3z00,
																																																	BgL_fmtz00_29);
																																															}
																																													}
																																												else
																																													{	/* Ieee/output.scm 445 */
																																														BgL_niz00_1359
																																															=
																																															BGl_errorz00zz__errorz00
																																															(BgL_procnamez00_27,
																																															BGl_string2987z00zz__r4_output_6_10_3z00,
																																															BgL_numz00_1284);
																																													}
																																											}
																																											{
																																												obj_t
																																													BgL_osz00_4345;
																																												obj_t
																																													BgL_iz00_4344;
																																												BgL_iz00_4344
																																													=
																																													BgL_niz00_1359;
																																												BgL_osz00_4345
																																													=
																																													CDR
																																													(BgL_osz00_1214);
																																												BgL_osz00_1214
																																													=
																																													BgL_osz00_4345;
																																												BgL_iz00_1213
																																													=
																																													BgL_iz00_4344;
																																												goto
																																													BgL_zc3anonymousza31969ze3z83_1215;
																																											}
																																										}
																																									else
																																										{	/* Ieee/output.scm 515 */
																																											return
																																												BGl_errorz00zz__errorz00
																																												(BgL_procnamez00_27,
																																												BGl_string2990z00zz__r4_output_6_10_3z00,
																																												BCHAR
																																												(BgL_fz00_1302));
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
																						}
																				}
																		}
																}
															}
													}
												else
													{
														bool_t BgL_altzf3zf3_4361;

														long BgL_iz00_4358;

														unsigned char BgL_fz00_4354;

														BgL_fz00_4354 =
															STRING_REF(BgL_fmtz00_29,
															((long) CINT(BgL_iz00_1213) + ((long) 1)));
														BgL_iz00_4358 =
															((long) CINT(BgL_iz00_1213) + ((long) 1));
														BgL_altzf3zf3_4361 = ((bool_t) 0);
														BgL_altzf3zf3_1304 = BgL_altzf3zf3_4361;
														BgL_iz00_1303 = BgL_iz00_4358;
														BgL_fz00_1302 = BgL_fz00_4354;
														goto BgL_zc3anonymousza32031ze3z83_1305;
													}
											}
									}
								else
									{	/* Ieee/output.scm 522 */
										bgl_display_char(BgL_cz00_1223, BgL_pz00_28);
										{	/* Ieee/output.scm 542 */
											long BgL_arg1990z00_1242;

											BgL_arg1990z00_1242 =
												((long) CINT(BgL_iz00_1213) + ((long) 1));
											{
												obj_t BgL_iz00_4365;

												BgL_iz00_4365 = BINT(BgL_arg1990z00_1242);
												BgL_iz00_1213 = BgL_iz00_4365;
												goto BgL_zc3anonymousza31969ze3z83_1215;
											}
										}
									}
							}
						else
							{	/* Ieee/output.scm 520 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* print-flat-list */
	obj_t BGl_printzd2flatzd2listz00zz__r4_output_6_10_3z00(obj_t BgL_lz00_1252,
		obj_t BgL_pz00_1253)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 424 */
		BGl_printzd2flatzd2listz00zz__r4_output_6_10_3z00:
			if (PAIRP(BgL_lz00_1252))
				{
					obj_t BgL_lz00_1257;

					BgL_lz00_1257 = BgL_lz00_1252;
				BgL_zc3anonymousza31998ze3z83_1258:
					BGl_printzd2flatzd2listz00zz__r4_output_6_10_3z00(CAR(BgL_lz00_1257),
						BgL_pz00_1253);
					{	/* Ieee/output.scm 417 */
						bool_t BgL_testz00_4372;

						{	/* Ieee/output.scm 417 */
							obj_t BgL_auxz00_4373;

							BgL_auxz00_4373 = CDR(BgL_lz00_1257);
							BgL_testz00_4372 = PAIRP(BgL_auxz00_4373);
						}
						if (BgL_testz00_4372)
							{	/* Ieee/output.scm 417 */
								bgl_display_string(BGl_string2993z00zz__r4_output_6_10_3z00,
									BgL_pz00_1253);
								{
									obj_t BgL_lz00_4377;

									BgL_lz00_4377 = CDR(BgL_lz00_1257);
									BgL_lz00_1257 = BgL_lz00_4377;
									goto BgL_zc3anonymousza31998ze3z83_1258;
								}
							}
						else
							{	/* Ieee/output.scm 417 */
								if (NULLP(CDR(BgL_lz00_1257)))
									{	/* Ieee/output.scm 420 */
										return BFALSE;
									}
								else
									{	/* Ieee/output.scm 420 */
										bgl_display_string(BGl_string2994z00zz__r4_output_6_10_3z00,
											BgL_pz00_1253);
										{
											obj_t BgL_lz00_4383;

											BgL_lz00_4383 = CDR(BgL_lz00_1257);
											BgL_lz00_1252 = BgL_lz00_4383;
											goto BGl_printzd2flatzd2listz00zz__r4_output_6_10_3z00;
										}
									}
							}
					}
				}
			else
				{	/* Ieee/output.scm 413 */
					if (NULLP(BgL_lz00_1252))
						{	/* Ieee/output.scm 423 */
							return BFALSE;
						}
					else
						{	/* Ieee/output.scm 423 */
							return bgl_display_obj(BgL_lz00_1252, BgL_pz00_1253);
						}
				}
		}
	}



/* format */
	BGL_EXPORTED_DEF obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t
		BgL_fmtz00_31, obj_t BgL_objz00_32)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 547 */
			{	/* Ieee/output.scm 548 */
				obj_t BgL_pz00_2824;

				{	/* Ieee/output.scm 548 */

					{	/* Ieee/output.scm 548 */

						BgL_pz00_2824 =
							BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BTRUE);
					}
				}
				BGl_xprintfz00zz__r4_output_6_10_3z00
					(BGl_symbol2995z00zz__r4_output_6_10_3z00, BgL_pz00_2824,
					BgL_fmtz00_31, BgL_objz00_32);
				return bgl_close_output_port(BgL_pz00_2824);
			}
		}
	}



/* _format */
	obj_t BGl__formatz00zz__r4_output_6_10_3z00(obj_t BgL_envz00_3562,
		obj_t BgL_fmtz00_3563, obj_t BgL_objz00_3564)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 547 */
			{	/* Ieee/output.scm 548 */
				obj_t BgL_auxz00_4391;

				if (STRINGP(BgL_fmtz00_3563))
					{	/* Ieee/output.scm 548 */
						BgL_auxz00_4391 = BgL_fmtz00_3563;
					}
				else
					{
						obj_t BgL_auxz00_4394;

						BgL_auxz00_4394 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 19436)),
							BGl_string2997z00zz__r4_output_6_10_3z00,
							BGl_string2998z00zz__r4_output_6_10_3z00, BgL_fmtz00_3563);
						FAILURE(BgL_auxz00_4394, BFALSE, BFALSE);
					}
				return
					BGl_formatz00zz__r4_output_6_10_3z00(BgL_auxz00_4391,
					BgL_objz00_3564);
			}
		}
	}



/* printf */
	BGL_EXPORTED_DEF obj_t BGl_printfz00zz__r4_output_6_10_3z00(obj_t
		BgL_fmtz00_33, obj_t BgL_objz00_34)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 555 */
			{	/* Ieee/output.scm 556 */
				obj_t BgL_arg2100z00_2827;

				obj_t BgL_arg2101z00_2828;

				BgL_arg2100z00_2827 = BGl_symbol2999z00zz__r4_output_6_10_3z00;
				{	/* Ieee/output.scm 556 */
					obj_t BgL_res2860z00_2830;

					{	/* Ieee/output.scm 556 */
						obj_t BgL_auxz00_4399;

						BgL_auxz00_4399 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2860z00_2830 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4399);
					}
					BgL_arg2101z00_2828 = BgL_res2860z00_2830;
				}
				return
					BGl_xprintfz00zz__r4_output_6_10_3z00(BgL_arg2100z00_2827,
					BgL_arg2101z00_2828, BgL_fmtz00_33, BgL_objz00_34);
			}
		}
	}



/* _printf */
	obj_t BGl__printfz00zz__r4_output_6_10_3z00(obj_t BgL_envz00_3565,
		obj_t BgL_fmtz00_3566, obj_t BgL_objz00_3567)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 555 */
			{	/* Ieee/output.scm 556 */
				obj_t BgL_auxz00_4403;

				if (STRINGP(BgL_fmtz00_3566))
					{	/* Ieee/output.scm 556 */
						BgL_auxz00_4403 = BgL_fmtz00_3566;
					}
				else
					{
						obj_t BgL_auxz00_4406;

						BgL_auxz00_4406 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 19786)),
							BGl_string3001z00zz__r4_output_6_10_3z00,
							BGl_string2998z00zz__r4_output_6_10_3z00, BgL_fmtz00_3566);
						FAILURE(BgL_auxz00_4406, BFALSE, BFALSE);
					}
				return
					BGl_printfz00zz__r4_output_6_10_3z00(BgL_auxz00_4403,
					BgL_objz00_3567);
			}
		}
	}



/* fprintf */
	BGL_EXPORTED_DEF obj_t BGl_fprintfz00zz__r4_output_6_10_3z00(obj_t
		BgL_portz00_35, obj_t BgL_fmtz00_36, obj_t BgL_objz00_37)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 561 */
			return
				BGl_xprintfz00zz__r4_output_6_10_3z00
				(BGl_symbol3002z00zz__r4_output_6_10_3z00, BgL_portz00_35,
				BgL_fmtz00_36, BgL_objz00_37);
		}
	}



/* _fprintf */
	obj_t BGl__fprintfz00zz__r4_output_6_10_3z00(obj_t BgL_envz00_3568,
		obj_t BgL_portz00_3569, obj_t BgL_fmtz00_3570, obj_t BgL_objz00_3571)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 561 */
			{	/* Ieee/output.scm 562 */
				obj_t BgL_auxz00_4419;

				obj_t BgL_auxz00_4412;

				if (STRINGP(BgL_fmtz00_3570))
					{	/* Ieee/output.scm 562 */
						BgL_auxz00_4419 = BgL_fmtz00_3570;
					}
				else
					{
						obj_t BgL_auxz00_4422;

						BgL_auxz00_4422 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 20084)),
							BGl_string3004z00zz__r4_output_6_10_3z00,
							BGl_string2998z00zz__r4_output_6_10_3z00, BgL_fmtz00_3570);
						FAILURE(BgL_auxz00_4422, BFALSE, BFALSE);
					}
				if (OUTPUT_PORTP(BgL_portz00_3569))
					{	/* Ieee/output.scm 562 */
						BgL_auxz00_4412 = BgL_portz00_3569;
					}
				else
					{
						obj_t BgL_auxz00_4415;

						BgL_auxz00_4415 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 20084)),
							BGl_string3004z00zz__r4_output_6_10_3z00,
							BGl_string2969z00zz__r4_output_6_10_3z00, BgL_portz00_3569);
						FAILURE(BgL_auxz00_4415, BFALSE, BFALSE);
					}
				return
					BGl_fprintfz00zz__r4_output_6_10_3z00(BgL_auxz00_4412,
					BgL_auxz00_4419, BgL_objz00_3571);
			}
		}
	}



/* display-2 */
	BGL_EXPORTED_DEF obj_t bgl_display_obj(obj_t BgL_objz00_38,
		obj_t BgL_portz00_39)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 681 */
			if (STRINGP(BgL_objz00_38))
				{	/* Ieee/output.scm 682 */
					return bgl_display_string(BgL_objz00_38, BgL_portz00_39);
				}
			else
				{	/* Ieee/output.scm 682 */
					if (SYMBOLP(BgL_objz00_38))
						{	/* Ieee/output.scm 682 */
							obj_t BgL_objz00_2835;

							BgL_objz00_2835 = BgL_objz00_38;
							{	/* Ieee/output.scm 682 */
								obj_t BgL_arg2194z00_2837;

								BgL_arg2194z00_2837 = SYMBOL_TO_STRING(BgL_objz00_2835);
								return bgl_display_string(BgL_arg2194z00_2837, BgL_portz00_39);
							}
						}
					else
						{	/* Ieee/output.scm 682 */
							if (INTEGERP(BgL_objz00_38))
								{	/* Ieee/output.scm 682 */
									return bgl_display_fixnum(BgL_objz00_38, BgL_portz00_39);
								}
							else
								{	/* Ieee/output.scm 682 */
									if (CHARP(BgL_objz00_38))
										{	/* Ieee/output.scm 682 */
											unsigned char BgL_auxz00_4439;

											BgL_auxz00_4439 = CCHAR(BgL_objz00_38);
											return bgl_display_char(BgL_auxz00_4439, BgL_portz00_39);
										}
									else
										{	/* Ieee/output.scm 682 */
											if (PAIRP(BgL_objz00_38))
												{	/* Ieee/output.scm 682 */
													return
														BGl_displayzd2pairzd2zz__r4_output_6_10_3z00
														(BgL_objz00_38, BgL_portz00_39);
												}
											else
												{	/* Ieee/output.scm 682 */
													if (NULLP(BgL_objz00_38))
														{	/* Ieee/output.scm 682 */
															return
																bgl_display_string
																(BGl_string3005z00zz__r4_output_6_10_3z00,
																BgL_portz00_39);
														}
													else
														{	/* Ieee/output.scm 682 */
															if ((BgL_objz00_38 == BFALSE))
																{	/* Ieee/output.scm 682 */
																	return
																		bgl_display_string
																		(BGl_string3006z00zz__r4_output_6_10_3z00,
																		BgL_portz00_39);
																}
															else
																{	/* Ieee/output.scm 682 */
																	if ((BgL_objz00_38 == BTRUE))
																		{	/* Ieee/output.scm 682 */
																			return
																				bgl_display_string
																				(BGl_string3007z00zz__r4_output_6_10_3z00,
																				BgL_portz00_39);
																		}
																	else
																		{	/* Ieee/output.scm 682 */
																			if ((BgL_objz00_38 == BUNSPEC))
																				{	/* Ieee/output.scm 682 */
																					return
																						bgl_display_string
																						(BGl_string3008z00zz__r4_output_6_10_3z00,
																						BgL_portz00_39);
																				}
																			else
																				{	/* Ieee/output.scm 682 */
																					if (ELONGP(BgL_objz00_38))
																						{	/* Ieee/output.scm 682 */
																							return
																								bgl_display_elong(BELONG_TO_LONG
																								(BgL_objz00_38),
																								BgL_portz00_39);
																						}
																					else
																						{	/* Ieee/output.scm 682 */
																							if (REALP(BgL_objz00_38))
																								{	/* Ieee/output.scm 682 */
																									obj_t BgL_objz00_2855;

																									BgL_objz00_2855 =
																										BgL_objz00_38;
																									{	/* Ieee/output.scm 682 */
																										obj_t BgL_arg2237z00_2857;

																										BgL_arg2237z00_2857 =
																											real_to_string
																											(REAL_TO_DOUBLE
																											(BgL_objz00_2855));
																										return
																											bgl_display_string
																											(BgL_arg2237z00_2857,
																											BgL_portz00_39);
																									}
																								}
																							else
																								{	/* Ieee/output.scm 682 */
																									if (KEYWORDP(BgL_objz00_38))
																										{	/* Ieee/output.scm 682 */
																											obj_t BgL_objz00_2862;

																											BgL_objz00_2862 =
																												BgL_objz00_38;
																											bgl_display_char((
																													(unsigned char) ':'),
																												BgL_portz00_39);
																											{	/* Ieee/output.scm 682 */
																												obj_t
																													BgL_arg2236z00_2864;
																												BgL_arg2236z00_2864 =
																													KEYWORD_TO_STRING
																													(BgL_objz00_2862);
																												return
																													bgl_display_string
																													(BgL_arg2236z00_2864,
																													BgL_portz00_39);
																											}
																										}
																									else
																										{	/* Ieee/output.scm 682 */
																											if (BGl_classzf3zf3zz__objectz00(BgL_objz00_38))
																												{	/* Ieee/output.scm 682 */
																													bgl_display_string
																														(BGl_string3009z00zz__r4_output_6_10_3z00,
																														BgL_portz00_39);
																													{	/* Ieee/output.scm 682 */
																														obj_t
																															BgL_arg2245z00_2870;
																														BgL_arg2245z00_2870
																															=
																															BGl_classzd2namezd2zz__objectz00
																															(BgL_objz00_38);
																														{	/* Ieee/output.scm 682 */
																															obj_t
																																BgL_arg2194z00_2875;
																															BgL_arg2194z00_2875
																																=
																																SYMBOL_TO_STRING
																																(BgL_arg2245z00_2870);
																															bgl_display_string
																																(BgL_arg2194z00_2875,
																																BgL_portz00_39);
																														}
																													}
																													return
																														bgl_display_string
																														(BGl_string3010z00zz__r4_output_6_10_3z00,
																														BgL_portz00_39);
																												}
																											else
																												{	/* Ieee/output.scm 682 */
																													if (VECTORP
																														(BgL_objz00_38))
																														{	/* Ieee/output.scm 682 */
																															return
																																BGl_writezf2displayzd2vectorz20zz__r4_output_6_10_3z00
																																(BgL_objz00_38,
																																BgL_portz00_39,
																																BGl_displayzd22zd2envz00zz__r4_output_6_10_3z00);
																														}
																													else
																														{	/* Ieee/output.scm 682 */
																															if (LLONGP
																																(BgL_objz00_38))
																																{	/* Ieee/output.scm 682 */
																																	return
																																		bgl_display_llong
																																		(BLLONG_TO_LLONG
																																		(BgL_objz00_38),
																																		BgL_portz00_39);
																																}
																															else
																																{	/* Ieee/output.scm 682 */
																																	if (UCS2_STRINGP(BgL_objz00_38))
																																		{	/* Ieee/output.scm 682 */
																																			return
																																				bgl_display_ucs2string
																																				(BgL_objz00_38,
																																				BgL_portz00_39);
																																		}
																																	else
																																		{	/* Ieee/output.scm 682 */
																																			if (STRUCTP(BgL_objz00_38))
																																				{	/* Ieee/output.scm 682 */
																																					return
																																						BGl_writezf2displayzd2structurez20zz__r4_output_6_10_3z00
																																						(BgL_objz00_38,
																																						BgL_portz00_39,
																																						BGl_displayzd22zd2envz00zz__r4_output_6_10_3z00);
																																				}
																																			else
																																				{	/* Ieee/output.scm 682 */
																																					if (BGL_OBJECTP(BgL_objz00_38))
																																						{	/* Ieee/output.scm 682 */
																																							obj_t
																																								BgL_list2120z00_1401;
																																							BgL_list2120z00_1401
																																								=
																																								MAKE_PAIR
																																								(BgL_portz00_39,
																																								BNIL);
																																							return
																																								BGl_objectzd2displayzd2zz__objectz00
																																								(
																																								(BgL_objectz00_bglt)
																																								(BgL_objz00_38),
																																								BgL_list2120z00_1401);
																																						}
																																					else
																																						{	/* Ieee/output.scm 682 */
																																							if (BGL_DATEP(BgL_objz00_38))
																																								{	/* Ieee/output.scm 682 */
																																									obj_t
																																										BgL_objz00_2889;
																																									BgL_objz00_2889
																																										=
																																										BgL_objz00_38;
																																									return
																																										bgl_display_string
																																										(bgl_seconds_to_string
																																										(bgl_date_to_seconds
																																											(BgL_objz00_2889)),
																																										BgL_portz00_39);
																																								}
																																							else
																																								{	/* Ieee/output.scm 682 */
																																									if (BGL_MUTEXP(BgL_objz00_38))
																																										{	/* Ieee/output.scm 682 */
																																											bgl_display_string
																																												(BGl_string3011z00zz__r4_output_6_10_3z00,
																																												BgL_portz00_39);
																																											{	/* Ieee/output.scm 682 */
																																												obj_t
																																													BgL_arg2243z00_2902;
																																												BgL_arg2243z00_2902
																																													=
																																													BGL_MUTEX_NAME
																																													(BgL_objz00_38);
																																												bgl_display_obj
																																													(BgL_arg2243z00_2902,
																																													BgL_portz00_39);
																																											}
																																											return
																																												bgl_display_string
																																												(BGl_string3010z00zz__r4_output_6_10_3z00,
																																												BgL_portz00_39);
																																										}
																																									else
																																										{	/* Ieee/output.scm 682 */
																																											if (BGL_CONDVARP(BgL_objz00_38))
																																												{	/* Ieee/output.scm 682 */
																																													bgl_display_string
																																														(BGl_string3012z00zz__r4_output_6_10_3z00,
																																														BgL_portz00_39);
																																													{	/* Ieee/output.scm 682 */
																																														obj_t
																																															BgL_arg2244z00_2911;
																																														BgL_arg2244z00_2911
																																															=
																																															BGL_CONDVAR_NAME
																																															(BgL_objz00_38);
																																														bgl_display_obj
																																															(BgL_arg2244z00_2911,
																																															BgL_portz00_39);
																																													}
																																													return
																																														bgl_display_string
																																														(BGl_string3010z00zz__r4_output_6_10_3z00,
																																														BgL_portz00_39);
																																												}
																																											else
																																												{	/* Ieee/output.scm 682 */
																																													if (UCS2P(BgL_objz00_38))
																																														{	/* Ieee/output.scm 682 */
																																															return
																																																bgl_display_ucs2
																																																(BgL_objz00_38,
																																																BgL_portz00_39);
																																														}
																																													else
																																														{	/* Ieee/output.scm 682 */
																																															if (CELLP(BgL_objz00_38))
																																																{	/* Ieee/output.scm 682 */
																																																	obj_t
																																																		BgL_objz00_2918;
																																																	BgL_objz00_2918
																																																		=
																																																		BgL_objz00_38;
																																																	bgl_display_string
																																																		(BGl_string3013z00zz__r4_output_6_10_3z00,
																																																		BgL_portz00_39);
																																																	bgl_display_obj
																																																		(CELL_REF
																																																		(BgL_objz00_2918),
																																																		BgL_portz00_39);
																																																	return
																																																		bgl_display_string
																																																		(BGl_string3010z00zz__r4_output_6_10_3z00,
																																																		BgL_portz00_39);
																																																}
																																															else
																																																{	/* Ieee/output.scm 682 */
																																																	if (EOF_OBJECTP(BgL_objz00_38))
																																																		{	/* Ieee/output.scm 682 */
																																																			return
																																																				bgl_display_string
																																																				(BGl_string3014z00zz__r4_output_6_10_3z00,
																																																				BgL_portz00_39);
																																																		}
																																																	else
																																																		{	/* Ieee/output.scm 682 */
																																																			if ((BgL_objz00_38 == BCNST(258)))
																																																				{	/* Ieee/output.scm 682 */
																																																					return
																																																						bgl_display_string
																																																						(BGl_string3015z00zz__r4_output_6_10_3z00,
																																																						BgL_portz00_39);
																																																				}
																																																			else
																																																				{	/* Ieee/output.scm 682 */
																																																					if ((BgL_objz00_38 == BCNST(259)))
																																																						{	/* Ieee/output.scm 682 */
																																																							return
																																																								bgl_display_string
																																																								(BGl_string3016z00zz__r4_output_6_10_3z00,
																																																								BgL_portz00_39);
																																																						}
																																																					else
																																																						{	/* Ieee/output.scm 682 */
																																																							if ((BgL_objz00_38 == BCNST(262)))
																																																								{	/* Ieee/output.scm 682 */
																																																									return
																																																										bgl_display_string
																																																										(BGl_string3017z00zz__r4_output_6_10_3z00,
																																																										BgL_portz00_39);
																																																								}
																																																							else
																																																								{	/* Ieee/output.scm 682 */
																																																									if (PROCEDUREP(BgL_objz00_38))
																																																										{	/* Ieee/output.scm 682 */
																																																											return
																																																												bgl_write_procedure
																																																												(BgL_objz00_38,
																																																												BgL_portz00_39);
																																																										}
																																																									else
																																																										{	/* Ieee/output.scm 682 */
																																																											if (OUTPUT_PORTP(BgL_objz00_38))
																																																												{	/* Ieee/output.scm 682 */
																																																													if (BGL_OUTPUT_STRING_PORTP(BgL_objz00_38))
																																																														{	/* Ieee/output.scm 682 */
																																																															return
																																																																bgl_display_string
																																																																(BGl_string3018z00zz__r4_output_6_10_3z00,
																																																																BgL_portz00_39);
																																																														}
																																																													else
																																																														{	/* Ieee/output.scm 682 */
																																																															if (BGL_OUTPUT_PROCEDURE_PORTP(BgL_objz00_38))
																																																																{	/* Ieee/output.scm 682 */
																																																																	return
																																																																		bgl_display_string
																																																																		(BGl_string3019z00zz__r4_output_6_10_3z00,
																																																																		BgL_portz00_39);
																																																																}
																																																															else
																																																																{	/* Ieee/output.scm 682 */
																																																																	return
																																																																		bgl_write_output_port
																																																																		(BgL_objz00_38,
																																																																		BgL_portz00_39);
																																																																}
																																																														}
																																																												}
																																																											else
																																																												{	/* Ieee/output.scm 682 */
																																																													if (INPUT_PORTP(BgL_objz00_38))
																																																														{	/* Ieee/output.scm 682 */
																																																															return
																																																																bgl_write_input_port
																																																																(BgL_objz00_38,
																																																																BgL_portz00_39);
																																																														}
																																																													else
																																																														{	/* Ieee/output.scm 682 */
																																																															if (CNSTP(BgL_objz00_38))
																																																																{	/* Ieee/output.scm 682 */
																																																																	return
																																																																		bgl_write_cnst
																																																																		(BgL_objz00_38,
																																																																		BgL_portz00_39);
																																																																}
																																																															else
																																																																{	/* Ieee/output.scm 682 */
																																																																	if (BIGNUMP(BgL_objz00_38))
																																																																		{	/* Ieee/output.scm 682 */
																																																																			return
																																																																				bgl_display_bignum
																																																																				(BgL_objz00_38,
																																																																				BgL_portz00_39);
																																																																		}
																																																																	else
																																																																		{	/* Ieee/output.scm 682 */
																																																																			if (BGL_HVECTORP(BgL_objz00_38))
																																																																				{	/* Ieee/output.scm 682 */
																																																																					return
																																																																						BGl_writezf2displayzd2hvectorz20zz__r4_output_6_10_3z00
																																																																						(BgL_objz00_38,
																																																																						BgL_portz00_39,
																																																																						BGl_displayzd22zd2envz00zz__r4_output_6_10_3z00);
																																																																				}
																																																																			else
																																																																				{	/* Ieee/output.scm 682 */
																																																																					if (TVECTORP(BgL_objz00_38))
																																																																						{	/* Ieee/output.scm 682 */
																																																																							return
																																																																								BGl_writezf2displayzd2tvectorz20zz__r4_output_6_10_3z00
																																																																								(BgL_objz00_38,
																																																																								BgL_portz00_39,
																																																																								BGl_displayzd22zd2envz00zz__r4_output_6_10_3z00);
																																																																						}
																																																																					else
																																																																						{	/* Ieee/output.scm 682 */
																																																																							if (BGL_WEAKPTRP(BgL_objz00_38))
																																																																								{	/* Ieee/output.scm 682 */
																																																																									obj_t
																																																																										BgL_ptrz00_2948;
																																																																									BgL_ptrz00_2948
																																																																										=
																																																																										BgL_objz00_38;
																																																																									{	/* Ieee/output.scm 682 */
																																																																										obj_t
																																																																											BgL_dataz00_2950;
																																																																										BgL_dataz00_2950
																																																																											=
																																																																											weakptr_data
																																																																											(BgL_ptrz00_2948);
																																																																										bgl_display_string
																																																																											(BGl_string3020z00zz__r4_output_6_10_3z00,
																																																																											BgL_portz00_39);
																																																																										bgl_display_obj
																																																																											(BgL_dataz00_2950,
																																																																											BgL_portz00_39);
																																																																										return
																																																																											bgl_display_char
																																																																											(
																																																																											((unsigned char) '>'), BgL_portz00_39);
																																																																								}}
																																																																							else
																																																																								{	/* Ieee/output.scm 682 */
																																																																									if (FOREIGNP(BgL_objz00_38))
																																																																										{	/* Ieee/output.scm 682 */
																																																																											return
																																																																												bgl_write_foreign
																																																																												(BgL_objz00_38,
																																																																												BgL_portz00_39);
																																																																										}
																																																																									else
																																																																										{	/* Ieee/output.scm 682 */
																																																																											if (PROCESSP(BgL_objz00_38))
																																																																												{	/* Ieee/output.scm 682 */
																																																																													return
																																																																														bgl_write_process
																																																																														(BgL_objz00_38,
																																																																														BgL_portz00_39);
																																																																												}
																																																																											else
																																																																												{	/* Ieee/output.scm 682 */
																																																																													if (SOCKETP(BgL_objz00_38))
																																																																														{	/* Ieee/output.scm 682 */
																																																																															return
																																																																																bgl_write_socket
																																																																																(BgL_objz00_38,
																																																																																BgL_portz00_39);
																																																																														}
																																																																													else
																																																																														{	/* Ieee/output.scm 682 */
																																																																															if (BGL_MMAPP(BgL_objz00_38))
																																																																																{	/* Ieee/output.scm 682 */
																																																																																	return
																																																																																		bgl_write_mmap
																																																																																		(BgL_objz00_38,
																																																																																		BgL_portz00_39);
																																																																																}
																																																																															else
																																																																																{	/* Ieee/output.scm 682 */
																																																																																	if (OPAQUEP(BgL_objz00_38))
																																																																																		{	/* Ieee/output.scm 682 */
																																																																																			return
																																																																																				bgl_write_opaque
																																																																																				(BgL_objz00_38,
																																																																																				BgL_portz00_39);
																																																																																		}
																																																																																	else
																																																																																		{	/* Ieee/output.scm 682 */
																																																																																			if (CUSTOMP(BgL_objz00_38))
																																																																																				{	/* Ieee/output.scm 682 */
																																																																																					return
																																																																																						bgl_write_custom
																																																																																						(BgL_objz00_38,
																																																																																						BgL_portz00_39);
																																																																																				}
																																																																																			else
																																																																																				{	/* Ieee/output.scm 682 */
																																																																																					if (BINARY_PORTP(BgL_objz00_38))
																																																																																						{	/* Ieee/output.scm 682 */
																																																																																							return
																																																																																								bgl_write_binary_port
																																																																																								(BgL_objz00_38,
																																																																																								BgL_portz00_39);
																																																																																						}
																																																																																					else
																																																																																						{	/* Ieee/output.scm 682 */
																																																																																							if (BGL_DYNAMIC_ENVP(BgL_objz00_38))
																																																																																								{	/* Ieee/output.scm 682 */
																																																																																									return
																																																																																										bgl_write_dynamic_env
																																																																																										(BgL_objz00_38,
																																																																																										BgL_portz00_39);
																																																																																								}
																																																																																							else
																																																																																								{	/* Ieee/output.scm 682 */
																																																																																									return
																																																																																										bgl_write_unknown
																																																																																										(BgL_objz00_38,
																																																																																										BgL_portz00_39);
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
								}
						}
				}
		}
	}



/* _display-2 */
	obj_t BGl__displayzd22zd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3572,
		obj_t BgL_objz00_3573, obj_t BgL_portz00_3574)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 681 */
			{	/* Ieee/output.scm 682 */
				obj_t BgL_auxz00_4592;

				if (OUTPUT_PORTP(BgL_portz00_3574))
					{	/* Ieee/output.scm 682 */
						BgL_auxz00_4592 = BgL_portz00_3574;
					}
				else
					{
						obj_t BgL_auxz00_4595;

						BgL_auxz00_4595 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 24262)),
							BGl_string3021z00zz__r4_output_6_10_3z00,
							BGl_string2969z00zz__r4_output_6_10_3z00, BgL_portz00_3574);
						FAILURE(BgL_auxz00_4595, BFALSE, BFALSE);
					}
				return bgl_display_obj(BgL_objz00_3573, BgL_auxz00_4592);
			}
		}
	}



/* write-2 */
	BGL_EXPORTED_DEF obj_t bgl_write_obj(obj_t BgL_objz00_40,
		obj_t BgL_portz00_41)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 687 */
			if (STRINGP(BgL_objz00_40))
				{	/* Ieee/output.scm 688 */
					obj_t BgL_objz00_2961;

					BgL_objz00_2961 = BgL_objz00_40;
					if (BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00())
						{	/* Ieee/output.scm 688 */
							obj_t BgL_strz00_2964;

							BgL_strz00_2964 = string_for_read(BgL_objz00_2961);
							{	/* Ieee/output.scm 688 */
								obj_t BgL_escz00_2965;

								{	/* Ieee/output.scm 688 */
									int BgL_auxz00_4605;

									BgL_auxz00_4605 = (int) (((long) 1));
									BgL_escz00_2965 = BGL_MVALUES_VAL(BgL_auxz00_4605);
								}
								return
									bgl_write_string(BgL_strz00_2964,
									CBOOL(BgL_escz00_2965), BgL_portz00_41);
							}
						}
					else
						{	/* Ieee/output.scm 688 */
							return
								bgl_write_string(string_for_read(BgL_objz00_2961), ((bool_t) 0),
								BgL_portz00_41);
						}
				}
			else
				{	/* Ieee/output.scm 688 */
					if (SYMBOLP(BgL_objz00_40))
						{	/* Ieee/output.scm 688 */
							return
								BGl_writezd2symbolzd2zz__r4_output_6_10_3z00(BgL_objz00_40,
								BgL_portz00_41);
						}
					else
						{	/* Ieee/output.scm 688 */
							if (INTEGERP(BgL_objz00_40))
								{	/* Ieee/output.scm 688 */
									return bgl_display_fixnum(BgL_objz00_40, BgL_portz00_41);
								}
							else
								{	/* Ieee/output.scm 688 */
									if (CHARP(BgL_objz00_40))
										{	/* Ieee/output.scm 688 */
											return bgl_write_char(BgL_objz00_40, BgL_portz00_41);
										}
									else
										{	/* Ieee/output.scm 688 */
											if (PAIRP(BgL_objz00_40))
												{	/* Ieee/output.scm 688 */
													return
														BGl_writezd2pairzd2zz__r4_output_6_10_3z00
														(BgL_objz00_40, BgL_portz00_41);
												}
											else
												{	/* Ieee/output.scm 688 */
													if (NULLP(BgL_objz00_40))
														{	/* Ieee/output.scm 688 */
															return
																bgl_display_string
																(BGl_string3005z00zz__r4_output_6_10_3z00,
																BgL_portz00_41);
														}
													else
														{	/* Ieee/output.scm 688 */
															if ((BgL_objz00_40 == BFALSE))
																{	/* Ieee/output.scm 688 */
																	return
																		bgl_display_string
																		(BGl_string3006z00zz__r4_output_6_10_3z00,
																		BgL_portz00_41);
																}
															else
																{	/* Ieee/output.scm 688 */
																	if ((BgL_objz00_40 == BTRUE))
																		{	/* Ieee/output.scm 688 */
																			return
																				bgl_display_string
																				(BGl_string3007z00zz__r4_output_6_10_3z00,
																				BgL_portz00_41);
																		}
																	else
																		{	/* Ieee/output.scm 688 */
																			if ((BgL_objz00_40 == BUNSPEC))
																				{	/* Ieee/output.scm 688 */
																					return
																						bgl_display_string
																						(BGl_string3008z00zz__r4_output_6_10_3z00,
																						BgL_portz00_41);
																				}
																			else
																				{	/* Ieee/output.scm 688 */
																					if (ELONGP(BgL_objz00_40))
																						{	/* Ieee/output.scm 688 */
																							return
																								bgl_write_elong(BELONG_TO_LONG
																								(BgL_objz00_40),
																								BgL_portz00_41);
																						}
																					else
																						{	/* Ieee/output.scm 688 */
																							if (REALP(BgL_objz00_40))
																								{	/* Ieee/output.scm 688 */
																									obj_t BgL_objz00_2985;

																									BgL_objz00_2985 =
																										BgL_objz00_40;
																									{	/* Ieee/output.scm 688 */
																										obj_t BgL_arg2237z00_2987;

																										BgL_arg2237z00_2987 =
																											real_to_string
																											(REAL_TO_DOUBLE
																											(BgL_objz00_2985));
																										return
																											bgl_display_string
																											(BgL_arg2237z00_2987,
																											BgL_portz00_41);
																									}
																								}
																							else
																								{	/* Ieee/output.scm 688 */
																									if (KEYWORDP(BgL_objz00_40))
																										{	/* Ieee/output.scm 688 */
																											obj_t BgL_objz00_2992;

																											BgL_objz00_2992 =
																												BgL_objz00_40;
																											bgl_display_char((
																													(unsigned char) ':'),
																												BgL_portz00_41);
																											{	/* Ieee/output.scm 688 */
																												obj_t
																													BgL_arg2236z00_2994;
																												BgL_arg2236z00_2994 =
																													KEYWORD_TO_STRING
																													(BgL_objz00_2992);
																												return
																													bgl_display_string
																													(BgL_arg2236z00_2994,
																													BgL_portz00_41);
																											}
																										}
																									else
																										{	/* Ieee/output.scm 688 */
																											if (BGl_classzf3zf3zz__objectz00(BgL_objz00_40))
																												{	/* Ieee/output.scm 688 */
																													bgl_display_string
																														(BGl_string3009z00zz__r4_output_6_10_3z00,
																														BgL_portz00_41);
																													{	/* Ieee/output.scm 688 */
																														obj_t
																															BgL_arg2245z00_3000;
																														BgL_arg2245z00_3000
																															=
																															BGl_classzd2namezd2zz__objectz00
																															(BgL_objz00_40);
																														{	/* Ieee/output.scm 688 */
																															obj_t
																																BgL_arg2194z00_3005;
																															BgL_arg2194z00_3005
																																=
																																SYMBOL_TO_STRING
																																(BgL_arg2245z00_3000);
																															bgl_display_string
																																(BgL_arg2194z00_3005,
																																BgL_portz00_41);
																														}
																													}
																													return
																														bgl_display_string
																														(BGl_string3010z00zz__r4_output_6_10_3z00,
																														BgL_portz00_41);
																												}
																											else
																												{	/* Ieee/output.scm 688 */
																													if (VECTORP
																														(BgL_objz00_40))
																														{	/* Ieee/output.scm 688 */
																															return
																																BGl_writezf2displayzd2vectorz20zz__r4_output_6_10_3z00
																																(BgL_objz00_40,
																																BgL_portz00_41,
																																BGl_writezd22zd2envz00zz__r4_output_6_10_3z00);
																														}
																													else
																														{	/* Ieee/output.scm 688 */
																															if (LLONGP
																																(BgL_objz00_40))
																																{	/* Ieee/output.scm 688 */
																																	return
																																		bgl_write_llong
																																		(BLLONG_TO_LLONG
																																		(BgL_objz00_40),
																																		BgL_portz00_41);
																																}
																															else
																																{	/* Ieee/output.scm 688 */
																																	if (UCS2_STRINGP(BgL_objz00_40))
																																		{	/* Ieee/output.scm 688 */
																																			obj_t
																																				BgL_objz00_3014;
																																			BgL_objz00_3014
																																				=
																																				BgL_objz00_40;
																																			return
																																				bgl_write_utf8string
																																				(string_for_read
																																				(ucs2_string_to_utf8_string
																																					(BgL_objz00_3014)),
																																				BgL_portz00_41);
																																		}
																																	else
																																		{	/* Ieee/output.scm 688 */
																																			if (STRUCTP(BgL_objz00_40))
																																				{	/* Ieee/output.scm 688 */
																																					return
																																						BGl_writezf2displayzd2structurez20zz__r4_output_6_10_3z00
																																						(BgL_objz00_40,
																																						BgL_portz00_41,
																																						BGl_writezd22zd2envz00zz__r4_output_6_10_3z00);
																																				}
																																			else
																																				{	/* Ieee/output.scm 688 */
																																					if (BGL_OBJECTP(BgL_objz00_40))
																																						{	/* Ieee/output.scm 688 */
																																							obj_t
																																								BgL_list2166z00_1447;
																																							BgL_list2166z00_1447
																																								=
																																								MAKE_PAIR
																																								(BgL_portz00_41,
																																								BNIL);
																																							return
																																								BGl_objectzd2writezd2zz__objectz00
																																								(
																																								(BgL_objectz00_bglt)
																																								(BgL_objz00_40),
																																								BgL_list2166z00_1447);
																																						}
																																					else
																																						{	/* Ieee/output.scm 688 */
																																							if (BGL_DATEP(BgL_objz00_40))
																																								{	/* Ieee/output.scm 688 */
																																									obj_t
																																										BgL_objz00_3023;
																																									BgL_objz00_3023
																																										=
																																										BgL_objz00_40;
																																									bgl_display_string
																																										(BGl_string3022z00zz__r4_output_6_10_3z00,
																																										BgL_portz00_41);
																																									bgl_display_string
																																										(bgl_seconds_to_string
																																										(bgl_date_to_seconds
																																											(BgL_objz00_3023)),
																																										BgL_portz00_41);
																																									return
																																										bgl_display_string
																																										(BGl_string3010z00zz__r4_output_6_10_3z00,
																																										BgL_portz00_41);
																																								}
																																							else
																																								{	/* Ieee/output.scm 688 */
																																									if (BGL_MUTEXP(BgL_objz00_40))
																																										{	/* Ieee/output.scm 688 */
																																											bgl_display_string
																																												(BGl_string3011z00zz__r4_output_6_10_3z00,
																																												BgL_portz00_41);
																																											{	/* Ieee/output.scm 688 */
																																												obj_t
																																													BgL_arg2243z00_3040;
																																												BgL_arg2243z00_3040
																																													=
																																													BGL_MUTEX_NAME
																																													(BgL_objz00_40);
																																												bgl_display_obj
																																													(BgL_arg2243z00_3040,
																																													BgL_portz00_41);
																																											}
																																											return
																																												bgl_display_string
																																												(BGl_string3010z00zz__r4_output_6_10_3z00,
																																												BgL_portz00_41);
																																										}
																																									else
																																										{	/* Ieee/output.scm 688 */
																																											if (BGL_CONDVARP(BgL_objz00_40))
																																												{	/* Ieee/output.scm 688 */
																																													bgl_display_string
																																														(BGl_string3012z00zz__r4_output_6_10_3z00,
																																														BgL_portz00_41);
																																													{	/* Ieee/output.scm 688 */
																																														obj_t
																																															BgL_arg2244z00_3049;
																																														BgL_arg2244z00_3049
																																															=
																																															BGL_CONDVAR_NAME
																																															(BgL_objz00_40);
																																														bgl_display_obj
																																															(BgL_arg2244z00_3049,
																																															BgL_portz00_41);
																																													}
																																													return
																																														bgl_display_string
																																														(BGl_string3010z00zz__r4_output_6_10_3z00,
																																														BgL_portz00_41);
																																												}
																																											else
																																												{	/* Ieee/output.scm 688 */
																																													if (UCS2P(BgL_objz00_40))
																																														{	/* Ieee/output.scm 688 */
																																															return
																																																bgl_write_ucs2
																																																(BgL_objz00_40,
																																																BgL_portz00_41);
																																														}
																																													else
																																														{	/* Ieee/output.scm 688 */
																																															if (CELLP(BgL_objz00_40))
																																																{	/* Ieee/output.scm 688 */
																																																	obj_t
																																																		BgL_objz00_3056;
																																																	BgL_objz00_3056
																																																		=
																																																		BgL_objz00_40;
																																																	bgl_display_string
																																																		(BGl_string3013z00zz__r4_output_6_10_3z00,
																																																		BgL_portz00_41);
																																																	bgl_write_obj
																																																		(CELL_REF
																																																		(BgL_objz00_3056),
																																																		BgL_portz00_41);
																																																	return
																																																		bgl_display_string
																																																		(BGl_string3010z00zz__r4_output_6_10_3z00,
																																																		BgL_portz00_41);
																																																}
																																															else
																																																{	/* Ieee/output.scm 688 */
																																																	if (EOF_OBJECTP(BgL_objz00_40))
																																																		{	/* Ieee/output.scm 688 */
																																																			return
																																																				bgl_display_string
																																																				(BGl_string3014z00zz__r4_output_6_10_3z00,
																																																				BgL_portz00_41);
																																																		}
																																																	else
																																																		{	/* Ieee/output.scm 688 */
																																																			if ((BgL_objz00_40 == BCNST(258)))
																																																				{	/* Ieee/output.scm 688 */
																																																					return
																																																						bgl_display_string
																																																						(BGl_string3015z00zz__r4_output_6_10_3z00,
																																																						BgL_portz00_41);
																																																				}
																																																			else
																																																				{	/* Ieee/output.scm 688 */
																																																					if ((BgL_objz00_40 == BCNST(259)))
																																																						{	/* Ieee/output.scm 688 */
																																																							return
																																																								bgl_display_string
																																																								(BGl_string3016z00zz__r4_output_6_10_3z00,
																																																								BgL_portz00_41);
																																																						}
																																																					else
																																																						{	/* Ieee/output.scm 688 */
																																																							if ((BgL_objz00_40 == BCNST(262)))
																																																								{	/* Ieee/output.scm 688 */
																																																									return
																																																										bgl_display_string
																																																										(BGl_string3017z00zz__r4_output_6_10_3z00,
																																																										BgL_portz00_41);
																																																								}
																																																							else
																																																								{	/* Ieee/output.scm 688 */
																																																									if (PROCEDUREP(BgL_objz00_40))
																																																										{	/* Ieee/output.scm 688 */
																																																											return
																																																												bgl_write_procedure
																																																												(BgL_objz00_40,
																																																												BgL_portz00_41);
																																																										}
																																																									else
																																																										{	/* Ieee/output.scm 688 */
																																																											if (OUTPUT_PORTP(BgL_objz00_40))
																																																												{	/* Ieee/output.scm 688 */
																																																													if (BGL_OUTPUT_STRING_PORTP(BgL_objz00_40))
																																																														{	/* Ieee/output.scm 688 */
																																																															return
																																																																bgl_display_string
																																																																(BGl_string3018z00zz__r4_output_6_10_3z00,
																																																																BgL_portz00_41);
																																																														}
																																																													else
																																																														{	/* Ieee/output.scm 688 */
																																																															if (BGL_OUTPUT_PROCEDURE_PORTP(BgL_objz00_40))
																																																																{	/* Ieee/output.scm 688 */
																																																																	return
																																																																		bgl_display_string
																																																																		(BGl_string3019z00zz__r4_output_6_10_3z00,
																																																																		BgL_portz00_41);
																																																																}
																																																															else
																																																																{	/* Ieee/output.scm 688 */
																																																																	return
																																																																		bgl_write_output_port
																																																																		(BgL_objz00_40,
																																																																		BgL_portz00_41);
																																																																}
																																																														}
																																																												}
																																																											else
																																																												{	/* Ieee/output.scm 688 */
																																																													if (INPUT_PORTP(BgL_objz00_40))
																																																														{	/* Ieee/output.scm 688 */
																																																															return
																																																																bgl_write_input_port
																																																																(BgL_objz00_40,
																																																																BgL_portz00_41);
																																																														}
																																																													else
																																																														{	/* Ieee/output.scm 688 */
																																																															if (CNSTP(BgL_objz00_40))
																																																																{	/* Ieee/output.scm 688 */
																																																																	return
																																																																		bgl_write_cnst
																																																																		(BgL_objz00_40,
																																																																		BgL_portz00_41);
																																																																}
																																																															else
																																																																{	/* Ieee/output.scm 688 */
																																																																	if (BIGNUMP(BgL_objz00_40))
																																																																		{	/* Ieee/output.scm 688 */
																																																																			return
																																																																				bgl_write_bignum
																																																																				(BgL_objz00_40,
																																																																				BgL_portz00_41);
																																																																		}
																																																																	else
																																																																		{	/* Ieee/output.scm 688 */
																																																																			if (BGL_HVECTORP(BgL_objz00_40))
																																																																				{	/* Ieee/output.scm 688 */
																																																																					return
																																																																						BGl_writezf2displayzd2hvectorz20zz__r4_output_6_10_3z00
																																																																						(BgL_objz00_40,
																																																																						BgL_portz00_41,
																																																																						BGl_writezd22zd2envz00zz__r4_output_6_10_3z00);
																																																																				}
																																																																			else
																																																																				{	/* Ieee/output.scm 688 */
																																																																					if (TVECTORP(BgL_objz00_40))
																																																																						{	/* Ieee/output.scm 688 */
																																																																							return
																																																																								BGl_writezf2displayzd2tvectorz20zz__r4_output_6_10_3z00
																																																																								(BgL_objz00_40,
																																																																								BgL_portz00_41,
																																																																								BGl_writezd22zd2envz00zz__r4_output_6_10_3z00);
																																																																						}
																																																																					else
																																																																						{	/* Ieee/output.scm 688 */
																																																																							if (BGL_WEAKPTRP(BgL_objz00_40))
																																																																								{	/* Ieee/output.scm 688 */
																																																																									obj_t
																																																																										BgL_ptrz00_3086;
																																																																									BgL_ptrz00_3086
																																																																										=
																																																																										BgL_objz00_40;
																																																																									{	/* Ieee/output.scm 688 */
																																																																										obj_t
																																																																											BgL_dataz00_3088;
																																																																										BgL_dataz00_3088
																																																																											=
																																																																											weakptr_data
																																																																											(BgL_ptrz00_3086);
																																																																										bgl_display_string
																																																																											(BGl_string3020z00zz__r4_output_6_10_3z00,
																																																																											BgL_portz00_41);
																																																																										bgl_write_obj
																																																																											(BgL_dataz00_3088,
																																																																											BgL_portz00_41);
																																																																										return
																																																																											bgl_display_char
																																																																											(
																																																																											((unsigned char) '>'), BgL_portz00_41);
																																																																								}}
																																																																							else
																																																																								{	/* Ieee/output.scm 688 */
																																																																									if (FOREIGNP(BgL_objz00_40))
																																																																										{	/* Ieee/output.scm 688 */
																																																																											return
																																																																												bgl_write_foreign
																																																																												(BgL_objz00_40,
																																																																												BgL_portz00_41);
																																																																										}
																																																																									else
																																																																										{	/* Ieee/output.scm 688 */
																																																																											if (PROCESSP(BgL_objz00_40))
																																																																												{	/* Ieee/output.scm 688 */
																																																																													return
																																																																														bgl_write_process
																																																																														(BgL_objz00_40,
																																																																														BgL_portz00_41);
																																																																												}
																																																																											else
																																																																												{	/* Ieee/output.scm 688 */
																																																																													if (SOCKETP(BgL_objz00_40))
																																																																														{	/* Ieee/output.scm 688 */
																																																																															return
																																																																																bgl_write_socket
																																																																																(BgL_objz00_40,
																																																																																BgL_portz00_41);
																																																																														}
																																																																													else
																																																																														{	/* Ieee/output.scm 688 */
																																																																															if (BGL_MMAPP(BgL_objz00_40))
																																																																																{	/* Ieee/output.scm 688 */
																																																																																	return
																																																																																		bgl_write_mmap
																																																																																		(BgL_objz00_40,
																																																																																		BgL_portz00_41);
																																																																																}
																																																																															else
																																																																																{	/* Ieee/output.scm 688 */
																																																																																	if (OPAQUEP(BgL_objz00_40))
																																																																																		{	/* Ieee/output.scm 688 */
																																																																																			return
																																																																																				bgl_write_opaque
																																																																																				(BgL_objz00_40,
																																																																																				BgL_portz00_41);
																																																																																		}
																																																																																	else
																																																																																		{	/* Ieee/output.scm 688 */
																																																																																			if (CUSTOMP(BgL_objz00_40))
																																																																																				{	/* Ieee/output.scm 688 */
																																																																																					return
																																																																																						bgl_write_custom
																																																																																						(BgL_objz00_40,
																																																																																						BgL_portz00_41);
																																																																																				}
																																																																																			else
																																																																																				{	/* Ieee/output.scm 688 */
																																																																																					if (BINARY_PORTP(BgL_objz00_40))
																																																																																						{	/* Ieee/output.scm 688 */
																																																																																							return
																																																																																								bgl_write_binary_port
																																																																																								(BgL_objz00_40,
																																																																																								BgL_portz00_41);
																																																																																						}
																																																																																					else
																																																																																						{	/* Ieee/output.scm 688 */
																																																																																							if (BGL_DYNAMIC_ENVP(BgL_objz00_40))
																																																																																								{	/* Ieee/output.scm 688 */
																																																																																									return
																																																																																										bgl_write_dynamic_env
																																																																																										(BgL_objz00_40,
																																																																																										BgL_portz00_41);
																																																																																								}
																																																																																							else
																																																																																								{	/* Ieee/output.scm 688 */
																																																																																									return
																																																																																										bgl_write_unknown
																																																																																										(BgL_objz00_40,
																																																																																										BgL_portz00_41);
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
								}
						}
				}
		}
	}



/* _write-2 */
	obj_t BGl__writezd22zd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3575,
		obj_t BgL_objz00_3576, obj_t BgL_portz00_3577)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 687 */
			{	/* Ieee/output.scm 688 */
				obj_t BgL_auxz00_4775;

				if (OUTPUT_PORTP(BgL_portz00_3577))
					{	/* Ieee/output.scm 688 */
						BgL_auxz00_4775 = BgL_portz00_3577;
					}
				else
					{
						obj_t BgL_auxz00_4778;

						BgL_auxz00_4778 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 24565)),
							BGl_string3023z00zz__r4_output_6_10_3z00,
							BGl_string2969z00zz__r4_output_6_10_3z00, BgL_portz00_3577);
						FAILURE(BgL_auxz00_4778, BFALSE, BFALSE);
					}
				return bgl_write_obj(BgL_objz00_3576, BgL_auxz00_4775);
			}
		}
	}



/* display-symbol */
	BGL_EXPORTED_DEF obj_t BGl_displayzd2symbolzd2zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_42, obj_t BgL_portz00_43)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 693 */
			{	/* Ieee/output.scm 694 */
				obj_t BgL_arg2194z00_3098;

				BgL_arg2194z00_3098 = SYMBOL_TO_STRING(BgL_objz00_42);
				return bgl_display_string(BgL_arg2194z00_3098, BgL_portz00_43);
			}
		}
	}



/* _display-symbol */
	obj_t BGl__displayzd2symbolzd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3578,
		obj_t BgL_objz00_3579, obj_t BgL_portz00_3580)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 693 */
			{	/* Ieee/output.scm 694 */
				obj_t BgL_auxz00_4792;

				obj_t BgL_auxz00_4785;

				if (OUTPUT_PORTP(BgL_portz00_3580))
					{	/* Ieee/output.scm 694 */
						BgL_auxz00_4792 = BgL_portz00_3580;
					}
				else
					{
						obj_t BgL_auxz00_4795;

						BgL_auxz00_4795 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 24876)),
							BGl_string3024z00zz__r4_output_6_10_3z00,
							BGl_string2969z00zz__r4_output_6_10_3z00, BgL_portz00_3580);
						FAILURE(BgL_auxz00_4795, BFALSE, BFALSE);
					}
				if (SYMBOLP(BgL_objz00_3579))
					{	/* Ieee/output.scm 694 */
						BgL_auxz00_4785 = BgL_objz00_3579;
					}
				else
					{
						obj_t BgL_auxz00_4788;

						BgL_auxz00_4788 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 24876)),
							BGl_string3024z00zz__r4_output_6_10_3z00,
							BGl_string3025z00zz__r4_output_6_10_3z00, BgL_objz00_3579);
						FAILURE(BgL_auxz00_4788, BFALSE, BFALSE);
					}
				return
					BGl_displayzd2symbolzd2zz__r4_output_6_10_3z00(BgL_auxz00_4785,
					BgL_auxz00_4792);
			}
		}
	}



/* write-symbol */
	BGL_EXPORTED_DEF obj_t BGl_writezd2symbolzd2zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_44, obj_t BgL_portz00_45)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 699 */
			{	/* Ieee/output.scm 700 */
				obj_t BgL_strz00_1476;

				BgL_strz00_1476 = SYMBOL_TO_STRING(BgL_objz00_44);
				{	/* Ieee/output.scm 700 */
					long BgL_lenz00_1477;

					BgL_lenz00_1477 = STRING_LENGTH(BgL_strz00_1476);
					{	/* Ieee/output.scm 701 */
						long BgL_lenzd21zd2_1478;

						BgL_lenzd21zd2_1478 = (BgL_lenz00_1477 - ((long) 1));
						{	/* Ieee/output.scm 702 */

							{

								{
									long BgL_iz00_1481;

									bool_t BgL_az00_1482;

									BgL_iz00_1481 = ((long) 0);
									BgL_az00_1482 = ((bool_t) 0);
								BgL_zc3anonymousza32195ze3z83_1483:
									if ((BgL_iz00_1481 == BgL_lenz00_1477))
										{	/* Ieee/output.scm 709 */
											if (BgL_az00_1482)
												{	/* Ieee/output.scm 710 */
													return
														bgl_display_string(BgL_strz00_1476, BgL_portz00_45);
												}
											else
												{	/* Ieee/output.scm 710 */
												BgL_zc3anonymousza32213ze3z83_1505:
													bgl_display_string
														(BGl_string3026z00zz__r4_output_6_10_3z00,
														BgL_portz00_45);
													bgl_display_string(string_for_read(BgL_strz00_1476),
														BgL_portz00_45);
													return
														bgl_display_string
														(BGl_string3026z00zz__r4_output_6_10_3z00,
														BgL_portz00_45);
												}
										}
									else
										{	/* Ieee/output.scm 711 */
											unsigned char BgL_cz00_1485;

											BgL_cz00_1485 =
												STRING_REF(BgL_strz00_1476, BgL_iz00_1481);
											{

												switch (BgL_cz00_1485)
													{
													case ((unsigned char) ' '):
													case ((unsigned char) '\n'):
													case ((unsigned char) '\t'):
													case ((unsigned char) '\r'):
													case ((unsigned char) '`'):
													case ((unsigned char) '\''):
													case ((unsigned char) '"'):
													case ((unsigned char) '#'):
													case ((unsigned char) '\\'):
													case ((unsigned char) ';'):
													case ((unsigned char) '('):
													case ((unsigned char) ')'):
													case ((unsigned char) '['):
													case ((unsigned char) ']'):
													case ((unsigned char) '{'):
													case ((unsigned char) '}'):
													case ((unsigned char) ','):

														goto BgL_zc3anonymousza32213ze3z83_1505;
														break;
													case ((unsigned char) ':'):

														if ((BgL_iz00_1481 == ((long) 0)))
															{	/* Ieee/output.scm 718 */
																bool_t BgL_testz00_4814;

																if ((BgL_lenzd21zd2_1478 > ((long) 2)))
																	{	/* Ieee/output.scm 718 */
																		BgL_testz00_4814 =
																			(STRING_REF(BgL_strz00_1476,
																				(BgL_iz00_1481 + ((long) 1))) ==
																			((unsigned char) ':'));
																	}
																else
																	{	/* Ieee/output.scm 718 */
																		BgL_testz00_4814 = ((bool_t) 0);
																	}
																if (BgL_testz00_4814)
																	{
																		long BgL_iz00_4820;

																		BgL_iz00_4820 =
																			(BgL_iz00_1481 + ((long) 2));
																		BgL_iz00_1481 = BgL_iz00_4820;
																		goto BgL_zc3anonymousza32195ze3z83_1483;
																	}
																else
																	{	/* Ieee/output.scm 718 */
																		goto BgL_zc3anonymousza32213ze3z83_1505;
																	}
															}
														else
															{	/* Ieee/output.scm 717 */
																if ((BgL_iz00_1481 == BgL_lenzd21zd2_1478))
																	{	/* Ieee/output.scm 722 */
																		goto BgL_zc3anonymousza32213ze3z83_1505;
																	}
																else
																	{
																		long BgL_iz00_4824;

																		BgL_iz00_4824 =
																			(BgL_iz00_1481 + ((long) 1));
																		BgL_iz00_1481 = BgL_iz00_4824;
																		goto BgL_zc3anonymousza32195ze3z83_1483;
																	}
															}
														break;
													case ((unsigned char) '.'):

														if ((BgL_lenz00_1477 == ((long) 1)))
															{	/* Ieee/output.scm 727 */
																goto BgL_zc3anonymousza32213ze3z83_1505;
															}
														else
															{
																long BgL_iz00_4828;

																BgL_iz00_4828 = (BgL_iz00_1481 + ((long) 1));
																BgL_iz00_1481 = BgL_iz00_4828;
																goto BgL_zc3anonymousza32195ze3z83_1483;
															}
														break;
													default:
														if ((BgL_cz00_1485 >= ((unsigned char) '')))
															{	/* Ieee/output.scm 731 */
																goto BgL_zc3anonymousza32213ze3z83_1505;
															}
														else
															{	/* Ieee/output.scm 733 */
																long BgL_arg2210z00_1500;

																bool_t BgL_arg2211z00_1501;

																BgL_arg2210z00_1500 =
																	(BgL_iz00_1481 + ((long) 1));
																if (BgL_az00_1482)
																	{	/* Ieee/output.scm 733 */
																		BgL_arg2211z00_1501 = BgL_az00_1482;
																	}
																else
																	{	/* Ieee/output.scm 733 */
																		if (isdigit(BgL_cz00_1485))
																			{	/* Ieee/output.scm 733 */
																				BgL_arg2211z00_1501 = ((bool_t) 0);
																			}
																		else
																			{	/* Ieee/output.scm 733 */
																				BgL_arg2211z00_1501 = ((bool_t) 1);
																			}
																	}
																{
																	bool_t BgL_az00_4837;

																	long BgL_iz00_4836;

																	BgL_iz00_4836 = BgL_arg2210z00_1500;
																	BgL_az00_4837 = BgL_arg2211z00_1501;
																	BgL_az00_1482 = BgL_az00_4837;
																	BgL_iz00_1481 = BgL_iz00_4836;
																	goto BgL_zc3anonymousza32195ze3z83_1483;
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
			}
		}
	}



/* _write-symbol */
	obj_t BGl__writezd2symbolzd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3581,
		obj_t BgL_objz00_3582, obj_t BgL_portz00_3583)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 699 */
			{	/* Ieee/output.scm 700 */
				obj_t BgL_auxz00_4846;

				obj_t BgL_auxz00_4839;

				if (OUTPUT_PORTP(BgL_portz00_3583))
					{	/* Ieee/output.scm 700 */
						BgL_auxz00_4846 = BgL_portz00_3583;
					}
				else
					{
						obj_t BgL_auxz00_4849;

						BgL_auxz00_4849 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 25163)),
							BGl_string3027z00zz__r4_output_6_10_3z00,
							BGl_string2969z00zz__r4_output_6_10_3z00, BgL_portz00_3583);
						FAILURE(BgL_auxz00_4849, BFALSE, BFALSE);
					}
				if (SYMBOLP(BgL_objz00_3582))
					{	/* Ieee/output.scm 700 */
						BgL_auxz00_4839 = BgL_objz00_3582;
					}
				else
					{
						obj_t BgL_auxz00_4842;

						BgL_auxz00_4842 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 25163)),
							BGl_string3027z00zz__r4_output_6_10_3z00,
							BGl_string3025z00zz__r4_output_6_10_3z00, BgL_objz00_3582);
						FAILURE(BgL_auxz00_4842, BFALSE, BFALSE);
					}
				return
					BGl_writezd2symbolzd2zz__r4_output_6_10_3z00(BgL_auxz00_4839,
					BgL_auxz00_4846);
			}
		}
	}



/* display-string */
	BGL_EXPORTED_DEF obj_t BGl_displayzd2stringzd2zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_46, obj_t BgL_portz00_47)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 738 */
			return bgl_display_string(BgL_objz00_46, BgL_portz00_47);
		}
	}



/* _display-string */
	obj_t BGl__displayzd2stringzd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3584,
		obj_t BgL_objz00_3585, obj_t BgL_portz00_3586)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 738 */
			{	/* Ieee/output.scm 739 */
				obj_t BgL_objz00_3703;

				obj_t BgL_portz00_3704;

				if (STRINGP(BgL_objz00_3585))
					{	/* Ieee/output.scm 739 */
						BgL_objz00_3703 = BgL_objz00_3585;
					}
				else
					{
						obj_t BgL_auxz00_4857;

						BgL_auxz00_4857 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 26295)),
							BGl_string3028z00zz__r4_output_6_10_3z00,
							BGl_string2998z00zz__r4_output_6_10_3z00, BgL_objz00_3585);
						FAILURE(BgL_auxz00_4857, BFALSE, BFALSE);
					}
				if (OUTPUT_PORTP(BgL_portz00_3586))
					{	/* Ieee/output.scm 739 */
						BgL_portz00_3704 = BgL_portz00_3586;
					}
				else
					{
						obj_t BgL_auxz00_4863;

						BgL_auxz00_4863 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 26295)),
							BGl_string3028z00zz__r4_output_6_10_3z00,
							BGl_string2969z00zz__r4_output_6_10_3z00, BgL_portz00_3586);
						FAILURE(BgL_auxz00_4863, BFALSE, BFALSE);
					}
				return bgl_display_string(BgL_objz00_3703, BgL_portz00_3704);
			}
		}
	}



/* display-substring */
	BGL_EXPORTED_DEF obj_t BGl_displayzd2substringzd2zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_48, long BgL_startz00_49, long BgL_endz00_50,
		obj_t BgL_portz00_51)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 744 */
			{	/* Ieee/output.scm 745 */
				bool_t BgL_testz00_4868;

				if ((BgL_endz00_50 >= BgL_startz00_49))
					{	/* Ieee/output.scm 745 */
						bool_t BgL_testz00_4871;

						{	/* Ieee/output.scm 745 */
							long BgL_auxz00_4872;

							BgL_auxz00_4872 = (STRING_LENGTH(BgL_objz00_48) + ((long) 1));
							BgL_testz00_4871 = BOUND_CHECK(BgL_endz00_50, BgL_auxz00_4872);
						}
						if (BgL_testz00_4871)
							{	/* Ieee/output.scm 745 */
								BgL_testz00_4868 = (BgL_startz00_49 >= ((long) 0));
							}
						else
							{	/* Ieee/output.scm 745 */
								BgL_testz00_4868 = ((bool_t) 0);
							}
					}
				else
					{	/* Ieee/output.scm 745 */
						BgL_testz00_4868 = ((bool_t) 0);
					}
				if (BgL_testz00_4868)
					{	/* Ieee/output.scm 745 */
						return
							bgl_display_substring(BgL_objz00_48, BgL_startz00_49,
							BgL_endz00_50, BgL_portz00_51);
					}
				else
					{	/* Ieee/output.scm 745 */
						obj_t BgL_arg2216z00_3705;

						obj_t BgL_arg2217z00_3706;

						BgL_arg2216z00_3705 = BGl_symbol3029z00zz__r4_output_6_10_3z00;
						{	/* Ieee/output.scm 745 */
							obj_t BgL_list2218z00_3707;

							{	/* Ieee/output.scm 745 */
								obj_t BgL_arg2222z00_3708;

								BgL_arg2222z00_3708 = MAKE_PAIR(BINT(BgL_endz00_50), BNIL);
								BgL_list2218z00_3707 =
									MAKE_PAIR(BINT(BgL_startz00_49), BgL_arg2222z00_3708);
							}
							BgL_arg2217z00_3706 =
								BGl_formatz00zz__r4_output_6_10_3z00
								(BGl_string3031z00zz__r4_output_6_10_3z00,
								BgL_list2218z00_3707);
						}
						return
							BGl_errorz00zz__errorz00(BgL_arg2216z00_3705, BgL_arg2217z00_3706,
							BgL_objz00_48);
					}
			}
		}
	}



/* _display-substring */
	obj_t BGl__displayzd2substringzd2zz__r4_output_6_10_3z00(obj_t
		BgL_envz00_3587, obj_t BgL_objz00_3588, obj_t BgL_startz00_3589,
		obj_t BgL_endz00_3590, obj_t BgL_portz00_3591)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 744 */
			{	/* Ieee/output.scm 745 */
				obj_t BgL_objz00_3709;

				long BgL_startz00_3710;

				long BgL_endz00_3711;

				obj_t BgL_portz00_3712;

				if (STRINGP(BgL_objz00_3588))
					{	/* Ieee/output.scm 745 */
						BgL_objz00_3709 = BgL_objz00_3588;
					}
				else
					{
						obj_t BgL_auxz00_4886;

						BgL_auxz00_4886 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 26612)),
							BGl_string3032z00zz__r4_output_6_10_3z00,
							BGl_string2998z00zz__r4_output_6_10_3z00, BgL_objz00_3588);
						FAILURE(BgL_auxz00_4886, BFALSE, BFALSE);
					}
				{	/* Ieee/output.scm 745 */
					obj_t BgL_auxz00_4890;

					if (INTEGERP(BgL_startz00_3589))
						{	/* Ieee/output.scm 745 */
							BgL_auxz00_4890 = BgL_startz00_3589;
						}
					else
						{
							obj_t BgL_auxz00_4893;

							BgL_auxz00_4893 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 26612)),
								BGl_string3032z00zz__r4_output_6_10_3z00,
								BGl_string3033z00zz__r4_output_6_10_3z00, BgL_startz00_3589);
							FAILURE(BgL_auxz00_4893, BFALSE, BFALSE);
						}
					BgL_startz00_3710 = (long) CINT(BgL_auxz00_4890);
				}
				{	/* Ieee/output.scm 745 */
					obj_t BgL_auxz00_4898;

					if (INTEGERP(BgL_endz00_3590))
						{	/* Ieee/output.scm 745 */
							BgL_auxz00_4898 = BgL_endz00_3590;
						}
					else
						{
							obj_t BgL_auxz00_4901;

							BgL_auxz00_4901 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 26612)),
								BGl_string3032z00zz__r4_output_6_10_3z00,
								BGl_string3033z00zz__r4_output_6_10_3z00, BgL_endz00_3590);
							FAILURE(BgL_auxz00_4901, BFALSE, BFALSE);
						}
					BgL_endz00_3711 = (long) CINT(BgL_auxz00_4898);
				}
				if (OUTPUT_PORTP(BgL_portz00_3591))
					{	/* Ieee/output.scm 745 */
						BgL_portz00_3712 = BgL_portz00_3591;
					}
				else
					{
						obj_t BgL_auxz00_4908;

						BgL_auxz00_4908 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 26612)),
							BGl_string3032z00zz__r4_output_6_10_3z00,
							BGl_string2969z00zz__r4_output_6_10_3z00, BgL_portz00_3591);
						FAILURE(BgL_auxz00_4908, BFALSE, BFALSE);
					}
				{	/* Ieee/output.scm 745 */
					bool_t BgL_testz00_4912;

					if ((BgL_endz00_3711 >= BgL_startz00_3710))
						{	/* Ieee/output.scm 745 */
							bool_t BgL_testz00_4915;

							{	/* Ieee/output.scm 745 */
								long BgL_auxz00_4916;

								BgL_auxz00_4916 = (STRING_LENGTH(BgL_objz00_3709) + ((long) 1));
								BgL_testz00_4915 =
									BOUND_CHECK(BgL_endz00_3711, BgL_auxz00_4916);
							}
							if (BgL_testz00_4915)
								{	/* Ieee/output.scm 745 */
									BgL_testz00_4912 = (BgL_startz00_3710 >= ((long) 0));
								}
							else
								{	/* Ieee/output.scm 745 */
									BgL_testz00_4912 = ((bool_t) 0);
								}
						}
					else
						{	/* Ieee/output.scm 745 */
							BgL_testz00_4912 = ((bool_t) 0);
						}
					if (BgL_testz00_4912)
						{	/* Ieee/output.scm 745 */
							return
								bgl_display_substring(BgL_objz00_3709, BgL_startz00_3710,
								BgL_endz00_3711, BgL_portz00_3712);
						}
					else
						{	/* Ieee/output.scm 745 */
							obj_t BgL_arg2216z00_3713;

							obj_t BgL_arg2217z00_3714;

							BgL_arg2216z00_3713 = BGl_symbol3029z00zz__r4_output_6_10_3z00;
							{	/* Ieee/output.scm 745 */
								obj_t BgL_list2218z00_3715;

								{	/* Ieee/output.scm 745 */
									obj_t BgL_arg2222z00_3716;

									BgL_arg2222z00_3716 = MAKE_PAIR(BINT(BgL_endz00_3711), BNIL);
									BgL_list2218z00_3715 =
										MAKE_PAIR(BINT(BgL_startz00_3710), BgL_arg2222z00_3716);
								}
								BgL_arg2217z00_3714 =
									BGl_formatz00zz__r4_output_6_10_3z00
									(BGl_string3031z00zz__r4_output_6_10_3z00,
									BgL_list2218z00_3715);
							}
							return
								BGl_errorz00zz__errorz00(BgL_arg2216z00_3713,
								BgL_arg2217z00_3714, BgL_objz00_3709);
						}
				}
			}
		}
	}



/* write-string */
	BGL_EXPORTED_DEF obj_t BGl_writezd2stringzd2zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_52, obj_t BgL_portz00_53)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 756 */
			if (BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00())
				{	/* Ieee/output.scm 757 */
					obj_t BgL_strz00_3162;

					BgL_strz00_3162 = string_for_read(BgL_objz00_52);
					{	/* Ieee/output.scm 757 */
						obj_t BgL_escz00_3163;

						{	/* Ieee/output.scm 757 */
							int BgL_auxz00_4931;

							BgL_auxz00_4931 = (int) (((long) 1));
							BgL_escz00_3163 = BGL_MVALUES_VAL(BgL_auxz00_4931);
						}
						return
							bgl_write_string(BgL_strz00_3162,
							CBOOL(BgL_escz00_3163), BgL_portz00_53);
					}
				}
			else
				{	/* Ieee/output.scm 757 */
					return
						bgl_write_string(string_for_read(BgL_objz00_52), ((bool_t) 0),
						BgL_portz00_53);
				}
		}
	}



/* _write-string */
	obj_t BGl__writezd2stringzd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3592,
		obj_t BgL_objz00_3593, obj_t BgL_portz00_3594)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 756 */
			{	/* Ieee/output.scm 757 */
				obj_t BgL_auxz00_4945;

				obj_t BgL_auxz00_4938;

				if (OUTPUT_PORTP(BgL_portz00_3594))
					{	/* Ieee/output.scm 757 */
						BgL_auxz00_4945 = BgL_portz00_3594;
					}
				else
					{
						obj_t BgL_auxz00_4948;

						BgL_auxz00_4948 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 27121)),
							BGl_string3034z00zz__r4_output_6_10_3z00,
							BGl_string2969z00zz__r4_output_6_10_3z00, BgL_portz00_3594);
						FAILURE(BgL_auxz00_4948, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_objz00_3593))
					{	/* Ieee/output.scm 757 */
						BgL_auxz00_4938 = BgL_objz00_3593;
					}
				else
					{
						obj_t BgL_auxz00_4941;

						BgL_auxz00_4941 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 27121)),
							BGl_string3034z00zz__r4_output_6_10_3z00,
							BGl_string2998z00zz__r4_output_6_10_3z00, BgL_objz00_3593);
						FAILURE(BgL_auxz00_4941, BFALSE, BFALSE);
					}
				return
					BGl_writezd2stringzd2zz__r4_output_6_10_3z00(BgL_auxz00_4938,
					BgL_auxz00_4945);
			}
		}
	}



/* display-fixnum */
	BGL_EXPORTED_DEF obj_t BGl_displayzd2fixnumzd2zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_56, obj_t BgL_portz00_57)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 777 */
			return bgl_display_fixnum(BgL_objz00_56, BgL_portz00_57);
		}
	}



/* _display-fixnum */
	obj_t BGl__displayzd2fixnumzd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3595,
		obj_t BgL_objz00_3596, obj_t BgL_portz00_3597)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 777 */
			{	/* Ieee/output.scm 778 */
				obj_t BgL_objz00_3717;

				obj_t BgL_portz00_3718;

				if (INTEGERP(BgL_objz00_3596))
					{	/* Ieee/output.scm 778 */
						BgL_objz00_3717 = BgL_objz00_3596;
					}
				else
					{
						obj_t BgL_auxz00_4956;

						BgL_auxz00_4956 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 28007)),
							BGl_string3035z00zz__r4_output_6_10_3z00,
							BGl_string3036z00zz__r4_output_6_10_3z00, BgL_objz00_3596);
						FAILURE(BgL_auxz00_4956, BFALSE, BFALSE);
					}
				if (OUTPUT_PORTP(BgL_portz00_3597))
					{	/* Ieee/output.scm 778 */
						BgL_portz00_3718 = BgL_portz00_3597;
					}
				else
					{
						obj_t BgL_auxz00_4962;

						BgL_auxz00_4962 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 28007)),
							BGl_string3035z00zz__r4_output_6_10_3z00,
							BGl_string2969z00zz__r4_output_6_10_3z00, BgL_portz00_3597);
						FAILURE(BgL_auxz00_4962, BFALSE, BFALSE);
					}
				return bgl_display_fixnum(BgL_objz00_3717, BgL_portz00_3718);
			}
		}
	}



/* display-elong */
	BGL_EXPORTED_DEF obj_t BGl_displayzd2elongzd2zz__r4_output_6_10_3z00(long
		BgL_objz00_58, obj_t BgL_portz00_59)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 783 */
			return bgl_display_elong(BgL_objz00_58, BgL_portz00_59);
		}
	}



/* _display-elong */
	obj_t BGl__displayzd2elongzd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3598,
		obj_t BgL_objz00_3599, obj_t BgL_portz00_3600)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 783 */
			{	/* Ieee/output.scm 784 */
				long BgL_objz00_3719;

				obj_t BgL_portz00_3720;

				{	/* Ieee/output.scm 784 */
					obj_t BgL_auxz00_4968;

					if (ELONGP(BgL_objz00_3599))
						{	/* Ieee/output.scm 784 */
							BgL_auxz00_4968 = BgL_objz00_3599;
						}
					else
						{
							obj_t BgL_auxz00_4971;

							BgL_auxz00_4971 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 28301)),
								BGl_string3037z00zz__r4_output_6_10_3z00,
								BGl_string3038z00zz__r4_output_6_10_3z00, BgL_objz00_3599);
							FAILURE(BgL_auxz00_4971, BFALSE, BFALSE);
						}
					BgL_objz00_3719 = BELONG_TO_LONG(BgL_auxz00_4968);
				}
				if (OUTPUT_PORTP(BgL_portz00_3600))
					{	/* Ieee/output.scm 784 */
						BgL_portz00_3720 = BgL_portz00_3600;
					}
				else
					{
						obj_t BgL_auxz00_4978;

						BgL_auxz00_4978 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 28301)),
							BGl_string3037z00zz__r4_output_6_10_3z00,
							BGl_string2969z00zz__r4_output_6_10_3z00, BgL_portz00_3600);
						FAILURE(BgL_auxz00_4978, BFALSE, BFALSE);
					}
				return bgl_display_elong(BgL_objz00_3719, BgL_portz00_3720);
			}
		}
	}



/* display-flonum */
	BGL_EXPORTED_DEF obj_t BGl_displayzd2flonumzd2zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_60, obj_t BgL_portz00_61)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 789 */
			{	/* Ieee/output.scm 790 */
				obj_t BgL_arg2237z00_3721;

				BgL_arg2237z00_3721 = real_to_string(REAL_TO_DOUBLE(BgL_objz00_60));
				return bgl_display_string(BgL_arg2237z00_3721, BgL_portz00_61);
			}
		}
	}



/* _display-flonum */
	obj_t BGl__displayzd2flonumzd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3601,
		obj_t BgL_objz00_3602, obj_t BgL_portz00_3603)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 789 */
			{	/* Ieee/output.scm 790 */
				obj_t BgL_objz00_3722;

				obj_t BgL_portz00_3723;

				if (REALP(BgL_objz00_3602))
					{	/* Ieee/output.scm 790 */
						BgL_objz00_3722 = BgL_objz00_3602;
					}
				else
					{
						obj_t BgL_auxz00_4988;

						BgL_auxz00_4988 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 28611)),
							BGl_string3039z00zz__r4_output_6_10_3z00,
							BGl_string3040z00zz__r4_output_6_10_3z00, BgL_objz00_3602);
						FAILURE(BgL_auxz00_4988, BFALSE, BFALSE);
					}
				if (OUTPUT_PORTP(BgL_portz00_3603))
					{	/* Ieee/output.scm 790 */
						BgL_portz00_3723 = BgL_portz00_3603;
					}
				else
					{
						obj_t BgL_auxz00_4994;

						BgL_auxz00_4994 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 28611)),
							BGl_string3039z00zz__r4_output_6_10_3z00,
							BGl_string2969z00zz__r4_output_6_10_3z00, BgL_portz00_3603);
						FAILURE(BgL_auxz00_4994, BFALSE, BFALSE);
					}
				{	/* Ieee/output.scm 790 */
					obj_t BgL_arg2237z00_3724;

					BgL_arg2237z00_3724 = real_to_string(REAL_TO_DOUBLE(BgL_objz00_3722));
					return bgl_display_string(BgL_arg2237z00_3724, BgL_portz00_3723);
				}
			}
		}
	}



/* display-ucs2string */
	BGL_EXPORTED_DEF obj_t
		BGl_displayzd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_62,
		obj_t BgL_portz00_63)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 795 */
			return bgl_display_ucs2string(BgL_objz00_62, BgL_portz00_63);
		}
	}



/* _display-ucs2string */
	obj_t BGl__displayzd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t
		BgL_envz00_3604, obj_t BgL_objz00_3605, obj_t BgL_portz00_3606)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 795 */
			{	/* Ieee/output.scm 796 */
				obj_t BgL_objz00_3725;

				obj_t BgL_portz00_3726;

				if (UCS2_STRINGP(BgL_objz00_3605))
					{	/* Ieee/output.scm 796 */
						BgL_objz00_3725 = BgL_objz00_3605;
					}
				else
					{
						obj_t BgL_auxz00_5004;

						BgL_auxz00_5004 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 28901)),
							BGl_string3041z00zz__r4_output_6_10_3z00,
							BGl_string3042z00zz__r4_output_6_10_3z00, BgL_objz00_3605);
						FAILURE(BgL_auxz00_5004, BFALSE, BFALSE);
					}
				if (OUTPUT_PORTP(BgL_portz00_3606))
					{	/* Ieee/output.scm 796 */
						BgL_portz00_3726 = BgL_portz00_3606;
					}
				else
					{
						obj_t BgL_auxz00_5010;

						BgL_auxz00_5010 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 28901)),
							BGl_string3041z00zz__r4_output_6_10_3z00,
							BGl_string2969z00zz__r4_output_6_10_3z00, BgL_portz00_3606);
						FAILURE(BgL_auxz00_5010, BFALSE, BFALSE);
					}
				return bgl_display_ucs2string(BgL_objz00_3725, BgL_portz00_3726);
			}
		}
	}



/* write-ucs2string */
	BGL_EXPORTED_DEF obj_t BGl_writezd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_64, obj_t BgL_portz00_65)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 801 */
			return
				bgl_write_utf8string(string_for_read(ucs2_string_to_utf8_string
					(BgL_objz00_64)), BgL_portz00_65);
		}
	}



/* _write-ucs2string */
	obj_t BGl__writezd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3607,
		obj_t BgL_objz00_3608, obj_t BgL_portz00_3609)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 801 */
			{	/* Ieee/output.scm 802 */
				obj_t BgL_auxz00_5025;

				obj_t BgL_auxz00_5018;

				if (OUTPUT_PORTP(BgL_portz00_3609))
					{	/* Ieee/output.scm 802 */
						BgL_auxz00_5025 = BgL_portz00_3609;
					}
				else
					{
						obj_t BgL_auxz00_5028;

						BgL_auxz00_5028 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 29231)),
							BGl_string3043z00zz__r4_output_6_10_3z00,
							BGl_string2969z00zz__r4_output_6_10_3z00, BgL_portz00_3609);
						FAILURE(BgL_auxz00_5028, BFALSE, BFALSE);
					}
				if (UCS2_STRINGP(BgL_objz00_3608))
					{	/* Ieee/output.scm 802 */
						BgL_auxz00_5018 = BgL_objz00_3608;
					}
				else
					{
						obj_t BgL_auxz00_5021;

						BgL_auxz00_5021 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2967z00zz__r4_output_6_10_3z00, BINT(((long) 29231)),
							BGl_string3043z00zz__r4_output_6_10_3z00,
							BGl_string3042z00zz__r4_output_6_10_3z00, BgL_objz00_3608);
						FAILURE(BgL_auxz00_5021, BFALSE, BFALSE);
					}
				return
					BGl_writezd2ucs2stringzd2zz__r4_output_6_10_3z00(BgL_auxz00_5018,
					BgL_auxz00_5025);
			}
		}
	}



/* write/display-structure */
	obj_t BGl_writezf2displayzd2structurez20zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_79, obj_t BgL_portz00_80, obj_t BgL_dispz00_81)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 854 */
			bgl_display_char(((unsigned char) '#'), BgL_portz00_80);
			bgl_display_char(((unsigned char) '{'), BgL_portz00_80);
			{	/* Ieee/output.scm 857 */
				obj_t BgL_arg2247z00_1532;

				BgL_arg2247z00_1532 = STRUCT_KEY(BgL_objz00_79);
				PROCEDURE_ENTRY(BgL_dispz00_81) (BgL_dispz00_81, BgL_arg2247z00_1532,
					BgL_portz00_80, BEOA);
			}
			if ((((long) 0) == (long) (STRUCT_LENGTH(BgL_objz00_79))))
				{	/* Ieee/output.scm 858 */
					return bgl_display_char(((unsigned char) '}'), BgL_portz00_80);
				}
			else
				{	/* Ieee/output.scm 860 */
					long BgL_lenz00_1534;

					BgL_lenz00_1534 =
						((long) (STRUCT_LENGTH(BgL_objz00_79)) - ((long) 1));
					bgl_display_char(((unsigned char) ' '), BgL_portz00_80);
					{
						long BgL_iz00_1536;

						BgL_iz00_1536 = ((long) 0);
					BgL_zc3anonymousza32249ze3z83_1537:
						if ((BgL_iz00_1536 == BgL_lenz00_1534))
							{	/* Ieee/output.scm 864 */
								{	/* Ieee/output.scm 865 */
									obj_t BgL_arg2251z00_1539;

									BgL_arg2251z00_1539 =
										STRUCT_REF(BgL_objz00_79, (int) (BgL_iz00_1536));
									PROCEDURE_ENTRY(BgL_dispz00_81) (BgL_dispz00_81,
										BgL_arg2251z00_1539, BgL_portz00_80, BEOA);
								}
								return bgl_display_char(((unsigned char) '}'), BgL_portz00_80);
							}
						else
							{	/* Ieee/output.scm 864 */
								{	/* Ieee/output.scm 868 */
									obj_t BgL_arg2252z00_1540;

									BgL_arg2252z00_1540 =
										STRUCT_REF(BgL_objz00_79, (int) (BgL_iz00_1536));
									PROCEDURE_ENTRY(BgL_dispz00_81) (BgL_dispz00_81,
										BgL_arg2252z00_1540, BgL_portz00_80, BEOA);
								}
								bgl_display_char(((unsigned char) ' '), BgL_portz00_80);
								{
									long BgL_iz00_5059;

									BgL_iz00_5059 = (((long) 1) + BgL_iz00_1536);
									BgL_iz00_1536 = BgL_iz00_5059;
									goto BgL_zc3anonymousza32249ze3z83_1537;
								}
							}
					}
				}
		}
	}



/* write/display-vector */
	obj_t BGl_writezf2displayzd2vectorz20zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_82, obj_t BgL_portz00_83, obj_t BgL_dispz00_84)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 875 */
			bgl_display_char(((unsigned char) '#'), BgL_portz00_83);
			{	/* Ieee/output.scm 877 */
				int BgL_tagz00_1547;

				BgL_tagz00_1547 = VECTOR_TAG(BgL_objz00_82);
				if (((long) (BgL_tagz00_1547) > ((long) 0)))
					{	/* Ieee/output.scm 878 */
						if (((long) (BgL_tagz00_1547) >= ((long) 100)))
							{	/* Ieee/output.scm 880 */
								PROCEDURE_ENTRY(BgL_dispz00_84) (BgL_dispz00_84,
									BINT(BgL_tagz00_1547), BgL_portz00_83, BEOA);
							}
						else
							{	/* Ieee/output.scm 880 */
								bgl_display_char(((unsigned char) '0'), BgL_portz00_83);
								if (((long) (BgL_tagz00_1547) >= ((long) 10)))
									{	/* Ieee/output.scm 884 */
										PROCEDURE_ENTRY(BgL_dispz00_84) (BgL_dispz00_84,
											BINT(BgL_tagz00_1547), BgL_portz00_83, BEOA);
									}
								else
									{	/* Ieee/output.scm 884 */
										bgl_display_char(((unsigned char) '0'), BgL_portz00_83);
										PROCEDURE_ENTRY(BgL_dispz00_84) (BgL_dispz00_84,
											BINT(BgL_tagz00_1547), BgL_portz00_83, BEOA);
					}}}
				else
					{	/* Ieee/output.scm 878 */
						BFALSE;
					}
			}
			bgl_display_char(((unsigned char) '('), BgL_portz00_83);
			{	/* Ieee/output.scm 890 */
				bool_t BgL_testz00_5084;

				{	/* Ieee/output.scm 890 */
					int BgL_arg2272z00_1564;

					BgL_arg2272z00_1564 = VECTOR_LENGTH(BgL_objz00_82);
					BgL_testz00_5084 = (((long) 0) == (long) (BgL_arg2272z00_1564));
				}
				if (BgL_testz00_5084)
					{	/* Ieee/output.scm 890 */
						return bgl_display_char(((unsigned char) ')'), BgL_portz00_83);
					}
				else
					{	/* Ieee/output.scm 892 */
						long BgL_lenz00_1552;

						{	/* Ieee/output.scm 892 */
							int BgL_arg2269z00_1561;

							BgL_arg2269z00_1561 = VECTOR_LENGTH(BgL_objz00_82);
							BgL_lenz00_1552 = ((long) (BgL_arg2269z00_1561) - ((long) 1));
						}
						{
							long BgL_iz00_1554;

							BgL_iz00_1554 = ((long) 0);
						BgL_zc3anonymousza32264ze3z83_1555:
							if ((BgL_iz00_1554 == BgL_lenz00_1552))
								{	/* Ieee/output.scm 895 */
									{	/* Ieee/output.scm 896 */
										obj_t BgL_arg2266z00_1557;

										BgL_arg2266z00_1557 =
											VECTOR_REF(BgL_objz00_82, (int) (BgL_iz00_1554));
										PROCEDURE_ENTRY(BgL_dispz00_84) (BgL_dispz00_84,
											BgL_arg2266z00_1557, BgL_portz00_83, BEOA);
									}
									return
										bgl_display_char(((unsigned char) ')'), BgL_portz00_83);
								}
							else
								{	/* Ieee/output.scm 895 */
									{	/* Ieee/output.scm 899 */
										obj_t BgL_arg2267z00_1558;

										BgL_arg2267z00_1558 =
											VECTOR_REF(BgL_objz00_82, (int) (BgL_iz00_1554));
										PROCEDURE_ENTRY(BgL_dispz00_84) (BgL_dispz00_84,
											BgL_arg2267z00_1558, BgL_portz00_83, BEOA);
									}
									bgl_display_char(((unsigned char) ' '), BgL_portz00_83);
									{
										long BgL_iz00_5104;

										BgL_iz00_5104 = (((long) 1) + BgL_iz00_1554);
										BgL_iz00_1554 = BgL_iz00_5104;
										goto BgL_zc3anonymousza32264ze3z83_1555;
									}
								}
						}
					}
			}
		}
	}



/* write/display-tvector */
	obj_t BGl_writezf2displayzd2tvectorz20zz__r4_output_6_10_3z00(obj_t
		BgL_tvecz00_85, obj_t BgL_portz00_86, obj_t BgL_dispz00_87)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 906 */
			{	/* Ieee/output.scm 907 */
				obj_t BgL_tvectorzd2refzd2_1565;

				obj_t BgL_idz00_1566;

				BgL_tvectorzd2refzd2_1565 =
					BGl_tvectorzd2refzd2zz__tvectorz00(BgL_tvecz00_85);
				BgL_idz00_1566 = BGl_tvectorzd2idzd2zz__tvectorz00(BgL_tvecz00_85);
				bgl_display_char(((unsigned char) '#'), BgL_portz00_86);
				PROCEDURE_ENTRY(BgL_dispz00_87) (BgL_dispz00_87, BgL_idz00_1566,
					BgL_portz00_86, BEOA);
				bgl_display_char(((unsigned char) '('), BgL_portz00_86);
				if (CBOOL(BgL_tvectorzd2refzd2_1565))
					{	/* Ieee/output.scm 912 */
						if ((((long) 0) == (long) (TVECTOR_LENGTH(BgL_tvecz00_85))))
							{	/* Ieee/output.scm 917 */
								return bgl_display_char(((unsigned char) ')'), BgL_portz00_86);
							}
						else
							{	/* Ieee/output.scm 919 */
								long BgL_lenz00_1568;

								BgL_lenz00_1568 =
									((long) (TVECTOR_LENGTH(BgL_tvecz00_85)) - ((long) 1));
								{
									long BgL_iz00_1570;

									BgL_iz00_1570 = ((long) 0);
								BgL_zc3anonymousza32274ze3z83_1571:
									if ((BgL_iz00_1570 == BgL_lenz00_1568))
										{	/* Ieee/output.scm 922 */
											{	/* Ieee/output.scm 923 */
												obj_t BgL_arg2277z00_1573;

												BgL_arg2277z00_1573 =
													PROCEDURE_ENTRY(BgL_tvectorzd2refzd2_1565)
													(BgL_tvectorzd2refzd2_1565, BgL_tvecz00_85,
													BINT(BgL_iz00_1570), BEOA);
												PROCEDURE_ENTRY(BgL_dispz00_87) (BgL_dispz00_87,
													BgL_arg2277z00_1573, BgL_portz00_86, BEOA);
											}
											return
												bgl_display_char(((unsigned char) ')'), BgL_portz00_86);
										}
									else
										{	/* Ieee/output.scm 922 */
											{	/* Ieee/output.scm 926 */
												obj_t BgL_arg2278z00_1574;

												BgL_arg2278z00_1574 =
													PROCEDURE_ENTRY(BgL_tvectorzd2refzd2_1565)
													(BgL_tvectorzd2refzd2_1565, BgL_tvecz00_85,
													BINT(BgL_iz00_1570), BEOA);
												PROCEDURE_ENTRY(BgL_dispz00_87) (BgL_dispz00_87,
													BgL_arg2278z00_1574, BgL_portz00_86, BEOA);
											}
											bgl_display_char(((unsigned char) ' '), BgL_portz00_86);
											{
												long BgL_iz00_5136;

												BgL_iz00_5136 = (((long) 1) + BgL_iz00_1570);
												BgL_iz00_1570 = BgL_iz00_5136;
												goto BgL_zc3anonymousza32274ze3z83_1571;
											}
										}
								}
							}
					}
				else
					{	/* Ieee/output.scm 912 */
						bgl_display_string(BGl_string3044z00zz__r4_output_6_10_3z00,
							BgL_portz00_86);
						return BgL_tvecz00_85;
					}
			}
		}
	}



/* write/display-hvector */
	obj_t BGl_writezf2displayzd2hvectorz20zz__r4_output_6_10_3z00(obj_t
		BgL_svecz00_88, obj_t BgL_portz00_89, obj_t BgL_dispz00_90)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 933 */
			{	/* Ieee/output.scm 934 */
				obj_t BgL_idz00_1581;

				BgL_idz00_1581 =
					BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(BgL_svecz00_88);
				{	/* Ieee/output.scm 950 */
					obj_t BgL__z00_1582;

					obj_t BgL_vrefz00_1583;

					obj_t BgL__z00_1584;

					{	/* Ieee/output.scm 950 */
						int BgL_auxz00_5140;

						BgL_auxz00_5140 = (int) (((long) 1));
						BgL__z00_1582 = BGL_MVALUES_VAL(BgL_auxz00_5140);
					}
					{	/* Ieee/output.scm 950 */
						int BgL_auxz00_5143;

						BgL_auxz00_5143 = (int) (((long) 2));
						BgL_vrefz00_1583 = BGL_MVALUES_VAL(BgL_auxz00_5143);
					}
					{	/* Ieee/output.scm 950 */
						int BgL_auxz00_5146;

						BgL_auxz00_5146 = (int) (((long) 3));
						BgL__z00_1584 = BGL_MVALUES_VAL(BgL_auxz00_5146);
					}
					bgl_display_char(((unsigned char) '#'), BgL_portz00_89);
					{	/* Ieee/output.scm 937 */
						obj_t BgL_objz00_3280;

						BgL_objz00_3280 = BgL_idz00_1581;
						{	/* Ieee/output.scm 937 */
							obj_t BgL_arg2194z00_3282;

							BgL_arg2194z00_3282 = SYMBOL_TO_STRING(BgL_objz00_3280);
							bgl_display_string(BgL_arg2194z00_3282, BgL_portz00_89);
					}}
					bgl_display_char(((unsigned char) '('), BgL_portz00_89);
					{	/* Ieee/output.scm 939 */
						bool_t BgL_testz00_5153;

						{	/* Ieee/output.scm 939 */
							long BgL_arg2295z00_1598;

							BgL_arg2295z00_1598 = BGL_HVECTOR_LENGTH(BgL_svecz00_88);
							BgL_testz00_5153 = (((long) 0) == BgL_arg2295z00_1598);
						}
						if (BgL_testz00_5153)
							{	/* Ieee/output.scm 939 */
								return bgl_display_char(((unsigned char) ')'), BgL_portz00_89);
							}
						else
							{	/* Ieee/output.scm 941 */
								long BgL_lenz00_1586;

								{	/* Ieee/output.scm 941 */
									long BgL_arg2292z00_1595;

									BgL_arg2292z00_1595 = BGL_HVECTOR_LENGTH(BgL_svecz00_88);
									BgL_lenz00_1586 = (BgL_arg2292z00_1595 - ((long) 1));
								}
								{
									long BgL_iz00_1588;

									BgL_iz00_1588 = ((long) 0);
								BgL_zc3anonymousza32285ze3z83_1589:
									if ((BgL_iz00_1588 == BgL_lenz00_1586))
										{	/* Ieee/output.scm 944 */
											{	/* Ieee/output.scm 945 */
												obj_t BgL_arg2289z00_1591;

												BgL_arg2289z00_1591 =
													PROCEDURE_ENTRY(BgL_vrefz00_1583) (BgL_vrefz00_1583,
													BgL_svecz00_88, BINT(BgL_iz00_1588), BEOA);
												PROCEDURE_ENTRY(BgL_dispz00_90) (BgL_dispz00_90,
													BgL_arg2289z00_1591, BgL_portz00_89, BEOA);
											}
											return
												bgl_display_char(((unsigned char) ')'), BgL_portz00_89);
										}
									else
										{	/* Ieee/output.scm 944 */
											{	/* Ieee/output.scm 948 */
												obj_t BgL_arg2290z00_1592;

												BgL_arg2290z00_1592 =
													PROCEDURE_ENTRY(BgL_vrefz00_1583) (BgL_vrefz00_1583,
													BgL_svecz00_88, BINT(BgL_iz00_1588), BEOA);
												PROCEDURE_ENTRY(BgL_dispz00_90) (BgL_dispz00_90,
													BgL_arg2290z00_1592, BgL_portz00_89, BEOA);
											}
											bgl_display_char(((unsigned char) ' '), BgL_portz00_89);
											{
												long BgL_iz00_5173;

												BgL_iz00_5173 = (((long) 1) + BgL_iz00_1588);
												BgL_iz00_1588 = BgL_iz00_5173;
												goto BgL_zc3anonymousza32285ze3z83_1589;
											}
										}
								}
							}
					}
				}
			}
		}
	}



/* display-pair */
	obj_t BGl_displayzd2pairzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_94,
		obj_t BgL_portz00_95)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 987 */
			bgl_display_char(((unsigned char) '('), BgL_portz00_95);
			{
				obj_t BgL_lz00_1601;

				BgL_lz00_1601 = BgL_objz00_94;
			BgL_zc3anonymousza32296ze3z83_1602:
				if (NULLP(CDR(BgL_lz00_1601)))
					{	/* Ieee/output.scm 988 */
						bgl_display_obj(CAR(BgL_lz00_1601), BgL_portz00_95);
						return bgl_display_char(((unsigned char) ')'), BgL_portz00_95);
					}
				else
					{	/* Ieee/output.scm 988 */
						bool_t BgL_testz00_5182;

						{	/* Ieee/output.scm 988 */
							obj_t BgL_auxz00_5183;

							BgL_auxz00_5183 = CDR(BgL_lz00_1601);
							BgL_testz00_5182 = PAIRP(BgL_auxz00_5183);
						}
						if (BgL_testz00_5182)
							{	/* Ieee/output.scm 988 */
								bgl_display_obj(CAR(BgL_lz00_1601), BgL_portz00_95);
								bgl_display_char(((unsigned char) ' '), BgL_portz00_95);
								{
									obj_t BgL_lz00_5189;

									BgL_lz00_5189 = CDR(BgL_lz00_1601);
									BgL_lz00_1601 = BgL_lz00_5189;
									goto BgL_zc3anonymousza32296ze3z83_1602;
								}
							}
						else
							{	/* Ieee/output.scm 988 */
								bgl_display_obj(CAR(BgL_lz00_1601), BgL_portz00_95);
								bgl_display_char(((unsigned char) ' '), BgL_portz00_95);
								bgl_display_char(((unsigned char) '.'), BgL_portz00_95);
								bgl_display_char(((unsigned char) ' '), BgL_portz00_95);
								bgl_display_obj(CDR(BgL_lz00_1601), BgL_portz00_95);
								return bgl_display_char(((unsigned char) ')'), BgL_portz00_95);
		}}}}
	}



/* write-pair */
	obj_t BGl_writezd2pairzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_96,
		obj_t BgL_portz00_97)
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 993 */
			bgl_display_char(((unsigned char) '('), BgL_portz00_97);
			{
				obj_t BgL_lz00_1614;

				BgL_lz00_1614 = BgL_objz00_96;
			BgL_zc3anonymousza32308ze3z83_1615:
				if (NULLP(CDR(BgL_lz00_1614)))
					{	/* Ieee/output.scm 994 */
						bgl_write_obj(CAR(BgL_lz00_1614), BgL_portz00_97);
						return bgl_display_char(((unsigned char) ')'), BgL_portz00_97);
					}
				else
					{	/* Ieee/output.scm 994 */
						bool_t BgL_testz00_5206;

						{	/* Ieee/output.scm 994 */
							obj_t BgL_auxz00_5207;

							BgL_auxz00_5207 = CDR(BgL_lz00_1614);
							BgL_testz00_5206 = PAIRP(BgL_auxz00_5207);
						}
						if (BgL_testz00_5206)
							{	/* Ieee/output.scm 994 */
								bgl_write_obj(CAR(BgL_lz00_1614), BgL_portz00_97);
								bgl_display_char(((unsigned char) ' '), BgL_portz00_97);
								{
									obj_t BgL_lz00_5213;

									BgL_lz00_5213 = CDR(BgL_lz00_1614);
									BgL_lz00_1614 = BgL_lz00_5213;
									goto BgL_zc3anonymousza32308ze3z83_1615;
								}
							}
						else
							{	/* Ieee/output.scm 994 */
								bgl_write_obj(CAR(BgL_lz00_1614), BgL_portz00_97);
								bgl_display_char(((unsigned char) ' '), BgL_portz00_97);
								bgl_display_char(((unsigned char) '.'), BgL_portz00_97);
								bgl_display_char(((unsigned char) ' '), BgL_portz00_97);
								bgl_write_obj(CDR(BgL_lz00_1614), BgL_portz00_97);
								return bgl_display_char(((unsigned char) ')'), BgL_portz00_97);
		}}}}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__r4_output_6_10_3z00()
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 24 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__r4_output_6_10_3z00()
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 24 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_output_6_10_3z00()
	{
		AN_OBJECT;
		{	/* Ieee/output.scm 24 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string3045z00zz__r4_output_6_10_3z00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string3045z00zz__r4_output_6_10_3z00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string3045z00zz__r4_output_6_10_3z00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 36880833),
				BSTRING_TO_STRING(BGl_string3045z00zz__r4_output_6_10_3z00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string3045z00zz__r4_output_6_10_3z00));
		}
	}

#ifdef __cplusplus
}
#endif
