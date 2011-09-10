/*===========================================================================*/
/*   (Integrate/iinfo.scm)                                                   */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/iinfo.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_sfunz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_arityz00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_predicatezd2ofzd2;
		obj_t BgL_stackzd2allocatorzd2;
		bool_t BgL_topzf3zf3;
		obj_t BgL_thezd2closurezd2;
		obj_t BgL_effectz00;
		obj_t BgL_propertyz00;
		obj_t BgL_argsz00;
		obj_t BgL_argszd2namezd2;
		obj_t BgL_bodyz00;
		obj_t BgL_classz00;
		obj_t BgL_dssslzd2keywordszd2;
		obj_t BgL_locz00;
		obj_t BgL_optionalsz00;
		obj_t BgL_keysz00;
		obj_t BgL_thezd2closurezd2globalz00;
	}              *BgL_sfunz00_bglt;

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

	typedef struct BgL_sexitz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_handlerz00;
		bool_t BgL_detachedzf3zf3;
	}               *BgL_sexitz00_bglt;

	typedef struct BgL_svarzf2iinfozf2_bgl
	{
		obj_t BgL_fzd2markzd2;
		obj_t BgL_uzd2markzd2;
		bool_t BgL_kapturedzf3zf3;
		bool_t BgL_celledzf3zf3;
	}                      *BgL_svarzf2iinfozf2_bglt;

	typedef struct BgL_sexitzf2iinfozf2_bgl
	{
		obj_t BgL_fzd2markzd2;
		obj_t BgL_uzd2markzd2;
		bool_t BgL_kapturedzf3zf3;
		bool_t BgL_celledzf3zf3;
	}                       *BgL_sexitzf2iinfozf2_bglt;

	typedef struct BgL_sfunzf2iinfozf2_bgl
	{
		obj_t BgL_ownerz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
		obj_t BgL_cfromz00;
		obj_t BgL_ctoz00;
		obj_t BgL_kz00;
		obj_t BgL_kza2za2;
		obj_t BgL_uz00;
		obj_t BgL_cnz00;
		obj_t BgL_ctz00;
		obj_t BgL_kontz00;
		bool_t BgL_gzf3zf3;
		obj_t BgL_lz00;
		obj_t BgL_ledz00;
		obj_t BgL_istampz00;
		obj_t BgL_globalz00;
		obj_t BgL_kapturedz00;
		obj_t BgL_tailzd2coercionzd2;
	}                      *BgL_sfunzf2iinfozf2_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_z52thezd2svarzf2Iinfozd2nilza0zzintegrate_infoz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_sexitzf2iinfozf2_bglt
		BGl_wideningzd2sexitzf2Iinfoz20zzintegrate_infoz00(obj_t, obj_t, bool_t,
		bool_t);
	static obj_t BGl_structzb2objectzd2ze3objec3552z83zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec3556z83zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec3561z83zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z52thezd2sexitzf2Iinfozd2nilza0zzintegrate_infoz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	static obj_t BGl__z52allocatezd2sfunzf2Iinfoz72zzintegrate_infoz00(obj_t);
	extern obj_t BGl_svarz00zzast_varz00;
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_sfunzf2iinfozf2_bglt
		BGl_makezd2sfunzf2Iinfoz20zzintegrate_infoz00(long, obj_t, obj_t, obj_t,
		bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2svarzf23558z11zzintegrate_infoz00(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzintegrate_infoz00();
	BGL_EXPORTED_DECL BgL_svarzf2iinfozf2_bglt
		BGl_wideningzd2svarzf2Iinfoz20zzintegrate_infoz00(obj_t, obj_t, bool_t,
		bool_t);
	BGL_EXPORTED_DEF obj_t BGl_sfunzf2Iinfozf2zzintegrate_infoz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_sexitzf2Iinfozf2zzintegrate_infoz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzintegrate_infoz00();
	BGL_EXPORTED_DECL bool_t BGl_sexitzf2Iinfozf3z01zzintegrate_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_sfunzf2iinfozf2_bglt
		BGl_fillzd2sfunzf2Iinfoz12z32zzintegrate_infoz00(BgL_sfunzf2iinfozf2_bglt,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_sfunzf2iinfozf2_bglt
		BGl_sfunzf2Iinfozd2nilz20zzintegrate_infoz00();
	BGL_EXPORTED_DECL BgL_sexitzf2iinfozf2_bglt
		BGl_sexitzf2Iinfozd2nilz20zzintegrate_infoz00();
	BGL_EXPORTED_DECL BgL_svarz00_bglt
		BGl_z52allocatezd2svarzf2Iinfoz72zzintegrate_infoz00();
	BGL_EXPORTED_DECL BgL_sfunzf2iinfozf2_bglt
		BGl_wideningzd2sfunzf2Iinfoz20zzintegrate_infoz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2sexitzf2Iinfoz72zzintegrate_infoz00(obj_t);
	extern BgL_sfunz00_bglt BGl_makezd2sfunzd2zzast_varz00(long, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_svarzf2iinfozf2_bglt
		BGl_fillzd2svarzf2Iinfoz12z32zzintegrate_infoz00(BgL_svarzf2iinfozf2_bglt,
		obj_t, obj_t, bool_t, bool_t);
	static obj_t BGl__makezd2svarzf2Iinfoz20zzintegrate_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzintegrate_infoz00();
	BGL_EXPORTED_DECL BgL_sexitzf2iinfozf2_bglt
		BGl_fillzd2sexitzf2Iinfoz12z32zzintegrate_infoz00(BgL_sexitzf2iinfozf2_bglt,
		obj_t, obj_t, bool_t, bool_t);
	BGL_EXPORTED_DECL bool_t BGl_sfunzf2Iinfozf3z01zzintegrate_infoz00(obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	static obj_t BGl__fillzd2sfunzf2Iinfoz12z32zzintegrate_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_EXPORTED_DECL BgL_sfunz00_bglt
		BGl_z52allocatezd2sfunzf2Iinfoz72zzintegrate_infoz00();
	static obj_t BGl__wideningzd2sexitzf2Iinfoz20zzintegrate_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_infoz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzintegrate_infoz00();
	BGL_EXPORTED_DECL BgL_svarzf2iinfozf2_bglt
		BGl_svarzf2Iinfozd2nilz20zzintegrate_infoz00();
	static obj_t BGl__fillzd2sexitzf2Iinfoz12z32zzintegrate_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2sexit3554ze3zzintegrate_infoz00(obj_t,
		obj_t);
	extern obj_t BGl_sexitz00zzast_varz00;
	BGL_EXPORTED_DECL BgL_sexitz00_bglt
		BGl_z52allocatezd2sexitzf2Iinfoz72zzintegrate_infoz00();
	static obj_t BGl__wideningzd2svarzf2Iinfoz20zzintegrate_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__sfunzf2Iinfozf3z01zzintegrate_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_svarzf2Iinfozf3z01zzintegrate_infoz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_infoz00();
	static obj_t BGl__makezd2sfunzf2Iinfoz20zzintegrate_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl_objectzd2ze3structzd2sfunzf23550z11zzintegrate_infoz00(obj_t,
		obj_t);
	static obj_t BGl__sfunzf2Iinfozd2nilz20zzintegrate_infoz00(obj_t);
	static obj_t BGl__fillzd2svarzf2Iinfoz12z32zzintegrate_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2sfunzf2Iinfozd2nilza0zzintegrate_infoz00 = BUNSPEC;
	static obj_t BGl__sexitzf2Iinfozf3z01zzintegrate_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_sexitzf2iinfozf2_bglt
		BGl_makezd2sexitzf2Iinfoz20zzintegrate_infoz00(obj_t, bool_t, obj_t, obj_t,
		bool_t, bool_t);
	extern BgL_sexitz00_bglt BGl_makezd2sexitzd2zzast_varz00(obj_t, bool_t);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__svarzf2Iinfozf3z01zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl__wideningzd2sfunzf2Iinfoz20zzintegrate_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2svarzf2Iinfoz72zzintegrate_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_svarzf2iinfozf2_bglt
		BGl_makezd2svarzf2Iinfoz20zzintegrate_infoz00(obj_t, obj_t, obj_t, bool_t,
		bool_t);
	static obj_t BGl__sexitzf2Iinfozd2nilz20zzintegrate_infoz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzintegrate_infoz00();
	BGL_EXPORTED_DEF obj_t BGl_svarzf2Iinfozf2zzintegrate_infoz00 = BUNSPEC;
	static obj_t BGl__makezd2sexitzf2Iinfoz20zzintegrate_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_infoz00();
	extern BgL_svarz00_bglt BGl_makezd2svarzd2zzast_varz00(obj_t);
	static obj_t BGl__svarzf2Iinfozd2nilz20zzintegrate_infoz00(obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_STRING(BGl_string3771z00zzintegrate_infoz00,
		BgL_bgl_string3771za700za7za7i3788za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string3773z00zzintegrate_infoz00,
		BgL_bgl_string3773za700za7za7i3789za7, "struct+object->object::object", 29);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2sexitzf2Iinfoz12zd2envze0zzintegrate_infoz00,
		BgL_bgl__fillza7d2sexitza7f23790z00,
		BGl__fillzd2sexitzf2Iinfoz12z32zzintegrate_infoz00, 0L, BUNSPEC, 5);
	      DEFINE_STRING(BGl_string3778z00zzintegrate_infoz00,
		BgL_bgl_string3778za700za7za7i3791za7, "integrate_info", 14);
	      DEFINE_STRING(BGl_string3779z00zzintegrate_infoz00,
		BgL_bgl_string3779za700za7za7i3792za7, "sfun/Iinfo sexit/Iinfo svar/Iinfo ",
		34);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2svarzf2Iinfozd2envza0zzintegrate_infoz00,
		BgL_bgl__za752allocateza7d2s3793z00,
		BGl__z52allocatezd2svarzf2Iinfoz72zzintegrate_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzf2Iinfozf3zd2envzd3zzintegrate_infoz00,
		BgL_bgl__sfunza7f2iinfoza7f33794z00,
		BGl__sfunzf2Iinfozf3z01zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2svarzf2Iinfozd2envzf2zzintegrate_infoz00,
		BgL_bgl__wideningza7d2svar3795za7,
		BGl__wideningzd2svarzf2Iinfoz20zzintegrate_infoz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2sfunzf2Iinfozd2envzf2zzintegrate_infoz00,
		BgL_bgl__makeza7d2sfunza7f2i3796z00,
		BGl__makezd2sfunzf2Iinfoz20zzintegrate_infoz00, 0L, BUNSPEC, 35);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Iinfozd2nilzd2envzf2zzintegrate_infoz00,
		BgL_bgl__svarza7f2iinfoza7d23797z00,
		BGl__svarzf2Iinfozd2nilz20zzintegrate_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2sexitzf2Iinfozd2envza0zzintegrate_infoz00,
		BgL_bgl__za752allocateza7d2s3798z00,
		BGl__z52allocatezd2sexitzf2Iinfoz72zzintegrate_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2nilzd2envzf2zzintegrate_infoz00,
		BgL_bgl__sfunza7f2iinfoza7d23799z00,
		BGl__sfunzf2Iinfozd2nilz20zzintegrate_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2svarzf2Iinfoz12zd2envze0zzintegrate_infoz00,
		BgL_bgl__fillza7d2svarza7f2i3800z00,
		BGl__fillzd2svarzf2Iinfoz12z32zzintegrate_infoz00, 0L, BUNSPEC, 5);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2svarzf2Iinfozd2envzf2zzintegrate_infoz00,
		BgL_bgl__makeza7d2svarza7f2i3801z00,
		BGl__makezd2svarzf2Iinfoz20zzintegrate_infoz00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Iinfozf3zd2envzd3zzintegrate_infoz00,
		BgL_bgl__sexitza7f2iinfoza7f3802z00,
		BGl__sexitzf2Iinfozf3z01zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2sexitzf2Iinfozd2envzf2zzintegrate_infoz00,
		BgL_bgl__makeza7d2sexitza7f23803z00,
		BGl__makezd2sexitzf2Iinfoz20zzintegrate_infoz00, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2sexitzf2Iinfozd2envzf2zzintegrate_infoz00,
		BgL_bgl__wideningza7d2sexi3804za7,
		BGl__wideningzd2sexitzf2Iinfoz20zzintegrate_infoz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2sfunzf2Iinfoz12zd2envze0zzintegrate_infoz00,
		BgL_bgl__fillza7d2sfunza7f2i3805z00,
		BGl__fillzd2sfunzf2Iinfoz12z32zzintegrate_infoz00, 0L, BUNSPEC, 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2sfunzf2Iinfozd2envza0zzintegrate_infoz00,
		BgL_bgl__za752allocateza7d2s3806z00,
		BGl__z52allocatezd2sfunzf2Iinfoz72zzintegrate_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_svarzf2Iinfozf3zd2envzd3zzintegrate_infoz00,
		BgL_bgl__svarza7f2iinfoza7f33807z00,
		BGl__svarzf2Iinfozf3z01zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2sfunzf2Iinfozd2envzf2zzintegrate_infoz00,
		BgL_bgl__wideningza7d2sfun3808za7,
		BGl__wideningzd2sfunzf2Iinfoz20zzintegrate_infoz00, 0L, BUNSPEC, 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Iinfozd2nilzd2envzf2zzintegrate_infoz00,
		BgL_bgl__sexitza7f2iinfoza7d3809z00,
		BGl__sexitzf2Iinfozd2nilz20zzintegrate_infoz00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3770z00zzintegrate_infoz00,
		BgL_bgl_objectza7d2za7e3stru3810z00,
		BGl_objectzd2ze3structzd2sfunzf23550z11zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3772z00zzintegrate_infoz00,
		BgL_bgl_structza7b2objectza73811z00,
		BGl_structzb2objectzd2ze3objec3552z83zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3774z00zzintegrate_infoz00,
		BgL_bgl_objectza7d2za7e3stru3812z00,
		BGl_objectzd2ze3structzd2sexit3554ze3zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3775z00zzintegrate_infoz00,
		BgL_bgl_structza7b2objectza73813z00,
		BGl_structzb2objectzd2ze3objec3556z83zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3776z00zzintegrate_infoz00,
		BgL_bgl_objectza7d2za7e3stru3814z00,
		BGl_objectzd2ze3structzd2svarzf23558z11zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3777z00zzintegrate_infoz00,
		BgL_bgl_structza7b2objectza73815z00,
		BGl_structzb2objectzd2ze3objec3561z83zzintegrate_infoz00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long
		BgL_checksumz00_2501, char *BgL_fromz00_2502)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_infoz00))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_infoz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzintegrate_infoz00();
					BGl_cnstzd2initzd2zzintegrate_infoz00();
					BGl_importedzd2moduleszd2initz00zzintegrate_infoz00();
					BGl_objectzd2initzd2zzintegrate_infoz00();
					BGl_methodzd2initzd2zzintegrate_infoz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_infoz00()
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"integrate_info");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"integrate_info");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzintegrate_infoz00()
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 15 */
			{	/* Integrate/iinfo.scm 15 */
				obj_t BgL_cportz00_2391;

				BgL_cportz00_2391 =
					bgl_open_input_string(BGl_string3779z00zzintegrate_infoz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2392;

					BgL_iz00_2392 = ((long) 2);
				BgL_loopz00_2393:
					if ((BgL_iz00_2392 == ((long) -1)))
						{	/* Integrate/iinfo.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Integrate/iinfo.scm 15 */
							{	/* Integrate/iinfo.scm 15 */
								obj_t BgL_arg3781z00_2395;

								{	/* Integrate/iinfo.scm 15 */

									{	/* Integrate/iinfo.scm 15 */
										obj_t BgL_locationz00_2397;

										BgL_locationz00_2397 = BBOOL(((bool_t) 0));
										{	/* Integrate/iinfo.scm 15 */

											BgL_arg3781z00_2395 =
												BGl_readz00zz__readerz00(BgL_cportz00_2391,
												BgL_locationz00_2397);
										}
									}
								}
								{	/* Integrate/iinfo.scm 15 */
									int BgL_auxz00_2519;

									BgL_auxz00_2519 = (int) (BgL_iz00_2392);
									CNST_TABLE_SET(BgL_auxz00_2519, BgL_arg3781z00_2395);
							}}
							{	/* Integrate/iinfo.scm 15 */
								int BgL_auxz00_2398;

								BgL_auxz00_2398 = (int) ((BgL_iz00_2392 - ((long) 1)));
								{
									long BgL_iz00_2524;

									BgL_iz00_2524 = (long) (BgL_auxz00_2398);
									BgL_iz00_2392 = BgL_iz00_2524;
									goto BgL_loopz00_2393;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzintegrate_infoz00()
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 15 */
			return BUNSPEC;
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzintegrate_infoz00()
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 15 */
			{	/* Integrate/iinfo.scm 21 */
				obj_t BgL_arg3562z00_964;

				obj_t BgL_arg3563z00_965;

				obj_t BgL_arg3566z00_968;

				BgL_arg3562z00_964 = CNST_TABLE_REF(((long) 0));
				BgL_arg3563z00_965 = BGl_svarz00zzast_varz00;
				{	/* Integrate/iinfo.scm 21 */
					obj_t BgL_v3546z00_969;

					BgL_v3546z00_969 = create_vector((int) (((long) 0)));
					BgL_arg3566z00_968 = BgL_v3546z00_969;
				}
				BGl_svarzf2Iinfozf2zzintegrate_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3562z00_964,
					BgL_arg3563z00_965, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2svarzf2Iinfozd2envza0zzintegrate_infoz00,
					BGl_svarzf2Iinfozd2nilzd2envzf2zzintegrate_infoz00,
					BGl_svarzf2Iinfozf3zd2envzd3zzintegrate_infoz00, ((long) 157982225),
					BFALSE, BFALSE, BgL_arg3566z00_968);
			}
			{	/* Integrate/iinfo.scm 31 */
				obj_t BgL_arg3567z00_970;

				obj_t BgL_arg3568z00_971;

				obj_t BgL_arg3571z00_974;

				BgL_arg3567z00_970 = CNST_TABLE_REF(((long) 1));
				BgL_arg3568z00_971 = BGl_sexitz00zzast_varz00;
				{	/* Integrate/iinfo.scm 31 */
					obj_t BgL_v3547z00_975;

					BgL_v3547z00_975 = create_vector((int) (((long) 0)));
					BgL_arg3571z00_974 = BgL_v3547z00_975;
				}
				BGl_sexitzf2Iinfozf2zzintegrate_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3567z00_970,
					BgL_arg3568z00_971, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2sexitzf2Iinfozd2envza0zzintegrate_infoz00,
					BGl_sexitzf2Iinfozd2nilzd2envzf2zzintegrate_infoz00,
					BGl_sexitzf2Iinfozf3zd2envzd3zzintegrate_infoz00, ((long) 183686050),
					BFALSE, BFALSE, BgL_arg3571z00_974);
			}
			{	/* Integrate/iinfo.scm 41 */
				obj_t BgL_arg3572z00_976;

				obj_t BgL_arg3573z00_977;

				obj_t BgL_arg3576z00_980;

				BgL_arg3572z00_976 = CNST_TABLE_REF(((long) 2));
				BgL_arg3573z00_977 = BGl_sfunz00zzast_varz00;
				{	/* Integrate/iinfo.scm 41 */
					obj_t BgL_v3548z00_981;

					BgL_v3548z00_981 = create_vector((int) (((long) 0)));
					BgL_arg3576z00_980 = BgL_v3548z00_981;
				}
				BGl_sfunzf2Iinfozf2zzintegrate_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3572z00_976,
					BgL_arg3573z00_977, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2sfunzf2Iinfozd2envza0zzintegrate_infoz00,
					BGl_sfunzf2Iinfozd2nilzd2envzf2zzintegrate_infoz00,
					BGl_sfunzf2Iinfozf3zd2envzd3zzintegrate_infoz00, ((long) 512713626),
					BFALSE, BFALSE, BgL_arg3576z00_980);
			}
			BGl_z52thezd2sfunzf2Iinfozd2nilza0zzintegrate_infoz00 = BUNSPEC;
			BGl_z52thezd2sexitzf2Iinfozd2nilza0zzintegrate_infoz00 = BUNSPEC;
			return (BGl_z52thezd2svarzf2Iinfozd2nilza0zzintegrate_infoz00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* sfun/Iinfo? */
	BGL_EXPORTED_DEF bool_t BGl_sfunzf2Iinfozf3z01zzintegrate_infoz00(obj_t
		BgL_obj3444z00_1)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 41 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3444z00_1,
				BGl_sfunzf2Iinfozf2zzintegrate_infoz00);
		}
	}



/* _sfun/Iinfo? */
	obj_t BGl__sfunzf2Iinfozf3z01zzintegrate_infoz00(obj_t BgL_envz00_2253,
		obj_t BgL_obj3444z00_2254)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 41 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3444z00_2254,
					BGl_sfunzf2Iinfozf2zzintegrate_infoz00));
		}
	}



/* widening-sfun/Iinfo */
	BGL_EXPORTED_DEF BgL_sfunzf2iinfozf2_bglt
		BGl_wideningzd2sfunzf2Iinfoz20zzintegrate_infoz00(obj_t BgL_owner3342z00_5,
		obj_t BgL_free3343z00_6, obj_t BgL_bound3344z00_7, obj_t BgL_cfrom3345z00_8,
		obj_t BgL_cto3346z00_9, obj_t BgL_k3347z00_10, obj_t BgL_kza23348za2_11,
		obj_t BgL_u3349z00_12, obj_t BgL_cn3350z00_13, obj_t BgL_ct3351z00_14,
		obj_t BgL_kont3352z00_15, bool_t BgL_gzf33353zf3_16, obj_t BgL_l3354z00_17,
		obj_t BgL_led3355z00_18, obj_t BgL_istamp3356z00_19,
		obj_t BgL_global3357z00_20, obj_t BgL_kaptured3358z00_21,
		obj_t BgL_tailzd2coercion3359zd2_22)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 41 */
			{	/* Integrate/iinfo.scm 41 */
				BgL_sfunzf2iinfozf2_bglt BgL_new3360z00_1547;

				BgL_new3360z00_1547 =
					((BgL_sfunzf2iinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_sfunzf2iinfozf2_bgl))));
				{	/* Integrate/iinfo.scm 41 */
					BgL_sfunzf2iinfozf2_bglt BgL_res3737z00_1585;

					{	/* Integrate/iinfo.scm 41 */
						BgL_sfunzf2iinfozf2_bglt BgL_new3417z00_1548;

						BgL_new3417z00_1548 = BgL_new3360z00_1547;
						{	/* Integrate/iinfo.scm 41 */
							obj_t BgL_owner3399z00_1567;

							obj_t BgL_free3400z00_1568;

							obj_t BgL_bound3401z00_1569;

							obj_t BgL_cfrom3402z00_1570;

							obj_t BgL_cto3403z00_1571;

							obj_t BgL_k3404z00_1572;

							obj_t BgL_kza23405za2_1573;

							obj_t BgL_u3406z00_1574;

							obj_t BgL_cn3407z00_1575;

							obj_t BgL_ct3408z00_1576;

							obj_t BgL_kont3409z00_1577;

							bool_t BgL_gzf33410zf3_1578;

							obj_t BgL_l3411z00_1579;

							obj_t BgL_led3412z00_1580;

							obj_t BgL_istamp3413z00_1581;

							obj_t BgL_global3414z00_1582;

							obj_t BgL_kaptured3415z00_1583;

							obj_t BgL_tailzd2coercion3416zd2_1584;

							BgL_owner3399z00_1567 = BgL_owner3342z00_5;
							BgL_free3400z00_1568 = BgL_free3343z00_6;
							BgL_bound3401z00_1569 = BgL_bound3344z00_7;
							BgL_cfrom3402z00_1570 = BgL_cfrom3345z00_8;
							BgL_cto3403z00_1571 = BgL_cto3346z00_9;
							BgL_k3404z00_1572 = BgL_k3347z00_10;
							BgL_kza23405za2_1573 = BgL_kza23348za2_11;
							BgL_u3406z00_1574 = BgL_u3349z00_12;
							BgL_cn3407z00_1575 = BgL_cn3350z00_13;
							BgL_ct3408z00_1576 = BgL_ct3351z00_14;
							BgL_kont3409z00_1577 = BgL_kont3352z00_15;
							BgL_gzf33410zf3_1578 = BgL_gzf33353zf3_16;
							BgL_l3411z00_1579 = BgL_l3354z00_17;
							BgL_led3412z00_1580 = BgL_led3355z00_18;
							BgL_istamp3413z00_1581 = BgL_istamp3356z00_19;
							BgL_global3414z00_1582 = BgL_global3357z00_20;
							BgL_kaptured3415z00_1583 = BgL_kaptured3358z00_21;
							BgL_tailzd2coercion3416zd2_1584 = BgL_tailzd2coercion3359zd2_22;
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1548))->
									BgL_ownerz00) = ((obj_t) BgL_owner3399z00_1567), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1548))->
									BgL_freez00) = ((obj_t) BgL_free3400z00_1568), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1548))->
									BgL_boundz00) = ((obj_t) BgL_bound3401z00_1569), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1548))->
									BgL_cfromz00) = ((obj_t) BgL_cfrom3402z00_1570), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1548))->
									BgL_ctoz00) = ((obj_t) BgL_cto3403z00_1571), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1548))->
									BgL_kz00) = ((obj_t) BgL_k3404z00_1572), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1548))->
									BgL_kza2za2) = ((obj_t) BgL_kza23405za2_1573), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1548))->
									BgL_uz00) = ((obj_t) BgL_u3406z00_1574), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1548))->
									BgL_cnz00) = ((obj_t) BgL_cn3407z00_1575), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1548))->
									BgL_ctz00) = ((obj_t) BgL_ct3408z00_1576), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1548))->
									BgL_kontz00) = ((obj_t) BgL_kont3409z00_1577), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1548))->
									BgL_gzf3zf3) = ((bool_t) BgL_gzf33410zf3_1578), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1548))->
									BgL_lz00) = ((obj_t) BgL_l3411z00_1579), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1548))->
									BgL_ledz00) = ((obj_t) BgL_led3412z00_1580), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1548))->
									BgL_istampz00) = ((obj_t) BgL_istamp3413z00_1581), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1548))->
									BgL_globalz00) = ((obj_t) BgL_global3414z00_1582), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1548))->
									BgL_kapturedz00) =
								((obj_t) BgL_kaptured3415z00_1583), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1548))->
									BgL_tailzd2coercionzd2) =
								((obj_t) BgL_tailzd2coercion3416zd2_1584), BUNSPEC);
							BgL_res3737z00_1585 = BgL_new3417z00_1548;
					}} BgL_res3737z00_1585;
				}
				return BgL_new3360z00_1547;
			}
		}
	}



/* _widening-sfun/Iinfo */
	obj_t BGl__wideningzd2sfunzf2Iinfoz20zzintegrate_infoz00(obj_t
		BgL_envz00_2255, obj_t BgL_owner3342z00_2256, obj_t BgL_free3343z00_2257,
		obj_t BgL_bound3344z00_2258, obj_t BgL_cfrom3345z00_2259,
		obj_t BgL_cto3346z00_2260, obj_t BgL_k3347z00_2261,
		obj_t BgL_kza23348za2_2262, obj_t BgL_u3349z00_2263,
		obj_t BgL_cn3350z00_2264, obj_t BgL_ct3351z00_2265,
		obj_t BgL_kont3352z00_2266, obj_t BgL_gzf33353zf3_2267,
		obj_t BgL_l3354z00_2268, obj_t BgL_led3355z00_2269,
		obj_t BgL_istamp3356z00_2270, obj_t BgL_global3357z00_2271,
		obj_t BgL_kaptured3358z00_2272, obj_t BgL_tailzd2coercion3359zd2_2273)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 41 */
			return
				(obj_t) (BGl_wideningzd2sfunzf2Iinfoz20zzintegrate_infoz00
				(BgL_owner3342z00_2256, BgL_free3343z00_2257, BgL_bound3344z00_2258,
					BgL_cfrom3345z00_2259, BgL_cto3346z00_2260, BgL_k3347z00_2261,
					BgL_kza23348za2_2262, BgL_u3349z00_2263, BgL_cn3350z00_2264,
					BgL_ct3351z00_2265, BgL_kont3352z00_2266, CBOOL(BgL_gzf33353zf3_2267),
					BgL_l3354z00_2268, BgL_led3355z00_2269, BgL_istamp3356z00_2270,
					BgL_global3357z00_2271, BgL_kaptured3358z00_2272,
					BgL_tailzd2coercion3359zd2_2273));
		}
	}



/* make-sfun/Iinfo */
	BGL_EXPORTED_DEF BgL_sfunzf2iinfozf2_bglt
		BGl_makezd2sfunzf2Iinfoz20zzintegrate_infoz00(long BgL_arity3380z00_23,
		obj_t BgL_sidezd2effectzf33381z21_24, obj_t BgL_predicatezd2of3382zd2_25,
		obj_t BgL_stackzd2allocator3383zd2_26, bool_t BgL_topzf33384zf3_27,
		obj_t BgL_thezd2closure3385zd2_28, obj_t BgL_effect3386z00_29,
		obj_t BgL_property3387z00_30, obj_t BgL_args3388z00_31,
		obj_t BgL_argszd2name3389zd2_32, obj_t BgL_body3390z00_33,
		obj_t BgL_class3391z00_34, obj_t BgL_dssslzd2keywords3392zd2_35,
		obj_t BgL_loc3393z00_36, obj_t BgL_optionals3394z00_37,
		obj_t BgL_keys3395z00_38, obj_t BgL_thezd2closurezd2global3396z00_39,
		obj_t BgL_owner3362z00_40, obj_t BgL_free3363z00_41,
		obj_t BgL_bound3364z00_42, obj_t BgL_cfrom3365z00_43,
		obj_t BgL_cto3366z00_44, obj_t BgL_k3367z00_45, obj_t BgL_kza23368za2_46,
		obj_t BgL_u3369z00_47, obj_t BgL_cn3370z00_48, obj_t BgL_ct3371z00_49,
		obj_t BgL_kont3372z00_50, bool_t BgL_gzf33373zf3_51, obj_t BgL_l3374z00_52,
		obj_t BgL_led3375z00_53, obj_t BgL_istamp3376z00_54,
		obj_t BgL_global3377z00_55, obj_t BgL_kaptured3378z00_56,
		obj_t BgL_tailzd2coercion3379zd2_57)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 41 */
			{	/* Integrate/iinfo.scm 41 */
				BgL_sfunz00_bglt BgL_aux3397z00_1586;

				BgL_aux3397z00_1586 =
					BGl_makezd2sfunzd2zzast_varz00(BgL_arity3380z00_23,
					BgL_sidezd2effectzf33381z21_24, BgL_predicatezd2of3382zd2_25,
					BgL_stackzd2allocator3383zd2_26, BgL_topzf33384zf3_27,
					BgL_thezd2closure3385zd2_28, BgL_effect3386z00_29,
					BgL_property3387z00_30, BgL_args3388z00_31, BgL_argszd2name3389zd2_32,
					BgL_body3390z00_33, BgL_class3391z00_34,
					BgL_dssslzd2keywords3392zd2_35, BgL_loc3393z00_36,
					BgL_optionals3394z00_37, BgL_keys3395z00_38,
					BgL_thezd2closurezd2global3396z00_39);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3397z00_1586),
					BGl_classzd2numzd2zz__objectz00
					(BGl_sfunzf2Iinfozf2zzintegrate_infoz00));
				{	/* Integrate/iinfo.scm 41 */
					BgL_sfunzf2iinfozf2_bglt BgL_arg3578z00_1588;

					{	/* Integrate/iinfo.scm 41 */
						BgL_sfunzf2iinfozf2_bglt BgL_res3739z00_1649;

						{	/* Integrate/iinfo.scm 41 */
							BgL_sfunzf2iinfozf2_bglt BgL_new3360z00_1610;

							BgL_new3360z00_1610 =
								((BgL_sfunzf2iinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_sfunzf2iinfozf2_bgl))));
							{	/* Integrate/iinfo.scm 41 */
								BgL_sfunzf2iinfozf2_bglt BgL_res3738z00_1648;

								{	/* Integrate/iinfo.scm 41 */
									BgL_sfunzf2iinfozf2_bglt BgL_new3417z00_1611;

									BgL_new3417z00_1611 = BgL_new3360z00_1610;
									{	/* Integrate/iinfo.scm 41 */
										obj_t BgL_owner3399z00_1630;

										obj_t BgL_free3400z00_1631;

										obj_t BgL_bound3401z00_1632;

										obj_t BgL_cfrom3402z00_1633;

										obj_t BgL_cto3403z00_1634;

										obj_t BgL_k3404z00_1635;

										obj_t BgL_kza23405za2_1636;

										obj_t BgL_u3406z00_1637;

										obj_t BgL_cn3407z00_1638;

										obj_t BgL_ct3408z00_1639;

										obj_t BgL_kont3409z00_1640;

										bool_t BgL_gzf33410zf3_1641;

										obj_t BgL_l3411z00_1642;

										obj_t BgL_led3412z00_1643;

										obj_t BgL_istamp3413z00_1644;

										obj_t BgL_global3414z00_1645;

										obj_t BgL_kaptured3415z00_1646;

										obj_t BgL_tailzd2coercion3416zd2_1647;

										BgL_owner3399z00_1630 = BgL_owner3362z00_40;
										BgL_free3400z00_1631 = BgL_free3363z00_41;
										BgL_bound3401z00_1632 = BgL_bound3364z00_42;
										BgL_cfrom3402z00_1633 = BgL_cfrom3365z00_43;
										BgL_cto3403z00_1634 = BgL_cto3366z00_44;
										BgL_k3404z00_1635 = BgL_k3367z00_45;
										BgL_kza23405za2_1636 = BgL_kza23368za2_46;
										BgL_u3406z00_1637 = BgL_u3369z00_47;
										BgL_cn3407z00_1638 = BgL_cn3370z00_48;
										BgL_ct3408z00_1639 = BgL_ct3371z00_49;
										BgL_kont3409z00_1640 = BgL_kont3372z00_50;
										BgL_gzf33410zf3_1641 = BgL_gzf33373zf3_51;
										BgL_l3411z00_1642 = BgL_l3374z00_52;
										BgL_led3412z00_1643 = BgL_led3375z00_53;
										BgL_istamp3413z00_1644 = BgL_istamp3376z00_54;
										BgL_global3414z00_1645 = BgL_global3377z00_55;
										BgL_kaptured3415z00_1646 = BgL_kaptured3378z00_56;
										BgL_tailzd2coercion3416zd2_1647 =
											BgL_tailzd2coercion3379zd2_57;
										((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1611))->
												BgL_ownerz00) =
											((obj_t) BgL_owner3399z00_1630), BUNSPEC);
										((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1611))->
												BgL_freez00) = ((obj_t) BgL_free3400z00_1631), BUNSPEC);
										((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1611))->
												BgL_boundz00) =
											((obj_t) BgL_bound3401z00_1632), BUNSPEC);
										((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1611))->
												BgL_cfromz00) =
											((obj_t) BgL_cfrom3402z00_1633), BUNSPEC);
										((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1611))->
												BgL_ctoz00) = ((obj_t) BgL_cto3403z00_1634), BUNSPEC);
										((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1611))->
												BgL_kz00) = ((obj_t) BgL_k3404z00_1635), BUNSPEC);
										((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1611))->
												BgL_kza2za2) = ((obj_t) BgL_kza23405za2_1636), BUNSPEC);
										((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1611))->
												BgL_uz00) = ((obj_t) BgL_u3406z00_1637), BUNSPEC);
										((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1611))->
												BgL_cnz00) = ((obj_t) BgL_cn3407z00_1638), BUNSPEC);
										((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1611))->
												BgL_ctz00) = ((obj_t) BgL_ct3408z00_1639), BUNSPEC);
										((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1611))->
												BgL_kontz00) = ((obj_t) BgL_kont3409z00_1640), BUNSPEC);
										((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1611))->
												BgL_gzf3zf3) =
											((bool_t) BgL_gzf33410zf3_1641), BUNSPEC);
										((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1611))->
												BgL_lz00) = ((obj_t) BgL_l3411z00_1642), BUNSPEC);
										((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1611))->
												BgL_ledz00) = ((obj_t) BgL_led3412z00_1643), BUNSPEC);
										((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1611))->
												BgL_istampz00) =
											((obj_t) BgL_istamp3413z00_1644), BUNSPEC);
										((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1611))->
												BgL_globalz00) =
											((obj_t) BgL_global3414z00_1645), BUNSPEC);
										((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1611))->
												BgL_kapturedz00) =
											((obj_t) BgL_kaptured3415z00_1646), BUNSPEC);
										((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1611))->
												BgL_tailzd2coercionzd2) =
											((obj_t) BgL_tailzd2coercion3416zd2_1647), BUNSPEC);
										BgL_res3738z00_1648 = BgL_new3417z00_1611;
								}} BgL_res3738z00_1648;
							}
							BgL_res3739z00_1649 = BgL_new3360z00_1610;
						}
						BgL_arg3578z00_1588 = BgL_res3739z00_1649;
					}
					{	/* Integrate/iinfo.scm 41 */
						obj_t BgL_auxz00_2588;

						BgL_objectz00_bglt BgL_auxz00_2586;

						BgL_auxz00_2588 = (obj_t) (BgL_arg3578z00_1588);
						BgL_auxz00_2586 = (BgL_objectz00_bglt) (BgL_aux3397z00_1586);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_2586, BgL_auxz00_2588);
				}}
				return
					((BgL_sfunzf2iinfozf2_bglt)
					(BgL_sfunzf2iinfozf2_bglt) (BgL_aux3397z00_1586));
			}
		}
	}



/* _make-sfun/Iinfo */
	obj_t BGl__makezd2sfunzf2Iinfoz20zzintegrate_infoz00(obj_t BgL_envz00_2274,
		obj_t BgL_arity3380z00_2275, obj_t BgL_sidezd2effectzf33381z21_2276,
		obj_t BgL_predicatezd2of3382zd2_2277,
		obj_t BgL_stackzd2allocator3383zd2_2278, obj_t BgL_topzf33384zf3_2279,
		obj_t BgL_thezd2closure3385zd2_2280, obj_t BgL_effect3386z00_2281,
		obj_t BgL_property3387z00_2282, obj_t BgL_args3388z00_2283,
		obj_t BgL_argszd2name3389zd2_2284, obj_t BgL_body3390z00_2285,
		obj_t BgL_class3391z00_2286, obj_t BgL_dssslzd2keywords3392zd2_2287,
		obj_t BgL_loc3393z00_2288, obj_t BgL_optionals3394z00_2289,
		obj_t BgL_keys3395z00_2290, obj_t BgL_thezd2closurezd2global3396z00_2291,
		obj_t BgL_owner3362z00_2292, obj_t BgL_free3363z00_2293,
		obj_t BgL_bound3364z00_2294, obj_t BgL_cfrom3365z00_2295,
		obj_t BgL_cto3366z00_2296, obj_t BgL_k3367z00_2297,
		obj_t BgL_kza23368za2_2298, obj_t BgL_u3369z00_2299,
		obj_t BgL_cn3370z00_2300, obj_t BgL_ct3371z00_2301,
		obj_t BgL_kont3372z00_2302, obj_t BgL_gzf33373zf3_2303,
		obj_t BgL_l3374z00_2304, obj_t BgL_led3375z00_2305,
		obj_t BgL_istamp3376z00_2306, obj_t BgL_global3377z00_2307,
		obj_t BgL_kaptured3378z00_2308, obj_t BgL_tailzd2coercion3379zd2_2309)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 41 */
			return
				(obj_t) (BGl_makezd2sfunzf2Iinfoz20zzintegrate_infoz00(
					(long) CINT(BgL_arity3380z00_2275), BgL_sidezd2effectzf33381z21_2276,
					BgL_predicatezd2of3382zd2_2277, BgL_stackzd2allocator3383zd2_2278,
					CBOOL(BgL_topzf33384zf3_2279), BgL_thezd2closure3385zd2_2280,
					BgL_effect3386z00_2281, BgL_property3387z00_2282,
					BgL_args3388z00_2283, BgL_argszd2name3389zd2_2284,
					BgL_body3390z00_2285, BgL_class3391z00_2286,
					BgL_dssslzd2keywords3392zd2_2287, BgL_loc3393z00_2288,
					BgL_optionals3394z00_2289, BgL_keys3395z00_2290,
					BgL_thezd2closurezd2global3396z00_2291, BgL_owner3362z00_2292,
					BgL_free3363z00_2293, BgL_bound3364z00_2294, BgL_cfrom3365z00_2295,
					BgL_cto3366z00_2296, BgL_k3367z00_2297, BgL_kza23368za2_2298,
					BgL_u3369z00_2299, BgL_cn3370z00_2300, BgL_ct3371z00_2301,
					BgL_kont3372z00_2302, CBOOL(BgL_gzf33373zf3_2303), BgL_l3374z00_2304,
					BgL_led3375z00_2305, BgL_istamp3376z00_2306, BgL_global3377z00_2307,
					BgL_kaptured3378z00_2308, BgL_tailzd2coercion3379zd2_2309));
		}
	}



/* fill-sfun/Iinfo! */
	BGL_EXPORTED_DEF BgL_sfunzf2iinfozf2_bglt
		BGl_fillzd2sfunzf2Iinfoz12z32zzintegrate_infoz00(BgL_sfunzf2iinfozf2_bglt
		BgL_new3417z00_58, obj_t BgL_owner3399z00_59, obj_t BgL_free3400z00_60,
		obj_t BgL_bound3401z00_61, obj_t BgL_cfrom3402z00_62,
		obj_t BgL_cto3403z00_63, obj_t BgL_k3404z00_64, obj_t BgL_kza23405za2_65,
		obj_t BgL_u3406z00_66, obj_t BgL_cn3407z00_67, obj_t BgL_ct3408z00_68,
		obj_t BgL_kont3409z00_69, bool_t BgL_gzf33410zf3_70, obj_t BgL_l3411z00_71,
		obj_t BgL_led3412z00_72, obj_t BgL_istamp3413z00_73,
		obj_t BgL_global3414z00_74, obj_t BgL_kaptured3415z00_75,
		obj_t BgL_tailzd2coercion3416zd2_76)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 41 */
			{	/* Integrate/iinfo.scm 41 */
				obj_t BgL_owner3399z00_2400;

				obj_t BgL_free3400z00_2401;

				obj_t BgL_bound3401z00_2402;

				obj_t BgL_cfrom3402z00_2403;

				obj_t BgL_cto3403z00_2404;

				obj_t BgL_k3404z00_2405;

				obj_t BgL_kza23405za2_2406;

				obj_t BgL_u3406z00_2407;

				obj_t BgL_cn3407z00_2408;

				obj_t BgL_ct3408z00_2409;

				obj_t BgL_kont3409z00_2410;

				bool_t BgL_gzf33410zf3_2411;

				obj_t BgL_l3411z00_2412;

				obj_t BgL_led3412z00_2413;

				obj_t BgL_istamp3413z00_2414;

				obj_t BgL_global3414z00_2415;

				obj_t BgL_kaptured3415z00_2416;

				obj_t BgL_tailzd2coercion3416zd2_2417;

				BgL_owner3399z00_2400 = BgL_owner3399z00_59;
				BgL_free3400z00_2401 = BgL_free3400z00_60;
				BgL_bound3401z00_2402 = BgL_bound3401z00_61;
				BgL_cfrom3402z00_2403 = BgL_cfrom3402z00_62;
				BgL_cto3403z00_2404 = BgL_cto3403z00_63;
				BgL_k3404z00_2405 = BgL_k3404z00_64;
				BgL_kza23405za2_2406 = BgL_kza23405za2_65;
				BgL_u3406z00_2407 = BgL_u3406z00_66;
				BgL_cn3407z00_2408 = BgL_cn3407z00_67;
				BgL_ct3408z00_2409 = BgL_ct3408z00_68;
				BgL_kont3409z00_2410 = BgL_kont3409z00_69;
				BgL_gzf33410zf3_2411 = BgL_gzf33410zf3_70;
				BgL_l3411z00_2412 = BgL_l3411z00_71;
				BgL_led3412z00_2413 = BgL_led3412z00_72;
				BgL_istamp3413z00_2414 = BgL_istamp3413z00_73;
				BgL_global3414z00_2415 = BgL_global3414z00_74;
				BgL_kaptured3415z00_2416 = BgL_kaptured3415z00_75;
				BgL_tailzd2coercion3416zd2_2417 = BgL_tailzd2coercion3416zd2_76;
				((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_58))->BgL_ownerz00) =
					((obj_t) BgL_owner3399z00_2400), BUNSPEC);
				((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_58))->BgL_freez00) =
					((obj_t) BgL_free3400z00_2401), BUNSPEC);
				((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_58))->BgL_boundz00) =
					((obj_t) BgL_bound3401z00_2402), BUNSPEC);
				((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_58))->BgL_cfromz00) =
					((obj_t) BgL_cfrom3402z00_2403), BUNSPEC);
				((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_58))->BgL_ctoz00) =
					((obj_t) BgL_cto3403z00_2404), BUNSPEC);
				((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_58))->BgL_kz00) =
					((obj_t) BgL_k3404z00_2405), BUNSPEC);
				((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_58))->BgL_kza2za2) =
					((obj_t) BgL_kza23405za2_2406), BUNSPEC);
				((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_58))->BgL_uz00) =
					((obj_t) BgL_u3406z00_2407), BUNSPEC);
				((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_58))->BgL_cnz00) =
					((obj_t) BgL_cn3407z00_2408), BUNSPEC);
				((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_58))->BgL_ctz00) =
					((obj_t) BgL_ct3408z00_2409), BUNSPEC);
				((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_58))->BgL_kontz00) =
					((obj_t) BgL_kont3409z00_2410), BUNSPEC);
				((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_58))->BgL_gzf3zf3) =
					((bool_t) BgL_gzf33410zf3_2411), BUNSPEC);
				((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_58))->BgL_lz00) =
					((obj_t) BgL_l3411z00_2412), BUNSPEC);
				((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_58))->BgL_ledz00) =
					((obj_t) BgL_led3412z00_2413), BUNSPEC);
				((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_58))->BgL_istampz00) =
					((obj_t) BgL_istamp3413z00_2414), BUNSPEC);
				((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_58))->BgL_globalz00) =
					((obj_t) BgL_global3414z00_2415), BUNSPEC);
				((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_58))->
						BgL_kapturedz00) = ((obj_t) BgL_kaptured3415z00_2416), BUNSPEC);
				((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_58))->
						BgL_tailzd2coercionzd2) =
					((obj_t) BgL_tailzd2coercion3416zd2_2417), BUNSPEC);
				return BgL_new3417z00_58;
			}
		}
	}



/* _fill-sfun/Iinfo! */
	obj_t BGl__fillzd2sfunzf2Iinfoz12z32zzintegrate_infoz00(obj_t BgL_envz00_2310,
		obj_t BgL_new3417z00_2311, obj_t BgL_owner3399z00_2312,
		obj_t BgL_free3400z00_2313, obj_t BgL_bound3401z00_2314,
		obj_t BgL_cfrom3402z00_2315, obj_t BgL_cto3403z00_2316,
		obj_t BgL_k3404z00_2317, obj_t BgL_kza23405za2_2318,
		obj_t BgL_u3406z00_2319, obj_t BgL_cn3407z00_2320, obj_t BgL_ct3408z00_2321,
		obj_t BgL_kont3409z00_2322, obj_t BgL_gzf33410zf3_2323,
		obj_t BgL_l3411z00_2324, obj_t BgL_led3412z00_2325,
		obj_t BgL_istamp3413z00_2326, obj_t BgL_global3414z00_2327,
		obj_t BgL_kaptured3415z00_2328, obj_t BgL_tailzd2coercion3416zd2_2329)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 41 */
			{	/* Integrate/iinfo.scm 41 */
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2616;

				{	/* Integrate/iinfo.scm 41 */
					BgL_sfunzf2iinfozf2_bglt BgL_res3782z00_2455;

					{	/* Integrate/iinfo.scm 41 */
						BgL_sfunzf2iinfozf2_bglt BgL_new3417z00_2418;

						bool_t BgL_gzf33410zf3_2430;

						BgL_new3417z00_2418 =
							(BgL_sfunzf2iinfozf2_bglt) (BgL_new3417z00_2311);
						BgL_gzf33410zf3_2430 = CBOOL(BgL_gzf33410zf3_2323);
						{	/* Integrate/iinfo.scm 41 */
							obj_t BgL_owner3399z00_2437;

							obj_t BgL_free3400z00_2438;

							obj_t BgL_bound3401z00_2439;

							obj_t BgL_cfrom3402z00_2440;

							obj_t BgL_cto3403z00_2441;

							obj_t BgL_k3404z00_2442;

							obj_t BgL_kza23405za2_2443;

							obj_t BgL_u3406z00_2444;

							obj_t BgL_cn3407z00_2445;

							obj_t BgL_ct3408z00_2446;

							obj_t BgL_kont3409z00_2447;

							bool_t BgL_gzf33410zf3_2448;

							obj_t BgL_l3411z00_2449;

							obj_t BgL_led3412z00_2450;

							obj_t BgL_istamp3413z00_2451;

							obj_t BgL_global3414z00_2452;

							obj_t BgL_kaptured3415z00_2453;

							obj_t BgL_tailzd2coercion3416zd2_2454;

							BgL_owner3399z00_2437 = BgL_owner3399z00_2312;
							BgL_free3400z00_2438 = BgL_free3400z00_2313;
							BgL_bound3401z00_2439 = BgL_bound3401z00_2314;
							BgL_cfrom3402z00_2440 = BgL_cfrom3402z00_2315;
							BgL_cto3403z00_2441 = BgL_cto3403z00_2316;
							BgL_k3404z00_2442 = BgL_k3404z00_2317;
							BgL_kza23405za2_2443 = BgL_kza23405za2_2318;
							BgL_u3406z00_2444 = BgL_u3406z00_2319;
							BgL_cn3407z00_2445 = BgL_cn3407z00_2320;
							BgL_ct3408z00_2446 = BgL_ct3408z00_2321;
							BgL_kont3409z00_2447 = BgL_kont3409z00_2322;
							BgL_gzf33410zf3_2448 = BgL_gzf33410zf3_2430;
							BgL_l3411z00_2449 = BgL_l3411z00_2324;
							BgL_led3412z00_2450 = BgL_led3412z00_2325;
							BgL_istamp3413z00_2451 = BgL_istamp3413z00_2326;
							BgL_global3414z00_2452 = BgL_global3414z00_2327;
							BgL_kaptured3415z00_2453 = BgL_kaptured3415z00_2328;
							BgL_tailzd2coercion3416zd2_2454 = BgL_tailzd2coercion3416zd2_2329;
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_2418))->
									BgL_ownerz00) = ((obj_t) BgL_owner3399z00_2437), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_2418))->
									BgL_freez00) = ((obj_t) BgL_free3400z00_2438), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_2418))->
									BgL_boundz00) = ((obj_t) BgL_bound3401z00_2439), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_2418))->
									BgL_cfromz00) = ((obj_t) BgL_cfrom3402z00_2440), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_2418))->
									BgL_ctoz00) = ((obj_t) BgL_cto3403z00_2441), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_2418))->
									BgL_kz00) = ((obj_t) BgL_k3404z00_2442), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_2418))->
									BgL_kza2za2) = ((obj_t) BgL_kza23405za2_2443), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_2418))->
									BgL_uz00) = ((obj_t) BgL_u3406z00_2444), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_2418))->
									BgL_cnz00) = ((obj_t) BgL_cn3407z00_2445), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_2418))->
									BgL_ctz00) = ((obj_t) BgL_ct3408z00_2446), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_2418))->
									BgL_kontz00) = ((obj_t) BgL_kont3409z00_2447), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_2418))->
									BgL_gzf3zf3) = ((bool_t) BgL_gzf33410zf3_2448), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_2418))->
									BgL_lz00) = ((obj_t) BgL_l3411z00_2449), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_2418))->
									BgL_ledz00) = ((obj_t) BgL_led3412z00_2450), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_2418))->
									BgL_istampz00) = ((obj_t) BgL_istamp3413z00_2451), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_2418))->
									BgL_globalz00) = ((obj_t) BgL_global3414z00_2452), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_2418))->
									BgL_kapturedz00) =
								((obj_t) BgL_kaptured3415z00_2453), BUNSPEC);
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_2418))->
									BgL_tailzd2coercionzd2) =
								((obj_t) BgL_tailzd2coercion3416zd2_2454), BUNSPEC);
							BgL_res3782z00_2455 = BgL_new3417z00_2418;
						}
					}
					BgL_auxz00_2616 = BgL_res3782z00_2455;
				}
				return (obj_t) (BgL_auxz00_2616);
			}
		}
	}



/* %allocate-sfun/Iinfo */
	BGL_EXPORTED_DEF BgL_sfunz00_bglt
		BGl_z52allocatezd2sfunzf2Iinfoz72zzintegrate_infoz00()
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 41 */
			{	/* Integrate/iinfo.scm 41 */
				BgL_sfunz00_bglt BgL_new3437z00_2456;

				BgL_new3437z00_2456 =
					((BgL_sfunz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_sfunz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new3437z00_2456),
					BGl_classzd2numzd2zz__objectz00
					(BGl_sfunzf2Iinfozf2zzintegrate_infoz00));
				{	/* Integrate/iinfo.scm 41 */
					BgL_objectz00_bglt BgL_auxz00_2642;

					BgL_auxz00_2642 = (BgL_objectz00_bglt) (BgL_new3437z00_2456);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_2642, BFALSE);
				}
				return BgL_new3437z00_2456;
			}
		}
	}



/* _%allocate-sfun/Iinfo */
	obj_t BGl__z52allocatezd2sfunzf2Iinfoz72zzintegrate_infoz00(obj_t
		BgL_envz00_2251)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 41 */
			{	/* Integrate/iinfo.scm 41 */
				BgL_sfunz00_bglt BgL_auxz00_2645;

				{	/* Integrate/iinfo.scm 41 */
					BgL_sfunz00_bglt BgL_res3783z00_2460;

					{	/* Integrate/iinfo.scm 41 */
						BgL_sfunz00_bglt BgL_new3437z00_2458;

						BgL_new3437z00_2458 =
							((BgL_sfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_sfunz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3437z00_2458),
							BGl_classzd2numzd2zz__objectz00
							(BGl_sfunzf2Iinfozf2zzintegrate_infoz00));
						{	/* Integrate/iinfo.scm 41 */
							BgL_objectz00_bglt BgL_auxz00_2650;

							BgL_auxz00_2650 = (BgL_objectz00_bglt) (BgL_new3437z00_2458);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2650, BFALSE);
						}
						BgL_res3783z00_2460 = BgL_new3437z00_2458;
					}
					BgL_auxz00_2645 = BgL_res3783z00_2460;
				}
				return (obj_t) (BgL_auxz00_2645);
			}
		}
	}



/* sfun/Iinfo-nil */
	BGL_EXPORTED_DEF BgL_sfunzf2iinfozf2_bglt
		BGl_sfunzf2Iinfozd2nilz20zzintegrate_infoz00()
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 41 */
			if ((BGl_z52thezd2sfunzf2Iinfozd2nilza0zzintegrate_infoz00 == BUNSPEC))
				{	/* Integrate/iinfo.scm 41 */
					{	/* Integrate/iinfo.scm 41 */
						BgL_sfunz00_bglt BgL_res3740z00_1676;

						{	/* Integrate/iinfo.scm 41 */
							BgL_sfunz00_bglt BgL_new1954z00_1672;

							BgL_new1954z00_1672 =
								((BgL_sfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_sfunz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1954z00_1672),
								BGl_classzd2numzd2zz__objectz00(BGl_sfunz00zzast_varz00));
							{	/* Integrate/iinfo.scm 41 */
								BgL_objectz00_bglt BgL_auxz00_2660;

								BgL_auxz00_2660 = (BgL_objectz00_bglt) (BgL_new1954z00_1672);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2660, BFALSE);
							}
							BgL_res3740z00_1676 = BgL_new1954z00_1672;
						}
						BGl_z52thezd2sfunzf2Iinfozd2nilza0zzintegrate_infoz00 =
							(obj_t) (BgL_res3740z00_1676);
					}
					{	/* Integrate/iinfo.scm 41 */
						BgL_sfunz00_bglt BgL_res3741z00_1712;

						{	/* Integrate/iinfo.scm 41 */
							BgL_sfunz00_bglt BgL_new1935z00_1677;

							BgL_new1935z00_1677 =
								(BgL_sfunz00_bglt)
								(BGl_z52thezd2sfunzf2Iinfozd2nilza0zzintegrate_infoz00);
							{	/* Integrate/iinfo.scm 41 */
								long BgL_arity1918z00_1695;

								obj_t BgL_sidezd2effectzf31919z21_1696;

								obj_t BgL_predicatezd2of1920zd2_1697;

								obj_t BgL_stackzd2allocator1921zd2_1698;

								bool_t BgL_topzf31922zf3_1699;

								obj_t BgL_thezd2closure1923zd2_1700;

								obj_t BgL_effect1924z00_1701;

								obj_t BgL_property1925z00_1702;

								obj_t BgL_args1926z00_1703;

								obj_t BgL_argszd2name1927zd2_1704;

								obj_t BgL_body1928z00_1705;

								obj_t BgL_class1929z00_1706;

								obj_t BgL_dssslzd2keywords1930zd2_1707;

								obj_t BgL_loc1931z00_1708;

								obj_t BgL_optionals1932z00_1709;

								obj_t BgL_keys1933z00_1710;

								obj_t BgL_thezd2closurezd2global1934z00_1711;

								BgL_arity1918z00_1695 = ((long) 0);
								BgL_sidezd2effectzf31919z21_1696 = BUNSPEC;
								BgL_predicatezd2of1920zd2_1697 = BUNSPEC;
								BgL_stackzd2allocator1921zd2_1698 = BUNSPEC;
								BgL_topzf31922zf3_1699 = ((bool_t) 0);
								BgL_thezd2closure1923zd2_1700 = BUNSPEC;
								BgL_effect1924z00_1701 = BUNSPEC;
								BgL_property1925z00_1702 = BUNSPEC;
								BgL_args1926z00_1703 = BUNSPEC;
								BgL_argszd2name1927zd2_1704 = BUNSPEC;
								BgL_body1928z00_1705 = BUNSPEC;
								BgL_class1929z00_1706 = BUNSPEC;
								BgL_dssslzd2keywords1930zd2_1707 = BUNSPEC;
								BgL_loc1931z00_1708 = BUNSPEC;
								BgL_optionals1932z00_1709 = BUNSPEC;
								BgL_keys1933z00_1710 = BUNSPEC;
								BgL_thezd2closurezd2global1934z00_1711 = BUNSPEC;
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1677))->
										BgL_arityz00) = ((long) BgL_arity1918z00_1695), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1677))->
										BgL_sidezd2effectzf3z21) =
									((obj_t) BgL_sidezd2effectzf31919z21_1696), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1677))->
										BgL_predicatezd2ofzd2) =
									((obj_t) BgL_predicatezd2of1920zd2_1697), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1677))->
										BgL_stackzd2allocatorzd2) =
									((obj_t) BgL_stackzd2allocator1921zd2_1698), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1677))->
										BgL_topzf3zf3) =
									((bool_t) BgL_topzf31922zf3_1699), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1677))->
										BgL_thezd2closurezd2) =
									((obj_t) BgL_thezd2closure1923zd2_1700), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1677))->
										BgL_effectz00) = ((obj_t) BgL_effect1924z00_1701), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1677))->
										BgL_propertyz00) =
									((obj_t) BgL_property1925z00_1702), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1677))->BgL_argsz00) =
									((obj_t) BgL_args1926z00_1703), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1677))->
										BgL_argszd2namezd2) =
									((obj_t) BgL_argszd2name1927zd2_1704), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1677))->BgL_bodyz00) =
									((obj_t) BgL_body1928z00_1705), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1677))->
										BgL_classz00) = ((obj_t) BgL_class1929z00_1706), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1677))->
										BgL_dssslzd2keywordszd2) =
									((obj_t) BgL_dssslzd2keywords1930zd2_1707), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1677))->BgL_locz00) =
									((obj_t) BgL_loc1931z00_1708), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1677))->
										BgL_optionalsz00) =
									((obj_t) BgL_optionals1932z00_1709), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1677))->BgL_keysz00) =
									((obj_t) BgL_keys1933z00_1710), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1677))->
										BgL_thezd2closurezd2globalz00) =
									((obj_t) BgL_thezd2closurezd2global1934z00_1711), BUNSPEC);
								BgL_res3741z00_1712 = BgL_new1935z00_1677;
						}} BgL_res3741z00_1712;
					}
					{	/* Integrate/iinfo.scm 41 */
						long BgL_arg3581z00_1008;

						BgL_arg3581z00_1008 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_sfunzf2Iinfozf2zzintegrate_infoz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2sfunzf2Iinfozd2nilza0zzintegrate_infoz00),
							BgL_arg3581z00_1008);
					}
					{	/* Integrate/iinfo.scm 41 */
						BgL_sfunzf2iinfozf2_bglt BgL_arg3582z00_1009;

						{	/* Integrate/iinfo.scm 41 */
							BgL_sfunzf2iinfozf2_bglt BgL_res3743z00_1772;

							{	/* Integrate/iinfo.scm 41 */
								BgL_sfunzf2iinfozf2_bglt BgL_new3360z00_1733;

								BgL_new3360z00_1733 =
									((BgL_sfunzf2iinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_sfunzf2iinfozf2_bgl))));
								{	/* Integrate/iinfo.scm 41 */
									BgL_sfunzf2iinfozf2_bglt BgL_res3742z00_1771;

									{	/* Integrate/iinfo.scm 41 */
										BgL_sfunzf2iinfozf2_bglt BgL_new3417z00_1734;

										BgL_new3417z00_1734 = BgL_new3360z00_1733;
										{	/* Integrate/iinfo.scm 41 */
											obj_t BgL_owner3399z00_1753;

											obj_t BgL_free3400z00_1754;

											obj_t BgL_bound3401z00_1755;

											obj_t BgL_cfrom3402z00_1756;

											obj_t BgL_cto3403z00_1757;

											obj_t BgL_k3404z00_1758;

											obj_t BgL_kza23405za2_1759;

											obj_t BgL_u3406z00_1760;

											obj_t BgL_cn3407z00_1761;

											obj_t BgL_ct3408z00_1762;

											obj_t BgL_kont3409z00_1763;

											bool_t BgL_gzf33410zf3_1764;

											obj_t BgL_l3411z00_1765;

											obj_t BgL_led3412z00_1766;

											obj_t BgL_istamp3413z00_1767;

											obj_t BgL_global3414z00_1768;

											obj_t BgL_kaptured3415z00_1769;

											obj_t BgL_tailzd2coercion3416zd2_1770;

											BgL_owner3399z00_1753 = BUNSPEC;
											BgL_free3400z00_1754 = BUNSPEC;
											BgL_bound3401z00_1755 = BUNSPEC;
											BgL_cfrom3402z00_1756 = BUNSPEC;
											BgL_cto3403z00_1757 = BUNSPEC;
											BgL_k3404z00_1758 = BUNSPEC;
											BgL_kza23405za2_1759 = BUNSPEC;
											BgL_u3406z00_1760 = BUNSPEC;
											BgL_cn3407z00_1761 = BUNSPEC;
											BgL_ct3408z00_1762 = BUNSPEC;
											BgL_kont3409z00_1763 = BUNSPEC;
											BgL_gzf33410zf3_1764 = ((bool_t) 0);
											BgL_l3411z00_1765 = BUNSPEC;
											BgL_led3412z00_1766 = BUNSPEC;
											BgL_istamp3413z00_1767 = BUNSPEC;
											BgL_global3414z00_1768 = BUNSPEC;
											BgL_kaptured3415z00_1769 = BUNSPEC;
											BgL_tailzd2coercion3416zd2_1770 = BUNSPEC;
											((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1734))->
													BgL_ownerz00) =
												((obj_t) BgL_owner3399z00_1753), BUNSPEC);
											((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1734))->
													BgL_freez00) =
												((obj_t) BgL_free3400z00_1754), BUNSPEC);
											((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1734))->
													BgL_boundz00) =
												((obj_t) BgL_bound3401z00_1755), BUNSPEC);
											((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1734))->
													BgL_cfromz00) =
												((obj_t) BgL_cfrom3402z00_1756), BUNSPEC);
											((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1734))->
													BgL_ctoz00) = ((obj_t) BgL_cto3403z00_1757), BUNSPEC);
											((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1734))->
													BgL_kz00) = ((obj_t) BgL_k3404z00_1758), BUNSPEC);
											((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1734))->
													BgL_kza2za2) =
												((obj_t) BgL_kza23405za2_1759), BUNSPEC);
											((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1734))->
													BgL_uz00) = ((obj_t) BgL_u3406z00_1760), BUNSPEC);
											((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1734))->
													BgL_cnz00) = ((obj_t) BgL_cn3407z00_1761), BUNSPEC);
											((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1734))->
													BgL_ctz00) = ((obj_t) BgL_ct3408z00_1762), BUNSPEC);
											((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1734))->
													BgL_kontz00) =
												((obj_t) BgL_kont3409z00_1763), BUNSPEC);
											((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1734))->
													BgL_gzf3zf3) =
												((bool_t) BgL_gzf33410zf3_1764), BUNSPEC);
											((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1734))->
													BgL_lz00) = ((obj_t) BgL_l3411z00_1765), BUNSPEC);
											((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1734))->
													BgL_ledz00) = ((obj_t) BgL_led3412z00_1766), BUNSPEC);
											((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1734))->
													BgL_istampz00) =
												((obj_t) BgL_istamp3413z00_1767), BUNSPEC);
											((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1734))->
													BgL_globalz00) =
												((obj_t) BgL_global3414z00_1768), BUNSPEC);
											((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1734))->
													BgL_kapturedz00) =
												((obj_t) BgL_kaptured3415z00_1769), BUNSPEC);
											((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_new3417z00_1734))->
													BgL_tailzd2coercionzd2) =
												((obj_t) BgL_tailzd2coercion3416zd2_1770), BUNSPEC);
											BgL_res3742z00_1771 = BgL_new3417z00_1734;
									}} BgL_res3742z00_1771;
								}
								BgL_res3743z00_1772 = BgL_new3360z00_1733;
							}
							BgL_arg3582z00_1009 = BgL_res3743z00_1772;
						}
						{	/* Integrate/iinfo.scm 41 */
							obj_t BgL_auxz00_2706;

							BgL_objectz00_bglt BgL_auxz00_2704;

							BgL_auxz00_2706 = (obj_t) (BgL_arg3582z00_1009);
							BgL_auxz00_2704 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2sfunzf2Iinfozd2nilza0zzintegrate_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2704, BgL_auxz00_2706);
				}}}
			else
				{	/* Integrate/iinfo.scm 41 */
					BFALSE;
				}
			return
				(BgL_sfunzf2iinfozf2_bglt)
				(BGl_z52thezd2sfunzf2Iinfozd2nilza0zzintegrate_infoz00);
		}
	}



/* _sfun/Iinfo-nil */
	obj_t BGl__sfunzf2Iinfozd2nilz20zzintegrate_infoz00(obj_t BgL_envz00_2252)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 41 */
			return (obj_t) (BGl_sfunzf2Iinfozd2nilz20zzintegrate_infoz00());
		}
	}



/* sexit/Iinfo? */
	BGL_EXPORTED_DEF bool_t BGl_sexitzf2Iinfozf3z01zzintegrate_infoz00(obj_t
		BgL_obj3322z00_131)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 31 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3322z00_131,
				BGl_sexitzf2Iinfozf2zzintegrate_infoz00);
		}
	}



/* _sexit/Iinfo? */
	obj_t BGl__sexitzf2Iinfozf3z01zzintegrate_infoz00(obj_t BgL_envz00_2249,
		obj_t BgL_obj3322z00_2250)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 31 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3322z00_2250,
					BGl_sexitzf2Iinfozf2zzintegrate_infoz00));
		}
	}



/* widening-sexit/Iinfo */
	BGL_EXPORTED_DEF BgL_sexitzf2iinfozf2_bglt
		BGl_wideningzd2sexitzf2Iinfoz20zzintegrate_infoz00(obj_t
		BgL_fzd2mark3291zd2_135, obj_t BgL_uzd2mark3292zd2_136,
		bool_t BgL_kapturedzf33293zf3_137, bool_t BgL_celledzf33294zf3_138)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 31 */
			{	/* Integrate/iinfo.scm 31 */
				BgL_sexitzf2iinfozf2_bglt BgL_new3295z00_1773;

				BgL_new3295z00_1773 =
					((BgL_sexitzf2iinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_sexitzf2iinfozf2_bgl))));
				{	/* Integrate/iinfo.scm 31 */
					BgL_sexitzf2iinfozf2_bglt BgL_res3744z00_1783;

					{	/* Integrate/iinfo.scm 31 */
						BgL_sexitzf2iinfozf2_bglt BgL_new3309z00_1774;

						BgL_new3309z00_1774 = BgL_new3295z00_1773;
						{	/* Integrate/iinfo.scm 31 */
							obj_t BgL_fzd2mark3305zd2_1779;

							obj_t BgL_uzd2mark3306zd2_1780;

							bool_t BgL_kapturedzf33307zf3_1781;

							bool_t BgL_celledzf33308zf3_1782;

							BgL_fzd2mark3305zd2_1779 = BgL_fzd2mark3291zd2_135;
							BgL_uzd2mark3306zd2_1780 = BgL_uzd2mark3292zd2_136;
							BgL_kapturedzf33307zf3_1781 = BgL_kapturedzf33293zf3_137;
							BgL_celledzf33308zf3_1782 = BgL_celledzf33294zf3_138;
							((((BgL_sexitzf2iinfozf2_bglt) CREF(BgL_new3309z00_1774))->
									BgL_fzd2markzd2) =
								((obj_t) BgL_fzd2mark3305zd2_1779), BUNSPEC);
							((((BgL_sexitzf2iinfozf2_bglt) CREF(BgL_new3309z00_1774))->
									BgL_uzd2markzd2) =
								((obj_t) BgL_uzd2mark3306zd2_1780), BUNSPEC);
							((((BgL_sexitzf2iinfozf2_bglt) CREF(BgL_new3309z00_1774))->
									BgL_kapturedzf3zf3) =
								((bool_t) BgL_kapturedzf33307zf3_1781), BUNSPEC);
							((((BgL_sexitzf2iinfozf2_bglt) CREF(BgL_new3309z00_1774))->
									BgL_celledzf3zf3) =
								((bool_t) BgL_celledzf33308zf3_1782), BUNSPEC);
							BgL_res3744z00_1783 = BgL_new3309z00_1774;
					}} BgL_res3744z00_1783;
				}
				return BgL_new3295z00_1773;
			}
		}
	}



/* _widening-sexit/Iinfo */
	obj_t BGl__wideningzd2sexitzf2Iinfoz20zzintegrate_infoz00(obj_t
		BgL_envz00_2330, obj_t BgL_fzd2mark3291zd2_2331,
		obj_t BgL_uzd2mark3292zd2_2332, obj_t BgL_kapturedzf33293zf3_2333,
		obj_t BgL_celledzf33294zf3_2334)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 31 */
			return
				(obj_t) (BGl_wideningzd2sexitzf2Iinfoz20zzintegrate_infoz00
				(BgL_fzd2mark3291zd2_2331, BgL_uzd2mark3292zd2_2332,
					CBOOL(BgL_kapturedzf33293zf3_2333),
					CBOOL(BgL_celledzf33294zf3_2334)));
		}
	}



/* make-sexit/Iinfo */
	BGL_EXPORTED_DEF BgL_sexitzf2iinfozf2_bglt
		BGl_makezd2sexitzf2Iinfoz20zzintegrate_infoz00(obj_t BgL_handler3301z00_139,
		bool_t BgL_detachedzf33302zf3_140, obj_t BgL_fzd2mark3297zd2_141,
		obj_t BgL_uzd2mark3298zd2_142, bool_t BgL_kapturedzf33299zf3_143,
		bool_t BgL_celledzf33300zf3_144)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 31 */
			{	/* Integrate/iinfo.scm 31 */
				BgL_sexitz00_bglt BgL_aux3303z00_1784;

				BgL_aux3303z00_1784 =
					BGl_makezd2sexitzd2zzast_varz00(BgL_handler3301z00_139,
					BgL_detachedzf33302zf3_140);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3303z00_1784),
					BGl_classzd2numzd2zz__objectz00
					(BGl_sexitzf2Iinfozf2zzintegrate_infoz00));
				{	/* Integrate/iinfo.scm 31 */
					BgL_sexitzf2iinfozf2_bglt BgL_arg3584z00_1786;

					{	/* Integrate/iinfo.scm 31 */
						BgL_sexitzf2iinfozf2_bglt BgL_res3746z00_1805;

						{	/* Integrate/iinfo.scm 31 */
							BgL_sexitzf2iinfozf2_bglt BgL_new3295z00_1794;

							BgL_new3295z00_1794 =
								((BgL_sexitzf2iinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_sexitzf2iinfozf2_bgl))));
							{	/* Integrate/iinfo.scm 31 */
								BgL_sexitzf2iinfozf2_bglt BgL_res3745z00_1804;

								{	/* Integrate/iinfo.scm 31 */
									BgL_sexitzf2iinfozf2_bglt BgL_new3309z00_1795;

									BgL_new3309z00_1795 = BgL_new3295z00_1794;
									{	/* Integrate/iinfo.scm 31 */
										obj_t BgL_fzd2mark3305zd2_1800;

										obj_t BgL_uzd2mark3306zd2_1801;

										bool_t BgL_kapturedzf33307zf3_1802;

										bool_t BgL_celledzf33308zf3_1803;

										BgL_fzd2mark3305zd2_1800 = BgL_fzd2mark3297zd2_141;
										BgL_uzd2mark3306zd2_1801 = BgL_uzd2mark3298zd2_142;
										BgL_kapturedzf33307zf3_1802 = BgL_kapturedzf33299zf3_143;
										BgL_celledzf33308zf3_1803 = BgL_celledzf33300zf3_144;
										((((BgL_sexitzf2iinfozf2_bglt) CREF(BgL_new3309z00_1795))->
												BgL_fzd2markzd2) =
											((obj_t) BgL_fzd2mark3305zd2_1800), BUNSPEC);
										((((BgL_sexitzf2iinfozf2_bglt) CREF(BgL_new3309z00_1795))->
												BgL_uzd2markzd2) =
											((obj_t) BgL_uzd2mark3306zd2_1801), BUNSPEC);
										((((BgL_sexitzf2iinfozf2_bglt) CREF(BgL_new3309z00_1795))->
												BgL_kapturedzf3zf3) =
											((bool_t) BgL_kapturedzf33307zf3_1802), BUNSPEC);
										((((BgL_sexitzf2iinfozf2_bglt) CREF(BgL_new3309z00_1795))->
												BgL_celledzf3zf3) =
											((bool_t) BgL_celledzf33308zf3_1803), BUNSPEC);
										BgL_res3745z00_1804 = BgL_new3309z00_1795;
								}} BgL_res3745z00_1804;
							}
							BgL_res3746z00_1805 = BgL_new3295z00_1794;
						}
						BgL_arg3584z00_1786 = BgL_res3746z00_1805;
					}
					{	/* Integrate/iinfo.scm 31 */
						obj_t BgL_auxz00_2735;

						BgL_objectz00_bglt BgL_auxz00_2733;

						BgL_auxz00_2735 = (obj_t) (BgL_arg3584z00_1786);
						BgL_auxz00_2733 = (BgL_objectz00_bglt) (BgL_aux3303z00_1784);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_2733, BgL_auxz00_2735);
				}}
				return
					((BgL_sexitzf2iinfozf2_bglt)
					(BgL_sexitzf2iinfozf2_bglt) (BgL_aux3303z00_1784));
			}
		}
	}



/* _make-sexit/Iinfo */
	obj_t BGl__makezd2sexitzf2Iinfoz20zzintegrate_infoz00(obj_t BgL_envz00_2335,
		obj_t BgL_handler3301z00_2336, obj_t BgL_detachedzf33302zf3_2337,
		obj_t BgL_fzd2mark3297zd2_2338, obj_t BgL_uzd2mark3298zd2_2339,
		obj_t BgL_kapturedzf33299zf3_2340, obj_t BgL_celledzf33300zf3_2341)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 31 */
			return
				(obj_t) (BGl_makezd2sexitzf2Iinfoz20zzintegrate_infoz00
				(BgL_handler3301z00_2336, CBOOL(BgL_detachedzf33302zf3_2337),
					BgL_fzd2mark3297zd2_2338, BgL_uzd2mark3298zd2_2339,
					CBOOL(BgL_kapturedzf33299zf3_2340),
					CBOOL(BgL_celledzf33300zf3_2341)));
		}
	}



/* fill-sexit/Iinfo! */
	BGL_EXPORTED_DEF BgL_sexitzf2iinfozf2_bglt
		BGl_fillzd2sexitzf2Iinfoz12z32zzintegrate_infoz00(BgL_sexitzf2iinfozf2_bglt
		BgL_new3309z00_145, obj_t BgL_fzd2mark3305zd2_146,
		obj_t BgL_uzd2mark3306zd2_147, bool_t BgL_kapturedzf33307zf3_148,
		bool_t BgL_celledzf33308zf3_149)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 31 */
			{	/* Integrate/iinfo.scm 31 */
				obj_t BgL_fzd2mark3305zd2_2462;

				obj_t BgL_uzd2mark3306zd2_2463;

				bool_t BgL_kapturedzf33307zf3_2464;

				bool_t BgL_celledzf33308zf3_2465;

				BgL_fzd2mark3305zd2_2462 = BgL_fzd2mark3305zd2_146;
				BgL_uzd2mark3306zd2_2463 = BgL_uzd2mark3306zd2_147;
				BgL_kapturedzf33307zf3_2464 = BgL_kapturedzf33307zf3_148;
				BgL_celledzf33308zf3_2465 = BgL_celledzf33308zf3_149;
				((((BgL_sexitzf2iinfozf2_bglt) CREF(BgL_new3309z00_145))->
						BgL_fzd2markzd2) = ((obj_t) BgL_fzd2mark3305zd2_2462), BUNSPEC);
				((((BgL_sexitzf2iinfozf2_bglt) CREF(BgL_new3309z00_145))->
						BgL_uzd2markzd2) = ((obj_t) BgL_uzd2mark3306zd2_2463), BUNSPEC);
				((((BgL_sexitzf2iinfozf2_bglt) CREF(BgL_new3309z00_145))->
						BgL_kapturedzf3zf3) =
					((bool_t) BgL_kapturedzf33307zf3_2464), BUNSPEC);
				((((BgL_sexitzf2iinfozf2_bglt) CREF(BgL_new3309z00_145))->
						BgL_celledzf3zf3) = ((bool_t) BgL_celledzf33308zf3_2465), BUNSPEC);
				return BgL_new3309z00_145;
			}
		}
	}



/* _fill-sexit/Iinfo! */
	obj_t BGl__fillzd2sexitzf2Iinfoz12z32zzintegrate_infoz00(obj_t
		BgL_envz00_2342, obj_t BgL_new3309z00_2343, obj_t BgL_fzd2mark3305zd2_2344,
		obj_t BgL_uzd2mark3306zd2_2345, obj_t BgL_kapturedzf33307zf3_2346,
		obj_t BgL_celledzf33308zf3_2347)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 31 */
			{	/* Integrate/iinfo.scm 31 */
				BgL_sexitzf2iinfozf2_bglt BgL_auxz00_2749;

				{	/* Integrate/iinfo.scm 31 */
					BgL_sexitzf2iinfozf2_bglt BgL_res3784z00_2475;

					{	/* Integrate/iinfo.scm 31 */
						BgL_sexitzf2iinfozf2_bglt BgL_new3309z00_2466;

						bool_t BgL_kapturedzf33307zf3_2469;

						bool_t BgL_celledzf33308zf3_2470;

						BgL_new3309z00_2466 =
							(BgL_sexitzf2iinfozf2_bglt) (BgL_new3309z00_2343);
						BgL_kapturedzf33307zf3_2469 = CBOOL(BgL_kapturedzf33307zf3_2346);
						BgL_celledzf33308zf3_2470 = CBOOL(BgL_celledzf33308zf3_2347);
						{	/* Integrate/iinfo.scm 31 */
							obj_t BgL_fzd2mark3305zd2_2471;

							obj_t BgL_uzd2mark3306zd2_2472;

							bool_t BgL_kapturedzf33307zf3_2473;

							bool_t BgL_celledzf33308zf3_2474;

							BgL_fzd2mark3305zd2_2471 = BgL_fzd2mark3305zd2_2344;
							BgL_uzd2mark3306zd2_2472 = BgL_uzd2mark3306zd2_2345;
							BgL_kapturedzf33307zf3_2473 = BgL_kapturedzf33307zf3_2469;
							BgL_celledzf33308zf3_2474 = BgL_celledzf33308zf3_2470;
							((((BgL_sexitzf2iinfozf2_bglt) CREF(BgL_new3309z00_2466))->
									BgL_fzd2markzd2) =
								((obj_t) BgL_fzd2mark3305zd2_2471), BUNSPEC);
							((((BgL_sexitzf2iinfozf2_bglt) CREF(BgL_new3309z00_2466))->
									BgL_uzd2markzd2) =
								((obj_t) BgL_uzd2mark3306zd2_2472), BUNSPEC);
							((((BgL_sexitzf2iinfozf2_bglt) CREF(BgL_new3309z00_2466))->
									BgL_kapturedzf3zf3) =
								((bool_t) BgL_kapturedzf33307zf3_2473), BUNSPEC);
							((((BgL_sexitzf2iinfozf2_bglt) CREF(BgL_new3309z00_2466))->
									BgL_celledzf3zf3) =
								((bool_t) BgL_celledzf33308zf3_2474), BUNSPEC);
							BgL_res3784z00_2475 = BgL_new3309z00_2466;
						}
					}
					BgL_auxz00_2749 = BgL_res3784z00_2475;
				}
				return (obj_t) (BgL_auxz00_2749);
			}
		}
	}



/* %allocate-sexit/Iinfo */
	BGL_EXPORTED_DEF BgL_sexitz00_bglt
		BGl_z52allocatezd2sexitzf2Iinfoz72zzintegrate_infoz00()
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 31 */
			{	/* Integrate/iinfo.scm 31 */
				BgL_sexitz00_bglt BgL_new3315z00_2476;

				BgL_new3315z00_2476 =
					((BgL_sexitz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_sexitz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3315z00_2476),
					BGl_classzd2numzd2zz__objectz00
					(BGl_sexitzf2Iinfozf2zzintegrate_infoz00));
				{	/* Integrate/iinfo.scm 31 */
					BgL_objectz00_bglt BgL_auxz00_2762;

					BgL_auxz00_2762 = (BgL_objectz00_bglt) (BgL_new3315z00_2476);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_2762, BFALSE);
				}
				return BgL_new3315z00_2476;
			}
		}
	}



/* _%allocate-sexit/Iinfo */
	obj_t BGl__z52allocatezd2sexitzf2Iinfoz72zzintegrate_infoz00(obj_t
		BgL_envz00_2247)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 31 */
			{	/* Integrate/iinfo.scm 31 */
				BgL_sexitz00_bglt BgL_auxz00_2765;

				{	/* Integrate/iinfo.scm 31 */
					BgL_sexitz00_bglt BgL_res3785z00_2480;

					{	/* Integrate/iinfo.scm 31 */
						BgL_sexitz00_bglt BgL_new3315z00_2478;

						BgL_new3315z00_2478 =
							((BgL_sexitz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_sexitz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3315z00_2478),
							BGl_classzd2numzd2zz__objectz00
							(BGl_sexitzf2Iinfozf2zzintegrate_infoz00));
						{	/* Integrate/iinfo.scm 31 */
							BgL_objectz00_bglt BgL_auxz00_2770;

							BgL_auxz00_2770 = (BgL_objectz00_bglt) (BgL_new3315z00_2478);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2770, BFALSE);
						}
						BgL_res3785z00_2480 = BgL_new3315z00_2478;
					}
					BgL_auxz00_2765 = BgL_res3785z00_2480;
				}
				return (obj_t) (BgL_auxz00_2765);
			}
		}
	}



/* sexit/Iinfo-nil */
	BGL_EXPORTED_DEF BgL_sexitzf2iinfozf2_bglt
		BGl_sexitzf2Iinfozd2nilz20zzintegrate_infoz00()
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 31 */
			if ((BGl_z52thezd2sexitzf2Iinfozd2nilza0zzintegrate_infoz00 == BUNSPEC))
				{	/* Integrate/iinfo.scm 31 */
					{	/* Integrate/iinfo.scm 31 */
						BgL_sexitz00_bglt BgL_res3747z00_1818;

						{	/* Integrate/iinfo.scm 31 */
							BgL_sexitz00_bglt BgL_new2072z00_1814;

							BgL_new2072z00_1814 =
								((BgL_sexitz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_sexitz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2072z00_1814),
								BGl_classzd2numzd2zz__objectz00(BGl_sexitz00zzast_varz00));
							{	/* Integrate/iinfo.scm 31 */
								BgL_objectz00_bglt BgL_auxz00_2780;

								BgL_auxz00_2780 = (BgL_objectz00_bglt) (BgL_new2072z00_1814);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2780, BFALSE);
							}
							BgL_res3747z00_1818 = BgL_new2072z00_1814;
						}
						BGl_z52thezd2sexitzf2Iinfozd2nilza0zzintegrate_infoz00 =
							(obj_t) (BgL_res3747z00_1818);
					}
					{	/* Integrate/iinfo.scm 31 */
						BgL_sexitz00_bglt BgL_res3748z00_1824;

						{	/* Integrate/iinfo.scm 31 */
							BgL_sexitz00_bglt BgL_new2068z00_1819;

							BgL_new2068z00_1819 =
								(BgL_sexitz00_bglt)
								(BGl_z52thezd2sexitzf2Iinfozd2nilza0zzintegrate_infoz00);
							{	/* Integrate/iinfo.scm 31 */
								obj_t BgL_handler2066z00_1822;

								bool_t BgL_detachedzf32067zf3_1823;

								BgL_handler2066z00_1822 = BUNSPEC;
								BgL_detachedzf32067zf3_1823 = ((bool_t) 0);
								((((BgL_sexitz00_bglt) CREF(BgL_new2068z00_1819))->
										BgL_handlerz00) =
									((obj_t) BgL_handler2066z00_1822), BUNSPEC);
								((((BgL_sexitz00_bglt) CREF(BgL_new2068z00_1819))->
										BgL_detachedzf3zf3) =
									((bool_t) BgL_detachedzf32067zf3_1823), BUNSPEC);
								BgL_res3748z00_1824 = BgL_new2068z00_1819;
						}} BgL_res3748z00_1824;
					}
					{	/* Integrate/iinfo.scm 31 */
						long BgL_arg3587z00_1022;

						BgL_arg3587z00_1022 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_sexitzf2Iinfozf2zzintegrate_infoz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2sexitzf2Iinfozd2nilza0zzintegrate_infoz00),
							BgL_arg3587z00_1022);
					}
					{	/* Integrate/iinfo.scm 31 */
						BgL_sexitzf2iinfozf2_bglt BgL_arg3588z00_1023;

						{	/* Integrate/iinfo.scm 31 */
							BgL_sexitzf2iinfozf2_bglt BgL_res3750z00_1842;

							{	/* Integrate/iinfo.scm 31 */
								BgL_sexitzf2iinfozf2_bglt BgL_new3295z00_1831;

								BgL_new3295z00_1831 =
									((BgL_sexitzf2iinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_sexitzf2iinfozf2_bgl))));
								{	/* Integrate/iinfo.scm 31 */
									BgL_sexitzf2iinfozf2_bglt BgL_res3749z00_1841;

									{	/* Integrate/iinfo.scm 31 */
										BgL_sexitzf2iinfozf2_bglt BgL_new3309z00_1832;

										BgL_new3309z00_1832 = BgL_new3295z00_1831;
										{	/* Integrate/iinfo.scm 31 */
											obj_t BgL_fzd2mark3305zd2_1837;

											obj_t BgL_uzd2mark3306zd2_1838;

											bool_t BgL_kapturedzf33307zf3_1839;

											bool_t BgL_celledzf33308zf3_1840;

											BgL_fzd2mark3305zd2_1837 = BUNSPEC;
											BgL_uzd2mark3306zd2_1838 = BUNSPEC;
											BgL_kapturedzf33307zf3_1839 = ((bool_t) 0);
											BgL_celledzf33308zf3_1840 = ((bool_t) 0);
											((((BgL_sexitzf2iinfozf2_bglt)
														CREF(BgL_new3309z00_1832))->BgL_fzd2markzd2) =
												((obj_t) BgL_fzd2mark3305zd2_1837), BUNSPEC);
											((((BgL_sexitzf2iinfozf2_bglt)
														CREF(BgL_new3309z00_1832))->BgL_uzd2markzd2) =
												((obj_t) BgL_uzd2mark3306zd2_1838), BUNSPEC);
											((((BgL_sexitzf2iinfozf2_bglt)
														CREF(BgL_new3309z00_1832))->BgL_kapturedzf3zf3) =
												((bool_t) BgL_kapturedzf33307zf3_1839), BUNSPEC);
											((((BgL_sexitzf2iinfozf2_bglt)
														CREF(BgL_new3309z00_1832))->BgL_celledzf3zf3) =
												((bool_t) BgL_celledzf33308zf3_1840), BUNSPEC);
											BgL_res3749z00_1841 = BgL_new3309z00_1832;
									}} BgL_res3749z00_1841;
								}
								BgL_res3750z00_1842 = BgL_new3295z00_1831;
							}
							BgL_arg3588z00_1023 = BgL_res3750z00_1842;
						}
						{	/* Integrate/iinfo.scm 31 */
							obj_t BgL_auxz00_2797;

							BgL_objectz00_bglt BgL_auxz00_2795;

							BgL_auxz00_2797 = (obj_t) (BgL_arg3588z00_1023);
							BgL_auxz00_2795 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2sexitzf2Iinfozd2nilza0zzintegrate_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2795, BgL_auxz00_2797);
				}}}
			else
				{	/* Integrate/iinfo.scm 31 */
					BFALSE;
				}
			return
				(BgL_sexitzf2iinfozf2_bglt)
				(BGl_z52thezd2sexitzf2Iinfozd2nilza0zzintegrate_infoz00);
		}
	}



/* _sexit/Iinfo-nil */
	obj_t BGl__sexitzf2Iinfozd2nilz20zzintegrate_infoz00(obj_t BgL_envz00_2248)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 31 */
			return (obj_t) (BGl_sexitzf2Iinfozd2nilz20zzintegrate_infoz00());
		}
	}



/* svar/Iinfo? */
	BGL_EXPORTED_DEF bool_t BGl_svarzf2Iinfozf3z01zzintegrate_infoz00(obj_t
		BgL_obj3272z00_162)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 21 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3272z00_162,
				BGl_svarzf2Iinfozf2zzintegrate_infoz00);
		}
	}



/* _svar/Iinfo? */
	obj_t BGl__svarzf2Iinfozf3z01zzintegrate_infoz00(obj_t BgL_envz00_2245,
		obj_t BgL_obj3272z00_2246)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 21 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3272z00_2246,
					BGl_svarzf2Iinfozf2zzintegrate_infoz00));
		}
	}



/* widening-svar/Iinfo */
	BGL_EXPORTED_DEF BgL_svarzf2iinfozf2_bglt
		BGl_wideningzd2svarzf2Iinfoz20zzintegrate_infoz00(obj_t
		BgL_fzd2mark3242zd2_166, obj_t BgL_uzd2mark3243zd2_167,
		bool_t BgL_kapturedzf33244zf3_168, bool_t BgL_celledzf33245zf3_169)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 21 */
			{	/* Integrate/iinfo.scm 21 */
				BgL_svarzf2iinfozf2_bglt BgL_new3246z00_1843;

				BgL_new3246z00_1843 =
					((BgL_svarzf2iinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_svarzf2iinfozf2_bgl))));
				{	/* Integrate/iinfo.scm 21 */
					BgL_svarzf2iinfozf2_bglt BgL_res3751z00_1853;

					{	/* Integrate/iinfo.scm 21 */
						BgL_svarzf2iinfozf2_bglt BgL_new3259z00_1844;

						BgL_new3259z00_1844 = BgL_new3246z00_1843;
						{	/* Integrate/iinfo.scm 21 */
							obj_t BgL_fzd2mark3255zd2_1849;

							obj_t BgL_uzd2mark3256zd2_1850;

							bool_t BgL_kapturedzf33257zf3_1851;

							bool_t BgL_celledzf33258zf3_1852;

							BgL_fzd2mark3255zd2_1849 = BgL_fzd2mark3242zd2_166;
							BgL_uzd2mark3256zd2_1850 = BgL_uzd2mark3243zd2_167;
							BgL_kapturedzf33257zf3_1851 = BgL_kapturedzf33244zf3_168;
							BgL_celledzf33258zf3_1852 = BgL_celledzf33245zf3_169;
							((((BgL_svarzf2iinfozf2_bglt) CREF(BgL_new3259z00_1844))->
									BgL_fzd2markzd2) =
								((obj_t) BgL_fzd2mark3255zd2_1849), BUNSPEC);
							((((BgL_svarzf2iinfozf2_bglt) CREF(BgL_new3259z00_1844))->
									BgL_uzd2markzd2) =
								((obj_t) BgL_uzd2mark3256zd2_1850), BUNSPEC);
							((((BgL_svarzf2iinfozf2_bglt) CREF(BgL_new3259z00_1844))->
									BgL_kapturedzf3zf3) =
								((bool_t) BgL_kapturedzf33257zf3_1851), BUNSPEC);
							((((BgL_svarzf2iinfozf2_bglt) CREF(BgL_new3259z00_1844))->
									BgL_celledzf3zf3) =
								((bool_t) BgL_celledzf33258zf3_1852), BUNSPEC);
							BgL_res3751z00_1853 = BgL_new3259z00_1844;
					}} BgL_res3751z00_1853;
				}
				return BgL_new3246z00_1843;
			}
		}
	}



/* _widening-svar/Iinfo */
	obj_t BGl__wideningzd2svarzf2Iinfoz20zzintegrate_infoz00(obj_t
		BgL_envz00_2348, obj_t BgL_fzd2mark3242zd2_2349,
		obj_t BgL_uzd2mark3243zd2_2350, obj_t BgL_kapturedzf33244zf3_2351,
		obj_t BgL_celledzf33245zf3_2352)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 21 */
			return
				(obj_t) (BGl_wideningzd2svarzf2Iinfoz20zzintegrate_infoz00
				(BgL_fzd2mark3242zd2_2349, BgL_uzd2mark3243zd2_2350,
					CBOOL(BgL_kapturedzf33244zf3_2351),
					CBOOL(BgL_celledzf33245zf3_2352)));
		}
	}



/* make-svar/Iinfo */
	BGL_EXPORTED_DEF BgL_svarzf2iinfozf2_bglt
		BGl_makezd2svarzf2Iinfoz20zzintegrate_infoz00(obj_t BgL_loc3252z00_170,
		obj_t BgL_fzd2mark3248zd2_171, obj_t BgL_uzd2mark3249zd2_172,
		bool_t BgL_kapturedzf33250zf3_173, bool_t BgL_celledzf33251zf3_174)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 21 */
			{	/* Integrate/iinfo.scm 21 */
				BgL_svarz00_bglt BgL_aux3253z00_1854;

				BgL_aux3253z00_1854 =
					BGl_makezd2svarzd2zzast_varz00(BgL_loc3252z00_170);
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_aux3253z00_1854),
					BGl_classzd2numzd2zz__objectz00
					(BGl_svarzf2Iinfozf2zzintegrate_infoz00));
				{	/* Integrate/iinfo.scm 21 */
					BgL_svarzf2iinfozf2_bglt BgL_arg3590z00_1856;

					{	/* Integrate/iinfo.scm 21 */
						BgL_svarzf2iinfozf2_bglt BgL_res3753z00_1875;

						{	/* Integrate/iinfo.scm 21 */
							BgL_svarzf2iinfozf2_bglt BgL_new3246z00_1864;

							BgL_new3246z00_1864 =
								((BgL_svarzf2iinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_svarzf2iinfozf2_bgl))));
							{	/* Integrate/iinfo.scm 21 */
								BgL_svarzf2iinfozf2_bglt BgL_res3752z00_1874;

								{	/* Integrate/iinfo.scm 21 */
									BgL_svarzf2iinfozf2_bglt BgL_new3259z00_1865;

									BgL_new3259z00_1865 = BgL_new3246z00_1864;
									{	/* Integrate/iinfo.scm 21 */
										obj_t BgL_fzd2mark3255zd2_1870;

										obj_t BgL_uzd2mark3256zd2_1871;

										bool_t BgL_kapturedzf33257zf3_1872;

										bool_t BgL_celledzf33258zf3_1873;

										BgL_fzd2mark3255zd2_1870 = BgL_fzd2mark3248zd2_171;
										BgL_uzd2mark3256zd2_1871 = BgL_uzd2mark3249zd2_172;
										BgL_kapturedzf33257zf3_1872 = BgL_kapturedzf33250zf3_173;
										BgL_celledzf33258zf3_1873 = BgL_celledzf33251zf3_174;
										((((BgL_svarzf2iinfozf2_bglt) CREF(BgL_new3259z00_1865))->
												BgL_fzd2markzd2) =
											((obj_t) BgL_fzd2mark3255zd2_1870), BUNSPEC);
										((((BgL_svarzf2iinfozf2_bglt) CREF(BgL_new3259z00_1865))->
												BgL_uzd2markzd2) =
											((obj_t) BgL_uzd2mark3256zd2_1871), BUNSPEC);
										((((BgL_svarzf2iinfozf2_bglt) CREF(BgL_new3259z00_1865))->
												BgL_kapturedzf3zf3) =
											((bool_t) BgL_kapturedzf33257zf3_1872), BUNSPEC);
										((((BgL_svarzf2iinfozf2_bglt) CREF(BgL_new3259z00_1865))->
												BgL_celledzf3zf3) =
											((bool_t) BgL_celledzf33258zf3_1873), BUNSPEC);
										BgL_res3752z00_1874 = BgL_new3259z00_1865;
								}} BgL_res3752z00_1874;
							}
							BgL_res3753z00_1875 = BgL_new3246z00_1864;
						}
						BgL_arg3590z00_1856 = BgL_res3753z00_1875;
					}
					{	/* Integrate/iinfo.scm 21 */
						obj_t BgL_auxz00_2826;

						BgL_objectz00_bglt BgL_auxz00_2824;

						BgL_auxz00_2826 = (obj_t) (BgL_arg3590z00_1856);
						BgL_auxz00_2824 = (BgL_objectz00_bglt) (BgL_aux3253z00_1854);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_2824, BgL_auxz00_2826);
				}}
				return
					((BgL_svarzf2iinfozf2_bglt)
					(BgL_svarzf2iinfozf2_bglt) (BgL_aux3253z00_1854));
			}
		}
	}



/* _make-svar/Iinfo */
	obj_t BGl__makezd2svarzf2Iinfoz20zzintegrate_infoz00(obj_t BgL_envz00_2353,
		obj_t BgL_loc3252z00_2354, obj_t BgL_fzd2mark3248zd2_2355,
		obj_t BgL_uzd2mark3249zd2_2356, obj_t BgL_kapturedzf33250zf3_2357,
		obj_t BgL_celledzf33251zf3_2358)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 21 */
			return
				(obj_t) (BGl_makezd2svarzf2Iinfoz20zzintegrate_infoz00
				(BgL_loc3252z00_2354, BgL_fzd2mark3248zd2_2355,
					BgL_uzd2mark3249zd2_2356, CBOOL(BgL_kapturedzf33250zf3_2357),
					CBOOL(BgL_celledzf33251zf3_2358)));
		}
	}



/* fill-svar/Iinfo! */
	BGL_EXPORTED_DEF BgL_svarzf2iinfozf2_bglt
		BGl_fillzd2svarzf2Iinfoz12z32zzintegrate_infoz00(BgL_svarzf2iinfozf2_bglt
		BgL_new3259z00_175, obj_t BgL_fzd2mark3255zd2_176,
		obj_t BgL_uzd2mark3256zd2_177, bool_t BgL_kapturedzf33257zf3_178,
		bool_t BgL_celledzf33258zf3_179)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 21 */
			{	/* Integrate/iinfo.scm 21 */
				obj_t BgL_fzd2mark3255zd2_2482;

				obj_t BgL_uzd2mark3256zd2_2483;

				bool_t BgL_kapturedzf33257zf3_2484;

				bool_t BgL_celledzf33258zf3_2485;

				BgL_fzd2mark3255zd2_2482 = BgL_fzd2mark3255zd2_176;
				BgL_uzd2mark3256zd2_2483 = BgL_uzd2mark3256zd2_177;
				BgL_kapturedzf33257zf3_2484 = BgL_kapturedzf33257zf3_178;
				BgL_celledzf33258zf3_2485 = BgL_celledzf33258zf3_179;
				((((BgL_svarzf2iinfozf2_bglt) CREF(BgL_new3259z00_175))->
						BgL_fzd2markzd2) = ((obj_t) BgL_fzd2mark3255zd2_2482), BUNSPEC);
				((((BgL_svarzf2iinfozf2_bglt) CREF(BgL_new3259z00_175))->
						BgL_uzd2markzd2) = ((obj_t) BgL_uzd2mark3256zd2_2483), BUNSPEC);
				((((BgL_svarzf2iinfozf2_bglt) CREF(BgL_new3259z00_175))->
						BgL_kapturedzf3zf3) =
					((bool_t) BgL_kapturedzf33257zf3_2484), BUNSPEC);
				((((BgL_svarzf2iinfozf2_bglt) CREF(BgL_new3259z00_175))->
						BgL_celledzf3zf3) = ((bool_t) BgL_celledzf33258zf3_2485), BUNSPEC);
				return BgL_new3259z00_175;
			}
		}
	}



/* _fill-svar/Iinfo! */
	obj_t BGl__fillzd2svarzf2Iinfoz12z32zzintegrate_infoz00(obj_t BgL_envz00_2359,
		obj_t BgL_new3259z00_2360, obj_t BgL_fzd2mark3255zd2_2361,
		obj_t BgL_uzd2mark3256zd2_2362, obj_t BgL_kapturedzf33257zf3_2363,
		obj_t BgL_celledzf33258zf3_2364)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 21 */
			{	/* Integrate/iinfo.scm 21 */
				BgL_svarzf2iinfozf2_bglt BgL_auxz00_2839;

				{	/* Integrate/iinfo.scm 21 */
					BgL_svarzf2iinfozf2_bglt BgL_res3786z00_2495;

					{	/* Integrate/iinfo.scm 21 */
						BgL_svarzf2iinfozf2_bglt BgL_new3259z00_2486;

						bool_t BgL_kapturedzf33257zf3_2489;

						bool_t BgL_celledzf33258zf3_2490;

						BgL_new3259z00_2486 =
							(BgL_svarzf2iinfozf2_bglt) (BgL_new3259z00_2360);
						BgL_kapturedzf33257zf3_2489 = CBOOL(BgL_kapturedzf33257zf3_2363);
						BgL_celledzf33258zf3_2490 = CBOOL(BgL_celledzf33258zf3_2364);
						{	/* Integrate/iinfo.scm 21 */
							obj_t BgL_fzd2mark3255zd2_2491;

							obj_t BgL_uzd2mark3256zd2_2492;

							bool_t BgL_kapturedzf33257zf3_2493;

							bool_t BgL_celledzf33258zf3_2494;

							BgL_fzd2mark3255zd2_2491 = BgL_fzd2mark3255zd2_2361;
							BgL_uzd2mark3256zd2_2492 = BgL_uzd2mark3256zd2_2362;
							BgL_kapturedzf33257zf3_2493 = BgL_kapturedzf33257zf3_2489;
							BgL_celledzf33258zf3_2494 = BgL_celledzf33258zf3_2490;
							((((BgL_svarzf2iinfozf2_bglt) CREF(BgL_new3259z00_2486))->
									BgL_fzd2markzd2) =
								((obj_t) BgL_fzd2mark3255zd2_2491), BUNSPEC);
							((((BgL_svarzf2iinfozf2_bglt) CREF(BgL_new3259z00_2486))->
									BgL_uzd2markzd2) =
								((obj_t) BgL_uzd2mark3256zd2_2492), BUNSPEC);
							((((BgL_svarzf2iinfozf2_bglt) CREF(BgL_new3259z00_2486))->
									BgL_kapturedzf3zf3) =
								((bool_t) BgL_kapturedzf33257zf3_2493), BUNSPEC);
							((((BgL_svarzf2iinfozf2_bglt) CREF(BgL_new3259z00_2486))->
									BgL_celledzf3zf3) =
								((bool_t) BgL_celledzf33258zf3_2494), BUNSPEC);
							BgL_res3786z00_2495 = BgL_new3259z00_2486;
						}
					}
					BgL_auxz00_2839 = BgL_res3786z00_2495;
				}
				return (obj_t) (BgL_auxz00_2839);
			}
		}
	}



/* %allocate-svar/Iinfo */
	BGL_EXPORTED_DEF BgL_svarz00_bglt
		BGl_z52allocatezd2svarzf2Iinfoz72zzintegrate_infoz00()
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 21 */
			{	/* Integrate/iinfo.scm 21 */
				BgL_svarz00_bglt BgL_new3265z00_2496;

				BgL_new3265z00_2496 =
					((BgL_svarz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_svarz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new3265z00_2496),
					BGl_classzd2numzd2zz__objectz00
					(BGl_svarzf2Iinfozf2zzintegrate_infoz00));
				{	/* Integrate/iinfo.scm 21 */
					BgL_objectz00_bglt BgL_auxz00_2852;

					BgL_auxz00_2852 = (BgL_objectz00_bglt) (BgL_new3265z00_2496);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_2852, BFALSE);
				}
				return BgL_new3265z00_2496;
			}
		}
	}



/* _%allocate-svar/Iinfo */
	obj_t BGl__z52allocatezd2svarzf2Iinfoz72zzintegrate_infoz00(obj_t
		BgL_envz00_2243)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 21 */
			{	/* Integrate/iinfo.scm 21 */
				BgL_svarz00_bglt BgL_auxz00_2855;

				{	/* Integrate/iinfo.scm 21 */
					BgL_svarz00_bglt BgL_res3787z00_2500;

					{	/* Integrate/iinfo.scm 21 */
						BgL_svarz00_bglt BgL_new3265z00_2498;

						BgL_new3265z00_2498 =
							((BgL_svarz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_svarz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3265z00_2498),
							BGl_classzd2numzd2zz__objectz00
							(BGl_svarzf2Iinfozf2zzintegrate_infoz00));
						{	/* Integrate/iinfo.scm 21 */
							BgL_objectz00_bglt BgL_auxz00_2860;

							BgL_auxz00_2860 = (BgL_objectz00_bglt) (BgL_new3265z00_2498);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2860, BFALSE);
						}
						BgL_res3787z00_2500 = BgL_new3265z00_2498;
					}
					BgL_auxz00_2855 = BgL_res3787z00_2500;
				}
				return (obj_t) (BgL_auxz00_2855);
			}
		}
	}



/* svar/Iinfo-nil */
	BGL_EXPORTED_DEF BgL_svarzf2iinfozf2_bglt
		BGl_svarzf2Iinfozd2nilz20zzintegrate_infoz00()
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 21 */
			if ((BGl_z52thezd2svarzf2Iinfozd2nilza0zzintegrate_infoz00 == BUNSPEC))
				{	/* Integrate/iinfo.scm 21 */
					{	/* Integrate/iinfo.scm 21 */
						BgL_svarz00_bglt BgL_res3754z00_1888;

						{	/* Integrate/iinfo.scm 21 */
							BgL_svarz00_bglt BgL_new2028z00_1884;

							BgL_new2028z00_1884 =
								((BgL_svarz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_svarz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2028z00_1884),
								BGl_classzd2numzd2zz__objectz00(BGl_svarz00zzast_varz00));
							{	/* Integrate/iinfo.scm 21 */
								BgL_objectz00_bglt BgL_auxz00_2870;

								BgL_auxz00_2870 = (BgL_objectz00_bglt) (BgL_new2028z00_1884);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2870, BFALSE);
							}
							BgL_res3754z00_1888 = BgL_new2028z00_1884;
						}
						BGl_z52thezd2svarzf2Iinfozd2nilza0zzintegrate_infoz00 =
							(obj_t) (BgL_res3754z00_1888);
					}
					{	/* Integrate/iinfo.scm 21 */
						BgL_svarz00_bglt BgL_res3755z00_1892;

						{	/* Integrate/iinfo.scm 21 */
							BgL_svarz00_bglt BgL_new2025z00_1889;

							BgL_new2025z00_1889 =
								(BgL_svarz00_bglt)
								(BGl_z52thezd2svarzf2Iinfozd2nilza0zzintegrate_infoz00);
							{	/* Integrate/iinfo.scm 21 */
								obj_t BgL_loc2024z00_1891;

								BgL_loc2024z00_1891 = BUNSPEC;
								((((BgL_svarz00_bglt) CREF(BgL_new2025z00_1889))->BgL_locz00) =
									((obj_t) BgL_loc2024z00_1891), BUNSPEC);
								BgL_res3755z00_1892 = BgL_new2025z00_1889;
						}} BgL_res3755z00_1892;
					}
					{	/* Integrate/iinfo.scm 21 */
						long BgL_arg3593z00_1036;

						BgL_arg3593z00_1036 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_svarzf2Iinfozf2zzintegrate_infoz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2svarzf2Iinfozd2nilza0zzintegrate_infoz00),
							BgL_arg3593z00_1036);
					}
					{	/* Integrate/iinfo.scm 21 */
						BgL_svarzf2iinfozf2_bglt BgL_arg3594z00_1037;

						{	/* Integrate/iinfo.scm 21 */
							BgL_svarzf2iinfozf2_bglt BgL_res3757z00_1910;

							{	/* Integrate/iinfo.scm 21 */
								BgL_svarzf2iinfozf2_bglt BgL_new3246z00_1899;

								BgL_new3246z00_1899 =
									((BgL_svarzf2iinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_svarzf2iinfozf2_bgl))));
								{	/* Integrate/iinfo.scm 21 */
									BgL_svarzf2iinfozf2_bglt BgL_res3756z00_1909;

									{	/* Integrate/iinfo.scm 21 */
										BgL_svarzf2iinfozf2_bglt BgL_new3259z00_1900;

										BgL_new3259z00_1900 = BgL_new3246z00_1899;
										{	/* Integrate/iinfo.scm 21 */
											obj_t BgL_fzd2mark3255zd2_1905;

											obj_t BgL_uzd2mark3256zd2_1906;

											bool_t BgL_kapturedzf33257zf3_1907;

											bool_t BgL_celledzf33258zf3_1908;

											BgL_fzd2mark3255zd2_1905 = BUNSPEC;
											BgL_uzd2mark3256zd2_1906 = BUNSPEC;
											BgL_kapturedzf33257zf3_1907 = ((bool_t) 0);
											BgL_celledzf33258zf3_1908 = ((bool_t) 0);
											((((BgL_svarzf2iinfozf2_bglt) CREF(BgL_new3259z00_1900))->
													BgL_fzd2markzd2) =
												((obj_t) BgL_fzd2mark3255zd2_1905), BUNSPEC);
											((((BgL_svarzf2iinfozf2_bglt) CREF(BgL_new3259z00_1900))->
													BgL_uzd2markzd2) =
												((obj_t) BgL_uzd2mark3256zd2_1906), BUNSPEC);
											((((BgL_svarzf2iinfozf2_bglt) CREF(BgL_new3259z00_1900))->
													BgL_kapturedzf3zf3) =
												((bool_t) BgL_kapturedzf33257zf3_1907), BUNSPEC);
											((((BgL_svarzf2iinfozf2_bglt) CREF(BgL_new3259z00_1900))->
													BgL_celledzf3zf3) =
												((bool_t) BgL_celledzf33258zf3_1908), BUNSPEC);
											BgL_res3756z00_1909 = BgL_new3259z00_1900;
									}} BgL_res3756z00_1909;
								}
								BgL_res3757z00_1910 = BgL_new3246z00_1899;
							}
							BgL_arg3594z00_1037 = BgL_res3757z00_1910;
						}
						{	/* Integrate/iinfo.scm 21 */
							obj_t BgL_auxz00_2886;

							BgL_objectz00_bglt BgL_auxz00_2884;

							BgL_auxz00_2886 = (obj_t) (BgL_arg3594z00_1037);
							BgL_auxz00_2884 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2svarzf2Iinfozd2nilza0zzintegrate_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2884, BgL_auxz00_2886);
				}}}
			else
				{	/* Integrate/iinfo.scm 21 */
					BFALSE;
				}
			return
				(BgL_svarzf2iinfozf2_bglt)
				(BGl_z52thezd2svarzf2Iinfozd2nilza0zzintegrate_infoz00);
		}
	}



/* _svar/Iinfo-nil */
	obj_t BGl__svarzf2Iinfozd2nilz20zzintegrate_infoz00(obj_t BgL_envz00_2244)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 21 */
			return (obj_t) (BGl_svarzf2Iinfozd2nilz20zzintegrate_infoz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_infoz00()
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_infoz00()
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_sfunzf2Iinfozf2zzintegrate_infoz00,
				BGl_proc3770z00zzintegrate_infoz00,
				BGl_string3771z00zzintegrate_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_sfunzf2Iinfozf2zzintegrate_infoz00,
				BGl_proc3772z00zzintegrate_infoz00,
				BGl_string3773z00zzintegrate_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_sexitzf2Iinfozf2zzintegrate_infoz00,
				BGl_proc3774z00zzintegrate_infoz00,
				BGl_string3771z00zzintegrate_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_sexitzf2Iinfozf2zzintegrate_infoz00,
				BGl_proc3775z00zzintegrate_infoz00,
				BGl_string3773z00zzintegrate_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_svarzf2Iinfozf2zzintegrate_infoz00,
				BGl_proc3776z00zzintegrate_infoz00,
				BGl_string3771z00zzintegrate_infoz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_svarzf2Iinfozf2zzintegrate_infoz00,
				BGl_proc3777z00zzintegrate_infoz00,
				BGl_string3773z00zzintegrate_infoz00);
		}
	}



/* struct+object->objec3561 */
	obj_t BGl_structzb2objectzd2ze3objec3561z83zzintegrate_infoz00(obj_t
		BgL_envz00_2376, obj_t BgL_oz00_2377, obj_t BgL_sz00_2378)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 21 */
			{
				BgL_svarzf2iinfozf2_bglt BgL_oz00_1532;

				obj_t BgL_sz00_1533;

				{	/* Integrate/iinfo.scm 21 */
					BgL_svarzf2iinfozf2_bglt BgL_auxz00_2898;

					BgL_oz00_1532 = (BgL_svarzf2iinfozf2_bglt) (BgL_oz00_2377);
					BgL_sz00_1533 = BgL_sz00_2378;
					{

						{	/* Integrate/iinfo.scm 21 */
							obj_t BgL_old3269z00_1536;

							obj_t BgL_aux3270z00_1537;

							{	/* Integrate/iinfo.scm 21 */
								obj_t BgL_nextzd2method3560zd2_1545;

								BgL_nextzd2method3560zd2_1545 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1532),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_svarzf2Iinfozf2zzintegrate_infoz00);
								if (PROCEDUREP(BgL_nextzd2method3560zd2_1545))
									{	/* Integrate/iinfo.scm 21 */
										BgL_old3269z00_1536 =
											PROCEDURE_ENTRY(BgL_nextzd2method3560zd2_1545)
											(BgL_nextzd2method3560zd2_1545, (obj_t) (BgL_oz00_1532),
											BgL_sz00_1533, BEOA);
									}
								else
									{	/* Integrate/iinfo.scm 21 */
										BgL_old3269z00_1536 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1532), BgL_sz00_1533));
									}
							}
							BgL_aux3270z00_1537 =
								STRUCT_REF(BgL_sz00_1533, (int) (((long) 0)));
							{	/* Integrate/iinfo.scm 21 */
								BgL_svarzf2iinfozf2_bglt BgL_new3271z00_1538;

								BgL_new3271z00_1538 =
									((BgL_svarzf2iinfozf2_bglt) (BgL_old3269z00_1536));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3271z00_1538),
									BGl_classzd2numzd2zz__objectz00
									(BGl_svarzf2Iinfozf2zzintegrate_infoz00));
								{	/* Integrate/iinfo.scm 21 */
									BgL_svarzf2iinfozf2_bglt BgL_arg3731z00_1540;

									{	/* Integrate/iinfo.scm 21 */
										obj_t BgL_arg3732z00_1541;

										obj_t BgL_arg3733z00_1542;

										obj_t BgL_arg3734z00_1543;

										obj_t BgL_arg3735z00_1544;

										BgL_arg3732z00_1541 =
											STRUCT_REF(BgL_aux3270z00_1537, (int) (((long) 0)));
										BgL_arg3733z00_1542 =
											STRUCT_REF(BgL_aux3270z00_1537, (int) (((long) 1)));
										BgL_arg3734z00_1543 =
											STRUCT_REF(BgL_aux3270z00_1537, (int) (((long) 2)));
										BgL_arg3735z00_1544 =
											STRUCT_REF(BgL_aux3270z00_1537, (int) (((long) 3)));
										{	/* Integrate/iinfo.scm 21 */
											BgL_svarzf2iinfozf2_bglt BgL_res3766z00_2241;

											{	/* Integrate/iinfo.scm 21 */
												bool_t BgL_kapturedzf33244zf3_2228;

												bool_t BgL_celledzf33245zf3_2229;

												BgL_kapturedzf33244zf3_2228 =
													CBOOL(BgL_arg3734z00_1543);
												BgL_celledzf33245zf3_2229 = CBOOL(BgL_arg3735z00_1544);
												{	/* Integrate/iinfo.scm 21 */
													BgL_svarzf2iinfozf2_bglt BgL_new3246z00_2230;

													BgL_new3246z00_2230 =
														((BgL_svarzf2iinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_svarzf2iinfozf2_bgl))));
													{	/* Integrate/iinfo.scm 21 */
														BgL_svarzf2iinfozf2_bglt BgL_res3765z00_2240;

														{	/* Integrate/iinfo.scm 21 */
															BgL_svarzf2iinfozf2_bglt BgL_new3259z00_2231;

															BgL_new3259z00_2231 = BgL_new3246z00_2230;
															{	/* Integrate/iinfo.scm 21 */
																obj_t BgL_fzd2mark3255zd2_2236;

																obj_t BgL_uzd2mark3256zd2_2237;

																bool_t BgL_kapturedzf33257zf3_2238;

																bool_t BgL_celledzf33258zf3_2239;

																BgL_fzd2mark3255zd2_2236 = BgL_arg3732z00_1541;
																BgL_uzd2mark3256zd2_2237 = BgL_arg3733z00_1542;
																BgL_kapturedzf33257zf3_2238 =
																	BgL_kapturedzf33244zf3_2228;
																BgL_celledzf33258zf3_2239 =
																	BgL_celledzf33245zf3_2229;
																((((BgL_svarzf2iinfozf2_bglt)
																			CREF(BgL_new3259z00_2231))->
																		BgL_fzd2markzd2) =
																	((obj_t) BgL_fzd2mark3255zd2_2236), BUNSPEC);
																((((BgL_svarzf2iinfozf2_bglt)
																			CREF(BgL_new3259z00_2231))->
																		BgL_uzd2markzd2) =
																	((obj_t) BgL_uzd2mark3256zd2_2237), BUNSPEC);
																((((BgL_svarzf2iinfozf2_bglt)
																			CREF(BgL_new3259z00_2231))->
																		BgL_kapturedzf3zf3) =
																	((bool_t) BgL_kapturedzf33257zf3_2238),
																	BUNSPEC);
																((((BgL_svarzf2iinfozf2_bglt)
																			CREF(BgL_new3259z00_2231))->
																		BgL_celledzf3zf3) =
																	((bool_t) BgL_celledzf33258zf3_2239),
																	BUNSPEC);
																BgL_res3765z00_2240 = BgL_new3259z00_2231;
														}} BgL_res3765z00_2240;
													}
													BgL_res3766z00_2241 = BgL_new3246z00_2230;
											}}
											BgL_arg3731z00_1540 = BgL_res3766z00_2241;
									}}
									{	/* Integrate/iinfo.scm 21 */
										obj_t BgL_auxz00_2932;

										BgL_objectz00_bglt BgL_auxz00_2930;

										BgL_auxz00_2932 = (obj_t) (BgL_arg3731z00_1540);
										BgL_auxz00_2930 =
											(BgL_objectz00_bglt) (BgL_new3271z00_1538);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_2930, BgL_auxz00_2932);
								}}
								BgL_auxz00_2898 = BgL_new3271z00_1538;
					}}}
					return (obj_t) (BgL_auxz00_2898);
				}
			}
		}
	}



/* object->struct-svar/3558 */
	obj_t BGl_objectzd2ze3structzd2svarzf23558z11zzintegrate_infoz00(obj_t
		BgL_envz00_2379, obj_t BgL_obj3266z00_2380)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 21 */
			{
				BgL_svarzf2iinfozf2_bglt BgL_obj3266z00_1516;

				BgL_obj3266z00_1516 = (BgL_svarzf2iinfozf2_bglt) (BgL_obj3266z00_2380);
				{

					{	/* Integrate/iinfo.scm 21 */
						obj_t BgL_res3267z00_1519;

						{	/* Integrate/iinfo.scm 21 */
							obj_t BgL_nextzd2method3557zd2_1530;

							BgL_nextzd2method3557zd2_1530 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3266z00_1516),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_svarzf2Iinfozf2zzintegrate_infoz00);
							if (PROCEDUREP(BgL_nextzd2method3557zd2_1530))
								{	/* Integrate/iinfo.scm 21 */
									BgL_res3267z00_1519 =
										PROCEDURE_ENTRY(BgL_nextzd2method3557zd2_1530)
										(BgL_nextzd2method3557zd2_1530,
										(obj_t) (BgL_obj3266z00_1516), BEOA);
								}
							else
								{	/* Integrate/iinfo.scm 21 */
									BgL_res3267z00_1519 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3266z00_1516));
								}
						}
						{	/* Integrate/iinfo.scm 21 */
							obj_t BgL_aux3268z00_1520;

							{	/* Integrate/iinfo.scm 21 */
								obj_t BgL_keyz00_2185;

								BgL_keyz00_2185 = CNST_TABLE_REF(((long) 0));
								BgL_aux3268z00_1520 =
									make_struct(BgL_keyz00_2185, (int) (((long) 4)), BUNSPEC);
							}
							{	/* Integrate/iinfo.scm 21 */
								obj_t BgL_arg3721z00_1522;

								{
									obj_t BgL_auxz00_2949;

									{	/* Integrate/iinfo.scm 21 */
										BgL_objectz00_bglt BgL_auxz00_2950;

										BgL_auxz00_2950 =
											(BgL_objectz00_bglt) (BgL_obj3266z00_1516);
										BgL_auxz00_2949 = BGL_OBJECT_WIDENING(BgL_auxz00_2950);
									}
									BgL_arg3721z00_1522 =
										(((BgL_svarzf2iinfozf2_bglt) CREF(BgL_auxz00_2949))->
										BgL_fzd2markzd2);
								}
								{	/* Integrate/iinfo.scm 21 */
									int BgL_auxz00_2954;

									BgL_auxz00_2954 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3268z00_1520, BgL_auxz00_2954,
										BgL_arg3721z00_1522);
							}}
							{	/* Integrate/iinfo.scm 21 */
								obj_t BgL_arg3723z00_1524;

								{
									obj_t BgL_auxz00_2957;

									{	/* Integrate/iinfo.scm 21 */
										BgL_objectz00_bglt BgL_auxz00_2958;

										BgL_auxz00_2958 =
											(BgL_objectz00_bglt) (BgL_obj3266z00_1516);
										BgL_auxz00_2957 = BGL_OBJECT_WIDENING(BgL_auxz00_2958);
									}
									BgL_arg3723z00_1524 =
										(((BgL_svarzf2iinfozf2_bglt) CREF(BgL_auxz00_2957))->
										BgL_uzd2markzd2);
								}
								{	/* Integrate/iinfo.scm 21 */
									int BgL_auxz00_2962;

									BgL_auxz00_2962 = (int) (((long) 1));
									STRUCT_SET(BgL_aux3268z00_1520, BgL_auxz00_2962,
										BgL_arg3723z00_1524);
							}}
							{	/* Integrate/iinfo.scm 21 */
								bool_t BgL_arg3725z00_1526;

								{
									obj_t BgL_auxz00_2965;

									{	/* Integrate/iinfo.scm 21 */
										BgL_objectz00_bglt BgL_auxz00_2966;

										BgL_auxz00_2966 =
											(BgL_objectz00_bglt) (BgL_obj3266z00_1516);
										BgL_auxz00_2965 = BGL_OBJECT_WIDENING(BgL_auxz00_2966);
									}
									BgL_arg3725z00_1526 =
										(((BgL_svarzf2iinfozf2_bglt) CREF(BgL_auxz00_2965))->
										BgL_kapturedzf3zf3);
								}
								{	/* Integrate/iinfo.scm 21 */
									obj_t BgL_auxz00_2972;

									int BgL_auxz00_2970;

									BgL_auxz00_2972 = BBOOL(BgL_arg3725z00_1526);
									BgL_auxz00_2970 = (int) (((long) 2));
									STRUCT_SET(BgL_aux3268z00_1520, BgL_auxz00_2970,
										BgL_auxz00_2972);
							}}
							{	/* Integrate/iinfo.scm 21 */
								bool_t BgL_arg3727z00_1528;

								{
									obj_t BgL_auxz00_2975;

									{	/* Integrate/iinfo.scm 21 */
										BgL_objectz00_bglt BgL_auxz00_2976;

										BgL_auxz00_2976 =
											(BgL_objectz00_bglt) (BgL_obj3266z00_1516);
										BgL_auxz00_2975 = BGL_OBJECT_WIDENING(BgL_auxz00_2976);
									}
									BgL_arg3727z00_1528 =
										(((BgL_svarzf2iinfozf2_bglt) CREF(BgL_auxz00_2975))->
										BgL_celledzf3zf3);
								}
								{	/* Integrate/iinfo.scm 21 */
									obj_t BgL_auxz00_2982;

									int BgL_auxz00_2980;

									BgL_auxz00_2982 = BBOOL(BgL_arg3727z00_1528);
									BgL_auxz00_2980 = (int) (((long) 3));
									STRUCT_SET(BgL_aux3268z00_1520, BgL_auxz00_2980,
										BgL_auxz00_2982);
							}}
							{	/* Integrate/iinfo.scm 21 */
								int BgL_auxz00_2985;

								BgL_auxz00_2985 = (int) (((long) 0));
								STRUCT_SET(BgL_res3267z00_1519, BgL_auxz00_2985,
									BgL_aux3268z00_1520);
							}
							{	/* Integrate/iinfo.scm 21 */
								obj_t BgL_auxz00_2988;

								BgL_auxz00_2988 = STRUCT_KEY(BgL_res3267z00_1519);
								STRUCT_KEY_SET(BgL_aux3268z00_1520, BgL_auxz00_2988);
							}
							{	/* Integrate/iinfo.scm 21 */
								obj_t BgL_kz00_2212;

								BgL_kz00_2212 = CNST_TABLE_REF(((long) 0));
								STRUCT_KEY_SET(BgL_res3267z00_1519, BgL_kz00_2212);
							}
							return BgL_res3267z00_1519;
						}
					}
				}
			}
		}
	}



/* struct+object->objec3556 */
	obj_t BGl_structzb2objectzd2ze3objec3556z83zzintegrate_infoz00(obj_t
		BgL_envz00_2381, obj_t BgL_oz00_2382, obj_t BgL_sz00_2383)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 31 */
			{
				BgL_sexitzf2iinfozf2_bglt BgL_oz00_1501;

				obj_t BgL_sz00_1502;

				{	/* Integrate/iinfo.scm 31 */
					BgL_sexitzf2iinfozf2_bglt BgL_auxz00_2994;

					BgL_oz00_1501 = (BgL_sexitzf2iinfozf2_bglt) (BgL_oz00_2382);
					BgL_sz00_1502 = BgL_sz00_2383;
					{

						{	/* Integrate/iinfo.scm 31 */
							obj_t BgL_old3319z00_1505;

							obj_t BgL_aux3320z00_1506;

							{	/* Integrate/iinfo.scm 31 */
								obj_t BgL_nextzd2method3555zd2_1514;

								BgL_nextzd2method3555zd2_1514 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1501),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_sexitzf2Iinfozf2zzintegrate_infoz00);
								if (PROCEDUREP(BgL_nextzd2method3555zd2_1514))
									{	/* Integrate/iinfo.scm 31 */
										BgL_old3319z00_1505 =
											PROCEDURE_ENTRY(BgL_nextzd2method3555zd2_1514)
											(BgL_nextzd2method3555zd2_1514, (obj_t) (BgL_oz00_1501),
											BgL_sz00_1502, BEOA);
									}
								else
									{	/* Integrate/iinfo.scm 31 */
										BgL_old3319z00_1505 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1501), BgL_sz00_1502));
									}
							}
							BgL_aux3320z00_1506 =
								STRUCT_REF(BgL_sz00_1502, (int) (((long) 0)));
							{	/* Integrate/iinfo.scm 31 */
								BgL_sexitzf2iinfozf2_bglt BgL_new3321z00_1507;

								BgL_new3321z00_1507 =
									((BgL_sexitzf2iinfozf2_bglt) (BgL_old3319z00_1505));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3321z00_1507),
									BGl_classzd2numzd2zz__objectz00
									(BGl_sexitzf2Iinfozf2zzintegrate_infoz00));
								{	/* Integrate/iinfo.scm 31 */
									BgL_sexitzf2iinfozf2_bglt BgL_arg3714z00_1509;

									{	/* Integrate/iinfo.scm 31 */
										obj_t BgL_arg3715z00_1510;

										obj_t BgL_arg3716z00_1511;

										obj_t BgL_arg3717z00_1512;

										obj_t BgL_arg3718z00_1513;

										BgL_arg3715z00_1510 =
											STRUCT_REF(BgL_aux3320z00_1506, (int) (((long) 0)));
										BgL_arg3716z00_1511 =
											STRUCT_REF(BgL_aux3320z00_1506, (int) (((long) 1)));
										BgL_arg3717z00_1512 =
											STRUCT_REF(BgL_aux3320z00_1506, (int) (((long) 2)));
										BgL_arg3718z00_1513 =
											STRUCT_REF(BgL_aux3320z00_1506, (int) (((long) 3)));
										{	/* Integrate/iinfo.scm 31 */
											BgL_sexitzf2iinfozf2_bglt BgL_res3763z00_2183;

											{	/* Integrate/iinfo.scm 31 */
												bool_t BgL_kapturedzf33293zf3_2170;

												bool_t BgL_celledzf33294zf3_2171;

												BgL_kapturedzf33293zf3_2170 =
													CBOOL(BgL_arg3717z00_1512);
												BgL_celledzf33294zf3_2171 = CBOOL(BgL_arg3718z00_1513);
												{	/* Integrate/iinfo.scm 31 */
													BgL_sexitzf2iinfozf2_bglt BgL_new3295z00_2172;

													BgL_new3295z00_2172 =
														((BgL_sexitzf2iinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_sexitzf2iinfozf2_bgl))));
													{	/* Integrate/iinfo.scm 31 */
														BgL_sexitzf2iinfozf2_bglt BgL_res3762z00_2182;

														{	/* Integrate/iinfo.scm 31 */
															BgL_sexitzf2iinfozf2_bglt BgL_new3309z00_2173;

															BgL_new3309z00_2173 = BgL_new3295z00_2172;
															{	/* Integrate/iinfo.scm 31 */
																obj_t BgL_fzd2mark3305zd2_2178;

																obj_t BgL_uzd2mark3306zd2_2179;

																bool_t BgL_kapturedzf33307zf3_2180;

																bool_t BgL_celledzf33308zf3_2181;

																BgL_fzd2mark3305zd2_2178 = BgL_arg3715z00_1510;
																BgL_uzd2mark3306zd2_2179 = BgL_arg3716z00_1511;
																BgL_kapturedzf33307zf3_2180 =
																	BgL_kapturedzf33293zf3_2170;
																BgL_celledzf33308zf3_2181 =
																	BgL_celledzf33294zf3_2171;
																((((BgL_sexitzf2iinfozf2_bglt)
																			CREF(BgL_new3309z00_2173))->
																		BgL_fzd2markzd2) =
																	((obj_t) BgL_fzd2mark3305zd2_2178), BUNSPEC);
																((((BgL_sexitzf2iinfozf2_bglt)
																			CREF(BgL_new3309z00_2173))->
																		BgL_uzd2markzd2) =
																	((obj_t) BgL_uzd2mark3306zd2_2179), BUNSPEC);
																((((BgL_sexitzf2iinfozf2_bglt)
																			CREF(BgL_new3309z00_2173))->
																		BgL_kapturedzf3zf3) =
																	((bool_t) BgL_kapturedzf33307zf3_2180),
																	BUNSPEC);
																((((BgL_sexitzf2iinfozf2_bglt)
																			CREF(BgL_new3309z00_2173))->
																		BgL_celledzf3zf3) =
																	((bool_t) BgL_celledzf33308zf3_2181),
																	BUNSPEC);
																BgL_res3762z00_2182 = BgL_new3309z00_2173;
														}} BgL_res3762z00_2182;
													}
													BgL_res3763z00_2183 = BgL_new3295z00_2172;
											}}
											BgL_arg3714z00_1509 = BgL_res3763z00_2183;
									}}
									{	/* Integrate/iinfo.scm 31 */
										obj_t BgL_auxz00_3028;

										BgL_objectz00_bglt BgL_auxz00_3026;

										BgL_auxz00_3028 = (obj_t) (BgL_arg3714z00_1509);
										BgL_auxz00_3026 =
											(BgL_objectz00_bglt) (BgL_new3321z00_1507);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3026, BgL_auxz00_3028);
								}}
								BgL_auxz00_2994 = BgL_new3321z00_1507;
					}}}
					return (obj_t) (BgL_auxz00_2994);
				}
			}
		}
	}



/* object->struct-sexit3554 */
	obj_t BGl_objectzd2ze3structzd2sexit3554ze3zzintegrate_infoz00(obj_t
		BgL_envz00_2384, obj_t BgL_obj3316z00_2385)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 31 */
			{
				BgL_sexitzf2iinfozf2_bglt BgL_obj3316z00_1485;

				BgL_obj3316z00_1485 = (BgL_sexitzf2iinfozf2_bglt) (BgL_obj3316z00_2385);
				{

					{	/* Integrate/iinfo.scm 31 */
						obj_t BgL_res3317z00_1488;

						{	/* Integrate/iinfo.scm 31 */
							obj_t BgL_nextzd2method3553zd2_1499;

							BgL_nextzd2method3553zd2_1499 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3316z00_1485),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_sexitzf2Iinfozf2zzintegrate_infoz00);
							if (PROCEDUREP(BgL_nextzd2method3553zd2_1499))
								{	/* Integrate/iinfo.scm 31 */
									BgL_res3317z00_1488 =
										PROCEDURE_ENTRY(BgL_nextzd2method3553zd2_1499)
										(BgL_nextzd2method3553zd2_1499,
										(obj_t) (BgL_obj3316z00_1485), BEOA);
								}
							else
								{	/* Integrate/iinfo.scm 31 */
									BgL_res3317z00_1488 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3316z00_1485));
								}
						}
						{	/* Integrate/iinfo.scm 31 */
							obj_t BgL_aux3318z00_1489;

							{	/* Integrate/iinfo.scm 31 */
								obj_t BgL_keyz00_2127;

								BgL_keyz00_2127 = CNST_TABLE_REF(((long) 1));
								BgL_aux3318z00_1489 =
									make_struct(BgL_keyz00_2127, (int) (((long) 4)), BUNSPEC);
							}
							{	/* Integrate/iinfo.scm 31 */
								obj_t BgL_arg3704z00_1491;

								{
									obj_t BgL_auxz00_3045;

									{	/* Integrate/iinfo.scm 31 */
										BgL_objectz00_bglt BgL_auxz00_3046;

										BgL_auxz00_3046 =
											(BgL_objectz00_bglt) (BgL_obj3316z00_1485);
										BgL_auxz00_3045 = BGL_OBJECT_WIDENING(BgL_auxz00_3046);
									}
									BgL_arg3704z00_1491 =
										(((BgL_sexitzf2iinfozf2_bglt) CREF(BgL_auxz00_3045))->
										BgL_fzd2markzd2);
								}
								{	/* Integrate/iinfo.scm 31 */
									int BgL_auxz00_3050;

									BgL_auxz00_3050 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3318z00_1489, BgL_auxz00_3050,
										BgL_arg3704z00_1491);
							}}
							{	/* Integrate/iinfo.scm 31 */
								obj_t BgL_arg3706z00_1493;

								{
									obj_t BgL_auxz00_3053;

									{	/* Integrate/iinfo.scm 31 */
										BgL_objectz00_bglt BgL_auxz00_3054;

										BgL_auxz00_3054 =
											(BgL_objectz00_bglt) (BgL_obj3316z00_1485);
										BgL_auxz00_3053 = BGL_OBJECT_WIDENING(BgL_auxz00_3054);
									}
									BgL_arg3706z00_1493 =
										(((BgL_sexitzf2iinfozf2_bglt) CREF(BgL_auxz00_3053))->
										BgL_uzd2markzd2);
								}
								{	/* Integrate/iinfo.scm 31 */
									int BgL_auxz00_3058;

									BgL_auxz00_3058 = (int) (((long) 1));
									STRUCT_SET(BgL_aux3318z00_1489, BgL_auxz00_3058,
										BgL_arg3706z00_1493);
							}}
							{	/* Integrate/iinfo.scm 31 */
								bool_t BgL_arg3708z00_1495;

								{
									obj_t BgL_auxz00_3061;

									{	/* Integrate/iinfo.scm 31 */
										BgL_objectz00_bglt BgL_auxz00_3062;

										BgL_auxz00_3062 =
											(BgL_objectz00_bglt) (BgL_obj3316z00_1485);
										BgL_auxz00_3061 = BGL_OBJECT_WIDENING(BgL_auxz00_3062);
									}
									BgL_arg3708z00_1495 =
										(((BgL_sexitzf2iinfozf2_bglt) CREF(BgL_auxz00_3061))->
										BgL_kapturedzf3zf3);
								}
								{	/* Integrate/iinfo.scm 31 */
									obj_t BgL_auxz00_3068;

									int BgL_auxz00_3066;

									BgL_auxz00_3068 = BBOOL(BgL_arg3708z00_1495);
									BgL_auxz00_3066 = (int) (((long) 2));
									STRUCT_SET(BgL_aux3318z00_1489, BgL_auxz00_3066,
										BgL_auxz00_3068);
							}}
							{	/* Integrate/iinfo.scm 31 */
								bool_t BgL_arg3710z00_1497;

								{
									obj_t BgL_auxz00_3071;

									{	/* Integrate/iinfo.scm 31 */
										BgL_objectz00_bglt BgL_auxz00_3072;

										BgL_auxz00_3072 =
											(BgL_objectz00_bglt) (BgL_obj3316z00_1485);
										BgL_auxz00_3071 = BGL_OBJECT_WIDENING(BgL_auxz00_3072);
									}
									BgL_arg3710z00_1497 =
										(((BgL_sexitzf2iinfozf2_bglt) CREF(BgL_auxz00_3071))->
										BgL_celledzf3zf3);
								}
								{	/* Integrate/iinfo.scm 31 */
									obj_t BgL_auxz00_3078;

									int BgL_auxz00_3076;

									BgL_auxz00_3078 = BBOOL(BgL_arg3710z00_1497);
									BgL_auxz00_3076 = (int) (((long) 3));
									STRUCT_SET(BgL_aux3318z00_1489, BgL_auxz00_3076,
										BgL_auxz00_3078);
							}}
							{	/* Integrate/iinfo.scm 31 */
								int BgL_auxz00_3081;

								BgL_auxz00_3081 = (int) (((long) 0));
								STRUCT_SET(BgL_res3317z00_1488, BgL_auxz00_3081,
									BgL_aux3318z00_1489);
							}
							{	/* Integrate/iinfo.scm 31 */
								obj_t BgL_auxz00_3084;

								BgL_auxz00_3084 = STRUCT_KEY(BgL_res3317z00_1488);
								STRUCT_KEY_SET(BgL_aux3318z00_1489, BgL_auxz00_3084);
							}
							{	/* Integrate/iinfo.scm 31 */
								obj_t BgL_kz00_2154;

								BgL_kz00_2154 = CNST_TABLE_REF(((long) 1));
								STRUCT_KEY_SET(BgL_res3317z00_1488, BgL_kz00_2154);
							}
							return BgL_res3317z00_1488;
						}
					}
				}
			}
		}
	}



/* struct+object->objec3552 */
	obj_t BGl_structzb2objectzd2ze3objec3552z83zzintegrate_infoz00(obj_t
		BgL_envz00_2386, obj_t BgL_oz00_2387, obj_t BgL_sz00_2388)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 41 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_oz00_1456;

				obj_t BgL_sz00_1457;

				{	/* Integrate/iinfo.scm 41 */
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3090;

					BgL_oz00_1456 = (BgL_sfunzf2iinfozf2_bglt) (BgL_oz00_2387);
					BgL_sz00_1457 = BgL_sz00_2388;
					{

						{	/* Integrate/iinfo.scm 41 */
							obj_t BgL_old3441z00_1460;

							obj_t BgL_aux3442z00_1461;

							{	/* Integrate/iinfo.scm 41 */
								obj_t BgL_nextzd2method3551zd2_1483;

								BgL_nextzd2method3551zd2_1483 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1456),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_sfunzf2Iinfozf2zzintegrate_infoz00);
								if (PROCEDUREP(BgL_nextzd2method3551zd2_1483))
									{	/* Integrate/iinfo.scm 41 */
										BgL_old3441z00_1460 =
											PROCEDURE_ENTRY(BgL_nextzd2method3551zd2_1483)
											(BgL_nextzd2method3551zd2_1483, (obj_t) (BgL_oz00_1456),
											BgL_sz00_1457, BEOA);
									}
								else
									{	/* Integrate/iinfo.scm 41 */
										BgL_old3441z00_1460 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1456), BgL_sz00_1457));
									}
							}
							BgL_aux3442z00_1461 =
								STRUCT_REF(BgL_sz00_1457, (int) (((long) 0)));
							{	/* Integrate/iinfo.scm 41 */
								BgL_sfunzf2iinfozf2_bglt BgL_new3443z00_1462;

								BgL_new3443z00_1462 =
									((BgL_sfunzf2iinfozf2_bglt) (BgL_old3441z00_1460));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3443z00_1462),
									BGl_classzd2numzd2zz__objectz00
									(BGl_sfunzf2Iinfozf2zzintegrate_infoz00));
								{	/* Integrate/iinfo.scm 41 */
									BgL_sfunzf2iinfozf2_bglt BgL_arg3683z00_1464;

									{	/* Integrate/iinfo.scm 41 */
										obj_t BgL_arg3684z00_1465;

										obj_t BgL_arg3685z00_1466;

										obj_t BgL_arg3686z00_1467;

										obj_t BgL_arg3687z00_1468;

										obj_t BgL_arg3688z00_1469;

										obj_t BgL_arg3689z00_1470;

										obj_t BgL_arg3690z00_1471;

										obj_t BgL_arg3691z00_1472;

										obj_t BgL_arg3692z00_1473;

										obj_t BgL_arg3693z00_1474;

										obj_t BgL_arg3694z00_1475;

										obj_t BgL_arg3695z00_1476;

										obj_t BgL_arg3696z00_1477;

										obj_t BgL_arg3697z00_1478;

										obj_t BgL_arg3698z00_1479;

										obj_t BgL_arg3699z00_1480;

										obj_t BgL_arg3700z00_1481;

										obj_t BgL_arg3701z00_1482;

										BgL_arg3684z00_1465 =
											STRUCT_REF(BgL_aux3442z00_1461, (int) (((long) 0)));
										BgL_arg3685z00_1466 =
											STRUCT_REF(BgL_aux3442z00_1461, (int) (((long) 1)));
										BgL_arg3686z00_1467 =
											STRUCT_REF(BgL_aux3442z00_1461, (int) (((long) 2)));
										BgL_arg3687z00_1468 =
											STRUCT_REF(BgL_aux3442z00_1461, (int) (((long) 3)));
										BgL_arg3688z00_1469 =
											STRUCT_REF(BgL_aux3442z00_1461, (int) (((long) 4)));
										BgL_arg3689z00_1470 =
											STRUCT_REF(BgL_aux3442z00_1461, (int) (((long) 5)));
										BgL_arg3690z00_1471 =
											STRUCT_REF(BgL_aux3442z00_1461, (int) (((long) 6)));
										BgL_arg3691z00_1472 =
											STRUCT_REF(BgL_aux3442z00_1461, (int) (((long) 7)));
										BgL_arg3692z00_1473 =
											STRUCT_REF(BgL_aux3442z00_1461, (int) (((long) 8)));
										BgL_arg3693z00_1474 =
											STRUCT_REF(BgL_aux3442z00_1461, (int) (((long) 9)));
										BgL_arg3694z00_1475 =
											STRUCT_REF(BgL_aux3442z00_1461, (int) (((long) 10)));
										BgL_arg3695z00_1476 =
											STRUCT_REF(BgL_aux3442z00_1461, (int) (((long) 11)));
										BgL_arg3696z00_1477 =
											STRUCT_REF(BgL_aux3442z00_1461, (int) (((long) 12)));
										BgL_arg3697z00_1478 =
											STRUCT_REF(BgL_aux3442z00_1461, (int) (((long) 13)));
										BgL_arg3698z00_1479 =
											STRUCT_REF(BgL_aux3442z00_1461, (int) (((long) 14)));
										BgL_arg3699z00_1480 =
											STRUCT_REF(BgL_aux3442z00_1461, (int) (((long) 15)));
										BgL_arg3700z00_1481 =
											STRUCT_REF(BgL_aux3442z00_1461, (int) (((long) 16)));
										BgL_arg3701z00_1482 =
											STRUCT_REF(BgL_aux3442z00_1461, (int) (((long) 17)));
										{	/* Integrate/iinfo.scm 41 */
											BgL_sfunzf2iinfozf2_bglt BgL_res3760z00_2125;

											{	/* Integrate/iinfo.scm 41 */
												bool_t BgL_gzf33353zf3_2079;

												BgL_gzf33353zf3_2079 = CBOOL(BgL_arg3695z00_1476);
												{	/* Integrate/iinfo.scm 41 */
													BgL_sfunzf2iinfozf2_bglt BgL_new3360z00_2086;

													BgL_new3360z00_2086 =
														((BgL_sfunzf2iinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_sfunzf2iinfozf2_bgl))));
													{	/* Integrate/iinfo.scm 41 */
														BgL_sfunzf2iinfozf2_bglt BgL_res3759z00_2124;

														{	/* Integrate/iinfo.scm 41 */
															BgL_sfunzf2iinfozf2_bglt BgL_new3417z00_2087;

															BgL_new3417z00_2087 = BgL_new3360z00_2086;
															{	/* Integrate/iinfo.scm 41 */
																obj_t BgL_owner3399z00_2106;

																obj_t BgL_free3400z00_2107;

																obj_t BgL_bound3401z00_2108;

																obj_t BgL_cfrom3402z00_2109;

																obj_t BgL_cto3403z00_2110;

																obj_t BgL_k3404z00_2111;

																obj_t BgL_kza23405za2_2112;

																obj_t BgL_u3406z00_2113;

																obj_t BgL_cn3407z00_2114;

																obj_t BgL_ct3408z00_2115;

																obj_t BgL_kont3409z00_2116;

																bool_t BgL_gzf33410zf3_2117;

																obj_t BgL_l3411z00_2118;

																obj_t BgL_led3412z00_2119;

																obj_t BgL_istamp3413z00_2120;

																obj_t BgL_global3414z00_2121;

																obj_t BgL_kaptured3415z00_2122;

																obj_t BgL_tailzd2coercion3416zd2_2123;

																BgL_owner3399z00_2106 = BgL_arg3684z00_1465;
																BgL_free3400z00_2107 = BgL_arg3685z00_1466;
																BgL_bound3401z00_2108 = BgL_arg3686z00_1467;
																BgL_cfrom3402z00_2109 = BgL_arg3687z00_1468;
																BgL_cto3403z00_2110 = BgL_arg3688z00_1469;
																BgL_k3404z00_2111 = BgL_arg3689z00_1470;
																BgL_kza23405za2_2112 = BgL_arg3690z00_1471;
																BgL_u3406z00_2113 = BgL_arg3691z00_1472;
																BgL_cn3407z00_2114 = BgL_arg3692z00_1473;
																BgL_ct3408z00_2115 = BgL_arg3693z00_1474;
																BgL_kont3409z00_2116 = BgL_arg3694z00_1475;
																BgL_gzf33410zf3_2117 = BgL_gzf33353zf3_2079;
																BgL_l3411z00_2118 = BgL_arg3696z00_1477;
																BgL_led3412z00_2119 = BgL_arg3697z00_1478;
																BgL_istamp3413z00_2120 = BgL_arg3698z00_1479;
																BgL_global3414z00_2121 = BgL_arg3699z00_1480;
																BgL_kaptured3415z00_2122 = BgL_arg3700z00_1481;
																BgL_tailzd2coercion3416zd2_2123 =
																	BgL_arg3701z00_1482;
																((((BgL_sfunzf2iinfozf2_bglt)
																			CREF(BgL_new3417z00_2087))->
																		BgL_ownerz00) =
																	((obj_t) BgL_owner3399z00_2106), BUNSPEC);
																((((BgL_sfunzf2iinfozf2_bglt)
																			CREF(BgL_new3417z00_2087))->BgL_freez00) =
																	((obj_t) BgL_free3400z00_2107), BUNSPEC);
																((((BgL_sfunzf2iinfozf2_bglt)
																			CREF(BgL_new3417z00_2087))->
																		BgL_boundz00) =
																	((obj_t) BgL_bound3401z00_2108), BUNSPEC);
																((((BgL_sfunzf2iinfozf2_bglt)
																			CREF(BgL_new3417z00_2087))->
																		BgL_cfromz00) =
																	((obj_t) BgL_cfrom3402z00_2109), BUNSPEC);
																((((BgL_sfunzf2iinfozf2_bglt)
																			CREF(BgL_new3417z00_2087))->BgL_ctoz00) =
																	((obj_t) BgL_cto3403z00_2110), BUNSPEC);
																((((BgL_sfunzf2iinfozf2_bglt)
																			CREF(BgL_new3417z00_2087))->BgL_kz00) =
																	((obj_t) BgL_k3404z00_2111), BUNSPEC);
																((((BgL_sfunzf2iinfozf2_bglt)
																			CREF(BgL_new3417z00_2087))->BgL_kza2za2) =
																	((obj_t) BgL_kza23405za2_2112), BUNSPEC);
																((((BgL_sfunzf2iinfozf2_bglt)
																			CREF(BgL_new3417z00_2087))->BgL_uz00) =
																	((obj_t) BgL_u3406z00_2113), BUNSPEC);
																((((BgL_sfunzf2iinfozf2_bglt)
																			CREF(BgL_new3417z00_2087))->BgL_cnz00) =
																	((obj_t) BgL_cn3407z00_2114), BUNSPEC);
																((((BgL_sfunzf2iinfozf2_bglt)
																			CREF(BgL_new3417z00_2087))->BgL_ctz00) =
																	((obj_t) BgL_ct3408z00_2115), BUNSPEC);
																((((BgL_sfunzf2iinfozf2_bglt)
																			CREF(BgL_new3417z00_2087))->BgL_kontz00) =
																	((obj_t) BgL_kont3409z00_2116), BUNSPEC);
																((((BgL_sfunzf2iinfozf2_bglt)
																			CREF(BgL_new3417z00_2087))->BgL_gzf3zf3) =
																	((bool_t) BgL_gzf33410zf3_2117), BUNSPEC);
																((((BgL_sfunzf2iinfozf2_bglt)
																			CREF(BgL_new3417z00_2087))->BgL_lz00) =
																	((obj_t) BgL_l3411z00_2118), BUNSPEC);
																((((BgL_sfunzf2iinfozf2_bglt)
																			CREF(BgL_new3417z00_2087))->BgL_ledz00) =
																	((obj_t) BgL_led3412z00_2119), BUNSPEC);
																((((BgL_sfunzf2iinfozf2_bglt)
																			CREF(BgL_new3417z00_2087))->
																		BgL_istampz00) =
																	((obj_t) BgL_istamp3413z00_2120), BUNSPEC);
																((((BgL_sfunzf2iinfozf2_bglt)
																			CREF(BgL_new3417z00_2087))->
																		BgL_globalz00) =
																	((obj_t) BgL_global3414z00_2121), BUNSPEC);
																((((BgL_sfunzf2iinfozf2_bglt)
																			CREF(BgL_new3417z00_2087))->
																		BgL_kapturedz00) =
																	((obj_t) BgL_kaptured3415z00_2122), BUNSPEC);
																((((BgL_sfunzf2iinfozf2_bglt)
																			CREF(BgL_new3417z00_2087))->
																		BgL_tailzd2coercionzd2) =
																	((obj_t) BgL_tailzd2coercion3416zd2_2123),
																	BUNSPEC);
																BgL_res3759z00_2124 = BgL_new3417z00_2087;
														}} BgL_res3759z00_2124;
													}
													BgL_res3760z00_2125 = BgL_new3360z00_2086;
											}}
											BgL_arg3683z00_1464 = BgL_res3760z00_2125;
									}}
									{	/* Integrate/iinfo.scm 41 */
										obj_t BgL_auxz00_3165;

										BgL_objectz00_bglt BgL_auxz00_3163;

										BgL_auxz00_3165 = (obj_t) (BgL_arg3683z00_1464);
										BgL_auxz00_3163 =
											(BgL_objectz00_bglt) (BgL_new3443z00_1462);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3163, BgL_auxz00_3165);
								}}
								BgL_auxz00_3090 = BgL_new3443z00_1462;
					}}}
					return (obj_t) (BgL_auxz00_3090);
				}
			}
		}
	}



/* object->struct-sfun/3550 */
	obj_t BGl_objectzd2ze3structzd2sfunzf23550z11zzintegrate_infoz00(obj_t
		BgL_envz00_2389, obj_t BgL_obj3438z00_2390)
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 41 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_obj3438z00_1412;

				BgL_obj3438z00_1412 = (BgL_sfunzf2iinfozf2_bglt) (BgL_obj3438z00_2390);
				{

					{	/* Integrate/iinfo.scm 41 */
						obj_t BgL_res3439z00_1415;

						{	/* Integrate/iinfo.scm 41 */
							obj_t BgL_nextzd2method3549zd2_1454;

							BgL_nextzd2method3549zd2_1454 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3438z00_1412),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_sfunzf2Iinfozf2zzintegrate_infoz00);
							if (PROCEDUREP(BgL_nextzd2method3549zd2_1454))
								{	/* Integrate/iinfo.scm 41 */
									BgL_res3439z00_1415 =
										PROCEDURE_ENTRY(BgL_nextzd2method3549zd2_1454)
										(BgL_nextzd2method3549zd2_1454,
										(obj_t) (BgL_obj3438z00_1412), BEOA);
								}
							else
								{	/* Integrate/iinfo.scm 41 */
									BgL_res3439z00_1415 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3438z00_1412));
								}
						}
						{	/* Integrate/iinfo.scm 41 */
							obj_t BgL_aux3440z00_1416;

							{	/* Integrate/iinfo.scm 41 */
								obj_t BgL_keyz00_1943;

								BgL_keyz00_1943 = CNST_TABLE_REF(((long) 2));
								BgL_aux3440z00_1416 =
									make_struct(BgL_keyz00_1943, (int) (((long) 18)), BUNSPEC);
							}
							{	/* Integrate/iinfo.scm 41 */
								obj_t BgL_arg3643z00_1418;

								{
									obj_t BgL_auxz00_3182;

									{	/* Integrate/iinfo.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_3183;

										BgL_auxz00_3183 =
											(BgL_objectz00_bglt) (BgL_obj3438z00_1412);
										BgL_auxz00_3182 = BGL_OBJECT_WIDENING(BgL_auxz00_3183);
									}
									BgL_arg3643z00_1418 =
										(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3182))->
										BgL_ownerz00);
								}
								{	/* Integrate/iinfo.scm 41 */
									int BgL_auxz00_3187;

									BgL_auxz00_3187 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3440z00_1416, BgL_auxz00_3187,
										BgL_arg3643z00_1418);
							}}
							{	/* Integrate/iinfo.scm 41 */
								obj_t BgL_arg3645z00_1420;

								{
									obj_t BgL_auxz00_3190;

									{	/* Integrate/iinfo.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_3191;

										BgL_auxz00_3191 =
											(BgL_objectz00_bglt) (BgL_obj3438z00_1412);
										BgL_auxz00_3190 = BGL_OBJECT_WIDENING(BgL_auxz00_3191);
									}
									BgL_arg3645z00_1420 =
										(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3190))->
										BgL_freez00);
								}
								{	/* Integrate/iinfo.scm 41 */
									int BgL_auxz00_3195;

									BgL_auxz00_3195 = (int) (((long) 1));
									STRUCT_SET(BgL_aux3440z00_1416, BgL_auxz00_3195,
										BgL_arg3645z00_1420);
							}}
							{	/* Integrate/iinfo.scm 41 */
								obj_t BgL_arg3647z00_1422;

								{
									obj_t BgL_auxz00_3198;

									{	/* Integrate/iinfo.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_3199;

										BgL_auxz00_3199 =
											(BgL_objectz00_bglt) (BgL_obj3438z00_1412);
										BgL_auxz00_3198 = BGL_OBJECT_WIDENING(BgL_auxz00_3199);
									}
									BgL_arg3647z00_1422 =
										(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3198))->
										BgL_boundz00);
								}
								{	/* Integrate/iinfo.scm 41 */
									int BgL_auxz00_3203;

									BgL_auxz00_3203 = (int) (((long) 2));
									STRUCT_SET(BgL_aux3440z00_1416, BgL_auxz00_3203,
										BgL_arg3647z00_1422);
							}}
							{	/* Integrate/iinfo.scm 41 */
								obj_t BgL_arg3649z00_1424;

								{
									obj_t BgL_auxz00_3206;

									{	/* Integrate/iinfo.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_3207;

										BgL_auxz00_3207 =
											(BgL_objectz00_bglt) (BgL_obj3438z00_1412);
										BgL_auxz00_3206 = BGL_OBJECT_WIDENING(BgL_auxz00_3207);
									}
									BgL_arg3649z00_1424 =
										(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3206))->
										BgL_cfromz00);
								}
								{	/* Integrate/iinfo.scm 41 */
									int BgL_auxz00_3211;

									BgL_auxz00_3211 = (int) (((long) 3));
									STRUCT_SET(BgL_aux3440z00_1416, BgL_auxz00_3211,
										BgL_arg3649z00_1424);
							}}
							{	/* Integrate/iinfo.scm 41 */
								obj_t BgL_arg3651z00_1426;

								{
									obj_t BgL_auxz00_3214;

									{	/* Integrate/iinfo.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_3215;

										BgL_auxz00_3215 =
											(BgL_objectz00_bglt) (BgL_obj3438z00_1412);
										BgL_auxz00_3214 = BGL_OBJECT_WIDENING(BgL_auxz00_3215);
									}
									BgL_arg3651z00_1426 =
										(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3214))->
										BgL_ctoz00);
								}
								{	/* Integrate/iinfo.scm 41 */
									int BgL_auxz00_3219;

									BgL_auxz00_3219 = (int) (((long) 4));
									STRUCT_SET(BgL_aux3440z00_1416, BgL_auxz00_3219,
										BgL_arg3651z00_1426);
							}}
							{	/* Integrate/iinfo.scm 41 */
								obj_t BgL_arg3653z00_1428;

								{
									obj_t BgL_auxz00_3222;

									{	/* Integrate/iinfo.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_3223;

										BgL_auxz00_3223 =
											(BgL_objectz00_bglt) (BgL_obj3438z00_1412);
										BgL_auxz00_3222 = BGL_OBJECT_WIDENING(BgL_auxz00_3223);
									}
									BgL_arg3653z00_1428 =
										(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3222))->
										BgL_kz00);
								}
								{	/* Integrate/iinfo.scm 41 */
									int BgL_auxz00_3227;

									BgL_auxz00_3227 = (int) (((long) 5));
									STRUCT_SET(BgL_aux3440z00_1416, BgL_auxz00_3227,
										BgL_arg3653z00_1428);
							}}
							{	/* Integrate/iinfo.scm 41 */
								obj_t BgL_arg3655z00_1430;

								{
									obj_t BgL_auxz00_3230;

									{	/* Integrate/iinfo.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_3231;

										BgL_auxz00_3231 =
											(BgL_objectz00_bglt) (BgL_obj3438z00_1412);
										BgL_auxz00_3230 = BGL_OBJECT_WIDENING(BgL_auxz00_3231);
									}
									BgL_arg3655z00_1430 =
										(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3230))->
										BgL_kza2za2);
								}
								{	/* Integrate/iinfo.scm 41 */
									int BgL_auxz00_3235;

									BgL_auxz00_3235 = (int) (((long) 6));
									STRUCT_SET(BgL_aux3440z00_1416, BgL_auxz00_3235,
										BgL_arg3655z00_1430);
							}}
							{	/* Integrate/iinfo.scm 41 */
								obj_t BgL_arg3657z00_1432;

								{
									obj_t BgL_auxz00_3238;

									{	/* Integrate/iinfo.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_3239;

										BgL_auxz00_3239 =
											(BgL_objectz00_bglt) (BgL_obj3438z00_1412);
										BgL_auxz00_3238 = BGL_OBJECT_WIDENING(BgL_auxz00_3239);
									}
									BgL_arg3657z00_1432 =
										(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3238))->
										BgL_uz00);
								}
								{	/* Integrate/iinfo.scm 41 */
									int BgL_auxz00_3243;

									BgL_auxz00_3243 = (int) (((long) 7));
									STRUCT_SET(BgL_aux3440z00_1416, BgL_auxz00_3243,
										BgL_arg3657z00_1432);
							}}
							{	/* Integrate/iinfo.scm 41 */
								obj_t BgL_arg3659z00_1434;

								{
									obj_t BgL_auxz00_3246;

									{	/* Integrate/iinfo.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_3247;

										BgL_auxz00_3247 =
											(BgL_objectz00_bglt) (BgL_obj3438z00_1412);
										BgL_auxz00_3246 = BGL_OBJECT_WIDENING(BgL_auxz00_3247);
									}
									BgL_arg3659z00_1434 =
										(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3246))->
										BgL_cnz00);
								}
								{	/* Integrate/iinfo.scm 41 */
									int BgL_auxz00_3251;

									BgL_auxz00_3251 = (int) (((long) 8));
									STRUCT_SET(BgL_aux3440z00_1416, BgL_auxz00_3251,
										BgL_arg3659z00_1434);
							}}
							{	/* Integrate/iinfo.scm 41 */
								obj_t BgL_arg3661z00_1436;

								{
									obj_t BgL_auxz00_3254;

									{	/* Integrate/iinfo.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_3255;

										BgL_auxz00_3255 =
											(BgL_objectz00_bglt) (BgL_obj3438z00_1412);
										BgL_auxz00_3254 = BGL_OBJECT_WIDENING(BgL_auxz00_3255);
									}
									BgL_arg3661z00_1436 =
										(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3254))->
										BgL_ctz00);
								}
								{	/* Integrate/iinfo.scm 41 */
									int BgL_auxz00_3259;

									BgL_auxz00_3259 = (int) (((long) 9));
									STRUCT_SET(BgL_aux3440z00_1416, BgL_auxz00_3259,
										BgL_arg3661z00_1436);
							}}
							{	/* Integrate/iinfo.scm 41 */
								obj_t BgL_arg3663z00_1438;

								{
									obj_t BgL_auxz00_3262;

									{	/* Integrate/iinfo.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_3263;

										BgL_auxz00_3263 =
											(BgL_objectz00_bglt) (BgL_obj3438z00_1412);
										BgL_auxz00_3262 = BGL_OBJECT_WIDENING(BgL_auxz00_3263);
									}
									BgL_arg3663z00_1438 =
										(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3262))->
										BgL_kontz00);
								}
								{	/* Integrate/iinfo.scm 41 */
									int BgL_auxz00_3267;

									BgL_auxz00_3267 = (int) (((long) 10));
									STRUCT_SET(BgL_aux3440z00_1416, BgL_auxz00_3267,
										BgL_arg3663z00_1438);
							}}
							{	/* Integrate/iinfo.scm 41 */
								bool_t BgL_arg3665z00_1440;

								{
									obj_t BgL_auxz00_3270;

									{	/* Integrate/iinfo.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_3271;

										BgL_auxz00_3271 =
											(BgL_objectz00_bglt) (BgL_obj3438z00_1412);
										BgL_auxz00_3270 = BGL_OBJECT_WIDENING(BgL_auxz00_3271);
									}
									BgL_arg3665z00_1440 =
										(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3270))->
										BgL_gzf3zf3);
								}
								{	/* Integrate/iinfo.scm 41 */
									obj_t BgL_auxz00_3277;

									int BgL_auxz00_3275;

									BgL_auxz00_3277 = BBOOL(BgL_arg3665z00_1440);
									BgL_auxz00_3275 = (int) (((long) 11));
									STRUCT_SET(BgL_aux3440z00_1416, BgL_auxz00_3275,
										BgL_auxz00_3277);
							}}
							{	/* Integrate/iinfo.scm 41 */
								obj_t BgL_arg3667z00_1442;

								{
									obj_t BgL_auxz00_3280;

									{	/* Integrate/iinfo.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_3281;

										BgL_auxz00_3281 =
											(BgL_objectz00_bglt) (BgL_obj3438z00_1412);
										BgL_auxz00_3280 = BGL_OBJECT_WIDENING(BgL_auxz00_3281);
									}
									BgL_arg3667z00_1442 =
										(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3280))->
										BgL_lz00);
								}
								{	/* Integrate/iinfo.scm 41 */
									int BgL_auxz00_3285;

									BgL_auxz00_3285 = (int) (((long) 12));
									STRUCT_SET(BgL_aux3440z00_1416, BgL_auxz00_3285,
										BgL_arg3667z00_1442);
							}}
							{	/* Integrate/iinfo.scm 41 */
								obj_t BgL_arg3670z00_1444;

								{
									obj_t BgL_auxz00_3288;

									{	/* Integrate/iinfo.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_3289;

										BgL_auxz00_3289 =
											(BgL_objectz00_bglt) (BgL_obj3438z00_1412);
										BgL_auxz00_3288 = BGL_OBJECT_WIDENING(BgL_auxz00_3289);
									}
									BgL_arg3670z00_1444 =
										(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3288))->
										BgL_ledz00);
								}
								{	/* Integrate/iinfo.scm 41 */
									int BgL_auxz00_3293;

									BgL_auxz00_3293 = (int) (((long) 13));
									STRUCT_SET(BgL_aux3440z00_1416, BgL_auxz00_3293,
										BgL_arg3670z00_1444);
							}}
							{	/* Integrate/iinfo.scm 41 */
								obj_t BgL_arg3672z00_1446;

								{
									obj_t BgL_auxz00_3296;

									{	/* Integrate/iinfo.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_3297;

										BgL_auxz00_3297 =
											(BgL_objectz00_bglt) (BgL_obj3438z00_1412);
										BgL_auxz00_3296 = BGL_OBJECT_WIDENING(BgL_auxz00_3297);
									}
									BgL_arg3672z00_1446 =
										(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3296))->
										BgL_istampz00);
								}
								{	/* Integrate/iinfo.scm 41 */
									int BgL_auxz00_3301;

									BgL_auxz00_3301 = (int) (((long) 14));
									STRUCT_SET(BgL_aux3440z00_1416, BgL_auxz00_3301,
										BgL_arg3672z00_1446);
							}}
							{	/* Integrate/iinfo.scm 41 */
								obj_t BgL_arg3674z00_1448;

								{
									obj_t BgL_auxz00_3304;

									{	/* Integrate/iinfo.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_3305;

										BgL_auxz00_3305 =
											(BgL_objectz00_bglt) (BgL_obj3438z00_1412);
										BgL_auxz00_3304 = BGL_OBJECT_WIDENING(BgL_auxz00_3305);
									}
									BgL_arg3674z00_1448 =
										(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3304))->
										BgL_globalz00);
								}
								{	/* Integrate/iinfo.scm 41 */
									int BgL_auxz00_3309;

									BgL_auxz00_3309 = (int) (((long) 15));
									STRUCT_SET(BgL_aux3440z00_1416, BgL_auxz00_3309,
										BgL_arg3674z00_1448);
							}}
							{	/* Integrate/iinfo.scm 41 */
								obj_t BgL_arg3677z00_1450;

								{
									obj_t BgL_auxz00_3312;

									{	/* Integrate/iinfo.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_3313;

										BgL_auxz00_3313 =
											(BgL_objectz00_bglt) (BgL_obj3438z00_1412);
										BgL_auxz00_3312 = BGL_OBJECT_WIDENING(BgL_auxz00_3313);
									}
									BgL_arg3677z00_1450 =
										(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3312))->
										BgL_kapturedz00);
								}
								{	/* Integrate/iinfo.scm 41 */
									int BgL_auxz00_3317;

									BgL_auxz00_3317 = (int) (((long) 16));
									STRUCT_SET(BgL_aux3440z00_1416, BgL_auxz00_3317,
										BgL_arg3677z00_1450);
							}}
							{	/* Integrate/iinfo.scm 41 */
								obj_t BgL_arg3679z00_1452;

								{
									obj_t BgL_auxz00_3320;

									{	/* Integrate/iinfo.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_3321;

										BgL_auxz00_3321 =
											(BgL_objectz00_bglt) (BgL_obj3438z00_1412);
										BgL_auxz00_3320 = BGL_OBJECT_WIDENING(BgL_auxz00_3321);
									}
									BgL_arg3679z00_1452 =
										(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3320))->
										BgL_tailzd2coercionzd2);
								}
								{	/* Integrate/iinfo.scm 41 */
									int BgL_auxz00_3325;

									BgL_auxz00_3325 = (int) (((long) 17));
									STRUCT_SET(BgL_aux3440z00_1416, BgL_auxz00_3325,
										BgL_arg3679z00_1452);
							}}
							{	/* Integrate/iinfo.scm 41 */
								int BgL_auxz00_3328;

								BgL_auxz00_3328 = (int) (((long) 0));
								STRUCT_SET(BgL_res3439z00_1415, BgL_auxz00_3328,
									BgL_aux3440z00_1416);
							}
							{	/* Integrate/iinfo.scm 41 */
								obj_t BgL_auxz00_3331;

								BgL_auxz00_3331 = STRUCT_KEY(BgL_res3439z00_1415);
								STRUCT_KEY_SET(BgL_aux3440z00_1416, BgL_auxz00_3331);
							}
							{	/* Integrate/iinfo.scm 41 */
								obj_t BgL_kz00_2026;

								BgL_kz00_2026 = CNST_TABLE_REF(((long) 2));
								STRUCT_KEY_SET(BgL_res3439z00_1415, BgL_kz00_2026);
							}
							return BgL_res3439z00_1415;
						}
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_infoz00()
	{
		AN_OBJECT;
		{	/* Integrate/iinfo.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3778z00zzintegrate_infoz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3778z00zzintegrate_infoz00));
			return
				BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3778z00zzintegrate_infoz00));
		}
	}

#ifdef __cplusplus
}
#endif
