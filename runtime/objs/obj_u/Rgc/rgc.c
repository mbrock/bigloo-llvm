/*===========================================================================*/
/*   (Rgc/rgc.scm)                                                           */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Rgc/rgc.scm -indent -o objs/obj_u/Rgc/rgc.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl__rgczd2bufferzd2insertzd2charz12zc0zz__rgcz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL int BGl_rgczd2bufferzd2bytezd2refzd2zz__rgcz00(obj_t, int);
	BGL_EXPORTED_DECL long BGl_rgczd2bufferzd2lengthz00zz__rgcz00(obj_t);
	static obj_t BGl__rgczd2setzd2fileposz122187z12zz__rgcz00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t rgc_buffer_keyword(obj_t);
	static obj_t BGl__rgczd2bufferzd2characte2171z00zz__rgcz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__rgcz00 = BUNSPEC;
	BGL_EXPORTED_DECL int BGl_rgczd2bufferzd2bytez00zz__rgcz00(obj_t);
	extern bool_t rgc_buffer_insert_char(obj_t, int);
	BGL_EXPORTED_DECL bool_t BGl_rgczd2bufferzd2emptyzf3zf3zz__rgcz00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__rgcz00();
	BGL_EXPORTED_DECL bool_t BGl_rgczd2bufferzd2bofzf3zf3zz__rgcz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_rgczd2bufferzd2insertzd2charz12zc0zz__rgcz00(obj_t, long);
	BGL_EXPORTED_DECL obj_t
		BGl_rgczd2bufferzd2escapezd2substringzd2zz__rgcz00(obj_t, long, long,
		bool_t);
	static obj_t BGl__rgczd2bufferzd2length2175z00zz__rgcz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgczd2bufferzd2keywordz00zz__rgcz00(obj_t);
	BGL_EXPORTED_DECL double BGl_rgczd2bufferzd2flonumz00zz__rgcz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rgczd2bufferzd2bolzf3zf3zz__rgcz00(obj_t);
	static obj_t BGl__rgczd2bufferzd2symbol2179z00zz__rgcz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_rgczd2bufferzd2positionz00zz__rgcz00(obj_t);
	extern obj_t rgc_buffer_downcase_keyword(obj_t);
	static obj_t BGl__rgczd2bufferzd2downcase2181z00zz__rgcz00(obj_t, obj_t);
	static obj_t BGl__rgczd2bufferzd2downcase2184z00zz__rgcz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rgczd2bufferzd2eofzf3zf3zz__rgcz00(obj_t);
	static obj_t BGl__rgczd2bufferzd2upcasezd2k2185zd2zz__rgcz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__rgcz00();
	extern bool_t rgc_buffer_bof_p(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rgczd2bufferzd2eolzf3zf3zz__rgcz00(obj_t);
	static obj_t BGl__rgczd2bufferzd2bolzf32192zf3zz__rgcz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__rgcz00();
	extern bool_t rgc_buffer_bol_p(obj_t);
	static obj_t BGl__rgczd2bufferzd2bofzf32194zf3zz__rgcz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_rgczd2bufferzd2fixnumz00zz__rgcz00(obj_t);
	extern double rgc_buffer_flonum(obj_t);
	static obj_t BGl__rgczd2thezd2submatchz00zz__rgcz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__rgczd2bufferzd2flonum2178z00zz__rgcz00(obj_t, obj_t);
	static obj_t BGl__rgczd2bufferzd2ungetzd2ch2170zd2zz__rgcz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL int BGl_rgczd2bufferzd2ungetzd2charzd2zz__rgcz00(obj_t,
		int);
	static obj_t BGl__rgczd2fillzd2bufferzd2ifzd2emptyz00zz__rgcz00(obj_t, obj_t);
	extern bool_t rgc_buffer_eof_p(obj_t);
	extern obj_t rgc_buffer_upcase_keyword(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgczd2bufferzd2subsymbolz00zz__rgcz00(obj_t, long,
		long);
	BGL_EXPORTED_DECL int BGl_rgczd2bufferzd2getzd2charzd2zz__rgcz00(obj_t);
	static obj_t BGl_symbol2324z00zz__rgcz00 = BUNSPEC;
	static obj_t BGl_symbol2326z00zz__rgcz00 = BUNSPEC;
	static obj_t BGl_symbol2328z00zz__rgcz00 = BUNSPEC;
	static obj_t BGl__rgczd2fillzd2buffer2191z00zz__rgcz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__rgcz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t rgc_buffer_integer(obj_t);
	extern bool_t rgc_buffer_eol_p(obj_t);
	BGL_EXPORTED_DECL long BGl_rgczd2stopzd2matchz12z12zz__rgcz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__rgcz00();
	extern obj_t rgc_buffer_subsymbol(obj_t, long, long);
	BGL_EXPORTED_DECL obj_t BGl_rgczd2bufferzd2substringz00zz__rgcz00(obj_t, long,
		long);
	BGL_EXPORTED_DECL obj_t
		BGl_rgczd2bufferzd2downcasezd2symbolzd2zz__rgcz00(obj_t);
	extern bool_t rgc_buffer_insert_substring(obj_t, obj_t, long, long);
	static obj_t BGl__rgczd2bufferzd2integer2177z00zz__rgcz00(obj_t, obj_t);
	extern obj_t rgc_buffer_escape_substring(obj_t, long, long, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rgczd2bufferzd2upcasezd2keywordzd2zz__rgcz00(obj_t);
	static obj_t BGl__rgczd2bufferzd2upcasezd2s2182zd2zz__rgcz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rgczd2bufferzd2downcasezd2keywordzd2zz__rgcz00(obj_t);
	extern obj_t rgc_buffer_substring(obj_t, long, long);
	extern long rgc_buffer_fixnum(obj_t);
	extern obj_t rgc_buffer_downcase_symbol(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgczd2bufferzd2integerz00zz__rgcz00(obj_t);
	static obj_t BGl__rgczd2bufferzd2emptyzf32190zf3zz__rgcz00(obj_t, obj_t);
	extern obj_t rgc_buffer_upcase_symbol(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rgczd2fillzd2bufferz00zz__rgcz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_rgczd2bufferzd2insertzd2substringz12zc0zz__rgcz00(obj_t, obj_t, long,
		long);
	BGL_EXPORTED_DEF obj_t BGl_za2unsafezd2rgcza2zd2zz__rgcz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_rgczd2setzd2fileposz12z12zz__rgcz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgczd2bufferzd2symbolz00zz__rgcz00(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__rgczd2bufferzd2fixnum2176z00zz__rgcz00(obj_t, obj_t);
	extern bool_t rgc_fill_buffer(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_rgczd2fillzd2bufferzd2ifzd2emptyz00zz__rgcz00(obj_t);
	static obj_t BGl__rgczd2bufferzd2getzd2char2169zd2zz__rgcz00(obj_t, obj_t);
	static obj_t BGl__rgczd2bufferzd2bytezd2ref2173zd2zz__rgcz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__rgczd2bufferzd2substrin2174z00zz__rgcz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__rgczd2stopzd2matchz122189z12zz__rgcz00(obj_t, obj_t);
	static obj_t BGl__rgczd2startzd2matchz122188z12zz__rgcz00(obj_t, obj_t);
	static obj_t BGl__rgczd2bufferzd2position2186z00zz__rgcz00(obj_t, obj_t);
	static obj_t BGl__rgczd2bufferzd2escapezd2substringzd2zz__rgcz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__rgczd2bufferzd2insertzd2substringz12zc0zz__rgcz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t rgc_buffer_symbol(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgczd2thezd2submatchz00zz__rgcz00(obj_t, long,
		long, long);
	BGL_EXPORTED_DECL unsigned char
		BGl_rgczd2bufferzd2characterz00zz__rgcz00(obj_t);
	static obj_t BGl__rgczd2bufferzd2keyword2183z00zz__rgcz00(obj_t, obj_t);
	static obj_t BGl__rgczd2bufferzd2eolzf32193zf3zz__rgcz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_rgczd2startzd2matchz12z12zz__rgcz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rgczd2bufferzd2upcasezd2symbolzd2zz__rgcz00(obj_t);
	static obj_t BGl__rgczd2bufferzd2eofzf32195zf3zz__rgcz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__rgcz00();
	extern int rgc_buffer_unget_char(obj_t, int);
	static obj_t BGl__rgczd2bufferzd2byte2172z00zz__rgcz00(obj_t, obj_t);
	static obj_t BGl__rgczd2bufferzd2subsymbo2180z00zz__rgcz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2eolzf3zd2envz21zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22332z00,
		BGl__rgczd2bufferzd2eolzf32193zf3zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2eofzf3zd2envz21zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22333z00,
		BGl__rgczd2bufferzd2eofzf32195zf3zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2bufferzd2getzd2charzd2envz00zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22334z00,
		BGl__rgczd2bufferzd2getzd2char2169zd2zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2bufferzd2bytezd2refzd2envz00zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22335z00,
		BGl__rgczd2bufferzd2bytezd2ref2173zd2zz__rgcz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2keywordzd2envzd2zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22336z00,
		BGl__rgczd2bufferzd2keyword2183z00zz__rgcz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2bytezd2envzd2zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22337z00,
		BGl__rgczd2bufferzd2byte2172z00zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2setzd2fileposz12zd2envzc0zz__rgcz00,
		BgL_bgl__rgcza7d2setza7d2fil2338z00,
		BGl__rgczd2setzd2fileposz122187z12zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2positionzd2envzd2zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22339z00,
		BGl__rgczd2bufferzd2position2186z00zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2bufferzd2insertzd2substringz12zd2envz12zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22340z00,
		BGl__rgczd2bufferzd2insertzd2substringz12zc0zz__rgcz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2emptyzf3zd2envz21zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22341z00,
		BGl__rgczd2bufferzd2emptyzf32190zf3zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2bufferzd2downcasezd2symbolzd2envz00zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22342z00,
		BGl__rgczd2bufferzd2downcase2181z00zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2subsymbolzd2envzd2zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22343z00,
		BGl__rgczd2bufferzd2subsymbo2180z00zz__rgcz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2fixnumzd2envzd2zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22344z00,
		BGl__rgczd2bufferzd2fixnum2176z00zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2bufferzd2downcasezd2keywordzd2envz00zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22345z00,
		BGl__rgczd2bufferzd2downcase2184z00zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2bufferzd2escapezd2substringzd2envz00zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22346z00,
		BGl__rgczd2bufferzd2escapezd2substringzd2zz__rgcz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2bolzf3zd2envz21zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22347z00,
		BGl__rgczd2bufferzd2bolzf32192zf3zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2bofzf3zd2envz21zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22348z00,
		BGl__rgczd2bufferzd2bofzf32194zf3zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2bufferzd2ungetzd2charzd2envz00zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22349z00,
		BGl__rgczd2bufferzd2ungetzd2ch2170zd2zz__rgcz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2thezd2submatchzd2envzd2zz__rgcz00,
		BgL_bgl__rgcza7d2theza7d2sub2350z00, BGl__rgczd2thezd2submatchz00zz__rgcz00,
		0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2fillzd2bufferzd2envzd2zz__rgcz00,
		BgL_bgl__rgcza7d2fillza7d2bu2351z00,
		BGl__rgczd2fillzd2buffer2191z00zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2characterzd2envzd2zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22352z00,
		BGl__rgczd2bufferzd2characte2171z00zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2bufferzd2upcasezd2keywordzd2envz00zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22353z00,
		BGl__rgczd2bufferzd2upcasezd2k2185zd2zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2integerzd2envzd2zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22354z00,
		BGl__rgczd2bufferzd2integer2177z00zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2bufferzd2insertzd2charz12zd2envz12zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22355z00,
		BGl__rgczd2bufferzd2insertzd2charz12zc0zz__rgcz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2bufferzd2upcasezd2symbolzd2envz00zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22356z00,
		BGl__rgczd2bufferzd2upcasezd2s2182zd2zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2lengthzd2envzd2zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22357z00,
		BGl__rgczd2bufferzd2length2175z00zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2symbolzd2envzd2zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22358z00,
		BGl__rgczd2bufferzd2symbol2179z00zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2substringzd2envzd2zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22359z00,
		BGl__rgczd2bufferzd2substrin2174z00zz__rgcz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2startzd2matchz12zd2envzc0zz__rgcz00,
		BgL_bgl__rgcza7d2startza7d2m2360z00,
		BGl__rgczd2startzd2matchz122188z12zz__rgcz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2stopzd2matchz12zd2envzc0zz__rgcz00,
		BgL_bgl__rgcza7d2stopza7d2ma2361z00,
		BGl__rgczd2stopzd2matchz122189z12zz__rgcz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2288z00zz__rgcz00,
		BgL_bgl_string2288za700za7za7_2362za7, "/tmp/bigloo/runtime/Rgc/rgc.scm",
		31);
	      DEFINE_STRING(BGl_string2300z00zz__rgcz00,
		BgL_bgl_string2300za700za7za7_2363za7, "_rgc-buffer-substrin2174", 24);
	      DEFINE_STRING(BGl_string2290z00zz__rgcz00,
		BgL_bgl_string2290za700za7za7_2364za7, "input-port", 10);
	      DEFINE_STRING(BGl_string2289z00zz__rgcz00,
		BgL_bgl_string2289za700za7za7_2365za7, "_rgc-buffer-get-char2169", 24);
	      DEFINE_STRING(BGl_string2301z00zz__rgcz00,
		BgL_bgl_string2301za700za7za7_2366za7, "_rgc-buffer-escape-substring", 28);
	      DEFINE_STRING(BGl_string2291z00zz__rgcz00,
		BgL_bgl_string2291za700za7za7_2367za7, "_rgc-buffer-unget-ch2170", 24);
	      DEFINE_STRING(BGl_string2302z00zz__rgcz00,
		BgL_bgl_string2302za700za7za7_2368za7, "_rgc-buffer-length2175", 22);
	      DEFINE_STRING(BGl_string2292z00zz__rgcz00,
		BgL_bgl_string2292za700za7za7_2369za7, "int", 3);
	      DEFINE_STRING(BGl_string2303z00zz__rgcz00,
		BgL_bgl_string2303za700za7za7_2370za7, "_rgc-buffer-fixnum2176", 22);
	      DEFINE_STRING(BGl_string2293z00zz__rgcz00,
		BgL_bgl_string2293za700za7za7_2371za7, "_rgc-buffer-insert-substring!", 29);
	      DEFINE_STRING(BGl_string2304z00zz__rgcz00,
		BgL_bgl_string2304za700za7za7_2372za7, "_rgc-buffer-integer2177", 23);
	      DEFINE_STRING(BGl_string2294z00zz__rgcz00,
		BgL_bgl_string2294za700za7za7_2373za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2305z00zz__rgcz00,
		BgL_bgl_string2305za700za7za7_2374za7, "_rgc-buffer-flonum2178", 22);
	      DEFINE_STRING(BGl_string2295z00zz__rgcz00,
		BgL_bgl_string2295za700za7za7_2375za7, "long", 4);
	      DEFINE_STRING(BGl_string2306z00zz__rgcz00,
		BgL_bgl_string2306za700za7za7_2376za7, "_rgc-buffer-symbol2179", 22);
	      DEFINE_STRING(BGl_string2296z00zz__rgcz00,
		BgL_bgl_string2296za700za7za7_2377za7, "_rgc-buffer-insert-char!", 24);
	      DEFINE_STRING(BGl_string2307z00zz__rgcz00,
		BgL_bgl_string2307za700za7za7_2378za7, "_rgc-buffer-subsymbo2180", 24);
	      DEFINE_STRING(BGl_string2297z00zz__rgcz00,
		BgL_bgl_string2297za700za7za7_2379za7, "_rgc-buffer-characte2171", 24);
	      DEFINE_STRING(BGl_string2308z00zz__rgcz00,
		BgL_bgl_string2308za700za7za7_2380za7, "_rgc-buffer-downcase2181", 24);
	      DEFINE_STRING(BGl_string2298z00zz__rgcz00,
		BgL_bgl_string2298za700za7za7_2381za7, "_rgc-buffer-byte2172", 20);
	      DEFINE_STRING(BGl_string2310z00zz__rgcz00,
		BgL_bgl_string2310za700za7za7_2382za7, "_rgc-buffer-keyword2183", 23);
	      DEFINE_STRING(BGl_string2309z00zz__rgcz00,
		BgL_bgl_string2309za700za7za7_2383za7, "_rgc-buffer-upcase-s2182", 24);
	      DEFINE_STRING(BGl_string2299z00zz__rgcz00,
		BgL_bgl_string2299za700za7za7_2384za7, "_rgc-buffer-byte-ref2173", 24);
	      DEFINE_STRING(BGl_string2311z00zz__rgcz00,
		BgL_bgl_string2311za700za7za7_2385za7, "_rgc-buffer-downcase2184", 24);
	      DEFINE_STRING(BGl_string2312z00zz__rgcz00,
		BgL_bgl_string2312za700za7za7_2386za7, "_rgc-buffer-upcase-k2185", 24);
	      DEFINE_STRING(BGl_string2313z00zz__rgcz00,
		BgL_bgl_string2313za700za7za7_2387za7, "_rgc-buffer-position2186", 24);
	      DEFINE_STRING(BGl_string2314z00zz__rgcz00,
		BgL_bgl_string2314za700za7za7_2388za7, "_rgc-set-filepos!2187", 21);
	      DEFINE_STRING(BGl_string2315z00zz__rgcz00,
		BgL_bgl_string2315za700za7za7_2389za7, "_rgc-start-match!2188", 21);
	      DEFINE_STRING(BGl_string2316z00zz__rgcz00,
		BgL_bgl_string2316za700za7za7_2390za7, "_rgc-stop-match!2189", 20);
	      DEFINE_STRING(BGl_string2317z00zz__rgcz00,
		BgL_bgl_string2317za700za7za7_2391za7, "_rgc-buffer-empty?2190", 22);
	      DEFINE_STRING(BGl_string2318z00zz__rgcz00,
		BgL_bgl_string2318za700za7za7_2392za7, "_rgc-fill-buffer2191", 20);
	      DEFINE_STRING(BGl_string2320z00zz__rgcz00,
		BgL_bgl_string2320za700za7za7_2393za7, "_rgc-buffer-bol?2192", 20);
	      DEFINE_STRING(BGl_string2319z00zz__rgcz00,
		BgL_bgl_string2319za700za7za7_2394za7, "_rgc-fill-buffer-if-empty", 25);
	      DEFINE_STRING(BGl_string2321z00zz__rgcz00,
		BgL_bgl_string2321za700za7za7_2395za7, "_rgc-buffer-eol?2193", 20);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgczd2bufferzd2flonumzd2envzd2zz__rgcz00,
		BgL_bgl__rgcza7d2bufferza7d22396z00,
		BGl__rgczd2bufferzd2flonum2178z00zz__rgcz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2322z00zz__rgcz00,
		BgL_bgl_string2322za700za7za7_2397za7, "_rgc-buffer-bof?2194", 20);
	      DEFINE_STRING(BGl_string2323z00zz__rgcz00,
		BgL_bgl_string2323za700za7za7_2398za7, "_rgc-buffer-eof?2195", 20);
	      DEFINE_STRING(BGl_string2325z00zz__rgcz00,
		BgL_bgl_string2325za700za7za7_2399za7, "stop", 4);
	      DEFINE_STRING(BGl_string2327z00zz__rgcz00,
		BgL_bgl_string2327za700za7za7_2400za7, "start", 5);
	      DEFINE_STRING(BGl_string2330z00zz__rgcz00,
		BgL_bgl_string2330za700za7za7_2401za7, "_rgc-the-submatch", 17);
	      DEFINE_STRING(BGl_string2329z00zz__rgcz00,
		BgL_bgl_string2329za700za7za7_2402za7, "start*", 6);
	      DEFINE_STRING(BGl_string2331z00zz__rgcz00,
		BgL_bgl_string2331za700za7za7_2403za7, "__rgc", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rgczd2fillzd2bufferzd2ifzd2emptyzd2envzd2zz__rgcz00,
		BgL_bgl__rgcza7d2fillza7d2bu2404z00,
		BGl__rgczd2fillzd2bufferzd2ifzd2emptyz00zz__rgcz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__rgcz00(long
		BgL_checksumz00_1726, char *BgL_fromz00_1727)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__rgcz00))
				{
					BGl_requirezd2initializa7ationz75zz__rgcz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__rgcz00();
					BGl_importedzd2moduleszd2initz00zz__rgcz00();
					BGl_toplevelzd2initzd2zz__rgcz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__rgcz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 17 */
			BGl_symbol2324z00zz__rgcz00 =
				bstring_to_symbol(BGl_string2325z00zz__rgcz00);
			BGl_symbol2326z00zz__rgcz00 =
				bstring_to_symbol(BGl_string2327z00zz__rgcz00);
			return (BGl_symbol2328z00zz__rgcz00 =
				bstring_to_symbol(BGl_string2329z00zz__rgcz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__rgcz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 17 */
			return (BGl_za2unsafezd2rgcza2zd2zz__rgcz00 = BFALSE, BUNSPEC);
		}
	}



/* rgc-buffer-get-char */
	BGL_EXPORTED_DEF int BGl_rgczd2bufferzd2getzd2charzd2zz__rgcz00(obj_t
		BgL_inputzd2portzd2_1)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 228 */
			return RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1);
		}
	}



/* _rgc-buffer-get-char2169 */
	obj_t BGl__rgczd2bufferzd2getzd2char2169zd2zz__rgcz00(obj_t BgL_envz00_1510,
		obj_t BgL_inputzd2portzd2_1511)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 228 */
			{	/* Rgc/rgc.scm 229 */
				int BgL_auxz00_1738;

				{	/* Rgc/rgc.scm 229 */
					obj_t BgL_inputzd2portzd2_1682;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1511))
						{	/* Rgc/rgc.scm 229 */
							BgL_inputzd2portzd2_1682 = BgL_inputzd2portzd2_1511;
						}
					else
						{
							obj_t BgL_auxz00_1741;

							BgL_auxz00_1741 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 10679)), BGl_string2289z00zz__rgcz00,
								BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1511);
							FAILURE(BgL_auxz00_1741, BFALSE, BFALSE);
						}
					BgL_auxz00_1738 = RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1682);
				}
				return BINT(BgL_auxz00_1738);
			}
		}
	}



/* rgc-buffer-unget-char */
	BGL_EXPORTED_DEF int BGl_rgczd2bufferzd2ungetzd2charzd2zz__rgcz00(obj_t
		BgL_inputzd2portzd2_2, int BgL_charz00_3)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 234 */
			return rgc_buffer_unget_char(BgL_inputzd2portzd2_2, BgL_charz00_3);
		}
	}



/* _rgc-buffer-unget-ch2170 */
	obj_t BGl__rgczd2bufferzd2ungetzd2ch2170zd2zz__rgcz00(obj_t BgL_envz00_1512,
		obj_t BgL_inputzd2portzd2_1513, obj_t BgL_charz00_1514)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 234 */
			{	/* Rgc/rgc.scm 235 */
				int BgL_auxz00_1748;

				{	/* Rgc/rgc.scm 235 */
					obj_t BgL_inputzd2portzd2_1683;

					int BgL_charz00_1684;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1513))
						{	/* Rgc/rgc.scm 235 */
							BgL_inputzd2portzd2_1683 = BgL_inputzd2portzd2_1513;
						}
					else
						{
							obj_t BgL_auxz00_1751;

							BgL_auxz00_1751 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 10996)), BGl_string2291z00zz__rgcz00,
								BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1513);
							FAILURE(BgL_auxz00_1751, BFALSE, BFALSE);
						}
					{	/* Rgc/rgc.scm 235 */
						obj_t BgL_auxz00_1755;

						if (INTEGERP(BgL_charz00_1514))
							{	/* Rgc/rgc.scm 235 */
								BgL_auxz00_1755 = BgL_charz00_1514;
							}
						else
							{
								obj_t BgL_auxz00_1758;

								BgL_auxz00_1758 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
									BINT(((long) 10996)), BGl_string2291z00zz__rgcz00,
									BGl_string2292z00zz__rgcz00, BgL_charz00_1514);
								FAILURE(BgL_auxz00_1758, BFALSE, BFALSE);
							}
						BgL_charz00_1684 = CINT(BgL_auxz00_1755);
					}
					BgL_auxz00_1748 =
						rgc_buffer_unget_char(BgL_inputzd2portzd2_1683, BgL_charz00_1684);
				}
				return BINT(BgL_auxz00_1748);
			}
		}
	}



/* rgc-buffer-insert-substring! */
	BGL_EXPORTED_DEF bool_t
		BGl_rgczd2bufferzd2insertzd2substringz12zc0zz__rgcz00(obj_t
		BgL_inputzd2portzd2_4, obj_t BgL_strz00_5, long BgL_fromz00_6,
		long BgL_toz00_7)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 240 */
			return
				rgc_buffer_insert_substring(BgL_inputzd2portzd2_4, BgL_strz00_5,
				BgL_fromz00_6, BgL_toz00_7);
		}
	}



/* _rgc-buffer-insert-substring! */
	obj_t BGl__rgczd2bufferzd2insertzd2substringz12zc0zz__rgcz00(obj_t
		BgL_envz00_1515, obj_t BgL_inputzd2portzd2_1516, obj_t BgL_strz00_1517,
		obj_t BgL_fromz00_1518, obj_t BgL_toz00_1519)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 240 */
			{	/* Rgc/rgc.scm 241 */
				bool_t BgL_auxz00_1766;

				{	/* Rgc/rgc.scm 241 */
					obj_t BgL_inputzd2portzd2_1685;

					obj_t BgL_strz00_1686;

					long BgL_fromz00_1687;

					long BgL_toz00_1688;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1516))
						{	/* Rgc/rgc.scm 241 */
							BgL_inputzd2portzd2_1685 = BgL_inputzd2portzd2_1516;
						}
					else
						{
							obj_t BgL_auxz00_1769;

							BgL_auxz00_1769 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 11333)), BGl_string2293z00zz__rgcz00,
								BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1516);
							FAILURE(BgL_auxz00_1769, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_strz00_1517))
						{	/* Rgc/rgc.scm 241 */
							BgL_strz00_1686 = BgL_strz00_1517;
						}
					else
						{
							obj_t BgL_auxz00_1775;

							BgL_auxz00_1775 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 11333)), BGl_string2293z00zz__rgcz00,
								BGl_string2294z00zz__rgcz00, BgL_strz00_1517);
							FAILURE(BgL_auxz00_1775, BFALSE, BFALSE);
						}
					{	/* Rgc/rgc.scm 241 */
						obj_t BgL_auxz00_1779;

						if (INTEGERP(BgL_fromz00_1518))
							{	/* Rgc/rgc.scm 241 */
								BgL_auxz00_1779 = BgL_fromz00_1518;
							}
						else
							{
								obj_t BgL_auxz00_1782;

								BgL_auxz00_1782 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
									BINT(((long) 11333)), BGl_string2293z00zz__rgcz00,
									BGl_string2295z00zz__rgcz00, BgL_fromz00_1518);
								FAILURE(BgL_auxz00_1782, BFALSE, BFALSE);
							}
						BgL_fromz00_1687 = (long) CINT(BgL_auxz00_1779);
					}
					{	/* Rgc/rgc.scm 241 */
						obj_t BgL_auxz00_1787;

						if (INTEGERP(BgL_toz00_1519))
							{	/* Rgc/rgc.scm 241 */
								BgL_auxz00_1787 = BgL_toz00_1519;
							}
						else
							{
								obj_t BgL_auxz00_1790;

								BgL_auxz00_1790 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
									BINT(((long) 11333)), BGl_string2293z00zz__rgcz00,
									BGl_string2295z00zz__rgcz00, BgL_toz00_1519);
								FAILURE(BgL_auxz00_1790, BFALSE, BFALSE);
							}
						BgL_toz00_1688 = (long) CINT(BgL_auxz00_1787);
					}
					BgL_auxz00_1766 =
						rgc_buffer_insert_substring(BgL_inputzd2portzd2_1685,
						BgL_strz00_1686, BgL_fromz00_1687, BgL_toz00_1688);
				}
				return BBOOL(BgL_auxz00_1766);
			}
		}
	}



/* rgc-buffer-insert-char! */
	BGL_EXPORTED_DEF bool_t BGl_rgczd2bufferzd2insertzd2charz12zc0zz__rgcz00(obj_t
		BgL_inputzd2portzd2_8, long BgL_charz00_9)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 246 */
			return
				rgc_buffer_insert_char(BgL_inputzd2portzd2_8, (int) (BgL_charz00_9));
		}
	}



/* _rgc-buffer-insert-char! */
	obj_t BGl__rgczd2bufferzd2insertzd2charz12zc0zz__rgcz00(obj_t BgL_envz00_1520,
		obj_t BgL_inputzd2portzd2_1521, obj_t BgL_charz00_1522)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 246 */
			{	/* Rgc/rgc.scm 247 */
				bool_t BgL_auxz00_1799;

				{	/* Rgc/rgc.scm 247 */
					obj_t BgL_inputzd2portzd2_1689;

					long BgL_charz00_1690;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1521))
						{	/* Rgc/rgc.scm 247 */
							BgL_inputzd2portzd2_1689 = BgL_inputzd2portzd2_1521;
						}
					else
						{
							obj_t BgL_auxz00_1802;

							BgL_auxz00_1802 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 11671)), BGl_string2296z00zz__rgcz00,
								BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1521);
							FAILURE(BgL_auxz00_1802, BFALSE, BFALSE);
						}
					{	/* Rgc/rgc.scm 247 */
						obj_t BgL_auxz00_1806;

						if (INTEGERP(BgL_charz00_1522))
							{	/* Rgc/rgc.scm 247 */
								BgL_auxz00_1806 = BgL_charz00_1522;
							}
						else
							{
								obj_t BgL_auxz00_1809;

								BgL_auxz00_1809 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
									BINT(((long) 11671)), BGl_string2296z00zz__rgcz00,
									BGl_string2295z00zz__rgcz00, BgL_charz00_1522);
								FAILURE(BgL_auxz00_1809, BFALSE, BFALSE);
							}
						BgL_charz00_1690 = (long) CINT(BgL_auxz00_1806);
					}
					BgL_auxz00_1799 =
						rgc_buffer_insert_char(BgL_inputzd2portzd2_1689,
						(int) (BgL_charz00_1690));
				}
				return BBOOL(BgL_auxz00_1799);
			}
		}
	}



/* rgc-buffer-character */
	BGL_EXPORTED_DEF unsigned char BGl_rgczd2bufferzd2characterz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_10)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 252 */
			return RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_10);
		}
	}



/* _rgc-buffer-characte2171 */
	obj_t BGl__rgczd2bufferzd2characte2171z00zz__rgcz00(obj_t BgL_envz00_1523,
		obj_t BgL_inputzd2portzd2_1524)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 252 */
			{	/* Rgc/rgc.scm 253 */
				unsigned char BgL_auxz00_1818;

				{	/* Rgc/rgc.scm 253 */
					obj_t BgL_inputzd2portzd2_1691;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1524))
						{	/* Rgc/rgc.scm 253 */
							BgL_inputzd2portzd2_1691 = BgL_inputzd2portzd2_1524;
						}
					else
						{
							obj_t BgL_auxz00_1821;

							BgL_auxz00_1821 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 11989)), BGl_string2297z00zz__rgcz00,
								BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1524);
							FAILURE(BgL_auxz00_1821, BFALSE, BFALSE);
						}
					BgL_auxz00_1818 = RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_1691);
				}
				return BCHAR(BgL_auxz00_1818);
			}
		}
	}



/* rgc-buffer-byte */
	BGL_EXPORTED_DEF int BGl_rgczd2bufferzd2bytez00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_11)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 258 */
			return RGC_BUFFER_BYTE(BgL_inputzd2portzd2_11);
		}
	}



/* _rgc-buffer-byte2172 */
	obj_t BGl__rgczd2bufferzd2byte2172z00zz__rgcz00(obj_t BgL_envz00_1525,
		obj_t BgL_inputzd2portzd2_1526)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 258 */
			{	/* Rgc/rgc.scm 259 */
				int BgL_auxz00_1828;

				{	/* Rgc/rgc.scm 259 */
					obj_t BgL_inputzd2portzd2_1692;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1526))
						{	/* Rgc/rgc.scm 259 */
							BgL_inputzd2portzd2_1692 = BgL_inputzd2portzd2_1526;
						}
					else
						{
							obj_t BgL_auxz00_1831;

							BgL_auxz00_1831 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 12295)), BGl_string2298z00zz__rgcz00,
								BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1526);
							FAILURE(BgL_auxz00_1831, BFALSE, BFALSE);
						}
					BgL_auxz00_1828 = RGC_BUFFER_BYTE(BgL_inputzd2portzd2_1692);
				}
				return BINT(BgL_auxz00_1828);
			}
		}
	}



/* rgc-buffer-byte-ref */
	BGL_EXPORTED_DEF int BGl_rgczd2bufferzd2bytezd2refzd2zz__rgcz00(obj_t
		BgL_inputzd2portzd2_12, int BgL_offsetz00_13)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 264 */
			return RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12, BgL_offsetz00_13);
		}
	}



/* _rgc-buffer-byte-ref2173 */
	obj_t BGl__rgczd2bufferzd2bytezd2ref2173zd2zz__rgcz00(obj_t BgL_envz00_1527,
		obj_t BgL_inputzd2portzd2_1528, obj_t BgL_offsetz00_1529)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 264 */
			{	/* Rgc/rgc.scm 265 */
				int BgL_auxz00_1838;

				{	/* Rgc/rgc.scm 265 */
					obj_t BgL_inputzd2portzd2_1693;

					int BgL_offsetz00_1694;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1528))
						{	/* Rgc/rgc.scm 265 */
							BgL_inputzd2portzd2_1693 = BgL_inputzd2portzd2_1528;
						}
					else
						{
							obj_t BgL_auxz00_1841;

							BgL_auxz00_1841 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 12607)), BGl_string2299z00zz__rgcz00,
								BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1528);
							FAILURE(BgL_auxz00_1841, BFALSE, BFALSE);
						}
					{	/* Rgc/rgc.scm 265 */
						obj_t BgL_auxz00_1845;

						if (INTEGERP(BgL_offsetz00_1529))
							{	/* Rgc/rgc.scm 265 */
								BgL_auxz00_1845 = BgL_offsetz00_1529;
							}
						else
							{
								obj_t BgL_auxz00_1848;

								BgL_auxz00_1848 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
									BINT(((long) 12607)), BGl_string2299z00zz__rgcz00,
									BGl_string2292z00zz__rgcz00, BgL_offsetz00_1529);
								FAILURE(BgL_auxz00_1848, BFALSE, BFALSE);
							}
						BgL_offsetz00_1694 = CINT(BgL_auxz00_1845);
					}
					BgL_auxz00_1838 =
						RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1693, BgL_offsetz00_1694);
				}
				return BINT(BgL_auxz00_1838);
			}
		}
	}



/* rgc-buffer-substring */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2bufferzd2substringz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_14, long BgL_startz00_15, long BgL_stopz00_16)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 270 */
			return
				rgc_buffer_substring(BgL_inputzd2portzd2_14, BgL_startz00_15,
				BgL_stopz00_16);
		}
	}



/* _rgc-buffer-substrin2174 */
	obj_t BGl__rgczd2bufferzd2substrin2174z00zz__rgcz00(obj_t BgL_envz00_1530,
		obj_t BgL_inputzd2portzd2_1531, obj_t BgL_startz00_1532,
		obj_t BgL_stopz00_1533)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 270 */
			{	/* Rgc/rgc.scm 271 */
				obj_t BgL_inputzd2portzd2_1695;

				long BgL_startz00_1696;

				long BgL_stopz00_1697;

				if (INPUT_PORTP(BgL_inputzd2portzd2_1531))
					{	/* Rgc/rgc.scm 271 */
						BgL_inputzd2portzd2_1695 = BgL_inputzd2portzd2_1531;
					}
				else
					{
						obj_t BgL_auxz00_1858;

						BgL_auxz00_1858 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
							BINT(((long) 12935)), BGl_string2300z00zz__rgcz00,
							BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1531);
						FAILURE(BgL_auxz00_1858, BFALSE, BFALSE);
					}
				{	/* Rgc/rgc.scm 271 */
					obj_t BgL_auxz00_1862;

					if (INTEGERP(BgL_startz00_1532))
						{	/* Rgc/rgc.scm 271 */
							BgL_auxz00_1862 = BgL_startz00_1532;
						}
					else
						{
							obj_t BgL_auxz00_1865;

							BgL_auxz00_1865 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 12935)), BGl_string2300z00zz__rgcz00,
								BGl_string2295z00zz__rgcz00, BgL_startz00_1532);
							FAILURE(BgL_auxz00_1865, BFALSE, BFALSE);
						}
					BgL_startz00_1696 = (long) CINT(BgL_auxz00_1862);
				}
				{	/* Rgc/rgc.scm 271 */
					obj_t BgL_auxz00_1870;

					if (INTEGERP(BgL_stopz00_1533))
						{	/* Rgc/rgc.scm 271 */
							BgL_auxz00_1870 = BgL_stopz00_1533;
						}
					else
						{
							obj_t BgL_auxz00_1873;

							BgL_auxz00_1873 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 12935)), BGl_string2300z00zz__rgcz00,
								BGl_string2295z00zz__rgcz00, BgL_stopz00_1533);
							FAILURE(BgL_auxz00_1873, BFALSE, BFALSE);
						}
					BgL_stopz00_1697 = (long) CINT(BgL_auxz00_1870);
				}
				return
					rgc_buffer_substring(BgL_inputzd2portzd2_1695, BgL_startz00_1696,
					BgL_stopz00_1697);
			}
		}
	}



/* rgc-buffer-escape-substring */
	BGL_EXPORTED_DEF obj_t
		BGl_rgczd2bufferzd2escapezd2substringzd2zz__rgcz00(obj_t
		BgL_inputzd2portzd2_17, long BgL_startz00_18, long BgL_stopz00_19,
		bool_t BgL_strictz00_20)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 276 */
			return
				rgc_buffer_escape_substring(BgL_inputzd2portzd2_17, BgL_startz00_18,
				BgL_stopz00_19, BgL_strictz00_20);
		}
	}



/* _rgc-buffer-escape-substring */
	obj_t BGl__rgczd2bufferzd2escapezd2substringzd2zz__rgcz00(obj_t
		BgL_envz00_1534, obj_t BgL_inputzd2portzd2_1535, obj_t BgL_startz00_1536,
		obj_t BgL_stopz00_1537, obj_t BgL_strictz00_1538)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 276 */
			{	/* Rgc/rgc.scm 277 */
				obj_t BgL_inputzd2portzd2_1698;

				long BgL_startz00_1699;

				long BgL_stopz00_1700;

				bool_t BgL_strictz00_1701;

				if (INPUT_PORTP(BgL_inputzd2portzd2_1535))
					{	/* Rgc/rgc.scm 277 */
						BgL_inputzd2portzd2_1698 = BgL_inputzd2portzd2_1535;
					}
				else
					{
						obj_t BgL_auxz00_1882;

						BgL_auxz00_1882 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
							BINT(((long) 13282)), BGl_string2301z00zz__rgcz00,
							BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1535);
						FAILURE(BgL_auxz00_1882, BFALSE, BFALSE);
					}
				{	/* Rgc/rgc.scm 277 */
					obj_t BgL_auxz00_1886;

					if (INTEGERP(BgL_startz00_1536))
						{	/* Rgc/rgc.scm 277 */
							BgL_auxz00_1886 = BgL_startz00_1536;
						}
					else
						{
							obj_t BgL_auxz00_1889;

							BgL_auxz00_1889 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 13282)), BGl_string2301z00zz__rgcz00,
								BGl_string2295z00zz__rgcz00, BgL_startz00_1536);
							FAILURE(BgL_auxz00_1889, BFALSE, BFALSE);
						}
					BgL_startz00_1699 = (long) CINT(BgL_auxz00_1886);
				}
				{	/* Rgc/rgc.scm 277 */
					obj_t BgL_auxz00_1894;

					if (INTEGERP(BgL_stopz00_1537))
						{	/* Rgc/rgc.scm 277 */
							BgL_auxz00_1894 = BgL_stopz00_1537;
						}
					else
						{
							obj_t BgL_auxz00_1897;

							BgL_auxz00_1897 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 13282)), BGl_string2301z00zz__rgcz00,
								BGl_string2295z00zz__rgcz00, BgL_stopz00_1537);
							FAILURE(BgL_auxz00_1897, BFALSE, BFALSE);
						}
					BgL_stopz00_1700 = (long) CINT(BgL_auxz00_1894);
				}
				BgL_strictz00_1701 = CBOOL(BgL_strictz00_1538);
				return
					rgc_buffer_escape_substring(BgL_inputzd2portzd2_1698,
					BgL_startz00_1699, BgL_stopz00_1700, BgL_strictz00_1701);
			}
		}
	}



/* rgc-buffer-length */
	BGL_EXPORTED_DEF long BGl_rgczd2bufferzd2lengthz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_21)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 282 */
			return RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_21);
		}
	}



/* _rgc-buffer-length2175 */
	obj_t BGl__rgczd2bufferzd2length2175z00zz__rgcz00(obj_t BgL_envz00_1539,
		obj_t BgL_inputzd2portzd2_1540)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 282 */
			{	/* Rgc/rgc.scm 283 */
				long BgL_auxz00_1905;

				{	/* Rgc/rgc.scm 283 */
					obj_t BgL_inputzd2portzd2_1702;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1540))
						{	/* Rgc/rgc.scm 283 */
							BgL_inputzd2portzd2_1702 = BgL_inputzd2portzd2_1540;
						}
					else
						{
							obj_t BgL_auxz00_1908;

							BgL_auxz00_1908 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 13633)), BGl_string2302z00zz__rgcz00,
								BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1540);
							FAILURE(BgL_auxz00_1908, BFALSE, BFALSE);
						}
					BgL_auxz00_1905 = RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_1702);
				}
				return BINT(BgL_auxz00_1905);
			}
		}
	}



/* rgc-buffer-fixnum */
	BGL_EXPORTED_DEF long BGl_rgczd2bufferzd2fixnumz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_22)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 288 */
			return rgc_buffer_fixnum(BgL_inputzd2portzd2_22);
		}
	}



/* _rgc-buffer-fixnum2176 */
	obj_t BGl__rgczd2bufferzd2fixnum2176z00zz__rgcz00(obj_t BgL_envz00_1541,
		obj_t BgL_inputzd2portzd2_1542)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 288 */
			{	/* Rgc/rgc.scm 289 */
				long BgL_auxz00_1915;

				{	/* Rgc/rgc.scm 289 */
					obj_t BgL_inputzd2portzd2_1703;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1542))
						{	/* Rgc/rgc.scm 289 */
							BgL_inputzd2portzd2_1703 = BgL_inputzd2portzd2_1542;
						}
					else
						{
							obj_t BgL_auxz00_1918;

							BgL_auxz00_1918 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 13956)), BGl_string2303z00zz__rgcz00,
								BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1542);
							FAILURE(BgL_auxz00_1918, BFALSE, BFALSE);
						}
					BgL_auxz00_1915 = rgc_buffer_fixnum(BgL_inputzd2portzd2_1703);
				}
				return BINT(BgL_auxz00_1915);
			}
		}
	}



/* rgc-buffer-integer */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2bufferzd2integerz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_23)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 294 */
			return rgc_buffer_integer(BgL_inputzd2portzd2_23);
		}
	}



/* _rgc-buffer-integer2177 */
	obj_t BGl__rgczd2bufferzd2integer2177z00zz__rgcz00(obj_t BgL_envz00_1543,
		obj_t BgL_inputzd2portzd2_1544)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 294 */
			{	/* Rgc/rgc.scm 295 */
				obj_t BgL_inputzd2portzd2_1704;

				if (INPUT_PORTP(BgL_inputzd2portzd2_1544))
					{	/* Rgc/rgc.scm 295 */
						BgL_inputzd2portzd2_1704 = BgL_inputzd2portzd2_1544;
					}
				else
					{
						obj_t BgL_auxz00_1927;

						BgL_auxz00_1927 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
							BINT(((long) 14279)), BGl_string2304z00zz__rgcz00,
							BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1544);
						FAILURE(BgL_auxz00_1927, BFALSE, BFALSE);
					}
				return rgc_buffer_integer(BgL_inputzd2portzd2_1704);
			}
		}
	}



/* rgc-buffer-flonum */
	BGL_EXPORTED_DEF double BGl_rgczd2bufferzd2flonumz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_24)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 300 */
			return rgc_buffer_flonum(BgL_inputzd2portzd2_24);
		}
	}



/* _rgc-buffer-flonum2178 */
	obj_t BGl__rgczd2bufferzd2flonum2178z00zz__rgcz00(obj_t BgL_envz00_1545,
		obj_t BgL_inputzd2portzd2_1546)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 300 */
			{	/* Rgc/rgc.scm 301 */
				double BgL_auxz00_1933;

				{	/* Rgc/rgc.scm 301 */
					obj_t BgL_inputzd2portzd2_1705;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1546))
						{	/* Rgc/rgc.scm 301 */
							BgL_inputzd2portzd2_1705 = BgL_inputzd2portzd2_1546;
						}
					else
						{
							obj_t BgL_auxz00_1936;

							BgL_auxz00_1936 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 14605)), BGl_string2305z00zz__rgcz00,
								BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1546);
							FAILURE(BgL_auxz00_1936, BFALSE, BFALSE);
						}
					BgL_auxz00_1933 = rgc_buffer_flonum(BgL_inputzd2portzd2_1705);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_1933);
			}
		}
	}



/* rgc-buffer-symbol */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2bufferzd2symbolz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_25)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 306 */
			return rgc_buffer_symbol(BgL_inputzd2portzd2_25);
		}
	}



/* _rgc-buffer-symbol2179 */
	obj_t BGl__rgczd2bufferzd2symbol2179z00zz__rgcz00(obj_t BgL_envz00_1547,
		obj_t BgL_inputzd2portzd2_1548)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 306 */
			{	/* Rgc/rgc.scm 307 */
				obj_t BgL_inputzd2portzd2_1706;

				if (INPUT_PORTP(BgL_inputzd2portzd2_1548))
					{	/* Rgc/rgc.scm 307 */
						BgL_inputzd2portzd2_1706 = BgL_inputzd2portzd2_1548;
					}
				else
					{
						obj_t BgL_auxz00_1945;

						BgL_auxz00_1945 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
							BINT(((long) 14930)), BGl_string2306z00zz__rgcz00,
							BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1548);
						FAILURE(BgL_auxz00_1945, BFALSE, BFALSE);
					}
				return rgc_buffer_symbol(BgL_inputzd2portzd2_1706);
			}
		}
	}



/* rgc-buffer-subsymbol */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2bufferzd2subsymbolz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_26, long BgL_startz00_27, long BgL_stopz00_28)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 312 */
			return
				rgc_buffer_subsymbol(BgL_inputzd2portzd2_26, BgL_startz00_27,
				BgL_stopz00_28);
		}
	}



/* _rgc-buffer-subsymbo2180 */
	obj_t BGl__rgczd2bufferzd2subsymbo2180z00zz__rgcz00(obj_t BgL_envz00_1549,
		obj_t BgL_inputzd2portzd2_1550, obj_t BgL_startz00_1551,
		obj_t BgL_stopz00_1552)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 312 */
			{	/* Rgc/rgc.scm 313 */
				obj_t BgL_inputzd2portzd2_1707;

				long BgL_startz00_1708;

				long BgL_stopz00_1709;

				if (INPUT_PORTP(BgL_inputzd2portzd2_1550))
					{	/* Rgc/rgc.scm 313 */
						BgL_inputzd2portzd2_1707 = BgL_inputzd2portzd2_1550;
					}
				else
					{
						obj_t BgL_auxz00_1953;

						BgL_auxz00_1953 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
							BINT(((long) 15249)), BGl_string2307z00zz__rgcz00,
							BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1550);
						FAILURE(BgL_auxz00_1953, BFALSE, BFALSE);
					}
				{	/* Rgc/rgc.scm 313 */
					obj_t BgL_auxz00_1957;

					if (INTEGERP(BgL_startz00_1551))
						{	/* Rgc/rgc.scm 313 */
							BgL_auxz00_1957 = BgL_startz00_1551;
						}
					else
						{
							obj_t BgL_auxz00_1960;

							BgL_auxz00_1960 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 15249)), BGl_string2307z00zz__rgcz00,
								BGl_string2295z00zz__rgcz00, BgL_startz00_1551);
							FAILURE(BgL_auxz00_1960, BFALSE, BFALSE);
						}
					BgL_startz00_1708 = (long) CINT(BgL_auxz00_1957);
				}
				{	/* Rgc/rgc.scm 313 */
					obj_t BgL_auxz00_1965;

					if (INTEGERP(BgL_stopz00_1552))
						{	/* Rgc/rgc.scm 313 */
							BgL_auxz00_1965 = BgL_stopz00_1552;
						}
					else
						{
							obj_t BgL_auxz00_1968;

							BgL_auxz00_1968 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 15249)), BGl_string2307z00zz__rgcz00,
								BGl_string2295z00zz__rgcz00, BgL_stopz00_1552);
							FAILURE(BgL_auxz00_1968, BFALSE, BFALSE);
						}
					BgL_stopz00_1709 = (long) CINT(BgL_auxz00_1965);
				}
				return
					rgc_buffer_subsymbol(BgL_inputzd2portzd2_1707, BgL_startz00_1708,
					BgL_stopz00_1709);
			}
		}
	}



/* rgc-buffer-downcase-symbol */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2bufferzd2downcasezd2symbolzd2zz__rgcz00(obj_t
		BgL_inputzd2portzd2_29)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 318 */
			return rgc_buffer_downcase_symbol(BgL_inputzd2portzd2_29);
		}
	}



/* _rgc-buffer-downcase2181 */
	obj_t BGl__rgczd2bufferzd2downcase2181z00zz__rgcz00(obj_t BgL_envz00_1553,
		obj_t BgL_inputzd2portzd2_1554)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 318 */
			{	/* Rgc/rgc.scm 319 */
				obj_t BgL_inputzd2portzd2_1710;

				if (INPUT_PORTP(BgL_inputzd2portzd2_1554))
					{	/* Rgc/rgc.scm 319 */
						BgL_inputzd2portzd2_1710 = BgL_inputzd2portzd2_1554;
					}
				else
					{
						obj_t BgL_auxz00_1977;

						BgL_auxz00_1977 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
							BINT(((long) 15597)), BGl_string2308z00zz__rgcz00,
							BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1554);
						FAILURE(BgL_auxz00_1977, BFALSE, BFALSE);
					}
				return rgc_buffer_downcase_symbol(BgL_inputzd2portzd2_1710);
			}
		}
	}



/* rgc-buffer-upcase-symbol */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2bufferzd2upcasezd2symbolzd2zz__rgcz00(obj_t
		BgL_inputzd2portzd2_30)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 324 */
			return rgc_buffer_upcase_symbol(BgL_inputzd2portzd2_30);
		}
	}



/* _rgc-buffer-upcase-s2182 */
	obj_t BGl__rgczd2bufferzd2upcasezd2s2182zd2zz__rgcz00(obj_t BgL_envz00_1555,
		obj_t BgL_inputzd2portzd2_1556)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 324 */
			{	/* Rgc/rgc.scm 325 */
				obj_t BgL_inputzd2portzd2_1711;

				if (INPUT_PORTP(BgL_inputzd2portzd2_1556))
					{	/* Rgc/rgc.scm 325 */
						BgL_inputzd2portzd2_1711 = BgL_inputzd2portzd2_1556;
					}
				else
					{
						obj_t BgL_auxz00_1985;

						BgL_auxz00_1985 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
							BINT(((long) 15938)), BGl_string2309z00zz__rgcz00,
							BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1556);
						FAILURE(BgL_auxz00_1985, BFALSE, BFALSE);
					}
				return rgc_buffer_upcase_symbol(BgL_inputzd2portzd2_1711);
			}
		}
	}



/* rgc-buffer-keyword */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2bufferzd2keywordz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_31)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 330 */
			return rgc_buffer_keyword(BgL_inputzd2portzd2_31);
		}
	}



/* _rgc-buffer-keyword2183 */
	obj_t BGl__rgczd2bufferzd2keyword2183z00zz__rgcz00(obj_t BgL_envz00_1557,
		obj_t BgL_inputzd2portzd2_1558)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 330 */
			{	/* Rgc/rgc.scm 331 */
				obj_t BgL_inputzd2portzd2_1712;

				if (INPUT_PORTP(BgL_inputzd2portzd2_1558))
					{	/* Rgc/rgc.scm 331 */
						BgL_inputzd2portzd2_1712 = BgL_inputzd2portzd2_1558;
					}
				else
					{
						obj_t BgL_auxz00_1993;

						BgL_auxz00_1993 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
							BINT(((long) 16272)), BGl_string2310z00zz__rgcz00,
							BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1558);
						FAILURE(BgL_auxz00_1993, BFALSE, BFALSE);
					}
				return rgc_buffer_keyword(BgL_inputzd2portzd2_1712);
			}
		}
	}



/* rgc-buffer-downcase-keyword */
	BGL_EXPORTED_DEF obj_t
		BGl_rgczd2bufferzd2downcasezd2keywordzd2zz__rgcz00(obj_t
		BgL_inputzd2portzd2_32)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 336 */
			return rgc_buffer_downcase_keyword(BgL_inputzd2portzd2_32);
		}
	}



/* _rgc-buffer-downcase2184 */
	obj_t BGl__rgczd2bufferzd2downcase2184z00zz__rgcz00(obj_t BgL_envz00_1559,
		obj_t BgL_inputzd2portzd2_1560)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 336 */
			{	/* Rgc/rgc.scm 337 */
				obj_t BgL_inputzd2portzd2_1713;

				if (INPUT_PORTP(BgL_inputzd2portzd2_1560))
					{	/* Rgc/rgc.scm 337 */
						BgL_inputzd2portzd2_1713 = BgL_inputzd2portzd2_1560;
					}
				else
					{
						obj_t BgL_auxz00_2001;

						BgL_auxz00_2001 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
							BINT(((long) 16609)), BGl_string2311z00zz__rgcz00,
							BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1560);
						FAILURE(BgL_auxz00_2001, BFALSE, BFALSE);
					}
				return rgc_buffer_downcase_keyword(BgL_inputzd2portzd2_1713);
			}
		}
	}



/* rgc-buffer-upcase-keyword */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2bufferzd2upcasezd2keywordzd2zz__rgcz00(obj_t
		BgL_inputzd2portzd2_33)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 342 */
			return rgc_buffer_upcase_keyword(BgL_inputzd2portzd2_33);
		}
	}



/* _rgc-buffer-upcase-k2185 */
	obj_t BGl__rgczd2bufferzd2upcasezd2k2185zd2zz__rgcz00(obj_t BgL_envz00_1561,
		obj_t BgL_inputzd2portzd2_1562)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 342 */
			{	/* Rgc/rgc.scm 343 */
				obj_t BgL_inputzd2portzd2_1714;

				if (INPUT_PORTP(BgL_inputzd2portzd2_1562))
					{	/* Rgc/rgc.scm 343 */
						BgL_inputzd2portzd2_1714 = BgL_inputzd2portzd2_1562;
					}
				else
					{
						obj_t BgL_auxz00_2009;

						BgL_auxz00_2009 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
							BINT(((long) 16953)), BGl_string2312z00zz__rgcz00,
							BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1562);
						FAILURE(BgL_auxz00_2009, BFALSE, BFALSE);
					}
				return rgc_buffer_upcase_keyword(BgL_inputzd2portzd2_1714);
			}
		}
	}



/* rgc-buffer-position */
	BGL_EXPORTED_DEF long BGl_rgczd2bufferzd2positionz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_34)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 348 */
			return RGC_BUFFER_POSITION(BgL_inputzd2portzd2_34);
		}
	}



/* _rgc-buffer-position2186 */
	obj_t BGl__rgczd2bufferzd2position2186z00zz__rgcz00(obj_t BgL_envz00_1563,
		obj_t BgL_inputzd2portzd2_1564)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 348 */
			{	/* Rgc/rgc.scm 349 */
				long BgL_auxz00_2015;

				{	/* Rgc/rgc.scm 349 */
					obj_t BgL_inputzd2portzd2_1715;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1564))
						{	/* Rgc/rgc.scm 349 */
							BgL_inputzd2portzd2_1715 = BgL_inputzd2portzd2_1564;
						}
					else
						{
							obj_t BgL_auxz00_2018;

							BgL_auxz00_2018 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 17286)), BGl_string2313z00zz__rgcz00,
								BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1564);
							FAILURE(BgL_auxz00_2018, BFALSE, BFALSE);
						}
					BgL_auxz00_2015 = RGC_BUFFER_POSITION(BgL_inputzd2portzd2_1715);
				}
				return BINT(BgL_auxz00_2015);
			}
		}
	}



/* rgc-set-filepos! */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2setzd2fileposz12z12zz__rgcz00(obj_t
		BgL_inputzd2portzd2_35)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 354 */
			return BINT(RGC_SET_FILEPOS(BgL_inputzd2portzd2_35));
		}
	}



/* _rgc-set-filepos!2187 */
	obj_t BGl__rgczd2setzd2fileposz122187z12zz__rgcz00(obj_t BgL_envz00_1565,
		obj_t BgL_inputzd2portzd2_1566)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 354 */
			{	/* Rgc/rgc.scm 355 */
				obj_t BgL_inputzd2portzd2_1716;

				if (INPUT_PORTP(BgL_inputzd2portzd2_1566))
					{	/* Rgc/rgc.scm 355 */
						BgL_inputzd2portzd2_1716 = BgL_inputzd2portzd2_1566;
					}
				else
					{
						obj_t BgL_auxz00_2028;

						BgL_auxz00_2028 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
							BINT(((long) 17604)), BGl_string2314z00zz__rgcz00,
							BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1566);
						FAILURE(BgL_auxz00_2028, BFALSE, BFALSE);
					}
				return BINT(RGC_SET_FILEPOS(BgL_inputzd2portzd2_1716));
			}
		}
	}



/* rgc-start-match! */
	BGL_EXPORTED_DEF long BGl_rgczd2startzd2matchz12z12zz__rgcz00(obj_t
		BgL_inputzd2portzd2_36)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 360 */
			return RGC_START_MATCH(BgL_inputzd2portzd2_36);
		}
	}



/* _rgc-start-match!2188 */
	obj_t BGl__rgczd2startzd2matchz122188z12zz__rgcz00(obj_t BgL_envz00_1567,
		obj_t BgL_inputzd2portzd2_1568)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 360 */
			{	/* Rgc/rgc.scm 361 */
				long BgL_auxz00_2035;

				{	/* Rgc/rgc.scm 361 */
					obj_t BgL_inputzd2portzd2_1717;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1568))
						{	/* Rgc/rgc.scm 361 */
							BgL_inputzd2portzd2_1717 = BgL_inputzd2portzd2_1568;
						}
					else
						{
							obj_t BgL_auxz00_2038;

							BgL_auxz00_2038 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 17907)), BGl_string2315z00zz__rgcz00,
								BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1568);
							FAILURE(BgL_auxz00_2038, BFALSE, BFALSE);
						}
					BgL_auxz00_2035 = RGC_START_MATCH(BgL_inputzd2portzd2_1717);
				}
				return BINT(BgL_auxz00_2035);
			}
		}
	}



/* rgc-stop-match! */
	BGL_EXPORTED_DEF long BGl_rgczd2stopzd2matchz12z12zz__rgcz00(obj_t
		BgL_inputzd2portzd2_37)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 366 */
			return RGC_STOP_MATCH(BgL_inputzd2portzd2_37);
		}
	}



/* _rgc-stop-match!2189 */
	obj_t BGl__rgczd2stopzd2matchz122189z12zz__rgcz00(obj_t BgL_envz00_1569,
		obj_t BgL_inputzd2portzd2_1570)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 366 */
			{	/* Rgc/rgc.scm 367 */
				long BgL_auxz00_2045;

				{	/* Rgc/rgc.scm 367 */
					obj_t BgL_inputzd2portzd2_1718;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1570))
						{	/* Rgc/rgc.scm 367 */
							BgL_inputzd2portzd2_1718 = BgL_inputzd2portzd2_1570;
						}
					else
						{
							obj_t BgL_auxz00_2048;

							BgL_auxz00_2048 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 18209)), BGl_string2316z00zz__rgcz00,
								BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1570);
							FAILURE(BgL_auxz00_2048, BFALSE, BFALSE);
						}
					BgL_auxz00_2045 = RGC_STOP_MATCH(BgL_inputzd2portzd2_1718);
				}
				return BINT(BgL_auxz00_2045);
			}
		}
	}



/* rgc-buffer-empty? */
	BGL_EXPORTED_DEF bool_t BGl_rgczd2bufferzd2emptyzf3zf3zz__rgcz00(obj_t
		BgL_inputzd2portzd2_38)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 372 */
			return RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_38);
		}
	}



/* _rgc-buffer-empty?2190 */
	obj_t BGl__rgczd2bufferzd2emptyzf32190zf3zz__rgcz00(obj_t BgL_envz00_1571,
		obj_t BgL_inputzd2portzd2_1572)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 372 */
			{	/* Rgc/rgc.scm 373 */
				bool_t BgL_auxz00_2055;

				{	/* Rgc/rgc.scm 373 */
					obj_t BgL_inputzd2portzd2_1719;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1572))
						{	/* Rgc/rgc.scm 373 */
							BgL_inputzd2portzd2_1719 = BgL_inputzd2portzd2_1572;
						}
					else
						{
							obj_t BgL_auxz00_2058;

							BgL_auxz00_2058 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 18530)), BGl_string2317z00zz__rgcz00,
								BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1572);
							FAILURE(BgL_auxz00_2058, BFALSE, BFALSE);
						}
					BgL_auxz00_2055 = RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1719);
				}
				return BBOOL(BgL_auxz00_2055);
			}
		}
	}



/* rgc-fill-buffer */
	BGL_EXPORTED_DEF bool_t BGl_rgczd2fillzd2bufferz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_39)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 378 */
			return rgc_fill_buffer(BgL_inputzd2portzd2_39);
		}
	}



/* _rgc-fill-buffer2191 */
	obj_t BGl__rgczd2fillzd2buffer2191z00zz__rgcz00(obj_t BgL_envz00_1573,
		obj_t BgL_inputzd2portzd2_1574)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 378 */
			{	/* Rgc/rgc.scm 379 */
				bool_t BgL_auxz00_2065;

				{	/* Rgc/rgc.scm 379 */
					obj_t BgL_inputzd2portzd2_1720;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1574))
						{	/* Rgc/rgc.scm 379 */
							BgL_inputzd2portzd2_1720 = BgL_inputzd2portzd2_1574;
						}
					else
						{
							obj_t BgL_auxz00_2068;

							BgL_auxz00_2068 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 18851)), BGl_string2318z00zz__rgcz00,
								BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1574);
							FAILURE(BgL_auxz00_2068, BFALSE, BFALSE);
						}
					BgL_auxz00_2065 = rgc_fill_buffer(BgL_inputzd2portzd2_1720);
				}
				return BBOOL(BgL_auxz00_2065);
			}
		}
	}



/* rgc-fill-buffer-if-empty */
	BGL_EXPORTED_DEF bool_t
		BGl_rgczd2fillzd2bufferzd2ifzd2emptyz00zz__rgcz00(obj_t
		BgL_inputzd2portzd2_40)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 384 */
			if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_40))
				{	/* Rgc/rgc.scm 385 */
					return rgc_fill_buffer(BgL_inputzd2portzd2_40);
				}
			else
				{	/* Rgc/rgc.scm 385 */
					return ((bool_t) 0);
				}
		}
	}



/* _rgc-fill-buffer-if-empty */
	obj_t BGl__rgczd2fillzd2bufferzd2ifzd2emptyz00zz__rgcz00(obj_t
		BgL_envz00_1575, obj_t BgL_inputzd2portzd2_1576)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 384 */
			{	/* Rgc/rgc.scm 385 */
				bool_t BgL_auxz00_2077;

				{	/* Rgc/rgc.scm 385 */
					obj_t BgL_inputzd2portzd2_1721;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1576))
						{	/* Rgc/rgc.scm 385 */
							BgL_inputzd2portzd2_1721 = BgL_inputzd2portzd2_1576;
						}
					else
						{
							obj_t BgL_auxz00_2080;

							BgL_auxz00_2080 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 19184)), BGl_string2319z00zz__rgcz00,
								BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1576);
							FAILURE(BgL_auxz00_2080, BFALSE, BFALSE);
						}
					if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1721))
						{	/* Rgc/rgc.scm 385 */
							BgL_auxz00_2077 = rgc_fill_buffer(BgL_inputzd2portzd2_1721);
						}
					else
						{	/* Rgc/rgc.scm 385 */
							BgL_auxz00_2077 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_auxz00_2077);
			}
		}
	}



/* rgc-buffer-bol? */
	BGL_EXPORTED_DEF bool_t BGl_rgczd2bufferzd2bolzf3zf3zz__rgcz00(obj_t
		BgL_inputzd2portzd2_41)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 390 */
			return rgc_buffer_bol_p(BgL_inputzd2portzd2_41);
		}
	}



/* _rgc-buffer-bol?2192 */
	obj_t BGl__rgczd2bufferzd2bolzf32192zf3zz__rgcz00(obj_t BgL_envz00_1577,
		obj_t BgL_inputzd2portzd2_1578)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 390 */
			{	/* Rgc/rgc.scm 391 */
				bool_t BgL_auxz00_2089;

				{	/* Rgc/rgc.scm 391 */
					obj_t BgL_inputzd2portzd2_1722;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1578))
						{	/* Rgc/rgc.scm 391 */
							BgL_inputzd2portzd2_1722 = BgL_inputzd2portzd2_1578;
						}
					else
						{
							obj_t BgL_auxz00_2092;

							BgL_auxz00_2092 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 19534)), BGl_string2320z00zz__rgcz00,
								BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1578);
							FAILURE(BgL_auxz00_2092, BFALSE, BFALSE);
						}
					BgL_auxz00_2089 = rgc_buffer_bol_p(BgL_inputzd2portzd2_1722);
				}
				return BBOOL(BgL_auxz00_2089);
			}
		}
	}



/* rgc-buffer-eol? */
	BGL_EXPORTED_DEF bool_t BGl_rgczd2bufferzd2eolzf3zf3zz__rgcz00(obj_t
		BgL_inputzd2portzd2_42)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 396 */
			return rgc_buffer_eol_p(BgL_inputzd2portzd2_42);
		}
	}



/* _rgc-buffer-eol?2193 */
	obj_t BGl__rgczd2bufferzd2eolzf32193zf3zz__rgcz00(obj_t BgL_envz00_1579,
		obj_t BgL_inputzd2portzd2_1580)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 396 */
			{	/* Rgc/rgc.scm 397 */
				bool_t BgL_auxz00_2099;

				{	/* Rgc/rgc.scm 397 */
					obj_t BgL_inputzd2portzd2_1723;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1580))
						{	/* Rgc/rgc.scm 397 */
							BgL_inputzd2portzd2_1723 = BgL_inputzd2portzd2_1580;
						}
					else
						{
							obj_t BgL_auxz00_2102;

							BgL_auxz00_2102 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 19853)), BGl_string2321z00zz__rgcz00,
								BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1580);
							FAILURE(BgL_auxz00_2102, BFALSE, BFALSE);
						}
					BgL_auxz00_2099 = rgc_buffer_eol_p(BgL_inputzd2portzd2_1723);
				}
				return BBOOL(BgL_auxz00_2099);
			}
		}
	}



/* rgc-buffer-bof? */
	BGL_EXPORTED_DEF bool_t BGl_rgczd2bufferzd2bofzf3zf3zz__rgcz00(obj_t
		BgL_inputzd2portzd2_43)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 402 */
			return rgc_buffer_bof_p(BgL_inputzd2portzd2_43);
		}
	}



/* _rgc-buffer-bof?2194 */
	obj_t BGl__rgczd2bufferzd2bofzf32194zf3zz__rgcz00(obj_t BgL_envz00_1581,
		obj_t BgL_inputzd2portzd2_1582)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 402 */
			{	/* Rgc/rgc.scm 403 */
				bool_t BgL_auxz00_2109;

				{	/* Rgc/rgc.scm 403 */
					obj_t BgL_inputzd2portzd2_1724;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1582))
						{	/* Rgc/rgc.scm 403 */
							BgL_inputzd2portzd2_1724 = BgL_inputzd2portzd2_1582;
						}
					else
						{
							obj_t BgL_auxz00_2112;

							BgL_auxz00_2112 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 20172)), BGl_string2322z00zz__rgcz00,
								BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1582);
							FAILURE(BgL_auxz00_2112, BFALSE, BFALSE);
						}
					BgL_auxz00_2109 = rgc_buffer_bof_p(BgL_inputzd2portzd2_1724);
				}
				return BBOOL(BgL_auxz00_2109);
			}
		}
	}



/* rgc-buffer-eof? */
	BGL_EXPORTED_DEF bool_t BGl_rgczd2bufferzd2eofzf3zf3zz__rgcz00(obj_t
		BgL_inputzd2portzd2_44)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 408 */
			return rgc_buffer_eof_p(BgL_inputzd2portzd2_44);
		}
	}



/* _rgc-buffer-eof?2195 */
	obj_t BGl__rgczd2bufferzd2eofzf32195zf3zz__rgcz00(obj_t BgL_envz00_1583,
		obj_t BgL_inputzd2portzd2_1584)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 408 */
			{	/* Rgc/rgc.scm 409 */
				bool_t BgL_auxz00_2119;

				{	/* Rgc/rgc.scm 409 */
					obj_t BgL_inputzd2portzd2_1725;

					if (INPUT_PORTP(BgL_inputzd2portzd2_1584))
						{	/* Rgc/rgc.scm 409 */
							BgL_inputzd2portzd2_1725 = BgL_inputzd2portzd2_1584;
						}
					else
						{
							obj_t BgL_auxz00_2122;

							BgL_auxz00_2122 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 20491)), BGl_string2323z00zz__rgcz00,
								BGl_string2290z00zz__rgcz00, BgL_inputzd2portzd2_1584);
							FAILURE(BgL_auxz00_2122, BFALSE, BFALSE);
						}
					BgL_auxz00_2119 = rgc_buffer_eof_p(BgL_inputzd2portzd2_1725);
				}
				return BBOOL(BgL_auxz00_2119);
			}
		}
	}



/* rgc-the-submatch */
	BGL_EXPORTED_DEF obj_t BGl_rgczd2thezd2submatchz00zz__rgcz00(obj_t
		BgL_rgczd2submatcheszd2_45, long BgL_posz00_46, long BgL_matchz00_47,
		long BgL_submatchz00_48)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 418 */
			{
				obj_t BgL_submatchesz00_816;

				long BgL_startz00_817;

				obj_t BgL_stopz00_818;

				BgL_submatchesz00_816 = BgL_rgczd2submatcheszd2_45;
				BgL_startz00_817 = ((long) -1);
				BgL_stopz00_818 = BINT(((long) -1));
			BgL_zc3anonymousza31896ze3z83_819:
				if (NULLP(BgL_submatchesz00_816))
					{	/* Rgc/rgc.scm 427 */
						{	/* Rgc/rgc.scm 428 */
							int BgL_auxz00_2130;

							BgL_auxz00_2130 = (int) (((long) 2));
							BGL_MVALUES_NUMBER_SET(BgL_auxz00_2130);
						}
						{	/* Rgc/rgc.scm 428 */
							int BgL_auxz00_2133;

							BgL_auxz00_2133 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_auxz00_2133, BgL_stopz00_818);
						}
						return BINT(BgL_startz00_817);
					}
				else
					{	/* Rgc/rgc.scm 429 */
						obj_t BgL_mvz00_823;

						BgL_mvz00_823 = CAR(BgL_submatchesz00_816);
						{	/* Rgc/rgc.scm 429 */
							obj_t BgL_ruz00_824;

							BgL_ruz00_824 = VECTOR_REF(BgL_mvz00_823, (int) (((long) 0)));
							{	/* Rgc/rgc.scm 430 */
								obj_t BgL_smz00_825;

								BgL_smz00_825 = VECTOR_REF(BgL_mvz00_823, (int) (((long) 1)));
								{	/* Rgc/rgc.scm 431 */
									obj_t BgL_spz00_826;

									BgL_spz00_826 = VECTOR_REF(BgL_mvz00_823, (int) (((long) 2)));
									{	/* Rgc/rgc.scm 432 */
										obj_t BgL_whatz00_827;

										BgL_whatz00_827 =
											VECTOR_REF(BgL_mvz00_823, (int) (((long) 3)));
										{	/* Rgc/rgc.scm 433 */

											{	/* Rgc/rgc.scm 435 */
												bool_t BgL_testz00_2146;

												if (((long) CINT(BgL_ruz00_824) == BgL_matchz00_47))
													{	/* Rgc/rgc.scm 435 */
														if (
															((long) CINT(BgL_smz00_825) ==
																BgL_submatchz00_48))
															{	/* Rgc/rgc.scm 435 */
																BgL_testz00_2146 =
																	((long) CINT(BgL_spz00_826) <= BgL_posz00_46);
															}
														else
															{	/* Rgc/rgc.scm 435 */
																BgL_testz00_2146 = ((bool_t) 0);
															}
													}
												else
													{	/* Rgc/rgc.scm 435 */
														BgL_testz00_2146 = ((bool_t) 0);
													}
												if (BgL_testz00_2146)
													{	/* Rgc/rgc.scm 435 */
														if (
															(BgL_whatz00_827 == BGl_symbol2324z00zz__rgcz00))
															{	/* Rgc/rgc.scm 436 */
																if (((long) CINT(BgL_stopz00_818) < ((long) 0)))
																	{
																		obj_t BgL_stopz00_2162;

																		obj_t BgL_submatchesz00_2160;

																		BgL_submatchesz00_2160 =
																			CDR(BgL_submatchesz00_816);
																		BgL_stopz00_2162 = BgL_spz00_826;
																		BgL_stopz00_818 = BgL_stopz00_2162;
																		BgL_submatchesz00_816 =
																			BgL_submatchesz00_2160;
																		goto BgL_zc3anonymousza31896ze3z83_819;
																	}
																else
																	{
																		obj_t BgL_submatchesz00_2163;

																		BgL_submatchesz00_2163 =
																			CDR(BgL_submatchesz00_816);
																		BgL_submatchesz00_816 =
																			BgL_submatchesz00_2163;
																		goto BgL_zc3anonymousza31896ze3z83_819;
																	}
															}
														else
															{	/* Rgc/rgc.scm 436 */
																if (
																	(BgL_whatz00_827 ==
																		BGl_symbol2326z00zz__rgcz00))
																	{	/* Rgc/rgc.scm 442 */
																		long BgL_val0_1851z00_835;

																		BgL_val0_1851z00_835 =
																			((long) CINT(BgL_spz00_826) - ((long) 1));
																		{	/* Rgc/rgc.scm 442 */
																			int BgL_auxz00_2169;

																			BgL_auxz00_2169 = (int) (((long) 2));
																			BGL_MVALUES_NUMBER_SET(BgL_auxz00_2169);
																		}
																		{	/* Rgc/rgc.scm 442 */
																			int BgL_auxz00_2172;

																			BgL_auxz00_2172 = (int) (((long) 1));
																			BGL_MVALUES_VAL_SET(BgL_auxz00_2172,
																				BgL_stopz00_818);
																		}
																		return BINT(BgL_val0_1851z00_835);
																	}
																else
																	{	/* Rgc/rgc.scm 436 */
																		if (
																			(BgL_whatz00_827 ==
																				BGl_symbol2328z00zz__rgcz00))
																			{
																				long BgL_startz00_2180;

																				obj_t BgL_submatchesz00_2178;

																				BgL_submatchesz00_2178 =
																					CDR(BgL_submatchesz00_816);
																				BgL_startz00_2180 =
																					(
																					(long) CINT(BgL_spz00_826) -
																					((long) 1));
																				BgL_startz00_817 = BgL_startz00_2180;
																				BgL_submatchesz00_816 =
																					BgL_submatchesz00_2178;
																				goto BgL_zc3anonymousza31896ze3z83_819;
																			}
																		else
																			{	/* Rgc/rgc.scm 436 */
																				return BUNSPEC;
																			}
																	}
															}
													}
												else
													{	/* Rgc/rgc.scm 435 */
														if ((BgL_whatz00_827 == BgL_stopz00_818))
															{	/* Rgc/rgc.scm 445 */
																{	/* Rgc/rgc.scm 446 */
																	int BgL_auxz00_2185;

																	BgL_auxz00_2185 = (int) (((long) 2));
																	BGL_MVALUES_NUMBER_SET(BgL_auxz00_2185);
																}
																{	/* Rgc/rgc.scm 446 */
																	int BgL_auxz00_2188;

																	BgL_auxz00_2188 = (int) (((long) 1));
																	BGL_MVALUES_VAL_SET(BgL_auxz00_2188,
																		BgL_stopz00_818);
																}
																return BINT(BgL_startz00_817);
															}
														else
															{
																obj_t BgL_submatchesz00_2192;

																BgL_submatchesz00_2192 =
																	CDR(BgL_submatchesz00_816);
																BgL_submatchesz00_816 = BgL_submatchesz00_2192;
																goto BgL_zc3anonymousza31896ze3z83_819;
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



/* _rgc-the-submatch */
	obj_t BGl__rgczd2thezd2submatchz00zz__rgcz00(obj_t BgL_envz00_1585,
		obj_t BgL_rgczd2submatcheszd2_1586, obj_t BgL_posz00_1587,
		obj_t BgL_matchz00_1588, obj_t BgL_submatchz00_1589)
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 418 */
			{	/* Rgc/rgc.scm 427 */
				long BgL_auxz00_2213;

				long BgL_auxz00_2204;

				long BgL_auxz00_2195;

				{	/* Rgc/rgc.scm 427 */
					obj_t BgL_auxz00_2214;

					if (INTEGERP(BgL_submatchz00_1589))
						{	/* Rgc/rgc.scm 427 */
							BgL_auxz00_2214 = BgL_submatchz00_1589;
						}
					else
						{
							obj_t BgL_auxz00_2217;

							BgL_auxz00_2217 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 21540)), BGl_string2330z00zz__rgcz00,
								BGl_string2295z00zz__rgcz00, BgL_submatchz00_1589);
							FAILURE(BgL_auxz00_2217, BFALSE, BFALSE);
						}
					BgL_auxz00_2213 = (long) CINT(BgL_auxz00_2214);
				}
				{	/* Rgc/rgc.scm 427 */
					obj_t BgL_auxz00_2205;

					if (INTEGERP(BgL_matchz00_1588))
						{	/* Rgc/rgc.scm 427 */
							BgL_auxz00_2205 = BgL_matchz00_1588;
						}
					else
						{
							obj_t BgL_auxz00_2208;

							BgL_auxz00_2208 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 21540)), BGl_string2330z00zz__rgcz00,
								BGl_string2295z00zz__rgcz00, BgL_matchz00_1588);
							FAILURE(BgL_auxz00_2208, BFALSE, BFALSE);
						}
					BgL_auxz00_2204 = (long) CINT(BgL_auxz00_2205);
				}
				{	/* Rgc/rgc.scm 427 */
					obj_t BgL_auxz00_2196;

					if (INTEGERP(BgL_posz00_1587))
						{	/* Rgc/rgc.scm 427 */
							BgL_auxz00_2196 = BgL_posz00_1587;
						}
					else
						{
							obj_t BgL_auxz00_2199;

							BgL_auxz00_2199 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2288z00zz__rgcz00,
								BINT(((long) 21540)), BGl_string2330z00zz__rgcz00,
								BGl_string2295z00zz__rgcz00, BgL_posz00_1587);
							FAILURE(BgL_auxz00_2199, BFALSE, BFALSE);
						}
					BgL_auxz00_2195 = (long) CINT(BgL_auxz00_2196);
				}
				return
					BGl_rgczd2thezd2submatchz00zz__rgcz00(BgL_rgczd2submatcheszd2_1586,
					BgL_auxz00_2195, BgL_auxz00_2204, BgL_auxz00_2213);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__rgcz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 17 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__rgcz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 17 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__rgcz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgc.scm 17 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2331z00zz__rgcz00));
		}
	}

#ifdef __cplusplus
}
#endif
