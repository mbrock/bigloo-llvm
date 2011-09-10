/*===========================================================================*/
/*   (Unsafe/tar.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Unsafe/tar.scm -indent -o objs/obj_u/Unsafe/tar.c)*/
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

	typedef struct BgL_tarzd2headerzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_namez00;
		long BgL_modez00;
		long BgL_uidz00;
		long BgL_gidz00;
		long BgL_siza7eza7;
		obj_t BgL_mtimez00;
		long BgL_checksumz00;
		obj_t BgL_typez00;
		obj_t BgL_linknamez00;
		obj_t BgL_magicz00;
		obj_t BgL_unamez00;
		obj_t BgL_gnamez00;
		long BgL_devmajorz00;
		long BgL_devminorz00;
	}                      *BgL_tarzd2headerzd2_bglt;


	extern obj_t BGl_pwdz00zz__osz00();
	extern bool_t bigloo_strcmp(obj_t, obj_t);
	extern long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern BgL_z62iozd2parsezd2errorz62_bglt
		BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__tarzd2headerzd2nilz00zz__tarz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_untarz00zz__tarz00(obj_t, obj_t, obj_t);
	static obj_t BGl__tarzd2readzd2headerz00zz__tarz00(obj_t, obj_t);
	extern bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__tarz00 = BUNSPEC;
	static obj_t BGl__tarzd2headerzf3z21zz__tarz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2tarzd2headerzd2nilz80zz__tarz00 = BUNSPEC;
	static obj_t BGl__tarzd2headerzd2devmajorz00zz__tarz00(obj_t, obj_t);
	static obj_t BGl__tarzd2headerzd2devminorz00zz__tarz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__tarz00();
	extern obj_t BGl_objectz00zz__objectz00;
	extern bool_t fexists(char *);
	static obj_t BGl__tarzd2headerzd2gnamez00zz__tarz00(obj_t, obj_t);
	extern obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_tarzd2roundzd2upzd2tozd2recordzd2siza7ez75zz__tarz00(obj_t);
	extern obj_t string_for_read(obj_t);
	static obj_t BGl_tarzd2errorzd2zz__tarz00(obj_t, obj_t);
	extern obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t);
	static obj_t BGl_tarzd2typezd2namez00zz__tarz00(unsigned char);
	extern long BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl__untarz00zz__tarz00(obj_t, obj_t);
	static obj_t BGl__tarzd2headerzd2namez00zz__tarz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_tarzd2headerzd2_bglt
		BGl_tarzd2headerzd2nilz00zz__tarz00();
	static obj_t BGl_cnstzd2initzd2zz__tarz00();
	static long BGl_checksumz00zz__tarz00(obj_t);
	extern obj_t bgl_display_obj(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_tarzd2headerzd2_bglt
		BGl_fillzd2tarzd2headerz12z12zz__tarz00(BgL_tarzd2headerzd2_bglt, obj_t,
		long, long, long, long, obj_t, long, obj_t, obj_t, obj_t, obj_t, obj_t,
		long, long);
	static obj_t BGl_importedzd2moduleszd2initz00zz__tarz00();
	extern bool_t directoryp(char *);
	static obj_t BGl_extractz00zz__tarz00(long, obj_t, obj_t, obj_t, obj_t, long);
	extern obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl__tarzd2headerzd2linknamez00zz__tarz00(obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__tarzd2readzd2blockz00zz__tarz00(obj_t, obj_t);
	extern obj_t bstring_to_keyword(obj_t);
	static obj_t BGl_untarzd2filezd2zz__tarz00(obj_t, obj_t);
	static obj_t BGl__tarzd2headerzd2typez00zz__tarz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__tarz00(long,
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
	BGL_EXPORTED_DECL BgL_tarzd2headerzd2_bglt
		BGl_z52allocatezd2tarzd2headerz52zz__tarz00();
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl__tarzd2headerzd2mtimez00zz__tarz00(obj_t, obj_t);
	static obj_t BGl__tarzd2headerzd2gidz00zz__tarz00(obj_t, obj_t);
	extern long bgl_current_seconds();
	static obj_t BGl__z52allocatezd2tarzd2headerz52zz__tarz00(obj_t);
	extern obj_t bgl_seconds_to_date(long);
	static obj_t BGl__tarzd2headerzd2siza7eza7zz__tarz00(obj_t, obj_t);
	static obj_t BGl__tarzd2headerzd2modez00zz__tarz00(obj_t, obj_t);
	extern obj_t BGl_readzd2charszd2zz__r4_input_6_10_2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tarzd2readzd2blockz00zz__tarz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_tarzd2headerzd2_bglt
		BGl_makezd2tarzd2headerz00zz__tarz00(obj_t, long, long, long, long, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, long, long);
	static obj_t BGl__tarzd2headerzd2uidz00zz__tarz00(obj_t, obj_t);
	static obj_t BGl_untarzd2directoryzd2zz__tarz00(obj_t, obj_t);
	extern bool_t BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static bool_t BGl_rmzd2rfzd2zz__tarz00(obj_t);
	static obj_t BGl__tarzd2headerzd2checksumz00zz__tarz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32189ze3z83zz__tarz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_tarzd2headerzd2zz__tarz00 = BUNSPEC;
	extern BgL_z62iozd2errorzb0_bglt
		BGl_makezd2z62iozd2errorz62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2tarzd2h2017z31zz__tarz00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_tarzd2headerzf3z21zz__tarz00(obj_t);
	static obj_t BGl_symbol2700z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2702z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2704z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2706z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2708z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2698z00zz__tarz00 = BUNSPEC;
	static obj_t BGl__makezd2tarzd2headerz00zz__tarz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2710z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2712z00zz__tarz00 = BUNSPEC;
	static obj_t BGl__tarzd2headerzd2magicz00zz__tarz00(obj_t, obj_t);
	static obj_t BGl_symbol2714z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2716z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2720z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2724z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2726z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2728z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2730z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2732z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2734z00zz__tarz00 = BUNSPEC;
	extern long BGl_stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	static obj_t BGl_symbol2736z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2738z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2740z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2742z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2744z00zz__tarz00 = BUNSPEC;
	extern obj_t BGl_dirnamez00zz__osz00(obj_t);
	static obj_t BGl_symbol2746z00zz__tarz00 = BUNSPEC;
	static obj_t BGl__fillzd2tarzd2headerz12z12zz__tarz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2748z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2757z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2760z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2771z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2775z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2776z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2778z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2786z00zz__tarz00 = BUNSPEC;
	static obj_t BGl__tarzd2headerzd2unamez00zz__tarz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__tarz00();
	static obj_t BGl__tarzd2roundzd2upzd2tozd2recordzd2siza7ez75zz__tarz00(obj_t,
		obj_t);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t BGl_raisez00zz__errorz00(obj_t);
	extern obj_t BGl_getzd2tracezd2stackz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tarzd2readzd2headerz00zz__tarz00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2019z83zz__tarz00(obj_t, obj_t,
		obj_t);
	extern obj_t directory_to_list(char *);
	static obj_t BGl_keyword2764z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_keyword2766z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zz__tarz00();
	extern obj_t BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00();
	extern obj_t BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_untarzd2envzd2zz__tarz00,
		BgL_bgl__untarza700za7za7__tar2809za7, opt_generic_entry,
		BGl__untarz00zz__tarz00, BFALSE, -1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_tarzd2headerzd2typezd2envzd2zz__tarz00,
		BgL_bgl__tarza7d2headerza7d22810z00, BGl__tarzd2headerzd2typez00zz__tarz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_tarzd2headerzd2siza7ezd2envz75zz__tarz00,
		BgL_bgl__tarza7d2headerza7d22811z00,
		BGl__tarzd2headerzd2siza7eza7zz__tarz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_tarzd2headerzd2mtimezd2envzd2zz__tarz00,
		BgL_bgl__tarza7d2headerza7d22812z00, BGl__tarzd2headerzd2mtimez00zz__tarz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tarzd2roundzd2upzd2tozd2recordzd2siza7ezd2envza7zz__tarz00,
		BgL_bgl__tarza7d2roundza7d2u2813z00,
		BGl__tarzd2roundzd2upzd2tozd2recordzd2siza7ez75zz__tarz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_tarzd2headerzd2gnamezd2envzd2zz__tarz00,
		BgL_bgl__tarza7d2headerza7d22814z00, BGl__tarzd2headerzd2gnamez00zz__tarz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_tarzd2headerzd2modezd2envzd2zz__tarz00,
		BgL_bgl__tarza7d2headerza7d22815z00, BGl__tarzd2headerzd2modez00zz__tarz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_tarzd2headerzd2linknamezd2envzd2zz__tarz00,
		BgL_bgl__tarza7d2headerza7d22816z00,
		BGl__tarzd2headerzd2linknamez00zz__tarz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_tarzd2headerzd2magiczd2envzd2zz__tarz00,
		BgL_bgl__tarza7d2headerza7d22817z00, BGl__tarzd2headerzd2magicz00zz__tarz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2802z00zz__tarz00,
		BgL_bgl_objectza7d2za7e3stru2818z00,
		BGl_objectzd2ze3structzd2tarzd2h2017z31zz__tarz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_tarzd2headerzd2namezd2envzd2zz__tarz00,
		BgL_bgl__tarza7d2headerza7d22819z00, BGl__tarzd2headerzd2namez00zz__tarz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2804z00zz__tarz00,
		BgL_bgl_structza7b2objectza72820z00,
		BGl_structzb2objectzd2ze3objec2019z83zz__tarz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tarzd2readzd2headerzd2envzd2zz__tarz00,
		BgL_bgl__tarza7d2readza7d2he2821z00, opt_generic_entry,
		BGl__tarzd2readzd2headerz00zz__tarz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2tarzd2headerzd2envz80zz__tarz00,
		BgL_bgl__za752allocateza7d2t2822z00,
		BGl__z52allocatezd2tarzd2headerz52zz__tarz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2701z00zz__tarz00,
		BgL_bgl_string2701za700za7za7_2823za7, "oldnormal", 9);
	      DEFINE_STRING(BGl_string2703z00zz__tarz00,
		BgL_bgl_string2703za700za7za7_2824za7, "normal", 6);
	      DEFINE_STRING(BGl_string2705z00zz__tarz00,
		BgL_bgl_string2705za700za7za7_2825za7, "link", 4);
	      DEFINE_STRING(BGl_string2707z00zz__tarz00,
		BgL_bgl_string2707za700za7za7_2826za7, "symlink", 7);
	      DEFINE_STRING(BGl_string2709z00zz__tarz00,
		BgL_bgl_string2709za700za7za7_2827za7, "chr", 3);
	      DEFINE_STRING(BGl_string2699z00zz__tarz00,
		BgL_bgl_string2699za700za7za7_2828za7, "tar", 3);
	      DEFINE_STRING(BGl_string2711z00zz__tarz00,
		BgL_bgl_string2711za700za7za7_2829za7, "blk", 3);
	      DEFINE_STRING(BGl_string2713z00zz__tarz00,
		BgL_bgl_string2713za700za7za7_2830za7, "dir", 3);
	      DEFINE_STRING(BGl_string2715z00zz__tarz00,
		BgL_bgl_string2715za700za7za7_2831za7, "fifo", 4);
	      DEFINE_STRING(BGl_string2717z00zz__tarz00,
		BgL_bgl_string2717za700za7za7_2832za7, "contig", 6);
	      DEFINE_STRING(BGl_string2718z00zz__tarz00,
		BgL_bgl_string2718za700za7za7_2833za7, "invalid file type", 17);
	      DEFINE_STRING(BGl_string2719z00zz__tarz00,
		BgL_bgl_string2719za700za7za7_2834za7, "        ", 8);
	      DEFINE_STRING(BGl_string2721z00zz__tarz00,
		BgL_bgl_string2721za700za7za7_2835za7, "tar-read-header", 15);
	      DEFINE_STRING(BGl_string2722z00zz__tarz00,
		BgL_bgl_string2722za700za7za7_2836za7, "input-port", 10);
	      DEFINE_STRING(BGl_string2723z00zz__tarz00,
		BgL_bgl_string2723za700za7za7_2837za7, "", 0);
	      DEFINE_STRING(BGl_string2725z00zz__tarz00,
		BgL_bgl_string2725za700za7za7_2838za7, "name", 4);
	      DEFINE_STRING(BGl_string2727z00zz__tarz00,
		BgL_bgl_string2727za700za7za7_2839za7, "mode", 4);
	      DEFINE_STRING(BGl_string2729z00zz__tarz00,
		BgL_bgl_string2729za700za7za7_2840za7, "uid", 3);
	      DEFINE_STRING(BGl_string2731z00zz__tarz00,
		BgL_bgl_string2731za700za7za7_2841za7, "gid", 3);
	      DEFINE_STRING(BGl_string2733z00zz__tarz00,
		BgL_bgl_string2733za700za7za7_2842za7, "size", 4);
	      DEFINE_STRING(BGl_string2735z00zz__tarz00,
		BgL_bgl_string2735za700za7za7_2843za7, "mtime", 5);
	      DEFINE_STRING(BGl_string2737z00zz__tarz00,
		BgL_bgl_string2737za700za7za7_2844za7, "chksum", 6);
	      DEFINE_STRING(BGl_string2739z00zz__tarz00,
		BgL_bgl_string2739za700za7za7_2845za7, "linkname", 8);
	      DEFINE_STRING(BGl_string2741z00zz__tarz00,
		BgL_bgl_string2741za700za7za7_2846za7, "magic", 5);
	      DEFINE_STRING(BGl_string2743z00zz__tarz00,
		BgL_bgl_string2743za700za7za7_2847za7, "uname", 5);
	      DEFINE_STRING(BGl_string2745z00zz__tarz00,
		BgL_bgl_string2745za700za7za7_2848za7, "gname", 5);
	      DEFINE_STRING(BGl_string2747z00zz__tarz00,
		BgL_bgl_string2747za700za7za7_2849za7, "devmajor", 8);
	      DEFINE_STRING(BGl_string2750z00zz__tarz00,
		BgL_bgl_string2750za700za7za7_2850za7, "ustar  ", 7);
	      DEFINE_STRING(BGl_string2749z00zz__tarz00,
		BgL_bgl_string2749za700za7za7_2851za7, "devminor", 8);
	      DEFINE_STRING(BGl_string2751z00zz__tarz00,
		BgL_bgl_string2751za700za7za7_2852za7, "ustar", 5);
	      DEFINE_STRING(BGl_string2752z00zz__tarz00,
		BgL_bgl_string2752za700za7za7_2853za7, "GNUtar ", 7);
	      DEFINE_STRING(BGl_string2753z00zz__tarz00,
		BgL_bgl_string2753za700za7za7_2854za7, "invalid checksum (expected: ~s)",
		31);
	      DEFINE_STRING(BGl_string2754z00zz__tarz00,
		BgL_bgl_string2754za700za7za7_2855za7, "invalid magic number", 20);
	      DEFINE_STRING(BGl_string2755z00zz__tarz00,
		BgL_bgl_string2755za700za7za7_2856za7,
		"no terminator for zero-terminated `~a' found", 44);
	      DEFINE_STRING(BGl_string2756z00zz__tarz00,
		BgL_bgl_string2756za700za7za7_2857za7, "corrupted tar file", 18);
	      DEFINE_STRING(BGl_string2758z00zz__tarz00,
		BgL_bgl_string2758za700za7za7_2858za7, "tar-round-up-to-record-size", 27);
	      DEFINE_STRING(BGl_string2759z00zz__tarz00,
		BgL_bgl_string2759za700za7za7_2859za7, "long", 4);
	      DEFINE_STRING(BGl_string2761z00zz__tarz00,
		BgL_bgl_string2761za700za7za7_2860za7, "tar-read-block", 14);
	      DEFINE_STRING(BGl_string2762z00zz__tarz00,
		BgL_bgl_string2762za700za7za7_2861za7, "Illegal block", 13);
	      DEFINE_STRING(BGl_string2763z00zz__tarz00,
		BgL_bgl_string2763za700za7za7_2862za7, "tar-header", 10);
	      DEFINE_STRING(BGl_string2765z00zz__tarz00,
		BgL_bgl_string2765za700za7za7_2863za7, "directory", 9);
	      DEFINE_STRING(BGl_string2767z00zz__tarz00,
		BgL_bgl_string2767za700za7za7_2864za7, "file", 4);
	      DEFINE_STRING(BGl_string2768z00zz__tarz00,
		BgL_bgl_string2768za700za7za7_2865za7, "/tmp/bigloo/runtime/Unsafe/tar.scm",
		34);
	      DEFINE_STRING(BGl_string2770z00zz__tarz00,
		BgL_bgl_string2770za700za7za7_2866za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2769z00zz__tarz00,
		BgL_bgl_string2769za700za7za7_2867za7, "_untar", 6);
	      DEFINE_STRING(BGl_string2772z00zz__tarz00,
		BgL_bgl_string2772za700za7za7_2868za7, "untar", 5);
	      DEFINE_STRING(BGl_string2773z00zz__tarz00,
		BgL_bgl_string2773za700za7za7_2869za7, "Cannot create directory", 23);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_tarzd2headerzd2uidzd2envzd2zz__tarz00,
		BgL_bgl__tarza7d2headerza7d22870z00, BGl__tarzd2headerzd2uidz00zz__tarz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2774z00zz__tarz00,
		BgL_bgl_string2774za700za7za7_2871za7, "Illegal file type `~a'", 22);
	      DEFINE_STRING(BGl_string2777z00zz__tarz00,
		BgL_bgl_string2777za700za7za7_2872za7, "checksum", 8);
	      DEFINE_STRING(BGl_string2780z00zz__tarz00,
		BgL_bgl_string2780za700za7za7_2873za7, "_make-tar-header", 16);
	      DEFINE_STRING(BGl_string2779z00zz__tarz00,
		BgL_bgl_string2779za700za7za7_2874za7, "type", 4);
	      DEFINE_STRING(BGl_string2781z00zz__tarz00,
		BgL_bgl_string2781za700za7za7_2875za7, "elong", 5);
	      DEFINE_STRING(BGl_string2782z00zz__tarz00,
		BgL_bgl_string2782za700za7za7_2876za7, "date", 4);
	      DEFINE_STRING(BGl_string2783z00zz__tarz00,
		BgL_bgl_string2783za700za7za7_2877za7, "symbol", 6);
	      DEFINE_STRING(BGl_string2784z00zz__tarz00,
		BgL_bgl_string2784za700za7za7_2878za7, "_fill-tar-header!", 17);
	      DEFINE_STRING(BGl_string2785z00zz__tarz00,
		BgL_bgl_string2785za700za7za7_2879za7, "0", 1);
	      DEFINE_STRING(BGl_string2787z00zz__tarz00,
		BgL_bgl_string2787za700za7za7_2880za7, "_", 1);
	      DEFINE_STRING(BGl_string2788z00zz__tarz00,
		BgL_bgl_string2788za700za7za7_2881za7, "_tar-header-name", 16);
	      DEFINE_STRING(BGl_string2800z00zz__tarz00,
		BgL_bgl_string2800za700za7za7_2882za7, "_tar-header-devmajor", 20);
	      DEFINE_STRING(BGl_string2790z00zz__tarz00,
		BgL_bgl_string2790za700za7za7_2883za7, "_tar-header-uid", 15);
	      DEFINE_STRING(BGl_string2789z00zz__tarz00,
		BgL_bgl_string2789za700za7za7_2884za7, "_tar-header-mode", 16);
	      DEFINE_STRING(BGl_string2801z00zz__tarz00,
		BgL_bgl_string2801za700za7za7_2885za7, "_tar-header-devminor", 20);
	      DEFINE_STRING(BGl_string2791z00zz__tarz00,
		BgL_bgl_string2791za700za7za7_2886za7, "_tar-header-gid", 15);
	      DEFINE_STRING(BGl_string2792z00zz__tarz00,
		BgL_bgl_string2792za700za7za7_2887za7, "_tar-header-size", 16);
	      DEFINE_STRING(BGl_string2803z00zz__tarz00,
		BgL_bgl_string2803za700za7za7_2888za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string2793z00zz__tarz00,
		BgL_bgl_string2793za700za7za7_2889za7, "_tar-header-mtime", 17);
	      DEFINE_STRING(BGl_string2794z00zz__tarz00,
		BgL_bgl_string2794za700za7za7_2890za7, "_tar-header-checksum", 20);
	      DEFINE_STRING(BGl_string2805z00zz__tarz00,
		BgL_bgl_string2805za700za7za7_2891za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string2795z00zz__tarz00,
		BgL_bgl_string2795za700za7za7_2892za7, "_tar-header-type", 16);
	      DEFINE_STRING(BGl_string2806z00zz__tarz00,
		BgL_bgl_string2806za700za7za7_2893za7, "__tar", 5);
	      DEFINE_STRING(BGl_string2796z00zz__tarz00,
		BgL_bgl_string2796za700za7za7_2894za7, "_tar-header-linkname", 20);
	      DEFINE_STRING(BGl_string2797z00zz__tarz00,
		BgL_bgl_string2797za700za7za7_2895za7, "_tar-header-magic", 17);
	      DEFINE_STRING(BGl_string2798z00zz__tarz00,
		BgL_bgl_string2798za700za7za7_2896za7, "_tar-header-uname", 17);
	      DEFINE_STRING(BGl_string2799z00zz__tarz00,
		BgL_bgl_string2799za700za7za7_2897za7, "_tar-header-gname", 17);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_tarzd2headerzd2checksumzd2envzd2zz__tarz00,
		BgL_bgl__tarza7d2headerza7d22898z00,
		BGl__tarzd2headerzd2checksumz00zz__tarz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_tarzd2headerzd2unamezd2envzd2zz__tarz00,
		BgL_bgl__tarza7d2headerza7d22899z00, BGl__tarzd2headerzd2unamez00zz__tarz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tarzd2headerzf3zd2envzf3zz__tarz00,
		BgL_bgl__tarza7d2headerza7f32900z00, BGl__tarzd2headerzf3z21zz__tarz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_tarzd2headerzd2gidzd2envzd2zz__tarz00,
		BgL_bgl__tarza7d2headerza7d22901z00, BGl__tarzd2headerzd2gidz00zz__tarz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_tarzd2headerzd2devminorzd2envzd2zz__tarz00,
		BgL_bgl__tarza7d2headerza7d22902z00,
		BGl__tarzd2headerzd2devminorz00zz__tarz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tarzd2headerzd2nilzd2envzd2zz__tarz00,
		BgL_bgl__tarza7d2headerza7d22903z00, BGl__tarzd2headerzd2nilz00zz__tarz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tarzd2readzd2blockzd2envzd2zz__tarz00,
		BgL_bgl__tarza7d2readza7d2bl2904z00, opt_generic_entry,
		BGl__tarzd2readzd2blockz00zz__tarz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2tarzd2headerz12zd2envzc0zz__tarz00,
		BgL_bgl__fillza7d2tarza7d2he2905z00,
		BGl__fillzd2tarzd2headerz12z12zz__tarz00, 0L, BUNSPEC, 15);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_tarzd2headerzd2devmajorzd2envzd2zz__tarz00,
		BgL_bgl__tarza7d2headerza7d22906z00,
		BGl__tarzd2headerzd2devmajorz00zz__tarz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	extern obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2tarzd2headerzd2envzd2zz__tarz00,
		BgL_bgl__makeza7d2tarza7d2he2907z00, BGl__makezd2tarzd2headerz00zz__tarz00,
		0L, BUNSPEC, 14);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__tarz00(long
		BgL_checksumz00_2805, char *BgL_fromz00_2806)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__tarz00))
				{
					BGl_requirezd2initializa7ationz75zz__tarz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__tarz00();
					BGl_importedzd2moduleszd2initz00zz__tarz00();
					BGl_objectzd2initzd2zz__tarz00();
					BGl_methodzd2initzd2zz__tarz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__tarz00()
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 17 */
			BGl_symbol2698z00zz__tarz00 =
				bstring_to_symbol(BGl_string2699z00zz__tarz00);
			BGl_symbol2700z00zz__tarz00 =
				bstring_to_symbol(BGl_string2701z00zz__tarz00);
			BGl_symbol2702z00zz__tarz00 =
				bstring_to_symbol(BGl_string2703z00zz__tarz00);
			BGl_symbol2704z00zz__tarz00 =
				bstring_to_symbol(BGl_string2705z00zz__tarz00);
			BGl_symbol2706z00zz__tarz00 =
				bstring_to_symbol(BGl_string2707z00zz__tarz00);
			BGl_symbol2708z00zz__tarz00 =
				bstring_to_symbol(BGl_string2709z00zz__tarz00);
			BGl_symbol2710z00zz__tarz00 =
				bstring_to_symbol(BGl_string2711z00zz__tarz00);
			BGl_symbol2712z00zz__tarz00 =
				bstring_to_symbol(BGl_string2713z00zz__tarz00);
			BGl_symbol2714z00zz__tarz00 =
				bstring_to_symbol(BGl_string2715z00zz__tarz00);
			BGl_symbol2716z00zz__tarz00 =
				bstring_to_symbol(BGl_string2717z00zz__tarz00);
			BGl_symbol2720z00zz__tarz00 =
				bstring_to_symbol(BGl_string2721z00zz__tarz00);
			BGl_symbol2724z00zz__tarz00 =
				bstring_to_symbol(BGl_string2725z00zz__tarz00);
			BGl_symbol2726z00zz__tarz00 =
				bstring_to_symbol(BGl_string2727z00zz__tarz00);
			BGl_symbol2728z00zz__tarz00 =
				bstring_to_symbol(BGl_string2729z00zz__tarz00);
			BGl_symbol2730z00zz__tarz00 =
				bstring_to_symbol(BGl_string2731z00zz__tarz00);
			BGl_symbol2732z00zz__tarz00 =
				bstring_to_symbol(BGl_string2733z00zz__tarz00);
			BGl_symbol2734z00zz__tarz00 =
				bstring_to_symbol(BGl_string2735z00zz__tarz00);
			BGl_symbol2736z00zz__tarz00 =
				bstring_to_symbol(BGl_string2737z00zz__tarz00);
			BGl_symbol2738z00zz__tarz00 =
				bstring_to_symbol(BGl_string2739z00zz__tarz00);
			BGl_symbol2740z00zz__tarz00 =
				bstring_to_symbol(BGl_string2741z00zz__tarz00);
			BGl_symbol2742z00zz__tarz00 =
				bstring_to_symbol(BGl_string2743z00zz__tarz00);
			BGl_symbol2744z00zz__tarz00 =
				bstring_to_symbol(BGl_string2745z00zz__tarz00);
			BGl_symbol2746z00zz__tarz00 =
				bstring_to_symbol(BGl_string2747z00zz__tarz00);
			BGl_symbol2748z00zz__tarz00 =
				bstring_to_symbol(BGl_string2749z00zz__tarz00);
			BGl_symbol2757z00zz__tarz00 =
				bstring_to_symbol(BGl_string2758z00zz__tarz00);
			BGl_symbol2760z00zz__tarz00 =
				bstring_to_symbol(BGl_string2761z00zz__tarz00);
			BGl_keyword2764z00zz__tarz00 =
				bstring_to_keyword(BGl_string2765z00zz__tarz00);
			BGl_keyword2766z00zz__tarz00 =
				bstring_to_keyword(BGl_string2767z00zz__tarz00);
			BGl_symbol2771z00zz__tarz00 =
				bstring_to_symbol(BGl_string2772z00zz__tarz00);
			BGl_symbol2775z00zz__tarz00 =
				bstring_to_symbol(BGl_string2763z00zz__tarz00);
			BGl_symbol2776z00zz__tarz00 =
				bstring_to_symbol(BGl_string2777z00zz__tarz00);
			BGl_symbol2778z00zz__tarz00 =
				bstring_to_symbol(BGl_string2779z00zz__tarz00);
			return (BGl_symbol2786z00zz__tarz00 =
				bstring_to_symbol(BGl_string2787z00zz__tarz00), BUNSPEC);
		}
	}



/* tar-error */
	obj_t BGl_tarzd2errorzd2zz__tarz00(obj_t BgL_msgz00_1, obj_t BgL_objz00_2)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 78 */
			{	/* Llib/object.scm 90 */
				BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2051z00_1812;

				{	/* Llib/object.scm 90 */
					obj_t BgL_arg2052z00_1813;

					obj_t BgL_arg2053z00_1814;

					{	/* Llib/object.scm 90 */

						{	/* Llib/object.scm 90 */

							BgL_arg2052z00_1813 =
								BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
						}
					}
					BgL_arg2053z00_1814 = BGl_symbol2698z00zz__tarz00;
					BgL_arg2051z00_1812 =
						BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(BFALSE, BFALSE,
						BgL_arg2052z00_1813, BgL_arg2053z00_1814, BgL_msgz00_1,
						BgL_objz00_2);
				}
				return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2051z00_1812));
			}
		}
	}



/* tar-type-name */
	obj_t BGl_tarzd2typezd2namez00zz__tarz00(unsigned char BgL_cz00_3)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 98 */
			switch (BgL_cz00_3)
				{
				case ((unsigned char) '\000'):

					return BGl_symbol2700z00zz__tarz00;
					break;
				case ((unsigned char) '0'):

					return BGl_symbol2702z00zz__tarz00;
					break;
				case ((unsigned char) '1'):

					return BGl_symbol2704z00zz__tarz00;
					break;
				case ((unsigned char) '2'):

					return BGl_symbol2706z00zz__tarz00;
					break;
				case ((unsigned char) '3'):

					return BGl_symbol2708z00zz__tarz00;
					break;
				case ((unsigned char) '4'):

					return BGl_symbol2710z00zz__tarz00;
					break;
				case ((unsigned char) '5'):

					return BGl_symbol2712z00zz__tarz00;
					break;
				case ((unsigned char) '6'):

					return BGl_symbol2714z00zz__tarz00;
					break;
				case ((unsigned char) '7'):

					return BGl_symbol2716z00zz__tarz00;
					break;
				default:
					return
						BGl_tarzd2errorzd2zz__tarz00(BGl_string2718z00zz__tarz00,
						BCHAR(BgL_cz00_3));
				}
		}
	}



/* checksum */
	long BGl_checksumz00zz__tarz00(obj_t BgL_bufz00_8)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 123 */
			{	/* Unsafe/tar.scm 124 */
				long BgL_pz00_970;

				BgL_pz00_970 = (((long) 100) + ((long) 48));
				{	/* Unsafe/tar.scm 124 */
					obj_t BgL_b2z00_971;

					BgL_b2z00_971 =
						string_append_3(c_substring(BgL_bufz00_8, ((long) 0), BgL_pz00_970),
						BGl_string2719z00zz__tarz00, c_substring(BgL_bufz00_8,
							(BgL_pz00_970 + ((long) 8)), STRING_LENGTH(BgL_bufz00_8)));
					{	/* Unsafe/tar.scm 125 */

						{
							long BgL_iz00_1850;

							long BgL_sz00_1851;

							BgL_iz00_1850 = ((long) 0);
							BgL_sz00_1851 = ((long) 0);
						BgL_dozd2loopzd2zd21949zd2_1849:
							if ((BgL_iz00_1850 >= ((long) 512)))
								{	/* Unsafe/tar.scm 129 */
									return BgL_sz00_1851;
								}
							else
								{
									long BgL_sz00_2864;

									long BgL_iz00_2862;

									BgL_iz00_2862 = (((long) 1) + BgL_iz00_1850);
									BgL_sz00_2864 =
										(BgL_sz00_1851 +
										(STRING_REF(BgL_b2z00_971, BgL_iz00_1850)));
									BgL_sz00_1851 = BgL_sz00_2864;
									BgL_iz00_1850 = BgL_iz00_2862;
									goto BgL_dozd2loopzd2zd21949zd2_1849;
								}
						}
					}
				}
			}
		}
	}



/* _tar-read-header */
	obj_t BGl__tarzd2readzd2headerz00zz__tarz00(obj_t BgL_envz00_11,
		obj_t BgL_optz00_10)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 136 */
			{	/* Unsafe/tar.scm 136 */

				{	/* Unsafe/tar.scm 136 */
					int BgL_aux2004z00_991;

					BgL_aux2004z00_991 = VECTOR_LENGTH(BgL_optz00_10);
					switch ((long) (BgL_aux2004z00_991))
						{
						case ((long) 0):

							{	/* Unsafe/tar.scm 136 */
								obj_t BgL_portz00_993;

								{	/* Unsafe/tar.scm 136 */
									obj_t BgL_res2585z00_1906;

									{	/* Unsafe/tar.scm 136 */
										obj_t BgL_auxz00_2869;

										BgL_auxz00_2869 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2585z00_1906 =
											BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_2869);
									}
									BgL_portz00_993 = BgL_res2585z00_1906;
								}
								{	/* Unsafe/tar.scm 136 */

									return BGl_tarzd2readzd2headerz00zz__tarz00(BgL_portz00_993);
								}
							}
							break;
						case ((long) 1):

							{	/* Unsafe/tar.scm 136 */
								obj_t BgL_portz00_994;

								BgL_portz00_994 = VECTOR_REF(BgL_optz00_10, (int) (((long) 0)));
								{	/* Unsafe/tar.scm 136 */

									return BGl_tarzd2readzd2headerz00zz__tarz00(BgL_portz00_994);
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



/* tar-read-header */
	BGL_EXPORTED_DEF obj_t BGl_tarzd2readzd2headerz00zz__tarz00(obj_t
		BgL_portz00_9)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 136 */
			if (INPUT_PORTP(BgL_portz00_9))
				{	/* Unsafe/tar.scm 137 */
					BFALSE;
				}
			else
				{	/* Unsafe/tar.scm 137 */
					BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_symbol2720z00zz__tarz00,
						BGl_string2722z00zz__tarz00, BgL_portz00_9);
				}
			{	/* Unsafe/tar.scm 139 */
				obj_t BgL_ptrz00_996;

				{	/* Unsafe/tar.scm 139 */
					obj_t BgL_cellvalz00_2881;

					BgL_cellvalz00_2881 = BINT(((long) 0));
					BgL_ptrz00_996 = MAKE_CELL(BgL_cellvalz00_2881);
				}
				{	/* Unsafe/tar.scm 139 */
					obj_t BgL_dataz00_997;

					BgL_dataz00_997 =
						BGl_readzd2charszd2zz__r4_input_6_10_2z00(BINT(((long) 512)),
						BgL_portz00_9);
					{	/* Unsafe/tar.scm 140 */
						long BgL_lenz00_998;

						BgL_lenz00_998 = STRING_LENGTH(BgL_dataz00_997);
						{	/* Unsafe/tar.scm 141 */

							{

								{	/* Unsafe/tar.scm 163 */
									obj_t BgL_namez00_1001;

									{	/* Unsafe/tar.scm 163 */
										bool_t BgL_testz00_2886;

										if (STRINGP(BgL_dataz00_997))
											{	/* Unsafe/tar.scm 163 */
												BgL_testz00_2886 =
													(STRING_LENGTH(BgL_dataz00_997) == ((long) 0));
											}
										else
											{	/* Unsafe/tar.scm 163 */
												BgL_testz00_2886 = ((bool_t) 1);
											}
										if (BgL_testz00_2886)
											{	/* Unsafe/tar.scm 163 */
												BgL_namez00_1001 = BGl_string2723z00zz__tarz00;
											}
										else
											{	/* Unsafe/tar.scm 163 */
												BgL_namez00_1001 =
													BGl_extractz00zz__tarz00(BgL_lenz00_998,
													BgL_portz00_9, BgL_dataz00_997, BgL_ptrz00_996,
													BGl_symbol2724z00zz__tarz00, ((long) 100));
									}}
									if ((STRING_LENGTH(BgL_namez00_1001) > ((long) 0)))
										{	/* Unsafe/tar.scm 167 */
											obj_t BgL_modez00_1003;

											{	/* Unsafe/tar.scm 167 */
												obj_t BgL_arg2109z00_1053;

												BgL_arg2109z00_1053 =
													BGl_extractz00zz__tarz00(BgL_lenz00_998,
													BgL_portz00_9, BgL_dataz00_997, BgL_ptrz00_996,
													BGl_symbol2726z00zz__tarz00, ((long) 8));
												{	/* Unsafe/tar.scm 167 */

													{	/* Unsafe/tar.scm 167 */
														long BgL__ortest_1948z00_1918;

														{	/* Unsafe/tar.scm 167 */
															obj_t BgL_list2058z00_1919;

															BgL_list2058z00_1919 =
																MAKE_PAIR(BINT(((long) 8)), BNIL);
															BgL__ortest_1948z00_1918 =
																BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00
																(BgL_arg2109z00_1053, BgL_list2058z00_1919);
														}
														BgL_modez00_1003 = BINT(BgL__ortest_1948z00_1918);
											}}}
											{	/* Unsafe/tar.scm 167 */
												obj_t BgL_uidz00_1004;

												{	/* Unsafe/tar.scm 168 */
													obj_t BgL_arg2108z00_1050;

													BgL_arg2108z00_1050 =
														BGl_extractz00zz__tarz00(BgL_lenz00_998,
														BgL_portz00_9, BgL_dataz00_997, BgL_ptrz00_996,
														BGl_symbol2728z00zz__tarz00, ((long) 8));
													{	/* Unsafe/tar.scm 168 */

														{	/* Unsafe/tar.scm 168 */
															long BgL__ortest_1948z00_1922;

															{	/* Unsafe/tar.scm 168 */
																obj_t BgL_list2058z00_1923;

																BgL_list2058z00_1923 =
																	MAKE_PAIR(BINT(((long) 8)), BNIL);
																BgL__ortest_1948z00_1922 =
																	BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00
																	(BgL_arg2108z00_1050, BgL_list2058z00_1923);
															}
															BgL_uidz00_1004 = BINT(BgL__ortest_1948z00_1922);
												}}}
												{	/* Unsafe/tar.scm 168 */
													obj_t BgL_gidz00_1005;

													{	/* Unsafe/tar.scm 169 */
														obj_t BgL_arg2107z00_1047;

														BgL_arg2107z00_1047 =
															BGl_extractz00zz__tarz00(BgL_lenz00_998,
															BgL_portz00_9, BgL_dataz00_997, BgL_ptrz00_996,
															BGl_symbol2730z00zz__tarz00, ((long) 8));
														{	/* Unsafe/tar.scm 169 */

															{	/* Unsafe/tar.scm 169 */
																long BgL__ortest_1948z00_1926;

																{	/* Unsafe/tar.scm 169 */
																	obj_t BgL_list2058z00_1927;

																	BgL_list2058z00_1927 =
																		MAKE_PAIR(BINT(((long) 8)), BNIL);
																	BgL__ortest_1948z00_1926 =
																		BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00
																		(BgL_arg2107z00_1047, BgL_list2058z00_1927);
																}
																BgL_gidz00_1005 =
																	BINT(BgL__ortest_1948z00_1926);
													}}}
													{	/* Unsafe/tar.scm 169 */
														long BgL_siza7eza7_1006;

														{	/* Unsafe/tar.scm 170 */
															obj_t BgL_arg2104z00_1044;

															BgL_arg2104z00_1044 =
																BGl_extractz00zz__tarz00(BgL_lenz00_998,
																BgL_portz00_9, BgL_dataz00_997, BgL_ptrz00_996,
																BGl_symbol2732z00zz__tarz00, ((long) 12));
															{	/* Unsafe/tar.scm 170 */
																obj_t BgL_list2106z00_1046;

																BgL_list2106z00_1046 =
																	MAKE_PAIR(BINT(((long) 8)), BNIL);
																BgL_siza7eza7_1006 =
																	BGl_stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00
																	(BgL_arg2104z00_1044, BgL_list2106z00_1046);
														}}
														{	/* Unsafe/tar.scm 170 */
															long BgL_mtimez00_1007;

															{	/* Unsafe/tar.scm 171 */
																obj_t BgL_arg2101z00_1041;

																BgL_arg2101z00_1041 =
																	BGl_extractz00zz__tarz00(BgL_lenz00_998,
																	BgL_portz00_9, BgL_dataz00_997,
																	BgL_ptrz00_996, BGl_symbol2734z00zz__tarz00,
																	((long) 12));
																{	/* Unsafe/tar.scm 171 */
																	obj_t BgL_list2103z00_1043;

																	BgL_list2103z00_1043 =
																		MAKE_PAIR(BINT(((long) 8)), BNIL);
																	BgL_mtimez00_1007 =
																		BGl_stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00
																		(BgL_arg2101z00_1041, BgL_list2103z00_1043);
															}}
															{	/* Unsafe/tar.scm 171 */
																obj_t BgL_chksumz00_1008;

																{	/* Unsafe/tar.scm 172 */
																	obj_t BgL_arg2100z00_1038;

																	BgL_arg2100z00_1038 =
																		BGl_extractz00zz__tarz00(BgL_lenz00_998,
																		BgL_portz00_9, BgL_dataz00_997,
																		BgL_ptrz00_996, BGl_symbol2736z00zz__tarz00,
																		((long) 8));
																	{	/* Unsafe/tar.scm 172 */

																		{	/* Unsafe/tar.scm 172 */
																			long BgL__ortest_1948z00_1930;

																			{	/* Unsafe/tar.scm 172 */
																				obj_t BgL_list2058z00_1931;

																				BgL_list2058z00_1931 =
																					MAKE_PAIR(BINT(((long) 8)), BNIL);
																				BgL__ortest_1948z00_1930 =
																					BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00
																					(BgL_arg2100z00_1038,
																					BgL_list2058z00_1931);
																			}
																			BgL_chksumz00_1008 =
																				BINT(BgL__ortest_1948z00_1930);
																}}}
																{	/* Unsafe/tar.scm 172 */
																	unsigned char BgL_linkflagz00_1009;

																	{	/* Unsafe/tar.scm 160 */
																		unsigned char BgL_cz00_1082;

																		{	/* Unsafe/tar.scm 160 */
																			obj_t BgL_stringz00_2044;

																			BgL_stringz00_2044 = BgL_dataz00_997;
																			BgL_cz00_1082 =
																				STRING_REF(BgL_stringz00_2044,
																				(long) CINT(CELL_REF(BgL_ptrz00_996)));
																		}
																		{	/* Unsafe/tar.scm 161 */
																			obj_t BgL_auxz00_2631;

																			BgL_auxz00_2631 =
																				BINT(
																				(((long) 1) +
																					(long)
																					CINT(CELL_REF(BgL_ptrz00_996))));
																			CELL_SET(BgL_ptrz00_996, BgL_auxz00_2631);
																		}
																		BgL_linkflagz00_1009 = BgL_cz00_1082;
																	}
																	{	/* Unsafe/tar.scm 173 */
																		obj_t BgL_linknamez00_1010;

																		BgL_linknamez00_1010 =
																			BGl_extractz00zz__tarz00(BgL_lenz00_998,
																			BgL_portz00_9, BgL_dataz00_997,
																			BgL_ptrz00_996,
																			BGl_symbol2738z00zz__tarz00,
																			((long) 100));
																		{	/* Unsafe/tar.scm 174 */
																			obj_t BgL_magicz00_1011;

																			BgL_magicz00_1011 =
																				BGl_extractz00zz__tarz00(BgL_lenz00_998,
																				BgL_portz00_9, BgL_dataz00_997,
																				BgL_ptrz00_996,
																				BGl_symbol2740z00zz__tarz00,
																				((long) 8));
																			{	/* Unsafe/tar.scm 175 */
																				obj_t BgL_unamez00_1012;

																				BgL_unamez00_1012 =
																					BGl_extractz00zz__tarz00
																					(BgL_lenz00_998, BgL_portz00_9,
																					BgL_dataz00_997, BgL_ptrz00_996,
																					BGl_symbol2742z00zz__tarz00,
																					((long) 32));
																				{	/* Unsafe/tar.scm 176 */
																					obj_t BgL_gnamez00_1013;

																					BgL_gnamez00_1013 =
																						BGl_extractz00zz__tarz00
																						(BgL_lenz00_998, BgL_portz00_9,
																						BgL_dataz00_997, BgL_ptrz00_996,
																						BGl_symbol2744z00zz__tarz00,
																						((long) 32));
																					{	/* Unsafe/tar.scm 177 */
																						obj_t BgL_devmajorz00_1014;

																						{	/* Unsafe/tar.scm 178 */
																							obj_t BgL_arg2093z00_1031;

																							BgL_arg2093z00_1031 =
																								BGl_extractz00zz__tarz00
																								(BgL_lenz00_998, BgL_portz00_9,
																								BgL_dataz00_997, BgL_ptrz00_996,
																								BGl_symbol2746z00zz__tarz00,
																								((long) 8));
																							{	/* Unsafe/tar.scm 178 */
																								long BgL__ortest_1948z00_1934;

																								{	/* Unsafe/tar.scm 178 */
																									obj_t BgL_list2058z00_1935;

																									BgL_list2058z00_1935 =
																										MAKE_PAIR(BINT(((long) 8)),
																										BNIL);
																									BgL__ortest_1948z00_1934 =
																										BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00
																										(BgL_arg2093z00_1031,
																										BgL_list2058z00_1935);
																								}
																								BgL_devmajorz00_1014 =
																									BINT
																									(BgL__ortest_1948z00_1934);
																						}}
																						{	/* Unsafe/tar.scm 178 */
																							obj_t BgL_devminorz00_1015;

																							{	/* Unsafe/tar.scm 179 */
																								obj_t BgL_arg2092z00_1030;

																								BgL_arg2092z00_1030 =
																									BGl_extractz00zz__tarz00
																									(BgL_lenz00_998,
																									BgL_portz00_9,
																									BgL_dataz00_997,
																									BgL_ptrz00_996,
																									BGl_symbol2748z00zz__tarz00,
																									((long) 8));
																								{	/* Unsafe/tar.scm 179 */
																									long BgL__ortest_1948z00_1938;

																									{	/* Unsafe/tar.scm 179 */
																										obj_t BgL_list2058z00_1939;

																										BgL_list2058z00_1939 =
																											MAKE_PAIR(BINT(((long)
																													8)), BNIL);
																										BgL__ortest_1948z00_1938 =
																											BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00
																											(BgL_arg2092z00_1030,
																											BgL_list2058z00_1939);
																									}
																									BgL_devminorz00_1015 =
																										BINT
																										(BgL__ortest_1948z00_1938);
																							}}
																							{	/* Unsafe/tar.scm 179 */
																								long BgL_csum2z00_1016;

																								BgL_csum2z00_1016 =
																									BGl_checksumz00zz__tarz00
																									(BgL_dataz00_997);
																								{	/* Unsafe/tar.scm 180 */

																									{	/* Unsafe/tar.scm 182 */
																										bool_t BgL_testz00_2943;

																										if (bigloo_strcmp
																											(BGl_string2750z00zz__tarz00,
																												BgL_magicz00_1011))
																											{	/* Unsafe/tar.scm 182 */
																												BgL_testz00_2943 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Unsafe/tar.scm 182 */
																												if (bigloo_strcmp
																													(BGl_string2751z00zz__tarz00,
																														BgL_magicz00_1011))
																													{	/* Unsafe/tar.scm 183 */
																														BgL_testz00_2943 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Unsafe/tar.scm 183 */
																														BgL_testz00_2943 =
																															bigloo_strcmp
																															(BGl_string2752z00zz__tarz00,
																															BgL_magicz00_1011);
																													}
																											}
																										if (BgL_testz00_2943)
																											{	/* Unsafe/tar.scm 182 */
																												if (
																													(BgL_csum2z00_1016 ==
																														(long)
																														CINT
																														(BgL_chksumz00_1008)))
																													{	/* Unsafe/tar.scm 197 */
																														obj_t
																															BgL_arg2079z00_1019;
																														obj_t
																															BgL_arg2080z00_1020;
																														BgL_arg2079z00_1019
																															=
																															bgl_seconds_to_date
																															(BgL_mtimez00_1007);
																														BgL_arg2080z00_1020
																															=
																															BGl_tarzd2typezd2namez00zz__tarz00
																															(BgL_linkflagz00_1009);
																														{	/* Unsafe/tar.scm 191 */
																															BgL_tarzd2headerzd2_bglt
																																BgL_res2588z00_1999;
																															{	/* Unsafe/tar.scm 191 */
																																obj_t
																																	BgL_name1838z00_1949;
																																long
																																	BgL_mode1839z00_1950;
																																long
																																	BgL_uid1840z00_1951;
																																long
																																	BgL_gid1841z00_1952;
																																long
																																	BgL_checksum1844z00_1955;
																																obj_t
																																	BgL_type1845z00_1956;
																																obj_t
																																	BgL_linkname1846z00_1957;
																																obj_t
																																	BgL_magic1847z00_1958;
																																obj_t
																																	BgL_uname1848z00_1959;
																																obj_t
																																	BgL_gname1849z00_1960;
																																long
																																	BgL_devmajor1850z00_1961;
																																long
																																	BgL_devminor1851z00_1962;
																																BgL_name1838z00_1949
																																	=
																																	BgL_namez00_1001;
																																BgL_mode1839z00_1950
																																	=
																																	(long)
																																	CINT
																																	(BgL_modez00_1003);
																																BgL_uid1840z00_1951
																																	=
																																	(long)
																																	CINT
																																	(BgL_uidz00_1004);
																																BgL_gid1841z00_1952
																																	=
																																	(long)
																																	CINT
																																	(BgL_gidz00_1005);
																																BgL_checksum1844z00_1955
																																	=
																																	(long)
																																	CINT
																																	(BgL_chksumz00_1008);
																																BgL_type1845z00_1956
																																	=
																																	BgL_arg2080z00_1020;
																																BgL_linkname1846z00_1957
																																	=
																																	BgL_linknamez00_1010;
																																BgL_magic1847z00_1958
																																	=
																																	BgL_magicz00_1011;
																																BgL_uname1848z00_1959
																																	=
																																	BgL_unamez00_1012;
																																BgL_gname1849z00_1960
																																	=
																																	BgL_gnamez00_1013;
																																BgL_devmajor1850z00_1961
																																	=
																																	(long)
																																	CINT
																																	(BgL_devmajorz00_1014);
																																BgL_devminor1851z00_1962
																																	=
																																	(long)
																																	CINT
																																	(BgL_devminorz00_1015);
																																{	/* Unsafe/tar.scm 191 */
																																	BgL_tarzd2headerzd2_bglt
																																		BgL_new1852z00_1963;
																																	{	/* Unsafe/tar.scm 191 */
																																		BgL_tarzd2headerzd2_bglt
																																			BgL_res2586z00_1968;
																																		{	/* Unsafe/tar.scm 191 */
																																			BgL_tarzd2headerzd2_bglt
																																				BgL_new1884z00_1964;
																																			BgL_new1884z00_1964
																																				=
																																				(
																																				(BgL_tarzd2headerzd2_bglt)
																																				BREF
																																				(GC_MALLOC
																																					(sizeof
																																						(struct
																																							BgL_tarzd2headerzd2_bgl))));
																																			BGL_OBJECT_CLASS_NUM_SET
																																				(
																																				(BgL_objectz00_bglt)
																																				(BgL_new1884z00_1964),
																																				BGl_classzd2numzd2zz__objectz00
																																				(BGl_tarzd2headerzd2zz__tarz00));
																																			{	/* Unsafe/tar.scm 191 */
																																				BgL_objectz00_bglt
																																					BgL_auxz00_2964;
																																				BgL_auxz00_2964
																																					=
																																					(BgL_objectz00_bglt)
																																					(BgL_new1884z00_1964);
																																				BGL_OBJECT_WIDENING_SET
																																					(BgL_auxz00_2964,
																																					BFALSE);
																																			}
																																			BgL_res2586z00_1968
																																				=
																																				BgL_new1884z00_1964;
																																		}
																																		BgL_new1852z00_1963
																																			=
																																			BgL_res2586z00_1968;
																																	}
																																	{	/* Unsafe/tar.scm 191 */
																																		BgL_tarzd2headerzd2_bglt
																																			BgL_res2587z00_1998;
																																		{	/* Unsafe/tar.scm 191 */
																																			BgL_tarzd2headerzd2_bglt
																																				BgL_new1868z00_1969;
																																			BgL_new1868z00_1969
																																				=
																																				BgL_new1852z00_1963;
																																			{	/* Unsafe/tar.scm 191 */
																																				obj_t
																																					BgL_name1854z00_1984;
																																				long
																																					BgL_mode1855z00_1985;
																																				long
																																					BgL_uid1856z00_1986;
																																				long
																																					BgL_gid1857z00_1987;
																																				long
																																					BgL_siza7e1858za7_1988;
																																				obj_t
																																					BgL_mtime1859z00_1989;
																																				long
																																					BgL_checksum1860z00_1990;
																																				obj_t
																																					BgL_type1861z00_1991;
																																				obj_t
																																					BgL_linkname1862z00_1992;
																																				obj_t
																																					BgL_magic1863z00_1993;
																																				obj_t
																																					BgL_uname1864z00_1994;
																																				obj_t
																																					BgL_gname1865z00_1995;
																																				long
																																					BgL_devmajor1866z00_1996;
																																				long
																																					BgL_devminor1867z00_1997;
																																				BgL_name1854z00_1984
																																					=
																																					BgL_name1838z00_1949;
																																				BgL_mode1855z00_1985
																																					=
																																					BgL_mode1839z00_1950;
																																				BgL_uid1856z00_1986
																																					=
																																					BgL_uid1840z00_1951;
																																				BgL_gid1857z00_1987
																																					=
																																					BgL_gid1841z00_1952;
																																				BgL_siza7e1858za7_1988
																																					=
																																					BgL_siza7eza7_1006;
																																				BgL_mtime1859z00_1989
																																					=
																																					BgL_arg2079z00_1019;
																																				BgL_checksum1860z00_1990
																																					=
																																					BgL_checksum1844z00_1955;
																																				BgL_type1861z00_1991
																																					=
																																					BgL_type1845z00_1956;
																																				BgL_linkname1862z00_1992
																																					=
																																					BgL_linkname1846z00_1957;
																																				BgL_magic1863z00_1993
																																					=
																																					BgL_magic1847z00_1958;
																																				BgL_uname1864z00_1994
																																					=
																																					BgL_uname1848z00_1959;
																																				BgL_gname1865z00_1995
																																					=
																																					BgL_gname1849z00_1960;
																																				BgL_devmajor1866z00_1996
																																					=
																																					BgL_devmajor1850z00_1961;
																																				BgL_devminor1867z00_1997
																																					=
																																					BgL_devminor1851z00_1962;
																																				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_1969))->BgL_namez00) = ((obj_t) BgL_name1854z00_1984), BUNSPEC);
																																				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_1969))->BgL_modez00) = ((long) BgL_mode1855z00_1985), BUNSPEC);
																																				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_1969))->BgL_uidz00) = ((long) BgL_uid1856z00_1986), BUNSPEC);
																																				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_1969))->BgL_gidz00) = ((long) BgL_gid1857z00_1987), BUNSPEC);
																																				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_1969))->BgL_siza7eza7) = ((long) BgL_siza7e1858za7_1988), BUNSPEC);
																																				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_1969))->BgL_mtimez00) = ((obj_t) BgL_mtime1859z00_1989), BUNSPEC);
																																				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_1969))->BgL_checksumz00) = ((long) BgL_checksum1860z00_1990), BUNSPEC);
																																				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_1969))->BgL_typez00) = ((obj_t) BgL_type1861z00_1991), BUNSPEC);
																																				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_1969))->BgL_linknamez00) = ((obj_t) BgL_linkname1862z00_1992), BUNSPEC);
																																				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_1969))->BgL_magicz00) = ((obj_t) BgL_magic1863z00_1993), BUNSPEC);
																																				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_1969))->BgL_unamez00) = ((obj_t) BgL_uname1864z00_1994), BUNSPEC);
																																				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_1969))->BgL_gnamez00) = ((obj_t) BgL_gname1865z00_1995), BUNSPEC);
																																				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_1969))->BgL_devmajorz00) = ((long) BgL_devmajor1866z00_1996), BUNSPEC);
																																				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_1969))->BgL_devminorz00) = ((long) BgL_devminor1867z00_1997), BUNSPEC);
																																				BgL_res2587z00_1998
																																					=
																																					BgL_new1868z00_1969;
																																		}} BgL_res2587z00_1998;
																																	}
																																	BgL_res2588z00_1999
																																		=
																																		BgL_new1852z00_1963;
																															}}
																															return
																																(obj_t)
																																(BgL_res2588z00_1999);
																														}
																													}
																												else
																													{	/* Unsafe/tar.scm 188 */
																														obj_t
																															BgL_arg2081z00_1021;
																														{	/* Unsafe/tar.scm 188 */
																															obj_t
																																BgL_list2082z00_1022;
																															BgL_list2082z00_1022
																																=
																																MAKE_PAIR
																																(BgL_chksumz00_1008,
																																BNIL);
																															BgL_arg2081z00_1021
																																=
																																BGl_formatz00zz__r4_output_6_10_3z00
																																(BGl_string2753z00zz__tarz00,
																																BgL_list2082z00_1022);
																														}
																														{	/* Unsafe/tar.scm 187 */
																															BgL_z62iozd2parsezd2errorz62_bglt
																																BgL_arg2051z00_2002;
																															{	/* Unsafe/tar.scm 187 */
																																obj_t
																																	BgL_arg2052z00_2003;
																																obj_t
																																	BgL_arg2053z00_2004;
																																{	/* Unsafe/tar.scm 187 */

																																	{	/* Unsafe/tar.scm 187 */

																																		BgL_arg2052z00_2003
																																			=
																																			BGl_getzd2tracezd2stackz00zz__errorz00
																																			(BFALSE);
																																	}
																																}
																																BgL_arg2053z00_2004
																																	=
																																	BGl_symbol2698z00zz__tarz00;
																																BgL_arg2051z00_2002
																																	=
																																	BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
																																	(BFALSE,
																																	BFALSE,
																																	BgL_arg2052z00_2003,
																																	BgL_arg2053z00_2004,
																																	BgL_arg2081z00_1021,
																																	BINT
																																	(BgL_csum2z00_1016));
																															}
																															return
																																BGl_raisez00zz__errorz00
																																((obj_t)
																																(BgL_arg2051z00_2002));
																														}
																													}
																											}
																										else
																											{	/* Unsafe/tar.scm 185 */
																												obj_t
																													BgL_arg2084z00_1024;
																												BgL_arg2084z00_1024 =
																													string_for_read
																													(BgL_magicz00_1011);
																												{	/* Unsafe/tar.scm 185 */
																													BgL_z62iozd2parsezd2errorz62_bglt
																														BgL_arg2051z00_2009;
																													{	/* Unsafe/tar.scm 185 */
																														obj_t
																															BgL_arg2052z00_2010;
																														obj_t
																															BgL_arg2053z00_2011;
																														{	/* Unsafe/tar.scm 185 */

																															{	/* Unsafe/tar.scm 185 */

																																BgL_arg2052z00_2010
																																	=
																																	BGl_getzd2tracezd2stackz00zz__errorz00
																																	(BFALSE);
																															}
																														}
																														BgL_arg2053z00_2011
																															=
																															BGl_symbol2698z00zz__tarz00;
																														BgL_arg2051z00_2009
																															=
																															BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
																															(BFALSE, BFALSE,
																															BgL_arg2052z00_2010,
																															BgL_arg2053z00_2011,
																															BGl_string2754z00zz__tarz00,
																															BgL_arg2084z00_1024);
																													}
																													return
																														BGl_raisez00zz__errorz00
																														((obj_t)
																														(BgL_arg2051z00_2009));
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
									else
										{	/* Unsafe/tar.scm 166 */
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



/* extract */
	obj_t BGl_extractz00zz__tarz00(long BgL_lenz00_2629, obj_t BgL_portz00_2628,
		obj_t BgL_dataz00_2627, obj_t BgL_ptrz00_2626, obj_t BgL_whatz00_1064,
		long BgL_siza7eza7_1065)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 158 */
			{
				long BgL_iz00_1068;

				BgL_iz00_1068 = ((long) 0);
			BgL_zc3anonymousza32120ze3z83_1069:
				if ((BgL_iz00_1068 >= BgL_siza7eza7_1065))
					{	/* Unsafe/tar.scm 147 */
						obj_t BgL_arg2123z00_1071;

						{	/* Unsafe/tar.scm 147 */
							obj_t BgL_list2124z00_1072;

							BgL_list2124z00_1072 = MAKE_PAIR(BgL_whatz00_1064, BNIL);
							BgL_arg2123z00_1071 =
								BGl_formatz00zz__r4_output_6_10_3z00
								(BGl_string2755z00zz__tarz00, BgL_list2124z00_1072);
						}
						{	/* Unsafe/tar.scm 146 */
							BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2051z00_2017;

							{	/* Unsafe/tar.scm 146 */
								obj_t BgL_arg2052z00_2018;

								obj_t BgL_arg2053z00_2019;

								{	/* Unsafe/tar.scm 146 */

									{	/* Unsafe/tar.scm 146 */

										BgL_arg2052z00_2018 =
											BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
									}
								}
								BgL_arg2053z00_2019 = BGl_symbol2698z00zz__tarz00;
								BgL_arg2051z00_2017 =
									BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(BFALSE,
									BFALSE, BgL_arg2052z00_2018, BgL_arg2053z00_2019,
									BgL_arg2123z00_1071, BINT(BgL_siza7eza7_1065));
							}
							return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2051z00_2017));
						}
					}
				else
					{	/* Unsafe/tar.scm 145 */
						if ((BgL_iz00_1068 >= BgL_lenz00_2629))
							{	/* Unsafe/tar.scm 150 */
								BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2051z00_2025;

								{	/* Unsafe/tar.scm 150 */
									obj_t BgL_arg2052z00_2026;

									obj_t BgL_arg2053z00_2027;

									{	/* Unsafe/tar.scm 150 */

										{	/* Unsafe/tar.scm 150 */

											BgL_arg2052z00_2026 =
												BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
										}
									}
									BgL_arg2053z00_2027 = BGl_symbol2698z00zz__tarz00;
									BgL_arg2051z00_2025 =
										BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(BFALSE,
										BFALSE, BgL_arg2052z00_2026, BgL_arg2053z00_2027,
										BGl_string2756z00zz__tarz00, BgL_portz00_2628);
								}
								return BGl_raisez00zz__errorz00((obj_t) (BgL_arg2051z00_2025));
							}
						else
							{	/* Unsafe/tar.scm 152 */
								unsigned char BgL_cz00_1074;

								{	/* Unsafe/tar.scm 152 */
									obj_t BgL_stringz00_2031;

									BgL_stringz00_2031 = BgL_dataz00_2627;
									{	/* Unsafe/tar.scm 152 */
										long BgL_auxz00_3009;

										{	/* Unsafe/tar.scm 152 */
											long BgL_za71za7_2029;

											BgL_za71za7_2029 = (long) CINT(CELL_REF(BgL_ptrz00_2626));
											BgL_auxz00_3009 = (BgL_za71za7_2029 + BgL_iz00_1068);
										}
										BgL_cz00_1074 =
											STRING_REF(BgL_stringz00_2031, BgL_auxz00_3009);
								}}
								if ((((unsigned char) '\000') == BgL_cz00_1074))
									{	/* Unsafe/tar.scm 154 */
										long BgL_nptrz00_1076;

										{	/* Unsafe/tar.scm 154 */
											long BgL_za71za7_2035;

											BgL_za71za7_2035 = (long) CINT(CELL_REF(BgL_ptrz00_2626));
											BgL_nptrz00_1076 = (BgL_za71za7_2035 + BgL_iz00_1068);
										}
										{	/* Unsafe/tar.scm 154 */
											obj_t BgL_subz00_1077;

											{	/* Unsafe/tar.scm 155 */
												obj_t BgL_stringz00_2037;

												long BgL_startz00_2038;

												BgL_stringz00_2037 = BgL_dataz00_2627;
												BgL_startz00_2038 =
													(long) CINT(CELL_REF(BgL_ptrz00_2626));
												BgL_subz00_1077 =
													c_substring(BgL_stringz00_2037, BgL_startz00_2038,
													BgL_nptrz00_1076);
											}
											{	/* Unsafe/tar.scm 155 */

												{	/* Unsafe/tar.scm 156 */
													obj_t BgL_auxz00_2630;

													{	/* Unsafe/tar.scm 156 */
														long BgL_za71za7_2040;

														BgL_za71za7_2040 =
															(long) CINT(CELL_REF(BgL_ptrz00_2626));
														BgL_auxz00_2630 =
															BINT((BgL_za71za7_2040 + BgL_siza7eza7_1065));
													}
													CELL_SET(BgL_ptrz00_2626, BgL_auxz00_2630);
												}
												return BgL_subz00_1077;
											}
										}
									}
								else
									{
										long BgL_iz00_3022;

										BgL_iz00_3022 = (((long) 1) + BgL_iz00_1068);
										BgL_iz00_1068 = BgL_iz00_3022;
										goto BgL_zc3anonymousza32120ze3z83_1069;
									}
							}
					}
			}
		}
	}



/* tar-round-up-to-record-size */
	BGL_EXPORTED_DEF long
		BGl_tarzd2roundzd2upzd2tozd2recordzd2siza7ez75zz__tarz00(obj_t BgL_nz00_12)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 210 */
			if (INTEGERP(BgL_nz00_12))
				{	/* Unsafe/tar.scm 211 */
					return
						(((long) 512) *
						(((long) CINT(BgL_nz00_12) +
								(((long) 512) - ((long) 1))) / ((long) 512)));
				}
			else
				{	/* Unsafe/tar.scm 211 */
					return
						(long)
						CINT(BGl_bigloozd2typezd2errorz00zz__errorz00
						(BGl_symbol2757z00zz__tarz00, BGl_string2759z00zz__tarz00,
							BgL_nz00_12));
		}}
	}



/* _tar-round-up-to-record-size */
	obj_t BGl__tarzd2roundzd2upzd2tozd2recordzd2siza7ez75zz__tarz00(obj_t
		BgL_envz00_2545, obj_t BgL_nz00_2546)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 210 */
			return
				BINT(BGl_tarzd2roundzd2upzd2tozd2recordzd2siza7ez75zz__tarz00
				(BgL_nz00_2546));
		}
	}



/* _tar-read-block */
	obj_t BGl__tarzd2readzd2blockz00zz__tarz00(obj_t BgL_envz00_16,
		obj_t BgL_optz00_15)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 219 */
			{	/* Unsafe/tar.scm 219 */
				obj_t BgL_g2005z00_1094;

				BgL_g2005z00_1094 = VECTOR_REF(BgL_optz00_15, (int) (((long) 0)));
				{	/* Unsafe/tar.scm 219 */
					int BgL_aux2007z00_1096;

					BgL_aux2007z00_1096 = VECTOR_LENGTH(BgL_optz00_15);
					switch ((long) (BgL_aux2007z00_1096))
						{
						case ((long) 1):

							{	/* Unsafe/tar.scm 219 */
								obj_t BgL_pz00_1098;

								{	/* Unsafe/tar.scm 219 */
									obj_t BgL_res2589z00_2058;

									{	/* Unsafe/tar.scm 219 */
										obj_t BgL_auxz00_3038;

										BgL_auxz00_3038 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2589z00_2058 =
											BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_3038);
									}
									BgL_pz00_1098 = BgL_res2589z00_2058;
								}
								{	/* Unsafe/tar.scm 219 */

									return
										BGl_tarzd2readzd2blockz00zz__tarz00(VECTOR_REF
										(BgL_optz00_15, (int) (((long) 0))), BgL_pz00_1098);
							}} break;
						case ((long) 2):

							{	/* Unsafe/tar.scm 219 */
								obj_t BgL_pz00_1100;

								BgL_pz00_1100 = VECTOR_REF(BgL_optz00_15, (int) (((long) 1)));
								{	/* Unsafe/tar.scm 219 */

									return
										BGl_tarzd2readzd2blockz00zz__tarz00(VECTOR_REF
										(BgL_optz00_15, (int) (((long) 0))), BgL_pz00_1100);
							}} break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* tar-read-block */
	BGL_EXPORTED_DEF obj_t BGl_tarzd2readzd2blockz00zz__tarz00(obj_t BgL_hz00_13,
		obj_t BgL_pz00_14)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 219 */
			if (INPUT_PORTP(BgL_pz00_14))
				{	/* Unsafe/tar.scm 221 */
					if (BGl_iszd2azf3z21zz__objectz00(BgL_hz00_13,
							BGl_tarzd2headerzd2zz__tarz00))
						{	/* Unsafe/tar.scm 224 */
							long BgL_nz00_1104;

							{	/* Unsafe/tar.scm 224 */
								long BgL_arg2156z00_1114;

								{
									BgL_tarzd2headerzd2_bglt BgL_auxz00_3055;

									BgL_auxz00_3055 = (BgL_tarzd2headerzd2_bglt) (BgL_hz00_13);
									BgL_arg2156z00_1114 =
										(((BgL_tarzd2headerzd2_bglt) CREF(BgL_auxz00_3055))->
										BgL_siza7eza7);
								}
								{	/* Unsafe/tar.scm 224 */
									long BgL_res2590z00_2063;

									{	/* Unsafe/tar.scm 224 */
										long BgL_auxz00_3058;

										{	/* Unsafe/tar.scm 224 */
											long BgL_auxz00_3059;

											BgL_auxz00_3059 = ELONG_TO_LONG(BgL_arg2156z00_1114);
											BgL_auxz00_3058 = ELONG_TO_LONG(BgL_auxz00_3059);
										}
										BgL_res2590z00_2063 = ELONG_TO_LONG(BgL_auxz00_3058);
									}
									BgL_nz00_1104 = BgL_res2590z00_2063;
							}}
							if ((BgL_nz00_1104 == ((long) 0)))
								{	/* Unsafe/tar.scm 225 */
									return BFALSE;
								}
							else
								{	/* Unsafe/tar.scm 227 */
									obj_t BgL_sz00_1106;

									BgL_sz00_1106 =
										BGl_readzd2charszd2zz__r4_input_6_10_2z00(BINT
										(BgL_nz00_1104), BgL_pz00_14);
									if ((STRING_LENGTH(BgL_sz00_1106) < BgL_nz00_1104))
										{	/* Unsafe/tar.scm 229 */
											obj_t BgL_arg2150z00_1108;

											obj_t BgL_arg2152z00_1110;

											BgL_arg2150z00_1108 = BGl_symbol2760z00zz__tarz00;
											{
												BgL_tarzd2headerzd2_bglt BgL_auxz00_3070;

												BgL_auxz00_3070 =
													(BgL_tarzd2headerzd2_bglt) (BgL_hz00_13);
												BgL_arg2152z00_1110 =
													(((BgL_tarzd2headerzd2_bglt) CREF(BgL_auxz00_3070))->
													BgL_namez00);
											}
											BGl_errorz00zz__errorz00(BgL_arg2150z00_1108,
												BGl_string2762z00zz__tarz00, BgL_arg2152z00_1110);
										}
									else
										{	/* Unsafe/tar.scm 232 */
											long BgL_arg2153z00_1111;

											BgL_arg2153z00_1111 =
												(BGl_tarzd2roundzd2upzd2tozd2recordzd2siza7ez75zz__tarz00
												(BINT(BgL_nz00_1104)) - BgL_nz00_1104);
											BGl_readzd2charszd2zz__r4_input_6_10_2z00(BINT
												(BgL_arg2153z00_1111), BgL_pz00_14);
										}
									return BgL_sz00_1106;
								}
						}
					else
						{	/* Unsafe/tar.scm 223 */
							return
								BGl_bigloozd2typezd2errorz00zz__errorz00
								(BGl_symbol2760z00zz__tarz00, BGl_string2763z00zz__tarz00,
								BgL_hz00_13);
						}
				}
			else
				{	/* Unsafe/tar.scm 221 */
					return
						BGl_bigloozd2typezd2errorz00zz__errorz00
						(BGl_symbol2720z00zz__tarz00, BGl_string2722z00zz__tarz00,
						BgL_pz00_14);
				}
		}
	}



/* rm-rf */
	bool_t BGl_rmzd2rfzd2zz__tarz00(obj_t BgL_pathz00_17)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 240 */
			if (fexists(BSTRING_TO_STRING(BgL_pathz00_17)))
				{	/* Unsafe/tar.scm 241 */
					if (directoryp(BSTRING_TO_STRING(BgL_pathz00_17)))
						{	/* Unsafe/tar.scm 243 */
							obj_t BgL_filesz00_1117;

							BgL_filesz00_1117 =
								directory_to_list(BSTRING_TO_STRING(BgL_pathz00_17));
							{
								obj_t BgL_l1987z00_1119;

								BgL_l1987z00_1119 = BgL_filesz00_1117;
							BgL_zc3anonymousza32159ze3z83_1120:
								if (PAIRP(BgL_l1987z00_1119))
									{	/* Unsafe/tar.scm 244 */
										{	/* Unsafe/tar.scm 244 */
											obj_t BgL_fz00_1122;

											BgL_fz00_1122 = CAR(BgL_l1987z00_1119);
											BGl_rmzd2rfzd2zz__tarz00
												(BGl_makezd2filezd2namez00zz__osz00(BgL_pathz00_17,
													BgL_fz00_1122));
										}
										{
											obj_t BgL_l1987z00_3094;

											BgL_l1987z00_3094 = CDR(BgL_l1987z00_1119);
											BgL_l1987z00_1119 = BgL_l1987z00_3094;
											goto BgL_zc3anonymousza32159ze3z83_1120;
										}
									}
								else
									{	/* Unsafe/tar.scm 244 */
										((bool_t) 1);
									}
							}
							{	/* Unsafe/tar.scm 245 */
								char *BgL_stringz00_2078;

								BgL_stringz00_2078 = BSTRING_TO_STRING(BgL_pathz00_17);
								if (rmdir(BgL_stringz00_2078))
									{	/* Unsafe/tar.scm 245 */
										return ((bool_t) 0);
									}
								else
									{	/* Unsafe/tar.scm 245 */
										return ((bool_t) 1);
									}
							}
						}
					else
						{	/* Unsafe/tar.scm 246 */
							char *BgL_stringz00_2080;

							BgL_stringz00_2080 = BSTRING_TO_STRING(BgL_pathz00_17);
							if (unlink(BgL_stringz00_2080))
								{	/* Unsafe/tar.scm 246 */
									return ((bool_t) 0);
								}
							else
								{	/* Unsafe/tar.scm 246 */
									return ((bool_t) 1);
								}
						}
				}
			else
				{	/* Unsafe/tar.scm 241 */
					return ((bool_t) 0);
				}
		}
	}



/* _untar */
	obj_t BGl__untarz00zz__tarz00(obj_t BgL_envz00_22, obj_t BgL_opt2008z00_21)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 251 */
			{	/* Unsafe/tar.scm 251 */
				int BgL_l2009z00_1126;

				BgL_l2009z00_1126 = VECTOR_LENGTH(BgL_opt2008z00_21);
				{	/* Unsafe/tar.scm 251 */
					obj_t BgL_g2015z00_1130;

					BgL_g2015z00_1130 = VECTOR_REF(BgL_opt2008z00_21, (int) (((long) 0)));
					{	/* Unsafe/tar.scm 251 */
						obj_t BgL_directoryz00_1131;

						BgL_directoryz00_1131 = BGl_pwdz00zz__osz00();
						{	/* Unsafe/tar.scm 251 */
							obj_t BgL_filez00_1132;

							BgL_filez00_1132 = BFALSE;
							{	/* Unsafe/tar.scm 251 */

								{	/* Unsafe/tar.scm 251 */
									long BgL_index2013z00_1133;

									{
										long BgL_iz00_2084;

										BgL_iz00_2084 = ((long) 1);
									BgL_search2010z00_2083:
										if ((BgL_iz00_2084 == (long) (BgL_l2009z00_1126)))
											{	/* Unsafe/tar.scm 251 */
												BgL_index2013z00_1133 = ((long) -1);
											}
										else
											{	/* Unsafe/tar.scm 251 */
												obj_t BgL_vz00_2086;

												BgL_vz00_2086 =
													VECTOR_REF(BgL_opt2008z00_21, (int) (BgL_iz00_2084));
												if ((BgL_vz00_2086 == BGl_keyword2764z00zz__tarz00))
													{	/* Unsafe/tar.scm 251 */
														BgL_index2013z00_1133 =
															(BgL_iz00_2084 + ((long) 1));
													}
												else
													{
														long BgL_iz00_3114;

														BgL_iz00_3114 = (BgL_iz00_2084 + ((long) 2));
														BgL_iz00_2084 = BgL_iz00_3114;
														goto BgL_search2010z00_2083;
													}
											}
									}
									if ((BgL_index2013z00_1133 >= ((long) 0)))
										{	/* Unsafe/tar.scm 251 */
											BgL_directoryz00_1131 =
												VECTOR_REF(BgL_opt2008z00_21,
												(int) (BgL_index2013z00_1133));
										}
									else
										{	/* Unsafe/tar.scm 251 */
											BFALSE;
										}
								}
								{	/* Unsafe/tar.scm 251 */
									long BgL_index2014z00_1135;

									{
										long BgL_iz00_2098;

										BgL_iz00_2098 = ((long) 1);
									BgL_search2010z00_2097:
										if ((BgL_iz00_2098 == (long) (BgL_l2009z00_1126)))
											{	/* Unsafe/tar.scm 251 */
												BgL_index2014z00_1135 = ((long) -1);
											}
										else
											{	/* Unsafe/tar.scm 251 */
												obj_t BgL_vz00_2100;

												BgL_vz00_2100 =
													VECTOR_REF(BgL_opt2008z00_21, (int) (BgL_iz00_2098));
												if ((BgL_vz00_2100 == BGl_keyword2766z00zz__tarz00))
													{	/* Unsafe/tar.scm 251 */
														BgL_index2014z00_1135 =
															(BgL_iz00_2098 + ((long) 1));
													}
												else
													{
														long BgL_iz00_3128;

														BgL_iz00_3128 = (BgL_iz00_2098 + ((long) 2));
														BgL_iz00_2098 = BgL_iz00_3128;
														goto BgL_search2010z00_2097;
													}
											}
									}
									if ((BgL_index2014z00_1135 >= ((long) 0)))
										{	/* Unsafe/tar.scm 251 */
											BgL_filez00_1132 =
												VECTOR_REF(BgL_opt2008z00_21,
												(int) (BgL_index2014z00_1135));
										}
									else
										{	/* Unsafe/tar.scm 251 */
											BFALSE;
										}
								}
								{	/* Unsafe/tar.scm 251 */
									obj_t BgL_arg2165z00_1137;

									BgL_arg2165z00_1137 =
										VECTOR_REF(BgL_opt2008z00_21, (int) (((long) 0)));
									{	/* Unsafe/tar.scm 251 */
										obj_t BgL_directoryz00_1138;

										BgL_directoryz00_1138 = BgL_directoryz00_1131;
										{	/* Unsafe/tar.scm 251 */
											obj_t BgL_filez00_1139;

											BgL_filez00_1139 = BgL_filez00_1132;
											if (INPUT_PORTP(BgL_arg2165z00_1137))
												{	/* Unsafe/tar.scm 251 */
													if (STRINGP(BgL_filez00_1139))
														{	/* Unsafe/tar.scm 251 */
															return
																BGl_untarzd2filezd2zz__tarz00
																(BgL_arg2165z00_1137, BgL_filez00_1139);
														}
													else
														{	/* Unsafe/tar.scm 251 */
															obj_t BgL_arg2171z00_2116;

															if (STRINGP(BgL_directoryz00_1138))
																{	/* Unsafe/tar.scm 251 */
																	BgL_arg2171z00_2116 = BgL_directoryz00_1138;
																}
															else
																{	/* Unsafe/tar.scm 251 */
																	BgL_arg2171z00_2116 = BGl_pwdz00zz__osz00();
																}
															{	/* Unsafe/tar.scm 251 */
																obj_t BgL_auxz00_3144;

																if (STRINGP(BgL_arg2171z00_2116))
																	{	/* Unsafe/tar.scm 251 */
																		BgL_auxz00_3144 = BgL_arg2171z00_2116;
																	}
																else
																	{
																		obj_t BgL_auxz00_3147;

																		BgL_auxz00_3147 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2768z00zz__tarz00,
																			BINT(((long) 9112)),
																			BGl_string2769z00zz__tarz00,
																			BGl_string2770z00zz__tarz00,
																			BgL_arg2171z00_2116);
																		FAILURE(BgL_auxz00_3147, BFALSE, BFALSE);
																	}
																return
																	BGl_untarzd2directoryzd2zz__tarz00
																	(BgL_arg2165z00_1137, BgL_auxz00_3144);
															}
														}
												}
											else
												{	/* Unsafe/tar.scm 251 */
													return
														BGl_bigloozd2typezd2errorz00zz__errorz00
														(BGl_symbol2771z00zz__tarz00,
														BGl_string2722z00zz__tarz00, BgL_arg2165z00_1137);
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



/* untar */
	BGL_EXPORTED_DEF obj_t BGl_untarz00zz__tarz00(obj_t BgL_ipz00_18,
		obj_t BgL_directoryz00_19, obj_t BgL_filez00_20)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 251 */
			if (INPUT_PORTP(BgL_ipz00_18))
				{	/* Unsafe/tar.scm 253 */
					if (STRINGP(BgL_filez00_20))
						{	/* Unsafe/tar.scm 253 */
							return
								BGl_untarzd2filezd2zz__tarz00(BgL_ipz00_18, BgL_filez00_20);
						}
					else
						{	/* Unsafe/tar.scm 253 */
							obj_t BgL_arg2171z00_2145;

							if (STRINGP(BgL_directoryz00_19))
								{	/* Unsafe/tar.scm 253 */
									BgL_arg2171z00_2145 = BgL_directoryz00_19;
								}
							else
								{	/* Unsafe/tar.scm 253 */
									BgL_arg2171z00_2145 = BGl_pwdz00zz__osz00();
								}
							return
								BGl_untarzd2directoryzd2zz__tarz00(BgL_ipz00_18,
								BgL_arg2171z00_2145);
						}
				}
			else
				{	/* Unsafe/tar.scm 253 */
					return
						BGl_bigloozd2typezd2errorz00zz__errorz00
						(BGl_symbol2771z00zz__tarz00, BGl_string2722z00zz__tarz00,
						BgL_ipz00_18);
				}
		}
	}



/* untar-directory */
	obj_t BGl_untarzd2directoryzd2zz__tarz00(obj_t BgL_ipz00_23,
		obj_t BgL_basez00_24)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 263 */
			if (directoryp(BSTRING_TO_STRING(BgL_basez00_24)))
				{	/* Unsafe/tar.scm 264 */
					((bool_t) 0);
				}
			else
				{	/* Unsafe/tar.scm 264 */
					BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00(BgL_basez00_24);
				}
			{
				obj_t BgL_lstz00_1151;

				BgL_lstz00_1151 = BNIL;
			BgL_zc3anonymousza32174ze3z83_1152:
				{	/* Unsafe/tar.scm 267 */
					obj_t BgL_hz00_1153;

					BgL_hz00_1153 = BGl_tarzd2readzd2headerz00zz__tarz00(BgL_ipz00_23);
					if (CBOOL(BgL_hz00_1153))
						{	/* Unsafe/tar.scm 270 */
							obj_t BgL_casezd2valuezd2_1154;

							{
								BgL_tarzd2headerzd2_bglt BgL_auxz00_3170;

								BgL_auxz00_3170 = (BgL_tarzd2headerzd2_bglt) (BgL_hz00_1153);
								BgL_casezd2valuezd2_1154 =
									(((BgL_tarzd2headerzd2_bglt) CREF(BgL_auxz00_3170))->
									BgL_typez00);
							}
							if ((BgL_casezd2valuezd2_1154 == BGl_symbol2712z00zz__tarz00))
								{	/* Unsafe/tar.scm 272 */
									obj_t BgL_pathz00_1156;

									{	/* Unsafe/tar.scm 272 */
										obj_t BgL_arg2182z00_1164;

										{
											BgL_tarzd2headerzd2_bglt BgL_auxz00_3175;

											BgL_auxz00_3175 =
												(BgL_tarzd2headerzd2_bglt) (BgL_hz00_1153);
											BgL_arg2182z00_1164 =
												(((BgL_tarzd2headerzd2_bglt) CREF(BgL_auxz00_3175))->
												BgL_namez00);
										}
										BgL_pathz00_1156 =
											BGl_makezd2filezd2namez00zz__osz00(BgL_basez00_24,
											BgL_arg2182z00_1164);
									}
									BGl_rmzd2rfzd2zz__tarz00(BgL_pathz00_1156);
									if (BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00
										(BgL_pathz00_1156))
										{	/* Unsafe/tar.scm 275 */
											obj_t BgL_arg2177z00_1158;

											BgL_arg2177z00_1158 =
												MAKE_PAIR(BgL_pathz00_1156, BgL_lstz00_1151);
											{
												obj_t BgL_lstz00_3183;

												BgL_lstz00_3183 = BgL_arg2177z00_1158;
												BgL_lstz00_1151 = BgL_lstz00_3183;
												goto BgL_zc3anonymousza32174ze3z83_1152;
											}
										}
									else
										{	/* Llib/object.scm 90 */
											BgL_z62iozd2errorzb0_bglt BgL_arg2178z00_1159;

											{	/* Llib/object.scm 90 */
												obj_t BgL_arg2179z00_1160;

												obj_t BgL_arg2180z00_1161;

												{	/* Llib/object.scm 90 */

													{	/* Llib/object.scm 90 */

														BgL_arg2179z00_1160 =
															BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
													}
												}
												BgL_arg2180z00_1161 = BGl_symbol2771z00zz__tarz00;
												BgL_arg2178z00_1159 =
													BGl_makezd2z62iozd2errorz62zz__objectz00(BFALSE,
													BFALSE, BgL_arg2179z00_1160, BgL_arg2180z00_1161,
													BGl_string2773z00zz__tarz00, BgL_pathz00_1156);
											}
											return
												BGl_raisez00zz__errorz00((obj_t) (BgL_arg2178z00_1159));
										}
								}
							else
								{	/* Unsafe/tar.scm 270 */
									if ((BgL_casezd2valuezd2_1154 == BGl_symbol2702z00zz__tarz00))
										{	/* Unsafe/tar.scm 282 */
											obj_t BgL_pathz00_1166;

											{	/* Unsafe/tar.scm 282 */
												obj_t BgL_arg2193z00_1178;

												{
													BgL_tarzd2headerzd2_bglt BgL_auxz00_3190;

													BgL_auxz00_3190 =
														(BgL_tarzd2headerzd2_bglt) (BgL_hz00_1153);
													BgL_arg2193z00_1178 =
														(((BgL_tarzd2headerzd2_bglt)
															CREF(BgL_auxz00_3190))->BgL_namez00);
												}
												BgL_pathz00_1166 =
													BGl_makezd2filezd2namez00zz__osz00(BgL_basez00_24,
													BgL_arg2193z00_1178);
											}
											{	/* Unsafe/tar.scm 282 */
												obj_t BgL_dirz00_1167;

												BgL_dirz00_1167 =
													BGl_dirnamez00zz__osz00(BgL_pathz00_1166);
												{	/* Unsafe/tar.scm 283 */

													{	/* Unsafe/tar.scm 284 */
														bool_t BgL_testz00_3195;

														if (fexists(BSTRING_TO_STRING(BgL_dirz00_1167)))
															{	/* Unsafe/tar.scm 284 */
																if (directoryp(BSTRING_TO_STRING
																		(BgL_dirz00_1167)))
																	{	/* Unsafe/tar.scm 284 */
																		BgL_testz00_3195 = ((bool_t) 0);
																	}
																else
																	{	/* Unsafe/tar.scm 284 */
																		BgL_testz00_3195 = ((bool_t) 1);
																	}
															}
														else
															{	/* Unsafe/tar.scm 284 */
																BgL_testz00_3195 = ((bool_t) 0);
															}
														if (BgL_testz00_3195)
															{	/* Unsafe/tar.scm 285 */
																char *BgL_stringz00_2160;

																BgL_stringz00_2160 =
																	BSTRING_TO_STRING(BgL_dirz00_1167);
																if (unlink(BgL_stringz00_2160))
																	{	/* Unsafe/tar.scm 285 */
																		((bool_t) 0);
																	}
																else
																	{	/* Unsafe/tar.scm 285 */
																		((bool_t) 1);
																	}
															}
														else
															{	/* Unsafe/tar.scm 284 */
																((bool_t) 0);
															}
													}
													if (fexists(BSTRING_TO_STRING(BgL_dirz00_1167)))
														{	/* Unsafe/tar.scm 286 */
															BFALSE;
														}
													else
														{	/* Unsafe/tar.scm 286 */
															BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00
																(BgL_dirz00_1167);
															BgL_lstz00_1151 =
																MAKE_PAIR(BgL_dirz00_1167, BgL_lstz00_1151);
														}
													{	/* Unsafe/tar.scm 291 */
														obj_t BgL_zc3anonymousza32189ze3z83_2547;

														BgL_zc3anonymousza32189ze3z83_2547 =
															make_fx_procedure
															(BGl_zc3anonymousza32189ze3z83zz__tarz00,
															(int) (((long) 0)), (int) (((long) 2)));
														PROCEDURE_SET(BgL_zc3anonymousza32189ze3z83_2547,
															(int) (((long) 0)), BgL_hz00_1153);
														PROCEDURE_SET(BgL_zc3anonymousza32189ze3z83_2547,
															(int) (((long) 1)), BgL_ipz00_23);
														BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00
															(BgL_pathz00_1166,
															BgL_zc3anonymousza32189ze3z83_2547);
													}
													{	/* Unsafe/tar.scm 292 */
														obj_t BgL_arg2192z00_1177;

														BgL_arg2192z00_1177 =
															MAKE_PAIR(BgL_pathz00_1166, BgL_lstz00_1151);
														{
															obj_t BgL_lstz00_3219;

															BgL_lstz00_3219 = BgL_arg2192z00_1177;
															BgL_lstz00_1151 = BgL_lstz00_3219;
															goto BgL_zc3anonymousza32174ze3z83_1152;
														}
													}
												}
											}
										}
									else
										{	/* Llib/object.scm 90 */
											BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2194z00_1179;

											{	/* Llib/object.scm 90 */
												obj_t BgL_arg2195z00_1180;

												obj_t BgL_arg2196z00_1181;

												obj_t BgL_arg2197z00_1182;

												obj_t BgL_arg2198z00_1183;

												{	/* Llib/object.scm 90 */

													{	/* Llib/object.scm 90 */

														BgL_arg2195z00_1180 =
															BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
													}
												}
												BgL_arg2196z00_1181 = BGl_symbol2771z00zz__tarz00;
												{	/* Unsafe/tar.scm 297 */
													obj_t BgL_list2201z00_1187;

													BgL_list2201z00_1187 =
														MAKE_PAIR(BgL_casezd2valuezd2_1154, BNIL);
													BgL_arg2197z00_1182 =
														BGl_formatz00zz__r4_output_6_10_3z00
														(BGl_string2774z00zz__tarz00, BgL_list2201z00_1187);
												}
												{
													BgL_tarzd2headerzd2_bglt BgL_auxz00_3223;

													BgL_auxz00_3223 =
														(BgL_tarzd2headerzd2_bglt) (BgL_hz00_1153);
													BgL_arg2198z00_1183 =
														(((BgL_tarzd2headerzd2_bglt)
															CREF(BgL_auxz00_3223))->BgL_namez00);
												}
												BgL_arg2194z00_1179 =
													BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
													(BFALSE, BFALSE, BgL_arg2195z00_1180,
													BgL_arg2196z00_1181, BgL_arg2197z00_1182,
													BgL_arg2198z00_1183);
											}
											return
												BGl_raisez00zz__errorz00((obj_t) (BgL_arg2194z00_1179));
										}
								}
						}
					else
						{	/* Unsafe/tar.scm 268 */
							return bgl_reverse_bang(BgL_lstz00_1151);
						}
				}
			}
		}
	}



/* <anonymous:2189> */
	obj_t BGl_zc3anonymousza32189ze3z83zz__tarz00(obj_t BgL_envz00_2548)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 290 */
			{	/* Unsafe/tar.scm 291 */
				obj_t BgL_hz00_2549;

				obj_t BgL_ipz00_2550;

				BgL_hz00_2549 = PROCEDURE_REF(BgL_envz00_2548, (int) (((long) 0)));
				BgL_ipz00_2550 = PROCEDURE_REF(BgL_envz00_2548, (int) (((long) 1)));
				{

					{	/* Unsafe/tar.scm 291 */
						obj_t BgL_arg2190z00_2163;

						obj_t BgL_arg2191z00_2164;

						BgL_arg2190z00_2163 =
							BGl_tarzd2readzd2blockz00zz__tarz00(BgL_hz00_2549,
							BgL_ipz00_2550);
						{	/* Unsafe/tar.scm 291 */
							obj_t BgL_res2591z00_2166;

							{	/* Unsafe/tar.scm 291 */
								obj_t BgL_auxz00_3235;

								BgL_auxz00_3235 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2591z00_2166 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3235);
							}
							BgL_arg2191z00_2164 = BgL_res2591z00_2166;
						}
						return bgl_display_obj(BgL_arg2190z00_2163, BgL_arg2191z00_2164);
					}
				}
			}
		}
	}



/* untar-file */
	obj_t BGl_untarzd2filezd2zz__tarz00(obj_t BgL_ipz00_25, obj_t BgL_filez00_26)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 303 */
			{

			BgL_zc3anonymousza32202ze3z83_1190:
				{	/* Unsafe/tar.scm 305 */
					obj_t BgL_hz00_1191;

					BgL_hz00_1191 = BGl_tarzd2readzd2headerz00zz__tarz00(BgL_ipz00_25);
					if (BGl_iszd2azf3z21zz__objectz00(BgL_hz00_1191,
							BGl_tarzd2headerzd2zz__tarz00))
						{	/* Unsafe/tar.scm 307 */
							obj_t BgL_casezd2valuezd2_1193;

							{
								BgL_tarzd2headerzd2_bglt BgL_auxz00_3242;

								BgL_auxz00_3242 = (BgL_tarzd2headerzd2_bglt) (BgL_hz00_1191);
								BgL_casezd2valuezd2_1193 =
									(((BgL_tarzd2headerzd2_bglt) CREF(BgL_auxz00_3242))->
									BgL_typez00);
							}
							if ((BgL_casezd2valuezd2_1193 == BGl_symbol2712z00zz__tarz00))
								{	/* Unsafe/tar.scm 307 */
									goto BgL_zc3anonymousza32202ze3z83_1190;
								}
							else
								{	/* Unsafe/tar.scm 307 */
									if ((BgL_casezd2valuezd2_1193 == BGl_symbol2702z00zz__tarz00))
										{	/* Unsafe/tar.scm 311 */
											obj_t BgL_bz00_1196;

											obj_t BgL_nz00_1197;

											BgL_bz00_1196 =
												BGl_tarzd2readzd2blockz00zz__tarz00(BgL_hz00_1191,
												BgL_ipz00_25);
											{
												BgL_tarzd2headerzd2_bglt BgL_auxz00_3250;

												BgL_auxz00_3250 =
													(BgL_tarzd2headerzd2_bglt) (BgL_hz00_1191);
												BgL_nz00_1197 =
													(((BgL_tarzd2headerzd2_bglt) CREF(BgL_auxz00_3250))->
													BgL_namez00);
											}
											if (bigloo_strcmp(BgL_nz00_1197, BgL_filez00_26))
												{	/* Unsafe/tar.scm 313 */
													return BgL_bz00_1196;
												}
											else
												{	/* Unsafe/tar.scm 313 */
													goto BgL_zc3anonymousza32202ze3z83_1190;
												}
										}
									else
										{	/* Unsafe/tar.scm 307 */
											return BFALSE;
										}
								}
						}
					else
						{	/* Unsafe/tar.scm 306 */
							return BFALSE;
						}
				}
			}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__tarz00()
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 17 */
			{	/* Unsafe/tar.scm 54 */
				obj_t BgL_arg2207z00_1200;

				obj_t BgL_arg2208z00_1201;

				obj_t BgL_arg2212z00_1205;

				obj_t BgL_arg2213z00_1206;

				BgL_arg2207z00_1200 = BGl_symbol2775z00zz__tarz00;
				BgL_arg2208z00_1201 = BGl_objectz00zz__objectz00;
				{	/* Unsafe/tar.scm 54 */
					obj_t BgL_arg2214z00_1207;

					obj_t BgL_arg2216z00_1208;

					obj_t BgL_arg2217z00_1209;

					obj_t BgL_arg2222z00_1210;

					obj_t BgL_arg2223z00_1211;

					obj_t BgL_arg2224z00_1212;

					obj_t BgL_arg2226z00_1213;

					obj_t BgL_arg2227z00_1214;

					obj_t BgL_arg2233z00_1215;

					obj_t BgL_arg2234z00_1216;

					obj_t BgL_arg2235z00_1217;

					obj_t BgL_arg2236z00_1218;

					obj_t BgL_arg2237z00_1219;

					obj_t BgL_arg2238z00_1220;

					BgL_arg2214z00_1207 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2724z00zz__tarz00,
						BGl_tarzd2headerzd2namezd2envzd2zz__tarz00, BUNSPEC, BUNSPEC,
						((bool_t) 0), BFALSE,
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00());
					BgL_arg2216z00_1208 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2726z00zz__tarz00,
						BGl_tarzd2headerzd2modezd2envzd2zz__tarz00, BUNSPEC, BUNSPEC,
						((bool_t) 0), BFALSE,
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00());
					BgL_arg2217z00_1209 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2728z00zz__tarz00,
						BGl_tarzd2headerzd2uidzd2envzd2zz__tarz00, BUNSPEC, BUNSPEC,
						((bool_t) 0), BFALSE,
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00());
					BgL_arg2222z00_1210 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2730z00zz__tarz00,
						BGl_tarzd2headerzd2gidzd2envzd2zz__tarz00, BUNSPEC, BUNSPEC,
						((bool_t) 0), BFALSE,
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00());
					BgL_arg2223z00_1211 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2732z00zz__tarz00,
						BGl_tarzd2headerzd2siza7ezd2envz75zz__tarz00, BUNSPEC, BUNSPEC,
						((bool_t) 0), BFALSE,
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00());
					BgL_arg2224z00_1212 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2734z00zz__tarz00,
						BGl_tarzd2headerzd2mtimezd2envzd2zz__tarz00, BUNSPEC, BUNSPEC,
						((bool_t) 0), BFALSE,
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00());
					BgL_arg2226z00_1213 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2776z00zz__tarz00,
						BGl_tarzd2headerzd2checksumzd2envzd2zz__tarz00, BUNSPEC, BUNSPEC,
						((bool_t) 0), BFALSE,
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00());
					BgL_arg2227z00_1214 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2778z00zz__tarz00,
						BGl_tarzd2headerzd2typezd2envzd2zz__tarz00, BUNSPEC, BUNSPEC,
						((bool_t) 0), BFALSE,
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00());
					BgL_arg2233z00_1215 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2738z00zz__tarz00,
						BGl_tarzd2headerzd2linknamezd2envzd2zz__tarz00, BUNSPEC, BUNSPEC,
						((bool_t) 0), BFALSE,
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00());
					BgL_arg2234z00_1216 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2740z00zz__tarz00,
						BGl_tarzd2headerzd2magiczd2envzd2zz__tarz00, BUNSPEC, BUNSPEC,
						((bool_t) 0), BFALSE,
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00());
					BgL_arg2235z00_1217 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2742z00zz__tarz00,
						BGl_tarzd2headerzd2unamezd2envzd2zz__tarz00, BUNSPEC, BUNSPEC,
						((bool_t) 0), BFALSE,
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00());
					BgL_arg2236z00_1218 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2744z00zz__tarz00,
						BGl_tarzd2headerzd2gnamezd2envzd2zz__tarz00, BUNSPEC, BUNSPEC,
						((bool_t) 0), BFALSE,
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00());
					BgL_arg2237z00_1219 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2746z00zz__tarz00,
						BGl_tarzd2headerzd2devmajorzd2envzd2zz__tarz00, BUNSPEC, BUNSPEC,
						((bool_t) 0), BFALSE,
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00());
					BgL_arg2238z00_1220 =
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2748z00zz__tarz00,
						BGl_tarzd2headerzd2devminorzd2envzd2zz__tarz00, BUNSPEC, BUNSPEC,
						((bool_t) 0), BFALSE,
						BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00());
					{	/* Unsafe/tar.scm 54 */
						obj_t BgL_list2239z00_1221;

						{	/* Unsafe/tar.scm 54 */
							obj_t BgL_arg2240z00_1222;

							{	/* Unsafe/tar.scm 54 */
								obj_t BgL_arg2242z00_1223;

								{	/* Unsafe/tar.scm 54 */
									obj_t BgL_arg2243z00_1224;

									{	/* Unsafe/tar.scm 54 */
										obj_t BgL_arg2244z00_1225;

										{	/* Unsafe/tar.scm 54 */
											obj_t BgL_arg2245z00_1226;

											{	/* Unsafe/tar.scm 54 */
												obj_t BgL_arg2246z00_1227;

												{	/* Unsafe/tar.scm 54 */
													obj_t BgL_arg2247z00_1228;

													{	/* Unsafe/tar.scm 54 */
														obj_t BgL_arg2248z00_1229;

														{	/* Unsafe/tar.scm 54 */
															obj_t BgL_arg2249z00_1230;

															{	/* Unsafe/tar.scm 54 */
																obj_t BgL_arg2250z00_1231;

																{	/* Unsafe/tar.scm 54 */
																	obj_t BgL_arg2251z00_1232;

																	{	/* Unsafe/tar.scm 54 */
																		obj_t BgL_arg2252z00_1233;

																		{	/* Unsafe/tar.scm 54 */
																			obj_t BgL_arg2253z00_1234;

																			BgL_arg2253z00_1234 =
																				MAKE_PAIR(BgL_arg2238z00_1220, BNIL);
																			BgL_arg2252z00_1233 =
																				MAKE_PAIR(BgL_arg2237z00_1219,
																				BgL_arg2253z00_1234);
																		}
																		BgL_arg2251z00_1232 =
																			MAKE_PAIR(BgL_arg2236z00_1218,
																			BgL_arg2252z00_1233);
																	}
																	BgL_arg2250z00_1231 =
																		MAKE_PAIR(BgL_arg2235z00_1217,
																		BgL_arg2251z00_1232);
																}
																BgL_arg2249z00_1230 =
																	MAKE_PAIR(BgL_arg2234z00_1216,
																	BgL_arg2250z00_1231);
															}
															BgL_arg2248z00_1229 =
																MAKE_PAIR(BgL_arg2233z00_1215,
																BgL_arg2249z00_1230);
														}
														BgL_arg2247z00_1228 =
															MAKE_PAIR(BgL_arg2227z00_1214,
															BgL_arg2248z00_1229);
													}
													BgL_arg2246z00_1227 =
														MAKE_PAIR(BgL_arg2226z00_1213, BgL_arg2247z00_1228);
												}
												BgL_arg2245z00_1226 =
													MAKE_PAIR(BgL_arg2224z00_1212, BgL_arg2246z00_1227);
											}
											BgL_arg2244z00_1225 =
												MAKE_PAIR(BgL_arg2223z00_1211, BgL_arg2245z00_1226);
										}
										BgL_arg2243z00_1224 =
											MAKE_PAIR(BgL_arg2222z00_1210, BgL_arg2244z00_1225);
									}
									BgL_arg2242z00_1223 =
										MAKE_PAIR(BgL_arg2217z00_1209, BgL_arg2243z00_1224);
								}
								BgL_arg2240z00_1222 =
									MAKE_PAIR(BgL_arg2216z00_1208, BgL_arg2242z00_1223);
							}
							BgL_list2239z00_1221 =
								MAKE_PAIR(BgL_arg2214z00_1207, BgL_arg2240z00_1222);
						}
						BgL_arg2212z00_1205 = BgL_list2239z00_1221;
					}
				}
				{	/* Unsafe/tar.scm 54 */
					obj_t BgL_v1990z00_1263;

					BgL_v1990z00_1263 = create_vector((int) (((long) 0)));
					BgL_arg2213z00_1206 = BgL_v1990z00_1263;
				}
				BGl_tarzd2headerzd2zz__tarz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2207z00_1200,
					BgL_arg2208z00_1201, ((bool_t) 0),
					BGl_makezd2tarzd2headerzd2envzd2zz__tarz00,
					BGl_z52allocatezd2tarzd2headerzd2envz80zz__tarz00,
					BGl_tarzd2headerzd2nilzd2envzd2zz__tarz00,
					BGl_tarzd2headerzf3zd2envzf3zz__tarz00, ((long) 380980310),
					BgL_arg2212z00_1205, BFALSE, BgL_arg2213z00_1206);
			}
			return (BGl_z52thezd2tarzd2headerzd2nilz80zz__tarz00 = BUNSPEC, BUNSPEC);
		}
	}



/* tar-header? */
	BGL_EXPORTED_DEF bool_t BGl_tarzd2headerzf3z21zz__tarz00(obj_t
		BgL_obj1943z00_27)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 54 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1943z00_27,
				BGl_tarzd2headerzd2zz__tarz00);
		}
	}



/* _tar-header? */
	obj_t BGl__tarzd2headerzf3z21zz__tarz00(obj_t BgL_envz00_2596,
		obj_t BgL_obj1943z00_2597)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 54 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1943z00_2597,
					BGl_tarzd2headerzd2zz__tarz00));
		}
	}



/* make-tar-header */
	BGL_EXPORTED_DEF BgL_tarzd2headerzd2_bglt
		BGl_makezd2tarzd2headerz00zz__tarz00(obj_t BgL_name1838z00_31,
		long BgL_mode1839z00_32, long BgL_uid1840z00_33, long BgL_gid1841z00_34,
		long BgL_siza7e1842za7_35, obj_t BgL_mtime1843z00_36,
		long BgL_checksum1844z00_37, obj_t BgL_type1845z00_38,
		obj_t BgL_linkname1846z00_39, obj_t BgL_magic1847z00_40,
		obj_t BgL_uname1848z00_41, obj_t BgL_gname1849z00_42,
		long BgL_devmajor1850z00_43, long BgL_devminor1851z00_44)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 54 */
			{	/* Unsafe/tar.scm 54 */
				BgL_tarzd2headerzd2_bglt BgL_new1852z00_2180;

				{	/* Unsafe/tar.scm 54 */
					BgL_tarzd2headerzd2_bglt BgL_res2593z00_2185;

					{	/* Unsafe/tar.scm 54 */
						BgL_tarzd2headerzd2_bglt BgL_new1884z00_2181;

						BgL_new1884z00_2181 =
							((BgL_tarzd2headerzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_tarzd2headerzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1884z00_2181),
							BGl_classzd2numzd2zz__objectz00(BGl_tarzd2headerzd2zz__tarz00));
						{	/* Unsafe/tar.scm 54 */
							BgL_objectz00_bglt BgL_auxz00_3307;

							BgL_auxz00_3307 = (BgL_objectz00_bglt) (BgL_new1884z00_2181);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3307, BFALSE);
						}
						BgL_res2593z00_2185 = BgL_new1884z00_2181;
					}
					BgL_new1852z00_2180 = BgL_res2593z00_2185;
				}
				{	/* Unsafe/tar.scm 54 */
					BgL_tarzd2headerzd2_bglt BgL_res2594z00_2215;

					{	/* Unsafe/tar.scm 54 */
						BgL_tarzd2headerzd2_bglt BgL_new1868z00_2186;

						BgL_new1868z00_2186 = BgL_new1852z00_2180;
						{	/* Unsafe/tar.scm 54 */
							obj_t BgL_name1854z00_2201;

							long BgL_mode1855z00_2202;

							long BgL_uid1856z00_2203;

							long BgL_gid1857z00_2204;

							long BgL_siza7e1858za7_2205;

							obj_t BgL_mtime1859z00_2206;

							long BgL_checksum1860z00_2207;

							obj_t BgL_type1861z00_2208;

							obj_t BgL_linkname1862z00_2209;

							obj_t BgL_magic1863z00_2210;

							obj_t BgL_uname1864z00_2211;

							obj_t BgL_gname1865z00_2212;

							long BgL_devmajor1866z00_2213;

							long BgL_devminor1867z00_2214;

							BgL_name1854z00_2201 = BgL_name1838z00_31;
							BgL_mode1855z00_2202 = BgL_mode1839z00_32;
							BgL_uid1856z00_2203 = BgL_uid1840z00_33;
							BgL_gid1857z00_2204 = BgL_gid1841z00_34;
							BgL_siza7e1858za7_2205 = BgL_siza7e1842za7_35;
							BgL_mtime1859z00_2206 = BgL_mtime1843z00_36;
							BgL_checksum1860z00_2207 = BgL_checksum1844z00_37;
							BgL_type1861z00_2208 = BgL_type1845z00_38;
							BgL_linkname1862z00_2209 = BgL_linkname1846z00_39;
							BgL_magic1863z00_2210 = BgL_magic1847z00_40;
							BgL_uname1864z00_2211 = BgL_uname1848z00_41;
							BgL_gname1865z00_2212 = BgL_gname1849z00_42;
							BgL_devmajor1866z00_2213 = BgL_devmajor1850z00_43;
							BgL_devminor1867z00_2214 = BgL_devminor1851z00_44;
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2186))->
									BgL_namez00) = ((obj_t) BgL_name1854z00_2201), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2186))->
									BgL_modez00) = ((long) BgL_mode1855z00_2202), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2186))->
									BgL_uidz00) = ((long) BgL_uid1856z00_2203), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2186))->
									BgL_gidz00) = ((long) BgL_gid1857z00_2204), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2186))->
									BgL_siza7eza7) = ((long) BgL_siza7e1858za7_2205), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2186))->
									BgL_mtimez00) = ((obj_t) BgL_mtime1859z00_2206), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2186))->
									BgL_checksumz00) =
								((long) BgL_checksum1860z00_2207), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2186))->
									BgL_typez00) = ((obj_t) BgL_type1861z00_2208), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2186))->
									BgL_linknamez00) =
								((obj_t) BgL_linkname1862z00_2209), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2186))->
									BgL_magicz00) = ((obj_t) BgL_magic1863z00_2210), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2186))->
									BgL_unamez00) = ((obj_t) BgL_uname1864z00_2211), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2186))->
									BgL_gnamez00) = ((obj_t) BgL_gname1865z00_2212), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2186))->
									BgL_devmajorz00) =
								((long) BgL_devmajor1866z00_2213), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2186))->
									BgL_devminorz00) =
								((long) BgL_devminor1867z00_2214), BUNSPEC);
							BgL_res2594z00_2215 = BgL_new1868z00_2186;
					}} BgL_res2594z00_2215;
				}
				return BgL_new1852z00_2180;
			}
		}
	}



/* _make-tar-header */
	obj_t BGl__makezd2tarzd2headerz00zz__tarz00(obj_t BgL_envz00_2551,
		obj_t BgL_name1838z00_2552, obj_t BgL_mode1839z00_2553,
		obj_t BgL_uid1840z00_2554, obj_t BgL_gid1841z00_2555,
		obj_t BgL_siza7e1842za7_2556, obj_t BgL_mtime1843z00_2557,
		obj_t BgL_checksum1844z00_2558, obj_t BgL_type1845z00_2559,
		obj_t BgL_linkname1846z00_2560, obj_t BgL_magic1847z00_2561,
		obj_t BgL_uname1848z00_2562, obj_t BgL_gname1849z00_2563,
		obj_t BgL_devmajor1850z00_2564, obj_t BgL_devminor1851z00_2565)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 54 */
			{	/* Unsafe/tar.scm 54 */
				BgL_tarzd2headerzd2_bglt BgL_auxz00_3324;

				{	/* Unsafe/tar.scm 54 */
					long BgL_auxz00_3428;

					long BgL_auxz00_3419;

					obj_t BgL_auxz00_3412;

					obj_t BgL_auxz00_3405;

					obj_t BgL_auxz00_3398;

					obj_t BgL_auxz00_3391;

					obj_t BgL_auxz00_3384;

					long BgL_auxz00_3375;

					obj_t BgL_auxz00_3368;

					long BgL_auxz00_3359;

					long BgL_auxz00_3350;

					long BgL_auxz00_3341;

					long BgL_auxz00_3332;

					obj_t BgL_auxz00_3325;

					{	/* Unsafe/tar.scm 54 */
						obj_t BgL_auxz00_3429;

						if (INTEGERP(BgL_devminor1851z00_2565))
							{	/* Unsafe/tar.scm 54 */
								BgL_auxz00_3429 = BgL_devminor1851z00_2565;
							}
						else
							{
								obj_t BgL_auxz00_3432;

								BgL_auxz00_3432 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
									BINT(((long) 1786)), BGl_string2780z00zz__tarz00,
									BGl_string2759z00zz__tarz00, BgL_devminor1851z00_2565);
								FAILURE(BgL_auxz00_3432, BFALSE, BFALSE);
							}
						BgL_auxz00_3428 = (long) CINT(BgL_auxz00_3429);
					}
					{	/* Unsafe/tar.scm 54 */
						obj_t BgL_auxz00_3420;

						if (INTEGERP(BgL_devmajor1850z00_2564))
							{	/* Unsafe/tar.scm 54 */
								BgL_auxz00_3420 = BgL_devmajor1850z00_2564;
							}
						else
							{
								obj_t BgL_auxz00_3423;

								BgL_auxz00_3423 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
									BINT(((long) 1786)), BGl_string2780z00zz__tarz00,
									BGl_string2759z00zz__tarz00, BgL_devmajor1850z00_2564);
								FAILURE(BgL_auxz00_3423, BFALSE, BFALSE);
							}
						BgL_auxz00_3419 = (long) CINT(BgL_auxz00_3420);
					}
					if (STRINGP(BgL_gname1849z00_2563))
						{	/* Unsafe/tar.scm 54 */
							BgL_auxz00_3412 = BgL_gname1849z00_2563;
						}
					else
						{
							obj_t BgL_auxz00_3415;

							BgL_auxz00_3415 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
								BINT(((long) 1786)), BGl_string2780z00zz__tarz00,
								BGl_string2770z00zz__tarz00, BgL_gname1849z00_2563);
							FAILURE(BgL_auxz00_3415, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_uname1848z00_2562))
						{	/* Unsafe/tar.scm 54 */
							BgL_auxz00_3405 = BgL_uname1848z00_2562;
						}
					else
						{
							obj_t BgL_auxz00_3408;

							BgL_auxz00_3408 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
								BINT(((long) 1786)), BGl_string2780z00zz__tarz00,
								BGl_string2770z00zz__tarz00, BgL_uname1848z00_2562);
							FAILURE(BgL_auxz00_3408, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_magic1847z00_2561))
						{	/* Unsafe/tar.scm 54 */
							BgL_auxz00_3398 = BgL_magic1847z00_2561;
						}
					else
						{
							obj_t BgL_auxz00_3401;

							BgL_auxz00_3401 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
								BINT(((long) 1786)), BGl_string2780z00zz__tarz00,
								BGl_string2770z00zz__tarz00, BgL_magic1847z00_2561);
							FAILURE(BgL_auxz00_3401, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_linkname1846z00_2560))
						{	/* Unsafe/tar.scm 54 */
							BgL_auxz00_3391 = BgL_linkname1846z00_2560;
						}
					else
						{
							obj_t BgL_auxz00_3394;

							BgL_auxz00_3394 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
								BINT(((long) 1786)), BGl_string2780z00zz__tarz00,
								BGl_string2770z00zz__tarz00, BgL_linkname1846z00_2560);
							FAILURE(BgL_auxz00_3394, BFALSE, BFALSE);
						}
					if (SYMBOLP(BgL_type1845z00_2559))
						{	/* Unsafe/tar.scm 54 */
							BgL_auxz00_3384 = BgL_type1845z00_2559;
						}
					else
						{
							obj_t BgL_auxz00_3387;

							BgL_auxz00_3387 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
								BINT(((long) 1786)), BGl_string2780z00zz__tarz00,
								BGl_string2783z00zz__tarz00, BgL_type1845z00_2559);
							FAILURE(BgL_auxz00_3387, BFALSE, BFALSE);
						}
					{	/* Unsafe/tar.scm 54 */
						obj_t BgL_auxz00_3376;

						if (INTEGERP(BgL_checksum1844z00_2558))
							{	/* Unsafe/tar.scm 54 */
								BgL_auxz00_3376 = BgL_checksum1844z00_2558;
							}
						else
							{
								obj_t BgL_auxz00_3379;

								BgL_auxz00_3379 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
									BINT(((long) 1786)), BGl_string2780z00zz__tarz00,
									BGl_string2759z00zz__tarz00, BgL_checksum1844z00_2558);
								FAILURE(BgL_auxz00_3379, BFALSE, BFALSE);
							}
						BgL_auxz00_3375 = (long) CINT(BgL_auxz00_3376);
					}
					if (BGL_DATEP(BgL_mtime1843z00_2557))
						{	/* Unsafe/tar.scm 54 */
							BgL_auxz00_3368 = BgL_mtime1843z00_2557;
						}
					else
						{
							obj_t BgL_auxz00_3371;

							BgL_auxz00_3371 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
								BINT(((long) 1786)), BGl_string2780z00zz__tarz00,
								BGl_string2782z00zz__tarz00, BgL_mtime1843z00_2557);
							FAILURE(BgL_auxz00_3371, BFALSE, BFALSE);
						}
					{	/* Unsafe/tar.scm 54 */
						obj_t BgL_auxz00_3360;

						if (ELONGP(BgL_siza7e1842za7_2556))
							{	/* Unsafe/tar.scm 54 */
								BgL_auxz00_3360 = BgL_siza7e1842za7_2556;
							}
						else
							{
								obj_t BgL_auxz00_3363;

								BgL_auxz00_3363 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
									BINT(((long) 1786)), BGl_string2780z00zz__tarz00,
									BGl_string2781z00zz__tarz00, BgL_siza7e1842za7_2556);
								FAILURE(BgL_auxz00_3363, BFALSE, BFALSE);
							}
						BgL_auxz00_3359 = BELONG_TO_LONG(BgL_auxz00_3360);
					}
					{	/* Unsafe/tar.scm 54 */
						obj_t BgL_auxz00_3351;

						if (INTEGERP(BgL_gid1841z00_2555))
							{	/* Unsafe/tar.scm 54 */
								BgL_auxz00_3351 = BgL_gid1841z00_2555;
							}
						else
							{
								obj_t BgL_auxz00_3354;

								BgL_auxz00_3354 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
									BINT(((long) 1786)), BGl_string2780z00zz__tarz00,
									BGl_string2759z00zz__tarz00, BgL_gid1841z00_2555);
								FAILURE(BgL_auxz00_3354, BFALSE, BFALSE);
							}
						BgL_auxz00_3350 = (long) CINT(BgL_auxz00_3351);
					}
					{	/* Unsafe/tar.scm 54 */
						obj_t BgL_auxz00_3342;

						if (INTEGERP(BgL_uid1840z00_2554))
							{	/* Unsafe/tar.scm 54 */
								BgL_auxz00_3342 = BgL_uid1840z00_2554;
							}
						else
							{
								obj_t BgL_auxz00_3345;

								BgL_auxz00_3345 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
									BINT(((long) 1786)), BGl_string2780z00zz__tarz00,
									BGl_string2759z00zz__tarz00, BgL_uid1840z00_2554);
								FAILURE(BgL_auxz00_3345, BFALSE, BFALSE);
							}
						BgL_auxz00_3341 = (long) CINT(BgL_auxz00_3342);
					}
					{	/* Unsafe/tar.scm 54 */
						obj_t BgL_auxz00_3333;

						if (INTEGERP(BgL_mode1839z00_2553))
							{	/* Unsafe/tar.scm 54 */
								BgL_auxz00_3333 = BgL_mode1839z00_2553;
							}
						else
							{
								obj_t BgL_auxz00_3336;

								BgL_auxz00_3336 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
									BINT(((long) 1786)), BGl_string2780z00zz__tarz00,
									BGl_string2759z00zz__tarz00, BgL_mode1839z00_2553);
								FAILURE(BgL_auxz00_3336, BFALSE, BFALSE);
							}
						BgL_auxz00_3332 = (long) CINT(BgL_auxz00_3333);
					}
					if (STRINGP(BgL_name1838z00_2552))
						{	/* Unsafe/tar.scm 54 */
							BgL_auxz00_3325 = BgL_name1838z00_2552;
						}
					else
						{
							obj_t BgL_auxz00_3328;

							BgL_auxz00_3328 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
								BINT(((long) 1786)), BGl_string2780z00zz__tarz00,
								BGl_string2770z00zz__tarz00, BgL_name1838z00_2552);
							FAILURE(BgL_auxz00_3328, BFALSE, BFALSE);
						}
					BgL_auxz00_3324 =
						BGl_makezd2tarzd2headerz00zz__tarz00(BgL_auxz00_3325,
						BgL_auxz00_3332, BgL_auxz00_3341, BgL_auxz00_3350, BgL_auxz00_3359,
						BgL_auxz00_3368, BgL_auxz00_3375, BgL_auxz00_3384, BgL_auxz00_3391,
						BgL_auxz00_3398, BgL_auxz00_3405, BgL_auxz00_3412, BgL_auxz00_3419,
						BgL_auxz00_3428);
				}
				return (obj_t) (BgL_auxz00_3324);
			}
		}
	}



/* fill-tar-header! */
	BGL_EXPORTED_DEF BgL_tarzd2headerzd2_bglt
		BGl_fillzd2tarzd2headerz12z12zz__tarz00(BgL_tarzd2headerzd2_bglt
		BgL_new1868z00_45, obj_t BgL_name1854z00_46, long BgL_mode1855z00_47,
		long BgL_uid1856z00_48, long BgL_gid1857z00_49, long BgL_siza7e1858za7_50,
		obj_t BgL_mtime1859z00_51, long BgL_checksum1860z00_52,
		obj_t BgL_type1861z00_53, obj_t BgL_linkname1862z00_54,
		obj_t BgL_magic1863z00_55, obj_t BgL_uname1864z00_56,
		obj_t BgL_gname1865z00_57, long BgL_devmajor1866z00_58,
		long BgL_devminor1867z00_59)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 54 */
			{	/* Unsafe/tar.scm 54 */
				obj_t BgL_name1854z00_2727;

				long BgL_mode1855z00_2728;

				long BgL_uid1856z00_2729;

				long BgL_gid1857z00_2730;

				long BgL_siza7e1858za7_2731;

				obj_t BgL_mtime1859z00_2732;

				long BgL_checksum1860z00_2733;

				obj_t BgL_type1861z00_2734;

				obj_t BgL_linkname1862z00_2735;

				obj_t BgL_magic1863z00_2736;

				obj_t BgL_uname1864z00_2737;

				obj_t BgL_gname1865z00_2738;

				long BgL_devmajor1866z00_2739;

				long BgL_devminor1867z00_2740;

				BgL_name1854z00_2727 = BgL_name1854z00_46;
				BgL_mode1855z00_2728 = BgL_mode1855z00_47;
				BgL_uid1856z00_2729 = BgL_uid1856z00_48;
				BgL_gid1857z00_2730 = BgL_gid1857z00_49;
				BgL_siza7e1858za7_2731 = BgL_siza7e1858za7_50;
				BgL_mtime1859z00_2732 = BgL_mtime1859z00_51;
				BgL_checksum1860z00_2733 = BgL_checksum1860z00_52;
				BgL_type1861z00_2734 = BgL_type1861z00_53;
				BgL_linkname1862z00_2735 = BgL_linkname1862z00_54;
				BgL_magic1863z00_2736 = BgL_magic1863z00_55;
				BgL_uname1864z00_2737 = BgL_uname1864z00_56;
				BgL_gname1865z00_2738 = BgL_gname1865z00_57;
				BgL_devmajor1866z00_2739 = BgL_devmajor1866z00_58;
				BgL_devminor1867z00_2740 = BgL_devminor1867z00_59;
				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_45))->BgL_namez00) =
					((obj_t) BgL_name1854z00_2727), BUNSPEC);
				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_45))->BgL_modez00) =
					((long) BgL_mode1855z00_2728), BUNSPEC);
				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_45))->BgL_uidz00) =
					((long) BgL_uid1856z00_2729), BUNSPEC);
				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_45))->BgL_gidz00) =
					((long) BgL_gid1857z00_2730), BUNSPEC);
				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_45))->BgL_siza7eza7) =
					((long) BgL_siza7e1858za7_2731), BUNSPEC);
				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_45))->BgL_mtimez00) =
					((obj_t) BgL_mtime1859z00_2732), BUNSPEC);
				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_45))->
						BgL_checksumz00) = ((long) BgL_checksum1860z00_2733), BUNSPEC);
				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_45))->BgL_typez00) =
					((obj_t) BgL_type1861z00_2734), BUNSPEC);
				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_45))->
						BgL_linknamez00) = ((obj_t) BgL_linkname1862z00_2735), BUNSPEC);
				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_45))->BgL_magicz00) =
					((obj_t) BgL_magic1863z00_2736), BUNSPEC);
				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_45))->BgL_unamez00) =
					((obj_t) BgL_uname1864z00_2737), BUNSPEC);
				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_45))->BgL_gnamez00) =
					((obj_t) BgL_gname1865z00_2738), BUNSPEC);
				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_45))->
						BgL_devmajorz00) = ((long) BgL_devmajor1866z00_2739), BUNSPEC);
				((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_45))->
						BgL_devminorz00) = ((long) BgL_devminor1867z00_2740), BUNSPEC);
				return BgL_new1868z00_45;
			}
		}
	}



/* _fill-tar-header! */
	obj_t BGl__fillzd2tarzd2headerz12z12zz__tarz00(obj_t BgL_envz00_2598,
		obj_t BgL_new1868z00_2599, obj_t BgL_name1854z00_2600,
		obj_t BgL_mode1855z00_2601, obj_t BgL_uid1856z00_2602,
		obj_t BgL_gid1857z00_2603, obj_t BgL_siza7e1858za7_2604,
		obj_t BgL_mtime1859z00_2605, obj_t BgL_checksum1860z00_2606,
		obj_t BgL_type1861z00_2607, obj_t BgL_linkname1862z00_2608,
		obj_t BgL_magic1863z00_2609, obj_t BgL_uname1864z00_2610,
		obj_t BgL_gname1865z00_2611, obj_t BgL_devmajor1866z00_2612,
		obj_t BgL_devminor1867z00_2613)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 54 */
			{	/* Unsafe/tar.scm 54 */
				BgL_tarzd2headerzd2_bglt BgL_auxz00_3453;

				{	/* Unsafe/tar.scm 54 */
					BgL_tarzd2headerzd2_bglt BgL_res2807z00_2771;

					{	/* Unsafe/tar.scm 54 */
						BgL_tarzd2headerzd2_bglt BgL_new1868z00_2742;

						obj_t BgL_name1854z00_2743;

						long BgL_mode1855z00_2744;

						long BgL_uid1856z00_2745;

						long BgL_gid1857z00_2746;

						long BgL_siza7e1858za7_2747;

						obj_t BgL_mtime1859z00_2748;

						long BgL_checksum1860z00_2749;

						obj_t BgL_type1861z00_2750;

						obj_t BgL_linkname1862z00_2751;

						obj_t BgL_magic1863z00_2752;

						obj_t BgL_uname1864z00_2753;

						obj_t BgL_gname1865z00_2754;

						long BgL_devmajor1866z00_2755;

						long BgL_devminor1867z00_2756;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_new1868z00_2599,
								BGl_tarzd2headerzd2zz__tarz00))
							{	/* Unsafe/tar.scm 54 */
								BgL_new1868z00_2742 =
									(BgL_tarzd2headerzd2_bglt) (BgL_new1868z00_2599);
							}
						else
							{
								obj_t BgL_auxz00_3457;

								BgL_auxz00_3457 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
									BINT(((long) 1786)), BGl_string2784z00zz__tarz00,
									BGl_string2763z00zz__tarz00, BgL_new1868z00_2599);
								FAILURE(BgL_auxz00_3457, BFALSE, BFALSE);
							}
						if (STRINGP(BgL_name1854z00_2600))
							{	/* Unsafe/tar.scm 54 */
								BgL_name1854z00_2743 = BgL_name1854z00_2600;
							}
						else
							{
								obj_t BgL_auxz00_3463;

								BgL_auxz00_3463 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
									BINT(((long) 1786)), BGl_string2784z00zz__tarz00,
									BGl_string2770z00zz__tarz00, BgL_name1854z00_2600);
								FAILURE(BgL_auxz00_3463, BFALSE, BFALSE);
							}
						{	/* Unsafe/tar.scm 54 */
							obj_t BgL_auxz00_3467;

							if (INTEGERP(BgL_mode1855z00_2601))
								{	/* Unsafe/tar.scm 54 */
									BgL_auxz00_3467 = BgL_mode1855z00_2601;
								}
							else
								{
									obj_t BgL_auxz00_3470;

									BgL_auxz00_3470 =
										BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
										BINT(((long) 1786)), BGl_string2784z00zz__tarz00,
										BGl_string2759z00zz__tarz00, BgL_mode1855z00_2601);
									FAILURE(BgL_auxz00_3470, BFALSE, BFALSE);
								}
							BgL_mode1855z00_2744 = (long) CINT(BgL_auxz00_3467);
						}
						{	/* Unsafe/tar.scm 54 */
							obj_t BgL_auxz00_3475;

							if (INTEGERP(BgL_uid1856z00_2602))
								{	/* Unsafe/tar.scm 54 */
									BgL_auxz00_3475 = BgL_uid1856z00_2602;
								}
							else
								{
									obj_t BgL_auxz00_3478;

									BgL_auxz00_3478 =
										BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
										BINT(((long) 1786)), BGl_string2784z00zz__tarz00,
										BGl_string2759z00zz__tarz00, BgL_uid1856z00_2602);
									FAILURE(BgL_auxz00_3478, BFALSE, BFALSE);
								}
							BgL_uid1856z00_2745 = (long) CINT(BgL_auxz00_3475);
						}
						{	/* Unsafe/tar.scm 54 */
							obj_t BgL_auxz00_3483;

							if (INTEGERP(BgL_gid1857z00_2603))
								{	/* Unsafe/tar.scm 54 */
									BgL_auxz00_3483 = BgL_gid1857z00_2603;
								}
							else
								{
									obj_t BgL_auxz00_3486;

									BgL_auxz00_3486 =
										BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
										BINT(((long) 1786)), BGl_string2784z00zz__tarz00,
										BGl_string2759z00zz__tarz00, BgL_gid1857z00_2603);
									FAILURE(BgL_auxz00_3486, BFALSE, BFALSE);
								}
							BgL_gid1857z00_2746 = (long) CINT(BgL_auxz00_3483);
						}
						{	/* Unsafe/tar.scm 54 */
							obj_t BgL_auxz00_3491;

							if (ELONGP(BgL_siza7e1858za7_2604))
								{	/* Unsafe/tar.scm 54 */
									BgL_auxz00_3491 = BgL_siza7e1858za7_2604;
								}
							else
								{
									obj_t BgL_auxz00_3494;

									BgL_auxz00_3494 =
										BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
										BINT(((long) 1786)), BGl_string2784z00zz__tarz00,
										BGl_string2781z00zz__tarz00, BgL_siza7e1858za7_2604);
									FAILURE(BgL_auxz00_3494, BFALSE, BFALSE);
								}
							BgL_siza7e1858za7_2747 = BELONG_TO_LONG(BgL_auxz00_3491);
						}
						if (BGL_DATEP(BgL_mtime1859z00_2605))
							{	/* Unsafe/tar.scm 54 */
								BgL_mtime1859z00_2748 = BgL_mtime1859z00_2605;
							}
						else
							{
								obj_t BgL_auxz00_3501;

								BgL_auxz00_3501 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
									BINT(((long) 1786)), BGl_string2784z00zz__tarz00,
									BGl_string2782z00zz__tarz00, BgL_mtime1859z00_2605);
								FAILURE(BgL_auxz00_3501, BFALSE, BFALSE);
							}
						{	/* Unsafe/tar.scm 54 */
							obj_t BgL_auxz00_3505;

							if (INTEGERP(BgL_checksum1860z00_2606))
								{	/* Unsafe/tar.scm 54 */
									BgL_auxz00_3505 = BgL_checksum1860z00_2606;
								}
							else
								{
									obj_t BgL_auxz00_3508;

									BgL_auxz00_3508 =
										BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
										BINT(((long) 1786)), BGl_string2784z00zz__tarz00,
										BGl_string2759z00zz__tarz00, BgL_checksum1860z00_2606);
									FAILURE(BgL_auxz00_3508, BFALSE, BFALSE);
								}
							BgL_checksum1860z00_2749 = (long) CINT(BgL_auxz00_3505);
						}
						if (SYMBOLP(BgL_type1861z00_2607))
							{	/* Unsafe/tar.scm 54 */
								BgL_type1861z00_2750 = BgL_type1861z00_2607;
							}
						else
							{
								obj_t BgL_auxz00_3515;

								BgL_auxz00_3515 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
									BINT(((long) 1786)), BGl_string2784z00zz__tarz00,
									BGl_string2783z00zz__tarz00, BgL_type1861z00_2607);
								FAILURE(BgL_auxz00_3515, BFALSE, BFALSE);
							}
						if (STRINGP(BgL_linkname1862z00_2608))
							{	/* Unsafe/tar.scm 54 */
								BgL_linkname1862z00_2751 = BgL_linkname1862z00_2608;
							}
						else
							{
								obj_t BgL_auxz00_3521;

								BgL_auxz00_3521 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
									BINT(((long) 1786)), BGl_string2784z00zz__tarz00,
									BGl_string2770z00zz__tarz00, BgL_linkname1862z00_2608);
								FAILURE(BgL_auxz00_3521, BFALSE, BFALSE);
							}
						if (STRINGP(BgL_magic1863z00_2609))
							{	/* Unsafe/tar.scm 54 */
								BgL_magic1863z00_2752 = BgL_magic1863z00_2609;
							}
						else
							{
								obj_t BgL_auxz00_3527;

								BgL_auxz00_3527 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
									BINT(((long) 1786)), BGl_string2784z00zz__tarz00,
									BGl_string2770z00zz__tarz00, BgL_magic1863z00_2609);
								FAILURE(BgL_auxz00_3527, BFALSE, BFALSE);
							}
						if (STRINGP(BgL_uname1864z00_2610))
							{	/* Unsafe/tar.scm 54 */
								BgL_uname1864z00_2753 = BgL_uname1864z00_2610;
							}
						else
							{
								obj_t BgL_auxz00_3533;

								BgL_auxz00_3533 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
									BINT(((long) 1786)), BGl_string2784z00zz__tarz00,
									BGl_string2770z00zz__tarz00, BgL_uname1864z00_2610);
								FAILURE(BgL_auxz00_3533, BFALSE, BFALSE);
							}
						if (STRINGP(BgL_gname1865z00_2611))
							{	/* Unsafe/tar.scm 54 */
								BgL_gname1865z00_2754 = BgL_gname1865z00_2611;
							}
						else
							{
								obj_t BgL_auxz00_3539;

								BgL_auxz00_3539 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
									BINT(((long) 1786)), BGl_string2784z00zz__tarz00,
									BGl_string2770z00zz__tarz00, BgL_gname1865z00_2611);
								FAILURE(BgL_auxz00_3539, BFALSE, BFALSE);
							}
						{	/* Unsafe/tar.scm 54 */
							obj_t BgL_auxz00_3543;

							if (INTEGERP(BgL_devmajor1866z00_2612))
								{	/* Unsafe/tar.scm 54 */
									BgL_auxz00_3543 = BgL_devmajor1866z00_2612;
								}
							else
								{
									obj_t BgL_auxz00_3546;

									BgL_auxz00_3546 =
										BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
										BINT(((long) 1786)), BGl_string2784z00zz__tarz00,
										BGl_string2759z00zz__tarz00, BgL_devmajor1866z00_2612);
									FAILURE(BgL_auxz00_3546, BFALSE, BFALSE);
								}
							BgL_devmajor1866z00_2755 = (long) CINT(BgL_auxz00_3543);
						}
						{	/* Unsafe/tar.scm 54 */
							obj_t BgL_auxz00_3551;

							if (INTEGERP(BgL_devminor1867z00_2613))
								{	/* Unsafe/tar.scm 54 */
									BgL_auxz00_3551 = BgL_devminor1867z00_2613;
								}
							else
								{
									obj_t BgL_auxz00_3554;

									BgL_auxz00_3554 =
										BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
										BINT(((long) 1786)), BGl_string2784z00zz__tarz00,
										BGl_string2759z00zz__tarz00, BgL_devminor1867z00_2613);
									FAILURE(BgL_auxz00_3554, BFALSE, BFALSE);
								}
							BgL_devminor1867z00_2756 = (long) CINT(BgL_auxz00_3551);
						}
						{	/* Unsafe/tar.scm 54 */
							obj_t BgL_name1854z00_2757;

							long BgL_mode1855z00_2758;

							long BgL_uid1856z00_2759;

							long BgL_gid1857z00_2760;

							long BgL_siza7e1858za7_2761;

							obj_t BgL_mtime1859z00_2762;

							long BgL_checksum1860z00_2763;

							obj_t BgL_type1861z00_2764;

							obj_t BgL_linkname1862z00_2765;

							obj_t BgL_magic1863z00_2766;

							obj_t BgL_uname1864z00_2767;

							obj_t BgL_gname1865z00_2768;

							long BgL_devmajor1866z00_2769;

							long BgL_devminor1867z00_2770;

							BgL_name1854z00_2757 = BgL_name1854z00_2743;
							BgL_mode1855z00_2758 = BgL_mode1855z00_2744;
							BgL_uid1856z00_2759 = BgL_uid1856z00_2745;
							BgL_gid1857z00_2760 = BgL_gid1857z00_2746;
							BgL_siza7e1858za7_2761 = BgL_siza7e1858za7_2747;
							BgL_mtime1859z00_2762 = BgL_mtime1859z00_2748;
							BgL_checksum1860z00_2763 = BgL_checksum1860z00_2749;
							BgL_type1861z00_2764 = BgL_type1861z00_2750;
							BgL_linkname1862z00_2765 = BgL_linkname1862z00_2751;
							BgL_magic1863z00_2766 = BgL_magic1863z00_2752;
							BgL_uname1864z00_2767 = BgL_uname1864z00_2753;
							BgL_gname1865z00_2768 = BgL_gname1865z00_2754;
							BgL_devmajor1866z00_2769 = BgL_devmajor1866z00_2755;
							BgL_devminor1867z00_2770 = BgL_devminor1867z00_2756;
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2742))->
									BgL_namez00) = ((obj_t) BgL_name1854z00_2757), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2742))->
									BgL_modez00) = ((long) BgL_mode1855z00_2758), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2742))->
									BgL_uidz00) = ((long) BgL_uid1856z00_2759), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2742))->
									BgL_gidz00) = ((long) BgL_gid1857z00_2760), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2742))->
									BgL_siza7eza7) = ((long) BgL_siza7e1858za7_2761), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2742))->
									BgL_mtimez00) = ((obj_t) BgL_mtime1859z00_2762), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2742))->
									BgL_checksumz00) =
								((long) BgL_checksum1860z00_2763), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2742))->
									BgL_typez00) = ((obj_t) BgL_type1861z00_2764), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2742))->
									BgL_linknamez00) =
								((obj_t) BgL_linkname1862z00_2765), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2742))->
									BgL_magicz00) = ((obj_t) BgL_magic1863z00_2766), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2742))->
									BgL_unamez00) = ((obj_t) BgL_uname1864z00_2767), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2742))->
									BgL_gnamez00) = ((obj_t) BgL_gname1865z00_2768), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2742))->
									BgL_devmajorz00) =
								((long) BgL_devmajor1866z00_2769), BUNSPEC);
							((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2742))->
									BgL_devminorz00) =
								((long) BgL_devminor1867z00_2770), BUNSPEC);
							BgL_res2807z00_2771 = BgL_new1868z00_2742;
					}}
					BgL_auxz00_3453 = BgL_res2807z00_2771;
				}
				return (obj_t) (BgL_auxz00_3453);
			}
		}
	}



/* %allocate-tar-header */
	BGL_EXPORTED_DEF BgL_tarzd2headerzd2_bglt
		BGl_z52allocatezd2tarzd2headerz52zz__tarz00()
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 54 */
			{	/* Unsafe/tar.scm 54 */
				BgL_tarzd2headerzd2_bglt BgL_new1884z00_2772;

				BgL_new1884z00_2772 =
					((BgL_tarzd2headerzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_tarzd2headerzd2_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1884z00_2772),
					BGl_classzd2numzd2zz__objectz00(BGl_tarzd2headerzd2zz__tarz00));
				{	/* Unsafe/tar.scm 54 */
					BgL_objectz00_bglt BgL_auxz00_3578;

					BgL_auxz00_3578 = (BgL_objectz00_bglt) (BgL_new1884z00_2772);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3578, BFALSE);
				}
				return BgL_new1884z00_2772;
			}
		}
	}



/* _%allocate-tar-header */
	obj_t BGl__z52allocatezd2tarzd2headerz52zz__tarz00(obj_t BgL_envz00_2566)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 54 */
			{	/* Unsafe/tar.scm 54 */
				BgL_tarzd2headerzd2_bglt BgL_auxz00_3581;

				{	/* Unsafe/tar.scm 54 */
					BgL_tarzd2headerzd2_bglt BgL_res2808z00_2776;

					{	/* Unsafe/tar.scm 54 */
						BgL_tarzd2headerzd2_bglt BgL_new1884z00_2774;

						BgL_new1884z00_2774 =
							((BgL_tarzd2headerzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_tarzd2headerzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1884z00_2774),
							BGl_classzd2numzd2zz__objectz00(BGl_tarzd2headerzd2zz__tarz00));
						{	/* Unsafe/tar.scm 54 */
							BgL_objectz00_bglt BgL_auxz00_3586;

							BgL_auxz00_3586 = (BgL_objectz00_bglt) (BgL_new1884z00_2774);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3586, BFALSE);
						}
						BgL_res2808z00_2776 = BgL_new1884z00_2774;
					}
					BgL_auxz00_3581 = BgL_res2808z00_2776;
				}
				return (obj_t) (BgL_auxz00_3581);
			}
		}
	}



/* tar-header-nil */
	BGL_EXPORTED_DEF BgL_tarzd2headerzd2_bglt
		BGl_tarzd2headerzd2nilz00zz__tarz00()
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 54 */
			if ((BGl_z52thezd2tarzd2headerzd2nilz80zz__tarz00 == BUNSPEC))
				{	/* Unsafe/tar.scm 54 */
					{	/* Unsafe/tar.scm 54 */
						BgL_tarzd2headerzd2_bglt BgL_res2595z00_2238;

						{	/* Unsafe/tar.scm 54 */
							BgL_tarzd2headerzd2_bglt BgL_new1884z00_2234;

							BgL_new1884z00_2234 =
								((BgL_tarzd2headerzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_tarzd2headerzd2_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1884z00_2234),
								BGl_classzd2numzd2zz__objectz00(BGl_tarzd2headerzd2zz__tarz00));
							{	/* Unsafe/tar.scm 54 */
								BgL_objectz00_bglt BgL_auxz00_3596;

								BgL_auxz00_3596 = (BgL_objectz00_bglt) (BgL_new1884z00_2234);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3596, BFALSE);
							}
							BgL_res2595z00_2238 = BgL_new1884z00_2234;
						}
						BGl_z52thezd2tarzd2headerzd2nilz80zz__tarz00 =
							(obj_t) (BgL_res2595z00_2238);
					}
					{	/* Unsafe/tar.scm 54 */
						long BgL_arg2295z00_1286;

						obj_t BgL_arg2296z00_1287;

						obj_t BgL_arg2300z00_1289;

						BgL_arg2295z00_1286 =
							BGl_stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00
							(BGl_string2785z00zz__tarz00, BNIL);
						BgL_arg2296z00_1287 = bgl_seconds_to_date(bgl_current_seconds());
						BgL_arg2300z00_1289 = BGl_symbol2786z00zz__tarz00;
						{	/* Unsafe/tar.scm 54 */
							BgL_tarzd2headerzd2_bglt BgL_res2597z00_2270;

							{	/* Unsafe/tar.scm 54 */
								BgL_tarzd2headerzd2_bglt BgL_new1868z00_2241;

								BgL_new1868z00_2241 =
									(BgL_tarzd2headerzd2_bglt)
									(BGl_z52thezd2tarzd2headerzd2nilz80zz__tarz00);
								{	/* Unsafe/tar.scm 54 */
									obj_t BgL_name1854z00_2256;

									long BgL_mode1855z00_2257;

									long BgL_uid1856z00_2258;

									long BgL_gid1857z00_2259;

									long BgL_siza7e1858za7_2260;

									obj_t BgL_mtime1859z00_2261;

									long BgL_checksum1860z00_2262;

									obj_t BgL_type1861z00_2263;

									obj_t BgL_linkname1862z00_2264;

									obj_t BgL_magic1863z00_2265;

									obj_t BgL_uname1864z00_2266;

									obj_t BgL_gname1865z00_2267;

									long BgL_devmajor1866z00_2268;

									long BgL_devminor1867z00_2269;

									BgL_name1854z00_2256 = BGl_string2723z00zz__tarz00;
									BgL_mode1855z00_2257 = ((long) 0);
									BgL_uid1856z00_2258 = ((long) 0);
									BgL_gid1857z00_2259 = ((long) 0);
									BgL_siza7e1858za7_2260 = BgL_arg2295z00_1286;
									BgL_mtime1859z00_2261 = BgL_arg2296z00_1287;
									BgL_checksum1860z00_2262 = ((long) 0);
									BgL_type1861z00_2263 = BgL_arg2300z00_1289;
									BgL_linkname1862z00_2264 = BGl_string2723z00zz__tarz00;
									BgL_magic1863z00_2265 = BGl_string2723z00zz__tarz00;
									BgL_uname1864z00_2266 = BGl_string2723z00zz__tarz00;
									BgL_gname1865z00_2267 = BGl_string2723z00zz__tarz00;
									BgL_devmajor1866z00_2268 = ((long) 0);
									BgL_devminor1867z00_2269 = ((long) 0);
									((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2241))->
											BgL_namez00) = ((obj_t) BgL_name1854z00_2256), BUNSPEC);
									((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2241))->
											BgL_modez00) = ((long) BgL_mode1855z00_2257), BUNSPEC);
									((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2241))->
											BgL_uidz00) = ((long) BgL_uid1856z00_2258), BUNSPEC);
									((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2241))->
											BgL_gidz00) = ((long) BgL_gid1857z00_2259), BUNSPEC);
									((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2241))->
											BgL_siza7eza7) =
										((long) BgL_siza7e1858za7_2260), BUNSPEC);
									((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2241))->
											BgL_mtimez00) = ((obj_t) BgL_mtime1859z00_2261), BUNSPEC);
									((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2241))->
											BgL_checksumz00) =
										((long) BgL_checksum1860z00_2262), BUNSPEC);
									((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2241))->
											BgL_typez00) = ((obj_t) BgL_type1861z00_2263), BUNSPEC);
									((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2241))->
											BgL_linknamez00) =
										((obj_t) BgL_linkname1862z00_2264), BUNSPEC);
									((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2241))->
											BgL_magicz00) = ((obj_t) BgL_magic1863z00_2265), BUNSPEC);
									((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2241))->
											BgL_unamez00) = ((obj_t) BgL_uname1864z00_2266), BUNSPEC);
									((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2241))->
											BgL_gnamez00) = ((obj_t) BgL_gname1865z00_2267), BUNSPEC);
									((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2241))->
											BgL_devmajorz00) =
										((long) BgL_devmajor1866z00_2268), BUNSPEC);
									((((BgL_tarzd2headerzd2_bglt) CREF(BgL_new1868z00_2241))->
											BgL_devminorz00) =
										((long) BgL_devminor1867z00_2269), BUNSPEC);
									BgL_res2597z00_2270 = BgL_new1868z00_2241;
							}}
							(obj_t) (BgL_res2597z00_2270);
				}}}
			else
				{	/* Unsafe/tar.scm 54 */
					BFALSE;
				}
			return
				(BgL_tarzd2headerzd2_bglt)
				(BGl_z52thezd2tarzd2headerzd2nilz80zz__tarz00);
		}
	}



/* _tar-header-nil */
	obj_t BGl__tarzd2headerzd2nilz00zz__tarz00(obj_t BgL_envz00_2595)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 54 */
			return (obj_t) (BGl_tarzd2headerzd2nilz00zz__tarz00());
		}
	}



/* _tar-header-name */
	obj_t BGl__tarzd2headerzd2namez00zz__tarz00(obj_t BgL_envz00_2567,
		obj_t BgL_obj1824z00_2568)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 55 */
			{	/* Unsafe/tar.scm 55 */
				BgL_tarzd2headerzd2_bglt BgL_obj1824z00_2778;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1824z00_2568,
						BGl_tarzd2headerzd2zz__tarz00))
					{	/* Unsafe/tar.scm 55 */
						BgL_obj1824z00_2778 =
							(BgL_tarzd2headerzd2_bglt) (BgL_obj1824z00_2568);
					}
				else
					{
						obj_t BgL_auxz00_3625;

						BgL_auxz00_3625 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
							BINT(((long) 1811)), BGl_string2788z00zz__tarz00,
							BGl_string2763z00zz__tarz00, BgL_obj1824z00_2568);
						FAILURE(BgL_auxz00_3625, BFALSE, BFALSE);
					}
				return
					(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1824z00_2778))->BgL_namez00);
			}
		}
	}



/* _tar-header-mode */
	obj_t BGl__tarzd2headerzd2modez00zz__tarz00(obj_t BgL_envz00_2569,
		obj_t BgL_obj1825z00_2570)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 56 */
			{	/* Unsafe/tar.scm 56 */
				long BgL_auxz00_3630;

				{	/* Unsafe/tar.scm 56 */
					BgL_tarzd2headerzd2_bglt BgL_obj1825z00_2780;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1825z00_2570,
							BGl_tarzd2headerzd2zz__tarz00))
						{	/* Unsafe/tar.scm 56 */
							BgL_obj1825z00_2780 =
								(BgL_tarzd2headerzd2_bglt) (BgL_obj1825z00_2570);
						}
					else
						{
							obj_t BgL_auxz00_3634;

							BgL_auxz00_3634 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
								BINT(((long) 1844)), BGl_string2789z00zz__tarz00,
								BGl_string2763z00zz__tarz00, BgL_obj1825z00_2570);
							FAILURE(BgL_auxz00_3634, BFALSE, BFALSE);
						}
					BgL_auxz00_3630 =
						(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1825z00_2780))->
						BgL_modez00);
				}
				return BINT(BgL_auxz00_3630);
			}
		}
	}



/* _tar-header-uid */
	obj_t BGl__tarzd2headerzd2uidz00zz__tarz00(obj_t BgL_envz00_2571,
		obj_t BgL_obj1826z00_2572)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 57 */
			{	/* Unsafe/tar.scm 57 */
				long BgL_auxz00_3640;

				{	/* Unsafe/tar.scm 57 */
					BgL_tarzd2headerzd2_bglt BgL_obj1826z00_2782;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1826z00_2572,
							BGl_tarzd2headerzd2zz__tarz00))
						{	/* Unsafe/tar.scm 57 */
							BgL_obj1826z00_2782 =
								(BgL_tarzd2headerzd2_bglt) (BgL_obj1826z00_2572);
						}
					else
						{
							obj_t BgL_auxz00_3644;

							BgL_auxz00_3644 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
								BINT(((long) 1874)), BGl_string2790z00zz__tarz00,
								BGl_string2763z00zz__tarz00, BgL_obj1826z00_2572);
							FAILURE(BgL_auxz00_3644, BFALSE, BFALSE);
						}
					BgL_auxz00_3640 =
						(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1826z00_2782))->
						BgL_uidz00);
				}
				return BINT(BgL_auxz00_3640);
			}
		}
	}



/* _tar-header-gid */
	obj_t BGl__tarzd2headerzd2gidz00zz__tarz00(obj_t BgL_envz00_2573,
		obj_t BgL_obj1827z00_2574)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 58 */
			{	/* Unsafe/tar.scm 58 */
				long BgL_auxz00_3650;

				{	/* Unsafe/tar.scm 58 */
					BgL_tarzd2headerzd2_bglt BgL_obj1827z00_2784;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1827z00_2574,
							BGl_tarzd2headerzd2zz__tarz00))
						{	/* Unsafe/tar.scm 58 */
							BgL_obj1827z00_2784 =
								(BgL_tarzd2headerzd2_bglt) (BgL_obj1827z00_2574);
						}
					else
						{
							obj_t BgL_auxz00_3654;

							BgL_auxz00_3654 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
								BINT(((long) 1903)), BGl_string2791z00zz__tarz00,
								BGl_string2763z00zz__tarz00, BgL_obj1827z00_2574);
							FAILURE(BgL_auxz00_3654, BFALSE, BFALSE);
						}
					BgL_auxz00_3650 =
						(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1827z00_2784))->
						BgL_gidz00);
				}
				return BINT(BgL_auxz00_3650);
			}
		}
	}



/* _tar-header-size */
	obj_t BGl__tarzd2headerzd2siza7eza7zz__tarz00(obj_t BgL_envz00_2575,
		obj_t BgL_obj1828z00_2576)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 59 */
			{	/* Unsafe/tar.scm 59 */
				long BgL_auxz00_3660;

				{	/* Unsafe/tar.scm 59 */
					BgL_tarzd2headerzd2_bglt BgL_obj1828z00_2786;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1828z00_2576,
							BGl_tarzd2headerzd2zz__tarz00))
						{	/* Unsafe/tar.scm 59 */
							BgL_obj1828z00_2786 =
								(BgL_tarzd2headerzd2_bglt) (BgL_obj1828z00_2576);
						}
					else
						{
							obj_t BgL_auxz00_3664;

							BgL_auxz00_3664 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
								BINT(((long) 1932)), BGl_string2792z00zz__tarz00,
								BGl_string2763z00zz__tarz00, BgL_obj1828z00_2576);
							FAILURE(BgL_auxz00_3664, BFALSE, BFALSE);
						}
					BgL_auxz00_3660 =
						(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1828z00_2786))->
						BgL_siza7eza7);
				}
				return make_belong(BgL_auxz00_3660);
			}
		}
	}



/* _tar-header-mtime */
	obj_t BGl__tarzd2headerzd2mtimez00zz__tarz00(obj_t BgL_envz00_2577,
		obj_t BgL_obj1829z00_2578)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 60 */
			{	/* Unsafe/tar.scm 60 */
				BgL_tarzd2headerzd2_bglt BgL_obj1829z00_2788;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1829z00_2578,
						BGl_tarzd2headerzd2zz__tarz00))
					{	/* Unsafe/tar.scm 60 */
						BgL_obj1829z00_2788 =
							(BgL_tarzd2headerzd2_bglt) (BgL_obj1829z00_2578);
					}
				else
					{
						obj_t BgL_auxz00_3673;

						BgL_auxz00_3673 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
							BINT(((long) 1963)), BGl_string2793z00zz__tarz00,
							BGl_string2763z00zz__tarz00, BgL_obj1829z00_2578);
						FAILURE(BgL_auxz00_3673, BFALSE, BFALSE);
					}
				return
					(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1829z00_2788))->
					BgL_mtimez00);
			}
		}
	}



/* _tar-header-checksum */
	obj_t BGl__tarzd2headerzd2checksumz00zz__tarz00(obj_t BgL_envz00_2579,
		obj_t BgL_obj1830z00_2580)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 61 */
			{	/* Unsafe/tar.scm 61 */
				long BgL_auxz00_3678;

				{	/* Unsafe/tar.scm 61 */
					BgL_tarzd2headerzd2_bglt BgL_obj1830z00_2790;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1830z00_2580,
							BGl_tarzd2headerzd2zz__tarz00))
						{	/* Unsafe/tar.scm 61 */
							BgL_obj1830z00_2790 =
								(BgL_tarzd2headerzd2_bglt) (BgL_obj1830z00_2580);
						}
					else
						{
							obj_t BgL_auxz00_3682;

							BgL_auxz00_3682 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
								BINT(((long) 1994)), BGl_string2794z00zz__tarz00,
								BGl_string2763z00zz__tarz00, BgL_obj1830z00_2580);
							FAILURE(BgL_auxz00_3682, BFALSE, BFALSE);
						}
					BgL_auxz00_3678 =
						(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1830z00_2790))->
						BgL_checksumz00);
				}
				return BINT(BgL_auxz00_3678);
			}
		}
	}



/* _tar-header-type */
	obj_t BGl__tarzd2headerzd2typez00zz__tarz00(obj_t BgL_envz00_2581,
		obj_t BgL_obj1831z00_2582)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 62 */
			{	/* Unsafe/tar.scm 62 */
				BgL_tarzd2headerzd2_bglt BgL_obj1831z00_2792;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1831z00_2582,
						BGl_tarzd2headerzd2zz__tarz00))
					{	/* Unsafe/tar.scm 62 */
						BgL_obj1831z00_2792 =
							(BgL_tarzd2headerzd2_bglt) (BgL_obj1831z00_2582);
					}
				else
					{
						obj_t BgL_auxz00_3691;

						BgL_auxz00_3691 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
							BINT(((long) 2028)), BGl_string2795z00zz__tarz00,
							BGl_string2763z00zz__tarz00, BgL_obj1831z00_2582);
						FAILURE(BgL_auxz00_3691, BFALSE, BFALSE);
					}
				return
					(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1831z00_2792))->BgL_typez00);
			}
		}
	}



/* _tar-header-linkname */
	obj_t BGl__tarzd2headerzd2linknamez00zz__tarz00(obj_t BgL_envz00_2583,
		obj_t BgL_obj1832z00_2584)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 63 */
			{	/* Unsafe/tar.scm 63 */
				BgL_tarzd2headerzd2_bglt BgL_obj1832z00_2794;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1832z00_2584,
						BGl_tarzd2headerzd2zz__tarz00))
					{	/* Unsafe/tar.scm 63 */
						BgL_obj1832z00_2794 =
							(BgL_tarzd2headerzd2_bglt) (BgL_obj1832z00_2584);
					}
				else
					{
						obj_t BgL_auxz00_3699;

						BgL_auxz00_3699 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
							BINT(((long) 2060)), BGl_string2796z00zz__tarz00,
							BGl_string2763z00zz__tarz00, BgL_obj1832z00_2584);
						FAILURE(BgL_auxz00_3699, BFALSE, BFALSE);
					}
				return
					(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1832z00_2794))->
					BgL_linknamez00);
			}
		}
	}



/* _tar-header-magic */
	obj_t BGl__tarzd2headerzd2magicz00zz__tarz00(obj_t BgL_envz00_2585,
		obj_t BgL_obj1833z00_2586)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 64 */
			{	/* Unsafe/tar.scm 64 */
				BgL_tarzd2headerzd2_bglt BgL_obj1833z00_2796;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1833z00_2586,
						BGl_tarzd2headerzd2zz__tarz00))
					{	/* Unsafe/tar.scm 64 */
						BgL_obj1833z00_2796 =
							(BgL_tarzd2headerzd2_bglt) (BgL_obj1833z00_2586);
					}
				else
					{
						obj_t BgL_auxz00_3707;

						BgL_auxz00_3707 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
							BINT(((long) 2097)), BGl_string2797z00zz__tarz00,
							BGl_string2763z00zz__tarz00, BgL_obj1833z00_2586);
						FAILURE(BgL_auxz00_3707, BFALSE, BFALSE);
					}
				return
					(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1833z00_2796))->
					BgL_magicz00);
			}
		}
	}



/* _tar-header-uname */
	obj_t BGl__tarzd2headerzd2unamez00zz__tarz00(obj_t BgL_envz00_2587,
		obj_t BgL_obj1834z00_2588)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 65 */
			{	/* Unsafe/tar.scm 65 */
				BgL_tarzd2headerzd2_bglt BgL_obj1834z00_2798;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1834z00_2588,
						BGl_tarzd2headerzd2zz__tarz00))
					{	/* Unsafe/tar.scm 65 */
						BgL_obj1834z00_2798 =
							(BgL_tarzd2headerzd2_bglt) (BgL_obj1834z00_2588);
					}
				else
					{
						obj_t BgL_auxz00_3715;

						BgL_auxz00_3715 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
							BINT(((long) 2131)), BGl_string2798z00zz__tarz00,
							BGl_string2763z00zz__tarz00, BgL_obj1834z00_2588);
						FAILURE(BgL_auxz00_3715, BFALSE, BFALSE);
					}
				return
					(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1834z00_2798))->
					BgL_unamez00);
			}
		}
	}



/* _tar-header-gname */
	obj_t BGl__tarzd2headerzd2gnamez00zz__tarz00(obj_t BgL_envz00_2589,
		obj_t BgL_obj1835z00_2590)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 66 */
			{	/* Unsafe/tar.scm 66 */
				BgL_tarzd2headerzd2_bglt BgL_obj1835z00_2800;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1835z00_2590,
						BGl_tarzd2headerzd2zz__tarz00))
					{	/* Unsafe/tar.scm 66 */
						BgL_obj1835z00_2800 =
							(BgL_tarzd2headerzd2_bglt) (BgL_obj1835z00_2590);
					}
				else
					{
						obj_t BgL_auxz00_3723;

						BgL_auxz00_3723 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
							BINT(((long) 2165)), BGl_string2799z00zz__tarz00,
							BGl_string2763z00zz__tarz00, BgL_obj1835z00_2590);
						FAILURE(BgL_auxz00_3723, BFALSE, BFALSE);
					}
				return
					(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1835z00_2800))->
					BgL_gnamez00);
			}
		}
	}



/* _tar-header-devmajor */
	obj_t BGl__tarzd2headerzd2devmajorz00zz__tarz00(obj_t BgL_envz00_2591,
		obj_t BgL_obj1836z00_2592)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 67 */
			{	/* Unsafe/tar.scm 67 */
				long BgL_auxz00_3728;

				{	/* Unsafe/tar.scm 67 */
					BgL_tarzd2headerzd2_bglt BgL_obj1836z00_2802;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1836z00_2592,
							BGl_tarzd2headerzd2zz__tarz00))
						{	/* Unsafe/tar.scm 67 */
							BgL_obj1836z00_2802 =
								(BgL_tarzd2headerzd2_bglt) (BgL_obj1836z00_2592);
						}
					else
						{
							obj_t BgL_auxz00_3732;

							BgL_auxz00_3732 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
								BINT(((long) 2199)), BGl_string2800z00zz__tarz00,
								BGl_string2763z00zz__tarz00, BgL_obj1836z00_2592);
							FAILURE(BgL_auxz00_3732, BFALSE, BFALSE);
						}
					BgL_auxz00_3728 =
						(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1836z00_2802))->
						BgL_devmajorz00);
				}
				return BINT(BgL_auxz00_3728);
			}
		}
	}



/* _tar-header-devminor */
	obj_t BGl__tarzd2headerzd2devminorz00zz__tarz00(obj_t BgL_envz00_2593,
		obj_t BgL_obj1837z00_2594)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 68 */
			{	/* Unsafe/tar.scm 68 */
				long BgL_auxz00_3738;

				{	/* Unsafe/tar.scm 68 */
					BgL_tarzd2headerzd2_bglt BgL_obj1837z00_2804;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_obj1837z00_2594,
							BGl_tarzd2headerzd2zz__tarz00))
						{	/* Unsafe/tar.scm 68 */
							BgL_obj1837z00_2804 =
								(BgL_tarzd2headerzd2_bglt) (BgL_obj1837z00_2594);
						}
					else
						{
							obj_t BgL_auxz00_3742;

							BgL_auxz00_3742 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2768z00zz__tarz00,
								BINT(((long) 2233)), BGl_string2801z00zz__tarz00,
								BGl_string2763z00zz__tarz00, BgL_obj1837z00_2594);
							FAILURE(BgL_auxz00_3742, BFALSE, BFALSE);
						}
					BgL_auxz00_3738 =
						(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1837z00_2804))->
						BgL_devminorz00);
				}
				return BINT(BgL_auxz00_3738);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__tarz00()
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 17 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__tarz00()
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 17 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_tarzd2headerzd2zz__tarz00, BGl_proc2802z00zz__tarz00,
				BGl_string2803z00zz__tarz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_tarzd2headerzd2zz__tarz00, BGl_proc2804z00zz__tarz00,
				BGl_string2805z00zz__tarz00);
		}
	}



/* struct+object->objec2019 */
	obj_t BGl_structzb2objectzd2ze3objec2019z83zz__tarz00(obj_t BgL_envz00_2616,
		obj_t BgL_oz00_2617, obj_t BgL_sz00_2618)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 54 */
			{
				BgL_tarzd2headerzd2_bglt BgL_oz00_1499;

				obj_t BgL_sz00_1500;

				{	/* Unsafe/tar.scm 54 */
					BgL_tarzd2headerzd2_bglt BgL_auxz00_3750;

					BgL_oz00_1499 = (BgL_tarzd2headerzd2_bglt) (BgL_oz00_2617);
					BgL_sz00_1500 = BgL_sz00_2618;
					{	/* Unsafe/tar.scm 54 */
						obj_t BgL_arg2361z00_1503;

						BgL_arg2361z00_1503 = STRUCT_REF(BgL_sz00_1500, (int) (((long) 0)));
						{	/* Unsafe/tar.scm 54 */
							BgL_objectz00_bglt BgL_auxz00_3753;

							BgL_auxz00_3753 = (BgL_objectz00_bglt) (BgL_oz00_1499);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3753, BgL_arg2361z00_1503);
					}}
					{
						obj_t BgL_auxz00_3756;

						BgL_auxz00_3756 = STRUCT_REF(BgL_sz00_1500, (int) (((long) 1)));
						((((BgL_tarzd2headerzd2_bglt) CREF(BgL_oz00_1499))->BgL_namez00) =
							((obj_t) BgL_auxz00_3756), BUNSPEC);
					}
					{
						long BgL_auxz00_3760;

						BgL_auxz00_3760 =
							(long) CINT(STRUCT_REF(BgL_sz00_1500, (int) (((long) 2))));
						((((BgL_tarzd2headerzd2_bglt) CREF(BgL_oz00_1499))->BgL_modez00) =
							((long) BgL_auxz00_3760), BUNSPEC);
					}
					{
						long BgL_auxz00_3765;

						BgL_auxz00_3765 =
							(long) CINT(STRUCT_REF(BgL_sz00_1500, (int) (((long) 3))));
						((((BgL_tarzd2headerzd2_bglt) CREF(BgL_oz00_1499))->BgL_uidz00) =
							((long) BgL_auxz00_3765), BUNSPEC);
					}
					{
						long BgL_auxz00_3770;

						BgL_auxz00_3770 =
							(long) CINT(STRUCT_REF(BgL_sz00_1500, (int) (((long) 4))));
						((((BgL_tarzd2headerzd2_bglt) CREF(BgL_oz00_1499))->BgL_gidz00) =
							((long) BgL_auxz00_3770), BUNSPEC);
					}
					{	/* Unsafe/tar.scm 54 */
						long BgL_v1905z00_1508;

						{	/* Unsafe/tar.scm 54 */
							obj_t BgL_auxz00_3775;

							BgL_auxz00_3775 = STRUCT_REF(BgL_sz00_1500, (int) (((long) 5)));
							BgL_v1905z00_1508 = BELONG_TO_LONG(BgL_auxz00_3775);
						}
						((((BgL_tarzd2headerzd2_bglt) CREF(BgL_oz00_1499))->BgL_siza7eza7) =
							((long) BgL_v1905z00_1508), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3780;

						BgL_auxz00_3780 = STRUCT_REF(BgL_sz00_1500, (int) (((long) 6)));
						((((BgL_tarzd2headerzd2_bglt) CREF(BgL_oz00_1499))->BgL_mtimez00) =
							((obj_t) BgL_auxz00_3780), BUNSPEC);
					}
					{
						long BgL_auxz00_3784;

						BgL_auxz00_3784 =
							(long) CINT(STRUCT_REF(BgL_sz00_1500, (int) (((long) 7))));
						((((BgL_tarzd2headerzd2_bglt) CREF(BgL_oz00_1499))->
								BgL_checksumz00) = ((long) BgL_auxz00_3784), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3789;

						BgL_auxz00_3789 = STRUCT_REF(BgL_sz00_1500, (int) (((long) 8)));
						((((BgL_tarzd2headerzd2_bglt) CREF(BgL_oz00_1499))->BgL_typez00) =
							((obj_t) BgL_auxz00_3789), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3793;

						BgL_auxz00_3793 = STRUCT_REF(BgL_sz00_1500, (int) (((long) 9)));
						((((BgL_tarzd2headerzd2_bglt) CREF(BgL_oz00_1499))->
								BgL_linknamez00) = ((obj_t) BgL_auxz00_3793), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3797;

						BgL_auxz00_3797 = STRUCT_REF(BgL_sz00_1500, (int) (((long) 10)));
						((((BgL_tarzd2headerzd2_bglt) CREF(BgL_oz00_1499))->BgL_magicz00) =
							((obj_t) BgL_auxz00_3797), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3801;

						BgL_auxz00_3801 = STRUCT_REF(BgL_sz00_1500, (int) (((long) 11)));
						((((BgL_tarzd2headerzd2_bglt) CREF(BgL_oz00_1499))->BgL_unamez00) =
							((obj_t) BgL_auxz00_3801), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3805;

						BgL_auxz00_3805 = STRUCT_REF(BgL_sz00_1500, (int) (((long) 12)));
						((((BgL_tarzd2headerzd2_bglt) CREF(BgL_oz00_1499))->BgL_gnamez00) =
							((obj_t) BgL_auxz00_3805), BUNSPEC);
					}
					{
						long BgL_auxz00_3809;

						BgL_auxz00_3809 =
							(long) CINT(STRUCT_REF(BgL_sz00_1500, (int) (((long) 13))));
						((((BgL_tarzd2headerzd2_bglt) CREF(BgL_oz00_1499))->
								BgL_devmajorz00) = ((long) BgL_auxz00_3809), BUNSPEC);
					}
					{
						long BgL_auxz00_3814;

						BgL_auxz00_3814 =
							(long) CINT(STRUCT_REF(BgL_sz00_1500, (int) (((long) 14))));
						((((BgL_tarzd2headerzd2_bglt) CREF(BgL_oz00_1499))->
								BgL_devminorz00) = ((long) BgL_auxz00_3814), BUNSPEC);
					}
					BgL_auxz00_3750 = BgL_oz00_1499;
					return (obj_t) (BgL_auxz00_3750);
				}
			}
		}
	}



/* object->struct-tar-h2017 */
	obj_t BGl_objectzd2ze3structzd2tarzd2h2017z31zz__tarz00(obj_t BgL_envz00_2619,
		obj_t BgL_obj1885z00_2620)
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 54 */
			{
				BgL_tarzd2headerzd2_bglt BgL_obj1885z00_1465;

				BgL_obj1885z00_1465 = (BgL_tarzd2headerzd2_bglt) (BgL_obj1885z00_2620);
				{	/* Unsafe/tar.scm 54 */
					obj_t BgL_res1886z00_1468;

					BgL_res1886z00_1468 =
						make_struct(BGl_symbol2775z00zz__tarz00,
						(int) (((long) 15)), BUNSPEC);
					{	/* Unsafe/tar.scm 54 */
						int BgL_auxz00_3823;

						BgL_auxz00_3823 = (int) (((long) 0));
						STRUCT_SET(BgL_res1886z00_1468, BgL_auxz00_3823, BFALSE);
					}
					{	/* Unsafe/tar.scm 54 */
						obj_t BgL_arg2333z00_1470;

						BgL_arg2333z00_1470 =
							(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1885z00_1465))->
							BgL_namez00);
						{	/* Unsafe/tar.scm 54 */
							int BgL_auxz00_3827;

							BgL_auxz00_3827 = (int) (((long) 1));
							STRUCT_SET(BgL_res1886z00_1468, BgL_auxz00_3827,
								BgL_arg2333z00_1470);
					}}
					{	/* Unsafe/tar.scm 54 */
						long BgL_arg2335z00_1472;

						BgL_arg2335z00_1472 =
							(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1885z00_1465))->
							BgL_modez00);
						{	/* Unsafe/tar.scm 54 */
							obj_t BgL_auxz00_3833;

							int BgL_auxz00_3831;

							BgL_auxz00_3833 = BINT(BgL_arg2335z00_1472);
							BgL_auxz00_3831 = (int) (((long) 2));
							STRUCT_SET(BgL_res1886z00_1468, BgL_auxz00_3831, BgL_auxz00_3833);
					}}
					{	/* Unsafe/tar.scm 54 */
						long BgL_arg2337z00_1474;

						BgL_arg2337z00_1474 =
							(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1885z00_1465))->
							BgL_uidz00);
						{	/* Unsafe/tar.scm 54 */
							obj_t BgL_auxz00_3839;

							int BgL_auxz00_3837;

							BgL_auxz00_3839 = BINT(BgL_arg2337z00_1474);
							BgL_auxz00_3837 = (int) (((long) 3));
							STRUCT_SET(BgL_res1886z00_1468, BgL_auxz00_3837, BgL_auxz00_3839);
					}}
					{	/* Unsafe/tar.scm 54 */
						long BgL_arg2339z00_1476;

						BgL_arg2339z00_1476 =
							(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1885z00_1465))->
							BgL_gidz00);
						{	/* Unsafe/tar.scm 54 */
							obj_t BgL_auxz00_3845;

							int BgL_auxz00_3843;

							BgL_auxz00_3845 = BINT(BgL_arg2339z00_1476);
							BgL_auxz00_3843 = (int) (((long) 4));
							STRUCT_SET(BgL_res1886z00_1468, BgL_auxz00_3843, BgL_auxz00_3845);
					}}
					{	/* Unsafe/tar.scm 54 */
						long BgL_arg2341z00_1478;

						BgL_arg2341z00_1478 =
							(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1885z00_1465))->
							BgL_siza7eza7);
						{	/* Unsafe/tar.scm 54 */
							int BgL_kz00_2295;

							obj_t BgL_oz00_2296;

							BgL_kz00_2295 = (int) (((long) 5));
							BgL_oz00_2296 = make_belong(BgL_arg2341z00_1478);
							STRUCT_SET(BgL_res1886z00_1468, BgL_kz00_2295, BgL_oz00_2296);
					}}
					{	/* Unsafe/tar.scm 54 */
						obj_t BgL_arg2343z00_1480;

						BgL_arg2343z00_1480 =
							(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1885z00_1465))->
							BgL_mtimez00);
						{	/* Unsafe/tar.scm 54 */
							int BgL_auxz00_3853;

							BgL_auxz00_3853 = (int) (((long) 6));
							STRUCT_SET(BgL_res1886z00_1468, BgL_auxz00_3853,
								BgL_arg2343z00_1480);
					}}
					{	/* Unsafe/tar.scm 54 */
						long BgL_arg2345z00_1482;

						BgL_arg2345z00_1482 =
							(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1885z00_1465))->
							BgL_checksumz00);
						{	/* Unsafe/tar.scm 54 */
							obj_t BgL_auxz00_3859;

							int BgL_auxz00_3857;

							BgL_auxz00_3859 = BINT(BgL_arg2345z00_1482);
							BgL_auxz00_3857 = (int) (((long) 7));
							STRUCT_SET(BgL_res1886z00_1468, BgL_auxz00_3857, BgL_auxz00_3859);
					}}
					{	/* Unsafe/tar.scm 54 */
						obj_t BgL_arg2347z00_1484;

						BgL_arg2347z00_1484 =
							(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1885z00_1465))->
							BgL_typez00);
						{	/* Unsafe/tar.scm 54 */
							int BgL_auxz00_3863;

							BgL_auxz00_3863 = (int) (((long) 8));
							STRUCT_SET(BgL_res1886z00_1468, BgL_auxz00_3863,
								BgL_arg2347z00_1484);
					}}
					{	/* Unsafe/tar.scm 54 */
						obj_t BgL_arg2349z00_1486;

						BgL_arg2349z00_1486 =
							(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1885z00_1465))->
							BgL_linknamez00);
						{	/* Unsafe/tar.scm 54 */
							int BgL_auxz00_3867;

							BgL_auxz00_3867 = (int) (((long) 9));
							STRUCT_SET(BgL_res1886z00_1468, BgL_auxz00_3867,
								BgL_arg2349z00_1486);
					}}
					{	/* Unsafe/tar.scm 54 */
						obj_t BgL_arg2351z00_1488;

						BgL_arg2351z00_1488 =
							(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1885z00_1465))->
							BgL_magicz00);
						{	/* Unsafe/tar.scm 54 */
							int BgL_auxz00_3871;

							BgL_auxz00_3871 = (int) (((long) 10));
							STRUCT_SET(BgL_res1886z00_1468, BgL_auxz00_3871,
								BgL_arg2351z00_1488);
					}}
					{	/* Unsafe/tar.scm 54 */
						obj_t BgL_arg2353z00_1490;

						BgL_arg2353z00_1490 =
							(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1885z00_1465))->
							BgL_unamez00);
						{	/* Unsafe/tar.scm 54 */
							int BgL_auxz00_3875;

							BgL_auxz00_3875 = (int) (((long) 11));
							STRUCT_SET(BgL_res1886z00_1468, BgL_auxz00_3875,
								BgL_arg2353z00_1490);
					}}
					{	/* Unsafe/tar.scm 54 */
						obj_t BgL_arg2355z00_1492;

						BgL_arg2355z00_1492 =
							(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1885z00_1465))->
							BgL_gnamez00);
						{	/* Unsafe/tar.scm 54 */
							int BgL_auxz00_3879;

							BgL_auxz00_3879 = (int) (((long) 12));
							STRUCT_SET(BgL_res1886z00_1468, BgL_auxz00_3879,
								BgL_arg2355z00_1492);
					}}
					{	/* Unsafe/tar.scm 54 */
						long BgL_arg2357z00_1494;

						BgL_arg2357z00_1494 =
							(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1885z00_1465))->
							BgL_devmajorz00);
						{	/* Unsafe/tar.scm 54 */
							obj_t BgL_auxz00_3885;

							int BgL_auxz00_3883;

							BgL_auxz00_3885 = BINT(BgL_arg2357z00_1494);
							BgL_auxz00_3883 = (int) (((long) 13));
							STRUCT_SET(BgL_res1886z00_1468, BgL_auxz00_3883, BgL_auxz00_3885);
					}}
					{	/* Unsafe/tar.scm 54 */
						long BgL_arg2359z00_1496;

						BgL_arg2359z00_1496 =
							(((BgL_tarzd2headerzd2_bglt) CREF(BgL_obj1885z00_1465))->
							BgL_devminorz00);
						{	/* Unsafe/tar.scm 54 */
							obj_t BgL_auxz00_3891;

							int BgL_auxz00_3889;

							BgL_auxz00_3891 = BINT(BgL_arg2359z00_1496);
							BgL_auxz00_3889 = (int) (((long) 14));
							STRUCT_SET(BgL_res1886z00_1468, BgL_auxz00_3889, BgL_auxz00_3891);
					}}
					return BgL_res1886z00_1468;
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__tarz00()
	{
		AN_OBJECT;
		{	/* Unsafe/tar.scm 17 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2806z00zz__tarz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string2806z00zz__tarz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289), BSTRING_TO_STRING(BGl_string2806z00zz__tarz00));
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long)
					183289170), BSTRING_TO_STRING(BGl_string2806z00zz__tarz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2806z00zz__tarz00));
			return BGl_modulezd2initializa7ationz75zz__rgcz00(((long) 284603935),
				BSTRING_TO_STRING(BGl_string2806z00zz__tarz00));
		}
	}

#ifdef __cplusplus
}
#endif
