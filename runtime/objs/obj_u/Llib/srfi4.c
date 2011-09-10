/*===========================================================================*/
/*   (Llib/srfi4.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/srfi4.scm -indent -o objs/obj_u/Llib/srfi4.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_symbol2961z00zz__srfi4z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_makezd2s64vectorzd2zz__srfi4z00(long, obj_t);
	static obj_t BGl_symbol2965z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl__u32vectorzd2refzd2zz__srfi4z00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2969z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl__makezd2s8vectorzd2zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl_symbol2973z00zz__srfi4z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_s8vectorzd2ze3listz31zz__srfi4z00(obj_t);
	static obj_t BGl_symbol2977z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl__u64vectorzd2ze3listz31zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_s64vectorz00zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3u32vectorz31zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_s32vectorzf3zf3zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_f64vectorzf3zf3zz__srfi4z00(obj_t);
	static obj_t BGl__f64vectorzd2ze3listz31zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__s32vectorzd2ze3listz31zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2u32vectorzd2zz__srfi4z00(long, obj_t);
	static obj_t BGl__makezd2u16vectorzd2zz__srfi4z00(obj_t, obj_t);
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_u32vectorz00zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL long BGl_f32vectorzd2lengthzd2zz__srfi4z00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl__s16vectorzd2refzd2zz__srfi4z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_u16vectorzd2lengthzd2zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_u8vectorz00zz__srfi4z00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__srfi4z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_u32vectorzd2setz12zc0zz__srfi4z00(obj_t, long,
		unsigned long);
	BGL_EXPORTED_DECL long BGl_u64vectorzd2lengthzd2zz__srfi4z00(obj_t);
	static obj_t BGl__listzd2ze3s64vectorz31zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3s8vectorz31zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL unsigned long BGl_u32vectorzd2refzd2zz__srfi4z00(obj_t,
		long);
	BGL_EXPORTED_DECL obj_t BGl_makezd2s8vectorzd2zz__srfi4z00(long, obj_t);
	static obj_t BGl_genericzd2initzd2zz__srfi4z00();
	BGL_EXPORTED_DECL long BGl_u8vectorzd2lengthzd2zz__srfi4z00(obj_t);
	static obj_t BGl__u64vectorz00zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__s16vectorz00zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_s32vectorzd2setz12zc0zz__srfi4z00(obj_t, long,
		long);
	BGL_EXPORTED_DECL obj_t BGl_f64vectorzd2setz12zc0zz__srfi4z00(obj_t, long,
		double);
	static obj_t BGl__listzd2ze3u32vectorz31zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__s16vectorzd2lengthzd2zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_s64vectorzf3zf3zz__srfi4z00(obj_t);
	static obj_t BGl__u16vectorzf3zf3zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__s8vectorzd2refzd2zz__srfi4z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL short BGl_s16vectorzd2refzd2zz__srfi4z00(obj_t, long);
	static obj_t BGl__makezd2f64vectorzd2zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__makezd2s32vectorzd2zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3u16vectorz31zz__srfi4z00(obj_t);
	static obj_t BGl__s64vectorzd2lengthzd2zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__u32vectorzd2lengthzd2zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__f32vectorzd2setz12zc0zz__srfi4z00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_s64vectorzd2ze3listz31zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2u16vectorzd2zz__srfi4z00(long, obj_t);
	static obj_t BGl__u8vectorzd2setz12zc0zz__srfi4z00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__u8vectorzd2refzd2zz__srfi4z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_u16vectorz00zz__srfi4z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__srfi4z00();
	static obj_t BGl__u8vectorzd2lengthzd2zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL char BGl_s8vectorzd2refzd2zz__srfi4z00(obj_t, long);
	BGL_EXPORTED_DECL bool_t BGl_s8vectorzf3zf3zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_s8vectorz00zz__srfi4z00(obj_t);
	static obj_t BGl__u32vectorzf3zf3zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__srfi4z00();
	static obj_t BGl__u8vectorz00zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__listzd2ze3u16vectorz31zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__f32vectorz00zz__srfi4z00(obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3s32vectorz31zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3f64vectorz31zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL unsigned char BGl_u8vectorzd2refzd2zz__srfi4z00(obj_t,
		long);
	BGL_EXPORTED_DECL obj_t BGl_u8vectorzd2setz12zc0zz__srfi4z00(obj_t, long,
		unsigned char);
	BGL_EXPORTED_DECL obj_t BGl_u16vectorzd2ze3listz31zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL long BGl_s32vectorzd2lengthzd2zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL long BGl_f64vectorzd2lengthzd2zz__srfi4z00(obj_t);
	static obj_t BGl__s64vectorzd2ze3listz31zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__s64vectorzd2refzd2zz__srfi4z00(obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2u64vectorzd2zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2s32vectorzd2zz__srfi4z00(long, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2f64vectorzd2zz__srfi4z00(long, obj_t);
	static obj_t BGl__makezd2s16vectorzd2zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_s32vectorz00zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_f64vectorz00zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_f32vectorzd2setz12zc0zz__srfi4z00(obj_t, long,
		float);
	BGL_EXPORTED_DECL obj_t BGl_u32vectorzd2ze3listz31zz__srfi4z00(obj_t);
	static obj_t BGl__u8vectorzf3zf3zz__srfi4z00(obj_t, obj_t);
	extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__srfi4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_f32vectorzd2ze3listz31zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_u16vectorzf3zf3zz__srfi4z00(obj_t);
	static obj_t BGl__u16vectorzd2refzd2zz__srfi4z00(obj_t, obj_t, obj_t);
	extern long bgl_list_length(obj_t);
	static obj_t BGl__f32vectorzd2lengthzd2zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__s64vectorz00zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__u64vectorzf3zf3zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__f32vectorzf3zf3zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__listzd2ze3f64vectorz31zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__listzd2ze3s32vectorz31zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_s64vectorzd2refzd2zz__srfi4z00(obj_t,
		long);
	static obj_t BGl__u16vectorzd2lengthzd2zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__f64vectorzd2refzd2zz__srfi4z00(obj_t, obj_t, obj_t);
	static obj_t BGl__s32vectorzd2refzd2zz__srfi4z00(obj_t, obj_t, obj_t);
	static obj_t BGl__u16vectorzd2ze3listz31zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_s8vectorzd2lengthzd2zz__srfi4z00(obj_t);
	static obj_t BGl__s16vectorzf3zf3zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__u16vectorzd2setz12zc0zz__srfi4z00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__u32vectorz00zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__u64vectorzd2lengthzd2zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3u64vectorz31zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3s16vectorz31zz__srfi4z00(obj_t);
	static obj_t BGl__s16vectorzd2setz12zc0zz__srfi4z00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__u64vectorzd2setz12zc0zz__srfi4z00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2u64vectorzd2zz__srfi4z00(long, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2s16vectorzd2zz__srfi4z00(long, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_u64vectorz00zz__srfi4z00(obj_t);
	static obj_t BGl__u32vectorzd2ze3listz31zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__s8vectorz00zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_s16vectorz00zz__srfi4z00(obj_t);
	static obj_t BGl__makezd2f32vectorzd2zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL unsigned short BGl_u16vectorzd2refzd2zz__srfi4z00(obj_t,
		long);
	BGL_EXPORTED_DECL bool_t BGl_u32vectorzf3zf3zz__srfi4z00(obj_t);
	static obj_t BGl__listzd2ze3u8vectorz31zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__s64vectorzd2setz12zc0zz__srfi4z00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__f32vectorzd2ze3listz31zz__srfi4z00(obj_t, obj_t);
	extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	BGL_EXPORTED_DECL long BGl_s32vectorzd2refzd2zz__srfi4z00(obj_t, long);
	BGL_EXPORTED_DECL double BGl_f64vectorzd2refzd2zz__srfi4z00(obj_t, long);
	static obj_t BGl__f32vectorzd2refzd2zz__srfi4z00(obj_t, obj_t, obj_t);
	static obj_t BGl__f64vectorzf3zf3zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__s32vectorzf3zf3zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__s8vectorzd2lengthzd2zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_s16vectorzd2lengthzd2zz__srfi4z00(obj_t);
	static obj_t BGl__makezd2u8vectorzd2zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__listzd2ze3u64vectorz31zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__listzd2ze3s16vectorz31zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__u8vectorzd2ze3listz31zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_s64vectorzd2lengthzd2zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_homogeneouszd2vectorzf3z21zz__srfi4z00(obj_t);
	static obj_t BGl__homogeneouszd2vectorzf3z21zz__srfi4z00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL long BGl_u32vectorzd2lengthzd2zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_u16vectorzd2setz12zc0zz__srfi4z00(obj_t, long,
		unsigned short);
	static obj_t BGl__u16vectorz00zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__makezd2s64vectorzd2zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__s8vectorzd2ze3listz31zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_s16vectorzd2ze3listz31zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3f32vectorz31zz__srfi4z00(obj_t);
	static obj_t BGl__s8vectorzd2setz12zc0zz__srfi4z00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_s16vectorzd2setz12zc0zz__srfi4z00(obj_t, long,
		short);
	BGL_EXPORTED_DECL obj_t BGl_u64vectorzd2setz12zc0zz__srfi4z00(obj_t, long,
		unsigned BGL_LONGLONG_T);
	BGL_EXPORTED_DECL float BGl_f32vectorzd2refzd2zz__srfi4z00(obj_t, long);
	BGL_EXPORTED_DECL bool_t BGl_u64vectorzf3zf3zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_f32vectorzf3zf3zz__srfi4z00(obj_t);
	static obj_t BGl__makezd2u32vectorzd2zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2f32vectorzd2zz__srfi4z00(long, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_u64vectorzd2ze3listz31zz__srfi4z00(obj_t);
	static obj_t BGl__u64vectorzd2refzd2zz__srfi4z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_f32vectorz00zz__srfi4z00(obj_t);
	static obj_t BGl__s8vectorzf3zf3zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_s16vectorzf3zf3zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3u8vectorz31zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_s64vectorzd2setz12zc0zz__srfi4z00(obj_t, long,
		BGL_LONGLONG_T);
	BGL_EXPORTED_DECL obj_t BGl_makezd2u8vectorzd2zz__srfi4z00(long, obj_t);
	static obj_t BGl__f64vectorzd2lengthzd2zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__s32vectorzd2lengthzd2zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_s32vectorzd2ze3listz31zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_f64vectorzd2ze3listz31zz__srfi4z00(obj_t);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl__s64vectorzf3zf3zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl_symbol2852z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl_symbol2855z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl_symbol2857z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl_symbol2859z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl__u32vectorzd2setz12zc0zz__srfi4z00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2861z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl_symbol2863z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl_symbol2865z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl_symbol2867z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl_symbol2869z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl_symbol2871z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl_symbol2873z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl__listzd2ze3s8vectorz31zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl_symbol2910z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl_symbol2915z00zz__srfi4z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_s8vectorzd2setz12zc0zz__srfi4z00(obj_t, long,
		char);
	static obj_t BGl_symbol2918z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl__f64vectorz00zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__s32vectorz00zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl_symbol2921z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl__f64vectorzd2setz12zc0zz__srfi4z00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__s32vectorzd2setz12zc0zz__srfi4z00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2924z00zz__srfi4z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3s64vectorz31zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_u8vectorzd2ze3listz31zz__srfi4z00(obj_t);
	static obj_t BGl_symbol2927z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl__s16vectorzd2ze3listz31zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl_symbol2930z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl_symbol2933z00zz__srfi4z00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_u8vectorzf3zf3zz__srfi4z00(obj_t);
	static obj_t BGl_symbol2936z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zz__srfi4z00();
	static obj_t BGl__listzd2ze3f32vectorz31zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl_symbol2939z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl_symbol2942z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl_symbol2946z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl_symbol2950z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl_symbol2954z00zz__srfi4z00 = BUNSPEC;
	BGL_EXPORTED_DECL unsigned BGL_LONGLONG_T
		BGl_u64vectorzd2refzd2zz__srfi4z00(obj_t, long);
	static obj_t BGl_symbol2958z00zz__srfi4z00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_s16vectorzd2setz12zd2envz12zz__srfi4z00,
		BgL_bgl__s16vectorza7d2set3013za7, BGl__s16vectorzd2setz12zc0zz__srfi4z00,
		0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_f64vectorzd2ze3listzd2envze3zz__srfi4z00,
		BgL_bgl__f64vectorza7d2za7e33014z00,
		BGl__f64vectorzd2ze3listz31zz__srfi4z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_s32vectorzd2ze3listzd2envze3zz__srfi4z00,
		BgL_bgl__s32vectorza7d2za7e33015z00,
		BGl__s32vectorzd2ze3listz31zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u64vectorzd2envzd2zz__srfi4z00,
		BgL_bgl__u64vectorza700za7za7_3016za7, va_generic_entry,
		BGl__u64vectorz00zz__srfi4z00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u64vectorzd2setz12zd2envz12zz__srfi4z00,
		BgL_bgl__u64vectorza7d2set3017za7, BGl__u64vectorzd2setz12zc0zz__srfi4z00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u8vectorzd2setz12zd2envz12zz__srfi4z00,
		BgL_bgl__u8vectorza7d2setza73018z00, BGl__u8vectorzd2setz12zc0zz__srfi4z00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_f64vectorzd2refzd2envz00zz__srfi4z00,
		BgL_bgl__f64vectorza7d2ref3019za7, BGl__f64vectorzd2refzd2zz__srfi4z00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s32vectorzd2refzd2envz00zz__srfi4z00,
		BgL_bgl__s32vectorza7d2ref3020za7, BGl__s32vectorzd2refzd2zz__srfi4z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3u64vectorzd2envze3zz__srfi4z00,
		BgL_bgl__listza7d2za7e3u64ve3021z00,
		BGl__listzd2ze3u64vectorz31zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u8vectorzd2lengthzd2envz00zz__srfi4z00,
		BgL_bgl__u8vectorza7d2leng3022za7, BGl__u8vectorzd2lengthzd2zz__srfi4z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2s8vectorzd2envz00zz__srfi4z00,
		BgL_bgl__makeza7d2s8vector3023za7, opt_generic_entry,
		BGl__makezd2s8vectorzd2zz__srfi4z00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u16vectorzd2refzd2envz00zz__srfi4z00,
		BgL_bgl__u16vectorza7d2ref3024za7, BGl__u16vectorzd2refzd2zz__srfi4z00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2u8vectorzd2envz00zz__srfi4z00,
		BgL_bgl__makeza7d2u8vector3025za7, opt_generic_entry,
		BGl__makezd2u8vectorzd2zz__srfi4z00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u32vectorzd2envzd2zz__srfi4z00,
		BgL_bgl__u32vectorza700za7za7_3026za7, va_generic_entry,
		BGl__u32vectorz00zz__srfi4z00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_f32vectorzd2lengthzd2envz00zz__srfi4z00,
		BgL_bgl__f32vectorza7d2len3027za7, BGl__f32vectorzd2lengthzd2zz__srfi4z00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_s64vectorzd2ze3listzd2envze3zz__srfi4z00,
		BgL_bgl__s64vectorza7d2za7e33028z00,
		BGl__s64vectorzd2ze3listz31zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s64vectorzd2refzd2envz00zz__srfi4z00,
		BgL_bgl__s64vectorza7d2ref3029za7, BGl__s64vectorzd2refzd2zz__srfi4z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3u32vectorzd2envze3zz__srfi4z00,
		BgL_bgl__listza7d2za7e3u32ve3030z00,
		BGl__listzd2ze3u32vectorz31zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u32vectorzd2lengthzd2envz00zz__srfi4z00,
		BgL_bgl__u32vectorza7d2len3031za7, BGl__u32vectorzd2lengthzd2zz__srfi4z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s16vectorzd2envzd2zz__srfi4z00,
		BgL_bgl__s16vectorza700za7za7_3032za7, va_generic_entry,
		BGl__s16vectorz00zz__srfi4z00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_s16vectorzd2ze3listzd2envze3zz__srfi4z00,
		BgL_bgl__s16vectorza7d2za7e33033z00,
		BGl__s16vectorzd2ze3listz31zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u16vectorzd2setz12zd2envz12zz__srfi4z00,
		BgL_bgl__u16vectorza7d2set3034za7, BGl__u16vectorzd2setz12zc0zz__srfi4z00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u16vectorzf3zd2envz21zz__srfi4z00,
		BgL_bgl__u16vectorza7f3za7f33035z00, BGl__u16vectorzf3zf3zz__srfi4z00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_f32vectorzd2setz12zd2envz12zz__srfi4z00,
		BgL_bgl__f32vectorza7d2set3036za7, BGl__f32vectorzd2setz12zc0zz__srfi4z00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2s64vectorzd2envz00zz__srfi4z00,
		BgL_bgl__makeza7d2s64vecto3037za7, opt_generic_entry,
		BGl__makezd2s64vectorzd2zz__srfi4z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3s16vectorzd2envze3zz__srfi4z00,
		BgL_bgl__listza7d2za7e3s16ve3038z00,
		BGl__listzd2ze3s16vectorz31zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u32vectorzd2refzd2envz00zz__srfi4z00,
		BgL_bgl__u32vectorza7d2ref3039za7, BGl__u32vectorzd2refzd2zz__srfi4z00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s16vectorzf3zd2envz21zz__srfi4z00,
		BgL_bgl__s16vectorza7f3za7f33040z00, BGl__s16vectorzf3zf3zz__srfi4z00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u64vectorzf3zd2envz21zz__srfi4z00,
		BgL_bgl__u64vectorza7f3za7f33041z00, BGl__u64vectorzf3zf3zz__srfi4z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_homogeneouszd2vectorzf3zd2envzf3zz__srfi4z00,
		BgL_bgl__homogeneousza7d2v3042za7,
		BGl__homogeneouszd2vectorzf3z21zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2853z00zz__srfi4z00,
		BgL_bgl_string2853za700za7za7_3043za7, "homogeneous-vector-info", 23);
	      DEFINE_STRING(BGl_string2854z00zz__srfi4z00,
		BgL_bgl_string2854za700za7za7_3044za7, "Illegal hvector ident", 21);
	      DEFINE_STRING(BGl_string2856z00zz__srfi4z00,
		BgL_bgl_string2856za700za7za7_3045za7, "s8", 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u16vectorzd2lengthzd2envz00zz__srfi4z00,
		BgL_bgl__u16vectorza7d2len3046za7, BGl__u16vectorzd2lengthzd2zz__srfi4z00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2858z00zz__srfi4z00,
		BgL_bgl_string2858za700za7za7_3047za7, "u8", 2);
	      DEFINE_STRING(BGl_string2860z00zz__srfi4z00,
		BgL_bgl_string2860za700za7za7_3048za7, "s16", 3);
	      DEFINE_STRING(BGl_string2862z00zz__srfi4z00,
		BgL_bgl_string2862za700za7za7_3049za7, "u16", 3);
	      DEFINE_STRING(BGl_string2864z00zz__srfi4z00,
		BgL_bgl_string2864za700za7za7_3050za7, "s32", 3);
	      DEFINE_STRING(BGl_string2866z00zz__srfi4z00,
		BgL_bgl_string2866za700za7za7_3051za7, "u32", 3);
	      DEFINE_STRING(BGl_string2868z00zz__srfi4z00,
		BgL_bgl_string2868za700za7za7_3052za7, "s64", 3);
	      DEFINE_STRING(BGl_string2870z00zz__srfi4z00,
		BgL_bgl_string2870za700za7za7_3053za7, "u64", 3);
	      DEFINE_STRING(BGl_string2872z00zz__srfi4z00,
		BgL_bgl_string2872za700za7za7_3054za7, "f32", 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s8vectorzd2ze3listzd2envze3zz__srfi4z00,
		BgL_bgl__s8vectorza7d2za7e3l3055z00, BGl__s8vectorzd2ze3listz31zz__srfi4z00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2874z00zz__srfi4z00,
		BgL_bgl_string2874za700za7za7_3056za7, "f64", 3);
	      DEFINE_STRING(BGl_string2875z00zz__srfi4z00,
		BgL_bgl_string2875za700za7za7_3057za7, "hvector", 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s64vectorzf3zd2envz21zz__srfi4z00,
		BgL_bgl__s64vectorza7f3za7f33058z00, BGl__s64vectorzf3zf3zz__srfi4z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2876z00zz__srfi4z00,
		BgL_bgl_string2876za700za7za7_3059za7, "/tmp/bigloo/runtime/Llib/srfi4.scm",
		34);
	      DEFINE_STRING(BGl_string2877z00zz__srfi4z00,
		BgL_bgl_string2877za700za7za7_3060za7, "_s8vector-length", 16);
	      DEFINE_STRING(BGl_string2878z00zz__srfi4z00,
		BgL_bgl_string2878za700za7za7_3061za7, "s8vector", 8);
	      DEFINE_STRING(BGl_string2880z00zz__srfi4z00,
		BgL_bgl_string2880za700za7za7_3062za7, "u8vector", 8);
	      DEFINE_STRING(BGl_string2879z00zz__srfi4z00,
		BgL_bgl_string2879za700za7za7_3063za7, "_u8vector-length", 16);
	      DEFINE_STRING(BGl_string2881z00zz__srfi4z00,
		BgL_bgl_string2881za700za7za7_3064za7, "_s16vector-length", 17);
	      DEFINE_STRING(BGl_string2882z00zz__srfi4z00,
		BgL_bgl_string2882za700za7za7_3065za7, "s16vector", 9);
	      DEFINE_STRING(BGl_string2883z00zz__srfi4z00,
		BgL_bgl_string2883za700za7za7_3066za7, "_u16vector-length", 17);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s8vectorzd2envzd2zz__srfi4z00,
		BgL_bgl__s8vectorza700za7za7__3067za7, va_generic_entry,
		BGl__s8vectorz00zz__srfi4z00, BUNSPEC, -1);
	      DEFINE_STRING(BGl_string2884z00zz__srfi4z00,
		BgL_bgl_string2884za700za7za7_3068za7, "u16vector", 9);
	      DEFINE_STRING(BGl_string2885z00zz__srfi4z00,
		BgL_bgl_string2885za700za7za7_3069za7, "_s32vector-length", 17);
	      DEFINE_STRING(BGl_string2886z00zz__srfi4z00,
		BgL_bgl_string2886za700za7za7_3070za7, "s32vector", 9);
	      DEFINE_STRING(BGl_string2887z00zz__srfi4z00,
		BgL_bgl_string2887za700za7za7_3071za7, "_u32vector-length", 17);
	      DEFINE_STRING(BGl_string2888z00zz__srfi4z00,
		BgL_bgl_string2888za700za7za7_3072za7, "u32vector", 9);
	      DEFINE_STRING(BGl_string3000z00zz__srfi4z00,
		BgL_bgl_string3000za700za7za7_3073za7, "_list->f32vector", 16);
	      DEFINE_STRING(BGl_string2900z00zz__srfi4z00,
		BgL_bgl_string2900za700za7za7_3074za7, "_make-s16vector", 15);
	      DEFINE_STRING(BGl_string2890z00zz__srfi4z00,
		BgL_bgl_string2890za700za7za7_3075za7, "s64vector", 9);
	      DEFINE_STRING(BGl_string2889z00zz__srfi4z00,
		BgL_bgl_string2889za700za7za7_3076za7, "_s64vector-length", 17);
	      DEFINE_STRING(BGl_string3001z00zz__srfi4z00,
		BgL_bgl_string3001za700za7za7_3077za7, "_list->f64vector", 16);
	      DEFINE_STRING(BGl_string2901z00zz__srfi4z00,
		BgL_bgl_string2901za700za7za7_3078za7, "_make-u16vector", 15);
	      DEFINE_STRING(BGl_string2891z00zz__srfi4z00,
		BgL_bgl_string2891za700za7za7_3079za7, "_u64vector-length", 17);
	      DEFINE_STRING(BGl_string3002z00zz__srfi4z00,
		BgL_bgl_string3002za700za7za7_3080za7, "__srfi4", 7);
	      DEFINE_STRING(BGl_string2902z00zz__srfi4z00,
		BgL_bgl_string2902za700za7za7_3081za7, "_make-s32vector", 15);
	      DEFINE_STRING(BGl_string2892z00zz__srfi4z00,
		BgL_bgl_string2892za700za7za7_3082za7, "u64vector", 9);
	      DEFINE_STRING(BGl_string2903z00zz__srfi4z00,
		BgL_bgl_string2903za700za7za7_3083za7, "_make-u32vector", 15);
	      DEFINE_STRING(BGl_string2893z00zz__srfi4z00,
		BgL_bgl_string2893za700za7za7_3084za7, "_f32vector-length", 17);
	      DEFINE_STRING(BGl_string2904z00zz__srfi4z00,
		BgL_bgl_string2904za700za7za7_3085za7, "_make-s64vector", 15);
	      DEFINE_STRING(BGl_string2894z00zz__srfi4z00,
		BgL_bgl_string2894za700za7za7_3086za7, "f32vector", 9);
	      DEFINE_STRING(BGl_string2895z00zz__srfi4z00,
		BgL_bgl_string2895za700za7za7_3087za7, "_f64vector-length", 17);
	      DEFINE_STRING(BGl_string2906z00zz__srfi4z00,
		BgL_bgl_string2906za700za7za7_3088za7, "_make-u64vector", 15);
	      DEFINE_STRING(BGl_string2896z00zz__srfi4z00,
		BgL_bgl_string2896za700za7za7_3089za7, "f64vector", 9);
	      DEFINE_STRING(BGl_string2907z00zz__srfi4z00,
		BgL_bgl_string2907za700za7za7_3090za7, "_make-f32vector", 15);
	      DEFINE_STRING(BGl_string2897z00zz__srfi4z00,
		BgL_bgl_string2897za700za7za7_3091za7, "_make-s8vector", 14);
	      DEFINE_STRING(BGl_string2898z00zz__srfi4z00,
		BgL_bgl_string2898za700za7za7_3092za7, "long", 4);
	      DEFINE_STRING(BGl_string2909z00zz__srfi4z00,
		BgL_bgl_string2909za700za7za7_3093za7, "_make-f64vector", 15);
	      DEFINE_STRING(BGl_string2899z00zz__srfi4z00,
		BgL_bgl_string2899za700za7za7_3094za7, "_make-u8vector", 14);
	      DEFINE_STRING(BGl_string2911z00zz__srfi4z00,
		BgL_bgl_string2911za700za7za7_3095za7, "$s8vector-ref", 13);
	      DEFINE_STRING(BGl_string2912z00zz__srfi4z00,
		BgL_bgl_string2912za700za7za7_3096za7, "index out of range [0..", 23);
	      DEFINE_STRING(BGl_string2913z00zz__srfi4z00,
		BgL_bgl_string2913za700za7za7_3097za7, "]", 1);
	      DEFINE_STRING(BGl_string2914z00zz__srfi4z00,
		BgL_bgl_string2914za700za7za7_3098za7, "_s8vector-ref", 13);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2u16vectorzd2envz00zz__srfi4z00,
		BgL_bgl__makeza7d2u16vecto3099za7, opt_generic_entry,
		BGl__makezd2u16vectorzd2zz__srfi4z00, BFALSE, -1);
	      DEFINE_STRING(BGl_string2916z00zz__srfi4z00,
		BgL_bgl_string2916za700za7za7_3100za7, "$u8vector-ref", 13);
	      DEFINE_STRING(BGl_string2917z00zz__srfi4z00,
		BgL_bgl_string2917za700za7za7_3101za7, "_u8vector-ref", 13);
	      DEFINE_STRING(BGl_string2920z00zz__srfi4z00,
		BgL_bgl_string2920za700za7za7_3102za7, "_s16vector-ref", 14);
	      DEFINE_STRING(BGl_string2919z00zz__srfi4z00,
		BgL_bgl_string2919za700za7za7_3103za7, "$s16vector-ref", 14);
	      DEFINE_STRING(BGl_string2922z00zz__srfi4z00,
		BgL_bgl_string2922za700za7za7_3104za7, "$u16vector-ref", 14);
	      DEFINE_STRING(BGl_string2923z00zz__srfi4z00,
		BgL_bgl_string2923za700za7za7_3105za7, "_u16vector-ref", 14);
	      DEFINE_STRING(BGl_string2925z00zz__srfi4z00,
		BgL_bgl_string2925za700za7za7_3106za7, "$s32vector-ref", 14);
	      DEFINE_STRING(BGl_string2926z00zz__srfi4z00,
		BgL_bgl_string2926za700za7za7_3107za7, "_s32vector-ref", 14);
	      DEFINE_STRING(BGl_string2928z00zz__srfi4z00,
		BgL_bgl_string2928za700za7za7_3108za7, "$u32vector-ref", 14);
	      DEFINE_STRING(BGl_string2929z00zz__srfi4z00,
		BgL_bgl_string2929za700za7za7_3109za7, "_u32vector-ref", 14);
	      DEFINE_STRING(BGl_string2931z00zz__srfi4z00,
		BgL_bgl_string2931za700za7za7_3110za7, "$s64vector-ref", 14);
	      DEFINE_STRING(BGl_string2932z00zz__srfi4z00,
		BgL_bgl_string2932za700za7za7_3111za7, "_s64vector-ref", 14);
	      DEFINE_STRING(BGl_string2934z00zz__srfi4z00,
		BgL_bgl_string2934za700za7za7_3112za7, "$u64vector-ref", 14);
	      DEFINE_STRING(BGl_string2935z00zz__srfi4z00,
		BgL_bgl_string2935za700za7za7_3113za7, "_u64vector-ref", 14);
	      DEFINE_STRING(BGl_string2937z00zz__srfi4z00,
		BgL_bgl_string2937za700za7za7_3114za7, "$f32vector-ref", 14);
	      DEFINE_STRING(BGl_string2938z00zz__srfi4z00,
		BgL_bgl_string2938za700za7za7_3115za7, "_f32vector-ref", 14);
	      DEFINE_STRING(BGl_string2940z00zz__srfi4z00,
		BgL_bgl_string2940za700za7za7_3116za7, "$f64vector-ref", 14);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s8vectorzd2refzd2envz00zz__srfi4z00,
		BgL_bgl__s8vectorza7d2refza73117z00, BGl__s8vectorzd2refzd2zz__srfi4z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2941z00zz__srfi4z00,
		BgL_bgl_string2941za700za7za7_3118za7, "_f64vector-ref", 14);
	      DEFINE_STRING(BGl_string2943z00zz__srfi4z00,
		BgL_bgl_string2943za700za7za7_3119za7, "$s8vector-set!", 14);
	      DEFINE_STRING(BGl_string2944z00zz__srfi4z00,
		BgL_bgl_string2944za700za7za7_3120za7, "_s8vector-set!", 14);
	      DEFINE_STRING(BGl_string2945z00zz__srfi4z00,
		BgL_bgl_string2945za700za7za7_3121za7, "byte", 4);
	      DEFINE_STRING(BGl_string2947z00zz__srfi4z00,
		BgL_bgl_string2947za700za7za7_3122za7, "$u8vector-set!", 14);
	      DEFINE_STRING(BGl_string2948z00zz__srfi4z00,
		BgL_bgl_string2948za700za7za7_3123za7, "_u8vector-set!", 14);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u8vectorzd2envzd2zz__srfi4z00,
		BgL_bgl__u8vectorza700za7za7__3124za7, va_generic_entry,
		BGl__u8vectorz00zz__srfi4z00, BUNSPEC, -1);
	      DEFINE_STRING(BGl_string2949z00zz__srfi4z00,
		BgL_bgl_string2949za700za7za7_3125za7, "ubyte", 5);
	      DEFINE_STRING(BGl_string2951z00zz__srfi4z00,
		BgL_bgl_string2951za700za7za7_3126za7, "$s16vector-set!", 15);
	      DEFINE_STRING(BGl_string2952z00zz__srfi4z00,
		BgL_bgl_string2952za700za7za7_3127za7, "_s16vector-set!", 15);
	      DEFINE_STRING(BGl_string2953z00zz__srfi4z00,
		BgL_bgl_string2953za700za7za7_3128za7, "short", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_u32vectorzd2ze3listzd2envze3zz__srfi4z00,
		BgL_bgl__u32vectorza7d2za7e33129z00,
		BGl__u32vectorzd2ze3listz31zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2955z00zz__srfi4z00,
		BgL_bgl_string2955za700za7za7_3130za7, "$u16vector-set!", 15);
	      DEFINE_STRING(BGl_string2956z00zz__srfi4z00,
		BgL_bgl_string2956za700za7za7_3131za7, "_u16vector-set!", 15);
	      DEFINE_STRING(BGl_string2957z00zz__srfi4z00,
		BgL_bgl_string2957za700za7za7_3132za7, "ushort", 6);
	      DEFINE_STRING(BGl_string2960z00zz__srfi4z00,
		BgL_bgl_string2960za700za7za7_3133za7, "_s32vector-set!", 15);
	      DEFINE_STRING(BGl_string2959z00zz__srfi4z00,
		BgL_bgl_string2959za700za7za7_3134za7, "$s32vector-set!", 15);
	      DEFINE_STRING(BGl_string2962z00zz__srfi4z00,
		BgL_bgl_string2962za700za7za7_3135za7, "$u32vector-set!", 15);
	      DEFINE_STRING(BGl_string2963z00zz__srfi4z00,
		BgL_bgl_string2963za700za7za7_3136za7, "_u32vector-set!", 15);
	      DEFINE_STRING(BGl_string2964z00zz__srfi4z00,
		BgL_bgl_string2964za700za7za7_3137za7, "ulong", 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2f64vectorzd2envz00zz__srfi4z00,
		BgL_bgl__makeza7d2f64vecto3138za7, opt_generic_entry,
		BGl__makezd2f64vectorzd2zz__srfi4z00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2s32vectorzd2envz00zz__srfi4z00,
		BgL_bgl__makeza7d2s32vecto3139za7, opt_generic_entry,
		BGl__makezd2s32vectorzd2zz__srfi4z00, BFALSE, -1);
	      DEFINE_STRING(BGl_string2966z00zz__srfi4z00,
		BgL_bgl_string2966za700za7za7_3140za7, "$s64vector-set!", 15);
	      DEFINE_STRING(BGl_string2967z00zz__srfi4z00,
		BgL_bgl_string2967za700za7za7_3141za7, "_s64vector-set!", 15);
	      DEFINE_STRING(BGl_string2968z00zz__srfi4z00,
		BgL_bgl_string2968za700za7za7_3142za7, "llong", 5);
	      DEFINE_STRING(BGl_string2970z00zz__srfi4z00,
		BgL_bgl_string2970za700za7za7_3143za7, "$u64vector-set!", 15);
	      DEFINE_STRING(BGl_string2971z00zz__srfi4z00,
		BgL_bgl_string2971za700za7za7_3144za7, "_u64vector-set!", 15);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u64vectorzd2refzd2envz00zz__srfi4z00,
		BgL_bgl__u64vectorza7d2ref3145za7, BGl__u64vectorzd2refzd2zz__srfi4z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2972z00zz__srfi4z00,
		BgL_bgl_string2972za700za7za7_3146za7, "ullong", 6);
	      DEFINE_STRING(BGl_string2974z00zz__srfi4z00,
		BgL_bgl_string2974za700za7za7_3147za7, "$f32vector-set!", 15);
	      DEFINE_STRING(BGl_string2975z00zz__srfi4z00,
		BgL_bgl_string2975za700za7za7_3148za7, "_f32vector-set!", 15);
	      DEFINE_STRING(BGl_string2976z00zz__srfi4z00,
		BgL_bgl_string2976za700za7za7_3149za7, "float", 5);
	      DEFINE_STRING(BGl_string2978z00zz__srfi4z00,
		BgL_bgl_string2978za700za7za7_3150za7, "$f64vector-set!", 15);
	      DEFINE_STRING(BGl_string2980z00zz__srfi4z00,
		BgL_bgl_string2980za700za7za7_3151za7, "double", 6);
	      DEFINE_STRING(BGl_string2979z00zz__srfi4z00,
		BgL_bgl_string2979za700za7za7_3152za7, "_f64vector-set!", 15);
	      DEFINE_STRING(BGl_string2981z00zz__srfi4z00,
		BgL_bgl_string2981za700za7za7_3153za7, "_s8vector->list", 15);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s8vectorzf3zd2envz21zz__srfi4z00,
		BgL_bgl__s8vectorza7f3za7f3za73154za7, BGl__s8vectorzf3zf3zz__srfi4z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2982z00zz__srfi4z00,
		BgL_bgl_string2982za700za7za7_3155za7, "_u8vector->list", 15);
	      DEFINE_STRING(BGl_string2983z00zz__srfi4z00,
		BgL_bgl_string2983za700za7za7_3156za7, "_s16vector->list", 16);
	      DEFINE_STRING(BGl_string2984z00zz__srfi4z00,
		BgL_bgl_string2984za700za7za7_3157za7, "_u16vector->list", 16);
	      DEFINE_STRING(BGl_string2985z00zz__srfi4z00,
		BgL_bgl_string2985za700za7za7_3158za7, "_s32vector->list", 16);
	      DEFINE_STRING(BGl_string2986z00zz__srfi4z00,
		BgL_bgl_string2986za700za7za7_3159za7, "_u32vector->list", 16);
	      DEFINE_STRING(BGl_string2987z00zz__srfi4z00,
		BgL_bgl_string2987za700za7za7_3160za7, "_s64vector->list", 16);
	      DEFINE_STRING(BGl_string2988z00zz__srfi4z00,
		BgL_bgl_string2988za700za7za7_3161za7, "_u64vector->list", 16);
	      DEFINE_STRING(BGl_string2990z00zz__srfi4z00,
		BgL_bgl_string2990za700za7za7_3162za7, "_f64vector->list", 16);
	      DEFINE_STRING(BGl_string2989z00zz__srfi4z00,
		BgL_bgl_string2989za700za7za7_3163za7, "_f32vector->list", 16);
	      DEFINE_STRING(BGl_string2991z00zz__srfi4z00,
		BgL_bgl_string2991za700za7za7_3164za7, "_list->s8vector", 15);
	      DEFINE_STRING(BGl_string2992z00zz__srfi4z00,
		BgL_bgl_string2992za700za7za7_3165za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string2993z00zz__srfi4z00,
		BgL_bgl_string2993za700za7za7_3166za7, "_list->u8vector", 15);
	      DEFINE_STRING(BGl_string2994z00zz__srfi4z00,
		BgL_bgl_string2994za700za7za7_3167za7, "_list->s16vector", 16);
	      DEFINE_STRING(BGl_string2995z00zz__srfi4z00,
		BgL_bgl_string2995za700za7za7_3168za7, "_list->u16vector", 16);
	      DEFINE_STRING(BGl_string2996z00zz__srfi4z00,
		BgL_bgl_string2996za700za7za7_3169za7, "_list->s32vector", 16);
	      DEFINE_STRING(BGl_string2997z00zz__srfi4z00,
		BgL_bgl_string2997za700za7za7_3170za7, "_list->u32vector", 16);
	      DEFINE_STRING(BGl_string2998z00zz__srfi4z00,
		BgL_bgl_string2998za700za7za7_3171za7, "_list->s64vector", 16);
	      DEFINE_STRING(BGl_string2999z00zz__srfi4z00,
		BgL_bgl_string2999za700za7za7_3172za7, "_list->u64vector", 16);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3s8vectorzd2envze3zz__srfi4z00,
		BgL_bgl__listza7d2za7e3s8vec3173z00, BGl__listzd2ze3s8vectorz31zz__srfi4z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_f64vectorzd2setz12zd2envz12zz__srfi4z00,
		BgL_bgl__f64vectorza7d2set3174za7, BGl__f64vectorzd2setz12zc0zz__srfi4z00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s32vectorzd2setz12zd2envz12zz__srfi4z00,
		BgL_bgl__s32vectorza7d2set3175za7, BGl__s32vectorzd2setz12zc0zz__srfi4z00,
		0L, BUNSPEC, 3);
	      DEFINE_REAL(BGl_real2908z00zz__srfi4z00,
		BgL_bgl_real2908za700za7za7__s3176za7, 0.0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3u8vectorzd2envze3zz__srfi4z00,
		BgL_bgl__listza7d2za7e3u8vec3177z00, BGl__listzd2ze3u8vectorz31zz__srfi4z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_f64vectorzd2lengthzd2envz00zz__srfi4z00,
		BgL_bgl__f64vectorza7d2len3178za7, BGl__f64vectorzd2lengthzd2zz__srfi4z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s32vectorzd2lengthzd2envz00zz__srfi4z00,
		BgL_bgl__s32vectorza7d2len3179za7, BGl__s32vectorzd2lengthzd2zz__srfi4z00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_u64vectorzd2ze3listzd2envze3zz__srfi4z00,
		BgL_bgl__u64vectorza7d2za7e33180z00,
		BGl__u64vectorzd2ze3listz31zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2f32vectorzd2envz00zz__srfi4z00,
		BgL_bgl__makeza7d2f32vecto3181za7, opt_generic_entry,
		BGl__makezd2f32vectorzd2zz__srfi4z00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s64vectorzd2envzd2zz__srfi4z00,
		BgL_bgl__s64vectorza700za7za7_3182za7, va_generic_entry,
		BGl__s64vectorz00zz__srfi4z00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u64vectorzd2lengthzd2envz00zz__srfi4z00,
		BgL_bgl__u64vectorza7d2len3183za7, BGl__u64vectorzd2lengthzd2zz__srfi4z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u32vectorzf3zd2envz21zz__srfi4z00,
		BgL_bgl__u32vectorza7f3za7f33184z00, BGl__u32vectorzf3zf3zz__srfi4z00, 0L,
		BUNSPEC, 1);
	      DEFINE_LLONG(BGl_llong2905z00zz__srfi4z00,
		BgL_bgl_llong2905za700za7za7__3185za7, ((BGL_LONGLONG_T) 0));
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3s64vectorzd2envze3zz__srfi4z00,
		BgL_bgl__listza7d2za7e3s64ve3186z00,
		BGl__listzd2ze3s64vectorz31zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u8vectorzd2ze3listzd2envze3zz__srfi4z00,
		BgL_bgl__u8vectorza7d2za7e3l3187z00, BGl__u8vectorzd2ze3listz31zz__srfi4z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_f64vectorzf3zd2envz21zz__srfi4z00,
		BgL_bgl__f64vectorza7f3za7f33188z00, BGl__f64vectorzf3zf3zz__srfi4z00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s32vectorzf3zd2envz21zz__srfi4z00,
		BgL_bgl__s32vectorza7f3za7f33189z00, BGl__s32vectorzf3zf3zz__srfi4z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_u16vectorzd2ze3listzd2envze3zz__srfi4z00,
		BgL_bgl__u16vectorza7d2za7e33190z00,
		BGl__u16vectorzd2ze3listz31zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s8vectorzd2lengthzd2envz00zz__srfi4z00,
		BgL_bgl__s8vectorza7d2leng3191za7, BGl__s8vectorzd2lengthzd2zz__srfi4z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s16vectorzd2lengthzd2envz00zz__srfi4z00,
		BgL_bgl__s16vectorza7d2len3192za7, BGl__s16vectorzd2lengthzd2zz__srfi4z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u16vectorzd2envzd2zz__srfi4z00,
		BgL_bgl__u16vectorza700za7za7_3193za7, va_generic_entry,
		BGl__u16vectorz00zz__srfi4z00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_f64vectorzd2envzd2zz__srfi4z00,
		BgL_bgl__f64vectorza700za7za7_3194za7, va_generic_entry,
		BGl__f64vectorz00zz__srfi4z00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s32vectorzd2envzd2zz__srfi4z00,
		BgL_bgl__s32vectorza700za7za7_3195za7, va_generic_entry,
		BGl__s32vectorz00zz__srfi4z00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2u64vectorzd2envz00zz__srfi4z00,
		BgL_bgl__makeza7d2u64vecto3196za7, opt_generic_entry,
		BGl__makezd2u64vectorzd2zz__srfi4z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3u16vectorzd2envze3zz__srfi4z00,
		BgL_bgl__listza7d2za7e3u16ve3197z00,
		BGl__listzd2ze3u16vectorz31zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s64vectorzd2setz12zd2envz12zz__srfi4z00,
		BgL_bgl__s64vectorza7d2set3198za7, BGl__s64vectorzd2setz12zc0zz__srfi4z00,
		0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3f64vectorzd2envze3zz__srfi4z00,
		BgL_bgl__listza7d2za7e3f64ve3199z00,
		BGl__listzd2ze3f64vectorz31zz__srfi4z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3s32vectorzd2envze3zz__srfi4z00,
		BgL_bgl__listza7d2za7e3s32ve3200z00,
		BGl__listzd2ze3s32vectorz31zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u8vectorzd2refzd2envz00zz__srfi4z00,
		BgL_bgl__u8vectorza7d2refza73201z00, BGl__u8vectorzd2refzd2zz__srfi4z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_homogeneouszd2vectorzd2infozd2envzd2zz__srfi4z00,
		BgL_bgl__homogeneousza7d2v3202za7,
		BGl__homogeneouszd2vectorzd2infoz00zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s8vectorzd2setz12zd2envz12zz__srfi4z00,
		BgL_bgl__s8vectorza7d2setza73203z00, BGl__s8vectorzd2setz12zc0zz__srfi4z00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u32vectorzd2setz12zd2envz12zz__srfi4z00,
		BgL_bgl__u32vectorza7d2set3204za7, BGl__u32vectorzd2setz12zc0zz__srfi4z00,
		0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_f32vectorzd2ze3listzd2envze3zz__srfi4z00,
		BgL_bgl__f32vectorza7d2za7e33205z00,
		BGl__f32vectorzd2ze3listz31zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_f32vectorzd2envzd2zz__srfi4z00,
		BgL_bgl__f32vectorza700za7za7_3206za7, va_generic_entry,
		BGl__f32vectorz00zz__srfi4z00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2u32vectorzd2envz00zz__srfi4z00,
		BgL_bgl__makeza7d2u32vecto3207za7, opt_generic_entry,
		BGl__makezd2u32vectorzd2zz__srfi4z00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s16vectorzd2refzd2envz00zz__srfi4z00,
		BgL_bgl__s16vectorza7d2ref3208za7, BGl__s16vectorzd2refzd2zz__srfi4z00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u8vectorzf3zd2envz21zz__srfi4z00,
		BgL_bgl__u8vectorza7f3za7f3za73209za7, BGl__u8vectorzf3zf3zz__srfi4z00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_f32vectorzd2refzd2envz00zz__srfi4z00,
		BgL_bgl__f32vectorza7d2ref3210za7, BGl__f32vectorzd2refzd2zz__srfi4z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3f32vectorzd2envze3zz__srfi4z00,
		BgL_bgl__listza7d2za7e3f32ve3211z00,
		BGl__listzd2ze3f32vectorz31zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s64vectorzd2lengthzd2envz00zz__srfi4z00,
		BgL_bgl__s64vectorza7d2len3212za7, BGl__s64vectorzd2lengthzd2zz__srfi4z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_f32vectorzf3zd2envz21zz__srfi4z00,
		BgL_bgl__f32vectorza7f3za7f33213z00, BGl__f32vectorzf3zf3zz__srfi4z00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2s16vectorzd2envz00zz__srfi4z00,
		BgL_bgl__makeza7d2s16vecto3214za7, opt_generic_entry,
		BGl__makezd2s16vectorzd2zz__srfi4z00, BFALSE, -1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__srfi4z00(long
		BgL_checksumz00_4024, char *BgL_fromz00_4025)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__srfi4z00))
				{
					BGl_requirezd2initializa7ationz75zz__srfi4z00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__srfi4z00();
					BGl_importedzd2moduleszd2initz00zz__srfi4z00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__srfi4z00()
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 15 */
			BGl_symbol2852z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2853z00zz__srfi4z00);
			BGl_symbol2855z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2856z00zz__srfi4z00);
			BGl_symbol2857z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2858z00zz__srfi4z00);
			BGl_symbol2859z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2860z00zz__srfi4z00);
			BGl_symbol2861z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2862z00zz__srfi4z00);
			BGl_symbol2863z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2864z00zz__srfi4z00);
			BGl_symbol2865z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2866z00zz__srfi4z00);
			BGl_symbol2867z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2868z00zz__srfi4z00);
			BGl_symbol2869z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2870z00zz__srfi4z00);
			BGl_symbol2871z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2872z00zz__srfi4z00);
			BGl_symbol2873z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2874z00zz__srfi4z00);
			BGl_symbol2910z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2911z00zz__srfi4z00);
			BGl_symbol2915z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2916z00zz__srfi4z00);
			BGl_symbol2918z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2919z00zz__srfi4z00);
			BGl_symbol2921z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2922z00zz__srfi4z00);
			BGl_symbol2924z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2925z00zz__srfi4z00);
			BGl_symbol2927z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2928z00zz__srfi4z00);
			BGl_symbol2930z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2931z00zz__srfi4z00);
			BGl_symbol2933z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2934z00zz__srfi4z00);
			BGl_symbol2936z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2937z00zz__srfi4z00);
			BGl_symbol2939z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2940z00zz__srfi4z00);
			BGl_symbol2942z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2943z00zz__srfi4z00);
			BGl_symbol2946z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2947z00zz__srfi4z00);
			BGl_symbol2950z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2951z00zz__srfi4z00);
			BGl_symbol2954z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2955z00zz__srfi4z00);
			BGl_symbol2958z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2959z00zz__srfi4z00);
			BGl_symbol2961z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2962z00zz__srfi4z00);
			BGl_symbol2965z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2966z00zz__srfi4z00);
			BGl_symbol2969z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2970z00zz__srfi4z00);
			BGl_symbol2973z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2974z00zz__srfi4z00);
			return (BGl_symbol2977z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2978z00zz__srfi4z00), BUNSPEC);
		}
	}



/* homogeneous-vector? */
	BGL_EXPORTED_DEF obj_t BGl_homogeneouszd2vectorzf3z21zz__srfi4z00(obj_t
		BgL_xz00_1)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 325 */
			return BBOOL(BGL_HVECTORP(BgL_xz00_1));
		}
	}



/* _homogeneous-vector? */
	obj_t BGl__homogeneouszd2vectorzf3z21zz__srfi4z00(obj_t BgL_envz00_3279,
		obj_t BgL_xz00_3280)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 325 */
			return BBOOL(BGL_HVECTORP(BgL_xz00_3280));
		}
	}



/* s8vector? */
	BGL_EXPORTED_DEF bool_t BGl_s8vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_2)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 326 */
			return BGL_S8VECTORP(BgL_xz00_2);
		}
	}



/* _s8vector? */
	obj_t BGl__s8vectorzf3zf3zz__srfi4z00(obj_t BgL_envz00_3281,
		obj_t BgL_xz00_3282)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 326 */
			return BBOOL(BGL_S8VECTORP(BgL_xz00_3282));
		}
	}



/* u8vector? */
	BGL_EXPORTED_DEF bool_t BGl_u8vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_3)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 327 */
			return BGL_U8VECTORP(BgL_xz00_3);
		}
	}



/* _u8vector? */
	obj_t BGl__u8vectorzf3zf3zz__srfi4z00(obj_t BgL_envz00_3283,
		obj_t BgL_xz00_3284)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 327 */
			return BBOOL(BGL_U8VECTORP(BgL_xz00_3284));
		}
	}



/* s16vector? */
	BGL_EXPORTED_DEF bool_t BGl_s16vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_4)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 328 */
			return BGL_S16VECTORP(BgL_xz00_4);
		}
	}



/* _s16vector? */
	obj_t BGl__s16vectorzf3zf3zz__srfi4z00(obj_t BgL_envz00_3285,
		obj_t BgL_xz00_3286)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 328 */
			return BBOOL(BGL_S16VECTORP(BgL_xz00_3286));
		}
	}



/* u16vector? */
	BGL_EXPORTED_DEF bool_t BGl_u16vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_5)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 329 */
			return BGL_U16VECTORP(BgL_xz00_5);
		}
	}



/* _u16vector? */
	obj_t BGl__u16vectorzf3zf3zz__srfi4z00(obj_t BgL_envz00_3287,
		obj_t BgL_xz00_3288)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 329 */
			return BBOOL(BGL_U16VECTORP(BgL_xz00_3288));
		}
	}



/* s32vector? */
	BGL_EXPORTED_DEF bool_t BGl_s32vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_6)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 330 */
			return BGL_S32VECTORP(BgL_xz00_6);
		}
	}



/* _s32vector? */
	obj_t BGl__s32vectorzf3zf3zz__srfi4z00(obj_t BgL_envz00_3289,
		obj_t BgL_xz00_3290)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 330 */
			return BBOOL(BGL_S32VECTORP(BgL_xz00_3290));
		}
	}



/* u32vector? */
	BGL_EXPORTED_DEF bool_t BGl_u32vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_7)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 331 */
			return BGL_U32VECTORP(BgL_xz00_7);
		}
	}



/* _u32vector? */
	obj_t BGl__u32vectorzf3zf3zz__srfi4z00(obj_t BgL_envz00_3291,
		obj_t BgL_xz00_3292)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 331 */
			return BBOOL(BGL_U32VECTORP(BgL_xz00_3292));
		}
	}



/* s64vector? */
	BGL_EXPORTED_DEF bool_t BGl_s64vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_8)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 332 */
			return BGL_S64VECTORP(BgL_xz00_8);
		}
	}



/* _s64vector? */
	obj_t BGl__s64vectorzf3zf3zz__srfi4z00(obj_t BgL_envz00_3293,
		obj_t BgL_xz00_3294)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 332 */
			return BBOOL(BGL_S64VECTORP(BgL_xz00_3294));
		}
	}



/* u64vector? */
	BGL_EXPORTED_DEF bool_t BGl_u64vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_9)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 333 */
			return BGL_U64VECTORP(BgL_xz00_9);
		}
	}



/* _u64vector? */
	obj_t BGl__u64vectorzf3zf3zz__srfi4z00(obj_t BgL_envz00_3295,
		obj_t BgL_xz00_3296)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 333 */
			return BBOOL(BGL_U64VECTORP(BgL_xz00_3296));
		}
	}



/* f32vector? */
	BGL_EXPORTED_DEF bool_t BGl_f32vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_10)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 334 */
			return BGL_F32VECTORP(BgL_xz00_10);
		}
	}



/* _f32vector? */
	obj_t BGl__f32vectorzf3zf3zz__srfi4z00(obj_t BgL_envz00_3297,
		obj_t BgL_xz00_3298)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 334 */
			return BBOOL(BGL_F32VECTORP(BgL_xz00_3298));
		}
	}



/* f64vector? */
	BGL_EXPORTED_DEF bool_t BGl_f64vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_11)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 335 */
			return BGL_F64VECTORP(BgL_xz00_11);
		}
	}



/* _f64vector? */
	obj_t BGl__f64vectorzf3zf3zz__srfi4z00(obj_t BgL_envz00_3299,
		obj_t BgL_xz00_3300)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 335 */
			return BBOOL(BGL_F64VECTORP(BgL_xz00_3300));
		}
	}



/* homogeneous-vector-info */
	BGL_EXPORTED_DEF obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t
		BgL_oz00_12)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 340 */
			if (BGL_HVECTORP(BgL_oz00_12))
				{

					{	/* Llib/srfi4.scm 342 */
						int BgL_aux1828z00_909;

						BgL_aux1828z00_909 = BGL_HVECTOR_IDENT(BgL_oz00_12);
						switch ((long) (BgL_aux1828z00_909))
							{
							case ((long) 0):

								{	/* Llib/srfi4.scm 346 */
									obj_t BgL_val0_1891z00_911;

									BgL_val0_1891z00_911 = BGl_symbol2855z00zz__srfi4z00;
									{	/* Llib/srfi4.scm 346 */
										int BgL_auxz00_4099;

										BgL_auxz00_4099 = (int) (((long) 4));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_4099);
									}
									{	/* Llib/srfi4.scm 346 */
										obj_t BgL_auxz00_4104;

										int BgL_auxz00_4102;

										BgL_auxz00_4104 = BINT(((long) 1));
										BgL_auxz00_4102 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4102, BgL_auxz00_4104);
									}
									{	/* Llib/srfi4.scm 346 */
										int BgL_auxz00_4107;

										BgL_auxz00_4107 = (int) (((long) 2));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4107,
											BGl_s8vectorzd2refzd2envz00zz__srfi4z00);
									}
									{	/* Llib/srfi4.scm 346 */
										int BgL_auxz00_4110;

										BgL_auxz00_4110 = (int) (((long) 3));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4110,
											BGl_s8vectorzd2setz12zd2envz12zz__srfi4z00);
									}
									return BgL_val0_1891z00_911;
								}
								break;
							case ((long) 1):

								{	/* Llib/srfi4.scm 348 */
									obj_t BgL_val0_1895z00_915;

									BgL_val0_1895z00_915 = BGl_symbol2857z00zz__srfi4z00;
									{	/* Llib/srfi4.scm 348 */
										int BgL_auxz00_4113;

										BgL_auxz00_4113 = (int) (((long) 4));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_4113);
									}
									{	/* Llib/srfi4.scm 348 */
										obj_t BgL_auxz00_4118;

										int BgL_auxz00_4116;

										BgL_auxz00_4118 = BINT(((long) 1));
										BgL_auxz00_4116 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4116, BgL_auxz00_4118);
									}
									{	/* Llib/srfi4.scm 348 */
										int BgL_auxz00_4121;

										BgL_auxz00_4121 = (int) (((long) 2));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4121,
											BGl_u8vectorzd2refzd2envz00zz__srfi4z00);
									}
									{	/* Llib/srfi4.scm 348 */
										int BgL_auxz00_4124;

										BgL_auxz00_4124 = (int) (((long) 3));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4124,
											BGl_u8vectorzd2setz12zd2envz12zz__srfi4z00);
									}
									return BgL_val0_1895z00_915;
								}
								break;
							case ((long) 2):

								{	/* Llib/srfi4.scm 350 */
									obj_t BgL_val0_1899z00_919;

									BgL_val0_1899z00_919 = BGl_symbol2859z00zz__srfi4z00;
									{	/* Llib/srfi4.scm 350 */
										int BgL_auxz00_4127;

										BgL_auxz00_4127 = (int) (((long) 4));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_4127);
									}
									{	/* Llib/srfi4.scm 350 */
										obj_t BgL_auxz00_4132;

										int BgL_auxz00_4130;

										BgL_auxz00_4132 = BINT(((long) 2));
										BgL_auxz00_4130 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4130, BgL_auxz00_4132);
									}
									{	/* Llib/srfi4.scm 350 */
										int BgL_auxz00_4135;

										BgL_auxz00_4135 = (int) (((long) 2));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4135,
											BGl_s16vectorzd2refzd2envz00zz__srfi4z00);
									}
									{	/* Llib/srfi4.scm 350 */
										int BgL_auxz00_4138;

										BgL_auxz00_4138 = (int) (((long) 3));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4138,
											BGl_s16vectorzd2setz12zd2envz12zz__srfi4z00);
									}
									return BgL_val0_1899z00_919;
								}
								break;
							case ((long) 3):

								{	/* Llib/srfi4.scm 352 */
									obj_t BgL_val0_1903z00_923;

									BgL_val0_1903z00_923 = BGl_symbol2861z00zz__srfi4z00;
									{	/* Llib/srfi4.scm 352 */
										int BgL_auxz00_4141;

										BgL_auxz00_4141 = (int) (((long) 4));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_4141);
									}
									{	/* Llib/srfi4.scm 352 */
										obj_t BgL_auxz00_4146;

										int BgL_auxz00_4144;

										BgL_auxz00_4146 = BINT(((long) 2));
										BgL_auxz00_4144 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4144, BgL_auxz00_4146);
									}
									{	/* Llib/srfi4.scm 352 */
										int BgL_auxz00_4149;

										BgL_auxz00_4149 = (int) (((long) 2));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4149,
											BGl_u16vectorzd2refzd2envz00zz__srfi4z00);
									}
									{	/* Llib/srfi4.scm 352 */
										int BgL_auxz00_4152;

										BgL_auxz00_4152 = (int) (((long) 3));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4152,
											BGl_u16vectorzd2setz12zd2envz12zz__srfi4z00);
									}
									return BgL_val0_1903z00_923;
								}
								break;
							case ((long) 4):

								{	/* Llib/srfi4.scm 354 */
									obj_t BgL_val0_1907z00_927;

									BgL_val0_1907z00_927 = BGl_symbol2863z00zz__srfi4z00;
									{	/* Llib/srfi4.scm 354 */
										int BgL_auxz00_4155;

										BgL_auxz00_4155 = (int) (((long) 4));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_4155);
									}
									{	/* Llib/srfi4.scm 354 */
										obj_t BgL_auxz00_4160;

										int BgL_auxz00_4158;

										BgL_auxz00_4160 = BINT(((long) 4));
										BgL_auxz00_4158 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4158, BgL_auxz00_4160);
									}
									{	/* Llib/srfi4.scm 354 */
										int BgL_auxz00_4163;

										BgL_auxz00_4163 = (int) (((long) 2));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4163,
											BGl_s32vectorzd2refzd2envz00zz__srfi4z00);
									}
									{	/* Llib/srfi4.scm 354 */
										int BgL_auxz00_4166;

										BgL_auxz00_4166 = (int) (((long) 3));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4166,
											BGl_s32vectorzd2setz12zd2envz12zz__srfi4z00);
									}
									return BgL_val0_1907z00_927;
								}
								break;
							case ((long) 5):

								{	/* Llib/srfi4.scm 356 */
									obj_t BgL_val0_1911z00_931;

									BgL_val0_1911z00_931 = BGl_symbol2865z00zz__srfi4z00;
									{	/* Llib/srfi4.scm 356 */
										int BgL_auxz00_4169;

										BgL_auxz00_4169 = (int) (((long) 4));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_4169);
									}
									{	/* Llib/srfi4.scm 356 */
										obj_t BgL_auxz00_4174;

										int BgL_auxz00_4172;

										BgL_auxz00_4174 = BINT(((long) 4));
										BgL_auxz00_4172 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4172, BgL_auxz00_4174);
									}
									{	/* Llib/srfi4.scm 356 */
										int BgL_auxz00_4177;

										BgL_auxz00_4177 = (int) (((long) 2));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4177,
											BGl_u32vectorzd2refzd2envz00zz__srfi4z00);
									}
									{	/* Llib/srfi4.scm 356 */
										int BgL_auxz00_4180;

										BgL_auxz00_4180 = (int) (((long) 3));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4180,
											BGl_u32vectorzd2setz12zd2envz12zz__srfi4z00);
									}
									return BgL_val0_1911z00_931;
								}
								break;
							case ((long) 6):

								{	/* Llib/srfi4.scm 358 */
									obj_t BgL_val0_1915z00_935;

									BgL_val0_1915z00_935 = BGl_symbol2867z00zz__srfi4z00;
									{	/* Llib/srfi4.scm 358 */
										int BgL_auxz00_4183;

										BgL_auxz00_4183 = (int) (((long) 4));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_4183);
									}
									{	/* Llib/srfi4.scm 358 */
										obj_t BgL_auxz00_4188;

										int BgL_auxz00_4186;

										BgL_auxz00_4188 = BINT(((long) 8));
										BgL_auxz00_4186 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4186, BgL_auxz00_4188);
									}
									{	/* Llib/srfi4.scm 358 */
										int BgL_auxz00_4191;

										BgL_auxz00_4191 = (int) (((long) 2));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4191,
											BGl_s64vectorzd2refzd2envz00zz__srfi4z00);
									}
									{	/* Llib/srfi4.scm 358 */
										int BgL_auxz00_4194;

										BgL_auxz00_4194 = (int) (((long) 3));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4194,
											BGl_s64vectorzd2setz12zd2envz12zz__srfi4z00);
									}
									return BgL_val0_1915z00_935;
								}
								break;
							case ((long) 7):

								{	/* Llib/srfi4.scm 360 */
									obj_t BgL_val0_1919z00_939;

									BgL_val0_1919z00_939 = BGl_symbol2869z00zz__srfi4z00;
									{	/* Llib/srfi4.scm 360 */
										int BgL_auxz00_4197;

										BgL_auxz00_4197 = (int) (((long) 4));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_4197);
									}
									{	/* Llib/srfi4.scm 360 */
										obj_t BgL_auxz00_4202;

										int BgL_auxz00_4200;

										BgL_auxz00_4202 = BINT(((long) 8));
										BgL_auxz00_4200 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4200, BgL_auxz00_4202);
									}
									{	/* Llib/srfi4.scm 360 */
										int BgL_auxz00_4205;

										BgL_auxz00_4205 = (int) (((long) 2));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4205,
											BGl_u64vectorzd2refzd2envz00zz__srfi4z00);
									}
									{	/* Llib/srfi4.scm 360 */
										int BgL_auxz00_4208;

										BgL_auxz00_4208 = (int) (((long) 3));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4208,
											BGl_u64vectorzd2setz12zd2envz12zz__srfi4z00);
									}
									return BgL_val0_1919z00_939;
								}
								break;
							case ((long) 8):

								{	/* Llib/srfi4.scm 362 */
									obj_t BgL_val0_1923z00_943;

									BgL_val0_1923z00_943 = BGl_symbol2871z00zz__srfi4z00;
									{	/* Llib/srfi4.scm 362 */
										int BgL_auxz00_4211;

										BgL_auxz00_4211 = (int) (((long) 4));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_4211);
									}
									{	/* Llib/srfi4.scm 362 */
										obj_t BgL_auxz00_4216;

										int BgL_auxz00_4214;

										BgL_auxz00_4216 = BINT(((long) 4));
										BgL_auxz00_4214 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4214, BgL_auxz00_4216);
									}
									{	/* Llib/srfi4.scm 362 */
										int BgL_auxz00_4219;

										BgL_auxz00_4219 = (int) (((long) 2));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4219,
											BGl_f32vectorzd2refzd2envz00zz__srfi4z00);
									}
									{	/* Llib/srfi4.scm 362 */
										int BgL_auxz00_4222;

										BgL_auxz00_4222 = (int) (((long) 3));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4222,
											BGl_f32vectorzd2setz12zd2envz12zz__srfi4z00);
									}
									return BgL_val0_1923z00_943;
								}
								break;
							case ((long) 9):

								{	/* Llib/srfi4.scm 364 */
									obj_t BgL_val0_1927z00_947;

									BgL_val0_1927z00_947 = BGl_symbol2873z00zz__srfi4z00;
									{	/* Llib/srfi4.scm 364 */
										int BgL_auxz00_4225;

										BgL_auxz00_4225 = (int) (((long) 4));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_4225);
									}
									{	/* Llib/srfi4.scm 364 */
										obj_t BgL_auxz00_4230;

										int BgL_auxz00_4228;

										BgL_auxz00_4230 = BINT(((long) 8));
										BgL_auxz00_4228 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4228, BgL_auxz00_4230);
									}
									{	/* Llib/srfi4.scm 364 */
										int BgL_auxz00_4233;

										BgL_auxz00_4233 = (int) (((long) 2));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4233,
											BGl_f64vectorzd2refzd2envz00zz__srfi4z00);
									}
									{	/* Llib/srfi4.scm 364 */
										int BgL_auxz00_4236;

										BgL_auxz00_4236 = (int) (((long) 3));
										BGL_MVALUES_VAL_SET(BgL_auxz00_4236,
											BGl_f64vectorzd2setz12zd2envz12zz__srfi4z00);
									}
									return BgL_val0_1927z00_947;
								}
								break;
							default:
								{	/* Llib/srfi4.scm 366 */
									obj_t BgL_arg2008z00_951;

									int BgL_arg2010z00_953;

									BgL_arg2008z00_951 = BGl_symbol2852z00zz__srfi4z00;
									BgL_arg2010z00_953 = BGL_HVECTOR_IDENT(BgL_oz00_12);
									return
										BGl_errorz00zz__errorz00(BgL_arg2008z00_951,
										BGl_string2854z00zz__srfi4z00, BINT(BgL_arg2010z00_953));
								}
							}
					}
				}
			else
				{	/* Llib/srfi4.scm 341 */
					return
						BGl_bigloozd2typezd2errorz00zz__errorz00
						(BGl_symbol2852z00zz__srfi4z00, BGl_string2875z00zz__srfi4z00,
						BgL_oz00_12);
				}
		}
	}



/* _homogeneous-vector-info */
	obj_t BGl__homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t BgL_envz00_3301,
		obj_t BgL_oz00_3302)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 340 */
			return BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(BgL_oz00_3302);
		}
	}



/* s8vector-length */
	BGL_EXPORTED_DEF long BGl_s8vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_13)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 374 */
			return BGL_HVECTOR_LENGTH(BgL_xz00_13);
		}
	}



/* _s8vector-length */
	obj_t BGl__s8vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_envz00_3373,
		obj_t BgL_xz00_3374)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 374 */
			{	/* Llib/srfi4.scm 374 */
				long BgL_auxz00_4247;

				{	/* Llib/srfi4.scm 374 */
					obj_t BgL_xz00_3664;

					if (BGL_S8VECTORP(BgL_xz00_3374))
						{	/* Llib/srfi4.scm 374 */
							BgL_xz00_3664 = BgL_xz00_3374;
						}
					else
						{
							obj_t BgL_auxz00_4250;

							BgL_auxz00_4250 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 15171)), BGl_string2877z00zz__srfi4z00,
								BGl_string2878z00zz__srfi4z00, BgL_xz00_3374);
							FAILURE(BgL_auxz00_4250, BFALSE, BFALSE);
						}
					BgL_auxz00_4247 = BGL_HVECTOR_LENGTH(BgL_xz00_3664);
				}
				return BINT(BgL_auxz00_4247);
			}
		}
	}



/* u8vector-length */
	BGL_EXPORTED_DEF long BGl_u8vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_14)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 375 */
			return BGL_HVECTOR_LENGTH(BgL_xz00_14);
		}
	}



/* _u8vector-length */
	obj_t BGl__u8vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_envz00_3375,
		obj_t BgL_xz00_3376)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 375 */
			{	/* Llib/srfi4.scm 375 */
				long BgL_auxz00_4257;

				{	/* Llib/srfi4.scm 375 */
					obj_t BgL_xz00_3665;

					if (BGL_U8VECTORP(BgL_xz00_3376))
						{	/* Llib/srfi4.scm 375 */
							BgL_xz00_3665 = BgL_xz00_3376;
						}
					else
						{
							obj_t BgL_auxz00_4260;

							BgL_auxz00_4260 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 15227)), BGl_string2879z00zz__srfi4z00,
								BGl_string2880z00zz__srfi4z00, BgL_xz00_3376);
							FAILURE(BgL_auxz00_4260, BFALSE, BFALSE);
						}
					BgL_auxz00_4257 = BGL_HVECTOR_LENGTH(BgL_xz00_3665);
				}
				return BINT(BgL_auxz00_4257);
			}
		}
	}



/* s16vector-length */
	BGL_EXPORTED_DEF long BGl_s16vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_15)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 376 */
			return BGL_HVECTOR_LENGTH(BgL_xz00_15);
		}
	}



/* _s16vector-length */
	obj_t BGl__s16vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_envz00_3377,
		obj_t BgL_xz00_3378)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 376 */
			{	/* Llib/srfi4.scm 376 */
				long BgL_auxz00_4267;

				{	/* Llib/srfi4.scm 376 */
					obj_t BgL_xz00_3666;

					if (BGL_S16VECTORP(BgL_xz00_3378))
						{	/* Llib/srfi4.scm 376 */
							BgL_xz00_3666 = BgL_xz00_3378;
						}
					else
						{
							obj_t BgL_auxz00_4270;

							BgL_auxz00_4270 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 15284)), BGl_string2881z00zz__srfi4z00,
								BGl_string2882z00zz__srfi4z00, BgL_xz00_3378);
							FAILURE(BgL_auxz00_4270, BFALSE, BFALSE);
						}
					BgL_auxz00_4267 = BGL_HVECTOR_LENGTH(BgL_xz00_3666);
				}
				return BINT(BgL_auxz00_4267);
			}
		}
	}



/* u16vector-length */
	BGL_EXPORTED_DEF long BGl_u16vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_16)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 377 */
			return BGL_HVECTOR_LENGTH(BgL_xz00_16);
		}
	}



/* _u16vector-length */
	obj_t BGl__u16vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_envz00_3379,
		obj_t BgL_xz00_3380)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 377 */
			{	/* Llib/srfi4.scm 377 */
				long BgL_auxz00_4277;

				{	/* Llib/srfi4.scm 377 */
					obj_t BgL_xz00_3667;

					if (BGL_U16VECTORP(BgL_xz00_3380))
						{	/* Llib/srfi4.scm 377 */
							BgL_xz00_3667 = BgL_xz00_3380;
						}
					else
						{
							obj_t BgL_auxz00_4280;

							BgL_auxz00_4280 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 15341)), BGl_string2883z00zz__srfi4z00,
								BGl_string2884z00zz__srfi4z00, BgL_xz00_3380);
							FAILURE(BgL_auxz00_4280, BFALSE, BFALSE);
						}
					BgL_auxz00_4277 = BGL_HVECTOR_LENGTH(BgL_xz00_3667);
				}
				return BINT(BgL_auxz00_4277);
			}
		}
	}



/* s32vector-length */
	BGL_EXPORTED_DEF long BGl_s32vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_17)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 378 */
			return BGL_HVECTOR_LENGTH(BgL_xz00_17);
		}
	}



/* _s32vector-length */
	obj_t BGl__s32vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_envz00_3381,
		obj_t BgL_xz00_3382)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 378 */
			{	/* Llib/srfi4.scm 378 */
				long BgL_auxz00_4287;

				{	/* Llib/srfi4.scm 378 */
					obj_t BgL_xz00_3668;

					if (BGL_S32VECTORP(BgL_xz00_3382))
						{	/* Llib/srfi4.scm 378 */
							BgL_xz00_3668 = BgL_xz00_3382;
						}
					else
						{
							obj_t BgL_auxz00_4290;

							BgL_auxz00_4290 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 15398)), BGl_string2885z00zz__srfi4z00,
								BGl_string2886z00zz__srfi4z00, BgL_xz00_3382);
							FAILURE(BgL_auxz00_4290, BFALSE, BFALSE);
						}
					BgL_auxz00_4287 = BGL_HVECTOR_LENGTH(BgL_xz00_3668);
				}
				return BINT(BgL_auxz00_4287);
			}
		}
	}



/* u32vector-length */
	BGL_EXPORTED_DEF long BGl_u32vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_18)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 379 */
			return BGL_HVECTOR_LENGTH(BgL_xz00_18);
		}
	}



/* _u32vector-length */
	obj_t BGl__u32vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_envz00_3383,
		obj_t BgL_xz00_3384)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 379 */
			{	/* Llib/srfi4.scm 379 */
				long BgL_auxz00_4297;

				{	/* Llib/srfi4.scm 379 */
					obj_t BgL_xz00_3669;

					if (BGL_U32VECTORP(BgL_xz00_3384))
						{	/* Llib/srfi4.scm 379 */
							BgL_xz00_3669 = BgL_xz00_3384;
						}
					else
						{
							obj_t BgL_auxz00_4300;

							BgL_auxz00_4300 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 15455)), BGl_string2887z00zz__srfi4z00,
								BGl_string2888z00zz__srfi4z00, BgL_xz00_3384);
							FAILURE(BgL_auxz00_4300, BFALSE, BFALSE);
						}
					BgL_auxz00_4297 = BGL_HVECTOR_LENGTH(BgL_xz00_3669);
				}
				return BINT(BgL_auxz00_4297);
			}
		}
	}



/* s64vector-length */
	BGL_EXPORTED_DEF long BGl_s64vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_19)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 380 */
			return BGL_HVECTOR_LENGTH(BgL_xz00_19);
		}
	}



/* _s64vector-length */
	obj_t BGl__s64vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_envz00_3385,
		obj_t BgL_xz00_3386)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 380 */
			{	/* Llib/srfi4.scm 380 */
				long BgL_auxz00_4307;

				{	/* Llib/srfi4.scm 380 */
					obj_t BgL_xz00_3670;

					if (BGL_S64VECTORP(BgL_xz00_3386))
						{	/* Llib/srfi4.scm 380 */
							BgL_xz00_3670 = BgL_xz00_3386;
						}
					else
						{
							obj_t BgL_auxz00_4310;

							BgL_auxz00_4310 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 15512)), BGl_string2889z00zz__srfi4z00,
								BGl_string2890z00zz__srfi4z00, BgL_xz00_3386);
							FAILURE(BgL_auxz00_4310, BFALSE, BFALSE);
						}
					BgL_auxz00_4307 = BGL_HVECTOR_LENGTH(BgL_xz00_3670);
				}
				return BINT(BgL_auxz00_4307);
			}
		}
	}



/* u64vector-length */
	BGL_EXPORTED_DEF long BGl_u64vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_20)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 381 */
			return BGL_HVECTOR_LENGTH(BgL_xz00_20);
		}
	}



/* _u64vector-length */
	obj_t BGl__u64vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_envz00_3387,
		obj_t BgL_xz00_3388)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 381 */
			{	/* Llib/srfi4.scm 381 */
				long BgL_auxz00_4317;

				{	/* Llib/srfi4.scm 381 */
					obj_t BgL_xz00_3671;

					if (BGL_U64VECTORP(BgL_xz00_3388))
						{	/* Llib/srfi4.scm 381 */
							BgL_xz00_3671 = BgL_xz00_3388;
						}
					else
						{
							obj_t BgL_auxz00_4320;

							BgL_auxz00_4320 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 15569)), BGl_string2891z00zz__srfi4z00,
								BGl_string2892z00zz__srfi4z00, BgL_xz00_3388);
							FAILURE(BgL_auxz00_4320, BFALSE, BFALSE);
						}
					BgL_auxz00_4317 = BGL_HVECTOR_LENGTH(BgL_xz00_3671);
				}
				return BINT(BgL_auxz00_4317);
			}
		}
	}



/* f32vector-length */
	BGL_EXPORTED_DEF long BGl_f32vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_21)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 382 */
			return BGL_HVECTOR_LENGTH(BgL_xz00_21);
		}
	}



/* _f32vector-length */
	obj_t BGl__f32vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_envz00_3389,
		obj_t BgL_xz00_3390)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 382 */
			{	/* Llib/srfi4.scm 382 */
				long BgL_auxz00_4327;

				{	/* Llib/srfi4.scm 382 */
					obj_t BgL_xz00_3672;

					if (BGL_F32VECTORP(BgL_xz00_3390))
						{	/* Llib/srfi4.scm 382 */
							BgL_xz00_3672 = BgL_xz00_3390;
						}
					else
						{
							obj_t BgL_auxz00_4330;

							BgL_auxz00_4330 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 15626)), BGl_string2893z00zz__srfi4z00,
								BGl_string2894z00zz__srfi4z00, BgL_xz00_3390);
							FAILURE(BgL_auxz00_4330, BFALSE, BFALSE);
						}
					BgL_auxz00_4327 = BGL_HVECTOR_LENGTH(BgL_xz00_3672);
				}
				return BINT(BgL_auxz00_4327);
			}
		}
	}



/* f64vector-length */
	BGL_EXPORTED_DEF long BGl_f64vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_22)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 383 */
			return BGL_HVECTOR_LENGTH(BgL_xz00_22);
		}
	}



/* _f64vector-length */
	obj_t BGl__f64vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_envz00_3391,
		obj_t BgL_xz00_3392)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 383 */
			{	/* Llib/srfi4.scm 383 */
				long BgL_auxz00_4337;

				{	/* Llib/srfi4.scm 383 */
					obj_t BgL_xz00_3673;

					if (BGL_F64VECTORP(BgL_xz00_3392))
						{	/* Llib/srfi4.scm 383 */
							BgL_xz00_3673 = BgL_xz00_3392;
						}
					else
						{
							obj_t BgL_auxz00_4340;

							BgL_auxz00_4340 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 15683)), BGl_string2895z00zz__srfi4z00,
								BGl_string2896z00zz__srfi4z00, BgL_xz00_3392);
							FAILURE(BgL_auxz00_4340, BFALSE, BFALSE);
						}
					BgL_auxz00_4337 = BGL_HVECTOR_LENGTH(BgL_xz00_3673);
				}
				return BINT(BgL_auxz00_4337);
			}
		}
	}



/* s8vector */
	BGL_EXPORTED_DEF obj_t BGl_s8vectorz00zz__srfi4z00(obj_t BgL_xz00_23)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 394 */
			return BGl_listzd2ze3s8vectorz31zz__srfi4z00(BgL_xz00_23);
		}
	}



/* _s8vector */
	obj_t BGl__s8vectorz00zz__srfi4z00(obj_t BgL_envz00_3393, obj_t BgL_xz00_3394)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 394 */
			return BGl_listzd2ze3s8vectorz31zz__srfi4z00(BgL_xz00_3394);
		}
	}



/* u8vector */
	BGL_EXPORTED_DEF obj_t BGl_u8vectorz00zz__srfi4z00(obj_t BgL_xz00_24)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 394 */
			return BGl_listzd2ze3u8vectorz31zz__srfi4z00(BgL_xz00_24);
		}
	}



/* _u8vector */
	obj_t BGl__u8vectorz00zz__srfi4z00(obj_t BgL_envz00_3395, obj_t BgL_xz00_3396)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 394 */
			return BGl_listzd2ze3u8vectorz31zz__srfi4z00(BgL_xz00_3396);
		}
	}



/* s16vector */
	BGL_EXPORTED_DEF obj_t BGl_s16vectorz00zz__srfi4z00(obj_t BgL_xz00_25)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 394 */
			return BGl_listzd2ze3s16vectorz31zz__srfi4z00(BgL_xz00_25);
		}
	}



/* _s16vector */
	obj_t BGl__s16vectorz00zz__srfi4z00(obj_t BgL_envz00_3397,
		obj_t BgL_xz00_3398)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 394 */
			return BGl_listzd2ze3s16vectorz31zz__srfi4z00(BgL_xz00_3398);
		}
	}



/* u16vector */
	BGL_EXPORTED_DEF obj_t BGl_u16vectorz00zz__srfi4z00(obj_t BgL_xz00_26)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 394 */
			return BGl_listzd2ze3u16vectorz31zz__srfi4z00(BgL_xz00_26);
		}
	}



/* _u16vector */
	obj_t BGl__u16vectorz00zz__srfi4z00(obj_t BgL_envz00_3399,
		obj_t BgL_xz00_3400)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 394 */
			return BGl_listzd2ze3u16vectorz31zz__srfi4z00(BgL_xz00_3400);
		}
	}



/* s32vector */
	BGL_EXPORTED_DEF obj_t BGl_s32vectorz00zz__srfi4z00(obj_t BgL_xz00_27)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 394 */
			return BGl_listzd2ze3s32vectorz31zz__srfi4z00(BgL_xz00_27);
		}
	}



/* _s32vector */
	obj_t BGl__s32vectorz00zz__srfi4z00(obj_t BgL_envz00_3401,
		obj_t BgL_xz00_3402)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 394 */
			return BGl_listzd2ze3s32vectorz31zz__srfi4z00(BgL_xz00_3402);
		}
	}



/* u32vector */
	BGL_EXPORTED_DEF obj_t BGl_u32vectorz00zz__srfi4z00(obj_t BgL_xz00_28)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 394 */
			return BGl_listzd2ze3u32vectorz31zz__srfi4z00(BgL_xz00_28);
		}
	}



/* _u32vector */
	obj_t BGl__u32vectorz00zz__srfi4z00(obj_t BgL_envz00_3403,
		obj_t BgL_xz00_3404)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 394 */
			return BGl_listzd2ze3u32vectorz31zz__srfi4z00(BgL_xz00_3404);
		}
	}



/* s64vector */
	BGL_EXPORTED_DEF obj_t BGl_s64vectorz00zz__srfi4z00(obj_t BgL_xz00_29)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 394 */
			return BGl_listzd2ze3s64vectorz31zz__srfi4z00(BgL_xz00_29);
		}
	}



/* _s64vector */
	obj_t BGl__s64vectorz00zz__srfi4z00(obj_t BgL_envz00_3405,
		obj_t BgL_xz00_3406)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 394 */
			return BGl_listzd2ze3s64vectorz31zz__srfi4z00(BgL_xz00_3406);
		}
	}



/* u64vector */
	BGL_EXPORTED_DEF obj_t BGl_u64vectorz00zz__srfi4z00(obj_t BgL_xz00_30)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 394 */
			return BGl_listzd2ze3u64vectorz31zz__srfi4z00(BgL_xz00_30);
		}
	}



/* _u64vector */
	obj_t BGl__u64vectorz00zz__srfi4z00(obj_t BgL_envz00_3407,
		obj_t BgL_xz00_3408)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 394 */
			return BGl_listzd2ze3u64vectorz31zz__srfi4z00(BgL_xz00_3408);
		}
	}



/* f32vector */
	BGL_EXPORTED_DEF obj_t BGl_f32vectorz00zz__srfi4z00(obj_t BgL_xz00_31)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 394 */
			return BGl_listzd2ze3f32vectorz31zz__srfi4z00(BgL_xz00_31);
		}
	}



/* _f32vector */
	obj_t BGl__f32vectorz00zz__srfi4z00(obj_t BgL_envz00_3409,
		obj_t BgL_xz00_3410)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 394 */
			return BGl_listzd2ze3f32vectorz31zz__srfi4z00(BgL_xz00_3410);
		}
	}



/* f64vector */
	BGL_EXPORTED_DEF obj_t BGl_f64vectorz00zz__srfi4z00(obj_t BgL_xz00_32)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 394 */
			return BGl_listzd2ze3f64vectorz31zz__srfi4z00(BgL_xz00_32);
		}
	}



/* _f64vector */
	obj_t BGl__f64vectorz00zz__srfi4z00(obj_t BgL_envz00_3411,
		obj_t BgL_xz00_3412)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 394 */
			return BGl_listzd2ze3f64vectorz31zz__srfi4z00(BgL_xz00_3412);
		}
	}



/* _make-s8vector */
	obj_t BGl__makezd2s8vectorzd2zz__srfi4z00(obj_t BgL_envz00_36,
		obj_t BgL_optz00_35)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 414 */
			{	/* Llib/srfi4.scm 414 */
				obj_t BgL_g1949z00_954;

				BgL_g1949z00_954 = VECTOR_REF(BgL_optz00_35, (int) (((long) 0)));
				{	/* Llib/srfi4.scm 414 */
					int BgL_aux1951z00_956;

					BgL_aux1951z00_956 = VECTOR_LENGTH(BgL_optz00_35);
					switch ((long) (BgL_aux1951z00_956))
						{
						case ((long) 1):

							{	/* Llib/srfi4.scm 414 */

								{	/* Llib/srfi4.scm 414 */
									obj_t BgL_arg2012z00_959;

									BgL_arg2012z00_959 =
										VECTOR_REF(BgL_optz00_35, (int) (((long) 0)));
									{	/* Llib/srfi4.scm 414 */
										long BgL_auxz00_4371;

										{	/* Llib/srfi4.scm 414 */
											obj_t BgL_auxz00_4372;

											if (INTEGERP(BgL_arg2012z00_959))
												{	/* Llib/srfi4.scm 414 */
													BgL_auxz00_4372 = BgL_arg2012z00_959;
												}
											else
												{
													obj_t BgL_auxz00_4375;

													BgL_auxz00_4375 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2876z00zz__srfi4z00,
														BINT(((long) 16882)), BGl_string2897z00zz__srfi4z00,
														BGl_string2898z00zz__srfi4z00, BgL_arg2012z00_959);
													FAILURE(BgL_auxz00_4375, BFALSE, BFALSE);
												}
											BgL_auxz00_4371 = (long) CINT(BgL_auxz00_4372);
										}
										return
											BGl_makezd2s8vectorzd2zz__srfi4z00(BgL_auxz00_4371,
											BINT(((long) 0)));
							}}} break;
						case ((long) 2):

							{	/* Llib/srfi4.scm 414 */
								obj_t BgL_initz00_960;

								BgL_initz00_960 = VECTOR_REF(BgL_optz00_35, (int) (((long) 1)));
								{	/* Llib/srfi4.scm 414 */

									{	/* Llib/srfi4.scm 414 */
										obj_t BgL_arg2013z00_961;

										BgL_arg2013z00_961 =
											VECTOR_REF(BgL_optz00_35, (int) (((long) 0)));
										{	/* Llib/srfi4.scm 414 */
											long BgL_auxz00_4386;

											{	/* Llib/srfi4.scm 414 */
												obj_t BgL_auxz00_4387;

												if (INTEGERP(BgL_arg2013z00_961))
													{	/* Llib/srfi4.scm 414 */
														BgL_auxz00_4387 = BgL_arg2013z00_961;
													}
												else
													{
														obj_t BgL_auxz00_4390;

														BgL_auxz00_4390 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2876z00zz__srfi4z00,
															BINT(((long) 16882)),
															BGl_string2897z00zz__srfi4z00,
															BGl_string2898z00zz__srfi4z00,
															BgL_arg2013z00_961);
														FAILURE(BgL_auxz00_4390, BFALSE, BFALSE);
													}
												BgL_auxz00_4386 = (long) CINT(BgL_auxz00_4387);
											}
											return
												BGl_makezd2s8vectorzd2zz__srfi4z00(BgL_auxz00_4386,
												BgL_initz00_960);
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



/* make-s8vector */
	BGL_EXPORTED_DEF obj_t BGl_makezd2s8vectorzd2zz__srfi4z00(long BgL_lenz00_33,
		obj_t BgL_initz00_34)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 414 */
			{	/* Llib/srfi4.scm 414 */
				obj_t BgL_vz00_962;

				BgL_vz00_962 = BGL_ALLOC_S8VECTOR(BgL_lenz00_33);
				if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_initz00_34, BINT(((long) 0))))
					{	/* Llib/srfi4.scm 414 */
						((bool_t) 0);
					}
				else
					{
						long BgL_iz00_965;

						BgL_iz00_965 = ((long) 0);
					BgL_zc3anonymousza32015ze3z83_966:
						if ((BgL_iz00_965 < BgL_lenz00_33))
							{	/* Llib/srfi4.scm 414 */
								{	/* Llib/srfi4.scm 414 */
									char BgL_auxz00_4404;

									BgL_auxz00_4404 = (signed char) CINT(BgL_initz00_34);
									BGL_S8VSET(BgL_vz00_962, BgL_iz00_965, BgL_auxz00_4404);
								} BUNSPEC;
								{
									long BgL_iz00_4407;

									BgL_iz00_4407 = (BgL_iz00_965 + ((long) 1));
									BgL_iz00_965 = BgL_iz00_4407;
									goto BgL_zc3anonymousza32015ze3z83_966;
								}
							}
						else
							{	/* Llib/srfi4.scm 414 */
								((bool_t) 0);
							}
					}
				return BgL_vz00_962;
			}
		}
	}



/* _make-u8vector */
	obj_t BGl__makezd2u8vectorzd2zz__srfi4z00(obj_t BgL_envz00_40,
		obj_t BgL_optz00_39)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 415 */
			{	/* Llib/srfi4.scm 415 */
				obj_t BgL_g1952z00_970;

				BgL_g1952z00_970 = VECTOR_REF(BgL_optz00_39, (int) (((long) 0)));
				{	/* Llib/srfi4.scm 415 */
					int BgL_aux1954z00_972;

					BgL_aux1954z00_972 = VECTOR_LENGTH(BgL_optz00_39);
					switch ((long) (BgL_aux1954z00_972))
						{
						case ((long) 1):

							{	/* Llib/srfi4.scm 415 */

								{	/* Llib/srfi4.scm 415 */
									obj_t BgL_arg2019z00_975;

									BgL_arg2019z00_975 =
										VECTOR_REF(BgL_optz00_39, (int) (((long) 0)));
									{	/* Llib/srfi4.scm 415 */
										long BgL_auxz00_4414;

										{	/* Llib/srfi4.scm 415 */
											obj_t BgL_auxz00_4415;

											if (INTEGERP(BgL_arg2019z00_975))
												{	/* Llib/srfi4.scm 415 */
													BgL_auxz00_4415 = BgL_arg2019z00_975;
												}
											else
												{
													obj_t BgL_auxz00_4418;

													BgL_auxz00_4418 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2876z00zz__srfi4z00,
														BINT(((long) 16910)), BGl_string2899z00zz__srfi4z00,
														BGl_string2898z00zz__srfi4z00, BgL_arg2019z00_975);
													FAILURE(BgL_auxz00_4418, BFALSE, BFALSE);
												}
											BgL_auxz00_4414 = (long) CINT(BgL_auxz00_4415);
										}
										return
											BGl_makezd2u8vectorzd2zz__srfi4z00(BgL_auxz00_4414,
											BINT(((long) 0)));
							}}} break;
						case ((long) 2):

							{	/* Llib/srfi4.scm 415 */
								obj_t BgL_initz00_976;

								BgL_initz00_976 = VECTOR_REF(BgL_optz00_39, (int) (((long) 1)));
								{	/* Llib/srfi4.scm 415 */

									{	/* Llib/srfi4.scm 415 */
										obj_t BgL_arg2021z00_977;

										BgL_arg2021z00_977 =
											VECTOR_REF(BgL_optz00_39, (int) (((long) 0)));
										{	/* Llib/srfi4.scm 415 */
											long BgL_auxz00_4429;

											{	/* Llib/srfi4.scm 415 */
												obj_t BgL_auxz00_4430;

												if (INTEGERP(BgL_arg2021z00_977))
													{	/* Llib/srfi4.scm 415 */
														BgL_auxz00_4430 = BgL_arg2021z00_977;
													}
												else
													{
														obj_t BgL_auxz00_4433;

														BgL_auxz00_4433 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2876z00zz__srfi4z00,
															BINT(((long) 16910)),
															BGl_string2899z00zz__srfi4z00,
															BGl_string2898z00zz__srfi4z00,
															BgL_arg2021z00_977);
														FAILURE(BgL_auxz00_4433, BFALSE, BFALSE);
													}
												BgL_auxz00_4429 = (long) CINT(BgL_auxz00_4430);
											}
											return
												BGl_makezd2u8vectorzd2zz__srfi4z00(BgL_auxz00_4429,
												BgL_initz00_976);
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



/* make-u8vector */
	BGL_EXPORTED_DEF obj_t BGl_makezd2u8vectorzd2zz__srfi4z00(long BgL_lenz00_37,
		obj_t BgL_initz00_38)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 415 */
			{	/* Llib/srfi4.scm 415 */
				obj_t BgL_vz00_978;

				BgL_vz00_978 = BGL_ALLOC_U8VECTOR(BgL_lenz00_37);
				if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_initz00_38, BINT(((long) 0))))
					{	/* Llib/srfi4.scm 415 */
						((bool_t) 0);
					}
				else
					{
						long BgL_iz00_981;

						BgL_iz00_981 = ((long) 0);
					BgL_zc3anonymousza32023ze3z83_982:
						if ((BgL_iz00_981 < BgL_lenz00_37))
							{	/* Llib/srfi4.scm 415 */
								{	/* Llib/srfi4.scm 415 */
									unsigned char BgL_auxz00_4447;

									BgL_auxz00_4447 = (unsigned char) CINT(BgL_initz00_38);
									BGL_U8VSET(BgL_vz00_978, BgL_iz00_981, BgL_auxz00_4447);
								} BUNSPEC;
								{
									long BgL_iz00_4450;

									BgL_iz00_4450 = (BgL_iz00_981 + ((long) 1));
									BgL_iz00_981 = BgL_iz00_4450;
									goto BgL_zc3anonymousza32023ze3z83_982;
								}
							}
						else
							{	/* Llib/srfi4.scm 415 */
								((bool_t) 0);
							}
					}
				return BgL_vz00_978;
			}
		}
	}



/* _make-s16vector */
	obj_t BGl__makezd2s16vectorzd2zz__srfi4z00(obj_t BgL_envz00_44,
		obj_t BgL_optz00_43)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 416 */
			{	/* Llib/srfi4.scm 416 */
				obj_t BgL_g1955z00_986;

				BgL_g1955z00_986 = VECTOR_REF(BgL_optz00_43, (int) (((long) 0)));
				{	/* Llib/srfi4.scm 416 */
					int BgL_aux1957z00_988;

					BgL_aux1957z00_988 = VECTOR_LENGTH(BgL_optz00_43);
					switch ((long) (BgL_aux1957z00_988))
						{
						case ((long) 1):

							{	/* Llib/srfi4.scm 416 */

								{	/* Llib/srfi4.scm 416 */
									obj_t BgL_arg2027z00_991;

									BgL_arg2027z00_991 =
										VECTOR_REF(BgL_optz00_43, (int) (((long) 0)));
									{	/* Llib/srfi4.scm 416 */
										long BgL_auxz00_4457;

										{	/* Llib/srfi4.scm 416 */
											obj_t BgL_auxz00_4458;

											if (INTEGERP(BgL_arg2027z00_991))
												{	/* Llib/srfi4.scm 416 */
													BgL_auxz00_4458 = BgL_arg2027z00_991;
												}
											else
												{
													obj_t BgL_auxz00_4461;

													BgL_auxz00_4461 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2876z00zz__srfi4z00,
														BINT(((long) 16938)), BGl_string2900z00zz__srfi4z00,
														BGl_string2898z00zz__srfi4z00, BgL_arg2027z00_991);
													FAILURE(BgL_auxz00_4461, BFALSE, BFALSE);
												}
											BgL_auxz00_4457 = (long) CINT(BgL_auxz00_4458);
										}
										return
											BGl_makezd2s16vectorzd2zz__srfi4z00(BgL_auxz00_4457,
											BINT(((long) 0)));
							}}} break;
						case ((long) 2):

							{	/* Llib/srfi4.scm 416 */
								obj_t BgL_initz00_992;

								BgL_initz00_992 = VECTOR_REF(BgL_optz00_43, (int) (((long) 1)));
								{	/* Llib/srfi4.scm 416 */

									{	/* Llib/srfi4.scm 416 */
										obj_t BgL_arg2028z00_993;

										BgL_arg2028z00_993 =
											VECTOR_REF(BgL_optz00_43, (int) (((long) 0)));
										{	/* Llib/srfi4.scm 416 */
											long BgL_auxz00_4472;

											{	/* Llib/srfi4.scm 416 */
												obj_t BgL_auxz00_4473;

												if (INTEGERP(BgL_arg2028z00_993))
													{	/* Llib/srfi4.scm 416 */
														BgL_auxz00_4473 = BgL_arg2028z00_993;
													}
												else
													{
														obj_t BgL_auxz00_4476;

														BgL_auxz00_4476 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2876z00zz__srfi4z00,
															BINT(((long) 16938)),
															BGl_string2900z00zz__srfi4z00,
															BGl_string2898z00zz__srfi4z00,
															BgL_arg2028z00_993);
														FAILURE(BgL_auxz00_4476, BFALSE, BFALSE);
													}
												BgL_auxz00_4472 = (long) CINT(BgL_auxz00_4473);
											}
											return
												BGl_makezd2s16vectorzd2zz__srfi4z00(BgL_auxz00_4472,
												BgL_initz00_992);
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



/* make-s16vector */
	BGL_EXPORTED_DEF obj_t BGl_makezd2s16vectorzd2zz__srfi4z00(long BgL_lenz00_41,
		obj_t BgL_initz00_42)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 416 */
			{	/* Llib/srfi4.scm 416 */
				obj_t BgL_vz00_994;

				BgL_vz00_994 = BGL_ALLOC_S16VECTOR(BgL_lenz00_41);
				if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_initz00_42, BINT(((long) 0))))
					{	/* Llib/srfi4.scm 416 */
						((bool_t) 0);
					}
				else
					{
						long BgL_iz00_997;

						BgL_iz00_997 = ((long) 0);
					BgL_zc3anonymousza32030ze3z83_998:
						if ((BgL_iz00_997 < BgL_lenz00_41))
							{	/* Llib/srfi4.scm 416 */
								{	/* Llib/srfi4.scm 416 */
									short BgL_auxz00_4490;

									BgL_auxz00_4490 = (short) CINT(BgL_initz00_42);
									BGL_S16VSET(BgL_vz00_994, BgL_iz00_997, BgL_auxz00_4490);
								} BUNSPEC;
								{
									long BgL_iz00_4493;

									BgL_iz00_4493 = (BgL_iz00_997 + ((long) 1));
									BgL_iz00_997 = BgL_iz00_4493;
									goto BgL_zc3anonymousza32030ze3z83_998;
								}
							}
						else
							{	/* Llib/srfi4.scm 416 */
								((bool_t) 0);
							}
					}
				return BgL_vz00_994;
			}
		}
	}



/* _make-u16vector */
	obj_t BGl__makezd2u16vectorzd2zz__srfi4z00(obj_t BgL_envz00_48,
		obj_t BgL_optz00_47)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 417 */
			{	/* Llib/srfi4.scm 417 */
				obj_t BgL_g1958z00_1002;

				BgL_g1958z00_1002 = VECTOR_REF(BgL_optz00_47, (int) (((long) 0)));
				{	/* Llib/srfi4.scm 417 */
					int BgL_aux1960z00_1004;

					BgL_aux1960z00_1004 = VECTOR_LENGTH(BgL_optz00_47);
					switch ((long) (BgL_aux1960z00_1004))
						{
						case ((long) 1):

							{	/* Llib/srfi4.scm 417 */

								{	/* Llib/srfi4.scm 417 */
									obj_t BgL_arg2036z00_1007;

									BgL_arg2036z00_1007 =
										VECTOR_REF(BgL_optz00_47, (int) (((long) 0)));
									{	/* Llib/srfi4.scm 417 */
										long BgL_auxz00_4500;

										{	/* Llib/srfi4.scm 417 */
											obj_t BgL_auxz00_4501;

											if (INTEGERP(BgL_arg2036z00_1007))
												{	/* Llib/srfi4.scm 417 */
													BgL_auxz00_4501 = BgL_arg2036z00_1007;
												}
											else
												{
													obj_t BgL_auxz00_4504;

													BgL_auxz00_4504 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2876z00zz__srfi4z00,
														BINT(((long) 16967)), BGl_string2901z00zz__srfi4z00,
														BGl_string2898z00zz__srfi4z00, BgL_arg2036z00_1007);
													FAILURE(BgL_auxz00_4504, BFALSE, BFALSE);
												}
											BgL_auxz00_4500 = (long) CINT(BgL_auxz00_4501);
										}
										return
											BGl_makezd2u16vectorzd2zz__srfi4z00(BgL_auxz00_4500,
											BINT(((long) 0)));
							}}} break;
						case ((long) 2):

							{	/* Llib/srfi4.scm 417 */
								obj_t BgL_initz00_1008;

								BgL_initz00_1008 =
									VECTOR_REF(BgL_optz00_47, (int) (((long) 1)));
								{	/* Llib/srfi4.scm 417 */

									{	/* Llib/srfi4.scm 417 */
										obj_t BgL_arg2037z00_1009;

										BgL_arg2037z00_1009 =
											VECTOR_REF(BgL_optz00_47, (int) (((long) 0)));
										{	/* Llib/srfi4.scm 417 */
											long BgL_auxz00_4515;

											{	/* Llib/srfi4.scm 417 */
												obj_t BgL_auxz00_4516;

												if (INTEGERP(BgL_arg2037z00_1009))
													{	/* Llib/srfi4.scm 417 */
														BgL_auxz00_4516 = BgL_arg2037z00_1009;
													}
												else
													{
														obj_t BgL_auxz00_4519;

														BgL_auxz00_4519 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2876z00zz__srfi4z00,
															BINT(((long) 16967)),
															BGl_string2901z00zz__srfi4z00,
															BGl_string2898z00zz__srfi4z00,
															BgL_arg2037z00_1009);
														FAILURE(BgL_auxz00_4519, BFALSE, BFALSE);
													}
												BgL_auxz00_4515 = (long) CINT(BgL_auxz00_4516);
											}
											return
												BGl_makezd2u16vectorzd2zz__srfi4z00(BgL_auxz00_4515,
												BgL_initz00_1008);
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



/* make-u16vector */
	BGL_EXPORTED_DEF obj_t BGl_makezd2u16vectorzd2zz__srfi4z00(long BgL_lenz00_45,
		obj_t BgL_initz00_46)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 417 */
			{	/* Llib/srfi4.scm 417 */
				obj_t BgL_vz00_1010;

				BgL_vz00_1010 = BGL_ALLOC_U16VECTOR(BgL_lenz00_45);
				if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_initz00_46, BINT(((long) 0))))
					{	/* Llib/srfi4.scm 417 */
						((bool_t) 0);
					}
				else
					{
						long BgL_iz00_1013;

						BgL_iz00_1013 = ((long) 0);
					BgL_zc3anonymousza32039ze3z83_1014:
						if ((BgL_iz00_1013 < BgL_lenz00_45))
							{	/* Llib/srfi4.scm 417 */
								{	/* Llib/srfi4.scm 417 */
									unsigned short BgL_auxz00_4533;

									BgL_auxz00_4533 = (unsigned short) CINT(BgL_initz00_46);
									BGL_U16VSET(BgL_vz00_1010, BgL_iz00_1013, BgL_auxz00_4533);
								} BUNSPEC;
								{
									long BgL_iz00_4536;

									BgL_iz00_4536 = (BgL_iz00_1013 + ((long) 1));
									BgL_iz00_1013 = BgL_iz00_4536;
									goto BgL_zc3anonymousza32039ze3z83_1014;
								}
							}
						else
							{	/* Llib/srfi4.scm 417 */
								((bool_t) 0);
							}
					}
				return BgL_vz00_1010;
			}
		}
	}



/* _make-s32vector */
	obj_t BGl__makezd2s32vectorzd2zz__srfi4z00(obj_t BgL_envz00_52,
		obj_t BgL_optz00_51)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 418 */
			{	/* Llib/srfi4.scm 418 */
				obj_t BgL_g1961z00_1018;

				BgL_g1961z00_1018 = VECTOR_REF(BgL_optz00_51, (int) (((long) 0)));
				{	/* Llib/srfi4.scm 418 */
					int BgL_aux1963z00_1020;

					BgL_aux1963z00_1020 = VECTOR_LENGTH(BgL_optz00_51);
					switch ((long) (BgL_aux1963z00_1020))
						{
						case ((long) 1):

							{	/* Llib/srfi4.scm 418 */

								{	/* Llib/srfi4.scm 418 */
									obj_t BgL_arg2043z00_1023;

									BgL_arg2043z00_1023 =
										VECTOR_REF(BgL_optz00_51, (int) (((long) 0)));
									{	/* Llib/srfi4.scm 418 */
										long BgL_auxz00_4543;

										{	/* Llib/srfi4.scm 418 */
											obj_t BgL_auxz00_4544;

											if (INTEGERP(BgL_arg2043z00_1023))
												{	/* Llib/srfi4.scm 418 */
													BgL_auxz00_4544 = BgL_arg2043z00_1023;
												}
											else
												{
													obj_t BgL_auxz00_4547;

													BgL_auxz00_4547 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2876z00zz__srfi4z00,
														BINT(((long) 16996)), BGl_string2902z00zz__srfi4z00,
														BGl_string2898z00zz__srfi4z00, BgL_arg2043z00_1023);
													FAILURE(BgL_auxz00_4547, BFALSE, BFALSE);
												}
											BgL_auxz00_4543 = (long) CINT(BgL_auxz00_4544);
										}
										return
											BGl_makezd2s32vectorzd2zz__srfi4z00(BgL_auxz00_4543,
											BINT(((long) 0)));
							}}} break;
						case ((long) 2):

							{	/* Llib/srfi4.scm 418 */
								obj_t BgL_initz00_1024;

								BgL_initz00_1024 =
									VECTOR_REF(BgL_optz00_51, (int) (((long) 1)));
								{	/* Llib/srfi4.scm 418 */

									{	/* Llib/srfi4.scm 418 */
										obj_t BgL_arg2044z00_1025;

										BgL_arg2044z00_1025 =
											VECTOR_REF(BgL_optz00_51, (int) (((long) 0)));
										{	/* Llib/srfi4.scm 418 */
											long BgL_auxz00_4558;

											{	/* Llib/srfi4.scm 418 */
												obj_t BgL_auxz00_4559;

												if (INTEGERP(BgL_arg2044z00_1025))
													{	/* Llib/srfi4.scm 418 */
														BgL_auxz00_4559 = BgL_arg2044z00_1025;
													}
												else
													{
														obj_t BgL_auxz00_4562;

														BgL_auxz00_4562 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2876z00zz__srfi4z00,
															BINT(((long) 16996)),
															BGl_string2902z00zz__srfi4z00,
															BGl_string2898z00zz__srfi4z00,
															BgL_arg2044z00_1025);
														FAILURE(BgL_auxz00_4562, BFALSE, BFALSE);
													}
												BgL_auxz00_4558 = (long) CINT(BgL_auxz00_4559);
											}
											return
												BGl_makezd2s32vectorzd2zz__srfi4z00(BgL_auxz00_4558,
												BgL_initz00_1024);
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



/* make-s32vector */
	BGL_EXPORTED_DEF obj_t BGl_makezd2s32vectorzd2zz__srfi4z00(long BgL_lenz00_49,
		obj_t BgL_initz00_50)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 418 */
			{	/* Llib/srfi4.scm 418 */
				obj_t BgL_vz00_1026;

				BgL_vz00_1026 = BGL_ALLOC_S32VECTOR(BgL_lenz00_49);
				if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_initz00_50, BINT(((long) 0))))
					{	/* Llib/srfi4.scm 418 */
						((bool_t) 0);
					}
				else
					{
						long BgL_iz00_1029;

						BgL_iz00_1029 = ((long) 0);
					BgL_zc3anonymousza32046ze3z83_1030:
						if ((BgL_iz00_1029 < BgL_lenz00_49))
							{	/* Llib/srfi4.scm 418 */
								{	/* Llib/srfi4.scm 418 */
									long BgL_auxz00_4576;

									BgL_auxz00_4576 = (long) CINT(BgL_initz00_50);
									BGL_S32VSET(BgL_vz00_1026, BgL_iz00_1029, BgL_auxz00_4576);
								} BUNSPEC;
								{
									long BgL_iz00_4579;

									BgL_iz00_4579 = (BgL_iz00_1029 + ((long) 1));
									BgL_iz00_1029 = BgL_iz00_4579;
									goto BgL_zc3anonymousza32046ze3z83_1030;
								}
							}
						else
							{	/* Llib/srfi4.scm 418 */
								((bool_t) 0);
							}
					}
				return BgL_vz00_1026;
			}
		}
	}



/* _make-u32vector */
	obj_t BGl__makezd2u32vectorzd2zz__srfi4z00(obj_t BgL_envz00_56,
		obj_t BgL_optz00_55)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 419 */
			{	/* Llib/srfi4.scm 419 */
				obj_t BgL_g1964z00_1034;

				BgL_g1964z00_1034 = VECTOR_REF(BgL_optz00_55, (int) (((long) 0)));
				{	/* Llib/srfi4.scm 419 */
					int BgL_aux1966z00_1036;

					BgL_aux1966z00_1036 = VECTOR_LENGTH(BgL_optz00_55);
					switch ((long) (BgL_aux1966z00_1036))
						{
						case ((long) 1):

							{	/* Llib/srfi4.scm 419 */

								{	/* Llib/srfi4.scm 419 */
									obj_t BgL_arg2051z00_1039;

									BgL_arg2051z00_1039 =
										VECTOR_REF(BgL_optz00_55, (int) (((long) 0)));
									{	/* Llib/srfi4.scm 419 */
										long BgL_auxz00_4586;

										{	/* Llib/srfi4.scm 419 */
											obj_t BgL_auxz00_4587;

											if (INTEGERP(BgL_arg2051z00_1039))
												{	/* Llib/srfi4.scm 419 */
													BgL_auxz00_4587 = BgL_arg2051z00_1039;
												}
											else
												{
													obj_t BgL_auxz00_4590;

													BgL_auxz00_4590 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2876z00zz__srfi4z00,
														BINT(((long) 17025)), BGl_string2903z00zz__srfi4z00,
														BGl_string2898z00zz__srfi4z00, BgL_arg2051z00_1039);
													FAILURE(BgL_auxz00_4590, BFALSE, BFALSE);
												}
											BgL_auxz00_4586 = (long) CINT(BgL_auxz00_4587);
										}
										return
											BGl_makezd2u32vectorzd2zz__srfi4z00(BgL_auxz00_4586,
											BINT(((long) 0)));
							}}} break;
						case ((long) 2):

							{	/* Llib/srfi4.scm 419 */
								obj_t BgL_initz00_1040;

								BgL_initz00_1040 =
									VECTOR_REF(BgL_optz00_55, (int) (((long) 1)));
								{	/* Llib/srfi4.scm 419 */

									{	/* Llib/srfi4.scm 419 */
										obj_t BgL_arg2052z00_1041;

										BgL_arg2052z00_1041 =
											VECTOR_REF(BgL_optz00_55, (int) (((long) 0)));
										{	/* Llib/srfi4.scm 419 */
											long BgL_auxz00_4601;

											{	/* Llib/srfi4.scm 419 */
												obj_t BgL_auxz00_4602;

												if (INTEGERP(BgL_arg2052z00_1041))
													{	/* Llib/srfi4.scm 419 */
														BgL_auxz00_4602 = BgL_arg2052z00_1041;
													}
												else
													{
														obj_t BgL_auxz00_4605;

														BgL_auxz00_4605 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2876z00zz__srfi4z00,
															BINT(((long) 17025)),
															BGl_string2903z00zz__srfi4z00,
															BGl_string2898z00zz__srfi4z00,
															BgL_arg2052z00_1041);
														FAILURE(BgL_auxz00_4605, BFALSE, BFALSE);
													}
												BgL_auxz00_4601 = (long) CINT(BgL_auxz00_4602);
											}
											return
												BGl_makezd2u32vectorzd2zz__srfi4z00(BgL_auxz00_4601,
												BgL_initz00_1040);
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



/* make-u32vector */
	BGL_EXPORTED_DEF obj_t BGl_makezd2u32vectorzd2zz__srfi4z00(long BgL_lenz00_53,
		obj_t BgL_initz00_54)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 419 */
			{	/* Llib/srfi4.scm 419 */
				obj_t BgL_vz00_1042;

				BgL_vz00_1042 = BGL_ALLOC_U32VECTOR(BgL_lenz00_53);
				if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_initz00_54, BINT(((long) 0))))
					{	/* Llib/srfi4.scm 419 */
						((bool_t) 0);
					}
				else
					{
						long BgL_iz00_1045;

						BgL_iz00_1045 = ((long) 0);
					BgL_zc3anonymousza32054ze3z83_1046:
						if ((BgL_iz00_1045 < BgL_lenz00_53))
							{	/* Llib/srfi4.scm 419 */
								{	/* Llib/srfi4.scm 419 */
									unsigned long BgL_auxz00_4619;

									BgL_auxz00_4619 = (unsigned long) CINT(BgL_initz00_54);
									BGL_U32VSET(BgL_vz00_1042, BgL_iz00_1045, BgL_auxz00_4619);
								} BUNSPEC;
								{
									long BgL_iz00_4622;

									BgL_iz00_4622 = (BgL_iz00_1045 + ((long) 1));
									BgL_iz00_1045 = BgL_iz00_4622;
									goto BgL_zc3anonymousza32054ze3z83_1046;
								}
							}
						else
							{	/* Llib/srfi4.scm 419 */
								((bool_t) 0);
							}
					}
				return BgL_vz00_1042;
			}
		}
	}



/* _make-s64vector */
	obj_t BGl__makezd2s64vectorzd2zz__srfi4z00(obj_t BgL_envz00_60,
		obj_t BgL_optz00_59)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 420 */
			{	/* Llib/srfi4.scm 420 */
				obj_t BgL_g1967z00_1050;

				BgL_g1967z00_1050 = VECTOR_REF(BgL_optz00_59, (int) (((long) 0)));
				{	/* Llib/srfi4.scm 420 */
					int BgL_aux1969z00_1052;

					BgL_aux1969z00_1052 = VECTOR_LENGTH(BgL_optz00_59);
					switch ((long) (BgL_aux1969z00_1052))
						{
						case ((long) 1):

							{	/* Llib/srfi4.scm 420 */

								{	/* Llib/srfi4.scm 420 */
									obj_t BgL_arg2058z00_1055;

									BgL_arg2058z00_1055 =
										VECTOR_REF(BgL_optz00_59, (int) (((long) 0)));
									{	/* Llib/srfi4.scm 420 */
										long BgL_auxz00_4629;

										{	/* Llib/srfi4.scm 420 */
											obj_t BgL_auxz00_4630;

											if (INTEGERP(BgL_arg2058z00_1055))
												{	/* Llib/srfi4.scm 420 */
													BgL_auxz00_4630 = BgL_arg2058z00_1055;
												}
											else
												{
													obj_t BgL_auxz00_4633;

													BgL_auxz00_4633 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2876z00zz__srfi4z00,
														BINT(((long) 17054)), BGl_string2904z00zz__srfi4z00,
														BGl_string2898z00zz__srfi4z00, BgL_arg2058z00_1055);
													FAILURE(BgL_auxz00_4633, BFALSE, BFALSE);
												}
											BgL_auxz00_4629 = (long) CINT(BgL_auxz00_4630);
										}
										return
											BGl_makezd2s64vectorzd2zz__srfi4z00(BgL_auxz00_4629,
											BGl_llong2905z00zz__srfi4z00);
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Llib/srfi4.scm 420 */
								obj_t BgL_initz00_1056;

								BgL_initz00_1056 =
									VECTOR_REF(BgL_optz00_59, (int) (((long) 1)));
								{	/* Llib/srfi4.scm 420 */

									{	/* Llib/srfi4.scm 420 */
										obj_t BgL_arg2059z00_1057;

										BgL_arg2059z00_1057 =
											VECTOR_REF(BgL_optz00_59, (int) (((long) 0)));
										{	/* Llib/srfi4.scm 420 */
											long BgL_auxz00_4643;

											{	/* Llib/srfi4.scm 420 */
												obj_t BgL_auxz00_4644;

												if (INTEGERP(BgL_arg2059z00_1057))
													{	/* Llib/srfi4.scm 420 */
														BgL_auxz00_4644 = BgL_arg2059z00_1057;
													}
												else
													{
														obj_t BgL_auxz00_4647;

														BgL_auxz00_4647 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2876z00zz__srfi4z00,
															BINT(((long) 17054)),
															BGl_string2904z00zz__srfi4z00,
															BGl_string2898z00zz__srfi4z00,
															BgL_arg2059z00_1057);
														FAILURE(BgL_auxz00_4647, BFALSE, BFALSE);
													}
												BgL_auxz00_4643 = (long) CINT(BgL_auxz00_4644);
											}
											return
												BGl_makezd2s64vectorzd2zz__srfi4z00(BgL_auxz00_4643,
												BgL_initz00_1056);
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



/* make-s64vector */
	BGL_EXPORTED_DEF obj_t BGl_makezd2s64vectorzd2zz__srfi4z00(long BgL_lenz00_57,
		obj_t BgL_initz00_58)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 420 */
			{	/* Llib/srfi4.scm 420 */
				obj_t BgL_vz00_1058;

				BgL_vz00_1058 = BGL_ALLOC_S64VECTOR(BgL_lenz00_57);
				if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_initz00_58, BINT(((long) 0))))
					{	/* Llib/srfi4.scm 420 */
						((bool_t) 0);
					}
				else
					{
						long BgL_iz00_1061;

						BgL_iz00_1061 = ((long) 0);
					BgL_zc3anonymousza32061ze3z83_1062:
						if ((BgL_iz00_1061 < BgL_lenz00_57))
							{	/* Llib/srfi4.scm 420 */
								{	/* Llib/srfi4.scm 420 */
									BGL_LONGLONG_T BgL_auxz00_4661;

									BgL_auxz00_4661 = BLLONG_TO_LLONG(BgL_initz00_58);
									BGL_S64VSET(BgL_vz00_1058, BgL_iz00_1061, BgL_auxz00_4661);
								}
								BUNSPEC;
								{
									long BgL_iz00_4664;

									BgL_iz00_4664 = (BgL_iz00_1061 + ((long) 1));
									BgL_iz00_1061 = BgL_iz00_4664;
									goto BgL_zc3anonymousza32061ze3z83_1062;
								}
							}
						else
							{	/* Llib/srfi4.scm 420 */
								((bool_t) 0);
							}
					}
				return BgL_vz00_1058;
			}
		}
	}



/* _make-u64vector */
	obj_t BGl__makezd2u64vectorzd2zz__srfi4z00(obj_t BgL_envz00_64,
		obj_t BgL_optz00_63)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 421 */
			{	/* Llib/srfi4.scm 421 */
				obj_t BgL_g1970z00_1066;

				BgL_g1970z00_1066 = VECTOR_REF(BgL_optz00_63, (int) (((long) 0)));
				{	/* Llib/srfi4.scm 421 */
					int BgL_aux1972z00_1068;

					BgL_aux1972z00_1068 = VECTOR_LENGTH(BgL_optz00_63);
					switch ((long) (BgL_aux1972z00_1068))
						{
						case ((long) 1):

							{	/* Llib/srfi4.scm 421 */

								{	/* Llib/srfi4.scm 421 */
									obj_t BgL_arg2065z00_1071;

									BgL_arg2065z00_1071 =
										VECTOR_REF(BgL_optz00_63, (int) (((long) 0)));
									{	/* Llib/srfi4.scm 421 */
										long BgL_auxz00_4671;

										{	/* Llib/srfi4.scm 421 */
											obj_t BgL_auxz00_4672;

											if (INTEGERP(BgL_arg2065z00_1071))
												{	/* Llib/srfi4.scm 421 */
													BgL_auxz00_4672 = BgL_arg2065z00_1071;
												}
											else
												{
													obj_t BgL_auxz00_4675;

													BgL_auxz00_4675 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2876z00zz__srfi4z00,
														BINT(((long) 17085)), BGl_string2906z00zz__srfi4z00,
														BGl_string2898z00zz__srfi4z00, BgL_arg2065z00_1071);
													FAILURE(BgL_auxz00_4675, BFALSE, BFALSE);
												}
											BgL_auxz00_4671 = (long) CINT(BgL_auxz00_4672);
										}
										return
											BGl_makezd2u64vectorzd2zz__srfi4z00(BgL_auxz00_4671,
											BGl_llong2905z00zz__srfi4z00);
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Llib/srfi4.scm 421 */
								obj_t BgL_initz00_1072;

								BgL_initz00_1072 =
									VECTOR_REF(BgL_optz00_63, (int) (((long) 1)));
								{	/* Llib/srfi4.scm 421 */

									{	/* Llib/srfi4.scm 421 */
										obj_t BgL_arg2066z00_1073;

										BgL_arg2066z00_1073 =
											VECTOR_REF(BgL_optz00_63, (int) (((long) 0)));
										{	/* Llib/srfi4.scm 421 */
											long BgL_auxz00_4685;

											{	/* Llib/srfi4.scm 421 */
												obj_t BgL_auxz00_4686;

												if (INTEGERP(BgL_arg2066z00_1073))
													{	/* Llib/srfi4.scm 421 */
														BgL_auxz00_4686 = BgL_arg2066z00_1073;
													}
												else
													{
														obj_t BgL_auxz00_4689;

														BgL_auxz00_4689 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2876z00zz__srfi4z00,
															BINT(((long) 17085)),
															BGl_string2906z00zz__srfi4z00,
															BGl_string2898z00zz__srfi4z00,
															BgL_arg2066z00_1073);
														FAILURE(BgL_auxz00_4689, BFALSE, BFALSE);
													}
												BgL_auxz00_4685 = (long) CINT(BgL_auxz00_4686);
											}
											return
												BGl_makezd2u64vectorzd2zz__srfi4z00(BgL_auxz00_4685,
												BgL_initz00_1072);
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



/* make-u64vector */
	BGL_EXPORTED_DEF obj_t BGl_makezd2u64vectorzd2zz__srfi4z00(long BgL_lenz00_61,
		obj_t BgL_initz00_62)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 421 */
			{	/* Llib/srfi4.scm 421 */
				obj_t BgL_vz00_1074;

				BgL_vz00_1074 = BGL_ALLOC_U64VECTOR(BgL_lenz00_61);
				if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_initz00_62, BINT(((long) 0))))
					{	/* Llib/srfi4.scm 421 */
						((bool_t) 0);
					}
				else
					{
						long BgL_iz00_1077;

						BgL_iz00_1077 = ((long) 0);
					BgL_zc3anonymousza32068ze3z83_1078:
						if ((BgL_iz00_1077 < BgL_lenz00_61))
							{	/* Llib/srfi4.scm 421 */
								{	/* Llib/srfi4.scm 421 */
									unsigned BGL_LONGLONG_T BgL_auxz00_4703;

									BgL_auxz00_4703 = BLLONG_TO_LLONG(BgL_initz00_62);
									BGL_U64VSET(BgL_vz00_1074, BgL_iz00_1077, BgL_auxz00_4703);
								} BUNSPEC;
								{
									long BgL_iz00_4706;

									BgL_iz00_4706 = (BgL_iz00_1077 + ((long) 1));
									BgL_iz00_1077 = BgL_iz00_4706;
									goto BgL_zc3anonymousza32068ze3z83_1078;
								}
							}
						else
							{	/* Llib/srfi4.scm 421 */
								((bool_t) 0);
							}
					}
				return BgL_vz00_1074;
			}
		}
	}



/* _make-f32vector */
	obj_t BGl__makezd2f32vectorzd2zz__srfi4z00(obj_t BgL_envz00_68,
		obj_t BgL_optz00_67)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 422 */
			{	/* Llib/srfi4.scm 422 */
				obj_t BgL_g1973z00_1082;

				BgL_g1973z00_1082 = VECTOR_REF(BgL_optz00_67, (int) (((long) 0)));
				{	/* Llib/srfi4.scm 422 */
					int BgL_aux1975z00_1084;

					BgL_aux1975z00_1084 = VECTOR_LENGTH(BgL_optz00_67);
					switch ((long) (BgL_aux1975z00_1084))
						{
						case ((long) 1):

							{	/* Llib/srfi4.scm 422 */

								{	/* Llib/srfi4.scm 422 */
									obj_t BgL_arg2072z00_1087;

									BgL_arg2072z00_1087 =
										VECTOR_REF(BgL_optz00_67, (int) (((long) 0)));
									{	/* Llib/srfi4.scm 422 */
										long BgL_auxz00_4713;

										{	/* Llib/srfi4.scm 422 */
											obj_t BgL_auxz00_4714;

											if (INTEGERP(BgL_arg2072z00_1087))
												{	/* Llib/srfi4.scm 422 */
													BgL_auxz00_4714 = BgL_arg2072z00_1087;
												}
											else
												{
													obj_t BgL_auxz00_4717;

													BgL_auxz00_4717 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2876z00zz__srfi4z00,
														BINT(((long) 17116)), BGl_string2907z00zz__srfi4z00,
														BGl_string2898z00zz__srfi4z00, BgL_arg2072z00_1087);
													FAILURE(BgL_auxz00_4717, BFALSE, BFALSE);
												}
											BgL_auxz00_4713 = (long) CINT(BgL_auxz00_4714);
										}
										return
											BGl_makezd2f32vectorzd2zz__srfi4z00(BgL_auxz00_4713,
											BGl_real2908z00zz__srfi4z00);
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Llib/srfi4.scm 422 */
								obj_t BgL_initz00_1088;

								BgL_initz00_1088 =
									VECTOR_REF(BgL_optz00_67, (int) (((long) 1)));
								{	/* Llib/srfi4.scm 422 */

									{	/* Llib/srfi4.scm 422 */
										obj_t BgL_arg2073z00_1089;

										BgL_arg2073z00_1089 =
											VECTOR_REF(BgL_optz00_67, (int) (((long) 0)));
										{	/* Llib/srfi4.scm 422 */
											long BgL_auxz00_4727;

											{	/* Llib/srfi4.scm 422 */
												obj_t BgL_auxz00_4728;

												if (INTEGERP(BgL_arg2073z00_1089))
													{	/* Llib/srfi4.scm 422 */
														BgL_auxz00_4728 = BgL_arg2073z00_1089;
													}
												else
													{
														obj_t BgL_auxz00_4731;

														BgL_auxz00_4731 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2876z00zz__srfi4z00,
															BINT(((long) 17116)),
															BGl_string2907z00zz__srfi4z00,
															BGl_string2898z00zz__srfi4z00,
															BgL_arg2073z00_1089);
														FAILURE(BgL_auxz00_4731, BFALSE, BFALSE);
													}
												BgL_auxz00_4727 = (long) CINT(BgL_auxz00_4728);
											}
											return
												BGl_makezd2f32vectorzd2zz__srfi4z00(BgL_auxz00_4727,
												BgL_initz00_1088);
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



/* make-f32vector */
	BGL_EXPORTED_DEF obj_t BGl_makezd2f32vectorzd2zz__srfi4z00(long BgL_lenz00_65,
		obj_t BgL_initz00_66)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 422 */
			{	/* Llib/srfi4.scm 422 */
				obj_t BgL_vz00_1090;

				BgL_vz00_1090 = BGL_ALLOC_F32VECTOR(BgL_lenz00_65);
				if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_initz00_66, BINT(((long) 0))))
					{	/* Llib/srfi4.scm 422 */
						((bool_t) 0);
					}
				else
					{
						long BgL_iz00_1093;

						BgL_iz00_1093 = ((long) 0);
					BgL_zc3anonymousza32075ze3z83_1094:
						if ((BgL_iz00_1093 < BgL_lenz00_65))
							{	/* Llib/srfi4.scm 422 */
								{	/* Llib/srfi4.scm 422 */
									float BgL_auxz00_4745;

									BgL_auxz00_4745 = REAL_TO_FLOAT(BgL_initz00_66);
									BGL_F32VSET(BgL_vz00_1090, BgL_iz00_1093, BgL_auxz00_4745);
								} BUNSPEC;
								{
									long BgL_iz00_4748;

									BgL_iz00_4748 = (BgL_iz00_1093 + ((long) 1));
									BgL_iz00_1093 = BgL_iz00_4748;
									goto BgL_zc3anonymousza32075ze3z83_1094;
								}
							}
						else
							{	/* Llib/srfi4.scm 422 */
								((bool_t) 0);
							}
					}
				return BgL_vz00_1090;
			}
		}
	}



/* _make-f64vector */
	obj_t BGl__makezd2f64vectorzd2zz__srfi4z00(obj_t BgL_envz00_72,
		obj_t BgL_optz00_71)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 423 */
			{	/* Llib/srfi4.scm 423 */
				obj_t BgL_g1976z00_1098;

				BgL_g1976z00_1098 = VECTOR_REF(BgL_optz00_71, (int) (((long) 0)));
				{	/* Llib/srfi4.scm 423 */
					int BgL_aux1978z00_1100;

					BgL_aux1978z00_1100 = VECTOR_LENGTH(BgL_optz00_71);
					switch ((long) (BgL_aux1978z00_1100))
						{
						case ((long) 1):

							{	/* Llib/srfi4.scm 423 */

								{	/* Llib/srfi4.scm 423 */
									obj_t BgL_arg2079z00_1103;

									BgL_arg2079z00_1103 =
										VECTOR_REF(BgL_optz00_71, (int) (((long) 0)));
									{	/* Llib/srfi4.scm 423 */
										long BgL_auxz00_4755;

										{	/* Llib/srfi4.scm 423 */
											obj_t BgL_auxz00_4756;

											if (INTEGERP(BgL_arg2079z00_1103))
												{	/* Llib/srfi4.scm 423 */
													BgL_auxz00_4756 = BgL_arg2079z00_1103;
												}
											else
												{
													obj_t BgL_auxz00_4759;

													BgL_auxz00_4759 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2876z00zz__srfi4z00,
														BINT(((long) 17147)), BGl_string2909z00zz__srfi4z00,
														BGl_string2898z00zz__srfi4z00, BgL_arg2079z00_1103);
													FAILURE(BgL_auxz00_4759, BFALSE, BFALSE);
												}
											BgL_auxz00_4755 = (long) CINT(BgL_auxz00_4756);
										}
										return
											BGl_makezd2f64vectorzd2zz__srfi4z00(BgL_auxz00_4755,
											BGl_real2908z00zz__srfi4z00);
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Llib/srfi4.scm 423 */
								obj_t BgL_initz00_1104;

								BgL_initz00_1104 =
									VECTOR_REF(BgL_optz00_71, (int) (((long) 1)));
								{	/* Llib/srfi4.scm 423 */

									{	/* Llib/srfi4.scm 423 */
										obj_t BgL_arg2080z00_1105;

										BgL_arg2080z00_1105 =
											VECTOR_REF(BgL_optz00_71, (int) (((long) 0)));
										{	/* Llib/srfi4.scm 423 */
											long BgL_auxz00_4769;

											{	/* Llib/srfi4.scm 423 */
												obj_t BgL_auxz00_4770;

												if (INTEGERP(BgL_arg2080z00_1105))
													{	/* Llib/srfi4.scm 423 */
														BgL_auxz00_4770 = BgL_arg2080z00_1105;
													}
												else
													{
														obj_t BgL_auxz00_4773;

														BgL_auxz00_4773 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2876z00zz__srfi4z00,
															BINT(((long) 17147)),
															BGl_string2909z00zz__srfi4z00,
															BGl_string2898z00zz__srfi4z00,
															BgL_arg2080z00_1105);
														FAILURE(BgL_auxz00_4773, BFALSE, BFALSE);
													}
												BgL_auxz00_4769 = (long) CINT(BgL_auxz00_4770);
											}
											return
												BGl_makezd2f64vectorzd2zz__srfi4z00(BgL_auxz00_4769,
												BgL_initz00_1104);
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



/* make-f64vector */
	BGL_EXPORTED_DEF obj_t BGl_makezd2f64vectorzd2zz__srfi4z00(long BgL_lenz00_69,
		obj_t BgL_initz00_70)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 423 */
			{	/* Llib/srfi4.scm 423 */
				obj_t BgL_vz00_1106;

				BgL_vz00_1106 = BGL_ALLOC_F64VECTOR(BgL_lenz00_69);
				if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_initz00_70, BINT(((long) 0))))
					{	/* Llib/srfi4.scm 423 */
						((bool_t) 0);
					}
				else
					{
						long BgL_iz00_1109;

						BgL_iz00_1109 = ((long) 0);
					BgL_zc3anonymousza32082ze3z83_1110:
						if ((BgL_iz00_1109 < BgL_lenz00_69))
							{	/* Llib/srfi4.scm 423 */
								{	/* Llib/srfi4.scm 423 */
									double BgL_auxz00_4787;

									BgL_auxz00_4787 = REAL_TO_DOUBLE(BgL_initz00_70);
									BGL_F64VSET(BgL_vz00_1106, BgL_iz00_1109, BgL_auxz00_4787);
								} BUNSPEC;
								{
									long BgL_iz00_4790;

									BgL_iz00_4790 = (BgL_iz00_1109 + ((long) 1));
									BgL_iz00_1109 = BgL_iz00_4790;
									goto BgL_zc3anonymousza32082ze3z83_1110;
								}
							}
						else
							{	/* Llib/srfi4.scm 423 */
								((bool_t) 0);
							}
					}
				return BgL_vz00_1106;
			}
		}
	}



/* s8vector-ref */
	BGL_EXPORTED_DEF char BGl_s8vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_73,
		long BgL_kz00_74)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 428 */
			{	/* Llib/srfi4.scm 429 */
				bool_t BgL_testz00_4792;

				{	/* Llib/srfi4.scm 429 */
					long BgL_arg2097z00_3684;

					BgL_arg2097z00_3684 = BGL_HVECTOR_LENGTH(BgL_vz00_73);
					{	/* Llib/srfi4.scm 429 */
						int BgL_auxz00_4796;

						int BgL_auxz00_4794;

						BgL_auxz00_4796 = (int) (BgL_arg2097z00_3684);
						BgL_auxz00_4794 = (int) (BgL_kz00_74);
						BgL_testz00_4792 = BOUND_CHECK(BgL_auxz00_4794, BgL_auxz00_4796);
				}}
				if (BgL_testz00_4792)
					{	/* Llib/srfi4.scm 429 */
						return BGL_S8VREF(BgL_vz00_73, BgL_kz00_74);
					}
				else
					{	/* Llib/srfi4.scm 429 */
						obj_t BgL_arg2086z00_3685;

						obj_t BgL_arg2089z00_3686;

						BgL_arg2086z00_3685 = BGl_symbol2910z00zz__srfi4z00;
						{	/* Llib/srfi4.scm 429 */
							obj_t BgL_arg2091z00_3687;

							{	/* Llib/srfi4.scm 429 */
								long BgL_arg2093z00_3688;

								{	/* Llib/srfi4.scm 429 */
									long BgL_arg2095z00_3689;

									BgL_arg2095z00_3689 = BGL_HVECTOR_LENGTH(BgL_vz00_73);
									BgL_arg2093z00_3688 = (BgL_arg2095z00_3689 - ((long) 1));
								}
								{	/* Llib/srfi4.scm 429 */

									BgL_arg2091z00_3687 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_arg2093z00_3688, ((long) 10));
							}}
							BgL_arg2089z00_3686 =
								string_append_3(BGl_string2912z00zz__srfi4z00,
								BgL_arg2091z00_3687, BGl_string2913z00zz__srfi4z00);
						}
						return
							(signed char) CINT(BGl_errorz00zz__errorz00(BgL_arg2086z00_3685,
								BgL_arg2089z00_3686, BINT(BgL_kz00_74)));
		}}}
	}



/* _s8vector-ref */
	obj_t BGl__s8vectorzd2refzd2zz__srfi4z00(obj_t BgL_envz00_3303,
		obj_t BgL_vz00_3304, obj_t BgL_kz00_3305)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 428 */
			{	/* Llib/srfi4.scm 429 */
				char BgL_auxz00_4807;

				{	/* Llib/srfi4.scm 429 */
					obj_t BgL_vz00_3690;

					long BgL_kz00_3691;

					if (BGL_S8VECTORP(BgL_vz00_3304))
						{	/* Llib/srfi4.scm 429 */
							BgL_vz00_3690 = BgL_vz00_3304;
						}
					else
						{
							obj_t BgL_auxz00_4810;

							BgL_auxz00_4810 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 17467)), BGl_string2914z00zz__srfi4z00,
								BGl_string2878z00zz__srfi4z00, BgL_vz00_3304);
							FAILURE(BgL_auxz00_4810, BFALSE, BFALSE);
						}
					{	/* Llib/srfi4.scm 429 */
						obj_t BgL_auxz00_4814;

						if (INTEGERP(BgL_kz00_3305))
							{	/* Llib/srfi4.scm 429 */
								BgL_auxz00_4814 = BgL_kz00_3305;
							}
						else
							{
								obj_t BgL_auxz00_4817;

								BgL_auxz00_4817 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
									BINT(((long) 17467)), BGl_string2914z00zz__srfi4z00,
									BGl_string2898z00zz__srfi4z00, BgL_kz00_3305);
								FAILURE(BgL_auxz00_4817, BFALSE, BFALSE);
							}
						BgL_kz00_3691 = (long) CINT(BgL_auxz00_4814);
					}
					{	/* Llib/srfi4.scm 429 */
						bool_t BgL_testz00_4822;

						{	/* Llib/srfi4.scm 429 */
							long BgL_arg2097z00_3692;

							BgL_arg2097z00_3692 = BGL_HVECTOR_LENGTH(BgL_vz00_3690);
							{	/* Llib/srfi4.scm 429 */
								int BgL_auxz00_4826;

								int BgL_auxz00_4824;

								BgL_auxz00_4826 = (int) (BgL_arg2097z00_3692);
								BgL_auxz00_4824 = (int) (BgL_kz00_3691);
								BgL_testz00_4822 =
									BOUND_CHECK(BgL_auxz00_4824, BgL_auxz00_4826);
						}}
						if (BgL_testz00_4822)
							{	/* Llib/srfi4.scm 429 */
								BgL_auxz00_4807 = BGL_S8VREF(BgL_vz00_3690, BgL_kz00_3691);
							}
						else
							{	/* Llib/srfi4.scm 429 */
								obj_t BgL_arg2086z00_3693;

								obj_t BgL_arg2089z00_3694;

								BgL_arg2086z00_3693 = BGl_symbol2910z00zz__srfi4z00;
								{	/* Llib/srfi4.scm 429 */
									obj_t BgL_arg2091z00_3695;

									{	/* Llib/srfi4.scm 429 */
										long BgL_arg2093z00_3696;

										{	/* Llib/srfi4.scm 429 */
											long BgL_arg2095z00_3697;

											BgL_arg2095z00_3697 = BGL_HVECTOR_LENGTH(BgL_vz00_3690);
											BgL_arg2093z00_3696 = (BgL_arg2095z00_3697 - ((long) 1));
										}
										{	/* Llib/srfi4.scm 429 */

											BgL_arg2091z00_3695 =
												BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
												(BgL_arg2093z00_3696, ((long) 10));
									}}
									BgL_arg2089z00_3694 =
										string_append_3(BGl_string2912z00zz__srfi4z00,
										BgL_arg2091z00_3695, BGl_string2913z00zz__srfi4z00);
								}
								BgL_auxz00_4807 =
									(signed char)
									CINT(BGl_errorz00zz__errorz00(BgL_arg2086z00_3693,
										BgL_arg2089z00_3694, BINT(BgL_kz00_3691)));
				}}}
				return BINT(BgL_auxz00_4807);
			}
		}
	}



/* u8vector-ref */
	BGL_EXPORTED_DEF unsigned char BGl_u8vectorzd2refzd2zz__srfi4z00(obj_t
		BgL_vz00_75, long BgL_kz00_76)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 437 */
			{	/* Llib/srfi4.scm 438 */
				bool_t BgL_testz00_4838;

				{	/* Llib/srfi4.scm 438 */
					long BgL_arg2107z00_3698;

					BgL_arg2107z00_3698 = BGL_HVECTOR_LENGTH(BgL_vz00_75);
					{	/* Llib/srfi4.scm 438 */
						int BgL_auxz00_4842;

						int BgL_auxz00_4840;

						BgL_auxz00_4842 = (int) (BgL_arg2107z00_3698);
						BgL_auxz00_4840 = (int) (BgL_kz00_76);
						BgL_testz00_4838 = BOUND_CHECK(BgL_auxz00_4840, BgL_auxz00_4842);
				}}
				if (BgL_testz00_4838)
					{	/* Llib/srfi4.scm 438 */
						return BGL_U8VREF(BgL_vz00_75, BgL_kz00_76);
					}
				else
					{	/* Llib/srfi4.scm 438 */
						obj_t BgL_arg2099z00_3699;

						obj_t BgL_arg2100z00_3700;

						BgL_arg2099z00_3699 = BGl_symbol2915z00zz__srfi4z00;
						{	/* Llib/srfi4.scm 438 */
							obj_t BgL_arg2102z00_3701;

							{	/* Llib/srfi4.scm 438 */
								long BgL_arg2104z00_3702;

								{	/* Llib/srfi4.scm 438 */
									long BgL_arg2105z00_3703;

									BgL_arg2105z00_3703 = BGL_HVECTOR_LENGTH(BgL_vz00_75);
									BgL_arg2104z00_3702 = (BgL_arg2105z00_3703 - ((long) 1));
								}
								{	/* Llib/srfi4.scm 438 */

									BgL_arg2102z00_3701 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_arg2104z00_3702, ((long) 10));
							}}
							BgL_arg2100z00_3700 =
								string_append_3(BGl_string2912z00zz__srfi4z00,
								BgL_arg2102z00_3701, BGl_string2913z00zz__srfi4z00);
						}
						return
							(unsigned char) CINT(BGl_errorz00zz__errorz00(BgL_arg2099z00_3699,
								BgL_arg2100z00_3700, BINT(BgL_kz00_76)));
		}}}
	}



/* _u8vector-ref */
	obj_t BGl__u8vectorzd2refzd2zz__srfi4z00(obj_t BgL_envz00_3310,
		obj_t BgL_vz00_3311, obj_t BgL_kz00_3312)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 437 */
			{	/* Llib/srfi4.scm 438 */
				unsigned char BgL_auxz00_4853;

				{	/* Llib/srfi4.scm 438 */
					obj_t BgL_vz00_3704;

					long BgL_kz00_3705;

					if (BGL_U8VECTORP(BgL_vz00_3311))
						{	/* Llib/srfi4.scm 438 */
							BgL_vz00_3704 = BgL_vz00_3311;
						}
					else
						{
							obj_t BgL_auxz00_4856;

							BgL_auxz00_4856 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 17738)), BGl_string2917z00zz__srfi4z00,
								BGl_string2880z00zz__srfi4z00, BgL_vz00_3311);
							FAILURE(BgL_auxz00_4856, BFALSE, BFALSE);
						}
					{	/* Llib/srfi4.scm 438 */
						obj_t BgL_auxz00_4860;

						if (INTEGERP(BgL_kz00_3312))
							{	/* Llib/srfi4.scm 438 */
								BgL_auxz00_4860 = BgL_kz00_3312;
							}
						else
							{
								obj_t BgL_auxz00_4863;

								BgL_auxz00_4863 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
									BINT(((long) 17738)), BGl_string2917z00zz__srfi4z00,
									BGl_string2898z00zz__srfi4z00, BgL_kz00_3312);
								FAILURE(BgL_auxz00_4863, BFALSE, BFALSE);
							}
						BgL_kz00_3705 = (long) CINT(BgL_auxz00_4860);
					}
					{	/* Llib/srfi4.scm 438 */
						bool_t BgL_testz00_4868;

						{	/* Llib/srfi4.scm 438 */
							long BgL_arg2107z00_3706;

							BgL_arg2107z00_3706 = BGL_HVECTOR_LENGTH(BgL_vz00_3704);
							{	/* Llib/srfi4.scm 438 */
								int BgL_auxz00_4872;

								int BgL_auxz00_4870;

								BgL_auxz00_4872 = (int) (BgL_arg2107z00_3706);
								BgL_auxz00_4870 = (int) (BgL_kz00_3705);
								BgL_testz00_4868 =
									BOUND_CHECK(BgL_auxz00_4870, BgL_auxz00_4872);
						}}
						if (BgL_testz00_4868)
							{	/* Llib/srfi4.scm 438 */
								BgL_auxz00_4853 = BGL_U8VREF(BgL_vz00_3704, BgL_kz00_3705);
							}
						else
							{	/* Llib/srfi4.scm 438 */
								obj_t BgL_arg2099z00_3707;

								obj_t BgL_arg2100z00_3708;

								BgL_arg2099z00_3707 = BGl_symbol2915z00zz__srfi4z00;
								{	/* Llib/srfi4.scm 438 */
									obj_t BgL_arg2102z00_3709;

									{	/* Llib/srfi4.scm 438 */
										long BgL_arg2104z00_3710;

										{	/* Llib/srfi4.scm 438 */
											long BgL_arg2105z00_3711;

											BgL_arg2105z00_3711 = BGL_HVECTOR_LENGTH(BgL_vz00_3704);
											BgL_arg2104z00_3710 = (BgL_arg2105z00_3711 - ((long) 1));
										}
										{	/* Llib/srfi4.scm 438 */

											BgL_arg2102z00_3709 =
												BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
												(BgL_arg2104z00_3710, ((long) 10));
									}}
									BgL_arg2100z00_3708 =
										string_append_3(BGl_string2912z00zz__srfi4z00,
										BgL_arg2102z00_3709, BGl_string2913z00zz__srfi4z00);
								}
								BgL_auxz00_4853 =
									(unsigned char)
									CINT(BGl_errorz00zz__errorz00(BgL_arg2099z00_3707,
										BgL_arg2100z00_3708, BINT(BgL_kz00_3705)));
				}}}
				return BINT(BgL_auxz00_4853);
			}
		}
	}



/* s16vector-ref */
	BGL_EXPORTED_DEF short BGl_s16vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_77,
		long BgL_kz00_78)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 446 */
			{	/* Llib/srfi4.scm 447 */
				bool_t BgL_testz00_4884;

				{	/* Llib/srfi4.scm 447 */
					long BgL_arg2118z00_3712;

					BgL_arg2118z00_3712 = BGL_HVECTOR_LENGTH(BgL_vz00_77);
					{	/* Llib/srfi4.scm 447 */
						int BgL_auxz00_4888;

						int BgL_auxz00_4886;

						BgL_auxz00_4888 = (int) (BgL_arg2118z00_3712);
						BgL_auxz00_4886 = (int) (BgL_kz00_78);
						BgL_testz00_4884 = BOUND_CHECK(BgL_auxz00_4886, BgL_auxz00_4888);
				}}
				if (BgL_testz00_4884)
					{	/* Llib/srfi4.scm 447 */
						return BGL_S16VREF(BgL_vz00_77, BgL_kz00_78);
					}
				else
					{	/* Llib/srfi4.scm 447 */
						obj_t BgL_arg2109z00_3713;

						obj_t BgL_arg2110z00_3714;

						BgL_arg2109z00_3713 = BGl_symbol2918z00zz__srfi4z00;
						{	/* Llib/srfi4.scm 447 */
							obj_t BgL_arg2112z00_3715;

							{	/* Llib/srfi4.scm 447 */
								long BgL_arg2114z00_3716;

								{	/* Llib/srfi4.scm 447 */
									long BgL_arg2115z00_3717;

									BgL_arg2115z00_3717 = BGL_HVECTOR_LENGTH(BgL_vz00_77);
									BgL_arg2114z00_3716 = (BgL_arg2115z00_3717 - ((long) 1));
								}
								{	/* Llib/srfi4.scm 447 */

									BgL_arg2112z00_3715 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_arg2114z00_3716, ((long) 10));
							}}
							BgL_arg2110z00_3714 =
								string_append_3(BGl_string2912z00zz__srfi4z00,
								BgL_arg2112z00_3715, BGl_string2913z00zz__srfi4z00);
						}
						return
							(short) CINT(BGl_errorz00zz__errorz00(BgL_arg2109z00_3713,
								BgL_arg2110z00_3714, BINT(BgL_kz00_78)));
		}}}
	}



/* _s16vector-ref */
	obj_t BGl__s16vectorzd2refzd2zz__srfi4z00(obj_t BgL_envz00_3317,
		obj_t BgL_vz00_3318, obj_t BgL_kz00_3319)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 446 */
			{	/* Llib/srfi4.scm 447 */
				short BgL_auxz00_4899;

				{	/* Llib/srfi4.scm 447 */
					obj_t BgL_vz00_3718;

					long BgL_kz00_3719;

					if (BGL_S16VECTORP(BgL_vz00_3318))
						{	/* Llib/srfi4.scm 447 */
							BgL_vz00_3718 = BgL_vz00_3318;
						}
					else
						{
							obj_t BgL_auxz00_4902;

							BgL_auxz00_4902 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 18010)), BGl_string2920z00zz__srfi4z00,
								BGl_string2882z00zz__srfi4z00, BgL_vz00_3318);
							FAILURE(BgL_auxz00_4902, BFALSE, BFALSE);
						}
					{	/* Llib/srfi4.scm 447 */
						obj_t BgL_auxz00_4906;

						if (INTEGERP(BgL_kz00_3319))
							{	/* Llib/srfi4.scm 447 */
								BgL_auxz00_4906 = BgL_kz00_3319;
							}
						else
							{
								obj_t BgL_auxz00_4909;

								BgL_auxz00_4909 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
									BINT(((long) 18010)), BGl_string2920z00zz__srfi4z00,
									BGl_string2898z00zz__srfi4z00, BgL_kz00_3319);
								FAILURE(BgL_auxz00_4909, BFALSE, BFALSE);
							}
						BgL_kz00_3719 = (long) CINT(BgL_auxz00_4906);
					}
					{	/* Llib/srfi4.scm 447 */
						bool_t BgL_testz00_4914;

						{	/* Llib/srfi4.scm 447 */
							long BgL_arg2118z00_3720;

							BgL_arg2118z00_3720 = BGL_HVECTOR_LENGTH(BgL_vz00_3718);
							{	/* Llib/srfi4.scm 447 */
								int BgL_auxz00_4918;

								int BgL_auxz00_4916;

								BgL_auxz00_4918 = (int) (BgL_arg2118z00_3720);
								BgL_auxz00_4916 = (int) (BgL_kz00_3719);
								BgL_testz00_4914 =
									BOUND_CHECK(BgL_auxz00_4916, BgL_auxz00_4918);
						}}
						if (BgL_testz00_4914)
							{	/* Llib/srfi4.scm 447 */
								BgL_auxz00_4899 = BGL_S16VREF(BgL_vz00_3718, BgL_kz00_3719);
							}
						else
							{	/* Llib/srfi4.scm 447 */
								obj_t BgL_arg2109z00_3721;

								obj_t BgL_arg2110z00_3722;

								BgL_arg2109z00_3721 = BGl_symbol2918z00zz__srfi4z00;
								{	/* Llib/srfi4.scm 447 */
									obj_t BgL_arg2112z00_3723;

									{	/* Llib/srfi4.scm 447 */
										long BgL_arg2114z00_3724;

										{	/* Llib/srfi4.scm 447 */
											long BgL_arg2115z00_3725;

											BgL_arg2115z00_3725 = BGL_HVECTOR_LENGTH(BgL_vz00_3718);
											BgL_arg2114z00_3724 = (BgL_arg2115z00_3725 - ((long) 1));
										}
										{	/* Llib/srfi4.scm 447 */

											BgL_arg2112z00_3723 =
												BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
												(BgL_arg2114z00_3724, ((long) 10));
									}}
									BgL_arg2110z00_3722 =
										string_append_3(BGl_string2912z00zz__srfi4z00,
										BgL_arg2112z00_3723, BGl_string2913z00zz__srfi4z00);
								}
								BgL_auxz00_4899 =
									(short) CINT(BGl_errorz00zz__errorz00(BgL_arg2109z00_3721,
										BgL_arg2110z00_3722, BINT(BgL_kz00_3719)));
				}}}
				return BINT(BgL_auxz00_4899);
			}
		}
	}



/* u16vector-ref */
	BGL_EXPORTED_DEF unsigned short BGl_u16vectorzd2refzd2zz__srfi4z00(obj_t
		BgL_vz00_79, long BgL_kz00_80)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 455 */
			{	/* Llib/srfi4.scm 456 */
				bool_t BgL_testz00_4930;

				{	/* Llib/srfi4.scm 456 */
					long BgL_arg2132z00_3726;

					BgL_arg2132z00_3726 = BGL_HVECTOR_LENGTH(BgL_vz00_79);
					{	/* Llib/srfi4.scm 456 */
						int BgL_auxz00_4934;

						int BgL_auxz00_4932;

						BgL_auxz00_4934 = (int) (BgL_arg2132z00_3726);
						BgL_auxz00_4932 = (int) (BgL_kz00_80);
						BgL_testz00_4930 = BOUND_CHECK(BgL_auxz00_4932, BgL_auxz00_4934);
				}}
				if (BgL_testz00_4930)
					{	/* Llib/srfi4.scm 456 */
						return BGL_U16VREF(BgL_vz00_79, BgL_kz00_80);
					}
				else
					{	/* Llib/srfi4.scm 456 */
						obj_t BgL_arg2121z00_3727;

						obj_t BgL_arg2123z00_3728;

						BgL_arg2121z00_3727 = BGl_symbol2921z00zz__srfi4z00;
						{	/* Llib/srfi4.scm 456 */
							obj_t BgL_arg2125z00_3729;

							{	/* Llib/srfi4.scm 456 */
								long BgL_arg2127z00_3730;

								{	/* Llib/srfi4.scm 456 */
									long BgL_arg2130z00_3731;

									BgL_arg2130z00_3731 = BGL_HVECTOR_LENGTH(BgL_vz00_79);
									BgL_arg2127z00_3730 = (BgL_arg2130z00_3731 - ((long) 1));
								}
								{	/* Llib/srfi4.scm 456 */

									BgL_arg2125z00_3729 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_arg2127z00_3730, ((long) 10));
							}}
							BgL_arg2123z00_3728 =
								string_append_3(BGl_string2912z00zz__srfi4z00,
								BgL_arg2125z00_3729, BGl_string2913z00zz__srfi4z00);
						}
						return
							(unsigned short)
							CINT(BGl_errorz00zz__errorz00(BgL_arg2121z00_3727,
								BgL_arg2123z00_3728, BINT(BgL_kz00_80)));
		}}}
	}



/* _u16vector-ref */
	obj_t BGl__u16vectorzd2refzd2zz__srfi4z00(obj_t BgL_envz00_3324,
		obj_t BgL_vz00_3325, obj_t BgL_kz00_3326)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 455 */
			{	/* Llib/srfi4.scm 456 */
				unsigned short BgL_auxz00_4945;

				{	/* Llib/srfi4.scm 456 */
					obj_t BgL_vz00_3732;

					long BgL_kz00_3733;

					if (BGL_U16VECTORP(BgL_vz00_3325))
						{	/* Llib/srfi4.scm 456 */
							BgL_vz00_3732 = BgL_vz00_3325;
						}
					else
						{
							obj_t BgL_auxz00_4948;

							BgL_auxz00_4948 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 18284)), BGl_string2923z00zz__srfi4z00,
								BGl_string2884z00zz__srfi4z00, BgL_vz00_3325);
							FAILURE(BgL_auxz00_4948, BFALSE, BFALSE);
						}
					{	/* Llib/srfi4.scm 456 */
						obj_t BgL_auxz00_4952;

						if (INTEGERP(BgL_kz00_3326))
							{	/* Llib/srfi4.scm 456 */
								BgL_auxz00_4952 = BgL_kz00_3326;
							}
						else
							{
								obj_t BgL_auxz00_4955;

								BgL_auxz00_4955 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
									BINT(((long) 18284)), BGl_string2923z00zz__srfi4z00,
									BGl_string2898z00zz__srfi4z00, BgL_kz00_3326);
								FAILURE(BgL_auxz00_4955, BFALSE, BFALSE);
							}
						BgL_kz00_3733 = (long) CINT(BgL_auxz00_4952);
					}
					{	/* Llib/srfi4.scm 456 */
						bool_t BgL_testz00_4960;

						{	/* Llib/srfi4.scm 456 */
							long BgL_arg2132z00_3734;

							BgL_arg2132z00_3734 = BGL_HVECTOR_LENGTH(BgL_vz00_3732);
							{	/* Llib/srfi4.scm 456 */
								int BgL_auxz00_4964;

								int BgL_auxz00_4962;

								BgL_auxz00_4964 = (int) (BgL_arg2132z00_3734);
								BgL_auxz00_4962 = (int) (BgL_kz00_3733);
								BgL_testz00_4960 =
									BOUND_CHECK(BgL_auxz00_4962, BgL_auxz00_4964);
						}}
						if (BgL_testz00_4960)
							{	/* Llib/srfi4.scm 456 */
								BgL_auxz00_4945 = BGL_U16VREF(BgL_vz00_3732, BgL_kz00_3733);
							}
						else
							{	/* Llib/srfi4.scm 456 */
								obj_t BgL_arg2121z00_3735;

								obj_t BgL_arg2123z00_3736;

								BgL_arg2121z00_3735 = BGl_symbol2921z00zz__srfi4z00;
								{	/* Llib/srfi4.scm 456 */
									obj_t BgL_arg2125z00_3737;

									{	/* Llib/srfi4.scm 456 */
										long BgL_arg2127z00_3738;

										{	/* Llib/srfi4.scm 456 */
											long BgL_arg2130z00_3739;

											BgL_arg2130z00_3739 = BGL_HVECTOR_LENGTH(BgL_vz00_3732);
											BgL_arg2127z00_3738 = (BgL_arg2130z00_3739 - ((long) 1));
										}
										{	/* Llib/srfi4.scm 456 */

											BgL_arg2125z00_3737 =
												BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
												(BgL_arg2127z00_3738, ((long) 10));
									}}
									BgL_arg2123z00_3736 =
										string_append_3(BGl_string2912z00zz__srfi4z00,
										BgL_arg2125z00_3737, BGl_string2913z00zz__srfi4z00);
								}
								BgL_auxz00_4945 =
									(unsigned short)
									CINT(BGl_errorz00zz__errorz00(BgL_arg2121z00_3735,
										BgL_arg2123z00_3736, BINT(BgL_kz00_3733)));
				}}}
				return BINT(BgL_auxz00_4945);
			}
		}
	}



/* s32vector-ref */
	BGL_EXPORTED_DEF long BGl_s32vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_81,
		long BgL_kz00_82)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 464 */
			{	/* Llib/srfi4.scm 465 */
				bool_t BgL_testz00_4976;

				{	/* Llib/srfi4.scm 465 */
					long BgL_arg2144z00_3740;

					BgL_arg2144z00_3740 = BGL_HVECTOR_LENGTH(BgL_vz00_81);
					{	/* Llib/srfi4.scm 465 */
						int BgL_auxz00_4980;

						int BgL_auxz00_4978;

						BgL_auxz00_4980 = (int) (BgL_arg2144z00_3740);
						BgL_auxz00_4978 = (int) (BgL_kz00_82);
						BgL_testz00_4976 = BOUND_CHECK(BgL_auxz00_4978, BgL_auxz00_4980);
				}}
				if (BgL_testz00_4976)
					{	/* Llib/srfi4.scm 465 */
						return BGL_S32VREF(BgL_vz00_81, BgL_kz00_82);
					}
				else
					{	/* Llib/srfi4.scm 465 */
						obj_t BgL_arg2134z00_3741;

						obj_t BgL_arg2135z00_3742;

						BgL_arg2134z00_3741 = BGl_symbol2924z00zz__srfi4z00;
						{	/* Llib/srfi4.scm 465 */
							obj_t BgL_arg2137z00_3743;

							{	/* Llib/srfi4.scm 465 */
								long BgL_arg2139z00_3744;

								{	/* Llib/srfi4.scm 465 */
									long BgL_arg2140z00_3745;

									BgL_arg2140z00_3745 = BGL_HVECTOR_LENGTH(BgL_vz00_81);
									BgL_arg2139z00_3744 = (BgL_arg2140z00_3745 - ((long) 1));
								}
								{	/* Llib/srfi4.scm 465 */

									BgL_arg2137z00_3743 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_arg2139z00_3744, ((long) 10));
							}}
							BgL_arg2135z00_3742 =
								string_append_3(BGl_string2912z00zz__srfi4z00,
								BgL_arg2137z00_3743, BGl_string2913z00zz__srfi4z00);
						}
						return
							(long) CINT(BGl_errorz00zz__errorz00(BgL_arg2134z00_3741,
								BgL_arg2135z00_3742, BINT(BgL_kz00_82)));
		}}}
	}



/* _s32vector-ref */
	obj_t BGl__s32vectorzd2refzd2zz__srfi4z00(obj_t BgL_envz00_3331,
		obj_t BgL_vz00_3332, obj_t BgL_kz00_3333)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 464 */
			{	/* Llib/srfi4.scm 465 */
				long BgL_auxz00_4991;

				{	/* Llib/srfi4.scm 465 */
					obj_t BgL_vz00_3746;

					long BgL_kz00_3747;

					if (BGL_S32VECTORP(BgL_vz00_3332))
						{	/* Llib/srfi4.scm 465 */
							BgL_vz00_3746 = BgL_vz00_3332;
						}
					else
						{
							obj_t BgL_auxz00_4994;

							BgL_auxz00_4994 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 18558)), BGl_string2926z00zz__srfi4z00,
								BGl_string2886z00zz__srfi4z00, BgL_vz00_3332);
							FAILURE(BgL_auxz00_4994, BFALSE, BFALSE);
						}
					{	/* Llib/srfi4.scm 465 */
						obj_t BgL_auxz00_4998;

						if (INTEGERP(BgL_kz00_3333))
							{	/* Llib/srfi4.scm 465 */
								BgL_auxz00_4998 = BgL_kz00_3333;
							}
						else
							{
								obj_t BgL_auxz00_5001;

								BgL_auxz00_5001 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
									BINT(((long) 18558)), BGl_string2926z00zz__srfi4z00,
									BGl_string2898z00zz__srfi4z00, BgL_kz00_3333);
								FAILURE(BgL_auxz00_5001, BFALSE, BFALSE);
							}
						BgL_kz00_3747 = (long) CINT(BgL_auxz00_4998);
					}
					{	/* Llib/srfi4.scm 465 */
						bool_t BgL_testz00_5006;

						{	/* Llib/srfi4.scm 465 */
							long BgL_arg2144z00_3748;

							BgL_arg2144z00_3748 = BGL_HVECTOR_LENGTH(BgL_vz00_3746);
							{	/* Llib/srfi4.scm 465 */
								int BgL_auxz00_5010;

								int BgL_auxz00_5008;

								BgL_auxz00_5010 = (int) (BgL_arg2144z00_3748);
								BgL_auxz00_5008 = (int) (BgL_kz00_3747);
								BgL_testz00_5006 =
									BOUND_CHECK(BgL_auxz00_5008, BgL_auxz00_5010);
						}}
						if (BgL_testz00_5006)
							{	/* Llib/srfi4.scm 465 */
								BgL_auxz00_4991 = BGL_S32VREF(BgL_vz00_3746, BgL_kz00_3747);
							}
						else
							{	/* Llib/srfi4.scm 465 */
								obj_t BgL_arg2134z00_3749;

								obj_t BgL_arg2135z00_3750;

								BgL_arg2134z00_3749 = BGl_symbol2924z00zz__srfi4z00;
								{	/* Llib/srfi4.scm 465 */
									obj_t BgL_arg2137z00_3751;

									{	/* Llib/srfi4.scm 465 */
										long BgL_arg2139z00_3752;

										{	/* Llib/srfi4.scm 465 */
											long BgL_arg2140z00_3753;

											BgL_arg2140z00_3753 = BGL_HVECTOR_LENGTH(BgL_vz00_3746);
											BgL_arg2139z00_3752 = (BgL_arg2140z00_3753 - ((long) 1));
										}
										{	/* Llib/srfi4.scm 465 */

											BgL_arg2137z00_3751 =
												BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
												(BgL_arg2139z00_3752, ((long) 10));
									}}
									BgL_arg2135z00_3750 =
										string_append_3(BGl_string2912z00zz__srfi4z00,
										BgL_arg2137z00_3751, BGl_string2913z00zz__srfi4z00);
								}
								BgL_auxz00_4991 =
									(long) CINT(BGl_errorz00zz__errorz00(BgL_arg2134z00_3749,
										BgL_arg2135z00_3750, BINT(BgL_kz00_3747)));
				}}}
				return BINT(BgL_auxz00_4991);
			}
		}
	}



/* u32vector-ref */
	BGL_EXPORTED_DEF unsigned long BGl_u32vectorzd2refzd2zz__srfi4z00(obj_t
		BgL_vz00_83, long BgL_kz00_84)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 473 */
			{	/* Llib/srfi4.scm 474 */
				bool_t BgL_testz00_5022;

				{	/* Llib/srfi4.scm 474 */
					long BgL_arg2154z00_3754;

					BgL_arg2154z00_3754 = BGL_HVECTOR_LENGTH(BgL_vz00_83);
					{	/* Llib/srfi4.scm 474 */
						int BgL_auxz00_5026;

						int BgL_auxz00_5024;

						BgL_auxz00_5026 = (int) (BgL_arg2154z00_3754);
						BgL_auxz00_5024 = (int) (BgL_kz00_84);
						BgL_testz00_5022 = BOUND_CHECK(BgL_auxz00_5024, BgL_auxz00_5026);
				}}
				if (BgL_testz00_5022)
					{	/* Llib/srfi4.scm 474 */
						return BGL_U32VREF(BgL_vz00_83, BgL_kz00_84);
					}
				else
					{	/* Llib/srfi4.scm 474 */
						obj_t BgL_arg2146z00_3755;

						obj_t BgL_arg2147z00_3756;

						BgL_arg2146z00_3755 = BGl_symbol2927z00zz__srfi4z00;
						{	/* Llib/srfi4.scm 474 */
							obj_t BgL_arg2149z00_3757;

							{	/* Llib/srfi4.scm 474 */
								long BgL_arg2151z00_3758;

								{	/* Llib/srfi4.scm 474 */
									long BgL_arg2152z00_3759;

									BgL_arg2152z00_3759 = BGL_HVECTOR_LENGTH(BgL_vz00_83);
									BgL_arg2151z00_3758 = (BgL_arg2152z00_3759 - ((long) 1));
								}
								{	/* Llib/srfi4.scm 474 */

									BgL_arg2149z00_3757 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_arg2151z00_3758, ((long) 10));
							}}
							BgL_arg2147z00_3756 =
								string_append_3(BGl_string2912z00zz__srfi4z00,
								BgL_arg2149z00_3757, BGl_string2913z00zz__srfi4z00);
						}
						return
							(unsigned long) CINT(BGl_errorz00zz__errorz00(BgL_arg2146z00_3755,
								BgL_arg2147z00_3756, BINT(BgL_kz00_84)));
		}}}
	}



/* _u32vector-ref */
	obj_t BGl__u32vectorzd2refzd2zz__srfi4z00(obj_t BgL_envz00_3338,
		obj_t BgL_vz00_3339, obj_t BgL_kz00_3340)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 473 */
			{	/* Llib/srfi4.scm 474 */
				unsigned long BgL_auxz00_5037;

				{	/* Llib/srfi4.scm 474 */
					obj_t BgL_vz00_3760;

					long BgL_kz00_3761;

					if (BGL_U32VECTORP(BgL_vz00_3339))
						{	/* Llib/srfi4.scm 474 */
							BgL_vz00_3760 = BgL_vz00_3339;
						}
					else
						{
							obj_t BgL_auxz00_5040;

							BgL_auxz00_5040 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 18832)), BGl_string2929z00zz__srfi4z00,
								BGl_string2888z00zz__srfi4z00, BgL_vz00_3339);
							FAILURE(BgL_auxz00_5040, BFALSE, BFALSE);
						}
					{	/* Llib/srfi4.scm 474 */
						obj_t BgL_auxz00_5044;

						if (INTEGERP(BgL_kz00_3340))
							{	/* Llib/srfi4.scm 474 */
								BgL_auxz00_5044 = BgL_kz00_3340;
							}
						else
							{
								obj_t BgL_auxz00_5047;

								BgL_auxz00_5047 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
									BINT(((long) 18832)), BGl_string2929z00zz__srfi4z00,
									BGl_string2898z00zz__srfi4z00, BgL_kz00_3340);
								FAILURE(BgL_auxz00_5047, BFALSE, BFALSE);
							}
						BgL_kz00_3761 = (long) CINT(BgL_auxz00_5044);
					}
					{	/* Llib/srfi4.scm 474 */
						bool_t BgL_testz00_5052;

						{	/* Llib/srfi4.scm 474 */
							long BgL_arg2154z00_3762;

							BgL_arg2154z00_3762 = BGL_HVECTOR_LENGTH(BgL_vz00_3760);
							{	/* Llib/srfi4.scm 474 */
								int BgL_auxz00_5056;

								int BgL_auxz00_5054;

								BgL_auxz00_5056 = (int) (BgL_arg2154z00_3762);
								BgL_auxz00_5054 = (int) (BgL_kz00_3761);
								BgL_testz00_5052 =
									BOUND_CHECK(BgL_auxz00_5054, BgL_auxz00_5056);
						}}
						if (BgL_testz00_5052)
							{	/* Llib/srfi4.scm 474 */
								BgL_auxz00_5037 = BGL_U32VREF(BgL_vz00_3760, BgL_kz00_3761);
							}
						else
							{	/* Llib/srfi4.scm 474 */
								obj_t BgL_arg2146z00_3763;

								obj_t BgL_arg2147z00_3764;

								BgL_arg2146z00_3763 = BGl_symbol2927z00zz__srfi4z00;
								{	/* Llib/srfi4.scm 474 */
									obj_t BgL_arg2149z00_3765;

									{	/* Llib/srfi4.scm 474 */
										long BgL_arg2151z00_3766;

										{	/* Llib/srfi4.scm 474 */
											long BgL_arg2152z00_3767;

											BgL_arg2152z00_3767 = BGL_HVECTOR_LENGTH(BgL_vz00_3760);
											BgL_arg2151z00_3766 = (BgL_arg2152z00_3767 - ((long) 1));
										}
										{	/* Llib/srfi4.scm 474 */

											BgL_arg2149z00_3765 =
												BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
												(BgL_arg2151z00_3766, ((long) 10));
									}}
									BgL_arg2147z00_3764 =
										string_append_3(BGl_string2912z00zz__srfi4z00,
										BgL_arg2149z00_3765, BGl_string2913z00zz__srfi4z00);
								}
								BgL_auxz00_5037 =
									(unsigned long)
									CINT(BGl_errorz00zz__errorz00(BgL_arg2146z00_3763,
										BgL_arg2147z00_3764, BINT(BgL_kz00_3761)));
				}}}
				return BINT(BgL_auxz00_5037);
			}
		}
	}



/* s64vector-ref */
	BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_s64vectorzd2refzd2zz__srfi4z00(obj_t
		BgL_vz00_85, long BgL_kz00_86)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 482 */
			{	/* Llib/srfi4.scm 483 */
				bool_t BgL_testz00_5068;

				{	/* Llib/srfi4.scm 483 */
					long BgL_arg2164z00_3768;

					BgL_arg2164z00_3768 = BGL_HVECTOR_LENGTH(BgL_vz00_85);
					{	/* Llib/srfi4.scm 483 */
						int BgL_auxz00_5072;

						int BgL_auxz00_5070;

						BgL_auxz00_5072 = (int) (BgL_arg2164z00_3768);
						BgL_auxz00_5070 = (int) (BgL_kz00_86);
						BgL_testz00_5068 = BOUND_CHECK(BgL_auxz00_5070, BgL_auxz00_5072);
				}}
				if (BgL_testz00_5068)
					{	/* Llib/srfi4.scm 483 */
						return BGL_S64VREF(BgL_vz00_85, BgL_kz00_86);
					}
				else
					{	/* Llib/srfi4.scm 483 */
						obj_t BgL_arg2156z00_3769;

						obj_t BgL_arg2157z00_3770;

						BgL_arg2156z00_3769 = BGl_symbol2930z00zz__srfi4z00;
						{	/* Llib/srfi4.scm 483 */
							obj_t BgL_arg2159z00_3771;

							{	/* Llib/srfi4.scm 483 */
								long BgL_arg2161z00_3772;

								{	/* Llib/srfi4.scm 483 */
									long BgL_arg2162z00_3773;

									BgL_arg2162z00_3773 = BGL_HVECTOR_LENGTH(BgL_vz00_85);
									BgL_arg2161z00_3772 = (BgL_arg2162z00_3773 - ((long) 1));
								}
								{	/* Llib/srfi4.scm 483 */

									BgL_arg2159z00_3771 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_arg2161z00_3772, ((long) 10));
							}}
							BgL_arg2157z00_3770 =
								string_append_3(BGl_string2912z00zz__srfi4z00,
								BgL_arg2159z00_3771, BGl_string2913z00zz__srfi4z00);
						}
						return
							BLLONG_TO_LLONG(BGl_errorz00zz__errorz00(BgL_arg2156z00_3769,
								BgL_arg2157z00_3770, BINT(BgL_kz00_86)));
					}
			}
		}
	}



/* _s64vector-ref */
	obj_t BGl__s64vectorzd2refzd2zz__srfi4z00(obj_t BgL_envz00_3345,
		obj_t BgL_vz00_3346, obj_t BgL_kz00_3347)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 482 */
			{	/* Llib/srfi4.scm 483 */
				BGL_LONGLONG_T BgL_auxz00_5083;

				{	/* Llib/srfi4.scm 483 */
					obj_t BgL_vz00_3774;

					long BgL_kz00_3775;

					if (BGL_S64VECTORP(BgL_vz00_3346))
						{	/* Llib/srfi4.scm 483 */
							BgL_vz00_3774 = BgL_vz00_3346;
						}
					else
						{
							obj_t BgL_auxz00_5086;

							BgL_auxz00_5086 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 19106)), BGl_string2932z00zz__srfi4z00,
								BGl_string2890z00zz__srfi4z00, BgL_vz00_3346);
							FAILURE(BgL_auxz00_5086, BFALSE, BFALSE);
						}
					{	/* Llib/srfi4.scm 483 */
						obj_t BgL_auxz00_5090;

						if (INTEGERP(BgL_kz00_3347))
							{	/* Llib/srfi4.scm 483 */
								BgL_auxz00_5090 = BgL_kz00_3347;
							}
						else
							{
								obj_t BgL_auxz00_5093;

								BgL_auxz00_5093 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
									BINT(((long) 19106)), BGl_string2932z00zz__srfi4z00,
									BGl_string2898z00zz__srfi4z00, BgL_kz00_3347);
								FAILURE(BgL_auxz00_5093, BFALSE, BFALSE);
							}
						BgL_kz00_3775 = (long) CINT(BgL_auxz00_5090);
					}
					{	/* Llib/srfi4.scm 483 */
						bool_t BgL_testz00_5098;

						{	/* Llib/srfi4.scm 483 */
							long BgL_arg2164z00_3776;

							BgL_arg2164z00_3776 = BGL_HVECTOR_LENGTH(BgL_vz00_3774);
							{	/* Llib/srfi4.scm 483 */
								int BgL_auxz00_5102;

								int BgL_auxz00_5100;

								BgL_auxz00_5102 = (int) (BgL_arg2164z00_3776);
								BgL_auxz00_5100 = (int) (BgL_kz00_3775);
								BgL_testz00_5098 =
									BOUND_CHECK(BgL_auxz00_5100, BgL_auxz00_5102);
						}}
						if (BgL_testz00_5098)
							{	/* Llib/srfi4.scm 483 */
								BgL_auxz00_5083 = BGL_S64VREF(BgL_vz00_3774, BgL_kz00_3775);
							}
						else
							{	/* Llib/srfi4.scm 483 */
								obj_t BgL_arg2156z00_3777;

								obj_t BgL_arg2157z00_3778;

								BgL_arg2156z00_3777 = BGl_symbol2930z00zz__srfi4z00;
								{	/* Llib/srfi4.scm 483 */
									obj_t BgL_arg2159z00_3779;

									{	/* Llib/srfi4.scm 483 */
										long BgL_arg2161z00_3780;

										{	/* Llib/srfi4.scm 483 */
											long BgL_arg2162z00_3781;

											BgL_arg2162z00_3781 = BGL_HVECTOR_LENGTH(BgL_vz00_3774);
											BgL_arg2161z00_3780 = (BgL_arg2162z00_3781 - ((long) 1));
										}
										{	/* Llib/srfi4.scm 483 */

											BgL_arg2159z00_3779 =
												BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
												(BgL_arg2161z00_3780, ((long) 10));
									}}
									BgL_arg2157z00_3778 =
										string_append_3(BGl_string2912z00zz__srfi4z00,
										BgL_arg2159z00_3779, BGl_string2913z00zz__srfi4z00);
								}
								BgL_auxz00_5083 =
									BLLONG_TO_LLONG(BGl_errorz00zz__errorz00(BgL_arg2156z00_3777,
										BgL_arg2157z00_3778, BINT(BgL_kz00_3775)));
				}}}
				return make_bllong(BgL_auxz00_5083);
			}
		}
	}



/* u64vector-ref */
	BGL_EXPORTED_DEF unsigned BGL_LONGLONG_T
		BGl_u64vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_87, long BgL_kz00_88)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 491 */
			{	/* Llib/srfi4.scm 492 */
				bool_t BgL_testz00_5114;

				{	/* Llib/srfi4.scm 492 */
					long BgL_arg2174z00_3782;

					BgL_arg2174z00_3782 = BGL_HVECTOR_LENGTH(BgL_vz00_87);
					{	/* Llib/srfi4.scm 492 */
						int BgL_auxz00_5118;

						int BgL_auxz00_5116;

						BgL_auxz00_5118 = (int) (BgL_arg2174z00_3782);
						BgL_auxz00_5116 = (int) (BgL_kz00_88);
						BgL_testz00_5114 = BOUND_CHECK(BgL_auxz00_5116, BgL_auxz00_5118);
				}}
				if (BgL_testz00_5114)
					{	/* Llib/srfi4.scm 492 */
						return BGL_U64VREF(BgL_vz00_87, BgL_kz00_88);
					}
				else
					{	/* Llib/srfi4.scm 492 */
						obj_t BgL_arg2166z00_3783;

						obj_t BgL_arg2167z00_3784;

						BgL_arg2166z00_3783 = BGl_symbol2933z00zz__srfi4z00;
						{	/* Llib/srfi4.scm 492 */
							obj_t BgL_arg2169z00_3785;

							{	/* Llib/srfi4.scm 492 */
								long BgL_arg2171z00_3786;

								{	/* Llib/srfi4.scm 492 */
									long BgL_arg2172z00_3787;

									BgL_arg2172z00_3787 = BGL_HVECTOR_LENGTH(BgL_vz00_87);
									BgL_arg2171z00_3786 = (BgL_arg2172z00_3787 - ((long) 1));
								}
								{	/* Llib/srfi4.scm 492 */

									BgL_arg2169z00_3785 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_arg2171z00_3786, ((long) 10));
							}}
							BgL_arg2167z00_3784 =
								string_append_3(BGl_string2912z00zz__srfi4z00,
								BgL_arg2169z00_3785, BGl_string2913z00zz__srfi4z00);
						}
						return
							BLLONG_TO_LLONG(BGl_errorz00zz__errorz00(BgL_arg2166z00_3783,
								BgL_arg2167z00_3784, BINT(BgL_kz00_88)));
					}
			}
		}
	}



/* _u64vector-ref */
	obj_t BGl__u64vectorzd2refzd2zz__srfi4z00(obj_t BgL_envz00_3352,
		obj_t BgL_vz00_3353, obj_t BgL_kz00_3354)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 491 */
			{	/* Llib/srfi4.scm 492 */
				unsigned BGL_LONGLONG_T BgL_auxz00_5129;

				{	/* Llib/srfi4.scm 492 */
					obj_t BgL_vz00_3788;

					long BgL_kz00_3789;

					if (BGL_U64VECTORP(BgL_vz00_3353))
						{	/* Llib/srfi4.scm 492 */
							BgL_vz00_3788 = BgL_vz00_3353;
						}
					else
						{
							obj_t BgL_auxz00_5132;

							BgL_auxz00_5132 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 19380)), BGl_string2935z00zz__srfi4z00,
								BGl_string2892z00zz__srfi4z00, BgL_vz00_3353);
							FAILURE(BgL_auxz00_5132, BFALSE, BFALSE);
						}
					{	/* Llib/srfi4.scm 492 */
						obj_t BgL_auxz00_5136;

						if (INTEGERP(BgL_kz00_3354))
							{	/* Llib/srfi4.scm 492 */
								BgL_auxz00_5136 = BgL_kz00_3354;
							}
						else
							{
								obj_t BgL_auxz00_5139;

								BgL_auxz00_5139 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
									BINT(((long) 19380)), BGl_string2935z00zz__srfi4z00,
									BGl_string2898z00zz__srfi4z00, BgL_kz00_3354);
								FAILURE(BgL_auxz00_5139, BFALSE, BFALSE);
							}
						BgL_kz00_3789 = (long) CINT(BgL_auxz00_5136);
					}
					{	/* Llib/srfi4.scm 492 */
						bool_t BgL_testz00_5144;

						{	/* Llib/srfi4.scm 492 */
							long BgL_arg2174z00_3790;

							BgL_arg2174z00_3790 = BGL_HVECTOR_LENGTH(BgL_vz00_3788);
							{	/* Llib/srfi4.scm 492 */
								int BgL_auxz00_5148;

								int BgL_auxz00_5146;

								BgL_auxz00_5148 = (int) (BgL_arg2174z00_3790);
								BgL_auxz00_5146 = (int) (BgL_kz00_3789);
								BgL_testz00_5144 =
									BOUND_CHECK(BgL_auxz00_5146, BgL_auxz00_5148);
						}}
						if (BgL_testz00_5144)
							{	/* Llib/srfi4.scm 492 */
								BgL_auxz00_5129 = BGL_U64VREF(BgL_vz00_3788, BgL_kz00_3789);
							}
						else
							{	/* Llib/srfi4.scm 492 */
								obj_t BgL_arg2166z00_3791;

								obj_t BgL_arg2167z00_3792;

								BgL_arg2166z00_3791 = BGl_symbol2933z00zz__srfi4z00;
								{	/* Llib/srfi4.scm 492 */
									obj_t BgL_arg2169z00_3793;

									{	/* Llib/srfi4.scm 492 */
										long BgL_arg2171z00_3794;

										{	/* Llib/srfi4.scm 492 */
											long BgL_arg2172z00_3795;

											BgL_arg2172z00_3795 = BGL_HVECTOR_LENGTH(BgL_vz00_3788);
											BgL_arg2171z00_3794 = (BgL_arg2172z00_3795 - ((long) 1));
										}
										{	/* Llib/srfi4.scm 492 */

											BgL_arg2169z00_3793 =
												BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
												(BgL_arg2171z00_3794, ((long) 10));
									}}
									BgL_arg2167z00_3792 =
										string_append_3(BGl_string2912z00zz__srfi4z00,
										BgL_arg2169z00_3793, BGl_string2913z00zz__srfi4z00);
								}
								BgL_auxz00_5129 =
									BLLONG_TO_LLONG(BGl_errorz00zz__errorz00(BgL_arg2166z00_3791,
										BgL_arg2167z00_3792, BINT(BgL_kz00_3789)));
				}}}
				return make_bllong(BgL_auxz00_5129);
			}
		}
	}



/* f32vector-ref */
	BGL_EXPORTED_DEF float BGl_f32vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_89,
		long BgL_kz00_90)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 500 */
			{	/* Llib/srfi4.scm 501 */
				bool_t BgL_testz00_5160;

				{	/* Llib/srfi4.scm 501 */
					long BgL_arg2184z00_3796;

					BgL_arg2184z00_3796 = BGL_HVECTOR_LENGTH(BgL_vz00_89);
					{	/* Llib/srfi4.scm 501 */
						int BgL_auxz00_5164;

						int BgL_auxz00_5162;

						BgL_auxz00_5164 = (int) (BgL_arg2184z00_3796);
						BgL_auxz00_5162 = (int) (BgL_kz00_90);
						BgL_testz00_5160 = BOUND_CHECK(BgL_auxz00_5162, BgL_auxz00_5164);
				}}
				if (BgL_testz00_5160)
					{	/* Llib/srfi4.scm 501 */
						return BGL_F32VREF(BgL_vz00_89, BgL_kz00_90);
					}
				else
					{	/* Llib/srfi4.scm 501 */
						obj_t BgL_arg2176z00_3797;

						obj_t BgL_arg2177z00_3798;

						BgL_arg2176z00_3797 = BGl_symbol2936z00zz__srfi4z00;
						{	/* Llib/srfi4.scm 501 */
							obj_t BgL_arg2179z00_3799;

							{	/* Llib/srfi4.scm 501 */
								long BgL_arg2181z00_3800;

								{	/* Llib/srfi4.scm 501 */
									long BgL_arg2182z00_3801;

									BgL_arg2182z00_3801 = BGL_HVECTOR_LENGTH(BgL_vz00_89);
									BgL_arg2181z00_3800 = (BgL_arg2182z00_3801 - ((long) 1));
								}
								{	/* Llib/srfi4.scm 501 */

									BgL_arg2179z00_3799 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_arg2181z00_3800, ((long) 10));
							}}
							BgL_arg2177z00_3798 =
								string_append_3(BGl_string2912z00zz__srfi4z00,
								BgL_arg2179z00_3799, BGl_string2913z00zz__srfi4z00);
						}
						return
							REAL_TO_FLOAT(BGl_errorz00zz__errorz00(BgL_arg2176z00_3797,
								BgL_arg2177z00_3798, BINT(BgL_kz00_90)));
					}
			}
		}
	}



/* _f32vector-ref */
	obj_t BGl__f32vectorzd2refzd2zz__srfi4z00(obj_t BgL_envz00_3359,
		obj_t BgL_vz00_3360, obj_t BgL_kz00_3361)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 500 */
			{	/* Llib/srfi4.scm 501 */
				float BgL_auxz00_5175;

				{	/* Llib/srfi4.scm 501 */
					obj_t BgL_vz00_3802;

					long BgL_kz00_3803;

					if (BGL_F32VECTORP(BgL_vz00_3360))
						{	/* Llib/srfi4.scm 501 */
							BgL_vz00_3802 = BgL_vz00_3360;
						}
					else
						{
							obj_t BgL_auxz00_5178;

							BgL_auxz00_5178 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 19862)), BGl_string2938z00zz__srfi4z00,
								BGl_string2894z00zz__srfi4z00, BgL_vz00_3360);
							FAILURE(BgL_auxz00_5178, BFALSE, BFALSE);
						}
					{	/* Llib/srfi4.scm 501 */
						obj_t BgL_auxz00_5182;

						if (INTEGERP(BgL_kz00_3361))
							{	/* Llib/srfi4.scm 501 */
								BgL_auxz00_5182 = BgL_kz00_3361;
							}
						else
							{
								obj_t BgL_auxz00_5185;

								BgL_auxz00_5185 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
									BINT(((long) 19862)), BGl_string2938z00zz__srfi4z00,
									BGl_string2898z00zz__srfi4z00, BgL_kz00_3361);
								FAILURE(BgL_auxz00_5185, BFALSE, BFALSE);
							}
						BgL_kz00_3803 = (long) CINT(BgL_auxz00_5182);
					}
					{	/* Llib/srfi4.scm 501 */
						bool_t BgL_testz00_5190;

						{	/* Llib/srfi4.scm 501 */
							long BgL_arg2184z00_3804;

							BgL_arg2184z00_3804 = BGL_HVECTOR_LENGTH(BgL_vz00_3802);
							{	/* Llib/srfi4.scm 501 */
								int BgL_auxz00_5194;

								int BgL_auxz00_5192;

								BgL_auxz00_5194 = (int) (BgL_arg2184z00_3804);
								BgL_auxz00_5192 = (int) (BgL_kz00_3803);
								BgL_testz00_5190 =
									BOUND_CHECK(BgL_auxz00_5192, BgL_auxz00_5194);
						}}
						if (BgL_testz00_5190)
							{	/* Llib/srfi4.scm 501 */
								BgL_auxz00_5175 = BGL_F32VREF(BgL_vz00_3802, BgL_kz00_3803);
							}
						else
							{	/* Llib/srfi4.scm 501 */
								obj_t BgL_arg2176z00_3805;

								obj_t BgL_arg2177z00_3806;

								BgL_arg2176z00_3805 = BGl_symbol2936z00zz__srfi4z00;
								{	/* Llib/srfi4.scm 501 */
									obj_t BgL_arg2179z00_3807;

									{	/* Llib/srfi4.scm 501 */
										long BgL_arg2181z00_3808;

										{	/* Llib/srfi4.scm 501 */
											long BgL_arg2182z00_3809;

											BgL_arg2182z00_3809 = BGL_HVECTOR_LENGTH(BgL_vz00_3802);
											BgL_arg2181z00_3808 = (BgL_arg2182z00_3809 - ((long) 1));
										}
										{	/* Llib/srfi4.scm 501 */

											BgL_arg2179z00_3807 =
												BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
												(BgL_arg2181z00_3808, ((long) 10));
									}}
									BgL_arg2177z00_3806 =
										string_append_3(BGl_string2912z00zz__srfi4z00,
										BgL_arg2179z00_3807, BGl_string2913z00zz__srfi4z00);
								}
								BgL_auxz00_5175 =
									REAL_TO_FLOAT(BGl_errorz00zz__errorz00(BgL_arg2176z00_3805,
										BgL_arg2177z00_3806, BINT(BgL_kz00_3803)));
				}}}
				return FLOAT_TO_REAL(BgL_auxz00_5175);
			}
		}
	}



/* f64vector-ref */
	BGL_EXPORTED_DEF double BGl_f64vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_91,
		long BgL_kz00_92)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 509 */
			{	/* Llib/srfi4.scm 510 */
				bool_t BgL_testz00_5206;

				{	/* Llib/srfi4.scm 510 */
					long BgL_arg2194z00_3810;

					BgL_arg2194z00_3810 = BGL_HVECTOR_LENGTH(BgL_vz00_91);
					{	/* Llib/srfi4.scm 510 */
						int BgL_auxz00_5210;

						int BgL_auxz00_5208;

						BgL_auxz00_5210 = (int) (BgL_arg2194z00_3810);
						BgL_auxz00_5208 = (int) (BgL_kz00_92);
						BgL_testz00_5206 = BOUND_CHECK(BgL_auxz00_5208, BgL_auxz00_5210);
				}}
				if (BgL_testz00_5206)
					{	/* Llib/srfi4.scm 510 */
						return BGL_F64VREF(BgL_vz00_91, BgL_kz00_92);
					}
				else
					{	/* Llib/srfi4.scm 510 */
						obj_t BgL_arg2186z00_3811;

						obj_t BgL_arg2187z00_3812;

						BgL_arg2186z00_3811 = BGl_symbol2939z00zz__srfi4z00;
						{	/* Llib/srfi4.scm 510 */
							obj_t BgL_arg2189z00_3813;

							{	/* Llib/srfi4.scm 510 */
								long BgL_arg2191z00_3814;

								{	/* Llib/srfi4.scm 510 */
									long BgL_arg2192z00_3815;

									BgL_arg2192z00_3815 = BGL_HVECTOR_LENGTH(BgL_vz00_91);
									BgL_arg2191z00_3814 = (BgL_arg2192z00_3815 - ((long) 1));
								}
								{	/* Llib/srfi4.scm 510 */

									BgL_arg2189z00_3813 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_arg2191z00_3814, ((long) 10));
							}}
							BgL_arg2187z00_3812 =
								string_append_3(BGl_string2912z00zz__srfi4z00,
								BgL_arg2189z00_3813, BGl_string2913z00zz__srfi4z00);
						}
						return
							REAL_TO_DOUBLE(BGl_errorz00zz__errorz00(BgL_arg2186z00_3811,
								BgL_arg2187z00_3812, BINT(BgL_kz00_92)));
					}
			}
		}
	}



/* _f64vector-ref */
	obj_t BGl__f64vectorzd2refzd2zz__srfi4z00(obj_t BgL_envz00_3366,
		obj_t BgL_vz00_3367, obj_t BgL_kz00_3368)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 509 */
			{	/* Llib/srfi4.scm 510 */
				double BgL_auxz00_5221;

				{	/* Llib/srfi4.scm 510 */
					obj_t BgL_vz00_3816;

					long BgL_kz00_3817;

					if (BGL_F64VECTORP(BgL_vz00_3367))
						{	/* Llib/srfi4.scm 510 */
							BgL_vz00_3816 = BgL_vz00_3367;
						}
					else
						{
							obj_t BgL_auxz00_5224;

							BgL_auxz00_5224 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 20136)), BGl_string2941z00zz__srfi4z00,
								BGl_string2896z00zz__srfi4z00, BgL_vz00_3367);
							FAILURE(BgL_auxz00_5224, BFALSE, BFALSE);
						}
					{	/* Llib/srfi4.scm 510 */
						obj_t BgL_auxz00_5228;

						if (INTEGERP(BgL_kz00_3368))
							{	/* Llib/srfi4.scm 510 */
								BgL_auxz00_5228 = BgL_kz00_3368;
							}
						else
							{
								obj_t BgL_auxz00_5231;

								BgL_auxz00_5231 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
									BINT(((long) 20136)), BGl_string2941z00zz__srfi4z00,
									BGl_string2898z00zz__srfi4z00, BgL_kz00_3368);
								FAILURE(BgL_auxz00_5231, BFALSE, BFALSE);
							}
						BgL_kz00_3817 = (long) CINT(BgL_auxz00_5228);
					}
					{	/* Llib/srfi4.scm 510 */
						bool_t BgL_testz00_5236;

						{	/* Llib/srfi4.scm 510 */
							long BgL_arg2194z00_3818;

							BgL_arg2194z00_3818 = BGL_HVECTOR_LENGTH(BgL_vz00_3816);
							{	/* Llib/srfi4.scm 510 */
								int BgL_auxz00_5240;

								int BgL_auxz00_5238;

								BgL_auxz00_5240 = (int) (BgL_arg2194z00_3818);
								BgL_auxz00_5238 = (int) (BgL_kz00_3817);
								BgL_testz00_5236 =
									BOUND_CHECK(BgL_auxz00_5238, BgL_auxz00_5240);
						}}
						if (BgL_testz00_5236)
							{	/* Llib/srfi4.scm 510 */
								BgL_auxz00_5221 = BGL_F64VREF(BgL_vz00_3816, BgL_kz00_3817);
							}
						else
							{	/* Llib/srfi4.scm 510 */
								obj_t BgL_arg2186z00_3819;

								obj_t BgL_arg2187z00_3820;

								BgL_arg2186z00_3819 = BGl_symbol2939z00zz__srfi4z00;
								{	/* Llib/srfi4.scm 510 */
									obj_t BgL_arg2189z00_3821;

									{	/* Llib/srfi4.scm 510 */
										long BgL_arg2191z00_3822;

										{	/* Llib/srfi4.scm 510 */
											long BgL_arg2192z00_3823;

											BgL_arg2192z00_3823 = BGL_HVECTOR_LENGTH(BgL_vz00_3816);
											BgL_arg2191z00_3822 = (BgL_arg2192z00_3823 - ((long) 1));
										}
										{	/* Llib/srfi4.scm 510 */

											BgL_arg2189z00_3821 =
												BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
												(BgL_arg2191z00_3822, ((long) 10));
									}}
									BgL_arg2187z00_3820 =
										string_append_3(BGl_string2912z00zz__srfi4z00,
										BgL_arg2189z00_3821, BGl_string2913z00zz__srfi4z00);
								}
								BgL_auxz00_5221 =
									REAL_TO_DOUBLE(BGl_errorz00zz__errorz00(BgL_arg2186z00_3819,
										BgL_arg2187z00_3820, BINT(BgL_kz00_3817)));
				}}}
				return DOUBLE_TO_REAL(BgL_auxz00_5221);
			}
		}
	}



/* s8vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_s8vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_vz00_93,
		long BgL_kz00_94, char BgL_valz00_95)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 521 */
			{	/* Llib/srfi4.scm 522 */
				bool_t BgL_testz00_5252;

				{	/* Llib/srfi4.scm 522 */
					long BgL_arg2206z00_3824;

					BgL_arg2206z00_3824 = BGL_HVECTOR_LENGTH(BgL_vz00_93);
					{	/* Llib/srfi4.scm 522 */
						int BgL_auxz00_5256;

						int BgL_auxz00_5254;

						BgL_auxz00_5256 = (int) (BgL_arg2206z00_3824);
						BgL_auxz00_5254 = (int) (BgL_kz00_94);
						BgL_testz00_5252 = BOUND_CHECK(BgL_auxz00_5254, BgL_auxz00_5256);
				}}
				if (BgL_testz00_5252)
					{	/* Llib/srfi4.scm 522 */
						BGL_S8VSET(BgL_vz00_93, BgL_kz00_94, BgL_valz00_95);
						return BUNSPEC;
					}
				else
					{	/* Llib/srfi4.scm 522 */
						obj_t BgL_arg2196z00_3825;

						obj_t BgL_arg2197z00_3826;

						BgL_arg2196z00_3825 = BGl_symbol2942z00zz__srfi4z00;
						{	/* Llib/srfi4.scm 522 */
							obj_t BgL_arg2199z00_3827;

							{	/* Llib/srfi4.scm 522 */
								long BgL_arg2203z00_3828;

								{	/* Llib/srfi4.scm 522 */
									long BgL_arg2204z00_3829;

									BgL_arg2204z00_3829 = BGL_HVECTOR_LENGTH(BgL_vz00_93);
									BgL_arg2203z00_3828 = (BgL_arg2204z00_3829 - ((long) 1));
								}
								{	/* Llib/srfi4.scm 522 */

									BgL_arg2199z00_3827 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_arg2203z00_3828, ((long) 10));
							}}
							BgL_arg2197z00_3826 =
								string_append_3(BGl_string2912z00zz__srfi4z00,
								BgL_arg2199z00_3827, BGl_string2913z00zz__srfi4z00);
						}
						return
							BGl_errorz00zz__errorz00(BgL_arg2196z00_3825, BgL_arg2197z00_3826,
							BINT(BgL_kz00_94));
					}
			}
		}
	}



/* _s8vector-set! */
	obj_t BGl__s8vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_envz00_3306,
		obj_t BgL_vz00_3307, obj_t BgL_kz00_3308, obj_t BgL_valz00_3309)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 521 */
			{	/* Llib/srfi4.scm 522 */
				obj_t BgL_vz00_3830;

				long BgL_kz00_3831;

				char BgL_valz00_3832;

				if (BGL_S8VECTORP(BgL_vz00_3307))
					{	/* Llib/srfi4.scm 522 */
						BgL_vz00_3830 = BgL_vz00_3307;
					}
				else
					{
						obj_t BgL_auxz00_5268;

						BgL_auxz00_5268 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
							BINT(((long) 20636)), BGl_string2944z00zz__srfi4z00,
							BGl_string2878z00zz__srfi4z00, BgL_vz00_3307);
						FAILURE(BgL_auxz00_5268, BFALSE, BFALSE);
					}
				{	/* Llib/srfi4.scm 522 */
					obj_t BgL_auxz00_5272;

					if (INTEGERP(BgL_kz00_3308))
						{	/* Llib/srfi4.scm 522 */
							BgL_auxz00_5272 = BgL_kz00_3308;
						}
					else
						{
							obj_t BgL_auxz00_5275;

							BgL_auxz00_5275 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 20636)), BGl_string2944z00zz__srfi4z00,
								BGl_string2898z00zz__srfi4z00, BgL_kz00_3308);
							FAILURE(BgL_auxz00_5275, BFALSE, BFALSE);
						}
					BgL_kz00_3831 = (long) CINT(BgL_auxz00_5272);
				}
				{	/* Llib/srfi4.scm 522 */
					obj_t BgL_auxz00_5280;

					if (INTEGERP(BgL_valz00_3309))
						{	/* Llib/srfi4.scm 522 */
							BgL_auxz00_5280 = BgL_valz00_3309;
						}
					else
						{
							obj_t BgL_auxz00_5283;

							BgL_auxz00_5283 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 20636)), BGl_string2944z00zz__srfi4z00,
								BGl_string2945z00zz__srfi4z00, BgL_valz00_3309);
							FAILURE(BgL_auxz00_5283, BFALSE, BFALSE);
						}
					BgL_valz00_3832 = (signed char) CINT(BgL_auxz00_5280);
				}
				{	/* Llib/srfi4.scm 522 */
					bool_t BgL_testz00_5288;

					{	/* Llib/srfi4.scm 522 */
						long BgL_arg2206z00_3833;

						BgL_arg2206z00_3833 = BGL_HVECTOR_LENGTH(BgL_vz00_3830);
						{	/* Llib/srfi4.scm 522 */
							int BgL_auxz00_5292;

							int BgL_auxz00_5290;

							BgL_auxz00_5292 = (int) (BgL_arg2206z00_3833);
							BgL_auxz00_5290 = (int) (BgL_kz00_3831);
							BgL_testz00_5288 = BOUND_CHECK(BgL_auxz00_5290, BgL_auxz00_5292);
					}}
					if (BgL_testz00_5288)
						{	/* Llib/srfi4.scm 522 */
							BGL_S8VSET(BgL_vz00_3830, BgL_kz00_3831, BgL_valz00_3832);
							return BUNSPEC;
						}
					else
						{	/* Llib/srfi4.scm 522 */
							obj_t BgL_arg2196z00_3834;

							obj_t BgL_arg2197z00_3835;

							BgL_arg2196z00_3834 = BGl_symbol2942z00zz__srfi4z00;
							{	/* Llib/srfi4.scm 522 */
								obj_t BgL_arg2199z00_3836;

								{	/* Llib/srfi4.scm 522 */
									long BgL_arg2203z00_3837;

									{	/* Llib/srfi4.scm 522 */
										long BgL_arg2204z00_3838;

										BgL_arg2204z00_3838 = BGL_HVECTOR_LENGTH(BgL_vz00_3830);
										BgL_arg2203z00_3837 = (BgL_arg2204z00_3838 - ((long) 1));
									}
									{	/* Llib/srfi4.scm 522 */

										BgL_arg2199z00_3836 =
											BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
											(BgL_arg2203z00_3837, ((long) 10));
								}}
								BgL_arg2197z00_3835 =
									string_append_3(BGl_string2912z00zz__srfi4z00,
									BgL_arg2199z00_3836, BGl_string2913z00zz__srfi4z00);
							}
							return
								BGl_errorz00zz__errorz00(BgL_arg2196z00_3834,
								BgL_arg2197z00_3835, BINT(BgL_kz00_3831));
						}
				}
			}
		}
	}



/* u8vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_u8vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_vz00_96,
		long BgL_kz00_97, unsigned char BgL_valz00_98)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 529 */
			{	/* Llib/srfi4.scm 530 */
				bool_t BgL_testz00_5302;

				{	/* Llib/srfi4.scm 530 */
					long BgL_arg2217z00_3839;

					BgL_arg2217z00_3839 = BGL_HVECTOR_LENGTH(BgL_vz00_96);
					{	/* Llib/srfi4.scm 530 */
						int BgL_auxz00_5306;

						int BgL_auxz00_5304;

						BgL_auxz00_5306 = (int) (BgL_arg2217z00_3839);
						BgL_auxz00_5304 = (int) (BgL_kz00_97);
						BgL_testz00_5302 = BOUND_CHECK(BgL_auxz00_5304, BgL_auxz00_5306);
				}}
				if (BgL_testz00_5302)
					{	/* Llib/srfi4.scm 530 */
						BGL_U8VSET(BgL_vz00_96, BgL_kz00_97, BgL_valz00_98);
						return BUNSPEC;
					}
				else
					{	/* Llib/srfi4.scm 530 */
						obj_t BgL_arg2208z00_3840;

						obj_t BgL_arg2209z00_3841;

						BgL_arg2208z00_3840 = BGl_symbol2946z00zz__srfi4z00;
						{	/* Llib/srfi4.scm 530 */
							obj_t BgL_arg2211z00_3842;

							{	/* Llib/srfi4.scm 530 */
								long BgL_arg2213z00_3843;

								{	/* Llib/srfi4.scm 530 */
									long BgL_arg2214z00_3844;

									BgL_arg2214z00_3844 = BGL_HVECTOR_LENGTH(BgL_vz00_96);
									BgL_arg2213z00_3843 = (BgL_arg2214z00_3844 - ((long) 1));
								}
								{	/* Llib/srfi4.scm 530 */

									BgL_arg2211z00_3842 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_arg2213z00_3843, ((long) 10));
							}}
							BgL_arg2209z00_3841 =
								string_append_3(BGl_string2912z00zz__srfi4z00,
								BgL_arg2211z00_3842, BGl_string2913z00zz__srfi4z00);
						}
						return
							BGl_errorz00zz__errorz00(BgL_arg2208z00_3840, BgL_arg2209z00_3841,
							BINT(BgL_kz00_97));
					}
			}
		}
	}



/* _u8vector-set! */
	obj_t BGl__u8vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_envz00_3313,
		obj_t BgL_vz00_3314, obj_t BgL_kz00_3315, obj_t BgL_valz00_3316)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 529 */
			{	/* Llib/srfi4.scm 530 */
				obj_t BgL_vz00_3845;

				long BgL_kz00_3846;

				unsigned char BgL_valz00_3847;

				if (BGL_U8VECTORP(BgL_vz00_3314))
					{	/* Llib/srfi4.scm 530 */
						BgL_vz00_3845 = BgL_vz00_3314;
					}
				else
					{
						obj_t BgL_auxz00_5318;

						BgL_auxz00_5318 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
							BINT(((long) 20917)), BGl_string2948z00zz__srfi4z00,
							BGl_string2880z00zz__srfi4z00, BgL_vz00_3314);
						FAILURE(BgL_auxz00_5318, BFALSE, BFALSE);
					}
				{	/* Llib/srfi4.scm 530 */
					obj_t BgL_auxz00_5322;

					if (INTEGERP(BgL_kz00_3315))
						{	/* Llib/srfi4.scm 530 */
							BgL_auxz00_5322 = BgL_kz00_3315;
						}
					else
						{
							obj_t BgL_auxz00_5325;

							BgL_auxz00_5325 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 20917)), BGl_string2948z00zz__srfi4z00,
								BGl_string2898z00zz__srfi4z00, BgL_kz00_3315);
							FAILURE(BgL_auxz00_5325, BFALSE, BFALSE);
						}
					BgL_kz00_3846 = (long) CINT(BgL_auxz00_5322);
				}
				{	/* Llib/srfi4.scm 530 */
					obj_t BgL_auxz00_5330;

					if (INTEGERP(BgL_valz00_3316))
						{	/* Llib/srfi4.scm 530 */
							BgL_auxz00_5330 = BgL_valz00_3316;
						}
					else
						{
							obj_t BgL_auxz00_5333;

							BgL_auxz00_5333 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 20917)), BGl_string2948z00zz__srfi4z00,
								BGl_string2949z00zz__srfi4z00, BgL_valz00_3316);
							FAILURE(BgL_auxz00_5333, BFALSE, BFALSE);
						}
					BgL_valz00_3847 = (unsigned char) CINT(BgL_auxz00_5330);
				}
				{	/* Llib/srfi4.scm 530 */
					bool_t BgL_testz00_5338;

					{	/* Llib/srfi4.scm 530 */
						long BgL_arg2217z00_3848;

						BgL_arg2217z00_3848 = BGL_HVECTOR_LENGTH(BgL_vz00_3845);
						{	/* Llib/srfi4.scm 530 */
							int BgL_auxz00_5342;

							int BgL_auxz00_5340;

							BgL_auxz00_5342 = (int) (BgL_arg2217z00_3848);
							BgL_auxz00_5340 = (int) (BgL_kz00_3846);
							BgL_testz00_5338 = BOUND_CHECK(BgL_auxz00_5340, BgL_auxz00_5342);
					}}
					if (BgL_testz00_5338)
						{	/* Llib/srfi4.scm 530 */
							BGL_U8VSET(BgL_vz00_3845, BgL_kz00_3846, BgL_valz00_3847);
							return BUNSPEC;
						}
					else
						{	/* Llib/srfi4.scm 530 */
							obj_t BgL_arg2208z00_3849;

							obj_t BgL_arg2209z00_3850;

							BgL_arg2208z00_3849 = BGl_symbol2946z00zz__srfi4z00;
							{	/* Llib/srfi4.scm 530 */
								obj_t BgL_arg2211z00_3851;

								{	/* Llib/srfi4.scm 530 */
									long BgL_arg2213z00_3852;

									{	/* Llib/srfi4.scm 530 */
										long BgL_arg2214z00_3853;

										BgL_arg2214z00_3853 = BGL_HVECTOR_LENGTH(BgL_vz00_3845);
										BgL_arg2213z00_3852 = (BgL_arg2214z00_3853 - ((long) 1));
									}
									{	/* Llib/srfi4.scm 530 */

										BgL_arg2211z00_3851 =
											BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
											(BgL_arg2213z00_3852, ((long) 10));
								}}
								BgL_arg2209z00_3850 =
									string_append_3(BGl_string2912z00zz__srfi4z00,
									BgL_arg2211z00_3851, BGl_string2913z00zz__srfi4z00);
							}
							return
								BGl_errorz00zz__errorz00(BgL_arg2208z00_3849,
								BgL_arg2209z00_3850, BINT(BgL_kz00_3846));
						}
				}
			}
		}
	}



/* s16vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_s16vectorzd2setz12zc0zz__srfi4z00(obj_t
		BgL_vz00_99, long BgL_kz00_100, short BgL_valz00_101)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 537 */
			{	/* Llib/srfi4.scm 538 */
				bool_t BgL_testz00_5352;

				{	/* Llib/srfi4.scm 538 */
					long BgL_arg2236z00_3854;

					BgL_arg2236z00_3854 = BGL_HVECTOR_LENGTH(BgL_vz00_99);
					{	/* Llib/srfi4.scm 538 */
						int BgL_auxz00_5356;

						int BgL_auxz00_5354;

						BgL_auxz00_5356 = (int) (BgL_arg2236z00_3854);
						BgL_auxz00_5354 = (int) (BgL_kz00_100);
						BgL_testz00_5352 = BOUND_CHECK(BgL_auxz00_5354, BgL_auxz00_5356);
				}}
				if (BgL_testz00_5352)
					{	/* Llib/srfi4.scm 538 */
						BGL_S16VSET(BgL_vz00_99, BgL_kz00_100, BgL_valz00_101);
						return BUNSPEC;
					}
				else
					{	/* Llib/srfi4.scm 538 */
						obj_t BgL_arg2222z00_3855;

						obj_t BgL_arg2223z00_3856;

						BgL_arg2222z00_3855 = BGl_symbol2950z00zz__srfi4z00;
						{	/* Llib/srfi4.scm 538 */
							obj_t BgL_arg2226z00_3857;

							{	/* Llib/srfi4.scm 538 */
								long BgL_arg2233z00_3858;

								{	/* Llib/srfi4.scm 538 */
									long BgL_arg2234z00_3859;

									BgL_arg2234z00_3859 = BGL_HVECTOR_LENGTH(BgL_vz00_99);
									BgL_arg2233z00_3858 = (BgL_arg2234z00_3859 - ((long) 1));
								}
								{	/* Llib/srfi4.scm 538 */

									BgL_arg2226z00_3857 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_arg2233z00_3858, ((long) 10));
							}}
							BgL_arg2223z00_3856 =
								string_append_3(BGl_string2912z00zz__srfi4z00,
								BgL_arg2226z00_3857, BGl_string2913z00zz__srfi4z00);
						}
						return
							BGl_errorz00zz__errorz00(BgL_arg2222z00_3855, BgL_arg2223z00_3856,
							BINT(BgL_kz00_100));
					}
			}
		}
	}



/* _s16vector-set! */
	obj_t BGl__s16vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_envz00_3320,
		obj_t BgL_vz00_3321, obj_t BgL_kz00_3322, obj_t BgL_valz00_3323)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 537 */
			{	/* Llib/srfi4.scm 538 */
				obj_t BgL_vz00_3860;

				long BgL_kz00_3861;

				short BgL_valz00_3862;

				if (BGL_S16VECTORP(BgL_vz00_3321))
					{	/* Llib/srfi4.scm 538 */
						BgL_vz00_3860 = BgL_vz00_3321;
					}
				else
					{
						obj_t BgL_auxz00_5368;

						BgL_auxz00_5368 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
							BINT(((long) 21199)), BGl_string2952z00zz__srfi4z00,
							BGl_string2882z00zz__srfi4z00, BgL_vz00_3321);
						FAILURE(BgL_auxz00_5368, BFALSE, BFALSE);
					}
				{	/* Llib/srfi4.scm 538 */
					obj_t BgL_auxz00_5372;

					if (INTEGERP(BgL_kz00_3322))
						{	/* Llib/srfi4.scm 538 */
							BgL_auxz00_5372 = BgL_kz00_3322;
						}
					else
						{
							obj_t BgL_auxz00_5375;

							BgL_auxz00_5375 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 21199)), BGl_string2952z00zz__srfi4z00,
								BGl_string2898z00zz__srfi4z00, BgL_kz00_3322);
							FAILURE(BgL_auxz00_5375, BFALSE, BFALSE);
						}
					BgL_kz00_3861 = (long) CINT(BgL_auxz00_5372);
				}
				{	/* Llib/srfi4.scm 538 */
					obj_t BgL_auxz00_5380;

					if (INTEGERP(BgL_valz00_3323))
						{	/* Llib/srfi4.scm 538 */
							BgL_auxz00_5380 = BgL_valz00_3323;
						}
					else
						{
							obj_t BgL_auxz00_5383;

							BgL_auxz00_5383 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 21199)), BGl_string2952z00zz__srfi4z00,
								BGl_string2953z00zz__srfi4z00, BgL_valz00_3323);
							FAILURE(BgL_auxz00_5383, BFALSE, BFALSE);
						}
					BgL_valz00_3862 = (short) CINT(BgL_auxz00_5380);
				}
				{	/* Llib/srfi4.scm 538 */
					bool_t BgL_testz00_5388;

					{	/* Llib/srfi4.scm 538 */
						long BgL_arg2236z00_3863;

						BgL_arg2236z00_3863 = BGL_HVECTOR_LENGTH(BgL_vz00_3860);
						{	/* Llib/srfi4.scm 538 */
							int BgL_auxz00_5392;

							int BgL_auxz00_5390;

							BgL_auxz00_5392 = (int) (BgL_arg2236z00_3863);
							BgL_auxz00_5390 = (int) (BgL_kz00_3861);
							BgL_testz00_5388 = BOUND_CHECK(BgL_auxz00_5390, BgL_auxz00_5392);
					}}
					if (BgL_testz00_5388)
						{	/* Llib/srfi4.scm 538 */
							BGL_S16VSET(BgL_vz00_3860, BgL_kz00_3861, BgL_valz00_3862);
							return BUNSPEC;
						}
					else
						{	/* Llib/srfi4.scm 538 */
							obj_t BgL_arg2222z00_3864;

							obj_t BgL_arg2223z00_3865;

							BgL_arg2222z00_3864 = BGl_symbol2950z00zz__srfi4z00;
							{	/* Llib/srfi4.scm 538 */
								obj_t BgL_arg2226z00_3866;

								{	/* Llib/srfi4.scm 538 */
									long BgL_arg2233z00_3867;

									{	/* Llib/srfi4.scm 538 */
										long BgL_arg2234z00_3868;

										BgL_arg2234z00_3868 = BGL_HVECTOR_LENGTH(BgL_vz00_3860);
										BgL_arg2233z00_3867 = (BgL_arg2234z00_3868 - ((long) 1));
									}
									{	/* Llib/srfi4.scm 538 */

										BgL_arg2226z00_3866 =
											BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
											(BgL_arg2233z00_3867, ((long) 10));
								}}
								BgL_arg2223z00_3865 =
									string_append_3(BGl_string2912z00zz__srfi4z00,
									BgL_arg2226z00_3866, BGl_string2913z00zz__srfi4z00);
							}
							return
								BGl_errorz00zz__errorz00(BgL_arg2222z00_3864,
								BgL_arg2223z00_3865, BINT(BgL_kz00_3861));
						}
				}
			}
		}
	}



/* u16vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_u16vectorzd2setz12zc0zz__srfi4z00(obj_t
		BgL_vz00_102, long BgL_kz00_103, unsigned short BgL_valz00_104)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 545 */
			{	/* Llib/srfi4.scm 546 */
				bool_t BgL_testz00_5402;

				{	/* Llib/srfi4.scm 546 */
					long BgL_arg2247z00_3869;

					BgL_arg2247z00_3869 = BGL_HVECTOR_LENGTH(BgL_vz00_102);
					{	/* Llib/srfi4.scm 546 */
						int BgL_auxz00_5406;

						int BgL_auxz00_5404;

						BgL_auxz00_5406 = (int) (BgL_arg2247z00_3869);
						BgL_auxz00_5404 = (int) (BgL_kz00_103);
						BgL_testz00_5402 = BOUND_CHECK(BgL_auxz00_5404, BgL_auxz00_5406);
				}}
				if (BgL_testz00_5402)
					{	/* Llib/srfi4.scm 546 */
						BGL_U16VSET(BgL_vz00_102, BgL_kz00_103, BgL_valz00_104);
						return BUNSPEC;
					}
				else
					{	/* Llib/srfi4.scm 546 */
						obj_t BgL_arg2238z00_3870;

						obj_t BgL_arg2239z00_3871;

						BgL_arg2238z00_3870 = BGl_symbol2954z00zz__srfi4z00;
						{	/* Llib/srfi4.scm 546 */
							obj_t BgL_arg2242z00_3872;

							{	/* Llib/srfi4.scm 546 */
								long BgL_arg2244z00_3873;

								{	/* Llib/srfi4.scm 546 */
									long BgL_arg2245z00_3874;

									BgL_arg2245z00_3874 = BGL_HVECTOR_LENGTH(BgL_vz00_102);
									BgL_arg2244z00_3873 = (BgL_arg2245z00_3874 - ((long) 1));
								}
								{	/* Llib/srfi4.scm 546 */

									BgL_arg2242z00_3872 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_arg2244z00_3873, ((long) 10));
							}}
							BgL_arg2239z00_3871 =
								string_append_3(BGl_string2912z00zz__srfi4z00,
								BgL_arg2242z00_3872, BGl_string2913z00zz__srfi4z00);
						}
						return
							BGl_errorz00zz__errorz00(BgL_arg2238z00_3870, BgL_arg2239z00_3871,
							BINT(BgL_kz00_103));
					}
			}
		}
	}



/* _u16vector-set! */
	obj_t BGl__u16vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_envz00_3327,
		obj_t BgL_vz00_3328, obj_t BgL_kz00_3329, obj_t BgL_valz00_3330)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 545 */
			{	/* Llib/srfi4.scm 546 */
				obj_t BgL_vz00_3875;

				long BgL_kz00_3876;

				unsigned short BgL_valz00_3877;

				if (BGL_U16VECTORP(BgL_vz00_3328))
					{	/* Llib/srfi4.scm 546 */
						BgL_vz00_3875 = BgL_vz00_3328;
					}
				else
					{
						obj_t BgL_auxz00_5418;

						BgL_auxz00_5418 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
							BINT(((long) 21483)), BGl_string2956z00zz__srfi4z00,
							BGl_string2884z00zz__srfi4z00, BgL_vz00_3328);
						FAILURE(BgL_auxz00_5418, BFALSE, BFALSE);
					}
				{	/* Llib/srfi4.scm 546 */
					obj_t BgL_auxz00_5422;

					if (INTEGERP(BgL_kz00_3329))
						{	/* Llib/srfi4.scm 546 */
							BgL_auxz00_5422 = BgL_kz00_3329;
						}
					else
						{
							obj_t BgL_auxz00_5425;

							BgL_auxz00_5425 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 21483)), BGl_string2956z00zz__srfi4z00,
								BGl_string2898z00zz__srfi4z00, BgL_kz00_3329);
							FAILURE(BgL_auxz00_5425, BFALSE, BFALSE);
						}
					BgL_kz00_3876 = (long) CINT(BgL_auxz00_5422);
				}
				{	/* Llib/srfi4.scm 546 */
					obj_t BgL_auxz00_5430;

					if (INTEGERP(BgL_valz00_3330))
						{	/* Llib/srfi4.scm 546 */
							BgL_auxz00_5430 = BgL_valz00_3330;
						}
					else
						{
							obj_t BgL_auxz00_5433;

							BgL_auxz00_5433 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 21483)), BGl_string2956z00zz__srfi4z00,
								BGl_string2957z00zz__srfi4z00, BgL_valz00_3330);
							FAILURE(BgL_auxz00_5433, BFALSE, BFALSE);
						}
					BgL_valz00_3877 = (unsigned short) CINT(BgL_auxz00_5430);
				}
				{	/* Llib/srfi4.scm 546 */
					bool_t BgL_testz00_5438;

					{	/* Llib/srfi4.scm 546 */
						long BgL_arg2247z00_3878;

						BgL_arg2247z00_3878 = BGL_HVECTOR_LENGTH(BgL_vz00_3875);
						{	/* Llib/srfi4.scm 546 */
							int BgL_auxz00_5442;

							int BgL_auxz00_5440;

							BgL_auxz00_5442 = (int) (BgL_arg2247z00_3878);
							BgL_auxz00_5440 = (int) (BgL_kz00_3876);
							BgL_testz00_5438 = BOUND_CHECK(BgL_auxz00_5440, BgL_auxz00_5442);
					}}
					if (BgL_testz00_5438)
						{	/* Llib/srfi4.scm 546 */
							BGL_U16VSET(BgL_vz00_3875, BgL_kz00_3876, BgL_valz00_3877);
							return BUNSPEC;
						}
					else
						{	/* Llib/srfi4.scm 546 */
							obj_t BgL_arg2238z00_3879;

							obj_t BgL_arg2239z00_3880;

							BgL_arg2238z00_3879 = BGl_symbol2954z00zz__srfi4z00;
							{	/* Llib/srfi4.scm 546 */
								obj_t BgL_arg2242z00_3881;

								{	/* Llib/srfi4.scm 546 */
									long BgL_arg2244z00_3882;

									{	/* Llib/srfi4.scm 546 */
										long BgL_arg2245z00_3883;

										BgL_arg2245z00_3883 = BGL_HVECTOR_LENGTH(BgL_vz00_3875);
										BgL_arg2244z00_3882 = (BgL_arg2245z00_3883 - ((long) 1));
									}
									{	/* Llib/srfi4.scm 546 */

										BgL_arg2242z00_3881 =
											BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
											(BgL_arg2244z00_3882, ((long) 10));
								}}
								BgL_arg2239z00_3880 =
									string_append_3(BGl_string2912z00zz__srfi4z00,
									BgL_arg2242z00_3881, BGl_string2913z00zz__srfi4z00);
							}
							return
								BGl_errorz00zz__errorz00(BgL_arg2238z00_3879,
								BgL_arg2239z00_3880, BINT(BgL_kz00_3876));
						}
				}
			}
		}
	}



/* s32vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_s32vectorzd2setz12zc0zz__srfi4z00(obj_t
		BgL_vz00_105, long BgL_kz00_106, long BgL_valz00_107)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 553 */
			{	/* Llib/srfi4.scm 554 */
				bool_t BgL_testz00_5452;

				{	/* Llib/srfi4.scm 554 */
					long BgL_arg2259z00_3884;

					BgL_arg2259z00_3884 = BGL_HVECTOR_LENGTH(BgL_vz00_105);
					{	/* Llib/srfi4.scm 554 */
						int BgL_auxz00_5456;

						int BgL_auxz00_5454;

						BgL_auxz00_5456 = (int) (BgL_arg2259z00_3884);
						BgL_auxz00_5454 = (int) (BgL_kz00_106);
						BgL_testz00_5452 = BOUND_CHECK(BgL_auxz00_5454, BgL_auxz00_5456);
				}}
				if (BgL_testz00_5452)
					{	/* Llib/srfi4.scm 554 */
						BGL_S32VSET(BgL_vz00_105, BgL_kz00_106, BgL_valz00_107);
						return BUNSPEC;
					}
				else
					{	/* Llib/srfi4.scm 554 */
						obj_t BgL_arg2249z00_3885;

						obj_t BgL_arg2250z00_3886;

						BgL_arg2249z00_3885 = BGl_symbol2958z00zz__srfi4z00;
						{	/* Llib/srfi4.scm 554 */
							obj_t BgL_arg2252z00_3887;

							{	/* Llib/srfi4.scm 554 */
								long BgL_arg2255z00_3888;

								{	/* Llib/srfi4.scm 554 */
									long BgL_arg2256z00_3889;

									BgL_arg2256z00_3889 = BGL_HVECTOR_LENGTH(BgL_vz00_105);
									BgL_arg2255z00_3888 = (BgL_arg2256z00_3889 - ((long) 1));
								}
								{	/* Llib/srfi4.scm 554 */

									BgL_arg2252z00_3887 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_arg2255z00_3888, ((long) 10));
							}}
							BgL_arg2250z00_3886 =
								string_append_3(BGl_string2912z00zz__srfi4z00,
								BgL_arg2252z00_3887, BGl_string2913z00zz__srfi4z00);
						}
						return
							BGl_errorz00zz__errorz00(BgL_arg2249z00_3885, BgL_arg2250z00_3886,
							BINT(BgL_kz00_106));
					}
			}
		}
	}



/* _s32vector-set! */
	obj_t BGl__s32vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_envz00_3334,
		obj_t BgL_vz00_3335, obj_t BgL_kz00_3336, obj_t BgL_valz00_3337)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 553 */
			{	/* Llib/srfi4.scm 554 */
				obj_t BgL_vz00_3890;

				long BgL_kz00_3891;

				long BgL_valz00_3892;

				if (BGL_S32VECTORP(BgL_vz00_3335))
					{	/* Llib/srfi4.scm 554 */
						BgL_vz00_3890 = BgL_vz00_3335;
					}
				else
					{
						obj_t BgL_auxz00_5468;

						BgL_auxz00_5468 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
							BINT(((long) 21767)), BGl_string2960z00zz__srfi4z00,
							BGl_string2886z00zz__srfi4z00, BgL_vz00_3335);
						FAILURE(BgL_auxz00_5468, BFALSE, BFALSE);
					}
				{	/* Llib/srfi4.scm 554 */
					obj_t BgL_auxz00_5472;

					if (INTEGERP(BgL_kz00_3336))
						{	/* Llib/srfi4.scm 554 */
							BgL_auxz00_5472 = BgL_kz00_3336;
						}
					else
						{
							obj_t BgL_auxz00_5475;

							BgL_auxz00_5475 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 21767)), BGl_string2960z00zz__srfi4z00,
								BGl_string2898z00zz__srfi4z00, BgL_kz00_3336);
							FAILURE(BgL_auxz00_5475, BFALSE, BFALSE);
						}
					BgL_kz00_3891 = (long) CINT(BgL_auxz00_5472);
				}
				{	/* Llib/srfi4.scm 554 */
					obj_t BgL_auxz00_5480;

					if (INTEGERP(BgL_valz00_3337))
						{	/* Llib/srfi4.scm 554 */
							BgL_auxz00_5480 = BgL_valz00_3337;
						}
					else
						{
							obj_t BgL_auxz00_5483;

							BgL_auxz00_5483 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 21767)), BGl_string2960z00zz__srfi4z00,
								BGl_string2898z00zz__srfi4z00, BgL_valz00_3337);
							FAILURE(BgL_auxz00_5483, BFALSE, BFALSE);
						}
					BgL_valz00_3892 = (long) CINT(BgL_auxz00_5480);
				}
				{	/* Llib/srfi4.scm 554 */
					bool_t BgL_testz00_5488;

					{	/* Llib/srfi4.scm 554 */
						long BgL_arg2259z00_3893;

						BgL_arg2259z00_3893 = BGL_HVECTOR_LENGTH(BgL_vz00_3890);
						{	/* Llib/srfi4.scm 554 */
							int BgL_auxz00_5492;

							int BgL_auxz00_5490;

							BgL_auxz00_5492 = (int) (BgL_arg2259z00_3893);
							BgL_auxz00_5490 = (int) (BgL_kz00_3891);
							BgL_testz00_5488 = BOUND_CHECK(BgL_auxz00_5490, BgL_auxz00_5492);
					}}
					if (BgL_testz00_5488)
						{	/* Llib/srfi4.scm 554 */
							BGL_S32VSET(BgL_vz00_3890, BgL_kz00_3891, BgL_valz00_3892);
							return BUNSPEC;
						}
					else
						{	/* Llib/srfi4.scm 554 */
							obj_t BgL_arg2249z00_3894;

							obj_t BgL_arg2250z00_3895;

							BgL_arg2249z00_3894 = BGl_symbol2958z00zz__srfi4z00;
							{	/* Llib/srfi4.scm 554 */
								obj_t BgL_arg2252z00_3896;

								{	/* Llib/srfi4.scm 554 */
									long BgL_arg2255z00_3897;

									{	/* Llib/srfi4.scm 554 */
										long BgL_arg2256z00_3898;

										BgL_arg2256z00_3898 = BGL_HVECTOR_LENGTH(BgL_vz00_3890);
										BgL_arg2255z00_3897 = (BgL_arg2256z00_3898 - ((long) 1));
									}
									{	/* Llib/srfi4.scm 554 */

										BgL_arg2252z00_3896 =
											BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
											(BgL_arg2255z00_3897, ((long) 10));
								}}
								BgL_arg2250z00_3895 =
									string_append_3(BGl_string2912z00zz__srfi4z00,
									BgL_arg2252z00_3896, BGl_string2913z00zz__srfi4z00);
							}
							return
								BGl_errorz00zz__errorz00(BgL_arg2249z00_3894,
								BgL_arg2250z00_3895, BINT(BgL_kz00_3891));
						}
				}
			}
		}
	}



/* u32vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_u32vectorzd2setz12zc0zz__srfi4z00(obj_t
		BgL_vz00_108, long BgL_kz00_109, unsigned long BgL_valz00_110)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 561 */
			{	/* Llib/srfi4.scm 562 */
				bool_t BgL_testz00_5502;

				{	/* Llib/srfi4.scm 562 */
					long BgL_arg2270z00_3899;

					BgL_arg2270z00_3899 = BGL_HVECTOR_LENGTH(BgL_vz00_108);
					{	/* Llib/srfi4.scm 562 */
						int BgL_auxz00_5506;

						int BgL_auxz00_5504;

						BgL_auxz00_5506 = (int) (BgL_arg2270z00_3899);
						BgL_auxz00_5504 = (int) (BgL_kz00_109);
						BgL_testz00_5502 = BOUND_CHECK(BgL_auxz00_5504, BgL_auxz00_5506);
				}}
				if (BgL_testz00_5502)
					{	/* Llib/srfi4.scm 562 */
						BGL_U32VSET(BgL_vz00_108, BgL_kz00_109, BgL_valz00_110);
						return BUNSPEC;
					}
				else
					{	/* Llib/srfi4.scm 562 */
						obj_t BgL_arg2262z00_3900;

						obj_t BgL_arg2263z00_3901;

						BgL_arg2262z00_3900 = BGl_symbol2961z00zz__srfi4z00;
						{	/* Llib/srfi4.scm 562 */
							obj_t BgL_arg2265z00_3902;

							{	/* Llib/srfi4.scm 562 */
								long BgL_arg2267z00_3903;

								{	/* Llib/srfi4.scm 562 */
									long BgL_arg2268z00_3904;

									BgL_arg2268z00_3904 = BGL_HVECTOR_LENGTH(BgL_vz00_108);
									BgL_arg2267z00_3903 = (BgL_arg2268z00_3904 - ((long) 1));
								}
								{	/* Llib/srfi4.scm 562 */

									BgL_arg2265z00_3902 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_arg2267z00_3903, ((long) 10));
							}}
							BgL_arg2263z00_3901 =
								string_append_3(BGl_string2912z00zz__srfi4z00,
								BgL_arg2265z00_3902, BGl_string2913z00zz__srfi4z00);
						}
						return
							BGl_errorz00zz__errorz00(BgL_arg2262z00_3900, BgL_arg2263z00_3901,
							BINT(BgL_kz00_109));
					}
			}
		}
	}



/* _u32vector-set! */
	obj_t BGl__u32vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_envz00_3341,
		obj_t BgL_vz00_3342, obj_t BgL_kz00_3343, obj_t BgL_valz00_3344)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 561 */
			{	/* Llib/srfi4.scm 562 */
				obj_t BgL_vz00_3905;

				long BgL_kz00_3906;

				unsigned long BgL_valz00_3907;

				if (BGL_U32VECTORP(BgL_vz00_3342))
					{	/* Llib/srfi4.scm 562 */
						BgL_vz00_3905 = BgL_vz00_3342;
					}
				else
					{
						obj_t BgL_auxz00_5518;

						BgL_auxz00_5518 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
							BINT(((long) 22051)), BGl_string2963z00zz__srfi4z00,
							BGl_string2888z00zz__srfi4z00, BgL_vz00_3342);
						FAILURE(BgL_auxz00_5518, BFALSE, BFALSE);
					}
				{	/* Llib/srfi4.scm 562 */
					obj_t BgL_auxz00_5522;

					if (INTEGERP(BgL_kz00_3343))
						{	/* Llib/srfi4.scm 562 */
							BgL_auxz00_5522 = BgL_kz00_3343;
						}
					else
						{
							obj_t BgL_auxz00_5525;

							BgL_auxz00_5525 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 22051)), BGl_string2963z00zz__srfi4z00,
								BGl_string2898z00zz__srfi4z00, BgL_kz00_3343);
							FAILURE(BgL_auxz00_5525, BFALSE, BFALSE);
						}
					BgL_kz00_3906 = (long) CINT(BgL_auxz00_5522);
				}
				{	/* Llib/srfi4.scm 562 */
					obj_t BgL_auxz00_5530;

					if (INTEGERP(BgL_valz00_3344))
						{	/* Llib/srfi4.scm 562 */
							BgL_auxz00_5530 = BgL_valz00_3344;
						}
					else
						{
							obj_t BgL_auxz00_5533;

							BgL_auxz00_5533 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 22051)), BGl_string2963z00zz__srfi4z00,
								BGl_string2964z00zz__srfi4z00, BgL_valz00_3344);
							FAILURE(BgL_auxz00_5533, BFALSE, BFALSE);
						}
					BgL_valz00_3907 = (unsigned long) CINT(BgL_auxz00_5530);
				}
				{	/* Llib/srfi4.scm 562 */
					bool_t BgL_testz00_5538;

					{	/* Llib/srfi4.scm 562 */
						long BgL_arg2270z00_3908;

						BgL_arg2270z00_3908 = BGL_HVECTOR_LENGTH(BgL_vz00_3905);
						{	/* Llib/srfi4.scm 562 */
							int BgL_auxz00_5542;

							int BgL_auxz00_5540;

							BgL_auxz00_5542 = (int) (BgL_arg2270z00_3908);
							BgL_auxz00_5540 = (int) (BgL_kz00_3906);
							BgL_testz00_5538 = BOUND_CHECK(BgL_auxz00_5540, BgL_auxz00_5542);
					}}
					if (BgL_testz00_5538)
						{	/* Llib/srfi4.scm 562 */
							BGL_U32VSET(BgL_vz00_3905, BgL_kz00_3906, BgL_valz00_3907);
							return BUNSPEC;
						}
					else
						{	/* Llib/srfi4.scm 562 */
							obj_t BgL_arg2262z00_3909;

							obj_t BgL_arg2263z00_3910;

							BgL_arg2262z00_3909 = BGl_symbol2961z00zz__srfi4z00;
							{	/* Llib/srfi4.scm 562 */
								obj_t BgL_arg2265z00_3911;

								{	/* Llib/srfi4.scm 562 */
									long BgL_arg2267z00_3912;

									{	/* Llib/srfi4.scm 562 */
										long BgL_arg2268z00_3913;

										BgL_arg2268z00_3913 = BGL_HVECTOR_LENGTH(BgL_vz00_3905);
										BgL_arg2267z00_3912 = (BgL_arg2268z00_3913 - ((long) 1));
									}
									{	/* Llib/srfi4.scm 562 */

										BgL_arg2265z00_3911 =
											BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
											(BgL_arg2267z00_3912, ((long) 10));
								}}
								BgL_arg2263z00_3910 =
									string_append_3(BGl_string2912z00zz__srfi4z00,
									BgL_arg2265z00_3911, BGl_string2913z00zz__srfi4z00);
							}
							return
								BGl_errorz00zz__errorz00(BgL_arg2262z00_3909,
								BgL_arg2263z00_3910, BINT(BgL_kz00_3906));
						}
				}
			}
		}
	}



/* s64vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_s64vectorzd2setz12zc0zz__srfi4z00(obj_t
		BgL_vz00_111, long BgL_kz00_112, BGL_LONGLONG_T BgL_valz00_113)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 569 */
			{	/* Llib/srfi4.scm 570 */
				bool_t BgL_testz00_5552;

				{	/* Llib/srfi4.scm 570 */
					long BgL_arg2282z00_3914;

					BgL_arg2282z00_3914 = BGL_HVECTOR_LENGTH(BgL_vz00_111);
					{	/* Llib/srfi4.scm 570 */
						int BgL_auxz00_5556;

						int BgL_auxz00_5554;

						BgL_auxz00_5556 = (int) (BgL_arg2282z00_3914);
						BgL_auxz00_5554 = (int) (BgL_kz00_112);
						BgL_testz00_5552 = BOUND_CHECK(BgL_auxz00_5554, BgL_auxz00_5556);
				}}
				if (BgL_testz00_5552)
					{	/* Llib/srfi4.scm 570 */
						BGL_S64VSET(BgL_vz00_111, BgL_kz00_112, BgL_valz00_113);
						return BUNSPEC;
					}
				else
					{	/* Llib/srfi4.scm 570 */
						obj_t BgL_arg2272z00_3915;

						obj_t BgL_arg2274z00_3916;

						BgL_arg2272z00_3915 = BGl_symbol2965z00zz__srfi4z00;
						{	/* Llib/srfi4.scm 570 */
							obj_t BgL_arg2277z00_3917;

							{	/* Llib/srfi4.scm 570 */
								long BgL_arg2279z00_3918;

								{	/* Llib/srfi4.scm 570 */
									long BgL_arg2280z00_3919;

									BgL_arg2280z00_3919 = BGL_HVECTOR_LENGTH(BgL_vz00_111);
									BgL_arg2279z00_3918 = (BgL_arg2280z00_3919 - ((long) 1));
								}
								{	/* Llib/srfi4.scm 570 */

									BgL_arg2277z00_3917 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_arg2279z00_3918, ((long) 10));
							}}
							BgL_arg2274z00_3916 =
								string_append_3(BGl_string2912z00zz__srfi4z00,
								BgL_arg2277z00_3917, BGl_string2913z00zz__srfi4z00);
						}
						return
							BGl_errorz00zz__errorz00(BgL_arg2272z00_3915, BgL_arg2274z00_3916,
							BINT(BgL_kz00_112));
					}
			}
		}
	}



/* _s64vector-set! */
	obj_t BGl__s64vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_envz00_3348,
		obj_t BgL_vz00_3349, obj_t BgL_kz00_3350, obj_t BgL_valz00_3351)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 569 */
			{	/* Llib/srfi4.scm 570 */
				obj_t BgL_vz00_3920;

				long BgL_kz00_3921;

				BGL_LONGLONG_T BgL_valz00_3922;

				if (BGL_S64VECTORP(BgL_vz00_3349))
					{	/* Llib/srfi4.scm 570 */
						BgL_vz00_3920 = BgL_vz00_3349;
					}
				else
					{
						obj_t BgL_auxz00_5568;

						BgL_auxz00_5568 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
							BINT(((long) 22335)), BGl_string2967z00zz__srfi4z00,
							BGl_string2890z00zz__srfi4z00, BgL_vz00_3349);
						FAILURE(BgL_auxz00_5568, BFALSE, BFALSE);
					}
				{	/* Llib/srfi4.scm 570 */
					obj_t BgL_auxz00_5572;

					if (INTEGERP(BgL_kz00_3350))
						{	/* Llib/srfi4.scm 570 */
							BgL_auxz00_5572 = BgL_kz00_3350;
						}
					else
						{
							obj_t BgL_auxz00_5575;

							BgL_auxz00_5575 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 22335)), BGl_string2967z00zz__srfi4z00,
								BGl_string2898z00zz__srfi4z00, BgL_kz00_3350);
							FAILURE(BgL_auxz00_5575, BFALSE, BFALSE);
						}
					BgL_kz00_3921 = (long) CINT(BgL_auxz00_5572);
				}
				{	/* Llib/srfi4.scm 570 */
					obj_t BgL_auxz00_5580;

					if (LLONGP(BgL_valz00_3351))
						{	/* Llib/srfi4.scm 570 */
							BgL_auxz00_5580 = BgL_valz00_3351;
						}
					else
						{
							obj_t BgL_auxz00_5583;

							BgL_auxz00_5583 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 22335)), BGl_string2967z00zz__srfi4z00,
								BGl_string2968z00zz__srfi4z00, BgL_valz00_3351);
							FAILURE(BgL_auxz00_5583, BFALSE, BFALSE);
						}
					BgL_valz00_3922 = BLLONG_TO_LLONG(BgL_auxz00_5580);
				}
				{	/* Llib/srfi4.scm 570 */
					bool_t BgL_testz00_5588;

					{	/* Llib/srfi4.scm 570 */
						long BgL_arg2282z00_3923;

						BgL_arg2282z00_3923 = BGL_HVECTOR_LENGTH(BgL_vz00_3920);
						{	/* Llib/srfi4.scm 570 */
							int BgL_auxz00_5592;

							int BgL_auxz00_5590;

							BgL_auxz00_5592 = (int) (BgL_arg2282z00_3923);
							BgL_auxz00_5590 = (int) (BgL_kz00_3921);
							BgL_testz00_5588 = BOUND_CHECK(BgL_auxz00_5590, BgL_auxz00_5592);
					}}
					if (BgL_testz00_5588)
						{	/* Llib/srfi4.scm 570 */
							BGL_S64VSET(BgL_vz00_3920, BgL_kz00_3921, BgL_valz00_3922);
							return BUNSPEC;
						}
					else
						{	/* Llib/srfi4.scm 570 */
							obj_t BgL_arg2272z00_3924;

							obj_t BgL_arg2274z00_3925;

							BgL_arg2272z00_3924 = BGl_symbol2965z00zz__srfi4z00;
							{	/* Llib/srfi4.scm 570 */
								obj_t BgL_arg2277z00_3926;

								{	/* Llib/srfi4.scm 570 */
									long BgL_arg2279z00_3927;

									{	/* Llib/srfi4.scm 570 */
										long BgL_arg2280z00_3928;

										BgL_arg2280z00_3928 = BGL_HVECTOR_LENGTH(BgL_vz00_3920);
										BgL_arg2279z00_3927 = (BgL_arg2280z00_3928 - ((long) 1));
									}
									{	/* Llib/srfi4.scm 570 */

										BgL_arg2277z00_3926 =
											BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
											(BgL_arg2279z00_3927, ((long) 10));
								}}
								BgL_arg2274z00_3925 =
									string_append_3(BGl_string2912z00zz__srfi4z00,
									BgL_arg2277z00_3926, BGl_string2913z00zz__srfi4z00);
							}
							return
								BGl_errorz00zz__errorz00(BgL_arg2272z00_3924,
								BgL_arg2274z00_3925, BINT(BgL_kz00_3921));
						}
				}
			}
		}
	}



/* u64vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_u64vectorzd2setz12zc0zz__srfi4z00(obj_t
		BgL_vz00_114, long BgL_kz00_115, unsigned BGL_LONGLONG_T BgL_valz00_116)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 577 */
			{	/* Llib/srfi4.scm 578 */
				bool_t BgL_testz00_5602;

				{	/* Llib/srfi4.scm 578 */
					long BgL_arg2294z00_3929;

					BgL_arg2294z00_3929 = BGL_HVECTOR_LENGTH(BgL_vz00_114);
					{	/* Llib/srfi4.scm 578 */
						int BgL_auxz00_5606;

						int BgL_auxz00_5604;

						BgL_auxz00_5606 = (int) (BgL_arg2294z00_3929);
						BgL_auxz00_5604 = (int) (BgL_kz00_115);
						BgL_testz00_5602 = BOUND_CHECK(BgL_auxz00_5604, BgL_auxz00_5606);
				}}
				if (BgL_testz00_5602)
					{	/* Llib/srfi4.scm 578 */
						BGL_U64VSET(BgL_vz00_114, BgL_kz00_115, BgL_valz00_116);
						return BUNSPEC;
					}
				else
					{	/* Llib/srfi4.scm 578 */
						obj_t BgL_arg2284z00_3930;

						obj_t BgL_arg2285z00_3931;

						BgL_arg2284z00_3930 = BGl_symbol2969z00zz__srfi4z00;
						{	/* Llib/srfi4.scm 578 */
							obj_t BgL_arg2289z00_3932;

							{	/* Llib/srfi4.scm 578 */
								long BgL_arg2291z00_3933;

								{	/* Llib/srfi4.scm 578 */
									long BgL_arg2292z00_3934;

									BgL_arg2292z00_3934 = BGL_HVECTOR_LENGTH(BgL_vz00_114);
									BgL_arg2291z00_3933 = (BgL_arg2292z00_3934 - ((long) 1));
								}
								{	/* Llib/srfi4.scm 578 */

									BgL_arg2289z00_3932 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_arg2291z00_3933, ((long) 10));
							}}
							BgL_arg2285z00_3931 =
								string_append_3(BGl_string2912z00zz__srfi4z00,
								BgL_arg2289z00_3932, BGl_string2913z00zz__srfi4z00);
						}
						return
							BGl_errorz00zz__errorz00(BgL_arg2284z00_3930, BgL_arg2285z00_3931,
							BINT(BgL_kz00_115));
					}
			}
		}
	}



/* _u64vector-set! */
	obj_t BGl__u64vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_envz00_3355,
		obj_t BgL_vz00_3356, obj_t BgL_kz00_3357, obj_t BgL_valz00_3358)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 577 */
			{	/* Llib/srfi4.scm 578 */
				obj_t BgL_vz00_3935;

				long BgL_kz00_3936;

				unsigned BGL_LONGLONG_T BgL_valz00_3937;

				if (BGL_U64VECTORP(BgL_vz00_3356))
					{	/* Llib/srfi4.scm 578 */
						BgL_vz00_3935 = BgL_vz00_3356;
					}
				else
					{
						obj_t BgL_auxz00_5618;

						BgL_auxz00_5618 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
							BINT(((long) 22619)), BGl_string2971z00zz__srfi4z00,
							BGl_string2892z00zz__srfi4z00, BgL_vz00_3356);
						FAILURE(BgL_auxz00_5618, BFALSE, BFALSE);
					}
				{	/* Llib/srfi4.scm 578 */
					obj_t BgL_auxz00_5622;

					if (INTEGERP(BgL_kz00_3357))
						{	/* Llib/srfi4.scm 578 */
							BgL_auxz00_5622 = BgL_kz00_3357;
						}
					else
						{
							obj_t BgL_auxz00_5625;

							BgL_auxz00_5625 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 22619)), BGl_string2971z00zz__srfi4z00,
								BGl_string2898z00zz__srfi4z00, BgL_kz00_3357);
							FAILURE(BgL_auxz00_5625, BFALSE, BFALSE);
						}
					BgL_kz00_3936 = (long) CINT(BgL_auxz00_5622);
				}
				{	/* Llib/srfi4.scm 578 */
					obj_t BgL_auxz00_5630;

					if (LLONGP(BgL_valz00_3358))
						{	/* Llib/srfi4.scm 578 */
							BgL_auxz00_5630 = BgL_valz00_3358;
						}
					else
						{
							obj_t BgL_auxz00_5633;

							BgL_auxz00_5633 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 22619)), BGl_string2971z00zz__srfi4z00,
								BGl_string2972z00zz__srfi4z00, BgL_valz00_3358);
							FAILURE(BgL_auxz00_5633, BFALSE, BFALSE);
						}
					BgL_valz00_3937 = BLLONG_TO_LLONG(BgL_auxz00_5630);
				}
				{	/* Llib/srfi4.scm 578 */
					bool_t BgL_testz00_5638;

					{	/* Llib/srfi4.scm 578 */
						long BgL_arg2294z00_3938;

						BgL_arg2294z00_3938 = BGL_HVECTOR_LENGTH(BgL_vz00_3935);
						{	/* Llib/srfi4.scm 578 */
							int BgL_auxz00_5642;

							int BgL_auxz00_5640;

							BgL_auxz00_5642 = (int) (BgL_arg2294z00_3938);
							BgL_auxz00_5640 = (int) (BgL_kz00_3936);
							BgL_testz00_5638 = BOUND_CHECK(BgL_auxz00_5640, BgL_auxz00_5642);
					}}
					if (BgL_testz00_5638)
						{	/* Llib/srfi4.scm 578 */
							BGL_U64VSET(BgL_vz00_3935, BgL_kz00_3936, BgL_valz00_3937);
							return BUNSPEC;
						}
					else
						{	/* Llib/srfi4.scm 578 */
							obj_t BgL_arg2284z00_3939;

							obj_t BgL_arg2285z00_3940;

							BgL_arg2284z00_3939 = BGl_symbol2969z00zz__srfi4z00;
							{	/* Llib/srfi4.scm 578 */
								obj_t BgL_arg2289z00_3941;

								{	/* Llib/srfi4.scm 578 */
									long BgL_arg2291z00_3942;

									{	/* Llib/srfi4.scm 578 */
										long BgL_arg2292z00_3943;

										BgL_arg2292z00_3943 = BGL_HVECTOR_LENGTH(BgL_vz00_3935);
										BgL_arg2291z00_3942 = (BgL_arg2292z00_3943 - ((long) 1));
									}
									{	/* Llib/srfi4.scm 578 */

										BgL_arg2289z00_3941 =
											BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
											(BgL_arg2291z00_3942, ((long) 10));
								}}
								BgL_arg2285z00_3940 =
									string_append_3(BGl_string2912z00zz__srfi4z00,
									BgL_arg2289z00_3941, BGl_string2913z00zz__srfi4z00);
							}
							return
								BGl_errorz00zz__errorz00(BgL_arg2284z00_3939,
								BgL_arg2285z00_3940, BINT(BgL_kz00_3936));
						}
				}
			}
		}
	}



/* f32vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_f32vectorzd2setz12zc0zz__srfi4z00(obj_t
		BgL_vz00_117, long BgL_kz00_118, float BgL_valz00_119)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 585 */
			{	/* Llib/srfi4.scm 586 */
				bool_t BgL_testz00_5652;

				{	/* Llib/srfi4.scm 586 */
					long BgL_arg2306z00_3944;

					BgL_arg2306z00_3944 = BGL_HVECTOR_LENGTH(BgL_vz00_117);
					{	/* Llib/srfi4.scm 586 */
						int BgL_auxz00_5656;

						int BgL_auxz00_5654;

						BgL_auxz00_5656 = (int) (BgL_arg2306z00_3944);
						BgL_auxz00_5654 = (int) (BgL_kz00_118);
						BgL_testz00_5652 = BOUND_CHECK(BgL_auxz00_5654, BgL_auxz00_5656);
				}}
				if (BgL_testz00_5652)
					{	/* Llib/srfi4.scm 586 */
						BGL_F32VSET(BgL_vz00_117, BgL_kz00_118, BgL_valz00_119);
						return BUNSPEC;
					}
				else
					{	/* Llib/srfi4.scm 586 */
						obj_t BgL_arg2296z00_3945;

						obj_t BgL_arg2297z00_3946;

						BgL_arg2296z00_3945 = BGl_symbol2973z00zz__srfi4z00;
						{	/* Llib/srfi4.scm 586 */
							obj_t BgL_arg2301z00_3947;

							{	/* Llib/srfi4.scm 586 */
								long BgL_arg2303z00_3948;

								{	/* Llib/srfi4.scm 586 */
									long BgL_arg2304z00_3949;

									BgL_arg2304z00_3949 = BGL_HVECTOR_LENGTH(BgL_vz00_117);
									BgL_arg2303z00_3948 = (BgL_arg2304z00_3949 - ((long) 1));
								}
								{	/* Llib/srfi4.scm 586 */

									BgL_arg2301z00_3947 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_arg2303z00_3948, ((long) 10));
							}}
							BgL_arg2297z00_3946 =
								string_append_3(BGl_string2912z00zz__srfi4z00,
								BgL_arg2301z00_3947, BGl_string2913z00zz__srfi4z00);
						}
						return
							BGl_errorz00zz__errorz00(BgL_arg2296z00_3945, BgL_arg2297z00_3946,
							BINT(BgL_kz00_118));
					}
			}
		}
	}



/* _f32vector-set! */
	obj_t BGl__f32vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_envz00_3362,
		obj_t BgL_vz00_3363, obj_t BgL_kz00_3364, obj_t BgL_valz00_3365)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 585 */
			{	/* Llib/srfi4.scm 586 */
				obj_t BgL_vz00_3950;

				long BgL_kz00_3951;

				float BgL_valz00_3952;

				if (BGL_F32VECTORP(BgL_vz00_3363))
					{	/* Llib/srfi4.scm 586 */
						BgL_vz00_3950 = BgL_vz00_3363;
					}
				else
					{
						obj_t BgL_auxz00_5668;

						BgL_auxz00_5668 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
							BINT(((long) 22903)), BGl_string2975z00zz__srfi4z00,
							BGl_string2894z00zz__srfi4z00, BgL_vz00_3363);
						FAILURE(BgL_auxz00_5668, BFALSE, BFALSE);
					}
				{	/* Llib/srfi4.scm 586 */
					obj_t BgL_auxz00_5672;

					if (INTEGERP(BgL_kz00_3364))
						{	/* Llib/srfi4.scm 586 */
							BgL_auxz00_5672 = BgL_kz00_3364;
						}
					else
						{
							obj_t BgL_auxz00_5675;

							BgL_auxz00_5675 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 22903)), BGl_string2975z00zz__srfi4z00,
								BGl_string2898z00zz__srfi4z00, BgL_kz00_3364);
							FAILURE(BgL_auxz00_5675, BFALSE, BFALSE);
						}
					BgL_kz00_3951 = (long) CINT(BgL_auxz00_5672);
				}
				{	/* Llib/srfi4.scm 586 */
					obj_t BgL_auxz00_5680;

					if (REALP(BgL_valz00_3365))
						{	/* Llib/srfi4.scm 586 */
							BgL_auxz00_5680 = BgL_valz00_3365;
						}
					else
						{
							obj_t BgL_auxz00_5683;

							BgL_auxz00_5683 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 22903)), BGl_string2975z00zz__srfi4z00,
								BGl_string2976z00zz__srfi4z00, BgL_valz00_3365);
							FAILURE(BgL_auxz00_5683, BFALSE, BFALSE);
						}
					BgL_valz00_3952 = REAL_TO_FLOAT(BgL_auxz00_5680);
				}
				{	/* Llib/srfi4.scm 586 */
					bool_t BgL_testz00_5688;

					{	/* Llib/srfi4.scm 586 */
						long BgL_arg2306z00_3953;

						BgL_arg2306z00_3953 = BGL_HVECTOR_LENGTH(BgL_vz00_3950);
						{	/* Llib/srfi4.scm 586 */
							int BgL_auxz00_5692;

							int BgL_auxz00_5690;

							BgL_auxz00_5692 = (int) (BgL_arg2306z00_3953);
							BgL_auxz00_5690 = (int) (BgL_kz00_3951);
							BgL_testz00_5688 = BOUND_CHECK(BgL_auxz00_5690, BgL_auxz00_5692);
					}}
					if (BgL_testz00_5688)
						{	/* Llib/srfi4.scm 586 */
							BGL_F32VSET(BgL_vz00_3950, BgL_kz00_3951, BgL_valz00_3952);
							return BUNSPEC;
						}
					else
						{	/* Llib/srfi4.scm 586 */
							obj_t BgL_arg2296z00_3954;

							obj_t BgL_arg2297z00_3955;

							BgL_arg2296z00_3954 = BGl_symbol2973z00zz__srfi4z00;
							{	/* Llib/srfi4.scm 586 */
								obj_t BgL_arg2301z00_3956;

								{	/* Llib/srfi4.scm 586 */
									long BgL_arg2303z00_3957;

									{	/* Llib/srfi4.scm 586 */
										long BgL_arg2304z00_3958;

										BgL_arg2304z00_3958 = BGL_HVECTOR_LENGTH(BgL_vz00_3950);
										BgL_arg2303z00_3957 = (BgL_arg2304z00_3958 - ((long) 1));
									}
									{	/* Llib/srfi4.scm 586 */

										BgL_arg2301z00_3956 =
											BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
											(BgL_arg2303z00_3957, ((long) 10));
								}}
								BgL_arg2297z00_3955 =
									string_append_3(BGl_string2912z00zz__srfi4z00,
									BgL_arg2301z00_3956, BGl_string2913z00zz__srfi4z00);
							}
							return
								BGl_errorz00zz__errorz00(BgL_arg2296z00_3954,
								BgL_arg2297z00_3955, BINT(BgL_kz00_3951));
						}
				}
			}
		}
	}



/* f64vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_f64vectorzd2setz12zc0zz__srfi4z00(obj_t
		BgL_vz00_120, long BgL_kz00_121, double BgL_valz00_122)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 593 */
			{	/* Llib/srfi4.scm 594 */
				bool_t BgL_testz00_5702;

				{	/* Llib/srfi4.scm 594 */
					long BgL_arg2316z00_3959;

					BgL_arg2316z00_3959 = BGL_HVECTOR_LENGTH(BgL_vz00_120);
					{	/* Llib/srfi4.scm 594 */
						int BgL_auxz00_5706;

						int BgL_auxz00_5704;

						BgL_auxz00_5706 = (int) (BgL_arg2316z00_3959);
						BgL_auxz00_5704 = (int) (BgL_kz00_121);
						BgL_testz00_5702 = BOUND_CHECK(BgL_auxz00_5704, BgL_auxz00_5706);
				}}
				if (BgL_testz00_5702)
					{	/* Llib/srfi4.scm 594 */
						BGL_F64VSET(BgL_vz00_120, BgL_kz00_121, BgL_valz00_122);
						return BUNSPEC;
					}
				else
					{	/* Llib/srfi4.scm 594 */
						obj_t BgL_arg2308z00_3960;

						obj_t BgL_arg2309z00_3961;

						BgL_arg2308z00_3960 = BGl_symbol2977z00zz__srfi4z00;
						{	/* Llib/srfi4.scm 594 */
							obj_t BgL_arg2311z00_3962;

							{	/* Llib/srfi4.scm 594 */
								long BgL_arg2313z00_3963;

								{	/* Llib/srfi4.scm 594 */
									long BgL_arg2314z00_3964;

									BgL_arg2314z00_3964 = BGL_HVECTOR_LENGTH(BgL_vz00_120);
									BgL_arg2313z00_3963 = (BgL_arg2314z00_3964 - ((long) 1));
								}
								{	/* Llib/srfi4.scm 594 */

									BgL_arg2311z00_3962 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_arg2313z00_3963, ((long) 10));
							}}
							BgL_arg2309z00_3961 =
								string_append_3(BGl_string2912z00zz__srfi4z00,
								BgL_arg2311z00_3962, BGl_string2913z00zz__srfi4z00);
						}
						return
							BGl_errorz00zz__errorz00(BgL_arg2308z00_3960, BgL_arg2309z00_3961,
							BINT(BgL_kz00_121));
					}
			}
		}
	}



/* _f64vector-set! */
	obj_t BGl__f64vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_envz00_3369,
		obj_t BgL_vz00_3370, obj_t BgL_kz00_3371, obj_t BgL_valz00_3372)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 593 */
			{	/* Llib/srfi4.scm 594 */
				obj_t BgL_vz00_3965;

				long BgL_kz00_3966;

				double BgL_valz00_3967;

				if (BGL_F64VECTORP(BgL_vz00_3370))
					{	/* Llib/srfi4.scm 594 */
						BgL_vz00_3965 = BgL_vz00_3370;
					}
				else
					{
						obj_t BgL_auxz00_5718;

						BgL_auxz00_5718 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
							BINT(((long) 23187)), BGl_string2979z00zz__srfi4z00,
							BGl_string2896z00zz__srfi4z00, BgL_vz00_3370);
						FAILURE(BgL_auxz00_5718, BFALSE, BFALSE);
					}
				{	/* Llib/srfi4.scm 594 */
					obj_t BgL_auxz00_5722;

					if (INTEGERP(BgL_kz00_3371))
						{	/* Llib/srfi4.scm 594 */
							BgL_auxz00_5722 = BgL_kz00_3371;
						}
					else
						{
							obj_t BgL_auxz00_5725;

							BgL_auxz00_5725 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 23187)), BGl_string2979z00zz__srfi4z00,
								BGl_string2898z00zz__srfi4z00, BgL_kz00_3371);
							FAILURE(BgL_auxz00_5725, BFALSE, BFALSE);
						}
					BgL_kz00_3966 = (long) CINT(BgL_auxz00_5722);
				}
				{	/* Llib/srfi4.scm 594 */
					obj_t BgL_auxz00_5730;

					if (REALP(BgL_valz00_3372))
						{	/* Llib/srfi4.scm 594 */
							BgL_auxz00_5730 = BgL_valz00_3372;
						}
					else
						{
							obj_t BgL_auxz00_5733;

							BgL_auxz00_5733 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 23187)), BGl_string2979z00zz__srfi4z00,
								BGl_string2980z00zz__srfi4z00, BgL_valz00_3372);
							FAILURE(BgL_auxz00_5733, BFALSE, BFALSE);
						}
					BgL_valz00_3967 = REAL_TO_DOUBLE(BgL_auxz00_5730);
				}
				{	/* Llib/srfi4.scm 594 */
					bool_t BgL_testz00_5738;

					{	/* Llib/srfi4.scm 594 */
						long BgL_arg2316z00_3968;

						BgL_arg2316z00_3968 = BGL_HVECTOR_LENGTH(BgL_vz00_3965);
						{	/* Llib/srfi4.scm 594 */
							int BgL_auxz00_5742;

							int BgL_auxz00_5740;

							BgL_auxz00_5742 = (int) (BgL_arg2316z00_3968);
							BgL_auxz00_5740 = (int) (BgL_kz00_3966);
							BgL_testz00_5738 = BOUND_CHECK(BgL_auxz00_5740, BgL_auxz00_5742);
					}}
					if (BgL_testz00_5738)
						{	/* Llib/srfi4.scm 594 */
							BGL_F64VSET(BgL_vz00_3965, BgL_kz00_3966, BgL_valz00_3967);
							return BUNSPEC;
						}
					else
						{	/* Llib/srfi4.scm 594 */
							obj_t BgL_arg2308z00_3969;

							obj_t BgL_arg2309z00_3970;

							BgL_arg2308z00_3969 = BGl_symbol2977z00zz__srfi4z00;
							{	/* Llib/srfi4.scm 594 */
								obj_t BgL_arg2311z00_3971;

								{	/* Llib/srfi4.scm 594 */
									long BgL_arg2313z00_3972;

									{	/* Llib/srfi4.scm 594 */
										long BgL_arg2314z00_3973;

										BgL_arg2314z00_3973 = BGL_HVECTOR_LENGTH(BgL_vz00_3965);
										BgL_arg2313z00_3972 = (BgL_arg2314z00_3973 - ((long) 1));
									}
									{	/* Llib/srfi4.scm 594 */

										BgL_arg2311z00_3971 =
											BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
											(BgL_arg2313z00_3972, ((long) 10));
								}}
								BgL_arg2309z00_3970 =
									string_append_3(BGl_string2912z00zz__srfi4z00,
									BgL_arg2311z00_3971, BGl_string2913z00zz__srfi4z00);
							}
							return
								BGl_errorz00zz__errorz00(BgL_arg2308z00_3969,
								BgL_arg2309z00_3970, BINT(BgL_kz00_3966));
						}
				}
			}
		}
	}



/* s8vector->list */
	BGL_EXPORTED_DEF obj_t BGl_s8vectorzd2ze3listz31zz__srfi4z00(obj_t
		BgL_xz00_123)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 619 */
			{	/* Llib/srfi4.scm 619 */
				long BgL_g1848z00_1354;

				BgL_g1848z00_1354 = BGL_HVECTOR_LENGTH(BgL_xz00_123);
				{
					long BgL_iz00_2399;

					obj_t BgL_resz00_2400;

					BgL_iz00_2399 = BgL_g1848z00_1354;
					BgL_resz00_2400 = BNIL;
				BgL_loopz00_2398:
					if ((BgL_iz00_2399 == ((long) 0)))
						{	/* Llib/srfi4.scm 619 */
							return BgL_resz00_2400;
						}
					else
						{	/* Llib/srfi4.scm 619 */
							long BgL_niz00_2406;

							BgL_niz00_2406 = (BgL_iz00_2399 - ((long) 1));
							{	/* Llib/srfi4.scm 619 */
								obj_t BgL_arg2319z00_2407;

								{	/* Llib/srfi4.scm 619 */
									char BgL_arg2320z00_2408;

									BgL_arg2320z00_2408 =
										BGL_S8VREF(BgL_xz00_123, BgL_niz00_2406);
									BgL_arg2319z00_2407 =
										MAKE_PAIR(BINT(BgL_arg2320z00_2408), BgL_resz00_2400);
								}
								{
									obj_t BgL_resz00_5760;

									long BgL_iz00_5759;

									BgL_iz00_5759 = BgL_niz00_2406;
									BgL_resz00_5760 = BgL_arg2319z00_2407;
									BgL_resz00_2400 = BgL_resz00_5760;
									BgL_iz00_2399 = BgL_iz00_5759;
									goto BgL_loopz00_2398;
								}
							}
						}
				}
			}
		}
	}



/* _s8vector->list */
	obj_t BGl__s8vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_envz00_3413,
		obj_t BgL_xz00_3414)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 619 */
			{	/* Llib/srfi4.scm 619 */
				obj_t BgL_auxz00_5761;

				if (BGL_S8VECTORP(BgL_xz00_3414))
					{	/* Llib/srfi4.scm 619 */
						BgL_auxz00_5761 = BgL_xz00_3414;
					}
				else
					{
						obj_t BgL_auxz00_5764;

						BgL_auxz00_5764 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
							BINT(((long) 24065)), BGl_string2981z00zz__srfi4z00,
							BGl_string2878z00zz__srfi4z00, BgL_xz00_3414);
						FAILURE(BgL_auxz00_5764, BFALSE, BFALSE);
					}
				return BGl_s8vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5761);
			}
		}
	}



/* u8vector->list */
	BGL_EXPORTED_DEF obj_t BGl_u8vectorzd2ze3listz31zz__srfi4z00(obj_t
		BgL_xz00_124)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 619 */
			{	/* Llib/srfi4.scm 619 */
				long BgL_g1850z00_1365;

				BgL_g1850z00_1365 = BGL_HVECTOR_LENGTH(BgL_xz00_124);
				{
					long BgL_iz00_2432;

					obj_t BgL_resz00_2433;

					BgL_iz00_2432 = BgL_g1850z00_1365;
					BgL_resz00_2433 = BNIL;
				BgL_loopz00_2431:
					if ((BgL_iz00_2432 == ((long) 0)))
						{	/* Llib/srfi4.scm 619 */
							return BgL_resz00_2433;
						}
					else
						{	/* Llib/srfi4.scm 619 */
							long BgL_niz00_2439;

							BgL_niz00_2439 = (BgL_iz00_2432 - ((long) 1));
							{	/* Llib/srfi4.scm 619 */
								obj_t BgL_arg2323z00_2440;

								{	/* Llib/srfi4.scm 619 */
									unsigned char BgL_arg2324z00_2441;

									BgL_arg2324z00_2441 =
										BGL_U8VREF(BgL_xz00_124, BgL_niz00_2439);
									BgL_arg2323z00_2440 =
										MAKE_PAIR(BINT(BgL_arg2324z00_2441), BgL_resz00_2433);
								}
								{
									obj_t BgL_resz00_5777;

									long BgL_iz00_5776;

									BgL_iz00_5776 = BgL_niz00_2439;
									BgL_resz00_5777 = BgL_arg2323z00_2440;
									BgL_resz00_2433 = BgL_resz00_5777;
									BgL_iz00_2432 = BgL_iz00_5776;
									goto BgL_loopz00_2431;
								}
							}
						}
				}
			}
		}
	}



/* _u8vector->list */
	obj_t BGl__u8vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_envz00_3415,
		obj_t BgL_xz00_3416)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 619 */
			{	/* Llib/srfi4.scm 619 */
				obj_t BgL_auxz00_5778;

				if (BGL_U8VECTORP(BgL_xz00_3416))
					{	/* Llib/srfi4.scm 619 */
						BgL_auxz00_5778 = BgL_xz00_3416;
					}
				else
					{
						obj_t BgL_auxz00_5781;

						BgL_auxz00_5781 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
							BINT(((long) 24065)), BGl_string2982z00zz__srfi4z00,
							BGl_string2880z00zz__srfi4z00, BgL_xz00_3416);
						FAILURE(BgL_auxz00_5781, BFALSE, BFALSE);
					}
				return BGl_u8vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5778);
			}
		}
	}



/* s16vector->list */
	BGL_EXPORTED_DEF obj_t BGl_s16vectorzd2ze3listz31zz__srfi4z00(obj_t
		BgL_xz00_125)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 619 */
			{	/* Llib/srfi4.scm 619 */
				long BgL_g1852z00_1376;

				BgL_g1852z00_1376 = BGL_HVECTOR_LENGTH(BgL_xz00_125);
				{
					long BgL_iz00_2465;

					obj_t BgL_resz00_2466;

					BgL_iz00_2465 = BgL_g1852z00_1376;
					BgL_resz00_2466 = BNIL;
				BgL_loopz00_2464:
					if ((BgL_iz00_2465 == ((long) 0)))
						{	/* Llib/srfi4.scm 619 */
							return BgL_resz00_2466;
						}
					else
						{	/* Llib/srfi4.scm 619 */
							long BgL_niz00_2472;

							BgL_niz00_2472 = (BgL_iz00_2465 - ((long) 1));
							{	/* Llib/srfi4.scm 619 */
								obj_t BgL_arg2327z00_2473;

								{	/* Llib/srfi4.scm 619 */
									short BgL_arg2328z00_2474;

									BgL_arg2328z00_2474 =
										BGL_S16VREF(BgL_xz00_125, BgL_niz00_2472);
									BgL_arg2327z00_2473 =
										MAKE_PAIR(BINT(BgL_arg2328z00_2474), BgL_resz00_2466);
								}
								{
									obj_t BgL_resz00_5794;

									long BgL_iz00_5793;

									BgL_iz00_5793 = BgL_niz00_2472;
									BgL_resz00_5794 = BgL_arg2327z00_2473;
									BgL_resz00_2466 = BgL_resz00_5794;
									BgL_iz00_2465 = BgL_iz00_5793;
									goto BgL_loopz00_2464;
								}
							}
						}
				}
			}
		}
	}



/* _s16vector->list */
	obj_t BGl__s16vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_envz00_3417,
		obj_t BgL_xz00_3418)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 619 */
			{	/* Llib/srfi4.scm 619 */
				obj_t BgL_auxz00_5795;

				if (BGL_S16VECTORP(BgL_xz00_3418))
					{	/* Llib/srfi4.scm 619 */
						BgL_auxz00_5795 = BgL_xz00_3418;
					}
				else
					{
						obj_t BgL_auxz00_5798;

						BgL_auxz00_5798 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
							BINT(((long) 24065)), BGl_string2983z00zz__srfi4z00,
							BGl_string2882z00zz__srfi4z00, BgL_xz00_3418);
						FAILURE(BgL_auxz00_5798, BFALSE, BFALSE);
					}
				return BGl_s16vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5795);
			}
		}
	}



/* u16vector->list */
	BGL_EXPORTED_DEF obj_t BGl_u16vectorzd2ze3listz31zz__srfi4z00(obj_t
		BgL_xz00_126)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 619 */
			{	/* Llib/srfi4.scm 619 */
				long BgL_g1854z00_1387;

				BgL_g1854z00_1387 = BGL_HVECTOR_LENGTH(BgL_xz00_126);
				{
					long BgL_iz00_2498;

					obj_t BgL_resz00_2499;

					BgL_iz00_2498 = BgL_g1854z00_1387;
					BgL_resz00_2499 = BNIL;
				BgL_loopz00_2497:
					if ((BgL_iz00_2498 == ((long) 0)))
						{	/* Llib/srfi4.scm 619 */
							return BgL_resz00_2499;
						}
					else
						{	/* Llib/srfi4.scm 619 */
							long BgL_niz00_2505;

							BgL_niz00_2505 = (BgL_iz00_2498 - ((long) 1));
							{	/* Llib/srfi4.scm 619 */
								obj_t BgL_arg2331z00_2506;

								{	/* Llib/srfi4.scm 619 */
									unsigned short BgL_arg2332z00_2507;

									BgL_arg2332z00_2507 =
										BGL_U16VREF(BgL_xz00_126, BgL_niz00_2505);
									BgL_arg2331z00_2506 =
										MAKE_PAIR(BINT(BgL_arg2332z00_2507), BgL_resz00_2499);
								}
								{
									obj_t BgL_resz00_5811;

									long BgL_iz00_5810;

									BgL_iz00_5810 = BgL_niz00_2505;
									BgL_resz00_5811 = BgL_arg2331z00_2506;
									BgL_resz00_2499 = BgL_resz00_5811;
									BgL_iz00_2498 = BgL_iz00_5810;
									goto BgL_loopz00_2497;
								}
							}
						}
				}
			}
		}
	}



/* _u16vector->list */
	obj_t BGl__u16vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_envz00_3419,
		obj_t BgL_xz00_3420)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 619 */
			{	/* Llib/srfi4.scm 619 */
				obj_t BgL_auxz00_5812;

				if (BGL_U16VECTORP(BgL_xz00_3420))
					{	/* Llib/srfi4.scm 619 */
						BgL_auxz00_5812 = BgL_xz00_3420;
					}
				else
					{
						obj_t BgL_auxz00_5815;

						BgL_auxz00_5815 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
							BINT(((long) 24065)), BGl_string2984z00zz__srfi4z00,
							BGl_string2884z00zz__srfi4z00, BgL_xz00_3420);
						FAILURE(BgL_auxz00_5815, BFALSE, BFALSE);
					}
				return BGl_u16vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5812);
			}
		}
	}



/* s32vector->list */
	BGL_EXPORTED_DEF obj_t BGl_s32vectorzd2ze3listz31zz__srfi4z00(obj_t
		BgL_xz00_127)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 619 */
			{	/* Llib/srfi4.scm 619 */
				long BgL_g1856z00_1398;

				BgL_g1856z00_1398 = BGL_HVECTOR_LENGTH(BgL_xz00_127);
				{
					long BgL_iz00_2531;

					obj_t BgL_resz00_2532;

					BgL_iz00_2531 = BgL_g1856z00_1398;
					BgL_resz00_2532 = BNIL;
				BgL_loopz00_2530:
					if ((BgL_iz00_2531 == ((long) 0)))
						{	/* Llib/srfi4.scm 619 */
							return BgL_resz00_2532;
						}
					else
						{	/* Llib/srfi4.scm 619 */
							long BgL_niz00_2538;

							BgL_niz00_2538 = (BgL_iz00_2531 - ((long) 1));
							{	/* Llib/srfi4.scm 619 */
								obj_t BgL_arg2335z00_2539;

								{	/* Llib/srfi4.scm 619 */
									long BgL_arg2336z00_2540;

									BgL_arg2336z00_2540 =
										BGL_S32VREF(BgL_xz00_127, BgL_niz00_2538);
									BgL_arg2335z00_2539 =
										MAKE_PAIR(BINT(BgL_arg2336z00_2540), BgL_resz00_2532);
								}
								{
									obj_t BgL_resz00_5828;

									long BgL_iz00_5827;

									BgL_iz00_5827 = BgL_niz00_2538;
									BgL_resz00_5828 = BgL_arg2335z00_2539;
									BgL_resz00_2532 = BgL_resz00_5828;
									BgL_iz00_2531 = BgL_iz00_5827;
									goto BgL_loopz00_2530;
								}
							}
						}
				}
			}
		}
	}



/* _s32vector->list */
	obj_t BGl__s32vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_envz00_3421,
		obj_t BgL_xz00_3422)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 619 */
			{	/* Llib/srfi4.scm 619 */
				obj_t BgL_auxz00_5829;

				if (BGL_S32VECTORP(BgL_xz00_3422))
					{	/* Llib/srfi4.scm 619 */
						BgL_auxz00_5829 = BgL_xz00_3422;
					}
				else
					{
						obj_t BgL_auxz00_5832;

						BgL_auxz00_5832 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
							BINT(((long) 24065)), BGl_string2985z00zz__srfi4z00,
							BGl_string2886z00zz__srfi4z00, BgL_xz00_3422);
						FAILURE(BgL_auxz00_5832, BFALSE, BFALSE);
					}
				return BGl_s32vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5829);
			}
		}
	}



/* u32vector->list */
	BGL_EXPORTED_DEF obj_t BGl_u32vectorzd2ze3listz31zz__srfi4z00(obj_t
		BgL_xz00_128)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 619 */
			{	/* Llib/srfi4.scm 619 */
				long BgL_g1858z00_1409;

				BgL_g1858z00_1409 = BGL_HVECTOR_LENGTH(BgL_xz00_128);
				{
					long BgL_iz00_2564;

					obj_t BgL_resz00_2565;

					BgL_iz00_2564 = BgL_g1858z00_1409;
					BgL_resz00_2565 = BNIL;
				BgL_loopz00_2563:
					if ((BgL_iz00_2564 == ((long) 0)))
						{	/* Llib/srfi4.scm 619 */
							return BgL_resz00_2565;
						}
					else
						{	/* Llib/srfi4.scm 619 */
							long BgL_niz00_2571;

							BgL_niz00_2571 = (BgL_iz00_2564 - ((long) 1));
							{	/* Llib/srfi4.scm 619 */
								obj_t BgL_arg2339z00_2572;

								{	/* Llib/srfi4.scm 619 */
									unsigned long BgL_arg2340z00_2573;

									BgL_arg2340z00_2573 =
										BGL_U32VREF(BgL_xz00_128, BgL_niz00_2571);
									BgL_arg2339z00_2572 =
										MAKE_PAIR(BINT(BgL_arg2340z00_2573), BgL_resz00_2565);
								}
								{
									obj_t BgL_resz00_5845;

									long BgL_iz00_5844;

									BgL_iz00_5844 = BgL_niz00_2571;
									BgL_resz00_5845 = BgL_arg2339z00_2572;
									BgL_resz00_2565 = BgL_resz00_5845;
									BgL_iz00_2564 = BgL_iz00_5844;
									goto BgL_loopz00_2563;
								}
							}
						}
				}
			}
		}
	}



/* _u32vector->list */
	obj_t BGl__u32vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_envz00_3423,
		obj_t BgL_xz00_3424)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 619 */
			{	/* Llib/srfi4.scm 619 */
				obj_t BgL_auxz00_5846;

				if (BGL_U32VECTORP(BgL_xz00_3424))
					{	/* Llib/srfi4.scm 619 */
						BgL_auxz00_5846 = BgL_xz00_3424;
					}
				else
					{
						obj_t BgL_auxz00_5849;

						BgL_auxz00_5849 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
							BINT(((long) 24065)), BGl_string2986z00zz__srfi4z00,
							BGl_string2888z00zz__srfi4z00, BgL_xz00_3424);
						FAILURE(BgL_auxz00_5849, BFALSE, BFALSE);
					}
				return BGl_u32vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5846);
			}
		}
	}



/* s64vector->list */
	BGL_EXPORTED_DEF obj_t BGl_s64vectorzd2ze3listz31zz__srfi4z00(obj_t
		BgL_xz00_129)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 619 */
			{	/* Llib/srfi4.scm 619 */
				long BgL_g1860z00_1420;

				BgL_g1860z00_1420 = BGL_HVECTOR_LENGTH(BgL_xz00_129);
				{
					long BgL_iz00_2597;

					obj_t BgL_resz00_2598;

					BgL_iz00_2597 = BgL_g1860z00_1420;
					BgL_resz00_2598 = BNIL;
				BgL_loopz00_2596:
					if ((BgL_iz00_2597 == ((long) 0)))
						{	/* Llib/srfi4.scm 619 */
							return BgL_resz00_2598;
						}
					else
						{	/* Llib/srfi4.scm 619 */
							long BgL_niz00_2604;

							BgL_niz00_2604 = (BgL_iz00_2597 - ((long) 1));
							{	/* Llib/srfi4.scm 619 */
								obj_t BgL_arg2343z00_2605;

								{	/* Llib/srfi4.scm 619 */
									BGL_LONGLONG_T BgL_arg2344z00_2606;

									BgL_arg2344z00_2606 =
										BGL_S64VREF(BgL_xz00_129, BgL_niz00_2604);
									BgL_arg2343z00_2605 =
										MAKE_PAIR(make_bllong(BgL_arg2344z00_2606),
										BgL_resz00_2598);
								}
								{
									obj_t BgL_resz00_5862;

									long BgL_iz00_5861;

									BgL_iz00_5861 = BgL_niz00_2604;
									BgL_resz00_5862 = BgL_arg2343z00_2605;
									BgL_resz00_2598 = BgL_resz00_5862;
									BgL_iz00_2597 = BgL_iz00_5861;
									goto BgL_loopz00_2596;
								}
							}
						}
				}
			}
		}
	}



/* _s64vector->list */
	obj_t BGl__s64vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_envz00_3425,
		obj_t BgL_xz00_3426)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 619 */
			{	/* Llib/srfi4.scm 619 */
				obj_t BgL_auxz00_5863;

				if (BGL_S64VECTORP(BgL_xz00_3426))
					{	/* Llib/srfi4.scm 619 */
						BgL_auxz00_5863 = BgL_xz00_3426;
					}
				else
					{
						obj_t BgL_auxz00_5866;

						BgL_auxz00_5866 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
							BINT(((long) 24065)), BGl_string2987z00zz__srfi4z00,
							BGl_string2890z00zz__srfi4z00, BgL_xz00_3426);
						FAILURE(BgL_auxz00_5866, BFALSE, BFALSE);
					}
				return BGl_s64vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5863);
			}
		}
	}



/* u64vector->list */
	BGL_EXPORTED_DEF obj_t BGl_u64vectorzd2ze3listz31zz__srfi4z00(obj_t
		BgL_xz00_130)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 619 */
			{	/* Llib/srfi4.scm 619 */
				long BgL_g1862z00_1431;

				BgL_g1862z00_1431 = BGL_HVECTOR_LENGTH(BgL_xz00_130);
				{
					long BgL_iz00_2630;

					obj_t BgL_resz00_2631;

					BgL_iz00_2630 = BgL_g1862z00_1431;
					BgL_resz00_2631 = BNIL;
				BgL_loopz00_2629:
					if ((BgL_iz00_2630 == ((long) 0)))
						{	/* Llib/srfi4.scm 619 */
							return BgL_resz00_2631;
						}
					else
						{	/* Llib/srfi4.scm 619 */
							long BgL_niz00_2637;

							BgL_niz00_2637 = (BgL_iz00_2630 - ((long) 1));
							{	/* Llib/srfi4.scm 619 */
								obj_t BgL_arg2347z00_2638;

								{	/* Llib/srfi4.scm 619 */
									unsigned BGL_LONGLONG_T BgL_arg2348z00_2639;

									BgL_arg2348z00_2639 =
										BGL_U64VREF(BgL_xz00_130, BgL_niz00_2637);
									BgL_arg2347z00_2638 =
										MAKE_PAIR(make_bllong(BgL_arg2348z00_2639),
										BgL_resz00_2631);
								}
								{
									obj_t BgL_resz00_5879;

									long BgL_iz00_5878;

									BgL_iz00_5878 = BgL_niz00_2637;
									BgL_resz00_5879 = BgL_arg2347z00_2638;
									BgL_resz00_2631 = BgL_resz00_5879;
									BgL_iz00_2630 = BgL_iz00_5878;
									goto BgL_loopz00_2629;
								}
							}
						}
				}
			}
		}
	}



/* _u64vector->list */
	obj_t BGl__u64vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_envz00_3427,
		obj_t BgL_xz00_3428)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 619 */
			{	/* Llib/srfi4.scm 619 */
				obj_t BgL_auxz00_5880;

				if (BGL_U64VECTORP(BgL_xz00_3428))
					{	/* Llib/srfi4.scm 619 */
						BgL_auxz00_5880 = BgL_xz00_3428;
					}
				else
					{
						obj_t BgL_auxz00_5883;

						BgL_auxz00_5883 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
							BINT(((long) 24065)), BGl_string2988z00zz__srfi4z00,
							BGl_string2892z00zz__srfi4z00, BgL_xz00_3428);
						FAILURE(BgL_auxz00_5883, BFALSE, BFALSE);
					}
				return BGl_u64vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5880);
			}
		}
	}



/* f32vector->list */
	BGL_EXPORTED_DEF obj_t BGl_f32vectorzd2ze3listz31zz__srfi4z00(obj_t
		BgL_xz00_131)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 619 */
			{	/* Llib/srfi4.scm 619 */
				long BgL_g1864z00_1442;

				BgL_g1864z00_1442 = BGL_HVECTOR_LENGTH(BgL_xz00_131);
				{
					long BgL_iz00_2663;

					obj_t BgL_resz00_2664;

					BgL_iz00_2663 = BgL_g1864z00_1442;
					BgL_resz00_2664 = BNIL;
				BgL_loopz00_2662:
					if ((BgL_iz00_2663 == ((long) 0)))
						{	/* Llib/srfi4.scm 619 */
							return BgL_resz00_2664;
						}
					else
						{	/* Llib/srfi4.scm 619 */
							long BgL_niz00_2670;

							BgL_niz00_2670 = (BgL_iz00_2663 - ((long) 1));
							{	/* Llib/srfi4.scm 619 */
								obj_t BgL_arg2351z00_2671;

								{	/* Llib/srfi4.scm 619 */
									float BgL_arg2352z00_2672;

									BgL_arg2352z00_2672 =
										BGL_F32VREF(BgL_xz00_131, BgL_niz00_2670);
									BgL_arg2351z00_2671 =
										MAKE_PAIR(FLOAT_TO_REAL(BgL_arg2352z00_2672),
										BgL_resz00_2664);
								}
								{
									obj_t BgL_resz00_5896;

									long BgL_iz00_5895;

									BgL_iz00_5895 = BgL_niz00_2670;
									BgL_resz00_5896 = BgL_arg2351z00_2671;
									BgL_resz00_2664 = BgL_resz00_5896;
									BgL_iz00_2663 = BgL_iz00_5895;
									goto BgL_loopz00_2662;
								}
							}
						}
				}
			}
		}
	}



/* _f32vector->list */
	obj_t BGl__f32vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_envz00_3429,
		obj_t BgL_xz00_3430)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 619 */
			{	/* Llib/srfi4.scm 619 */
				obj_t BgL_auxz00_5897;

				if (BGL_F32VECTORP(BgL_xz00_3430))
					{	/* Llib/srfi4.scm 619 */
						BgL_auxz00_5897 = BgL_xz00_3430;
					}
				else
					{
						obj_t BgL_auxz00_5900;

						BgL_auxz00_5900 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
							BINT(((long) 24065)), BGl_string2989z00zz__srfi4z00,
							BGl_string2894z00zz__srfi4z00, BgL_xz00_3430);
						FAILURE(BgL_auxz00_5900, BFALSE, BFALSE);
					}
				return BGl_f32vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5897);
			}
		}
	}



/* f64vector->list */
	BGL_EXPORTED_DEF obj_t BGl_f64vectorzd2ze3listz31zz__srfi4z00(obj_t
		BgL_xz00_132)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 619 */
			{	/* Llib/srfi4.scm 619 */
				long BgL_g1866z00_1453;

				BgL_g1866z00_1453 = BGL_HVECTOR_LENGTH(BgL_xz00_132);
				{
					long BgL_iz00_2696;

					obj_t BgL_resz00_2697;

					BgL_iz00_2696 = BgL_g1866z00_1453;
					BgL_resz00_2697 = BNIL;
				BgL_loopz00_2695:
					if ((BgL_iz00_2696 == ((long) 0)))
						{	/* Llib/srfi4.scm 619 */
							return BgL_resz00_2697;
						}
					else
						{	/* Llib/srfi4.scm 619 */
							long BgL_niz00_2703;

							BgL_niz00_2703 = (BgL_iz00_2696 - ((long) 1));
							{	/* Llib/srfi4.scm 619 */
								obj_t BgL_arg2355z00_2704;

								{	/* Llib/srfi4.scm 619 */
									double BgL_arg2356z00_2705;

									BgL_arg2356z00_2705 =
										BGL_F64VREF(BgL_xz00_132, BgL_niz00_2703);
									BgL_arg2355z00_2704 =
										MAKE_PAIR(DOUBLE_TO_REAL(BgL_arg2356z00_2705),
										BgL_resz00_2697);
								}
								{
									obj_t BgL_resz00_5913;

									long BgL_iz00_5912;

									BgL_iz00_5912 = BgL_niz00_2703;
									BgL_resz00_5913 = BgL_arg2355z00_2704;
									BgL_resz00_2697 = BgL_resz00_5913;
									BgL_iz00_2696 = BgL_iz00_5912;
									goto BgL_loopz00_2695;
								}
							}
						}
				}
			}
		}
	}



/* _f64vector->list */
	obj_t BGl__f64vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_envz00_3431,
		obj_t BgL_xz00_3432)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 619 */
			{	/* Llib/srfi4.scm 619 */
				obj_t BgL_auxz00_5914;

				if (BGL_F64VECTORP(BgL_xz00_3432))
					{	/* Llib/srfi4.scm 619 */
						BgL_auxz00_5914 = BgL_xz00_3432;
					}
				else
					{
						obj_t BgL_auxz00_5917;

						BgL_auxz00_5917 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
							BINT(((long) 24065)), BGl_string2990z00zz__srfi4z00,
							BGl_string2896z00zz__srfi4z00, BgL_xz00_3432);
						FAILURE(BgL_auxz00_5917, BFALSE, BFALSE);
					}
				return BGl_f64vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5914);
			}
		}
	}



/* list->s8vector */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3s8vectorz31zz__srfi4z00(obj_t
		BgL_xz00_133)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 641 */
			{	/* Llib/srfi4.scm 641 */
				long BgL_lenz00_1464;

				BgL_lenz00_1464 = bgl_list_length(BgL_xz00_133);
				{	/* Llib/srfi4.scm 641 */
					obj_t BgL_vecz00_1465;

					BgL_vecz00_1465 = BGL_ALLOC_S8VECTOR(BgL_lenz00_1464);
					{	/* Llib/srfi4.scm 641 */

						{
							long BgL_iz00_2729;

							obj_t BgL_lz00_2730;

							BgL_iz00_2729 = ((long) 0);
							BgL_lz00_2730 = BgL_xz00_133;
						BgL_loopz00_2728:
							if ((BgL_iz00_2729 == BgL_lenz00_1464))
								{	/* Llib/srfi4.scm 641 */
									return BgL_vecz00_1465;
								}
							else
								{	/* Llib/srfi4.scm 641 */
									{	/* Llib/srfi4.scm 641 */
										obj_t BgL_arg2359z00_2736;

										BgL_arg2359z00_2736 = CAR(BgL_lz00_2730);
										{	/* Llib/srfi4.scm 641 */
											char BgL_auxz00_5927;

											BgL_auxz00_5927 = (signed char) CINT(BgL_arg2359z00_2736);
											BGL_S8VSET(BgL_vecz00_1465, BgL_iz00_2729,
												BgL_auxz00_5927);
										} BUNSPEC;
									}
									{
										obj_t BgL_lz00_5932;

										long BgL_iz00_5930;

										BgL_iz00_5930 = (BgL_iz00_2729 + ((long) 1));
										BgL_lz00_5932 = CDR(BgL_lz00_2730);
										BgL_lz00_2730 = BgL_lz00_5932;
										BgL_iz00_2729 = BgL_iz00_5930;
										goto BgL_loopz00_2728;
									}
								}
						}
					}
				}
			}
		}
	}



/* _list->s8vector */
	obj_t BGl__listzd2ze3s8vectorz31zz__srfi4z00(obj_t BgL_envz00_3433,
		obj_t BgL_xz00_3434)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 641 */
			{	/* Llib/srfi4.scm 641 */
				obj_t BgL_auxz00_5934;

				{	/* Llib/srfi4.scm 641 */
					bool_t BgL_testz00_5935;

					if (PAIRP(BgL_xz00_3434))
						{	/* Llib/srfi4.scm 641 */
							BgL_testz00_5935 = ((bool_t) 1);
						}
					else
						{	/* Llib/srfi4.scm 641 */
							BgL_testz00_5935 = NULLP(BgL_xz00_3434);
						}
					if (BgL_testz00_5935)
						{	/* Llib/srfi4.scm 641 */
							BgL_auxz00_5934 = BgL_xz00_3434;
						}
					else
						{
							obj_t BgL_auxz00_5939;

							BgL_auxz00_5939 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 24808)), BGl_string2991z00zz__srfi4z00,
								BGl_string2992z00zz__srfi4z00, BgL_xz00_3434);
							FAILURE(BgL_auxz00_5939, BFALSE, BFALSE);
				}}
				return BGl_listzd2ze3s8vectorz31zz__srfi4z00(BgL_auxz00_5934);
			}
		}
	}



/* list->u8vector */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3u8vectorz31zz__srfi4z00(obj_t
		BgL_xz00_134)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 641 */
			{	/* Llib/srfi4.scm 641 */
				long BgL_lenz00_1475;

				BgL_lenz00_1475 = bgl_list_length(BgL_xz00_134);
				{	/* Llib/srfi4.scm 641 */
					obj_t BgL_vecz00_1476;

					BgL_vecz00_1476 = BGL_ALLOC_U8VECTOR(BgL_lenz00_1475);
					{	/* Llib/srfi4.scm 641 */

						{
							long BgL_iz00_2768;

							obj_t BgL_lz00_2769;

							BgL_iz00_2768 = ((long) 0);
							BgL_lz00_2769 = BgL_xz00_134;
						BgL_loopz00_2767:
							if ((BgL_iz00_2768 == BgL_lenz00_1475))
								{	/* Llib/srfi4.scm 641 */
									return BgL_vecz00_1476;
								}
							else
								{	/* Llib/srfi4.scm 641 */
									{	/* Llib/srfi4.scm 641 */
										obj_t BgL_arg2364z00_2775;

										BgL_arg2364z00_2775 = CAR(BgL_lz00_2769);
										{	/* Llib/srfi4.scm 641 */
											unsigned char BgL_auxz00_5949;

											BgL_auxz00_5949 =
												(unsigned char) CINT(BgL_arg2364z00_2775);
											BGL_U8VSET(BgL_vecz00_1476, BgL_iz00_2768,
												BgL_auxz00_5949);
										} BUNSPEC;
									}
									{
										obj_t BgL_lz00_5954;

										long BgL_iz00_5952;

										BgL_iz00_5952 = (BgL_iz00_2768 + ((long) 1));
										BgL_lz00_5954 = CDR(BgL_lz00_2769);
										BgL_lz00_2769 = BgL_lz00_5954;
										BgL_iz00_2768 = BgL_iz00_5952;
										goto BgL_loopz00_2767;
									}
								}
						}
					}
				}
			}
		}
	}



/* _list->u8vector */
	obj_t BGl__listzd2ze3u8vectorz31zz__srfi4z00(obj_t BgL_envz00_3435,
		obj_t BgL_xz00_3436)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 641 */
			{	/* Llib/srfi4.scm 641 */
				obj_t BgL_auxz00_5956;

				{	/* Llib/srfi4.scm 641 */
					bool_t BgL_testz00_5957;

					if (PAIRP(BgL_xz00_3436))
						{	/* Llib/srfi4.scm 641 */
							BgL_testz00_5957 = ((bool_t) 1);
						}
					else
						{	/* Llib/srfi4.scm 641 */
							BgL_testz00_5957 = NULLP(BgL_xz00_3436);
						}
					if (BgL_testz00_5957)
						{	/* Llib/srfi4.scm 641 */
							BgL_auxz00_5956 = BgL_xz00_3436;
						}
					else
						{
							obj_t BgL_auxz00_5961;

							BgL_auxz00_5961 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 24808)), BGl_string2993z00zz__srfi4z00,
								BGl_string2992z00zz__srfi4z00, BgL_xz00_3436);
							FAILURE(BgL_auxz00_5961, BFALSE, BFALSE);
				}}
				return BGl_listzd2ze3u8vectorz31zz__srfi4z00(BgL_auxz00_5956);
			}
		}
	}



/* list->s16vector */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3s16vectorz31zz__srfi4z00(obj_t
		BgL_xz00_135)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 641 */
			{	/* Llib/srfi4.scm 641 */
				long BgL_lenz00_1486;

				BgL_lenz00_1486 = bgl_list_length(BgL_xz00_135);
				{	/* Llib/srfi4.scm 641 */
					obj_t BgL_vecz00_1487;

					BgL_vecz00_1487 = BGL_ALLOC_S16VECTOR(BgL_lenz00_1486);
					{	/* Llib/srfi4.scm 641 */

						{
							long BgL_iz00_2807;

							obj_t BgL_lz00_2808;

							BgL_iz00_2807 = ((long) 0);
							BgL_lz00_2808 = BgL_xz00_135;
						BgL_loopz00_2806:
							if ((BgL_iz00_2807 == BgL_lenz00_1486))
								{	/* Llib/srfi4.scm 641 */
									return BgL_vecz00_1487;
								}
							else
								{	/* Llib/srfi4.scm 641 */
									{	/* Llib/srfi4.scm 641 */
										obj_t BgL_arg2369z00_2814;

										BgL_arg2369z00_2814 = CAR(BgL_lz00_2808);
										{	/* Llib/srfi4.scm 641 */
											short BgL_auxz00_5971;

											BgL_auxz00_5971 = (short) CINT(BgL_arg2369z00_2814);
											BGL_S16VSET(BgL_vecz00_1487, BgL_iz00_2807,
												BgL_auxz00_5971);
										} BUNSPEC;
									}
									{
										obj_t BgL_lz00_5976;

										long BgL_iz00_5974;

										BgL_iz00_5974 = (BgL_iz00_2807 + ((long) 1));
										BgL_lz00_5976 = CDR(BgL_lz00_2808);
										BgL_lz00_2808 = BgL_lz00_5976;
										BgL_iz00_2807 = BgL_iz00_5974;
										goto BgL_loopz00_2806;
									}
								}
						}
					}
				}
			}
		}
	}



/* _list->s16vector */
	obj_t BGl__listzd2ze3s16vectorz31zz__srfi4z00(obj_t BgL_envz00_3437,
		obj_t BgL_xz00_3438)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 641 */
			{	/* Llib/srfi4.scm 641 */
				obj_t BgL_auxz00_5978;

				{	/* Llib/srfi4.scm 641 */
					bool_t BgL_testz00_5979;

					if (PAIRP(BgL_xz00_3438))
						{	/* Llib/srfi4.scm 641 */
							BgL_testz00_5979 = ((bool_t) 1);
						}
					else
						{	/* Llib/srfi4.scm 641 */
							BgL_testz00_5979 = NULLP(BgL_xz00_3438);
						}
					if (BgL_testz00_5979)
						{	/* Llib/srfi4.scm 641 */
							BgL_auxz00_5978 = BgL_xz00_3438;
						}
					else
						{
							obj_t BgL_auxz00_5983;

							BgL_auxz00_5983 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 24808)), BGl_string2994z00zz__srfi4z00,
								BGl_string2992z00zz__srfi4z00, BgL_xz00_3438);
							FAILURE(BgL_auxz00_5983, BFALSE, BFALSE);
				}}
				return BGl_listzd2ze3s16vectorz31zz__srfi4z00(BgL_auxz00_5978);
			}
		}
	}



/* list->u16vector */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3u16vectorz31zz__srfi4z00(obj_t
		BgL_xz00_136)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 641 */
			{	/* Llib/srfi4.scm 641 */
				long BgL_lenz00_1497;

				BgL_lenz00_1497 = bgl_list_length(BgL_xz00_136);
				{	/* Llib/srfi4.scm 641 */
					obj_t BgL_vecz00_1498;

					BgL_vecz00_1498 = BGL_ALLOC_U16VECTOR(BgL_lenz00_1497);
					{	/* Llib/srfi4.scm 641 */

						{
							long BgL_iz00_2846;

							obj_t BgL_lz00_2847;

							BgL_iz00_2846 = ((long) 0);
							BgL_lz00_2847 = BgL_xz00_136;
						BgL_loopz00_2845:
							if ((BgL_iz00_2846 == BgL_lenz00_1497))
								{	/* Llib/srfi4.scm 641 */
									return BgL_vecz00_1498;
								}
							else
								{	/* Llib/srfi4.scm 641 */
									{	/* Llib/srfi4.scm 641 */
										obj_t BgL_arg2374z00_2853;

										BgL_arg2374z00_2853 = CAR(BgL_lz00_2847);
										{	/* Llib/srfi4.scm 641 */
											unsigned short BgL_auxz00_5993;

											BgL_auxz00_5993 =
												(unsigned short) CINT(BgL_arg2374z00_2853);
											BGL_U16VSET(BgL_vecz00_1498, BgL_iz00_2846,
												BgL_auxz00_5993);
										} BUNSPEC;
									}
									{
										obj_t BgL_lz00_5998;

										long BgL_iz00_5996;

										BgL_iz00_5996 = (BgL_iz00_2846 + ((long) 1));
										BgL_lz00_5998 = CDR(BgL_lz00_2847);
										BgL_lz00_2847 = BgL_lz00_5998;
										BgL_iz00_2846 = BgL_iz00_5996;
										goto BgL_loopz00_2845;
									}
								}
						}
					}
				}
			}
		}
	}



/* _list->u16vector */
	obj_t BGl__listzd2ze3u16vectorz31zz__srfi4z00(obj_t BgL_envz00_3439,
		obj_t BgL_xz00_3440)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 641 */
			{	/* Llib/srfi4.scm 641 */
				obj_t BgL_auxz00_6000;

				{	/* Llib/srfi4.scm 641 */
					bool_t BgL_testz00_6001;

					if (PAIRP(BgL_xz00_3440))
						{	/* Llib/srfi4.scm 641 */
							BgL_testz00_6001 = ((bool_t) 1);
						}
					else
						{	/* Llib/srfi4.scm 641 */
							BgL_testz00_6001 = NULLP(BgL_xz00_3440);
						}
					if (BgL_testz00_6001)
						{	/* Llib/srfi4.scm 641 */
							BgL_auxz00_6000 = BgL_xz00_3440;
						}
					else
						{
							obj_t BgL_auxz00_6005;

							BgL_auxz00_6005 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 24808)), BGl_string2995z00zz__srfi4z00,
								BGl_string2992z00zz__srfi4z00, BgL_xz00_3440);
							FAILURE(BgL_auxz00_6005, BFALSE, BFALSE);
				}}
				return BGl_listzd2ze3u16vectorz31zz__srfi4z00(BgL_auxz00_6000);
			}
		}
	}



/* list->s32vector */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3s32vectorz31zz__srfi4z00(obj_t
		BgL_xz00_137)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 641 */
			{	/* Llib/srfi4.scm 641 */
				long BgL_lenz00_1508;

				BgL_lenz00_1508 = bgl_list_length(BgL_xz00_137);
				{	/* Llib/srfi4.scm 641 */
					obj_t BgL_vecz00_1509;

					BgL_vecz00_1509 = BGL_ALLOC_S32VECTOR(BgL_lenz00_1508);
					{	/* Llib/srfi4.scm 641 */

						{
							long BgL_iz00_2885;

							obj_t BgL_lz00_2886;

							BgL_iz00_2885 = ((long) 0);
							BgL_lz00_2886 = BgL_xz00_137;
						BgL_loopz00_2884:
							if ((BgL_iz00_2885 == BgL_lenz00_1508))
								{	/* Llib/srfi4.scm 641 */
									return BgL_vecz00_1509;
								}
							else
								{	/* Llib/srfi4.scm 641 */
									{	/* Llib/srfi4.scm 641 */
										obj_t BgL_arg2379z00_2892;

										BgL_arg2379z00_2892 = CAR(BgL_lz00_2886);
										{	/* Llib/srfi4.scm 641 */
											long BgL_auxz00_6015;

											BgL_auxz00_6015 = (long) CINT(BgL_arg2379z00_2892);
											BGL_S32VSET(BgL_vecz00_1509, BgL_iz00_2885,
												BgL_auxz00_6015);
										} BUNSPEC;
									}
									{
										obj_t BgL_lz00_6020;

										long BgL_iz00_6018;

										BgL_iz00_6018 = (BgL_iz00_2885 + ((long) 1));
										BgL_lz00_6020 = CDR(BgL_lz00_2886);
										BgL_lz00_2886 = BgL_lz00_6020;
										BgL_iz00_2885 = BgL_iz00_6018;
										goto BgL_loopz00_2884;
									}
								}
						}
					}
				}
			}
		}
	}



/* _list->s32vector */
	obj_t BGl__listzd2ze3s32vectorz31zz__srfi4z00(obj_t BgL_envz00_3441,
		obj_t BgL_xz00_3442)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 641 */
			{	/* Llib/srfi4.scm 641 */
				obj_t BgL_auxz00_6022;

				{	/* Llib/srfi4.scm 641 */
					bool_t BgL_testz00_6023;

					if (PAIRP(BgL_xz00_3442))
						{	/* Llib/srfi4.scm 641 */
							BgL_testz00_6023 = ((bool_t) 1);
						}
					else
						{	/* Llib/srfi4.scm 641 */
							BgL_testz00_6023 = NULLP(BgL_xz00_3442);
						}
					if (BgL_testz00_6023)
						{	/* Llib/srfi4.scm 641 */
							BgL_auxz00_6022 = BgL_xz00_3442;
						}
					else
						{
							obj_t BgL_auxz00_6027;

							BgL_auxz00_6027 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 24808)), BGl_string2996z00zz__srfi4z00,
								BGl_string2992z00zz__srfi4z00, BgL_xz00_3442);
							FAILURE(BgL_auxz00_6027, BFALSE, BFALSE);
				}}
				return BGl_listzd2ze3s32vectorz31zz__srfi4z00(BgL_auxz00_6022);
			}
		}
	}



/* list->u32vector */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3u32vectorz31zz__srfi4z00(obj_t
		BgL_xz00_138)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 641 */
			{	/* Llib/srfi4.scm 641 */
				long BgL_lenz00_1519;

				BgL_lenz00_1519 = bgl_list_length(BgL_xz00_138);
				{	/* Llib/srfi4.scm 641 */
					obj_t BgL_vecz00_1520;

					BgL_vecz00_1520 = BGL_ALLOC_U32VECTOR(BgL_lenz00_1519);
					{	/* Llib/srfi4.scm 641 */

						{
							long BgL_iz00_2924;

							obj_t BgL_lz00_2925;

							BgL_iz00_2924 = ((long) 0);
							BgL_lz00_2925 = BgL_xz00_138;
						BgL_loopz00_2923:
							if ((BgL_iz00_2924 == BgL_lenz00_1519))
								{	/* Llib/srfi4.scm 641 */
									return BgL_vecz00_1520;
								}
							else
								{	/* Llib/srfi4.scm 641 */
									{	/* Llib/srfi4.scm 641 */
										obj_t BgL_arg2384z00_2931;

										BgL_arg2384z00_2931 = CAR(BgL_lz00_2925);
										{	/* Llib/srfi4.scm 641 */
											unsigned long BgL_auxz00_6037;

											BgL_auxz00_6037 =
												(unsigned long) CINT(BgL_arg2384z00_2931);
											BGL_U32VSET(BgL_vecz00_1520, BgL_iz00_2924,
												BgL_auxz00_6037);
										} BUNSPEC;
									}
									{
										obj_t BgL_lz00_6042;

										long BgL_iz00_6040;

										BgL_iz00_6040 = (BgL_iz00_2924 + ((long) 1));
										BgL_lz00_6042 = CDR(BgL_lz00_2925);
										BgL_lz00_2925 = BgL_lz00_6042;
										BgL_iz00_2924 = BgL_iz00_6040;
										goto BgL_loopz00_2923;
									}
								}
						}
					}
				}
			}
		}
	}



/* _list->u32vector */
	obj_t BGl__listzd2ze3u32vectorz31zz__srfi4z00(obj_t BgL_envz00_3443,
		obj_t BgL_xz00_3444)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 641 */
			{	/* Llib/srfi4.scm 641 */
				obj_t BgL_auxz00_6044;

				{	/* Llib/srfi4.scm 641 */
					bool_t BgL_testz00_6045;

					if (PAIRP(BgL_xz00_3444))
						{	/* Llib/srfi4.scm 641 */
							BgL_testz00_6045 = ((bool_t) 1);
						}
					else
						{	/* Llib/srfi4.scm 641 */
							BgL_testz00_6045 = NULLP(BgL_xz00_3444);
						}
					if (BgL_testz00_6045)
						{	/* Llib/srfi4.scm 641 */
							BgL_auxz00_6044 = BgL_xz00_3444;
						}
					else
						{
							obj_t BgL_auxz00_6049;

							BgL_auxz00_6049 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 24808)), BGl_string2997z00zz__srfi4z00,
								BGl_string2992z00zz__srfi4z00, BgL_xz00_3444);
							FAILURE(BgL_auxz00_6049, BFALSE, BFALSE);
				}}
				return BGl_listzd2ze3u32vectorz31zz__srfi4z00(BgL_auxz00_6044);
			}
		}
	}



/* list->s64vector */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3s64vectorz31zz__srfi4z00(obj_t
		BgL_xz00_139)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 641 */
			{	/* Llib/srfi4.scm 641 */
				long BgL_lenz00_1530;

				BgL_lenz00_1530 = bgl_list_length(BgL_xz00_139);
				{	/* Llib/srfi4.scm 641 */
					obj_t BgL_vecz00_1531;

					BgL_vecz00_1531 = BGL_ALLOC_S64VECTOR(BgL_lenz00_1530);
					{	/* Llib/srfi4.scm 641 */

						{
							long BgL_iz00_2963;

							obj_t BgL_lz00_2964;

							BgL_iz00_2963 = ((long) 0);
							BgL_lz00_2964 = BgL_xz00_139;
						BgL_loopz00_2962:
							if ((BgL_iz00_2963 == BgL_lenz00_1530))
								{	/* Llib/srfi4.scm 641 */
									return BgL_vecz00_1531;
								}
							else
								{	/* Llib/srfi4.scm 641 */
									{	/* Llib/srfi4.scm 641 */
										obj_t BgL_arg2389z00_2970;

										BgL_arg2389z00_2970 = CAR(BgL_lz00_2964);
										{	/* Llib/srfi4.scm 641 */
											BGL_LONGLONG_T BgL_auxz00_6059;

											BgL_auxz00_6059 = BLLONG_TO_LLONG(BgL_arg2389z00_2970);
											BGL_S64VSET(BgL_vecz00_1531, BgL_iz00_2963,
												BgL_auxz00_6059);
										}
										BUNSPEC;
									}
									{
										obj_t BgL_lz00_6064;

										long BgL_iz00_6062;

										BgL_iz00_6062 = (BgL_iz00_2963 + ((long) 1));
										BgL_lz00_6064 = CDR(BgL_lz00_2964);
										BgL_lz00_2964 = BgL_lz00_6064;
										BgL_iz00_2963 = BgL_iz00_6062;
										goto BgL_loopz00_2962;
									}
								}
						}
					}
				}
			}
		}
	}



/* _list->s64vector */
	obj_t BGl__listzd2ze3s64vectorz31zz__srfi4z00(obj_t BgL_envz00_3445,
		obj_t BgL_xz00_3446)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 641 */
			{	/* Llib/srfi4.scm 641 */
				obj_t BgL_auxz00_6066;

				{	/* Llib/srfi4.scm 641 */
					bool_t BgL_testz00_6067;

					if (PAIRP(BgL_xz00_3446))
						{	/* Llib/srfi4.scm 641 */
							BgL_testz00_6067 = ((bool_t) 1);
						}
					else
						{	/* Llib/srfi4.scm 641 */
							BgL_testz00_6067 = NULLP(BgL_xz00_3446);
						}
					if (BgL_testz00_6067)
						{	/* Llib/srfi4.scm 641 */
							BgL_auxz00_6066 = BgL_xz00_3446;
						}
					else
						{
							obj_t BgL_auxz00_6071;

							BgL_auxz00_6071 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 24808)), BGl_string2998z00zz__srfi4z00,
								BGl_string2992z00zz__srfi4z00, BgL_xz00_3446);
							FAILURE(BgL_auxz00_6071, BFALSE, BFALSE);
				}}
				return BGl_listzd2ze3s64vectorz31zz__srfi4z00(BgL_auxz00_6066);
			}
		}
	}



/* list->u64vector */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3u64vectorz31zz__srfi4z00(obj_t
		BgL_xz00_140)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 641 */
			{	/* Llib/srfi4.scm 641 */
				long BgL_lenz00_1541;

				BgL_lenz00_1541 = bgl_list_length(BgL_xz00_140);
				{	/* Llib/srfi4.scm 641 */
					obj_t BgL_vecz00_1542;

					BgL_vecz00_1542 = BGL_ALLOC_U64VECTOR(BgL_lenz00_1541);
					{	/* Llib/srfi4.scm 641 */

						{
							long BgL_iz00_3002;

							obj_t BgL_lz00_3003;

							BgL_iz00_3002 = ((long) 0);
							BgL_lz00_3003 = BgL_xz00_140;
						BgL_loopz00_3001:
							if ((BgL_iz00_3002 == BgL_lenz00_1541))
								{	/* Llib/srfi4.scm 641 */
									return BgL_vecz00_1542;
								}
							else
								{	/* Llib/srfi4.scm 641 */
									{	/* Llib/srfi4.scm 641 */
										obj_t BgL_arg2394z00_3009;

										BgL_arg2394z00_3009 = CAR(BgL_lz00_3003);
										{	/* Llib/srfi4.scm 641 */
											unsigned BGL_LONGLONG_T BgL_auxz00_6081;

											BgL_auxz00_6081 = BLLONG_TO_LLONG(BgL_arg2394z00_3009);
											BGL_U64VSET(BgL_vecz00_1542, BgL_iz00_3002,
												BgL_auxz00_6081);
										} BUNSPEC;
									}
									{
										obj_t BgL_lz00_6086;

										long BgL_iz00_6084;

										BgL_iz00_6084 = (BgL_iz00_3002 + ((long) 1));
										BgL_lz00_6086 = CDR(BgL_lz00_3003);
										BgL_lz00_3003 = BgL_lz00_6086;
										BgL_iz00_3002 = BgL_iz00_6084;
										goto BgL_loopz00_3001;
									}
								}
						}
					}
				}
			}
		}
	}



/* _list->u64vector */
	obj_t BGl__listzd2ze3u64vectorz31zz__srfi4z00(obj_t BgL_envz00_3447,
		obj_t BgL_xz00_3448)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 641 */
			{	/* Llib/srfi4.scm 641 */
				obj_t BgL_auxz00_6088;

				{	/* Llib/srfi4.scm 641 */
					bool_t BgL_testz00_6089;

					if (PAIRP(BgL_xz00_3448))
						{	/* Llib/srfi4.scm 641 */
							BgL_testz00_6089 = ((bool_t) 1);
						}
					else
						{	/* Llib/srfi4.scm 641 */
							BgL_testz00_6089 = NULLP(BgL_xz00_3448);
						}
					if (BgL_testz00_6089)
						{	/* Llib/srfi4.scm 641 */
							BgL_auxz00_6088 = BgL_xz00_3448;
						}
					else
						{
							obj_t BgL_auxz00_6093;

							BgL_auxz00_6093 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 24808)), BGl_string2999z00zz__srfi4z00,
								BGl_string2992z00zz__srfi4z00, BgL_xz00_3448);
							FAILURE(BgL_auxz00_6093, BFALSE, BFALSE);
				}}
				return BGl_listzd2ze3u64vectorz31zz__srfi4z00(BgL_auxz00_6088);
			}
		}
	}



/* list->f32vector */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3f32vectorz31zz__srfi4z00(obj_t
		BgL_xz00_141)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 641 */
			{	/* Llib/srfi4.scm 641 */
				long BgL_lenz00_1552;

				BgL_lenz00_1552 = bgl_list_length(BgL_xz00_141);
				{	/* Llib/srfi4.scm 641 */
					obj_t BgL_vecz00_1553;

					BgL_vecz00_1553 = BGL_ALLOC_F32VECTOR(BgL_lenz00_1552);
					{	/* Llib/srfi4.scm 641 */

						{
							long BgL_iz00_3041;

							obj_t BgL_lz00_3042;

							BgL_iz00_3041 = ((long) 0);
							BgL_lz00_3042 = BgL_xz00_141;
						BgL_loopz00_3040:
							if ((BgL_iz00_3041 == BgL_lenz00_1552))
								{	/* Llib/srfi4.scm 641 */
									return BgL_vecz00_1553;
								}
							else
								{	/* Llib/srfi4.scm 641 */
									{	/* Llib/srfi4.scm 641 */
										obj_t BgL_arg2399z00_3048;

										BgL_arg2399z00_3048 = CAR(BgL_lz00_3042);
										{	/* Llib/srfi4.scm 641 */
											float BgL_auxz00_6103;

											BgL_auxz00_6103 = REAL_TO_FLOAT(BgL_arg2399z00_3048);
											BGL_F32VSET(BgL_vecz00_1553, BgL_iz00_3041,
												BgL_auxz00_6103);
										} BUNSPEC;
									}
									{
										obj_t BgL_lz00_6108;

										long BgL_iz00_6106;

										BgL_iz00_6106 = (BgL_iz00_3041 + ((long) 1));
										BgL_lz00_6108 = CDR(BgL_lz00_3042);
										BgL_lz00_3042 = BgL_lz00_6108;
										BgL_iz00_3041 = BgL_iz00_6106;
										goto BgL_loopz00_3040;
									}
								}
						}
					}
				}
			}
		}
	}



/* _list->f32vector */
	obj_t BGl__listzd2ze3f32vectorz31zz__srfi4z00(obj_t BgL_envz00_3449,
		obj_t BgL_xz00_3450)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 641 */
			{	/* Llib/srfi4.scm 641 */
				obj_t BgL_auxz00_6110;

				{	/* Llib/srfi4.scm 641 */
					bool_t BgL_testz00_6111;

					if (PAIRP(BgL_xz00_3450))
						{	/* Llib/srfi4.scm 641 */
							BgL_testz00_6111 = ((bool_t) 1);
						}
					else
						{	/* Llib/srfi4.scm 641 */
							BgL_testz00_6111 = NULLP(BgL_xz00_3450);
						}
					if (BgL_testz00_6111)
						{	/* Llib/srfi4.scm 641 */
							BgL_auxz00_6110 = BgL_xz00_3450;
						}
					else
						{
							obj_t BgL_auxz00_6115;

							BgL_auxz00_6115 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 24808)), BGl_string3000z00zz__srfi4z00,
								BGl_string2992z00zz__srfi4z00, BgL_xz00_3450);
							FAILURE(BgL_auxz00_6115, BFALSE, BFALSE);
				}}
				return BGl_listzd2ze3f32vectorz31zz__srfi4z00(BgL_auxz00_6110);
			}
		}
	}



/* list->f64vector */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3f64vectorz31zz__srfi4z00(obj_t
		BgL_xz00_142)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 641 */
			{	/* Llib/srfi4.scm 641 */
				long BgL_lenz00_1563;

				BgL_lenz00_1563 = bgl_list_length(BgL_xz00_142);
				{	/* Llib/srfi4.scm 641 */
					obj_t BgL_vecz00_1564;

					BgL_vecz00_1564 = BGL_ALLOC_F64VECTOR(BgL_lenz00_1563);
					{	/* Llib/srfi4.scm 641 */

						{
							long BgL_iz00_3080;

							obj_t BgL_lz00_3081;

							BgL_iz00_3080 = ((long) 0);
							BgL_lz00_3081 = BgL_xz00_142;
						BgL_loopz00_3079:
							if ((BgL_iz00_3080 == BgL_lenz00_1563))
								{	/* Llib/srfi4.scm 641 */
									return BgL_vecz00_1564;
								}
							else
								{	/* Llib/srfi4.scm 641 */
									{	/* Llib/srfi4.scm 641 */
										obj_t BgL_arg2404z00_3087;

										BgL_arg2404z00_3087 = CAR(BgL_lz00_3081);
										{	/* Llib/srfi4.scm 641 */
											double BgL_auxz00_6125;

											BgL_auxz00_6125 = REAL_TO_DOUBLE(BgL_arg2404z00_3087);
											BGL_F64VSET(BgL_vecz00_1564, BgL_iz00_3080,
												BgL_auxz00_6125);
										} BUNSPEC;
									}
									{
										obj_t BgL_lz00_6130;

										long BgL_iz00_6128;

										BgL_iz00_6128 = (BgL_iz00_3080 + ((long) 1));
										BgL_lz00_6130 = CDR(BgL_lz00_3081);
										BgL_lz00_3081 = BgL_lz00_6130;
										BgL_iz00_3080 = BgL_iz00_6128;
										goto BgL_loopz00_3079;
									}
								}
						}
					}
				}
			}
		}
	}



/* _list->f64vector */
	obj_t BGl__listzd2ze3f64vectorz31zz__srfi4z00(obj_t BgL_envz00_3451,
		obj_t BgL_xz00_3452)
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 641 */
			{	/* Llib/srfi4.scm 641 */
				obj_t BgL_auxz00_6132;

				{	/* Llib/srfi4.scm 641 */
					bool_t BgL_testz00_6133;

					if (PAIRP(BgL_xz00_3452))
						{	/* Llib/srfi4.scm 641 */
							BgL_testz00_6133 = ((bool_t) 1);
						}
					else
						{	/* Llib/srfi4.scm 641 */
							BgL_testz00_6133 = NULLP(BgL_xz00_3452);
						}
					if (BgL_testz00_6133)
						{	/* Llib/srfi4.scm 641 */
							BgL_auxz00_6132 = BgL_xz00_3452;
						}
					else
						{
							obj_t BgL_auxz00_6137;

							BgL_auxz00_6137 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2876z00zz__srfi4z00,
								BINT(((long) 24808)), BGl_string3001z00zz__srfi4z00,
								BGl_string2992z00zz__srfi4z00, BgL_xz00_3452);
							FAILURE(BgL_auxz00_6137, BFALSE, BFALSE);
				}}
				return BGl_listzd2ze3f64vectorz31zz__srfi4z00(BgL_auxz00_6132);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__srfi4z00()
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__srfi4z00()
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__srfi4z00()
	{
		AN_OBJECT;
		{	/* Llib/srfi4.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string3002z00zz__srfi4z00));
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 81619416),
				BSTRING_TO_STRING(BGl_string3002z00zz__srfi4z00));
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 32372471),
				BSTRING_TO_STRING(BGl_string3002z00zz__srfi4z00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string3002z00zz__srfi4z00));
			return
				BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long)
					504082187), BSTRING_TO_STRING(BGl_string3002z00zz__srfi4z00));
		}
	}

#ifdef __cplusplus
}
#endif
