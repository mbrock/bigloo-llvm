/*===========================================================================*/
/*   (Unsafe/gunzip.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Unsafe/gunzip.scm -indent -o objs/obj_u/Unsafe/gunzip.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_z62iozd2parsezd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                               *BgL_z62iozd2parsezd2errorz62_bglt;

	typedef struct BgL_huftz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_ez00;
		long BgL_bz00;
		obj_t BgL_vz00;
	}              *BgL_huftz00_bglt;


	extern obj_t bgl_display_substring(obj_t, long, long, obj_t);
	static obj_t BGl_readzd2nullzd2termzd2stringzd2zz__gunza7ipza7(obj_t);
	static obj_t BGl_inflatezd2blockzd2zz__gunza7ipza7(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__portzd2ze3inflatezd2portze3zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_symbol3087z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_symbol3101z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_symbol3095z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_symbol3097z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_symbol3109z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_symbol3099z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_subvectorz00zz__gunza7ipza7(obj_t, long);
	static obj_t BGl_symbol3117z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_dozd2copyzd2zz__gunza7ipza7(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol3119z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_symbol3121z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_symbol3123z00zz__gunza7ipza7 = BUNSPEC;
	static bool_t BGl_kwlzd2loopzd2zz__gunza7ipza7(BgL_huftz00_bglt, obj_t, obj_t,
		obj_t, obj_t, obj_t, long, long, obj_t, long, long, obj_t, obj_t, obj_t);
	extern long BGl_classzd2numzd2zz__objectz00(obj_t);
	static obj_t BGl__huftzd2ezd2setz12z12zz__gunza7ipza7(obj_t, obj_t, obj_t);
	static obj_t BGl__huftzd2bzd2setz12z12zz__gunza7ipza7(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32378ze3z83zz__gunza7ipza7(obj_t);
	extern obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern BgL_z62iozd2parsezd2errorz62_bglt
		BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__gunza7ipza7 = BUNSPEC;
	static BgL_huftz00_bglt BGl_makezd2huftzd2zz__gunza7ipza7(long, long, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_portzd2ze3inflatezd2portze3zz__gunza7ipza7(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zz__gunza7ipza7();
	static obj_t BGl_DUMPBITSz00zz__gunza7ipza7(obj_t, obj_t, long);
	static obj_t BGl_z52thezd2huftzd2nilz52zz__gunza7ipza7 = BUNSPEC;
	extern obj_t BGl_objectz00zz__objectz00;
	extern obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	static obj_t BGl_vector3055z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_vector3057z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_vector3059z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_vector3061z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_vector3066z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_inflatezd2entryzd2zz__gunza7ipza7(obj_t, obj_t);
	extern int default_io_bufsiz;
	static obj_t BGl_vector3067z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_vector3076z00zz__gunza7ipza7 = BUNSPEC;
	extern obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern obj_t
		BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static bool_t BGl_liipz00zz__gunza7ipza7(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_inflatezd2fixedzd2zz__gunza7ipza7(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static bool_t BGl_kzd2loopzd2zz__gunza7ipza7(long, obj_t, obj_t, long, obj_t,
		obj_t, long, obj_t, obj_t, BgL_huftz00_bglt, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, long, obj_t, long);
	extern obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32606ze3_2978z83zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32606ze3_2979z83zz__gunza7ipza7(obj_t, obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_loopzd2inflatezd2zz__gunza7ipza7(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_readzd2bytezd2zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_huftz00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zz__gunza7ipza7();
	extern obj_t BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t, obj_t,
		int);
	extern obj_t BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static bool_t BGl_setzd2litzd2zz__gunza7ipza7(obj_t, obj_t, long, obj_t, long,
		obj_t);
	static long BGl_readzd2int2zd2zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_portzd2ze3portz31zz__gunza7ipza7(obj_t, obj_t, obj_t, long,
		obj_t);
	static obj_t BGl__huftzd2vzd2setz12z12zz__gunza7ipza7(obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__gunza7ipza7();
	extern obj_t make_struct(obj_t, int, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_portzd2ze3za7libzd2portz44zz__gunza7ipza7(obj_t,
		obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_portzd2ze3gza7ipzd2portz44zz__gunza7ipza7(obj_t,
		obj_t);
	static obj_t BGl_loop_2964z00zz__gunza7ipza7(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_loop_2965z00zz__gunza7ipza7(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, long);
	static bool_t BGl_loop_2966z00zz__gunza7ipza7(long, obj_t, obj_t, obj_t,
		obj_t, obj_t, long, obj_t, obj_t, obj_t);
	static long BGl_loop_2967z00zz__gunza7ipza7(obj_t, long);
	static long BGl_loop_2968z00zz__gunza7ipza7(obj_t, long);
	static long BGl_loop_2970z00zz__gunza7ipza7(obj_t, obj_t, long, long, long,
		long);
	static obj_t BGl_loop_2969z00zz__gunza7ipza7(long, obj_t, obj_t, long, long);
	BGL_EXPORTED_DECL obj_t
		BGl_gunza7ipzd2parsezd2headerza7zz__gunza7ipza7(obj_t);
	static bool_t BGl_loop_2971z00zz__gunza7ipza7(long, obj_t, obj_t, obj_t, long,
		long);
	static bool_t BGl_loop_2972z00zz__gunza7ipza7(obj_t, long, BgL_huftz00_bglt,
		obj_t, long);
	static obj_t BGl_loop_2973z00zz__gunza7ipza7(obj_t, long);
	static bool_t BGl_loop_2974z00zz__gunza7ipza7(obj_t, obj_t, long, obj_t,
		obj_t);
	static bool_t BGl_loop_2975z00zz__gunza7ipza7(obj_t, obj_t, obj_t, obj_t,
		long);
	static bool_t BGl_loop_2976z00zz__gunza7ipza7(obj_t, obj_t, obj_t, long);
	static obj_t BGl__gunza7ipzd2parsezd2headerza7zz__gunza7ipza7(obj_t, obj_t);
	static bool_t BGl_loop_2977z00zz__gunza7ipza7(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static BgL_huftz00_bglt BGl_huftzd2nilzd2zz__gunza7ipza7();
	static bool_t BGl_loop1882z00zz__gunza7ipza7(long, obj_t, obj_t, long);
	static bool_t BGl_loop1902z00zz__gunza7ipza7(obj_t, long);
	static bool_t BGl_loop1893z00zz__gunza7ipza7(obj_t, long);
	static bool_t BGl_loop1905z00zz__gunza7ipza7(obj_t, obj_t, obj_t, obj_t,
		obj_t, long);
	static bool_t BGl_loop1895z00zz__gunza7ipza7(obj_t, long);
	static bool_t BGl_loop1907z00zz__gunza7ipza7(obj_t, obj_t);
	static bool_t BGl_loop1897z00zz__gunza7ipza7(obj_t, long);
	static bool_t BGl_loop1899z00zz__gunza7ipza7(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_gunza7ipzd2sendcharsz75zz__gunza7ipza7(obj_t,
		obj_t);
	extern obj_t BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_inflatezd2sendcharszd2zz__gunza7ipza7(obj_t,
		obj_t);
	extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_readzd2charzd2zz__r4_input_6_10_2z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__gunza7ipza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgcz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_zc3anonymousza32582ze3z83zz__gunza7ipza7(obj_t);
	static obj_t BGl_laapz00zz__gunza7ipza7(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z52dozd2copy2z80zz__gunza7ipza7(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t make_string(long, unsigned char);
	static obj_t BGl__portzd2ze3za7libzd2portz44zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl__portzd2ze3gza7ipzd2portz44zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_list3056z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_list3058z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_list3060z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_list3062z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_list3068z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_list3077z00zz__gunza7ipza7 = BUNSPEC;
	static bool_t BGl_azd2loopzd2zz__gunza7ipza7(obj_t, long, obj_t, obj_t, long,
		obj_t, obj_t, BgL_huftz00_bglt, obj_t, long, obj_t, obj_t, obj_t, obj_t,
		obj_t, long, long, obj_t, obj_t, long);
	static obj_t BGl__openzd2inputzd2inflatezd2filezd2zz__gunza7ipza7(obj_t,
		obj_t);
	extern obj_t BGl_readzd2charszd2zz__r4_input_6_10_2z00(obj_t, obj_t);
	static obj_t BGl__checkzd2adler32zd2zz__gunza7ipza7(obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2huftzd2zz__gunza7ipza7(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32606ze3z83zz__gunza7ipza7(obj_t, obj_t);
	extern bool_t BGl_za7erozf3z54zz__r4_numbers_6_5z00(obj_t);
	extern obj_t make_vector(int, obj_t);
	static obj_t BGl_zc3anonymousza32326ze3z83zz__gunza7ipza7(obj_t);
	extern obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32611ze3z83zz__gunza7ipza7(obj_t, obj_t);
	extern obj_t bgl_open_input_gzip_port(obj_t, obj_t, obj_t);
	static obj_t BGl__inflatezd2sendcharszd2zz__gunza7ipza7(obj_t, obj_t, obj_t);
	static obj_t BGl__huftzd2nilzd2zz__gunza7ipza7(obj_t);
	static obj_t BGl__huftzd2bzd2zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl__huftzd2ezd2zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_inflatezd2codeszd2zz__gunza7ipza7(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2huftz80zz__gunza7ipza7(obj_t);
	static obj_t BGl__huftzd2vzd2zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_checkzd2adler32zd2zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32337ze3z83zz__gunza7ipza7(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2inputzd2inflatezd2filezd2zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_loopz00zz__gunza7ipza7(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32340ze3z83zz__gunza7ipza7(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t bgl_close_input_port(obj_t);
	extern bool_t rgc_fill_buffer(obj_t);
	static obj_t BGl_buildzd2vectorzd2zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32209ze3z83zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_inflatez00zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_inflatezd2dynamiczd2zz__gunza7ipza7(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern long BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(long, long);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2inputzd2za7libzd2filez75zz__gunza7ipza7(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2inputzd2gza7ipzd2filez75zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32637ze3_2980z83zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32637ze3_2981z83zz__gunza7ipza7(obj_t, obj_t);
	static bool_t BGl_NEEDBITSz00zz__gunza7ipza7(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__gunza7ipza7();
	static obj_t BGl_zc3anonymousza32637ze3z83zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_inflatezd2storedzd2zz__gunza7ipza7(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern bool_t BGl_positivezf3zf3zz__r4_numbers_6_5z00(obj_t);
	extern obj_t BGl_raisez00zz__errorz00(obj_t);
	static obj_t BGl_zc3anonymousza32493ze3z83zz__gunza7ipza7(obj_t);
	static obj_t BGl__openzd2inputzd2za7libzd2filez75zz__gunza7ipza7(obj_t,
		obj_t);
	static obj_t BGl__gunza7ipzd2sendcharsz75zz__gunza7ipza7(obj_t, obj_t, obj_t);
	extern obj_t BGl_getzd2tracezd2stackz00zz__errorz00(obj_t);
	static obj_t BGl__openzd2inputzd2gza7ipzd2filez75zz__gunza7ipza7(obj_t,
		obj_t);
	static obj_t BGl_huftzd2buildzd2zz__gunza7ipza7(obj_t, obj_t, long, long,
		obj_t, obj_t, long, bool_t);
	static obj_t BGl_objectzd2ze3structzd2huft2021ze3zz__gunza7ipza7(obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2023z83zz__gunza7ipza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_checkzd2flushzd2zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32081ze3z83zz__gunza7ipza7(obj_t);
	static obj_t BGl_case_else1910z00zz__gunza7ipza7(obj_t, long);
	static obj_t BGl__huftzf3zf3zz__gunza7ipza7(obj_t, obj_t);
	extern obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__gunza7ipza7();
	extern obj_t BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00();
	static obj_t BGl_symbol3045z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_symbol3047z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_symbol3049z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_symbol3051z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_inflatezd2sendcharszd2envz00zz__gunza7ipza7,
		BgL_bgl__inflateza7d2sendc3141za7,
		BGl__inflatezd2sendcharszd2zz__gunza7ipza7, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2inputzd2inflatezd2filezd2envz00zz__gunza7ipza7,
		BgL_bgl__openza7d2inputza7d23142z00, opt_generic_entry,
		BGl__openzd2inputzd2inflatezd2filezd2zz__gunza7ipza7, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_portzd2ze3inflatezd2portzd2envz31zz__gunza7ipza7,
		BgL_bgl__portza7d2za7e3infla3143z00, opt_generic_entry,
		BGl__portzd2ze3inflatezd2portze3zz__gunza7ipza7, BFALSE, -1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_huftzd2vzd2setz12zd2envzc0zz__gunza7ipza7,
		BgL_bgl__huftza7d2vza7d2setza73144za7,
		BGl__huftzd2vzd2setz12z12zz__gunza7ipza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3079z00zz__gunza7ipza7,
		BgL_bgl_za7c3anonymousza7a323145z00,
		BGl_zc3anonymousza32209ze3z83zz__gunza7ipza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_huftzd2nilzd2envz00zz__gunza7ipza7,
		BgL_bgl__huftza7d2nilza7d2za7za73146z00, BGl__huftzd2nilzd2zz__gunza7ipza7,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3133z00zz__gunza7ipza7,
		BgL_bgl_objectza7d2za7e3stru3147z00,
		BGl_objectzd2ze3structzd2huft2021ze3zz__gunza7ipza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3135z00zz__gunza7ipza7,
		BgL_bgl_structza7b2objectza73148z00,
		BGl_structzb2objectzd2ze3objec2023z83zz__gunza7ipza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_huftzd2bzd2envz00zz__gunza7ipza7,
		BgL_bgl__huftza7d2bza7d2za7za7__3149z00, BGl__huftzd2bzd2zz__gunza7ipza7,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2inputzd2gza7ipzd2filezd2envza7zz__gunza7ipza7,
		BgL_bgl__openza7d2inputza7d23150z00, opt_generic_entry,
		BGl__openzd2inputzd2gza7ipzd2filez75zz__gunza7ipza7, BFALSE, -1);
	      DEFINE_STRING(BGl_string3046z00zz__gunza7ipza7,
		BgL_bgl_string3046za700za7za7_3151za7, "return", 6);
	      DEFINE_STRING(BGl_string3048z00zz__gunza7ipza7,
		BgL_bgl_string3048za700za7za7_3152za7, "complete", 8);
	      DEFINE_STRING(BGl_string3050z00zz__gunza7ipza7,
		BgL_bgl_string3050za700za7za7_3153za7, "flush", 5);
	      DEFINE_STRING(BGl_string3052z00zz__gunza7ipza7,
		BgL_bgl_string3052za700za7za7_3154za7, "step", 4);
	      DEFINE_STRING(BGl_string3053z00zz__gunza7ipza7,
		BgL_bgl_string3053za700za7za7_3155za7, "inflate", 7);
	      DEFINE_STRING(BGl_string3054z00zz__gunza7ipza7,
		BgL_bgl_string3054za700za7za7_3156za7, "Illegal state", 13);
	      DEFINE_STRING(BGl_string3063z00zz__gunza7ipza7,
		BgL_bgl_string3063za700za7za7_3157za7, "error in compressed data `~a'", 29);
	      DEFINE_STRING(BGl_string3064z00zz__gunza7ipza7,
		BgL_bgl_string3064za700za7za7_3158za7, "inflate-entry", 13);
	      DEFINE_STRING(BGl_string3065z00zz__gunza7ipza7,
		BgL_bgl_string3065za700za7za7_3159za7, "bad lengths `~a'", 16);
	      DEFINE_STRING(BGl_string3070z00zz__gunza7ipza7,
		BgL_bgl_string3070za700za7za7_3160za7, "unknown inflate type `~A'", 25);
	      DEFINE_STRING(BGl_string3069z00zz__gunza7ipza7,
		BgL_bgl_string3069za700za7za7_3161za7, "incomplete code set", 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_gunza7ipzd2parsezd2headerzd2envz75zz__gunza7ipza7,
		BgL_bgl__gunza7a7ipza7d2pars3162z00,
		BGl__gunza7ipzd2parsezd2headerza7zz__gunza7ipza7, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3071z00zz__gunza7ipza7,
		BgL_bgl_string3071za700za7za7_3163za7, "premature end of file", 21);
	      DEFINE_STRING(BGl_string3072z00zz__gunza7ipza7,
		BgL_bgl_string3072za700za7za7_3164za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string3073z00zz__gunza7ipza7,
		BgL_bgl_string3073za700za7za7_3165za7, "Illegal match", 13);
	      DEFINE_STRING(BGl_string3074z00zz__gunza7ipza7,
		BgL_bgl_string3074za700za7za7_3166za7, "bad input: mode codes than bits",
		31);
	      DEFINE_STRING(BGl_string3075z00zz__gunza7ipza7,
		BgL_bgl_string3075za700za7za7_3167za7, "incomplete table", 16);
	      DEFINE_STRING(BGl_string3078z00zz__gunza7ipza7,
		BgL_bgl_string3078za700za7za7_3168za7, "bad input: more codes than bits",
		31);
	      DEFINE_STRING(BGl_string3080z00zz__gunza7ipza7,
		BgL_bgl_string3080za700za7za7_3169za7, "bad hop `~a'", 12);
	      DEFINE_STRING(BGl_string3081z00zz__gunza7ipza7,
		BgL_bgl_string3081za700za7za7_3170za7, "bad inflate code `~a'", 21);
	      DEFINE_STRING(BGl_string3082z00zz__gunza7ipza7,
		BgL_bgl_string3082za700za7za7_3171za7, "bad header `~a'", 15);
	      DEFINE_STRING(BGl_string3083z00zz__gunza7ipza7,
		BgL_bgl_string3083za700za7za7_3172za7, "gunzip", 6);
	      DEFINE_STRING(BGl_string3084z00zz__gunza7ipza7,
		BgL_bgl_string3084za700za7za7_3173za7, "unknown compression type `~a'", 29);
	      DEFINE_STRING(BGl_string3085z00zz__gunza7ipza7,
		BgL_bgl_string3085za700za7za7_3174za7, "cannot unzip encrypted file", 27);
	      DEFINE_STRING(BGl_string3086z00zz__gunza7ipza7,
		BgL_bgl_string3086za700za7za7_3175za7, "cannot handle multi-part files",
		30);
	      DEFINE_STRING(BGl_string3088z00zz__gunza7ipza7,
		BgL_bgl_string3088za700za7za7_3176za7, "display-substring", 17);
	      DEFINE_STRING(BGl_string3100z00zz__gunza7ipza7,
		BgL_bgl_string3100za700za7za7_3177za7, "port->gzip-port", 15);
	      DEFINE_STRING(BGl_string3090z00zz__gunza7ipza7,
		BgL_bgl_string3090za700za7za7_3178za7,
		"/tmp/bigloo/runtime/Unsafe/gunzip.scm", 37);
	      DEFINE_STRING(BGl_string3089z00zz__gunza7ipza7,
		BgL_bgl_string3089za700za7za7_3179za7, "Illegal index, start=~a end=~a",
		30);
	      DEFINE_STRING(BGl_string3091z00zz__gunza7ipza7,
		BgL_bgl_string3091za700za7za7_3180za7, "_gunzip-sendchars", 17);
	      DEFINE_STRING(BGl_string3102z00zz__gunza7ipza7,
		BgL_bgl_string3102za700za7za7_3181za7, "port->inflate-port", 18);
	      DEFINE_STRING(BGl_string3092z00zz__gunza7ipza7,
		BgL_bgl_string3092za700za7za7_3182za7, "input-port", 10);
	      DEFINE_STRING(BGl_string3103z00zz__gunza7ipza7,
		BgL_bgl_string3103za700za7za7_3183za7, "port->port", 10);
	      DEFINE_STRING(BGl_string3093z00zz__gunza7ipza7,
		BgL_bgl_string3093za700za7za7_3184za7, "output-port", 11);
	      DEFINE_STRING(BGl_string3104z00zz__gunza7ipza7,
		BgL_bgl_string3104za700za7za7_3185za7, "_port->inflate-port", 19);
	      DEFINE_STRING(BGl_string3094z00zz__gunza7ipza7,
		BgL_bgl_string3094za700za7za7_3186za7, "_inflate-sendchars", 18);
	      DEFINE_STRING(BGl_string3105z00zz__gunza7ipza7,
		BgL_bgl_string3105za700za7za7_3187za7, "_port->gzip-port", 16);
	      DEFINE_STRING(BGl_string3106z00zz__gunza7ipza7,
		BgL_bgl_string3106za700za7za7_3188za7, "_open-input-gzip-file", 21);
	      DEFINE_STRING(BGl_string3096z00zz__gunza7ipza7,
		BgL_bgl_string3096za700za7za7_3189za7, "eof", 3);
	      DEFINE_STRING(BGl_string3107z00zz__gunza7ipza7,
		BgL_bgl_string3107za700za7za7_3190za7, "bstring", 7);
	      DEFINE_STRING(BGl_string3108z00zz__gunza7ipza7,
		BgL_bgl_string3108za700za7za7_3191za7, "_open-input-inflate-file", 24);
	      DEFINE_STRING(BGl_string3098z00zz__gunza7ipza7,
		BgL_bgl_string3098za700za7za7_3192za7, "resume", 6);
	      DEFINE_STRING(BGl_string3110z00zz__gunza7ipza7,
		BgL_bgl_string3110za700za7za7_3193za7, "open-input-deflate-file", 23);
	      DEFINE_STRING(BGl_string3111z00zz__gunza7ipza7,
		BgL_bgl_string3111za700za7za7_3194za7, "_port->zlib-port", 16);
	      DEFINE_STRING(BGl_string3112z00zz__gunza7ipza7,
		BgL_bgl_string3112za700za7za7_3195za7, "port->zlib-port", 15);
	      DEFINE_STRING(BGl_string3113z00zz__gunza7ipza7,
		BgL_bgl_string3113za700za7za7_3196za7, "Illegal fcheck", 14);
	      DEFINE_STRING(BGl_string3114z00zz__gunza7ipza7,
		BgL_bgl_string3114za700za7za7_3197za7, "Unsupported format", 18);
	      DEFINE_STRING(BGl_string3115z00zz__gunza7ipza7,
		BgL_bgl_string3115za700za7za7_3198za7, "_open-input-zlib-file", 21);
	      DEFINE_STRING(BGl_string3116z00zz__gunza7ipza7,
		BgL_bgl_string3116za700za7za7_3199za7, "_check-adler32", 14);
	      DEFINE_STRING(BGl_string3118z00zz__gunza7ipza7,
		BgL_bgl_string3118za700za7za7_3200za7, "huft", 4);
	      DEFINE_STRING(BGl_string3120z00zz__gunza7ipza7,
		BgL_bgl_string3120za700za7za7_3201za7, "e", 1);
	      DEFINE_STRING(BGl_string3122z00zz__gunza7ipza7,
		BgL_bgl_string3122za700za7za7_3202za7, "b", 1);
	      DEFINE_STRING(BGl_string3124z00zz__gunza7ipza7,
		BgL_bgl_string3124za700za7za7_3203za7, "v", 1);
	      DEFINE_STRING(BGl_string3125z00zz__gunza7ipza7,
		BgL_bgl_string3125za700za7za7_3204za7, "_make-huft", 10);
	      DEFINE_STRING(BGl_string3126z00zz__gunza7ipza7,
		BgL_bgl_string3126za700za7za7_3205za7, "long", 4);
	      DEFINE_STRING(BGl_string3127z00zz__gunza7ipza7,
		BgL_bgl_string3127za700za7za7_3206za7, "_huft-e-set!", 12);
	      DEFINE_STRING(BGl_string3128z00zz__gunza7ipza7,
		BgL_bgl_string3128za700za7za7_3207za7, "_huft-e", 7);
	      DEFINE_STRING(BGl_string3130z00zz__gunza7ipza7,
		BgL_bgl_string3130za700za7za7_3208za7, "_huft-b", 7);
	      DEFINE_STRING(BGl_string3129z00zz__gunza7ipza7,
		BgL_bgl_string3129za700za7za7_3209za7, "_huft-b-set!", 12);
	      DEFINE_STRING(BGl_string3131z00zz__gunza7ipza7,
		BgL_bgl_string3131za700za7za7_3210za7, "_huft-v-set!", 12);
	      DEFINE_STRING(BGl_string3132z00zz__gunza7ipza7,
		BgL_bgl_string3132za700za7za7_3211za7, "_huft-v", 7);
	      DEFINE_STRING(BGl_string3134z00zz__gunza7ipza7,
		BgL_bgl_string3134za700za7za7_3212za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string3136z00zz__gunza7ipza7,
		BgL_bgl_string3136za700za7za7_3213za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string3137z00zz__gunza7ipza7,
		BgL_bgl_string3137za700za7za7_3214za7, "__gunzip", 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_huftzd2vzd2envz00zz__gunza7ipza7,
		BgL_bgl__huftza7d2vza7d2za7za7__3215z00, BGl__huftzd2vzd2zz__gunza7ipza7,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_makezd2huftzd2envz00zz__gunza7ipza7,
		BgL_bgl__makeza7d2huftza7d2za73216za7, BGl__makezd2huftzd2zz__gunza7ipza7,
		0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_gunza7ipzd2sendcharszd2envza7zz__gunza7ipza7,
		BgL_bgl__gunza7a7ipza7d2send3217z00,
		BGl__gunza7ipzd2sendcharsz75zz__gunza7ipza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_huftzf3zd2envz21zz__gunza7ipza7,
		BgL_bgl__huftza7f3za7f3za7za7__g3218z00, BGl__huftzf3zf3zz__gunza7ipza7, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_checkzd2adler32zd2envz00zz__gunza7ipza7,
		BgL_bgl__checkza7d2adler323219za7, BGl__checkzd2adler32zd2zz__gunza7ipza7,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_huftzd2ezd2envz00zz__gunza7ipza7,
		BgL_bgl__huftza7d2eza7d2za7za7__3220z00, BGl__huftzd2ezd2zz__gunza7ipza7,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_portzd2ze3gza7ipzd2portzd2envz96zz__gunza7ipza7,
		BgL_bgl__portza7d2za7e3gza7a7i3221za7, opt_generic_entry,
		BGl__portzd2ze3gza7ipzd2portz44zz__gunza7ipza7, BFALSE, -1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_z52allocatezd2huftzd2envz52zz__gunza7ipza7,
		BgL_bgl__za752allocateza7d2h3222z00,
		BGl__z52allocatezd2huftz80zz__gunza7ipza7, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2inputzd2za7libzd2filezd2envza7zz__gunza7ipza7,
		BgL_bgl__openza7d2inputza7d23223z00, opt_generic_entry,
		BGl__openzd2inputzd2za7libzd2filez75zz__gunza7ipza7, BFALSE, -1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_huftzd2ezd2setz12zd2envzc0zz__gunza7ipza7,
		BgL_bgl__huftza7d2eza7d2setza73224za7,
		BGl__huftzd2ezd2setz12z12zz__gunza7ipza7, 0L, BUNSPEC, 2);
	extern obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_huftzd2bzd2setz12zd2envzc0zz__gunza7ipza7,
		BgL_bgl__huftza7d2bza7d2setza73225za7,
		BGl__huftzd2bzd2setz12z12zz__gunza7ipza7, 0L, BUNSPEC, 2);
	extern obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_portzd2ze3za7libzd2portzd2envz96zz__gunza7ipza7,
		BgL_bgl__portza7d2za7e3za7a7li3226za7, opt_generic_entry,
		BGl__portzd2ze3za7libzd2portz44zz__gunza7ipza7, BFALSE, -1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__gunza7ipza7(long
		BgL_checksumz00_4900, char *BgL_fromz00_4901)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__gunza7ipza7))
				{
					BGl_requirezd2initializa7ationz75zz__gunza7ipza7 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__gunza7ipza7();
					BGl_importedzd2moduleszd2initz00zz__gunza7ipza7();
					BGl_objectzd2initzd2zz__gunza7ipza7();
					BGl_methodzd2initzd2zz__gunza7ipza7();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__gunza7ipza7()
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 25 */
			BGl_symbol3045z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string3046z00zz__gunza7ipza7);
			BGl_symbol3047z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string3048z00zz__gunza7ipza7);
			BGl_symbol3049z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string3050z00zz__gunza7ipza7);
			BGl_symbol3051z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string3052z00zz__gunza7ipza7);
			BGl_list3056z00zz__gunza7ipza7 =
				MAKE_PAIR(BINT(((long) 3)),
				MAKE_PAIR(BINT(((long) 4)),
					MAKE_PAIR(BINT(((long) 5)),
						MAKE_PAIR(BINT(((long) 6)),
							MAKE_PAIR(BINT(((long) 7)),
								MAKE_PAIR(BINT(((long) 8)),
									MAKE_PAIR(BINT(((long) 9)),
										MAKE_PAIR(BINT(((long) 10)),
											MAKE_PAIR(BINT(((long) 11)),
												MAKE_PAIR(BINT(((long) 13)),
													MAKE_PAIR(BINT(((long) 15)),
														MAKE_PAIR(BINT(((long) 17)),
															MAKE_PAIR(BINT(((long) 19)),
																MAKE_PAIR(BINT(((long) 23)),
																	MAKE_PAIR(BINT(((long) 27)),
																		MAKE_PAIR(BINT(((long) 31)),
																			MAKE_PAIR(BINT(((long) 35)),
																				MAKE_PAIR(BINT(((long) 43)),
																					MAKE_PAIR(BINT(((long) 51)),
																						MAKE_PAIR(BINT(((long) 59)),
																							MAKE_PAIR(BINT(((long) 67)),
																								MAKE_PAIR(BINT(((long) 83)),
																									MAKE_PAIR(BINT(((long) 99)),
																										MAKE_PAIR(BINT(((long)
																													115)),
																											MAKE_PAIR(BINT(((long)
																														131)),
																												MAKE_PAIR(BINT(((long)
																															163)),
																													MAKE_PAIR(BINT(((long)
																																195)),
																														MAKE_PAIR(BINT((
																																	(long) 227)),
																															MAKE_PAIR(BINT((
																																		(long)
																																		258)),
																																MAKE_PAIR(BINT((
																																			(long)
																																			0)),
																																	MAKE_PAIR(BINT
																																		(((long)
																																				0)),
																																		BNIL)))))))))))))))))))))))))))))));
			BGl_vector3055z00zz__gunza7ipza7 =
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
				(BGl_list3056z00zz__gunza7ipza7);
			BGl_list3058z00zz__gunza7ipza7 =
				MAKE_PAIR(BINT(((long) 0)), MAKE_PAIR(BINT(((long) 0)),
					MAKE_PAIR(BINT(((long) 0)), MAKE_PAIR(BINT(((long) 0)),
							MAKE_PAIR(BINT(((long) 0)), MAKE_PAIR(BINT(((long) 0)),
									MAKE_PAIR(BINT(((long) 0)), MAKE_PAIR(BINT(((long) 0)),
											MAKE_PAIR(BINT(((long) 1)), MAKE_PAIR(BINT(((long) 1)),
													MAKE_PAIR(BINT(((long) 1)),
														MAKE_PAIR(BINT(((long) 1)),
															MAKE_PAIR(BINT(((long) 2)),
																MAKE_PAIR(BINT(((long) 2)),
																	MAKE_PAIR(BINT(((long) 2)),
																		MAKE_PAIR(BINT(((long) 2)),
																			MAKE_PAIR(BINT(((long) 3)),
																				MAKE_PAIR(BINT(((long) 3)),
																					MAKE_PAIR(BINT(((long) 3)),
																						MAKE_PAIR(BINT(((long) 3)),
																							MAKE_PAIR(BINT(((long) 4)),
																								MAKE_PAIR(BINT(((long) 4)),
																									MAKE_PAIR(BINT(((long) 4)),
																										MAKE_PAIR(BINT(((long) 4)),
																											MAKE_PAIR(BINT(((long)
																														5)),
																												MAKE_PAIR(BINT(((long)
																															5)),
																													MAKE_PAIR(BINT(((long)
																																5)),
																														MAKE_PAIR(BINT((
																																	(long) 5)),
																															MAKE_PAIR(BINT((
																																		(long) 0)),
																																MAKE_PAIR(BINT((
																																			(long)
																																			99)),
																																	MAKE_PAIR(BINT
																																		(((long)
																																				99)),
																																		BNIL)))))))))))))))))))))))))))))));
			BGl_vector3057z00zz__gunza7ipza7 =
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
				(BGl_list3058z00zz__gunza7ipza7);
			BGl_list3060z00zz__gunza7ipza7 =
				MAKE_PAIR(BINT(((long) 1)), MAKE_PAIR(BINT(((long) 2)),
					MAKE_PAIR(BINT(((long) 3)), MAKE_PAIR(BINT(((long) 4)),
							MAKE_PAIR(BINT(((long) 5)), MAKE_PAIR(BINT(((long) 7)),
									MAKE_PAIR(BINT(((long) 9)), MAKE_PAIR(BINT(((long) 13)),
											MAKE_PAIR(BINT(((long) 17)), MAKE_PAIR(BINT(((long) 25)),
													MAKE_PAIR(BINT(((long) 33)),
														MAKE_PAIR(BINT(((long) 49)),
															MAKE_PAIR(BINT(((long) 65)),
																MAKE_PAIR(BINT(((long) 97)),
																	MAKE_PAIR(BINT(((long) 129)),
																		MAKE_PAIR(BINT(((long) 193)),
																			MAKE_PAIR(BINT(((long) 257)),
																				MAKE_PAIR(BINT(((long) 385)),
																					MAKE_PAIR(BINT(((long) 513)),
																						MAKE_PAIR(BINT(((long) 769)),
																							MAKE_PAIR(BINT(((long) 1025)),
																								MAKE_PAIR(BINT(((long) 1537)),
																									MAKE_PAIR(BINT(((long) 2049)),
																										MAKE_PAIR(BINT(((long)
																													3073)),
																											MAKE_PAIR(BINT(((long)
																														4097)),
																												MAKE_PAIR(BINT(((long)
																															6145)),
																													MAKE_PAIR(BINT(((long)
																																8193)),
																														MAKE_PAIR(BINT((
																																	(long)
																																	12289)),
																															MAKE_PAIR(BINT((
																																		(long)
																																		16385)),
																																MAKE_PAIR(BINT((
																																			(long)
																																			24577)),
																																	BNIL))))))))))))))))))))))))))))));
			BGl_vector3059z00zz__gunza7ipza7 =
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
				(BGl_list3060z00zz__gunza7ipza7);
			BGl_list3062z00zz__gunza7ipza7 =
				MAKE_PAIR(BINT(((long) 0)), MAKE_PAIR(BINT(((long) 0)),
					MAKE_PAIR(BINT(((long) 0)), MAKE_PAIR(BINT(((long) 0)),
							MAKE_PAIR(BINT(((long) 1)), MAKE_PAIR(BINT(((long) 1)),
									MAKE_PAIR(BINT(((long) 2)), MAKE_PAIR(BINT(((long) 2)),
											MAKE_PAIR(BINT(((long) 3)), MAKE_PAIR(BINT(((long) 3)),
													MAKE_PAIR(BINT(((long) 4)),
														MAKE_PAIR(BINT(((long) 4)),
															MAKE_PAIR(BINT(((long) 5)),
																MAKE_PAIR(BINT(((long) 5)),
																	MAKE_PAIR(BINT(((long) 6)),
																		MAKE_PAIR(BINT(((long) 6)),
																			MAKE_PAIR(BINT(((long) 7)),
																				MAKE_PAIR(BINT(((long) 7)),
																					MAKE_PAIR(BINT(((long) 8)),
																						MAKE_PAIR(BINT(((long) 8)),
																							MAKE_PAIR(BINT(((long) 9)),
																								MAKE_PAIR(BINT(((long) 9)),
																									MAKE_PAIR(BINT(((long) 10)),
																										MAKE_PAIR(BINT(((long) 10)),
																											MAKE_PAIR(BINT(((long)
																														11)),
																												MAKE_PAIR(BINT(((long)
																															11)),
																													MAKE_PAIR(BINT(((long)
																																12)),
																														MAKE_PAIR(BINT((
																																	(long) 12)),
																															MAKE_PAIR(BINT((
																																		(long) 13)),
																																MAKE_PAIR(BINT((
																																			(long)
																																			13)),
																																	BNIL))))))))))))))))))))))))))))));
			BGl_vector3061z00zz__gunza7ipza7 =
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
				(BGl_list3062z00zz__gunza7ipza7);
			BGl_vector3066z00zz__gunza7ipza7 =
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BNIL);
			BGl_list3068z00zz__gunza7ipza7 =
				MAKE_PAIR(BINT(((long) 0)), MAKE_PAIR(BINT(((long) 1)),
					MAKE_PAIR(BINT(((long) 3)), MAKE_PAIR(BINT(((long) 7)),
							MAKE_PAIR(BINT(((long) 15)), MAKE_PAIR(BINT(((long) 31)),
									MAKE_PAIR(BINT(((long) 63)), MAKE_PAIR(BINT(((long) 127)),
											MAKE_PAIR(BINT(((long) 255)),
												MAKE_PAIR(BINT(((long) 511)),
													MAKE_PAIR(BINT(((long) 1023)),
														MAKE_PAIR(BINT(((long) 2047)),
															MAKE_PAIR(BINT(((long) 4095)),
																MAKE_PAIR(BINT(((long) 8191)),
																	MAKE_PAIR(BINT(((long) 16383)),
																		MAKE_PAIR(BINT(((long) 32767)),
																			MAKE_PAIR(BINT(((long) 65535)),
																				BNIL)))))))))))))))));
			BGl_vector3067z00zz__gunza7ipza7 =
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
				(BGl_list3068z00zz__gunza7ipza7);
			BGl_list3077z00zz__gunza7ipza7 =
				MAKE_PAIR(BINT(((long) 16)), MAKE_PAIR(BINT(((long) 17)),
					MAKE_PAIR(BINT(((long) 18)), MAKE_PAIR(BINT(((long) 0)),
							MAKE_PAIR(BINT(((long) 8)), MAKE_PAIR(BINT(((long) 7)),
									MAKE_PAIR(BINT(((long) 9)), MAKE_PAIR(BINT(((long) 6)),
											MAKE_PAIR(BINT(((long) 10)), MAKE_PAIR(BINT(((long) 5)),
													MAKE_PAIR(BINT(((long) 11)),
														MAKE_PAIR(BINT(((long) 4)),
															MAKE_PAIR(BINT(((long) 12)),
																MAKE_PAIR(BINT(((long) 3)),
																	MAKE_PAIR(BINT(((long) 13)),
																		MAKE_PAIR(BINT(((long) 2)),
																			MAKE_PAIR(BINT(((long) 14)),
																				MAKE_PAIR(BINT(((long) 1)),
																					MAKE_PAIR(BINT(((long) 15)),
																						BNIL)))))))))))))))))));
			BGl_vector3076z00zz__gunza7ipza7 =
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
				(BGl_list3077z00zz__gunza7ipza7);
			BGl_symbol3087z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string3088z00zz__gunza7ipza7);
			BGl_symbol3095z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string3096z00zz__gunza7ipza7);
			BGl_symbol3097z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string3098z00zz__gunza7ipza7);
			BGl_symbol3099z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string3100z00zz__gunza7ipza7);
			BGl_symbol3101z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string3102z00zz__gunza7ipza7);
			BGl_symbol3109z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string3110z00zz__gunza7ipza7);
			BGl_symbol3117z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string3118z00zz__gunza7ipza7);
			BGl_symbol3119z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string3120z00zz__gunza7ipza7);
			BGl_symbol3121z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string3122z00zz__gunza7ipza7);
			return (BGl_symbol3123z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string3124z00zz__gunza7ipza7), BUNSPEC);
		}
	}



/* build-vector */
	obj_t BGl_buildzd2vectorzd2zz__gunza7ipza7(obj_t BgL_nz00_3, obj_t BgL_pz00_4)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 233 */
			{	/* Unsafe/gunzip.scm 234 */
				obj_t BgL_vz00_945;

				BgL_vz00_945 = make_vector(CINT(BgL_nz00_3), BUNSPEC);
				{
					long BgL_i1873z00_947;

					BgL_i1873z00_947 = ((long) 0);
				BgL_zc3anonymousza32059ze3z83_948:
					if ((BgL_i1873z00_947 < (long) CINT(BgL_nz00_3)))
						{	/* Unsafe/gunzip.scm 235 */
							{	/* Unsafe/gunzip.scm 235 */
								obj_t BgL_arg2061z00_951;

								BgL_arg2061z00_951 =
									PROCEDURE_ENTRY(BgL_pz00_4) (BgL_pz00_4,
									BINT(BgL_i1873z00_947), BEOA);
								VECTOR_SET(BgL_vz00_945,
									(int) (BgL_i1873z00_947), BgL_arg2061z00_951);
							}
							{
								long BgL_i1873z00_5256;

								BgL_i1873z00_5256 = (BgL_i1873z00_947 + ((long) 1));
								BgL_i1873z00_947 = BgL_i1873z00_5256;
								goto BgL_zc3anonymousza32059ze3z83_948;
							}
						}
					else
						{	/* Unsafe/gunzip.scm 235 */
							((bool_t) 0);
						}
				}
				return BgL_vz00_945;
			}
		}
	}



/* subvector */
	obj_t BGl_subvectorz00zz__gunza7ipza7(obj_t BgL_vz00_5, long BgL_offsetz00_6)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 241 */
			{	/* Unsafe/gunzip.scm 242 */
				long BgL_lenz00_955;

				{	/* Unsafe/gunzip.scm 242 */
					int BgL_arg2070z00_967;

					BgL_arg2070z00_967 = VECTOR_LENGTH(BgL_vz00_5);
					BgL_lenz00_955 = ((long) (BgL_arg2070z00_967) - BgL_offsetz00_6);
				}
				{	/* Unsafe/gunzip.scm 242 */
					obj_t BgL_newz00_956;

					BgL_newz00_956 = make_vector((int) (BgL_lenz00_955), BUNSPEC);
					{	/* Unsafe/gunzip.scm 243 */

						{
							long BgL_i1875z00_958;

							BgL_i1875z00_958 = ((long) 0);
						BgL_zc3anonymousza32064ze3z83_959:
							if ((BgL_i1875z00_958 < BgL_lenz00_955))
								{	/* Unsafe/gunzip.scm 244 */
									{	/* Unsafe/gunzip.scm 246 */
										obj_t BgL_arg2066z00_962;

										{	/* Unsafe/gunzip.scm 246 */
											long BgL_arg2067z00_963;

											BgL_arg2067z00_963 = (BgL_i1875z00_958 + BgL_offsetz00_6);
											BgL_arg2066z00_962 =
												VECTOR_REF(BgL_vz00_5, (int) (BgL_arg2067z00_963));
										}
										VECTOR_SET(BgL_newz00_956,
											(int) (BgL_i1875z00_958), BgL_arg2066z00_962);
									}
									{
										long BgL_i1875z00_5270;

										BgL_i1875z00_5270 = (BgL_i1875z00_958 + ((long) 1));
										BgL_i1875z00_958 = BgL_i1875z00_5270;
										goto BgL_zc3anonymousza32064ze3z83_959;
									}
								}
							else
								{	/* Unsafe/gunzip.scm 244 */
									((bool_t) 0);
								}
						}
						return BgL_newz00_956;
					}
				}
			}
		}
	}



/* inflate-entry */
	obj_t BGl_inflatezd2entryzd2zz__gunza7ipza7(obj_t BgL_inputzd2portzd2_10,
		obj_t BgL_slidez00_11)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 303 */
			{	/* Unsafe/gunzip.scm 306 */
				obj_t BgL_wsiza7eza7_971;

				obj_t BgL_wpz00_972;

				obj_t BgL_bbz00_974;

				obj_t BgL_bkz00_975;

				obj_t BgL_bufferz00_976;

				BgL_wsiza7eza7_971 = MAKE_CELL(BUNSPEC);
				BgL_wpz00_972 = MAKE_CELL(BUNSPEC);
				BgL_bbz00_974 = MAKE_CELL(BUNSPEC);
				BgL_bkz00_975 = MAKE_CELL(BUNSPEC);
				BgL_bufferz00_976 = BUNSPEC;
				{	/* Unsafe/gunzip.scm 306 */
					obj_t BgL_auxz00_4686;

					{	/* Unsafe/gunzip.scm 306 */
						obj_t BgL_stringz00_2559;

						BgL_stringz00_2559 = BgL_slidez00_11;
						BgL_auxz00_4686 = BINT(STRING_LENGTH(BgL_stringz00_2559));
					}
					CELL_SET(BgL_wsiza7eza7_971, BgL_auxz00_4686);
				}
				{	/* Unsafe/gunzip.scm 860 */
					obj_t BgL_auxz00_4687;

					BgL_auxz00_4687 = BINT(((long) 0));
					CELL_SET(BgL_wpz00_972, BgL_auxz00_4687);
				}
				{	/* Unsafe/gunzip.scm 860 */
					obj_t BgL_auxz00_4688;

					BgL_auxz00_4688 = BINT(((long) 0));
					CELL_SET(BgL_bbz00_974, BgL_auxz00_4688);
				}
				{	/* Unsafe/gunzip.scm 860 */
					obj_t BgL_auxz00_4689;

					BgL_auxz00_4689 = BINT(((long) 0));
					CELL_SET(BgL_bkz00_975, BgL_auxz00_4689);
				}
				BgL_bufferz00_976 = make_string(((long) 256), ((unsigned char) ' '));
				{	/* Unsafe/gunzip.scm 858 */
					obj_t BgL_auxz00_4690;

					BgL_auxz00_4690 = BINT(((long) 0));
					CELL_SET(BgL_wpz00_972, BgL_auxz00_4690);
				}
				{	/* Unsafe/gunzip.scm 859 */
					obj_t BgL_auxz00_4691;

					BgL_auxz00_4691 = BINT(((long) 0));
					CELL_SET(BgL_bkz00_975, BgL_auxz00_4691);
				}
				{	/* Unsafe/gunzip.scm 860 */
					obj_t BgL_auxz00_4692;

					BgL_auxz00_4692 = BINT(((long) 0));
					CELL_SET(BgL_bbz00_974, BgL_auxz00_4692);
				}
				return
					BGl_loopz00zz__gunza7ipza7(BgL_bbz00_974, BgL_bkz00_975,
					BgL_inputzd2portzd2_10, BgL_slidez00_11, BgL_wsiza7eza7_971,
					BgL_wpz00_972, BINT(((long) 0)));
		}}
	}



/* laap */
	obj_t BGl_laapz00zz__gunza7ipza7(obj_t BgL_huftsz00_4310, obj_t BgL_hz00_4309,
		obj_t BgL_wpz00_4308, obj_t BgL_bbz00_4307, obj_t BgL_bkz00_4306,
		obj_t BgL_inputzd2portzd2_4305, obj_t BgL_slidez00_4304,
		obj_t BgL_wsiza7eza7_4303, obj_t BgL_statez00_998, obj_t BgL_ez00_999,
		obj_t BgL_rz00_1000)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 867 */
			if ((BgL_statez00_998 == BGl_symbol3045z00zz__gunza7ipza7))
				{	/* Unsafe/gunzip.scm 872 */
					bool_t BgL_testz00_5285;

					if (CBOOL(BgL_rz00_1000))
						{	/* Unsafe/gunzip.scm 872 */
							BgL_testz00_5285 = ((long) CINT(BgL_ez00_999) == ((long) 0));
						}
					else
						{	/* Unsafe/gunzip.scm 872 */
							BgL_testz00_5285 = ((bool_t) 0);
						}
					if (BgL_testz00_5285)
						{	/* Unsafe/gunzip.scm 873 */
							obj_t BgL_arg2078z00_1005;

							if (((long) CINT(BgL_huftsz00_4310) > (long) CINT(BgL_hz00_4309)))
								{	/* Unsafe/gunzip.scm 873 */
									BgL_arg2078z00_1005 = BgL_huftsz00_4310;
								}
							else
								{	/* Unsafe/gunzip.scm 873 */
									BgL_arg2078z00_1005 = BgL_hz00_4309;
								}
							return
								BGl_loopz00zz__gunza7ipza7(BgL_bbz00_4307, BgL_bkz00_4306,
								BgL_inputzd2portzd2_4305, BgL_slidez00_4304,
								BgL_wsiza7eza7_4303, BgL_wpz00_4308, BgL_arg2078z00_1005);
						}
					else
						{	/* Unsafe/gunzip.scm 877 */
							obj_t BgL_val0_1979z00_1007;

							obj_t BgL_val1_1980z00_1008;

							BgL_val0_1979z00_1007 = BGl_symbol3047z00zz__gunza7ipza7;
							BgL_val1_1980z00_1008 = CELL_REF(BgL_wpz00_4308);
							{	/* Unsafe/gunzip.scm 877 */
								int BgL_auxz00_5295;

								BgL_auxz00_5295 = (int) (((long) 3));
								BGL_MVALUES_NUMBER_SET(BgL_auxz00_5295);
							}
							{	/* Unsafe/gunzip.scm 877 */
								int BgL_auxz00_5298;

								BgL_auxz00_5298 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_auxz00_5298, BgL_val1_1980z00_1008);
							}
							{	/* Unsafe/gunzip.scm 877 */
								int BgL_auxz00_5301;

								BgL_auxz00_5301 = (int) (((long) 2));
								BGL_MVALUES_VAL_SET(BgL_auxz00_5301, BUNSPEC);
							}
							return BgL_val0_1979z00_1007;
						}
				}
			else
				{	/* Unsafe/gunzip.scm 870 */
					if ((BgL_statez00_998 == BGl_symbol3049z00zz__gunza7ipza7))
						{	/* Unsafe/gunzip.scm 879 */
							obj_t BgL_val0_1982z00_1011;

							BgL_val0_1982z00_1011 = BGl_symbol3051z00zz__gunza7ipza7;
							{	/* Unsafe/gunzip.scm 882 */
								obj_t BgL_zc3anonymousza32081ze3z83_4301;

								BgL_zc3anonymousza32081ze3z83_4301 =
									make_fx_procedure
									(BGl_zc3anonymousza32081ze3z83zz__gunza7ipza7,
									(int) (((long) 0)), (int) (((long) 9)));
								PROCEDURE_SET(BgL_zc3anonymousza32081ze3z83_4301,
									(int) (((long) 0)), BgL_wsiza7eza7_4303);
								PROCEDURE_SET(BgL_zc3anonymousza32081ze3z83_4301,
									(int) (((long) 1)), BgL_slidez00_4304);
								PROCEDURE_SET(BgL_zc3anonymousza32081ze3z83_4301,
									(int) (((long) 2)), BgL_inputzd2portzd2_4305);
								PROCEDURE_SET(BgL_zc3anonymousza32081ze3z83_4301,
									(int) (((long) 3)), BgL_bkz00_4306);
								PROCEDURE_SET(BgL_zc3anonymousza32081ze3z83_4301,
									(int) (((long) 4)), BgL_bbz00_4307);
								PROCEDURE_SET(BgL_zc3anonymousza32081ze3z83_4301,
									(int) (((long) 5)), BgL_wpz00_4308);
								PROCEDURE_SET(BgL_zc3anonymousza32081ze3z83_4301,
									(int) (((long) 6)), BgL_hz00_4309);
								PROCEDURE_SET(BgL_zc3anonymousza32081ze3z83_4301,
									(int) (((long) 7)), BgL_huftsz00_4310);
								PROCEDURE_SET(BgL_zc3anonymousza32081ze3z83_4301,
									(int) (((long) 8)), BgL_rz00_1000);
								{	/* Unsafe/gunzip.scm 879 */
									int BgL_auxz00_5327;

									BgL_auxz00_5327 = (int) (((long) 3));
									BGL_MVALUES_NUMBER_SET(BgL_auxz00_5327);
								}
								{	/* Unsafe/gunzip.scm 879 */
									int BgL_auxz00_5330;

									BgL_auxz00_5330 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_auxz00_5330, BgL_ez00_999);
								}
								{	/* Unsafe/gunzip.scm 879 */
									int BgL_auxz00_5333;

									BgL_auxz00_5333 = (int) (((long) 2));
									BGL_MVALUES_VAL_SET(BgL_auxz00_5333,
										BgL_zc3anonymousza32081ze3z83_4301);
								}
								return BgL_val0_1982z00_1011;
							}
						}
					else
						{	/* Unsafe/gunzip.scm 886 */
							BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2072z00_2591;

							{	/* Unsafe/gunzip.scm 886 */
								obj_t BgL_arg2073z00_2592;

								{	/* Unsafe/gunzip.scm 886 */

									{	/* Unsafe/gunzip.scm 886 */

										BgL_arg2073z00_2592 =
											BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
									}
								}
								BgL_arg2072z00_2591 =
									BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(BFALSE,
									BFALSE, BgL_arg2073z00_2592, BGl_string3053z00zz__gunza7ipza7,
									BGl_string3054z00zz__gunza7ipza7, BgL_statez00_998);
							}
							return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2072z00_2591));
						}
				}
		}
	}



/* loop */
	obj_t BGl_loopz00zz__gunza7ipza7(obj_t BgL_bbz00_4316, obj_t BgL_bkz00_4315,
		obj_t BgL_inputzd2portzd2_4314, obj_t BgL_slidez00_4313,
		obj_t BgL_wsiza7eza7_4312, obj_t BgL_wpz00_4311, obj_t BgL_hz00_991)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 863 */
			{	/* Unsafe/gunzip.scm 865 */
				obj_t BgL_statez00_994;

				BgL_statez00_994 =
					BGl_inflatezd2blockzd2zz__gunza7ipza7(BgL_bbz00_4316, BgL_bkz00_4315,
					BgL_inputzd2portzd2_4314, BgL_slidez00_4313, BgL_wsiza7eza7_4312,
					BgL_wpz00_4311);
				{	/* Unsafe/gunzip.scm 867 */
					obj_t BgL_ez00_995;

					obj_t BgL_rz00_996;

					{	/* Unsafe/gunzip.scm 867 */
						int BgL_auxz00_5341;

						BgL_auxz00_5341 = (int) (((long) 1));
						BgL_ez00_995 = BGL_MVALUES_VAL(BgL_auxz00_5341);
					}
					{	/* Unsafe/gunzip.scm 867 */
						int BgL_auxz00_5344;

						BgL_auxz00_5344 = (int) (((long) 2));
						BgL_rz00_996 = BGL_MVALUES_VAL(BgL_auxz00_5344);
					}
					return
						BGl_laapz00zz__gunza7ipza7(BINT(((long) 0)), BgL_hz00_991,
						BgL_wpz00_4311, BgL_bbz00_4316, BgL_bkz00_4315,
						BgL_inputzd2portzd2_4314, BgL_slidez00_4313, BgL_wsiza7eza7_4312,
						BgL_statez00_994, BgL_ez00_995, BgL_rz00_996);
		}}}
	}



/* inflate-block */
	obj_t BGl_inflatezd2blockzd2zz__gunza7ipza7(obj_t BgL_bbz00_4322,
		obj_t BgL_bkz00_4321, obj_t BgL_inputzd2portzd2_4320,
		obj_t BgL_slidez00_4319, obj_t BgL_wsiza7eza7_4318, obj_t BgL_wpz00_4317)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 855 */
			{	/* Unsafe/gunzip.scm 830 */
				long BgL_ez00_1726;

				{	/* Unsafe/gunzip.scm 830 */
					obj_t BgL_arg2501z00_1759;

					BGl_NEEDBITSz00zz__gunza7ipza7(BgL_bbz00_4322, BgL_bkz00_4321,
						BgL_inputzd2portzd2_4320, BINT(((long) 1)));
					{	/* Unsafe/gunzip.scm 830 */
						obj_t BgL_rz00_3501;

						BgL_rz00_3501 = CELL_REF(BgL_bbz00_4322);
						BGl_DUMPBITSz00zz__gunza7ipza7(BgL_bkz00_4321, BgL_bbz00_4322,
							((long) 1));
						BgL_arg2501z00_1759 = BgL_rz00_3501;
					}
					BgL_ez00_1726 = ((long) CINT(BgL_arg2501z00_1759) & ((long) 1));
				}
				{	/* Unsafe/gunzip.scm 832 */
					long BgL_tz00_1727;

					{	/* Unsafe/gunzip.scm 832 */
						obj_t BgL_arg2499z00_1757;

						BGl_NEEDBITSz00zz__gunza7ipza7(BgL_bbz00_4322, BgL_bkz00_4321,
							BgL_inputzd2portzd2_4320, BINT(((long) 2)));
						{	/* Unsafe/gunzip.scm 832 */
							obj_t BgL_rz00_3505;

							BgL_rz00_3505 = CELL_REF(BgL_bbz00_4322);
							BGl_DUMPBITSz00zz__gunza7ipza7(BgL_bkz00_4321, BgL_bbz00_4322,
								((long) 2));
							BgL_arg2499z00_1757 = BgL_rz00_3505;
						}
						BgL_tz00_1727 = ((long) CINT(BgL_arg2499z00_1757) & ((long) 3));
					}
					{	/* Unsafe/gunzip.scm 833 */
						obj_t BgL_statez00_1728;

						switch (BgL_tz00_1727)
							{
							case ((long) 2):

								BgL_statez00_1728 =
									BGl_inflatezd2dynamiczd2zz__gunza7ipza7
									(BgL_inputzd2portzd2_4320, BgL_bbz00_4322, BgL_bkz00_4321,
									BgL_slidez00_4319, BgL_wsiza7eza7_4318, BgL_wpz00_4317);
								break;
							case ((long) 0):

								BgL_statez00_1728 =
									BGl_inflatezd2storedzd2zz__gunza7ipza7
									(BgL_inputzd2portzd2_4320, BgL_bbz00_4322, BgL_bkz00_4321,
									BgL_wpz00_4317, BgL_slidez00_4319, BgL_wsiza7eza7_4318);
								break;
							case ((long) 1):

								BgL_statez00_1728 =
									BGl_inflatezd2fixedzd2zz__gunza7ipza7
									(BgL_inputzd2portzd2_4320, BgL_slidez00_4319,
									BgL_wsiza7eza7_4318, BgL_wpz00_4317, BgL_bkz00_4321,
									BgL_bbz00_4322);
								break;
							default:
								BgL_statez00_1728 =
									BGl_case_else1910z00zz__gunza7ipza7(BgL_inputzd2portzd2_4320,
									BgL_tz00_1727);
							}
						{	/* Unsafe/gunzip.scm 841 */
							obj_t BgL_valz00_1729;

							obj_t BgL_kontz00_1730;

							{	/* Unsafe/gunzip.scm 841 */
								int BgL_auxz00_5364;

								BgL_auxz00_5364 = (int) (((long) 1));
								BgL_valz00_1729 = BGL_MVALUES_VAL(BgL_auxz00_5364);
							}
							{	/* Unsafe/gunzip.scm 841 */
								int BgL_auxz00_5367;

								BgL_auxz00_5367 = (int) (((long) 2));
								BgL_kontz00_1730 = BGL_MVALUES_VAL(BgL_auxz00_5367);
							}
							return
								BGl_loop_2964z00zz__gunza7ipza7(BINT(BgL_ez00_1726),
								BgL_statez00_1728, BgL_valz00_1729, BgL_kontz00_1730);
						}
					}
				}
			}
		}
	}



/* loop_2964 */
	obj_t BGl_loop_2964z00zz__gunza7ipza7(obj_t BgL_ez00_4323,
		obj_t BgL_statez00_1732, obj_t BgL_valz00_1733, obj_t BgL_kontz00_1734)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 841 */
			if ((BgL_statez00_1732 == BGl_symbol3045z00zz__gunza7ipza7))
				{	/* Unsafe/gunzip.scm 846 */
					obj_t BgL_val0_1973z00_1738;

					BgL_val0_1973z00_1738 = BGl_symbol3045z00zz__gunza7ipza7;
					{	/* Unsafe/gunzip.scm 846 */
						int BgL_auxz00_5374;

						BgL_auxz00_5374 = (int) (((long) 3));
						BGL_MVALUES_NUMBER_SET(BgL_auxz00_5374);
					}
					{	/* Unsafe/gunzip.scm 846 */
						int BgL_auxz00_5377;

						BgL_auxz00_5377 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_auxz00_5377, BgL_ez00_4323);
					}
					{	/* Unsafe/gunzip.scm 846 */
						int BgL_auxz00_5380;

						BgL_auxz00_5380 = (int) (((long) 2));
						BGL_MVALUES_VAL_SET(BgL_auxz00_5380, BgL_valz00_1733);
					}
					return BgL_val0_1973z00_1738;
				}
			else
				{	/* Unsafe/gunzip.scm 844 */
					if ((BgL_statez00_1732 == BGl_symbol3049z00zz__gunza7ipza7))
						{	/* Unsafe/gunzip.scm 848 */
							obj_t BgL_val0_1976z00_1742;

							BgL_val0_1976z00_1742 = BGl_symbol3049z00zz__gunza7ipza7;
							{	/* Unsafe/gunzip.scm 851 */
								obj_t BgL_zc3anonymousza32493ze3z83_4253;

								BgL_zc3anonymousza32493ze3z83_4253 =
									make_fx_procedure
									(BGl_zc3anonymousza32493ze3z83zz__gunza7ipza7,
									(int) (((long) 0)), (int) (((long) 2)));
								PROCEDURE_SET(BgL_zc3anonymousza32493ze3z83_4253,
									(int) (((long) 0)), BgL_ez00_4323);
								PROCEDURE_SET(BgL_zc3anonymousza32493ze3z83_4253,
									(int) (((long) 1)), BgL_kontz00_1734);
								{	/* Unsafe/gunzip.scm 848 */
									int BgL_auxz00_5392;

									BgL_auxz00_5392 = (int) (((long) 3));
									BGL_MVALUES_NUMBER_SET(BgL_auxz00_5392);
								}
								{	/* Unsafe/gunzip.scm 848 */
									int BgL_auxz00_5395;

									BgL_auxz00_5395 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_auxz00_5395, BgL_valz00_1733);
								}
								{	/* Unsafe/gunzip.scm 848 */
									int BgL_auxz00_5398;

									BgL_auxz00_5398 = (int) (((long) 2));
									BGL_MVALUES_VAL_SET(BgL_auxz00_5398,
										BgL_zc3anonymousza32493ze3z83_4253);
								}
								return BgL_val0_1976z00_1742;
							}
						}
					else
						{	/* Unsafe/gunzip.scm 855 */
							BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2072z00_3534;

							{	/* Unsafe/gunzip.scm 855 */
								obj_t BgL_arg2073z00_3535;

								{	/* Unsafe/gunzip.scm 855 */

									{	/* Unsafe/gunzip.scm 855 */

										BgL_arg2073z00_3535 =
											BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
									}
								}
								BgL_arg2072z00_3534 =
									BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(BFALSE,
									BFALSE, BgL_arg2073z00_3535, BGl_string3053z00zz__gunza7ipza7,
									BGl_string3054z00zz__gunza7ipza7, BgL_statez00_1732);
							}
							return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2072z00_3534));
						}
				}
		}
	}



/* inflate-fixed */
	obj_t BGl_inflatezd2fixedzd2zz__gunza7ipza7(obj_t BgL_inputzd2portzd2_4329,
		obj_t BgL_slidez00_4328, obj_t BgL_wsiza7eza7_4327, obj_t BgL_wpz00_4326,
		obj_t BgL_bkz00_4325, obj_t BgL_bbz00_4324)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 730 */
			{	/* Unsafe/gunzip.scm 713 */
				obj_t BgL_lz00_1554;

				BgL_lz00_1554 = make_vector((int) (((long) 288)), BUNSPEC);
				BGl_loop1893z00zz__gunza7ipza7(BgL_lz00_1554, ((long) 0));
				BGl_loop1895z00zz__gunza7ipza7(BgL_lz00_1554, ((long) 144));
				BGl_loop1897z00zz__gunza7ipza7(BgL_lz00_1554, ((long) 256));
				BGl_loop1899z00zz__gunza7ipza7(BgL_lz00_1554, ((long) 280));
				{	/* Unsafe/gunzip.scm 720 */
					obj_t BgL_tlz00_1583;

					BgL_tlz00_1583 =
						BGl_huftzd2buildzd2zz__gunza7ipza7(BgL_inputzd2portzd2_4329,
						BgL_lz00_1554, ((long) 288), ((long) 257),
						BGl_vector3055z00zz__gunza7ipza7, BGl_vector3057z00zz__gunza7ipza7,
						((long) 7), ((bool_t) 0));
					{	/* Unsafe/gunzip.scm 723 */
						obj_t BgL_blz00_1584;

						obj_t BgL_okzf3zf3_1585;

						{	/* Unsafe/gunzip.scm 723 */
							int BgL_auxz00_5412;

							BgL_auxz00_5412 = (int) (((long) 1));
							BgL_blz00_1584 = BGL_MVALUES_VAL(BgL_auxz00_5412);
						}
						{	/* Unsafe/gunzip.scm 723 */
							int BgL_auxz00_5415;

							BgL_auxz00_5415 = (int) (((long) 2));
							BgL_okzf3zf3_1585 = BGL_MVALUES_VAL(BgL_auxz00_5415);
						}
						if (CBOOL(BgL_okzf3zf3_1585))
							{	/* Unsafe/gunzip.scm 723 */
								BGl_loop1902z00zz__gunza7ipza7(BgL_lz00_1554, ((long) 0));
								{	/* Unsafe/gunzip.scm 726 */
									obj_t BgL_tdz00_1594;

									BgL_tdz00_1594 =
										BGl_huftzd2buildzd2zz__gunza7ipza7(BgL_inputzd2portzd2_4329,
										BgL_lz00_1554, ((long) 30), ((long) 0),
										BGl_vector3059z00zz__gunza7ipza7,
										BGl_vector3061z00zz__gunza7ipza7, ((long) 5), ((bool_t) 1));
									{	/* Unsafe/gunzip.scm 728 */
										obj_t BgL_bdz00_1595;

										obj_t BgL_okzf3zf3_1596;

										{	/* Unsafe/gunzip.scm 728 */
											int BgL_auxz00_5422;

											BgL_auxz00_5422 = (int) (((long) 1));
											BgL_bdz00_1595 = BGL_MVALUES_VAL(BgL_auxz00_5422);
										}
										{	/* Unsafe/gunzip.scm 728 */
											int BgL_auxz00_5425;

											BgL_auxz00_5425 = (int) (((long) 2));
											BgL_okzf3zf3_1596 = BGL_MVALUES_VAL(BgL_auxz00_5425);
										}
										if (CBOOL(BgL_okzf3zf3_1596))
											{	/* Unsafe/gunzip.scm 728 */
												return
													BGl_inflatezd2codeszd2zz__gunza7ipza7
													(BgL_slidez00_4328, BgL_wsiza7eza7_4327,
													BgL_wpz00_4326, BgL_bkz00_4325, BgL_bbz00_4324,
													BgL_inputzd2portzd2_4329, BgL_tlz00_1583,
													BgL_tdz00_1594, BgL_blz00_1584, BgL_bdz00_1595);
											}
										else
											{	/* Unsafe/gunzip.scm 728 */
												return BFALSE;
											}
									}
								}
							}
						else
							{	/* Unsafe/gunzip.scm 723 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* inflate-stored */
	obj_t BGl_inflatezd2storedzd2zz__gunza7ipza7(obj_t BgL_inputzd2portzd2_4335,
		obj_t BgL_bbz00_4334, obj_t BgL_bkz00_4333, obj_t BgL_wpz00_4332,
		obj_t BgL_slidez00_4331, obj_t BgL_wsiza7eza7_4330)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 682 */
			{	/* Unsafe/gunzip.scm 682 */
				long BgL_arg2365z00_1525;

				{	/* Unsafe/gunzip.scm 682 */
					long BgL_xz00_3250;

					BgL_xz00_3250 = (long) CINT(CELL_REF(BgL_bkz00_4333));
					BgL_arg2365z00_1525 = (BgL_xz00_3250 & ((long) 7));
				}
				{	/* Unsafe/gunzip.scm 682 */
					obj_t BgL_auxz00_4336;

					{	/* Unsafe/gunzip.scm 682 */
						long BgL_xz00_3253;

						BgL_xz00_3253 = (long) CINT(CELL_REF(BgL_bbz00_4334));
						BgL_auxz00_4336 =
							BINT((BgL_xz00_3253 >> (int) (BgL_arg2365z00_1525)));
					}
					CELL_SET(BgL_bbz00_4334, BgL_auxz00_4336);
				}
				{	/* Unsafe/gunzip.scm 682 */
					obj_t BgL_auxz00_4337;

					{	/* Unsafe/gunzip.scm 682 */
						long BgL_za71za7_3255;

						BgL_za71za7_3255 = (long) CINT(CELL_REF(BgL_bkz00_4333));
						BgL_auxz00_4337 = BINT((BgL_za71za7_3255 - BgL_arg2365z00_1525));
					}
					CELL_SET(BgL_bkz00_4333, BgL_auxz00_4337);
			}}
			BGl_NEEDBITSz00zz__gunza7ipza7(BgL_bbz00_4334, BgL_bkz00_4333,
				BgL_inputzd2portzd2_4335, BINT(((long) 16)));
			{	/* Unsafe/gunzip.scm 686 */
				long BgL_nz00_1526;

				{	/* Unsafe/gunzip.scm 686 */
					long BgL_xz00_3257;

					BgL_xz00_3257 = (long) CINT(CELL_REF(BgL_bbz00_4334));
					BgL_nz00_1526 = (BgL_xz00_3257 & ((long) 65535));
				}
				{	/* Unsafe/gunzip.scm 687 */
					obj_t BgL_auxz00_4338;

					{	/* Unsafe/gunzip.scm 687 */
						long BgL_xz00_3260;

						BgL_xz00_3260 = (long) CINT(CELL_REF(BgL_bbz00_4334));
						BgL_auxz00_4338 = BINT((BgL_xz00_3260 >> (int) (((long) 16))));
					}
					CELL_SET(BgL_bbz00_4334, BgL_auxz00_4338);
				}
				{	/* Unsafe/gunzip.scm 687 */
					obj_t BgL_auxz00_4339;

					{	/* Unsafe/gunzip.scm 687 */
						long BgL_za71za7_3262;

						BgL_za71za7_3262 = (long) CINT(CELL_REF(BgL_bkz00_4333));
						BgL_auxz00_4339 = BINT((BgL_za71za7_3262 - ((long) 16)));
					}
					CELL_SET(BgL_bkz00_4333, BgL_auxz00_4339);
				}
				BGl_NEEDBITSz00zz__gunza7ipza7(BgL_bbz00_4334, BgL_bkz00_4333,
					BgL_inputzd2portzd2_4335, BINT(((long) 16)));
				{	/* Unsafe/gunzip.scm 689 */
					bool_t BgL_testz00_5453;

					{	/* Unsafe/gunzip.scm 689 */
						long BgL_arg2370z00_1531;

						{	/* Unsafe/gunzip.scm 689 */
							long BgL_auxz00_5454;

							{	/* Unsafe/gunzip.scm 689 */
								long BgL_xz00_3264;

								BgL_xz00_3264 = (long) CINT(CELL_REF(BgL_bbz00_4334));
								BgL_auxz00_5454 = ~(BgL_xz00_3264);
							}
							BgL_arg2370z00_1531 = (BgL_auxz00_5454 & ((long) 65535));
						}
						BgL_testz00_5453 = (BgL_nz00_1526 == BgL_arg2370z00_1531);
					}
					if (BgL_testz00_5453)
						{	/* Unsafe/gunzip.scm 689 */
							BFALSE;
						}
					else
						{	/* Unsafe/gunzip.scm 690 */
							obj_t BgL_arg2368z00_1529;

							{	/* Unsafe/gunzip.scm 691 */
								obj_t BgL_list2369z00_1530;

								BgL_list2369z00_1530 = MAKE_PAIR(BINT(BgL_nz00_1526), BNIL);
								BgL_arg2368z00_1529 =
									BGl_formatz00zz__r4_output_6_10_3z00
									(BGl_string3063z00zz__gunza7ipza7, BgL_list2369z00_1530);
							}
							{	/* Unsafe/gunzip.scm 690 */
								BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2072z00_3272;

								{	/* Unsafe/gunzip.scm 690 */
									obj_t BgL_arg2073z00_3273;

									{	/* Unsafe/gunzip.scm 690 */

										{	/* Unsafe/gunzip.scm 690 */

											BgL_arg2073z00_3273 =
												BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
										}
									}
									BgL_arg2072z00_3272 =
										BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(BFALSE,
										BFALSE, BgL_arg2073z00_3273,
										BGl_string3064z00zz__gunza7ipza7, BgL_arg2368z00_1529,
										BgL_inputzd2portzd2_4335);
								}
								BGl_raisez00zz__errorz00((obj_t) (BgL_arg2072z00_3272));
							}
						}
				}
				{	/* Unsafe/gunzip.scm 693 */
					obj_t BgL_auxz00_4340;

					{	/* Unsafe/gunzip.scm 693 */
						long BgL_xz00_3276;

						BgL_xz00_3276 = (long) CINT(CELL_REF(BgL_bbz00_4334));
						BgL_auxz00_4340 = BINT((BgL_xz00_3276 >> (int) (((long) 16))));
					}
					CELL_SET(BgL_bbz00_4334, BgL_auxz00_4340);
				}
				{	/* Unsafe/gunzip.scm 693 */
					obj_t BgL_auxz00_4341;

					{	/* Unsafe/gunzip.scm 693 */
						long BgL_za71za7_3278;

						BgL_za71za7_3278 = (long) CINT(CELL_REF(BgL_bkz00_4333));
						BgL_auxz00_4341 = BINT((BgL_za71za7_3278 - ((long) 16)));
					}
					CELL_SET(BgL_bkz00_4333, BgL_auxz00_4341);
				}
				return
					BGl_loop_2965z00zz__gunza7ipza7(BgL_bkz00_4333, BgL_wpz00_4332,
					BgL_slidez00_4331, BgL_bbz00_4334, BgL_inputzd2portzd2_4335,
					BgL_wsiza7eza7_4330, BgL_nz00_1526);
			}
		}
	}



/* inflate-dynamic */
	obj_t BGl_inflatezd2dynamiczd2zz__gunza7ipza7(obj_t BgL_inputzd2portzd2_4347,
		obj_t BgL_bbz00_4346, obj_t BgL_bkz00_4345, obj_t BgL_slidez00_4344,
		obj_t BgL_wsiza7eza7_4343, obj_t BgL_wpz00_4342)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 736 */
			{	/* Unsafe/gunzip.scm 736 */
				obj_t BgL_nlz00_1611;

				obj_t BgL_ndz00_1612;

				obj_t BgL_nbz00_1613;

				obj_t BgL_llz00_1614;

				obj_t BgL_iz00_1615;

				obj_t BgL_lz00_1616;

				BgL_nlz00_1611 = BUNSPEC;
				BgL_ndz00_1612 = BUNSPEC;
				BgL_nbz00_1613 = MAKE_CELL(BUNSPEC);
				BgL_llz00_1614 = MAKE_CELL(BUNSPEC);
				BgL_iz00_1615 = MAKE_CELL(BUNSPEC);
				BgL_lz00_1616 = MAKE_CELL(BUNSPEC);
				{	/* Unsafe/gunzip.scm 736 */
					long BgL_arg2476z00_1712;

					{	/* Unsafe/gunzip.scm 736 */
						obj_t BgL_arg2477z00_1713;

						BGl_NEEDBITSz00zz__gunza7ipza7(BgL_bbz00_4346, BgL_bkz00_4345,
							BgL_inputzd2portzd2_4347, BINT(((long) 5)));
						{	/* Unsafe/gunzip.scm 736 */
							obj_t BgL_rz00_3356;

							BgL_rz00_3356 = CELL_REF(BgL_bbz00_4346);
							BGl_DUMPBITSz00zz__gunza7ipza7(BgL_bkz00_4345, BgL_bbz00_4346,
								((long) 5));
							BgL_arg2477z00_1713 = BgL_rz00_3356;
						}
						BgL_arg2476z00_1712 =
							((long) CINT(BgL_arg2477z00_1713) & ((long) 31));
					}
					BgL_nlz00_1611 = BINT((((long) 257) + BgL_arg2476z00_1712));
				}
				{	/* Unsafe/gunzip.scm 737 */
					long BgL_arg2480z00_1716;

					{	/* Unsafe/gunzip.scm 737 */
						obj_t BgL_arg2481z00_1717;

						BGl_NEEDBITSz00zz__gunza7ipza7(BgL_bbz00_4346, BgL_bkz00_4345,
							BgL_inputzd2portzd2_4347, BINT(((long) 5)));
						{	/* Unsafe/gunzip.scm 737 */
							obj_t BgL_rz00_3362;

							BgL_rz00_3362 = CELL_REF(BgL_bbz00_4346);
							BGl_DUMPBITSz00zz__gunza7ipza7(BgL_bkz00_4345, BgL_bbz00_4346,
								((long) 5));
							BgL_arg2481z00_1717 = BgL_rz00_3362;
						}
						BgL_arg2480z00_1716 =
							((long) CINT(BgL_arg2481z00_1717) & ((long) 31));
					}
					BgL_ndz00_1612 = BINT((((long) 1) + BgL_arg2480z00_1716));
				}
				{	/* Unsafe/gunzip.scm 738 */
					obj_t BgL_auxz00_4348;

					{	/* Unsafe/gunzip.scm 738 */
						long BgL_arg2484z00_1720;

						{	/* Unsafe/gunzip.scm 738 */
							obj_t BgL_arg2485z00_1721;

							BGl_NEEDBITSz00zz__gunza7ipza7(BgL_bbz00_4346, BgL_bkz00_4345,
								BgL_inputzd2portzd2_4347, BINT(((long) 4)));
							{	/* Unsafe/gunzip.scm 738 */
								obj_t BgL_rz00_3368;

								BgL_rz00_3368 = CELL_REF(BgL_bbz00_4346);
								BGl_DUMPBITSz00zz__gunza7ipza7(BgL_bkz00_4345, BgL_bbz00_4346,
									((long) 4));
								BgL_arg2485z00_1721 = BgL_rz00_3368;
							}
							BgL_arg2484z00_1720 =
								((long) CINT(BgL_arg2485z00_1721) & ((long) 15));
						}
						BgL_auxz00_4348 = BINT((((long) 4) + BgL_arg2484z00_1720));
					}
					CELL_SET(BgL_nbz00_1613, BgL_auxz00_4348);
				}
				{	/* Unsafe/gunzip.scm 739 */
					obj_t BgL_auxz00_4349;

					BgL_auxz00_4349 = make_vector((int) (((long) 316)), BUNSPEC);
					CELL_SET(BgL_llz00_1614, BgL_auxz00_4349);
				}
				{	/* Unsafe/gunzip.scm 744 */
					obj_t BgL_auxz00_4350;

					BgL_auxz00_4350 = BINT(((long) 0));
					CELL_SET(BgL_iz00_1615, BgL_auxz00_4350);
				}
				{	/* Unsafe/gunzip.scm 744 */
					obj_t BgL_auxz00_4351;

					BgL_auxz00_4351 = BINT(((long) 0));
					CELL_SET(BgL_lz00_1616, BgL_auxz00_4351);
				}
				if (((long) CINT(BgL_nlz00_1611) > ((long) 286)))
					{	/* Unsafe/gunzip.scm 745 */
						obj_t BgL_arg2412z00_1619;

						{	/* Unsafe/gunzip.scm 745 */
							obj_t BgL_list2413z00_1620;

							BgL_list2413z00_1620 = MAKE_PAIR(BgL_nlz00_1611, BNIL);
							BgL_arg2412z00_1619 =
								BGl_formatz00zz__r4_output_6_10_3z00
								(BGl_string3065z00zz__gunza7ipza7, BgL_list2413z00_1620);
						}
						{	/* Unsafe/gunzip.scm 745 */
							BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2072z00_3379;

							{	/* Unsafe/gunzip.scm 745 */
								obj_t BgL_arg2073z00_3380;

								{	/* Unsafe/gunzip.scm 745 */

									{	/* Unsafe/gunzip.scm 745 */

										BgL_arg2073z00_3380 =
											BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
								}}
								BgL_arg2072z00_3379 =
									BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(BFALSE,
									BFALSE, BgL_arg2073z00_3380, BGl_string3053z00zz__gunza7ipza7,
									BgL_arg2412z00_1619, BgL_inputzd2portzd2_4347);
							}
							return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2072z00_3379));
						}
					}
				else
					{	/* Unsafe/gunzip.scm 744 */
						if (((long) CINT(BgL_ndz00_1612) > ((long) 30)))
							{	/* Unsafe/gunzip.scm 747 */
								obj_t BgL_arg2416z00_1623;

								{	/* Unsafe/gunzip.scm 747 */
									obj_t BgL_list2417z00_1624;

									BgL_list2417z00_1624 = MAKE_PAIR(BgL_ndz00_1612, BNIL);
									BgL_arg2416z00_1623 =
										BGl_formatz00zz__r4_output_6_10_3z00
										(BGl_string3065z00zz__gunza7ipza7, BgL_list2417z00_1624);
								}
								{	/* Unsafe/gunzip.scm 747 */
									BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2072z00_3387;

									{	/* Unsafe/gunzip.scm 747 */
										obj_t BgL_arg2073z00_3388;

										{	/* Unsafe/gunzip.scm 747 */

											{	/* Unsafe/gunzip.scm 747 */

												BgL_arg2073z00_3388 =
													BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
										}}
										BgL_arg2072z00_3387 =
											BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(BFALSE,
											BFALSE, BgL_arg2073z00_3388,
											BGl_string3053z00zz__gunza7ipza7, BgL_arg2416z00_1623,
											BgL_inputzd2portzd2_4347);
									}
									return
										BGl_raisez00zz__errorz00((obj_t) (BgL_arg2072z00_3387));
								}
							}
						else
							{	/* Unsafe/gunzip.scm 746 */
								BGl_loop1905z00zz__gunza7ipza7(BgL_nbz00_1613, BgL_llz00_1614,
									BgL_bbz00_4346, BgL_bkz00_4345, BgL_inputzd2portzd2_4347,
									((long) 0));
								BGl_loop1907z00zz__gunza7ipza7(BgL_llz00_1614,
									CELL_REF(BgL_nbz00_1613));
								{	/* Unsafe/gunzip.scm 760 */
									obj_t BgL_tlz00_1647;

									BgL_tlz00_1647 =
										BGl_huftzd2buildzd2zz__gunza7ipza7(BgL_inputzd2portzd2_4347,
										CELL_REF(BgL_llz00_1614), ((long) 19), ((long) 19),
										BGl_vector3066z00zz__gunza7ipza7,
										BGl_vector3066z00zz__gunza7ipza7, ((long) 7), ((bool_t) 0));
									{	/* Unsafe/gunzip.scm 762 */
										obj_t BgL_blz00_1648;

										obj_t BgL_okzf3zf3_1649;

										{	/* Unsafe/gunzip.scm 762 */
											int BgL_auxz00_5520;

											BgL_auxz00_5520 = (int) (((long) 1));
											BgL_blz00_1648 = BGL_MVALUES_VAL(BgL_auxz00_5520);
										}
										{	/* Unsafe/gunzip.scm 762 */
											int BgL_auxz00_5523;

											BgL_auxz00_5523 = (int) (((long) 2));
											BgL_okzf3zf3_1649 = BGL_MVALUES_VAL(BgL_auxz00_5523);
										}
										if (CBOOL(BgL_okzf3zf3_1649))
											{	/* Unsafe/gunzip.scm 765 */
												long BgL_nz00_1651;

												long BgL_mz00_1652;

												BgL_nz00_1651 =
													(
													(long) CINT(BgL_nlz00_1611) +
													(long) CINT(BgL_ndz00_1612));
												{	/* Unsafe/gunzip.scm 766 */
													obj_t BgL_arg2471z00_1710;

													BgL_arg2471z00_1710 =
														BGl_vector3067z00zz__gunza7ipza7;
													{	/* Unsafe/gunzip.scm 766 */
														int BgL_kz00_3420;

														BgL_kz00_3420 = CINT(BgL_blz00_1648);
														BgL_mz00_1652 =
															(long) CINT(VECTOR_REF(BgL_arg2471z00_1710,
																BgL_kz00_3420));
												}}
												{	/* Unsafe/gunzip.scm 767 */
													obj_t BgL_auxz00_4352;

													BgL_auxz00_4352 = BINT(((long) 0));
													CELL_SET(BgL_iz00_1615, BgL_auxz00_4352);
												}
												{	/* Unsafe/gunzip.scm 768 */
													obj_t BgL_auxz00_4353;

													BgL_auxz00_4353 = BINT(((long) 0));
													CELL_SET(BgL_lz00_1616, BgL_auxz00_4353);
												}
												BGl_loop_2966z00zz__gunza7ipza7(BgL_nz00_1651,
													BgL_iz00_1615, BgL_llz00_1614, BgL_lz00_1616,
													BgL_bkz00_4345, BgL_tlz00_1647, BgL_mz00_1652,
													BgL_bbz00_4346, BgL_blz00_1648,
													BgL_inputzd2portzd2_4347);
												{	/* Unsafe/gunzip.scm 813 */
													obj_t BgL_tlz00_1695;

													{	/* Unsafe/gunzip.scm 814 */
														obj_t BgL_arg2467z00_1707;

														obj_t BgL_arg2469z00_1708;

														BgL_arg2467z00_1707 =
															BGl_vector3055z00zz__gunza7ipza7;
														BgL_arg2469z00_1708 =
															BGl_vector3057z00zz__gunza7ipza7;
														BgL_tlz00_1695 =
															BGl_huftzd2buildzd2zz__gunza7ipza7
															(BgL_inputzd2portzd2_4347,
															CELL_REF(BgL_llz00_1614),
															(long) CINT(BgL_nlz00_1611), ((long) 257),
															BgL_arg2467z00_1707, BgL_arg2469z00_1708,
															((long) 9), ((bool_t) 0));
													}
													{	/* Unsafe/gunzip.scm 815 */
														obj_t BgL_blz00_1696;

														obj_t BgL_okzf3zf3_1697;

														{	/* Unsafe/gunzip.scm 815 */
															int BgL_auxz00_5539;

															BgL_auxz00_5539 = (int) (((long) 1));
															BgL_blz00_1696 = BGL_MVALUES_VAL(BgL_auxz00_5539);
														}
														{	/* Unsafe/gunzip.scm 815 */
															int BgL_auxz00_5542;

															BgL_auxz00_5542 = (int) (((long) 2));
															BgL_okzf3zf3_1697 =
																BGL_MVALUES_VAL(BgL_auxz00_5542);
														}
														if (CBOOL(BgL_okzf3zf3_1697))
															{	/* Unsafe/gunzip.scm 819 */
																obj_t BgL_tdz00_1698;

																{	/* Unsafe/gunzip.scm 820 */
																	obj_t BgL_arg2458z00_1701;

																	obj_t BgL_arg2460z00_1703;

																	obj_t BgL_arg2461z00_1704;

																	BgL_arg2458z00_1701 =
																		BGl_subvectorz00zz__gunza7ipza7(CELL_REF
																		(BgL_llz00_1614),
																		(long) CINT(BgL_nlz00_1611));
																	BgL_arg2460z00_1703 =
																		BGl_vector3059z00zz__gunza7ipza7;
																	BgL_arg2461z00_1704 =
																		BGl_vector3061z00zz__gunza7ipza7;
																	BgL_tdz00_1698 =
																		BGl_huftzd2buildzd2zz__gunza7ipza7
																		(BgL_inputzd2portzd2_4347,
																		BgL_arg2458z00_1701,
																		(long) CINT(BgL_ndz00_1612), ((long) 0),
																		BgL_arg2460z00_1703, BgL_arg2461z00_1704,
																		((long) 6), ((bool_t) 0));
																}
																{	/* Unsafe/gunzip.scm 821 */
																	obj_t BgL_bdz00_1699;

																	obj_t BgL_okzf3zf3_1700;

																	{	/* Unsafe/gunzip.scm 821 */
																		int BgL_auxz00_5551;

																		BgL_auxz00_5551 = (int) (((long) 1));
																		BgL_bdz00_1699 =
																			BGL_MVALUES_VAL(BgL_auxz00_5551);
																	}
																	{	/* Unsafe/gunzip.scm 821 */
																		int BgL_auxz00_5554;

																		BgL_auxz00_5554 = (int) (((long) 2));
																		BgL_okzf3zf3_1700 =
																			BGL_MVALUES_VAL(BgL_auxz00_5554);
																	}
																	if (CBOOL(BgL_okzf3zf3_1700))
																		{	/* Unsafe/gunzip.scm 821 */
																			return
																				BGl_inflatezd2codeszd2zz__gunza7ipza7
																				(BgL_slidez00_4344, BgL_wsiza7eza7_4343,
																				BgL_wpz00_4342, BgL_bkz00_4345,
																				BgL_bbz00_4346,
																				BgL_inputzd2portzd2_4347,
																				BgL_tlz00_1695, BgL_tdz00_1698,
																				BgL_blz00_1696, BgL_bdz00_1699);
																		}
																	else
																		{	/* Unsafe/gunzip.scm 822 */
																			BgL_z62iozd2parsezd2errorz62_bglt
																				BgL_arg2072z00_3491;
																			{	/* Unsafe/gunzip.scm 822 */
																				obj_t BgL_arg2073z00_3492;

																				{	/* Unsafe/gunzip.scm 822 */

																					{	/* Unsafe/gunzip.scm 822 */

																						BgL_arg2073z00_3492 =
																							BGl_getzd2tracezd2stackz00zz__errorz00
																							(BFALSE);
																					}
																				}
																				BgL_arg2072z00_3491 =
																					BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
																					(BFALSE, BFALSE, BgL_arg2073z00_3492,
																					BGl_string3053z00zz__gunza7ipza7,
																					BGl_string3069z00zz__gunza7ipza7,
																					BgL_inputzd2portzd2_4347);
																			}
																			return
																				BGl_raisez00zz__errorz00(
																				(obj_t) (BgL_arg2072z00_3491));
																		}
																}
															}
														else
															{	/* Unsafe/gunzip.scm 816 */
																BgL_z62iozd2parsezd2errorz62_bglt
																	BgL_arg2072z00_3497;
																{	/* Unsafe/gunzip.scm 816 */
																	obj_t BgL_arg2073z00_3498;

																	{	/* Unsafe/gunzip.scm 816 */

																		{	/* Unsafe/gunzip.scm 816 */

																			BgL_arg2073z00_3498 =
																				BGl_getzd2tracezd2stackz00zz__errorz00
																				(BFALSE);
																		}
																	}
																	BgL_arg2072z00_3497 =
																		BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
																		(BFALSE, BFALSE, BgL_arg2073z00_3498,
																		BGl_string3053z00zz__gunza7ipza7,
																		BGl_string3069z00zz__gunza7ipza7,
																		BgL_inputzd2portzd2_4347);
																}
																return
																	BGl_raisez00zz__errorz00(
																	(obj_t) (BgL_arg2072z00_3497));
															}
													}
												}
											}
										else
											{	/* Unsafe/gunzip.scm 762 */
												return BFALSE;
											}
									}
								}
							}
					}
			}
		}
	}



/* case_else1910 */
	obj_t BGl_case_else1910z00zz__gunza7ipza7(obj_t BgL_inputzd2portzd2_4355,
		long BgL_tz00_4354)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 834 */
			{	/* Unsafe/gunzip.scm 838 */
				obj_t BgL_arg2497z00_1755;

				{	/* Unsafe/gunzip.scm 839 */
					obj_t BgL_list2498z00_1756;

					BgL_list2498z00_1756 = MAKE_PAIR(BINT(BgL_tz00_4354), BNIL);
					BgL_arg2497z00_1755 =
						BGl_formatz00zz__r4_output_6_10_3z00
						(BGl_string3070z00zz__gunza7ipza7, BgL_list2498z00_1756);
				}
				{	/* Unsafe/gunzip.scm 838 */
					BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2072z00_3511;

					{	/* Unsafe/gunzip.scm 838 */
						obj_t BgL_arg2073z00_3512;

						{	/* Unsafe/gunzip.scm 838 */

							{	/* Unsafe/gunzip.scm 838 */

								BgL_arg2073z00_3512 =
									BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
						}}
						BgL_arg2072z00_3511 =
							BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(BFALSE, BFALSE,
							BgL_arg2073z00_3512, BGl_string3053z00zz__gunza7ipza7,
							BgL_arg2497z00_1755, BgL_inputzd2portzd2_4355);
					}
					return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2072z00_3511));
				}
			}
		}
	}



/* DUMPBITS */
	obj_t BGl_DUMPBITSz00zz__gunza7ipza7(obj_t BgL_bkz00_4357,
		obj_t BgL_bbz00_4356, long BgL_nz00_1187)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 338 */
			{	/* Unsafe/gunzip.scm 338 */
				obj_t BgL_auxz00_4358;

				{	/* Unsafe/gunzip.scm 338 */
					long BgL_xz00_2627;

					BgL_xz00_2627 = (long) CINT(CELL_REF(BgL_bbz00_4356));
					BgL_auxz00_4358 = BINT((BgL_xz00_2627 >> (int) (BgL_nz00_1187)));
				}
				CELL_SET(BgL_bbz00_4356, BgL_auxz00_4358);
			}
			{	/* Unsafe/gunzip.scm 339 */
				obj_t BgL_auxz00_4359;

				{	/* Unsafe/gunzip.scm 339 */
					long BgL_za71za7_2629;

					BgL_za71za7_2629 = (long) CINT(CELL_REF(BgL_bkz00_4357));
					BgL_auxz00_4359 = BINT((BgL_za71za7_2629 - BgL_nz00_1187));
				}
				return CELL_SET(BgL_bkz00_4357, BgL_auxz00_4359);
			}
		}
	}



/* NEEDBITS */
	bool_t BGl_NEEDBITSz00zz__gunza7ipza7(obj_t BgL_bbz00_4362,
		obj_t BgL_bkz00_4361, obj_t BgL_inputzd2portzd2_4360, obj_t BgL_nz00_1179)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 335 */
			{

				{

				BgL_zc3anonymousza32162ze3z83_1182:
					{	/* Unsafe/gunzip.scm 332 */
						bool_t BgL_testz00_5582;

						{	/* Unsafe/gunzip.scm 332 */
							long BgL_n1z00_2619;

							long BgL_n2z00_2620;

							BgL_n1z00_2619 = (long) CINT(CELL_REF(BgL_bkz00_4361));
							BgL_n2z00_2620 = (long) CINT(BgL_nz00_1179);
							BgL_testz00_5582 = (BgL_n1z00_2619 < BgL_n2z00_2620);
						}
						if (BgL_testz00_5582)
							{	/* Unsafe/gunzip.scm 332 */
								{	/* Unsafe/gunzip.scm 333 */
									obj_t BgL_auxz00_4363;

									{	/* Unsafe/gunzip.scm 333 */
										long BgL_arg2164z00_1184;

										{	/* Unsafe/gunzip.scm 333 */
											obj_t BgL_arg2165z00_1185;

											{
												obj_t BgL_inputzd2portzd2_1025;

												BgL_inputzd2portzd2_1025 = BgL_inputzd2portzd2_4360;
												{
													obj_t BgL_inputzd2portzd2_1058;

													long BgL_lastzd2matchzd2_1059;

													RGC_START_MATCH(BgL_inputzd2portzd2_1025);
													{	/* Unsafe/gunzip.scm 323 */
														long BgL_matchz00_1147;

														BgL_inputzd2portzd2_1058 = BgL_inputzd2portzd2_1025;
														BgL_lastzd2matchzd2_1059 = ((long) 1);
													BgL_zc3anonymousza32086ze3z83_1060:
														{	/* Unsafe/gunzip.scm 323 */
															int BgL_currentzd2charzd2_1061;

															BgL_currentzd2charzd2_1061 =
																RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1058);
															if (
																((long) (BgL_currentzd2charzd2_1061) ==
																	((long) 0)))
																{	/* Unsafe/gunzip.scm 323 */
																	if (RGC_BUFFER_EMPTY
																		(BgL_inputzd2portzd2_1058))
																		{	/* Unsafe/gunzip.scm 323 */
																			if (rgc_fill_buffer
																				(BgL_inputzd2portzd2_1058))
																				{

																					goto
																						BgL_zc3anonymousza32086ze3z83_1060;
																				}
																			else
																				{	/* Unsafe/gunzip.scm 323 */
																					BgL_matchz00_1147 =
																						BgL_lastzd2matchzd2_1059;
																				}
																		}
																	else
																		{	/* Unsafe/gunzip.scm 323 */
																			long BgL_newzd2matchzd2_2603;

																			RGC_STOP_MATCH(BgL_inputzd2portzd2_1058);
																			BgL_newzd2matchzd2_2603 = ((long) 0);
																			BgL_matchz00_1147 =
																				BgL_newzd2matchzd2_2603;
																}}
															else
																{	/* Unsafe/gunzip.scm 323 */
																	long BgL_newzd2matchzd2_2607;

																	RGC_STOP_MATCH(BgL_inputzd2portzd2_1058);
																	BgL_newzd2matchzd2_2607 = ((long) 0);
																	BgL_matchz00_1147 = BgL_newzd2matchzd2_2607;
														}}
														RGC_SET_FILEPOS(BgL_inputzd2portzd2_1025);
														switch (BgL_matchz00_1147)
															{
															case ((long) 1):

																{	/* Unsafe/gunzip.scm 325 */
																	BgL_z62iozd2parsezd2errorz62_bglt
																		BgL_arg2072z00_2615;
																	{	/* Unsafe/gunzip.scm 325 */
																		obj_t BgL_arg2073z00_2616;

																		{	/* Unsafe/gunzip.scm 325 */

																			{	/* Unsafe/gunzip.scm 325 */

																				BgL_arg2073z00_2616 =
																					BGl_getzd2tracezd2stackz00zz__errorz00
																					(BFALSE);
																		}}
																		BgL_arg2072z00_2615 =
																			BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
																			(BFALSE, BFALSE, BgL_arg2073z00_2616,
																			BGl_string3053z00zz__gunza7ipza7,
																			BGl_string3071z00zz__gunza7ipza7,
																			BgL_inputzd2portzd2_1025);
																	}
																	BgL_arg2165z00_1185 =
																		BGl_raisez00zz__errorz00(
																		(obj_t) (BgL_arg2072z00_2615));
																} break;
															case ((long) 0):

																{	/* Unsafe/gunzip.scm 324 */
																	obj_t BgL_inputzd2portzd2_2618;

																	BgL_inputzd2portzd2_2618 =
																		BgL_inputzd2portzd2_1025;
																	BgL_arg2165z00_1185 =
																		BINT(RGC_BUFFER_BYTE
																		(BgL_inputzd2portzd2_2618));
																} break;
															default:
																BgL_arg2165z00_1185 =
																	BGl_errorz00zz__errorz00
																	(BGl_string3072z00zz__gunza7ipza7,
																	BGl_string3073z00zz__gunza7ipza7,
																	BINT(BgL_matchz00_1147));
															}
													}
												}
											}
											{	/* Unsafe/gunzip.scm 333 */
												long BgL_xz00_2621;

												long BgL_yz00_2622;

												BgL_xz00_2621 = (long) CINT(BgL_arg2165z00_1185);
												BgL_yz00_2622 = (long) CINT(CELL_REF(BgL_bkz00_4361));
												BgL_arg2164z00_1184 =
													(BgL_xz00_2621 << (int) (BgL_yz00_2622));
										}}
										{	/* Unsafe/gunzip.scm 333 */
											long BgL_za71za7_2623;

											BgL_za71za7_2623 = (long) CINT(CELL_REF(BgL_bbz00_4362));
											BgL_auxz00_4363 =
												BINT((BgL_za71za7_2623 + BgL_arg2164z00_1184));
									}}
									CELL_SET(BgL_bbz00_4362, BgL_auxz00_4363);
								}
								{	/* Unsafe/gunzip.scm 334 */
									obj_t BgL_auxz00_4364;

									{	/* Unsafe/gunzip.scm 334 */
										long BgL_za71za7_2625;

										BgL_za71za7_2625 = (long) CINT(CELL_REF(BgL_bkz00_4361));
										BgL_auxz00_4364 = BINT((BgL_za71za7_2625 + ((long) 8)));
									}
									CELL_SET(BgL_bkz00_4361, BgL_auxz00_4364);
								}
								goto BgL_zc3anonymousza32162ze3z83_1182;
							}
						else
							{	/* Unsafe/gunzip.scm 332 */
								return ((bool_t) 0);
							}
					}
				}
			}
		}
	}



/* inflate-codes */
	obj_t BGl_inflatezd2codeszd2zz__gunza7ipza7(obj_t BgL_slidez00_4370,
		obj_t BgL_wsiza7eza7_4369, obj_t BgL_wpz00_4368, obj_t BgL_bkz00_4367,
		obj_t BgL_bbz00_4366, obj_t BgL_inputzd2portzd2_4365, obj_t BgL_tlz00_1413,
		obj_t BgL_tdz00_1414, obj_t BgL_blz00_1415, obj_t BgL_bdz00_1416)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 676 */
			{	/* Unsafe/gunzip.scm 560 */
				long BgL_mlz00_1418;

				long BgL_mdz00_1419;

				obj_t BgL_tz00_1420;

				obj_t BgL_ez00_1421;

				obj_t BgL_nz00_1422;

				obj_t BgL_dz00_1423;

				{	/* Unsafe/gunzip.scm 560 */
					obj_t BgL_arg2362z00_1522;

					BgL_arg2362z00_1522 = BGl_vector3067z00zz__gunza7ipza7;
					{	/* Unsafe/gunzip.scm 560 */
						int BgL_kz00_3077;

						BgL_kz00_3077 = CINT(BgL_blz00_1415);
						BgL_mlz00_1418 =
							(long) CINT(VECTOR_REF(BgL_arg2362z00_1522, BgL_kz00_3077));
				}}
				{	/* Unsafe/gunzip.scm 561 */
					obj_t BgL_arg2363z00_1523;

					BgL_arg2363z00_1523 = BGl_vector3067z00zz__gunza7ipza7;
					{	/* Unsafe/gunzip.scm 561 */
						int BgL_kz00_3080;

						BgL_kz00_3080 = CINT(BgL_bdz00_1416);
						BgL_mdz00_1419 =
							(long) CINT(VECTOR_REF(BgL_arg2363z00_1523, BgL_kz00_3080));
				}}
				BgL_tz00_1420 = MAKE_CELL(BUNSPEC);
				{	/* Unsafe/gunzip.scm 563 */
					obj_t BgL_cellvalz00_5623;

					BgL_cellvalz00_5623 = BINT(((long) 0));
					BgL_ez00_1421 = MAKE_CELL(BgL_cellvalz00_5623);
				}
				{	/* Unsafe/gunzip.scm 564 */
					obj_t BgL_cellvalz00_5625;

					BgL_cellvalz00_5625 = BINT(((long) 0));
					BgL_nz00_1422 = MAKE_CELL(BgL_cellvalz00_5625);
				}
				{	/* Unsafe/gunzip.scm 565 */
					obj_t BgL_cellvalz00_5627;

					BgL_cellvalz00_5627 = BINT(((long) 0));
					BgL_dz00_1423 = MAKE_CELL(BgL_cellvalz00_5627);
				}
				return
					BGl_loopzd2inflatezd2zz__gunza7ipza7(BgL_slidez00_4370, BgL_dz00_1423,
					BgL_wsiza7eza7_4369, BgL_wpz00_4368, BgL_tdz00_1414,
					BINT(BgL_mdz00_1419), BgL_bdz00_1416, BgL_nz00_1422, BgL_bkz00_4367,
					BgL_ez00_1421, BgL_tz00_1420, BgL_tlz00_1413, BINT(BgL_mlz00_1418),
					BgL_bbz00_4366, BgL_blz00_1415, BgL_inputzd2portzd2_4365,
					BINT(((long) 0)));
		}}
	}



/* loop_2966 */
	bool_t BGl_loop_2966z00zz__gunza7ipza7(long BgL_nz00_4380,
		obj_t BgL_iz00_4379, obj_t BgL_llz00_4378, obj_t BgL_lz00_4377,
		obj_t BgL_bkz00_4376, obj_t BgL_tlz00_4375, long BgL_mz00_4374,
		obj_t BgL_bbz00_4373, obj_t BgL_blz00_4372, obj_t BgL_inputzd2portzd2_4371)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 769 */
		BGl_loop_2966z00zz__gunza7ipza7:
			{	/* Unsafe/gunzip.scm 770 */
				bool_t BgL_testz00_5633;

				{	/* Unsafe/gunzip.scm 770 */
					long BgL_n1z00_3421;

					BgL_n1z00_3421 = (long) CINT(CELL_REF(BgL_iz00_4379));
					BgL_testz00_5633 = (BgL_n1z00_3421 < BgL_nz00_4380);
				}
				if (BgL_testz00_5633)
					{	/* Unsafe/gunzip.scm 770 */
						BGl_NEEDBITSz00zz__gunza7ipza7(BgL_bbz00_4373, BgL_bkz00_4376,
							BgL_inputzd2portzd2_4371, BgL_blz00_4372);
						{	/* Unsafe/gunzip.scm 772 */
							long BgL_posz00_1656;

							{	/* Unsafe/gunzip.scm 772 */
								long BgL_xz00_3423;

								BgL_xz00_3423 = (long) CINT(CELL_REF(BgL_bbz00_4373));
								BgL_posz00_1656 = (BgL_xz00_3423 & BgL_mz00_4374);
							}
							{	/* Unsafe/gunzip.scm 772 */
								obj_t BgL_tdz00_1657;

								BgL_tdz00_1657 =
									VECTOR_REF(BgL_tlz00_4375, (int) (BgL_posz00_1656));
								{	/* Unsafe/gunzip.scm 773 */
									long BgL_dmpz00_1658;

									{
										BgL_huftz00_bglt BgL_auxz00_5641;

										BgL_auxz00_5641 = (BgL_huftz00_bglt) (BgL_tdz00_1657);
										BgL_dmpz00_1658 =
											(((BgL_huftz00_bglt) CREF(BgL_auxz00_5641))->BgL_bz00);
									}
									{	/* Unsafe/gunzip.scm 774 */
										obj_t BgL_jz00_1659;

										{
											BgL_huftz00_bglt BgL_auxz00_5644;

											BgL_auxz00_5644 = (BgL_huftz00_bglt) (BgL_tdz00_1657);
											BgL_jz00_1659 =
												(((BgL_huftz00_bglt) CREF(BgL_auxz00_5644))->BgL_vz00);
										}
										{	/* Unsafe/gunzip.scm 776 */

											{	/* Unsafe/gunzip.scm 787 */
												obj_t BgL_auxz00_4381;

												{	/* Unsafe/gunzip.scm 787 */
													long BgL_xz00_3430;

													BgL_xz00_3430 = (long) CINT(CELL_REF(BgL_bbz00_4373));
													BgL_auxz00_4381 =
														BINT((BgL_xz00_3430 >> (int) (BgL_dmpz00_1658)));
												}
												CELL_SET(BgL_bbz00_4373, BgL_auxz00_4381);
											}
											{	/* Unsafe/gunzip.scm 787 */
												obj_t BgL_auxz00_4382;

												{	/* Unsafe/gunzip.scm 787 */
													long BgL_za71za7_3432;

													BgL_za71za7_3432 =
														(long) CINT(CELL_REF(BgL_bkz00_4376));
													BgL_auxz00_4382 =
														BINT((BgL_za71za7_3432 - BgL_dmpz00_1658));
												}
												CELL_SET(BgL_bkz00_4376, BgL_auxz00_4382);
											}
											if (((long) CINT(BgL_jz00_1659) < ((long) 16)))
												{	/* Unsafe/gunzip.scm 789 */
													{	/* Unsafe/gunzip.scm 791 */
														obj_t BgL_vectorz00_3436;

														int BgL_kz00_3437;

														BgL_vectorz00_3436 = CELL_REF(BgL_llz00_4378);
														BgL_kz00_3437 = CINT(CELL_REF(BgL_iz00_4379));
														VECTOR_SET(BgL_vectorz00_3436, BgL_kz00_3437,
															BgL_jz00_1659);
													}
													CELL_SET(BgL_lz00_4377, BgL_jz00_1659);
													{	/* Unsafe/gunzip.scm 794 */
														obj_t BgL_auxz00_4384;

														{	/* Unsafe/gunzip.scm 794 */
															long BgL_za71za7_3439;

															BgL_za71za7_3439 =
																(long) CINT(CELL_REF(BgL_iz00_4379));
															BgL_auxz00_4384 =
																BINT((BgL_za71za7_3439 + ((long) 1)));
														}
														CELL_SET(BgL_iz00_4379, BgL_auxz00_4384);
												}}
											else
												{	/* Unsafe/gunzip.scm 789 */
													if (((long) CINT(BgL_jz00_1659) == ((long) 16)))
														{	/* Unsafe/gunzip.scm 797 */
															long BgL_jz00_1663;

															{	/* Unsafe/gunzip.scm 797 */
																long BgL_arg2437z00_1665;

																{	/* Unsafe/gunzip.scm 797 */
																	obj_t BgL_arg2438z00_1666;

																	BGl_NEEDBITSz00zz__gunza7ipza7(BgL_bbz00_4373,
																		BgL_bkz00_4376, BgL_inputzd2portzd2_4371,
																		BINT(((long) 2)));
																	{	/* Unsafe/gunzip.scm 797 */
																		obj_t BgL_rz00_3444;

																		BgL_rz00_3444 = CELL_REF(BgL_bbz00_4373);
																		BGl_DUMPBITSz00zz__gunza7ipza7
																			(BgL_bkz00_4376, BgL_bbz00_4373,
																			((long) 2));
																		BgL_arg2438z00_1666 = BgL_rz00_3444;
																	}
																	BgL_arg2437z00_1665 =
																		(
																		(long) CINT(BgL_arg2438z00_1666) & ((long)
																			3));
																}
																BgL_jz00_1663 =
																	(((long) 3) + BgL_arg2437z00_1665);
															}
															BBOOL(BGl_setzd2litzd2zz__gunza7ipza7
																(BgL_iz00_4379, BgL_inputzd2portzd2_4371,
																	BgL_nz00_4380, BgL_llz00_4378, BgL_jz00_1663,
																	CELL_REF(BgL_lz00_4377)));
														}
													else
														{	/* Unsafe/gunzip.scm 795 */
															if (BGl_2zd3zd3zz__r4_numbers_6_5z00
																(BgL_jz00_1659, BINT(((long) 17))))
																{	/* Unsafe/gunzip.scm 801 */
																	long BgL_jz00_1669;

																	{	/* Unsafe/gunzip.scm 801 */
																		long BgL_arg2442z00_1671;

																		{	/* Unsafe/gunzip.scm 801 */
																			obj_t BgL_arg2443z00_1672;

																			BGl_NEEDBITSz00zz__gunza7ipza7
																				(BgL_bbz00_4373, BgL_bkz00_4376,
																				BgL_inputzd2portzd2_4371,
																				BINT(((long) 3)));
																			{	/* Unsafe/gunzip.scm 801 */
																				obj_t BgL_rz00_3450;

																				BgL_rz00_3450 =
																					CELL_REF(BgL_bbz00_4373);
																				BGl_DUMPBITSz00zz__gunza7ipza7
																					(BgL_bkz00_4376, BgL_bbz00_4373,
																					((long) 3));
																				BgL_arg2443z00_1672 = BgL_rz00_3450;
																			}
																			BgL_arg2442z00_1671 =
																				(
																				(long) CINT(BgL_arg2443z00_1672) &
																				((long) 7));
																		}
																		BgL_jz00_1669 =
																			(((long) 3) + BgL_arg2442z00_1671);
																	}
																	BGl_setzd2litzd2zz__gunza7ipza7(BgL_iz00_4379,
																		BgL_inputzd2portzd2_4371, BgL_nz00_4380,
																		BgL_llz00_4378, BgL_jz00_1669,
																		BINT(((long) 0)));
																	{	/* Unsafe/gunzip.scm 803 */
																		obj_t BgL_auxz00_4385;

																		BgL_auxz00_4385 = BINT(((long) 0));
																		CELL_SET(BgL_lz00_4377, BgL_auxz00_4385);
																}}
															else
																{	/* Unsafe/gunzip.scm 806 */
																	long BgL_jz00_1674;

																	{	/* Unsafe/gunzip.scm 806 */
																		long BgL_arg2446z00_1676;

																		{	/* Unsafe/gunzip.scm 806 */
																			obj_t BgL_arg2447z00_1677;

																			BGl_NEEDBITSz00zz__gunza7ipza7
																				(BgL_bbz00_4373, BgL_bkz00_4376,
																				BgL_inputzd2portzd2_4371,
																				BINT(((long) 7)));
																			{	/* Unsafe/gunzip.scm 806 */
																				obj_t BgL_rz00_3456;

																				BgL_rz00_3456 =
																					CELL_REF(BgL_bbz00_4373);
																				BGl_DUMPBITSz00zz__gunza7ipza7
																					(BgL_bkz00_4376, BgL_bbz00_4373,
																					((long) 7));
																				BgL_arg2447z00_1677 = BgL_rz00_3456;
																			}
																			BgL_arg2446z00_1676 =
																				(
																				(long) CINT(BgL_arg2447z00_1677) &
																				((long) 127));
																		}
																		BgL_jz00_1674 =
																			(((long) 11) + BgL_arg2446z00_1676);
																	}
																	BGl_setzd2litzd2zz__gunza7ipza7(BgL_iz00_4379,
																		BgL_inputzd2portzd2_4371, BgL_nz00_4380,
																		BgL_llz00_4378, BgL_jz00_1674,
																		BINT(((long) 0)));
																	{	/* Unsafe/gunzip.scm 808 */
																		obj_t BgL_auxz00_4386;

																		BgL_auxz00_4386 = BINT(((long) 0));
																		CELL_SET(BgL_lz00_4377, BgL_auxz00_4386);
						}}}}}}}}}
						{

							goto BGl_loop_2966z00zz__gunza7ipza7;
						}
					}
				else
					{	/* Unsafe/gunzip.scm 770 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* huft-build */
	obj_t BGl_huftzd2buildzd2zz__gunza7ipza7(obj_t BgL_inputzd2portzd2_4387,
		obj_t BgL_bz00_1194, long BgL_nz00_1195, long BgL_sz00_1196,
		obj_t BgL_dz00_1197, obj_t BgL_ez00_1198, long BgL_mz00_1199,
		bool_t BgL_incompzd2okpzd2_1200)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 355 */
			{	/* Unsafe/gunzip.scm 355 */
				obj_t BgL_cz00_1202;

				obj_t BgL_vz00_1203;

				obj_t BgL_xz00_1204;

				obj_t BgL_finalzd2yzd2_1205;

				obj_t BgL_tzd2resultzd2_1206;

				BgL_cz00_1202 = MAKE_CELL(BUNSPEC);
				BgL_vz00_1203 = MAKE_CELL(BUNSPEC);
				BgL_xz00_1204 = MAKE_CELL(BUNSPEC);
				BgL_finalzd2yzd2_1205 = BUNSPEC;
				BgL_tzd2resultzd2_1206 = MAKE_CELL(BUNSPEC);
				{	/* Unsafe/gunzip.scm 355 */
					obj_t BgL_auxz00_4388;

					{	/* Unsafe/gunzip.scm 355 */
						long BgL_arg2291z00_1403;

						BgL_arg2291z00_1403 = (((long) 16) + ((long) 1));
						BgL_auxz00_4388 =
							make_vector((int) (BgL_arg2291z00_1403), BINT(((long) 0)));
					}
					CELL_SET(BgL_cz00_1202, BgL_auxz00_4388);
				}
				{	/* Unsafe/gunzip.scm 356 */
					obj_t BgL_auxz00_4389;

					BgL_auxz00_4389 = make_vector((int) (((long) 288)), BUNSPEC);
					CELL_SET(BgL_vz00_1203, BgL_auxz00_4389);
				}
				{	/* Unsafe/gunzip.scm 357 */
					obj_t BgL_auxz00_4390;

					{	/* Unsafe/gunzip.scm 357 */
						long BgL_arg2297z00_1409;

						BgL_arg2297z00_1409 = (((long) 16) + ((long) 1));
						BgL_auxz00_4390 = make_vector((int) (BgL_arg2297z00_1409), BUNSPEC);
					}
					CELL_SET(BgL_xz00_1204, BgL_auxz00_4390);
				}
				BgL_finalzd2yzd2_1205 = BINT(((long) 0));
				CELL_SET(BgL_tzd2resultzd2_1206, BFALSE);
				BGl_loop1882z00zz__gunza7ipza7(BgL_nz00_1195, BgL_cz00_1202,
					BgL_bz00_1194, ((long) 0));
				{	/* Unsafe/gunzip.scm 367 */
					bool_t BgL_testz00_5705;

					{	/* Unsafe/gunzip.scm 367 */
						obj_t BgL_arg2290z00_1402;

						{	/* Unsafe/gunzip.scm 367 */
							obj_t BgL_vectorz00_2658;

							int BgL_kz00_2659;

							BgL_vectorz00_2658 = CELL_REF(BgL_cz00_1202);
							BgL_kz00_2659 = (int) (((long) 0));
							BgL_arg2290z00_1402 =
								VECTOR_REF(BgL_vectorz00_2658, BgL_kz00_2659);
						}
						BgL_testz00_5705 =
							((long) CINT(BgL_arg2290z00_1402) == BgL_nz00_1195);
					}
					if (BgL_testz00_5705)
						{	/* Unsafe/gunzip.scm 367 */
							{	/* Unsafe/gunzip.scm 369 */
								int BgL_auxz00_5710;

								BgL_auxz00_5710 = (int) (((long) 3));
								BGL_MVALUES_NUMBER_SET(BgL_auxz00_5710);
							}
							{	/* Unsafe/gunzip.scm 369 */
								obj_t BgL_auxz00_5715;

								int BgL_auxz00_5713;

								BgL_auxz00_5715 = BINT(((long) 0));
								BgL_auxz00_5713 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_auxz00_5713, BgL_auxz00_5715);
							}
							{	/* Unsafe/gunzip.scm 369 */
								int BgL_auxz00_5718;

								BgL_auxz00_5718 = (int) (((long) 2));
								BGL_MVALUES_VAL_SET(BgL_auxz00_5718, BFALSE);
							}
							return BFALSE;
						}
					else
						{	/* Unsafe/gunzip.scm 371 */
							long BgL_jz00_1222;

							BgL_jz00_1222 =
								BGl_loop_2967z00zz__gunza7ipza7(BgL_cz00_1202, ((long) 1));
							{	/* Unsafe/gunzip.scm 376 */
								long BgL_iz00_1224;

								BgL_iz00_1224 =
									BGl_loop_2968z00zz__gunza7ipza7(BgL_cz00_1202, ((long) 16));
								{	/* Unsafe/gunzip.scm 382 */
									long BgL_lz00_1226;

									{	/* Unsafe/gunzip.scm 383 */
										long BgL_xz00_1376;

										if ((BgL_mz00_1199 > BgL_jz00_1222))
											{	/* Unsafe/gunzip.scm 383 */
												BgL_xz00_1376 = BgL_mz00_1199;
											}
										else
											{	/* Unsafe/gunzip.scm 383 */
												BgL_xz00_1376 = BgL_jz00_1222;
											}
										if ((BgL_xz00_1376 < BgL_iz00_1224))
											{	/* Unsafe/gunzip.scm 383 */
												BgL_lz00_1226 = BgL_xz00_1376;
											}
										else
											{	/* Unsafe/gunzip.scm 383 */
												BgL_lz00_1226 = BgL_iz00_1224;
											}
									}
									{	/* Unsafe/gunzip.scm 384 */

										{	/* Unsafe/gunzip.scm 387 */
											obj_t BgL_y0z00_1228;

											BgL_y0z00_1228 =
												BGl_loop_2969z00zz__gunza7ipza7(BgL_iz00_1224,
												BgL_inputzd2portzd2_4387, BgL_cz00_1202,
												(((long) 1) << (int) (BgL_jz00_1222)), BgL_jz00_1222);
											{	/* Unsafe/gunzip.scm 398 */
												obj_t BgL_arg2178z00_1229;

												{	/* Unsafe/gunzip.scm 398 */
													obj_t BgL_vectorz00_2707;

													int BgL_kz00_2708;

													BgL_vectorz00_2707 = CELL_REF(BgL_cz00_1202);
													BgL_kz00_2708 = (int) (BgL_iz00_1224);
													BgL_arg2178z00_1229 =
														VECTOR_REF(BgL_vectorz00_2707, BgL_kz00_2708);
												}
												BgL_finalzd2yzd2_1205 =
													BINT(
													((long) CINT(BgL_y0z00_1228) -
														(long) CINT(BgL_arg2178z00_1229)));
											}
											if (((long) CINT(BgL_finalzd2yzd2_1205) < ((long) 0)))
												{	/* Unsafe/gunzip.scm 400 */
													BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2072z00_2716;

													{	/* Unsafe/gunzip.scm 400 */
														obj_t BgL_arg2073z00_2717;

														{	/* Unsafe/gunzip.scm 400 */

															{	/* Unsafe/gunzip.scm 400 */

																BgL_arg2073z00_2717 =
																	BGl_getzd2tracezd2stackz00zz__errorz00
																	(BFALSE);
														}}
														BgL_arg2072z00_2716 =
															BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
															(BFALSE, BFALSE, BgL_arg2073z00_2717,
															BGl_string3053z00zz__gunza7ipza7,
															BGl_string3074z00zz__gunza7ipza7,
															BgL_inputzd2portzd2_4387);
													}
													BGl_raisez00zz__errorz00(
														(obj_t) (BgL_arg2072z00_2716));
												}
											else
												{	/* Unsafe/gunzip.scm 399 */
													BFALSE;
												}
											{	/* Unsafe/gunzip.scm 403 */
												long BgL_arg2180z00_1231;

												{	/* Unsafe/gunzip.scm 403 */
													obj_t BgL_arg2181z00_1232;

													{	/* Unsafe/gunzip.scm 403 */
														obj_t BgL_vectorz00_2719;

														int BgL_kz00_2720;

														BgL_vectorz00_2719 = CELL_REF(BgL_cz00_1202);
														BgL_kz00_2720 = (int) (BgL_iz00_1224);
														BgL_arg2181z00_1232 =
															VECTOR_REF(BgL_vectorz00_2719, BgL_kz00_2720);
													}
													BgL_arg2180z00_1231 =
														(
														(long) CINT(BgL_arg2181z00_1232) +
														(long) CINT(BgL_finalzd2yzd2_1205));
												}
												{	/* Unsafe/gunzip.scm 403 */
													obj_t BgL_vectorz00_2723;

													int BgL_kz00_2724;

													obj_t BgL_objz00_2725;

													BgL_vectorz00_2723 = CELL_REF(BgL_cz00_1202);
													BgL_kz00_2724 = (int) (BgL_iz00_1224);
													BgL_objz00_2725 = BINT(BgL_arg2180z00_1231);
													VECTOR_SET(BgL_vectorz00_2723, BgL_kz00_2724,
														BgL_objz00_2725);
										}}}
										{	/* Unsafe/gunzip.scm 406 */
											obj_t BgL_vectorz00_2726;

											int BgL_kz00_2727;

											obj_t BgL_objz00_2728;

											BgL_vectorz00_2726 = CELL_REF(BgL_xz00_1204);
											BgL_kz00_2727 = (int) (((long) 1));
											BgL_objz00_2728 = BINT(((long) 0));
											VECTOR_SET(BgL_vectorz00_2726, BgL_kz00_2727,
												BgL_objz00_2728);
										}
										{	/* Unsafe/gunzip.scm 407 */
											long BgL_jz00_1245;

											BgL_jz00_1245 =
												BGl_loop_2970z00zz__gunza7ipza7(BgL_xz00_1204,
												BgL_cz00_1202, (BgL_iz00_1224 - ((long) 1)), ((long) 2),
												((long) 1), ((long) 0));
											BGl_loop_2971z00zz__gunza7ipza7(BgL_nz00_1195,
												BgL_vz00_1203, BgL_xz00_1204, BgL_bz00_1194, ((long) 0),
												((long) 0));
											{	/* Unsafe/gunzip.scm 434 */
												obj_t BgL_vectorz00_2839;

												int BgL_kz00_2840;

												obj_t BgL_objz00_2841;

												BgL_vectorz00_2839 = CELL_REF(BgL_xz00_1204);
												BgL_kz00_2840 = (int) (((long) 0));
												BgL_objz00_2841 = BINT(((long) 0));
												VECTOR_SET(BgL_vectorz00_2839, BgL_kz00_2840,
													BgL_objz00_2841);
											}
											{	/* Unsafe/gunzip.scm 435 */
												obj_t BgL_vzd2poszd2_1258;

												obj_t BgL_iz00_1259;

												obj_t BgL_hz00_1260;

												obj_t BgL_wz00_1261;

												obj_t BgL_uz00_1262;

												obj_t BgL_qz00_1263;

												obj_t BgL_za7za7_1264;

												BgL_huftz00_bglt BgL_rz00_1265;

												{	/* Unsafe/gunzip.scm 435 */
													obj_t BgL_cellvalz00_5760;

													BgL_cellvalz00_5760 = BINT(((long) 0));
													BgL_vzd2poszd2_1258 = MAKE_CELL(BgL_cellvalz00_5760);
												}
												{	/* Unsafe/gunzip.scm 436 */
													obj_t BgL_cellvalz00_5762;

													BgL_cellvalz00_5762 = BINT(((long) 0));
													BgL_iz00_1259 = MAKE_CELL(BgL_cellvalz00_5762);
												}
												{	/* Unsafe/gunzip.scm 437 */
													obj_t BgL_cellvalz00_5764;

													BgL_cellvalz00_5764 = BINT(((long) -1));
													BgL_hz00_1260 = MAKE_CELL(BgL_cellvalz00_5764);
												}
												{	/* Unsafe/gunzip.scm 438 */
													obj_t BgL_cellvalz00_5766;

													BgL_cellvalz00_5766 = BINT(NEG(BgL_lz00_1226));
													BgL_wz00_1261 = MAKE_CELL(BgL_cellvalz00_5766);
												}
												BgL_uz00_1262 =
													make_vector((int) (((long) 16)), BUNSPEC);
												BgL_qz00_1263 = MAKE_CELL(BUNSPEC);
												{	/* Unsafe/gunzip.scm 441 */
													obj_t BgL_cellvalz00_5771;

													BgL_cellvalz00_5771 = BINT(((long) 0));
													BgL_za7za7_1264 = MAKE_CELL(BgL_cellvalz00_5771);
												}
												{	/* Unsafe/gunzip.scm 442 */
													BgL_huftz00_bglt BgL_res2917z00_2861;

													{	/* Unsafe/gunzip.scm 442 */
														obj_t BgL_v1835z00_2846;

														BgL_v1835z00_2846 = BINT(((long) 0));
														{	/* Unsafe/gunzip.scm 442 */
															BgL_huftz00_bglt BgL_new1836z00_2847;

															{	/* Unsafe/gunzip.scm 442 */
																BgL_huftz00_bglt BgL_res2915z00_2852;

																{	/* Unsafe/gunzip.scm 442 */
																	BgL_huftz00_bglt BgL_new1846z00_2848;

																	BgL_new1846z00_2848 =
																		((BgL_huftz00_bglt)
																		BREF(GC_MALLOC(sizeof(struct
																					BgL_huftz00_bgl))));
																	BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
																		(BgL_new1846z00_2848),
																		BGl_classzd2numzd2zz__objectz00
																		(BGl_huftz00zz__gunza7ipza7));
																	{	/* Unsafe/gunzip.scm 442 */
																		BgL_objectz00_bglt BgL_auxz00_5778;

																		BgL_auxz00_5778 =
																			(BgL_objectz00_bglt)
																			(BgL_new1846z00_2848);
																		BGL_OBJECT_WIDENING_SET(BgL_auxz00_5778,
																			BFALSE);
																	}
																	BgL_res2915z00_2852 = BgL_new1846z00_2848;
																}
																BgL_new1836z00_2847 = BgL_res2915z00_2852;
															}
															{	/* Unsafe/gunzip.scm 442 */
																BgL_huftz00_bglt BgL_res2916z00_2860;

																{	/* Unsafe/gunzip.scm 442 */
																	BgL_huftz00_bglt BgL_new1841z00_2853;

																	BgL_new1841z00_2853 = BgL_new1836z00_2847;
																	{	/* Unsafe/gunzip.scm 442 */
																		long BgL_e1838z00_2857;

																		long BgL_b1839z00_2858;

																		obj_t BgL_v1840z00_2859;

																		BgL_e1838z00_2857 = ((long) 0);
																		BgL_b1839z00_2858 = ((long) 0);
																		BgL_v1840z00_2859 = BgL_v1835z00_2846;
																		((((BgL_huftz00_bglt)
																					CREF(BgL_new1841z00_2853))->
																				BgL_ez00) =
																			((long) BgL_e1838z00_2857), BUNSPEC);
																		((((BgL_huftz00_bglt)
																					CREF(BgL_new1841z00_2853))->
																				BgL_bz00) =
																			((long) BgL_b1839z00_2858), BUNSPEC);
																		((((BgL_huftz00_bglt)
																					CREF(BgL_new1841z00_2853))->
																				BgL_vz00) =
																			((obj_t) BgL_v1840z00_2859), BUNSPEC);
																		BgL_res2916z00_2860 = BgL_new1841z00_2853;
																}} BgL_res2916z00_2860;
															}
															BgL_res2917z00_2861 = BgL_new1836z00_2847;
													}}
													BgL_rz00_1265 = BgL_res2917z00_2861;
												}
												BGl_kzd2loopzd2zz__gunza7ipza7(BgL_iz00_1224,
													BgL_cz00_1202, BgL_iz00_1259, BgL_nz00_1195,
													BgL_dz00_1197, BgL_ez00_1198, BgL_sz00_1196,
													BgL_vzd2poszd2_1258, BgL_vz00_1203, BgL_rz00_1265,
													BgL_wz00_1261, BgL_xz00_1204, BgL_uz00_1262,
													BgL_tzd2resultzd2_1206, BgL_qz00_1263,
													BgL_za7za7_1264, BgL_lz00_1226, BgL_hz00_1260,
													BgL_jz00_1222);
												{	/* Unsafe/gunzip.scm 549 */
													bool_t BgL_okpz00_1351;

													if (BgL_incompzd2okpzd2_1200)
														{	/* Unsafe/gunzip.scm 549 */
															BgL_okpz00_1351 = BgL_incompzd2okpzd2_1200;
														}
													else
														{	/* Unsafe/gunzip.scm 550 */
															bool_t BgL_testz00_5786;

															if (
																(((long) 0) ==
																	(long) CINT(BgL_finalzd2yzd2_1205)))
																{	/* Unsafe/gunzip.scm 550 */
																	BgL_testz00_5786 = ((bool_t) 0);
																}
															else
																{	/* Unsafe/gunzip.scm 550 */
																	if ((BgL_iz00_1224 == ((long) 1)))
																		{	/* Unsafe/gunzip.scm 551 */
																			BgL_testz00_5786 = ((bool_t) 0);
																		}
																	else
																		{	/* Unsafe/gunzip.scm 551 */
																			BgL_testz00_5786 = ((bool_t) 1);
																		}
																}
															if (BgL_testz00_5786)
																{	/* Unsafe/gunzip.scm 550 */
																	BgL_okpz00_1351 = ((bool_t) 0);
																}
															else
																{	/* Unsafe/gunzip.scm 550 */
																	BgL_okpz00_1351 = ((bool_t) 1);
																}
														}
													if (BgL_okpz00_1351)
														{	/* Unsafe/gunzip.scm 552 */
															BFALSE;
														}
													else
														{	/* Unsafe/gunzip.scm 553 */
															BgL_z62iozd2parsezd2errorz62_bglt
																BgL_arg2072z00_3067;
															{	/* Unsafe/gunzip.scm 553 */
																obj_t BgL_arg2073z00_3068;

																{	/* Unsafe/gunzip.scm 553 */

																	{	/* Unsafe/gunzip.scm 553 */

																		BgL_arg2073z00_3068 =
																			BGl_getzd2tracezd2stackz00zz__errorz00
																			(BFALSE);
																	}
																}
																BgL_arg2072z00_3067 =
																	BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
																	(BFALSE, BFALSE, BgL_arg2073z00_3068,
																	BGl_string3064z00zz__gunza7ipza7,
																	BGl_string3075z00zz__gunza7ipza7,
																	BgL_inputzd2portzd2_4387);
															}
															BGl_raisez00zz__errorz00(
																(obj_t) (BgL_arg2072z00_3067));
														}
													{	/* Unsafe/gunzip.scm 556 */
														obj_t BgL_val0_1952z00_1352;

														BgL_val0_1952z00_1352 =
															CELL_REF(BgL_tzd2resultzd2_1206);
														{	/* Unsafe/gunzip.scm 556 */
															int BgL_auxz00_5797;

															BgL_auxz00_5797 = (int) (((long) 3));
															BGL_MVALUES_NUMBER_SET(BgL_auxz00_5797);
														}
														{	/* Unsafe/gunzip.scm 556 */
															obj_t BgL_auxz00_5802;

															int BgL_auxz00_5800;

															BgL_auxz00_5802 = BINT(BgL_lz00_1226);
															BgL_auxz00_5800 = (int) (((long) 1));
															BGL_MVALUES_VAL_SET(BgL_auxz00_5800,
																BgL_auxz00_5802);
														}
														{	/* Unsafe/gunzip.scm 556 */
															obj_t BgL_auxz00_5807;

															int BgL_auxz00_5805;

															BgL_auxz00_5807 = BBOOL(BgL_okpz00_1351);
															BgL_auxz00_5805 = (int) (((long) 2));
															BGL_MVALUES_VAL_SET(BgL_auxz00_5805,
																BgL_auxz00_5807);
														}
														return BgL_val0_1952z00_1352;
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



/* loop1907 */
	bool_t BGl_loop1907z00zz__gunza7ipza7(obj_t BgL_llz00_4392,
		obj_t BgL_i1908z00_1638)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 754 */
		BGl_loop1907z00zz__gunza7ipza7:
			if (((long) CINT(BgL_i1908z00_1638) < ((long) 19)))
				{	/* Unsafe/gunzip.scm 754 */
					{	/* Unsafe/gunzip.scm 757 */
						long BgL_arg2428z00_1642;

						{	/* Unsafe/gunzip.scm 757 */
							obj_t BgL_arg2430z00_1644;

							BgL_arg2430z00_1644 = BGl_vector3076z00zz__gunza7ipza7;
							{	/* Unsafe/gunzip.scm 757 */
								int BgL_kz00_3408;

								BgL_kz00_3408 = CINT(BgL_i1908z00_1638);
								BgL_arg2428z00_1642 =
									(long) CINT(VECTOR_REF(BgL_arg2430z00_1644, BgL_kz00_3408));
						}}
						{	/* Unsafe/gunzip.scm 756 */
							obj_t BgL_vectorz00_3409;

							int BgL_kz00_3410;

							obj_t BgL_objz00_3411;

							BgL_vectorz00_3409 = CELL_REF(BgL_llz00_4392);
							BgL_kz00_3410 = (int) (BgL_arg2428z00_1642);
							BgL_objz00_3411 = BINT(((long) 0));
							VECTOR_SET(BgL_vectorz00_3409, BgL_kz00_3410, BgL_objz00_3411);
					}}
					{	/* Unsafe/gunzip.scm 754 */
						long BgL_arg2431z00_1645;

						BgL_arg2431z00_1645 = ((long) CINT(BgL_i1908z00_1638) + ((long) 1));
						{
							obj_t BgL_i1908z00_5821;

							BgL_i1908z00_5821 = BINT(BgL_arg2431z00_1645);
							BgL_i1908z00_1638 = BgL_i1908z00_5821;
							goto BGl_loop1907z00zz__gunza7ipza7;
						}
					}
				}
			else
				{	/* Unsafe/gunzip.scm 754 */
					return ((bool_t) 0);
				}
		}
	}



/* loop1905 */
	bool_t BGl_loop1905z00zz__gunza7ipza7(obj_t BgL_nbz00_4397,
		obj_t BgL_llz00_4396, obj_t BgL_bbz00_4395, obj_t BgL_bkz00_4394,
		obj_t BgL_inputzd2portzd2_4393, long BgL_i1906z00_1626)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 750 */
		BGl_loop1905z00zz__gunza7ipza7:
			{	/* Unsafe/gunzip.scm 750 */
				bool_t BgL_testz00_5823;

				{	/* Unsafe/gunzip.scm 750 */
					long BgL_n2z00_3391;

					BgL_n2z00_3391 = (long) CINT(CELL_REF(BgL_nbz00_4397));
					BgL_testz00_5823 = (BgL_i1906z00_1626 < BgL_n2z00_3391);
				}
				if (BgL_testz00_5823)
					{	/* Unsafe/gunzip.scm 750 */
						{	/* Unsafe/gunzip.scm 753 */
							long BgL_arg2420z00_1630;

							long BgL_arg2421z00_1631;

							{	/* Unsafe/gunzip.scm 753 */
								obj_t BgL_arg2422z00_1632;

								BgL_arg2422z00_1632 = BGl_vector3076z00zz__gunza7ipza7;
								{	/* Unsafe/gunzip.scm 753 */
									int BgL_kz00_3394;

									BgL_kz00_3394 = (int) (BgL_i1906z00_1626);
									BgL_arg2420z00_1630 =
										(long) CINT(VECTOR_REF(BgL_arg2422z00_1632, BgL_kz00_3394));
							}}
							{	/* Unsafe/gunzip.scm 753 */
								obj_t BgL_arg2423z00_1633;

								BGl_NEEDBITSz00zz__gunza7ipza7(BgL_bbz00_4395, BgL_bkz00_4394,
									BgL_inputzd2portzd2_4393, BINT(((long) 3)));
								{	/* Unsafe/gunzip.scm 753 */
									obj_t BgL_rz00_3396;

									BgL_rz00_3396 = CELL_REF(BgL_bbz00_4395);
									BGl_DUMPBITSz00zz__gunza7ipza7(BgL_bkz00_4394, BgL_bbz00_4395,
										((long) 3));
									BgL_arg2423z00_1633 = BgL_rz00_3396;
								}
								BgL_arg2421z00_1631 =
									((long) CINT(BgL_arg2423z00_1633) & ((long) 7));
							}
							{	/* Unsafe/gunzip.scm 752 */
								obj_t BgL_vectorz00_3399;

								int BgL_kz00_3400;

								obj_t BgL_objz00_3401;

								BgL_vectorz00_3399 = CELL_REF(BgL_llz00_4396);
								BgL_kz00_3400 = (int) (BgL_arg2420z00_1630);
								BgL_objz00_3401 = BINT(BgL_arg2421z00_1631);
								VECTOR_SET(BgL_vectorz00_3399, BgL_kz00_3400, BgL_objz00_3401);
						}}
						{	/* Unsafe/gunzip.scm 750 */
							long BgL_arg2425z00_1635;

							BgL_arg2425z00_1635 = (BgL_i1906z00_1626 + ((long) 1));
							{
								long BgL_i1906z00_5838;

								BgL_i1906z00_5838 = BgL_arg2425z00_1635;
								BgL_i1906z00_1626 = BgL_i1906z00_5838;
								goto BGl_loop1905z00zz__gunza7ipza7;
							}
						}
					}
				else
					{	/* Unsafe/gunzip.scm 750 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* k-loop */
	bool_t BGl_kzd2loopzd2zz__gunza7ipza7(long BgL_gz00_4415, obj_t BgL_cz00_4414,
		obj_t BgL_iz00_4413, long BgL_nz00_4412, obj_t BgL_dz00_4411,
		obj_t BgL_ez00_4410, long BgL_sz00_4409, obj_t BgL_vzd2poszd2_4408,
		obj_t BgL_vz00_4407, BgL_huftz00_bglt BgL_rz00_4406, obj_t BgL_wz00_4405,
		obj_t BgL_xz00_4404, obj_t BgL_uz00_4403, obj_t BgL_tzd2resultzd2_4402,
		obj_t BgL_qz00_4401, obj_t BgL_za7za7_4400, long BgL_lz00_4399,
		obj_t BgL_hz00_4398, long BgL_kz00_1267)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 446 */
		BGl_kzd2loopzd2zz__gunza7ipza7:
			if ((BgL_kz00_1267 <= BgL_gz00_4415))
				{	/* Unsafe/gunzip.scm 448 */
					obj_t BgL_az00_1270;

					{	/* Unsafe/gunzip.scm 448 */
						obj_t BgL_vectorz00_2864;

						int BgL_kz00_2865;

						BgL_vectorz00_2864 = CELL_REF(BgL_cz00_4414);
						BgL_kz00_2865 = (int) (BgL_kz00_1267);
						BgL_az00_1270 = VECTOR_REF(BgL_vectorz00_2864, BgL_kz00_2865);
					}
					{	/* Unsafe/gunzip.scm 449 */
						long BgL_g1888z00_1271;

						BgL_g1888z00_1271 = ((long) CINT(BgL_az00_1270) - ((long) 1));
						BGl_azd2loopzd2zz__gunza7ipza7(BgL_iz00_4413, BgL_nz00_4412,
							BgL_dz00_4411, BgL_ez00_4410, BgL_sz00_4409, BgL_vzd2poszd2_4408,
							BgL_vz00_4407, BgL_rz00_4406, BgL_wz00_4405, BgL_kz00_1267,
							BgL_xz00_4404, BgL_uz00_4403, BgL_tzd2resultzd2_4402,
							BgL_qz00_4401, BgL_za7za7_4400, BgL_gz00_4415, BgL_lz00_4399,
							BgL_hz00_4398, BgL_cz00_4414, BgL_g1888z00_1271);
					}
					{	/* Unsafe/gunzip.scm 545 */
						long BgL_arg2260z00_1349;

						BgL_arg2260z00_1349 = (BgL_kz00_1267 + ((long) 1));
						{
							long BgL_kz00_5847;

							BgL_kz00_5847 = BgL_arg2260z00_1349;
							BgL_kz00_1267 = BgL_kz00_5847;
							goto BGl_kzd2loopzd2zz__gunza7ipza7;
						}
					}
				}
			else
				{	/* Unsafe/gunzip.scm 447 */
					return ((bool_t) 0);
				}
		}
	}



/* loop_2971 */
	bool_t BGl_loop_2971z00zz__gunza7ipza7(long BgL_nz00_4419,
		obj_t BgL_vz00_4418, obj_t BgL_xz00_4417, obj_t BgL_bz00_4416,
		long BgL_iz00_1247, long BgL_bzd2poszd2_1248)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 421 */
		BGl_loop_2971z00zz__gunza7ipza7:
			{	/* Unsafe/gunzip.scm 423 */
				obj_t BgL_jz00_1250;

				BgL_jz00_1250 = VECTOR_REF(BgL_bz00_4416, (int) (BgL_bzd2poszd2_1248));
				if (((long) CINT(BgL_jz00_1250) == ((long) 0)))
					{	/* Unsafe/gunzip.scm 424 */
						BFALSE;
					}
				else
					{	/* Unsafe/gunzip.scm 425 */
						obj_t BgL_xjz00_1252;

						{	/* Unsafe/gunzip.scm 425 */
							obj_t BgL_vectorz00_2823;

							int BgL_kz00_2824;

							BgL_vectorz00_2823 = CELL_REF(BgL_xz00_4417);
							BgL_kz00_2824 = CINT(BgL_jz00_1250);
							BgL_xjz00_1252 = VECTOR_REF(BgL_vectorz00_2823, BgL_kz00_2824);
						}
						{	/* Unsafe/gunzip.scm 426 */
							long BgL_arg2190z00_1253;

							BgL_arg2190z00_1253 = (((long) 1) + (long) CINT(BgL_xjz00_1252));
							{	/* Unsafe/gunzip.scm 426 */
								obj_t BgL_vectorz00_2827;

								int BgL_kz00_2828;

								obj_t BgL_objz00_2829;

								BgL_vectorz00_2827 = CELL_REF(BgL_xz00_4417);
								BgL_kz00_2828 = CINT(BgL_jz00_1250);
								BgL_objz00_2829 = BINT(BgL_arg2190z00_1253);
								VECTOR_SET(BgL_vectorz00_2827, BgL_kz00_2828, BgL_objz00_2829);
						}}
						{	/* Unsafe/gunzip.scm 427 */
							obj_t BgL_vectorz00_2830;

							int BgL_kz00_2831;

							obj_t BgL_objz00_2832;

							BgL_vectorz00_2830 = CELL_REF(BgL_vz00_4418);
							BgL_kz00_2831 = CINT(BgL_xjz00_1252);
							BgL_objz00_2832 = BINT(BgL_iz00_1247);
							VECTOR_SET(BgL_vectorz00_2830, BgL_kz00_2831, BgL_objz00_2832);
					}}
				{	/* Unsafe/gunzip.scm 428 */
					long BgL_i2z00_1254;

					BgL_i2z00_1254 = (((long) 1) + BgL_iz00_1247);
					if ((BgL_i2z00_1254 < BgL_nz00_4419))
						{	/* Unsafe/gunzip.scm 430 */
							long BgL_arg2192z00_1256;

							BgL_arg2192z00_1256 = (((long) 1) + BgL_bzd2poszd2_1248);
							{
								long BgL_bzd2poszd2_5868;

								long BgL_iz00_5867;

								BgL_iz00_5867 = BgL_i2z00_1254;
								BgL_bzd2poszd2_5868 = BgL_arg2192z00_1256;
								BgL_bzd2poszd2_1248 = BgL_bzd2poszd2_5868;
								BgL_iz00_1247 = BgL_iz00_5867;
								goto BGl_loop_2971z00zz__gunza7ipza7;
							}
						}
					else
						{	/* Unsafe/gunzip.scm 429 */
							return ((bool_t) 0);
						}
				}
			}
		}
	}



/* loop_2970 */
	long BGl_loop_2970z00zz__gunza7ipza7(obj_t BgL_xz00_4421, obj_t BgL_cz00_4420,
		long BgL_iz00_2732, long BgL_xzd2poszd2_2733, long BgL_czd2poszd2_2734,
		long BgL_jz00_2735)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 407 */
		BGl_loop_2970z00zz__gunza7ipza7:
			if ((BgL_iz00_2732 == ((long) 0)))
				{	/* Unsafe/gunzip.scm 407 */
					return BgL_jz00_2735;
				}
			else
				{	/* Unsafe/gunzip.scm 407 */
					obj_t BgL_vz00_2744;

					{	/* Unsafe/gunzip.scm 407 */
						obj_t BgL_vectorz00_2752;

						int BgL_kz00_2753;

						BgL_vectorz00_2752 = CELL_REF(BgL_cz00_4420);
						BgL_kz00_2753 = (int) (BgL_czd2poszd2_2734);
						BgL_vz00_2744 = VECTOR_REF(BgL_vectorz00_2752, BgL_kz00_2753);
					}
					{	/* Unsafe/gunzip.scm 407 */
						long BgL_arg2268z00_2745;

						BgL_arg2268z00_2745 = (BgL_jz00_2735 + (long) CINT(BgL_vz00_2744));
						{	/* Unsafe/gunzip.scm 407 */
							obj_t BgL_vectorz00_2756;

							int BgL_kz00_2757;

							obj_t BgL_objz00_2758;

							BgL_vectorz00_2756 = CELL_REF(BgL_xz00_4421);
							BgL_kz00_2757 = (int) (BgL_xzd2poszd2_2733);
							BgL_objz00_2758 = BINT(BgL_arg2268z00_2745);
							VECTOR_SET(BgL_vectorz00_2756, BgL_kz00_2757, BgL_objz00_2758);
					}}
					{	/* Unsafe/gunzip.scm 407 */
						long BgL_arg2269z00_2746;

						long BgL_arg2270z00_2747;

						long BgL_arg2271z00_2748;

						long BgL_arg2272z00_2749;

						BgL_arg2269z00_2746 = (BgL_iz00_2732 - ((long) 1));
						BgL_arg2270z00_2747 = (BgL_xzd2poszd2_2733 + ((long) 1));
						BgL_arg2271z00_2748 = (BgL_czd2poszd2_2734 + ((long) 1));
						BgL_arg2272z00_2749 = (BgL_jz00_2735 + (long) CINT(BgL_vz00_2744));
						{
							long BgL_jz00_5886;

							long BgL_czd2poszd2_5885;

							long BgL_xzd2poszd2_5884;

							long BgL_iz00_5883;

							BgL_iz00_5883 = BgL_arg2269z00_2746;
							BgL_xzd2poszd2_5884 = BgL_arg2270z00_2747;
							BgL_czd2poszd2_5885 = BgL_arg2271z00_2748;
							BgL_jz00_5886 = BgL_arg2272z00_2749;
							BgL_jz00_2735 = BgL_jz00_5886;
							BgL_czd2poszd2_2734 = BgL_czd2poszd2_5885;
							BgL_xzd2poszd2_2733 = BgL_xzd2poszd2_5884;
							BgL_iz00_2732 = BgL_iz00_5883;
							goto BGl_loop_2970z00zz__gunza7ipza7;
						}
					}
				}
		}
	}



/* loop_2969 */
	obj_t BGl_loop_2969z00zz__gunza7ipza7(long BgL_iz00_4424,
		obj_t BgL_inputzd2portzd2_4423, obj_t BgL_cz00_4422, long BgL_yz00_1235,
		long BgL_jz00_1236)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 387 */
		BGl_loop_2969z00zz__gunza7ipza7:
			if ((BgL_jz00_1236 >= BgL_iz00_4424))
				{	/* Unsafe/gunzip.scm 389 */
					return BINT(BgL_yz00_1235);
				}
			else
				{	/* Unsafe/gunzip.scm 391 */
					long BgL_y2z00_1239;

					{	/* Unsafe/gunzip.scm 391 */
						obj_t BgL_arg2187z00_1243;

						{	/* Unsafe/gunzip.scm 391 */
							obj_t BgL_vectorz00_2691;

							int BgL_kz00_2692;

							BgL_vectorz00_2691 = CELL_REF(BgL_cz00_4422);
							BgL_kz00_2692 = (int) (BgL_jz00_1236);
							BgL_arg2187z00_1243 =
								VECTOR_REF(BgL_vectorz00_2691, BgL_kz00_2692);
						}
						BgL_y2z00_1239 = (BgL_yz00_1235 - (long) CINT(BgL_arg2187z00_1243));
					}
					if ((BgL_y2z00_1239 < ((long) 0)))
						{	/* Unsafe/gunzip.scm 393 */
							BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2072z00_2700;

							{	/* Unsafe/gunzip.scm 393 */
								obj_t BgL_arg2073z00_2701;

								{	/* Unsafe/gunzip.scm 393 */

									{	/* Unsafe/gunzip.scm 393 */

										BgL_arg2073z00_2701 =
											BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
								}}
								BgL_arg2072z00_2700 =
									BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(BFALSE,
									BFALSE, BgL_arg2073z00_2701, BGl_string3053z00zz__gunza7ipza7,
									BGl_string3078z00zz__gunza7ipza7, BgL_inputzd2portzd2_4423);
							}
							return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2072z00_2700));
						}
					else
						{	/* Unsafe/gunzip.scm 397 */
							long BgL_arg2185z00_1241;

							long BgL_arg2186z00_1242;

							BgL_arg2185z00_1241 = (BgL_y2z00_1239 * ((long) 2));
							BgL_arg2186z00_1242 = (BgL_jz00_1236 + ((long) 1));
							{
								long BgL_jz00_5903;

								long BgL_yz00_5902;

								BgL_yz00_5902 = BgL_arg2185z00_1241;
								BgL_jz00_5903 = BgL_arg2186z00_1242;
								BgL_jz00_1236 = BgL_jz00_5903;
								BgL_yz00_1235 = BgL_yz00_5902;
								goto BGl_loop_2969z00zz__gunza7ipza7;
							}
						}
				}
		}
	}



/* loop_2968 */
	long BGl_loop_2968z00zz__gunza7ipza7(obj_t BgL_cz00_4425, long BgL_iz00_1384)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 377 */
		BGl_loop_2968z00zz__gunza7ipza7:
			if ((BgL_iz00_1384 == ((long) 0)))
				{	/* Unsafe/gunzip.scm 379 */
					return ((long) 0);
				}
			else
				{	/* Unsafe/gunzip.scm 380 */
					bool_t BgL_testz00_5906;

					{	/* Unsafe/gunzip.scm 380 */
						obj_t BgL_arg2279z00_1389;

						{	/* Unsafe/gunzip.scm 380 */
							obj_t BgL_vectorz00_2677;

							int BgL_kz00_2678;

							BgL_vectorz00_2677 = CELL_REF(BgL_cz00_4425);
							BgL_kz00_2678 = (int) (BgL_iz00_1384);
							BgL_arg2279z00_1389 =
								VECTOR_REF(BgL_vectorz00_2677, BgL_kz00_2678);
						}
						BgL_testz00_5906 = ((long) CINT(BgL_arg2279z00_1389) > ((long) 0));
					}
					if (BgL_testz00_5906)
						{	/* Unsafe/gunzip.scm 380 */
							return BgL_iz00_1384;
						}
					else
						{
							long BgL_iz00_5911;

							BgL_iz00_5911 = (BgL_iz00_1384 - ((long) 1));
							BgL_iz00_1384 = BgL_iz00_5911;
							goto BGl_loop_2968z00zz__gunza7ipza7;
						}
				}
		}
	}



/* loop_2967 */
	long BGl_loop_2967z00zz__gunza7ipza7(obj_t BgL_cz00_4426, long BgL_jz00_1393)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 371 */
		BGl_loop_2967z00zz__gunza7ipza7:
			if ((BgL_jz00_1393 > ((long) 16)))
				{	/* Unsafe/gunzip.scm 373 */
					return BgL_jz00_1393;
				}
			else
				{	/* Unsafe/gunzip.scm 374 */
					bool_t BgL_testz00_5915;

					{	/* Unsafe/gunzip.scm 374 */
						obj_t BgL_arg2285z00_1398;

						{	/* Unsafe/gunzip.scm 374 */
							obj_t BgL_vectorz00_2669;

							int BgL_kz00_2670;

							BgL_vectorz00_2669 = CELL_REF(BgL_cz00_4426);
							BgL_kz00_2670 = (int) (BgL_jz00_1393);
							BgL_arg2285z00_1398 =
								VECTOR_REF(BgL_vectorz00_2669, BgL_kz00_2670);
						}
						BgL_testz00_5915 = ((long) CINT(BgL_arg2285z00_1398) > ((long) 0));
					}
					if (BgL_testz00_5915)
						{	/* Unsafe/gunzip.scm 374 */
							return BgL_jz00_1393;
						}
					else
						{
							long BgL_jz00_5920;

							BgL_jz00_5920 = (BgL_jz00_1393 + ((long) 1));
							BgL_jz00_1393 = BgL_jz00_5920;
							goto BGl_loop_2967z00zz__gunza7ipza7;
						}
				}
		}
	}



/* loop1882 */
	bool_t BGl_loop1882z00zz__gunza7ipza7(long BgL_nz00_4429, obj_t BgL_cz00_4428,
		obj_t BgL_bz00_4427, long BgL_i1883z00_1208)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 362 */
		BGl_loop1882z00zz__gunza7ipza7:
			if ((BgL_i1883z00_1208 < BgL_nz00_4429))
				{	/* Unsafe/gunzip.scm 362 */
					{	/* Unsafe/gunzip.scm 364 */
						obj_t BgL_za2pza2_1212;

						BgL_za2pza2_1212 =
							VECTOR_REF(BgL_bz00_4427, (int) (BgL_i1883z00_1208));
						{	/* Unsafe/gunzip.scm 365 */
							long BgL_arg2173z00_1213;

							{	/* Unsafe/gunzip.scm 365 */
								obj_t BgL_arg2174z00_1214;

								{	/* Unsafe/gunzip.scm 365 */
									obj_t BgL_vectorz00_2649;

									int BgL_kz00_2650;

									BgL_vectorz00_2649 = CELL_REF(BgL_cz00_4428);
									BgL_kz00_2650 = CINT(BgL_za2pza2_1212);
									BgL_arg2174z00_1214 =
										VECTOR_REF(BgL_vectorz00_2649, BgL_kz00_2650);
								}
								BgL_arg2173z00_1213 =
									((long) CINT(BgL_arg2174z00_1214) + ((long) 1));
							}
							{	/* Unsafe/gunzip.scm 365 */
								obj_t BgL_vectorz00_2653;

								int BgL_kz00_2654;

								obj_t BgL_objz00_2655;

								BgL_vectorz00_2653 = CELL_REF(BgL_cz00_4428);
								BgL_kz00_2654 = CINT(BgL_za2pza2_1212);
								BgL_objz00_2655 = BINT(BgL_arg2173z00_1213);
								VECTOR_SET(BgL_vectorz00_2653, BgL_kz00_2654, BgL_objz00_2655);
					}}}
					{	/* Unsafe/gunzip.scm 362 */
						long BgL_arg2176z00_1216;

						BgL_arg2176z00_1216 = (BgL_i1883z00_1208 + ((long) 1));
						{
							long BgL_i1883z00_5934;

							BgL_i1883z00_5934 = BgL_arg2176z00_1216;
							BgL_i1883z00_1208 = BgL_i1883z00_5934;
							goto BGl_loop1882z00zz__gunza7ipza7;
						}
					}
				}
			else
				{	/* Unsafe/gunzip.scm 362 */
					return ((bool_t) 0);
				}
		}
	}



/* a-loop */
	bool_t BGl_azd2loopzd2zz__gunza7ipza7(obj_t BgL_iz00_4448, long BgL_nz00_4447,
		obj_t BgL_dz00_4446, obj_t BgL_ez00_4445, long BgL_sz00_4444,
		obj_t BgL_vzd2poszd2_4443, obj_t BgL_vz00_4442,
		BgL_huftz00_bglt BgL_rz00_4441, obj_t BgL_wz00_4440, long BgL_kz00_4439,
		obj_t BgL_xz00_4438, obj_t BgL_uz00_4437, obj_t BgL_tzd2resultzd2_4436,
		obj_t BgL_qz00_4435, obj_t BgL_za7za7_4434, long BgL_gz00_4433,
		long BgL_lz00_4432, obj_t BgL_hz00_4431, obj_t BgL_cz00_4430,
		long BgL_az00_1273)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 449 */
		BGl_azd2loopzd2zz__gunza7ipza7:
			if ((BgL_az00_1273 < ((long) 0)))
				{	/* Unsafe/gunzip.scm 450 */
					return ((bool_t) 0);
				}
			else
				{	/* Unsafe/gunzip.scm 450 */
					BGl_kwlzd2loopzd2zz__gunza7ipza7(BgL_rz00_4441, BgL_iz00_4448,
						BgL_xz00_4438, BgL_uz00_4437, BgL_tzd2resultzd2_4436, BgL_qz00_4435,
						BgL_az00_1273, BgL_kz00_4439, BgL_za7za7_4434, BgL_gz00_4433,
						BgL_lz00_4432, BgL_wz00_4440, BgL_hz00_4431, BgL_cz00_4430);
					{	/* Unsafe/gunzip.scm 506 */
						long BgL_arg2222z00_1307;

						{	/* Unsafe/gunzip.scm 506 */
							long BgL_za72za7_2971;

							BgL_za72za7_2971 = (long) CINT(CELL_REF(BgL_wz00_4440));
							BgL_arg2222z00_1307 = (BgL_kz00_4439 - BgL_za72za7_2971);
						}
						((((BgL_huftz00_bglt) CREF(BgL_rz00_4441))->BgL_bz00) =
							((long) BgL_arg2222z00_1307), BUNSPEC);
					}
					{	/* Unsafe/gunzip.scm 508 */
						bool_t BgL_testz00_5941;

						{	/* Unsafe/gunzip.scm 508 */
							long BgL_n1z00_2974;

							BgL_n1z00_2974 = (long) CINT(CELL_REF(BgL_vzd2poszd2_4443));
							BgL_testz00_5941 = (BgL_n1z00_2974 >= BgL_nz00_4447);
						}
						if (BgL_testz00_5941)
							{	/* Unsafe/gunzip.scm 508 */
								((((BgL_huftz00_bglt) CREF(BgL_rz00_4441))->BgL_ez00) =
									((long) ((long) 99)), BUNSPEC);
							}
						else
							{	/* Unsafe/gunzip.scm 510 */
								obj_t BgL_vvz00_1309;

								{	/* Unsafe/gunzip.scm 510 */
									obj_t BgL_vectorz00_2978;

									int BgL_kz00_2979;

									BgL_vectorz00_2978 = CELL_REF(BgL_vz00_4442);
									BgL_kz00_2979 = CINT(CELL_REF(BgL_vzd2poszd2_4443));
									BgL_vvz00_1309 =
										VECTOR_REF(BgL_vectorz00_2978, BgL_kz00_2979);
								}
								if (((long) CINT(BgL_vvz00_1309) < BgL_sz00_4444))
									{	/* Unsafe/gunzip.scm 511 */
										{	/* Unsafe/gunzip.scm 514 */
											long BgL_arg2226z00_1311;

											if (((long) CINT(BgL_vvz00_1309) < ((long) 256)))
												{	/* Unsafe/gunzip.scm 514 */
													BgL_arg2226z00_1311 = ((long) 16);
												}
											else
												{	/* Unsafe/gunzip.scm 514 */
													BgL_arg2226z00_1311 = ((long) 15);
												}
											((((BgL_huftz00_bglt) CREF(BgL_rz00_4441))->BgL_ez00) =
												((long) BgL_arg2226z00_1311), BUNSPEC);
										}
										((((BgL_huftz00_bglt) CREF(BgL_rz00_4441))->BgL_vz00) =
											((obj_t) BgL_vvz00_1309), BUNSPEC);
									}
								else
									{	/* Unsafe/gunzip.scm 511 */
										{	/* Unsafe/gunzip.scm 518 */
											obj_t BgL_arg2233z00_1313;

											{	/* Unsafe/gunzip.scm 518 */
												long BgL_arg2234z00_1314;

												BgL_arg2234z00_1314 =
													((long) CINT(BgL_vvz00_1309) - BgL_sz00_4444);
												BgL_arg2233z00_1313 =
													VECTOR_REF(BgL_ez00_4445,
													(int) (BgL_arg2234z00_1314));
											}
											{
												long BgL_auxz00_5959;

												BgL_auxz00_5959 = (long) CINT(BgL_arg2233z00_1313);
												((((BgL_huftz00_bglt) CREF(BgL_rz00_4441))->BgL_ez00) =
													((long) BgL_auxz00_5959), BUNSPEC);
										}}
										{	/* Unsafe/gunzip.scm 520 */
											obj_t BgL_arg2235z00_1315;

											{	/* Unsafe/gunzip.scm 520 */
												long BgL_arg2236z00_1316;

												BgL_arg2236z00_1316 =
													((long) CINT(BgL_vvz00_1309) - BgL_sz00_4444);
												BgL_arg2235z00_1315 =
													VECTOR_REF(BgL_dz00_4446,
													(int) (BgL_arg2236z00_1316));
											}
											((((BgL_huftz00_bglt) CREF(BgL_rz00_4441))->BgL_vz00) =
												((obj_t) BgL_arg2235z00_1315), BUNSPEC);
									}}
								{	/* Unsafe/gunzip.scm 521 */
									obj_t BgL_auxz00_4449;

									{	/* Unsafe/gunzip.scm 521 */
										long BgL_za71za7_3000;

										BgL_za71za7_3000 =
											(long) CINT(CELL_REF(BgL_vzd2poszd2_4443));
										BgL_auxz00_4449 = BINT((BgL_za71za7_3000 + ((long) 1)));
									}
									CELL_SET(BgL_vzd2poszd2_4443, BgL_auxz00_4449);
					}}}
					{	/* Unsafe/gunzip.scm 523 */
						long BgL_fz00_1317;

						{	/* Unsafe/gunzip.scm 523 */
							int BgL_auxz00_5970;

							{	/* Unsafe/gunzip.scm 523 */
								long BgL_za72za7_3003;

								BgL_za72za7_3003 = (long) CINT(CELL_REF(BgL_wz00_4440));
								BgL_auxz00_5970 = (int) ((BgL_kz00_4439 - BgL_za72za7_3003));
							}
							BgL_fz00_1317 = (((long) 1) << BgL_auxz00_5970);
						}
						{	/* Unsafe/gunzip.scm 524 */
							long BgL_g1890z00_1318;

							{	/* Unsafe/gunzip.scm 524 */
								long BgL_xz00_3006;

								long BgL_yz00_3007;

								BgL_xz00_3006 = (long) CINT(CELL_REF(BgL_iz00_4448));
								BgL_yz00_3007 = (long) CINT(CELL_REF(BgL_wz00_4440));
								BgL_g1890z00_1318 = (BgL_xz00_3006 >> (int) (BgL_yz00_3007));
							}
							BGl_loop_2972z00zz__gunza7ipza7(BgL_za7za7_4434, BgL_fz00_1317,
								BgL_rz00_4441, BgL_qz00_4435, BgL_g1890z00_1318);
					}}
					{	/* Unsafe/gunzip.scm 529 */
						long BgL_g1891z00_1328;

						BgL_g1891z00_1328 =
							(((long) 1) << (int) ((BgL_kz00_4439 - ((long) 1))));
						BGl_loop_2973z00zz__gunza7ipza7(BgL_iz00_4448, BgL_g1891z00_1328);
					}
					BGl_loop_2974z00zz__gunza7ipza7(BgL_iz00_4448, BgL_xz00_4438,
						BgL_lz00_4432, BgL_wz00_4440, BgL_hz00_4431);
					{	/* Unsafe/gunzip.scm 544 */
						long BgL_arg2259z00_1347;

						BgL_arg2259z00_1347 = (BgL_az00_1273 - ((long) 1));
						{
							long BgL_az00_5986;

							BgL_az00_5986 = BgL_arg2259z00_1347;
							BgL_az00_1273 = BgL_az00_5986;
							goto BGl_azd2loopzd2zz__gunza7ipza7;
						}
					}
				}
		}
	}



/* loop_2974 */
	bool_t BGl_loop_2974z00zz__gunza7ipza7(obj_t BgL_iz00_4454,
		obj_t BgL_xz00_4453, long BgL_lz00_4452, obj_t BgL_wz00_4451,
		obj_t BgL_hz00_4450)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 536 */
		BGl_loop_2974z00zz__gunza7ipza7:
			{	/* Unsafe/gunzip.scm 537 */
				bool_t BgL_testz00_5987;

				{	/* Unsafe/gunzip.scm 537 */
					obj_t BgL_arg2252z00_1341;

					long BgL_arg2253z00_1342;

					{	/* Unsafe/gunzip.scm 537 */
						obj_t BgL_vectorz00_3042;

						int BgL_kz00_3043;

						BgL_vectorz00_3042 = CELL_REF(BgL_xz00_4453);
						BgL_kz00_3043 = CINT(CELL_REF(BgL_hz00_4450));
						BgL_arg2252z00_1341 = VECTOR_REF(BgL_vectorz00_3042, BgL_kz00_3043);
					}
					{	/* Unsafe/gunzip.scm 539 */
						long BgL_arg2255z00_1343;

						{	/* Unsafe/gunzip.scm 539 */
							long BgL_auxz00_5990;

							{	/* Unsafe/gunzip.scm 539 */
								long BgL_yz00_3045;

								BgL_yz00_3045 = (long) CINT(CELL_REF(BgL_wz00_4451));
								BgL_auxz00_5990 = (((long) 1) << (int) (BgL_yz00_3045));
							}
							BgL_arg2255z00_1343 = (BgL_auxz00_5990 - ((long) 1));
						}
						{	/* Unsafe/gunzip.scm 538 */
							long BgL_xz00_3048;

							BgL_xz00_3048 = (long) CINT(CELL_REF(BgL_iz00_4454));
							BgL_arg2253z00_1342 = (BgL_xz00_3048 & BgL_arg2255z00_1343);
					}}
					BgL_testz00_5987 =
						((long) CINT(BgL_arg2252z00_1341) == BgL_arg2253z00_1342);
				}
				if (BgL_testz00_5987)
					{	/* Unsafe/gunzip.scm 537 */
						return ((bool_t) 0);
					}
				else
					{	/* Unsafe/gunzip.scm 537 */
						{	/* Unsafe/gunzip.scm 540 */
							obj_t BgL_auxz00_4455;

							{	/* Unsafe/gunzip.scm 540 */
								long BgL_za71za7_3052;

								BgL_za71za7_3052 = (long) CINT(CELL_REF(BgL_hz00_4450));
								BgL_auxz00_4455 = BINT((BgL_za71za7_3052 - ((long) 1)));
							}
							CELL_SET(BgL_hz00_4450, BgL_auxz00_4455);
						}
						{	/* Unsafe/gunzip.scm 541 */
							obj_t BgL_auxz00_4456;

							{	/* Unsafe/gunzip.scm 541 */
								long BgL_za71za7_3054;

								BgL_za71za7_3054 = (long) CINT(CELL_REF(BgL_wz00_4451));
								BgL_auxz00_4456 = BINT((BgL_za71za7_3054 - BgL_lz00_4452));
							}
							CELL_SET(BgL_wz00_4451, BgL_auxz00_4456);
						}
						{

							goto BGl_loop_2974z00zz__gunza7ipza7;
						}
					}
			}
		}
	}



/* loop_2973 */
	obj_t BGl_loop_2973z00zz__gunza7ipza7(obj_t BgL_iz00_4457, long BgL_jz00_1330)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 529 */
		BGl_loop_2973z00zz__gunza7ipza7:
			{	/* Unsafe/gunzip.scm 530 */
				bool_t BgL_testz00_6005;

				{	/* Unsafe/gunzip.scm 530 */
					obj_t BgL_auxz00_6006;

					{	/* Unsafe/gunzip.scm 530 */
						long BgL_xz00_3034;

						BgL_xz00_3034 = (long) CINT(CELL_REF(BgL_iz00_4457));
						BgL_auxz00_6006 = BINT((BgL_xz00_3034 & BgL_jz00_1330));
					}
					BgL_testz00_6005 =
						BGl_positivezf3zf3zz__r4_numbers_6_5z00(BgL_auxz00_6006);
				}
				if (BgL_testz00_6005)
					{	/* Unsafe/gunzip.scm 530 */
						{	/* Unsafe/gunzip.scm 532 */
							obj_t BgL_auxz00_4458;

							{	/* Unsafe/gunzip.scm 532 */
								long BgL_xz00_3036;

								BgL_xz00_3036 = (long) CINT(CELL_REF(BgL_iz00_4457));
								BgL_auxz00_4458 = BINT((BgL_xz00_3036 ^ BgL_jz00_1330));
							}
							CELL_SET(BgL_iz00_4457, BgL_auxz00_4458);
						}
						{	/* Unsafe/gunzip.scm 533 */
							long BgL_arg2246z00_1333;

							BgL_arg2246z00_1333 = (BgL_jz00_1330 >> (int) (((long) 1)));
							{
								long BgL_jz00_6016;

								BgL_jz00_6016 = BgL_arg2246z00_1333;
								BgL_jz00_1330 = BgL_jz00_6016;
								goto BGl_loop_2973z00zz__gunza7ipza7;
							}
						}
					}
				else
					{	/* Unsafe/gunzip.scm 534 */
						obj_t BgL_auxz00_4459;

						{	/* Unsafe/gunzip.scm 534 */
							long BgL_xz00_3040;

							BgL_xz00_3040 = (long) CINT(CELL_REF(BgL_iz00_4457));
							BgL_auxz00_4459 = BINT((BgL_xz00_3040 ^ BgL_jz00_1330));
						}
						return CELL_SET(BgL_iz00_4457, BgL_auxz00_4459);
					}
			}
		}
	}



/* loop_2972 */
	bool_t BGl_loop_2972z00zz__gunza7ipza7(obj_t BgL_za7za7_4463,
		long BgL_fz00_4462, BgL_huftz00_bglt BgL_rz00_4461, obj_t BgL_qz00_4460,
		long BgL_jz00_1320)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 524 */
		BGl_loop_2972z00zz__gunza7ipza7:
			{	/* Unsafe/gunzip.scm 525 */
				bool_t BgL_testz00_6020;

				{	/* Unsafe/gunzip.scm 525 */
					long BgL_n2z00_3009;

					BgL_n2z00_3009 = (long) CINT(CELL_REF(BgL_za7za7_4463));
					BgL_testz00_6020 = (BgL_jz00_1320 < BgL_n2z00_3009);
				}
				if (BgL_testz00_6020)
					{	/* Unsafe/gunzip.scm 525 */
						{	/* Unsafe/gunzip.scm 526 */
							obj_t BgL_arg2239z00_1323;

							{	/* Unsafe/gunzip.scm 526 */
								obj_t BgL_vectorz00_3010;

								int BgL_kz00_3011;

								BgL_vectorz00_3010 = CELL_REF(BgL_qz00_4460);
								BgL_kz00_3011 = (int) (BgL_jz00_1320);
								BgL_arg2239z00_1323 =
									VECTOR_REF(BgL_vectorz00_3010, BgL_kz00_3011);
							}
							{	/* Unsafe/gunzip.scm 526 */
								long BgL_arg2056z00_3016;

								BgL_arg2056z00_3016 =
									(((BgL_huftz00_bglt) CREF(BgL_rz00_4461))->BgL_ez00);
								{
									BgL_huftz00_bglt BgL_auxz00_6026;

									BgL_auxz00_6026 = (BgL_huftz00_bglt) (BgL_arg2239z00_1323);
									((((BgL_huftz00_bglt) CREF(BgL_auxz00_6026))->BgL_ez00) =
										((long) BgL_arg2056z00_3016), BUNSPEC);
							}}
							{	/* Unsafe/gunzip.scm 526 */
								long BgL_arg2057z00_3017;

								BgL_arg2057z00_3017 =
									(((BgL_huftz00_bglt) CREF(BgL_rz00_4461))->BgL_bz00);
								{
									BgL_huftz00_bglt BgL_auxz00_6030;

									BgL_auxz00_6030 = (BgL_huftz00_bglt) (BgL_arg2239z00_1323);
									((((BgL_huftz00_bglt) CREF(BgL_auxz00_6030))->BgL_bz00) =
										((long) BgL_arg2057z00_3017), BUNSPEC);
							}}
							{	/* Unsafe/gunzip.scm 526 */
								obj_t BgL_arg2058z00_3018;

								BgL_arg2058z00_3018 =
									(((BgL_huftz00_bglt) CREF(BgL_rz00_4461))->BgL_vz00);
								{
									BgL_huftz00_bglt BgL_auxz00_6034;

									BgL_auxz00_6034 = (BgL_huftz00_bglt) (BgL_arg2239z00_1323);
									((((BgL_huftz00_bglt) CREF(BgL_auxz00_6034))->BgL_vz00) =
										((obj_t) BgL_arg2058z00_3018), BUNSPEC);
						}}}
						{	/* Unsafe/gunzip.scm 527 */
							long BgL_arg2240z00_1324;

							BgL_arg2240z00_1324 = (BgL_jz00_1320 + BgL_fz00_4462);
							{
								long BgL_jz00_6038;

								BgL_jz00_6038 = BgL_arg2240z00_1324;
								BgL_jz00_1320 = BgL_jz00_6038;
								goto BGl_loop_2972z00zz__gunza7ipza7;
							}
						}
					}
				else
					{	/* Unsafe/gunzip.scm 525 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* kwl-loop */
	bool_t BGl_kwlzd2loopzd2zz__gunza7ipza7(BgL_huftz00_bglt BgL_rz00_4477,
		obj_t BgL_iz00_4476, obj_t BgL_xz00_4475, obj_t BgL_uz00_4474,
		obj_t BgL_tzd2resultzd2_4473, obj_t BgL_qz00_4472, long BgL_az00_4471,
		long BgL_kz00_4470, obj_t BgL_za7za7_4469, long BgL_gz00_4468,
		long BgL_lz00_4467, obj_t BgL_wz00_4466, obj_t BgL_hz00_4465,
		obj_t BgL_cz00_4464)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 454 */
		BGl_kwlzd2loopzd2zz__gunza7ipza7:
			{	/* Unsafe/gunzip.scm 455 */
				bool_t BgL_testz00_6039;

				{	/* Unsafe/gunzip.scm 455 */
					long BgL_auxz00_6040;

					{	/* Unsafe/gunzip.scm 455 */
						long BgL_za71za7_2870;

						BgL_za71za7_2870 = (long) CINT(CELL_REF(BgL_wz00_4466));
						BgL_auxz00_6040 = (BgL_za71za7_2870 + BgL_lz00_4467);
					}
					BgL_testz00_6039 = (BgL_kz00_4470 > BgL_auxz00_6040);
				}
				if (BgL_testz00_6039)
					{	/* Unsafe/gunzip.scm 455 */
						{	/* Unsafe/gunzip.scm 456 */
							obj_t BgL_auxz00_4478;

							{	/* Unsafe/gunzip.scm 456 */
								long BgL_za71za7_2874;

								BgL_za71za7_2874 = (long) CINT(CELL_REF(BgL_hz00_4465));
								BgL_auxz00_4478 = BINT((BgL_za71za7_2874 + ((long) 1)));
							}
							CELL_SET(BgL_hz00_4465, BgL_auxz00_4478);
						}
						{	/* Unsafe/gunzip.scm 457 */
							obj_t BgL_auxz00_4479;

							{	/* Unsafe/gunzip.scm 457 */
								long BgL_za71za7_2876;

								BgL_za71za7_2876 = (long) CINT(CELL_REF(BgL_wz00_4466));
								BgL_auxz00_4479 = BINT((BgL_za71za7_2876 + BgL_lz00_4467));
							}
							CELL_SET(BgL_wz00_4466, BgL_auxz00_4479);
						}
						{	/* Unsafe/gunzip.scm 461 */
							obj_t BgL_auxz00_4480;

							{	/* Unsafe/gunzip.scm 461 */
								long BgL_xz00_1279;

								{	/* Unsafe/gunzip.scm 461 */
									long BgL_za72za7_2879;

									BgL_za72za7_2879 = (long) CINT(CELL_REF(BgL_wz00_4466));
									BgL_xz00_1279 = (BgL_gz00_4468 - BgL_za72za7_2879);
								}
								if ((BgL_xz00_1279 < BgL_lz00_4467))
									{	/* Unsafe/gunzip.scm 461 */
										BgL_auxz00_4480 = BINT(BgL_xz00_1279);
									}
								else
									{	/* Unsafe/gunzip.scm 461 */
										BgL_auxz00_4480 = BINT(BgL_lz00_4467);
									}
							}
							CELL_SET(BgL_za7za7_4469, BgL_auxz00_4480);
						}
						{	/* Unsafe/gunzip.scm 462 */
							obj_t BgL_jz00_1282;

							{	/* Unsafe/gunzip.scm 462 */
								obj_t BgL_cellvalz00_6056;

								{	/* Unsafe/gunzip.scm 462 */
									long BgL_za72za7_2883;

									BgL_za72za7_2883 = (long) CINT(CELL_REF(BgL_wz00_4466));
									BgL_cellvalz00_6056 =
										BINT((BgL_kz00_4470 - BgL_za72za7_2883));
								}
								BgL_jz00_1282 = MAKE_CELL(BgL_cellvalz00_6056);
							}
							{	/* Unsafe/gunzip.scm 462 */
								obj_t BgL_fz00_1283;

								{	/* Unsafe/gunzip.scm 463 */
									obj_t BgL_cellvalz00_6060;

									BgL_cellvalz00_6060 =
										BINT(
										(((long) 1) <<
											(int) ((long) CINT(CELL_REF(BgL_jz00_1282)))));
									BgL_fz00_1283 = MAKE_CELL(BgL_cellvalz00_6060);
								}
								{	/* Unsafe/gunzip.scm 463 */

									if (
										((long) CINT(CELL_REF(BgL_fz00_1283)) >
											(BgL_az00_4471 + ((long) 1))))
										{	/* Unsafe/gunzip.scm 464 */
											{	/* Unsafe/gunzip.scm 465 */
												obj_t BgL_auxz00_4481;

												BgL_auxz00_4481 =
													BINT(
													((long) CINT(CELL_REF(BgL_fz00_1283)) -
														(BgL_az00_4471 + ((long) 1))));
												CELL_SET(BgL_fz00_1283, BgL_auxz00_4481);
											}
											BGl_loop_2975z00zz__gunza7ipza7(BgL_za7za7_4469,
												BgL_cz00_4464, BgL_fz00_1283, BgL_jz00_1282,
												BgL_kz00_4470);
										}
									else
										{	/* Unsafe/gunzip.scm 464 */
											((bool_t) 0);
										}
									{	/* Unsafe/gunzip.scm 475 */
										obj_t BgL_auxz00_4482;

										BgL_auxz00_4482 =
											BINT(
											(((long) 1) <<
												(int) ((long) CINT(CELL_REF(BgL_jz00_1282)))));
										CELL_SET(BgL_za7za7_4469, BgL_auxz00_4482);
									}
									{	/* Unsafe/gunzip.scm 478 */
										obj_t BgL_auxz00_4483;

										BgL_auxz00_4483 =
											BGl_buildzd2vectorzd2zz__gunza7ipza7(CELL_REF
											(BgL_za7za7_4469), BGl_proc3079z00zz__gunza7ipza7);
										CELL_SET(BgL_qz00_4472, BgL_auxz00_4483);
									}
									if (CBOOL(CELL_REF(BgL_tzd2resultzd2_4473)))
										{	/* Unsafe/gunzip.scm 485 */
											BFALSE;
										}
									else
										{	/* Unsafe/gunzip.scm 486 */
											obj_t BgL_auxz00_4484;

											BgL_auxz00_4484 = CELL_REF(BgL_qz00_4472);
											CELL_SET(BgL_tzd2resultzd2_4473, BgL_auxz00_4484);
										}
									{	/* Unsafe/gunzip.scm 488 */
										int BgL_kz00_2929;

										obj_t BgL_objz00_2930;

										BgL_kz00_2929 = CINT(CELL_REF(BgL_hz00_4465));
										BgL_objz00_2930 = CELL_REF(BgL_qz00_4472);
										VECTOR_SET(BgL_uz00_4474, BgL_kz00_2929, BgL_objz00_2930);
									}
									{	/* Unsafe/gunzip.scm 492 */
										bool_t BgL_testz00_6083;

										{	/* Unsafe/gunzip.scm 492 */
											long BgL_n1z00_2931;

											BgL_n1z00_2931 = (long) CINT(CELL_REF(BgL_hz00_4465));
											BgL_testz00_6083 = (BgL_n1z00_2931 == ((long) 0));
										}
										if (BgL_testz00_6083)
											{	/* Unsafe/gunzip.scm 492 */
												BFALSE;
											}
										else
											{	/* Unsafe/gunzip.scm 492 */
												{	/* Unsafe/gunzip.scm 493 */
													obj_t BgL_vectorz00_2933;

													int BgL_kz00_2934;

													obj_t BgL_objz00_2935;

													BgL_vectorz00_2933 = CELL_REF(BgL_xz00_4475);
													BgL_kz00_2934 = CINT(CELL_REF(BgL_hz00_4465));
													BgL_objz00_2935 = CELL_REF(BgL_iz00_4476);
													VECTOR_SET(BgL_vectorz00_2933, BgL_kz00_2934,
														BgL_objz00_2935);
												}
												((((BgL_huftz00_bglt) CREF(BgL_rz00_4477))->BgL_bz00) =
													((long) BgL_lz00_4467), BUNSPEC);
												{	/* Unsafe/gunzip.scm 495 */
													long BgL_arg2211z00_1300;

													BgL_arg2211z00_1300 =
														(
														(long) CINT(CELL_REF(BgL_jz00_1282)) + ((long) 16));
													((((BgL_huftz00_bglt) CREF(BgL_rz00_4477))->
															BgL_ez00) =
														((long) BgL_arg2211z00_1300), BUNSPEC);
												}
												{	/* Unsafe/gunzip.scm 496 */
													BgL_huftz00_bglt BgL_obj1832z00_2942;

													obj_t BgL_val1831z00_2943;

													BgL_obj1832z00_2942 = BgL_rz00_4477;
													BgL_val1831z00_2943 = CELL_REF(BgL_qz00_4472);
													((((BgL_huftz00_bglt) CREF(BgL_obj1832z00_2942))->
															BgL_vz00) =
														((obj_t) BgL_val1831z00_2943), BUNSPEC);
												}
												{	/* Unsafe/gunzip.scm 497 */
													obj_t BgL_auxz00_4485;

													{	/* Unsafe/gunzip.scm 497 */
														long BgL_xz00_2946;

														BgL_xz00_2946 =
															(long) CINT(CELL_REF(BgL_iz00_4476));
														{	/* Unsafe/gunzip.scm 497 */
															long BgL_auxz00_6094;

															{	/* Unsafe/gunzip.scm 497 */
																int BgL_auxz00_6095;

																{	/* Unsafe/gunzip.scm 497 */
																	long BgL_za71za7_2944;

																	BgL_za71za7_2944 =
																		(long) CINT(CELL_REF(BgL_wz00_4466));
																	BgL_auxz00_6095 =
																		(int) ((BgL_za71za7_2944 - BgL_lz00_4467));
																}
																BgL_auxz00_6094 =
																	(BgL_xz00_2946 >> BgL_auxz00_6095);
															}
															BgL_auxz00_4485 = BINT(BgL_auxz00_6094);
													}}
													CELL_SET(BgL_jz00_1282, BgL_auxz00_4485);
												}
												{	/* Unsafe/gunzip.scm 501 */
													obj_t BgL_arg2213z00_1302;

													{	/* Unsafe/gunzip.scm 501 */
														obj_t BgL_arg2214z00_1303;

														{	/* Unsafe/gunzip.scm 501 */
															long BgL_arg2216z00_1304;

															{	/* Unsafe/gunzip.scm 501 */
																long BgL_za71za7_2948;

																BgL_za71za7_2948 =
																	(long) CINT(CELL_REF(BgL_hz00_4465));
																BgL_arg2216z00_1304 =
																	(BgL_za71za7_2948 - ((long) 1));
															}
															BgL_arg2214z00_1303 =
																VECTOR_REF(BgL_uz00_4474,
																(int) (BgL_arg2216z00_1304));
														}
														{	/* Unsafe/gunzip.scm 500 */
															obj_t BgL_vectorz00_2952;

															int BgL_kz00_2953;

															BgL_vectorz00_2952 = BgL_arg2214z00_1303;
															BgL_kz00_2953 = CINT(CELL_REF(BgL_jz00_1282));
															BgL_arg2213z00_1302 =
																VECTOR_REF(BgL_vectorz00_2952, BgL_kz00_2953);
													}}
													{	/* Unsafe/gunzip.scm 499 */
														long BgL_arg2056z00_2958;

														BgL_arg2056z00_2958 =
															(((BgL_huftz00_bglt) CREF(BgL_rz00_4477))->
															BgL_ez00);
														{
															BgL_huftz00_bglt BgL_auxz00_6108;

															BgL_auxz00_6108 =
																(BgL_huftz00_bglt) (BgL_arg2213z00_1302);
															((((BgL_huftz00_bglt) CREF(BgL_auxz00_6108))->
																	BgL_ez00) =
																((long) BgL_arg2056z00_2958), BUNSPEC);
													}}
													{	/* Unsafe/gunzip.scm 499 */
														long BgL_arg2057z00_2959;

														BgL_arg2057z00_2959 =
															(((BgL_huftz00_bglt) CREF(BgL_rz00_4477))->
															BgL_bz00);
														{
															BgL_huftz00_bglt BgL_auxz00_6112;

															BgL_auxz00_6112 =
																(BgL_huftz00_bglt) (BgL_arg2213z00_1302);
															((((BgL_huftz00_bglt) CREF(BgL_auxz00_6112))->
																	BgL_bz00) =
																((long) BgL_arg2057z00_2959), BUNSPEC);
													}}
													{	/* Unsafe/gunzip.scm 499 */
														obj_t BgL_arg2058z00_2960;

														BgL_arg2058z00_2960 =
															(((BgL_huftz00_bglt) CREF(BgL_rz00_4477))->
															BgL_vz00);
														{
															BgL_huftz00_bglt BgL_auxz00_6116;

															BgL_auxz00_6116 =
																(BgL_huftz00_bglt) (BgL_arg2213z00_1302);
															((((BgL_huftz00_bglt) CREF(BgL_auxz00_6116))->
																	BgL_vz00) =
																((obj_t) BgL_arg2058z00_2960), BUNSPEC);
						}}}}}}}}
						{

							goto BGl_kwlzd2loopzd2zz__gunza7ipza7;
						}
					}
				else
					{	/* Unsafe/gunzip.scm 455 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* loop_2975 */
	bool_t BGl_loop_2975z00zz__gunza7ipza7(obj_t BgL_za7za7_4489,
		obj_t BgL_cz00_4488, obj_t BgL_fz00_4487, obj_t BgL_jz00_4486,
		long BgL_czd2poszd2_1287)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 466 */
		BGl_loop_2975z00zz__gunza7ipza7:
			{	/* Unsafe/gunzip.scm 467 */
				obj_t BgL_auxz00_4490;

				{	/* Unsafe/gunzip.scm 467 */
					long BgL_za71za7_2894;

					BgL_za71za7_2894 = (long) CINT(CELL_REF(BgL_jz00_4486));
					BgL_auxz00_4490 = BINT((BgL_za71za7_2894 + ((long) 1)));
				}
				CELL_SET(BgL_jz00_4486, BgL_auxz00_4490);
			}
			{	/* Unsafe/gunzip.scm 468 */
				bool_t BgL_testz00_6122;

				{	/* Unsafe/gunzip.scm 468 */
					long BgL_n1z00_2896;

					long BgL_n2z00_2897;

					BgL_n1z00_2896 = (long) CINT(CELL_REF(BgL_jz00_4486));
					BgL_n2z00_2897 = (long) CINT(CELL_REF(BgL_za7za7_4489));
					BgL_testz00_6122 = (BgL_n1z00_2896 < BgL_n2z00_2897);
				}
				if (BgL_testz00_6122)
					{	/* Unsafe/gunzip.scm 468 */
						{	/* Unsafe/gunzip.scm 469 */
							obj_t BgL_auxz00_4491;

							{	/* Unsafe/gunzip.scm 469 */
								long BgL_za71za7_2898;

								BgL_za71za7_2898 = (long) CINT(CELL_REF(BgL_fz00_4487));
								BgL_auxz00_4491 = BINT((BgL_za71za7_2898 * ((long) 2)));
							}
							CELL_SET(BgL_fz00_4487, BgL_auxz00_4491);
						}
						{	/* Unsafe/gunzip.scm 470 */
							long BgL_czd2poszd2_1290;

							BgL_czd2poszd2_1290 = (BgL_czd2poszd2_1287 + ((long) 1));
							{	/* Unsafe/gunzip.scm 470 */
								obj_t BgL_cvz00_1291;

								{	/* Unsafe/gunzip.scm 471 */
									obj_t BgL_vectorz00_2902;

									int BgL_kz00_2903;

									BgL_vectorz00_2902 = CELL_REF(BgL_cz00_4488);
									BgL_kz00_2903 = (int) (BgL_czd2poszd2_1290);
									BgL_cvz00_1291 =
										VECTOR_REF(BgL_vectorz00_2902, BgL_kz00_2903);
								}
								{	/* Unsafe/gunzip.scm 471 */

									{	/* Unsafe/gunzip.scm 472 */
										bool_t BgL_testz00_6132;

										{	/* Unsafe/gunzip.scm 472 */
											long BgL_n1z00_2904;

											long BgL_n2z00_2905;

											BgL_n1z00_2904 = (long) CINT(CELL_REF(BgL_fz00_4487));
											BgL_n2z00_2905 = (long) CINT(BgL_cvz00_1291);
											BgL_testz00_6132 = (BgL_n1z00_2904 <= BgL_n2z00_2905);
										}
										if (BgL_testz00_6132)
											{	/* Unsafe/gunzip.scm 472 */
												return ((bool_t) 0);
											}
										else
											{	/* Unsafe/gunzip.scm 472 */
												{	/* Unsafe/gunzip.scm 473 */
													obj_t BgL_auxz00_4492;

													{	/* Unsafe/gunzip.scm 473 */
														long BgL_za71za7_2906;

														long BgL_za72za7_2907;

														BgL_za71za7_2906 =
															(long) CINT(CELL_REF(BgL_fz00_4487));
														BgL_za72za7_2907 = (long) CINT(BgL_cvz00_1291);
														BgL_auxz00_4492 =
															BINT((BgL_za71za7_2906 - BgL_za72za7_2907));
													}
													CELL_SET(BgL_fz00_4487, BgL_auxz00_4492);
												}
												{
													long BgL_czd2poszd2_6140;

													BgL_czd2poszd2_6140 = BgL_czd2poszd2_1290;
													BgL_czd2poszd2_1287 = BgL_czd2poszd2_6140;
													goto BGl_loop_2975z00zz__gunza7ipza7;
												}
											}
									}
								}
							}
						}
					}
				else
					{	/* Unsafe/gunzip.scm 468 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* set-lit */
	bool_t BGl_setzd2litzd2zz__gunza7ipza7(obj_t BgL_iz00_4496,
		obj_t BgL_inputzd2portzd2_4495, long BgL_nz00_4494, obj_t BgL_llz00_4493,
		long BgL_jz00_1679, obj_t BgL_lz00_1680)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 776 */
			{	/* Unsafe/gunzip.scm 777 */
				bool_t BgL_testz00_6141;

				{	/* Unsafe/gunzip.scm 777 */
					long BgL_auxz00_6142;

					{	/* Unsafe/gunzip.scm 777 */
						long BgL_za71za7_3461;

						BgL_za71za7_3461 = (long) CINT(CELL_REF(BgL_iz00_4496));
						BgL_auxz00_6142 = (BgL_za71za7_3461 + BgL_jz00_1679);
					}
					BgL_testz00_6141 = (BgL_auxz00_6142 > BgL_nz00_4494);
				}
				if (BgL_testz00_6141)
					{	/* Unsafe/gunzip.scm 778 */
						obj_t BgL_arg2452z00_1684;

						{	/* Unsafe/gunzip.scm 780 */
							obj_t BgL_list2453z00_1685;

							BgL_list2453z00_1685 = MAKE_PAIR(BINT(BgL_nz00_4494), BNIL);
							BgL_arg2452z00_1684 =
								BGl_formatz00zz__r4_output_6_10_3z00
								(BGl_string3080z00zz__gunza7ipza7, BgL_list2453z00_1685);
						}
						{	/* Unsafe/gunzip.scm 778 */
							BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2072z00_3468;

							{	/* Unsafe/gunzip.scm 778 */
								obj_t BgL_arg2073z00_3469;

								{	/* Unsafe/gunzip.scm 778 */

									{	/* Unsafe/gunzip.scm 778 */

										BgL_arg2073z00_3469 =
											BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
									}
								}
								BgL_arg2072z00_3468 =
									BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(BFALSE,
									BFALSE, BgL_arg2073z00_3469, BGl_string3053z00zz__gunza7ipza7,
									BgL_arg2452z00_1684, BgL_inputzd2portzd2_4495);
							}
							BGl_raisez00zz__errorz00((obj_t) (BgL_arg2072z00_3468));
						}
					}
				else
					{	/* Unsafe/gunzip.scm 777 */
						BFALSE;
					}
			}
			return
				BGl_loop_2976z00zz__gunza7ipza7(BgL_lz00_1680, BgL_iz00_4496,
				BgL_llz00_4493, BgL_jz00_1679);
		}
	}



/* loop_2976 */
	bool_t BGl_loop_2976z00zz__gunza7ipza7(obj_t BgL_lz00_4499,
		obj_t BgL_iz00_4498, obj_t BgL_llz00_4497, long BgL_jz00_1688)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 782 */
		BGl_loop_2976z00zz__gunza7ipza7:
			if ((BgL_jz00_1688 == ((long) 0)))
				{	/* Unsafe/gunzip.scm 783 */
					return ((bool_t) 0);
				}
			else
				{	/* Unsafe/gunzip.scm 783 */
					{	/* Unsafe/gunzip.scm 784 */
						obj_t BgL_vectorz00_3473;

						int BgL_kz00_3474;

						BgL_vectorz00_3473 = CELL_REF(BgL_llz00_4497);
						BgL_kz00_3474 = CINT(CELL_REF(BgL_iz00_4498));
						VECTOR_SET(BgL_vectorz00_3473, BgL_kz00_3474, BgL_lz00_4499);
					}
					{	/* Unsafe/gunzip.scm 785 */
						obj_t BgL_auxz00_4500;

						{	/* Unsafe/gunzip.scm 785 */
							long BgL_za71za7_3476;

							BgL_za71za7_3476 = (long) CINT(CELL_REF(BgL_iz00_4498));
							BgL_auxz00_4500 = BINT((BgL_za71za7_3476 + ((long) 1)));
						}
						CELL_SET(BgL_iz00_4498, BgL_auxz00_4500);
					}
					{	/* Unsafe/gunzip.scm 786 */
						long BgL_arg2457z00_1691;

						BgL_arg2457z00_1691 = (BgL_jz00_1688 - ((long) 1));
						{
							long BgL_jz00_6162;

							BgL_jz00_6162 = BgL_arg2457z00_1691;
							BgL_jz00_1688 = BgL_jz00_6162;
							goto BGl_loop_2976z00zz__gunza7ipza7;
						}
					}
				}
		}
	}



/* loop-inflate */
	obj_t BGl_loopzd2inflatezd2zz__gunza7ipza7(obj_t BgL_slidez00_4516,
		obj_t BgL_dz00_4515, obj_t BgL_wsiza7eza7_4514, obj_t BgL_wpz00_4513,
		obj_t BgL_tdz00_4512, obj_t BgL_mdz00_4511, obj_t BgL_bdz00_4510,
		obj_t BgL_nz00_4509, obj_t BgL_bkz00_4508, obj_t BgL_ez00_4507,
		obj_t BgL_tz00_4506, obj_t BgL_tlz00_4505, obj_t BgL_mlz00_4504,
		obj_t BgL_bbz00_4503, obj_t BgL_blz00_4502, obj_t BgL_inputzd2portzd2_4501,
		obj_t BgL_retz00_1486)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 673 */
		BGl_loopzd2inflatezd2zz__gunza7ipza7:
			if (((long) CINT(BgL_retz00_1486) > ((long) 0)))
				{	/* Unsafe/gunzip.scm 630 */
					obj_t BgL_val0_1961z00_1489;

					BgL_val0_1961z00_1489 = BGl_symbol3049z00zz__gunza7ipza7;
					{	/* Unsafe/gunzip.scm 630 */
						obj_t BgL_zc3anonymousza32340ze3z83_4264;

						BgL_zc3anonymousza32340ze3z83_4264 =
							make_fx_procedure(BGl_zc3anonymousza32340ze3z83zz__gunza7ipza7,
							(int) (((long) 0)), (int) (((long) 16)));
						PROCEDURE_SET(BgL_zc3anonymousza32340ze3z83_4264,
							(int) (((long) 0)), BgL_inputzd2portzd2_4501);
						PROCEDURE_SET(BgL_zc3anonymousza32340ze3z83_4264,
							(int) (((long) 1)), BgL_blz00_4502);
						PROCEDURE_SET(BgL_zc3anonymousza32340ze3z83_4264,
							(int) (((long) 2)), BgL_bbz00_4503);
						PROCEDURE_SET(BgL_zc3anonymousza32340ze3z83_4264,
							(int) (((long) 3)), BgL_mlz00_4504);
						PROCEDURE_SET(BgL_zc3anonymousza32340ze3z83_4264,
							(int) (((long) 4)), BgL_tlz00_4505);
						PROCEDURE_SET(BgL_zc3anonymousza32340ze3z83_4264,
							(int) (((long) 5)), BgL_tz00_4506);
						PROCEDURE_SET(BgL_zc3anonymousza32340ze3z83_4264,
							(int) (((long) 6)), BgL_ez00_4507);
						PROCEDURE_SET(BgL_zc3anonymousza32340ze3z83_4264,
							(int) (((long) 7)), BgL_bkz00_4508);
						PROCEDURE_SET(BgL_zc3anonymousza32340ze3z83_4264,
							(int) (((long) 8)), BgL_nz00_4509);
						PROCEDURE_SET(BgL_zc3anonymousza32340ze3z83_4264,
							(int) (((long) 9)), BgL_bdz00_4510);
						PROCEDURE_SET(BgL_zc3anonymousza32340ze3z83_4264,
							(int) (((long) 10)), BgL_mdz00_4511);
						PROCEDURE_SET(BgL_zc3anonymousza32340ze3z83_4264,
							(int) (((long) 11)), BgL_tdz00_4512);
						PROCEDURE_SET(BgL_zc3anonymousza32340ze3z83_4264,
							(int) (((long) 12)), BgL_wpz00_4513);
						PROCEDURE_SET(BgL_zc3anonymousza32340ze3z83_4264,
							(int) (((long) 13)), BgL_wsiza7eza7_4514);
						PROCEDURE_SET(BgL_zc3anonymousza32340ze3z83_4264,
							(int) (((long) 14)), BgL_dz00_4515);
						PROCEDURE_SET(BgL_zc3anonymousza32340ze3z83_4264,
							(int) (((long) 15)), BgL_slidez00_4516);
						{	/* Unsafe/gunzip.scm 630 */
							int BgL_auxz00_6201;

							BgL_auxz00_6201 = (int) (((long) 3));
							BGL_MVALUES_NUMBER_SET(BgL_auxz00_6201);
						}
						{	/* Unsafe/gunzip.scm 630 */
							int BgL_auxz00_6204;

							BgL_auxz00_6204 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_auxz00_6204, BgL_retz00_1486);
						}
						{	/* Unsafe/gunzip.scm 630 */
							int BgL_auxz00_6207;

							BgL_auxz00_6207 = (int) (((long) 2));
							BGL_MVALUES_VAL_SET(BgL_auxz00_6207,
								BgL_zc3anonymousza32340ze3z83_4264);
						}
						return BgL_val0_1961z00_1489;
					}
				}
			else
				{	/* Unsafe/gunzip.scm 629 */
					BGl_NEEDBITSz00zz__gunza7ipza7(BgL_bbz00_4503, BgL_bkz00_4508,
						BgL_inputzd2portzd2_4501, BgL_blz00_4502);
					{	/* Unsafe/gunzip.scm 633 */
						obj_t BgL_auxz00_4517;

						{	/* Unsafe/gunzip.scm 633 */
							long BgL_arg2341z00_1494;

							{	/* Unsafe/gunzip.scm 633 */
								long BgL_xz00_3180;

								long BgL_yz00_3181;

								BgL_xz00_3180 = (long) CINT(CELL_REF(BgL_bbz00_4503));
								BgL_yz00_3181 = (long) CINT(BgL_mlz00_4504);
								BgL_arg2341z00_1494 = (BgL_xz00_3180 & BgL_yz00_3181);
							}
							BgL_auxz00_4517 =
								VECTOR_REF(BgL_tlz00_4505, (int) (BgL_arg2341z00_1494));
						}
						CELL_SET(BgL_tz00_4506, BgL_auxz00_4517);
					}
					{	/* Unsafe/gunzip.scm 634 */
						obj_t BgL_auxz00_4518;

						{	/* Unsafe/gunzip.scm 634 */
							BgL_huftz00_bglt BgL_obj1824z00_3184;

							BgL_obj1824z00_3184 =
								(BgL_huftz00_bglt) (CELL_REF(BgL_tz00_4506));
							BgL_auxz00_4518 =
								BINT(
								(((BgL_huftz00_bglt) CREF(BgL_obj1824z00_3184))->BgL_ez00));
						}
						CELL_SET(BgL_ez00_4507, BgL_auxz00_4518);
					}
					{	/* Unsafe/gunzip.scm 635 */
						bool_t BgL_testz00_6219;

						{	/* Unsafe/gunzip.scm 635 */
							long BgL_n1z00_3185;

							BgL_n1z00_3185 = (long) CINT(CELL_REF(BgL_ez00_4507));
							BgL_testz00_6219 = (BgL_n1z00_3185 > ((long) 16));
						}
						if (BgL_testz00_6219)
							{	/* Unsafe/gunzip.scm 635 */
								BGl_loop_2977z00zz__gunza7ipza7(BgL_bkz00_4508, BgL_bbz00_4503,
									BgL_tz00_4506, BgL_inputzd2portzd2_4501, BgL_ez00_4507);
							}
						else
							{	/* Unsafe/gunzip.scm 635 */
								((bool_t) 0);
							}
					}
					{	/* Unsafe/gunzip.scm 636 */
						long BgL_arg2343z00_1496;

						{	/* Unsafe/gunzip.scm 636 */
							BgL_huftz00_bglt BgL_obj1827z00_3187;

							BgL_obj1827z00_3187 =
								(BgL_huftz00_bglt) (CELL_REF(BgL_tz00_4506));
							BgL_arg2343z00_1496 =
								(((BgL_huftz00_bglt) CREF(BgL_obj1827z00_3187))->BgL_bz00);
						}
						{	/* Unsafe/gunzip.scm 636 */
							obj_t BgL_auxz00_4519;

							{	/* Unsafe/gunzip.scm 636 */
								long BgL_xz00_3189;

								BgL_xz00_3189 = (long) CINT(CELL_REF(BgL_bbz00_4503));
								BgL_auxz00_4519 =
									BINT((BgL_xz00_3189 >> (int) (BgL_arg2343z00_1496)));
							}
							CELL_SET(BgL_bbz00_4503, BgL_auxz00_4519);
						}
						{	/* Unsafe/gunzip.scm 636 */
							obj_t BgL_auxz00_4520;

							{	/* Unsafe/gunzip.scm 636 */
								long BgL_za71za7_3191;

								BgL_za71za7_3191 = (long) CINT(CELL_REF(BgL_bkz00_4508));
								BgL_auxz00_4520 =
									BINT((BgL_za71za7_3191 - BgL_arg2343z00_1496));
							}
							CELL_SET(BgL_bkz00_4508, BgL_auxz00_4520);
					}}
					{	/* Unsafe/gunzip.scm 637 */
						bool_t BgL_testz00_6232;

						{	/* Unsafe/gunzip.scm 637 */
							long BgL_n1z00_3193;

							BgL_n1z00_3193 = (long) CINT(CELL_REF(BgL_ez00_4507));
							BgL_testz00_6232 = (BgL_n1z00_3193 == ((long) 16));
						}
						if (BgL_testz00_6232)
							{	/* Unsafe/gunzip.scm 637 */
								{	/* Unsafe/gunzip.scm 640 */
									unsigned char BgL_arg2345z00_1498;

									{	/* Unsafe/gunzip.scm 640 */
										long BgL_intz00_3196;

										{	/* Unsafe/gunzip.scm 640 */
											BgL_huftz00_bglt BgL_obj1830z00_3195;

											BgL_obj1830z00_3195 =
												(BgL_huftz00_bglt) (CELL_REF(BgL_tz00_4506));
											BgL_intz00_3196 =
												(long) CINT(
												(((BgL_huftz00_bglt) CREF(BgL_obj1830z00_3195))->
													BgL_vz00));
										}
										BgL_arg2345z00_1498 = (BgL_intz00_3196);
									}
									{	/* Unsafe/gunzip.scm 640 */
										obj_t BgL_stringz00_3197;

										long BgL_kz00_3198;

										BgL_stringz00_3197 = BgL_slidez00_4516;
										BgL_kz00_3198 = (long) CINT(CELL_REF(BgL_wpz00_4513));
										STRING_SET(BgL_stringz00_3197, BgL_kz00_3198,
											BgL_arg2345z00_1498);
								}}
								{	/* Unsafe/gunzip.scm 641 */
									obj_t BgL_auxz00_4521;

									{	/* Unsafe/gunzip.scm 641 */
										long BgL_za71za7_3200;

										BgL_za71za7_3200 = (long) CINT(CELL_REF(BgL_wpz00_4513));
										BgL_auxz00_4521 = BINT((BgL_za71za7_3200 + ((long) 1)));
									}
									CELL_SET(BgL_wpz00_4513, BgL_auxz00_4521);
								}
								{	/* Unsafe/gunzip.scm 642 */
									obj_t BgL_arg2347z00_1500;

									BgL_arg2347z00_1500 =
										BGl_checkzd2flushzd2zz__gunza7ipza7(BgL_wsiza7eza7_4514,
										BgL_wpz00_4513);
									{
										obj_t BgL_retz00_6245;

										BgL_retz00_6245 = BgL_arg2347z00_1500;
										BgL_retz00_1486 = BgL_retz00_6245;
										goto BGl_loopzd2inflatezd2zz__gunza7ipza7;
									}
								}
							}
						else
							{	/* Unsafe/gunzip.scm 645 */
								bool_t BgL_testz00_6246;

								{	/* Unsafe/gunzip.scm 645 */
									long BgL_n1z00_3202;

									BgL_n1z00_3202 = (long) CINT(CELL_REF(BgL_ez00_4507));
									BgL_testz00_6246 = (BgL_n1z00_3202 == ((long) 15));
								}
								if (BgL_testz00_6246)
									{	/* Unsafe/gunzip.scm 646 */
										obj_t BgL_val0_1964z00_1502;

										BgL_val0_1964z00_1502 = BGl_symbol3045z00zz__gunza7ipza7;
										{	/* Unsafe/gunzip.scm 646 */
											int BgL_auxz00_6249;

											BgL_auxz00_6249 = (int) (((long) 3));
											BGL_MVALUES_NUMBER_SET(BgL_auxz00_6249);
										}
										{	/* Unsafe/gunzip.scm 646 */
											int BgL_auxz00_6252;

											BgL_auxz00_6252 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_auxz00_6252, BTRUE);
										}
										{	/* Unsafe/gunzip.scm 646 */
											int BgL_auxz00_6255;

											BgL_auxz00_6255 = (int) (((long) 2));
											BGL_MVALUES_VAL_SET(BgL_auxz00_6255, BFALSE);
										}
										return BgL_val0_1964z00_1502;
									}
								else
									{	/* Unsafe/gunzip.scm 645 */
										BGl_NEEDBITSz00zz__gunza7ipza7(BgL_bbz00_4503,
											BgL_bkz00_4508, BgL_inputzd2portzd2_4501,
											CELL_REF(BgL_ez00_4507));
										{	/* Unsafe/gunzip.scm 650 */
											obj_t BgL_auxz00_4522;

											{	/* Unsafe/gunzip.scm 650 */
												obj_t BgL_arg2349z00_1505;

												long BgL_arg2350z00_1506;

												{	/* Unsafe/gunzip.scm 650 */
													BgL_huftz00_bglt BgL_obj1830z00_3209;

													BgL_obj1830z00_3209 =
														(BgL_huftz00_bglt) (CELL_REF(BgL_tz00_4506));
													BgL_arg2349z00_1505 =
														(((BgL_huftz00_bglt) CREF(BgL_obj1830z00_3209))->
														BgL_vz00);
												}
												{	/* Unsafe/gunzip.scm 652 */
													long BgL_arg2351z00_1507;

													{	/* Unsafe/gunzip.scm 652 */
														obj_t BgL_arg2352z00_1508;

														BgL_arg2352z00_1508 =
															BGl_vector3067z00zz__gunza7ipza7;
														{	/* Unsafe/gunzip.scm 652 */
															int BgL_kz00_3212;

															BgL_kz00_3212 = CINT(CELL_REF(BgL_ez00_4507));
															BgL_arg2351z00_1507 =
																(long) CINT(VECTOR_REF(BgL_arg2352z00_1508,
																	BgL_kz00_3212));
													}}
													{	/* Unsafe/gunzip.scm 651 */
														long BgL_xz00_3213;

														BgL_xz00_3213 =
															(long) CINT(CELL_REF(BgL_bbz00_4503));
														BgL_arg2350z00_1506 =
															(BgL_xz00_3213 & BgL_arg2351z00_1507);
												}}
												BgL_auxz00_4522 =
													BINT(
													((long) CINT(BgL_arg2349z00_1505) +
														BgL_arg2350z00_1506));
											}
											CELL_SET(BgL_nz00_4509, BgL_auxz00_4522);
										}
										{	/* Unsafe/gunzip.scm 653 */
											obj_t BgL_nz00_3217;

											BgL_nz00_3217 = CELL_REF(BgL_ez00_4507);
											{	/* Unsafe/gunzip.scm 653 */
												obj_t BgL_auxz00_4523;

												{	/* Unsafe/gunzip.scm 653 */
													long BgL_xz00_3218;

													long BgL_yz00_3219;

													BgL_xz00_3218 = (long) CINT(CELL_REF(BgL_bbz00_4503));
													BgL_yz00_3219 = (long) CINT(BgL_nz00_3217);
													BgL_auxz00_4523 =
														BINT((BgL_xz00_3218 >> (int) (BgL_yz00_3219)));
												}
												CELL_SET(BgL_bbz00_4503, BgL_auxz00_4523);
											}
											{	/* Unsafe/gunzip.scm 653 */
												obj_t BgL_auxz00_4524;

												{	/* Unsafe/gunzip.scm 653 */
													long BgL_za71za7_3220;

													long BgL_za72za7_3221;

													BgL_za71za7_3220 =
														(long) CINT(CELL_REF(BgL_bkz00_4508));
													BgL_za72za7_3221 = (long) CINT(BgL_nz00_3217);
													BgL_auxz00_4524 =
														BINT((BgL_za71za7_3220 - BgL_za72za7_3221));
												}
												CELL_SET(BgL_bkz00_4508, BgL_auxz00_4524);
										}}
										BGl_NEEDBITSz00zz__gunza7ipza7(BgL_bbz00_4503,
											BgL_bkz00_4508, BgL_inputzd2portzd2_4501, BgL_bdz00_4510);
										{	/* Unsafe/gunzip.scm 657 */
											obj_t BgL_auxz00_4525;

											{	/* Unsafe/gunzip.scm 657 */
												long BgL_arg2353z00_1509;

												{	/* Unsafe/gunzip.scm 657 */
													long BgL_xz00_3222;

													long BgL_yz00_3223;

													BgL_xz00_3222 = (long) CINT(CELL_REF(BgL_bbz00_4503));
													BgL_yz00_3223 = (long) CINT(BgL_mdz00_4511);
													BgL_arg2353z00_1509 = (BgL_xz00_3222 & BgL_yz00_3223);
												}
												BgL_auxz00_4525 =
													VECTOR_REF(BgL_tdz00_4512,
													(int) (BgL_arg2353z00_1509));
											}
											CELL_SET(BgL_tz00_4506, BgL_auxz00_4525);
										}
										{	/* Unsafe/gunzip.scm 658 */
											obj_t BgL_auxz00_4526;

											{	/* Unsafe/gunzip.scm 658 */
												BgL_huftz00_bglt BgL_obj1824z00_3226;

												BgL_obj1824z00_3226 =
													(BgL_huftz00_bglt) (CELL_REF(BgL_tz00_4506));
												BgL_auxz00_4526 =
													BINT(
													(((BgL_huftz00_bglt) CREF(BgL_obj1824z00_3226))->
														BgL_ez00));
											}
											CELL_SET(BgL_ez00_4507, BgL_auxz00_4526);
										}
										{	/* Unsafe/gunzip.scm 659 */
											bool_t BgL_testz00_6287;

											{	/* Unsafe/gunzip.scm 659 */
												long BgL_n1z00_3227;

												BgL_n1z00_3227 = (long) CINT(CELL_REF(BgL_ez00_4507));
												BgL_testz00_6287 = (BgL_n1z00_3227 > ((long) 16));
											}
											if (BgL_testz00_6287)
												{	/* Unsafe/gunzip.scm 659 */
													BGl_loop_2977z00zz__gunza7ipza7(BgL_bkz00_4508,
														BgL_bbz00_4503, BgL_tz00_4506,
														BgL_inputzd2portzd2_4501, BgL_ez00_4507);
												}
											else
												{	/* Unsafe/gunzip.scm 659 */
													((bool_t) 0);
												}
										}
										{	/* Unsafe/gunzip.scm 660 */
											long BgL_arg2355z00_1511;

											{	/* Unsafe/gunzip.scm 660 */
												BgL_huftz00_bglt BgL_obj1827z00_3229;

												BgL_obj1827z00_3229 =
													(BgL_huftz00_bglt) (CELL_REF(BgL_tz00_4506));
												BgL_arg2355z00_1511 =
													(((BgL_huftz00_bglt) CREF(BgL_obj1827z00_3229))->
													BgL_bz00);
											}
											{	/* Unsafe/gunzip.scm 660 */
												obj_t BgL_auxz00_4527;

												{	/* Unsafe/gunzip.scm 660 */
													long BgL_xz00_3231;

													BgL_xz00_3231 = (long) CINT(CELL_REF(BgL_bbz00_4503));
													BgL_auxz00_4527 =
														BINT(
														(BgL_xz00_3231 >> (int) (BgL_arg2355z00_1511)));
												}
												CELL_SET(BgL_bbz00_4503, BgL_auxz00_4527);
											}
											{	/* Unsafe/gunzip.scm 660 */
												obj_t BgL_auxz00_4528;

												{	/* Unsafe/gunzip.scm 660 */
													long BgL_za71za7_3233;

													BgL_za71za7_3233 =
														(long) CINT(CELL_REF(BgL_bkz00_4508));
													BgL_auxz00_4528 =
														BINT((BgL_za71za7_3233 - BgL_arg2355z00_1511));
												}
												CELL_SET(BgL_bkz00_4508, BgL_auxz00_4528);
										}}
										BGl_NEEDBITSz00zz__gunza7ipza7(BgL_bbz00_4503,
											BgL_bkz00_4508, BgL_inputzd2portzd2_4501,
											CELL_REF(BgL_ez00_4507));
										{	/* Unsafe/gunzip.scm 663 */
											obj_t BgL_auxz00_4529;

											{	/* Unsafe/gunzip.scm 665 */
												long BgL_arg2356z00_1512;

												{	/* Unsafe/gunzip.scm 665 */
													long BgL_arg2357z00_1513;

													{	/* Unsafe/gunzip.scm 665 */
														obj_t BgL_arg2358z00_1514;

														long BgL_arg2359z00_1515;

														{	/* Unsafe/gunzip.scm 665 */
															BgL_huftz00_bglt BgL_obj1830z00_3235;

															BgL_obj1830z00_3235 =
																(BgL_huftz00_bglt) (CELL_REF(BgL_tz00_4506));
															BgL_arg2358z00_1514 =
																(((BgL_huftz00_bglt)
																	CREF(BgL_obj1830z00_3235))->BgL_vz00);
														}
														{	/* Unsafe/gunzip.scm 668 */
															long BgL_arg2360z00_1516;

															{	/* Unsafe/gunzip.scm 668 */
																obj_t BgL_arg2361z00_1517;

																BgL_arg2361z00_1517 =
																	BGl_vector3067z00zz__gunza7ipza7;
																{	/* Unsafe/gunzip.scm 668 */
																	int BgL_kz00_3238;

																	BgL_kz00_3238 = CINT(CELL_REF(BgL_ez00_4507));
																	BgL_arg2360z00_1516 =
																		(long) CINT(VECTOR_REF(BgL_arg2361z00_1517,
																			BgL_kz00_3238));
															}}
															{	/* Unsafe/gunzip.scm 666 */
																long BgL_xz00_3239;

																BgL_xz00_3239 =
																	(long) CINT(CELL_REF(BgL_bbz00_4503));
																BgL_arg2359z00_1515 =
																	(BgL_xz00_3239 & BgL_arg2360z00_1516);
														}}
														BgL_arg2357z00_1513 =
															(
															(long) CINT(BgL_arg2358z00_1514) +
															BgL_arg2359z00_1515);
													}
													{	/* Unsafe/gunzip.scm 664 */
														long BgL_za71za7_3243;

														BgL_za71za7_3243 =
															(long) CINT(CELL_REF(BgL_wpz00_4513));
														BgL_arg2356z00_1512 =
															(BgL_za71za7_3243 - BgL_arg2357z00_1513);
												}}
												BgL_auxz00_4529 =
													BINT(BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00
													(BgL_arg2356z00_1512,
														(long) CINT(CELL_REF(BgL_wsiza7eza7_4514))));
											}
											CELL_SET(BgL_dz00_4515, BgL_auxz00_4529);
										}
										{	/* Unsafe/gunzip.scm 670 */
											obj_t BgL_nz00_3245;

											BgL_nz00_3245 = CELL_REF(BgL_ez00_4507);
											{	/* Unsafe/gunzip.scm 670 */
												obj_t BgL_auxz00_4530;

												{	/* Unsafe/gunzip.scm 670 */
													long BgL_xz00_3246;

													long BgL_yz00_3247;

													BgL_xz00_3246 = (long) CINT(CELL_REF(BgL_bbz00_4503));
													BgL_yz00_3247 = (long) CINT(BgL_nz00_3245);
													BgL_auxz00_4530 =
														BINT((BgL_xz00_3246 >> (int) (BgL_yz00_3247)));
												}
												CELL_SET(BgL_bbz00_4503, BgL_auxz00_4530);
											}
											{	/* Unsafe/gunzip.scm 670 */
												obj_t BgL_auxz00_4531;

												{	/* Unsafe/gunzip.scm 670 */
													long BgL_za71za7_3248;

													long BgL_za72za7_3249;

													BgL_za71za7_3248 =
														(long) CINT(CELL_REF(BgL_bkz00_4508));
													BgL_za72za7_3249 = (long) CINT(BgL_nz00_3245);
													BgL_auxz00_4531 =
														BINT((BgL_za71za7_3248 - BgL_za72za7_3249));
												}
												CELL_SET(BgL_bkz00_4508, BgL_auxz00_4531);
										}}
										return
											BGl_dozd2copyzd2zz__gunza7ipza7(BgL_ez00_4507,
											BgL_wpz00_4513, BgL_nz00_4509, BgL_dz00_4515,
											BgL_wsiza7eza7_4514, BgL_slidez00_4516, BgL_tdz00_4512,
											BgL_mdz00_4511, BgL_bdz00_4510, BgL_bkz00_4508,
											BgL_tz00_4506, BgL_tlz00_4505, BgL_mlz00_4504,
											BgL_bbz00_4503, BgL_blz00_4502, BgL_inputzd2portzd2_4501);
									}
							}
					}
				}
		}
	}



/* check-flush */
	obj_t BGl_checkzd2flushzd2zz__gunza7ipza7(obj_t BgL_wsiza7eza7_4533,
		obj_t BgL_wpz00_4532)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 352 */
			{	/* Unsafe/gunzip.scm 348 */
				bool_t BgL_testz00_6325;

				{	/* Unsafe/gunzip.scm 348 */
					long BgL_n1z00_2637;

					long BgL_n2z00_2638;

					BgL_n1z00_2637 = (long) CINT(CELL_REF(BgL_wpz00_4532));
					BgL_n2z00_2638 = (long) CINT(CELL_REF(BgL_wsiza7eza7_4533));
					BgL_testz00_6325 = (BgL_n1z00_2637 == BgL_n2z00_2638);
				}
				if (BgL_testz00_6325)
					{	/* Unsafe/gunzip.scm 348 */
						{	/* Unsafe/gunzip.scm 350 */
							obj_t BgL_auxz00_4534;

							BgL_auxz00_4534 = BINT(((long) 0));
							CELL_SET(BgL_wpz00_4532, BgL_auxz00_4534);
						}
						return CELL_REF(BgL_wsiza7eza7_4533);
					}
				else
					{	/* Unsafe/gunzip.scm 348 */
						return BINT(((long) 0));
		}}}
	}



/* do-copy */
	obj_t BGl_dozd2copyzd2zz__gunza7ipza7(obj_t BgL_ez00_4550,
		obj_t BgL_wpz00_4549, obj_t BgL_nz00_4548, obj_t BgL_dz00_4547,
		obj_t BgL_wsiza7eza7_4546, obj_t BgL_slidez00_4545, obj_t BgL_tdz00_4544,
		obj_t BgL_mdz00_4543, obj_t BgL_bdz00_4542, obj_t BgL_bkz00_4541,
		obj_t BgL_tz00_4540, obj_t BgL_tlz00_4539, obj_t BgL_mlz00_4538,
		obj_t BgL_bbz00_4537, obj_t BgL_blz00_4536, obj_t BgL_inputzd2portzd2_4535)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 583 */
		BGl_dozd2copyzd2zz__gunza7ipza7:
			{	/* Unsafe/gunzip.scm 583 */
				obj_t BgL_auxz00_4551;

				{	/* Unsafe/gunzip.scm 583 */
					long BgL_xz00_3110;

					BgL_xz00_3110 = (long) CINT(CELL_REF(BgL_dz00_4547));
					{	/* Unsafe/gunzip.scm 583 */
						long BgL_auxz00_6332;

						{	/* Unsafe/gunzip.scm 583 */
							long BgL_auxz00_6333;

							{	/* Unsafe/gunzip.scm 583 */
								long BgL_za71za7_3108;

								BgL_za71za7_3108 = (long) CINT(CELL_REF(BgL_wsiza7eza7_4546));
								BgL_auxz00_6333 = (BgL_za71za7_3108 - ((long) 1));
							}
							BgL_auxz00_6332 = (BgL_xz00_3110 & BgL_auxz00_6333);
						}
						BgL_auxz00_4551 = BINT(BgL_auxz00_6332);
				}}
				CELL_SET(BgL_dz00_4547, BgL_auxz00_4551);
			}
			{	/* Unsafe/gunzip.scm 584 */
				obj_t BgL_auxz00_4552;

				{	/* Unsafe/gunzip.scm 584 */
					obj_t BgL_xz00_1444;

					long BgL_yz00_1445;

					BgL_xz00_1444 = CELL_REF(BgL_nz00_4548);
					{	/* Unsafe/gunzip.scm 584 */
						obj_t BgL_arg2319z00_1447;

						{	/* Unsafe/gunzip.scm 584 */
							obj_t BgL_xz00_1448;

							obj_t BgL_yz00_1449;

							BgL_xz00_1448 = CELL_REF(BgL_dz00_4547);
							BgL_yz00_1449 = CELL_REF(BgL_wpz00_4549);
							if (((long) CINT(BgL_xz00_1448) > (long) CINT(BgL_yz00_1449)))
								{	/* Unsafe/gunzip.scm 584 */
									BgL_arg2319z00_1447 = BgL_xz00_1448;
								}
							else
								{	/* Unsafe/gunzip.scm 584 */
									BgL_arg2319z00_1447 = BgL_yz00_1449;
								}
						}
						{	/* Unsafe/gunzip.scm 584 */
							long BgL_za71za7_3114;

							long BgL_za72za7_3115;

							BgL_za71za7_3114 = (long) CINT(CELL_REF(BgL_wsiza7eza7_4546));
							BgL_za72za7_3115 = (long) CINT(BgL_arg2319z00_1447);
							BgL_yz00_1445 = (BgL_za71za7_3114 - BgL_za72za7_3115);
					}}
					if (((long) CINT(BgL_xz00_1444) < BgL_yz00_1445))
						{	/* Unsafe/gunzip.scm 584 */
							BgL_auxz00_4552 = BgL_xz00_1444;
						}
					else
						{	/* Unsafe/gunzip.scm 584 */
							BgL_auxz00_4552 = BINT(BgL_yz00_1445);
						}
				}
				CELL_SET(BgL_ez00_4550, BgL_auxz00_4552);
			}
			{	/* Unsafe/gunzip.scm 585 */
				obj_t BgL_auxz00_4553;

				{	/* Unsafe/gunzip.scm 585 */
					long BgL_za71za7_3118;

					long BgL_za72za7_3119;

					BgL_za71za7_3118 = (long) CINT(CELL_REF(BgL_nz00_4548));
					BgL_za72za7_3119 = (long) CINT(CELL_REF(BgL_ez00_4550));
					BgL_auxz00_4553 = BINT((BgL_za71za7_3118 - BgL_za72za7_3119));
				}
				CELL_SET(BgL_nz00_4548, BgL_auxz00_4553);
			}
			BGl_liipz00zz__gunza7ipza7(BgL_ez00_4550, BgL_wpz00_4549, BgL_dz00_4547,
				BgL_slidez00_4545);
			{	/* Unsafe/gunzip.scm 593 */
				obj_t BgL_rz00_1456;

				BgL_rz00_1456 =
					BGl_checkzd2flushzd2zz__gunza7ipza7(BgL_wsiza7eza7_4546,
					BgL_wpz00_4549);
				{	/* Unsafe/gunzip.scm 595 */
					bool_t BgL_testz00_6355;

					{	/* Unsafe/gunzip.scm 595 */
						long BgL_n1z00_3133;

						BgL_n1z00_3133 = (long) CINT(CELL_REF(BgL_nz00_4548));
						BgL_testz00_6355 = (BgL_n1z00_3133 == ((long) 0));
					}
					if (BgL_testz00_6355)
						{	/* Unsafe/gunzip.scm 595 */
							return
								BGl_loopzd2inflatezd2zz__gunza7ipza7(BgL_slidez00_4545,
								BgL_dz00_4547, BgL_wsiza7eza7_4546, BgL_wpz00_4549,
								BgL_tdz00_4544, BgL_mdz00_4543, BgL_bdz00_4542, BgL_nz00_4548,
								BgL_bkz00_4541, BgL_ez00_4550, BgL_tz00_4540, BgL_tlz00_4539,
								BgL_mlz00_4538, BgL_bbz00_4537, BgL_blz00_4536,
								BgL_inputzd2portzd2_4535, BgL_rz00_1456);
						}
					else
						{	/* Unsafe/gunzip.scm 595 */
							if (((long) CINT(BgL_rz00_1456) == ((long) 0)))
								{

									goto BGl_dozd2copyzd2zz__gunza7ipza7;
								}
							else
								{	/* Unsafe/gunzip.scm 600 */
									obj_t BgL_val0_1955z00_1459;

									BgL_val0_1955z00_1459 = BGl_symbol3049z00zz__gunza7ipza7;
									{	/* Unsafe/gunzip.scm 600 */
										obj_t BgL_zc3anonymousza32326ze3z83_4259;

										BgL_zc3anonymousza32326ze3z83_4259 =
											make_fx_procedure
											(BGl_zc3anonymousza32326ze3z83zz__gunza7ipza7,
											(int) (((long) 0)), (int) (((long) 16)));
										PROCEDURE_SET(BgL_zc3anonymousza32326ze3z83_4259,
											(int) (((long) 0)), BgL_inputzd2portzd2_4535);
										PROCEDURE_SET(BgL_zc3anonymousza32326ze3z83_4259,
											(int) (((long) 1)), BgL_blz00_4536);
										PROCEDURE_SET(BgL_zc3anonymousza32326ze3z83_4259,
											(int) (((long) 2)), BgL_bbz00_4537);
										PROCEDURE_SET(BgL_zc3anonymousza32326ze3z83_4259,
											(int) (((long) 3)), BgL_mlz00_4538);
										PROCEDURE_SET(BgL_zc3anonymousza32326ze3z83_4259,
											(int) (((long) 4)), BgL_tlz00_4539);
										PROCEDURE_SET(BgL_zc3anonymousza32326ze3z83_4259,
											(int) (((long) 5)), BgL_tz00_4540);
										PROCEDURE_SET(BgL_zc3anonymousza32326ze3z83_4259,
											(int) (((long) 6)), BgL_bkz00_4541);
										PROCEDURE_SET(BgL_zc3anonymousza32326ze3z83_4259,
											(int) (((long) 7)), BgL_bdz00_4542);
										PROCEDURE_SET(BgL_zc3anonymousza32326ze3z83_4259,
											(int) (((long) 8)), BgL_mdz00_4543);
										PROCEDURE_SET(BgL_zc3anonymousza32326ze3z83_4259,
											(int) (((long) 9)), BgL_tdz00_4544);
										PROCEDURE_SET(BgL_zc3anonymousza32326ze3z83_4259,
											(int) (((long) 10)), BgL_wsiza7eza7_4546);
										PROCEDURE_SET(BgL_zc3anonymousza32326ze3z83_4259,
											(int) (((long) 11)), BgL_dz00_4547);
										PROCEDURE_SET(BgL_zc3anonymousza32326ze3z83_4259,
											(int) (((long) 12)), BgL_nz00_4548);
										PROCEDURE_SET(BgL_zc3anonymousza32326ze3z83_4259,
											(int) (((long) 13)), BgL_wpz00_4549);
										PROCEDURE_SET(BgL_zc3anonymousza32326ze3z83_4259,
											(int) (((long) 14)), BgL_ez00_4550);
										PROCEDURE_SET(BgL_zc3anonymousza32326ze3z83_4259,
											(int) (((long) 15)), BgL_slidez00_4545);
										{	/* Unsafe/gunzip.scm 600 */
											int BgL_auxz00_6397;

											BgL_auxz00_6397 = (int) (((long) 3));
											BGL_MVALUES_NUMBER_SET(BgL_auxz00_6397);
										}
										{	/* Unsafe/gunzip.scm 600 */
											int BgL_auxz00_6400;

											BgL_auxz00_6400 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_auxz00_6400, BgL_rz00_1456);
										}
										{	/* Unsafe/gunzip.scm 600 */
											int BgL_auxz00_6403;

											BgL_auxz00_6403 = (int) (((long) 2));
											BGL_MVALUES_VAL_SET(BgL_auxz00_6403,
												BgL_zc3anonymousza32326ze3z83_4259);
										}
										return BgL_val0_1955z00_1459;
									}
								}
						}
				}
			}
		}
	}



/* loop_2977 */
	bool_t BGl_loop_2977z00zz__gunza7ipza7(obj_t BgL_bkz00_4563,
		obj_t BgL_bbz00_4562, obj_t BgL_tz00_4561, obj_t BgL_inputzd2portzd2_4560,
		obj_t BgL_ez00_4559)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 568 */
		BGl_loop_2977z00zz__gunza7ipza7:
			{	/* Unsafe/gunzip.scm 569 */
				bool_t BgL_testz00_6406;

				{	/* Unsafe/gunzip.scm 569 */
					long BgL_n1z00_3081;

					BgL_n1z00_3081 = (long) CINT(CELL_REF(BgL_ez00_4559));
					BgL_testz00_6406 = (BgL_n1z00_3081 == ((long) 99));
				}
				if (BgL_testz00_6406)
					{	/* Unsafe/gunzip.scm 570 */
						obj_t BgL_arg2308z00_1433;

						{	/* Unsafe/gunzip.scm 571 */
							obj_t BgL_list2309z00_1434;

							BgL_list2309z00_1434 = MAKE_PAIR(CELL_REF(BgL_ez00_4559), BNIL);
							BgL_arg2308z00_1433 =
								BGl_formatz00zz__r4_output_6_10_3z00
								(BGl_string3081z00zz__gunza7ipza7, BgL_list2309z00_1434);
						}
						{	/* Unsafe/gunzip.scm 570 */
							BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2072z00_3086;

							{	/* Unsafe/gunzip.scm 570 */
								obj_t BgL_arg2073z00_3087;

								{	/* Unsafe/gunzip.scm 570 */

									{	/* Unsafe/gunzip.scm 570 */

										BgL_arg2073z00_3087 =
											BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
									}
								}
								BgL_arg2072z00_3086 =
									BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(BFALSE,
									BFALSE, BgL_arg2073z00_3087, BGl_string3064z00zz__gunza7ipza7,
									BgL_arg2308z00_1433, BgL_inputzd2portzd2_4560);
							}
							BGl_raisez00zz__errorz00((obj_t) (BgL_arg2072z00_3086));
						}
					}
				else
					{	/* Unsafe/gunzip.scm 569 */
						BFALSE;
					}
			}
			{	/* Unsafe/gunzip.scm 573 */
				long BgL_arg2310z00_1435;

				{	/* Unsafe/gunzip.scm 573 */
					BgL_huftz00_bglt BgL_obj1827z00_3089;

					BgL_obj1827z00_3089 = (BgL_huftz00_bglt) (CELL_REF(BgL_tz00_4561));
					BgL_arg2310z00_1435 =
						(((BgL_huftz00_bglt) CREF(BgL_obj1827z00_3089))->BgL_bz00);
				}
				{	/* Unsafe/gunzip.scm 573 */
					obj_t BgL_auxz00_4564;

					{	/* Unsafe/gunzip.scm 573 */
						long BgL_xz00_3091;

						BgL_xz00_3091 = (long) CINT(CELL_REF(BgL_bbz00_4562));
						BgL_auxz00_4564 =
							BINT((BgL_xz00_3091 >> (int) (BgL_arg2310z00_1435)));
					}
					CELL_SET(BgL_bbz00_4562, BgL_auxz00_4564);
				}
				{	/* Unsafe/gunzip.scm 573 */
					obj_t BgL_auxz00_4565;

					{	/* Unsafe/gunzip.scm 573 */
						long BgL_za71za7_3093;

						BgL_za71za7_3093 = (long) CINT(CELL_REF(BgL_bkz00_4563));
						BgL_auxz00_4565 = BINT((BgL_za71za7_3093 - BgL_arg2310z00_1435));
					}
					CELL_SET(BgL_bkz00_4563, BgL_auxz00_4565);
			}}
			{	/* Unsafe/gunzip.scm 574 */
				obj_t BgL_auxz00_4566;

				{	/* Unsafe/gunzip.scm 574 */
					long BgL_za71za7_3095;

					BgL_za71za7_3095 = (long) CINT(CELL_REF(BgL_ez00_4559));
					BgL_auxz00_4566 = BINT((BgL_za71za7_3095 - ((long) 16)));
				}
				CELL_SET(BgL_ez00_4559, BgL_auxz00_4566);
			}
			BGl_NEEDBITSz00zz__gunza7ipza7(BgL_bbz00_4562, BgL_bkz00_4563,
				BgL_inputzd2portzd2_4560, CELL_REF(BgL_ez00_4559));
			{	/* Unsafe/gunzip.scm 576 */
				obj_t BgL_auxz00_4567;

				{	/* Unsafe/gunzip.scm 577 */
					obj_t BgL_arg2311z00_1436;

					long BgL_arg2312z00_1437;

					{	/* Unsafe/gunzip.scm 577 */
						BgL_huftz00_bglt BgL_obj1830z00_3097;

						BgL_obj1830z00_3097 = (BgL_huftz00_bglt) (CELL_REF(BgL_tz00_4561));
						BgL_arg2311z00_1436 =
							(((BgL_huftz00_bglt) CREF(BgL_obj1830z00_3097))->BgL_vz00);
					}
					{	/* Unsafe/gunzip.scm 577 */
						long BgL_arg2313z00_1438;

						{	/* Unsafe/gunzip.scm 577 */
							obj_t BgL_arg2314z00_1439;

							BgL_arg2314z00_1439 = BGl_vector3067z00zz__gunza7ipza7;
							{	/* Unsafe/gunzip.scm 577 */
								int BgL_kz00_3100;

								BgL_kz00_3100 = CINT(CELL_REF(BgL_ez00_4559));
								BgL_arg2313z00_1438 =
									(long) CINT(VECTOR_REF(BgL_arg2314z00_1439, BgL_kz00_3100));
						}}
						{	/* Unsafe/gunzip.scm 577 */
							long BgL_xz00_3101;

							BgL_xz00_3101 = (long) CINT(CELL_REF(BgL_bbz00_4562));
							BgL_arg2312z00_1437 = (BgL_xz00_3101 & BgL_arg2313z00_1438);
					}}
					BgL_auxz00_4567 =
						VECTOR_REF(BgL_arg2311z00_1436, (int) (BgL_arg2312z00_1437));
				}
				CELL_SET(BgL_tz00_4561, BgL_auxz00_4567);
			}
			{	/* Unsafe/gunzip.scm 578 */
				obj_t BgL_auxz00_4568;

				{	/* Unsafe/gunzip.scm 578 */
					BgL_huftz00_bglt BgL_obj1824z00_3105;

					BgL_obj1824z00_3105 = (BgL_huftz00_bglt) (CELL_REF(BgL_tz00_4561));
					BgL_auxz00_4568 =
						BINT((((BgL_huftz00_bglt) CREF(BgL_obj1824z00_3105))->BgL_ez00));
				}
				CELL_SET(BgL_ez00_4559, BgL_auxz00_4568);
			}
			{	/* Unsafe/gunzip.scm 579 */
				bool_t BgL_testz00_6440;

				{	/* Unsafe/gunzip.scm 579 */
					long BgL_n1z00_3106;

					BgL_n1z00_3106 = (long) CINT(CELL_REF(BgL_ez00_4559));
					BgL_testz00_6440 = (BgL_n1z00_3106 > ((long) 16));
				}
				if (BgL_testz00_6440)
					{

						goto BGl_loop_2977z00zz__gunza7ipza7;
					}
				else
					{	/* Unsafe/gunzip.scm 579 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* liip */
	bool_t BGl_liipz00zz__gunza7ipza7(obj_t BgL_ez00_4572, obj_t BgL_wpz00_4571,
		obj_t BgL_dz00_4570, obj_t BgL_slidez00_4569)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 586 */
		BGl_liipz00zz__gunza7ipza7:
			{	/* Unsafe/gunzip.scm 588 */
				unsigned char BgL_arg2322z00_1453;

				{	/* Unsafe/gunzip.scm 588 */
					obj_t BgL_stringz00_3120;

					long BgL_kz00_3121;

					BgL_stringz00_3120 = BgL_slidez00_4569;
					BgL_kz00_3121 = (long) CINT(CELL_REF(BgL_dz00_4570));
					BgL_arg2322z00_1453 = STRING_REF(BgL_stringz00_3120, BgL_kz00_3121);
				}
				{	/* Unsafe/gunzip.scm 587 */
					obj_t BgL_stringz00_3122;

					long BgL_kz00_3123;

					BgL_stringz00_3122 = BgL_slidez00_4569;
					BgL_kz00_3123 = (long) CINT(CELL_REF(BgL_wpz00_4571));
					STRING_SET(BgL_stringz00_3122, BgL_kz00_3123, BgL_arg2322z00_1453);
			}}
			{	/* Unsafe/gunzip.scm 589 */
				obj_t BgL_auxz00_4573;

				{	/* Unsafe/gunzip.scm 589 */
					long BgL_za71za7_3125;

					BgL_za71za7_3125 = (long) CINT(CELL_REF(BgL_wpz00_4571));
					BgL_auxz00_4573 = BINT((BgL_za71za7_3125 + ((long) 1)));
				}
				CELL_SET(BgL_wpz00_4571, BgL_auxz00_4573);
			}
			{	/* Unsafe/gunzip.scm 590 */
				obj_t BgL_auxz00_4574;

				{	/* Unsafe/gunzip.scm 590 */
					long BgL_za71za7_3127;

					BgL_za71za7_3127 = (long) CINT(CELL_REF(BgL_dz00_4570));
					BgL_auxz00_4574 = BINT((BgL_za71za7_3127 + ((long) 1)));
				}
				CELL_SET(BgL_dz00_4570, BgL_auxz00_4574);
			}
			{	/* Unsafe/gunzip.scm 591 */
				obj_t BgL_auxz00_4575;

				{	/* Unsafe/gunzip.scm 591 */
					long BgL_za71za7_3129;

					BgL_za71za7_3129 = (long) CINT(CELL_REF(BgL_ez00_4572));
					BgL_auxz00_4575 = BINT((BgL_za71za7_3129 - ((long) 1)));
				}
				CELL_SET(BgL_ez00_4572, BgL_auxz00_4575);
			}
			{	/* Unsafe/gunzip.scm 592 */
				bool_t BgL_testz00_6456;

				{	/* Unsafe/gunzip.scm 592 */
					long BgL_n1z00_3131;

					BgL_n1z00_3131 = (long) CINT(CELL_REF(BgL_ez00_4572));
					BgL_testz00_6456 = (BgL_n1z00_3131 == ((long) 0));
				}
				if (BgL_testz00_6456)
					{	/* Unsafe/gunzip.scm 592 */
						return ((bool_t) 0);
					}
				else
					{

						goto BGl_liipz00zz__gunza7ipza7;
					}
			}
		}
	}



/* loop_2965 */
	obj_t BGl_loop_2965z00zz__gunza7ipza7(obj_t BgL_bkz00_4581,
		obj_t BgL_wpz00_4580, obj_t BgL_slidez00_4579, obj_t BgL_bbz00_4578,
		obj_t BgL_inputzd2portzd2_4577, obj_t BgL_wsiza7eza7_4576,
		long BgL_nz00_1535)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 696 */
		BGl_loop_2965z00zz__gunza7ipza7:
			if ((BgL_nz00_1535 > ((long) 0)))
				{	/* Unsafe/gunzip.scm 697 */
					BGl_NEEDBITSz00zz__gunza7ipza7(BgL_bbz00_4578, BgL_bkz00_4581,
						BgL_inputzd2portzd2_4577, BINT(((long) 8)));
					{	/* Unsafe/gunzip.scm 700 */
						unsigned char BgL_arg2375z00_1538;

						{	/* Unsafe/gunzip.scm 700 */
							long BgL_auxz00_6463;

							{	/* Unsafe/gunzip.scm 700 */
								long BgL_xz00_3282;

								BgL_xz00_3282 = (long) CINT(CELL_REF(BgL_bbz00_4578));
								BgL_auxz00_6463 = (BgL_xz00_3282 & ((long) 255));
							}
							BgL_arg2375z00_1538 = (BgL_auxz00_6463);
						}
						{	/* Unsafe/gunzip.scm 700 */
							obj_t BgL_stringz00_3285;

							long BgL_kz00_3286;

							BgL_stringz00_3285 = BgL_slidez00_4579;
							BgL_kz00_3286 = (long) CINT(CELL_REF(BgL_wpz00_4580));
							STRING_SET(BgL_stringz00_3285, BgL_kz00_3286,
								BgL_arg2375z00_1538);
					}}
					{	/* Unsafe/gunzip.scm 701 */
						obj_t BgL_auxz00_4582;

						{	/* Unsafe/gunzip.scm 701 */
							long BgL_za71za7_3288;

							BgL_za71za7_3288 = (long) CINT(CELL_REF(BgL_wpz00_4580));
							BgL_auxz00_4582 = BINT((BgL_za71za7_3288 + ((long) 1)));
						}
						CELL_SET(BgL_wpz00_4580, BgL_auxz00_4582);
					}
					{	/* Unsafe/gunzip.scm 702 */
						obj_t BgL_rz00_1540;

						BgL_rz00_1540 =
							BGl_checkzd2flushzd2zz__gunza7ipza7(BgL_wsiza7eza7_4576,
							BgL_wpz00_4580);
						{	/* Unsafe/gunzip.scm 703 */
							obj_t BgL_auxz00_4583;

							{	/* Unsafe/gunzip.scm 703 */
								long BgL_xz00_3291;

								BgL_xz00_3291 = (long) CINT(CELL_REF(BgL_bbz00_4578));
								BgL_auxz00_4583 = BINT((BgL_xz00_3291 >> (int) (((long) 8))));
							}
							CELL_SET(BgL_bbz00_4578, BgL_auxz00_4583);
						}
						{	/* Unsafe/gunzip.scm 703 */
							obj_t BgL_auxz00_4584;

							{	/* Unsafe/gunzip.scm 703 */
								long BgL_za71za7_3293;

								BgL_za71za7_3293 = (long) CINT(CELL_REF(BgL_bkz00_4581));
								BgL_auxz00_4584 = BINT((BgL_za71za7_3293 - ((long) 8)));
							}
							CELL_SET(BgL_bkz00_4581, BgL_auxz00_4584);
						}
						if (((long) CINT(BgL_rz00_1540) > ((long) 0)))
							{	/* Unsafe/gunzip.scm 705 */
								obj_t BgL_val0_1967z00_1542;

								BgL_val0_1967z00_1542 = BGl_symbol3049z00zz__gunza7ipza7;
								{	/* Unsafe/gunzip.scm 705 */
									obj_t BgL_zc3anonymousza32378ze3z83_4288;

									BgL_zc3anonymousza32378ze3z83_4288 =
										make_fx_procedure
										(BGl_zc3anonymousza32378ze3z83zz__gunza7ipza7,
										(int) (((long) 0)), (int) (((long) 7)));
									PROCEDURE_SET(BgL_zc3anonymousza32378ze3z83_4288,
										(int) (((long) 0)), BgL_wsiza7eza7_4576);
									PROCEDURE_SET(BgL_zc3anonymousza32378ze3z83_4288,
										(int) (((long) 1)), BgL_inputzd2portzd2_4577);
									PROCEDURE_SET(BgL_zc3anonymousza32378ze3z83_4288,
										(int) (((long) 2)), BgL_bbz00_4578);
									PROCEDURE_SET(BgL_zc3anonymousza32378ze3z83_4288,
										(int) (((long) 3)), BgL_slidez00_4579);
									PROCEDURE_SET(BgL_zc3anonymousza32378ze3z83_4288,
										(int) (((long) 4)), BgL_wpz00_4580);
									PROCEDURE_SET(BgL_zc3anonymousza32378ze3z83_4288,
										(int) (((long) 5)), BgL_bkz00_4581);
									PROCEDURE_SET(BgL_zc3anonymousza32378ze3z83_4288,
										(int) (((long) 6)), BINT(BgL_nz00_1535));
									{	/* Unsafe/gunzip.scm 705 */
										int BgL_auxz00_6501;

										BgL_auxz00_6501 = (int) (((long) 3));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_6501);
									}
									{	/* Unsafe/gunzip.scm 705 */
										int BgL_auxz00_6504;

										BgL_auxz00_6504 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_6504, BgL_rz00_1540);
									}
									{	/* Unsafe/gunzip.scm 705 */
										int BgL_auxz00_6507;

										BgL_auxz00_6507 = (int) (((long) 2));
										BGL_MVALUES_VAL_SET(BgL_auxz00_6507,
											BgL_zc3anonymousza32378ze3z83_4288);
									}
									return BgL_val0_1967z00_1542;
								}
							}
						else
							{	/* Unsafe/gunzip.scm 706 */
								long BgL_arg2380z00_1548;

								BgL_arg2380z00_1548 = (BgL_nz00_1535 - ((long) 1));
								{
									long BgL_nz00_6511;

									BgL_nz00_6511 = BgL_arg2380z00_1548;
									BgL_nz00_1535 = BgL_nz00_6511;
									goto BGl_loop_2965z00zz__gunza7ipza7;
								}
							}
					}
				}
			else
				{	/* Unsafe/gunzip.scm 707 */
					obj_t BgL_val0_1970z00_1549;

					BgL_val0_1970z00_1549 = BGl_symbol3045z00zz__gunza7ipza7;
					{	/* Unsafe/gunzip.scm 707 */
						int BgL_auxz00_6512;

						BgL_auxz00_6512 = (int) (((long) 3));
						BGL_MVALUES_NUMBER_SET(BgL_auxz00_6512);
					}
					{	/* Unsafe/gunzip.scm 707 */
						int BgL_auxz00_6515;

						BgL_auxz00_6515 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_auxz00_6515, BTRUE);
					}
					{	/* Unsafe/gunzip.scm 707 */
						int BgL_auxz00_6518;

						BgL_auxz00_6518 = (int) (((long) 2));
						BGL_MVALUES_VAL_SET(BgL_auxz00_6518, BUNSPEC);
					}
					return BgL_val0_1970z00_1549;
				}
		}
	}



/* loop1902 */
	bool_t BGl_loop1902z00zz__gunza7ipza7(obj_t BgL_lz00_4585,
		long BgL_i1903z00_1588)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 725 */
		BGl_loop1902z00zz__gunza7ipza7:
			if ((BgL_i1903z00_1588 < ((long) 30)))
				{	/* Unsafe/gunzip.scm 725 */
					VECTOR_SET(BgL_lz00_4585,
						(int) (BgL_i1903z00_1588), BINT(((long) 5)));
					{
						long BgL_i1903z00_6526;

						BgL_i1903z00_6526 = (BgL_i1903z00_1588 + ((long) 1));
						BgL_i1903z00_1588 = BgL_i1903z00_6526;
						goto BGl_loop1902z00zz__gunza7ipza7;
					}
				}
			else
				{	/* Unsafe/gunzip.scm 725 */
					return ((bool_t) 0);
				}
		}
	}



/* loop1899 */
	bool_t BGl_loop1899z00zz__gunza7ipza7(obj_t BgL_lz00_4586,
		long BgL_i1900z00_1577)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 718 */
		BGl_loop1899z00zz__gunza7ipza7:
			if ((BgL_i1900z00_1577 < ((long) 288)))
				{	/* Unsafe/gunzip.scm 718 */
					VECTOR_SET(BgL_lz00_4586,
						(int) (BgL_i1900z00_1577), BINT(((long) 8)));
					{
						long BgL_i1900z00_6533;

						BgL_i1900z00_6533 = (BgL_i1900z00_1577 + ((long) 1));
						BgL_i1900z00_1577 = BgL_i1900z00_6533;
						goto BGl_loop1899z00zz__gunza7ipza7;
					}
				}
			else
				{	/* Unsafe/gunzip.scm 718 */
					return ((bool_t) 0);
				}
		}
	}



/* loop1897 */
	bool_t BGl_loop1897z00zz__gunza7ipza7(obj_t BgL_lz00_4587,
		long BgL_i1898z00_1570)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 717 */
		BGl_loop1897z00zz__gunza7ipza7:
			if ((BgL_i1898z00_1570 < ((long) 280)))
				{	/* Unsafe/gunzip.scm 717 */
					VECTOR_SET(BgL_lz00_4587,
						(int) (BgL_i1898z00_1570), BINT(((long) 7)));
					{
						long BgL_i1898z00_6540;

						BgL_i1898z00_6540 = (BgL_i1898z00_1570 + ((long) 1));
						BgL_i1898z00_1570 = BgL_i1898z00_6540;
						goto BGl_loop1897z00zz__gunza7ipza7;
					}
				}
			else
				{	/* Unsafe/gunzip.scm 717 */
					return ((bool_t) 0);
				}
		}
	}



/* loop1895 */
	bool_t BGl_loop1895z00zz__gunza7ipza7(obj_t BgL_lz00_4588,
		long BgL_i1896z00_1563)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 716 */
		BGl_loop1895z00zz__gunza7ipza7:
			if ((BgL_i1896z00_1563 < ((long) 256)))
				{	/* Unsafe/gunzip.scm 716 */
					VECTOR_SET(BgL_lz00_4588,
						(int) (BgL_i1896z00_1563), BINT(((long) 9)));
					{
						long BgL_i1896z00_6547;

						BgL_i1896z00_6547 = (BgL_i1896z00_1563 + ((long) 1));
						BgL_i1896z00_1563 = BgL_i1896z00_6547;
						goto BGl_loop1895z00zz__gunza7ipza7;
					}
				}
			else
				{	/* Unsafe/gunzip.scm 716 */
					return ((bool_t) 0);
				}
		}
	}



/* loop1893 */
	bool_t BGl_loop1893z00zz__gunza7ipza7(obj_t BgL_lz00_4589,
		long BgL_i1894z00_1556)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 715 */
		BGl_loop1893z00zz__gunza7ipza7:
			if ((BgL_i1894z00_1556 < ((long) 144)))
				{	/* Unsafe/gunzip.scm 715 */
					VECTOR_SET(BgL_lz00_4589,
						(int) (BgL_i1894z00_1556), BINT(((long) 8)));
					{
						long BgL_i1894z00_6554;

						BgL_i1894z00_6554 = (BgL_i1894z00_1556 + ((long) 1));
						BgL_i1894z00_1556 = BgL_i1894z00_6554;
						goto BGl_loop1893z00zz__gunza7ipza7;
					}
				}
			else
				{	/* Unsafe/gunzip.scm 715 */
					return ((bool_t) 0);
				}
		}
	}



/* %do-copy2 */
	obj_t BGl_z52dozd2copy2z80zz__gunza7ipza7(obj_t BgL_slidez00_4605,
		obj_t BgL_ez00_4604, obj_t BgL_wpz00_4603, obj_t BgL_nz00_4602,
		obj_t BgL_dz00_4601, obj_t BgL_wsiza7eza7_4600, obj_t BgL_tdz00_4599,
		obj_t BgL_mdz00_4598, obj_t BgL_bdz00_4597, obj_t BgL_bkz00_4596,
		obj_t BgL_tz00_4595, obj_t BgL_tlz00_4594, obj_t BgL_mlz00_4593,
		obj_t BgL_bbz00_4592, obj_t BgL_blz00_4591, obj_t BgL_inputzd2portzd2_4590)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 609 */
		BGl_z52dozd2copy2z80zz__gunza7ipza7:
			{	/* Unsafe/gunzip.scm 609 */
				obj_t BgL_auxz00_4606;

				{	/* Unsafe/gunzip.scm 609 */
					long BgL_xz00_3143;

					BgL_xz00_3143 = (long) CINT(CELL_REF(BgL_dz00_4601));
					{	/* Unsafe/gunzip.scm 609 */
						long BgL_auxz00_6557;

						{	/* Unsafe/gunzip.scm 609 */
							long BgL_auxz00_6558;

							{	/* Unsafe/gunzip.scm 609 */
								long BgL_za71za7_3141;

								BgL_za71za7_3141 = (long) CINT(CELL_REF(BgL_wsiza7eza7_4600));
								BgL_auxz00_6558 = (BgL_za71za7_3141 - ((long) 1));
							}
							BgL_auxz00_6557 = (BgL_xz00_3143 & BgL_auxz00_6558);
						}
						BgL_auxz00_4606 = BINT(BgL_auxz00_6557);
				}}
				CELL_SET(BgL_dz00_4601, BgL_auxz00_4606);
			}
			{	/* Unsafe/gunzip.scm 610 */
				obj_t BgL_auxz00_4607;

				{	/* Unsafe/gunzip.scm 610 */
					obj_t BgL_xz00_1466;

					long BgL_yz00_1467;

					BgL_xz00_1466 = CELL_REF(BgL_nz00_4602);
					{	/* Unsafe/gunzip.scm 610 */
						obj_t BgL_arg2330z00_1469;

						{	/* Unsafe/gunzip.scm 610 */
							obj_t BgL_xz00_1470;

							obj_t BgL_yz00_1471;

							BgL_xz00_1470 = CELL_REF(BgL_dz00_4601);
							BgL_yz00_1471 = CELL_REF(BgL_wpz00_4603);
							if (((long) CINT(BgL_xz00_1470) > (long) CINT(BgL_yz00_1471)))
								{	/* Unsafe/gunzip.scm 610 */
									BgL_arg2330z00_1469 = BgL_xz00_1470;
								}
							else
								{	/* Unsafe/gunzip.scm 610 */
									BgL_arg2330z00_1469 = BgL_yz00_1471;
								}
						}
						{	/* Unsafe/gunzip.scm 610 */
							long BgL_za71za7_3147;

							long BgL_za72za7_3148;

							BgL_za71za7_3147 = (long) CINT(CELL_REF(BgL_wsiza7eza7_4600));
							BgL_za72za7_3148 = (long) CINT(BgL_arg2330z00_1469);
							BgL_yz00_1467 = (BgL_za71za7_3147 - BgL_za72za7_3148);
					}}
					if (((long) CINT(BgL_xz00_1466) < BgL_yz00_1467))
						{	/* Unsafe/gunzip.scm 610 */
							BgL_auxz00_4607 = BgL_xz00_1466;
						}
					else
						{	/* Unsafe/gunzip.scm 610 */
							BgL_auxz00_4607 = BINT(BgL_yz00_1467);
						}
				}
				CELL_SET(BgL_ez00_4604, BgL_auxz00_4607);
			}
			{	/* Unsafe/gunzip.scm 611 */
				obj_t BgL_auxz00_4608;

				{	/* Unsafe/gunzip.scm 611 */
					long BgL_za71za7_3151;

					long BgL_za72za7_3152;

					BgL_za71za7_3151 = (long) CINT(CELL_REF(BgL_nz00_4602));
					BgL_za72za7_3152 = (long) CINT(CELL_REF(BgL_ez00_4604));
					BgL_auxz00_4608 = BINT((BgL_za71za7_3151 - BgL_za72za7_3152));
				}
				CELL_SET(BgL_nz00_4602, BgL_auxz00_4608);
			}
			{

			BgL_zc3anonymousza32332ze3z83_1474:
				{	/* Unsafe/gunzip.scm 614 */
					unsigned char BgL_arg2333z00_1475;

					{	/* Unsafe/gunzip.scm 614 */
						obj_t BgL_stringz00_3153;

						long BgL_kz00_3154;

						BgL_stringz00_3153 = BgL_slidez00_4605;
						BgL_kz00_3154 = (long) CINT(CELL_REF(BgL_dz00_4601));
						BgL_arg2333z00_1475 = STRING_REF(BgL_stringz00_3153, BgL_kz00_3154);
					}
					{	/* Unsafe/gunzip.scm 613 */
						obj_t BgL_stringz00_3155;

						long BgL_kz00_3156;

						BgL_stringz00_3155 = BgL_slidez00_4605;
						BgL_kz00_3156 = (long) CINT(CELL_REF(BgL_wpz00_4603));
						STRING_SET(BgL_stringz00_3155, BgL_kz00_3156, BgL_arg2333z00_1475);
				}}
				{	/* Unsafe/gunzip.scm 615 */
					obj_t BgL_auxz00_4609;

					{	/* Unsafe/gunzip.scm 615 */
						long BgL_za71za7_3158;

						BgL_za71za7_3158 = (long) CINT(CELL_REF(BgL_wpz00_4603));
						BgL_auxz00_4609 = BINT((BgL_za71za7_3158 + ((long) 1)));
					}
					CELL_SET(BgL_wpz00_4603, BgL_auxz00_4609);
				}
				{	/* Unsafe/gunzip.scm 616 */
					obj_t BgL_auxz00_4610;

					{	/* Unsafe/gunzip.scm 616 */
						long BgL_za71za7_3160;

						BgL_za71za7_3160 = (long) CINT(CELL_REF(BgL_dz00_4601));
						BgL_auxz00_4610 = BINT((BgL_za71za7_3160 + ((long) 1)));
					}
					CELL_SET(BgL_dz00_4601, BgL_auxz00_4610);
				}
				{	/* Unsafe/gunzip.scm 617 */
					obj_t BgL_auxz00_4611;

					{	/* Unsafe/gunzip.scm 617 */
						long BgL_za71za7_3162;

						BgL_za71za7_3162 = (long) CINT(CELL_REF(BgL_ez00_4604));
						BgL_auxz00_4611 = BINT((BgL_za71za7_3162 - ((long) 1)));
					}
					CELL_SET(BgL_ez00_4604, BgL_auxz00_4611);
				}
				{	/* Unsafe/gunzip.scm 618 */
					bool_t BgL_testz00_6591;

					{	/* Unsafe/gunzip.scm 618 */
						long BgL_n1z00_3164;

						BgL_n1z00_3164 = (long) CINT(CELL_REF(BgL_ez00_4604));
						BgL_testz00_6591 = (BgL_n1z00_3164 == ((long) 0));
					}
					if (BgL_testz00_6591)
						{	/* Unsafe/gunzip.scm 618 */
							((bool_t) 0);
						}
					else
						{	/* Unsafe/gunzip.scm 618 */
							goto BgL_zc3anonymousza32332ze3z83_1474;
						}
				}
			}
			{	/* Unsafe/gunzip.scm 619 */
				obj_t BgL_rz00_1478;

				BgL_rz00_1478 =
					BGl_checkzd2flushzd2zz__gunza7ipza7(BgL_wsiza7eza7_4600,
					BgL_wpz00_4603);
				{	/* Unsafe/gunzip.scm 621 */
					bool_t BgL_testz00_6595;

					{	/* Unsafe/gunzip.scm 621 */
						long BgL_n1z00_3166;

						BgL_n1z00_3166 = (long) CINT(CELL_REF(BgL_nz00_4602));
						BgL_testz00_6595 = (BgL_n1z00_3166 == ((long) 0));
					}
					if (BgL_testz00_6595)
						{	/* Unsafe/gunzip.scm 621 */
							return
								BGl_loopzd2inflatezd2zz__gunza7ipza7(BgL_slidez00_4605,
								BgL_dz00_4601, BgL_wsiza7eza7_4600, BgL_wpz00_4603,
								BgL_tdz00_4599, BgL_mdz00_4598, BgL_bdz00_4597, BgL_nz00_4602,
								BgL_bkz00_4596, BgL_ez00_4604, BgL_tz00_4595, BgL_tlz00_4594,
								BgL_mlz00_4593, BgL_bbz00_4592, BgL_blz00_4591,
								BgL_inputzd2portzd2_4590, BgL_rz00_1478);
						}
					else
						{	/* Unsafe/gunzip.scm 621 */
							if (((long) CINT(BgL_rz00_1478) == ((long) 0)))
								{

									goto BGl_z52dozd2copy2z80zz__gunza7ipza7;
								}
							else
								{	/* Unsafe/gunzip.scm 626 */
									obj_t BgL_val0_1958z00_1481;

									BgL_val0_1958z00_1481 = BGl_symbol3049z00zz__gunza7ipza7;
									{	/* Unsafe/gunzip.scm 626 */
										obj_t BgL_zc3anonymousza32337ze3z83_4257;

										BgL_zc3anonymousza32337ze3z83_4257 =
											make_fx_procedure
											(BGl_zc3anonymousza32337ze3z83zz__gunza7ipza7,
											(int) (((long) 0)), (int) (((long) 16)));
										PROCEDURE_SET(BgL_zc3anonymousza32337ze3z83_4257,
											(int) (((long) 0)), BgL_inputzd2portzd2_4590);
										PROCEDURE_SET(BgL_zc3anonymousza32337ze3z83_4257,
											(int) (((long) 1)), BgL_blz00_4591);
										PROCEDURE_SET(BgL_zc3anonymousza32337ze3z83_4257,
											(int) (((long) 2)), BgL_bbz00_4592);
										PROCEDURE_SET(BgL_zc3anonymousza32337ze3z83_4257,
											(int) (((long) 3)), BgL_mlz00_4593);
										PROCEDURE_SET(BgL_zc3anonymousza32337ze3z83_4257,
											(int) (((long) 4)), BgL_tlz00_4594);
										PROCEDURE_SET(BgL_zc3anonymousza32337ze3z83_4257,
											(int) (((long) 5)), BgL_tz00_4595);
										PROCEDURE_SET(BgL_zc3anonymousza32337ze3z83_4257,
											(int) (((long) 6)), BgL_bkz00_4596);
										PROCEDURE_SET(BgL_zc3anonymousza32337ze3z83_4257,
											(int) (((long) 7)), BgL_bdz00_4597);
										PROCEDURE_SET(BgL_zc3anonymousza32337ze3z83_4257,
											(int) (((long) 8)), BgL_mdz00_4598);
										PROCEDURE_SET(BgL_zc3anonymousza32337ze3z83_4257,
											(int) (((long) 9)), BgL_tdz00_4599);
										PROCEDURE_SET(BgL_zc3anonymousza32337ze3z83_4257,
											(int) (((long) 10)), BgL_wsiza7eza7_4600);
										PROCEDURE_SET(BgL_zc3anonymousza32337ze3z83_4257,
											(int) (((long) 11)), BgL_dz00_4601);
										PROCEDURE_SET(BgL_zc3anonymousza32337ze3z83_4257,
											(int) (((long) 12)), BgL_nz00_4602);
										PROCEDURE_SET(BgL_zc3anonymousza32337ze3z83_4257,
											(int) (((long) 13)), BgL_wpz00_4603);
										PROCEDURE_SET(BgL_zc3anonymousza32337ze3z83_4257,
											(int) (((long) 14)), BgL_ez00_4604);
										PROCEDURE_SET(BgL_zc3anonymousza32337ze3z83_4257,
											(int) (((long) 15)), BgL_slidez00_4605);
										{	/* Unsafe/gunzip.scm 626 */
											int BgL_auxz00_6637;

											BgL_auxz00_6637 = (int) (((long) 3));
											BGL_MVALUES_NUMBER_SET(BgL_auxz00_6637);
										}
										{	/* Unsafe/gunzip.scm 626 */
											int BgL_auxz00_6640;

											BgL_auxz00_6640 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_auxz00_6640, BgL_rz00_1478);
										}
										{	/* Unsafe/gunzip.scm 626 */
											int BgL_auxz00_6643;

											BgL_auxz00_6643 = (int) (((long) 2));
											BGL_MVALUES_VAL_SET(BgL_auxz00_6643,
												BgL_zc3anonymousza32337ze3z83_4257);
										}
										return BgL_val0_1958z00_1481;
									}
								}
						}
				}
			}
		}
	}



/* <anonymous:2081> */
	obj_t BGl_zc3anonymousza32081ze3z83zz__gunza7ipza7(obj_t BgL_envz00_4612)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 881 */
			{	/* Unsafe/gunzip.scm 882 */
				obj_t BgL_wsiza7eza7_4613;

				obj_t BgL_slidez00_4614;

				obj_t BgL_inputzd2portzd2_4615;

				obj_t BgL_bkz00_4616;

				obj_t BgL_bbz00_4617;

				obj_t BgL_wpz00_4618;

				obj_t BgL_hz00_4619;

				obj_t BgL_huftsz00_4620;

				obj_t BgL_rz00_4621;

				BgL_wsiza7eza7_4613 =
					PROCEDURE_REF(BgL_envz00_4612, (int) (((long) 0)));
				BgL_slidez00_4614 = PROCEDURE_REF(BgL_envz00_4612, (int) (((long) 1)));
				BgL_inputzd2portzd2_4615 =
					PROCEDURE_REF(BgL_envz00_4612, (int) (((long) 2)));
				BgL_bkz00_4616 = PROCEDURE_REF(BgL_envz00_4612, (int) (((long) 3)));
				BgL_bbz00_4617 = PROCEDURE_REF(BgL_envz00_4612, (int) (((long) 4)));
				BgL_wpz00_4618 = PROCEDURE_REF(BgL_envz00_4612, (int) (((long) 5)));
				BgL_hz00_4619 = PROCEDURE_REF(BgL_envz00_4612, (int) (((long) 6)));
				BgL_huftsz00_4620 = PROCEDURE_REF(BgL_envz00_4612, (int) (((long) 7)));
				BgL_rz00_4621 = PROCEDURE_REF(BgL_envz00_4612, (int) (((long) 8)));
				{

					{	/* Unsafe/gunzip.scm 882 */
						obj_t BgL_state2z00_1015;

						BgL_state2z00_1015 =
							PROCEDURE_ENTRY(BgL_rz00_4621) (BgL_rz00_4621, BEOA);
						{	/* Unsafe/gunzip.scm 884 */
							obj_t BgL_e2z00_1016;

							obj_t BgL_r2z00_1017;

							{	/* Unsafe/gunzip.scm 884 */
								int BgL_auxz00_6666;

								BgL_auxz00_6666 = (int) (((long) 1));
								BgL_e2z00_1016 = BGL_MVALUES_VAL(BgL_auxz00_6666);
							}
							{	/* Unsafe/gunzip.scm 884 */
								int BgL_auxz00_6669;

								BgL_auxz00_6669 = (int) (((long) 2));
								BgL_r2z00_1017 = BGL_MVALUES_VAL(BgL_auxz00_6669);
							}
							return
								BGl_laapz00zz__gunza7ipza7(BgL_huftsz00_4620, BgL_hz00_4619,
								BgL_wpz00_4618, BgL_bbz00_4617, BgL_bkz00_4616,
								BgL_inputzd2portzd2_4615, BgL_slidez00_4614,
								BgL_wsiza7eza7_4613, BgL_state2z00_1015, BgL_e2z00_1016,
								BgL_r2z00_1017);
						}
					}
				}
			}
		}
	}



/* <anonymous:2493> */
	obj_t BGl_zc3anonymousza32493ze3z83zz__gunza7ipza7(obj_t BgL_envz00_4622)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 850 */
			{	/* Unsafe/gunzip.scm 851 */
				obj_t BgL_ez00_4623;

				obj_t BgL_kontz00_4624;

				BgL_ez00_4623 = PROCEDURE_REF(BgL_envz00_4622, (int) (((long) 0)));
				BgL_kontz00_4624 = PROCEDURE_REF(BgL_envz00_4622, (int) (((long) 1)));
				{

					{	/* Unsafe/gunzip.scm 851 */
						obj_t BgL_state2z00_1746;

						BgL_state2z00_1746 =
							PROCEDURE_ENTRY(BgL_kontz00_4624) (BgL_kontz00_4624, BEOA);
						{	/* Unsafe/gunzip.scm 853 */
							obj_t BgL_val2z00_1747;

							obj_t BgL_kont2z00_1748;

							{	/* Unsafe/gunzip.scm 853 */
								int BgL_auxz00_6679;

								BgL_auxz00_6679 = (int) (((long) 1));
								BgL_val2z00_1747 = BGL_MVALUES_VAL(BgL_auxz00_6679);
							}
							{	/* Unsafe/gunzip.scm 853 */
								int BgL_auxz00_6682;

								BgL_auxz00_6682 = (int) (((long) 2));
								BgL_kont2z00_1748 = BGL_MVALUES_VAL(BgL_auxz00_6682);
							}
							return
								BGl_loop_2964z00zz__gunza7ipza7(BgL_ez00_4623,
								BgL_state2z00_1746, BgL_val2z00_1747, BgL_kont2z00_1748);
						}
					}
				}
			}
		}
	}



/* <anonymous:2378> */
	obj_t BGl_zc3anonymousza32378ze3z83zz__gunza7ipza7(obj_t BgL_envz00_4625)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 705 */
			{	/* Unsafe/gunzip.scm 705 */
				obj_t BgL_wsiza7eza7_4626;

				obj_t BgL_inputzd2portzd2_4627;

				obj_t BgL_bbz00_4628;

				obj_t BgL_slidez00_4629;

				obj_t BgL_wpz00_4630;

				obj_t BgL_bkz00_4631;

				obj_t BgL_nz00_4632;

				BgL_wsiza7eza7_4626 =
					PROCEDURE_REF(BgL_envz00_4625, (int) (((long) 0)));
				BgL_inputzd2portzd2_4627 =
					PROCEDURE_REF(BgL_envz00_4625, (int) (((long) 1)));
				BgL_bbz00_4628 = PROCEDURE_REF(BgL_envz00_4625, (int) (((long) 2)));
				BgL_slidez00_4629 = PROCEDURE_REF(BgL_envz00_4625, (int) (((long) 3)));
				BgL_wpz00_4630 = PROCEDURE_REF(BgL_envz00_4625, (int) (((long) 4)));
				BgL_bkz00_4631 = PROCEDURE_REF(BgL_envz00_4625, (int) (((long) 5)));
				BgL_nz00_4632 = PROCEDURE_REF(BgL_envz00_4625, (int) (((long) 6)));
				{

					return
						BGl_loop_2965z00zz__gunza7ipza7(BgL_bkz00_4631, BgL_wpz00_4630,
						BgL_slidez00_4629, BgL_bbz00_4628, BgL_inputzd2portzd2_4627,
						BgL_wsiza7eza7_4626, ((long) CINT(BgL_nz00_4632) - ((long) 1)));
		}}}
	}



/* <anonymous:2340> */
	obj_t BGl_zc3anonymousza32340ze3z83zz__gunza7ipza7(obj_t BgL_envz00_4633)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 630 */
			{	/* Unsafe/gunzip.scm 630 */
				obj_t BgL_inputzd2portzd2_4634;

				obj_t BgL_blz00_4635;

				obj_t BgL_bbz00_4636;

				obj_t BgL_mlz00_4637;

				obj_t BgL_tlz00_4638;

				obj_t BgL_tz00_4639;

				obj_t BgL_ez00_4640;

				obj_t BgL_bkz00_4641;

				obj_t BgL_nz00_4642;

				obj_t BgL_bdz00_4643;

				obj_t BgL_mdz00_4644;

				obj_t BgL_tdz00_4645;

				obj_t BgL_wpz00_4646;

				obj_t BgL_wsiza7eza7_4647;

				obj_t BgL_dz00_4648;

				obj_t BgL_slidez00_4649;

				BgL_inputzd2portzd2_4634 =
					PROCEDURE_REF(BgL_envz00_4633, (int) (((long) 0)));
				BgL_blz00_4635 = PROCEDURE_REF(BgL_envz00_4633, (int) (((long) 1)));
				BgL_bbz00_4636 = PROCEDURE_REF(BgL_envz00_4633, (int) (((long) 2)));
				BgL_mlz00_4637 = PROCEDURE_REF(BgL_envz00_4633, (int) (((long) 3)));
				BgL_tlz00_4638 = PROCEDURE_REF(BgL_envz00_4633, (int) (((long) 4)));
				BgL_tz00_4639 = PROCEDURE_REF(BgL_envz00_4633, (int) (((long) 5)));
				BgL_ez00_4640 = PROCEDURE_REF(BgL_envz00_4633, (int) (((long) 6)));
				BgL_bkz00_4641 = PROCEDURE_REF(BgL_envz00_4633, (int) (((long) 7)));
				BgL_nz00_4642 = PROCEDURE_REF(BgL_envz00_4633, (int) (((long) 8)));
				BgL_bdz00_4643 = PROCEDURE_REF(BgL_envz00_4633, (int) (((long) 9)));
				BgL_mdz00_4644 = PROCEDURE_REF(BgL_envz00_4633, (int) (((long) 10)));
				BgL_tdz00_4645 = PROCEDURE_REF(BgL_envz00_4633, (int) (((long) 11)));
				BgL_wpz00_4646 = PROCEDURE_REF(BgL_envz00_4633, (int) (((long) 12)));
				BgL_wsiza7eza7_4647 =
					PROCEDURE_REF(BgL_envz00_4633, (int) (((long) 13)));
				BgL_dz00_4648 = PROCEDURE_REF(BgL_envz00_4633, (int) (((long) 14)));
				BgL_slidez00_4649 = PROCEDURE_REF(BgL_envz00_4633, (int) (((long) 15)));
				{

					return
						BGl_loopzd2inflatezd2zz__gunza7ipza7(BgL_slidez00_4649,
						BgL_dz00_4648, BgL_wsiza7eza7_4647, BgL_wpz00_4646, BgL_tdz00_4645,
						BgL_mdz00_4644, BgL_bdz00_4643, BgL_nz00_4642, BgL_bkz00_4641,
						BgL_ez00_4640, BgL_tz00_4639, BgL_tlz00_4638, BgL_mlz00_4637,
						BgL_bbz00_4636, BgL_blz00_4635, BgL_inputzd2portzd2_4634,
						BINT(((long) 0)));
		}}}
	}



/* <anonymous:2337> */
	obj_t BGl_zc3anonymousza32337ze3z83zz__gunza7ipza7(obj_t BgL_envz00_4650)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 626 */
			{	/* Unsafe/gunzip.scm 626 */
				obj_t BgL_inputzd2portzd2_4651;

				obj_t BgL_blz00_4652;

				obj_t BgL_bbz00_4653;

				obj_t BgL_mlz00_4654;

				obj_t BgL_tlz00_4655;

				obj_t BgL_tz00_4656;

				obj_t BgL_bkz00_4657;

				obj_t BgL_bdz00_4658;

				obj_t BgL_mdz00_4659;

				obj_t BgL_tdz00_4660;

				obj_t BgL_wsiza7eza7_4661;

				obj_t BgL_dz00_4662;

				obj_t BgL_nz00_4663;

				obj_t BgL_wpz00_4664;

				obj_t BgL_ez00_4665;

				obj_t BgL_slidez00_4666;

				BgL_inputzd2portzd2_4651 =
					PROCEDURE_REF(BgL_envz00_4650, (int) (((long) 0)));
				BgL_blz00_4652 = PROCEDURE_REF(BgL_envz00_4650, (int) (((long) 1)));
				BgL_bbz00_4653 = PROCEDURE_REF(BgL_envz00_4650, (int) (((long) 2)));
				BgL_mlz00_4654 = PROCEDURE_REF(BgL_envz00_4650, (int) (((long) 3)));
				BgL_tlz00_4655 = PROCEDURE_REF(BgL_envz00_4650, (int) (((long) 4)));
				BgL_tz00_4656 = PROCEDURE_REF(BgL_envz00_4650, (int) (((long) 5)));
				BgL_bkz00_4657 = PROCEDURE_REF(BgL_envz00_4650, (int) (((long) 6)));
				BgL_bdz00_4658 = PROCEDURE_REF(BgL_envz00_4650, (int) (((long) 7)));
				BgL_mdz00_4659 = PROCEDURE_REF(BgL_envz00_4650, (int) (((long) 8)));
				BgL_tdz00_4660 = PROCEDURE_REF(BgL_envz00_4650, (int) (((long) 9)));
				BgL_wsiza7eza7_4661 =
					PROCEDURE_REF(BgL_envz00_4650, (int) (((long) 10)));
				BgL_dz00_4662 = PROCEDURE_REF(BgL_envz00_4650, (int) (((long) 11)));
				BgL_nz00_4663 = PROCEDURE_REF(BgL_envz00_4650, (int) (((long) 12)));
				BgL_wpz00_4664 = PROCEDURE_REF(BgL_envz00_4650, (int) (((long) 13)));
				BgL_ez00_4665 = PROCEDURE_REF(BgL_envz00_4650, (int) (((long) 14)));
				BgL_slidez00_4666 = PROCEDURE_REF(BgL_envz00_4650, (int) (((long) 15)));
				{

					return
						BGl_z52dozd2copy2z80zz__gunza7ipza7(BgL_slidez00_4666,
						BgL_ez00_4665, BgL_wpz00_4664, BgL_nz00_4663, BgL_dz00_4662,
						BgL_wsiza7eza7_4661, BgL_tdz00_4660, BgL_mdz00_4659, BgL_bdz00_4658,
						BgL_bkz00_4657, BgL_tz00_4656, BgL_tlz00_4655, BgL_mlz00_4654,
						BgL_bbz00_4653, BgL_blz00_4652, BgL_inputzd2portzd2_4651);
				}
			}
		}
	}



/* <anonymous:2326> */
	obj_t BGl_zc3anonymousza32326ze3z83zz__gunza7ipza7(obj_t BgL_envz00_4667)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 600 */
			{	/* Unsafe/gunzip.scm 600 */
				obj_t BgL_inputzd2portzd2_4668;

				obj_t BgL_blz00_4669;

				obj_t BgL_bbz00_4670;

				obj_t BgL_mlz00_4671;

				obj_t BgL_tlz00_4672;

				obj_t BgL_tz00_4673;

				obj_t BgL_bkz00_4674;

				obj_t BgL_bdz00_4675;

				obj_t BgL_mdz00_4676;

				obj_t BgL_tdz00_4677;

				obj_t BgL_wsiza7eza7_4678;

				obj_t BgL_dz00_4679;

				obj_t BgL_nz00_4680;

				obj_t BgL_wpz00_4681;

				obj_t BgL_ez00_4682;

				obj_t BgL_slidez00_4683;

				BgL_inputzd2portzd2_4668 =
					PROCEDURE_REF(BgL_envz00_4667, (int) (((long) 0)));
				BgL_blz00_4669 = PROCEDURE_REF(BgL_envz00_4667, (int) (((long) 1)));
				BgL_bbz00_4670 = PROCEDURE_REF(BgL_envz00_4667, (int) (((long) 2)));
				BgL_mlz00_4671 = PROCEDURE_REF(BgL_envz00_4667, (int) (((long) 3)));
				BgL_tlz00_4672 = PROCEDURE_REF(BgL_envz00_4667, (int) (((long) 4)));
				BgL_tz00_4673 = PROCEDURE_REF(BgL_envz00_4667, (int) (((long) 5)));
				BgL_bkz00_4674 = PROCEDURE_REF(BgL_envz00_4667, (int) (((long) 6)));
				BgL_bdz00_4675 = PROCEDURE_REF(BgL_envz00_4667, (int) (((long) 7)));
				BgL_mdz00_4676 = PROCEDURE_REF(BgL_envz00_4667, (int) (((long) 8)));
				BgL_tdz00_4677 = PROCEDURE_REF(BgL_envz00_4667, (int) (((long) 9)));
				BgL_wsiza7eza7_4678 =
					PROCEDURE_REF(BgL_envz00_4667, (int) (((long) 10)));
				BgL_dz00_4679 = PROCEDURE_REF(BgL_envz00_4667, (int) (((long) 11)));
				BgL_nz00_4680 = PROCEDURE_REF(BgL_envz00_4667, (int) (((long) 12)));
				BgL_wpz00_4681 = PROCEDURE_REF(BgL_envz00_4667, (int) (((long) 13)));
				BgL_ez00_4682 = PROCEDURE_REF(BgL_envz00_4667, (int) (((long) 14)));
				BgL_slidez00_4683 = PROCEDURE_REF(BgL_envz00_4667, (int) (((long) 15)));
				{

					return
						BGl_z52dozd2copy2z80zz__gunza7ipza7(BgL_slidez00_4683,
						BgL_ez00_4682, BgL_wpz00_4681, BgL_nz00_4680, BgL_dz00_4679,
						BgL_wsiza7eza7_4678, BgL_tdz00_4677, BgL_mdz00_4676, BgL_bdz00_4675,
						BgL_bkz00_4674, BgL_tz00_4673, BgL_tlz00_4672, BgL_mlz00_4671,
						BgL_bbz00_4670, BgL_blz00_4669, BgL_inputzd2portzd2_4668);
				}
			}
		}
	}



/* <anonymous:2209> */
	obj_t BGl_zc3anonymousza32209ze3z83zz__gunza7ipza7(obj_t BgL_envz00_4684,
		obj_t BgL_iz00_4685)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 479 */
			{
				obj_t BgL_iz00_1296;

				{	/* Unsafe/gunzip.scm 480 */
					BgL_huftz00_bglt BgL_auxz00_6803;

					BgL_iz00_1296 = BgL_iz00_4685;
					{	/* Unsafe/gunzip.scm 480 */
						BgL_huftz00_bglt BgL_res2920z00_2927;

						{	/* Unsafe/gunzip.scm 480 */
							obj_t BgL_v1835z00_2912;

							BgL_v1835z00_2912 = BINT(((long) 0));
							{	/* Unsafe/gunzip.scm 480 */
								BgL_huftz00_bglt BgL_new1836z00_2913;

								{	/* Unsafe/gunzip.scm 480 */
									BgL_huftz00_bglt BgL_res2918z00_2918;

									{	/* Unsafe/gunzip.scm 480 */
										BgL_huftz00_bglt BgL_new1846z00_2914;

										BgL_new1846z00_2914 =
											((BgL_huftz00_bglt) BREF(GC_MALLOC(sizeof(struct
														BgL_huftz00_bgl))));
										BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
											(BgL_new1846z00_2914),
											BGl_classzd2numzd2zz__objectz00
											(BGl_huftz00zz__gunza7ipza7));
										{	/* Unsafe/gunzip.scm 480 */
											BgL_objectz00_bglt BgL_auxz00_6809;

											BgL_auxz00_6809 =
												(BgL_objectz00_bglt) (BgL_new1846z00_2914);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_6809, BFALSE);
										}
										BgL_res2918z00_2918 = BgL_new1846z00_2914;
									}
									BgL_new1836z00_2913 = BgL_res2918z00_2918;
								}
								{	/* Unsafe/gunzip.scm 480 */
									BgL_huftz00_bglt BgL_res2919z00_2926;

									{	/* Unsafe/gunzip.scm 480 */
										BgL_huftz00_bglt BgL_new1841z00_2919;

										BgL_new1841z00_2919 = BgL_new1836z00_2913;
										{	/* Unsafe/gunzip.scm 480 */
											long BgL_e1838z00_2923;

											long BgL_b1839z00_2924;

											obj_t BgL_v1840z00_2925;

											BgL_e1838z00_2923 = ((long) 0);
											BgL_b1839z00_2924 = ((long) 0);
											BgL_v1840z00_2925 = BgL_v1835z00_2912;
											((((BgL_huftz00_bglt) CREF(BgL_new1841z00_2919))->
													BgL_ez00) = ((long) BgL_e1838z00_2923), BUNSPEC);
											((((BgL_huftz00_bglt) CREF(BgL_new1841z00_2919))->
													BgL_bz00) = ((long) BgL_b1839z00_2924), BUNSPEC);
											((((BgL_huftz00_bglt) CREF(BgL_new1841z00_2919))->
													BgL_vz00) = ((obj_t) BgL_v1840z00_2925), BUNSPEC);
											BgL_res2919z00_2926 = BgL_new1841z00_2919;
									}} BgL_res2919z00_2926;
								}
								BgL_res2920z00_2927 = BgL_new1836z00_2913;
						}}
						BgL_auxz00_6803 = BgL_res2920z00_2927;
					}
					return (obj_t) (BgL_auxz00_6803);
				}
			}
		}
	}



/* gunzip-parse-header */
	BGL_EXPORTED_DEF obj_t BGl_gunza7ipzd2parsezd2headerza7zz__gunza7ipza7(obj_t
		BgL_inz00_18)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 909 */
			{	/* Unsafe/gunzip.scm 910 */
				obj_t BgL_bufz00_1792;

				BgL_bufz00_1792 = make_string(((long) 4), ((unsigned char) ' '));
				{

					{	/* Unsafe/gunzip.scm 924 */
						obj_t BgL_headerz00_1796;

						BgL_headerz00_1796 =
							BGl_readzd2charszd2zz__r4_input_6_10_2z00(BINT(((long) 2)),
							BgL_inz00_18);
						{	/* Unsafe/gunzip.scm 925 */
							bool_t BgL_testz00_6819;

							if (STRINGP(BgL_headerz00_1796))
								{	/* Unsafe/gunzip.scm 925 */
									if ((STRING_LENGTH(BgL_headerz00_1796) == ((long) 2)))
										{	/* Unsafe/gunzip.scm 926 */
											if (
												((STRING_REF(BgL_headerz00_1796,
															((long) 0))) == ((long) 31)))
												{	/* Unsafe/gunzip.scm 927 */
													BgL_testz00_6819 =
														(
														(STRING_REF(BgL_headerz00_1796,
																((long) 1))) == ((long) 139));
												}
											else
												{	/* Unsafe/gunzip.scm 927 */
													BgL_testz00_6819 = ((bool_t) 0);
												}
										}
									else
										{	/* Unsafe/gunzip.scm 926 */
											BgL_testz00_6819 = ((bool_t) 0);
										}
								}
							else
								{	/* Unsafe/gunzip.scm 925 */
									BgL_testz00_6819 = ((bool_t) 0);
								}
							if (BgL_testz00_6819)
								{	/* Unsafe/gunzip.scm 925 */
									BFALSE;
								}
							else
								{	/* Unsafe/gunzip.scm 929 */
									obj_t BgL_arg2525z00_1799;

									{	/* Unsafe/gunzip.scm 930 */
										obj_t BgL_list2526z00_1800;

										BgL_list2526z00_1800 = MAKE_PAIR(BgL_headerz00_1796, BNIL);
										BgL_arg2525z00_1799 =
											BGl_formatz00zz__r4_output_6_10_3z00
											(BGl_string3082z00zz__gunza7ipza7, BgL_list2526z00_1800);
									}
									{	/* Unsafe/gunzip.scm 929 */
										BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2072z00_3607;

										{	/* Unsafe/gunzip.scm 929 */
											obj_t BgL_arg2073z00_3608;

											{	/* Unsafe/gunzip.scm 929 */

												{	/* Unsafe/gunzip.scm 929 */

													BgL_arg2073z00_3608 =
														BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
												}
											}
											BgL_arg2072z00_3607 =
												BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(BFALSE,
												BFALSE, BgL_arg2073z00_3608,
												BGl_string3083z00zz__gunza7ipza7, BgL_arg2525z00_1799,
												BgL_inz00_18);
										}
										BGl_raisez00zz__errorz00((obj_t) (BgL_arg2072z00_3607));
									}
								}
						}
					}
					{	/* Unsafe/gunzip.scm 932 */
						obj_t BgL_compressionzd2typezd2_1812;

						BgL_compressionzd2typezd2_1812 =
							BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_inz00_18);
						if ((BgL_compressionzd2typezd2_1812 == BCHAR(((unsigned char) ''))))
							{	/* Unsafe/gunzip.scm 933 */
								BFALSE;
							}
						else
							{	/* Unsafe/gunzip.scm 934 */
								obj_t BgL_arg2540z00_1815;

								{	/* Unsafe/gunzip.scm 935 */
									obj_t BgL_list2541z00_1816;

									BgL_list2541z00_1816 =
										MAKE_PAIR(BgL_compressionzd2typezd2_1812, BNIL);
									BgL_arg2540z00_1815 =
										BGl_formatz00zz__r4_output_6_10_3z00
										(BGl_string3084z00zz__gunza7ipza7, BgL_list2541z00_1816);
								}
								{	/* Unsafe/gunzip.scm 934 */
									BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2072z00_3613;

									{	/* Unsafe/gunzip.scm 934 */
										obj_t BgL_arg2073z00_3614;

										{	/* Unsafe/gunzip.scm 934 */

											{	/* Unsafe/gunzip.scm 934 */

												BgL_arg2073z00_3614 =
													BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
											}
										}
										BgL_arg2072z00_3613 =
											BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(BFALSE,
											BFALSE, BgL_arg2073z00_3614,
											BGl_string3083z00zz__gunza7ipza7, BgL_arg2540z00_1815,
											BgL_inz00_18);
									}
									BGl_raisez00zz__errorz00((obj_t) (BgL_arg2072z00_3613));
								}
							}
					}
					{	/* Unsafe/gunzip.scm 938 */
						long BgL_flagsz00_1817;

						{	/* Unsafe/gunzip.scm 938 */
							obj_t BgL_arg2554z00_1850;

							BgL_arg2554z00_1850 =
								BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_inz00_18);
							BgL_flagsz00_1817 = (CCHAR(BgL_arg2554z00_1850));
						}
						{	/* Unsafe/gunzip.scm 939 */
							bool_t BgL_continuationzf3zf3_1819;

							BgL_continuationzf3zf3_1819 =
								BGl_positivezf3zf3zz__r4_numbers_6_5z00(BINT(
									(BgL_flagsz00_1817 & ((long) 2))));
							{	/* Unsafe/gunzip.scm 940 */
								bool_t BgL_haszd2extrazd2fieldzf3zf3_1820;

								BgL_haszd2extrazd2fieldzf3zf3_1820 =
									BGl_positivezf3zf3zz__r4_numbers_6_5z00(BINT(
										(BgL_flagsz00_1817 & ((long) 4))));
								{	/* Unsafe/gunzip.scm 941 */
									bool_t BgL_haszd2originalzd2filenamezf3zf3_1821;

									BgL_haszd2originalzd2filenamezf3zf3_1821 =
										BGl_positivezf3zf3zz__r4_numbers_6_5z00(BINT(
											(BgL_flagsz00_1817 & ((long) 8))));
									{	/* Unsafe/gunzip.scm 942 */
										bool_t BgL_haszd2commentzf3z21_1822;

										BgL_haszd2commentzf3z21_1822 =
											BGl_positivezf3zf3zz__r4_numbers_6_5z00(BINT(
												(BgL_flagsz00_1817 & ((long) 16))));
										{	/* Unsafe/gunzip.scm 943 */
											bool_t BgL_encryptedzf3zf3_1823;

											BgL_encryptedzf3zf3_1823 =
												BGl_positivezf3zf3zz__r4_numbers_6_5z00(BINT(
													(BgL_flagsz00_1817 & ((long) 32))));
											{	/* Unsafe/gunzip.scm 944 */

												if (BgL_encryptedzf3zf3_1823)
													{	/* Unsafe/gunzip.scm 946 */
														BgL_z62iozd2parsezd2errorz62_bglt
															BgL_arg2072z00_3632;
														{	/* Unsafe/gunzip.scm 946 */
															obj_t BgL_arg2073z00_3633;

															{	/* Unsafe/gunzip.scm 946 */

																{	/* Unsafe/gunzip.scm 946 */

																	BgL_arg2073z00_3633 =
																		BGl_getzd2tracezd2stackz00zz__errorz00
																		(BFALSE);
																}
															}
															BgL_arg2072z00_3632 =
																BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
																(BFALSE, BFALSE, BgL_arg2073z00_3633,
																BGl_string3083z00zz__gunza7ipza7,
																BGl_string3085z00zz__gunza7ipza7, BgL_inz00_18);
														}
														BGl_raisez00zz__errorz00(
															(obj_t) (BgL_arg2072z00_3632));
													}
												else
													{	/* Unsafe/gunzip.scm 945 */
														BFALSE;
													}
												if (BgL_continuationzf3zf3_1819)
													{	/* Unsafe/gunzip.scm 948 */
														BgL_z62iozd2parsezd2errorz62_bglt
															BgL_arg2072z00_3638;
														{	/* Unsafe/gunzip.scm 948 */
															obj_t BgL_arg2073z00_3639;

															{	/* Unsafe/gunzip.scm 948 */

																{	/* Unsafe/gunzip.scm 948 */

																	BgL_arg2073z00_3639 =
																		BGl_getzd2tracezd2stackz00zz__errorz00
																		(BFALSE);
																}
															}
															BgL_arg2072z00_3638 =
																BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
																(BFALSE, BFALSE, BgL_arg2073z00_3639,
																BGl_string3083z00zz__gunza7ipza7,
																BGl_string3086z00zz__gunza7ipza7, BgL_inz00_18);
														}
														BGl_raisez00zz__errorz00(
															(obj_t) (BgL_arg2072z00_3638));
													}
												else
													{	/* Unsafe/gunzip.scm 947 */
														BFALSE;
													}
												{	/* Unsafe/gunzip.scm 949 */
													long BgL_unixzd2modzd2timez00_1824;

													BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00
														(BgL_bufz00_1792, BINT(((long) 4)), BgL_inz00_18);
													{	/* Unsafe/gunzip.scm 916 */
														unsigned char BgL_arg2560z00_1856;

														unsigned char BgL_arg2561z00_1857;

														unsigned char BgL_arg2562z00_1858;

														unsigned char BgL_arg2563z00_1859;

														BgL_arg2560z00_1856 =
															STRING_REF(BgL_bufz00_1792, ((long) 0));
														BgL_arg2561z00_1857 =
															STRING_REF(BgL_bufz00_1792, ((long) 1));
														BgL_arg2562z00_1858 =
															STRING_REF(BgL_bufz00_1792, ((long) 2));
														BgL_arg2563z00_1859 =
															STRING_REF(BgL_bufz00_1792, ((long) 3));
														{	/* Unsafe/gunzip.scm 916 */
															long BgL_arg2507z00_3703;

															long BgL_arg2508z00_3704;

															{	/* Unsafe/gunzip.scm 916 */
																long BgL_auxz00_6882;

																BgL_auxz00_6882 = (BgL_arg2560z00_1856);
																BgL_arg2507z00_3703 =
																	LONG_TO_ELONG(BgL_auxz00_6882);
															}
															{	/* Unsafe/gunzip.scm 916 */
																long BgL_arg2510z00_3706;

																long BgL_arg2511z00_3707;

																{	/* Unsafe/gunzip.scm 916 */
																	long BgL_arg2512z00_3708;

																	{	/* Unsafe/gunzip.scm 916 */
																		long BgL_auxz00_6885;

																		BgL_auxz00_6885 = (BgL_arg2561z00_1857);
																		BgL_arg2512z00_3708 =
																			LONG_TO_ELONG(BgL_auxz00_6885);
																	}
																	BgL_arg2510z00_3706 =
																		(BgL_arg2512z00_3708 << (int) (((long) 8)));
																}
																{	/* Unsafe/gunzip.scm 916 */
																	long BgL_arg2515z00_3711;

																	long BgL_arg2516z00_3712;

																	{	/* Unsafe/gunzip.scm 916 */
																		long BgL_arg2517z00_3713;

																		{	/* Unsafe/gunzip.scm 916 */
																			long BgL_auxz00_6890;

																			BgL_auxz00_6890 = (BgL_arg2562z00_1858);
																			BgL_arg2517z00_3713 =
																				LONG_TO_ELONG(BgL_auxz00_6890);
																		}
																		BgL_arg2515z00_3711 =
																			(BgL_arg2517z00_3713 <<
																			(int) (((long) 16)));
																	}
																	{	/* Unsafe/gunzip.scm 916 */
																		long BgL_arg2520z00_3716;

																		{	/* Unsafe/gunzip.scm 916 */
																			long BgL_auxz00_6895;

																			BgL_auxz00_6895 = (BgL_arg2563z00_1859);
																			BgL_arg2520z00_3716 =
																				LONG_TO_ELONG(BgL_auxz00_6895);
																		}
																		BgL_arg2516z00_3712 =
																			(BgL_arg2520z00_3716 <<
																			(int) (((long) 24)));
																	}
																	BgL_arg2511z00_3707 =
																		(BgL_arg2515z00_3711 | BgL_arg2516z00_3712);
																}
																BgL_arg2508z00_3704 =
																	(BgL_arg2510z00_3706 | BgL_arg2511z00_3707);
															}
															BgL_unixzd2modzd2timez00_1824 =
																(BgL_arg2507z00_3703 | BgL_arg2508z00_3704);
													}}
													{	/* Unsafe/gunzip.scm 949 */
														obj_t BgL_extrazd2flagszd2_1825;

														BgL_extrazd2flagszd2_1825 =
															BGl_readzd2charzd2zz__r4_input_6_10_2z00
															(BgL_inz00_18);
														{	/* Unsafe/gunzip.scm 950 */
															obj_t BgL_sourcezd2oszd2_1826;

															BgL_sourcezd2oszd2_1826 =
																BGl_readzd2charzd2zz__r4_input_6_10_2z00
																(BgL_inz00_18);
															{	/* Unsafe/gunzip.scm 951 */

																if (BgL_continuationzf3zf3_1819)
																	{	/* Unsafe/gunzip.scm 952 */
																		BINT(BGl_readzd2int2zd2zz__gunza7ipza7
																			(BgL_inz00_18, BgL_bufz00_1792));
																	}
																else
																	{	/* Unsafe/gunzip.scm 952 */
																		BFALSE;
																	}
																if (BgL_haszd2extrazd2fieldzf3zf3_1820)
																	{	/* Unsafe/gunzip.scm 955 */
																		long BgL_lenz00_1827;

																		BgL_lenz00_1827 =
																			BGl_readzd2int2zd2zz__gunza7ipza7
																			(BgL_inz00_18, BgL_bufz00_1792);
																		{
																			long BgL_lenz00_3642;

																			BgL_lenz00_3642 = BgL_lenz00_1827;
																		BgL_loopz00_3641:
																			if (BGl_za7erozf3z54zz__r4_numbers_6_5z00
																				(BINT(BgL_lenz00_3642)))
																				{	/* Unsafe/gunzip.scm 956 */
																					((bool_t) 0);
																				}
																			else
																				{	/* Unsafe/gunzip.scm 956 */
																					BGl_readzd2charzd2zz__r4_input_6_10_2z00
																						(BgL_inz00_18);
																					{
																						long BgL_lenz00_6914;

																						BgL_lenz00_6914 =
																							(BgL_lenz00_3642 - ((long) 1));
																						BgL_lenz00_3642 = BgL_lenz00_6914;
																						goto BgL_loopz00_3641;
																					}
																				}
																		}
																	}
																else
																	{	/* Unsafe/gunzip.scm 954 */
																		((bool_t) 0);
																	}
																{	/* Unsafe/gunzip.scm 960 */
																	obj_t BgL_originalzd2filenamezd2_1834;

																	if (BgL_haszd2originalzd2filenamezf3zf3_1821)
																		{	/* Unsafe/gunzip.scm 960 */
																			BgL_originalzd2filenamezd2_1834 =
																				BGl_readzd2nullzd2termzd2stringzd2zz__gunza7ipza7
																				(BgL_inz00_18);
																		}
																	else
																		{	/* Unsafe/gunzip.scm 960 */
																			BgL_originalzd2filenamezd2_1834 = BFALSE;
																		}
																	{	/* Unsafe/gunzip.scm 960 */
																		obj_t BgL_commentz00_1835;

																		if (BgL_haszd2commentzf3z21_1822)
																			{	/* Unsafe/gunzip.scm 962 */
																				BgL_commentz00_1835 =
																					BGl_readzd2nullzd2termzd2stringzd2zz__gunza7ipza7
																					(BgL_inz00_18);
																			}
																		else
																			{	/* Unsafe/gunzip.scm 962 */
																				BgL_commentz00_1835 = BFALSE;
																			}
																		{	/* Unsafe/gunzip.scm 962 */

																			if (BgL_encryptedzf3zf3_1823)
																				{
																					long BgL_nz00_3659;

																					{	/* Unsafe/gunzip.scm 964 */
																						bool_t BgL_auxz00_6921;

																						BgL_nz00_3659 = ((long) 12);
																					BgL_loopz00_3658:
																						if (BGl_za7erozf3z54zz__r4_numbers_6_5z00(BINT(BgL_nz00_3659)))
																							{	/* Unsafe/gunzip.scm 964 */
																								BgL_auxz00_6921 = ((bool_t) 0);
																							}
																						else
																							{	/* Unsafe/gunzip.scm 964 */
																								BGl_readzd2charzd2zz__r4_input_6_10_2z00
																									(BgL_inz00_18);
																								{
																									long BgL_nz00_6926;

																									BgL_nz00_6926 =
																										(BgL_nz00_3659 -
																										((long) 1));
																									BgL_nz00_3659 = BgL_nz00_6926;
																									goto BgL_loopz00_3658;
																								}
																							}
																						return BBOOL(BgL_auxz00_6921);
																					}
																				}
																			else
																				{	/* Unsafe/gunzip.scm 963 */
																					return BFALSE;
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



/* read-int2 */
	long BGl_readzd2int2zd2zz__gunza7ipza7(obj_t BgL_inz00_4788,
		obj_t BgL_bufz00_4787)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 912 */
			BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00(BgL_bufz00_4787,
				BINT(((long) 2)), BgL_inz00_4788);
			return
				(
				(STRING_REF(BgL_bufz00_4787, ((long) 0))) |
				((STRING_REF(BgL_bufz00_4787, ((long) 1))) << (int) (((long) 8))));
		}
	}



/* read-null-term-string */
	obj_t BGl_readzd2nullzd2termzd2stringzd2zz__gunza7ipza7(obj_t BgL_inz00_4789)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 923 */
			{
				obj_t BgL_sz00_1863;

				BgL_sz00_1863 = BNIL;
			BgL_zc3anonymousza32565ze3z83_1864:
				{	/* Unsafe/gunzip.scm 920 */
					obj_t BgL_rz00_1865;

					BgL_rz00_1865 =
						BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_inz00_4789);
					if ((((unsigned char) '\000') == CCHAR(BgL_rz00_1865)))
						{	/* Unsafe/gunzip.scm 921 */
							return
								BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(bgl_reverse_bang
								(BgL_sz00_1863));
						}
					else
						{	/* Unsafe/gunzip.scm 923 */
							obj_t BgL_arg2569z00_1868;

							BgL_arg2569z00_1868 = MAKE_PAIR(BgL_rz00_1865, BgL_sz00_1863);
							{
								obj_t BgL_sz00_6945;

								BgL_sz00_6945 = BgL_arg2569z00_1868;
								BgL_sz00_1863 = BgL_sz00_6945;
								goto BgL_zc3anonymousza32565ze3z83_1864;
							}
						}
				}
			}
		}
	}



/* _gunzip-parse-header */
	obj_t BGl__gunza7ipzd2parsezd2headerza7zz__gunza7ipza7(obj_t BgL_envz00_4693,
		obj_t BgL_inz00_4694)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 909 */
			return BGl_gunza7ipzd2parsezd2headerza7zz__gunza7ipza7(BgL_inz00_4694);
		}
	}



/* inflate */
	obj_t BGl_inflatez00zz__gunza7ipza7(obj_t BgL_inz00_19, obj_t BgL_outz00_20)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 972 */
			{	/* Unsafe/gunzip.scm 973 */
				obj_t BgL_bufferz00_1873;

				BgL_bufferz00_1873 = BUNSPEC;
				BgL_bufferz00_1873 = make_string(((long) 32768), ((unsigned char) ' '));
				{	/* Unsafe/gunzip.scm 974 */
					obj_t BgL_statez00_1874;

					BgL_statez00_1874 =
						BGl_inflatezd2entryzd2zz__gunza7ipza7(BgL_inz00_19,
						BgL_bufferz00_1873);
					{	/* Unsafe/gunzip.scm 976 */
						obj_t BgL_valz00_1875;

						obj_t BgL_kontz00_1876;

						{	/* Unsafe/gunzip.scm 976 */
							int BgL_auxz00_6949;

							BgL_auxz00_6949 = (int) (((long) 1));
							BgL_valz00_1875 = BGL_MVALUES_VAL(BgL_auxz00_6949);
						}
						{	/* Unsafe/gunzip.scm 976 */
							int BgL_auxz00_6952;

							BgL_auxz00_6952 = (int) (((long) 2));
							BgL_kontz00_1876 = BGL_MVALUES_VAL(BgL_auxz00_6952);
						}
						{
							obj_t BgL_statez00_1878;

							obj_t BgL_valz00_1879;

							obj_t BgL_kontz00_1880;

							long BgL_siza7eza7_1881;

							BgL_statez00_1878 = BgL_statez00_1874;
							BgL_valz00_1879 = BgL_valz00_1875;
							BgL_kontz00_1880 = BgL_kontz00_1876;
							BgL_siza7eza7_1881 = ((long) 0);
						BgL_zc3anonymousza32570ze3z83_1882:
							if ((BgL_statez00_1878 == BGl_symbol3047z00zz__gunza7ipza7))
								{	/* Unsafe/gunzip.scm 980 */
									{	/* Unsafe/gunzip.scm 982 */
										obj_t BgL_objz00_3752;

										long BgL_endz00_3754;

										BgL_objz00_3752 = BgL_bufferz00_1873;
										BgL_endz00_3754 = (long) CINT(BgL_valz00_1879);
										{	/* Unsafe/gunzip.scm 982 */
											bool_t BgL_testz00_6958;

											if ((BgL_endz00_3754 >= ((long) 0)))
												{	/* Unsafe/gunzip.scm 982 */
													bool_t BgL_testz00_6961;

													{	/* Unsafe/gunzip.scm 982 */
														long BgL_auxz00_6962;

														BgL_auxz00_6962 =
															(STRING_LENGTH(BgL_objz00_3752) + ((long) 1));
														BgL_testz00_6961 =
															BOUND_CHECK(BgL_endz00_3754, BgL_auxz00_6962);
													}
													if (BgL_testz00_6961)
														{	/* Unsafe/gunzip.scm 982 */
															BgL_testz00_6958 = (((long) 0) >= ((long) 0));
														}
													else
														{	/* Unsafe/gunzip.scm 982 */
															BgL_testz00_6958 = ((bool_t) 0);
														}
												}
											else
												{	/* Unsafe/gunzip.scm 982 */
													BgL_testz00_6958 = ((bool_t) 0);
												}
											if (BgL_testz00_6958)
												{	/* Unsafe/gunzip.scm 982 */
													bgl_display_substring(BgL_objz00_3752, ((long) 0),
														BgL_endz00_3754, BgL_outz00_20);
												}
											else
												{	/* Unsafe/gunzip.scm 982 */
													obj_t BgL_arg2886z00_3762;

													obj_t BgL_arg2887z00_3763;

													BgL_arg2886z00_3762 =
														BGl_symbol3087z00zz__gunza7ipza7;
													{	/* Unsafe/gunzip.scm 982 */
														obj_t BgL_list2888z00_3764;

														{	/* Unsafe/gunzip.scm 982 */
															obj_t BgL_arg2890z00_3765;

															BgL_arg2890z00_3765 =
																MAKE_PAIR(BINT(BgL_endz00_3754), BNIL);
															BgL_list2888z00_3764 =
																MAKE_PAIR(BINT(((long) 0)),
																BgL_arg2890z00_3765);
														}
														BgL_arg2887z00_3763 =
															BGl_formatz00zz__r4_output_6_10_3z00
															(BGl_string3089z00zz__gunza7ipza7,
															BgL_list2888z00_3764);
													}
													BGl_errorz00zz__errorz00(BgL_arg2886z00_3762,
														BgL_arg2887z00_3763, BgL_objz00_3752);
									}}}
									BgL_bufferz00_1873 = BFALSE;
									return
										BINT((BgL_siza7eza7_1881 + (long) CINT(BgL_valz00_1879)));
								}
							else
								{	/* Unsafe/gunzip.scm 980 */
									if ((BgL_statez00_1878 == BGl_symbol3051z00zz__gunza7ipza7))
										{	/* Unsafe/gunzip.scm 980 */
											{	/* Unsafe/gunzip.scm 986 */
												obj_t BgL_objz00_3777;

												long BgL_endz00_3779;

												BgL_objz00_3777 = BgL_bufferz00_1873;
												BgL_endz00_3779 = (long) CINT(BgL_valz00_1879);
												{	/* Unsafe/gunzip.scm 986 */
													bool_t BgL_testz00_6980;

													if ((BgL_endz00_3779 >= ((long) 0)))
														{	/* Unsafe/gunzip.scm 986 */
															bool_t BgL_testz00_6983;

															{	/* Unsafe/gunzip.scm 986 */
																long BgL_auxz00_6984;

																BgL_auxz00_6984 =
																	(STRING_LENGTH(BgL_objz00_3777) + ((long) 1));
																BgL_testz00_6983 =
																	BOUND_CHECK(BgL_endz00_3779, BgL_auxz00_6984);
															}
															if (BgL_testz00_6983)
																{	/* Unsafe/gunzip.scm 986 */
																	BgL_testz00_6980 = (((long) 0) >= ((long) 0));
																}
															else
																{	/* Unsafe/gunzip.scm 986 */
																	BgL_testz00_6980 = ((bool_t) 0);
																}
														}
													else
														{	/* Unsafe/gunzip.scm 986 */
															BgL_testz00_6980 = ((bool_t) 0);
														}
													if (BgL_testz00_6980)
														{	/* Unsafe/gunzip.scm 986 */
															bgl_display_substring(BgL_objz00_3777, ((long) 0),
																BgL_endz00_3779, BgL_outz00_20);
														}
													else
														{	/* Unsafe/gunzip.scm 986 */
															obj_t BgL_arg2886z00_3787;

															obj_t BgL_arg2887z00_3788;

															BgL_arg2886z00_3787 =
																BGl_symbol3087z00zz__gunza7ipza7;
															{	/* Unsafe/gunzip.scm 986 */
																obj_t BgL_list2888z00_3789;

																{	/* Unsafe/gunzip.scm 986 */
																	obj_t BgL_arg2890z00_3790;

																	BgL_arg2890z00_3790 =
																		MAKE_PAIR(BINT(BgL_endz00_3779), BNIL);
																	BgL_list2888z00_3789 =
																		MAKE_PAIR(BINT(((long) 0)),
																		BgL_arg2890z00_3790);
																}
																BgL_arg2887z00_3788 =
																	BGl_formatz00zz__r4_output_6_10_3z00
																	(BGl_string3089z00zz__gunza7ipza7,
																	BgL_list2888z00_3789);
															}
															BGl_errorz00zz__errorz00(BgL_arg2886z00_3787,
																BgL_arg2887z00_3788, BgL_objz00_3777);
											}}}
											{	/* Unsafe/gunzip.scm 987 */
												obj_t BgL_state2z00_1886;

												BgL_state2z00_1886 =
													PROCEDURE_ENTRY(BgL_kontz00_1880) (BgL_kontz00_1880,
													BEOA);
												{	/* Unsafe/gunzip.scm 989 */
													obj_t BgL_val2z00_1887;

													obj_t BgL_kont2z00_1888;

													{	/* Unsafe/gunzip.scm 989 */
														int BgL_auxz00_6998;

														BgL_auxz00_6998 = (int) (((long) 1));
														BgL_val2z00_1887 = BGL_MVALUES_VAL(BgL_auxz00_6998);
													}
													{	/* Unsafe/gunzip.scm 989 */
														int BgL_auxz00_7001;

														BgL_auxz00_7001 = (int) (((long) 2));
														BgL_kont2z00_1888 =
															BGL_MVALUES_VAL(BgL_auxz00_7001);
													}
													{
														long BgL_siza7eza7_7007;

														obj_t BgL_kontz00_7006;

														obj_t BgL_valz00_7005;

														obj_t BgL_statez00_7004;

														BgL_statez00_7004 = BgL_state2z00_1886;
														BgL_valz00_7005 = BgL_val2z00_1887;
														BgL_kontz00_7006 = BgL_kont2z00_1888;
														BgL_siza7eza7_7007 =
															(
															(long) CINT(BgL_valz00_1879) +
															BgL_siza7eza7_1881);
														BgL_siza7eza7_1881 = BgL_siza7eza7_7007;
														BgL_kontz00_1880 = BgL_kontz00_7006;
														BgL_valz00_1879 = BgL_valz00_7005;
														BgL_statez00_1878 = BgL_statez00_7004;
														goto BgL_zc3anonymousza32570ze3z83_1882;
													}
												}
											}
										}
									else
										{	/* Unsafe/gunzip.scm 980 */
											return BUNSPEC;
										}
								}
						}
					}
				}
			}
		}
	}



/* gunzip-sendchars */
	BGL_EXPORTED_DEF obj_t BGl_gunza7ipzd2sendcharsz75zz__gunza7ipza7(obj_t
		BgL_inz00_23, obj_t BgL_outz00_24)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1001 */
			{	/* Unsafe/gunzip.scm 1002 */
				obj_t BgL_arg2576z00_3802;

				BgL_arg2576z00_3802 = BGL_INPUT_GZIP_PORT_INPUT_PORT(BgL_inz00_23);
				BGl_gunza7ipzd2parsezd2headerza7zz__gunza7ipza7(BgL_arg2576z00_3802);
				return
					BGl_inflatez00zz__gunza7ipza7(BgL_arg2576z00_3802, BgL_outz00_24);
			}
		}
	}



/* _gunzip-sendchars */
	obj_t BGl__gunza7ipzd2sendcharsz75zz__gunza7ipza7(obj_t BgL_envz00_4695,
		obj_t BgL_inz00_4696, obj_t BgL_outz00_4697)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1001 */
			{	/* Unsafe/gunzip.scm 1002 */
				obj_t BgL_auxz00_7020;

				obj_t BgL_auxz00_7013;

				if (OUTPUT_PORTP(BgL_outz00_4697))
					{	/* Unsafe/gunzip.scm 1002 */
						BgL_auxz00_7020 = BgL_outz00_4697;
					}
				else
					{
						obj_t BgL_auxz00_7023;

						BgL_auxz00_7023 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3090z00zz__gunza7ipza7,
							BINT(((long) 34583)), BGl_string3091z00zz__gunza7ipza7,
							BGl_string3093z00zz__gunza7ipza7, BgL_outz00_4697);
						FAILURE(BgL_auxz00_7023, BFALSE, BFALSE);
					}
				if (INPUT_PORTP(BgL_inz00_4696))
					{	/* Unsafe/gunzip.scm 1002 */
						BgL_auxz00_7013 = BgL_inz00_4696;
					}
				else
					{
						obj_t BgL_auxz00_7016;

						BgL_auxz00_7016 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3090z00zz__gunza7ipza7,
							BINT(((long) 34583)), BGl_string3091z00zz__gunza7ipza7,
							BGl_string3092z00zz__gunza7ipza7, BgL_inz00_4696);
						FAILURE(BgL_auxz00_7016, BFALSE, BFALSE);
					}
				return
					BGl_gunza7ipzd2sendcharsz75zz__gunza7ipza7(BgL_auxz00_7013,
					BgL_auxz00_7020);
			}
		}
	}



/* inflate-sendchars */
	BGL_EXPORTED_DEF obj_t BGl_inflatezd2sendcharszd2zz__gunza7ipza7(obj_t
		BgL_inz00_25, obj_t BgL_outz00_26)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1007 */
			{	/* Unsafe/gunzip.scm 1008 */
				obj_t BgL_arg2577z00_3805;

				BgL_arg2577z00_3805 = BGL_INPUT_GZIP_PORT_INPUT_PORT(BgL_inz00_25);
				return
					BGl_inflatez00zz__gunza7ipza7(BgL_arg2577z00_3805, BgL_outz00_26);
			}
		}
	}



/* _inflate-sendchars */
	obj_t BGl__inflatezd2sendcharszd2zz__gunza7ipza7(obj_t BgL_envz00_4698,
		obj_t BgL_inz00_4699, obj_t BgL_outz00_4700)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1007 */
			{	/* Unsafe/gunzip.scm 1008 */
				obj_t BgL_auxz00_7037;

				obj_t BgL_auxz00_7030;

				if (OUTPUT_PORTP(BgL_outz00_4700))
					{	/* Unsafe/gunzip.scm 1008 */
						BgL_auxz00_7037 = BgL_outz00_4700;
					}
				else
					{
						obj_t BgL_auxz00_7040;

						BgL_auxz00_7040 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3090z00zz__gunza7ipza7,
							BINT(((long) 34918)), BGl_string3094z00zz__gunza7ipza7,
							BGl_string3093z00zz__gunza7ipza7, BgL_outz00_4700);
						FAILURE(BgL_auxz00_7040, BFALSE, BFALSE);
					}
				if (INPUT_PORTP(BgL_inz00_4699))
					{	/* Unsafe/gunzip.scm 1008 */
						BgL_auxz00_7030 = BgL_inz00_4699;
					}
				else
					{
						obj_t BgL_auxz00_7033;

						BgL_auxz00_7033 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3090z00zz__gunza7ipza7,
							BINT(((long) 34918)), BGl_string3094z00zz__gunza7ipza7,
							BGl_string3092z00zz__gunza7ipza7, BgL_inz00_4699);
						FAILURE(BgL_auxz00_7033, BFALSE, BFALSE);
					}
				return
					BGl_inflatezd2sendcharszd2zz__gunza7ipza7(BgL_auxz00_7030,
					BgL_auxz00_7037);
			}
		}
	}



/* port->port */
	obj_t BGl_portzd2ze3portz31zz__gunza7ipza7(obj_t BgL_inz00_35,
		obj_t BgL_statez00_36, obj_t BgL_bufinfoz00_37, long BgL_bufsiza7eza7_38,
		obj_t BgL_oncompletez00_39)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1029 */
			{	/* Unsafe/gunzip.scm 1030 */
				obj_t BgL_bufferz00_1897;

				obj_t BgL_statez00_1898;

				obj_t BgL_kontz00_1899;

				{	/* Unsafe/gunzip.scm 1030 */
					obj_t BgL_cellvalz00_7045;

					BgL_cellvalz00_7045 =
						make_string(BgL_bufsiza7eza7_38, ((unsigned char) ' '));
					BgL_bufferz00_1897 = MAKE_CELL(BgL_cellvalz00_7045);
				}
				BgL_statez00_1898 = MAKE_CELL(BgL_statez00_36);
				BgL_kontz00_1899 = MAKE_CELL(BUNSPEC);
				{	/* Unsafe/gunzip.scm 1034 */
					obj_t BgL_arg2581z00_1901;

					BgL_arg2581z00_1901 =
						BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(CELL_REF
						(BgL_statez00_1898), BgL_bufinfoz00_37, default_io_bufsiz);
					{	/* Unsafe/gunzip.scm 1036 */
						obj_t BgL_zc3anonymousza32582ze3z83_4701;

						BgL_zc3anonymousza32582ze3z83_4701 =
							make_fx_procedure(BGl_zc3anonymousza32582ze3z83zz__gunza7ipza7,
							(int) (((long) 0)), (int) (((long) 6)));
						PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_4701,
							(int) (((long) 0)), BgL_statez00_1898);
						PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_4701,
							(int) (((long) 1)), BgL_inz00_35);
						PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_4701,
							(int) (((long) 2)), BgL_bufferz00_1897);
						PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_4701,
							(int) (((long) 3)), BgL_kontz00_1899);
						PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_4701,
							(int) (((long) 4)), BINT(BgL_bufsiza7eza7_38));
						PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_4701,
							(int) (((long) 5)), BgL_oncompletez00_39);
						return
							bgl_open_input_gzip_port(BgL_zc3anonymousza32582ze3z83_4701,
							BgL_inz00_35, BgL_arg2581z00_1901);
					}
				}
			}
		}
	}



/* <anonymous:2582> */
	obj_t BGl_zc3anonymousza32582ze3z83zz__gunza7ipza7(obj_t BgL_envz00_4702)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1034 */
			{	/* Unsafe/gunzip.scm 1036 */
				obj_t BgL_statez00_4703;

				obj_t BgL_inz00_4704;

				obj_t BgL_bufferz00_4705;

				obj_t BgL_kontz00_4706;

				obj_t BgL_bufsiza7eza7_4707;

				obj_t BgL_oncompletez00_4708;

				BgL_statez00_4703 = PROCEDURE_REF(BgL_envz00_4702, (int) (((long) 0)));
				BgL_inz00_4704 = PROCEDURE_REF(BgL_envz00_4702, (int) (((long) 1)));
				BgL_bufferz00_4705 = PROCEDURE_REF(BgL_envz00_4702, (int) (((long) 2)));
				BgL_kontz00_4706 = PROCEDURE_REF(BgL_envz00_4702, (int) (((long) 3)));
				BgL_bufsiza7eza7_4707 =
					PROCEDURE_REF(BgL_envz00_4702, (int) (((long) 4)));
				BgL_oncompletez00_4708 =
					PROCEDURE_REF(BgL_envz00_4702, (int) (((long) 5)));
				{

					{
						obj_t BgL_valz00_1904;

						BgL_valz00_1904 = BINT(((long) 0));
					BgL_zc3anonymousza32583ze3z83_1905:
						{	/* Unsafe/gunzip.scm 1036 */
							obj_t BgL_casezd2valuezd2_1906;

							BgL_casezd2valuezd2_1906 = CELL_REF(BgL_statez00_4703);
							if (
								(BgL_casezd2valuezd2_1906 == BGl_symbol3095z00zz__gunza7ipza7))
								{	/* Unsafe/gunzip.scm 1036 */
									if (PROCEDUREP(BgL_oncompletez00_4708))
										{	/* Unsafe/gunzip.scm 1038 */
											PROCEDURE_ENTRY(BgL_oncompletez00_4708)
												(BgL_oncompletez00_4708, BgL_inz00_4704,
												CELL_REF(BgL_bufferz00_4705), BEOA);
										}
									else
										{	/* Unsafe/gunzip.scm 1038 */
											BFALSE;
										}
									CELL_SET(BgL_bufferz00_4705, BFALSE);
									return BFALSE;
								}
							else
								{	/* Unsafe/gunzip.scm 1036 */
									if (
										(BgL_casezd2valuezd2_1906 ==
											BGl_symbol3047z00zz__gunza7ipza7))
										{	/* Unsafe/gunzip.scm 1036 */
											{	/* Unsafe/gunzip.scm 1043 */
												obj_t BgL_auxz00_4710;

												BgL_auxz00_4710 = BGl_symbol3095z00zz__gunza7ipza7;
												CELL_SET(BgL_statez00_4703, BgL_auxz00_4710);
											}
											{	/* Unsafe/gunzip.scm 1044 */
												obj_t BgL_bufferz00_3829;

												BgL_bufferz00_3829 = CELL_REF(BgL_bufferz00_4705);
												if (
													((long) CINT(BgL_valz00_1904) ==
														(long) CINT(BgL_bufsiza7eza7_4707)))
													{	/* Unsafe/gunzip.scm 1044 */
														return BgL_bufferz00_3829;
													}
												else
													{	/* Unsafe/gunzip.scm 1044 */
														long BgL_auxz00_7089;

														BgL_auxz00_7089 = (long) CINT(BgL_valz00_1904);
														return
															bgl_string_shrink(BgL_bufferz00_3829,
															BgL_auxz00_7089);
													}
											}
										}
									else
										{	/* Unsafe/gunzip.scm 1036 */
											if (
												(BgL_casezd2valuezd2_1906 ==
													BGl_symbol3051z00zz__gunza7ipza7))
												{	/* Unsafe/gunzip.scm 1036 */
													{	/* Unsafe/gunzip.scm 1046 */
														obj_t BgL_auxz00_4711;

														BgL_auxz00_4711 = BGl_symbol3097z00zz__gunza7ipza7;
														CELL_SET(BgL_statez00_4703, BgL_auxz00_4711);
													}
													{	/* Unsafe/gunzip.scm 1047 */
														obj_t BgL_bufferz00_3840;

														BgL_bufferz00_3840 = CELL_REF(BgL_bufferz00_4705);
														if (
															((long) CINT(BgL_valz00_1904) ==
																(long) CINT(BgL_bufsiza7eza7_4707)))
															{	/* Unsafe/gunzip.scm 1047 */
																return BgL_bufferz00_3840;
															}
														else
															{	/* Unsafe/gunzip.scm 1047 */
																return
																	c_substring(BgL_bufferz00_3840, ((long) 0),
																	(long) CINT(BgL_valz00_1904));
												}}}
											else
												{	/* Unsafe/gunzip.scm 1036 */
													if (
														(BgL_casezd2valuezd2_1906 ==
															BGl_symbol3097z00zz__gunza7ipza7))
														{	/* Unsafe/gunzip.scm 1049 */
															obj_t BgL_state2z00_1912;

															{	/* Unsafe/gunzip.scm 1050 */
																obj_t BgL_auxz00_7103;

																BgL_auxz00_7103 = CELL_REF(BgL_kontz00_4706);
																BgL_state2z00_1912 =
																	PROCEDURE_ENTRY(BgL_auxz00_7103) (CELL_REF
																	(BgL_kontz00_4706), BEOA);
															}
															{	/* Unsafe/gunzip.scm 1053 */
																obj_t BgL_val2z00_1913;

																obj_t BgL_kont2z00_1914;

																{	/* Unsafe/gunzip.scm 1053 */
																	int BgL_auxz00_7104;

																	BgL_auxz00_7104 = (int) (((long) 1));
																	BgL_val2z00_1913 =
																		BGL_MVALUES_VAL(BgL_auxz00_7104);
																}
																{	/* Unsafe/gunzip.scm 1053 */
																	int BgL_auxz00_7107;

																	BgL_auxz00_7107 = (int) (((long) 2));
																	BgL_kont2z00_1914 =
																		BGL_MVALUES_VAL(BgL_auxz00_7107);
																}
																CELL_SET(BgL_statez00_4703, BgL_state2z00_1912);
																CELL_SET(BgL_kontz00_4706, BgL_kont2z00_1914);
																{
																	obj_t BgL_valz00_7110;

																	BgL_valz00_7110 = BgL_val2z00_1913;
																	BgL_valz00_1904 = BgL_valz00_7110;
																	goto BgL_zc3anonymousza32583ze3z83_1905;
																}
															}
														}
													else
														{	/* Unsafe/gunzip.scm 1036 */
															if (
																(BgL_casezd2valuezd2_1906 ==
																	BGl_symbol3099z00zz__gunza7ipza7))
																{	/* Unsafe/gunzip.scm 1036 */
																	BGl_gunza7ipzd2parsezd2headerza7zz__gunza7ipza7
																		(BgL_inz00_4704);
																	{	/* Unsafe/gunzip.scm 1056 */
																		obj_t BgL_auxz00_4714;

																		BgL_auxz00_4714 =
																			BGl_symbol3101z00zz__gunza7ipza7;
																		CELL_SET(BgL_statez00_4703,
																			BgL_auxz00_4714);
																	}
																	{

																		goto BgL_zc3anonymousza32583ze3z83_1905;
																	}
																}
															else
																{	/* Unsafe/gunzip.scm 1036 */
																	if (
																		(BgL_casezd2valuezd2_1906 ==
																			BGl_symbol3101z00zz__gunza7ipza7))
																		{	/* Unsafe/gunzip.scm 1059 */
																			obj_t BgL_state0z00_1917;

																			BgL_state0z00_1917 =
																				BGl_inflatezd2entryzd2zz__gunza7ipza7
																				(BgL_inz00_4704,
																				CELL_REF(BgL_bufferz00_4705));
																			{	/* Unsafe/gunzip.scm 1063 */
																				obj_t BgL_val0z00_1918;

																				obj_t BgL_kont0z00_1919;

																				{	/* Unsafe/gunzip.scm 1063 */
																					int BgL_auxz00_7117;

																					BgL_auxz00_7117 = (int) (((long) 1));
																					BgL_val0z00_1918 =
																						BGL_MVALUES_VAL(BgL_auxz00_7117);
																				}
																				{	/* Unsafe/gunzip.scm 1063 */
																					int BgL_auxz00_7120;

																					BgL_auxz00_7120 = (int) (((long) 2));
																					BgL_kont0z00_1919 =
																						BGL_MVALUES_VAL(BgL_auxz00_7120);
																				}
																				CELL_SET(BgL_statez00_4703,
																					BgL_state0z00_1917);
																				CELL_SET(BgL_kontz00_4706,
																					BgL_kont0z00_1919);
																				{
																					obj_t BgL_valz00_7123;

																					BgL_valz00_7123 = BgL_val0z00_1918;
																					BgL_valz00_1904 = BgL_valz00_7123;
																					goto
																						BgL_zc3anonymousza32583ze3z83_1905;
																				}
																			}
																		}
																	else
																		{	/* Unsafe/gunzip.scm 1036 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_string3103z00zz__gunza7ipza7,
																				BGl_string3054z00zz__gunza7ipza7,
																				CELL_REF(BgL_statez00_4703));
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



/* _port->inflate-port */
	obj_t BGl__portzd2ze3inflatezd2portze3zz__gunza7ipza7(obj_t BgL_envz00_43,
		obj_t BgL_optz00_42)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1072 */
			{	/* Unsafe/gunzip.scm 1072 */
				obj_t BgL_g2002z00_1923;

				BgL_g2002z00_1923 = VECTOR_REF(BgL_optz00_42, (int) (((long) 0)));
				{	/* Unsafe/gunzip.scm 1072 */
					int BgL_aux2004z00_1925;

					BgL_aux2004z00_1925 = VECTOR_LENGTH(BgL_optz00_42);
					switch ((long) (BgL_aux2004z00_1925))
						{
						case ((long) 1):

							{	/* Unsafe/gunzip.scm 1072 */

								{	/* Unsafe/gunzip.scm 1072 */
									obj_t BgL_arg2593z00_1928;

									BgL_arg2593z00_1928 =
										VECTOR_REF(BgL_optz00_42, (int) (((long) 0)));
									{	/* Unsafe/gunzip.scm 1072 */
										obj_t BgL_res2942z00_3864;

										{	/* Unsafe/gunzip.scm 1072 */
											obj_t BgL_inz00_3860;

											if (INPUT_PORTP(BgL_arg2593z00_1928))
												{	/* Unsafe/gunzip.scm 1072 */
													BgL_inz00_3860 = BgL_arg2593z00_1928;
												}
											else
												{
													obj_t BgL_auxz00_7133;

													BgL_auxz00_7133 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3090z00zz__gunza7ipza7,
														BINT(((long) 37116)),
														BGl_string3104z00zz__gunza7ipza7,
														BGl_string3092z00zz__gunza7ipza7,
														BgL_arg2593z00_1928);
													FAILURE(BgL_auxz00_7133, BFALSE, BFALSE);
												}
											BgL_res2942z00_3864 =
												BGl_portzd2ze3portz31zz__gunza7ipza7(BgL_inz00_3860,
												BGl_symbol3101z00zz__gunza7ipza7, BTRUE, ((long) 32768),
												BFALSE);
										}
										return BgL_res2942z00_3864;
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Unsafe/gunzip.scm 1072 */
								obj_t BgL_bufinfoz00_1929;

								BgL_bufinfoz00_1929 =
									VECTOR_REF(BgL_optz00_42, (int) (((long) 1)));
								{	/* Unsafe/gunzip.scm 1072 */

									{	/* Unsafe/gunzip.scm 1072 */
										obj_t BgL_arg2594z00_1930;

										BgL_arg2594z00_1930 =
											VECTOR_REF(BgL_optz00_42, (int) (((long) 0)));
										{	/* Unsafe/gunzip.scm 1072 */
											obj_t BgL_res2943z00_3869;

											{	/* Unsafe/gunzip.scm 1072 */
												obj_t BgL_inz00_3865;

												if (INPUT_PORTP(BgL_arg2594z00_1930))
													{	/* Unsafe/gunzip.scm 1072 */
														BgL_inz00_3865 = BgL_arg2594z00_1930;
													}
												else
													{
														obj_t BgL_auxz00_7144;

														BgL_auxz00_7144 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3090z00zz__gunza7ipza7,
															BINT(((long) 37116)),
															BGl_string3104z00zz__gunza7ipza7,
															BGl_string3092z00zz__gunza7ipza7,
															BgL_arg2594z00_1930);
														FAILURE(BgL_auxz00_7144, BFALSE, BFALSE);
													}
												BgL_res2943z00_3869 =
													BGl_portzd2ze3portz31zz__gunza7ipza7(BgL_inz00_3865,
													BGl_symbol3101z00zz__gunza7ipza7, BgL_bufinfoz00_1929,
													((long) 32768), BFALSE);
											}
											return BgL_res2943z00_3869;
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



/* port->inflate-port */
	BGL_EXPORTED_DEF obj_t BGl_portzd2ze3inflatezd2portze3zz__gunza7ipza7(obj_t
		BgL_inz00_40, obj_t BgL_bufinfoz00_41)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1072 */
			return
				BGl_portzd2ze3portz31zz__gunza7ipza7(BgL_inz00_40,
				BGl_symbol3101z00zz__gunza7ipza7, BgL_bufinfoz00_41, ((long) 32768),
				BFALSE);
		}
	}



/* _port->gzip-port */
	obj_t BGl__portzd2ze3gza7ipzd2portz44zz__gunza7ipza7(obj_t BgL_envz00_47,
		obj_t BgL_optz00_46)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1078 */
			{	/* Unsafe/gunzip.scm 1078 */
				obj_t BgL_g2005z00_1933;

				BgL_g2005z00_1933 = VECTOR_REF(BgL_optz00_46, (int) (((long) 0)));
				{	/* Unsafe/gunzip.scm 1078 */
					int BgL_aux2007z00_1935;

					BgL_aux2007z00_1935 = VECTOR_LENGTH(BgL_optz00_46);
					switch ((long) (BgL_aux2007z00_1935))
						{
						case ((long) 1):

							{	/* Unsafe/gunzip.scm 1078 */

								{	/* Unsafe/gunzip.scm 1078 */
									obj_t BgL_arg2598z00_1938;

									BgL_arg2598z00_1938 =
										VECTOR_REF(BgL_optz00_46, (int) (((long) 0)));
									{	/* Unsafe/gunzip.scm 1078 */
										obj_t BgL_res2944z00_3876;

										{	/* Unsafe/gunzip.scm 1078 */
											obj_t BgL_inz00_3872;

											if (INPUT_PORTP(BgL_arg2598z00_1938))
												{	/* Unsafe/gunzip.scm 1078 */
													BgL_inz00_3872 = BgL_arg2598z00_1938;
												}
											else
												{
													obj_t BgL_auxz00_7159;

													BgL_auxz00_7159 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3090z00zz__gunza7ipza7,
														BINT(((long) 37495)),
														BGl_string3105z00zz__gunza7ipza7,
														BGl_string3092z00zz__gunza7ipza7,
														BgL_arg2598z00_1938);
													FAILURE(BgL_auxz00_7159, BFALSE, BFALSE);
												}
											BgL_res2944z00_3876 =
												BGl_portzd2ze3portz31zz__gunza7ipza7(BgL_inz00_3872,
												BGl_symbol3099z00zz__gunza7ipza7, BTRUE, ((long) 32768),
												BFALSE);
										}
										return BgL_res2944z00_3876;
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Unsafe/gunzip.scm 1078 */
								obj_t BgL_bufinfoz00_1939;

								BgL_bufinfoz00_1939 =
									VECTOR_REF(BgL_optz00_46, (int) (((long) 1)));
								{	/* Unsafe/gunzip.scm 1078 */

									{	/* Unsafe/gunzip.scm 1078 */
										obj_t BgL_arg2599z00_1940;

										BgL_arg2599z00_1940 =
											VECTOR_REF(BgL_optz00_46, (int) (((long) 0)));
										{	/* Unsafe/gunzip.scm 1078 */
											obj_t BgL_res2945z00_3881;

											{	/* Unsafe/gunzip.scm 1078 */
												obj_t BgL_inz00_3877;

												if (INPUT_PORTP(BgL_arg2599z00_1940))
													{	/* Unsafe/gunzip.scm 1078 */
														BgL_inz00_3877 = BgL_arg2599z00_1940;
													}
												else
													{
														obj_t BgL_auxz00_7170;

														BgL_auxz00_7170 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3090z00zz__gunza7ipza7,
															BINT(((long) 37495)),
															BGl_string3105z00zz__gunza7ipza7,
															BGl_string3092z00zz__gunza7ipza7,
															BgL_arg2599z00_1940);
														FAILURE(BgL_auxz00_7170, BFALSE, BFALSE);
													}
												BgL_res2945z00_3881 =
													BGl_portzd2ze3portz31zz__gunza7ipza7(BgL_inz00_3877,
													BGl_symbol3099z00zz__gunza7ipza7, BgL_bufinfoz00_1939,
													((long) 32768), BFALSE);
											}
											return BgL_res2945z00_3881;
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



/* port->gzip-port */
	BGL_EXPORTED_DEF obj_t BGl_portzd2ze3gza7ipzd2portz44zz__gunza7ipza7(obj_t
		BgL_inz00_44, obj_t BgL_bufinfoz00_45)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1078 */
			return
				BGl_portzd2ze3portz31zz__gunza7ipza7(BgL_inz00_44,
				BGl_symbol3099z00zz__gunza7ipza7, BgL_bufinfoz00_45, ((long) 32768),
				BFALSE);
		}
	}



/* _open-input-gzip-file */
	obj_t BGl__openzd2inputzd2gza7ipzd2filez75zz__gunza7ipza7(obj_t BgL_envz00_51,
		obj_t BgL_optz00_50)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1084 */
			{	/* Unsafe/gunzip.scm 1084 */
				obj_t BgL_g2008z00_1943;

				BgL_g2008z00_1943 = VECTOR_REF(BgL_optz00_50, (int) (((long) 0)));
				{	/* Unsafe/gunzip.scm 1084 */
					int BgL_aux2010z00_1945;

					BgL_aux2010z00_1945 = VECTOR_LENGTH(BgL_optz00_50);
					switch ((long) (BgL_aux2010z00_1945))
						{
						case ((long) 1):

							{	/* Unsafe/gunzip.scm 1084 */

								{	/* Unsafe/gunzip.scm 1084 */
									obj_t BgL_arg2603z00_1948;

									BgL_arg2603z00_1948 =
										VECTOR_REF(BgL_optz00_50, (int) (((long) 0)));
									{	/* Unsafe/gunzip.scm 1084 */
										obj_t BgL_namez00_3884;

										if (STRINGP(BgL_arg2603z00_1948))
											{	/* Unsafe/gunzip.scm 1084 */
												BgL_namez00_3884 = BgL_arg2603z00_1948;
											}
										else
											{
												obj_t BgL_auxz00_7185;

												BgL_auxz00_7185 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3090z00zz__gunza7ipza7,
													BINT(((long) 37865)),
													BGl_string3106z00zz__gunza7ipza7,
													BGl_string3107z00zz__gunza7ipza7,
													BgL_arg2603z00_1948);
												FAILURE(BgL_auxz00_7185, BFALSE, BFALSE);
											}
										{	/* Unsafe/gunzip.scm 1084 */
											obj_t BgL_pz00_3886;

											BgL_pz00_3886 =
												BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
												(BgL_namez00_3884, BTRUE);
											if (INPUT_PORTP(BgL_pz00_3886))
												{	/* Unsafe/gunzip.scm 1084 */
													obj_t BgL_piz00_3888;

													{	/* Unsafe/gunzip.scm 1084 */
														obj_t BgL_res2946z00_3896;

														{	/* Unsafe/gunzip.scm 1084 */
															obj_t BgL_inz00_3892;

															BgL_inz00_3892 = BgL_pz00_3886;
															BgL_res2946z00_3896 =
																BGl_portzd2ze3portz31zz__gunza7ipza7
																(BgL_inz00_3892,
																BGl_symbol3099z00zz__gunza7ipza7, BTRUE,
																((long) 32768), BFALSE);
														}
														BgL_piz00_3888 = BgL_res2946z00_3896;
													}
													{	/* Unsafe/gunzip.scm 1084 */
														obj_t BgL_zc3anonymousza32606ze3z83_4718;

														BgL_zc3anonymousza32606ze3z83_4718 =
															make_fx_procedure
															(BGl_zc3anonymousza32606ze3_2978z83zz__gunza7ipza7,
															(int) (((long) 1)), (int) (((long) 1)));
														PROCEDURE_SET(BgL_zc3anonymousza32606ze3z83_4718,
															(int) (((long) 0)), BgL_pz00_3886);
														BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
															(BgL_piz00_3888,
															BgL_zc3anonymousza32606ze3z83_4718);
													}
													return BgL_piz00_3888;
												}
											else
												{	/* Unsafe/gunzip.scm 1084 */
													return BFALSE;
												}
										}
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Unsafe/gunzip.scm 1084 */
								obj_t BgL_bufinfoz00_1949;

								BgL_bufinfoz00_1949 =
									VECTOR_REF(BgL_optz00_50, (int) (((long) 1)));
								{	/* Unsafe/gunzip.scm 1084 */

									{	/* Unsafe/gunzip.scm 1084 */
										obj_t BgL_arg2604z00_1950;

										BgL_arg2604z00_1950 =
											VECTOR_REF(BgL_optz00_50, (int) (((long) 0)));
										{	/* Unsafe/gunzip.scm 1084 */
											obj_t BgL_namez00_3898;

											if (STRINGP(BgL_arg2604z00_1950))
												{	/* Unsafe/gunzip.scm 1084 */
													BgL_namez00_3898 = BgL_arg2604z00_1950;
												}
											else
												{
													obj_t BgL_auxz00_7205;

													BgL_auxz00_7205 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3090z00zz__gunza7ipza7,
														BINT(((long) 37865)),
														BGl_string3106z00zz__gunza7ipza7,
														BGl_string3107z00zz__gunza7ipza7,
														BgL_arg2604z00_1950);
													FAILURE(BgL_auxz00_7205, BFALSE, BFALSE);
												}
											{	/* Unsafe/gunzip.scm 1084 */
												obj_t BgL_pz00_3900;

												BgL_pz00_3900 =
													BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
													(BgL_namez00_3898, BgL_bufinfoz00_1949);
												if (INPUT_PORTP(BgL_pz00_3900))
													{	/* Unsafe/gunzip.scm 1084 */
														obj_t BgL_piz00_3902;

														{	/* Unsafe/gunzip.scm 1084 */
															obj_t BgL_res2947z00_3910;

															{	/* Unsafe/gunzip.scm 1084 */
																obj_t BgL_inz00_3906;

																BgL_inz00_3906 = BgL_pz00_3900;
																BgL_res2947z00_3910 =
																	BGl_portzd2ze3portz31zz__gunza7ipza7
																	(BgL_inz00_3906,
																	BGl_symbol3099z00zz__gunza7ipza7, BTRUE,
																	((long) 32768), BFALSE);
															}
															BgL_piz00_3902 = BgL_res2947z00_3910;
														}
														{	/* Unsafe/gunzip.scm 1084 */
															obj_t BgL_zc3anonymousza32606ze3z83_4717;

															BgL_zc3anonymousza32606ze3z83_4717 =
																make_fx_procedure
																(BGl_zc3anonymousza32606ze3z83zz__gunza7ipza7,
																(int) (((long) 1)), (int) (((long) 1)));
															PROCEDURE_SET(BgL_zc3anonymousza32606ze3z83_4717,
																(int) (((long) 0)), BgL_pz00_3900);
															BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
																(BgL_piz00_3902,
																BgL_zc3anonymousza32606ze3z83_4717);
														}
														return BgL_piz00_3902;
													}
												else
													{	/* Unsafe/gunzip.scm 1084 */
														return BFALSE;
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



/* <anonymous:2606> */
	obj_t BGl_zc3anonymousza32606ze3z83zz__gunza7ipza7(obj_t BgL_envz00_4719,
		obj_t BgL_vz00_4721)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1088 */
			return
				bgl_close_input_port(PROCEDURE_REF(BgL_envz00_4719,
					(int) (((long) 0))));
		}
	}



/* <anonymous:2606>_2978 */
	obj_t BGl_zc3anonymousza32606ze3_2978z83zz__gunza7ipza7(obj_t BgL_envz00_4722,
		obj_t BgL_vz00_4724)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1088 */
			return
				bgl_close_input_port(PROCEDURE_REF(BgL_envz00_4722,
					(int) (((long) 0))));
		}
	}



/* open-input-gzip-file */
	BGL_EXPORTED_DEF obj_t
		BGl_openzd2inputzd2gza7ipzd2filez75zz__gunza7ipza7(obj_t BgL_namez00_48,
		obj_t BgL_bufinfoz00_49)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1084 */
			{	/* Unsafe/gunzip.scm 1085 */
				obj_t BgL_pz00_3912;

				BgL_pz00_3912 =
					BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_namez00_48,
					BgL_bufinfoz00_49);
				if (INPUT_PORTP(BgL_pz00_3912))
					{	/* Unsafe/gunzip.scm 1085 */
						obj_t BgL_piz00_3914;

						{	/* Unsafe/gunzip.scm 1085 */
							obj_t BgL_res2948z00_3922;

							{	/* Unsafe/gunzip.scm 1085 */
								obj_t BgL_inz00_3918;

								BgL_inz00_3918 = BgL_pz00_3912;
								BgL_res2948z00_3922 =
									BGl_portzd2ze3portz31zz__gunza7ipza7(BgL_inz00_3918,
									BGl_symbol3099z00zz__gunza7ipza7, BTRUE, ((long) 32768),
									BFALSE);
							}
							BgL_piz00_3914 = BgL_res2948z00_3922;
						}
						{	/* Unsafe/gunzip.scm 1085 */
							obj_t BgL_zc3anonymousza32606ze3z83_4725;

							BgL_zc3anonymousza32606ze3z83_4725 =
								make_fx_procedure
								(BGl_zc3anonymousza32606ze3_2979z83zz__gunza7ipza7,
								(int) (((long) 1)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3anonymousza32606ze3z83_4725,
								(int) (((long) 0)), BgL_pz00_3912);
							BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
								(BgL_piz00_3914, BgL_zc3anonymousza32606ze3z83_4725);
						}
						return BgL_piz00_3914;
					}
				else
					{	/* Unsafe/gunzip.scm 1085 */
						return BFALSE;
					}
			}
		}
	}



/* <anonymous:2606>_2979 */
	obj_t BGl_zc3anonymousza32606ze3_2979z83zz__gunza7ipza7(obj_t BgL_envz00_4726,
		obj_t BgL_vz00_4728)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1088 */
			return
				bgl_close_input_port(PROCEDURE_REF(BgL_envz00_4726,
					(int) (((long) 0))));
		}
	}



/* _open-input-inflate-file */
	obj_t BGl__openzd2inputzd2inflatezd2filezd2zz__gunza7ipza7(obj_t
		BgL_envz00_55, obj_t BgL_optz00_54)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1094 */
			{	/* Unsafe/gunzip.scm 1094 */
				obj_t BgL_g2011z00_1958;

				BgL_g2011z00_1958 = VECTOR_REF(BgL_optz00_54, (int) (((long) 0)));
				{	/* Unsafe/gunzip.scm 1094 */
					int BgL_aux2013z00_1960;

					BgL_aux2013z00_1960 = VECTOR_LENGTH(BgL_optz00_54);
					switch ((long) (BgL_aux2013z00_1960))
						{
						case ((long) 1):

							{	/* Unsafe/gunzip.scm 1094 */

								{	/* Unsafe/gunzip.scm 1094 */
									obj_t BgL_arg2608z00_1963;

									BgL_arg2608z00_1963 =
										VECTOR_REF(BgL_optz00_54, (int) (((long) 0)));
									{	/* Unsafe/gunzip.scm 1094 */
										obj_t BgL_auxz00_7245;

										if (STRINGP(BgL_arg2608z00_1963))
											{	/* Unsafe/gunzip.scm 1094 */
												BgL_auxz00_7245 = BgL_arg2608z00_1963;
											}
										else
											{
												obj_t BgL_auxz00_7248;

												BgL_auxz00_7248 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3090z00zz__gunza7ipza7,
													BINT(((long) 38346)),
													BGl_string3108z00zz__gunza7ipza7,
													BGl_string3107z00zz__gunza7ipza7,
													BgL_arg2608z00_1963);
												FAILURE(BgL_auxz00_7248, BFALSE, BFALSE);
											}
										return
											BGl_openzd2inputzd2inflatezd2filezd2zz__gunza7ipza7
											(BgL_auxz00_7245, BTRUE);
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Unsafe/gunzip.scm 1094 */
								obj_t BgL_bufinfoz00_1964;

								BgL_bufinfoz00_1964 =
									VECTOR_REF(BgL_optz00_54, (int) (((long) 1)));
								{	/* Unsafe/gunzip.scm 1094 */

									{	/* Unsafe/gunzip.scm 1094 */
										obj_t BgL_arg2609z00_1965;

										BgL_arg2609z00_1965 =
											VECTOR_REF(BgL_optz00_54, (int) (((long) 0)));
										{	/* Unsafe/gunzip.scm 1094 */
											obj_t BgL_auxz00_7257;

											if (STRINGP(BgL_arg2609z00_1965))
												{	/* Unsafe/gunzip.scm 1094 */
													BgL_auxz00_7257 = BgL_arg2609z00_1965;
												}
											else
												{
													obj_t BgL_auxz00_7260;

													BgL_auxz00_7260 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3090z00zz__gunza7ipza7,
														BINT(((long) 38346)),
														BGl_string3108z00zz__gunza7ipza7,
														BGl_string3107z00zz__gunza7ipza7,
														BgL_arg2609z00_1965);
													FAILURE(BgL_auxz00_7260, BFALSE, BFALSE);
												}
											return
												BGl_openzd2inputzd2inflatezd2filezd2zz__gunza7ipza7
												(BgL_auxz00_7257, BgL_bufinfoz00_1964);
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



/* open-input-inflate-file */
	BGL_EXPORTED_DEF obj_t
		BGl_openzd2inputzd2inflatezd2filezd2zz__gunza7ipza7(obj_t BgL_namez00_52,
		obj_t BgL_bufinfoz00_53)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1094 */
			{	/* Unsafe/gunzip.scm 1095 */
				obj_t BgL_pz00_1966;

				obj_t BgL_bz00_1967;

				BgL_pz00_1966 =
					BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_namez00_52,
					BgL_bufinfoz00_53);
				BgL_bz00_1967 =
					BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
					(BGl_symbol3109z00zz__gunza7ipza7, BTRUE, default_io_bufsiz);
				if (INPUT_PORTP(BgL_pz00_1966))
					{	/* Unsafe/gunzip.scm 1098 */
						obj_t BgL_piz00_1969;

						{	/* Unsafe/gunzip.scm 1098 */
							obj_t BgL_res2949z00_3929;

							{	/* Unsafe/gunzip.scm 1098 */
								obj_t BgL_inz00_3925;

								BgL_inz00_3925 = BgL_pz00_1966;
								BgL_res2949z00_3929 =
									BGl_portzd2ze3portz31zz__gunza7ipza7(BgL_inz00_3925,
									BGl_symbol3101z00zz__gunza7ipza7, BgL_bz00_1967,
									((long) 32768), BFALSE);
							}
							BgL_piz00_1969 = BgL_res2949z00_3929;
						}
						{	/* Unsafe/gunzip.scm 1099 */
							obj_t BgL_zc3anonymousza32611ze3z83_4729;

							BgL_zc3anonymousza32611ze3z83_4729 =
								make_fx_procedure(BGl_zc3anonymousza32611ze3z83zz__gunza7ipza7,
								(int) (((long) 1)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3anonymousza32611ze3z83_4729,
								(int) (((long) 0)), BgL_pz00_1966);
							BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
								(BgL_piz00_1969, BgL_zc3anonymousza32611ze3z83_4729);
						}
						return BgL_piz00_1969;
					}
				else
					{	/* Unsafe/gunzip.scm 1097 */
						return BFALSE;
					}
			}
		}
	}



/* <anonymous:2611> */
	obj_t BGl_zc3anonymousza32611ze3z83zz__gunza7ipza7(obj_t BgL_envz00_4730,
		obj_t BgL_vz00_4732)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1099 */
			return
				bgl_close_input_port(PROCEDURE_REF(BgL_envz00_4730,
					(int) (((long) 0))));
		}
	}



/* _port->zlib-port */
	obj_t BGl__portzd2ze3za7libzd2portz44zz__gunza7ipza7(obj_t BgL_envz00_59,
		obj_t BgL_optz00_58)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1105 */
			{	/* Unsafe/gunzip.scm 1105 */
				obj_t BgL_g2014z00_1974;

				BgL_g2014z00_1974 = VECTOR_REF(BgL_optz00_58, (int) (((long) 0)));
				{	/* Unsafe/gunzip.scm 1105 */
					int BgL_aux2016z00_1976;

					BgL_aux2016z00_1976 = VECTOR_LENGTH(BgL_optz00_58);
					switch ((long) (BgL_aux2016z00_1976))
						{
						case ((long) 1):

							{	/* Unsafe/gunzip.scm 1105 */

								{	/* Unsafe/gunzip.scm 1105 */
									obj_t BgL_arg2613z00_1979;

									BgL_arg2613z00_1979 =
										VECTOR_REF(BgL_optz00_58, (int) (((long) 0)));
									{	/* Unsafe/gunzip.scm 1105 */
										obj_t BgL_auxz00_7286;

										if (INPUT_PORTP(BgL_arg2613z00_1979))
											{	/* Unsafe/gunzip.scm 1105 */
												BgL_auxz00_7286 = BgL_arg2613z00_1979;
											}
										else
											{
												obj_t BgL_auxz00_7289;

												BgL_auxz00_7289 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3090z00zz__gunza7ipza7,
													BINT(((long) 38905)),
													BGl_string3111z00zz__gunza7ipza7,
													BGl_string3092z00zz__gunza7ipza7,
													BgL_arg2613z00_1979);
												FAILURE(BgL_auxz00_7289, BFALSE, BFALSE);
											}
										return
											BGl_portzd2ze3za7libzd2portz44zz__gunza7ipza7
											(BgL_auxz00_7286, BTRUE);
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Unsafe/gunzip.scm 1105 */
								obj_t BgL_bufinfoz00_1980;

								BgL_bufinfoz00_1980 =
									VECTOR_REF(BgL_optz00_58, (int) (((long) 1)));
								{	/* Unsafe/gunzip.scm 1105 */

									{	/* Unsafe/gunzip.scm 1105 */
										obj_t BgL_arg2614z00_1981;

										BgL_arg2614z00_1981 =
											VECTOR_REF(BgL_optz00_58, (int) (((long) 0)));
										{	/* Unsafe/gunzip.scm 1105 */
											obj_t BgL_auxz00_7298;

											if (INPUT_PORTP(BgL_arg2614z00_1981))
												{	/* Unsafe/gunzip.scm 1105 */
													BgL_auxz00_7298 = BgL_arg2614z00_1981;
												}
											else
												{
													obj_t BgL_auxz00_7301;

													BgL_auxz00_7301 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3090z00zz__gunza7ipza7,
														BINT(((long) 38905)),
														BGl_string3111z00zz__gunza7ipza7,
														BGl_string3092z00zz__gunza7ipza7,
														BgL_arg2614z00_1981);
													FAILURE(BgL_auxz00_7301, BFALSE, BFALSE);
												}
											return
												BGl_portzd2ze3za7libzd2portz44zz__gunza7ipza7
												(BgL_auxz00_7298, BgL_bufinfoz00_1980);
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



/* port->zlib-port */
	BGL_EXPORTED_DEF obj_t BGl_portzd2ze3za7libzd2portz44zz__gunza7ipza7(obj_t
		BgL_inz00_56, obj_t BgL_bufinfoz00_57)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1105 */
			{	/* Unsafe/gunzip.scm 1106 */
				obj_t BgL_cmfz00_1982;

				BgL_cmfz00_1982 =
					BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_inz00_56);
				{	/* Unsafe/gunzip.scm 1106 */
					obj_t BgL_flgz00_1983;

					BgL_flgz00_1983 =
						BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_inz00_56);
					{	/* Unsafe/gunzip.scm 1107 */
						long BgL_cmz00_1984;

						BgL_cmz00_1984 = ((long) CINT(BgL_cmfz00_1982) & ((long) 15));
						{	/* Unsafe/gunzip.scm 1108 */
							long BgL_cinfoz00_1985;

							BgL_cinfoz00_1985 =
								((long) CINT(BgL_cmfz00_1982) >> (int) (((long) 4)));
							{	/* Unsafe/gunzip.scm 1109 */
								long BgL_fcheckz00_1986;

								BgL_fcheckz00_1986 =
									((long) CINT(BgL_flgz00_1983) & ((long) 15));
								{	/* Unsafe/gunzip.scm 1110 */
									long BgL_fdictz00_1987;

									BgL_fdictz00_1987 =
										(
										((long) CINT(BgL_flgz00_1983) & ((long) 16)) >>
										(int) (((long) 5)));
									{	/* Unsafe/gunzip.scm 1112 */

										if ((BgL_cmz00_1984 == ((long) 8)))
											{	/* Unsafe/gunzip.scm 1116 */
												bool_t BgL_testz00_7323;

												{	/* Unsafe/gunzip.scm 1116 */
													obj_t BgL_arg2626z00_2001;

													{	/* Unsafe/gunzip.scm 1116 */
														long BgL_arg2628z00_2003;

														BgL_arg2628z00_2003 =
															(
															((long) CINT(BgL_cmfz00_1982) * ((long) 256)) +
															(long) CINT(BgL_flgz00_1983));
														BgL_arg2626z00_2001 =
															BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BINT
															(BgL_arg2628z00_2003), BINT(((long) 31)));
													}
													BgL_testz00_7323 =
														((long) CINT(BgL_arg2626z00_2001) == ((long) 0));
												}
												if (BgL_testz00_7323)
													{	/* Unsafe/gunzip.scm 1116 */
														if ((BgL_fdictz00_1987 == ((long) 0)))
															{	/* Unsafe/gunzip.scm 1118 */
																return
																	BGl_portzd2ze3portz31zz__gunza7ipza7
																	(BgL_inz00_56,
																	BGl_symbol3101z00zz__gunza7ipza7, BTRUE,
																	(((long) 1) << (int) ((((long) 8) +
																				BgL_cinfoz00_1985))),
																	BGl_checkzd2adler32zd2envz00zz__gunza7ipza7);
															}
														else
															{	/* Unsafe/gunzip.scm 1122 */
																obj_t BgL_dictz00_1996;

																BgL_dictz00_1996 =
																	BGl_readzd2charszd2zz__r4_input_6_10_2z00(BINT
																	(((long) 4)), BgL_inz00_56);
																return
																	BGl_portzd2ze3portz31zz__gunza7ipza7
																	(BgL_inz00_56,
																	BGl_symbol3101z00zz__gunza7ipza7, BTRUE,
																	(((long) 1) << (int) ((((long) 8) +
																				BgL_cinfoz00_1985))), BFALSE);
													}}
												else
													{	/* Unsafe/gunzip.scm 1116 */
														return
															BGl_errorz00zz__errorz00
															(BGl_string3112z00zz__gunza7ipza7,
															BGl_string3113z00zz__gunza7ipza7,
															BINT(BgL_fcheckz00_1986));
													}
											}
										else
											{	/* Unsafe/gunzip.scm 1114 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string3112z00zz__gunza7ipza7,
													BGl_string3114z00zz__gunza7ipza7,
													BINT(BgL_cmz00_1984));
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



/* _open-input-zlib-file */
	obj_t BGl__openzd2inputzd2za7libzd2filez75zz__gunza7ipza7(obj_t BgL_envz00_63,
		obj_t BgL_optz00_62)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1128 */
			{	/* Unsafe/gunzip.scm 1128 */
				obj_t BgL_g2017z00_2008;

				BgL_g2017z00_2008 = VECTOR_REF(BgL_optz00_62, (int) (((long) 0)));
				{	/* Unsafe/gunzip.scm 1128 */
					int BgL_aux2019z00_2010;

					BgL_aux2019z00_2010 = VECTOR_LENGTH(BgL_optz00_62);
					switch ((long) (BgL_aux2019z00_2010))
						{
						case ((long) 1):

							{	/* Unsafe/gunzip.scm 1128 */

								{	/* Unsafe/gunzip.scm 1128 */
									obj_t BgL_arg2634z00_2013;

									BgL_arg2634z00_2013 =
										VECTOR_REF(BgL_optz00_62, (int) (((long) 0)));
									{	/* Unsafe/gunzip.scm 1128 */
										obj_t BgL_namez00_3961;

										if (STRINGP(BgL_arg2634z00_2013))
											{	/* Unsafe/gunzip.scm 1128 */
												BgL_namez00_3961 = BgL_arg2634z00_2013;
											}
										else
											{
												obj_t BgL_auxz00_7356;

												BgL_auxz00_7356 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3090z00zz__gunza7ipza7,
													BINT(((long) 39855)),
													BGl_string3115z00zz__gunza7ipza7,
													BGl_string3107z00zz__gunza7ipza7,
													BgL_arg2634z00_2013);
												FAILURE(BgL_auxz00_7356, BFALSE, BFALSE);
											}
										{	/* Unsafe/gunzip.scm 1128 */
											obj_t BgL_pz00_3963;

											BgL_pz00_3963 =
												BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
												(BgL_namez00_3961, BTRUE);
											if (INPUT_PORTP(BgL_pz00_3963))
												{	/* Unsafe/gunzip.scm 1128 */
													obj_t BgL_piz00_3965;

													{	/* Unsafe/gunzip.scm 1128 */
														obj_t BgL_g2014z00_3966;

														BgL_g2014z00_3966 = BgL_pz00_3963;
														{	/* Unsafe/gunzip.scm 1128 */

															BgL_piz00_3965 =
																BGl_portzd2ze3za7libzd2portz44zz__gunza7ipza7
																(BgL_g2014z00_3966, BTRUE);
														}
													}
													{	/* Unsafe/gunzip.scm 1128 */
														obj_t BgL_zc3anonymousza32637ze3z83_4737;

														BgL_zc3anonymousza32637ze3z83_4737 =
															make_fx_procedure
															(BGl_zc3anonymousza32637ze3_2980z83zz__gunza7ipza7,
															(int) (((long) 1)), (int) (((long) 1)));
														PROCEDURE_SET(BgL_zc3anonymousza32637ze3z83_4737,
															(int) (((long) 0)), BgL_pz00_3963);
														BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
															(BgL_piz00_3965,
															BgL_zc3anonymousza32637ze3z83_4737);
													}
													return BgL_piz00_3965;
												}
											else
												{	/* Unsafe/gunzip.scm 1128 */
													return BFALSE;
												}
										}
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Unsafe/gunzip.scm 1128 */
								obj_t BgL_bufinfoz00_2014;

								BgL_bufinfoz00_2014 =
									VECTOR_REF(BgL_optz00_62, (int) (((long) 1)));
								{	/* Unsafe/gunzip.scm 1128 */

									{	/* Unsafe/gunzip.scm 1128 */
										obj_t BgL_arg2635z00_2015;

										BgL_arg2635z00_2015 =
											VECTOR_REF(BgL_optz00_62, (int) (((long) 0)));
										{	/* Unsafe/gunzip.scm 1128 */
											obj_t BgL_namez00_3972;

											if (STRINGP(BgL_arg2635z00_2015))
												{	/* Unsafe/gunzip.scm 1128 */
													BgL_namez00_3972 = BgL_arg2635z00_2015;
												}
											else
												{
													obj_t BgL_auxz00_7376;

													BgL_auxz00_7376 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3090z00zz__gunza7ipza7,
														BINT(((long) 39855)),
														BGl_string3115z00zz__gunza7ipza7,
														BGl_string3107z00zz__gunza7ipza7,
														BgL_arg2635z00_2015);
													FAILURE(BgL_auxz00_7376, BFALSE, BFALSE);
												}
											{	/* Unsafe/gunzip.scm 1128 */
												obj_t BgL_pz00_3974;

												BgL_pz00_3974 =
													BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
													(BgL_namez00_3972, BgL_bufinfoz00_2014);
												if (INPUT_PORTP(BgL_pz00_3974))
													{	/* Unsafe/gunzip.scm 1128 */
														obj_t BgL_piz00_3976;

														{	/* Unsafe/gunzip.scm 1128 */
															obj_t BgL_g2014z00_3977;

															BgL_g2014z00_3977 = BgL_pz00_3974;
															{	/* Unsafe/gunzip.scm 1128 */

																BgL_piz00_3976 =
																	BGl_portzd2ze3za7libzd2portz44zz__gunza7ipza7
																	(BgL_g2014z00_3977, BTRUE);
															}
														}
														{	/* Unsafe/gunzip.scm 1128 */
															obj_t BgL_zc3anonymousza32637ze3z83_4736;

															BgL_zc3anonymousza32637ze3z83_4736 =
																make_fx_procedure
																(BGl_zc3anonymousza32637ze3z83zz__gunza7ipza7,
																(int) (((long) 1)), (int) (((long) 1)));
															PROCEDURE_SET(BgL_zc3anonymousza32637ze3z83_4736,
																(int) (((long) 0)), BgL_pz00_3974);
															BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
																(BgL_piz00_3976,
																BgL_zc3anonymousza32637ze3z83_4736);
														}
														return BgL_piz00_3976;
													}
												else
													{	/* Unsafe/gunzip.scm 1128 */
														return BFALSE;
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



/* <anonymous:2637> */
	obj_t BGl_zc3anonymousza32637ze3z83zz__gunza7ipza7(obj_t BgL_envz00_4738,
		obj_t BgL_vz00_4740)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1132 */
			return
				bgl_close_input_port(PROCEDURE_REF(BgL_envz00_4738,
					(int) (((long) 0))));
		}
	}



/* <anonymous:2637>_2980 */
	obj_t BGl_zc3anonymousza32637ze3_2980z83zz__gunza7ipza7(obj_t BgL_envz00_4741,
		obj_t BgL_vz00_4743)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1132 */
			return
				bgl_close_input_port(PROCEDURE_REF(BgL_envz00_4741,
					(int) (((long) 0))));
		}
	}



/* open-input-zlib-file */
	BGL_EXPORTED_DEF obj_t
		BGl_openzd2inputzd2za7libzd2filez75zz__gunza7ipza7(obj_t BgL_namez00_60,
		obj_t BgL_bufinfoz00_61)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1128 */
			{	/* Unsafe/gunzip.scm 1129 */
				obj_t BgL_pz00_3983;

				BgL_pz00_3983 =
					BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_namez00_60,
					BgL_bufinfoz00_61);
				if (INPUT_PORTP(BgL_pz00_3983))
					{	/* Unsafe/gunzip.scm 1129 */
						obj_t BgL_piz00_3985;

						{	/* Unsafe/gunzip.scm 1129 */
							obj_t BgL_g2014z00_3986;

							BgL_g2014z00_3986 = BgL_pz00_3983;
							{	/* Unsafe/gunzip.scm 1129 */

								BgL_piz00_3985 =
									BGl_portzd2ze3za7libzd2portz44zz__gunza7ipza7
									(BgL_g2014z00_3986, BTRUE);
							}
						}
						{	/* Unsafe/gunzip.scm 1129 */
							obj_t BgL_zc3anonymousza32637ze3z83_4744;

							BgL_zc3anonymousza32637ze3z83_4744 =
								make_fx_procedure
								(BGl_zc3anonymousza32637ze3_2981z83zz__gunza7ipza7,
								(int) (((long) 1)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3anonymousza32637ze3z83_4744,
								(int) (((long) 0)), BgL_pz00_3983);
							BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
								(BgL_piz00_3985, BgL_zc3anonymousza32637ze3z83_4744);
						}
						return BgL_piz00_3985;
					}
				else
					{	/* Unsafe/gunzip.scm 1129 */
						return BFALSE;
					}
			}
		}
	}



/* <anonymous:2637>_2981 */
	obj_t BGl_zc3anonymousza32637ze3_2981z83zz__gunza7ipza7(obj_t BgL_envz00_4745,
		obj_t BgL_vz00_4747)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1132 */
			return
				bgl_close_input_port(PROCEDURE_REF(BgL_envz00_4745,
					(int) (((long) 0))));
		}
	}



/* check-adler32 */
	obj_t BGl_checkzd2adler32zd2zz__gunza7ipza7(obj_t BgL_inz00_64,
		obj_t BgL_bufz00_65)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1142 */
			BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_inz00_64);
			BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_inz00_64);
			BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_inz00_64);
			return BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_inz00_64);
		}
	}



/* _check-adler32 */
	obj_t BGl__checkzd2adler32zd2zz__gunza7ipza7(obj_t BgL_envz00_4733,
		obj_t BgL_inz00_4734, obj_t BgL_bufz00_4735)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 1142 */
			{	/* Unsafe/gunzip.scm 1146 */
				obj_t BgL_auxz00_7422;

				obj_t BgL_auxz00_7415;

				if (STRINGP(BgL_bufz00_4735))
					{	/* Unsafe/gunzip.scm 1146 */
						BgL_auxz00_7422 = BgL_bufz00_4735;
					}
				else
					{
						obj_t BgL_auxz00_7425;

						BgL_auxz00_7425 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3090z00zz__gunza7ipza7,
							BINT(((long) 40751)), BGl_string3116z00zz__gunza7ipza7,
							BGl_string3107z00zz__gunza7ipza7, BgL_bufz00_4735);
						FAILURE(BgL_auxz00_7425, BFALSE, BFALSE);
					}
				if (INPUT_PORTP(BgL_inz00_4734))
					{	/* Unsafe/gunzip.scm 1146 */
						BgL_auxz00_7415 = BgL_inz00_4734;
					}
				else
					{
						obj_t BgL_auxz00_7418;

						BgL_auxz00_7418 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3090z00zz__gunza7ipza7,
							BINT(((long) 40751)), BGl_string3116z00zz__gunza7ipza7,
							BGl_string3092z00zz__gunza7ipza7, BgL_inz00_4734);
						FAILURE(BgL_auxz00_7418, BFALSE, BFALSE);
					}
				return
					BGl_checkzd2adler32zd2zz__gunza7ipza7(BgL_auxz00_7415,
					BgL_auxz00_7422);
			}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__gunza7ipza7()
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 25 */
			{	/* Unsafe/gunzip.scm 67 */
				obj_t BgL_arg2638z00_2025;

				obj_t BgL_arg2639z00_2026;

				obj_t BgL_arg2643z00_2030;

				obj_t BgL_arg2644z00_2031;

				BgL_arg2638z00_2025 = BGl_symbol3117z00zz__gunza7ipza7;
				BgL_arg2639z00_2026 = BGl_objectz00zz__objectz00;
				{	/* Unsafe/gunzip.scm 67 */
					obj_t BgL_arg2645z00_2032;

					obj_t BgL_arg2646z00_2033;

					obj_t BgL_arg2647z00_2034;

					BgL_arg2645z00_2032 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol3119z00zz__gunza7ipza7,
						BGl_huftzd2ezd2envz00zz__gunza7ipza7,
						BGl_huftzd2ezd2setz12zd2envzc0zz__gunza7ipza7, BUNSPEC,
						((bool_t) 0), BFALSE,
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00());
					BgL_arg2646z00_2033 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol3121z00zz__gunza7ipza7,
						BGl_huftzd2bzd2envz00zz__gunza7ipza7,
						BGl_huftzd2bzd2setz12zd2envzc0zz__gunza7ipza7, BUNSPEC,
						((bool_t) 0), BFALSE,
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00());
					BgL_arg2647z00_2034 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol3123z00zz__gunza7ipza7,
						BGl_huftzd2vzd2envz00zz__gunza7ipza7,
						BGl_huftzd2vzd2setz12zd2envzc0zz__gunza7ipza7, BUNSPEC,
						((bool_t) 0), BFALSE,
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00());
					{	/* Unsafe/gunzip.scm 67 */
						obj_t BgL_list2648z00_2035;

						{	/* Unsafe/gunzip.scm 67 */
							obj_t BgL_arg2649z00_2036;

							{	/* Unsafe/gunzip.scm 67 */
								obj_t BgL_arg2650z00_2037;

								BgL_arg2650z00_2037 = MAKE_PAIR(BgL_arg2647z00_2034, BNIL);
								BgL_arg2649z00_2036 =
									MAKE_PAIR(BgL_arg2646z00_2033, BgL_arg2650z00_2037);
							}
							BgL_list2648z00_2035 =
								MAKE_PAIR(BgL_arg2645z00_2032, BgL_arg2649z00_2036);
						}
						BgL_arg2643z00_2030 = BgL_list2648z00_2035;
					}
				}
				{	/* Unsafe/gunzip.scm 67 */
					obj_t BgL_v1991z00_2044;

					BgL_v1991z00_2044 = create_vector((int) (((long) 0)));
					BgL_arg2644z00_2031 = BgL_v1991z00_2044;
				}
				BGl_huftz00zz__gunza7ipza7 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2638z00_2025,
					BgL_arg2639z00_2026, ((bool_t) 0),
					BGl_makezd2huftzd2envz00zz__gunza7ipza7,
					BGl_z52allocatezd2huftzd2envz52zz__gunza7ipza7,
					BGl_huftzd2nilzd2envz00zz__gunza7ipza7,
					BGl_huftzf3zd2envz21zz__gunza7ipza7, ((long) 3751282),
					BgL_arg2643z00_2030, BFALSE, BgL_arg2644z00_2031);
			}
			return (BGl_z52thezd2huftzd2nilz52zz__gunza7ipza7 = BUNSPEC, BUNSPEC);
		}
	}



/* _huft? */
	obj_t BGl__huftzf3zf3zz__gunza7ipza7(obj_t BgL_envz00_4769,
		obj_t BgL_obj1861z00_4770)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 67 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1861z00_4770,
					BGl_huftz00zz__gunza7ipza7));
		}
	}



/* make-huft */
	BgL_huftz00_bglt BGl_makezd2huftzd2zz__gunza7ipza7(long BgL_e1833z00_70,
		long BgL_b1834z00_71, obj_t BgL_v1835z00_72)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 67 */
			{	/* Unsafe/gunzip.scm 67 */
				BgL_huftz00_bglt BgL_new1836z00_3994;

				{	/* Unsafe/gunzip.scm 67 */
					BgL_huftz00_bglt BgL_res2951z00_3999;

					{	/* Unsafe/gunzip.scm 67 */
						BgL_huftz00_bglt BgL_new1846z00_3995;

						BgL_new1846z00_3995 =
							((BgL_huftz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_huftz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1846z00_3995),
							BGl_classzd2numzd2zz__objectz00(BGl_huftz00zz__gunza7ipza7));
						{	/* Unsafe/gunzip.scm 67 */
							BgL_objectz00_bglt BgL_auxz00_7448;

							BgL_auxz00_7448 = (BgL_objectz00_bglt) (BgL_new1846z00_3995);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7448, BFALSE);
						}
						BgL_res2951z00_3999 = BgL_new1846z00_3995;
					}
					BgL_new1836z00_3994 = BgL_res2951z00_3999;
				}
				{	/* Unsafe/gunzip.scm 67 */
					BgL_huftz00_bglt BgL_res2952z00_4007;

					{	/* Unsafe/gunzip.scm 67 */
						BgL_huftz00_bglt BgL_new1841z00_4000;

						BgL_new1841z00_4000 = BgL_new1836z00_3994;
						{	/* Unsafe/gunzip.scm 67 */
							long BgL_e1838z00_4004;

							long BgL_b1839z00_4005;

							obj_t BgL_v1840z00_4006;

							BgL_e1838z00_4004 = BgL_e1833z00_70;
							BgL_b1839z00_4005 = BgL_b1834z00_71;
							BgL_v1840z00_4006 = BgL_v1835z00_72;
							((((BgL_huftz00_bglt) CREF(BgL_new1841z00_4000))->BgL_ez00) =
								((long) BgL_e1838z00_4004), BUNSPEC);
							((((BgL_huftz00_bglt) CREF(BgL_new1841z00_4000))->BgL_bz00) =
								((long) BgL_b1839z00_4005), BUNSPEC);
							((((BgL_huftz00_bglt) CREF(BgL_new1841z00_4000))->BgL_vz00) =
								((obj_t) BgL_v1840z00_4006), BUNSPEC);
							BgL_res2952z00_4007 = BgL_new1841z00_4000;
					}} BgL_res2952z00_4007;
				}
				return BgL_new1836z00_3994;
			}
		}
	}



/* _make-huft */
	obj_t BGl__makezd2huftzd2zz__gunza7ipza7(obj_t BgL_envz00_4748,
		obj_t BgL_e1833z00_4749, obj_t BgL_b1834z00_4750, obj_t BgL_v1835z00_4751)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 67 */
			{	/* Unsafe/gunzip.scm 67 */
				BgL_huftz00_bglt BgL_auxz00_7454;

				{	/* Unsafe/gunzip.scm 67 */
					long BgL_auxz00_7464;

					long BgL_auxz00_7455;

					{	/* Unsafe/gunzip.scm 67 */
						obj_t BgL_auxz00_7465;

						if (INTEGERP(BgL_b1834z00_4750))
							{	/* Unsafe/gunzip.scm 67 */
								BgL_auxz00_7465 = BgL_b1834z00_4750;
							}
						else
							{
								obj_t BgL_auxz00_7468;

								BgL_auxz00_7468 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3090z00zz__gunza7ipza7, BINT(((long) 2634)),
									BGl_string3125z00zz__gunza7ipza7,
									BGl_string3126z00zz__gunza7ipza7, BgL_b1834z00_4750);
								FAILURE(BgL_auxz00_7468, BFALSE, BFALSE);
							}
						BgL_auxz00_7464 = (long) CINT(BgL_auxz00_7465);
					}
					{	/* Unsafe/gunzip.scm 67 */
						obj_t BgL_auxz00_7456;

						if (INTEGERP(BgL_e1833z00_4749))
							{	/* Unsafe/gunzip.scm 67 */
								BgL_auxz00_7456 = BgL_e1833z00_4749;
							}
						else
							{
								obj_t BgL_auxz00_7459;

								BgL_auxz00_7459 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3090z00zz__gunza7ipza7, BINT(((long) 2634)),
									BGl_string3125z00zz__gunza7ipza7,
									BGl_string3126z00zz__gunza7ipza7, BgL_e1833z00_4749);
								FAILURE(BgL_auxz00_7459, BFALSE, BFALSE);
							}
						BgL_auxz00_7455 = (long) CINT(BgL_auxz00_7456);
					}
					BgL_auxz00_7454 =
						BGl_makezd2huftzd2zz__gunza7ipza7(BgL_auxz00_7455, BgL_auxz00_7464,
						BgL_v1835z00_4751);
				}
				return (obj_t) (BgL_auxz00_7454);
			}
		}
	}



/* _%allocate-huft */
	obj_t BGl__z52allocatezd2huftz80zz__gunza7ipza7(obj_t BgL_envz00_4752)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 67 */
			{	/* Unsafe/gunzip.scm 67 */
				BgL_huftz00_bglt BgL_auxz00_7475;

				{	/* Unsafe/gunzip.scm 67 */
					BgL_huftz00_bglt BgL_res3140z00_4884;

					{	/* Unsafe/gunzip.scm 67 */
						BgL_huftz00_bglt BgL_new1846z00_4882;

						BgL_new1846z00_4882 =
							((BgL_huftz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_huftz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1846z00_4882),
							BGl_classzd2numzd2zz__objectz00(BGl_huftz00zz__gunza7ipza7));
						{	/* Unsafe/gunzip.scm 67 */
							BgL_objectz00_bglt BgL_auxz00_7480;

							BgL_auxz00_7480 = (BgL_objectz00_bglt) (BgL_new1846z00_4882);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7480, BFALSE);
						}
						BgL_res3140z00_4884 = BgL_new1846z00_4882;
					}
					BgL_auxz00_7475 = BgL_res3140z00_4884;
				}
				return (obj_t) (BgL_auxz00_7475);
			}
		}
	}



/* huft-nil */
	BgL_huftz00_bglt BGl_huftzd2nilzd2zz__gunza7ipza7()
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 67 */
			if ((BGl_z52thezd2huftzd2nilz52zz__gunza7ipza7 == BUNSPEC))
				{	/* Unsafe/gunzip.scm 67 */
					{	/* Unsafe/gunzip.scm 67 */
						BgL_huftz00_bglt BgL_res2953z00_4019;

						{	/* Unsafe/gunzip.scm 67 */
							BgL_huftz00_bglt BgL_new1846z00_4015;

							BgL_new1846z00_4015 =
								((BgL_huftz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_huftz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1846z00_4015),
								BGl_classzd2numzd2zz__objectz00(BGl_huftz00zz__gunza7ipza7));
							{	/* Unsafe/gunzip.scm 67 */
								BgL_objectz00_bglt BgL_auxz00_7490;

								BgL_auxz00_7490 = (BgL_objectz00_bglt) (BgL_new1846z00_4015);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_7490, BFALSE);
							}
							BgL_res2953z00_4019 = BgL_new1846z00_4015;
						}
						BGl_z52thezd2huftzd2nilz52zz__gunza7ipza7 =
							(obj_t) (BgL_res2953z00_4019);
					}
					{	/* Unsafe/gunzip.scm 67 */
						BgL_huftz00_bglt BgL_res2954z00_4027;

						{	/* Unsafe/gunzip.scm 67 */
							BgL_huftz00_bglt BgL_new1841z00_4020;

							BgL_new1841z00_4020 =
								(BgL_huftz00_bglt) (BGl_z52thezd2huftzd2nilz52zz__gunza7ipza7);
							{	/* Unsafe/gunzip.scm 67 */
								long BgL_e1838z00_4024;

								long BgL_b1839z00_4025;

								obj_t BgL_v1840z00_4026;

								BgL_e1838z00_4024 = ((long) 0);
								BgL_b1839z00_4025 = ((long) 0);
								BgL_v1840z00_4026 = BUNSPEC;
								((((BgL_huftz00_bglt) CREF(BgL_new1841z00_4020))->BgL_ez00) =
									((long) BgL_e1838z00_4024), BUNSPEC);
								((((BgL_huftz00_bglt) CREF(BgL_new1841z00_4020))->BgL_bz00) =
									((long) BgL_b1839z00_4025), BUNSPEC);
								((((BgL_huftz00_bglt) CREF(BgL_new1841z00_4020))->BgL_vz00) =
									((obj_t) BgL_v1840z00_4026), BUNSPEC);
								BgL_res2954z00_4027 = BgL_new1841z00_4020;
						}}
						(obj_t) (BgL_res2954z00_4027);
				}}
			else
				{	/* Unsafe/gunzip.scm 67 */
					BFALSE;
				}
			return (BgL_huftz00_bglt) (BGl_z52thezd2huftzd2nilz52zz__gunza7ipza7);
		}
	}



/* _huft-nil */
	obj_t BGl__huftzd2nilzd2zz__gunza7ipza7(obj_t BgL_envz00_4768)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 67 */
			return (obj_t) (BGl_huftzd2nilzd2zz__gunza7ipza7());
		}
	}



/* _huft-e-set! */
	obj_t BGl__huftzd2ezd2setz12z12zz__gunza7ipza7(obj_t BgL_envz00_4755,
		obj_t BgL_obj1826z00_4756, obj_t BgL_val1825z00_4757)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 67 */
			{	/* Unsafe/gunzip.scm 67 */
				BgL_huftz00_bglt BgL_obj1826z00_4886;

				long BgL_val1825z00_4887;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1826z00_4756,
						BGl_huftz00zz__gunza7ipza7))
					{	/* Unsafe/gunzip.scm 67 */
						BgL_obj1826z00_4886 = (BgL_huftz00_bglt) (BgL_obj1826z00_4756);
					}
				else
					{
						obj_t BgL_auxz00_7505;

						BgL_auxz00_7505 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3090z00zz__gunza7ipza7,
							BINT(((long) 2634)), BGl_string3127z00zz__gunza7ipza7,
							BGl_string3118z00zz__gunza7ipza7, BgL_obj1826z00_4756);
						FAILURE(BgL_auxz00_7505, BFALSE, BFALSE);
					}
				{	/* Unsafe/gunzip.scm 67 */
					obj_t BgL_auxz00_7509;

					if (INTEGERP(BgL_val1825z00_4757))
						{	/* Unsafe/gunzip.scm 67 */
							BgL_auxz00_7509 = BgL_val1825z00_4757;
						}
					else
						{
							obj_t BgL_auxz00_7512;

							BgL_auxz00_7512 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3090z00zz__gunza7ipza7, BINT(((long) 2634)),
								BGl_string3127z00zz__gunza7ipza7,
								BGl_string3126z00zz__gunza7ipza7, BgL_val1825z00_4757);
							FAILURE(BgL_auxz00_7512, BFALSE, BFALSE);
						}
					BgL_val1825z00_4887 = (long) CINT(BgL_auxz00_7509);
				}
				return
					((((BgL_huftz00_bglt) CREF(BgL_obj1826z00_4886))->BgL_ez00) =
					((long) BgL_val1825z00_4887), BUNSPEC);
		}}
	}



/* _huft-e */
	obj_t BGl__huftzd2ezd2zz__gunza7ipza7(obj_t BgL_envz00_4753,
		obj_t BgL_obj1824z00_4754)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 67 */
			{	/* Unsafe/gunzip.scm 67 */
				long BgL_auxz00_7518;

				{	/* Unsafe/gunzip.scm 67 */
					BgL_huftz00_bglt BgL_obj1824z00_4889;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1824z00_4754,
							BGl_huftz00zz__gunza7ipza7))
						{	/* Unsafe/gunzip.scm 67 */
							BgL_obj1824z00_4889 = (BgL_huftz00_bglt) (BgL_obj1824z00_4754);
						}
					else
						{
							obj_t BgL_auxz00_7522;

							BgL_auxz00_7522 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3090z00zz__gunza7ipza7, BINT(((long) 2634)),
								BGl_string3128z00zz__gunza7ipza7,
								BGl_string3118z00zz__gunza7ipza7, BgL_obj1824z00_4754);
							FAILURE(BgL_auxz00_7522, BFALSE, BFALSE);
						}
					BgL_auxz00_7518 =
						(((BgL_huftz00_bglt) CREF(BgL_obj1824z00_4889))->BgL_ez00);
				}
				return BINT(BgL_auxz00_7518);
			}
		}
	}



/* _huft-b-set! */
	obj_t BGl__huftzd2bzd2setz12z12zz__gunza7ipza7(obj_t BgL_envz00_4760,
		obj_t BgL_obj1829z00_4761, obj_t BgL_val1828z00_4762)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 67 */
			{	/* Unsafe/gunzip.scm 67 */
				BgL_huftz00_bglt BgL_obj1829z00_4891;

				long BgL_val1828z00_4892;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1829z00_4761,
						BGl_huftz00zz__gunza7ipza7))
					{	/* Unsafe/gunzip.scm 67 */
						BgL_obj1829z00_4891 = (BgL_huftz00_bglt) (BgL_obj1829z00_4761);
					}
				else
					{
						obj_t BgL_auxz00_7531;

						BgL_auxz00_7531 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3090z00zz__gunza7ipza7,
							BINT(((long) 2634)), BGl_string3129z00zz__gunza7ipza7,
							BGl_string3118z00zz__gunza7ipza7, BgL_obj1829z00_4761);
						FAILURE(BgL_auxz00_7531, BFALSE, BFALSE);
					}
				{	/* Unsafe/gunzip.scm 67 */
					obj_t BgL_auxz00_7535;

					if (INTEGERP(BgL_val1828z00_4762))
						{	/* Unsafe/gunzip.scm 67 */
							BgL_auxz00_7535 = BgL_val1828z00_4762;
						}
					else
						{
							obj_t BgL_auxz00_7538;

							BgL_auxz00_7538 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3090z00zz__gunza7ipza7, BINT(((long) 2634)),
								BGl_string3129z00zz__gunza7ipza7,
								BGl_string3126z00zz__gunza7ipza7, BgL_val1828z00_4762);
							FAILURE(BgL_auxz00_7538, BFALSE, BFALSE);
						}
					BgL_val1828z00_4892 = (long) CINT(BgL_auxz00_7535);
				}
				return
					((((BgL_huftz00_bglt) CREF(BgL_obj1829z00_4891))->BgL_bz00) =
					((long) BgL_val1828z00_4892), BUNSPEC);
		}}
	}



/* _huft-b */
	obj_t BGl__huftzd2bzd2zz__gunza7ipza7(obj_t BgL_envz00_4758,
		obj_t BgL_obj1827z00_4759)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 67 */
			{	/* Unsafe/gunzip.scm 67 */
				long BgL_auxz00_7544;

				{	/* Unsafe/gunzip.scm 67 */
					BgL_huftz00_bglt BgL_obj1827z00_4894;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1827z00_4759,
							BGl_huftz00zz__gunza7ipza7))
						{	/* Unsafe/gunzip.scm 67 */
							BgL_obj1827z00_4894 = (BgL_huftz00_bglt) (BgL_obj1827z00_4759);
						}
					else
						{
							obj_t BgL_auxz00_7548;

							BgL_auxz00_7548 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3090z00zz__gunza7ipza7, BINT(((long) 2634)),
								BGl_string3130z00zz__gunza7ipza7,
								BGl_string3118z00zz__gunza7ipza7, BgL_obj1827z00_4759);
							FAILURE(BgL_auxz00_7548, BFALSE, BFALSE);
						}
					BgL_auxz00_7544 =
						(((BgL_huftz00_bglt) CREF(BgL_obj1827z00_4894))->BgL_bz00);
				}
				return BINT(BgL_auxz00_7544);
			}
		}
	}



/* _huft-v-set! */
	obj_t BGl__huftzd2vzd2setz12z12zz__gunza7ipza7(obj_t BgL_envz00_4765,
		obj_t BgL_obj1832z00_4766, obj_t BgL_val1831z00_4767)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 67 */
			{	/* Unsafe/gunzip.scm 67 */
				BgL_huftz00_bglt BgL_obj1832z00_4896;

				obj_t BgL_val1831z00_4897;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1832z00_4766,
						BGl_huftz00zz__gunza7ipza7))
					{	/* Unsafe/gunzip.scm 67 */
						BgL_obj1832z00_4896 = (BgL_huftz00_bglt) (BgL_obj1832z00_4766);
					}
				else
					{
						obj_t BgL_auxz00_7557;

						BgL_auxz00_7557 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3090z00zz__gunza7ipza7,
							BINT(((long) 2634)), BGl_string3131z00zz__gunza7ipza7,
							BGl_string3118z00zz__gunza7ipza7, BgL_obj1832z00_4766);
						FAILURE(BgL_auxz00_7557, BFALSE, BFALSE);
					}
				BgL_val1831z00_4897 = BgL_val1831z00_4767;
				return
					((((BgL_huftz00_bglt) CREF(BgL_obj1832z00_4896))->BgL_vz00) =
					((obj_t) BgL_val1831z00_4897), BUNSPEC);
			}
		}
	}



/* _huft-v */
	obj_t BGl__huftzd2vzd2zz__gunza7ipza7(obj_t BgL_envz00_4763,
		obj_t BgL_obj1830z00_4764)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 67 */
			{	/* Unsafe/gunzip.scm 67 */
				BgL_huftz00_bglt BgL_obj1830z00_4899;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1830z00_4764,
						BGl_huftz00zz__gunza7ipza7))
					{	/* Unsafe/gunzip.scm 67 */
						BgL_obj1830z00_4899 = (BgL_huftz00_bglt) (BgL_obj1830z00_4764);
					}
				else
					{
						obj_t BgL_auxz00_7565;

						BgL_auxz00_7565 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3090z00zz__gunza7ipza7,
							BINT(((long) 2634)), BGl_string3132z00zz__gunza7ipza7,
							BGl_string3118z00zz__gunza7ipza7, BgL_obj1830z00_4764);
						FAILURE(BgL_auxz00_7565, BFALSE, BFALSE);
					}
				return (((BgL_huftz00_bglt) CREF(BgL_obj1830z00_4899))->BgL_vz00);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__gunza7ipza7()
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 25 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__gunza7ipza7()
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 25 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_huftz00zz__gunza7ipza7, BGl_proc3133z00zz__gunza7ipza7,
				BGl_string3134z00zz__gunza7ipza7);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_huftz00zz__gunza7ipza7, BGl_proc3135z00zz__gunza7ipza7,
				BGl_string3136z00zz__gunza7ipza7);
		}
	}



/* struct+object->objec2023 */
	obj_t BGl_structzb2objectzd2ze3objec2023z83zz__gunza7ipza7(obj_t
		BgL_envz00_4773, obj_t BgL_oz00_4774, obj_t BgL_sz00_4775)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 67 */
			{
				BgL_huftz00_bglt BgL_oz00_2232;

				obj_t BgL_sz00_2233;

				{	/* Unsafe/gunzip.scm 67 */
					BgL_huftz00_bglt BgL_auxz00_7572;

					BgL_oz00_2232 = (BgL_huftz00_bglt) (BgL_oz00_4774);
					BgL_sz00_2233 = BgL_sz00_4775;
					{	/* Unsafe/gunzip.scm 67 */
						obj_t BgL_arg2693z00_2236;

						BgL_arg2693z00_2236 = STRUCT_REF(BgL_sz00_2233, (int) (((long) 0)));
						{	/* Unsafe/gunzip.scm 67 */
							BgL_objectz00_bglt BgL_auxz00_7575;

							BgL_auxz00_7575 = (BgL_objectz00_bglt) (BgL_oz00_2232);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7575, BgL_arg2693z00_2236);
					}}
					{
						long BgL_auxz00_7578;

						BgL_auxz00_7578 =
							(long) CINT(STRUCT_REF(BgL_sz00_2233, (int) (((long) 1))));
						((((BgL_huftz00_bglt) CREF(BgL_oz00_2232))->BgL_ez00) =
							((long) BgL_auxz00_7578), BUNSPEC);
					}
					{
						long BgL_auxz00_7583;

						BgL_auxz00_7583 =
							(long) CINT(STRUCT_REF(BgL_sz00_2233, (int) (((long) 2))));
						((((BgL_huftz00_bglt) CREF(BgL_oz00_2232))->BgL_bz00) =
							((long) BgL_auxz00_7583), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_7588;

						BgL_auxz00_7588 = STRUCT_REF(BgL_sz00_2233, (int) (((long) 3)));
						((((BgL_huftz00_bglt) CREF(BgL_oz00_2232))->BgL_vz00) =
							((obj_t) BgL_auxz00_7588), BUNSPEC);
					}
					BgL_auxz00_7572 = BgL_oz00_2232;
					return (obj_t) (BgL_auxz00_7572);
				}
			}
		}
	}



/* object->struct-huft2021 */
	obj_t BGl_objectzd2ze3structzd2huft2021ze3zz__gunza7ipza7(obj_t
		BgL_envz00_4776, obj_t BgL_obj1847z00_4777)
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 67 */
			{
				BgL_huftz00_bglt BgL_obj1847z00_2220;

				BgL_obj1847z00_2220 = (BgL_huftz00_bglt) (BgL_obj1847z00_4777);
				{	/* Unsafe/gunzip.scm 67 */
					obj_t BgL_res1848z00_2223;

					BgL_res1848z00_2223 =
						make_struct(BGl_symbol3117z00zz__gunza7ipza7,
						(int) (((long) 4)), BUNSPEC);
					{	/* Unsafe/gunzip.scm 67 */
						int BgL_auxz00_7596;

						BgL_auxz00_7596 = (int) (((long) 0));
						STRUCT_SET(BgL_res1848z00_2223, BgL_auxz00_7596, BFALSE);
					}
					{	/* Unsafe/gunzip.scm 67 */
						long BgL_arg2687z00_2225;

						BgL_arg2687z00_2225 =
							(((BgL_huftz00_bglt) CREF(BgL_obj1847z00_2220))->BgL_ez00);
						{	/* Unsafe/gunzip.scm 67 */
							obj_t BgL_auxz00_7602;

							int BgL_auxz00_7600;

							BgL_auxz00_7602 = BINT(BgL_arg2687z00_2225);
							BgL_auxz00_7600 = (int) (((long) 1));
							STRUCT_SET(BgL_res1848z00_2223, BgL_auxz00_7600, BgL_auxz00_7602);
					}}
					{	/* Unsafe/gunzip.scm 67 */
						long BgL_arg2689z00_2227;

						BgL_arg2689z00_2227 =
							(((BgL_huftz00_bglt) CREF(BgL_obj1847z00_2220))->BgL_bz00);
						{	/* Unsafe/gunzip.scm 67 */
							obj_t BgL_auxz00_7608;

							int BgL_auxz00_7606;

							BgL_auxz00_7608 = BINT(BgL_arg2689z00_2227);
							BgL_auxz00_7606 = (int) (((long) 2));
							STRUCT_SET(BgL_res1848z00_2223, BgL_auxz00_7606, BgL_auxz00_7608);
					}}
					{	/* Unsafe/gunzip.scm 67 */
						obj_t BgL_arg2691z00_2229;

						BgL_arg2691z00_2229 =
							(((BgL_huftz00_bglt) CREF(BgL_obj1847z00_2220))->BgL_vz00);
						{	/* Unsafe/gunzip.scm 67 */
							int BgL_auxz00_7612;

							BgL_auxz00_7612 = (int) (((long) 3));
							STRUCT_SET(BgL_res1848z00_2223, BgL_auxz00_7612,
								BgL_arg2691z00_2229);
					}}
					return BgL_res1848z00_2223;
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__gunza7ipza7()
	{
		AN_OBJECT;
		{	/* Unsafe/gunzip.scm 25 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string3137z00zz__gunza7ipza7));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string3137z00zz__gunza7ipza7));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289), BSTRING_TO_STRING(BGl_string3137z00zz__gunza7ipza7));
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long)
					183289170), BSTRING_TO_STRING(BGl_string3137z00zz__gunza7ipza7));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string3137z00zz__gunza7ipza7));
			return BGl_modulezd2initializa7ationz75zz__rgcz00(((long) 284603935),
				BSTRING_TO_STRING(BGl_string3137z00zz__gunza7ipza7));
		}
	}

#ifdef __cplusplus
}
#endif
