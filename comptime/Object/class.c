/*===========================================================================*/
/*   (Object/class.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/class.scm)*/
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

	typedef struct BgL_globalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		obj_t BgL_modulez00;
		obj_t BgL_importz00;
		bool_t BgL_evaluablezf3zf3;
		obj_t BgL_libraryz00;
		bool_t BgL_userzf3zf3;
		obj_t BgL_pragmaz00;
		obj_t BgL_srcz00;
		obj_t BgL_jvmzd2typezd2namez00;
	}                *BgL_globalz00_bglt;

	typedef struct BgL_tclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		struct BgL_globalz00_bgl *BgL_holderz00;
		obj_t BgL_wideningz00;
		long BgL_depthz00;
		bool_t BgL_finalzf3zf3;
		obj_t BgL_constructorz00;
		obj_t BgL_virtualzd2slotszd2numberz00;
		bool_t BgL_abstractzf3zf3;
		obj_t BgL_widezd2typezd2;
	}                *BgL_tclassz00_bglt;

	typedef struct BgL_jclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		obj_t BgL_packagez00;
	}                *BgL_jclassz00_bglt;

	typedef struct BgL_wclassz00_bgl
	{
		obj_t BgL_itszd2classzd2;
	}                *BgL_wclassz00_bglt;


	BGL_EXPORTED_DECL BgL_wclassz00_bglt
		BGl_fillzd2wclassz12zc0zzobject_classz00(BgL_wclassz00_bglt, obj_t);
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t BGl__classzd2makezd2zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_jclassz00_bglt BGl_jclasszd2nilzd2zzobject_classz00();
	extern BgL_typez00_bglt BGl_makezd2typezd2zztype_typez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, int);
	BGL_EXPORTED_DECL BgL_tclassz00_bglt
		BGl_fillzd2tclassz12zc0zzobject_classz00(BgL_tclassz00_bglt, obj_t, obj_t,
		BgL_globalz00_bglt, obj_t, long, bool_t, obj_t, obj_t, bool_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_z52allocatezd2wclassz80zzobject_classz00();
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_z52allocatezd2tclassz80zzobject_classz00();
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2classzd2namez00zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl__fillzd2jclassz12zc0zzobject_classz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2tclas2563ze3zzobject_classz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_classz00 = BUNSPEC;
	extern obj_t BGl_getzd2objectzd2typez00zztype_cachez00();
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	extern BgL_globalz00_bglt BGl_globalzd2nilzd2zzast_varz00();
	BGL_EXPORTED_DEF obj_t BGl_wclassz00zzobject_classz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_tclassz00zzobject_classz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_declarezd2classzd2typez12z12zzobject_classz00(obj_t, BgL_globalz00_bglt,
		obj_t, bool_t, bool_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2classzd2listz00zzobject_classz00();
	static obj_t BGl__declarezd2classzd2typez12z12zzobject_classz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzobject_classz00();
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_wclassz00_bglt BGl_wclasszd2nilzd2zzobject_classz00();
	BGL_EXPORTED_DECL BgL_jclassz00_bglt
		BGl_fillzd2jclassz12zc0zzobject_classz00(BgL_jclassz00_bglt, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL BgL_wclassz00_bglt
		BGl_wideningzd2wclasszd2zzobject_classz00(obj_t);
	BGL_EXPORTED_DECL BgL_tclassz00_bglt BGl_tclasszd2nilzd2zzobject_classz00();
	BGL_EXPORTED_DECL BgL_tclassz00_bglt
		BGl_wideningzd2tclasszd2zzobject_classz00(obj_t, obj_t, BgL_globalz00_bglt,
		obj_t, long, bool_t, obj_t, obj_t, bool_t, obj_t);
	static obj_t BGl__makezd2jclasszd2zzobject_classz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__typezd2classzd2namez00zzobject_classz00(obj_t, obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_EXPORTED_DECL bool_t BGl_widezd2classzf3z21zzobject_classz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2allzd2slotsz00zzobject_classz00(BgL_tclassz00_bglt);
	extern obj_t
		BGl_globalzd2setzd2readzd2onlyz12zc0zzast_varz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_wclasszf3zf3zzobject_classz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzobject_classz00();
	BGL_EXPORTED_DECL obj_t
		BGl_classzd2makezd2zzobject_classz00(BgL_tclassz00_bglt);
	static obj_t BGl__findzd2classzd2constructorsz00zzobject_classz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_tclasszf3zf3zzobject_classz00(obj_t);
	static obj_t BGl__declarezd2javazd2classzd2typez12zc0zzobject_classz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2jclasszd2nilz52zzobject_classz00 = BUNSPEC;
	extern obj_t BGl_genzd2coercionzd2clausez12z12zzobject_coercionz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2557z83zzobject_classz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2561z83zzobject_classz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_classz00();
	static obj_t BGl_structzb2objectzd2ze3objec2565z83zzobject_classz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__finalzd2classzf3z21zzobject_classz00(obj_t, obj_t);
	static obj_t BGl__wideningzd2wclasszd2zzobject_classz00(obj_t, obj_t);
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl__wideningzd2tclasszd2zzobject_classz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_z52allocatezd2jclassz80zzobject_classz00();
	static obj_t BGl__classzd2nilzd2constructorz00zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_findzd2classzd2constructorsz00zzobject_classz00(BgL_tclassz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_jclasszf3zf3zzobject_classz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_jclassz00zzobject_classz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_jtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_coercionz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_coercionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_EXPORTED_DECL bool_t BGl_finalzd2classzf3z21zzobject_classz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2wclas2555ze3zzobject_classz00(obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2wclassz80zzobject_classz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzobject_classz00();
	static obj_t BGl__z52allocatezd2tclassz80zzobject_classz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawzd2widezd2classzd2idzd2zzobject_classz00(obj_t);
	static obj_t BGl_z52thezd2wclasszd2nilz52zzobject_classz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_wclassz00_bglt
		BGl_makezd2wclasszd2zzobject_classz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int,
		obj_t);
	BGL_EXPORTED_DECL BgL_tclassz00_bglt
		BGl_makezd2tclasszd2zzobject_classz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int, obj_t,
		obj_t, BgL_globalz00_bglt, obj_t, long, bool_t, obj_t, obj_t, bool_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_heapzd2addzd2classz12z12zzobject_classz00(BgL_tclassz00_bglt);
	BGL_IMPORT obj_t string_to_symbol(char *);
	static obj_t BGl__widezd2classzf3z21zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_jclassz00_bglt
		BGl_wideningzd2jclasszd2zzobject_classz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2tclasszd2nilz52zzobject_classz00 = BUNSPEC;
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_za2classzd2typezd2listza2z00zzobject_classz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t
		BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(BgL_typez00_bglt);
	static obj_t BGl__classzd2fillzd2zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_typezd2occurrencezd2incr2553z00zzobject_classz00(obj_t,
		obj_t);
	static obj_t BGl__classzd2allocatezd2zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_declarezd2javazd2classzd2typez12zc0zzobject_classz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__jclasszd2nilzd2zzobject_classz00(obj_t);
	extern obj_t BGl_genzd2classzd2coercersz12z12zzobject_coercionz00(obj_t,
		obj_t);
	static obj_t BGl__heapzd2addzd2classz12z12zzobject_classz00(obj_t, obj_t);
	extern obj_t BGl_za2sawza2z00zzengine_paramz00;
	static obj_t BGl__wideningzd2jclasszd2zzobject_classz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__sawzd2widezd2classzd2idzd2zzobject_classz00(obj_t, obj_t);
	static obj_t BGl__tclasszd2allzd2slotsz00zzobject_classz00(obj_t, obj_t);
	static obj_t BGl__typezd2subclasszf3z21zzobject_classz00(obj_t, obj_t, obj_t);
	static obj_t BGl__wclasszf3zf3zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classzd2predicatezd2zzobject_classz00(BgL_tclassz00_bglt);
	static obj_t BGl__tclasszf3zf3zzobject_classz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classzd2nilzd2constructorz00zzobject_classz00(BgL_tclassz00_bglt);
	static obj_t BGl__z52allocatezd2jclassz80zzobject_classz00(obj_t);
	static obj_t BGl__makezd2wclasszd2zzobject_classz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzobject_classz00();
	static obj_t BGl__fillzd2wclassz12zc0zzobject_classz00(obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2tclasszd2zzobject_classz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__wclasszd2nilzd2zzobject_classz00(obj_t);
	extern BgL_typez00_bglt BGl_declarezd2typez12zc0zztype_envz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classzd2allocatezd2zzobject_classz00(BgL_tclassz00_bglt);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t BGl_idzd2ze3namez31zzast_identz00(obj_t);
	BGL_EXPORTED_DECL BgL_jclassz00_bglt
		BGl_makezd2jclasszd2zzobject_classz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int, obj_t,
		obj_t, obj_t);
	static obj_t BGl__fillzd2tclassz12zc0zzobject_classz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__tclasszd2nilzd2zzobject_classz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2jclas2559ze3zzobject_classz00(obj_t,
		obj_t);
	static obj_t BGl__getzd2classzd2listz00zzobject_classz00(obj_t);
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_classz00();
	BGL_EXPORTED_DECL bool_t
		BGl_typezd2subclasszf3z21zzobject_classz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl__jclasszf3zf3zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classzd2fillzd2zzobject_classz00(BgL_tclassz00_bglt);
	static obj_t BGl__classzd2predicatezd2zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzobject_classz00();
	static obj_t __cnst[13];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2subclasszf3zd2envzf3zzobject_classz00,
		BgL_bgl__typeza7d2subclass2914za7,
		BGl__typezd2subclasszf3z21zzobject_classz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_wclasszd2nilzd2envz00zzobject_classz00,
		BgL_bgl__wclassza7d2nilza7d22915z00, BGl__wclasszd2nilzd2zzobject_classz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2jclasszd2envz52zzobject_classz00,
		BgL_bgl__za752allocateza7d2j2916z00,
		BGl__z52allocatezd2jclassz80zzobject_classz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2javazd2classzd2typez12zd2envz12zzobject_classz00,
		BgL_bgl__declareza7d2javaza72917z00,
		BGl__declarezd2javazd2classzd2typez12zc0zzobject_classz00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2nilzd2constructorzd2envzd2zzobject_classz00,
		BgL_bgl__classza7d2nilza7d2c2918z00,
		BGl__classzd2nilzd2constructorz00zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tclasszd2nilzd2envz00zzobject_classz00,
		BgL_bgl__tclassza7d2nilza7d22919z00, BGl__tclasszd2nilzd2zzobject_classz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2jclasszd2envz00zzobject_classz00,
		BgL_bgl__makeza7d2jclassza7d2920z00, BGl__makezd2jclasszd2zzobject_classz00,
		0L, BUNSPEC, 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_finalzd2classzf3zd2envzf3zzobject_classz00,
		BgL_bgl__finalza7d2classza7f2921z00,
		BGl__finalzd2classzf3z21zzobject_classz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_typezd2occurrencezd2incrementz12zd2envzc0zztype_typez00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2tclassz12zd2envz12zzobject_classz00,
		BgL_bgl__fillza7d2tclassza712922z00,
		BGl__fillzd2tclassz12zc0zzobject_classz00, 0L, BUNSPEC, 11);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2900z00zzobject_classz00,
		BgL_bgl_structza7b2objectza72923z00,
		BGl_structzb2objectzd2ze3objec2561z83zzobject_classz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2901z00zzobject_classz00,
		BgL_bgl_objectza7d2za7e3stru2924z00,
		BGl_objectzd2ze3structzd2tclas2563ze3zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2902z00zzobject_classz00,
		BgL_bgl_structza7b2objectza72925z00,
		BGl_structzb2objectzd2ze3objec2565z83zzobject_classz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2893z00zzobject_classz00,
		BgL_bgl_typeza7d2occurrenc2926za7,
		BGl_typezd2occurrencezd2incr2553z00zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2895z00zzobject_classz00,
		BgL_bgl_objectza7d2za7e3stru2927z00,
		BGl_objectzd2ze3structzd2wclas2555ze3zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2897z00zzobject_classz00,
		BgL_bgl_structza7b2objectza72928z00,
		BGl_structzb2objectzd2ze3objec2557z83zzobject_classz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2899z00zzobject_classz00,
		BgL_bgl_objectza7d2za7e3stru2929z00,
		BGl_objectzd2ze3structzd2jclas2559ze3zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2wclasszd2envz52zzobject_classz00,
		BgL_bgl__za752allocateza7d2w2930z00,
		BGl__z52allocatezd2wclassz80zzobject_classz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2predicatezd2envz00zzobject_classz00,
		BgL_bgl__classza7d2predica2931za7,
		BGl__classzd2predicatezd2zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2tclasszd2envz52zzobject_classz00,
		BgL_bgl__za752allocateza7d2t2932z00,
		BGl__z52allocatezd2tclassz80zzobject_classz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2jclassz12zd2envz12zzobject_classz00,
		BgL_bgl__fillza7d2jclassza712933z00,
		BGl__fillzd2jclassz12zc0zzobject_classz00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jclasszd2nilzd2envz00zzobject_classz00,
		BgL_bgl__jclassza7d2nilza7d22934z00, BGl__jclasszd2nilzd2zzobject_classz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2classzd2listzd2envzd2zzobject_classz00,
		BgL_bgl__getza7d2classza7d2l2935z00,
		BGl__getzd2classzd2listz00zzobject_classz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2classzd2namezd2envzd2zzobject_classz00,
		BgL_bgl__typeza7d2classza7d22936z00,
		BGl__typezd2classzd2namez00zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2wclasszd2envz00zzobject_classz00,
		BgL_bgl__makeza7d2wclassza7d2937z00, BGl__makezd2wclasszd2zzobject_classz00,
		0L, BUNSPEC, 16);
	      DEFINE_STRING(BGl_string2888z00zzobject_classz00,
		BgL_bgl_string2888za700za7za7o2938za7, "#!", 2);
	      DEFINE_STRING(BGl_string2890z00zzobject_classz00,
		BgL_bgl_string2890za700za7za7o2939za7, "_bgl", 4);
	      DEFINE_STRING(BGl_string2889z00zzobject_classz00,
		BgL_bgl_string2889za700za7za7o2940za7, "struct ", 7);
	      DEFINE_STRING(BGl_string2891z00zzobject_classz00,
		BgL_bgl_string2891za700za7za7o2941za7, "_bglt", 5);
	      DEFINE_STRING(BGl_string2892z00zzobject_classz00,
		BgL_bgl_string2892za700za7za7o2942za7, "", 0);
	      DEFINE_STRING(BGl_string2903z00zzobject_classz00,
		BgL_bgl_string2903za700za7za7o2943za7, "object_class", 12);
	      DEFINE_STRING(BGl_string2904z00zzobject_classz00,
		BgL_bgl_string2904za700za7za7o2944za7,
		"_ wclass jclass tclass %allocate- -nil ? ! fill- make- java widening bigloo ",
		76);
	      DEFINE_STRING(BGl_string2894z00zzobject_classz00,
		BgL_bgl_string2894za700za7za7o2945za7, "type-occurrence-increment!", 26);
	      DEFINE_STRING(BGl_string2896z00zzobject_classz00,
		BgL_bgl_string2896za700za7za7o2946za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string2898z00zzobject_classz00,
		BgL_bgl_string2898za700za7za7o2947za7, "struct+object->object::object", 29);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2tclasszd2envz00zzobject_classz00,
		BgL_bgl__makeza7d2tclassza7d2948z00, BGl__makezd2tclasszd2zzobject_classz00,
		0L, BUNSPEC, 25);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2allocatezd2envz00zzobject_classz00,
		BgL_bgl__classza7d2allocat2949za7,
		BGl__classzd2allocatezd2zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_wclasszf3zd2envz21zzobject_classz00,
		BgL_bgl__wclassza7f3za7f3za7za7o2950z00, BGl__wclasszf3zf3zzobject_classz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2makezd2envz00zzobject_classz00,
		BgL_bgl__classza7d2makeza7d22951z00, BGl__classzd2makezd2zzobject_classz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_widezd2classzf3zd2envzf3zzobject_classz00,
		BgL_bgl__wideza7d2classza7f32952z00,
		BGl__widezd2classzf3z21zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_findzd2classzd2constructorszd2envzd2zzobject_classz00,
		BgL_bgl__findza7d2classza7d22953z00,
		BGl__findzd2classzd2constructorsz00zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_heapzd2addzd2classz12zd2envzc0zzobject_classz00,
		BgL_bgl__heapza7d2addza7d2cl2954z00,
		BGl__heapzd2addzd2classz12z12zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_wideningzd2jclasszd2envz00zzobject_classz00,
		BgL_bgl__wideningza7d2jcla2955za7,
		BGl__wideningzd2jclasszd2zzobject_classz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawzd2widezd2classzd2idzd2envz00zzobject_classz00,
		BgL_bgl__sawza7d2wideza7d2cl2956z00,
		BGl__sawzd2widezd2classzd2idzd2zzobject_classz00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tclasszf3zd2envz21zzobject_classz00,
		BgL_bgl__tclassza7f3za7f3za7za7o2957z00, BGl__tclasszf3zf3zzobject_classz00,
		0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2fillzd2envz00zzobject_classz00,
		BgL_bgl__classza7d2fillza7d22958z00, BGl__classzd2fillzd2zzobject_classz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_wideningzd2wclasszd2envz00zzobject_classz00,
		BgL_bgl__wideningza7d2wcla2959za7,
		BGl__wideningzd2wclasszd2zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2wclassz12zd2envz12zzobject_classz00,
		BgL_bgl__fillza7d2wclassza712960z00,
		BGl__fillzd2wclassz12zc0zzobject_classz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jclasszf3zd2envz21zzobject_classz00,
		BgL_bgl__jclassza7f3za7f3za7za7o2961z00, BGl__jclasszf3zf3zzobject_classz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2allzd2slotszd2envzd2zzobject_classz00,
		BgL_bgl__tclassza7d2allza7d22962z00,
		BGl__tclasszd2allzd2slotsz00zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_wideningzd2tclasszd2envz00zzobject_classz00,
		BgL_bgl__wideningza7d2tcla2963za7,
		BGl__wideningzd2tclasszd2zzobject_classz00, 0L, BUNSPEC, 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2classzd2typez12zd2envzc0zzobject_classz00,
		BgL_bgl__declareza7d2class2964za7,
		BGl__declarezd2classzd2typez12z12zzobject_classz00, 0L, BUNSPEC, 6);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long
		BgL_checksumz00_1940, char *BgL_fromz00_1941)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_classz00))
				{
					BGl_requirezd2initializa7ationz75zzobject_classz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzobject_classz00();
					BGl_cnstzd2initzd2zzobject_classz00();
					BGl_importedzd2moduleszd2initz00zzobject_classz00();
					BGl_objectzd2initzd2zzobject_classz00();
					BGl_methodzd2initzd2zzobject_classz00();
					BGl_toplevelzd2initzd2zzobject_classz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_classz00()
	{
		AN_OBJECT;
		{	/* Object/class.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "object_class");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "object_class");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"object_class");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_class");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_class");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_classz00()
	{
		AN_OBJECT;
		{	/* Object/class.scm 15 */
			{	/* Object/class.scm 15 */
				obj_t BgL_cportz00_1865;

				BgL_cportz00_1865 =
					bgl_open_input_string(BGl_string2904z00zzobject_classz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1866;

					BgL_iz00_1866 = ((long) 12);
				BgL_loopz00_1867:
					if ((BgL_iz00_1866 == ((long) -1)))
						{	/* Object/class.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Object/class.scm 15 */
							{	/* Object/class.scm 15 */
								obj_t BgL_arg2906z00_1869;

								{	/* Object/class.scm 15 */

									{	/* Object/class.scm 15 */
										obj_t BgL_locationz00_1871;

										BgL_locationz00_1871 = BBOOL(((bool_t) 0));
										{	/* Object/class.scm 15 */

											BgL_arg2906z00_1869 =
												BGl_readz00zz__readerz00(BgL_cportz00_1865,
												BgL_locationz00_1871);
										}
									}
								}
								{	/* Object/class.scm 15 */
									int BgL_auxz00_1962;

									BgL_auxz00_1962 = (int) (BgL_iz00_1866);
									CNST_TABLE_SET(BgL_auxz00_1962, BgL_arg2906z00_1869);
							}}
							{	/* Object/class.scm 15 */
								int BgL_auxz00_1872;

								BgL_auxz00_1872 = (int) ((BgL_iz00_1866 - ((long) 1)));
								{
									long BgL_iz00_1967;

									BgL_iz00_1967 = (long) (BgL_auxz00_1872);
									BgL_iz00_1866 = BgL_iz00_1967;
									goto BgL_loopz00_1867;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzobject_classz00()
	{
		AN_OBJECT;
		{	/* Object/class.scm 15 */
			BGl_za2classzd2typezd2listza2z00zzobject_classz00 = BNIL;
			return BUNSPEC;
		}
	}



/* get-class-list */
	BGL_EXPORTED_DEF obj_t BGl_getzd2classzd2listz00zzobject_classz00()
	{
		AN_OBJECT;
		{	/* Object/class.scm 91 */
			return BGl_za2classzd2typezd2listza2z00zzobject_classz00;
		}
	}



/* _get-class-list */
	obj_t BGl__getzd2classzd2listz00zzobject_classz00(obj_t BgL_envz00_1682)
	{
		AN_OBJECT;
		{	/* Object/class.scm 91 */
			return BGl_za2classzd2typezd2listza2z00zzobject_classz00;
		}
	}



/* heap-add-class! */
	BGL_EXPORTED_DEF obj_t
		BGl_heapzd2addzd2classz12z12zzobject_classz00(BgL_tclassz00_bglt
		BgL_typez00_1)
	{
		AN_OBJECT;
		{	/* Object/class.scm 100 */
			return (BGl_za2classzd2typezd2listza2z00zzobject_classz00 =
				MAKE_PAIR(
					(obj_t) (BgL_typez00_1),
					BGl_za2classzd2typezd2listza2z00zzobject_classz00), BUNSPEC);
		}
	}



/* _heap-add-class! */
	obj_t BGl__heapzd2addzd2classz12z12zzobject_classz00(obj_t BgL_envz00_1683,
		obj_t BgL_typez00_1684)
	{
		AN_OBJECT;
		{	/* Object/class.scm 100 */
			return
				BGl_heapzd2addzd2classz12z12zzobject_classz00(
				(BgL_tclassz00_bglt) (BgL_typez00_1684));
		}
	}



/* saw-wide-class-id */
	BGL_EXPORTED_DEF obj_t BGl_sawzd2widezd2classzd2idzd2zzobject_classz00(obj_t
		BgL_classzd2idzd2_2)
	{
		AN_OBJECT;
		{	/* Object/class.scm 110 */
			{	/* Object/class.scm 111 */
				obj_t BgL_arg2566z00_576;

				{	/* Object/class.scm 111 */
					obj_t BgL_arg2572z00_578;

					{	/* Object/class.scm 111 */
						obj_t BgL_res2838z00_1009;

						{	/* Object/class.scm 111 */
							obj_t BgL_arg2063z00_1008;

							BgL_arg2063z00_1008 = SYMBOL_TO_STRING(BgL_classzd2idzd2_2);
							BgL_res2838z00_1009 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2063z00_1008);
						}
						BgL_arg2572z00_578 = BgL_res2838z00_1009;
					}
					BgL_arg2566z00_576 =
						string_append(BGl_string2888z00zzobject_classz00,
						BgL_arg2572z00_578);
				}
				return string_to_symbol(BSTRING_TO_STRING(BgL_arg2566z00_576));
			}
		}
	}



/* _saw-wide-class-id */
	obj_t BGl__sawzd2widezd2classzd2idzd2zzobject_classz00(obj_t BgL_envz00_1685,
		obj_t BgL_classzd2idzd2_1686)
	{
		AN_OBJECT;
		{	/* Object/class.scm 110 */
			return
				BGl_sawzd2widezd2classzd2idzd2zzobject_classz00(BgL_classzd2idzd2_1686);
		}
	}



/* type-class-name */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2classzd2namez00zzobject_classz00(BgL_typez00_bglt BgL_classz00_3)
	{
		AN_OBJECT;
		{	/* Object/class.scm 116 */
			{	/* Object/class.scm 118 */
				bool_t BgL_testz00_1979;

				{	/* Object/class.scm 118 */
					obj_t BgL_obj2306z00_1011;

					BgL_obj2306z00_1011 = (obj_t) (BgL_classz00_3);
					BgL_testz00_1979 =
						BGl_iszd2azf3z21zz__objectz00(BgL_obj2306z00_1011,
						BGl_tclassz00zzobject_classz00);
				}
				if (BgL_testz00_1979)
					{	/* Object/class.scm 120 */
						bool_t BgL_testz00_1982;

						{	/* Object/class.scm 120 */
							bool_t BgL_testz00_1983;

							{	/* Object/class.scm 120 */
								BgL_tclassz00_bglt BgL_obj2314z00_1012;

								BgL_obj2314z00_1012 = (BgL_tclassz00_bglt) (BgL_classz00_3);
								{	/* Object/class.scm 120 */
									obj_t BgL_auxz00_1985;

									{
										obj_t BgL_auxz00_1986;

										{	/* Object/class.scm 120 */
											BgL_objectz00_bglt BgL_auxz00_1987;

											BgL_auxz00_1987 =
												(BgL_objectz00_bglt) (BgL_obj2314z00_1012);
											BgL_auxz00_1986 = BGL_OBJECT_WIDENING(BgL_auxz00_1987);
										}
										BgL_auxz00_1985 =
											(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1986))->
											BgL_wideningz00);
									}
									BgL_testz00_1983 = CBOOL(BgL_auxz00_1985);
								}
							}
							if (BgL_testz00_1983)
								{	/* Object/class.scm 120 */
									BgL_testz00_1982 = CBOOL(BGl_za2sawza2z00zzengine_paramz00);
								}
							else
								{	/* Object/class.scm 120 */
									BgL_testz00_1982 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_1982)
							{	/* Object/class.scm 121 */
								BgL_typez00_bglt BgL_obj1509z00_1014;

								{	/* Object/class.scm 121 */
									BgL_tclassz00_bglt BgL_obj2324z00_1013;

									BgL_obj2324z00_1013 = (BgL_tclassz00_bglt) (BgL_classz00_3);
									{	/* Object/class.scm 121 */
										obj_t BgL_auxz00_1994;

										{
											obj_t BgL_auxz00_1995;

											{	/* Object/class.scm 121 */
												BgL_objectz00_bglt BgL_auxz00_1996;

												BgL_auxz00_1996 =
													(BgL_objectz00_bglt) (BgL_obj2324z00_1013);
												BgL_auxz00_1995 = BGL_OBJECT_WIDENING(BgL_auxz00_1996);
											}
											BgL_auxz00_1994 =
												(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1995))->
												BgL_widezd2typezd2);
										}
										BgL_obj1509z00_1014 = (BgL_typez00_bglt) (BgL_auxz00_1994);
									}
								}
								return
									(((BgL_typez00_bglt) CREF(BgL_obj1509z00_1014))->BgL_namez00);
							}
						else
							{	/* Object/class.scm 120 */
								return (((BgL_typez00_bglt) CREF(BgL_classz00_3))->BgL_namez00);
							}
					}
				else
					{	/* Object/class.scm 118 */
						return (((BgL_typez00_bglt) CREF(BgL_classz00_3))->BgL_namez00);
					}
			}
		}
	}



/* _type-class-name */
	obj_t BGl__typezd2classzd2namez00zzobject_classz00(obj_t BgL_envz00_1687,
		obj_t BgL_classz00_1688)
	{
		AN_OBJECT;
		{	/* Object/class.scm 116 */
			return
				BGl_typezd2classzd2namez00zzobject_classz00(
				(BgL_typez00_bglt) (BgL_classz00_1688));
		}
	}



/* declare-class-type! */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_declarezd2classzd2typez12z12zzobject_classz00(obj_t
		BgL_classzd2defzd2_4, BgL_globalz00_bglt BgL_classzd2holderzd2_5,
		obj_t BgL_wideningz00_6, bool_t BgL_finalzf3zf3_7,
		bool_t BgL_abstractzf3zf3_8, obj_t BgL_srcz00_9)
	{
		AN_OBJECT;
		{	/* Object/class.scm 136 */
			{	/* Object/class.scm 137 */
				obj_t BgL_classzd2identzd2_583;

				BgL_classzd2identzd2_583 =
					BGl_parsezd2idzd2zzast_identz00(CAR(BgL_classzd2defzd2_4),
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_9));
				{	/* Object/class.scm 137 */
					obj_t BgL_classzd2idzd2_584;

					BgL_classzd2idzd2_584 = CAR(BgL_classzd2identzd2_583);
					{	/* Object/class.scm 138 */
						obj_t BgL_superz00_585;

						{	/* Object/class.scm 139 */
							obj_t BgL_superz00_608;

							BgL_superz00_608 = CDR(BgL_classzd2identzd2_583);
							{	/* Object/class.scm 141 */
								bool_t BgL_testz00_2011;

								{	/* Object/class.scm 141 */
									obj_t BgL_auxz00_2012;

									{
										BgL_typez00_bglt BgL_auxz00_2013;

										BgL_auxz00_2013 = (BgL_typez00_bglt) (BgL_superz00_608);
										BgL_auxz00_2012 =
											(((BgL_typez00_bglt) CREF(BgL_auxz00_2013))->BgL_idz00);
									}
									BgL_testz00_2011 = (BgL_auxz00_2012 == BgL_classzd2idzd2_584);
								}
								if (BgL_testz00_2011)
									{	/* Object/class.scm 141 */
										BgL_superz00_585 = BFALSE;
									}
								else
									{	/* Object/class.scm 141 */
										if ((BgL_superz00_608 == BGl_za2_za2z00zztype_cachez00))
											{	/* Object/class.scm 143 */
												BgL_superz00_585 =
													BGl_getzd2objectzd2typez00zztype_cachez00();
											}
										else
											{	/* Object/class.scm 143 */
												BgL_superz00_585 = BgL_superz00_608;
											}
									}
							}
						}
						{	/* Object/class.scm 139 */
							obj_t BgL_namez00_586;

							BgL_namez00_586 =
								BGl_idzd2ze3namez31zzast_identz00(BgL_classzd2idzd2_584);
							{	/* Object/class.scm 147 */
								obj_t BgL_siza7eofza7_587;

								BgL_siza7eofza7_587 =
									string_append_3(BGl_string2889z00zzobject_classz00,
									BgL_namez00_586, BGl_string2890z00zzobject_classz00);
								{	/* Object/class.scm 148 */
									obj_t BgL_tzd2namezd2_588;

									BgL_tzd2namezd2_588 =
										string_append(BgL_namez00_586,
										BGl_string2891z00zzobject_classz00);
									{	/* Object/class.scm 149 */
										BgL_typez00_bglt BgL_typez00_589;

										BgL_typez00_589 =
											BGl_declarezd2typez12zc0zztype_envz00
											(BgL_classzd2idzd2_584, BgL_tzd2namezd2_588,
											CNST_TABLE_REF(((long) 0)));
										{	/* Object/class.scm 150 */

											BGl_globalzd2setzd2readzd2onlyz12zc0zzast_varz00
												(BgL_classzd2holderzd2_5);
											((((BgL_globalz00_bglt) CREF(BgL_classzd2holderzd2_5))->
													BgL_evaluablezf3zf3) =
												((bool_t) ((bool_t) 1)), BUNSPEC);
											{	/* Object/class.scm 157 */
												BgL_typez00_bglt BgL_obj2540z00_590;

												BgL_obj2540z00_590 =
													((BgL_typez00_bglt) BgL_typez00_589);
												{	/* Object/class.scm 159 */
													BgL_tclassz00_bglt BgL_arg2586z00_591;

													{	/* Object/class.scm 159 */
														long BgL_arg2587z00_592;

														obj_t BgL_arg2589z00_593;

														if (BGl_iszd2azf3z21zz__objectz00(BgL_superz00_585,
																BGl_tclassz00zzobject_classz00))
															{	/* Object/class.scm 161 */
																long BgL_auxz00_2030;

																{	/* Object/class.scm 161 */
																	BgL_tclassz00_bglt BgL_obj2315z00_1024;

																	BgL_obj2315z00_1024 =
																		(BgL_tclassz00_bglt) (BgL_superz00_585);
																	{
																		obj_t BgL_auxz00_2032;

																		{	/* Object/class.scm 161 */
																			BgL_objectz00_bglt BgL_auxz00_2033;

																			BgL_auxz00_2033 =
																				(BgL_objectz00_bglt)
																				(BgL_obj2315z00_1024);
																			BgL_auxz00_2032 =
																				BGL_OBJECT_WIDENING(BgL_auxz00_2033);
																		}
																		BgL_auxz00_2030 =
																			(((BgL_tclassz00_bglt)
																				CREF(BgL_auxz00_2032))->BgL_depthz00);
																}}
																BgL_arg2587z00_592 =
																	(BgL_auxz00_2030 + ((long) 1));
															}
														else
															{	/* Object/class.scm 159 */
																BgL_arg2587z00_592 = ((long) 0);
															}
														{	/* Object/class.scm 166 */
															obj_t BgL_pairz00_1027;

															BgL_pairz00_1027 = BgL_classzd2defzd2_4;
															BgL_arg2589z00_593 = CAR(CDR(BgL_pairz00_1027));
														}
														{	/* Object/class.scm 157 */
															BgL_tclassz00_bglt BgL_res2840z00_1064;

															{	/* Object/class.scm 157 */
																obj_t BgL_virtualzd2slotszd2number2245z00_1038;

																BgL_virtualzd2slotszd2number2245z00_1038 =
																	BINT(((long) 0));
																{	/* Object/class.scm 157 */
																	BgL_tclassz00_bglt BgL_new2248z00_1041;

																	BgL_new2248z00_1041 =
																		((BgL_tclassz00_bglt)
																		BREF(GC_MALLOC(sizeof(struct
																					BgL_tclassz00_bgl))));
																	{	/* Object/class.scm 157 */
																		BgL_tclassz00_bglt BgL_res2839z00_1063;

																		{	/* Object/class.scm 157 */
																			BgL_tclassz00_bglt BgL_new2287z00_1042;

																			BgL_new2287z00_1042 = BgL_new2248z00_1041;
																			{	/* Object/class.scm 157 */
																				obj_t BgL_itszd2super2277zd2_1053;

																				obj_t BgL_slots2278z00_1054;

																				BgL_globalz00_bglt
																					BgL_holder2279z00_1055;
																				obj_t BgL_widening2280z00_1056;

																				long BgL_depth2281z00_1057;

																				bool_t BgL_finalzf32282zf3_1058;

																				obj_t BgL_constructor2283z00_1059;

																				obj_t
																					BgL_virtualzd2slotszd2number2284z00_1060;
																				bool_t BgL_abstractzf32285zf3_1061;

																				obj_t BgL_widezd2type2286zd2_1062;

																				BgL_itszd2super2277zd2_1053 =
																					BgL_superz00_585;
																				BgL_slots2278z00_1054 = BUNSPEC;
																				BgL_holder2279z00_1055 =
																					BgL_classzd2holderzd2_5;
																				BgL_widening2280z00_1056 =
																					BgL_wideningz00_6;
																				BgL_depth2281z00_1057 =
																					BgL_arg2587z00_592;
																				BgL_finalzf32282zf3_1058 =
																					BgL_finalzf3zf3_7;
																				BgL_constructor2283z00_1059 =
																					BgL_arg2589z00_593;
																				BgL_virtualzd2slotszd2number2284z00_1060
																					=
																					BgL_virtualzd2slotszd2number2245z00_1038;
																				BgL_abstractzf32285zf3_1061 =
																					BgL_abstractzf3zf3_8;
																				BgL_widezd2type2286zd2_1062 = BFALSE;
																				((((BgL_tclassz00_bglt)
																							CREF(BgL_new2287z00_1042))->
																						BgL_itszd2superzd2) =
																					((obj_t) BgL_itszd2super2277zd2_1053),
																					BUNSPEC);
																				((((BgL_tclassz00_bglt)
																							CREF(BgL_new2287z00_1042))->
																						BgL_slotsz00) =
																					((obj_t) BgL_slots2278z00_1054),
																					BUNSPEC);
																				((((BgL_tclassz00_bglt)
																							CREF(BgL_new2287z00_1042))->
																						BgL_holderz00) =
																					((BgL_globalz00_bglt)
																						BgL_holder2279z00_1055), BUNSPEC);
																				((((BgL_tclassz00_bglt)
																							CREF(BgL_new2287z00_1042))->
																						BgL_wideningz00) =
																					((obj_t) BgL_widening2280z00_1056),
																					BUNSPEC);
																				((((BgL_tclassz00_bglt)
																							CREF(BgL_new2287z00_1042))->
																						BgL_depthz00) =
																					((long) BgL_depth2281z00_1057),
																					BUNSPEC);
																				((((BgL_tclassz00_bglt)
																							CREF(BgL_new2287z00_1042))->
																						BgL_finalzf3zf3) =
																					((bool_t) BgL_finalzf32282zf3_1058),
																					BUNSPEC);
																				((((BgL_tclassz00_bglt)
																							CREF(BgL_new2287z00_1042))->
																						BgL_constructorz00) =
																					((obj_t) BgL_constructor2283z00_1059),
																					BUNSPEC);
																				((((BgL_tclassz00_bglt)
																							CREF(BgL_new2287z00_1042))->
																						BgL_virtualzd2slotszd2numberz00) =
																					((obj_t)
																						BgL_virtualzd2slotszd2number2284z00_1060),
																					BUNSPEC);
																				((((BgL_tclassz00_bglt)
																							CREF(BgL_new2287z00_1042))->
																						BgL_abstractzf3zf3) =
																					((bool_t)
																						BgL_abstractzf32285zf3_1061),
																					BUNSPEC);
																				((((BgL_tclassz00_bglt)
																							CREF(BgL_new2287z00_1042))->
																						BgL_widezd2typezd2) =
																					((obj_t) BgL_widezd2type2286zd2_1062),
																					BUNSPEC);
																				BgL_res2839z00_1063 =
																					BgL_new2287z00_1042;
																		}} BgL_res2839z00_1063;
																	}
																	BgL_res2840z00_1064 = BgL_new2248z00_1041;
															}}
															BgL_arg2586z00_591 = BgL_res2840z00_1064;
													}}
													{	/* Object/class.scm 157 */
														obj_t BgL_auxz00_2054;

														BgL_objectz00_bglt BgL_auxz00_2052;

														BgL_auxz00_2054 = (obj_t) (BgL_arg2586z00_591);
														BgL_auxz00_2052 =
															(BgL_objectz00_bglt) (BgL_obj2540z00_590);
														BGL_OBJECT_WIDENING_SET(BgL_auxz00_2052,
															BgL_auxz00_2054);
												}}
												BGL_OBJECT_CLASS_NUM_SET(
													(BgL_objectz00_bglt) (BgL_obj2540z00_590),
													BGl_classzd2numzd2zz__objectz00
													(BGl_tclassz00zzobject_classz00));
												BgL_obj2540z00_590;
											}
											{	/* Object/class.scm 171 */
												bool_t BgL_testz00_2060;

												if ((BgL_wideningz00_6 == CNST_TABLE_REF(((long) 1))))
													{	/* Object/class.scm 171 */
														BgL_testz00_2060 =
															CBOOL(BGl_za2sawza2z00zzengine_paramz00);
													}
												else
													{	/* Object/class.scm 171 */
														BgL_testz00_2060 = ((bool_t) 0);
													}
												if (BgL_testz00_2060)
													{	/* Object/class.scm 172 */
														obj_t BgL_wtidz00_600;

														BgL_wtidz00_600 =
															BGl_sawzd2widezd2classzd2idzd2zzobject_classz00
															(BgL_classzd2idzd2_584);
														{	/* Object/class.scm 172 */
															BgL_typez00_bglt BgL_wtz00_601;

															{	/* Object/class.scm 173 */
																BgL_typez00_bglt BgL_obj2541z00_604;

																BgL_obj2541z00_604 =
																	((BgL_typez00_bglt)
																	BGl_declarezd2typez12zc0zztype_envz00
																	(BgL_wtidz00_600, BgL_tzd2namezd2_588,
																		CNST_TABLE_REF(((long) 0))));
																{	/* Object/class.scm 173 */
																	BgL_wclassz00_bglt BgL_arg2615z00_605;

																	{	/* Object/class.scm 173 */
																		BgL_wclassz00_bglt BgL_res2842z00_1073;

																		{	/* Object/class.scm 173 */
																			obj_t BgL_itszd2class2461zd2_1067;

																			BgL_itszd2class2461zd2_1067 =
																				(obj_t) (BgL_typez00_589);
																			{	/* Object/class.scm 173 */
																				BgL_wclassz00_bglt BgL_new2462z00_1068;

																				BgL_new2462z00_1068 =
																					((BgL_wclassz00_bglt)
																					BREF(GC_MALLOC(sizeof(struct
																								BgL_wclassz00_bgl))));
																				{	/* Object/class.scm 173 */
																					BgL_wclassz00_bglt
																						BgL_res2841z00_1072;
																					{	/* Object/class.scm 173 */
																						BgL_wclassz00_bglt
																							BgL_new2483z00_1069;
																						BgL_new2483z00_1069 =
																							BgL_new2462z00_1068;
																						{	/* Object/class.scm 173 */
																							obj_t BgL_itszd2class2482zd2_1071;

																							BgL_itszd2class2482zd2_1071 =
																								BgL_itszd2class2461zd2_1067;
																							((((BgL_wclassz00_bglt)
																										CREF(BgL_new2483z00_1069))->
																									BgL_itszd2classzd2) =
																								((obj_t)
																									BgL_itszd2class2482zd2_1071),
																								BUNSPEC);
																							BgL_res2841z00_1072 =
																								BgL_new2483z00_1069;
																					}} BgL_res2841z00_1072;
																				}
																				BgL_res2842z00_1073 =
																					BgL_new2462z00_1068;
																		}}
																		BgL_arg2615z00_605 = BgL_res2842z00_1073;
																	}
																	{	/* Object/class.scm 173 */
																		obj_t BgL_auxz00_2074;

																		BgL_objectz00_bglt BgL_auxz00_2072;

																		BgL_auxz00_2074 =
																			(obj_t) (BgL_arg2615z00_605);
																		BgL_auxz00_2072 =
																			(BgL_objectz00_bglt) (BgL_obj2541z00_604);
																		BGL_OBJECT_WIDENING_SET(BgL_auxz00_2072,
																			BgL_auxz00_2074);
																}}
																BGL_OBJECT_CLASS_NUM_SET(
																	(BgL_objectz00_bglt) (BgL_obj2541z00_604),
																	BGl_classzd2numzd2zz__objectz00
																	(BGl_wclassz00zzobject_classz00));
																BgL_wtz00_601 = BgL_obj2541z00_604;
															}
															{	/* Object/class.scm 173 */

																{	/* Object/class.scm 175 */
																	BgL_tclassz00_bglt BgL_obj2326z00_1076;

																	obj_t BgL_val2325z00_1077;

																	BgL_obj2326z00_1076 =
																		(BgL_tclassz00_bglt) (BgL_typez00_589);
																	BgL_val2325z00_1077 = (obj_t) (BgL_wtz00_601);
																	{
																		obj_t BgL_auxz00_2082;

																		{	/* Object/class.scm 175 */
																			BgL_objectz00_bglt BgL_auxz00_2083;

																			BgL_auxz00_2083 =
																				(BgL_objectz00_bglt)
																				(BgL_obj2326z00_1076);
																			BgL_auxz00_2082 =
																				BGL_OBJECT_WIDENING(BgL_auxz00_2083);
																		}
																		((((BgL_tclassz00_bglt)
																					CREF(BgL_auxz00_2082))->
																				BgL_widezd2typezd2) =
																			((obj_t) BgL_val2325z00_1077), BUNSPEC);
																}}
																{	/* Object/class.scm 176 */
																	obj_t BgL_arg2608z00_602;

																	{
																		BgL_typez00_bglt BgL_auxz00_2087;

																		BgL_auxz00_2087 =
																			(BgL_typez00_bglt) (BgL_superz00_585);
																		BgL_arg2608z00_602 =
																			(((BgL_typez00_bglt)
																				CREF(BgL_auxz00_2087))->BgL_namez00);
																	}
																	((((BgL_typez00_bglt) CREF(BgL_typez00_589))->
																			BgL_namez00) =
																		((obj_t) BgL_arg2608z00_602), BUNSPEC);
																}
																{	/* Object/class.scm 177 */
																	obj_t BgL_list2609z00_603;

																	BgL_list2609z00_603 = MAKE_PAIR(BFALSE, BNIL);
																	BGl_genzd2coercionzd2clausez12z12zzobject_coercionz00
																		(BgL_wtidz00_600, BgL_superz00_585,
																		BgL_list2609z00_603);
																}
																BGl_genzd2classzd2coercersz12z12zzobject_coercionz00
																	((obj_t) (BgL_wtz00_601), BgL_superz00_585);
													}}}
												else
													{	/* Object/class.scm 171 */
														BFALSE;
													}
											}
											((((BgL_typez00_bglt) CREF(BgL_typez00_589))->
													BgL_siza7eza7) =
												((obj_t) BgL_siza7eofza7_587), BUNSPEC);
											BGl_za2classzd2typezd2listza2z00zzobject_classz00 =
												MAKE_PAIR((obj_t) (BgL_typez00_589),
												BGl_za2classzd2typezd2listza2z00zzobject_classz00);
											return BgL_typez00_589;
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



/* _declare-class-type! */
	obj_t BGl__declarezd2classzd2typez12z12zzobject_classz00(obj_t
		BgL_envz00_1689, obj_t BgL_classzd2defzd2_1690,
		obj_t BgL_classzd2holderzd2_1691, obj_t BgL_wideningz00_1692,
		obj_t BgL_finalzf3zf3_1693, obj_t BgL_abstractzf3zf3_1694,
		obj_t BgL_srcz00_1695)
	{
		AN_OBJECT;
		{	/* Object/class.scm 136 */
			return
				(obj_t) (BGl_declarezd2classzd2typez12z12zzobject_classz00
				(BgL_classzd2defzd2_1690,
					(BgL_globalz00_bglt) (BgL_classzd2holderzd2_1691),
					BgL_wideningz00_1692, CBOOL(BgL_finalzf3zf3_1693),
					CBOOL(BgL_abstractzf3zf3_1694), BgL_srcz00_1695));
		}
	}



/* declare-java-class-type! */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_declarezd2javazd2classzd2typez12zc0zzobject_classz00(obj_t
		BgL_classzd2idzd2_10, obj_t BgL_superz00_11, obj_t BgL_jnamez00_12,
		obj_t BgL_packagez00_13, obj_t BgL_srcz00_14)
	{
		AN_OBJECT;
		{	/* Object/class.scm 192 */
			{	/* Object/class.scm 193 */
				obj_t BgL_superz00_614;

				BgL_typez00_bglt BgL_typez00_615;

				{	/* Object/class.scm 194 */
					bool_t BgL_testz00_2103;

					{	/* Object/class.scm 194 */
						obj_t BgL_auxz00_2104;

						{
							BgL_typez00_bglt BgL_auxz00_2105;

							BgL_auxz00_2105 = (BgL_typez00_bglt) (BgL_superz00_11);
							BgL_auxz00_2104 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_2105))->BgL_idz00);
						}
						BgL_testz00_2103 = (BgL_auxz00_2104 == BgL_classzd2idzd2_10);
					}
					if (BgL_testz00_2103)
						{	/* Object/class.scm 194 */
							BgL_superz00_614 = BFALSE;
						}
					else
						{	/* Object/class.scm 194 */
							if ((BgL_superz00_11 == BGl_za2_za2z00zztype_cachez00))
								{	/* Object/class.scm 196 */
									BgL_superz00_614 = BFALSE;
								}
							else
								{	/* Object/class.scm 196 */
									BgL_superz00_614 = BgL_superz00_11;
								}
						}
				}
				BgL_typez00_615 =
					BGl_declarezd2typez12zc0zztype_envz00(BgL_classzd2idzd2_10,
					BgL_jnamez00_12, CNST_TABLE_REF(((long) 2)));
				{	/* Object/class.scm 204 */
					BgL_typez00_bglt BgL_obj2542z00_616;

					BgL_obj2542z00_616 = ((BgL_typez00_bglt) BgL_typez00_615);
					{	/* Object/class.scm 204 */
						BgL_jclassz00_bglt BgL_arg2642z00_617;

						{	/* Object/class.scm 204 */
							BgL_jclassz00_bglt BgL_res2844z00_1096;

							{	/* Object/class.scm 204 */
								BgL_jclassz00_bglt BgL_new2373z00_1087;

								BgL_new2373z00_1087 =
									((BgL_jclassz00_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_jclassz00_bgl))));
								{	/* Object/class.scm 204 */
									BgL_jclassz00_bglt BgL_res2843z00_1095;

									{	/* Object/class.scm 204 */
										BgL_jclassz00_bglt BgL_new2398z00_1088;

										BgL_new2398z00_1088 = BgL_new2373z00_1087;
										{	/* Object/class.scm 204 */
											obj_t BgL_itszd2super2395zd2_1092;

											obj_t BgL_slots2396z00_1093;

											obj_t BgL_package2397z00_1094;

											BgL_itszd2super2395zd2_1092 = BgL_superz00_614;
											BgL_slots2396z00_1093 = BUNSPEC;
											BgL_package2397z00_1094 = BgL_packagez00_13;
											((((BgL_jclassz00_bglt) CREF(BgL_new2398z00_1088))->
													BgL_itszd2superzd2) =
												((obj_t) BgL_itszd2super2395zd2_1092), BUNSPEC);
											((((BgL_jclassz00_bglt) CREF(BgL_new2398z00_1088))->
													BgL_slotsz00) =
												((obj_t) BgL_slots2396z00_1093), BUNSPEC);
											((((BgL_jclassz00_bglt) CREF(BgL_new2398z00_1088))->
													BgL_packagez00) =
												((obj_t) BgL_package2397z00_1094), BUNSPEC);
											BgL_res2843z00_1095 = BgL_new2398z00_1088;
									}} BgL_res2843z00_1095;
								}
								BgL_res2844z00_1096 = BgL_new2373z00_1087;
							}
							BgL_arg2642z00_617 = BgL_res2844z00_1096;
						}
						{	/* Object/class.scm 204 */
							obj_t BgL_auxz00_2120;

							BgL_objectz00_bglt BgL_auxz00_2118;

							BgL_auxz00_2120 = (obj_t) (BgL_arg2642z00_617);
							BgL_auxz00_2118 = (BgL_objectz00_bglt) (BgL_obj2542z00_616);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2118, BgL_auxz00_2120);
					}}
					BGL_OBJECT_CLASS_NUM_SET(
						(BgL_objectz00_bglt) (BgL_obj2542z00_616),
						BGl_classzd2numzd2zz__objectz00(BGl_jclassz00zzobject_classz00));
					BgL_obj2542z00_616;
				}
				return BgL_typez00_615;
			}
		}
	}



/* _declare-java-class-type! */
	obj_t BGl__declarezd2javazd2classzd2typez12zc0zzobject_classz00(obj_t
		BgL_envz00_1696, obj_t BgL_classzd2idzd2_1697, obj_t BgL_superz00_1698,
		obj_t BgL_jnamez00_1699, obj_t BgL_packagez00_1700, obj_t BgL_srcz00_1701)
	{
		AN_OBJECT;
		{	/* Object/class.scm 192 */
			return
				(obj_t) (BGl_declarezd2javazd2classzd2typez12zc0zzobject_classz00
				(BgL_classzd2idzd2_1697, BgL_superz00_1698, BgL_jnamez00_1699,
					BgL_packagez00_1700, BgL_srcz00_1701));
		}
	}



/* final-class? */
	BGL_EXPORTED_DEF bool_t BGl_finalzd2classzf3z21zzobject_classz00(obj_t
		BgL_classz00_15)
	{
		AN_OBJECT;
		{	/* Object/class.scm 215 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_classz00_15,
					BGl_tclassz00zzobject_classz00))
				{	/* Object/class.scm 216 */
					BgL_tclassz00_bglt BgL_obj2318z00_1101;

					BgL_obj2318z00_1101 = (BgL_tclassz00_bglt) (BgL_classz00_15);
					{
						obj_t BgL_auxz00_2131;

						{	/* Object/class.scm 216 */
							BgL_objectz00_bglt BgL_auxz00_2132;

							BgL_auxz00_2132 = (BgL_objectz00_bglt) (BgL_obj2318z00_1101);
							BgL_auxz00_2131 = BGL_OBJECT_WIDENING(BgL_auxz00_2132);
						}
						return
							(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2131))->BgL_finalzf3zf3);
					}
				}
			else
				{	/* Object/class.scm 216 */
					return ((bool_t) 0);
				}
		}
	}



/* _final-class? */
	obj_t BGl__finalzd2classzf3z21zzobject_classz00(obj_t BgL_envz00_1702,
		obj_t BgL_classz00_1703)
	{
		AN_OBJECT;
		{	/* Object/class.scm 215 */
			return BBOOL(BGl_finalzd2classzf3z21zzobject_classz00(BgL_classz00_1703));
		}
	}



/* wide-class? */
	BGL_EXPORTED_DEF bool_t BGl_widezd2classzf3z21zzobject_classz00(obj_t
		BgL_classz00_16)
	{
		AN_OBJECT;
		{	/* Object/class.scm 223 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_classz00_16,
					BGl_tclassz00zzobject_classz00))
				{	/* Object/class.scm 224 */
					BgL_tclassz00_bglt BgL_obj2314z00_1104;

					BgL_obj2314z00_1104 = (BgL_tclassz00_bglt) (BgL_classz00_16);
					{	/* Object/class.scm 224 */
						obj_t BgL_auxz00_2141;

						{
							obj_t BgL_auxz00_2142;

							{	/* Object/class.scm 224 */
								BgL_objectz00_bglt BgL_auxz00_2143;

								BgL_auxz00_2143 = (BgL_objectz00_bglt) (BgL_obj2314z00_1104);
								BgL_auxz00_2142 = BGL_OBJECT_WIDENING(BgL_auxz00_2143);
							}
							BgL_auxz00_2141 =
								(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2142))->BgL_wideningz00);
						}
						return CBOOL(BgL_auxz00_2141);
					}
				}
			else
				{	/* Object/class.scm 224 */
					return ((bool_t) 0);
				}
		}
	}



/* _wide-class? */
	obj_t BGl__widezd2classzf3z21zzobject_classz00(obj_t BgL_envz00_1704,
		obj_t BgL_classz00_1705)
	{
		AN_OBJECT;
		{	/* Object/class.scm 223 */
			return BBOOL(BGl_widezd2classzf3z21zzobject_classz00(BgL_classz00_1705));
		}
	}



/* type-subclass? */
	BGL_EXPORTED_DEF bool_t
		BGl_typezd2subclasszf3z21zzobject_classz00(BgL_typez00_bglt
		BgL_subclassz00_17, BgL_typez00_bglt BgL_classz00_18)
	{
		AN_OBJECT;
		{	/* Object/class.scm 229 */
			{	/* Object/class.scm 231 */
				bool_t BgL_testz00_2150;

				{	/* Object/class.scm 231 */
					bool_t BgL_testz00_2151;

					{	/* Object/class.scm 231 */
						obj_t BgL_obj2306z00_1105;

						BgL_obj2306z00_1105 = (obj_t) (BgL_classz00_18);
						BgL_testz00_2151 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj2306z00_1105,
							BGl_tclassz00zzobject_classz00);
					}
					if (BgL_testz00_2151)
						{	/* Object/class.scm 231 */
							obj_t BgL_obj2306z00_1106;

							BgL_obj2306z00_1106 = (obj_t) (BgL_subclassz00_17);
							BgL_testz00_2150 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj2306z00_1106,
								BGl_tclassz00zzobject_classz00);
						}
					else
						{	/* Object/class.scm 231 */
							BgL_testz00_2150 = ((bool_t) 0);
						}
				}
				if (BgL_testz00_2150)
					{
						obj_t BgL_subclassz00_626;

						BgL_subclassz00_626 =
							(obj_t) ((BgL_tclassz00_bglt) (BgL_subclassz00_17));
					BgL_zc3anonymousza32657ze3z83_627:
						if (
							(BgL_subclassz00_626 ==
								(obj_t) ((BgL_tclassz00_bglt) (BgL_classz00_18))))
							{	/* Object/class.scm 234 */
								return ((bool_t) 1);
							}
						else
							{	/* Object/class.scm 234 */
								if (BGl_iszd2azf3z21zz__objectz00(BgL_subclassz00_626,
										BGl_tclassz00zzobject_classz00))
									{	/* Object/class.scm 238 */
										bool_t BgL_testz00_2162;

										{	/* Object/class.scm 238 */
											obj_t BgL_auxz00_2163;

											{	/* Object/class.scm 238 */
												BgL_tclassz00_bglt BgL_obj2307z00_1108;

												BgL_obj2307z00_1108 =
													(BgL_tclassz00_bglt) (BgL_subclassz00_626);
												{
													obj_t BgL_auxz00_2165;

													{	/* Object/class.scm 238 */
														BgL_objectz00_bglt BgL_auxz00_2166;

														BgL_auxz00_2166 =
															(BgL_objectz00_bglt) (BgL_obj2307z00_1108);
														BgL_auxz00_2165 =
															BGL_OBJECT_WIDENING(BgL_auxz00_2166);
													}
													BgL_auxz00_2163 =
														(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2165))->
														BgL_itszd2superzd2);
												}
											}
											BgL_testz00_2162 =
												(BgL_auxz00_2163 == BgL_subclassz00_626);
										}
										if (BgL_testz00_2162)
											{	/* Object/class.scm 238 */
												return ((bool_t) 0);
											}
										else
											{
												obj_t BgL_subclassz00_2171;

												{	/* Object/class.scm 241 */
													BgL_tclassz00_bglt BgL_obj2307z00_1109;

													BgL_obj2307z00_1109 =
														(BgL_tclassz00_bglt) (BgL_subclassz00_626);
													{
														obj_t BgL_auxz00_2173;

														{	/* Object/class.scm 241 */
															BgL_objectz00_bglt BgL_auxz00_2174;

															BgL_auxz00_2174 =
																(BgL_objectz00_bglt) (BgL_obj2307z00_1109);
															BgL_auxz00_2173 =
																BGL_OBJECT_WIDENING(BgL_auxz00_2174);
														}
														BgL_subclassz00_2171 =
															(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2173))->
															BgL_itszd2superzd2);
													}
												}
												BgL_subclassz00_626 = BgL_subclassz00_2171;
												goto BgL_zc3anonymousza32657ze3z83_627;
											}
									}
								else
									{	/* Object/class.scm 236 */
										return ((bool_t) 0);
									}
							}
					}
				else
					{	/* Object/class.scm 242 */
						bool_t BgL_testz00_2180;

						{	/* Object/class.scm 242 */
							bool_t BgL_testz00_2181;

							{	/* Object/class.scm 242 */
								obj_t BgL_obj2410z00_1110;

								BgL_obj2410z00_1110 = (obj_t) (BgL_classz00_18);
								BgL_testz00_2181 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj2410z00_1110,
									BGl_jclassz00zzobject_classz00);
							}
							if (BgL_testz00_2181)
								{	/* Object/class.scm 242 */
									obj_t BgL_obj2410z00_1111;

									BgL_obj2410z00_1111 = (obj_t) (BgL_subclassz00_17);
									BgL_testz00_2180 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj2410z00_1111,
										BGl_jclassz00zzobject_classz00);
								}
							else
								{	/* Object/class.scm 242 */
									BgL_testz00_2180 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_2180)
							{
								obj_t BgL_subclassz00_636;

								BgL_subclassz00_636 =
									(obj_t) ((BgL_jclassz00_bglt) (BgL_subclassz00_17));
							BgL_zc3anonymousza32665ze3z83_637:
								if (
									(BgL_subclassz00_636 ==
										(obj_t) ((BgL_jclassz00_bglt) (BgL_classz00_18))))
									{	/* Object/class.scm 245 */
										return ((bool_t) 1);
									}
								else
									{	/* Object/class.scm 245 */
										if (BGl_iszd2azf3z21zz__objectz00(BgL_subclassz00_636,
												BGl_jclassz00zzobject_classz00))
											{	/* Object/class.scm 249 */
												bool_t BgL_testz00_2192;

												{	/* Object/class.scm 249 */
													obj_t BgL_auxz00_2193;

													{	/* Object/class.scm 249 */
														BgL_jclassz00_bglt BgL_obj2411z00_1113;

														BgL_obj2411z00_1113 =
															(BgL_jclassz00_bglt) (BgL_subclassz00_636);
														{
															obj_t BgL_auxz00_2195;

															{	/* Object/class.scm 249 */
																BgL_objectz00_bglt BgL_auxz00_2196;

																BgL_auxz00_2196 =
																	(BgL_objectz00_bglt) (BgL_obj2411z00_1113);
																BgL_auxz00_2195 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_2196);
															}
															BgL_auxz00_2193 =
																(((BgL_jclassz00_bglt) CREF(BgL_auxz00_2195))->
																BgL_itszd2superzd2);
														}
													}
													BgL_testz00_2192 =
														(BgL_auxz00_2193 == BgL_subclassz00_636);
												}
												if (BgL_testz00_2192)
													{	/* Object/class.scm 249 */
														return ((bool_t) 0);
													}
												else
													{
														obj_t BgL_subclassz00_2201;

														{	/* Object/class.scm 252 */
															BgL_jclassz00_bglt BgL_obj2411z00_1114;

															BgL_obj2411z00_1114 =
																(BgL_jclassz00_bglt) (BgL_subclassz00_636);
															{
																obj_t BgL_auxz00_2203;

																{	/* Object/class.scm 252 */
																	BgL_objectz00_bglt BgL_auxz00_2204;

																	BgL_auxz00_2204 =
																		(BgL_objectz00_bglt) (BgL_obj2411z00_1114);
																	BgL_auxz00_2203 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_2204);
																}
																BgL_subclassz00_2201 =
																	(((BgL_jclassz00_bglt)
																		CREF(BgL_auxz00_2203))->BgL_itszd2superzd2);
															}
														}
														BgL_subclassz00_636 = BgL_subclassz00_2201;
														goto BgL_zc3anonymousza32665ze3z83_637;
													}
											}
										else
											{	/* Object/class.scm 247 */
												return ((bool_t) 0);
											}
									}
							}
						else
							{	/* Object/class.scm 242 */
								return ((bool_t) 0);
							}
					}
			}
		}
	}



/* _type-subclass? */
	obj_t BGl__typezd2subclasszf3z21zzobject_classz00(obj_t BgL_envz00_1706,
		obj_t BgL_subclassz00_1707, obj_t BgL_classz00_1708)
	{
		AN_OBJECT;
		{	/* Object/class.scm 229 */
			return
				BBOOL(BGl_typezd2subclasszf3z21zzobject_classz00(
					(BgL_typez00_bglt) (BgL_subclassz00_1707),
					(BgL_typez00_bglt) (BgL_classz00_1708)));
		}
	}



/* find-class-constructors */
	BGL_EXPORTED_DEF obj_t
		BGl_findzd2classzd2constructorsz00zzobject_classz00(BgL_tclassz00_bglt
		BgL_classz00_19)
	{
		AN_OBJECT;
		{	/* Object/class.scm 265 */
			{
				obj_t BgL_classz00_647;

				BgL_classz00_647 = (obj_t) (BgL_classz00_19);
			BgL_zc3anonymousza32673ze3z83_648:
				{	/* Object/class.scm 269 */
					bool_t BgL_testz00_2214;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_classz00_647,
							BGl_tclassz00zzobject_classz00))
						{	/* Object/class.scm 269 */
							obj_t BgL_auxz00_2217;

							{	/* Object/class.scm 269 */
								BgL_tclassz00_bglt BgL_obj2307z00_1116;

								BgL_obj2307z00_1116 = (BgL_tclassz00_bglt) (BgL_classz00_647);
								{
									obj_t BgL_auxz00_2219;

									{	/* Object/class.scm 269 */
										BgL_objectz00_bglt BgL_auxz00_2220;

										BgL_auxz00_2220 =
											(BgL_objectz00_bglt) (BgL_obj2307z00_1116);
										BgL_auxz00_2219 = BGL_OBJECT_WIDENING(BgL_auxz00_2220);
									}
									BgL_auxz00_2217 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2219))->
										BgL_itszd2superzd2);
								}
							}
							BgL_testz00_2214 = (BgL_classz00_647 == BgL_auxz00_2217);
						}
					else
						{	/* Object/class.scm 269 */
							BgL_testz00_2214 = ((bool_t) 1);
						}
					if (BgL_testz00_2214)
						{	/* Object/class.scm 269 */
							return BNIL;
						}
					else
						{	/* Object/class.scm 271 */
							bool_t BgL_testz00_2225;

							{	/* Object/class.scm 271 */
								BgL_tclassz00_bglt BgL_obj2319z00_1117;

								BgL_obj2319z00_1117 = (BgL_tclassz00_bglt) (BgL_classz00_647);
								{	/* Object/class.scm 271 */
									obj_t BgL_auxz00_2227;

									{
										obj_t BgL_auxz00_2228;

										{	/* Object/class.scm 271 */
											BgL_objectz00_bglt BgL_auxz00_2229;

											BgL_auxz00_2229 =
												(BgL_objectz00_bglt) (BgL_obj2319z00_1117);
											BgL_auxz00_2228 = BGL_OBJECT_WIDENING(BgL_auxz00_2229);
										}
										BgL_auxz00_2227 =
											(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2228))->
											BgL_constructorz00);
									}
									BgL_testz00_2225 = CBOOL(BgL_auxz00_2227);
								}
							}
							if (BgL_testz00_2225)
								{	/* Object/class.scm 272 */
									obj_t BgL_arg2676z00_652;

									{	/* Object/class.scm 272 */
										BgL_tclassz00_bglt BgL_obj2319z00_1118;

										BgL_obj2319z00_1118 =
											(BgL_tclassz00_bglt) (BgL_classz00_647);
										{
											obj_t BgL_auxz00_2235;

											{	/* Object/class.scm 272 */
												BgL_objectz00_bglt BgL_auxz00_2236;

												BgL_auxz00_2236 =
													(BgL_objectz00_bglt) (BgL_obj2319z00_1118);
												BgL_auxz00_2235 = BGL_OBJECT_WIDENING(BgL_auxz00_2236);
											}
											BgL_arg2676z00_652 =
												(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2235))->
												BgL_constructorz00);
										}
									}
									{	/* Object/class.scm 272 */
										obj_t BgL_list2677z00_653;

										BgL_list2677z00_653 = MAKE_PAIR(BgL_arg2676z00_652, BNIL);
										return BgL_list2677z00_653;
									}
								}
							else
								{	/* Object/class.scm 274 */
									obj_t BgL_arg2678z00_654;

									{	/* Object/class.scm 274 */
										BgL_tclassz00_bglt BgL_obj2307z00_1121;

										BgL_obj2307z00_1121 =
											(BgL_tclassz00_bglt) (BgL_classz00_647);
										{
											obj_t BgL_auxz00_2242;

											{	/* Object/class.scm 274 */
												BgL_objectz00_bglt BgL_auxz00_2243;

												BgL_auxz00_2243 =
													(BgL_objectz00_bglt) (BgL_obj2307z00_1121);
												BgL_auxz00_2242 = BGL_OBJECT_WIDENING(BgL_auxz00_2243);
											}
											BgL_arg2678z00_654 =
												(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2242))->
												BgL_itszd2superzd2);
										}
									}
									{
										obj_t BgL_classz00_2247;

										BgL_classz00_2247 = BgL_arg2678z00_654;
										BgL_classz00_647 = BgL_classz00_2247;
										goto BgL_zc3anonymousza32673ze3z83_648;
									}
								}
						}
				}
			}
		}
	}



/* _find-class-constructors */
	obj_t BGl__findzd2classzd2constructorsz00zzobject_classz00(obj_t
		BgL_envz00_1709, obj_t BgL_classz00_1710)
	{
		AN_OBJECT;
		{	/* Object/class.scm 265 */
			return
				BGl_findzd2classzd2constructorsz00zzobject_classz00(
				(BgL_tclassz00_bglt) (BgL_classz00_1710));
		}
	}



/* tclass-all-slots */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2allzd2slotsz00zzobject_classz00(BgL_tclassz00_bglt
		BgL_classz00_20)
	{
		AN_OBJECT;
		{	/* Object/class.scm 279 */
			{	/* Object/class.scm 280 */
				bool_t BgL_testz00_2251;

				{	/* Object/class.scm 280 */
					obj_t BgL_auxz00_2252;

					{
						obj_t BgL_auxz00_2253;

						{	/* Object/class.scm 280 */
							BgL_objectz00_bglt BgL_auxz00_2254;

							BgL_auxz00_2254 = (BgL_objectz00_bglt) (BgL_classz00_20);
							BgL_auxz00_2253 = BGL_OBJECT_WIDENING(BgL_auxz00_2254);
						}
						BgL_auxz00_2252 =
							(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2253))->BgL_wideningz00);
					}
					BgL_testz00_2251 = CBOOL(BgL_auxz00_2252);
				}
				if (BgL_testz00_2251)
					{	/* Object/class.scm 282 */
						obj_t BgL_auxz00_2272;

						obj_t BgL_auxz00_2259;

						{
							obj_t BgL_auxz00_2273;

							{	/* Object/class.scm 283 */
								BgL_objectz00_bglt BgL_auxz00_2274;

								BgL_auxz00_2274 = (BgL_objectz00_bglt) (BgL_classz00_20);
								BgL_auxz00_2273 = BGL_OBJECT_WIDENING(BgL_auxz00_2274);
							}
							BgL_auxz00_2272 =
								(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2273))->BgL_slotsz00);
						}
						{	/* Object/class.scm 282 */
							BgL_tclassz00_bglt BgL_obj2310z00_1124;

							{	/* Object/class.scm 282 */
								obj_t BgL_auxz00_2260;

								{
									obj_t BgL_auxz00_2261;

									{	/* Object/class.scm 282 */
										BgL_objectz00_bglt BgL_auxz00_2262;

										BgL_auxz00_2262 = (BgL_objectz00_bglt) (BgL_classz00_20);
										BgL_auxz00_2261 = BGL_OBJECT_WIDENING(BgL_auxz00_2262);
									}
									BgL_auxz00_2260 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2261))->
										BgL_itszd2superzd2);
								}
								BgL_obj2310z00_1124 = (BgL_tclassz00_bglt) (BgL_auxz00_2260);
							}
							{
								obj_t BgL_auxz00_2267;

								{	/* Object/class.scm 282 */
									BgL_objectz00_bglt BgL_auxz00_2268;

									BgL_auxz00_2268 = (BgL_objectz00_bglt) (BgL_obj2310z00_1124);
									BgL_auxz00_2267 = BGL_OBJECT_WIDENING(BgL_auxz00_2268);
								}
								BgL_auxz00_2259 =
									(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2267))->BgL_slotsz00);
							}
						}
						return bgl_append2(BgL_auxz00_2259, BgL_auxz00_2272);
					}
				else
					{
						obj_t BgL_auxz00_2279;

						{	/* Object/class.scm 281 */
							BgL_objectz00_bglt BgL_auxz00_2280;

							BgL_auxz00_2280 = (BgL_objectz00_bglt) (BgL_classz00_20);
							BgL_auxz00_2279 = BGL_OBJECT_WIDENING(BgL_auxz00_2280);
						}
						return (((BgL_tclassz00_bglt) CREF(BgL_auxz00_2279))->BgL_slotsz00);
					}
			}
		}
	}



/* _tclass-all-slots */
	obj_t BGl__tclasszd2allzd2slotsz00zzobject_classz00(obj_t BgL_envz00_1711,
		obj_t BgL_classz00_1712)
	{
		AN_OBJECT;
		{	/* Object/class.scm 279 */
			return
				BGl_tclasszd2allzd2slotsz00zzobject_classz00(
				(BgL_tclassz00_bglt) (BgL_classz00_1712));
		}
	}



/* class-make */
	BGL_EXPORTED_DEF obj_t BGl_classzd2makezd2zzobject_classz00(BgL_tclassz00_bglt
		BgL_tz00_21)
	{
		AN_OBJECT;
		{	/* Object/class.scm 290 */
			{	/* Object/class.scm 291 */
				bool_t BgL_testz00_2286;

				{
					obj_t BgL_auxz00_2287;

					{	/* Object/class.scm 291 */
						BgL_objectz00_bglt BgL_auxz00_2288;

						BgL_auxz00_2288 = (BgL_objectz00_bglt) (BgL_tz00_21);
						BgL_auxz00_2287 = BGL_OBJECT_WIDENING(BgL_auxz00_2288);
					}
					BgL_testz00_2286 =
						(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2287))->BgL_abstractzf3zf3);
				}
				if (BgL_testz00_2286)
					{	/* Object/class.scm 291 */
						return BFALSE;
					}
				else
					{	/* Object/class.scm 293 */
						obj_t BgL_arg2686z00_663;

						{	/* Object/class.scm 293 */
							obj_t BgL_arg2687z00_664;

							obj_t BgL_arg2688z00_665;

							{	/* Object/class.scm 293 */
								obj_t BgL_res2846z00_1130;

								{	/* Object/class.scm 293 */
									obj_t BgL_symbolz00_1128;

									BgL_symbolz00_1128 = CNST_TABLE_REF(((long) 3));
									{	/* Object/class.scm 293 */
										obj_t BgL_arg2063z00_1129;

										BgL_arg2063z00_1129 = SYMBOL_TO_STRING(BgL_symbolz00_1128);
										BgL_res2846z00_1130 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_1129);
								}}
								BgL_arg2687z00_664 = BgL_res2846z00_1130;
							}
							{	/* Object/class.scm 293 */
								obj_t BgL_arg2691z00_668;

								{
									BgL_typez00_bglt BgL_auxz00_2295;

									BgL_auxz00_2295 = (BgL_typez00_bglt) (BgL_tz00_21);
									BgL_arg2691z00_668 =
										(((BgL_typez00_bglt) CREF(BgL_auxz00_2295))->BgL_idz00);
								}
								{	/* Object/class.scm 293 */
									obj_t BgL_res2847z00_1134;

									{	/* Object/class.scm 293 */
										obj_t BgL_arg2063z00_1133;

										BgL_arg2063z00_1133 = SYMBOL_TO_STRING(BgL_arg2691z00_668);
										BgL_res2847z00_1134 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_1133);
									}
									BgL_arg2688z00_665 = BgL_res2847z00_1134;
							}}
							{	/* Object/class.scm 293 */
								obj_t BgL_list2689z00_666;

								{	/* Object/class.scm 293 */
									obj_t BgL_arg2690z00_667;

									BgL_arg2690z00_667 = MAKE_PAIR(BgL_arg2688z00_665, BNIL);
									BgL_list2689z00_666 =
										MAKE_PAIR(BgL_arg2687z00_664, BgL_arg2690z00_667);
								}
								BgL_arg2686z00_663 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list2689z00_666);
						}}
						return string_to_symbol(BSTRING_TO_STRING(BgL_arg2686z00_663));
					}
			}
		}
	}



/* _class-make */
	obj_t BGl__classzd2makezd2zzobject_classz00(obj_t BgL_envz00_1713,
		obj_t BgL_tz00_1714)
	{
		AN_OBJECT;
		{	/* Object/class.scm 290 */
			return
				BGl_classzd2makezd2zzobject_classz00(
				(BgL_tclassz00_bglt) (BgL_tz00_1714));
		}
	}



/* class-fill */
	BGL_EXPORTED_DEF obj_t BGl_classzd2fillzd2zzobject_classz00(BgL_tclassz00_bglt
		BgL_tz00_22)
	{
		AN_OBJECT;
		{	/* Object/class.scm 300 */
			{	/* Object/class.scm 301 */
				bool_t BgL_testz00_2307;

				{
					obj_t BgL_auxz00_2308;

					{	/* Object/class.scm 301 */
						BgL_objectz00_bglt BgL_auxz00_2309;

						BgL_auxz00_2309 = (BgL_objectz00_bglt) (BgL_tz00_22);
						BgL_auxz00_2308 = BGL_OBJECT_WIDENING(BgL_auxz00_2309);
					}
					BgL_testz00_2307 =
						(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2308))->BgL_abstractzf3zf3);
				}
				if (BgL_testz00_2307)
					{	/* Object/class.scm 301 */
						return BFALSE;
					}
				else
					{	/* Object/class.scm 303 */
						obj_t BgL_arg2693z00_670;

						obj_t BgL_arg2694z00_671;

						obj_t BgL_arg2695z00_672;

						BgL_arg2693z00_670 = CNST_TABLE_REF(((long) 4));
						{
							BgL_typez00_bglt BgL_auxz00_2314;

							BgL_auxz00_2314 = (BgL_typez00_bglt) (BgL_tz00_22);
							BgL_arg2694z00_671 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_2314))->BgL_idz00);
						}
						BgL_arg2695z00_672 = CNST_TABLE_REF(((long) 5));
						{	/* Object/class.scm 303 */
							obj_t BgL_list2696z00_673;

							{	/* Object/class.scm 303 */
								obj_t BgL_arg2697z00_674;

								{	/* Object/class.scm 303 */
									obj_t BgL_arg2698z00_675;

									BgL_arg2698z00_675 = MAKE_PAIR(BgL_arg2695z00_672, BNIL);
									BgL_arg2697z00_674 =
										MAKE_PAIR(BgL_arg2694z00_671, BgL_arg2698z00_675);
								}
								BgL_list2696z00_673 =
									MAKE_PAIR(BgL_arg2693z00_670, BgL_arg2697z00_674);
							}
							return
								BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
								(BgL_list2696z00_673);
						}
					}
			}
		}
	}



/* _class-fill */
	obj_t BGl__classzd2fillzd2zzobject_classz00(obj_t BgL_envz00_1715,
		obj_t BgL_tz00_1716)
	{
		AN_OBJECT;
		{	/* Object/class.scm 300 */
			return
				BGl_classzd2fillzd2zzobject_classz00(
				(BgL_tclassz00_bglt) (BgL_tz00_1716));
		}
	}



/* class-predicate */
	BGL_EXPORTED_DEF obj_t
		BGl_classzd2predicatezd2zzobject_classz00(BgL_tclassz00_bglt BgL_tz00_23)
	{
		AN_OBJECT;
		{	/* Object/class.scm 310 */
			{	/* Object/class.scm 311 */
				obj_t BgL_arg2699z00_676;

				{	/* Object/class.scm 311 */
					obj_t BgL_arg2700z00_677;

					obj_t BgL_arg2701z00_678;

					{	/* Object/class.scm 311 */
						obj_t BgL_arg2704z00_681;

						{
							BgL_typez00_bglt BgL_auxz00_2324;

							BgL_auxz00_2324 = (BgL_typez00_bglt) (BgL_tz00_23);
							BgL_arg2704z00_681 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_2324))->BgL_idz00);
						}
						{	/* Object/class.scm 311 */
							obj_t BgL_res2848z00_1141;

							{	/* Object/class.scm 311 */
								obj_t BgL_arg2063z00_1140;

								BgL_arg2063z00_1140 = SYMBOL_TO_STRING(BgL_arg2704z00_681);
								BgL_res2848z00_1141 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2063z00_1140);
							}
							BgL_arg2700z00_677 = BgL_res2848z00_1141;
						}
					}
					{	/* Object/class.scm 311 */
						obj_t BgL_res2849z00_1144;

						{	/* Object/class.scm 311 */
							obj_t BgL_symbolz00_1142;

							BgL_symbolz00_1142 = CNST_TABLE_REF(((long) 6));
							{	/* Object/class.scm 311 */
								obj_t BgL_arg2063z00_1143;

								BgL_arg2063z00_1143 = SYMBOL_TO_STRING(BgL_symbolz00_1142);
								BgL_res2849z00_1144 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2063z00_1143);
						}}
						BgL_arg2701z00_678 = BgL_res2849z00_1144;
					}
					{	/* Object/class.scm 311 */
						obj_t BgL_list2702z00_679;

						{	/* Object/class.scm 311 */
							obj_t BgL_arg2703z00_680;

							BgL_arg2703z00_680 = MAKE_PAIR(BgL_arg2701z00_678, BNIL);
							BgL_list2702z00_679 =
								MAKE_PAIR(BgL_arg2700z00_677, BgL_arg2703z00_680);
						}
						BgL_arg2699z00_676 =
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list2702z00_679);
				}}
				return string_to_symbol(BSTRING_TO_STRING(BgL_arg2699z00_676));
			}
		}
	}



/* _class-predicate */
	obj_t BGl__classzd2predicatezd2zzobject_classz00(obj_t BgL_envz00_1717,
		obj_t BgL_tz00_1718)
	{
		AN_OBJECT;
		{	/* Object/class.scm 310 */
			return
				BGl_classzd2predicatezd2zzobject_classz00(
				(BgL_tclassz00_bglt) (BgL_tz00_1718));
		}
	}



/* class-nil-constructor */
	BGL_EXPORTED_DEF obj_t
		BGl_classzd2nilzd2constructorz00zzobject_classz00(BgL_tclassz00_bglt
		BgL_tz00_24)
	{
		AN_OBJECT;
		{	/* Object/class.scm 318 */
			{	/* Object/class.scm 319 */
				obj_t BgL_arg2705z00_682;

				{	/* Object/class.scm 319 */
					obj_t BgL_arg2706z00_683;

					obj_t BgL_arg2707z00_684;

					{	/* Object/class.scm 319 */
						obj_t BgL_arg2710z00_687;

						{
							BgL_typez00_bglt BgL_auxz00_2339;

							BgL_auxz00_2339 = (BgL_typez00_bglt) (BgL_tz00_24);
							BgL_arg2710z00_687 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_2339))->BgL_idz00);
						}
						{	/* Object/class.scm 319 */
							obj_t BgL_res2850z00_1149;

							{	/* Object/class.scm 319 */
								obj_t BgL_arg2063z00_1148;

								BgL_arg2063z00_1148 = SYMBOL_TO_STRING(BgL_arg2710z00_687);
								BgL_res2850z00_1149 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2063z00_1148);
							}
							BgL_arg2706z00_683 = BgL_res2850z00_1149;
						}
					}
					{	/* Object/class.scm 319 */
						obj_t BgL_res2851z00_1152;

						{	/* Object/class.scm 319 */
							obj_t BgL_symbolz00_1150;

							BgL_symbolz00_1150 = CNST_TABLE_REF(((long) 7));
							{	/* Object/class.scm 319 */
								obj_t BgL_arg2063z00_1151;

								BgL_arg2063z00_1151 = SYMBOL_TO_STRING(BgL_symbolz00_1150);
								BgL_res2851z00_1152 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2063z00_1151);
						}}
						BgL_arg2707z00_684 = BgL_res2851z00_1152;
					}
					{	/* Object/class.scm 319 */
						obj_t BgL_list2708z00_685;

						{	/* Object/class.scm 319 */
							obj_t BgL_arg2709z00_686;

							BgL_arg2709z00_686 = MAKE_PAIR(BgL_arg2707z00_684, BNIL);
							BgL_list2708z00_685 =
								MAKE_PAIR(BgL_arg2706z00_683, BgL_arg2709z00_686);
						}
						BgL_arg2705z00_682 =
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list2708z00_685);
				}}
				return string_to_symbol(BSTRING_TO_STRING(BgL_arg2705z00_682));
			}
		}
	}



/* _class-nil-constructor */
	obj_t BGl__classzd2nilzd2constructorz00zzobject_classz00(obj_t
		BgL_envz00_1719, obj_t BgL_tz00_1720)
	{
		AN_OBJECT;
		{	/* Object/class.scm 318 */
			return
				BGl_classzd2nilzd2constructorz00zzobject_classz00(
				(BgL_tclassz00_bglt) (BgL_tz00_1720));
		}
	}



/* class-allocate */
	BGL_EXPORTED_DEF obj_t
		BGl_classzd2allocatezd2zzobject_classz00(BgL_tclassz00_bglt BgL_tz00_25)
	{
		AN_OBJECT;
		{	/* Object/class.scm 326 */
			{	/* Object/class.scm 327 */
				obj_t BgL_arg2711z00_688;

				{	/* Object/class.scm 327 */
					obj_t BgL_arg2712z00_689;

					obj_t BgL_arg2713z00_690;

					{	/* Object/class.scm 327 */
						obj_t BgL_res2852z00_1156;

						{	/* Object/class.scm 327 */
							obj_t BgL_symbolz00_1154;

							BgL_symbolz00_1154 = CNST_TABLE_REF(((long) 8));
							{	/* Object/class.scm 327 */
								obj_t BgL_arg2063z00_1155;

								BgL_arg2063z00_1155 = SYMBOL_TO_STRING(BgL_symbolz00_1154);
								BgL_res2852z00_1156 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2063z00_1155);
						}}
						BgL_arg2712z00_689 = BgL_res2852z00_1156;
					}
					{	/* Object/class.scm 327 */
						obj_t BgL_arg2717z00_693;

						{
							BgL_typez00_bglt BgL_auxz00_2357;

							BgL_auxz00_2357 = (BgL_typez00_bglt) (BgL_tz00_25);
							BgL_arg2717z00_693 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_2357))->BgL_idz00);
						}
						{	/* Object/class.scm 327 */
							obj_t BgL_res2853z00_1160;

							{	/* Object/class.scm 327 */
								obj_t BgL_arg2063z00_1159;

								BgL_arg2063z00_1159 = SYMBOL_TO_STRING(BgL_arg2717z00_693);
								BgL_res2853z00_1160 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2063z00_1159);
							}
							BgL_arg2713z00_690 = BgL_res2853z00_1160;
					}}
					{	/* Object/class.scm 327 */
						obj_t BgL_list2714z00_691;

						{	/* Object/class.scm 327 */
							obj_t BgL_arg2716z00_692;

							BgL_arg2716z00_692 = MAKE_PAIR(BgL_arg2713z00_690, BNIL);
							BgL_list2714z00_691 =
								MAKE_PAIR(BgL_arg2712z00_689, BgL_arg2716z00_692);
						}
						BgL_arg2711z00_688 =
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list2714z00_691);
				}}
				return string_to_symbol(BSTRING_TO_STRING(BgL_arg2711z00_688));
			}
		}
	}



/* _class-allocate */
	obj_t BGl__classzd2allocatezd2zzobject_classz00(obj_t BgL_envz00_1721,
		obj_t BgL_tz00_1722)
	{
		AN_OBJECT;
		{	/* Object/class.scm 326 */
			return
				BGl_classzd2allocatezd2zzobject_classz00(
				(BgL_tclassz00_bglt) (BgL_tz00_1722));
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzobject_classz00()
	{
		AN_OBJECT;
		{	/* Object/class.scm 15 */
			{	/* Object/class.scm 32 */
				obj_t BgL_arg2718z00_694;

				obj_t BgL_arg2719z00_695;

				obj_t BgL_arg2722z00_698;

				BgL_arg2718z00_694 = CNST_TABLE_REF(((long) 9));
				BgL_arg2719z00_695 = BGl_typez00zztype_typez00;
				{	/* Object/class.scm 32 */
					obj_t BgL_v2549z00_699;

					BgL_v2549z00_699 = create_vector((int) (((long) 0)));
					BgL_arg2722z00_698 = BgL_v2549z00_699;
				}
				BGl_tclassz00zzobject_classz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2718z00_694,
					BgL_arg2719z00_695, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2tclasszd2envz52zzobject_classz00,
					BGl_tclasszd2nilzd2envz00zzobject_classz00,
					BGl_tclasszf3zd2envz21zzobject_classz00, ((long) 99132528), BFALSE,
					BFALSE, BgL_arg2722z00_698);
			}
			{	/* Object/class.scm 54 */
				obj_t BgL_arg2724z00_700;

				obj_t BgL_arg2725z00_701;

				obj_t BgL_arg2728z00_704;

				BgL_arg2724z00_700 = CNST_TABLE_REF(((long) 10));
				BgL_arg2725z00_701 = BGl_typez00zztype_typez00;
				{	/* Object/class.scm 54 */
					obj_t BgL_v2550z00_705;

					BgL_v2550z00_705 = create_vector((int) (((long) 0)));
					BgL_arg2728z00_704 = BgL_v2550z00_705;
				}
				BGl_jclassz00zzobject_classz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2724z00_700,
					BgL_arg2725z00_701, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2jclasszd2envz52zzobject_classz00,
					BGl_jclasszd2nilzd2envz00zzobject_classz00,
					BGl_jclasszf3zd2envz21zzobject_classz00, ((long) 130051504), BFALSE,
					BFALSE, BgL_arg2728z00_704);
			}
			{	/* Object/class.scm 62 */
				obj_t BgL_arg2729z00_706;

				obj_t BgL_arg2730z00_707;

				obj_t BgL_arg2733z00_710;

				BgL_arg2729z00_706 = CNST_TABLE_REF(((long) 11));
				BgL_arg2730z00_707 = BGl_typez00zztype_typez00;
				{	/* Object/class.scm 62 */
					obj_t BgL_v2551z00_711;

					BgL_v2551z00_711 = create_vector((int) (((long) 0)));
					BgL_arg2733z00_710 = BgL_v2551z00_711;
				}
				BGl_wclassz00zzobject_classz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2729z00_706,
					BgL_arg2730z00_707, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2wclasszd2envz52zzobject_classz00,
					BGl_wclasszd2nilzd2envz00zzobject_classz00,
					BGl_wclasszf3zd2envz21zzobject_classz00, ((long) 304410106), BFALSE,
					BFALSE, BgL_arg2733z00_710);
			}
			BGl_z52thezd2wclasszd2nilz52zzobject_classz00 = BUNSPEC;
			BGl_z52thezd2jclasszd2nilz52zzobject_classz00 = BUNSPEC;
			return (BGl_z52thezd2tclasszd2nilz52zzobject_classz00 = BUNSPEC, BUNSPEC);
		}
	}



/* wclass? */
	BGL_EXPORTED_DEF bool_t BGl_wclasszf3zf3zzobject_classz00(obj_t
		BgL_obj2493z00_27)
	{
		AN_OBJECT;
		{	/* Object/class.scm 62 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2493z00_27,
				BGl_wclassz00zzobject_classz00);
		}
	}



/* _wclass? */
	obj_t BGl__wclasszf3zf3zzobject_classz00(obj_t BgL_envz00_1733,
		obj_t BgL_obj2493z00_1734)
	{
		AN_OBJECT;
		{	/* Object/class.scm 62 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2493z00_1734,
					BGl_wclassz00zzobject_classz00));
		}
	}



/* widening-wclass */
	BGL_EXPORTED_DEF BgL_wclassz00_bglt
		BGl_wideningzd2wclasszd2zzobject_classz00(obj_t BgL_itszd2class2461zd2_31)
	{
		AN_OBJECT;
		{	/* Object/class.scm 62 */
			{	/* Object/class.scm 62 */
				BgL_wclassz00_bglt BgL_new2462z00_1162;

				BgL_new2462z00_1162 =
					((BgL_wclassz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_wclassz00_bgl))));
				{	/* Object/class.scm 62 */
					BgL_wclassz00_bglt BgL_res2854z00_1166;

					{	/* Object/class.scm 62 */
						BgL_wclassz00_bglt BgL_new2483z00_1163;

						BgL_new2483z00_1163 = BgL_new2462z00_1162;
						{	/* Object/class.scm 62 */
							obj_t BgL_itszd2class2482zd2_1165;

							BgL_itszd2class2482zd2_1165 = BgL_itszd2class2461zd2_31;
							((((BgL_wclassz00_bglt) CREF(BgL_new2483z00_1163))->
									BgL_itszd2classzd2) =
								((obj_t) BgL_itszd2class2482zd2_1165), BUNSPEC);
							BgL_res2854z00_1166 = BgL_new2483z00_1163;
					}} BgL_res2854z00_1166;
				}
				return BgL_new2462z00_1162;
			}
		}
	}



/* _widening-wclass */
	obj_t BGl__wideningzd2wclasszd2zzobject_classz00(obj_t BgL_envz00_1735,
		obj_t BgL_itszd2class2461zd2_1736)
	{
		AN_OBJECT;
		{	/* Object/class.scm 62 */
			return
				(obj_t) (BGl_wideningzd2wclasszd2zzobject_classz00
				(BgL_itszd2class2461zd2_1736));
		}
	}



/* make-wclass */
	BGL_EXPORTED_DEF BgL_wclassz00_bglt
		BGl_makezd2wclasszd2zzobject_classz00(obj_t BgL_id2465z00_32,
		obj_t BgL_name2466z00_33, obj_t BgL_siza7e2467za7_34,
		obj_t BgL_class2468z00_35, obj_t BgL_coercezd2to2469zd2_36,
		obj_t BgL_parents2470z00_37, bool_t BgL_initzf32471zf3_38,
		bool_t BgL_magiczf32472zf3_39, obj_t BgL_z422473z42_40,
		obj_t BgL_alias2474z00_41, obj_t BgL_pointedzd2tozd2by2475z00_42,
		obj_t BgL_tvector2476z00_43, obj_t BgL_location2477z00_44,
		obj_t BgL_importzd2location2478zd2_45, int BgL_occurrence2479z00_46,
		obj_t BgL_itszd2class2464zd2_47)
	{
		AN_OBJECT;
		{	/* Object/class.scm 62 */
			{	/* Object/class.scm 62 */
				BgL_typez00_bglt BgL_aux2480z00_1167;

				BgL_aux2480z00_1167 =
					BGl_makezd2typezd2zztype_typez00(BgL_id2465z00_32, BgL_name2466z00_33,
					BgL_siza7e2467za7_34, BgL_class2468z00_35, BgL_coercezd2to2469zd2_36,
					BgL_parents2470z00_37, BgL_initzf32471zf3_38, BgL_magiczf32472zf3_39,
					BgL_z422473z42_40, BgL_alias2474z00_41,
					BgL_pointedzd2tozd2by2475z00_42, BgL_tvector2476z00_43,
					BgL_location2477z00_44, BgL_importzd2location2478zd2_45,
					BgL_occurrence2479z00_46);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux2480z00_1167),
					BGl_classzd2numzd2zz__objectz00(BGl_wclassz00zzobject_classz00));
				{	/* Object/class.scm 62 */
					BgL_wclassz00_bglt BgL_arg2735z00_1169;

					{	/* Object/class.scm 62 */
						BgL_wclassz00_bglt BgL_res2856z00_1179;

						{	/* Object/class.scm 62 */
							BgL_wclassz00_bglt BgL_new2462z00_1174;

							BgL_new2462z00_1174 =
								((BgL_wclassz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_wclassz00_bgl))));
							{	/* Object/class.scm 62 */
								BgL_wclassz00_bglt BgL_res2855z00_1178;

								{	/* Object/class.scm 62 */
									BgL_wclassz00_bglt BgL_new2483z00_1175;

									BgL_new2483z00_1175 = BgL_new2462z00_1174;
									{	/* Object/class.scm 62 */
										obj_t BgL_itszd2class2482zd2_1177;

										BgL_itszd2class2482zd2_1177 = BgL_itszd2class2464zd2_47;
										((((BgL_wclassz00_bglt) CREF(BgL_new2483z00_1175))->
												BgL_itszd2classzd2) =
											((obj_t) BgL_itszd2class2482zd2_1177), BUNSPEC);
										BgL_res2855z00_1178 = BgL_new2483z00_1175;
								}} BgL_res2855z00_1178;
							}
							BgL_res2856z00_1179 = BgL_new2462z00_1174;
						}
						BgL_arg2735z00_1169 = BgL_res2856z00_1179;
					}
					{	/* Object/class.scm 62 */
						obj_t BgL_auxz00_2396;

						BgL_objectz00_bglt BgL_auxz00_2394;

						BgL_auxz00_2396 = (obj_t) (BgL_arg2735z00_1169);
						BgL_auxz00_2394 = (BgL_objectz00_bglt) (BgL_aux2480z00_1167);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_2394, BgL_auxz00_2396);
				}}
				return
					((BgL_wclassz00_bglt) (BgL_wclassz00_bglt) (BgL_aux2480z00_1167));
			}
		}
	}



/* _make-wclass */
	obj_t BGl__makezd2wclasszd2zzobject_classz00(obj_t BgL_envz00_1737,
		obj_t BgL_id2465z00_1738, obj_t BgL_name2466z00_1739,
		obj_t BgL_siza7e2467za7_1740, obj_t BgL_class2468z00_1741,
		obj_t BgL_coercezd2to2469zd2_1742, obj_t BgL_parents2470z00_1743,
		obj_t BgL_initzf32471zf3_1744, obj_t BgL_magiczf32472zf3_1745,
		obj_t BgL_z422473z42_1746, obj_t BgL_alias2474z00_1747,
		obj_t BgL_pointedzd2tozd2by2475z00_1748, obj_t BgL_tvector2476z00_1749,
		obj_t BgL_location2477z00_1750, obj_t BgL_importzd2location2478zd2_1751,
		obj_t BgL_occurrence2479z00_1752, obj_t BgL_itszd2class2464zd2_1753)
	{
		AN_OBJECT;
		{	/* Object/class.scm 62 */
			return
				(obj_t) (BGl_makezd2wclasszd2zzobject_classz00(BgL_id2465z00_1738,
					BgL_name2466z00_1739, BgL_siza7e2467za7_1740, BgL_class2468z00_1741,
					BgL_coercezd2to2469zd2_1742, BgL_parents2470z00_1743,
					CBOOL(BgL_initzf32471zf3_1744), CBOOL(BgL_magiczf32472zf3_1745),
					BgL_z422473z42_1746, BgL_alias2474z00_1747,
					BgL_pointedzd2tozd2by2475z00_1748, BgL_tvector2476z00_1749,
					BgL_location2477z00_1750, BgL_importzd2location2478zd2_1751,
					CINT(BgL_occurrence2479z00_1752), BgL_itszd2class2464zd2_1753));
		}
	}



/* fill-wclass! */
	BGL_EXPORTED_DEF BgL_wclassz00_bglt
		BGl_fillzd2wclassz12zc0zzobject_classz00(BgL_wclassz00_bglt
		BgL_new2483z00_48, obj_t BgL_itszd2class2482zd2_49)
	{
		AN_OBJECT;
		{	/* Object/class.scm 62 */
			{	/* Object/class.scm 62 */
				obj_t BgL_itszd2class2482zd2_1875;

				BgL_itszd2class2482zd2_1875 = BgL_itszd2class2482zd2_49;
				((((BgL_wclassz00_bglt) CREF(BgL_new2483z00_48))->BgL_itszd2classzd2) =
					((obj_t) BgL_itszd2class2482zd2_1875), BUNSPEC);
				return BgL_new2483z00_48;
			}
		}
	}



/* _fill-wclass! */
	obj_t BGl__fillzd2wclassz12zc0zzobject_classz00(obj_t BgL_envz00_1754,
		obj_t BgL_new2483z00_1755, obj_t BgL_itszd2class2482zd2_1756)
	{
		AN_OBJECT;
		{	/* Object/class.scm 62 */
			{	/* Object/class.scm 62 */
				BgL_wclassz00_bglt BgL_auxz00_2407;

				{	/* Object/class.scm 62 */
					BgL_wclassz00_bglt BgL_res2908z00_1879;

					{	/* Object/class.scm 62 */
						BgL_wclassz00_bglt BgL_new2483z00_1876;

						BgL_new2483z00_1876 = (BgL_wclassz00_bglt) (BgL_new2483z00_1755);
						{	/* Object/class.scm 62 */
							obj_t BgL_itszd2class2482zd2_1878;

							BgL_itszd2class2482zd2_1878 = BgL_itszd2class2482zd2_1756;
							((((BgL_wclassz00_bglt) CREF(BgL_new2483z00_1876))->
									BgL_itszd2classzd2) =
								((obj_t) BgL_itszd2class2482zd2_1878), BUNSPEC);
							BgL_res2908z00_1879 = BgL_new2483z00_1876;
						}
					}
					BgL_auxz00_2407 = BgL_res2908z00_1879;
				}
				return (obj_t) (BgL_auxz00_2407);
			}
		}
	}



/* %allocate-wclass */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_z52allocatezd2wclassz80zzobject_classz00()
	{
		AN_OBJECT;
		{	/* Object/class.scm 62 */
			{	/* Object/class.scm 62 */
				BgL_typez00_bglt BgL_new2486z00_1880;

				BgL_new2486z00_1880 =
					((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_typez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new2486z00_1880),
					BGl_classzd2numzd2zz__objectz00(BGl_wclassz00zzobject_classz00));
				{	/* Object/class.scm 62 */
					BgL_objectz00_bglt BgL_auxz00_2415;

					BgL_auxz00_2415 = (BgL_objectz00_bglt) (BgL_new2486z00_1880);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_2415, BFALSE);
				}
				return BgL_new2486z00_1880;
			}
		}
	}



/* _%allocate-wclass */
	obj_t BGl__z52allocatezd2wclassz80zzobject_classz00(obj_t BgL_envz00_1731)
	{
		AN_OBJECT;
		{	/* Object/class.scm 62 */
			{	/* Object/class.scm 62 */
				BgL_typez00_bglt BgL_auxz00_2418;

				{	/* Object/class.scm 62 */
					BgL_typez00_bglt BgL_res2909z00_1884;

					{	/* Object/class.scm 62 */
						BgL_typez00_bglt BgL_new2486z00_1882;

						BgL_new2486z00_1882 =
							((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_typez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2486z00_1882),
							BGl_classzd2numzd2zz__objectz00(BGl_wclassz00zzobject_classz00));
						{	/* Object/class.scm 62 */
							BgL_objectz00_bglt BgL_auxz00_2423;

							BgL_auxz00_2423 = (BgL_objectz00_bglt) (BgL_new2486z00_1882);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2423, BFALSE);
						}
						BgL_res2909z00_1884 = BgL_new2486z00_1882;
					}
					BgL_auxz00_2418 = BgL_res2909z00_1884;
				}
				return (obj_t) (BgL_auxz00_2418);
			}
		}
	}



/* wclass-nil */
	BGL_EXPORTED_DEF BgL_wclassz00_bglt BGl_wclasszd2nilzd2zzobject_classz00()
	{
		AN_OBJECT;
		{	/* Object/class.scm 62 */
			if ((BGl_z52thezd2wclasszd2nilz52zzobject_classz00 == BUNSPEC))
				{	/* Object/class.scm 62 */
					{	/* Object/class.scm 62 */
						BgL_typez00_bglt BgL_res2857z00_1189;

						{	/* Object/class.scm 62 */
							BgL_typez00_bglt BgL_new1598z00_1185;

							BgL_new1598z00_1185 =
								((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1598z00_1185),
								BGl_classzd2numzd2zz__objectz00(BGl_typez00zztype_typez00));
							{	/* Object/class.scm 62 */
								BgL_objectz00_bglt BgL_auxz00_2433;

								BgL_auxz00_2433 = (BgL_objectz00_bglt) (BgL_new1598z00_1185);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2433, BFALSE);
							}
							BgL_res2857z00_1189 = BgL_new1598z00_1185;
						}
						BGl_z52thezd2wclasszd2nilz52zzobject_classz00 =
							(obj_t) (BgL_res2857z00_1189);
					}
					{	/* Object/class.scm 62 */
						BgL_typez00_bglt BgL_res2858z00_1221;

						{	/* Object/class.scm 62 */
							BgL_typez00_bglt BgL_new1581z00_1190;

							obj_t BgL_id1566z00_1191;

							int BgL_occurrence1580z00_1205;

							BgL_new1581z00_1190 =
								(BgL_typez00_bglt)
								(BGl_z52thezd2wclasszd2nilz52zzobject_classz00);
							BgL_id1566z00_1191 = CNST_TABLE_REF(((long) 12));
							BgL_occurrence1580z00_1205 = (int) (((long) 0));
							{	/* Object/class.scm 62 */
								obj_t BgL_id1566z00_1206;

								obj_t BgL_name1567z00_1207;

								obj_t BgL_siza7e1568za7_1208;

								obj_t BgL_class1569z00_1209;

								obj_t BgL_coercezd2to1570zd2_1210;

								obj_t BgL_parents1571z00_1211;

								bool_t BgL_initzf31572zf3_1212;

								bool_t BgL_magiczf31573zf3_1213;

								obj_t BgL_z421574z42_1214;

								obj_t BgL_alias1575z00_1215;

								obj_t BgL_pointedzd2tozd2by1576z00_1216;

								obj_t BgL_tvector1577z00_1217;

								obj_t BgL_location1578z00_1218;

								obj_t BgL_importzd2location1579zd2_1219;

								int BgL_occurrence1580z00_1220;

								BgL_id1566z00_1206 = BgL_id1566z00_1191;
								BgL_name1567z00_1207 = BUNSPEC;
								BgL_siza7e1568za7_1208 = BUNSPEC;
								BgL_class1569z00_1209 = BUNSPEC;
								BgL_coercezd2to1570zd2_1210 = BUNSPEC;
								BgL_parents1571z00_1211 = BUNSPEC;
								BgL_initzf31572zf3_1212 = ((bool_t) 0);
								BgL_magiczf31573zf3_1213 = ((bool_t) 0);
								BgL_z421574z42_1214 = BUNSPEC;
								BgL_alias1575z00_1215 = BUNSPEC;
								BgL_pointedzd2tozd2by1576z00_1216 = BUNSPEC;
								BgL_tvector1577z00_1217 = BUNSPEC;
								BgL_location1578z00_1218 = BUNSPEC;
								BgL_importzd2location1579zd2_1219 = BUNSPEC;
								BgL_occurrence1580z00_1220 = BgL_occurrence1580z00_1205;
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1190))->BgL_idz00) =
									((obj_t) BgL_id1566z00_1206), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1190))->BgL_namez00) =
									((obj_t) BgL_name1567z00_1207), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1190))->
										BgL_siza7eza7) = ((obj_t) BgL_siza7e1568za7_1208), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1190))->
										BgL_classz00) = ((obj_t) BgL_class1569z00_1209), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1190))->
										BgL_coercezd2tozd2) =
									((obj_t) BgL_coercezd2to1570zd2_1210), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1190))->
										BgL_parentsz00) =
									((obj_t) BgL_parents1571z00_1211), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1190))->
										BgL_initzf3zf3) =
									((bool_t) BgL_initzf31572zf3_1212), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1190))->
										BgL_magiczf3zf3) =
									((bool_t) BgL_magiczf31573zf3_1213), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1190))->BgL_z42z42) =
									((obj_t) BgL_z421574z42_1214), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1190))->
										BgL_aliasz00) = ((obj_t) BgL_alias1575z00_1215), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1190))->
										BgL_pointedzd2tozd2byz00) =
									((obj_t) BgL_pointedzd2tozd2by1576z00_1216), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1190))->
										BgL_tvectorz00) =
									((obj_t) BgL_tvector1577z00_1217), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1190))->
										BgL_locationz00) =
									((obj_t) BgL_location1578z00_1218), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1190))->
										BgL_importzd2locationzd2) =
									((obj_t) BgL_importzd2location1579zd2_1219), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1190))->
										BgL_occurrencez00) =
									((int) BgL_occurrence1580z00_1220), BUNSPEC);
								BgL_res2858z00_1221 = BgL_new1581z00_1190;
						}} BgL_res2858z00_1221;
					}
					{	/* Object/class.scm 62 */
						long BgL_arg2738z00_721;

						BgL_arg2738z00_721 =
							BGl_classzd2numzd2zz__objectz00(BGl_wclassz00zzobject_classz00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2wclasszd2nilz52zzobject_classz00),
							BgL_arg2738z00_721);
					}
					{	/* Object/class.scm 62 */
						BgL_wclassz00_bglt BgL_arg2739z00_722;

						{	/* Object/class.scm 62 */
							BgL_wclassz00_bglt BgL_res2860z00_1230;

							{	/* Object/class.scm 62 */
								BgL_wclassz00_bglt BgL_new2462z00_1225;

								BgL_new2462z00_1225 =
									((BgL_wclassz00_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_wclassz00_bgl))));
								{	/* Object/class.scm 62 */
									BgL_wclassz00_bglt BgL_res2859z00_1229;

									{	/* Object/class.scm 62 */
										BgL_wclassz00_bglt BgL_new2483z00_1226;

										BgL_new2483z00_1226 = BgL_new2462z00_1225;
										{	/* Object/class.scm 62 */
											obj_t BgL_itszd2class2482zd2_1228;

											BgL_itszd2class2482zd2_1228 = BUNSPEC;
											((((BgL_wclassz00_bglt) CREF(BgL_new2483z00_1226))->
													BgL_itszd2classzd2) =
												((obj_t) BgL_itszd2class2482zd2_1228), BUNSPEC);
											BgL_res2859z00_1229 = BgL_new2483z00_1226;
									}} BgL_res2859z00_1229;
								}
								BgL_res2860z00_1230 = BgL_new2462z00_1225;
							}
							BgL_arg2739z00_722 = BgL_res2860z00_1230;
						}
						{	/* Object/class.scm 62 */
							obj_t BgL_auxz00_2462;

							BgL_objectz00_bglt BgL_auxz00_2460;

							BgL_auxz00_2462 = (obj_t) (BgL_arg2739z00_722);
							BgL_auxz00_2460 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2wclasszd2nilz52zzobject_classz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2460, BgL_auxz00_2462);
				}}}
			else
				{	/* Object/class.scm 62 */
					BFALSE;
				}
			return
				(BgL_wclassz00_bglt) (BGl_z52thezd2wclasszd2nilz52zzobject_classz00);
		}
	}



/* _wclass-nil */
	obj_t BGl__wclasszd2nilzd2zzobject_classz00(obj_t BgL_envz00_1732)
	{
		AN_OBJECT;
		{	/* Object/class.scm 62 */
			return (obj_t) (BGl_wclasszd2nilzd2zzobject_classz00());
		}
	}



/* jclass? */
	BGL_EXPORTED_DEF bool_t BGl_jclasszf3zf3zzobject_classz00(obj_t
		BgL_obj2410z00_53)
	{
		AN_OBJECT;
		{	/* Object/class.scm 54 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2410z00_53,
				BGl_jclassz00zzobject_classz00);
		}
	}



/* _jclass? */
	obj_t BGl__jclasszf3zf3zzobject_classz00(obj_t BgL_envz00_1729,
		obj_t BgL_obj2410z00_1730)
	{
		AN_OBJECT;
		{	/* Object/class.scm 54 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2410z00_1730,
					BGl_jclassz00zzobject_classz00));
		}
	}



/* widening-jclass */
	BGL_EXPORTED_DEF BgL_jclassz00_bglt
		BGl_wideningzd2jclasszd2zzobject_classz00(obj_t BgL_itszd2super2370zd2_57,
		obj_t BgL_slots2371z00_58, obj_t BgL_package2372z00_59)
	{
		AN_OBJECT;
		{	/* Object/class.scm 54 */
			{	/* Object/class.scm 54 */
				BgL_jclassz00_bglt BgL_new2373z00_1231;

				BgL_new2373z00_1231 =
					((BgL_jclassz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_jclassz00_bgl))));
				{	/* Object/class.scm 54 */
					BgL_jclassz00_bglt BgL_res2861z00_1239;

					{	/* Object/class.scm 54 */
						BgL_jclassz00_bglt BgL_new2398z00_1232;

						BgL_new2398z00_1232 = BgL_new2373z00_1231;
						{	/* Object/class.scm 54 */
							obj_t BgL_itszd2super2395zd2_1236;

							obj_t BgL_slots2396z00_1237;

							obj_t BgL_package2397z00_1238;

							BgL_itszd2super2395zd2_1236 = BgL_itszd2super2370zd2_57;
							BgL_slots2396z00_1237 = BgL_slots2371z00_58;
							BgL_package2397z00_1238 = BgL_package2372z00_59;
							((((BgL_jclassz00_bglt) CREF(BgL_new2398z00_1232))->
									BgL_itszd2superzd2) =
								((obj_t) BgL_itszd2super2395zd2_1236), BUNSPEC);
							((((BgL_jclassz00_bglt) CREF(BgL_new2398z00_1232))->
									BgL_slotsz00) = ((obj_t) BgL_slots2396z00_1237), BUNSPEC);
							((((BgL_jclassz00_bglt) CREF(BgL_new2398z00_1232))->
									BgL_packagez00) = ((obj_t) BgL_package2397z00_1238), BUNSPEC);
							BgL_res2861z00_1239 = BgL_new2398z00_1232;
					}} BgL_res2861z00_1239;
				}
				return BgL_new2373z00_1231;
			}
		}
	}



/* _widening-jclass */
	obj_t BGl__wideningzd2jclasszd2zzobject_classz00(obj_t BgL_envz00_1757,
		obj_t BgL_itszd2super2370zd2_1758, obj_t BgL_slots2371z00_1759,
		obj_t BgL_package2372z00_1760)
	{
		AN_OBJECT;
		{	/* Object/class.scm 54 */
			return
				(obj_t) (BGl_wideningzd2jclasszd2zzobject_classz00
				(BgL_itszd2super2370zd2_1758, BgL_slots2371z00_1759,
					BgL_package2372z00_1760));
		}
	}



/* make-jclass */
	BGL_EXPORTED_DEF BgL_jclassz00_bglt
		BGl_makezd2jclasszd2zzobject_classz00(obj_t BgL_id2378z00_60,
		obj_t BgL_name2379z00_61, obj_t BgL_siza7e2380za7_62,
		obj_t BgL_class2381z00_63, obj_t BgL_coercezd2to2382zd2_64,
		obj_t BgL_parents2383z00_65, bool_t BgL_initzf32384zf3_66,
		bool_t BgL_magiczf32385zf3_67, obj_t BgL_z422386z42_68,
		obj_t BgL_alias2387z00_69, obj_t BgL_pointedzd2tozd2by2388z00_70,
		obj_t BgL_tvector2389z00_71, obj_t BgL_location2390z00_72,
		obj_t BgL_importzd2location2391zd2_73, int BgL_occurrence2392z00_74,
		obj_t BgL_itszd2super2375zd2_75, obj_t BgL_slots2376z00_76,
		obj_t BgL_package2377z00_77)
	{
		AN_OBJECT;
		{	/* Object/class.scm 54 */
			{	/* Object/class.scm 54 */
				BgL_typez00_bglt BgL_aux2393z00_1240;

				BgL_aux2393z00_1240 =
					BGl_makezd2typezd2zztype_typez00(BgL_id2378z00_60, BgL_name2379z00_61,
					BgL_siza7e2380za7_62, BgL_class2381z00_63, BgL_coercezd2to2382zd2_64,
					BgL_parents2383z00_65, BgL_initzf32384zf3_66, BgL_magiczf32385zf3_67,
					BgL_z422386z42_68, BgL_alias2387z00_69,
					BgL_pointedzd2tozd2by2388z00_70, BgL_tvector2389z00_71,
					BgL_location2390z00_72, BgL_importzd2location2391zd2_73,
					BgL_occurrence2392z00_74);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux2393z00_1240),
					BGl_classzd2numzd2zz__objectz00(BGl_jclassz00zzobject_classz00));
				{	/* Object/class.scm 54 */
					BgL_jclassz00_bglt BgL_arg2741z00_1242;

					{	/* Object/class.scm 54 */
						BgL_jclassz00_bglt BgL_res2863z00_1258;

						{	/* Object/class.scm 54 */
							BgL_jclassz00_bglt BgL_new2373z00_1249;

							BgL_new2373z00_1249 =
								((BgL_jclassz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_jclassz00_bgl))));
							{	/* Object/class.scm 54 */
								BgL_jclassz00_bglt BgL_res2862z00_1257;

								{	/* Object/class.scm 54 */
									BgL_jclassz00_bglt BgL_new2398z00_1250;

									BgL_new2398z00_1250 = BgL_new2373z00_1249;
									{	/* Object/class.scm 54 */
										obj_t BgL_itszd2super2395zd2_1254;

										obj_t BgL_slots2396z00_1255;

										obj_t BgL_package2397z00_1256;

										BgL_itszd2super2395zd2_1254 = BgL_itszd2super2375zd2_75;
										BgL_slots2396z00_1255 = BgL_slots2376z00_76;
										BgL_package2397z00_1256 = BgL_package2377z00_77;
										((((BgL_jclassz00_bglt) CREF(BgL_new2398z00_1250))->
												BgL_itszd2superzd2) =
											((obj_t) BgL_itszd2super2395zd2_1254), BUNSPEC);
										((((BgL_jclassz00_bglt) CREF(BgL_new2398z00_1250))->
												BgL_slotsz00) =
											((obj_t) BgL_slots2396z00_1255), BUNSPEC);
										((((BgL_jclassz00_bglt) CREF(BgL_new2398z00_1250))->
												BgL_packagez00) =
											((obj_t) BgL_package2397z00_1256), BUNSPEC);
										BgL_res2862z00_1257 = BgL_new2398z00_1250;
								}} BgL_res2862z00_1257;
							}
							BgL_res2863z00_1258 = BgL_new2373z00_1249;
						}
						BgL_arg2741z00_1242 = BgL_res2863z00_1258;
					}
					{	/* Object/class.scm 54 */
						obj_t BgL_auxz00_2487;

						BgL_objectz00_bglt BgL_auxz00_2485;

						BgL_auxz00_2487 = (obj_t) (BgL_arg2741z00_1242);
						BgL_auxz00_2485 = (BgL_objectz00_bglt) (BgL_aux2393z00_1240);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_2485, BgL_auxz00_2487);
				}}
				return
					((BgL_jclassz00_bglt) (BgL_jclassz00_bglt) (BgL_aux2393z00_1240));
			}
		}
	}



/* _make-jclass */
	obj_t BGl__makezd2jclasszd2zzobject_classz00(obj_t BgL_envz00_1761,
		obj_t BgL_id2378z00_1762, obj_t BgL_name2379z00_1763,
		obj_t BgL_siza7e2380za7_1764, obj_t BgL_class2381z00_1765,
		obj_t BgL_coercezd2to2382zd2_1766, obj_t BgL_parents2383z00_1767,
		obj_t BgL_initzf32384zf3_1768, obj_t BgL_magiczf32385zf3_1769,
		obj_t BgL_z422386z42_1770, obj_t BgL_alias2387z00_1771,
		obj_t BgL_pointedzd2tozd2by2388z00_1772, obj_t BgL_tvector2389z00_1773,
		obj_t BgL_location2390z00_1774, obj_t BgL_importzd2location2391zd2_1775,
		obj_t BgL_occurrence2392z00_1776, obj_t BgL_itszd2super2375zd2_1777,
		obj_t BgL_slots2376z00_1778, obj_t BgL_package2377z00_1779)
	{
		AN_OBJECT;
		{	/* Object/class.scm 54 */
			return
				(obj_t) (BGl_makezd2jclasszd2zzobject_classz00(BgL_id2378z00_1762,
					BgL_name2379z00_1763, BgL_siza7e2380za7_1764, BgL_class2381z00_1765,
					BgL_coercezd2to2382zd2_1766, BgL_parents2383z00_1767,
					CBOOL(BgL_initzf32384zf3_1768), CBOOL(BgL_magiczf32385zf3_1769),
					BgL_z422386z42_1770, BgL_alias2387z00_1771,
					BgL_pointedzd2tozd2by2388z00_1772, BgL_tvector2389z00_1773,
					BgL_location2390z00_1774, BgL_importzd2location2391zd2_1775,
					CINT(BgL_occurrence2392z00_1776), BgL_itszd2super2375zd2_1777,
					BgL_slots2376z00_1778, BgL_package2377z00_1779));
		}
	}



/* fill-jclass! */
	BGL_EXPORTED_DEF BgL_jclassz00_bglt
		BGl_fillzd2jclassz12zc0zzobject_classz00(BgL_jclassz00_bglt
		BgL_new2398z00_78, obj_t BgL_itszd2super2395zd2_79,
		obj_t BgL_slots2396z00_80, obj_t BgL_package2397z00_81)
	{
		AN_OBJECT;
		{	/* Object/class.scm 54 */
			{	/* Object/class.scm 54 */
				obj_t BgL_itszd2super2395zd2_1886;

				obj_t BgL_slots2396z00_1887;

				obj_t BgL_package2397z00_1888;

				BgL_itszd2super2395zd2_1886 = BgL_itszd2super2395zd2_79;
				BgL_slots2396z00_1887 = BgL_slots2396z00_80;
				BgL_package2397z00_1888 = BgL_package2397z00_81;
				((((BgL_jclassz00_bglt) CREF(BgL_new2398z00_78))->BgL_itszd2superzd2) =
					((obj_t) BgL_itszd2super2395zd2_1886), BUNSPEC);
				((((BgL_jclassz00_bglt) CREF(BgL_new2398z00_78))->BgL_slotsz00) =
					((obj_t) BgL_slots2396z00_1887), BUNSPEC);
				((((BgL_jclassz00_bglt) CREF(BgL_new2398z00_78))->BgL_packagez00) =
					((obj_t) BgL_package2397z00_1888), BUNSPEC);
				return BgL_new2398z00_78;
			}
		}
	}



/* _fill-jclass! */
	obj_t BGl__fillzd2jclassz12zc0zzobject_classz00(obj_t BgL_envz00_1780,
		obj_t BgL_new2398z00_1781, obj_t BgL_itszd2super2395zd2_1782,
		obj_t BgL_slots2396z00_1783, obj_t BgL_package2397z00_1784)
	{
		AN_OBJECT;
		{	/* Object/class.scm 54 */
			{	/* Object/class.scm 54 */
				BgL_jclassz00_bglt BgL_auxz00_2500;

				{	/* Object/class.scm 54 */
					BgL_jclassz00_bglt BgL_res2910z00_1896;

					{	/* Object/class.scm 54 */
						BgL_jclassz00_bglt BgL_new2398z00_1889;

						obj_t BgL_package2397z00_1892;

						BgL_new2398z00_1889 = (BgL_jclassz00_bglt) (BgL_new2398z00_1781);
						BgL_package2397z00_1892 = BgL_package2397z00_1784;
						{	/* Object/class.scm 54 */
							obj_t BgL_itszd2super2395zd2_1893;

							obj_t BgL_slots2396z00_1894;

							obj_t BgL_package2397z00_1895;

							BgL_itszd2super2395zd2_1893 = BgL_itszd2super2395zd2_1782;
							BgL_slots2396z00_1894 = BgL_slots2396z00_1783;
							BgL_package2397z00_1895 = BgL_package2397z00_1892;
							((((BgL_jclassz00_bglt) CREF(BgL_new2398z00_1889))->
									BgL_itszd2superzd2) =
								((obj_t) BgL_itszd2super2395zd2_1893), BUNSPEC);
							((((BgL_jclassz00_bglt) CREF(BgL_new2398z00_1889))->
									BgL_slotsz00) = ((obj_t) BgL_slots2396z00_1894), BUNSPEC);
							((((BgL_jclassz00_bglt) CREF(BgL_new2398z00_1889))->
									BgL_packagez00) = ((obj_t) BgL_package2397z00_1895), BUNSPEC);
							BgL_res2910z00_1896 = BgL_new2398z00_1889;
						}
					}
					BgL_auxz00_2500 = BgL_res2910z00_1896;
				}
				return (obj_t) (BgL_auxz00_2500);
			}
		}
	}



/* %allocate-jclass */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_z52allocatezd2jclassz80zzobject_classz00()
	{
		AN_OBJECT;
		{	/* Object/class.scm 54 */
			{	/* Object/class.scm 54 */
				BgL_typez00_bglt BgL_new2403z00_1897;

				BgL_new2403z00_1897 =
					((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_typez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new2403z00_1897),
					BGl_classzd2numzd2zz__objectz00(BGl_jclassz00zzobject_classz00));
				{	/* Object/class.scm 54 */
					BgL_objectz00_bglt BgL_auxz00_2510;

					BgL_auxz00_2510 = (BgL_objectz00_bglt) (BgL_new2403z00_1897);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_2510, BFALSE);
				}
				return BgL_new2403z00_1897;
			}
		}
	}



/* _%allocate-jclass */
	obj_t BGl__z52allocatezd2jclassz80zzobject_classz00(obj_t BgL_envz00_1727)
	{
		AN_OBJECT;
		{	/* Object/class.scm 54 */
			{	/* Object/class.scm 54 */
				BgL_typez00_bglt BgL_auxz00_2513;

				{	/* Object/class.scm 54 */
					BgL_typez00_bglt BgL_res2911z00_1901;

					{	/* Object/class.scm 54 */
						BgL_typez00_bglt BgL_new2403z00_1899;

						BgL_new2403z00_1899 =
							((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_typez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2403z00_1899),
							BGl_classzd2numzd2zz__objectz00(BGl_jclassz00zzobject_classz00));
						{	/* Object/class.scm 54 */
							BgL_objectz00_bglt BgL_auxz00_2518;

							BgL_auxz00_2518 = (BgL_objectz00_bglt) (BgL_new2403z00_1899);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2518, BFALSE);
						}
						BgL_res2911z00_1901 = BgL_new2403z00_1899;
					}
					BgL_auxz00_2513 = BgL_res2911z00_1901;
				}
				return (obj_t) (BgL_auxz00_2513);
			}
		}
	}



/* jclass-nil */
	BGL_EXPORTED_DEF BgL_jclassz00_bglt BGl_jclasszd2nilzd2zzobject_classz00()
	{
		AN_OBJECT;
		{	/* Object/class.scm 54 */
			if ((BGl_z52thezd2jclasszd2nilz52zzobject_classz00 == BUNSPEC))
				{	/* Object/class.scm 54 */
					{	/* Object/class.scm 54 */
						BgL_typez00_bglt BgL_res2864z00_1270;

						{	/* Object/class.scm 54 */
							BgL_typez00_bglt BgL_new1598z00_1266;

							BgL_new1598z00_1266 =
								((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1598z00_1266),
								BGl_classzd2numzd2zz__objectz00(BGl_typez00zztype_typez00));
							{	/* Object/class.scm 54 */
								BgL_objectz00_bglt BgL_auxz00_2528;

								BgL_auxz00_2528 = (BgL_objectz00_bglt) (BgL_new1598z00_1266);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2528, BFALSE);
							}
							BgL_res2864z00_1270 = BgL_new1598z00_1266;
						}
						BGl_z52thezd2jclasszd2nilz52zzobject_classz00 =
							(obj_t) (BgL_res2864z00_1270);
					}
					{	/* Object/class.scm 54 */
						BgL_typez00_bglt BgL_res2865z00_1302;

						{	/* Object/class.scm 54 */
							BgL_typez00_bglt BgL_new1581z00_1271;

							obj_t BgL_id1566z00_1272;

							int BgL_occurrence1580z00_1286;

							BgL_new1581z00_1271 =
								(BgL_typez00_bglt)
								(BGl_z52thezd2jclasszd2nilz52zzobject_classz00);
							BgL_id1566z00_1272 = CNST_TABLE_REF(((long) 12));
							BgL_occurrence1580z00_1286 = (int) (((long) 0));
							{	/* Object/class.scm 54 */
								obj_t BgL_id1566z00_1287;

								obj_t BgL_name1567z00_1288;

								obj_t BgL_siza7e1568za7_1289;

								obj_t BgL_class1569z00_1290;

								obj_t BgL_coercezd2to1570zd2_1291;

								obj_t BgL_parents1571z00_1292;

								bool_t BgL_initzf31572zf3_1293;

								bool_t BgL_magiczf31573zf3_1294;

								obj_t BgL_z421574z42_1295;

								obj_t BgL_alias1575z00_1296;

								obj_t BgL_pointedzd2tozd2by1576z00_1297;

								obj_t BgL_tvector1577z00_1298;

								obj_t BgL_location1578z00_1299;

								obj_t BgL_importzd2location1579zd2_1300;

								int BgL_occurrence1580z00_1301;

								BgL_id1566z00_1287 = BgL_id1566z00_1272;
								BgL_name1567z00_1288 = BUNSPEC;
								BgL_siza7e1568za7_1289 = BUNSPEC;
								BgL_class1569z00_1290 = BUNSPEC;
								BgL_coercezd2to1570zd2_1291 = BUNSPEC;
								BgL_parents1571z00_1292 = BUNSPEC;
								BgL_initzf31572zf3_1293 = ((bool_t) 0);
								BgL_magiczf31573zf3_1294 = ((bool_t) 0);
								BgL_z421574z42_1295 = BUNSPEC;
								BgL_alias1575z00_1296 = BUNSPEC;
								BgL_pointedzd2tozd2by1576z00_1297 = BUNSPEC;
								BgL_tvector1577z00_1298 = BUNSPEC;
								BgL_location1578z00_1299 = BUNSPEC;
								BgL_importzd2location1579zd2_1300 = BUNSPEC;
								BgL_occurrence1580z00_1301 = BgL_occurrence1580z00_1286;
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1271))->BgL_idz00) =
									((obj_t) BgL_id1566z00_1287), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1271))->BgL_namez00) =
									((obj_t) BgL_name1567z00_1288), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1271))->
										BgL_siza7eza7) = ((obj_t) BgL_siza7e1568za7_1289), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1271))->
										BgL_classz00) = ((obj_t) BgL_class1569z00_1290), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1271))->
										BgL_coercezd2tozd2) =
									((obj_t) BgL_coercezd2to1570zd2_1291), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1271))->
										BgL_parentsz00) =
									((obj_t) BgL_parents1571z00_1292), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1271))->
										BgL_initzf3zf3) =
									((bool_t) BgL_initzf31572zf3_1293), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1271))->
										BgL_magiczf3zf3) =
									((bool_t) BgL_magiczf31573zf3_1294), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1271))->BgL_z42z42) =
									((obj_t) BgL_z421574z42_1295), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1271))->
										BgL_aliasz00) = ((obj_t) BgL_alias1575z00_1296), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1271))->
										BgL_pointedzd2tozd2byz00) =
									((obj_t) BgL_pointedzd2tozd2by1576z00_1297), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1271))->
										BgL_tvectorz00) =
									((obj_t) BgL_tvector1577z00_1298), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1271))->
										BgL_locationz00) =
									((obj_t) BgL_location1578z00_1299), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1271))->
										BgL_importzd2locationzd2) =
									((obj_t) BgL_importzd2location1579zd2_1300), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1271))->
										BgL_occurrencez00) =
									((int) BgL_occurrence1580z00_1301), BUNSPEC);
								BgL_res2865z00_1302 = BgL_new1581z00_1271;
						}} BgL_res2865z00_1302;
					}
					{	/* Object/class.scm 54 */
						long BgL_arg2745z00_734;

						BgL_arg2745z00_734 =
							BGl_classzd2numzd2zz__objectz00(BGl_jclassz00zzobject_classz00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2jclasszd2nilz52zzobject_classz00),
							BgL_arg2745z00_734);
					}
					{	/* Object/class.scm 54 */
						BgL_jclassz00_bglt BgL_arg2746z00_735;

						{	/* Object/class.scm 54 */
							BgL_jclassz00_bglt BgL_res2867z00_1317;

							{	/* Object/class.scm 54 */
								BgL_jclassz00_bglt BgL_new2373z00_1308;

								BgL_new2373z00_1308 =
									((BgL_jclassz00_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_jclassz00_bgl))));
								{	/* Object/class.scm 54 */
									BgL_jclassz00_bglt BgL_res2866z00_1316;

									{	/* Object/class.scm 54 */
										BgL_jclassz00_bglt BgL_new2398z00_1309;

										BgL_new2398z00_1309 = BgL_new2373z00_1308;
										{	/* Object/class.scm 54 */
											obj_t BgL_itszd2super2395zd2_1313;

											obj_t BgL_slots2396z00_1314;

											obj_t BgL_package2397z00_1315;

											BgL_itszd2super2395zd2_1313 = BUNSPEC;
											BgL_slots2396z00_1314 = BUNSPEC;
											BgL_package2397z00_1315 =
												BGl_string2892z00zzobject_classz00;
											((((BgL_jclassz00_bglt) CREF(BgL_new2398z00_1309))->
													BgL_itszd2superzd2) =
												((obj_t) BgL_itszd2super2395zd2_1313), BUNSPEC);
											((((BgL_jclassz00_bglt) CREF(BgL_new2398z00_1309))->
													BgL_slotsz00) =
												((obj_t) BgL_slots2396z00_1314), BUNSPEC);
											((((BgL_jclassz00_bglt) CREF(BgL_new2398z00_1309))->
													BgL_packagez00) =
												((obj_t) BgL_package2397z00_1315), BUNSPEC);
											BgL_res2866z00_1316 = BgL_new2398z00_1309;
									}} BgL_res2866z00_1316;
								}
								BgL_res2867z00_1317 = BgL_new2373z00_1308;
							}
							BgL_arg2746z00_735 = BgL_res2867z00_1317;
						}
						{	/* Object/class.scm 54 */
							obj_t BgL_auxz00_2559;

							BgL_objectz00_bglt BgL_auxz00_2557;

							BgL_auxz00_2559 = (obj_t) (BgL_arg2746z00_735);
							BgL_auxz00_2557 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2jclasszd2nilz52zzobject_classz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2557, BgL_auxz00_2559);
				}}}
			else
				{	/* Object/class.scm 54 */
					BFALSE;
				}
			return
				(BgL_jclassz00_bglt) (BGl_z52thezd2jclasszd2nilz52zzobject_classz00);
		}
	}



/* _jclass-nil */
	obj_t BGl__jclasszd2nilzd2zzobject_classz00(obj_t BgL_envz00_1728)
	{
		AN_OBJECT;
		{	/* Object/class.scm 54 */
			return (obj_t) (BGl_jclasszd2nilzd2zzobject_classz00());
		}
	}



/* tclass? */
	BGL_EXPORTED_DEF bool_t BGl_tclasszf3zf3zzobject_classz00(obj_t
		BgL_obj2306z00_89)
	{
		AN_OBJECT;
		{	/* Object/class.scm 32 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2306z00_89,
				BGl_tclassz00zzobject_classz00);
		}
	}



/* _tclass? */
	obj_t BGl__tclasszf3zf3zzobject_classz00(obj_t BgL_envz00_1725,
		obj_t BgL_obj2306z00_1726)
	{
		AN_OBJECT;
		{	/* Object/class.scm 32 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2306z00_1726,
					BGl_tclassz00zzobject_classz00));
		}
	}



/* widening-tclass */
	BGL_EXPORTED_DEF BgL_tclassz00_bglt
		BGl_wideningzd2tclasszd2zzobject_classz00(obj_t BgL_itszd2super2238zd2_93,
		obj_t BgL_slots2239z00_94, BgL_globalz00_bglt BgL_holder2240z00_95,
		obj_t BgL_widening2241z00_96, long BgL_depth2242z00_97,
		bool_t BgL_finalzf32243zf3_98, obj_t BgL_constructor2244z00_99,
		obj_t BgL_virtualzd2slotszd2number2245z00_100,
		bool_t BgL_abstractzf32246zf3_101, obj_t BgL_widezd2type2247zd2_102)
	{
		AN_OBJECT;
		{	/* Object/class.scm 32 */
			{	/* Object/class.scm 32 */
				BgL_tclassz00_bglt BgL_new2248z00_1318;

				BgL_new2248z00_1318 =
					((BgL_tclassz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_tclassz00_bgl))));
				{	/* Object/class.scm 32 */
					BgL_tclassz00_bglt BgL_res2868z00_1340;

					{	/* Object/class.scm 32 */
						BgL_tclassz00_bglt BgL_new2287z00_1319;

						BgL_new2287z00_1319 = BgL_new2248z00_1318;
						{	/* Object/class.scm 32 */
							obj_t BgL_itszd2super2277zd2_1330;

							obj_t BgL_slots2278z00_1331;

							BgL_globalz00_bglt BgL_holder2279z00_1332;

							obj_t BgL_widening2280z00_1333;

							long BgL_depth2281z00_1334;

							bool_t BgL_finalzf32282zf3_1335;

							obj_t BgL_constructor2283z00_1336;

							obj_t BgL_virtualzd2slotszd2number2284z00_1337;

							bool_t BgL_abstractzf32285zf3_1338;

							obj_t BgL_widezd2type2286zd2_1339;

							BgL_itszd2super2277zd2_1330 = BgL_itszd2super2238zd2_93;
							BgL_slots2278z00_1331 = BgL_slots2239z00_94;
							BgL_holder2279z00_1332 = BgL_holder2240z00_95;
							BgL_widening2280z00_1333 = BgL_widening2241z00_96;
							BgL_depth2281z00_1334 = BgL_depth2242z00_97;
							BgL_finalzf32282zf3_1335 = BgL_finalzf32243zf3_98;
							BgL_constructor2283z00_1336 = BgL_constructor2244z00_99;
							BgL_virtualzd2slotszd2number2284z00_1337 =
								BgL_virtualzd2slotszd2number2245z00_100;
							BgL_abstractzf32285zf3_1338 = BgL_abstractzf32246zf3_101;
							BgL_widezd2type2286zd2_1339 = BgL_widezd2type2247zd2_102;
							((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1319))->
									BgL_itszd2superzd2) =
								((obj_t) BgL_itszd2super2277zd2_1330), BUNSPEC);
							((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1319))->
									BgL_slotsz00) = ((obj_t) BgL_slots2278z00_1331), BUNSPEC);
							((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1319))->
									BgL_holderz00) =
								((BgL_globalz00_bglt) BgL_holder2279z00_1332), BUNSPEC);
							((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1319))->
									BgL_wideningz00) =
								((obj_t) BgL_widening2280z00_1333), BUNSPEC);
							((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1319))->
									BgL_depthz00) = ((long) BgL_depth2281z00_1334), BUNSPEC);
							((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1319))->
									BgL_finalzf3zf3) =
								((bool_t) BgL_finalzf32282zf3_1335), BUNSPEC);
							((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1319))->
									BgL_constructorz00) =
								((obj_t) BgL_constructor2283z00_1336), BUNSPEC);
							((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1319))->
									BgL_virtualzd2slotszd2numberz00) =
								((obj_t) BgL_virtualzd2slotszd2number2284z00_1337), BUNSPEC);
							((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1319))->
									BgL_abstractzf3zf3) =
								((bool_t) BgL_abstractzf32285zf3_1338), BUNSPEC);
							((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1319))->
									BgL_widezd2typezd2) =
								((obj_t) BgL_widezd2type2286zd2_1339), BUNSPEC);
							BgL_res2868z00_1340 = BgL_new2287z00_1319;
					}} BgL_res2868z00_1340;
				}
				return BgL_new2248z00_1318;
			}
		}
	}



/* _widening-tclass */
	obj_t BGl__wideningzd2tclasszd2zzobject_classz00(obj_t BgL_envz00_1785,
		obj_t BgL_itszd2super2238zd2_1786, obj_t BgL_slots2239z00_1787,
		obj_t BgL_holder2240z00_1788, obj_t BgL_widening2241z00_1789,
		obj_t BgL_depth2242z00_1790, obj_t BgL_finalzf32243zf3_1791,
		obj_t BgL_constructor2244z00_1792,
		obj_t BgL_virtualzd2slotszd2number2245z00_1793,
		obj_t BgL_abstractzf32246zf3_1794, obj_t BgL_widezd2type2247zd2_1795)
	{
		AN_OBJECT;
		{	/* Object/class.scm 32 */
			return
				(obj_t) (BGl_wideningzd2tclasszd2zzobject_classz00
				(BgL_itszd2super2238zd2_1786, BgL_slots2239z00_1787,
					(BgL_globalz00_bglt) (BgL_holder2240z00_1788),
					BgL_widening2241z00_1789, (long) CINT(BgL_depth2242z00_1790),
					CBOOL(BgL_finalzf32243zf3_1791), BgL_constructor2244z00_1792,
					BgL_virtualzd2slotszd2number2245z00_1793,
					CBOOL(BgL_abstractzf32246zf3_1794), BgL_widezd2type2247zd2_1795));
		}
	}



/* make-tclass */
	BGL_EXPORTED_DEF BgL_tclassz00_bglt
		BGl_makezd2tclasszd2zzobject_classz00(obj_t BgL_id2260z00_103,
		obj_t BgL_name2261z00_104, obj_t BgL_siza7e2262za7_105,
		obj_t BgL_class2263z00_106, obj_t BgL_coercezd2to2264zd2_107,
		obj_t BgL_parents2265z00_108, bool_t BgL_initzf32266zf3_109,
		bool_t BgL_magiczf32267zf3_110, obj_t BgL_z422268z42_111,
		obj_t BgL_alias2269z00_112, obj_t BgL_pointedzd2tozd2by2270z00_113,
		obj_t BgL_tvector2271z00_114, obj_t BgL_location2272z00_115,
		obj_t BgL_importzd2location2273zd2_116, int BgL_occurrence2274z00_117,
		obj_t BgL_itszd2super2250zd2_118, obj_t BgL_slots2251z00_119,
		BgL_globalz00_bglt BgL_holder2252z00_120, obj_t BgL_widening2253z00_121,
		long BgL_depth2254z00_122, bool_t BgL_finalzf32255zf3_123,
		obj_t BgL_constructor2256z00_124,
		obj_t BgL_virtualzd2slotszd2number2257z00_125,
		bool_t BgL_abstractzf32258zf3_126, obj_t BgL_widezd2type2259zd2_127)
	{
		AN_OBJECT;
		{	/* Object/class.scm 32 */
			{	/* Object/class.scm 32 */
				BgL_typez00_bglt BgL_aux2275z00_1341;

				BgL_aux2275z00_1341 =
					BGl_makezd2typezd2zztype_typez00(BgL_id2260z00_103,
					BgL_name2261z00_104, BgL_siza7e2262za7_105, BgL_class2263z00_106,
					BgL_coercezd2to2264zd2_107, BgL_parents2265z00_108,
					BgL_initzf32266zf3_109, BgL_magiczf32267zf3_110, BgL_z422268z42_111,
					BgL_alias2269z00_112, BgL_pointedzd2tozd2by2270z00_113,
					BgL_tvector2271z00_114, BgL_location2272z00_115,
					BgL_importzd2location2273zd2_116, BgL_occurrence2274z00_117);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux2275z00_1341),
					BGl_classzd2numzd2zz__objectz00(BGl_tclassz00zzobject_classz00));
				{	/* Object/class.scm 32 */
					BgL_tclassz00_bglt BgL_arg2748z00_1343;

					{	/* Object/class.scm 32 */
						BgL_tclassz00_bglt BgL_res2870z00_1380;

						{	/* Object/class.scm 32 */
							BgL_tclassz00_bglt BgL_new2248z00_1357;

							BgL_new2248z00_1357 =
								((BgL_tclassz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_tclassz00_bgl))));
							{	/* Object/class.scm 32 */
								BgL_tclassz00_bglt BgL_res2869z00_1379;

								{	/* Object/class.scm 32 */
									BgL_tclassz00_bglt BgL_new2287z00_1358;

									BgL_new2287z00_1358 = BgL_new2248z00_1357;
									{	/* Object/class.scm 32 */
										obj_t BgL_itszd2super2277zd2_1369;

										obj_t BgL_slots2278z00_1370;

										BgL_globalz00_bglt BgL_holder2279z00_1371;

										obj_t BgL_widening2280z00_1372;

										long BgL_depth2281z00_1373;

										bool_t BgL_finalzf32282zf3_1374;

										obj_t BgL_constructor2283z00_1375;

										obj_t BgL_virtualzd2slotszd2number2284z00_1376;

										bool_t BgL_abstractzf32285zf3_1377;

										obj_t BgL_widezd2type2286zd2_1378;

										BgL_itszd2super2277zd2_1369 = BgL_itszd2super2250zd2_118;
										BgL_slots2278z00_1370 = BgL_slots2251z00_119;
										BgL_holder2279z00_1371 = BgL_holder2252z00_120;
										BgL_widening2280z00_1372 = BgL_widening2253z00_121;
										BgL_depth2281z00_1373 = BgL_depth2254z00_122;
										BgL_finalzf32282zf3_1374 = BgL_finalzf32255zf3_123;
										BgL_constructor2283z00_1375 = BgL_constructor2256z00_124;
										BgL_virtualzd2slotszd2number2284z00_1376 =
											BgL_virtualzd2slotszd2number2257z00_125;
										BgL_abstractzf32285zf3_1377 = BgL_abstractzf32258zf3_126;
										BgL_widezd2type2286zd2_1378 = BgL_widezd2type2259zd2_127;
										((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1358))->
												BgL_itszd2superzd2) =
											((obj_t) BgL_itszd2super2277zd2_1369), BUNSPEC);
										((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1358))->
												BgL_slotsz00) =
											((obj_t) BgL_slots2278z00_1370), BUNSPEC);
										((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1358))->
												BgL_holderz00) =
											((BgL_globalz00_bglt) BgL_holder2279z00_1371), BUNSPEC);
										((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1358))->
												BgL_wideningz00) =
											((obj_t) BgL_widening2280z00_1372), BUNSPEC);
										((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1358))->
												BgL_depthz00) =
											((long) BgL_depth2281z00_1373), BUNSPEC);
										((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1358))->
												BgL_finalzf3zf3) =
											((bool_t) BgL_finalzf32282zf3_1374), BUNSPEC);
										((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1358))->
												BgL_constructorz00) =
											((obj_t) BgL_constructor2283z00_1375), BUNSPEC);
										((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1358))->
												BgL_virtualzd2slotszd2numberz00) =
											((obj_t) BgL_virtualzd2slotszd2number2284z00_1376),
											BUNSPEC);
										((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1358))->
												BgL_abstractzf3zf3) =
											((bool_t) BgL_abstractzf32285zf3_1377), BUNSPEC);
										((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1358))->
												BgL_widezd2typezd2) =
											((obj_t) BgL_widezd2type2286zd2_1378), BUNSPEC);
										BgL_res2869z00_1379 = BgL_new2287z00_1358;
								}} BgL_res2869z00_1379;
							}
							BgL_res2870z00_1380 = BgL_new2248z00_1357;
						}
						BgL_arg2748z00_1343 = BgL_res2870z00_1380;
					}
					{	/* Object/class.scm 32 */
						obj_t BgL_auxz00_2602;

						BgL_objectz00_bglt BgL_auxz00_2600;

						BgL_auxz00_2602 = (obj_t) (BgL_arg2748z00_1343);
						BgL_auxz00_2600 = (BgL_objectz00_bglt) (BgL_aux2275z00_1341);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_2600, BgL_auxz00_2602);
				}}
				return
					((BgL_tclassz00_bglt) (BgL_tclassz00_bglt) (BgL_aux2275z00_1341));
			}
		}
	}



/* _make-tclass */
	obj_t BGl__makezd2tclasszd2zzobject_classz00(obj_t BgL_envz00_1796,
		obj_t BgL_id2260z00_1797, obj_t BgL_name2261z00_1798,
		obj_t BgL_siza7e2262za7_1799, obj_t BgL_class2263z00_1800,
		obj_t BgL_coercezd2to2264zd2_1801, obj_t BgL_parents2265z00_1802,
		obj_t BgL_initzf32266zf3_1803, obj_t BgL_magiczf32267zf3_1804,
		obj_t BgL_z422268z42_1805, obj_t BgL_alias2269z00_1806,
		obj_t BgL_pointedzd2tozd2by2270z00_1807, obj_t BgL_tvector2271z00_1808,
		obj_t BgL_location2272z00_1809, obj_t BgL_importzd2location2273zd2_1810,
		obj_t BgL_occurrence2274z00_1811, obj_t BgL_itszd2super2250zd2_1812,
		obj_t BgL_slots2251z00_1813, obj_t BgL_holder2252z00_1814,
		obj_t BgL_widening2253z00_1815, obj_t BgL_depth2254z00_1816,
		obj_t BgL_finalzf32255zf3_1817, obj_t BgL_constructor2256z00_1818,
		obj_t BgL_virtualzd2slotszd2number2257z00_1819,
		obj_t BgL_abstractzf32258zf3_1820, obj_t BgL_widezd2type2259zd2_1821)
	{
		AN_OBJECT;
		{	/* Object/class.scm 32 */
			return
				(obj_t) (BGl_makezd2tclasszd2zzobject_classz00(BgL_id2260z00_1797,
					BgL_name2261z00_1798, BgL_siza7e2262za7_1799, BgL_class2263z00_1800,
					BgL_coercezd2to2264zd2_1801, BgL_parents2265z00_1802,
					CBOOL(BgL_initzf32266zf3_1803), CBOOL(BgL_magiczf32267zf3_1804),
					BgL_z422268z42_1805, BgL_alias2269z00_1806,
					BgL_pointedzd2tozd2by2270z00_1807, BgL_tvector2271z00_1808,
					BgL_location2272z00_1809, BgL_importzd2location2273zd2_1810,
					CINT(BgL_occurrence2274z00_1811), BgL_itszd2super2250zd2_1812,
					BgL_slots2251z00_1813, (BgL_globalz00_bglt) (BgL_holder2252z00_1814),
					BgL_widening2253z00_1815, (long) CINT(BgL_depth2254z00_1816),
					CBOOL(BgL_finalzf32255zf3_1817), BgL_constructor2256z00_1818,
					BgL_virtualzd2slotszd2number2257z00_1819,
					CBOOL(BgL_abstractzf32258zf3_1820), BgL_widezd2type2259zd2_1821));
		}
	}



/* fill-tclass! */
	BGL_EXPORTED_DEF BgL_tclassz00_bglt
		BGl_fillzd2tclassz12zc0zzobject_classz00(BgL_tclassz00_bglt
		BgL_new2287z00_128, obj_t BgL_itszd2super2277zd2_129,
		obj_t BgL_slots2278z00_130, BgL_globalz00_bglt BgL_holder2279z00_131,
		obj_t BgL_widening2280z00_132, long BgL_depth2281z00_133,
		bool_t BgL_finalzf32282zf3_134, obj_t BgL_constructor2283z00_135,
		obj_t BgL_virtualzd2slotszd2number2284z00_136,
		bool_t BgL_abstractzf32285zf3_137, obj_t BgL_widezd2type2286zd2_138)
	{
		AN_OBJECT;
		{	/* Object/class.scm 32 */
			{	/* Object/class.scm 32 */
				obj_t BgL_itszd2super2277zd2_1903;

				obj_t BgL_slots2278z00_1904;

				BgL_globalz00_bglt BgL_holder2279z00_1905;

				obj_t BgL_widening2280z00_1906;

				long BgL_depth2281z00_1907;

				bool_t BgL_finalzf32282zf3_1908;

				obj_t BgL_constructor2283z00_1909;

				obj_t BgL_virtualzd2slotszd2number2284z00_1910;

				bool_t BgL_abstractzf32285zf3_1911;

				obj_t BgL_widezd2type2286zd2_1912;

				BgL_itszd2super2277zd2_1903 = BgL_itszd2super2277zd2_129;
				BgL_slots2278z00_1904 = BgL_slots2278z00_130;
				BgL_holder2279z00_1905 = BgL_holder2279z00_131;
				BgL_widening2280z00_1906 = BgL_widening2280z00_132;
				BgL_depth2281z00_1907 = BgL_depth2281z00_133;
				BgL_finalzf32282zf3_1908 = BgL_finalzf32282zf3_134;
				BgL_constructor2283z00_1909 = BgL_constructor2283z00_135;
				BgL_virtualzd2slotszd2number2284z00_1910 =
					BgL_virtualzd2slotszd2number2284z00_136;
				BgL_abstractzf32285zf3_1911 = BgL_abstractzf32285zf3_137;
				BgL_widezd2type2286zd2_1912 = BgL_widezd2type2286zd2_138;
				((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_128))->BgL_itszd2superzd2) =
					((obj_t) BgL_itszd2super2277zd2_1903), BUNSPEC);
				((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_128))->BgL_slotsz00) =
					((obj_t) BgL_slots2278z00_1904), BUNSPEC);
				((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_128))->BgL_holderz00) =
					((BgL_globalz00_bglt) BgL_holder2279z00_1905), BUNSPEC);
				((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_128))->BgL_wideningz00) =
					((obj_t) BgL_widening2280z00_1906), BUNSPEC);
				((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_128))->BgL_depthz00) =
					((long) BgL_depth2281z00_1907), BUNSPEC);
				((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_128))->BgL_finalzf3zf3) =
					((bool_t) BgL_finalzf32282zf3_1908), BUNSPEC);
				((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_128))->BgL_constructorz00) =
					((obj_t) BgL_constructor2283z00_1909), BUNSPEC);
				((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_128))->
						BgL_virtualzd2slotszd2numberz00) =
					((obj_t) BgL_virtualzd2slotszd2number2284z00_1910), BUNSPEC);
				((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_128))->BgL_abstractzf3zf3) =
					((bool_t) BgL_abstractzf32285zf3_1911), BUNSPEC);
				((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_128))->BgL_widezd2typezd2) =
					((obj_t) BgL_widezd2type2286zd2_1912), BUNSPEC);
				return BgL_new2287z00_128;
			}
		}
	}



/* _fill-tclass! */
	obj_t BGl__fillzd2tclassz12zc0zzobject_classz00(obj_t BgL_envz00_1822,
		obj_t BgL_new2287z00_1823, obj_t BgL_itszd2super2277zd2_1824,
		obj_t BgL_slots2278z00_1825, obj_t BgL_holder2279z00_1826,
		obj_t BgL_widening2280z00_1827, obj_t BgL_depth2281z00_1828,
		obj_t BgL_finalzf32282zf3_1829, obj_t BgL_constructor2283z00_1830,
		obj_t BgL_virtualzd2slotszd2number2284z00_1831,
		obj_t BgL_abstractzf32285zf3_1832, obj_t BgL_widezd2type2286zd2_1833)
	{
		AN_OBJECT;
		{	/* Object/class.scm 32 */
			{	/* Object/class.scm 32 */
				BgL_tclassz00_bglt BgL_auxz00_2626;

				{	/* Object/class.scm 32 */
					BgL_tclassz00_bglt BgL_res2912z00_1934;

					{	/* Object/class.scm 32 */
						BgL_tclassz00_bglt BgL_new2287z00_1913;

						BgL_globalz00_bglt BgL_holder2279z00_1916;

						long BgL_depth2281z00_1918;

						bool_t BgL_finalzf32282zf3_1919;

						bool_t BgL_abstractzf32285zf3_1922;

						BgL_new2287z00_1913 = (BgL_tclassz00_bglt) (BgL_new2287z00_1823);
						BgL_holder2279z00_1916 =
							(BgL_globalz00_bglt) (BgL_holder2279z00_1826);
						BgL_depth2281z00_1918 = (long) CINT(BgL_depth2281z00_1828);
						BgL_finalzf32282zf3_1919 = CBOOL(BgL_finalzf32282zf3_1829);
						BgL_abstractzf32285zf3_1922 = CBOOL(BgL_abstractzf32285zf3_1832);
						{	/* Object/class.scm 32 */
							obj_t BgL_itszd2super2277zd2_1924;

							obj_t BgL_slots2278z00_1925;

							BgL_globalz00_bglt BgL_holder2279z00_1926;

							obj_t BgL_widening2280z00_1927;

							long BgL_depth2281z00_1928;

							bool_t BgL_finalzf32282zf3_1929;

							obj_t BgL_constructor2283z00_1930;

							obj_t BgL_virtualzd2slotszd2number2284z00_1931;

							bool_t BgL_abstractzf32285zf3_1932;

							obj_t BgL_widezd2type2286zd2_1933;

							BgL_itszd2super2277zd2_1924 = BgL_itszd2super2277zd2_1824;
							BgL_slots2278z00_1925 = BgL_slots2278z00_1825;
							BgL_holder2279z00_1926 = BgL_holder2279z00_1916;
							BgL_widening2280z00_1927 = BgL_widening2280z00_1827;
							BgL_depth2281z00_1928 = BgL_depth2281z00_1918;
							BgL_finalzf32282zf3_1929 = BgL_finalzf32282zf3_1919;
							BgL_constructor2283z00_1930 = BgL_constructor2283z00_1830;
							BgL_virtualzd2slotszd2number2284z00_1931 =
								BgL_virtualzd2slotszd2number2284z00_1831;
							BgL_abstractzf32285zf3_1932 = BgL_abstractzf32285zf3_1922;
							BgL_widezd2type2286zd2_1933 = BgL_widezd2type2286zd2_1833;
							((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1913))->
									BgL_itszd2superzd2) =
								((obj_t) BgL_itszd2super2277zd2_1924), BUNSPEC);
							((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1913))->
									BgL_slotsz00) = ((obj_t) BgL_slots2278z00_1925), BUNSPEC);
							((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1913))->
									BgL_holderz00) =
								((BgL_globalz00_bglt) BgL_holder2279z00_1926), BUNSPEC);
							((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1913))->
									BgL_wideningz00) =
								((obj_t) BgL_widening2280z00_1927), BUNSPEC);
							((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1913))->
									BgL_depthz00) = ((long) BgL_depth2281z00_1928), BUNSPEC);
							((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1913))->
									BgL_finalzf3zf3) =
								((bool_t) BgL_finalzf32282zf3_1929), BUNSPEC);
							((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1913))->
									BgL_constructorz00) =
								((obj_t) BgL_constructor2283z00_1930), BUNSPEC);
							((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1913))->
									BgL_virtualzd2slotszd2numberz00) =
								((obj_t) BgL_virtualzd2slotszd2number2284z00_1931), BUNSPEC);
							((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1913))->
									BgL_abstractzf3zf3) =
								((bool_t) BgL_abstractzf32285zf3_1932), BUNSPEC);
							((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1913))->
									BgL_widezd2typezd2) =
								((obj_t) BgL_widezd2type2286zd2_1933), BUNSPEC);
							BgL_res2912z00_1934 = BgL_new2287z00_1913;
					}}
					BgL_auxz00_2626 = BgL_res2912z00_1934;
				}
				return (obj_t) (BgL_auxz00_2626);
			}
		}
	}



/* %allocate-tclass */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_z52allocatezd2tclassz80zzobject_classz00()
	{
		AN_OBJECT;
		{	/* Object/class.scm 32 */
			{	/* Object/class.scm 32 */
				BgL_typez00_bglt BgL_new2299z00_1935;

				BgL_new2299z00_1935 =
					((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_typez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new2299z00_1935),
					BGl_classzd2numzd2zz__objectz00(BGl_tclassz00zzobject_classz00));
				{	/* Object/class.scm 32 */
					BgL_objectz00_bglt BgL_auxz00_2647;

					BgL_auxz00_2647 = (BgL_objectz00_bglt) (BgL_new2299z00_1935);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_2647, BFALSE);
				}
				return BgL_new2299z00_1935;
			}
		}
	}



/* _%allocate-tclass */
	obj_t BGl__z52allocatezd2tclassz80zzobject_classz00(obj_t BgL_envz00_1723)
	{
		AN_OBJECT;
		{	/* Object/class.scm 32 */
			{	/* Object/class.scm 32 */
				BgL_typez00_bglt BgL_auxz00_2650;

				{	/* Object/class.scm 32 */
					BgL_typez00_bglt BgL_res2913z00_1939;

					{	/* Object/class.scm 32 */
						BgL_typez00_bglt BgL_new2299z00_1937;

						BgL_new2299z00_1937 =
							((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_typez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2299z00_1937),
							BGl_classzd2numzd2zz__objectz00(BGl_tclassz00zzobject_classz00));
						{	/* Object/class.scm 32 */
							BgL_objectz00_bglt BgL_auxz00_2655;

							BgL_auxz00_2655 = (BgL_objectz00_bglt) (BgL_new2299z00_1937);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2655, BFALSE);
						}
						BgL_res2913z00_1939 = BgL_new2299z00_1937;
					}
					BgL_auxz00_2650 = BgL_res2913z00_1939;
				}
				return (obj_t) (BgL_auxz00_2650);
			}
		}
	}



/* tclass-nil */
	BGL_EXPORTED_DEF BgL_tclassz00_bglt BGl_tclasszd2nilzd2zzobject_classz00()
	{
		AN_OBJECT;
		{	/* Object/class.scm 32 */
			if ((BGl_z52thezd2tclasszd2nilz52zzobject_classz00 == BUNSPEC))
				{	/* Object/class.scm 32 */
					{	/* Object/class.scm 32 */
						BgL_typez00_bglt BgL_res2871z00_1399;

						{	/* Object/class.scm 32 */
							BgL_typez00_bglt BgL_new1598z00_1395;

							BgL_new1598z00_1395 =
								((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1598z00_1395),
								BGl_classzd2numzd2zz__objectz00(BGl_typez00zztype_typez00));
							{	/* Object/class.scm 32 */
								BgL_objectz00_bglt BgL_auxz00_2665;

								BgL_auxz00_2665 = (BgL_objectz00_bglt) (BgL_new1598z00_1395);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2665, BFALSE);
							}
							BgL_res2871z00_1399 = BgL_new1598z00_1395;
						}
						BGl_z52thezd2tclasszd2nilz52zzobject_classz00 =
							(obj_t) (BgL_res2871z00_1399);
					}
					{	/* Object/class.scm 32 */
						BgL_typez00_bglt BgL_res2872z00_1431;

						{	/* Object/class.scm 32 */
							BgL_typez00_bglt BgL_new1581z00_1400;

							obj_t BgL_id1566z00_1401;

							int BgL_occurrence1580z00_1415;

							BgL_new1581z00_1400 =
								(BgL_typez00_bglt)
								(BGl_z52thezd2tclasszd2nilz52zzobject_classz00);
							BgL_id1566z00_1401 = CNST_TABLE_REF(((long) 12));
							BgL_occurrence1580z00_1415 = (int) (((long) 0));
							{	/* Object/class.scm 32 */
								obj_t BgL_id1566z00_1416;

								obj_t BgL_name1567z00_1417;

								obj_t BgL_siza7e1568za7_1418;

								obj_t BgL_class1569z00_1419;

								obj_t BgL_coercezd2to1570zd2_1420;

								obj_t BgL_parents1571z00_1421;

								bool_t BgL_initzf31572zf3_1422;

								bool_t BgL_magiczf31573zf3_1423;

								obj_t BgL_z421574z42_1424;

								obj_t BgL_alias1575z00_1425;

								obj_t BgL_pointedzd2tozd2by1576z00_1426;

								obj_t BgL_tvector1577z00_1427;

								obj_t BgL_location1578z00_1428;

								obj_t BgL_importzd2location1579zd2_1429;

								int BgL_occurrence1580z00_1430;

								BgL_id1566z00_1416 = BgL_id1566z00_1401;
								BgL_name1567z00_1417 = BUNSPEC;
								BgL_siza7e1568za7_1418 = BUNSPEC;
								BgL_class1569z00_1419 = BUNSPEC;
								BgL_coercezd2to1570zd2_1420 = BUNSPEC;
								BgL_parents1571z00_1421 = BUNSPEC;
								BgL_initzf31572zf3_1422 = ((bool_t) 0);
								BgL_magiczf31573zf3_1423 = ((bool_t) 0);
								BgL_z421574z42_1424 = BUNSPEC;
								BgL_alias1575z00_1425 = BUNSPEC;
								BgL_pointedzd2tozd2by1576z00_1426 = BUNSPEC;
								BgL_tvector1577z00_1427 = BUNSPEC;
								BgL_location1578z00_1428 = BUNSPEC;
								BgL_importzd2location1579zd2_1429 = BUNSPEC;
								BgL_occurrence1580z00_1430 = BgL_occurrence1580z00_1415;
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1400))->BgL_idz00) =
									((obj_t) BgL_id1566z00_1416), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1400))->BgL_namez00) =
									((obj_t) BgL_name1567z00_1417), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1400))->
										BgL_siza7eza7) = ((obj_t) BgL_siza7e1568za7_1418), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1400))->
										BgL_classz00) = ((obj_t) BgL_class1569z00_1419), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1400))->
										BgL_coercezd2tozd2) =
									((obj_t) BgL_coercezd2to1570zd2_1420), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1400))->
										BgL_parentsz00) =
									((obj_t) BgL_parents1571z00_1421), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1400))->
										BgL_initzf3zf3) =
									((bool_t) BgL_initzf31572zf3_1422), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1400))->
										BgL_magiczf3zf3) =
									((bool_t) BgL_magiczf31573zf3_1423), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1400))->BgL_z42z42) =
									((obj_t) BgL_z421574z42_1424), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1400))->
										BgL_aliasz00) = ((obj_t) BgL_alias1575z00_1425), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1400))->
										BgL_pointedzd2tozd2byz00) =
									((obj_t) BgL_pointedzd2tozd2by1576z00_1426), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1400))->
										BgL_tvectorz00) =
									((obj_t) BgL_tvector1577z00_1427), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1400))->
										BgL_locationz00) =
									((obj_t) BgL_location1578z00_1428), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1400))->
										BgL_importzd2locationzd2) =
									((obj_t) BgL_importzd2location1579zd2_1429), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1400))->
										BgL_occurrencez00) =
									((int) BgL_occurrence1580z00_1430), BUNSPEC);
								BgL_res2872z00_1431 = BgL_new1581z00_1400;
						}} BgL_res2872z00_1431;
					}
					{	/* Object/class.scm 32 */
						long BgL_arg2752z00_754;

						BgL_arg2752z00_754 =
							BGl_classzd2numzd2zz__objectz00(BGl_tclassz00zzobject_classz00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2tclasszd2nilz52zzobject_classz00),
							BgL_arg2752z00_754);
					}
					{	/* Object/class.scm 32 */
						BgL_tclassz00_bglt BgL_arg2753z00_755;

						{	/* Object/class.scm 32 */
							BgL_globalz00_bglt BgL_arg2754z00_756;

							BgL_arg2754z00_756 = BGl_globalzd2nilzd2zzast_varz00();
							{	/* Object/class.scm 32 */
								BgL_tclassz00_bglt BgL_res2874z00_1467;

								{	/* Object/class.scm 32 */
									BgL_tclassz00_bglt BgL_new2248z00_1444;

									BgL_new2248z00_1444 =
										((BgL_tclassz00_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_tclassz00_bgl))));
									{	/* Object/class.scm 32 */
										BgL_tclassz00_bglt BgL_res2873z00_1466;

										{	/* Object/class.scm 32 */
											BgL_tclassz00_bglt BgL_new2287z00_1445;

											BgL_new2287z00_1445 = BgL_new2248z00_1444;
											{	/* Object/class.scm 32 */
												obj_t BgL_itszd2super2277zd2_1456;

												obj_t BgL_slots2278z00_1457;

												BgL_globalz00_bglt BgL_holder2279z00_1458;

												obj_t BgL_widening2280z00_1459;

												long BgL_depth2281z00_1460;

												bool_t BgL_finalzf32282zf3_1461;

												obj_t BgL_constructor2283z00_1462;

												obj_t BgL_virtualzd2slotszd2number2284z00_1463;

												bool_t BgL_abstractzf32285zf3_1464;

												obj_t BgL_widezd2type2286zd2_1465;

												BgL_itszd2super2277zd2_1456 = BUNSPEC;
												BgL_slots2278z00_1457 = BUNSPEC;
												BgL_holder2279z00_1458 = BgL_arg2754z00_756;
												BgL_widening2280z00_1459 = BUNSPEC;
												BgL_depth2281z00_1460 = ((long) 0);
												BgL_finalzf32282zf3_1461 = ((bool_t) 0);
												BgL_constructor2283z00_1462 = BUNSPEC;
												BgL_virtualzd2slotszd2number2284z00_1463 = BUNSPEC;
												BgL_abstractzf32285zf3_1464 = ((bool_t) 0);
												BgL_widezd2type2286zd2_1465 = BUNSPEC;
												((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1445))->
														BgL_itszd2superzd2) =
													((obj_t) BgL_itszd2super2277zd2_1456), BUNSPEC);
												((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1445))->
														BgL_slotsz00) =
													((obj_t) BgL_slots2278z00_1457), BUNSPEC);
												((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1445))->
														BgL_holderz00) =
													((BgL_globalz00_bglt) BgL_holder2279z00_1458),
													BUNSPEC);
												((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1445))->
														BgL_wideningz00) =
													((obj_t) BgL_widening2280z00_1459), BUNSPEC);
												((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1445))->
														BgL_depthz00) =
													((long) BgL_depth2281z00_1460), BUNSPEC);
												((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1445))->
														BgL_finalzf3zf3) =
													((bool_t) BgL_finalzf32282zf3_1461), BUNSPEC);
												((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1445))->
														BgL_constructorz00) =
													((obj_t) BgL_constructor2283z00_1462), BUNSPEC);
												((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1445))->
														BgL_virtualzd2slotszd2numberz00) =
													((obj_t) BgL_virtualzd2slotszd2number2284z00_1463),
													BUNSPEC);
												((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1445))->
														BgL_abstractzf3zf3) =
													((bool_t) BgL_abstractzf32285zf3_1464), BUNSPEC);
												((((BgL_tclassz00_bglt) CREF(BgL_new2287z00_1445))->
														BgL_widezd2typezd2) =
													((obj_t) BgL_widezd2type2286zd2_1465), BUNSPEC);
												BgL_res2873z00_1466 = BgL_new2287z00_1445;
										}} BgL_res2873z00_1466;
									}
									BgL_res2874z00_1467 = BgL_new2248z00_1444;
								}
								BgL_arg2753z00_755 = BgL_res2874z00_1467;
						}}
						{	/* Object/class.scm 32 */
							obj_t BgL_auxz00_2704;

							BgL_objectz00_bglt BgL_auxz00_2702;

							BgL_auxz00_2704 = (obj_t) (BgL_arg2753z00_755);
							BgL_auxz00_2702 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2tclasszd2nilz52zzobject_classz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2702, BgL_auxz00_2704);
				}}}
			else
				{	/* Object/class.scm 32 */
					BFALSE;
				}
			return
				(BgL_tclassz00_bglt) (BGl_z52thezd2tclasszd2nilz52zzobject_classz00);
		}
	}



/* _tclass-nil */
	obj_t BGl__tclasszd2nilzd2zzobject_classz00(obj_t BgL_envz00_1724)
	{
		AN_OBJECT;
		{	/* Object/class.scm 32 */
			return (obj_t) (BGl_tclasszd2nilzd2zzobject_classz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzobject_classz00()
	{
		AN_OBJECT;
		{	/* Object/class.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_classz00()
	{
		AN_OBJECT;
		{	/* Object/class.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2occurrencezd2incrementz12zd2envzc0zztype_typez00,
				BGl_tclassz00zzobject_classz00, BGl_proc2893z00zzobject_classz00,
				BGl_string2894z00zzobject_classz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_wclassz00zzobject_classz00, BGl_proc2895z00zzobject_classz00,
				BGl_string2896z00zzobject_classz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_wclassz00zzobject_classz00, BGl_proc2897z00zzobject_classz00,
				BGl_string2898z00zzobject_classz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_jclassz00zzobject_classz00, BGl_proc2899z00zzobject_classz00,
				BGl_string2896z00zzobject_classz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_jclassz00zzobject_classz00, BGl_proc2900z00zzobject_classz00,
				BGl_string2898z00zzobject_classz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_tclassz00zzobject_classz00, BGl_proc2901z00zzobject_classz00,
				BGl_string2896z00zzobject_classz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_tclassz00zzobject_classz00, BGl_proc2902z00zzobject_classz00,
				BGl_string2898z00zzobject_classz00);
		}
	}



/* struct+object->objec2565 */
	obj_t BGl_structzb2objectzd2ze3objec2565z83zzobject_classz00(obj_t
		BgL_envz00_1848, obj_t BgL_oz00_1849, obj_t BgL_sz00_1850)
	{
		AN_OBJECT;
		{	/* Object/class.scm 32 */
			{
				BgL_tclassz00_bglt BgL_oz00_986;

				obj_t BgL_sz00_987;

				{	/* Object/class.scm 32 */
					BgL_tclassz00_bglt BgL_auxz00_2717;

					BgL_oz00_986 = (BgL_tclassz00_bglt) (BgL_oz00_1849);
					BgL_sz00_987 = BgL_sz00_1850;
					{

						{	/* Object/class.scm 32 */
							obj_t BgL_old2303z00_990;

							obj_t BgL_aux2304z00_991;

							{	/* Object/class.scm 32 */
								obj_t BgL_nextzd2method2564zd2_1005;

								BgL_nextzd2method2564zd2_1005 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_986),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_tclassz00zzobject_classz00);
								if (PROCEDUREP(BgL_nextzd2method2564zd2_1005))
									{	/* Object/class.scm 32 */
										BgL_old2303z00_990 =
											PROCEDURE_ENTRY(BgL_nextzd2method2564zd2_1005)
											(BgL_nextzd2method2564zd2_1005, (obj_t) (BgL_oz00_986),
											BgL_sz00_987, BEOA);
									}
								else
									{	/* Object/class.scm 32 */
										BgL_old2303z00_990 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_986), BgL_sz00_987));
									}
							}
							BgL_aux2304z00_991 = STRUCT_REF(BgL_sz00_987, (int) (((long) 0)));
							{	/* Object/class.scm 32 */
								BgL_tclassz00_bglt BgL_new2305z00_992;

								BgL_new2305z00_992 =
									((BgL_tclassz00_bglt) (BgL_old2303z00_990));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new2305z00_992),
									BGl_classzd2numzd2zz__objectz00
									(BGl_tclassz00zzobject_classz00));
								{	/* Object/class.scm 32 */
									BgL_tclassz00_bglt BgL_arg2826z00_994;

									{	/* Object/class.scm 32 */
										obj_t BgL_arg2827z00_995;

										obj_t BgL_arg2828z00_996;

										obj_t BgL_arg2829z00_997;

										obj_t BgL_arg2830z00_998;

										obj_t BgL_arg2831z00_999;

										obj_t BgL_arg2832z00_1000;

										obj_t BgL_arg2833z00_1001;

										obj_t BgL_arg2834z00_1002;

										obj_t BgL_arg2835z00_1003;

										obj_t BgL_arg2836z00_1004;

										BgL_arg2827z00_995 =
											STRUCT_REF(BgL_aux2304z00_991, (int) (((long) 0)));
										BgL_arg2828z00_996 =
											STRUCT_REF(BgL_aux2304z00_991, (int) (((long) 1)));
										BgL_arg2829z00_997 =
											STRUCT_REF(BgL_aux2304z00_991, (int) (((long) 2)));
										BgL_arg2830z00_998 =
											STRUCT_REF(BgL_aux2304z00_991, (int) (((long) 3)));
										BgL_arg2831z00_999 =
											STRUCT_REF(BgL_aux2304z00_991, (int) (((long) 4)));
										BgL_arg2832z00_1000 =
											STRUCT_REF(BgL_aux2304z00_991, (int) (((long) 5)));
										BgL_arg2833z00_1001 =
											STRUCT_REF(BgL_aux2304z00_991, (int) (((long) 6)));
										BgL_arg2834z00_1002 =
											STRUCT_REF(BgL_aux2304z00_991, (int) (((long) 7)));
										BgL_arg2835z00_1003 =
											STRUCT_REF(BgL_aux2304z00_991, (int) (((long) 8)));
										BgL_arg2836z00_1004 =
											STRUCT_REF(BgL_aux2304z00_991, (int) (((long) 9)));
										{	/* Object/class.scm 32 */
											BgL_tclassz00_bglt BgL_res2883z00_1680;

											{	/* Object/class.scm 32 */
												BgL_globalz00_bglt BgL_holder2240z00_1649;

												long BgL_depth2242z00_1651;

												bool_t BgL_finalzf32243zf3_1652;

												bool_t BgL_abstractzf32246zf3_1655;

												BgL_holder2240z00_1649 =
													(BgL_globalz00_bglt) (BgL_arg2829z00_997);
												BgL_depth2242z00_1651 = (long) CINT(BgL_arg2831z00_999);
												BgL_finalzf32243zf3_1652 = CBOOL(BgL_arg2832z00_1000);
												BgL_abstractzf32246zf3_1655 =
													CBOOL(BgL_arg2835z00_1003);
												{	/* Object/class.scm 32 */
													BgL_tclassz00_bglt BgL_new2248z00_1657;

													BgL_new2248z00_1657 =
														((BgL_tclassz00_bglt) BREF(GC_MALLOC(sizeof(struct
																	BgL_tclassz00_bgl))));
													{	/* Object/class.scm 32 */
														BgL_tclassz00_bglt BgL_res2882z00_1679;

														{	/* Object/class.scm 32 */
															BgL_tclassz00_bglt BgL_new2287z00_1658;

															BgL_new2287z00_1658 = BgL_new2248z00_1657;
															{	/* Object/class.scm 32 */
																obj_t BgL_itszd2super2277zd2_1669;

																obj_t BgL_slots2278z00_1670;

																BgL_globalz00_bglt BgL_holder2279z00_1671;

																obj_t BgL_widening2280z00_1672;

																long BgL_depth2281z00_1673;

																bool_t BgL_finalzf32282zf3_1674;

																obj_t BgL_constructor2283z00_1675;

																obj_t BgL_virtualzd2slotszd2number2284z00_1676;

																bool_t BgL_abstractzf32285zf3_1677;

																obj_t BgL_widezd2type2286zd2_1678;

																BgL_itszd2super2277zd2_1669 =
																	BgL_arg2827z00_995;
																BgL_slots2278z00_1670 = BgL_arg2828z00_996;
																BgL_holder2279z00_1671 = BgL_holder2240z00_1649;
																BgL_widening2280z00_1672 = BgL_arg2830z00_998;
																BgL_depth2281z00_1673 = BgL_depth2242z00_1651;
																BgL_finalzf32282zf3_1674 =
																	BgL_finalzf32243zf3_1652;
																BgL_constructor2283z00_1675 =
																	BgL_arg2833z00_1001;
																BgL_virtualzd2slotszd2number2284z00_1676 =
																	BgL_arg2834z00_1002;
																BgL_abstractzf32285zf3_1677 =
																	BgL_abstractzf32246zf3_1655;
																BgL_widezd2type2286zd2_1678 =
																	BgL_arg2836z00_1004;
																((((BgL_tclassz00_bglt)
																			CREF(BgL_new2287z00_1658))->
																		BgL_itszd2superzd2) =
																	((obj_t) BgL_itszd2super2277zd2_1669),
																	BUNSPEC);
																((((BgL_tclassz00_bglt)
																			CREF(BgL_new2287z00_1658))->
																		BgL_slotsz00) =
																	((obj_t) BgL_slots2278z00_1670), BUNSPEC);
																((((BgL_tclassz00_bglt)
																			CREF(BgL_new2287z00_1658))->
																		BgL_holderz00) =
																	((BgL_globalz00_bglt) BgL_holder2279z00_1671),
																	BUNSPEC);
																((((BgL_tclassz00_bglt)
																			CREF(BgL_new2287z00_1658))->
																		BgL_wideningz00) =
																	((obj_t) BgL_widening2280z00_1672), BUNSPEC);
																((((BgL_tclassz00_bglt)
																			CREF(BgL_new2287z00_1658))->
																		BgL_depthz00) =
																	((long) BgL_depth2281z00_1673), BUNSPEC);
																((((BgL_tclassz00_bglt)
																			CREF(BgL_new2287z00_1658))->
																		BgL_finalzf3zf3) =
																	((bool_t) BgL_finalzf32282zf3_1674), BUNSPEC);
																((((BgL_tclassz00_bglt)
																			CREF(BgL_new2287z00_1658))->
																		BgL_constructorz00) =
																	((obj_t) BgL_constructor2283z00_1675),
																	BUNSPEC);
																((((BgL_tclassz00_bglt)
																			CREF(BgL_new2287z00_1658))->
																		BgL_virtualzd2slotszd2numberz00) =
																	((obj_t)
																		BgL_virtualzd2slotszd2number2284z00_1676),
																	BUNSPEC);
																((((BgL_tclassz00_bglt)
																			CREF(BgL_new2287z00_1658))->
																		BgL_abstractzf3zf3) =
																	((bool_t) BgL_abstractzf32285zf3_1677),
																	BUNSPEC);
																((((BgL_tclassz00_bglt)
																			CREF(BgL_new2287z00_1658))->
																		BgL_widezd2typezd2) =
																	((obj_t) BgL_widezd2type2286zd2_1678),
																	BUNSPEC);
																BgL_res2882z00_1679 = BgL_new2287z00_1658;
														}} BgL_res2882z00_1679;
													}
													BgL_res2883z00_1680 = BgL_new2248z00_1657;
											}}
											BgL_arg2826z00_994 = BgL_res2883z00_1680;
									}}
									{	/* Object/class.scm 32 */
										obj_t BgL_auxz00_2771;

										BgL_objectz00_bglt BgL_auxz00_2769;

										BgL_auxz00_2771 = (obj_t) (BgL_arg2826z00_994);
										BgL_auxz00_2769 = (BgL_objectz00_bglt) (BgL_new2305z00_992);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_2769, BgL_auxz00_2771);
								}}
								BgL_auxz00_2717 = BgL_new2305z00_992;
					}}}
					return (obj_t) (BgL_auxz00_2717);
				}
			}
		}
	}



/* object->struct-tclas2563 */
	obj_t BGl_objectzd2ze3structzd2tclas2563ze3zzobject_classz00(obj_t
		BgL_envz00_1851, obj_t BgL_obj2300z00_1852)
	{
		AN_OBJECT;
		{	/* Object/class.scm 32 */
			{
				BgL_tclassz00_bglt BgL_obj2300z00_958;

				BgL_obj2300z00_958 = (BgL_tclassz00_bglt) (BgL_obj2300z00_1852);
				{

					{	/* Object/class.scm 32 */
						obj_t BgL_res2301z00_961;

						{	/* Object/class.scm 32 */
							obj_t BgL_nextzd2method2562zd2_984;

							BgL_nextzd2method2562zd2_984 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj2300z00_958),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_tclassz00zzobject_classz00);
							if (PROCEDUREP(BgL_nextzd2method2562zd2_984))
								{	/* Object/class.scm 32 */
									BgL_res2301z00_961 =
										PROCEDURE_ENTRY(BgL_nextzd2method2562zd2_984)
										(BgL_nextzd2method2562zd2_984, (obj_t) (BgL_obj2300z00_958),
										BEOA);
								}
							else
								{	/* Object/class.scm 32 */
									BgL_res2301z00_961 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj2300z00_958));
								}
						}
						{	/* Object/class.scm 32 */
							obj_t BgL_aux2302z00_962;

							{	/* Object/class.scm 32 */
								obj_t BgL_keyz00_1570;

								BgL_keyz00_1570 = CNST_TABLE_REF(((long) 9));
								BgL_aux2302z00_962 =
									make_struct(BgL_keyz00_1570, (int) (((long) 10)), BUNSPEC);
							}
							{	/* Object/class.scm 32 */
								obj_t BgL_arg2802z00_964;

								{
									obj_t BgL_auxz00_2788;

									{	/* Object/class.scm 32 */
										BgL_objectz00_bglt BgL_auxz00_2789;

										BgL_auxz00_2789 = (BgL_objectz00_bglt) (BgL_obj2300z00_958);
										BgL_auxz00_2788 = BGL_OBJECT_WIDENING(BgL_auxz00_2789);
									}
									BgL_arg2802z00_964 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2788))->
										BgL_itszd2superzd2);
								}
								{	/* Object/class.scm 32 */
									int BgL_auxz00_2793;

									BgL_auxz00_2793 = (int) (((long) 0));
									STRUCT_SET(BgL_aux2302z00_962, BgL_auxz00_2793,
										BgL_arg2802z00_964);
							}}
							{	/* Object/class.scm 32 */
								obj_t BgL_arg2804z00_966;

								{
									obj_t BgL_auxz00_2796;

									{	/* Object/class.scm 32 */
										BgL_objectz00_bglt BgL_auxz00_2797;

										BgL_auxz00_2797 = (BgL_objectz00_bglt) (BgL_obj2300z00_958);
										BgL_auxz00_2796 = BGL_OBJECT_WIDENING(BgL_auxz00_2797);
									}
									BgL_arg2804z00_966 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2796))->
										BgL_slotsz00);
								}
								{	/* Object/class.scm 32 */
									int BgL_auxz00_2801;

									BgL_auxz00_2801 = (int) (((long) 1));
									STRUCT_SET(BgL_aux2302z00_962, BgL_auxz00_2801,
										BgL_arg2804z00_966);
							}}
							{	/* Object/class.scm 32 */
								BgL_globalz00_bglt BgL_arg2806z00_968;

								{
									obj_t BgL_auxz00_2804;

									{	/* Object/class.scm 32 */
										BgL_objectz00_bglt BgL_auxz00_2805;

										BgL_auxz00_2805 = (BgL_objectz00_bglt) (BgL_obj2300z00_958);
										BgL_auxz00_2804 = BGL_OBJECT_WIDENING(BgL_auxz00_2805);
									}
									BgL_arg2806z00_968 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2804))->
										BgL_holderz00);
								}
								{	/* Object/class.scm 32 */
									obj_t BgL_auxz00_2811;

									int BgL_auxz00_2809;

									BgL_auxz00_2811 = (obj_t) (BgL_arg2806z00_968);
									BgL_auxz00_2809 = (int) (((long) 2));
									STRUCT_SET(BgL_aux2302z00_962, BgL_auxz00_2809,
										BgL_auxz00_2811);
							}}
							{	/* Object/class.scm 32 */
								obj_t BgL_arg2808z00_970;

								{
									obj_t BgL_auxz00_2814;

									{	/* Object/class.scm 32 */
										BgL_objectz00_bglt BgL_auxz00_2815;

										BgL_auxz00_2815 = (BgL_objectz00_bglt) (BgL_obj2300z00_958);
										BgL_auxz00_2814 = BGL_OBJECT_WIDENING(BgL_auxz00_2815);
									}
									BgL_arg2808z00_970 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2814))->
										BgL_wideningz00);
								}
								{	/* Object/class.scm 32 */
									int BgL_auxz00_2819;

									BgL_auxz00_2819 = (int) (((long) 3));
									STRUCT_SET(BgL_aux2302z00_962, BgL_auxz00_2819,
										BgL_arg2808z00_970);
							}}
							{	/* Object/class.scm 32 */
								long BgL_arg2810z00_972;

								{
									obj_t BgL_auxz00_2822;

									{	/* Object/class.scm 32 */
										BgL_objectz00_bglt BgL_auxz00_2823;

										BgL_auxz00_2823 = (BgL_objectz00_bglt) (BgL_obj2300z00_958);
										BgL_auxz00_2822 = BGL_OBJECT_WIDENING(BgL_auxz00_2823);
									}
									BgL_arg2810z00_972 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2822))->
										BgL_depthz00);
								}
								{	/* Object/class.scm 32 */
									obj_t BgL_auxz00_2829;

									int BgL_auxz00_2827;

									BgL_auxz00_2829 = BINT(BgL_arg2810z00_972);
									BgL_auxz00_2827 = (int) (((long) 4));
									STRUCT_SET(BgL_aux2302z00_962, BgL_auxz00_2827,
										BgL_auxz00_2829);
							}}
							{	/* Object/class.scm 32 */
								bool_t BgL_arg2812z00_974;

								{
									obj_t BgL_auxz00_2832;

									{	/* Object/class.scm 32 */
										BgL_objectz00_bglt BgL_auxz00_2833;

										BgL_auxz00_2833 = (BgL_objectz00_bglt) (BgL_obj2300z00_958);
										BgL_auxz00_2832 = BGL_OBJECT_WIDENING(BgL_auxz00_2833);
									}
									BgL_arg2812z00_974 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2832))->
										BgL_finalzf3zf3);
								}
								{	/* Object/class.scm 32 */
									obj_t BgL_auxz00_2839;

									int BgL_auxz00_2837;

									BgL_auxz00_2839 = BBOOL(BgL_arg2812z00_974);
									BgL_auxz00_2837 = (int) (((long) 5));
									STRUCT_SET(BgL_aux2302z00_962, BgL_auxz00_2837,
										BgL_auxz00_2839);
							}}
							{	/* Object/class.scm 32 */
								obj_t BgL_arg2814z00_976;

								{
									obj_t BgL_auxz00_2842;

									{	/* Object/class.scm 32 */
										BgL_objectz00_bglt BgL_auxz00_2843;

										BgL_auxz00_2843 = (BgL_objectz00_bglt) (BgL_obj2300z00_958);
										BgL_auxz00_2842 = BGL_OBJECT_WIDENING(BgL_auxz00_2843);
									}
									BgL_arg2814z00_976 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2842))->
										BgL_constructorz00);
								}
								{	/* Object/class.scm 32 */
									int BgL_auxz00_2847;

									BgL_auxz00_2847 = (int) (((long) 6));
									STRUCT_SET(BgL_aux2302z00_962, BgL_auxz00_2847,
										BgL_arg2814z00_976);
							}}
							{	/* Object/class.scm 32 */
								obj_t BgL_arg2816z00_978;

								{
									obj_t BgL_auxz00_2850;

									{	/* Object/class.scm 32 */
										BgL_objectz00_bglt BgL_auxz00_2851;

										BgL_auxz00_2851 = (BgL_objectz00_bglt) (BgL_obj2300z00_958);
										BgL_auxz00_2850 = BGL_OBJECT_WIDENING(BgL_auxz00_2851);
									}
									BgL_arg2816z00_978 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2850))->
										BgL_virtualzd2slotszd2numberz00);
								}
								{	/* Object/class.scm 32 */
									int BgL_auxz00_2855;

									BgL_auxz00_2855 = (int) (((long) 7));
									STRUCT_SET(BgL_aux2302z00_962, BgL_auxz00_2855,
										BgL_arg2816z00_978);
							}}
							{	/* Object/class.scm 32 */
								bool_t BgL_arg2819z00_980;

								{
									obj_t BgL_auxz00_2858;

									{	/* Object/class.scm 32 */
										BgL_objectz00_bglt BgL_auxz00_2859;

										BgL_auxz00_2859 = (BgL_objectz00_bglt) (BgL_obj2300z00_958);
										BgL_auxz00_2858 = BGL_OBJECT_WIDENING(BgL_auxz00_2859);
									}
									BgL_arg2819z00_980 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2858))->
										BgL_abstractzf3zf3);
								}
								{	/* Object/class.scm 32 */
									obj_t BgL_auxz00_2865;

									int BgL_auxz00_2863;

									BgL_auxz00_2865 = BBOOL(BgL_arg2819z00_980);
									BgL_auxz00_2863 = (int) (((long) 8));
									STRUCT_SET(BgL_aux2302z00_962, BgL_auxz00_2863,
										BgL_auxz00_2865);
							}}
							{	/* Object/class.scm 32 */
								obj_t BgL_arg2821z00_982;

								{
									obj_t BgL_auxz00_2868;

									{	/* Object/class.scm 32 */
										BgL_objectz00_bglt BgL_auxz00_2869;

										BgL_auxz00_2869 = (BgL_objectz00_bglt) (BgL_obj2300z00_958);
										BgL_auxz00_2868 = BGL_OBJECT_WIDENING(BgL_auxz00_2869);
									}
									BgL_arg2821z00_982 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2868))->
										BgL_widezd2typezd2);
								}
								{	/* Object/class.scm 32 */
									int BgL_auxz00_2873;

									BgL_auxz00_2873 = (int) (((long) 9));
									STRUCT_SET(BgL_aux2302z00_962, BgL_auxz00_2873,
										BgL_arg2821z00_982);
							}}
							{	/* Object/class.scm 32 */
								int BgL_auxz00_2876;

								BgL_auxz00_2876 = (int) (((long) 0));
								STRUCT_SET(BgL_res2301z00_961, BgL_auxz00_2876,
									BgL_aux2302z00_962);
							}
							{	/* Object/class.scm 32 */
								obj_t BgL_auxz00_2879;

								BgL_auxz00_2879 = STRUCT_KEY(BgL_res2301z00_961);
								STRUCT_KEY_SET(BgL_aux2302z00_962, BgL_auxz00_2879);
							}
							{	/* Object/class.scm 32 */
								obj_t BgL_kz00_1621;

								BgL_kz00_1621 = CNST_TABLE_REF(((long) 9));
								STRUCT_KEY_SET(BgL_res2301z00_961, BgL_kz00_1621);
							}
							return BgL_res2301z00_961;
						}
					}
				}
			}
		}
	}



/* struct+object->objec2561 */
	obj_t BGl_structzb2objectzd2ze3objec2561z83zzobject_classz00(obj_t
		BgL_envz00_1853, obj_t BgL_oz00_1854, obj_t BgL_sz00_1855)
	{
		AN_OBJECT;
		{	/* Object/class.scm 54 */
			{
				BgL_jclassz00_bglt BgL_oz00_944;

				obj_t BgL_sz00_945;

				{	/* Object/class.scm 54 */
					BgL_jclassz00_bglt BgL_auxz00_2885;

					BgL_oz00_944 = (BgL_jclassz00_bglt) (BgL_oz00_1854);
					BgL_sz00_945 = BgL_sz00_1855;
					{

						{	/* Object/class.scm 54 */
							obj_t BgL_old2407z00_948;

							obj_t BgL_aux2408z00_949;

							{	/* Object/class.scm 54 */
								obj_t BgL_nextzd2method2560zd2_956;

								BgL_nextzd2method2560zd2_956 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_944),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_jclassz00zzobject_classz00);
								if (PROCEDUREP(BgL_nextzd2method2560zd2_956))
									{	/* Object/class.scm 54 */
										BgL_old2407z00_948 =
											PROCEDURE_ENTRY(BgL_nextzd2method2560zd2_956)
											(BgL_nextzd2method2560zd2_956, (obj_t) (BgL_oz00_944),
											BgL_sz00_945, BEOA);
									}
								else
									{	/* Object/class.scm 54 */
										BgL_old2407z00_948 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_944), BgL_sz00_945));
									}
							}
							BgL_aux2408z00_949 = STRUCT_REF(BgL_sz00_945, (int) (((long) 0)));
							{	/* Object/class.scm 54 */
								BgL_jclassz00_bglt BgL_new2409z00_950;

								BgL_new2409z00_950 =
									((BgL_jclassz00_bglt) (BgL_old2407z00_948));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new2409z00_950),
									BGl_classzd2numzd2zz__objectz00
									(BGl_jclassz00zzobject_classz00));
								{	/* Object/class.scm 54 */
									BgL_jclassz00_bglt BgL_arg2796z00_952;

									{	/* Object/class.scm 54 */
										obj_t BgL_arg2797z00_953;

										obj_t BgL_arg2798z00_954;

										obj_t BgL_arg2799z00_955;

										BgL_arg2797z00_953 =
											STRUCT_REF(BgL_aux2408z00_949, (int) (((long) 0)));
										BgL_arg2798z00_954 =
											STRUCT_REF(BgL_aux2408z00_949, (int) (((long) 1)));
										BgL_arg2799z00_955 =
											STRUCT_REF(BgL_aux2408z00_949, (int) (((long) 2)));
										{	/* Object/class.scm 54 */
											BgL_jclassz00_bglt BgL_res2880z00_1568;

											{	/* Object/class.scm 54 */
												obj_t BgL_package2372z00_1558;

												BgL_package2372z00_1558 = BgL_arg2799z00_955;
												{	/* Object/class.scm 54 */
													BgL_jclassz00_bglt BgL_new2373z00_1559;

													BgL_new2373z00_1559 =
														((BgL_jclassz00_bglt) BREF(GC_MALLOC(sizeof(struct
																	BgL_jclassz00_bgl))));
													{	/* Object/class.scm 54 */
														BgL_jclassz00_bglt BgL_res2879z00_1567;

														{	/* Object/class.scm 54 */
															BgL_jclassz00_bglt BgL_new2398z00_1560;

															BgL_new2398z00_1560 = BgL_new2373z00_1559;
															{	/* Object/class.scm 54 */
																obj_t BgL_itszd2super2395zd2_1564;

																obj_t BgL_slots2396z00_1565;

																obj_t BgL_package2397z00_1566;

																BgL_itszd2super2395zd2_1564 =
																	BgL_arg2797z00_953;
																BgL_slots2396z00_1565 = BgL_arg2798z00_954;
																BgL_package2397z00_1566 =
																	BgL_package2372z00_1558;
																((((BgL_jclassz00_bglt)
																			CREF(BgL_new2398z00_1560))->
																		BgL_itszd2superzd2) =
																	((obj_t) BgL_itszd2super2395zd2_1564),
																	BUNSPEC);
																((((BgL_jclassz00_bglt)
																			CREF(BgL_new2398z00_1560))->
																		BgL_slotsz00) =
																	((obj_t) BgL_slots2396z00_1565), BUNSPEC);
																((((BgL_jclassz00_bglt)
																			CREF(BgL_new2398z00_1560))->
																		BgL_packagez00) =
																	((obj_t) BgL_package2397z00_1566), BUNSPEC);
																BgL_res2879z00_1567 = BgL_new2398z00_1560;
														}} BgL_res2879z00_1567;
													}
													BgL_res2880z00_1568 = BgL_new2373z00_1559;
											}}
											BgL_arg2796z00_952 = BgL_res2880z00_1568;
									}}
									{	/* Object/class.scm 54 */
										obj_t BgL_auxz00_2914;

										BgL_objectz00_bglt BgL_auxz00_2912;

										BgL_auxz00_2914 = (obj_t) (BgL_arg2796z00_952);
										BgL_auxz00_2912 = (BgL_objectz00_bglt) (BgL_new2409z00_950);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_2912, BgL_auxz00_2914);
								}}
								BgL_auxz00_2885 = BgL_new2409z00_950;
					}}}
					return (obj_t) (BgL_auxz00_2885);
				}
			}
		}
	}



/* object->struct-jclas2559 */
	obj_t BGl_objectzd2ze3structzd2jclas2559ze3zzobject_classz00(obj_t
		BgL_envz00_1856, obj_t BgL_obj2404z00_1857)
	{
		AN_OBJECT;
		{	/* Object/class.scm 54 */
			{
				BgL_jclassz00_bglt BgL_obj2404z00_930;

				BgL_obj2404z00_930 = (BgL_jclassz00_bglt) (BgL_obj2404z00_1857);
				{

					{	/* Object/class.scm 54 */
						obj_t BgL_res2405z00_933;

						{	/* Object/class.scm 54 */
							obj_t BgL_nextzd2method2558zd2_942;

							BgL_nextzd2method2558zd2_942 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj2404z00_930),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_jclassz00zzobject_classz00);
							if (PROCEDUREP(BgL_nextzd2method2558zd2_942))
								{	/* Object/class.scm 54 */
									BgL_res2405z00_933 =
										PROCEDURE_ENTRY(BgL_nextzd2method2558zd2_942)
										(BgL_nextzd2method2558zd2_942, (obj_t) (BgL_obj2404z00_930),
										BEOA);
								}
							else
								{	/* Object/class.scm 54 */
									BgL_res2405z00_933 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj2404z00_930));
								}
						}
						{	/* Object/class.scm 54 */
							obj_t BgL_aux2406z00_934;

							{	/* Object/class.scm 54 */
								obj_t BgL_keyz00_1521;

								BgL_keyz00_1521 = CNST_TABLE_REF(((long) 10));
								BgL_aux2406z00_934 =
									make_struct(BgL_keyz00_1521, (int) (((long) 3)), BUNSPEC);
							}
							{	/* Object/class.scm 54 */
								obj_t BgL_arg2787z00_936;

								{
									obj_t BgL_auxz00_2931;

									{	/* Object/class.scm 54 */
										BgL_objectz00_bglt BgL_auxz00_2932;

										BgL_auxz00_2932 = (BgL_objectz00_bglt) (BgL_obj2404z00_930);
										BgL_auxz00_2931 = BGL_OBJECT_WIDENING(BgL_auxz00_2932);
									}
									BgL_arg2787z00_936 =
										(((BgL_jclassz00_bglt) CREF(BgL_auxz00_2931))->
										BgL_itszd2superzd2);
								}
								{	/* Object/class.scm 54 */
									int BgL_auxz00_2936;

									BgL_auxz00_2936 = (int) (((long) 0));
									STRUCT_SET(BgL_aux2406z00_934, BgL_auxz00_2936,
										BgL_arg2787z00_936);
							}}
							{	/* Object/class.scm 54 */
								obj_t BgL_arg2790z00_938;

								{
									obj_t BgL_auxz00_2939;

									{	/* Object/class.scm 54 */
										BgL_objectz00_bglt BgL_auxz00_2940;

										BgL_auxz00_2940 = (BgL_objectz00_bglt) (BgL_obj2404z00_930);
										BgL_auxz00_2939 = BGL_OBJECT_WIDENING(BgL_auxz00_2940);
									}
									BgL_arg2790z00_938 =
										(((BgL_jclassz00_bglt) CREF(BgL_auxz00_2939))->
										BgL_slotsz00);
								}
								{	/* Object/class.scm 54 */
									int BgL_auxz00_2944;

									BgL_auxz00_2944 = (int) (((long) 1));
									STRUCT_SET(BgL_aux2406z00_934, BgL_auxz00_2944,
										BgL_arg2790z00_938);
							}}
							{	/* Object/class.scm 54 */
								obj_t BgL_arg2792z00_940;

								{
									obj_t BgL_auxz00_2947;

									{	/* Object/class.scm 54 */
										BgL_objectz00_bglt BgL_auxz00_2948;

										BgL_auxz00_2948 = (BgL_objectz00_bglt) (BgL_obj2404z00_930);
										BgL_auxz00_2947 = BGL_OBJECT_WIDENING(BgL_auxz00_2948);
									}
									BgL_arg2792z00_940 =
										(((BgL_jclassz00_bglt) CREF(BgL_auxz00_2947))->
										BgL_packagez00);
								}
								{	/* Object/class.scm 54 */
									int BgL_auxz00_2952;

									BgL_auxz00_2952 = (int) (((long) 2));
									STRUCT_SET(BgL_aux2406z00_934, BgL_auxz00_2952,
										BgL_arg2792z00_940);
							}}
							{	/* Object/class.scm 54 */
								int BgL_auxz00_2955;

								BgL_auxz00_2955 = (int) (((long) 0));
								STRUCT_SET(BgL_res2405z00_933, BgL_auxz00_2955,
									BgL_aux2406z00_934);
							}
							{	/* Object/class.scm 54 */
								obj_t BgL_auxz00_2958;

								BgL_auxz00_2958 = STRUCT_KEY(BgL_res2405z00_933);
								STRUCT_KEY_SET(BgL_aux2406z00_934, BgL_auxz00_2958);
							}
							{	/* Object/class.scm 54 */
								obj_t BgL_kz00_1544;

								BgL_kz00_1544 = CNST_TABLE_REF(((long) 10));
								STRUCT_KEY_SET(BgL_res2405z00_933, BgL_kz00_1544);
							}
							return BgL_res2405z00_933;
						}
					}
				}
			}
		}
	}



/* struct+object->objec2557 */
	obj_t BGl_structzb2objectzd2ze3objec2557z83zzobject_classz00(obj_t
		BgL_envz00_1858, obj_t BgL_oz00_1859, obj_t BgL_sz00_1860)
	{
		AN_OBJECT;
		{	/* Object/class.scm 62 */
			{
				BgL_wclassz00_bglt BgL_oz00_918;

				obj_t BgL_sz00_919;

				{	/* Object/class.scm 62 */
					BgL_wclassz00_bglt BgL_auxz00_2964;

					BgL_oz00_918 = (BgL_wclassz00_bglt) (BgL_oz00_1859);
					BgL_sz00_919 = BgL_sz00_1860;
					{

						{	/* Object/class.scm 62 */
							obj_t BgL_old2490z00_922;

							obj_t BgL_aux2491z00_923;

							{	/* Object/class.scm 62 */
								obj_t BgL_nextzd2method2556zd2_928;

								BgL_nextzd2method2556zd2_928 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_918),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_wclassz00zzobject_classz00);
								if (PROCEDUREP(BgL_nextzd2method2556zd2_928))
									{	/* Object/class.scm 62 */
										BgL_old2490z00_922 =
											PROCEDURE_ENTRY(BgL_nextzd2method2556zd2_928)
											(BgL_nextzd2method2556zd2_928, (obj_t) (BgL_oz00_918),
											BgL_sz00_919, BEOA);
									}
								else
									{	/* Object/class.scm 62 */
										BgL_old2490z00_922 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_918), BgL_sz00_919));
									}
							}
							BgL_aux2491z00_923 = STRUCT_REF(BgL_sz00_919, (int) (((long) 0)));
							{	/* Object/class.scm 62 */
								BgL_wclassz00_bglt BgL_new2492z00_924;

								BgL_new2492z00_924 =
									((BgL_wclassz00_bglt) (BgL_old2490z00_922));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new2492z00_924),
									BGl_classzd2numzd2zz__objectz00
									(BGl_wclassz00zzobject_classz00));
								{	/* Object/class.scm 62 */
									BgL_wclassz00_bglt BgL_arg2783z00_926;

									{	/* Object/class.scm 62 */
										obj_t BgL_arg2784z00_927;

										BgL_arg2784z00_927 =
											STRUCT_REF(BgL_aux2491z00_923, (int) (((long) 0)));
										{	/* Object/class.scm 62 */
											BgL_wclassz00_bglt BgL_res2877z00_1519;

											{	/* Object/class.scm 62 */
												BgL_wclassz00_bglt BgL_new2462z00_1514;

												BgL_new2462z00_1514 =
													((BgL_wclassz00_bglt) BREF(GC_MALLOC(sizeof(struct
																BgL_wclassz00_bgl))));
												{	/* Object/class.scm 62 */
													BgL_wclassz00_bglt BgL_res2876z00_1518;

													{	/* Object/class.scm 62 */
														BgL_wclassz00_bglt BgL_new2483z00_1515;

														BgL_new2483z00_1515 = BgL_new2462z00_1514;
														{	/* Object/class.scm 62 */
															obj_t BgL_itszd2class2482zd2_1517;

															BgL_itszd2class2482zd2_1517 = BgL_arg2784z00_927;
															((((BgL_wclassz00_bglt)
																		CREF(BgL_new2483z00_1515))->
																	BgL_itszd2classzd2) =
																((obj_t) BgL_itszd2class2482zd2_1517), BUNSPEC);
															BgL_res2876z00_1518 = BgL_new2483z00_1515;
													}} BgL_res2876z00_1518;
												}
												BgL_res2877z00_1519 = BgL_new2462z00_1514;
											}
											BgL_arg2783z00_926 = BgL_res2877z00_1519;
									}}
									{	/* Object/class.scm 62 */
										obj_t BgL_auxz00_2987;

										BgL_objectz00_bglt BgL_auxz00_2985;

										BgL_auxz00_2987 = (obj_t) (BgL_arg2783z00_926);
										BgL_auxz00_2985 = (BgL_objectz00_bglt) (BgL_new2492z00_924);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_2985, BgL_auxz00_2987);
								}}
								BgL_auxz00_2964 = BgL_new2492z00_924;
					}}}
					return (obj_t) (BgL_auxz00_2964);
				}
			}
		}
	}



/* object->struct-wclas2555 */
	obj_t BGl_objectzd2ze3structzd2wclas2555ze3zzobject_classz00(obj_t
		BgL_envz00_1861, obj_t BgL_obj2487z00_1862)
	{
		AN_OBJECT;
		{	/* Object/class.scm 62 */
			{
				BgL_wclassz00_bglt BgL_obj2487z00_908;

				BgL_obj2487z00_908 = (BgL_wclassz00_bglt) (BgL_obj2487z00_1862);
				{

					{	/* Object/class.scm 62 */
						obj_t BgL_res2488z00_911;

						{	/* Object/class.scm 62 */
							obj_t BgL_nextzd2method2554zd2_916;

							BgL_nextzd2method2554zd2_916 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj2487z00_908),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_wclassz00zzobject_classz00);
							if (PROCEDUREP(BgL_nextzd2method2554zd2_916))
								{	/* Object/class.scm 62 */
									BgL_res2488z00_911 =
										PROCEDURE_ENTRY(BgL_nextzd2method2554zd2_916)
										(BgL_nextzd2method2554zd2_916, (obj_t) (BgL_obj2487z00_908),
										BEOA);
								}
							else
								{	/* Object/class.scm 62 */
									BgL_res2488z00_911 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj2487z00_908));
								}
						}
						{	/* Object/class.scm 62 */
							obj_t BgL_aux2489z00_912;

							{	/* Object/class.scm 62 */
								obj_t BgL_keyz00_1490;

								BgL_keyz00_1490 = CNST_TABLE_REF(((long) 11));
								BgL_aux2489z00_912 =
									make_struct(BgL_keyz00_1490, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Object/class.scm 62 */
								obj_t BgL_arg2778z00_914;

								{
									obj_t BgL_auxz00_3004;

									{	/* Object/class.scm 62 */
										BgL_objectz00_bglt BgL_auxz00_3005;

										BgL_auxz00_3005 = (BgL_objectz00_bglt) (BgL_obj2487z00_908);
										BgL_auxz00_3004 = BGL_OBJECT_WIDENING(BgL_auxz00_3005);
									}
									BgL_arg2778z00_914 =
										(((BgL_wclassz00_bglt) CREF(BgL_auxz00_3004))->
										BgL_itszd2classzd2);
								}
								{	/* Object/class.scm 62 */
									int BgL_auxz00_3009;

									BgL_auxz00_3009 = (int) (((long) 0));
									STRUCT_SET(BgL_aux2489z00_912, BgL_auxz00_3009,
										BgL_arg2778z00_914);
							}}
							{	/* Object/class.scm 62 */
								int BgL_auxz00_3012;

								BgL_auxz00_3012 = (int) (((long) 0));
								STRUCT_SET(BgL_res2488z00_911, BgL_auxz00_3012,
									BgL_aux2489z00_912);
							}
							{	/* Object/class.scm 62 */
								obj_t BgL_auxz00_3015;

								BgL_auxz00_3015 = STRUCT_KEY(BgL_res2488z00_911);
								STRUCT_KEY_SET(BgL_aux2489z00_912, BgL_auxz00_3015);
							}
							{	/* Object/class.scm 62 */
								obj_t BgL_kz00_1505;

								BgL_kz00_1505 = CNST_TABLE_REF(((long) 11));
								STRUCT_KEY_SET(BgL_res2488z00_911, BgL_kz00_1505);
							}
							return BgL_res2488z00_911;
						}
					}
				}
			}
		}
	}



/* type-occurrence-incr2553 */
	obj_t BGl_typezd2occurrencezd2incr2553z00zzobject_classz00(obj_t
		BgL_envz00_1863, obj_t BgL_tz00_1864)
	{
		AN_OBJECT;
		{	/* Object/class.scm 332 */
			{
				BgL_tclassz00_bglt BgL_tz00_900;

				BgL_tz00_900 = (BgL_tclassz00_bglt) (BgL_tz00_1864);
				{

					{	/* Object/class.scm 332 */
						obj_t BgL_nextzd2method2552zd2_906;

						BgL_nextzd2method2552zd2_906 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							(BgL_objectz00_bglt) (BgL_tz00_900),
							BGl_typezd2occurrencezd2incrementz12zd2envzc0zztype_typez00,
							BGl_tclassz00zzobject_classz00);
						if (PROCEDUREP(BgL_nextzd2method2552zd2_906))
							{	/* Object/class.scm 332 */
								PROCEDURE_ENTRY(BgL_nextzd2method2552zd2_906)
									(BgL_nextzd2method2552zd2_906, (obj_t) (BgL_tz00_900), BEOA);
							}
						else
							{	/* Object/class.scm 332 */
								BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(
									(BgL_typez00_bglt) (BgL_tz00_900));
							}
					}
					{	/* Object/class.scm 335 */
						bool_t BgL_testz00_3030;

						{	/* Object/class.scm 335 */
							obj_t BgL_auxz00_3031;

							{
								obj_t BgL_auxz00_3032;

								{	/* Object/class.scm 335 */
									BgL_objectz00_bglt BgL_auxz00_3033;

									BgL_auxz00_3033 = (BgL_objectz00_bglt) (BgL_tz00_900);
									BgL_auxz00_3032 = BGL_OBJECT_WIDENING(BgL_auxz00_3033);
								}
								BgL_auxz00_3031 =
									(((BgL_tclassz00_bglt) CREF(BgL_auxz00_3032))->
									BgL_wideningz00);
							}
							BgL_testz00_3030 = CBOOL(BgL_auxz00_3031);
						}
						if (BgL_testz00_3030)
							{	/* Object/class.scm 335 */
								obj_t BgL_arg2775z00_905;

								{
									obj_t BgL_auxz00_3038;

									{	/* Object/class.scm 335 */
										BgL_objectz00_bglt BgL_auxz00_3039;

										BgL_auxz00_3039 = (BgL_objectz00_bglt) (BgL_tz00_900);
										BgL_auxz00_3038 = BGL_OBJECT_WIDENING(BgL_auxz00_3039);
									}
									BgL_arg2775z00_905 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_3038))->
										BgL_itszd2superzd2);
								}
								return
									BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(
									(BgL_typez00_bglt) (BgL_arg2775z00_905));
							}
						else
							{	/* Object/class.scm 335 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_classz00()
	{
		AN_OBJECT;
		{	/* Object/class.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string2903z00zzobject_classz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2903z00zzobject_classz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string2903z00zzobject_classz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string2903z00zzobject_classz00));
			BGl_modulezd2initializa7ationz75zztype_coercionz00(((long) 451733024),
				BSTRING_TO_STRING(BGl_string2903z00zzobject_classz00));
			BGl_modulezd2initializa7ationz75zzobject_toolsz00(((long) 405988581),
				BSTRING_TO_STRING(BGl_string2903z00zzobject_classz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string2903z00zzobject_classz00));
			BGl_modulezd2initializa7ationz75zzobject_coercionz00(((long) 173226634),
				BSTRING_TO_STRING(BGl_string2903z00zzobject_classz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string2903z00zzobject_classz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2903z00zzobject_classz00));
			BGl_modulezd2initializa7ationz75zzforeign_jtypez00(((long) 302809955),
				BSTRING_TO_STRING(BGl_string2903z00zzobject_classz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string2903z00zzobject_classz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string2903z00zzobject_classz00));
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string2903z00zzobject_classz00));
		}
	}

#ifdef __cplusplus
}
#endif
