/*===========================================================================*/
/*   (Llib/unicode.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/unicode.scm -indent -o objs/obj_u/Llib/unicode.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00(obj_t, obj_t,
		long, obj_t);
	static obj_t BGl__listzd2ze3ucs2zd2stringze3zz__unicodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringze3zd3zf3z11zz__unicodez00(obj_t,
		obj_t);
	static obj_t BGl__cp1252zd2ze3utf8z12z23zz__unicodez00(obj_t, obj_t);
	static obj_t BGl__utf8zd2ze3cp1252z12z23zz__unicodez00(obj_t, obj_t);
	extern bool_t ucs2_string_ge(obj_t, obj_t);
	BGL_EXPORTED_DECL int BGl_ucs2zd2stringzd2lengthz00zz__unicodez00(obj_t);
	extern bool_t ucs2_string_gt(obj_t, obj_t);
	static long BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(obj_t, long);
	static obj_t BGl__utf8zd2stringzd2ze3ucs2zd2stringz31zz__unicodez00(obj_t,
		obj_t);
	extern bool_t ucs2_string_le(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	extern bool_t ucs2_strcmp(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_8bitszd2ze3utf8z12z23zz__unicodez00(obj_t, obj_t);
	static obj_t BGl__ucs2zd2stringzd2upcasez00zz__unicodez00(obj_t, obj_t);
	static obj_t BGl__utf8zd2ze38bitsz31zz__unicodez00(obj_t, obj_t, obj_t);
	extern bool_t ucs2_string_lt(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzc3zf3ze2zz__unicodez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzd3zf3zf2zz__unicodez00(obj_t,
		obj_t);
	extern obj_t make_string_sans_fill(long);
	static obj_t BGl_requirezd2initializa7ationz75zz__unicodez00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringze3zf3zc2zz__unicodez00(obj_t,
		obj_t);
	extern obj_t ucs2_string_to_utf8_string(obj_t);
	static obj_t BGl__makezd2ucs2zd2stringz00zz__unicodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzf3z21zz__unicodez00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__unicodez00();
	BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze3cp1252z12z23zz__unicodez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cp1252zd2ze3utf8z12z23zz__unicodez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2upcasez00zz__unicodez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_subucs2zd2stringzd2zz__unicodez00(obj_t, int,
		int);
	static obj_t BGl__inversezd2utf8zd2tablez00zz__unicodez00(obj_t, obj_t);
	extern obj_t string_for_read(obj_t);
	static obj_t BGl_makezd2tablezd2entryz00zz__unicodez00(obj_t, long);
	static long BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(obj_t, long, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_ucs2zd2stringzd2cizc3zd3zf3ze3zz__unicodez00(obj_t, obj_t);
	extern bool_t ucs2_strcicmp(obj_t, obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__isozd2latinzd2ze3utf8z12zf1zz__unicodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_ucs2zd2stringzd2downcasez12z12zz__unicodez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze3isozd2latinz12zf1zz__unicodez00(obj_t);
	static obj_t BGl_loopz72z72z00zz__unicodez00(obj_t);
	static obj_t BGl_list2623z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list2624z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list2625z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list2626z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list2627z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl__ucs2zd2stringzd2appendz00zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_list2628z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list2630z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list2629z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list2631z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zz__unicodez00();
	static obj_t BGl_list2632z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list2633z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list2634z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list2635z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list2636z00zz__unicodez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_inversezd2utf8zd2tablez00zz__unicodez00(obj_t);
	static obj_t BGl_list2637z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list2638z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list2640z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list2639z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list2641z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00(obj_t, obj_t,
		long, obj_t);
	static obj_t BGl_list2642z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list2643z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list2644z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list2645z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list2646z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list2647z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list2648z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list2649z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list2651z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl__ucs2zd2stringzd2ze3utf8zd2stringz31zz__unicodez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2downcasez00zz__unicodez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze3isozd2latinze3zz__unicodez00(obj_t);
	static obj_t BGl__ucs2zd2stringzd2copyz00zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__unicodez00();
	static obj_t BGl__ucs2zd2stringzd2cizc3zf3z30zz__unicodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__ucs2zd2stringzd2cizd3zf3z20zz__unicodez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__ucs2zd2stringzd2cize3zf3z10zz__unicodez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_utf8zd2stringzd2ze3ucs2zd2stringz31zz__unicodez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2ze3listze3zz__unicodez00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_ucs2zd2stringzd2cize3zd3zf3zc3zz__unicodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2appendz00zz__unicodez00(obj_t);
	static obj_t BGl__ucs2zd2stringzd2downcasez00zz__unicodez00(obj_t, obj_t);
	static obj_t BGl__cp1252zd2ze3utf8z31zz__unicodez00(obj_t, obj_t);
	static obj_t BGl__utf8zd2ze3cp1252z31zz__unicodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2setz12z12zz__unicodez00(obj_t,
		int, ucs2_t);
	BGL_EXPORTED_DECL obj_t BGl_8bitszd2ze3utf8z31zz__unicodez00(obj_t, obj_t);
	extern obj_t ucs2_string_append(obj_t, obj_t);
	static obj_t BGl__ucs2zd2stringzd2cizc3zd3zf3ze3zz__unicodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_addzd2tablezd2entryz00zz__unicodez00(obj_t, obj_t, long);
	static obj_t BGl_8bitszd2invzd2zz__unicodez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__unicodez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_toplevelzd2initzd2zz__unicodez00();
	BGL_EXPORTED_DECL obj_t BGl_subucs2zd2stringzd2urz00zz__unicodez00(obj_t, int,
		int);
	static obj_t BGl__utf8zd2ze3isozd2latinze3zz__unicodez00(obj_t, obj_t);
	extern long bgl_list_length(obj_t);
	extern obj_t make_string(long, unsigned char);
	extern obj_t make_ucs2_string(int, ucs2_t);
	BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze3cp1252z31zz__unicodez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cp1252zd2ze3utf8z31zz__unicodez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_ucs2zd2stringzd2setzd2urz12zc0zz__unicodez00(obj_t, int, ucs2_t);
	static obj_t BGl__ucs2zd2stringzd2setzd2urz12zc0zz__unicodez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__ucs2zd2stringzd2ze3listze3zz__unicodez00(obj_t, obj_t);
	static obj_t BGl__ucs2zd2stringzd2cize3zd3zf3zc3zz__unicodez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL ucs2_t BGl_ucs2zd2stringzd2refz00zz__unicodez00(obj_t, int);
	BGL_EXPORTED_DECL obj_t BGl_isozd2latinzd2ze3utf8ze3zz__unicodez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2ucs2zd2stringz00zz__unicodez00(int,
		ucs2_t);
	BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2fillz12z12zz__unicodez00(obj_t,
		ucs2_t);
	static obj_t BGl__ucs2zd2stringzc3zd3zf3z31zz__unicodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__ucs2zd2stringzd2refzd2urzd2zz__unicodez00(obj_t, obj_t,
		obj_t);
	extern obj_t blit_string(obj_t, long, obj_t, long, long);
	BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2zz__unicodez00(obj_t);
	extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	extern bool_t ucs2_string_cige(obj_t, obj_t);
	extern ucs2_t ucs2_tolower(ucs2_t);
	BGL_EXPORTED_DECL obj_t
		BGl_ucs2zd2stringzd2ze3utf8zd2stringz31zz__unicodez00(obj_t);
	extern bool_t ucs2_string_cigt(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2upcasez12z12zz__unicodez00(obj_t);
	static obj_t BGl__ucs2zd2stringzd2upcasez12z12zz__unicodez00(obj_t, obj_t);
	extern bool_t ucs2_string_cile(obj_t, obj_t);
	static obj_t BGl__subucs2zd2stringzd2urz00zz__unicodez00(obj_t, obj_t, obj_t,
		obj_t);
	extern bool_t ucs2_string_cilt(obj_t, obj_t);
	static obj_t BGl_loopz00zz__unicodez00(long, long, obj_t, long);
	static obj_t BGl__utf8zd2ze3isozd2latinz12zf1zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_cp1252zd2invzd2zz__unicodez00 = BUNSPEC;
	static obj_t BGl__utf8zd2ze38bitsz12z23zz__unicodez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze38bitsz31zz__unicodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL ucs2_t BGl_ucs2zd2stringzd2refzd2urzd2zz__unicodez00(obj_t,
		int);
	static obj_t BGl__8bitszd2ze3utf8z31zz__unicodez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__ucs2zd2stringzd2refz00zz__unicodez00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2686z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_symbol2691z00zz__unicodez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3ucs2zd2stringze3zz__unicodez00(obj_t);
	static obj_t BGl_cp1252z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_loopz72z72zz__unicodez00(obj_t, obj_t);
	static obj_t BGl__isozd2latinzd2ze3utf8ze3zz__unicodez00(obj_t, obj_t);
	static obj_t BGl__ucs2zd2stringze3zd3zf3z11zz__unicodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2723z00zz__unicodez00 = BUNSPEC;
	extern obj_t utf8_string_to_ucs2_string(obj_t);
	extern obj_t c_ucs2_string_copy(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isozd2latinzd2ze3utf8z12zf1zz__unicodez00(obj_t);
	static obj_t BGl__ucs2zd2stringzd2downcasez12z12zz__unicodez00(obj_t, obj_t);
	static obj_t BGl__utf8zd2stringzf3z21zz__unicodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzc3zd3zf3z31zz__unicodez00(obj_t,
		obj_t);
	static obj_t BGl__ucs2zd2stringzd2fillz12z12zz__unicodez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze38bitsz12z23zz__unicodez00(obj_t, obj_t);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2copyz00zz__unicodez00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzd2cizc3zf3z30zz__unicodez00(obj_t,
		obj_t);
	static obj_t BGl__ucs2zd2stringzd2setz12z12zz__unicodez00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzd2cizd3zf3z20zz__unicodez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzd2cize3zf3z10zz__unicodez00(obj_t,
		obj_t);
	static obj_t BGl__ucs2zd2stringzd2lengthz00zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_vector2650z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl__8bitszd2ze3utf8z12z23zz__unicodez00(obj_t, obj_t, obj_t);
	extern ucs2_t ucs2_toupper(ucs2_t);
	static obj_t BGl__ucs2zd2stringzc3zf3ze2zz__unicodez00(obj_t, obj_t, obj_t);
	static obj_t BGl__ucs2zd2stringzd3zf3zf2zz__unicodez00(obj_t, obj_t, obj_t);
	static obj_t BGl__ucs2zd2stringze3zf3zc2zz__unicodez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_utf8zd2stringzf3z21zz__unicodez00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__unicodez00();
	extern obj_t c_subucs2_string(obj_t, int, int);
	static obj_t BGl__subucs2zd2stringzd2zz__unicodez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__ucs2zd2stringzf3z21zz__unicodez00(obj_t, obj_t);
	static obj_t BGl__ucs2zd2stringzd2zz__unicodez00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2setz12zd2envzc0zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7d2740z00,
		BGl__ucs2zd2stringzd2setz12z12zz__unicodez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2cizc3zf3zd2envze2zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7d2741z00,
		BGl__ucs2zd2stringzd2cizc3zf3z30zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isozd2latinzd2ze3utf8zd2envz31zz__unicodez00,
		BgL_bgl__isoza7d2latinza7d2za72742za7,
		BGl__isozd2latinzd2ze3utf8ze3zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isozd2latinzd2ze3utf8z12zd2envz23zz__unicodez00,
		BgL_bgl__isoza7d2latinza7d2za72743za7,
		BGl__isozd2latinzd2ze3utf8z12zf1zz__unicodez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_utf8zd2stringzf3zd2envzf3zz__unicodez00,
		BgL_bgl__utf8za7d2stringza7f2744z00, BGl__utf8zd2stringzf3z21zz__unicodez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2stringzd2copyzd2envzd2zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7d2745z00,
		BGl__ucs2zd2stringzd2copyz00zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inversezd2utf8zd2tablezd2envzd2zz__unicodez00,
		BgL_bgl__inverseza7d2utf8za72746z00,
		BGl__inversezd2utf8zd2tablez00zz__unicodez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2652z00zz__unicodez00,
		BgL_bgl_string2652za700za7za7_2747za7, "\342\202\254", 3);
	      DEFINE_STRING(BGl_string2653z00zz__unicodez00,
		BgL_bgl_string2653za700za7za7_2748za7, "", 0);
	      DEFINE_STRING(BGl_string2654z00zz__unicodez00,
		BgL_bgl_string2654za700za7za7_2749za7, "\342\200\232", 3);
	      DEFINE_STRING(BGl_string2655z00zz__unicodez00,
		BgL_bgl_string2655za700za7za7_2750za7, "\306\222", 2);
	      DEFINE_STRING(BGl_string2656z00zz__unicodez00,
		BgL_bgl_string2656za700za7za7_2751za7, "\342\200\236", 3);
	      DEFINE_STRING(BGl_string2657z00zz__unicodez00,
		BgL_bgl_string2657za700za7za7_2752za7, "\342\200\246", 3);
	      DEFINE_STRING(BGl_string2658z00zz__unicodez00,
		BgL_bgl_string2658za700za7za7_2753za7, "\342\200\240", 3);
	      DEFINE_STRING(BGl_string2660z00zz__unicodez00,
		BgL_bgl_string2660za700za7za7_2754za7, "\313\206", 2);
	      DEFINE_STRING(BGl_string2659z00zz__unicodez00,
		BgL_bgl_string2659za700za7za7_2755za7, "\342\200\241", 3);
	      DEFINE_STRING(BGl_string2661z00zz__unicodez00,
		BgL_bgl_string2661za700za7za7_2756za7, "\342\200\260", 3);
	      DEFINE_STRING(BGl_string2662z00zz__unicodez00,
		BgL_bgl_string2662za700za7za7_2757za7, "\305\240", 2);
	      DEFINE_STRING(BGl_string2663z00zz__unicodez00,
		BgL_bgl_string2663za700za7za7_2758za7, "\342\200\271", 3);
	      DEFINE_STRING(BGl_string2664z00zz__unicodez00,
		BgL_bgl_string2664za700za7za7_2759za7, "\305\222", 2);
	      DEFINE_STRING(BGl_string2665z00zz__unicodez00,
		BgL_bgl_string2665za700za7za7_2760za7, "\305\275", 2);
	      DEFINE_STRING(BGl_string2666z00zz__unicodez00,
		BgL_bgl_string2666za700za7za7_2761za7, "\342\200\230", 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2stringzd3zf3zd2envz20zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7d2762z00,
		BGl__ucs2zd2stringzd3zf3zf2zz__unicodez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2667z00zz__unicodez00,
		BgL_bgl_string2667za700za7za7_2763za7, "\342\200\231", 3);
	      DEFINE_STRING(BGl_string2668z00zz__unicodez00,
		BgL_bgl_string2668za700za7za7_2764za7, "\342\200\234", 3);
	      DEFINE_STRING(BGl_string2670z00zz__unicodez00,
		BgL_bgl_string2670za700za7za7_2765za7, "\342\200\242", 3);
	      DEFINE_STRING(BGl_string2669z00zz__unicodez00,
		BgL_bgl_string2669za700za7za7_2766za7, "\342\200\235", 3);
	      DEFINE_STRING(BGl_string2671z00zz__unicodez00,
		BgL_bgl_string2671za700za7za7_2767za7, "\342\200\223", 3);
	      DEFINE_STRING(BGl_string2672z00zz__unicodez00,
		BgL_bgl_string2672za700za7za7_2768za7, "\342\200\224", 3);
	      DEFINE_STRING(BGl_string2673z00zz__unicodez00,
		BgL_bgl_string2673za700za7za7_2769za7, "\313\234", 2);
	      DEFINE_STRING(BGl_string2674z00zz__unicodez00,
		BgL_bgl_string2674za700za7za7_2770za7, "\342\204\242", 3);
	      DEFINE_STRING(BGl_string2675z00zz__unicodez00,
		BgL_bgl_string2675za700za7za7_2771za7, "\305\241", 2);
	      DEFINE_STRING(BGl_string2676z00zz__unicodez00,
		BgL_bgl_string2676za700za7za7_2772za7, "\342\200\272", 3);
	      DEFINE_STRING(BGl_string2677z00zz__unicodez00,
		BgL_bgl_string2677za700za7za7_2773za7, "\305\223", 2);
	      DEFINE_STRING(BGl_string2678z00zz__unicodez00,
		BgL_bgl_string2678za700za7za7_2774za7, "\305\276", 2);
	      DEFINE_STRING(BGl_string2680z00zz__unicodez00,
		BgL_bgl_string2680za700za7za7_2775za7,
		"/tmp/bigloo/runtime/Llib/unicode.scm", 36);
	      DEFINE_STRING(BGl_string2679z00zz__unicodez00,
		BgL_bgl_string2679za700za7za7_2776za7, "\305\270", 2);
	      DEFINE_STRING(BGl_string2681z00zz__unicodez00,
		BgL_bgl_string2681za700za7za7_2777za7, "_make-ucs2-string", 17);
	      DEFINE_STRING(BGl_string2682z00zz__unicodez00,
		BgL_bgl_string2682za700za7za7_2778za7, "int", 3);
	      DEFINE_STRING(BGl_string2683z00zz__unicodez00,
		BgL_bgl_string2683za700za7za7_2779za7, "ucs2", 4);
	      DEFINE_STRING(BGl_string2684z00zz__unicodez00,
		BgL_bgl_string2684za700za7za7_2780za7, "_ucs2-string-length", 19);
	      DEFINE_STRING(BGl_string2685z00zz__unicodez00,
		BgL_bgl_string2685za700za7za7_2781za7, "ucs2string", 10);
	      DEFINE_STRING(BGl_string2687z00zz__unicodez00,
		BgL_bgl_string2687za700za7za7_2782za7, "ucs2-string-ref", 15);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2ze3listzd2envz31zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7d2783z00,
		BGl__ucs2zd2stringzd2ze3listze3zz__unicodez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2688z00zz__unicodez00,
		BgL_bgl_string2688za700za7za7_2784za7, "index out of range [0..", 23);
	      DEFINE_STRING(BGl_string2700z00zz__unicodez00,
		BgL_bgl_string2700za700za7za7_2785za7, "_ucs2-string<=?", 15);
	      DEFINE_STRING(BGl_string2690z00zz__unicodez00,
		BgL_bgl_string2690za700za7za7_2786za7, "_ucs2-string-ref", 16);
	      DEFINE_STRING(BGl_string2689z00zz__unicodez00,
		BgL_bgl_string2689za700za7za7_2787za7, "]", 1);
	      DEFINE_STRING(BGl_string2701z00zz__unicodez00,
		BgL_bgl_string2701za700za7za7_2788za7, "_ucs2-string>=?", 15);
	      DEFINE_STRING(BGl_string2702z00zz__unicodez00,
		BgL_bgl_string2702za700za7za7_2789za7, "_ucs2-string-ci<?", 17);
	      DEFINE_STRING(BGl_string2692z00zz__unicodez00,
		BgL_bgl_string2692za700za7za7_2790za7, "ucs2-string-set!", 16);
	      DEFINE_STRING(BGl_string2703z00zz__unicodez00,
		BgL_bgl_string2703za700za7za7_2791za7, "_ucs2-string-ci>?", 17);
	      DEFINE_STRING(BGl_string2693z00zz__unicodez00,
		BgL_bgl_string2693za700za7za7_2792za7, "_ucs2-string-set!", 17);
	      DEFINE_STRING(BGl_string2704z00zz__unicodez00,
		BgL_bgl_string2704za700za7za7_2793za7, "_ucs2-string-ci<=?", 18);
	      DEFINE_STRING(BGl_string2694z00zz__unicodez00,
		BgL_bgl_string2694za700za7za7_2794za7, "_ucs2-string-ref-ur", 19);
	      DEFINE_STRING(BGl_string2705z00zz__unicodez00,
		BgL_bgl_string2705za700za7za7_2795za7, "_ucs2-string-ci>=?", 18);
	      DEFINE_STRING(BGl_string2695z00zz__unicodez00,
		BgL_bgl_string2695za700za7za7_2796za7, "_ucs2-string-set-ur!", 20);
	      DEFINE_STRING(BGl_string2706z00zz__unicodez00,
		BgL_bgl_string2706za700za7za7_2797za7, "subucs2-string", 14);
	      DEFINE_STRING(BGl_string2696z00zz__unicodez00,
		BgL_bgl_string2696za700za7za7_2798za7, "_ucs2-string=?", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cp1252zd2ze3utf8z12zd2envzf1zz__unicodez00,
		BgL_bgl__cp1252za7d2za7e3utf2799z00,
		BGl__cp1252zd2ze3utf8z12z23zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_utf8zd2ze3cp1252z12zd2envzf1zz__unicodez00,
		BgL_bgl__utf8za7d2za7e3cp1252800z00,
		BGl__utf8zd2ze3cp1252z12z23zz__unicodez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2707z00zz__unicodez00,
		BgL_bgl_string2707za700za7za7_2801za7, "Illegal index", 13);
	      DEFINE_STRING(BGl_string2697z00zz__unicodez00,
		BgL_bgl_string2697za700za7za7_2802za7, "_ucs2-string-ci=?", 17);
	      DEFINE_STRING(BGl_string2708z00zz__unicodez00,
		BgL_bgl_string2708za700za7za7_2803za7, "_subucs2-string", 15);
	      DEFINE_STRING(BGl_string2698z00zz__unicodez00,
		BgL_bgl_string2698za700za7za7_2804za7, "_ucs2-string<?", 14);
	      DEFINE_STRING(BGl_string2710z00zz__unicodez00,
		BgL_bgl_string2710za700za7za7_2805za7, "_ucs2-string->list", 18);
	      DEFINE_STRING(BGl_string2709z00zz__unicodez00,
		BgL_bgl_string2709za700za7za7_2806za7, "_subucs2-string-ur", 18);
	      DEFINE_STRING(BGl_string2699z00zz__unicodez00,
		BgL_bgl_string2699za700za7za7_2807za7, "_ucs2-string>?", 14);
	      DEFINE_STRING(BGl_string2711z00zz__unicodez00,
		BgL_bgl_string2711za700za7za7_2808za7, "_ucs2-string-copy", 17);
	      DEFINE_STRING(BGl_string2712z00zz__unicodez00,
		BgL_bgl_string2712za700za7za7_2809za7, "_ucs2-string-fill!", 18);
	      DEFINE_STRING(BGl_string2713z00zz__unicodez00,
		BgL_bgl_string2713za700za7za7_2810za7, "_ucs2-string-upcase", 19);
	      DEFINE_STRING(BGl_string2714z00zz__unicodez00,
		BgL_bgl_string2714za700za7za7_2811za7, "_ucs2-string-downcase", 21);
	      DEFINE_STRING(BGl_string2715z00zz__unicodez00,
		BgL_bgl_string2715za700za7za7_2812za7, "_ucs2-string-upcase!", 20);
	      DEFINE_STRING(BGl_string2716z00zz__unicodez00,
		BgL_bgl_string2716za700za7za7_2813za7, "_ucs2-string-downcase!", 22);
	      DEFINE_STRING(BGl_string2717z00zz__unicodez00,
		BgL_bgl_string2717za700za7za7_2814za7, "_ucs2-string->utf8-string", 25);
	      DEFINE_STRING(BGl_string2718z00zz__unicodez00,
		BgL_bgl_string2718za700za7za7_2815za7, "_inverse-utf8-table", 19);
	      DEFINE_STRING(BGl_string2720z00zz__unicodez00,
		BgL_bgl_string2720za700za7za7_2816za7, "_utf8-string->ucs2-string", 25);
	      DEFINE_STRING(BGl_string2719z00zz__unicodez00,
		BgL_bgl_string2719za700za7za7_2817za7, "vector", 6);
	      DEFINE_STRING(BGl_string2721z00zz__unicodez00,
		BgL_bgl_string2721za700za7za7_2818za7, "bstring", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_utf8zd2ze38bitsz12zd2envzf1zz__unicodez00,
		BgL_bgl__utf8za7d2za7e38bits2819z00,
		BGl__utf8zd2ze38bitsz12z23zz__unicodez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2722z00zz__unicodez00,
		BgL_bgl_string2722za700za7za7_2820za7, "_utf8-string?", 13);
	      DEFINE_STRING(BGl_string2724z00zz__unicodez00,
		BgL_bgl_string2724za700za7za7_2821za7, "utf8->8bits", 11);
	      DEFINE_STRING(BGl_string2725z00zz__unicodez00,
		BgL_bgl_string2725za700za7za7_2822za7, "String too short", 16);
	      DEFINE_STRING(BGl_string2726z00zz__unicodez00,
		BgL_bgl_string2726za700za7za7_2823za7, "Illegal string", 14);
	      DEFINE_STRING(BGl_string2727z00zz__unicodez00,
		BgL_bgl_string2727za700za7za7_2824za7, "_utf8->8bits", 12);
	      DEFINE_STRING(BGl_string2728z00zz__unicodez00,
		BgL_bgl_string2728za700za7za7_2825za7, "_utf8->8bits!", 13);
	      DEFINE_STRING(BGl_string2730z00zz__unicodez00,
		BgL_bgl_string2730za700za7za7_2826za7, "_utf8->iso-latin!", 17);
	      DEFINE_STRING(BGl_string2729z00zz__unicodez00,
		BgL_bgl_string2729za700za7za7_2827za7, "_utf8->iso-latin", 16);
	      DEFINE_STRING(BGl_string2731z00zz__unicodez00,
		BgL_bgl_string2731za700za7za7_2828za7, "_utf8->cp1252", 13);
	      DEFINE_STRING(BGl_string2732z00zz__unicodez00,
		BgL_bgl_string2732za700za7za7_2829za7, "_utf8->cp1252!", 14);
	      DEFINE_STRING(BGl_string2733z00zz__unicodez00,
		BgL_bgl_string2733za700za7za7_2830za7, "_8bits->utf8", 12);
	      DEFINE_STRING(BGl_string2734z00zz__unicodez00,
		BgL_bgl_string2734za700za7za7_2831za7, "_8bits->utf8!", 13);
	      DEFINE_STRING(BGl_string2735z00zz__unicodez00,
		BgL_bgl_string2735za700za7za7_2832za7, "_iso-latin->utf8", 16);
	      DEFINE_STRING(BGl_string2736z00zz__unicodez00,
		BgL_bgl_string2736za700za7za7_2833za7, "_iso-latin->utf8!", 17);
	      DEFINE_STRING(BGl_string2737z00zz__unicodez00,
		BgL_bgl_string2737za700za7za7_2834za7, "_cp1252->utf8", 13);
	      DEFINE_STRING(BGl_string2738z00zz__unicodez00,
		BgL_bgl_string2738za700za7za7_2835za7, "_cp1252->utf8!", 14);
	      DEFINE_STRING(BGl_string2739z00zz__unicodez00,
		BgL_bgl_string2739za700za7za7_2836za7, "__unicode", 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2cize3zf3zd2envzc2zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7d2837z00,
		BGl__ucs2zd2stringzd2cize3zf3z10zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2lengthzd2envzd2zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7d2838z00,
		BGl__ucs2zd2stringzd2lengthz00zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_listzd2ze3ucs2zd2stringzd2envz31zz__unicodez00,
		BgL_bgl__listza7d2za7e3ucs2za72839za7,
		BGl__listzd2ze3ucs2zd2stringze3zz__unicodez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_8bitszd2ze3utf8zd2envze3zz__unicodez00,
		BgL_bgl__8bitsza7d2za7e3utf82840z00, BGl__8bitszd2ze3utf8z31zz__unicodez00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_8bitszd2ze3utf8z12zd2envzf1zz__unicodez00,
		BgL_bgl__8bitsza7d2za7e3utf82841z00,
		BGl__8bitszd2ze3utf8z12z23zz__unicodez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_subucs2zd2stringzd2envz00zz__unicodez00,
		BgL_bgl__subucs2za7d2strin2842za7, BGl__subucs2zd2stringzd2zz__unicodez00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cp1252zd2ze3utf8zd2envze3zz__unicodez00,
		BgL_bgl__cp1252za7d2za7e3utf2843z00, BGl__cp1252zd2ze3utf8z31zz__unicodez00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_utf8zd2ze3cp1252zd2envze3zz__unicodez00,
		BgL_bgl__utf8za7d2za7e3cp1252844z00, BGl__utf8zd2ze3cp1252z31zz__unicodez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2setzd2urz12zd2envz12zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7d2845z00,
		BGl__ucs2zd2stringzd2setzd2urz12zc0zz__unicodez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2upcasez12zd2envzc0zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7d2846z00,
		BGl__ucs2zd2stringzd2upcasez12z12zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2stringzc3zf3zd2envz30zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7c2847z00,
		BGl__ucs2zd2stringzc3zf3ze2zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringze3zd3zf3zd2envzc3zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7e2848z00,
		BGl__ucs2zd2stringze3zd3zf3z11zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_utf8zd2ze3isozd2latinz12zd2envz23zz__unicodez00,
		BgL_bgl__utf8za7d2za7e3isoza7d2849za7,
		BGl__utf8zd2ze3isozd2latinz12zf1zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2downcasez12zd2envzc0zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7d2850z00,
		BGl__ucs2zd2stringzd2downcasez12z12zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzc3zd3zf3zd2envze3zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7c2851z00,
		BGl__ucs2zd2stringzc3zd3zf3z31zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2ze3utf8zd2stringzd2envze3zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7d2852z00,
		BGl__ucs2zd2stringzd2ze3utf8zd2stringz31zz__unicodez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2stringzd2envz00zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7d2853z00, va_generic_entry,
		BGl__ucs2zd2stringzd2zz__unicodez00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2fillz12zd2envzc0zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7d2854z00,
		BGl__ucs2zd2stringzd2fillz12z12zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2stringzd2refzd2envzd2zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7d2855z00,
		BGl__ucs2zd2stringzd2refz00zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2cizd3zf3zd2envzf2zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7d2856z00,
		BGl__ucs2zd2stringzd2cizd3zf3z20zz__unicodez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_utf8zd2ze38bitszd2envze3zz__unicodez00,
		BgL_bgl__utf8za7d2za7e38bits2857z00, BGl__utf8zd2ze38bitsz31zz__unicodez00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_utf8zd2ze3isozd2latinzd2envz31zz__unicodez00,
		BgL_bgl__utf8za7d2za7e3isoza7d2858za7,
		BGl__utf8zd2ze3isozd2latinze3zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2downcasezd2envzd2zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7d2859z00,
		BGl__ucs2zd2stringzd2downcasez00zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_utf8zd2stringzd2ze3ucs2zd2stringzd2envze3zz__unicodez00,
		BgL_bgl__utf8za7d2stringza7d2860z00,
		BGl__utf8zd2stringzd2ze3ucs2zd2stringz31zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2ucs2zd2stringzd2envzd2zz__unicodez00,
		BgL_bgl__makeza7d2ucs2za7d2s2861z00, opt_generic_entry,
		BGl__makezd2ucs2zd2stringz00zz__unicodez00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2cize3zd3zf3zd2envz11zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7d2862z00,
		BGl__ucs2zd2stringzd2cize3zd3zf3zc3zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2upcasezd2envzd2zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7d2863z00,
		BGl__ucs2zd2stringzd2upcasez00zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2stringze3zf3zd2envz10zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7e2864z00,
		BGl__ucs2zd2stringze3zf3zc2zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2cizc3zd3zf3zd2envz31zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7d2865z00,
		BGl__ucs2zd2stringzd2cizc3zd3zf3ze3zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2appendzd2envzd2zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7d2866z00, va_generic_entry,
		BGl__ucs2zd2stringzd2appendz00zz__unicodez00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2refzd2urzd2envz00zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7d2867z00,
		BGl__ucs2zd2stringzd2refzd2urzd2zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_subucs2zd2stringzd2urzd2envzd2zz__unicodez00,
		BgL_bgl__subucs2za7d2strin2868za7,
		BGl__subucs2zd2stringzd2urz00zz__unicodez00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2stringzf3zd2envzf3zz__unicodez00,
		BgL_bgl__ucs2za7d2stringza7f2869z00, BGl__ucs2zd2stringzf3z21zz__unicodez00,
		0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__unicodez00(long
		BgL_checksumz00_3449, char *BgL_fromz00_3450)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__unicodez00))
				{
					BGl_requirezd2initializa7ationz75zz__unicodez00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__unicodez00();
					BGl_importedzd2moduleszd2initz00zz__unicodez00();
					BGl_toplevelzd2initzd2zz__unicodez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__unicodez00()
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 14 */
			BGl_list2626z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 144)), BCHAR(((unsigned char) '-')));
			BGl_list2627z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 145)), BCHAR(((unsigned char) '-')));
			BGl_list2628z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 146)), BCHAR(((unsigned char) '-')));
			BGl_list2629z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 147)), BCHAR(((unsigned char) '-')));
			BGl_list2630z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 148)), BCHAR(((unsigned char) '-')));
			BGl_list2631z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 149)), BCHAR(((unsigned char) '-')));
			BGl_list2632z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 152)), BCHAR(((unsigned char) '`')));
			BGl_list2633z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 153)), BCHAR(((unsigned char) '\'')));
			BGl_list2634z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 154)), BCHAR(((unsigned char) ',')));
			BGl_list2635z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 155)), BCHAR(((unsigned char) '`')));
			BGl_list2636z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 164)), BCHAR(((unsigned char) '.')));
			BGl_list2637z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 167)), BCHAR(((unsigned char) '.')));
			BGl_list2638z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 178)), BCHAR(((unsigned char) '\'')));
			BGl_list2639z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 179)), BCHAR(((unsigned char) '"')));
			BGl_list2640z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 181)), BCHAR(((unsigned char) '`')));
			BGl_list2641z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 187)), BCHAR(((unsigned char) '"')));
			BGl_list2642z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 184)), BCHAR(((unsigned char) '^')));
			BGl_list2643z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 185)), BCHAR(((unsigned char) '<')));
			BGl_list2644z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 186)), BCHAR(((unsigned char) '>')));
			BGl_list2625z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 128)),
				MAKE_PAIR(BGl_list2626z00zz__unicodez00,
					MAKE_PAIR(BGl_list2627z00zz__unicodez00,
						MAKE_PAIR(BGl_list2628z00zz__unicodez00,
							MAKE_PAIR(BGl_list2629z00zz__unicodez00,
								MAKE_PAIR(BGl_list2630z00zz__unicodez00,
									MAKE_PAIR(BGl_list2631z00zz__unicodez00,
										MAKE_PAIR(BGl_list2632z00zz__unicodez00,
											MAKE_PAIR(BGl_list2633z00zz__unicodez00,
												MAKE_PAIR(BGl_list2634z00zz__unicodez00,
													MAKE_PAIR(BGl_list2635z00zz__unicodez00,
														MAKE_PAIR(BGl_list2636z00zz__unicodez00,
															MAKE_PAIR(BGl_list2637z00zz__unicodez00,
																MAKE_PAIR(BGl_list2638z00zz__unicodez00,
																	MAKE_PAIR(BGl_list2639z00zz__unicodez00,
																		MAKE_PAIR(BGl_list2640z00zz__unicodez00,
																			MAKE_PAIR(BGl_list2641z00zz__unicodez00,
																				MAKE_PAIR(BGl_list2642z00zz__unicodez00,
																					MAKE_PAIR
																					(BGl_list2643z00zz__unicodez00,
																						MAKE_PAIR
																						(BGl_list2644z00zz__unicodez00,
																							BNIL))))))))))))))))))));
			BGl_list2646z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 131)), BCHAR(((unsigned char) '*')));
			BGl_list2645z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 129)), MAKE_PAIR(BGl_list2646z00zz__unicodez00,
					BNIL));
			BGl_list2648z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 141)), BCHAR(((unsigned char) '(')));
			BGl_list2649z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 142)), BCHAR(((unsigned char) ')')));
			BGl_list2647z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 130)), MAKE_PAIR(BGl_list2648z00zz__unicodez00,
					MAKE_PAIR(BGl_list2649z00zz__unicodez00, BNIL)));
			BGl_list2624z00zz__unicodez00 =
				MAKE_PAIR(BINT(((long) 226)), MAKE_PAIR(BGl_list2625z00zz__unicodez00,
					MAKE_PAIR(BGl_list2645z00zz__unicodez00,
						MAKE_PAIR(BGl_list2647z00zz__unicodez00, BNIL))));
			BGl_list2623z00zz__unicodez00 =
				MAKE_PAIR(BGl_list2624z00zz__unicodez00, BNIL);
			BGl_list2651z00zz__unicodez00 =
				MAKE_PAIR(BGl_string2652z00zz__unicodez00,
				MAKE_PAIR(BGl_string2653z00zz__unicodez00,
					MAKE_PAIR(BGl_string2654z00zz__unicodez00,
						MAKE_PAIR(BGl_string2655z00zz__unicodez00,
							MAKE_PAIR(BGl_string2656z00zz__unicodez00,
								MAKE_PAIR(BGl_string2657z00zz__unicodez00,
									MAKE_PAIR(BGl_string2658z00zz__unicodez00,
										MAKE_PAIR(BGl_string2659z00zz__unicodez00,
											MAKE_PAIR(BGl_string2660z00zz__unicodez00,
												MAKE_PAIR(BGl_string2661z00zz__unicodez00,
													MAKE_PAIR(BGl_string2662z00zz__unicodez00,
														MAKE_PAIR(BGl_string2663z00zz__unicodez00,
															MAKE_PAIR(BGl_string2664z00zz__unicodez00,
																MAKE_PAIR(BGl_string2653z00zz__unicodez00,
																	MAKE_PAIR(BGl_string2665z00zz__unicodez00,
																		MAKE_PAIR(BGl_string2653z00zz__unicodez00,
																			MAKE_PAIR(BGl_string2653z00zz__unicodez00,
																				MAKE_PAIR
																				(BGl_string2666z00zz__unicodez00,
																					MAKE_PAIR
																					(BGl_string2667z00zz__unicodez00,
																						MAKE_PAIR
																						(BGl_string2668z00zz__unicodez00,
																							MAKE_PAIR
																							(BGl_string2669z00zz__unicodez00,
																								MAKE_PAIR
																								(BGl_string2670z00zz__unicodez00,
																									MAKE_PAIR
																									(BGl_string2671z00zz__unicodez00,
																										MAKE_PAIR
																										(BGl_string2672z00zz__unicodez00,
																											MAKE_PAIR
																											(BGl_string2673z00zz__unicodez00,
																												MAKE_PAIR
																												(BGl_string2674z00zz__unicodez00,
																													MAKE_PAIR
																													(BGl_string2675z00zz__unicodez00,
																														MAKE_PAIR
																														(BGl_string2676z00zz__unicodez00,
																															MAKE_PAIR
																															(BGl_string2677z00zz__unicodez00,
																																MAKE_PAIR
																																(BGl_string2653z00zz__unicodez00,
																																	MAKE_PAIR
																																	(BGl_string2678z00zz__unicodez00,
																																		MAKE_PAIR
																																		(BGl_string2679z00zz__unicodez00,
																																			BNIL))))))))))))))))))))))))))))))));
			BGl_vector2650z00zz__unicodez00 =
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
				(BGl_list2651z00zz__unicodez00);
			BGl_symbol2686z00zz__unicodez00 =
				bstring_to_symbol(BGl_string2687z00zz__unicodez00);
			BGl_symbol2691z00zz__unicodez00 =
				bstring_to_symbol(BGl_string2692z00zz__unicodez00);
			return (BGl_symbol2723z00zz__unicodez00 =
				bstring_to_symbol(BGl_string2724z00zz__unicodez00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__unicodez00()
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 14 */
			BGl_8bitszd2invzd2zz__unicodez00 = BGl_list2623z00zz__unicodez00;
			BGl_cp1252z00zz__unicodez00 = BGl_vector2650z00zz__unicodez00;
			return (BGl_cp1252zd2invzd2zz__unicodez00 = BFALSE, BUNSPEC);
		}
	}



/* ucs2-string? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzf3z21zz__unicodez00(obj_t
		BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 201 */
			return UCS2_STRINGP(BgL_objz00_1);
		}
	}



/* _ucs2-string? */
	obj_t BGl__ucs2zd2stringzf3z21zz__unicodez00(obj_t BgL_envz00_3139,
		obj_t BgL_objz00_3140)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 201 */
			return BBOOL(UCS2_STRINGP(BgL_objz00_3140));
		}
	}



/* _make-ucs2-string */
	obj_t BGl__makezd2ucs2zd2stringz00zz__unicodez00(obj_t BgL_envz00_5,
		obj_t BgL_optz00_4)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 207 */
			{	/* Llib/unicode.scm 207 */
				obj_t BgL_g1861z00_3385;

				BgL_g1861z00_3385 = VECTOR_REF(BgL_optz00_4, (int) (((long) 0)));
				{	/* Llib/unicode.scm 207 */
					int BgL_aux1863z00_3386;

					BgL_aux1863z00_3386 = VECTOR_LENGTH(BgL_optz00_4);
					switch ((long) (BgL_aux1863z00_3386))
						{
						case ((long) 1):

							{	/* Llib/unicode.scm 207 */
								ucs2_t BgL_fillerz00_3387;

								{	/* Llib/unicode.scm 207 */
									int BgL_auxz00_3599;

									BgL_auxz00_3599 =
										(int) (((unsigned char) ((char) (((unsigned char) ' ')))));
									BgL_fillerz00_3387 = INT_TO_UCS2(BgL_auxz00_3599);
								}
								{	/* Llib/unicode.scm 207 */

									{	/* Llib/unicode.scm 207 */
										obj_t BgL_arg1892z00_3388;

										BgL_arg1892z00_3388 =
											VECTOR_REF(BgL_optz00_4, (int) (((long) 0)));
										{	/* Llib/unicode.scm 207 */
											int BgL_kz00_3389;

											{	/* Llib/unicode.scm 207 */
												obj_t BgL_auxz00_3607;

												if (INTEGERP(BgL_arg1892z00_3388))
													{	/* Llib/unicode.scm 207 */
														BgL_auxz00_3607 = BgL_arg1892z00_3388;
													}
												else
													{
														obj_t BgL_auxz00_3610;

														BgL_auxz00_3610 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2680z00zz__unicodez00,
															BINT(((long) 8902)),
															BGl_string2681z00zz__unicodez00,
															BGl_string2682z00zz__unicodez00,
															BgL_arg1892z00_3388);
														FAILURE(BgL_auxz00_3610, BFALSE, BFALSE);
													}
												BgL_kz00_3389 = CINT(BgL_auxz00_3607);
											}
											return
												make_ucs2_string(BgL_kz00_3389, BgL_fillerz00_3387);
										}
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Llib/unicode.scm 207 */
								obj_t BgL_fillerz00_3390;

								BgL_fillerz00_3390 =
									VECTOR_REF(BgL_optz00_4, (int) (((long) 1)));
								{	/* Llib/unicode.scm 207 */

									{	/* Llib/unicode.scm 207 */
										obj_t BgL_arg1893z00_3391;

										BgL_arg1893z00_3391 =
											VECTOR_REF(BgL_optz00_4, (int) (((long) 0)));
										{	/* Llib/unicode.scm 207 */
											int BgL_kz00_3392;

											ucs2_t BgL_fillerz00_3393;

											{	/* Llib/unicode.scm 207 */
												obj_t BgL_auxz00_3620;

												if (INTEGERP(BgL_arg1893z00_3391))
													{	/* Llib/unicode.scm 207 */
														BgL_auxz00_3620 = BgL_arg1893z00_3391;
													}
												else
													{
														obj_t BgL_auxz00_3623;

														BgL_auxz00_3623 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2680z00zz__unicodez00,
															BINT(((long) 8902)),
															BGl_string2681z00zz__unicodez00,
															BGl_string2682z00zz__unicodez00,
															BgL_arg1893z00_3391);
														FAILURE(BgL_auxz00_3623, BFALSE, BFALSE);
													}
												BgL_kz00_3392 = CINT(BgL_auxz00_3620);
											}
											{	/* Llib/unicode.scm 207 */
												obj_t BgL_auxz00_3628;

												if (UCS2P(BgL_fillerz00_3390))
													{	/* Llib/unicode.scm 207 */
														BgL_auxz00_3628 = BgL_fillerz00_3390;
													}
												else
													{
														obj_t BgL_auxz00_3631;

														BgL_auxz00_3631 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2680z00zz__unicodez00,
															BINT(((long) 8902)),
															BGl_string2681z00zz__unicodez00,
															BGl_string2683z00zz__unicodez00,
															BgL_fillerz00_3390);
														FAILURE(BgL_auxz00_3631, BFALSE, BFALSE);
													}
												BgL_fillerz00_3393 = CUCS2(BgL_auxz00_3628);
											}
											return
												make_ucs2_string(BgL_kz00_3392, BgL_fillerz00_3393);
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



/* make-ucs2-string */
	BGL_EXPORTED_DEF obj_t BGl_makezd2ucs2zd2stringz00zz__unicodez00(int
		BgL_kz00_2, ucs2_t BgL_fillerz00_3)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 207 */
			return make_ucs2_string(BgL_kz00_2, BgL_fillerz00_3);
		}
	}



/* ucs2-string */
	BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2zz__unicodez00(obj_t
		BgL_ucs2sz00_6)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 214 */
			return BGl_listzd2ze3ucs2zd2stringze3zz__unicodez00(BgL_ucs2sz00_6);
		}
	}



/* _ucs2-string */
	obj_t BGl__ucs2zd2stringzd2zz__unicodez00(obj_t BgL_envz00_3141,
		obj_t BgL_ucs2sz00_3142)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 214 */
			return BGl_listzd2ze3ucs2zd2stringze3zz__unicodez00(BgL_ucs2sz00_3142);
		}
	}



/* ucs2-string-length */
	BGL_EXPORTED_DEF int BGl_ucs2zd2stringzd2lengthz00zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_7)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 220 */
			return UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_7);
		}
	}



/* _ucs2-string-length */
	obj_t BGl__ucs2zd2stringzd2lengthz00zz__unicodez00(obj_t BgL_envz00_3143,
		obj_t BgL_ucs2zd2stringzd2_3144)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 220 */
			{	/* Llib/unicode.scm 221 */
				int BgL_auxz00_3643;

				{	/* Llib/unicode.scm 221 */
					obj_t BgL_ucs2zd2stringzd2_3395;

					if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_3144))
						{	/* Llib/unicode.scm 221 */
							BgL_ucs2zd2stringzd2_3395 = BgL_ucs2zd2stringzd2_3144;
						}
					else
						{
							obj_t BgL_auxz00_3646;

							BgL_auxz00_3646 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 9589)), BGl_string2684z00zz__unicodez00,
								BGl_string2685z00zz__unicodez00, BgL_ucs2zd2stringzd2_3144);
							FAILURE(BgL_auxz00_3646, BFALSE, BFALSE);
						}
					BgL_auxz00_3643 = UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_3395);
				}
				return BINT(BgL_auxz00_3643);
			}
		}
	}



/* ucs2-string-ref */
	BGL_EXPORTED_DEF ucs2_t BGl_ucs2zd2stringzd2refz00zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_8, int BgL_kz00_9)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 226 */
			{	/* Llib/unicode.scm 227 */
				bool_t BgL_testz00_3652;

				{	/* Llib/unicode.scm 227 */
					long BgL_auxz00_3655;

					long BgL_auxz00_3653;

					BgL_auxz00_3655 = (long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_8));
					BgL_auxz00_3653 = (long) (BgL_kz00_9);
					BgL_testz00_3652 = BOUND_CHECK(BgL_auxz00_3653, BgL_auxz00_3655);
				}
				if (BgL_testz00_3652)
					{	/* Llib/unicode.scm 227 */
						return UCS2_STRING_REF(BgL_ucs2zd2stringzd2_8, BgL_kz00_9);
					}
				else
					{	/* Llib/unicode.scm 227 */
						obj_t BgL_arg1895z00_3396;

						obj_t BgL_arg1896z00_3397;

						BgL_arg1895z00_3396 = BGl_symbol2686z00zz__unicodez00;
						{	/* Llib/unicode.scm 227 */
							obj_t BgL_arg1899z00_3398;

							{	/* Llib/unicode.scm 227 */

								BgL_arg1899z00_3398 =
									BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
									((long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_8)) -
										((long) 1)), ((long) 10));
							}
							BgL_arg1896z00_3397 =
								string_append_3(BGl_string2688z00zz__unicodez00,
								BgL_arg1899z00_3398, BGl_string2689z00zz__unicodez00);
						}
						return
							CUCS2(BGl_errorz00zz__errorz00(BgL_arg1895z00_3396,
								BgL_arg1896z00_3397, BINT(BgL_kz00_9)));
					}
			}
		}
	}



/* _ucs2-string-ref */
	obj_t BGl__ucs2zd2stringzd2refz00zz__unicodez00(obj_t BgL_envz00_3145,
		obj_t BgL_ucs2zd2stringzd2_3146, obj_t BgL_kz00_3147)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 226 */
			{	/* Llib/unicode.scm 227 */
				ucs2_t BgL_auxz00_3668;

				{	/* Llib/unicode.scm 227 */
					obj_t BgL_ucs2zd2stringzd2_3399;

					int BgL_kz00_3400;

					if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_3146))
						{	/* Llib/unicode.scm 227 */
							BgL_ucs2zd2stringzd2_3399 = BgL_ucs2zd2stringzd2_3146;
						}
					else
						{
							obj_t BgL_auxz00_3671;

							BgL_auxz00_3671 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 9926)), BGl_string2690z00zz__unicodez00,
								BGl_string2685z00zz__unicodez00, BgL_ucs2zd2stringzd2_3146);
							FAILURE(BgL_auxz00_3671, BFALSE, BFALSE);
						}
					{	/* Llib/unicode.scm 227 */
						obj_t BgL_auxz00_3675;

						if (INTEGERP(BgL_kz00_3147))
							{	/* Llib/unicode.scm 227 */
								BgL_auxz00_3675 = BgL_kz00_3147;
							}
						else
							{
								obj_t BgL_auxz00_3678;

								BgL_auxz00_3678 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2680z00zz__unicodez00, BINT(((long) 9926)),
									BGl_string2690z00zz__unicodez00,
									BGl_string2682z00zz__unicodez00, BgL_kz00_3147);
								FAILURE(BgL_auxz00_3678, BFALSE, BFALSE);
							}
						BgL_kz00_3400 = CINT(BgL_auxz00_3675);
					}
					{	/* Llib/unicode.scm 227 */
						bool_t BgL_testz00_3683;

						{	/* Llib/unicode.scm 227 */
							long BgL_auxz00_3686;

							long BgL_auxz00_3684;

							BgL_auxz00_3686 =
								(long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_3399));
							BgL_auxz00_3684 = (long) (BgL_kz00_3400);
							BgL_testz00_3683 = BOUND_CHECK(BgL_auxz00_3684, BgL_auxz00_3686);
						}
						if (BgL_testz00_3683)
							{	/* Llib/unicode.scm 227 */
								BgL_auxz00_3668 =
									UCS2_STRING_REF(BgL_ucs2zd2stringzd2_3399, BgL_kz00_3400);
							}
						else
							{	/* Llib/unicode.scm 227 */
								obj_t BgL_arg1895z00_3401;

								obj_t BgL_arg1896z00_3402;

								BgL_arg1895z00_3401 = BGl_symbol2686z00zz__unicodez00;
								{	/* Llib/unicode.scm 227 */
									obj_t BgL_arg1899z00_3403;

									{	/* Llib/unicode.scm 227 */

										BgL_arg1899z00_3403 =
											BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
											((long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_3399)) -
												((long) 1)), ((long) 10));
									}
									BgL_arg1896z00_3402 =
										string_append_3(BGl_string2688z00zz__unicodez00,
										BgL_arg1899z00_3403, BGl_string2689z00zz__unicodez00);
								}
								BgL_auxz00_3668 =
									CUCS2(BGl_errorz00zz__errorz00(BgL_arg1895z00_3401,
										BgL_arg1896z00_3402, BINT(BgL_kz00_3400)));
				}}}
				return BUCS2(BgL_auxz00_3668);
			}
		}
	}



/* ucs2-string-set! */
	BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2setz12z12zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_10, int BgL_kz00_11, ucs2_t BgL_ucs2z00_12)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 239 */
			{	/* Llib/unicode.scm 240 */
				bool_t BgL_testz00_3700;

				{	/* Llib/unicode.scm 240 */
					long BgL_auxz00_3703;

					long BgL_auxz00_3701;

					BgL_auxz00_3703 =
						(long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_10));
					BgL_auxz00_3701 = (long) (BgL_kz00_11);
					BgL_testz00_3700 = BOUND_CHECK(BgL_auxz00_3701, BgL_auxz00_3703);
				}
				if (BgL_testz00_3700)
					{	/* Llib/unicode.scm 240 */
						return
							UCS2_STRING_SET(BgL_ucs2zd2stringzd2_10, BgL_kz00_11,
							BgL_ucs2z00_12);
					}
				else
					{	/* Llib/unicode.scm 240 */
						obj_t BgL_arg1907z00_3404;

						obj_t BgL_arg1908z00_3405;

						BgL_arg1907z00_3404 = BGl_symbol2691z00zz__unicodez00;
						{	/* Llib/unicode.scm 240 */
							obj_t BgL_arg1910z00_3406;

							{	/* Llib/unicode.scm 240 */

								BgL_arg1910z00_3406 =
									BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
									((long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_10)) -
										((long) 1)), ((long) 10));
							}
							BgL_arg1908z00_3405 =
								string_append_3(BGl_string2688z00zz__unicodez00,
								BgL_arg1910z00_3406, BGl_string2689z00zz__unicodez00);
						}
						return
							BGl_errorz00zz__errorz00(BgL_arg1907z00_3404, BgL_arg1908z00_3405,
							BINT(BgL_kz00_11));
					}
			}
		}
	}



/* _ucs2-string-set! */
	obj_t BGl__ucs2zd2stringzd2setz12z12zz__unicodez00(obj_t BgL_envz00_3148,
		obj_t BgL_ucs2zd2stringzd2_3149, obj_t BgL_kz00_3150,
		obj_t BgL_ucs2z00_3151)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 239 */
			{	/* Llib/unicode.scm 240 */
				obj_t BgL_ucs2zd2stringzd2_3407;

				int BgL_kz00_3408;

				ucs2_t BgL_ucs2z00_3409;

				if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_3149))
					{	/* Llib/unicode.scm 240 */
						BgL_ucs2zd2stringzd2_3407 = BgL_ucs2zd2stringzd2_3149;
					}
				else
					{
						obj_t BgL_auxz00_3717;

						BgL_auxz00_3717 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 10489)), BGl_string2693z00zz__unicodez00,
							BGl_string2685z00zz__unicodez00, BgL_ucs2zd2stringzd2_3149);
						FAILURE(BgL_auxz00_3717, BFALSE, BFALSE);
					}
				{	/* Llib/unicode.scm 240 */
					obj_t BgL_auxz00_3721;

					if (INTEGERP(BgL_kz00_3150))
						{	/* Llib/unicode.scm 240 */
							BgL_auxz00_3721 = BgL_kz00_3150;
						}
					else
						{
							obj_t BgL_auxz00_3724;

							BgL_auxz00_3724 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 10489)), BGl_string2693z00zz__unicodez00,
								BGl_string2682z00zz__unicodez00, BgL_kz00_3150);
							FAILURE(BgL_auxz00_3724, BFALSE, BFALSE);
						}
					BgL_kz00_3408 = CINT(BgL_auxz00_3721);
				}
				{	/* Llib/unicode.scm 240 */
					obj_t BgL_auxz00_3729;

					if (UCS2P(BgL_ucs2z00_3151))
						{	/* Llib/unicode.scm 240 */
							BgL_auxz00_3729 = BgL_ucs2z00_3151;
						}
					else
						{
							obj_t BgL_auxz00_3732;

							BgL_auxz00_3732 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 10489)), BGl_string2693z00zz__unicodez00,
								BGl_string2683z00zz__unicodez00, BgL_ucs2z00_3151);
							FAILURE(BgL_auxz00_3732, BFALSE, BFALSE);
						}
					BgL_ucs2z00_3409 = CUCS2(BgL_auxz00_3729);
				}
				{	/* Llib/unicode.scm 240 */
					bool_t BgL_testz00_3737;

					{	/* Llib/unicode.scm 240 */
						long BgL_auxz00_3740;

						long BgL_auxz00_3738;

						BgL_auxz00_3740 =
							(long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_3407));
						BgL_auxz00_3738 = (long) (BgL_kz00_3408);
						BgL_testz00_3737 = BOUND_CHECK(BgL_auxz00_3738, BgL_auxz00_3740);
					}
					if (BgL_testz00_3737)
						{	/* Llib/unicode.scm 240 */
							return
								UCS2_STRING_SET(BgL_ucs2zd2stringzd2_3407, BgL_kz00_3408,
								BgL_ucs2z00_3409);
						}
					else
						{	/* Llib/unicode.scm 240 */
							obj_t BgL_arg1907z00_3410;

							obj_t BgL_arg1908z00_3411;

							BgL_arg1907z00_3410 = BGl_symbol2691z00zz__unicodez00;
							{	/* Llib/unicode.scm 240 */
								obj_t BgL_arg1910z00_3412;

								{	/* Llib/unicode.scm 240 */

									BgL_arg1910z00_3412 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
										((long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_3407)) -
											((long) 1)), ((long) 10));
								}
								BgL_arg1908z00_3411 =
									string_append_3(BGl_string2688z00zz__unicodez00,
									BgL_arg1910z00_3412, BGl_string2689z00zz__unicodez00);
							}
							return
								BGl_errorz00zz__errorz00(BgL_arg1907z00_3410,
								BgL_arg1908z00_3411, BINT(BgL_kz00_3408));
						}
				}
			}
		}
	}



/* ucs2-string-ref-ur */
	BGL_EXPORTED_DEF ucs2_t BGl_ucs2zd2stringzd2refzd2urzd2zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_13, int BgL_kz00_14)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 252 */
			return UCS2_STRING_REF(BgL_ucs2zd2stringzd2_13, BgL_kz00_14);
		}
	}



/* _ucs2-string-ref-ur */
	obj_t BGl__ucs2zd2stringzd2refzd2urzd2zz__unicodez00(obj_t BgL_envz00_3152,
		obj_t BgL_ucs2zd2stringzd2_3153, obj_t BgL_kz00_3154)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 252 */
			{	/* Llib/unicode.scm 253 */
				ucs2_t BgL_auxz00_3753;

				{	/* Llib/unicode.scm 253 */
					obj_t BgL_ucs2zd2stringzd2_3413;

					int BgL_kz00_3414;

					if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_3153))
						{	/* Llib/unicode.scm 253 */
							BgL_ucs2zd2stringzd2_3413 = BgL_ucs2zd2stringzd2_3153;
						}
					else
						{
							obj_t BgL_auxz00_3756;

							BgL_auxz00_3756 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 11027)), BGl_string2694z00zz__unicodez00,
								BGl_string2685z00zz__unicodez00, BgL_ucs2zd2stringzd2_3153);
							FAILURE(BgL_auxz00_3756, BFALSE, BFALSE);
						}
					{	/* Llib/unicode.scm 253 */
						obj_t BgL_auxz00_3760;

						if (INTEGERP(BgL_kz00_3154))
							{	/* Llib/unicode.scm 253 */
								BgL_auxz00_3760 = BgL_kz00_3154;
							}
						else
							{
								obj_t BgL_auxz00_3763;

								BgL_auxz00_3763 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2680z00zz__unicodez00, BINT(((long) 11027)),
									BGl_string2694z00zz__unicodez00,
									BGl_string2682z00zz__unicodez00, BgL_kz00_3154);
								FAILURE(BgL_auxz00_3763, BFALSE, BFALSE);
							}
						BgL_kz00_3414 = CINT(BgL_auxz00_3760);
					}
					BgL_auxz00_3753 =
						UCS2_STRING_REF(BgL_ucs2zd2stringzd2_3413, BgL_kz00_3414);
				}
				return BUCS2(BgL_auxz00_3753);
			}
		}
	}



/* ucs2-string-set-ur! */
	BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2setzd2urz12zc0zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_15, int BgL_kz00_16, ucs2_t BgL_ucs2z00_17)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 258 */
			return
				UCS2_STRING_SET(BgL_ucs2zd2stringzd2_15, BgL_kz00_16, BgL_ucs2z00_17);
		}
	}



/* _ucs2-string-set-ur! */
	obj_t BGl__ucs2zd2stringzd2setzd2urz12zc0zz__unicodez00(obj_t BgL_envz00_3155,
		obj_t BgL_ucs2zd2stringzd2_3156, obj_t BgL_kz00_3157,
		obj_t BgL_ucs2z00_3158)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 258 */
			{	/* Llib/unicode.scm 259 */
				obj_t BgL_ucs2zd2stringzd2_3415;

				int BgL_kz00_3416;

				ucs2_t BgL_ucs2z00_3417;

				if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_3156))
					{	/* Llib/unicode.scm 259 */
						BgL_ucs2zd2stringzd2_3415 = BgL_ucs2zd2stringzd2_3156;
					}
				else
					{
						obj_t BgL_auxz00_3773;

						BgL_auxz00_3773 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 11345)), BGl_string2695z00zz__unicodez00,
							BGl_string2685z00zz__unicodez00, BgL_ucs2zd2stringzd2_3156);
						FAILURE(BgL_auxz00_3773, BFALSE, BFALSE);
					}
				{	/* Llib/unicode.scm 259 */
					obj_t BgL_auxz00_3777;

					if (INTEGERP(BgL_kz00_3157))
						{	/* Llib/unicode.scm 259 */
							BgL_auxz00_3777 = BgL_kz00_3157;
						}
					else
						{
							obj_t BgL_auxz00_3780;

							BgL_auxz00_3780 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 11345)), BGl_string2695z00zz__unicodez00,
								BGl_string2682z00zz__unicodez00, BgL_kz00_3157);
							FAILURE(BgL_auxz00_3780, BFALSE, BFALSE);
						}
					BgL_kz00_3416 = CINT(BgL_auxz00_3777);
				}
				{	/* Llib/unicode.scm 259 */
					obj_t BgL_auxz00_3785;

					if (UCS2P(BgL_ucs2z00_3158))
						{	/* Llib/unicode.scm 259 */
							BgL_auxz00_3785 = BgL_ucs2z00_3158;
						}
					else
						{
							obj_t BgL_auxz00_3788;

							BgL_auxz00_3788 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 11345)), BGl_string2695z00zz__unicodez00,
								BGl_string2683z00zz__unicodez00, BgL_ucs2z00_3158);
							FAILURE(BgL_auxz00_3788, BFALSE, BFALSE);
						}
					BgL_ucs2z00_3417 = CUCS2(BgL_auxz00_3785);
				}
				return
					UCS2_STRING_SET(BgL_ucs2zd2stringzd2_3415, BgL_kz00_3416,
					BgL_ucs2z00_3417);
			}
		}
	}



/* ucs2-string=? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzd3zf3zf2zz__unicodez00(obj_t
		BgL_ucs2zd2string1zd2_18, obj_t BgL_ucs2zd2string2zd2_19)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 264 */
			return ucs2_strcmp(BgL_ucs2zd2string1zd2_18, BgL_ucs2zd2string2zd2_19);
		}
	}



/* _ucs2-string=? */
	obj_t BGl__ucs2zd2stringzd3zf3zf2zz__unicodez00(obj_t BgL_envz00_3159,
		obj_t BgL_ucs2zd2string1zd2_3160, obj_t BgL_ucs2zd2string2zd2_3161)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 264 */
			{	/* Llib/unicode.scm 265 */
				bool_t BgL_auxz00_3795;

				{	/* Llib/unicode.scm 265 */
					obj_t BgL_ucs2zd2string1zd2_3418;

					obj_t BgL_ucs2zd2string2zd2_3419;

					if (UCS2_STRINGP(BgL_ucs2zd2string1zd2_3160))
						{	/* Llib/unicode.scm 265 */
							BgL_ucs2zd2string1zd2_3418 = BgL_ucs2zd2string1zd2_3160;
						}
					else
						{
							obj_t BgL_auxz00_3798;

							BgL_auxz00_3798 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 11669)), BGl_string2696z00zz__unicodez00,
								BGl_string2685z00zz__unicodez00, BgL_ucs2zd2string1zd2_3160);
							FAILURE(BgL_auxz00_3798, BFALSE, BFALSE);
						}
					if (UCS2_STRINGP(BgL_ucs2zd2string2zd2_3161))
						{	/* Llib/unicode.scm 265 */
							BgL_ucs2zd2string2zd2_3419 = BgL_ucs2zd2string2zd2_3161;
						}
					else
						{
							obj_t BgL_auxz00_3804;

							BgL_auxz00_3804 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 11669)), BGl_string2696z00zz__unicodez00,
								BGl_string2685z00zz__unicodez00, BgL_ucs2zd2string2zd2_3161);
							FAILURE(BgL_auxz00_3804, BFALSE, BFALSE);
						}
					BgL_auxz00_3795 =
						ucs2_strcmp(BgL_ucs2zd2string1zd2_3418, BgL_ucs2zd2string2zd2_3419);
				}
				return BBOOL(BgL_auxz00_3795);
			}
		}
	}



/* ucs2-string-ci=? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzd2cizd3zf3z20zz__unicodez00(obj_t
		BgL_ucs2zd2string1zd2_20, obj_t BgL_ucs2zd2string2zd2_21)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 270 */
			return ucs2_strcicmp(BgL_ucs2zd2string1zd2_20, BgL_ucs2zd2string2zd2_21);
		}
	}



/* _ucs2-string-ci=? */
	obj_t BGl__ucs2zd2stringzd2cizd3zf3z20zz__unicodez00(obj_t BgL_envz00_3162,
		obj_t BgL_ucs2zd2string1zd2_3163, obj_t BgL_ucs2zd2string2zd2_3164)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 270 */
			{	/* Llib/unicode.scm 271 */
				bool_t BgL_auxz00_3811;

				{	/* Llib/unicode.scm 271 */
					obj_t BgL_ucs2zd2string1zd2_3420;

					obj_t BgL_ucs2zd2string2zd2_3421;

					if (UCS2_STRINGP(BgL_ucs2zd2string1zd2_3163))
						{	/* Llib/unicode.scm 271 */
							BgL_ucs2zd2string1zd2_3420 = BgL_ucs2zd2string1zd2_3163;
						}
					else
						{
							obj_t BgL_auxz00_3814;

							BgL_auxz00_3814 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 12000)), BGl_string2697z00zz__unicodez00,
								BGl_string2685z00zz__unicodez00, BgL_ucs2zd2string1zd2_3163);
							FAILURE(BgL_auxz00_3814, BFALSE, BFALSE);
						}
					if (UCS2_STRINGP(BgL_ucs2zd2string2zd2_3164))
						{	/* Llib/unicode.scm 271 */
							BgL_ucs2zd2string2zd2_3421 = BgL_ucs2zd2string2zd2_3164;
						}
					else
						{
							obj_t BgL_auxz00_3820;

							BgL_auxz00_3820 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 12000)), BGl_string2697z00zz__unicodez00,
								BGl_string2685z00zz__unicodez00, BgL_ucs2zd2string2zd2_3164);
							FAILURE(BgL_auxz00_3820, BFALSE, BFALSE);
						}
					BgL_auxz00_3811 =
						ucs2_strcicmp(BgL_ucs2zd2string1zd2_3420,
						BgL_ucs2zd2string2zd2_3421);
				}
				return BBOOL(BgL_auxz00_3811);
			}
		}
	}



/* ucs2-string<? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzc3zf3ze2zz__unicodez00(obj_t
		BgL_ucs2zd2string1zd2_22, obj_t BgL_ucs2zd2string2zd2_23)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 276 */
			return ucs2_string_lt(BgL_ucs2zd2string1zd2_22, BgL_ucs2zd2string2zd2_23);
		}
	}



/* _ucs2-string<? */
	obj_t BGl__ucs2zd2stringzc3zf3ze2zz__unicodez00(obj_t BgL_envz00_3165,
		obj_t BgL_ucs2zd2string1zd2_3166, obj_t BgL_ucs2zd2string2zd2_3167)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 276 */
			{	/* Llib/unicode.scm 277 */
				bool_t BgL_auxz00_3827;

				{	/* Llib/unicode.scm 277 */
					obj_t BgL_ucs2zd2string1zd2_3422;

					obj_t BgL_ucs2zd2string2zd2_3423;

					if (UCS2_STRINGP(BgL_ucs2zd2string1zd2_3166))
						{	/* Llib/unicode.scm 277 */
							BgL_ucs2zd2string1zd2_3422 = BgL_ucs2zd2string1zd2_3166;
						}
					else
						{
							obj_t BgL_auxz00_3830;

							BgL_auxz00_3830 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 12326)), BGl_string2698z00zz__unicodez00,
								BGl_string2685z00zz__unicodez00, BgL_ucs2zd2string1zd2_3166);
							FAILURE(BgL_auxz00_3830, BFALSE, BFALSE);
						}
					if (UCS2_STRINGP(BgL_ucs2zd2string2zd2_3167))
						{	/* Llib/unicode.scm 277 */
							BgL_ucs2zd2string2zd2_3423 = BgL_ucs2zd2string2zd2_3167;
						}
					else
						{
							obj_t BgL_auxz00_3836;

							BgL_auxz00_3836 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 12326)), BGl_string2698z00zz__unicodez00,
								BGl_string2685z00zz__unicodez00, BgL_ucs2zd2string2zd2_3167);
							FAILURE(BgL_auxz00_3836, BFALSE, BFALSE);
						}
					BgL_auxz00_3827 =
						ucs2_string_lt(BgL_ucs2zd2string1zd2_3422,
						BgL_ucs2zd2string2zd2_3423);
				}
				return BBOOL(BgL_auxz00_3827);
			}
		}
	}



/* ucs2-string>? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringze3zf3zc2zz__unicodez00(obj_t
		BgL_ucs2zd2string1zd2_24, obj_t BgL_ucs2zd2string2zd2_25)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 282 */
			return ucs2_string_gt(BgL_ucs2zd2string1zd2_24, BgL_ucs2zd2string2zd2_25);
		}
	}



/* _ucs2-string>? */
	obj_t BGl__ucs2zd2stringze3zf3zc2zz__unicodez00(obj_t BgL_envz00_3168,
		obj_t BgL_ucs2zd2string1zd2_3169, obj_t BgL_ucs2zd2string2zd2_3170)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 282 */
			{	/* Llib/unicode.scm 283 */
				bool_t BgL_auxz00_3843;

				{	/* Llib/unicode.scm 283 */
					obj_t BgL_ucs2zd2string1zd2_3424;

					obj_t BgL_ucs2zd2string2zd2_3425;

					if (UCS2_STRINGP(BgL_ucs2zd2string1zd2_3169))
						{	/* Llib/unicode.scm 283 */
							BgL_ucs2zd2string1zd2_3424 = BgL_ucs2zd2string1zd2_3169;
						}
					else
						{
							obj_t BgL_auxz00_3846;

							BgL_auxz00_3846 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 12653)), BGl_string2699z00zz__unicodez00,
								BGl_string2685z00zz__unicodez00, BgL_ucs2zd2string1zd2_3169);
							FAILURE(BgL_auxz00_3846, BFALSE, BFALSE);
						}
					if (UCS2_STRINGP(BgL_ucs2zd2string2zd2_3170))
						{	/* Llib/unicode.scm 283 */
							BgL_ucs2zd2string2zd2_3425 = BgL_ucs2zd2string2zd2_3170;
						}
					else
						{
							obj_t BgL_auxz00_3852;

							BgL_auxz00_3852 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 12653)), BGl_string2699z00zz__unicodez00,
								BGl_string2685z00zz__unicodez00, BgL_ucs2zd2string2zd2_3170);
							FAILURE(BgL_auxz00_3852, BFALSE, BFALSE);
						}
					BgL_auxz00_3843 =
						ucs2_string_gt(BgL_ucs2zd2string1zd2_3424,
						BgL_ucs2zd2string2zd2_3425);
				}
				return BBOOL(BgL_auxz00_3843);
			}
		}
	}



/* ucs2-string<=? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzc3zd3zf3z31zz__unicodez00(obj_t
		BgL_ucs2zd2string1zd2_26, obj_t BgL_ucs2zd2string2zd2_27)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 288 */
			return ucs2_string_le(BgL_ucs2zd2string1zd2_26, BgL_ucs2zd2string2zd2_27);
		}
	}



/* _ucs2-string<=? */
	obj_t BGl__ucs2zd2stringzc3zd3zf3z31zz__unicodez00(obj_t BgL_envz00_3171,
		obj_t BgL_ucs2zd2string1zd2_3172, obj_t BgL_ucs2zd2string2zd2_3173)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 288 */
			{	/* Llib/unicode.scm 289 */
				bool_t BgL_auxz00_3859;

				{	/* Llib/unicode.scm 289 */
					obj_t BgL_ucs2zd2string1zd2_3426;

					obj_t BgL_ucs2zd2string2zd2_3427;

					if (UCS2_STRINGP(BgL_ucs2zd2string1zd2_3172))
						{	/* Llib/unicode.scm 289 */
							BgL_ucs2zd2string1zd2_3426 = BgL_ucs2zd2string1zd2_3172;
						}
					else
						{
							obj_t BgL_auxz00_3862;

							BgL_auxz00_3862 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 12981)), BGl_string2700z00zz__unicodez00,
								BGl_string2685z00zz__unicodez00, BgL_ucs2zd2string1zd2_3172);
							FAILURE(BgL_auxz00_3862, BFALSE, BFALSE);
						}
					if (UCS2_STRINGP(BgL_ucs2zd2string2zd2_3173))
						{	/* Llib/unicode.scm 289 */
							BgL_ucs2zd2string2zd2_3427 = BgL_ucs2zd2string2zd2_3173;
						}
					else
						{
							obj_t BgL_auxz00_3868;

							BgL_auxz00_3868 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 12981)), BGl_string2700z00zz__unicodez00,
								BGl_string2685z00zz__unicodez00, BgL_ucs2zd2string2zd2_3173);
							FAILURE(BgL_auxz00_3868, BFALSE, BFALSE);
						}
					BgL_auxz00_3859 =
						ucs2_string_le(BgL_ucs2zd2string1zd2_3426,
						BgL_ucs2zd2string2zd2_3427);
				}
				return BBOOL(BgL_auxz00_3859);
			}
		}
	}



/* ucs2-string>=? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringze3zd3zf3z11zz__unicodez00(obj_t
		BgL_ucs2zd2string1zd2_28, obj_t BgL_ucs2zd2string2zd2_29)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 294 */
			return ucs2_string_ge(BgL_ucs2zd2string1zd2_28, BgL_ucs2zd2string2zd2_29);
		}
	}



/* _ucs2-string>=? */
	obj_t BGl__ucs2zd2stringze3zd3zf3z11zz__unicodez00(obj_t BgL_envz00_3174,
		obj_t BgL_ucs2zd2string1zd2_3175, obj_t BgL_ucs2zd2string2zd2_3176)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 294 */
			{	/* Llib/unicode.scm 295 */
				bool_t BgL_auxz00_3875;

				{	/* Llib/unicode.scm 295 */
					obj_t BgL_ucs2zd2string1zd2_3428;

					obj_t BgL_ucs2zd2string2zd2_3429;

					if (UCS2_STRINGP(BgL_ucs2zd2string1zd2_3175))
						{	/* Llib/unicode.scm 295 */
							BgL_ucs2zd2string1zd2_3428 = BgL_ucs2zd2string1zd2_3175;
						}
					else
						{
							obj_t BgL_auxz00_3878;

							BgL_auxz00_3878 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 13309)), BGl_string2701z00zz__unicodez00,
								BGl_string2685z00zz__unicodez00, BgL_ucs2zd2string1zd2_3175);
							FAILURE(BgL_auxz00_3878, BFALSE, BFALSE);
						}
					if (UCS2_STRINGP(BgL_ucs2zd2string2zd2_3176))
						{	/* Llib/unicode.scm 295 */
							BgL_ucs2zd2string2zd2_3429 = BgL_ucs2zd2string2zd2_3176;
						}
					else
						{
							obj_t BgL_auxz00_3884;

							BgL_auxz00_3884 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 13309)), BGl_string2701z00zz__unicodez00,
								BGl_string2685z00zz__unicodez00, BgL_ucs2zd2string2zd2_3176);
							FAILURE(BgL_auxz00_3884, BFALSE, BFALSE);
						}
					BgL_auxz00_3875 =
						ucs2_string_ge(BgL_ucs2zd2string1zd2_3428,
						BgL_ucs2zd2string2zd2_3429);
				}
				return BBOOL(BgL_auxz00_3875);
			}
		}
	}



/* ucs2-string-ci<? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzd2cizc3zf3z30zz__unicodez00(obj_t
		BgL_ucs2zd2string1zd2_30, obj_t BgL_ucs2zd2string2zd2_31)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 300 */
			return
				ucs2_string_cilt(BgL_ucs2zd2string1zd2_30, BgL_ucs2zd2string2zd2_31);
		}
	}



/* _ucs2-string-ci<? */
	obj_t BGl__ucs2zd2stringzd2cizc3zf3z30zz__unicodez00(obj_t BgL_envz00_3177,
		obj_t BgL_ucs2zd2string1zd2_3178, obj_t BgL_ucs2zd2string2zd2_3179)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 300 */
			{	/* Llib/unicode.scm 301 */
				bool_t BgL_auxz00_3891;

				{	/* Llib/unicode.scm 301 */
					obj_t BgL_ucs2zd2string1zd2_3430;

					obj_t BgL_ucs2zd2string2zd2_3431;

					if (UCS2_STRINGP(BgL_ucs2zd2string1zd2_3178))
						{	/* Llib/unicode.scm 301 */
							BgL_ucs2zd2string1zd2_3430 = BgL_ucs2zd2string1zd2_3178;
						}
					else
						{
							obj_t BgL_auxz00_3894;

							BgL_auxz00_3894 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 13639)), BGl_string2702z00zz__unicodez00,
								BGl_string2685z00zz__unicodez00, BgL_ucs2zd2string1zd2_3178);
							FAILURE(BgL_auxz00_3894, BFALSE, BFALSE);
						}
					if (UCS2_STRINGP(BgL_ucs2zd2string2zd2_3179))
						{	/* Llib/unicode.scm 301 */
							BgL_ucs2zd2string2zd2_3431 = BgL_ucs2zd2string2zd2_3179;
						}
					else
						{
							obj_t BgL_auxz00_3900;

							BgL_auxz00_3900 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 13639)), BGl_string2702z00zz__unicodez00,
								BGl_string2685z00zz__unicodez00, BgL_ucs2zd2string2zd2_3179);
							FAILURE(BgL_auxz00_3900, BFALSE, BFALSE);
						}
					BgL_auxz00_3891 =
						ucs2_string_cilt(BgL_ucs2zd2string1zd2_3430,
						BgL_ucs2zd2string2zd2_3431);
				}
				return BBOOL(BgL_auxz00_3891);
			}
		}
	}



/* ucs2-string-ci>? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzd2cize3zf3z10zz__unicodez00(obj_t
		BgL_ucs2zd2string1zd2_32, obj_t BgL_ucs2zd2string2zd2_33)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 306 */
			return
				ucs2_string_cigt(BgL_ucs2zd2string1zd2_32, BgL_ucs2zd2string2zd2_33);
		}
	}



/* _ucs2-string-ci>? */
	obj_t BGl__ucs2zd2stringzd2cize3zf3z10zz__unicodez00(obj_t BgL_envz00_3180,
		obj_t BgL_ucs2zd2string1zd2_3181, obj_t BgL_ucs2zd2string2zd2_3182)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 306 */
			{	/* Llib/unicode.scm 307 */
				bool_t BgL_auxz00_3907;

				{	/* Llib/unicode.scm 307 */
					obj_t BgL_ucs2zd2string1zd2_3432;

					obj_t BgL_ucs2zd2string2zd2_3433;

					if (UCS2_STRINGP(BgL_ucs2zd2string1zd2_3181))
						{	/* Llib/unicode.scm 307 */
							BgL_ucs2zd2string1zd2_3432 = BgL_ucs2zd2string1zd2_3181;
						}
					else
						{
							obj_t BgL_auxz00_3910;

							BgL_auxz00_3910 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 13971)), BGl_string2703z00zz__unicodez00,
								BGl_string2685z00zz__unicodez00, BgL_ucs2zd2string1zd2_3181);
							FAILURE(BgL_auxz00_3910, BFALSE, BFALSE);
						}
					if (UCS2_STRINGP(BgL_ucs2zd2string2zd2_3182))
						{	/* Llib/unicode.scm 307 */
							BgL_ucs2zd2string2zd2_3433 = BgL_ucs2zd2string2zd2_3182;
						}
					else
						{
							obj_t BgL_auxz00_3916;

							BgL_auxz00_3916 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 13971)), BGl_string2703z00zz__unicodez00,
								BGl_string2685z00zz__unicodez00, BgL_ucs2zd2string2zd2_3182);
							FAILURE(BgL_auxz00_3916, BFALSE, BFALSE);
						}
					BgL_auxz00_3907 =
						ucs2_string_cigt(BgL_ucs2zd2string1zd2_3432,
						BgL_ucs2zd2string2zd2_3433);
				}
				return BBOOL(BgL_auxz00_3907);
			}
		}
	}



/* ucs2-string-ci<=? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzd2cizc3zd3zf3ze3zz__unicodez00(obj_t
		BgL_ucs2zd2string1zd2_34, obj_t BgL_ucs2zd2string2zd2_35)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 312 */
			return
				ucs2_string_cile(BgL_ucs2zd2string1zd2_34, BgL_ucs2zd2string2zd2_35);
		}
	}



/* _ucs2-string-ci<=? */
	obj_t BGl__ucs2zd2stringzd2cizc3zd3zf3ze3zz__unicodez00(obj_t BgL_envz00_3183,
		obj_t BgL_ucs2zd2string1zd2_3184, obj_t BgL_ucs2zd2string2zd2_3185)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 312 */
			{	/* Llib/unicode.scm 313 */
				bool_t BgL_auxz00_3923;

				{	/* Llib/unicode.scm 313 */
					obj_t BgL_ucs2zd2string1zd2_3434;

					obj_t BgL_ucs2zd2string2zd2_3435;

					if (UCS2_STRINGP(BgL_ucs2zd2string1zd2_3184))
						{	/* Llib/unicode.scm 313 */
							BgL_ucs2zd2string1zd2_3434 = BgL_ucs2zd2string1zd2_3184;
						}
					else
						{
							obj_t BgL_auxz00_3926;

							BgL_auxz00_3926 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 14304)), BGl_string2704z00zz__unicodez00,
								BGl_string2685z00zz__unicodez00, BgL_ucs2zd2string1zd2_3184);
							FAILURE(BgL_auxz00_3926, BFALSE, BFALSE);
						}
					if (UCS2_STRINGP(BgL_ucs2zd2string2zd2_3185))
						{	/* Llib/unicode.scm 313 */
							BgL_ucs2zd2string2zd2_3435 = BgL_ucs2zd2string2zd2_3185;
						}
					else
						{
							obj_t BgL_auxz00_3932;

							BgL_auxz00_3932 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 14304)), BGl_string2704z00zz__unicodez00,
								BGl_string2685z00zz__unicodez00, BgL_ucs2zd2string2zd2_3185);
							FAILURE(BgL_auxz00_3932, BFALSE, BFALSE);
						}
					BgL_auxz00_3923 =
						ucs2_string_cile(BgL_ucs2zd2string1zd2_3434,
						BgL_ucs2zd2string2zd2_3435);
				}
				return BBOOL(BgL_auxz00_3923);
			}
		}
	}



/* ucs2-string-ci>=? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzd2cize3zd3zf3zc3zz__unicodez00(obj_t
		BgL_ucs2zd2string1zd2_36, obj_t BgL_ucs2zd2string2zd2_37)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 318 */
			return
				ucs2_string_cige(BgL_ucs2zd2string1zd2_36, BgL_ucs2zd2string2zd2_37);
		}
	}



/* _ucs2-string-ci>=? */
	obj_t BGl__ucs2zd2stringzd2cize3zd3zf3zc3zz__unicodez00(obj_t BgL_envz00_3186,
		obj_t BgL_ucs2zd2string1zd2_3187, obj_t BgL_ucs2zd2string2zd2_3188)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 318 */
			{	/* Llib/unicode.scm 319 */
				bool_t BgL_auxz00_3939;

				{	/* Llib/unicode.scm 319 */
					obj_t BgL_ucs2zd2string1zd2_3436;

					obj_t BgL_ucs2zd2string2zd2_3437;

					if (UCS2_STRINGP(BgL_ucs2zd2string1zd2_3187))
						{	/* Llib/unicode.scm 319 */
							BgL_ucs2zd2string1zd2_3436 = BgL_ucs2zd2string1zd2_3187;
						}
					else
						{
							obj_t BgL_auxz00_3942;

							BgL_auxz00_3942 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 14637)), BGl_string2705z00zz__unicodez00,
								BGl_string2685z00zz__unicodez00, BgL_ucs2zd2string1zd2_3187);
							FAILURE(BgL_auxz00_3942, BFALSE, BFALSE);
						}
					if (UCS2_STRINGP(BgL_ucs2zd2string2zd2_3188))
						{	/* Llib/unicode.scm 319 */
							BgL_ucs2zd2string2zd2_3437 = BgL_ucs2zd2string2zd2_3188;
						}
					else
						{
							obj_t BgL_auxz00_3948;

							BgL_auxz00_3948 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 14637)), BGl_string2705z00zz__unicodez00,
								BGl_string2685z00zz__unicodez00, BgL_ucs2zd2string2zd2_3188);
							FAILURE(BgL_auxz00_3948, BFALSE, BFALSE);
						}
					BgL_auxz00_3939 =
						ucs2_string_cige(BgL_ucs2zd2string1zd2_3436,
						BgL_ucs2zd2string2zd2_3437);
				}
				return BBOOL(BgL_auxz00_3939);
			}
		}
	}



/* subucs2-string */
	BGL_EXPORTED_DEF obj_t BGl_subucs2zd2stringzd2zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_38, int BgL_startz00_39, int BgL_endz00_40)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 324 */
			{	/* Llib/unicode.scm 326 */
				bool_t BgL_testz00_3954;

				if (((long) (BgL_endz00_40) >= (long) (BgL_startz00_39)))
					{	/* Llib/unicode.scm 326 */
						bool_t BgL_testz00_3959;

						{	/* Llib/unicode.scm 326 */
							long BgL_auxz00_3962;

							long BgL_auxz00_3960;

							BgL_auxz00_3962 =
								(
								(long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_38)) +
								((long) 1));
							BgL_auxz00_3960 = (long) (BgL_startz00_39);
							BgL_testz00_3959 = BOUND_CHECK(BgL_auxz00_3960, BgL_auxz00_3962);
						}
						if (BgL_testz00_3959)
							{	/* Llib/unicode.scm 326 */
								long BgL_auxz00_3969;

								long BgL_auxz00_3967;

								BgL_auxz00_3969 =
									(
									(long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_38)) +
									((long) 1));
								BgL_auxz00_3967 = (long) (BgL_endz00_40);
								BgL_testz00_3954 =
									BOUND_CHECK(BgL_auxz00_3967, BgL_auxz00_3969);
							}
						else
							{	/* Llib/unicode.scm 326 */
								BgL_testz00_3954 = ((bool_t) 0);
							}
					}
				else
					{	/* Llib/unicode.scm 326 */
						BgL_testz00_3954 = ((bool_t) 0);
					}
				if (BgL_testz00_3954)
					{	/* Llib/unicode.scm 326 */
						return
							c_subucs2_string(BgL_ucs2zd2stringzd2_38, BgL_startz00_39,
							BgL_endz00_40);
					}
				else
					{	/* Llib/unicode.scm 326 */
						obj_t BgL_arg1920z00_3438;

						BgL_arg1920z00_3438 =
							MAKE_PAIR(BINT(BgL_startz00_39), BINT(BgL_endz00_40));
						return
							BGl_errorz00zz__errorz00(BGl_string2706z00zz__unicodez00,
							BGl_string2707z00zz__unicodez00, BgL_arg1920z00_3438);
					}
			}
		}
	}



/* _subucs2-string */
	obj_t BGl__subucs2zd2stringzd2zz__unicodez00(obj_t BgL_envz00_3189,
		obj_t BgL_ucs2zd2stringzd2_3190, obj_t BgL_startz00_3191,
		obj_t BgL_endz00_3192)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 324 */
			{	/* Llib/unicode.scm 326 */
				obj_t BgL_ucs2zd2stringzd2_3439;

				int BgL_startz00_3440;

				int BgL_endz00_3441;

				if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_3190))
					{	/* Llib/unicode.scm 326 */
						BgL_ucs2zd2stringzd2_3439 = BgL_ucs2zd2stringzd2_3190;
					}
				else
					{
						obj_t BgL_auxz00_3981;

						BgL_auxz00_3981 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 15014)), BGl_string2708z00zz__unicodez00,
							BGl_string2685z00zz__unicodez00, BgL_ucs2zd2stringzd2_3190);
						FAILURE(BgL_auxz00_3981, BFALSE, BFALSE);
					}
				{	/* Llib/unicode.scm 326 */
					obj_t BgL_auxz00_3985;

					if (INTEGERP(BgL_startz00_3191))
						{	/* Llib/unicode.scm 326 */
							BgL_auxz00_3985 = BgL_startz00_3191;
						}
					else
						{
							obj_t BgL_auxz00_3988;

							BgL_auxz00_3988 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 15014)), BGl_string2708z00zz__unicodez00,
								BGl_string2682z00zz__unicodez00, BgL_startz00_3191);
							FAILURE(BgL_auxz00_3988, BFALSE, BFALSE);
						}
					BgL_startz00_3440 = CINT(BgL_auxz00_3985);
				}
				{	/* Llib/unicode.scm 326 */
					obj_t BgL_auxz00_3993;

					if (INTEGERP(BgL_endz00_3192))
						{	/* Llib/unicode.scm 326 */
							BgL_auxz00_3993 = BgL_endz00_3192;
						}
					else
						{
							obj_t BgL_auxz00_3996;

							BgL_auxz00_3996 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 15014)), BGl_string2708z00zz__unicodez00,
								BGl_string2682z00zz__unicodez00, BgL_endz00_3192);
							FAILURE(BgL_auxz00_3996, BFALSE, BFALSE);
						}
					BgL_endz00_3441 = CINT(BgL_auxz00_3993);
				}
				{	/* Llib/unicode.scm 326 */
					bool_t BgL_testz00_4001;

					if (((long) (BgL_endz00_3441) >= (long) (BgL_startz00_3440)))
						{	/* Llib/unicode.scm 326 */
							bool_t BgL_testz00_4006;

							{	/* Llib/unicode.scm 326 */
								long BgL_auxz00_4009;

								long BgL_auxz00_4007;

								BgL_auxz00_4009 =
									(
									(long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_3439)) +
									((long) 1));
								BgL_auxz00_4007 = (long) (BgL_startz00_3440);
								BgL_testz00_4006 =
									BOUND_CHECK(BgL_auxz00_4007, BgL_auxz00_4009);
							}
							if (BgL_testz00_4006)
								{	/* Llib/unicode.scm 326 */
									long BgL_auxz00_4016;

									long BgL_auxz00_4014;

									BgL_auxz00_4016 =
										(
										(long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_3439)) +
										((long) 1));
									BgL_auxz00_4014 = (long) (BgL_endz00_3441);
									BgL_testz00_4001 =
										BOUND_CHECK(BgL_auxz00_4014, BgL_auxz00_4016);
								}
							else
								{	/* Llib/unicode.scm 326 */
									BgL_testz00_4001 = ((bool_t) 0);
								}
						}
					else
						{	/* Llib/unicode.scm 326 */
							BgL_testz00_4001 = ((bool_t) 0);
						}
					if (BgL_testz00_4001)
						{	/* Llib/unicode.scm 326 */
							return
								c_subucs2_string(BgL_ucs2zd2stringzd2_3439, BgL_startz00_3440,
								BgL_endz00_3441);
						}
					else
						{	/* Llib/unicode.scm 326 */
							obj_t BgL_arg1920z00_3442;

							BgL_arg1920z00_3442 =
								MAKE_PAIR(BINT(BgL_startz00_3440), BINT(BgL_endz00_3441));
							return
								BGl_errorz00zz__errorz00(BGl_string2706z00zz__unicodez00,
								BGl_string2707z00zz__unicodez00, BgL_arg1920z00_3442);
						}
				}
			}
		}
	}



/* subucs2-string-ur */
	BGL_EXPORTED_DEF obj_t BGl_subucs2zd2stringzd2urz00zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_41, int BgL_startz00_42, int BgL_endz00_43)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 339 */
			return
				c_subucs2_string(BgL_ucs2zd2stringzd2_41, BgL_startz00_42,
				BgL_endz00_43);
		}
	}



/* _subucs2-string-ur */
	obj_t BGl__subucs2zd2stringzd2urz00zz__unicodez00(obj_t BgL_envz00_3193,
		obj_t BgL_ucs2zd2stringzd2_3194, obj_t BgL_startz00_3195,
		obj_t BgL_endz00_3196)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 339 */
			{	/* Llib/unicode.scm 340 */
				obj_t BgL_ucs2zd2stringzd2_3443;

				int BgL_startz00_3444;

				int BgL_endz00_3445;

				if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_3194))
					{	/* Llib/unicode.scm 340 */
						BgL_ucs2zd2stringzd2_3443 = BgL_ucs2zd2stringzd2_3194;
					}
				else
					{
						obj_t BgL_auxz00_4029;

						BgL_auxz00_4029 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 15625)), BGl_string2709z00zz__unicodez00,
							BGl_string2685z00zz__unicodez00, BgL_ucs2zd2stringzd2_3194);
						FAILURE(BgL_auxz00_4029, BFALSE, BFALSE);
					}
				{	/* Llib/unicode.scm 340 */
					obj_t BgL_auxz00_4033;

					if (INTEGERP(BgL_startz00_3195))
						{	/* Llib/unicode.scm 340 */
							BgL_auxz00_4033 = BgL_startz00_3195;
						}
					else
						{
							obj_t BgL_auxz00_4036;

							BgL_auxz00_4036 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 15625)), BGl_string2709z00zz__unicodez00,
								BGl_string2682z00zz__unicodez00, BgL_startz00_3195);
							FAILURE(BgL_auxz00_4036, BFALSE, BFALSE);
						}
					BgL_startz00_3444 = CINT(BgL_auxz00_4033);
				}
				{	/* Llib/unicode.scm 340 */
					obj_t BgL_auxz00_4041;

					if (INTEGERP(BgL_endz00_3196))
						{	/* Llib/unicode.scm 340 */
							BgL_auxz00_4041 = BgL_endz00_3196;
						}
					else
						{
							obj_t BgL_auxz00_4044;

							BgL_auxz00_4044 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 15625)), BGl_string2709z00zz__unicodez00,
								BGl_string2682z00zz__unicodez00, BgL_endz00_3196);
							FAILURE(BgL_auxz00_4044, BFALSE, BFALSE);
						}
					BgL_endz00_3445 = CINT(BgL_auxz00_4041);
				}
				return
					c_subucs2_string(BgL_ucs2zd2stringzd2_3443, BgL_startz00_3444,
					BgL_endz00_3445);
			}
		}
	}



/* ucs2-string-append */
	BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2appendz00zz__unicodez00(obj_t
		BgL_listz00_44)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 345 */
			if (NULLP(BgL_listz00_44))
				{	/* Llib/unicode.scm 135 */
					ucs2_t BgL_fillerz00_926;

					{	/* Llib/unicode.scm 135 */
						int BgL_auxz00_4052;

						BgL_auxz00_4052 =
							(int) (((unsigned char) ((char) (((unsigned char) ' ')))));
						BgL_fillerz00_926 = INT_TO_UCS2(BgL_auxz00_4052);
					}
					{	/* Llib/unicode.scm 135 */

						return make_ucs2_string((int) (((long) 0)), BgL_fillerz00_926);
				}}
			else
				{	/* Llib/unicode.scm 346 */
					return BGl_loopz72z72z00zz__unicodez00(BgL_listz00_44);
				}
		}
	}



/* loop'' */
	obj_t BGl_loopz72z72z00zz__unicodez00(obj_t BgL_listz00_928)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 348 */
			if (NULLP(CDR(BgL_listz00_928)))
				{	/* Llib/unicode.scm 349 */
					return CAR(BgL_listz00_928);
				}
			else
				{	/* Llib/unicode.scm 349 */
					return
						ucs2_string_append(CAR(BgL_listz00_928),
						BGl_loopz72z72z00zz__unicodez00(CDR(BgL_listz00_928)));
				}
		}
	}



/* _ucs2-string-append */
	obj_t BGl__ucs2zd2stringzd2appendz00zz__unicodez00(obj_t BgL_envz00_3197,
		obj_t BgL_listz00_3198)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 345 */
			return BGl_ucs2zd2stringzd2appendz00zz__unicodez00(BgL_listz00_3198);
		}
	}



/* list->ucs2-string */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3ucs2zd2stringze3zz__unicodez00(obj_t
		BgL_listz00_45)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 356 */
			{	/* Llib/unicode.scm 357 */
				long BgL_lenz00_936;

				BgL_lenz00_936 = bgl_list_length(BgL_listz00_45);
				{	/* Llib/unicode.scm 357 */
					obj_t BgL_ucs2zd2stringzd2_937;

					{	/* Llib/unicode.scm 135 */
						ucs2_t BgL_fillerz00_948;

						{	/* Llib/unicode.scm 135 */
							int BgL_auxz00_4071;

							BgL_auxz00_4071 =
								(int) (((unsigned char) ((char) (((unsigned char) ' ')))));
							BgL_fillerz00_948 = INT_TO_UCS2(BgL_auxz00_4071);
						}
						{	/* Llib/unicode.scm 135 */

							BgL_ucs2zd2stringzd2_937 =
								make_ucs2_string((int) (BgL_lenz00_936), BgL_fillerz00_948);
					}}
					{	/* Llib/unicode.scm 358 */

						{
							long BgL_iz00_1860;

							obj_t BgL_lz00_1861;

							BgL_iz00_1860 = ((long) 0);
							BgL_lz00_1861 = BgL_listz00_45;
						BgL_loopz00_1859:
							if ((BgL_iz00_1860 == BgL_lenz00_936))
								{	/* Llib/unicode.scm 359 */
									return BgL_ucs2zd2stringzd2_937;
								}
							else
								{	/* Llib/unicode.scm 359 */
									{	/* Llib/unicode.scm 359 */
										obj_t BgL_arg1943z00_1867;

										BgL_arg1943z00_1867 = CAR(BgL_lz00_1861);
										{	/* Llib/unicode.scm 359 */
											int BgL_kz00_1874;

											ucs2_t BgL_ucs2z00_1875;

											BgL_kz00_1874 = (int) (BgL_iz00_1860);
											BgL_ucs2z00_1875 = CUCS2(BgL_arg1943z00_1867);
											{	/* Llib/unicode.scm 359 */
												bool_t BgL_testz00_4084;

												{	/* Llib/unicode.scm 359 */
													long BgL_auxz00_4087;

													long BgL_auxz00_4085;

													BgL_auxz00_4087 =
														(long) (UCS2_STRING_LENGTH
														(BgL_ucs2zd2stringzd2_937));
													BgL_auxz00_4085 = (long) (BgL_kz00_1874);
													BgL_testz00_4084 =
														BOUND_CHECK(BgL_auxz00_4085, BgL_auxz00_4087);
												}
												if (BgL_testz00_4084)
													{	/* Llib/unicode.scm 359 */
														UCS2_STRING_SET(BgL_ucs2zd2stringzd2_937,
															BgL_kz00_1874, BgL_ucs2z00_1875);
													}
												else
													{	/* Llib/unicode.scm 359 */
														obj_t BgL_arg1907z00_1878;

														obj_t BgL_arg1908z00_1879;

														BgL_arg1907z00_1878 =
															BGl_symbol2691z00zz__unicodez00;
														{	/* Llib/unicode.scm 359 */
															obj_t BgL_arg1910z00_1881;

															{	/* Llib/unicode.scm 359 */

																BgL_arg1910z00_1881 =
																	BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																	(((long) (UCS2_STRING_LENGTH
																			(BgL_ucs2zd2stringzd2_937)) - ((long) 1)),
																	((long) 10));
															}
															BgL_arg1908z00_1879 =
																string_append_3(BGl_string2688z00zz__unicodez00,
																BgL_arg1910z00_1881,
																BGl_string2689z00zz__unicodez00);
														}
														BGl_errorz00zz__errorz00(BgL_arg1907z00_1878,
															BgL_arg1908z00_1879, BINT(BgL_kz00_1874));
									}}}}
									{
										obj_t BgL_lz00_4101;

										long BgL_iz00_4099;

										BgL_iz00_4099 = (BgL_iz00_1860 + ((long) 1));
										BgL_lz00_4101 = CDR(BgL_lz00_1861);
										BgL_lz00_1861 = BgL_lz00_4101;
										BgL_iz00_1860 = BgL_iz00_4099;
										goto BgL_loopz00_1859;
									}
								}
						}
					}
				}
			}
		}
	}



/* _list->ucs2-string */
	obj_t BGl__listzd2ze3ucs2zd2stringze3zz__unicodez00(obj_t BgL_envz00_3199,
		obj_t BgL_listz00_3200)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 356 */
			return BGl_listzd2ze3ucs2zd2stringze3zz__unicodez00(BgL_listz00_3200);
		}
	}



/* ucs2-string->list */
	BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2ze3listze3zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_46)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 370 */
			{	/* Llib/unicode.scm 371 */
				int BgL_lenz00_949;

				BgL_lenz00_949 = UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_46);
				{
					long BgL_iz00_1957;

					obj_t BgL_accz00_1958;

					BgL_iz00_1957 = ((long) 0);
					BgL_accz00_1958 = BNIL;
				BgL_loopz00_1956:
					if ((BgL_iz00_1957 == (long) (BgL_lenz00_949)))
						{	/* Llib/unicode.scm 372 */
							return bgl_reverse_bang(BgL_accz00_1958);
						}
					else
						{	/* Llib/unicode.scm 372 */
							long BgL_arg1948z00_1964;

							obj_t BgL_arg1949z00_1965;

							BgL_arg1948z00_1964 = (BgL_iz00_1957 + ((long) 1));
							{	/* Llib/unicode.scm 372 */
								ucs2_t BgL_arg1950z00_1966;

								{	/* Llib/unicode.scm 372 */
									ucs2_t BgL_res2463z00_1989;

									{	/* Llib/unicode.scm 372 */
										int BgL_kz00_1972;

										BgL_kz00_1972 = (int) (BgL_iz00_1957);
										{	/* Llib/unicode.scm 372 */
											bool_t BgL_testz00_4111;

											{	/* Llib/unicode.scm 372 */
												long BgL_auxz00_4114;

												long BgL_auxz00_4112;

												BgL_auxz00_4114 =
													(long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_46));
												BgL_auxz00_4112 = (long) (BgL_kz00_1972);
												BgL_testz00_4111 =
													BOUND_CHECK(BgL_auxz00_4112, BgL_auxz00_4114);
											}
											if (BgL_testz00_4111)
												{	/* Llib/unicode.scm 372 */
													BgL_res2463z00_1989 =
														UCS2_STRING_REF(BgL_ucs2zd2stringzd2_46,
														BgL_kz00_1972);
												}
											else
												{	/* Llib/unicode.scm 372 */
													obj_t BgL_arg1895z00_1975;

													obj_t BgL_arg1896z00_1976;

													BgL_arg1895z00_1975 = BGl_symbol2686z00zz__unicodez00;
													{	/* Llib/unicode.scm 372 */
														obj_t BgL_arg1899z00_1978;

														{	/* Llib/unicode.scm 372 */

															BgL_arg1899z00_1978 =
																BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																(((long) (UCS2_STRING_LENGTH
																		(BgL_ucs2zd2stringzd2_46)) - ((long) 1)),
																((long) 10));
														}
														BgL_arg1896z00_1976 =
															string_append_3(BGl_string2688z00zz__unicodez00,
															BgL_arg1899z00_1978,
															BGl_string2689z00zz__unicodez00);
													}
													BgL_res2463z00_1989 =
														CUCS2(BGl_errorz00zz__errorz00(BgL_arg1895z00_1975,
															BgL_arg1896z00_1976, BINT(BgL_kz00_1972)));
									}}}
									BgL_arg1950z00_1966 = BgL_res2463z00_1989;
								}
								BgL_arg1949z00_1965 =
									MAKE_PAIR(BUCS2(BgL_arg1950z00_1966), BgL_accz00_1958);
							}
							{
								obj_t BgL_accz00_4130;

								long BgL_iz00_4129;

								BgL_iz00_4129 = BgL_arg1948z00_1964;
								BgL_accz00_4130 = BgL_arg1949z00_1965;
								BgL_accz00_1958 = BgL_accz00_4130;
								BgL_iz00_1957 = BgL_iz00_4129;
								goto BgL_loopz00_1956;
							}
						}
				}
			}
		}
	}



/* _ucs2-string->list */
	obj_t BGl__ucs2zd2stringzd2ze3listze3zz__unicodez00(obj_t BgL_envz00_3201,
		obj_t BgL_ucs2zd2stringzd2_3202)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 370 */
			{	/* Llib/unicode.scm 371 */
				obj_t BgL_auxz00_4131;

				if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_3202))
					{	/* Llib/unicode.scm 371 */
						BgL_auxz00_4131 = BgL_ucs2zd2stringzd2_3202;
					}
				else
					{
						obj_t BgL_auxz00_4134;

						BgL_auxz00_4134 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 16868)), BGl_string2710z00zz__unicodez00,
							BGl_string2685z00zz__unicodez00, BgL_ucs2zd2stringzd2_3202);
						FAILURE(BgL_auxz00_4134, BFALSE, BFALSE);
					}
				return BGl_ucs2zd2stringzd2ze3listze3zz__unicodez00(BgL_auxz00_4131);
			}
		}
	}



/* ucs2-string-copy */
	BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2copyz00zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_47)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 383 */
			return c_ucs2_string_copy(BgL_ucs2zd2stringzd2_47);
		}
	}



/* _ucs2-string-copy */
	obj_t BGl__ucs2zd2stringzd2copyz00zz__unicodez00(obj_t BgL_envz00_3203,
		obj_t BgL_ucs2zd2stringzd2_3204)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 383 */
			{	/* Llib/unicode.scm 384 */
				obj_t BgL_ucs2zd2stringzd2_3446;

				if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_3204))
					{	/* Llib/unicode.scm 384 */
						BgL_ucs2zd2stringzd2_3446 = BgL_ucs2zd2stringzd2_3204;
					}
				else
					{
						obj_t BgL_auxz00_4142;

						BgL_auxz00_4142 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 17343)), BGl_string2711z00zz__unicodez00,
							BGl_string2685z00zz__unicodez00, BgL_ucs2zd2stringzd2_3204);
						FAILURE(BgL_auxz00_4142, BFALSE, BFALSE);
					}
				return c_ucs2_string_copy(BgL_ucs2zd2stringzd2_3446);
			}
		}
	}



/* ucs2-string-fill! */
	BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2fillz12z12zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_48, ucs2_t BgL_ucs2z00_49)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 389 */
			{	/* Llib/unicode.scm 390 */
				int BgL_lenz00_2046;

				BgL_lenz00_2046 = UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_48);
				{
					long BgL_iz00_2053;

					BgL_iz00_2053 = ((long) 0);
				BgL_loopz00_2052:
					if ((BgL_iz00_2053 == (long) (BgL_lenz00_2046)))
						{	/* Llib/unicode.scm 390 */
							return BgL_ucs2zd2stringzd2_48;
						}
					else
						{	/* Llib/unicode.scm 390 */
							{	/* Llib/unicode.scm 390 */
								int BgL_kz00_2061;

								BgL_kz00_2061 = (int) (BgL_iz00_2053);
								{	/* Llib/unicode.scm 390 */
									bool_t BgL_testz00_4152;

									{	/* Llib/unicode.scm 390 */
										long BgL_auxz00_4155;

										long BgL_auxz00_4153;

										BgL_auxz00_4155 =
											(long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_48));
										BgL_auxz00_4153 = (long) (BgL_kz00_2061);
										BgL_testz00_4152 =
											BOUND_CHECK(BgL_auxz00_4153, BgL_auxz00_4155);
									}
									if (BgL_testz00_4152)
										{	/* Llib/unicode.scm 390 */
											UCS2_STRING_SET(BgL_ucs2zd2stringzd2_48, BgL_kz00_2061,
												BgL_ucs2z00_49);
										}
									else
										{	/* Llib/unicode.scm 390 */
											obj_t BgL_arg1907z00_2065;

											obj_t BgL_arg1908z00_2066;

											BgL_arg1907z00_2065 = BGl_symbol2691z00zz__unicodez00;
											{	/* Llib/unicode.scm 390 */
												obj_t BgL_arg1910z00_2068;

												{	/* Llib/unicode.scm 390 */

													BgL_arg1910z00_2068 =
														BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
														(((long) (UCS2_STRING_LENGTH
																(BgL_ucs2zd2stringzd2_48)) - ((long) 1)),
														((long) 10));
												}
												BgL_arg1908z00_2066 =
													string_append_3(BGl_string2688z00zz__unicodez00,
													BgL_arg1910z00_2068, BGl_string2689z00zz__unicodez00);
											}
											BGl_errorz00zz__errorz00(BgL_arg1907z00_2065,
												BgL_arg1908z00_2066, BINT(BgL_kz00_2061));
							}}}
							{
								long BgL_iz00_4167;

								BgL_iz00_4167 = (BgL_iz00_2053 + ((long) 1));
								BgL_iz00_2053 = BgL_iz00_4167;
								goto BgL_loopz00_2052;
							}
						}
				}
			}
		}
	}



/* _ucs2-string-fill! */
	obj_t BGl__ucs2zd2stringzd2fillz12z12zz__unicodez00(obj_t BgL_envz00_3205,
		obj_t BgL_ucs2zd2stringzd2_3206, obj_t BgL_ucs2z00_3207)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 389 */
			{	/* Llib/unicode.scm 390 */
				ucs2_t BgL_auxz00_4176;

				obj_t BgL_auxz00_4169;

				{	/* Llib/unicode.scm 390 */
					obj_t BgL_auxz00_4177;

					if (UCS2P(BgL_ucs2z00_3207))
						{	/* Llib/unicode.scm 390 */
							BgL_auxz00_4177 = BgL_ucs2z00_3207;
						}
					else
						{
							obj_t BgL_auxz00_4180;

							BgL_auxz00_4180 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 17648)), BGl_string2712z00zz__unicodez00,
								BGl_string2683z00zz__unicodez00, BgL_ucs2z00_3207);
							FAILURE(BgL_auxz00_4180, BFALSE, BFALSE);
						}
					BgL_auxz00_4176 = CUCS2(BgL_auxz00_4177);
				}
				if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_3206))
					{	/* Llib/unicode.scm 390 */
						BgL_auxz00_4169 = BgL_ucs2zd2stringzd2_3206;
					}
				else
					{
						obj_t BgL_auxz00_4172;

						BgL_auxz00_4172 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 17648)), BGl_string2712z00zz__unicodez00,
							BGl_string2685z00zz__unicodez00, BgL_ucs2zd2stringzd2_3206);
						FAILURE(BgL_auxz00_4172, BFALSE, BFALSE);
					}
				return
					BGl_ucs2zd2stringzd2fillz12z12zz__unicodez00(BgL_auxz00_4169,
					BgL_auxz00_4176);
			}
		}
	}



/* ucs2-string-upcase */
	BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2upcasez00zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_50)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 401 */
			{	/* Llib/unicode.scm 402 */
				int BgL_lenz00_967;

				BgL_lenz00_967 = UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_50);
				{	/* Llib/unicode.scm 402 */
					obj_t BgL_resz00_968;

					{	/* Llib/unicode.scm 135 */
						ucs2_t BgL_fillerz00_978;

						{	/* Llib/unicode.scm 135 */
							int BgL_auxz00_4187;

							BgL_auxz00_4187 =
								(int) (((unsigned char) ((char) (((unsigned char) ' ')))));
							BgL_fillerz00_978 = INT_TO_UCS2(BgL_auxz00_4187);
						}
						{	/* Llib/unicode.scm 135 */

							BgL_resz00_968 =
								make_ucs2_string(BgL_lenz00_967, BgL_fillerz00_978);
					}}
					{	/* Llib/unicode.scm 403 */

						{
							long BgL_iz00_970;

							BgL_iz00_970 = ((long) 0);
						BgL_zc3anonymousza31954ze3z83_971:
							if ((BgL_iz00_970 == (long) (BgL_lenz00_967)))
								{	/* Llib/unicode.scm 405 */
									return BgL_resz00_968;
								}
							else
								{	/* Llib/unicode.scm 405 */
									{	/* Llib/unicode.scm 410 */
										ucs2_t BgL_arg1956z00_973;

										{	/* Llib/unicode.scm 410 */
											ucs2_t BgL_arg1957z00_974;

											{	/* Llib/unicode.scm 410 */
												ucs2_t BgL_res2467z00_2160;

												{	/* Llib/unicode.scm 410 */
													int BgL_kz00_2143;

													BgL_kz00_2143 = (int) (BgL_iz00_970);
													{	/* Llib/unicode.scm 410 */
														bool_t BgL_testz00_4198;

														{	/* Llib/unicode.scm 410 */
															long BgL_auxz00_4201;

															long BgL_auxz00_4199;

															BgL_auxz00_4201 =
																(long) (UCS2_STRING_LENGTH
																(BgL_ucs2zd2stringzd2_50));
															BgL_auxz00_4199 = (long) (BgL_kz00_2143);
															BgL_testz00_4198 =
																BOUND_CHECK(BgL_auxz00_4199, BgL_auxz00_4201);
														}
														if (BgL_testz00_4198)
															{	/* Llib/unicode.scm 410 */
																BgL_res2467z00_2160 =
																	UCS2_STRING_REF(BgL_ucs2zd2stringzd2_50,
																	BgL_kz00_2143);
															}
														else
															{	/* Llib/unicode.scm 410 */
																obj_t BgL_arg1895z00_2146;

																obj_t BgL_arg1896z00_2147;

																BgL_arg1895z00_2146 =
																	BGl_symbol2686z00zz__unicodez00;
																{	/* Llib/unicode.scm 410 */
																	obj_t BgL_arg1899z00_2149;

																	{	/* Llib/unicode.scm 410 */

																		BgL_arg1899z00_2149 =
																			BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																			(((long) (UCS2_STRING_LENGTH
																					(BgL_ucs2zd2stringzd2_50)) -
																				((long) 1)), ((long) 10));
																	}
																	BgL_arg1896z00_2147 =
																		string_append_3
																		(BGl_string2688z00zz__unicodez00,
																		BgL_arg1899z00_2149,
																		BGl_string2689z00zz__unicodez00);
																}
																BgL_res2467z00_2160 =
																	CUCS2(BGl_errorz00zz__errorz00
																	(BgL_arg1895z00_2146, BgL_arg1896z00_2147,
																		BINT(BgL_kz00_2143)));
												}}}
												BgL_arg1957z00_974 = BgL_res2467z00_2160;
											}
											BgL_arg1956z00_973 = ucs2_toupper(BgL_arg1957z00_974);
										}
										{	/* Llib/unicode.scm 408 */
											int BgL_kz00_2163;

											BgL_kz00_2163 = (int) (BgL_iz00_970);
											{	/* Llib/unicode.scm 408 */
												bool_t BgL_testz00_4216;

												{	/* Llib/unicode.scm 408 */
													long BgL_auxz00_4219;

													long BgL_auxz00_4217;

													BgL_auxz00_4219 =
														(long) (UCS2_STRING_LENGTH(BgL_resz00_968));
													BgL_auxz00_4217 = (long) (BgL_kz00_2163);
													BgL_testz00_4216 =
														BOUND_CHECK(BgL_auxz00_4217, BgL_auxz00_4219);
												}
												if (BgL_testz00_4216)
													{	/* Llib/unicode.scm 408 */
														UCS2_STRING_SET(BgL_resz00_968, BgL_kz00_2163,
															BgL_arg1956z00_973);
													}
												else
													{	/* Llib/unicode.scm 408 */
														obj_t BgL_arg1907z00_2167;

														obj_t BgL_arg1908z00_2168;

														BgL_arg1907z00_2167 =
															BGl_symbol2691z00zz__unicodez00;
														{	/* Llib/unicode.scm 408 */
															obj_t BgL_arg1910z00_2170;

															{	/* Llib/unicode.scm 408 */

																BgL_arg1910z00_2170 =
																	BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																	(((long) (UCS2_STRING_LENGTH(BgL_resz00_968))
																		- ((long) 1)), ((long) 10));
															}
															BgL_arg1908z00_2168 =
																string_append_3(BGl_string2688z00zz__unicodez00,
																BgL_arg1910z00_2170,
																BGl_string2689z00zz__unicodez00);
														}
														BGl_errorz00zz__errorz00(BgL_arg1907z00_2167,
															BgL_arg1908z00_2168, BINT(BgL_kz00_2163));
									}}}}
									{
										long BgL_iz00_4231;

										BgL_iz00_4231 = (BgL_iz00_970 + ((long) 1));
										BgL_iz00_970 = BgL_iz00_4231;
										goto BgL_zc3anonymousza31954ze3z83_971;
									}
								}
						}
					}
				}
			}
		}
	}



/* _ucs2-string-upcase */
	obj_t BGl__ucs2zd2stringzd2upcasez00zz__unicodez00(obj_t BgL_envz00_3208,
		obj_t BgL_ucs2zd2stringzd2_3209)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 401 */
			{	/* Llib/unicode.scm 402 */
				obj_t BgL_auxz00_4233;

				if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_3209))
					{	/* Llib/unicode.scm 402 */
						BgL_auxz00_4233 = BgL_ucs2zd2stringzd2_3209;
					}
				else
					{
						obj_t BgL_auxz00_4236;

						BgL_auxz00_4236 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 18098)), BGl_string2713z00zz__unicodez00,
							BGl_string2685z00zz__unicodez00, BgL_ucs2zd2stringzd2_3209);
						FAILURE(BgL_auxz00_4236, BFALSE, BFALSE);
					}
				return BGl_ucs2zd2stringzd2upcasez00zz__unicodez00(BgL_auxz00_4233);
			}
		}
	}



/* ucs2-string-downcase */
	BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2downcasez00zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_51)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 417 */
			{	/* Llib/unicode.scm 418 */
				int BgL_lenz00_979;

				BgL_lenz00_979 = UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_51);
				{	/* Llib/unicode.scm 418 */
					obj_t BgL_resz00_980;

					{	/* Llib/unicode.scm 135 */
						ucs2_t BgL_fillerz00_990;

						{	/* Llib/unicode.scm 135 */
							int BgL_auxz00_4242;

							BgL_auxz00_4242 =
								(int) (((unsigned char) ((char) (((unsigned char) ' ')))));
							BgL_fillerz00_990 = INT_TO_UCS2(BgL_auxz00_4242);
						}
						{	/* Llib/unicode.scm 135 */

							BgL_resz00_980 =
								make_ucs2_string(BgL_lenz00_979, BgL_fillerz00_990);
					}}
					{	/* Llib/unicode.scm 419 */

						{
							long BgL_iz00_982;

							BgL_iz00_982 = ((long) 0);
						BgL_zc3anonymousza31959ze3z83_983:
							if ((BgL_iz00_982 == (long) (BgL_lenz00_979)))
								{	/* Llib/unicode.scm 421 */
									return BgL_resz00_980;
								}
							else
								{	/* Llib/unicode.scm 421 */
									{	/* Llib/unicode.scm 426 */
										ucs2_t BgL_arg1961z00_985;

										{	/* Llib/unicode.scm 426 */
											ucs2_t BgL_arg1962z00_986;

											{	/* Llib/unicode.scm 426 */
												ucs2_t BgL_res2469z00_2211;

												{	/* Llib/unicode.scm 426 */
													int BgL_kz00_2194;

													BgL_kz00_2194 = (int) (BgL_iz00_982);
													{	/* Llib/unicode.scm 426 */
														bool_t BgL_testz00_4253;

														{	/* Llib/unicode.scm 426 */
															long BgL_auxz00_4256;

															long BgL_auxz00_4254;

															BgL_auxz00_4256 =
																(long) (UCS2_STRING_LENGTH
																(BgL_ucs2zd2stringzd2_51));
															BgL_auxz00_4254 = (long) (BgL_kz00_2194);
															BgL_testz00_4253 =
																BOUND_CHECK(BgL_auxz00_4254, BgL_auxz00_4256);
														}
														if (BgL_testz00_4253)
															{	/* Llib/unicode.scm 426 */
																BgL_res2469z00_2211 =
																	UCS2_STRING_REF(BgL_ucs2zd2stringzd2_51,
																	BgL_kz00_2194);
															}
														else
															{	/* Llib/unicode.scm 426 */
																obj_t BgL_arg1895z00_2197;

																obj_t BgL_arg1896z00_2198;

																BgL_arg1895z00_2197 =
																	BGl_symbol2686z00zz__unicodez00;
																{	/* Llib/unicode.scm 426 */
																	obj_t BgL_arg1899z00_2200;

																	{	/* Llib/unicode.scm 426 */

																		BgL_arg1899z00_2200 =
																			BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																			(((long) (UCS2_STRING_LENGTH
																					(BgL_ucs2zd2stringzd2_51)) -
																				((long) 1)), ((long) 10));
																	}
																	BgL_arg1896z00_2198 =
																		string_append_3
																		(BGl_string2688z00zz__unicodez00,
																		BgL_arg1899z00_2200,
																		BGl_string2689z00zz__unicodez00);
																}
																BgL_res2469z00_2211 =
																	CUCS2(BGl_errorz00zz__errorz00
																	(BgL_arg1895z00_2197, BgL_arg1896z00_2198,
																		BINT(BgL_kz00_2194)));
												}}}
												BgL_arg1962z00_986 = BgL_res2469z00_2211;
											}
											BgL_arg1961z00_985 = ucs2_tolower(BgL_arg1962z00_986);
										}
										{	/* Llib/unicode.scm 424 */
											int BgL_kz00_2214;

											BgL_kz00_2214 = (int) (BgL_iz00_982);
											{	/* Llib/unicode.scm 424 */
												bool_t BgL_testz00_4271;

												{	/* Llib/unicode.scm 424 */
													long BgL_auxz00_4274;

													long BgL_auxz00_4272;

													BgL_auxz00_4274 =
														(long) (UCS2_STRING_LENGTH(BgL_resz00_980));
													BgL_auxz00_4272 = (long) (BgL_kz00_2214);
													BgL_testz00_4271 =
														BOUND_CHECK(BgL_auxz00_4272, BgL_auxz00_4274);
												}
												if (BgL_testz00_4271)
													{	/* Llib/unicode.scm 424 */
														UCS2_STRING_SET(BgL_resz00_980, BgL_kz00_2214,
															BgL_arg1961z00_985);
													}
												else
													{	/* Llib/unicode.scm 424 */
														obj_t BgL_arg1907z00_2218;

														obj_t BgL_arg1908z00_2219;

														BgL_arg1907z00_2218 =
															BGl_symbol2691z00zz__unicodez00;
														{	/* Llib/unicode.scm 424 */
															obj_t BgL_arg1910z00_2221;

															{	/* Llib/unicode.scm 424 */

																BgL_arg1910z00_2221 =
																	BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																	(((long) (UCS2_STRING_LENGTH(BgL_resz00_980))
																		- ((long) 1)), ((long) 10));
															}
															BgL_arg1908z00_2219 =
																string_append_3(BGl_string2688z00zz__unicodez00,
																BgL_arg1910z00_2221,
																BGl_string2689z00zz__unicodez00);
														}
														BGl_errorz00zz__errorz00(BgL_arg1907z00_2218,
															BgL_arg1908z00_2219, BINT(BgL_kz00_2214));
									}}}}
									{
										long BgL_iz00_4286;

										BgL_iz00_4286 = (BgL_iz00_982 + ((long) 1));
										BgL_iz00_982 = BgL_iz00_4286;
										goto BgL_zc3anonymousza31959ze3z83_983;
									}
								}
						}
					}
				}
			}
		}
	}



/* _ucs2-string-downcase */
	obj_t BGl__ucs2zd2stringzd2downcasez00zz__unicodez00(obj_t BgL_envz00_3210,
		obj_t BgL_ucs2zd2stringzd2_3211)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 417 */
			{	/* Llib/unicode.scm 418 */
				obj_t BgL_auxz00_4288;

				if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_3211))
					{	/* Llib/unicode.scm 418 */
						BgL_auxz00_4288 = BgL_ucs2zd2stringzd2_3211;
					}
				else
					{
						obj_t BgL_auxz00_4291;

						BgL_auxz00_4291 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 18628)), BGl_string2714z00zz__unicodez00,
							BGl_string2685z00zz__unicodez00, BgL_ucs2zd2stringzd2_3211);
						FAILURE(BgL_auxz00_4291, BFALSE, BFALSE);
					}
				return BGl_ucs2zd2stringzd2downcasez00zz__unicodez00(BgL_auxz00_4288);
			}
		}
	}



/* ucs2-string-upcase! */
	BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2upcasez12z12zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_52)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 433 */
			{	/* Llib/unicode.scm 434 */
				int BgL_lenz00_991;

				BgL_lenz00_991 = UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_52);
				{	/* Llib/unicode.scm 435 */

					{
						long BgL_iz00_994;

						BgL_iz00_994 = ((long) 0);
					BgL_zc3anonymousza31964ze3z83_995:
						if ((BgL_iz00_994 == (long) (BgL_lenz00_991)))
							{	/* Llib/unicode.scm 437 */
								return BgL_ucs2zd2stringzd2_52;
							}
						else
							{	/* Llib/unicode.scm 437 */
								{	/* Llib/unicode.scm 442 */
									ucs2_t BgL_arg1966z00_997;

									{	/* Llib/unicode.scm 442 */
										ucs2_t BgL_arg1967z00_998;

										{	/* Llib/unicode.scm 442 */
											ucs2_t BgL_res2470z00_2255;

											{	/* Llib/unicode.scm 442 */
												int BgL_kz00_2238;

												BgL_kz00_2238 = (int) (BgL_iz00_994);
												{	/* Llib/unicode.scm 442 */
													bool_t BgL_testz00_4301;

													{	/* Llib/unicode.scm 442 */
														long BgL_auxz00_4304;

														long BgL_auxz00_4302;

														BgL_auxz00_4304 =
															(long) (UCS2_STRING_LENGTH
															(BgL_ucs2zd2stringzd2_52));
														BgL_auxz00_4302 = (long) (BgL_kz00_2238);
														BgL_testz00_4301 =
															BOUND_CHECK(BgL_auxz00_4302, BgL_auxz00_4304);
													}
													if (BgL_testz00_4301)
														{	/* Llib/unicode.scm 442 */
															BgL_res2470z00_2255 =
																UCS2_STRING_REF(BgL_ucs2zd2stringzd2_52,
																BgL_kz00_2238);
														}
													else
														{	/* Llib/unicode.scm 442 */
															obj_t BgL_arg1895z00_2241;

															obj_t BgL_arg1896z00_2242;

															BgL_arg1895z00_2241 =
																BGl_symbol2686z00zz__unicodez00;
															{	/* Llib/unicode.scm 442 */
																obj_t BgL_arg1899z00_2244;

																{	/* Llib/unicode.scm 442 */

																	BgL_arg1899z00_2244 =
																		BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																		(((long) (UCS2_STRING_LENGTH
																				(BgL_ucs2zd2stringzd2_52)) -
																			((long) 1)), ((long) 10));
																}
																BgL_arg1896z00_2242 =
																	string_append_3
																	(BGl_string2688z00zz__unicodez00,
																	BgL_arg1899z00_2244,
																	BGl_string2689z00zz__unicodez00);
															}
															BgL_res2470z00_2255 =
																CUCS2(BGl_errorz00zz__errorz00
																(BgL_arg1895z00_2241, BgL_arg1896z00_2242,
																	BINT(BgL_kz00_2238)));
											}}}
											BgL_arg1967z00_998 = BgL_res2470z00_2255;
										}
										BgL_arg1966z00_997 = ucs2_toupper(BgL_arg1967z00_998);
									}
									{	/* Llib/unicode.scm 440 */
										int BgL_kz00_2258;

										BgL_kz00_2258 = (int) (BgL_iz00_994);
										{	/* Llib/unicode.scm 440 */
											bool_t BgL_testz00_4319;

											{	/* Llib/unicode.scm 440 */
												long BgL_auxz00_4322;

												long BgL_auxz00_4320;

												BgL_auxz00_4322 =
													(long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_52));
												BgL_auxz00_4320 = (long) (BgL_kz00_2258);
												BgL_testz00_4319 =
													BOUND_CHECK(BgL_auxz00_4320, BgL_auxz00_4322);
											}
											if (BgL_testz00_4319)
												{	/* Llib/unicode.scm 440 */
													UCS2_STRING_SET(BgL_ucs2zd2stringzd2_52,
														BgL_kz00_2258, BgL_arg1966z00_997);
												}
											else
												{	/* Llib/unicode.scm 440 */
													obj_t BgL_arg1907z00_2262;

													obj_t BgL_arg1908z00_2263;

													BgL_arg1907z00_2262 = BGl_symbol2691z00zz__unicodez00;
													{	/* Llib/unicode.scm 440 */
														obj_t BgL_arg1910z00_2265;

														{	/* Llib/unicode.scm 440 */

															BgL_arg1910z00_2265 =
																BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																(((long) (UCS2_STRING_LENGTH
																		(BgL_ucs2zd2stringzd2_52)) - ((long) 1)),
																((long) 10));
														}
														BgL_arg1908z00_2263 =
															string_append_3(BGl_string2688z00zz__unicodez00,
															BgL_arg1910z00_2265,
															BGl_string2689z00zz__unicodez00);
													}
													BGl_errorz00zz__errorz00(BgL_arg1907z00_2262,
														BgL_arg1908z00_2263, BINT(BgL_kz00_2258));
								}}}}
								{
									long BgL_iz00_4334;

									BgL_iz00_4334 = (BgL_iz00_994 + ((long) 1));
									BgL_iz00_994 = BgL_iz00_4334;
									goto BgL_zc3anonymousza31964ze3z83_995;
								}
							}
					}
				}
			}
		}
	}



/* _ucs2-string-upcase! */
	obj_t BGl__ucs2zd2stringzd2upcasez12z12zz__unicodez00(obj_t BgL_envz00_3212,
		obj_t BgL_ucs2zd2stringzd2_3213)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 433 */
			{	/* Llib/unicode.scm 434 */
				obj_t BgL_auxz00_4336;

				if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_3213))
					{	/* Llib/unicode.scm 434 */
						BgL_auxz00_4336 = BgL_ucs2zd2stringzd2_3213;
					}
				else
					{
						obj_t BgL_auxz00_4339;

						BgL_auxz00_4339 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 19161)), BGl_string2715z00zz__unicodez00,
							BGl_string2685z00zz__unicodez00, BgL_ucs2zd2stringzd2_3213);
						FAILURE(BgL_auxz00_4339, BFALSE, BFALSE);
					}
				return BGl_ucs2zd2stringzd2upcasez12z12zz__unicodez00(BgL_auxz00_4336);
			}
		}
	}



/* ucs2-string-downcase! */
	BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2downcasez12z12zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_53)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 449 */
			{	/* Llib/unicode.scm 450 */
				int BgL_lenz00_1001;

				BgL_lenz00_1001 = UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_53);
				{	/* Llib/unicode.scm 451 */

					{
						long BgL_iz00_1004;

						BgL_iz00_1004 = ((long) 0);
					BgL_zc3anonymousza31969ze3z83_1005:
						if ((BgL_iz00_1004 == (long) (BgL_lenz00_1001)))
							{	/* Llib/unicode.scm 453 */
								return BgL_ucs2zd2stringzd2_53;
							}
						else
							{	/* Llib/unicode.scm 453 */
								{	/* Llib/unicode.scm 458 */
									ucs2_t BgL_arg1971z00_1007;

									{	/* Llib/unicode.scm 458 */
										ucs2_t BgL_arg1972z00_1008;

										{	/* Llib/unicode.scm 458 */
											ucs2_t BgL_res2471z00_2299;

											{	/* Llib/unicode.scm 458 */
												int BgL_kz00_2282;

												BgL_kz00_2282 = (int) (BgL_iz00_1004);
												{	/* Llib/unicode.scm 458 */
													bool_t BgL_testz00_4349;

													{	/* Llib/unicode.scm 458 */
														long BgL_auxz00_4352;

														long BgL_auxz00_4350;

														BgL_auxz00_4352 =
															(long) (UCS2_STRING_LENGTH
															(BgL_ucs2zd2stringzd2_53));
														BgL_auxz00_4350 = (long) (BgL_kz00_2282);
														BgL_testz00_4349 =
															BOUND_CHECK(BgL_auxz00_4350, BgL_auxz00_4352);
													}
													if (BgL_testz00_4349)
														{	/* Llib/unicode.scm 458 */
															BgL_res2471z00_2299 =
																UCS2_STRING_REF(BgL_ucs2zd2stringzd2_53,
																BgL_kz00_2282);
														}
													else
														{	/* Llib/unicode.scm 458 */
															obj_t BgL_arg1895z00_2285;

															obj_t BgL_arg1896z00_2286;

															BgL_arg1895z00_2285 =
																BGl_symbol2686z00zz__unicodez00;
															{	/* Llib/unicode.scm 458 */
																obj_t BgL_arg1899z00_2288;

																{	/* Llib/unicode.scm 458 */

																	BgL_arg1899z00_2288 =
																		BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																		(((long) (UCS2_STRING_LENGTH
																				(BgL_ucs2zd2stringzd2_53)) -
																			((long) 1)), ((long) 10));
																}
																BgL_arg1896z00_2286 =
																	string_append_3
																	(BGl_string2688z00zz__unicodez00,
																	BgL_arg1899z00_2288,
																	BGl_string2689z00zz__unicodez00);
															}
															BgL_res2471z00_2299 =
																CUCS2(BGl_errorz00zz__errorz00
																(BgL_arg1895z00_2285, BgL_arg1896z00_2286,
																	BINT(BgL_kz00_2282)));
											}}}
											BgL_arg1972z00_1008 = BgL_res2471z00_2299;
										}
										BgL_arg1971z00_1007 = ucs2_tolower(BgL_arg1972z00_1008);
									}
									{	/* Llib/unicode.scm 456 */
										int BgL_kz00_2302;

										BgL_kz00_2302 = (int) (BgL_iz00_1004);
										{	/* Llib/unicode.scm 456 */
											bool_t BgL_testz00_4367;

											{	/* Llib/unicode.scm 456 */
												long BgL_auxz00_4370;

												long BgL_auxz00_4368;

												BgL_auxz00_4370 =
													(long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_53));
												BgL_auxz00_4368 = (long) (BgL_kz00_2302);
												BgL_testz00_4367 =
													BOUND_CHECK(BgL_auxz00_4368, BgL_auxz00_4370);
											}
											if (BgL_testz00_4367)
												{	/* Llib/unicode.scm 456 */
													UCS2_STRING_SET(BgL_ucs2zd2stringzd2_53,
														BgL_kz00_2302, BgL_arg1971z00_1007);
												}
											else
												{	/* Llib/unicode.scm 456 */
													obj_t BgL_arg1907z00_2306;

													obj_t BgL_arg1908z00_2307;

													BgL_arg1907z00_2306 = BGl_symbol2691z00zz__unicodez00;
													{	/* Llib/unicode.scm 456 */
														obj_t BgL_arg1910z00_2309;

														{	/* Llib/unicode.scm 456 */

															BgL_arg1910z00_2309 =
																BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																(((long) (UCS2_STRING_LENGTH
																		(BgL_ucs2zd2stringzd2_53)) - ((long) 1)),
																((long) 10));
														}
														BgL_arg1908z00_2307 =
															string_append_3(BGl_string2688z00zz__unicodez00,
															BgL_arg1910z00_2309,
															BGl_string2689z00zz__unicodez00);
													}
													BGl_errorz00zz__errorz00(BgL_arg1907z00_2306,
														BgL_arg1908z00_2307, BINT(BgL_kz00_2302));
								}}}}
								{
									long BgL_iz00_4382;

									BgL_iz00_4382 = (BgL_iz00_1004 + ((long) 1));
									BgL_iz00_1004 = BgL_iz00_4382;
									goto BgL_zc3anonymousza31969ze3z83_1005;
								}
							}
					}
				}
			}
		}
	}



/* _ucs2-string-downcase! */
	obj_t BGl__ucs2zd2stringzd2downcasez12z12zz__unicodez00(obj_t BgL_envz00_3214,
		obj_t BgL_ucs2zd2stringzd2_3215)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 449 */
			{	/* Llib/unicode.scm 450 */
				obj_t BgL_auxz00_4384;

				if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_3215))
					{	/* Llib/unicode.scm 450 */
						BgL_auxz00_4384 = BgL_ucs2zd2stringzd2_3215;
					}
				else
					{
						obj_t BgL_auxz00_4387;

						BgL_auxz00_4387 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 19681)), BGl_string2716z00zz__unicodez00,
							BGl_string2685z00zz__unicodez00, BgL_ucs2zd2stringzd2_3215);
						FAILURE(BgL_auxz00_4387, BFALSE, BFALSE);
					}
				return
					BGl_ucs2zd2stringzd2downcasez12z12zz__unicodez00(BgL_auxz00_4384);
			}
		}
	}



/* ucs2-string->utf8-string */
	BGL_EXPORTED_DEF obj_t
		BGl_ucs2zd2stringzd2ze3utf8zd2stringz31zz__unicodez00(obj_t BgL_ucs2z00_54)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 465 */
			return ucs2_string_to_utf8_string(BgL_ucs2z00_54);
		}
	}



/* _ucs2-string->utf8-string */
	obj_t BGl__ucs2zd2stringzd2ze3utf8zd2stringz31zz__unicodez00(obj_t
		BgL_envz00_3216, obj_t BgL_ucs2z00_3217)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 465 */
			{	/* Llib/unicode.scm 466 */
				obj_t BgL_ucs2z00_3447;

				if (UCS2_STRINGP(BgL_ucs2z00_3217))
					{	/* Llib/unicode.scm 466 */
						BgL_ucs2z00_3447 = BgL_ucs2z00_3217;
					}
				else
					{
						obj_t BgL_auxz00_4395;

						BgL_auxz00_4395 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 20214)), BGl_string2717z00zz__unicodez00,
							BGl_string2685z00zz__unicodez00, BgL_ucs2z00_3217);
						FAILURE(BgL_auxz00_4395, BFALSE, BFALSE);
					}
				return ucs2_string_to_utf8_string(BgL_ucs2z00_3447);
			}
		}
	}



/* inverse-utf8-table */
	BGL_EXPORTED_DEF obj_t BGl_inversezd2utf8zd2tablez00zz__unicodez00(obj_t
		BgL_tablez00_55)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 538 */
			{	/* Llib/unicode.scm 560 */
				int BgL_lenz00_1013;

				BgL_lenz00_1013 = VECTOR_LENGTH(BgL_tablez00_55);
				{
					long BgL_iz00_1016;

					obj_t BgL_resz00_1017;

					BgL_iz00_1016 = ((long) 0);
					BgL_resz00_1017 = BNIL;
				BgL_zc3anonymousza31974ze3z83_1018:
					if ((BgL_iz00_1016 == (long) (BgL_lenz00_1013)))
						{	/* Llib/unicode.scm 563 */
							return BgL_resz00_1017;
						}
					else
						{	/* Llib/unicode.scm 565 */
							obj_t BgL_sz00_1020;

							BgL_sz00_1020 =
								VECTOR_REF(BgL_tablez00_55, (int) (BgL_iz00_1016));
							if ((STRING_LENGTH(BgL_sz00_1020) > ((long) 0)))
								{
									obj_t BgL_resz00_4411;

									long BgL_iz00_4409;

									BgL_iz00_4409 = (BgL_iz00_1016 + ((long) 1));
									BgL_resz00_4411 =
										BGl_addzd2tablezd2entryz00zz__unicodez00(BgL_resz00_1017,
										BgL_sz00_1020, (((long) 128) + BgL_iz00_1016));
									BgL_resz00_1017 = BgL_resz00_4411;
									BgL_iz00_1016 = BgL_iz00_4409;
									goto BgL_zc3anonymousza31974ze3z83_1018;
								}
							else
								{
									long BgL_iz00_4414;

									BgL_iz00_4414 = (BgL_iz00_1016 + ((long) 1));
									BgL_iz00_1016 = BgL_iz00_4414;
									goto BgL_zc3anonymousza31974ze3z83_1018;
								}
						}
				}
			}
		}
	}



/* loop */
	obj_t BGl_loopz00zz__unicodez00(long BgL_lenz00_3254, long BgL_charz00_3253,
		obj_t BgL_sz00_3252, long BgL_iz00_1034)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 542 */
			if ((BgL_lenz00_3254 == BgL_iz00_1034))
				{	/* Llib/unicode.scm 543 */
					return BCHAR((BgL_charz00_3253));
				}
			else
				{	/* Llib/unicode.scm 545 */
					obj_t BgL_arg1987z00_1037;

					{	/* Llib/unicode.scm 545 */
						long BgL_arg1989z00_1039;

						obj_t BgL_arg1990z00_1040;

						BgL_arg1989z00_1039 = (STRING_REF(BgL_sz00_3252, BgL_iz00_1034));
						BgL_arg1990z00_1040 =
							BGl_loopz00zz__unicodez00(BgL_lenz00_3254, BgL_charz00_3253,
							BgL_sz00_3252, (BgL_iz00_1034 + ((long) 1)));
						BgL_arg1987z00_1037 =
							MAKE_PAIR(BINT(BgL_arg1989z00_1039), BgL_arg1990z00_1040);
					}
					{	/* Llib/unicode.scm 545 */
						obj_t BgL_list1988z00_1038;

						BgL_list1988z00_1038 = MAKE_PAIR(BgL_arg1987z00_1037, BNIL);
						return BgL_list1988z00_1038;
					}
				}
		}
	}



/* make-table-entry */
	obj_t BGl_makezd2tablezd2entryz00zz__unicodez00(obj_t BgL_sz00_1029,
		long BgL_charz00_1030)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 545 */
			return
				BGl_loopz00zz__unicodez00(STRING_LENGTH(BgL_sz00_1029),
				BgL_charz00_1030, BgL_sz00_1029, ((long) 0));
		}
	}



/* loop' */
	obj_t BGl_loopz72z72zz__unicodez00(obj_t BgL_ez00_1050,
		obj_t BgL_tablez00_1051)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 548 */
			if (NULLP(BgL_ez00_1050))
				{	/* Llib/unicode.scm 550 */
					return BgL_tablez00_1051;
				}
			else
				{	/* Llib/unicode.scm 552 */
					obj_t BgL_nz00_1054;

					BgL_nz00_1054 = CAR(BgL_ez00_1050);
					{	/* Llib/unicode.scm 552 */
						obj_t BgL_oz00_1055;

						BgL_oz00_1055 =
							BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_nz00_1054,
							BgL_tablez00_1051);
						{	/* Llib/unicode.scm 553 */

							if (CBOOL(BgL_oz00_1055))
								{	/* Llib/unicode.scm 555 */
									obj_t BgL_stz00_1056;

									BgL_stz00_1056 = CDR(BgL_oz00_1055);
									{	/* Llib/unicode.scm 556 */
										obj_t BgL_arg1996z00_1057;

										{	/* Llib/unicode.scm 556 */
											obj_t BgL_arg1998z00_1058;

											{	/* Llib/unicode.scm 556 */
												obj_t BgL_pairz00_2351;

												BgL_pairz00_2351 = BgL_ez00_1050;
												BgL_arg1998z00_1058 = CAR(CDR(BgL_pairz00_2351));
											}
											BgL_arg1996z00_1057 =
												BGl_loopz72z72zz__unicodez00(BgL_arg1998z00_1058,
												BgL_stz00_1056);
										}
										SET_CDR(BgL_oz00_1055, BgL_arg1996z00_1057);
									}
									return BgL_tablez00_1051;
								}
							else
								{	/* Llib/unicode.scm 554 */
									return MAKE_PAIR(BgL_ez00_1050, BgL_tablez00_1051);
								}
						}
					}
				}
		}
	}



/* add-table-entry */
	obj_t BGl_addzd2tablezd2entryz00zz__unicodez00(obj_t BgL_tablez00_1044,
		obj_t BgL_sz00_1045, long BgL_charz00_1046)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 558 */
			return
				BGl_loopz72z72zz__unicodez00(CAR
				(BGl_makezd2tablezd2entryz00zz__unicodez00(BgL_sz00_1045,
						BgL_charz00_1046)), BgL_tablez00_1044);
		}
	}



/* _inverse-utf8-table */
	obj_t BGl__inversezd2utf8zd2tablez00zz__unicodez00(obj_t BgL_envz00_3218,
		obj_t BgL_tablez00_3219)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 538 */
			{	/* Llib/unicode.scm 541 */
				obj_t BgL_auxz00_4444;

				if (VECTORP(BgL_tablez00_3219))
					{	/* Llib/unicode.scm 541 */
						BgL_auxz00_4444 = BgL_tablez00_3219;
					}
				else
					{
						obj_t BgL_auxz00_4447;

						BgL_auxz00_4447 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 22420)), BGl_string2718z00zz__unicodez00,
							BGl_string2719z00zz__unicodez00, BgL_tablez00_3219);
						FAILURE(BgL_auxz00_4447, BFALSE, BFALSE);
					}
				return BGl_inversezd2utf8zd2tablez00zz__unicodez00(BgL_auxz00_4444);
			}
		}
	}



/* utf8-string->ucs2-string */
	BGL_EXPORTED_DEF obj_t
		BGl_utf8zd2stringzd2ze3ucs2zd2stringz31zz__unicodez00(obj_t BgL_utf8z00_56)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 573 */
			return utf8_string_to_ucs2_string(BgL_utf8z00_56);
		}
	}



/* _utf8-string->ucs2-string */
	obj_t BGl__utf8zd2stringzd2ze3ucs2zd2stringz31zz__unicodez00(obj_t
		BgL_envz00_3220, obj_t BgL_utf8z00_3221)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 573 */
			{	/* Llib/unicode.scm 574 */
				obj_t BgL_utf8z00_3448;

				if (STRINGP(BgL_utf8z00_3221))
					{	/* Llib/unicode.scm 574 */
						BgL_utf8z00_3448 = BgL_utf8z00_3221;
					}
				else
					{
						obj_t BgL_auxz00_4455;

						BgL_auxz00_4455 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 23441)), BGl_string2720z00zz__unicodez00,
							BGl_string2721z00zz__unicodez00, BgL_utf8z00_3221);
						FAILURE(BgL_auxz00_4455, BFALSE, BFALSE);
					}
				return utf8_string_to_ucs2_string(BgL_utf8z00_3448);
			}
		}
	}



/* utf8->8bits-length */
	long BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(obj_t BgL_strz00_57,
		long BgL_lenz00_58)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 579 */
			{
				long BgL_siza7eza7_1064;

				long BgL_iz00_1065;

				BgL_siza7eza7_1064 = ((long) 0);
				BgL_iz00_1065 = ((long) 0);
			BgL_zc3anonymousza32000ze3z83_1066:
				if ((BgL_iz00_1065 >= BgL_lenz00_58))
					{	/* Llib/unicode.scm 582 */
						return BgL_siza7eza7_1064;
					}
				else
					{	/* Llib/unicode.scm 584 */
						long BgL_cz00_1068;

						BgL_cz00_1068 = (STRING_REF(BgL_strz00_57, BgL_iz00_1065));
						if ((BgL_cz00_1068 < ((long) 194)))
							{
								long BgL_iz00_4468;

								long BgL_siza7eza7_4466;

								BgL_siza7eza7_4466 = (BgL_siza7eza7_1064 + ((long) 1));
								BgL_iz00_4468 = (BgL_iz00_1065 + ((long) 1));
								BgL_iz00_1065 = BgL_iz00_4468;
								BgL_siza7eza7_1064 = BgL_siza7eza7_4466;
								goto BgL_zc3anonymousza32000ze3z83_1066;
							}
						else
							{	/* Llib/unicode.scm 586 */
								if ((BgL_cz00_1068 <= ((long) 223)))
									{
										long BgL_iz00_4474;

										long BgL_siza7eza7_4472;

										BgL_siza7eza7_4472 = (BgL_siza7eza7_1064 + ((long) 1));
										BgL_iz00_4474 = (BgL_iz00_1065 + ((long) 2));
										BgL_iz00_1065 = BgL_iz00_4474;
										BgL_siza7eza7_1064 = BgL_siza7eza7_4472;
										goto BgL_zc3anonymousza32000ze3z83_1066;
									}
								else
									{	/* Llib/unicode.scm 588 */
										if ((BgL_cz00_1068 <= ((long) 239)))
											{
												long BgL_iz00_4480;

												long BgL_siza7eza7_4478;

												BgL_siza7eza7_4478 = (BgL_siza7eza7_1064 + ((long) 1));
												BgL_iz00_4480 = (BgL_iz00_1065 + ((long) 3));
												BgL_iz00_1065 = BgL_iz00_4480;
												BgL_siza7eza7_1064 = BgL_siza7eza7_4478;
												goto BgL_zc3anonymousza32000ze3z83_1066;
											}
										else
											{	/* Llib/unicode.scm 590 */
												if ((BgL_cz00_1068 <= ((long) 247)))
													{
														long BgL_iz00_4486;

														long BgL_siza7eza7_4484;

														BgL_siza7eza7_4484 =
															(BgL_siza7eza7_1064 + ((long) 1));
														BgL_iz00_4486 = (BgL_iz00_1065 + ((long) 4));
														BgL_iz00_1065 = BgL_iz00_4486;
														BgL_siza7eza7_1064 = BgL_siza7eza7_4484;
														goto BgL_zc3anonymousza32000ze3z83_1066;
													}
												else
													{	/* Llib/unicode.scm 592 */
														if ((BgL_cz00_1068 <= ((long) 251)))
															{
																long BgL_iz00_4492;

																long BgL_siza7eza7_4490;

																BgL_siza7eza7_4490 =
																	(BgL_siza7eza7_1064 + ((long) 1));
																BgL_iz00_4492 = (BgL_iz00_1065 + ((long) 5));
																BgL_iz00_1065 = BgL_iz00_4492;
																BgL_siza7eza7_1064 = BgL_siza7eza7_4490;
																goto BgL_zc3anonymousza32000ze3z83_1066;
															}
														else
															{
																long BgL_iz00_4496;

																long BgL_siza7eza7_4494;

																BgL_siza7eza7_4494 =
																	(BgL_siza7eza7_1064 + ((long) 1));
																BgL_iz00_4496 = (BgL_iz00_1065 + ((long) 6));
																BgL_iz00_1065 = BgL_iz00_4496;
																BgL_siza7eza7_1064 = BgL_siza7eza7_4494;
																goto BgL_zc3anonymousza32000ze3z83_1066;
															}
													}
											}
									}
							}
					}
			}
		}
	}



/* utf8-string? */
	BGL_EXPORTED_DEF bool_t BGl_utf8zd2stringzf3z21zz__unicodez00(obj_t
		BgL_strz00_59)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 602 */
			{	/* Llib/unicode.scm 608 */
				long BgL_lenz00_1089;

				BgL_lenz00_1089 = STRING_LENGTH(BgL_strz00_59);
				{
					long BgL_rz00_1091;

					BgL_rz00_1091 = ((long) 0);
				BgL_zc3anonymousza32020ze3z83_1092:
					if ((BgL_rz00_1091 == BgL_lenz00_1089))
						{	/* Llib/unicode.scm 610 */
							return ((bool_t) 1);
						}
					else
						{	/* Llib/unicode.scm 612 */
							long BgL_nz00_1095;

							BgL_nz00_1095 = (STRING_REF(BgL_strz00_59, BgL_rz00_1091));
							{	/* Llib/unicode.scm 613 */

								if ((BgL_nz00_1095 <= ((long) 127)))
									{
										long BgL_rz00_4505;

										BgL_rz00_4505 = (BgL_rz00_1091 + ((long) 1));
										BgL_rz00_1091 = BgL_rz00_4505;
										goto BgL_zc3anonymousza32020ze3z83_1092;
									}
								else
									{	/* Llib/unicode.scm 615 */
										if ((BgL_nz00_1095 < ((long) 194)))
											{	/* Llib/unicode.scm 618 */
												return ((bool_t) 0);
											}
										else
											{	/* Llib/unicode.scm 618 */
												if ((BgL_nz00_1095 <= ((long) 223)))
													{	/* Llib/unicode.scm 623 */
														bool_t BgL_testz00_4511;

														if (
															(BgL_rz00_1091 < (BgL_lenz00_1089 - ((long) 1))))
															{	/* Llib/unicode.scm 624 */
																long BgL_nz00_2421;

																BgL_nz00_2421 =
																	(STRING_REF(BgL_strz00_59,
																		(BgL_rz00_1091 + ((long) 1))));
																if ((BgL_nz00_2421 >= ((long) 128)))
																	{	/* Llib/unicode.scm 624 */
																		BgL_testz00_4511 =
																			(BgL_nz00_2421 <= ((long) 191));
																	}
																else
																	{	/* Llib/unicode.scm 624 */
																		BgL_testz00_4511 = ((bool_t) 0);
																	}
															}
														else
															{	/* Llib/unicode.scm 623 */
																BgL_testz00_4511 = ((bool_t) 0);
															}
														if (BgL_testz00_4511)
															{
																long BgL_rz00_4521;

																BgL_rz00_4521 = (BgL_rz00_1091 + ((long) 2));
																BgL_rz00_1091 = BgL_rz00_4521;
																goto BgL_zc3anonymousza32020ze3z83_1092;
															}
														else
															{	/* Llib/unicode.scm 623 */
																return ((bool_t) 0);
															}
													}
												else
													{	/* Llib/unicode.scm 621 */
														if ((BgL_nz00_1095 <= ((long) 239)))
															{	/* Llib/unicode.scm 628 */
																bool_t BgL_testz00_4525;

																if (
																	(BgL_rz00_1091 <
																		(BgL_lenz00_1089 - ((long) 2))))
																	{	/* Llib/unicode.scm 629 */
																		bool_t BgL_testz00_4529;

																		{	/* Llib/unicode.scm 629 */
																			long BgL_nz00_2443;

																			BgL_nz00_2443 =
																				(STRING_REF(BgL_strz00_59,
																					(BgL_rz00_1091 + ((long) 1))));
																			if ((BgL_nz00_2443 >= ((long) 128)))
																				{	/* Llib/unicode.scm 629 */
																					BgL_testz00_4529 =
																						(BgL_nz00_2443 <= ((long) 191));
																				}
																			else
																				{	/* Llib/unicode.scm 629 */
																					BgL_testz00_4529 = ((bool_t) 0);
																				}
																		}
																		if (BgL_testz00_4529)
																			{	/* Llib/unicode.scm 630 */
																				long BgL_nz00_2457;

																				BgL_nz00_2457 =
																					(STRING_REF(BgL_strz00_59,
																						(BgL_rz00_1091 + ((long) 2))));
																				if ((BgL_nz00_2457 >= ((long) 128)))
																					{	/* Llib/unicode.scm 630 */
																						BgL_testz00_4525 =
																							(BgL_nz00_2457 <= ((long) 191));
																					}
																				else
																					{	/* Llib/unicode.scm 630 */
																						BgL_testz00_4525 = ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Llib/unicode.scm 629 */
																				BgL_testz00_4525 = ((bool_t) 0);
																			}
																	}
																else
																	{	/* Llib/unicode.scm 628 */
																		BgL_testz00_4525 = ((bool_t) 0);
																	}
																if (BgL_testz00_4525)
																	{
																		long BgL_rz00_4542;

																		BgL_rz00_4542 =
																			(BgL_rz00_1091 + ((long) 3));
																		BgL_rz00_1091 = BgL_rz00_4542;
																		goto BgL_zc3anonymousza32020ze3z83_1092;
																	}
																else
																	{	/* Llib/unicode.scm 628 */
																		return ((bool_t) 0);
																	}
															}
														else
															{	/* Llib/unicode.scm 626 */
																if ((BgL_nz00_1095 == ((long) 240)))
																	{	/* Llib/unicode.scm 634 */
																		bool_t BgL_testz00_4546;

																		if (
																			(BgL_rz00_1091 <
																				(BgL_lenz00_1089 - ((long) 3))))
																			{	/* Llib/unicode.scm 635 */
																				bool_t BgL_testz00_4550;

																				{	/* Llib/unicode.scm 635 */
																					long BgL_nz00_2479;

																					BgL_nz00_2479 =
																						(STRING_REF(BgL_strz00_59,
																							(BgL_rz00_1091 + ((long) 1))));
																					if ((BgL_nz00_2479 >= ((long) 144)))
																						{	/* Llib/unicode.scm 635 */
																							BgL_testz00_4550 =
																								(BgL_nz00_2479 <= ((long) 191));
																						}
																					else
																						{	/* Llib/unicode.scm 635 */
																							BgL_testz00_4550 = ((bool_t) 0);
																						}
																				}
																				if (BgL_testz00_4550)
																					{	/* Llib/unicode.scm 636 */
																						bool_t BgL_testz00_4557;

																						{	/* Llib/unicode.scm 636 */
																							long BgL_nz00_2493;

																							BgL_nz00_2493 =
																								(STRING_REF(BgL_strz00_59,
																									(BgL_rz00_1091 +
																										((long) 2))));
																							if ((BgL_nz00_2493 >=
																									((long) 128)))
																								{	/* Llib/unicode.scm 636 */
																									BgL_testz00_4557 =
																										(BgL_nz00_2493 <=
																										((long) 191));
																								}
																							else
																								{	/* Llib/unicode.scm 636 */
																									BgL_testz00_4557 =
																										((bool_t) 0);
																								}
																						}
																						if (BgL_testz00_4557)
																							{	/* Llib/unicode.scm 637 */
																								long BgL_nz00_2507;

																								BgL_nz00_2507 =
																									(STRING_REF(BgL_strz00_59,
																										(BgL_rz00_1091 +
																											((long) 3))));
																								if ((BgL_nz00_2507 >=
																										((long) 128)))
																									{	/* Llib/unicode.scm 637 */
																										BgL_testz00_4546 =
																											(BgL_nz00_2507 <=
																											((long) 191));
																									}
																								else
																									{	/* Llib/unicode.scm 637 */
																										BgL_testz00_4546 =
																											((bool_t) 0);
																									}
																							}
																						else
																							{	/* Llib/unicode.scm 636 */
																								BgL_testz00_4546 = ((bool_t) 0);
																							}
																					}
																				else
																					{	/* Llib/unicode.scm 635 */
																						BgL_testz00_4546 = ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Llib/unicode.scm 634 */
																				BgL_testz00_4546 = ((bool_t) 0);
																			}
																		if (BgL_testz00_4546)
																			{
																				long BgL_rz00_4570;

																				BgL_rz00_4570 =
																					(BgL_rz00_1091 + ((long) 4));
																				BgL_rz00_1091 = BgL_rz00_4570;
																				goto BgL_zc3anonymousza32020ze3z83_1092;
																			}
																		else
																			{	/* Llib/unicode.scm 634 */
																				return ((bool_t) 0);
																			}
																	}
																else
																	{	/* Llib/unicode.scm 632 */
																		if ((BgL_nz00_1095 == ((long) 244)))
																			{	/* Llib/unicode.scm 641 */
																				bool_t BgL_testz00_4574;

																				if (
																					(BgL_rz00_1091 <
																						(BgL_lenz00_1089 - ((long) 3))))
																					{	/* Llib/unicode.scm 642 */
																						bool_t BgL_testz00_4578;

																						{	/* Llib/unicode.scm 642 */
																							long BgL_nz00_2529;

																							BgL_nz00_2529 =
																								(STRING_REF(BgL_strz00_59,
																									(BgL_rz00_1091 +
																										((long) 1))));
																							if ((BgL_nz00_2529 >=
																									((long) 128)))
																								{	/* Llib/unicode.scm 642 */
																									BgL_testz00_4578 =
																										(BgL_nz00_2529 <=
																										((long) 143));
																								}
																							else
																								{	/* Llib/unicode.scm 642 */
																									BgL_testz00_4578 =
																										((bool_t) 0);
																								}
																						}
																						if (BgL_testz00_4578)
																							{	/* Llib/unicode.scm 643 */
																								bool_t BgL_testz00_4585;

																								{	/* Llib/unicode.scm 643 */
																									long BgL_nz00_2543;

																									BgL_nz00_2543 =
																										(STRING_REF(BgL_strz00_59,
																											(BgL_rz00_1091 +
																												((long) 2))));
																									if ((BgL_nz00_2543 >=
																											((long) 128)))
																										{	/* Llib/unicode.scm 643 */
																											BgL_testz00_4585 =
																												(BgL_nz00_2543 <=
																												((long) 191));
																										}
																									else
																										{	/* Llib/unicode.scm 643 */
																											BgL_testz00_4585 =
																												((bool_t) 0);
																										}
																								}
																								if (BgL_testz00_4585)
																									{	/* Llib/unicode.scm 644 */
																										long BgL_nz00_2557;

																										BgL_nz00_2557 =
																											(STRING_REF(BgL_strz00_59,
																												(BgL_rz00_1091 +
																													((long) 3))));
																										if ((BgL_nz00_2557 >=
																												((long) 128)))
																											{	/* Llib/unicode.scm 644 */
																												BgL_testz00_4574 =
																													(BgL_nz00_2557 <=
																													((long) 191));
																											}
																										else
																											{	/* Llib/unicode.scm 644 */
																												BgL_testz00_4574 =
																													((bool_t) 0);
																											}
																									}
																								else
																									{	/* Llib/unicode.scm 643 */
																										BgL_testz00_4574 =
																											((bool_t) 0);
																									}
																							}
																						else
																							{	/* Llib/unicode.scm 642 */
																								BgL_testz00_4574 = ((bool_t) 0);
																							}
																					}
																				else
																					{	/* Llib/unicode.scm 641 */
																						BgL_testz00_4574 = ((bool_t) 0);
																					}
																				if (BgL_testz00_4574)
																					{
																						long BgL_rz00_4598;

																						BgL_rz00_4598 =
																							(BgL_rz00_1091 + ((long) 4));
																						BgL_rz00_1091 = BgL_rz00_4598;
																						goto
																							BgL_zc3anonymousza32020ze3z83_1092;
																					}
																				else
																					{	/* Llib/unicode.scm 641 */
																						return ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Llib/unicode.scm 639 */
																				if ((BgL_nz00_1095 <= ((long) 247)))
																					{	/* Llib/unicode.scm 648 */
																						bool_t BgL_testz00_4602;

																						if (
																							(BgL_rz00_1091 <
																								(BgL_lenz00_1089 - ((long) 3))))
																							{	/* Llib/unicode.scm 649 */
																								bool_t BgL_testz00_4606;

																								{	/* Llib/unicode.scm 649 */
																									long BgL_nz00_2579;

																									BgL_nz00_2579 =
																										(STRING_REF(BgL_strz00_59,
																											(BgL_rz00_1091 +
																												((long) 1))));
																									if ((BgL_nz00_2579 >=
																											((long) 128)))
																										{	/* Llib/unicode.scm 649 */
																											BgL_testz00_4606 =
																												(BgL_nz00_2579 <=
																												((long) 191));
																										}
																									else
																										{	/* Llib/unicode.scm 649 */
																											BgL_testz00_4606 =
																												((bool_t) 0);
																										}
																								}
																								if (BgL_testz00_4606)
																									{	/* Llib/unicode.scm 650 */
																										bool_t BgL_testz00_4613;

																										{	/* Llib/unicode.scm 650 */
																											long BgL_nz00_2593;

																											BgL_nz00_2593 =
																												(STRING_REF
																												(BgL_strz00_59,
																													(BgL_rz00_1091 +
																														((long) 2))));
																											if ((BgL_nz00_2593 >=
																													((long) 128)))
																												{	/* Llib/unicode.scm 650 */
																													BgL_testz00_4613 =
																														(BgL_nz00_2593 <=
																														((long) 191));
																												}
																											else
																												{	/* Llib/unicode.scm 650 */
																													BgL_testz00_4613 =
																														((bool_t) 0);
																												}
																										}
																										if (BgL_testz00_4613)
																											{	/* Llib/unicode.scm 651 */
																												long BgL_nz00_2607;

																												BgL_nz00_2607 =
																													(STRING_REF
																													(BgL_strz00_59,
																														(BgL_rz00_1091 +
																															((long) 3))));
																												if ((BgL_nz00_2607 >=
																														((long) 128)))
																													{	/* Llib/unicode.scm 651 */
																														BgL_testz00_4602 =
																															(BgL_nz00_2607 <=
																															((long) 191));
																													}
																												else
																													{	/* Llib/unicode.scm 651 */
																														BgL_testz00_4602 =
																															((bool_t) 0);
																													}
																											}
																										else
																											{	/* Llib/unicode.scm 650 */
																												BgL_testz00_4602 =
																													((bool_t) 0);
																											}
																									}
																								else
																									{	/* Llib/unicode.scm 649 */
																										BgL_testz00_4602 =
																											((bool_t) 0);
																									}
																							}
																						else
																							{	/* Llib/unicode.scm 648 */
																								BgL_testz00_4602 = ((bool_t) 0);
																							}
																						if (BgL_testz00_4602)
																							{
																								long BgL_rz00_4626;

																								BgL_rz00_4626 =
																									(BgL_rz00_1091 + ((long) 4));
																								BgL_rz00_1091 = BgL_rz00_4626;
																								goto
																									BgL_zc3anonymousza32020ze3z83_1092;
																							}
																						else
																							{	/* Llib/unicode.scm 648 */
																								return ((bool_t) 0);
																							}
																					}
																				else
																					{	/* Llib/unicode.scm 646 */
																						if ((BgL_nz00_1095 <= ((long) 251)))
																							{
																								long BgL_rz00_4630;

																								BgL_rz00_4630 =
																									(BgL_rz00_1091 + ((long) 5));
																								BgL_rz00_1091 = BgL_rz00_4630;
																								goto
																									BgL_zc3anonymousza32020ze3z83_1092;
																							}
																						else
																							{	/* Llib/unicode.scm 653 */
																								if (
																									(BgL_nz00_1095 <=
																										((long) 253)))
																									{
																										long BgL_rz00_4634;

																										BgL_rz00_4634 =
																											(BgL_rz00_1091 +
																											((long) 6));
																										BgL_rz00_1091 =
																											BgL_rz00_4634;
																										goto
																											BgL_zc3anonymousza32020ze3z83_1092;
																									}
																								else
																									{	/* Llib/unicode.scm 655 */
																										return ((bool_t) 0);
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



/* _utf8-string? */
	obj_t BGl__utf8zd2stringzf3z21zz__unicodez00(obj_t BgL_envz00_3222,
		obj_t BgL_strz00_3223)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 602 */
			{	/* Llib/unicode.scm 608 */
				bool_t BgL_auxz00_4636;

				{	/* Llib/unicode.scm 608 */
					obj_t BgL_auxz00_4637;

					if (STRINGP(BgL_strz00_3223))
						{	/* Llib/unicode.scm 608 */
							BgL_auxz00_4637 = BgL_strz00_3223;
						}
					else
						{
							obj_t BgL_auxz00_4640;

							BgL_auxz00_4640 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
								BINT(((long) 24535)), BGl_string2722z00zz__unicodez00,
								BGl_string2721z00zz__unicodez00, BgL_strz00_3223);
							FAILURE(BgL_auxz00_4640, BFALSE, BFALSE);
						}
					BgL_auxz00_4636 =
						BGl_utf8zd2stringzf3z21zz__unicodez00(BgL_auxz00_4637);
				}
				return BBOOL(BgL_auxz00_4636);
			}
		}
	}



/* utf8->8bits-fill! */
	obj_t BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00(obj_t BgL_nstrz00_60,
		obj_t BgL_strz00_61, long BgL_lenz00_62, obj_t BgL_tablez00_63)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 663 */
			{
				long BgL_rz00_1247;

				long BgL_rz00_1237;

				{
					long BgL_rz00_1194;

					long BgL_wz00_1195;

					BgL_rz00_1194 = ((long) 0);
					BgL_wz00_1195 = ((long) 0);
				BgL_zc3anonymousza32115ze3z83_1196:
					if ((BgL_rz00_1194 == BgL_lenz00_62))
						{	/* Llib/unicode.scm 677 */
							return BgL_nstrz00_60;
						}
					else
						{	/* Llib/unicode.scm 679 */
							unsigned char BgL_cz00_1198;

							BgL_cz00_1198 = STRING_REF(BgL_strz00_61, BgL_rz00_1194);
							{	/* Llib/unicode.scm 679 */
								long BgL_nz00_1199;

								BgL_nz00_1199 = (BgL_cz00_1198);
								{	/* Llib/unicode.scm 680 */

									if ((BgL_nz00_1199 <= ((long) 127)))
										{	/* Llib/unicode.scm 682 */
											STRING_SET(BgL_nstrz00_60, BgL_wz00_1195, BgL_cz00_1198);
											{
												long BgL_wz00_4655;

												long BgL_rz00_4653;

												BgL_rz00_4653 = (BgL_rz00_1194 + ((long) 1));
												BgL_wz00_4655 = (BgL_wz00_1195 + ((long) 1));
												BgL_wz00_1195 = BgL_wz00_4655;
												BgL_rz00_1194 = BgL_rz00_4653;
												goto BgL_zc3anonymousza32115ze3z83_1196;
											}
										}
									else
										{	/* Llib/unicode.scm 682 */
											if ((BgL_nz00_1199 < ((long) 194)))
												{	/* Llib/unicode.scm 685 */
													BgL_rz00_1247 = BgL_rz00_1194;
												BgL_zc3anonymousza32154ze3z83_1248:
													{	/* Llib/unicode.scm 671 */
														obj_t BgL_arg2155z00_1249;

														obj_t BgL_arg2157z00_1251;

														BgL_arg2155z00_1249 =
															BGl_symbol2723z00zz__unicodez00;
														{	/* Llib/unicode.scm 673 */
															obj_t BgL_arg2158z00_1252;

															{	/* Llib/unicode.scm 673 */
																long BgL_arg2159z00_1253;

																{	/* Llib/unicode.scm 673 */
																	long BgL_yz00_1255;

																	BgL_yz00_1255 = (BgL_rz00_1247 + ((long) 10));
																	if ((BgL_lenz00_62 < BgL_yz00_1255))
																		{	/* Llib/unicode.scm 673 */
																			BgL_arg2159z00_1253 = BgL_lenz00_62;
																		}
																	else
																		{	/* Llib/unicode.scm 673 */
																			BgL_arg2159z00_1253 = BgL_yz00_1255;
																		}
																}
																BgL_arg2158z00_1252 =
																	c_substring(BgL_strz00_61, BgL_rz00_1247,
																	BgL_arg2159z00_1253);
															}
															BgL_arg2157z00_1251 =
																string_for_read(BgL_arg2158z00_1252);
														}
														return
															BGl_errorz00zz__errorz00(BgL_arg2155z00_1249,
															BGl_string2726z00zz__unicodez00,
															BgL_arg2157z00_1251);
													}
												}
											else
												{	/* Llib/unicode.scm 685 */
													if ((BgL_nz00_1199 <= ((long) 223)))
														{	/* Llib/unicode.scm 687 */
															if (
																(BgL_rz00_1194 == (BgL_lenz00_62 - ((long) 1))))
																{	/* Llib/unicode.scm 688 */
																	BgL_rz00_1237 = BgL_rz00_1194;
																BgL_zc3anonymousza32147ze3z83_1238:
																	{	/* Llib/unicode.scm 666 */
																		obj_t BgL_arg2148z00_1239;

																		obj_t BgL_arg2150z00_1241;

																		BgL_arg2148z00_1239 =
																			BGl_symbol2723z00zz__unicodez00;
																		{	/* Llib/unicode.scm 668 */
																			obj_t BgL_arg2151z00_1242;

																			{	/* Llib/unicode.scm 668 */
																				long BgL_arg2152z00_1243;

																				{	/* Llib/unicode.scm 668 */
																					long BgL_yz00_1245;

																					BgL_yz00_1245 =
																						(BgL_rz00_1237 - ((long) 10));
																					if ((((long) 0) > BgL_yz00_1245))
																						{	/* Llib/unicode.scm 668 */
																							BgL_arg2152z00_1243 = ((long) 0);
																						}
																					else
																						{	/* Llib/unicode.scm 668 */
																							BgL_arg2152z00_1243 =
																								BgL_yz00_1245;
																						}
																				}
																				BgL_arg2151z00_1242 =
																					c_substring(BgL_strz00_61,
																					BgL_arg2152z00_1243, BgL_lenz00_62);
																			}
																			BgL_arg2150z00_1241 =
																				string_for_read(BgL_arg2151z00_1242);
																		}
																		return
																			BGl_errorz00zz__errorz00
																			(BgL_arg2148z00_1239,
																			BGl_string2725z00zz__unicodez00,
																			BgL_arg2150z00_1241);
																	}
																}
															else
																{	/* Llib/unicode.scm 690 */
																	unsigned char BgL_ncz00_1206;

																	BgL_ncz00_1206 =
																		STRING_REF(BgL_strz00_61,
																		(BgL_rz00_1194 + ((long) 1)));
																	{	/* Llib/unicode.scm 690 */
																		long BgL_nnz00_1207;

																		BgL_nnz00_1207 = (BgL_ncz00_1206);
																		{	/* Llib/unicode.scm 691 */

																			{	/* Llib/unicode.scm 692 */
																				bool_t BgL_testz00_4679;

																				if ((BgL_nnz00_1207 >= ((long) 128)))
																					{	/* Llib/unicode.scm 692 */
																						BgL_testz00_4679 =
																							(BgL_nnz00_1207 < ((long) 192));
																					}
																				else
																					{	/* Llib/unicode.scm 692 */
																						BgL_testz00_4679 = ((bool_t) 0);
																					}
																				if (BgL_testz00_4679)
																					{	/* Llib/unicode.scm 693 */
																						long BgL_mz00_1209;

																						BgL_mz00_1209 =
																							(
																							((BgL_nz00_1199 - ((long) 194)) <<
																								(int) (((long) 6))) |
																							BgL_nnz00_1207);
																						{	/* Llib/unicode.scm 694 */
																							unsigned char BgL_auxz00_4687;

																							BgL_auxz00_4687 = (BgL_mz00_1209);
																							STRING_SET(BgL_nstrz00_60,
																								BgL_wz00_1195, BgL_auxz00_4687);
																						}
																						{
																							long BgL_wz00_4692;

																							long BgL_rz00_4690;

																							BgL_rz00_4690 =
																								(BgL_rz00_1194 + ((long) 2));
																							BgL_wz00_4692 =
																								(BgL_wz00_1195 + ((long) 1));
																							BgL_wz00_1195 = BgL_wz00_4692;
																							BgL_rz00_1194 = BgL_rz00_4690;
																							goto
																								BgL_zc3anonymousza32115ze3z83_1196;
																						}
																					}
																				else
																					{
																						long BgL_rz00_4694;

																						BgL_rz00_4694 = BgL_rz00_1194;
																						BgL_rz00_1247 = BgL_rz00_4694;
																						goto
																							BgL_zc3anonymousza32154ze3z83_1248;
																					}
																			}
																		}
																	}
																}
														}
													else
														{	/* Llib/unicode.scm 687 */
															if (CBOOL(BgL_tablez00_63))
																{	/* Llib/unicode.scm 698 */
																	obj_t BgL_g1830z00_1219;

																	long BgL_g1831z00_1220;

																	BgL_g1830z00_1219 =
																		BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																		(BINT(BgL_nz00_1199), BgL_tablez00_63);
																	BgL_g1831z00_1220 =
																		(BgL_rz00_1194 + ((long) 1));
																	{
																		obj_t BgL_subtablez00_1222;

																		long BgL_nrz00_1223;

																		BgL_subtablez00_1222 = BgL_g1830z00_1219;
																		BgL_nrz00_1223 = BgL_g1831z00_1220;
																	BgL_zc3anonymousza32135ze3z83_1224:
																		if (CBOOL(BgL_subtablez00_1222))
																			{	/* Llib/unicode.scm 703 */
																				bool_t BgL_testz00_4702;

																				{	/* Llib/unicode.scm 703 */
																					obj_t BgL_auxz00_4703;

																					BgL_auxz00_4703 =
																						CDR(BgL_subtablez00_1222);
																					BgL_testz00_4702 =
																						CHARP(BgL_auxz00_4703);
																				}
																				if (BgL_testz00_4702)
																					{	/* Llib/unicode.scm 703 */
																						{	/* Llib/unicode.scm 704 */
																							obj_t BgL_arg2137z00_1226;

																							BgL_arg2137z00_1226 =
																								CDR(BgL_subtablez00_1222);
																							{	/* Llib/unicode.scm 704 */
																								unsigned char BgL_auxz00_4707;

																								BgL_auxz00_4707 =
																									CCHAR(BgL_arg2137z00_1226);
																								STRING_SET(BgL_nstrz00_60,
																									BgL_wz00_1195,
																									BgL_auxz00_4707);
																						}}
																						{
																							long BgL_wz00_4711;

																							long BgL_rz00_4710;

																							BgL_rz00_4710 = BgL_nrz00_1223;
																							BgL_wz00_4711 =
																								(BgL_wz00_1195 + ((long) 1));
																							BgL_wz00_1195 = BgL_wz00_4711;
																							BgL_rz00_1194 = BgL_rz00_4710;
																							goto
																								BgL_zc3anonymousza32115ze3z83_1196;
																						}
																					}
																				else
																					{	/* Llib/unicode.scm 703 */
																						if (
																							(BgL_nrz00_1223 == BgL_lenz00_62))
																							{
																								long BgL_rz00_4715;

																								BgL_rz00_4715 = BgL_rz00_1194;
																								BgL_rz00_1237 = BgL_rz00_4715;
																								goto
																									BgL_zc3anonymousza32147ze3z83_1238;
																							}
																						else
																							{	/* Llib/unicode.scm 709 */
																								long BgL_ncz00_1229;

																								BgL_ncz00_1229 =
																									(STRING_REF(BgL_strz00_61,
																										BgL_nrz00_1223));
																								{
																									long BgL_nrz00_4722;

																									obj_t BgL_subtablez00_4718;

																									BgL_subtablez00_4718 =
																										BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																										(BINT(BgL_ncz00_1229),
																										CDR(BgL_subtablez00_1222));
																									BgL_nrz00_4722 =
																										(BgL_nrz00_1223 +
																										((long) 1));
																									BgL_nrz00_1223 =
																										BgL_nrz00_4722;
																									BgL_subtablez00_1222 =
																										BgL_subtablez00_4718;
																									goto
																										BgL_zc3anonymousza32135ze3z83_1224;
																								}
																							}
																					}
																			}
																		else
																			{
																				long BgL_rz00_4724;

																				BgL_rz00_4724 = BgL_rz00_1194;
																				BgL_rz00_1247 = BgL_rz00_4724;
																				goto BgL_zc3anonymousza32154ze3z83_1248;
																			}
																	}
																}
															else
																{
																	long BgL_rz00_4725;

																	BgL_rz00_4725 = BgL_rz00_1194;
																	BgL_rz00_1247 = BgL_rz00_4725;
																	goto BgL_zc3anonymousza32154ze3z83_1248;
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



/* utf8->8bits */
	BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze38bitsz31zz__unicodez00(obj_t
		BgL_strz00_64, obj_t BgL_tablez00_65)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 717 */
			{	/* Llib/unicode.scm 718 */
				long BgL_lenz00_2710;

				BgL_lenz00_2710 = STRING_LENGTH(BgL_strz00_64);
				{	/* Llib/unicode.scm 718 */
					long BgL_nlenz00_2711;

					BgL_nlenz00_2711 =
						BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(BgL_strz00_64,
						BgL_lenz00_2710);
					{	/* Llib/unicode.scm 718 */

						if ((BgL_lenz00_2710 == BgL_nlenz00_2711))
							{	/* Llib/unicode.scm 718 */
								return BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_strz00_64);
							}
						else
							{	/* Llib/unicode.scm 718 */
								return
									BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00(make_string
									(BgL_nlenz00_2711, ((unsigned char) ' ')), BgL_strz00_64,
									BgL_lenz00_2710, BgL_tablez00_65);
		}}}}}
	}



/* _utf8->8bits */
	obj_t BGl__utf8zd2ze38bitsz31zz__unicodez00(obj_t BgL_envz00_3224,
		obj_t BgL_strz00_3225, obj_t BgL_tablez00_3226)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 717 */
			{	/* Llib/unicode.scm 718 */
				obj_t BgL_auxz00_4733;

				if (STRINGP(BgL_strz00_3225))
					{	/* Llib/unicode.scm 718 */
						BgL_auxz00_4733 = BgL_strz00_3225;
					}
				else
					{
						obj_t BgL_auxz00_4736;

						BgL_auxz00_4736 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 28057)), BGl_string2727z00zz__unicodez00,
							BGl_string2721z00zz__unicodez00, BgL_strz00_3225);
						FAILURE(BgL_auxz00_4736, BFALSE, BFALSE);
					}
				return
					BGl_utf8zd2ze38bitsz31zz__unicodez00(BgL_auxz00_4733,
					BgL_tablez00_3226);
			}
		}
	}



/* utf8->8bits! */
	BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze38bitsz12z23zz__unicodez00(obj_t
		BgL_strz00_66, obj_t BgL_tablez00_67)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 727 */
			{	/* Llib/unicode.scm 728 */
				long BgL_lenz00_2725;

				BgL_lenz00_2725 = STRING_LENGTH(BgL_strz00_66);
				{	/* Llib/unicode.scm 728 */
					long BgL_nlenz00_2726;

					BgL_nlenz00_2726 =
						BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(BgL_strz00_66,
						BgL_lenz00_2725);
					{	/* Llib/unicode.scm 728 */

						if ((BgL_lenz00_2725 == BgL_nlenz00_2726))
							{	/* Llib/unicode.scm 728 */
								return BgL_strz00_66;
							}
						else
							{	/* Llib/unicode.scm 728 */
								return
									BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00(make_string
									(BgL_nlenz00_2726, ((unsigned char) ' ')), BgL_strz00_66,
									BgL_lenz00_2725, BFALSE);
		}}}}}
	}



/* _utf8->8bits! */
	obj_t BGl__utf8zd2ze38bitsz12z23zz__unicodez00(obj_t BgL_envz00_3227,
		obj_t BgL_strz00_3228, obj_t BgL_tablez00_3229)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 727 */
			{	/* Llib/unicode.scm 728 */
				obj_t BgL_auxz00_4747;

				if (STRINGP(BgL_strz00_3228))
					{	/* Llib/unicode.scm 728 */
						BgL_auxz00_4747 = BgL_strz00_3228;
					}
				else
					{
						obj_t BgL_auxz00_4750;

						BgL_auxz00_4750 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 28494)), BGl_string2728z00zz__unicodez00,
							BGl_string2721z00zz__unicodez00, BgL_strz00_3228);
						FAILURE(BgL_auxz00_4750, BFALSE, BFALSE);
					}
				return
					BGl_utf8zd2ze38bitsz12z23zz__unicodez00(BgL_auxz00_4747,
					BgL_tablez00_3229);
			}
		}
	}



/* utf8->iso-latin */
	BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze3isozd2latinze3zz__unicodez00(obj_t
		BgL_strz00_68)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 737 */
			{	/* Llib/unicode.scm 738 */
				obj_t BgL_res2476z00_2757;

				{	/* Llib/unicode.scm 738 */
					obj_t BgL_tablez00_2741;

					BgL_tablez00_2741 = BGl_8bitszd2invzd2zz__unicodez00;
					{	/* Llib/unicode.scm 738 */
						long BgL_lenz00_2742;

						BgL_lenz00_2742 = STRING_LENGTH(BgL_strz00_68);
						{	/* Llib/unicode.scm 738 */
							long BgL_nlenz00_2743;

							BgL_nlenz00_2743 =
								BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(BgL_strz00_68,
								BgL_lenz00_2742);
							{	/* Llib/unicode.scm 738 */

								if ((BgL_lenz00_2742 == BgL_nlenz00_2743))
									{	/* Llib/unicode.scm 738 */
										BgL_res2476z00_2757 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_strz00_68);
									}
								else
									{	/* Llib/unicode.scm 738 */
										BgL_res2476z00_2757 =
											BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00(make_string
											(BgL_nlenz00_2743, ((unsigned char) ' ')), BgL_strz00_68,
											BgL_lenz00_2742, BgL_tablez00_2741);
				}}}}}
				return BgL_res2476z00_2757;
			}
		}
	}



/* _utf8->iso-latin */
	obj_t BGl__utf8zd2ze3isozd2latinze3zz__unicodez00(obj_t BgL_envz00_3230,
		obj_t BgL_strz00_3231)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 737 */
			{	/* Llib/unicode.scm 738 */
				obj_t BgL_auxz00_4762;

				if (STRINGP(BgL_strz00_3231))
					{	/* Llib/unicode.scm 738 */
						BgL_auxz00_4762 = BgL_strz00_3231;
					}
				else
					{
						obj_t BgL_auxz00_4765;

						BgL_auxz00_4765 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 28911)), BGl_string2729z00zz__unicodez00,
							BGl_string2721z00zz__unicodez00, BgL_strz00_3231);
						FAILURE(BgL_auxz00_4765, BFALSE, BFALSE);
					}
				return BGl_utf8zd2ze3isozd2latinze3zz__unicodez00(BgL_auxz00_4762);
			}
		}
	}



/* utf8->iso-latin! */
	BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze3isozd2latinz12zf1zz__unicodez00(obj_t
		BgL_strz00_69)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 743 */
			{	/* Llib/unicode.scm 744 */
				obj_t BgL_res2478z00_2775;

				{	/* Llib/unicode.scm 744 */
					obj_t BgL_tablez00_2759;

					BgL_tablez00_2759 = BGl_8bitszd2invzd2zz__unicodez00;
					{	/* Llib/unicode.scm 744 */
						long BgL_lenz00_2760;

						BgL_lenz00_2760 = STRING_LENGTH(BgL_strz00_69);
						{	/* Llib/unicode.scm 744 */
							long BgL_nlenz00_2761;

							BgL_nlenz00_2761 =
								BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(BgL_strz00_69,
								BgL_lenz00_2760);
							{	/* Llib/unicode.scm 744 */

								if ((BgL_lenz00_2760 == BgL_nlenz00_2761))
									{	/* Llib/unicode.scm 744 */
										BgL_res2478z00_2775 = BgL_strz00_69;
									}
								else
									{	/* Llib/unicode.scm 744 */
										BgL_res2478z00_2775 =
											BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00(make_string
											(BgL_nlenz00_2761, ((unsigned char) ' ')), BgL_strz00_69,
											BgL_lenz00_2760, BFALSE);
				}}}}}
				return BgL_res2478z00_2775;
			}
		}
	}



/* _utf8->iso-latin! */
	obj_t BGl__utf8zd2ze3isozd2latinz12zf1zz__unicodez00(obj_t BgL_envz00_3232,
		obj_t BgL_strz00_3233)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 743 */
			{	/* Llib/unicode.scm 744 */
				obj_t BgL_auxz00_4776;

				if (STRINGP(BgL_strz00_3233))
					{	/* Llib/unicode.scm 744 */
						BgL_auxz00_4776 = BgL_strz00_3233;
					}
				else
					{
						obj_t BgL_auxz00_4779;

						BgL_auxz00_4779 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 29197)), BGl_string2730z00zz__unicodez00,
							BGl_string2721z00zz__unicodez00, BgL_strz00_3233);
						FAILURE(BgL_auxz00_4779, BFALSE, BFALSE);
					}
				return BGl_utf8zd2ze3isozd2latinz12zf1zz__unicodez00(BgL_auxz00_4776);
			}
		}
	}



/* utf8->cp1252 */
	BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze3cp1252z31zz__unicodez00(obj_t
		BgL_strz00_70)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 749 */
			if (CBOOL(BGl_cp1252zd2invzd2zz__unicodez00))
				{	/* Llib/unicode.scm 750 */
					BFALSE;
				}
			else
				{	/* Llib/unicode.scm 750 */
					BGl_cp1252zd2invzd2zz__unicodez00 =
						BGl_inversezd2utf8zd2tablez00zz__unicodez00
						(BGl_cp1252z00zz__unicodez00);
				}
			{	/* Llib/unicode.scm 751 */
				obj_t BgL_res2480z00_2793;

				{	/* Llib/unicode.scm 751 */
					obj_t BgL_tablez00_2777;

					BgL_tablez00_2777 = BGl_cp1252zd2invzd2zz__unicodez00;
					{	/* Llib/unicode.scm 751 */
						long BgL_lenz00_2778;

						BgL_lenz00_2778 = STRING_LENGTH(BgL_strz00_70);
						{	/* Llib/unicode.scm 751 */
							long BgL_nlenz00_2779;

							BgL_nlenz00_2779 =
								BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(BgL_strz00_70,
								BgL_lenz00_2778);
							{	/* Llib/unicode.scm 751 */

								if ((BgL_lenz00_2778 == BgL_nlenz00_2779))
									{	/* Llib/unicode.scm 751 */
										BgL_res2480z00_2793 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_strz00_70);
									}
								else
									{	/* Llib/unicode.scm 751 */
										BgL_res2480z00_2793 =
											BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00(make_string
											(BgL_nlenz00_2779, ((unsigned char) ' ')), BgL_strz00_70,
											BgL_lenz00_2778, BgL_tablez00_2777);
				}}}}}
				return BgL_res2480z00_2793;
			}
		}
	}



/* _utf8->cp1252 */
	obj_t BGl__utf8zd2ze3cp1252z31zz__unicodez00(obj_t BgL_envz00_3234,
		obj_t BgL_strz00_3235)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 749 */
			{	/* Llib/unicode.scm 751 */
				obj_t BgL_auxz00_4794;

				if (STRINGP(BgL_strz00_3235))
					{	/* Llib/unicode.scm 751 */
						BgL_auxz00_4794 = BgL_strz00_3235;
					}
				else
					{
						obj_t BgL_auxz00_4797;

						BgL_auxz00_4797 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 29576)), BGl_string2731z00zz__unicodez00,
							BGl_string2721z00zz__unicodez00, BgL_strz00_3235);
						FAILURE(BgL_auxz00_4797, BFALSE, BFALSE);
					}
				return BGl_utf8zd2ze3cp1252z31zz__unicodez00(BgL_auxz00_4794);
			}
		}
	}



/* utf8->cp1252! */
	BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze3cp1252z12z23zz__unicodez00(obj_t
		BgL_strz00_71)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 756 */
			if (CBOOL(BGl_cp1252zd2invzd2zz__unicodez00))
				{	/* Llib/unicode.scm 757 */
					BFALSE;
				}
			else
				{	/* Llib/unicode.scm 757 */
					BGl_cp1252zd2invzd2zz__unicodez00 =
						BGl_inversezd2utf8zd2tablez00zz__unicodez00
						(BGl_cp1252z00zz__unicodez00);
				}
			{	/* Llib/unicode.scm 758 */
				obj_t BgL_res2482z00_2811;

				{	/* Llib/unicode.scm 758 */
					obj_t BgL_tablez00_2795;

					BgL_tablez00_2795 = BGl_cp1252zd2invzd2zz__unicodez00;
					{	/* Llib/unicode.scm 758 */
						long BgL_lenz00_2796;

						BgL_lenz00_2796 = STRING_LENGTH(BgL_strz00_71);
						{	/* Llib/unicode.scm 758 */
							long BgL_nlenz00_2797;

							BgL_nlenz00_2797 =
								BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(BgL_strz00_71,
								BgL_lenz00_2796);
							{	/* Llib/unicode.scm 758 */

								if ((BgL_lenz00_2796 == BgL_nlenz00_2797))
									{	/* Llib/unicode.scm 758 */
										BgL_res2482z00_2811 = BgL_strz00_71;
									}
								else
									{	/* Llib/unicode.scm 758 */
										BgL_res2482z00_2811 =
											BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00(make_string
											(BgL_nlenz00_2797, ((unsigned char) ' ')), BgL_strz00_71,
											BgL_lenz00_2796, BFALSE);
				}}}}}
				return BgL_res2482z00_2811;
			}
		}
	}



/* _utf8->cp1252! */
	obj_t BGl__utf8zd2ze3cp1252z12z23zz__unicodez00(obj_t BgL_envz00_3236,
		obj_t BgL_strz00_3237)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 756 */
			{	/* Llib/unicode.scm 758 */
				obj_t BgL_auxz00_4811;

				if (STRINGP(BgL_strz00_3237))
					{	/* Llib/unicode.scm 758 */
						BgL_auxz00_4811 = BgL_strz00_3237;
					}
				else
					{
						obj_t BgL_auxz00_4814;

						BgL_auxz00_4814 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 29930)), BGl_string2732z00zz__unicodez00,
							BGl_string2721z00zz__unicodez00, BgL_strz00_3237);
						FAILURE(BgL_auxz00_4814, BFALSE, BFALSE);
					}
				return BGl_utf8zd2ze3cp1252z12z23zz__unicodez00(BgL_auxz00_4811);
			}
		}
	}



/* 8bits->utf8-length */
	long BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(obj_t BgL_strz00_72,
		long BgL_lenz00_73, obj_t BgL_tablez00_74)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 763 */
			{
				long BgL_cz00_1286;

				{
					long BgL_siza7eza7_1271;

					long BgL_iz00_1272;

					BgL_siza7eza7_1271 = ((long) 0);
					BgL_iz00_1272 = ((long) 0);
				BgL_zc3anonymousza32167ze3z83_1273:
					if ((BgL_iz00_1272 == BgL_lenz00_73))
						{	/* Llib/unicode.scm 773 */
							return BgL_siza7eza7_1271;
						}
					else
						{	/* Llib/unicode.scm 775 */
							long BgL_cz00_1275;

							BgL_cz00_1275 = (STRING_REF(BgL_strz00_72, BgL_iz00_1272));
							if ((BgL_cz00_1275 >= ((long) 128)))
								{	/* Llib/unicode.scm 776 */
									if (CBOOL(BgL_tablez00_74))
										{
											long BgL_iz00_4838;

											long BgL_siza7eza7_4827;

											{	/* Llib/unicode.scm 778 */
												long BgL_auxz00_4828;

												BgL_cz00_1286 = BgL_cz00_1275;
												{	/* Llib/unicode.scm 766 */
													long BgL_vz00_1288;

													BgL_vz00_1288 = (BgL_cz00_1286 - ((long) 128));
													{	/* Llib/unicode.scm 767 */
														bool_t BgL_testz00_4830;

														{	/* Llib/unicode.scm 767 */
															int BgL_arg2181z00_1291;

															BgL_arg2181z00_1291 =
																VECTOR_LENGTH(BgL_tablez00_74);
															BgL_testz00_4830 =
																(BgL_vz00_1288 < (long) (BgL_arg2181z00_1291));
														}
														if (BgL_testz00_4830)
															{	/* Llib/unicode.scm 767 */
																BgL_auxz00_4828 =
																	STRING_LENGTH(VECTOR_REF(BgL_tablez00_74,
																		(int) (BgL_vz00_1288)));
															}
														else
															{	/* Llib/unicode.scm 767 */
																BgL_auxz00_4828 = ((long) 2);
												}}}
												BgL_siza7eza7_4827 =
													(BgL_siza7eza7_1271 + BgL_auxz00_4828);
											}
											BgL_iz00_4838 = (BgL_iz00_1272 + ((long) 1));
											BgL_iz00_1272 = BgL_iz00_4838;
											BgL_siza7eza7_1271 = BgL_siza7eza7_4827;
											goto BgL_zc3anonymousza32167ze3z83_1273;
										}
									else
										{
											long BgL_iz00_4842;

											long BgL_siza7eza7_4840;

											BgL_siza7eza7_4840 = (BgL_siza7eza7_1271 + ((long) 2));
											BgL_iz00_4842 = (BgL_iz00_1272 + ((long) 1));
											BgL_iz00_1272 = BgL_iz00_4842;
											BgL_siza7eza7_1271 = BgL_siza7eza7_4840;
											goto BgL_zc3anonymousza32167ze3z83_1273;
										}
								}
							else
								{
									long BgL_iz00_4846;

									long BgL_siza7eza7_4844;

									BgL_siza7eza7_4844 = (BgL_siza7eza7_1271 + ((long) 1));
									BgL_iz00_4846 = (BgL_iz00_1272 + ((long) 1));
									BgL_iz00_1272 = BgL_iz00_4846;
									BgL_siza7eza7_1271 = BgL_siza7eza7_4844;
									goto BgL_zc3anonymousza32167ze3z83_1273;
								}
						}
				}
			}
		}
	}



/* 8bits->utf8-fill! */
	obj_t BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00(obj_t BgL_nstrz00_75,
		obj_t BgL_strz00_76, long BgL_lenz00_77, obj_t BgL_tablez00_78)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 785 */
			{
				long BgL_rz00_1294;

				long BgL_wz00_1295;

				BgL_rz00_1294 = ((long) 0);
				BgL_wz00_1295 = ((long) 0);
			BgL_zc3anonymousza32182ze3z83_1296:
				if ((BgL_rz00_1294 == BgL_lenz00_77))
					{	/* Llib/unicode.scm 788 */
						return BgL_nstrz00_75;
					}
				else
					{	/* Llib/unicode.scm 790 */
						long BgL_cz00_1298;

						BgL_cz00_1298 = (STRING_REF(BgL_strz00_76, BgL_rz00_1294));
						if ((BgL_cz00_1298 >= ((long) 192)))
							{	/* Llib/unicode.scm 792 */
								STRING_SET(BgL_nstrz00_75, BgL_wz00_1295,
									((unsigned char) 'Ã'));
								{	/* Llib/unicode.scm 794 */
									unsigned char BgL_auxz00_4857;

									long BgL_auxz00_4855;

									BgL_auxz00_4857 = ((BgL_cz00_1298 - ((long) 64)));
									BgL_auxz00_4855 = (BgL_wz00_1295 + ((long) 1));
									STRING_SET(BgL_nstrz00_75, BgL_auxz00_4855, BgL_auxz00_4857);
								}
								{
									long BgL_wz00_4863;

									long BgL_rz00_4861;

									BgL_rz00_4861 = (BgL_rz00_1294 + ((long) 1));
									BgL_wz00_4863 = (BgL_wz00_1295 + ((long) 2));
									BgL_wz00_1295 = BgL_wz00_4863;
									BgL_rz00_1294 = BgL_rz00_4861;
									goto BgL_zc3anonymousza32182ze3z83_1296;
								}
							}
						else
							{	/* Llib/unicode.scm 792 */
								if ((BgL_cz00_1298 >= ((long) 128)))
									{	/* Llib/unicode.scm 796 */
										if (CBOOL(BgL_tablez00_78))
											{	/* Llib/unicode.scm 798 */
												long BgL_vz00_1306;

												BgL_vz00_1306 = (BgL_cz00_1298 - ((long) 128));
												{	/* Llib/unicode.scm 799 */
													bool_t BgL_testz00_4870;

													{	/* Llib/unicode.scm 799 */
														int BgL_arg2198z00_1316;

														BgL_arg2198z00_1316 =
															VECTOR_LENGTH(BgL_tablez00_78);
														BgL_testz00_4870 =
															(BgL_vz00_1306 < (long) (BgL_arg2198z00_1316));
													}
													if (BgL_testz00_4870)
														{	/* Llib/unicode.scm 800 */
															obj_t BgL_encz00_1308;

															BgL_encz00_1308 =
																VECTOR_REF(BgL_tablez00_78,
																(int) (BgL_vz00_1306));
															{	/* Llib/unicode.scm 800 */
																long BgL_lenz00_1309;

																BgL_lenz00_1309 =
																	STRING_LENGTH(BgL_encz00_1308);
																{	/* Llib/unicode.scm 801 */

																	blit_string(BgL_encz00_1308, ((long) 0),
																		BgL_nstrz00_75, BgL_wz00_1295,
																		BgL_lenz00_1309);
																	{
																		long BgL_wz00_4880;

																		long BgL_rz00_4878;

																		BgL_rz00_4878 =
																			(BgL_rz00_1294 + ((long) 1));
																		BgL_wz00_4880 =
																			(BgL_wz00_1295 + BgL_lenz00_1309);
																		BgL_wz00_1295 = BgL_wz00_4880;
																		BgL_rz00_1294 = BgL_rz00_4878;
																		goto BgL_zc3anonymousza32182ze3z83_1296;
																	}
																}
															}
														}
													else
														{	/* Llib/unicode.scm 799 */
															STRING_SET(BgL_nstrz00_75, BgL_wz00_1295,
																((unsigned char) 'Â'));
															{	/* Llib/unicode.scm 806 */
																unsigned char BgL_auxz00_4885;

																long BgL_auxz00_4883;

																BgL_auxz00_4885 = (BgL_cz00_1298);
																BgL_auxz00_4883 = (BgL_wz00_1295 + ((long) 1));
																STRING_SET(BgL_nstrz00_75, BgL_auxz00_4883,
																	BgL_auxz00_4885);
															}
															{
																long BgL_wz00_4890;

																long BgL_rz00_4888;

																BgL_rz00_4888 = (BgL_rz00_1294 + ((long) 1));
																BgL_wz00_4890 = (BgL_wz00_1295 + ((long) 2));
																BgL_wz00_1295 = BgL_wz00_4890;
																BgL_rz00_1294 = BgL_rz00_4888;
																goto BgL_zc3anonymousza32182ze3z83_1296;
															}
														}
												}
											}
										else
											{	/* Llib/unicode.scm 797 */
												STRING_SET(BgL_nstrz00_75, BgL_wz00_1295,
													((unsigned char) 'Â'));
												{	/* Llib/unicode.scm 810 */
													unsigned char BgL_auxz00_4895;

													long BgL_auxz00_4893;

													BgL_auxz00_4895 = (BgL_cz00_1298);
													BgL_auxz00_4893 = (BgL_wz00_1295 + ((long) 1));
													STRING_SET(BgL_nstrz00_75, BgL_auxz00_4893,
														BgL_auxz00_4895);
												}
												{
													long BgL_wz00_4900;

													long BgL_rz00_4898;

													BgL_rz00_4898 = (BgL_rz00_1294 + ((long) 1));
													BgL_wz00_4900 = (BgL_wz00_1295 + ((long) 2));
													BgL_wz00_1295 = BgL_wz00_4900;
													BgL_rz00_1294 = BgL_rz00_4898;
													goto BgL_zc3anonymousza32182ze3z83_1296;
												}
											}
									}
								else
									{	/* Llib/unicode.scm 796 */
										{	/* Llib/unicode.scm 813 */
											unsigned char BgL_auxz00_4902;

											BgL_auxz00_4902 = (BgL_cz00_1298);
											STRING_SET(BgL_nstrz00_75, BgL_wz00_1295,
												BgL_auxz00_4902);
										}
										{
											long BgL_wz00_4907;

											long BgL_rz00_4905;

											BgL_rz00_4905 = (BgL_rz00_1294 + ((long) 1));
											BgL_wz00_4907 = (BgL_wz00_1295 + ((long) 1));
											BgL_wz00_1295 = BgL_wz00_4907;
											BgL_rz00_1294 = BgL_rz00_4905;
											goto BgL_zc3anonymousza32182ze3z83_1296;
										}
									}
							}
					}
			}
		}
	}



/* 8bits->utf8 */
	BGL_EXPORTED_DEF obj_t BGl_8bitszd2ze3utf8z31zz__unicodez00(obj_t
		BgL_strz00_79, obj_t BgL_tablez00_80)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 819 */
			{	/* Llib/unicode.scm 820 */
				long BgL_lenz00_2914;

				BgL_lenz00_2914 = STRING_LENGTH(BgL_strz00_79);
				{	/* Llib/unicode.scm 820 */
					long BgL_nlenz00_2915;

					BgL_nlenz00_2915 =
						BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(BgL_strz00_79,
						BgL_lenz00_2914, BgL_tablez00_80);
					{	/* Llib/unicode.scm 820 */

						if ((BgL_lenz00_2914 == BgL_nlenz00_2915))
							{	/* Llib/unicode.scm 820 */
								return BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_strz00_79);
							}
						else
							{	/* Llib/unicode.scm 820 */
								return
									BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00
									(make_string_sans_fill(BgL_nlenz00_2915), BgL_strz00_79,
									BgL_lenz00_2914, BgL_tablez00_80);
							}
					}
				}
			}
		}
	}



/* _8bits->utf8 */
	obj_t BGl__8bitszd2ze3utf8z31zz__unicodez00(obj_t BgL_envz00_3238,
		obj_t BgL_strz00_3239, obj_t BgL_tablez00_3240)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 819 */
			{	/* Llib/unicode.scm 820 */
				obj_t BgL_auxz00_4916;

				if (STRINGP(BgL_strz00_3239))
					{	/* Llib/unicode.scm 820 */
						BgL_auxz00_4916 = BgL_strz00_3239;
					}
				else
					{
						obj_t BgL_auxz00_4919;

						BgL_auxz00_4919 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 32118)), BGl_string2733z00zz__unicodez00,
							BGl_string2721z00zz__unicodez00, BgL_strz00_3239);
						FAILURE(BgL_auxz00_4919, BFALSE, BFALSE);
					}
				return
					BGl_8bitszd2ze3utf8z31zz__unicodez00(BgL_auxz00_4916,
					BgL_tablez00_3240);
			}
		}
	}



/* 8bits->utf8! */
	BGL_EXPORTED_DEF obj_t BGl_8bitszd2ze3utf8z12z23zz__unicodez00(obj_t
		BgL_strz00_81, obj_t BgL_tablez00_82)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 829 */
			{	/* Llib/unicode.scm 830 */
				long BgL_lenz00_2921;

				BgL_lenz00_2921 = STRING_LENGTH(BgL_strz00_81);
				{	/* Llib/unicode.scm 830 */
					long BgL_nlenz00_2922;

					BgL_nlenz00_2922 =
						BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(BgL_strz00_81,
						BgL_lenz00_2921, BgL_tablez00_82);
					{	/* Llib/unicode.scm 830 */

						if ((BgL_lenz00_2921 == BgL_nlenz00_2922))
							{	/* Llib/unicode.scm 830 */
								return BgL_strz00_81;
							}
						else
							{	/* Llib/unicode.scm 830 */
								return
									BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00
									(make_string_sans_fill(BgL_nlenz00_2922), BgL_strz00_81,
									BgL_lenz00_2921, BgL_tablez00_82);
							}
					}
				}
			}
		}
	}



/* _8bits->utf8! */
	obj_t BGl__8bitszd2ze3utf8z12z23zz__unicodez00(obj_t BgL_envz00_3241,
		obj_t BgL_strz00_3242, obj_t BgL_tablez00_3243)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 829 */
			{	/* Llib/unicode.scm 830 */
				obj_t BgL_auxz00_4930;

				if (STRINGP(BgL_strz00_3242))
					{	/* Llib/unicode.scm 830 */
						BgL_auxz00_4930 = BgL_strz00_3242;
					}
				else
					{
						obj_t BgL_auxz00_4933;

						BgL_auxz00_4933 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 32570)), BGl_string2734z00zz__unicodez00,
							BGl_string2721z00zz__unicodez00, BgL_strz00_3242);
						FAILURE(BgL_auxz00_4933, BFALSE, BFALSE);
					}
				return
					BGl_8bitszd2ze3utf8z12z23zz__unicodez00(BgL_auxz00_4930,
					BgL_tablez00_3243);
			}
		}
	}



/* iso-latin->utf8 */
	BGL_EXPORTED_DEF obj_t BGl_isozd2latinzd2ze3utf8ze3zz__unicodez00(obj_t
		BgL_strz00_83)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 839 */
			{	/* Llib/unicode.scm 840 */
				obj_t BgL_res2483z00_2937;

				{	/* Llib/unicode.scm 840 */
					long BgL_lenz00_2930;

					BgL_lenz00_2930 = STRING_LENGTH(BgL_strz00_83);
					{	/* Llib/unicode.scm 840 */
						long BgL_nlenz00_2931;

						BgL_nlenz00_2931 =
							BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(BgL_strz00_83,
							BgL_lenz00_2930, BFALSE);
						{	/* Llib/unicode.scm 840 */

							if ((BgL_lenz00_2930 == BgL_nlenz00_2931))
								{	/* Llib/unicode.scm 840 */
									BgL_res2483z00_2937 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_strz00_83);
								}
							else
								{	/* Llib/unicode.scm 840 */
									BgL_res2483z00_2937 =
										BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00
										(make_string_sans_fill(BgL_nlenz00_2931), BgL_strz00_83,
										BgL_lenz00_2930, BFALSE);
								}
						}
					}
				}
				return BgL_res2483z00_2937;
			}
		}
	}



/* _iso-latin->utf8 */
	obj_t BGl__isozd2latinzd2ze3utf8ze3zz__unicodez00(obj_t BgL_envz00_3244,
		obj_t BgL_strz00_3245)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 839 */
			{	/* Llib/unicode.scm 840 */
				obj_t BgL_auxz00_4945;

				if (STRINGP(BgL_strz00_3245))
					{	/* Llib/unicode.scm 840 */
						BgL_auxz00_4945 = BgL_strz00_3245;
					}
				else
					{
						obj_t BgL_auxz00_4948;

						BgL_auxz00_4948 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 33005)), BGl_string2735z00zz__unicodez00,
							BGl_string2721z00zz__unicodez00, BgL_strz00_3245);
						FAILURE(BgL_auxz00_4948, BFALSE, BFALSE);
					}
				return BGl_isozd2latinzd2ze3utf8ze3zz__unicodez00(BgL_auxz00_4945);
			}
		}
	}



/* iso-latin->utf8! */
	BGL_EXPORTED_DEF obj_t BGl_isozd2latinzd2ze3utf8z12zf1zz__unicodez00(obj_t
		BgL_strz00_84)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 845 */
			{	/* Llib/unicode.scm 846 */
				obj_t BgL_res2484z00_2947;

				{	/* Llib/unicode.scm 846 */
					long BgL_lenz00_2940;

					BgL_lenz00_2940 = STRING_LENGTH(BgL_strz00_84);
					{	/* Llib/unicode.scm 846 */
						long BgL_nlenz00_2941;

						BgL_nlenz00_2941 =
							BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(BgL_strz00_84,
							BgL_lenz00_2940, BFALSE);
						{	/* Llib/unicode.scm 846 */

							if ((BgL_lenz00_2940 == BgL_nlenz00_2941))
								{	/* Llib/unicode.scm 846 */
									BgL_res2484z00_2947 = BgL_strz00_84;
								}
							else
								{	/* Llib/unicode.scm 846 */
									BgL_res2484z00_2947 =
										BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00
										(make_string_sans_fill(BgL_nlenz00_2941), BgL_strz00_84,
										BgL_lenz00_2940, BFALSE);
								}
						}
					}
				}
				return BgL_res2484z00_2947;
			}
		}
	}



/* _iso-latin->utf8! */
	obj_t BGl__isozd2latinzd2ze3utf8z12zf1zz__unicodez00(obj_t BgL_envz00_3246,
		obj_t BgL_strz00_3247)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 845 */
			{	/* Llib/unicode.scm 846 */
				obj_t BgL_auxz00_4959;

				if (STRINGP(BgL_strz00_3247))
					{	/* Llib/unicode.scm 846 */
						BgL_auxz00_4959 = BgL_strz00_3247;
					}
				else
					{
						obj_t BgL_auxz00_4962;

						BgL_auxz00_4962 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 33287)), BGl_string2736z00zz__unicodez00,
							BGl_string2721z00zz__unicodez00, BgL_strz00_3247);
						FAILURE(BgL_auxz00_4962, BFALSE, BFALSE);
					}
				return BGl_isozd2latinzd2ze3utf8z12zf1zz__unicodez00(BgL_auxz00_4959);
			}
		}
	}



/* cp1252->utf8 */
	BGL_EXPORTED_DEF obj_t BGl_cp1252zd2ze3utf8z31zz__unicodez00(obj_t
		BgL_strz00_85)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 851 */
			{	/* Llib/unicode.scm 852 */
				obj_t BgL_res2485z00_2957;

				{	/* Llib/unicode.scm 852 */
					obj_t BgL_tablez00_2949;

					BgL_tablez00_2949 = BGl_cp1252z00zz__unicodez00;
					{	/* Llib/unicode.scm 852 */
						long BgL_lenz00_2950;

						BgL_lenz00_2950 = STRING_LENGTH(BgL_strz00_85);
						{	/* Llib/unicode.scm 852 */
							long BgL_nlenz00_2951;

							BgL_nlenz00_2951 =
								BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(BgL_strz00_85,
								BgL_lenz00_2950, BgL_tablez00_2949);
							{	/* Llib/unicode.scm 852 */

								if ((BgL_lenz00_2950 == BgL_nlenz00_2951))
									{	/* Llib/unicode.scm 852 */
										BgL_res2485z00_2957 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_strz00_85);
									}
								else
									{	/* Llib/unicode.scm 852 */
										BgL_res2485z00_2957 =
											BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00
											(make_string_sans_fill(BgL_nlenz00_2951), BgL_strz00_85,
											BgL_lenz00_2950, BgL_tablez00_2949);
									}
							}
						}
					}
				}
				return BgL_res2485z00_2957;
			}
		}
	}



/* _cp1252->utf8 */
	obj_t BGl__cp1252zd2ze3utf8z31zz__unicodez00(obj_t BgL_envz00_3248,
		obj_t BgL_strz00_3249)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 851 */
			{	/* Llib/unicode.scm 852 */
				obj_t BgL_auxz00_4974;

				if (STRINGP(BgL_strz00_3249))
					{	/* Llib/unicode.scm 852 */
						BgL_auxz00_4974 = BgL_strz00_3249;
					}
				else
					{
						obj_t BgL_auxz00_4977;

						BgL_auxz00_4977 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 33563)), BGl_string2737z00zz__unicodez00,
							BGl_string2721z00zz__unicodez00, BgL_strz00_3249);
						FAILURE(BgL_auxz00_4977, BFALSE, BFALSE);
					}
				return BGl_cp1252zd2ze3utf8z31zz__unicodez00(BgL_auxz00_4974);
			}
		}
	}



/* cp1252->utf8! */
	BGL_EXPORTED_DEF obj_t BGl_cp1252zd2ze3utf8z12z23zz__unicodez00(obj_t
		BgL_strz00_86)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 857 */
			{	/* Llib/unicode.scm 858 */
				obj_t BgL_res2486z00_2967;

				{	/* Llib/unicode.scm 858 */
					obj_t BgL_tablez00_2959;

					BgL_tablez00_2959 = BGl_cp1252z00zz__unicodez00;
					{	/* Llib/unicode.scm 858 */
						long BgL_lenz00_2960;

						BgL_lenz00_2960 = STRING_LENGTH(BgL_strz00_86);
						{	/* Llib/unicode.scm 858 */
							long BgL_nlenz00_2961;

							BgL_nlenz00_2961 =
								BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(BgL_strz00_86,
								BgL_lenz00_2960, BgL_tablez00_2959);
							{	/* Llib/unicode.scm 858 */

								if ((BgL_lenz00_2960 == BgL_nlenz00_2961))
									{	/* Llib/unicode.scm 858 */
										BgL_res2486z00_2967 = BgL_strz00_86;
									}
								else
									{	/* Llib/unicode.scm 858 */
										BgL_res2486z00_2967 =
											BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00
											(make_string_sans_fill(BgL_nlenz00_2961), BgL_strz00_86,
											BgL_lenz00_2960, BgL_tablez00_2959);
									}
							}
						}
					}
				}
				return BgL_res2486z00_2967;
			}
		}
	}



/* _cp1252->utf8! */
	obj_t BGl__cp1252zd2ze3utf8z12z23zz__unicodez00(obj_t BgL_envz00_3250,
		obj_t BgL_strz00_3251)
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 857 */
			{	/* Llib/unicode.scm 858 */
				obj_t BgL_auxz00_4988;

				if (STRINGP(BgL_strz00_3251))
					{	/* Llib/unicode.scm 858 */
						BgL_auxz00_4988 = BgL_strz00_3251;
					}
				else
					{
						obj_t BgL_auxz00_4991;

						BgL_auxz00_4991 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2680z00zz__unicodez00,
							BINT(((long) 33846)), BGl_string2738z00zz__unicodez00,
							BGl_string2721z00zz__unicodez00, BgL_strz00_3251);
						FAILURE(BgL_auxz00_4991, BFALSE, BFALSE);
					}
				return BGl_cp1252zd2ze3utf8z12z23zz__unicodez00(BgL_auxz00_4988);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__unicodez00()
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__unicodez00()
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__unicodez00()
	{
		AN_OBJECT;
		{	/* Llib/unicode.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2739z00zz__unicodez00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2739z00zz__unicodez00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2739z00zz__unicodez00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2739z00zz__unicodez00));
			return
				BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2739z00zz__unicodez00));
		}
	}

#ifdef __cplusplus
}
#endif
