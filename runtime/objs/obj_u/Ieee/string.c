/*===========================================================================*/
/*   (Ieee/string.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Ieee/string.scm -indent -o objs/obj_u/Ieee/string.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl__stringzd2suffixzf3z21zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl__blitzd2stringz12zc0zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__substringzd2atzf3z21zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl__substringzd2cizd2atzf3zf3zz__r4_strings_6_7z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2fillz12zc0zz__r4_strings_6_7z00(obj_t,
		unsigned char);
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl__stringzd2naturalzd2compare3z00zz__r4_strings_6_7z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl__stringzd2indexzd2rightz00zz__r4_strings_6_7z00(obj_t,
		obj_t);
	extern bool_t bigloo_strncmp_ci(obj_t, obj_t, long);
	extern long bgl_list_length(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_substringzd2cizd2atzf3zf3zz__r4_strings_6_7z00(obj_t, obj_t, long,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_stringze3zd3zf3zc3zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl__stringzc3zf3z30zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
	extern obj_t make_string(long, unsigned char);
	static obj_t BGl__stringzd3zf3z20zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
	static obj_t BGl__stringzd2indexzd2zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2setzd2urz12z12zz__r4_strings_6_7z00(obj_t, long,
		unsigned char);
	extern bool_t bigloo_strcmp(obj_t, obj_t);
	static obj_t BGl__stringzd2cutzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
	static obj_t BGl__stringze3zf3z10zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
	static obj_t BGl__stringze3zd3zf3zc3zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	extern bool_t bigloo_strncmp_ci_at(obj_t, obj_t, long, long);
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_escapezd2schemezd2stringz00zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl__stringzd2refzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
	static obj_t BGl__stringzd2copyzd2zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl__stringzd2skipzd2zz__r4_strings_6_7z00(obj_t, obj_t);
	extern obj_t make_string_sans_fill(long);
	BGL_EXPORTED_DECL bool_t
		BGl_stringzd2cizc3zd3zf3z31zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_strings_6_7z00 = BUNSPEC;
	static obj_t BGl__stringzd2cizc3zf3ze2zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__substringzd2cizd3zf3zf2zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__stringzd2cizd3zf3zf2zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_substringzd3zf3z20zz__r4_strings_6_7z00(obj_t,
		obj_t, long);
	static obj_t BGl__blitzd2stringzd2urz12z12zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__stringzd2cize3zf3zc2zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__stringzd2lengthzd2zz__r4_strings_6_7z00(obj_t, obj_t);
	extern bool_t string_ge(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(obj_t,
		long, obj_t, long, long);
	BGL_EXPORTED_DECL int
		BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__stringzd2shrinkz12zc0zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl__stringzd2compare3zd2zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__stringzd2ze3listz31zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2skipzd2rightz00zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
	static obj_t BGl__stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl__stringzd2cize3zd3zf3z11zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_substringzd2atzf3z21zz__r4_strings_6_7z00(obj_t,
		obj_t, long, obj_t);
	extern bool_t string_gt(obj_t, obj_t);
	static obj_t BGl__escapezd2schemezd2stringz00zz__r4_strings_6_7z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2replacezd2zz__r4_strings_6_7z00(obj_t,
		unsigned char, unsigned char);
	static obj_t BGl__stringzd2prefixzf3z21zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl__stringzd2setz12zc0zz__r4_strings_6_7z00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__emptyzd2stringzf3z21zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl__stringzd2hexzd2internz12z12zz__r4_strings_6_7z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL int
		BGl_stringzd2naturalzd2compare3z00zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2hexzd2externz00zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_memvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2upcasez12zc0zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2stringzd2zz__r4_strings_6_7z00(long,
		obj_t);
	extern obj_t blit_string(obj_t, long, obj_t, long, long);
	extern bool_t string_le(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2indexzd2zz__r4_strings_6_7z00(obj_t,
		obj_t, obj_t);
	extern bool_t string_lt(obj_t, obj_t);
	static obj_t BGl__stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2containszd2zz__r4_strings_6_7z00(obj_t,
		obj_t, int);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2forzd2readz00zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t string_for_read(obj_t);
	extern bool_t strcicmp(obj_t, obj_t);
	static obj_t BGl__stringzd2nullzf3z21zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl__stringzd2splitzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
	static obj_t BGl__stringzd2deletezd2zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl__stringzd2compare3zd2ciz00zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl_strnatcmpz00zz__r4_strings_6_7z00(obj_t, obj_t, bool_t);
	static obj_t BGl__substringzd2urzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t,
		obj_t);
	extern bool_t bigloo_strcmp_ci_at(obj_t, obj_t, long);
	extern obj_t bgl_escape_scheme_string(char *, long, long);
	static obj_t BGl__stringzd2containszd2ciz00zz__r4_strings_6_7z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2hexzd2internz00zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringz00zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL int
		BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL long BGl_stringzd2lengthzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_stringzd2cize3zd3zf3z11zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_stringzc3zf3z30zz__r4_strings_6_7z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2hexzd2internz12z12zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2capitaliza7ez75zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_stringzd3zf3z20zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl__stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl_symbol2668z00zz__r4_strings_6_7z00 = BUNSPEC;
	extern obj_t bgl_reverse_bang(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_symbol2673z00zz__r4_strings_6_7z00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2skipzd2zz__r4_strings_6_7z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2676z00zz__r4_strings_6_7z00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_stringze3zf3z10zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl__stringzf3zf3zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl_symbol2680z00zz__r4_strings_6_7z00 = BUNSPEC;
	static obj_t BGl__stringzd2aszd2readz00zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_emptyzd2stringzf3z21zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_stringzd2cizc3zf3ze2zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl__stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl_symbol2701z00zz__r4_strings_6_7z00 = BUNSPEC;
	static obj_t BGl_symbol2692z00zz__r4_strings_6_7z00 = BUNSPEC;
	static obj_t BGl_hexzd2stringzd2refz00zz__r4_strings_6_7z00(obj_t, long);
	static obj_t BGl_symbol2704z00zz__r4_strings_6_7z00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_stringzd2cizd3zf3zf2zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl_symbol2695z00zz__r4_strings_6_7z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_escapezd2Czd2stringz00zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_symbol2707z00zz__r4_strings_6_7z00 = BUNSPEC;
	static obj_t BGl_symbol2698z00zz__r4_strings_6_7z00 = BUNSPEC;
	static obj_t BGl__stringzd2downcasez12zc0zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00(obj_t,
		unsigned char, unsigned char);
	extern obj_t bgl_escape_C_string(char *, long, long);
	static obj_t BGl_symbol2712z00zz__r4_strings_6_7z00 = BUNSPEC;
	static obj_t BGl_symbol2714z00zz__r4_strings_6_7z00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_stringzd2cize3zf3zc2zz__r4_strings_6_7z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_stringzf3zf3zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_symbol2717z00zz__r4_strings_6_7z00 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zz__r4_strings_6_7z00();
	static obj_t BGl_symbol2721z00zz__r4_strings_6_7z00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t
		BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_comparezd2rightzd2zz__r4_strings_6_7z00(obj_t, long, obj_t,
		long);
	BGL_EXPORTED_DECL bool_t
		BGl_substringzd2cizd3zf3zf2zz__r4_strings_6_7z00(obj_t, obj_t, long);
	static obj_t BGl__stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2setz12zc0zz__r4_strings_6_7z00(obj_t,
		long, unsigned char);
	extern bool_t bigloo_strncmp_at(obj_t, obj_t, long, long);
	BGL_EXPORTED_DECL long
		BGl_stringzd2compare3zd2ciz00zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2downcasez12zc0zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl__stringzd2capitaliza7ez12z67zz__r4_strings_6_7z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2shrinkz12zc0zz__r4_strings_6_7z00(obj_t,
		long);
	BGL_EXPORTED_DECL bool_t BGl_stringzd2nullzf3z21zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2splitzd2zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl__stringzd2skipzd2rightz00zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static bool_t BGl_delimzf3zf3zz__r4_strings_6_7z00(obj_t, unsigned char);
	static obj_t BGl__stringzd2refzd2urz00zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__stringzd2setzd2urz12z12zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_substringzd2urzd2zz__r4_strings_6_7z00(obj_t,
		long, long);
	static obj_t BGl__listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2deletezd2zz__r4_strings_6_7z00(obj_t,
		obj_t, int, long);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2cutzd2zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl__stringzd2containszd2zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2containszd2ciz00zz__r4_strings_6_7z00(obj_t, obj_t, int);
	static obj_t BGl__stringz00zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_stringzd2naturalzd2compare3zd2cizd2zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl__stringzd2forzd2readz00zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__r4_strings_6_7z00();
	static obj_t BGl__stringzd2hexzd2externz00zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl__stringzd2fillz12zc0zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_stringzc3zd3zf3ze3zz__r4_strings_6_7z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL unsigned char
		BGl_stringzd2refzd2zz__r4_strings_6_7z00(obj_t, long);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl__stringzc3zd3zf3ze3zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl__substringzd3zf3z20zz__r4_strings_6_7z00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_comparezd2leftzd2zz__r4_strings_6_7z00(obj_t, long, obj_t,
		long);
	static obj_t BGl__stringzd2replacezd2zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long,
		long);
	extern bool_t string_cige(obj_t, obj_t);
	static obj_t
		BGl__stringzd2naturalzd2compare3zd2cizd2zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2capitaliza7ez12z67zz__r4_strings_6_7z00(obj_t);
	extern bool_t string_cigt(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blitzd2stringzd2urz12z12zz__r4_strings_6_7z00(obj_t, long, obj_t, long,
		long);
	static obj_t BGl__escapezd2Czd2stringz00zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl__stringzd2upcasez12zc0zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl__stringzd2hexzd2internz00zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl__substringz00zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl__stringzd2replacez12zc0zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_stringzd2compare3zd2zz__r4_strings_6_7z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl__stringzd2cizc3zd3zf3z31zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__stringzd2capitaliza7ez75zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL unsigned char
		BGl_stringzd2refzd2urz00zz__r4_strings_6_7z00(obj_t, long);
	extern bool_t string_cile(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2aszd2readz00zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl__makezd2stringzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
	extern bool_t bigloo_strncmp(obj_t, obj_t, long);
	extern bool_t bigloo_strcmp_at(obj_t, obj_t, long);
	static obj_t BGl__stringzd2appendzd2zz__r4_strings_6_7z00(obj_t, obj_t);
	extern bool_t string_cilt(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2aszd2readzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2asza7d2r2729z00,
		BGl__stringzd2aszd2readz00zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2containszd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2contai2730za7, opt_generic_entry,
		BGl__stringzd2containszd2zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_listzd2ze3stringzd2envze3zz__r4_strings_6_7z00,
		BgL_bgl__listza7d2za7e3strin2731z00,
		BGl__listzd2ze3stringz31zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2compare3zd2cizd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2compar2732za7,
		BGl__stringzd2compare3zd2ciz00zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2downcasezd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2downca2733za7,
		BGl__stringzd2downcasezd2zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2prefixzd2lengthzd2cizd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2prefix2734za7, opt_generic_entry,
		BGl__stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2hexzd2internzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2hexza7d22735z00,
		BGl__stringzd2hexzd2internz00zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2shrinkz12zd2envz12zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2shrink2736za7,
		BGl__stringzd2shrinkz12zc0zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2naturalzd2compare3zd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2natura2737za7,
		BGl__stringzd2naturalzd2compare3z00zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2setz12zd2envz12zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2setza7122738z00,
		BGl__stringzd2setz12zc0zz__r4_strings_6_7z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2suffixzd2cizf3zd2envz21zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2suffix2739za7, opt_generic_entry,
		BGl__stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzd3zf3zd2envzf2zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d3za7f3za7202740za7,
		BGl__stringzd3zf3z20zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_substringzd2cizd3zf3zd2envz20zz__r4_strings_6_7z00,
		BgL_bgl__substringza7d2ciza72741z00,
		BGl__substringzd2cizd3zf3zf2zz__r4_strings_6_7z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2cizc3zf3zd2envz30zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2ciza7c3za72742za7,
		BGl__stringzd2cizc3zf3ze2zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2prefixzd2lengthzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2prefix2743za7, opt_generic_entry,
		BGl__stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzd2refzd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2refza7d22744z00,
		BGl__stringzd2refzd2zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2skipzd2rightzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2skipza7d2745z00, opt_generic_entry,
		BGl__stringzd2skipzd2rightz00zz__r4_strings_6_7z00, BFALSE, -1);
	      DEFINE_STRING(BGl_string2600z00zz__r4_strings_6_7z00,
		BgL_bgl_string2600za700za7za7_2746za7, "_string-length", 14);
	      DEFINE_STRING(BGl_string2601z00zz__r4_strings_6_7z00,
		BgL_bgl_string2601za700za7za7_2747za7, "_string-ref", 11);
	      DEFINE_STRING(BGl_string2602z00zz__r4_strings_6_7z00,
		BgL_bgl_string2602za700za7za7_2748za7, "_string-set!", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2forzd2readzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2forza7d22749z00,
		BGl__stringzd2forzd2readz00zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2603z00zz__r4_strings_6_7z00,
		BgL_bgl_string2603za700za7za7_2750za7, "uchar", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_escapezd2Czd2stringzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__escapeza7d2cza7d2st2751z00,
		BGl__escapezd2Czd2stringz00zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2604z00zz__r4_strings_6_7z00,
		BgL_bgl_string2604za700za7za7_2752za7, "_string-ref-ur", 14);
	      DEFINE_STRING(BGl_string2595z00zz__r4_strings_6_7z00,
		BgL_bgl_string2595za700za7za7_2753za7,
		"/tmp/bigloo/runtime/Ieee/string.scm", 35);
	      DEFINE_STRING(BGl_string2605z00zz__r4_strings_6_7z00,
		BgL_bgl_string2605za700za7za7_2754za7, "_string-set-ur!", 15);
	      DEFINE_STRING(BGl_string2596z00zz__r4_strings_6_7z00,
		BgL_bgl_string2596za700za7za7_2755za7, "_string-null?", 13);
	      DEFINE_STRING(BGl_string2606z00zz__r4_strings_6_7z00,
		BgL_bgl_string2606za700za7za7_2756za7, "_string=?", 9);
	      DEFINE_STRING(BGl_string2597z00zz__r4_strings_6_7z00,
		BgL_bgl_string2597za700za7za7_2757za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2607z00zz__r4_strings_6_7z00,
		BgL_bgl_string2607za700za7za7_2758za7, "_substring=?", 12);
	      DEFINE_STRING(BGl_string2598z00zz__r4_strings_6_7z00,
		BgL_bgl_string2598za700za7za7_2759za7, "_make-string", 12);
	      DEFINE_STRING(BGl_string2608z00zz__r4_strings_6_7z00,
		BgL_bgl_string2608za700za7za7_2760za7, "_substring-at?", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2capitaliza7ezd2envza7zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2capita2761za7,
		BGl__stringzd2capitaliza7ez75zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2599z00zz__r4_strings_6_7z00,
		BgL_bgl_string2599za700za7za7_2762za7, "long", 4);
	      DEFINE_STRING(BGl_string2609z00zz__r4_strings_6_7z00,
		BgL_bgl_string2609za700za7za7_2763za7, "_substring-ci=?", 15);
	      DEFINE_STRING(BGl_string2610z00zz__r4_strings_6_7z00,
		BgL_bgl_string2610za700za7za7_2764za7, "_substring-ci-at?", 17);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2naturalzd2compare3zd2cizd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2natura2765za7,
		BGl__stringzd2naturalzd2compare3zd2cizd2zz__r4_strings_6_7z00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2611z00zz__r4_strings_6_7z00,
		BgL_bgl_string2611za700za7za7_2766za7, "_empty-string?", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blitzd2stringzd2urz12zd2envzc0zz__r4_strings_6_7z00,
		BgL_bgl__blitza7d2stringza7d2767z00,
		BGl__blitzd2stringzd2urz12z12zz__r4_strings_6_7z00, 0L, BUNSPEC, 5);
	      DEFINE_STRING(BGl_string2612z00zz__r4_strings_6_7z00,
		BgL_bgl_string2612za700za7za7_2768za7, "_string-ci=?", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2setzd2urz12zd2envzc0zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2setza7d22769z00,
		BGl__stringzd2setzd2urz12z12zz__r4_strings_6_7z00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2613z00zz__r4_strings_6_7z00,
		BgL_bgl_string2613za700za7za7_2770za7, "_string<?", 9);
	      DEFINE_STRING(BGl_string2614z00zz__r4_strings_6_7z00,
		BgL_bgl_string2614za700za7za7_2771za7, "_string>?", 9);
	      DEFINE_STRING(BGl_string2615z00zz__r4_strings_6_7z00,
		BgL_bgl_string2615za700za7za7_2772za7, "_string<=?", 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2splitzd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2splitza72773z00, va_generic_entry,
		BGl__stringzd2splitzd2zz__r4_strings_6_7z00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string2616z00zz__r4_strings_6_7z00,
		BgL_bgl_string2616za700za7za7_2774za7, "_string>=?", 10);
	      DEFINE_STRING(BGl_string2617z00zz__r4_strings_6_7z00,
		BgL_bgl_string2617za700za7za7_2775za7, "_string-ci<?", 12);
	      DEFINE_STRING(BGl_string2618z00zz__r4_strings_6_7z00,
		BgL_bgl_string2618za700za7za7_2776za7, "_string-ci>?", 12);
	      DEFINE_STRING(BGl_string2619z00zz__r4_strings_6_7z00,
		BgL_bgl_string2619za700za7za7_2777za7, "_string-ci<=?", 13);
	      DEFINE_STRING(BGl_string2620z00zz__r4_strings_6_7z00,
		BgL_bgl_string2620za700za7za7_2778za7, "_string-ci>=?", 13);
	      DEFINE_STRING(BGl_string2621z00zz__r4_strings_6_7z00,
		BgL_bgl_string2621za700za7za7_2779za7, "_substring", 10);
	      DEFINE_STRING(BGl_string2622z00zz__r4_strings_6_7z00,
		BgL_bgl_string2622za700za7za7_2780za7, "substring", 9);
	      DEFINE_STRING(BGl_string2623z00zz__r4_strings_6_7z00,
		BgL_bgl_string2623za700za7za7_2781za7, "Illegal start index \"", 21);
	      DEFINE_STRING(BGl_string2624z00zz__r4_strings_6_7z00,
		BgL_bgl_string2624za700za7za7_2782za7, "\"", 1);
	      DEFINE_STRING(BGl_string2625z00zz__r4_strings_6_7z00,
		BgL_bgl_string2625za700za7za7_2783za7, "Illegal end index \"", 19);
	      DEFINE_STRING(BGl_string2626z00zz__r4_strings_6_7z00,
		BgL_bgl_string2626za700za7za7_2784za7, "_substring-ur", 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_emptyzd2stringzf3zd2envzf3zz__r4_strings_6_7z00,
		BgL_bgl__emptyza7d2stringza72785z00,
		BGl__emptyzd2stringzf3z21zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2627z00zz__r4_strings_6_7z00,
		BgL_bgl_string2627za700za7za7_2786za7, "_string-contains", 16);
	      DEFINE_STRING(BGl_string2628z00zz__r4_strings_6_7z00,
		BgL_bgl_string2628za700za7za7_2787za7, "int", 3);
	      DEFINE_STRING(BGl_string2629z00zz__r4_strings_6_7z00,
		BgL_bgl_string2629za700za7za7_2788za7, "_string-contains-ci", 19);
	      DEFINE_STRING(BGl_string2630z00zz__r4_strings_6_7z00,
		BgL_bgl_string2630za700za7za7_2789za7, "_string-compare3", 16);
	      DEFINE_STRING(BGl_string2631z00zz__r4_strings_6_7z00,
		BgL_bgl_string2631za700za7za7_2790za7, "_string-compare3-ci", 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2upcasez12zd2envz12zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2upcase2791za7,
		BGl__stringzd2upcasez12zc0zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2632z00zz__r4_strings_6_7z00,
		BgL_bgl_string2632za700za7za7_2792za7, "", 0);
	      DEFINE_STRING(BGl_string2633z00zz__r4_strings_6_7z00,
		BgL_bgl_string2633za700za7za7_2793za7, "_list->string", 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzd2cutzd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2cutza7d22794z00, va_generic_entry,
		BGl__stringzd2cutzd2zz__r4_strings_6_7z00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string2634z00zz__r4_strings_6_7z00,
		BgL_bgl_string2634za700za7za7_2795za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string2635z00zz__r4_strings_6_7z00,
		BgL_bgl_string2635za700za7za7_2796za7, "_string->list", 13);
	      DEFINE_STRING(BGl_string2636z00zz__r4_strings_6_7z00,
		BgL_bgl_string2636za700za7za7_2797za7, "_string-copy", 12);
	      DEFINE_STRING(BGl_string2637z00zz__r4_strings_6_7z00,
		BgL_bgl_string2637za700za7za7_2798za7, "_string-fill!", 13);
	      DEFINE_STRING(BGl_string2638z00zz__r4_strings_6_7z00,
		BgL_bgl_string2638za700za7za7_2799za7, "_string-upcase", 14);
	      DEFINE_STRING(BGl_string2639z00zz__r4_strings_6_7z00,
		BgL_bgl_string2639za700za7za7_2800za7, "_string-downcase", 16);
	      DEFINE_STRING(BGl_string2640z00zz__r4_strings_6_7z00,
		BgL_bgl_string2640za700za7za7_2801za7, "_string-upcase!", 15);
	      DEFINE_STRING(BGl_string2641z00zz__r4_strings_6_7z00,
		BgL_bgl_string2641za700za7za7_2802za7, "_string-downcase!", 17);
	      DEFINE_STRING(BGl_string2642z00zz__r4_strings_6_7z00,
		BgL_bgl_string2642za700za7za7_2803za7, "_string-capitalize!", 19);
	      DEFINE_STRING(BGl_string2643z00zz__r4_strings_6_7z00,
		BgL_bgl_string2643za700za7za7_2804za7, "_string-capitalize", 18);
	      DEFINE_STRING(BGl_string2644z00zz__r4_strings_6_7z00,
		BgL_bgl_string2644za700za7za7_2805za7, "_string-for-read", 16);
	      DEFINE_STRING(BGl_string2645z00zz__r4_strings_6_7z00,
		BgL_bgl_string2645za700za7za7_2806za7, "_escape-C-string", 16);
	      DEFINE_STRING(BGl_string2646z00zz__r4_strings_6_7z00,
		BgL_bgl_string2646za700za7za7_2807za7, "_escape-scheme-string", 21);
	      DEFINE_STRING(BGl_string2647z00zz__r4_strings_6_7z00,
		BgL_bgl_string2647za700za7za7_2808za7, "_string-as-read", 15);
	      DEFINE_STRING(BGl_string2648z00zz__r4_strings_6_7z00,
		BgL_bgl_string2648za700za7za7_2809za7, "_blit-string-ur!", 16);
	      DEFINE_STRING(BGl_string2649z00zz__r4_strings_6_7z00,
		BgL_bgl_string2649za700za7za7_2810za7, "]", 1);
	      DEFINE_STRING(BGl_string2650z00zz__r4_strings_6_7z00,
		BgL_bgl_string2650za700za7za7_2811za7, "] [dest:", 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzd2copyzd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2copyza7d2812z00,
		BGl__stringzd2copyzd2zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2651z00zz__r4_strings_6_7z00,
		BgL_bgl_string2651za700za7za7_2813za7, "[src:", 5);
	      DEFINE_STRING(BGl_string2652z00zz__r4_strings_6_7z00,
		BgL_bgl_string2652za700za7za7_2814za7,
		"blit-string!:Index and length out of range", 42);
	      DEFINE_STRING(BGl_string2653z00zz__r4_strings_6_7z00,
		BgL_bgl_string2653za700za7za7_2815za7, "_blit-string!", 13);
	      DEFINE_STRING(BGl_string2654z00zz__r4_strings_6_7z00,
		BgL_bgl_string2654za700za7za7_2816za7, "_string-shrink!", 15);
	      DEFINE_STRING(BGl_string2655z00zz__r4_strings_6_7z00,
		BgL_bgl_string2655za700za7za7_2817za7, "_string-replace", 15);
	      DEFINE_STRING(BGl_string2656z00zz__r4_strings_6_7z00,
		BgL_bgl_string2656za700za7za7_2818za7, "char", 4);
	      DEFINE_STRING(BGl_string2657z00zz__r4_strings_6_7z00,
		BgL_bgl_string2657za700za7za7_2819za7, "_string-replace!", 16);
	      DEFINE_STRING(BGl_string2658z00zz__r4_strings_6_7z00,
		BgL_bgl_string2658za700za7za7_2820za7, "_string-delete", 14);
	      DEFINE_STRING(BGl_string2659z00zz__r4_strings_6_7z00,
		BgL_bgl_string2659za700za7za7_2821za7, "string-delete", 13);
	      DEFINE_STRING(BGl_string2660z00zz__r4_strings_6_7z00,
		BgL_bgl_string2660za700za7za7_2822za7, "start index out of range", 24);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blitzd2stringz12zd2envz12zz__r4_strings_6_7z00,
		BgL_bgl__blitza7d2stringza712823z00,
		BGl__blitzd2stringz12zc0zz__r4_strings_6_7z00, 0L, BUNSPEC, 5);
	      DEFINE_STRING(BGl_string2661z00zz__r4_strings_6_7z00,
		BgL_bgl_string2661za700za7za7_2824za7, "end index out of range", 22);
	      DEFINE_STRING(BGl_string2662z00zz__r4_strings_6_7z00,
		BgL_bgl_string2662za700za7za7_2825za7, "Illegal indices", 15);
	      DEFINE_STRING(BGl_string2663z00zz__r4_strings_6_7z00,
		BgL_bgl_string2663za700za7za7_2826za7, "Illegal char/charset/predicate",
		30);
	      DEFINE_STRING(BGl_string2664z00zz__r4_strings_6_7z00,
		BgL_bgl_string2664za700za7za7_2827za7, " \t\n", 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2fillz12zd2envz12zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2fillza712828z00,
		BGl__stringzd2fillz12zc0zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2665z00zz__r4_strings_6_7z00,
		BgL_bgl_string2665za700za7za7_2829za7, "_string-split", 13);
	      DEFINE_STRING(BGl_string2666z00zz__r4_strings_6_7z00,
		BgL_bgl_string2666za700za7za7_2830za7, "_string-cut", 11);
	      DEFINE_STRING(BGl_string2667z00zz__r4_strings_6_7z00,
		BgL_bgl_string2667za700za7za7_2831za7, "_string-index", 13);
	      DEFINE_STRING(BGl_string2669z00zz__r4_strings_6_7z00,
		BgL_bgl_string2669za700za7za7_2832za7, "string-index", 12);
	      DEFINE_STRING(BGl_string2670z00zz__r4_strings_6_7z00,
		BgL_bgl_string2670za700za7za7_2833za7, "Illegal regset", 14);
	      DEFINE_STRING(BGl_string2671z00zz__r4_strings_6_7z00,
		BgL_bgl_string2671za700za7za7_2834za7, "_string-index-right", 19);
	      DEFINE_STRING(BGl_string2672z00zz__r4_strings_6_7z00,
		BgL_bgl_string2672za700za7za7_2835za7, "index out of bound", 18);
	      DEFINE_STRING(BGl_string2674z00zz__r4_strings_6_7z00,
		BgL_bgl_string2674za700za7za7_2836za7, "string-index-right", 18);
	      DEFINE_STRING(BGl_string2675z00zz__r4_strings_6_7z00,
		BgL_bgl_string2675za700za7za7_2837za7, "_string-skip", 12);
	      DEFINE_STRING(BGl_string2677z00zz__r4_strings_6_7z00,
		BgL_bgl_string2677za700za7za7_2838za7, "string-skip", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2replacezd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2replac2839za7,
		BGl__stringzd2replacezd2zz__r4_strings_6_7z00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2678z00zz__r4_strings_6_7z00,
		BgL_bgl_string2678za700za7za7_2840za7, "_string-skip-right", 18);
	      DEFINE_STRING(BGl_string2679z00zz__r4_strings_6_7z00,
		BgL_bgl_string2679za700za7za7_2841za7, "_string-prefix-length", 21);
	      DEFINE_STRING(BGl_string2681z00zz__r4_strings_6_7z00,
		BgL_bgl_string2681za700za7za7_2842za7, "string-prefix-length", 20);
	      DEFINE_STRING(BGl_string2682z00zz__r4_strings_6_7z00,
		BgL_bgl_string2682za700za7za7_2843za7, "Index negative end index `", 26);
	      DEFINE_STRING(BGl_string2683z00zz__r4_strings_6_7z00,
		BgL_bgl_string2683za700za7za7_2844za7, "end1", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_substringzd3zf3zd2envzf2zz__r4_strings_6_7z00,
		BgL_bgl__substringza7d3za7f32845z00,
		BGl__substringzd3zf3z20zz__r4_strings_6_7z00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2684z00zz__r4_strings_6_7z00,
		BgL_bgl_string2684za700za7za7_2846za7, "'", 1);
	      DEFINE_STRING(BGl_string2685z00zz__r4_strings_6_7z00,
		BgL_bgl_string2685za700za7za7_2847za7, "Too large end index `", 21);
	      DEFINE_STRING(BGl_string2686z00zz__r4_strings_6_7z00,
		BgL_bgl_string2686za700za7za7_2848za7, "end2", 4);
	      DEFINE_STRING(BGl_string2687z00zz__r4_strings_6_7z00,
		BgL_bgl_string2687za700za7za7_2849za7, "Index negative start index `", 28);
	      DEFINE_STRING(BGl_string2688z00zz__r4_strings_6_7z00,
		BgL_bgl_string2688za700za7za7_2850za7, "start1", 6);
	      DEFINE_STRING(BGl_string2689z00zz__r4_strings_6_7z00,
		BgL_bgl_string2689za700za7za7_2851za7, "Too large start index `", 23);
	      DEFINE_STRING(BGl_string2690z00zz__r4_strings_6_7z00,
		BgL_bgl_string2690za700za7za7_2852za7, "start2", 6);
	      DEFINE_STRING(BGl_string2700z00zz__r4_strings_6_7z00,
		BgL_bgl_string2700za700za7za7_2853za7, "_string-prefix?", 15);
	      DEFINE_STRING(BGl_string2691z00zz__r4_strings_6_7z00,
		BgL_bgl_string2691za700za7za7_2854za7, "_string-prefix-length-ci", 24);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringze3zf3zd2envzc2zz__r4_strings_6_7z00,
		BgL_bgl__stringza7e3za7f3za7102855za7,
		BGl__stringze3zf3z10zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2702z00zz__r4_strings_6_7z00,
		BgL_bgl_string2702za700za7za7_2856za7, "string-prefix?", 14);
	      DEFINE_STRING(BGl_string2693z00zz__r4_strings_6_7z00,
		BgL_bgl_string2693za700za7za7_2857za7, "string-prefix-length-ci", 23);
	      DEFINE_STRING(BGl_string2703z00zz__r4_strings_6_7z00,
		BgL_bgl_string2703za700za7za7_2858za7, "_string-prefix-ci?", 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2compare3zd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2compar2859za7,
		BGl__stringzd2compare3zd2zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2694z00zz__r4_strings_6_7z00,
		BgL_bgl_string2694za700za7za7_2860za7, "_string-suffix-length", 21);
	      DEFINE_STRING(BGl_string2705z00zz__r4_strings_6_7z00,
		BgL_bgl_string2705za700za7za7_2861za7, "string-prefix-ci?", 17);
	      DEFINE_STRING(BGl_string2696z00zz__r4_strings_6_7z00,
		BgL_bgl_string2696za700za7za7_2862za7, "string-suffix-length", 20);
	      DEFINE_STRING(BGl_string2706z00zz__r4_strings_6_7z00,
		BgL_bgl_string2706za700za7za7_2863za7, "_string-suffix?", 15);
	      DEFINE_STRING(BGl_string2697z00zz__r4_strings_6_7z00,
		BgL_bgl_string2697za700za7za7_2864za7, "_string-suffix-length-ci", 24);
	      DEFINE_STRING(BGl_string2708z00zz__r4_strings_6_7z00,
		BgL_bgl_string2708za700za7za7_2865za7, "string-suffix?", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2capitaliza7ez12zd2envzb5zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2capita2866za7,
		BGl__stringzd2capitaliza7ez12z67zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2699z00zz__r4_strings_6_7z00,
		BgL_bgl_string2699za700za7za7_2867za7, "string-suffix-length-ci", 23);
	      DEFINE_STRING(BGl_string2709z00zz__r4_strings_6_7z00,
		BgL_bgl_string2709za700za7za7_2868za7, "_string-suffix-ci?", 18);
	      DEFINE_STRING(BGl_string2710z00zz__r4_strings_6_7z00,
		BgL_bgl_string2710za700za7za7_2869za7, "_string-natural-compare3", 24);
	      DEFINE_STRING(BGl_string2711z00zz__r4_strings_6_7z00,
		BgL_bgl_string2711za700za7za7_2870za7, "_string-natural-compare3-ci", 27);
	      DEFINE_STRING(BGl_string2713z00zz__r4_strings_6_7z00,
		BgL_bgl_string2713za700za7za7_2871za7, "an-awful-hack", 13);
	      DEFINE_STRING(BGl_string2715z00zz__r4_strings_6_7z00,
		BgL_bgl_string2715za700za7za7_2872za7, "hex-string->string", 18);
	      DEFINE_STRING(BGl_string2716z00zz__r4_strings_6_7z00,
		BgL_bgl_string2716za700za7za7_2873za7, "Illegal string (illegal character)",
		34);
	      DEFINE_STRING(BGl_string2718z00zz__r4_strings_6_7z00,
		BgL_bgl_string2718za700za7za7_2874za7, "string-hex", 10);
	      DEFINE_STRING(BGl_string2720z00zz__r4_strings_6_7z00,
		BgL_bgl_string2720za700za7za7_2875za7, "_string-hex-intern", 18);
	      DEFINE_STRING(BGl_string2719z00zz__r4_strings_6_7z00,
		BgL_bgl_string2719za700za7za7_2876za7, "Illegal string (length is odd)",
		30);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2cizd3zf3zd2envz20zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2ciza7d3za72877za7,
		BGl__stringzd2cizd3zf3zf2zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2722z00zz__r4_strings_6_7z00,
		BgL_bgl_string2722za700za7za7_2878za7, "string-hex-intern!", 18);
	      DEFINE_STRING(BGl_string2723z00zz__r4_strings_6_7z00,
		BgL_bgl_string2723za700za7za7_2879za7, "_string-hex-intern!", 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_escapezd2schemezd2stringzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__escapeza7d2scheme2880za7,
		BGl__escapezd2schemezd2stringz00zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2724z00zz__r4_strings_6_7z00,
		BgL_bgl_string2724za700za7za7_2881za7, "0123456789abcdef", 16);
	      DEFINE_STRING(BGl_string2725z00zz__r4_strings_6_7z00,
		BgL_bgl_string2725za700za7za7_2882za7, "_string-hex-extern", 18);
	      DEFINE_STRING(BGl_string2726z00zz__r4_strings_6_7z00,
		BgL_bgl_string2726za700za7za7_2883za7, "__r4_strings_6_7", 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2upcasezd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2upcase2884za7,
		BGl__stringzd2upcasezd2zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2suffixzd2lengthzd2cizd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2suffix2885za7, opt_generic_entry,
		BGl__stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2lengthzd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2length2886za7,
		BGl__stringzd2lengthzd2zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2ze3listzd2envze3zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2za7e3lis2887z00,
		BGl__stringzd2ze3listz31zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2deletezd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2delete2888za7, opt_generic_entry,
		BGl__stringzd2deletezd2zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringze3zd3zf3zd2envz11zz__r4_strings_6_7z00,
		BgL_bgl__stringza7e3za7d3za7f32889za7,
		BGl__stringze3zd3zf3zc3zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_substringzd2atzf3zd2envzf3zz__r4_strings_6_7z00,
		BgL_bgl__substringza7d2atza72890z00, opt_generic_entry,
		BGl__substringzd2atzf3z21zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2suffixzf3zd2envzf3zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2suffix2891za7, opt_generic_entry,
		BGl__stringzd2suffixzf3z21zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2replacez12zd2envz12zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2replac2892za7,
		BGl__stringzd2replacez12zc0zz__r4_strings_6_7z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzc3zd3zf3zd2envz31zz__r4_strings_6_7z00,
		BgL_bgl__stringza7c3za7d3za7f32893za7,
		BGl__stringzc3zd3zf3ze3zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2stringzd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__makeza7d2stringza7d2894z00, va_generic_entry,
		BGl__makezd2stringzd2zz__r4_strings_6_7z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2containszd2cizd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2contai2895za7, opt_generic_entry,
		BGl__stringzd2containszd2ciz00zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2indexzd2rightzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2indexza72896z00, opt_generic_entry,
		BGl__stringzd2indexzd2rightz00zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2downcasez12zd2envz12zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2downca2897za7,
		BGl__stringzd2downcasez12zc0zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzf3zd2envz21zz__r4_strings_6_7z00,
		BgL_bgl__stringza7f3za7f3za7za7_2898z00,
		BGl__stringzf3zf3zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzd2skipzd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2skipza7d2899z00, opt_generic_entry,
		BGl__stringzd2skipzd2zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2suffixzd2lengthzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2suffix2900za7, opt_generic_entry,
		BGl__stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2prefixzf3zd2envzf3zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2prefix2901za7, opt_generic_entry,
		BGl__stringzd2prefixzf3z21zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_substringzd2cizd2atzf3zd2envz21zz__r4_strings_6_7z00,
		BgL_bgl__substringza7d2ciza72902z00, opt_generic_entry,
		BGl__substringzd2cizd2atzf3zf3zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2appendzd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2append2903za7, va_generic_entry,
		BGl__stringzd2appendzd2zz__r4_strings_6_7z00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2refzd2urzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2refza7d22904z00,
		BGl__stringzd2refzd2urz00zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2nullzf3zd2envzf3zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2nullza7f2905z00,
		BGl__stringzd2nullzf3z21zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2hexzd2externzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2hexza7d22906z00,
		BGl__stringzd2hexzd2externz00zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2indexzd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2indexza72907z00, opt_generic_entry,
		BGl__stringzd2indexzd2zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzc3zf3zd2envze2zz__r4_strings_6_7z00,
		BgL_bgl__stringza7c3za7f3za7302908za7,
		BGl__stringzc3zf3z30zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2cize3zd3zf3zd2envzc3zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2ciza7e3za72909za7,
		BGl__stringzd2cize3zd3zf3z11zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2cize3zf3zd2envz10zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2ciza7e3za72910za7,
		BGl__stringzd2cize3zf3zc2zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__stringza700za7za7__r42911za7, va_generic_entry,
		BGl__stringz00zz__r4_strings_6_7z00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_substringzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__substringza700za7za7_2912za7, opt_generic_entry,
		BGl__substringz00zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2cizc3zd3zf3zd2envze3zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2ciza7c3za72913za7,
		BGl__stringzd2cizc3zd3zf3z31zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2hexzd2internz12zd2envzc0zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2hexza7d22914z00,
		BGl__stringzd2hexzd2internz12z12zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2prefixzd2cizf3zd2envz21zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2prefix2915za7, opt_generic_entry,
		BGl__stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_substringzd2urzd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__substringza7d2urza72916z00,
		BGl__substringzd2urzd2zz__r4_strings_6_7z00, 0L, BUNSPEC, 3);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long
		BgL_checksumz00_4700, char *BgL_fromz00_4701)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_strings_6_7z00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_strings_6_7z00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__r4_strings_6_7z00();
					BGl_importedzd2moduleszd2initz00zz__r4_strings_6_7z00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__r4_strings_6_7z00()
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 18 */
			BGl_symbol2668z00zz__r4_strings_6_7z00 =
				bstring_to_symbol(BGl_string2669z00zz__r4_strings_6_7z00);
			BGl_symbol2673z00zz__r4_strings_6_7z00 =
				bstring_to_symbol(BGl_string2674z00zz__r4_strings_6_7z00);
			BGl_symbol2676z00zz__r4_strings_6_7z00 =
				bstring_to_symbol(BGl_string2677z00zz__r4_strings_6_7z00);
			BGl_symbol2680z00zz__r4_strings_6_7z00 =
				bstring_to_symbol(BGl_string2681z00zz__r4_strings_6_7z00);
			BGl_symbol2692z00zz__r4_strings_6_7z00 =
				bstring_to_symbol(BGl_string2693z00zz__r4_strings_6_7z00);
			BGl_symbol2695z00zz__r4_strings_6_7z00 =
				bstring_to_symbol(BGl_string2696z00zz__r4_strings_6_7z00);
			BGl_symbol2698z00zz__r4_strings_6_7z00 =
				bstring_to_symbol(BGl_string2699z00zz__r4_strings_6_7z00);
			BGl_symbol2701z00zz__r4_strings_6_7z00 =
				bstring_to_symbol(BGl_string2702z00zz__r4_strings_6_7z00);
			BGl_symbol2704z00zz__r4_strings_6_7z00 =
				bstring_to_symbol(BGl_string2705z00zz__r4_strings_6_7z00);
			BGl_symbol2707z00zz__r4_strings_6_7z00 =
				bstring_to_symbol(BGl_string2708z00zz__r4_strings_6_7z00);
			BGl_symbol2712z00zz__r4_strings_6_7z00 =
				bstring_to_symbol(BGl_string2713z00zz__r4_strings_6_7z00);
			BGl_symbol2714z00zz__r4_strings_6_7z00 =
				bstring_to_symbol(BGl_string2715z00zz__r4_strings_6_7z00);
			BGl_symbol2717z00zz__r4_strings_6_7z00 =
				bstring_to_symbol(BGl_string2718z00zz__r4_strings_6_7z00);
			return (BGl_symbol2721z00zz__r4_strings_6_7z00 =
				bstring_to_symbol(BGl_string2722z00zz__r4_strings_6_7z00), BUNSPEC);
		}
	}



/* string? */
	BGL_EXPORTED_DEF bool_t BGl_stringzf3zf3zz__r4_strings_6_7z00(obj_t
		BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 274 */
			return STRINGP(BgL_objz00_1);
		}
	}



/* _string? */
	obj_t BGl__stringzf3zf3zz__r4_strings_6_7z00(obj_t BgL_envz00_3994,
		obj_t BgL_objz00_3995)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 274 */
			return BBOOL(STRINGP(BgL_objz00_3995));
		}
	}



/* string-null? */
	BGL_EXPORTED_DEF bool_t BGl_stringzd2nullzf3z21zz__r4_strings_6_7z00(obj_t
		BgL_strz00_2)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 280 */
			return (STRING_LENGTH(BgL_strz00_2) == ((long) 0));
		}
	}



/* _string-null? */
	obj_t BGl__stringzd2nullzf3z21zz__r4_strings_6_7z00(obj_t BgL_envz00_3996,
		obj_t BgL_strz00_3997)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 280 */
			{	/* Ieee/string.scm 281 */
				bool_t BgL_auxz00_4726;

				{	/* Ieee/string.scm 281 */
					obj_t BgL_strz00_4588;

					if (STRINGP(BgL_strz00_3997))
						{	/* Ieee/string.scm 281 */
							BgL_strz00_4588 = BgL_strz00_3997;
						}
					else
						{
							obj_t BgL_auxz00_4729;

							BgL_auxz00_4729 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 13393)),
								BGl_string2596z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_strz00_3997);
							FAILURE(BgL_auxz00_4729, BFALSE, BFALSE);
						}
					BgL_auxz00_4726 = (STRING_LENGTH(BgL_strz00_4588) == ((long) 0));
				}
				return BBOOL(BgL_auxz00_4726);
			}
		}
	}



/* make-string */
	BGL_EXPORTED_DEF obj_t BGl_makezd2stringzd2zz__r4_strings_6_7z00(long
		BgL_kz00_3, obj_t BgL_charz00_4)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 286 */
			if (NULLP(BgL_charz00_4))
				{	/* Ieee/string.scm 287 */
					return make_string(BgL_kz00_3, ((unsigned char) ' '));
				}
			else
				{	/* Ieee/string.scm 287 */
					obj_t BgL_arg1240z00_4589;

					BgL_arg1240z00_4589 = CAR(BgL_charz00_4);
					return make_string(BgL_kz00_3, CCHAR(BgL_arg1240z00_4589));
				}
		}
	}



/* _make-string */
	obj_t BGl__makezd2stringzd2zz__r4_strings_6_7z00(obj_t BgL_envz00_3998,
		obj_t BgL_kz00_3999, obj_t BgL_charz00_4000)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 286 */
			{	/* Ieee/string.scm 287 */
				long BgL_kz00_4590;

				{	/* Ieee/string.scm 287 */
					obj_t BgL_auxz00_4742;

					if (INTEGERP(BgL_kz00_3999))
						{	/* Ieee/string.scm 287 */
							BgL_auxz00_4742 = BgL_kz00_3999;
						}
					else
						{
							obj_t BgL_auxz00_4745;

							BgL_auxz00_4745 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 13681)),
								BGl_string2598z00zz__r4_strings_6_7z00,
								BGl_string2599z00zz__r4_strings_6_7z00, BgL_kz00_3999);
							FAILURE(BgL_auxz00_4745, BFALSE, BFALSE);
						}
					BgL_kz00_4590 = (long) CINT(BgL_auxz00_4742);
				}
				if (NULLP(BgL_charz00_4000))
					{	/* Ieee/string.scm 287 */
						return make_string(BgL_kz00_4590, ((unsigned char) ' '));
					}
				else
					{	/* Ieee/string.scm 287 */
						obj_t BgL_arg1240z00_4592;

						BgL_arg1240z00_4592 = CAR(BgL_charz00_4000);
						return make_string(BgL_kz00_4590, CCHAR(BgL_arg1240z00_4592));
					}
			}
		}
	}



/* string */
	BGL_EXPORTED_DEF obj_t BGl_stringz00zz__r4_strings_6_7z00(obj_t
		BgL_charsz00_5)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 294 */
			return BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_charsz00_5);
		}
	}



/* _string */
	obj_t BGl__stringz00zz__r4_strings_6_7z00(obj_t BgL_envz00_4001,
		obj_t BgL_charsz00_4002)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 294 */
			return BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_charsz00_4002);
		}
	}



/* string-length */
	BGL_EXPORTED_DEF long BGl_stringzd2lengthzd2zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_6)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 300 */
			return STRING_LENGTH(BgL_stringz00_6);
		}
	}



/* _string-length */
	obj_t BGl__stringzd2lengthzd2zz__r4_strings_6_7z00(obj_t BgL_envz00_4003,
		obj_t BgL_stringz00_4004)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 300 */
			{	/* Ieee/string.scm 301 */
				long BgL_auxz00_4759;

				{	/* Ieee/string.scm 301 */
					obj_t BgL_stringz00_4594;

					if (STRINGP(BgL_stringz00_4004))
						{	/* Ieee/string.scm 301 */
							BgL_stringz00_4594 = BgL_stringz00_4004;
						}
					else
						{
							obj_t BgL_auxz00_4762;

							BgL_auxz00_4762 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 14312)),
								BGl_string2600z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_stringz00_4004);
							FAILURE(BgL_auxz00_4762, BFALSE, BFALSE);
						}
					BgL_auxz00_4759 = STRING_LENGTH(BgL_stringz00_4594);
				}
				return BINT(BgL_auxz00_4759);
			}
		}
	}



/* string-ref */
	BGL_EXPORTED_DEF unsigned char BGl_stringzd2refzd2zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_7, long BgL_kz00_8)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 306 */
			return STRING_REF(BgL_stringz00_7, BgL_kz00_8);
		}
	}



/* _string-ref */
	obj_t BGl__stringzd2refzd2zz__r4_strings_6_7z00(obj_t BgL_envz00_4005,
		obj_t BgL_stringz00_4006, obj_t BgL_kz00_4007)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 306 */
			{	/* Ieee/string.scm 307 */
				unsigned char BgL_auxz00_4769;

				{	/* Ieee/string.scm 307 */
					obj_t BgL_stringz00_4595;

					long BgL_kz00_4596;

					if (STRINGP(BgL_stringz00_4006))
						{	/* Ieee/string.scm 307 */
							BgL_stringz00_4595 = BgL_stringz00_4006;
						}
					else
						{
							obj_t BgL_auxz00_4772;

							BgL_auxz00_4772 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 14600)),
								BGl_string2601z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_stringz00_4006);
							FAILURE(BgL_auxz00_4772, BFALSE, BFALSE);
						}
					{	/* Ieee/string.scm 307 */
						obj_t BgL_auxz00_4776;

						if (INTEGERP(BgL_kz00_4007))
							{	/* Ieee/string.scm 307 */
								BgL_auxz00_4776 = BgL_kz00_4007;
							}
						else
							{
								obj_t BgL_auxz00_4779;

								BgL_auxz00_4779 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 14600)),
									BGl_string2601z00zz__r4_strings_6_7z00,
									BGl_string2599z00zz__r4_strings_6_7z00, BgL_kz00_4007);
								FAILURE(BgL_auxz00_4779, BFALSE, BFALSE);
							}
						BgL_kz00_4596 = (long) CINT(BgL_auxz00_4776);
					}
					BgL_auxz00_4769 = STRING_REF(BgL_stringz00_4595, BgL_kz00_4596);
				}
				return BCHAR(BgL_auxz00_4769);
			}
		}
	}



/* string-set! */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2setz12zc0zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_9, long BgL_kz00_10, unsigned char BgL_charz00_11)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 312 */
			return STRING_SET(BgL_stringz00_9, BgL_kz00_10, BgL_charz00_11);
		}
	}



/* _string-set! */
	obj_t BGl__stringzd2setz12zc0zz__r4_strings_6_7z00(obj_t BgL_envz00_4008,
		obj_t BgL_stringz00_4009, obj_t BgL_kz00_4010, obj_t BgL_charz00_4011)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 312 */
			{	/* Ieee/string.scm 313 */
				obj_t BgL_stringz00_4597;

				long BgL_kz00_4598;

				unsigned char BgL_charz00_4599;

				if (STRINGP(BgL_stringz00_4009))
					{	/* Ieee/string.scm 313 */
						BgL_stringz00_4597 = BgL_stringz00_4009;
					}
				else
					{
						obj_t BgL_auxz00_4789;

						BgL_auxz00_4789 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 14894)),
							BGl_string2602z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_stringz00_4009);
						FAILURE(BgL_auxz00_4789, BFALSE, BFALSE);
					}
				{	/* Ieee/string.scm 313 */
					obj_t BgL_auxz00_4793;

					if (INTEGERP(BgL_kz00_4010))
						{	/* Ieee/string.scm 313 */
							BgL_auxz00_4793 = BgL_kz00_4010;
						}
					else
						{
							obj_t BgL_auxz00_4796;

							BgL_auxz00_4796 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 14894)),
								BGl_string2602z00zz__r4_strings_6_7z00,
								BGl_string2599z00zz__r4_strings_6_7z00, BgL_kz00_4010);
							FAILURE(BgL_auxz00_4796, BFALSE, BFALSE);
						}
					BgL_kz00_4598 = (long) CINT(BgL_auxz00_4793);
				}
				{	/* Ieee/string.scm 313 */
					obj_t BgL_auxz00_4801;

					if (CHARP(BgL_charz00_4011))
						{	/* Ieee/string.scm 313 */
							BgL_auxz00_4801 = BgL_charz00_4011;
						}
					else
						{
							obj_t BgL_auxz00_4804;

							BgL_auxz00_4804 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 14894)),
								BGl_string2602z00zz__r4_strings_6_7z00,
								BGl_string2603z00zz__r4_strings_6_7z00, BgL_charz00_4011);
							FAILURE(BgL_auxz00_4804, BFALSE, BFALSE);
						}
					BgL_charz00_4599 = CCHAR(BgL_auxz00_4801);
				}
				return STRING_SET(BgL_stringz00_4597, BgL_kz00_4598, BgL_charz00_4599);
			}
		}
	}



/* string-ref-ur */
	BGL_EXPORTED_DEF unsigned char
		BGl_stringzd2refzd2urz00zz__r4_strings_6_7z00(obj_t BgL_stringz00_12,
		long BgL_kz00_13)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 318 */
			return STRING_REF(BgL_stringz00_12, BgL_kz00_13);
		}
	}



/* _string-ref-ur */
	obj_t BGl__stringzd2refzd2urz00zz__r4_strings_6_7z00(obj_t BgL_envz00_4012,
		obj_t BgL_stringz00_4013, obj_t BgL_kz00_4014)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 318 */
			{	/* Ieee/string.scm 319 */
				unsigned char BgL_auxz00_4811;

				{	/* Ieee/string.scm 319 */
					obj_t BgL_stringz00_4600;

					long BgL_kz00_4601;

					if (STRINGP(BgL_stringz00_4013))
						{	/* Ieee/string.scm 319 */
							BgL_stringz00_4600 = BgL_stringz00_4013;
						}
					else
						{
							obj_t BgL_auxz00_4814;

							BgL_auxz00_4814 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 15190)),
								BGl_string2604z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_stringz00_4013);
							FAILURE(BgL_auxz00_4814, BFALSE, BFALSE);
						}
					{	/* Ieee/string.scm 319 */
						obj_t BgL_auxz00_4818;

						if (INTEGERP(BgL_kz00_4014))
							{	/* Ieee/string.scm 319 */
								BgL_auxz00_4818 = BgL_kz00_4014;
							}
						else
							{
								obj_t BgL_auxz00_4821;

								BgL_auxz00_4821 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 15190)),
									BGl_string2604z00zz__r4_strings_6_7z00,
									BGl_string2599z00zz__r4_strings_6_7z00, BgL_kz00_4014);
								FAILURE(BgL_auxz00_4821, BFALSE, BFALSE);
							}
						BgL_kz00_4601 = (long) CINT(BgL_auxz00_4818);
					}
					BgL_auxz00_4811 = STRING_REF(BgL_stringz00_4600, BgL_kz00_4601);
				}
				return BCHAR(BgL_auxz00_4811);
			}
		}
	}



/* string-set-ur! */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2setzd2urz12z12zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_14, long BgL_kz00_15, unsigned char BgL_charz00_16)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 324 */
			return STRING_SET(BgL_stringz00_14, BgL_kz00_15, BgL_charz00_16);
		}
	}



/* _string-set-ur! */
	obj_t BGl__stringzd2setzd2urz12z12zz__r4_strings_6_7z00(obj_t BgL_envz00_4015,
		obj_t BgL_stringz00_4016, obj_t BgL_kz00_4017, obj_t BgL_charz00_4018)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 324 */
			{	/* Ieee/string.scm 325 */
				obj_t BgL_stringz00_4602;

				long BgL_kz00_4603;

				unsigned char BgL_charz00_4604;

				if (STRINGP(BgL_stringz00_4016))
					{	/* Ieee/string.scm 325 */
						BgL_stringz00_4602 = BgL_stringz00_4016;
					}
				else
					{
						obj_t BgL_auxz00_4831;

						BgL_auxz00_4831 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 15487)),
							BGl_string2605z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_stringz00_4016);
						FAILURE(BgL_auxz00_4831, BFALSE, BFALSE);
					}
				{	/* Ieee/string.scm 325 */
					obj_t BgL_auxz00_4835;

					if (INTEGERP(BgL_kz00_4017))
						{	/* Ieee/string.scm 325 */
							BgL_auxz00_4835 = BgL_kz00_4017;
						}
					else
						{
							obj_t BgL_auxz00_4838;

							BgL_auxz00_4838 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 15487)),
								BGl_string2605z00zz__r4_strings_6_7z00,
								BGl_string2599z00zz__r4_strings_6_7z00, BgL_kz00_4017);
							FAILURE(BgL_auxz00_4838, BFALSE, BFALSE);
						}
					BgL_kz00_4603 = (long) CINT(BgL_auxz00_4835);
				}
				{	/* Ieee/string.scm 325 */
					obj_t BgL_auxz00_4843;

					if (CHARP(BgL_charz00_4018))
						{	/* Ieee/string.scm 325 */
							BgL_auxz00_4843 = BgL_charz00_4018;
						}
					else
						{
							obj_t BgL_auxz00_4846;

							BgL_auxz00_4846 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 15487)),
								BGl_string2605z00zz__r4_strings_6_7z00,
								BGl_string2603z00zz__r4_strings_6_7z00, BgL_charz00_4018);
							FAILURE(BgL_auxz00_4846, BFALSE, BFALSE);
						}
					BgL_charz00_4604 = CCHAR(BgL_auxz00_4843);
				}
				return STRING_SET(BgL_stringz00_4602, BgL_kz00_4603, BgL_charz00_4604);
			}
		}
	}



/* string=? */
	BGL_EXPORTED_DEF bool_t BGl_stringzd3zf3z20zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_17, obj_t BgL_string2z00_18)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 330 */
			return bigloo_strcmp(BgL_string1z00_17, BgL_string2z00_18);
		}
	}



/* _string=? */
	obj_t BGl__stringzd3zf3z20zz__r4_strings_6_7z00(obj_t BgL_envz00_4019,
		obj_t BgL_string1z00_4020, obj_t BgL_string2z00_4021)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 330 */
			{	/* Ieee/string.scm 331 */
				bool_t BgL_auxz00_4853;

				{	/* Ieee/string.scm 331 */
					obj_t BgL_string1z00_4605;

					obj_t BgL_string2z00_4606;

					if (STRINGP(BgL_string1z00_4020))
						{	/* Ieee/string.scm 331 */
							BgL_string1z00_4605 = BgL_string1z00_4020;
						}
					else
						{
							obj_t BgL_auxz00_4856;

							BgL_auxz00_4856 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 15785)),
								BGl_string2606z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_string1z00_4020);
							FAILURE(BgL_auxz00_4856, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_string2z00_4021))
						{	/* Ieee/string.scm 331 */
							BgL_string2z00_4606 = BgL_string2z00_4021;
						}
					else
						{
							obj_t BgL_auxz00_4862;

							BgL_auxz00_4862 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 15785)),
								BGl_string2606z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_string2z00_4021);
							FAILURE(BgL_auxz00_4862, BFALSE, BFALSE);
						}
					BgL_auxz00_4853 =
						bigloo_strcmp(BgL_string1z00_4605, BgL_string2z00_4606);
				}
				return BBOOL(BgL_auxz00_4853);
			}
		}
	}



/* substring=? */
	BGL_EXPORTED_DEF bool_t BGl_substringzd3zf3z20zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_19, obj_t BgL_string2z00_20, long BgL_lenz00_21)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 336 */
			return
				bigloo_strncmp(BgL_string1z00_19, BgL_string2z00_20, BgL_lenz00_21);
		}
	}



/* _substring=? */
	obj_t BGl__substringzd3zf3z20zz__r4_strings_6_7z00(obj_t BgL_envz00_4022,
		obj_t BgL_string1z00_4023, obj_t BgL_string2z00_4024, obj_t BgL_lenz00_4025)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 336 */
			{	/* Ieee/string.scm 337 */
				bool_t BgL_auxz00_4869;

				{	/* Ieee/string.scm 337 */
					obj_t BgL_string1z00_4607;

					obj_t BgL_string2z00_4608;

					long BgL_lenz00_4609;

					if (STRINGP(BgL_string1z00_4023))
						{	/* Ieee/string.scm 337 */
							BgL_string1z00_4607 = BgL_string1z00_4023;
						}
					else
						{
							obj_t BgL_auxz00_4872;

							BgL_auxz00_4872 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 16089)),
								BGl_string2607z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_string1z00_4023);
							FAILURE(BgL_auxz00_4872, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_string2z00_4024))
						{	/* Ieee/string.scm 337 */
							BgL_string2z00_4608 = BgL_string2z00_4024;
						}
					else
						{
							obj_t BgL_auxz00_4878;

							BgL_auxz00_4878 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 16089)),
								BGl_string2607z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_string2z00_4024);
							FAILURE(BgL_auxz00_4878, BFALSE, BFALSE);
						}
					{	/* Ieee/string.scm 337 */
						obj_t BgL_auxz00_4882;

						if (INTEGERP(BgL_lenz00_4025))
							{	/* Ieee/string.scm 337 */
								BgL_auxz00_4882 = BgL_lenz00_4025;
							}
						else
							{
								obj_t BgL_auxz00_4885;

								BgL_auxz00_4885 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 16089)),
									BGl_string2607z00zz__r4_strings_6_7z00,
									BGl_string2599z00zz__r4_strings_6_7z00, BgL_lenz00_4025);
								FAILURE(BgL_auxz00_4885, BFALSE, BFALSE);
							}
						BgL_lenz00_4609 = (long) CINT(BgL_auxz00_4882);
					}
					BgL_auxz00_4869 =
						bigloo_strncmp(BgL_string1z00_4607, BgL_string2z00_4608,
						BgL_lenz00_4609);
				}
				return BBOOL(BgL_auxz00_4869);
			}
		}
	}



/* _substring-at? */
	obj_t BGl__substringzd2atzf3z21zz__r4_strings_6_7z00(obj_t BgL_envz00_27,
		obj_t BgL_optz00_26)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 342 */
			{	/* Ieee/string.scm 342 */
				obj_t BgL_g1155z00_4610;

				obj_t BgL_g1157z00_4611;

				obj_t BgL_g1158z00_4612;

				BgL_g1155z00_4610 = VECTOR_REF(BgL_optz00_26, (int) (((long) 0)));
				BgL_g1157z00_4611 = VECTOR_REF(BgL_optz00_26, (int) (((long) 1)));
				BgL_g1158z00_4612 = VECTOR_REF(BgL_optz00_26, (int) (((long) 2)));
				{	/* Ieee/string.scm 342 */
					int BgL_aux1160z00_4613;

					BgL_aux1160z00_4613 = VECTOR_LENGTH(BgL_optz00_26);
					switch ((long) (BgL_aux1160z00_4613))
						{
						case ((long) 3):

							{	/* Ieee/string.scm 342 */

								{	/* Ieee/string.scm 342 */
									obj_t BgL_arg1242z00_4614;

									obj_t BgL_arg1243z00_4615;

									obj_t BgL_arg1244z00_4616;

									BgL_arg1242z00_4614 =
										VECTOR_REF(BgL_optz00_26, (int) (((long) 0)));
									BgL_arg1243z00_4615 =
										VECTOR_REF(BgL_optz00_26, (int) (((long) 1)));
									BgL_arg1244z00_4616 =
										VECTOR_REF(BgL_optz00_26, (int) (((long) 2)));
									{	/* Ieee/string.scm 342 */
										bool_t BgL_res2132z00_4617;

										{	/* Ieee/string.scm 342 */
											obj_t BgL_string1z00_4618;

											obj_t BgL_string2z00_4619;

											long BgL_offz00_4620;

											obj_t BgL_lenz00_4621;

											if (STRINGP(BgL_arg1242z00_4614))
												{	/* Ieee/string.scm 342 */
													BgL_string1z00_4618 = BgL_arg1242z00_4614;
												}
											else
												{
													obj_t BgL_auxz00_4907;

													BgL_auxz00_4907 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 16348)),
														BGl_string2608z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1242z00_4614);
													FAILURE(BgL_auxz00_4907, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_arg1243z00_4615))
												{	/* Ieee/string.scm 342 */
													BgL_string2z00_4619 = BgL_arg1243z00_4615;
												}
											else
												{
													obj_t BgL_auxz00_4913;

													BgL_auxz00_4913 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 16348)),
														BGl_string2608z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1243z00_4615);
													FAILURE(BgL_auxz00_4913, BFALSE, BFALSE);
												}
											{	/* Ieee/string.scm 342 */
												obj_t BgL_auxz00_4917;

												if (INTEGERP(BgL_arg1244z00_4616))
													{	/* Ieee/string.scm 342 */
														BgL_auxz00_4917 = BgL_arg1244z00_4616;
													}
												else
													{
														obj_t BgL_auxz00_4920;

														BgL_auxz00_4920 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 16348)),
															BGl_string2608z00zz__r4_strings_6_7z00,
															BGl_string2599z00zz__r4_strings_6_7z00,
															BgL_arg1244z00_4616);
														FAILURE(BgL_auxz00_4920, BFALSE, BFALSE);
													}
												BgL_offz00_4620 = (long) CINT(BgL_auxz00_4917);
											}
											BgL_lenz00_4621 = BINT(((long) -1));
											{	/* Ieee/string.scm 342 */
												bool_t BgL_testz00_4926;

												{	/* Ieee/string.scm 342 */
													long BgL_n1z00_4622;

													{	/* Ieee/string.scm 342 */
														obj_t BgL_auxz00_4927;

														if (INTEGERP(BgL_lenz00_4621))
															{	/* Ieee/string.scm 342 */
																BgL_auxz00_4927 = BgL_lenz00_4621;
															}
														else
															{
																obj_t BgL_auxz00_4930;

																BgL_auxz00_4930 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2595z00zz__r4_strings_6_7z00,
																	BINT(((long) 16348)),
																	BGl_string2608z00zz__r4_strings_6_7z00,
																	BGl_string2599z00zz__r4_strings_6_7z00,
																	BgL_lenz00_4621);
																FAILURE(BgL_auxz00_4930, BFALSE, BFALSE);
															}
														BgL_n1z00_4622 = (long) CINT(BgL_auxz00_4927);
													}
													BgL_testz00_4926 = (BgL_n1z00_4622 == ((long) -1));
												}
												if (BgL_testz00_4926)
													{	/* Ieee/string.scm 342 */
														BgL_res2132z00_4617 =
															bigloo_strcmp_at(BgL_string1z00_4618,
															BgL_string2z00_4619, BgL_offz00_4620);
													}
												else
													{	/* Ieee/string.scm 342 */
														long BgL_auxz00_4937;

														{	/* Ieee/string.scm 342 */
															obj_t BgL_auxz00_4938;

															if (INTEGERP(BgL_lenz00_4621))
																{	/* Ieee/string.scm 342 */
																	BgL_auxz00_4938 = BgL_lenz00_4621;
																}
															else
																{
																	obj_t BgL_auxz00_4941;

																	BgL_auxz00_4941 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2595z00zz__r4_strings_6_7z00,
																		BINT(((long) 16348)),
																		BGl_string2608z00zz__r4_strings_6_7z00,
																		BGl_string2599z00zz__r4_strings_6_7z00,
																		BgL_lenz00_4621);
																	FAILURE(BgL_auxz00_4941, BFALSE, BFALSE);
																}
															BgL_auxz00_4937 = (long) CINT(BgL_auxz00_4938);
														}
														BgL_res2132z00_4617 =
															bigloo_strncmp_at(BgL_string1z00_4618,
															BgL_string2z00_4619, BgL_offz00_4620,
															BgL_auxz00_4937);
										}}}
										return BBOOL(BgL_res2132z00_4617);
									}
								}
							}
							break;
						case ((long) 4):

							{	/* Ieee/string.scm 342 */
								obj_t BgL_lenz00_4623;

								BgL_lenz00_4623 = VECTOR_REF(BgL_optz00_26, (int) (((long) 3)));
								{	/* Ieee/string.scm 342 */

									{	/* Ieee/string.scm 342 */
										obj_t BgL_arg1245z00_4624;

										obj_t BgL_arg1246z00_4625;

										obj_t BgL_arg1247z00_4626;

										BgL_arg1245z00_4624 =
											VECTOR_REF(BgL_optz00_26, (int) (((long) 0)));
										BgL_arg1246z00_4625 =
											VECTOR_REF(BgL_optz00_26, (int) (((long) 1)));
										BgL_arg1247z00_4626 =
											VECTOR_REF(BgL_optz00_26, (int) (((long) 2)));
										{	/* Ieee/string.scm 342 */
											bool_t BgL_res2133z00_4627;

											{	/* Ieee/string.scm 342 */
												obj_t BgL_string1z00_4628;

												obj_t BgL_string2z00_4629;

												long BgL_offz00_4630;

												if (STRINGP(BgL_arg1245z00_4624))
													{	/* Ieee/string.scm 342 */
														BgL_string1z00_4628 = BgL_arg1245z00_4624;
													}
												else
													{
														obj_t BgL_auxz00_4958;

														BgL_auxz00_4958 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 16348)),
															BGl_string2608z00zz__r4_strings_6_7z00,
															BGl_string2597z00zz__r4_strings_6_7z00,
															BgL_arg1245z00_4624);
														FAILURE(BgL_auxz00_4958, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_arg1246z00_4625))
													{	/* Ieee/string.scm 342 */
														BgL_string2z00_4629 = BgL_arg1246z00_4625;
													}
												else
													{
														obj_t BgL_auxz00_4964;

														BgL_auxz00_4964 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 16348)),
															BGl_string2608z00zz__r4_strings_6_7z00,
															BGl_string2597z00zz__r4_strings_6_7z00,
															BgL_arg1246z00_4625);
														FAILURE(BgL_auxz00_4964, BFALSE, BFALSE);
													}
												{	/* Ieee/string.scm 342 */
													obj_t BgL_auxz00_4968;

													if (INTEGERP(BgL_arg1247z00_4626))
														{	/* Ieee/string.scm 342 */
															BgL_auxz00_4968 = BgL_arg1247z00_4626;
														}
													else
														{
															obj_t BgL_auxz00_4971;

															BgL_auxz00_4971 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2595z00zz__r4_strings_6_7z00,
																BINT(((long) 16348)),
																BGl_string2608z00zz__r4_strings_6_7z00,
																BGl_string2599z00zz__r4_strings_6_7z00,
																BgL_arg1247z00_4626);
															FAILURE(BgL_auxz00_4971, BFALSE, BFALSE);
														}
													BgL_offz00_4630 = (long) CINT(BgL_auxz00_4968);
												}
												{	/* Ieee/string.scm 342 */
													bool_t BgL_testz00_4976;

													{	/* Ieee/string.scm 342 */
														long BgL_n1z00_4631;

														{	/* Ieee/string.scm 342 */
															obj_t BgL_auxz00_4977;

															if (INTEGERP(BgL_lenz00_4623))
																{	/* Ieee/string.scm 342 */
																	BgL_auxz00_4977 = BgL_lenz00_4623;
																}
															else
																{
																	obj_t BgL_auxz00_4980;

																	BgL_auxz00_4980 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2595z00zz__r4_strings_6_7z00,
																		BINT(((long) 16348)),
																		BGl_string2608z00zz__r4_strings_6_7z00,
																		BGl_string2599z00zz__r4_strings_6_7z00,
																		BgL_lenz00_4623);
																	FAILURE(BgL_auxz00_4980, BFALSE, BFALSE);
																}
															BgL_n1z00_4631 = (long) CINT(BgL_auxz00_4977);
														}
														BgL_testz00_4976 = (BgL_n1z00_4631 == ((long) -1));
													}
													if (BgL_testz00_4976)
														{	/* Ieee/string.scm 342 */
															BgL_res2133z00_4627 =
																bigloo_strcmp_at(BgL_string1z00_4628,
																BgL_string2z00_4629, BgL_offz00_4630);
														}
													else
														{	/* Ieee/string.scm 342 */
															long BgL_auxz00_4987;

															{	/* Ieee/string.scm 342 */
																obj_t BgL_auxz00_4988;

																if (INTEGERP(BgL_lenz00_4623))
																	{	/* Ieee/string.scm 342 */
																		BgL_auxz00_4988 = BgL_lenz00_4623;
																	}
																else
																	{
																		obj_t BgL_auxz00_4991;

																		BgL_auxz00_4991 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2595z00zz__r4_strings_6_7z00,
																			BINT(((long) 16348)),
																			BGl_string2608z00zz__r4_strings_6_7z00,
																			BGl_string2599z00zz__r4_strings_6_7z00,
																			BgL_lenz00_4623);
																		FAILURE(BgL_auxz00_4991, BFALSE, BFALSE);
																	}
																BgL_auxz00_4987 = (long) CINT(BgL_auxz00_4988);
															}
															BgL_res2133z00_4627 =
																bigloo_strncmp_at(BgL_string1z00_4628,
																BgL_string2z00_4629, BgL_offz00_4630,
																BgL_auxz00_4987);
											}}}
											return BBOOL(BgL_res2133z00_4627);
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



/* substring-at? */
	BGL_EXPORTED_DEF bool_t BGl_substringzd2atzf3z21zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_22, obj_t BgL_string2z00_23, long BgL_offz00_24,
		obj_t BgL_lenz00_25)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 342 */
			if (((long) CINT(BgL_lenz00_25) == ((long) -1)))
				{	/* Ieee/string.scm 343 */
					return
						bigloo_strcmp_at(BgL_string1z00_22, BgL_string2z00_23,
						BgL_offz00_24);
				}
			else
				{	/* Ieee/string.scm 343 */
					return
						bigloo_strncmp_at(BgL_string1z00_22, BgL_string2z00_23,
						BgL_offz00_24, (long) CINT(BgL_lenz00_25));
		}}
	}



/* substring-ci=? */
	BGL_EXPORTED_DEF bool_t BGl_substringzd2cizd3zf3zf2zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_28, obj_t BgL_string2z00_29, long BgL_lenz00_30)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 350 */
			return
				bigloo_strncmp_ci(BgL_string1z00_28, BgL_string2z00_29, BgL_lenz00_30);
		}
	}



/* _substring-ci=? */
	obj_t BGl__substringzd2cizd3zf3zf2zz__r4_strings_6_7z00(obj_t BgL_envz00_4026,
		obj_t BgL_string1z00_4027, obj_t BgL_string2z00_4028, obj_t BgL_lenz00_4029)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 350 */
			{	/* Ieee/string.scm 351 */
				bool_t BgL_auxz00_5007;

				{	/* Ieee/string.scm 351 */
					obj_t BgL_string1z00_4632;

					obj_t BgL_string2z00_4633;

					long BgL_lenz00_4634;

					if (STRINGP(BgL_string1z00_4027))
						{	/* Ieee/string.scm 351 */
							BgL_string1z00_4632 = BgL_string1z00_4027;
						}
					else
						{
							obj_t BgL_auxz00_5010;

							BgL_auxz00_5010 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 16808)),
								BGl_string2609z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_string1z00_4027);
							FAILURE(BgL_auxz00_5010, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_string2z00_4028))
						{	/* Ieee/string.scm 351 */
							BgL_string2z00_4633 = BgL_string2z00_4028;
						}
					else
						{
							obj_t BgL_auxz00_5016;

							BgL_auxz00_5016 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 16808)),
								BGl_string2609z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_string2z00_4028);
							FAILURE(BgL_auxz00_5016, BFALSE, BFALSE);
						}
					{	/* Ieee/string.scm 351 */
						obj_t BgL_auxz00_5020;

						if (INTEGERP(BgL_lenz00_4029))
							{	/* Ieee/string.scm 351 */
								BgL_auxz00_5020 = BgL_lenz00_4029;
							}
						else
							{
								obj_t BgL_auxz00_5023;

								BgL_auxz00_5023 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 16808)),
									BGl_string2609z00zz__r4_strings_6_7z00,
									BGl_string2599z00zz__r4_strings_6_7z00, BgL_lenz00_4029);
								FAILURE(BgL_auxz00_5023, BFALSE, BFALSE);
							}
						BgL_lenz00_4634 = (long) CINT(BgL_auxz00_5020);
					}
					BgL_auxz00_5007 =
						bigloo_strncmp_ci(BgL_string1z00_4632, BgL_string2z00_4633,
						BgL_lenz00_4634);
				}
				return BBOOL(BgL_auxz00_5007);
			}
		}
	}



/* _substring-ci-at? */
	obj_t BGl__substringzd2cizd2atzf3zf3zz__r4_strings_6_7z00(obj_t BgL_envz00_36,
		obj_t BgL_optz00_35)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 356 */
			{	/* Ieee/string.scm 356 */
				obj_t BgL_g1161z00_4635;

				obj_t BgL_g1162z00_4636;

				obj_t BgL_g1163z00_4637;

				BgL_g1161z00_4635 = VECTOR_REF(BgL_optz00_35, (int) (((long) 0)));
				BgL_g1162z00_4636 = VECTOR_REF(BgL_optz00_35, (int) (((long) 1)));
				BgL_g1163z00_4637 = VECTOR_REF(BgL_optz00_35, (int) (((long) 2)));
				{	/* Ieee/string.scm 356 */
					int BgL_aux1165z00_4638;

					BgL_aux1165z00_4638 = VECTOR_LENGTH(BgL_optz00_35);
					switch ((long) (BgL_aux1165z00_4638))
						{
						case ((long) 3):

							{	/* Ieee/string.scm 356 */

								{	/* Ieee/string.scm 356 */
									obj_t BgL_arg1250z00_4639;

									obj_t BgL_arg1251z00_4640;

									obj_t BgL_arg1252z00_4641;

									BgL_arg1250z00_4639 =
										VECTOR_REF(BgL_optz00_35, (int) (((long) 0)));
									BgL_arg1251z00_4640 =
										VECTOR_REF(BgL_optz00_35, (int) (((long) 1)));
									BgL_arg1252z00_4641 =
										VECTOR_REF(BgL_optz00_35, (int) (((long) 2)));
									{	/* Ieee/string.scm 356 */
										bool_t BgL_res2134z00_4642;

										{	/* Ieee/string.scm 356 */
											obj_t BgL_string1z00_4643;

											obj_t BgL_string2z00_4644;

											long BgL_offz00_4645;

											obj_t BgL_lenz00_4646;

											if (STRINGP(BgL_arg1250z00_4639))
												{	/* Ieee/string.scm 356 */
													BgL_string1z00_4643 = BgL_arg1250z00_4639;
												}
											else
												{
													obj_t BgL_auxz00_5045;

													BgL_auxz00_5045 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 17070)),
														BGl_string2610z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1250z00_4639);
													FAILURE(BgL_auxz00_5045, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_arg1251z00_4640))
												{	/* Ieee/string.scm 356 */
													BgL_string2z00_4644 = BgL_arg1251z00_4640;
												}
											else
												{
													obj_t BgL_auxz00_5051;

													BgL_auxz00_5051 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 17070)),
														BGl_string2610z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1251z00_4640);
													FAILURE(BgL_auxz00_5051, BFALSE, BFALSE);
												}
											{	/* Ieee/string.scm 356 */
												obj_t BgL_auxz00_5055;

												if (INTEGERP(BgL_arg1252z00_4641))
													{	/* Ieee/string.scm 356 */
														BgL_auxz00_5055 = BgL_arg1252z00_4641;
													}
												else
													{
														obj_t BgL_auxz00_5058;

														BgL_auxz00_5058 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 17070)),
															BGl_string2610z00zz__r4_strings_6_7z00,
															BGl_string2599z00zz__r4_strings_6_7z00,
															BgL_arg1252z00_4641);
														FAILURE(BgL_auxz00_5058, BFALSE, BFALSE);
													}
												BgL_offz00_4645 = (long) CINT(BgL_auxz00_5055);
											}
											BgL_lenz00_4646 = BINT(((long) -1));
											{	/* Ieee/string.scm 356 */
												bool_t BgL_testz00_5064;

												{	/* Ieee/string.scm 356 */
													long BgL_n1z00_4647;

													{	/* Ieee/string.scm 356 */
														obj_t BgL_auxz00_5065;

														if (INTEGERP(BgL_lenz00_4646))
															{	/* Ieee/string.scm 356 */
																BgL_auxz00_5065 = BgL_lenz00_4646;
															}
														else
															{
																obj_t BgL_auxz00_5068;

																BgL_auxz00_5068 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2595z00zz__r4_strings_6_7z00,
																	BINT(((long) 17070)),
																	BGl_string2610z00zz__r4_strings_6_7z00,
																	BGl_string2599z00zz__r4_strings_6_7z00,
																	BgL_lenz00_4646);
																FAILURE(BgL_auxz00_5068, BFALSE, BFALSE);
															}
														BgL_n1z00_4647 = (long) CINT(BgL_auxz00_5065);
													}
													BgL_testz00_5064 = (BgL_n1z00_4647 == ((long) -1));
												}
												if (BgL_testz00_5064)
													{	/* Ieee/string.scm 356 */
														BgL_res2134z00_4642 =
															bigloo_strcmp_ci_at(BgL_string1z00_4643,
															BgL_string2z00_4644, BgL_offz00_4645);
													}
												else
													{	/* Ieee/string.scm 356 */
														long BgL_auxz00_5075;

														{	/* Ieee/string.scm 356 */
															obj_t BgL_auxz00_5076;

															if (INTEGERP(BgL_lenz00_4646))
																{	/* Ieee/string.scm 356 */
																	BgL_auxz00_5076 = BgL_lenz00_4646;
																}
															else
																{
																	obj_t BgL_auxz00_5079;

																	BgL_auxz00_5079 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2595z00zz__r4_strings_6_7z00,
																		BINT(((long) 17070)),
																		BGl_string2610z00zz__r4_strings_6_7z00,
																		BGl_string2599z00zz__r4_strings_6_7z00,
																		BgL_lenz00_4646);
																	FAILURE(BgL_auxz00_5079, BFALSE, BFALSE);
																}
															BgL_auxz00_5075 = (long) CINT(BgL_auxz00_5076);
														}
														BgL_res2134z00_4642 =
															bigloo_strncmp_ci_at(BgL_string1z00_4643,
															BgL_string2z00_4644, BgL_offz00_4645,
															BgL_auxz00_5075);
										}}}
										return BBOOL(BgL_res2134z00_4642);
									}
								}
							}
							break;
						case ((long) 4):

							{	/* Ieee/string.scm 356 */
								obj_t BgL_lenz00_4648;

								BgL_lenz00_4648 = VECTOR_REF(BgL_optz00_35, (int) (((long) 3)));
								{	/* Ieee/string.scm 356 */

									{	/* Ieee/string.scm 356 */
										obj_t BgL_arg1253z00_4649;

										obj_t BgL_arg1254z00_4650;

										obj_t BgL_arg1255z00_4651;

										BgL_arg1253z00_4649 =
											VECTOR_REF(BgL_optz00_35, (int) (((long) 0)));
										BgL_arg1254z00_4650 =
											VECTOR_REF(BgL_optz00_35, (int) (((long) 1)));
										BgL_arg1255z00_4651 =
											VECTOR_REF(BgL_optz00_35, (int) (((long) 2)));
										{	/* Ieee/string.scm 356 */
											bool_t BgL_res2135z00_4652;

											{	/* Ieee/string.scm 356 */
												obj_t BgL_string1z00_4653;

												obj_t BgL_string2z00_4654;

												long BgL_offz00_4655;

												if (STRINGP(BgL_arg1253z00_4649))
													{	/* Ieee/string.scm 356 */
														BgL_string1z00_4653 = BgL_arg1253z00_4649;
													}
												else
													{
														obj_t BgL_auxz00_5096;

														BgL_auxz00_5096 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 17070)),
															BGl_string2610z00zz__r4_strings_6_7z00,
															BGl_string2597z00zz__r4_strings_6_7z00,
															BgL_arg1253z00_4649);
														FAILURE(BgL_auxz00_5096, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_arg1254z00_4650))
													{	/* Ieee/string.scm 356 */
														BgL_string2z00_4654 = BgL_arg1254z00_4650;
													}
												else
													{
														obj_t BgL_auxz00_5102;

														BgL_auxz00_5102 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 17070)),
															BGl_string2610z00zz__r4_strings_6_7z00,
															BGl_string2597z00zz__r4_strings_6_7z00,
															BgL_arg1254z00_4650);
														FAILURE(BgL_auxz00_5102, BFALSE, BFALSE);
													}
												{	/* Ieee/string.scm 356 */
													obj_t BgL_auxz00_5106;

													if (INTEGERP(BgL_arg1255z00_4651))
														{	/* Ieee/string.scm 356 */
															BgL_auxz00_5106 = BgL_arg1255z00_4651;
														}
													else
														{
															obj_t BgL_auxz00_5109;

															BgL_auxz00_5109 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2595z00zz__r4_strings_6_7z00,
																BINT(((long) 17070)),
																BGl_string2610z00zz__r4_strings_6_7z00,
																BGl_string2599z00zz__r4_strings_6_7z00,
																BgL_arg1255z00_4651);
															FAILURE(BgL_auxz00_5109, BFALSE, BFALSE);
														}
													BgL_offz00_4655 = (long) CINT(BgL_auxz00_5106);
												}
												{	/* Ieee/string.scm 356 */
													bool_t BgL_testz00_5114;

													{	/* Ieee/string.scm 356 */
														long BgL_n1z00_4656;

														{	/* Ieee/string.scm 356 */
															obj_t BgL_auxz00_5115;

															if (INTEGERP(BgL_lenz00_4648))
																{	/* Ieee/string.scm 356 */
																	BgL_auxz00_5115 = BgL_lenz00_4648;
																}
															else
																{
																	obj_t BgL_auxz00_5118;

																	BgL_auxz00_5118 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2595z00zz__r4_strings_6_7z00,
																		BINT(((long) 17070)),
																		BGl_string2610z00zz__r4_strings_6_7z00,
																		BGl_string2599z00zz__r4_strings_6_7z00,
																		BgL_lenz00_4648);
																	FAILURE(BgL_auxz00_5118, BFALSE, BFALSE);
																}
															BgL_n1z00_4656 = (long) CINT(BgL_auxz00_5115);
														}
														BgL_testz00_5114 = (BgL_n1z00_4656 == ((long) -1));
													}
													if (BgL_testz00_5114)
														{	/* Ieee/string.scm 356 */
															BgL_res2135z00_4652 =
																bigloo_strcmp_ci_at(BgL_string1z00_4653,
																BgL_string2z00_4654, BgL_offz00_4655);
														}
													else
														{	/* Ieee/string.scm 356 */
															long BgL_auxz00_5125;

															{	/* Ieee/string.scm 356 */
																obj_t BgL_auxz00_5126;

																if (INTEGERP(BgL_lenz00_4648))
																	{	/* Ieee/string.scm 356 */
																		BgL_auxz00_5126 = BgL_lenz00_4648;
																	}
																else
																	{
																		obj_t BgL_auxz00_5129;

																		BgL_auxz00_5129 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2595z00zz__r4_strings_6_7z00,
																			BINT(((long) 17070)),
																			BGl_string2610z00zz__r4_strings_6_7z00,
																			BGl_string2599z00zz__r4_strings_6_7z00,
																			BgL_lenz00_4648);
																		FAILURE(BgL_auxz00_5129, BFALSE, BFALSE);
																	}
																BgL_auxz00_5125 = (long) CINT(BgL_auxz00_5126);
															}
															BgL_res2135z00_4652 =
																bigloo_strncmp_ci_at(BgL_string1z00_4653,
																BgL_string2z00_4654, BgL_offz00_4655,
																BgL_auxz00_5125);
											}}}
											return BBOOL(BgL_res2135z00_4652);
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



/* substring-ci-at? */
	BGL_EXPORTED_DEF bool_t
		BGl_substringzd2cizd2atzf3zf3zz__r4_strings_6_7z00(obj_t BgL_string1z00_31,
		obj_t BgL_string2z00_32, long BgL_offz00_33, obj_t BgL_lenz00_34)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 356 */
			if (((long) CINT(BgL_lenz00_34) == ((long) -1)))
				{	/* Ieee/string.scm 357 */
					return
						bigloo_strcmp_ci_at(BgL_string1z00_31, BgL_string2z00_32,
						BgL_offz00_33);
				}
			else
				{	/* Ieee/string.scm 357 */
					return
						bigloo_strncmp_ci_at(BgL_string1z00_31, BgL_string2z00_32,
						BgL_offz00_33, (long) CINT(BgL_lenz00_34));
		}}
	}



/* empty-string? */
	BGL_EXPORTED_DEF bool_t BGl_emptyzd2stringzf3z21zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_37)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 364 */
			return (STRING_LENGTH(BgL_stringz00_37) == ((long) 0));
		}
	}



/* _empty-string? */
	obj_t BGl__emptyzd2stringzf3z21zz__r4_strings_6_7z00(obj_t BgL_envz00_4030,
		obj_t BgL_stringz00_4031)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 364 */
			{	/* Ieee/string.scm 365 */
				bool_t BgL_auxz00_5146;

				{	/* Ieee/string.scm 365 */
					obj_t BgL_stringz00_4657;

					if (STRINGP(BgL_stringz00_4031))
						{	/* Ieee/string.scm 365 */
							BgL_stringz00_4657 = BgL_stringz00_4031;
						}
					else
						{
							obj_t BgL_auxz00_5149;

							BgL_auxz00_5149 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 17530)),
								BGl_string2611z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_stringz00_4031);
							FAILURE(BgL_auxz00_5149, BFALSE, BFALSE);
						}
					BgL_auxz00_5146 = (STRING_LENGTH(BgL_stringz00_4657) == ((long) 0));
				}
				return BBOOL(BgL_auxz00_5146);
			}
		}
	}



/* string-ci=? */
	BGL_EXPORTED_DEF bool_t BGl_stringzd2cizd3zf3zf2zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_38, obj_t BgL_string2z00_39)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 370 */
			return strcicmp(BgL_string1z00_38, BgL_string2z00_39);
		}
	}



/* _string-ci=? */
	obj_t BGl__stringzd2cizd3zf3zf2zz__r4_strings_6_7z00(obj_t BgL_envz00_4032,
		obj_t BgL_string1z00_4033, obj_t BgL_string2z00_4034)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 370 */
			{	/* Ieee/string.scm 371 */
				bool_t BgL_auxz00_5157;

				{	/* Ieee/string.scm 371 */
					obj_t BgL_string1z00_4658;

					obj_t BgL_string2z00_4659;

					if (STRINGP(BgL_string1z00_4033))
						{	/* Ieee/string.scm 371 */
							BgL_string1z00_4658 = BgL_string1z00_4033;
						}
					else
						{
							obj_t BgL_auxz00_5160;

							BgL_auxz00_5160 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 17828)),
								BGl_string2612z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_string1z00_4033);
							FAILURE(BgL_auxz00_5160, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_string2z00_4034))
						{	/* Ieee/string.scm 371 */
							BgL_string2z00_4659 = BgL_string2z00_4034;
						}
					else
						{
							obj_t BgL_auxz00_5166;

							BgL_auxz00_5166 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 17828)),
								BGl_string2612z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_string2z00_4034);
							FAILURE(BgL_auxz00_5166, BFALSE, BFALSE);
						}
					BgL_auxz00_5157 = strcicmp(BgL_string1z00_4658, BgL_string2z00_4659);
				}
				return BBOOL(BgL_auxz00_5157);
			}
		}
	}



/* string<? */
	BGL_EXPORTED_DEF bool_t BGl_stringzc3zf3z30zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_40, obj_t BgL_string2z00_41)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 376 */
			return string_lt(BgL_string1z00_40, BgL_string2z00_41);
		}
	}



/* _string<? */
	obj_t BGl__stringzc3zf3z30zz__r4_strings_6_7z00(obj_t BgL_envz00_4035,
		obj_t BgL_string1z00_4036, obj_t BgL_string2z00_4037)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 376 */
			{	/* Ieee/string.scm 377 */
				bool_t BgL_auxz00_5173;

				{	/* Ieee/string.scm 377 */
					obj_t BgL_string1z00_4660;

					obj_t BgL_string2z00_4661;

					if (STRINGP(BgL_string1z00_4036))
						{	/* Ieee/string.scm 377 */
							BgL_string1z00_4660 = BgL_string1z00_4036;
						}
					else
						{
							obj_t BgL_auxz00_5176;

							BgL_auxz00_5176 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 18125)),
								BGl_string2613z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_string1z00_4036);
							FAILURE(BgL_auxz00_5176, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_string2z00_4037))
						{	/* Ieee/string.scm 377 */
							BgL_string2z00_4661 = BgL_string2z00_4037;
						}
					else
						{
							obj_t BgL_auxz00_5182;

							BgL_auxz00_5182 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 18125)),
								BGl_string2613z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_string2z00_4037);
							FAILURE(BgL_auxz00_5182, BFALSE, BFALSE);
						}
					BgL_auxz00_5173 = string_lt(BgL_string1z00_4660, BgL_string2z00_4661);
				}
				return BBOOL(BgL_auxz00_5173);
			}
		}
	}



/* string>? */
	BGL_EXPORTED_DEF bool_t BGl_stringze3zf3z10zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_42, obj_t BgL_string2z00_43)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 382 */
			return string_gt(BgL_string1z00_42, BgL_string2z00_43);
		}
	}



/* _string>? */
	obj_t BGl__stringze3zf3z10zz__r4_strings_6_7z00(obj_t BgL_envz00_4038,
		obj_t BgL_string1z00_4039, obj_t BgL_string2z00_4040)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 382 */
			{	/* Ieee/string.scm 383 */
				bool_t BgL_auxz00_5189;

				{	/* Ieee/string.scm 383 */
					obj_t BgL_string1z00_4662;

					obj_t BgL_string2z00_4663;

					if (STRINGP(BgL_string1z00_4039))
						{	/* Ieee/string.scm 383 */
							BgL_string1z00_4662 = BgL_string1z00_4039;
						}
					else
						{
							obj_t BgL_auxz00_5192;

							BgL_auxz00_5192 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 18423)),
								BGl_string2614z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_string1z00_4039);
							FAILURE(BgL_auxz00_5192, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_string2z00_4040))
						{	/* Ieee/string.scm 383 */
							BgL_string2z00_4663 = BgL_string2z00_4040;
						}
					else
						{
							obj_t BgL_auxz00_5198;

							BgL_auxz00_5198 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 18423)),
								BGl_string2614z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_string2z00_4040);
							FAILURE(BgL_auxz00_5198, BFALSE, BFALSE);
						}
					BgL_auxz00_5189 = string_gt(BgL_string1z00_4662, BgL_string2z00_4663);
				}
				return BBOOL(BgL_auxz00_5189);
			}
		}
	}



/* string<=? */
	BGL_EXPORTED_DEF bool_t BGl_stringzc3zd3zf3ze3zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_44, obj_t BgL_string2z00_45)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 388 */
			return string_le(BgL_string1z00_44, BgL_string2z00_45);
		}
	}



/* _string<=? */
	obj_t BGl__stringzc3zd3zf3ze3zz__r4_strings_6_7z00(obj_t BgL_envz00_4041,
		obj_t BgL_string1z00_4042, obj_t BgL_string2z00_4043)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 388 */
			{	/* Ieee/string.scm 389 */
				bool_t BgL_auxz00_5205;

				{	/* Ieee/string.scm 389 */
					obj_t BgL_string1z00_4664;

					obj_t BgL_string2z00_4665;

					if (STRINGP(BgL_string1z00_4042))
						{	/* Ieee/string.scm 389 */
							BgL_string1z00_4664 = BgL_string1z00_4042;
						}
					else
						{
							obj_t BgL_auxz00_5208;

							BgL_auxz00_5208 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 18722)),
								BGl_string2615z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_string1z00_4042);
							FAILURE(BgL_auxz00_5208, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_string2z00_4043))
						{	/* Ieee/string.scm 389 */
							BgL_string2z00_4665 = BgL_string2z00_4043;
						}
					else
						{
							obj_t BgL_auxz00_5214;

							BgL_auxz00_5214 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 18722)),
								BGl_string2615z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_string2z00_4043);
							FAILURE(BgL_auxz00_5214, BFALSE, BFALSE);
						}
					BgL_auxz00_5205 = string_le(BgL_string1z00_4664, BgL_string2z00_4665);
				}
				return BBOOL(BgL_auxz00_5205);
			}
		}
	}



/* string>=? */
	BGL_EXPORTED_DEF bool_t BGl_stringze3zd3zf3zc3zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_46, obj_t BgL_string2z00_47)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 394 */
			return string_ge(BgL_string1z00_46, BgL_string2z00_47);
		}
	}



/* _string>=? */
	obj_t BGl__stringze3zd3zf3zc3zz__r4_strings_6_7z00(obj_t BgL_envz00_4044,
		obj_t BgL_string1z00_4045, obj_t BgL_string2z00_4046)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 394 */
			{	/* Ieee/string.scm 395 */
				bool_t BgL_auxz00_5221;

				{	/* Ieee/string.scm 395 */
					obj_t BgL_string1z00_4666;

					obj_t BgL_string2z00_4667;

					if (STRINGP(BgL_string1z00_4045))
						{	/* Ieee/string.scm 395 */
							BgL_string1z00_4666 = BgL_string1z00_4045;
						}
					else
						{
							obj_t BgL_auxz00_5224;

							BgL_auxz00_5224 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 19021)),
								BGl_string2616z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_string1z00_4045);
							FAILURE(BgL_auxz00_5224, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_string2z00_4046))
						{	/* Ieee/string.scm 395 */
							BgL_string2z00_4667 = BgL_string2z00_4046;
						}
					else
						{
							obj_t BgL_auxz00_5230;

							BgL_auxz00_5230 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 19021)),
								BGl_string2616z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_string2z00_4046);
							FAILURE(BgL_auxz00_5230, BFALSE, BFALSE);
						}
					BgL_auxz00_5221 = string_ge(BgL_string1z00_4666, BgL_string2z00_4667);
				}
				return BBOOL(BgL_auxz00_5221);
			}
		}
	}



/* string-ci<? */
	BGL_EXPORTED_DEF bool_t BGl_stringzd2cizc3zf3ze2zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_48, obj_t BgL_string2z00_49)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 400 */
			return string_cilt(BgL_string1z00_48, BgL_string2z00_49);
		}
	}



/* _string-ci<? */
	obj_t BGl__stringzd2cizc3zf3ze2zz__r4_strings_6_7z00(obj_t BgL_envz00_4047,
		obj_t BgL_string1z00_4048, obj_t BgL_string2z00_4049)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 400 */
			{	/* Ieee/string.scm 401 */
				bool_t BgL_auxz00_5237;

				{	/* Ieee/string.scm 401 */
					obj_t BgL_string1z00_4668;

					obj_t BgL_string2z00_4669;

					if (STRINGP(BgL_string1z00_4048))
						{	/* Ieee/string.scm 401 */
							BgL_string1z00_4668 = BgL_string1z00_4048;
						}
					else
						{
							obj_t BgL_auxz00_5240;

							BgL_auxz00_5240 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 19322)),
								BGl_string2617z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_string1z00_4048);
							FAILURE(BgL_auxz00_5240, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_string2z00_4049))
						{	/* Ieee/string.scm 401 */
							BgL_string2z00_4669 = BgL_string2z00_4049;
						}
					else
						{
							obj_t BgL_auxz00_5246;

							BgL_auxz00_5246 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 19322)),
								BGl_string2617z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_string2z00_4049);
							FAILURE(BgL_auxz00_5246, BFALSE, BFALSE);
						}
					BgL_auxz00_5237 =
						string_cilt(BgL_string1z00_4668, BgL_string2z00_4669);
				}
				return BBOOL(BgL_auxz00_5237);
			}
		}
	}



/* string-ci>? */
	BGL_EXPORTED_DEF bool_t BGl_stringzd2cize3zf3zc2zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_50, obj_t BgL_string2z00_51)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 406 */
			return string_cigt(BgL_string1z00_50, BgL_string2z00_51);
		}
	}



/* _string-ci>? */
	obj_t BGl__stringzd2cize3zf3zc2zz__r4_strings_6_7z00(obj_t BgL_envz00_4050,
		obj_t BgL_string1z00_4051, obj_t BgL_string2z00_4052)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 406 */
			{	/* Ieee/string.scm 407 */
				bool_t BgL_auxz00_5253;

				{	/* Ieee/string.scm 407 */
					obj_t BgL_string1z00_4670;

					obj_t BgL_string2z00_4671;

					if (STRINGP(BgL_string1z00_4051))
						{	/* Ieee/string.scm 407 */
							BgL_string1z00_4670 = BgL_string1z00_4051;
						}
					else
						{
							obj_t BgL_auxz00_5256;

							BgL_auxz00_5256 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 19625)),
								BGl_string2618z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_string1z00_4051);
							FAILURE(BgL_auxz00_5256, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_string2z00_4052))
						{	/* Ieee/string.scm 407 */
							BgL_string2z00_4671 = BgL_string2z00_4052;
						}
					else
						{
							obj_t BgL_auxz00_5262;

							BgL_auxz00_5262 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 19625)),
								BGl_string2618z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_string2z00_4052);
							FAILURE(BgL_auxz00_5262, BFALSE, BFALSE);
						}
					BgL_auxz00_5253 =
						string_cigt(BgL_string1z00_4670, BgL_string2z00_4671);
				}
				return BBOOL(BgL_auxz00_5253);
			}
		}
	}



/* string-ci<=? */
	BGL_EXPORTED_DEF bool_t BGl_stringzd2cizc3zd3zf3z31zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_52, obj_t BgL_string2z00_53)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 412 */
			return string_cile(BgL_string1z00_52, BgL_string2z00_53);
		}
	}



/* _string-ci<=? */
	obj_t BGl__stringzd2cizc3zd3zf3z31zz__r4_strings_6_7z00(obj_t BgL_envz00_4053,
		obj_t BgL_string1z00_4054, obj_t BgL_string2z00_4055)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 412 */
			{	/* Ieee/string.scm 413 */
				bool_t BgL_auxz00_5269;

				{	/* Ieee/string.scm 413 */
					obj_t BgL_string1z00_4672;

					obj_t BgL_string2z00_4673;

					if (STRINGP(BgL_string1z00_4054))
						{	/* Ieee/string.scm 413 */
							BgL_string1z00_4672 = BgL_string1z00_4054;
						}
					else
						{
							obj_t BgL_auxz00_5272;

							BgL_auxz00_5272 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 19929)),
								BGl_string2619z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_string1z00_4054);
							FAILURE(BgL_auxz00_5272, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_string2z00_4055))
						{	/* Ieee/string.scm 413 */
							BgL_string2z00_4673 = BgL_string2z00_4055;
						}
					else
						{
							obj_t BgL_auxz00_5278;

							BgL_auxz00_5278 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 19929)),
								BGl_string2619z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_string2z00_4055);
							FAILURE(BgL_auxz00_5278, BFALSE, BFALSE);
						}
					BgL_auxz00_5269 =
						string_cile(BgL_string1z00_4672, BgL_string2z00_4673);
				}
				return BBOOL(BgL_auxz00_5269);
			}
		}
	}



/* string-ci>=? */
	BGL_EXPORTED_DEF bool_t BGl_stringzd2cize3zd3zf3z11zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_54, obj_t BgL_string2z00_55)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 418 */
			return string_cige(BgL_string1z00_54, BgL_string2z00_55);
		}
	}



/* _string-ci>=? */
	obj_t BGl__stringzd2cize3zd3zf3z11zz__r4_strings_6_7z00(obj_t BgL_envz00_4056,
		obj_t BgL_string1z00_4057, obj_t BgL_string2z00_4058)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 418 */
			{	/* Ieee/string.scm 419 */
				bool_t BgL_auxz00_5285;

				{	/* Ieee/string.scm 419 */
					obj_t BgL_string1z00_4674;

					obj_t BgL_string2z00_4675;

					if (STRINGP(BgL_string1z00_4057))
						{	/* Ieee/string.scm 419 */
							BgL_string1z00_4674 = BgL_string1z00_4057;
						}
					else
						{
							obj_t BgL_auxz00_5288;

							BgL_auxz00_5288 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 20233)),
								BGl_string2620z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_string1z00_4057);
							FAILURE(BgL_auxz00_5288, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_string2z00_4058))
						{	/* Ieee/string.scm 419 */
							BgL_string2z00_4675 = BgL_string2z00_4058;
						}
					else
						{
							obj_t BgL_auxz00_5294;

							BgL_auxz00_5294 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 20233)),
								BGl_string2620z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_string2z00_4058);
							FAILURE(BgL_auxz00_5294, BFALSE, BFALSE);
						}
					BgL_auxz00_5285 =
						string_cige(BgL_string1z00_4674, BgL_string2z00_4675);
				}
				return BBOOL(BgL_auxz00_5285);
			}
		}
	}



/* _substring */
	obj_t BGl__substringz00zz__r4_strings_6_7z00(obj_t BgL_envz00_60,
		obj_t BgL_optz00_59)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 424 */
			{	/* Ieee/string.scm 424 */
				obj_t BgL_stringz00_615;

				obj_t BgL_g1166z00_616;

				BgL_stringz00_615 = VECTOR_REF(BgL_optz00_59, (int) (((long) 0)));
				BgL_g1166z00_616 = VECTOR_REF(BgL_optz00_59, (int) (((long) 1)));
				{	/* Ieee/string.scm 424 */
					int BgL_aux1168z00_618;

					BgL_aux1168z00_618 = VECTOR_LENGTH(BgL_optz00_59);
					switch ((long) (BgL_aux1168z00_618))
						{
						case ((long) 2):

							{	/* Ieee/string.scm 424 */
								long BgL_endz00_620;

								{	/* Ieee/string.scm 424 */
									obj_t BgL_stringz00_2152;

									if (STRINGP(BgL_stringz00_615))
										{	/* Ieee/string.scm 424 */
											BgL_stringz00_2152 = BgL_stringz00_615;
										}
									else
										{
											obj_t BgL_auxz00_5307;

											BgL_auxz00_5307 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2595z00zz__r4_strings_6_7z00,
												BINT(((long) 20542)),
												BGl_string2621z00zz__r4_strings_6_7z00,
												BGl_string2597z00zz__r4_strings_6_7z00,
												BgL_stringz00_615);
											FAILURE(BgL_auxz00_5307, BFALSE, BFALSE);
										}
									BgL_endz00_620 = STRING_LENGTH(BgL_stringz00_2152);
								}
								{	/* Ieee/string.scm 424 */

									{	/* Ieee/string.scm 424 */
										obj_t BgL_arg1260z00_621;

										obj_t BgL_arg1261z00_622;

										BgL_arg1260z00_621 =
											VECTOR_REF(BgL_optz00_59, (int) (((long) 0)));
										BgL_arg1261z00_622 =
											VECTOR_REF(BgL_optz00_59, (int) (((long) 1)));
										{	/* Ieee/string.scm 424 */
											long BgL_auxz00_5323;

											obj_t BgL_auxz00_5316;

											{	/* Ieee/string.scm 424 */
												obj_t BgL_auxz00_5324;

												if (INTEGERP(BgL_arg1261z00_622))
													{	/* Ieee/string.scm 424 */
														BgL_auxz00_5324 = BgL_arg1261z00_622;
													}
												else
													{
														obj_t BgL_auxz00_5327;

														BgL_auxz00_5327 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 20488)),
															BGl_string2621z00zz__r4_strings_6_7z00,
															BGl_string2599z00zz__r4_strings_6_7z00,
															BgL_arg1261z00_622);
														FAILURE(BgL_auxz00_5327, BFALSE, BFALSE);
													}
												BgL_auxz00_5323 = (long) CINT(BgL_auxz00_5324);
											}
											if (STRINGP(BgL_arg1260z00_621))
												{	/* Ieee/string.scm 424 */
													BgL_auxz00_5316 = BgL_arg1260z00_621;
												}
											else
												{
													obj_t BgL_auxz00_5319;

													BgL_auxz00_5319 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 20488)),
														BGl_string2621z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1260z00_621);
													FAILURE(BgL_auxz00_5319, BFALSE, BFALSE);
												}
											return
												BGl_substringz00zz__r4_strings_6_7z00(BgL_auxz00_5316,
												BgL_auxz00_5323, BgL_endz00_620);
										}
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Ieee/string.scm 424 */
								obj_t BgL_endz00_623;

								BgL_endz00_623 = VECTOR_REF(BgL_optz00_59, (int) (((long) 2)));
								{	/* Ieee/string.scm 424 */

									{	/* Ieee/string.scm 424 */
										obj_t BgL_arg1262z00_624;

										obj_t BgL_arg1263z00_625;

										BgL_arg1262z00_624 =
											VECTOR_REF(BgL_optz00_59, (int) (((long) 0)));
										BgL_arg1263z00_625 =
											VECTOR_REF(BgL_optz00_59, (int) (((long) 1)));
										{	/* Ieee/string.scm 424 */
											long BgL_auxz00_5355;

											long BgL_auxz00_5346;

											obj_t BgL_auxz00_5339;

											{	/* Ieee/string.scm 424 */
												obj_t BgL_auxz00_5356;

												if (INTEGERP(BgL_endz00_623))
													{	/* Ieee/string.scm 424 */
														BgL_auxz00_5356 = BgL_endz00_623;
													}
												else
													{
														obj_t BgL_auxz00_5359;

														BgL_auxz00_5359 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 20488)),
															BGl_string2621z00zz__r4_strings_6_7z00,
															BGl_string2599z00zz__r4_strings_6_7z00,
															BgL_endz00_623);
														FAILURE(BgL_auxz00_5359, BFALSE, BFALSE);
													}
												BgL_auxz00_5355 = (long) CINT(BgL_auxz00_5356);
											}
											{	/* Ieee/string.scm 424 */
												obj_t BgL_auxz00_5347;

												if (INTEGERP(BgL_arg1263z00_625))
													{	/* Ieee/string.scm 424 */
														BgL_auxz00_5347 = BgL_arg1263z00_625;
													}
												else
													{
														obj_t BgL_auxz00_5350;

														BgL_auxz00_5350 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 20488)),
															BGl_string2621z00zz__r4_strings_6_7z00,
															BGl_string2599z00zz__r4_strings_6_7z00,
															BgL_arg1263z00_625);
														FAILURE(BgL_auxz00_5350, BFALSE, BFALSE);
													}
												BgL_auxz00_5346 = (long) CINT(BgL_auxz00_5347);
											}
											if (STRINGP(BgL_arg1262z00_624))
												{	/* Ieee/string.scm 424 */
													BgL_auxz00_5339 = BgL_arg1262z00_624;
												}
											else
												{
													obj_t BgL_auxz00_5342;

													BgL_auxz00_5342 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 20488)),
														BGl_string2621z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1262z00_624);
													FAILURE(BgL_auxz00_5342, BFALSE, BFALSE);
												}
											return
												BGl_substringz00zz__r4_strings_6_7z00(BgL_auxz00_5339,
												BgL_auxz00_5346, BgL_auxz00_5355);
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



/* substring */
	BGL_EXPORTED_DEF obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_56, long BgL_startz00_57, long BgL_endz00_58)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 424 */
			{	/* Ieee/string.scm 425 */
				long BgL_lenz00_626;

				BgL_lenz00_626 = STRING_LENGTH(BgL_stringz00_56);
				{	/* Ieee/string.scm 427 */
					bool_t BgL_testz00_5368;

					if ((BgL_startz00_57 < ((long) 0)))
						{	/* Ieee/string.scm 427 */
							BgL_testz00_5368 = ((bool_t) 1);
						}
					else
						{	/* Ieee/string.scm 427 */
							BgL_testz00_5368 = (BgL_startz00_57 > BgL_lenz00_626);
						}
					if (BgL_testz00_5368)
						{	/* Ieee/string.scm 427 */
							return
								BGl_errorz00zz__errorz00(BGl_string2622z00zz__r4_strings_6_7z00,
								string_append_3(BGl_string2623z00zz__r4_strings_6_7z00,
									BgL_stringz00_56, BGl_string2624z00zz__r4_strings_6_7z00),
								BINT(BgL_startz00_57));
						}
					else
						{	/* Ieee/string.scm 427 */
							if ((BgL_endz00_58 < ((long) 0)))
								{	/* Ieee/string.scm 431 */
									return
										c_substring(BgL_stringz00_56, BgL_startz00_57,
										BgL_lenz00_626);
								}
							else
								{	/* Ieee/string.scm 433 */
									bool_t BgL_testz00_5378;

									if ((BgL_endz00_58 < BgL_startz00_57))
										{	/* Ieee/string.scm 433 */
											BgL_testz00_5378 = ((bool_t) 1);
										}
									else
										{	/* Ieee/string.scm 433 */
											BgL_testz00_5378 = (BgL_endz00_58 > BgL_lenz00_626);
										}
									if (BgL_testz00_5378)
										{	/* Ieee/string.scm 433 */
											return
												BGl_errorz00zz__errorz00
												(BGl_string2622z00zz__r4_strings_6_7z00,
												string_append_3(BGl_string2625z00zz__r4_strings_6_7z00,
													BgL_stringz00_56,
													BGl_string2624z00zz__r4_strings_6_7z00),
												BINT(BgL_endz00_58));
										}
									else
										{	/* Ieee/string.scm 433 */
											return
												c_substring(BgL_stringz00_56, BgL_startz00_57,
												BgL_endz00_58);
										}
								}
						}
				}
			}
		}
	}



/* substring-ur */
	BGL_EXPORTED_DEF obj_t BGl_substringzd2urzd2zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_61, long BgL_startz00_62, long BgL_endz00_63)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 443 */
			return c_substring(BgL_stringz00_61, BgL_startz00_62, BgL_endz00_63);
		}
	}



/* _substring-ur */
	obj_t BGl__substringzd2urzd2zz__r4_strings_6_7z00(obj_t BgL_envz00_4059,
		obj_t BgL_stringz00_4060, obj_t BgL_startz00_4061, obj_t BgL_endz00_4062)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 443 */
			{	/* Ieee/string.scm 444 */
				obj_t BgL_stringz00_4676;

				long BgL_startz00_4677;

				long BgL_endz00_4678;

				if (STRINGP(BgL_stringz00_4060))
					{	/* Ieee/string.scm 444 */
						BgL_stringz00_4676 = BgL_stringz00_4060;
					}
				else
					{
						obj_t BgL_auxz00_5389;

						BgL_auxz00_5389 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 21235)),
							BGl_string2626z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_stringz00_4060);
						FAILURE(BgL_auxz00_5389, BFALSE, BFALSE);
					}
				{	/* Ieee/string.scm 444 */
					obj_t BgL_auxz00_5393;

					if (INTEGERP(BgL_startz00_4061))
						{	/* Ieee/string.scm 444 */
							BgL_auxz00_5393 = BgL_startz00_4061;
						}
					else
						{
							obj_t BgL_auxz00_5396;

							BgL_auxz00_5396 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 21235)),
								BGl_string2626z00zz__r4_strings_6_7z00,
								BGl_string2599z00zz__r4_strings_6_7z00, BgL_startz00_4061);
							FAILURE(BgL_auxz00_5396, BFALSE, BFALSE);
						}
					BgL_startz00_4677 = (long) CINT(BgL_auxz00_5393);
				}
				{	/* Ieee/string.scm 444 */
					obj_t BgL_auxz00_5401;

					if (INTEGERP(BgL_endz00_4062))
						{	/* Ieee/string.scm 444 */
							BgL_auxz00_5401 = BgL_endz00_4062;
						}
					else
						{
							obj_t BgL_auxz00_5404;

							BgL_auxz00_5404 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 21235)),
								BGl_string2626z00zz__r4_strings_6_7z00,
								BGl_string2599z00zz__r4_strings_6_7z00, BgL_endz00_4062);
							FAILURE(BgL_auxz00_5404, BFALSE, BFALSE);
						}
					BgL_endz00_4678 = (long) CINT(BgL_auxz00_5401);
				}
				return
					c_substring(BgL_stringz00_4676, BgL_startz00_4677, BgL_endz00_4678);
			}
		}
	}



/* _string-contains */
	obj_t BGl__stringzd2containszd2zz__r4_strings_6_7z00(obj_t BgL_envz00_68,
		obj_t BgL_optz00_67)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 449 */
			{	/* Ieee/string.scm 449 */
				obj_t BgL_g1169z00_636;

				obj_t BgL_g1170z00_637;

				BgL_g1169z00_636 = VECTOR_REF(BgL_optz00_67, (int) (((long) 0)));
				BgL_g1170z00_637 = VECTOR_REF(BgL_optz00_67, (int) (((long) 1)));
				{	/* Ieee/string.scm 449 */
					int BgL_aux1172z00_639;

					BgL_aux1172z00_639 = VECTOR_LENGTH(BgL_optz00_67);
					switch ((long) (BgL_aux1172z00_639))
						{
						case ((long) 2):

							{	/* Ieee/string.scm 449 */

								{	/* Ieee/string.scm 449 */
									obj_t BgL_arg1274z00_642;

									obj_t BgL_arg1275z00_643;

									BgL_arg1274z00_642 =
										VECTOR_REF(BgL_optz00_67, (int) (((long) 0)));
									BgL_arg1275z00_643 =
										VECTOR_REF(BgL_optz00_67, (int) (((long) 1)));
									{	/* Ieee/string.scm 449 */
										obj_t BgL_auxz00_5426;

										obj_t BgL_auxz00_5419;

										if (STRINGP(BgL_arg1275z00_643))
											{	/* Ieee/string.scm 449 */
												BgL_auxz00_5426 = BgL_arg1275z00_643;
											}
										else
											{
												obj_t BgL_auxz00_5429;

												BgL_auxz00_5429 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2595z00zz__r4_strings_6_7z00,
													BINT(((long) 21489)),
													BGl_string2627z00zz__r4_strings_6_7z00,
													BGl_string2597z00zz__r4_strings_6_7z00,
													BgL_arg1275z00_643);
												FAILURE(BgL_auxz00_5429, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_arg1274z00_642))
											{	/* Ieee/string.scm 449 */
												BgL_auxz00_5419 = BgL_arg1274z00_642;
											}
										else
											{
												obj_t BgL_auxz00_5422;

												BgL_auxz00_5422 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2595z00zz__r4_strings_6_7z00,
													BINT(((long) 21489)),
													BGl_string2627z00zz__r4_strings_6_7z00,
													BGl_string2597z00zz__r4_strings_6_7z00,
													BgL_arg1274z00_642);
												FAILURE(BgL_auxz00_5422, BFALSE, BFALSE);
											}
										return
											BGl_stringzd2containszd2zz__r4_strings_6_7z00
											(BgL_auxz00_5419, BgL_auxz00_5426, (int) (((long) 0)));
							}}} break;
						case ((long) 3):

							{	/* Ieee/string.scm 449 */
								obj_t BgL_startz00_644;

								BgL_startz00_644 =
									VECTOR_REF(BgL_optz00_67, (int) (((long) 2)));
								{	/* Ieee/string.scm 449 */

									{	/* Ieee/string.scm 449 */
										obj_t BgL_arg1276z00_645;

										obj_t BgL_arg1277z00_646;

										BgL_arg1276z00_645 =
											VECTOR_REF(BgL_optz00_67, (int) (((long) 0)));
										BgL_arg1277z00_646 =
											VECTOR_REF(BgL_optz00_67, (int) (((long) 1)));
										{	/* Ieee/string.scm 449 */
											int BgL_auxz00_5455;

											obj_t BgL_auxz00_5448;

											obj_t BgL_auxz00_5441;

											{	/* Ieee/string.scm 449 */
												obj_t BgL_auxz00_5456;

												if (INTEGERP(BgL_startz00_644))
													{	/* Ieee/string.scm 449 */
														BgL_auxz00_5456 = BgL_startz00_644;
													}
												else
													{
														obj_t BgL_auxz00_5459;

														BgL_auxz00_5459 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 21489)),
															BGl_string2627z00zz__r4_strings_6_7z00,
															BGl_string2628z00zz__r4_strings_6_7z00,
															BgL_startz00_644);
														FAILURE(BgL_auxz00_5459, BFALSE, BFALSE);
													}
												BgL_auxz00_5455 = CINT(BgL_auxz00_5456);
											}
											if (STRINGP(BgL_arg1277z00_646))
												{	/* Ieee/string.scm 449 */
													BgL_auxz00_5448 = BgL_arg1277z00_646;
												}
											else
												{
													obj_t BgL_auxz00_5451;

													BgL_auxz00_5451 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 21489)),
														BGl_string2627z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1277z00_646);
													FAILURE(BgL_auxz00_5451, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_arg1276z00_645))
												{	/* Ieee/string.scm 449 */
													BgL_auxz00_5441 = BgL_arg1276z00_645;
												}
											else
												{
													obj_t BgL_auxz00_5444;

													BgL_auxz00_5444 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 21489)),
														BGl_string2627z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1276z00_645);
													FAILURE(BgL_auxz00_5444, BFALSE, BFALSE);
												}
											return
												BGl_stringzd2containszd2zz__r4_strings_6_7z00
												(BgL_auxz00_5441, BgL_auxz00_5448, BgL_auxz00_5455);
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



/* string-contains */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2containszd2zz__r4_strings_6_7z00(obj_t
		BgL_s1z00_64, obj_t BgL_s2z00_65, int BgL_startz00_66)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 449 */
			{	/* Ieee/string.scm 450 */
				long BgL_l1z00_647;

				long BgL_l2z00_648;

				long BgL_i0z00_649;

				BgL_l1z00_647 = STRING_LENGTH(BgL_s1z00_64);
				BgL_l2z00_648 = STRING_LENGTH(BgL_s2z00_65);
				if (((long) (BgL_startz00_66) < ((long) 0)))
					{	/* Ieee/string.scm 452 */
						BgL_i0z00_649 = ((long) 0);
					}
				else
					{	/* Ieee/string.scm 452 */
						BgL_i0z00_649 = (long) (BgL_startz00_66);
					}
				if ((BgL_l1z00_647 < (BgL_i0z00_649 + BgL_l2z00_648)))
					{	/* Ieee/string.scm 453 */
						return BFALSE;
					}
				else
					{	/* Ieee/string.scm 455 */
						long BgL_stopz00_651;

						BgL_stopz00_651 = (BgL_l1z00_647 - BgL_l2z00_648);
						{
							long BgL_iz00_653;

							BgL_iz00_653 = BgL_i0z00_649;
						BgL_zc3anonymousza31279ze3z83_654:
							if (bigloo_strcmp_at(BgL_s1z00_64, BgL_s2z00_65, BgL_iz00_653))
								{	/* Ieee/string.scm 458 */
									return BINT(BgL_iz00_653);
								}
							else
								{	/* Ieee/string.scm 458 */
									if ((BgL_iz00_653 == BgL_stopz00_651))
										{	/* Ieee/string.scm 460 */
											return BFALSE;
										}
									else
										{
											long BgL_iz00_5482;

											BgL_iz00_5482 = (BgL_iz00_653 + ((long) 1));
											BgL_iz00_653 = BgL_iz00_5482;
											goto BgL_zc3anonymousza31279ze3z83_654;
										}
								}
						}
					}
			}
		}
	}



/* _string-contains-ci */
	obj_t BGl__stringzd2containszd2ciz00zz__r4_strings_6_7z00(obj_t BgL_envz00_73,
		obj_t BgL_optz00_72)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 468 */
			{	/* Ieee/string.scm 468 */
				obj_t BgL_g1173z00_661;

				obj_t BgL_g1174z00_662;

				BgL_g1173z00_661 = VECTOR_REF(BgL_optz00_72, (int) (((long) 0)));
				BgL_g1174z00_662 = VECTOR_REF(BgL_optz00_72, (int) (((long) 1)));
				{	/* Ieee/string.scm 468 */
					int BgL_aux1176z00_664;

					BgL_aux1176z00_664 = VECTOR_LENGTH(BgL_optz00_72);
					switch ((long) (BgL_aux1176z00_664))
						{
						case ((long) 2):

							{	/* Ieee/string.scm 468 */

								{	/* Ieee/string.scm 468 */
									obj_t BgL_arg1286z00_667;

									obj_t BgL_arg1287z00_668;

									BgL_arg1286z00_667 =
										VECTOR_REF(BgL_optz00_72, (int) (((long) 0)));
									BgL_arg1287z00_668 =
										VECTOR_REF(BgL_optz00_72, (int) (((long) 1)));
									{	/* Ieee/string.scm 468 */
										obj_t BgL_auxz00_5500;

										obj_t BgL_auxz00_5493;

										if (STRINGP(BgL_arg1287z00_668))
											{	/* Ieee/string.scm 468 */
												BgL_auxz00_5500 = BgL_arg1287z00_668;
											}
										else
											{
												obj_t BgL_auxz00_5503;

												BgL_auxz00_5503 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2595z00zz__r4_strings_6_7z00,
													BINT(((long) 22072)),
													BGl_string2629z00zz__r4_strings_6_7z00,
													BGl_string2597z00zz__r4_strings_6_7z00,
													BgL_arg1287z00_668);
												FAILURE(BgL_auxz00_5503, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_arg1286z00_667))
											{	/* Ieee/string.scm 468 */
												BgL_auxz00_5493 = BgL_arg1286z00_667;
											}
										else
											{
												obj_t BgL_auxz00_5496;

												BgL_auxz00_5496 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2595z00zz__r4_strings_6_7z00,
													BINT(((long) 22072)),
													BGl_string2629z00zz__r4_strings_6_7z00,
													BGl_string2597z00zz__r4_strings_6_7z00,
													BgL_arg1286z00_667);
												FAILURE(BgL_auxz00_5496, BFALSE, BFALSE);
											}
										return
											BGl_stringzd2containszd2ciz00zz__r4_strings_6_7z00
											(BgL_auxz00_5493, BgL_auxz00_5500, (int) (((long) 0)));
							}}} break;
						case ((long) 3):

							{	/* Ieee/string.scm 468 */
								obj_t BgL_startz00_669;

								BgL_startz00_669 =
									VECTOR_REF(BgL_optz00_72, (int) (((long) 2)));
								{	/* Ieee/string.scm 468 */

									{	/* Ieee/string.scm 468 */
										obj_t BgL_arg1288z00_670;

										obj_t BgL_arg1289z00_671;

										BgL_arg1288z00_670 =
											VECTOR_REF(BgL_optz00_72, (int) (((long) 0)));
										BgL_arg1289z00_671 =
											VECTOR_REF(BgL_optz00_72, (int) (((long) 1)));
										{	/* Ieee/string.scm 468 */
											int BgL_auxz00_5529;

											obj_t BgL_auxz00_5522;

											obj_t BgL_auxz00_5515;

											{	/* Ieee/string.scm 468 */
												obj_t BgL_auxz00_5530;

												if (INTEGERP(BgL_startz00_669))
													{	/* Ieee/string.scm 468 */
														BgL_auxz00_5530 = BgL_startz00_669;
													}
												else
													{
														obj_t BgL_auxz00_5533;

														BgL_auxz00_5533 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 22072)),
															BGl_string2629z00zz__r4_strings_6_7z00,
															BGl_string2628z00zz__r4_strings_6_7z00,
															BgL_startz00_669);
														FAILURE(BgL_auxz00_5533, BFALSE, BFALSE);
													}
												BgL_auxz00_5529 = CINT(BgL_auxz00_5530);
											}
											if (STRINGP(BgL_arg1289z00_671))
												{	/* Ieee/string.scm 468 */
													BgL_auxz00_5522 = BgL_arg1289z00_671;
												}
											else
												{
													obj_t BgL_auxz00_5525;

													BgL_auxz00_5525 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 22072)),
														BGl_string2629z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1289z00_671);
													FAILURE(BgL_auxz00_5525, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_arg1288z00_670))
												{	/* Ieee/string.scm 468 */
													BgL_auxz00_5515 = BgL_arg1288z00_670;
												}
											else
												{
													obj_t BgL_auxz00_5518;

													BgL_auxz00_5518 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 22072)),
														BGl_string2629z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1288z00_670);
													FAILURE(BgL_auxz00_5518, BFALSE, BFALSE);
												}
											return
												BGl_stringzd2containszd2ciz00zz__r4_strings_6_7z00
												(BgL_auxz00_5515, BgL_auxz00_5522, BgL_auxz00_5529);
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



/* string-contains-ci */
	BGL_EXPORTED_DEF obj_t
		BGl_stringzd2containszd2ciz00zz__r4_strings_6_7z00(obj_t BgL_s1z00_69,
		obj_t BgL_s2z00_70, int BgL_startz00_71)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 468 */
			{	/* Ieee/string.scm 469 */
				long BgL_l1z00_672;

				long BgL_l2z00_673;

				long BgL_i0z00_674;

				BgL_l1z00_672 = STRING_LENGTH(BgL_s1z00_69);
				BgL_l2z00_673 = STRING_LENGTH(BgL_s2z00_70);
				if (((long) (BgL_startz00_71) < ((long) 0)))
					{	/* Ieee/string.scm 471 */
						BgL_i0z00_674 = ((long) 0);
					}
				else
					{	/* Ieee/string.scm 471 */
						BgL_i0z00_674 = (long) (BgL_startz00_71);
					}
				if ((BgL_l1z00_672 < (BgL_i0z00_674 + BgL_l2z00_673)))
					{	/* Ieee/string.scm 472 */
						return BFALSE;
					}
				else
					{	/* Ieee/string.scm 474 */
						long BgL_stopz00_676;

						BgL_stopz00_676 = (BgL_l1z00_672 - BgL_l2z00_673);
						{
							long BgL_iz00_678;

							BgL_iz00_678 = BgL_i0z00_674;
						BgL_zc3anonymousza31291ze3z83_679:
							if (bigloo_strcmp_ci_at(BgL_s1z00_69, BgL_s2z00_70, BgL_iz00_678))
								{	/* Ieee/string.scm 477 */
									return BINT(BgL_iz00_678);
								}
							else
								{	/* Ieee/string.scm 477 */
									if ((BgL_iz00_678 == BgL_stopz00_676))
										{	/* Ieee/string.scm 479 */
											return BFALSE;
										}
									else
										{
											long BgL_iz00_5556;

											BgL_iz00_5556 = (BgL_iz00_678 + ((long) 1));
											BgL_iz00_678 = BgL_iz00_5556;
											goto BgL_zc3anonymousza31291ze3z83_679;
										}
								}
						}
					}
			}
		}
	}



/* string-compare3 */
	BGL_EXPORTED_DEF long BGl_stringzd2compare3zd2zz__r4_strings_6_7z00(obj_t
		BgL_az00_74, obj_t BgL_bz00_75)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 491 */
			{	/* Ieee/string.scm 492 */
				long BgL_alz00_686;

				BgL_alz00_686 = STRING_LENGTH(BgL_az00_74);
				{	/* Ieee/string.scm 492 */
					long BgL_blz00_687;

					BgL_blz00_687 = STRING_LENGTH(BgL_bz00_75);
					{	/* Ieee/string.scm 493 */
						long BgL_lz00_688;

						if ((BgL_alz00_686 < BgL_blz00_687))
							{	/* Ieee/string.scm 494 */
								BgL_lz00_688 = BgL_alz00_686;
							}
						else
							{	/* Ieee/string.scm 494 */
								BgL_lz00_688 = BgL_blz00_687;
							}
						{	/* Ieee/string.scm 494 */

							{
								long BgL_rz00_690;

								BgL_rz00_690 = ((long) 0);
							BgL_zc3anonymousza31297ze3z83_691:
								if ((BgL_rz00_690 == BgL_lz00_688))
									{	/* Ieee/string.scm 496 */
										return (BgL_alz00_686 - BgL_blz00_687);
									}
								else
									{	/* Ieee/string.scm 498 */
										long BgL_cz00_693;

										BgL_cz00_693 =
											(
											(STRING_REF(BgL_az00_74, BgL_rz00_690)) -
											(STRING_REF(BgL_bz00_75, BgL_rz00_690)));
										if ((BgL_cz00_693 == ((long) 0)))
											{
												long BgL_rz00_5572;

												BgL_rz00_5572 = (BgL_rz00_690 + ((long) 1));
												BgL_rz00_690 = BgL_rz00_5572;
												goto BgL_zc3anonymousza31297ze3z83_691;
											}
										else
											{	/* Ieee/string.scm 500 */
												return BgL_cz00_693;
											}
									}
							}
						}
					}
				}
			}
		}
	}



/* _string-compare3 */
	obj_t BGl__stringzd2compare3zd2zz__r4_strings_6_7z00(obj_t BgL_envz00_4063,
		obj_t BgL_az00_4064, obj_t BgL_bz00_4065)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 491 */
			{	/* Ieee/string.scm 492 */
				long BgL_auxz00_5574;

				{	/* Ieee/string.scm 492 */
					obj_t BgL_auxz00_5582;

					obj_t BgL_auxz00_5575;

					if (STRINGP(BgL_bz00_4065))
						{	/* Ieee/string.scm 492 */
							BgL_auxz00_5582 = BgL_bz00_4065;
						}
					else
						{
							obj_t BgL_auxz00_5585;

							BgL_auxz00_5585 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 23013)),
								BGl_string2630z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_bz00_4065);
							FAILURE(BgL_auxz00_5585, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_az00_4064))
						{	/* Ieee/string.scm 492 */
							BgL_auxz00_5575 = BgL_az00_4064;
						}
					else
						{
							obj_t BgL_auxz00_5578;

							BgL_auxz00_5578 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 23013)),
								BGl_string2630z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_az00_4064);
							FAILURE(BgL_auxz00_5578, BFALSE, BFALSE);
						}
					BgL_auxz00_5574 =
						BGl_stringzd2compare3zd2zz__r4_strings_6_7z00(BgL_auxz00_5575,
						BgL_auxz00_5582);
				}
				return BINT(BgL_auxz00_5574);
			}
		}
	}



/* string-compare3-ci */
	BGL_EXPORTED_DEF long BGl_stringzd2compare3zd2ciz00zz__r4_strings_6_7z00(obj_t
		BgL_az00_76, obj_t BgL_bz00_77)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 507 */
			{	/* Ieee/string.scm 508 */
				long BgL_alz00_704;

				BgL_alz00_704 = STRING_LENGTH(BgL_az00_76);
				{	/* Ieee/string.scm 508 */
					long BgL_blz00_705;

					BgL_blz00_705 = STRING_LENGTH(BgL_bz00_77);
					{	/* Ieee/string.scm 509 */
						long BgL_lz00_706;

						if ((BgL_alz00_704 < BgL_blz00_705))
							{	/* Ieee/string.scm 510 */
								BgL_lz00_706 = BgL_alz00_704;
							}
						else
							{	/* Ieee/string.scm 510 */
								BgL_lz00_706 = BgL_blz00_705;
							}
						{	/* Ieee/string.scm 510 */

							{
								long BgL_rz00_708;

								BgL_rz00_708 = ((long) 0);
							BgL_zc3anonymousza31306ze3z83_709:
								if ((BgL_rz00_708 == BgL_lz00_706))
									{	/* Ieee/string.scm 512 */
										return (BgL_alz00_704 - BgL_blz00_705);
									}
								else
									{	/* Ieee/string.scm 514 */
										long BgL_cz00_711;

										BgL_cz00_711 =
											(
											(tolower(STRING_REF(BgL_az00_76, BgL_rz00_708))) -
											(tolower(STRING_REF(BgL_bz00_77, BgL_rz00_708))));
										if ((BgL_cz00_711 == ((long) 0)))
											{
												long BgL_rz00_5607;

												BgL_rz00_5607 = (BgL_rz00_708 + ((long) 1));
												BgL_rz00_708 = BgL_rz00_5607;
												goto BgL_zc3anonymousza31306ze3z83_709;
											}
										else
											{	/* Ieee/string.scm 516 */
												return BgL_cz00_711;
											}
									}
							}
						}
					}
				}
			}
		}
	}



/* _string-compare3-ci */
	obj_t BGl__stringzd2compare3zd2ciz00zz__r4_strings_6_7z00(obj_t
		BgL_envz00_4066, obj_t BgL_az00_4067, obj_t BgL_bz00_4068)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 507 */
			{	/* Ieee/string.scm 508 */
				long BgL_auxz00_5609;

				{	/* Ieee/string.scm 508 */
					obj_t BgL_auxz00_5617;

					obj_t BgL_auxz00_5610;

					if (STRINGP(BgL_bz00_4068))
						{	/* Ieee/string.scm 508 */
							BgL_auxz00_5617 = BgL_bz00_4068;
						}
					else
						{
							obj_t BgL_auxz00_5620;

							BgL_auxz00_5620 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 23665)),
								BGl_string2631z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_bz00_4068);
							FAILURE(BgL_auxz00_5620, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_az00_4067))
						{	/* Ieee/string.scm 508 */
							BgL_auxz00_5610 = BgL_az00_4067;
						}
					else
						{
							obj_t BgL_auxz00_5613;

							BgL_auxz00_5613 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 23665)),
								BGl_string2631z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_az00_4067);
							FAILURE(BgL_auxz00_5613, BFALSE, BFALSE);
						}
					BgL_auxz00_5609 =
						BGl_stringzd2compare3zd2ciz00zz__r4_strings_6_7z00(BgL_auxz00_5610,
						BgL_auxz00_5617);
				}
				return BINT(BgL_auxz00_5609);
			}
		}
	}



/* string-append */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t
		BgL_listz00_78)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 527 */
			if (NULLP(BgL_listz00_78))
				{	/* Ieee/string.scm 528 */
					return BGl_string2632z00zz__r4_strings_6_7z00;
				}
			else
				{	/* Ieee/string.scm 530 */
					long BgL_lenz00_725;

					{
						obj_t BgL_listz00_2236;

						long BgL_resz00_2237;

						BgL_listz00_2236 = BgL_listz00_78;
						BgL_resz00_2237 = ((long) 0);
					BgL_stringzd2appendzd2_2235:
						if (NULLP(BgL_listz00_2236))
							{	/* Ieee/string.scm 530 */
								BgL_lenz00_725 = BgL_resz00_2237;
							}
						else
							{
								long BgL_resz00_5632;

								obj_t BgL_listz00_5630;

								BgL_listz00_5630 = CDR(BgL_listz00_2236);
								BgL_resz00_5632 =
									(BgL_resz00_2237 + STRING_LENGTH(CAR(BgL_listz00_2236)));
								BgL_resz00_2237 = BgL_resz00_5632;
								BgL_listz00_2236 = BgL_listz00_5630;
								goto BgL_stringzd2appendzd2_2235;
							}
					}
					{	/* Ieee/string.scm 530 */
						obj_t BgL_resz00_726;

						BgL_resz00_726 = make_string_sans_fill(BgL_lenz00_725);
						{	/* Ieee/string.scm 537 */

							{
								obj_t BgL_listz00_2279;

								long BgL_wz00_2280;

								BgL_listz00_2279 = BgL_listz00_78;
								BgL_wz00_2280 = ((long) 0);
							BgL_stringzd2appendzd2_2278:
								if (NULLP(BgL_listz00_2279))
									{	/* Ieee/string.scm 538 */
										return BgL_resz00_726;
									}
								else
									{	/* Ieee/string.scm 538 */
										obj_t BgL_sz00_2287;

										BgL_sz00_2287 = CAR(BgL_listz00_2279);
										{	/* Ieee/string.scm 538 */
											long BgL_lz00_2288;

											BgL_lz00_2288 = STRING_LENGTH(BgL_sz00_2287);
											{	/* Ieee/string.scm 538 */

												blit_string(BgL_sz00_2287, ((long) 0), BgL_resz00_726,
													BgL_wz00_2280, BgL_lz00_2288);
												{
													long BgL_wz00_5644;

													obj_t BgL_listz00_5642;

													BgL_listz00_5642 = CDR(BgL_listz00_2279);
													BgL_wz00_5644 = (BgL_wz00_2280 + BgL_lz00_2288);
													BgL_wz00_2280 = BgL_wz00_5644;
													BgL_listz00_2279 = BgL_listz00_5642;
													goto BgL_stringzd2appendzd2_2278;
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



/* _string-append */
	obj_t BGl__stringzd2appendzd2zz__r4_strings_6_7z00(obj_t BgL_envz00_4069,
		obj_t BgL_listz00_4070)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 527 */
			return BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_listz00_4070);
		}
	}



/* list->string */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t
		BgL_listz00_79)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 550 */
			{	/* Ieee/string.scm 551 */
				long BgL_lenz00_747;

				BgL_lenz00_747 = bgl_list_length(BgL_listz00_79);
				{	/* Ieee/string.scm 551 */
					obj_t BgL_stringz00_748;

					BgL_stringz00_748 = make_string_sans_fill(BgL_lenz00_747);
					{	/* Ieee/string.scm 552 */

						{
							long BgL_iz00_2337;

							obj_t BgL_lz00_2338;

							BgL_iz00_2337 = ((long) 0);
							BgL_lz00_2338 = BgL_listz00_79;
						BgL_loopz00_2336:
							if ((BgL_iz00_2337 == BgL_lenz00_747))
								{	/* Ieee/string.scm 553 */
									return BgL_stringz00_748;
								}
							else
								{	/* Ieee/string.scm 553 */
									{	/* Ieee/string.scm 553 */
										obj_t BgL_arg1330z00_2344;

										BgL_arg1330z00_2344 = CAR(BgL_lz00_2338);
										{	/* Ieee/string.scm 553 */
											unsigned char BgL_auxz00_5652;

											BgL_auxz00_5652 = CCHAR(BgL_arg1330z00_2344);
											STRING_SET(BgL_stringz00_748, BgL_iz00_2337,
												BgL_auxz00_5652);
									}}
									{
										obj_t BgL_lz00_5657;

										long BgL_iz00_5655;

										BgL_iz00_5655 = (BgL_iz00_2337 + ((long) 1));
										BgL_lz00_5657 = CDR(BgL_lz00_2338);
										BgL_lz00_2338 = BgL_lz00_5657;
										BgL_iz00_2337 = BgL_iz00_5655;
										goto BgL_loopz00_2336;
									}
								}
						}
					}
				}
			}
		}
	}



/* _list->string */
	obj_t BGl__listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t BgL_envz00_4071,
		obj_t BgL_listz00_4072)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 550 */
			{	/* Ieee/string.scm 551 */
				obj_t BgL_auxz00_5659;

				{	/* Ieee/string.scm 551 */
					bool_t BgL_testz00_5660;

					if (PAIRP(BgL_listz00_4072))
						{	/* Ieee/string.scm 551 */
							BgL_testz00_5660 = ((bool_t) 1);
						}
					else
						{	/* Ieee/string.scm 551 */
							BgL_testz00_5660 = NULLP(BgL_listz00_4072);
						}
					if (BgL_testz00_5660)
						{	/* Ieee/string.scm 551 */
							BgL_auxz00_5659 = BgL_listz00_4072;
						}
					else
						{
							obj_t BgL_auxz00_5664;

							BgL_auxz00_5664 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 25358)),
								BGl_string2633z00zz__r4_strings_6_7z00,
								BGl_string2634z00zz__r4_strings_6_7z00, BgL_listz00_4072);
							FAILURE(BgL_auxz00_5664, BFALSE, BFALSE);
				}}
				return BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_auxz00_5659);
			}
		}
	}



/* string->list */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_80)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 564 */
			{	/* Ieee/string.scm 565 */
				long BgL_lenz00_758;

				BgL_lenz00_758 = STRING_LENGTH(BgL_stringz00_80);
				{	/* Ieee/string.scm 566 */
					long BgL_g1101z00_759;

					BgL_g1101z00_759 = (BgL_lenz00_758 - ((long) 1));
					{
						long BgL_iz00_2388;

						obj_t BgL_resz00_2389;

						BgL_iz00_2388 = BgL_g1101z00_759;
						BgL_resz00_2389 = BNIL;
					BgL_loopz00_2387:
						if ((BgL_iz00_2388 == ((long) -1)))
							{	/* Ieee/string.scm 566 */
								return BgL_resz00_2389;
							}
						else
							{	/* Ieee/string.scm 566 */
								long BgL_arg1337z00_2395;

								obj_t BgL_arg1338z00_2396;

								BgL_arg1337z00_2395 = (BgL_iz00_2388 - ((long) 1));
								{	/* Ieee/string.scm 566 */
									unsigned char BgL_arg1339z00_2397;

									BgL_arg1339z00_2397 =
										STRING_REF(BgL_stringz00_80, BgL_iz00_2388);
									BgL_arg1338z00_2396 =
										MAKE_PAIR(BCHAR(BgL_arg1339z00_2397), BgL_resz00_2389);
								}
								{
									obj_t BgL_resz00_5678;

									long BgL_iz00_5677;

									BgL_iz00_5677 = BgL_arg1337z00_2395;
									BgL_resz00_5678 = BgL_arg1338z00_2396;
									BgL_resz00_2389 = BgL_resz00_5678;
									BgL_iz00_2388 = BgL_iz00_5677;
									goto BgL_loopz00_2387;
								}
							}
					}
				}
			}
		}
	}



/* _string->list */
	obj_t BGl__stringzd2ze3listz31zz__r4_strings_6_7z00(obj_t BgL_envz00_4073,
		obj_t BgL_stringz00_4074)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 564 */
			{	/* Ieee/string.scm 565 */
				obj_t BgL_auxz00_5679;

				if (STRINGP(BgL_stringz00_4074))
					{	/* Ieee/string.scm 565 */
						BgL_auxz00_5679 = BgL_stringz00_4074;
					}
				else
					{
						obj_t BgL_auxz00_5682;

						BgL_auxz00_5682 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 25832)),
							BGl_string2635z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_stringz00_4074);
						FAILURE(BgL_auxz00_5682, BFALSE, BFALSE);
					}
				return BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(BgL_auxz00_5679);
			}
		}
	}



/* string-copy */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_81)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 576 */
			{	/* Ieee/string.scm 577 */
				long BgL_lenz00_770;

				BgL_lenz00_770 = STRING_LENGTH(BgL_stringz00_81);
				{	/* Ieee/string.scm 577 */
					obj_t BgL_newz00_771;

					BgL_newz00_771 = make_string_sans_fill(BgL_lenz00_770);
					{	/* Ieee/string.scm 578 */

						{	/* Ieee/string.scm 579 */
							long BgL_g1103z00_772;

							BgL_g1103z00_772 = (BgL_lenz00_770 - ((long) 1));
							{
								long BgL_iz00_774;

								BgL_iz00_774 = BgL_g1103z00_772;
							BgL_zc3anonymousza31340ze3z83_775:
								if ((BgL_iz00_774 == ((long) -1)))
									{	/* Ieee/string.scm 580 */
										return BgL_newz00_771;
									}
								else
									{	/* Ieee/string.scm 580 */
										{	/* Ieee/string.scm 583 */
											unsigned char BgL_auxz00_5692;

											BgL_auxz00_5692 =
												STRING_REF(BgL_stringz00_81, BgL_iz00_774);
											STRING_SET(BgL_newz00_771, BgL_iz00_774, BgL_auxz00_5692);
										}
										{
											long BgL_iz00_5695;

											BgL_iz00_5695 = (BgL_iz00_774 - ((long) 1));
											BgL_iz00_774 = BgL_iz00_5695;
											goto BgL_zc3anonymousza31340ze3z83_775;
										}
									}
							}
						}
					}
				}
			}
		}
	}



/* _string-copy */
	obj_t BGl__stringzd2copyzd2zz__r4_strings_6_7z00(obj_t BgL_envz00_4075,
		obj_t BgL_stringz00_4076)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 576 */
			{	/* Ieee/string.scm 577 */
				obj_t BgL_auxz00_5697;

				if (STRINGP(BgL_stringz00_4076))
					{	/* Ieee/string.scm 577 */
						BgL_auxz00_5697 = BgL_stringz00_4076;
					}
				else
					{
						obj_t BgL_auxz00_5700;

						BgL_auxz00_5700 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 26267)),
							BGl_string2636z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_stringz00_4076);
						FAILURE(BgL_auxz00_5700, BFALSE, BFALSE);
					}
				return BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_auxz00_5697);
			}
		}
	}



/* string-fill! */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2fillz12zc0zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_82, unsigned char BgL_charz00_83)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 589 */
			{	/* Ieee/string.scm 590 */
				long BgL_lenz00_2438;

				BgL_lenz00_2438 = STRING_LENGTH(BgL_stringz00_82);
				{
					long BgL_iz00_2445;

					BgL_iz00_2445 = ((long) 0);
				BgL_loopz00_2444:
					if ((BgL_iz00_2445 == BgL_lenz00_2438))
						{	/* Ieee/string.scm 590 */
							return BUNSPEC;
						}
					else
						{	/* Ieee/string.scm 590 */
							STRING_SET(BgL_stringz00_82, BgL_iz00_2445, BgL_charz00_83);
							{
								long BgL_iz00_5709;

								BgL_iz00_5709 = (BgL_iz00_2445 + ((long) 1));
								BgL_iz00_2445 = BgL_iz00_5709;
								goto BgL_loopz00_2444;
							}
						}
				}
			}
		}
	}



/* _string-fill! */
	obj_t BGl__stringzd2fillz12zc0zz__r4_strings_6_7z00(obj_t BgL_envz00_4077,
		obj_t BgL_stringz00_4078, obj_t BgL_charz00_4079)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 589 */
			{	/* Ieee/string.scm 590 */
				unsigned char BgL_auxz00_5718;

				obj_t BgL_auxz00_5711;

				{	/* Ieee/string.scm 590 */
					obj_t BgL_auxz00_5719;

					if (CHARP(BgL_charz00_4079))
						{	/* Ieee/string.scm 590 */
							BgL_auxz00_5719 = BgL_charz00_4079;
						}
					else
						{
							obj_t BgL_auxz00_5722;

							BgL_auxz00_5722 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 26749)),
								BGl_string2637z00zz__r4_strings_6_7z00,
								BGl_string2603z00zz__r4_strings_6_7z00, BgL_charz00_4079);
							FAILURE(BgL_auxz00_5722, BFALSE, BFALSE);
						}
					BgL_auxz00_5718 = CCHAR(BgL_auxz00_5719);
				}
				if (STRINGP(BgL_stringz00_4078))
					{	/* Ieee/string.scm 590 */
						BgL_auxz00_5711 = BgL_stringz00_4078;
					}
				else
					{
						obj_t BgL_auxz00_5714;

						BgL_auxz00_5714 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 26749)),
							BGl_string2637z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_stringz00_4078);
						FAILURE(BgL_auxz00_5714, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2fillz12zc0zz__r4_strings_6_7z00(BgL_auxz00_5711,
					BgL_auxz00_5718);
			}
		}
	}



/* string-upcase */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_84)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 601 */
			{	/* Ieee/string.scm 602 */
				long BgL_lenz00_787;

				BgL_lenz00_787 = STRING_LENGTH(BgL_stringz00_84);
				{	/* Ieee/string.scm 602 */
					obj_t BgL_resz00_788;

					BgL_resz00_788 = make_string_sans_fill(BgL_lenz00_787);
					{	/* Ieee/string.scm 603 */

						{
							long BgL_iz00_790;

							BgL_iz00_790 = ((long) 0);
						BgL_zc3anonymousza31347ze3z83_791:
							if ((BgL_iz00_790 == BgL_lenz00_787))
								{	/* Ieee/string.scm 605 */
									return BgL_resz00_788;
								}
							else
								{	/* Ieee/string.scm 605 */
									{	/* Ieee/string.scm 608 */
										unsigned char BgL_auxz00_5732;

										BgL_auxz00_5732 =
											toupper(STRING_REF(BgL_stringz00_84, BgL_iz00_790));
										STRING_SET(BgL_resz00_788, BgL_iz00_790, BgL_auxz00_5732);
									}
									{
										long BgL_iz00_5736;

										BgL_iz00_5736 = (BgL_iz00_790 + ((long) 1));
										BgL_iz00_790 = BgL_iz00_5736;
										goto BgL_zc3anonymousza31347ze3z83_791;
									}
								}
						}
					}
				}
			}
		}
	}



/* _string-upcase */
	obj_t BGl__stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t BgL_envz00_4080,
		obj_t BgL_stringz00_4081)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 601 */
			{	/* Ieee/string.scm 602 */
				obj_t BgL_auxz00_5738;

				if (STRINGP(BgL_stringz00_4081))
					{	/* Ieee/string.scm 602 */
						BgL_auxz00_5738 = BgL_stringz00_4081;
					}
				else
					{
						obj_t BgL_auxz00_5741;

						BgL_auxz00_5741 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 27173)),
							BGl_string2638z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_stringz00_4081);
						FAILURE(BgL_auxz00_5741, BFALSE, BFALSE);
					}
				return BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(BgL_auxz00_5738);
			}
		}
	}



/* string-downcase */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_85)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 614 */
			{	/* Ieee/string.scm 615 */
				long BgL_lenz00_797;

				BgL_lenz00_797 = STRING_LENGTH(BgL_stringz00_85);
				{	/* Ieee/string.scm 615 */
					obj_t BgL_resz00_798;

					BgL_resz00_798 = make_string_sans_fill(BgL_lenz00_797);
					{	/* Ieee/string.scm 616 */

						{
							long BgL_iz00_800;

							BgL_iz00_800 = ((long) 0);
						BgL_zc3anonymousza31356ze3z83_801:
							if ((BgL_iz00_800 == BgL_lenz00_797))
								{	/* Ieee/string.scm 618 */
									return BgL_resz00_798;
								}
							else
								{	/* Ieee/string.scm 618 */
									{	/* Ieee/string.scm 621 */
										unsigned char BgL_auxz00_5750;

										BgL_auxz00_5750 =
											tolower(STRING_REF(BgL_stringz00_85, BgL_iz00_800));
										STRING_SET(BgL_resz00_798, BgL_iz00_800, BgL_auxz00_5750);
									}
									{
										long BgL_iz00_5754;

										BgL_iz00_5754 = (BgL_iz00_800 + ((long) 1));
										BgL_iz00_800 = BgL_iz00_5754;
										goto BgL_zc3anonymousza31356ze3z83_801;
									}
								}
						}
					}
				}
			}
		}
	}



/* _string-downcase */
	obj_t BGl__stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t BgL_envz00_4082,
		obj_t BgL_stringz00_4083)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 614 */
			{	/* Ieee/string.scm 615 */
				obj_t BgL_auxz00_5756;

				if (STRINGP(BgL_stringz00_4083))
					{	/* Ieee/string.scm 615 */
						BgL_auxz00_5756 = BgL_stringz00_4083;
					}
				else
					{
						obj_t BgL_auxz00_5759;

						BgL_auxz00_5759 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 27658)),
							BGl_string2639z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_stringz00_4083);
						FAILURE(BgL_auxz00_5759, BFALSE, BFALSE);
					}
				return BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(BgL_auxz00_5756);
			}
		}
	}



/* string-upcase! */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2upcasez12zc0zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_86)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 627 */
			{	/* Ieee/string.scm 628 */
				long BgL_lenz00_807;

				BgL_lenz00_807 = STRING_LENGTH(BgL_stringz00_86);
				{
					long BgL_iz00_809;

					BgL_iz00_809 = ((long) 0);
				BgL_zc3anonymousza31361ze3z83_810:
					if ((BgL_iz00_809 == BgL_lenz00_807))
						{	/* Ieee/string.scm 630 */
							return BgL_stringz00_86;
						}
					else
						{	/* Ieee/string.scm 630 */
							{	/* Ieee/string.scm 633 */
								unsigned char BgL_auxz00_5767;

								BgL_auxz00_5767 =
									toupper(STRING_REF(BgL_stringz00_86, BgL_iz00_809));
								STRING_SET(BgL_stringz00_86, BgL_iz00_809, BgL_auxz00_5767);
							}
							{
								long BgL_iz00_5771;

								BgL_iz00_5771 = (BgL_iz00_809 + ((long) 1));
								BgL_iz00_809 = BgL_iz00_5771;
								goto BgL_zc3anonymousza31361ze3z83_810;
							}
						}
				}
			}
		}
	}



/* _string-upcase! */
	obj_t BGl__stringzd2upcasez12zc0zz__r4_strings_6_7z00(obj_t BgL_envz00_4084,
		obj_t BgL_stringz00_4085)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 627 */
			{	/* Ieee/string.scm 628 */
				obj_t BgL_auxz00_5773;

				if (STRINGP(BgL_stringz00_4085))
					{	/* Ieee/string.scm 628 */
						BgL_auxz00_5773 = BgL_stringz00_4085;
					}
				else
					{
						obj_t BgL_auxz00_5776;

						BgL_auxz00_5776 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 28144)),
							BGl_string2640z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_stringz00_4085);
						FAILURE(BgL_auxz00_5776, BFALSE, BFALSE);
					}
				return BGl_stringzd2upcasez12zc0zz__r4_strings_6_7z00(BgL_auxz00_5773);
			}
		}
	}



/* string-downcase! */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2downcasez12zc0zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_87)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 639 */
			{	/* Ieee/string.scm 640 */
				long BgL_lenz00_816;

				BgL_lenz00_816 = STRING_LENGTH(BgL_stringz00_87);
				{
					long BgL_iz00_818;

					BgL_iz00_818 = ((long) 0);
				BgL_zc3anonymousza31371ze3z83_819:
					if ((BgL_iz00_818 == BgL_lenz00_816))
						{	/* Ieee/string.scm 642 */
							return BgL_stringz00_87;
						}
					else
						{	/* Ieee/string.scm 642 */
							{	/* Ieee/string.scm 645 */
								unsigned char BgL_auxz00_5784;

								BgL_auxz00_5784 =
									tolower(STRING_REF(BgL_stringz00_87, BgL_iz00_818));
								STRING_SET(BgL_stringz00_87, BgL_iz00_818, BgL_auxz00_5784);
							}
							{
								long BgL_iz00_5788;

								BgL_iz00_5788 = (BgL_iz00_818 + ((long) 1));
								BgL_iz00_818 = BgL_iz00_5788;
								goto BgL_zc3anonymousza31371ze3z83_819;
							}
						}
				}
			}
		}
	}



/* _string-downcase! */
	obj_t BGl__stringzd2downcasez12zc0zz__r4_strings_6_7z00(obj_t BgL_envz00_4086,
		obj_t BgL_stringz00_4087)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 639 */
			{	/* Ieee/string.scm 640 */
				obj_t BgL_auxz00_5790;

				if (STRINGP(BgL_stringz00_4087))
					{	/* Ieee/string.scm 640 */
						BgL_auxz00_5790 = BgL_stringz00_4087;
					}
				else
					{
						obj_t BgL_auxz00_5793;

						BgL_auxz00_5793 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 28599)),
							BGl_string2641z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_stringz00_4087);
						FAILURE(BgL_auxz00_5793, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2downcasez12zc0zz__r4_strings_6_7z00(BgL_auxz00_5790);
			}
		}
	}



/* string-capitalize! */
	BGL_EXPORTED_DEF obj_t
		BGl_stringzd2capitaliza7ez12z67zz__r4_strings_6_7z00(obj_t BgL_stringz00_88)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 655 */
			{	/* Ieee/string.scm 656 */
				bool_t BgL_nonzd2firstzd2alphaz00_825;

				long BgL_stringzd2lenzd2_826;

				BgL_nonzd2firstzd2alphaz00_825 = ((bool_t) 0);
				BgL_stringzd2lenzd2_826 = STRING_LENGTH(BgL_stringz00_88);
				{
					long BgL_iz00_828;

					BgL_iz00_828 = ((long) 0);
				BgL_zc3anonymousza31376ze3z83_829:
					if ((BgL_iz00_828 == BgL_stringzd2lenzd2_826))
						{	/* Ieee/string.scm 658 */
							return BgL_stringz00_88;
						}
					else
						{	/* Ieee/string.scm 658 */
							{	/* Ieee/string.scm 660 */
								unsigned char BgL_cz00_831;

								BgL_cz00_831 = STRING_REF(BgL_stringz00_88, BgL_iz00_828);
								{	/* Ieee/string.scm 661 */
									bool_t BgL_testz00_5802;

									if (isalpha(BgL_cz00_831))
										{	/* Ieee/string.scm 661 */
											BgL_testz00_5802 = ((bool_t) 1);
										}
									else
										{	/* Ieee/string.scm 661 */
											BgL_testz00_5802 = ((BgL_cz00_831) > ((long) 127));
										}
									if (BgL_testz00_5802)
										{	/* Ieee/string.scm 661 */
											if (BgL_nonzd2firstzd2alphaz00_825)
												{	/* Ieee/string.scm 663 */
													unsigned char BgL_auxz00_5808;

													BgL_auxz00_5808 = tolower(BgL_cz00_831);
													STRING_SET(BgL_stringz00_88, BgL_iz00_828,
														BgL_auxz00_5808);
												}
											else
												{	/* Ieee/string.scm 662 */
													BgL_nonzd2firstzd2alphaz00_825 = ((bool_t) 1);
													{	/* Ieee/string.scm 666 */
														unsigned char BgL_auxz00_5811;

														BgL_auxz00_5811 = toupper(BgL_cz00_831);
														STRING_SET(BgL_stringz00_88, BgL_iz00_828,
															BgL_auxz00_5811);
										}}}
									else
										{	/* Ieee/string.scm 661 */
											BgL_nonzd2firstzd2alphaz00_825 = ((bool_t) 0);
										}
								}
							}
							{
								long BgL_iz00_5814;

								BgL_iz00_5814 = (BgL_iz00_828 + ((long) 1));
								BgL_iz00_828 = BgL_iz00_5814;
								goto BgL_zc3anonymousza31376ze3z83_829;
							}
						}
				}
			}
		}
	}



/* _string-capitalize! */
	obj_t BGl__stringzd2capitaliza7ez12z67zz__r4_strings_6_7z00(obj_t
		BgL_envz00_4088, obj_t BgL_stringz00_4089)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 655 */
			{	/* Ieee/string.scm 656 */
				obj_t BgL_auxz00_5816;

				if (STRINGP(BgL_stringz00_4089))
					{	/* Ieee/string.scm 656 */
						BgL_auxz00_5816 = BgL_stringz00_4089;
					}
				else
					{
						obj_t BgL_auxz00_5819;

						BgL_auxz00_5819 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 29354)),
							BGl_string2642z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_stringz00_4089);
						FAILURE(BgL_auxz00_5819, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2capitaliza7ez12z67zz__r4_strings_6_7z00(BgL_auxz00_5816);
			}
		}
	}



/* string-capitalize */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2capitaliza7ez75zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_89)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 672 */
			return
				BGl_stringzd2capitaliza7ez12z67zz__r4_strings_6_7z00
				(BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_stringz00_89));
		}
	}



/* _string-capitalize */
	obj_t BGl__stringzd2capitaliza7ez75zz__r4_strings_6_7z00(obj_t
		BgL_envz00_4090, obj_t BgL_stringz00_4091)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 672 */
			{	/* Ieee/string.scm 673 */
				obj_t BgL_auxz00_5826;

				if (STRINGP(BgL_stringz00_4091))
					{	/* Ieee/string.scm 673 */
						BgL_auxz00_5826 = BgL_stringz00_4091;
					}
				else
					{
						obj_t BgL_auxz00_5829;

						BgL_auxz00_5829 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 30078)),
							BGl_string2643z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_stringz00_4091);
						FAILURE(BgL_auxz00_5829, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2capitaliza7ez75zz__r4_strings_6_7z00(BgL_auxz00_5826);
			}
		}
	}



/* string-for-read */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2forzd2readz00zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_90)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 678 */
			return string_for_read(BgL_stringz00_90);
		}
	}



/* _string-for-read */
	obj_t BGl__stringzd2forzd2readz00zz__r4_strings_6_7z00(obj_t BgL_envz00_4092,
		obj_t BgL_stringz00_4093)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 678 */
			{	/* Ieee/string.scm 679 */
				obj_t BgL_stringz00_4684;

				if (STRINGP(BgL_stringz00_4093))
					{	/* Ieee/string.scm 679 */
						BgL_stringz00_4684 = BgL_stringz00_4093;
					}
				else
					{
						obj_t BgL_auxz00_5837;

						BgL_auxz00_5837 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 30367)),
							BGl_string2644z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_stringz00_4093);
						FAILURE(BgL_auxz00_5837, BFALSE, BFALSE);
					}
				return string_for_read(BgL_stringz00_4684);
			}
		}
	}



/* escape-C-string */
	BGL_EXPORTED_DEF obj_t BGl_escapezd2Czd2stringz00zz__r4_strings_6_7z00(obj_t
		BgL_strz00_91)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 686 */
			{	/* Ieee/string.scm 687 */
				obj_t BgL_arg1386z00_4685;

				{	/* Ieee/string.scm 687 */
					long BgL_endz00_4686;

					BgL_endz00_4686 = STRING_LENGTH(BgL_strz00_91);
					{	/* Ieee/string.scm 687 */

						BgL_arg1386z00_4685 =
							BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_91, ((long) 1),
							BgL_endz00_4686);
				}}
				return
					bgl_escape_C_string(BSTRING_TO_STRING(BgL_arg1386z00_4685),
					((long) 0), STRING_LENGTH(BgL_arg1386z00_4685));
		}}
	}



/* _escape-C-string */
	obj_t BGl__escapezd2Czd2stringz00zz__r4_strings_6_7z00(obj_t BgL_envz00_4094,
		obj_t BgL_strz00_4095)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 686 */
			{	/* Ieee/string.scm 687 */
				obj_t BgL_res2728z00_4690;

				{	/* Ieee/string.scm 687 */
					obj_t BgL_strz00_4687;

					if (STRINGP(BgL_strz00_4095))
						{	/* Ieee/string.scm 687 */
							BgL_strz00_4687 = BgL_strz00_4095;
						}
					else
						{
							obj_t BgL_auxz00_5849;

							BgL_auxz00_5849 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 30821)),
								BGl_string2645z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_strz00_4095);
							FAILURE(BgL_auxz00_5849, BFALSE, BFALSE);
						}
					{	/* Ieee/string.scm 687 */
						obj_t BgL_arg1386z00_4688;

						{	/* Ieee/string.scm 687 */
							long BgL_endz00_4689;

							BgL_endz00_4689 = STRING_LENGTH(BgL_strz00_4687);
							{	/* Ieee/string.scm 687 */

								BgL_arg1386z00_4688 =
									BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_4687,
									((long) 1), BgL_endz00_4689);
						}}
						BgL_res2728z00_4690 =
							bgl_escape_C_string(BSTRING_TO_STRING(BgL_arg1386z00_4688),
							((long) 0), STRING_LENGTH(BgL_arg1386z00_4688));
				}}
				return BgL_res2728z00_4690;
			}
		}
	}



/* escape-scheme-string */
	BGL_EXPORTED_DEF obj_t
		BGl_escapezd2schemezd2stringz00zz__r4_strings_6_7z00(obj_t BgL_strz00_92)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 694 */
			return
				bgl_escape_scheme_string(BSTRING_TO_STRING(BgL_strz00_92), ((long) 0),
				STRING_LENGTH(BgL_strz00_92));
		}
	}



/* _escape-scheme-string */
	obj_t BGl__escapezd2schemezd2stringz00zz__r4_strings_6_7z00(obj_t
		BgL_envz00_4096, obj_t BgL_strz00_4097)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 694 */
			{	/* Ieee/string.scm 695 */
				obj_t BgL_strz00_4691;

				if (STRINGP(BgL_strz00_4097))
					{	/* Ieee/string.scm 695 */
						BgL_strz00_4691 = BgL_strz00_4097;
					}
				else
					{
						obj_t BgL_auxz00_5863;

						BgL_auxz00_5863 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 31257)),
							BGl_string2646z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_strz00_4097);
						FAILURE(BgL_auxz00_5863, BFALSE, BFALSE);
					}
				return
					bgl_escape_scheme_string(BSTRING_TO_STRING(BgL_strz00_4691),
					((long) 0), STRING_LENGTH(BgL_strz00_4691));
		}}
	}



/* string-as-read */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2aszd2readz00zz__r4_strings_6_7z00(obj_t
		BgL_strz00_93)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 700 */
			return
				bgl_escape_C_string(BSTRING_TO_STRING(BgL_strz00_93), ((long) 0),
				STRING_LENGTH(BgL_strz00_93));
		}
	}



/* _string-as-read */
	obj_t BGl__stringzd2aszd2readz00zz__r4_strings_6_7z00(obj_t BgL_envz00_4098,
		obj_t BgL_strz00_4099)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 700 */
			{	/* Ieee/string.scm 701 */
				obj_t BgL_strz00_4692;

				if (STRINGP(BgL_strz00_4099))
					{	/* Ieee/string.scm 701 */
						BgL_strz00_4692 = BgL_strz00_4099;
					}
				else
					{
						obj_t BgL_auxz00_5875;

						BgL_auxz00_5875 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 31570)),
							BGl_string2647z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_strz00_4099);
						FAILURE(BgL_auxz00_5875, BFALSE, BFALSE);
					}
				return
					bgl_escape_C_string(BSTRING_TO_STRING(BgL_strz00_4692), ((long) 0),
					STRING_LENGTH(BgL_strz00_4692));
		}}
	}



/* blit-string-ur! */
	BGL_EXPORTED_DEF obj_t BGl_blitzd2stringzd2urz12z12zz__r4_strings_6_7z00(obj_t
		BgL_s1z00_94, long BgL_o1z00_95, obj_t BgL_s2z00_96, long BgL_o2z00_97,
		long BgL_lz00_98)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 706 */
			return
				blit_string(BgL_s1z00_94, BgL_o1z00_95, BgL_s2z00_96, BgL_o2z00_97,
				BgL_lz00_98);
		}
	}



/* _blit-string-ur! */
	obj_t BGl__blitzd2stringzd2urz12z12zz__r4_strings_6_7z00(obj_t
		BgL_envz00_4100, obj_t BgL_s1z00_4101, obj_t BgL_o1z00_4102,
		obj_t BgL_s2z00_4103, obj_t BgL_o2z00_4104, obj_t BgL_lz00_4105)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 706 */
			{	/* Ieee/string.scm 707 */
				obj_t BgL_s1z00_4693;

				long BgL_o1z00_4694;

				obj_t BgL_s2z00_4695;

				long BgL_o2z00_4696;

				long BgL_lz00_4697;

				if (STRINGP(BgL_s1z00_4101))
					{	/* Ieee/string.scm 707 */
						BgL_s1z00_4693 = BgL_s1z00_4101;
					}
				else
					{
						obj_t BgL_auxz00_5885;

						BgL_auxz00_5885 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 31889)),
							BGl_string2648z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_s1z00_4101);
						FAILURE(BgL_auxz00_5885, BFALSE, BFALSE);
					}
				{	/* Ieee/string.scm 707 */
					obj_t BgL_auxz00_5889;

					if (INTEGERP(BgL_o1z00_4102))
						{	/* Ieee/string.scm 707 */
							BgL_auxz00_5889 = BgL_o1z00_4102;
						}
					else
						{
							obj_t BgL_auxz00_5892;

							BgL_auxz00_5892 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 31889)),
								BGl_string2648z00zz__r4_strings_6_7z00,
								BGl_string2599z00zz__r4_strings_6_7z00, BgL_o1z00_4102);
							FAILURE(BgL_auxz00_5892, BFALSE, BFALSE);
						}
					BgL_o1z00_4694 = (long) CINT(BgL_auxz00_5889);
				}
				if (STRINGP(BgL_s2z00_4103))
					{	/* Ieee/string.scm 707 */
						BgL_s2z00_4695 = BgL_s2z00_4103;
					}
				else
					{
						obj_t BgL_auxz00_5899;

						BgL_auxz00_5899 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 31889)),
							BGl_string2648z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_s2z00_4103);
						FAILURE(BgL_auxz00_5899, BFALSE, BFALSE);
					}
				{	/* Ieee/string.scm 707 */
					obj_t BgL_auxz00_5903;

					if (INTEGERP(BgL_o2z00_4104))
						{	/* Ieee/string.scm 707 */
							BgL_auxz00_5903 = BgL_o2z00_4104;
						}
					else
						{
							obj_t BgL_auxz00_5906;

							BgL_auxz00_5906 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 31889)),
								BGl_string2648z00zz__r4_strings_6_7z00,
								BGl_string2599z00zz__r4_strings_6_7z00, BgL_o2z00_4104);
							FAILURE(BgL_auxz00_5906, BFALSE, BFALSE);
						}
					BgL_o2z00_4696 = (long) CINT(BgL_auxz00_5903);
				}
				{	/* Ieee/string.scm 707 */
					obj_t BgL_auxz00_5911;

					if (INTEGERP(BgL_lz00_4105))
						{	/* Ieee/string.scm 707 */
							BgL_auxz00_5911 = BgL_lz00_4105;
						}
					else
						{
							obj_t BgL_auxz00_5914;

							BgL_auxz00_5914 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 31889)),
								BGl_string2648z00zz__r4_strings_6_7z00,
								BGl_string2599z00zz__r4_strings_6_7z00, BgL_lz00_4105);
							FAILURE(BgL_auxz00_5914, BFALSE, BFALSE);
						}
					BgL_lz00_4697 = (long) CINT(BgL_auxz00_5911);
				}
				return
					blit_string(BgL_s1z00_4693, BgL_o1z00_4694, BgL_s2z00_4695,
					BgL_o2z00_4696, BgL_lz00_4697);
			}
		}
	}



/* blit-string! */
	BGL_EXPORTED_DEF obj_t BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(obj_t
		BgL_s1z00_99, long BgL_o1z00_100, obj_t BgL_s2z00_101, long BgL_o2z00_102,
		long BgL_lz00_103)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 712 */
			{	/* Ieee/string.scm 713 */
				bool_t BgL_testz00_5920;

				{	/* Ieee/string.scm 713 */
					bool_t BgL_testz00_5921;

					{	/* Ieee/string.scm 713 */
						long BgL_auxz00_5924;

						long BgL_auxz00_5922;

						BgL_auxz00_5924 = (STRING_LENGTH(BgL_s1z00_99) + ((long) 1));
						BgL_auxz00_5922 = (BgL_lz00_103 + BgL_o1z00_100);
						BgL_testz00_5921 = BOUND_CHECK(BgL_auxz00_5922, BgL_auxz00_5924);
					}
					if (BgL_testz00_5921)
						{	/* Ieee/string.scm 714 */
							long BgL_auxz00_5930;

							long BgL_auxz00_5928;

							BgL_auxz00_5930 = (STRING_LENGTH(BgL_s2z00_101) + ((long) 1));
							BgL_auxz00_5928 = (BgL_lz00_103 + BgL_o2z00_102);
							BgL_testz00_5920 = BOUND_CHECK(BgL_auxz00_5928, BgL_auxz00_5930);
						}
					else
						{	/* Ieee/string.scm 713 */
							BgL_testz00_5920 = ((bool_t) 0);
						}
				}
				if (BgL_testz00_5920)
					{	/* Ieee/string.scm 713 */
						return
							blit_string(BgL_s1z00_99, BgL_o1z00_100, BgL_s2z00_101,
							BgL_o2z00_102, BgL_lz00_103);
					}
				else
					{	/* Ieee/string.scm 716 */
						obj_t BgL_arg1393z00_851;

						obj_t BgL_arg1394z00_852;

						{	/* Ieee/string.scm 717 */
							obj_t BgL_list1395z00_853;

							{	/* Ieee/string.scm 717 */
								obj_t BgL_arg1397z00_855;

								{	/* Ieee/string.scm 717 */
									obj_t BgL_arg1398z00_856;

									{	/* Ieee/string.scm 717 */
										obj_t BgL_arg1400z00_858;

										{	/* Ieee/string.scm 717 */
											obj_t BgL_arg1401z00_859;

											BgL_arg1401z00_859 =
												MAKE_PAIR(BGl_string2649z00zz__r4_strings_6_7z00, BNIL);
											BgL_arg1400z00_858 =
												MAKE_PAIR(BgL_s2z00_101, BgL_arg1401z00_859);
										}
										BgL_arg1398z00_856 =
											MAKE_PAIR(BGl_string2650z00zz__r4_strings_6_7z00,
											BgL_arg1400z00_858);
									}
									BgL_arg1397z00_855 =
										MAKE_PAIR(BgL_s1z00_99, BgL_arg1398z00_856);
								}
								BgL_list1395z00_853 =
									MAKE_PAIR(BGl_string2651z00zz__r4_strings_6_7z00,
									BgL_arg1397z00_855);
							}
							BgL_arg1393z00_851 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list1395z00_853);
						}
						{	/* Ieee/string.scm 718 */
							long BgL_arg1402z00_860;

							long BgL_arg1403z00_861;

							BgL_arg1402z00_860 = STRING_LENGTH(BgL_s1z00_99);
							BgL_arg1403z00_861 = STRING_LENGTH(BgL_s2z00_101);
							{	/* Ieee/string.scm 718 */
								obj_t BgL_list1404z00_862;

								{	/* Ieee/string.scm 718 */
									obj_t BgL_arg1405z00_863;

									{	/* Ieee/string.scm 718 */
										obj_t BgL_arg1406z00_864;

										{	/* Ieee/string.scm 718 */
											obj_t BgL_arg1407z00_865;

											{	/* Ieee/string.scm 718 */
												obj_t BgL_arg1408z00_866;

												BgL_arg1408z00_866 =
													MAKE_PAIR(BINT(BgL_lz00_103), BNIL);
												BgL_arg1407z00_865 =
													MAKE_PAIR(BINT(BgL_o2z00_102), BgL_arg1408z00_866);
											}
											BgL_arg1406z00_864 =
												MAKE_PAIR(BINT(BgL_arg1403z00_861), BgL_arg1407z00_865);
										}
										BgL_arg1405z00_863 =
											MAKE_PAIR(BINT(BgL_o1z00_100), BgL_arg1406z00_864);
									}
									BgL_list1404z00_862 =
										MAKE_PAIR(BINT(BgL_arg1402z00_860), BgL_arg1405z00_863);
								}
								BgL_arg1394z00_852 = BgL_list1404z00_862;
						}}
						return
							BGl_errorz00zz__errorz00(BGl_string2652z00zz__r4_strings_6_7z00,
							BgL_arg1393z00_851, BgL_arg1394z00_852);
					}
			}
		}
	}



/* _blit-string! */
	obj_t BGl__blitzd2stringz12zc0zz__r4_strings_6_7z00(obj_t BgL_envz00_4106,
		obj_t BgL_s1z00_4107, obj_t BgL_o1z00_4108, obj_t BgL_s2z00_4109,
		obj_t BgL_o2z00_4110, obj_t BgL_lz00_4111)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 712 */
			{	/* Ieee/string.scm 713 */
				long BgL_auxz00_5986;

				long BgL_auxz00_5977;

				obj_t BgL_auxz00_5970;

				long BgL_auxz00_5961;

				obj_t BgL_auxz00_5954;

				{	/* Ieee/string.scm 713 */
					obj_t BgL_auxz00_5987;

					if (INTEGERP(BgL_lz00_4111))
						{	/* Ieee/string.scm 713 */
							BgL_auxz00_5987 = BgL_lz00_4111;
						}
					else
						{
							obj_t BgL_auxz00_5990;

							BgL_auxz00_5990 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 32182)),
								BGl_string2653z00zz__r4_strings_6_7z00,
								BGl_string2599z00zz__r4_strings_6_7z00, BgL_lz00_4111);
							FAILURE(BgL_auxz00_5990, BFALSE, BFALSE);
						}
					BgL_auxz00_5986 = (long) CINT(BgL_auxz00_5987);
				}
				{	/* Ieee/string.scm 713 */
					obj_t BgL_auxz00_5978;

					if (INTEGERP(BgL_o2z00_4110))
						{	/* Ieee/string.scm 713 */
							BgL_auxz00_5978 = BgL_o2z00_4110;
						}
					else
						{
							obj_t BgL_auxz00_5981;

							BgL_auxz00_5981 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 32182)),
								BGl_string2653z00zz__r4_strings_6_7z00,
								BGl_string2599z00zz__r4_strings_6_7z00, BgL_o2z00_4110);
							FAILURE(BgL_auxz00_5981, BFALSE, BFALSE);
						}
					BgL_auxz00_5977 = (long) CINT(BgL_auxz00_5978);
				}
				if (STRINGP(BgL_s2z00_4109))
					{	/* Ieee/string.scm 713 */
						BgL_auxz00_5970 = BgL_s2z00_4109;
					}
				else
					{
						obj_t BgL_auxz00_5973;

						BgL_auxz00_5973 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 32182)),
							BGl_string2653z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_s2z00_4109);
						FAILURE(BgL_auxz00_5973, BFALSE, BFALSE);
					}
				{	/* Ieee/string.scm 713 */
					obj_t BgL_auxz00_5962;

					if (INTEGERP(BgL_o1z00_4108))
						{	/* Ieee/string.scm 713 */
							BgL_auxz00_5962 = BgL_o1z00_4108;
						}
					else
						{
							obj_t BgL_auxz00_5965;

							BgL_auxz00_5965 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 32182)),
								BGl_string2653z00zz__r4_strings_6_7z00,
								BGl_string2599z00zz__r4_strings_6_7z00, BgL_o1z00_4108);
							FAILURE(BgL_auxz00_5965, BFALSE, BFALSE);
						}
					BgL_auxz00_5961 = (long) CINT(BgL_auxz00_5962);
				}
				if (STRINGP(BgL_s1z00_4107))
					{	/* Ieee/string.scm 713 */
						BgL_auxz00_5954 = BgL_s1z00_4107;
					}
				else
					{
						obj_t BgL_auxz00_5957;

						BgL_auxz00_5957 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 32182)),
							BGl_string2653z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_s1z00_4107);
						FAILURE(BgL_auxz00_5957, BFALSE, BFALSE);
					}
				return
					BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BgL_auxz00_5954,
					BgL_auxz00_5961, BgL_auxz00_5970, BgL_auxz00_5977, BgL_auxz00_5986);
			}
		}
	}



/* string-shrink! */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2shrinkz12zc0zz__r4_strings_6_7z00(obj_t
		BgL_sz00_104, long BgL_lz00_105)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 723 */
			return bgl_string_shrink(BgL_sz00_104, BgL_lz00_105);
		}
	}



/* _string-shrink! */
	obj_t BGl__stringzd2shrinkz12zc0zz__r4_strings_6_7z00(obj_t BgL_envz00_4112,
		obj_t BgL_sz00_4113, obj_t BgL_lz00_4114)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 723 */
			{	/* Ieee/string.scm 724 */
				obj_t BgL_sz00_4698;

				long BgL_lz00_4699;

				if (STRINGP(BgL_sz00_4113))
					{	/* Ieee/string.scm 724 */
						BgL_sz00_4698 = BgL_sz00_4113;
					}
				else
					{
						obj_t BgL_auxz00_5999;

						BgL_auxz00_5999 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 32791)),
							BGl_string2654z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_sz00_4113);
						FAILURE(BgL_auxz00_5999, BFALSE, BFALSE);
					}
				{	/* Ieee/string.scm 724 */
					obj_t BgL_auxz00_6003;

					if (INTEGERP(BgL_lz00_4114))
						{	/* Ieee/string.scm 724 */
							BgL_auxz00_6003 = BgL_lz00_4114;
						}
					else
						{
							obj_t BgL_auxz00_6006;

							BgL_auxz00_6006 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 32791)),
								BGl_string2654z00zz__r4_strings_6_7z00,
								BGl_string2599z00zz__r4_strings_6_7z00, BgL_lz00_4114);
							FAILURE(BgL_auxz00_6006, BFALSE, BFALSE);
						}
					BgL_lz00_4699 = (long) CINT(BgL_auxz00_6003);
				}
				return bgl_string_shrink(BgL_sz00_4698, BgL_lz00_4699);
			}
		}
	}



/* string-replace */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2replacezd2zz__r4_strings_6_7z00(obj_t
		BgL_strz00_106, unsigned char BgL_c1z00_107, unsigned char BgL_c2z00_108)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 729 */
			{	/* Ieee/string.scm 730 */
				long BgL_lenz00_876;

				BgL_lenz00_876 = STRING_LENGTH(BgL_strz00_106);
				{	/* Ieee/string.scm 730 */
					obj_t BgL_newz00_877;

					BgL_newz00_877 = make_string(BgL_lenz00_876, ((unsigned char) ' '));
					{	/* Ieee/string.scm 731 */

						{
							long BgL_iz00_879;

							BgL_iz00_879 = ((long) 0);
						BgL_zc3anonymousza31418ze3z83_880:
							if ((BgL_iz00_879 == BgL_lenz00_876))
								{	/* Ieee/string.scm 733 */
									return BgL_newz00_877;
								}
							else
								{	/* Ieee/string.scm 735 */
									unsigned char BgL_cz00_882;

									BgL_cz00_882 = STRING_REF(BgL_strz00_106, BgL_iz00_879);
									if ((BgL_cz00_882 == (unsigned char) (BgL_c1z00_107)))
										{	/* Ieee/string.scm 737 */
											unsigned char BgL_auxz00_6020;

											BgL_auxz00_6020 = (unsigned char) (BgL_c2z00_108);
											STRING_SET(BgL_newz00_877, BgL_iz00_879, BgL_auxz00_6020);
										}
									else
										{	/* Ieee/string.scm 736 */
											STRING_SET(BgL_newz00_877, BgL_iz00_879, BgL_cz00_882);
										}
									{
										long BgL_iz00_6024;

										BgL_iz00_6024 = (BgL_iz00_879 + ((long) 1));
										BgL_iz00_879 = BgL_iz00_6024;
										goto BgL_zc3anonymousza31418ze3z83_880;
									}
								}
						}
					}
				}
			}
		}
	}



/* _string-replace */
	obj_t BGl__stringzd2replacezd2zz__r4_strings_6_7z00(obj_t BgL_envz00_4115,
		obj_t BgL_strz00_4116, obj_t BgL_c1z00_4117, obj_t BgL_c2z00_4118)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 729 */
			{	/* Ieee/string.scm 730 */
				unsigned char BgL_auxz00_6042;

				unsigned char BgL_auxz00_6033;

				obj_t BgL_auxz00_6026;

				{	/* Ieee/string.scm 730 */
					obj_t BgL_auxz00_6043;

					if (CHARP(BgL_c2z00_4118))
						{	/* Ieee/string.scm 730 */
							BgL_auxz00_6043 = BgL_c2z00_4118;
						}
					else
						{
							obj_t BgL_auxz00_6046;

							BgL_auxz00_6046 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 33075)),
								BGl_string2655z00zz__r4_strings_6_7z00,
								BGl_string2656z00zz__r4_strings_6_7z00, BgL_c2z00_4118);
							FAILURE(BgL_auxz00_6046, BFALSE, BFALSE);
						}
					BgL_auxz00_6042 = CCHAR(BgL_auxz00_6043);
				}
				{	/* Ieee/string.scm 730 */
					obj_t BgL_auxz00_6034;

					if (CHARP(BgL_c1z00_4117))
						{	/* Ieee/string.scm 730 */
							BgL_auxz00_6034 = BgL_c1z00_4117;
						}
					else
						{
							obj_t BgL_auxz00_6037;

							BgL_auxz00_6037 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 33075)),
								BGl_string2655z00zz__r4_strings_6_7z00,
								BGl_string2656z00zz__r4_strings_6_7z00, BgL_c1z00_4117);
							FAILURE(BgL_auxz00_6037, BFALSE, BFALSE);
						}
					BgL_auxz00_6033 = CCHAR(BgL_auxz00_6034);
				}
				if (STRINGP(BgL_strz00_4116))
					{	/* Ieee/string.scm 730 */
						BgL_auxz00_6026 = BgL_strz00_4116;
					}
				else
					{
						obj_t BgL_auxz00_6029;

						BgL_auxz00_6029 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 33075)),
							BGl_string2655z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_strz00_4116);
						FAILURE(BgL_auxz00_6029, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2replacezd2zz__r4_strings_6_7z00(BgL_auxz00_6026,
					BgL_auxz00_6033, BgL_auxz00_6042);
			}
		}
	}



/* string-replace! */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00(obj_t
		BgL_strz00_109, unsigned char BgL_c1z00_110, unsigned char BgL_c2z00_111)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 744 */
			{	/* Ieee/string.scm 745 */
				long BgL_lenz00_887;

				BgL_lenz00_887 = STRING_LENGTH(BgL_strz00_109);
				{
					long BgL_iz00_889;

					BgL_iz00_889 = ((long) 0);
				BgL_zc3anonymousza31423ze3z83_890:
					if ((BgL_iz00_889 == BgL_lenz00_887))
						{	/* Ieee/string.scm 748 */
							return BgL_strz00_109;
						}
					else
						{	/* Ieee/string.scm 748 */
							if (
								(STRING_REF(BgL_strz00_109, BgL_iz00_889) ==
									(unsigned char) (BgL_c1z00_110)))
								{	/* Ieee/string.scm 750 */
									{	/* Ieee/string.scm 751 */
										unsigned char BgL_auxz00_6059;

										BgL_auxz00_6059 = (unsigned char) (BgL_c2z00_111);
										STRING_SET(BgL_strz00_109, BgL_iz00_889, BgL_auxz00_6059);
									}
									{
										long BgL_iz00_6062;

										BgL_iz00_6062 = (BgL_iz00_889 + ((long) 1));
										BgL_iz00_889 = BgL_iz00_6062;
										goto BgL_zc3anonymousza31423ze3z83_890;
									}
								}
							else
								{
									long BgL_iz00_6064;

									BgL_iz00_6064 = (BgL_iz00_889 + ((long) 1));
									BgL_iz00_889 = BgL_iz00_6064;
									goto BgL_zc3anonymousza31423ze3z83_890;
								}
						}
				}
			}
		}
	}



/* _string-replace! */
	obj_t BGl__stringzd2replacez12zc0zz__r4_strings_6_7z00(obj_t BgL_envz00_4119,
		obj_t BgL_strz00_4120, obj_t BgL_c1z00_4121, obj_t BgL_c2z00_4122)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 744 */
			{	/* Ieee/string.scm 745 */
				unsigned char BgL_auxz00_6082;

				unsigned char BgL_auxz00_6073;

				obj_t BgL_auxz00_6066;

				{	/* Ieee/string.scm 745 */
					obj_t BgL_auxz00_6083;

					if (CHARP(BgL_c2z00_4122))
						{	/* Ieee/string.scm 745 */
							BgL_auxz00_6083 = BgL_c2z00_4122;
						}
					else
						{
							obj_t BgL_auxz00_6086;

							BgL_auxz00_6086 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 33597)),
								BGl_string2657z00zz__r4_strings_6_7z00,
								BGl_string2656z00zz__r4_strings_6_7z00, BgL_c2z00_4122);
							FAILURE(BgL_auxz00_6086, BFALSE, BFALSE);
						}
					BgL_auxz00_6082 = CCHAR(BgL_auxz00_6083);
				}
				{	/* Ieee/string.scm 745 */
					obj_t BgL_auxz00_6074;

					if (CHARP(BgL_c1z00_4121))
						{	/* Ieee/string.scm 745 */
							BgL_auxz00_6074 = BgL_c1z00_4121;
						}
					else
						{
							obj_t BgL_auxz00_6077;

							BgL_auxz00_6077 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 33597)),
								BGl_string2657z00zz__r4_strings_6_7z00,
								BGl_string2656z00zz__r4_strings_6_7z00, BgL_c1z00_4121);
							FAILURE(BgL_auxz00_6077, BFALSE, BFALSE);
						}
					BgL_auxz00_6073 = CCHAR(BgL_auxz00_6074);
				}
				if (STRINGP(BgL_strz00_4120))
					{	/* Ieee/string.scm 745 */
						BgL_auxz00_6066 = BgL_strz00_4120;
					}
				else
					{
						obj_t BgL_auxz00_6069;

						BgL_auxz00_6069 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 33597)),
							BGl_string2657z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_strz00_4120);
						FAILURE(BgL_auxz00_6069, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00(BgL_auxz00_6066,
					BgL_auxz00_6073, BgL_auxz00_6082);
			}
		}
	}



/* _string-delete */
	obj_t BGl__stringzd2deletezd2zz__r4_strings_6_7z00(obj_t BgL_envz00_117,
		obj_t BgL_optz00_116)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 759 */
			{	/* Ieee/string.scm 759 */
				obj_t BgL_stringz00_897;

				obj_t BgL_g1177z00_898;

				BgL_stringz00_897 = VECTOR_REF(BgL_optz00_116, (int) (((long) 0)));
				BgL_g1177z00_898 = VECTOR_REF(BgL_optz00_116, (int) (((long) 1)));
				{	/* Ieee/string.scm 759 */
					int BgL_aux1179z00_900;

					BgL_aux1179z00_900 = VECTOR_LENGTH(BgL_optz00_116);
					switch ((long) (BgL_aux1179z00_900))
						{
						case ((long) 2):

							{	/* Ieee/string.scm 759 */
								long BgL_endz00_903;

								{	/* Ieee/string.scm 759 */
									obj_t BgL_stringz00_2606;

									if (STRINGP(BgL_stringz00_897))
										{	/* Ieee/string.scm 759 */
											BgL_stringz00_2606 = BgL_stringz00_897;
										}
									else
										{
											obj_t BgL_auxz00_6099;

											BgL_auxz00_6099 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2595z00zz__r4_strings_6_7z00,
												BINT(((long) 34120)),
												BGl_string2658z00zz__r4_strings_6_7z00,
												BGl_string2597z00zz__r4_strings_6_7z00,
												BgL_stringz00_897);
											FAILURE(BgL_auxz00_6099, BFALSE, BFALSE);
										}
									BgL_endz00_903 = STRING_LENGTH(BgL_stringz00_2606);
								}
								{	/* Ieee/string.scm 759 */

									{	/* Ieee/string.scm 759 */
										obj_t BgL_arg1430z00_904;

										obj_t BgL_arg1431z00_905;

										BgL_arg1430z00_904 =
											VECTOR_REF(BgL_optz00_116, (int) (((long) 0)));
										BgL_arg1431z00_905 =
											VECTOR_REF(BgL_optz00_116, (int) (((long) 1)));
										{	/* Ieee/string.scm 759 */
											obj_t BgL_auxz00_6108;

											if (STRINGP(BgL_arg1430z00_904))
												{	/* Ieee/string.scm 759 */
													BgL_auxz00_6108 = BgL_arg1430z00_904;
												}
											else
												{
													obj_t BgL_auxz00_6111;

													BgL_auxz00_6111 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 34049)),
														BGl_string2658z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1430z00_904);
													FAILURE(BgL_auxz00_6111, BFALSE, BFALSE);
												}
											return
												BGl_stringzd2deletezd2zz__r4_strings_6_7z00
												(BgL_auxz00_6108, BgL_arg1431z00_905,
												(int) (((long) 0)), BgL_endz00_903);
							}}}} break;
						case ((long) 3):

							{	/* Ieee/string.scm 759 */
								obj_t BgL_startz00_906;

								BgL_startz00_906 =
									VECTOR_REF(BgL_optz00_116, (int) (((long) 2)));
								{	/* Ieee/string.scm 759 */
									long BgL_endz00_907;

									{	/* Ieee/string.scm 759 */
										obj_t BgL_stringz00_2607;

										if (STRINGP(BgL_stringz00_897))
											{	/* Ieee/string.scm 759 */
												BgL_stringz00_2607 = BgL_stringz00_897;
											}
										else
											{
												obj_t BgL_auxz00_6121;

												BgL_auxz00_6121 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2595z00zz__r4_strings_6_7z00,
													BINT(((long) 34120)),
													BGl_string2658z00zz__r4_strings_6_7z00,
													BGl_string2597z00zz__r4_strings_6_7z00,
													BgL_stringz00_897);
												FAILURE(BgL_auxz00_6121, BFALSE, BFALSE);
											}
										BgL_endz00_907 = STRING_LENGTH(BgL_stringz00_2607);
									}
									{	/* Ieee/string.scm 759 */

										{	/* Ieee/string.scm 759 */
											obj_t BgL_arg1432z00_908;

											obj_t BgL_arg1433z00_909;

											BgL_arg1432z00_908 =
												VECTOR_REF(BgL_optz00_116, (int) (((long) 0)));
											BgL_arg1433z00_909 =
												VECTOR_REF(BgL_optz00_116, (int) (((long) 1)));
											{	/* Ieee/string.scm 759 */
												int BgL_auxz00_6137;

												obj_t BgL_auxz00_6130;

												{	/* Ieee/string.scm 759 */
													obj_t BgL_auxz00_6138;

													if (INTEGERP(BgL_startz00_906))
														{	/* Ieee/string.scm 759 */
															BgL_auxz00_6138 = BgL_startz00_906;
														}
													else
														{
															obj_t BgL_auxz00_6141;

															BgL_auxz00_6141 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2595z00zz__r4_strings_6_7z00,
																BINT(((long) 34049)),
																BGl_string2658z00zz__r4_strings_6_7z00,
																BGl_string2628z00zz__r4_strings_6_7z00,
																BgL_startz00_906);
															FAILURE(BgL_auxz00_6141, BFALSE, BFALSE);
														}
													BgL_auxz00_6137 = CINT(BgL_auxz00_6138);
												}
												if (STRINGP(BgL_arg1432z00_908))
													{	/* Ieee/string.scm 759 */
														BgL_auxz00_6130 = BgL_arg1432z00_908;
													}
												else
													{
														obj_t BgL_auxz00_6133;

														BgL_auxz00_6133 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 34049)),
															BGl_string2658z00zz__r4_strings_6_7z00,
															BGl_string2597z00zz__r4_strings_6_7z00,
															BgL_arg1432z00_908);
														FAILURE(BgL_auxz00_6133, BFALSE, BFALSE);
													}
												return
													BGl_stringzd2deletezd2zz__r4_strings_6_7z00
													(BgL_auxz00_6130, BgL_arg1433z00_909, BgL_auxz00_6137,
													BgL_endz00_907);
											}
										}
									}
								}
							}
							break;
						case ((long) 4):

							{	/* Ieee/string.scm 759 */
								obj_t BgL_startz00_910;

								BgL_startz00_910 =
									VECTOR_REF(BgL_optz00_116, (int) (((long) 2)));
								{	/* Ieee/string.scm 759 */
									obj_t BgL_endz00_911;

									BgL_endz00_911 =
										VECTOR_REF(BgL_optz00_116, (int) (((long) 3)));
									{	/* Ieee/string.scm 759 */

										{	/* Ieee/string.scm 759 */
											obj_t BgL_arg1434z00_912;

											obj_t BgL_arg1435z00_913;

											BgL_arg1434z00_912 =
												VECTOR_REF(BgL_optz00_116, (int) (((long) 0)));
											BgL_arg1435z00_913 =
												VECTOR_REF(BgL_optz00_116, (int) (((long) 1)));
											{	/* Ieee/string.scm 759 */
												long BgL_auxz00_6171;

												int BgL_auxz00_6162;

												obj_t BgL_auxz00_6155;

												{	/* Ieee/string.scm 759 */
													obj_t BgL_auxz00_6172;

													if (INTEGERP(BgL_endz00_911))
														{	/* Ieee/string.scm 759 */
															BgL_auxz00_6172 = BgL_endz00_911;
														}
													else
														{
															obj_t BgL_auxz00_6175;

															BgL_auxz00_6175 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2595z00zz__r4_strings_6_7z00,
																BINT(((long) 34049)),
																BGl_string2658z00zz__r4_strings_6_7z00,
																BGl_string2599z00zz__r4_strings_6_7z00,
																BgL_endz00_911);
															FAILURE(BgL_auxz00_6175, BFALSE, BFALSE);
														}
													BgL_auxz00_6171 = (long) CINT(BgL_auxz00_6172);
												}
												{	/* Ieee/string.scm 759 */
													obj_t BgL_auxz00_6163;

													if (INTEGERP(BgL_startz00_910))
														{	/* Ieee/string.scm 759 */
															BgL_auxz00_6163 = BgL_startz00_910;
														}
													else
														{
															obj_t BgL_auxz00_6166;

															BgL_auxz00_6166 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2595z00zz__r4_strings_6_7z00,
																BINT(((long) 34049)),
																BGl_string2658z00zz__r4_strings_6_7z00,
																BGl_string2628z00zz__r4_strings_6_7z00,
																BgL_startz00_910);
															FAILURE(BgL_auxz00_6166, BFALSE, BFALSE);
														}
													BgL_auxz00_6162 = CINT(BgL_auxz00_6163);
												}
												if (STRINGP(BgL_arg1434z00_912))
													{	/* Ieee/string.scm 759 */
														BgL_auxz00_6155 = BgL_arg1434z00_912;
													}
												else
													{
														obj_t BgL_auxz00_6158;

														BgL_auxz00_6158 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 34049)),
															BGl_string2658z00zz__r4_strings_6_7z00,
															BGl_string2597z00zz__r4_strings_6_7z00,
															BgL_arg1434z00_912);
														FAILURE(BgL_auxz00_6158, BFALSE, BFALSE);
													}
												return
													BGl_stringzd2deletezd2zz__r4_strings_6_7z00
													(BgL_auxz00_6155, BgL_arg1435z00_913, BgL_auxz00_6162,
													BgL_auxz00_6171);
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



/* string-delete */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2deletezd2zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_112, obj_t BgL_objz00_113, int BgL_startz00_114,
		long BgL_endz00_115)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 759 */
			{
				obj_t BgL_newz00_962;

				obj_t BgL_predz00_963;

				int BgL_startz00_964;

				long BgL_endz00_965;

				obj_t BgL_newz00_946;

				obj_t BgL_lz00_947;

				int BgL_startz00_948;

				long BgL_endz00_949;

				obj_t BgL_newz00_930;

				obj_t BgL_cz00_931;

				int BgL_startz00_932;

				long BgL_endz00_933;

				if (((long) (BgL_startz00_114) < ((long) 0)))
					{	/* Ieee/string.scm 798 */
						return
							BGl_errorz00zz__errorz00(BGl_string2659z00zz__r4_strings_6_7z00,
							BGl_string2660z00zz__r4_strings_6_7z00, BINT(BgL_startz00_114));
					}
				else
					{	/* Ieee/string.scm 798 */
						if ((BgL_endz00_115 > STRING_LENGTH(BgL_stringz00_112)))
							{	/* Ieee/string.scm 800 */
								return
									BGl_errorz00zz__errorz00
									(BGl_string2659z00zz__r4_strings_6_7z00,
									BGl_string2661z00zz__r4_strings_6_7z00, BINT(BgL_endz00_115));
							}
						else
							{	/* Ieee/string.scm 800 */
								if ((BgL_endz00_115 < (long) (BgL_startz00_114)))
									{	/* Ieee/string.scm 803 */
										obj_t BgL_arg1441z00_922;

										BgL_arg1441z00_922 =
											MAKE_PAIR(BINT(BgL_startz00_114), BINT(BgL_endz00_115));
										return
											BGl_errorz00zz__errorz00
											(BGl_string2659z00zz__r4_strings_6_7z00,
											BGl_string2662z00zz__r4_strings_6_7z00,
											BgL_arg1441z00_922);
									}
								else
									{	/* Ieee/string.scm 805 */
										obj_t BgL_newz00_924;

										BgL_newz00_924 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_stringz00_112);
										{	/* Ieee/string.scm 806 */

											if (CHARP(BgL_objz00_113))
												{	/* Ieee/string.scm 808 */
													BgL_newz00_930 = BgL_newz00_924;
													BgL_cz00_931 = BgL_objz00_113;
													BgL_startz00_932 = BgL_startz00_114;
													BgL_endz00_933 = BgL_endz00_115;
													{
														int BgL_iz00_936;

														long BgL_jz00_937;

														BgL_iz00_936 = BgL_startz00_932;
														BgL_jz00_937 = ((long) 0);
													BgL_zc3anonymousza31448ze3z83_938:
														if (((long) (BgL_iz00_936) == BgL_endz00_933))
															{	/* Ieee/string.scm 764 */
																return
																	bgl_string_shrink(BgL_newz00_930,
																	BgL_jz00_937);
															}
														else
															{	/* Ieee/string.scm 766 */
																unsigned char BgL_ccz00_940;

																BgL_ccz00_940 =
																	STRING_REF(BgL_stringz00_112,
																	(long) (BgL_iz00_936));
																if ((BgL_ccz00_940 == CCHAR(BgL_cz00_931)))
																	{	/* Ieee/string.scm 768 */
																		long BgL_arg1451z00_942;

																		BgL_arg1451z00_942 =
																			((long) (BgL_iz00_936) + ((long) 1));
																		{
																			int BgL_iz00_6214;

																			BgL_iz00_6214 =
																				(int) (BgL_arg1451z00_942);
																			BgL_iz00_936 = BgL_iz00_6214;
																			goto BgL_zc3anonymousza31448ze3z83_938;
																		}
																	}
																else
																	{	/* Ieee/string.scm 767 */
																		STRING_SET(BgL_newz00_930, BgL_jz00_937,
																			BgL_ccz00_940);
																		{	/* Ieee/string.scm 771 */
																			long BgL_arg1452z00_943;

																			long BgL_arg1453z00_944;

																			BgL_arg1452z00_943 =
																				((long) (BgL_iz00_936) + ((long) 1));
																			BgL_arg1453z00_944 =
																				(BgL_jz00_937 + ((long) 1));
																			{
																				long BgL_jz00_6222;

																				int BgL_iz00_6220;

																				BgL_iz00_6220 =
																					(int) (BgL_arg1452z00_943);
																				BgL_jz00_6222 = BgL_arg1453z00_944;
																				BgL_jz00_937 = BgL_jz00_6222;
																				BgL_iz00_936 = BgL_iz00_6220;
																				goto BgL_zc3anonymousza31448ze3z83_938;
																			}
																		}
																	}
															}
													}
												}
											else
												{	/* Ieee/string.scm 808 */
													if (STRINGP(BgL_objz00_113))
														{	/* Ieee/string.scm 810 */
															BgL_newz00_946 = BgL_newz00_924;
															BgL_lz00_947 =
																BGl_stringzd2ze3listz31zz__r4_strings_6_7z00
																(BgL_objz00_113);
															BgL_startz00_948 = BgL_startz00_114;
															BgL_endz00_949 = BgL_endz00_115;
															{
																int BgL_iz00_952;

																long BgL_jz00_953;

																BgL_iz00_952 = BgL_startz00_948;
																BgL_jz00_953 = ((long) 0);
															BgL_zc3anonymousza31455ze3z83_954:
																if (((long) (BgL_iz00_952) == BgL_endz00_949))
																	{	/* Ieee/string.scm 776 */
																		return
																			bgl_string_shrink(BgL_newz00_946,
																			BgL_jz00_953);
																	}
																else
																	{	/* Ieee/string.scm 778 */
																		unsigned char BgL_ccz00_956;

																		BgL_ccz00_956 =
																			STRING_REF(BgL_stringz00_112,
																			(long) (BgL_iz00_952));
																		if (CBOOL
																			(BGl_memvz00zz__r4_pairs_and_lists_6_3z00
																				(BCHAR(BgL_ccz00_956), BgL_lz00_947)))
																			{	/* Ieee/string.scm 780 */
																				long BgL_arg1458z00_958;

																				BgL_arg1458z00_958 =
																					((long) (BgL_iz00_952) + ((long) 1));
																				{
																					int BgL_iz00_6237;

																					BgL_iz00_6237 =
																						(int) (BgL_arg1458z00_958);
																					BgL_iz00_952 = BgL_iz00_6237;
																					goto
																						BgL_zc3anonymousza31455ze3z83_954;
																				}
																			}
																		else
																			{	/* Ieee/string.scm 779 */
																				STRING_SET(BgL_newz00_946, BgL_jz00_953,
																					BgL_ccz00_956);
																				{	/* Ieee/string.scm 783 */
																					long BgL_arg1459z00_959;

																					long BgL_arg1460z00_960;

																					BgL_arg1459z00_959 =
																						(
																						(long) (BgL_iz00_952) + ((long) 1));
																					BgL_arg1460z00_960 =
																						(BgL_jz00_953 + ((long) 1));
																					{
																						long BgL_jz00_6245;

																						int BgL_iz00_6243;

																						BgL_iz00_6243 =
																							(int) (BgL_arg1459z00_959);
																						BgL_jz00_6245 = BgL_arg1460z00_960;
																						BgL_jz00_953 = BgL_jz00_6245;
																						BgL_iz00_952 = BgL_iz00_6243;
																						goto
																							BgL_zc3anonymousza31455ze3z83_954;
																					}
																				}
																			}
																	}
															}
														}
													else
														{	/* Ieee/string.scm 810 */
															if (PROCEDUREP(BgL_objz00_113))
																{	/* Ieee/string.scm 812 */
																	BgL_newz00_962 = BgL_newz00_924;
																	BgL_predz00_963 = BgL_objz00_113;
																	BgL_startz00_964 = BgL_startz00_114;
																	BgL_endz00_965 = BgL_endz00_115;
																	{
																		int BgL_iz00_968;

																		long BgL_jz00_969;

																		BgL_iz00_968 = BgL_startz00_964;
																		BgL_jz00_969 = ((long) 0);
																	BgL_zc3anonymousza31462ze3z83_970:
																		if (
																			((long) (BgL_iz00_968) == BgL_endz00_965))
																			{	/* Ieee/string.scm 788 */
																				return
																					bgl_string_shrink(BgL_newz00_962,
																					BgL_jz00_969);
																			}
																		else
																			{	/* Ieee/string.scm 790 */
																				unsigned char BgL_ccz00_972;

																				BgL_ccz00_972 =
																					STRING_REF(BgL_stringz00_112,
																					(long) (BgL_iz00_968));
																				if (CBOOL(PROCEDURE_ENTRY
																						(BgL_predz00_963) (BgL_predz00_963,
																							BCHAR(BgL_ccz00_972), BEOA)))
																					{	/* Ieee/string.scm 792 */
																						long BgL_arg1465z00_974;

																						BgL_arg1465z00_974 =
																							(
																							(long) (BgL_iz00_968) +
																							((long) 1));
																						{
																							int BgL_iz00_6262;

																							BgL_iz00_6262 =
																								(int) (BgL_arg1465z00_974);
																							BgL_iz00_968 = BgL_iz00_6262;
																							goto
																								BgL_zc3anonymousza31462ze3z83_970;
																						}
																					}
																				else
																					{	/* Ieee/string.scm 791 */
																						STRING_SET(BgL_newz00_962,
																							BgL_jz00_969, BgL_ccz00_972);
																						{	/* Ieee/string.scm 795 */
																							long BgL_arg1466z00_975;

																							long BgL_arg1467z00_976;

																							BgL_arg1466z00_975 =
																								(
																								(long) (BgL_iz00_968) +
																								((long) 1));
																							BgL_arg1467z00_976 =
																								(BgL_jz00_969 + ((long) 1));
																							{
																								long BgL_jz00_6270;

																								int BgL_iz00_6268;

																								BgL_iz00_6268 =
																									(int) (BgL_arg1466z00_975);
																								BgL_jz00_6270 =
																									BgL_arg1467z00_976;
																								BgL_jz00_969 = BgL_jz00_6270;
																								BgL_iz00_968 = BgL_iz00_6268;
																								goto
																									BgL_zc3anonymousza31462ze3z83_970;
																							}
																						}
																					}
																			}
																	}
																}
															else
																{	/* Ieee/string.scm 812 */
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_string2659z00zz__r4_strings_6_7z00,
																		BGl_string2663z00zz__r4_strings_6_7z00,
																		BgL_objz00_113);
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



/* delim? */
	bool_t BGl_delimzf3zf3zz__r4_strings_6_7z00(obj_t BgL_delimsz00_118,
		unsigned char BgL_charz00_119)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 820 */
			{	/* Ieee/string.scm 821 */
				long BgL_lenz00_981;

				BgL_lenz00_981 = STRING_LENGTH(BgL_delimsz00_118);
				{
					long BgL_iz00_983;

					BgL_iz00_983 = ((long) 0);
				BgL_zc3anonymousza31468ze3z83_984:
					if ((BgL_iz00_983 == BgL_lenz00_981))
						{	/* Ieee/string.scm 824 */
							return ((bool_t) 0);
						}
					else
						{	/* Ieee/string.scm 824 */
							if (
								(BgL_charz00_119 ==
									STRING_REF(BgL_delimsz00_118, BgL_iz00_983)))
								{	/* Ieee/string.scm 826 */
									return ((bool_t) 1);
								}
							else
								{
									long BgL_iz00_6278;

									BgL_iz00_6278 = (BgL_iz00_983 + ((long) 1));
									BgL_iz00_983 = BgL_iz00_6278;
									goto BgL_zc3anonymousza31468ze3z83_984;
								}
						}
				}
			}
		}
	}



/* string-split */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2splitzd2zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_128, obj_t BgL_delimitersz00_129)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 858 */
			{	/* Ieee/string.scm 859 */
				obj_t BgL_dz00_998;

				if (PAIRP(BgL_delimitersz00_129))
					{	/* Ieee/string.scm 859 */
						BgL_dz00_998 = CAR(BgL_delimitersz00_129);
					}
				else
					{	/* Ieee/string.scm 859 */
						BgL_dz00_998 = BGl_string2664z00zz__r4_strings_6_7z00;
					}
				{	/* Ieee/string.scm 859 */
					long BgL_lenz00_999;

					BgL_lenz00_999 = STRING_LENGTH(BgL_stringz00_128);
					{	/* Ieee/string.scm 862 */
						long BgL_iz00_1000;

						{
							long BgL_iz00_2728;

							BgL_iz00_2728 = ((long) 0);
						BgL_skipzd2separatorzd2_2727:
							if ((BgL_iz00_2728 == BgL_lenz00_999))
								{	/* Ieee/string.scm 863 */
									BgL_iz00_1000 = BgL_lenz00_999;
								}
							else
								{	/* Ieee/string.scm 863 */
									if (BGl_delimzf3zf3zz__r4_strings_6_7z00(BgL_dz00_998,
											STRING_REF(BgL_stringz00_128, BgL_iz00_2728)))
										{
											long BgL_iz00_6289;

											BgL_iz00_6289 = (BgL_iz00_2728 + ((long) 1));
											BgL_iz00_2728 = BgL_iz00_6289;
											goto BgL_skipzd2separatorzd2_2727;
										}
									else
										{	/* Ieee/string.scm 863 */
											BgL_iz00_1000 = BgL_iz00_2728;
										}
								}
						}
						{	/* Ieee/string.scm 863 */

							{
								long BgL_iz00_1003;

								obj_t BgL_resz00_1004;

								BgL_iz00_1003 = BgL_iz00_1000;
								BgL_resz00_1004 = BNIL;
							BgL_zc3anonymousza31481ze3z83_1005:
								if ((BgL_iz00_1003 == BgL_lenz00_999))
									{	/* Ieee/string.scm 866 */
										return bgl_reverse_bang(BgL_resz00_1004);
									}
								else
									{	/* Ieee/string.scm 868 */
										long BgL_ez00_1007;

										{
											long BgL_iz00_2744;

											BgL_iz00_2744 = (BgL_iz00_1003 + ((long) 1));
										BgL_skipzd2nonzd2separatorz00_2743:
											if ((BgL_iz00_2744 == BgL_lenz00_999))
												{	/* Ieee/string.scm 868 */
													BgL_ez00_1007 = BgL_lenz00_999;
												}
											else
												{	/* Ieee/string.scm 868 */
													if (BGl_delimzf3zf3zz__r4_strings_6_7z00(BgL_dz00_998,
															STRING_REF(BgL_stringz00_128, BgL_iz00_2744)))
														{	/* Ieee/string.scm 868 */
															BgL_ez00_1007 = BgL_iz00_2744;
														}
													else
														{
															long BgL_iz00_6299;

															BgL_iz00_6299 = (BgL_iz00_2744 + ((long) 1));
															BgL_iz00_2744 = BgL_iz00_6299;
															goto BgL_skipzd2nonzd2separatorz00_2743;
														}
												}
										}
										{	/* Ieee/string.scm 868 */
											obj_t BgL_nresz00_1008;

											BgL_nresz00_1008 =
												MAKE_PAIR(c_substring(BgL_stringz00_128, BgL_iz00_1003,
													BgL_ez00_1007), BgL_resz00_1004);
											{	/* Ieee/string.scm 869 */

												if ((BgL_ez00_1007 == BgL_lenz00_999))
													{	/* Ieee/string.scm 870 */
														return bgl_reverse_bang(BgL_nresz00_1008);
													}
												else
													{	/* Ieee/string.scm 872 */
														long BgL_arg1484z00_1010;

														{
															long BgL_iz00_2763;

															BgL_iz00_2763 = (BgL_ez00_1007 + ((long) 1));
														BgL_skipzd2separatorzd2_2762:
															if ((BgL_iz00_2763 == BgL_lenz00_999))
																{	/* Ieee/string.scm 872 */
																	BgL_arg1484z00_1010 = BgL_lenz00_999;
																}
															else
																{	/* Ieee/string.scm 872 */
																	if (BGl_delimzf3zf3zz__r4_strings_6_7z00
																		(BgL_dz00_998, STRING_REF(BgL_stringz00_128,
																				BgL_iz00_2763)))
																		{
																			long BgL_iz00_6312;

																			BgL_iz00_6312 =
																				(BgL_iz00_2763 + ((long) 1));
																			BgL_iz00_2763 = BgL_iz00_6312;
																			goto BgL_skipzd2separatorzd2_2762;
																		}
																	else
																		{	/* Ieee/string.scm 872 */
																			BgL_arg1484z00_1010 = BgL_iz00_2763;
																		}
																}
														}
														{
															obj_t BgL_resz00_6316;

															long BgL_iz00_6315;

															BgL_iz00_6315 = BgL_arg1484z00_1010;
															BgL_resz00_6316 = BgL_nresz00_1008;
															BgL_resz00_1004 = BgL_resz00_6316;
															BgL_iz00_1003 = BgL_iz00_6315;
															goto BgL_zc3anonymousza31481ze3z83_1005;
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



/* _string-split */
	obj_t BGl__stringzd2splitzd2zz__r4_strings_6_7z00(obj_t BgL_envz00_4123,
		obj_t BgL_stringz00_4124, obj_t BgL_delimitersz00_4125)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 858 */
			{	/* Ieee/string.scm 859 */
				obj_t BgL_auxz00_6317;

				if (STRINGP(BgL_stringz00_4124))
					{	/* Ieee/string.scm 859 */
						BgL_auxz00_6317 = BgL_stringz00_4124;
					}
				else
					{
						obj_t BgL_auxz00_6320;

						BgL_auxz00_6320 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 37356)),
							BGl_string2665z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_stringz00_4124);
						FAILURE(BgL_auxz00_6320, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2splitzd2zz__r4_strings_6_7z00(BgL_auxz00_6317,
					BgL_delimitersz00_4125);
			}
		}
	}



/* string-cut */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2cutzd2zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_130, obj_t BgL_delimitersz00_131)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 878 */
			{	/* Ieee/string.scm 879 */
				obj_t BgL_dz00_1016;

				if (PAIRP(BgL_delimitersz00_131))
					{	/* Ieee/string.scm 879 */
						BgL_dz00_1016 = CAR(BgL_delimitersz00_131);
					}
				else
					{	/* Ieee/string.scm 879 */
						BgL_dz00_1016 = BGl_string2664z00zz__r4_strings_6_7z00;
					}
				{	/* Ieee/string.scm 879 */
					long BgL_lenz00_1017;

					BgL_lenz00_1017 = STRING_LENGTH(BgL_stringz00_130);
					{	/* Ieee/string.scm 882 */

						{
							long BgL_iz00_1020;

							obj_t BgL_resz00_1021;

							BgL_iz00_1020 = ((long) 0);
							BgL_resz00_1021 = BNIL;
						BgL_zc3anonymousza31489ze3z83_1022:
							if ((BgL_iz00_1020 >= BgL_lenz00_1017))
								{	/* Ieee/string.scm 886 */
									obj_t BgL_arg1491z00_1024;

									BgL_arg1491z00_1024 =
										MAKE_PAIR(BGl_string2632z00zz__r4_strings_6_7z00,
										BgL_resz00_1021);
									return bgl_reverse_bang(BgL_arg1491z00_1024);
								}
							else
								{	/* Ieee/string.scm 887 */
									long BgL_ez00_1025;

									{
										long BgL_iz00_2780;

										BgL_iz00_2780 = BgL_iz00_1020;
									BgL_skipzd2nonzd2separatorz00_2779:
										if ((BgL_iz00_2780 == BgL_lenz00_1017))
											{	/* Ieee/string.scm 887 */
												BgL_ez00_1025 = BgL_lenz00_1017;
											}
										else
											{	/* Ieee/string.scm 887 */
												if (BGl_delimzf3zf3zz__r4_strings_6_7z00(BgL_dz00_1016,
														STRING_REF(BgL_stringz00_130, BgL_iz00_2780)))
													{	/* Ieee/string.scm 887 */
														BgL_ez00_1025 = BgL_iz00_2780;
													}
												else
													{
														long BgL_iz00_6338;

														BgL_iz00_6338 = (BgL_iz00_2780 + ((long) 1));
														BgL_iz00_2780 = BgL_iz00_6338;
														goto BgL_skipzd2nonzd2separatorz00_2779;
													}
											}
									}
									{	/* Ieee/string.scm 887 */
										obj_t BgL_sz00_1026;

										BgL_sz00_1026 =
											c_substring(BgL_stringz00_130, BgL_iz00_1020,
											BgL_ez00_1025);
										{	/* Ieee/string.scm 888 */
											obj_t BgL_nrz00_1027;

											BgL_nrz00_1027 =
												MAKE_PAIR(BgL_sz00_1026, BgL_resz00_1021);
											{	/* Ieee/string.scm 889 */

												if ((BgL_ez00_1025 == BgL_lenz00_1017))
													{	/* Ieee/string.scm 890 */
														return bgl_reverse_bang(BgL_nrz00_1027);
													}
												else
													{
														obj_t BgL_resz00_6347;

														long BgL_iz00_6345;

														BgL_iz00_6345 = (BgL_ez00_1025 + ((long) 1));
														BgL_resz00_6347 = BgL_nrz00_1027;
														BgL_resz00_1021 = BgL_resz00_6347;
														BgL_iz00_1020 = BgL_iz00_6345;
														goto BgL_zc3anonymousza31489ze3z83_1022;
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



/* _string-cut */
	obj_t BGl__stringzd2cutzd2zz__r4_strings_6_7z00(obj_t BgL_envz00_4126,
		obj_t BgL_stringz00_4127, obj_t BgL_delimitersz00_4128)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 878 */
			{	/* Ieee/string.scm 879 */
				obj_t BgL_auxz00_6348;

				if (STRINGP(BgL_stringz00_4127))
					{	/* Ieee/string.scm 879 */
						BgL_auxz00_6348 = BgL_stringz00_4127;
					}
				else
					{
						obj_t BgL_auxz00_6351;

						BgL_auxz00_6351 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 38055)),
							BGl_string2666z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_stringz00_4127);
						FAILURE(BgL_auxz00_6351, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2cutzd2zz__r4_strings_6_7z00(BgL_auxz00_6348,
					BgL_delimitersz00_4128);
			}
		}
	}



/* _string-index */
	obj_t BGl__stringzd2indexzd2zz__r4_strings_6_7z00(obj_t BgL_envz00_136,
		obj_t BgL_optz00_135)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 897 */
			{	/* Ieee/string.scm 897 */
				obj_t BgL_g1181z00_1032;

				obj_t BgL_g1182z00_1033;

				BgL_g1181z00_1032 = VECTOR_REF(BgL_optz00_135, (int) (((long) 0)));
				BgL_g1182z00_1033 = VECTOR_REF(BgL_optz00_135, (int) (((long) 1)));
				{	/* Ieee/string.scm 897 */
					int BgL_aux1184z00_1035;

					BgL_aux1184z00_1035 = VECTOR_LENGTH(BgL_optz00_135);
					switch ((long) (BgL_aux1184z00_1035))
						{
						case ((long) 2):

							{	/* Ieee/string.scm 897 */

								{	/* Ieee/string.scm 897 */
									obj_t BgL_arg1496z00_1038;

									obj_t BgL_arg1497z00_1039;

									BgL_arg1496z00_1038 =
										VECTOR_REF(BgL_optz00_135, (int) (((long) 0)));
									BgL_arg1497z00_1039 =
										VECTOR_REF(BgL_optz00_135, (int) (((long) 1)));
									{	/* Ieee/string.scm 897 */
										obj_t BgL_auxz00_6365;

										if (STRINGP(BgL_arg1496z00_1038))
											{	/* Ieee/string.scm 897 */
												BgL_auxz00_6365 = BgL_arg1496z00_1038;
											}
										else
											{
												obj_t BgL_auxz00_6368;

												BgL_auxz00_6368 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2595z00zz__r4_strings_6_7z00,
													BINT(((long) 38645)),
													BGl_string2667z00zz__r4_strings_6_7z00,
													BGl_string2597z00zz__r4_strings_6_7z00,
													BgL_arg1496z00_1038);
												FAILURE(BgL_auxz00_6368, BFALSE, BFALSE);
											}
										return
											BGl_stringzd2indexzd2zz__r4_strings_6_7z00
											(BgL_auxz00_6365, BgL_arg1497z00_1039, BINT(((long) 0)));
							}}} break;
						case ((long) 3):

							{	/* Ieee/string.scm 897 */
								obj_t BgL_startz00_1040;

								BgL_startz00_1040 =
									VECTOR_REF(BgL_optz00_135, (int) (((long) 2)));
								{	/* Ieee/string.scm 897 */

									{	/* Ieee/string.scm 897 */
										obj_t BgL_arg1498z00_1041;

										obj_t BgL_arg1499z00_1042;

										BgL_arg1498z00_1041 =
											VECTOR_REF(BgL_optz00_135, (int) (((long) 0)));
										BgL_arg1499z00_1042 =
											VECTOR_REF(BgL_optz00_135, (int) (((long) 1)));
										{	/* Ieee/string.scm 897 */
											obj_t BgL_auxz00_6380;

											if (STRINGP(BgL_arg1498z00_1041))
												{	/* Ieee/string.scm 897 */
													BgL_auxz00_6380 = BgL_arg1498z00_1041;
												}
											else
												{
													obj_t BgL_auxz00_6383;

													BgL_auxz00_6383 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 38645)),
														BGl_string2667z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1498z00_1041);
													FAILURE(BgL_auxz00_6383, BFALSE, BFALSE);
												}
											return
												BGl_stringzd2indexzd2zz__r4_strings_6_7z00
												(BgL_auxz00_6380, BgL_arg1499z00_1042,
												BgL_startz00_1040);
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



/* string-index */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2indexzd2zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_132, obj_t BgL_rsz00_133, obj_t BgL_startz00_134)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 897 */
			{
				obj_t BgL_sz00_1094;

				obj_t BgL_cz00_1095;

				if (CHARP(BgL_rsz00_133))
					{	/* Ieee/string.scm 909 */
						BgL_sz00_1094 = BgL_stringz00_132;
						BgL_cz00_1095 = BgL_rsz00_133;
					BgL_zc3anonymousza31533ze3z83_1096:
						{	/* Ieee/string.scm 899 */
							long BgL_lenz00_1097;

							BgL_lenz00_1097 = STRING_LENGTH(BgL_sz00_1094);
							{
								obj_t BgL_iz00_1099;

								BgL_iz00_1099 = BgL_startz00_134;
							BgL_zc3anonymousza31534ze3z83_1100:
								if (((long) CINT(BgL_iz00_1099) >= BgL_lenz00_1097))
									{	/* Ieee/string.scm 902 */
										return BFALSE;
									}
								else
									{	/* Ieee/string.scm 902 */
										if (
											(STRING_REF(BgL_sz00_1094,
													(long) CINT(BgL_iz00_1099)) == CCHAR(BgL_cz00_1095)))
											{	/* Ieee/string.scm 904 */
												return BgL_iz00_1099;
											}
										else
											{
												obj_t BgL_iz00_6401;

												BgL_iz00_6401 =
													BINT(((long) CINT(BgL_iz00_1099) + ((long) 1)));
												BgL_iz00_1099 = BgL_iz00_6401;
												goto BgL_zc3anonymousza31534ze3z83_1100;
											}
									}
							}
						}
					}
				else
					{	/* Ieee/string.scm 909 */
						if (STRINGP(BgL_rsz00_133))
							{	/* Ieee/string.scm 911 */
								if ((STRING_LENGTH(BgL_rsz00_133) == ((long) 1)))
									{
										obj_t BgL_cz00_6411;

										obj_t BgL_sz00_6410;

										BgL_sz00_6410 = BgL_stringz00_132;
										BgL_cz00_6411 =
											BCHAR(STRING_REF(BgL_rsz00_133, ((long) 0)));
										BgL_cz00_1095 = BgL_cz00_6411;
										BgL_sz00_1094 = BgL_sz00_6410;
										goto BgL_zc3anonymousza31533ze3z83_1096;
									}
								else
									{	/* Ieee/string.scm 913 */
										if ((STRING_LENGTH(BgL_rsz00_133) <= ((long) 10)))
											{	/* Ieee/string.scm 916 */
												long BgL_lenz00_1049;

												long BgL_lenjz00_1050;

												BgL_lenz00_1049 = STRING_LENGTH(BgL_stringz00_132);
												BgL_lenjz00_1050 = STRING_LENGTH(BgL_rsz00_133);
												{
													obj_t BgL_iz00_1052;

													BgL_iz00_1052 = BgL_startz00_134;
												BgL_zc3anonymousza31505ze3z83_1053:
													if (((long) CINT(BgL_iz00_1052) >= BgL_lenz00_1049))
														{	/* Ieee/string.scm 919 */
															return BFALSE;
														}
													else
														{	/* Ieee/string.scm 921 */
															unsigned char BgL_cz00_1055;

															BgL_cz00_1055 =
																STRING_REF(BgL_stringz00_132,
																(long) CINT(BgL_iz00_1052));
															{
																long BgL_jz00_1057;

																BgL_jz00_1057 = ((long) 0);
															BgL_zc3anonymousza31507ze3z83_1058:
																if ((BgL_jz00_1057 == BgL_lenjz00_1050))
																	{
																		obj_t BgL_iz00_6426;

																		BgL_iz00_6426 =
																			BINT(
																			((long) CINT(BgL_iz00_1052) +
																				((long) 1)));
																		BgL_iz00_1052 = BgL_iz00_6426;
																		goto BgL_zc3anonymousza31505ze3z83_1053;
																	}
																else
																	{	/* Ieee/string.scm 923 */
																		if (
																			(BgL_cz00_1055 ==
																				STRING_REF(BgL_rsz00_133,
																					BgL_jz00_1057)))
																			{	/* Ieee/string.scm 925 */
																				return BgL_iz00_1052;
																			}
																		else
																			{
																				long BgL_jz00_6433;

																				BgL_jz00_6433 =
																					(BgL_jz00_1057 + ((long) 1));
																				BgL_jz00_1057 = BgL_jz00_6433;
																				goto BgL_zc3anonymousza31507ze3z83_1058;
																			}
																	}
															}
														}
												}
											}
										else
											{	/* Ieee/string.scm 929 */
												obj_t BgL_tz00_1066;

												long BgL_lenz00_1067;

												{	/* Ieee/string.scm 929 */
													obj_t BgL_list1527z00_1089;

													BgL_list1527z00_1089 =
														MAKE_PAIR(BCHAR(((unsigned char) 'n')), BNIL);
													{	/* Ieee/string.scm 929 */
														obj_t BgL_res2139z00_2830;

														{	/* Ieee/string.scm 929 */
															obj_t BgL_arg1240z00_2827;

															BgL_arg1240z00_2827 = CAR(BgL_list1527z00_1089);
															BgL_res2139z00_2830 =
																make_string(((long) 256),
																CCHAR(BgL_arg1240z00_2827));
														}
														BgL_tz00_1066 = BgL_res2139z00_2830;
												}}
												BgL_lenz00_1067 = STRING_LENGTH(BgL_stringz00_132);
												{	/* Ieee/string.scm 931 */
													long BgL_g1109z00_1068;

													BgL_g1109z00_1068 =
														(STRING_LENGTH(BgL_rsz00_133) - ((long) 1));
													{
														long BgL_iz00_1070;

														BgL_iz00_1070 = BgL_g1109z00_1068;
													BgL_zc3anonymousza31513ze3z83_1071:
														if ((BgL_iz00_1070 == ((long) -1)))
															{
																obj_t BgL_iz00_1074;

																BgL_iz00_1074 = BgL_startz00_134;
															BgL_zc3anonymousza31515ze3z83_1075:
																if (
																	((long) CINT(BgL_iz00_1074) >=
																		BgL_lenz00_1067))
																	{	/* Ieee/string.scm 935 */
																		return BFALSE;
																	}
																else
																	{	/* Ieee/string.scm 935 */
																		if (
																			(STRING_REF(BgL_tz00_1066,
																					(STRING_REF(BgL_stringz00_132,
																							(long) CINT(BgL_iz00_1074)))) ==
																				((unsigned char) 'y')))
																			{	/* Ieee/string.scm 937 */
																				return BgL_iz00_1074;
																			}
																		else
																			{
																				obj_t BgL_iz00_6454;

																				BgL_iz00_6454 =
																					BINT(
																					((long) CINT(BgL_iz00_1074) +
																						((long) 1)));
																				BgL_iz00_1074 = BgL_iz00_6454;
																				goto BgL_zc3anonymousza31515ze3z83_1075;
																			}
																	}
															}
														else
															{	/* Ieee/string.scm 932 */
																{	/* Ieee/string.scm 944 */
																	long BgL_auxz00_6458;

																	BgL_auxz00_6458 =
																		(STRING_REF(BgL_rsz00_133, BgL_iz00_1070));
																	STRING_SET(BgL_tz00_1066, BgL_auxz00_6458,
																		((unsigned char) 'y'));
																}
																{
																	long BgL_iz00_6462;

																	BgL_iz00_6462 = (BgL_iz00_1070 - ((long) 1));
																	BgL_iz00_1070 = BgL_iz00_6462;
																	goto BgL_zc3anonymousza31513ze3z83_1071;
																}
															}
													}
												}
											}
									}
							}
						else
							{	/* Ieee/string.scm 911 */
								return
									BGl_errorz00zz__errorz00
									(BGl_symbol2668z00zz__r4_strings_6_7z00,
									BGl_string2670z00zz__r4_strings_6_7z00, BgL_rsz00_133);
							}
					}
			}
		}
	}



/* _string-index-right */
	obj_t BGl__stringzd2indexzd2rightz00zz__r4_strings_6_7z00(obj_t
		BgL_envz00_141, obj_t BgL_optz00_140)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 950 */
			{	/* Ieee/string.scm 950 */
				obj_t BgL_sz00_1107;

				obj_t BgL_g1185z00_1108;

				BgL_sz00_1107 = VECTOR_REF(BgL_optz00_140, (int) (((long) 0)));
				BgL_g1185z00_1108 = VECTOR_REF(BgL_optz00_140, (int) (((long) 1)));
				{	/* Ieee/string.scm 950 */
					int BgL_aux1187z00_1110;

					BgL_aux1187z00_1110 = VECTOR_LENGTH(BgL_optz00_140);
					switch ((long) (BgL_aux1187z00_1110))
						{
						case ((long) 2):

							{	/* Ieee/string.scm 950 */
								long BgL_startz00_1112;

								{	/* Ieee/string.scm 950 */
									long BgL_auxz00_6470;

									{	/* Ieee/string.scm 950 */
										obj_t BgL_stringz00_2865;

										if (STRINGP(BgL_sz00_1107))
											{	/* Ieee/string.scm 950 */
												BgL_stringz00_2865 = BgL_sz00_1107;
											}
										else
											{
												obj_t BgL_auxz00_6473;

												BgL_auxz00_6473 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2595z00zz__r4_strings_6_7z00,
													BINT(((long) 40246)),
													BGl_string2671z00zz__r4_strings_6_7z00,
													BGl_string2597z00zz__r4_strings_6_7z00,
													BgL_sz00_1107);
												FAILURE(BgL_auxz00_6473, BFALSE, BFALSE);
											}
										BgL_auxz00_6470 = STRING_LENGTH(BgL_stringz00_2865);
									}
									BgL_startz00_1112 = (BgL_auxz00_6470 - ((long) 1));
								}
								{	/* Ieee/string.scm 950 */

									{	/* Ieee/string.scm 950 */
										obj_t BgL_arg1540z00_1113;

										obj_t BgL_arg1541z00_1114;

										BgL_arg1540z00_1113 =
											VECTOR_REF(BgL_optz00_140, (int) (((long) 0)));
										BgL_arg1541z00_1114 =
											VECTOR_REF(BgL_optz00_140, (int) (((long) 1)));
										{	/* Ieee/string.scm 950 */
											obj_t BgL_auxz00_6483;

											if (STRINGP(BgL_arg1540z00_1113))
												{	/* Ieee/string.scm 950 */
													BgL_auxz00_6483 = BgL_arg1540z00_1113;
												}
											else
												{
													obj_t BgL_auxz00_6486;

													BgL_auxz00_6486 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 40190)),
														BGl_string2671z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1540z00_1113);
													FAILURE(BgL_auxz00_6486, BFALSE, BFALSE);
												}
											return
												BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00
												(BgL_auxz00_6483, BgL_arg1541z00_1114,
												BINT(BgL_startz00_1112));
										}
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Ieee/string.scm 950 */
								obj_t BgL_startz00_1117;

								BgL_startz00_1117 =
									VECTOR_REF(BgL_optz00_140, (int) (((long) 2)));
								{	/* Ieee/string.scm 950 */

									{	/* Ieee/string.scm 950 */
										obj_t BgL_arg1544z00_1118;

										obj_t BgL_arg1545z00_1119;

										BgL_arg1544z00_1118 =
											VECTOR_REF(BgL_optz00_140, (int) (((long) 0)));
										BgL_arg1545z00_1119 =
											VECTOR_REF(BgL_optz00_140, (int) (((long) 1)));
										{	/* Ieee/string.scm 950 */
											obj_t BgL_auxz00_6498;

											if (STRINGP(BgL_arg1544z00_1118))
												{	/* Ieee/string.scm 950 */
													BgL_auxz00_6498 = BgL_arg1544z00_1118;
												}
											else
												{
													obj_t BgL_auxz00_6501;

													BgL_auxz00_6501 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 40190)),
														BGl_string2671z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1544z00_1118);
													FAILURE(BgL_auxz00_6501, BFALSE, BFALSE);
												}
											return
												BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00
												(BgL_auxz00_6498, BgL_arg1545z00_1119,
												BgL_startz00_1117);
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



/* string-index-right */
	BGL_EXPORTED_DEF obj_t
		BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00(obj_t BgL_sz00_137,
		obj_t BgL_rsz00_138, obj_t BgL_startz00_139)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 950 */
			{
				obj_t BgL_sz00_1173;

				obj_t BgL_cz00_1174;

				if (((long) CINT(BgL_startz00_139) > STRING_LENGTH(BgL_sz00_137)))
					{	/* Ieee/string.scm 961 */
						return
							BGl_errorz00zz__errorz00(BGl_symbol2668z00zz__r4_strings_6_7z00,
							BGl_string2672z00zz__r4_strings_6_7z00, BgL_startz00_139);
					}
				else
					{	/* Ieee/string.scm 961 */
						if (CHARP(BgL_rsz00_138))
							{	/* Ieee/string.scm 963 */
								BgL_sz00_1173 = BgL_sz00_137;
								BgL_cz00_1174 = BgL_rsz00_138;
							BgL_zc3anonymousza31584ze3z83_1175:
								{
									obj_t BgL_iz00_1177;

									BgL_iz00_1177 = BgL_startz00_139;
								BgL_zc3anonymousza31585ze3z83_1178:
									if (((long) CINT(BgL_iz00_1177) < ((long) 0)))
										{	/* Ieee/string.scm 954 */
											return BFALSE;
										}
									else
										{	/* Ieee/string.scm 954 */
											if (
												(STRING_REF(BgL_sz00_1173,
														(long) CINT(BgL_iz00_1177)) ==
													CCHAR(BgL_cz00_1174)))
												{	/* Ieee/string.scm 956 */
													return BgL_iz00_1177;
												}
											else
												{
													obj_t BgL_iz00_6523;

													BgL_iz00_6523 =
														BINT(((long) CINT(BgL_iz00_1177) - ((long) 1)));
													BgL_iz00_1177 = BgL_iz00_6523;
													goto BgL_zc3anonymousza31585ze3z83_1178;
												}
										}
								}
							}
						else
							{	/* Ieee/string.scm 963 */
								if (STRINGP(BgL_rsz00_138))
									{	/* Ieee/string.scm 965 */
										if ((STRING_LENGTH(BgL_rsz00_138) == ((long) 1)))
											{
												obj_t BgL_cz00_6533;

												obj_t BgL_sz00_6532;

												BgL_sz00_6532 = BgL_sz00_137;
												BgL_cz00_6533 =
													BCHAR(STRING_REF(BgL_rsz00_138, ((long) 0)));
												BgL_cz00_1174 = BgL_cz00_6533;
												BgL_sz00_1173 = BgL_sz00_6532;
												goto BgL_zc3anonymousza31584ze3z83_1175;
											}
										else
											{	/* Ieee/string.scm 967 */
												if ((STRING_LENGTH(BgL_rsz00_138) <= ((long) 10)))
													{	/* Ieee/string.scm 970 */
														long BgL_lenjz00_1128;

														BgL_lenjz00_1128 = STRING_LENGTH(BgL_rsz00_138);
														{
															obj_t BgL_iz00_1130;

															BgL_iz00_1130 = BgL_startz00_139;
														BgL_zc3anonymousza31553ze3z83_1131:
															if (((long) CINT(BgL_iz00_1130) < ((long) 0)))
																{	/* Ieee/string.scm 973 */
																	return BFALSE;
																}
															else
																{	/* Ieee/string.scm 975 */
																	unsigned char BgL_cz00_1133;

																	BgL_cz00_1133 =
																		STRING_REF(BgL_sz00_137,
																		(long) CINT(BgL_iz00_1130));
																	{
																		long BgL_jz00_1135;

																		BgL_jz00_1135 = ((long) 0);
																	BgL_zc3anonymousza31555ze3z83_1136:
																		if ((BgL_jz00_1135 == BgL_lenjz00_1128))
																			{
																				obj_t BgL_iz00_6547;

																				BgL_iz00_6547 =
																					BINT(
																					((long) CINT(BgL_iz00_1130) -
																						((long) 1)));
																				BgL_iz00_1130 = BgL_iz00_6547;
																				goto BgL_zc3anonymousza31553ze3z83_1131;
																			}
																		else
																			{	/* Ieee/string.scm 977 */
																				if (
																					(BgL_cz00_1133 ==
																						STRING_REF(BgL_rsz00_138,
																							BgL_jz00_1135)))
																					{	/* Ieee/string.scm 979 */
																						return BgL_iz00_1130;
																					}
																				else
																					{
																						long BgL_jz00_6554;

																						BgL_jz00_6554 =
																							(BgL_jz00_1135 + ((long) 1));
																						BgL_jz00_1135 = BgL_jz00_6554;
																						goto
																							BgL_zc3anonymousza31555ze3z83_1136;
																					}
																			}
																	}
																}
														}
													}
												else
													{	/* Ieee/string.scm 983 */
														obj_t BgL_tz00_1144;

														{	/* Ieee/string.scm 983 */
															obj_t BgL_list1577z00_1167;

															BgL_list1577z00_1167 =
																MAKE_PAIR(BCHAR(((unsigned char) 'n')), BNIL);
															{	/* Ieee/string.scm 983 */
																obj_t BgL_res2140z00_2903;

																{	/* Ieee/string.scm 983 */
																	obj_t BgL_arg1240z00_2900;

																	BgL_arg1240z00_2900 =
																		CAR(BgL_list1577z00_1167);
																	BgL_res2140z00_2903 =
																		make_string(((long) 256),
																		CCHAR(BgL_arg1240z00_2900));
																}
																BgL_tz00_1144 = BgL_res2140z00_2903;
														}}
														{	/* Ieee/string.scm 985 */
															long BgL_g1111z00_1146;

															BgL_g1111z00_1146 =
																(STRING_LENGTH(BgL_rsz00_138) - ((long) 1));
															{
																long BgL_iz00_1148;

																BgL_iz00_1148 = BgL_g1111z00_1146;
															BgL_zc3anonymousza31561ze3z83_1149:
																if ((BgL_iz00_1148 == ((long) -1)))
																	{
																		obj_t BgL_iz00_1152;

																		BgL_iz00_1152 = BgL_startz00_139;
																	BgL_zc3anonymousza31563ze3z83_1153:
																		if (
																			((long) CINT(BgL_iz00_1152) < ((long) 0)))
																			{	/* Ieee/string.scm 989 */
																				return BFALSE;
																			}
																		else
																			{	/* Ieee/string.scm 989 */
																				if (
																					(STRING_REF(BgL_tz00_1144,
																							(STRING_REF(BgL_sz00_137,
																									(long) CINT(BgL_iz00_1152))))
																						== ((unsigned char) 'y')))
																					{	/* Ieee/string.scm 991 */
																						return BgL_iz00_1152;
																					}
																				else
																					{
																						obj_t BgL_iz00_6574;

																						BgL_iz00_6574 =
																							BINT(
																							((long) CINT(BgL_iz00_1152) -
																								((long) 1)));
																						BgL_iz00_1152 = BgL_iz00_6574;
																						goto
																							BgL_zc3anonymousza31563ze3z83_1153;
																					}
																			}
																	}
																else
																	{	/* Ieee/string.scm 986 */
																		{	/* Ieee/string.scm 998 */
																			long BgL_auxz00_6578;

																			BgL_auxz00_6578 =
																				(STRING_REF(BgL_rsz00_138,
																					BgL_iz00_1148));
																			STRING_SET(BgL_tz00_1144, BgL_auxz00_6578,
																				((unsigned char) 'y'));
																		}
																		{
																			long BgL_iz00_6582;

																			BgL_iz00_6582 =
																				(BgL_iz00_1148 - ((long) 1));
																			BgL_iz00_1148 = BgL_iz00_6582;
																			goto BgL_zc3anonymousza31561ze3z83_1149;
																		}
																	}
															}
														}
													}
											}
									}
								else
									{	/* Ieee/string.scm 965 */
										return
											BGl_errorz00zz__errorz00
											(BGl_symbol2673z00zz__r4_strings_6_7z00,
											BGl_string2670z00zz__r4_strings_6_7z00, BgL_rsz00_138);
									}
							}
					}
			}
		}
	}



/* _string-skip */
	obj_t BGl__stringzd2skipzd2zz__r4_strings_6_7z00(obj_t BgL_envz00_146,
		obj_t BgL_optz00_145)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1004 */
			{	/* Ieee/string.scm 1004 */
				obj_t BgL_g1188z00_1185;

				obj_t BgL_g1189z00_1186;

				BgL_g1188z00_1185 = VECTOR_REF(BgL_optz00_145, (int) (((long) 0)));
				BgL_g1189z00_1186 = VECTOR_REF(BgL_optz00_145, (int) (((long) 1)));
				{	/* Ieee/string.scm 1004 */
					int BgL_aux1191z00_1188;

					BgL_aux1191z00_1188 = VECTOR_LENGTH(BgL_optz00_145);
					switch ((long) (BgL_aux1191z00_1188))
						{
						case ((long) 2):

							{	/* Ieee/string.scm 1004 */

								{	/* Ieee/string.scm 1004 */
									obj_t BgL_arg1591z00_1191;

									obj_t BgL_arg1593z00_1192;

									BgL_arg1591z00_1191 =
										VECTOR_REF(BgL_optz00_145, (int) (((long) 0)));
									BgL_arg1593z00_1192 =
										VECTOR_REF(BgL_optz00_145, (int) (((long) 1)));
									{	/* Ieee/string.scm 1004 */
										obj_t BgL_auxz00_6594;

										if (STRINGP(BgL_arg1591z00_1191))
											{	/* Ieee/string.scm 1004 */
												BgL_auxz00_6594 = BgL_arg1591z00_1191;
											}
										else
											{
												obj_t BgL_auxz00_6597;

												BgL_auxz00_6597 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2595z00zz__r4_strings_6_7z00,
													BINT(((long) 41787)),
													BGl_string2675z00zz__r4_strings_6_7z00,
													BGl_string2597z00zz__r4_strings_6_7z00,
													BgL_arg1591z00_1191);
												FAILURE(BgL_auxz00_6597, BFALSE, BFALSE);
											}
										return
											BGl_stringzd2skipzd2zz__r4_strings_6_7z00(BgL_auxz00_6594,
											BgL_arg1593z00_1192, BINT(((long) 0)));
							}}} break;
						case ((long) 3):

							{	/* Ieee/string.scm 1004 */
								obj_t BgL_startz00_1193;

								BgL_startz00_1193 =
									VECTOR_REF(BgL_optz00_145, (int) (((long) 2)));
								{	/* Ieee/string.scm 1004 */

									{	/* Ieee/string.scm 1004 */
										obj_t BgL_arg1596z00_1194;

										obj_t BgL_arg1597z00_1195;

										BgL_arg1596z00_1194 =
											VECTOR_REF(BgL_optz00_145, (int) (((long) 0)));
										BgL_arg1597z00_1195 =
											VECTOR_REF(BgL_optz00_145, (int) (((long) 1)));
										{	/* Ieee/string.scm 1004 */
											obj_t BgL_auxz00_6609;

											if (STRINGP(BgL_arg1596z00_1194))
												{	/* Ieee/string.scm 1004 */
													BgL_auxz00_6609 = BgL_arg1596z00_1194;
												}
											else
												{
													obj_t BgL_auxz00_6612;

													BgL_auxz00_6612 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 41787)),
														BGl_string2675z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1596z00_1194);
													FAILURE(BgL_auxz00_6612, BFALSE, BFALSE);
												}
											return
												BGl_stringzd2skipzd2zz__r4_strings_6_7z00
												(BgL_auxz00_6609, BgL_arg1597z00_1195,
												BgL_startz00_1193);
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



/* string-skip */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2skipzd2zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_142, obj_t BgL_rsz00_143, obj_t BgL_startz00_144)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1004 */
			{
				obj_t BgL_sz00_1247;

				obj_t BgL_cz00_1248;

				if (CHARP(BgL_rsz00_143))
					{	/* Ieee/string.scm 1016 */
						BgL_sz00_1247 = BgL_stringz00_142;
						BgL_cz00_1248 = BgL_rsz00_143;
					BgL_zc3anonymousza31634ze3z83_1249:
						{	/* Ieee/string.scm 1006 */
							long BgL_lenz00_1250;

							BgL_lenz00_1250 = STRING_LENGTH(BgL_sz00_1247);
							{
								obj_t BgL_iz00_1252;

								BgL_iz00_1252 = BgL_startz00_144;
							BgL_zc3anonymousza31635ze3z83_1253:
								if (((long) CINT(BgL_iz00_1252) >= BgL_lenz00_1250))
									{	/* Ieee/string.scm 1009 */
										return BFALSE;
									}
								else
									{	/* Ieee/string.scm 1009 */
										if (
											(STRING_REF(BgL_sz00_1247,
													(long) CINT(BgL_iz00_1252)) == CCHAR(BgL_cz00_1248)))
											{
												obj_t BgL_iz00_6630;

												BgL_iz00_6630 =
													BINT(((long) CINT(BgL_iz00_1252) + ((long) 1)));
												BgL_iz00_1252 = BgL_iz00_6630;
												goto BgL_zc3anonymousza31635ze3z83_1253;
											}
										else
											{	/* Ieee/string.scm 1011 */
												return BgL_iz00_1252;
											}
									}
							}
						}
					}
				else
					{	/* Ieee/string.scm 1016 */
						if (STRINGP(BgL_rsz00_143))
							{	/* Ieee/string.scm 1018 */
								if ((STRING_LENGTH(BgL_rsz00_143) == ((long) 1)))
									{
										obj_t BgL_cz00_6640;

										obj_t BgL_sz00_6639;

										BgL_sz00_6639 = BgL_stringz00_142;
										BgL_cz00_6640 =
											BCHAR(STRING_REF(BgL_rsz00_143, ((long) 0)));
										BgL_cz00_1248 = BgL_cz00_6640;
										BgL_sz00_1247 = BgL_sz00_6639;
										goto BgL_zc3anonymousza31634ze3z83_1249;
									}
								else
									{	/* Ieee/string.scm 1020 */
										if ((STRING_LENGTH(BgL_rsz00_143) <= ((long) 10)))
											{	/* Ieee/string.scm 1023 */
												long BgL_lenz00_1202;

												long BgL_lenjz00_1203;

												BgL_lenz00_1202 = STRING_LENGTH(BgL_stringz00_142);
												BgL_lenjz00_1203 = STRING_LENGTH(BgL_rsz00_143);
												{
													obj_t BgL_iz00_1205;

													BgL_iz00_1205 = BgL_startz00_144;
												BgL_zc3anonymousza31603ze3z83_1206:
													if (((long) CINT(BgL_iz00_1205) >= BgL_lenz00_1202))
														{	/* Ieee/string.scm 1026 */
															return BFALSE;
														}
													else
														{	/* Ieee/string.scm 1028 */
															unsigned char BgL_cz00_1208;

															BgL_cz00_1208 =
																STRING_REF(BgL_stringz00_142,
																(long) CINT(BgL_iz00_1205));
															{
																long BgL_jz00_1210;

																BgL_jz00_1210 = ((long) 0);
															BgL_zc3anonymousza31605ze3z83_1211:
																if ((BgL_jz00_1210 == BgL_lenjz00_1203))
																	{	/* Ieee/string.scm 1030 */
																		return BgL_iz00_1205;
																	}
																else
																	{	/* Ieee/string.scm 1030 */
																		if (
																			(BgL_cz00_1208 ==
																				STRING_REF(BgL_rsz00_143,
																					BgL_jz00_1210)))
																			{
																				obj_t BgL_iz00_6658;

																				BgL_iz00_6658 =
																					BINT(
																					((long) CINT(BgL_iz00_1205) +
																						((long) 1)));
																				BgL_iz00_1205 = BgL_iz00_6658;
																				goto BgL_zc3anonymousza31603ze3z83_1206;
																			}
																		else
																			{
																				long BgL_jz00_6662;

																				BgL_jz00_6662 =
																					(BgL_jz00_1210 + ((long) 1));
																				BgL_jz00_1210 = BgL_jz00_6662;
																				goto BgL_zc3anonymousza31605ze3z83_1211;
																			}
																	}
															}
														}
												}
											}
										else
											{	/* Ieee/string.scm 1036 */
												obj_t BgL_tz00_1219;

												long BgL_lenz00_1220;

												{	/* Ieee/string.scm 1036 */
													obj_t BgL_list1629z00_1242;

													BgL_list1629z00_1242 =
														MAKE_PAIR(BCHAR(((unsigned char) 'n')), BNIL);
													{	/* Ieee/string.scm 1036 */
														obj_t BgL_res2141z00_2969;

														{	/* Ieee/string.scm 1036 */
															obj_t BgL_arg1240z00_2966;

															BgL_arg1240z00_2966 = CAR(BgL_list1629z00_1242);
															BgL_res2141z00_2969 =
																make_string(((long) 256),
																CCHAR(BgL_arg1240z00_2966));
														}
														BgL_tz00_1219 = BgL_res2141z00_2969;
												}}
												BgL_lenz00_1220 = STRING_LENGTH(BgL_stringz00_142);
												{	/* Ieee/string.scm 1038 */
													long BgL_g1113z00_1221;

													BgL_g1113z00_1221 =
														(STRING_LENGTH(BgL_rsz00_143) - ((long) 1));
													{
														long BgL_iz00_1223;

														BgL_iz00_1223 = BgL_g1113z00_1221;
													BgL_zc3anonymousza31612ze3z83_1224:
														if ((BgL_iz00_1223 == ((long) -1)))
															{
																obj_t BgL_iz00_1227;

																BgL_iz00_1227 = BgL_startz00_144;
															BgL_zc3anonymousza31614ze3z83_1228:
																if (
																	((long) CINT(BgL_iz00_1227) >=
																		BgL_lenz00_1220))
																	{	/* Ieee/string.scm 1042 */
																		return BFALSE;
																	}
																else
																	{	/* Ieee/string.scm 1042 */
																		if (
																			(STRING_REF(BgL_tz00_1219,
																					(STRING_REF(BgL_stringz00_142,
																							(long) CINT(BgL_iz00_1227)))) ==
																				((unsigned char) 'y')))
																			{
																				obj_t BgL_iz00_6683;

																				BgL_iz00_6683 =
																					BINT(
																					((long) CINT(BgL_iz00_1227) +
																						((long) 1)));
																				BgL_iz00_1227 = BgL_iz00_6683;
																				goto BgL_zc3anonymousza31614ze3z83_1228;
																			}
																		else
																			{	/* Ieee/string.scm 1044 */
																				return BgL_iz00_1227;
																			}
																	}
															}
														else
															{	/* Ieee/string.scm 1039 */
																{	/* Ieee/string.scm 1051 */
																	long BgL_auxz00_6687;

																	BgL_auxz00_6687 =
																		(STRING_REF(BgL_rsz00_143, BgL_iz00_1223));
																	STRING_SET(BgL_tz00_1219, BgL_auxz00_6687,
																		((unsigned char) 'y'));
																}
																{
																	long BgL_iz00_6691;

																	BgL_iz00_6691 = (BgL_iz00_1223 - ((long) 1));
																	BgL_iz00_1223 = BgL_iz00_6691;
																	goto BgL_zc3anonymousza31612ze3z83_1224;
																}
															}
													}
												}
											}
									}
							}
						else
							{	/* Ieee/string.scm 1018 */
								return
									BGl_errorz00zz__errorz00
									(BGl_symbol2676z00zz__r4_strings_6_7z00,
									BGl_string2670z00zz__r4_strings_6_7z00, BgL_rsz00_143);
							}
					}
			}
		}
	}



/* _string-skip-right */
	obj_t BGl__stringzd2skipzd2rightz00zz__r4_strings_6_7z00(obj_t BgL_envz00_151,
		obj_t BgL_optz00_150)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1057 */
			{	/* Ieee/string.scm 1057 */
				obj_t BgL_sz00_1260;

				obj_t BgL_g1192z00_1261;

				BgL_sz00_1260 = VECTOR_REF(BgL_optz00_150, (int) (((long) 0)));
				BgL_g1192z00_1261 = VECTOR_REF(BgL_optz00_150, (int) (((long) 1)));
				{	/* Ieee/string.scm 1057 */
					int BgL_aux1194z00_1263;

					BgL_aux1194z00_1263 = VECTOR_LENGTH(BgL_optz00_150);
					switch ((long) (BgL_aux1194z00_1263))
						{
						case ((long) 2):

							{	/* Ieee/string.scm 1057 */
								long BgL_startz00_1265;

								{	/* Ieee/string.scm 1057 */
									long BgL_auxz00_6699;

									{	/* Ieee/string.scm 1057 */
										obj_t BgL_stringz00_3004;

										if (STRINGP(BgL_sz00_1260))
											{	/* Ieee/string.scm 1057 */
												BgL_stringz00_3004 = BgL_sz00_1260;
											}
										else
											{
												obj_t BgL_auxz00_6702;

												BgL_auxz00_6702 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2595z00zz__r4_strings_6_7z00,
													BINT(((long) 43382)),
													BGl_string2678z00zz__r4_strings_6_7z00,
													BGl_string2597z00zz__r4_strings_6_7z00,
													BgL_sz00_1260);
												FAILURE(BgL_auxz00_6702, BFALSE, BFALSE);
											}
										BgL_auxz00_6699 = STRING_LENGTH(BgL_stringz00_3004);
									}
									BgL_startz00_1265 = (BgL_auxz00_6699 - ((long) 1));
								}
								{	/* Ieee/string.scm 1057 */

									{	/* Ieee/string.scm 1057 */
										obj_t BgL_arg1643z00_1266;

										obj_t BgL_arg1644z00_1267;

										BgL_arg1643z00_1266 =
											VECTOR_REF(BgL_optz00_150, (int) (((long) 0)));
										BgL_arg1644z00_1267 =
											VECTOR_REF(BgL_optz00_150, (int) (((long) 1)));
										{	/* Ieee/string.scm 1057 */
											obj_t BgL_auxz00_6712;

											if (STRINGP(BgL_arg1643z00_1266))
												{	/* Ieee/string.scm 1057 */
													BgL_auxz00_6712 = BgL_arg1643z00_1266;
												}
											else
												{
													obj_t BgL_auxz00_6715;

													BgL_auxz00_6715 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 43327)),
														BGl_string2678z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1643z00_1266);
													FAILURE(BgL_auxz00_6715, BFALSE, BFALSE);
												}
											return
												BGl_stringzd2skipzd2rightz00zz__r4_strings_6_7z00
												(BgL_auxz00_6712, BgL_arg1644z00_1267,
												BINT(BgL_startz00_1265));
										}
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Ieee/string.scm 1057 */
								obj_t BgL_startz00_1270;

								BgL_startz00_1270 =
									VECTOR_REF(BgL_optz00_150, (int) (((long) 2)));
								{	/* Ieee/string.scm 1057 */

									{	/* Ieee/string.scm 1057 */
										obj_t BgL_arg1647z00_1271;

										obj_t BgL_arg1650z00_1272;

										BgL_arg1647z00_1271 =
											VECTOR_REF(BgL_optz00_150, (int) (((long) 0)));
										BgL_arg1650z00_1272 =
											VECTOR_REF(BgL_optz00_150, (int) (((long) 1)));
										{	/* Ieee/string.scm 1057 */
											obj_t BgL_auxz00_6727;

											if (STRINGP(BgL_arg1647z00_1271))
												{	/* Ieee/string.scm 1057 */
													BgL_auxz00_6727 = BgL_arg1647z00_1271;
												}
											else
												{
													obj_t BgL_auxz00_6730;

													BgL_auxz00_6730 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 43327)),
														BGl_string2678z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1647z00_1271);
													FAILURE(BgL_auxz00_6730, BFALSE, BFALSE);
												}
											return
												BGl_stringzd2skipzd2rightz00zz__r4_strings_6_7z00
												(BgL_auxz00_6727, BgL_arg1650z00_1272,
												BgL_startz00_1270);
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



/* string-skip-right */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2skipzd2rightz00zz__r4_strings_6_7z00(obj_t
		BgL_sz00_147, obj_t BgL_rsz00_148, obj_t BgL_startz00_149)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1057 */
			{
				obj_t BgL_sz00_1326;

				obj_t BgL_cz00_1327;

				if (((long) CINT(BgL_startz00_149) > STRING_LENGTH(BgL_sz00_147)))
					{	/* Ieee/string.scm 1068 */
						return
							BGl_errorz00zz__errorz00(BGl_symbol2668z00zz__r4_strings_6_7z00,
							BGl_string2672z00zz__r4_strings_6_7z00, BgL_startz00_149);
					}
				else
					{	/* Ieee/string.scm 1068 */
						if (CHARP(BgL_rsz00_148))
							{	/* Ieee/string.scm 1070 */
								BgL_sz00_1326 = BgL_sz00_147;
								BgL_cz00_1327 = BgL_rsz00_148;
							BgL_zc3anonymousza31691ze3z83_1328:
								{
									obj_t BgL_iz00_1330;

									BgL_iz00_1330 = BgL_startz00_149;
								BgL_zc3anonymousza31692ze3z83_1331:
									if (((long) CINT(BgL_iz00_1330) < ((long) 0)))
										{	/* Ieee/string.scm 1061 */
											return BFALSE;
										}
									else
										{	/* Ieee/string.scm 1061 */
											if (
												(STRING_REF(BgL_sz00_1326,
														(long) CINT(BgL_iz00_1330)) ==
													CCHAR(BgL_cz00_1327)))
												{
													obj_t BgL_iz00_6752;

													BgL_iz00_6752 =
														BINT(((long) CINT(BgL_iz00_1330) - ((long) 1)));
													BgL_iz00_1330 = BgL_iz00_6752;
													goto BgL_zc3anonymousza31692ze3z83_1331;
												}
											else
												{	/* Ieee/string.scm 1063 */
													return BgL_iz00_1330;
												}
										}
								}
							}
						else
							{	/* Ieee/string.scm 1070 */
								if (STRINGP(BgL_rsz00_148))
									{	/* Ieee/string.scm 1072 */
										if ((STRING_LENGTH(BgL_rsz00_148) == ((long) 1)))
											{
												obj_t BgL_cz00_6762;

												obj_t BgL_sz00_6761;

												BgL_sz00_6761 = BgL_sz00_147;
												BgL_cz00_6762 =
													BCHAR(STRING_REF(BgL_rsz00_148, ((long) 0)));
												BgL_cz00_1327 = BgL_cz00_6762;
												BgL_sz00_1326 = BgL_sz00_6761;
												goto BgL_zc3anonymousza31691ze3z83_1328;
											}
										else
											{	/* Ieee/string.scm 1074 */
												if ((STRING_LENGTH(BgL_rsz00_148) <= ((long) 10)))
													{	/* Ieee/string.scm 1077 */
														long BgL_lenjz00_1281;

														BgL_lenjz00_1281 = STRING_LENGTH(BgL_rsz00_148);
														{
															obj_t BgL_iz00_1283;

															BgL_iz00_1283 = BgL_startz00_149;
														BgL_zc3anonymousza31657ze3z83_1284:
															if (((long) CINT(BgL_iz00_1283) < ((long) 0)))
																{	/* Ieee/string.scm 1080 */
																	return BFALSE;
																}
															else
																{	/* Ieee/string.scm 1082 */
																	unsigned char BgL_cz00_1286;

																	BgL_cz00_1286 =
																		STRING_REF(BgL_sz00_147,
																		(long) CINT(BgL_iz00_1283));
																	{
																		long BgL_jz00_1288;

																		BgL_jz00_1288 = ((long) 0);
																	BgL_zc3anonymousza31659ze3z83_1289:
																		if ((BgL_jz00_1288 == BgL_lenjz00_1281))
																			{	/* Ieee/string.scm 1084 */
																				return BgL_iz00_1283;
																			}
																		else
																			{	/* Ieee/string.scm 1084 */
																				if (
																					(BgL_cz00_1286 ==
																						STRING_REF(BgL_rsz00_148,
																							BgL_jz00_1288)))
																					{
																						obj_t BgL_iz00_6779;

																						BgL_iz00_6779 =
																							BINT(
																							((long) CINT(BgL_iz00_1283) -
																								((long) 1)));
																						BgL_iz00_1283 = BgL_iz00_6779;
																						goto
																							BgL_zc3anonymousza31657ze3z83_1284;
																					}
																				else
																					{
																						long BgL_jz00_6783;

																						BgL_jz00_6783 =
																							(BgL_jz00_1288 + ((long) 1));
																						BgL_jz00_1288 = BgL_jz00_6783;
																						goto
																							BgL_zc3anonymousza31659ze3z83_1289;
																					}
																			}
																	}
																}
														}
													}
												else
													{	/* Ieee/string.scm 1090 */
														obj_t BgL_tz00_1297;

														{	/* Ieee/string.scm 1090 */
															obj_t BgL_list1681z00_1320;

															BgL_list1681z00_1320 =
																MAKE_PAIR(BCHAR(((unsigned char) 'n')), BNIL);
															{	/* Ieee/string.scm 1090 */
																obj_t BgL_res2142z00_3042;

																{	/* Ieee/string.scm 1090 */
																	obj_t BgL_arg1240z00_3039;

																	BgL_arg1240z00_3039 =
																		CAR(BgL_list1681z00_1320);
																	BgL_res2142z00_3042 =
																		make_string(((long) 256),
																		CCHAR(BgL_arg1240z00_3039));
																}
																BgL_tz00_1297 = BgL_res2142z00_3042;
														}}
														{	/* Ieee/string.scm 1092 */
															long BgL_g1115z00_1299;

															BgL_g1115z00_1299 =
																(STRING_LENGTH(BgL_rsz00_148) - ((long) 1));
															{
																long BgL_iz00_1301;

																BgL_iz00_1301 = BgL_g1115z00_1299;
															BgL_zc3anonymousza31665ze3z83_1302:
																if ((BgL_iz00_1301 == ((long) -1)))
																	{
																		obj_t BgL_iz00_1305;

																		BgL_iz00_1305 = BgL_startz00_149;
																	BgL_zc3anonymousza31667ze3z83_1306:
																		if (
																			((long) CINT(BgL_iz00_1305) < ((long) 0)))
																			{	/* Ieee/string.scm 1096 */
																				return BFALSE;
																			}
																		else
																			{	/* Ieee/string.scm 1096 */
																				if (
																					(STRING_REF(BgL_tz00_1297,
																							(STRING_REF(BgL_sz00_147,
																									(long) CINT(BgL_iz00_1305))))
																						== ((unsigned char) 'y')))
																					{
																						obj_t BgL_iz00_6803;

																						BgL_iz00_6803 =
																							BINT(
																							((long) CINT(BgL_iz00_1305) -
																								((long) 1)));
																						BgL_iz00_1305 = BgL_iz00_6803;
																						goto
																							BgL_zc3anonymousza31667ze3z83_1306;
																					}
																				else
																					{	/* Ieee/string.scm 1098 */
																						return BgL_iz00_1305;
																					}
																			}
																	}
																else
																	{	/* Ieee/string.scm 1093 */
																		{	/* Ieee/string.scm 1105 */
																			long BgL_auxz00_6807;

																			BgL_auxz00_6807 =
																				(STRING_REF(BgL_rsz00_148,
																					BgL_iz00_1301));
																			STRING_SET(BgL_tz00_1297, BgL_auxz00_6807,
																				((unsigned char) 'y'));
																		}
																		{
																			long BgL_iz00_6811;

																			BgL_iz00_6811 =
																				(BgL_iz00_1301 - ((long) 1));
																			BgL_iz00_1301 = BgL_iz00_6811;
																			goto BgL_zc3anonymousza31665ze3z83_1302;
																		}
																	}
															}
														}
													}
											}
									}
								else
									{	/* Ieee/string.scm 1072 */
										return
											BGl_errorz00zz__errorz00
											(BGl_symbol2673z00zz__r4_strings_6_7z00,
											BGl_string2670z00zz__r4_strings_6_7z00, BgL_rsz00_148);
									}
							}
					}
			}
		}
	}



/* _string-prefix-length */
	obj_t BGl__stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(obj_t
		BgL_envz00_169, obj_t BgL_optz00_168)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1139 */
			{	/* Ieee/string.scm 1139 */
				obj_t BgL_s1z00_1346;

				obj_t BgL_s2z00_1347;

				BgL_s1z00_1346 = VECTOR_REF(BgL_optz00_168, (int) (((long) 0)));
				BgL_s2z00_1347 = VECTOR_REF(BgL_optz00_168, (int) (((long) 1)));
				{	/* Ieee/string.scm 1139 */
					int BgL_aux1196z00_1349;

					BgL_aux1196z00_1349 = VECTOR_LENGTH(BgL_optz00_168);
					switch ((long) (BgL_aux1196z00_1349))
						{
						case ((long) 2):

							{	/* Ieee/string.scm 1139 */

								{	/* Ieee/string.scm 1139 */
									obj_t BgL_arg1708z00_1355;

									obj_t BgL_arg1709z00_1356;

									BgL_arg1708z00_1355 =
										VECTOR_REF(BgL_optz00_168, (int) (((long) 0)));
									BgL_arg1709z00_1356 =
										VECTOR_REF(BgL_optz00_168, (int) (((long) 1)));
									{	/* Ieee/string.scm 1139 */
										int BgL_auxz00_6823;

										{	/* Ieee/string.scm 1139 */
											obj_t BgL_auxz00_6831;

											obj_t BgL_auxz00_6824;

											if (STRINGP(BgL_arg1709z00_1356))
												{	/* Ieee/string.scm 1139 */
													BgL_auxz00_6831 = BgL_arg1709z00_1356;
												}
											else
												{
													obj_t BgL_auxz00_6834;

													BgL_auxz00_6834 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 45958)),
														BGl_string2679z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1709z00_1356);
													FAILURE(BgL_auxz00_6834, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_arg1708z00_1355))
												{	/* Ieee/string.scm 1139 */
													BgL_auxz00_6824 = BgL_arg1708z00_1355;
												}
											else
												{
													obj_t BgL_auxz00_6827;

													BgL_auxz00_6827 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 45958)),
														BGl_string2679z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1708z00_1355);
													FAILURE(BgL_auxz00_6827, BFALSE, BFALSE);
												}
											BgL_auxz00_6823 =
												BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00
												(BgL_auxz00_6824, BgL_auxz00_6831, BFALSE, BFALSE,
												BFALSE, BFALSE);
										}
										return BINT(BgL_auxz00_6823);
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Ieee/string.scm 1139 */
								obj_t BgL_start1z00_1357;

								BgL_start1z00_1357 =
									VECTOR_REF(BgL_optz00_168, (int) (((long) 2)));
								{	/* Ieee/string.scm 1139 */

									{	/* Ieee/string.scm 1139 */
										obj_t BgL_arg1710z00_1361;

										obj_t BgL_arg1711z00_1362;

										BgL_arg1710z00_1361 =
											VECTOR_REF(BgL_optz00_168, (int) (((long) 0)));
										BgL_arg1711z00_1362 =
											VECTOR_REF(BgL_optz00_168, (int) (((long) 1)));
										{	/* Ieee/string.scm 1139 */
											int BgL_auxz00_6846;

											{	/* Ieee/string.scm 1139 */
												obj_t BgL_auxz00_6854;

												obj_t BgL_auxz00_6847;

												if (STRINGP(BgL_arg1711z00_1362))
													{	/* Ieee/string.scm 1139 */
														BgL_auxz00_6854 = BgL_arg1711z00_1362;
													}
												else
													{
														obj_t BgL_auxz00_6857;

														BgL_auxz00_6857 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 45958)),
															BGl_string2679z00zz__r4_strings_6_7z00,
															BGl_string2597z00zz__r4_strings_6_7z00,
															BgL_arg1711z00_1362);
														FAILURE(BgL_auxz00_6857, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_arg1710z00_1361))
													{	/* Ieee/string.scm 1139 */
														BgL_auxz00_6847 = BgL_arg1710z00_1361;
													}
												else
													{
														obj_t BgL_auxz00_6850;

														BgL_auxz00_6850 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 45958)),
															BGl_string2679z00zz__r4_strings_6_7z00,
															BGl_string2597z00zz__r4_strings_6_7z00,
															BgL_arg1710z00_1361);
														FAILURE(BgL_auxz00_6850, BFALSE, BFALSE);
													}
												BgL_auxz00_6846 =
													BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00
													(BgL_auxz00_6847, BgL_auxz00_6854, BgL_start1z00_1357,
													BFALSE, BFALSE, BFALSE);
											}
											return BINT(BgL_auxz00_6846);
										}
									}
								}
							}
							break;
						case ((long) 4):

							{	/* Ieee/string.scm 1139 */
								obj_t BgL_start1z00_1363;

								BgL_start1z00_1363 =
									VECTOR_REF(BgL_optz00_168, (int) (((long) 2)));
								{	/* Ieee/string.scm 1139 */
									obj_t BgL_end1z00_1364;

									BgL_end1z00_1364 =
										VECTOR_REF(BgL_optz00_168, (int) (((long) 3)));
									{	/* Ieee/string.scm 1139 */

										{	/* Ieee/string.scm 1139 */
											obj_t BgL_arg1713z00_1367;

											obj_t BgL_arg1714z00_1368;

											BgL_arg1713z00_1367 =
												VECTOR_REF(BgL_optz00_168, (int) (((long) 0)));
											BgL_arg1714z00_1368 =
												VECTOR_REF(BgL_optz00_168, (int) (((long) 1)));
											{	/* Ieee/string.scm 1139 */
												int BgL_auxz00_6871;

												{	/* Ieee/string.scm 1139 */
													obj_t BgL_auxz00_6879;

													obj_t BgL_auxz00_6872;

													if (STRINGP(BgL_arg1714z00_1368))
														{	/* Ieee/string.scm 1139 */
															BgL_auxz00_6879 = BgL_arg1714z00_1368;
														}
													else
														{
															obj_t BgL_auxz00_6882;

															BgL_auxz00_6882 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2595z00zz__r4_strings_6_7z00,
																BINT(((long) 45958)),
																BGl_string2679z00zz__r4_strings_6_7z00,
																BGl_string2597z00zz__r4_strings_6_7z00,
																BgL_arg1714z00_1368);
															FAILURE(BgL_auxz00_6882, BFALSE, BFALSE);
														}
													if (STRINGP(BgL_arg1713z00_1367))
														{	/* Ieee/string.scm 1139 */
															BgL_auxz00_6872 = BgL_arg1713z00_1367;
														}
													else
														{
															obj_t BgL_auxz00_6875;

															BgL_auxz00_6875 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2595z00zz__r4_strings_6_7z00,
																BINT(((long) 45958)),
																BGl_string2679z00zz__r4_strings_6_7z00,
																BGl_string2597z00zz__r4_strings_6_7z00,
																BgL_arg1713z00_1367);
															FAILURE(BgL_auxz00_6875, BFALSE, BFALSE);
														}
													BgL_auxz00_6871 =
														BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00
														(BgL_auxz00_6872, BgL_auxz00_6879,
														BgL_start1z00_1363, BgL_end1z00_1364, BFALSE,
														BFALSE);
												}
												return BINT(BgL_auxz00_6871);
											}
										}
									}
								}
							}
							break;
						case ((long) 5):

							{	/* Ieee/string.scm 1139 */
								obj_t BgL_start1z00_1369;

								BgL_start1z00_1369 =
									VECTOR_REF(BgL_optz00_168, (int) (((long) 2)));
								{	/* Ieee/string.scm 1139 */
									obj_t BgL_end1z00_1370;

									BgL_end1z00_1370 =
										VECTOR_REF(BgL_optz00_168, (int) (((long) 3)));
									{	/* Ieee/string.scm 1139 */
										obj_t BgL_start2z00_1371;

										BgL_start2z00_1371 =
											VECTOR_REF(BgL_optz00_168, (int) (((long) 4)));
										{	/* Ieee/string.scm 1139 */

											{	/* Ieee/string.scm 1139 */
												obj_t BgL_arg1715z00_1373;

												obj_t BgL_arg1718z00_1374;

												BgL_arg1715z00_1373 =
													VECTOR_REF(BgL_optz00_168, (int) (((long) 0)));
												BgL_arg1718z00_1374 =
													VECTOR_REF(BgL_optz00_168, (int) (((long) 1)));
												{	/* Ieee/string.scm 1139 */
													int BgL_auxz00_6898;

													{	/* Ieee/string.scm 1139 */
														obj_t BgL_auxz00_6906;

														obj_t BgL_auxz00_6899;

														if (STRINGP(BgL_arg1718z00_1374))
															{	/* Ieee/string.scm 1139 */
																BgL_auxz00_6906 = BgL_arg1718z00_1374;
															}
														else
															{
																obj_t BgL_auxz00_6909;

																BgL_auxz00_6909 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2595z00zz__r4_strings_6_7z00,
																	BINT(((long) 45958)),
																	BGl_string2679z00zz__r4_strings_6_7z00,
																	BGl_string2597z00zz__r4_strings_6_7z00,
																	BgL_arg1718z00_1374);
																FAILURE(BgL_auxz00_6909, BFALSE, BFALSE);
															}
														if (STRINGP(BgL_arg1715z00_1373))
															{	/* Ieee/string.scm 1139 */
																BgL_auxz00_6899 = BgL_arg1715z00_1373;
															}
														else
															{
																obj_t BgL_auxz00_6902;

																BgL_auxz00_6902 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2595z00zz__r4_strings_6_7z00,
																	BINT(((long) 45958)),
																	BGl_string2679z00zz__r4_strings_6_7z00,
																	BGl_string2597z00zz__r4_strings_6_7z00,
																	BgL_arg1715z00_1373);
																FAILURE(BgL_auxz00_6902, BFALSE, BFALSE);
															}
														BgL_auxz00_6898 =
															BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00
															(BgL_auxz00_6899, BgL_auxz00_6906,
															BgL_start1z00_1369, BgL_end1z00_1370,
															BgL_start2z00_1371, BFALSE);
													}
													return BINT(BgL_auxz00_6898);
												}
											}
										}
									}
								}
							}
							break;
						case ((long) 6):

							{	/* Ieee/string.scm 1139 */
								obj_t BgL_start1z00_1375;

								BgL_start1z00_1375 =
									VECTOR_REF(BgL_optz00_168, (int) (((long) 2)));
								{	/* Ieee/string.scm 1139 */
									obj_t BgL_end1z00_1376;

									BgL_end1z00_1376 =
										VECTOR_REF(BgL_optz00_168, (int) (((long) 3)));
									{	/* Ieee/string.scm 1139 */
										obj_t BgL_start2z00_1377;

										BgL_start2z00_1377 =
											VECTOR_REF(BgL_optz00_168, (int) (((long) 4)));
										{	/* Ieee/string.scm 1139 */
											obj_t BgL_end2z00_1378;

											BgL_end2z00_1378 =
												VECTOR_REF(BgL_optz00_168, (int) (((long) 5)));
											{	/* Ieee/string.scm 1139 */

												{	/* Ieee/string.scm 1139 */
													obj_t BgL_arg1719z00_1379;

													obj_t BgL_arg1724z00_1380;

													BgL_arg1719z00_1379 =
														VECTOR_REF(BgL_optz00_168, (int) (((long) 0)));
													BgL_arg1724z00_1380 =
														VECTOR_REF(BgL_optz00_168, (int) (((long) 1)));
													{	/* Ieee/string.scm 1139 */
														int BgL_auxz00_6927;

														{	/* Ieee/string.scm 1139 */
															obj_t BgL_auxz00_6935;

															obj_t BgL_auxz00_6928;

															if (STRINGP(BgL_arg1724z00_1380))
																{	/* Ieee/string.scm 1139 */
																	BgL_auxz00_6935 = BgL_arg1724z00_1380;
																}
															else
																{
																	obj_t BgL_auxz00_6938;

																	BgL_auxz00_6938 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2595z00zz__r4_strings_6_7z00,
																		BINT(((long) 45958)),
																		BGl_string2679z00zz__r4_strings_6_7z00,
																		BGl_string2597z00zz__r4_strings_6_7z00,
																		BgL_arg1724z00_1380);
																	FAILURE(BgL_auxz00_6938, BFALSE, BFALSE);
																}
															if (STRINGP(BgL_arg1719z00_1379))
																{	/* Ieee/string.scm 1139 */
																	BgL_auxz00_6928 = BgL_arg1719z00_1379;
																}
															else
																{
																	obj_t BgL_auxz00_6931;

																	BgL_auxz00_6931 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2595z00zz__r4_strings_6_7z00,
																		BINT(((long) 45958)),
																		BGl_string2679z00zz__r4_strings_6_7z00,
																		BGl_string2597z00zz__r4_strings_6_7z00,
																		BgL_arg1719z00_1379);
																	FAILURE(BgL_auxz00_6931, BFALSE, BFALSE);
																}
															BgL_auxz00_6927 =
																BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00
																(BgL_auxz00_6928, BgL_auxz00_6935,
																BgL_start1z00_1375, BgL_end1z00_1376,
																BgL_start2z00_1377, BgL_end2z00_1378);
														}
														return BINT(BgL_auxz00_6927);
													}
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



/* string-prefix-length */
	BGL_EXPORTED_DEF int
		BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(obj_t BgL_s1z00_162,
		obj_t BgL_s2z00_163, obj_t BgL_start1z00_164, obj_t BgL_end1z00_165,
		obj_t BgL_start2z00_166, obj_t BgL_end2z00_167)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1139 */
			{	/* Ieee/string.scm 1141 */
				long BgL_l1z00_1381;

				BgL_l1z00_1381 = STRING_LENGTH(BgL_s1z00_162);
				{	/* Ieee/string.scm 1141 */
					long BgL_l2z00_1382;

					BgL_l2z00_1382 = STRING_LENGTH(BgL_s2z00_163);
					{	/* Ieee/string.scm 1142 */
						obj_t BgL_e1z00_1383;

						{	/* Ieee/string.scm 1143 */
							obj_t BgL_procz00_3094;

							BgL_procz00_3094 = BGl_symbol2680z00zz__r4_strings_6_7z00;
							if (CBOOL(BgL_end1z00_165))
								{	/* Ieee/string.scm 1143 */
									if (((long) CINT(BgL_end1z00_165) <= ((long) 0)))
										{	/* Ieee/string.scm 1143 */
											BgL_e1z00_1383 =
												BGl_errorz00zz__errorz00(BgL_procz00_3094,
												string_append_3(BGl_string2682z00zz__r4_strings_6_7z00,
													BGl_string2683z00zz__r4_strings_6_7z00,
													BGl_string2684z00zz__r4_strings_6_7z00),
												BgL_end1z00_165);
										}
									else
										{	/* Ieee/string.scm 1143 */
											if (((long) CINT(BgL_end1z00_165) > BgL_l1z00_1381))
												{	/* Ieee/string.scm 1143 */
													BgL_e1z00_1383 =
														BGl_errorz00zz__errorz00(BgL_procz00_3094,
														string_append_3
														(BGl_string2685z00zz__r4_strings_6_7z00,
															BGl_string2683z00zz__r4_strings_6_7z00,
															BGl_string2684z00zz__r4_strings_6_7z00),
														BgL_end1z00_165);
												}
											else
												{	/* Ieee/string.scm 1143 */
													BgL_e1z00_1383 = BgL_end1z00_165;
												}
										}
								}
							else
								{	/* Ieee/string.scm 1143 */
									BgL_e1z00_1383 = BINT(BgL_l1z00_1381);
								}
						}
						{	/* Ieee/string.scm 1143 */
							obj_t BgL_e2z00_1384;

							{	/* Ieee/string.scm 1144 */
								obj_t BgL_procz00_3107;

								BgL_procz00_3107 = BGl_symbol2680z00zz__r4_strings_6_7z00;
								if (CBOOL(BgL_end2z00_167))
									{	/* Ieee/string.scm 1144 */
										if (((long) CINT(BgL_end2z00_167) <= ((long) 0)))
											{	/* Ieee/string.scm 1144 */
												BgL_e2z00_1384 =
													BGl_errorz00zz__errorz00(BgL_procz00_3107,
													string_append_3
													(BGl_string2682z00zz__r4_strings_6_7z00,
														BGl_string2686z00zz__r4_strings_6_7z00,
														BGl_string2684z00zz__r4_strings_6_7z00),
													BgL_end2z00_167);
											}
										else
											{	/* Ieee/string.scm 1144 */
												if (((long) CINT(BgL_end2z00_167) > BgL_l2z00_1382))
													{	/* Ieee/string.scm 1144 */
														BgL_e2z00_1384 =
															BGl_errorz00zz__errorz00(BgL_procz00_3107,
															string_append_3
															(BGl_string2685z00zz__r4_strings_6_7z00,
																BGl_string2686z00zz__r4_strings_6_7z00,
																BGl_string2684z00zz__r4_strings_6_7z00),
															BgL_end2z00_167);
													}
												else
													{	/* Ieee/string.scm 1144 */
														BgL_e2z00_1384 = BgL_end2z00_167;
													}
											}
									}
								else
									{	/* Ieee/string.scm 1144 */
										BgL_e2z00_1384 = BINT(BgL_l2z00_1382);
									}
							}
							{	/* Ieee/string.scm 1144 */
								obj_t BgL_b1z00_1385;

								{	/* Ieee/string.scm 1145 */
									obj_t BgL_procz00_3120;

									BgL_procz00_3120 = BGl_symbol2680z00zz__r4_strings_6_7z00;
									if (CBOOL(BgL_start1z00_164))
										{	/* Ieee/string.scm 1145 */
											if (((long) CINT(BgL_start1z00_164) < ((long) 0)))
												{	/* Ieee/string.scm 1145 */
													BgL_b1z00_1385 =
														BGl_errorz00zz__errorz00(BgL_procz00_3120,
														string_append_3
														(BGl_string2687z00zz__r4_strings_6_7z00,
															BGl_string2688z00zz__r4_strings_6_7z00,
															BGl_string2684z00zz__r4_strings_6_7z00),
														BgL_start1z00_164);
												}
											else
												{	/* Ieee/string.scm 1145 */
													if (
														((long) CINT(BgL_start1z00_164) >= BgL_l1z00_1381))
														{	/* Ieee/string.scm 1145 */
															BgL_b1z00_1385 =
																BGl_errorz00zz__errorz00(BgL_procz00_3120,
																string_append_3
																(BGl_string2689z00zz__r4_strings_6_7z00,
																	BGl_string2688z00zz__r4_strings_6_7z00,
																	BGl_string2684z00zz__r4_strings_6_7z00),
																BgL_start1z00_164);
														}
													else
														{	/* Ieee/string.scm 1145 */
															BgL_b1z00_1385 = BgL_start1z00_164;
														}
												}
										}
									else
										{	/* Ieee/string.scm 1145 */
											BgL_b1z00_1385 = BINT(((long) 0));
								}}
								{	/* Ieee/string.scm 1145 */
									obj_t BgL_b2z00_1386;

									{	/* Ieee/string.scm 1146 */
										obj_t BgL_procz00_3133;

										BgL_procz00_3133 = BGl_symbol2680z00zz__r4_strings_6_7z00;
										if (CBOOL(BgL_start2z00_166))
											{	/* Ieee/string.scm 1146 */
												if (((long) CINT(BgL_start2z00_166) < ((long) 0)))
													{	/* Ieee/string.scm 1146 */
														BgL_b2z00_1386 =
															BGl_errorz00zz__errorz00(BgL_procz00_3133,
															string_append_3
															(BGl_string2687z00zz__r4_strings_6_7z00,
																BGl_string2690z00zz__r4_strings_6_7z00,
																BGl_string2684z00zz__r4_strings_6_7z00),
															BgL_start2z00_166);
													}
												else
													{	/* Ieee/string.scm 1146 */
														if (
															((long) CINT(BgL_start2z00_166) >=
																BgL_l2z00_1382))
															{	/* Ieee/string.scm 1146 */
																BgL_b2z00_1386 =
																	BGl_errorz00zz__errorz00(BgL_procz00_3133,
																	string_append_3
																	(BGl_string2689z00zz__r4_strings_6_7z00,
																		BGl_string2690z00zz__r4_strings_6_7z00,
																		BGl_string2684z00zz__r4_strings_6_7z00),
																	BgL_start2z00_166);
															}
														else
															{	/* Ieee/string.scm 1146 */
																BgL_b2z00_1386 = BgL_start2z00_166;
															}
													}
											}
										else
											{	/* Ieee/string.scm 1146 */
												BgL_b2z00_1386 = BINT(((long) 0));
									}}
									{	/* Ieee/string.scm 1146 */

										{
											obj_t BgL_i1z00_1388;

											obj_t BgL_i2z00_1389;

											{	/* Ieee/string.scm 1147 */
												long BgL_auxz00_7000;

												BgL_i1z00_1388 = BgL_b1z00_1385;
												BgL_i2z00_1389 = BgL_b2z00_1386;
											BgL_zc3anonymousza31725ze3z83_1390:
												{	/* Ieee/string.scm 1150 */
													bool_t BgL_testz00_7001;

													if (
														((long) CINT(BgL_i1z00_1388) ==
															(long) CINT(BgL_e1z00_1383)))
														{	/* Ieee/string.scm 1150 */
															BgL_testz00_7001 = ((bool_t) 1);
														}
													else
														{	/* Ieee/string.scm 1150 */
															BgL_testz00_7001 =
																(
																(long) CINT(BgL_i2z00_1389) ==
																(long) CINT(BgL_e2z00_1384));
														}
													if (BgL_testz00_7001)
														{	/* Ieee/string.scm 1150 */
															BgL_auxz00_7000 =
																(
																(long) CINT(BgL_i1z00_1388) -
																(long) CINT(BgL_b1z00_1385));
														}
													else
														{	/* Ieee/string.scm 1150 */
															if (
																(STRING_REF(BgL_s1z00_162,
																		(long) CINT(BgL_i1z00_1388)) ==
																	STRING_REF(BgL_s2z00_163,
																		(long) CINT(BgL_i2z00_1389))))
																{
																	obj_t BgL_i2z00_7022;

																	obj_t BgL_i1z00_7018;

																	BgL_i1z00_7018 =
																		BINT(
																		((long) CINT(BgL_i1z00_1388) + ((long) 1)));
																	BgL_i2z00_7022 =
																		BINT(
																		((long) CINT(BgL_i2z00_1389) + ((long) 1)));
																	BgL_i2z00_1389 = BgL_i2z00_7022;
																	BgL_i1z00_1388 = BgL_i1z00_7018;
																	goto BgL_zc3anonymousza31725ze3z83_1390;
																}
															else
																{	/* Ieee/string.scm 1152 */
																	BgL_auxz00_7000 =
																		(
																		(long) CINT(BgL_i1z00_1388) -
																		(long) CINT(BgL_b1z00_1385));
												}}}
												return (int) (BgL_auxz00_7000);
		}}}}}}}}}}
	}



/* _string-prefix-length-ci */
	obj_t BGl__stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t
		BgL_envz00_177, obj_t BgL_optz00_176)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1160 */
			{	/* Ieee/string.scm 1160 */
				obj_t BgL_s1z00_1399;

				obj_t BgL_s2z00_1400;

				BgL_s1z00_1399 = VECTOR_REF(BgL_optz00_176, (int) (((long) 0)));
				BgL_s2z00_1400 = VECTOR_REF(BgL_optz00_176, (int) (((long) 1)));
				{	/* Ieee/string.scm 1160 */
					int BgL_aux1198z00_1402;

					BgL_aux1198z00_1402 = VECTOR_LENGTH(BgL_optz00_176);
					switch ((long) (BgL_aux1198z00_1402))
						{
						case ((long) 2):

							{	/* Ieee/string.scm 1160 */

								{	/* Ieee/string.scm 1160 */
									obj_t BgL_arg1735z00_1408;

									obj_t BgL_arg1736z00_1409;

									BgL_arg1735z00_1408 =
										VECTOR_REF(BgL_optz00_176, (int) (((long) 0)));
									BgL_arg1736z00_1409 =
										VECTOR_REF(BgL_optz00_176, (int) (((long) 1)));
									{	/* Ieee/string.scm 1160 */
										int BgL_auxz00_7039;

										{	/* Ieee/string.scm 1160 */
											obj_t BgL_auxz00_7047;

											obj_t BgL_auxz00_7040;

											if (STRINGP(BgL_arg1736z00_1409))
												{	/* Ieee/string.scm 1160 */
													BgL_auxz00_7047 = BgL_arg1736z00_1409;
												}
											else
												{
													obj_t BgL_auxz00_7050;

													BgL_auxz00_7050 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 46839)),
														BGl_string2691z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1736z00_1409);
													FAILURE(BgL_auxz00_7050, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_arg1735z00_1408))
												{	/* Ieee/string.scm 1160 */
													BgL_auxz00_7040 = BgL_arg1735z00_1408;
												}
											else
												{
													obj_t BgL_auxz00_7043;

													BgL_auxz00_7043 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 46839)),
														BGl_string2691z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1735z00_1408);
													FAILURE(BgL_auxz00_7043, BFALSE, BFALSE);
												}
											BgL_auxz00_7039 =
												BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00
												(BgL_auxz00_7040, BgL_auxz00_7047, BFALSE, BFALSE,
												BFALSE, BFALSE);
										}
										return BINT(BgL_auxz00_7039);
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Ieee/string.scm 1160 */
								obj_t BgL_start1z00_1410;

								BgL_start1z00_1410 =
									VECTOR_REF(BgL_optz00_176, (int) (((long) 2)));
								{	/* Ieee/string.scm 1160 */

									{	/* Ieee/string.scm 1160 */
										obj_t BgL_arg1738z00_1414;

										obj_t BgL_arg1739z00_1415;

										BgL_arg1738z00_1414 =
											VECTOR_REF(BgL_optz00_176, (int) (((long) 0)));
										BgL_arg1739z00_1415 =
											VECTOR_REF(BgL_optz00_176, (int) (((long) 1)));
										{	/* Ieee/string.scm 1160 */
											int BgL_auxz00_7062;

											{	/* Ieee/string.scm 1160 */
												obj_t BgL_auxz00_7070;

												obj_t BgL_auxz00_7063;

												if (STRINGP(BgL_arg1739z00_1415))
													{	/* Ieee/string.scm 1160 */
														BgL_auxz00_7070 = BgL_arg1739z00_1415;
													}
												else
													{
														obj_t BgL_auxz00_7073;

														BgL_auxz00_7073 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 46839)),
															BGl_string2691z00zz__r4_strings_6_7z00,
															BGl_string2597z00zz__r4_strings_6_7z00,
															BgL_arg1739z00_1415);
														FAILURE(BgL_auxz00_7073, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_arg1738z00_1414))
													{	/* Ieee/string.scm 1160 */
														BgL_auxz00_7063 = BgL_arg1738z00_1414;
													}
												else
													{
														obj_t BgL_auxz00_7066;

														BgL_auxz00_7066 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 46839)),
															BGl_string2691z00zz__r4_strings_6_7z00,
															BGl_string2597z00zz__r4_strings_6_7z00,
															BgL_arg1738z00_1414);
														FAILURE(BgL_auxz00_7066, BFALSE, BFALSE);
													}
												BgL_auxz00_7062 =
													BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00
													(BgL_auxz00_7063, BgL_auxz00_7070, BgL_start1z00_1410,
													BFALSE, BFALSE, BFALSE);
											}
											return BINT(BgL_auxz00_7062);
										}
									}
								}
							}
							break;
						case ((long) 4):

							{	/* Ieee/string.scm 1160 */
								obj_t BgL_start1z00_1416;

								BgL_start1z00_1416 =
									VECTOR_REF(BgL_optz00_176, (int) (((long) 2)));
								{	/* Ieee/string.scm 1160 */
									obj_t BgL_end1z00_1417;

									BgL_end1z00_1417 =
										VECTOR_REF(BgL_optz00_176, (int) (((long) 3)));
									{	/* Ieee/string.scm 1160 */

										{	/* Ieee/string.scm 1160 */
											obj_t BgL_arg1740z00_1420;

											obj_t BgL_arg1741z00_1421;

											BgL_arg1740z00_1420 =
												VECTOR_REF(BgL_optz00_176, (int) (((long) 0)));
											BgL_arg1741z00_1421 =
												VECTOR_REF(BgL_optz00_176, (int) (((long) 1)));
											{	/* Ieee/string.scm 1160 */
												int BgL_auxz00_7087;

												{	/* Ieee/string.scm 1160 */
													obj_t BgL_auxz00_7095;

													obj_t BgL_auxz00_7088;

													if (STRINGP(BgL_arg1741z00_1421))
														{	/* Ieee/string.scm 1160 */
															BgL_auxz00_7095 = BgL_arg1741z00_1421;
														}
													else
														{
															obj_t BgL_auxz00_7098;

															BgL_auxz00_7098 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2595z00zz__r4_strings_6_7z00,
																BINT(((long) 46839)),
																BGl_string2691z00zz__r4_strings_6_7z00,
																BGl_string2597z00zz__r4_strings_6_7z00,
																BgL_arg1741z00_1421);
															FAILURE(BgL_auxz00_7098, BFALSE, BFALSE);
														}
													if (STRINGP(BgL_arg1740z00_1420))
														{	/* Ieee/string.scm 1160 */
															BgL_auxz00_7088 = BgL_arg1740z00_1420;
														}
													else
														{
															obj_t BgL_auxz00_7091;

															BgL_auxz00_7091 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2595z00zz__r4_strings_6_7z00,
																BINT(((long) 46839)),
																BGl_string2691z00zz__r4_strings_6_7z00,
																BGl_string2597z00zz__r4_strings_6_7z00,
																BgL_arg1740z00_1420);
															FAILURE(BgL_auxz00_7091, BFALSE, BFALSE);
														}
													BgL_auxz00_7087 =
														BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00
														(BgL_auxz00_7088, BgL_auxz00_7095,
														BgL_start1z00_1416, BgL_end1z00_1417, BFALSE,
														BFALSE);
												}
												return BINT(BgL_auxz00_7087);
											}
										}
									}
								}
							}
							break;
						case ((long) 5):

							{	/* Ieee/string.scm 1160 */
								obj_t BgL_start1z00_1422;

								BgL_start1z00_1422 =
									VECTOR_REF(BgL_optz00_176, (int) (((long) 2)));
								{	/* Ieee/string.scm 1160 */
									obj_t BgL_end1z00_1423;

									BgL_end1z00_1423 =
										VECTOR_REF(BgL_optz00_176, (int) (((long) 3)));
									{	/* Ieee/string.scm 1160 */
										obj_t BgL_start2z00_1424;

										BgL_start2z00_1424 =
											VECTOR_REF(BgL_optz00_176, (int) (((long) 4)));
										{	/* Ieee/string.scm 1160 */

											{	/* Ieee/string.scm 1160 */
												obj_t BgL_arg1742z00_1426;

												obj_t BgL_arg1743z00_1427;

												BgL_arg1742z00_1426 =
													VECTOR_REF(BgL_optz00_176, (int) (((long) 0)));
												BgL_arg1743z00_1427 =
													VECTOR_REF(BgL_optz00_176, (int) (((long) 1)));
												{	/* Ieee/string.scm 1160 */
													int BgL_auxz00_7114;

													{	/* Ieee/string.scm 1160 */
														obj_t BgL_auxz00_7122;

														obj_t BgL_auxz00_7115;

														if (STRINGP(BgL_arg1743z00_1427))
															{	/* Ieee/string.scm 1160 */
																BgL_auxz00_7122 = BgL_arg1743z00_1427;
															}
														else
															{
																obj_t BgL_auxz00_7125;

																BgL_auxz00_7125 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2595z00zz__r4_strings_6_7z00,
																	BINT(((long) 46839)),
																	BGl_string2691z00zz__r4_strings_6_7z00,
																	BGl_string2597z00zz__r4_strings_6_7z00,
																	BgL_arg1743z00_1427);
																FAILURE(BgL_auxz00_7125, BFALSE, BFALSE);
															}
														if (STRINGP(BgL_arg1742z00_1426))
															{	/* Ieee/string.scm 1160 */
																BgL_auxz00_7115 = BgL_arg1742z00_1426;
															}
														else
															{
																obj_t BgL_auxz00_7118;

																BgL_auxz00_7118 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2595z00zz__r4_strings_6_7z00,
																	BINT(((long) 46839)),
																	BGl_string2691z00zz__r4_strings_6_7z00,
																	BGl_string2597z00zz__r4_strings_6_7z00,
																	BgL_arg1742z00_1426);
																FAILURE(BgL_auxz00_7118, BFALSE, BFALSE);
															}
														BgL_auxz00_7114 =
															BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00
															(BgL_auxz00_7115, BgL_auxz00_7122,
															BgL_start1z00_1422, BgL_end1z00_1423,
															BgL_start2z00_1424, BFALSE);
													}
													return BINT(BgL_auxz00_7114);
												}
											}
										}
									}
								}
							}
							break;
						case ((long) 6):

							{	/* Ieee/string.scm 1160 */
								obj_t BgL_start1z00_1428;

								BgL_start1z00_1428 =
									VECTOR_REF(BgL_optz00_176, (int) (((long) 2)));
								{	/* Ieee/string.scm 1160 */
									obj_t BgL_end1z00_1429;

									BgL_end1z00_1429 =
										VECTOR_REF(BgL_optz00_176, (int) (((long) 3)));
									{	/* Ieee/string.scm 1160 */
										obj_t BgL_start2z00_1430;

										BgL_start2z00_1430 =
											VECTOR_REF(BgL_optz00_176, (int) (((long) 4)));
										{	/* Ieee/string.scm 1160 */
											obj_t BgL_end2z00_1431;

											BgL_end2z00_1431 =
												VECTOR_REF(BgL_optz00_176, (int) (((long) 5)));
											{	/* Ieee/string.scm 1160 */

												{	/* Ieee/string.scm 1160 */
													obj_t BgL_arg1744z00_1432;

													obj_t BgL_arg1745z00_1433;

													BgL_arg1744z00_1432 =
														VECTOR_REF(BgL_optz00_176, (int) (((long) 0)));
													BgL_arg1745z00_1433 =
														VECTOR_REF(BgL_optz00_176, (int) (((long) 1)));
													{	/* Ieee/string.scm 1160 */
														int BgL_auxz00_7143;

														{	/* Ieee/string.scm 1160 */
															obj_t BgL_auxz00_7151;

															obj_t BgL_auxz00_7144;

															if (STRINGP(BgL_arg1745z00_1433))
																{	/* Ieee/string.scm 1160 */
																	BgL_auxz00_7151 = BgL_arg1745z00_1433;
																}
															else
																{
																	obj_t BgL_auxz00_7154;

																	BgL_auxz00_7154 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2595z00zz__r4_strings_6_7z00,
																		BINT(((long) 46839)),
																		BGl_string2691z00zz__r4_strings_6_7z00,
																		BGl_string2597z00zz__r4_strings_6_7z00,
																		BgL_arg1745z00_1433);
																	FAILURE(BgL_auxz00_7154, BFALSE, BFALSE);
																}
															if (STRINGP(BgL_arg1744z00_1432))
																{	/* Ieee/string.scm 1160 */
																	BgL_auxz00_7144 = BgL_arg1744z00_1432;
																}
															else
																{
																	obj_t BgL_auxz00_7147;

																	BgL_auxz00_7147 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2595z00zz__r4_strings_6_7z00,
																		BINT(((long) 46839)),
																		BGl_string2691z00zz__r4_strings_6_7z00,
																		BGl_string2597z00zz__r4_strings_6_7z00,
																		BgL_arg1744z00_1432);
																	FAILURE(BgL_auxz00_7147, BFALSE, BFALSE);
																}
															BgL_auxz00_7143 =
																BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00
																(BgL_auxz00_7144, BgL_auxz00_7151,
																BgL_start1z00_1428, BgL_end1z00_1429,
																BgL_start2z00_1430, BgL_end2z00_1431);
														}
														return BINT(BgL_auxz00_7143);
													}
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



/* string-prefix-length-ci */
	BGL_EXPORTED_DEF int
		BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t
		BgL_s1z00_170, obj_t BgL_s2z00_171, obj_t BgL_start1z00_172,
		obj_t BgL_end1z00_173, obj_t BgL_start2z00_174, obj_t BgL_end2z00_175)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1160 */
			{	/* Ieee/string.scm 1162 */
				long BgL_l1z00_1434;

				BgL_l1z00_1434 = STRING_LENGTH(BgL_s1z00_170);
				{	/* Ieee/string.scm 1162 */
					long BgL_l2z00_1435;

					BgL_l2z00_1435 = STRING_LENGTH(BgL_s2z00_171);
					{	/* Ieee/string.scm 1163 */
						obj_t BgL_e1z00_1436;

						{	/* Ieee/string.scm 1164 */
							obj_t BgL_procz00_3166;

							BgL_procz00_3166 = BGl_symbol2692z00zz__r4_strings_6_7z00;
							if (CBOOL(BgL_end1z00_173))
								{	/* Ieee/string.scm 1164 */
									if (((long) CINT(BgL_end1z00_173) <= ((long) 0)))
										{	/* Ieee/string.scm 1164 */
											BgL_e1z00_1436 =
												BGl_errorz00zz__errorz00(BgL_procz00_3166,
												string_append_3(BGl_string2682z00zz__r4_strings_6_7z00,
													BGl_string2683z00zz__r4_strings_6_7z00,
													BGl_string2684z00zz__r4_strings_6_7z00),
												BgL_end1z00_173);
										}
									else
										{	/* Ieee/string.scm 1164 */
											if (((long) CINT(BgL_end1z00_173) > BgL_l1z00_1434))
												{	/* Ieee/string.scm 1164 */
													BgL_e1z00_1436 =
														BGl_errorz00zz__errorz00(BgL_procz00_3166,
														string_append_3
														(BGl_string2685z00zz__r4_strings_6_7z00,
															BGl_string2683z00zz__r4_strings_6_7z00,
															BGl_string2684z00zz__r4_strings_6_7z00),
														BgL_end1z00_173);
												}
											else
												{	/* Ieee/string.scm 1164 */
													BgL_e1z00_1436 = BgL_end1z00_173;
												}
										}
								}
							else
								{	/* Ieee/string.scm 1164 */
									BgL_e1z00_1436 = BINT(BgL_l1z00_1434);
								}
						}
						{	/* Ieee/string.scm 1164 */
							obj_t BgL_e2z00_1437;

							{	/* Ieee/string.scm 1165 */
								obj_t BgL_procz00_3179;

								BgL_procz00_3179 = BGl_symbol2692z00zz__r4_strings_6_7z00;
								if (CBOOL(BgL_end2z00_175))
									{	/* Ieee/string.scm 1165 */
										if (((long) CINT(BgL_end2z00_175) <= ((long) 0)))
											{	/* Ieee/string.scm 1165 */
												BgL_e2z00_1437 =
													BGl_errorz00zz__errorz00(BgL_procz00_3179,
													string_append_3
													(BGl_string2682z00zz__r4_strings_6_7z00,
														BGl_string2686z00zz__r4_strings_6_7z00,
														BGl_string2684z00zz__r4_strings_6_7z00),
													BgL_end2z00_175);
											}
										else
											{	/* Ieee/string.scm 1165 */
												if (((long) CINT(BgL_end2z00_175) > BgL_l2z00_1435))
													{	/* Ieee/string.scm 1165 */
														BgL_e2z00_1437 =
															BGl_errorz00zz__errorz00(BgL_procz00_3179,
															string_append_3
															(BGl_string2685z00zz__r4_strings_6_7z00,
																BGl_string2686z00zz__r4_strings_6_7z00,
																BGl_string2684z00zz__r4_strings_6_7z00),
															BgL_end2z00_175);
													}
												else
													{	/* Ieee/string.scm 1165 */
														BgL_e2z00_1437 = BgL_end2z00_175;
													}
											}
									}
								else
									{	/* Ieee/string.scm 1165 */
										BgL_e2z00_1437 = BINT(BgL_l2z00_1435);
									}
							}
							{	/* Ieee/string.scm 1165 */
								obj_t BgL_b1z00_1438;

								{	/* Ieee/string.scm 1166 */
									obj_t BgL_procz00_3192;

									BgL_procz00_3192 = BGl_symbol2692z00zz__r4_strings_6_7z00;
									if (CBOOL(BgL_start1z00_172))
										{	/* Ieee/string.scm 1166 */
											if (((long) CINT(BgL_start1z00_172) < ((long) 0)))
												{	/* Ieee/string.scm 1166 */
													BgL_b1z00_1438 =
														BGl_errorz00zz__errorz00(BgL_procz00_3192,
														string_append_3
														(BGl_string2687z00zz__r4_strings_6_7z00,
															BGl_string2688z00zz__r4_strings_6_7z00,
															BGl_string2684z00zz__r4_strings_6_7z00),
														BgL_start1z00_172);
												}
											else
												{	/* Ieee/string.scm 1166 */
													if (
														((long) CINT(BgL_start1z00_172) >= BgL_l1z00_1434))
														{	/* Ieee/string.scm 1166 */
															BgL_b1z00_1438 =
																BGl_errorz00zz__errorz00(BgL_procz00_3192,
																string_append_3
																(BGl_string2689z00zz__r4_strings_6_7z00,
																	BGl_string2688z00zz__r4_strings_6_7z00,
																	BGl_string2684z00zz__r4_strings_6_7z00),
																BgL_start1z00_172);
														}
													else
														{	/* Ieee/string.scm 1166 */
															BgL_b1z00_1438 = BgL_start1z00_172;
														}
												}
										}
									else
										{	/* Ieee/string.scm 1166 */
											BgL_b1z00_1438 = BINT(((long) 0));
								}}
								{	/* Ieee/string.scm 1166 */
									obj_t BgL_b2z00_1439;

									{	/* Ieee/string.scm 1167 */
										obj_t BgL_procz00_3205;

										BgL_procz00_3205 = BGl_symbol2692z00zz__r4_strings_6_7z00;
										if (CBOOL(BgL_start2z00_174))
											{	/* Ieee/string.scm 1167 */
												if (((long) CINT(BgL_start2z00_174) < ((long) 0)))
													{	/* Ieee/string.scm 1167 */
														BgL_b2z00_1439 =
															BGl_errorz00zz__errorz00(BgL_procz00_3205,
															string_append_3
															(BGl_string2687z00zz__r4_strings_6_7z00,
																BGl_string2690z00zz__r4_strings_6_7z00,
																BGl_string2684z00zz__r4_strings_6_7z00),
															BgL_start2z00_174);
													}
												else
													{	/* Ieee/string.scm 1167 */
														if (
															((long) CINT(BgL_start2z00_174) >=
																BgL_l2z00_1435))
															{	/* Ieee/string.scm 1167 */
																BgL_b2z00_1439 =
																	BGl_errorz00zz__errorz00(BgL_procz00_3205,
																	string_append_3
																	(BGl_string2689z00zz__r4_strings_6_7z00,
																		BGl_string2690z00zz__r4_strings_6_7z00,
																		BGl_string2684z00zz__r4_strings_6_7z00),
																	BgL_start2z00_174);
															}
														else
															{	/* Ieee/string.scm 1167 */
																BgL_b2z00_1439 = BgL_start2z00_174;
															}
													}
											}
										else
											{	/* Ieee/string.scm 1167 */
												BgL_b2z00_1439 = BINT(((long) 0));
									}}
									{	/* Ieee/string.scm 1167 */

										{
											obj_t BgL_i1z00_1441;

											obj_t BgL_i2z00_1442;

											{	/* Ieee/string.scm 1168 */
												long BgL_auxz00_7216;

												BgL_i1z00_1441 = BgL_b1z00_1438;
												BgL_i2z00_1442 = BgL_b2z00_1439;
											BgL_zc3anonymousza31746ze3z83_1443:
												{	/* Ieee/string.scm 1171 */
													bool_t BgL_testz00_7217;

													if (
														((long) CINT(BgL_i1z00_1441) ==
															(long) CINT(BgL_e1z00_1436)))
														{	/* Ieee/string.scm 1171 */
															BgL_testz00_7217 = ((bool_t) 1);
														}
													else
														{	/* Ieee/string.scm 1171 */
															BgL_testz00_7217 =
																(
																(long) CINT(BgL_i2z00_1442) ==
																(long) CINT(BgL_e2z00_1437));
														}
													if (BgL_testz00_7217)
														{	/* Ieee/string.scm 1171 */
															BgL_auxz00_7216 =
																(
																(long) CINT(BgL_i1z00_1441) -
																(long) CINT(BgL_b1z00_1438));
														}
													else
														{	/* Ieee/string.scm 1171 */
															if (
																(toupper(STRING_REF(BgL_s1z00_170,
																			(long) CINT(BgL_i1z00_1441))) ==
																	toupper(STRING_REF(BgL_s2z00_171,
																			(long) CINT(BgL_i2z00_1442)))))
																{
																	obj_t BgL_i2z00_7240;

																	obj_t BgL_i1z00_7236;

																	BgL_i1z00_7236 =
																		BINT(
																		((long) CINT(BgL_i1z00_1441) + ((long) 1)));
																	BgL_i2z00_7240 =
																		BINT(
																		((long) CINT(BgL_i2z00_1442) + ((long) 1)));
																	BgL_i2z00_1442 = BgL_i2z00_7240;
																	BgL_i1z00_1441 = BgL_i1z00_7236;
																	goto BgL_zc3anonymousza31746ze3z83_1443;
																}
															else
																{	/* Ieee/string.scm 1173 */
																	BgL_auxz00_7216 =
																		(
																		(long) CINT(BgL_i1z00_1441) -
																		(long) CINT(BgL_b1z00_1438));
												}}}
												return (int) (BgL_auxz00_7216);
		}}}}}}}}}}
	}



/* _string-suffix-length */
	obj_t BGl__stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(obj_t
		BgL_envz00_185, obj_t BgL_optz00_184)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1181 */
			{	/* Ieee/string.scm 1181 */
				obj_t BgL_s1z00_1452;

				obj_t BgL_s2z00_1453;

				BgL_s1z00_1452 = VECTOR_REF(BgL_optz00_184, (int) (((long) 0)));
				BgL_s2z00_1453 = VECTOR_REF(BgL_optz00_184, (int) (((long) 1)));
				{	/* Ieee/string.scm 1181 */
					int BgL_aux1200z00_1455;

					BgL_aux1200z00_1455 = VECTOR_LENGTH(BgL_optz00_184);
					switch ((long) (BgL_aux1200z00_1455))
						{
						case ((long) 2):

							{	/* Ieee/string.scm 1181 */

								{	/* Ieee/string.scm 1181 */
									obj_t BgL_arg1756z00_1461;

									obj_t BgL_arg1757z00_1462;

									BgL_arg1756z00_1461 =
										VECTOR_REF(BgL_optz00_184, (int) (((long) 0)));
									BgL_arg1757z00_1462 =
										VECTOR_REF(BgL_optz00_184, (int) (((long) 1)));
									{	/* Ieee/string.scm 1181 */
										int BgL_auxz00_7257;

										{	/* Ieee/string.scm 1181 */
											obj_t BgL_auxz00_7265;

											obj_t BgL_auxz00_7258;

											if (STRINGP(BgL_arg1757z00_1462))
												{	/* Ieee/string.scm 1181 */
													BgL_auxz00_7265 = BgL_arg1757z00_1462;
												}
											else
												{
													obj_t BgL_auxz00_7268;

													BgL_auxz00_7268 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 47741)),
														BGl_string2694z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1757z00_1462);
													FAILURE(BgL_auxz00_7268, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_arg1756z00_1461))
												{	/* Ieee/string.scm 1181 */
													BgL_auxz00_7258 = BgL_arg1756z00_1461;
												}
											else
												{
													obj_t BgL_auxz00_7261;

													BgL_auxz00_7261 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 47741)),
														BGl_string2694z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1756z00_1461);
													FAILURE(BgL_auxz00_7261, BFALSE, BFALSE);
												}
											BgL_auxz00_7257 =
												BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00
												(BgL_auxz00_7258, BgL_auxz00_7265, BFALSE, BFALSE,
												BFALSE, BFALSE);
										}
										return BINT(BgL_auxz00_7257);
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Ieee/string.scm 1181 */
								obj_t BgL_start1z00_1463;

								BgL_start1z00_1463 =
									VECTOR_REF(BgL_optz00_184, (int) (((long) 2)));
								{	/* Ieee/string.scm 1181 */

									{	/* Ieee/string.scm 1181 */
										obj_t BgL_arg1758z00_1467;

										obj_t BgL_arg1764z00_1468;

										BgL_arg1758z00_1467 =
											VECTOR_REF(BgL_optz00_184, (int) (((long) 0)));
										BgL_arg1764z00_1468 =
											VECTOR_REF(BgL_optz00_184, (int) (((long) 1)));
										{	/* Ieee/string.scm 1181 */
											int BgL_auxz00_7280;

											{	/* Ieee/string.scm 1181 */
												obj_t BgL_auxz00_7288;

												obj_t BgL_auxz00_7281;

												if (STRINGP(BgL_arg1764z00_1468))
													{	/* Ieee/string.scm 1181 */
														BgL_auxz00_7288 = BgL_arg1764z00_1468;
													}
												else
													{
														obj_t BgL_auxz00_7291;

														BgL_auxz00_7291 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 47741)),
															BGl_string2694z00zz__r4_strings_6_7z00,
															BGl_string2597z00zz__r4_strings_6_7z00,
															BgL_arg1764z00_1468);
														FAILURE(BgL_auxz00_7291, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_arg1758z00_1467))
													{	/* Ieee/string.scm 1181 */
														BgL_auxz00_7281 = BgL_arg1758z00_1467;
													}
												else
													{
														obj_t BgL_auxz00_7284;

														BgL_auxz00_7284 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 47741)),
															BGl_string2694z00zz__r4_strings_6_7z00,
															BGl_string2597z00zz__r4_strings_6_7z00,
															BgL_arg1758z00_1467);
														FAILURE(BgL_auxz00_7284, BFALSE, BFALSE);
													}
												BgL_auxz00_7280 =
													BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00
													(BgL_auxz00_7281, BgL_auxz00_7288, BgL_start1z00_1463,
													BFALSE, BFALSE, BFALSE);
											}
											return BINT(BgL_auxz00_7280);
										}
									}
								}
							}
							break;
						case ((long) 4):

							{	/* Ieee/string.scm 1181 */
								obj_t BgL_start1z00_1469;

								BgL_start1z00_1469 =
									VECTOR_REF(BgL_optz00_184, (int) (((long) 2)));
								{	/* Ieee/string.scm 1181 */
									obj_t BgL_end1z00_1470;

									BgL_end1z00_1470 =
										VECTOR_REF(BgL_optz00_184, (int) (((long) 3)));
									{	/* Ieee/string.scm 1181 */

										{	/* Ieee/string.scm 1181 */
											obj_t BgL_arg1767z00_1473;

											obj_t BgL_arg1768z00_1474;

											BgL_arg1767z00_1473 =
												VECTOR_REF(BgL_optz00_184, (int) (((long) 0)));
											BgL_arg1768z00_1474 =
												VECTOR_REF(BgL_optz00_184, (int) (((long) 1)));
											{	/* Ieee/string.scm 1181 */
												int BgL_auxz00_7305;

												{	/* Ieee/string.scm 1181 */
													obj_t BgL_auxz00_7313;

													obj_t BgL_auxz00_7306;

													if (STRINGP(BgL_arg1768z00_1474))
														{	/* Ieee/string.scm 1181 */
															BgL_auxz00_7313 = BgL_arg1768z00_1474;
														}
													else
														{
															obj_t BgL_auxz00_7316;

															BgL_auxz00_7316 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2595z00zz__r4_strings_6_7z00,
																BINT(((long) 47741)),
																BGl_string2694z00zz__r4_strings_6_7z00,
																BGl_string2597z00zz__r4_strings_6_7z00,
																BgL_arg1768z00_1474);
															FAILURE(BgL_auxz00_7316, BFALSE, BFALSE);
														}
													if (STRINGP(BgL_arg1767z00_1473))
														{	/* Ieee/string.scm 1181 */
															BgL_auxz00_7306 = BgL_arg1767z00_1473;
														}
													else
														{
															obj_t BgL_auxz00_7309;

															BgL_auxz00_7309 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2595z00zz__r4_strings_6_7z00,
																BINT(((long) 47741)),
																BGl_string2694z00zz__r4_strings_6_7z00,
																BGl_string2597z00zz__r4_strings_6_7z00,
																BgL_arg1767z00_1473);
															FAILURE(BgL_auxz00_7309, BFALSE, BFALSE);
														}
													BgL_auxz00_7305 =
														BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00
														(BgL_auxz00_7306, BgL_auxz00_7313,
														BgL_start1z00_1469, BgL_end1z00_1470, BFALSE,
														BFALSE);
												}
												return BINT(BgL_auxz00_7305);
											}
										}
									}
								}
							}
							break;
						case ((long) 5):

							{	/* Ieee/string.scm 1181 */
								obj_t BgL_start1z00_1475;

								BgL_start1z00_1475 =
									VECTOR_REF(BgL_optz00_184, (int) (((long) 2)));
								{	/* Ieee/string.scm 1181 */
									obj_t BgL_end1z00_1476;

									BgL_end1z00_1476 =
										VECTOR_REF(BgL_optz00_184, (int) (((long) 3)));
									{	/* Ieee/string.scm 1181 */
										obj_t BgL_start2z00_1477;

										BgL_start2z00_1477 =
											VECTOR_REF(BgL_optz00_184, (int) (((long) 4)));
										{	/* Ieee/string.scm 1181 */

											{	/* Ieee/string.scm 1181 */
												obj_t BgL_arg1769z00_1479;

												obj_t BgL_arg1770z00_1480;

												BgL_arg1769z00_1479 =
													VECTOR_REF(BgL_optz00_184, (int) (((long) 0)));
												BgL_arg1770z00_1480 =
													VECTOR_REF(BgL_optz00_184, (int) (((long) 1)));
												{	/* Ieee/string.scm 1181 */
													int BgL_auxz00_7332;

													{	/* Ieee/string.scm 1181 */
														obj_t BgL_auxz00_7340;

														obj_t BgL_auxz00_7333;

														if (STRINGP(BgL_arg1770z00_1480))
															{	/* Ieee/string.scm 1181 */
																BgL_auxz00_7340 = BgL_arg1770z00_1480;
															}
														else
															{
																obj_t BgL_auxz00_7343;

																BgL_auxz00_7343 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2595z00zz__r4_strings_6_7z00,
																	BINT(((long) 47741)),
																	BGl_string2694z00zz__r4_strings_6_7z00,
																	BGl_string2597z00zz__r4_strings_6_7z00,
																	BgL_arg1770z00_1480);
																FAILURE(BgL_auxz00_7343, BFALSE, BFALSE);
															}
														if (STRINGP(BgL_arg1769z00_1479))
															{	/* Ieee/string.scm 1181 */
																BgL_auxz00_7333 = BgL_arg1769z00_1479;
															}
														else
															{
																obj_t BgL_auxz00_7336;

																BgL_auxz00_7336 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2595z00zz__r4_strings_6_7z00,
																	BINT(((long) 47741)),
																	BGl_string2694z00zz__r4_strings_6_7z00,
																	BGl_string2597z00zz__r4_strings_6_7z00,
																	BgL_arg1769z00_1479);
																FAILURE(BgL_auxz00_7336, BFALSE, BFALSE);
															}
														BgL_auxz00_7332 =
															BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00
															(BgL_auxz00_7333, BgL_auxz00_7340,
															BgL_start1z00_1475, BgL_end1z00_1476,
															BgL_start2z00_1477, BFALSE);
													}
													return BINT(BgL_auxz00_7332);
												}
											}
										}
									}
								}
							}
							break;
						case ((long) 6):

							{	/* Ieee/string.scm 1181 */
								obj_t BgL_start1z00_1481;

								BgL_start1z00_1481 =
									VECTOR_REF(BgL_optz00_184, (int) (((long) 2)));
								{	/* Ieee/string.scm 1181 */
									obj_t BgL_end1z00_1482;

									BgL_end1z00_1482 =
										VECTOR_REF(BgL_optz00_184, (int) (((long) 3)));
									{	/* Ieee/string.scm 1181 */
										obj_t BgL_start2z00_1483;

										BgL_start2z00_1483 =
											VECTOR_REF(BgL_optz00_184, (int) (((long) 4)));
										{	/* Ieee/string.scm 1181 */
											obj_t BgL_end2z00_1484;

											BgL_end2z00_1484 =
												VECTOR_REF(BgL_optz00_184, (int) (((long) 5)));
											{	/* Ieee/string.scm 1181 */

												{	/* Ieee/string.scm 1181 */
													obj_t BgL_arg1771z00_1485;

													obj_t BgL_arg1772z00_1486;

													BgL_arg1771z00_1485 =
														VECTOR_REF(BgL_optz00_184, (int) (((long) 0)));
													BgL_arg1772z00_1486 =
														VECTOR_REF(BgL_optz00_184, (int) (((long) 1)));
													{	/* Ieee/string.scm 1181 */
														int BgL_auxz00_7361;

														{	/* Ieee/string.scm 1181 */
															obj_t BgL_auxz00_7369;

															obj_t BgL_auxz00_7362;

															if (STRINGP(BgL_arg1772z00_1486))
																{	/* Ieee/string.scm 1181 */
																	BgL_auxz00_7369 = BgL_arg1772z00_1486;
																}
															else
																{
																	obj_t BgL_auxz00_7372;

																	BgL_auxz00_7372 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2595z00zz__r4_strings_6_7z00,
																		BINT(((long) 47741)),
																		BGl_string2694z00zz__r4_strings_6_7z00,
																		BGl_string2597z00zz__r4_strings_6_7z00,
																		BgL_arg1772z00_1486);
																	FAILURE(BgL_auxz00_7372, BFALSE, BFALSE);
																}
															if (STRINGP(BgL_arg1771z00_1485))
																{	/* Ieee/string.scm 1181 */
																	BgL_auxz00_7362 = BgL_arg1771z00_1485;
																}
															else
																{
																	obj_t BgL_auxz00_7365;

																	BgL_auxz00_7365 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2595z00zz__r4_strings_6_7z00,
																		BINT(((long) 47741)),
																		BGl_string2694z00zz__r4_strings_6_7z00,
																		BGl_string2597z00zz__r4_strings_6_7z00,
																		BgL_arg1771z00_1485);
																	FAILURE(BgL_auxz00_7365, BFALSE, BFALSE);
																}
															BgL_auxz00_7361 =
																BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00
																(BgL_auxz00_7362, BgL_auxz00_7369,
																BgL_start1z00_1481, BgL_end1z00_1482,
																BgL_start2z00_1483, BgL_end2z00_1484);
														}
														return BINT(BgL_auxz00_7361);
													}
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



/* string-suffix-length */
	BGL_EXPORTED_DEF int
		BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(obj_t BgL_s1z00_178,
		obj_t BgL_s2z00_179, obj_t BgL_start1z00_180, obj_t BgL_end1z00_181,
		obj_t BgL_start2z00_182, obj_t BgL_end2z00_183)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1181 */
			{	/* Ieee/string.scm 1183 */
				long BgL_l1z00_1487;

				BgL_l1z00_1487 = STRING_LENGTH(BgL_s1z00_178);
				{	/* Ieee/string.scm 1183 */
					long BgL_l2z00_1488;

					BgL_l2z00_1488 = STRING_LENGTH(BgL_s2z00_179);
					{	/* Ieee/string.scm 1184 */
						obj_t BgL_b1z00_1489;

						{	/* Ieee/string.scm 1185 */
							obj_t BgL_procz00_3245;

							BgL_procz00_3245 = BGl_symbol2695z00zz__r4_strings_6_7z00;
							if (CBOOL(BgL_end1z00_181))
								{	/* Ieee/string.scm 1185 */
									if (((long) CINT(BgL_end1z00_181) <= ((long) 0)))
										{	/* Ieee/string.scm 1185 */
											BgL_b1z00_1489 =
												BGl_errorz00zz__errorz00(BgL_procz00_3245,
												string_append_3(BGl_string2682z00zz__r4_strings_6_7z00,
													BGl_string2683z00zz__r4_strings_6_7z00,
													BGl_string2684z00zz__r4_strings_6_7z00),
												BgL_end1z00_181);
										}
									else
										{	/* Ieee/string.scm 1185 */
											if (((long) CINT(BgL_end1z00_181) > BgL_l1z00_1487))
												{	/* Ieee/string.scm 1185 */
													BgL_b1z00_1489 =
														BGl_errorz00zz__errorz00(BgL_procz00_3245,
														string_append_3
														(BGl_string2685z00zz__r4_strings_6_7z00,
															BGl_string2683z00zz__r4_strings_6_7z00,
															BGl_string2684z00zz__r4_strings_6_7z00),
														BgL_end1z00_181);
												}
											else
												{	/* Ieee/string.scm 1185 */
													BgL_b1z00_1489 = BgL_end1z00_181;
												}
										}
								}
							else
								{	/* Ieee/string.scm 1185 */
									BgL_b1z00_1489 = BINT(BgL_l1z00_1487);
								}
						}
						{	/* Ieee/string.scm 1185 */
							obj_t BgL_b2z00_1490;

							{	/* Ieee/string.scm 1186 */
								obj_t BgL_procz00_3258;

								BgL_procz00_3258 = BGl_symbol2695z00zz__r4_strings_6_7z00;
								if (CBOOL(BgL_end2z00_183))
									{	/* Ieee/string.scm 1186 */
										if (((long) CINT(BgL_end2z00_183) <= ((long) 0)))
											{	/* Ieee/string.scm 1186 */
												BgL_b2z00_1490 =
													BGl_errorz00zz__errorz00(BgL_procz00_3258,
													string_append_3
													(BGl_string2682z00zz__r4_strings_6_7z00,
														BGl_string2686z00zz__r4_strings_6_7z00,
														BGl_string2684z00zz__r4_strings_6_7z00),
													BgL_end2z00_183);
											}
										else
											{	/* Ieee/string.scm 1186 */
												if (((long) CINT(BgL_end2z00_183) > BgL_l2z00_1488))
													{	/* Ieee/string.scm 1186 */
														BgL_b2z00_1490 =
															BGl_errorz00zz__errorz00(BgL_procz00_3258,
															string_append_3
															(BGl_string2685z00zz__r4_strings_6_7z00,
																BGl_string2686z00zz__r4_strings_6_7z00,
																BGl_string2684z00zz__r4_strings_6_7z00),
															BgL_end2z00_183);
													}
												else
													{	/* Ieee/string.scm 1186 */
														BgL_b2z00_1490 = BgL_end2z00_183;
													}
											}
									}
								else
									{	/* Ieee/string.scm 1186 */
										BgL_b2z00_1490 = BINT(BgL_l2z00_1488);
									}
							}
							{	/* Ieee/string.scm 1186 */
								obj_t BgL_e1z00_1491;

								{	/* Ieee/string.scm 1187 */
									obj_t BgL_procz00_3271;

									BgL_procz00_3271 = BGl_symbol2695z00zz__r4_strings_6_7z00;
									if (CBOOL(BgL_start1z00_180))
										{	/* Ieee/string.scm 1187 */
											if (((long) CINT(BgL_start1z00_180) < ((long) 0)))
												{	/* Ieee/string.scm 1187 */
													BgL_e1z00_1491 =
														BGl_errorz00zz__errorz00(BgL_procz00_3271,
														string_append_3
														(BGl_string2687z00zz__r4_strings_6_7z00,
															BGl_string2688z00zz__r4_strings_6_7z00,
															BGl_string2684z00zz__r4_strings_6_7z00),
														BgL_start1z00_180);
												}
											else
												{	/* Ieee/string.scm 1187 */
													if (
														((long) CINT(BgL_start1z00_180) >= BgL_l1z00_1487))
														{	/* Ieee/string.scm 1187 */
															BgL_e1z00_1491 =
																BGl_errorz00zz__errorz00(BgL_procz00_3271,
																string_append_3
																(BGl_string2689z00zz__r4_strings_6_7z00,
																	BGl_string2688z00zz__r4_strings_6_7z00,
																	BGl_string2684z00zz__r4_strings_6_7z00),
																BgL_start1z00_180);
														}
													else
														{	/* Ieee/string.scm 1187 */
															BgL_e1z00_1491 = BgL_start1z00_180;
														}
												}
										}
									else
										{	/* Ieee/string.scm 1187 */
											BgL_e1z00_1491 = BINT(((long) 0));
								}}
								{	/* Ieee/string.scm 1187 */
									obj_t BgL_e2z00_1492;

									{	/* Ieee/string.scm 1188 */
										obj_t BgL_procz00_3284;

										BgL_procz00_3284 = BGl_symbol2695z00zz__r4_strings_6_7z00;
										if (CBOOL(BgL_start2z00_182))
											{	/* Ieee/string.scm 1188 */
												if (((long) CINT(BgL_start2z00_182) < ((long) 0)))
													{	/* Ieee/string.scm 1188 */
														BgL_e2z00_1492 =
															BGl_errorz00zz__errorz00(BgL_procz00_3284,
															string_append_3
															(BGl_string2687z00zz__r4_strings_6_7z00,
																BGl_string2690z00zz__r4_strings_6_7z00,
																BGl_string2684z00zz__r4_strings_6_7z00),
															BgL_start2z00_182);
													}
												else
													{	/* Ieee/string.scm 1188 */
														if (
															((long) CINT(BgL_start2z00_182) >=
																BgL_l2z00_1488))
															{	/* Ieee/string.scm 1188 */
																BgL_e2z00_1492 =
																	BGl_errorz00zz__errorz00(BgL_procz00_3284,
																	string_append_3
																	(BGl_string2689z00zz__r4_strings_6_7z00,
																		BGl_string2690z00zz__r4_strings_6_7z00,
																		BGl_string2684z00zz__r4_strings_6_7z00),
																	BgL_start2z00_182);
															}
														else
															{	/* Ieee/string.scm 1188 */
																BgL_e2z00_1492 = BgL_start2z00_182;
															}
													}
											}
										else
											{	/* Ieee/string.scm 1188 */
												BgL_e2z00_1492 = BINT(((long) 0));
									}}
									{	/* Ieee/string.scm 1188 */

										{
											long BgL_i1z00_1496;

											long BgL_i2z00_1497;

											{	/* Ieee/string.scm 1189 */
												long BgL_auxz00_7434;

												BgL_i1z00_1496 =
													((long) CINT(BgL_b1z00_1489) - ((long) 1));
												BgL_i2z00_1497 =
													((long) CINT(BgL_b2z00_1490) - ((long) 1));
											BgL_zc3anonymousza31773ze3z83_1498:
												{	/* Ieee/string.scm 1192 */
													bool_t BgL_testz00_7435;

													if ((BgL_i1z00_1496 < (long) CINT(BgL_e1z00_1491)))
														{	/* Ieee/string.scm 1192 */
															BgL_testz00_7435 = ((bool_t) 1);
														}
													else
														{	/* Ieee/string.scm 1192 */
															BgL_testz00_7435 =
																(BgL_i2z00_1497 < (long) CINT(BgL_e2z00_1492));
														}
													if (BgL_testz00_7435)
														{	/* Ieee/string.scm 1192 */
															BgL_auxz00_7434 =
																(
																(long) CINT(BgL_b1z00_1489) -
																(BgL_i1z00_1496 + ((long) 1)));
														}
													else
														{	/* Ieee/string.scm 1192 */
															if (
																(STRING_REF(BgL_s1z00_178, BgL_i1z00_1496) ==
																	STRING_REF(BgL_s2z00_179, BgL_i2z00_1497)))
																{
																	long BgL_i2z00_7450;

																	long BgL_i1z00_7448;

																	BgL_i1z00_7448 =
																		(BgL_i1z00_1496 - ((long) 1));
																	BgL_i2z00_7450 =
																		(BgL_i2z00_1497 - ((long) 1));
																	BgL_i2z00_1497 = BgL_i2z00_7450;
																	BgL_i1z00_1496 = BgL_i1z00_7448;
																	goto BgL_zc3anonymousza31773ze3z83_1498;
																}
															else
																{	/* Ieee/string.scm 1194 */
																	BgL_auxz00_7434 =
																		(
																		(long) CINT(BgL_b1z00_1489) -
																		(BgL_i1z00_1496 + ((long) 1)));
												}}}
												return (int) (BgL_auxz00_7434);
		}}}}}}}}}}
	}



/* _string-suffix-length-ci */
	obj_t BGl__stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t
		BgL_envz00_193, obj_t BgL_optz00_192)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1202 */
			{	/* Ieee/string.scm 1202 */
				obj_t BgL_s1z00_1509;

				obj_t BgL_s2z00_1510;

				BgL_s1z00_1509 = VECTOR_REF(BgL_optz00_192, (int) (((long) 0)));
				BgL_s2z00_1510 = VECTOR_REF(BgL_optz00_192, (int) (((long) 1)));
				{	/* Ieee/string.scm 1202 */
					int BgL_aux1202z00_1512;

					BgL_aux1202z00_1512 = VECTOR_LENGTH(BgL_optz00_192);
					switch ((long) (BgL_aux1202z00_1512))
						{
						case ((long) 2):

							{	/* Ieee/string.scm 1202 */

								{	/* Ieee/string.scm 1202 */
									obj_t BgL_arg1786z00_1518;

									obj_t BgL_arg1787z00_1519;

									BgL_arg1786z00_1518 =
										VECTOR_REF(BgL_optz00_192, (int) (((long) 0)));
									BgL_arg1787z00_1519 =
										VECTOR_REF(BgL_optz00_192, (int) (((long) 1)));
									{	/* Ieee/string.scm 1202 */
										int BgL_auxz00_7469;

										{	/* Ieee/string.scm 1202 */
											obj_t BgL_auxz00_7477;

											obj_t BgL_auxz00_7470;

											if (STRINGP(BgL_arg1787z00_1519))
												{	/* Ieee/string.scm 1202 */
													BgL_auxz00_7477 = BgL_arg1787z00_1519;
												}
											else
												{
													obj_t BgL_auxz00_7480;

													BgL_auxz00_7480 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 48652)),
														BGl_string2697z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1787z00_1519);
													FAILURE(BgL_auxz00_7480, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_arg1786z00_1518))
												{	/* Ieee/string.scm 1202 */
													BgL_auxz00_7470 = BgL_arg1786z00_1518;
												}
											else
												{
													obj_t BgL_auxz00_7473;

													BgL_auxz00_7473 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 48652)),
														BGl_string2697z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1786z00_1518);
													FAILURE(BgL_auxz00_7473, BFALSE, BFALSE);
												}
											BgL_auxz00_7469 =
												BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00
												(BgL_auxz00_7470, BgL_auxz00_7477, BFALSE, BFALSE,
												BFALSE, BFALSE);
										}
										return BINT(BgL_auxz00_7469);
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Ieee/string.scm 1202 */
								obj_t BgL_start1z00_1520;

								BgL_start1z00_1520 =
									VECTOR_REF(BgL_optz00_192, (int) (((long) 2)));
								{	/* Ieee/string.scm 1202 */

									{	/* Ieee/string.scm 1202 */
										obj_t BgL_arg1789z00_1524;

										obj_t BgL_arg1790z00_1525;

										BgL_arg1789z00_1524 =
											VECTOR_REF(BgL_optz00_192, (int) (((long) 0)));
										BgL_arg1790z00_1525 =
											VECTOR_REF(BgL_optz00_192, (int) (((long) 1)));
										{	/* Ieee/string.scm 1202 */
											int BgL_auxz00_7492;

											{	/* Ieee/string.scm 1202 */
												obj_t BgL_auxz00_7500;

												obj_t BgL_auxz00_7493;

												if (STRINGP(BgL_arg1790z00_1525))
													{	/* Ieee/string.scm 1202 */
														BgL_auxz00_7500 = BgL_arg1790z00_1525;
													}
												else
													{
														obj_t BgL_auxz00_7503;

														BgL_auxz00_7503 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 48652)),
															BGl_string2697z00zz__r4_strings_6_7z00,
															BGl_string2597z00zz__r4_strings_6_7z00,
															BgL_arg1790z00_1525);
														FAILURE(BgL_auxz00_7503, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_arg1789z00_1524))
													{	/* Ieee/string.scm 1202 */
														BgL_auxz00_7493 = BgL_arg1789z00_1524;
													}
												else
													{
														obj_t BgL_auxz00_7496;

														BgL_auxz00_7496 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 48652)),
															BGl_string2697z00zz__r4_strings_6_7z00,
															BGl_string2597z00zz__r4_strings_6_7z00,
															BgL_arg1789z00_1524);
														FAILURE(BgL_auxz00_7496, BFALSE, BFALSE);
													}
												BgL_auxz00_7492 =
													BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00
													(BgL_auxz00_7493, BgL_auxz00_7500, BgL_start1z00_1520,
													BFALSE, BFALSE, BFALSE);
											}
											return BINT(BgL_auxz00_7492);
										}
									}
								}
							}
							break;
						case ((long) 4):

							{	/* Ieee/string.scm 1202 */
								obj_t BgL_start1z00_1526;

								BgL_start1z00_1526 =
									VECTOR_REF(BgL_optz00_192, (int) (((long) 2)));
								{	/* Ieee/string.scm 1202 */
									obj_t BgL_end1z00_1527;

									BgL_end1z00_1527 =
										VECTOR_REF(BgL_optz00_192, (int) (((long) 3)));
									{	/* Ieee/string.scm 1202 */

										{	/* Ieee/string.scm 1202 */
											obj_t BgL_arg1791z00_1530;

											obj_t BgL_arg1792z00_1531;

											BgL_arg1791z00_1530 =
												VECTOR_REF(BgL_optz00_192, (int) (((long) 0)));
											BgL_arg1792z00_1531 =
												VECTOR_REF(BgL_optz00_192, (int) (((long) 1)));
											{	/* Ieee/string.scm 1202 */
												int BgL_auxz00_7517;

												{	/* Ieee/string.scm 1202 */
													obj_t BgL_auxz00_7525;

													obj_t BgL_auxz00_7518;

													if (STRINGP(BgL_arg1792z00_1531))
														{	/* Ieee/string.scm 1202 */
															BgL_auxz00_7525 = BgL_arg1792z00_1531;
														}
													else
														{
															obj_t BgL_auxz00_7528;

															BgL_auxz00_7528 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2595z00zz__r4_strings_6_7z00,
																BINT(((long) 48652)),
																BGl_string2697z00zz__r4_strings_6_7z00,
																BGl_string2597z00zz__r4_strings_6_7z00,
																BgL_arg1792z00_1531);
															FAILURE(BgL_auxz00_7528, BFALSE, BFALSE);
														}
													if (STRINGP(BgL_arg1791z00_1530))
														{	/* Ieee/string.scm 1202 */
															BgL_auxz00_7518 = BgL_arg1791z00_1530;
														}
													else
														{
															obj_t BgL_auxz00_7521;

															BgL_auxz00_7521 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2595z00zz__r4_strings_6_7z00,
																BINT(((long) 48652)),
																BGl_string2697z00zz__r4_strings_6_7z00,
																BGl_string2597z00zz__r4_strings_6_7z00,
																BgL_arg1791z00_1530);
															FAILURE(BgL_auxz00_7521, BFALSE, BFALSE);
														}
													BgL_auxz00_7517 =
														BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00
														(BgL_auxz00_7518, BgL_auxz00_7525,
														BgL_start1z00_1526, BgL_end1z00_1527, BFALSE,
														BFALSE);
												}
												return BINT(BgL_auxz00_7517);
											}
										}
									}
								}
							}
							break;
						case ((long) 5):

							{	/* Ieee/string.scm 1202 */
								obj_t BgL_start1z00_1532;

								BgL_start1z00_1532 =
									VECTOR_REF(BgL_optz00_192, (int) (((long) 2)));
								{	/* Ieee/string.scm 1202 */
									obj_t BgL_end1z00_1533;

									BgL_end1z00_1533 =
										VECTOR_REF(BgL_optz00_192, (int) (((long) 3)));
									{	/* Ieee/string.scm 1202 */
										obj_t BgL_start2z00_1534;

										BgL_start2z00_1534 =
											VECTOR_REF(BgL_optz00_192, (int) (((long) 4)));
										{	/* Ieee/string.scm 1202 */

											{	/* Ieee/string.scm 1202 */
												obj_t BgL_arg1793z00_1536;

												obj_t BgL_arg1794z00_1537;

												BgL_arg1793z00_1536 =
													VECTOR_REF(BgL_optz00_192, (int) (((long) 0)));
												BgL_arg1794z00_1537 =
													VECTOR_REF(BgL_optz00_192, (int) (((long) 1)));
												{	/* Ieee/string.scm 1202 */
													int BgL_auxz00_7544;

													{	/* Ieee/string.scm 1202 */
														obj_t BgL_auxz00_7552;

														obj_t BgL_auxz00_7545;

														if (STRINGP(BgL_arg1794z00_1537))
															{	/* Ieee/string.scm 1202 */
																BgL_auxz00_7552 = BgL_arg1794z00_1537;
															}
														else
															{
																obj_t BgL_auxz00_7555;

																BgL_auxz00_7555 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2595z00zz__r4_strings_6_7z00,
																	BINT(((long) 48652)),
																	BGl_string2697z00zz__r4_strings_6_7z00,
																	BGl_string2597z00zz__r4_strings_6_7z00,
																	BgL_arg1794z00_1537);
																FAILURE(BgL_auxz00_7555, BFALSE, BFALSE);
															}
														if (STRINGP(BgL_arg1793z00_1536))
															{	/* Ieee/string.scm 1202 */
																BgL_auxz00_7545 = BgL_arg1793z00_1536;
															}
														else
															{
																obj_t BgL_auxz00_7548;

																BgL_auxz00_7548 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2595z00zz__r4_strings_6_7z00,
																	BINT(((long) 48652)),
																	BGl_string2697z00zz__r4_strings_6_7z00,
																	BGl_string2597z00zz__r4_strings_6_7z00,
																	BgL_arg1793z00_1536);
																FAILURE(BgL_auxz00_7548, BFALSE, BFALSE);
															}
														BgL_auxz00_7544 =
															BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00
															(BgL_auxz00_7545, BgL_auxz00_7552,
															BgL_start1z00_1532, BgL_end1z00_1533,
															BgL_start2z00_1534, BFALSE);
													}
													return BINT(BgL_auxz00_7544);
												}
											}
										}
									}
								}
							}
							break;
						case ((long) 6):

							{	/* Ieee/string.scm 1202 */
								obj_t BgL_start1z00_1538;

								BgL_start1z00_1538 =
									VECTOR_REF(BgL_optz00_192, (int) (((long) 2)));
								{	/* Ieee/string.scm 1202 */
									obj_t BgL_end1z00_1539;

									BgL_end1z00_1539 =
										VECTOR_REF(BgL_optz00_192, (int) (((long) 3)));
									{	/* Ieee/string.scm 1202 */
										obj_t BgL_start2z00_1540;

										BgL_start2z00_1540 =
											VECTOR_REF(BgL_optz00_192, (int) (((long) 4)));
										{	/* Ieee/string.scm 1202 */
											obj_t BgL_end2z00_1541;

											BgL_end2z00_1541 =
												VECTOR_REF(BgL_optz00_192, (int) (((long) 5)));
											{	/* Ieee/string.scm 1202 */

												{	/* Ieee/string.scm 1202 */
													obj_t BgL_arg1795z00_1542;

													obj_t BgL_arg1796z00_1543;

													BgL_arg1795z00_1542 =
														VECTOR_REF(BgL_optz00_192, (int) (((long) 0)));
													BgL_arg1796z00_1543 =
														VECTOR_REF(BgL_optz00_192, (int) (((long) 1)));
													{	/* Ieee/string.scm 1202 */
														int BgL_auxz00_7573;

														{	/* Ieee/string.scm 1202 */
															obj_t BgL_auxz00_7581;

															obj_t BgL_auxz00_7574;

															if (STRINGP(BgL_arg1796z00_1543))
																{	/* Ieee/string.scm 1202 */
																	BgL_auxz00_7581 = BgL_arg1796z00_1543;
																}
															else
																{
																	obj_t BgL_auxz00_7584;

																	BgL_auxz00_7584 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2595z00zz__r4_strings_6_7z00,
																		BINT(((long) 48652)),
																		BGl_string2697z00zz__r4_strings_6_7z00,
																		BGl_string2597z00zz__r4_strings_6_7z00,
																		BgL_arg1796z00_1543);
																	FAILURE(BgL_auxz00_7584, BFALSE, BFALSE);
																}
															if (STRINGP(BgL_arg1795z00_1542))
																{	/* Ieee/string.scm 1202 */
																	BgL_auxz00_7574 = BgL_arg1795z00_1542;
																}
															else
																{
																	obj_t BgL_auxz00_7577;

																	BgL_auxz00_7577 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2595z00zz__r4_strings_6_7z00,
																		BINT(((long) 48652)),
																		BGl_string2697z00zz__r4_strings_6_7z00,
																		BGl_string2597z00zz__r4_strings_6_7z00,
																		BgL_arg1795z00_1542);
																	FAILURE(BgL_auxz00_7577, BFALSE, BFALSE);
																}
															BgL_auxz00_7573 =
																BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00
																(BgL_auxz00_7574, BgL_auxz00_7581,
																BgL_start1z00_1538, BgL_end1z00_1539,
																BgL_start2z00_1540, BgL_end2z00_1541);
														}
														return BINT(BgL_auxz00_7573);
													}
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



/* string-suffix-length-ci */
	BGL_EXPORTED_DEF int
		BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t
		BgL_s1z00_186, obj_t BgL_s2z00_187, obj_t BgL_start1z00_188,
		obj_t BgL_end1z00_189, obj_t BgL_start2z00_190, obj_t BgL_end2z00_191)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1202 */
			{	/* Ieee/string.scm 1204 */
				long BgL_l1z00_1544;

				BgL_l1z00_1544 = STRING_LENGTH(BgL_s1z00_186);
				{	/* Ieee/string.scm 1204 */
					long BgL_l2z00_1545;

					BgL_l2z00_1545 = STRING_LENGTH(BgL_s2z00_187);
					{	/* Ieee/string.scm 1205 */
						obj_t BgL_b1z00_1546;

						{	/* Ieee/string.scm 1206 */
							obj_t BgL_procz00_3325;

							BgL_procz00_3325 = BGl_symbol2698z00zz__r4_strings_6_7z00;
							if (CBOOL(BgL_end1z00_189))
								{	/* Ieee/string.scm 1206 */
									if (((long) CINT(BgL_end1z00_189) <= ((long) 0)))
										{	/* Ieee/string.scm 1206 */
											BgL_b1z00_1546 =
												BGl_errorz00zz__errorz00(BgL_procz00_3325,
												string_append_3(BGl_string2682z00zz__r4_strings_6_7z00,
													BGl_string2683z00zz__r4_strings_6_7z00,
													BGl_string2684z00zz__r4_strings_6_7z00),
												BgL_end1z00_189);
										}
									else
										{	/* Ieee/string.scm 1206 */
											if (((long) CINT(BgL_end1z00_189) > BgL_l1z00_1544))
												{	/* Ieee/string.scm 1206 */
													BgL_b1z00_1546 =
														BGl_errorz00zz__errorz00(BgL_procz00_3325,
														string_append_3
														(BGl_string2685z00zz__r4_strings_6_7z00,
															BGl_string2683z00zz__r4_strings_6_7z00,
															BGl_string2684z00zz__r4_strings_6_7z00),
														BgL_end1z00_189);
												}
											else
												{	/* Ieee/string.scm 1206 */
													BgL_b1z00_1546 = BgL_end1z00_189;
												}
										}
								}
							else
								{	/* Ieee/string.scm 1206 */
									BgL_b1z00_1546 = BINT(BgL_l1z00_1544);
								}
						}
						{	/* Ieee/string.scm 1206 */
							obj_t BgL_b2z00_1547;

							{	/* Ieee/string.scm 1207 */
								obj_t BgL_procz00_3338;

								BgL_procz00_3338 = BGl_symbol2698z00zz__r4_strings_6_7z00;
								if (CBOOL(BgL_end2z00_191))
									{	/* Ieee/string.scm 1207 */
										if (((long) CINT(BgL_end2z00_191) <= ((long) 0)))
											{	/* Ieee/string.scm 1207 */
												BgL_b2z00_1547 =
													BGl_errorz00zz__errorz00(BgL_procz00_3338,
													string_append_3
													(BGl_string2682z00zz__r4_strings_6_7z00,
														BGl_string2686z00zz__r4_strings_6_7z00,
														BGl_string2684z00zz__r4_strings_6_7z00),
													BgL_end2z00_191);
											}
										else
											{	/* Ieee/string.scm 1207 */
												if (((long) CINT(BgL_end2z00_191) > BgL_l2z00_1545))
													{	/* Ieee/string.scm 1207 */
														BgL_b2z00_1547 =
															BGl_errorz00zz__errorz00(BgL_procz00_3338,
															string_append_3
															(BGl_string2685z00zz__r4_strings_6_7z00,
																BGl_string2686z00zz__r4_strings_6_7z00,
																BGl_string2684z00zz__r4_strings_6_7z00),
															BgL_end2z00_191);
													}
												else
													{	/* Ieee/string.scm 1207 */
														BgL_b2z00_1547 = BgL_end2z00_191;
													}
											}
									}
								else
									{	/* Ieee/string.scm 1207 */
										BgL_b2z00_1547 = BINT(BgL_l2z00_1545);
									}
							}
							{	/* Ieee/string.scm 1207 */
								obj_t BgL_e1z00_1548;

								{	/* Ieee/string.scm 1208 */
									obj_t BgL_procz00_3351;

									BgL_procz00_3351 = BGl_symbol2698z00zz__r4_strings_6_7z00;
									if (CBOOL(BgL_start1z00_188))
										{	/* Ieee/string.scm 1208 */
											if (((long) CINT(BgL_start1z00_188) < ((long) 0)))
												{	/* Ieee/string.scm 1208 */
													BgL_e1z00_1548 =
														BGl_errorz00zz__errorz00(BgL_procz00_3351,
														string_append_3
														(BGl_string2687z00zz__r4_strings_6_7z00,
															BGl_string2688z00zz__r4_strings_6_7z00,
															BGl_string2684z00zz__r4_strings_6_7z00),
														BgL_start1z00_188);
												}
											else
												{	/* Ieee/string.scm 1208 */
													if (
														((long) CINT(BgL_start1z00_188) >= BgL_l1z00_1544))
														{	/* Ieee/string.scm 1208 */
															BgL_e1z00_1548 =
																BGl_errorz00zz__errorz00(BgL_procz00_3351,
																string_append_3
																(BGl_string2689z00zz__r4_strings_6_7z00,
																	BGl_string2688z00zz__r4_strings_6_7z00,
																	BGl_string2684z00zz__r4_strings_6_7z00),
																BgL_start1z00_188);
														}
													else
														{	/* Ieee/string.scm 1208 */
															BgL_e1z00_1548 = BgL_start1z00_188;
														}
												}
										}
									else
										{	/* Ieee/string.scm 1208 */
											BgL_e1z00_1548 = BINT(((long) 0));
								}}
								{	/* Ieee/string.scm 1208 */
									obj_t BgL_e2z00_1549;

									{	/* Ieee/string.scm 1209 */
										obj_t BgL_procz00_3364;

										BgL_procz00_3364 = BGl_symbol2698z00zz__r4_strings_6_7z00;
										if (CBOOL(BgL_start2z00_190))
											{	/* Ieee/string.scm 1209 */
												if (((long) CINT(BgL_start2z00_190) < ((long) 0)))
													{	/* Ieee/string.scm 1209 */
														BgL_e2z00_1549 =
															BGl_errorz00zz__errorz00(BgL_procz00_3364,
															string_append_3
															(BGl_string2687z00zz__r4_strings_6_7z00,
																BGl_string2690z00zz__r4_strings_6_7z00,
																BGl_string2684z00zz__r4_strings_6_7z00),
															BgL_start2z00_190);
													}
												else
													{	/* Ieee/string.scm 1209 */
														if (
															((long) CINT(BgL_start2z00_190) >=
																BgL_l2z00_1545))
															{	/* Ieee/string.scm 1209 */
																BgL_e2z00_1549 =
																	BGl_errorz00zz__errorz00(BgL_procz00_3364,
																	string_append_3
																	(BGl_string2689z00zz__r4_strings_6_7z00,
																		BGl_string2690z00zz__r4_strings_6_7z00,
																		BGl_string2684z00zz__r4_strings_6_7z00),
																	BgL_start2z00_190);
															}
														else
															{	/* Ieee/string.scm 1209 */
																BgL_e2z00_1549 = BgL_start2z00_190;
															}
													}
											}
										else
											{	/* Ieee/string.scm 1209 */
												BgL_e2z00_1549 = BINT(((long) 0));
									}}
									{	/* Ieee/string.scm 1209 */

										{
											long BgL_i1z00_1553;

											long BgL_i2z00_1554;

											{	/* Ieee/string.scm 1210 */
												long BgL_auxz00_7646;

												BgL_i1z00_1553 =
													((long) CINT(BgL_b1z00_1546) - ((long) 1));
												BgL_i2z00_1554 =
													((long) CINT(BgL_b2z00_1547) - ((long) 1));
											BgL_zc3anonymousza31797ze3z83_1555:
												{	/* Ieee/string.scm 1213 */
													bool_t BgL_testz00_7647;

													if ((BgL_i1z00_1553 < (long) CINT(BgL_e1z00_1548)))
														{	/* Ieee/string.scm 1213 */
															BgL_testz00_7647 = ((bool_t) 1);
														}
													else
														{	/* Ieee/string.scm 1213 */
															BgL_testz00_7647 =
																(BgL_i2z00_1554 < (long) CINT(BgL_e2z00_1549));
														}
													if (BgL_testz00_7647)
														{	/* Ieee/string.scm 1213 */
															BgL_auxz00_7646 =
																(
																(long) CINT(BgL_b1z00_1546) -
																(BgL_i1z00_1553 + ((long) 1)));
														}
													else
														{	/* Ieee/string.scm 1213 */
															if (
																(toupper(STRING_REF(BgL_s1z00_186,
																			BgL_i1z00_1553)) ==
																	toupper(STRING_REF(BgL_s2z00_187,
																			BgL_i2z00_1554))))
																{
																	long BgL_i2z00_7664;

																	long BgL_i1z00_7662;

																	BgL_i1z00_7662 =
																		(BgL_i1z00_1553 - ((long) 1));
																	BgL_i2z00_7664 =
																		(BgL_i2z00_1554 - ((long) 1));
																	BgL_i2z00_1554 = BgL_i2z00_7664;
																	BgL_i1z00_1553 = BgL_i1z00_7662;
																	goto BgL_zc3anonymousza31797ze3z83_1555;
																}
															else
																{	/* Ieee/string.scm 1215 */
																	BgL_auxz00_7646 =
																		(
																		(long) CINT(BgL_b1z00_1546) -
																		(BgL_i1z00_1553 + ((long) 1)));
												}}}
												return (int) (BgL_auxz00_7646);
		}}}}}}}}}}
	}



/* _string-prefix? */
	obj_t BGl__stringzd2prefixzf3z21zz__r4_strings_6_7z00(obj_t BgL_envz00_201,
		obj_t BgL_optz00_200)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1223 */
			{	/* Ieee/string.scm 1223 */
				obj_t BgL_s1z00_1566;

				obj_t BgL_s2z00_1567;

				BgL_s1z00_1566 = VECTOR_REF(BgL_optz00_200, (int) (((long) 0)));
				BgL_s2z00_1567 = VECTOR_REF(BgL_optz00_200, (int) (((long) 1)));
				{	/* Ieee/string.scm 1223 */
					int BgL_aux1204z00_1569;

					BgL_aux1204z00_1569 = VECTOR_LENGTH(BgL_optz00_200);
					switch ((long) (BgL_aux1204z00_1569))
						{
						case ((long) 2):

							{	/* Ieee/string.scm 1223 */

								{	/* Ieee/string.scm 1223 */
									obj_t BgL_arg1809z00_1575;

									obj_t BgL_arg1810z00_1576;

									BgL_arg1809z00_1575 =
										VECTOR_REF(BgL_optz00_200, (int) (((long) 0)));
									BgL_arg1810z00_1576 =
										VECTOR_REF(BgL_optz00_200, (int) (((long) 1)));
									{	/* Ieee/string.scm 1223 */
										bool_t BgL_auxz00_7683;

										{	/* Ieee/string.scm 1223 */
											obj_t BgL_auxz00_7691;

											obj_t BgL_auxz00_7684;

											if (STRINGP(BgL_arg1810z00_1576))
												{	/* Ieee/string.scm 1223 */
													BgL_auxz00_7691 = BgL_arg1810z00_1576;
												}
											else
												{
													obj_t BgL_auxz00_7694;

													BgL_auxz00_7694 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 49584)),
														BGl_string2700z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1810z00_1576);
													FAILURE(BgL_auxz00_7694, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_arg1809z00_1575))
												{	/* Ieee/string.scm 1223 */
													BgL_auxz00_7684 = BgL_arg1809z00_1575;
												}
											else
												{
													obj_t BgL_auxz00_7687;

													BgL_auxz00_7687 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 49584)),
														BGl_string2700z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1809z00_1575);
													FAILURE(BgL_auxz00_7687, BFALSE, BFALSE);
												}
											BgL_auxz00_7683 =
												BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00
												(BgL_auxz00_7684, BgL_auxz00_7691, BFALSE, BFALSE,
												BFALSE, BFALSE);
										}
										return BBOOL(BgL_auxz00_7683);
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Ieee/string.scm 1223 */
								obj_t BgL_start1z00_1577;

								BgL_start1z00_1577 =
									VECTOR_REF(BgL_optz00_200, (int) (((long) 2)));
								{	/* Ieee/string.scm 1223 */

									{	/* Ieee/string.scm 1223 */
										obj_t BgL_arg1811z00_1581;

										obj_t BgL_arg1812z00_1582;

										BgL_arg1811z00_1581 =
											VECTOR_REF(BgL_optz00_200, (int) (((long) 0)));
										BgL_arg1812z00_1582 =
											VECTOR_REF(BgL_optz00_200, (int) (((long) 1)));
										{	/* Ieee/string.scm 1223 */
											bool_t BgL_auxz00_7706;

											{	/* Ieee/string.scm 1223 */
												obj_t BgL_auxz00_7714;

												obj_t BgL_auxz00_7707;

												if (STRINGP(BgL_arg1812z00_1582))
													{	/* Ieee/string.scm 1223 */
														BgL_auxz00_7714 = BgL_arg1812z00_1582;
													}
												else
													{
														obj_t BgL_auxz00_7717;

														BgL_auxz00_7717 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 49584)),
															BGl_string2700z00zz__r4_strings_6_7z00,
															BGl_string2597z00zz__r4_strings_6_7z00,
															BgL_arg1812z00_1582);
														FAILURE(BgL_auxz00_7717, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_arg1811z00_1581))
													{	/* Ieee/string.scm 1223 */
														BgL_auxz00_7707 = BgL_arg1811z00_1581;
													}
												else
													{
														obj_t BgL_auxz00_7710;

														BgL_auxz00_7710 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 49584)),
															BGl_string2700z00zz__r4_strings_6_7z00,
															BGl_string2597z00zz__r4_strings_6_7z00,
															BgL_arg1811z00_1581);
														FAILURE(BgL_auxz00_7710, BFALSE, BFALSE);
													}
												BgL_auxz00_7706 =
													BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00
													(BgL_auxz00_7707, BgL_auxz00_7714, BgL_start1z00_1577,
													BFALSE, BFALSE, BFALSE);
											}
											return BBOOL(BgL_auxz00_7706);
										}
									}
								}
							}
							break;
						case ((long) 4):

							{	/* Ieee/string.scm 1223 */
								obj_t BgL_start1z00_1583;

								BgL_start1z00_1583 =
									VECTOR_REF(BgL_optz00_200, (int) (((long) 2)));
								{	/* Ieee/string.scm 1223 */
									obj_t BgL_end1z00_1584;

									BgL_end1z00_1584 =
										VECTOR_REF(BgL_optz00_200, (int) (((long) 3)));
									{	/* Ieee/string.scm 1223 */

										{	/* Ieee/string.scm 1223 */
											obj_t BgL_arg1813z00_1587;

											obj_t BgL_arg1815z00_1588;

											BgL_arg1813z00_1587 =
												VECTOR_REF(BgL_optz00_200, (int) (((long) 0)));
											BgL_arg1815z00_1588 =
												VECTOR_REF(BgL_optz00_200, (int) (((long) 1)));
											{	/* Ieee/string.scm 1223 */
												bool_t BgL_auxz00_7731;

												{	/* Ieee/string.scm 1223 */
													obj_t BgL_auxz00_7739;

													obj_t BgL_auxz00_7732;

													if (STRINGP(BgL_arg1815z00_1588))
														{	/* Ieee/string.scm 1223 */
															BgL_auxz00_7739 = BgL_arg1815z00_1588;
														}
													else
														{
															obj_t BgL_auxz00_7742;

															BgL_auxz00_7742 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2595z00zz__r4_strings_6_7z00,
																BINT(((long) 49584)),
																BGl_string2700z00zz__r4_strings_6_7z00,
																BGl_string2597z00zz__r4_strings_6_7z00,
																BgL_arg1815z00_1588);
															FAILURE(BgL_auxz00_7742, BFALSE, BFALSE);
														}
													if (STRINGP(BgL_arg1813z00_1587))
														{	/* Ieee/string.scm 1223 */
															BgL_auxz00_7732 = BgL_arg1813z00_1587;
														}
													else
														{
															obj_t BgL_auxz00_7735;

															BgL_auxz00_7735 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2595z00zz__r4_strings_6_7z00,
																BINT(((long) 49584)),
																BGl_string2700z00zz__r4_strings_6_7z00,
																BGl_string2597z00zz__r4_strings_6_7z00,
																BgL_arg1813z00_1587);
															FAILURE(BgL_auxz00_7735, BFALSE, BFALSE);
														}
													BgL_auxz00_7731 =
														BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00
														(BgL_auxz00_7732, BgL_auxz00_7739,
														BgL_start1z00_1583, BgL_end1z00_1584, BFALSE,
														BFALSE);
												}
												return BBOOL(BgL_auxz00_7731);
											}
										}
									}
								}
							}
							break;
						case ((long) 5):

							{	/* Ieee/string.scm 1223 */
								obj_t BgL_start1z00_1589;

								BgL_start1z00_1589 =
									VECTOR_REF(BgL_optz00_200, (int) (((long) 2)));
								{	/* Ieee/string.scm 1223 */
									obj_t BgL_end1z00_1590;

									BgL_end1z00_1590 =
										VECTOR_REF(BgL_optz00_200, (int) (((long) 3)));
									{	/* Ieee/string.scm 1223 */
										obj_t BgL_start2z00_1591;

										BgL_start2z00_1591 =
											VECTOR_REF(BgL_optz00_200, (int) (((long) 4)));
										{	/* Ieee/string.scm 1223 */

											{	/* Ieee/string.scm 1223 */
												obj_t BgL_arg1816z00_1593;

												obj_t BgL_arg1817z00_1594;

												BgL_arg1816z00_1593 =
													VECTOR_REF(BgL_optz00_200, (int) (((long) 0)));
												BgL_arg1817z00_1594 =
													VECTOR_REF(BgL_optz00_200, (int) (((long) 1)));
												{	/* Ieee/string.scm 1223 */
													bool_t BgL_auxz00_7758;

													{	/* Ieee/string.scm 1223 */
														obj_t BgL_auxz00_7766;

														obj_t BgL_auxz00_7759;

														if (STRINGP(BgL_arg1817z00_1594))
															{	/* Ieee/string.scm 1223 */
																BgL_auxz00_7766 = BgL_arg1817z00_1594;
															}
														else
															{
																obj_t BgL_auxz00_7769;

																BgL_auxz00_7769 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2595z00zz__r4_strings_6_7z00,
																	BINT(((long) 49584)),
																	BGl_string2700z00zz__r4_strings_6_7z00,
																	BGl_string2597z00zz__r4_strings_6_7z00,
																	BgL_arg1817z00_1594);
																FAILURE(BgL_auxz00_7769, BFALSE, BFALSE);
															}
														if (STRINGP(BgL_arg1816z00_1593))
															{	/* Ieee/string.scm 1223 */
																BgL_auxz00_7759 = BgL_arg1816z00_1593;
															}
														else
															{
																obj_t BgL_auxz00_7762;

																BgL_auxz00_7762 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2595z00zz__r4_strings_6_7z00,
																	BINT(((long) 49584)),
																	BGl_string2700z00zz__r4_strings_6_7z00,
																	BGl_string2597z00zz__r4_strings_6_7z00,
																	BgL_arg1816z00_1593);
																FAILURE(BgL_auxz00_7762, BFALSE, BFALSE);
															}
														BgL_auxz00_7758 =
															BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00
															(BgL_auxz00_7759, BgL_auxz00_7766,
															BgL_start1z00_1589, BgL_end1z00_1590,
															BgL_start2z00_1591, BFALSE);
													}
													return BBOOL(BgL_auxz00_7758);
												}
											}
										}
									}
								}
							}
							break;
						case ((long) 6):

							{	/* Ieee/string.scm 1223 */
								obj_t BgL_start1z00_1595;

								BgL_start1z00_1595 =
									VECTOR_REF(BgL_optz00_200, (int) (((long) 2)));
								{	/* Ieee/string.scm 1223 */
									obj_t BgL_end1z00_1596;

									BgL_end1z00_1596 =
										VECTOR_REF(BgL_optz00_200, (int) (((long) 3)));
									{	/* Ieee/string.scm 1223 */
										obj_t BgL_start2z00_1597;

										BgL_start2z00_1597 =
											VECTOR_REF(BgL_optz00_200, (int) (((long) 4)));
										{	/* Ieee/string.scm 1223 */
											obj_t BgL_end2z00_1598;

											BgL_end2z00_1598 =
												VECTOR_REF(BgL_optz00_200, (int) (((long) 5)));
											{	/* Ieee/string.scm 1223 */

												{	/* Ieee/string.scm 1223 */
													obj_t BgL_arg1818z00_1599;

													obj_t BgL_arg1819z00_1600;

													BgL_arg1818z00_1599 =
														VECTOR_REF(BgL_optz00_200, (int) (((long) 0)));
													BgL_arg1819z00_1600 =
														VECTOR_REF(BgL_optz00_200, (int) (((long) 1)));
													{	/* Ieee/string.scm 1223 */
														bool_t BgL_auxz00_7787;

														{	/* Ieee/string.scm 1223 */
															obj_t BgL_auxz00_7795;

															obj_t BgL_auxz00_7788;

															if (STRINGP(BgL_arg1819z00_1600))
																{	/* Ieee/string.scm 1223 */
																	BgL_auxz00_7795 = BgL_arg1819z00_1600;
																}
															else
																{
																	obj_t BgL_auxz00_7798;

																	BgL_auxz00_7798 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2595z00zz__r4_strings_6_7z00,
																		BINT(((long) 49584)),
																		BGl_string2700z00zz__r4_strings_6_7z00,
																		BGl_string2597z00zz__r4_strings_6_7z00,
																		BgL_arg1819z00_1600);
																	FAILURE(BgL_auxz00_7798, BFALSE, BFALSE);
																}
															if (STRINGP(BgL_arg1818z00_1599))
																{	/* Ieee/string.scm 1223 */
																	BgL_auxz00_7788 = BgL_arg1818z00_1599;
																}
															else
																{
																	obj_t BgL_auxz00_7791;

																	BgL_auxz00_7791 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2595z00zz__r4_strings_6_7z00,
																		BINT(((long) 49584)),
																		BGl_string2700z00zz__r4_strings_6_7z00,
																		BGl_string2597z00zz__r4_strings_6_7z00,
																		BgL_arg1818z00_1599);
																	FAILURE(BgL_auxz00_7791, BFALSE, BFALSE);
																}
															BgL_auxz00_7787 =
																BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00
																(BgL_auxz00_7788, BgL_auxz00_7795,
																BgL_start1z00_1595, BgL_end1z00_1596,
																BgL_start2z00_1597, BgL_end2z00_1598);
														}
														return BBOOL(BgL_auxz00_7787);
													}
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



/* string-prefix? */
	BGL_EXPORTED_DEF bool_t BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(obj_t
		BgL_s1z00_194, obj_t BgL_s2z00_195, obj_t BgL_start1z00_196,
		obj_t BgL_end1z00_197, obj_t BgL_start2z00_198, obj_t BgL_end2z00_199)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1223 */
			{	/* Ieee/string.scm 1225 */
				long BgL_l1z00_1601;

				BgL_l1z00_1601 = STRING_LENGTH(BgL_s1z00_194);
				{	/* Ieee/string.scm 1225 */
					long BgL_l2z00_1602;

					BgL_l2z00_1602 = STRING_LENGTH(BgL_s2z00_195);
					{	/* Ieee/string.scm 1226 */
						obj_t BgL_e1z00_1603;

						{	/* Ieee/string.scm 1227 */
							obj_t BgL_procz00_3412;

							BgL_procz00_3412 = BGl_symbol2701z00zz__r4_strings_6_7z00;
							if (CBOOL(BgL_end1z00_197))
								{	/* Ieee/string.scm 1227 */
									if (((long) CINT(BgL_end1z00_197) <= ((long) 0)))
										{	/* Ieee/string.scm 1227 */
											BgL_e1z00_1603 =
												BGl_errorz00zz__errorz00(BgL_procz00_3412,
												string_append_3(BGl_string2682z00zz__r4_strings_6_7z00,
													BGl_string2683z00zz__r4_strings_6_7z00,
													BGl_string2684z00zz__r4_strings_6_7z00),
												BgL_end1z00_197);
										}
									else
										{	/* Ieee/string.scm 1227 */
											if (((long) CINT(BgL_end1z00_197) > BgL_l1z00_1601))
												{	/* Ieee/string.scm 1227 */
													BgL_e1z00_1603 =
														BGl_errorz00zz__errorz00(BgL_procz00_3412,
														string_append_3
														(BGl_string2685z00zz__r4_strings_6_7z00,
															BGl_string2683z00zz__r4_strings_6_7z00,
															BGl_string2684z00zz__r4_strings_6_7z00),
														BgL_end1z00_197);
												}
											else
												{	/* Ieee/string.scm 1227 */
													BgL_e1z00_1603 = BgL_end1z00_197;
												}
										}
								}
							else
								{	/* Ieee/string.scm 1227 */
									BgL_e1z00_1603 = BINT(BgL_l1z00_1601);
								}
						}
						{	/* Ieee/string.scm 1227 */
							obj_t BgL_e2z00_1604;

							{	/* Ieee/string.scm 1228 */
								obj_t BgL_procz00_3425;

								BgL_procz00_3425 = BGl_symbol2701z00zz__r4_strings_6_7z00;
								if (CBOOL(BgL_end2z00_199))
									{	/* Ieee/string.scm 1228 */
										if (((long) CINT(BgL_end2z00_199) <= ((long) 0)))
											{	/* Ieee/string.scm 1228 */
												BgL_e2z00_1604 =
													BGl_errorz00zz__errorz00(BgL_procz00_3425,
													string_append_3
													(BGl_string2682z00zz__r4_strings_6_7z00,
														BGl_string2686z00zz__r4_strings_6_7z00,
														BGl_string2684z00zz__r4_strings_6_7z00),
													BgL_end2z00_199);
											}
										else
											{	/* Ieee/string.scm 1228 */
												if (((long) CINT(BgL_end2z00_199) > BgL_l2z00_1602))
													{	/* Ieee/string.scm 1228 */
														BgL_e2z00_1604 =
															BGl_errorz00zz__errorz00(BgL_procz00_3425,
															string_append_3
															(BGl_string2685z00zz__r4_strings_6_7z00,
																BGl_string2686z00zz__r4_strings_6_7z00,
																BGl_string2684z00zz__r4_strings_6_7z00),
															BgL_end2z00_199);
													}
												else
													{	/* Ieee/string.scm 1228 */
														BgL_e2z00_1604 = BgL_end2z00_199;
													}
											}
									}
								else
									{	/* Ieee/string.scm 1228 */
										BgL_e2z00_1604 = BINT(BgL_l2z00_1602);
									}
							}
							{	/* Ieee/string.scm 1228 */
								obj_t BgL_b1z00_1605;

								{	/* Ieee/string.scm 1229 */
									obj_t BgL_procz00_3438;

									BgL_procz00_3438 = BGl_symbol2701z00zz__r4_strings_6_7z00;
									if (CBOOL(BgL_start1z00_196))
										{	/* Ieee/string.scm 1229 */
											if (((long) CINT(BgL_start1z00_196) < ((long) 0)))
												{	/* Ieee/string.scm 1229 */
													BgL_b1z00_1605 =
														BGl_errorz00zz__errorz00(BgL_procz00_3438,
														string_append_3
														(BGl_string2687z00zz__r4_strings_6_7z00,
															BGl_string2688z00zz__r4_strings_6_7z00,
															BGl_string2684z00zz__r4_strings_6_7z00),
														BgL_start1z00_196);
												}
											else
												{	/* Ieee/string.scm 1229 */
													if (
														((long) CINT(BgL_start1z00_196) >= BgL_l1z00_1601))
														{	/* Ieee/string.scm 1229 */
															BgL_b1z00_1605 =
																BGl_errorz00zz__errorz00(BgL_procz00_3438,
																string_append_3
																(BGl_string2689z00zz__r4_strings_6_7z00,
																	BGl_string2688z00zz__r4_strings_6_7z00,
																	BGl_string2684z00zz__r4_strings_6_7z00),
																BgL_start1z00_196);
														}
													else
														{	/* Ieee/string.scm 1229 */
															BgL_b1z00_1605 = BgL_start1z00_196;
														}
												}
										}
									else
										{	/* Ieee/string.scm 1229 */
											BgL_b1z00_1605 = BINT(((long) 0));
								}}
								{	/* Ieee/string.scm 1229 */
									obj_t BgL_b2z00_1606;

									{	/* Ieee/string.scm 1230 */
										obj_t BgL_procz00_3451;

										BgL_procz00_3451 = BGl_symbol2701z00zz__r4_strings_6_7z00;
										if (CBOOL(BgL_start2z00_198))
											{	/* Ieee/string.scm 1230 */
												if (((long) CINT(BgL_start2z00_198) < ((long) 0)))
													{	/* Ieee/string.scm 1230 */
														BgL_b2z00_1606 =
															BGl_errorz00zz__errorz00(BgL_procz00_3451,
															string_append_3
															(BGl_string2687z00zz__r4_strings_6_7z00,
																BGl_string2690z00zz__r4_strings_6_7z00,
																BGl_string2684z00zz__r4_strings_6_7z00),
															BgL_start2z00_198);
													}
												else
													{	/* Ieee/string.scm 1230 */
														if (
															((long) CINT(BgL_start2z00_198) >=
																BgL_l2z00_1602))
															{	/* Ieee/string.scm 1230 */
																BgL_b2z00_1606 =
																	BGl_errorz00zz__errorz00(BgL_procz00_3451,
																	string_append_3
																	(BGl_string2689z00zz__r4_strings_6_7z00,
																		BGl_string2690z00zz__r4_strings_6_7z00,
																		BGl_string2684z00zz__r4_strings_6_7z00),
																	BgL_start2z00_198);
															}
														else
															{	/* Ieee/string.scm 1230 */
																BgL_b2z00_1606 = BgL_start2z00_198;
															}
													}
											}
										else
											{	/* Ieee/string.scm 1230 */
												BgL_b2z00_1606 = BINT(((long) 0));
									}}
									{	/* Ieee/string.scm 1230 */

										{
											obj_t BgL_i1z00_1608;

											obj_t BgL_i2z00_1609;

											BgL_i1z00_1608 = BgL_b1z00_1605;
											BgL_i2z00_1609 = BgL_b2z00_1606;
										BgL_zc3anonymousza31820ze3z83_1610:
											if (
												((long) CINT(BgL_i1z00_1608) ==
													(long) CINT(BgL_e1z00_1603)))
												{	/* Ieee/string.scm 1234 */
													return ((bool_t) 1);
												}
											else
												{	/* Ieee/string.scm 1234 */
													if (
														((long) CINT(BgL_i2z00_1609) ==
															(long) CINT(BgL_e2z00_1604)))
														{	/* Ieee/string.scm 1236 */
															return ((bool_t) 0);
														}
													else
														{	/* Ieee/string.scm 1236 */
															if (
																(STRING_REF(BgL_s1z00_194,
																		(long) CINT(BgL_i1z00_1608)) ==
																	STRING_REF(BgL_s2z00_195,
																		(long) CINT(BgL_i2z00_1609))))
																{
																	obj_t BgL_i2z00_7878;

																	obj_t BgL_i1z00_7874;

																	BgL_i1z00_7874 =
																		BINT(
																		((long) CINT(BgL_i1z00_1608) + ((long) 1)));
																	BgL_i2z00_7878 =
																		BINT(
																		((long) CINT(BgL_i2z00_1609) + ((long) 1)));
																	BgL_i2z00_1609 = BgL_i2z00_7878;
																	BgL_i1z00_1608 = BgL_i1z00_7874;
																	goto BgL_zc3anonymousza31820ze3z83_1610;
																}
															else
																{	/* Ieee/string.scm 1238 */
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



/* _string-prefix-ci? */
	obj_t BGl__stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t
		BgL_envz00_209, obj_t BgL_optz00_208)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1246 */
			{	/* Ieee/string.scm 1246 */
				obj_t BgL_s1z00_1619;

				obj_t BgL_s2z00_1620;

				BgL_s1z00_1619 = VECTOR_REF(BgL_optz00_208, (int) (((long) 0)));
				BgL_s2z00_1620 = VECTOR_REF(BgL_optz00_208, (int) (((long) 1)));
				{	/* Ieee/string.scm 1246 */
					int BgL_aux1206z00_1622;

					BgL_aux1206z00_1622 = VECTOR_LENGTH(BgL_optz00_208);
					switch ((long) (BgL_aux1206z00_1622))
						{
						case ((long) 2):

							{	/* Ieee/string.scm 1246 */

								{	/* Ieee/string.scm 1246 */
									obj_t BgL_arg1829z00_1628;

									obj_t BgL_arg1830z00_1629;

									BgL_arg1829z00_1628 =
										VECTOR_REF(BgL_optz00_208, (int) (((long) 0)));
									BgL_arg1830z00_1629 =
										VECTOR_REF(BgL_optz00_208, (int) (((long) 1)));
									{	/* Ieee/string.scm 1246 */
										bool_t BgL_auxz00_7891;

										{	/* Ieee/string.scm 1246 */
											obj_t BgL_auxz00_7899;

											obj_t BgL_auxz00_7892;

											if (STRINGP(BgL_arg1830z00_1629))
												{	/* Ieee/string.scm 1246 */
													BgL_auxz00_7899 = BgL_arg1830z00_1629;
												}
											else
												{
													obj_t BgL_auxz00_7902;

													BgL_auxz00_7902 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 50429)),
														BGl_string2703z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1830z00_1629);
													FAILURE(BgL_auxz00_7902, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_arg1829z00_1628))
												{	/* Ieee/string.scm 1246 */
													BgL_auxz00_7892 = BgL_arg1829z00_1628;
												}
											else
												{
													obj_t BgL_auxz00_7895;

													BgL_auxz00_7895 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 50429)),
														BGl_string2703z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1829z00_1628);
													FAILURE(BgL_auxz00_7895, BFALSE, BFALSE);
												}
											BgL_auxz00_7891 =
												BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00
												(BgL_auxz00_7892, BgL_auxz00_7899, BFALSE, BFALSE,
												BFALSE, BFALSE);
										}
										return BBOOL(BgL_auxz00_7891);
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Ieee/string.scm 1246 */
								obj_t BgL_start1z00_1630;

								BgL_start1z00_1630 =
									VECTOR_REF(BgL_optz00_208, (int) (((long) 2)));
								{	/* Ieee/string.scm 1246 */

									{	/* Ieee/string.scm 1246 */
										obj_t BgL_arg1831z00_1634;

										obj_t BgL_arg1832z00_1635;

										BgL_arg1831z00_1634 =
											VECTOR_REF(BgL_optz00_208, (int) (((long) 0)));
										BgL_arg1832z00_1635 =
											VECTOR_REF(BgL_optz00_208, (int) (((long) 1)));
										{	/* Ieee/string.scm 1246 */
											bool_t BgL_auxz00_7914;

											{	/* Ieee/string.scm 1246 */
												obj_t BgL_auxz00_7922;

												obj_t BgL_auxz00_7915;

												if (STRINGP(BgL_arg1832z00_1635))
													{	/* Ieee/string.scm 1246 */
														BgL_auxz00_7922 = BgL_arg1832z00_1635;
													}
												else
													{
														obj_t BgL_auxz00_7925;

														BgL_auxz00_7925 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 50429)),
															BGl_string2703z00zz__r4_strings_6_7z00,
															BGl_string2597z00zz__r4_strings_6_7z00,
															BgL_arg1832z00_1635);
														FAILURE(BgL_auxz00_7925, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_arg1831z00_1634))
													{	/* Ieee/string.scm 1246 */
														BgL_auxz00_7915 = BgL_arg1831z00_1634;
													}
												else
													{
														obj_t BgL_auxz00_7918;

														BgL_auxz00_7918 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 50429)),
															BGl_string2703z00zz__r4_strings_6_7z00,
															BGl_string2597z00zz__r4_strings_6_7z00,
															BgL_arg1831z00_1634);
														FAILURE(BgL_auxz00_7918, BFALSE, BFALSE);
													}
												BgL_auxz00_7914 =
													BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00
													(BgL_auxz00_7915, BgL_auxz00_7922, BgL_start1z00_1630,
													BFALSE, BFALSE, BFALSE);
											}
											return BBOOL(BgL_auxz00_7914);
										}
									}
								}
							}
							break;
						case ((long) 4):

							{	/* Ieee/string.scm 1246 */
								obj_t BgL_start1z00_1636;

								BgL_start1z00_1636 =
									VECTOR_REF(BgL_optz00_208, (int) (((long) 2)));
								{	/* Ieee/string.scm 1246 */
									obj_t BgL_end1z00_1637;

									BgL_end1z00_1637 =
										VECTOR_REF(BgL_optz00_208, (int) (((long) 3)));
									{	/* Ieee/string.scm 1246 */

										{	/* Ieee/string.scm 1246 */
											obj_t BgL_arg1834z00_1640;

											obj_t BgL_arg1835z00_1641;

											BgL_arg1834z00_1640 =
												VECTOR_REF(BgL_optz00_208, (int) (((long) 0)));
											BgL_arg1835z00_1641 =
												VECTOR_REF(BgL_optz00_208, (int) (((long) 1)));
											{	/* Ieee/string.scm 1246 */
												bool_t BgL_auxz00_7939;

												{	/* Ieee/string.scm 1246 */
													obj_t BgL_auxz00_7947;

													obj_t BgL_auxz00_7940;

													if (STRINGP(BgL_arg1835z00_1641))
														{	/* Ieee/string.scm 1246 */
															BgL_auxz00_7947 = BgL_arg1835z00_1641;
														}
													else
														{
															obj_t BgL_auxz00_7950;

															BgL_auxz00_7950 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2595z00zz__r4_strings_6_7z00,
																BINT(((long) 50429)),
																BGl_string2703z00zz__r4_strings_6_7z00,
																BGl_string2597z00zz__r4_strings_6_7z00,
																BgL_arg1835z00_1641);
															FAILURE(BgL_auxz00_7950, BFALSE, BFALSE);
														}
													if (STRINGP(BgL_arg1834z00_1640))
														{	/* Ieee/string.scm 1246 */
															BgL_auxz00_7940 = BgL_arg1834z00_1640;
														}
													else
														{
															obj_t BgL_auxz00_7943;

															BgL_auxz00_7943 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2595z00zz__r4_strings_6_7z00,
																BINT(((long) 50429)),
																BGl_string2703z00zz__r4_strings_6_7z00,
																BGl_string2597z00zz__r4_strings_6_7z00,
																BgL_arg1834z00_1640);
															FAILURE(BgL_auxz00_7943, BFALSE, BFALSE);
														}
													BgL_auxz00_7939 =
														BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00
														(BgL_auxz00_7940, BgL_auxz00_7947,
														BgL_start1z00_1636, BgL_end1z00_1637, BFALSE,
														BFALSE);
												}
												return BBOOL(BgL_auxz00_7939);
											}
										}
									}
								}
							}
							break;
						case ((long) 5):

							{	/* Ieee/string.scm 1246 */
								obj_t BgL_start1z00_1642;

								BgL_start1z00_1642 =
									VECTOR_REF(BgL_optz00_208, (int) (((long) 2)));
								{	/* Ieee/string.scm 1246 */
									obj_t BgL_end1z00_1643;

									BgL_end1z00_1643 =
										VECTOR_REF(BgL_optz00_208, (int) (((long) 3)));
									{	/* Ieee/string.scm 1246 */
										obj_t BgL_start2z00_1644;

										BgL_start2z00_1644 =
											VECTOR_REF(BgL_optz00_208, (int) (((long) 4)));
										{	/* Ieee/string.scm 1246 */

											{	/* Ieee/string.scm 1246 */
												obj_t BgL_arg1836z00_1646;

												obj_t BgL_arg1837z00_1647;

												BgL_arg1836z00_1646 =
													VECTOR_REF(BgL_optz00_208, (int) (((long) 0)));
												BgL_arg1837z00_1647 =
													VECTOR_REF(BgL_optz00_208, (int) (((long) 1)));
												{	/* Ieee/string.scm 1246 */
													bool_t BgL_auxz00_7966;

													{	/* Ieee/string.scm 1246 */
														obj_t BgL_auxz00_7974;

														obj_t BgL_auxz00_7967;

														if (STRINGP(BgL_arg1837z00_1647))
															{	/* Ieee/string.scm 1246 */
																BgL_auxz00_7974 = BgL_arg1837z00_1647;
															}
														else
															{
																obj_t BgL_auxz00_7977;

																BgL_auxz00_7977 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2595z00zz__r4_strings_6_7z00,
																	BINT(((long) 50429)),
																	BGl_string2703z00zz__r4_strings_6_7z00,
																	BGl_string2597z00zz__r4_strings_6_7z00,
																	BgL_arg1837z00_1647);
																FAILURE(BgL_auxz00_7977, BFALSE, BFALSE);
															}
														if (STRINGP(BgL_arg1836z00_1646))
															{	/* Ieee/string.scm 1246 */
																BgL_auxz00_7967 = BgL_arg1836z00_1646;
															}
														else
															{
																obj_t BgL_auxz00_7970;

																BgL_auxz00_7970 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2595z00zz__r4_strings_6_7z00,
																	BINT(((long) 50429)),
																	BGl_string2703z00zz__r4_strings_6_7z00,
																	BGl_string2597z00zz__r4_strings_6_7z00,
																	BgL_arg1836z00_1646);
																FAILURE(BgL_auxz00_7970, BFALSE, BFALSE);
															}
														BgL_auxz00_7966 =
															BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00
															(BgL_auxz00_7967, BgL_auxz00_7974,
															BgL_start1z00_1642, BgL_end1z00_1643,
															BgL_start2z00_1644, BFALSE);
													}
													return BBOOL(BgL_auxz00_7966);
												}
											}
										}
									}
								}
							}
							break;
						case ((long) 6):

							{	/* Ieee/string.scm 1246 */
								obj_t BgL_start1z00_1648;

								BgL_start1z00_1648 =
									VECTOR_REF(BgL_optz00_208, (int) (((long) 2)));
								{	/* Ieee/string.scm 1246 */
									obj_t BgL_end1z00_1649;

									BgL_end1z00_1649 =
										VECTOR_REF(BgL_optz00_208, (int) (((long) 3)));
									{	/* Ieee/string.scm 1246 */
										obj_t BgL_start2z00_1650;

										BgL_start2z00_1650 =
											VECTOR_REF(BgL_optz00_208, (int) (((long) 4)));
										{	/* Ieee/string.scm 1246 */
											obj_t BgL_end2z00_1651;

											BgL_end2z00_1651 =
												VECTOR_REF(BgL_optz00_208, (int) (((long) 5)));
											{	/* Ieee/string.scm 1246 */

												{	/* Ieee/string.scm 1246 */
													obj_t BgL_arg1839z00_1652;

													obj_t BgL_arg1840z00_1653;

													BgL_arg1839z00_1652 =
														VECTOR_REF(BgL_optz00_208, (int) (((long) 0)));
													BgL_arg1840z00_1653 =
														VECTOR_REF(BgL_optz00_208, (int) (((long) 1)));
													{	/* Ieee/string.scm 1246 */
														bool_t BgL_auxz00_7995;

														{	/* Ieee/string.scm 1246 */
															obj_t BgL_auxz00_8003;

															obj_t BgL_auxz00_7996;

															if (STRINGP(BgL_arg1840z00_1653))
																{	/* Ieee/string.scm 1246 */
																	BgL_auxz00_8003 = BgL_arg1840z00_1653;
																}
															else
																{
																	obj_t BgL_auxz00_8006;

																	BgL_auxz00_8006 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2595z00zz__r4_strings_6_7z00,
																		BINT(((long) 50429)),
																		BGl_string2703z00zz__r4_strings_6_7z00,
																		BGl_string2597z00zz__r4_strings_6_7z00,
																		BgL_arg1840z00_1653);
																	FAILURE(BgL_auxz00_8006, BFALSE, BFALSE);
																}
															if (STRINGP(BgL_arg1839z00_1652))
																{	/* Ieee/string.scm 1246 */
																	BgL_auxz00_7996 = BgL_arg1839z00_1652;
																}
															else
																{
																	obj_t BgL_auxz00_7999;

																	BgL_auxz00_7999 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2595z00zz__r4_strings_6_7z00,
																		BINT(((long) 50429)),
																		BGl_string2703z00zz__r4_strings_6_7z00,
																		BGl_string2597z00zz__r4_strings_6_7z00,
																		BgL_arg1839z00_1652);
																	FAILURE(BgL_auxz00_7999, BFALSE, BFALSE);
																}
															BgL_auxz00_7995 =
																BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00
																(BgL_auxz00_7996, BgL_auxz00_8003,
																BgL_start1z00_1648, BgL_end1z00_1649,
																BgL_start2z00_1650, BgL_end2z00_1651);
														}
														return BBOOL(BgL_auxz00_7995);
													}
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



/* string-prefix-ci? */
	BGL_EXPORTED_DEF bool_t
		BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t BgL_s1z00_202,
		obj_t BgL_s2z00_203, obj_t BgL_start1z00_204, obj_t BgL_end1z00_205,
		obj_t BgL_start2z00_206, obj_t BgL_end2z00_207)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1246 */
			{	/* Ieee/string.scm 1248 */
				long BgL_l1z00_1654;

				BgL_l1z00_1654 = STRING_LENGTH(BgL_s1z00_202);
				{	/* Ieee/string.scm 1248 */
					long BgL_l2z00_1655;

					BgL_l2z00_1655 = STRING_LENGTH(BgL_s2z00_203);
					{	/* Ieee/string.scm 1249 */
						obj_t BgL_e1z00_1656;

						{	/* Ieee/string.scm 1250 */
							obj_t BgL_procz00_3480;

							BgL_procz00_3480 = BGl_symbol2704z00zz__r4_strings_6_7z00;
							if (CBOOL(BgL_end1z00_205))
								{	/* Ieee/string.scm 1250 */
									if (((long) CINT(BgL_end1z00_205) <= ((long) 0)))
										{	/* Ieee/string.scm 1250 */
											BgL_e1z00_1656 =
												BGl_errorz00zz__errorz00(BgL_procz00_3480,
												string_append_3(BGl_string2682z00zz__r4_strings_6_7z00,
													BGl_string2683z00zz__r4_strings_6_7z00,
													BGl_string2684z00zz__r4_strings_6_7z00),
												BgL_end1z00_205);
										}
									else
										{	/* Ieee/string.scm 1250 */
											if (((long) CINT(BgL_end1z00_205) > BgL_l1z00_1654))
												{	/* Ieee/string.scm 1250 */
													BgL_e1z00_1656 =
														BGl_errorz00zz__errorz00(BgL_procz00_3480,
														string_append_3
														(BGl_string2685z00zz__r4_strings_6_7z00,
															BGl_string2683z00zz__r4_strings_6_7z00,
															BGl_string2684z00zz__r4_strings_6_7z00),
														BgL_end1z00_205);
												}
											else
												{	/* Ieee/string.scm 1250 */
													BgL_e1z00_1656 = BgL_end1z00_205;
												}
										}
								}
							else
								{	/* Ieee/string.scm 1250 */
									BgL_e1z00_1656 = BINT(BgL_l1z00_1654);
								}
						}
						{	/* Ieee/string.scm 1250 */
							obj_t BgL_e2z00_1657;

							{	/* Ieee/string.scm 1251 */
								obj_t BgL_procz00_3493;

								BgL_procz00_3493 = BGl_symbol2704z00zz__r4_strings_6_7z00;
								if (CBOOL(BgL_end2z00_207))
									{	/* Ieee/string.scm 1251 */
										if (((long) CINT(BgL_end2z00_207) <= ((long) 0)))
											{	/* Ieee/string.scm 1251 */
												BgL_e2z00_1657 =
													BGl_errorz00zz__errorz00(BgL_procz00_3493,
													string_append_3
													(BGl_string2682z00zz__r4_strings_6_7z00,
														BGl_string2686z00zz__r4_strings_6_7z00,
														BGl_string2684z00zz__r4_strings_6_7z00),
													BgL_end2z00_207);
											}
										else
											{	/* Ieee/string.scm 1251 */
												if (((long) CINT(BgL_end2z00_207) > BgL_l2z00_1655))
													{	/* Ieee/string.scm 1251 */
														BgL_e2z00_1657 =
															BGl_errorz00zz__errorz00(BgL_procz00_3493,
															string_append_3
															(BGl_string2685z00zz__r4_strings_6_7z00,
																BGl_string2686z00zz__r4_strings_6_7z00,
																BGl_string2684z00zz__r4_strings_6_7z00),
															BgL_end2z00_207);
													}
												else
													{	/* Ieee/string.scm 1251 */
														BgL_e2z00_1657 = BgL_end2z00_207;
													}
											}
									}
								else
									{	/* Ieee/string.scm 1251 */
										BgL_e2z00_1657 = BINT(BgL_l2z00_1655);
									}
							}
							{	/* Ieee/string.scm 1251 */
								obj_t BgL_b1z00_1658;

								{	/* Ieee/string.scm 1252 */
									obj_t BgL_procz00_3506;

									BgL_procz00_3506 = BGl_symbol2704z00zz__r4_strings_6_7z00;
									if (CBOOL(BgL_start1z00_204))
										{	/* Ieee/string.scm 1252 */
											if (((long) CINT(BgL_start1z00_204) < ((long) 0)))
												{	/* Ieee/string.scm 1252 */
													BgL_b1z00_1658 =
														BGl_errorz00zz__errorz00(BgL_procz00_3506,
														string_append_3
														(BGl_string2687z00zz__r4_strings_6_7z00,
															BGl_string2688z00zz__r4_strings_6_7z00,
															BGl_string2684z00zz__r4_strings_6_7z00),
														BgL_start1z00_204);
												}
											else
												{	/* Ieee/string.scm 1252 */
													if (
														((long) CINT(BgL_start1z00_204) >= BgL_l1z00_1654))
														{	/* Ieee/string.scm 1252 */
															BgL_b1z00_1658 =
																BGl_errorz00zz__errorz00(BgL_procz00_3506,
																string_append_3
																(BGl_string2689z00zz__r4_strings_6_7z00,
																	BGl_string2688z00zz__r4_strings_6_7z00,
																	BGl_string2684z00zz__r4_strings_6_7z00),
																BgL_start1z00_204);
														}
													else
														{	/* Ieee/string.scm 1252 */
															BgL_b1z00_1658 = BgL_start1z00_204;
														}
												}
										}
									else
										{	/* Ieee/string.scm 1252 */
											BgL_b1z00_1658 = BINT(((long) 0));
								}}
								{	/* Ieee/string.scm 1252 */
									obj_t BgL_b2z00_1659;

									{	/* Ieee/string.scm 1253 */
										obj_t BgL_procz00_3519;

										BgL_procz00_3519 = BGl_symbol2704z00zz__r4_strings_6_7z00;
										if (CBOOL(BgL_start2z00_206))
											{	/* Ieee/string.scm 1253 */
												if (((long) CINT(BgL_start2z00_206) < ((long) 0)))
													{	/* Ieee/string.scm 1253 */
														BgL_b2z00_1659 =
															BGl_errorz00zz__errorz00(BgL_procz00_3519,
															string_append_3
															(BGl_string2687z00zz__r4_strings_6_7z00,
																BGl_string2690z00zz__r4_strings_6_7z00,
																BGl_string2684z00zz__r4_strings_6_7z00),
															BgL_start2z00_206);
													}
												else
													{	/* Ieee/string.scm 1253 */
														if (
															((long) CINT(BgL_start2z00_206) >=
																BgL_l2z00_1655))
															{	/* Ieee/string.scm 1253 */
																BgL_b2z00_1659 =
																	BGl_errorz00zz__errorz00(BgL_procz00_3519,
																	string_append_3
																	(BGl_string2689z00zz__r4_strings_6_7z00,
																		BGl_string2690z00zz__r4_strings_6_7z00,
																		BGl_string2684z00zz__r4_strings_6_7z00),
																	BgL_start2z00_206);
															}
														else
															{	/* Ieee/string.scm 1253 */
																BgL_b2z00_1659 = BgL_start2z00_206;
															}
													}
											}
										else
											{	/* Ieee/string.scm 1253 */
												BgL_b2z00_1659 = BINT(((long) 0));
									}}
									{	/* Ieee/string.scm 1253 */

										{
											obj_t BgL_i1z00_1661;

											obj_t BgL_i2z00_1662;

											BgL_i1z00_1661 = BgL_b1z00_1658;
											BgL_i2z00_1662 = BgL_b2z00_1659;
										BgL_zc3anonymousza31841ze3z83_1663:
											if (
												((long) CINT(BgL_i1z00_1661) ==
													(long) CINT(BgL_e1z00_1656)))
												{	/* Ieee/string.scm 1257 */
													return ((bool_t) 1);
												}
											else
												{	/* Ieee/string.scm 1257 */
													if (
														((long) CINT(BgL_i2z00_1662) ==
															(long) CINT(BgL_e2z00_1657)))
														{	/* Ieee/string.scm 1259 */
															return ((bool_t) 0);
														}
													else
														{	/* Ieee/string.scm 1259 */
															if (
																(toupper(STRING_REF(BgL_s1z00_202,
																			(long) CINT(BgL_i1z00_1661))) ==
																	toupper(STRING_REF(BgL_s2z00_203,
																			(long) CINT(BgL_i2z00_1662)))))
																{
																	obj_t BgL_i2z00_8088;

																	obj_t BgL_i1z00_8084;

																	BgL_i1z00_8084 =
																		BINT(
																		((long) CINT(BgL_i1z00_1661) + ((long) 1)));
																	BgL_i2z00_8088 =
																		BINT(
																		((long) CINT(BgL_i2z00_1662) + ((long) 1)));
																	BgL_i2z00_1662 = BgL_i2z00_8088;
																	BgL_i1z00_1661 = BgL_i1z00_8084;
																	goto BgL_zc3anonymousza31841ze3z83_1663;
																}
															else
																{	/* Ieee/string.scm 1261 */
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



/* _string-suffix? */
	obj_t BGl__stringzd2suffixzf3z21zz__r4_strings_6_7z00(obj_t BgL_envz00_217,
		obj_t BgL_optz00_216)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1269 */
			{	/* Ieee/string.scm 1269 */
				obj_t BgL_s1z00_1672;

				obj_t BgL_s2z00_1673;

				BgL_s1z00_1672 = VECTOR_REF(BgL_optz00_216, (int) (((long) 0)));
				BgL_s2z00_1673 = VECTOR_REF(BgL_optz00_216, (int) (((long) 1)));
				{	/* Ieee/string.scm 1269 */
					int BgL_aux1208z00_1675;

					BgL_aux1208z00_1675 = VECTOR_LENGTH(BgL_optz00_216);
					switch ((long) (BgL_aux1208z00_1675))
						{
						case ((long) 2):

							{	/* Ieee/string.scm 1269 */

								{	/* Ieee/string.scm 1269 */
									obj_t BgL_arg1851z00_1681;

									obj_t BgL_arg1852z00_1682;

									BgL_arg1851z00_1681 =
										VECTOR_REF(BgL_optz00_216, (int) (((long) 0)));
									BgL_arg1852z00_1682 =
										VECTOR_REF(BgL_optz00_216, (int) (((long) 1)));
									{	/* Ieee/string.scm 1269 */
										bool_t BgL_auxz00_8101;

										{	/* Ieee/string.scm 1269 */
											obj_t BgL_auxz00_8109;

											obj_t BgL_auxz00_8102;

											if (STRINGP(BgL_arg1852z00_1682))
												{	/* Ieee/string.scm 1269 */
													BgL_auxz00_8109 = BgL_arg1852z00_1682;
												}
											else
												{
													obj_t BgL_auxz00_8112;

													BgL_auxz00_8112 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 51288)),
														BGl_string2706z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1852z00_1682);
													FAILURE(BgL_auxz00_8112, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_arg1851z00_1681))
												{	/* Ieee/string.scm 1269 */
													BgL_auxz00_8102 = BgL_arg1851z00_1681;
												}
											else
												{
													obj_t BgL_auxz00_8105;

													BgL_auxz00_8105 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 51288)),
														BGl_string2706z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1851z00_1681);
													FAILURE(BgL_auxz00_8105, BFALSE, BFALSE);
												}
											BgL_auxz00_8101 =
												BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00
												(BgL_auxz00_8102, BgL_auxz00_8109, BFALSE, BFALSE,
												BFALSE, BFALSE);
										}
										return BBOOL(BgL_auxz00_8101);
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Ieee/string.scm 1269 */
								obj_t BgL_start1z00_1683;

								BgL_start1z00_1683 =
									VECTOR_REF(BgL_optz00_216, (int) (((long) 2)));
								{	/* Ieee/string.scm 1269 */

									{	/* Ieee/string.scm 1269 */
										obj_t BgL_arg1853z00_1687;

										obj_t BgL_arg1854z00_1688;

										BgL_arg1853z00_1687 =
											VECTOR_REF(BgL_optz00_216, (int) (((long) 0)));
										BgL_arg1854z00_1688 =
											VECTOR_REF(BgL_optz00_216, (int) (((long) 1)));
										{	/* Ieee/string.scm 1269 */
											bool_t BgL_auxz00_8124;

											{	/* Ieee/string.scm 1269 */
												obj_t BgL_auxz00_8132;

												obj_t BgL_auxz00_8125;

												if (STRINGP(BgL_arg1854z00_1688))
													{	/* Ieee/string.scm 1269 */
														BgL_auxz00_8132 = BgL_arg1854z00_1688;
													}
												else
													{
														obj_t BgL_auxz00_8135;

														BgL_auxz00_8135 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 51288)),
															BGl_string2706z00zz__r4_strings_6_7z00,
															BGl_string2597z00zz__r4_strings_6_7z00,
															BgL_arg1854z00_1688);
														FAILURE(BgL_auxz00_8135, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_arg1853z00_1687))
													{	/* Ieee/string.scm 1269 */
														BgL_auxz00_8125 = BgL_arg1853z00_1687;
													}
												else
													{
														obj_t BgL_auxz00_8128;

														BgL_auxz00_8128 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 51288)),
															BGl_string2706z00zz__r4_strings_6_7z00,
															BGl_string2597z00zz__r4_strings_6_7z00,
															BgL_arg1853z00_1687);
														FAILURE(BgL_auxz00_8128, BFALSE, BFALSE);
													}
												BgL_auxz00_8124 =
													BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00
													(BgL_auxz00_8125, BgL_auxz00_8132, BgL_start1z00_1683,
													BFALSE, BFALSE, BFALSE);
											}
											return BBOOL(BgL_auxz00_8124);
										}
									}
								}
							}
							break;
						case ((long) 4):

							{	/* Ieee/string.scm 1269 */
								obj_t BgL_start1z00_1689;

								BgL_start1z00_1689 =
									VECTOR_REF(BgL_optz00_216, (int) (((long) 2)));
								{	/* Ieee/string.scm 1269 */
									obj_t BgL_end1z00_1690;

									BgL_end1z00_1690 =
										VECTOR_REF(BgL_optz00_216, (int) (((long) 3)));
									{	/* Ieee/string.scm 1269 */

										{	/* Ieee/string.scm 1269 */
											obj_t BgL_arg1855z00_1693;

											obj_t BgL_arg1856z00_1694;

											BgL_arg1855z00_1693 =
												VECTOR_REF(BgL_optz00_216, (int) (((long) 0)));
											BgL_arg1856z00_1694 =
												VECTOR_REF(BgL_optz00_216, (int) (((long) 1)));
											{	/* Ieee/string.scm 1269 */
												bool_t BgL_auxz00_8149;

												{	/* Ieee/string.scm 1269 */
													obj_t BgL_auxz00_8157;

													obj_t BgL_auxz00_8150;

													if (STRINGP(BgL_arg1856z00_1694))
														{	/* Ieee/string.scm 1269 */
															BgL_auxz00_8157 = BgL_arg1856z00_1694;
														}
													else
														{
															obj_t BgL_auxz00_8160;

															BgL_auxz00_8160 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2595z00zz__r4_strings_6_7z00,
																BINT(((long) 51288)),
																BGl_string2706z00zz__r4_strings_6_7z00,
																BGl_string2597z00zz__r4_strings_6_7z00,
																BgL_arg1856z00_1694);
															FAILURE(BgL_auxz00_8160, BFALSE, BFALSE);
														}
													if (STRINGP(BgL_arg1855z00_1693))
														{	/* Ieee/string.scm 1269 */
															BgL_auxz00_8150 = BgL_arg1855z00_1693;
														}
													else
														{
															obj_t BgL_auxz00_8153;

															BgL_auxz00_8153 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2595z00zz__r4_strings_6_7z00,
																BINT(((long) 51288)),
																BGl_string2706z00zz__r4_strings_6_7z00,
																BGl_string2597z00zz__r4_strings_6_7z00,
																BgL_arg1855z00_1693);
															FAILURE(BgL_auxz00_8153, BFALSE, BFALSE);
														}
													BgL_auxz00_8149 =
														BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00
														(BgL_auxz00_8150, BgL_auxz00_8157,
														BgL_start1z00_1689, BgL_end1z00_1690, BFALSE,
														BFALSE);
												}
												return BBOOL(BgL_auxz00_8149);
											}
										}
									}
								}
							}
							break;
						case ((long) 5):

							{	/* Ieee/string.scm 1269 */
								obj_t BgL_start1z00_1695;

								BgL_start1z00_1695 =
									VECTOR_REF(BgL_optz00_216, (int) (((long) 2)));
								{	/* Ieee/string.scm 1269 */
									obj_t BgL_end1z00_1696;

									BgL_end1z00_1696 =
										VECTOR_REF(BgL_optz00_216, (int) (((long) 3)));
									{	/* Ieee/string.scm 1269 */
										obj_t BgL_start2z00_1697;

										BgL_start2z00_1697 =
											VECTOR_REF(BgL_optz00_216, (int) (((long) 4)));
										{	/* Ieee/string.scm 1269 */

											{	/* Ieee/string.scm 1269 */
												obj_t BgL_arg1857z00_1699;

												obj_t BgL_arg1858z00_1700;

												BgL_arg1857z00_1699 =
													VECTOR_REF(BgL_optz00_216, (int) (((long) 0)));
												BgL_arg1858z00_1700 =
													VECTOR_REF(BgL_optz00_216, (int) (((long) 1)));
												{	/* Ieee/string.scm 1269 */
													bool_t BgL_auxz00_8176;

													{	/* Ieee/string.scm 1269 */
														obj_t BgL_auxz00_8184;

														obj_t BgL_auxz00_8177;

														if (STRINGP(BgL_arg1858z00_1700))
															{	/* Ieee/string.scm 1269 */
																BgL_auxz00_8184 = BgL_arg1858z00_1700;
															}
														else
															{
																obj_t BgL_auxz00_8187;

																BgL_auxz00_8187 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2595z00zz__r4_strings_6_7z00,
																	BINT(((long) 51288)),
																	BGl_string2706z00zz__r4_strings_6_7z00,
																	BGl_string2597z00zz__r4_strings_6_7z00,
																	BgL_arg1858z00_1700);
																FAILURE(BgL_auxz00_8187, BFALSE, BFALSE);
															}
														if (STRINGP(BgL_arg1857z00_1699))
															{	/* Ieee/string.scm 1269 */
																BgL_auxz00_8177 = BgL_arg1857z00_1699;
															}
														else
															{
																obj_t BgL_auxz00_8180;

																BgL_auxz00_8180 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2595z00zz__r4_strings_6_7z00,
																	BINT(((long) 51288)),
																	BGl_string2706z00zz__r4_strings_6_7z00,
																	BGl_string2597z00zz__r4_strings_6_7z00,
																	BgL_arg1857z00_1699);
																FAILURE(BgL_auxz00_8180, BFALSE, BFALSE);
															}
														BgL_auxz00_8176 =
															BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00
															(BgL_auxz00_8177, BgL_auxz00_8184,
															BgL_start1z00_1695, BgL_end1z00_1696,
															BgL_start2z00_1697, BFALSE);
													}
													return BBOOL(BgL_auxz00_8176);
												}
											}
										}
									}
								}
							}
							break;
						case ((long) 6):

							{	/* Ieee/string.scm 1269 */
								obj_t BgL_start1z00_1701;

								BgL_start1z00_1701 =
									VECTOR_REF(BgL_optz00_216, (int) (((long) 2)));
								{	/* Ieee/string.scm 1269 */
									obj_t BgL_end1z00_1702;

									BgL_end1z00_1702 =
										VECTOR_REF(BgL_optz00_216, (int) (((long) 3)));
									{	/* Ieee/string.scm 1269 */
										obj_t BgL_start2z00_1703;

										BgL_start2z00_1703 =
											VECTOR_REF(BgL_optz00_216, (int) (((long) 4)));
										{	/* Ieee/string.scm 1269 */
											obj_t BgL_end2z00_1704;

											BgL_end2z00_1704 =
												VECTOR_REF(BgL_optz00_216, (int) (((long) 5)));
											{	/* Ieee/string.scm 1269 */

												{	/* Ieee/string.scm 1269 */
													obj_t BgL_arg1860z00_1705;

													obj_t BgL_arg1861z00_1706;

													BgL_arg1860z00_1705 =
														VECTOR_REF(BgL_optz00_216, (int) (((long) 0)));
													BgL_arg1861z00_1706 =
														VECTOR_REF(BgL_optz00_216, (int) (((long) 1)));
													{	/* Ieee/string.scm 1269 */
														bool_t BgL_auxz00_8205;

														{	/* Ieee/string.scm 1269 */
															obj_t BgL_auxz00_8213;

															obj_t BgL_auxz00_8206;

															if (STRINGP(BgL_arg1861z00_1706))
																{	/* Ieee/string.scm 1269 */
																	BgL_auxz00_8213 = BgL_arg1861z00_1706;
																}
															else
																{
																	obj_t BgL_auxz00_8216;

																	BgL_auxz00_8216 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2595z00zz__r4_strings_6_7z00,
																		BINT(((long) 51288)),
																		BGl_string2706z00zz__r4_strings_6_7z00,
																		BGl_string2597z00zz__r4_strings_6_7z00,
																		BgL_arg1861z00_1706);
																	FAILURE(BgL_auxz00_8216, BFALSE, BFALSE);
																}
															if (STRINGP(BgL_arg1860z00_1705))
																{	/* Ieee/string.scm 1269 */
																	BgL_auxz00_8206 = BgL_arg1860z00_1705;
																}
															else
																{
																	obj_t BgL_auxz00_8209;

																	BgL_auxz00_8209 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2595z00zz__r4_strings_6_7z00,
																		BINT(((long) 51288)),
																		BGl_string2706z00zz__r4_strings_6_7z00,
																		BGl_string2597z00zz__r4_strings_6_7z00,
																		BgL_arg1860z00_1705);
																	FAILURE(BgL_auxz00_8209, BFALSE, BFALSE);
																}
															BgL_auxz00_8205 =
																BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00
																(BgL_auxz00_8206, BgL_auxz00_8213,
																BgL_start1z00_1701, BgL_end1z00_1702,
																BgL_start2z00_1703, BgL_end2z00_1704);
														}
														return BBOOL(BgL_auxz00_8205);
													}
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



/* string-suffix? */
	BGL_EXPORTED_DEF bool_t BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00(obj_t
		BgL_s1z00_210, obj_t BgL_s2z00_211, obj_t BgL_start1z00_212,
		obj_t BgL_end1z00_213, obj_t BgL_start2z00_214, obj_t BgL_end2z00_215)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1269 */
			{	/* Ieee/string.scm 1271 */
				long BgL_l1z00_1707;

				BgL_l1z00_1707 = STRING_LENGTH(BgL_s1z00_210);
				{	/* Ieee/string.scm 1271 */
					long BgL_l2z00_1708;

					BgL_l2z00_1708 = STRING_LENGTH(BgL_s2z00_211);
					{	/* Ieee/string.scm 1272 */
						obj_t BgL_b1z00_1709;

						{	/* Ieee/string.scm 1273 */
							obj_t BgL_procz00_3555;

							BgL_procz00_3555 = BGl_symbol2707z00zz__r4_strings_6_7z00;
							if (CBOOL(BgL_end1z00_213))
								{	/* Ieee/string.scm 1273 */
									if (((long) CINT(BgL_end1z00_213) <= ((long) 0)))
										{	/* Ieee/string.scm 1273 */
											BgL_b1z00_1709 =
												BGl_errorz00zz__errorz00(BgL_procz00_3555,
												string_append_3(BGl_string2682z00zz__r4_strings_6_7z00,
													BGl_string2683z00zz__r4_strings_6_7z00,
													BGl_string2684z00zz__r4_strings_6_7z00),
												BgL_end1z00_213);
										}
									else
										{	/* Ieee/string.scm 1273 */
											if (((long) CINT(BgL_end1z00_213) > BgL_l1z00_1707))
												{	/* Ieee/string.scm 1273 */
													BgL_b1z00_1709 =
														BGl_errorz00zz__errorz00(BgL_procz00_3555,
														string_append_3
														(BGl_string2685z00zz__r4_strings_6_7z00,
															BGl_string2683z00zz__r4_strings_6_7z00,
															BGl_string2684z00zz__r4_strings_6_7z00),
														BgL_end1z00_213);
												}
											else
												{	/* Ieee/string.scm 1273 */
													BgL_b1z00_1709 = BgL_end1z00_213;
												}
										}
								}
							else
								{	/* Ieee/string.scm 1273 */
									BgL_b1z00_1709 = BINT(BgL_l1z00_1707);
								}
						}
						{	/* Ieee/string.scm 1273 */
							obj_t BgL_b2z00_1710;

							{	/* Ieee/string.scm 1274 */
								obj_t BgL_procz00_3568;

								BgL_procz00_3568 = BGl_symbol2707z00zz__r4_strings_6_7z00;
								if (CBOOL(BgL_end2z00_215))
									{	/* Ieee/string.scm 1274 */
										if (((long) CINT(BgL_end2z00_215) <= ((long) 0)))
											{	/* Ieee/string.scm 1274 */
												BgL_b2z00_1710 =
													BGl_errorz00zz__errorz00(BgL_procz00_3568,
													string_append_3
													(BGl_string2682z00zz__r4_strings_6_7z00,
														BGl_string2686z00zz__r4_strings_6_7z00,
														BGl_string2684z00zz__r4_strings_6_7z00),
													BgL_end2z00_215);
											}
										else
											{	/* Ieee/string.scm 1274 */
												if (((long) CINT(BgL_end2z00_215) > BgL_l2z00_1708))
													{	/* Ieee/string.scm 1274 */
														BgL_b2z00_1710 =
															BGl_errorz00zz__errorz00(BgL_procz00_3568,
															string_append_3
															(BGl_string2685z00zz__r4_strings_6_7z00,
																BGl_string2686z00zz__r4_strings_6_7z00,
																BGl_string2684z00zz__r4_strings_6_7z00),
															BgL_end2z00_215);
													}
												else
													{	/* Ieee/string.scm 1274 */
														BgL_b2z00_1710 = BgL_end2z00_215;
													}
											}
									}
								else
									{	/* Ieee/string.scm 1274 */
										BgL_b2z00_1710 = BINT(BgL_l2z00_1708);
									}
							}
							{	/* Ieee/string.scm 1274 */
								obj_t BgL_e1z00_1711;

								{	/* Ieee/string.scm 1275 */
									obj_t BgL_procz00_3581;

									BgL_procz00_3581 = BGl_symbol2707z00zz__r4_strings_6_7z00;
									if (CBOOL(BgL_start1z00_212))
										{	/* Ieee/string.scm 1275 */
											if (((long) CINT(BgL_start1z00_212) < ((long) 0)))
												{	/* Ieee/string.scm 1275 */
													BgL_e1z00_1711 =
														BGl_errorz00zz__errorz00(BgL_procz00_3581,
														string_append_3
														(BGl_string2687z00zz__r4_strings_6_7z00,
															BGl_string2688z00zz__r4_strings_6_7z00,
															BGl_string2684z00zz__r4_strings_6_7z00),
														BgL_start1z00_212);
												}
											else
												{	/* Ieee/string.scm 1275 */
													if (
														((long) CINT(BgL_start1z00_212) >= BgL_l1z00_1707))
														{	/* Ieee/string.scm 1275 */
															BgL_e1z00_1711 =
																BGl_errorz00zz__errorz00(BgL_procz00_3581,
																string_append_3
																(BGl_string2689z00zz__r4_strings_6_7z00,
																	BGl_string2688z00zz__r4_strings_6_7z00,
																	BGl_string2684z00zz__r4_strings_6_7z00),
																BgL_start1z00_212);
														}
													else
														{	/* Ieee/string.scm 1275 */
															BgL_e1z00_1711 = BgL_start1z00_212;
														}
												}
										}
									else
										{	/* Ieee/string.scm 1275 */
											BgL_e1z00_1711 = BINT(((long) 0));
								}}
								{	/* Ieee/string.scm 1275 */
									obj_t BgL_e2z00_1712;

									{	/* Ieee/string.scm 1276 */
										obj_t BgL_procz00_3594;

										BgL_procz00_3594 = BGl_symbol2707z00zz__r4_strings_6_7z00;
										if (CBOOL(BgL_start2z00_214))
											{	/* Ieee/string.scm 1276 */
												if (((long) CINT(BgL_start2z00_214) < ((long) 0)))
													{	/* Ieee/string.scm 1276 */
														BgL_e2z00_1712 =
															BGl_errorz00zz__errorz00(BgL_procz00_3594,
															string_append_3
															(BGl_string2687z00zz__r4_strings_6_7z00,
																BGl_string2690z00zz__r4_strings_6_7z00,
																BGl_string2684z00zz__r4_strings_6_7z00),
															BgL_start2z00_214);
													}
												else
													{	/* Ieee/string.scm 1276 */
														if (
															((long) CINT(BgL_start2z00_214) >=
																BgL_l2z00_1708))
															{	/* Ieee/string.scm 1276 */
																BgL_e2z00_1712 =
																	BGl_errorz00zz__errorz00(BgL_procz00_3594,
																	string_append_3
																	(BGl_string2689z00zz__r4_strings_6_7z00,
																		BGl_string2690z00zz__r4_strings_6_7z00,
																		BGl_string2684z00zz__r4_strings_6_7z00),
																	BgL_start2z00_214);
															}
														else
															{	/* Ieee/string.scm 1276 */
																BgL_e2z00_1712 = BgL_start2z00_214;
															}
													}
											}
										else
											{	/* Ieee/string.scm 1276 */
												BgL_e2z00_1712 = BINT(((long) 0));
									}}
									{	/* Ieee/string.scm 1276 */

										{
											long BgL_i1z00_1716;

											long BgL_i2z00_1717;

											BgL_i1z00_1716 =
												((long) CINT(BgL_b1z00_1709) - ((long) 1));
											BgL_i2z00_1717 =
												((long) CINT(BgL_b2z00_1710) - ((long) 1));
										BgL_zc3anonymousza31862ze3z83_1718:
											if ((BgL_i1z00_1716 < (long) CINT(BgL_e1z00_1711)))
												{	/* Ieee/string.scm 1280 */
													return ((bool_t) 1);
												}
											else
												{	/* Ieee/string.scm 1280 */
													if ((BgL_i2z00_1717 < (long) CINT(BgL_e2z00_1712)))
														{	/* Ieee/string.scm 1282 */
															return ((bool_t) 0);
														}
													else
														{	/* Ieee/string.scm 1282 */
															if (
																(STRING_REF(BgL_s1z00_210, BgL_i1z00_1716) ==
																	STRING_REF(BgL_s2z00_211, BgL_i2z00_1717)))
																{
																	long BgL_i2z00_8290;

																	long BgL_i1z00_8288;

																	BgL_i1z00_8288 =
																		(BgL_i1z00_1716 - ((long) 1));
																	BgL_i2z00_8290 =
																		(BgL_i2z00_1717 - ((long) 1));
																	BgL_i2z00_1717 = BgL_i2z00_8290;
																	BgL_i1z00_1716 = BgL_i1z00_8288;
																	goto BgL_zc3anonymousza31862ze3z83_1718;
																}
															else
																{	/* Ieee/string.scm 1284 */
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



/* _string-suffix-ci? */
	obj_t BGl__stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t
		BgL_envz00_225, obj_t BgL_optz00_224)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1292 */
			{	/* Ieee/string.scm 1292 */
				obj_t BgL_s1z00_1727;

				obj_t BgL_s2z00_1728;

				BgL_s1z00_1727 = VECTOR_REF(BgL_optz00_224, (int) (((long) 0)));
				BgL_s2z00_1728 = VECTOR_REF(BgL_optz00_224, (int) (((long) 1)));
				{	/* Ieee/string.scm 1292 */
					int BgL_aux1210z00_1730;

					BgL_aux1210z00_1730 = VECTOR_LENGTH(BgL_optz00_224);
					switch ((long) (BgL_aux1210z00_1730))
						{
						case ((long) 2):

							{	/* Ieee/string.scm 1292 */

								{	/* Ieee/string.scm 1292 */
									obj_t BgL_arg1871z00_1736;

									obj_t BgL_arg1872z00_1737;

									BgL_arg1871z00_1736 =
										VECTOR_REF(BgL_optz00_224, (int) (((long) 0)));
									BgL_arg1872z00_1737 =
										VECTOR_REF(BgL_optz00_224, (int) (((long) 1)));
									{	/* Ieee/string.scm 1292 */
										bool_t BgL_auxz00_8305;

										{	/* Ieee/string.scm 1292 */
											obj_t BgL_auxz00_8313;

											obj_t BgL_auxz00_8306;

											if (STRINGP(BgL_arg1872z00_1737))
												{	/* Ieee/string.scm 1292 */
													BgL_auxz00_8313 = BgL_arg1872z00_1737;
												}
											else
												{
													obj_t BgL_auxz00_8316;

													BgL_auxz00_8316 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 52149)),
														BGl_string2709z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1872z00_1737);
													FAILURE(BgL_auxz00_8316, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_arg1871z00_1736))
												{	/* Ieee/string.scm 1292 */
													BgL_auxz00_8306 = BgL_arg1871z00_1736;
												}
											else
												{
													obj_t BgL_auxz00_8309;

													BgL_auxz00_8309 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2595z00zz__r4_strings_6_7z00,
														BINT(((long) 52149)),
														BGl_string2709z00zz__r4_strings_6_7z00,
														BGl_string2597z00zz__r4_strings_6_7z00,
														BgL_arg1871z00_1736);
													FAILURE(BgL_auxz00_8309, BFALSE, BFALSE);
												}
											BgL_auxz00_8305 =
												BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00
												(BgL_auxz00_8306, BgL_auxz00_8313, BFALSE, BFALSE,
												BFALSE, BFALSE);
										}
										return BBOOL(BgL_auxz00_8305);
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Ieee/string.scm 1292 */
								obj_t BgL_start1z00_1738;

								BgL_start1z00_1738 =
									VECTOR_REF(BgL_optz00_224, (int) (((long) 2)));
								{	/* Ieee/string.scm 1292 */

									{	/* Ieee/string.scm 1292 */
										obj_t BgL_arg1873z00_1742;

										obj_t BgL_arg1874z00_1743;

										BgL_arg1873z00_1742 =
											VECTOR_REF(BgL_optz00_224, (int) (((long) 0)));
										BgL_arg1874z00_1743 =
											VECTOR_REF(BgL_optz00_224, (int) (((long) 1)));
										{	/* Ieee/string.scm 1292 */
											bool_t BgL_auxz00_8328;

											{	/* Ieee/string.scm 1292 */
												obj_t BgL_auxz00_8336;

												obj_t BgL_auxz00_8329;

												if (STRINGP(BgL_arg1874z00_1743))
													{	/* Ieee/string.scm 1292 */
														BgL_auxz00_8336 = BgL_arg1874z00_1743;
													}
												else
													{
														obj_t BgL_auxz00_8339;

														BgL_auxz00_8339 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 52149)),
															BGl_string2709z00zz__r4_strings_6_7z00,
															BGl_string2597z00zz__r4_strings_6_7z00,
															BgL_arg1874z00_1743);
														FAILURE(BgL_auxz00_8339, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_arg1873z00_1742))
													{	/* Ieee/string.scm 1292 */
														BgL_auxz00_8329 = BgL_arg1873z00_1742;
													}
												else
													{
														obj_t BgL_auxz00_8332;

														BgL_auxz00_8332 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2595z00zz__r4_strings_6_7z00,
															BINT(((long) 52149)),
															BGl_string2709z00zz__r4_strings_6_7z00,
															BGl_string2597z00zz__r4_strings_6_7z00,
															BgL_arg1873z00_1742);
														FAILURE(BgL_auxz00_8332, BFALSE, BFALSE);
													}
												BgL_auxz00_8328 =
													BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00
													(BgL_auxz00_8329, BgL_auxz00_8336, BgL_start1z00_1738,
													BFALSE, BFALSE, BFALSE);
											}
											return BBOOL(BgL_auxz00_8328);
										}
									}
								}
							}
							break;
						case ((long) 4):

							{	/* Ieee/string.scm 1292 */
								obj_t BgL_start1z00_1744;

								BgL_start1z00_1744 =
									VECTOR_REF(BgL_optz00_224, (int) (((long) 2)));
								{	/* Ieee/string.scm 1292 */
									obj_t BgL_end1z00_1745;

									BgL_end1z00_1745 =
										VECTOR_REF(BgL_optz00_224, (int) (((long) 3)));
									{	/* Ieee/string.scm 1292 */

										{	/* Ieee/string.scm 1292 */
											obj_t BgL_arg1875z00_1748;

											obj_t BgL_arg1876z00_1749;

											BgL_arg1875z00_1748 =
												VECTOR_REF(BgL_optz00_224, (int) (((long) 0)));
											BgL_arg1876z00_1749 =
												VECTOR_REF(BgL_optz00_224, (int) (((long) 1)));
											{	/* Ieee/string.scm 1292 */
												bool_t BgL_auxz00_8353;

												{	/* Ieee/string.scm 1292 */
													obj_t BgL_auxz00_8361;

													obj_t BgL_auxz00_8354;

													if (STRINGP(BgL_arg1876z00_1749))
														{	/* Ieee/string.scm 1292 */
															BgL_auxz00_8361 = BgL_arg1876z00_1749;
														}
													else
														{
															obj_t BgL_auxz00_8364;

															BgL_auxz00_8364 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2595z00zz__r4_strings_6_7z00,
																BINT(((long) 52149)),
																BGl_string2709z00zz__r4_strings_6_7z00,
																BGl_string2597z00zz__r4_strings_6_7z00,
																BgL_arg1876z00_1749);
															FAILURE(BgL_auxz00_8364, BFALSE, BFALSE);
														}
													if (STRINGP(BgL_arg1875z00_1748))
														{	/* Ieee/string.scm 1292 */
															BgL_auxz00_8354 = BgL_arg1875z00_1748;
														}
													else
														{
															obj_t BgL_auxz00_8357;

															BgL_auxz00_8357 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2595z00zz__r4_strings_6_7z00,
																BINT(((long) 52149)),
																BGl_string2709z00zz__r4_strings_6_7z00,
																BGl_string2597z00zz__r4_strings_6_7z00,
																BgL_arg1875z00_1748);
															FAILURE(BgL_auxz00_8357, BFALSE, BFALSE);
														}
													BgL_auxz00_8353 =
														BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00
														(BgL_auxz00_8354, BgL_auxz00_8361,
														BgL_start1z00_1744, BgL_end1z00_1745, BFALSE,
														BFALSE);
												}
												return BBOOL(BgL_auxz00_8353);
											}
										}
									}
								}
							}
							break;
						case ((long) 5):

							{	/* Ieee/string.scm 1292 */
								obj_t BgL_start1z00_1750;

								BgL_start1z00_1750 =
									VECTOR_REF(BgL_optz00_224, (int) (((long) 2)));
								{	/* Ieee/string.scm 1292 */
									obj_t BgL_end1z00_1751;

									BgL_end1z00_1751 =
										VECTOR_REF(BgL_optz00_224, (int) (((long) 3)));
									{	/* Ieee/string.scm 1292 */
										obj_t BgL_start2z00_1752;

										BgL_start2z00_1752 =
											VECTOR_REF(BgL_optz00_224, (int) (((long) 4)));
										{	/* Ieee/string.scm 1292 */

											{	/* Ieee/string.scm 1292 */
												obj_t BgL_arg1877z00_1754;

												obj_t BgL_arg1878z00_1755;

												BgL_arg1877z00_1754 =
													VECTOR_REF(BgL_optz00_224, (int) (((long) 0)));
												BgL_arg1878z00_1755 =
													VECTOR_REF(BgL_optz00_224, (int) (((long) 1)));
												{	/* Ieee/string.scm 1292 */
													bool_t BgL_auxz00_8380;

													{	/* Ieee/string.scm 1292 */
														obj_t BgL_auxz00_8388;

														obj_t BgL_auxz00_8381;

														if (STRINGP(BgL_arg1878z00_1755))
															{	/* Ieee/string.scm 1292 */
																BgL_auxz00_8388 = BgL_arg1878z00_1755;
															}
														else
															{
																obj_t BgL_auxz00_8391;

																BgL_auxz00_8391 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2595z00zz__r4_strings_6_7z00,
																	BINT(((long) 52149)),
																	BGl_string2709z00zz__r4_strings_6_7z00,
																	BGl_string2597z00zz__r4_strings_6_7z00,
																	BgL_arg1878z00_1755);
																FAILURE(BgL_auxz00_8391, BFALSE, BFALSE);
															}
														if (STRINGP(BgL_arg1877z00_1754))
															{	/* Ieee/string.scm 1292 */
																BgL_auxz00_8381 = BgL_arg1877z00_1754;
															}
														else
															{
																obj_t BgL_auxz00_8384;

																BgL_auxz00_8384 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2595z00zz__r4_strings_6_7z00,
																	BINT(((long) 52149)),
																	BGl_string2709z00zz__r4_strings_6_7z00,
																	BGl_string2597z00zz__r4_strings_6_7z00,
																	BgL_arg1877z00_1754);
																FAILURE(BgL_auxz00_8384, BFALSE, BFALSE);
															}
														BgL_auxz00_8380 =
															BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00
															(BgL_auxz00_8381, BgL_auxz00_8388,
															BgL_start1z00_1750, BgL_end1z00_1751,
															BgL_start2z00_1752, BFALSE);
													}
													return BBOOL(BgL_auxz00_8380);
												}
											}
										}
									}
								}
							}
							break;
						case ((long) 6):

							{	/* Ieee/string.scm 1292 */
								obj_t BgL_start1z00_1756;

								BgL_start1z00_1756 =
									VECTOR_REF(BgL_optz00_224, (int) (((long) 2)));
								{	/* Ieee/string.scm 1292 */
									obj_t BgL_end1z00_1757;

									BgL_end1z00_1757 =
										VECTOR_REF(BgL_optz00_224, (int) (((long) 3)));
									{	/* Ieee/string.scm 1292 */
										obj_t BgL_start2z00_1758;

										BgL_start2z00_1758 =
											VECTOR_REF(BgL_optz00_224, (int) (((long) 4)));
										{	/* Ieee/string.scm 1292 */
											obj_t BgL_end2z00_1759;

											BgL_end2z00_1759 =
												VECTOR_REF(BgL_optz00_224, (int) (((long) 5)));
											{	/* Ieee/string.scm 1292 */

												{	/* Ieee/string.scm 1292 */
													obj_t BgL_arg1879z00_1760;

													obj_t BgL_arg1880z00_1761;

													BgL_arg1879z00_1760 =
														VECTOR_REF(BgL_optz00_224, (int) (((long) 0)));
													BgL_arg1880z00_1761 =
														VECTOR_REF(BgL_optz00_224, (int) (((long) 1)));
													{	/* Ieee/string.scm 1292 */
														bool_t BgL_auxz00_8409;

														{	/* Ieee/string.scm 1292 */
															obj_t BgL_auxz00_8417;

															obj_t BgL_auxz00_8410;

															if (STRINGP(BgL_arg1880z00_1761))
																{	/* Ieee/string.scm 1292 */
																	BgL_auxz00_8417 = BgL_arg1880z00_1761;
																}
															else
																{
																	obj_t BgL_auxz00_8420;

																	BgL_auxz00_8420 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2595z00zz__r4_strings_6_7z00,
																		BINT(((long) 52149)),
																		BGl_string2709z00zz__r4_strings_6_7z00,
																		BGl_string2597z00zz__r4_strings_6_7z00,
																		BgL_arg1880z00_1761);
																	FAILURE(BgL_auxz00_8420, BFALSE, BFALSE);
																}
															if (STRINGP(BgL_arg1879z00_1760))
																{	/* Ieee/string.scm 1292 */
																	BgL_auxz00_8410 = BgL_arg1879z00_1760;
																}
															else
																{
																	obj_t BgL_auxz00_8413;

																	BgL_auxz00_8413 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2595z00zz__r4_strings_6_7z00,
																		BINT(((long) 52149)),
																		BGl_string2709z00zz__r4_strings_6_7z00,
																		BGl_string2597z00zz__r4_strings_6_7z00,
																		BgL_arg1879z00_1760);
																	FAILURE(BgL_auxz00_8413, BFALSE, BFALSE);
																}
															BgL_auxz00_8409 =
																BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00
																(BgL_auxz00_8410, BgL_auxz00_8417,
																BgL_start1z00_1756, BgL_end1z00_1757,
																BgL_start2z00_1758, BgL_end2z00_1759);
														}
														return BBOOL(BgL_auxz00_8409);
													}
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



/* string-suffix-ci? */
	BGL_EXPORTED_DEF bool_t
		BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t BgL_s1z00_218,
		obj_t BgL_s2z00_219, obj_t BgL_start1z00_220, obj_t BgL_end1z00_221,
		obj_t BgL_start2z00_222, obj_t BgL_end2z00_223)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1292 */
			{	/* Ieee/string.scm 1294 */
				long BgL_l1z00_1762;

				BgL_l1z00_1762 = STRING_LENGTH(BgL_s1z00_218);
				{	/* Ieee/string.scm 1294 */
					long BgL_l2z00_1763;

					BgL_l2z00_1763 = STRING_LENGTH(BgL_s2z00_219);
					{	/* Ieee/string.scm 1295 */
						obj_t BgL_b1z00_1764;

						{	/* Ieee/string.scm 1296 */
							obj_t BgL_procz00_3627;

							BgL_procz00_3627 = BGl_symbol2680z00zz__r4_strings_6_7z00;
							if (CBOOL(BgL_end1z00_221))
								{	/* Ieee/string.scm 1296 */
									if (((long) CINT(BgL_end1z00_221) <= ((long) 0)))
										{	/* Ieee/string.scm 1296 */
											BgL_b1z00_1764 =
												BGl_errorz00zz__errorz00(BgL_procz00_3627,
												string_append_3(BGl_string2682z00zz__r4_strings_6_7z00,
													BGl_string2683z00zz__r4_strings_6_7z00,
													BGl_string2684z00zz__r4_strings_6_7z00),
												BgL_end1z00_221);
										}
									else
										{	/* Ieee/string.scm 1296 */
											if (((long) CINT(BgL_end1z00_221) > BgL_l1z00_1762))
												{	/* Ieee/string.scm 1296 */
													BgL_b1z00_1764 =
														BGl_errorz00zz__errorz00(BgL_procz00_3627,
														string_append_3
														(BGl_string2685z00zz__r4_strings_6_7z00,
															BGl_string2683z00zz__r4_strings_6_7z00,
															BGl_string2684z00zz__r4_strings_6_7z00),
														BgL_end1z00_221);
												}
											else
												{	/* Ieee/string.scm 1296 */
													BgL_b1z00_1764 = BgL_end1z00_221;
												}
										}
								}
							else
								{	/* Ieee/string.scm 1296 */
									BgL_b1z00_1764 = BINT(BgL_l1z00_1762);
								}
						}
						{	/* Ieee/string.scm 1296 */
							obj_t BgL_b2z00_1765;

							{	/* Ieee/string.scm 1297 */
								obj_t BgL_procz00_3640;

								BgL_procz00_3640 = BGl_symbol2680z00zz__r4_strings_6_7z00;
								if (CBOOL(BgL_end2z00_223))
									{	/* Ieee/string.scm 1297 */
										if (((long) CINT(BgL_end2z00_223) <= ((long) 0)))
											{	/* Ieee/string.scm 1297 */
												BgL_b2z00_1765 =
													BGl_errorz00zz__errorz00(BgL_procz00_3640,
													string_append_3
													(BGl_string2682z00zz__r4_strings_6_7z00,
														BGl_string2686z00zz__r4_strings_6_7z00,
														BGl_string2684z00zz__r4_strings_6_7z00),
													BgL_end2z00_223);
											}
										else
											{	/* Ieee/string.scm 1297 */
												if (((long) CINT(BgL_end2z00_223) > BgL_l2z00_1763))
													{	/* Ieee/string.scm 1297 */
														BgL_b2z00_1765 =
															BGl_errorz00zz__errorz00(BgL_procz00_3640,
															string_append_3
															(BGl_string2685z00zz__r4_strings_6_7z00,
																BGl_string2686z00zz__r4_strings_6_7z00,
																BGl_string2684z00zz__r4_strings_6_7z00),
															BgL_end2z00_223);
													}
												else
													{	/* Ieee/string.scm 1297 */
														BgL_b2z00_1765 = BgL_end2z00_223;
													}
											}
									}
								else
									{	/* Ieee/string.scm 1297 */
										BgL_b2z00_1765 = BINT(BgL_l2z00_1763);
									}
							}
							{	/* Ieee/string.scm 1297 */
								obj_t BgL_e1z00_1766;

								{	/* Ieee/string.scm 1298 */
									obj_t BgL_procz00_3653;

									BgL_procz00_3653 = BGl_symbol2680z00zz__r4_strings_6_7z00;
									if (CBOOL(BgL_start1z00_220))
										{	/* Ieee/string.scm 1298 */
											if (((long) CINT(BgL_start1z00_220) < ((long) 0)))
												{	/* Ieee/string.scm 1298 */
													BgL_e1z00_1766 =
														BGl_errorz00zz__errorz00(BgL_procz00_3653,
														string_append_3
														(BGl_string2687z00zz__r4_strings_6_7z00,
															BGl_string2688z00zz__r4_strings_6_7z00,
															BGl_string2684z00zz__r4_strings_6_7z00),
														BgL_start1z00_220);
												}
											else
												{	/* Ieee/string.scm 1298 */
													if (
														((long) CINT(BgL_start1z00_220) >= BgL_l1z00_1762))
														{	/* Ieee/string.scm 1298 */
															BgL_e1z00_1766 =
																BGl_errorz00zz__errorz00(BgL_procz00_3653,
																string_append_3
																(BGl_string2689z00zz__r4_strings_6_7z00,
																	BGl_string2688z00zz__r4_strings_6_7z00,
																	BGl_string2684z00zz__r4_strings_6_7z00),
																BgL_start1z00_220);
														}
													else
														{	/* Ieee/string.scm 1298 */
															BgL_e1z00_1766 = BgL_start1z00_220;
														}
												}
										}
									else
										{	/* Ieee/string.scm 1298 */
											BgL_e1z00_1766 = BINT(((long) 0));
								}}
								{	/* Ieee/string.scm 1298 */
									obj_t BgL_e2z00_1767;

									{	/* Ieee/string.scm 1299 */
										obj_t BgL_procz00_3666;

										BgL_procz00_3666 = BGl_symbol2680z00zz__r4_strings_6_7z00;
										if (CBOOL(BgL_start2z00_222))
											{	/* Ieee/string.scm 1299 */
												if (((long) CINT(BgL_start2z00_222) < ((long) 0)))
													{	/* Ieee/string.scm 1299 */
														BgL_e2z00_1767 =
															BGl_errorz00zz__errorz00(BgL_procz00_3666,
															string_append_3
															(BGl_string2687z00zz__r4_strings_6_7z00,
																BGl_string2690z00zz__r4_strings_6_7z00,
																BGl_string2684z00zz__r4_strings_6_7z00),
															BgL_start2z00_222);
													}
												else
													{	/* Ieee/string.scm 1299 */
														if (
															((long) CINT(BgL_start2z00_222) >=
																BgL_l2z00_1763))
															{	/* Ieee/string.scm 1299 */
																BgL_e2z00_1767 =
																	BGl_errorz00zz__errorz00(BgL_procz00_3666,
																	string_append_3
																	(BGl_string2689z00zz__r4_strings_6_7z00,
																		BGl_string2690z00zz__r4_strings_6_7z00,
																		BGl_string2684z00zz__r4_strings_6_7z00),
																	BgL_start2z00_222);
															}
														else
															{	/* Ieee/string.scm 1299 */
																BgL_e2z00_1767 = BgL_start2z00_222;
															}
													}
											}
										else
											{	/* Ieee/string.scm 1299 */
												BgL_e2z00_1767 = BINT(((long) 0));
									}}
									{	/* Ieee/string.scm 1299 */

										{
											long BgL_i1z00_1771;

											long BgL_i2z00_1772;

											BgL_i1z00_1771 =
												((long) CINT(BgL_b1z00_1764) - ((long) 1));
											BgL_i2z00_1772 =
												((long) CINT(BgL_b2z00_1765) - ((long) 1));
										BgL_zc3anonymousza31881ze3z83_1773:
											if ((BgL_i1z00_1771 < (long) CINT(BgL_e1z00_1766)))
												{	/* Ieee/string.scm 1303 */
													return ((bool_t) 1);
												}
											else
												{	/* Ieee/string.scm 1303 */
													if ((BgL_i2z00_1772 < (long) CINT(BgL_e2z00_1767)))
														{	/* Ieee/string.scm 1305 */
															return ((bool_t) 0);
														}
													else
														{	/* Ieee/string.scm 1305 */
															if (
																(toupper(STRING_REF(BgL_s1z00_218,
																			BgL_i1z00_1771)) ==
																	toupper(STRING_REF(BgL_s2z00_219,
																			BgL_i2z00_1772))))
																{
																	long BgL_i2z00_8496;

																	long BgL_i1z00_8494;

																	BgL_i1z00_8494 =
																		(BgL_i1z00_1771 - ((long) 1));
																	BgL_i2z00_8496 =
																		(BgL_i2z00_1772 - ((long) 1));
																	BgL_i2z00_1772 = BgL_i2z00_8496;
																	BgL_i1z00_1771 = BgL_i1z00_8494;
																	goto BgL_zc3anonymousza31881ze3z83_1773;
																}
															else
																{	/* Ieee/string.scm 1307 */
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



/* string-natural-compare3 */
	BGL_EXPORTED_DEF int
		BGl_stringzd2naturalzd2compare3z00zz__r4_strings_6_7z00(obj_t BgL_az00_226,
		obj_t BgL_bz00_227)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1315 */
			return
				CINT(BGl_strnatcmpz00zz__r4_strings_6_7z00(BgL_az00_226, BgL_bz00_227,
					((bool_t) 0)));
		}
	}



/* _string-natural-compare3 */
	obj_t BGl__stringzd2naturalzd2compare3z00zz__r4_strings_6_7z00(obj_t
		BgL_envz00_4129, obj_t BgL_az00_4130, obj_t BgL_bz00_4131)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1315 */
			{	/* Ieee/string.scm 1316 */
				int BgL_auxz00_8504;

				{	/* Ieee/string.scm 1316 */
					obj_t BgL_auxz00_8512;

					obj_t BgL_auxz00_8505;

					if (STRINGP(BgL_bz00_4131))
						{	/* Ieee/string.scm 1316 */
							BgL_auxz00_8512 = BgL_bz00_4131;
						}
					else
						{
							obj_t BgL_auxz00_8515;

							BgL_auxz00_8515 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 53077)),
								BGl_string2710z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_bz00_4131);
							FAILURE(BgL_auxz00_8515, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_az00_4130))
						{	/* Ieee/string.scm 1316 */
							BgL_auxz00_8505 = BgL_az00_4130;
						}
					else
						{
							obj_t BgL_auxz00_8508;

							BgL_auxz00_8508 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 53077)),
								BGl_string2710z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_az00_4130);
							FAILURE(BgL_auxz00_8508, BFALSE, BFALSE);
						}
					BgL_auxz00_8504 =
						BGl_stringzd2naturalzd2compare3z00zz__r4_strings_6_7z00
						(BgL_auxz00_8505, BgL_auxz00_8512);
				}
				return BINT(BgL_auxz00_8504);
			}
		}
	}



/* string-natural-compare3-ci */
	BGL_EXPORTED_DEF int
		BGl_stringzd2naturalzd2compare3zd2cizd2zz__r4_strings_6_7z00(obj_t
		BgL_az00_228, obj_t BgL_bz00_229)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1321 */
			return
				CINT(BGl_strnatcmpz00zz__r4_strings_6_7z00(BgL_az00_228, BgL_bz00_229,
					((bool_t) 1)));
		}
	}



/* _string-natural-compare3-ci */
	obj_t BGl__stringzd2naturalzd2compare3zd2cizd2zz__r4_strings_6_7z00(obj_t
		BgL_envz00_4132, obj_t BgL_az00_4133, obj_t BgL_bz00_4134)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1321 */
			{	/* Ieee/string.scm 1322 */
				int BgL_auxz00_8523;

				{	/* Ieee/string.scm 1322 */
					obj_t BgL_auxz00_8531;

					obj_t BgL_auxz00_8524;

					if (STRINGP(BgL_bz00_4134))
						{	/* Ieee/string.scm 1322 */
							BgL_auxz00_8531 = BgL_bz00_4134;
						}
					else
						{
							obj_t BgL_auxz00_8534;

							BgL_auxz00_8534 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 53364)),
								BGl_string2711z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_bz00_4134);
							FAILURE(BgL_auxz00_8534, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_az00_4133))
						{	/* Ieee/string.scm 1322 */
							BgL_auxz00_8524 = BgL_az00_4133;
						}
					else
						{
							obj_t BgL_auxz00_8527;

							BgL_auxz00_8527 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 53364)),
								BGl_string2711z00zz__r4_strings_6_7z00,
								BGl_string2597z00zz__r4_strings_6_7z00, BgL_az00_4133);
							FAILURE(BgL_auxz00_8527, BFALSE, BFALSE);
						}
					BgL_auxz00_8523 =
						BGl_stringzd2naturalzd2compare3zd2cizd2zz__r4_strings_6_7z00
						(BgL_auxz00_8524, BgL_auxz00_8531);
				}
				return BINT(BgL_auxz00_8523);
			}
		}
	}



/* strnatcmp */
	obj_t BGl_strnatcmpz00zz__r4_strings_6_7z00(obj_t BgL_az00_230,
		obj_t BgL_bz00_231, bool_t BgL_foldcasez00_232)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1327 */
			{
				long BgL_iaz00_1783;

				long BgL_ibz00_1784;

				BgL_iaz00_1783 = ((long) 0);
				BgL_ibz00_1784 = ((long) 0);
			BgL_zc3anonymousza31891ze3z83_1785:
				{	/* Ieee/string.scm 1330 */
					unsigned char BgL_caz00_1786;

					unsigned char BgL_cbz00_1787;

					{	/* Ieee/string.scm 1330 */
						long BgL_iz00_3705;

						BgL_iz00_3705 = BgL_iaz00_1783;
						if ((BgL_iz00_3705 >= STRING_LENGTH(BgL_az00_230)))
							{	/* Ieee/string.scm 1330 */
								BgL_caz00_1786 = ((unsigned char) '\000');
							}
						else
							{	/* Ieee/string.scm 1330 */
								BgL_caz00_1786 = STRING_REF(BgL_az00_230, BgL_iz00_3705);
							}
					}
					{	/* Ieee/string.scm 1331 */
						long BgL_iz00_3714;

						BgL_iz00_3714 = BgL_ibz00_1784;
						if ((BgL_iz00_3714 >= STRING_LENGTH(BgL_bz00_231)))
							{	/* Ieee/string.scm 1331 */
								BgL_cbz00_1787 = ((unsigned char) '\000');
							}
						else
							{	/* Ieee/string.scm 1331 */
								BgL_cbz00_1787 = STRING_REF(BgL_bz00_231, BgL_iz00_3714);
							}
					}
					{

						if (isspace(BgL_caz00_1786))
							{	/* Ieee/string.scm 1333 */
								BgL_iaz00_1783 = (BgL_iaz00_1783 + ((long) 1));
								{	/* Ieee/string.scm 1335 */
									long BgL_iz00_3726;

									BgL_iz00_3726 = BgL_iaz00_1783;
									if ((BgL_iz00_3726 >= STRING_LENGTH(BgL_az00_230)))
										{	/* Ieee/string.scm 1335 */
											BgL_caz00_1786 = ((unsigned char) '\000');
										}
									else
										{	/* Ieee/string.scm 1335 */
											BgL_caz00_1786 = STRING_REF(BgL_az00_230, BgL_iz00_3726);
										}
								}
							}
						else
							{	/* Ieee/string.scm 1333 */
								BFALSE;
							}
					}
					{

						if (isspace(BgL_cbz00_1787))
							{	/* Ieee/string.scm 1337 */
								BgL_ibz00_1784 = (BgL_ibz00_1784 + ((long) 1));
								{	/* Ieee/string.scm 1339 */
									long BgL_iz00_3738;

									BgL_iz00_3738 = BgL_ibz00_1784;
									if ((BgL_iz00_3738 >= STRING_LENGTH(BgL_bz00_231)))
										{	/* Ieee/string.scm 1339 */
											BgL_cbz00_1787 = ((unsigned char) '\000');
										}
									else
										{	/* Ieee/string.scm 1339 */
											BgL_cbz00_1787 = STRING_REF(BgL_bz00_231, BgL_iz00_3738);
										}
								}
							}
						else
							{	/* Ieee/string.scm 1337 */
								BFALSE;
							}
					}
					{	/* Ieee/string.scm 1341 */
						bool_t BgL_testz00_8562;

						if (isdigit(BgL_caz00_1786))
							{	/* Ieee/string.scm 1341 */
								BgL_testz00_8562 = isdigit(BgL_cbz00_1787);
							}
						else
							{	/* Ieee/string.scm 1341 */
								BgL_testz00_8562 = ((bool_t) 0);
							}
						if (BgL_testz00_8562)
							{	/* Ieee/string.scm 1342 */
								bool_t BgL_testz00_8566;

								if ((BgL_caz00_1786 == ((unsigned char) '0')))
									{	/* Ieee/string.scm 1342 */
										BgL_testz00_8566 =
											(BgL_cbz00_1787 == ((unsigned char) '0'));
									}
								else
									{	/* Ieee/string.scm 1342 */
										BgL_testz00_8566 = ((bool_t) 0);
									}
								if (BgL_testz00_8566)
									{
										long BgL_ibz00_8572;

										long BgL_iaz00_8570;

										BgL_iaz00_8570 = (BgL_iaz00_1783 + ((long) 1));
										BgL_ibz00_8572 = (BgL_ibz00_1784 + ((long) 1));
										BgL_ibz00_1784 = BgL_ibz00_8572;
										BgL_iaz00_1783 = BgL_iaz00_8570;
										goto BgL_zc3anonymousza31891ze3z83_1785;
									}
								else
									{	/* Ieee/string.scm 1344 */
										obj_t BgL_resultz00_1800;

										{	/* Ieee/string.scm 1344 */
											bool_t BgL_testz00_8574;

											if ((BgL_caz00_1786 == ((unsigned char) '0')))
												{	/* Ieee/string.scm 1344 */
													BgL_testz00_8574 = ((bool_t) 1);
												}
											else
												{	/* Ieee/string.scm 1344 */
													BgL_testz00_8574 =
														(BgL_cbz00_1787 == ((unsigned char) '0'));
												}
											if (BgL_testz00_8574)
												{	/* Ieee/string.scm 1344 */
													BgL_resultz00_1800 =
														BGl_comparezd2leftzd2zz__r4_strings_6_7z00
														(BgL_az00_230, BgL_iaz00_1783, BgL_bz00_231,
														BgL_ibz00_1784);
												}
											else
												{	/* Ieee/string.scm 1344 */
													BgL_resultz00_1800 =
														BGl_comparezd2rightzd2zz__r4_strings_6_7z00
														(BgL_az00_230, BgL_iaz00_1783, BgL_bz00_231,
														BgL_ibz00_1784);
												}
										}
										if (INTEGERP(BgL_resultz00_1800))
											{
												long BgL_ibz00_8585;

												long BgL_iaz00_8582;

												BgL_iaz00_8582 =
													(BgL_iaz00_1783 + (long) CINT(BgL_resultz00_1800));
												BgL_ibz00_8585 =
													(BgL_ibz00_1784 + (long) CINT(BgL_resultz00_1800));
												BgL_ibz00_1784 = BgL_ibz00_8585;
												BgL_iaz00_1783 = BgL_iaz00_8582;
												goto BgL_zc3anonymousza31891ze3z83_1785;
											}
										else
											{	/* Ieee/string.scm 1348 */
												if (CBOOL(BgL_resultz00_1800))
													{	/* Ieee/string.scm 1350 */
														return BINT(((long) 1));
													}
												else
													{	/* Ieee/string.scm 1350 */
														return BINT(((long) -1));
							}}}}
						else
							{	/* Ieee/string.scm 1354 */
								bool_t BgL_testz00_8592;

								if ((BgL_caz00_1786 == ((unsigned char) '\000')))
									{	/* Ieee/string.scm 1354 */
										BgL_testz00_8592 =
											(BgL_cbz00_1787 == ((unsigned char) '\000'));
									}
								else
									{	/* Ieee/string.scm 1354 */
										BgL_testz00_8592 = ((bool_t) 0);
									}
								if (BgL_testz00_8592)
									{	/* Ieee/string.scm 1354 */
										return BINT(((long) 0));
									}
								else
									{	/* Ieee/string.scm 1356 */
										bool_t BgL_testz00_8597;

										if (BgL_foldcasez00_232)
											{	/* Ieee/string.scm 1356 */
												BgL_caz00_1786 = toupper(BgL_caz00_1786);
												BgL_cbz00_1787 = toupper(BgL_cbz00_1787);
												BgL_testz00_8597 = ((bool_t) 0);
											}
										else
											{	/* Ieee/string.scm 1356 */
												BgL_testz00_8597 = ((bool_t) 0);
											}
										if (BgL_testz00_8597)
											{	/* Ieee/string.scm 1356 */
												return BGl_symbol2712z00zz__r4_strings_6_7z00;
											}
										else
											{	/* Ieee/string.scm 1356 */
												if ((BgL_caz00_1786 < BgL_cbz00_1787))
													{	/* Ieee/string.scm 1361 */
														return BINT(((long) -1));
													}
												else
													{	/* Ieee/string.scm 1361 */
														if ((BgL_caz00_1786 > BgL_cbz00_1787))
															{	/* Ieee/string.scm 1363 */
																return BINT(((long) 1));
															}
														else
															{
																long BgL_ibz00_8609;

																long BgL_iaz00_8607;

																BgL_iaz00_8607 = (BgL_iaz00_1783 + ((long) 1));
																BgL_ibz00_8609 = (BgL_ibz00_1784 + ((long) 1));
																BgL_ibz00_1784 = BgL_ibz00_8609;
																BgL_iaz00_1783 = BgL_iaz00_8607;
																goto BgL_zc3anonymousza31891ze3z83_1785;
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



/* compare-right */
	obj_t BGl_comparezd2rightzd2zz__r4_strings_6_7z00(obj_t BgL_az00_233,
		long BgL_iaz00_234, obj_t BgL_bz00_235, long BgL_ibz00_236)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1371 */
			{
				obj_t BgL_biasz00_1817;

				long BgL_iz00_1818;

				BgL_biasz00_1817 = BUNSPEC;
				BgL_iz00_1818 = ((long) 0);
			BgL_zc3anonymousza31914ze3z83_1819:
				{	/* Ieee/string.scm 1374 */
					unsigned char BgL_caz00_1820;

					unsigned char BgL_cbz00_1821;

					{	/* Ieee/string.scm 1374 */
						long BgL_iz00_3782;

						BgL_iz00_3782 = (BgL_iz00_1818 + BgL_iaz00_234);
						if ((BgL_iz00_3782 >= STRING_LENGTH(BgL_az00_233)))
							{	/* Ieee/string.scm 1374 */
								BgL_caz00_1820 = ((unsigned char) '\000');
							}
						else
							{	/* Ieee/string.scm 1374 */
								BgL_caz00_1820 = STRING_REF(BgL_az00_233, BgL_iz00_3782);
							}
					}
					{	/* Ieee/string.scm 1375 */
						long BgL_iz00_3793;

						BgL_iz00_3793 = (BgL_iz00_1818 + BgL_ibz00_236);
						if ((BgL_iz00_3793 >= STRING_LENGTH(BgL_bz00_235)))
							{	/* Ieee/string.scm 1375 */
								BgL_cbz00_1821 = ((unsigned char) '\000');
							}
						else
							{	/* Ieee/string.scm 1375 */
								BgL_cbz00_1821 = STRING_REF(BgL_bz00_235, BgL_iz00_3793);
							}
					}
					{	/* Ieee/string.scm 1377 */
						bool_t BgL_testz00_8621;

						if (isdigit(BgL_caz00_1820))
							{	/* Ieee/string.scm 1377 */
								BgL_testz00_8621 = ((bool_t) 0);
							}
						else
							{	/* Ieee/string.scm 1377 */
								if (isdigit(BgL_cbz00_1821))
									{	/* Ieee/string.scm 1377 */
										BgL_testz00_8621 = ((bool_t) 0);
									}
								else
									{	/* Ieee/string.scm 1377 */
										BgL_testz00_8621 = ((bool_t) 1);
									}
							}
						if (BgL_testz00_8621)
							{	/* Ieee/string.scm 1377 */
								if ((BgL_biasz00_1817 == BUNSPEC))
									{	/* Ieee/string.scm 1378 */
										return BINT(BgL_iz00_1818);
									}
								else
									{	/* Ieee/string.scm 1378 */
										return BgL_biasz00_1817;
									}
							}
						else
							{	/* Ieee/string.scm 1377 */
								if (isdigit(BgL_caz00_1820))
									{	/* Ieee/string.scm 1379 */
										if (isdigit(BgL_cbz00_1821))
											{	/* Ieee/string.scm 1381 */
												if ((BgL_caz00_1820 < BgL_cbz00_1821))
													{
														long BgL_iz00_8638;

														obj_t BgL_biasz00_8635;

														if ((BgL_biasz00_1817 == BUNSPEC))
															{	/* Ieee/string.scm 1384 */
																BgL_biasz00_8635 = BFALSE;
															}
														else
															{	/* Ieee/string.scm 1384 */
																BgL_biasz00_8635 = BgL_biasz00_1817;
															}
														BgL_iz00_8638 = (BgL_iz00_1818 + ((long) 1));
														BgL_iz00_1818 = BgL_iz00_8638;
														BgL_biasz00_1817 = BgL_biasz00_8635;
														goto BgL_zc3anonymousza31914ze3z83_1819;
													}
												else
													{	/* Ieee/string.scm 1383 */
														if ((BgL_caz00_1820 > BgL_cbz00_1821))
															{
																long BgL_iz00_8645;

																obj_t BgL_biasz00_8642;

																if ((BgL_biasz00_1817 == BUNSPEC))
																	{	/* Ieee/string.scm 1386 */
																		BgL_biasz00_8642 = BTRUE;
																	}
																else
																	{	/* Ieee/string.scm 1386 */
																		BgL_biasz00_8642 = BgL_biasz00_1817;
																	}
																BgL_iz00_8645 = (BgL_iz00_1818 + ((long) 1));
																BgL_iz00_1818 = BgL_iz00_8645;
																BgL_biasz00_1817 = BgL_biasz00_8642;
																goto BgL_zc3anonymousza31914ze3z83_1819;
															}
														else
															{	/* Ieee/string.scm 1387 */
																bool_t BgL_testz00_8647;

																if (
																	(BgL_caz00_1820 == ((unsigned char) '\000')))
																	{	/* Ieee/string.scm 1387 */
																		BgL_testz00_8647 =
																			(BgL_cbz00_1821 ==
																			((unsigned char) '\000'));
																	}
																else
																	{	/* Ieee/string.scm 1387 */
																		BgL_testz00_8647 = ((bool_t) 0);
																	}
																if (BgL_testz00_8647)
																	{	/* Ieee/string.scm 1387 */
																		if ((BgL_biasz00_1817 == BUNSPEC))
																			{	/* Ieee/string.scm 1388 */
																				return BINT(BgL_iz00_1818);
																			}
																		else
																			{	/* Ieee/string.scm 1388 */
																				return BgL_biasz00_1817;
																			}
																	}
																else
																	{
																		long BgL_iz00_8654;

																		BgL_iz00_8654 =
																			(BgL_iz00_1818 + ((long) 1));
																		BgL_iz00_1818 = BgL_iz00_8654;
																		goto BgL_zc3anonymousza31914ze3z83_1819;
																	}
															}
													}
											}
										else
											{	/* Ieee/string.scm 1381 */
												return BTRUE;
											}
									}
								else
									{	/* Ieee/string.scm 1379 */
										return BFALSE;
									}
							}
					}
				}
			}
		}
	}



/* compare-left */
	obj_t BGl_comparezd2leftzd2zz__r4_strings_6_7z00(obj_t BgL_az00_237,
		long BgL_iaz00_238, obj_t BgL_bz00_239, long BgL_ibz00_240)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1395 */
			{
				long BgL_iz00_1844;

				BgL_iz00_1844 = ((long) 0);
			BgL_zc3anonymousza31938ze3z83_1845:
				{	/* Ieee/string.scm 1397 */
					unsigned char BgL_caz00_1846;

					unsigned char BgL_cbz00_1847;

					{	/* Ieee/string.scm 1397 */
						long BgL_iz00_3822;

						BgL_iz00_3822 = (BgL_iaz00_238 + BgL_iz00_1844);
						if ((BgL_iz00_3822 >= STRING_LENGTH(BgL_az00_237)))
							{	/* Ieee/string.scm 1397 */
								BgL_caz00_1846 = ((unsigned char) '\000');
							}
						else
							{	/* Ieee/string.scm 1397 */
								BgL_caz00_1846 = STRING_REF(BgL_az00_237, BgL_iz00_3822);
							}
					}
					{	/* Ieee/string.scm 1398 */
						long BgL_iz00_3833;

						BgL_iz00_3833 = (BgL_ibz00_240 + BgL_iz00_1844);
						if ((BgL_iz00_3833 >= STRING_LENGTH(BgL_bz00_239)))
							{	/* Ieee/string.scm 1398 */
								BgL_cbz00_1847 = ((unsigned char) '\000');
							}
						else
							{	/* Ieee/string.scm 1398 */
								BgL_cbz00_1847 = STRING_REF(BgL_bz00_239, BgL_iz00_3833);
							}
					}
					{	/* Ieee/string.scm 1400 */
						bool_t BgL_testz00_8666;

						if (isdigit(BgL_caz00_1846))
							{	/* Ieee/string.scm 1400 */
								BgL_testz00_8666 = ((bool_t) 0);
							}
						else
							{	/* Ieee/string.scm 1400 */
								if (isdigit(BgL_cbz00_1847))
									{	/* Ieee/string.scm 1400 */
										BgL_testz00_8666 = ((bool_t) 0);
									}
								else
									{	/* Ieee/string.scm 1400 */
										BgL_testz00_8666 = ((bool_t) 1);
									}
							}
						if (BgL_testz00_8666)
							{	/* Ieee/string.scm 1400 */
								return BINT(BgL_iz00_1844);
							}
						else
							{	/* Ieee/string.scm 1400 */
								if (isdigit(BgL_caz00_1846))
									{	/* Ieee/string.scm 1402 */
										if (isdigit(BgL_cbz00_1847))
											{	/* Ieee/string.scm 1404 */
												if ((BgL_caz00_1846 < BgL_cbz00_1847))
													{	/* Ieee/string.scm 1406 */
														return BFALSE;
													}
												else
													{	/* Ieee/string.scm 1406 */
														if ((BgL_caz00_1846 > BgL_cbz00_1847))
															{	/* Ieee/string.scm 1408 */
																return BTRUE;
															}
														else
															{
																long BgL_iz00_8680;

																BgL_iz00_8680 = (BgL_iz00_1844 + ((long) 1));
																BgL_iz00_1844 = BgL_iz00_8680;
																goto BgL_zc3anonymousza31938ze3z83_1845;
															}
													}
											}
										else
											{	/* Ieee/string.scm 1404 */
												return BTRUE;
											}
									}
								else
									{	/* Ieee/string.scm 1402 */
										return BFALSE;
									}
							}
					}
				}
			}
		}
	}



/* hex-string-ref */
	obj_t BGl_hexzd2stringzd2refz00zz__r4_strings_6_7z00(obj_t BgL_strz00_243,
		long BgL_iz00_244)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1424 */
			{	/* Ieee/string.scm 1425 */
				unsigned char BgL_nz00_1861;

				BgL_nz00_1861 = STRING_REF(BgL_strz00_243, BgL_iz00_244);
				{	/* Ieee/string.scm 1427 */
					bool_t BgL_testz00_8683;

					if ((BgL_nz00_1861 >= ((unsigned char) '0')))
						{	/* Ieee/string.scm 1427 */
							BgL_testz00_8683 = (BgL_nz00_1861 <= ((unsigned char) '9'));
						}
					else
						{	/* Ieee/string.scm 1427 */
							BgL_testz00_8683 = ((bool_t) 0);
						}
					if (BgL_testz00_8683)
						{	/* Ieee/string.scm 1427 */
							return BINT(((BgL_nz00_1861) - ((long) 48)));
						}
					else
						{	/* Ieee/string.scm 1429 */
							bool_t BgL_testz00_8690;

							if ((BgL_nz00_1861 >= ((unsigned char) 'a')))
								{	/* Ieee/string.scm 1429 */
									BgL_testz00_8690 = (BgL_nz00_1861 <= ((unsigned char) 'f'));
								}
							else
								{	/* Ieee/string.scm 1429 */
									BgL_testz00_8690 = ((bool_t) 0);
								}
							if (BgL_testz00_8690)
								{	/* Ieee/string.scm 1429 */
									return BINT((((long) 10) + ((BgL_nz00_1861) - ((long) 97))));
								}
							else
								{	/* Ieee/string.scm 1431 */
									bool_t BgL_testz00_8698;

									if ((BgL_nz00_1861 >= ((unsigned char) 'A')))
										{	/* Ieee/string.scm 1431 */
											BgL_testz00_8698 =
												(BgL_nz00_1861 <= ((unsigned char) 'F'));
										}
									else
										{	/* Ieee/string.scm 1431 */
											BgL_testz00_8698 = ((bool_t) 0);
										}
									if (BgL_testz00_8698)
										{	/* Ieee/string.scm 1431 */
											return
												BINT((((long) 10) + ((BgL_nz00_1861) - ((long) 65))));
										}
									else
										{	/* Ieee/string.scm 1431 */
											return
												BGl_errorz00zz__errorz00
												(BGl_symbol2714z00zz__r4_strings_6_7z00,
												BGl_string2716z00zz__r4_strings_6_7z00, BgL_strz00_243);
										}
								}
						}
				}
			}
		}
	}



/* string-hex-intern */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2hexzd2internz00zz__r4_strings_6_7z00(obj_t
		BgL_strz00_245)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1441 */
			{	/* Ieee/string.scm 1442 */
				long BgL_lenz00_1878;

				BgL_lenz00_1878 = STRING_LENGTH(BgL_strz00_245);
				if (ODDP_FX(BgL_lenz00_1878))
					{	/* Ieee/string.scm 1443 */
						return
							BGl_errorz00zz__errorz00(BGl_symbol2717z00zz__r4_strings_6_7z00,
							BGl_string2719z00zz__r4_strings_6_7z00, BgL_strz00_245);
					}
				else
					{	/* Ieee/string.scm 1445 */
						obj_t BgL_resz00_1880;

						BgL_resz00_1880 =
							make_string(
							(BgL_lenz00_1878 / ((long) 2)), ((unsigned char) ' '));
						{
							long BgL_iz00_1882;

							long BgL_jz00_1883;

							BgL_iz00_1882 = ((long) 0);
							BgL_jz00_1883 = ((long) 0);
						BgL_zc3anonymousza31970ze3z83_1884:
							if ((BgL_iz00_1882 == BgL_lenz00_1878))
								{	/* Ieee/string.scm 1448 */
									return BgL_resz00_1880;
								}
							else
								{	/* Ieee/string.scm 1450 */
									obj_t BgL_c1z00_1886;

									BgL_c1z00_1886 =
										BGl_hexzd2stringzd2refz00zz__r4_strings_6_7z00
										(BgL_strz00_245, BgL_iz00_1882);
									{	/* Ieee/string.scm 1450 */
										obj_t BgL_c2z00_1887;

										BgL_c2z00_1887 =
											BGl_hexzd2stringzd2refz00zz__r4_strings_6_7z00
											(BgL_strz00_245, (BgL_iz00_1882 + ((long) 1)));
										{	/* Ieee/string.scm 1451 */
											long BgL_cz00_1888;

											BgL_cz00_1888 =
												(
												((long) CINT(BgL_c1z00_1886) * ((long) 16)) +
												(long) CINT(BgL_c2z00_1887));
											{	/* Ieee/string.scm 1452 */

												{	/* Ieee/string.scm 1453 */
													unsigned char BgL_auxz00_8722;

													BgL_auxz00_8722 = (BgL_cz00_1888);
													STRING_SET(BgL_resz00_1880, BgL_jz00_1883,
														BgL_auxz00_8722);
												}
												{
													long BgL_jz00_8727;

													long BgL_iz00_8725;

													BgL_iz00_8725 = (BgL_iz00_1882 + ((long) 2));
													BgL_jz00_8727 = (BgL_jz00_1883 + ((long) 1));
													BgL_jz00_1883 = BgL_jz00_8727;
													BgL_iz00_1882 = BgL_iz00_8725;
													goto BgL_zc3anonymousza31970ze3z83_1884;
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



/* _string-hex-intern */
	obj_t BGl__stringzd2hexzd2internz00zz__r4_strings_6_7z00(obj_t
		BgL_envz00_4135, obj_t BgL_strz00_4136)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1441 */
			{	/* Ieee/string.scm 1442 */
				obj_t BgL_auxz00_8729;

				if (STRINGP(BgL_strz00_4136))
					{	/* Ieee/string.scm 1442 */
						BgL_auxz00_8729 = BgL_strz00_4136;
					}
				else
					{
						obj_t BgL_auxz00_8732;

						BgL_auxz00_8732 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 57394)),
							BGl_string2720z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_strz00_4136);
						FAILURE(BgL_auxz00_8732, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2hexzd2internz00zz__r4_strings_6_7z00(BgL_auxz00_8729);
			}
		}
	}



/* string-hex-intern! */
	BGL_EXPORTED_DEF obj_t
		BGl_stringzd2hexzd2internz12z12zz__r4_strings_6_7z00(obj_t BgL_strz00_246)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1459 */
			{	/* Ieee/string.scm 1460 */
				long BgL_lenz00_1897;

				BgL_lenz00_1897 = STRING_LENGTH(BgL_strz00_246);
				if (ODDP_FX(BgL_lenz00_1897))
					{	/* Ieee/string.scm 1461 */
						return
							BGl_errorz00zz__errorz00(BGl_symbol2721z00zz__r4_strings_6_7z00,
							BGl_string2719z00zz__r4_strings_6_7z00, BgL_strz00_246);
					}
				else
					{
						long BgL_iz00_1900;

						long BgL_jz00_1901;

						BgL_iz00_1900 = ((long) 0);
						BgL_jz00_1901 = ((long) 0);
					BgL_zc3anonymousza31980ze3z83_1902:
						if ((BgL_iz00_1900 == BgL_lenz00_1897))
							{	/* Ieee/string.scm 1466 */
								long BgL_auxz00_8743;

								BgL_auxz00_8743 = (BgL_lenz00_1897 / ((long) 2));
								return bgl_string_shrink(BgL_strz00_246, BgL_auxz00_8743);
							}
						else
							{	/* Ieee/string.scm 1467 */
								obj_t BgL_c1z00_1905;

								BgL_c1z00_1905 =
									BGl_hexzd2stringzd2refz00zz__r4_strings_6_7z00(BgL_strz00_246,
									BgL_iz00_1900);
								{	/* Ieee/string.scm 1467 */
									obj_t BgL_c2z00_1906;

									BgL_c2z00_1906 =
										BGl_hexzd2stringzd2refz00zz__r4_strings_6_7z00
										(BgL_strz00_246, (BgL_iz00_1900 + ((long) 1)));
									{	/* Ieee/string.scm 1468 */
										long BgL_cz00_1907;

										BgL_cz00_1907 =
											(
											((long) CINT(BgL_c1z00_1905) * ((long) 16)) +
											(long) CINT(BgL_c2z00_1906));
										{	/* Ieee/string.scm 1469 */

											{	/* Ieee/string.scm 1470 */
												unsigned char BgL_auxz00_8753;

												BgL_auxz00_8753 = (BgL_cz00_1907);
												STRING_SET(BgL_strz00_246, BgL_jz00_1901,
													BgL_auxz00_8753);
											}
											{
												long BgL_jz00_8758;

												long BgL_iz00_8756;

												BgL_iz00_8756 = (BgL_iz00_1900 + ((long) 2));
												BgL_jz00_8758 = (BgL_jz00_1901 + ((long) 1));
												BgL_jz00_1901 = BgL_jz00_8758;
												BgL_iz00_1900 = BgL_iz00_8756;
												goto BgL_zc3anonymousza31980ze3z83_1902;
											}
										}
									}
								}
							}
					}
			}
		}
	}



/* _string-hex-intern! */
	obj_t BGl__stringzd2hexzd2internz12z12zz__r4_strings_6_7z00(obj_t
		BgL_envz00_4137, obj_t BgL_strz00_4138)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1459 */
			{	/* Ieee/string.scm 1460 */
				obj_t BgL_auxz00_8760;

				if (STRINGP(BgL_strz00_4138))
					{	/* Ieee/string.scm 1460 */
						BgL_auxz00_8760 = BgL_strz00_4138;
					}
				else
					{
						obj_t BgL_auxz00_8763;

						BgL_auxz00_8763 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 58077)),
							BGl_string2723z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_strz00_4138);
						FAILURE(BgL_auxz00_8763, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2hexzd2internz12z12zz__r4_strings_6_7z00(BgL_auxz00_8760);
			}
		}
	}



/* string-hex-extern */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2hexzd2externz00zz__r4_strings_6_7z00(obj_t
		BgL_strz00_247)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1476 */
			{	/* Ieee/string.scm 1479 */
				long BgL_lenz00_1915;

				BgL_lenz00_1915 = STRING_LENGTH(BgL_strz00_247);
				{	/* Ieee/string.scm 1479 */
					obj_t BgL_resz00_1916;

					BgL_resz00_1916 =
						make_string((((long) 2) * BgL_lenz00_1915), ((unsigned char) ' '));
					{	/* Ieee/string.scm 1480 */

						{
							long BgL_iz00_1918;

							long BgL_jz00_1919;

							BgL_iz00_1918 = ((long) 0);
							BgL_jz00_1919 = ((long) 0);
						BgL_zc3anonymousza31988ze3z83_1920:
							if ((BgL_iz00_1918 == BgL_lenz00_1915))
								{	/* Ieee/string.scm 1483 */
									return BgL_resz00_1916;
								}
							else
								{	/* Ieee/string.scm 1485 */
									long BgL_nz00_1922;

									BgL_nz00_1922 = (STRING_REF(BgL_strz00_247, BgL_iz00_1918));
									{	/* Ieee/string.scm 1485 */
										long BgL_d0z00_1923;

										BgL_d0z00_1923 = (BgL_nz00_1922 % ((long) 16));
										{	/* Ieee/string.scm 1486 */
											long BgL_d1z00_1924;

											BgL_d1z00_1924 = (BgL_nz00_1922 / ((long) 16));
											{	/* Ieee/string.scm 1487 */

												{	/* Ieee/string.scm 1488 */
													unsigned char BgL_auxz00_8777;

													BgL_auxz00_8777 =
														STRING_REF(BGl_string2724z00zz__r4_strings_6_7z00,
														BgL_d1z00_1924);
													STRING_SET(BgL_resz00_1916, BgL_jz00_1919,
														BgL_auxz00_8777);
												}
												{	/* Ieee/string.scm 1489 */
													unsigned char BgL_auxz00_8782;

													long BgL_auxz00_8780;

													BgL_auxz00_8782 =
														STRING_REF(BGl_string2724z00zz__r4_strings_6_7z00,
														BgL_d0z00_1923);
													BgL_auxz00_8780 = (BgL_jz00_1919 + ((long) 1));
													STRING_SET(BgL_resz00_1916, BgL_auxz00_8780,
														BgL_auxz00_8782);
												}
												{
													long BgL_jz00_8787;

													long BgL_iz00_8785;

													BgL_iz00_8785 = (BgL_iz00_1918 + ((long) 1));
													BgL_jz00_8787 = (BgL_jz00_1919 + ((long) 2));
													BgL_jz00_1919 = BgL_jz00_8787;
													BgL_iz00_1918 = BgL_iz00_8785;
													goto BgL_zc3anonymousza31988ze3z83_1920;
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



/* _string-hex-extern */
	obj_t BGl__stringzd2hexzd2externz00zz__r4_strings_6_7z00(obj_t
		BgL_envz00_4139, obj_t BgL_strz00_4140)
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 1476 */
			{	/* Ieee/string.scm 1479 */
				obj_t BgL_auxz00_8789;

				if (STRINGP(BgL_strz00_4140))
					{	/* Ieee/string.scm 1479 */
						BgL_auxz00_8789 = BgL_strz00_4140;
					}
				else
					{
						obj_t BgL_auxz00_8792;

						BgL_auxz00_8792 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2595z00zz__r4_strings_6_7z00, BINT(((long) 58809)),
							BGl_string2725z00zz__r4_strings_6_7z00,
							BGl_string2597z00zz__r4_strings_6_7z00, BgL_strz00_4140);
						FAILURE(BgL_auxz00_8792, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2hexzd2externz00zz__r4_strings_6_7z00(BgL_auxz00_8789);
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_strings_6_7z00()
	{
		AN_OBJECT;
		{	/* Ieee/string.scm 18 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2726z00zz__r4_strings_6_7z00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2726z00zz__r4_strings_6_7z00));
		}
	}

#ifdef __cplusplus
}
#endif
