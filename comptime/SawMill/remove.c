/*===========================================================================*/
/*   (SawMill/remove.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/remove.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_typez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		obj_t BgL_siza7eza7;
		obj_t BgL_classz00;
		obj_t BgL_coercezd2tozd2;
		obj_t BgL_parentsz00;
		bool_t BgL_initzf3zf3;
		bool_t BgL_magiczf3zf3;
		obj_t BgL_z42z42;
		obj_t BgL_aliasz00;
		obj_t BgL_pointedzd2tozd2byz00;
		obj_t BgL_tvectorz00;
		obj_t BgL_locationz00;
		obj_t BgL_importzd2locationzd2;
		int BgL_occurrencez00;
	}              *BgL_typez00_bglt;

	typedef struct BgL_rtl_regz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_varz00;
		obj_t BgL_onexprzf3zf3;
		obj_t BgL_namez00;
		obj_t BgL_keyz00;
		obj_t BgL_hardwarez00;
	}                 *BgL_rtl_regz00_bglt;

	typedef struct BgL_rtl_funz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_funz00_bglt;

	typedef struct BgL_rtl_nopz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_nopz00_bglt;

	typedef struct BgL_rtl_insz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_z52spillz52;
		obj_t BgL_destz00;
		struct BgL_rtl_funz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
	}                 *BgL_rtl_insz00_bglt;

	typedef struct BgL_blockz00_bgl
	{
		header_t header;
		obj_t widening;
		int BgL_labelz00;
		obj_t BgL_predsz00;
		obj_t BgL_succsz00;
		obj_t BgL_firstz00;
	}               *BgL_blockz00_bglt;

	typedef struct BgL_defcollectz00_bgl
	{
		char dummy;
	}                    *BgL_defcollectz00_bglt;

	typedef struct BgL_rcollectz00_bgl
	{
		char dummy;
	}                  *BgL_rcollectz00_bglt;

	typedef struct BgL_ucollectz00_bgl
	{
		char dummy;
	}                  *BgL_ucollectz00_bglt;

	typedef struct BgL_removedz00_bgl
	{
		char dummy;
	}                 *BgL_removedz00_bglt;

	typedef struct BgL_visitedz00_bgl
	{
		char dummy;
	}                 *BgL_visitedz00_bglt;

	typedef struct BgL_bremovedz00_bgl
	{
		char dummy;
	}                  *BgL_bremovedz00_bglt;

	typedef struct BgL_cregz00_bgl
	{
		obj_t BgL_defsz00;
		obj_t BgL_nbusesz00;
	}              *BgL_cregz00_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_defcollectz00zzsaw_removez00 = BUNSPEC;
	static obj_t BGl__removez00zzsaw_removez00(obj_t, obj_t);
	static bool_t BGl_ucollectz72z72zzsaw_removez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2bremo4278ze3zzsaw_removez00(obj_t,
		obj_t);
	extern obj_t BGl_substzd2appendzd2zzsaw_libz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	static obj_t BGl__defcollectzd2nilzd2zzsaw_removez00(obj_t);
	static BgL_cregz00_bglt BGl_cregzd2nilzd2zzsaw_removez00();
	static bool_t BGl_fixzd2removezd2zzsaw_removez00(obj_t, obj_t);
	static obj_t BGl_z52thezd2defcollectzd2nilz52zzsaw_removez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	extern BgL_rtl_insz00_bglt BGl_makezd2rtl_inszd2zzsaw_defsz00(obj_t, obj_t,
		obj_t, BgL_rtl_funz00_bglt, obj_t);
	static obj_t BGl_removedz00zzsaw_removez00 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zzsaw_removez00();
	static obj_t BGl_objectzd2ze3structzd2creg4274ze3zzsaw_removez00(obj_t,
		obj_t);
	static obj_t BGl__bremovedzd2nilzd2zzsaw_removez00(obj_t);
	static obj_t BGl__bremovedzf3zf3zzsaw_removez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static bool_t BGl_makezd2defzd2usez00zzsaw_removez00(BgL_blockz00_bglt);
	static obj_t BGl__removedzf3zf3zzsaw_removez00(obj_t, obj_t);
	static obj_t BGl__cregzd2nilzd2zzsaw_removez00(obj_t);
	static BgL_defcollectz00_bglt BGl_wideningzd2defcollectzd2zzsaw_removez00();
	BGL_EXPORTED_DECL BgL_blockz00_bglt
		BGl_removez00zzsaw_removez00(BgL_blockz00_bglt);
	extern obj_t BGl_rtl_insz00zzsaw_defsz00;
	static obj_t BGl_cregz00zzsaw_removez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzsaw_removez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_libz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static bool_t BGl_defcollectz72z72zzsaw_removez00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2ucoll4292ze3zzsaw_removez00(obj_t,
		obj_t);
	extern obj_t BGl_blockz00zzsaw_defsz00;
	static BgL_visitedz00_bglt BGl_wideningzd2visitedzd2zzsaw_removez00();
	static obj_t BGl__rcollectzd2nilzd2zzsaw_removez00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4276z83zzsaw_removez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_regzd2ze3cregz31zzsaw_removez00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4280z83zzsaw_removez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4284z83zzsaw_removez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4289z83zzsaw_removez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4302z83zzsaw_removez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4294z83zzsaw_removez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4298z83zzsaw_removez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__cregzf3zf3zzsaw_removez00(obj_t, obj_t);
	extern BgL_rtl_nopz00_bglt BGl_makezd2rtl_nopzd2zzsaw_defsz00(obj_t);
	static obj_t BGl__ucollectzf3zf3zzsaw_removez00(obj_t, obj_t);
	static obj_t BGl__ucollectzd2nilzd2zzsaw_removez00(obj_t);
	static bool_t BGl_rcollectz72z72zzsaw_removez00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2removedz80zzsaw_removez00(obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static BgL_rcollectz00_bglt BGl_wideningzd2rcollectzd2zzsaw_removez00();
	static obj_t BGl_getzd2firstzd2unusedz00zzsaw_removez00(BgL_blockz00_bglt);
	static obj_t BGl_objectzd2ze3structzd2defco4300ze3zzsaw_removez00(obj_t,
		obj_t);
	static BgL_bremovedz00_bglt BGl_wideningzd2bremovedzd2zzsaw_removez00();
	static obj_t BGl_visitedz00zzsaw_removez00 = BUNSPEC;
	static obj_t BGl__defcollectzf3zf3zzsaw_removez00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2cregz80zzsaw_removez00(obj_t);
	static bool_t BGl_dfsz00zzsaw_removez00(obj_t);
	BGL_IMPORT obj_t BGl_filterz12z12zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_removez00();
	extern obj_t BGl_substz00zzsaw_libz00(obj_t, obj_t, obj_t);
	static bool_t BGl_removablezf3zf3zzsaw_removez00(BgL_rtl_insz00_bglt);
	static obj_t BGl__z52allocatezd2rcollectz80zzsaw_removez00(obj_t);
	static BgL_removedz00_bglt BGl_removedzd2nilzd2zzsaw_removez00();
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2rcoll4296ze3zzsaw_removez00(obj_t,
		obj_t);
	extern obj_t BGl_rtl_regz00zzsaw_defsz00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_removez00 = BUNSPEC;
	extern BgL_rtl_funz00_bglt BGl_rtl_funzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_genericzd2initzd2zzsaw_removez00();
	static obj_t BGl__z52allocatezd2bremovedz80zzsaw_removez00(obj_t);
	static obj_t BGl_z52thezd2bremovedzd2nilz52zzsaw_removez00 = BUNSPEC;
	static obj_t BGl_rcollectz00zzsaw_removez00 = BUNSPEC;
	static obj_t BGl__rcollectzf3zf3zzsaw_removez00(obj_t, obj_t);
	static obj_t BGl_z52thezd2removedzd2nilz52zzsaw_removez00 = BUNSPEC;
	static BgL_ucollectz00_bglt BGl_wideningzd2ucollectzd2zzsaw_removez00();
	static obj_t BGl__z52allocatezd2visitedz80zzsaw_removez00(obj_t);
	static obj_t BGl_bremovedz00zzsaw_removez00 = BUNSPEC;
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	static obj_t BGl_zc3anonymousza34310ze3z83zzsaw_removez00(obj_t, obj_t);
	static BgL_defcollectz00_bglt BGl_defcollectzd2nilzd2zzsaw_removez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_removez00();
	static obj_t BGl__removedzd2nilzd2zzsaw_removez00(obj_t);
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl_z52thezd2rcollectzd2nilz52zzsaw_removez00 = BUNSPEC;
	static BgL_bremovedz00_bglt BGl_bremovedzd2nilzd2zzsaw_removez00();
	static obj_t BGl_z52thezd2ucollectzd2nilz52zzsaw_removez00 = BUNSPEC;
	static obj_t BGl_blockzd2removezd2zzsaw_removez00(BgL_blockz00_bglt);
	static obj_t BGl_getzd2firstzd2removablez00zzsaw_removez00(BgL_blockz00_bglt);
	static BgL_visitedz00_bglt BGl_visitedzd2nilzd2zzsaw_removez00();
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl__z52allocatezd2ucollectz80zzsaw_removez00(obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_rcollectz00_bglt BGl_rcollectzd2nilzd2zzsaw_removez00();
	static obj_t BGl_objectzd2ze3structzd2visit4282ze3zzsaw_removez00(obj_t,
		obj_t);
	static BgL_ucollectz00_bglt BGl_ucollectzd2nilzd2zzsaw_removez00();
	static obj_t BGl_ucollectz00zzsaw_removez00 = BUNSPEC;
	static obj_t BGl_z52thezd2visitedzd2nilz52zzsaw_removez00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2defcollectz80zzsaw_removez00(obj_t);
	extern obj_t BGl_rtl_purez00zzsaw_defsz00;
	static obj_t BGl_objectzd2initzd2zzsaw_removez00();
	static obj_t BGl_z52thezd2cregzd2nilz52zzsaw_removez00 = BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2remov4286ze3zzsaw_removez00(obj_t,
		obj_t);
	static obj_t BGl__visitedzd2nilzd2zzsaw_removez00(obj_t);
	static obj_t BGl__visitedzf3zf3zzsaw_removez00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_removez00();
	static BgL_removedz00_bglt BGl_wideningzd2removedzd2zzsaw_removez00();
	static obj_t __cnst[8];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_rcollectzd2nilzd2envz00zzsaw_removez00,
		BgL_bgl__rcollectza7d2nilza74719z00, BGl__rcollectzd2nilzd2zzsaw_removez00,
		0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2bremovedzd2envz52zzsaw_removez00,
		BgL_bgl__za752allocateza7d2b4720z00,
		BGl__z52allocatezd2bremovedz80zzsaw_removez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_rcollectzf3zd2envz21zzsaw_removez00,
		BgL_bgl__rcollectza7f3za7f3za74721za7, BGl__rcollectzf3zf3zzsaw_removez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_visitedzd2nilzd2envz00zzsaw_removez00,
		BgL_bgl__visitedza7d2nilza7d4722z00, BGl__visitedzd2nilzd2zzsaw_removez00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_cregzf3zd2envz21zzsaw_removez00,
		BgL_bgl__cregza7f3za7f3za7za7saw4723z00, BGl__cregzf3zf3zzsaw_removez00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2defcollectzd2envz52zzsaw_removez00,
		BgL_bgl__za752allocateza7d2d4724z00,
		BGl__z52allocatezd2defcollectz80zzsaw_removez00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2rcollectzd2envz52zzsaw_removez00,
		BgL_bgl__za752allocateza7d2r4725z00,
		BGl__z52allocatezd2rcollectz80zzsaw_removez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_removedzf3zd2envz21zzsaw_removez00,
		BgL_bgl__removedza7f3za7f3za7za74726z00, BGl__removedzf3zf3zzsaw_removez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2ucollectzd2envz52zzsaw_removez00,
		BgL_bgl__za752allocateza7d2u4727z00,
		BGl__z52allocatezd2ucollectz80zzsaw_removez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_removezd2envzd2zzsaw_removez00,
		BgL_bgl__removeza700za7za7saw_4728za7, BGl__removez00zzsaw_removez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4700z00zzsaw_removez00,
		BgL_bgl_objectza7d2za7e3stru4729z00,
		BGl_objectzd2ze3structzd2remov4286ze3zzsaw_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4690z00zzsaw_removez00,
		BgL_bgl_za7c3anonymousza7a344730z00,
		BGl_zc3anonymousza34310ze3z83zzsaw_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4701z00zzsaw_removez00,
		BgL_bgl_structza7b2objectza74731z00,
		BGl_structzb2objectzd2ze3objec4289z83zzsaw_removez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4702z00zzsaw_removez00,
		BgL_bgl_objectza7d2za7e3stru4732z00,
		BGl_objectzd2ze3structzd2ucoll4292ze3zzsaw_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4692z00zzsaw_removez00,
		BgL_bgl_objectza7d2za7e3stru4733z00,
		BGl_objectzd2ze3structzd2creg4274ze3zzsaw_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4703z00zzsaw_removez00,
		BgL_bgl_structza7b2objectza74734z00,
		BGl_structzb2objectzd2ze3objec4294z83zzsaw_removez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4704z00zzsaw_removez00,
		BgL_bgl_objectza7d2za7e3stru4735z00,
		BGl_objectzd2ze3structzd2rcoll4296ze3zzsaw_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4694z00zzsaw_removez00,
		BgL_bgl_structza7b2objectza74736z00,
		BGl_structzb2objectzd2ze3objec4276z83zzsaw_removez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4705z00zzsaw_removez00,
		BgL_bgl_structza7b2objectza74737z00,
		BGl_structzb2objectzd2ze3objec4298z83zzsaw_removez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4706z00zzsaw_removez00,
		BgL_bgl_objectza7d2za7e3stru4738z00,
		BGl_objectzd2ze3structzd2defco4300ze3zzsaw_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4696z00zzsaw_removez00,
		BgL_bgl_objectza7d2za7e3stru4739z00,
		BGl_objectzd2ze3structzd2bremo4278ze3zzsaw_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4707z00zzsaw_removez00,
		BgL_bgl_structza7b2objectza74740z00,
		BGl_structzb2objectzd2ze3objec4302z83zzsaw_removez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4697z00zzsaw_removez00,
		BgL_bgl_structza7b2objectza74741z00,
		BGl_structzb2objectzd2ze3objec4280z83zzsaw_removez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4698z00zzsaw_removez00,
		BgL_bgl_objectza7d2za7e3stru4742z00,
		BGl_objectzd2ze3structzd2visit4282ze3zzsaw_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4699z00zzsaw_removez00,
		BgL_bgl_structza7b2objectza74743z00,
		BGl_structzb2objectzd2ze3objec4284z83zzsaw_removez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_ucollectzd2nilzd2envz00zzsaw_removez00,
		BgL_bgl__ucollectza7d2nilza74744z00, BGl__ucollectzd2nilzd2zzsaw_removez00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_cregzd2nilzd2envz00zzsaw_removez00,
		BgL_bgl__cregza7d2nilza7d2za7za74745z00, BGl__cregzd2nilzd2zzsaw_removez00,
		0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string4691z00zzsaw_removez00,
		BgL_bgl_string4691za700za7za7s4746za7, "must have only one successor", 28);
	      DEFINE_STRING(BGl_string4693z00zzsaw_removez00,
		BgL_bgl_string4693za700za7za7s4747za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string4695z00zzsaw_removez00,
		BgL_bgl_string4695za700za7za7s4748za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string4708z00zzsaw_removez00,
		BgL_bgl_string4708za700za7za7s4749za7, "saw_remove", 10);
	      DEFINE_STRING(BGl_string4709z00zzsaw_removez00,
		BgL_bgl_string4709za700za7za7s4750za7,
		"creg bremoved visited removed ucollect rcollect defcollect unlink! ", 67);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_ucollectzf3zd2envz21zzsaw_removez00,
		BgL_bgl__ucollectza7f3za7f3za74751za7, BGl__ucollectzf3zf3zzsaw_removez00,
		0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_defcollectzf3zd2envz21zzsaw_removez00,
		BgL_bgl__defcollectza7f3za7f4752z00, BGl__defcollectzf3zf3zzsaw_removez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2removedzd2envz52zzsaw_removez00,
		BgL_bgl__za752allocateza7d2r4753z00,
		BGl__z52allocatezd2removedz80zzsaw_removez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_visitedzf3zd2envz21zzsaw_removez00,
		BgL_bgl__visitedza7f3za7f3za7za74754z00, BGl__visitedzf3zf3zzsaw_removez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_bremovedzd2nilzd2envz00zzsaw_removez00,
		BgL_bgl__bremovedza7d2nilza74755z00, BGl__bremovedzd2nilzd2zzsaw_removez00,
		0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_z52allocatezd2cregzd2envz52zzsaw_removez00,
		BgL_bgl__za752allocateza7d2c4756z00,
		BGl__z52allocatezd2cregz80zzsaw_removez00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_defcollectzd2nilzd2envz00zzsaw_removez00,
		BgL_bgl__defcollectza7d2ni4757za7, BGl__defcollectzd2nilzd2zzsaw_removez00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_removedzd2nilzd2envz00zzsaw_removez00,
		BgL_bgl__removedza7d2nilza7d4758z00, BGl__removedzd2nilzd2zzsaw_removez00,
		0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2visitedzd2envz52zzsaw_removez00,
		BgL_bgl__za752allocateza7d2v4759z00,
		BGl__z52allocatezd2visitedz80zzsaw_removez00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_bremovedzf3zd2envz21zzsaw_removez00,
		BgL_bgl__bremovedza7f3za7f3za74760za7, BGl__bremovedzf3zf3zzsaw_removez00,
		0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_removez00(long
		BgL_checksumz00_2875, char *BgL_fromz00_2876)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_removez00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_removez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzsaw_removez00();
					BGl_cnstzd2initzd2zzsaw_removez00();
					BGl_importedzd2moduleszd2initz00zzsaw_removez00();
					BGl_objectzd2initzd2zzsaw_removez00();
					BGl_methodzd2initzd2zzsaw_removez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_removez00()
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_remove");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_remove");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "saw_remove");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_remove");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"saw_remove");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_removez00()
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 1 */
			{	/* SawMill/remove.scm 1 */
				obj_t BgL_cportz00_2825;

				BgL_cportz00_2825 =
					bgl_open_input_string(BGl_string4709z00zzsaw_removez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2826;

					BgL_iz00_2826 = ((long) 7);
				BgL_loopz00_2827:
					if ((BgL_iz00_2826 == ((long) -1)))
						{	/* SawMill/remove.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/remove.scm 1 */
							{	/* SawMill/remove.scm 1 */
								obj_t BgL_arg4711z00_2829;

								{	/* SawMill/remove.scm 1 */

									{	/* SawMill/remove.scm 1 */
										obj_t BgL_locationz00_2831;

										BgL_locationz00_2831 = BBOOL(((bool_t) 0));
										{	/* SawMill/remove.scm 1 */

											BgL_arg4711z00_2829 =
												BGl_readz00zz__readerz00(BgL_cportz00_2825,
												BgL_locationz00_2831);
										}
									}
								}
								{	/* SawMill/remove.scm 1 */
									int BgL_auxz00_2896;

									BgL_auxz00_2896 = (int) (BgL_iz00_2826);
									CNST_TABLE_SET(BgL_auxz00_2896, BgL_arg4711z00_2829);
							}}
							{	/* SawMill/remove.scm 1 */
								int BgL_auxz00_2832;

								BgL_auxz00_2832 = (int) ((BgL_iz00_2826 - ((long) 1)));
								{
									long BgL_iz00_2901;

									BgL_iz00_2901 = (long) (BgL_auxz00_2832);
									BgL_iz00_2826 = BgL_iz00_2901;
									goto BgL_loopz00_2827;
								}
							}
						}
				}
			}
		}
	}



/* remove */
	BGL_EXPORTED_DEF BgL_blockz00_bglt
		BGl_removez00zzsaw_removez00(BgL_blockz00_bglt BgL_bz00_1)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 16 */
			BGl_makezd2defzd2usez00zzsaw_removez00(BgL_bz00_1);
			BGl_fixzd2removezd2zzsaw_removez00
				(BGl_getzd2firstzd2unusedz00zzsaw_removez00(BgL_bz00_1),
				BGl_getzd2firstzd2removablez00zzsaw_removez00(BgL_bz00_1));
			BGl_dfsz00zzsaw_removez00((obj_t) (BgL_bz00_1));
			{
				obj_t BgL_bz00_1203;

				{	/* SawMill/remove.scm 28 */
					obj_t BgL_auxz00_2909;

					BgL_bz00_1203 = (obj_t) (BgL_bz00_1);
				BgL_zc3anonymousza34317ze3z83_1204:
					if (BGl_iszd2azf3z21zz__objectz00(BgL_bz00_1203,
							BGl_bremovedz00zzsaw_removez00))
						{	/* SawMill/remove.scm 31 */
							obj_t BgL_sz00_1206;

							{	/* SawMill/remove.scm 31 */
								obj_t BgL_pairz00_2249;

								{
									BgL_blockz00_bglt BgL_auxz00_2912;

									BgL_auxz00_2912 =
										(BgL_blockz00_bglt) (
										(BgL_bremovedz00_bglt) (BgL_bz00_1203));
									BgL_pairz00_2249 =
										(((BgL_blockz00_bglt) CREF(BgL_auxz00_2912))->BgL_succsz00);
								}
								BgL_sz00_1206 = CAR(BgL_pairz00_2249);
							}
							if ((BgL_bz00_1203 == BgL_sz00_1206))
								{	/* SawMill/remove.scm 32 */
									BgL_auxz00_2909 = BgL_bz00_1203;
								}
							else
								{
									obj_t BgL_bz00_2919;

									BgL_bz00_2919 = BgL_sz00_1206;
									BgL_bz00_1203 = BgL_bz00_2919;
									goto BgL_zc3anonymousza34317ze3z83_1204;
								}
						}
					else
						{	/* SawMill/remove.scm 29 */
							BgL_auxz00_2909 = BgL_bz00_1203;
						}
					return (BgL_blockz00_bglt) (BgL_auxz00_2909);
				}
			}
		}
	}



/* dfs */
	bool_t BGl_dfsz00zzsaw_removez00(obj_t BgL_bz00_1178)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 19 */
			{	/* SawMill/remove.scm 20 */
				BgL_blockz00_bglt BgL_obj4205z00_1180;

				BgL_obj4205z00_1180 =
					((BgL_blockz00_bglt) (BgL_blockz00_bglt) (BgL_bz00_1178));
				{	/* SawMill/remove.scm 20 */
					BgL_visitedz00_bglt BgL_arg4306z00_1181;

					BgL_arg4306z00_1181 = BGl_wideningzd2visitedzd2zzsaw_removez00();
					{	/* SawMill/remove.scm 20 */
						obj_t BgL_auxz00_2927;

						BgL_objectz00_bglt BgL_auxz00_2925;

						BgL_auxz00_2927 = (obj_t) (BgL_arg4306z00_1181);
						BgL_auxz00_2925 = (BgL_objectz00_bglt) (BgL_obj4205z00_1180);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_2925, BgL_auxz00_2927);
					}
				}
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_obj4205z00_1180),
					BGl_classzd2numzd2zz__objectz00(BGl_visitedz00zzsaw_removez00));
				BgL_obj4205z00_1180;
			}
			{	/* SawMill/remove.scm 21 */
				obj_t BgL_lz00_1183;

				{
					BgL_blockz00_bglt BgL_auxz00_2933;

					BgL_auxz00_2933 = (BgL_blockz00_bglt) (BgL_bz00_1178);
					BgL_lz00_1183 =
						(((BgL_blockz00_bglt) CREF(BgL_auxz00_2933))->BgL_firstz00);
				}
				{	/* SawMill/remove.scm 22 */
					obj_t BgL_nlz00_1184;

					BgL_nlz00_1184 =
						BGl_filterz12z12zz__r4_control_features_6_9z00
						(BGl_proc4690z00zzsaw_removez00, BgL_lz00_1183);
					if (NULLP(BgL_nlz00_1184))
						{	/* SawMill/remove.scm 23 */
							BGl_blockzd2removezd2zzsaw_removez00(
								(BgL_blockz00_bglt) (BgL_bz00_1178));
						}
					else
						{
							BgL_blockz00_bglt BgL_auxz00_2941;

							BgL_auxz00_2941 = (BgL_blockz00_bglt) (BgL_bz00_1178);
							((((BgL_blockz00_bglt) CREF(BgL_auxz00_2941))->BgL_firstz00) =
								((obj_t) BgL_nlz00_1184), BUNSPEC);
						}
				}
			}
			{	/* SawMill/remove.scm 26 */
				obj_t BgL_g4231z00_1191;

				{
					BgL_blockz00_bglt BgL_auxz00_2944;

					BgL_auxz00_2944 = (BgL_blockz00_bglt) (BgL_bz00_1178);
					BgL_g4231z00_1191 =
						(((BgL_blockz00_bglt) CREF(BgL_auxz00_2944))->BgL_succsz00);
				}
				{
					obj_t BgL_l4229z00_1193;

					BgL_l4229z00_1193 = BgL_g4231z00_1191;
				BgL_zc3anonymousza34312ze3z83_1194:
					if (PAIRP(BgL_l4229z00_1193))
						{	/* SawMill/remove.scm 27 */
							{	/* SawMill/remove.scm 26 */
								obj_t BgL_sz00_1196;

								BgL_sz00_1196 = CAR(BgL_l4229z00_1193);
								{	/* SawMill/remove.scm 26 */
									bool_t BgL_testz00_2950;

									if (BGl_iszd2azf3z21zz__objectz00(BgL_sz00_1196,
											BGl_visitedz00zzsaw_removez00))
										{	/* SawMill/remove.scm 26 */
											BgL_testz00_2950 = ((bool_t) 1);
										}
									else
										{	/* SawMill/remove.scm 26 */
											BgL_testz00_2950 =
												BGl_iszd2azf3z21zz__objectz00(BgL_sz00_1196,
												BGl_bremovedz00zzsaw_removez00);
										}
									if (BgL_testz00_2950)
										{	/* SawMill/remove.scm 26 */
											((bool_t) 0);
										}
									else
										{	/* SawMill/remove.scm 26 */
											BGl_dfsz00zzsaw_removez00(BgL_sz00_1196);
										}
								}
							}
							{
								obj_t BgL_l4229z00_2955;

								BgL_l4229z00_2955 = CDR(BgL_l4229z00_1193);
								BgL_l4229z00_1193 = BgL_l4229z00_2955;
								goto BgL_zc3anonymousza34312ze3z83_1194;
							}
						}
					else
						{	/* SawMill/remove.scm 27 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* _remove */
	obj_t BGl__removez00zzsaw_removez00(obj_t BgL_envz00_2735,
		obj_t BgL_bz00_2736)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 16 */
			return
				(obj_t) (BGl_removez00zzsaw_removez00(
					(BgL_blockz00_bglt) (BgL_bz00_2736)));
		}
	}



/* <anonymous:4310> */
	obj_t BGl_zc3anonymousza34310ze3z83zzsaw_removez00(obj_t BgL_envz00_2737,
		obj_t BgL_insz00_2738)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 22 */
			{
				obj_t BgL_insz00_1187;

				{	/* SawMill/remove.scm 22 */
					bool_t BgL_auxz00_2960;

					BgL_insz00_1187 = BgL_insz00_2738;
					if (BGl_iszd2azf3z21zz__objectz00(BgL_insz00_1187,
							BGl_removedz00zzsaw_removez00))
						{	/* SawMill/remove.scm 22 */
							BgL_auxz00_2960 = ((bool_t) 0);
						}
					else
						{	/* SawMill/remove.scm 22 */
							BgL_auxz00_2960 = ((bool_t) 1);
						}
					return BBOOL(BgL_auxz00_2960);
				}
			}
		}
	}



/* block-remove */
	obj_t BGl_blockzd2removezd2zzsaw_removez00(BgL_blockz00_bglt BgL_bz00_2)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 36 */
			{	/* SawMill/remove.scm 38 */
				bool_t BgL_testz00_2964;

				if (NULLP((((BgL_blockz00_bglt) CREF(BgL_bz00_2))->BgL_succsz00)))
					{	/* SawMill/remove.scm 38 */
						BgL_testz00_2964 = ((bool_t) 1);
					}
				else
					{	/* SawMill/remove.scm 38 */
						obj_t BgL_auxz00_2968;

						{	/* SawMill/remove.scm 38 */
							obj_t BgL_pairz00_2253;

							BgL_pairz00_2253 =
								(((BgL_blockz00_bglt) CREF(BgL_bz00_2))->BgL_succsz00);
							BgL_auxz00_2968 = CDR(BgL_pairz00_2253);
						}
						BgL_testz00_2964 = PAIRP(BgL_auxz00_2968);
					}
				if (BgL_testz00_2964)
					{	/* SawMill/remove.scm 38 */
						BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
							BGl_string4691z00zzsaw_removez00, (obj_t) (BgL_bz00_2));
					}
				else
					{	/* SawMill/remove.scm 38 */
						BFALSE;
					}
			}
			{	/* SawMill/remove.scm 40 */
				obj_t BgL_sz00_1216;

				{	/* SawMill/remove.scm 40 */
					obj_t BgL_pairz00_2256;

					BgL_pairz00_2256 =
						(((BgL_blockz00_bglt) CREF(BgL_bz00_2))->BgL_succsz00);
					BgL_sz00_1216 = CAR(BgL_pairz00_2256);
				}
				if (((obj_t) (BgL_bz00_2) == BgL_sz00_1216))
					{	/* SawMill/defs.scm 69 */
						obj_t BgL_arg4327z00_1218;

						{	/* SawMill/defs.scm 69 */
							BgL_rtl_insz00_bglt BgL_arg4328z00_1219;

							{	/* SawMill/defs.scm 69 */
								BgL_rtl_nopz00_bglt BgL_arg4331z00_1222;

								BgL_arg4331z00_1222 =
									BGl_makezd2rtl_nopzd2zzsaw_defsz00(BFALSE);
								BgL_arg4328z00_1219 =
									BGl_makezd2rtl_inszd2zzsaw_defsz00(BFALSE, BNIL, BFALSE,
									(BgL_rtl_funz00_bglt) (BgL_arg4331z00_1222), BNIL);
							}
							{	/* SawMill/remove.scm 43 */
								obj_t BgL_list4329z00_1220;

								BgL_list4329z00_1220 =
									MAKE_PAIR((obj_t) (BgL_arg4328z00_1219), BNIL);
								BgL_arg4327z00_1218 = BgL_list4329z00_1220;
							}
						}
						return
							((((BgL_blockz00_bglt) CREF(BgL_bz00_2))->BgL_firstz00) =
							((obj_t) BgL_arg4327z00_1218), BUNSPEC);
					}
				else
					{	/* SawMill/remove.scm 41 */
						{	/* SawMill/remove.scm 46 */
							BgL_blockz00_bglt BgL_obj4210z00_1224;

							BgL_obj4210z00_1224 = ((BgL_blockz00_bglt) BgL_bz00_2);
							{	/* SawMill/remove.scm 46 */
								BgL_bremovedz00_bglt BgL_arg4333z00_1225;

								BgL_arg4333z00_1225 =
									BGl_wideningzd2bremovedzd2zzsaw_removez00();
								{	/* SawMill/remove.scm 46 */
									obj_t BgL_auxz00_2990;

									BgL_objectz00_bglt BgL_auxz00_2988;

									BgL_auxz00_2990 = (obj_t) (BgL_arg4333z00_1225);
									BgL_auxz00_2988 = (BgL_objectz00_bglt) (BgL_obj4210z00_1224);
									BGL_OBJECT_WIDENING_SET(BgL_auxz00_2988, BgL_auxz00_2990);
								}
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_obj4210z00_1224),
								BGl_classzd2numzd2zz__objectz00
								(BGl_bremovedz00zzsaw_removez00));
							BgL_obj4210z00_1224;
						}
						{	/* SawMill/remove.scm 47 */
							obj_t BgL_g4234z00_1227;

							BgL_g4234z00_1227 =
								(((BgL_blockz00_bglt) CREF(BgL_bz00_2))->BgL_predsz00);
							{
								obj_t BgL_l4232z00_1229;

								BgL_l4232z00_1229 = BgL_g4234z00_1227;
							BgL_zc3anonymousza34335ze3z83_1230:
								if (PAIRP(BgL_l4232z00_1229))
									{	/* SawMill/remove.scm 47 */
										{	/* SawMill/remove.scm 47 */
											obj_t BgL_pz00_1232;

											BgL_pz00_1232 = CAR(BgL_l4232z00_1229);
											{	/* SawMill/remove.scm 48 */
												obj_t BgL_arg4337z00_1234;

												{	/* SawMill/remove.scm 48 */
													obj_t BgL_arg4338z00_1235;

													{
														BgL_blockz00_bglt BgL_auxz00_3000;

														BgL_auxz00_3000 =
															(BgL_blockz00_bglt) (BgL_pz00_1232);
														BgL_arg4338z00_1235 =
															(((BgL_blockz00_bglt) CREF(BgL_auxz00_3000))->
															BgL_succsz00);
													}
													BgL_arg4337z00_1234 =
														BGl_substz00zzsaw_libz00(BgL_arg4338z00_1235,
														(obj_t) (BgL_bz00_2), BgL_sz00_1216);
												}
												{
													BgL_blockz00_bglt BgL_auxz00_3005;

													BgL_auxz00_3005 = (BgL_blockz00_bglt) (BgL_pz00_1232);
													((((BgL_blockz00_bglt) CREF(BgL_auxz00_3005))->
															BgL_succsz00) =
														((obj_t) BgL_arg4337z00_1234), BUNSPEC);
												}
											}
										}
										{
											obj_t BgL_l4232z00_3008;

											BgL_l4232z00_3008 = CDR(BgL_l4232z00_1229);
											BgL_l4232z00_1229 = BgL_l4232z00_3008;
											goto BgL_zc3anonymousza34335ze3z83_1230;
										}
									}
								else
									{	/* SawMill/remove.scm 47 */
										((bool_t) 1);
									}
							}
						}
						{	/* SawMill/remove.scm 50 */
							obj_t BgL_npredsz00_1238;

							{	/* SawMill/remove.scm 50 */
								obj_t BgL_arg4340z00_1239;

								obj_t BgL_arg4341z00_1240;

								{
									BgL_blockz00_bglt BgL_auxz00_3010;

									BgL_auxz00_3010 = (BgL_blockz00_bglt) (BgL_sz00_1216);
									BgL_arg4340z00_1239 =
										(((BgL_blockz00_bglt) CREF(BgL_auxz00_3010))->BgL_predsz00);
								}
								BgL_arg4341z00_1240 =
									(((BgL_blockz00_bglt) CREF(BgL_bz00_2))->BgL_predsz00);
								BgL_npredsz00_1238 =
									BGl_substzd2appendzd2zzsaw_libz00(BgL_arg4340z00_1239,
									(obj_t) (BgL_bz00_2), BgL_arg4341z00_1240);
							}
							{
								BgL_blockz00_bglt BgL_auxz00_3016;

								BgL_auxz00_3016 = (BgL_blockz00_bglt) (BgL_sz00_1216);
								return
									((((BgL_blockz00_bglt) CREF(BgL_auxz00_3016))->BgL_predsz00) =
									((obj_t) BgL_npredsz00_1238), BUNSPEC);
							}
						}
					}
			}
		}
	}



/* make-def-use */
	bool_t BGl_makezd2defzd2usez00zzsaw_removez00(BgL_blockz00_bglt BgL_bz00_3)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 53 */
			return BGl_defcollectz72z72zzsaw_removez00((obj_t) (BgL_bz00_3));
		}
	}



/* reg->creg */
	obj_t BGl_regzd2ze3cregz31zzsaw_removez00(obj_t BgL_rz00_1280)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 56 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_rz00_1280,
					BGl_cregz00zzsaw_removez00))
				{	/* SawMill/remove.scm 55 */
					BFALSE;
				}
			else
				{	/* SawMill/remove.scm 56 */
					BgL_rtl_regz00_bglt BgL_obj4213z00_1283;

					BgL_obj4213z00_1283 =
						((BgL_rtl_regz00_bglt) (BgL_rtl_regz00_bglt) (BgL_rz00_1280));
					{	/* SawMill/remove.scm 56 */
						BgL_cregz00_bglt BgL_arg4361z00_1284;

						{	/* SawMill/remove.scm 56 */
							BgL_cregz00_bglt BgL_res4660z00_2309;

							{	/* SawMill/remove.scm 56 */
								obj_t BgL_nbuses4157z00_2301;

								BgL_nbuses4157z00_2301 = BINT(((long) 0));
								{	/* SawMill/remove.scm 56 */
									BgL_cregz00_bglt BgL_new4158z00_2302;

									BgL_new4158z00_2302 =
										((BgL_cregz00_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_cregz00_bgl))));
									{	/* SawMill/remove.scm 56 */
										BgL_cregz00_bglt BgL_res4659z00_2308;

										{	/* SawMill/remove.scm 56 */
											BgL_cregz00_bglt BgL_new4172z00_2303;

											BgL_new4172z00_2303 = BgL_new4158z00_2302;
											{	/* SawMill/remove.scm 56 */
												obj_t BgL_defs4170z00_2306;

												obj_t BgL_nbuses4171z00_2307;

												BgL_defs4170z00_2306 = BNIL;
												BgL_nbuses4171z00_2307 = BgL_nbuses4157z00_2301;
												((((BgL_cregz00_bglt) CREF(BgL_new4172z00_2303))->
														BgL_defsz00) =
													((obj_t) BgL_defs4170z00_2306), BUNSPEC);
												((((BgL_cregz00_bglt) CREF(BgL_new4172z00_2303))->
														BgL_nbusesz00) =
													((obj_t) BgL_nbuses4171z00_2307), BUNSPEC);
												BgL_res4659z00_2308 = BgL_new4172z00_2303;
										}} BgL_res4659z00_2308;
									}
									BgL_res4660z00_2309 = BgL_new4158z00_2302;
							}}
							BgL_arg4361z00_1284 = BgL_res4660z00_2309;
						}
						{	/* SawMill/remove.scm 56 */
							obj_t BgL_auxz00_3031;

							BgL_objectz00_bglt BgL_auxz00_3029;

							BgL_auxz00_3031 = (obj_t) (BgL_arg4361z00_1284);
							BgL_auxz00_3029 = (BgL_objectz00_bglt) (BgL_obj4213z00_1283);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3029, BgL_auxz00_3031);
					}}
					BGL_OBJECT_CLASS_NUM_SET(
						(BgL_objectz00_bglt) (BgL_obj4213z00_1283),
						BGl_classzd2numzd2zz__objectz00(BGl_cregz00zzsaw_removez00));
					(obj_t) (BgL_obj4213z00_1283);
				}
			return BgL_rz00_1280;
		}
	}



/* defcollect' */
	bool_t BGl_defcollectz72z72zzsaw_removez00(obj_t BgL_bz00_1246)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 64 */
			{
				obj_t BgL_rz00_1286;

				{	/* SawMill/remove.scm 65 */
					BgL_blockz00_bglt BgL_obj4218z00_1248;

					BgL_obj4218z00_1248 =
						((BgL_blockz00_bglt) (BgL_blockz00_bglt) (BgL_bz00_1246));
					{	/* SawMill/remove.scm 65 */
						BgL_defcollectz00_bglt BgL_arg4344z00_1249;

						BgL_arg4344z00_1249 = BGl_wideningzd2defcollectzd2zzsaw_removez00();
						{	/* SawMill/remove.scm 65 */
							obj_t BgL_auxz00_3043;

							BgL_objectz00_bglt BgL_auxz00_3041;

							BgL_auxz00_3043 = (obj_t) (BgL_arg4344z00_1249);
							BgL_auxz00_3041 = (BgL_objectz00_bglt) (BgL_obj4218z00_1248);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3041, BgL_auxz00_3043);
						}
					}
					BGL_OBJECT_CLASS_NUM_SET(
						(BgL_objectz00_bglt) (BgL_obj4218z00_1248),
						BGl_classzd2numzd2zz__objectz00(BGl_defcollectz00zzsaw_removez00));
					BgL_obj4218z00_1248;
				}
				{	/* SawMill/remove.scm 66 */
					obj_t BgL_g4240z00_1251;

					{
						BgL_blockz00_bglt BgL_auxz00_3049;

						BgL_auxz00_3049 = (BgL_blockz00_bglt) (BgL_bz00_1246);
						BgL_g4240z00_1251 =
							(((BgL_blockz00_bglt) CREF(BgL_auxz00_3049))->BgL_firstz00);
					}
					{
						obj_t BgL_l4238z00_1253;

						BgL_l4238z00_1253 = BgL_g4240z00_1251;
					BgL_zc3anonymousza34346ze3z83_1254:
						if (PAIRP(BgL_l4238z00_1253))
							{	/* SawMill/remove.scm 70 */
								{	/* SawMill/remove.scm 67 */
									obj_t BgL_insz00_1256;

									BgL_insz00_1256 = CAR(BgL_l4238z00_1253);
									{	/* SawMill/remove.scm 68 */
										bool_t BgL_testz00_3055;

										{	/* SawMill/remove.scm 68 */
											BgL_rtl_insz00_bglt BgL_obj3903z00_2279;

											BgL_obj3903z00_2279 =
												(BgL_rtl_insz00_bglt) (BgL_insz00_1256);
											BgL_testz00_3055 =
												CBOOL(
												(((BgL_rtl_insz00_bglt) CREF(BgL_obj3903z00_2279))->
													BgL_destz00));
										}
										if (BgL_testz00_3055)
											{	/* SawMill/remove.scm 68 */
												obj_t BgL_arg4349z00_1259;

												{
													BgL_rtl_insz00_bglt BgL_auxz00_3059;

													BgL_auxz00_3059 =
														(BgL_rtl_insz00_bglt) (BgL_insz00_1256);
													BgL_arg4349z00_1259 =
														(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_3059))->
														BgL_destz00);
												}
												{	/* SawMill/remove.scm 68 */
													obj_t BgL_instance4216z00_2283;

													BgL_instance4216z00_2283 =
														BGl_regzd2ze3cregz31zzsaw_removez00
														(BgL_arg4349z00_1259);
													{	/* SawMill/remove.scm 68 */
														obj_t BgL_arg4368z00_2284;

														{	/* SawMill/remove.scm 68 */
															obj_t BgL_arg4369z00_2285;

															{	/* SawMill/remove.scm 68 */
																BgL_cregz00_bglt BgL_obj4184z00_2286;

																BgL_obj4184z00_2286 =
																	(BgL_cregz00_bglt) (BgL_instance4216z00_2283);
																{
																	obj_t BgL_auxz00_3064;

																	{	/* SawMill/remove.scm 68 */
																		BgL_objectz00_bglt BgL_auxz00_3065;

																		BgL_auxz00_3065 =
																			(BgL_objectz00_bglt)
																			(BgL_obj4184z00_2286);
																		BgL_auxz00_3064 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_3065);
																	}
																	BgL_arg4369z00_2285 =
																		(((BgL_cregz00_bglt)
																			CREF(BgL_auxz00_3064))->BgL_defsz00);
																}
															}
															BgL_arg4368z00_2284 =
																MAKE_PAIR(BgL_insz00_1256, BgL_arg4369z00_2285);
														}
														{	/* SawMill/remove.scm 68 */
															BgL_cregz00_bglt BgL_obj4186z00_2287;

															obj_t BgL_val4185z00_2288;

															BgL_obj4186z00_2287 =
																(BgL_cregz00_bglt) (BgL_instance4216z00_2283);
															BgL_val4185z00_2288 = BgL_arg4368z00_2284;
															{
																obj_t BgL_auxz00_3071;

																{	/* SawMill/remove.scm 68 */
																	BgL_objectz00_bglt BgL_auxz00_3072;

																	BgL_auxz00_3072 =
																		(BgL_objectz00_bglt) (BgL_obj4186z00_2287);
																	BgL_auxz00_3071 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_3072);
																}
																((((BgL_cregz00_bglt) CREF(BgL_auxz00_3071))->
																		BgL_defsz00) =
																	((obj_t) BgL_val4185z00_2288), BUNSPEC);
															}
														}
													}
												}
											}
										else
											{	/* SawMill/remove.scm 68 */
												BFALSE;
											}
									}
									{	/* SawMill/remove.scm 69 */
										obj_t BgL_g4237z00_1260;

										{
											BgL_rtl_insz00_bglt BgL_auxz00_3076;

											BgL_auxz00_3076 = (BgL_rtl_insz00_bglt) (BgL_insz00_1256);
											BgL_g4237z00_1260 =
												(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_3076))->
												BgL_argsz00);
										}
										{
											obj_t BgL_l4235z00_1262;

											BgL_l4235z00_1262 = BgL_g4237z00_1260;
										BgL_zc3anonymousza34350ze3z83_1263:
											if (PAIRP(BgL_l4235z00_1262))
												{	/* SawMill/remove.scm 69 */
													BgL_rz00_1286 = CAR(BgL_l4235z00_1262);
													{	/* SawMill/remove.scm 59 */
														obj_t BgL_instance4214z00_1288;

														BgL_instance4214z00_1288 =
															BGl_regzd2ze3cregz31zzsaw_removez00
															(BgL_rz00_1286);
														{	/* SawMill/remove.scm 60 */
															long BgL_arg4364z00_1289;

															{	/* SawMill/remove.scm 60 */
																long BgL_auxz00_3082;

																{	/* SawMill/remove.scm 60 */
																	BgL_cregz00_bglt BgL_obj4187z00_2312;

																	BgL_obj4187z00_2312 =
																		(BgL_cregz00_bglt)
																		(BgL_instance4214z00_1288);
																	{	/* SawMill/remove.scm 60 */
																		obj_t BgL_auxz00_3084;

																		{
																			obj_t BgL_auxz00_3085;

																			{	/* SawMill/remove.scm 60 */
																				BgL_objectz00_bglt BgL_auxz00_3086;

																				BgL_auxz00_3086 =
																					(BgL_objectz00_bglt)
																					(BgL_obj4187z00_2312);
																				BgL_auxz00_3085 =
																					BGL_OBJECT_WIDENING(BgL_auxz00_3086);
																			}
																			BgL_auxz00_3084 =
																				(((BgL_cregz00_bglt)
																					CREF(BgL_auxz00_3085))->
																				BgL_nbusesz00);
																		}
																		BgL_auxz00_3082 =
																			(long) CINT(BgL_auxz00_3084);
																}}
																BgL_arg4364z00_1289 =
																	(((long) 1) + BgL_auxz00_3082);
															}
															{	/* SawMill/remove.scm 60 */
																BgL_cregz00_bglt BgL_obj4189z00_2315;

																obj_t BgL_val4188z00_2316;

																BgL_obj4189z00_2315 =
																	(BgL_cregz00_bglt) (BgL_instance4214z00_1288);
																BgL_val4188z00_2316 = BINT(BgL_arg4364z00_1289);
																{
																	obj_t BgL_auxz00_3094;

																	{	/* SawMill/remove.scm 60 */
																		BgL_objectz00_bglt BgL_auxz00_3095;

																		BgL_auxz00_3095 =
																			(BgL_objectz00_bglt)
																			(BgL_obj4189z00_2315);
																		BgL_auxz00_3094 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_3095);
																	}
																	((((BgL_cregz00_bglt) CREF(BgL_auxz00_3094))->
																			BgL_nbusesz00) =
																		((obj_t) BgL_val4188z00_2316), BUNSPEC);
													}}}}
													{
														obj_t BgL_l4235z00_3100;

														BgL_l4235z00_3100 = CDR(BgL_l4235z00_1262);
														BgL_l4235z00_1262 = BgL_l4235z00_3100;
														goto BgL_zc3anonymousza34350ze3z83_1263;
													}
												}
											else
												{	/* SawMill/remove.scm 69 */
													((bool_t) 1);
												}
										}
									}
								}
								{
									obj_t BgL_l4238z00_3102;

									BgL_l4238z00_3102 = CDR(BgL_l4238z00_1253);
									BgL_l4238z00_1253 = BgL_l4238z00_3102;
									goto BgL_zc3anonymousza34346ze3z83_1254;
								}
							}
						else
							{	/* SawMill/remove.scm 70 */
								((bool_t) 1);
							}
					}
				}
				{	/* SawMill/remove.scm 71 */
					obj_t BgL_g4243z00_1270;

					{
						BgL_blockz00_bglt BgL_auxz00_3104;

						BgL_auxz00_3104 = (BgL_blockz00_bglt) (BgL_bz00_1246);
						BgL_g4243z00_1270 =
							(((BgL_blockz00_bglt) CREF(BgL_auxz00_3104))->BgL_succsz00);
					}
					{
						obj_t BgL_l4241z00_1272;

						BgL_l4241z00_1272 = BgL_g4243z00_1270;
					BgL_zc3anonymousza34355ze3z83_1273:
						if (PAIRP(BgL_l4241z00_1272))
							{	/* SawMill/remove.scm 72 */
								{	/* SawMill/remove.scm 71 */
									obj_t BgL_sz00_1275;

									BgL_sz00_1275 = CAR(BgL_l4241z00_1272);
									if (BGl_iszd2azf3z21zz__objectz00(BgL_sz00_1275,
											BGl_defcollectz00zzsaw_removez00))
										{	/* SawMill/remove.scm 71 */
											((bool_t) 0);
										}
									else
										{	/* SawMill/remove.scm 71 */
											BGl_defcollectz72z72zzsaw_removez00(BgL_sz00_1275);
										}
								}
								{
									obj_t BgL_l4241z00_3113;

									BgL_l4241z00_3113 = CDR(BgL_l4241z00_1272);
									BgL_l4241z00_1272 = BgL_l4241z00_3113;
									goto BgL_zc3anonymousza34355ze3z83_1273;
								}
							}
						else
							{	/* SawMill/remove.scm 72 */
								return ((bool_t) 1);
							}
					}
				}
			}
		}
	}



/* get-first-removable */
	obj_t BGl_getzd2firstzd2removablez00zzsaw_removez00(BgL_blockz00_bglt
		BgL_bz00_4)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 74 */
			{	/* SawMill/remove.scm 75 */
				obj_t BgL_rmz00_1301;

				BgL_rmz00_1301 = MAKE_CELL(BNIL);
				BGl_rcollectz72z72zzsaw_removez00(BgL_rmz00_1301, (obj_t) (BgL_bz00_4));
				return CELL_REF(BgL_rmz00_1301);
			}
		}
	}



/* rcollect' */
	bool_t BGl_rcollectz72z72zzsaw_removez00(obj_t BgL_rmz00_2823,
		obj_t BgL_bz00_1303)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 76 */
			{	/* SawMill/remove.scm 77 */
				BgL_blockz00_bglt BgL_obj4221z00_1305;

				BgL_obj4221z00_1305 =
					((BgL_blockz00_bglt) (BgL_blockz00_bglt) (BgL_bz00_1303));
				{	/* SawMill/remove.scm 77 */
					BgL_rcollectz00_bglt BgL_arg4371z00_1306;

					BgL_arg4371z00_1306 = BGl_wideningzd2rcollectzd2zzsaw_removez00();
					{	/* SawMill/remove.scm 77 */
						obj_t BgL_auxz00_3122;

						BgL_objectz00_bglt BgL_auxz00_3120;

						BgL_auxz00_3122 = (obj_t) (BgL_arg4371z00_1306);
						BgL_auxz00_3120 = (BgL_objectz00_bglt) (BgL_obj4221z00_1305);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_3120, BgL_auxz00_3122);
					}
				}
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_obj4221z00_1305),
					BGl_classzd2numzd2zz__objectz00(BGl_rcollectz00zzsaw_removez00));
				BgL_obj4221z00_1305;
			}
			{	/* SawMill/remove.scm 78 */
				obj_t BgL_g4246z00_1308;

				{
					BgL_blockz00_bglt BgL_auxz00_3128;

					BgL_auxz00_3128 = (BgL_blockz00_bglt) (BgL_bz00_1303);
					BgL_g4246z00_1308 =
						(((BgL_blockz00_bglt) CREF(BgL_auxz00_3128))->BgL_firstz00);
				}
				{
					obj_t BgL_l4244z00_1310;

					BgL_l4244z00_1310 = BgL_g4246z00_1308;
				BgL_zc3anonymousza34373ze3z83_1311:
					if (PAIRP(BgL_l4244z00_1310))
						{	/* SawMill/remove.scm 79 */
							{	/* SawMill/remove.scm 78 */
								obj_t BgL_insz00_1313;

								BgL_insz00_1313 = CAR(BgL_l4244z00_1310);
								if (BGl_removablezf3zf3zzsaw_removez00(
										(BgL_rtl_insz00_bglt) (BgL_insz00_1313)))
									{	/* SawMill/remove.scm 78 */
										obj_t BgL_auxz00_2824;

										BgL_auxz00_2824 =
											MAKE_PAIR(BgL_insz00_1313, CELL_REF(BgL_rmz00_2823));
										CELL_SET(BgL_rmz00_2823, BgL_auxz00_2824);
									}
								else
									{	/* SawMill/remove.scm 78 */
										BFALSE;
									}
							}
							{
								obj_t BgL_l4244z00_3138;

								BgL_l4244z00_3138 = CDR(BgL_l4244z00_1310);
								BgL_l4244z00_1310 = BgL_l4244z00_3138;
								goto BgL_zc3anonymousza34373ze3z83_1311;
							}
						}
					else
						{	/* SawMill/remove.scm 79 */
							((bool_t) 1);
						}
				}
			}
			{	/* SawMill/remove.scm 80 */
				obj_t BgL_g4249z00_1317;

				{
					BgL_blockz00_bglt BgL_auxz00_3140;

					BgL_auxz00_3140 = (BgL_blockz00_bglt) (BgL_bz00_1303);
					BgL_g4249z00_1317 =
						(((BgL_blockz00_bglt) CREF(BgL_auxz00_3140))->BgL_succsz00);
				}
				{
					obj_t BgL_l4247z00_1319;

					BgL_l4247z00_1319 = BgL_g4249z00_1317;
				BgL_zc3anonymousza34377ze3z83_1320:
					if (PAIRP(BgL_l4247z00_1319))
						{	/* SawMill/remove.scm 81 */
							{	/* SawMill/remove.scm 80 */
								obj_t BgL_sz00_1322;

								BgL_sz00_1322 = CAR(BgL_l4247z00_1319);
								if (BGl_iszd2azf3z21zz__objectz00(BgL_sz00_1322,
										BGl_rcollectz00zzsaw_removez00))
									{	/* SawMill/remove.scm 80 */
										((bool_t) 0);
									}
								else
									{	/* SawMill/remove.scm 80 */
										BGl_rcollectz72z72zzsaw_removez00(BgL_rmz00_2823,
											BgL_sz00_1322);
									}
							}
							{
								obj_t BgL_l4247z00_3149;

								BgL_l4247z00_3149 = CDR(BgL_l4247z00_1319);
								BgL_l4247z00_1319 = BgL_l4247z00_3149;
								goto BgL_zc3anonymousza34377ze3z83_1320;
							}
						}
					else
						{	/* SawMill/remove.scm 81 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* get-first-unused */
	obj_t BGl_getzd2firstzd2unusedz00zzsaw_removez00(BgL_blockz00_bglt BgL_bz00_5)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 84 */
			{	/* SawMill/remove.scm 85 */
				obj_t BgL_unusedz00_1327;

				BgL_unusedz00_1327 = MAKE_CELL(BNIL);
				BGl_ucollectz72z72zzsaw_removez00(BgL_unusedz00_1327,
					(obj_t) (BgL_bz00_5));
				return CELL_REF(BgL_unusedz00_1327);
			}
		}
	}



/* ucollect' */
	bool_t BGl_ucollectz72z72zzsaw_removez00(obj_t BgL_unusedz00_2821,
		obj_t BgL_bz00_1329)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 86 */
			{	/* SawMill/remove.scm 87 */
				BgL_blockz00_bglt BgL_obj4222z00_1331;

				BgL_obj4222z00_1331 =
					((BgL_blockz00_bglt) (BgL_blockz00_bglt) (BgL_bz00_1329));
				{	/* SawMill/remove.scm 87 */
					BgL_ucollectz00_bglt BgL_arg4382z00_1332;

					BgL_arg4382z00_1332 = BGl_wideningzd2ucollectzd2zzsaw_removez00();
					{	/* SawMill/remove.scm 87 */
						obj_t BgL_auxz00_3158;

						BgL_objectz00_bglt BgL_auxz00_3156;

						BgL_auxz00_3158 = (obj_t) (BgL_arg4382z00_1332);
						BgL_auxz00_3156 = (BgL_objectz00_bglt) (BgL_obj4222z00_1331);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_3156, BgL_auxz00_3158);
					}
				}
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_obj4222z00_1331),
					BGl_classzd2numzd2zz__objectz00(BGl_ucollectz00zzsaw_removez00));
				BgL_obj4222z00_1331;
			}
			{	/* SawMill/remove.scm 88 */
				obj_t BgL_g4252z00_1334;

				{
					BgL_blockz00_bglt BgL_auxz00_3164;

					BgL_auxz00_3164 = (BgL_blockz00_bglt) (BgL_bz00_1329);
					BgL_g4252z00_1334 =
						(((BgL_blockz00_bglt) CREF(BgL_auxz00_3164))->BgL_firstz00);
				}
				{
					obj_t BgL_l4250z00_1336;

					BgL_l4250z00_1336 = BgL_g4252z00_1334;
				BgL_zc3anonymousza34384ze3z83_1337:
					if (PAIRP(BgL_l4250z00_1336))
						{	/* SawMill/remove.scm 95 */
							{	/* SawMill/remove.scm 89 */
								obj_t BgL_insz00_1339;

								BgL_insz00_1339 = CAR(BgL_l4250z00_1336);
								{	/* SawMill/remove.scm 91 */
									bool_t BgL_testz00_3170;

									{	/* SawMill/remove.scm 91 */
										bool_t BgL_testz00_3171;

										{	/* SawMill/remove.scm 91 */
											BgL_rtl_insz00_bglt BgL_obj3903z00_2339;

											BgL_obj3903z00_2339 =
												(BgL_rtl_insz00_bglt) (BgL_insz00_1339);
											BgL_testz00_3171 =
												CBOOL(
												(((BgL_rtl_insz00_bglt) CREF(BgL_obj3903z00_2339))->
													BgL_destz00));
										}
										if (BgL_testz00_3171)
											{	/* SawMill/remove.scm 92 */
												bool_t BgL_testz00_3175;

												{	/* SawMill/remove.scm 92 */
													long BgL_auxz00_3176;

													{	/* SawMill/remove.scm 92 */
														obj_t BgL_auxz00_3177;

														{	/* SawMill/remove.scm 92 */
															BgL_cregz00_bglt BgL_obj4187z00_2341;

															{	/* SawMill/remove.scm 92 */
																BgL_rtl_insz00_bglt BgL_obj3903z00_2340;

																BgL_obj3903z00_2340 =
																	(BgL_rtl_insz00_bglt) (BgL_insz00_1339);
																BgL_obj4187z00_2341 =
																	(BgL_cregz00_bglt) (
																	(((BgL_rtl_insz00_bglt)
																			CREF(BgL_obj3903z00_2340))->BgL_destz00));
															}
															{
																obj_t BgL_auxz00_3181;

																{	/* SawMill/remove.scm 92 */
																	BgL_objectz00_bglt BgL_auxz00_3182;

																	BgL_auxz00_3182 =
																		(BgL_objectz00_bglt) (BgL_obj4187z00_2341);
																	BgL_auxz00_3181 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_3182);
																}
																BgL_auxz00_3177 =
																	(((BgL_cregz00_bglt) CREF(BgL_auxz00_3181))->
																	BgL_nbusesz00);
														}}
														BgL_auxz00_3176 = (long) CINT(BgL_auxz00_3177);
													}
													BgL_testz00_3175 = (BgL_auxz00_3176 == ((long) 0));
												}
												if (BgL_testz00_3175)
													{	/* SawMill/remove.scm 93 */
														bool_t BgL_testz00_3188;

														{	/* SawMill/remove.scm 93 */
															obj_t BgL_arg4391z00_1346;

															{
																BgL_rtl_insz00_bglt BgL_auxz00_3189;

																BgL_auxz00_3189 =
																	(BgL_rtl_insz00_bglt) (BgL_insz00_1339);
																BgL_arg4391z00_1346 =
																	(((BgL_rtl_insz00_bglt)
																		CREF(BgL_auxz00_3189))->BgL_destz00);
															}
															BgL_testz00_3188 =
																CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																(BgL_arg4391z00_1346,
																	CELL_REF(BgL_unusedz00_2821)));
														}
														if (BgL_testz00_3188)
															{	/* SawMill/remove.scm 93 */
																BgL_testz00_3170 = ((bool_t) 0);
															}
														else
															{	/* SawMill/remove.scm 93 */
																BgL_testz00_3170 = ((bool_t) 1);
															}
													}
												else
													{	/* SawMill/remove.scm 92 */
														BgL_testz00_3170 = ((bool_t) 0);
													}
											}
										else
											{	/* SawMill/remove.scm 91 */
												BgL_testz00_3170 = ((bool_t) 0);
											}
									}
									if (BgL_testz00_3170)
										{	/* SawMill/remove.scm 94 */
											obj_t BgL_auxz00_2822;

											{	/* SawMill/remove.scm 94 */
												obj_t BgL_arg4387z00_1342;

												{
													BgL_rtl_insz00_bglt BgL_auxz00_3194;

													BgL_auxz00_3194 =
														(BgL_rtl_insz00_bglt) (BgL_insz00_1339);
													BgL_arg4387z00_1342 =
														(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_3194))->
														BgL_destz00);
												}
												BgL_auxz00_2822 =
													MAKE_PAIR(BgL_arg4387z00_1342,
													CELL_REF(BgL_unusedz00_2821));
											}
											CELL_SET(BgL_unusedz00_2821, BgL_auxz00_2822);
										}
									else
										{	/* SawMill/remove.scm 91 */
											BFALSE;
										}
								}
							}
							{
								obj_t BgL_l4250z00_3198;

								BgL_l4250z00_3198 = CDR(BgL_l4250z00_1336);
								BgL_l4250z00_1336 = BgL_l4250z00_3198;
								goto BgL_zc3anonymousza34384ze3z83_1337;
							}
						}
					else
						{	/* SawMill/remove.scm 95 */
							((bool_t) 1);
						}
				}
			}
			{	/* SawMill/remove.scm 96 */
				obj_t BgL_g4255z00_1352;

				{
					BgL_blockz00_bglt BgL_auxz00_3200;

					BgL_auxz00_3200 = (BgL_blockz00_bglt) (BgL_bz00_1329);
					BgL_g4255z00_1352 =
						(((BgL_blockz00_bglt) CREF(BgL_auxz00_3200))->BgL_succsz00);
				}
				{
					obj_t BgL_l4253z00_1354;

					BgL_l4253z00_1354 = BgL_g4255z00_1352;
				BgL_zc3anonymousza34396ze3z83_1355:
					if (PAIRP(BgL_l4253z00_1354))
						{	/* SawMill/remove.scm 97 */
							{	/* SawMill/remove.scm 96 */
								obj_t BgL_sz00_1357;

								BgL_sz00_1357 = CAR(BgL_l4253z00_1354);
								if (BGl_iszd2azf3z21zz__objectz00(BgL_sz00_1357,
										BGl_ucollectz00zzsaw_removez00))
									{	/* SawMill/remove.scm 96 */
										((bool_t) 0);
									}
								else
									{	/* SawMill/remove.scm 96 */
										BGl_ucollectz72z72zzsaw_removez00(BgL_unusedz00_2821,
											BgL_sz00_1357);
									}
							}
							{
								obj_t BgL_l4253z00_3209;

								BgL_l4253z00_3209 = CDR(BgL_l4253z00_1354);
								BgL_l4253z00_1354 = BgL_l4253z00_3209;
								goto BgL_zc3anonymousza34396ze3z83_1355;
							}
						}
					else
						{	/* SawMill/remove.scm 97 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* fix-remove */
	bool_t BGl_fixzd2removezd2zzsaw_removez00(obj_t BgL_unusedz00_6,
		obj_t BgL_rmz00_7)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 103 */
		BGl_fixzd2removezd2zzsaw_removez00:
			{
				obj_t BgL_l4259z00_1363;

				BgL_l4259z00_1363 = BgL_rmz00_7;
			BgL_zc3anonymousza34400ze3z83_1364:
				if (PAIRP(BgL_l4259z00_1363))
					{	/* SawMill/remove.scm 105 */
						{	/* SawMill/remove.scm 112 */
							obj_t BgL_insz00_1366;

							BgL_insz00_1366 = CAR(BgL_l4259z00_1363);
							{	/* SawMill/remove.scm 106 */
								BgL_rtl_insz00_bglt BgL_obj4225z00_1367;

								BgL_obj4225z00_1367 =
									((BgL_rtl_insz00_bglt)
									(BgL_rtl_insz00_bglt) (BgL_insz00_1366));
								{	/* SawMill/remove.scm 106 */
									BgL_removedz00_bglt BgL_arg4402z00_1368;

									BgL_arg4402z00_1368 =
										BGl_wideningzd2removedzd2zzsaw_removez00();
									{	/* SawMill/remove.scm 106 */
										obj_t BgL_auxz00_3219;

										BgL_objectz00_bglt BgL_auxz00_3217;

										BgL_auxz00_3219 = (obj_t) (BgL_arg4402z00_1368);
										BgL_auxz00_3217 =
											(BgL_objectz00_bglt) (BgL_obj4225z00_1367);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3217, BgL_auxz00_3219);
									}
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_obj4225z00_1367),
									BGl_classzd2numzd2zz__objectz00
									(BGl_removedz00zzsaw_removez00));
								BgL_obj4225z00_1367;
							}
							{	/* SawMill/remove.scm 107 */
								obj_t BgL_g4258z00_1370;

								{
									BgL_rtl_insz00_bglt BgL_auxz00_3225;

									BgL_auxz00_3225 = (BgL_rtl_insz00_bglt) (BgL_insz00_1366);
									BgL_g4258z00_1370 =
										(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_3225))->
										BgL_argsz00);
								}
								{
									obj_t BgL_l4256z00_1372;

									BgL_l4256z00_1372 = BgL_g4258z00_1370;
								BgL_zc3anonymousza34404ze3z83_1373:
									if (PAIRP(BgL_l4256z00_1372))
										{	/* SawMill/remove.scm 112 */
											{	/* SawMill/remove.scm 108 */
												obj_t BgL_rz00_1375;

												BgL_rz00_1375 = CAR(BgL_l4256z00_1372);
												{	/* SawMill/remove.scm 108 */
													obj_t BgL_nz00_1376;

													{	/* SawMill/remove.scm 108 */
														BgL_cregz00_bglt BgL_obj4187z00_2359;

														BgL_obj4187z00_2359 =
															(BgL_cregz00_bglt) (BgL_rz00_1375);
														{
															obj_t BgL_auxz00_3232;

															{	/* SawMill/remove.scm 108 */
																BgL_objectz00_bglt BgL_auxz00_3233;

																BgL_auxz00_3233 =
																	(BgL_objectz00_bglt) (BgL_obj4187z00_2359);
																BgL_auxz00_3232 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_3233);
															}
															BgL_nz00_1376 =
																(((BgL_cregz00_bglt) CREF(BgL_auxz00_3232))->
																BgL_nbusesz00);
														}
													}
													{	/* SawMill/remove.scm 109 */
														long BgL_arg4406z00_1377;

														BgL_arg4406z00_1377 =
															((long) CINT(BgL_nz00_1376) - ((long) 1));
														{	/* SawMill/remove.scm 109 */
															BgL_cregz00_bglt BgL_obj4189z00_2362;

															obj_t BgL_val4188z00_2363;

															BgL_obj4189z00_2362 =
																(BgL_cregz00_bglt) (BgL_rz00_1375);
															BgL_val4188z00_2363 = BINT(BgL_arg4406z00_1377);
															{
																obj_t BgL_auxz00_3241;

																{	/* SawMill/remove.scm 109 */
																	BgL_objectz00_bglt BgL_auxz00_3242;

																	BgL_auxz00_3242 =
																		(BgL_objectz00_bglt) (BgL_obj4189z00_2362);
																	BgL_auxz00_3241 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_3242);
																}
																((((BgL_cregz00_bglt) CREF(BgL_auxz00_3241))->
																		BgL_nbusesz00) =
																	((obj_t) BgL_val4188z00_2363), BUNSPEC);
													}}}
													if (((long) CINT(BgL_nz00_1376) == ((long) 1)))
														{	/* SawMill/remove.scm 110 */
															BgL_unusedz00_6 =
																MAKE_PAIR(BgL_rz00_1375, BgL_unusedz00_6);
														}
													else
														{	/* SawMill/remove.scm 110 */
															BFALSE;
														}
												}
											}
											{
												obj_t BgL_l4256z00_3250;

												BgL_l4256z00_3250 = CDR(BgL_l4256z00_1372);
												BgL_l4256z00_1372 = BgL_l4256z00_3250;
												goto BgL_zc3anonymousza34404ze3z83_1373;
											}
										}
									else
										{	/* SawMill/remove.scm 112 */
											((bool_t) 1);
										}
								}
							}
						}
						{
							obj_t BgL_l4259z00_3252;

							BgL_l4259z00_3252 = CDR(BgL_l4259z00_1363);
							BgL_l4259z00_1363 = BgL_l4259z00_3252;
							goto BgL_zc3anonymousza34400ze3z83_1364;
						}
					}
				else
					{	/* SawMill/remove.scm 105 */
						((bool_t) 1);
					}
			}
			BgL_rmz00_7 = BNIL;
			{
				obj_t BgL_l4264z00_1384;

				BgL_l4264z00_1384 = BgL_unusedz00_6;
			BgL_zc3anonymousza34410ze3z83_1385:
				if (PAIRP(BgL_l4264z00_1384))
					{	/* SawMill/remove.scm 116 */
						{	/* SawMill/remove.scm 117 */
							obj_t BgL_rz00_1387;

							BgL_rz00_1387 = CAR(BgL_l4264z00_1384);
							{	/* SawMill/remove.scm 117 */
								obj_t BgL_g4263z00_1388;

								{	/* SawMill/remove.scm 120 */
									BgL_cregz00_bglt BgL_obj4184z00_2370;

									BgL_obj4184z00_2370 = (BgL_cregz00_bglt) (BgL_rz00_1387);
									{
										obj_t BgL_auxz00_3258;

										{	/* SawMill/remove.scm 120 */
											BgL_objectz00_bglt BgL_auxz00_3259;

											BgL_auxz00_3259 =
												(BgL_objectz00_bglt) (BgL_obj4184z00_2370);
											BgL_auxz00_3258 = BGL_OBJECT_WIDENING(BgL_auxz00_3259);
										}
										BgL_g4263z00_1388 =
											(((BgL_cregz00_bglt) CREF(BgL_auxz00_3258))->BgL_defsz00);
									}
								}
								{
									obj_t BgL_l4261z00_1390;

									BgL_l4261z00_1390 = BgL_g4263z00_1388;
								BgL_zc3anonymousza34412ze3z83_1391:
									if (PAIRP(BgL_l4261z00_1390))
										{	/* SawMill/remove.scm 120 */
											{	/* SawMill/remove.scm 119 */
												obj_t BgL_insz00_1393;

												BgL_insz00_1393 = CAR(BgL_l4261z00_1390);
												{
													BgL_rtl_insz00_bglt BgL_auxz00_3266;

													BgL_auxz00_3266 =
														(BgL_rtl_insz00_bglt) (BgL_insz00_1393);
													((((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_3266))->
															BgL_destz00) = ((obj_t) BFALSE), BUNSPEC);
												}
												if (BGl_removablezf3zf3zzsaw_removez00(
														(BgL_rtl_insz00_bglt) (BgL_insz00_1393)))
													{	/* SawMill/remove.scm 119 */
														BgL_rmz00_7 =
															MAKE_PAIR(BgL_insz00_1393, BgL_rmz00_7);
													}
												else
													{	/* SawMill/remove.scm 119 */
														BFALSE;
													}
											}
											{
												obj_t BgL_l4261z00_3273;

												BgL_l4261z00_3273 = CDR(BgL_l4261z00_1390);
												BgL_l4261z00_1390 = BgL_l4261z00_3273;
												goto BgL_zc3anonymousza34412ze3z83_1391;
											}
										}
									else
										{	/* SawMill/remove.scm 120 */
											((bool_t) 1);
										}
								}
							}
						}
						{
							obj_t BgL_l4264z00_3275;

							BgL_l4264z00_3275 = CDR(BgL_l4264z00_1384);
							BgL_l4264z00_1384 = BgL_l4264z00_3275;
							goto BgL_zc3anonymousza34410ze3z83_1385;
						}
					}
				else
					{	/* SawMill/remove.scm 116 */
						((bool_t) 1);
					}
			}
			if (NULLP(BgL_rmz00_7))
				{	/* SawMill/remove.scm 123 */
					return ((bool_t) 0);
				}
			else
				{
					obj_t BgL_unusedz00_3279;

					BgL_unusedz00_3279 = BNIL;
					BgL_unusedz00_6 = BgL_unusedz00_3279;
					goto BGl_fixzd2removezd2zzsaw_removez00;
				}
		}
	}



/* removable? */
	bool_t BGl_removablezf3zf3zzsaw_removez00(BgL_rtl_insz00_bglt BgL_insz00_8)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 128 */
			{	/* SawMill/remove.scm 130 */
				bool_t BgL_testz00_3280;

				if (CBOOL((((BgL_rtl_insz00_bglt) CREF(BgL_insz00_8))->BgL_destz00)))
					{	/* SawMill/remove.scm 130 */
						BgL_testz00_3280 = ((bool_t) 0);
					}
				else
					{	/* SawMill/remove.scm 130 */
						BgL_testz00_3280 = ((bool_t) 1);
					}
				if (BgL_testz00_3280)
					{	/* SawMill/remove.scm 131 */
						BgL_rtl_funz00_bglt BgL_arg4418z00_1402;

						BgL_arg4418z00_1402 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_insz00_8))->BgL_funz00);
						{	/* SawMill/remove.scm 131 */
							obj_t BgL_obj3461z00_2380;

							BgL_obj3461z00_2380 = (obj_t) (BgL_arg4418z00_1402);
							return
								BGl_iszd2azf3z21zz__objectz00(BgL_obj3461z00_2380,
								BGl_rtl_purez00zzsaw_defsz00);
						}
					}
				else
					{	/* SawMill/remove.scm 130 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_removez00()
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 1 */
			{	/* SawMill/remove.scm 7 */
				obj_t BgL_arg4420z00_1404;

				obj_t BgL_arg4421z00_1405;

				obj_t BgL_arg4424z00_1408;

				BgL_arg4420z00_1404 = CNST_TABLE_REF(((long) 1));
				BgL_arg4421z00_1405 = BGl_blockz00zzsaw_defsz00;
				{	/* SawMill/remove.scm 7 */
					obj_t BgL_v4266z00_1409;

					BgL_v4266z00_1409 = create_vector((int) (((long) 0)));
					BgL_arg4424z00_1408 = BgL_v4266z00_1409;
				}
				BGl_defcollectz00zzsaw_removez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4420z00_1404,
					BgL_arg4421z00_1405, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2defcollectzd2envz52zzsaw_removez00,
					BGl_defcollectzd2nilzd2envz00zzsaw_removez00,
					BGl_defcollectzf3zd2envz21zzsaw_removez00, ((long) 151050294), BFALSE,
					BFALSE, BgL_arg4424z00_1408);
			}
			{	/* SawMill/remove.scm 8 */
				obj_t BgL_arg4425z00_1410;

				obj_t BgL_arg4426z00_1411;

				obj_t BgL_arg4429z00_1414;

				BgL_arg4425z00_1410 = CNST_TABLE_REF(((long) 2));
				BgL_arg4426z00_1411 = BGl_blockz00zzsaw_defsz00;
				{	/* SawMill/remove.scm 8 */
					obj_t BgL_v4267z00_1415;

					BgL_v4267z00_1415 = create_vector((int) (((long) 0)));
					BgL_arg4429z00_1414 = BgL_v4267z00_1415;
				}
				BGl_rcollectz00zzsaw_removez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4425z00_1410,
					BgL_arg4426z00_1411, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rcollectzd2envz52zzsaw_removez00,
					BGl_rcollectzd2nilzd2envz00zzsaw_removez00,
					BGl_rcollectzf3zd2envz21zzsaw_removez00, ((long) 68351161), BFALSE,
					BFALSE, BgL_arg4429z00_1414);
			}
			{	/* SawMill/remove.scm 9 */
				obj_t BgL_arg4430z00_1416;

				obj_t BgL_arg4431z00_1417;

				obj_t BgL_arg4434z00_1420;

				BgL_arg4430z00_1416 = CNST_TABLE_REF(((long) 3));
				BgL_arg4431z00_1417 = BGl_blockz00zzsaw_defsz00;
				{	/* SawMill/remove.scm 9 */
					obj_t BgL_v4268z00_1421;

					BgL_v4268z00_1421 = create_vector((int) (((long) 0)));
					BgL_arg4434z00_1420 = BgL_v4268z00_1421;
				}
				BGl_ucollectz00zzsaw_removez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4430z00_1416,
					BgL_arg4431z00_1417, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2ucollectzd2envz52zzsaw_removez00,
					BGl_ucollectzd2nilzd2envz00zzsaw_removez00,
					BGl_ucollectzf3zd2envz21zzsaw_removez00, ((long) 82700068), BFALSE,
					BFALSE, BgL_arg4434z00_1420);
			}
			{	/* SawMill/remove.scm 10 */
				obj_t BgL_arg4435z00_1422;

				obj_t BgL_arg4437z00_1423;

				obj_t BgL_arg4440z00_1426;

				BgL_arg4435z00_1422 = CNST_TABLE_REF(((long) 4));
				BgL_arg4437z00_1423 = BGl_rtl_insz00zzsaw_defsz00;
				{	/* SawMill/remove.scm 10 */
					obj_t BgL_v4269z00_1427;

					BgL_v4269z00_1427 = create_vector((int) (((long) 0)));
					BgL_arg4440z00_1426 = BgL_v4269z00_1427;
				}
				BGl_removedz00zzsaw_removez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4435z00_1422,
					BgL_arg4437z00_1423, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2removedzd2envz52zzsaw_removez00,
					BGl_removedzd2nilzd2envz00zzsaw_removez00,
					BGl_removedzf3zd2envz21zzsaw_removez00, ((long) 67354859), BFALSE,
					BFALSE, BgL_arg4440z00_1426);
			}
			{	/* SawMill/remove.scm 11 */
				obj_t BgL_arg4441z00_1428;

				obj_t BgL_arg4442z00_1429;

				obj_t BgL_arg4445z00_1432;

				BgL_arg4441z00_1428 = CNST_TABLE_REF(((long) 5));
				BgL_arg4442z00_1429 = BGl_blockz00zzsaw_defsz00;
				{	/* SawMill/remove.scm 11 */
					obj_t BgL_v4270z00_1433;

					BgL_v4270z00_1433 = create_vector((int) (((long) 0)));
					BgL_arg4445z00_1432 = BgL_v4270z00_1433;
				}
				BGl_visitedz00zzsaw_removez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4441z00_1428,
					BgL_arg4442z00_1429, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2visitedzd2envz52zzsaw_removez00,
					BGl_visitedzd2nilzd2envz00zzsaw_removez00,
					BGl_visitedzf3zd2envz21zzsaw_removez00, ((long) 69751649), BFALSE,
					BFALSE, BgL_arg4445z00_1432);
			}
			{	/* SawMill/remove.scm 12 */
				obj_t BgL_arg4446z00_1434;

				obj_t BgL_arg4447z00_1435;

				obj_t BgL_arg4450z00_1438;

				BgL_arg4446z00_1434 = CNST_TABLE_REF(((long) 6));
				BgL_arg4447z00_1435 = BGl_blockz00zzsaw_defsz00;
				{	/* SawMill/remove.scm 12 */
					obj_t BgL_v4271z00_1439;

					BgL_v4271z00_1439 = create_vector((int) (((long) 0)));
					BgL_arg4450z00_1438 = BgL_v4271z00_1439;
				}
				BGl_bremovedz00zzsaw_removez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4446z00_1434,
					BgL_arg4447z00_1435, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2bremovedzd2envz52zzsaw_removez00,
					BGl_bremovedzd2nilzd2envz00zzsaw_removez00,
					BGl_bremovedzf3zd2envz21zzsaw_removez00, ((long) 536085821), BFALSE,
					BFALSE, BgL_arg4450z00_1438);
			}
			{	/* SawMill/remove.scm 13 */
				obj_t BgL_arg4451z00_1440;

				obj_t BgL_arg4452z00_1441;

				obj_t BgL_arg4455z00_1444;

				BgL_arg4451z00_1440 = CNST_TABLE_REF(((long) 7));
				BgL_arg4452z00_1441 = BGl_rtl_regz00zzsaw_defsz00;
				{	/* SawMill/remove.scm 13 */
					obj_t BgL_v4272z00_1445;

					BgL_v4272z00_1445 = create_vector((int) (((long) 0)));
					BgL_arg4455z00_1444 = BgL_v4272z00_1445;
				}
				BGl_cregz00zzsaw_removez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4451z00_1440,
					BgL_arg4452z00_1441, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2cregzd2envz52zzsaw_removez00,
					BGl_cregzd2nilzd2envz00zzsaw_removez00,
					BGl_cregzf3zd2envz21zzsaw_removez00, ((long) 7233760), BFALSE, BFALSE,
					BgL_arg4455z00_1444);
			}
			BGl_z52thezd2cregzd2nilz52zzsaw_removez00 = BUNSPEC;
			BGl_z52thezd2bremovedzd2nilz52zzsaw_removez00 = BUNSPEC;
			BGl_z52thezd2visitedzd2nilz52zzsaw_removez00 = BUNSPEC;
			BGl_z52thezd2removedzd2nilz52zzsaw_removez00 = BUNSPEC;
			BGl_z52thezd2ucollectzd2nilz52zzsaw_removez00 = BUNSPEC;
			BGl_z52thezd2rcollectzd2nilz52zzsaw_removez00 = BUNSPEC;
			return (BGl_z52thezd2defcollectzd2nilz52zzsaw_removez00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* _creg? */
	obj_t BGl__cregzf3zf3zzsaw_removez00(obj_t BgL_envz00_2765,
		obj_t BgL_obj4183z00_2766)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 13 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4183z00_2766,
					BGl_cregz00zzsaw_removez00));
		}
	}



/* _%allocate-creg */
	obj_t BGl__z52allocatezd2cregz80zzsaw_removez00(obj_t BgL_envz00_2763)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 13 */
			{	/* SawMill/remove.scm 13 */
				BgL_rtl_regz00_bglt BgL_auxz00_3317;

				{	/* SawMill/remove.scm 13 */
					BgL_rtl_regz00_bglt BgL_res4712z00_2838;

					{	/* SawMill/remove.scm 13 */
						BgL_rtl_regz00_bglt BgL_new4176z00_2836;

						BgL_new4176z00_2836 =
							((BgL_rtl_regz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_regz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4176z00_2836),
							BGl_classzd2numzd2zz__objectz00(BGl_cregz00zzsaw_removez00));
						{	/* SawMill/remove.scm 13 */
							BgL_objectz00_bglt BgL_auxz00_3322;

							BgL_auxz00_3322 = (BgL_objectz00_bglt) (BgL_new4176z00_2836);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3322, BFALSE);
						}
						BgL_res4712z00_2838 = BgL_new4176z00_2836;
					}
					BgL_auxz00_3317 = BgL_res4712z00_2838;
				}
				return (obj_t) (BgL_auxz00_3317);
			}
		}
	}



/* creg-nil */
	BgL_cregz00_bglt BGl_cregzd2nilzd2zzsaw_removez00()
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 13 */
			if ((BGl_z52thezd2cregzd2nilz52zzsaw_removez00 == BUNSPEC))
				{	/* SawMill/remove.scm 13 */
					{	/* SawMill/remove.scm 13 */
						BgL_rtl_regz00_bglt BgL_res4662z00_2398;

						{	/* SawMill/remove.scm 13 */
							BgL_rtl_regz00_bglt BgL_new3274z00_2394;

							BgL_new3274z00_2394 =
								((BgL_rtl_regz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_regz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3274z00_2394),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_regz00zzsaw_defsz00));
							{	/* SawMill/remove.scm 13 */
								BgL_objectz00_bglt BgL_auxz00_3332;

								BgL_auxz00_3332 = (BgL_objectz00_bglt) (BgL_new3274z00_2394);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3332, BFALSE);
							}
							BgL_res4662z00_2398 = BgL_new3274z00_2394;
						}
						BGl_z52thezd2cregzd2nilz52zzsaw_removez00 =
							(obj_t) (BgL_res4662z00_2398);
					}
					{	/* SawMill/remove.scm 13 */
						BgL_typez00_bglt BgL_arg4460z00_1456;

						BgL_arg4460z00_1456 = BGl_typezd2nilzd2zztype_typez00();
						{	/* SawMill/remove.scm 13 */
							BgL_rtl_regz00_bglt BgL_res4663z00_2412;

							{	/* SawMill/remove.scm 13 */
								BgL_rtl_regz00_bglt BgL_new3266z00_2399;

								BgL_new3266z00_2399 =
									(BgL_rtl_regz00_bglt)
									(BGl_z52thezd2cregzd2nilz52zzsaw_removez00);
								{	/* SawMill/remove.scm 13 */
									BgL_typez00_bglt BgL_type3260z00_2406;

									obj_t BgL_var3261z00_2407;

									obj_t BgL_onexprzf33262zf3_2408;

									obj_t BgL_name3263z00_2409;

									obj_t BgL_key3264z00_2410;

									obj_t BgL_hardware3265z00_2411;

									BgL_type3260z00_2406 = BgL_arg4460z00_1456;
									BgL_var3261z00_2407 = BUNSPEC;
									BgL_onexprzf33262zf3_2408 = BUNSPEC;
									BgL_name3263z00_2409 = BUNSPEC;
									BgL_key3264z00_2410 = BUNSPEC;
									BgL_hardware3265z00_2411 = BUNSPEC;
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3266z00_2399))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3260z00_2406), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3266z00_2399))->
											BgL_varz00) = ((obj_t) BgL_var3261z00_2407), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3266z00_2399))->
											BgL_onexprzf3zf3) =
										((obj_t) BgL_onexprzf33262zf3_2408), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3266z00_2399))->
											BgL_namez00) = ((obj_t) BgL_name3263z00_2409), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3266z00_2399))->
											BgL_keyz00) = ((obj_t) BgL_key3264z00_2410), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3266z00_2399))->
											BgL_hardwarez00) =
										((obj_t) BgL_hardware3265z00_2411), BUNSPEC);
									BgL_res4663z00_2412 = BgL_new3266z00_2399;
							}} BgL_res4663z00_2412;
					}}
					{	/* SawMill/remove.scm 13 */
						long BgL_arg4461z00_1457;

						BgL_arg4461z00_1457 =
							BGl_classzd2numzd2zz__objectz00(BGl_cregz00zzsaw_removez00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BGl_z52thezd2cregzd2nilz52zzsaw_removez00),
							BgL_arg4461z00_1457);
					}
					{	/* SawMill/remove.scm 13 */
						BgL_cregz00_bglt BgL_arg4462z00_1458;

						{	/* SawMill/remove.scm 13 */
							BgL_cregz00_bglt BgL_res4665z00_2424;

							{	/* SawMill/remove.scm 13 */
								BgL_cregz00_bglt BgL_new4158z00_2417;

								BgL_new4158z00_2417 =
									((BgL_cregz00_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_cregz00_bgl))));
								{	/* SawMill/remove.scm 13 */
									BgL_cregz00_bglt BgL_res4664z00_2423;

									{	/* SawMill/remove.scm 13 */
										BgL_cregz00_bglt BgL_new4172z00_2418;

										BgL_new4172z00_2418 = BgL_new4158z00_2417;
										{	/* SawMill/remove.scm 13 */
											obj_t BgL_defs4170z00_2421;

											obj_t BgL_nbuses4171z00_2422;

											BgL_defs4170z00_2421 = BUNSPEC;
											BgL_nbuses4171z00_2422 = BUNSPEC;
											((((BgL_cregz00_bglt) CREF(BgL_new4172z00_2418))->
													BgL_defsz00) =
												((obj_t) BgL_defs4170z00_2421), BUNSPEC);
											((((BgL_cregz00_bglt) CREF(BgL_new4172z00_2418))->
													BgL_nbusesz00) =
												((obj_t) BgL_nbuses4171z00_2422), BUNSPEC);
											BgL_res4664z00_2423 = BgL_new4172z00_2418;
									}} BgL_res4664z00_2423;
								}
								BgL_res4665z00_2424 = BgL_new4158z00_2417;
							}
							BgL_arg4462z00_1458 = BgL_res4665z00_2424;
						}
						{	/* SawMill/remove.scm 13 */
							obj_t BgL_auxz00_3352;

							BgL_objectz00_bglt BgL_auxz00_3350;

							BgL_auxz00_3352 = (obj_t) (BgL_arg4462z00_1458);
							BgL_auxz00_3350 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2cregzd2nilz52zzsaw_removez00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3350, BgL_auxz00_3352);
				}}}
			else
				{	/* SawMill/remove.scm 13 */
					BFALSE;
				}
			return (BgL_cregz00_bglt) (BGl_z52thezd2cregzd2nilz52zzsaw_removez00);
		}
	}



/* _creg-nil */
	obj_t BGl__cregzd2nilzd2zzsaw_removez00(obj_t BgL_envz00_2764)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 13 */
			return (obj_t) (BGl_cregzd2nilzd2zzsaw_removez00());
		}
	}



/* _bremoved? */
	obj_t BGl__bremovedzf3zf3zzsaw_removez00(obj_t BgL_envz00_2761,
		obj_t BgL_obj4139z00_2762)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 12 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4139z00_2762,
					BGl_bremovedz00zzsaw_removez00));
		}
	}



/* widening-bremoved */
	BgL_bremovedz00_bglt BGl_wideningzd2bremovedzd2zzsaw_removez00()
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 12 */
			{	/* SawMill/remove.scm 12 */
				BgL_bremovedz00_bglt BgL_new4122z00_1459;

				BgL_new4122z00_1459 =
					((BgL_bremovedz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_bremovedz00_bgl))));
				return BgL_new4122z00_1459;
			}
		}
	}



/* _%allocate-bremoved */
	obj_t BGl__z52allocatezd2bremovedz80zzsaw_removez00(obj_t BgL_envz00_2759)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 12 */
			{	/* SawMill/remove.scm 12 */
				BgL_blockz00_bglt BgL_auxz00_3361;

				{	/* SawMill/remove.scm 12 */
					BgL_blockz00_bglt BgL_res4713z00_2844;

					{	/* SawMill/remove.scm 12 */
						BgL_blockz00_bglt BgL_new4132z00_2842;

						BgL_new4132z00_2842 =
							((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_blockz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4132z00_2842),
							BGl_classzd2numzd2zz__objectz00(BGl_bremovedz00zzsaw_removez00));
						{	/* SawMill/remove.scm 12 */
							BgL_objectz00_bglt BgL_auxz00_3366;

							BgL_auxz00_3366 = (BgL_objectz00_bglt) (BgL_new4132z00_2842);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3366, BFALSE);
						}
						BgL_res4713z00_2844 = BgL_new4132z00_2842;
					}
					BgL_auxz00_3361 = BgL_res4713z00_2844;
				}
				return (obj_t) (BgL_auxz00_3361);
			}
		}
	}



/* bremoved-nil */
	BgL_bremovedz00_bglt BGl_bremovedzd2nilzd2zzsaw_removez00()
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 12 */
			if ((BGl_z52thezd2bremovedzd2nilz52zzsaw_removez00 == BUNSPEC))
				{	/* SawMill/remove.scm 12 */
					{	/* SawMill/remove.scm 12 */
						BgL_blockz00_bglt BgL_res4666z00_2434;

						{	/* SawMill/remove.scm 12 */
							BgL_blockz00_bglt BgL_new3957z00_2430;

							BgL_new3957z00_2430 =
								((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_blockz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3957z00_2430),
								BGl_classzd2numzd2zz__objectz00(BGl_blockz00zzsaw_defsz00));
							{	/* SawMill/remove.scm 12 */
								BgL_objectz00_bglt BgL_auxz00_3376;

								BgL_auxz00_3376 = (BgL_objectz00_bglt) (BgL_new3957z00_2430);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3376, BFALSE);
							}
							BgL_res4666z00_2434 = BgL_new3957z00_2430;
						}
						BGl_z52thezd2bremovedzd2nilz52zzsaw_removez00 =
							(obj_t) (BgL_res4666z00_2434);
					}
					{	/* SawMill/remove.scm 12 */
						obj_t BgL_arg4470z00_1470;

						BgL_arg4470z00_1470 = MAKE_PAIR(BFALSE, BFALSE);
						{	/* SawMill/remove.scm 12 */
							BgL_blockz00_bglt BgL_res4667z00_2444;

							{	/* SawMill/remove.scm 12 */
								BgL_blockz00_bglt BgL_new3951z00_2435;

								int BgL_label3947z00_2436;

								BgL_new3951z00_2435 =
									(BgL_blockz00_bglt)
									(BGl_z52thezd2bremovedzd2nilz52zzsaw_removez00);
								BgL_label3947z00_2436 = (int) (((long) 0));
								{	/* SawMill/remove.scm 12 */
									int BgL_label3947z00_2440;

									obj_t BgL_preds3948z00_2441;

									obj_t BgL_succs3949z00_2442;

									obj_t BgL_first3950z00_2443;

									BgL_label3947z00_2440 = BgL_label3947z00_2436;
									BgL_preds3948z00_2441 = BNIL;
									BgL_succs3949z00_2442 = BNIL;
									BgL_first3950z00_2443 = BgL_arg4470z00_1470;
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2435))->
											BgL_labelz00) = ((int) BgL_label3947z00_2440), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2435))->
											BgL_predsz00) = ((obj_t) BgL_preds3948z00_2441), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2435))->
											BgL_succsz00) = ((obj_t) BgL_succs3949z00_2442), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2435))->
											BgL_firstz00) = ((obj_t) BgL_first3950z00_2443), BUNSPEC);
									BgL_res4667z00_2444 = BgL_new3951z00_2435;
							}} BgL_res4667z00_2444;
					}}
					{	/* SawMill/remove.scm 12 */
						long BgL_arg4471z00_1471;

						BgL_arg4471z00_1471 =
							BGl_classzd2numzd2zz__objectz00(BGl_bremovedz00zzsaw_removez00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2bremovedzd2nilz52zzsaw_removez00),
							BgL_arg4471z00_1471);
					}
					{	/* SawMill/remove.scm 12 */
						BgL_bremovedz00_bglt BgL_arg4472z00_1472;

						BgL_arg4472z00_1472 = BGl_wideningzd2bremovedzd2zzsaw_removez00();
						{	/* SawMill/remove.scm 12 */
							obj_t BgL_auxz00_3393;

							BgL_objectz00_bglt BgL_auxz00_3391;

							BgL_auxz00_3393 = (obj_t) (BgL_arg4472z00_1472);
							BgL_auxz00_3391 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2bremovedzd2nilz52zzsaw_removez00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3391, BgL_auxz00_3393);
				}}}
			else
				{	/* SawMill/remove.scm 12 */
					BFALSE;
				}
			return
				(BgL_bremovedz00_bglt) (BGl_z52thezd2bremovedzd2nilz52zzsaw_removez00);
		}
	}



/* _bremoved-nil */
	obj_t BGl__bremovedzd2nilzd2zzsaw_removez00(obj_t BgL_envz00_2760)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 12 */
			return (obj_t) (BGl_bremovedzd2nilzd2zzsaw_removez00());
		}
	}



/* _visited? */
	obj_t BGl__visitedzf3zf3zzsaw_removez00(obj_t BgL_envz00_2757,
		obj_t BgL_obj4107z00_2758)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 11 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4107z00_2758,
					BGl_visitedz00zzsaw_removez00));
		}
	}



/* widening-visited */
	BgL_visitedz00_bglt BGl_wideningzd2visitedzd2zzsaw_removez00()
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 11 */
			{	/* SawMill/remove.scm 11 */
				BgL_visitedz00_bglt BgL_new4090z00_1473;

				BgL_new4090z00_1473 =
					((BgL_visitedz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_visitedz00_bgl))));
				return BgL_new4090z00_1473;
			}
		}
	}



/* _%allocate-visited */
	obj_t BGl__z52allocatezd2visitedz80zzsaw_removez00(obj_t BgL_envz00_2755)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 11 */
			{	/* SawMill/remove.scm 11 */
				BgL_blockz00_bglt BgL_auxz00_3402;

				{	/* SawMill/remove.scm 11 */
					BgL_blockz00_bglt BgL_res4714z00_2850;

					{	/* SawMill/remove.scm 11 */
						BgL_blockz00_bglt BgL_new4100z00_2848;

						BgL_new4100z00_2848 =
							((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_blockz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4100z00_2848),
							BGl_classzd2numzd2zz__objectz00(BGl_visitedz00zzsaw_removez00));
						{	/* SawMill/remove.scm 11 */
							BgL_objectz00_bglt BgL_auxz00_3407;

							BgL_auxz00_3407 = (BgL_objectz00_bglt) (BgL_new4100z00_2848);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3407, BFALSE);
						}
						BgL_res4714z00_2850 = BgL_new4100z00_2848;
					}
					BgL_auxz00_3402 = BgL_res4714z00_2850;
				}
				return (obj_t) (BgL_auxz00_3402);
			}
		}
	}



/* visited-nil */
	BgL_visitedz00_bglt BGl_visitedzd2nilzd2zzsaw_removez00()
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 11 */
			if ((BGl_z52thezd2visitedzd2nilz52zzsaw_removez00 == BUNSPEC))
				{	/* SawMill/remove.scm 11 */
					{	/* SawMill/remove.scm 11 */
						BgL_blockz00_bglt BgL_res4668z00_2456;

						{	/* SawMill/remove.scm 11 */
							BgL_blockz00_bglt BgL_new3957z00_2452;

							BgL_new3957z00_2452 =
								((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_blockz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3957z00_2452),
								BGl_classzd2numzd2zz__objectz00(BGl_blockz00zzsaw_defsz00));
							{	/* SawMill/remove.scm 11 */
								BgL_objectz00_bglt BgL_auxz00_3417;

								BgL_auxz00_3417 = (BgL_objectz00_bglt) (BgL_new3957z00_2452);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3417, BFALSE);
							}
							BgL_res4668z00_2456 = BgL_new3957z00_2452;
						}
						BGl_z52thezd2visitedzd2nilz52zzsaw_removez00 =
							(obj_t) (BgL_res4668z00_2456);
					}
					{	/* SawMill/remove.scm 11 */
						obj_t BgL_arg4480z00_1484;

						BgL_arg4480z00_1484 = MAKE_PAIR(BFALSE, BFALSE);
						{	/* SawMill/remove.scm 11 */
							BgL_blockz00_bglt BgL_res4669z00_2466;

							{	/* SawMill/remove.scm 11 */
								BgL_blockz00_bglt BgL_new3951z00_2457;

								int BgL_label3947z00_2458;

								BgL_new3951z00_2457 =
									(BgL_blockz00_bglt)
									(BGl_z52thezd2visitedzd2nilz52zzsaw_removez00);
								BgL_label3947z00_2458 = (int) (((long) 0));
								{	/* SawMill/remove.scm 11 */
									int BgL_label3947z00_2462;

									obj_t BgL_preds3948z00_2463;

									obj_t BgL_succs3949z00_2464;

									obj_t BgL_first3950z00_2465;

									BgL_label3947z00_2462 = BgL_label3947z00_2458;
									BgL_preds3948z00_2463 = BNIL;
									BgL_succs3949z00_2464 = BNIL;
									BgL_first3950z00_2465 = BgL_arg4480z00_1484;
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2457))->
											BgL_labelz00) = ((int) BgL_label3947z00_2462), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2457))->
											BgL_predsz00) = ((obj_t) BgL_preds3948z00_2463), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2457))->
											BgL_succsz00) = ((obj_t) BgL_succs3949z00_2464), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2457))->
											BgL_firstz00) = ((obj_t) BgL_first3950z00_2465), BUNSPEC);
									BgL_res4669z00_2466 = BgL_new3951z00_2457;
							}} BgL_res4669z00_2466;
					}}
					{	/* SawMill/remove.scm 11 */
						long BgL_arg4481z00_1485;

						BgL_arg4481z00_1485 =
							BGl_classzd2numzd2zz__objectz00(BGl_visitedz00zzsaw_removez00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2visitedzd2nilz52zzsaw_removez00),
							BgL_arg4481z00_1485);
					}
					{	/* SawMill/remove.scm 11 */
						BgL_visitedz00_bglt BgL_arg4482z00_1486;

						BgL_arg4482z00_1486 = BGl_wideningzd2visitedzd2zzsaw_removez00();
						{	/* SawMill/remove.scm 11 */
							obj_t BgL_auxz00_3434;

							BgL_objectz00_bglt BgL_auxz00_3432;

							BgL_auxz00_3434 = (obj_t) (BgL_arg4482z00_1486);
							BgL_auxz00_3432 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2visitedzd2nilz52zzsaw_removez00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3432, BgL_auxz00_3434);
				}}}
			else
				{	/* SawMill/remove.scm 11 */
					BFALSE;
				}
			return
				(BgL_visitedz00_bglt) (BGl_z52thezd2visitedzd2nilz52zzsaw_removez00);
		}
	}



/* _visited-nil */
	obj_t BGl__visitedzd2nilzd2zzsaw_removez00(obj_t BgL_envz00_2756)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 11 */
			return (obj_t) (BGl_visitedzd2nilzd2zzsaw_removez00());
		}
	}



/* _removed? */
	obj_t BGl__removedzf3zf3zzsaw_removez00(obj_t BgL_envz00_2753,
		obj_t BgL_obj4073z00_2754)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 10 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4073z00_2754,
					BGl_removedz00zzsaw_removez00));
		}
	}



/* widening-removed */
	BgL_removedz00_bglt BGl_wideningzd2removedzd2zzsaw_removez00()
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 10 */
			{	/* SawMill/remove.scm 10 */
				BgL_removedz00_bglt BgL_new4055z00_1487;

				BgL_new4055z00_1487 =
					((BgL_removedz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_removedz00_bgl))));
				return BgL_new4055z00_1487;
			}
		}
	}



/* _%allocate-removed */
	obj_t BGl__z52allocatezd2removedz80zzsaw_removez00(obj_t BgL_envz00_2751)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 10 */
			{	/* SawMill/remove.scm 10 */
				BgL_rtl_insz00_bglt BgL_auxz00_3443;

				{	/* SawMill/remove.scm 10 */
					BgL_rtl_insz00_bglt BgL_res4715z00_2856;

					{	/* SawMill/remove.scm 10 */
						BgL_rtl_insz00_bglt BgL_new4066z00_2854;

						BgL_new4066z00_2854 =
							((BgL_rtl_insz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_insz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4066z00_2854),
							BGl_classzd2numzd2zz__objectz00(BGl_removedz00zzsaw_removez00));
						{	/* SawMill/remove.scm 10 */
							BgL_objectz00_bglt BgL_auxz00_3448;

							BgL_auxz00_3448 = (BgL_objectz00_bglt) (BgL_new4066z00_2854);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3448, BFALSE);
						}
						BgL_res4715z00_2856 = BgL_new4066z00_2854;
					}
					BgL_auxz00_3443 = BgL_res4715z00_2856;
				}
				return (obj_t) (BgL_auxz00_3443);
			}
		}
	}



/* removed-nil */
	BgL_removedz00_bglt BGl_removedzd2nilzd2zzsaw_removez00()
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 10 */
			if ((BGl_z52thezd2removedzd2nilz52zzsaw_removez00 == BUNSPEC))
				{	/* SawMill/remove.scm 10 */
					{	/* SawMill/remove.scm 10 */
						BgL_rtl_insz00_bglt BgL_res4670z00_2478;

						{	/* SawMill/remove.scm 10 */
							BgL_rtl_insz00_bglt BgL_new3929z00_2474;

							BgL_new3929z00_2474 =
								((BgL_rtl_insz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_insz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3929z00_2474),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_insz00zzsaw_defsz00));
							{	/* SawMill/remove.scm 10 */
								BgL_objectz00_bglt BgL_auxz00_3458;

								BgL_auxz00_3458 = (BgL_objectz00_bglt) (BgL_new3929z00_2474);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3458, BFALSE);
							}
							BgL_res4670z00_2478 = BgL_new3929z00_2474;
						}
						BGl_z52thezd2removedzd2nilz52zzsaw_removez00 =
							(obj_t) (BgL_res4670z00_2478);
					}
					{	/* SawMill/remove.scm 10 */
						BgL_rtl_funz00_bglt BgL_arg4488z00_1496;

						BgL_arg4488z00_1496 = BGl_rtl_funzd2nilzd2zzsaw_defsz00();
						{	/* SawMill/remove.scm 10 */
							BgL_rtl_insz00_bglt BgL_res4671z00_2490;

							{	/* SawMill/remove.scm 10 */
								BgL_rtl_insz00_bglt BgL_new3922z00_2479;

								BgL_new3922z00_2479 =
									(BgL_rtl_insz00_bglt)
									(BGl_z52thezd2removedzd2nilz52zzsaw_removez00);
								{	/* SawMill/remove.scm 10 */
									obj_t BgL_loc3917z00_2485;

									obj_t BgL_z52spill3918z52_2486;

									obj_t BgL_dest3919z00_2487;

									BgL_rtl_funz00_bglt BgL_fun3920z00_2488;

									obj_t BgL_args3921z00_2489;

									BgL_loc3917z00_2485 = BUNSPEC;
									BgL_z52spill3918z52_2486 = BNIL;
									BgL_dest3919z00_2487 = BUNSPEC;
									BgL_fun3920z00_2488 = BgL_arg4488z00_1496;
									BgL_args3921z00_2489 = BNIL;
									((((BgL_rtl_insz00_bglt) CREF(BgL_new3922z00_2479))->
											BgL_locz00) = ((obj_t) BgL_loc3917z00_2485), BUNSPEC);
									((((BgL_rtl_insz00_bglt) CREF(BgL_new3922z00_2479))->
											BgL_z52spillz52) =
										((obj_t) BgL_z52spill3918z52_2486), BUNSPEC);
									((((BgL_rtl_insz00_bglt) CREF(BgL_new3922z00_2479))->
											BgL_destz00) = ((obj_t) BgL_dest3919z00_2487), BUNSPEC);
									((((BgL_rtl_insz00_bglt) CREF(BgL_new3922z00_2479))->
											BgL_funz00) =
										((BgL_rtl_funz00_bglt) BgL_fun3920z00_2488), BUNSPEC);
									((((BgL_rtl_insz00_bglt) CREF(BgL_new3922z00_2479))->
											BgL_argsz00) = ((obj_t) BgL_args3921z00_2489), BUNSPEC);
									BgL_res4671z00_2490 = BgL_new3922z00_2479;
							}} BgL_res4671z00_2490;
					}}
					{	/* SawMill/remove.scm 10 */
						long BgL_arg4490z00_1498;

						BgL_arg4490z00_1498 =
							BGl_classzd2numzd2zz__objectz00(BGl_removedz00zzsaw_removez00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2removedzd2nilz52zzsaw_removez00),
							BgL_arg4490z00_1498);
					}
					{	/* SawMill/remove.scm 10 */
						BgL_removedz00_bglt BgL_arg4491z00_1499;

						BgL_arg4491z00_1499 = BGl_wideningzd2removedzd2zzsaw_removez00();
						{	/* SawMill/remove.scm 10 */
							obj_t BgL_auxz00_3475;

							BgL_objectz00_bglt BgL_auxz00_3473;

							BgL_auxz00_3475 = (obj_t) (BgL_arg4491z00_1499);
							BgL_auxz00_3473 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2removedzd2nilz52zzsaw_removez00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3473, BgL_auxz00_3475);
				}}}
			else
				{	/* SawMill/remove.scm 10 */
					BFALSE;
				}
			return
				(BgL_removedz00_bglt) (BGl_z52thezd2removedzd2nilz52zzsaw_removez00);
		}
	}



/* _removed-nil */
	obj_t BGl__removedzd2nilzd2zzsaw_removez00(obj_t BgL_envz00_2752)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 10 */
			return (obj_t) (BGl_removedzd2nilzd2zzsaw_removez00());
		}
	}



/* _ucollect? */
	obj_t BGl__ucollectzf3zf3zzsaw_removez00(obj_t BgL_envz00_2749,
		obj_t BgL_obj4040z00_2750)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 9 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4040z00_2750,
					BGl_ucollectz00zzsaw_removez00));
		}
	}



/* widening-ucollect */
	BgL_ucollectz00_bglt BGl_wideningzd2ucollectzd2zzsaw_removez00()
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 9 */
			{	/* SawMill/remove.scm 9 */
				BgL_ucollectz00_bglt BgL_new4023z00_1500;

				BgL_new4023z00_1500 =
					((BgL_ucollectz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_ucollectz00_bgl))));
				return BgL_new4023z00_1500;
			}
		}
	}



/* _%allocate-ucollect */
	obj_t BGl__z52allocatezd2ucollectz80zzsaw_removez00(obj_t BgL_envz00_2747)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 9 */
			{	/* SawMill/remove.scm 9 */
				BgL_blockz00_bglt BgL_auxz00_3484;

				{	/* SawMill/remove.scm 9 */
					BgL_blockz00_bglt BgL_res4716z00_2862;

					{	/* SawMill/remove.scm 9 */
						BgL_blockz00_bglt BgL_new4033z00_2860;

						BgL_new4033z00_2860 =
							((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_blockz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4033z00_2860),
							BGl_classzd2numzd2zz__objectz00(BGl_ucollectz00zzsaw_removez00));
						{	/* SawMill/remove.scm 9 */
							BgL_objectz00_bglt BgL_auxz00_3489;

							BgL_auxz00_3489 = (BgL_objectz00_bglt) (BgL_new4033z00_2860);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3489, BFALSE);
						}
						BgL_res4716z00_2862 = BgL_new4033z00_2860;
					}
					BgL_auxz00_3484 = BgL_res4716z00_2862;
				}
				return (obj_t) (BgL_auxz00_3484);
			}
		}
	}



/* ucollect-nil */
	BgL_ucollectz00_bglt BGl_ucollectzd2nilzd2zzsaw_removez00()
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 9 */
			if ((BGl_z52thezd2ucollectzd2nilz52zzsaw_removez00 == BUNSPEC))
				{	/* SawMill/remove.scm 9 */
					{	/* SawMill/remove.scm 9 */
						BgL_blockz00_bglt BgL_res4672z00_2502;

						{	/* SawMill/remove.scm 9 */
							BgL_blockz00_bglt BgL_new3957z00_2498;

							BgL_new3957z00_2498 =
								((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_blockz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3957z00_2498),
								BGl_classzd2numzd2zz__objectz00(BGl_blockz00zzsaw_defsz00));
							{	/* SawMill/remove.scm 9 */
								BgL_objectz00_bglt BgL_auxz00_3499;

								BgL_auxz00_3499 = (BgL_objectz00_bglt) (BgL_new3957z00_2498);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3499, BFALSE);
							}
							BgL_res4672z00_2502 = BgL_new3957z00_2498;
						}
						BGl_z52thezd2ucollectzd2nilz52zzsaw_removez00 =
							(obj_t) (BgL_res4672z00_2502);
					}
					{	/* SawMill/remove.scm 9 */
						obj_t BgL_arg4499z00_1511;

						BgL_arg4499z00_1511 = MAKE_PAIR(BFALSE, BFALSE);
						{	/* SawMill/remove.scm 9 */
							BgL_blockz00_bglt BgL_res4673z00_2512;

							{	/* SawMill/remove.scm 9 */
								BgL_blockz00_bglt BgL_new3951z00_2503;

								int BgL_label3947z00_2504;

								BgL_new3951z00_2503 =
									(BgL_blockz00_bglt)
									(BGl_z52thezd2ucollectzd2nilz52zzsaw_removez00);
								BgL_label3947z00_2504 = (int) (((long) 0));
								{	/* SawMill/remove.scm 9 */
									int BgL_label3947z00_2508;

									obj_t BgL_preds3948z00_2509;

									obj_t BgL_succs3949z00_2510;

									obj_t BgL_first3950z00_2511;

									BgL_label3947z00_2508 = BgL_label3947z00_2504;
									BgL_preds3948z00_2509 = BNIL;
									BgL_succs3949z00_2510 = BNIL;
									BgL_first3950z00_2511 = BgL_arg4499z00_1511;
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2503))->
											BgL_labelz00) = ((int) BgL_label3947z00_2508), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2503))->
											BgL_predsz00) = ((obj_t) BgL_preds3948z00_2509), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2503))->
											BgL_succsz00) = ((obj_t) BgL_succs3949z00_2510), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2503))->
											BgL_firstz00) = ((obj_t) BgL_first3950z00_2511), BUNSPEC);
									BgL_res4673z00_2512 = BgL_new3951z00_2503;
							}} BgL_res4673z00_2512;
					}}
					{	/* SawMill/remove.scm 9 */
						long BgL_arg4500z00_1512;

						BgL_arg4500z00_1512 =
							BGl_classzd2numzd2zz__objectz00(BGl_ucollectz00zzsaw_removez00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2ucollectzd2nilz52zzsaw_removez00),
							BgL_arg4500z00_1512);
					}
					{	/* SawMill/remove.scm 9 */
						BgL_ucollectz00_bglt BgL_arg4501z00_1513;

						BgL_arg4501z00_1513 = BGl_wideningzd2ucollectzd2zzsaw_removez00();
						{	/* SawMill/remove.scm 9 */
							obj_t BgL_auxz00_3516;

							BgL_objectz00_bglt BgL_auxz00_3514;

							BgL_auxz00_3516 = (obj_t) (BgL_arg4501z00_1513);
							BgL_auxz00_3514 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2ucollectzd2nilz52zzsaw_removez00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3514, BgL_auxz00_3516);
				}}}
			else
				{	/* SawMill/remove.scm 9 */
					BFALSE;
				}
			return
				(BgL_ucollectz00_bglt) (BGl_z52thezd2ucollectzd2nilz52zzsaw_removez00);
		}
	}



/* _ucollect-nil */
	obj_t BGl__ucollectzd2nilzd2zzsaw_removez00(obj_t BgL_envz00_2748)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 9 */
			return (obj_t) (BGl_ucollectzd2nilzd2zzsaw_removez00());
		}
	}



/* _rcollect? */
	obj_t BGl__rcollectzf3zf3zzsaw_removez00(obj_t BgL_envz00_2745,
		obj_t BgL_obj4008z00_2746)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 8 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4008z00_2746,
					BGl_rcollectz00zzsaw_removez00));
		}
	}



/* widening-rcollect */
	BgL_rcollectz00_bglt BGl_wideningzd2rcollectzd2zzsaw_removez00()
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 8 */
			{	/* SawMill/remove.scm 8 */
				BgL_rcollectz00_bglt BgL_new3991z00_1514;

				BgL_new3991z00_1514 =
					((BgL_rcollectz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rcollectz00_bgl))));
				return BgL_new3991z00_1514;
			}
		}
	}



/* _%allocate-rcollect */
	obj_t BGl__z52allocatezd2rcollectz80zzsaw_removez00(obj_t BgL_envz00_2743)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 8 */
			{	/* SawMill/remove.scm 8 */
				BgL_blockz00_bglt BgL_auxz00_3525;

				{	/* SawMill/remove.scm 8 */
					BgL_blockz00_bglt BgL_res4717z00_2868;

					{	/* SawMill/remove.scm 8 */
						BgL_blockz00_bglt BgL_new4001z00_2866;

						BgL_new4001z00_2866 =
							((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_blockz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4001z00_2866),
							BGl_classzd2numzd2zz__objectz00(BGl_rcollectz00zzsaw_removez00));
						{	/* SawMill/remove.scm 8 */
							BgL_objectz00_bglt BgL_auxz00_3530;

							BgL_auxz00_3530 = (BgL_objectz00_bglt) (BgL_new4001z00_2866);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3530, BFALSE);
						}
						BgL_res4717z00_2868 = BgL_new4001z00_2866;
					}
					BgL_auxz00_3525 = BgL_res4717z00_2868;
				}
				return (obj_t) (BgL_auxz00_3525);
			}
		}
	}



/* rcollect-nil */
	BgL_rcollectz00_bglt BGl_rcollectzd2nilzd2zzsaw_removez00()
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 8 */
			if ((BGl_z52thezd2rcollectzd2nilz52zzsaw_removez00 == BUNSPEC))
				{	/* SawMill/remove.scm 8 */
					{	/* SawMill/remove.scm 8 */
						BgL_blockz00_bglt BgL_res4674z00_2524;

						{	/* SawMill/remove.scm 8 */
							BgL_blockz00_bglt BgL_new3957z00_2520;

							BgL_new3957z00_2520 =
								((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_blockz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3957z00_2520),
								BGl_classzd2numzd2zz__objectz00(BGl_blockz00zzsaw_defsz00));
							{	/* SawMill/remove.scm 8 */
								BgL_objectz00_bglt BgL_auxz00_3540;

								BgL_auxz00_3540 = (BgL_objectz00_bglt) (BgL_new3957z00_2520);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3540, BFALSE);
							}
							BgL_res4674z00_2524 = BgL_new3957z00_2520;
						}
						BGl_z52thezd2rcollectzd2nilz52zzsaw_removez00 =
							(obj_t) (BgL_res4674z00_2524);
					}
					{	/* SawMill/remove.scm 8 */
						obj_t BgL_arg4509z00_1525;

						BgL_arg4509z00_1525 = MAKE_PAIR(BFALSE, BFALSE);
						{	/* SawMill/remove.scm 8 */
							BgL_blockz00_bglt BgL_res4675z00_2534;

							{	/* SawMill/remove.scm 8 */
								BgL_blockz00_bglt BgL_new3951z00_2525;

								int BgL_label3947z00_2526;

								BgL_new3951z00_2525 =
									(BgL_blockz00_bglt)
									(BGl_z52thezd2rcollectzd2nilz52zzsaw_removez00);
								BgL_label3947z00_2526 = (int) (((long) 0));
								{	/* SawMill/remove.scm 8 */
									int BgL_label3947z00_2530;

									obj_t BgL_preds3948z00_2531;

									obj_t BgL_succs3949z00_2532;

									obj_t BgL_first3950z00_2533;

									BgL_label3947z00_2530 = BgL_label3947z00_2526;
									BgL_preds3948z00_2531 = BNIL;
									BgL_succs3949z00_2532 = BNIL;
									BgL_first3950z00_2533 = BgL_arg4509z00_1525;
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2525))->
											BgL_labelz00) = ((int) BgL_label3947z00_2530), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2525))->
											BgL_predsz00) = ((obj_t) BgL_preds3948z00_2531), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2525))->
											BgL_succsz00) = ((obj_t) BgL_succs3949z00_2532), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2525))->
											BgL_firstz00) = ((obj_t) BgL_first3950z00_2533), BUNSPEC);
									BgL_res4675z00_2534 = BgL_new3951z00_2525;
							}} BgL_res4675z00_2534;
					}}
					{	/* SawMill/remove.scm 8 */
						long BgL_arg4510z00_1526;

						BgL_arg4510z00_1526 =
							BGl_classzd2numzd2zz__objectz00(BGl_rcollectz00zzsaw_removez00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2rcollectzd2nilz52zzsaw_removez00),
							BgL_arg4510z00_1526);
					}
					{	/* SawMill/remove.scm 8 */
						BgL_rcollectz00_bglt BgL_arg4511z00_1527;

						BgL_arg4511z00_1527 = BGl_wideningzd2rcollectzd2zzsaw_removez00();
						{	/* SawMill/remove.scm 8 */
							obj_t BgL_auxz00_3557;

							BgL_objectz00_bglt BgL_auxz00_3555;

							BgL_auxz00_3557 = (obj_t) (BgL_arg4511z00_1527);
							BgL_auxz00_3555 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2rcollectzd2nilz52zzsaw_removez00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3555, BgL_auxz00_3557);
				}}}
			else
				{	/* SawMill/remove.scm 8 */
					BFALSE;
				}
			return
				(BgL_rcollectz00_bglt) (BGl_z52thezd2rcollectzd2nilz52zzsaw_removez00);
		}
	}



/* _rcollect-nil */
	obj_t BGl__rcollectzd2nilzd2zzsaw_removez00(obj_t BgL_envz00_2744)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 8 */
			return (obj_t) (BGl_rcollectzd2nilzd2zzsaw_removez00());
		}
	}



/* _defcollect? */
	obj_t BGl__defcollectzf3zf3zzsaw_removez00(obj_t BgL_envz00_2741,
		obj_t BgL_obj3976z00_2742)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 7 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3976z00_2742,
					BGl_defcollectz00zzsaw_removez00));
		}
	}



/* widening-defcollect */
	BgL_defcollectz00_bglt BGl_wideningzd2defcollectzd2zzsaw_removez00()
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 7 */
			{	/* SawMill/remove.scm 7 */
				BgL_defcollectz00_bglt BgL_new3959z00_1528;

				BgL_new3959z00_1528 =
					((BgL_defcollectz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_defcollectz00_bgl))));
				return BgL_new3959z00_1528;
			}
		}
	}



/* _%allocate-defcollect */
	obj_t BGl__z52allocatezd2defcollectz80zzsaw_removez00(obj_t BgL_envz00_2739)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 7 */
			{	/* SawMill/remove.scm 7 */
				BgL_blockz00_bglt BgL_auxz00_3566;

				{	/* SawMill/remove.scm 7 */
					BgL_blockz00_bglt BgL_res4718z00_2874;

					{	/* SawMill/remove.scm 7 */
						BgL_blockz00_bglt BgL_new3969z00_2872;

						BgL_new3969z00_2872 =
							((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_blockz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3969z00_2872),
							BGl_classzd2numzd2zz__objectz00
							(BGl_defcollectz00zzsaw_removez00));
						{	/* SawMill/remove.scm 7 */
							BgL_objectz00_bglt BgL_auxz00_3571;

							BgL_auxz00_3571 = (BgL_objectz00_bglt) (BgL_new3969z00_2872);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3571, BFALSE);
						}
						BgL_res4718z00_2874 = BgL_new3969z00_2872;
					}
					BgL_auxz00_3566 = BgL_res4718z00_2874;
				}
				return (obj_t) (BgL_auxz00_3566);
			}
		}
	}



/* defcollect-nil */
	BgL_defcollectz00_bglt BGl_defcollectzd2nilzd2zzsaw_removez00()
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 7 */
			if ((BGl_z52thezd2defcollectzd2nilz52zzsaw_removez00 == BUNSPEC))
				{	/* SawMill/remove.scm 7 */
					{	/* SawMill/remove.scm 7 */
						BgL_blockz00_bglt BgL_res4676z00_2546;

						{	/* SawMill/remove.scm 7 */
							BgL_blockz00_bglt BgL_new3957z00_2542;

							BgL_new3957z00_2542 =
								((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_blockz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3957z00_2542),
								BGl_classzd2numzd2zz__objectz00(BGl_blockz00zzsaw_defsz00));
							{	/* SawMill/remove.scm 7 */
								BgL_objectz00_bglt BgL_auxz00_3581;

								BgL_auxz00_3581 = (BgL_objectz00_bglt) (BgL_new3957z00_2542);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3581, BFALSE);
							}
							BgL_res4676z00_2546 = BgL_new3957z00_2542;
						}
						BGl_z52thezd2defcollectzd2nilz52zzsaw_removez00 =
							(obj_t) (BgL_res4676z00_2546);
					}
					{	/* SawMill/remove.scm 7 */
						obj_t BgL_arg4519z00_1539;

						BgL_arg4519z00_1539 = MAKE_PAIR(BFALSE, BFALSE);
						{	/* SawMill/remove.scm 7 */
							BgL_blockz00_bglt BgL_res4677z00_2556;

							{	/* SawMill/remove.scm 7 */
								BgL_blockz00_bglt BgL_new3951z00_2547;

								int BgL_label3947z00_2548;

								BgL_new3951z00_2547 =
									(BgL_blockz00_bglt)
									(BGl_z52thezd2defcollectzd2nilz52zzsaw_removez00);
								BgL_label3947z00_2548 = (int) (((long) 0));
								{	/* SawMill/remove.scm 7 */
									int BgL_label3947z00_2552;

									obj_t BgL_preds3948z00_2553;

									obj_t BgL_succs3949z00_2554;

									obj_t BgL_first3950z00_2555;

									BgL_label3947z00_2552 = BgL_label3947z00_2548;
									BgL_preds3948z00_2553 = BNIL;
									BgL_succs3949z00_2554 = BNIL;
									BgL_first3950z00_2555 = BgL_arg4519z00_1539;
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2547))->
											BgL_labelz00) = ((int) BgL_label3947z00_2552), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2547))->
											BgL_predsz00) = ((obj_t) BgL_preds3948z00_2553), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2547))->
											BgL_succsz00) = ((obj_t) BgL_succs3949z00_2554), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2547))->
											BgL_firstz00) = ((obj_t) BgL_first3950z00_2555), BUNSPEC);
									BgL_res4677z00_2556 = BgL_new3951z00_2547;
							}} BgL_res4677z00_2556;
					}}
					{	/* SawMill/remove.scm 7 */
						long BgL_arg4520z00_1540;

						BgL_arg4520z00_1540 =
							BGl_classzd2numzd2zz__objectz00(BGl_defcollectz00zzsaw_removez00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2defcollectzd2nilz52zzsaw_removez00),
							BgL_arg4520z00_1540);
					}
					{	/* SawMill/remove.scm 7 */
						BgL_defcollectz00_bglt BgL_arg4521z00_1541;

						BgL_arg4521z00_1541 = BGl_wideningzd2defcollectzd2zzsaw_removez00();
						{	/* SawMill/remove.scm 7 */
							obj_t BgL_auxz00_3598;

							BgL_objectz00_bglt BgL_auxz00_3596;

							BgL_auxz00_3598 = (obj_t) (BgL_arg4521z00_1541);
							BgL_auxz00_3596 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2defcollectzd2nilz52zzsaw_removez00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3596, BgL_auxz00_3598);
				}}}
			else
				{	/* SawMill/remove.scm 7 */
					BFALSE;
				}
			return
				(BgL_defcollectz00_bglt)
				(BGl_z52thezd2defcollectzd2nilz52zzsaw_removez00);
		}
	}



/* _defcollect-nil */
	obj_t BGl__defcollectzd2nilzd2zzsaw_removez00(obj_t BgL_envz00_2740)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 7 */
			return (obj_t) (BGl_defcollectzd2nilzd2zzsaw_removez00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_removez00()
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_removez00()
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_cregz00zzsaw_removez00, BGl_proc4692z00zzsaw_removez00,
				BGl_string4693z00zzsaw_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_cregz00zzsaw_removez00, BGl_proc4694z00zzsaw_removez00,
				BGl_string4695z00zzsaw_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_bremovedz00zzsaw_removez00, BGl_proc4696z00zzsaw_removez00,
				BGl_string4693z00zzsaw_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_bremovedz00zzsaw_removez00, BGl_proc4697z00zzsaw_removez00,
				BGl_string4695z00zzsaw_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_visitedz00zzsaw_removez00, BGl_proc4698z00zzsaw_removez00,
				BGl_string4693z00zzsaw_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_visitedz00zzsaw_removez00, BGl_proc4699z00zzsaw_removez00,
				BGl_string4695z00zzsaw_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_removedz00zzsaw_removez00, BGl_proc4700z00zzsaw_removez00,
				BGl_string4693z00zzsaw_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_removedz00zzsaw_removez00, BGl_proc4701z00zzsaw_removez00,
				BGl_string4695z00zzsaw_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_ucollectz00zzsaw_removez00, BGl_proc4702z00zzsaw_removez00,
				BGl_string4693z00zzsaw_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_ucollectz00zzsaw_removez00, BGl_proc4703z00zzsaw_removez00,
				BGl_string4695z00zzsaw_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rcollectz00zzsaw_removez00, BGl_proc4704z00zzsaw_removez00,
				BGl_string4693z00zzsaw_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rcollectz00zzsaw_removez00, BGl_proc4705z00zzsaw_removez00,
				BGl_string4695z00zzsaw_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_defcollectz00zzsaw_removez00, BGl_proc4706z00zzsaw_removez00,
				BGl_string4693z00zzsaw_removez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_defcollectz00zzsaw_removez00, BGl_proc4707z00zzsaw_removez00,
				BGl_string4695z00zzsaw_removez00);
		}
	}



/* struct+object->objec4302 */
	obj_t BGl_structzb2objectzd2ze3objec4302z83zzsaw_removez00(obj_t
		BgL_envz00_2786, obj_t BgL_oz00_2787, obj_t BgL_sz00_2788)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 7 */
			{
				BgL_defcollectz00_bglt BgL_oz00_2222;

				obj_t BgL_sz00_2223;

				{	/* SawMill/remove.scm 7 */
					BgL_defcollectz00_bglt BgL_auxz00_3618;

					BgL_oz00_2222 = (BgL_defcollectz00_bglt) (BgL_oz00_2787);
					BgL_sz00_2223 = BgL_sz00_2788;
					{

						{	/* SawMill/remove.scm 7 */
							obj_t BgL_old3973z00_2226;

							{	/* SawMill/remove.scm 7 */
								obj_t BgL_nextzd2method4301zd2_2231;

								BgL_nextzd2method4301zd2_2231 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2222),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_defcollectz00zzsaw_removez00);
								if (PROCEDUREP(BgL_nextzd2method4301zd2_2231))
									{	/* SawMill/remove.scm 7 */
										BgL_old3973z00_2226 =
											PROCEDURE_ENTRY(BgL_nextzd2method4301zd2_2231)
											(BgL_nextzd2method4301zd2_2231, (obj_t) (BgL_oz00_2222),
											BgL_sz00_2223, BEOA);
									}
								else
									{	/* SawMill/remove.scm 7 */
										BgL_old3973z00_2226 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2222), BgL_sz00_2223));
									}
							}
							{	/* SawMill/remove.scm 7 */
								BgL_defcollectz00_bglt BgL_new3975z00_2228;

								BgL_new3975z00_2228 =
									((BgL_defcollectz00_bglt) (BgL_old3973z00_2226));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3975z00_2228),
									BGl_classzd2numzd2zz__objectz00
									(BGl_defcollectz00zzsaw_removez00));
								{	/* SawMill/remove.scm 7 */
									BgL_defcollectz00_bglt BgL_arg4656z00_2230;

									BgL_arg4656z00_2230 =
										BGl_wideningzd2defcollectzd2zzsaw_removez00();
									{	/* SawMill/remove.scm 7 */
										obj_t BgL_auxz00_3636;

										BgL_objectz00_bglt BgL_auxz00_3634;

										BgL_auxz00_3636 = (obj_t) (BgL_arg4656z00_2230);
										BgL_auxz00_3634 =
											(BgL_objectz00_bglt) (BgL_new3975z00_2228);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3634, BgL_auxz00_3636);
									}
								}
								BgL_auxz00_3618 = BgL_new3975z00_2228;
							}
						}
					}
					return (obj_t) (BgL_auxz00_3618);
				}
			}
		}
	}



/* object->struct-defco4300 */
	obj_t BGl_objectzd2ze3structzd2defco4300ze3zzsaw_removez00(obj_t
		BgL_envz00_2789, obj_t BgL_obj3970z00_2790)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 7 */
			{
				BgL_defcollectz00_bglt BgL_obj3970z00_2214;

				BgL_obj3970z00_2214 = (BgL_defcollectz00_bglt) (BgL_obj3970z00_2790);
				{

					{	/* SawMill/remove.scm 7 */
						obj_t BgL_res3971z00_2217;

						{	/* SawMill/remove.scm 7 */
							obj_t BgL_nextzd2method4299zd2_2220;

							BgL_nextzd2method4299zd2_2220 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3970z00_2214),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_defcollectz00zzsaw_removez00);
							if (PROCEDUREP(BgL_nextzd2method4299zd2_2220))
								{	/* SawMill/remove.scm 7 */
									BgL_res3971z00_2217 =
										PROCEDURE_ENTRY(BgL_nextzd2method4299zd2_2220)
										(BgL_nextzd2method4299zd2_2220,
										(obj_t) (BgL_obj3970z00_2214), BEOA);
								}
							else
								{	/* SawMill/remove.scm 7 */
									BgL_res3971z00_2217 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3970z00_2214));
								}
						}
						{	/* SawMill/remove.scm 7 */
							obj_t BgL_aux3972z00_2218;

							{	/* SawMill/remove.scm 7 */
								obj_t BgL_keyz00_2716;

								BgL_keyz00_2716 = CNST_TABLE_REF(((long) 1));
								BgL_aux3972z00_2218 =
									make_struct(BgL_keyz00_2716, (int) (((long) 0)), BUNSPEC);
							}
							{	/* SawMill/remove.scm 7 */
								int BgL_auxz00_3653;

								BgL_auxz00_3653 = (int) (((long) 0));
								STRUCT_SET(BgL_res3971z00_2217, BgL_auxz00_3653,
									BgL_aux3972z00_2218);
							}
							{	/* SawMill/remove.scm 7 */
								obj_t BgL_auxz00_3656;

								BgL_auxz00_3656 = STRUCT_KEY(BgL_res3971z00_2217);
								STRUCT_KEY_SET(BgL_aux3972z00_2218, BgL_auxz00_3656);
							}
							{	/* SawMill/remove.scm 7 */
								obj_t BgL_kz00_2727;

								BgL_kz00_2727 = CNST_TABLE_REF(((long) 1));
								STRUCT_KEY_SET(BgL_res3971z00_2217, BgL_kz00_2727);
							}
							return BgL_res3971z00_2217;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4298 */
	obj_t BGl_structzb2objectzd2ze3objec4298z83zzsaw_removez00(obj_t
		BgL_envz00_2791, obj_t BgL_oz00_2792, obj_t BgL_sz00_2793)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 8 */
			{
				BgL_rcollectz00_bglt BgL_oz00_2203;

				obj_t BgL_sz00_2204;

				{	/* SawMill/remove.scm 8 */
					BgL_rcollectz00_bglt BgL_auxz00_3662;

					BgL_oz00_2203 = (BgL_rcollectz00_bglt) (BgL_oz00_2792);
					BgL_sz00_2204 = BgL_sz00_2793;
					{

						{	/* SawMill/remove.scm 8 */
							obj_t BgL_old4005z00_2207;

							{	/* SawMill/remove.scm 8 */
								obj_t BgL_nextzd2method4297zd2_2212;

								BgL_nextzd2method4297zd2_2212 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2203),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_rcollectz00zzsaw_removez00);
								if (PROCEDUREP(BgL_nextzd2method4297zd2_2212))
									{	/* SawMill/remove.scm 8 */
										BgL_old4005z00_2207 =
											PROCEDURE_ENTRY(BgL_nextzd2method4297zd2_2212)
											(BgL_nextzd2method4297zd2_2212, (obj_t) (BgL_oz00_2203),
											BgL_sz00_2204, BEOA);
									}
								else
									{	/* SawMill/remove.scm 8 */
										BgL_old4005z00_2207 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2203), BgL_sz00_2204));
									}
							}
							{	/* SawMill/remove.scm 8 */
								BgL_rcollectz00_bglt BgL_new4007z00_2209;

								BgL_new4007z00_2209 =
									((BgL_rcollectz00_bglt) (BgL_old4005z00_2207));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4007z00_2209),
									BGl_classzd2numzd2zz__objectz00
									(BGl_rcollectz00zzsaw_removez00));
								{	/* SawMill/remove.scm 8 */
									BgL_rcollectz00_bglt BgL_arg4651z00_2211;

									BgL_arg4651z00_2211 =
										BGl_wideningzd2rcollectzd2zzsaw_removez00();
									{	/* SawMill/remove.scm 8 */
										obj_t BgL_auxz00_3680;

										BgL_objectz00_bglt BgL_auxz00_3678;

										BgL_auxz00_3680 = (obj_t) (BgL_arg4651z00_2211);
										BgL_auxz00_3678 =
											(BgL_objectz00_bglt) (BgL_new4007z00_2209);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3678, BgL_auxz00_3680);
									}
								}
								BgL_auxz00_3662 = BgL_new4007z00_2209;
							}
						}
					}
					return (obj_t) (BgL_auxz00_3662);
				}
			}
		}
	}



/* object->struct-rcoll4296 */
	obj_t BGl_objectzd2ze3structzd2rcoll4296ze3zzsaw_removez00(obj_t
		BgL_envz00_2794, obj_t BgL_obj4002z00_2795)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 8 */
			{
				BgL_rcollectz00_bglt BgL_obj4002z00_2195;

				BgL_obj4002z00_2195 = (BgL_rcollectz00_bglt) (BgL_obj4002z00_2795);
				{

					{	/* SawMill/remove.scm 8 */
						obj_t BgL_res4003z00_2198;

						{	/* SawMill/remove.scm 8 */
							obj_t BgL_nextzd2method4295zd2_2201;

							BgL_nextzd2method4295zd2_2201 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4002z00_2195),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_rcollectz00zzsaw_removez00);
							if (PROCEDUREP(BgL_nextzd2method4295zd2_2201))
								{	/* SawMill/remove.scm 8 */
									BgL_res4003z00_2198 =
										PROCEDURE_ENTRY(BgL_nextzd2method4295zd2_2201)
										(BgL_nextzd2method4295zd2_2201,
										(obj_t) (BgL_obj4002z00_2195), BEOA);
								}
							else
								{	/* SawMill/remove.scm 8 */
									BgL_res4003z00_2198 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4002z00_2195));
								}
						}
						{	/* SawMill/remove.scm 8 */
							obj_t BgL_aux4004z00_2199;

							{	/* SawMill/remove.scm 8 */
								obj_t BgL_keyz00_2698;

								BgL_keyz00_2698 = CNST_TABLE_REF(((long) 2));
								BgL_aux4004z00_2199 =
									make_struct(BgL_keyz00_2698, (int) (((long) 0)), BUNSPEC);
							}
							{	/* SawMill/remove.scm 8 */
								int BgL_auxz00_3697;

								BgL_auxz00_3697 = (int) (((long) 0));
								STRUCT_SET(BgL_res4003z00_2198, BgL_auxz00_3697,
									BgL_aux4004z00_2199);
							}
							{	/* SawMill/remove.scm 8 */
								obj_t BgL_auxz00_3700;

								BgL_auxz00_3700 = STRUCT_KEY(BgL_res4003z00_2198);
								STRUCT_KEY_SET(BgL_aux4004z00_2199, BgL_auxz00_3700);
							}
							{	/* SawMill/remove.scm 8 */
								obj_t BgL_kz00_2709;

								BgL_kz00_2709 = CNST_TABLE_REF(((long) 2));
								STRUCT_KEY_SET(BgL_res4003z00_2198, BgL_kz00_2709);
							}
							return BgL_res4003z00_2198;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4294 */
	obj_t BGl_structzb2objectzd2ze3objec4294z83zzsaw_removez00(obj_t
		BgL_envz00_2796, obj_t BgL_oz00_2797, obj_t BgL_sz00_2798)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 9 */
			{
				BgL_ucollectz00_bglt BgL_oz00_2184;

				obj_t BgL_sz00_2185;

				{	/* SawMill/remove.scm 9 */
					BgL_ucollectz00_bglt BgL_auxz00_3706;

					BgL_oz00_2184 = (BgL_ucollectz00_bglt) (BgL_oz00_2797);
					BgL_sz00_2185 = BgL_sz00_2798;
					{

						{	/* SawMill/remove.scm 9 */
							obj_t BgL_old4037z00_2188;

							{	/* SawMill/remove.scm 9 */
								obj_t BgL_nextzd2method4293zd2_2193;

								BgL_nextzd2method4293zd2_2193 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2184),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_ucollectz00zzsaw_removez00);
								if (PROCEDUREP(BgL_nextzd2method4293zd2_2193))
									{	/* SawMill/remove.scm 9 */
										BgL_old4037z00_2188 =
											PROCEDURE_ENTRY(BgL_nextzd2method4293zd2_2193)
											(BgL_nextzd2method4293zd2_2193, (obj_t) (BgL_oz00_2184),
											BgL_sz00_2185, BEOA);
									}
								else
									{	/* SawMill/remove.scm 9 */
										BgL_old4037z00_2188 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2184), BgL_sz00_2185));
									}
							}
							{	/* SawMill/remove.scm 9 */
								BgL_ucollectz00_bglt BgL_new4039z00_2190;

								BgL_new4039z00_2190 =
									((BgL_ucollectz00_bglt) (BgL_old4037z00_2188));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4039z00_2190),
									BGl_classzd2numzd2zz__objectz00
									(BGl_ucollectz00zzsaw_removez00));
								{	/* SawMill/remove.scm 9 */
									BgL_ucollectz00_bglt BgL_arg4646z00_2192;

									BgL_arg4646z00_2192 =
										BGl_wideningzd2ucollectzd2zzsaw_removez00();
									{	/* SawMill/remove.scm 9 */
										obj_t BgL_auxz00_3724;

										BgL_objectz00_bglt BgL_auxz00_3722;

										BgL_auxz00_3724 = (obj_t) (BgL_arg4646z00_2192);
										BgL_auxz00_3722 =
											(BgL_objectz00_bglt) (BgL_new4039z00_2190);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3722, BgL_auxz00_3724);
									}
								}
								BgL_auxz00_3706 = BgL_new4039z00_2190;
							}
						}
					}
					return (obj_t) (BgL_auxz00_3706);
				}
			}
		}
	}



/* object->struct-ucoll4292 */
	obj_t BGl_objectzd2ze3structzd2ucoll4292ze3zzsaw_removez00(obj_t
		BgL_envz00_2799, obj_t BgL_obj4034z00_2800)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 9 */
			{
				BgL_ucollectz00_bglt BgL_obj4034z00_2176;

				BgL_obj4034z00_2176 = (BgL_ucollectz00_bglt) (BgL_obj4034z00_2800);
				{

					{	/* SawMill/remove.scm 9 */
						obj_t BgL_res4035z00_2179;

						{	/* SawMill/remove.scm 9 */
							obj_t BgL_nextzd2method4291zd2_2182;

							BgL_nextzd2method4291zd2_2182 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4034z00_2176),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_ucollectz00zzsaw_removez00);
							if (PROCEDUREP(BgL_nextzd2method4291zd2_2182))
								{	/* SawMill/remove.scm 9 */
									BgL_res4035z00_2179 =
										PROCEDURE_ENTRY(BgL_nextzd2method4291zd2_2182)
										(BgL_nextzd2method4291zd2_2182,
										(obj_t) (BgL_obj4034z00_2176), BEOA);
								}
							else
								{	/* SawMill/remove.scm 9 */
									BgL_res4035z00_2179 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4034z00_2176));
								}
						}
						{	/* SawMill/remove.scm 9 */
							obj_t BgL_aux4036z00_2180;

							{	/* SawMill/remove.scm 9 */
								obj_t BgL_keyz00_2680;

								BgL_keyz00_2680 = CNST_TABLE_REF(((long) 3));
								BgL_aux4036z00_2180 =
									make_struct(BgL_keyz00_2680, (int) (((long) 0)), BUNSPEC);
							}
							{	/* SawMill/remove.scm 9 */
								int BgL_auxz00_3741;

								BgL_auxz00_3741 = (int) (((long) 0));
								STRUCT_SET(BgL_res4035z00_2179, BgL_auxz00_3741,
									BgL_aux4036z00_2180);
							}
							{	/* SawMill/remove.scm 9 */
								obj_t BgL_auxz00_3744;

								BgL_auxz00_3744 = STRUCT_KEY(BgL_res4035z00_2179);
								STRUCT_KEY_SET(BgL_aux4036z00_2180, BgL_auxz00_3744);
							}
							{	/* SawMill/remove.scm 9 */
								obj_t BgL_kz00_2691;

								BgL_kz00_2691 = CNST_TABLE_REF(((long) 3));
								STRUCT_KEY_SET(BgL_res4035z00_2179, BgL_kz00_2691);
							}
							return BgL_res4035z00_2179;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4289 */
	obj_t BGl_structzb2objectzd2ze3objec4289z83zzsaw_removez00(obj_t
		BgL_envz00_2801, obj_t BgL_oz00_2802, obj_t BgL_sz00_2803)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 10 */
			{
				BgL_removedz00_bglt BgL_oz00_2165;

				obj_t BgL_sz00_2166;

				{	/* SawMill/remove.scm 10 */
					BgL_removedz00_bglt BgL_auxz00_3750;

					BgL_oz00_2165 = (BgL_removedz00_bglt) (BgL_oz00_2802);
					BgL_sz00_2166 = BgL_sz00_2803;
					{

						{	/* SawMill/remove.scm 10 */
							obj_t BgL_old4070z00_2169;

							{	/* SawMill/remove.scm 10 */
								obj_t BgL_nextzd2method4288zd2_2174;

								BgL_nextzd2method4288zd2_2174 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2165),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_removedz00zzsaw_removez00);
								if (PROCEDUREP(BgL_nextzd2method4288zd2_2174))
									{	/* SawMill/remove.scm 10 */
										BgL_old4070z00_2169 =
											PROCEDURE_ENTRY(BgL_nextzd2method4288zd2_2174)
											(BgL_nextzd2method4288zd2_2174, (obj_t) (BgL_oz00_2165),
											BgL_sz00_2166, BEOA);
									}
								else
									{	/* SawMill/remove.scm 10 */
										BgL_old4070z00_2169 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2165), BgL_sz00_2166));
									}
							}
							{	/* SawMill/remove.scm 10 */
								BgL_removedz00_bglt BgL_new4072z00_2171;

								BgL_new4072z00_2171 =
									((BgL_removedz00_bglt) (BgL_old4070z00_2169));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4072z00_2171),
									BGl_classzd2numzd2zz__objectz00
									(BGl_removedz00zzsaw_removez00));
								{	/* SawMill/remove.scm 10 */
									BgL_removedz00_bglt BgL_arg4641z00_2173;

									BgL_arg4641z00_2173 =
										BGl_wideningzd2removedzd2zzsaw_removez00();
									{	/* SawMill/remove.scm 10 */
										obj_t BgL_auxz00_3768;

										BgL_objectz00_bglt BgL_auxz00_3766;

										BgL_auxz00_3768 = (obj_t) (BgL_arg4641z00_2173);
										BgL_auxz00_3766 =
											(BgL_objectz00_bglt) (BgL_new4072z00_2171);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3766, BgL_auxz00_3768);
									}
								}
								BgL_auxz00_3750 = BgL_new4072z00_2171;
							}
						}
					}
					return (obj_t) (BgL_auxz00_3750);
				}
			}
		}
	}



/* object->struct-remov4286 */
	obj_t BGl_objectzd2ze3structzd2remov4286ze3zzsaw_removez00(obj_t
		BgL_envz00_2804, obj_t BgL_obj4067z00_2805)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 10 */
			{
				BgL_removedz00_bglt BgL_obj4067z00_2157;

				BgL_obj4067z00_2157 = (BgL_removedz00_bglt) (BgL_obj4067z00_2805);
				{

					{	/* SawMill/remove.scm 10 */
						obj_t BgL_res4068z00_2160;

						{	/* SawMill/remove.scm 10 */
							obj_t BgL_nextzd2method4285zd2_2163;

							BgL_nextzd2method4285zd2_2163 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4067z00_2157),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_removedz00zzsaw_removez00);
							if (PROCEDUREP(BgL_nextzd2method4285zd2_2163))
								{	/* SawMill/remove.scm 10 */
									BgL_res4068z00_2160 =
										PROCEDURE_ENTRY(BgL_nextzd2method4285zd2_2163)
										(BgL_nextzd2method4285zd2_2163,
										(obj_t) (BgL_obj4067z00_2157), BEOA);
								}
							else
								{	/* SawMill/remove.scm 10 */
									BgL_res4068z00_2160 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4067z00_2157));
								}
						}
						{	/* SawMill/remove.scm 10 */
							obj_t BgL_aux4069z00_2161;

							{	/* SawMill/remove.scm 10 */
								obj_t BgL_keyz00_2662;

								BgL_keyz00_2662 = CNST_TABLE_REF(((long) 4));
								BgL_aux4069z00_2161 =
									make_struct(BgL_keyz00_2662, (int) (((long) 0)), BUNSPEC);
							}
							{	/* SawMill/remove.scm 10 */
								int BgL_auxz00_3785;

								BgL_auxz00_3785 = (int) (((long) 0));
								STRUCT_SET(BgL_res4068z00_2160, BgL_auxz00_3785,
									BgL_aux4069z00_2161);
							}
							{	/* SawMill/remove.scm 10 */
								obj_t BgL_auxz00_3788;

								BgL_auxz00_3788 = STRUCT_KEY(BgL_res4068z00_2160);
								STRUCT_KEY_SET(BgL_aux4069z00_2161, BgL_auxz00_3788);
							}
							{	/* SawMill/remove.scm 10 */
								obj_t BgL_kz00_2673;

								BgL_kz00_2673 = CNST_TABLE_REF(((long) 4));
								STRUCT_KEY_SET(BgL_res4068z00_2160, BgL_kz00_2673);
							}
							return BgL_res4068z00_2160;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4284 */
	obj_t BGl_structzb2objectzd2ze3objec4284z83zzsaw_removez00(obj_t
		BgL_envz00_2806, obj_t BgL_oz00_2807, obj_t BgL_sz00_2808)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 11 */
			{
				BgL_visitedz00_bglt BgL_oz00_2146;

				obj_t BgL_sz00_2147;

				{	/* SawMill/remove.scm 11 */
					BgL_visitedz00_bglt BgL_auxz00_3794;

					BgL_oz00_2146 = (BgL_visitedz00_bglt) (BgL_oz00_2807);
					BgL_sz00_2147 = BgL_sz00_2808;
					{

						{	/* SawMill/remove.scm 11 */
							obj_t BgL_old4104z00_2150;

							{	/* SawMill/remove.scm 11 */
								obj_t BgL_nextzd2method4283zd2_2155;

								BgL_nextzd2method4283zd2_2155 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2146),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_visitedz00zzsaw_removez00);
								if (PROCEDUREP(BgL_nextzd2method4283zd2_2155))
									{	/* SawMill/remove.scm 11 */
										BgL_old4104z00_2150 =
											PROCEDURE_ENTRY(BgL_nextzd2method4283zd2_2155)
											(BgL_nextzd2method4283zd2_2155, (obj_t) (BgL_oz00_2146),
											BgL_sz00_2147, BEOA);
									}
								else
									{	/* SawMill/remove.scm 11 */
										BgL_old4104z00_2150 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2146), BgL_sz00_2147));
									}
							}
							{	/* SawMill/remove.scm 11 */
								BgL_visitedz00_bglt BgL_new4106z00_2152;

								BgL_new4106z00_2152 =
									((BgL_visitedz00_bglt) (BgL_old4104z00_2150));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4106z00_2152),
									BGl_classzd2numzd2zz__objectz00
									(BGl_visitedz00zzsaw_removez00));
								{	/* SawMill/remove.scm 11 */
									BgL_visitedz00_bglt BgL_arg4633z00_2154;

									BgL_arg4633z00_2154 =
										BGl_wideningzd2visitedzd2zzsaw_removez00();
									{	/* SawMill/remove.scm 11 */
										obj_t BgL_auxz00_3812;

										BgL_objectz00_bglt BgL_auxz00_3810;

										BgL_auxz00_3812 = (obj_t) (BgL_arg4633z00_2154);
										BgL_auxz00_3810 =
											(BgL_objectz00_bglt) (BgL_new4106z00_2152);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3810, BgL_auxz00_3812);
									}
								}
								BgL_auxz00_3794 = BgL_new4106z00_2152;
							}
						}
					}
					return (obj_t) (BgL_auxz00_3794);
				}
			}
		}
	}



/* object->struct-visit4282 */
	obj_t BGl_objectzd2ze3structzd2visit4282ze3zzsaw_removez00(obj_t
		BgL_envz00_2809, obj_t BgL_obj4101z00_2810)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 11 */
			{
				BgL_visitedz00_bglt BgL_obj4101z00_2138;

				BgL_obj4101z00_2138 = (BgL_visitedz00_bglt) (BgL_obj4101z00_2810);
				{

					{	/* SawMill/remove.scm 11 */
						obj_t BgL_res4102z00_2141;

						{	/* SawMill/remove.scm 11 */
							obj_t BgL_nextzd2method4281zd2_2144;

							BgL_nextzd2method4281zd2_2144 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4101z00_2138),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_visitedz00zzsaw_removez00);
							if (PROCEDUREP(BgL_nextzd2method4281zd2_2144))
								{	/* SawMill/remove.scm 11 */
									BgL_res4102z00_2141 =
										PROCEDURE_ENTRY(BgL_nextzd2method4281zd2_2144)
										(BgL_nextzd2method4281zd2_2144,
										(obj_t) (BgL_obj4101z00_2138), BEOA);
								}
							else
								{	/* SawMill/remove.scm 11 */
									BgL_res4102z00_2141 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4101z00_2138));
								}
						}
						{	/* SawMill/remove.scm 11 */
							obj_t BgL_aux4103z00_2142;

							{	/* SawMill/remove.scm 11 */
								obj_t BgL_keyz00_2644;

								BgL_keyz00_2644 = CNST_TABLE_REF(((long) 5));
								BgL_aux4103z00_2142 =
									make_struct(BgL_keyz00_2644, (int) (((long) 0)), BUNSPEC);
							}
							{	/* SawMill/remove.scm 11 */
								int BgL_auxz00_3829;

								BgL_auxz00_3829 = (int) (((long) 0));
								STRUCT_SET(BgL_res4102z00_2141, BgL_auxz00_3829,
									BgL_aux4103z00_2142);
							}
							{	/* SawMill/remove.scm 11 */
								obj_t BgL_auxz00_3832;

								BgL_auxz00_3832 = STRUCT_KEY(BgL_res4102z00_2141);
								STRUCT_KEY_SET(BgL_aux4103z00_2142, BgL_auxz00_3832);
							}
							{	/* SawMill/remove.scm 11 */
								obj_t BgL_kz00_2655;

								BgL_kz00_2655 = CNST_TABLE_REF(((long) 5));
								STRUCT_KEY_SET(BgL_res4102z00_2141, BgL_kz00_2655);
							}
							return BgL_res4102z00_2141;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4280 */
	obj_t BGl_structzb2objectzd2ze3objec4280z83zzsaw_removez00(obj_t
		BgL_envz00_2811, obj_t BgL_oz00_2812, obj_t BgL_sz00_2813)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 12 */
			{
				BgL_bremovedz00_bglt BgL_oz00_2127;

				obj_t BgL_sz00_2128;

				{	/* SawMill/remove.scm 12 */
					BgL_bremovedz00_bglt BgL_auxz00_3838;

					BgL_oz00_2127 = (BgL_bremovedz00_bglt) (BgL_oz00_2812);
					BgL_sz00_2128 = BgL_sz00_2813;
					{

						{	/* SawMill/remove.scm 12 */
							obj_t BgL_old4136z00_2131;

							{	/* SawMill/remove.scm 12 */
								obj_t BgL_nextzd2method4279zd2_2136;

								BgL_nextzd2method4279zd2_2136 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2127),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_bremovedz00zzsaw_removez00);
								if (PROCEDUREP(BgL_nextzd2method4279zd2_2136))
									{	/* SawMill/remove.scm 12 */
										BgL_old4136z00_2131 =
											PROCEDURE_ENTRY(BgL_nextzd2method4279zd2_2136)
											(BgL_nextzd2method4279zd2_2136, (obj_t) (BgL_oz00_2127),
											BgL_sz00_2128, BEOA);
									}
								else
									{	/* SawMill/remove.scm 12 */
										BgL_old4136z00_2131 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2127), BgL_sz00_2128));
									}
							}
							{	/* SawMill/remove.scm 12 */
								BgL_bremovedz00_bglt BgL_new4138z00_2133;

								BgL_new4138z00_2133 =
									((BgL_bremovedz00_bglt) (BgL_old4136z00_2131));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4138z00_2133),
									BGl_classzd2numzd2zz__objectz00
									(BGl_bremovedz00zzsaw_removez00));
								{	/* SawMill/remove.scm 12 */
									BgL_bremovedz00_bglt BgL_arg4628z00_2135;

									BgL_arg4628z00_2135 =
										BGl_wideningzd2bremovedzd2zzsaw_removez00();
									{	/* SawMill/remove.scm 12 */
										obj_t BgL_auxz00_3856;

										BgL_objectz00_bglt BgL_auxz00_3854;

										BgL_auxz00_3856 = (obj_t) (BgL_arg4628z00_2135);
										BgL_auxz00_3854 =
											(BgL_objectz00_bglt) (BgL_new4138z00_2133);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3854, BgL_auxz00_3856);
									}
								}
								BgL_auxz00_3838 = BgL_new4138z00_2133;
							}
						}
					}
					return (obj_t) (BgL_auxz00_3838);
				}
			}
		}
	}



/* object->struct-bremo4278 */
	obj_t BGl_objectzd2ze3structzd2bremo4278ze3zzsaw_removez00(obj_t
		BgL_envz00_2814, obj_t BgL_obj4133z00_2815)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 12 */
			{
				BgL_bremovedz00_bglt BgL_obj4133z00_2119;

				BgL_obj4133z00_2119 = (BgL_bremovedz00_bglt) (BgL_obj4133z00_2815);
				{

					{	/* SawMill/remove.scm 12 */
						obj_t BgL_res4134z00_2122;

						{	/* SawMill/remove.scm 12 */
							obj_t BgL_nextzd2method4277zd2_2125;

							BgL_nextzd2method4277zd2_2125 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4133z00_2119),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_bremovedz00zzsaw_removez00);
							if (PROCEDUREP(BgL_nextzd2method4277zd2_2125))
								{	/* SawMill/remove.scm 12 */
									BgL_res4134z00_2122 =
										PROCEDURE_ENTRY(BgL_nextzd2method4277zd2_2125)
										(BgL_nextzd2method4277zd2_2125,
										(obj_t) (BgL_obj4133z00_2119), BEOA);
								}
							else
								{	/* SawMill/remove.scm 12 */
									BgL_res4134z00_2122 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4133z00_2119));
								}
						}
						{	/* SawMill/remove.scm 12 */
							obj_t BgL_aux4135z00_2123;

							{	/* SawMill/remove.scm 12 */
								obj_t BgL_keyz00_2626;

								BgL_keyz00_2626 = CNST_TABLE_REF(((long) 6));
								BgL_aux4135z00_2123 =
									make_struct(BgL_keyz00_2626, (int) (((long) 0)), BUNSPEC);
							}
							{	/* SawMill/remove.scm 12 */
								int BgL_auxz00_3873;

								BgL_auxz00_3873 = (int) (((long) 0));
								STRUCT_SET(BgL_res4134z00_2122, BgL_auxz00_3873,
									BgL_aux4135z00_2123);
							}
							{	/* SawMill/remove.scm 12 */
								obj_t BgL_auxz00_3876;

								BgL_auxz00_3876 = STRUCT_KEY(BgL_res4134z00_2122);
								STRUCT_KEY_SET(BgL_aux4135z00_2123, BgL_auxz00_3876);
							}
							{	/* SawMill/remove.scm 12 */
								obj_t BgL_kz00_2637;

								BgL_kz00_2637 = CNST_TABLE_REF(((long) 6));
								STRUCT_KEY_SET(BgL_res4134z00_2122, BgL_kz00_2637);
							}
							return BgL_res4134z00_2122;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4276 */
	obj_t BGl_structzb2objectzd2ze3objec4276z83zzsaw_removez00(obj_t
		BgL_envz00_2816, obj_t BgL_oz00_2817, obj_t BgL_sz00_2818)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 13 */
			{
				BgL_cregz00_bglt BgL_oz00_2106;

				obj_t BgL_sz00_2107;

				{	/* SawMill/remove.scm 13 */
					BgL_cregz00_bglt BgL_auxz00_3882;

					BgL_oz00_2106 = (BgL_cregz00_bglt) (BgL_oz00_2817);
					BgL_sz00_2107 = BgL_sz00_2818;
					{

						{	/* SawMill/remove.scm 13 */
							obj_t BgL_old4180z00_2110;

							obj_t BgL_aux4181z00_2111;

							{	/* SawMill/remove.scm 13 */
								obj_t BgL_nextzd2method4275zd2_2117;

								BgL_nextzd2method4275zd2_2117 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2106),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_cregz00zzsaw_removez00);
								if (PROCEDUREP(BgL_nextzd2method4275zd2_2117))
									{	/* SawMill/remove.scm 13 */
										BgL_old4180z00_2110 =
											PROCEDURE_ENTRY(BgL_nextzd2method4275zd2_2117)
											(BgL_nextzd2method4275zd2_2117, (obj_t) (BgL_oz00_2106),
											BgL_sz00_2107, BEOA);
									}
								else
									{	/* SawMill/remove.scm 13 */
										BgL_old4180z00_2110 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2106), BgL_sz00_2107));
									}
							}
							BgL_aux4181z00_2111 =
								STRUCT_REF(BgL_sz00_2107, (int) (((long) 0)));
							{	/* SawMill/remove.scm 13 */
								BgL_cregz00_bglt BgL_new4182z00_2112;

								BgL_new4182z00_2112 =
									((BgL_cregz00_bglt) (BgL_old4180z00_2110));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4182z00_2112),
									BGl_classzd2numzd2zz__objectz00(BGl_cregz00zzsaw_removez00));
								{	/* SawMill/remove.scm 13 */
									BgL_cregz00_bglt BgL_arg4621z00_2114;

									{	/* SawMill/remove.scm 13 */
										obj_t BgL_arg4622z00_2115;

										obj_t BgL_arg4623z00_2116;

										BgL_arg4622z00_2115 =
											STRUCT_REF(BgL_aux4181z00_2111, (int) (((long) 0)));
										BgL_arg4623z00_2116 =
											STRUCT_REF(BgL_aux4181z00_2111, (int) (((long) 1)));
										{	/* SawMill/remove.scm 13 */
											BgL_cregz00_bglt BgL_res4680z00_2624;

											{	/* SawMill/remove.scm 13 */
												BgL_cregz00_bglt BgL_new4158z00_2617;

												BgL_new4158z00_2617 =
													((BgL_cregz00_bglt) BREF(GC_MALLOC(sizeof(struct
																BgL_cregz00_bgl))));
												{	/* SawMill/remove.scm 13 */
													BgL_cregz00_bglt BgL_res4679z00_2623;

													{	/* SawMill/remove.scm 13 */
														BgL_cregz00_bglt BgL_new4172z00_2618;

														BgL_new4172z00_2618 = BgL_new4158z00_2617;
														{	/* SawMill/remove.scm 13 */
															obj_t BgL_defs4170z00_2621;

															obj_t BgL_nbuses4171z00_2622;

															BgL_defs4170z00_2621 = BgL_arg4622z00_2115;
															BgL_nbuses4171z00_2622 = BgL_arg4623z00_2116;
															((((BgL_cregz00_bglt) CREF(BgL_new4172z00_2618))->
																	BgL_defsz00) =
																((obj_t) BgL_defs4170z00_2621), BUNSPEC);
															((((BgL_cregz00_bglt) CREF(BgL_new4172z00_2618))->
																	BgL_nbusesz00) =
																((obj_t) BgL_nbuses4171z00_2622), BUNSPEC);
															BgL_res4679z00_2623 = BgL_new4172z00_2618;
													}} BgL_res4679z00_2623;
												}
												BgL_res4680z00_2624 = BgL_new4158z00_2617;
											}
											BgL_arg4621z00_2114 = BgL_res4680z00_2624;
									}}
									{	/* SawMill/remove.scm 13 */
										obj_t BgL_auxz00_3908;

										BgL_objectz00_bglt BgL_auxz00_3906;

										BgL_auxz00_3908 = (obj_t) (BgL_arg4621z00_2114);
										BgL_auxz00_3906 =
											(BgL_objectz00_bglt) (BgL_new4182z00_2112);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3906, BgL_auxz00_3908);
								}}
								BgL_auxz00_3882 = BgL_new4182z00_2112;
					}}}
					return (obj_t) (BgL_auxz00_3882);
				}
			}
		}
	}



/* object->struct-creg4274 */
	obj_t BGl_objectzd2ze3structzd2creg4274ze3zzsaw_removez00(obj_t
		BgL_envz00_2819, obj_t BgL_obj4177z00_2820)
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 13 */
			{
				BgL_cregz00_bglt BgL_obj4177z00_2094;

				BgL_obj4177z00_2094 = (BgL_cregz00_bglt) (BgL_obj4177z00_2820);
				{

					{	/* SawMill/remove.scm 13 */
						obj_t BgL_res4178z00_2097;

						{	/* SawMill/remove.scm 13 */
							obj_t BgL_nextzd2method4273zd2_2104;

							BgL_nextzd2method4273zd2_2104 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4177z00_2094),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_cregz00zzsaw_removez00);
							if (PROCEDUREP(BgL_nextzd2method4273zd2_2104))
								{	/* SawMill/remove.scm 13 */
									BgL_res4178z00_2097 =
										PROCEDURE_ENTRY(BgL_nextzd2method4273zd2_2104)
										(BgL_nextzd2method4273zd2_2104,
										(obj_t) (BgL_obj4177z00_2094), BEOA);
								}
							else
								{	/* SawMill/remove.scm 13 */
									BgL_res4178z00_2097 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4177z00_2094));
								}
						}
						{	/* SawMill/remove.scm 13 */
							obj_t BgL_aux4179z00_2098;

							{	/* SawMill/remove.scm 13 */
								obj_t BgL_keyz00_2586;

								BgL_keyz00_2586 = CNST_TABLE_REF(((long) 7));
								BgL_aux4179z00_2098 =
									make_struct(BgL_keyz00_2586, (int) (((long) 2)), BUNSPEC);
							}
							{	/* SawMill/remove.scm 13 */
								obj_t BgL_arg4615z00_2100;

								{
									obj_t BgL_auxz00_3925;

									{	/* SawMill/remove.scm 13 */
										BgL_objectz00_bglt BgL_auxz00_3926;

										BgL_auxz00_3926 =
											(BgL_objectz00_bglt) (BgL_obj4177z00_2094);
										BgL_auxz00_3925 = BGL_OBJECT_WIDENING(BgL_auxz00_3926);
									}
									BgL_arg4615z00_2100 =
										(((BgL_cregz00_bglt) CREF(BgL_auxz00_3925))->BgL_defsz00);
								}
								{	/* SawMill/remove.scm 13 */
									int BgL_auxz00_3930;

									BgL_auxz00_3930 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4179z00_2098, BgL_auxz00_3930,
										BgL_arg4615z00_2100);
							}}
							{	/* SawMill/remove.scm 13 */
								obj_t BgL_arg4617z00_2102;

								{
									obj_t BgL_auxz00_3933;

									{	/* SawMill/remove.scm 13 */
										BgL_objectz00_bglt BgL_auxz00_3934;

										BgL_auxz00_3934 =
											(BgL_objectz00_bglt) (BgL_obj4177z00_2094);
										BgL_auxz00_3933 = BGL_OBJECT_WIDENING(BgL_auxz00_3934);
									}
									BgL_arg4617z00_2102 =
										(((BgL_cregz00_bglt) CREF(BgL_auxz00_3933))->BgL_nbusesz00);
								}
								{	/* SawMill/remove.scm 13 */
									int BgL_auxz00_3938;

									BgL_auxz00_3938 = (int) (((long) 1));
									STRUCT_SET(BgL_aux4179z00_2098, BgL_auxz00_3938,
										BgL_arg4617z00_2102);
							}}
							{	/* SawMill/remove.scm 13 */
								int BgL_auxz00_3941;

								BgL_auxz00_3941 = (int) (((long) 0));
								STRUCT_SET(BgL_res4178z00_2097, BgL_auxz00_3941,
									BgL_aux4179z00_2098);
							}
							{	/* SawMill/remove.scm 13 */
								obj_t BgL_auxz00_3944;

								BgL_auxz00_3944 = STRUCT_KEY(BgL_res4178z00_2097);
								STRUCT_KEY_SET(BgL_aux4179z00_2098, BgL_auxz00_3944);
							}
							{	/* SawMill/remove.scm 13 */
								obj_t BgL_kz00_2605;

								BgL_kz00_2605 = CNST_TABLE_REF(((long) 7));
								STRUCT_KEY_SET(BgL_res4178z00_2097, BgL_kz00_2605);
							}
							return BgL_res4178z00_2097;
						}
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_removez00()
	{
		AN_OBJECT;
		{	/* SawMill/remove.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4708z00zzsaw_removez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4708z00zzsaw_removez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4708z00zzsaw_removez00));
			BGl_modulezd2initializa7ationz75zzsaw_libz00(((long) 123885324),
				BSTRING_TO_STRING(BGl_string4708z00zzsaw_removez00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 192042637),
				BSTRING_TO_STRING(BGl_string4708z00zzsaw_removez00));
		}
	}

#ifdef __cplusplus
}
#endif
