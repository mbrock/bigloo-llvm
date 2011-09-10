/*===========================================================================*/
/*   (Unsafe/intext.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Unsafe/intext.scm -indent -o objs/obj_u/Unsafe/intext.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */

	extern obj_t BGl_makezd2s64vectorzd2zz__srfi4z00(long, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_registerzd2processzd2serializa7ationz12zb5zz__intextz00(obj_t, obj_t);
	extern obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	static obj_t BGl_symbol3123z00zz__intextz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_registerzd2procedurezd2serializa7ationz12zb5zz__intextz00(obj_t, obj_t);
	static obj_t BGl_symbol3125z00zz__intextz00 = BUNSPEC;
	static obj_t BGl_za2customzd2serializa7ationza2z75zz__intextz00 = BUNSPEC;
	static obj_t BGl_symbol3131z00zz__intextz00 = BUNSPEC;
	extern bool_t bigloo_strcmp(obj_t, obj_t);
	extern obj_t BGl_makezd2u32vectorzd2zz__srfi4z00(long, obj_t);
	static obj_t BGl_symbol3135z00zz__intextz00 = BUNSPEC;
	static obj_t BGl_symbol3137z00zz__intextz00 = BUNSPEC;
	static obj_t BGl_symbol3139z00zz__intextz00 = BUNSPEC;
	static obj_t BGl_symbol3141z00zz__intextz00 = BUNSPEC;
	static obj_t BGl_symbol3143z00zz__intextz00 = BUNSPEC;
	static obj_t BGl_symbol3145z00zz__intextz00 = BUNSPEC;
	static obj_t BGl_symbol3147z00zz__intextz00 = BUNSPEC;
	static obj_t BGl_symbol3150z00zz__intextz00 = BUNSPEC;
	static obj_t BGl_symbol3152z00zz__intextz00 = BUNSPEC;
	extern obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_symbol3155z00zz__intextz00 = BUNSPEC;
	static obj_t BGl_symbol3163z00zz__intextz00 = BUNSPEC;
	static obj_t BGl_symbol3166z00zz__intextz00 = BUNSPEC;
	static obj_t BGl_symbol3168z00zz__intextz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t obj_to_string(obj_t);
	extern void weakptr_data_set(obj_t, obj_t);
	extern obj_t make_string_sans_fill(long);
	static obj_t BGl_requirezd2initializa7ationz75zz__intextz00 = BUNSPEC;
	extern obj_t ucs2_string_to_utf8_string(obj_t);
	static obj_t BGl__stringzd2ze3objz31zz__intextz00(obj_t, obj_t);
	extern obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_registerzd2customzd2serializa7ationz12zb5zz__intextz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		long);
	extern obj_t BGl_vectorzd2ze3tvectorz31zz__tvectorz00(obj_t, obj_t);
	extern obj_t BGl_makezd2s8vectorzd2zz__srfi4z00(long, obj_t);
	static obj_t BGl_zc3anonymousza32388ze3z83zz__intextz00(obj_t, obj_t, obj_t);
	static obj_t BGl__getzd2classzd2serializa7ationza7zz__intextz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__intextz00();
	extern obj_t BGl_objectz00zz__objectz00;
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32391ze3z83zz__intextz00(obj_t, obj_t, obj_t);
	static long BGl_readzd2siza7ez75zz__intextz00(obj_t, obj_t);
	static obj_t BGl_printzd2pairzd2zz__intextz00(obj_t, obj_t, obj_t);
	static obj_t BGl_za2opaquezd2ze3stringza2z31zz__intextz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32394ze3z83zz__intextz00(obj_t, obj_t, obj_t);
	static obj_t BGl_printzd2epairzd2zz__intextz00(obj_t, obj_t, obj_t);
	static obj_t BGl__getzd2opaquezd2serializa7ationza7zz__intextz00(obj_t);
	extern obj_t create_struct(obj_t, int);
	static obj_t BGl_vector3127z00zz__intextz00 = BUNSPEC;
	static obj_t BGl_printzd2customzd2zz__intextz00(obj_t, obj_t, obj_t);
	static obj_t BGl_printzd2cellzd2zz__intextz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2u16vectorzd2zz__srfi4z00(long, obj_t);
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_assvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__getzd2customzd2serializa7ationza7zz__intextz00(obj_t,
		obj_t);
	static obj_t BGl_za2stringzd2ze3processza2z31zz__intextz00 = BUNSPEC;
	static obj_t
		BGl__registerzd2customzd2serializa7ationz12zb5zz__intextz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2classzd2serializa7ationza7zz__intextz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__intextz00();
	static obj_t BGl_za2procedurezd2ze3stringza2z31zz__intextz00 = BUNSPEC;
	static bool_t BGl_za2epairzf3za2zf3zz__intextz00;
	static obj_t BGl_printzd2wordzd2zz__intextz00(obj_t, obj_t, long);
	extern obj_t BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		obj_t);
	static obj_t BGl__objectzd2serializa7erzd2de1915za7zz__intextz00(obj_t,
		obj_t);
	static obj_t BGl_putzd2markz12zc0zz__intextz00(obj_t, obj_t, bool_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__intextz00();
	extern obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	extern obj_t make_struct(obj_t, int, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t);
	static obj_t BGl_za2processzd2ze3stringza2z31zz__intextz00 = BUNSPEC;
	extern obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_readzd2stringzd2zz__intextz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__objzd2ze3stringz31zz__intextz00(obj_t, obj_t);
	static long BGl_readzd2wordzd2zz__intextz00(obj_t, obj_t, int);
	extern obj_t BGl_makezd2s32vectorzd2zz__srfi4z00(long, obj_t);
	extern obj_t BGl_makezd2f64vectorzd2zz__srfi4z00(long, obj_t);
	static obj_t BGl_printzd2tvectorzd2zz__intextz00(obj_t, obj_t, obj_t);
	static long BGl_markzd2objz12zc0zz__intextz00(obj_t, obj_t);
	static obj_t BGl_markz72z72zz__intextz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_registerzd2classzd2serializa7ationz12zb5zz__intextz00(obj_t, obj_t,
		obj_t);
	extern obj_t weakptr_data(obj_t);
	extern BgL_objectz00_bglt BGl_allocatezd2instancezd2zz__objectz00(obj_t);
	extern bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__intextz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t c_substring(obj_t, long, long);
	extern obj_t make_weakptr(obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__intextz00();
	extern obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t make_string(long, unsigned char);
	BGL_EXPORTED_DECL obj_t
		BGl_registerzd2opaquezd2serializa7ationz12zb5zz__intextz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2opaquezd2serializa7ationza7zz__intextz00();
	extern obj_t bgl_seconds_to_date(long);
	static obj_t
		BGl__registerzd2processzd2serializa7ationz12zb5zz__intextz00(obj_t, obj_t,
		obj_t);
	extern obj_t string_to_symbol(char *);
	static long BGl_za2maxzd2siza7ezd2wordza2za7zz__intextz00;
	static obj_t BGl_z12printzd2charszc0zz__intextz00(obj_t, obj_t, obj_t, long);
	extern obj_t BGl_tvectorzd2idzd2zz__tvectorz00(obj_t);
	static obj_t BGl_za2classzd2serializa7ationza2z75zz__intextz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32172ze3z83zz__intextz00(obj_t, obj_t, obj_t);
	static obj_t BGl_printzd2hvectorzd2zz__intextz00(obj_t, obj_t, obj_t);
	extern BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2customzd2serializa7ationza7zz__intextz00(obj_t);
	extern obj_t BGl_makezd2u64vectorzd2zz__srfi4z00(long, obj_t);
	static obj_t
		BGl__registerzd2procedurezd2serializa7ationz12zb5zz__intextz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2serializa7erz75zz__intextz00(BgL_objectz00_bglt);
	static double BGl_readzd2floatzd2zz__intextz00(obj_t, obj_t);
	extern obj_t BGl_makezd2s16vectorzd2zz__srfi4z00(long, obj_t);
	static obj_t BGl__getzd2procedurezd2serializa7ationza7zz__intextz00(obj_t);
	extern obj_t make_vector(int, obj_t);
	static obj_t BGl_z12printzd2markupzc0zz__intextz00(obj_t, obj_t,
		unsigned char);
	static long BGl_readzd2longzd2wordz00zz__intextz00(obj_t, obj_t, int);
	static obj_t BGl_printzd2itemzd2zz__intextz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t blit_string(obj_t, long, obj_t, long, long);
	extern BGL_LONGLONG_T
		BGl_stringzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	extern obj_t string_to_bstring(char *);
	extern obj_t BGl_stringzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		long);
	static obj_t BGl__registerzd2classzd2serializa7ationz12zb5zz__intextz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31951ze3z83zz__intextz00(obj_t, obj_t);
	static obj_t BGl_printzd2objzd2zz__intextz00(obj_t, long, obj_t);
	extern obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31952ze3z83zz__intextz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2objzd2stringzd2modez12zc0zz__intextz00(obj_t);
	static obj_t BGl_zc3anonymousza31953ze3z83zz__intextz00(obj_t, obj_t);
	static obj_t
		BGl__registerzd2opaquezd2serializa7ationz12zb5zz__intextz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza31954ze3z83zz__intextz00(obj_t, obj_t);
	static obj_t BGl_za2stringzd2ze3procedureza2z31zz__intextz00 = BUNSPEC;
	static obj_t BGl_readzd2itemzd2zz__intextz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31955ze3z83zz__intextz00(obj_t, obj_t);
	static bool_t BGl_printzd2structzd2zz__intextz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		unsigned char, obj_t);
	static obj_t BGl_zc3anonymousza31956ze3z83zz__intextz00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2classesza2z00zz__objectz00;
	static obj_t BGl__setzd2objzd2stringzd2modez12zc0zz__intextz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t string_to_obj(obj_t);
	extern ucs2_t BGl_integerzd2ze3ucs2z31zz__ucs2z00(int);
	static obj_t BGl_printzd2objectzd2zz__intextz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32345ze3z83zz__intextz00(obj_t, obj_t, obj_t);
	static obj_t BGl_checkzd2bufferz12zc0zz__intextz00(obj_t, obj_t, long);
	extern obj_t utf8_string_to_ucs2_string(obj_t);
	static obj_t BGl_zc3anonymousza32483ze3z83zz__intextz00(obj_t, obj_t);
	extern long BGl_classzd2hashzd2zz__objectz00(obj_t);
	extern long BGl_stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	extern obj_t string_append(obj_t, obj_t);
	static obj_t BGl__objectzd2serializa7erz75zz__intextz00(obj_t, obj_t);
	extern obj_t BGl_tvectorzd2ze3vectorz31zz__tvectorz00(obj_t);
	static obj_t BGl_zc3anonymousza32349ze3z83zz__intextz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2f32vectorzd2zz__srfi4z00(long, obj_t);
	static long BGl_markedzd2pairzd2lengthz00zz__intextz00(obj_t, obj_t);
	extern obj_t
		BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, obj_t);
	static obj_t BGl_printzd2weakptrzd2zz__intextz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2u8vectorzd2zz__srfi4z00(long, obj_t);
	extern obj_t real_to_string(double);
	static bool_t BGl_printzd2wordzf2siza7ez87zz__intextz00(obj_t, obj_t, obj_t,
		obj_t);
	extern long bgl_date_to_seconds(obj_t);
	extern obj_t string_to_keyword(char *);
	static obj_t BGl_za2stringzd2ze3opaqueza2z31zz__intextz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2procedurezd2serializa7ationza7zz__intextz00();
	static obj_t BGl_zc3anonymousza32365ze3z83zz__intextz00(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__intextz00();
	static long BGl_siza7ezd2ofzd2wordza7zz__intextz00(obj_t);
	static obj_t BGl_printzd2vectorzd2zz__intextz00(obj_t, obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_registerzd2opaquezd2serializa7ationz12zd2envz67zz__intextz00,
		BgL_bgl__registerza7d2opaq3183za7,
		BGl__registerzd2opaquezd2serializa7ationz12zb5zz__intextz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_objectzd2serializa7erzd2de1915zd2envz75zz__intextz00,
		BgL_bgl__objectza7d2serial3184za7,
		BGl__objectzd2serializa7erzd2de1915za7zz__intextz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_objectzd2serializa7erzd2envza7zz__intextz00,
		BgL_bgl__objectza7d2serial3185za7,
		BGl__objectzd2serializa7erz75zz__intextz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzd2ze3objzd2envze3zz__intextz00,
		BgL_bgl__stringza7d2za7e3obj3186z00, BGl__stringzd2ze3objz31zz__intextz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_registerzd2classzd2serializa7ationz12zd2envz67zz__intextz00,
		BgL_bgl__registerza7d2clas3187za7,
		BGl__registerzd2classzd2serializa7ationz12zb5zz__intextz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_registerzd2procedurezd2serializa7ationz12zd2envz67zz__intextz00,
		BgL_bgl__registerza7d2proc3188za7,
		BGl__registerzd2procedurezd2serializa7ationz12zb5zz__intextz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2objzd2stringzd2modez12zd2envz12zz__intextz00,
		BgL_bgl__setza7d2objza7d2str3189z00,
		BGl__setzd2objzd2stringzd2modez12zc0zz__intextz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2classzd2serializa7ationzd2envz75zz__intextz00,
		BgL_bgl__getza7d2classza7d2s3190z00,
		BGl__getzd2classzd2serializa7ationza7zz__intextz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3110z00zz__intextz00,
		BgL_bgl_za7c3anonymousza7a313191z00,
		BGl_zc3anonymousza31952ze3z83zz__intextz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3109z00zz__intextz00,
		BgL_bgl_za7c3anonymousza7a313192z00,
		BGl_zc3anonymousza31951ze3z83zz__intextz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3111z00zz__intextz00,
		BgL_bgl_za7c3anonymousza7a313193z00,
		BGl_zc3anonymousza31953ze3z83zz__intextz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3112z00zz__intextz00,
		BgL_bgl_za7c3anonymousza7a313194z00,
		BGl_zc3anonymousza31954ze3z83zz__intextz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3113z00zz__intextz00,
		BgL_bgl_za7c3anonymousza7a313195z00,
		BGl_zc3anonymousza31955ze3z83zz__intextz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3114z00zz__intextz00,
		BgL_bgl_za7c3anonymousza7a313196z00,
		BGl_zc3anonymousza31956ze3z83zz__intextz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3162z00zz__intextz00,
		BgL_bgl_za7c3anonymousza7a323197z00,
		BGl_zc3anonymousza32172ze3z83zz__intextz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3115z00zz__intextz00,
		BgL_bgl_string3115za700za7za7_3198za7, "string->obj", 11);
	      DEFINE_STRING(BGl_string3116z00zz__intextz00,
		BgL_bgl_string3116za700za7za7_3199za7, "Can't intern opaque item", 24);
	      DEFINE_STRING(BGl_string3117z00zz__intextz00,
		BgL_bgl_string3117za700za7za7_3200za7, "obj->string", 11);
	      DEFINE_STRING(BGl_string3118z00zz__intextz00,
		BgL_bgl_string3118za700za7za7_3201za7, "can't extern opaque", 19);
	      DEFINE_STRING(BGl_string3120z00zz__intextz00,
		BgL_bgl_string3120za700za7za7_3202za7, "can't extern process", 20);
	      DEFINE_STRING(BGl_string3119z00zz__intextz00,
		BgL_bgl_string3119za700za7za7_3203za7, "Can't intern process item", 25);
	      DEFINE_STRING(BGl_string3121z00zz__intextz00,
		BgL_bgl_string3121za700za7za7_3204za7, "Can't intern procedure item", 27);
	      DEFINE_STRING(BGl_string3122z00zz__intextz00,
		BgL_bgl_string3122za700za7za7_3205za7, "can't extern procedure", 22);
	      DEFINE_STRING(BGl_string3124z00zz__intextz00,
		BgL_bgl_string3124za700za7za7_3206za7, "epair", 5);
	      DEFINE_STRING(BGl_string3126z00zz__intextz00,
		BgL_bgl_string3126za700za7za7_3207za7, "pair", 4);
	      DEFINE_STRING(BGl_string3128z00zz__intextz00,
		BgL_bgl_string3128za700za7za7_3208za7, "+nan.0", 6);
	      DEFINE_STRING(BGl_string3130z00zz__intextz00,
		BgL_bgl_string3130za700za7za7_3209za7, "-inf.0", 6);
	      DEFINE_STRING(BGl_string3129z00zz__intextz00,
		BgL_bgl_string3129za700za7za7_3210za7, "+inf.0", 6);
	      DEFINE_STRING(BGl_string3132z00zz__intextz00,
		BgL_bgl_string3132za700za7za7_3211za7, "Cannot find class unserializer",
		30);
	      DEFINE_STRING(BGl_string3133z00zz__intextz00,
		BgL_bgl_string3133za700za7za7_3212za7, "corrupted custom", 16);
	      DEFINE_STRING(BGl_string3134z00zz__intextz00,
		BgL_bgl_string3134za700za7za7_3213za7, "corrupted class", 15);
	      DEFINE_STRING(BGl_string3136z00zz__intextz00,
		BgL_bgl_string3136za700za7za7_3214za7, "s8", 2);
	      DEFINE_STRING(BGl_string3138z00zz__intextz00,
		BgL_bgl_string3138za700za7za7_3215za7, "u8", 2);
	      DEFINE_STRING(BGl_string3140z00zz__intextz00,
		BgL_bgl_string3140za700za7za7_3216za7, "s16", 3);
	      DEFINE_STRING(BGl_string3142z00zz__intextz00,
		BgL_bgl_string3142za700za7za7_3217za7, "u16", 3);
	      DEFINE_STRING(BGl_string3144z00zz__intextz00,
		BgL_bgl_string3144za700za7za7_3218za7, "s32", 3);
	      DEFINE_STRING(BGl_string3146z00zz__intextz00,
		BgL_bgl_string3146za700za7za7_3219za7, "u32", 3);
	      DEFINE_STRING(BGl_string3148z00zz__intextz00,
		BgL_bgl_string3148za700za7za7_3220za7, "s64", 3);
	      DEFINE_STRING(BGl_string3151z00zz__intextz00,
		BgL_bgl_string3151za700za7za7_3221za7, "u64", 3);
	      DEFINE_STRING(BGl_string3153z00zz__intextz00,
		BgL_bgl_string3153za700za7za7_3222za7, "f32", 3);
	      DEFINE_STRING(BGl_string3156z00zz__intextz00,
		BgL_bgl_string3156za700za7za7_3223za7, "f64", 3);
	      DEFINE_STRING(BGl_string3157z00zz__intextz00,
		BgL_bgl_string3157za700za7za7_3224za7, "Cannot find custom unserializer",
		31);
	      DEFINE_STRING(BGl_string3158z00zz__intextz00,
		BgL_bgl_string3158za700za7za7_3225za7, "Can't unserialize custom object",
		31);
	      DEFINE_STRING(BGl_string3160z00zz__intextz00,
		BgL_bgl_string3160za700za7za7_3226za7, "_string->obj", 12);
	      DEFINE_STRING(BGl_string3159z00zz__intextz00,
		BgL_bgl_string3159za700za7za7_3227za7,
		"/tmp/bigloo/runtime/Unsafe/intext.scm", 37);
	      DEFINE_STRING(BGl_string3161z00zz__intextz00,
		BgL_bgl_string3161za700za7za7_3228za7, "bstring", 7);
	      DEFINE_STRING(BGl_string3164z00zz__intextz00,
		BgL_bgl_string3164za700za7za7_3229za7, "mark", 4);
	      DEFINE_STRING(BGl_string3165z00zz__intextz00,
		BgL_bgl_string3165za700za7za7_3230za7, "Unknown object", 14);
	      DEFINE_STRING(BGl_string3167z00zz__intextz00,
		BgL_bgl_string3167za700za7za7_3231za7, "objcustom", 9);
	      DEFINE_STRING(BGl_string3170z00zz__intextz00,
		BgL_bgl_string3170za700za7za7_3232za7, "_register-custom-serialization!",
		31);
	      DEFINE_STRING(BGl_string3169z00zz__intextz00,
		BgL_bgl_string3169za700za7za7_3233za7, "Cannot find custom serializer", 29);
	      DEFINE_STRING(BGl_string3171z00zz__intextz00,
		BgL_bgl_string3171za700za7za7_3234za7, "procedure", 9);
	      DEFINE_STRING(BGl_string3172z00zz__intextz00,
		BgL_bgl_string3172za700za7za7_3235za7, "_get-custom-serialization", 25);
	      DEFINE_STRING(BGl_string3173z00zz__intextz00,
		BgL_bgl_string3173za700za7za7_3236za7, "_register-procedure-serialization!",
		34);
	      DEFINE_STRING(BGl_string3174z00zz__intextz00,
		BgL_bgl_string3174za700za7za7_3237za7, "_register-process-serialization!",
		32);
	      DEFINE_STRING(BGl_string3175z00zz__intextz00,
		BgL_bgl_string3175za700za7za7_3238za7, "_register-opaque-serialization!",
		31);
	      DEFINE_STRING(BGl_string3176z00zz__intextz00,
		BgL_bgl_string3176za700za7za7_3239za7, "-serializer", 11);
	      DEFINE_STRING(BGl_string3177z00zz__intextz00,
		BgL_bgl_string3177za700za7za7_3240za7, "_register-class-serialization!",
		30);
	      DEFINE_STRING(BGl_string3178z00zz__intextz00,
		BgL_bgl_string3178za700za7za7_3241za7, "object-serializer", 17);
	      DEFINE_STRING(BGl_string3180z00zz__intextz00,
		BgL_bgl_string3180za700za7za7_3242za7, "object", 6);
	      DEFINE_STRING(BGl_string3179z00zz__intextz00,
		BgL_bgl_string3179za700za7za7_3243za7, "_object-serializer", 18);
	      DEFINE_STRING(BGl_string3181z00zz__intextz00,
		BgL_bgl_string3181za700za7za7_3244za7, "_object-serializer-de1915", 25);
	      DEFINE_STRING(BGl_string3182z00zz__intextz00,
		BgL_bgl_string3182za700za7za7_3245za7, "__intext", 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_registerzd2customzd2serializa7ationz12zd2envz67zz__intextz00,
		BgL_bgl__registerza7d2cust3246za7,
		BGl__registerzd2customzd2serializa7ationz12zb5zz__intextz00, 0L, BUNSPEC,
		3);
	      DEFINE_REAL(BGl_real3154z00zz__intextz00,
		BgL_bgl_real3154za700za7za7__i3247za7, 0.0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2procedurezd2serializa7ationzd2envz75zz__intextz00,
		BgL_bgl__getza7d2procedure3248za7,
		BGl__getzd2procedurezd2serializa7ationza7zz__intextz00, 0L, BUNSPEC, 0);
	      DEFINE_LLONG(BGl_llong3149z00zz__intextz00,
		BgL_bgl_llong3149za700za7za7__3249za7, ((BGL_LONGLONG_T) 0));
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2opaquezd2serializa7ationzd2envz75zz__intextz00,
		BgL_bgl__getza7d2opaqueza7d23250z00,
		BGl__getzd2opaquezd2serializa7ationza7zz__intextz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_registerzd2processzd2serializa7ationz12zd2envz67zz__intextz00,
		BgL_bgl__registerza7d2proc3251za7,
		BGl__registerzd2processzd2serializa7ationz12zb5zz__intextz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2customzd2serializa7ationzd2envz75zz__intextz00,
		BgL_bgl__getza7d2customza7d23252z00,
		BGl__getzd2customzd2serializa7ationza7zz__intextz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_objzd2ze3stringzd2envze3zz__intextz00,
		BgL_bgl__objza7d2za7e3string3253z00, BGl__objzd2ze3stringz31zz__intextz00,
		0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__intextz00(long
		BgL_checksumz00_5856, char *BgL_fromz00_5857)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__intextz00))
				{
					BGl_requirezd2initializa7ationz75zz__intextz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__intextz00();
					BGl_importedzd2moduleszd2initz00zz__intextz00();
					BGl_genericzd2initzd2zz__intextz00();
					BGl_toplevelzd2initzd2zz__intextz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__intextz00()
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 20 */
			BGl_symbol3123z00zz__intextz00 =
				bstring_to_symbol(BGl_string3124z00zz__intextz00);
			BGl_symbol3125z00zz__intextz00 =
				bstring_to_symbol(BGl_string3126z00zz__intextz00);
			BGl_vector3127z00zz__intextz00 =
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BNIL);
			BGl_symbol3131z00zz__intextz00 =
				bstring_to_symbol(BGl_string3115z00zz__intextz00);
			BGl_symbol3135z00zz__intextz00 =
				bstring_to_symbol(BGl_string3136z00zz__intextz00);
			BGl_symbol3137z00zz__intextz00 =
				bstring_to_symbol(BGl_string3138z00zz__intextz00);
			BGl_symbol3139z00zz__intextz00 =
				bstring_to_symbol(BGl_string3140z00zz__intextz00);
			BGl_symbol3141z00zz__intextz00 =
				bstring_to_symbol(BGl_string3142z00zz__intextz00);
			BGl_symbol3143z00zz__intextz00 =
				bstring_to_symbol(BGl_string3144z00zz__intextz00);
			BGl_symbol3145z00zz__intextz00 =
				bstring_to_symbol(BGl_string3146z00zz__intextz00);
			BGl_symbol3147z00zz__intextz00 =
				bstring_to_symbol(BGl_string3148z00zz__intextz00);
			BGl_symbol3150z00zz__intextz00 =
				bstring_to_symbol(BGl_string3151z00zz__intextz00);
			BGl_symbol3152z00zz__intextz00 =
				bstring_to_symbol(BGl_string3153z00zz__intextz00);
			BGl_symbol3155z00zz__intextz00 =
				bstring_to_symbol(BGl_string3156z00zz__intextz00);
			BGl_symbol3163z00zz__intextz00 =
				bstring_to_symbol(BGl_string3164z00zz__intextz00);
			BGl_symbol3166z00zz__intextz00 =
				bstring_to_symbol(BGl_string3167z00zz__intextz00);
			return (BGl_symbol3168z00zz__intextz00 =
				bstring_to_symbol(BGl_string3117z00zz__intextz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__intextz00()
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 20 */
			BGl_za2epairzf3za2zf3zz__intextz00 = ((bool_t) 1);
			BGl_za2maxzd2siza7ezd2wordza2za7zz__intextz00 = sizeof(long);
			BGl_za2customzd2serializa7ationza2z75zz__intextz00 = BNIL;
			BGl_za2procedurezd2ze3stringza2z31zz__intextz00 =
				BGl_proc3109z00zz__intextz00;
			BGl_za2stringzd2ze3procedureza2z31zz__intextz00 =
				BGl_proc3110z00zz__intextz00;
			BGl_za2processzd2ze3stringza2z31zz__intextz00 =
				BGl_proc3111z00zz__intextz00;
			BGl_za2stringzd2ze3processza2z31zz__intextz00 =
				BGl_proc3112z00zz__intextz00;
			BGl_za2opaquezd2ze3stringza2z31zz__intextz00 =
				BGl_proc3113z00zz__intextz00;
			BGl_za2stringzd2ze3opaqueza2z31zz__intextz00 =
				BGl_proc3114z00zz__intextz00;
			return (BGl_za2classzd2serializa7ationza2z75zz__intextz00 =
				BNIL, BUNSPEC);
		}
	}



/* <anonymous:1956> */
	obj_t BGl_zc3anonymousza31956ze3z83zz__intextz00(obj_t BgL_envz00_5449,
		obj_t BgL_stringz00_5450)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1168 */
			{
				obj_t BgL_stringz00_1079;

				BgL_stringz00_1079 = BgL_stringz00_5450;
				return
					BGl_errorz00zz__errorz00(BGl_string3115z00zz__intextz00,
					BGl_string3116z00zz__intextz00, BgL_stringz00_1079);
			}
		}
	}



/* <anonymous:1955> */
	obj_t BGl_zc3anonymousza31955ze3z83zz__intextz00(obj_t BgL_envz00_5451,
		obj_t BgL_itemz00_5452)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1161 */
			{
				obj_t BgL_itemz00_1077;

				BgL_itemz00_1077 = BgL_itemz00_5452;
				return
					BGl_errorz00zz__errorz00(BGl_string3117z00zz__intextz00,
					BGl_string3118z00zz__intextz00, BgL_itemz00_1077);
			}
		}
	}



/* <anonymous:1954> */
	obj_t BGl_zc3anonymousza31954ze3z83zz__intextz00(obj_t BgL_envz00_5453,
		obj_t BgL_stringz00_5454)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1141 */
			{
				obj_t BgL_stringz00_1075;

				BgL_stringz00_1075 = BgL_stringz00_5454;
				return
					BGl_errorz00zz__errorz00(BGl_string3115z00zz__intextz00,
					BGl_string3119z00zz__intextz00, BgL_stringz00_1075);
			}
		}
	}



/* <anonymous:1953> */
	obj_t BGl_zc3anonymousza31953ze3z83zz__intextz00(obj_t BgL_envz00_5455,
		obj_t BgL_itemz00_5456)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1134 */
			{
				obj_t BgL_itemz00_1073;

				BgL_itemz00_1073 = BgL_itemz00_5456;
				return
					BGl_errorz00zz__errorz00(BGl_string3117z00zz__intextz00,
					BGl_string3120z00zz__intextz00, BgL_itemz00_1073);
			}
		}
	}



/* <anonymous:1952> */
	obj_t BGl_zc3anonymousza31952ze3z83zz__intextz00(obj_t BgL_envz00_5457,
		obj_t BgL_stringz00_5458)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1114 */
			{
				obj_t BgL_stringz00_1071;

				BgL_stringz00_1071 = BgL_stringz00_5458;
				return
					BGl_errorz00zz__errorz00(BGl_string3115z00zz__intextz00,
					BGl_string3121z00zz__intextz00, BgL_stringz00_1071);
			}
		}
	}



/* <anonymous:1951> */
	obj_t BGl_zc3anonymousza31951ze3z83zz__intextz00(obj_t BgL_envz00_5459,
		obj_t BgL_itemz00_5460)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1107 */
			{
				obj_t BgL_itemz00_1069;

				BgL_itemz00_1069 = BgL_itemz00_5460;
				return
					BGl_errorz00zz__errorz00(BGl_string3117z00zz__intextz00,
					BGl_string3122z00zz__intextz00, BgL_itemz00_1069);
			}
		}
	}



/* set-obj-string-mode! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2objzd2stringzd2modez12zc0zz__intextz00(obj_t
		BgL_modez00_1)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 135 */
			if ((BgL_modez00_1 == BGl_symbol3123z00zz__intextz00))
				{	/* Unsafe/intext.scm 136 */
					return (BGl_za2epairzf3za2zf3zz__intextz00 = ((bool_t) 1), BUNSPEC);
				}
			else
				{	/* Unsafe/intext.scm 136 */
					if ((BgL_modez00_1 == BGl_symbol3125z00zz__intextz00))
						{	/* Unsafe/intext.scm 136 */
							return (BGl_za2epairzf3za2zf3zz__intextz00 =
								((bool_t) 0), BUNSPEC);
						}
					else
						{	/* Unsafe/intext.scm 136 */
							return BUNSPEC;
						}
				}
		}
	}



/* _set-obj-string-mode! */
	obj_t BGl__setzd2objzd2stringzd2modez12zc0zz__intextz00(obj_t BgL_envz00_5461,
		obj_t BgL_modez00_5462)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 135 */
			return BGl_setzd2objzd2stringzd2modez12zc0zz__intextz00(BgL_modez00_5462);
		}
	}



/* string->obj */
	BGL_EXPORTED_DEF obj_t string_to_obj(obj_t BgL_sz00_2)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 145 */
			{	/* Unsafe/intext.scm 504 */
				obj_t BgL_za2pointerza2z00_1084;

				obj_t BgL_za2definitionsza2z00_1085;

				obj_t BgL_za2definingza2z00_1086;

				{	/* Unsafe/intext.scm 504 */
					obj_t BgL_cellvalz00_5893;

					BgL_cellvalz00_5893 = BINT(((long) 0));
					BgL_za2pointerza2z00_1084 = MAKE_CELL(BgL_cellvalz00_5893);
				}
				BgL_za2definitionsza2z00_1085 =
					MAKE_CELL(BGl_vector3127z00zz__intextz00);
				BgL_za2definingza2z00_1086 = MAKE_CELL(BFALSE);
				{	/* Unsafe/intext.scm 504 */
					unsigned char BgL_dz00_1118;

					BgL_dz00_1118 =
						STRING_REF(BgL_sz00_2,
						(long) CINT(CELL_REF(BgL_za2pointerza2z00_1084)));
					if ((BgL_dz00_1118 == ((unsigned char) 'c')))
						{	/* Unsafe/intext.scm 505 */
							{	/* Unsafe/intext.scm 506 */
								obj_t BgL_auxz00_5813;

								BgL_auxz00_5813 =
									BINT(
									((long) CINT(CELL_REF(BgL_za2pointerza2z00_1084)) +
										((long) 1)));
								CELL_SET(BgL_za2pointerza2z00_1084, BgL_auxz00_5813);
							}
							{	/* Unsafe/intext.scm 507 */
								obj_t BgL_auxz00_5815;

								{	/* Unsafe/intext.scm 507 */
									long BgL_arg1960z00_1120;

									{	/* Unsafe/intext.scm 507 */
										long BgL_res3007z00_2884;

										{	/* Unsafe/intext.scm 507 */
											long BgL_sza7za7_2877;

											BgL_sza7za7_2877 =
												(STRING_REF(BgL_sz00_2,
													(long) CINT(CELL_REF(BgL_za2pointerza2z00_1084))));
											{	/* Unsafe/intext.scm 507 */
												obj_t BgL_auxz00_5814;

												BgL_auxz00_5814 =
													BINT(
													((long) CINT(CELL_REF(BgL_za2pointerza2z00_1084)) +
														((long) 1)));
												CELL_SET(BgL_za2pointerza2z00_1084, BgL_auxz00_5814);
											}
											BgL_res3007z00_2884 =
												BGl_readzd2wordzd2zz__intextz00
												(BgL_za2pointerza2z00_1084, BgL_sz00_2,
												(int) (BgL_sza7za7_2877));
										}
										BgL_arg1960z00_1120 = BgL_res3007z00_2884;
									}
									BgL_auxz00_5815 =
										make_vector((int) (BgL_arg1960z00_1120), BUNSPEC);
								}
								CELL_SET(BgL_za2definitionsza2z00_1085, BgL_auxz00_5815);
						}}
					else
						{	/* Unsafe/intext.scm 505 */
							BFALSE;
						}
				}
				return
					BGl_readzd2itemzd2zz__intextz00(BgL_za2pointerza2z00_1084, BgL_sz00_2,
					BgL_za2definitionsza2z00_1085, BgL_za2definingza2z00_1086);
			}
		}
	}



/* read-float */
	double BGl_readzd2floatzd2zz__intextz00(obj_t BgL_za2pointerza2z00_5763,
		obj_t BgL_sz00_1124)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 165 */
			{	/* Unsafe/intext.scm 162 */
				long BgL_sza7za7_1126;

				{	/* Unsafe/intext.scm 162 */
					long BgL_res3010z00_2903;

					{	/* Unsafe/intext.scm 162 */
						long BgL_sza7za7_2896;

						{	/* Unsafe/intext.scm 162 */
							unsigned char BgL_auxz00_5913;

							{	/* Unsafe/intext.scm 162 */
								long BgL_kz00_2899;

								BgL_kz00_2899 =
									(long) CINT(CELL_REF(BgL_za2pointerza2z00_5763));
								BgL_auxz00_5913 = STRING_REF(BgL_sz00_1124, BgL_kz00_2899);
							}
							BgL_sza7za7_2896 = (BgL_auxz00_5913);
						}
						{	/* Unsafe/intext.scm 162 */
							obj_t BgL_auxz00_5764;

							{	/* Unsafe/intext.scm 162 */
								long BgL_za71za7_2901;

								BgL_za71za7_2901 =
									(long) CINT(CELL_REF(BgL_za2pointerza2z00_5763));
								BgL_auxz00_5764 = BINT((BgL_za71za7_2901 + ((long) 1)));
							}
							CELL_SET(BgL_za2pointerza2z00_5763, BgL_auxz00_5764);
						}
						BgL_res3010z00_2903 =
							BGl_readzd2wordzd2zz__intextz00(BgL_za2pointerza2z00_5763,
							BgL_sz00_1124, (int) (BgL_sza7za7_2896));
					}
					BgL_sza7za7_1126 = BgL_res3010z00_2903;
				}
				{	/* Unsafe/intext.scm 162 */
					double BgL_resz00_1127;

					{	/* Unsafe/intext.scm 163 */
						obj_t BgL_arg1965z00_1128;

						{	/* Unsafe/intext.scm 163 */
							long BgL_arg1966z00_1129;

							{	/* Unsafe/intext.scm 163 */
								long BgL_za71za7_2904;

								BgL_za71za7_2904 =
									(long) CINT(CELL_REF(BgL_za2pointerza2z00_5763));
								BgL_arg1966z00_1129 = (BgL_za71za7_2904 + BgL_sza7za7_1126);
							}
							{	/* Unsafe/intext.scm 163 */
								long BgL_startz00_2907;

								BgL_startz00_2907 =
									(long) CINT(CELL_REF(BgL_za2pointerza2z00_5763));
								BgL_arg1965z00_1128 =
									c_substring(BgL_sz00_1124, BgL_startz00_2907,
									BgL_arg1966z00_1129);
						}}
						{	/* Unsafe/intext.scm 163 */
							double BgL_res3011z00_2919;

							{	/* Unsafe/intext.scm 163 */
								char *BgL_stringz00_2909;

								BgL_stringz00_2909 = BSTRING_TO_STRING(BgL_arg1965z00_1128);
								if (bigloo_strcmp(string_to_bstring(BgL_stringz00_2909),
										BGl_string3128z00zz__intextz00))
									{	/* Unsafe/intext.scm 163 */
										BgL_res3011z00_2919 = BGL_NAN;
									}
								else
									{	/* Unsafe/intext.scm 163 */
										if (bigloo_strcmp(string_to_bstring(BgL_stringz00_2909),
												BGl_string3129z00zz__intextz00))
											{	/* Unsafe/intext.scm 163 */
												BgL_res3011z00_2919 = BGL_INFINITY;
											}
										else
											{	/* Unsafe/intext.scm 163 */
												if (bigloo_strcmp(string_to_bstring(BgL_stringz00_2909),
														BGl_string3130z00zz__intextz00))
													{	/* Unsafe/intext.scm 163 */
														BgL_res3011z00_2919 = (-BGL_INFINITY);
													}
												else
													{	/* Unsafe/intext.scm 163 */
														BgL_res3011z00_2919 =
															strtod(BgL_stringz00_2909, ((long) 0));
							}}}}
							BgL_resz00_1127 = BgL_res3011z00_2919;
					}}
					{	/* Unsafe/intext.scm 163 */

						{	/* Unsafe/intext.scm 164 */
							obj_t BgL_auxz00_5765;

							{	/* Unsafe/intext.scm 164 */
								long BgL_za71za7_2920;

								BgL_za71za7_2920 =
									(long) CINT(CELL_REF(BgL_za2pointerza2z00_5763));
								BgL_auxz00_5765 = BINT((BgL_za71za7_2920 + BgL_sza7za7_1126));
							}
							CELL_SET(BgL_za2pointerza2z00_5763, BgL_auxz00_5765);
						}
						return BgL_resz00_1127;
					}
				}
			}
		}
	}



/* read-long-word */
	long BGl_readzd2longzd2wordz00zz__intextz00(obj_t BgL_za2pointerza2z00_5766,
		obj_t BgL_sz00_1154, int BgL_sza7za7_1155)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 195 */
			{	/* Unsafe/intext.scm 189 */
				BGL_LONGLONG_T BgL_accz00_1157;

				BgL_accz00_1157 = LONG_TO_LLONG(((long) 0));
				{
					long BgL_iz00_1159;

					BgL_iz00_1159 = ((long) 0);
				BgL_zc3anonymousza31981ze3z83_1160:
					if ((BgL_iz00_1159 < (long) (BgL_sza7za7_1155)))
						{	/* Unsafe/intext.scm 190 */
							{	/* Unsafe/intext.scm 191 */
								unsigned char BgL_dz00_1162;

								{	/* Unsafe/intext.scm 191 */
									long BgL_kz00_2957;

									BgL_kz00_2957 =
										(long) CINT(CELL_REF(BgL_za2pointerza2z00_5766));
									BgL_dz00_1162 = STRING_REF(BgL_sz00_1154, BgL_kz00_2957);
								}
								{	/* Unsafe/intext.scm 192 */
									BGL_LONGLONG_T BgL_arg1983z00_1163;

									BGL_LONGLONG_T BgL_arg1984z00_1164;

									BgL_arg1983z00_1163 =
										(((BGL_LONGLONG_T) 256) * BgL_accz00_1157);
									{	/* Unsafe/intext.scm 193 */
										long BgL_auxz00_5947;

										BgL_auxz00_5947 = (BgL_dz00_1162);
										BgL_arg1984z00_1164 = LONG_TO_LLONG(BgL_auxz00_5947);
									}
									BgL_accz00_1157 = (BgL_arg1983z00_1163 + BgL_arg1984z00_1164);
								}
								{	/* Unsafe/intext.scm 194 */
									obj_t BgL_auxz00_5767;

									{	/* Unsafe/intext.scm 194 */
										long BgL_za71za7_2964;

										BgL_za71za7_2964 =
											(long) CINT(CELL_REF(BgL_za2pointerza2z00_5766));
										BgL_auxz00_5767 = BINT((BgL_za71za7_2964 + ((long) 1)));
									}
									CELL_SET(BgL_za2pointerza2z00_5766, BgL_auxz00_5767);
							}}
							{
								long BgL_iz00_5954;

								BgL_iz00_5954 = (BgL_iz00_1159 + ((long) 1));
								BgL_iz00_1159 = BgL_iz00_5954;
								goto BgL_zc3anonymousza31981ze3z83_1160;
							}
						}
					else
						{	/* Unsafe/intext.scm 190 */
							((bool_t) 0);
						}
				}
				return LLONG_TO_LONG(BgL_accz00_1157);
			}
		}
	}



/* read-item */
	obj_t BGl_readzd2itemzd2zz__intextz00(obj_t BgL_za2pointerza2z00_5771,
		obj_t BgL_sz00_5770, obj_t BgL_za2definitionsza2z00_5769,
		obj_t BgL_za2definingza2z00_5768)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 502 */
		BGl_readzd2itemzd2zz__intextz00:
			{
				obj_t BgL_sz00_1130;

				obj_t BgL_sz00_1394;

				obj_t BgL_converterz00_1395;

				{	/* Unsafe/intext.scm 465 */
					unsigned char BgL_dz00_1462;

					{	/* Unsafe/intext.scm 465 */
						long BgL_kz00_3358;

						BgL_kz00_3358 = (long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
						BgL_dz00_1462 = STRING_REF(BgL_sz00_5770, BgL_kz00_3358);
					}
					{	/* Unsafe/intext.scm 466 */
						obj_t BgL_auxz00_5772;

						{	/* Unsafe/intext.scm 466 */
							long BgL_za71za7_3359;

							BgL_za71za7_3359 =
								(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
							BgL_auxz00_5772 = BINT((BgL_za71za7_3359 + ((long) 1)));
						}
						CELL_SET(BgL_za2pointerza2z00_5771, BgL_auxz00_5772);
					}
					switch (BgL_dz00_1462)
						{
						case ((unsigned char) '='):

							{	/* Unsafe/intext.scm 468 */
								obj_t BgL_auxz00_5773;

								BgL_auxz00_5773 =
									BGl_readzd2itemzd2zz__intextz00(BgL_za2pointerza2z00_5771,
									BgL_sz00_5770, BgL_za2definitionsza2z00_5769,
									BgL_za2definingza2z00_5768);
								CELL_SET(BgL_za2definingza2z00_5768, BgL_auxz00_5773);
							}
							{

								goto BGl_readzd2itemzd2zz__intextz00;
							}
							break;
						case ((unsigned char) '#'):

							{	/* Unsafe/intext.scm 469 */
								obj_t BgL_arg1994z00_3361;

								BgL_arg1994z00_3361 =
									BGl_readzd2itemzd2zz__intextz00(BgL_za2pointerza2z00_5771,
									BgL_sz00_5770, BgL_za2definitionsza2z00_5769,
									BgL_za2definingza2z00_5768);
								{	/* Unsafe/intext.scm 469 */
									obj_t BgL_vectorz00_3362;

									int BgL_kz00_3363;

									BgL_vectorz00_3362 = CELL_REF(BgL_za2definitionsza2z00_5769);
									BgL_kz00_3363 = CINT(BgL_arg1994z00_3361);
									return VECTOR_REF(BgL_vectorz00_3362, BgL_kz00_3363);
								}
							}
							break;
						case ((unsigned char) '\''):

							{	/* Unsafe/intext.scm 470 */
								obj_t BgL_arg1996z00_3364;

								BgL_arg1996z00_3364 =
									BGl_readzd2itemzd2zz__intextz00(BgL_za2pointerza2z00_5771,
									BgL_sz00_5770, BgL_za2definitionsza2z00_5769,
									BgL_za2definingza2z00_5768);
								{	/* Unsafe/intext.scm 470 */
									obj_t BgL_stringz00_3365;

									BgL_stringz00_3365 = BgL_arg1996z00_3364;
									return
										string_to_symbol(BSTRING_TO_STRING(BgL_stringz00_3365));
								}
							}
							break;
						case ((unsigned char) ':'):

							{	/* Unsafe/intext.scm 471 */
								obj_t BgL_arg1998z00_3366;

								BgL_arg1998z00_3366 =
									BGl_readzd2itemzd2zz__intextz00(BgL_za2pointerza2z00_5771,
									BgL_sz00_5770, BgL_za2definitionsza2z00_5769,
									BgL_za2definingza2z00_5768);
								{	/* Unsafe/intext.scm 471 */
									obj_t BgL_stringz00_3367;

									BgL_stringz00_3367 = BgL_arg1998z00_3366;
									return
										string_to_keyword(BSTRING_TO_STRING(BgL_stringz00_3367));
								}
							}
							break;
						case ((unsigned char) 'a'):

							{	/* Unsafe/intext.scm 472 */
								long BgL_arg1972z00_3369;

								BgL_arg1972z00_3369 =
									BGl_readzd2siza7ez75zz__intextz00(BgL_za2pointerza2z00_5771,
									BgL_sz00_5770);
								return BCHAR((BgL_arg1972z00_3369));
							}
							break;
						case ((unsigned char) 'u'):

							{	/* Unsafe/intext.scm 473 */
								long BgL_arg2002z00_3372;

								BgL_arg2002z00_3372 =
									BGl_readzd2siza7ez75zz__intextz00(BgL_za2pointerza2z00_5771,
									BgL_sz00_5770);
								return
									BUCS2(BGl_integerzd2ze3ucs2z31zz__ucs2z00((int)
										(BgL_arg2002z00_3372)));
							} break;
						case ((unsigned char) 'F'):

							return BFALSE;
							break;
						case ((unsigned char) 'T'):

							return BTRUE;
							break;
						case ((unsigned char) ';'):

							return BUNSPEC;
							break;
						case ((unsigned char) '.'):

							return BNIL;
							break;
						case ((unsigned char) '<'):

							{	/* Unsafe/intext.scm 478 */
								long BgL_auxz00_5979;

								BgL_auxz00_5979 =
									BGl_readzd2siza7ez75zz__intextz00(BgL_za2pointerza2z00_5771,
									BgL_sz00_5770);
								return BCNST(BgL_auxz00_5979);
							}
							break;
						case ((unsigned char) '"'):

							return
								BGl_readzd2stringzd2zz__intextz00(BgL_za2definingza2z00_5768,
								BgL_za2definitionsza2z00_5769, BgL_za2pointerza2z00_5771,
								BgL_sz00_5770);
							break;
						case ((unsigned char) 'U'):

							return
								utf8_string_to_ucs2_string(BGl_readzd2stringzd2zz__intextz00
								(BgL_za2definingza2z00_5768, BgL_za2definitionsza2z00_5769,
									BgL_za2pointerza2z00_5771, BgL_sz00_5770));
							break;
						case ((unsigned char) '['):

							{	/* Unsafe/intext.scm 263 */
								long BgL_sza7za7_1207;

								{	/* Unsafe/intext.scm 263 */
									long BgL_res3016z00_3057;

									{	/* Unsafe/intext.scm 263 */
										long BgL_sza7za7_3050;

										{	/* Unsafe/intext.scm 263 */
											unsigned char BgL_auxz00_5985;

											{	/* Unsafe/intext.scm 263 */
												long BgL_kz00_3053;

												BgL_kz00_3053 =
													(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
												BgL_auxz00_5985 =
													STRING_REF(BgL_sz00_5770, BgL_kz00_3053);
											}
											BgL_sza7za7_3050 = (BgL_auxz00_5985);
										}
										{	/* Unsafe/intext.scm 263 */
											obj_t BgL_auxz00_5795;

											{	/* Unsafe/intext.scm 263 */
												long BgL_za71za7_3055;

												BgL_za71za7_3055 =
													(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
												BgL_auxz00_5795 = BINT((BgL_za71za7_3055 + ((long) 1)));
											}
											CELL_SET(BgL_za2pointerza2z00_5771, BgL_auxz00_5795);
										}
										BgL_res3016z00_3057 =
											BGl_readzd2wordzd2zz__intextz00(BgL_za2pointerza2z00_5771,
											BgL_sz00_5770, (int) (BgL_sza7za7_3050));
									}
									BgL_sza7za7_1207 = BgL_res3016z00_3057;
								}
								{	/* Unsafe/intext.scm 263 */
									obj_t BgL_resz00_1208;

									BgL_resz00_1208 = create_vector((int) (BgL_sza7za7_1207));
									{	/* Unsafe/intext.scm 264 */

										{	/* Unsafe/intext.scm 265 */
											bool_t BgL_testz00_5996;

											{	/* Unsafe/intext.scm 265 */
												obj_t BgL_objz00_3058;

												BgL_objz00_3058 = CELL_REF(BgL_za2definingza2z00_5768);
												BgL_testz00_5996 = INTEGERP(BgL_objz00_3058);
											}
											if (BgL_testz00_5996)
												{	/* Unsafe/intext.scm 265 */
													{	/* Unsafe/intext.scm 266 */
														obj_t BgL_vectorz00_3059;

														int BgL_kz00_3060;

														BgL_vectorz00_3059 =
															CELL_REF(BgL_za2definitionsza2z00_5769);
														BgL_kz00_3060 =
															CINT(CELL_REF(BgL_za2definingza2z00_5768));
														VECTOR_SET(BgL_vectorz00_3059, BgL_kz00_3060,
															BgL_resz00_1208);
													}
													CELL_SET(BgL_za2definingza2z00_5768, BFALSE);
												}
											else
												{	/* Unsafe/intext.scm 265 */
													BFALSE;
												}
										}
										{
											long BgL_iz00_1211;

											BgL_iz00_1211 = ((long) 0);
										BgL_zc3anonymousza32015ze3z83_1212:
											if ((BgL_iz00_1211 < BgL_sza7za7_1207))
												{	/* Unsafe/intext.scm 268 */
													VECTOR_SET(BgL_resz00_1208,
														(int) (BgL_iz00_1211),
														BGl_readzd2itemzd2zz__intextz00
														(BgL_za2pointerza2z00_5771, BgL_sz00_5770,
															BgL_za2definitionsza2z00_5769,
															BgL_za2definingza2z00_5768));
													{
														long BgL_iz00_6005;

														BgL_iz00_6005 = (BgL_iz00_1211 + ((long) 1));
														BgL_iz00_1211 = BgL_iz00_6005;
														goto BgL_zc3anonymousza32015ze3z83_1212;
													}
												}
											else
												{	/* Unsafe/intext.scm 268 */
													((bool_t) 0);
												}
										}
										return BgL_resz00_1208;
									}
								}
							}
							break;
						case ((unsigned char) 't'):

							{	/* Unsafe/intext.scm 319 */
								obj_t BgL_tagz00_1332;

								BgL_tagz00_1332 =
									BGl_readzd2itemzd2zz__intextz00(BgL_za2pointerza2z00_5771,
									BgL_sz00_5770, BgL_za2definitionsza2z00_5769,
									BgL_za2definingza2z00_5768);
								{	/* Unsafe/intext.scm 319 */
									long BgL_sza7za7_1333;

									{	/* Unsafe/intext.scm 320 */
										long BgL_res3019z00_3157;

										{	/* Unsafe/intext.scm 320 */
											long BgL_sza7za7_3150;

											{	/* Unsafe/intext.scm 320 */
												unsigned char BgL_auxz00_6008;

												{	/* Unsafe/intext.scm 320 */
													long BgL_kz00_3153;

													BgL_kz00_3153 =
														(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
													BgL_auxz00_6008 =
														STRING_REF(BgL_sz00_5770, BgL_kz00_3153);
												}
												BgL_sza7za7_3150 = (BgL_auxz00_6008);
											}
											{	/* Unsafe/intext.scm 320 */
												obj_t BgL_auxz00_5791;

												{	/* Unsafe/intext.scm 320 */
													long BgL_za71za7_3155;

													BgL_za71za7_3155 =
														(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
													BgL_auxz00_5791 =
														BINT((BgL_za71za7_3155 + ((long) 1)));
												}
												CELL_SET(BgL_za2pointerza2z00_5771, BgL_auxz00_5791);
											}
											BgL_res3019z00_3157 =
												BGl_readzd2wordzd2zz__intextz00
												(BgL_za2pointerza2z00_5771, BgL_sz00_5770,
												(int) (BgL_sza7za7_3150));
										}
										BgL_sza7za7_1333 = BgL_res3019z00_3157;
									}
									{	/* Unsafe/intext.scm 320 */
										obj_t BgL_resz00_1334;

										BgL_resz00_1334 = create_vector((int) (BgL_sza7za7_1333));
										{	/* Unsafe/intext.scm 321 */

											{	/* Unsafe/intext.scm 322 */
												int BgL_auxz00_6019;

												BgL_auxz00_6019 = CINT(BgL_tagz00_1332);
												VECTOR_TAG_SET(BgL_resz00_1334, BgL_auxz00_6019);
											}
											{	/* Unsafe/intext.scm 323 */
												bool_t BgL_testz00_6022;

												{	/* Unsafe/intext.scm 323 */
													obj_t BgL_objz00_3160;

													BgL_objz00_3160 =
														CELL_REF(BgL_za2definingza2z00_5768);
													BgL_testz00_6022 = INTEGERP(BgL_objz00_3160);
												}
												if (BgL_testz00_6022)
													{	/* Unsafe/intext.scm 323 */
														{	/* Unsafe/intext.scm 324 */
															obj_t BgL_vectorz00_3161;

															int BgL_kz00_3162;

															BgL_vectorz00_3161 =
																CELL_REF(BgL_za2definitionsza2z00_5769);
															BgL_kz00_3162 =
																CINT(CELL_REF(BgL_za2definingza2z00_5768));
															VECTOR_SET(BgL_vectorz00_3161, BgL_kz00_3162,
																BgL_resz00_1334);
														}
														CELL_SET(BgL_za2definingza2z00_5768, BFALSE);
													}
												else
													{	/* Unsafe/intext.scm 323 */
														BFALSE;
													}
											}
											{
												long BgL_iz00_1337;

												BgL_iz00_1337 = ((long) 0);
											BgL_zc3anonymousza32087ze3z83_1338:
												if ((BgL_iz00_1337 < BgL_sza7za7_1333))
													{	/* Unsafe/intext.scm 326 */
														VECTOR_SET(BgL_resz00_1334,
															(int) (BgL_iz00_1337),
															BGl_readzd2itemzd2zz__intextz00
															(BgL_za2pointerza2z00_5771, BgL_sz00_5770,
																BgL_za2definitionsza2z00_5769,
																BgL_za2definingza2z00_5768));
														{
															long BgL_iz00_6031;

															BgL_iz00_6031 = (BgL_iz00_1337 + ((long) 1));
															BgL_iz00_1337 = BgL_iz00_6031;
															goto BgL_zc3anonymousza32087ze3z83_1338;
														}
													}
												else
													{	/* Unsafe/intext.scm 326 */
														((bool_t) 0);
													}
											}
											return BgL_resz00_1334;
										}
									}
								}
							}
							break;
						case ((unsigned char) 'V'):

							{	/* Unsafe/intext.scm 331 */
								obj_t BgL_idz00_1344;

								BgL_idz00_1344 =
									BGl_readzd2itemzd2zz__intextz00(BgL_za2pointerza2z00_5771,
									BgL_sz00_5770, BgL_za2definitionsza2z00_5769,
									BgL_za2definingza2z00_5768);
								{	/* Unsafe/intext.scm 331 */
									obj_t BgL_vz00_1345;

									BgL_vz00_1345 =
										BGl_readzd2itemzd2zz__intextz00(BgL_za2pointerza2z00_5771,
										BgL_sz00_5770, BgL_za2definitionsza2z00_5769,
										BgL_za2definingza2z00_5768);
									{	/* Unsafe/intext.scm 332 */
										obj_t BgL_tvz00_1346;

										BgL_tvz00_1346 =
											BGl_vectorzd2ze3tvectorz31zz__tvectorz00(BgL_idz00_1344,
											BgL_vz00_1345);
										{	/* Unsafe/intext.scm 333 */

											{	/* Unsafe/intext.scm 334 */
												bool_t BgL_testz00_6036;

												{	/* Unsafe/intext.scm 334 */
													obj_t BgL_objz00_3171;

													BgL_objz00_3171 =
														CELL_REF(BgL_za2definingza2z00_5768);
													BgL_testz00_6036 = INTEGERP(BgL_objz00_3171);
												}
												if (BgL_testz00_6036)
													{	/* Unsafe/intext.scm 334 */
														{	/* Unsafe/intext.scm 335 */
															obj_t BgL_vectorz00_3172;

															int BgL_kz00_3173;

															BgL_vectorz00_3172 =
																CELL_REF(BgL_za2definitionsza2z00_5769);
															BgL_kz00_3173 =
																CINT(CELL_REF(BgL_za2definingza2z00_5768));
															VECTOR_SET(BgL_vectorz00_3172, BgL_kz00_3173,
																BgL_tvz00_1346);
														}
														CELL_SET(BgL_za2definingza2z00_5768, BFALSE);
													}
												else
													{	/* Unsafe/intext.scm 334 */
														BFALSE;
													}
											}
											return BgL_tvz00_1346;
										}
									}
								}
							}
							break;
						case ((unsigned char) 'h'):

							{	/* Unsafe/intext.scm 273 */
								long BgL_lenz00_1218;

								long BgL_bsiza7eza7_1219;

								{	/* Unsafe/intext.scm 273 */
									long BgL_res3017z00_3077;

									{	/* Unsafe/intext.scm 273 */
										long BgL_sza7za7_3070;

										{	/* Unsafe/intext.scm 273 */
											unsigned char BgL_auxz00_6040;

											{	/* Unsafe/intext.scm 273 */
												long BgL_kz00_3073;

												BgL_kz00_3073 =
													(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
												BgL_auxz00_6040 =
													STRING_REF(BgL_sz00_5770, BgL_kz00_3073);
											}
											BgL_sza7za7_3070 = (BgL_auxz00_6040);
										}
										{	/* Unsafe/intext.scm 273 */
											obj_t BgL_auxz00_5793;

											{	/* Unsafe/intext.scm 273 */
												long BgL_za71za7_3075;

												BgL_za71za7_3075 =
													(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
												BgL_auxz00_5793 = BINT((BgL_za71za7_3075 + ((long) 1)));
											}
											CELL_SET(BgL_za2pointerza2z00_5771, BgL_auxz00_5793);
										}
										BgL_res3017z00_3077 =
											BGl_readzd2wordzd2zz__intextz00(BgL_za2pointerza2z00_5771,
											BgL_sz00_5770, (int) (BgL_sza7za7_3070));
									}
									BgL_lenz00_1218 = BgL_res3017z00_3077;
								}
								{	/* Unsafe/intext.scm 274 */
									long BgL_res3018z00_3086;

									{	/* Unsafe/intext.scm 274 */
										long BgL_sza7za7_3079;

										{	/* Unsafe/intext.scm 274 */
											unsigned char BgL_auxz00_6049;

											{	/* Unsafe/intext.scm 274 */
												long BgL_kz00_3082;

												BgL_kz00_3082 =
													(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
												BgL_auxz00_6049 =
													STRING_REF(BgL_sz00_5770, BgL_kz00_3082);
											}
											BgL_sza7za7_3079 = (BgL_auxz00_6049);
										}
										{	/* Unsafe/intext.scm 274 */
											obj_t BgL_auxz00_5794;

											{	/* Unsafe/intext.scm 274 */
												long BgL_za71za7_3084;

												BgL_za71za7_3084 =
													(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
												BgL_auxz00_5794 = BINT((BgL_za71za7_3084 + ((long) 1)));
											}
											CELL_SET(BgL_za2pointerza2z00_5771, BgL_auxz00_5794);
										}
										BgL_res3018z00_3086 =
											BGl_readzd2wordzd2zz__intextz00(BgL_za2pointerza2z00_5771,
											BgL_sz00_5770, (int) (BgL_sza7za7_3079));
									}
									BgL_bsiza7eza7_1219 = BgL_res3018z00_3086;
								}
								{	/* Unsafe/intext.scm 275 */
									obj_t BgL_casezd2valuezd2_1220;

									{	/* Unsafe/intext.scm 275 */
										obj_t BgL_arg1996z00_3087;

										BgL_arg1996z00_3087 =
											BGl_readzd2itemzd2zz__intextz00(BgL_za2pointerza2z00_5771,
											BgL_sz00_5770, BgL_za2definitionsza2z00_5769,
											BgL_za2definingza2z00_5768);
										{	/* Unsafe/intext.scm 275 */
											obj_t BgL_stringz00_3088;

											BgL_stringz00_3088 = BgL_arg1996z00_3087;
											BgL_casezd2valuezd2_1220 =
												string_to_symbol(BSTRING_TO_STRING(BgL_stringz00_3088));
									}}
									if (
										(BgL_casezd2valuezd2_1220 ==
											BGl_symbol3135z00zz__intextz00))
										{	/* Unsafe/intext.scm 277 */
											obj_t BgL_resz00_1222;

											{	/* Llib/srfi4.scm 230 */

												BgL_resz00_1222 =
													BGl_makezd2s8vectorzd2zz__srfi4z00(BgL_lenz00_1218,
													BINT(((long) 0)));
											}
											{
												long BgL_iz00_1224;

												BgL_iz00_1224 = ((long) 0);
											BgL_zc3anonymousza32021ze3z83_1225:
												if ((BgL_iz00_1224 < BgL_lenz00_1218))
													{	/* Unsafe/intext.scm 278 */
														{	/* Unsafe/intext.scm 278 */
															long BgL_arg2023z00_1227;

															BgL_arg2023z00_1227 =
																BGl_readzd2wordzd2zz__intextz00
																(BgL_za2pointerza2z00_5771, BgL_sz00_5770,
																(int) (BgL_bsiza7eza7_1219));
															{	/* Unsafe/intext.scm 278 */
																char BgL_auxz00_6069;

																BgL_auxz00_6069 =
																	(signed char) (BgL_arg2023z00_1227);
																BGL_S8VSET(BgL_resz00_1222, BgL_iz00_1224,
																	BgL_auxz00_6069);
															} BUNSPEC;
														}
														{
															long BgL_iz00_6072;

															BgL_iz00_6072 = (BgL_iz00_1224 + ((long) 1));
															BgL_iz00_1224 = BgL_iz00_6072;
															goto BgL_zc3anonymousza32021ze3z83_1225;
														}
													}
												else
													{	/* Unsafe/intext.scm 278 */
														((bool_t) 0);
													}
											}
											return BgL_resz00_1222;
										}
									else
										{	/* Unsafe/intext.scm 275 */
											if (
												(BgL_casezd2valuezd2_1220 ==
													BGl_symbol3137z00zz__intextz00))
												{	/* Unsafe/intext.scm 281 */
													obj_t BgL_resz00_1233;

													{	/* Llib/srfi4.scm 231 */

														BgL_resz00_1233 =
															BGl_makezd2u8vectorzd2zz__srfi4z00
															(BgL_lenz00_1218, BINT(((long) 0)));
													}
													{
														long BgL_iz00_1235;

														BgL_iz00_1235 = ((long) 0);
													BgL_zc3anonymousza32027ze3z83_1236:
														if ((BgL_iz00_1235 < BgL_lenz00_1218))
															{	/* Unsafe/intext.scm 282 */
																{	/* Unsafe/intext.scm 282 */
																	long BgL_arg2029z00_1238;

																	BgL_arg2029z00_1238 =
																		BGl_readzd2wordzd2zz__intextz00
																		(BgL_za2pointerza2z00_5771, BgL_sz00_5770,
																		(int) (BgL_bsiza7eza7_1219));
																	{	/* Unsafe/intext.scm 282 */
																		unsigned char BgL_auxz00_6082;

																		BgL_auxz00_6082 =
																			(unsigned char) (BgL_arg2029z00_1238);
																		BGL_U8VSET(BgL_resz00_1233, BgL_iz00_1235,
																			BgL_auxz00_6082);
																	} BUNSPEC;
																}
																{
																	long BgL_iz00_6085;

																	BgL_iz00_6085 = (BgL_iz00_1235 + ((long) 1));
																	BgL_iz00_1235 = BgL_iz00_6085;
																	goto BgL_zc3anonymousza32027ze3z83_1236;
																}
															}
														else
															{	/* Unsafe/intext.scm 282 */
																((bool_t) 0);
															}
													}
													return BgL_resz00_1233;
												}
											else
												{	/* Unsafe/intext.scm 275 */
													if (
														(BgL_casezd2valuezd2_1220 ==
															BGl_symbol3139z00zz__intextz00))
														{	/* Unsafe/intext.scm 285 */
															obj_t BgL_resz00_1244;

															{	/* Llib/srfi4.scm 232 */

																BgL_resz00_1244 =
																	BGl_makezd2s16vectorzd2zz__srfi4z00
																	(BgL_lenz00_1218, BINT(((long) 0)));
															}
															{
																long BgL_iz00_1246;

																BgL_iz00_1246 = ((long) 0);
															BgL_zc3anonymousza32033ze3z83_1247:
																if ((BgL_iz00_1246 < BgL_lenz00_1218))
																	{	/* Unsafe/intext.scm 286 */
																		{	/* Unsafe/intext.scm 286 */
																			long BgL_arg2036z00_1249;

																			BgL_arg2036z00_1249 =
																				BGl_readzd2wordzd2zz__intextz00
																				(BgL_za2pointerza2z00_5771,
																				BgL_sz00_5770,
																				(int) (BgL_bsiza7eza7_1219));
																			{	/* Unsafe/intext.scm 286 */
																				short BgL_auxz00_6095;

																				BgL_auxz00_6095 =
																					(short) (BgL_arg2036z00_1249);
																				BGL_S16VSET(BgL_resz00_1244,
																					BgL_iz00_1246, BgL_auxz00_6095);
																			} BUNSPEC;
																		}
																		{
																			long BgL_iz00_6098;

																			BgL_iz00_6098 =
																				(BgL_iz00_1246 + ((long) 1));
																			BgL_iz00_1246 = BgL_iz00_6098;
																			goto BgL_zc3anonymousza32033ze3z83_1247;
																		}
																	}
																else
																	{	/* Unsafe/intext.scm 286 */
																		((bool_t) 0);
																	}
															}
															return BgL_resz00_1244;
														}
													else
														{	/* Unsafe/intext.scm 275 */
															if (
																(BgL_casezd2valuezd2_1220 ==
																	BGl_symbol3141z00zz__intextz00))
																{	/* Unsafe/intext.scm 289 */
																	obj_t BgL_resz00_1255;

																	{	/* Llib/srfi4.scm 233 */

																		BgL_resz00_1255 =
																			BGl_makezd2u16vectorzd2zz__srfi4z00
																			(BgL_lenz00_1218, BINT(((long) 0)));
																	}
																	{
																		long BgL_iz00_1257;

																		BgL_iz00_1257 = ((long) 0);
																	BgL_zc3anonymousza32040ze3z83_1258:
																		if ((BgL_iz00_1257 < BgL_lenz00_1218))
																			{	/* Unsafe/intext.scm 290 */
																				{	/* Unsafe/intext.scm 290 */
																					long BgL_arg2042z00_1260;

																					BgL_arg2042z00_1260 =
																						BGl_readzd2wordzd2zz__intextz00
																						(BgL_za2pointerza2z00_5771,
																						BgL_sz00_5770,
																						(int) (BgL_bsiza7eza7_1219));
																					{	/* Unsafe/intext.scm 290 */
																						unsigned short BgL_auxz00_6108;

																						BgL_auxz00_6108 =
																							(unsigned
																							short) (BgL_arg2042z00_1260);
																						BGL_U16VSET(BgL_resz00_1255,
																							BgL_iz00_1257, BgL_auxz00_6108);
																					} BUNSPEC;
																				}
																				{
																					long BgL_iz00_6111;

																					BgL_iz00_6111 =
																						(BgL_iz00_1257 + ((long) 1));
																					BgL_iz00_1257 = BgL_iz00_6111;
																					goto
																						BgL_zc3anonymousza32040ze3z83_1258;
																				}
																			}
																		else
																			{	/* Unsafe/intext.scm 290 */
																				((bool_t) 0);
																			}
																	}
																	return BgL_resz00_1255;
																}
															else
																{	/* Unsafe/intext.scm 275 */
																	if (
																		(BgL_casezd2valuezd2_1220 ==
																			BGl_symbol3143z00zz__intextz00))
																		{	/* Unsafe/intext.scm 293 */
																			obj_t BgL_resz00_1266;

																			{	/* Llib/srfi4.scm 234 */

																				BgL_resz00_1266 =
																					BGl_makezd2s32vectorzd2zz__srfi4z00
																					(BgL_lenz00_1218, BINT(((long) 0)));
																			}
																			{
																				long BgL_iz00_1268;

																				BgL_iz00_1268 = ((long) 0);
																			BgL_zc3anonymousza32046ze3z83_1269:
																				if ((BgL_iz00_1268 < BgL_lenz00_1218))
																					{	/* Unsafe/intext.scm 294 */
																						{	/* Unsafe/intext.scm 294 */
																							long BgL_arg2048z00_1271;

																							BgL_arg2048z00_1271 =
																								BGl_readzd2wordzd2zz__intextz00
																								(BgL_za2pointerza2z00_5771,
																								BgL_sz00_5770,
																								(int) (BgL_bsiza7eza7_1219));
																							BGL_S32VSET(BgL_resz00_1266,
																								BgL_iz00_1268,
																								BgL_arg2048z00_1271);
																							BUNSPEC;
																						}
																						{
																							long BgL_iz00_6122;

																							BgL_iz00_6122 =
																								(BgL_iz00_1268 + ((long) 1));
																							BgL_iz00_1268 = BgL_iz00_6122;
																							goto
																								BgL_zc3anonymousza32046ze3z83_1269;
																						}
																					}
																				else
																					{	/* Unsafe/intext.scm 294 */
																						((bool_t) 0);
																					}
																			}
																			return BgL_resz00_1266;
																		}
																	else
																		{	/* Unsafe/intext.scm 275 */
																			if (
																				(BgL_casezd2valuezd2_1220 ==
																					BGl_symbol3145z00zz__intextz00))
																				{	/* Unsafe/intext.scm 297 */
																					obj_t BgL_resz00_1277;

																					{	/* Llib/srfi4.scm 235 */

																						BgL_resz00_1277 =
																							BGl_makezd2u32vectorzd2zz__srfi4z00
																							(BgL_lenz00_1218,
																							BINT(((long) 0)));
																					}
																					{
																						long BgL_iz00_1279;

																						BgL_iz00_1279 = ((long) 0);
																					BgL_zc3anonymousza32054ze3z83_1280:
																						if (
																							(BgL_iz00_1279 < BgL_lenz00_1218))
																							{	/* Unsafe/intext.scm 298 */
																								{	/* Unsafe/intext.scm 298 */
																									long BgL_arg2056z00_1282;

																									BgL_arg2056z00_1282 =
																										BGl_readzd2wordzd2zz__intextz00
																										(BgL_za2pointerza2z00_5771,
																										BgL_sz00_5770,
																										(int)
																										(BgL_bsiza7eza7_1219));
																									{	/* Unsafe/intext.scm 298 */
																										unsigned long
																											BgL_auxz00_6132;
																										BgL_auxz00_6132 =
																											(unsigned
																											long)
																											(BgL_arg2056z00_1282);
																										BGL_U32VSET(BgL_resz00_1277,
																											BgL_iz00_1279,
																											BgL_auxz00_6132);
																									} BUNSPEC;
																								}
																								{
																									long BgL_iz00_6135;

																									BgL_iz00_6135 =
																										(BgL_iz00_1279 +
																										((long) 1));
																									BgL_iz00_1279 = BgL_iz00_6135;
																									goto
																										BgL_zc3anonymousza32054ze3z83_1280;
																								}
																							}
																						else
																							{	/* Unsafe/intext.scm 298 */
																								((bool_t) 0);
																							}
																					}
																					return BgL_resz00_1277;
																				}
																			else
																				{	/* Unsafe/intext.scm 275 */
																					if (
																						(BgL_casezd2valuezd2_1220 ==
																							BGl_symbol3147z00zz__intextz00))
																						{	/* Unsafe/intext.scm 301 */
																							obj_t BgL_resz00_1288;

																							{	/* Llib/srfi4.scm 236 */

																								BgL_resz00_1288 =
																									BGl_makezd2s64vectorzd2zz__srfi4z00
																									(BgL_lenz00_1218,
																									BGl_llong3149z00zz__intextz00);
																							}
																							{
																								long BgL_iz00_1290;

																								BgL_iz00_1290 = ((long) 0);
																							BgL_zc3anonymousza32060ze3z83_1291:
																								if (
																									(BgL_iz00_1290 <
																										BgL_lenz00_1218))
																									{	/* Unsafe/intext.scm 302 */
																										{	/* Unsafe/intext.scm 302 */
																											long BgL_arg2062z00_1293;

																											BgL_arg2062z00_1293 =
																												BGl_readzd2longzd2wordz00zz__intextz00
																												(BgL_za2pointerza2z00_5771,
																												BgL_sz00_5770,
																												(int)
																												(BgL_bsiza7eza7_1219));
																											{	/* Unsafe/intext.scm 302 */
																												BGL_LONGLONG_T
																													BgL_auxz00_6144;
																												BgL_auxz00_6144 =
																													LONG_TO_LLONG
																													(BgL_arg2062z00_1293);
																												BGL_S64VSET
																													(BgL_resz00_1288,
																													BgL_iz00_1290,
																													BgL_auxz00_6144);
																											} BUNSPEC;
																										}
																										{
																											long BgL_iz00_6147;

																											BgL_iz00_6147 =
																												(BgL_iz00_1290 +
																												((long) 1));
																											BgL_iz00_1290 =
																												BgL_iz00_6147;
																											goto
																												BgL_zc3anonymousza32060ze3z83_1291;
																										}
																									}
																								else
																									{	/* Unsafe/intext.scm 302 */
																										((bool_t) 0);
																									}
																							}
																							return BgL_resz00_1288;
																						}
																					else
																						{	/* Unsafe/intext.scm 275 */
																							if (
																								(BgL_casezd2valuezd2_1220 ==
																									BGl_symbol3150z00zz__intextz00))
																								{	/* Unsafe/intext.scm 305 */
																									obj_t BgL_resz00_1299;

																									{	/* Llib/srfi4.scm 237 */

																										BgL_resz00_1299 =
																											BGl_makezd2u64vectorzd2zz__srfi4z00
																											(BgL_lenz00_1218,
																											BGl_llong3149z00zz__intextz00);
																									}
																									{
																										long BgL_iz00_1301;

																										BgL_iz00_1301 = ((long) 0);
																									BgL_zc3anonymousza32066ze3z83_1302:
																										if (
																											(BgL_iz00_1301 <
																												BgL_lenz00_1218))
																											{	/* Unsafe/intext.scm 306 */
																												{	/* Unsafe/intext.scm 306 */
																													long
																														BgL_arg2068z00_1304;
																													BgL_arg2068z00_1304 =
																														BGl_readzd2longzd2wordz00zz__intextz00
																														(BgL_za2pointerza2z00_5771,
																														BgL_sz00_5770,
																														(int)
																														(BgL_bsiza7eza7_1219));
																													{	/* Unsafe/intext.scm 306 */
																														unsigned
																															BGL_LONGLONG_T
																															BgL_auxz00_6156;
																														BgL_auxz00_6156 =
																															LONG_TO_LLONG
																															(BgL_arg2068z00_1304);
																														BGL_U64VSET
																															(BgL_resz00_1299,
																															BgL_iz00_1301,
																															BgL_auxz00_6156);
																													} BUNSPEC;
																												}
																												{
																													long BgL_iz00_6159;

																													BgL_iz00_6159 =
																														(BgL_iz00_1301 +
																														((long) 1));
																													BgL_iz00_1301 =
																														BgL_iz00_6159;
																													goto
																														BgL_zc3anonymousza32066ze3z83_1302;
																												}
																											}
																										else
																											{	/* Unsafe/intext.scm 306 */
																												((bool_t) 0);
																											}
																									}
																									return BgL_resz00_1299;
																								}
																							else
																								{	/* Unsafe/intext.scm 275 */
																									if (
																										(BgL_casezd2valuezd2_1220 ==
																											BGl_symbol3152z00zz__intextz00))
																										{	/* Unsafe/intext.scm 309 */
																											obj_t BgL_resz00_1310;

																											{	/* Llib/srfi4.scm 238 */

																												BgL_resz00_1310 =
																													BGl_makezd2f32vectorzd2zz__srfi4z00
																													(BgL_lenz00_1218,
																													BGl_real3154z00zz__intextz00);
																											}
																											{
																												long BgL_iz00_1312;

																												BgL_iz00_1312 =
																													((long) 0);
																											BgL_zc3anonymousza32072ze3z83_1313:
																												if (
																													(BgL_iz00_1312 <
																														BgL_lenz00_1218))
																													{	/* Unsafe/intext.scm 310 */
																														{	/* Unsafe/intext.scm 310 */
																															double
																																BgL_arg2076z00_1315;
																															BgL_arg2076z00_1315
																																=
																																BGl_readzd2floatzd2zz__intextz00
																																(BgL_za2pointerza2z00_5771,
																																BgL_sz00_5770);
																															{	/* Unsafe/intext.scm 310 */
																																float
																																	BgL_auxz00_6167;
																																BgL_auxz00_6167
																																	=
																																	(float)
																																	(BgL_arg2076z00_1315);
																																BGL_F32VSET
																																	(BgL_resz00_1310,
																																	BgL_iz00_1312,
																																	BgL_auxz00_6167);
																															} BUNSPEC;
																														}
																														{
																															long
																																BgL_iz00_6170;
																															BgL_iz00_6170 =
																																(BgL_iz00_1312 +
																																((long) 1));
																															BgL_iz00_1312 =
																																BgL_iz00_6170;
																															goto
																																BgL_zc3anonymousza32072ze3z83_1313;
																														}
																													}
																												else
																													{	/* Unsafe/intext.scm 310 */
																														((bool_t) 0);
																													}
																											}
																											return BgL_resz00_1310;
																										}
																									else
																										{	/* Unsafe/intext.scm 275 */
																											if (
																												(BgL_casezd2valuezd2_1220
																													==
																													BGl_symbol3155z00zz__intextz00))
																												{	/* Unsafe/intext.scm 313 */
																													obj_t BgL_resz00_1321;

																													{	/* Llib/srfi4.scm 239 */

																														BgL_resz00_1321 =
																															BGl_makezd2f64vectorzd2zz__srfi4z00
																															(BgL_lenz00_1218,
																															BGl_real3154z00zz__intextz00);
																													}
																													{
																														long BgL_iz00_1323;

																														BgL_iz00_1323 =
																															((long) 0);
																													BgL_zc3anonymousza32080ze3z83_1324:
																														if (
																															(BgL_iz00_1323 <
																																BgL_lenz00_1218))
																															{	/* Unsafe/intext.scm 314 */
																																{	/* Unsafe/intext.scm 314 */
																																	double
																																		BgL_arg2082z00_1326;
																																	BgL_arg2082z00_1326
																																		=
																																		BGl_readzd2floatzd2zz__intextz00
																																		(BgL_za2pointerza2z00_5771,
																																		BgL_sz00_5770);
																																	BGL_F64VSET
																																		(BgL_resz00_1321,
																																		BgL_iz00_1323,
																																		BgL_arg2082z00_1326);
																																	BUNSPEC;
																																}
																																{
																																	long
																																		BgL_iz00_6179;
																																	BgL_iz00_6179
																																		=
																																		(BgL_iz00_1323
																																		+
																																		((long) 1));
																																	BgL_iz00_1323
																																		=
																																		BgL_iz00_6179;
																																	goto
																																		BgL_zc3anonymousza32080ze3z83_1324;
																																}
																															}
																														else
																															{	/* Unsafe/intext.scm 314 */
																																((bool_t) 0);
																															}
																													}
																													return
																														BgL_resz00_1321;
																												}
																											else
																												{	/* Unsafe/intext.scm 275 */
																													return BUNSPEC;
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
							break;
						case ((unsigned char) '('):

							{	/* Unsafe/intext.scm 341 */
								long BgL_sza7za7_1349;

								{	/* Unsafe/intext.scm 341 */
									long BgL_res3020z00_3183;

									{	/* Unsafe/intext.scm 341 */
										long BgL_sza7za7_3176;

										{	/* Unsafe/intext.scm 341 */
											unsigned char BgL_auxz00_6181;

											{	/* Unsafe/intext.scm 341 */
												long BgL_kz00_3179;

												BgL_kz00_3179 =
													(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
												BgL_auxz00_6181 =
													STRING_REF(BgL_sz00_5770, BgL_kz00_3179);
											}
											BgL_sza7za7_3176 = (BgL_auxz00_6181);
										}
										{	/* Unsafe/intext.scm 341 */
											obj_t BgL_auxz00_5788;

											{	/* Unsafe/intext.scm 341 */
												long BgL_za71za7_3181;

												BgL_za71za7_3181 =
													(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
												BgL_auxz00_5788 = BINT((BgL_za71za7_3181 + ((long) 1)));
											}
											CELL_SET(BgL_za2pointerza2z00_5771, BgL_auxz00_5788);
										}
										BgL_res3020z00_3183 =
											BGl_readzd2wordzd2zz__intextz00(BgL_za2pointerza2z00_5771,
											BgL_sz00_5770, (int) (BgL_sza7za7_3176));
									}
									BgL_sza7za7_1349 = BgL_res3020z00_3183;
								}
								{	/* Unsafe/intext.scm 341 */
									obj_t BgL_resz00_1350;

									BgL_resz00_1350 = MAKE_PAIR(BNIL, BNIL);
									{	/* Unsafe/intext.scm 342 */

										{	/* Unsafe/intext.scm 343 */
											bool_t BgL_testz00_6191;

											{	/* Unsafe/intext.scm 343 */
												obj_t BgL_objz00_3184;

												BgL_objz00_3184 = CELL_REF(BgL_za2definingza2z00_5768);
												BgL_testz00_6191 = INTEGERP(BgL_objz00_3184);
											}
											if (BgL_testz00_6191)
												{	/* Unsafe/intext.scm 343 */
													{	/* Unsafe/intext.scm 344 */
														obj_t BgL_vectorz00_3185;

														int BgL_kz00_3186;

														BgL_vectorz00_3185 =
															CELL_REF(BgL_za2definitionsza2z00_5769);
														BgL_kz00_3186 =
															CINT(CELL_REF(BgL_za2definingza2z00_5768));
														VECTOR_SET(BgL_vectorz00_3185, BgL_kz00_3186,
															BgL_resz00_1350);
													}
													CELL_SET(BgL_za2definingza2z00_5768, BFALSE);
												}
											else
												{	/* Unsafe/intext.scm 343 */
													BFALSE;
												}
										}
										{
											long BgL_iz00_1353;

											obj_t BgL_hdz00_1354;

											BgL_iz00_1353 = ((long) 0);
											BgL_hdz00_1354 = BgL_resz00_1350;
										BgL_zc3anonymousza32095ze3z83_1355:
											if ((BgL_iz00_1353 == (BgL_sza7za7_1349 - ((long) 2))))
												{	/* Unsafe/intext.scm 348 */
													{	/* Unsafe/intext.scm 350 */
														obj_t BgL_auxz00_6198;

														BgL_auxz00_6198 =
															BGl_readzd2itemzd2zz__intextz00
															(BgL_za2pointerza2z00_5771, BgL_sz00_5770,
															BgL_za2definitionsza2z00_5769,
															BgL_za2definingza2z00_5768);
														SET_CAR(BgL_hdz00_1354, BgL_auxz00_6198);
													}
													{	/* Unsafe/intext.scm 351 */
														obj_t BgL_auxz00_6201;

														BgL_auxz00_6201 =
															BGl_readzd2itemzd2zz__intextz00
															(BgL_za2pointerza2z00_5771, BgL_sz00_5770,
															BgL_za2definitionsza2z00_5769,
															BgL_za2definingza2z00_5768);
														SET_CDR(BgL_hdz00_1354, BgL_auxz00_6201);
												}}
											else
												{	/* Unsafe/intext.scm 348 */
													{	/* Unsafe/intext.scm 353 */
														obj_t BgL_auxz00_6204;

														BgL_auxz00_6204 =
															BGl_readzd2itemzd2zz__intextz00
															(BgL_za2pointerza2z00_5771, BgL_sz00_5770,
															BgL_za2definitionsza2z00_5769,
															BgL_za2definingza2z00_5768);
														SET_CAR(BgL_hdz00_1354, BgL_auxz00_6204);
													}
													{	/* Unsafe/intext.scm 354 */
														obj_t BgL_arg2100z00_1360;

														BgL_arg2100z00_1360 = MAKE_PAIR(BNIL, BNIL);
														SET_CDR(BgL_hdz00_1354, BgL_arg2100z00_1360);
													}
													{
														obj_t BgL_hdz00_6211;

														long BgL_iz00_6209;

														BgL_iz00_6209 = (BgL_iz00_1353 + ((long) 1));
														BgL_hdz00_6211 = CDR(BgL_hdz00_1354);
														BgL_hdz00_1354 = BgL_hdz00_6211;
														BgL_iz00_1353 = BgL_iz00_6209;
														goto BgL_zc3anonymousza32095ze3z83_1355;
													}
												}
										}
										return BgL_resz00_1350;
									}
								}
							}
							break;
						case ((unsigned char) '^'):

							{	/* Unsafe/intext.scm 360 */
								long BgL_sza7za7_1366;

								{	/* Unsafe/intext.scm 360 */
									long BgL_res3021z00_3211;

									{	/* Unsafe/intext.scm 360 */
										long BgL_sza7za7_3204;

										{	/* Unsafe/intext.scm 360 */
											unsigned char BgL_auxz00_6213;

											{	/* Unsafe/intext.scm 360 */
												long BgL_kz00_3207;

												BgL_kz00_3207 =
													(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
												BgL_auxz00_6213 =
													STRING_REF(BgL_sz00_5770, BgL_kz00_3207);
											}
											BgL_sza7za7_3204 = (BgL_auxz00_6213);
										}
										{	/* Unsafe/intext.scm 360 */
											obj_t BgL_auxz00_5786;

											{	/* Unsafe/intext.scm 360 */
												long BgL_za71za7_3209;

												BgL_za71za7_3209 =
													(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
												BgL_auxz00_5786 = BINT((BgL_za71za7_3209 + ((long) 1)));
											}
											CELL_SET(BgL_za2pointerza2z00_5771, BgL_auxz00_5786);
										}
										BgL_res3021z00_3211 =
											BGl_readzd2wordzd2zz__intextz00(BgL_za2pointerza2z00_5771,
											BgL_sz00_5770, (int) (BgL_sza7za7_3204));
									}
									BgL_sza7za7_1366 = BgL_res3021z00_3211;
								}
								{	/* Unsafe/intext.scm 360 */
									obj_t BgL_resz00_1367;

									{	/* Unsafe/intext.scm 361 */
										obj_t BgL_res3022z00_3215;

										BgL_res3022z00_3215 =
											MAKE_EXTENDED_PAIR(BNIL, BNIL, BUNSPEC);
										BgL_resz00_1367 = BgL_res3022z00_3215;
									}
									{	/* Unsafe/intext.scm 361 */

										{	/* Unsafe/intext.scm 362 */
											bool_t BgL_testz00_6223;

											{	/* Unsafe/intext.scm 362 */
												obj_t BgL_objz00_3216;

												BgL_objz00_3216 = CELL_REF(BgL_za2definingza2z00_5768);
												BgL_testz00_6223 = INTEGERP(BgL_objz00_3216);
											}
											if (BgL_testz00_6223)
												{	/* Unsafe/intext.scm 362 */
													{	/* Unsafe/intext.scm 363 */
														obj_t BgL_vectorz00_3217;

														int BgL_kz00_3218;

														BgL_vectorz00_3217 =
															CELL_REF(BgL_za2definitionsza2z00_5769);
														BgL_kz00_3218 =
															CINT(CELL_REF(BgL_za2definingza2z00_5768));
														VECTOR_SET(BgL_vectorz00_3217, BgL_kz00_3218,
															BgL_resz00_1367);
													}
													CELL_SET(BgL_za2definingza2z00_5768, BFALSE);
												}
											else
												{	/* Unsafe/intext.scm 362 */
													BFALSE;
												}
										}
										{
											long BgL_iz00_1370;

											obj_t BgL_hdz00_1371;

											BgL_iz00_1370 = ((long) 0);
											BgL_hdz00_1371 = BgL_resz00_1367;
										BgL_zc3anonymousza32106ze3z83_1372:
											if ((BgL_iz00_1370 == (BgL_sza7za7_1366 - ((long) 2))))
												{	/* Unsafe/intext.scm 367 */
													{	/* Unsafe/intext.scm 369 */
														obj_t BgL_auxz00_6230;

														BgL_auxz00_6230 =
															BGl_readzd2itemzd2zz__intextz00
															(BgL_za2pointerza2z00_5771, BgL_sz00_5770,
															BgL_za2definitionsza2z00_5769,
															BgL_za2definingza2z00_5768);
														SET_CAR(BgL_hdz00_1371, BgL_auxz00_6230);
													}
													{	/* Unsafe/intext.scm 370 */
														obj_t BgL_auxz00_6233;

														BgL_auxz00_6233 =
															BGl_readzd2itemzd2zz__intextz00
															(BgL_za2pointerza2z00_5771, BgL_sz00_5770,
															BgL_za2definitionsza2z00_5769,
															BgL_za2definingza2z00_5768);
														SET_CER(BgL_hdz00_1371, BgL_auxz00_6233);
													}
													{	/* Unsafe/intext.scm 371 */
														obj_t BgL_auxz00_6236;

														BgL_auxz00_6236 =
															BGl_readzd2itemzd2zz__intextz00
															(BgL_za2pointerza2z00_5771, BgL_sz00_5770,
															BgL_za2definitionsza2z00_5769,
															BgL_za2definingza2z00_5768);
														SET_CDR(BgL_hdz00_1371, BgL_auxz00_6236);
												}}
											else
												{	/* Unsafe/intext.scm 367 */
													{	/* Unsafe/intext.scm 373 */
														obj_t BgL_auxz00_6239;

														BgL_auxz00_6239 =
															BGl_readzd2itemzd2zz__intextz00
															(BgL_za2pointerza2z00_5771, BgL_sz00_5770,
															BgL_za2definitionsza2z00_5769,
															BgL_za2definingza2z00_5768);
														SET_CAR(BgL_hdz00_1371, BgL_auxz00_6239);
													}
													{	/* Unsafe/intext.scm 374 */
														obj_t BgL_auxz00_6242;

														BgL_auxz00_6242 =
															BGl_readzd2itemzd2zz__intextz00
															(BgL_za2pointerza2z00_5771, BgL_sz00_5770,
															BgL_za2definitionsza2z00_5769,
															BgL_za2definingza2z00_5768);
														SET_CER(BgL_hdz00_1371, BgL_auxz00_6242);
													}
													{	/* Unsafe/intext.scm 375 */
														obj_t BgL_arg2113z00_1379;

														{	/* Unsafe/intext.scm 375 */
															obj_t BgL_res3023z00_3237;

															BgL_res3023z00_3237 =
																MAKE_EXTENDED_PAIR(BNIL, BNIL, BUNSPEC);
															BgL_arg2113z00_1379 = BgL_res3023z00_3237;
														}
														SET_CDR(BgL_hdz00_1371, BgL_arg2113z00_1379);
													}
													{
														obj_t BgL_hdz00_6249;

														long BgL_iz00_6247;

														BgL_iz00_6247 = (BgL_iz00_1370 + ((long) 1));
														BgL_hdz00_6249 = CDR(BgL_hdz00_1371);
														BgL_hdz00_1371 = BgL_hdz00_6249;
														BgL_iz00_1370 = BgL_iz00_6247;
														goto BgL_zc3anonymousza32106ze3z83_1372;
													}
												}
										}
										return BgL_resz00_1367;
									}
								}
							}
							break;
						case ((unsigned char) '{'):

							{	/* Unsafe/intext.scm 410 */
								obj_t BgL_definingz00_1402;

								{	/* Unsafe/intext.scm 410 */
									obj_t BgL_oldz00_1414;

									BgL_oldz00_1414 = CELL_REF(BgL_za2definingza2z00_5768);
									CELL_SET(BgL_za2definingza2z00_5768, BFALSE);
									BgL_definingz00_1402 = BgL_oldz00_1414;
								}
								{	/* Unsafe/intext.scm 410 */
									obj_t BgL_keyz00_1403;

									BgL_keyz00_1403 =
										BGl_readzd2itemzd2zz__intextz00(BgL_za2pointerza2z00_5771,
										BgL_sz00_5770, BgL_za2definitionsza2z00_5769,
										BgL_za2definingza2z00_5768);
									{	/* Unsafe/intext.scm 413 */
										long BgL_sza7za7_1404;

										{	/* Unsafe/intext.scm 414 */
											long BgL_res3027z00_3284;

											{	/* Unsafe/intext.scm 414 */
												long BgL_sza7za7_3277;

												{	/* Unsafe/intext.scm 414 */
													unsigned char BgL_auxz00_6252;

													{	/* Unsafe/intext.scm 414 */
														long BgL_kz00_3280;

														BgL_kz00_3280 =
															(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
														BgL_auxz00_6252 =
															STRING_REF(BgL_sz00_5770, BgL_kz00_3280);
													}
													BgL_sza7za7_3277 = (BgL_auxz00_6252);
												}
												{	/* Unsafe/intext.scm 414 */
													obj_t BgL_auxz00_5780;

													{	/* Unsafe/intext.scm 414 */
														long BgL_za71za7_3282;

														BgL_za71za7_3282 =
															(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
														BgL_auxz00_5780 =
															BINT((BgL_za71za7_3282 + ((long) 1)));
													}
													CELL_SET(BgL_za2pointerza2z00_5771, BgL_auxz00_5780);
												}
												BgL_res3027z00_3284 =
													BGl_readzd2wordzd2zz__intextz00
													(BgL_za2pointerza2z00_5771, BgL_sz00_5770,
													(int) (BgL_sza7za7_3277));
											}
											BgL_sza7za7_1404 = BgL_res3027z00_3284;
										}
										{	/* Unsafe/intext.scm 414 */
											obj_t BgL_resz00_1405;

											BgL_resz00_1405 =
												make_struct(BgL_keyz00_1403,
												(int) (BgL_sza7za7_1404), BUNSPEC);
											{	/* Unsafe/intext.scm 415 */

												if (INTEGERP(BgL_definingz00_1402))
													{	/* Unsafe/intext.scm 417 */
														obj_t BgL_vectorz00_3289;

														int BgL_kz00_3290;

														BgL_vectorz00_3289 =
															CELL_REF(BgL_za2definitionsza2z00_5769);
														BgL_kz00_3290 = CINT(BgL_definingz00_1402);
														VECTOR_SET(BgL_vectorz00_3289, BgL_kz00_3290,
															BgL_resz00_1405);
													}
												else
													{	/* Unsafe/intext.scm 416 */
														BFALSE;
													}
												{
													long BgL_iz00_1408;

													BgL_iz00_1408 = ((long) 0);
												BgL_zc3anonymousza32133ze3z83_1409:
													if ((BgL_iz00_1408 < BgL_sza7za7_1404))
														{	/* Unsafe/intext.scm 418 */
															{	/* Unsafe/intext.scm 418 */
																obj_t BgL_auxz00_6271;

																int BgL_auxz00_6269;

																BgL_auxz00_6271 =
																	BGl_readzd2itemzd2zz__intextz00
																	(BgL_za2pointerza2z00_5771, BgL_sz00_5770,
																	BgL_za2definitionsza2z00_5769,
																	BgL_za2definingza2z00_5768);
																BgL_auxz00_6269 = (int) (BgL_iz00_1408);
																STRUCT_SET(BgL_resz00_1405, BgL_auxz00_6269,
																	BgL_auxz00_6271);
															}
															{
																long BgL_iz00_6274;

																BgL_iz00_6274 = (BgL_iz00_1408 + ((long) 1));
																BgL_iz00_1408 = BgL_iz00_6274;
																goto BgL_zc3anonymousza32133ze3z83_1409;
															}
														}
													else
														{	/* Unsafe/intext.scm 418 */
															((bool_t) 0);
														}
												}
												return BgL_resz00_1405;
											}
										}
									}
								}
							}
							break;
						case ((unsigned char) '|'):

							{	/* Unsafe/intext.scm 423 */
								obj_t BgL_definingz00_1416;

								{	/* Unsafe/intext.scm 423 */
									obj_t BgL_oldz00_1434;

									BgL_oldz00_1434 = CELL_REF(BgL_za2definingza2z00_5768);
									CELL_SET(BgL_za2definingza2z00_5768, BFALSE);
									BgL_definingz00_1416 = BgL_oldz00_1434;
								}
								{	/* Unsafe/intext.scm 423 */
									obj_t BgL_keyz00_1417;

									BgL_keyz00_1417 =
										BGl_readzd2itemzd2zz__intextz00(BgL_za2pointerza2z00_5771,
										BgL_sz00_5770, BgL_za2definitionsza2z00_5769,
										BgL_za2definingza2z00_5768);
									{	/* Unsafe/intext.scm 426 */
										long BgL_sza7za7_1418;

										{	/* Unsafe/intext.scm 427 */
											long BgL_res3028z00_3307;

											{	/* Unsafe/intext.scm 427 */
												long BgL_sza7za7_3300;

												{	/* Unsafe/intext.scm 427 */
													unsigned char BgL_auxz00_6277;

													{	/* Unsafe/intext.scm 427 */
														long BgL_kz00_3303;

														BgL_kz00_3303 =
															(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
														BgL_auxz00_6277 =
															STRING_REF(BgL_sz00_5770, BgL_kz00_3303);
													}
													BgL_sza7za7_3300 = (BgL_auxz00_6277);
												}
												{	/* Unsafe/intext.scm 427 */
													obj_t BgL_auxz00_5778;

													{	/* Unsafe/intext.scm 427 */
														long BgL_za71za7_3305;

														BgL_za71za7_3305 =
															(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
														BgL_auxz00_5778 =
															BINT((BgL_za71za7_3305 + ((long) 1)));
													}
													CELL_SET(BgL_za2pointerza2z00_5771, BgL_auxz00_5778);
												}
												BgL_res3028z00_3307 =
													BGl_readzd2wordzd2zz__intextz00
													(BgL_za2pointerza2z00_5771, BgL_sz00_5770,
													(int) (BgL_sza7za7_3300));
											}
											BgL_sza7za7_1418 = BgL_res3028z00_3307;
										}
										{	/* Unsafe/intext.scm 427 */
											obj_t BgL_structz00_1419;

											BgL_structz00_1419 =
												make_struct(BgL_keyz00_1417,
												(int) (BgL_sza7za7_1418), BUNSPEC);
											{	/* Unsafe/intext.scm 428 */
												BgL_objectz00_bglt BgL_objectz00_1420;

												BgL_objectz00_1420 =
													BGl_allocatezd2instancezd2zz__objectz00
													(BgL_keyz00_1417);
												{	/* Unsafe/intext.scm 429 */

													if (INTEGERP(BgL_definingz00_1416))
														{	/* Unsafe/intext.scm 431 */
															obj_t BgL_vectorz00_3313;

															int BgL_kz00_3314;

															obj_t BgL_objz00_3315;

															BgL_vectorz00_3313 =
																CELL_REF(BgL_za2definitionsza2z00_5769);
															BgL_kz00_3314 = CINT(BgL_definingz00_1416);
															BgL_objz00_3315 = (obj_t) (BgL_objectz00_1420);
															VECTOR_SET(BgL_vectorz00_3313, BgL_kz00_3314,
																BgL_objz00_3315);
														}
													else
														{	/* Unsafe/intext.scm 430 */
															BFALSE;
														}
													{
														long BgL_iz00_1423;

														BgL_iz00_1423 = ((long) 0);
													BgL_zc3anonymousza32139ze3z83_1424:
														if ((BgL_iz00_1423 < BgL_sza7za7_1418))
															{	/* Unsafe/intext.scm 432 */
																{	/* Unsafe/intext.scm 432 */
																	obj_t BgL_auxz00_6298;

																	int BgL_auxz00_6296;

																	BgL_auxz00_6298 =
																		BGl_readzd2itemzd2zz__intextz00
																		(BgL_za2pointerza2z00_5771, BgL_sz00_5770,
																		BgL_za2definitionsza2z00_5769,
																		BgL_za2definingza2z00_5768);
																	BgL_auxz00_6296 = (int) (BgL_iz00_1423);
																	STRUCT_SET(BgL_structz00_1419,
																		BgL_auxz00_6296, BgL_auxz00_6298);
																}
																{
																	long BgL_iz00_6301;

																	BgL_iz00_6301 = (BgL_iz00_1423 + ((long) 1));
																	BgL_iz00_1423 = BgL_iz00_6301;
																	goto BgL_zc3anonymousza32139ze3z83_1424;
																}
															}
														else
															{	/* Unsafe/intext.scm 432 */
																((bool_t) 0);
															}
													}
													{	/* Unsafe/intext.scm 433 */
														obj_t BgL_hashz00_1429;

														BgL_hashz00_1429 =
															BGl_readzd2itemzd2zz__intextz00
															(BgL_za2pointerza2z00_5771, BgL_sz00_5770,
															BgL_za2definitionsza2z00_5769,
															BgL_za2definingza2z00_5768);
														{	/* Unsafe/intext.scm 434 */
															bool_t BgL_testz00_6304;

															{	/* Unsafe/intext.scm 434 */
																long BgL_arg2146z00_1431;

																{	/* Unsafe/intext.scm 434 */
																	obj_t BgL_arg2147z00_1432;

																	{	/* Unsafe/intext.scm 434 */
																		long BgL_arg3003z00_3324;

																		{	/* Unsafe/intext.scm 434 */
																			long BgL_arg3004z00_3325;

																			BgL_arg3004z00_3325 =
																				BGL_OBJECT_CLASS_NUM
																				(BgL_objectz00_1420);
																			BgL_arg3003z00_3324 =
																				(BgL_arg3004z00_3325 - OBJECT_TYPE);
																		}
																		BgL_arg2147z00_1432 =
																			VECTOR_REF
																			(BGl_za2classesza2z00zz__objectz00,
																			(int) (BgL_arg3003z00_3324));
																	}
																	BgL_arg2146z00_1431 =
																		BGl_classzd2hashzd2zz__objectz00
																		(BgL_arg2147z00_1432);
																}
																BgL_testz00_6304 =
																	(
																	(long) CINT(BgL_hashz00_1429) ==
																	BgL_arg2146z00_1431);
															}
															if (BgL_testz00_6304)
																{	/* Unsafe/intext.scm 434 */
																	return
																		(obj_t)
																		(BGl_structzb2objectzd2ze3objectz83zz__objectz00
																		(BgL_objectz00_1420, BgL_structz00_1419));
																}
															else
																{	/* Unsafe/intext.scm 434 */
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_string3115z00zz__intextz00,
																		BGl_string3134z00zz__intextz00,
																		BgL_keyz00_1417);
																}
														}
													}
												}
											}
										}
									}
								}
							}
							break;
						case ((unsigned char) 'O'):

							{	/* Unsafe/intext.scm 440 */
								obj_t BgL_definingz00_1436;

								{	/* Unsafe/intext.scm 440 */
									obj_t BgL_oldz00_1445;

									BgL_oldz00_1445 = CELL_REF(BgL_za2definingza2z00_5768);
									CELL_SET(BgL_za2definingza2z00_5768, BFALSE);
									BgL_definingz00_1436 = BgL_oldz00_1445;
								}
								{	/* Unsafe/intext.scm 440 */
									obj_t BgL_objz00_1437;

									BgL_objz00_1437 =
										BGl_readzd2itemzd2zz__intextz00(BgL_za2pointerza2z00_5771,
										BgL_sz00_5770, BgL_za2definitionsza2z00_5769,
										BgL_za2definingza2z00_5768);
									{	/* Unsafe/intext.scm 443 */
										obj_t BgL_hashz00_1438;

										BgL_hashz00_1438 =
											BGl_readzd2itemzd2zz__intextz00(BgL_za2pointerza2z00_5771,
											BgL_sz00_5770, BgL_za2definitionsza2z00_5769,
											BgL_za2definingza2z00_5768);
										{	/* Unsafe/intext.scm 444 */
											obj_t BgL_unserializa7erza7_1439;

											{	/* Unsafe/intext.scm 445 */
												obj_t BgL_cellz00_3334;

												BgL_cellz00_3334 =
													BGl_assvz00zz__r4_pairs_and_lists_6_3z00
													(BgL_hashz00_1438,
													BGl_za2classzd2serializa7ationza2z75zz__intextz00);
												if (PAIRP(BgL_cellz00_3334))
													{	/* Unsafe/intext.scm 445 */
														BgL_unserializa7erza7_1439 =
															CAR(CDR(CDR(BgL_cellz00_3334)));
													}
												else
													{	/* Unsafe/intext.scm 445 */
														BgL_unserializa7erza7_1439 =
															BGl_errorz00zz__errorz00
															(BGl_symbol3131z00zz__intextz00,
															BGl_string3132z00zz__intextz00, BgL_hashz00_1438);
													}
											}
											{	/* Unsafe/intext.scm 445 */
												obj_t BgL_objectz00_1440;

												BgL_objectz00_1440 =
													PROCEDURE_ENTRY(BgL_unserializa7erza7_1439)
													(BgL_unserializa7erza7_1439, BgL_objz00_1437, BEOA);
												{	/* Unsafe/intext.scm 446 */

													if (INTEGERP(BgL_definingz00_1436))
														{	/* Unsafe/intext.scm 448 */
															obj_t BgL_vectorz00_3344;

															int BgL_kz00_3345;

															BgL_vectorz00_3344 =
																CELL_REF(BgL_za2definitionsza2z00_5769);
															BgL_kz00_3345 = CINT(BgL_definingz00_1436);
															VECTOR_SET(BgL_vectorz00_3344, BgL_kz00_3345,
																BgL_objectz00_1440);
														}
													else
														{	/* Unsafe/intext.scm 447 */
															BFALSE;
														}
													{	/* Unsafe/intext.scm 449 */
														bool_t BgL_testz00_6330;

														{	/* Unsafe/intext.scm 449 */
															long BgL_arg2152z00_1443;

															{	/* Unsafe/intext.scm 449 */
																obj_t BgL_arg2153z00_1444;

																{	/* Unsafe/intext.scm 449 */
																	BgL_objectz00_bglt BgL_objectz00_3347;

																	BgL_objectz00_3347 =
																		(BgL_objectz00_bglt) (BgL_objectz00_1440);
																	{	/* Unsafe/intext.scm 449 */
																		long BgL_arg3003z00_3348;

																		{	/* Unsafe/intext.scm 449 */
																			long BgL_arg3004z00_3349;

																			BgL_arg3004z00_3349 =
																				BGL_OBJECT_CLASS_NUM
																				(BgL_objectz00_3347);
																			BgL_arg3003z00_3348 =
																				(BgL_arg3004z00_3349 - OBJECT_TYPE);
																		}
																		BgL_arg2153z00_1444 =
																			VECTOR_REF
																			(BGl_za2classesza2z00zz__objectz00,
																			(int) (BgL_arg3003z00_3348));
																}}
																BgL_arg2152z00_1443 =
																	BGl_classzd2hashzd2zz__objectz00
																	(BgL_arg2153z00_1444);
															}
															BgL_testz00_6330 =
																(
																(long) CINT(BgL_hashz00_1438) ==
																BgL_arg2152z00_1443);
														}
														if (BgL_testz00_6330)
															{	/* Unsafe/intext.scm 449 */
																return BgL_objectz00_1440;
															}
														else
															{	/* Unsafe/intext.scm 449 */
																return
																	BGl_errorz00zz__errorz00
																	(BGl_string3115z00zz__intextz00,
																	BGl_string3133z00zz__intextz00,
																	BgL_objectz00_1440);
															}
													}
												}
											}
										}
									}
								}
							}
							break;
						case ((unsigned char) 'f'):

							return
								DOUBLE_TO_REAL(BGl_readzd2floatzd2zz__intextz00
								(BgL_za2pointerza2z00_5771, BgL_sz00_5770));
							break;
						case ((unsigned char) 'z'):

							BgL_sz00_1130 = BgL_sz00_5770;
							{	/* Unsafe/intext.scm 169 */
								long BgL_sza7za7_1132;

								{	/* Unsafe/intext.scm 169 */
									long BgL_res3012z00_2930;

									{	/* Unsafe/intext.scm 169 */
										long BgL_sza7za7_2923;

										{	/* Unsafe/intext.scm 169 */
											unsigned char BgL_auxz00_6342;

											{	/* Unsafe/intext.scm 169 */
												long BgL_kz00_2926;

												BgL_kz00_2926 =
													(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
												BgL_auxz00_6342 =
													STRING_REF(BgL_sz00_1130, BgL_kz00_2926);
											}
											BgL_sza7za7_2923 = (BgL_auxz00_6342);
										}
										{	/* Unsafe/intext.scm 169 */
											obj_t BgL_auxz00_5801;

											{	/* Unsafe/intext.scm 169 */
												long BgL_za71za7_2928;

												BgL_za71za7_2928 =
													(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
												BgL_auxz00_5801 = BINT((BgL_za71za7_2928 + ((long) 1)));
											}
											CELL_SET(BgL_za2pointerza2z00_5771, BgL_auxz00_5801);
										}
										BgL_res3012z00_2930 =
											BGl_readzd2wordzd2zz__intextz00(BgL_za2pointerza2z00_5771,
											BgL_sz00_1130, (int) (BgL_sza7za7_2923));
									}
									BgL_sza7za7_1132 = BgL_res3012z00_2930;
								}
								{	/* Unsafe/intext.scm 169 */
									obj_t BgL_resz00_1133;

									{	/* Unsafe/intext.scm 170 */
										obj_t BgL_arg1968z00_1134;

										{	/* Unsafe/intext.scm 170 */
											long BgL_arg1970z00_1137;

											{	/* Unsafe/intext.scm 170 */
												long BgL_za71za7_2931;

												BgL_za71za7_2931 =
													(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
												BgL_arg1970z00_1137 =
													(BgL_za71za7_2931 + BgL_sza7za7_1132);
											}
											{	/* Unsafe/intext.scm 170 */
												long BgL_startz00_2934;

												BgL_startz00_2934 =
													(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
												BgL_arg1968z00_1134 =
													c_substring(BgL_sz00_1130, BgL_startz00_2934,
													BgL_arg1970z00_1137);
										}}
										{	/* Ieee/fixnum.scm 365 */

											BgL_resz00_1133 =
												BGl_stringzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00
												(BgL_arg1968z00_1134, ((long) 10));
									}}
									{	/* Unsafe/intext.scm 170 */

										{	/* Unsafe/intext.scm 171 */
											obj_t BgL_auxz00_5802;

											{	/* Unsafe/intext.scm 171 */
												long BgL_za71za7_2936;

												BgL_za71za7_2936 =
													(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
												BgL_auxz00_5802 =
													BINT((BgL_za71za7_2936 + BgL_sza7za7_1132));
											}
											CELL_SET(BgL_za2pointerza2z00_5771, BgL_auxz00_5802);
										}
										return BgL_resz00_1133;
									}
								}
							}
							break;
						case ((unsigned char) '-'):

							{	/* Unsafe/intext.scm 492 */
								long BgL_arg2164z00_1467;

								BgL_arg2164z00_1467 =
									BGl_readzd2siza7ez75zz__intextz00(BgL_za2pointerza2z00_5771,
									BgL_sz00_5770);
								return BINT(NEG(BgL_arg2164z00_1467));
							}
							break;
						case ((unsigned char) '!'):

							{	/* Unsafe/intext.scm 381 */
								obj_t BgL_resz00_1385;

								BgL_resz00_1385 = MAKE_CELL(BUNSPEC);
								{	/* Unsafe/intext.scm 382 */
									bool_t BgL_testz00_6363;

									{	/* Unsafe/intext.scm 382 */
										obj_t BgL_objz00_3244;

										BgL_objz00_3244 = CELL_REF(BgL_za2definingza2z00_5768);
										BgL_testz00_6363 = INTEGERP(BgL_objz00_3244);
									}
									if (BgL_testz00_6363)
										{	/* Unsafe/intext.scm 382 */
											{	/* Unsafe/intext.scm 383 */
												obj_t BgL_vectorz00_3245;

												int BgL_kz00_3246;

												BgL_vectorz00_3245 =
													CELL_REF(BgL_za2definitionsza2z00_5769);
												BgL_kz00_3246 =
													CINT(CELL_REF(BgL_za2definingza2z00_5768));
												VECTOR_SET(BgL_vectorz00_3245, BgL_kz00_3246,
													BgL_resz00_1385);
											}
											CELL_SET(BgL_za2definingza2z00_5768, BFALSE);
										}
									else
										{	/* Unsafe/intext.scm 382 */
											BFALSE;
										}
								}
								CELL_SET(BgL_resz00_1385,
									BGl_readzd2itemzd2zz__intextz00(BgL_za2pointerza2z00_5771,
										BgL_sz00_5770, BgL_za2definitionsza2z00_5769,
										BgL_za2definingza2z00_5768));
								return BgL_resz00_1385;
							}
							break;
						case ((unsigned char) 'w'):

							{	/* Unsafe/intext.scm 390 */
								obj_t BgL_resz00_1390;

								BgL_resz00_1390 = make_weakptr(BUNSPEC);
								{	/* Unsafe/intext.scm 391 */
									bool_t BgL_testz00_6370;

									{	/* Unsafe/intext.scm 391 */
										obj_t BgL_objz00_3250;

										BgL_objz00_3250 = CELL_REF(BgL_za2definingza2z00_5768);
										BgL_testz00_6370 = INTEGERP(BgL_objz00_3250);
									}
									if (BgL_testz00_6370)
										{	/* Unsafe/intext.scm 391 */
											{	/* Unsafe/intext.scm 392 */
												obj_t BgL_vectorz00_3251;

												int BgL_kz00_3252;

												BgL_vectorz00_3251 =
													CELL_REF(BgL_za2definitionsza2z00_5769);
												BgL_kz00_3252 =
													CINT(CELL_REF(BgL_za2definingza2z00_5768));
												VECTOR_SET(BgL_vectorz00_3251, BgL_kz00_3252,
													BgL_resz00_1390);
											}
											CELL_SET(BgL_za2definingza2z00_5768, BFALSE);
										}
									else
										{	/* Unsafe/intext.scm 391 */
											BFALSE;
										}
								}
								{	/* Unsafe/intext.scm 394 */
									obj_t BgL_arg2124z00_1392;

									BgL_arg2124z00_1392 =
										BGl_readzd2itemzd2zz__intextz00(BgL_za2pointerza2z00_5771,
										BgL_sz00_5770, BgL_za2definitionsza2z00_5769,
										BgL_za2definingza2z00_5768);
									weakptr_data_set(BgL_resz00_1390, BgL_arg2124z00_1392);
									BUNSPEC;
									BUNSPEC;
								}
								return BgL_resz00_1390;
							}
							break;
						case ((unsigned char) '+'):

							{	/* Unsafe/intext.scm 240 */
								obj_t BgL_strz00_1190;

								BgL_strz00_1190 =
									BGl_readzd2stringzd2zz__intextz00(BgL_za2definingza2z00_5768,
									BgL_za2definitionsza2z00_5769, BgL_za2pointerza2z00_5771,
									BgL_sz00_5770);
								{	/* Unsafe/intext.scm 240 */
									obj_t BgL_str2z00_1191;

									BgL_str2z00_1191 =
										BGl_readzd2stringzd2zz__intextz00
										(BgL_za2definingza2z00_5768, BgL_za2definitionsza2z00_5769,
										BgL_za2pointerza2z00_5771, BgL_sz00_5770);
									{	/* Unsafe/intext.scm 241 */
										obj_t BgL_unserializa7erza7_1192;

										{	/* Unsafe/intext.scm 242 */
											obj_t BgL_cellz00_3007;

											BgL_cellz00_3007 =
												BGl_assocz00zz__r4_pairs_and_lists_6_3z00
												(BgL_strz00_1190,
												BGl_za2customzd2serializa7ationza2z75zz__intextz00);
											if (PAIRP(BgL_cellz00_3007))
												{	/* Unsafe/intext.scm 242 */
													BgL_unserializa7erza7_1192 =
														CAR(CDR(CDR(BgL_cellz00_3007)));
												}
											else
												{	/* Unsafe/intext.scm 242 */
													BgL_unserializa7erza7_1192 =
														BGl_errorz00zz__errorz00
														(BGl_symbol3131z00zz__intextz00,
														BGl_string3157z00zz__intextz00, BgL_strz00_1190);
												}
										}
										{	/* Unsafe/intext.scm 242 */

											if (PROCEDUREP(BgL_unserializa7erza7_1192))
												{	/* Unsafe/intext.scm 243 */
													return
														PROCEDURE_ENTRY(BgL_unserializa7erza7_1192)
														(BgL_unserializa7erza7_1192, BgL_str2z00_1191,
														BEOA);
												}
											else
												{	/* Unsafe/intext.scm 243 */
													return
														BGl_errorz00zz__errorz00
														(BGl_string3115z00zz__intextz00,
														BGl_string3158z00zz__intextz00, BgL_strz00_1190);
												}
										}
									}
								}
							}
							break;
						case ((unsigned char) 'E'):

							{	/* Unsafe/intext.scm 496 */
								long BgL_auxz00_6390;

								{	/* Unsafe/intext.scm 249 */
									long BgL_sza7za7_1195;

									{	/* Unsafe/intext.scm 249 */
										long BgL_res3014z00_3025;

										{	/* Unsafe/intext.scm 249 */
											long BgL_sza7za7_3018;

											{	/* Unsafe/intext.scm 249 */
												unsigned char BgL_auxz00_6391;

												{	/* Unsafe/intext.scm 249 */
													long BgL_kz00_3021;

													BgL_kz00_3021 =
														(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
													BgL_auxz00_6391 =
														STRING_REF(BgL_sz00_5770, BgL_kz00_3021);
												}
												BgL_sza7za7_3018 = (BgL_auxz00_6391);
											}
											{	/* Unsafe/intext.scm 249 */
												obj_t BgL_auxz00_5799;

												{	/* Unsafe/intext.scm 249 */
													long BgL_za71za7_3023;

													BgL_za71za7_3023 =
														(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
													BgL_auxz00_5799 =
														BINT((BgL_za71za7_3023 + ((long) 1)));
												}
												CELL_SET(BgL_za2pointerza2z00_5771, BgL_auxz00_5799);
											}
											BgL_res3014z00_3025 =
												BGl_readzd2wordzd2zz__intextz00
												(BgL_za2pointerza2z00_5771, BgL_sz00_5770,
												(int) (BgL_sza7za7_3018));
										}
										BgL_sza7za7_1195 = BgL_res3014z00_3025;
									}
									{	/* Unsafe/intext.scm 249 */
										long BgL_resz00_1196;

										{	/* Unsafe/intext.scm 250 */
											obj_t BgL_arg2006z00_1197;

											{	/* Unsafe/intext.scm 250 */
												long BgL_arg2008z00_1199;

												{	/* Unsafe/intext.scm 250 */
													long BgL_za71za7_3026;

													BgL_za71za7_3026 =
														(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
													BgL_arg2008z00_1199 =
														(BgL_za71za7_3026 + BgL_sza7za7_1195);
												}
												{	/* Unsafe/intext.scm 250 */
													long BgL_startz00_3029;

													BgL_startz00_3029 =
														(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
													BgL_arg2006z00_1197 =
														c_substring(BgL_sz00_5770, BgL_startz00_3029,
														BgL_arg2008z00_1199);
											}}
											BgL_resz00_1196 =
												BGl_stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00
												(BgL_arg2006z00_1197, BNIL);
										}
										{	/* Unsafe/intext.scm 250 */

											{	/* Unsafe/intext.scm 251 */
												obj_t BgL_auxz00_5800;

												{	/* Unsafe/intext.scm 251 */
													long BgL_za71za7_3031;

													BgL_za71za7_3031 =
														(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
													BgL_auxz00_5800 =
														BINT((BgL_za71za7_3031 + BgL_sza7za7_1195));
												}
												CELL_SET(BgL_za2pointerza2z00_5771, BgL_auxz00_5800);
											}
											BgL_auxz00_6390 = BgL_resz00_1196;
								}}}
								return make_belong(BgL_auxz00_6390);
							}
							break;
						case ((unsigned char) 'L'):

							{	/* Unsafe/intext.scm 497 */
								BGL_LONGLONG_T BgL_auxz00_6409;

								{	/* Unsafe/intext.scm 256 */
									long BgL_sza7za7_1201;

									{	/* Unsafe/intext.scm 256 */
										long BgL_res3015z00_3041;

										{	/* Unsafe/intext.scm 256 */
											long BgL_sza7za7_3034;

											{	/* Unsafe/intext.scm 256 */
												unsigned char BgL_auxz00_6410;

												{	/* Unsafe/intext.scm 256 */
													long BgL_kz00_3037;

													BgL_kz00_3037 =
														(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
													BgL_auxz00_6410 =
														STRING_REF(BgL_sz00_5770, BgL_kz00_3037);
												}
												BgL_sza7za7_3034 = (BgL_auxz00_6410);
											}
											{	/* Unsafe/intext.scm 256 */
												obj_t BgL_auxz00_5797;

												{	/* Unsafe/intext.scm 256 */
													long BgL_za71za7_3039;

													BgL_za71za7_3039 =
														(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
													BgL_auxz00_5797 =
														BINT((BgL_za71za7_3039 + ((long) 1)));
												}
												CELL_SET(BgL_za2pointerza2z00_5771, BgL_auxz00_5797);
											}
											BgL_res3015z00_3041 =
												BGl_readzd2wordzd2zz__intextz00
												(BgL_za2pointerza2z00_5771, BgL_sz00_5770,
												(int) (BgL_sza7za7_3034));
										}
										BgL_sza7za7_1201 = BgL_res3015z00_3041;
									}
									{	/* Unsafe/intext.scm 256 */
										BGL_LONGLONG_T BgL_resz00_1202;

										{	/* Unsafe/intext.scm 257 */
											obj_t BgL_arg2010z00_1203;

											{	/* Unsafe/intext.scm 257 */
												long BgL_arg2012z00_1205;

												{	/* Unsafe/intext.scm 257 */
													long BgL_za71za7_3042;

													BgL_za71za7_3042 =
														(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
													BgL_arg2012z00_1205 =
														(BgL_za71za7_3042 + BgL_sza7za7_1201);
												}
												{	/* Unsafe/intext.scm 257 */
													long BgL_startz00_3045;

													BgL_startz00_3045 =
														(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
													BgL_arg2010z00_1203 =
														c_substring(BgL_sz00_5770, BgL_startz00_3045,
														BgL_arg2012z00_1205);
											}}
											BgL_resz00_1202 =
												BGl_stringzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00
												(BgL_arg2010z00_1203, BNIL);
										}
										{	/* Unsafe/intext.scm 257 */

											{	/* Unsafe/intext.scm 258 */
												obj_t BgL_auxz00_5798;

												{	/* Unsafe/intext.scm 258 */
													long BgL_za71za7_3047;

													BgL_za71za7_3047 =
														(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
													BgL_auxz00_5798 =
														BINT((BgL_za71za7_3047 + BgL_sza7za7_1201));
												}
												CELL_SET(BgL_za2pointerza2z00_5771, BgL_auxz00_5798);
											}
											BgL_auxz00_6409 = BgL_resz00_1202;
								}}}
								return make_bllong(BgL_auxz00_6409);
							}
							break;
						case ((unsigned char) 'p'):

							BgL_sz00_1394 = BgL_sz00_5770;
							BgL_converterz00_1395 =
								BGl_za2stringzd2ze3processza2z31zz__intextz00;
						BgL_zc3anonymousza32126ze3z83_1396:
							{	/* Unsafe/intext.scm 400 */
								long BgL_sza7za7_1397;

								{	/* Unsafe/intext.scm 400 */
									long BgL_res3026z00_3264;

									{	/* Unsafe/intext.scm 400 */
										long BgL_sza7za7_3257;

										{	/* Unsafe/intext.scm 400 */
											unsigned char BgL_auxz00_6428;

											{	/* Unsafe/intext.scm 400 */
												long BgL_kz00_3260;

												BgL_kz00_3260 =
													(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
												BgL_auxz00_6428 =
													STRING_REF(BgL_sz00_1394, BgL_kz00_3260);
											}
											BgL_sza7za7_3257 = (BgL_auxz00_6428);
										}
										{	/* Unsafe/intext.scm 400 */
											obj_t BgL_auxz00_5781;

											{	/* Unsafe/intext.scm 400 */
												long BgL_za71za7_3262;

												BgL_za71za7_3262 =
													(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
												BgL_auxz00_5781 = BINT((BgL_za71za7_3262 + ((long) 1)));
											}
											CELL_SET(BgL_za2pointerza2z00_5771, BgL_auxz00_5781);
										}
										BgL_res3026z00_3264 =
											BGl_readzd2wordzd2zz__intextz00(BgL_za2pointerza2z00_5771,
											BgL_sz00_1394, (int) (BgL_sza7za7_3257));
									}
									BgL_sza7za7_1397 = BgL_res3026z00_3264;
								}
								{	/* Unsafe/intext.scm 400 */
									obj_t BgL_resz00_1398;

									{	/* Unsafe/intext.scm 401 */
										long BgL_arg2130z00_1400;

										{	/* Unsafe/intext.scm 401 */
											long BgL_za71za7_3265;

											BgL_za71za7_3265 =
												(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
											BgL_arg2130z00_1400 =
												(BgL_za71za7_3265 + BgL_sza7za7_1397);
										}
										{	/* Unsafe/intext.scm 401 */
											long BgL_startz00_3268;

											BgL_startz00_3268 =
												(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
											BgL_resz00_1398 =
												c_substring(BgL_sz00_1394, BgL_startz00_3268,
												BgL_arg2130z00_1400);
									}}
									{	/* Unsafe/intext.scm 401 */

										{	/* Unsafe/intext.scm 402 */
											bool_t BgL_testz00_6441;

											{	/* Unsafe/intext.scm 402 */
												obj_t BgL_objz00_3270;

												BgL_objz00_3270 = CELL_REF(BgL_za2definingza2z00_5768);
												BgL_testz00_6441 = INTEGERP(BgL_objz00_3270);
											}
											if (BgL_testz00_6441)
												{	/* Unsafe/intext.scm 402 */
													{	/* Unsafe/intext.scm 403 */
														obj_t BgL_vectorz00_3271;

														int BgL_kz00_3272;

														BgL_vectorz00_3271 =
															CELL_REF(BgL_za2definitionsza2z00_5769);
														BgL_kz00_3272 =
															CINT(CELL_REF(BgL_za2definingza2z00_5768));
														VECTOR_SET(BgL_vectorz00_3271, BgL_kz00_3272,
															BgL_resz00_1398);
													}
													CELL_SET(BgL_za2definingza2z00_5768, BFALSE);
												}
											else
												{	/* Unsafe/intext.scm 402 */
													BFALSE;
												}
										}
										{	/* Unsafe/intext.scm 405 */
											obj_t BgL_auxz00_5783;

											{	/* Unsafe/intext.scm 405 */
												long BgL_za71za7_3274;

												BgL_za71za7_3274 =
													(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
												BgL_auxz00_5783 =
													BINT((BgL_za71za7_3274 + BgL_sza7za7_1397));
											}
											CELL_SET(BgL_za2pointerza2z00_5771, BgL_auxz00_5783);
										}
										return
											PROCEDURE_ENTRY(BgL_converterz00_1395)
											(BgL_converterz00_1395, BgL_resz00_1398, BEOA);
									}
								}
							}
							break;
						case ((unsigned char) 'e'):

							{
								obj_t BgL_converterz00_6451;

								obj_t BgL_sz00_6450;

								BgL_sz00_6450 = BgL_sz00_5770;
								BgL_converterz00_6451 =
									BGl_za2stringzd2ze3processza2z31zz__intextz00;
								BgL_converterz00_1395 = BgL_converterz00_6451;
								BgL_sz00_1394 = BgL_sz00_6450;
								goto BgL_zc3anonymousza32126ze3z83_1396;
							}
							break;
						case ((unsigned char) 'o'):

							{
								obj_t BgL_converterz00_6453;

								obj_t BgL_sz00_6452;

								BgL_sz00_6452 = BgL_sz00_5770;
								BgL_converterz00_6453 =
									BGl_za2stringzd2ze3opaqueza2z31zz__intextz00;
								BgL_converterz00_1395 = BgL_converterz00_6453;
								BgL_sz00_1394 = BgL_sz00_6452;
								goto BgL_zc3anonymousza32126ze3z83_1396;
							}
							break;
						case ((unsigned char) 'd'):

							return
								bgl_seconds_to_date
								(BGl_stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00
								(BGl_readzd2stringzd2zz__intextz00(BgL_za2definingza2z00_5768,
										BgL_za2definitionsza2z00_5769, BgL_za2pointerza2z00_5771,
										BgL_sz00_5770), BNIL));
							break;
						default:
							{	/* Unsafe/intext.scm 467 */
								obj_t BgL_auxz00_5774;

								{	/* Unsafe/intext.scm 467 */
									long BgL_za71za7_3380;

									BgL_za71za7_3380 =
										(long) CINT(CELL_REF(BgL_za2pointerza2z00_5771));
									BgL_auxz00_5774 = BINT((BgL_za71za7_3380 - ((long) 1)));
								}
								CELL_SET(BgL_za2pointerza2z00_5771, BgL_auxz00_5774);
							}
							return
								BINT(BGl_readzd2siza7ez75zz__intextz00
								(BgL_za2pointerza2z00_5771, BgL_sz00_5770));
						}
				}
			}
		}
	}



/* read-size */
	long BGl_readzd2siza7ez75zz__intextz00(obj_t BgL_za2pointerza2z00_5803,
		obj_t BgL_sz00_1168)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 201 */
			{	/* Unsafe/intext.scm 199 */
				long BgL_sza7za7_2968;

				{	/* Unsafe/intext.scm 199 */
					unsigned char BgL_auxz00_6463;

					{	/* Unsafe/intext.scm 199 */
						long BgL_kz00_2971;

						BgL_kz00_2971 = (long) CINT(CELL_REF(BgL_za2pointerza2z00_5803));
						BgL_auxz00_6463 = STRING_REF(BgL_sz00_1168, BgL_kz00_2971);
					}
					BgL_sza7za7_2968 = (BgL_auxz00_6463);
				}
				{	/* Unsafe/intext.scm 199 */
					obj_t BgL_auxz00_5804;

					{	/* Unsafe/intext.scm 199 */
						long BgL_za71za7_2973;

						BgL_za71za7_2973 = (long) CINT(CELL_REF(BgL_za2pointerza2z00_5803));
						BgL_auxz00_5804 = BINT((BgL_za71za7_2973 + ((long) 1)));
					}
					CELL_SET(BgL_za2pointerza2z00_5803, BgL_auxz00_5804);
				}
				return
					BGl_readzd2wordzd2zz__intextz00(BgL_za2pointerza2z00_5803,
					BgL_sz00_1168, (int) (BgL_sza7za7_2968));
		}}
	}



/* read-string */
	obj_t BGl_readzd2stringzd2zz__intextz00(obj_t BgL_za2definingza2z00_5807,
		obj_t BgL_za2definitionsza2z00_5806, obj_t BgL_za2pointerza2z00_5805,
		obj_t BgL_sz00_1172)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 211 */
			{	/* Unsafe/intext.scm 205 */
				long BgL_sza7za7_1174;

				{	/* Unsafe/intext.scm 205 */
					long BgL_res3013z00_2983;

					{	/* Unsafe/intext.scm 205 */
						long BgL_sza7za7_2976;

						{	/* Unsafe/intext.scm 205 */
							unsigned char BgL_auxz00_6472;

							{	/* Unsafe/intext.scm 205 */
								long BgL_kz00_2979;

								BgL_kz00_2979 =
									(long) CINT(CELL_REF(BgL_za2pointerza2z00_5805));
								BgL_auxz00_6472 = STRING_REF(BgL_sz00_1172, BgL_kz00_2979);
							}
							BgL_sza7za7_2976 = (BgL_auxz00_6472);
						}
						{	/* Unsafe/intext.scm 205 */
							obj_t BgL_auxz00_5808;

							{	/* Unsafe/intext.scm 205 */
								long BgL_za71za7_2981;

								BgL_za71za7_2981 =
									(long) CINT(CELL_REF(BgL_za2pointerza2z00_5805));
								BgL_auxz00_5808 = BINT((BgL_za71za7_2981 + ((long) 1)));
							}
							CELL_SET(BgL_za2pointerza2z00_5805, BgL_auxz00_5808);
						}
						BgL_res3013z00_2983 =
							BGl_readzd2wordzd2zz__intextz00(BgL_za2pointerza2z00_5805,
							BgL_sz00_1172, (int) (BgL_sza7za7_2976));
					}
					BgL_sza7za7_1174 = BgL_res3013z00_2983;
				}
				{	/* Unsafe/intext.scm 205 */
					obj_t BgL_resz00_1175;

					{	/* Unsafe/intext.scm 206 */
						long BgL_arg1991z00_1177;

						{	/* Unsafe/intext.scm 206 */
							long BgL_za71za7_2984;

							BgL_za71za7_2984 =
								(long) CINT(CELL_REF(BgL_za2pointerza2z00_5805));
							BgL_arg1991z00_1177 = (BgL_za71za7_2984 + BgL_sza7za7_1174);
						}
						{	/* Unsafe/intext.scm 206 */
							long BgL_startz00_2987;

							BgL_startz00_2987 =
								(long) CINT(CELL_REF(BgL_za2pointerza2z00_5805));
							BgL_resz00_1175 =
								c_substring(BgL_sz00_1172, BgL_startz00_2987,
								BgL_arg1991z00_1177);
					}}
					{	/* Unsafe/intext.scm 206 */

						{	/* Unsafe/intext.scm 207 */
							bool_t BgL_testz00_6485;

							{	/* Unsafe/intext.scm 207 */
								obj_t BgL_objz00_2989;

								BgL_objz00_2989 = CELL_REF(BgL_za2definingza2z00_5807);
								BgL_testz00_6485 = INTEGERP(BgL_objz00_2989);
							}
							if (BgL_testz00_6485)
								{	/* Unsafe/intext.scm 207 */
									{	/* Unsafe/intext.scm 208 */
										obj_t BgL_vectorz00_2990;

										int BgL_kz00_2991;

										BgL_vectorz00_2990 =
											CELL_REF(BgL_za2definitionsza2z00_5806);
										BgL_kz00_2991 = CINT(CELL_REF(BgL_za2definingza2z00_5807));
										VECTOR_SET(BgL_vectorz00_2990, BgL_kz00_2991,
											BgL_resz00_1175);
									}
									CELL_SET(BgL_za2definingza2z00_5807, BFALSE);
								}
							else
								{	/* Unsafe/intext.scm 207 */
									BFALSE;
								}
						}
						{	/* Unsafe/intext.scm 210 */
							obj_t BgL_auxz00_5810;

							{	/* Unsafe/intext.scm 210 */
								long BgL_za71za7_2993;

								BgL_za71za7_2993 =
									(long) CINT(CELL_REF(BgL_za2pointerza2z00_5805));
								BgL_auxz00_5810 = BINT((BgL_za71za7_2993 + BgL_sza7za7_1174));
							}
							CELL_SET(BgL_za2pointerza2z00_5805, BgL_auxz00_5810);
						}
						return BgL_resz00_1175;
					}
				}
			}
		}
	}



/* read-word */
	long BGl_readzd2wordzd2zz__intextz00(obj_t BgL_za2pointerza2z00_5811,
		obj_t BgL_sz00_1141, int BgL_sza7za7_1142)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 185 */
			{	/* Unsafe/intext.scm 180 */
				long BgL_accz00_1144;

				BgL_accz00_1144 = ((long) 0);
				{
					long BgL_iz00_1146;

					BgL_iz00_1146 = ((long) 0);
				BgL_zc3anonymousza31974ze3z83_1147:
					if ((BgL_iz00_1146 < (long) (BgL_sza7za7_1142)))
						{	/* Unsafe/intext.scm 181 */
							{	/* Unsafe/intext.scm 182 */
								unsigned char BgL_dz00_1149;

								{	/* Unsafe/intext.scm 182 */
									long BgL_kz00_2944;

									BgL_kz00_2944 =
										(long) CINT(CELL_REF(BgL_za2pointerza2z00_5811));
									BgL_dz00_1149 = STRING_REF(BgL_sz00_1141, BgL_kz00_2944);
								}
								BgL_accz00_1144 =
									((((long) 256) * BgL_accz00_1144) + (BgL_dz00_1149));
								{	/* Unsafe/intext.scm 184 */
									obj_t BgL_auxz00_5812;

									{	/* Unsafe/intext.scm 184 */
										long BgL_za71za7_2950;

										BgL_za71za7_2950 =
											(long) CINT(CELL_REF(BgL_za2pointerza2z00_5811));
										BgL_auxz00_5812 = BINT((BgL_za71za7_2950 + ((long) 1)));
									}
									CELL_SET(BgL_za2pointerza2z00_5811, BgL_auxz00_5812);
							}}
							{
								long BgL_iz00_6503;

								BgL_iz00_6503 = (BgL_iz00_1146 + ((long) 1));
								BgL_iz00_1146 = BgL_iz00_6503;
								goto BgL_zc3anonymousza31974ze3z83_1147;
							}
						}
					else
						{	/* Unsafe/intext.scm 181 */
							((bool_t) 0);
						}
				}
				return BgL_accz00_1144;
			}
		}
	}



/* _string->obj */
	obj_t BGl__stringzd2ze3objz31zz__intextz00(obj_t BgL_envz00_5463,
		obj_t BgL_sz00_5464)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 145 */
			{	/* Unsafe/intext.scm 504 */
				obj_t BgL_auxz00_6505;

				if (STRINGP(BgL_sz00_5464))
					{	/* Unsafe/intext.scm 504 */
						BgL_auxz00_6505 = BgL_sz00_5464;
					}
				else
					{
						obj_t BgL_auxz00_6508;

						BgL_auxz00_6508 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3159z00zz__intextz00,
							BINT(((long) 15083)), BGl_string3160z00zz__intextz00,
							BGl_string3161z00zz__intextz00, BgL_sz00_5464);
						FAILURE(BgL_auxz00_6508, BFALSE, BFALSE);
					}
				return string_to_obj(BgL_auxz00_6505);
			}
		}
	}



/* obj->string */
	BGL_EXPORTED_DEF obj_t obj_to_string(obj_t BgL_objz00_3)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 514 */
			{	/* Unsafe/intext.scm 515 */
				obj_t BgL_tablez00_1502;

				{	/* Unsafe/intext.scm 515 */
					obj_t BgL_list2169z00_1505;

					{	/* Unsafe/intext.scm 515 */
						obj_t BgL_arg2170z00_1506;

						{	/* Unsafe/intext.scm 515 */
							obj_t BgL_arg2171z00_1507;

							BgL_arg2171z00_1507 =
								MAKE_PAIR(BGl_proc3162z00zz__intextz00, BNIL);
							BgL_arg2170z00_1506 = MAKE_PAIR(BUNSPEC, BgL_arg2171z00_1507);
						}
						BgL_list2169z00_1505 = MAKE_PAIR(BUNSPEC, BgL_arg2170z00_1506);
					}
					BgL_tablez00_1502 =
						BGl_makezd2hashtablezd2zz__hashz00(BgL_list2169z00_1505);
				}
				{	/* Unsafe/intext.scm 515 */
					long BgL_nbrefz00_1503;

					BgL_nbrefz00_1503 =
						BGl_markzd2objz12zc0zz__intextz00(BgL_tablez00_1502, BgL_objz00_3);
					{	/* Unsafe/intext.scm 525 */

						return
							BGl_printzd2objzd2zz__intextz00(BgL_tablez00_1502,
							BgL_nbrefz00_1503, BgL_objz00_3);
					}
				}
			}
		}
	}



/* _obj->string */
	obj_t BGl__objzd2ze3stringz31zz__intextz00(obj_t BgL_envz00_5466,
		obj_t BgL_objz00_5467)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 514 */
			return obj_to_string(BgL_objz00_5467);
		}
	}



/* <anonymous:2172> */
	obj_t BGl_zc3anonymousza32172ze3z83zz__intextz00(obj_t BgL_envz00_5468,
		obj_t BgL_az00_5469, obj_t BgL_bz00_5470)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 517 */
			{
				obj_t BgL_az00_1508;

				obj_t BgL_bz00_1509;

				{	/* Unsafe/intext.scm 519 */
					bool_t BgL_auxz00_6520;

					BgL_az00_1508 = BgL_az00_5469;
					BgL_bz00_1509 = BgL_bz00_5470;
					if (STRINGP(BgL_az00_1508))
						{	/* Unsafe/intext.scm 519 */
							if (STRINGP(BgL_bz00_1509))
								{	/* Unsafe/intext.scm 519 */
									BgL_auxz00_6520 = bigloo_strcmp(BgL_az00_1508, BgL_bz00_1509);
								}
							else
								{	/* Unsafe/intext.scm 519 */
									BgL_auxz00_6520 = ((bool_t) 0);
								}
						}
					else
						{	/* Unsafe/intext.scm 519 */
							if (UCS2_STRINGP(BgL_az00_1508))
								{	/* Unsafe/intext.scm 519 */
									BgL_auxz00_6520 =
										BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_az00_1508,
										BgL_bz00_1509);
								}
							else
								{	/* Unsafe/intext.scm 519 */
									BgL_auxz00_6520 = (BgL_az00_1508 == BgL_bz00_1509);
								}
						}
					return BBOOL(BgL_auxz00_6520);
				}
			}
		}
	}



/* put-mark! */
	obj_t BGl_putzd2markz12zc0zz__intextz00(obj_t BgL_tablez00_23,
		obj_t BgL_objz00_24, bool_t BgL_valz00_25)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 542 */
			{	/* Unsafe/intext.scm 543 */
				obj_t BgL_arg2186z00_3449;

				{	/* Unsafe/intext.scm 543 */
					obj_t BgL_newz00_3454;

					BgL_newz00_3454 =
						create_struct(BGl_symbol3163z00zz__intextz00, (int) (((long) 4)));
					{	/* Unsafe/intext.scm 543 */
						obj_t BgL_auxz00_6535;

						int BgL_auxz00_6533;

						BgL_auxz00_6535 = BINT(((long) -1));
						BgL_auxz00_6533 = (int) (((long) 3));
						STRUCT_SET(BgL_newz00_3454, BgL_auxz00_6533, BgL_auxz00_6535);
					}
					{	/* Unsafe/intext.scm 543 */
						obj_t BgL_auxz00_6540;

						int BgL_auxz00_6538;

						BgL_auxz00_6540 = BINT(((long) 0));
						BgL_auxz00_6538 = (int) (((long) 2));
						STRUCT_SET(BgL_newz00_3454, BgL_auxz00_6538, BgL_auxz00_6540);
					}
					{	/* Unsafe/intext.scm 543 */
						obj_t BgL_auxz00_6545;

						int BgL_auxz00_6543;

						BgL_auxz00_6545 = BBOOL(BgL_valz00_25);
						BgL_auxz00_6543 = (int) (((long) 1));
						STRUCT_SET(BgL_newz00_3454, BgL_auxz00_6543, BgL_auxz00_6545);
					}
					{	/* Unsafe/intext.scm 543 */
						int BgL_auxz00_6548;

						BgL_auxz00_6548 = (int) (((long) 0));
						STRUCT_SET(BgL_newz00_3454, BgL_auxz00_6548, BgL_objz00_24);
					}
					BgL_arg2186z00_3449 = BgL_newz00_3454;
				}
				return
					BGl_hashtablezd2putz12zc0zz__hashz00(BgL_tablez00_23, BgL_objz00_24,
					BgL_arg2186z00_3449);
			}
		}
	}



/* size-of-word */
	long BGl_siza7ezd2ofzd2wordza7zz__intextz00(obj_t BgL_mz00_34)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 567 */
			{
				long BgL_siza7eza7_3493;

				obj_t BgL_mz00_3494;

				BgL_siza7eza7_3493 = ((long) 0);
				BgL_mz00_3494 = BgL_mz00_34;
			BgL_loopz00_3492:
				if (((long) CINT(BgL_mz00_3494) == ((long) 0)))
					{	/* Unsafe/intext.scm 568 */
						return BgL_siza7eza7_3493;
					}
				else
					{
						obj_t BgL_mz00_6557;

						long BgL_siza7eza7_6555;

						BgL_siza7eza7_6555 = (BgL_siza7eza7_3493 + ((long) 1));
						BgL_mz00_6557 =
							BINT(((long) CINT(BgL_mz00_3494) >> (int) (((long) 8))));
						BgL_mz00_3494 = BgL_mz00_6557;
						BgL_siza7eza7_3493 = BgL_siza7eza7_6555;
						goto BgL_loopz00_3492;
					}
			}
		}
	}



/* print-obj */
	obj_t BGl_printzd2objzd2zz__intextz00(obj_t BgL_tablez00_35,
		long BgL_nbrefz00_36, obj_t BgL_objz00_37)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 577 */
			{	/* Unsafe/intext.scm 579 */
				obj_t BgL_bufferz00_1546;

				obj_t BgL_ptrz00_1547;

				obj_t BgL_refz00_1548;

				BgL_bufferz00_1546 = MAKE_CELL(BUNSPEC);
				BgL_ptrz00_1547 = MAKE_CELL(BUNSPEC);
				BgL_refz00_1548 = MAKE_CELL(BUNSPEC);
				{	/* Unsafe/intext.scm 585 */
					obj_t BgL_printzd2customzd2_5479;

					obj_t BgL_printzd2tvectorzd2_5480;

					obj_t BgL_printzd2hvectorzd2_5481;

					obj_t BgL_printzd2vectorzd2_5482;

					obj_t BgL_printzd2weakptrzd2_5483;

					obj_t BgL_printzd2cellzd2_5484;

					obj_t BgL_printzd2objectzd2_5488;

					obj_t BgL_printzd2pairzd2_5490;

					obj_t BgL_printzd2epairzd2_5491;

					BgL_printzd2customzd2_5479 =
						make_fx_procedure(BGl_printzd2customzd2zz__intextz00,
						(int) (((long) 2)), (int) (((long) 2)));
					BgL_printzd2tvectorzd2_5480 =
						make_fx_procedure(BGl_printzd2tvectorzd2zz__intextz00,
						(int) (((long) 2)), (int) (((long) 12)));
					BgL_printzd2hvectorzd2_5481 =
						make_fx_procedure(BGl_printzd2hvectorzd2zz__intextz00,
						(int) (((long) 2)), (int) (((long) 2)));
					BgL_printzd2vectorzd2_5482 =
						make_fx_procedure(BGl_printzd2vectorzd2zz__intextz00,
						(int) (((long) 2)), (int) (((long) 12)));
					BgL_printzd2weakptrzd2_5483 =
						make_fx_procedure(BGl_printzd2weakptrzd2zz__intextz00,
						(int) (((long) 2)), (int) (((long) 12)));
					BgL_printzd2cellzd2_5484 =
						make_fx_procedure(BGl_printzd2cellzd2zz__intextz00,
						(int) (((long) 2)), (int) (((long) 12)));
					BgL_printzd2objectzd2_5488 =
						make_fx_procedure(BGl_printzd2objectzd2zz__intextz00,
						(int) (((long) 2)), (int) (((long) 12)));
					BgL_printzd2pairzd2_5490 =
						make_fx_procedure(BGl_printzd2pairzd2zz__intextz00,
						(int) (((long) 2)), (int) (((long) 12)));
					BgL_printzd2epairzd2_5491 =
						make_fx_procedure(BGl_printzd2epairzd2zz__intextz00,
						(int) (((long) 2)), (int) (((long) 12)));
					PROCEDURE_SET(BgL_printzd2customzd2_5479,
						(int) (((long) 0)), BgL_bufferz00_1546);
					PROCEDURE_SET(BgL_printzd2customzd2_5479,
						(int) (((long) 1)), BgL_ptrz00_1547);
					PROCEDURE_SET(BgL_printzd2tvectorzd2_5480,
						(int) (((long) 0)), BgL_tablez00_35);
					PROCEDURE_SET(BgL_printzd2tvectorzd2_5480,
						(int) (((long) 1)), BgL_refz00_1548);
					PROCEDURE_SET(BgL_printzd2tvectorzd2_5480,
						(int) (((long) 2)), BgL_printzd2customzd2_5479);
					PROCEDURE_SET(BgL_printzd2tvectorzd2_5480,
						(int) (((long) 3)), BgL_printzd2hvectorzd2_5481);
					PROCEDURE_SET(BgL_printzd2tvectorzd2_5480,
						(int) (((long) 4)), BgL_printzd2vectorzd2_5482);
					PROCEDURE_SET(BgL_printzd2tvectorzd2_5480,
						(int) (((long) 5)), BgL_printzd2weakptrzd2_5483);
					PROCEDURE_SET(BgL_printzd2tvectorzd2_5480,
						(int) (((long) 6)), BgL_printzd2cellzd2_5484);
					PROCEDURE_SET(BgL_printzd2tvectorzd2_5480,
						(int) (((long) 7)), BgL_printzd2objectzd2_5488);
					PROCEDURE_SET(BgL_printzd2tvectorzd2_5480,
						(int) (((long) 8)), BgL_printzd2pairzd2_5490);
					PROCEDURE_SET(BgL_printzd2tvectorzd2_5480,
						(int) (((long) 9)), BgL_printzd2epairzd2_5491);
					PROCEDURE_SET(BgL_printzd2tvectorzd2_5480,
						(int) (((long) 10)), BgL_bufferz00_1546);
					PROCEDURE_SET(BgL_printzd2tvectorzd2_5480,
						(int) (((long) 11)), BgL_ptrz00_1547);
					PROCEDURE_SET(BgL_printzd2hvectorzd2_5481,
						(int) (((long) 0)), BgL_bufferz00_1546);
					PROCEDURE_SET(BgL_printzd2hvectorzd2_5481,
						(int) (((long) 1)), BgL_ptrz00_1547);
					PROCEDURE_SET(BgL_printzd2vectorzd2_5482,
						(int) (((long) 0)), BgL_tablez00_35);
					PROCEDURE_SET(BgL_printzd2vectorzd2_5482,
						(int) (((long) 1)), BgL_refz00_1548);
					PROCEDURE_SET(BgL_printzd2vectorzd2_5482,
						(int) (((long) 2)), BgL_printzd2customzd2_5479);
					PROCEDURE_SET(BgL_printzd2vectorzd2_5482,
						(int) (((long) 3)), BgL_printzd2tvectorzd2_5480);
					PROCEDURE_SET(BgL_printzd2vectorzd2_5482,
						(int) (((long) 4)), BgL_printzd2hvectorzd2_5481);
					PROCEDURE_SET(BgL_printzd2vectorzd2_5482,
						(int) (((long) 5)), BgL_printzd2weakptrzd2_5483);
					PROCEDURE_SET(BgL_printzd2vectorzd2_5482,
						(int) (((long) 6)), BgL_printzd2cellzd2_5484);
					PROCEDURE_SET(BgL_printzd2vectorzd2_5482,
						(int) (((long) 7)), BgL_printzd2objectzd2_5488);
					PROCEDURE_SET(BgL_printzd2vectorzd2_5482,
						(int) (((long) 8)), BgL_printzd2pairzd2_5490);
					PROCEDURE_SET(BgL_printzd2vectorzd2_5482,
						(int) (((long) 9)), BgL_printzd2epairzd2_5491);
					PROCEDURE_SET(BgL_printzd2vectorzd2_5482,
						(int) (((long) 10)), BgL_bufferz00_1546);
					PROCEDURE_SET(BgL_printzd2vectorzd2_5482,
						(int) (((long) 11)), BgL_ptrz00_1547);
					PROCEDURE_SET(BgL_printzd2weakptrzd2_5483,
						(int) (((long) 0)), BgL_tablez00_35);
					PROCEDURE_SET(BgL_printzd2weakptrzd2_5483,
						(int) (((long) 1)), BgL_refz00_1548);
					PROCEDURE_SET(BgL_printzd2weakptrzd2_5483,
						(int) (((long) 2)), BgL_printzd2customzd2_5479);
					PROCEDURE_SET(BgL_printzd2weakptrzd2_5483,
						(int) (((long) 3)), BgL_printzd2tvectorzd2_5480);
					PROCEDURE_SET(BgL_printzd2weakptrzd2_5483,
						(int) (((long) 4)), BgL_printzd2hvectorzd2_5481);
					PROCEDURE_SET(BgL_printzd2weakptrzd2_5483,
						(int) (((long) 5)), BgL_printzd2vectorzd2_5482);
					PROCEDURE_SET(BgL_printzd2weakptrzd2_5483,
						(int) (((long) 6)), BgL_printzd2cellzd2_5484);
					PROCEDURE_SET(BgL_printzd2weakptrzd2_5483,
						(int) (((long) 7)), BgL_printzd2objectzd2_5488);
					PROCEDURE_SET(BgL_printzd2weakptrzd2_5483,
						(int) (((long) 8)), BgL_printzd2pairzd2_5490);
					PROCEDURE_SET(BgL_printzd2weakptrzd2_5483,
						(int) (((long) 9)), BgL_printzd2epairzd2_5491);
					PROCEDURE_SET(BgL_printzd2weakptrzd2_5483,
						(int) (((long) 10)), BgL_bufferz00_1546);
					PROCEDURE_SET(BgL_printzd2weakptrzd2_5483,
						(int) (((long) 11)), BgL_ptrz00_1547);
					PROCEDURE_SET(BgL_printzd2cellzd2_5484,
						(int) (((long) 0)), BgL_tablez00_35);
					PROCEDURE_SET(BgL_printzd2cellzd2_5484,
						(int) (((long) 1)), BgL_refz00_1548);
					PROCEDURE_SET(BgL_printzd2cellzd2_5484,
						(int) (((long) 2)), BgL_printzd2customzd2_5479);
					PROCEDURE_SET(BgL_printzd2cellzd2_5484,
						(int) (((long) 3)), BgL_printzd2tvectorzd2_5480);
					PROCEDURE_SET(BgL_printzd2cellzd2_5484,
						(int) (((long) 4)), BgL_printzd2hvectorzd2_5481);
					PROCEDURE_SET(BgL_printzd2cellzd2_5484,
						(int) (((long) 5)), BgL_printzd2vectorzd2_5482);
					PROCEDURE_SET(BgL_printzd2cellzd2_5484,
						(int) (((long) 6)), BgL_printzd2weakptrzd2_5483);
					PROCEDURE_SET(BgL_printzd2cellzd2_5484,
						(int) (((long) 7)), BgL_printzd2objectzd2_5488);
					PROCEDURE_SET(BgL_printzd2cellzd2_5484,
						(int) (((long) 8)), BgL_printzd2pairzd2_5490);
					PROCEDURE_SET(BgL_printzd2cellzd2_5484,
						(int) (((long) 9)), BgL_printzd2epairzd2_5491);
					PROCEDURE_SET(BgL_printzd2cellzd2_5484,
						(int) (((long) 10)), BgL_bufferz00_1546);
					PROCEDURE_SET(BgL_printzd2cellzd2_5484,
						(int) (((long) 11)), BgL_ptrz00_1547);
					PROCEDURE_SET(BgL_printzd2objectzd2_5488,
						(int) (((long) 0)), BgL_tablez00_35);
					PROCEDURE_SET(BgL_printzd2objectzd2_5488,
						(int) (((long) 1)), BgL_refz00_1548);
					PROCEDURE_SET(BgL_printzd2objectzd2_5488,
						(int) (((long) 2)), BgL_printzd2customzd2_5479);
					PROCEDURE_SET(BgL_printzd2objectzd2_5488,
						(int) (((long) 3)), BgL_printzd2tvectorzd2_5480);
					PROCEDURE_SET(BgL_printzd2objectzd2_5488,
						(int) (((long) 4)), BgL_printzd2hvectorzd2_5481);
					PROCEDURE_SET(BgL_printzd2objectzd2_5488,
						(int) (((long) 5)), BgL_printzd2vectorzd2_5482);
					PROCEDURE_SET(BgL_printzd2objectzd2_5488,
						(int) (((long) 6)), BgL_printzd2weakptrzd2_5483);
					PROCEDURE_SET(BgL_printzd2objectzd2_5488,
						(int) (((long) 7)), BgL_printzd2cellzd2_5484);
					PROCEDURE_SET(BgL_printzd2objectzd2_5488,
						(int) (((long) 8)), BgL_printzd2pairzd2_5490);
					PROCEDURE_SET(BgL_printzd2objectzd2_5488,
						(int) (((long) 9)), BgL_printzd2epairzd2_5491);
					PROCEDURE_SET(BgL_printzd2objectzd2_5488,
						(int) (((long) 10)), BgL_bufferz00_1546);
					PROCEDURE_SET(BgL_printzd2objectzd2_5488,
						(int) (((long) 11)), BgL_ptrz00_1547);
					PROCEDURE_SET(BgL_printzd2pairzd2_5490,
						(int) (((long) 0)), BgL_refz00_1548);
					PROCEDURE_SET(BgL_printzd2pairzd2_5490,
						(int) (((long) 1)), BgL_printzd2customzd2_5479);
					PROCEDURE_SET(BgL_printzd2pairzd2_5490,
						(int) (((long) 2)), BgL_printzd2tvectorzd2_5480);
					PROCEDURE_SET(BgL_printzd2pairzd2_5490,
						(int) (((long) 3)), BgL_printzd2hvectorzd2_5481);
					PROCEDURE_SET(BgL_printzd2pairzd2_5490,
						(int) (((long) 4)), BgL_printzd2vectorzd2_5482);
					PROCEDURE_SET(BgL_printzd2pairzd2_5490,
						(int) (((long) 5)), BgL_printzd2weakptrzd2_5483);
					PROCEDURE_SET(BgL_printzd2pairzd2_5490,
						(int) (((long) 6)), BgL_printzd2cellzd2_5484);
					PROCEDURE_SET(BgL_printzd2pairzd2_5490,
						(int) (((long) 7)), BgL_printzd2objectzd2_5488);
					PROCEDURE_SET(BgL_printzd2pairzd2_5490,
						(int) (((long) 8)), BgL_printzd2epairzd2_5491);
					PROCEDURE_SET(BgL_printzd2pairzd2_5490,
						(int) (((long) 9)), BgL_bufferz00_1546);
					PROCEDURE_SET(BgL_printzd2pairzd2_5490,
						(int) (((long) 10)), BgL_ptrz00_1547);
					PROCEDURE_SET(BgL_printzd2pairzd2_5490,
						(int) (((long) 11)), BgL_tablez00_35);
					PROCEDURE_SET(BgL_printzd2epairzd2_5491,
						(int) (((long) 0)), BgL_refz00_1548);
					PROCEDURE_SET(BgL_printzd2epairzd2_5491,
						(int) (((long) 1)), BgL_printzd2customzd2_5479);
					PROCEDURE_SET(BgL_printzd2epairzd2_5491,
						(int) (((long) 2)), BgL_printzd2tvectorzd2_5480);
					PROCEDURE_SET(BgL_printzd2epairzd2_5491,
						(int) (((long) 3)), BgL_printzd2hvectorzd2_5481);
					PROCEDURE_SET(BgL_printzd2epairzd2_5491,
						(int) (((long) 4)), BgL_printzd2vectorzd2_5482);
					PROCEDURE_SET(BgL_printzd2epairzd2_5491,
						(int) (((long) 5)), BgL_printzd2weakptrzd2_5483);
					PROCEDURE_SET(BgL_printzd2epairzd2_5491,
						(int) (((long) 6)), BgL_printzd2cellzd2_5484);
					PROCEDURE_SET(BgL_printzd2epairzd2_5491,
						(int) (((long) 7)), BgL_printzd2objectzd2_5488);
					PROCEDURE_SET(BgL_printzd2epairzd2_5491,
						(int) (((long) 8)), BgL_printzd2pairzd2_5490);
					PROCEDURE_SET(BgL_printzd2epairzd2_5491,
						(int) (((long) 9)), BgL_bufferz00_1546);
					PROCEDURE_SET(BgL_printzd2epairzd2_5491,
						(int) (((long) 10)), BgL_ptrz00_1547);
					PROCEDURE_SET(BgL_printzd2epairzd2_5491,
						(int) (((long) 11)), BgL_tablez00_35);
					{	/* Unsafe/intext.scm 579 */
						obj_t BgL_auxz00_5723;

						BgL_auxz00_5723 = make_string_sans_fill(((long) 100));
						CELL_SET(BgL_bufferz00_1546, BgL_auxz00_5723);
					}
					{	/* Unsafe/intext.scm 891 */
						obj_t BgL_auxz00_5724;

						BgL_auxz00_5724 = BINT(((long) 0));
						CELL_SET(BgL_ptrz00_1547, BgL_auxz00_5724);
					}
					{	/* Unsafe/intext.scm 891 */
						obj_t BgL_auxz00_5725;

						BgL_auxz00_5725 = BINT(((long) 0));
						CELL_SET(BgL_refz00_1548, BgL_auxz00_5725);
					}
					if ((BgL_nbrefz00_36 > ((long) 0)))
						{	/* Unsafe/intext.scm 887 */
							BGl_checkzd2bufferz12zc0zz__intextz00(BgL_bufferz00_1546,
								BgL_ptrz00_1547, ((long) 1));
							{	/* Unsafe/intext.scm 888 */
								obj_t BgL_stringz00_3530;

								long BgL_kz00_3531;

								BgL_stringz00_3530 = CELL_REF(BgL_bufferz00_1546);
								BgL_kz00_3531 = (long) CINT(CELL_REF(BgL_ptrz00_1547));
								STRING_SET(BgL_stringz00_3530, BgL_kz00_3531,
									((unsigned char) 'c'));
							}
							{	/* Unsafe/intext.scm 888 */
								obj_t BgL_auxz00_5726;

								BgL_auxz00_5726 =
									BINT((((long) 1) + (long) CINT(CELL_REF(BgL_ptrz00_1547))));
								CELL_SET(BgL_ptrz00_1547, BgL_auxz00_5726);
							}
							if ((BgL_nbrefz00_36 < ((long) 0)))
								{	/* Unsafe/intext.scm 889 */
									BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_1547,
										BgL_bufferz00_1546, ((unsigned char) '-'));
									BGl_printzd2wordzd2zz__intextz00(BgL_ptrz00_1547,
										BgL_bufferz00_1546, NEG(BgL_nbrefz00_36));
								}
							else
								{	/* Unsafe/intext.scm 889 */
									BGl_printzd2wordzd2zz__intextz00(BgL_ptrz00_1547,
										BgL_bufferz00_1546, BgL_nbrefz00_36);
								}
						}
					else
						{	/* Unsafe/intext.scm 887 */
							BFALSE;
						}
					BGl_printzd2itemzd2zz__intextz00(BgL_printzd2epairzd2_5491,
						BgL_printzd2pairzd2_5490, BgL_printzd2objectzd2_5488,
						BgL_printzd2cellzd2_5484, BgL_printzd2weakptrzd2_5483,
						BgL_printzd2vectorzd2_5482, BgL_printzd2hvectorzd2_5481,
						BgL_printzd2tvectorzd2_5480, BgL_printzd2customzd2_5479,
						BgL_ptrz00_1547, BgL_bufferz00_1546, BgL_refz00_1548,
						BgL_tablez00_35, BgL_objz00_37);
					{	/* Unsafe/intext.scm 893 */
						obj_t BgL_sz00_3541;

						long BgL_lz00_3542;

						BgL_sz00_3541 = CELL_REF(BgL_bufferz00_1546);
						BgL_lz00_3542 = (long) CINT(CELL_REF(BgL_ptrz00_1547));
						return bgl_string_shrink(BgL_sz00_3541, BgL_lz00_3542);
					}
				}
			}
		}
	}



/* print-word/size */
	bool_t BGl_printzd2wordzf2siza7ez87zz__intextz00(obj_t BgL_ptrz00_5494,
		obj_t BgL_bufferz00_5493, obj_t BgL_mz00_1593, obj_t BgL_siza7eza7_1594)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 615 */
			{	/* Unsafe/intext.scm 611 */
				long BgL_g1846z00_1596;

				BgL_g1846z00_1596 = ((long) CINT(BgL_siza7eza7_1594) - ((long) 1));
				{
					long BgL_iz00_1598;

					BgL_iz00_1598 = BgL_g1846z00_1596;
				BgL_zc3anonymousza32214ze3z83_1599:
					if ((BgL_iz00_1598 >= ((long) 0)))
						{	/* Unsafe/intext.scm 613 */
							long BgL_dz00_1601;

							BgL_dz00_1601 =
								(
								((long) CINT(BgL_mz00_1593) >>
									(int) ((((long) 8) * BgL_iz00_1598))) & ((long) 255));
							{	/* Unsafe/intext.scm 614 */
								unsigned char BgL_arg2212z00_3608;

								BgL_arg2212z00_3608 = (BgL_dz00_1601);
								BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5494,
									BgL_bufferz00_5493, BgL_arg2212z00_3608);
							}
							{
								long BgL_iz00_6796;

								BgL_iz00_6796 = (BgL_iz00_1598 - ((long) 1));
								BgL_iz00_1598 = BgL_iz00_6796;
								goto BgL_zc3anonymousza32214ze3z83_1599;
							}
						}
					else
						{	/* Unsafe/intext.scm 612 */
							return ((bool_t) 0);
						}
				}
			}
		}
	}



/* !print-markup */
	obj_t BGl_z12printzd2markupzc0zz__intextz00(obj_t BgL_ptrz00_5496,
		obj_t BgL_bufferz00_5495, unsigned char BgL_cz00_1585)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 594 */
			BGl_checkzd2bufferz12zc0zz__intextz00(BgL_bufferz00_5495, BgL_ptrz00_5496,
				((long) 1));
			{	/* Unsafe/intext.scm 595 */
				obj_t BgL_stringz00_3566;

				long BgL_kz00_3567;

				BgL_stringz00_3566 = CELL_REF(BgL_bufferz00_5495);
				BgL_kz00_3567 = (long) CINT(CELL_REF(BgL_ptrz00_5496));
				STRING_SET(BgL_stringz00_3566, BgL_kz00_3567, BgL_cz00_1585);
			}
			{	/* Unsafe/intext.scm 596 */
				obj_t BgL_auxz00_5497;

				{	/* Unsafe/intext.scm 596 */
					long BgL_za72za7_3570;

					BgL_za72za7_3570 = (long) CINT(CELL_REF(BgL_ptrz00_5496));
					BgL_auxz00_5497 = BINT((((long) 1) + BgL_za72za7_3570));
				}
				return CELL_SET(BgL_ptrz00_5496, BgL_auxz00_5497);
			}
		}
	}



/* check-buffer! */
	obj_t BGl_checkzd2bufferz12zc0zz__intextz00(obj_t BgL_bufferz00_5499,
		obj_t BgL_ptrz00_5498, long BgL_siza7eza7_1574)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 590 */
			{	/* Unsafe/intext.scm 585 */
				long BgL_lz00_1576;

				long BgL_blz00_1577;

				{	/* Unsafe/intext.scm 585 */
					long BgL_za71za7_3545;

					BgL_za71za7_3545 = (long) CINT(CELL_REF(BgL_ptrz00_5498));
					BgL_lz00_1576 =
						(BgL_za71za7_3545 +
						(BgL_siza7eza7_1574 +
							BGl_za2maxzd2siza7ezd2wordza2za7zz__intextz00));
				}
				{	/* Unsafe/intext.scm 586 */
					obj_t BgL_stringz00_3547;

					BgL_stringz00_3547 = CELL_REF(BgL_bufferz00_5499);
					BgL_blz00_1577 = STRING_LENGTH(BgL_stringz00_3547);
				}
				if ((BgL_lz00_1576 >= BgL_blz00_1577))
					{	/* Unsafe/intext.scm 588 */
						obj_t BgL_nbufz00_1579;

						BgL_nbufz00_1579 =
							make_string(
							(((long) 2) *
								(BgL_lz00_1576 + ((long) 100))), ((unsigned char) ' '));
						{	/* Unsafe/intext.scm 589 */
							obj_t BgL_s1z00_3561;

							BgL_s1z00_3561 = CELL_REF(BgL_bufferz00_5499);
							blit_string(BgL_s1z00_3561, ((long) 0), BgL_nbufz00_1579,
								((long) 0), BgL_blz00_1577);
						}
						return CELL_SET(BgL_bufferz00_5499, BgL_nbufz00_1579);
					}
				else
					{	/* Unsafe/intext.scm 587 */
						return BFALSE;
					}
			}
		}
	}



/* print-item */
	obj_t BGl_printzd2itemzd2zz__intextz00(obj_t BgL_printzd2epairzd2_5513,
		obj_t BgL_printzd2pairzd2_5512, obj_t BgL_printzd2objectzd2_5511,
		obj_t BgL_printzd2cellzd2_5510, obj_t BgL_printzd2weakptrzd2_5509,
		obj_t BgL_printzd2vectorzd2_5508, obj_t BgL_printzd2hvectorzd2_5507,
		obj_t BgL_printzd2tvectorzd2_5506, obj_t BgL_printzd2customzd2_5505,
		obj_t BgL_ptrz00_5504, obj_t BgL_bufferz00_5503, obj_t BgL_refz00_5502,
		obj_t BgL_tablez00_5501, obj_t BgL_itemz00_1800)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 885 */
		BGl_printzd2itemzd2zz__intextz00:
			{
				obj_t BgL_itemz00_1634;

				obj_t BgL_printerz00_1635;

				{	/* Unsafe/intext.scm 808 */
					bool_t BgL_testz00_6814;

					if (EXTENDED_PAIRP(BgL_itemz00_1800))
						{	/* Unsafe/intext.scm 808 */
							BgL_testz00_6814 = BGl_za2epairzf3za2zf3zz__intextz00;
						}
					else
						{	/* Unsafe/intext.scm 808 */
							BgL_testz00_6814 = ((bool_t) 0);
						}
					if (BgL_testz00_6814)
						{	/* Unsafe/intext.scm 808 */
							BgL_itemz00_1634 = BgL_itemz00_1800;
							BgL_printerz00_1635 = BgL_printzd2epairzd2_5513;
						BgL_zc3anonymousza32245ze3z83_1636:
							{	/* Unsafe/intext.scm 650 */
								obj_t BgL_markz00_1637;

								BgL_markz00_1637 =
									BGl_hashtablezd2getzd2zz__hashz00(BgL_tablez00_5501,
									BgL_itemz00_1634);
								{	/* Unsafe/intext.scm 652 */
									bool_t BgL_testz00_6818;

									{	/* Unsafe/intext.scm 652 */
										long BgL_auxz00_6819;

										{	/* Unsafe/intext.scm 652 */
											obj_t BgL_sz00_3694;

											BgL_sz00_3694 = BgL_markz00_1637;
											BgL_auxz00_6819 =
												(long) CINT(STRUCT_REF(BgL_sz00_3694,
													(int) (((long) 3))));
										}
										BgL_testz00_6818 = (BgL_auxz00_6819 >= ((long) 0));
									}
									if (BgL_testz00_6818)
										{	/* Unsafe/intext.scm 652 */
											BGl_checkzd2bufferz12zc0zz__intextz00(BgL_bufferz00_5503,
												BgL_ptrz00_5504, ((long) 1));
											{	/* Unsafe/intext.scm 653 */
												obj_t BgL_stringz00_3699;

												long BgL_kz00_3700;

												BgL_stringz00_3699 = CELL_REF(BgL_bufferz00_5503);
												BgL_kz00_3700 = (long) CINT(CELL_REF(BgL_ptrz00_5504));
												STRING_SET(BgL_stringz00_3699, BgL_kz00_3700,
													((unsigned char) '#'));
											}
											{	/* Unsafe/intext.scm 653 */
												obj_t BgL_auxz00_5533;

												{	/* Unsafe/intext.scm 653 */
													long BgL_za72za7_3703;

													BgL_za72za7_3703 =
														(long) CINT(CELL_REF(BgL_ptrz00_5504));
													BgL_auxz00_5533 =
														BINT((((long) 1) + BgL_za72za7_3703));
												}
												CELL_SET(BgL_ptrz00_5504, BgL_auxz00_5533);
											}
											{	/* Unsafe/intext.scm 654 */
												obj_t BgL_arg2247z00_1639;

												BgL_arg2247z00_1639 =
													STRUCT_REF(BgL_markz00_1637, (int) (((long) 3)));
												{	/* Unsafe/intext.scm 654 */
													long BgL_iz00_3707;

													BgL_iz00_3707 = (long) CINT(BgL_arg2247z00_1639);
													if ((BgL_iz00_3707 < ((long) 0)))
														{	/* Unsafe/intext.scm 654 */
															BGl_z12printzd2markupzc0zz__intextz00
																(BgL_ptrz00_5504, BgL_bufferz00_5503,
																((unsigned char) '-'));
															{	/* Unsafe/intext.scm 654 */
																long BgL_arg2242z00_3709;

																BgL_arg2242z00_3709 = NEG(BgL_iz00_3707);
																return
																	BGl_printzd2wordzd2zz__intextz00
																	(BgL_ptrz00_5504, BgL_bufferz00_5503,
																	BgL_arg2242z00_3709);
															}
														}
													else
														{	/* Unsafe/intext.scm 654 */
															return
																BGl_printzd2wordzd2zz__intextz00
																(BgL_ptrz00_5504, BgL_bufferz00_5503,
																BgL_iz00_3707);
														}
												}
											}
										}
									else
										{	/* Unsafe/intext.scm 655 */
											bool_t BgL_testz00_6839;

											{	/* Unsafe/intext.scm 655 */
												long BgL_auxz00_6840;

												{	/* Unsafe/intext.scm 655 */
													obj_t BgL_sz00_3714;

													BgL_sz00_3714 = BgL_markz00_1637;
													BgL_auxz00_6840 =
														(long) CINT(STRUCT_REF(BgL_sz00_3714,
															(int) (((long) 2))));
												}
												BgL_testz00_6839 = (BgL_auxz00_6840 == ((long) 0));
											}
											if (BgL_testz00_6839)
												{	/* Unsafe/intext.scm 655 */
													return
														PROCEDURE_ENTRY(BgL_printerz00_1635)
														(BgL_printerz00_1635, BgL_itemz00_1634,
														BgL_markz00_1637, BEOA);
												}
											else
												{	/* Unsafe/intext.scm 655 */
													{	/* Unsafe/intext.scm 658 */
														obj_t BgL_vz00_3719;

														BgL_vz00_3719 = CELL_REF(BgL_refz00_5502);
														{	/* Unsafe/intext.scm 658 */
															int BgL_auxz00_6847;

															BgL_auxz00_6847 = (int) (((long) 3));
															STRUCT_SET(BgL_markz00_1637, BgL_auxz00_6847,
																BgL_vz00_3719);
													}}
													BGl_checkzd2bufferz12zc0zz__intextz00
														(BgL_bufferz00_5503, BgL_ptrz00_5504, ((long) 1));
													{	/* Unsafe/intext.scm 659 */
														obj_t BgL_stringz00_3724;

														long BgL_kz00_3725;

														BgL_stringz00_3724 = CELL_REF(BgL_bufferz00_5503);
														BgL_kz00_3725 =
															(long) CINT(CELL_REF(BgL_ptrz00_5504));
														STRING_SET(BgL_stringz00_3724, BgL_kz00_3725,
															((unsigned char) '='));
													}
													{	/* Unsafe/intext.scm 659 */
														obj_t BgL_auxz00_5534;

														{	/* Unsafe/intext.scm 659 */
															long BgL_za72za7_3728;

															BgL_za72za7_3728 =
																(long) CINT(CELL_REF(BgL_ptrz00_5504));
															BgL_auxz00_5534 =
																BINT((((long) 1) + BgL_za72za7_3728));
														}
														CELL_SET(BgL_ptrz00_5504, BgL_auxz00_5534);
													}
													{	/* Unsafe/intext.scm 660 */
														long BgL_iz00_3729;

														BgL_iz00_3729 =
															(long) CINT(CELL_REF(BgL_refz00_5502));
														if ((BgL_iz00_3729 < ((long) 0)))
															{	/* Unsafe/intext.scm 660 */
																BGl_z12printzd2markupzc0zz__intextz00
																	(BgL_ptrz00_5504, BgL_bufferz00_5503,
																	((unsigned char) '-'));
																{	/* Unsafe/intext.scm 660 */
																	long BgL_arg2242z00_3731;

																	BgL_arg2242z00_3731 = NEG(BgL_iz00_3729);
																	BGl_printzd2wordzd2zz__intextz00
																		(BgL_ptrz00_5504, BgL_bufferz00_5503,
																		BgL_arg2242z00_3731);
															}}
														else
															{	/* Unsafe/intext.scm 660 */
																BGl_printzd2wordzd2zz__intextz00
																	(BgL_ptrz00_5504, BgL_bufferz00_5503,
																	BgL_iz00_3729);
															}
													}
													{	/* Unsafe/intext.scm 661 */
														obj_t BgL_auxz00_5535;

														{	/* Unsafe/intext.scm 661 */
															long BgL_za72za7_3736;

															BgL_za72za7_3736 =
																(long) CINT(CELL_REF(BgL_refz00_5502));
															BgL_auxz00_5535 =
																BINT((((long) 1) + BgL_za72za7_3736));
														}
														CELL_SET(BgL_refz00_5502, BgL_auxz00_5535);
													}
													return
														PROCEDURE_ENTRY(BgL_printerz00_1635)
														(BgL_printerz00_1635, BgL_itemz00_1634,
														BgL_markz00_1637, BEOA);
												}
										}
								}
							}
						}
					else
						{	/* Unsafe/intext.scm 808 */
							if (PAIRP(BgL_itemz00_1800))
								{
									obj_t BgL_printerz00_6871;

									obj_t BgL_itemz00_6870;

									BgL_itemz00_6870 = BgL_itemz00_1800;
									BgL_printerz00_6871 = BgL_printzd2pairzd2_5512;
									BgL_printerz00_1635 = BgL_printerz00_6871;
									BgL_itemz00_1634 = BgL_itemz00_6870;
									goto BgL_zc3anonymousza32245ze3z83_1636;
								}
							else
								{	/* Unsafe/intext.scm 810 */
									if (SYMBOLP(BgL_itemz00_1800))
										{	/* Unsafe/intext.scm 812 */
											BGl_checkzd2bufferz12zc0zz__intextz00(BgL_bufferz00_5503,
												BgL_ptrz00_5504, ((long) 1));
											{	/* Unsafe/intext.scm 813 */
												obj_t BgL_stringz00_4091;

												long BgL_kz00_4092;

												BgL_stringz00_4091 = CELL_REF(BgL_bufferz00_5503);
												BgL_kz00_4092 = (long) CINT(CELL_REF(BgL_ptrz00_5504));
												STRING_SET(BgL_stringz00_4091, BgL_kz00_4092,
													((unsigned char) '\''));
											}
											{	/* Unsafe/intext.scm 813 */
												obj_t BgL_auxz00_5514;

												{	/* Unsafe/intext.scm 813 */
													long BgL_za72za7_4095;

													BgL_za72za7_4095 =
														(long) CINT(CELL_REF(BgL_ptrz00_5504));
													BgL_auxz00_5514 =
														BINT((((long) 1) + BgL_za72za7_4095));
												}
												CELL_SET(BgL_ptrz00_5504, BgL_auxz00_5514);
											}
											{	/* Unsafe/intext.scm 814 */
												obj_t BgL_arg2340z00_1805;

												BgL_arg2340z00_1805 =
													SYMBOL_TO_STRING(BgL_itemz00_1800);
												{
													obj_t BgL_itemz00_6881;

													BgL_itemz00_6881 = BgL_arg2340z00_1805;
													BgL_itemz00_1800 = BgL_itemz00_6881;
													goto BGl_printzd2itemzd2zz__intextz00;
												}
											}
										}
									else
										{	/* Unsafe/intext.scm 812 */
											if (KEYWORDP(BgL_itemz00_1800))
												{	/* Unsafe/intext.scm 815 */
													BGl_checkzd2bufferz12zc0zz__intextz00
														(BgL_bufferz00_5503, BgL_ptrz00_5504, ((long) 1));
													{	/* Unsafe/intext.scm 816 */
														obj_t BgL_stringz00_4099;

														long BgL_kz00_4100;

														BgL_stringz00_4099 = CELL_REF(BgL_bufferz00_5503);
														BgL_kz00_4100 =
															(long) CINT(CELL_REF(BgL_ptrz00_5504));
														STRING_SET(BgL_stringz00_4099, BgL_kz00_4100,
															((unsigned char) ':'));
													}
													{	/* Unsafe/intext.scm 816 */
														obj_t BgL_auxz00_5515;

														{	/* Unsafe/intext.scm 816 */
															long BgL_za72za7_4103;

															BgL_za72za7_4103 =
																(long) CINT(CELL_REF(BgL_ptrz00_5504));
															BgL_auxz00_5515 =
																BINT((((long) 1) + BgL_za72za7_4103));
														}
														CELL_SET(BgL_ptrz00_5504, BgL_auxz00_5515);
													}
													{	/* Unsafe/intext.scm 817 */
														obj_t BgL_arg2342z00_1807;

														{	/* Unsafe/intext.scm 817 */
															obj_t BgL_res3035z00_4106;

															{	/* Unsafe/intext.scm 817 */
																obj_t BgL_keywordz00_4104;

																BgL_keywordz00_4104 = BgL_itemz00_1800;
																{	/* Unsafe/intext.scm 817 */
																	obj_t BgL_arg2976z00_4105;

																	BgL_arg2976z00_4105 =
																		KEYWORD_TO_STRING(BgL_keywordz00_4104);
																	BgL_res3035z00_4106 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg2976z00_4105);
															}}
															BgL_arg2342z00_1807 = BgL_res3035z00_4106;
														}
														{
															obj_t BgL_itemz00_6892;

															BgL_itemz00_6892 = BgL_arg2342z00_1807;
															BgL_itemz00_1800 = BgL_itemz00_6892;
															goto BGl_printzd2itemzd2zz__intextz00;
														}
													}
												}
											else
												{	/* Unsafe/intext.scm 815 */
													if (STRINGP(BgL_itemz00_1800))
														{	/* Unsafe/intext.scm 819 */
															obj_t BgL_zc3anonymousza32345ze3z83_5489;

															BgL_zc3anonymousza32345ze3z83_5489 =
																make_fx_procedure
																(BGl_zc3anonymousza32345ze3z83zz__intextz00,
																(int) (((long) 2)), (int) (((long) 2)));
															PROCEDURE_SET(BgL_zc3anonymousza32345ze3z83_5489,
																(int) (((long) 0)), BgL_bufferz00_5503);
															PROCEDURE_SET(BgL_zc3anonymousza32345ze3z83_5489,
																(int) (((long) 1)), BgL_ptrz00_5504);
															{
																obj_t BgL_printerz00_6903;

																obj_t BgL_itemz00_6902;

																BgL_itemz00_6902 = BgL_itemz00_1800;
																BgL_printerz00_6903 =
																	BgL_zc3anonymousza32345ze3z83_5489;
																BgL_printerz00_1635 = BgL_printerz00_6903;
																BgL_itemz00_1634 = BgL_itemz00_6902;
																goto BgL_zc3anonymousza32245ze3z83_1636;
															}
														}
													else
														{	/* Unsafe/intext.scm 818 */
															if (BGL_OBJECTP(BgL_itemz00_1800))
																{
																	obj_t BgL_printerz00_6907;

																	obj_t BgL_itemz00_6906;

																	BgL_itemz00_6906 = BgL_itemz00_1800;
																	BgL_printerz00_6907 =
																		BgL_printzd2objectzd2_5511;
																	BgL_printerz00_1635 = BgL_printerz00_6907;
																	BgL_itemz00_1634 = BgL_itemz00_6906;
																	goto BgL_zc3anonymousza32245ze3z83_1636;
																}
															else
																{	/* Unsafe/intext.scm 820 */
																	if (STRUCTP(BgL_itemz00_1800))
																		{	/* Unsafe/intext.scm 823 */
																			obj_t BgL_zc3anonymousza32349ze3z83_5487;

																			BgL_zc3anonymousza32349ze3z83_5487 =
																				make_fx_procedure
																				(BGl_zc3anonymousza32349ze3z83zz__intextz00,
																				(int) (((long) 2)),
																				(int) (((long) 13)));
																			PROCEDURE_SET
																				(BgL_zc3anonymousza32349ze3z83_5487,
																				(int) (((long) 0)), BgL_tablez00_5501);
																			PROCEDURE_SET
																				(BgL_zc3anonymousza32349ze3z83_5487,
																				(int) (((long) 1)), BgL_refz00_5502);
																			PROCEDURE_SET
																				(BgL_zc3anonymousza32349ze3z83_5487,
																				(int) (((long) 2)),
																				BgL_printzd2customzd2_5505);
																			PROCEDURE_SET
																				(BgL_zc3anonymousza32349ze3z83_5487,
																				(int) (((long) 3)),
																				BgL_printzd2tvectorzd2_5506);
																			PROCEDURE_SET
																				(BgL_zc3anonymousza32349ze3z83_5487,
																				(int) (((long) 4)),
																				BgL_printzd2hvectorzd2_5507);
																			PROCEDURE_SET
																				(BgL_zc3anonymousza32349ze3z83_5487,
																				(int) (((long) 5)),
																				BgL_printzd2vectorzd2_5508);
																			PROCEDURE_SET
																				(BgL_zc3anonymousza32349ze3z83_5487,
																				(int) (((long) 6)),
																				BgL_printzd2weakptrzd2_5509);
																			PROCEDURE_SET
																				(BgL_zc3anonymousza32349ze3z83_5487,
																				(int) (((long) 7)),
																				BgL_printzd2cellzd2_5510);
																			PROCEDURE_SET
																				(BgL_zc3anonymousza32349ze3z83_5487,
																				(int) (((long) 8)),
																				BgL_printzd2objectzd2_5511);
																			PROCEDURE_SET
																				(BgL_zc3anonymousza32349ze3z83_5487,
																				(int) (((long) 9)),
																				BgL_printzd2pairzd2_5512);
																			PROCEDURE_SET
																				(BgL_zc3anonymousza32349ze3z83_5487,
																				(int) (((long) 10)),
																				BgL_printzd2epairzd2_5513);
																			PROCEDURE_SET
																				(BgL_zc3anonymousza32349ze3z83_5487,
																				(int) (((long) 11)),
																				BgL_bufferz00_5503);
																			PROCEDURE_SET
																				(BgL_zc3anonymousza32349ze3z83_5487,
																				(int) (((long) 12)), BgL_ptrz00_5504);
																			{
																				obj_t BgL_printerz00_6940;

																				obj_t BgL_itemz00_6939;

																				BgL_itemz00_6939 = BgL_itemz00_1800;
																				BgL_printerz00_6940 =
																					BgL_zc3anonymousza32349ze3z83_5487;
																				BgL_printerz00_1635 =
																					BgL_printerz00_6940;
																				BgL_itemz00_1634 = BgL_itemz00_6939;
																				goto BgL_zc3anonymousza32245ze3z83_1636;
																			}
																		}
																	else
																		{	/* Unsafe/intext.scm 822 */
																			if (CHARP(BgL_itemz00_1800))
																				{	/* Unsafe/intext.scm 824 */
																					BGl_checkzd2bufferz12zc0zz__intextz00
																						(BgL_bufferz00_5503,
																						BgL_ptrz00_5504, ((long) 1));
																					{	/* Unsafe/intext.scm 825 */
																						obj_t BgL_stringz00_4116;

																						long BgL_kz00_4117;

																						BgL_stringz00_4116 =
																							CELL_REF(BgL_bufferz00_5503);
																						BgL_kz00_4117 =
																							(long)
																							CINT(CELL_REF(BgL_ptrz00_5504));
																						STRING_SET(BgL_stringz00_4116,
																							BgL_kz00_4117,
																							((unsigned char) 'a'));
																					}
																					{	/* Unsafe/intext.scm 825 */
																						obj_t BgL_auxz00_5516;

																						{	/* Unsafe/intext.scm 825 */
																							long BgL_za72za7_4120;

																							BgL_za72za7_4120 =
																								(long)
																								CINT(CELL_REF(BgL_ptrz00_5504));
																							BgL_auxz00_5516 =
																								BINT((((long) 1) +
																									BgL_za72za7_4120));
																						}
																						CELL_SET(BgL_ptrz00_5504,
																							BgL_auxz00_5516);
																					}
																					{	/* Unsafe/intext.scm 826 */
																						long BgL_arg2351z00_1822;

																						BgL_arg2351z00_1822 =
																							(CCHAR(BgL_itemz00_1800));
																						if (
																							(BgL_arg2351z00_1822 <
																								((long) 0)))
																							{	/* Unsafe/intext.scm 826 */
																								BGl_z12printzd2markupzc0zz__intextz00
																									(BgL_ptrz00_5504,
																									BgL_bufferz00_5503,
																									((unsigned char) '-'));
																								{	/* Unsafe/intext.scm 826 */
																									long BgL_arg2242z00_4124;

																									BgL_arg2242z00_4124 =
																										NEG(BgL_arg2351z00_1822);
																									return
																										BGl_printzd2wordzd2zz__intextz00
																										(BgL_ptrz00_5504,
																										BgL_bufferz00_5503,
																										BgL_arg2242z00_4124);
																								}
																							}
																						else
																							{	/* Unsafe/intext.scm 826 */
																								return
																									BGl_printzd2wordzd2zz__intextz00
																									(BgL_ptrz00_5504,
																									BgL_bufferz00_5503,
																									BgL_arg2351z00_1822);
																							}
																					}
																				}
																			else
																				{	/* Unsafe/intext.scm 824 */
																					if (UCS2P(BgL_itemz00_1800))
																						{	/* Unsafe/intext.scm 827 */
																							BGl_checkzd2bufferz12zc0zz__intextz00
																								(BgL_bufferz00_5503,
																								BgL_ptrz00_5504, ((long) 1));
																							{	/* Unsafe/intext.scm 828 */
																								obj_t BgL_stringz00_4130;

																								long BgL_kz00_4131;

																								BgL_stringz00_4130 =
																									CELL_REF(BgL_bufferz00_5503);
																								BgL_kz00_4131 =
																									(long)
																									CINT(CELL_REF
																									(BgL_ptrz00_5504));
																								STRING_SET(BgL_stringz00_4130,
																									BgL_kz00_4131,
																									((unsigned char) 'u'));
																							}
																							{	/* Unsafe/intext.scm 828 */
																								obj_t BgL_auxz00_5517;

																								{	/* Unsafe/intext.scm 828 */
																									long BgL_za72za7_4134;

																									BgL_za72za7_4134 =
																										(long)
																										CINT(CELL_REF
																										(BgL_ptrz00_5504));
																									BgL_auxz00_5517 =
																										BINT((((long) 1) +
																											BgL_za72za7_4134));
																								}
																								CELL_SET(BgL_ptrz00_5504,
																									BgL_auxz00_5517);
																							}
																							{	/* Unsafe/intext.scm 829 */
																								int BgL_arg2353z00_1824;

																								{	/* Unsafe/intext.scm 829 */
																									ucs2_t BgL_ucs2z00_4135;

																									BgL_ucs2z00_4135 =
																										CUCS2(BgL_itemz00_1800);
																									{	/* Unsafe/intext.scm 829 */
																										obj_t BgL_auxz00_6966;

																										BgL_auxz00_6966 =
																											BUCS2(BgL_ucs2z00_4135);
																										BgL_arg2353z00_1824 =
																											CUCS2(BgL_auxz00_6966);
																								}}
																								{	/* Unsafe/intext.scm 829 */
																									long BgL_iz00_4136;

																									BgL_iz00_4136 =
																										(long)
																										(BgL_arg2353z00_1824);
																									if ((BgL_iz00_4136 <
																											((long) 0)))
																										{	/* Unsafe/intext.scm 829 */
																											BGl_z12printzd2markupzc0zz__intextz00
																												(BgL_ptrz00_5504,
																												BgL_bufferz00_5503,
																												((unsigned char) '-'));
																											{	/* Unsafe/intext.scm 829 */
																												long
																													BgL_arg2242z00_4138;
																												BgL_arg2242z00_4138 =
																													NEG(BgL_iz00_4136);
																												return
																													BGl_printzd2wordzd2zz__intextz00
																													(BgL_ptrz00_5504,
																													BgL_bufferz00_5503,
																													BgL_arg2242z00_4138);
																											}
																										}
																									else
																										{	/* Unsafe/intext.scm 829 */
																											return
																												BGl_printzd2wordzd2zz__intextz00
																												(BgL_ptrz00_5504,
																												BgL_bufferz00_5503,
																												BgL_iz00_4136);
																										}
																								}
																							}
																						}
																					else
																						{	/* Unsafe/intext.scm 827 */
																							if ((BgL_itemz00_1800 == BUNSPEC))
																								{	/* Unsafe/intext.scm 830 */
																									BGl_checkzd2bufferz12zc0zz__intextz00
																										(BgL_bufferz00_5503,
																										BgL_ptrz00_5504,
																										((long) 1));
																									{	/* Unsafe/intext.scm 831 */
																										obj_t BgL_stringz00_4143;

																										long BgL_kz00_4144;

																										BgL_stringz00_4143 =
																											CELL_REF
																											(BgL_bufferz00_5503);
																										BgL_kz00_4144 =
																											(long)
																											CINT(CELL_REF
																											(BgL_ptrz00_5504));
																										STRING_SET
																											(BgL_stringz00_4143,
																											BgL_kz00_4144,
																											((unsigned char) ';'));
																									}
																									{	/* Unsafe/intext.scm 831 */
																										obj_t BgL_auxz00_5518;

																										{	/* Unsafe/intext.scm 831 */
																											long BgL_za72za7_4147;

																											BgL_za72za7_4147 =
																												(long)
																												CINT(CELL_REF
																												(BgL_ptrz00_5504));
																											BgL_auxz00_5518 =
																												BINT((((long) 1) +
																													BgL_za72za7_4147));
																										}
																										return
																											CELL_SET(BgL_ptrz00_5504,
																											BgL_auxz00_5518);
																									}
																								}
																							else
																								{	/* Unsafe/intext.scm 830 */
																									if (
																										(BgL_itemz00_1800 == BNIL))
																										{	/* Unsafe/intext.scm 832 */
																											BGl_checkzd2bufferz12zc0zz__intextz00
																												(BgL_bufferz00_5503,
																												BgL_ptrz00_5504,
																												((long) 1));
																											{	/* Unsafe/intext.scm 833 */
																												obj_t
																													BgL_stringz00_4149;
																												long BgL_kz00_4150;

																												BgL_stringz00_4149 =
																													CELL_REF
																													(BgL_bufferz00_5503);
																												BgL_kz00_4150 =
																													(long)
																													CINT(CELL_REF
																													(BgL_ptrz00_5504));
																												STRING_SET
																													(BgL_stringz00_4149,
																													BgL_kz00_4150,
																													((unsigned char)
																														'.'));
																											}
																											{	/* Unsafe/intext.scm 833 */
																												obj_t BgL_auxz00_5519;

																												{	/* Unsafe/intext.scm 833 */
																													long BgL_za72za7_4153;

																													BgL_za72za7_4153 =
																														(long)
																														CINT(CELL_REF
																														(BgL_ptrz00_5504));
																													BgL_auxz00_5519 =
																														BINT((((long) 1) +
																															BgL_za72za7_4153));
																												}
																												return
																													CELL_SET
																													(BgL_ptrz00_5504,
																													BgL_auxz00_5519);
																											}
																										}
																									else
																										{	/* Unsafe/intext.scm 832 */
																											if (
																												(BgL_itemz00_1800 ==
																													BTRUE))
																												{	/* Unsafe/intext.scm 834 */
																													BGl_checkzd2bufferz12zc0zz__intextz00
																														(BgL_bufferz00_5503,
																														BgL_ptrz00_5504,
																														((long) 1));
																													{	/* Unsafe/intext.scm 835 */
																														obj_t
																															BgL_stringz00_4155;
																														long BgL_kz00_4156;

																														BgL_stringz00_4155 =
																															CELL_REF
																															(BgL_bufferz00_5503);
																														BgL_kz00_4156 =
																															(long)
																															CINT(CELL_REF
																															(BgL_ptrz00_5504));
																														STRING_SET
																															(BgL_stringz00_4155,
																															BgL_kz00_4156,
																															((unsigned char)
																																'T'));
																													}
																													{	/* Unsafe/intext.scm 835 */
																														obj_t
																															BgL_auxz00_5520;
																														{	/* Unsafe/intext.scm 835 */
																															long
																																BgL_za72za7_4159;
																															BgL_za72za7_4159 =
																																(long)
																																CINT(CELL_REF
																																(BgL_ptrz00_5504));
																															BgL_auxz00_5520 =
																																BINT((((long) 1)
																																	+
																																	BgL_za72za7_4159));
																														}
																														return
																															CELL_SET
																															(BgL_ptrz00_5504,
																															BgL_auxz00_5520);
																													}
																												}
																											else
																												{	/* Unsafe/intext.scm 834 */
																													if (
																														(BgL_itemz00_1800 ==
																															BFALSE))
																														{	/* Unsafe/intext.scm 836 */
																															BGl_checkzd2bufferz12zc0zz__intextz00
																																(BgL_bufferz00_5503,
																																BgL_ptrz00_5504,
																																((long) 1));
																															{	/* Unsafe/intext.scm 837 */
																																obj_t
																																	BgL_stringz00_4161;
																																long
																																	BgL_kz00_4162;
																																BgL_stringz00_4161
																																	=
																																	CELL_REF
																																	(BgL_bufferz00_5503);
																																BgL_kz00_4162 =
																																	(long)
																																	CINT(CELL_REF
																																	(BgL_ptrz00_5504));
																																STRING_SET
																																	(BgL_stringz00_4161,
																																	BgL_kz00_4162,
																																	((unsigned
																																			char)
																																		'F'));
																															}
																															{	/* Unsafe/intext.scm 837 */
																																obj_t
																																	BgL_auxz00_5521;
																																{	/* Unsafe/intext.scm 837 */
																																	long
																																		BgL_za72za7_4165;
																																	BgL_za72za7_4165
																																		=
																																		(long)
																																		CINT
																																		(CELL_REF
																																		(BgL_ptrz00_5504));
																																	BgL_auxz00_5521
																																		=
																																		BINT(((
																																				(long)
																																				1) +
																																			BgL_za72za7_4165));
																																}
																																return
																																	CELL_SET
																																	(BgL_ptrz00_5504,
																																	BgL_auxz00_5521);
																															}
																														}
																													else
																														{	/* Unsafe/intext.scm 836 */
																															if (CNSTP
																																(BgL_itemz00_1800))
																																{	/* Unsafe/intext.scm 838 */
																																	BGl_checkzd2bufferz12zc0zz__intextz00
																																		(BgL_bufferz00_5503,
																																		BgL_ptrz00_5504,
																																		((long) 1));
																																	{	/* Unsafe/intext.scm 839 */
																																		obj_t
																																			BgL_stringz00_4168;
																																		long
																																			BgL_kz00_4169;
																																		BgL_stringz00_4168
																																			=
																																			CELL_REF
																																			(BgL_bufferz00_5503);
																																		BgL_kz00_4169
																																			=
																																			(long)
																																			CINT
																																			(CELL_REF
																																			(BgL_ptrz00_5504));
																																		STRING_SET
																																			(BgL_stringz00_4168,
																																			BgL_kz00_4169,
																																			((unsigned
																																					char)
																																				'<'));
																																	}
																																	{	/* Unsafe/intext.scm 839 */
																																		obj_t
																																			BgL_auxz00_5522;
																																		{	/* Unsafe/intext.scm 839 */
																																			long
																																				BgL_za72za7_4172;
																																			BgL_za72za7_4172
																																				=
																																				(long)
																																				CINT
																																				(CELL_REF
																																				(BgL_ptrz00_5504));
																																			BgL_auxz00_5522
																																				=
																																				BINT(((
																																						(long)
																																						1) +
																																					BgL_za72za7_4172));
																																		}
																																		CELL_SET
																																			(BgL_ptrz00_5504,
																																			BgL_auxz00_5522);
																																	}
																																	{	/* Unsafe/intext.scm 840 */
																																		long
																																			BgL_arg2359z00_1830;
																																		BgL_arg2359z00_1830
																																			=
																																			CCNST
																																			(BgL_itemz00_1800);
																																		if (
																																			(BgL_arg2359z00_1830
																																				<
																																				((long)
																																					0)))
																																			{	/* Unsafe/intext.scm 840 */
																																				BGl_z12printzd2markupzc0zz__intextz00
																																					(BgL_ptrz00_5504,
																																					BgL_bufferz00_5503,
																																					((unsigned char) '-'));
																																				{	/* Unsafe/intext.scm 840 */
																																					long
																																						BgL_arg2242z00_4175;
																																					BgL_arg2242z00_4175
																																						=
																																						NEG
																																						(BgL_arg2359z00_1830);
																																					return
																																						BGl_printzd2wordzd2zz__intextz00
																																						(BgL_ptrz00_5504,
																																						BgL_bufferz00_5503,
																																						BgL_arg2242z00_4175);
																																				}
																																			}
																																		else
																																			{	/* Unsafe/intext.scm 840 */
																																				return
																																					BGl_printzd2wordzd2zz__intextz00
																																					(BgL_ptrz00_5504,
																																					BgL_bufferz00_5503,
																																					BgL_arg2359z00_1830);
																																			}
																																	}
																																}
																															else
																																{	/* Unsafe/intext.scm 838 */
																																	if (INTEGERP
																																		(BgL_itemz00_1800))
																																		{	/* Unsafe/intext.scm 842 */
																																			long
																																				BgL_iz00_4180;
																																			BgL_iz00_4180
																																				=
																																				(long)
																																				CINT
																																				(BgL_itemz00_1800);
																																			if (
																																				(BgL_iz00_4180
																																					<
																																					((long) 0)))
																																				{	/* Unsafe/intext.scm 842 */
																																					BGl_z12printzd2markupzc0zz__intextz00
																																						(BgL_ptrz00_5504,
																																						BgL_bufferz00_5503,
																																						((unsigned char) '-'));
																																					{	/* Unsafe/intext.scm 842 */
																																						long
																																							BgL_arg2242z00_4182;
																																						BgL_arg2242z00_4182
																																							=
																																							NEG
																																							(BgL_iz00_4180);
																																						return
																																							BGl_printzd2wordzd2zz__intextz00
																																							(BgL_ptrz00_5504,
																																							BgL_bufferz00_5503,
																																							BgL_arg2242z00_4182);
																																					}
																																				}
																																			else
																																				{	/* Unsafe/intext.scm 842 */
																																					return
																																						BGl_printzd2wordzd2zz__intextz00
																																						(BgL_ptrz00_5504,
																																						BgL_bufferz00_5503,
																																						BgL_iz00_4180);
																																				}
																																		}
																																	else
																																		{	/* Unsafe/intext.scm 841 */
																																			if (REALP
																																				(BgL_itemz00_1800))
																																				{	/* Unsafe/intext.scm 843 */
																																					BGl_checkzd2bufferz12zc0zz__intextz00
																																						(BgL_bufferz00_5503,
																																						BgL_ptrz00_5504,
																																						((long) 1));
																																					{	/* Unsafe/intext.scm 844 */
																																						obj_t
																																							BgL_stringz00_4190;
																																						long
																																							BgL_kz00_4191;
																																						BgL_stringz00_4190
																																							=
																																							CELL_REF
																																							(BgL_bufferz00_5503);
																																						BgL_kz00_4191
																																							=
																																							(long)
																																							CINT
																																							(CELL_REF
																																							(BgL_ptrz00_5504));
																																						STRING_SET
																																							(BgL_stringz00_4190,
																																							BgL_kz00_4191,
																																							((unsigned char) 'f'));
																																					}
																																					{	/* Unsafe/intext.scm 844 */
																																						obj_t
																																							BgL_auxz00_5523;
																																						{	/* Unsafe/intext.scm 844 */
																																							long
																																								BgL_za72za7_4194;
																																							BgL_za72za7_4194
																																								=
																																								(long)
																																								CINT
																																								(CELL_REF
																																								(BgL_ptrz00_5504));
																																							BgL_auxz00_5523
																																								=
																																								BINT
																																								(
																																								(((long) 1) + BgL_za72za7_4194));
																																						}
																																						CELL_SET
																																							(BgL_ptrz00_5504,
																																							BgL_auxz00_5523);
																																					}
																																					{	/* Unsafe/intext.scm 845 */
																																						obj_t
																																							BgL_sz00_1833;
																																						{	/* Unsafe/intext.scm 845 */
																																							obj_t
																																								BgL_realz00_4195;
																																							BgL_realz00_4195
																																								=
																																								BgL_itemz00_1800;
																																							BgL_sz00_1833
																																								=
																																								real_to_string
																																								(REAL_TO_DOUBLE
																																								(BgL_realz00_4195));
																																						}
																																						{	/* Unsafe/intext.scm 846 */
																																							long
																																								BgL_arg2362z00_1834;
																																							BgL_arg2362z00_1834
																																								=
																																								STRING_LENGTH
																																								(BgL_sz00_1833);
																																							BGl_printzd2wordzd2zz__intextz00
																																								(BgL_ptrz00_5504,
																																								BgL_bufferz00_5503,
																																								BgL_arg2362z00_1834);
																																							BGl_checkzd2bufferz12zc0zz__intextz00
																																								(BgL_bufferz00_5503,
																																								BgL_ptrz00_5504,
																																								BgL_arg2362z00_1834);
																																							{	/* Unsafe/intext.scm 846 */
																																								obj_t
																																									BgL_s2z00_4201;
																																								long
																																									BgL_o2z00_4202;
																																								BgL_s2z00_4201
																																									=
																																									CELL_REF
																																									(BgL_bufferz00_5503);
																																								BgL_o2z00_4202
																																									=
																																									(long)
																																									CINT
																																									(CELL_REF
																																									(BgL_ptrz00_5504));
																																								blit_string
																																									(BgL_sz00_1833,
																																									((long) 0), BgL_s2z00_4201, BgL_o2z00_4202, BgL_arg2362z00_1834);
																																							}
																																							{	/* Unsafe/intext.scm 846 */
																																								obj_t
																																									BgL_auxz00_5524;
																																								{	/* Unsafe/intext.scm 846 */
																																									long
																																										BgL_za71za7_4204;
																																									BgL_za71za7_4204
																																										=
																																										(long)
																																										CINT
																																										(CELL_REF
																																										(BgL_ptrz00_5504));
																																									BgL_auxz00_5524
																																										=
																																										BINT
																																										(
																																										(BgL_za71za7_4204
																																											+
																																											BgL_arg2362z00_1834));
																																								}
																																								return
																																									CELL_SET
																																									(BgL_ptrz00_5504,
																																									BgL_auxz00_5524);
																																							}
																																						}
																																					}
																																				}
																																			else
																																				{	/* Unsafe/intext.scm 843 */
																																					if (UCS2_STRINGP(BgL_itemz00_1800))
																																						{	/* Unsafe/intext.scm 849 */
																																							obj_t
																																								BgL_zc3anonymousza32365ze3z83_5485;
																																							BgL_zc3anonymousza32365ze3z83_5485
																																								=
																																								make_fx_procedure
																																								(BGl_zc3anonymousza32365ze3z83zz__intextz00,
																																								(int)
																																								(((long) 2)), (int) (((long) 2)));
																																							PROCEDURE_SET
																																								(BgL_zc3anonymousza32365ze3z83_5485,
																																								(int)
																																								(((long) 0)), BgL_bufferz00_5503);
																																							PROCEDURE_SET
																																								(BgL_zc3anonymousza32365ze3z83_5485,
																																								(int)
																																								(((long) 1)), BgL_ptrz00_5504);
																																							{
																																								obj_t
																																									BgL_printerz00_7060;
																																								obj_t
																																									BgL_itemz00_7059;
																																								BgL_itemz00_7059
																																									=
																																									BgL_itemz00_1800;
																																								BgL_printerz00_7060
																																									=
																																									BgL_zc3anonymousza32365ze3z83_5485;
																																								BgL_printerz00_1635
																																									=
																																									BgL_printerz00_7060;
																																								BgL_itemz00_1634
																																									=
																																									BgL_itemz00_7059;
																																								goto
																																									BgL_zc3anonymousza32245ze3z83_1636;
																																							}
																																						}
																																					else
																																						{	/* Unsafe/intext.scm 847 */
																																							if (CELLP(BgL_itemz00_1800))
																																								{
																																									obj_t
																																										BgL_printerz00_7064;
																																									obj_t
																																										BgL_itemz00_7063;
																																									BgL_itemz00_7063
																																										=
																																										BgL_itemz00_1800;
																																									BgL_printerz00_7064
																																										=
																																										BgL_printzd2cellzd2_5510;
																																									BgL_printerz00_1635
																																										=
																																										BgL_printerz00_7064;
																																									BgL_itemz00_1634
																																										=
																																										BgL_itemz00_7063;
																																									goto
																																										BgL_zc3anonymousza32245ze3z83_1636;
																																								}
																																							else
																																								{	/* Unsafe/intext.scm 850 */
																																									if (BGL_WEAKPTRP(BgL_itemz00_1800))
																																										{
																																											obj_t
																																												BgL_printerz00_7068;
																																											obj_t
																																												BgL_itemz00_7067;
																																											BgL_itemz00_7067
																																												=
																																												BgL_itemz00_1800;
																																											BgL_printerz00_7068
																																												=
																																												BgL_printzd2weakptrzd2_5509;
																																											BgL_printerz00_1635
																																												=
																																												BgL_printerz00_7068;
																																											BgL_itemz00_1634
																																												=
																																												BgL_itemz00_7067;
																																											goto
																																												BgL_zc3anonymousza32245ze3z83_1636;
																																										}
																																									else
																																										{	/* Unsafe/intext.scm 852 */
																																											if (VECTORP(BgL_itemz00_1800))
																																												{
																																													obj_t
																																														BgL_printerz00_7072;
																																													obj_t
																																														BgL_itemz00_7071;
																																													BgL_itemz00_7071
																																														=
																																														BgL_itemz00_1800;
																																													BgL_printerz00_7072
																																														=
																																														BgL_printzd2vectorzd2_5508;
																																													BgL_printerz00_1635
																																														=
																																														BgL_printerz00_7072;
																																													BgL_itemz00_1634
																																														=
																																														BgL_itemz00_7071;
																																													goto
																																														BgL_zc3anonymousza32245ze3z83_1636;
																																												}
																																											else
																																												{	/* Unsafe/intext.scm 854 */
																																													if (BGL_HVECTORP(BgL_itemz00_1800))
																																														{
																																															obj_t
																																																BgL_printerz00_7076;
																																															obj_t
																																																BgL_itemz00_7075;
																																															BgL_itemz00_7075
																																																=
																																																BgL_itemz00_1800;
																																															BgL_printerz00_7076
																																																=
																																																BgL_printzd2hvectorzd2_5507;
																																															BgL_printerz00_1635
																																																=
																																																BgL_printerz00_7076;
																																															BgL_itemz00_1634
																																																=
																																																BgL_itemz00_7075;
																																															goto
																																																BgL_zc3anonymousza32245ze3z83_1636;
																																														}
																																													else
																																														{	/* Unsafe/intext.scm 856 */
																																															if (TVECTORP(BgL_itemz00_1800))
																																																{
																																																	obj_t
																																																		BgL_printerz00_7080;
																																																	obj_t
																																																		BgL_itemz00_7079;
																																																	BgL_itemz00_7079
																																																		=
																																																		BgL_itemz00_1800;
																																																	BgL_printerz00_7080
																																																		=
																																																		BgL_printzd2tvectorzd2_5506;
																																																	BgL_printerz00_1635
																																																		=
																																																		BgL_printerz00_7080;
																																																	BgL_itemz00_1634
																																																		=
																																																		BgL_itemz00_7079;
																																																	goto
																																																		BgL_zc3anonymousza32245ze3z83_1636;
																																																}
																																															else
																																																{	/* Unsafe/intext.scm 858 */
																																																	if (ELONGP(BgL_itemz00_1800))
																																																		{	/* Unsafe/intext.scm 860 */
																																																			BGl_checkzd2bufferz12zc0zz__intextz00
																																																				(BgL_bufferz00_5503,
																																																				BgL_ptrz00_5504,
																																																				((long) 1));
																																																			{	/* Unsafe/intext.scm 861 */
																																																				obj_t
																																																					BgL_stringz00_4221;
																																																				long
																																																					BgL_kz00_4222;
																																																				BgL_stringz00_4221
																																																					=
																																																					CELL_REF
																																																					(BgL_bufferz00_5503);
																																																				BgL_kz00_4222
																																																					=
																																																					(long)
																																																					CINT
																																																					(CELL_REF
																																																					(BgL_ptrz00_5504));
																																																				STRING_SET
																																																					(BgL_stringz00_4221,
																																																					BgL_kz00_4222,
																																																					((unsigned char) 'E'));
																																																			}
																																																			{	/* Unsafe/intext.scm 861 */
																																																				obj_t
																																																					BgL_auxz00_5525;
																																																				{	/* Unsafe/intext.scm 861 */
																																																					long
																																																						BgL_za72za7_4225;
																																																					BgL_za72za7_4225
																																																						=
																																																						(long)
																																																						CINT
																																																						(CELL_REF
																																																						(BgL_ptrz00_5504));
																																																					BgL_auxz00_5525
																																																						=
																																																						BINT
																																																						(
																																																						(((long) 1) + BgL_za72za7_4225));
																																																				}
																																																				CELL_SET
																																																					(BgL_ptrz00_5504,
																																																					BgL_auxz00_5525);
																																																			}
																																																			{	/* Unsafe/intext.scm 862 */
																																																				obj_t
																																																					BgL_sz00_1848;
																																																				BgL_sz00_1848
																																																					=
																																																					BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																																																					(BELONG_TO_LONG
																																																					(BgL_itemz00_1800),
																																																					BNIL);
																																																				{	/* Unsafe/intext.scm 863 */
																																																					long
																																																						BgL_arg2373z00_1849;
																																																					BgL_arg2373z00_1849
																																																						=
																																																						STRING_LENGTH
																																																						(BgL_sz00_1848);
																																																					BGl_printzd2wordzd2zz__intextz00
																																																						(BgL_ptrz00_5504,
																																																						BgL_bufferz00_5503,
																																																						BgL_arg2373z00_1849);
																																																					BGl_checkzd2bufferz12zc0zz__intextz00
																																																						(BgL_bufferz00_5503,
																																																						BgL_ptrz00_5504,
																																																						BgL_arg2373z00_1849);
																																																					{	/* Unsafe/intext.scm 863 */
																																																						obj_t
																																																							BgL_s2z00_4231;
																																																						long
																																																							BgL_o2z00_4232;
																																																						BgL_s2z00_4231
																																																							=
																																																							CELL_REF
																																																							(BgL_bufferz00_5503);
																																																						BgL_o2z00_4232
																																																							=
																																																							(long)
																																																							CINT
																																																							(CELL_REF
																																																							(BgL_ptrz00_5504));
																																																						blit_string
																																																							(BgL_sz00_1848,
																																																							((long) 0), BgL_s2z00_4231, BgL_o2z00_4232, BgL_arg2373z00_1849);
																																																					}
																																																					{	/* Unsafe/intext.scm 863 */
																																																						obj_t
																																																							BgL_auxz00_5526;
																																																						{	/* Unsafe/intext.scm 863 */
																																																							long
																																																								BgL_za71za7_4234;
																																																							BgL_za71za7_4234
																																																								=
																																																								(long)
																																																								CINT
																																																								(CELL_REF
																																																								(BgL_ptrz00_5504));
																																																							BgL_auxz00_5526
																																																								=
																																																								BINT
																																																								(
																																																								(BgL_za71za7_4234
																																																									+
																																																									BgL_arg2373z00_1849));
																																																						}
																																																						return
																																																							CELL_SET
																																																							(BgL_ptrz00_5504,
																																																							BgL_auxz00_5526);
																																																					}
																																																				}
																																																			}
																																																		}
																																																	else
																																																		{	/* Unsafe/intext.scm 860 */
																																																			if (LLONGP(BgL_itemz00_1800))
																																																				{	/* Unsafe/intext.scm 864 */
																																																					BGl_checkzd2bufferz12zc0zz__intextz00
																																																						(BgL_bufferz00_5503,
																																																						BgL_ptrz00_5504,
																																																						((long) 1));
																																																					{	/* Unsafe/intext.scm 865 */
																																																						obj_t
																																																							BgL_stringz00_4238;
																																																						long
																																																							BgL_kz00_4239;
																																																						BgL_stringz00_4238
																																																							=
																																																							CELL_REF
																																																							(BgL_bufferz00_5503);
																																																						BgL_kz00_4239
																																																							=
																																																							(long)
																																																							CINT
																																																							(CELL_REF
																																																							(BgL_ptrz00_5504));
																																																						STRING_SET
																																																							(BgL_stringz00_4238,
																																																							BgL_kz00_4239,
																																																							((unsigned char) 'L'));
																																																					}
																																																					{	/* Unsafe/intext.scm 865 */
																																																						obj_t
																																																							BgL_auxz00_5527;
																																																						{	/* Unsafe/intext.scm 865 */
																																																							long
																																																								BgL_za72za7_4242;
																																																							BgL_za72za7_4242
																																																								=
																																																								(long)
																																																								CINT
																																																								(CELL_REF
																																																								(BgL_ptrz00_5504));
																																																							BgL_auxz00_5527
																																																								=
																																																								BINT
																																																								(
																																																								(((long) 1) + BgL_za72za7_4242));
																																																						}
																																																						CELL_SET
																																																							(BgL_ptrz00_5504,
																																																							BgL_auxz00_5527);
																																																					}
																																																					{	/* Unsafe/intext.scm 866 */
																																																						obj_t
																																																							BgL_sz00_1852;
																																																						BgL_sz00_1852
																																																							=
																																																							BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																																																							(BLLONG_TO_LLONG
																																																							(BgL_itemz00_1800),
																																																							BNIL);
																																																						{	/* Unsafe/intext.scm 867 */
																																																							long
																																																								BgL_arg2376z00_1853;
																																																							BgL_arg2376z00_1853
																																																								=
																																																								STRING_LENGTH
																																																								(BgL_sz00_1852);
																																																							BGl_printzd2wordzd2zz__intextz00
																																																								(BgL_ptrz00_5504,
																																																								BgL_bufferz00_5503,
																																																								BgL_arg2376z00_1853);
																																																							BGl_checkzd2bufferz12zc0zz__intextz00
																																																								(BgL_bufferz00_5503,
																																																								BgL_ptrz00_5504,
																																																								BgL_arg2376z00_1853);
																																																							{	/* Unsafe/intext.scm 867 */
																																																								obj_t
																																																									BgL_s2z00_4248;
																																																								long
																																																									BgL_o2z00_4249;
																																																								BgL_s2z00_4248
																																																									=
																																																									CELL_REF
																																																									(BgL_bufferz00_5503);
																																																								BgL_o2z00_4249
																																																									=
																																																									(long)
																																																									CINT
																																																									(CELL_REF
																																																									(BgL_ptrz00_5504));
																																																								blit_string
																																																									(BgL_sz00_1852,
																																																									((long) 0), BgL_s2z00_4248, BgL_o2z00_4249, BgL_arg2376z00_1853);
																																																							}
																																																							{	/* Unsafe/intext.scm 867 */
																																																								obj_t
																																																									BgL_auxz00_5528;
																																																								{	/* Unsafe/intext.scm 867 */
																																																									long
																																																										BgL_za71za7_4251;
																																																									BgL_za71za7_4251
																																																										=
																																																										(long)
																																																										CINT
																																																										(CELL_REF
																																																										(BgL_ptrz00_5504));
																																																									BgL_auxz00_5528
																																																										=
																																																										BINT
																																																										(
																																																										(BgL_za71za7_4251
																																																											+
																																																											BgL_arg2376z00_1853));
																																																								}
																																																								return
																																																									CELL_SET
																																																									(BgL_ptrz00_5504,
																																																									BgL_auxz00_5528);
																																																							}
																																																						}
																																																					}
																																																				}
																																																			else
																																																				{	/* Unsafe/intext.scm 864 */
																																																					if (BGL_DATEP(BgL_itemz00_1800))
																																																						{	/* Unsafe/intext.scm 868 */
																																																							BGl_checkzd2bufferz12zc0zz__intextz00
																																																								(BgL_bufferz00_5503,
																																																								BgL_ptrz00_5504,
																																																								((long) 1));
																																																							{	/* Unsafe/intext.scm 869 */
																																																								obj_t
																																																									BgL_stringz00_4255;
																																																								long
																																																									BgL_kz00_4256;
																																																								BgL_stringz00_4255
																																																									=
																																																									CELL_REF
																																																									(BgL_bufferz00_5503);
																																																								BgL_kz00_4256
																																																									=
																																																									(long)
																																																									CINT
																																																									(CELL_REF
																																																									(BgL_ptrz00_5504));
																																																								STRING_SET
																																																									(BgL_stringz00_4255,
																																																									BgL_kz00_4256,
																																																									((unsigned char) 'd'));
																																																							}
																																																							{	/* Unsafe/intext.scm 869 */
																																																								obj_t
																																																									BgL_auxz00_5529;
																																																								{	/* Unsafe/intext.scm 869 */
																																																									long
																																																										BgL_za72za7_4259;
																																																									BgL_za72za7_4259
																																																										=
																																																										(long)
																																																										CINT
																																																										(CELL_REF
																																																										(BgL_ptrz00_5504));
																																																									BgL_auxz00_5529
																																																										=
																																																										BINT
																																																										(
																																																										(((long) 1) + BgL_za72za7_4259));
																																																								}
																																																								CELL_SET
																																																									(BgL_ptrz00_5504,
																																																									BgL_auxz00_5529);
																																																							}
																																																							{	/* Unsafe/intext.scm 870 */
																																																								obj_t
																																																									BgL_sz00_1856;
																																																								BgL_sz00_1856
																																																									=
																																																									BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																																																									(bgl_date_to_seconds
																																																									(BgL_itemz00_1800),
																																																									BNIL);
																																																								{	/* Unsafe/intext.scm 871 */
																																																									long
																																																										BgL_arg2379z00_1857;
																																																									BgL_arg2379z00_1857
																																																										=
																																																										STRING_LENGTH
																																																										(BgL_sz00_1856);
																																																									BGl_printzd2wordzd2zz__intextz00
																																																										(BgL_ptrz00_5504,
																																																										BgL_bufferz00_5503,
																																																										BgL_arg2379z00_1857);
																																																									BGl_checkzd2bufferz12zc0zz__intextz00
																																																										(BgL_bufferz00_5503,
																																																										BgL_ptrz00_5504,
																																																										BgL_arg2379z00_1857);
																																																									{	/* Unsafe/intext.scm 871 */
																																																										obj_t
																																																											BgL_s2z00_4266;
																																																										long
																																																											BgL_o2z00_4267;
																																																										BgL_s2z00_4266
																																																											=
																																																											CELL_REF
																																																											(BgL_bufferz00_5503);
																																																										BgL_o2z00_4267
																																																											=
																																																											(long)
																																																											CINT
																																																											(CELL_REF
																																																											(BgL_ptrz00_5504));
																																																										blit_string
																																																											(BgL_sz00_1856,
																																																											((long) 0), BgL_s2z00_4266, BgL_o2z00_4267, BgL_arg2379z00_1857);
																																																									}
																																																									{	/* Unsafe/intext.scm 871 */
																																																										obj_t
																																																											BgL_auxz00_5530;
																																																										{	/* Unsafe/intext.scm 871 */
																																																											long
																																																												BgL_za71za7_4269;
																																																											BgL_za71za7_4269
																																																												=
																																																												(long)
																																																												CINT
																																																												(CELL_REF
																																																												(BgL_ptrz00_5504));
																																																											BgL_auxz00_5530
																																																												=
																																																												BINT
																																																												(
																																																												(BgL_za71za7_4269
																																																													+
																																																													BgL_arg2379z00_1857));
																																																										}
																																																										return
																																																											CELL_SET
																																																											(BgL_ptrz00_5504,
																																																											BgL_auxz00_5530);
																																																									}
																																																								}
																																																							}
																																																						}
																																																					else
																																																						{	/* Unsafe/intext.scm 868 */
																																																							if (BIGNUMP(BgL_itemz00_1800))
																																																								{	/* Unsafe/intext.scm 872 */
																																																									BGl_checkzd2bufferz12zc0zz__intextz00
																																																										(BgL_bufferz00_5503,
																																																										BgL_ptrz00_5504,
																																																										((long) 1));
																																																									{	/* Unsafe/intext.scm 873 */
																																																										obj_t
																																																											BgL_stringz00_4273;
																																																										long
																																																											BgL_kz00_4274;
																																																										BgL_stringz00_4273
																																																											=
																																																											CELL_REF
																																																											(BgL_bufferz00_5503);
																																																										BgL_kz00_4274
																																																											=
																																																											(long)
																																																											CINT
																																																											(CELL_REF
																																																											(BgL_ptrz00_5504));
																																																										STRING_SET
																																																											(BgL_stringz00_4273,
																																																											BgL_kz00_4274,
																																																											((unsigned char) 'z'));
																																																									}
																																																									{	/* Unsafe/intext.scm 873 */
																																																										obj_t
																																																											BgL_auxz00_5531;
																																																										{	/* Unsafe/intext.scm 873 */
																																																											long
																																																												BgL_za72za7_4277;
																																																											BgL_za72za7_4277
																																																												=
																																																												(long)
																																																												CINT
																																																												(CELL_REF
																																																												(BgL_ptrz00_5504));
																																																											BgL_auxz00_5531
																																																												=
																																																												BINT
																																																												(
																																																												(((long) 1) + BgL_za72za7_4277));
																																																										}
																																																										CELL_SET
																																																											(BgL_ptrz00_5504,
																																																											BgL_auxz00_5531);
																																																									}
																																																									{	/* Unsafe/intext.scm 874 */
																																																										obj_t
																																																											BgL_sz00_1861;
																																																										{	/* Ieee/fixnum.scm 364 */

																																																											BgL_sz00_1861
																																																												=
																																																												BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																																																												(BgL_itemz00_1800,
																																																												((long) 10));
																																																										}
																																																										{	/* Unsafe/intext.scm 875 */
																																																											long
																																																												BgL_arg2383z00_1862;
																																																											BgL_arg2383z00_1862
																																																												=
																																																												STRING_LENGTH
																																																												(BgL_sz00_1861);
																																																											BGl_printzd2wordzd2zz__intextz00
																																																												(BgL_ptrz00_5504,
																																																												BgL_bufferz00_5503,
																																																												BgL_arg2383z00_1862);
																																																											BGl_checkzd2bufferz12zc0zz__intextz00
																																																												(BgL_bufferz00_5503,
																																																												BgL_ptrz00_5504,
																																																												BgL_arg2383z00_1862);
																																																											{	/* Unsafe/intext.scm 875 */
																																																												obj_t
																																																													BgL_s2z00_4283;
																																																												long
																																																													BgL_o2z00_4284;
																																																												BgL_s2z00_4283
																																																													=
																																																													CELL_REF
																																																													(BgL_bufferz00_5503);
																																																												BgL_o2z00_4284
																																																													=
																																																													(long)
																																																													CINT
																																																													(CELL_REF
																																																													(BgL_ptrz00_5504));
																																																												blit_string
																																																													(BgL_sz00_1861,
																																																													((long) 0), BgL_s2z00_4283, BgL_o2z00_4284, BgL_arg2383z00_1862);
																																																											}
																																																											{	/* Unsafe/intext.scm 875 */
																																																												obj_t
																																																													BgL_auxz00_5532;
																																																												{	/* Unsafe/intext.scm 875 */
																																																													long
																																																														BgL_za71za7_4286;
																																																													BgL_za71za7_4286
																																																														=
																																																														(long)
																																																														CINT
																																																														(CELL_REF
																																																														(BgL_ptrz00_5504));
																																																													BgL_auxz00_5532
																																																														=
																																																														BINT
																																																														(
																																																														(BgL_za71za7_4286
																																																															+
																																																															BgL_arg2383z00_1862));
																																																												}
																																																												return
																																																													CELL_SET
																																																													(BgL_ptrz00_5504,
																																																													BgL_auxz00_5532);
																																																											}
																																																										}
																																																									}
																																																								}
																																																							else
																																																								{	/* Unsafe/intext.scm 872 */
																																																									if (CUSTOMP(BgL_itemz00_1800))
																																																										{
																																																											obj_t
																																																												BgL_printerz00_7155;
																																																											obj_t
																																																												BgL_itemz00_7154;
																																																											BgL_itemz00_7154
																																																												=
																																																												BgL_itemz00_1800;
																																																											BgL_printerz00_7155
																																																												=
																																																												BgL_printzd2customzd2_5505;
																																																											BgL_printerz00_1635
																																																												=
																																																												BgL_printerz00_7155;
																																																											BgL_itemz00_1634
																																																												=
																																																												BgL_itemz00_7154;
																																																											goto
																																																												BgL_zc3anonymousza32245ze3z83_1636;
																																																										}
																																																									else
																																																										{	/* Unsafe/intext.scm 876 */
																																																											if (PROCEDUREP(BgL_itemz00_1800))
																																																												{	/* Unsafe/intext.scm 879 */
																																																													obj_t
																																																														BgL_zc3anonymousza32388ze3z83_5477;
																																																													BgL_zc3anonymousza32388ze3z83_5477
																																																														=
																																																														make_fx_procedure
																																																														(BGl_zc3anonymousza32388ze3z83zz__intextz00,
																																																														(int)
																																																														(((long) 2)), (int) (((long) 2)));
																																																													PROCEDURE_SET
																																																														(BgL_zc3anonymousza32388ze3z83_5477,
																																																														(int)
																																																														(((long) 0)), BgL_bufferz00_5503);
																																																													PROCEDURE_SET
																																																														(BgL_zc3anonymousza32388ze3z83_5477,
																																																														(int)
																																																														(((long) 1)), BgL_ptrz00_5504);
																																																													{
																																																														obj_t
																																																															BgL_printerz00_7166;
																																																														obj_t
																																																															BgL_itemz00_7165;
																																																														BgL_itemz00_7165
																																																															=
																																																															BgL_itemz00_1800;
																																																														BgL_printerz00_7166
																																																															=
																																																															BgL_zc3anonymousza32388ze3z83_5477;
																																																														BgL_printerz00_1635
																																																															=
																																																															BgL_printerz00_7166;
																																																														BgL_itemz00_1634
																																																															=
																																																															BgL_itemz00_7165;
																																																														goto
																																																															BgL_zc3anonymousza32245ze3z83_1636;
																																																													}
																																																												}
																																																											else
																																																												{	/* Unsafe/intext.scm 878 */
																																																													if (PROCESSP(BgL_itemz00_1800))
																																																														{	/* Unsafe/intext.scm 881 */
																																																															obj_t
																																																																BgL_zc3anonymousza32391ze3z83_5476;
																																																															BgL_zc3anonymousza32391ze3z83_5476
																																																																=
																																																																make_fx_procedure
																																																																(BGl_zc3anonymousza32391ze3z83zz__intextz00,
																																																																(int)
																																																																(((long) 2)), (int) (((long) 2)));
																																																															PROCEDURE_SET
																																																																(BgL_zc3anonymousza32391ze3z83_5476,
																																																																(int)
																																																																(((long) 0)), BgL_bufferz00_5503);
																																																															PROCEDURE_SET
																																																																(BgL_zc3anonymousza32391ze3z83_5476,
																																																																(int)
																																																																(((long) 1)), BgL_ptrz00_5504);
																																																															{
																																																																obj_t
																																																																	BgL_printerz00_7177;
																																																																obj_t
																																																																	BgL_itemz00_7176;
																																																																BgL_itemz00_7176
																																																																	=
																																																																	BgL_itemz00_1800;
																																																																BgL_printerz00_7177
																																																																	=
																																																																	BgL_zc3anonymousza32391ze3z83_5476;
																																																																BgL_printerz00_1635
																																																																	=
																																																																	BgL_printerz00_7177;
																																																																BgL_itemz00_1634
																																																																	=
																																																																	BgL_itemz00_7176;
																																																																goto
																																																																	BgL_zc3anonymousza32245ze3z83_1636;
																																																															}
																																																														}
																																																													else
																																																														{	/* Unsafe/intext.scm 880 */
																																																															if (OPAQUEP(BgL_itemz00_1800))
																																																																{	/* Unsafe/intext.scm 883 */
																																																																	obj_t
																																																																		BgL_zc3anonymousza32394ze3z83_5475;
																																																																	BgL_zc3anonymousza32394ze3z83_5475
																																																																		=
																																																																		make_fx_procedure
																																																																		(BGl_zc3anonymousza32394ze3z83zz__intextz00,
																																																																		(int)
																																																																		(((long) 2)), (int) (((long) 2)));
																																																																	PROCEDURE_SET
																																																																		(BgL_zc3anonymousza32394ze3z83_5475,
																																																																		(int)
																																																																		(((long) 0)), BgL_bufferz00_5503);
																																																																	PROCEDURE_SET
																																																																		(BgL_zc3anonymousza32394ze3z83_5475,
																																																																		(int)
																																																																		(((long) 1)), BgL_ptrz00_5504);
																																																																	{
																																																																		obj_t
																																																																			BgL_printerz00_7188;
																																																																		obj_t
																																																																			BgL_itemz00_7187;
																																																																		BgL_itemz00_7187
																																																																			=
																																																																			BgL_itemz00_1800;
																																																																		BgL_printerz00_7188
																																																																			=
																																																																			BgL_zc3anonymousza32394ze3z83_5475;
																																																																		BgL_printerz00_1635
																																																																			=
																																																																			BgL_printerz00_7188;
																																																																		BgL_itemz00_1634
																																																																			=
																																																																			BgL_itemz00_7187;
																																																																		goto
																																																																			BgL_zc3anonymousza32245ze3z83_1636;
																																																																	}
																																																																}
																																																															else
																																																																{	/* Unsafe/intext.scm 882 */
																																																																	return
																																																																		BGl_errorz00zz__errorz00
																																																																		(BGl_string3117z00zz__intextz00,
																																																																		BGl_string3165z00zz__intextz00,
																																																																		BgL_itemz00_1800);
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



/* print-word */
	obj_t BGl_printzd2wordzd2zz__intextz00(obj_t BgL_ptrz00_5537,
		obj_t BgL_bufferz00_5536, long BgL_mz00_1622)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 633 */
			{	/* Unsafe/intext.scm 628 */
				long BgL_siza7eza7_3628;

				BgL_siza7eza7_3628 =
					BGl_siza7ezd2ofzd2wordza7zz__intextz00(BINT(BgL_mz00_1622));
				if ((BgL_siza7eza7_3628 == ((long) 0)))
					{	/* Unsafe/intext.scm 628 */
						unsigned char BgL_arg2212z00_3633;

						BgL_arg2212z00_3633 = (((long) 0));
						return
							BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5537,
							BgL_bufferz00_5536, BgL_arg2212z00_3633);
					}
				else
					{	/* Unsafe/intext.scm 628 */
						{	/* Unsafe/intext.scm 628 */
							unsigned char BgL_arg2212z00_3636;

							BgL_arg2212z00_3636 = (BgL_siza7eza7_3628);
							BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5537,
								BgL_bufferz00_5536, BgL_arg2212z00_3636);
						}
						return
							BBOOL(BGl_printzd2wordzf2siza7ez87zz__intextz00(BgL_ptrz00_5537,
								BgL_bufferz00_5536, BINT(BgL_mz00_1622),
								BINT(BgL_siza7eza7_3628)));
					}
			}
		}
	}



/* !print-chars */
	obj_t BGl_z12printzd2charszc0zz__intextz00(obj_t BgL_ptrz00_5539,
		obj_t BgL_bufferz00_5538, obj_t BgL_sz00_1587, long BgL_siza7eza7_1588)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 600 */
			{	/* Unsafe/intext.scm 600 */
				long BgL_siza7eza7_3572;

				BgL_siza7eza7_3572 =
					BGl_siza7ezd2ofzd2wordza7zz__intextz00(BINT(BgL_siza7eza7_1588));
				if ((BgL_siza7eza7_3572 == ((long) 0)))
					{	/* Unsafe/intext.scm 600 */
						unsigned char BgL_arg2212z00_3577;

						BgL_arg2212z00_3577 = (((long) 0));
						BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5539,
							BgL_bufferz00_5538, BgL_arg2212z00_3577);
					}
				else
					{	/* Unsafe/intext.scm 600 */
						{	/* Unsafe/intext.scm 600 */
							unsigned char BgL_arg2212z00_3580;

							BgL_arg2212z00_3580 = (BgL_siza7eza7_3572);
							BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5539,
								BgL_bufferz00_5538, BgL_arg2212z00_3580);
						}
						BBOOL(BGl_printzd2wordzf2siza7ez87zz__intextz00(BgL_ptrz00_5539,
								BgL_bufferz00_5538, BINT(BgL_siza7eza7_1588),
								BINT(BgL_siza7eza7_3572)));
			}}
			BGl_checkzd2bufferz12zc0zz__intextz00(BgL_bufferz00_5538, BgL_ptrz00_5539,
				BgL_siza7eza7_1588);
			{	/* Unsafe/intext.scm 602 */
				obj_t BgL_s1z00_3582;

				obj_t BgL_s2z00_3584;

				long BgL_o2z00_3585;

				BgL_s1z00_3582 = BgL_sz00_1587;
				BgL_s2z00_3584 = CELL_REF(BgL_bufferz00_5538);
				BgL_o2z00_3585 = (long) CINT(CELL_REF(BgL_ptrz00_5539));
				blit_string(BgL_s1z00_3582, ((long) 0), BgL_s2z00_3584, BgL_o2z00_3585,
					BgL_siza7eza7_1588);
			}
			{	/* Unsafe/intext.scm 603 */
				obj_t BgL_auxz00_5540;

				{	/* Unsafe/intext.scm 603 */
					long BgL_za71za7_3587;

					BgL_za71za7_3587 = (long) CINT(CELL_REF(BgL_ptrz00_5539));
					BgL_auxz00_5540 = BINT((BgL_za71za7_3587 + BgL_siza7eza7_1588));
				}
				return CELL_SET(BgL_ptrz00_5539, BgL_auxz00_5540);
			}
		}
	}



/* print-struct */
	bool_t BGl_printzd2structzd2zz__intextz00(obj_t BgL_ptrz00_5553,
		obj_t BgL_bufferz00_5552, obj_t BgL_printzd2epairzd2_5551,
		obj_t BgL_printzd2pairzd2_5550, obj_t BgL_printzd2objectzd2_5549,
		obj_t BgL_printzd2cellzd2_5548, obj_t BgL_printzd2weakptrzd2_5547,
		obj_t BgL_printzd2vectorzd2_5546, obj_t BgL_printzd2hvectorzd2_5545,
		obj_t BgL_printzd2tvectorzd2_5544, obj_t BgL_printzd2customzd2_5543,
		obj_t BgL_refz00_5542, obj_t BgL_tablez00_5541,
		unsigned char BgL_markupz00_1707, obj_t BgL_itemz00_1708)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 739 */
			BGl_checkzd2bufferz12zc0zz__intextz00(BgL_bufferz00_5552, BgL_ptrz00_5553,
				((long) 1));
			{	/* Unsafe/intext.scm 739 */
				obj_t BgL_stringz00_3896;

				long BgL_kz00_3897;

				BgL_stringz00_3896 = CELL_REF(BgL_bufferz00_5552);
				BgL_kz00_3897 = (long) CINT(CELL_REF(BgL_ptrz00_5553));
				STRING_SET(BgL_stringz00_3896, BgL_kz00_3897, BgL_markupz00_1707);
			}
			{	/* Unsafe/intext.scm 739 */
				obj_t BgL_auxz00_5554;

				{	/* Unsafe/intext.scm 739 */
					long BgL_za72za7_3900;

					BgL_za72za7_3900 = (long) CINT(CELL_REF(BgL_ptrz00_5553));
					BgL_auxz00_5554 = BINT((((long) 1) + BgL_za72za7_3900));
				}
				CELL_SET(BgL_ptrz00_5553, BgL_auxz00_5554);
			}
			{	/* Unsafe/intext.scm 740 */
				obj_t BgL_arg2294z00_1710;

				BgL_arg2294z00_1710 = STRUCT_KEY(BgL_itemz00_1708);
				BGl_printzd2itemzd2zz__intextz00(BgL_printzd2epairzd2_5551,
					BgL_printzd2pairzd2_5550, BgL_printzd2objectzd2_5549,
					BgL_printzd2cellzd2_5548, BgL_printzd2weakptrzd2_5547,
					BgL_printzd2vectorzd2_5546, BgL_printzd2hvectorzd2_5545,
					BgL_printzd2tvectorzd2_5544, BgL_printzd2customzd2_5543,
					BgL_ptrz00_5553, BgL_bufferz00_5552, BgL_refz00_5542,
					BgL_tablez00_5541, BgL_arg2294z00_1710);
			}
			{	/* Unsafe/intext.scm 741 */
				int BgL_lenz00_1711;

				BgL_lenz00_1711 = STRUCT_LENGTH(BgL_itemz00_1708);
				{	/* Unsafe/intext.scm 742 */
					long BgL_siza7eza7_3905;

					BgL_siza7eza7_3905 =
						BGl_siza7ezd2ofzd2wordza7zz__intextz00(BINT(BgL_lenz00_1711));
					if ((BgL_siza7eza7_3905 == ((long) 0)))
						{	/* Unsafe/intext.scm 742 */
							unsigned char BgL_arg2212z00_3910;

							BgL_arg2212z00_3910 = (((long) 0));
							BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5553,
								BgL_bufferz00_5552, BgL_arg2212z00_3910);
						}
					else
						{	/* Unsafe/intext.scm 742 */
							{	/* Unsafe/intext.scm 742 */
								unsigned char BgL_arg2212z00_3913;

								BgL_arg2212z00_3913 = (BgL_siza7eza7_3905);
								BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5553,
									BgL_bufferz00_5552, BgL_arg2212z00_3913);
							}
							BBOOL(BGl_printzd2wordzf2siza7ez87zz__intextz00(BgL_ptrz00_5553,
									BgL_bufferz00_5552, BINT(BgL_lenz00_1711),
									BINT(BgL_siza7eza7_3905)));
				}}
				{
					long BgL_iz00_1713;

					BgL_iz00_1713 = ((long) 0);
				BgL_zc3anonymousza32295ze3z83_1714:
					if ((BgL_iz00_1713 < (long) (BgL_lenz00_1711)))
						{	/* Unsafe/intext.scm 743 */
							{	/* Unsafe/intext.scm 743 */
								obj_t BgL_arg2297z00_1716;

								BgL_arg2297z00_1716 =
									STRUCT_REF(BgL_itemz00_1708, (int) (BgL_iz00_1713));
								BGl_printzd2itemzd2zz__intextz00(BgL_printzd2epairzd2_5551,
									BgL_printzd2pairzd2_5550, BgL_printzd2objectzd2_5549,
									BgL_printzd2cellzd2_5548, BgL_printzd2weakptrzd2_5547,
									BgL_printzd2vectorzd2_5546, BgL_printzd2hvectorzd2_5545,
									BgL_printzd2tvectorzd2_5544, BgL_printzd2customzd2_5543,
									BgL_ptrz00_5553, BgL_bufferz00_5552, BgL_refz00_5542,
									BgL_tablez00_5541, BgL_arg2297z00_1716);
							}
							{
								long BgL_iz00_7247;

								BgL_iz00_7247 = (BgL_iz00_1713 + ((long) 1));
								BgL_iz00_1713 = BgL_iz00_7247;
								goto BgL_zc3anonymousza32295ze3z83_1714;
							}
						}
					else
						{	/* Unsafe/intext.scm 743 */
							return ((bool_t) 0);
						}
				}
			}
		}
	}



/* print-epair */
	obj_t BGl_printzd2epairzd2zz__intextz00(obj_t BgL_envz00_5555,
		obj_t BgL_itemz00_5568, obj_t BgL_markz00_5569)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 666 */
			{	/* Unsafe/intext.scm 666 */
				obj_t BgL_refz00_5556;

				obj_t BgL_printzd2customzd2_5557;

				obj_t BgL_printzd2tvectorzd2_5558;

				obj_t BgL_printzd2hvectorzd2_5559;

				obj_t BgL_printzd2vectorzd2_5560;

				obj_t BgL_printzd2weakptrzd2_5561;

				obj_t BgL_printzd2cellzd2_5562;

				obj_t BgL_printzd2objectzd2_5563;

				obj_t BgL_printzd2pairzd2_5564;

				obj_t BgL_bufferz00_5565;

				obj_t BgL_ptrz00_5566;

				obj_t BgL_tablez00_5567;

				BgL_refz00_5556 = PROCEDURE_REF(BgL_envz00_5555, (int) (((long) 0)));
				BgL_printzd2customzd2_5557 =
					PROCEDURE_REF(BgL_envz00_5555, (int) (((long) 1)));
				BgL_printzd2tvectorzd2_5558 =
					PROCEDURE_REF(BgL_envz00_5555, (int) (((long) 2)));
				BgL_printzd2hvectorzd2_5559 =
					PROCEDURE_REF(BgL_envz00_5555, (int) (((long) 3)));
				BgL_printzd2vectorzd2_5560 =
					PROCEDURE_REF(BgL_envz00_5555, (int) (((long) 4)));
				BgL_printzd2weakptrzd2_5561 =
					PROCEDURE_REF(BgL_envz00_5555, (int) (((long) 5)));
				BgL_printzd2cellzd2_5562 =
					PROCEDURE_REF(BgL_envz00_5555, (int) (((long) 6)));
				BgL_printzd2objectzd2_5563 =
					PROCEDURE_REF(BgL_envz00_5555, (int) (((long) 7)));
				BgL_printzd2pairzd2_5564 =
					PROCEDURE_REF(BgL_envz00_5555, (int) (((long) 8)));
				BgL_bufferz00_5565 = PROCEDURE_REF(BgL_envz00_5555, (int) (((long) 9)));
				BgL_ptrz00_5566 = PROCEDURE_REF(BgL_envz00_5555, (int) (((long) 10)));
				BgL_tablez00_5567 = PROCEDURE_REF(BgL_envz00_5555, (int) (((long) 11)));
				{
					obj_t BgL_itemz00_1643;

					obj_t BgL_markz00_1644;

					BgL_itemz00_1643 = BgL_itemz00_5568;
					BgL_markz00_1644 = BgL_markz00_5569;
					BGl_checkzd2bufferz12zc0zz__intextz00(BgL_bufferz00_5565,
						BgL_ptrz00_5566, ((long) 1));
					{	/* Unsafe/intext.scm 666 */
						obj_t BgL_stringz00_3738;

						long BgL_kz00_3739;

						BgL_stringz00_3738 = CELL_REF(BgL_bufferz00_5565);
						BgL_kz00_3739 = (long) CINT(CELL_REF(BgL_ptrz00_5566));
						STRING_SET(BgL_stringz00_3738, BgL_kz00_3739,
							((unsigned char) '^'));
					}
					{	/* Unsafe/intext.scm 666 */
						obj_t BgL_auxz00_5570;

						BgL_auxz00_5570 =
							BINT((((long) 1) + (long) CINT(CELL_REF(BgL_ptrz00_5566))));
						CELL_SET(BgL_ptrz00_5566, BgL_auxz00_5570);
					}
					{	/* Unsafe/intext.scm 667 */
						long BgL_lenz00_1646;

						BgL_lenz00_1646 =
							BGl_markedzd2pairzd2lengthz00zz__intextz00(BgL_tablez00_5567,
							BgL_itemz00_1643);
						{	/* Unsafe/intext.scm 668 */
							long BgL_siza7eza7_3744;

							BgL_siza7eza7_3744 =
								BGl_siza7ezd2ofzd2wordza7zz__intextz00(BINT(BgL_lenz00_1646));
							if ((BgL_siza7eza7_3744 == ((long) 0)))
								{	/* Unsafe/intext.scm 668 */
									BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5566,
										BgL_bufferz00_5565, (((long) 0)));
								}
							else
								{	/* Unsafe/intext.scm 668 */
									BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5566,
										BgL_bufferz00_5565, (BgL_siza7eza7_3744));
									BBOOL(BGl_printzd2wordzf2siza7ez87zz__intextz00
										(BgL_ptrz00_5566, BgL_bufferz00_5565, BINT(BgL_lenz00_1646),
											BINT(BgL_siza7eza7_3744)));
								}
						}
						{
							long BgL_iz00_1648;

							obj_t BgL_pz00_1649;

							BgL_iz00_1648 = ((long) 0);
							BgL_pz00_1649 = BgL_itemz00_1643;
						BgL_zc3anonymousza32252ze3z83_1650:
							if ((BgL_iz00_1648 == (BgL_lenz00_1646 - ((long) 1))))
								{	/* Unsafe/intext.scm 672 */
									if (PAIRP(BgL_pz00_1649))
										{	/* Unsafe/intext.scm 673 */
											BGl_printzd2itemzd2zz__intextz00(BgL_envz00_5555,
												BgL_printzd2pairzd2_5564, BgL_printzd2objectzd2_5563,
												BgL_printzd2cellzd2_5562, BgL_printzd2weakptrzd2_5561,
												BgL_printzd2vectorzd2_5560, BgL_printzd2hvectorzd2_5559,
												BgL_printzd2tvectorzd2_5558, BgL_printzd2customzd2_5557,
												BgL_ptrz00_5566, BgL_bufferz00_5565, BgL_refz00_5556,
												BgL_tablez00_5567, CAR(BgL_pz00_1649));
											if (EXTENDED_PAIRP(BgL_pz00_1649))
												{	/* Unsafe/intext.scm 676 */
													BGl_printzd2itemzd2zz__intextz00(BgL_envz00_5555,
														BgL_printzd2pairzd2_5564,
														BgL_printzd2objectzd2_5563,
														BgL_printzd2cellzd2_5562,
														BgL_printzd2weakptrzd2_5561,
														BgL_printzd2vectorzd2_5560,
														BgL_printzd2hvectorzd2_5559,
														BgL_printzd2tvectorzd2_5558,
														BgL_printzd2customzd2_5557, BgL_ptrz00_5566,
														BgL_bufferz00_5565, BgL_refz00_5556,
														BgL_tablez00_5567, CER(BgL_pz00_1649));
												}
											else
												{	/* Unsafe/intext.scm 676 */
													BGl_printzd2itemzd2zz__intextz00(BgL_envz00_5555,
														BgL_printzd2pairzd2_5564,
														BgL_printzd2objectzd2_5563,
														BgL_printzd2cellzd2_5562,
														BgL_printzd2weakptrzd2_5561,
														BgL_printzd2vectorzd2_5560,
														BgL_printzd2hvectorzd2_5559,
														BgL_printzd2tvectorzd2_5558,
														BgL_printzd2customzd2_5557, BgL_ptrz00_5566,
														BgL_bufferz00_5565, BgL_refz00_5556,
														BgL_tablez00_5567, BUNSPEC);
												}
											return
												BGl_printzd2itemzd2zz__intextz00(BgL_envz00_5555,
												BgL_printzd2pairzd2_5564, BgL_printzd2objectzd2_5563,
												BgL_printzd2cellzd2_5562, BgL_printzd2weakptrzd2_5561,
												BgL_printzd2vectorzd2_5560, BgL_printzd2hvectorzd2_5559,
												BgL_printzd2tvectorzd2_5558, BgL_printzd2customzd2_5557,
												BgL_ptrz00_5566, BgL_bufferz00_5565, BgL_refz00_5556,
												BgL_tablez00_5567, BNIL);
										}
									else
										{	/* Unsafe/intext.scm 673 */
											return
												BGl_printzd2itemzd2zz__intextz00(BgL_envz00_5555,
												BgL_printzd2pairzd2_5564, BgL_printzd2objectzd2_5563,
												BgL_printzd2cellzd2_5562, BgL_printzd2weakptrzd2_5561,
												BgL_printzd2vectorzd2_5560, BgL_printzd2hvectorzd2_5559,
												BgL_printzd2tvectorzd2_5558, BgL_printzd2customzd2_5557,
												BgL_ptrz00_5566, BgL_bufferz00_5565, BgL_refz00_5556,
												BgL_tablez00_5567, BgL_pz00_1649);
										}
								}
							else
								{	/* Unsafe/intext.scm 672 */
									BGl_printzd2itemzd2zz__intextz00(BgL_envz00_5555,
										BgL_printzd2pairzd2_5564, BgL_printzd2objectzd2_5563,
										BgL_printzd2cellzd2_5562, BgL_printzd2weakptrzd2_5561,
										BgL_printzd2vectorzd2_5560, BgL_printzd2hvectorzd2_5559,
										BgL_printzd2tvectorzd2_5558, BgL_printzd2customzd2_5557,
										BgL_ptrz00_5566, BgL_bufferz00_5565, BgL_refz00_5556,
										BgL_tablez00_5567, CAR(BgL_pz00_1649));
									if (EXTENDED_PAIRP(BgL_pz00_1649))
										{	/* Unsafe/intext.scm 683 */
											BGl_printzd2itemzd2zz__intextz00(BgL_envz00_5555,
												BgL_printzd2pairzd2_5564, BgL_printzd2objectzd2_5563,
												BgL_printzd2cellzd2_5562, BgL_printzd2weakptrzd2_5561,
												BgL_printzd2vectorzd2_5560, BgL_printzd2hvectorzd2_5559,
												BgL_printzd2tvectorzd2_5558, BgL_printzd2customzd2_5557,
												BgL_ptrz00_5566, BgL_bufferz00_5565, BgL_refz00_5556,
												BgL_tablez00_5567, CER(BgL_pz00_1649));
										}
									else
										{	/* Unsafe/intext.scm 683 */
											BGl_printzd2itemzd2zz__intextz00(BgL_envz00_5555,
												BgL_printzd2pairzd2_5564, BgL_printzd2objectzd2_5563,
												BgL_printzd2cellzd2_5562, BgL_printzd2weakptrzd2_5561,
												BgL_printzd2vectorzd2_5560, BgL_printzd2hvectorzd2_5559,
												BgL_printzd2tvectorzd2_5558, BgL_printzd2customzd2_5557,
												BgL_ptrz00_5566, BgL_bufferz00_5565, BgL_refz00_5556,
												BgL_tablez00_5567, BUNSPEC);
										}
									{	/* Unsafe/intext.scm 686 */
										obj_t BgL_vcdrz00_1659;

										BgL_vcdrz00_1659 = CDR(BgL_pz00_1649);
										{	/* Unsafe/intext.scm 687 */
											bool_t BgL_testz00_7314;

											if (PAIRP(BgL_vcdrz00_1659))
												{	/* Unsafe/intext.scm 688 */
													obj_t BgL_markz00_1663;

													BgL_markz00_1663 =
														BGl_hashtablezd2getzd2zz__hashz00(BgL_tablez00_5567,
														BgL_vcdrz00_1659);
													{	/* Unsafe/intext.scm 689 */
														bool_t BgL__ortest_1848z00_1664;

														BgL__ortest_1848z00_1664 =
															BGl_2ze3ze3zz__r4_numbers_6_5z00(STRUCT_REF
															(BgL_markz00_1663, (int) (((long) 2))),
															BINT(((long) 0)));
														if (BgL__ortest_1848z00_1664)
															{	/* Unsafe/intext.scm 689 */
																BgL_testz00_7314 = BgL__ortest_1848z00_1664;
															}
														else
															{	/* Unsafe/intext.scm 690 */
																long BgL_auxz00_7323;

																{	/* Unsafe/intext.scm 690 */
																	obj_t BgL_sz00_3776;

																	BgL_sz00_3776 = BgL_markz00_1663;
																	BgL_auxz00_7323 =
																		(long) CINT(STRUCT_REF(BgL_sz00_3776,
																			(int) (((long) 3))));
																}
																BgL_testz00_7314 =
																	(BgL_auxz00_7323 >= ((long) 0));
												}}}
											else
												{	/* Unsafe/intext.scm 687 */
													BgL_testz00_7314 = ((bool_t) 0);
												}
											if (BgL_testz00_7314)
												{	/* Unsafe/intext.scm 687 */
													return
														BGl_printzd2itemzd2zz__intextz00(BgL_envz00_5555,
														BgL_printzd2pairzd2_5564,
														BgL_printzd2objectzd2_5563,
														BgL_printzd2cellzd2_5562,
														BgL_printzd2weakptrzd2_5561,
														BgL_printzd2vectorzd2_5560,
														BgL_printzd2hvectorzd2_5559,
														BgL_printzd2tvectorzd2_5558,
														BgL_printzd2customzd2_5557, BgL_ptrz00_5566,
														BgL_bufferz00_5565, BgL_refz00_5556,
														BgL_tablez00_5567, BgL_vcdrz00_1659);
												}
											else
												{
													obj_t BgL_pz00_7331;

													long BgL_iz00_7329;

													BgL_iz00_7329 = (BgL_iz00_1648 + ((long) 1));
													BgL_pz00_7331 = BgL_vcdrz00_1659;
													BgL_pz00_1649 = BgL_pz00_7331;
													BgL_iz00_1648 = BgL_iz00_7329;
													goto BgL_zc3anonymousza32252ze3z83_1650;
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



/* print-pair */
	obj_t BGl_printzd2pairzd2zz__intextz00(obj_t BgL_envz00_5571,
		obj_t BgL_itemz00_5584, obj_t BgL_markz00_5585)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 696 */
			{	/* Unsafe/intext.scm 696 */
				obj_t BgL_refz00_5572;

				obj_t BgL_printzd2customzd2_5573;

				obj_t BgL_printzd2tvectorzd2_5574;

				obj_t BgL_printzd2hvectorzd2_5575;

				obj_t BgL_printzd2vectorzd2_5576;

				obj_t BgL_printzd2weakptrzd2_5577;

				obj_t BgL_printzd2cellzd2_5578;

				obj_t BgL_printzd2objectzd2_5579;

				obj_t BgL_printzd2epairzd2_5580;

				obj_t BgL_bufferz00_5581;

				obj_t BgL_ptrz00_5582;

				obj_t BgL_tablez00_5583;

				BgL_refz00_5572 = PROCEDURE_REF(BgL_envz00_5571, (int) (((long) 0)));
				BgL_printzd2customzd2_5573 =
					PROCEDURE_REF(BgL_envz00_5571, (int) (((long) 1)));
				BgL_printzd2tvectorzd2_5574 =
					PROCEDURE_REF(BgL_envz00_5571, (int) (((long) 2)));
				BgL_printzd2hvectorzd2_5575 =
					PROCEDURE_REF(BgL_envz00_5571, (int) (((long) 3)));
				BgL_printzd2vectorzd2_5576 =
					PROCEDURE_REF(BgL_envz00_5571, (int) (((long) 4)));
				BgL_printzd2weakptrzd2_5577 =
					PROCEDURE_REF(BgL_envz00_5571, (int) (((long) 5)));
				BgL_printzd2cellzd2_5578 =
					PROCEDURE_REF(BgL_envz00_5571, (int) (((long) 6)));
				BgL_printzd2objectzd2_5579 =
					PROCEDURE_REF(BgL_envz00_5571, (int) (((long) 7)));
				BgL_printzd2epairzd2_5580 =
					PROCEDURE_REF(BgL_envz00_5571, (int) (((long) 8)));
				BgL_bufferz00_5581 = PROCEDURE_REF(BgL_envz00_5571, (int) (((long) 9)));
				BgL_ptrz00_5582 = PROCEDURE_REF(BgL_envz00_5571, (int) (((long) 10)));
				BgL_tablez00_5583 = PROCEDURE_REF(BgL_envz00_5571, (int) (((long) 11)));
				{
					obj_t BgL_itemz00_1669;

					obj_t BgL_markz00_1670;

					BgL_itemz00_1669 = BgL_itemz00_5584;
					BgL_markz00_1670 = BgL_markz00_5585;
					BGl_checkzd2bufferz12zc0zz__intextz00(BgL_bufferz00_5581,
						BgL_ptrz00_5582, ((long) 1));
					{	/* Unsafe/intext.scm 696 */
						obj_t BgL_stringz00_3783;

						long BgL_kz00_3784;

						BgL_stringz00_3783 = CELL_REF(BgL_bufferz00_5581);
						BgL_kz00_3784 = (long) CINT(CELL_REF(BgL_ptrz00_5582));
						STRING_SET(BgL_stringz00_3783, BgL_kz00_3784,
							((unsigned char) '('));
					}
					{	/* Unsafe/intext.scm 696 */
						obj_t BgL_auxz00_5586;

						BgL_auxz00_5586 =
							BINT((((long) 1) + (long) CINT(CELL_REF(BgL_ptrz00_5582))));
						CELL_SET(BgL_ptrz00_5582, BgL_auxz00_5586);
					}
					{	/* Unsafe/intext.scm 697 */
						long BgL_lenz00_1672;

						BgL_lenz00_1672 =
							BGl_markedzd2pairzd2lengthz00zz__intextz00(BgL_tablez00_5583,
							BgL_itemz00_1669);
						{	/* Unsafe/intext.scm 698 */
							long BgL_siza7eza7_3789;

							BgL_siza7eza7_3789 =
								BGl_siza7ezd2ofzd2wordza7zz__intextz00(BINT(BgL_lenz00_1672));
							if ((BgL_siza7eza7_3789 == ((long) 0)))
								{	/* Unsafe/intext.scm 698 */
									BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5582,
										BgL_bufferz00_5581, (((long) 0)));
								}
							else
								{	/* Unsafe/intext.scm 698 */
									BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5582,
										BgL_bufferz00_5581, (BgL_siza7eza7_3789));
									BBOOL(BGl_printzd2wordzf2siza7ez87zz__intextz00
										(BgL_ptrz00_5582, BgL_bufferz00_5581, BINT(BgL_lenz00_1672),
											BINT(BgL_siza7eza7_3789)));
								}
						}
						{
							long BgL_iz00_1674;

							obj_t BgL_pz00_1675;

							BgL_iz00_1674 = ((long) 0);
							BgL_pz00_1675 = BgL_itemz00_1669;
						BgL_zc3anonymousza32270ze3z83_1676:
							if ((BgL_iz00_1674 == (BgL_lenz00_1672 - ((long) 1))))
								{	/* Unsafe/intext.scm 702 */
									if (PAIRP(BgL_pz00_1675))
										{	/* Unsafe/intext.scm 703 */
											BGl_printzd2itemzd2zz__intextz00
												(BgL_printzd2epairzd2_5580, BgL_envz00_5571,
												BgL_printzd2objectzd2_5579, BgL_printzd2cellzd2_5578,
												BgL_printzd2weakptrzd2_5577, BgL_printzd2vectorzd2_5576,
												BgL_printzd2hvectorzd2_5575,
												BgL_printzd2tvectorzd2_5574, BgL_printzd2customzd2_5573,
												BgL_ptrz00_5582, BgL_bufferz00_5581, BgL_refz00_5572,
												BgL_tablez00_5583, CAR(BgL_pz00_1675));
											return
												BGl_printzd2itemzd2zz__intextz00
												(BgL_printzd2epairzd2_5580, BgL_envz00_5571,
												BgL_printzd2objectzd2_5579, BgL_printzd2cellzd2_5578,
												BgL_printzd2weakptrzd2_5577, BgL_printzd2vectorzd2_5576,
												BgL_printzd2hvectorzd2_5575,
												BgL_printzd2tvectorzd2_5574, BgL_printzd2customzd2_5573,
												BgL_ptrz00_5582, BgL_bufferz00_5581, BgL_refz00_5572,
												BgL_tablez00_5583, BNIL);
										}
									else
										{	/* Unsafe/intext.scm 703 */
											return
												BGl_printzd2itemzd2zz__intextz00
												(BgL_printzd2epairzd2_5580, BgL_envz00_5571,
												BgL_printzd2objectzd2_5579, BgL_printzd2cellzd2_5578,
												BgL_printzd2weakptrzd2_5577, BgL_printzd2vectorzd2_5576,
												BgL_printzd2hvectorzd2_5575,
												BgL_printzd2tvectorzd2_5574, BgL_printzd2customzd2_5573,
												BgL_ptrz00_5582, BgL_bufferz00_5581, BgL_refz00_5572,
												BgL_tablez00_5583, BgL_pz00_1675);
										}
								}
							else
								{	/* Unsafe/intext.scm 702 */
									BGl_printzd2itemzd2zz__intextz00(BgL_printzd2epairzd2_5580,
										BgL_envz00_5571, BgL_printzd2objectzd2_5579,
										BgL_printzd2cellzd2_5578, BgL_printzd2weakptrzd2_5577,
										BgL_printzd2vectorzd2_5576, BgL_printzd2hvectorzd2_5575,
										BgL_printzd2tvectorzd2_5574, BgL_printzd2customzd2_5573,
										BgL_ptrz00_5582, BgL_bufferz00_5581, BgL_refz00_5572,
										BgL_tablez00_5583, CAR(BgL_pz00_1675));
									{	/* Unsafe/intext.scm 710 */
										obj_t BgL_vcdrz00_1681;

										BgL_vcdrz00_1681 = CDR(BgL_pz00_1675);
										{	/* Unsafe/intext.scm 711 */
											bool_t BgL_testz00_7387;

											if (PAIRP(BgL_vcdrz00_1681))
												{	/* Unsafe/intext.scm 712 */
													obj_t BgL_markz00_1685;

													BgL_markz00_1685 =
														BGl_hashtablezd2getzd2zz__hashz00(BgL_tablez00_5583,
														BgL_vcdrz00_1681);
													{	/* Unsafe/intext.scm 713 */
														bool_t BgL__ortest_1849z00_1686;

														{	/* Unsafe/intext.scm 713 */
															long BgL_auxz00_7391;

															{	/* Unsafe/intext.scm 713 */
																obj_t BgL_sz00_3811;

																BgL_sz00_3811 = BgL_markz00_1685;
																BgL_auxz00_7391 =
																	(long) CINT(STRUCT_REF(BgL_sz00_3811,
																		(int) (((long) 2))));
															}
															BgL__ortest_1849z00_1686 =
																(BgL_auxz00_7391 > ((long) 0));
														}
														if (BgL__ortest_1849z00_1686)
															{	/* Unsafe/intext.scm 713 */
																BgL_testz00_7387 = BgL__ortest_1849z00_1686;
															}
														else
															{	/* Unsafe/intext.scm 714 */
																long BgL_auxz00_7397;

																{	/* Unsafe/intext.scm 714 */
																	obj_t BgL_sz00_3819;

																	BgL_sz00_3819 = BgL_markz00_1685;
																	BgL_auxz00_7397 =
																		(long) CINT(STRUCT_REF(BgL_sz00_3819,
																			(int) (((long) 3))));
																}
																BgL_testz00_7387 =
																	(BgL_auxz00_7397 >= ((long) 0));
												}}}
											else
												{	/* Unsafe/intext.scm 711 */
													BgL_testz00_7387 = ((bool_t) 0);
												}
											if (BgL_testz00_7387)
												{	/* Unsafe/intext.scm 711 */
													return
														BGl_printzd2itemzd2zz__intextz00
														(BgL_printzd2epairzd2_5580, BgL_envz00_5571,
														BgL_printzd2objectzd2_5579,
														BgL_printzd2cellzd2_5578,
														BgL_printzd2weakptrzd2_5577,
														BgL_printzd2vectorzd2_5576,
														BgL_printzd2hvectorzd2_5575,
														BgL_printzd2tvectorzd2_5574,
														BgL_printzd2customzd2_5573, BgL_ptrz00_5582,
														BgL_bufferz00_5581, BgL_refz00_5572,
														BgL_tablez00_5583, BgL_vcdrz00_1681);
												}
											else
												{
													obj_t BgL_pz00_7405;

													long BgL_iz00_7403;

													BgL_iz00_7403 = (BgL_iz00_1674 + ((long) 1));
													BgL_pz00_7405 = BgL_vcdrz00_1681;
													BgL_pz00_1675 = BgL_pz00_7405;
													BgL_iz00_1674 = BgL_iz00_7403;
													goto BgL_zc3anonymousza32270ze3z83_1676;
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



/* <anonymous:2345> */
	obj_t BGl_zc3anonymousza32345ze3z83zz__intextz00(obj_t BgL_envz00_5587,
		obj_t BgL_itemz00_5590, obj_t BgL_markz00_5591)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 819 */
			{	/* Unsafe/intext.scm 819 */
				obj_t BgL_bufferz00_5588;

				obj_t BgL_ptrz00_5589;

				BgL_bufferz00_5588 = PROCEDURE_REF(BgL_envz00_5587, (int) (((long) 0)));
				BgL_ptrz00_5589 = PROCEDURE_REF(BgL_envz00_5587, (int) (((long) 1)));
				{
					obj_t BgL_itemz00_1810;

					obj_t BgL_markz00_1811;

					BgL_itemz00_1810 = BgL_itemz00_5590;
					BgL_markz00_1811 = BgL_markz00_5591;
					BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5589,
						BgL_bufferz00_5588, ((unsigned char) '"'));
					return BGl_z12printzd2charszc0zz__intextz00(BgL_ptrz00_5589,
						BgL_bufferz00_5588, BgL_itemz00_1810,
						STRING_LENGTH(BgL_itemz00_1810));
				}
			}
		}
	}



/* print-object */
	obj_t BGl_printzd2objectzd2zz__intextz00(obj_t BgL_envz00_5592,
		obj_t BgL_itemz00_5605, obj_t BgL_markz00_5606)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 724 */
			{	/* Unsafe/intext.scm 721 */
				obj_t BgL_tablez00_5593;

				obj_t BgL_refz00_5594;

				obj_t BgL_printzd2customzd2_5595;

				obj_t BgL_printzd2tvectorzd2_5596;

				obj_t BgL_printzd2hvectorzd2_5597;

				obj_t BgL_printzd2vectorzd2_5598;

				obj_t BgL_printzd2weakptrzd2_5599;

				obj_t BgL_printzd2cellzd2_5600;

				obj_t BgL_printzd2pairzd2_5601;

				obj_t BgL_printzd2epairzd2_5602;

				obj_t BgL_bufferz00_5603;

				obj_t BgL_ptrz00_5604;

				BgL_tablez00_5593 = PROCEDURE_REF(BgL_envz00_5592, (int) (((long) 0)));
				BgL_refz00_5594 = PROCEDURE_REF(BgL_envz00_5592, (int) (((long) 1)));
				BgL_printzd2customzd2_5595 =
					PROCEDURE_REF(BgL_envz00_5592, (int) (((long) 2)));
				BgL_printzd2tvectorzd2_5596 =
					PROCEDURE_REF(BgL_envz00_5592, (int) (((long) 3)));
				BgL_printzd2hvectorzd2_5597 =
					PROCEDURE_REF(BgL_envz00_5592, (int) (((long) 4)));
				BgL_printzd2vectorzd2_5598 =
					PROCEDURE_REF(BgL_envz00_5592, (int) (((long) 5)));
				BgL_printzd2weakptrzd2_5599 =
					PROCEDURE_REF(BgL_envz00_5592, (int) (((long) 6)));
				BgL_printzd2cellzd2_5600 =
					PROCEDURE_REF(BgL_envz00_5592, (int) (((long) 7)));
				BgL_printzd2pairzd2_5601 =
					PROCEDURE_REF(BgL_envz00_5592, (int) (((long) 8)));
				BgL_printzd2epairzd2_5602 =
					PROCEDURE_REF(BgL_envz00_5592, (int) (((long) 9)));
				BgL_bufferz00_5603 =
					PROCEDURE_REF(BgL_envz00_5592, (int) (((long) 10)));
				BgL_ptrz00_5604 = PROCEDURE_REF(BgL_envz00_5592, (int) (((long) 11)));
				{
					obj_t BgL_itemz00_1691;

					obj_t BgL_markz00_1692;

					BgL_itemz00_1691 = BgL_itemz00_5605;
					BgL_markz00_1692 = BgL_markz00_5606;
					{	/* Unsafe/intext.scm 721 */
						obj_t BgL_vz00_3825;

						BgL_vz00_3825 = STRUCT_REF(BgL_markz00_1692, (int) (((long) 1)));
						{	/* Unsafe/intext.scm 721 */
							bool_t BgL_testz00_7439;

							if (STRUCTP(BgL_vz00_3825))
								{	/* Unsafe/intext.scm 721 */
									BgL_testz00_7439 =
										(STRUCT_KEY(BgL_vz00_3825) ==
										BGl_symbol3166z00zz__intextz00);
								}
							else
								{	/* Unsafe/intext.scm 721 */
									BgL_testz00_7439 = ((bool_t) 0);
								}
							if (BgL_testz00_7439)
								{	/* Unsafe/intext.scm 721 */
									obj_t BgL_oz00_3838;

									BgL_oz00_3838 = BgL_vz00_3825;
									BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5604,
										BgL_bufferz00_5603, ((unsigned char) 'O'));
									BGl_printzd2itemzd2zz__intextz00(BgL_printzd2epairzd2_5602,
										BgL_printzd2pairzd2_5601, BgL_envz00_5592,
										BgL_printzd2cellzd2_5600, BgL_printzd2weakptrzd2_5599,
										BgL_printzd2vectorzd2_5598, BgL_printzd2hvectorzd2_5597,
										BgL_printzd2tvectorzd2_5596, BgL_printzd2customzd2_5595,
										BgL_ptrz00_5604, BgL_bufferz00_5603, BgL_refz00_5594,
										BgL_tablez00_5593, STRUCT_REF(BgL_oz00_3838,
											(int) (((long) 0))));
									{	/* Unsafe/intext.scm 721 */
										long BgL_arg2286z00_3840;

										{	/* Unsafe/intext.scm 721 */
											obj_t BgL_arg2289z00_3841;

											{	/* Unsafe/intext.scm 721 */
												BgL_objectz00_bglt BgL_objectz00_3845;

												BgL_objectz00_3845 =
													(BgL_objectz00_bglt) (BgL_itemz00_1691);
												{	/* Unsafe/intext.scm 721 */
													long BgL_arg3003z00_3846;

													{	/* Unsafe/intext.scm 721 */
														long BgL_arg3004z00_3847;

														BgL_arg3004z00_3847 =
															BGL_OBJECT_CLASS_NUM(BgL_objectz00_3845);
														BgL_arg3003z00_3846 =
															(BgL_arg3004z00_3847 - OBJECT_TYPE);
													}
													BgL_arg2289z00_3841 =
														VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
														(int) (BgL_arg3003z00_3846));
											}}
											BgL_arg2286z00_3840 =
												BGl_classzd2hashzd2zz__objectz00(BgL_arg2289z00_3841);
										}
										return
											BGl_printzd2itemzd2zz__intextz00
											(BgL_printzd2epairzd2_5602, BgL_printzd2pairzd2_5601,
											BgL_envz00_5592, BgL_printzd2cellzd2_5600,
											BgL_printzd2weakptrzd2_5599, BgL_printzd2vectorzd2_5598,
											BgL_printzd2hvectorzd2_5597, BgL_printzd2tvectorzd2_5596,
											BgL_printzd2customzd2_5595, BgL_ptrz00_5604,
											BgL_bufferz00_5603, BgL_refz00_5594, BgL_tablez00_5593,
											BINT(BgL_arg2286z00_3840));
									}
								}
							else
								{	/* Unsafe/intext.scm 721 */
									BGl_printzd2structzd2zz__intextz00(BgL_ptrz00_5604,
										BgL_bufferz00_5603, BgL_printzd2epairzd2_5602,
										BgL_printzd2pairzd2_5601, BgL_envz00_5592,
										BgL_printzd2cellzd2_5600, BgL_printzd2weakptrzd2_5599,
										BgL_printzd2vectorzd2_5598, BgL_printzd2hvectorzd2_5597,
										BgL_printzd2tvectorzd2_5596, BgL_printzd2customzd2_5595,
										BgL_refz00_5594, BgL_tablez00_5593, ((unsigned char) '|'),
										BgL_vz00_3825);
									{	/* Unsafe/intext.scm 721 */
										long BgL_arg2291z00_3855;

										{	/* Unsafe/intext.scm 721 */
											obj_t BgL_arg2292z00_3856;

											{	/* Unsafe/intext.scm 721 */
												BgL_objectz00_bglt BgL_objectz00_3857;

												BgL_objectz00_3857 =
													(BgL_objectz00_bglt) (BgL_itemz00_1691);
												{	/* Unsafe/intext.scm 721 */
													long BgL_arg3003z00_3858;

													{	/* Unsafe/intext.scm 721 */
														long BgL_arg3004z00_3859;

														BgL_arg3004z00_3859 =
															BGL_OBJECT_CLASS_NUM(BgL_objectz00_3857);
														BgL_arg3003z00_3858 =
															(BgL_arg3004z00_3859 - OBJECT_TYPE);
													}
													BgL_arg2292z00_3856 =
														VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
														(int) (BgL_arg3003z00_3858));
											}}
											BgL_arg2291z00_3855 =
												BGl_classzd2hashzd2zz__objectz00(BgL_arg2292z00_3856);
										}
										return
											BGl_printzd2itemzd2zz__intextz00
											(BgL_printzd2epairzd2_5602, BgL_printzd2pairzd2_5601,
											BgL_envz00_5592, BgL_printzd2cellzd2_5600,
											BgL_printzd2weakptrzd2_5599, BgL_printzd2vectorzd2_5598,
											BgL_printzd2hvectorzd2_5597, BgL_printzd2tvectorzd2_5596,
											BgL_printzd2customzd2_5595, BgL_ptrz00_5604,
											BgL_bufferz00_5603, BgL_refz00_5594, BgL_tablez00_5593,
											BINT(BgL_arg2291z00_3855));
									}
								}
						}
					}
				}
			}
		}
	}



/* <anonymous:2349> */
	obj_t BGl_zc3anonymousza32349ze3z83zz__intextz00(obj_t BgL_envz00_5607,
		obj_t BgL_itemz00_5621, obj_t BgL_markz00_5622)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 823 */
			{	/* Unsafe/intext.scm 823 */
				obj_t BgL_tablez00_5608;

				obj_t BgL_refz00_5609;

				obj_t BgL_printzd2customzd2_5610;

				obj_t BgL_printzd2tvectorzd2_5611;

				obj_t BgL_printzd2hvectorzd2_5612;

				obj_t BgL_printzd2vectorzd2_5613;

				obj_t BgL_printzd2weakptrzd2_5614;

				obj_t BgL_printzd2cellzd2_5615;

				obj_t BgL_printzd2objectzd2_5616;

				obj_t BgL_printzd2pairzd2_5617;

				obj_t BgL_printzd2epairzd2_5618;

				obj_t BgL_bufferz00_5619;

				obj_t BgL_ptrz00_5620;

				BgL_tablez00_5608 = PROCEDURE_REF(BgL_envz00_5607, (int) (((long) 0)));
				BgL_refz00_5609 = PROCEDURE_REF(BgL_envz00_5607, (int) (((long) 1)));
				BgL_printzd2customzd2_5610 =
					PROCEDURE_REF(BgL_envz00_5607, (int) (((long) 2)));
				BgL_printzd2tvectorzd2_5611 =
					PROCEDURE_REF(BgL_envz00_5607, (int) (((long) 3)));
				BgL_printzd2hvectorzd2_5612 =
					PROCEDURE_REF(BgL_envz00_5607, (int) (((long) 4)));
				BgL_printzd2vectorzd2_5613 =
					PROCEDURE_REF(BgL_envz00_5607, (int) (((long) 5)));
				BgL_printzd2weakptrzd2_5614 =
					PROCEDURE_REF(BgL_envz00_5607, (int) (((long) 6)));
				BgL_printzd2cellzd2_5615 =
					PROCEDURE_REF(BgL_envz00_5607, (int) (((long) 7)));
				BgL_printzd2objectzd2_5616 =
					PROCEDURE_REF(BgL_envz00_5607, (int) (((long) 8)));
				BgL_printzd2pairzd2_5617 =
					PROCEDURE_REF(BgL_envz00_5607, (int) (((long) 9)));
				BgL_printzd2epairzd2_5618 =
					PROCEDURE_REF(BgL_envz00_5607, (int) (((long) 10)));
				BgL_bufferz00_5619 =
					PROCEDURE_REF(BgL_envz00_5607, (int) (((long) 11)));
				BgL_ptrz00_5620 = PROCEDURE_REF(BgL_envz00_5607, (int) (((long) 12)));
				{
					obj_t BgL_itemz00_1817;

					obj_t BgL_markz00_1818;

					{	/* Unsafe/intext.scm 823 */
						bool_t BgL_auxz00_7491;

						BgL_itemz00_1817 = BgL_itemz00_5621;
						BgL_markz00_1818 = BgL_markz00_5622;
						BgL_auxz00_7491 =
							BGl_printzd2structzd2zz__intextz00(BgL_ptrz00_5620,
							BgL_bufferz00_5619, BgL_printzd2epairzd2_5618,
							BgL_printzd2pairzd2_5617, BgL_printzd2objectzd2_5616,
							BgL_printzd2cellzd2_5615, BgL_printzd2weakptrzd2_5614,
							BgL_printzd2vectorzd2_5613, BgL_printzd2hvectorzd2_5612,
							BgL_printzd2tvectorzd2_5611, BgL_printzd2customzd2_5610,
							BgL_refz00_5609, BgL_tablez00_5608, ((unsigned char) '{'),
							BgL_itemz00_1817);
						return BBOOL(BgL_auxz00_7491);
					}
				}
			}
		}
	}



/* <anonymous:2365> */
	obj_t BGl_zc3anonymousza32365ze3z83zz__intextz00(obj_t BgL_envz00_5623,
		obj_t BgL_itemz00_5626, obj_t BgL_markz00_5627)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 848 */
			{	/* Unsafe/intext.scm 849 */
				obj_t BgL_bufferz00_5624;

				obj_t BgL_ptrz00_5625;

				BgL_bufferz00_5624 = PROCEDURE_REF(BgL_envz00_5623, (int) (((long) 0)));
				BgL_ptrz00_5625 = PROCEDURE_REF(BgL_envz00_5623, (int) (((long) 1)));
				{
					obj_t BgL_itemz00_1837;

					obj_t BgL_markz00_1838;

					BgL_itemz00_1837 = BgL_itemz00_5626;
					BgL_markz00_1838 = BgL_markz00_5627;
					{	/* Unsafe/intext.scm 849 */
						obj_t BgL_arg2366z00_4207;

						BgL_arg2366z00_4207 =
							STRUCT_REF(BgL_markz00_1838, (int) (((long) 1)));
						BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5625,
							BgL_bufferz00_5624, ((unsigned char) 'U'));
						return BGl_z12printzd2charszc0zz__intextz00(BgL_ptrz00_5625,
							BgL_bufferz00_5624, BgL_arg2366z00_4207,
							STRING_LENGTH(BgL_arg2366z00_4207));
					}
				}
			}
		}
	}



/* print-cell */
	obj_t BGl_printzd2cellzd2zz__intextz00(obj_t BgL_envz00_5628,
		obj_t BgL_itemz00_5641, obj_t BgL_markz00_5642)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 747 */
			{	/* Unsafe/intext.scm 747 */
				obj_t BgL_tablez00_5629;

				obj_t BgL_refz00_5630;

				obj_t BgL_printzd2customzd2_5631;

				obj_t BgL_printzd2tvectorzd2_5632;

				obj_t BgL_printzd2hvectorzd2_5633;

				obj_t BgL_printzd2vectorzd2_5634;

				obj_t BgL_printzd2weakptrzd2_5635;

				obj_t BgL_printzd2objectzd2_5636;

				obj_t BgL_printzd2pairzd2_5637;

				obj_t BgL_printzd2epairzd2_5638;

				obj_t BgL_bufferz00_5639;

				obj_t BgL_ptrz00_5640;

				BgL_tablez00_5629 = PROCEDURE_REF(BgL_envz00_5628, (int) (((long) 0)));
				BgL_refz00_5630 = PROCEDURE_REF(BgL_envz00_5628, (int) (((long) 1)));
				BgL_printzd2customzd2_5631 =
					PROCEDURE_REF(BgL_envz00_5628, (int) (((long) 2)));
				BgL_printzd2tvectorzd2_5632 =
					PROCEDURE_REF(BgL_envz00_5628, (int) (((long) 3)));
				BgL_printzd2hvectorzd2_5633 =
					PROCEDURE_REF(BgL_envz00_5628, (int) (((long) 4)));
				BgL_printzd2vectorzd2_5634 =
					PROCEDURE_REF(BgL_envz00_5628, (int) (((long) 5)));
				BgL_printzd2weakptrzd2_5635 =
					PROCEDURE_REF(BgL_envz00_5628, (int) (((long) 6)));
				BgL_printzd2objectzd2_5636 =
					PROCEDURE_REF(BgL_envz00_5628, (int) (((long) 7)));
				BgL_printzd2pairzd2_5637 =
					PROCEDURE_REF(BgL_envz00_5628, (int) (((long) 8)));
				BgL_printzd2epairzd2_5638 =
					PROCEDURE_REF(BgL_envz00_5628, (int) (((long) 9)));
				BgL_bufferz00_5639 =
					PROCEDURE_REF(BgL_envz00_5628, (int) (((long) 10)));
				BgL_ptrz00_5640 = PROCEDURE_REF(BgL_envz00_5628, (int) (((long) 11)));
				{
					obj_t BgL_itemz00_1719;

					obj_t BgL_markz00_1720;

					BgL_itemz00_1719 = BgL_itemz00_5641;
					BgL_markz00_1720 = BgL_markz00_5642;
					BGl_checkzd2bufferz12zc0zz__intextz00(BgL_bufferz00_5639,
						BgL_ptrz00_5640, ((long) 1));
					{	/* Unsafe/intext.scm 747 */
						obj_t BgL_stringz00_3923;

						long BgL_kz00_3924;

						BgL_stringz00_3923 = CELL_REF(BgL_bufferz00_5639);
						BgL_kz00_3924 = (long) CINT(CELL_REF(BgL_ptrz00_5640));
						STRING_SET(BgL_stringz00_3923, BgL_kz00_3924,
							((unsigned char) '!'));
					}
					{	/* Unsafe/intext.scm 747 */
						obj_t BgL_auxz00_5643;

						BgL_auxz00_5643 =
							BINT((((long) 1) + (long) CINT(CELL_REF(BgL_ptrz00_5640))));
						CELL_SET(BgL_ptrz00_5640, BgL_auxz00_5643);
					}
					return
						BGl_printzd2itemzd2zz__intextz00(BgL_printzd2epairzd2_5638,
						BgL_printzd2pairzd2_5637, BgL_printzd2objectzd2_5636,
						BgL_envz00_5628, BgL_printzd2weakptrzd2_5635,
						BgL_printzd2vectorzd2_5634, BgL_printzd2hvectorzd2_5633,
						BgL_printzd2tvectorzd2_5632, BgL_printzd2customzd2_5631,
						BgL_ptrz00_5640, BgL_bufferz00_5639, BgL_refz00_5630,
						BgL_tablez00_5629, CELL_REF(BgL_itemz00_1719));
				}
			}
		}
	}



/* print-weakptr */
	obj_t BGl_printzd2weakptrzd2zz__intextz00(obj_t BgL_envz00_5644,
		obj_t BgL_oz00_5657, obj_t BgL_markz00_5658)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 752 */
			{	/* Unsafe/intext.scm 752 */
				obj_t BgL_tablez00_5645;

				obj_t BgL_refz00_5646;

				obj_t BgL_printzd2customzd2_5647;

				obj_t BgL_printzd2tvectorzd2_5648;

				obj_t BgL_printzd2hvectorzd2_5649;

				obj_t BgL_printzd2vectorzd2_5650;

				obj_t BgL_printzd2cellzd2_5651;

				obj_t BgL_printzd2objectzd2_5652;

				obj_t BgL_printzd2pairzd2_5653;

				obj_t BgL_printzd2epairzd2_5654;

				obj_t BgL_bufferz00_5655;

				obj_t BgL_ptrz00_5656;

				BgL_tablez00_5645 = PROCEDURE_REF(BgL_envz00_5644, (int) (((long) 0)));
				BgL_refz00_5646 = PROCEDURE_REF(BgL_envz00_5644, (int) (((long) 1)));
				BgL_printzd2customzd2_5647 =
					PROCEDURE_REF(BgL_envz00_5644, (int) (((long) 2)));
				BgL_printzd2tvectorzd2_5648 =
					PROCEDURE_REF(BgL_envz00_5644, (int) (((long) 3)));
				BgL_printzd2hvectorzd2_5649 =
					PROCEDURE_REF(BgL_envz00_5644, (int) (((long) 4)));
				BgL_printzd2vectorzd2_5650 =
					PROCEDURE_REF(BgL_envz00_5644, (int) (((long) 5)));
				BgL_printzd2cellzd2_5651 =
					PROCEDURE_REF(BgL_envz00_5644, (int) (((long) 6)));
				BgL_printzd2objectzd2_5652 =
					PROCEDURE_REF(BgL_envz00_5644, (int) (((long) 7)));
				BgL_printzd2pairzd2_5653 =
					PROCEDURE_REF(BgL_envz00_5644, (int) (((long) 8)));
				BgL_printzd2epairzd2_5654 =
					PROCEDURE_REF(BgL_envz00_5644, (int) (((long) 9)));
				BgL_bufferz00_5655 =
					PROCEDURE_REF(BgL_envz00_5644, (int) (((long) 10)));
				BgL_ptrz00_5656 = PROCEDURE_REF(BgL_envz00_5644, (int) (((long) 11)));
				{
					obj_t BgL_oz00_1723;

					obj_t BgL_markz00_1724;

					BgL_oz00_1723 = BgL_oz00_5657;
					BgL_markz00_1724 = BgL_markz00_5658;
					BGl_checkzd2bufferz12zc0zz__intextz00(BgL_bufferz00_5655,
						BgL_ptrz00_5656, ((long) 1));
					{	/* Unsafe/intext.scm 752 */
						obj_t BgL_stringz00_3930;

						long BgL_kz00_3931;

						BgL_stringz00_3930 = CELL_REF(BgL_bufferz00_5655);
						BgL_kz00_3931 = (long) CINT(CELL_REF(BgL_ptrz00_5656));
						STRING_SET(BgL_stringz00_3930, BgL_kz00_3931,
							((unsigned char) 'w'));
					}
					{	/* Unsafe/intext.scm 752 */
						obj_t BgL_auxz00_5659;

						BgL_auxz00_5659 =
							BINT((((long) 1) + (long) CINT(CELL_REF(BgL_ptrz00_5656))));
						CELL_SET(BgL_ptrz00_5656, BgL_auxz00_5659);
					}
					return
						BGl_printzd2itemzd2zz__intextz00(BgL_printzd2epairzd2_5654,
						BgL_printzd2pairzd2_5653, BgL_printzd2objectzd2_5652,
						BgL_printzd2cellzd2_5651, BgL_envz00_5644,
						BgL_printzd2vectorzd2_5650, BgL_printzd2hvectorzd2_5649,
						BgL_printzd2tvectorzd2_5648, BgL_printzd2customzd2_5647,
						BgL_ptrz00_5656, BgL_bufferz00_5655, BgL_refz00_5646,
						BgL_tablez00_5645, weakptr_data(BgL_oz00_1723));
				}
			}
		}
	}



/* print-vector */
	obj_t BGl_printzd2vectorzd2zz__intextz00(obj_t BgL_envz00_5660,
		obj_t BgL_itemz00_5673, obj_t BgL_markz00_5674)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 765 */
			{	/* Unsafe/intext.scm 757 */
				obj_t BgL_tablez00_5661;

				obj_t BgL_refz00_5662;

				obj_t BgL_printzd2customzd2_5663;

				obj_t BgL_printzd2tvectorzd2_5664;

				obj_t BgL_printzd2hvectorzd2_5665;

				obj_t BgL_printzd2weakptrzd2_5666;

				obj_t BgL_printzd2cellzd2_5667;

				obj_t BgL_printzd2objectzd2_5668;

				obj_t BgL_printzd2pairzd2_5669;

				obj_t BgL_printzd2epairzd2_5670;

				obj_t BgL_bufferz00_5671;

				obj_t BgL_ptrz00_5672;

				BgL_tablez00_5661 = PROCEDURE_REF(BgL_envz00_5660, (int) (((long) 0)));
				BgL_refz00_5662 = PROCEDURE_REF(BgL_envz00_5660, (int) (((long) 1)));
				BgL_printzd2customzd2_5663 =
					PROCEDURE_REF(BgL_envz00_5660, (int) (((long) 2)));
				BgL_printzd2tvectorzd2_5664 =
					PROCEDURE_REF(BgL_envz00_5660, (int) (((long) 3)));
				BgL_printzd2hvectorzd2_5665 =
					PROCEDURE_REF(BgL_envz00_5660, (int) (((long) 4)));
				BgL_printzd2weakptrzd2_5666 =
					PROCEDURE_REF(BgL_envz00_5660, (int) (((long) 5)));
				BgL_printzd2cellzd2_5667 =
					PROCEDURE_REF(BgL_envz00_5660, (int) (((long) 6)));
				BgL_printzd2objectzd2_5668 =
					PROCEDURE_REF(BgL_envz00_5660, (int) (((long) 7)));
				BgL_printzd2pairzd2_5669 =
					PROCEDURE_REF(BgL_envz00_5660, (int) (((long) 8)));
				BgL_printzd2epairzd2_5670 =
					PROCEDURE_REF(BgL_envz00_5660, (int) (((long) 9)));
				BgL_bufferz00_5671 =
					PROCEDURE_REF(BgL_envz00_5660, (int) (((long) 10)));
				BgL_ptrz00_5672 = PROCEDURE_REF(BgL_envz00_5660, (int) (((long) 11)));
				{
					obj_t BgL_itemz00_1727;

					obj_t BgL_markz00_1728;

					{	/* Unsafe/intext.scm 757 */
						bool_t BgL_auxz00_7591;

						BgL_itemz00_1727 = BgL_itemz00_5673;
						BgL_markz00_1728 = BgL_markz00_5674;
						{	/* Unsafe/intext.scm 757 */
							int BgL_tagz00_1730;

							int BgL_lenz00_1731;

							BgL_tagz00_1730 = VECTOR_TAG(BgL_itemz00_1727);
							BgL_lenz00_1731 = VECTOR_LENGTH(BgL_itemz00_1727);
							if (((long) (BgL_tagz00_1730) > ((long) 0)))
								{	/* Unsafe/intext.scm 759 */
									BGl_checkzd2bufferz12zc0zz__intextz00(BgL_bufferz00_5671,
										BgL_ptrz00_5672, ((long) 1));
									{	/* Unsafe/intext.scm 761 */
										obj_t BgL_stringz00_3941;

										long BgL_kz00_3942;

										BgL_stringz00_3941 = CELL_REF(BgL_bufferz00_5671);
										BgL_kz00_3942 = (long) CINT(CELL_REF(BgL_ptrz00_5672));
										STRING_SET(BgL_stringz00_3941, BgL_kz00_3942,
											((unsigned char) 't'));
									}
									{	/* Unsafe/intext.scm 761 */
										obj_t BgL_auxz00_5675;

										BgL_auxz00_5675 =
											BINT(
											(((long) 1) + (long) CINT(CELL_REF(BgL_ptrz00_5672))));
										CELL_SET(BgL_ptrz00_5672, BgL_auxz00_5675);
									}
									{	/* Unsafe/intext.scm 762 */
										long BgL_iz00_3946;

										BgL_iz00_3946 = (long) (BgL_tagz00_1730);
										if ((BgL_iz00_3946 < ((long) 0)))
											{	/* Unsafe/intext.scm 762 */
												BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5672,
													BgL_bufferz00_5671, ((unsigned char) '-'));
												BGl_printzd2wordzd2zz__intextz00(BgL_ptrz00_5672,
													BgL_bufferz00_5671, NEG(BgL_iz00_3946));
											}
										else
											{	/* Unsafe/intext.scm 762 */
												BGl_printzd2wordzd2zz__intextz00(BgL_ptrz00_5672,
													BgL_bufferz00_5671, BgL_iz00_3946);
											}
									}
								}
							else
								{	/* Unsafe/intext.scm 759 */
									BGl_checkzd2bufferz12zc0zz__intextz00(BgL_bufferz00_5671,
										BgL_ptrz00_5672, ((long) 1));
									{	/* Unsafe/intext.scm 763 */
										obj_t BgL_stringz00_3953;

										long BgL_kz00_3954;

										BgL_stringz00_3953 = CELL_REF(BgL_bufferz00_5671);
										BgL_kz00_3954 = (long) CINT(CELL_REF(BgL_ptrz00_5672));
										STRING_SET(BgL_stringz00_3953, BgL_kz00_3954,
											((unsigned char) '['));
									}
									{	/* Unsafe/intext.scm 763 */
										obj_t BgL_auxz00_5676;

										BgL_auxz00_5676 =
											BINT(
											(((long) 1) + (long) CINT(CELL_REF(BgL_ptrz00_5672))));
										CELL_SET(BgL_ptrz00_5672, BgL_auxz00_5676);
								}}
							{	/* Unsafe/intext.scm 764 */
								long BgL_siza7eza7_3959;

								BgL_siza7eza7_3959 =
									BGl_siza7ezd2ofzd2wordza7zz__intextz00(BINT(BgL_lenz00_1731));
								if ((BgL_siza7eza7_3959 == ((long) 0)))
									{	/* Unsafe/intext.scm 764 */
										BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5672,
											BgL_bufferz00_5671, (((long) 0)));
									}
								else
									{	/* Unsafe/intext.scm 764 */
										BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5672,
											BgL_bufferz00_5671, (BgL_siza7eza7_3959));
										BBOOL(BGl_printzd2wordzf2siza7ez87zz__intextz00
											(BgL_ptrz00_5672, BgL_bufferz00_5671,
												BINT(BgL_lenz00_1731), BINT(BgL_siza7eza7_3959)));
									}
							}
							{
								long BgL_iz00_1734;

								BgL_iz00_1734 = ((long) 0);
							BgL_zc3anonymousza32307ze3z83_1735:
								if ((BgL_iz00_1734 < (long) (BgL_lenz00_1731)))
									{	/* Unsafe/intext.scm 765 */
										BGl_printzd2itemzd2zz__intextz00(BgL_printzd2epairzd2_5670,
											BgL_printzd2pairzd2_5669, BgL_printzd2objectzd2_5668,
											BgL_printzd2cellzd2_5667, BgL_printzd2weakptrzd2_5666,
											BgL_envz00_5660, BgL_printzd2hvectorzd2_5665,
											BgL_printzd2tvectorzd2_5664, BgL_printzd2customzd2_5663,
											BgL_ptrz00_5672, BgL_bufferz00_5671, BgL_refz00_5662,
											BgL_tablez00_5661, VECTOR_REF(BgL_itemz00_1727,
												(int) (BgL_iz00_1734)));
										{
											long BgL_iz00_7634;

											BgL_iz00_7634 = (BgL_iz00_1734 + ((long) 1));
											BgL_iz00_1734 = BgL_iz00_7634;
											goto BgL_zc3anonymousza32307ze3z83_1735;
										}
									}
								else
									{	/* Unsafe/intext.scm 765 */
										BgL_auxz00_7591 = ((bool_t) 0);
									}
							}
						}
						return BBOOL(BgL_auxz00_7591);
					}
				}
			}
		}
	}



/* print-hvector */
	obj_t BGl_printzd2hvectorzd2zz__intextz00(obj_t BgL_envz00_5677,
		obj_t BgL_itemz00_5680, obj_t BgL_markz00_5681)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 784 */
			{	/* Unsafe/intext.scm 769 */
				obj_t BgL_bufferz00_5678;

				obj_t BgL_ptrz00_5679;

				BgL_bufferz00_5678 = PROCEDURE_REF(BgL_envz00_5677, (int) (((long) 0)));
				BgL_ptrz00_5679 = PROCEDURE_REF(BgL_envz00_5677, (int) (((long) 1)));
				{
					obj_t BgL_itemz00_1740;

					obj_t BgL_markz00_1741;

					BgL_itemz00_1740 = BgL_itemz00_5680;
					BgL_markz00_1741 = BgL_markz00_5681;
					{
						BGL_LONGLONG_T BgL_mz00_1607;

						obj_t BgL_siza7eza7_1608;

						{	/* Unsafe/intext.scm 769 */
							obj_t BgL_tagz00_1743;

							BgL_tagz00_1743 =
								BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00
								(BgL_itemz00_1740);
							{	/* Unsafe/intext.scm 771 */
								obj_t BgL_bsiza7eza7_1744;

								obj_t BgL_refz00_1745;

								obj_t BgL__z00_1746;

								{	/* Unsafe/intext.scm 771 */
									int BgL_auxz00_7642;

									BgL_auxz00_7642 = (int) (((long) 1));
									BgL_bsiza7eza7_1744 = BGL_MVALUES_VAL(BgL_auxz00_7642);
								}
								{	/* Unsafe/intext.scm 771 */
									int BgL_auxz00_7645;

									BgL_auxz00_7645 = (int) (((long) 2));
									BgL_refz00_1745 = BGL_MVALUES_VAL(BgL_auxz00_7645);
								}
								{	/* Unsafe/intext.scm 771 */
									int BgL_auxz00_7648;

									BgL_auxz00_7648 = (int) (((long) 3));
									BgL__z00_1746 = BGL_MVALUES_VAL(BgL_auxz00_7648);
								}
								{	/* Unsafe/intext.scm 771 */
									long BgL_lenz00_1747;

									BgL_lenz00_1747 = BGL_HVECTOR_LENGTH(BgL_itemz00_1740);
									BGl_checkzd2bufferz12zc0zz__intextz00(BgL_bufferz00_5678,
										BgL_ptrz00_5679, ((long) 1));
									{	/* Unsafe/intext.scm 772 */
										obj_t BgL_stringz00_3979;

										long BgL_kz00_3980;

										BgL_stringz00_3979 = CELL_REF(BgL_bufferz00_5678);
										BgL_kz00_3980 = (long) CINT(CELL_REF(BgL_ptrz00_5679));
										STRING_SET(BgL_stringz00_3979, BgL_kz00_3980,
											((unsigned char) 'h'));
									}
									{	/* Unsafe/intext.scm 772 */
										obj_t BgL_auxz00_5682;

										BgL_auxz00_5682 =
											BINT(
											(((long) 1) + (long) CINT(CELL_REF(BgL_ptrz00_5679))));
										CELL_SET(BgL_ptrz00_5679, BgL_auxz00_5682);
									}
									{	/* Unsafe/intext.scm 773 */
										long BgL_siza7eza7_3985;

										BgL_siza7eza7_3985 =
											BGl_siza7ezd2ofzd2wordza7zz__intextz00(BINT
											(BgL_lenz00_1747));
										if ((BgL_siza7eza7_3985 == ((long) 0)))
											{	/* Unsafe/intext.scm 773 */
												BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5679,
													BgL_bufferz00_5678, (((long) 0)));
											}
										else
											{	/* Unsafe/intext.scm 773 */
												BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5679,
													BgL_bufferz00_5678, (BgL_siza7eza7_3985));
												BBOOL(BGl_printzd2wordzf2siza7ez87zz__intextz00
													(BgL_ptrz00_5679, BgL_bufferz00_5678,
														BINT(BgL_lenz00_1747), BINT(BgL_siza7eza7_3985)));
											}
									}
									{	/* Unsafe/intext.scm 774 */
										long BgL_siza7eza7_3996;

										BgL_siza7eza7_3996 =
											BGl_siza7ezd2ofzd2wordza7zz__intextz00
											(BgL_bsiza7eza7_1744);
										if ((BgL_siza7eza7_3996 == ((long) 0)))
											{	/* Unsafe/intext.scm 774 */
												BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5679,
													BgL_bufferz00_5678, (((long) 0)));
											}
										else
											{	/* Unsafe/intext.scm 774 */
												BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5679,
													BgL_bufferz00_5678, (BgL_siza7eza7_3996));
												BBOOL(BGl_printzd2wordzf2siza7ez87zz__intextz00
													(BgL_ptrz00_5679, BgL_bufferz00_5678,
														BgL_bsiza7eza7_1744, BINT(BgL_siza7eza7_3996)));
											}
									}
									{	/* Unsafe/intext.scm 775 */
										obj_t BgL_arg2312z00_1748;

										BgL_arg2312z00_1748 = SYMBOL_TO_STRING(BgL_tagz00_1743);
										BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5679,
											BgL_bufferz00_5678, ((unsigned char) '"'));
										BGl_z12printzd2charszc0zz__intextz00(BgL_ptrz00_5679,
											BgL_bufferz00_5678, BgL_arg2312z00_1748,
											STRING_LENGTH(BgL_arg2312z00_1748));
									}
									{	/* Unsafe/intext.scm 776 */
										bool_t BgL_testz00_7684;

										{	/* Unsafe/intext.scm 776 */
											bool_t BgL__ortest_1852z00_1778;

											BgL__ortest_1852z00_1778 =
												(BgL_tagz00_1743 == BGl_symbol3135z00zz__intextz00);
											if (BgL__ortest_1852z00_1778)
												{	/* Unsafe/intext.scm 776 */
													BgL_testz00_7684 = BgL__ortest_1852z00_1778;
												}
											else
												{	/* Unsafe/intext.scm 776 */
													bool_t BgL__ortest_1853z00_1779;

													BgL__ortest_1853z00_1779 =
														(BgL_tagz00_1743 == BGl_symbol3137z00zz__intextz00);
													if (BgL__ortest_1853z00_1779)
														{	/* Unsafe/intext.scm 776 */
															BgL_testz00_7684 = BgL__ortest_1853z00_1779;
														}
													else
														{	/* Unsafe/intext.scm 776 */
															bool_t BgL__ortest_1854z00_1780;

															BgL__ortest_1854z00_1780 =
																(BgL_tagz00_1743 ==
																BGl_symbol3139z00zz__intextz00);
															if (BgL__ortest_1854z00_1780)
																{	/* Unsafe/intext.scm 776 */
																	BgL_testz00_7684 = BgL__ortest_1854z00_1780;
																}
															else
																{	/* Unsafe/intext.scm 776 */
																	bool_t BgL__ortest_1855z00_1781;

																	BgL__ortest_1855z00_1781 =
																		(BgL_tagz00_1743 ==
																		BGl_symbol3141z00zz__intextz00);
																	if (BgL__ortest_1855z00_1781)
																		{	/* Unsafe/intext.scm 776 */
																			BgL_testz00_7684 =
																				BgL__ortest_1855z00_1781;
																		}
																	else
																		{	/* Unsafe/intext.scm 776 */
																			bool_t BgL__ortest_1856z00_1782;

																			BgL__ortest_1856z00_1782 =
																				(BgL_tagz00_1743 ==
																				BGl_symbol3143z00zz__intextz00);
																			if (BgL__ortest_1856z00_1782)
																				{	/* Unsafe/intext.scm 776 */
																					BgL_testz00_7684 =
																						BgL__ortest_1856z00_1782;
																				}
																			else
																				{	/* Unsafe/intext.scm 776 */
																					BgL_testz00_7684 =
																						(BgL_tagz00_1743 ==
																						BGl_symbol3145z00zz__intextz00);
																				}
																		}
																}
														}
												}
										}
										if (BgL_testz00_7684)
											{
												long BgL_iz00_1752;

												{	/* Unsafe/intext.scm 778 */
													bool_t BgL_auxz00_7696;

													BgL_iz00_1752 = ((long) 0);
												BgL_zc3anonymousza32314ze3z83_1753:
													if ((BgL_iz00_1752 < BgL_lenz00_1747))
														{	/* Unsafe/intext.scm 778 */
															{	/* Unsafe/intext.scm 778 */
																obj_t BgL_arg2316z00_1755;

																BgL_arg2316z00_1755 =
																	PROCEDURE_ENTRY(BgL_refz00_1745)
																	(BgL_refz00_1745, BgL_itemz00_1740,
																	BINT(BgL_iz00_1752), BEOA);
																BGl_printzd2wordzf2siza7ez87zz__intextz00
																	(BgL_ptrz00_5679, BgL_bufferz00_5678,
																	BgL_arg2316z00_1755, BgL_bsiza7eza7_1744);
															}
															{
																long BgL_iz00_7703;

																BgL_iz00_7703 = (BgL_iz00_1752 + ((long) 1));
																BgL_iz00_1752 = BgL_iz00_7703;
																goto BgL_zc3anonymousza32314ze3z83_1753;
															}
														}
													else
														{	/* Unsafe/intext.scm 778 */
															BgL_auxz00_7696 = ((bool_t) 0);
														}
													return BBOOL(BgL_auxz00_7696);
												}
											}
										else
											{	/* Unsafe/intext.scm 776 */
												bool_t BgL_testz00_7706;

												{	/* Unsafe/intext.scm 776 */
													bool_t BgL__ortest_1858z00_1777;

													BgL__ortest_1858z00_1777 =
														(BgL_tagz00_1743 == BGl_symbol3147z00zz__intextz00);
													if (BgL__ortest_1858z00_1777)
														{	/* Unsafe/intext.scm 776 */
															BgL_testz00_7706 = BgL__ortest_1858z00_1777;
														}
													else
														{	/* Unsafe/intext.scm 776 */
															BgL_testz00_7706 =
																(BgL_tagz00_1743 ==
																BGl_symbol3150z00zz__intextz00);
														}
												}
												if (BgL_testz00_7706)
													{
														long BgL_iz00_1760;

														{	/* Unsafe/intext.scm 780 */
															bool_t BgL_auxz00_7710;

															BgL_iz00_1760 = ((long) 0);
														BgL_zc3anonymousza32319ze3z83_1761:
															if ((BgL_iz00_1760 < BgL_lenz00_1747))
																{	/* Unsafe/intext.scm 780 */
																	{	/* Unsafe/intext.scm 780 */
																		obj_t BgL_arg2321z00_1763;

																		BgL_arg2321z00_1763 =
																			PROCEDURE_ENTRY(BgL_refz00_1745)
																			(BgL_refz00_1745, BgL_itemz00_1740,
																			BINT(BgL_iz00_1760), BEOA);
																		BgL_mz00_1607 =
																			BLLONG_TO_LLONG(BgL_arg2321z00_1763);
																		BgL_siza7eza7_1608 = BgL_bsiza7eza7_1744;
																		{	/* Unsafe/intext.scm 619 */
																			long BgL_g1847z00_1610;

																			BgL_g1847z00_1610 =
																				(
																				(long) CINT(BgL_siza7eza7_1608) -
																				((long) 1));
																			{
																				long BgL_iz00_1612;

																				BgL_iz00_1612 = BgL_g1847z00_1610;
																			BgL_zc3anonymousza32225ze3z83_1613:
																				if ((BgL_iz00_1612 >= ((long) 0)))
																					{	/* Unsafe/intext.scm 621 */
																						long BgL_dz00_1615;

																						{	/* Unsafe/intext.scm 621 */
																							BGL_LONGLONG_T BgL_auxz00_7720;

																							BgL_auxz00_7720 =
																								(
																								(BgL_mz00_1607 >>
																									(int) (
																										(((long) 8) *
																											BgL_iz00_1612))) &
																								((BGL_LONGLONG_T) 255));
																							BgL_dz00_1615 =
																								LLONG_TO_LONG(BgL_auxz00_7720);
																						}
																						BGl_z12printzd2markupzc0zz__intextz00
																							(BgL_ptrz00_5679,
																							BgL_bufferz00_5678,
																							(BgL_dz00_1615));
																						{
																							long BgL_iz00_7728;

																							BgL_iz00_7728 =
																								(BgL_iz00_1612 - ((long) 1));
																							BgL_iz00_1612 = BgL_iz00_7728;
																							goto
																								BgL_zc3anonymousza32225ze3z83_1613;
																						}
																					}
																				else
																					{	/* Unsafe/intext.scm 620 */
																						((bool_t) 0);
																					}
																			}
																		}
																	}
																	{
																		long BgL_iz00_7731;

																		BgL_iz00_7731 =
																			(BgL_iz00_1760 + ((long) 1));
																		BgL_iz00_1760 = BgL_iz00_7731;
																		goto BgL_zc3anonymousza32319ze3z83_1761;
																	}
																}
															else
																{	/* Unsafe/intext.scm 780 */
																	BgL_auxz00_7710 = ((bool_t) 0);
																}
															return BBOOL(BgL_auxz00_7710);
														}
													}
												else
													{	/* Unsafe/intext.scm 776 */
														bool_t BgL_testz00_7734;

														{	/* Unsafe/intext.scm 776 */
															bool_t BgL__ortest_1860z00_1776;

															BgL__ortest_1860z00_1776 =
																(BgL_tagz00_1743 ==
																BGl_symbol3152z00zz__intextz00);
															if (BgL__ortest_1860z00_1776)
																{	/* Unsafe/intext.scm 776 */
																	BgL_testz00_7734 = BgL__ortest_1860z00_1776;
																}
															else
																{	/* Unsafe/intext.scm 776 */
																	BgL_testz00_7734 =
																		(BgL_tagz00_1743 ==
																		BGl_symbol3155z00zz__intextz00);
																}
														}
														if (BgL_testz00_7734)
															{
																long BgL_iz00_1768;

																{	/* Unsafe/intext.scm 782 */
																	bool_t BgL_auxz00_7738;

																	BgL_iz00_1768 = ((long) 0);
																BgL_zc3anonymousza32324ze3z83_1769:
																	if ((BgL_iz00_1768 < BgL_lenz00_1747))
																		{	/* Unsafe/intext.scm 782 */
																			{	/* Unsafe/intext.scm 783 */
																				obj_t BgL_sz00_1771;

																				{	/* Unsafe/intext.scm 783 */
																					obj_t BgL_arg2327z00_1773;

																					BgL_arg2327z00_1773 =
																						PROCEDURE_ENTRY(BgL_refz00_1745)
																						(BgL_refz00_1745, BgL_itemz00_1740,
																						BINT(BgL_iz00_1768), BEOA);
																					{	/* Unsafe/intext.scm 783 */
																						obj_t BgL_realz00_4021;

																						BgL_realz00_4021 =
																							BgL_arg2327z00_1773;
																						BgL_sz00_1771 =
																							real_to_string(REAL_TO_DOUBLE
																							(BgL_realz00_4021));
																					}
																				}
																				{	/* Unsafe/intext.scm 784 */
																					long BgL_arg2326z00_1772;

																					BgL_arg2326z00_1772 =
																						STRING_LENGTH(BgL_sz00_1771);
																					BGl_printzd2wordzd2zz__intextz00
																						(BgL_ptrz00_5679,
																						BgL_bufferz00_5678,
																						BgL_arg2326z00_1772);
																					BGl_checkzd2bufferz12zc0zz__intextz00
																						(BgL_bufferz00_5678,
																						BgL_ptrz00_5679,
																						BgL_arg2326z00_1772);
																					{	/* Unsafe/intext.scm 784 */
																						obj_t BgL_s2z00_4027;

																						long BgL_o2z00_4028;

																						BgL_s2z00_4027 =
																							CELL_REF(BgL_bufferz00_5678);
																						BgL_o2z00_4028 =
																							(long)
																							CINT(CELL_REF(BgL_ptrz00_5679));
																						blit_string(BgL_sz00_1771,
																							((long) 0), BgL_s2z00_4027,
																							BgL_o2z00_4028,
																							BgL_arg2326z00_1772);
																					}
																					{	/* Unsafe/intext.scm 784 */
																						obj_t BgL_auxz00_5683;

																						BgL_auxz00_5683 =
																							BINT(
																							((long)
																								CINT(CELL_REF(BgL_ptrz00_5679))
																								+ BgL_arg2326z00_1772));
																						CELL_SET(BgL_ptrz00_5679,
																							BgL_auxz00_5683);
																			}}}
																			{
																				long BgL_iz00_7754;

																				BgL_iz00_7754 =
																					(BgL_iz00_1768 + ((long) 1));
																				BgL_iz00_1768 = BgL_iz00_7754;
																				goto BgL_zc3anonymousza32324ze3z83_1769;
																			}
																		}
																	else
																		{	/* Unsafe/intext.scm 782 */
																			BgL_auxz00_7738 = ((bool_t) 0);
																		}
																	return BBOOL(BgL_auxz00_7738);
																}
															}
														else
															{	/* Unsafe/intext.scm 776 */
																return BUNSPEC;
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



/* print-tvector */
	obj_t BGl_printzd2tvectorzd2zz__intextz00(obj_t BgL_envz00_5684,
		obj_t BgL_itemz00_5697, obj_t BgL_markz00_5698)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 791 */
			{	/* Unsafe/intext.scm 788 */
				obj_t BgL_tablez00_5685;

				obj_t BgL_refz00_5686;

				obj_t BgL_printzd2customzd2_5687;

				obj_t BgL_printzd2hvectorzd2_5688;

				obj_t BgL_printzd2vectorzd2_5689;

				obj_t BgL_printzd2weakptrzd2_5690;

				obj_t BgL_printzd2cellzd2_5691;

				obj_t BgL_printzd2objectzd2_5692;

				obj_t BgL_printzd2pairzd2_5693;

				obj_t BgL_printzd2epairzd2_5694;

				obj_t BgL_bufferz00_5695;

				obj_t BgL_ptrz00_5696;

				BgL_tablez00_5685 = PROCEDURE_REF(BgL_envz00_5684, (int) (((long) 0)));
				BgL_refz00_5686 = PROCEDURE_REF(BgL_envz00_5684, (int) (((long) 1)));
				BgL_printzd2customzd2_5687 =
					PROCEDURE_REF(BgL_envz00_5684, (int) (((long) 2)));
				BgL_printzd2hvectorzd2_5688 =
					PROCEDURE_REF(BgL_envz00_5684, (int) (((long) 3)));
				BgL_printzd2vectorzd2_5689 =
					PROCEDURE_REF(BgL_envz00_5684, (int) (((long) 4)));
				BgL_printzd2weakptrzd2_5690 =
					PROCEDURE_REF(BgL_envz00_5684, (int) (((long) 5)));
				BgL_printzd2cellzd2_5691 =
					PROCEDURE_REF(BgL_envz00_5684, (int) (((long) 6)));
				BgL_printzd2objectzd2_5692 =
					PROCEDURE_REF(BgL_envz00_5684, (int) (((long) 7)));
				BgL_printzd2pairzd2_5693 =
					PROCEDURE_REF(BgL_envz00_5684, (int) (((long) 8)));
				BgL_printzd2epairzd2_5694 =
					PROCEDURE_REF(BgL_envz00_5684, (int) (((long) 9)));
				BgL_bufferz00_5695 =
					PROCEDURE_REF(BgL_envz00_5684, (int) (((long) 10)));
				BgL_ptrz00_5696 = PROCEDURE_REF(BgL_envz00_5684, (int) (((long) 11)));
				{
					obj_t BgL_itemz00_1783;

					obj_t BgL_markz00_1784;

					BgL_itemz00_1783 = BgL_itemz00_5697;
					BgL_markz00_1784 = BgL_markz00_5698;
					{	/* Unsafe/intext.scm 788 */
						obj_t BgL_vz00_4034;

						BgL_vz00_4034 = STRUCT_REF(BgL_itemz00_1783, (int) (((long) 1)));
						BGl_checkzd2bufferz12zc0zz__intextz00(BgL_bufferz00_5695,
							BgL_ptrz00_5696, ((long) 1));
						{	/* Unsafe/intext.scm 788 */
							obj_t BgL_stringz00_4040;

							long BgL_kz00_4041;

							BgL_stringz00_4040 = CELL_REF(BgL_bufferz00_5695);
							BgL_kz00_4041 = (long) CINT(CELL_REF(BgL_ptrz00_5696));
							STRING_SET(BgL_stringz00_4040, BgL_kz00_4041,
								((unsigned char) 'V'));
						}
						{	/* Unsafe/intext.scm 788 */
							obj_t BgL_auxz00_5699;

							BgL_auxz00_5699 =
								BINT((((long) 1) + (long) CINT(CELL_REF(BgL_ptrz00_5696))));
							CELL_SET(BgL_ptrz00_5696, BgL_auxz00_5699);
						}
						BGl_printzd2itemzd2zz__intextz00(BgL_printzd2epairzd2_5694,
							BgL_printzd2pairzd2_5693, BgL_printzd2objectzd2_5692,
							BgL_printzd2cellzd2_5691, BgL_printzd2weakptrzd2_5690,
							BgL_printzd2vectorzd2_5689, BgL_printzd2hvectorzd2_5688,
							BgL_envz00_5684, BgL_printzd2customzd2_5687, BgL_ptrz00_5696,
							BgL_bufferz00_5695, BgL_refz00_5686, BgL_tablez00_5685,
							BGl_tvectorzd2idzd2zz__tvectorz00(BgL_itemz00_1783));
						return BGl_printzd2itemzd2zz__intextz00(BgL_printzd2epairzd2_5694,
							BgL_printzd2pairzd2_5693, BgL_printzd2objectzd2_5692,
							BgL_printzd2cellzd2_5691, BgL_printzd2weakptrzd2_5690,
							BgL_printzd2vectorzd2_5689, BgL_printzd2hvectorzd2_5688,
							BgL_envz00_5684, BgL_printzd2customzd2_5687, BgL_ptrz00_5696,
							BgL_bufferz00_5695, BgL_refz00_5686, BgL_tablez00_5685,
							BgL_vz00_4034);
					}
				}
			}
		}
	}



/* print-custom */
	obj_t BGl_printzd2customzd2zz__intextz00(obj_t BgL_envz00_5700,
		obj_t BgL_itemz00_5703, obj_t BgL_markz00_5704)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 795 */
			{	/* Unsafe/intext.scm 795 */
				obj_t BgL_bufferz00_5701;

				obj_t BgL_ptrz00_5702;

				BgL_bufferz00_5701 = PROCEDURE_REF(BgL_envz00_5700, (int) (((long) 0)));
				BgL_ptrz00_5702 = PROCEDURE_REF(BgL_envz00_5700, (int) (((long) 1)));
				{
					obj_t BgL_itemz00_1788;

					obj_t BgL_markz00_1789;

					BgL_itemz00_1788 = BgL_itemz00_5703;
					BgL_markz00_1789 = BgL_markz00_5704;
					BGl_checkzd2bufferz12zc0zz__intextz00(BgL_bufferz00_5701,
						BgL_ptrz00_5702, ((long) 1));
					{	/* Unsafe/intext.scm 795 */
						obj_t BgL_stringz00_4050;

						long BgL_kz00_4051;

						BgL_stringz00_4050 = CELL_REF(BgL_bufferz00_5701);
						BgL_kz00_4051 = (long) CINT(CELL_REF(BgL_ptrz00_5702));
						STRING_SET(BgL_stringz00_4050, BgL_kz00_4051,
							((unsigned char) '+'));
					}
					{	/* Unsafe/intext.scm 795 */
						obj_t BgL_auxz00_5705;

						BgL_auxz00_5705 =
							BINT((((long) 1) + (long) CINT(CELL_REF(BgL_ptrz00_5702))));
						CELL_SET(BgL_ptrz00_5702, BgL_auxz00_5705);
					}
					{	/* Unsafe/intext.scm 796 */
						char *BgL_identz00_4045;

						BgL_identz00_4045 = CUSTOM_IDENTIFIER(BgL_itemz00_1788);
						{	/* Unsafe/intext.scm 796 */

							{	/* Unsafe/intext.scm 796 */
								long BgL_arg2332z00_4046;

								BgL_arg2332z00_4046 =
									STRING_LENGTH(string_to_bstring(BgL_identz00_4045));
								BGl_printzd2wordzd2zz__intextz00(BgL_ptrz00_5702,
									BgL_bufferz00_5701, BgL_arg2332z00_4046);
								BGl_checkzd2bufferz12zc0zz__intextz00(BgL_bufferz00_5701,
									BgL_ptrz00_5702, BgL_arg2332z00_4046);
								{	/* Unsafe/intext.scm 796 */
									obj_t BgL_s1z00_4059;

									obj_t BgL_s2z00_4061;

									long BgL_o2z00_4062;

									BgL_s1z00_4059 = string_to_bstring(BgL_identz00_4045);
									BgL_s2z00_4061 = CELL_REF(BgL_bufferz00_5701);
									BgL_o2z00_4062 = (long) CINT(CELL_REF(BgL_ptrz00_5702));
									blit_string(BgL_s1z00_4059, ((long) 0), BgL_s2z00_4061,
										BgL_o2z00_4062, BgL_arg2332z00_4046);
								}
								{	/* Unsafe/intext.scm 796 */
									obj_t BgL_auxz00_5706;

									BgL_auxz00_5706 =
										BINT(
										((long) CINT(CELL_REF(BgL_ptrz00_5702)) +
											BgL_arg2332z00_4046));
									CELL_SET(BgL_ptrz00_5702, BgL_auxz00_5706);
							}}
							{	/* Unsafe/intext.scm 796 */
								obj_t BgL_sz00_4047;

								BgL_sz00_4047 =
									STRUCT_REF(BgL_markz00_1789, (int) (((long) 1)));
								{	/* Unsafe/intext.scm 796 */
									long BgL_arg2333z00_4048;

									BgL_arg2333z00_4048 = STRING_LENGTH(BgL_sz00_4047);
									BGl_printzd2wordzd2zz__intextz00(BgL_ptrz00_5702,
										BgL_bufferz00_5701, BgL_arg2333z00_4048);
									BGl_checkzd2bufferz12zc0zz__intextz00(BgL_bufferz00_5701,
										BgL_ptrz00_5702, BgL_arg2333z00_4048);
									{	/* Unsafe/intext.scm 796 */
										obj_t BgL_s1z00_4072;

										obj_t BgL_s2z00_4074;

										long BgL_o2z00_4075;

										BgL_s1z00_4072 = BgL_sz00_4047;
										BgL_s2z00_4074 = CELL_REF(BgL_bufferz00_5701);
										BgL_o2z00_4075 = (long) CINT(CELL_REF(BgL_ptrz00_5702));
										blit_string(BgL_s1z00_4072, ((long) 0), BgL_s2z00_4074,
											BgL_o2z00_4075, BgL_arg2333z00_4048);
									}
									{	/* Unsafe/intext.scm 796 */
										obj_t BgL_auxz00_5707;

										BgL_auxz00_5707 =
											BINT(
											((long) CINT(CELL_REF(BgL_ptrz00_5702)) +
												BgL_arg2333z00_4048));
										return CELL_SET(BgL_ptrz00_5702, BgL_auxz00_5707);
									}
								}
							}
						}
					}
				}
			}
		}
	}



/* <anonymous:2388> */
	obj_t BGl_zc3anonymousza32388ze3z83zz__intextz00(obj_t BgL_envz00_5708,
		obj_t BgL_iz00_5711, obj_t BgL_mz00_5712)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 879 */
			{	/* Unsafe/intext.scm 879 */
				obj_t BgL_bufferz00_5709;

				obj_t BgL_ptrz00_5710;

				BgL_bufferz00_5709 = PROCEDURE_REF(BgL_envz00_5708, (int) (((long) 0)));
				BgL_ptrz00_5710 = PROCEDURE_REF(BgL_envz00_5708, (int) (((long) 1)));
				{
					obj_t BgL_iz00_1868;

					obj_t BgL_mz00_1869;

					BgL_iz00_1868 = BgL_iz00_5711;
					BgL_mz00_1869 = BgL_mz00_5712;
					{	/* Unsafe/intext.scm 879 */
						obj_t BgL_arg2335z00_4293;

						BgL_arg2335z00_4293 = STRUCT_REF(BgL_mz00_1869, (int) (((long) 1)));
						BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5710,
							BgL_bufferz00_5709, ((unsigned char) 'p'));
						return BGl_z12printzd2charszc0zz__intextz00(BgL_ptrz00_5710,
							BgL_bufferz00_5709, BgL_arg2335z00_4293,
							STRING_LENGTH(BgL_arg2335z00_4293));
					}
				}
			}
		}
	}



/* <anonymous:2391> */
	obj_t BGl_zc3anonymousza32391ze3z83zz__intextz00(obj_t BgL_envz00_5713,
		obj_t BgL_iz00_5716, obj_t BgL_mz00_5717)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 881 */
			{	/* Unsafe/intext.scm 881 */
				obj_t BgL_bufferz00_5714;

				obj_t BgL_ptrz00_5715;

				BgL_bufferz00_5714 = PROCEDURE_REF(BgL_envz00_5713, (int) (((long) 0)));
				BgL_ptrz00_5715 = PROCEDURE_REF(BgL_envz00_5713, (int) (((long) 1)));
				{
					obj_t BgL_iz00_1874;

					obj_t BgL_mz00_1875;

					BgL_iz00_1874 = BgL_iz00_5716;
					BgL_mz00_1875 = BgL_mz00_5717;
					{	/* Unsafe/intext.scm 881 */
						obj_t BgL_arg2335z00_4305;

						BgL_arg2335z00_4305 = STRUCT_REF(BgL_mz00_1875, (int) (((long) 1)));
						BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5715,
							BgL_bufferz00_5714, ((unsigned char) 'e'));
						return BGl_z12printzd2charszc0zz__intextz00(BgL_ptrz00_5715,
							BgL_bufferz00_5714, BgL_arg2335z00_4305,
							STRING_LENGTH(BgL_arg2335z00_4305));
					}
				}
			}
		}
	}



/* <anonymous:2394> */
	obj_t BGl_zc3anonymousza32394ze3z83zz__intextz00(obj_t BgL_envz00_5718,
		obj_t BgL_iz00_5721, obj_t BgL_mz00_5722)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 883 */
			{	/* Unsafe/intext.scm 883 */
				obj_t BgL_bufferz00_5719;

				obj_t BgL_ptrz00_5720;

				BgL_bufferz00_5719 = PROCEDURE_REF(BgL_envz00_5718, (int) (((long) 0)));
				BgL_ptrz00_5720 = PROCEDURE_REF(BgL_envz00_5718, (int) (((long) 1)));
				{
					obj_t BgL_iz00_1880;

					obj_t BgL_mz00_1881;

					BgL_iz00_1880 = BgL_iz00_5721;
					BgL_mz00_1881 = BgL_mz00_5722;
					{	/* Unsafe/intext.scm 883 */
						obj_t BgL_arg2335z00_4317;

						BgL_arg2335z00_4317 = STRUCT_REF(BgL_mz00_1881, (int) (((long) 1)));
						BGl_z12printzd2markupzc0zz__intextz00(BgL_ptrz00_5720,
							BgL_bufferz00_5719, ((unsigned char) 'o'));
						return BGl_z12printzd2charszc0zz__intextz00(BgL_ptrz00_5720,
							BgL_bufferz00_5719, BgL_arg2335z00_4317,
							STRING_LENGTH(BgL_arg2335z00_4317));
					}
				}
			}
		}
	}



/* mark-obj! */
	long BGl_markzd2objz12zc0zz__intextz00(obj_t BgL_tablez00_38,
		obj_t BgL_objz00_39)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 898 */
			{	/* Unsafe/intext.scm 1043 */
				obj_t BgL_nbrefz00_1909;

				{	/* Unsafe/intext.scm 1043 */
					obj_t BgL_cellvalz00_7850;

					BgL_cellvalz00_7850 = BINT(((long) 0));
					BgL_nbrefz00_1909 = MAKE_CELL(BgL_cellvalz00_7850);
				}
				BGl_markz72z72zz__intextz00(BgL_nbrefz00_1909, BgL_tablez00_38,
					BgL_objz00_39);
				return (long) CINT(CELL_REF(BgL_nbrefz00_1909));
		}}
	}



/* mark' */
	obj_t BGl_markz72z72zz__intextz00(obj_t BgL_nbrefz00_5761,
		obj_t BgL_tablez00_5760, obj_t BgL_objz00_2005)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1041 */
		BGl_markz72z72zz__intextz00:
			{
				obj_t BgL_mz00_1929;

				obj_t BgL_objz00_1939;

				obj_t BgL_objz00_1944;

				obj_t BgL_objz00_1951;

				obj_t BgL_customz00_1952;

				obj_t BgL_objz00_1956;

				obj_t BgL_objz00_1967;

				obj_t BgL_objz00_1970;

				obj_t BgL_objz00_1973;

				obj_t BgL_objz00_1983;

				obj_t BgL_objz00_1991;

				obj_t BgL_objz00_1994;

				{	/* Unsafe/intext.scm 1006 */
					bool_t BgL_testz00_7854;

					if (EXTENDED_PAIRP(BgL_objz00_2005))
						{	/* Unsafe/intext.scm 1006 */
							BgL_testz00_7854 = BGl_za2epairzf3za2zf3zz__intextz00;
						}
					else
						{	/* Unsafe/intext.scm 1006 */
							BgL_testz00_7854 = ((bool_t) 0);
						}
					if (BgL_testz00_7854)
						{	/* Unsafe/intext.scm 1007 */
							obj_t BgL_mz00_4820;

							BgL_mz00_4820 =
								BGl_hashtablezd2getzd2zz__hashz00(BgL_tablez00_5760,
								BgL_objz00_2005);
							{	/* Unsafe/intext.scm 1007 */
								bool_t BgL_testz00_7858;

								if (STRUCTP(BgL_mz00_4820))
									{	/* Unsafe/intext.scm 1007 */
										BgL_testz00_7858 =
											(STRUCT_KEY(BgL_mz00_4820) ==
											BGl_symbol3163z00zz__intextz00);
									}
								else
									{	/* Unsafe/intext.scm 1007 */
										BgL_testz00_7858 = ((bool_t) 0);
									}
								if (BgL_testz00_7858)
									{	/* Unsafe/intext.scm 1007 */
										BgL_mz00_1929 = BgL_mz00_4820;
									BgL_zc3anonymousza32396ze3z83_1930:
										{	/* Unsafe/intext.scm 905 */
											obj_t BgL_omz00_1931;

											BgL_omz00_1931 =
												STRUCT_REF(BgL_mz00_1929, (int) (((long) 2)));
											{	/* Unsafe/intext.scm 906 */
												long BgL_arg2397z00_1932;

												BgL_arg2397z00_1932 =
													(((long) 1) + (long) CINT(BgL_omz00_1931));
												{	/* Unsafe/intext.scm 906 */
													obj_t BgL_auxz00_7869;

													int BgL_auxz00_7867;

													BgL_auxz00_7869 = BINT(BgL_arg2397z00_1932);
													BgL_auxz00_7867 = (int) (((long) 2));
													STRUCT_SET(BgL_mz00_1929, BgL_auxz00_7867,
														BgL_auxz00_7869);
											}}
											if (((long) CINT(BgL_omz00_1931) == ((long) 0)))
												{	/* Unsafe/intext.scm 907 */
													obj_t BgL_auxz00_5762;

													{	/* Unsafe/intext.scm 907 */
														long BgL_za71za7_4337;

														BgL_za71za7_4337 =
															(long) CINT(CELL_REF(BgL_nbrefz00_5761));
														BgL_auxz00_5762 =
															BINT((BgL_za71za7_4337 + ((long) 1)));
													}
													return CELL_SET(BgL_nbrefz00_5761, BgL_auxz00_5762);
												}
											else
												{	/* Unsafe/intext.scm 907 */
													return BFALSE;
												}
										}
									}
								else
									{	/* Unsafe/intext.scm 1007 */
										BgL_objz00_1939 = BgL_objz00_2005;
										{	/* Unsafe/intext.scm 918 */
											obj_t BgL_arg2186z00_4353;

											{	/* Unsafe/intext.scm 918 */
												obj_t BgL_newz00_4358;

												BgL_newz00_4358 =
													create_struct(BGl_symbol3163z00zz__intextz00,
													(int) (((long) 4)));
												{	/* Unsafe/intext.scm 918 */
													obj_t BgL_auxz00_7882;

													int BgL_auxz00_7880;

													BgL_auxz00_7882 = BINT(((long) -1));
													BgL_auxz00_7880 = (int) (((long) 3));
													STRUCT_SET(BgL_newz00_4358, BgL_auxz00_7880,
														BgL_auxz00_7882);
												}
												{	/* Unsafe/intext.scm 918 */
													obj_t BgL_auxz00_7887;

													int BgL_auxz00_7885;

													BgL_auxz00_7887 = BINT(((long) 0));
													BgL_auxz00_7885 = (int) (((long) 2));
													STRUCT_SET(BgL_newz00_4358, BgL_auxz00_7885,
														BgL_auxz00_7887);
												}
												{	/* Unsafe/intext.scm 918 */
													int BgL_auxz00_7890;

													BgL_auxz00_7890 = (int) (((long) 1));
													STRUCT_SET(BgL_newz00_4358, BgL_auxz00_7890, BFALSE);
												}
												{	/* Unsafe/intext.scm 918 */
													int BgL_auxz00_7893;

													BgL_auxz00_7893 = (int) (((long) 0));
													STRUCT_SET(BgL_newz00_4358, BgL_auxz00_7893,
														BgL_objz00_1939);
												}
												BgL_arg2186z00_4353 = BgL_newz00_4358;
											}
											BGl_hashtablezd2putz12zc0zz__hashz00(BgL_tablez00_5760,
												BgL_objz00_1939, BgL_arg2186z00_4353);
										}
										{	/* Unsafe/intext.scm 919 */
											obj_t BgL_arg2402z00_1941;

											BgL_arg2402z00_1941 = CAR(BgL_objz00_1939);
											BGl_markz72z72zz__intextz00(BgL_nbrefz00_5761,
												BgL_tablez00_5760, BgL_arg2402z00_1941);
										}
										{	/* Unsafe/intext.scm 920 */
											obj_t BgL_arg2403z00_1942;

											BgL_arg2403z00_1942 = CDR(BgL_objz00_1939);
											BGl_markz72z72zz__intextz00(BgL_nbrefz00_5761,
												BgL_tablez00_5760, BgL_arg2403z00_1942);
										}
										{	/* Unsafe/intext.scm 921 */
											obj_t BgL_arg2404z00_1943;

											BgL_arg2404z00_1943 = CER(BgL_objz00_1939);
											{
												obj_t BgL_objz00_7902;

												BgL_objz00_7902 = BgL_arg2404z00_1943;
												BgL_objz00_2005 = BgL_objz00_7902;
												goto BGl_markz72z72zz__intextz00;
											}
										}
									}
							}
						}
					else
						{	/* Unsafe/intext.scm 1006 */
							if (PAIRP(BgL_objz00_2005))
								{	/* Unsafe/intext.scm 1009 */
									obj_t BgL_objz00_4832;

									BgL_objz00_4832 = BgL_objz00_2005;
									{	/* Unsafe/intext.scm 1009 */
										obj_t BgL_mz00_4833;

										BgL_mz00_4833 =
											BGl_hashtablezd2getzd2zz__hashz00(BgL_tablez00_5760,
											BgL_objz00_4832);
										{	/* Unsafe/intext.scm 1009 */
											bool_t BgL_testz00_7906;

											if (STRUCTP(BgL_mz00_4833))
												{	/* Unsafe/intext.scm 1009 */
													BgL_testz00_7906 =
														(STRUCT_KEY(BgL_mz00_4833) ==
														BGl_symbol3163z00zz__intextz00);
												}
											else
												{	/* Unsafe/intext.scm 1009 */
													BgL_testz00_7906 = ((bool_t) 0);
												}
											if (BgL_testz00_7906)
												{
													obj_t BgL_mz00_7911;

													BgL_mz00_7911 = BgL_mz00_4833;
													BgL_mz00_1929 = BgL_mz00_7911;
													goto BgL_zc3anonymousza32396ze3z83_1930;
												}
											else
												{	/* Unsafe/intext.scm 1009 */
													BgL_objz00_1944 = BgL_objz00_4832;
													{	/* Unsafe/intext.scm 925 */
														obj_t BgL_arg2186z00_4387;

														{	/* Unsafe/intext.scm 925 */
															obj_t BgL_newz00_4392;

															BgL_newz00_4392 =
																create_struct(BGl_symbol3163z00zz__intextz00,
																(int) (((long) 4)));
															{	/* Unsafe/intext.scm 925 */
																obj_t BgL_auxz00_7916;

																int BgL_auxz00_7914;

																BgL_auxz00_7916 = BINT(((long) -1));
																BgL_auxz00_7914 = (int) (((long) 3));
																STRUCT_SET(BgL_newz00_4392, BgL_auxz00_7914,
																	BgL_auxz00_7916);
															}
															{	/* Unsafe/intext.scm 925 */
																obj_t BgL_auxz00_7921;

																int BgL_auxz00_7919;

																BgL_auxz00_7921 = BINT(((long) 0));
																BgL_auxz00_7919 = (int) (((long) 2));
																STRUCT_SET(BgL_newz00_4392, BgL_auxz00_7919,
																	BgL_auxz00_7921);
															}
															{	/* Unsafe/intext.scm 925 */
																int BgL_auxz00_7924;

																BgL_auxz00_7924 = (int) (((long) 1));
																STRUCT_SET(BgL_newz00_4392, BgL_auxz00_7924,
																	BFALSE);
															}
															{	/* Unsafe/intext.scm 925 */
																int BgL_auxz00_7927;

																BgL_auxz00_7927 = (int) (((long) 0));
																STRUCT_SET(BgL_newz00_4392, BgL_auxz00_7927,
																	BgL_objz00_1944);
															}
															BgL_arg2186z00_4387 = BgL_newz00_4392;
														}
														BGl_hashtablezd2putz12zc0zz__hashz00
															(BgL_tablez00_5760, BgL_objz00_1944,
															BgL_arg2186z00_4387);
													}
													{	/* Unsafe/intext.scm 926 */
														obj_t BgL_arg2406z00_4382;

														BgL_arg2406z00_4382 = CAR(BgL_objz00_1944);
														BGl_markz72z72zz__intextz00(BgL_nbrefz00_5761,
															BgL_tablez00_5760, BgL_arg2406z00_4382);
													}
													{	/* Unsafe/intext.scm 926 */
														obj_t BgL_arg2407z00_4383;

														BgL_arg2407z00_4383 = CDR(BgL_objz00_1944);
														{
															obj_t BgL_objz00_7934;

															BgL_objz00_7934 = BgL_arg2407z00_4383;
															BgL_objz00_2005 = BgL_objz00_7934;
															goto BGl_markz72z72zz__intextz00;
														}
													}
												}
										}
									}
								}
							else
								{	/* Unsafe/intext.scm 1008 */
									if (BGL_OBJECTP(BgL_objz00_2005))
										{	/* Unsafe/intext.scm 1011 */
											obj_t BgL_mz00_4846;

											BgL_mz00_4846 =
												BGl_hashtablezd2getzd2zz__hashz00(BgL_tablez00_5760,
												BgL_objz00_2005);
											{	/* Unsafe/intext.scm 1011 */
												bool_t BgL_testz00_7938;

												if (STRUCTP(BgL_mz00_4846))
													{	/* Unsafe/intext.scm 1011 */
														BgL_testz00_7938 =
															(STRUCT_KEY(BgL_mz00_4846) ==
															BGl_symbol3163z00zz__intextz00);
													}
												else
													{	/* Unsafe/intext.scm 1011 */
														BgL_testz00_7938 = ((bool_t) 0);
													}
												if (BgL_testz00_7938)
													{
														obj_t BgL_mz00_7943;

														BgL_mz00_7943 = BgL_mz00_4846;
														BgL_mz00_1929 = BgL_mz00_7943;
														goto BgL_zc3anonymousza32396ze3z83_1930;
													}
												else
													{	/* Unsafe/intext.scm 1011 */
														BgL_objz00_1951 = BgL_objz00_2005;
														BgL_customz00_1952 =
															BGl_objectzd2serializa7erz75zz__intextz00(
															(BgL_objectz00_bglt) (BgL_objz00_2005));
														{	/* Unsafe/intext.scm 935 */
															obj_t BgL_arg2186z00_4488;

															{	/* Unsafe/intext.scm 935 */
																obj_t BgL_newz00_4493;

																BgL_newz00_4493 =
																	create_struct(BGl_symbol3163z00zz__intextz00,
																	(int) (((long) 4)));
																{	/* Unsafe/intext.scm 935 */
																	obj_t BgL_auxz00_7948;

																	int BgL_auxz00_7946;

																	BgL_auxz00_7948 = BINT(((long) -1));
																	BgL_auxz00_7946 = (int) (((long) 3));
																	STRUCT_SET(BgL_newz00_4493, BgL_auxz00_7946,
																		BgL_auxz00_7948);
																}
																{	/* Unsafe/intext.scm 935 */
																	obj_t BgL_auxz00_7953;

																	int BgL_auxz00_7951;

																	BgL_auxz00_7953 = BINT(((long) 0));
																	BgL_auxz00_7951 = (int) (((long) 2));
																	STRUCT_SET(BgL_newz00_4493, BgL_auxz00_7951,
																		BgL_auxz00_7953);
																}
																{	/* Unsafe/intext.scm 935 */
																	int BgL_auxz00_7956;

																	BgL_auxz00_7956 = (int) (((long) 1));
																	STRUCT_SET(BgL_newz00_4493, BgL_auxz00_7956,
																		BgL_customz00_1952);
																}
																{	/* Unsafe/intext.scm 935 */
																	int BgL_auxz00_7959;

																	BgL_auxz00_7959 = (int) (((long) 0));
																	STRUCT_SET(BgL_newz00_4493, BgL_auxz00_7959,
																		BgL_objz00_1951);
																}
																BgL_arg2186z00_4488 = BgL_newz00_4493;
															}
															BGl_hashtablezd2putz12zc0zz__hashz00
																(BgL_tablez00_5760, BgL_objz00_1951,
																BgL_arg2186z00_4488);
														}
														{	/* Unsafe/intext.scm 936 */
															long BgL_arg2411z00_4483;

															{	/* Unsafe/intext.scm 936 */
																obj_t BgL_arg2412z00_4484;

																{	/* Unsafe/intext.scm 936 */
																	BgL_objectz00_bglt BgL_objectz00_4514;

																	BgL_objectz00_4514 =
																		(BgL_objectz00_bglt) (BgL_objz00_1951);
																	{	/* Unsafe/intext.scm 936 */
																		long BgL_arg3003z00_4515;

																		{	/* Unsafe/intext.scm 936 */
																			long BgL_arg3004z00_4516;

																			BgL_arg3004z00_4516 =
																				BGL_OBJECT_CLASS_NUM
																				(BgL_objectz00_4514);
																			BgL_arg3003z00_4515 =
																				(BgL_arg3004z00_4516 - OBJECT_TYPE);
																		}
																		BgL_arg2412z00_4484 =
																			VECTOR_REF
																			(BGl_za2classesza2z00zz__objectz00,
																			(int) (BgL_arg3003z00_4515));
																}}
																BgL_arg2411z00_4483 =
																	BGl_classzd2hashzd2zz__objectz00
																	(BgL_arg2412z00_4484);
															}
															BGl_markz72z72zz__intextz00(BgL_nbrefz00_5761,
																BgL_tablez00_5760, BINT(BgL_arg2411z00_4483));
														}
														BGl_markz72z72zz__intextz00(BgL_nbrefz00_5761,
															BgL_tablez00_5760, BgL_customz00_1952);
														return BgL_customz00_1952;
													}
											}
										}
									else
										{	/* Unsafe/intext.scm 1010 */
											if (STRUCTP(BgL_objz00_2005))
												{	/* Unsafe/intext.scm 1013 */
													obj_t BgL_objz00_4860;

													BgL_objz00_4860 = BgL_objz00_2005;
													{	/* Unsafe/intext.scm 1013 */
														obj_t BgL_mz00_4861;

														BgL_mz00_4861 =
															BGl_hashtablezd2getzd2zz__hashz00
															(BgL_tablez00_5760, BgL_objz00_4860);
														{	/* Unsafe/intext.scm 1013 */
															bool_t BgL_testz00_7977;

															if (STRUCTP(BgL_mz00_4861))
																{	/* Unsafe/intext.scm 1013 */
																	BgL_testz00_7977 =
																		(STRUCT_KEY(BgL_mz00_4861) ==
																		BGl_symbol3163z00zz__intextz00);
																}
															else
																{	/* Unsafe/intext.scm 1013 */
																	BgL_testz00_7977 = ((bool_t) 0);
																}
															if (BgL_testz00_7977)
																{
																	obj_t BgL_mz00_7982;

																	BgL_mz00_7982 = BgL_mz00_4861;
																	BgL_mz00_1929 = BgL_mz00_7982;
																	goto BgL_zc3anonymousza32396ze3z83_1930;
																}
															else
																{	/* Unsafe/intext.scm 914 */
																	bool_t BgL_auxz00_7983;

																	BgL_objz00_1956 = BgL_objz00_4860;
																	{	/* Unsafe/intext.scm 942 */
																		obj_t BgL_arg2186z00_4525;

																		{	/* Unsafe/intext.scm 942 */
																			obj_t BgL_newz00_4530;

																			BgL_newz00_4530 =
																				create_struct
																				(BGl_symbol3163z00zz__intextz00,
																				(int) (((long) 4)));
																			{	/* Unsafe/intext.scm 942 */
																				obj_t BgL_auxz00_7988;

																				int BgL_auxz00_7986;

																				BgL_auxz00_7988 = BINT(((long) -1));
																				BgL_auxz00_7986 = (int) (((long) 3));
																				STRUCT_SET(BgL_newz00_4530,
																					BgL_auxz00_7986, BgL_auxz00_7988);
																			}
																			{	/* Unsafe/intext.scm 942 */
																				obj_t BgL_auxz00_7993;

																				int BgL_auxz00_7991;

																				BgL_auxz00_7993 = BINT(((long) 0));
																				BgL_auxz00_7991 = (int) (((long) 2));
																				STRUCT_SET(BgL_newz00_4530,
																					BgL_auxz00_7991, BgL_auxz00_7993);
																			}
																			{	/* Unsafe/intext.scm 942 */
																				int BgL_auxz00_7996;

																				BgL_auxz00_7996 = (int) (((long) 1));
																				STRUCT_SET(BgL_newz00_4530,
																					BgL_auxz00_7996, BFALSE);
																			}
																			{	/* Unsafe/intext.scm 942 */
																				int BgL_auxz00_7999;

																				BgL_auxz00_7999 = (int) (((long) 0));
																				STRUCT_SET(BgL_newz00_4530,
																					BgL_auxz00_7999, BgL_objz00_1956);
																			}
																			BgL_arg2186z00_4525 = BgL_newz00_4530;
																		}
																		BGl_hashtablezd2putz12zc0zz__hashz00
																			(BgL_tablez00_5760, BgL_objz00_1956,
																			BgL_arg2186z00_4525);
																	}
																	{	/* Unsafe/intext.scm 943 */
																		obj_t BgL_keyz00_1958;

																		int BgL_lenz00_1959;

																		BgL_keyz00_1958 =
																			STRUCT_KEY(BgL_objz00_1956);
																		BgL_lenz00_1959 =
																			STRUCT_LENGTH(BgL_objz00_1956);
																		BGl_markz72z72zz__intextz00
																			(BgL_nbrefz00_5761, BgL_tablez00_5760,
																			BgL_keyz00_1958);
																		{
																			long BgL_iz00_1961;

																			BgL_iz00_1961 = ((long) 0);
																		BgL_zc3anonymousza32414ze3z83_1962:
																			if (
																				(BgL_iz00_1961 <
																					(long) (BgL_lenz00_1959)))
																				{	/* Unsafe/intext.scm 946 */
																					{	/* Unsafe/intext.scm 946 */
																						obj_t BgL_arg2416z00_1964;

																						BgL_arg2416z00_1964 =
																							STRUCT_REF(BgL_objz00_1956,
																							(int) (BgL_iz00_1961));
																						BGl_markz72z72zz__intextz00
																							(BgL_nbrefz00_5761,
																							BgL_tablez00_5760,
																							BgL_arg2416z00_1964);
																					}
																					{
																						long BgL_iz00_8012;

																						BgL_iz00_8012 =
																							(BgL_iz00_1961 + ((long) 1));
																						BgL_iz00_1961 = BgL_iz00_8012;
																						goto
																							BgL_zc3anonymousza32414ze3z83_1962;
																					}
																				}
																			else
																				{	/* Unsafe/intext.scm 946 */
																					BgL_auxz00_7983 = ((bool_t) 0);
																				}
																		}
																	}
																	return BBOOL(BgL_auxz00_7983);
																}
														}
													}
												}
											else
												{	/* Unsafe/intext.scm 1012 */
													if (CELLP(BgL_objz00_2005))
														{	/* Unsafe/intext.scm 1015 */
															obj_t BgL_objz00_4872;

															BgL_objz00_4872 = BgL_objz00_2005;
															{	/* Unsafe/intext.scm 1015 */
																obj_t BgL_mz00_4873;

																BgL_mz00_4873 =
																	BGl_hashtablezd2getzd2zz__hashz00
																	(BgL_tablez00_5760, BgL_objz00_4872);
																{	/* Unsafe/intext.scm 1015 */
																	bool_t BgL_testz00_8018;

																	if (STRUCTP(BgL_mz00_4873))
																		{	/* Unsafe/intext.scm 1015 */
																			BgL_testz00_8018 =
																				(STRUCT_KEY(BgL_mz00_4873) ==
																				BGl_symbol3163z00zz__intextz00);
																		}
																	else
																		{	/* Unsafe/intext.scm 1015 */
																			BgL_testz00_8018 = ((bool_t) 0);
																		}
																	if (BgL_testz00_8018)
																		{
																			obj_t BgL_mz00_8023;

																			BgL_mz00_8023 = BgL_mz00_4873;
																			BgL_mz00_1929 = BgL_mz00_8023;
																			goto BgL_zc3anonymousza32396ze3z83_1930;
																		}
																	else
																		{	/* Unsafe/intext.scm 1015 */
																			BgL_objz00_1967 = BgL_objz00_4872;
																			{	/* Unsafe/intext.scm 950 */
																				obj_t BgL_arg2186z00_4564;

																				{	/* Unsafe/intext.scm 950 */
																					obj_t BgL_newz00_4569;

																					BgL_newz00_4569 =
																						create_struct
																						(BGl_symbol3163z00zz__intextz00,
																						(int) (((long) 4)));
																					{	/* Unsafe/intext.scm 950 */
																						obj_t BgL_auxz00_8028;

																						int BgL_auxz00_8026;

																						BgL_auxz00_8028 = BINT(((long) -1));
																						BgL_auxz00_8026 =
																							(int) (((long) 3));
																						STRUCT_SET(BgL_newz00_4569,
																							BgL_auxz00_8026, BgL_auxz00_8028);
																					}
																					{	/* Unsafe/intext.scm 950 */
																						obj_t BgL_auxz00_8033;

																						int BgL_auxz00_8031;

																						BgL_auxz00_8033 = BINT(((long) 0));
																						BgL_auxz00_8031 =
																							(int) (((long) 2));
																						STRUCT_SET(BgL_newz00_4569,
																							BgL_auxz00_8031, BgL_auxz00_8033);
																					}
																					{	/* Unsafe/intext.scm 950 */
																						int BgL_auxz00_8036;

																						BgL_auxz00_8036 =
																							(int) (((long) 1));
																						STRUCT_SET(BgL_newz00_4569,
																							BgL_auxz00_8036, BFALSE);
																					}
																					{	/* Unsafe/intext.scm 950 */
																						int BgL_auxz00_8039;

																						BgL_auxz00_8039 =
																							(int) (((long) 0));
																						STRUCT_SET(BgL_newz00_4569,
																							BgL_auxz00_8039, BgL_objz00_1967);
																					}
																					BgL_arg2186z00_4564 = BgL_newz00_4569;
																				}
																				BGl_hashtablezd2putz12zc0zz__hashz00
																					(BgL_tablez00_5760, BgL_objz00_1967,
																					BgL_arg2186z00_4564);
																			}
																			{	/* Unsafe/intext.scm 951 */
																				obj_t BgL_arg2419z00_4560;

																				BgL_arg2419z00_4560 =
																					CELL_REF(BgL_objz00_1967);
																				{
																					obj_t BgL_objz00_8044;

																					BgL_objz00_8044 = BgL_arg2419z00_4560;
																					BgL_objz00_2005 = BgL_objz00_8044;
																					goto BGl_markz72z72zz__intextz00;
																				}
																			}
																		}
																}
															}
														}
													else
														{	/* Unsafe/intext.scm 1014 */
															if (BGL_WEAKPTRP(BgL_objz00_2005))
																{	/* Unsafe/intext.scm 1017 */
																	obj_t BgL_objz00_4885;

																	BgL_objz00_4885 = BgL_objz00_2005;
																	{	/* Unsafe/intext.scm 1017 */
																		obj_t BgL_mz00_4886;

																		BgL_mz00_4886 =
																			BGl_hashtablezd2getzd2zz__hashz00
																			(BgL_tablez00_5760, BgL_objz00_4885);
																		{	/* Unsafe/intext.scm 1017 */
																			bool_t BgL_testz00_8048;

																			if (STRUCTP(BgL_mz00_4886))
																				{	/* Unsafe/intext.scm 1017 */
																					BgL_testz00_8048 =
																						(STRUCT_KEY(BgL_mz00_4886) ==
																						BGl_symbol3163z00zz__intextz00);
																				}
																			else
																				{	/* Unsafe/intext.scm 1017 */
																					BgL_testz00_8048 = ((bool_t) 0);
																				}
																			if (BgL_testz00_8048)
																				{
																					obj_t BgL_mz00_8053;

																					BgL_mz00_8053 = BgL_mz00_4886;
																					BgL_mz00_1929 = BgL_mz00_8053;
																					goto
																						BgL_zc3anonymousza32396ze3z83_1930;
																				}
																			else
																				{	/* Unsafe/intext.scm 1017 */
																					BgL_objz00_1970 = BgL_objz00_4885;
																					{	/* Unsafe/intext.scm 955 */
																						obj_t BgL_arg2186z00_4594;

																						{	/* Unsafe/intext.scm 955 */
																							obj_t BgL_newz00_4599;

																							BgL_newz00_4599 =
																								create_struct
																								(BGl_symbol3163z00zz__intextz00,
																								(int) (((long) 4)));
																							{	/* Unsafe/intext.scm 955 */
																								obj_t BgL_auxz00_8058;

																								int BgL_auxz00_8056;

																								BgL_auxz00_8058 =
																									BINT(((long) -1));
																								BgL_auxz00_8056 =
																									(int) (((long) 3));
																								STRUCT_SET(BgL_newz00_4599,
																									BgL_auxz00_8056,
																									BgL_auxz00_8058);
																							}
																							{	/* Unsafe/intext.scm 955 */
																								obj_t BgL_auxz00_8063;

																								int BgL_auxz00_8061;

																								BgL_auxz00_8063 =
																									BINT(((long) 0));
																								BgL_auxz00_8061 =
																									(int) (((long) 2));
																								STRUCT_SET(BgL_newz00_4599,
																									BgL_auxz00_8061,
																									BgL_auxz00_8063);
																							}
																							{	/* Unsafe/intext.scm 955 */
																								int BgL_auxz00_8066;

																								BgL_auxz00_8066 =
																									(int) (((long) 1));
																								STRUCT_SET(BgL_newz00_4599,
																									BgL_auxz00_8066, BFALSE);
																							}
																							{	/* Unsafe/intext.scm 955 */
																								int BgL_auxz00_8069;

																								BgL_auxz00_8069 =
																									(int) (((long) 0));
																								STRUCT_SET(BgL_newz00_4599,
																									BgL_auxz00_8069,
																									BgL_objz00_1970);
																							}
																							BgL_arg2186z00_4594 =
																								BgL_newz00_4599;
																						}
																						BGl_hashtablezd2putz12zc0zz__hashz00
																							(BgL_tablez00_5760,
																							BgL_objz00_1970,
																							BgL_arg2186z00_4594);
																					}
																					{	/* Unsafe/intext.scm 956 */
																						obj_t BgL_arg2421z00_4590;

																						BgL_arg2421z00_4590 =
																							weakptr_data(BgL_objz00_1970);
																						{
																							obj_t BgL_objz00_8074;

																							BgL_objz00_8074 =
																								BgL_arg2421z00_4590;
																							BgL_objz00_2005 = BgL_objz00_8074;
																							goto BGl_markz72z72zz__intextz00;
																						}
																					}
																				}
																		}
																	}
																}
															else
																{	/* Unsafe/intext.scm 1016 */
																	if (SYMBOLP(BgL_objz00_2005))
																		{	/* Unsafe/intext.scm 1019 */
																			obj_t BgL_arg2447z00_2014;

																			{	/* Unsafe/intext.scm 1019 */
																				obj_t BgL_res3047z00_4900;

																				{	/* Unsafe/intext.scm 1019 */
																					obj_t BgL_symbolz00_4898;

																					BgL_symbolz00_4898 = BgL_objz00_2005;
																					{	/* Unsafe/intext.scm 1019 */
																						obj_t BgL_arg2979z00_4899;

																						BgL_arg2979z00_4899 =
																							SYMBOL_TO_STRING
																							(BgL_symbolz00_4898);
																						BgL_res3047z00_4900 =
																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																							(BgL_arg2979z00_4899);
																					}
																				}
																				BgL_arg2447z00_2014 =
																					BgL_res3047z00_4900;
																			}
																			{
																				obj_t BgL_objz00_8079;

																				BgL_objz00_8079 = BgL_arg2447z00_2014;
																				BgL_objz00_2005 = BgL_objz00_8079;
																				goto BGl_markz72z72zz__intextz00;
																			}
																		}
																	else
																		{	/* Unsafe/intext.scm 1018 */
																			if (KEYWORDP(BgL_objz00_2005))
																				{	/* Unsafe/intext.scm 1021 */
																					obj_t BgL_arg2449z00_2016;

																					{	/* Unsafe/intext.scm 1021 */
																						obj_t BgL_res3048z00_4904;

																						{	/* Unsafe/intext.scm 1021 */
																							obj_t BgL_keywordz00_4902;

																							BgL_keywordz00_4902 =
																								BgL_objz00_2005;
																							{	/* Unsafe/intext.scm 1021 */
																								obj_t BgL_arg2976z00_4903;

																								BgL_arg2976z00_4903 =
																									KEYWORD_TO_STRING
																									(BgL_keywordz00_4902);
																								BgL_res3048z00_4904 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg2976z00_4903);
																							}
																						}
																						BgL_arg2449z00_2016 =
																							BgL_res3048z00_4904;
																					}
																					{
																						obj_t BgL_objz00_8084;

																						BgL_objz00_8084 =
																							BgL_arg2449z00_2016;
																						BgL_objz00_2005 = BgL_objz00_8084;
																						goto BGl_markz72z72zz__intextz00;
																					}
																				}
																			else
																				{	/* Unsafe/intext.scm 1020 */
																					if (STRINGP(BgL_objz00_2005))
																						{	/* Unsafe/intext.scm 1023 */
																							obj_t BgL_objz00_4906;

																							BgL_objz00_4906 = BgL_objz00_2005;
																							{	/* Unsafe/intext.scm 1023 */
																								obj_t BgL_mz00_4907;

																								BgL_mz00_4907 =
																									BGl_hashtablezd2getzd2zz__hashz00
																									(BgL_tablez00_5760,
																									BgL_objz00_4906);
																								{	/* Unsafe/intext.scm 1023 */
																									bool_t BgL_testz00_8088;

																									if (STRUCTP(BgL_mz00_4907))
																										{	/* Unsafe/intext.scm 1023 */
																											BgL_testz00_8088 =
																												(STRUCT_KEY
																												(BgL_mz00_4907) ==
																												BGl_symbol3163z00zz__intextz00);
																										}
																									else
																										{	/* Unsafe/intext.scm 1023 */
																											BgL_testz00_8088 =
																												((bool_t) 0);
																										}
																									if (BgL_testz00_8088)
																										{
																											obj_t BgL_mz00_8093;

																											BgL_mz00_8093 =
																												BgL_mz00_4907;
																											BgL_mz00_1929 =
																												BgL_mz00_8093;
																											goto
																												BgL_zc3anonymousza32396ze3z83_1930;
																										}
																									else
																										{	/* Unsafe/intext.scm 1023 */
																											return
																												BGl_putzd2markz12zc0zz__intextz00
																												(BgL_tablez00_5760,
																												BgL_objz00_4906,
																												((bool_t) 0));
																										}
																								}
																							}
																						}
																					else
																						{	/* Unsafe/intext.scm 1022 */
																							if (UCS2_STRINGP(BgL_objz00_2005))
																								{	/* Unsafe/intext.scm 1025 */
																									obj_t BgL_objz00_4920;

																									BgL_objz00_4920 =
																										BgL_objz00_2005;
																									{	/* Unsafe/intext.scm 1025 */
																										obj_t BgL_mz00_4921;

																										BgL_mz00_4921 =
																											BGl_hashtablezd2getzd2zz__hashz00
																											(BgL_tablez00_5760,
																											BgL_objz00_4920);
																										{	/* Unsafe/intext.scm 1025 */
																											bool_t BgL_testz00_8098;

																											if (STRUCTP
																												(BgL_mz00_4921))
																												{	/* Unsafe/intext.scm 1025 */
																													BgL_testz00_8098 =
																														(STRUCT_KEY
																														(BgL_mz00_4921) ==
																														BGl_symbol3163z00zz__intextz00);
																												}
																											else
																												{	/* Unsafe/intext.scm 1025 */
																													BgL_testz00_8098 =
																														((bool_t) 0);
																												}
																											if (BgL_testz00_8098)
																												{
																													obj_t BgL_mz00_8103;

																													BgL_mz00_8103 =
																														BgL_mz00_4921;
																													BgL_mz00_1929 =
																														BgL_mz00_8103;
																													goto
																														BgL_zc3anonymousza32396ze3z83_1930;
																												}
																											else
																												{	/* Unsafe/intext.scm 1025 */
																													BgL_objz00_1991 =
																														BgL_objz00_4920;
																													{	/* Unsafe/intext.scm 981 */
																														obj_t
																															BgL_strz00_4746;
																														BgL_strz00_4746 =
																															ucs2_string_to_utf8_string
																															(BgL_objz00_1991);
																														{	/* Unsafe/intext.scm 981 */
																															obj_t
																																BgL_arg2186z00_4751;
																															{	/* Unsafe/intext.scm 981 */
																																obj_t
																																	BgL_newz00_4756;
																																BgL_newz00_4756
																																	=
																																	create_struct
																																	(BGl_symbol3163z00zz__intextz00,
																																	(int) (((long)
																																			4)));
																																{	/* Unsafe/intext.scm 981 */
																																	obj_t
																																		BgL_auxz00_8109;
																																	int
																																		BgL_auxz00_8107;
																																	BgL_auxz00_8109
																																		=
																																		BINT(((long)
																																			-1));
																																	BgL_auxz00_8107
																																		=
																																		(int) ((
																																			(long)
																																			3));
																																	STRUCT_SET
																																		(BgL_newz00_4756,
																																		BgL_auxz00_8107,
																																		BgL_auxz00_8109);
																																}
																																{	/* Unsafe/intext.scm 981 */
																																	obj_t
																																		BgL_auxz00_8114;
																																	int
																																		BgL_auxz00_8112;
																																	BgL_auxz00_8114
																																		=
																																		BINT(((long)
																																			0));
																																	BgL_auxz00_8112
																																		=
																																		(int) ((
																																			(long)
																																			2));
																																	STRUCT_SET
																																		(BgL_newz00_4756,
																																		BgL_auxz00_8112,
																																		BgL_auxz00_8114);
																																}
																																{	/* Unsafe/intext.scm 981 */
																																	int
																																		BgL_auxz00_8117;
																																	BgL_auxz00_8117
																																		=
																																		(int) ((
																																			(long)
																																			1));
																																	STRUCT_SET
																																		(BgL_newz00_4756,
																																		BgL_auxz00_8117,
																																		BgL_strz00_4746);
																																}
																																{	/* Unsafe/intext.scm 981 */
																																	int
																																		BgL_auxz00_8120;
																																	BgL_auxz00_8120
																																		=
																																		(int) ((
																																			(long)
																																			0));
																																	STRUCT_SET
																																		(BgL_newz00_4756,
																																		BgL_auxz00_8120,
																																		BgL_objz00_1991);
																																}
																																BgL_arg2186z00_4751
																																	=
																																	BgL_newz00_4756;
																															}
																															BGl_hashtablezd2putz12zc0zz__hashz00
																																(BgL_tablez00_5760,
																																BgL_objz00_1991,
																																BgL_arg2186z00_4751);
																														}
																														{
																															obj_t
																																BgL_objz00_8124;
																															BgL_objz00_8124 =
																																BgL_strz00_4746;
																															BgL_objz00_2005 =
																																BgL_objz00_8124;
																															goto
																																BGl_markz72z72zz__intextz00;
																														}
																													}
																												}
																										}
																									}
																								}
																							else
																								{	/* Unsafe/intext.scm 1024 */
																									if (VECTORP(BgL_objz00_2005))
																										{	/* Unsafe/intext.scm 1027 */
																											obj_t BgL_objz00_4933;

																											BgL_objz00_4933 =
																												BgL_objz00_2005;
																											{	/* Unsafe/intext.scm 1027 */
																												obj_t BgL_mz00_4934;

																												BgL_mz00_4934 =
																													BGl_hashtablezd2getzd2zz__hashz00
																													(BgL_tablez00_5760,
																													BgL_objz00_4933);
																												{	/* Unsafe/intext.scm 1027 */
																													bool_t
																														BgL_testz00_8128;
																													if (STRUCTP
																														(BgL_mz00_4934))
																														{	/* Unsafe/intext.scm 1027 */
																															BgL_testz00_8128 =
																																(STRUCT_KEY
																																(BgL_mz00_4934)
																																==
																																BGl_symbol3163z00zz__intextz00);
																														}
																													else
																														{	/* Unsafe/intext.scm 1027 */
																															BgL_testz00_8128 =
																																((bool_t) 0);
																														}
																													if (BgL_testz00_8128)
																														{
																															obj_t
																																BgL_mz00_8133;
																															BgL_mz00_8133 =
																																BgL_mz00_4934;
																															BgL_mz00_1929 =
																																BgL_mz00_8133;
																															goto
																																BgL_zc3anonymousza32396ze3z83_1930;
																														}
																													else
																														{	/* Unsafe/intext.scm 914 */
																															bool_t
																																BgL_auxz00_8134;
																															BgL_objz00_1973 =
																																BgL_objz00_4933;
																															{	/* Unsafe/intext.scm 960 */
																																obj_t
																																	BgL_arg2186z00_4624;
																																{	/* Unsafe/intext.scm 960 */
																																	obj_t
																																		BgL_newz00_4629;
																																	BgL_newz00_4629
																																		=
																																		create_struct
																																		(BGl_symbol3163z00zz__intextz00,
																																		(int) ((
																																				(long)
																																				4)));
																																	{	/* Unsafe/intext.scm 960 */
																																		obj_t
																																			BgL_auxz00_8139;
																																		int
																																			BgL_auxz00_8137;
																																		BgL_auxz00_8139
																																			=
																																			BINT((
																																				(long)
																																				-1));
																																		BgL_auxz00_8137
																																			=
																																			(int) ((
																																				(long)
																																				3));
																																		STRUCT_SET
																																			(BgL_newz00_4629,
																																			BgL_auxz00_8137,
																																			BgL_auxz00_8139);
																																	}
																																	{	/* Unsafe/intext.scm 960 */
																																		obj_t
																																			BgL_auxz00_8144;
																																		int
																																			BgL_auxz00_8142;
																																		BgL_auxz00_8144
																																			=
																																			BINT((
																																				(long)
																																				0));
																																		BgL_auxz00_8142
																																			=
																																			(int) ((
																																				(long)
																																				2));
																																		STRUCT_SET
																																			(BgL_newz00_4629,
																																			BgL_auxz00_8142,
																																			BgL_auxz00_8144);
																																	}
																																	{	/* Unsafe/intext.scm 960 */
																																		int
																																			BgL_auxz00_8147;
																																		BgL_auxz00_8147
																																			=
																																			(int) ((
																																				(long)
																																				1));
																																		STRUCT_SET
																																			(BgL_newz00_4629,
																																			BgL_auxz00_8147,
																																			BFALSE);
																																	}
																																	{	/* Unsafe/intext.scm 960 */
																																		int
																																			BgL_auxz00_8150;
																																		BgL_auxz00_8150
																																			=
																																			(int) ((
																																				(long)
																																				0));
																																		STRUCT_SET
																																			(BgL_newz00_4629,
																																			BgL_auxz00_8150,
																																			BgL_objz00_1973);
																																	}
																																	BgL_arg2186z00_4624
																																		=
																																		BgL_newz00_4629;
																																}
																																BGl_hashtablezd2putz12zc0zz__hashz00
																																	(BgL_tablez00_5760,
																																	BgL_objz00_1973,
																																	BgL_arg2186z00_4624);
																															}
																															{	/* Unsafe/intext.scm 961 */
																																int
																																	BgL_lenz00_1975;
																																BgL_lenz00_1975
																																	=
																																	VECTOR_LENGTH
																																	(BgL_objz00_1973);
																																{
																																	long
																																		BgL_iz00_1977;
																																	BgL_iz00_1977
																																		=
																																		((long) 0);
																																BgL_zc3anonymousza32423ze3z83_1978:
																																	if (
																																		(BgL_iz00_1977
																																			<
																																			(long)
																																			(BgL_lenz00_1975)))
																																		{	/* Unsafe/intext.scm 962 */
																																			{	/* Unsafe/intext.scm 962 */
																																				obj_t
																																					BgL_arg2425z00_1980;
																																				BgL_arg2425z00_1980
																																					=
																																					VECTOR_REF
																																					(BgL_objz00_1973,
																																					(int)
																																					(BgL_iz00_1977));
																																				BGl_markz72z72zz__intextz00
																																					(BgL_nbrefz00_5761,
																																					BgL_tablez00_5760,
																																					BgL_arg2425z00_1980);
																																			}
																																			{
																																				long
																																					BgL_iz00_8161;
																																				BgL_iz00_8161
																																					=
																																					(BgL_iz00_1977
																																					+
																																					((long) 1));
																																				BgL_iz00_1977
																																					=
																																					BgL_iz00_8161;
																																				goto
																																					BgL_zc3anonymousza32423ze3z83_1978;
																																			}
																																		}
																																	else
																																		{	/* Unsafe/intext.scm 962 */
																																			BgL_auxz00_8134
																																				=
																																				(
																																				(bool_t)
																																				0);
																																		}
																																}
																															}
																															return
																																BBOOL
																																(BgL_auxz00_8134);
																														}
																												}
																											}
																										}
																									else
																										{	/* Unsafe/intext.scm 1026 */
																											if (BGL_HVECTORP
																												(BgL_objz00_2005))
																												{	/* Unsafe/intext.scm 1029 */
																													obj_t BgL_mz00_4947;

																													BgL_mz00_4947 =
																														BGl_hashtablezd2getzd2zz__hashz00
																														(BgL_tablez00_5760,
																														BgL_objz00_2005);
																													{	/* Unsafe/intext.scm 1029 */
																														bool_t
																															BgL_testz00_8167;
																														if (STRUCTP
																															(BgL_mz00_4947))
																															{	/* Unsafe/intext.scm 1029 */
																																BgL_testz00_8167
																																	=
																																	(STRUCT_KEY
																																	(BgL_mz00_4947)
																																	==
																																	BGl_symbol3163z00zz__intextz00);
																															}
																														else
																															{	/* Unsafe/intext.scm 1029 */
																																BgL_testz00_8167
																																	=
																																	((bool_t) 0);
																															}
																														if (BgL_testz00_8167)
																															{
																																obj_t
																																	BgL_mz00_8172;
																																BgL_mz00_8172 =
																																	BgL_mz00_4947;
																																BgL_mz00_1929 =
																																	BgL_mz00_8172;
																																goto
																																	BgL_zc3anonymousza32396ze3z83_1930;
																															}
																														else
																															{	/* Unsafe/intext.scm 1029 */
																																return
																																	BGl_putzd2markz12zc0zz__intextz00
																																	(BgL_tablez00_5760,
																																	BgL_objz00_2005,
																																	((bool_t) 0));
																															}
																													}
																												}
																											else
																												{	/* Unsafe/intext.scm 1028 */
																													if (TVECTORP
																														(BgL_objz00_2005))
																														{	/* Unsafe/intext.scm 1031 */
																															obj_t
																																BgL_objz00_4960;
																															BgL_objz00_4960 =
																																BgL_objz00_2005;
																															{	/* Unsafe/intext.scm 1031 */
																																obj_t
																																	BgL_mz00_4961;
																																BgL_mz00_4961 =
																																	BGl_hashtablezd2getzd2zz__hashz00
																																	(BgL_tablez00_5760,
																																	BgL_objz00_4960);
																																{	/* Unsafe/intext.scm 1031 */
																																	bool_t
																																		BgL_testz00_8177;
																																	if (STRUCTP
																																		(BgL_mz00_4961))
																																		{	/* Unsafe/intext.scm 1031 */
																																			BgL_testz00_8177
																																				=
																																				(STRUCT_KEY
																																				(BgL_mz00_4961)
																																				==
																																				BGl_symbol3163z00zz__intextz00);
																																		}
																																	else
																																		{	/* Unsafe/intext.scm 1031 */
																																			BgL_testz00_8177
																																				=
																																				(
																																				(bool_t)
																																				0);
																																		}
																																	if (BgL_testz00_8177)
																																		{
																																			obj_t
																																				BgL_mz00_8182;
																																			BgL_mz00_8182
																																				=
																																				BgL_mz00_4961;
																																			BgL_mz00_1929
																																				=
																																				BgL_mz00_8182;
																																			goto
																																				BgL_zc3anonymousza32396ze3z83_1930;
																																		}
																																	else
																																		{	/* Unsafe/intext.scm 1031 */
																																			BgL_objz00_1983
																																				=
																																				BgL_objz00_4960;
																																			{	/* Unsafe/intext.scm 966 */
																																				obj_t
																																					BgL_vz00_4657;
																																				BgL_vz00_4657
																																					=
																																					BGl_tvectorzd2ze3vectorz31zz__tvectorz00
																																					(BgL_objz00_1983);
																																				{	/* Unsafe/intext.scm 966 */
																																					obj_t
																																						BgL_arg2186z00_4662;
																																					{	/* Unsafe/intext.scm 966 */
																																						obj_t
																																							BgL_newz00_4667;
																																						BgL_newz00_4667
																																							=
																																							create_struct
																																							(BGl_symbol3163z00zz__intextz00,
																																							(int)
																																							(((long) 4)));
																																						{	/* Unsafe/intext.scm 966 */
																																							obj_t
																																								BgL_auxz00_8188;
																																							int
																																								BgL_auxz00_8186;
																																							BgL_auxz00_8188
																																								=
																																								BINT
																																								(
																																								((long) -1));
																																							BgL_auxz00_8186
																																								=
																																								(int)
																																								(
																																								((long) 3));
																																							STRUCT_SET
																																								(BgL_newz00_4667,
																																								BgL_auxz00_8186,
																																								BgL_auxz00_8188);
																																						}
																																						{	/* Unsafe/intext.scm 966 */
																																							obj_t
																																								BgL_auxz00_8193;
																																							int
																																								BgL_auxz00_8191;
																																							BgL_auxz00_8193
																																								=
																																								BINT
																																								(
																																								((long) 0));
																																							BgL_auxz00_8191
																																								=
																																								(int)
																																								(
																																								((long) 2));
																																							STRUCT_SET
																																								(BgL_newz00_4667,
																																								BgL_auxz00_8191,
																																								BgL_auxz00_8193);
																																						}
																																						{	/* Unsafe/intext.scm 966 */
																																							int
																																								BgL_auxz00_8196;
																																							BgL_auxz00_8196
																																								=
																																								(int)
																																								(
																																								((long) 1));
																																							STRUCT_SET
																																								(BgL_newz00_4667,
																																								BgL_auxz00_8196,
																																								BgL_vz00_4657);
																																						}
																																						{	/* Unsafe/intext.scm 966 */
																																							int
																																								BgL_auxz00_8199;
																																							BgL_auxz00_8199
																																								=
																																								(int)
																																								(
																																								((long) 0));
																																							STRUCT_SET
																																								(BgL_newz00_4667,
																																								BgL_auxz00_8199,
																																								BgL_objz00_1983);
																																						}
																																						BgL_arg2186z00_4662
																																							=
																																							BgL_newz00_4667;
																																					}
																																					BGl_hashtablezd2putz12zc0zz__hashz00
																																						(BgL_tablez00_5760,
																																						BgL_objz00_1983,
																																						BgL_arg2186z00_4662);
																																				}
																																				{	/* Unsafe/intext.scm 966 */
																																					obj_t
																																						BgL_arg2428z00_4658;
																																					BgL_arg2428z00_4658
																																						=
																																						BGl_tvectorzd2idzd2zz__tvectorz00
																																						(BgL_objz00_1983);
																																					BGl_markz72z72zz__intextz00
																																						(BgL_nbrefz00_5761,
																																						BgL_tablez00_5760,
																																						BgL_arg2428z00_4658);
																																				}
																																				{
																																					obj_t
																																						BgL_objz00_8205;
																																					BgL_objz00_8205
																																						=
																																						BgL_vz00_4657;
																																					BgL_objz00_2005
																																						=
																																						BgL_objz00_8205;
																																					goto
																																						BGl_markz72z72zz__intextz00;
																																				}
																																			}
																																		}
																																}
																															}
																														}
																													else
																														{	/* Unsafe/intext.scm 1030 */
																															if (PROCEDUREP
																																(BgL_objz00_2005))
																																{	/* Unsafe/intext.scm 1033 */
																																	obj_t
																																		BgL_objz00_4973;
																																	BgL_objz00_4973
																																		=
																																		BgL_objz00_2005;
																																	{	/* Unsafe/intext.scm 1033 */
																																		obj_t
																																			BgL_mz00_4974;
																																		BgL_mz00_4974
																																			=
																																			BGl_hashtablezd2getzd2zz__hashz00
																																			(BgL_tablez00_5760,
																																			BgL_objz00_4973);
																																		{	/* Unsafe/intext.scm 1033 */
																																			bool_t
																																				BgL_testz00_8209;
																																			if (STRUCTP(BgL_mz00_4974))
																																				{	/* Unsafe/intext.scm 1033 */
																																					BgL_testz00_8209
																																						=
																																						(STRUCT_KEY
																																						(BgL_mz00_4974)
																																						==
																																						BGl_symbol3163z00zz__intextz00);
																																				}
																																			else
																																				{	/* Unsafe/intext.scm 1033 */
																																					BgL_testz00_8209
																																						=
																																						(
																																						(bool_t)
																																						0);
																																				}
																																			if (BgL_testz00_8209)
																																				{
																																					obj_t
																																						BgL_mz00_8214;
																																					BgL_mz00_8214
																																						=
																																						BgL_mz00_4974;
																																					BgL_mz00_1929
																																						=
																																						BgL_mz00_8214;
																																					goto
																																						BgL_zc3anonymousza32396ze3z83_1930;
																																				}
																																			else
																																				{	/* Unsafe/intext.scm 1033 */
																																					return
																																						PROCEDURE_ENTRY
																																						(BGl_za2procedurezd2ze3stringza2z31zz__intextz00)
																																						(BGl_za2procedurezd2ze3stringza2z31zz__intextz00,
																																						BgL_objz00_4973,
																																						BEOA);
																																				}
																																		}
																																	}
																																}
																															else
																																{	/* Unsafe/intext.scm 1032 */
																																	if (CUSTOMP
																																		(BgL_objz00_2005))
																																		{	/* Unsafe/intext.scm 1035 */
																																			obj_t
																																				BgL_mz00_4988;
																																			BgL_mz00_4988
																																				=
																																				BGl_hashtablezd2getzd2zz__hashz00
																																				(BgL_tablez00_5760,
																																				BgL_objz00_2005);
																																			{	/* Unsafe/intext.scm 1035 */
																																				bool_t
																																					BgL_testz00_8220;
																																				if (STRUCTP(BgL_mz00_4988))
																																					{	/* Unsafe/intext.scm 1035 */
																																						BgL_testz00_8220
																																							=
																																							(STRUCT_KEY
																																							(BgL_mz00_4988)
																																							==
																																							BGl_symbol3163z00zz__intextz00);
																																					}
																																				else
																																					{	/* Unsafe/intext.scm 1035 */
																																						BgL_testz00_8220
																																							=
																																							(
																																							(bool_t)
																																							0);
																																					}
																																				if (BgL_testz00_8220)
																																					{
																																						obj_t
																																							BgL_mz00_8225;
																																						BgL_mz00_8225
																																							=
																																							BgL_mz00_4988;
																																						BgL_mz00_1929
																																							=
																																							BgL_mz00_8225;
																																						goto
																																							BgL_zc3anonymousza32396ze3z83_1930;
																																					}
																																				else
																																					{	/* Unsafe/intext.scm 1035 */
																																						BgL_objz00_1994
																																							=
																																							BgL_objz00_2005;
																																						{	/* Unsafe/intext.scm 987 */
																																							obj_t
																																								BgL_vz00_4777;
																																							{	/* Unsafe/intext.scm 987 */
																																								obj_t
																																									BgL_fun2435z00_4778;
																																								{	/* Unsafe/intext.scm 987 */
																																									char
																																										*BgL_arg2434z00_4779;
																																									BgL_arg2434z00_4779
																																										=
																																										CUSTOM_IDENTIFIER
																																										(BgL_objz00_1994);
																																									{	/* Unsafe/intext.scm 987 */
																																										obj_t
																																											BgL_cellz00_4782;
																																										BgL_cellz00_4782
																																											=
																																											BGl_assocz00zz__r4_pairs_and_lists_6_3z00
																																											(string_to_bstring
																																											(BgL_arg2434z00_4779),
																																											BGl_za2customzd2serializa7ationza2z75zz__intextz00);
																																										if (PAIRP(BgL_cellz00_4782))
																																											{	/* Unsafe/intext.scm 987 */
																																												BgL_fun2435z00_4778
																																													=
																																													CAR
																																													(CDR
																																													(BgL_cellz00_4782));
																																											}
																																										else
																																											{	/* Unsafe/intext.scm 987 */
																																												BgL_fun2435z00_4778
																																													=
																																													BGl_errorz00zz__errorz00
																																													(BGl_symbol3168z00zz__intextz00,
																																													BGl_string3169z00zz__intextz00,
																																													string_to_bstring
																																													(BgL_arg2434z00_4779));
																																											}
																																									}
																																								}
																																								BgL_vz00_4777
																																									=
																																									PROCEDURE_ENTRY
																																									(BgL_fun2435z00_4778)
																																									(BgL_fun2435z00_4778,
																																									BgL_objz00_1994,
																																									BEOA);
																																							}
																																							{	/* Unsafe/intext.scm 987 */
																																								obj_t
																																									BgL_arg2186z00_4792;
																																								{	/* Unsafe/intext.scm 987 */
																																									obj_t
																																										BgL_newz00_4797;
																																									BgL_newz00_4797
																																										=
																																										create_struct
																																										(BGl_symbol3163z00zz__intextz00,
																																										(int)
																																										(((long) 4)));
																																									{	/* Unsafe/intext.scm 987 */
																																										obj_t
																																											BgL_auxz00_8241;
																																										int
																																											BgL_auxz00_8239;
																																										BgL_auxz00_8241
																																											=
																																											BINT
																																											(
																																											((long) -1));
																																										BgL_auxz00_8239
																																											=
																																											(int)
																																											(
																																											((long) 3));
																																										STRUCT_SET
																																											(BgL_newz00_4797,
																																											BgL_auxz00_8239,
																																											BgL_auxz00_8241);
																																									}
																																									{	/* Unsafe/intext.scm 987 */
																																										obj_t
																																											BgL_auxz00_8246;
																																										int
																																											BgL_auxz00_8244;
																																										BgL_auxz00_8246
																																											=
																																											BINT
																																											(
																																											((long) 0));
																																										BgL_auxz00_8244
																																											=
																																											(int)
																																											(
																																											((long) 2));
																																										STRUCT_SET
																																											(BgL_newz00_4797,
																																											BgL_auxz00_8244,
																																											BgL_auxz00_8246);
																																									}
																																									{	/* Unsafe/intext.scm 987 */
																																										int
																																											BgL_auxz00_8249;
																																										BgL_auxz00_8249
																																											=
																																											(int)
																																											(
																																											((long) 1));
																																										STRUCT_SET
																																											(BgL_newz00_4797,
																																											BgL_auxz00_8249,
																																											BgL_vz00_4777);
																																									}
																																									{	/* Unsafe/intext.scm 987 */
																																										int
																																											BgL_auxz00_8252;
																																										BgL_auxz00_8252
																																											=
																																											(int)
																																											(
																																											((long) 0));
																																										STRUCT_SET
																																											(BgL_newz00_4797,
																																											BgL_auxz00_8252,
																																											BgL_objz00_1994);
																																									}
																																									BgL_arg2186z00_4792
																																										=
																																										BgL_newz00_4797;
																																								}
																																								BGl_hashtablezd2putz12zc0zz__hashz00
																																									(BgL_tablez00_5760,
																																									BgL_objz00_1994,
																																									BgL_arg2186z00_4792);
																																							}
																																							{
																																								obj_t
																																									BgL_objz00_8256;
																																								BgL_objz00_8256
																																									=
																																									BgL_vz00_4777;
																																								BgL_objz00_2005
																																									=
																																									BgL_objz00_8256;
																																								goto
																																									BGl_markz72z72zz__intextz00;
																																							}
																																						}
																																					}
																																			}
																																		}
																																	else
																																		{	/* Unsafe/intext.scm 1034 */
																																			if (PROCESSP(BgL_objz00_2005))
																																				{	/* Unsafe/intext.scm 1037 */
																																					obj_t
																																						BgL_mz00_5001;
																																					BgL_mz00_5001
																																						=
																																						BGl_hashtablezd2getzd2zz__hashz00
																																						(BgL_tablez00_5760,
																																						BgL_objz00_2005);
																																					{	/* Unsafe/intext.scm 1037 */
																																						bool_t
																																							BgL_testz00_8260;
																																						if (STRUCTP(BgL_mz00_5001))
																																							{	/* Unsafe/intext.scm 1037 */
																																								BgL_testz00_8260
																																									=
																																									(STRUCT_KEY
																																									(BgL_mz00_5001)
																																									==
																																									BGl_symbol3163z00zz__intextz00);
																																							}
																																						else
																																							{	/* Unsafe/intext.scm 1037 */
																																								BgL_testz00_8260
																																									=
																																									(
																																									(bool_t)
																																									0);
																																							}
																																						if (BgL_testz00_8260)
																																							{
																																								obj_t
																																									BgL_mz00_8265;
																																								BgL_mz00_8265
																																									=
																																									BgL_mz00_5001;
																																								BgL_mz00_1929
																																									=
																																									BgL_mz00_8265;
																																								goto
																																									BgL_zc3anonymousza32396ze3z83_1930;
																																							}
																																						else
																																							{	/* Unsafe/intext.scm 1037 */
																																								return
																																									PROCEDURE_ENTRY
																																									(BGl_za2processzd2ze3stringza2z31zz__intextz00)
																																									(BGl_za2processzd2ze3stringza2z31zz__intextz00,
																																									BgL_objz00_2005,
																																									BEOA);
																																							}
																																					}
																																				}
																																			else
																																				{	/* Unsafe/intext.scm 1036 */
																																					if (OPAQUEP(BgL_objz00_2005))
																																						{	/* Unsafe/intext.scm 1039 */
																																							obj_t
																																								BgL_objz00_5014;
																																							BgL_objz00_5014
																																								=
																																								BgL_objz00_2005;
																																							{	/* Unsafe/intext.scm 1039 */
																																								obj_t
																																									BgL_mz00_5015;
																																								BgL_mz00_5015
																																									=
																																									BGl_hashtablezd2getzd2zz__hashz00
																																									(BgL_tablez00_5760,
																																									BgL_objz00_5014);
																																								{	/* Unsafe/intext.scm 1039 */
																																									bool_t
																																										BgL_testz00_8271;
																																									if (STRUCTP(BgL_mz00_5015))
																																										{	/* Unsafe/intext.scm 1039 */
																																											BgL_testz00_8271
																																												=
																																												(STRUCT_KEY
																																												(BgL_mz00_5015)
																																												==
																																												BGl_symbol3163z00zz__intextz00);
																																										}
																																									else
																																										{	/* Unsafe/intext.scm 1039 */
																																											BgL_testz00_8271
																																												=
																																												(
																																												(bool_t)
																																												0);
																																										}
																																									if (BgL_testz00_8271)
																																										{
																																											obj_t
																																												BgL_mz00_8276;
																																											BgL_mz00_8276
																																												=
																																												BgL_mz00_5015;
																																											BgL_mz00_1929
																																												=
																																												BgL_mz00_8276;
																																											goto
																																												BgL_zc3anonymousza32396ze3z83_1930;
																																										}
																																									else
																																										{	/* Unsafe/intext.scm 1039 */
																																											return
																																												PROCEDURE_ENTRY
																																												(BGl_za2opaquezd2ze3stringza2z31zz__intextz00)
																																												(BGl_za2opaquezd2ze3stringza2z31zz__intextz00,
																																												BgL_objz00_5014,
																																												BEOA);
																																										}
																																								}
																																							}
																																						}
																																					else
																																						{	/* Unsafe/intext.scm 1038 */
																																							if (POINTERP(BgL_objz00_2005))
																																								{	/* Unsafe/intext.scm 1041 */
																																									obj_t
																																										BgL_mz00_5028;
																																									BgL_mz00_5028
																																										=
																																										BGl_hashtablezd2getzd2zz__hashz00
																																										(BgL_tablez00_5760,
																																										BgL_objz00_2005);
																																									{	/* Unsafe/intext.scm 1041 */
																																										bool_t
																																											BgL_testz00_8282;
																																										if (STRUCTP(BgL_mz00_5028))
																																											{	/* Unsafe/intext.scm 1041 */
																																												BgL_testz00_8282
																																													=
																																													(STRUCT_KEY
																																													(BgL_mz00_5028)
																																													==
																																													BGl_symbol3163z00zz__intextz00);
																																											}
																																										else
																																											{	/* Unsafe/intext.scm 1041 */
																																												BgL_testz00_8282
																																													=
																																													(
																																													(bool_t)
																																													0);
																																											}
																																										if (BgL_testz00_8282)
																																											{
																																												obj_t
																																													BgL_mz00_8287;
																																												BgL_mz00_8287
																																													=
																																													BgL_mz00_5028;
																																												BgL_mz00_1929
																																													=
																																													BgL_mz00_8287;
																																												goto
																																													BgL_zc3anonymousza32396ze3z83_1930;
																																											}
																																										else
																																											{	/* Unsafe/intext.scm 1041 */
																																												return
																																													BFALSE;
																																											}
																																									}
																																								}
																																							else
																																								{	/* Unsafe/intext.scm 1040 */
																																									return
																																										BFALSE;
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



/* marked-pair-length */
	long BGl_markedzd2pairzd2lengthz00zz__intextz00(obj_t BgL_tablez00_40,
		obj_t BgL_lz00_41)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1050 */
			{
				obj_t BgL_lz00_2052;

				long BgL_rz00_2053;

				BgL_lz00_2052 = BgL_lz00_41;
				BgL_rz00_2053 = ((long) 1);
			BgL_zc3anonymousza32463ze3z83_2054:
				{	/* Unsafe/intext.scm 1053 */
					obj_t BgL_vcdrz00_2055;

					BgL_vcdrz00_2055 = CDR(BgL_lz00_2052);
					if (PAIRP(BgL_vcdrz00_2055))
						{	/* Unsafe/intext.scm 1055 */
							obj_t BgL_markz00_2057;

							BgL_markz00_2057 =
								BGl_hashtablezd2getzd2zz__hashz00(BgL_tablez00_40,
								BgL_vcdrz00_2055);
							{	/* Unsafe/intext.scm 1056 */
								bool_t BgL_testz00_8292;

								{	/* Unsafe/intext.scm 1056 */
									bool_t BgL_testz00_8293;

									{	/* Unsafe/intext.scm 1056 */
										long BgL_auxz00_8294;

										{	/* Unsafe/intext.scm 1056 */
											obj_t BgL_sz00_5045;

											BgL_sz00_5045 = BgL_markz00_2057;
											BgL_auxz00_8294 =
												(long) CINT(STRUCT_REF(BgL_sz00_5045,
													(int) (((long) 2))));
										}
										BgL_testz00_8293 = (BgL_auxz00_8294 > ((long) 0));
									}
									if (BgL_testz00_8293)
										{	/* Unsafe/intext.scm 1056 */
											BgL_testz00_8292 = ((bool_t) 1);
										}
									else
										{	/* Unsafe/intext.scm 1057 */
											long BgL_auxz00_8299;

											{	/* Unsafe/intext.scm 1057 */
												obj_t BgL_sz00_5053;

												BgL_sz00_5053 = BgL_markz00_2057;
												BgL_auxz00_8299 =
													(long) CINT(STRUCT_REF(BgL_sz00_5053,
														(int) (((long) 3))));
											}
											BgL_testz00_8292 = (BgL_auxz00_8299 >= ((long) 0));
								}}
								if (BgL_testz00_8292)
									{	/* Unsafe/intext.scm 1056 */
										return (BgL_rz00_2053 + ((long) 1));
									}
								else
									{
										long BgL_rz00_8306;

										obj_t BgL_lz00_8305;

										BgL_lz00_8305 = BgL_vcdrz00_2055;
										BgL_rz00_8306 = (BgL_rz00_2053 + ((long) 1));
										BgL_rz00_2053 = BgL_rz00_8306;
										BgL_lz00_2052 = BgL_lz00_8305;
										goto BgL_zc3anonymousza32463ze3z83_2054;
									}
							}
						}
					else
						{	/* Unsafe/intext.scm 1054 */
							return (BgL_rz00_2053 + ((long) 1));
		}}}}
	}



/* register-custom-serialization! */
	BGL_EXPORTED_DEF obj_t
		BGl_registerzd2customzd2serializa7ationz12zb5zz__intextz00(obj_t
		BgL_identz00_42, obj_t BgL_serializa7erza7_43,
		obj_t BgL_unserializa7erza7_44)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1070 */
			{	/* Unsafe/intext.scm 1071 */
				obj_t BgL_cellz00_5063;

				BgL_cellz00_5063 =
					BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_identz00_42,
					BGl_za2customzd2serializa7ationza2z75zz__intextz00);
				if (PAIRP(BgL_cellz00_5063))
					{	/* Unsafe/intext.scm 1071 */
						return BFALSE;
					}
				else
					{	/* Unsafe/intext.scm 1071 */
						obj_t BgL_arg2472z00_5065;

						{	/* Unsafe/intext.scm 1071 */
							obj_t BgL_list2473z00_5066;

							{	/* Unsafe/intext.scm 1071 */
								obj_t BgL_arg2476z00_5067;

								{	/* Unsafe/intext.scm 1071 */
									obj_t BgL_arg2477z00_5068;

									BgL_arg2477z00_5068 =
										MAKE_PAIR(BgL_unserializa7erza7_44, BNIL);
									BgL_arg2476z00_5067 =
										MAKE_PAIR(BgL_serializa7erza7_43, BgL_arg2477z00_5068);
								}
								BgL_list2473z00_5066 =
									MAKE_PAIR(BgL_identz00_42, BgL_arg2476z00_5067);
							}
							BgL_arg2472z00_5065 = BgL_list2473z00_5066;
						}
						return (BGl_za2customzd2serializa7ationza2z75zz__intextz00 =
							MAKE_PAIR(BgL_arg2472z00_5065,
								BGl_za2customzd2serializa7ationza2z75zz__intextz00), BUNSPEC);
					}
			}
		}
	}



/* _register-custom-serialization! */
	obj_t BGl__registerzd2customzd2serializa7ationz12zb5zz__intextz00(obj_t
		BgL_envz00_5727, obj_t BgL_identz00_5728, obj_t BgL_serializa7erza7_5729,
		obj_t BgL_unserializa7erza7_5730)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1070 */
			{	/* Unsafe/intext.scm 1071 */
				obj_t BgL_auxz00_8330;

				obj_t BgL_auxz00_8323;

				obj_t BgL_auxz00_8316;

				if (PROCEDUREP(BgL_unserializa7erza7_5730))
					{	/* Unsafe/intext.scm 1071 */
						BgL_auxz00_8330 = BgL_unserializa7erza7_5730;
					}
				else
					{
						obj_t BgL_auxz00_8333;

						BgL_auxz00_8333 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3159z00zz__intextz00,
							BINT(((long) 31738)), BGl_string3170z00zz__intextz00,
							BGl_string3171z00zz__intextz00, BgL_unserializa7erza7_5730);
						FAILURE(BgL_auxz00_8333, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_serializa7erza7_5729))
					{	/* Unsafe/intext.scm 1071 */
						BgL_auxz00_8323 = BgL_serializa7erza7_5729;
					}
				else
					{
						obj_t BgL_auxz00_8326;

						BgL_auxz00_8326 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3159z00zz__intextz00,
							BINT(((long) 31738)), BGl_string3170z00zz__intextz00,
							BGl_string3171z00zz__intextz00, BgL_serializa7erza7_5729);
						FAILURE(BgL_auxz00_8326, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_identz00_5728))
					{	/* Unsafe/intext.scm 1071 */
						BgL_auxz00_8316 = BgL_identz00_5728;
					}
				else
					{
						obj_t BgL_auxz00_8319;

						BgL_auxz00_8319 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3159z00zz__intextz00,
							BINT(((long) 31738)), BGl_string3170z00zz__intextz00,
							BGl_string3161z00zz__intextz00, BgL_identz00_5728);
						FAILURE(BgL_auxz00_8319, BFALSE, BFALSE);
					}
				return
					BGl_registerzd2customzd2serializa7ationz12zb5zz__intextz00
					(BgL_auxz00_8316, BgL_auxz00_8323, BgL_auxz00_8330);
			}
		}
	}



/* get-custom-serialization */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2customzd2serializa7ationza7zz__intextz00(obj_t BgL_identz00_47)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1098 */
			{	/* Unsafe/intext.scm 1099 */
				obj_t BgL_cellz00_2074;

				BgL_cellz00_2074 =
					BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_identz00_47,
					BGl_za2customzd2serializa7ationza2z75zz__intextz00);
				if (PAIRP(BgL_cellz00_2074))
					{	/* Unsafe/intext.scm 1101 */
						obj_t BgL_val0_1892z00_2076;

						obj_t BgL_val1_1893z00_2077;

						BgL_val0_1892z00_2076 = CAR(CDR(BgL_cellz00_2074));
						BgL_val1_1893z00_2077 = CAR(CDR(CDR(BgL_cellz00_2074)));
						{	/* Unsafe/intext.scm 1101 */
							int BgL_auxz00_8346;

							BgL_auxz00_8346 = (int) (((long) 2));
							BGL_MVALUES_NUMBER_SET(BgL_auxz00_8346);
						}
						{	/* Unsafe/intext.scm 1101 */
							int BgL_auxz00_8349;

							BgL_auxz00_8349 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_auxz00_8349, BgL_val1_1893z00_2077);
						}
						return BgL_val0_1892z00_2076;
					}
				else
					{	/* Unsafe/intext.scm 1100 */
						{	/* Unsafe/intext.scm 1102 */
							int BgL_auxz00_8352;

							BgL_auxz00_8352 = (int) (((long) 2));
							BGL_MVALUES_NUMBER_SET(BgL_auxz00_8352);
						}
						{	/* Unsafe/intext.scm 1102 */
							int BgL_auxz00_8355;

							BgL_auxz00_8355 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_auxz00_8355, BFALSE);
						}
						return BFALSE;
					}
			}
		}
	}



/* _get-custom-serialization */
	obj_t BGl__getzd2customzd2serializa7ationza7zz__intextz00(obj_t
		BgL_envz00_5731, obj_t BgL_identz00_5732)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1098 */
			{	/* Unsafe/intext.scm 1099 */
				obj_t BgL_auxz00_8358;

				if (STRINGP(BgL_identz00_5732))
					{	/* Unsafe/intext.scm 1099 */
						BgL_auxz00_8358 = BgL_identz00_5732;
					}
				else
					{
						obj_t BgL_auxz00_8361;

						BgL_auxz00_8361 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3159z00zz__intextz00,
							BINT(((long) 33044)), BGl_string3172z00zz__intextz00,
							BGl_string3161z00zz__intextz00, BgL_identz00_5732);
						FAILURE(BgL_auxz00_8361, BFALSE, BFALSE);
					}
				return
					BGl_getzd2customzd2serializa7ationza7zz__intextz00(BgL_auxz00_8358);
			}
		}
	}



/* register-procedure-serialization! */
	BGL_EXPORTED_DEF obj_t
		BGl_registerzd2procedurezd2serializa7ationz12zb5zz__intextz00(obj_t
		BgL_serializa7erza7_48, obj_t BgL_unserializa7erza7_49)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1121 */
			BGl_za2procedurezd2ze3stringza2z31zz__intextz00 = BgL_serializa7erza7_48;
			return (BGl_za2stringzd2ze3procedureza2z31zz__intextz00 =
				BgL_unserializa7erza7_49, BUNSPEC);
		}
	}



/* _register-procedure-serialization! */
	obj_t BGl__registerzd2procedurezd2serializa7ationz12zb5zz__intextz00(obj_t
		BgL_envz00_5733, obj_t BgL_serializa7erza7_5734,
		obj_t BgL_unserializa7erza7_5735)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1121 */
			{	/* Unsafe/intext.scm 1123 */
				obj_t BgL_auxz00_8373;

				obj_t BgL_auxz00_8366;

				if (PROCEDUREP(BgL_unserializa7erza7_5735))
					{	/* Unsafe/intext.scm 1123 */
						BgL_auxz00_8373 = BgL_unserializa7erza7_5735;
					}
				else
					{
						obj_t BgL_auxz00_8376;

						BgL_auxz00_8376 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3159z00zz__intextz00,
							BINT(((long) 34219)), BGl_string3173z00zz__intextz00,
							BGl_string3171z00zz__intextz00, BgL_unserializa7erza7_5735);
						FAILURE(BgL_auxz00_8376, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_serializa7erza7_5734))
					{	/* Unsafe/intext.scm 1123 */
						BgL_auxz00_8366 = BgL_serializa7erza7_5734;
					}
				else
					{
						obj_t BgL_auxz00_8369;

						BgL_auxz00_8369 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3159z00zz__intextz00,
							BINT(((long) 34219)), BGl_string3173z00zz__intextz00,
							BGl_string3171z00zz__intextz00, BgL_serializa7erza7_5734);
						FAILURE(BgL_auxz00_8369, BFALSE, BFALSE);
					}
				return
					BGl_registerzd2procedurezd2serializa7ationz12zb5zz__intextz00
					(BgL_auxz00_8366, BgL_auxz00_8373);
			}
		}
	}



/* get-procedure-serialization */
	BGL_EXPORTED_DEF obj_t BGl_getzd2procedurezd2serializa7ationza7zz__intextz00()
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1128 */
			return
				MAKE_PAIR(BGl_za2procedurezd2ze3stringza2z31zz__intextz00,
				BGl_za2stringzd2ze3procedureza2z31zz__intextz00);
		}
	}



/* _get-procedure-serialization */
	obj_t BGl__getzd2procedurezd2serializa7ationza7zz__intextz00(obj_t
		BgL_envz00_5736)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1128 */
			return BGl_getzd2procedurezd2serializa7ationza7zz__intextz00();
		}
	}



/* register-process-serialization! */
	BGL_EXPORTED_DEF obj_t
		BGl_registerzd2processzd2serializa7ationz12zb5zz__intextz00(obj_t
		BgL_serializa7erza7_50, obj_t BgL_unserializa7erza7_51)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1148 */
			BGl_za2processzd2ze3stringza2z31zz__intextz00 = BgL_serializa7erza7_50;
			return (BGl_za2stringzd2ze3processza2z31zz__intextz00 =
				BgL_unserializa7erza7_51, BUNSPEC);
		}
	}



/* _register-process-serialization! */
	obj_t BGl__registerzd2processzd2serializa7ationz12zb5zz__intextz00(obj_t
		BgL_envz00_5737, obj_t BgL_serializa7erza7_5738,
		obj_t BgL_unserializa7erza7_5739)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1148 */
			{	/* Unsafe/intext.scm 1150 */
				obj_t BgL_auxz00_8390;

				obj_t BgL_auxz00_8383;

				if (PROCEDUREP(BgL_unserializa7erza7_5739))
					{	/* Unsafe/intext.scm 1150 */
						BgL_auxz00_8390 = BgL_unserializa7erza7_5739;
					}
				else
					{
						obj_t BgL_auxz00_8393;

						BgL_auxz00_8393 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3159z00zz__intextz00,
							BINT(((long) 35566)), BGl_string3174z00zz__intextz00,
							BGl_string3171z00zz__intextz00, BgL_unserializa7erza7_5739);
						FAILURE(BgL_auxz00_8393, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_serializa7erza7_5738))
					{	/* Unsafe/intext.scm 1150 */
						BgL_auxz00_8383 = BgL_serializa7erza7_5738;
					}
				else
					{
						obj_t BgL_auxz00_8386;

						BgL_auxz00_8386 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3159z00zz__intextz00,
							BINT(((long) 35566)), BGl_string3174z00zz__intextz00,
							BGl_string3171z00zz__intextz00, BgL_serializa7erza7_5738);
						FAILURE(BgL_auxz00_8386, BFALSE, BFALSE);
					}
				return
					BGl_registerzd2processzd2serializa7ationz12zb5zz__intextz00
					(BgL_auxz00_8383, BgL_auxz00_8390);
			}
		}
	}



/* register-opaque-serialization! */
	BGL_EXPORTED_DEF obj_t
		BGl_registerzd2opaquezd2serializa7ationz12zb5zz__intextz00(obj_t
		BgL_serializa7erza7_52, obj_t BgL_unserializa7erza7_53)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1175 */
			BGl_za2opaquezd2ze3stringza2z31zz__intextz00 = BgL_serializa7erza7_52;
			return (BGl_za2stringzd2ze3opaqueza2z31zz__intextz00 =
				BgL_unserializa7erza7_53, BUNSPEC);
		}
	}



/* _register-opaque-serialization! */
	obj_t BGl__registerzd2opaquezd2serializa7ationz12zb5zz__intextz00(obj_t
		BgL_envz00_5740, obj_t BgL_serializa7erza7_5741,
		obj_t BgL_unserializa7erza7_5742)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1175 */
			{	/* Unsafe/intext.scm 1177 */
				obj_t BgL_auxz00_8405;

				obj_t BgL_auxz00_8398;

				if (PROCEDUREP(BgL_unserializa7erza7_5742))
					{	/* Unsafe/intext.scm 1177 */
						BgL_auxz00_8405 = BgL_unserializa7erza7_5742;
					}
				else
					{
						obj_t BgL_auxz00_8408;

						BgL_auxz00_8408 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3159z00zz__intextz00,
							BINT(((long) 36899)), BGl_string3175z00zz__intextz00,
							BGl_string3171z00zz__intextz00, BgL_unserializa7erza7_5742);
						FAILURE(BgL_auxz00_8408, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_serializa7erza7_5741))
					{	/* Unsafe/intext.scm 1177 */
						BgL_auxz00_8398 = BgL_serializa7erza7_5741;
					}
				else
					{
						obj_t BgL_auxz00_8401;

						BgL_auxz00_8401 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3159z00zz__intextz00,
							BINT(((long) 36899)), BGl_string3175z00zz__intextz00,
							BGl_string3171z00zz__intextz00, BgL_serializa7erza7_5741);
						FAILURE(BgL_auxz00_8401, BFALSE, BFALSE);
					}
				return
					BGl_registerzd2opaquezd2serializa7ationz12zb5zz__intextz00
					(BgL_auxz00_8398, BgL_auxz00_8405);
			}
		}
	}



/* get-opaque-serialization */
	BGL_EXPORTED_DEF obj_t BGl_getzd2opaquezd2serializa7ationza7zz__intextz00()
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1182 */
			{	/* Unsafe/intext.scm 1183 */
				obj_t BgL_val0_1898z00_2082;

				obj_t BgL_val1_1899z00_2083;

				BgL_val0_1898z00_2082 = BGl_za2opaquezd2ze3stringza2z31zz__intextz00;
				BgL_val1_1899z00_2083 = BGl_za2stringzd2ze3opaqueza2z31zz__intextz00;
				{	/* Unsafe/intext.scm 1183 */
					int BgL_auxz00_8413;

					BgL_auxz00_8413 = (int) (((long) 2));
					BGL_MVALUES_NUMBER_SET(BgL_auxz00_8413);
				}
				{	/* Unsafe/intext.scm 1183 */
					int BgL_auxz00_8416;

					BgL_auxz00_8416 = (int) (((long) 1));
					BGL_MVALUES_VAL_SET(BgL_auxz00_8416, BgL_val1_1899z00_2083);
				}
				return BgL_val0_1898z00_2082;
			}
		}
	}



/* _get-opaque-serialization */
	obj_t BGl__getzd2opaquezd2serializa7ationza7zz__intextz00(obj_t
		BgL_envz00_5743)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1182 */
			return BGl_getzd2opaquezd2serializa7ationza7zz__intextz00();
		}
	}



/* register-class-serialization! */
	BGL_EXPORTED_DEF obj_t
		BGl_registerzd2classzd2serializa7ationz12zb5zz__intextz00(obj_t
		BgL_classz00_56, obj_t BgL_serializa7erza7_57,
		obj_t BgL_unserializa7erza7_58)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1199 */
			{	/* Unsafe/intext.scm 1202 */
				obj_t BgL_arg2482z00_2085;

				{	/* Unsafe/intext.scm 1204 */
					obj_t BgL_arg2485z00_2089;

					BgL_arg2485z00_2089 =
						SYMBOL_TO_STRING(BGl_classzd2namezd2zz__objectz00(BgL_classz00_56));
					BgL_arg2482z00_2085 =
						string_append(BgL_arg2485z00_2089, BGl_string3176z00zz__intextz00);
				}
				{	/* Unsafe/intext.scm 1203 */
					obj_t BgL_zc3anonymousza32483ze3z83_5744;

					BgL_zc3anonymousza32483ze3z83_5744 =
						make_fx_procedure(BGl_zc3anonymousza32483ze3z83zz__intextz00,
						(int) (((long) 1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza32483ze3z83_5744,
						(int) (((long) 0)), BgL_serializa7erza7_57);
					BGl_genericzd2addzd2methodz12z12zz__objectz00
						(BGl_objectzd2serializa7erzd2envza7zz__intextz00, BgL_classz00_56,
						BgL_zc3anonymousza32483ze3z83_5744, BgL_arg2482z00_2085);
			}}
			{	/* Unsafe/intext.scm 1206 */
				long BgL_hashz00_2093;

				BgL_hashz00_2093 = BGl_classzd2hashzd2zz__objectz00(BgL_classz00_56);
				{	/* Unsafe/intext.scm 1206 */
					obj_t BgL_cellz00_2094;

					BgL_cellz00_2094 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BINT(BgL_hashz00_2093),
						BGl_za2classzd2serializa7ationza2z75zz__intextz00);
					{	/* Unsafe/intext.scm 1207 */

						if (PAIRP(BgL_cellz00_2094))
							{	/* Unsafe/intext.scm 1208 */
								return BFALSE;
							}
						else
							{	/* Unsafe/intext.scm 1210 */
								obj_t BgL_arg2489z00_2096;

								{	/* Unsafe/intext.scm 1210 */
									obj_t BgL_list2490z00_2097;

									{	/* Unsafe/intext.scm 1210 */
										obj_t BgL_arg2491z00_2098;

										{	/* Unsafe/intext.scm 1210 */
											obj_t BgL_arg2492z00_2099;

											BgL_arg2492z00_2099 =
												MAKE_PAIR(BgL_unserializa7erza7_58, BNIL);
											BgL_arg2491z00_2098 =
												MAKE_PAIR(BgL_serializa7erza7_57, BgL_arg2492z00_2099);
										}
										BgL_list2490z00_2097 =
											MAKE_PAIR(BINT(BgL_hashz00_2093), BgL_arg2491z00_2098);
									}
									BgL_arg2489z00_2096 = BgL_list2490z00_2097;
								}
								return (BGl_za2classzd2serializa7ationza2z75zz__intextz00 =
									MAKE_PAIR(BgL_arg2489z00_2096,
										BGl_za2classzd2serializa7ationza2z75zz__intextz00),
									BUNSPEC);
							}
					}
				}
			}
		}
	}



/* _register-class-serialization! */
	obj_t BGl__registerzd2classzd2serializa7ationz12zb5zz__intextz00(obj_t
		BgL_envz00_5745, obj_t BgL_classz00_5746, obj_t BgL_serializa7erza7_5747,
		obj_t BgL_unserializa7erza7_5748)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1199 */
			{	/* Unsafe/intext.scm 1211 */
				obj_t BgL_auxz00_8446;

				obj_t BgL_auxz00_8439;

				if (PROCEDUREP(BgL_unserializa7erza7_5748))
					{	/* Unsafe/intext.scm 1211 */
						BgL_auxz00_8446 = BgL_unserializa7erza7_5748;
					}
				else
					{
						obj_t BgL_auxz00_8449;

						BgL_auxz00_8449 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3159z00zz__intextz00,
							BINT(((long) 38456)), BGl_string3177z00zz__intextz00,
							BGl_string3171z00zz__intextz00, BgL_unserializa7erza7_5748);
						FAILURE(BgL_auxz00_8449, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_serializa7erza7_5747))
					{	/* Unsafe/intext.scm 1211 */
						BgL_auxz00_8439 = BgL_serializa7erza7_5747;
					}
				else
					{
						obj_t BgL_auxz00_8442;

						BgL_auxz00_8442 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3159z00zz__intextz00,
							BINT(((long) 38456)), BGl_string3177z00zz__intextz00,
							BGl_string3171z00zz__intextz00, BgL_serializa7erza7_5747);
						FAILURE(BgL_auxz00_8442, BFALSE, BFALSE);
					}
				return
					BGl_registerzd2classzd2serializa7ationz12zb5zz__intextz00
					(BgL_classz00_5746, BgL_auxz00_8439, BgL_auxz00_8446);
			}
		}
	}



/* <anonymous:2483> */
	obj_t BGl_zc3anonymousza32483ze3z83zz__intextz00(obj_t BgL_envz00_5749,
		obj_t BgL_oz00_5751)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1202 */
			{	/* Unsafe/intext.scm 1203 */
				obj_t BgL_serializa7erza7_5750;

				BgL_serializa7erza7_5750 =
					PROCEDURE_REF(BgL_envz00_5749, (int) (((long) 0)));
				{
					obj_t BgL_oz00_2086;

					BgL_oz00_2086 = BgL_oz00_5751;
					{	/* Unsafe/intext.scm 1203 */
						obj_t BgL_arg2484z00_5109;

						BgL_arg2484z00_5109 =
							PROCEDURE_ENTRY(BgL_serializa7erza7_5750)
							(BgL_serializa7erza7_5750, BgL_oz00_2086, BEOA);
						{	/* Unsafe/intext.scm 1203 */
							obj_t BgL_newz00_5111;

							BgL_newz00_5111 =
								create_struct(BGl_symbol3166z00zz__intextz00,
								(int) (((long) 1)));
							{	/* Unsafe/intext.scm 1203 */
								int BgL_auxz00_8460;

								BgL_auxz00_8460 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_5111, BgL_auxz00_8460,
									BgL_arg2484z00_5109);
							}
							return BgL_newz00_5111;
						}
					}
				}
			}
		}
	}



/* get-class-serialization */
	BGL_EXPORTED_DEF obj_t BGl_getzd2classzd2serializa7ationza7zz__intextz00(obj_t
		BgL_classz00_60)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1225 */
			{	/* Unsafe/intext.scm 1226 */
				long BgL_hashz00_2102;

				BgL_hashz00_2102 = BGl_classzd2hashzd2zz__objectz00(BgL_classz00_60);
				{	/* Unsafe/intext.scm 1226 */
					obj_t BgL_cellz00_2103;

					BgL_cellz00_2103 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BINT(BgL_hashz00_2102),
						BGl_za2classzd2serializa7ationza2z75zz__intextz00);
					{	/* Unsafe/intext.scm 1227 */

						if (PAIRP(BgL_cellz00_2103))
							{	/* Unsafe/intext.scm 1229 */
								obj_t BgL_val0_1900z00_2105;

								obj_t BgL_val1_1901z00_2106;

								BgL_val0_1900z00_2105 = CAR(CDR(BgL_cellz00_2103));
								BgL_val1_1901z00_2106 = CAR(CDR(CDR(BgL_cellz00_2103)));
								{	/* Unsafe/intext.scm 1229 */
									int BgL_auxz00_8473;

									BgL_auxz00_8473 = (int) (((long) 2));
									BGL_MVALUES_NUMBER_SET(BgL_auxz00_8473);
								}
								{	/* Unsafe/intext.scm 1229 */
									int BgL_auxz00_8476;

									BgL_auxz00_8476 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_auxz00_8476, BgL_val1_1901z00_2106);
								}
								return BgL_val0_1900z00_2105;
							}
						else
							{	/* Unsafe/intext.scm 1228 */
								{	/* Unsafe/intext.scm 1230 */
									int BgL_auxz00_8479;

									BgL_auxz00_8479 = (int) (((long) 2));
									BGL_MVALUES_NUMBER_SET(BgL_auxz00_8479);
								}
								{	/* Unsafe/intext.scm 1230 */
									int BgL_auxz00_8482;

									BgL_auxz00_8482 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_auxz00_8482, BFALSE);
								}
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* _get-class-serialization */
	obj_t BGl__getzd2classzd2serializa7ationza7zz__intextz00(obj_t
		BgL_envz00_5754, obj_t BgL_classz00_5755)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1225 */
			return
				BGl_getzd2classzd2serializa7ationza7zz__intextz00(BgL_classz00_5755);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__intextz00()
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 20 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_objectzd2serializa7erzd2envza7zz__intextz00,
				BGl_objectzd2serializa7erzd2de1915zd2envz75zz__intextz00,
				BGl_objectz00zz__objectz00, BGl_string3178z00zz__intextz00);
		}
	}



/* object-serializer */
	obj_t BGl_objectzd2serializa7erz75zz__intextz00(BgL_objectz00_bglt
		BgL_objz00_54)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1188 */
			{	/* Unsafe/intext.scm 1188 */
				obj_t BgL_method1916z00_5146;

				{	/* Unsafe/intext.scm 1188 */
					long BgL_objzd2classzd2numz00_5148;

					BgL_objzd2classzd2numz00_5148 = BGL_OBJECT_CLASS_NUM(BgL_objz00_54);
					{	/* Unsafe/intext.scm 1188 */
						obj_t BgL_arg3000z00_5149;

						BgL_arg3000z00_5149 =
							PROCEDURE_REF(BGl_objectzd2serializa7erzd2envza7zz__intextz00,
							(int) (((long) 1)));
						{	/* Unsafe/intext.scm 1188 */
							obj_t BgL_arrayz00_5151;

							int BgL_offsetz00_5152;

							BgL_arrayz00_5151 = BgL_arg3000z00_5149;
							BgL_offsetz00_5152 = (int) (BgL_objzd2classzd2numz00_5148);
							{	/* Unsafe/intext.scm 1188 */
								long BgL_offsetz00_5153;

								BgL_offsetz00_5153 =
									((long) (BgL_offsetz00_5152) - OBJECT_TYPE);
								{	/* Unsafe/intext.scm 1188 */
									long BgL_modz00_5154;

									{	/* Unsafe/intext.scm 1188 */
										int BgL_arg3002z00_5155;

										BgL_arg3002z00_5155 = (int) (((long) 16));
										{	/* Unsafe/intext.scm 1188 */
											long BgL_auxz00_8494;

											BgL_auxz00_8494 = (long) (BgL_arg3002z00_5155);
											BgL_modz00_5154 = (BgL_offsetz00_5153 / BgL_auxz00_8494);
									}}
									{	/* Unsafe/intext.scm 1188 */
										long BgL_restz00_5156;

										{	/* Unsafe/intext.scm 1188 */
											int BgL_arg3001z00_5157;

											BgL_arg3001z00_5157 = (int) (((long) 16));
											{	/* Unsafe/intext.scm 1188 */
												long BgL_auxz00_8498;

												BgL_auxz00_8498 = (long) (BgL_arg3001z00_5157);
												BgL_restz00_5156 =
													(BgL_offsetz00_5153 % BgL_auxz00_8498);
										}}
										{	/* Unsafe/intext.scm 1188 */

											BgL_method1916z00_5146 =
												VECTOR_REF(VECTOR_REF(BgL_arrayz00_5151,
													(int) (BgL_modz00_5154)), (int) (BgL_restz00_5156));
				}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method1916z00_5146) (BgL_method1916z00_5146,
					(obj_t) (BgL_objz00_54), BEOA);
			}
		}
	}



/* _object-serializer */
	obj_t BGl__objectzd2serializa7erz75zz__intextz00(obj_t BgL_envz00_5752,
		obj_t BgL_objz00_5753)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 1188 */
			{	/* Unsafe/intext.scm 1188 */
				BgL_objectz00_bglt BgL_auxz00_8508;

				if (BGL_OBJECTP(BgL_objz00_5753))
					{	/* Unsafe/intext.scm 1188 */
						BgL_auxz00_8508 = (BgL_objectz00_bglt) (BgL_objz00_5753);
					}
				else
					{
						obj_t BgL_auxz00_8512;

						BgL_auxz00_8512 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3159z00zz__intextz00,
							BINT(((long) 37433)), BGl_string3179z00zz__intextz00,
							BGl_string3180z00zz__intextz00, BgL_objz00_5753);
						FAILURE(BgL_auxz00_8512, BFALSE, BFALSE);
					}
				return BGl_objectzd2serializa7erz75zz__intextz00(BgL_auxz00_8508);
			}
		}
	}



/* _object-serializer-de1915 */
	obj_t BGl__objectzd2serializa7erzd2de1915za7zz__intextz00(obj_t
		BgL_envz00_5756, obj_t BgL_objz00_5757)
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 20 */
			{	/* Unsafe/intext.scm 1189 */
				BgL_objectz00_bglt BgL_objz00_5855;

				if (BGL_OBJECTP(BgL_objz00_5757))
					{	/* Unsafe/intext.scm 1189 */
						BgL_objz00_5855 = (BgL_objectz00_bglt) (BgL_objz00_5757);
					}
				else
					{
						obj_t BgL_auxz00_8520;

						BgL_auxz00_8520 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3159z00zz__intextz00,
							BINT(((long) 37484)), BGl_string3181z00zz__intextz00,
							BGl_string3180z00zz__intextz00, BgL_objz00_5757);
						FAILURE(BgL_auxz00_8520, BFALSE, BFALSE);
					}
				return BGl_objectzd2ze3structz31zz__objectz00(BgL_objz00_5855);
			}
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__intextz00()
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 20 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__intextz00()
	{
		AN_OBJECT;
		{	/* Unsafe/intext.scm 20 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string3182z00zz__intextz00));
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 81619416),
				BSTRING_TO_STRING(BGl_string3182z00zz__intextz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string3182z00zz__intextz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string3182z00zz__intextz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 504082187),
				BSTRING_TO_STRING(BGl_string3182z00zz__intextz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string3182z00zz__intextz00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string3182z00zz__intextz00));
		}
	}

#ifdef __cplusplus
}
#endif
