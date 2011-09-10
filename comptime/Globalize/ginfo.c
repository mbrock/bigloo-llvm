/*===========================================================================*/
/*   (Globalize/ginfo.scm)                                                   */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/ginfo.scm)*/
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

	typedef struct BgL_valuez00_bgl
	{
		header_t header;
		obj_t widening;
	}               *BgL_valuez00_bglt;

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

	typedef struct BgL_localz00_bgl
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
		bool_t BgL_userzf3zf3;
		long BgL_keyz00;
	}               *BgL_localz00_bglt;

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

	typedef struct BgL_sfunzf2ginfozf2_bgl
	{
		bool_t BgL_gzf3zf3;
		obj_t BgL_cfromz00;
		obj_t BgL_cfromza2za2;
		obj_t BgL_ctoz00;
		obj_t BgL_ctoza2za2;
		obj_t BgL_cfunctionz00;
		obj_t BgL_integratorz00;
		obj_t BgL_imarkz00;
		obj_t BgL_ownerz00;
		obj_t BgL_integratedz00;
		obj_t BgL_pluggedzd2inzd2;
		long BgL_markz00;
		obj_t BgL_freezd2markzd2;
		obj_t BgL_thezd2globalzd2;
		obj_t BgL_kapturedz00;
		obj_t BgL_newzd2bodyzd2;
		long BgL_bmarkz00;
		long BgL_umarkz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
	}                      *BgL_sfunzf2ginfozf2_bglt;

	typedef struct BgL_svarzf2ginfozf2_bgl
	{
		bool_t BgL_kapturedzf3zf3;
		long BgL_freezd2markzd2;
		long BgL_markz00;
		bool_t BgL_celledzf3zf3;
	}                      *BgL_svarzf2ginfozf2_bglt;

	typedef struct BgL_sexitzf2ginfozf2_bgl
	{
		bool_t BgL_gzf3zf3;
		bool_t BgL_kapturedzf3zf3;
		long BgL_freezd2markzd2;
		long BgL_markz00;
	}                       *BgL_sexitzf2ginfozf2_bglt;

	typedef struct BgL_localzf2ginfozf2_bgl
	{
		bool_t BgL_escapezf3zf3;
		bool_t BgL_globaliza7edzf3z54;
	}                       *BgL_localzf2ginfozf2_bglt;

	typedef struct BgL_globalzf2ginfozf2_bgl
	{
		bool_t BgL_escapezf3zf3;
		obj_t BgL_globalzd2closurezd2;
	}                        *BgL_globalzf2ginfozf2_bglt;


	static obj_t BGl__fillzd2globalzf2Ginfoz12z32zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__sfunzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t, obj_t);
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_svarzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl__z52allocatezd2sexitzf2Ginfoz72zzglobaliza7e_ginfoza7(obj_t);
	extern BgL_localz00_bglt BGl_makezd2localzd2zzast_varz00(obj_t, obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, bool_t,
		long);
	static obj_t BGl__fillzd2svarzf2Ginfoz12z32zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_globalzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t
		BGl_objectzd2ze3structzd2local3728ze3zzglobaliza7e_ginfoza7(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalzf2ginfozf2_bglt
		BGl_fillzd2globalzf2Ginfoz12z32zzglobaliza7e_ginfoza7
		(BgL_globalzf2ginfozf2_bglt, bool_t, obj_t);
	static obj_t BGl__z52allocatezd2localzf2Ginfoz72zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl__sexitzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	static obj_t BGl__makezd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_svarz00zzast_varz00;
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_localzf2ginfozf2_bglt
		BGl_fillzd2localzf2Ginfoz12z32zzglobaliza7e_ginfoza7
		(BgL_localzf2ginfozf2_bglt, bool_t, bool_t);
	static obj_t
		BGl_structzb2objectzd2ze3objec3725z83zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl__sexitzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7(obj_t);
	static obj_t
		BGl_structzb2objectzd2ze3objec3730z83zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_structzb2objectzd2ze3objec3735z83zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_structzb2objectzd2ze3objec3741z83zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_structzb2objectzd2ze3objec3745z83zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_globalzf2ginfozf2_bglt
		BGl_wideningzd2globalzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t, obj_t);
	BGL_EXPORTED_DECL BgL_sfunz00_bglt
		BGl_z52allocatezd2sfunzf2Ginfoz72zzglobaliza7e_ginfoza7();
	static obj_t BGl__wideningzd2sexitzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_localzf2ginfozf2_bglt
		BGl_localzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7();
	static obj_t BGl_cnstzd2initzd2zzglobaliza7e_ginfoza7();
	extern BgL_valuez00_bglt BGl_valuezd2nilzd2zzast_varz00();
	static obj_t BGl__wideningzd2localzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl__svarzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl__svarzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7(obj_t);
	static obj_t
		BGl_objectzd2ze3structzd2svarzf23738z11zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z52thezd2svarzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7 =
		BUNSPEC;
	static obj_t BGl__fillzd2localzf2Ginfoz12z32zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7 = BUNSPEC;
	static obj_t BGl_z52thezd2sexitzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7 =
		BUNSPEC;
	BGL_EXPORTED_DECL BgL_sexitz00_bglt
		BGl_z52allocatezd2sexitzf2Ginfoz72zzglobaliza7e_ginfoza7();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl__wideningzd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzglobaliza7e_ginfoza7();
	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_z52allocatezd2localzf2Ginfoz72zzglobaliza7e_ginfoza7();
	static obj_t BGl__makezd2sfunzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_sexitzf2ginfozf2_bglt
		BGl_makezd2sexitzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t, bool_t, bool_t,
		bool_t, long, long);
	static obj_t BGl__localzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalzf2ginfozf2_bglt
		BGl_globalzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7();
	BGL_EXPORTED_DECL BgL_localzf2ginfozf2_bglt
		BGl_makezd2localzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t, obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, bool_t,
		long, bool_t, bool_t);
	extern BgL_sfunz00_bglt BGl_makezd2sfunzd2zzast_varz00(long, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__wideningzd2sfunzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2svarzf2Ginfoz72zzglobaliza7e_ginfoza7(obj_t);
	BGL_EXPORTED_DECL BgL_sfunzf2ginfozf2_bglt
		BGl_sfunzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7();
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_ginfoza7();
	BGL_EXPORTED_DECL BgL_svarzf2ginfozf2_bglt
		BGl_makezd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t, bool_t, long, long,
		bool_t);
	BGL_EXPORTED_DECL BgL_sexitzf2ginfozf2_bglt
		BGl_sexitzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7();
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzglobaliza7e_ginfoza7 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7 = BUNSPEC;
	static obj_t BGl__makezd2sexitzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__globalzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_ginfoza7();
	static obj_t BGl__makezd2localzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_globalzf2ginfozf2_bglt
		BGl_makezd2globalzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t, obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, obj_t,
		obj_t, bool_t, obj_t, bool_t, obj_t, obj_t, obj_t, bool_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_EXPORTED_DECL BgL_sexitzf2ginfozf2_bglt
		BGl_wideningzd2sexitzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t, bool_t, long,
		long);
	BGL_EXPORTED_DECL bool_t BGl_sexitzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t);
	BGL_EXPORTED_DECL BgL_sfunzf2ginfozf2_bglt
		BGl_fillzd2sfunzf2Ginfoz12z32zzglobaliza7e_ginfoza7
		(BgL_sfunzf2ginfozf2_bglt, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t, obj_t, long, long,
		obj_t, obj_t);
	extern obj_t BGl_sexitz00zzast_varz00;
	BGL_EXPORTED_DECL BgL_localzf2ginfozf2_bglt
		BGl_wideningzd2localzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t, bool_t);
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	static obj_t BGl__z52allocatezd2sfunzf2Ginfoz72zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl_z52thezd2globalzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7 =
		BUNSPEC;
	static obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_ginfoza7();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t
		BGl_objectzd2ze3structzd2sexit3732ze3zzglobaliza7e_ginfoza7(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_sfunzf2ginfozf2_bglt
		BGl_makezd2sfunzf2Ginfoz20zzglobaliza7e_ginfoza7(long, obj_t, obj_t, obj_t,
		bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t, obj_t, long, long,
		obj_t, obj_t);
	static obj_t BGl__makezd2globalzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl_objectzd2ze3structzd2globa3723ze3zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl__localzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7(obj_t);
	BGL_EXPORTED_DECL BgL_svarzf2ginfozf2_bglt
		BGl_wideningzd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t, long, long,
		bool_t);
	BGL_EXPORTED_DEF obj_t BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7 = BUNSPEC;
	extern BgL_sexitz00_bglt BGl_makezd2sexitzd2zzast_varz00(obj_t, bool_t);
	static obj_t
		BGl_objectzd2ze3structzd2sfunzf23743z11zzglobaliza7e_ginfoza7(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_svarzf2ginfozf2_bglt
		BGl_svarzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7();
	BGL_EXPORTED_DECL BgL_svarzf2ginfozf2_bglt
		BGl_fillzd2svarzf2Ginfoz12z32zzglobaliza7e_ginfoza7
		(BgL_svarzf2ginfozf2_bglt, bool_t, long, long, bool_t);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	extern BgL_globalz00_bglt BGl_makezd2globalzd2zzast_varz00(obj_t, obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, obj_t,
		obj_t, bool_t, obj_t, bool_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_sexitzf2ginfozf2_bglt
		BGl_fillzd2sexitzf2Ginfoz12z32zzglobaliza7e_ginfoza7
		(BgL_sexitzf2ginfozf2_bglt, bool_t, bool_t, long, long);
	BGL_EXPORTED_DECL bool_t BGl_sfunzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7 = BUNSPEC;
	static obj_t BGl_z52thezd2localzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7 =
		BUNSPEC;
	static obj_t BGl__fillzd2sfunzf2Ginfoz12z32zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl__z52allocatezd2globalzf2Ginfoz72zzglobaliza7e_ginfoza7(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_z52allocatezd2globalzf2Ginfoz72zzglobaliza7e_ginfoza7();
	static obj_t BGl__sfunzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_localzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl_z52thezd2sfunzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7 =
		BUNSPEC;
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl__wideningzd2globalzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_svarz00_bglt
		BGl_z52allocatezd2svarzf2Ginfoz72zzglobaliza7e_ginfoza7();
	static obj_t BGl__fillzd2sexitzf2Ginfoz12z32zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzglobaliza7e_ginfoza7();
	BGL_EXPORTED_DECL BgL_sfunzf2ginfozf2_bglt
		BGl_wideningzd2sfunzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t,
		obj_t, obj_t, long, long, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_ginfoza7();
	static obj_t BGl__globalzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t, obj_t);
	extern BgL_svarz00_bglt BGl_makezd2svarzd2zzast_varz00(obj_t);
	static obj_t __cnst[6];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2sfunzf2Ginfozd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl__wideningza7d2sfun4064za7,
		BGl__wideningzd2sfunzf2Ginfoz20zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 20);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4038z00zzglobaliza7e_ginfoza7,
		BgL_bgl_objectza7d2za7e3stru4065z00,
		BGl_objectzd2ze3structzd2globa3723ze3zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4040z00zzglobaliza7e_ginfoza7,
		BgL_bgl_structza7b2objectza74066z00,
		BGl_structzb2objectzd2ze3objec3725z83zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4042z00zzglobaliza7e_ginfoza7,
		BgL_bgl_objectza7d2za7e3stru4067z00,
		BGl_objectzd2ze3structzd2local3728ze3zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4043z00zzglobaliza7e_ginfoza7,
		BgL_bgl_structza7b2objectza74068z00,
		BGl_structzb2objectzd2ze3objec3730z83zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4044z00zzglobaliza7e_ginfoza7,
		BgL_bgl_objectza7d2za7e3stru4069z00,
		BGl_objectzd2ze3structzd2sexit3732ze3zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4045z00zzglobaliza7e_ginfoza7,
		BgL_bgl_structza7b2objectza74070z00,
		BGl_structzb2objectzd2ze3objec3735z83zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4046z00zzglobaliza7e_ginfoza7,
		BgL_bgl_objectza7d2za7e3stru4071z00,
		BGl_objectzd2ze3structzd2svarzf23738z11zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4047z00zzglobaliza7e_ginfoza7,
		BgL_bgl_structza7b2objectza74072z00,
		BGl_structzb2objectzd2ze3objec3741z83zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4048z00zzglobaliza7e_ginfoza7,
		BgL_bgl_objectza7d2za7e3stru4073z00,
		BGl_objectzd2ze3structzd2sfunzf23743z11zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4049z00zzglobaliza7e_ginfoza7,
		BgL_bgl_structza7b2objectza74074z00,
		BGl_structzb2objectzd2ze3objec3745z83zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2localzf2Ginfozd2envza0zzglobaliza7e_ginfoza7,
		BgL_bgl__za752allocateza7d2l4075z00,
		BGl__z52allocatezd2localzf2Ginfoz72zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2globalzf2Ginfozd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl__wideningza7d2glob4076za7,
		BGl__wideningzd2globalzf2Ginfoz20zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4037z00zzglobaliza7e_ginfoza7,
		BgL_bgl_string4037za700za7za7g4077za7, "", 0);
	      DEFINE_STRING(BGl_string4039z00zzglobaliza7e_ginfoza7,
		BgL_bgl_string4039za700za7za7g4078za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string4041z00zzglobaliza7e_ginfoza7,
		BgL_bgl_string4041za700za7za7g4079za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string4050z00zzglobaliza7e_ginfoza7,
		BgL_bgl_string4050za700za7za7g4080za7, "globalize_ginfo", 15);
	      DEFINE_STRING(BGl_string4051z00zzglobaliza7e_ginfoza7,
		BgL_bgl_string4051za700za7za7g4081za7,
		"_ global/Ginfo local/Ginfo sexit/Ginfo svar/Ginfo sfun/Ginfo ", 61);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2svarzf2Ginfoz12zd2envze0zzglobaliza7e_ginfoza7,
		BgL_bgl__fillza7d2svarza7f2g4082z00,
		BGl__fillzd2svarzf2Ginfoz12z32zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2nilzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl__sfunza7f2ginfoza7d24083z00,
		BGl__sfunzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Ginfozf3zd2envzd3zzglobaliza7e_ginfoza7,
		BgL_bgl__sexitza7f2ginfoza7f4084z00,
		BGl__sexitzf2Ginfozf3z01zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2svarzf2Ginfozd2envza0zzglobaliza7e_ginfoza7,
		BgL_bgl__za752allocateza7d2s4085z00,
		BGl__z52allocatezd2svarzf2Ginfoz72zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2svarzf2Ginfozd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl__wideningza7d2svar4086za7,
		BGl__wideningzd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2localzf2Ginfoz12zd2envze0zzglobaliza7e_ginfoza7,
		BgL_bgl__fillza7d2localza7f24087z00,
		BGl__fillzd2localzf2Ginfoz12z32zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2sfunzf2Ginfozd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl__makeza7d2sfunza7f2g4088z00,
		BGl__makezd2sfunzf2Ginfoz20zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 37);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2globalzf2Ginfoz12zd2envze0zzglobaliza7e_ginfoza7,
		BgL_bgl__fillza7d2globalza7f4089z00,
		BGl__fillzd2globalzf2Ginfoz12z32zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2globalzf2Ginfozd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl__makeza7d2globalza7f4090z00,
		BGl__makezd2globalzf2Ginfoz20zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2sexitzf2Ginfozd2envza0zzglobaliza7e_ginfoza7,
		BgL_bgl__za752allocateza7d2s4091z00,
		BGl__z52allocatezd2sexitzf2Ginfoz72zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2localzf2Ginfozd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl__makeza7d2localza7f24092z00,
		BGl__makezd2localzf2Ginfoz20zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2sfunzf2Ginfoz12zd2envze0zzglobaliza7e_ginfoza7,
		BgL_bgl__fillza7d2sfunza7f2g4093z00,
		BGl__fillzd2sfunzf2Ginfoz12z32zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 21);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Ginfozf3zd2envzd3zzglobaliza7e_ginfoza7,
		BgL_bgl__svarza7f2ginfoza7f34094z00,
		BGl__svarzf2Ginfozf3z01zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2localzf2Ginfozd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl__wideningza7d2loca4095za7,
		BGl__wideningzd2localzf2Ginfoz20zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozf3zd2envzd3zzglobaliza7e_ginfoza7,
		BgL_bgl__globalza7f2ginfoza74096z00,
		BGl__globalzf2Ginfozf3z01zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Ginfozd2nilzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl__sexitza7f2ginfoza7d4097z00,
		BGl__sexitzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2svarzf2Ginfozd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl__makeza7d2svarza7f2g4098z00,
		BGl__makezd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2sexitzf2Ginfoz12zd2envze0zzglobaliza7e_ginfoza7,
		BgL_bgl__fillza7d2sexitza7f24099z00,
		BGl__fillzd2sexitzf2Ginfoz12z32zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozf3zd2envzd3zzglobaliza7e_ginfoza7,
		BgL_bgl__localza7f2ginfoza7f4100z00,
		BGl__localzf2Ginfozf3z01zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozf3zd2envzd3zzglobaliza7e_ginfoza7,
		BgL_bgl__sfunza7f2ginfoza7f34101z00,
		BGl__sfunzf2Ginfozf3z01zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2sexitzf2Ginfozd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl__makeza7d2sexitza7f24102z00,
		BGl__makezd2sexitzf2Ginfoz20zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2globalzf2Ginfozd2envza0zzglobaliza7e_ginfoza7,
		BgL_bgl__za752allocateza7d2g4103z00,
		BGl__z52allocatezd2globalzf2Ginfoz72zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2nilzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl__localza7f2ginfoza7d4104z00,
		BGl__localzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2sexitzf2Ginfozd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl__wideningza7d2sexi4105za7,
		BGl__wideningzd2sexitzf2Ginfoz20zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2nilzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl__globalza7f2ginfoza74106z00,
		BGl__globalzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Ginfozd2nilzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl__svarza7f2ginfoza7d24107z00,
		BGl__svarzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2sfunzf2Ginfozd2envza0zzglobaliza7e_ginfoza7,
		BgL_bgl__za752allocateza7d2s4108z00,
		BGl__z52allocatezd2sfunzf2Ginfoz72zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long
		BgL_checksumz00_3084, char *BgL_fromz00_3085)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzglobaliza7e_ginfoza7))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_ginfoza7 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_ginfoza7();
					BGl_cnstzd2initzd2zzglobaliza7e_ginfoza7();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_ginfoza7();
					BGl_objectzd2initzd2zzglobaliza7e_ginfoza7();
					BGl_methodzd2initzd2zzglobaliza7e_ginfoza7();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_ginfoza7()
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"globalize_ginfo");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_ginfo");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzglobaliza7e_ginfoza7()
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 15 */
			{	/* Globalize/ginfo.scm 15 */
				obj_t BgL_cportz00_2940;

				BgL_cportz00_2940 =
					bgl_open_input_string(BGl_string4051z00zzglobaliza7e_ginfoza7,
					(int) (((long) 0)));
				{
					long BgL_iz00_2941;

					BgL_iz00_2941 = ((long) 5);
				BgL_loopz00_2942:
					if ((BgL_iz00_2941 == ((long) -1)))
						{	/* Globalize/ginfo.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Globalize/ginfo.scm 15 */
							{	/* Globalize/ginfo.scm 15 */
								obj_t BgL_arg4053z00_2944;

								{	/* Globalize/ginfo.scm 15 */

									{	/* Globalize/ginfo.scm 15 */
										obj_t BgL_locationz00_2946;

										BgL_locationz00_2946 = BBOOL(((bool_t) 0));
										{	/* Globalize/ginfo.scm 15 */

											BgL_arg4053z00_2944 =
												BGl_readz00zz__readerz00(BgL_cportz00_2940,
												BgL_locationz00_2946);
										}
									}
								}
								{	/* Globalize/ginfo.scm 15 */
									int BgL_auxz00_3102;

									BgL_auxz00_3102 = (int) (BgL_iz00_2941);
									CNST_TABLE_SET(BgL_auxz00_3102, BgL_arg4053z00_2944);
							}}
							{	/* Globalize/ginfo.scm 15 */
								int BgL_auxz00_2947;

								BgL_auxz00_2947 = (int) ((BgL_iz00_2941 - ((long) 1)));
								{
									long BgL_iz00_3107;

									BgL_iz00_3107 = (long) (BgL_auxz00_2947);
									BgL_iz00_2941 = BgL_iz00_3107;
									goto BgL_loopz00_2942;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzglobaliza7e_ginfoza7()
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 15 */
			return BUNSPEC;
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzglobaliza7e_ginfoza7()
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 15 */
			{	/* Globalize/ginfo.scm 19 */
				obj_t BgL_arg3746z00_1036;

				obj_t BgL_arg3747z00_1037;

				obj_t BgL_arg3750z00_1040;

				BgL_arg3746z00_1036 = CNST_TABLE_REF(((long) 0));
				BgL_arg3747z00_1037 = BGl_sfunz00zzast_varz00;
				{	/* Globalize/ginfo.scm 19 */
					obj_t BgL_v3717z00_1041;

					BgL_v3717z00_1041 = create_vector((int) (((long) 0)));
					BgL_arg3750z00_1040 = BgL_v3717z00_1041;
				}
				BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3746z00_1036,
					BgL_arg3747z00_1037, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2sfunzf2Ginfozd2envza0zzglobaliza7e_ginfoza7,
					BGl_sfunzf2Ginfozd2nilzd2envzf2zzglobaliza7e_ginfoza7,
					BGl_sfunzf2Ginfozf3zd2envzd3zzglobaliza7e_ginfoza7, ((long) 19798587),
					BFALSE, BFALSE, BgL_arg3750z00_1040);
			}
			{	/* Globalize/ginfo.scm 61 */
				obj_t BgL_arg3751z00_1042;

				obj_t BgL_arg3752z00_1043;

				obj_t BgL_arg3755z00_1046;

				BgL_arg3751z00_1042 = CNST_TABLE_REF(((long) 1));
				BgL_arg3752z00_1043 = BGl_svarz00zzast_varz00;
				{	/* Globalize/ginfo.scm 61 */
					obj_t BgL_v3718z00_1047;

					BgL_v3718z00_1047 = create_vector((int) (((long) 0)));
					BgL_arg3755z00_1046 = BgL_v3718z00_1047;
				}
				BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3751z00_1042,
					BgL_arg3752z00_1043, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2svarzf2Ginfozd2envza0zzglobaliza7e_ginfoza7,
					BGl_svarzf2Ginfozd2nilzd2envzf2zzglobaliza7e_ginfoza7,
					BGl_svarzf2Ginfozf3zd2envzd3zzglobaliza7e_ginfoza7,
					((long) 512919425), BFALSE, BFALSE, BgL_arg3755z00_1046);
			}
			{	/* Globalize/ginfo.scm 71 */
				obj_t BgL_arg3756z00_1048;

				obj_t BgL_arg3757z00_1049;

				obj_t BgL_arg3760z00_1052;

				BgL_arg3756z00_1048 = CNST_TABLE_REF(((long) 2));
				BgL_arg3757z00_1049 = BGl_sexitz00zzast_varz00;
				{	/* Globalize/ginfo.scm 71 */
					obj_t BgL_v3719z00_1053;

					BgL_v3719z00_1053 = create_vector((int) (((long) 0)));
					BgL_arg3760z00_1052 = BgL_v3719z00_1053;
				}
				BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3756z00_1048,
					BgL_arg3757z00_1049, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2sexitzf2Ginfozd2envza0zzglobaliza7e_ginfoza7,
					BGl_sexitzf2Ginfozd2nilzd2envzf2zzglobaliza7e_ginfoza7,
					BGl_sexitzf2Ginfozf3zd2envzd3zzglobaliza7e_ginfoza7,
					((long) 434970448), BFALSE, BFALSE, BgL_arg3760z00_1052);
			}
			{	/* Globalize/ginfo.scm 81 */
				obj_t BgL_arg3761z00_1054;

				obj_t BgL_arg3762z00_1055;

				obj_t BgL_arg3765z00_1058;

				BgL_arg3761z00_1054 = CNST_TABLE_REF(((long) 3));
				BgL_arg3762z00_1055 = BGl_localz00zzast_varz00;
				{	/* Globalize/ginfo.scm 81 */
					obj_t BgL_v3720z00_1059;

					BgL_v3720z00_1059 = create_vector((int) (((long) 0)));
					BgL_arg3765z00_1058 = BgL_v3720z00_1059;
				}
				BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3761z00_1054,
					BgL_arg3762z00_1055, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2localzf2Ginfozd2envza0zzglobaliza7e_ginfoza7,
					BGl_localzf2Ginfozd2nilzd2envzf2zzglobaliza7e_ginfoza7,
					BGl_localzf2Ginfozf3zd2envzd3zzglobaliza7e_ginfoza7,
					((long) 208064906), BFALSE, BFALSE, BgL_arg3765z00_1058);
			}
			{	/* Globalize/ginfo.scm 87 */
				obj_t BgL_arg3766z00_1060;

				obj_t BgL_arg3767z00_1061;

				obj_t BgL_arg3770z00_1064;

				BgL_arg3766z00_1060 = CNST_TABLE_REF(((long) 4));
				BgL_arg3767z00_1061 = BGl_globalz00zzast_varz00;
				{	/* Globalize/ginfo.scm 87 */
					obj_t BgL_v3721z00_1065;

					BgL_v3721z00_1065 = create_vector((int) (((long) 0)));
					BgL_arg3770z00_1064 = BgL_v3721z00_1065;
				}
				BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3766z00_1060,
					BgL_arg3767z00_1061, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2globalzf2Ginfozd2envza0zzglobaliza7e_ginfoza7,
					BGl_globalzf2Ginfozd2nilzd2envzf2zzglobaliza7e_ginfoza7,
					BGl_globalzf2Ginfozf3zd2envzd3zzglobaliza7e_ginfoza7,
					((long) 238308569), BFALSE, BFALSE, BgL_arg3770z00_1064);
			}
			BGl_z52thezd2globalzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7 = BUNSPEC;
			BGl_z52thezd2localzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7 = BUNSPEC;
			BGl_z52thezd2sexitzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7 = BUNSPEC;
			BGl_z52thezd2svarzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7 = BUNSPEC;
			return (BGl_z52thezd2sfunzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7 =
				BUNSPEC, BUNSPEC);
		}
	}



/* global/Ginfo? */
	BGL_EXPORTED_DEF bool_t BGl_globalzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t
		BgL_obj3663z00_1)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 87 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3663z00_1,
				BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7);
		}
	}



/* _global/Ginfo? */
	obj_t BGl__globalzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t BgL_envz00_2736,
		obj_t BgL_obj3663z00_2737)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 87 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3663z00_2737,
					BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7));
		}
	}



/* widening-global/Ginfo */
	BGL_EXPORTED_DEF BgL_globalzf2ginfozf2_bglt
		BGl_wideningzd2globalzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t
		BgL_escapezf33625zf3_5, obj_t BgL_globalzd2closure3626zd2_6)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 87 */
			{	/* Globalize/ginfo.scm 87 */
				BgL_globalzf2ginfozf2_bglt BgL_new3627z00_1724;

				BgL_new3627z00_1724 =
					((BgL_globalzf2ginfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_globalzf2ginfozf2_bgl))));
				{	/* Globalize/ginfo.scm 87 */
					BgL_globalzf2ginfozf2_bglt BgL_res3984z00_1730;

					{	/* Globalize/ginfo.scm 87 */
						BgL_globalzf2ginfozf2_bglt BgL_new3651z00_1725;

						BgL_new3651z00_1725 = BgL_new3627z00_1724;
						{	/* Globalize/ginfo.scm 87 */
							bool_t BgL_escapezf33649zf3_1728;

							obj_t BgL_globalzd2closure3650zd2_1729;

							BgL_escapezf33649zf3_1728 = BgL_escapezf33625zf3_5;
							BgL_globalzd2closure3650zd2_1729 = BgL_globalzd2closure3626zd2_6;
							((((BgL_globalzf2ginfozf2_bglt) CREF(BgL_new3651z00_1725))->
									BgL_escapezf3zf3) =
								((bool_t) BgL_escapezf33649zf3_1728), BUNSPEC);
							((((BgL_globalzf2ginfozf2_bglt) CREF(BgL_new3651z00_1725))->
									BgL_globalzd2closurezd2) =
								((obj_t) BgL_globalzd2closure3650zd2_1729), BUNSPEC);
							BgL_res3984z00_1730 = BgL_new3651z00_1725;
					}} BgL_res3984z00_1730;
				}
				return BgL_new3627z00_1724;
			}
		}
	}



/* _widening-global/Ginfo */
	obj_t BGl__wideningzd2globalzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2738, obj_t BgL_escapezf33625zf3_2739,
		obj_t BgL_globalzd2closure3626zd2_2740)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 87 */
			return
				(obj_t) (BGl_wideningzd2globalzf2Ginfoz20zzglobaliza7e_ginfoza7(CBOOL
					(BgL_escapezf33625zf3_2739), BgL_globalzd2closure3626zd2_2740));
		}
	}



/* make-global/Ginfo */
	BGL_EXPORTED_DEF BgL_globalzf2ginfozf2_bglt
		BGl_makezd2globalzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t BgL_id3631z00_7,
		obj_t BgL_name3632z00_8, BgL_typez00_bglt BgL_type3633z00_9,
		BgL_valuez00_bglt BgL_value3634z00_10, obj_t BgL_access3635z00_11,
		obj_t BgL_fastzd2alpha3636zd2_12, obj_t BgL_removable3637z00_13,
		long BgL_occurrence3638z00_14, obj_t BgL_module3639z00_15,
		obj_t BgL_import3640z00_16, bool_t BgL_evaluablezf33641zf3_17,
		obj_t BgL_library3642z00_18, bool_t BgL_userzf33643zf3_19,
		obj_t BgL_pragma3644z00_20, obj_t BgL_src3645z00_21,
		obj_t BgL_jvmzd2typezd2name3646z00_22, bool_t BgL_escapezf33629zf3_23,
		obj_t BgL_globalzd2closure3630zd2_24)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 87 */
			{	/* Globalize/ginfo.scm 87 */
				BgL_globalz00_bglt BgL_aux3647z00_1731;

				BgL_aux3647z00_1731 =
					BGl_makezd2globalzd2zzast_varz00(BgL_id3631z00_7, BgL_name3632z00_8,
					BgL_type3633z00_9, BgL_value3634z00_10, BgL_access3635z00_11,
					BgL_fastzd2alpha3636zd2_12, BgL_removable3637z00_13,
					BgL_occurrence3638z00_14, BgL_module3639z00_15, BgL_import3640z00_16,
					BgL_evaluablezf33641zf3_17, BgL_library3642z00_18,
					BgL_userzf33643zf3_19, BgL_pragma3644z00_20, BgL_src3645z00_21,
					BgL_jvmzd2typezd2name3646z00_22);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3647z00_1731),
					BGl_classzd2numzd2zz__objectz00
					(BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7));
				{	/* Globalize/ginfo.scm 87 */
					BgL_globalzf2ginfozf2_bglt BgL_arg3772z00_1733;

					{	/* Globalize/ginfo.scm 87 */
						BgL_globalzf2ginfozf2_bglt BgL_res3986z00_1746;

						{	/* Globalize/ginfo.scm 87 */
							BgL_globalzf2ginfozf2_bglt BgL_new3627z00_1739;

							BgL_new3627z00_1739 =
								((BgL_globalzf2ginfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_globalzf2ginfozf2_bgl))));
							{	/* Globalize/ginfo.scm 87 */
								BgL_globalzf2ginfozf2_bglt BgL_res3985z00_1745;

								{	/* Globalize/ginfo.scm 87 */
									BgL_globalzf2ginfozf2_bglt BgL_new3651z00_1740;

									BgL_new3651z00_1740 = BgL_new3627z00_1739;
									{	/* Globalize/ginfo.scm 87 */
										bool_t BgL_escapezf33649zf3_1743;

										obj_t BgL_globalzd2closure3650zd2_1744;

										BgL_escapezf33649zf3_1743 = BgL_escapezf33629zf3_23;
										BgL_globalzd2closure3650zd2_1744 =
											BgL_globalzd2closure3630zd2_24;
										((((BgL_globalzf2ginfozf2_bglt) CREF(BgL_new3651z00_1740))->
												BgL_escapezf3zf3) =
											((bool_t) BgL_escapezf33649zf3_1743), BUNSPEC);
										((((BgL_globalzf2ginfozf2_bglt) CREF(BgL_new3651z00_1740))->
												BgL_globalzd2closurezd2) =
											((obj_t) BgL_globalzd2closure3650zd2_1744), BUNSPEC);
										BgL_res3985z00_1745 = BgL_new3651z00_1740;
								}} BgL_res3985z00_1745;
							}
							BgL_res3986z00_1746 = BgL_new3627z00_1739;
						}
						BgL_arg3772z00_1733 = BgL_res3986z00_1746;
					}
					{	/* Globalize/ginfo.scm 87 */
						obj_t BgL_auxz00_3147;

						BgL_objectz00_bglt BgL_auxz00_3145;

						BgL_auxz00_3147 = (obj_t) (BgL_arg3772z00_1733);
						BgL_auxz00_3145 = (BgL_objectz00_bglt) (BgL_aux3647z00_1731);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_3145, BgL_auxz00_3147);
				}}
				return
					((BgL_globalzf2ginfozf2_bglt)
					(BgL_globalzf2ginfozf2_bglt) (BgL_aux3647z00_1731));
			}
		}
	}



/* _make-global/Ginfo */
	obj_t BGl__makezd2globalzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2741, obj_t BgL_id3631z00_2742, obj_t BgL_name3632z00_2743,
		obj_t BgL_type3633z00_2744, obj_t BgL_value3634z00_2745,
		obj_t BgL_access3635z00_2746, obj_t BgL_fastzd2alpha3636zd2_2747,
		obj_t BgL_removable3637z00_2748, obj_t BgL_occurrence3638z00_2749,
		obj_t BgL_module3639z00_2750, obj_t BgL_import3640z00_2751,
		obj_t BgL_evaluablezf33641zf3_2752, obj_t BgL_library3642z00_2753,
		obj_t BgL_userzf33643zf3_2754, obj_t BgL_pragma3644z00_2755,
		obj_t BgL_src3645z00_2756, obj_t BgL_jvmzd2typezd2name3646z00_2757,
		obj_t BgL_escapezf33629zf3_2758, obj_t BgL_globalzd2closure3630zd2_2759)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 87 */
			return
				(obj_t) (BGl_makezd2globalzf2Ginfoz20zzglobaliza7e_ginfoza7
				(BgL_id3631z00_2742, BgL_name3632z00_2743,
					(BgL_typez00_bglt) (BgL_type3633z00_2744),
					(BgL_valuez00_bglt) (BgL_value3634z00_2745), BgL_access3635z00_2746,
					BgL_fastzd2alpha3636zd2_2747, BgL_removable3637z00_2748,
					(long) CINT(BgL_occurrence3638z00_2749), BgL_module3639z00_2750,
					BgL_import3640z00_2751, CBOOL(BgL_evaluablezf33641zf3_2752),
					BgL_library3642z00_2753, CBOOL(BgL_userzf33643zf3_2754),
					BgL_pragma3644z00_2755, BgL_src3645z00_2756,
					BgL_jvmzd2typezd2name3646z00_2757, CBOOL(BgL_escapezf33629zf3_2758),
					BgL_globalzd2closure3630zd2_2759));
		}
	}



/* fill-global/Ginfo! */
	BGL_EXPORTED_DEF BgL_globalzf2ginfozf2_bglt
		BGl_fillzd2globalzf2Ginfoz12z32zzglobaliza7e_ginfoza7
		(BgL_globalzf2ginfozf2_bglt BgL_new3651z00_25,
		bool_t BgL_escapezf33649zf3_26, obj_t BgL_globalzd2closure3650zd2_27)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 87 */
			{	/* Globalize/ginfo.scm 87 */
				bool_t BgL_escapezf33649zf3_2949;

				obj_t BgL_globalzd2closure3650zd2_2950;

				BgL_escapezf33649zf3_2949 = BgL_escapezf33649zf3_26;
				BgL_globalzd2closure3650zd2_2950 = BgL_globalzd2closure3650zd2_27;
				((((BgL_globalzf2ginfozf2_bglt) CREF(BgL_new3651z00_25))->
						BgL_escapezf3zf3) = ((bool_t) BgL_escapezf33649zf3_2949), BUNSPEC);
				((((BgL_globalzf2ginfozf2_bglt) CREF(BgL_new3651z00_25))->
						BgL_globalzd2closurezd2) =
					((obj_t) BgL_globalzd2closure3650zd2_2950), BUNSPEC);
				return BgL_new3651z00_25;
			}
		}
	}



/* _fill-global/Ginfo! */
	obj_t BGl__fillzd2globalzf2Ginfoz12z32zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2760, obj_t BgL_new3651z00_2761, obj_t BgL_escapezf33649zf3_2762,
		obj_t BgL_globalzd2closure3650zd2_2763)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 87 */
			{	/* Globalize/ginfo.scm 87 */
				BgL_globalzf2ginfozf2_bglt BgL_auxz00_3162;

				{	/* Globalize/ginfo.scm 87 */
					BgL_globalzf2ginfozf2_bglt BgL_res4054z00_2956;

					{	/* Globalize/ginfo.scm 87 */
						BgL_globalzf2ginfozf2_bglt BgL_new3651z00_2951;

						bool_t BgL_escapezf33649zf3_2952;

						BgL_new3651z00_2951 =
							(BgL_globalzf2ginfozf2_bglt) (BgL_new3651z00_2761);
						BgL_escapezf33649zf3_2952 = CBOOL(BgL_escapezf33649zf3_2762);
						{	/* Globalize/ginfo.scm 87 */
							bool_t BgL_escapezf33649zf3_2954;

							obj_t BgL_globalzd2closure3650zd2_2955;

							BgL_escapezf33649zf3_2954 = BgL_escapezf33649zf3_2952;
							BgL_globalzd2closure3650zd2_2955 =
								BgL_globalzd2closure3650zd2_2763;
							((((BgL_globalzf2ginfozf2_bglt) CREF(BgL_new3651z00_2951))->
									BgL_escapezf3zf3) =
								((bool_t) BgL_escapezf33649zf3_2954), BUNSPEC);
							((((BgL_globalzf2ginfozf2_bglt) CREF(BgL_new3651z00_2951))->
									BgL_globalzd2closurezd2) =
								((obj_t) BgL_globalzd2closure3650zd2_2955), BUNSPEC);
							BgL_res4054z00_2956 = BgL_new3651z00_2951;
						}
					}
					BgL_auxz00_3162 = BgL_res4054z00_2956;
				}
				return (obj_t) (BgL_auxz00_3162);
			}
		}
	}



/* %allocate-global/Ginfo */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_z52allocatezd2globalzf2Ginfoz72zzglobaliza7e_ginfoza7()
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 87 */
			{	/* Globalize/ginfo.scm 87 */
				BgL_globalz00_bglt BgL_new3655z00_2957;

				BgL_new3655z00_2957 =
					((BgL_globalz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_globalz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3655z00_2957),
					BGl_classzd2numzd2zz__objectz00
					(BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7));
				{	/* Globalize/ginfo.scm 87 */
					BgL_objectz00_bglt BgL_auxz00_3172;

					BgL_auxz00_3172 = (BgL_objectz00_bglt) (BgL_new3655z00_2957);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3172, BFALSE);
				}
				return BgL_new3655z00_2957;
			}
		}
	}



/* _%allocate-global/Ginfo */
	obj_t BGl__z52allocatezd2globalzf2Ginfoz72zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2734)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 87 */
			{	/* Globalize/ginfo.scm 87 */
				BgL_globalz00_bglt BgL_auxz00_3175;

				{	/* Globalize/ginfo.scm 87 */
					BgL_globalz00_bglt BgL_res4055z00_2961;

					{	/* Globalize/ginfo.scm 87 */
						BgL_globalz00_bglt BgL_new3655z00_2959;

						BgL_new3655z00_2959 =
							((BgL_globalz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_globalz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3655z00_2959),
							BGl_classzd2numzd2zz__objectz00
							(BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7));
						{	/* Globalize/ginfo.scm 87 */
							BgL_objectz00_bglt BgL_auxz00_3180;

							BgL_auxz00_3180 = (BgL_objectz00_bglt) (BgL_new3655z00_2959);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3180, BFALSE);
						}
						BgL_res4055z00_2961 = BgL_new3655z00_2959;
					}
					BgL_auxz00_3175 = BgL_res4055z00_2961;
				}
				return (obj_t) (BgL_auxz00_3175);
			}
		}
	}



/* global/Ginfo-nil */
	BGL_EXPORTED_DEF BgL_globalzf2ginfozf2_bglt
		BGl_globalzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7()
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 87 */
			if (
				(BGl_z52thezd2globalzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7 == BUNSPEC))
				{	/* Globalize/ginfo.scm 87 */
					{	/* Globalize/ginfo.scm 87 */
						BgL_globalz00_bglt BgL_res3987z00_1757;

						{	/* Globalize/ginfo.scm 87 */
							BgL_globalz00_bglt BgL_new1750z00_1753;

							BgL_new1750z00_1753 =
								((BgL_globalz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_globalz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1750z00_1753),
								BGl_classzd2numzd2zz__objectz00(BGl_globalz00zzast_varz00));
							{	/* Globalize/ginfo.scm 87 */
								BgL_objectz00_bglt BgL_auxz00_3190;

								BgL_auxz00_3190 = (BgL_objectz00_bglt) (BgL_new1750z00_1753);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3190, BFALSE);
							}
							BgL_res3987z00_1757 = BgL_new1750z00_1753;
						}
						BGl_z52thezd2globalzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7 =
							(obj_t) (BgL_res3987z00_1757);
					}
					{	/* Globalize/ginfo.scm 87 */
						obj_t BgL_arg3775z00_1076;

						BgL_typez00_bglt BgL_arg3776z00_1077;

						BgL_valuez00_bglt BgL_arg3777z00_1078;

						obj_t BgL_arg3779z00_1080;

						BgL_arg3775z00_1076 = CNST_TABLE_REF(((long) 5));
						BgL_arg3776z00_1077 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg3777z00_1078 = BGl_valuezd2nilzd2zzast_varz00();
						BgL_arg3779z00_1080 = CNST_TABLE_REF(((long) 5));
						{	/* Globalize/ginfo.scm 87 */
							BgL_globalz00_bglt BgL_res3988z00_1791;

							{	/* Globalize/ginfo.scm 87 */
								BgL_globalz00_bglt BgL_new1732z00_1758;

								BgL_new1732z00_1758 =
									(BgL_globalz00_bglt)
									(BGl_z52thezd2globalzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7);
								{	/* Globalize/ginfo.scm 87 */
									obj_t BgL_id1716z00_1775;

									obj_t BgL_name1717z00_1776;

									BgL_typez00_bglt BgL_type1718z00_1777;

									BgL_valuez00_bglt BgL_value1719z00_1778;

									obj_t BgL_access1720z00_1779;

									obj_t BgL_fastzd2alpha1721zd2_1780;

									obj_t BgL_removable1722z00_1781;

									long BgL_occurrence1723z00_1782;

									obj_t BgL_module1724z00_1783;

									obj_t BgL_import1725z00_1784;

									bool_t BgL_evaluablezf31726zf3_1785;

									obj_t BgL_library1727z00_1786;

									bool_t BgL_userzf31728zf3_1787;

									obj_t BgL_pragma1729z00_1788;

									obj_t BgL_src1730z00_1789;

									obj_t BgL_jvmzd2typezd2name1731z00_1790;

									BgL_id1716z00_1775 = BgL_arg3775z00_1076;
									BgL_name1717z00_1776 = BUNSPEC;
									BgL_type1718z00_1777 = BgL_arg3776z00_1077;
									BgL_value1719z00_1778 = BgL_arg3777z00_1078;
									BgL_access1720z00_1779 = BUNSPEC;
									BgL_fastzd2alpha1721zd2_1780 = BUNSPEC;
									BgL_removable1722z00_1781 = BUNSPEC;
									BgL_occurrence1723z00_1782 = ((long) 0);
									BgL_module1724z00_1783 = BgL_arg3779z00_1080;
									BgL_import1725z00_1784 = BUNSPEC;
									BgL_evaluablezf31726zf3_1785 = ((bool_t) 0);
									BgL_library1727z00_1786 = BUNSPEC;
									BgL_userzf31728zf3_1787 = ((bool_t) 0);
									BgL_pragma1729z00_1788 = BUNSPEC;
									BgL_src1730z00_1789 = BUNSPEC;
									BgL_jvmzd2typezd2name1731z00_1790 =
										BGl_string4037z00zzglobaliza7e_ginfoza7;
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1758))->
											BgL_idz00) = ((obj_t) BgL_id1716z00_1775), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1758))->
											BgL_namez00) = ((obj_t) BgL_name1717z00_1776), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1758))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type1718z00_1777), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1758))->
											BgL_valuez00) =
										((BgL_valuez00_bglt) BgL_value1719z00_1778), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1758))->
											BgL_accessz00) =
										((obj_t) BgL_access1720z00_1779), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1758))->
											BgL_fastzd2alphazd2) =
										((obj_t) BgL_fastzd2alpha1721zd2_1780), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1758))->
											BgL_removablez00) =
										((obj_t) BgL_removable1722z00_1781), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1758))->
											BgL_occurrencez00) =
										((long) BgL_occurrence1723z00_1782), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1758))->
											BgL_modulez00) =
										((obj_t) BgL_module1724z00_1783), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1758))->
											BgL_importz00) =
										((obj_t) BgL_import1725z00_1784), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1758))->
											BgL_evaluablezf3zf3) =
										((bool_t) BgL_evaluablezf31726zf3_1785), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1758))->
											BgL_libraryz00) =
										((obj_t) BgL_library1727z00_1786), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1758))->
											BgL_userzf3zf3) =
										((bool_t) BgL_userzf31728zf3_1787), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1758))->
											BgL_pragmaz00) =
										((obj_t) BgL_pragma1729z00_1788), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1758))->
											BgL_srcz00) = ((obj_t) BgL_src1730z00_1789), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1758))->
											BgL_jvmzd2typezd2namez00) =
										((obj_t) BgL_jvmzd2typezd2name1731z00_1790), BUNSPEC);
									BgL_res3988z00_1791 = BgL_new1732z00_1758;
							}} BgL_res3988z00_1791;
					}}
					{	/* Globalize/ginfo.scm 87 */
						long BgL_arg3781z00_1082;

						BgL_arg3781z00_1082 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2globalzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7),
							BgL_arg3781z00_1082);
					}
					{	/* Globalize/ginfo.scm 87 */
						BgL_globalzf2ginfozf2_bglt BgL_arg3782z00_1083;

						{	/* Globalize/ginfo.scm 87 */
							BgL_globalzf2ginfozf2_bglt BgL_res3990z00_1803;

							{	/* Globalize/ginfo.scm 87 */
								BgL_globalzf2ginfozf2_bglt BgL_new3627z00_1796;

								BgL_new3627z00_1796 =
									((BgL_globalzf2ginfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_globalzf2ginfozf2_bgl))));
								{	/* Globalize/ginfo.scm 87 */
									BgL_globalzf2ginfozf2_bglt BgL_res3989z00_1802;

									{	/* Globalize/ginfo.scm 87 */
										BgL_globalzf2ginfozf2_bglt BgL_new3651z00_1797;

										BgL_new3651z00_1797 = BgL_new3627z00_1796;
										{	/* Globalize/ginfo.scm 87 */
											bool_t BgL_escapezf33649zf3_1800;

											obj_t BgL_globalzd2closure3650zd2_1801;

											BgL_escapezf33649zf3_1800 = ((bool_t) 0);
											BgL_globalzd2closure3650zd2_1801 = BUNSPEC;
											((((BgL_globalzf2ginfozf2_bglt)
														CREF(BgL_new3651z00_1797))->BgL_escapezf3zf3) =
												((bool_t) BgL_escapezf33649zf3_1800), BUNSPEC);
											((((BgL_globalzf2ginfozf2_bglt)
														CREF(BgL_new3651z00_1797))->
													BgL_globalzd2closurezd2) =
												((obj_t) BgL_globalzd2closure3650zd2_1801), BUNSPEC);
											BgL_res3989z00_1802 = BgL_new3651z00_1797;
									}} BgL_res3989z00_1802;
								}
								BgL_res3990z00_1803 = BgL_new3627z00_1796;
							}
							BgL_arg3782z00_1083 = BgL_res3990z00_1803;
						}
						{	/* Globalize/ginfo.scm 87 */
							obj_t BgL_auxz00_3223;

							BgL_objectz00_bglt BgL_auxz00_3221;

							BgL_auxz00_3223 = (obj_t) (BgL_arg3782z00_1083);
							BgL_auxz00_3221 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2globalzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3221, BgL_auxz00_3223);
				}}}
			else
				{	/* Globalize/ginfo.scm 87 */
					BFALSE;
				}
			return
				(BgL_globalzf2ginfozf2_bglt)
				(BGl_z52thezd2globalzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7);
		}
	}



/* _global/Ginfo-nil */
	obj_t BGl__globalzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2735)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 87 */
			return (obj_t) (BGl_globalzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7());
		}
	}



/* local/Ginfo? */
	BGL_EXPORTED_DEF bool_t BGl_localzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t
		BgL_obj3589z00_34)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 81 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3589z00_34,
				BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7);
		}
	}



/* _local/Ginfo? */
	obj_t BGl__localzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t BgL_envz00_2732,
		obj_t BgL_obj3589z00_2733)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 81 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3589z00_2733,
					BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7));
		}
	}



/* widening-local/Ginfo */
	BGL_EXPORTED_DEF BgL_localzf2ginfozf2_bglt
		BGl_wideningzd2localzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t
		BgL_escapezf33558zf3_38, bool_t BgL_globaliza7edzf33559z54_39)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 81 */
			{	/* Globalize/ginfo.scm 81 */
				BgL_localzf2ginfozf2_bglt BgL_new3560z00_1804;

				BgL_new3560z00_1804 =
					((BgL_localzf2ginfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_localzf2ginfozf2_bgl))));
				{	/* Globalize/ginfo.scm 81 */
					BgL_localzf2ginfozf2_bglt BgL_res3991z00_1810;

					{	/* Globalize/ginfo.scm 81 */
						BgL_localzf2ginfozf2_bglt BgL_new3578z00_1805;

						BgL_new3578z00_1805 = BgL_new3560z00_1804;
						{	/* Globalize/ginfo.scm 81 */
							bool_t BgL_escapezf33576zf3_1808;

							bool_t BgL_globaliza7edzf33577z54_1809;

							BgL_escapezf33576zf3_1808 = BgL_escapezf33558zf3_38;
							BgL_globaliza7edzf33577z54_1809 = BgL_globaliza7edzf33559z54_39;
							((((BgL_localzf2ginfozf2_bglt) CREF(BgL_new3578z00_1805))->
									BgL_escapezf3zf3) =
								((bool_t) BgL_escapezf33576zf3_1808), BUNSPEC);
							((((BgL_localzf2ginfozf2_bglt) CREF(BgL_new3578z00_1805))->
									BgL_globaliza7edzf3z54) =
								((bool_t) BgL_globaliza7edzf33577z54_1809), BUNSPEC);
							BgL_res3991z00_1810 = BgL_new3578z00_1805;
					}} BgL_res3991z00_1810;
				}
				return BgL_new3560z00_1804;
			}
		}
	}



/* _widening-local/Ginfo */
	obj_t BGl__wideningzd2localzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2764, obj_t BgL_escapezf33558zf3_2765,
		obj_t BgL_globaliza7edzf33559z54_2766)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 81 */
			return
				(obj_t) (BGl_wideningzd2localzf2Ginfoz20zzglobaliza7e_ginfoza7(CBOOL
					(BgL_escapezf33558zf3_2765), CBOOL(BgL_globaliza7edzf33559z54_2766)));
		}
	}



/* make-local/Ginfo */
	BGL_EXPORTED_DEF BgL_localzf2ginfozf2_bglt
		BGl_makezd2localzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t BgL_id3564z00_40,
		obj_t BgL_name3565z00_41, BgL_typez00_bglt BgL_type3566z00_42,
		BgL_valuez00_bglt BgL_value3567z00_43, obj_t BgL_access3568z00_44,
		obj_t BgL_fastzd2alpha3569zd2_45, obj_t BgL_removable3570z00_46,
		long BgL_occurrence3571z00_47, bool_t BgL_userzf33572zf3_48,
		long BgL_key3573z00_49, bool_t BgL_escapezf33562zf3_50,
		bool_t BgL_globaliza7edzf33563z54_51)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 81 */
			{	/* Globalize/ginfo.scm 81 */
				BgL_localz00_bglt BgL_aux3574z00_1811;

				BgL_aux3574z00_1811 =
					BGl_makezd2localzd2zzast_varz00(BgL_id3564z00_40, BgL_name3565z00_41,
					BgL_type3566z00_42, BgL_value3567z00_43, BgL_access3568z00_44,
					BgL_fastzd2alpha3569zd2_45, BgL_removable3570z00_46,
					BgL_occurrence3571z00_47, BgL_userzf33572zf3_48, BgL_key3573z00_49);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3574z00_1811),
					BGl_classzd2numzd2zz__objectz00
					(BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7));
				{	/* Globalize/ginfo.scm 81 */
					BgL_localzf2ginfozf2_bglt BgL_arg3784z00_1813;

					{	/* Globalize/ginfo.scm 81 */
						BgL_localzf2ginfozf2_bglt BgL_res3993z00_1826;

						{	/* Globalize/ginfo.scm 81 */
							BgL_localzf2ginfozf2_bglt BgL_new3560z00_1819;

							BgL_new3560z00_1819 =
								((BgL_localzf2ginfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_localzf2ginfozf2_bgl))));
							{	/* Globalize/ginfo.scm 81 */
								BgL_localzf2ginfozf2_bglt BgL_res3992z00_1825;

								{	/* Globalize/ginfo.scm 81 */
									BgL_localzf2ginfozf2_bglt BgL_new3578z00_1820;

									BgL_new3578z00_1820 = BgL_new3560z00_1819;
									{	/* Globalize/ginfo.scm 81 */
										bool_t BgL_escapezf33576zf3_1823;

										bool_t BgL_globaliza7edzf33577z54_1824;

										BgL_escapezf33576zf3_1823 = BgL_escapezf33562zf3_50;
										BgL_globaliza7edzf33577z54_1824 =
											BgL_globaliza7edzf33563z54_51;
										((((BgL_localzf2ginfozf2_bglt) CREF(BgL_new3578z00_1820))->
												BgL_escapezf3zf3) =
											((bool_t) BgL_escapezf33576zf3_1823), BUNSPEC);
										((((BgL_localzf2ginfozf2_bglt) CREF(BgL_new3578z00_1820))->
												BgL_globaliza7edzf3z54) =
											((bool_t) BgL_globaliza7edzf33577z54_1824), BUNSPEC);
										BgL_res3992z00_1825 = BgL_new3578z00_1820;
								}} BgL_res3992z00_1825;
							}
							BgL_res3993z00_1826 = BgL_new3560z00_1819;
						}
						BgL_arg3784z00_1813 = BgL_res3993z00_1826;
					}
					{	/* Globalize/ginfo.scm 81 */
						obj_t BgL_auxz00_3248;

						BgL_objectz00_bglt BgL_auxz00_3246;

						BgL_auxz00_3248 = (obj_t) (BgL_arg3784z00_1813);
						BgL_auxz00_3246 = (BgL_objectz00_bglt) (BgL_aux3574z00_1811);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_3246, BgL_auxz00_3248);
				}}
				return
					((BgL_localzf2ginfozf2_bglt)
					(BgL_localzf2ginfozf2_bglt) (BgL_aux3574z00_1811));
			}
		}
	}



/* _make-local/Ginfo */
	obj_t BGl__makezd2localzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2767, obj_t BgL_id3564z00_2768, obj_t BgL_name3565z00_2769,
		obj_t BgL_type3566z00_2770, obj_t BgL_value3567z00_2771,
		obj_t BgL_access3568z00_2772, obj_t BgL_fastzd2alpha3569zd2_2773,
		obj_t BgL_removable3570z00_2774, obj_t BgL_occurrence3571z00_2775,
		obj_t BgL_userzf33572zf3_2776, obj_t BgL_key3573z00_2777,
		obj_t BgL_escapezf33562zf3_2778, obj_t BgL_globaliza7edzf33563z54_2779)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 81 */
			return
				(obj_t) (BGl_makezd2localzf2Ginfoz20zzglobaliza7e_ginfoza7
				(BgL_id3564z00_2768, BgL_name3565z00_2769,
					(BgL_typez00_bglt) (BgL_type3566z00_2770),
					(BgL_valuez00_bglt) (BgL_value3567z00_2771), BgL_access3568z00_2772,
					BgL_fastzd2alpha3569zd2_2773, BgL_removable3570z00_2774,
					(long) CINT(BgL_occurrence3571z00_2775),
					CBOOL(BgL_userzf33572zf3_2776), (long) CINT(BgL_key3573z00_2777),
					CBOOL(BgL_escapezf33562zf3_2778),
					CBOOL(BgL_globaliza7edzf33563z54_2779)));
		}
	}



/* fill-local/Ginfo! */
	BGL_EXPORTED_DEF BgL_localzf2ginfozf2_bglt
		BGl_fillzd2localzf2Ginfoz12z32zzglobaliza7e_ginfoza7
		(BgL_localzf2ginfozf2_bglt BgL_new3578z00_52,
		bool_t BgL_escapezf33576zf3_53, bool_t BgL_globaliza7edzf33577z54_54)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 81 */
			{	/* Globalize/ginfo.scm 81 */
				bool_t BgL_escapezf33576zf3_2963;

				bool_t BgL_globaliza7edzf33577z54_2964;

				BgL_escapezf33576zf3_2963 = BgL_escapezf33576zf3_53;
				BgL_globaliza7edzf33577z54_2964 = BgL_globaliza7edzf33577z54_54;
				((((BgL_localzf2ginfozf2_bglt) CREF(BgL_new3578z00_52))->
						BgL_escapezf3zf3) = ((bool_t) BgL_escapezf33576zf3_2963), BUNSPEC);
				((((BgL_localzf2ginfozf2_bglt) CREF(BgL_new3578z00_52))->
						BgL_globaliza7edzf3z54) =
					((bool_t) BgL_globaliza7edzf33577z54_2964), BUNSPEC);
				return BgL_new3578z00_52;
			}
		}
	}



/* _fill-local/Ginfo! */
	obj_t BGl__fillzd2localzf2Ginfoz12z32zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2780, obj_t BgL_new3578z00_2781, obj_t BgL_escapezf33576zf3_2782,
		obj_t BgL_globaliza7edzf33577z54_2783)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 81 */
			{	/* Globalize/ginfo.scm 81 */
				BgL_localzf2ginfozf2_bglt BgL_auxz00_3264;

				{	/* Globalize/ginfo.scm 81 */
					BgL_localzf2ginfozf2_bglt BgL_res4056z00_2970;

					{	/* Globalize/ginfo.scm 81 */
						BgL_localzf2ginfozf2_bglt BgL_new3578z00_2965;

						bool_t BgL_escapezf33576zf3_2966;

						bool_t BgL_globaliza7edzf33577z54_2967;

						BgL_new3578z00_2965 =
							(BgL_localzf2ginfozf2_bglt) (BgL_new3578z00_2781);
						BgL_escapezf33576zf3_2966 = CBOOL(BgL_escapezf33576zf3_2782);
						BgL_globaliza7edzf33577z54_2967 =
							CBOOL(BgL_globaliza7edzf33577z54_2783);
						{	/* Globalize/ginfo.scm 81 */
							bool_t BgL_escapezf33576zf3_2968;

							bool_t BgL_globaliza7edzf33577z54_2969;

							BgL_escapezf33576zf3_2968 = BgL_escapezf33576zf3_2966;
							BgL_globaliza7edzf33577z54_2969 = BgL_globaliza7edzf33577z54_2967;
							((((BgL_localzf2ginfozf2_bglt) CREF(BgL_new3578z00_2965))->
									BgL_escapezf3zf3) =
								((bool_t) BgL_escapezf33576zf3_2968), BUNSPEC);
							((((BgL_localzf2ginfozf2_bglt) CREF(BgL_new3578z00_2965))->
									BgL_globaliza7edzf3z54) =
								((bool_t) BgL_globaliza7edzf33577z54_2969), BUNSPEC);
							BgL_res4056z00_2970 = BgL_new3578z00_2965;
						}
					}
					BgL_auxz00_3264 = BgL_res4056z00_2970;
				}
				return (obj_t) (BgL_auxz00_3264);
			}
		}
	}



/* %allocate-local/Ginfo */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_z52allocatezd2localzf2Ginfoz72zzglobaliza7e_ginfoza7()
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 81 */
			{	/* Globalize/ginfo.scm 81 */
				BgL_localz00_bglt BgL_new3582z00_2971;

				BgL_new3582z00_2971 =
					((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_localz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3582z00_2971),
					BGl_classzd2numzd2zz__objectz00
					(BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7));
				{	/* Globalize/ginfo.scm 81 */
					BgL_objectz00_bglt BgL_auxz00_3275;

					BgL_auxz00_3275 = (BgL_objectz00_bglt) (BgL_new3582z00_2971);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3275, BFALSE);
				}
				return BgL_new3582z00_2971;
			}
		}
	}



/* _%allocate-local/Ginfo */
	obj_t BGl__z52allocatezd2localzf2Ginfoz72zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2730)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 81 */
			{	/* Globalize/ginfo.scm 81 */
				BgL_localz00_bglt BgL_auxz00_3278;

				{	/* Globalize/ginfo.scm 81 */
					BgL_localz00_bglt BgL_res4057z00_2975;

					{	/* Globalize/ginfo.scm 81 */
						BgL_localz00_bglt BgL_new3582z00_2973;

						BgL_new3582z00_2973 =
							((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_localz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3582z00_2973),
							BGl_classzd2numzd2zz__objectz00
							(BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7));
						{	/* Globalize/ginfo.scm 81 */
							BgL_objectz00_bglt BgL_auxz00_3283;

							BgL_auxz00_3283 = (BgL_objectz00_bglt) (BgL_new3582z00_2973);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3283, BFALSE);
						}
						BgL_res4057z00_2975 = BgL_new3582z00_2973;
					}
					BgL_auxz00_3278 = BgL_res4057z00_2975;
				}
				return (obj_t) (BgL_auxz00_3278);
			}
		}
	}



/* local/Ginfo-nil */
	BGL_EXPORTED_DEF BgL_localzf2ginfozf2_bglt
		BGl_localzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7()
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 81 */
			if (
				(BGl_z52thezd2localzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7 == BUNSPEC))
				{	/* Globalize/ginfo.scm 81 */
					{	/* Globalize/ginfo.scm 81 */
						BgL_localz00_bglt BgL_res3994z00_1837;

						{	/* Globalize/ginfo.scm 81 */
							BgL_localz00_bglt BgL_new1810z00_1833;

							BgL_new1810z00_1833 =
								((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_localz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1810z00_1833),
								BGl_classzd2numzd2zz__objectz00(BGl_localz00zzast_varz00));
							{	/* Globalize/ginfo.scm 81 */
								BgL_objectz00_bglt BgL_auxz00_3293;

								BgL_auxz00_3293 = (BgL_objectz00_bglt) (BgL_new1810z00_1833);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3293, BFALSE);
							}
							BgL_res3994z00_1837 = BgL_new1810z00_1833;
						}
						BGl_z52thezd2localzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7 =
							(obj_t) (BgL_res3994z00_1837);
					}
					{	/* Globalize/ginfo.scm 81 */
						obj_t BgL_arg3787z00_1094;

						BgL_typez00_bglt BgL_arg3788z00_1095;

						BgL_valuez00_bglt BgL_arg3789z00_1096;

						BgL_arg3787z00_1094 = CNST_TABLE_REF(((long) 5));
						BgL_arg3788z00_1095 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg3789z00_1096 = BGl_valuezd2nilzd2zzast_varz00();
						{	/* Globalize/ginfo.scm 81 */
							BgL_localz00_bglt BgL_res3995z00_1859;

							{	/* Globalize/ginfo.scm 81 */
								BgL_localz00_bglt BgL_new1798z00_1838;

								BgL_new1798z00_1838 =
									(BgL_localz00_bglt)
									(BGl_z52thezd2localzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7);
								{	/* Globalize/ginfo.scm 81 */
									obj_t BgL_id1788z00_1849;

									obj_t BgL_name1789z00_1850;

									BgL_typez00_bglt BgL_type1790z00_1851;

									BgL_valuez00_bglt BgL_value1791z00_1852;

									obj_t BgL_access1792z00_1853;

									obj_t BgL_fastzd2alpha1793zd2_1854;

									obj_t BgL_removable1794z00_1855;

									long BgL_occurrence1795z00_1856;

									bool_t BgL_userzf31796zf3_1857;

									long BgL_key1797z00_1858;

									BgL_id1788z00_1849 = BgL_arg3787z00_1094;
									BgL_name1789z00_1850 = BUNSPEC;
									BgL_type1790z00_1851 = BgL_arg3788z00_1095;
									BgL_value1791z00_1852 = BgL_arg3789z00_1096;
									BgL_access1792z00_1853 = BUNSPEC;
									BgL_fastzd2alpha1793zd2_1854 = BUNSPEC;
									BgL_removable1794z00_1855 = BUNSPEC;
									BgL_occurrence1795z00_1856 = ((long) 0);
									BgL_userzf31796zf3_1857 = ((bool_t) 0);
									BgL_key1797z00_1858 = ((long) 0);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1838))->
											BgL_idz00) = ((obj_t) BgL_id1788z00_1849), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1838))->
											BgL_namez00) = ((obj_t) BgL_name1789z00_1850), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1838))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type1790z00_1851), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1838))->
											BgL_valuez00) =
										((BgL_valuez00_bglt) BgL_value1791z00_1852), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1838))->
											BgL_accessz00) =
										((obj_t) BgL_access1792z00_1853), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1838))->
											BgL_fastzd2alphazd2) =
										((obj_t) BgL_fastzd2alpha1793zd2_1854), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1838))->
											BgL_removablez00) =
										((obj_t) BgL_removable1794z00_1855), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1838))->
											BgL_occurrencez00) =
										((long) BgL_occurrence1795z00_1856), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1838))->
											BgL_userzf3zf3) =
										((bool_t) BgL_userzf31796zf3_1857), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1838))->
											BgL_keyz00) = ((long) BgL_key1797z00_1858), BUNSPEC);
									BgL_res3995z00_1859 = BgL_new1798z00_1838;
							}} BgL_res3995z00_1859;
					}}
					{	/* Globalize/ginfo.scm 81 */
						long BgL_arg3792z00_1099;

						BgL_arg3792z00_1099 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2localzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7),
							BgL_arg3792z00_1099);
					}
					{	/* Globalize/ginfo.scm 81 */
						BgL_localzf2ginfozf2_bglt BgL_arg3793z00_1100;

						{	/* Globalize/ginfo.scm 81 */
							BgL_localzf2ginfozf2_bglt BgL_res3997z00_1871;

							{	/* Globalize/ginfo.scm 81 */
								BgL_localzf2ginfozf2_bglt BgL_new3560z00_1864;

								BgL_new3560z00_1864 =
									((BgL_localzf2ginfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_localzf2ginfozf2_bgl))));
								{	/* Globalize/ginfo.scm 81 */
									BgL_localzf2ginfozf2_bglt BgL_res3996z00_1870;

									{	/* Globalize/ginfo.scm 81 */
										BgL_localzf2ginfozf2_bglt BgL_new3578z00_1865;

										BgL_new3578z00_1865 = BgL_new3560z00_1864;
										{	/* Globalize/ginfo.scm 81 */
											bool_t BgL_escapezf33576zf3_1868;

											bool_t BgL_globaliza7edzf33577z54_1869;

											BgL_escapezf33576zf3_1868 = ((bool_t) 0);
											BgL_globaliza7edzf33577z54_1869 = ((bool_t) 0);
											((((BgL_localzf2ginfozf2_bglt)
														CREF(BgL_new3578z00_1865))->BgL_escapezf3zf3) =
												((bool_t) BgL_escapezf33576zf3_1868), BUNSPEC);
											((((BgL_localzf2ginfozf2_bglt)
														CREF(BgL_new3578z00_1865))->
													BgL_globaliza7edzf3z54) =
												((bool_t) BgL_globaliza7edzf33577z54_1869), BUNSPEC);
											BgL_res3996z00_1870 = BgL_new3578z00_1865;
									}} BgL_res3996z00_1870;
								}
								BgL_res3997z00_1871 = BgL_new3560z00_1864;
							}
							BgL_arg3793z00_1100 = BgL_res3997z00_1871;
						}
						{	/* Globalize/ginfo.scm 81 */
							obj_t BgL_auxz00_3319;

							BgL_objectz00_bglt BgL_auxz00_3317;

							BgL_auxz00_3319 = (obj_t) (BgL_arg3793z00_1100);
							BgL_auxz00_3317 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2localzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3317, BgL_auxz00_3319);
				}}}
			else
				{	/* Globalize/ginfo.scm 81 */
					BFALSE;
				}
			return
				(BgL_localzf2ginfozf2_bglt)
				(BGl_z52thezd2localzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7);
		}
	}



/* _local/Ginfo-nil */
	obj_t BGl__localzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7(obj_t BgL_envz00_2731)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 81 */
			return (obj_t) (BGl_localzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7());
		}
	}



/* sexit/Ginfo? */
	BGL_EXPORTED_DEF bool_t BGl_sexitzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t
		BgL_obj3538z00_61)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 71 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3538z00_61,
				BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7);
		}
	}



/* _sexit/Ginfo? */
	obj_t BGl__sexitzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t BgL_envz00_2728,
		obj_t BgL_obj3538z00_2729)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 71 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3538z00_2729,
					BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7));
		}
	}



/* widening-sexit/Ginfo */
	BGL_EXPORTED_DEF BgL_sexitzf2ginfozf2_bglt
		BGl_wideningzd2sexitzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t
		BgL_gzf33507zf3_65, bool_t BgL_kapturedzf33508zf3_66,
		long BgL_freezd2mark3509zd2_67, long BgL_mark3510z00_68)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 71 */
			{	/* Globalize/ginfo.scm 71 */
				BgL_sexitzf2ginfozf2_bglt BgL_new3511z00_1872;

				BgL_new3511z00_1872 =
					((BgL_sexitzf2ginfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_sexitzf2ginfozf2_bgl))));
				{	/* Globalize/ginfo.scm 71 */
					BgL_sexitzf2ginfozf2_bglt BgL_res3998z00_1882;

					{	/* Globalize/ginfo.scm 71 */
						BgL_sexitzf2ginfozf2_bglt BgL_new3525z00_1873;

						BgL_new3525z00_1873 = BgL_new3511z00_1872;
						{	/* Globalize/ginfo.scm 71 */
							bool_t BgL_gzf33521zf3_1878;

							bool_t BgL_kapturedzf33522zf3_1879;

							long BgL_freezd2mark3523zd2_1880;

							long BgL_mark3524z00_1881;

							BgL_gzf33521zf3_1878 = BgL_gzf33507zf3_65;
							BgL_kapturedzf33522zf3_1879 = BgL_kapturedzf33508zf3_66;
							BgL_freezd2mark3523zd2_1880 = BgL_freezd2mark3509zd2_67;
							BgL_mark3524z00_1881 = BgL_mark3510z00_68;
							((((BgL_sexitzf2ginfozf2_bglt) CREF(BgL_new3525z00_1873))->
									BgL_gzf3zf3) = ((bool_t) BgL_gzf33521zf3_1878), BUNSPEC);
							((((BgL_sexitzf2ginfozf2_bglt) CREF(BgL_new3525z00_1873))->
									BgL_kapturedzf3zf3) =
								((bool_t) BgL_kapturedzf33522zf3_1879), BUNSPEC);
							((((BgL_sexitzf2ginfozf2_bglt) CREF(BgL_new3525z00_1873))->
									BgL_freezd2markzd2) =
								((long) BgL_freezd2mark3523zd2_1880), BUNSPEC);
							((((BgL_sexitzf2ginfozf2_bglt) CREF(BgL_new3525z00_1873))->
									BgL_markz00) = ((long) BgL_mark3524z00_1881), BUNSPEC);
							BgL_res3998z00_1882 = BgL_new3525z00_1873;
					}} BgL_res3998z00_1882;
				}
				return BgL_new3511z00_1872;
			}
		}
	}



/* _widening-sexit/Ginfo */
	obj_t BGl__wideningzd2sexitzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2784, obj_t BgL_gzf33507zf3_2785,
		obj_t BgL_kapturedzf33508zf3_2786, obj_t BgL_freezd2mark3509zd2_2787,
		obj_t BgL_mark3510z00_2788)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 71 */
			return
				(obj_t) (BGl_wideningzd2sexitzf2Ginfoz20zzglobaliza7e_ginfoza7(CBOOL
					(BgL_gzf33507zf3_2785), CBOOL(BgL_kapturedzf33508zf3_2786),
					(long) CINT(BgL_freezd2mark3509zd2_2787),
					(long) CINT(BgL_mark3510z00_2788)));
		}
	}



/* make-sexit/Ginfo */
	BGL_EXPORTED_DEF BgL_sexitzf2ginfozf2_bglt
		BGl_makezd2sexitzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t
		BgL_handler3517z00_69, bool_t BgL_detachedzf33518zf3_70,
		bool_t BgL_gzf33513zf3_71, bool_t BgL_kapturedzf33514zf3_72,
		long BgL_freezd2mark3515zd2_73, long BgL_mark3516z00_74)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 71 */
			{	/* Globalize/ginfo.scm 71 */
				BgL_sexitz00_bglt BgL_aux3519z00_1883;

				BgL_aux3519z00_1883 =
					BGl_makezd2sexitzd2zzast_varz00(BgL_handler3517z00_69,
					BgL_detachedzf33518zf3_70);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3519z00_1883),
					BGl_classzd2numzd2zz__objectz00
					(BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7));
				{	/* Globalize/ginfo.scm 71 */
					BgL_sexitzf2ginfozf2_bglt BgL_arg3795z00_1885;

					{	/* Globalize/ginfo.scm 71 */
						BgL_sexitzf2ginfozf2_bglt BgL_res4000z00_1904;

						{	/* Globalize/ginfo.scm 71 */
							BgL_sexitzf2ginfozf2_bglt BgL_new3511z00_1893;

							BgL_new3511z00_1893 =
								((BgL_sexitzf2ginfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_sexitzf2ginfozf2_bgl))));
							{	/* Globalize/ginfo.scm 71 */
								BgL_sexitzf2ginfozf2_bglt BgL_res3999z00_1903;

								{	/* Globalize/ginfo.scm 71 */
									BgL_sexitzf2ginfozf2_bglt BgL_new3525z00_1894;

									BgL_new3525z00_1894 = BgL_new3511z00_1893;
									{	/* Globalize/ginfo.scm 71 */
										bool_t BgL_gzf33521zf3_1899;

										bool_t BgL_kapturedzf33522zf3_1900;

										long BgL_freezd2mark3523zd2_1901;

										long BgL_mark3524z00_1902;

										BgL_gzf33521zf3_1899 = BgL_gzf33513zf3_71;
										BgL_kapturedzf33522zf3_1900 = BgL_kapturedzf33514zf3_72;
										BgL_freezd2mark3523zd2_1901 = BgL_freezd2mark3515zd2_73;
										BgL_mark3524z00_1902 = BgL_mark3516z00_74;
										((((BgL_sexitzf2ginfozf2_bglt) CREF(BgL_new3525z00_1894))->
												BgL_gzf3zf3) =
											((bool_t) BgL_gzf33521zf3_1899), BUNSPEC);
										((((BgL_sexitzf2ginfozf2_bglt) CREF(BgL_new3525z00_1894))->
												BgL_kapturedzf3zf3) =
											((bool_t) BgL_kapturedzf33522zf3_1900), BUNSPEC);
										((((BgL_sexitzf2ginfozf2_bglt) CREF(BgL_new3525z00_1894))->
												BgL_freezd2markzd2) =
											((long) BgL_freezd2mark3523zd2_1901), BUNSPEC);
										((((BgL_sexitzf2ginfozf2_bglt) CREF(BgL_new3525z00_1894))->
												BgL_markz00) = ((long) BgL_mark3524z00_1902), BUNSPEC);
										BgL_res3999z00_1903 = BgL_new3525z00_1894;
								}} BgL_res3999z00_1903;
							}
							BgL_res4000z00_1904 = BgL_new3511z00_1893;
						}
						BgL_arg3795z00_1885 = BgL_res4000z00_1904;
					}
					{	/* Globalize/ginfo.scm 71 */
						obj_t BgL_auxz00_3350;

						BgL_objectz00_bglt BgL_auxz00_3348;

						BgL_auxz00_3350 = (obj_t) (BgL_arg3795z00_1885);
						BgL_auxz00_3348 = (BgL_objectz00_bglt) (BgL_aux3519z00_1883);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_3348, BgL_auxz00_3350);
				}}
				return
					((BgL_sexitzf2ginfozf2_bglt)
					(BgL_sexitzf2ginfozf2_bglt) (BgL_aux3519z00_1883));
			}
		}
	}



/* _make-sexit/Ginfo */
	obj_t BGl__makezd2sexitzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2789, obj_t BgL_handler3517z00_2790,
		obj_t BgL_detachedzf33518zf3_2791, obj_t BgL_gzf33513zf3_2792,
		obj_t BgL_kapturedzf33514zf3_2793, obj_t BgL_freezd2mark3515zd2_2794,
		obj_t BgL_mark3516z00_2795)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 71 */
			return
				(obj_t) (BGl_makezd2sexitzf2Ginfoz20zzglobaliza7e_ginfoza7
				(BgL_handler3517z00_2790, CBOOL(BgL_detachedzf33518zf3_2791),
					CBOOL(BgL_gzf33513zf3_2792), CBOOL(BgL_kapturedzf33514zf3_2793),
					(long) CINT(BgL_freezd2mark3515zd2_2794),
					(long) CINT(BgL_mark3516z00_2795)));
		}
	}



/* fill-sexit/Ginfo! */
	BGL_EXPORTED_DEF BgL_sexitzf2ginfozf2_bglt
		BGl_fillzd2sexitzf2Ginfoz12z32zzglobaliza7e_ginfoza7
		(BgL_sexitzf2ginfozf2_bglt BgL_new3525z00_75, bool_t BgL_gzf33521zf3_76,
		bool_t BgL_kapturedzf33522zf3_77, long BgL_freezd2mark3523zd2_78,
		long BgL_mark3524z00_79)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 71 */
			{	/* Globalize/ginfo.scm 71 */
				bool_t BgL_gzf33521zf3_2977;

				bool_t BgL_kapturedzf33522zf3_2978;

				long BgL_freezd2mark3523zd2_2979;

				long BgL_mark3524z00_2980;

				BgL_gzf33521zf3_2977 = BgL_gzf33521zf3_76;
				BgL_kapturedzf33522zf3_2978 = BgL_kapturedzf33522zf3_77;
				BgL_freezd2mark3523zd2_2979 = BgL_freezd2mark3523zd2_78;
				BgL_mark3524z00_2980 = BgL_mark3524z00_79;
				((((BgL_sexitzf2ginfozf2_bglt) CREF(BgL_new3525z00_75))->BgL_gzf3zf3) =
					((bool_t) BgL_gzf33521zf3_2977), BUNSPEC);
				((((BgL_sexitzf2ginfozf2_bglt) CREF(BgL_new3525z00_75))->
						BgL_kapturedzf3zf3) =
					((bool_t) BgL_kapturedzf33522zf3_2978), BUNSPEC);
				((((BgL_sexitzf2ginfozf2_bglt) CREF(BgL_new3525z00_75))->
						BgL_freezd2markzd2) =
					((long) BgL_freezd2mark3523zd2_2979), BUNSPEC);
				((((BgL_sexitzf2ginfozf2_bglt) CREF(BgL_new3525z00_75))->BgL_markz00) =
					((long) BgL_mark3524z00_2980), BUNSPEC);
				return BgL_new3525z00_75;
			}
		}
	}



/* _fill-sexit/Ginfo! */
	obj_t BGl__fillzd2sexitzf2Ginfoz12z32zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2796, obj_t BgL_new3525z00_2797, obj_t BgL_gzf33521zf3_2798,
		obj_t BgL_kapturedzf33522zf3_2799, obj_t BgL_freezd2mark3523zd2_2800,
		obj_t BgL_mark3524z00_2801)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 71 */
			{	/* Globalize/ginfo.scm 71 */
				BgL_sexitzf2ginfozf2_bglt BgL_auxz00_3366;

				{	/* Globalize/ginfo.scm 71 */
					BgL_sexitzf2ginfozf2_bglt BgL_res4058z00_2990;

					{	/* Globalize/ginfo.scm 71 */
						BgL_sexitzf2ginfozf2_bglt BgL_new3525z00_2981;

						bool_t BgL_gzf33521zf3_2982;

						bool_t BgL_kapturedzf33522zf3_2983;

						long BgL_freezd2mark3523zd2_2984;

						long BgL_mark3524z00_2985;

						BgL_new3525z00_2981 =
							(BgL_sexitzf2ginfozf2_bglt) (BgL_new3525z00_2797);
						BgL_gzf33521zf3_2982 = CBOOL(BgL_gzf33521zf3_2798);
						BgL_kapturedzf33522zf3_2983 = CBOOL(BgL_kapturedzf33522zf3_2799);
						BgL_freezd2mark3523zd2_2984 =
							(long) CINT(BgL_freezd2mark3523zd2_2800);
						BgL_mark3524z00_2985 = (long) CINT(BgL_mark3524z00_2801);
						{	/* Globalize/ginfo.scm 71 */
							bool_t BgL_gzf33521zf3_2986;

							bool_t BgL_kapturedzf33522zf3_2987;

							long BgL_freezd2mark3523zd2_2988;

							long BgL_mark3524z00_2989;

							BgL_gzf33521zf3_2986 = BgL_gzf33521zf3_2982;
							BgL_kapturedzf33522zf3_2987 = BgL_kapturedzf33522zf3_2983;
							BgL_freezd2mark3523zd2_2988 = BgL_freezd2mark3523zd2_2984;
							BgL_mark3524z00_2989 = BgL_mark3524z00_2985;
							((((BgL_sexitzf2ginfozf2_bglt) CREF(BgL_new3525z00_2981))->
									BgL_gzf3zf3) = ((bool_t) BgL_gzf33521zf3_2986), BUNSPEC);
							((((BgL_sexitzf2ginfozf2_bglt) CREF(BgL_new3525z00_2981))->
									BgL_kapturedzf3zf3) =
								((bool_t) BgL_kapturedzf33522zf3_2987), BUNSPEC);
							((((BgL_sexitzf2ginfozf2_bglt) CREF(BgL_new3525z00_2981))->
									BgL_freezd2markzd2) =
								((long) BgL_freezd2mark3523zd2_2988), BUNSPEC);
							((((BgL_sexitzf2ginfozf2_bglt) CREF(BgL_new3525z00_2981))->
									BgL_markz00) = ((long) BgL_mark3524z00_2989), BUNSPEC);
							BgL_res4058z00_2990 = BgL_new3525z00_2981;
					}}
					BgL_auxz00_3366 = BgL_res4058z00_2990;
				}
				return (obj_t) (BgL_auxz00_3366);
			}
		}
	}



/* %allocate-sexit/Ginfo */
	BGL_EXPORTED_DEF BgL_sexitz00_bglt
		BGl_z52allocatezd2sexitzf2Ginfoz72zzglobaliza7e_ginfoza7()
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 71 */
			{	/* Globalize/ginfo.scm 71 */
				BgL_sexitz00_bglt BgL_new3531z00_2991;

				BgL_new3531z00_2991 =
					((BgL_sexitz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_sexitz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3531z00_2991),
					BGl_classzd2numzd2zz__objectz00
					(BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7));
				{	/* Globalize/ginfo.scm 71 */
					BgL_objectz00_bglt BgL_auxz00_3381;

					BgL_auxz00_3381 = (BgL_objectz00_bglt) (BgL_new3531z00_2991);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3381, BFALSE);
				}
				return BgL_new3531z00_2991;
			}
		}
	}



/* _%allocate-sexit/Ginfo */
	obj_t BGl__z52allocatezd2sexitzf2Ginfoz72zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2726)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 71 */
			{	/* Globalize/ginfo.scm 71 */
				BgL_sexitz00_bglt BgL_auxz00_3384;

				{	/* Globalize/ginfo.scm 71 */
					BgL_sexitz00_bglt BgL_res4059z00_2995;

					{	/* Globalize/ginfo.scm 71 */
						BgL_sexitz00_bglt BgL_new3531z00_2993;

						BgL_new3531z00_2993 =
							((BgL_sexitz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_sexitz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3531z00_2993),
							BGl_classzd2numzd2zz__objectz00
							(BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7));
						{	/* Globalize/ginfo.scm 71 */
							BgL_objectz00_bglt BgL_auxz00_3389;

							BgL_auxz00_3389 = (BgL_objectz00_bglt) (BgL_new3531z00_2993);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3389, BFALSE);
						}
						BgL_res4059z00_2995 = BgL_new3531z00_2993;
					}
					BgL_auxz00_3384 = BgL_res4059z00_2995;
				}
				return (obj_t) (BgL_auxz00_3384);
			}
		}
	}



/* sexit/Ginfo-nil */
	BGL_EXPORTED_DEF BgL_sexitzf2ginfozf2_bglt
		BGl_sexitzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7()
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 71 */
			if (
				(BGl_z52thezd2sexitzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7 == BUNSPEC))
				{	/* Globalize/ginfo.scm 71 */
					{	/* Globalize/ginfo.scm 71 */
						BgL_sexitz00_bglt BgL_res4001z00_1917;

						{	/* Globalize/ginfo.scm 71 */
							BgL_sexitz00_bglt BgL_new2072z00_1913;

							BgL_new2072z00_1913 =
								((BgL_sexitz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_sexitz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2072z00_1913),
								BGl_classzd2numzd2zz__objectz00(BGl_sexitz00zzast_varz00));
							{	/* Globalize/ginfo.scm 71 */
								BgL_objectz00_bglt BgL_auxz00_3399;

								BgL_auxz00_3399 = (BgL_objectz00_bglt) (BgL_new2072z00_1913);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3399, BFALSE);
							}
							BgL_res4001z00_1917 = BgL_new2072z00_1913;
						}
						BGl_z52thezd2sexitzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7 =
							(obj_t) (BgL_res4001z00_1917);
					}
					{	/* Globalize/ginfo.scm 71 */
						BgL_sexitz00_bglt BgL_res4002z00_1923;

						{	/* Globalize/ginfo.scm 71 */
							BgL_sexitz00_bglt BgL_new2068z00_1918;

							BgL_new2068z00_1918 =
								(BgL_sexitz00_bglt)
								(BGl_z52thezd2sexitzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7);
							{	/* Globalize/ginfo.scm 71 */
								obj_t BgL_handler2066z00_1921;

								bool_t BgL_detachedzf32067zf3_1922;

								BgL_handler2066z00_1921 = BUNSPEC;
								BgL_detachedzf32067zf3_1922 = ((bool_t) 0);
								((((BgL_sexitz00_bglt) CREF(BgL_new2068z00_1918))->
										BgL_handlerz00) =
									((obj_t) BgL_handler2066z00_1921), BUNSPEC);
								((((BgL_sexitz00_bglt) CREF(BgL_new2068z00_1918))->
										BgL_detachedzf3zf3) =
									((bool_t) BgL_detachedzf32067zf3_1922), BUNSPEC);
								BgL_res4002z00_1923 = BgL_new2068z00_1918;
						}} BgL_res4002z00_1923;
					}
					{	/* Globalize/ginfo.scm 71 */
						long BgL_arg3798z00_1113;

						BgL_arg3798z00_1113 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2sexitzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7),
							BgL_arg3798z00_1113);
					}
					{	/* Globalize/ginfo.scm 71 */
						BgL_sexitzf2ginfozf2_bglt BgL_arg3799z00_1114;

						{	/* Globalize/ginfo.scm 71 */
							BgL_sexitzf2ginfozf2_bglt BgL_res4004z00_1941;

							{	/* Globalize/ginfo.scm 71 */
								BgL_sexitzf2ginfozf2_bglt BgL_new3511z00_1930;

								BgL_new3511z00_1930 =
									((BgL_sexitzf2ginfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_sexitzf2ginfozf2_bgl))));
								{	/* Globalize/ginfo.scm 71 */
									BgL_sexitzf2ginfozf2_bglt BgL_res4003z00_1940;

									{	/* Globalize/ginfo.scm 71 */
										BgL_sexitzf2ginfozf2_bglt BgL_new3525z00_1931;

										BgL_new3525z00_1931 = BgL_new3511z00_1930;
										{	/* Globalize/ginfo.scm 71 */
											bool_t BgL_gzf33521zf3_1936;

											bool_t BgL_kapturedzf33522zf3_1937;

											long BgL_freezd2mark3523zd2_1938;

											long BgL_mark3524z00_1939;

											BgL_gzf33521zf3_1936 = ((bool_t) 0);
											BgL_kapturedzf33522zf3_1937 = ((bool_t) 0);
											BgL_freezd2mark3523zd2_1938 = ((long) 0);
											BgL_mark3524z00_1939 = ((long) 0);
											((((BgL_sexitzf2ginfozf2_bglt)
														CREF(BgL_new3525z00_1931))->BgL_gzf3zf3) =
												((bool_t) BgL_gzf33521zf3_1936), BUNSPEC);
											((((BgL_sexitzf2ginfozf2_bglt)
														CREF(BgL_new3525z00_1931))->BgL_kapturedzf3zf3) =
												((bool_t) BgL_kapturedzf33522zf3_1937), BUNSPEC);
											((((BgL_sexitzf2ginfozf2_bglt)
														CREF(BgL_new3525z00_1931))->BgL_freezd2markzd2) =
												((long) BgL_freezd2mark3523zd2_1938), BUNSPEC);
											((((BgL_sexitzf2ginfozf2_bglt)
														CREF(BgL_new3525z00_1931))->BgL_markz00) =
												((long) BgL_mark3524z00_1939), BUNSPEC);
											BgL_res4003z00_1940 = BgL_new3525z00_1931;
									}} BgL_res4003z00_1940;
								}
								BgL_res4004z00_1941 = BgL_new3511z00_1930;
							}
							BgL_arg3799z00_1114 = BgL_res4004z00_1941;
						}
						{	/* Globalize/ginfo.scm 71 */
							obj_t BgL_auxz00_3416;

							BgL_objectz00_bglt BgL_auxz00_3414;

							BgL_auxz00_3416 = (obj_t) (BgL_arg3799z00_1114);
							BgL_auxz00_3414 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2sexitzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3414, BgL_auxz00_3416);
				}}}
			else
				{	/* Globalize/ginfo.scm 71 */
					BFALSE;
				}
			return
				(BgL_sexitzf2ginfozf2_bglt)
				(BGl_z52thezd2sexitzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7);
		}
	}



/* _sexit/Ginfo-nil */
	obj_t BGl__sexitzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7(obj_t BgL_envz00_2727)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 71 */
			return (obj_t) (BGl_sexitzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7());
		}
	}



/* svar/Ginfo? */
	BGL_EXPORTED_DEF bool_t BGl_svarzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t
		BgL_obj3490z00_92)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 61 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3490z00_92,
				BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
		}
	}



/* _svar/Ginfo? */
	obj_t BGl__svarzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t BgL_envz00_2724,
		obj_t BgL_obj3490z00_2725)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 61 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3490z00_2725,
					BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7));
		}
	}



/* widening-svar/Ginfo */
	BGL_EXPORTED_DEF BgL_svarzf2ginfozf2_bglt
		BGl_wideningzd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t
		BgL_kapturedzf33460zf3_96, long BgL_freezd2mark3461zd2_97,
		long BgL_mark3462z00_98, bool_t BgL_celledzf33463zf3_99)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 61 */
			{	/* Globalize/ginfo.scm 61 */
				BgL_svarzf2ginfozf2_bglt BgL_new3464z00_1942;

				BgL_new3464z00_1942 =
					((BgL_svarzf2ginfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_svarzf2ginfozf2_bgl))));
				{	/* Globalize/ginfo.scm 61 */
					BgL_svarzf2ginfozf2_bglt BgL_res4005z00_1952;

					{	/* Globalize/ginfo.scm 61 */
						BgL_svarzf2ginfozf2_bglt BgL_new3477z00_1943;

						BgL_new3477z00_1943 = BgL_new3464z00_1942;
						{	/* Globalize/ginfo.scm 61 */
							bool_t BgL_kapturedzf33473zf3_1948;

							long BgL_freezd2mark3474zd2_1949;

							long BgL_mark3475z00_1950;

							bool_t BgL_celledzf33476zf3_1951;

							BgL_kapturedzf33473zf3_1948 = BgL_kapturedzf33460zf3_96;
							BgL_freezd2mark3474zd2_1949 = BgL_freezd2mark3461zd2_97;
							BgL_mark3475z00_1950 = BgL_mark3462z00_98;
							BgL_celledzf33476zf3_1951 = BgL_celledzf33463zf3_99;
							((((BgL_svarzf2ginfozf2_bglt) CREF(BgL_new3477z00_1943))->
									BgL_kapturedzf3zf3) =
								((bool_t) BgL_kapturedzf33473zf3_1948), BUNSPEC);
							((((BgL_svarzf2ginfozf2_bglt) CREF(BgL_new3477z00_1943))->
									BgL_freezd2markzd2) =
								((long) BgL_freezd2mark3474zd2_1949), BUNSPEC);
							((((BgL_svarzf2ginfozf2_bglt) CREF(BgL_new3477z00_1943))->
									BgL_markz00) = ((long) BgL_mark3475z00_1950), BUNSPEC);
							((((BgL_svarzf2ginfozf2_bglt) CREF(BgL_new3477z00_1943))->
									BgL_celledzf3zf3) =
								((bool_t) BgL_celledzf33476zf3_1951), BUNSPEC);
							BgL_res4005z00_1952 = BgL_new3477z00_1943;
					}} BgL_res4005z00_1952;
				}
				return BgL_new3464z00_1942;
			}
		}
	}



/* _widening-svar/Ginfo */
	obj_t BGl__wideningzd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2802, obj_t BgL_kapturedzf33460zf3_2803,
		obj_t BgL_freezd2mark3461zd2_2804, obj_t BgL_mark3462z00_2805,
		obj_t BgL_celledzf33463zf3_2806)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 61 */
			return
				(obj_t) (BGl_wideningzd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7(CBOOL
					(BgL_kapturedzf33460zf3_2803),
					(long) CINT(BgL_freezd2mark3461zd2_2804),
					(long) CINT(BgL_mark3462z00_2805), CBOOL(BgL_celledzf33463zf3_2806)));
		}
	}



/* make-svar/Ginfo */
	BGL_EXPORTED_DEF BgL_svarzf2ginfozf2_bglt
		BGl_makezd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t BgL_loc3470z00_100,
		bool_t BgL_kapturedzf33466zf3_101, long BgL_freezd2mark3467zd2_102,
		long BgL_mark3468z00_103, bool_t BgL_celledzf33469zf3_104)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 61 */
			{	/* Globalize/ginfo.scm 61 */
				BgL_svarz00_bglt BgL_aux3471z00_1953;

				BgL_aux3471z00_1953 =
					BGl_makezd2svarzd2zzast_varz00(BgL_loc3470z00_100);
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_aux3471z00_1953),
					BGl_classzd2numzd2zz__objectz00
					(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7));
				{	/* Globalize/ginfo.scm 61 */
					BgL_svarzf2ginfozf2_bglt BgL_arg3801z00_1955;

					{	/* Globalize/ginfo.scm 61 */
						BgL_svarzf2ginfozf2_bglt BgL_res4007z00_1974;

						{	/* Globalize/ginfo.scm 61 */
							BgL_svarzf2ginfozf2_bglt BgL_new3464z00_1963;

							BgL_new3464z00_1963 =
								((BgL_svarzf2ginfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_svarzf2ginfozf2_bgl))));
							{	/* Globalize/ginfo.scm 61 */
								BgL_svarzf2ginfozf2_bglt BgL_res4006z00_1973;

								{	/* Globalize/ginfo.scm 61 */
									BgL_svarzf2ginfozf2_bglt BgL_new3477z00_1964;

									BgL_new3477z00_1964 = BgL_new3464z00_1963;
									{	/* Globalize/ginfo.scm 61 */
										bool_t BgL_kapturedzf33473zf3_1969;

										long BgL_freezd2mark3474zd2_1970;

										long BgL_mark3475z00_1971;

										bool_t BgL_celledzf33476zf3_1972;

										BgL_kapturedzf33473zf3_1969 = BgL_kapturedzf33466zf3_101;
										BgL_freezd2mark3474zd2_1970 = BgL_freezd2mark3467zd2_102;
										BgL_mark3475z00_1971 = BgL_mark3468z00_103;
										BgL_celledzf33476zf3_1972 = BgL_celledzf33469zf3_104;
										((((BgL_svarzf2ginfozf2_bglt) CREF(BgL_new3477z00_1964))->
												BgL_kapturedzf3zf3) =
											((bool_t) BgL_kapturedzf33473zf3_1969), BUNSPEC);
										((((BgL_svarzf2ginfozf2_bglt) CREF(BgL_new3477z00_1964))->
												BgL_freezd2markzd2) =
											((long) BgL_freezd2mark3474zd2_1970), BUNSPEC);
										((((BgL_svarzf2ginfozf2_bglt) CREF(BgL_new3477z00_1964))->
												BgL_markz00) = ((long) BgL_mark3475z00_1971), BUNSPEC);
										((((BgL_svarzf2ginfozf2_bglt) CREF(BgL_new3477z00_1964))->
												BgL_celledzf3zf3) =
											((bool_t) BgL_celledzf33476zf3_1972), BUNSPEC);
										BgL_res4006z00_1973 = BgL_new3477z00_1964;
								}} BgL_res4006z00_1973;
							}
							BgL_res4007z00_1974 = BgL_new3464z00_1963;
						}
						BgL_arg3801z00_1955 = BgL_res4007z00_1974;
					}
					{	/* Globalize/ginfo.scm 61 */
						obj_t BgL_auxz00_3447;

						BgL_objectz00_bglt BgL_auxz00_3445;

						BgL_auxz00_3447 = (obj_t) (BgL_arg3801z00_1955);
						BgL_auxz00_3445 = (BgL_objectz00_bglt) (BgL_aux3471z00_1953);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_3445, BgL_auxz00_3447);
				}}
				return
					((BgL_svarzf2ginfozf2_bglt)
					(BgL_svarzf2ginfozf2_bglt) (BgL_aux3471z00_1953));
			}
		}
	}



/* _make-svar/Ginfo */
	obj_t BGl__makezd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t BgL_envz00_2807,
		obj_t BgL_loc3470z00_2808, obj_t BgL_kapturedzf33466zf3_2809,
		obj_t BgL_freezd2mark3467zd2_2810, obj_t BgL_mark3468z00_2811,
		obj_t BgL_celledzf33469zf3_2812)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 61 */
			return
				(obj_t) (BGl_makezd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7
				(BgL_loc3470z00_2808, CBOOL(BgL_kapturedzf33466zf3_2809),
					(long) CINT(BgL_freezd2mark3467zd2_2810),
					(long) CINT(BgL_mark3468z00_2811), CBOOL(BgL_celledzf33469zf3_2812)));
		}
	}



/* fill-svar/Ginfo! */
	BGL_EXPORTED_DEF BgL_svarzf2ginfozf2_bglt
		BGl_fillzd2svarzf2Ginfoz12z32zzglobaliza7e_ginfoza7(BgL_svarzf2ginfozf2_bglt
		BgL_new3477z00_105, bool_t BgL_kapturedzf33473zf3_106,
		long BgL_freezd2mark3474zd2_107, long BgL_mark3475z00_108,
		bool_t BgL_celledzf33476zf3_109)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 61 */
			{	/* Globalize/ginfo.scm 61 */
				bool_t BgL_kapturedzf33473zf3_2997;

				long BgL_freezd2mark3474zd2_2998;

				long BgL_mark3475z00_2999;

				bool_t BgL_celledzf33476zf3_3000;

				BgL_kapturedzf33473zf3_2997 = BgL_kapturedzf33473zf3_106;
				BgL_freezd2mark3474zd2_2998 = BgL_freezd2mark3474zd2_107;
				BgL_mark3475z00_2999 = BgL_mark3475z00_108;
				BgL_celledzf33476zf3_3000 = BgL_celledzf33476zf3_109;
				((((BgL_svarzf2ginfozf2_bglt) CREF(BgL_new3477z00_105))->
						BgL_kapturedzf3zf3) =
					((bool_t) BgL_kapturedzf33473zf3_2997), BUNSPEC);
				((((BgL_svarzf2ginfozf2_bglt) CREF(BgL_new3477z00_105))->
						BgL_freezd2markzd2) =
					((long) BgL_freezd2mark3474zd2_2998), BUNSPEC);
				((((BgL_svarzf2ginfozf2_bglt) CREF(BgL_new3477z00_105))->BgL_markz00) =
					((long) BgL_mark3475z00_2999), BUNSPEC);
				((((BgL_svarzf2ginfozf2_bglt) CREF(BgL_new3477z00_105))->
						BgL_celledzf3zf3) = ((bool_t) BgL_celledzf33476zf3_3000), BUNSPEC);
				return BgL_new3477z00_105;
			}
		}
	}



/* _fill-svar/Ginfo! */
	obj_t BGl__fillzd2svarzf2Ginfoz12z32zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2813, obj_t BgL_new3477z00_2814,
		obj_t BgL_kapturedzf33473zf3_2815, obj_t BgL_freezd2mark3474zd2_2816,
		obj_t BgL_mark3475z00_2817, obj_t BgL_celledzf33476zf3_2818)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 61 */
			{	/* Globalize/ginfo.scm 61 */
				BgL_svarzf2ginfozf2_bglt BgL_auxz00_3462;

				{	/* Globalize/ginfo.scm 61 */
					BgL_svarzf2ginfozf2_bglt BgL_res4060z00_3010;

					{	/* Globalize/ginfo.scm 61 */
						BgL_svarzf2ginfozf2_bglt BgL_new3477z00_3001;

						bool_t BgL_kapturedzf33473zf3_3002;

						long BgL_freezd2mark3474zd2_3003;

						long BgL_mark3475z00_3004;

						bool_t BgL_celledzf33476zf3_3005;

						BgL_new3477z00_3001 =
							(BgL_svarzf2ginfozf2_bglt) (BgL_new3477z00_2814);
						BgL_kapturedzf33473zf3_3002 = CBOOL(BgL_kapturedzf33473zf3_2815);
						BgL_freezd2mark3474zd2_3003 =
							(long) CINT(BgL_freezd2mark3474zd2_2816);
						BgL_mark3475z00_3004 = (long) CINT(BgL_mark3475z00_2817);
						BgL_celledzf33476zf3_3005 = CBOOL(BgL_celledzf33476zf3_2818);
						{	/* Globalize/ginfo.scm 61 */
							bool_t BgL_kapturedzf33473zf3_3006;

							long BgL_freezd2mark3474zd2_3007;

							long BgL_mark3475z00_3008;

							bool_t BgL_celledzf33476zf3_3009;

							BgL_kapturedzf33473zf3_3006 = BgL_kapturedzf33473zf3_3002;
							BgL_freezd2mark3474zd2_3007 = BgL_freezd2mark3474zd2_3003;
							BgL_mark3475z00_3008 = BgL_mark3475z00_3004;
							BgL_celledzf33476zf3_3009 = BgL_celledzf33476zf3_3005;
							((((BgL_svarzf2ginfozf2_bglt) CREF(BgL_new3477z00_3001))->
									BgL_kapturedzf3zf3) =
								((bool_t) BgL_kapturedzf33473zf3_3006), BUNSPEC);
							((((BgL_svarzf2ginfozf2_bglt) CREF(BgL_new3477z00_3001))->
									BgL_freezd2markzd2) =
								((long) BgL_freezd2mark3474zd2_3007), BUNSPEC);
							((((BgL_svarzf2ginfozf2_bglt) CREF(BgL_new3477z00_3001))->
									BgL_markz00) = ((long) BgL_mark3475z00_3008), BUNSPEC);
							((((BgL_svarzf2ginfozf2_bglt) CREF(BgL_new3477z00_3001))->
									BgL_celledzf3zf3) =
								((bool_t) BgL_celledzf33476zf3_3009), BUNSPEC);
							BgL_res4060z00_3010 = BgL_new3477z00_3001;
					}}
					BgL_auxz00_3462 = BgL_res4060z00_3010;
				}
				return (obj_t) (BgL_auxz00_3462);
			}
		}
	}



/* %allocate-svar/Ginfo */
	BGL_EXPORTED_DEF BgL_svarz00_bglt
		BGl_z52allocatezd2svarzf2Ginfoz72zzglobaliza7e_ginfoza7()
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 61 */
			{	/* Globalize/ginfo.scm 61 */
				BgL_svarz00_bglt BgL_new3483z00_3011;

				BgL_new3483z00_3011 =
					((BgL_svarz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_svarz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new3483z00_3011),
					BGl_classzd2numzd2zz__objectz00
					(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7));
				{	/* Globalize/ginfo.scm 61 */
					BgL_objectz00_bglt BgL_auxz00_3477;

					BgL_auxz00_3477 = (BgL_objectz00_bglt) (BgL_new3483z00_3011);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3477, BFALSE);
				}
				return BgL_new3483z00_3011;
			}
		}
	}



/* _%allocate-svar/Ginfo */
	obj_t BGl__z52allocatezd2svarzf2Ginfoz72zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2722)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 61 */
			{	/* Globalize/ginfo.scm 61 */
				BgL_svarz00_bglt BgL_auxz00_3480;

				{	/* Globalize/ginfo.scm 61 */
					BgL_svarz00_bglt BgL_res4061z00_3015;

					{	/* Globalize/ginfo.scm 61 */
						BgL_svarz00_bglt BgL_new3483z00_3013;

						BgL_new3483z00_3013 =
							((BgL_svarz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_svarz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3483z00_3013),
							BGl_classzd2numzd2zz__objectz00
							(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7));
						{	/* Globalize/ginfo.scm 61 */
							BgL_objectz00_bglt BgL_auxz00_3485;

							BgL_auxz00_3485 = (BgL_objectz00_bglt) (BgL_new3483z00_3013);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3485, BFALSE);
						}
						BgL_res4061z00_3015 = BgL_new3483z00_3013;
					}
					BgL_auxz00_3480 = BgL_res4061z00_3015;
				}
				return (obj_t) (BgL_auxz00_3480);
			}
		}
	}



/* svar/Ginfo-nil */
	BGL_EXPORTED_DEF BgL_svarzf2ginfozf2_bglt
		BGl_svarzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7()
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 61 */
			if ((BGl_z52thezd2svarzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7 == BUNSPEC))
				{	/* Globalize/ginfo.scm 61 */
					{	/* Globalize/ginfo.scm 61 */
						BgL_svarz00_bglt BgL_res4008z00_1987;

						{	/* Globalize/ginfo.scm 61 */
							BgL_svarz00_bglt BgL_new2028z00_1983;

							BgL_new2028z00_1983 =
								((BgL_svarz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_svarz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2028z00_1983),
								BGl_classzd2numzd2zz__objectz00(BGl_svarz00zzast_varz00));
							{	/* Globalize/ginfo.scm 61 */
								BgL_objectz00_bglt BgL_auxz00_3495;

								BgL_auxz00_3495 = (BgL_objectz00_bglt) (BgL_new2028z00_1983);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3495, BFALSE);
							}
							BgL_res4008z00_1987 = BgL_new2028z00_1983;
						}
						BGl_z52thezd2svarzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7 =
							(obj_t) (BgL_res4008z00_1987);
					}
					{	/* Globalize/ginfo.scm 61 */
						BgL_svarz00_bglt BgL_res4009z00_1991;

						{	/* Globalize/ginfo.scm 61 */
							BgL_svarz00_bglt BgL_new2025z00_1988;

							BgL_new2025z00_1988 =
								(BgL_svarz00_bglt)
								(BGl_z52thezd2svarzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7);
							{	/* Globalize/ginfo.scm 61 */
								obj_t BgL_loc2024z00_1990;

								BgL_loc2024z00_1990 = BUNSPEC;
								((((BgL_svarz00_bglt) CREF(BgL_new2025z00_1988))->BgL_locz00) =
									((obj_t) BgL_loc2024z00_1990), BUNSPEC);
								BgL_res4009z00_1991 = BgL_new2025z00_1988;
						}} BgL_res4009z00_1991;
					}
					{	/* Globalize/ginfo.scm 61 */
						long BgL_arg3805z00_1127;

						BgL_arg3805z00_1127 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2svarzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7),
							BgL_arg3805z00_1127);
					}
					{	/* Globalize/ginfo.scm 61 */
						BgL_svarzf2ginfozf2_bglt BgL_arg3806z00_1128;

						{	/* Globalize/ginfo.scm 61 */
							BgL_svarzf2ginfozf2_bglt BgL_res4011z00_2009;

							{	/* Globalize/ginfo.scm 61 */
								BgL_svarzf2ginfozf2_bglt BgL_new3464z00_1998;

								BgL_new3464z00_1998 =
									((BgL_svarzf2ginfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_svarzf2ginfozf2_bgl))));
								{	/* Globalize/ginfo.scm 61 */
									BgL_svarzf2ginfozf2_bglt BgL_res4010z00_2008;

									{	/* Globalize/ginfo.scm 61 */
										BgL_svarzf2ginfozf2_bglt BgL_new3477z00_1999;

										BgL_new3477z00_1999 = BgL_new3464z00_1998;
										{	/* Globalize/ginfo.scm 61 */
											bool_t BgL_kapturedzf33473zf3_2004;

											long BgL_freezd2mark3474zd2_2005;

											long BgL_mark3475z00_2006;

											bool_t BgL_celledzf33476zf3_2007;

											BgL_kapturedzf33473zf3_2004 = ((bool_t) 0);
											BgL_freezd2mark3474zd2_2005 = ((long) 0);
											BgL_mark3475z00_2006 = ((long) 0);
											BgL_celledzf33476zf3_2007 = ((bool_t) 0);
											((((BgL_svarzf2ginfozf2_bglt) CREF(BgL_new3477z00_1999))->
													BgL_kapturedzf3zf3) =
												((bool_t) BgL_kapturedzf33473zf3_2004), BUNSPEC);
											((((BgL_svarzf2ginfozf2_bglt) CREF(BgL_new3477z00_1999))->
													BgL_freezd2markzd2) =
												((long) BgL_freezd2mark3474zd2_2005), BUNSPEC);
											((((BgL_svarzf2ginfozf2_bglt) CREF(BgL_new3477z00_1999))->
													BgL_markz00) =
												((long) BgL_mark3475z00_2006), BUNSPEC);
											((((BgL_svarzf2ginfozf2_bglt) CREF(BgL_new3477z00_1999))->
													BgL_celledzf3zf3) =
												((bool_t) BgL_celledzf33476zf3_2007), BUNSPEC);
											BgL_res4010z00_2008 = BgL_new3477z00_1999;
									}} BgL_res4010z00_2008;
								}
								BgL_res4011z00_2009 = BgL_new3464z00_1998;
							}
							BgL_arg3806z00_1128 = BgL_res4011z00_2009;
						}
						{	/* Globalize/ginfo.scm 61 */
							obj_t BgL_auxz00_3511;

							BgL_objectz00_bglt BgL_auxz00_3509;

							BgL_auxz00_3511 = (obj_t) (BgL_arg3806z00_1128);
							BgL_auxz00_3509 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2svarzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3509, BgL_auxz00_3511);
				}}}
			else
				{	/* Globalize/ginfo.scm 61 */
					BFALSE;
				}
			return
				(BgL_svarzf2ginfozf2_bglt)
				(BGl_z52thezd2svarzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7);
		}
	}



/* _svar/Ginfo-nil */
	obj_t BGl__svarzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7(obj_t BgL_envz00_2723)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 61 */
			return (obj_t) (BGl_svarzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7());
		}
	}



/* sfun/Ginfo? */
	BGL_EXPORTED_DEF bool_t BGl_sfunzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t
		BgL_obj3352z00_122)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 19 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3352z00_122,
				BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7);
		}
	}



/* _sfun/Ginfo? */
	obj_t BGl__sfunzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t BgL_envz00_2720,
		obj_t BgL_obj3352z00_2721)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 19 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3352z00_2721,
					BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7));
		}
	}



/* widening-sfun/Ginfo */
	BGL_EXPORTED_DEF BgL_sfunzf2ginfozf2_bglt
		BGl_wideningzd2sfunzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t
		BgL_gzf33242zf3_126, obj_t BgL_cfrom3243z00_127,
		obj_t BgL_cfromza23244za2_128, obj_t BgL_cto3245z00_129,
		obj_t BgL_ctoza23246za2_130, obj_t BgL_cfunction3247z00_131,
		obj_t BgL_integrator3248z00_132, obj_t BgL_imark3249z00_133,
		obj_t BgL_owner3250z00_134, obj_t BgL_integrated3251z00_135,
		obj_t BgL_pluggedzd2in3252zd2_136, long BgL_mark3253z00_137,
		obj_t BgL_freezd2mark3254zd2_138, obj_t BgL_thezd2global3255zd2_139,
		obj_t BgL_kaptured3256z00_140, obj_t BgL_newzd2body3257zd2_141,
		long BgL_bmark3258z00_142, long BgL_umark3259z00_143,
		obj_t BgL_free3260z00_144, obj_t BgL_bound3261z00_145)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 19 */
			{	/* Globalize/ginfo.scm 19 */
				BgL_sfunzf2ginfozf2_bglt BgL_new3262z00_2010;

				BgL_new3262z00_2010 =
					((BgL_sfunzf2ginfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_sfunzf2ginfozf2_bgl))));
				{	/* Globalize/ginfo.scm 19 */
					BgL_sfunzf2ginfozf2_bglt BgL_res4012z00_2052;

					{	/* Globalize/ginfo.scm 19 */
						BgL_sfunzf2ginfozf2_bglt BgL_new3323z00_2011;

						BgL_new3323z00_2011 = BgL_new3262z00_2010;
						{	/* Globalize/ginfo.scm 19 */
							bool_t BgL_gzf33303zf3_2032;

							obj_t BgL_cfrom3304z00_2033;

							obj_t BgL_cfromza23305za2_2034;

							obj_t BgL_cto3306z00_2035;

							obj_t BgL_ctoza23307za2_2036;

							obj_t BgL_cfunction3308z00_2037;

							obj_t BgL_integrator3309z00_2038;

							obj_t BgL_imark3310z00_2039;

							obj_t BgL_owner3311z00_2040;

							obj_t BgL_integrated3312z00_2041;

							obj_t BgL_pluggedzd2in3313zd2_2042;

							long BgL_mark3314z00_2043;

							obj_t BgL_freezd2mark3315zd2_2044;

							obj_t BgL_thezd2global3316zd2_2045;

							obj_t BgL_kaptured3317z00_2046;

							obj_t BgL_newzd2body3318zd2_2047;

							long BgL_bmark3319z00_2048;

							long BgL_umark3320z00_2049;

							obj_t BgL_free3321z00_2050;

							obj_t BgL_bound3322z00_2051;

							BgL_gzf33303zf3_2032 = BgL_gzf33242zf3_126;
							BgL_cfrom3304z00_2033 = BgL_cfrom3243z00_127;
							BgL_cfromza23305za2_2034 = BgL_cfromza23244za2_128;
							BgL_cto3306z00_2035 = BgL_cto3245z00_129;
							BgL_ctoza23307za2_2036 = BgL_ctoza23246za2_130;
							BgL_cfunction3308z00_2037 = BgL_cfunction3247z00_131;
							BgL_integrator3309z00_2038 = BgL_integrator3248z00_132;
							BgL_imark3310z00_2039 = BgL_imark3249z00_133;
							BgL_owner3311z00_2040 = BgL_owner3250z00_134;
							BgL_integrated3312z00_2041 = BgL_integrated3251z00_135;
							BgL_pluggedzd2in3313zd2_2042 = BgL_pluggedzd2in3252zd2_136;
							BgL_mark3314z00_2043 = BgL_mark3253z00_137;
							BgL_freezd2mark3315zd2_2044 = BgL_freezd2mark3254zd2_138;
							BgL_thezd2global3316zd2_2045 = BgL_thezd2global3255zd2_139;
							BgL_kaptured3317z00_2046 = BgL_kaptured3256z00_140;
							BgL_newzd2body3318zd2_2047 = BgL_newzd2body3257zd2_141;
							BgL_bmark3319z00_2048 = BgL_bmark3258z00_142;
							BgL_umark3320z00_2049 = BgL_umark3259z00_143;
							BgL_free3321z00_2050 = BgL_free3260z00_144;
							BgL_bound3322z00_2051 = BgL_bound3261z00_145;
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2011))->
									BgL_gzf3zf3) = ((bool_t) BgL_gzf33303zf3_2032), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2011))->
									BgL_cfromz00) = ((obj_t) BgL_cfrom3304z00_2033), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2011))->
									BgL_cfromza2za2) =
								((obj_t) BgL_cfromza23305za2_2034), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2011))->
									BgL_ctoz00) = ((obj_t) BgL_cto3306z00_2035), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2011))->
									BgL_ctoza2za2) = ((obj_t) BgL_ctoza23307za2_2036), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2011))->
									BgL_cfunctionz00) =
								((obj_t) BgL_cfunction3308z00_2037), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2011))->
									BgL_integratorz00) =
								((obj_t) BgL_integrator3309z00_2038), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2011))->
									BgL_imarkz00) = ((obj_t) BgL_imark3310z00_2039), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2011))->
									BgL_ownerz00) = ((obj_t) BgL_owner3311z00_2040), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2011))->
									BgL_integratedz00) =
								((obj_t) BgL_integrated3312z00_2041), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2011))->
									BgL_pluggedzd2inzd2) =
								((obj_t) BgL_pluggedzd2in3313zd2_2042), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2011))->
									BgL_markz00) = ((long) BgL_mark3314z00_2043), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2011))->
									BgL_freezd2markzd2) =
								((obj_t) BgL_freezd2mark3315zd2_2044), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2011))->
									BgL_thezd2globalzd2) =
								((obj_t) BgL_thezd2global3316zd2_2045), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2011))->
									BgL_kapturedz00) =
								((obj_t) BgL_kaptured3317z00_2046), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2011))->
									BgL_newzd2bodyzd2) =
								((obj_t) BgL_newzd2body3318zd2_2047), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2011))->
									BgL_bmarkz00) = ((long) BgL_bmark3319z00_2048), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2011))->
									BgL_umarkz00) = ((long) BgL_umark3320z00_2049), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2011))->
									BgL_freez00) = ((obj_t) BgL_free3321z00_2050), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2011))->
									BgL_boundz00) = ((obj_t) BgL_bound3322z00_2051), BUNSPEC);
							BgL_res4012z00_2052 = BgL_new3323z00_2011;
					}} BgL_res4012z00_2052;
				}
				return BgL_new3262z00_2010;
			}
		}
	}



/* _widening-sfun/Ginfo */
	obj_t BGl__wideningzd2sfunzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2819, obj_t BgL_gzf33242zf3_2820, obj_t BgL_cfrom3243z00_2821,
		obj_t BgL_cfromza23244za2_2822, obj_t BgL_cto3245z00_2823,
		obj_t BgL_ctoza23246za2_2824, obj_t BgL_cfunction3247z00_2825,
		obj_t BgL_integrator3248z00_2826, obj_t BgL_imark3249z00_2827,
		obj_t BgL_owner3250z00_2828, obj_t BgL_integrated3251z00_2829,
		obj_t BgL_pluggedzd2in3252zd2_2830, obj_t BgL_mark3253z00_2831,
		obj_t BgL_freezd2mark3254zd2_2832, obj_t BgL_thezd2global3255zd2_2833,
		obj_t BgL_kaptured3256z00_2834, obj_t BgL_newzd2body3257zd2_2835,
		obj_t BgL_bmark3258z00_2836, obj_t BgL_umark3259z00_2837,
		obj_t BgL_free3260z00_2838, obj_t BgL_bound3261z00_2839)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 19 */
			return
				(obj_t) (BGl_wideningzd2sfunzf2Ginfoz20zzglobaliza7e_ginfoza7(CBOOL
					(BgL_gzf33242zf3_2820), BgL_cfrom3243z00_2821,
					BgL_cfromza23244za2_2822, BgL_cto3245z00_2823, BgL_ctoza23246za2_2824,
					BgL_cfunction3247z00_2825, BgL_integrator3248z00_2826,
					BgL_imark3249z00_2827, BgL_owner3250z00_2828,
					BgL_integrated3251z00_2829, BgL_pluggedzd2in3252zd2_2830,
					(long) CINT(BgL_mark3253z00_2831), BgL_freezd2mark3254zd2_2832,
					BgL_thezd2global3255zd2_2833, BgL_kaptured3256z00_2834,
					BgL_newzd2body3257zd2_2835, (long) CINT(BgL_bmark3258z00_2836),
					(long) CINT(BgL_umark3259z00_2837), BgL_free3260z00_2838,
					BgL_bound3261z00_2839));
		}
	}



/* make-sfun/Ginfo */
	BGL_EXPORTED_DEF BgL_sfunzf2ginfozf2_bglt
		BGl_makezd2sfunzf2Ginfoz20zzglobaliza7e_ginfoza7(long BgL_arity3284z00_146,
		obj_t BgL_sidezd2effectzf33285z21_147, obj_t BgL_predicatezd2of3286zd2_148,
		obj_t BgL_stackzd2allocator3287zd2_149, bool_t BgL_topzf33288zf3_150,
		obj_t BgL_thezd2closure3289zd2_151, obj_t BgL_effect3290z00_152,
		obj_t BgL_property3291z00_153, obj_t BgL_args3292z00_154,
		obj_t BgL_argszd2name3293zd2_155, obj_t BgL_body3294z00_156,
		obj_t BgL_class3295z00_157, obj_t BgL_dssslzd2keywords3296zd2_158,
		obj_t BgL_loc3297z00_159, obj_t BgL_optionals3298z00_160,
		obj_t BgL_keys3299z00_161, obj_t BgL_thezd2closurezd2global3300z00_162,
		bool_t BgL_gzf33264zf3_163, obj_t BgL_cfrom3265z00_164,
		obj_t BgL_cfromza23266za2_165, obj_t BgL_cto3267z00_166,
		obj_t BgL_ctoza23268za2_167, obj_t BgL_cfunction3269z00_168,
		obj_t BgL_integrator3270z00_169, obj_t BgL_imark3271z00_170,
		obj_t BgL_owner3272z00_171, obj_t BgL_integrated3273z00_172,
		obj_t BgL_pluggedzd2in3274zd2_173, long BgL_mark3275z00_174,
		obj_t BgL_freezd2mark3276zd2_175, obj_t BgL_thezd2global3277zd2_176,
		obj_t BgL_kaptured3278z00_177, obj_t BgL_newzd2body3279zd2_178,
		long BgL_bmark3280z00_179, long BgL_umark3281z00_180,
		obj_t BgL_free3282z00_181, obj_t BgL_bound3283z00_182)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 19 */
			{	/* Globalize/ginfo.scm 19 */
				BgL_sfunz00_bglt BgL_aux3301z00_2053;

				BgL_aux3301z00_2053 =
					BGl_makezd2sfunzd2zzast_varz00(BgL_arity3284z00_146,
					BgL_sidezd2effectzf33285z21_147, BgL_predicatezd2of3286zd2_148,
					BgL_stackzd2allocator3287zd2_149, BgL_topzf33288zf3_150,
					BgL_thezd2closure3289zd2_151, BgL_effect3290z00_152,
					BgL_property3291z00_153, BgL_args3292z00_154,
					BgL_argszd2name3293zd2_155, BgL_body3294z00_156, BgL_class3295z00_157,
					BgL_dssslzd2keywords3296zd2_158, BgL_loc3297z00_159,
					BgL_optionals3298z00_160, BgL_keys3299z00_161,
					BgL_thezd2closurezd2global3300z00_162);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3301z00_2053),
					BGl_classzd2numzd2zz__objectz00
					(BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7));
				{	/* Globalize/ginfo.scm 19 */
					BgL_sfunzf2ginfozf2_bglt BgL_arg3808z00_2055;

					{	/* Globalize/ginfo.scm 19 */
						BgL_sfunzf2ginfozf2_bglt BgL_res4014z00_2122;

						{	/* Globalize/ginfo.scm 19 */
							BgL_sfunzf2ginfozf2_bglt BgL_new3262z00_2079;

							BgL_new3262z00_2079 =
								((BgL_sfunzf2ginfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_sfunzf2ginfozf2_bgl))));
							{	/* Globalize/ginfo.scm 19 */
								BgL_sfunzf2ginfozf2_bglt BgL_res4013z00_2121;

								{	/* Globalize/ginfo.scm 19 */
									BgL_sfunzf2ginfozf2_bglt BgL_new3323z00_2080;

									BgL_new3323z00_2080 = BgL_new3262z00_2079;
									{	/* Globalize/ginfo.scm 19 */
										bool_t BgL_gzf33303zf3_2101;

										obj_t BgL_cfrom3304z00_2102;

										obj_t BgL_cfromza23305za2_2103;

										obj_t BgL_cto3306z00_2104;

										obj_t BgL_ctoza23307za2_2105;

										obj_t BgL_cfunction3308z00_2106;

										obj_t BgL_integrator3309z00_2107;

										obj_t BgL_imark3310z00_2108;

										obj_t BgL_owner3311z00_2109;

										obj_t BgL_integrated3312z00_2110;

										obj_t BgL_pluggedzd2in3313zd2_2111;

										long BgL_mark3314z00_2112;

										obj_t BgL_freezd2mark3315zd2_2113;

										obj_t BgL_thezd2global3316zd2_2114;

										obj_t BgL_kaptured3317z00_2115;

										obj_t BgL_newzd2body3318zd2_2116;

										long BgL_bmark3319z00_2117;

										long BgL_umark3320z00_2118;

										obj_t BgL_free3321z00_2119;

										obj_t BgL_bound3322z00_2120;

										BgL_gzf33303zf3_2101 = BgL_gzf33264zf3_163;
										BgL_cfrom3304z00_2102 = BgL_cfrom3265z00_164;
										BgL_cfromza23305za2_2103 = BgL_cfromza23266za2_165;
										BgL_cto3306z00_2104 = BgL_cto3267z00_166;
										BgL_ctoza23307za2_2105 = BgL_ctoza23268za2_167;
										BgL_cfunction3308z00_2106 = BgL_cfunction3269z00_168;
										BgL_integrator3309z00_2107 = BgL_integrator3270z00_169;
										BgL_imark3310z00_2108 = BgL_imark3271z00_170;
										BgL_owner3311z00_2109 = BgL_owner3272z00_171;
										BgL_integrated3312z00_2110 = BgL_integrated3273z00_172;
										BgL_pluggedzd2in3313zd2_2111 = BgL_pluggedzd2in3274zd2_173;
										BgL_mark3314z00_2112 = BgL_mark3275z00_174;
										BgL_freezd2mark3315zd2_2113 = BgL_freezd2mark3276zd2_175;
										BgL_thezd2global3316zd2_2114 = BgL_thezd2global3277zd2_176;
										BgL_kaptured3317z00_2115 = BgL_kaptured3278z00_177;
										BgL_newzd2body3318zd2_2116 = BgL_newzd2body3279zd2_178;
										BgL_bmark3319z00_2117 = BgL_bmark3280z00_179;
										BgL_umark3320z00_2118 = BgL_umark3281z00_180;
										BgL_free3321z00_2119 = BgL_free3282z00_181;
										BgL_bound3322z00_2120 = BgL_bound3283z00_182;
										((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2080))->
												BgL_gzf3zf3) =
											((bool_t) BgL_gzf33303zf3_2101), BUNSPEC);
										((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2080))->
												BgL_cfromz00) =
											((obj_t) BgL_cfrom3304z00_2102), BUNSPEC);
										((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2080))->
												BgL_cfromza2za2) =
											((obj_t) BgL_cfromza23305za2_2103), BUNSPEC);
										((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2080))->
												BgL_ctoz00) = ((obj_t) BgL_cto3306z00_2104), BUNSPEC);
										((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2080))->
												BgL_ctoza2za2) =
											((obj_t) BgL_ctoza23307za2_2105), BUNSPEC);
										((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2080))->
												BgL_cfunctionz00) =
											((obj_t) BgL_cfunction3308z00_2106), BUNSPEC);
										((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2080))->
												BgL_integratorz00) =
											((obj_t) BgL_integrator3309z00_2107), BUNSPEC);
										((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2080))->
												BgL_imarkz00) =
											((obj_t) BgL_imark3310z00_2108), BUNSPEC);
										((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2080))->
												BgL_ownerz00) =
											((obj_t) BgL_owner3311z00_2109), BUNSPEC);
										((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2080))->
												BgL_integratedz00) =
											((obj_t) BgL_integrated3312z00_2110), BUNSPEC);
										((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2080))->
												BgL_pluggedzd2inzd2) =
											((obj_t) BgL_pluggedzd2in3313zd2_2111), BUNSPEC);
										((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2080))->
												BgL_markz00) = ((long) BgL_mark3314z00_2112), BUNSPEC);
										((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2080))->
												BgL_freezd2markzd2) =
											((obj_t) BgL_freezd2mark3315zd2_2113), BUNSPEC);
										((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2080))->
												BgL_thezd2globalzd2) =
											((obj_t) BgL_thezd2global3316zd2_2114), BUNSPEC);
										((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2080))->
												BgL_kapturedz00) =
											((obj_t) BgL_kaptured3317z00_2115), BUNSPEC);
										((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2080))->
												BgL_newzd2bodyzd2) =
											((obj_t) BgL_newzd2body3318zd2_2116), BUNSPEC);
										((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2080))->
												BgL_bmarkz00) =
											((long) BgL_bmark3319z00_2117), BUNSPEC);
										((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2080))->
												BgL_umarkz00) =
											((long) BgL_umark3320z00_2118), BUNSPEC);
										((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2080))->
												BgL_freez00) = ((obj_t) BgL_free3321z00_2119), BUNSPEC);
										((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2080))->
												BgL_boundz00) =
											((obj_t) BgL_bound3322z00_2120), BUNSPEC);
										BgL_res4013z00_2121 = BgL_new3323z00_2080;
								}} BgL_res4013z00_2121;
							}
							BgL_res4014z00_2122 = BgL_new3262z00_2079;
						}
						BgL_arg3808z00_2055 = BgL_res4014z00_2122;
					}
					{	/* Globalize/ginfo.scm 19 */
						obj_t BgL_auxz00_3574;

						BgL_objectz00_bglt BgL_auxz00_3572;

						BgL_auxz00_3574 = (obj_t) (BgL_arg3808z00_2055);
						BgL_auxz00_3572 = (BgL_objectz00_bglt) (BgL_aux3301z00_2053);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_3572, BgL_auxz00_3574);
				}}
				return
					((BgL_sfunzf2ginfozf2_bglt)
					(BgL_sfunzf2ginfozf2_bglt) (BgL_aux3301z00_2053));
			}
		}
	}



/* _make-sfun/Ginfo */
	obj_t BGl__makezd2sfunzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t BgL_envz00_2840,
		obj_t BgL_arity3284z00_2841, obj_t BgL_sidezd2effectzf33285z21_2842,
		obj_t BgL_predicatezd2of3286zd2_2843,
		obj_t BgL_stackzd2allocator3287zd2_2844, obj_t BgL_topzf33288zf3_2845,
		obj_t BgL_thezd2closure3289zd2_2846, obj_t BgL_effect3290z00_2847,
		obj_t BgL_property3291z00_2848, obj_t BgL_args3292z00_2849,
		obj_t BgL_argszd2name3293zd2_2850, obj_t BgL_body3294z00_2851,
		obj_t BgL_class3295z00_2852, obj_t BgL_dssslzd2keywords3296zd2_2853,
		obj_t BgL_loc3297z00_2854, obj_t BgL_optionals3298z00_2855,
		obj_t BgL_keys3299z00_2856, obj_t BgL_thezd2closurezd2global3300z00_2857,
		obj_t BgL_gzf33264zf3_2858, obj_t BgL_cfrom3265z00_2859,
		obj_t BgL_cfromza23266za2_2860, obj_t BgL_cto3267z00_2861,
		obj_t BgL_ctoza23268za2_2862, obj_t BgL_cfunction3269z00_2863,
		obj_t BgL_integrator3270z00_2864, obj_t BgL_imark3271z00_2865,
		obj_t BgL_owner3272z00_2866, obj_t BgL_integrated3273z00_2867,
		obj_t BgL_pluggedzd2in3274zd2_2868, obj_t BgL_mark3275z00_2869,
		obj_t BgL_freezd2mark3276zd2_2870, obj_t BgL_thezd2global3277zd2_2871,
		obj_t BgL_kaptured3278z00_2872, obj_t BgL_newzd2body3279zd2_2873,
		obj_t BgL_bmark3280z00_2874, obj_t BgL_umark3281z00_2875,
		obj_t BgL_free3282z00_2876, obj_t BgL_bound3283z00_2877)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 19 */
			return
				(obj_t) (BGl_makezd2sfunzf2Ginfoz20zzglobaliza7e_ginfoza7(
					(long) CINT(BgL_arity3284z00_2841), BgL_sidezd2effectzf33285z21_2842,
					BgL_predicatezd2of3286zd2_2843, BgL_stackzd2allocator3287zd2_2844,
					CBOOL(BgL_topzf33288zf3_2845), BgL_thezd2closure3289zd2_2846,
					BgL_effect3290z00_2847, BgL_property3291z00_2848,
					BgL_args3292z00_2849, BgL_argszd2name3293zd2_2850,
					BgL_body3294z00_2851, BgL_class3295z00_2852,
					BgL_dssslzd2keywords3296zd2_2853, BgL_loc3297z00_2854,
					BgL_optionals3298z00_2855, BgL_keys3299z00_2856,
					BgL_thezd2closurezd2global3300z00_2857, CBOOL(BgL_gzf33264zf3_2858),
					BgL_cfrom3265z00_2859, BgL_cfromza23266za2_2860, BgL_cto3267z00_2861,
					BgL_ctoza23268za2_2862, BgL_cfunction3269z00_2863,
					BgL_integrator3270z00_2864, BgL_imark3271z00_2865,
					BgL_owner3272z00_2866, BgL_integrated3273z00_2867,
					BgL_pluggedzd2in3274zd2_2868, (long) CINT(BgL_mark3275z00_2869),
					BgL_freezd2mark3276zd2_2870, BgL_thezd2global3277zd2_2871,
					BgL_kaptured3278z00_2872, BgL_newzd2body3279zd2_2873,
					(long) CINT(BgL_bmark3280z00_2874),
					(long) CINT(BgL_umark3281z00_2875), BgL_free3282z00_2876,
					BgL_bound3283z00_2877));
		}
	}



/* fill-sfun/Ginfo! */
	BGL_EXPORTED_DEF BgL_sfunzf2ginfozf2_bglt
		BGl_fillzd2sfunzf2Ginfoz12z32zzglobaliza7e_ginfoza7(BgL_sfunzf2ginfozf2_bglt
		BgL_new3323z00_183, bool_t BgL_gzf33303zf3_184, obj_t BgL_cfrom3304z00_185,
		obj_t BgL_cfromza23305za2_186, obj_t BgL_cto3306z00_187,
		obj_t BgL_ctoza23307za2_188, obj_t BgL_cfunction3308z00_189,
		obj_t BgL_integrator3309z00_190, obj_t BgL_imark3310z00_191,
		obj_t BgL_owner3311z00_192, obj_t BgL_integrated3312z00_193,
		obj_t BgL_pluggedzd2in3313zd2_194, long BgL_mark3314z00_195,
		obj_t BgL_freezd2mark3315zd2_196, obj_t BgL_thezd2global3316zd2_197,
		obj_t BgL_kaptured3317z00_198, obj_t BgL_newzd2body3318zd2_199,
		long BgL_bmark3319z00_200, long BgL_umark3320z00_201,
		obj_t BgL_free3321z00_202, obj_t BgL_bound3322z00_203)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 19 */
			{	/* Globalize/ginfo.scm 19 */
				bool_t BgL_gzf33303zf3_3017;

				obj_t BgL_cfrom3304z00_3018;

				obj_t BgL_cfromza23305za2_3019;

				obj_t BgL_cto3306z00_3020;

				obj_t BgL_ctoza23307za2_3021;

				obj_t BgL_cfunction3308z00_3022;

				obj_t BgL_integrator3309z00_3023;

				obj_t BgL_imark3310z00_3024;

				obj_t BgL_owner3311z00_3025;

				obj_t BgL_integrated3312z00_3026;

				obj_t BgL_pluggedzd2in3313zd2_3027;

				long BgL_mark3314z00_3028;

				obj_t BgL_freezd2mark3315zd2_3029;

				obj_t BgL_thezd2global3316zd2_3030;

				obj_t BgL_kaptured3317z00_3031;

				obj_t BgL_newzd2body3318zd2_3032;

				long BgL_bmark3319z00_3033;

				long BgL_umark3320z00_3034;

				obj_t BgL_free3321z00_3035;

				obj_t BgL_bound3322z00_3036;

				BgL_gzf33303zf3_3017 = BgL_gzf33303zf3_184;
				BgL_cfrom3304z00_3018 = BgL_cfrom3304z00_185;
				BgL_cfromza23305za2_3019 = BgL_cfromza23305za2_186;
				BgL_cto3306z00_3020 = BgL_cto3306z00_187;
				BgL_ctoza23307za2_3021 = BgL_ctoza23307za2_188;
				BgL_cfunction3308z00_3022 = BgL_cfunction3308z00_189;
				BgL_integrator3309z00_3023 = BgL_integrator3309z00_190;
				BgL_imark3310z00_3024 = BgL_imark3310z00_191;
				BgL_owner3311z00_3025 = BgL_owner3311z00_192;
				BgL_integrated3312z00_3026 = BgL_integrated3312z00_193;
				BgL_pluggedzd2in3313zd2_3027 = BgL_pluggedzd2in3313zd2_194;
				BgL_mark3314z00_3028 = BgL_mark3314z00_195;
				BgL_freezd2mark3315zd2_3029 = BgL_freezd2mark3315zd2_196;
				BgL_thezd2global3316zd2_3030 = BgL_thezd2global3316zd2_197;
				BgL_kaptured3317z00_3031 = BgL_kaptured3317z00_198;
				BgL_newzd2body3318zd2_3032 = BgL_newzd2body3318zd2_199;
				BgL_bmark3319z00_3033 = BgL_bmark3319z00_200;
				BgL_umark3320z00_3034 = BgL_umark3320z00_201;
				BgL_free3321z00_3035 = BgL_free3321z00_202;
				BgL_bound3322z00_3036 = BgL_bound3322z00_203;
				((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_183))->BgL_gzf3zf3) =
					((bool_t) BgL_gzf33303zf3_3017), BUNSPEC);
				((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_183))->BgL_cfromz00) =
					((obj_t) BgL_cfrom3304z00_3018), BUNSPEC);
				((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_183))->
						BgL_cfromza2za2) = ((obj_t) BgL_cfromza23305za2_3019), BUNSPEC);
				((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_183))->BgL_ctoz00) =
					((obj_t) BgL_cto3306z00_3020), BUNSPEC);
				((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_183))->
						BgL_ctoza2za2) = ((obj_t) BgL_ctoza23307za2_3021), BUNSPEC);
				((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_183))->
						BgL_cfunctionz00) = ((obj_t) BgL_cfunction3308z00_3022), BUNSPEC);
				((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_183))->
						BgL_integratorz00) = ((obj_t) BgL_integrator3309z00_3023), BUNSPEC);
				((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_183))->BgL_imarkz00) =
					((obj_t) BgL_imark3310z00_3024), BUNSPEC);
				((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_183))->BgL_ownerz00) =
					((obj_t) BgL_owner3311z00_3025), BUNSPEC);
				((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_183))->
						BgL_integratedz00) = ((obj_t) BgL_integrated3312z00_3026), BUNSPEC);
				((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_183))->
						BgL_pluggedzd2inzd2) =
					((obj_t) BgL_pluggedzd2in3313zd2_3027), BUNSPEC);
				((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_183))->BgL_markz00) =
					((long) BgL_mark3314z00_3028), BUNSPEC);
				((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_183))->
						BgL_freezd2markzd2) =
					((obj_t) BgL_freezd2mark3315zd2_3029), BUNSPEC);
				((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_183))->
						BgL_thezd2globalzd2) =
					((obj_t) BgL_thezd2global3316zd2_3030), BUNSPEC);
				((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_183))->
						BgL_kapturedz00) = ((obj_t) BgL_kaptured3317z00_3031), BUNSPEC);
				((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_183))->
						BgL_newzd2bodyzd2) = ((obj_t) BgL_newzd2body3318zd2_3032), BUNSPEC);
				((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_183))->BgL_bmarkz00) =
					((long) BgL_bmark3319z00_3033), BUNSPEC);
				((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_183))->BgL_umarkz00) =
					((long) BgL_umark3320z00_3034), BUNSPEC);
				((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_183))->BgL_freez00) =
					((obj_t) BgL_free3321z00_3035), BUNSPEC);
				((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_183))->BgL_boundz00) =
					((obj_t) BgL_bound3322z00_3036), BUNSPEC);
				return BgL_new3323z00_183;
			}
		}
	}



/* _fill-sfun/Ginfo! */
	obj_t BGl__fillzd2sfunzf2Ginfoz12z32zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2878, obj_t BgL_new3323z00_2879, obj_t BgL_gzf33303zf3_2880,
		obj_t BgL_cfrom3304z00_2881, obj_t BgL_cfromza23305za2_2882,
		obj_t BgL_cto3306z00_2883, obj_t BgL_ctoza23307za2_2884,
		obj_t BgL_cfunction3308z00_2885, obj_t BgL_integrator3309z00_2886,
		obj_t BgL_imark3310z00_2887, obj_t BgL_owner3311z00_2888,
		obj_t BgL_integrated3312z00_2889, obj_t BgL_pluggedzd2in3313zd2_2890,
		obj_t BgL_mark3314z00_2891, obj_t BgL_freezd2mark3315zd2_2892,
		obj_t BgL_thezd2global3316zd2_2893, obj_t BgL_kaptured3317z00_2894,
		obj_t BgL_newzd2body3318zd2_2895, obj_t BgL_bmark3319z00_2896,
		obj_t BgL_umark3320z00_2897, obj_t BgL_free3321z00_2898,
		obj_t BgL_bound3322z00_2899)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 19 */
			{	/* Globalize/ginfo.scm 19 */
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3607;

				{	/* Globalize/ginfo.scm 19 */
					BgL_sfunzf2ginfozf2_bglt BgL_res4062z00_3078;

					{	/* Globalize/ginfo.scm 19 */
						BgL_sfunzf2ginfozf2_bglt BgL_new3323z00_3037;

						bool_t BgL_gzf33303zf3_3038;

						long BgL_mark3314z00_3049;

						long BgL_bmark3319z00_3054;

						long BgL_umark3320z00_3055;

						BgL_new3323z00_3037 =
							(BgL_sfunzf2ginfozf2_bglt) (BgL_new3323z00_2879);
						BgL_gzf33303zf3_3038 = CBOOL(BgL_gzf33303zf3_2880);
						BgL_mark3314z00_3049 = (long) CINT(BgL_mark3314z00_2891);
						BgL_bmark3319z00_3054 = (long) CINT(BgL_bmark3319z00_2896);
						BgL_umark3320z00_3055 = (long) CINT(BgL_umark3320z00_2897);
						{	/* Globalize/ginfo.scm 19 */
							bool_t BgL_gzf33303zf3_3058;

							obj_t BgL_cfrom3304z00_3059;

							obj_t BgL_cfromza23305za2_3060;

							obj_t BgL_cto3306z00_3061;

							obj_t BgL_ctoza23307za2_3062;

							obj_t BgL_cfunction3308z00_3063;

							obj_t BgL_integrator3309z00_3064;

							obj_t BgL_imark3310z00_3065;

							obj_t BgL_owner3311z00_3066;

							obj_t BgL_integrated3312z00_3067;

							obj_t BgL_pluggedzd2in3313zd2_3068;

							long BgL_mark3314z00_3069;

							obj_t BgL_freezd2mark3315zd2_3070;

							obj_t BgL_thezd2global3316zd2_3071;

							obj_t BgL_kaptured3317z00_3072;

							obj_t BgL_newzd2body3318zd2_3073;

							long BgL_bmark3319z00_3074;

							long BgL_umark3320z00_3075;

							obj_t BgL_free3321z00_3076;

							obj_t BgL_bound3322z00_3077;

							BgL_gzf33303zf3_3058 = BgL_gzf33303zf3_3038;
							BgL_cfrom3304z00_3059 = BgL_cfrom3304z00_2881;
							BgL_cfromza23305za2_3060 = BgL_cfromza23305za2_2882;
							BgL_cto3306z00_3061 = BgL_cto3306z00_2883;
							BgL_ctoza23307za2_3062 = BgL_ctoza23307za2_2884;
							BgL_cfunction3308z00_3063 = BgL_cfunction3308z00_2885;
							BgL_integrator3309z00_3064 = BgL_integrator3309z00_2886;
							BgL_imark3310z00_3065 = BgL_imark3310z00_2887;
							BgL_owner3311z00_3066 = BgL_owner3311z00_2888;
							BgL_integrated3312z00_3067 = BgL_integrated3312z00_2889;
							BgL_pluggedzd2in3313zd2_3068 = BgL_pluggedzd2in3313zd2_2890;
							BgL_mark3314z00_3069 = BgL_mark3314z00_3049;
							BgL_freezd2mark3315zd2_3070 = BgL_freezd2mark3315zd2_2892;
							BgL_thezd2global3316zd2_3071 = BgL_thezd2global3316zd2_2893;
							BgL_kaptured3317z00_3072 = BgL_kaptured3317z00_2894;
							BgL_newzd2body3318zd2_3073 = BgL_newzd2body3318zd2_2895;
							BgL_bmark3319z00_3074 = BgL_bmark3319z00_3054;
							BgL_umark3320z00_3075 = BgL_umark3320z00_3055;
							BgL_free3321z00_3076 = BgL_free3321z00_2898;
							BgL_bound3322z00_3077 = BgL_bound3322z00_2899;
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_3037))->
									BgL_gzf3zf3) = ((bool_t) BgL_gzf33303zf3_3058), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_3037))->
									BgL_cfromz00) = ((obj_t) BgL_cfrom3304z00_3059), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_3037))->
									BgL_cfromza2za2) =
								((obj_t) BgL_cfromza23305za2_3060), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_3037))->
									BgL_ctoz00) = ((obj_t) BgL_cto3306z00_3061), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_3037))->
									BgL_ctoza2za2) = ((obj_t) BgL_ctoza23307za2_3062), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_3037))->
									BgL_cfunctionz00) =
								((obj_t) BgL_cfunction3308z00_3063), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_3037))->
									BgL_integratorz00) =
								((obj_t) BgL_integrator3309z00_3064), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_3037))->
									BgL_imarkz00) = ((obj_t) BgL_imark3310z00_3065), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_3037))->
									BgL_ownerz00) = ((obj_t) BgL_owner3311z00_3066), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_3037))->
									BgL_integratedz00) =
								((obj_t) BgL_integrated3312z00_3067), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_3037))->
									BgL_pluggedzd2inzd2) =
								((obj_t) BgL_pluggedzd2in3313zd2_3068), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_3037))->
									BgL_markz00) = ((long) BgL_mark3314z00_3069), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_3037))->
									BgL_freezd2markzd2) =
								((obj_t) BgL_freezd2mark3315zd2_3070), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_3037))->
									BgL_thezd2globalzd2) =
								((obj_t) BgL_thezd2global3316zd2_3071), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_3037))->
									BgL_kapturedz00) =
								((obj_t) BgL_kaptured3317z00_3072), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_3037))->
									BgL_newzd2bodyzd2) =
								((obj_t) BgL_newzd2body3318zd2_3073), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_3037))->
									BgL_bmarkz00) = ((long) BgL_bmark3319z00_3074), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_3037))->
									BgL_umarkz00) = ((long) BgL_umark3320z00_3075), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_3037))->
									BgL_freez00) = ((obj_t) BgL_free3321z00_3076), BUNSPEC);
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_3037))->
									BgL_boundz00) = ((obj_t) BgL_bound3322z00_3077), BUNSPEC);
							BgL_res4062z00_3078 = BgL_new3323z00_3037;
					}}
					BgL_auxz00_3607 = BgL_res4062z00_3078;
				}
				return (obj_t) (BgL_auxz00_3607);
			}
		}
	}



/* %allocate-sfun/Ginfo */
	BGL_EXPORTED_DEF BgL_sfunz00_bglt
		BGl_z52allocatezd2sfunzf2Ginfoz72zzglobaliza7e_ginfoza7()
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 19 */
			{	/* Globalize/ginfo.scm 19 */
				BgL_sfunz00_bglt BgL_new3345z00_3079;

				BgL_new3345z00_3079 =
					((BgL_sfunz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_sfunz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new3345z00_3079),
					BGl_classzd2numzd2zz__objectz00
					(BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7));
				{	/* Globalize/ginfo.scm 19 */
					BgL_objectz00_bglt BgL_auxz00_3638;

					BgL_auxz00_3638 = (BgL_objectz00_bglt) (BgL_new3345z00_3079);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3638, BFALSE);
				}
				return BgL_new3345z00_3079;
			}
		}
	}



/* _%allocate-sfun/Ginfo */
	obj_t BGl__z52allocatezd2sfunzf2Ginfoz72zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2718)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 19 */
			{	/* Globalize/ginfo.scm 19 */
				BgL_sfunz00_bglt BgL_auxz00_3641;

				{	/* Globalize/ginfo.scm 19 */
					BgL_sfunz00_bglt BgL_res4063z00_3083;

					{	/* Globalize/ginfo.scm 19 */
						BgL_sfunz00_bglt BgL_new3345z00_3081;

						BgL_new3345z00_3081 =
							((BgL_sfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_sfunz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3345z00_3081),
							BGl_classzd2numzd2zz__objectz00
							(BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7));
						{	/* Globalize/ginfo.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_3646;

							BgL_auxz00_3646 = (BgL_objectz00_bglt) (BgL_new3345z00_3081);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3646, BFALSE);
						}
						BgL_res4063z00_3083 = BgL_new3345z00_3081;
					}
					BgL_auxz00_3641 = BgL_res4063z00_3083;
				}
				return (obj_t) (BgL_auxz00_3641);
			}
		}
	}



/* sfun/Ginfo-nil */
	BGL_EXPORTED_DEF BgL_sfunzf2ginfozf2_bglt
		BGl_sfunzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7()
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 19 */
			if ((BGl_z52thezd2sfunzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7 == BUNSPEC))
				{	/* Globalize/ginfo.scm 19 */
					{	/* Globalize/ginfo.scm 19 */
						BgL_sfunz00_bglt BgL_res4015z00_2151;

						{	/* Globalize/ginfo.scm 19 */
							BgL_sfunz00_bglt BgL_new1954z00_2147;

							BgL_new1954z00_2147 =
								((BgL_sfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_sfunz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1954z00_2147),
								BGl_classzd2numzd2zz__objectz00(BGl_sfunz00zzast_varz00));
							{	/* Globalize/ginfo.scm 19 */
								BgL_objectz00_bglt BgL_auxz00_3656;

								BgL_auxz00_3656 = (BgL_objectz00_bglt) (BgL_new1954z00_2147);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3656, BFALSE);
							}
							BgL_res4015z00_2151 = BgL_new1954z00_2147;
						}
						BGl_z52thezd2sfunzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7 =
							(obj_t) (BgL_res4015z00_2151);
					}
					{	/* Globalize/ginfo.scm 19 */
						BgL_sfunz00_bglt BgL_res4016z00_2187;

						{	/* Globalize/ginfo.scm 19 */
							BgL_sfunz00_bglt BgL_new1935z00_2152;

							BgL_new1935z00_2152 =
								(BgL_sfunz00_bglt)
								(BGl_z52thezd2sfunzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7);
							{	/* Globalize/ginfo.scm 19 */
								long BgL_arity1918z00_2170;

								obj_t BgL_sidezd2effectzf31919z21_2171;

								obj_t BgL_predicatezd2of1920zd2_2172;

								obj_t BgL_stackzd2allocator1921zd2_2173;

								bool_t BgL_topzf31922zf3_2174;

								obj_t BgL_thezd2closure1923zd2_2175;

								obj_t BgL_effect1924z00_2176;

								obj_t BgL_property1925z00_2177;

								obj_t BgL_args1926z00_2178;

								obj_t BgL_argszd2name1927zd2_2179;

								obj_t BgL_body1928z00_2180;

								obj_t BgL_class1929z00_2181;

								obj_t BgL_dssslzd2keywords1930zd2_2182;

								obj_t BgL_loc1931z00_2183;

								obj_t BgL_optionals1932z00_2184;

								obj_t BgL_keys1933z00_2185;

								obj_t BgL_thezd2closurezd2global1934z00_2186;

								BgL_arity1918z00_2170 = ((long) 0);
								BgL_sidezd2effectzf31919z21_2171 = BUNSPEC;
								BgL_predicatezd2of1920zd2_2172 = BUNSPEC;
								BgL_stackzd2allocator1921zd2_2173 = BUNSPEC;
								BgL_topzf31922zf3_2174 = ((bool_t) 0);
								BgL_thezd2closure1923zd2_2175 = BUNSPEC;
								BgL_effect1924z00_2176 = BUNSPEC;
								BgL_property1925z00_2177 = BUNSPEC;
								BgL_args1926z00_2178 = BUNSPEC;
								BgL_argszd2name1927zd2_2179 = BUNSPEC;
								BgL_body1928z00_2180 = BUNSPEC;
								BgL_class1929z00_2181 = BUNSPEC;
								BgL_dssslzd2keywords1930zd2_2182 = BUNSPEC;
								BgL_loc1931z00_2183 = BUNSPEC;
								BgL_optionals1932z00_2184 = BUNSPEC;
								BgL_keys1933z00_2185 = BUNSPEC;
								BgL_thezd2closurezd2global1934z00_2186 = BUNSPEC;
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2152))->
										BgL_arityz00) = ((long) BgL_arity1918z00_2170), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2152))->
										BgL_sidezd2effectzf3z21) =
									((obj_t) BgL_sidezd2effectzf31919z21_2171), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2152))->
										BgL_predicatezd2ofzd2) =
									((obj_t) BgL_predicatezd2of1920zd2_2172), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2152))->
										BgL_stackzd2allocatorzd2) =
									((obj_t) BgL_stackzd2allocator1921zd2_2173), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2152))->
										BgL_topzf3zf3) =
									((bool_t) BgL_topzf31922zf3_2174), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2152))->
										BgL_thezd2closurezd2) =
									((obj_t) BgL_thezd2closure1923zd2_2175), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2152))->
										BgL_effectz00) = ((obj_t) BgL_effect1924z00_2176), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2152))->
										BgL_propertyz00) =
									((obj_t) BgL_property1925z00_2177), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2152))->BgL_argsz00) =
									((obj_t) BgL_args1926z00_2178), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2152))->
										BgL_argszd2namezd2) =
									((obj_t) BgL_argszd2name1927zd2_2179), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2152))->BgL_bodyz00) =
									((obj_t) BgL_body1928z00_2180), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2152))->
										BgL_classz00) = ((obj_t) BgL_class1929z00_2181), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2152))->
										BgL_dssslzd2keywordszd2) =
									((obj_t) BgL_dssslzd2keywords1930zd2_2182), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2152))->BgL_locz00) =
									((obj_t) BgL_loc1931z00_2183), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2152))->
										BgL_optionalsz00) =
									((obj_t) BgL_optionals1932z00_2184), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2152))->BgL_keysz00) =
									((obj_t) BgL_keys1933z00_2185), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_2152))->
										BgL_thezd2closurezd2globalz00) =
									((obj_t) BgL_thezd2closurezd2global1934z00_2186), BUNSPEC);
								BgL_res4016z00_2187 = BgL_new1935z00_2152;
						}} BgL_res4016z00_2187;
					}
					{	/* Globalize/ginfo.scm 19 */
						long BgL_arg3811z00_1157;

						BgL_arg3811z00_1157 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2sfunzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7),
							BgL_arg3811z00_1157);
					}
					{	/* Globalize/ginfo.scm 19 */
						BgL_sfunzf2ginfozf2_bglt BgL_arg3812z00_1158;

						{	/* Globalize/ginfo.scm 19 */
							BgL_sfunzf2ginfozf2_bglt BgL_res4018z00_2253;

							{	/* Globalize/ginfo.scm 19 */
								BgL_sfunzf2ginfozf2_bglt BgL_new3262z00_2210;

								BgL_new3262z00_2210 =
									((BgL_sfunzf2ginfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_sfunzf2ginfozf2_bgl))));
								{	/* Globalize/ginfo.scm 19 */
									BgL_sfunzf2ginfozf2_bglt BgL_res4017z00_2252;

									{	/* Globalize/ginfo.scm 19 */
										BgL_sfunzf2ginfozf2_bglt BgL_new3323z00_2211;

										BgL_new3323z00_2211 = BgL_new3262z00_2210;
										{	/* Globalize/ginfo.scm 19 */
											bool_t BgL_gzf33303zf3_2232;

											obj_t BgL_cfrom3304z00_2233;

											obj_t BgL_cfromza23305za2_2234;

											obj_t BgL_cto3306z00_2235;

											obj_t BgL_ctoza23307za2_2236;

											obj_t BgL_cfunction3308z00_2237;

											obj_t BgL_integrator3309z00_2238;

											obj_t BgL_imark3310z00_2239;

											obj_t BgL_owner3311z00_2240;

											obj_t BgL_integrated3312z00_2241;

											obj_t BgL_pluggedzd2in3313zd2_2242;

											long BgL_mark3314z00_2243;

											obj_t BgL_freezd2mark3315zd2_2244;

											obj_t BgL_thezd2global3316zd2_2245;

											obj_t BgL_kaptured3317z00_2246;

											obj_t BgL_newzd2body3318zd2_2247;

											long BgL_bmark3319z00_2248;

											long BgL_umark3320z00_2249;

											obj_t BgL_free3321z00_2250;

											obj_t BgL_bound3322z00_2251;

											BgL_gzf33303zf3_2232 = ((bool_t) 0);
											BgL_cfrom3304z00_2233 = BUNSPEC;
											BgL_cfromza23305za2_2234 = BUNSPEC;
											BgL_cto3306z00_2235 = BUNSPEC;
											BgL_ctoza23307za2_2236 = BUNSPEC;
											BgL_cfunction3308z00_2237 = BUNSPEC;
											BgL_integrator3309z00_2238 = BUNSPEC;
											BgL_imark3310z00_2239 = BUNSPEC;
											BgL_owner3311z00_2240 = BUNSPEC;
											BgL_integrated3312z00_2241 = BUNSPEC;
											BgL_pluggedzd2in3313zd2_2242 = BUNSPEC;
											BgL_mark3314z00_2243 = ((long) 0);
											BgL_freezd2mark3315zd2_2244 = BUNSPEC;
											BgL_thezd2global3316zd2_2245 = BUNSPEC;
											BgL_kaptured3317z00_2246 = BUNSPEC;
											BgL_newzd2body3318zd2_2247 = BUNSPEC;
											BgL_bmark3319z00_2248 = ((long) 0);
											BgL_umark3320z00_2249 = ((long) 0);
											BgL_free3321z00_2250 = BUNSPEC;
											BgL_bound3322z00_2251 = BUNSPEC;
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2211))->
													BgL_gzf3zf3) =
												((bool_t) BgL_gzf33303zf3_2232), BUNSPEC);
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2211))->
													BgL_cfromz00) =
												((obj_t) BgL_cfrom3304z00_2233), BUNSPEC);
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2211))->
													BgL_cfromza2za2) =
												((obj_t) BgL_cfromza23305za2_2234), BUNSPEC);
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2211))->
													BgL_ctoz00) = ((obj_t) BgL_cto3306z00_2235), BUNSPEC);
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2211))->
													BgL_ctoza2za2) =
												((obj_t) BgL_ctoza23307za2_2236), BUNSPEC);
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2211))->
													BgL_cfunctionz00) =
												((obj_t) BgL_cfunction3308z00_2237), BUNSPEC);
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2211))->
													BgL_integratorz00) =
												((obj_t) BgL_integrator3309z00_2238), BUNSPEC);
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2211))->
													BgL_imarkz00) =
												((obj_t) BgL_imark3310z00_2239), BUNSPEC);
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2211))->
													BgL_ownerz00) =
												((obj_t) BgL_owner3311z00_2240), BUNSPEC);
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2211))->
													BgL_integratedz00) =
												((obj_t) BgL_integrated3312z00_2241), BUNSPEC);
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2211))->
													BgL_pluggedzd2inzd2) =
												((obj_t) BgL_pluggedzd2in3313zd2_2242), BUNSPEC);
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2211))->
													BgL_markz00) =
												((long) BgL_mark3314z00_2243), BUNSPEC);
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2211))->
													BgL_freezd2markzd2) =
												((obj_t) BgL_freezd2mark3315zd2_2244), BUNSPEC);
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2211))->
													BgL_thezd2globalzd2) =
												((obj_t) BgL_thezd2global3316zd2_2245), BUNSPEC);
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2211))->
													BgL_kapturedz00) =
												((obj_t) BgL_kaptured3317z00_2246), BUNSPEC);
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2211))->
													BgL_newzd2bodyzd2) =
												((obj_t) BgL_newzd2body3318zd2_2247), BUNSPEC);
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2211))->
													BgL_bmarkz00) =
												((long) BgL_bmark3319z00_2248), BUNSPEC);
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2211))->
													BgL_umarkz00) =
												((long) BgL_umark3320z00_2249), BUNSPEC);
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2211))->
													BgL_freez00) =
												((obj_t) BgL_free3321z00_2250), BUNSPEC);
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_new3323z00_2211))->
													BgL_boundz00) =
												((obj_t) BgL_bound3322z00_2251), BUNSPEC);
											BgL_res4017z00_2252 = BgL_new3323z00_2211;
									}} BgL_res4017z00_2252;
								}
								BgL_res4018z00_2253 = BgL_new3262z00_2210;
							}
							BgL_arg3812z00_1158 = BgL_res4018z00_2253;
						}
						{	/* Globalize/ginfo.scm 19 */
							obj_t BgL_auxz00_3704;

							BgL_objectz00_bglt BgL_auxz00_3702;

							BgL_auxz00_3704 = (obj_t) (BgL_arg3812z00_1158);
							BgL_auxz00_3702 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2sfunzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3702, BgL_auxz00_3704);
				}}}
			else
				{	/* Globalize/ginfo.scm 19 */
					BFALSE;
				}
			return
				(BgL_sfunzf2ginfozf2_bglt)
				(BGl_z52thezd2sfunzf2Ginfozd2nilza0zzglobaliza7e_ginfoza7);
		}
	}



/* _sfun/Ginfo-nil */
	obj_t BGl__sfunzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7(obj_t BgL_envz00_2719)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 19 */
			return (obj_t) (BGl_sfunzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_ginfoza7()
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_ginfoza7()
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7,
				BGl_proc4038z00zzglobaliza7e_ginfoza7,
				BGl_string4039z00zzglobaliza7e_ginfoza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7,
				BGl_proc4040z00zzglobaliza7e_ginfoza7,
				BGl_string4041z00zzglobaliza7e_ginfoza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7,
				BGl_proc4042z00zzglobaliza7e_ginfoza7,
				BGl_string4039z00zzglobaliza7e_ginfoza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7,
				BGl_proc4043z00zzglobaliza7e_ginfoza7,
				BGl_string4041z00zzglobaliza7e_ginfoza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7,
				BGl_proc4044z00zzglobaliza7e_ginfoza7,
				BGl_string4039z00zzglobaliza7e_ginfoza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7,
				BGl_proc4045z00zzglobaliza7e_ginfoza7,
				BGl_string4041z00zzglobaliza7e_ginfoza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7,
				BGl_proc4046z00zzglobaliza7e_ginfoza7,
				BGl_string4039z00zzglobaliza7e_ginfoza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7,
				BGl_proc4047z00zzglobaliza7e_ginfoza7,
				BGl_string4041z00zzglobaliza7e_ginfoza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7,
				BGl_proc4048z00zzglobaliza7e_ginfoza7,
				BGl_string4039z00zzglobaliza7e_ginfoza7);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7,
				BGl_proc4049z00zzglobaliza7e_ginfoza7,
				BGl_string4041z00zzglobaliza7e_ginfoza7);
		}
	}



/* struct+object->objec3745 */
	obj_t BGl_structzb2objectzd2ze3objec3745z83zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2915, obj_t BgL_oz00_2916, obj_t BgL_sz00_2917)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 19 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_oz00_1693;

				obj_t BgL_sz00_1694;

				{	/* Globalize/ginfo.scm 19 */
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3720;

					BgL_oz00_1693 = (BgL_sfunzf2ginfozf2_bglt) (BgL_oz00_2916);
					BgL_sz00_1694 = BgL_sz00_2917;
					{

						{	/* Globalize/ginfo.scm 19 */
							obj_t BgL_old3349z00_1697;

							obj_t BgL_aux3350z00_1698;

							{	/* Globalize/ginfo.scm 19 */
								obj_t BgL_nextzd2method3744zd2_1722;

								BgL_nextzd2method3744zd2_1722 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1693),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7);
								if (PROCEDUREP(BgL_nextzd2method3744zd2_1722))
									{	/* Globalize/ginfo.scm 19 */
										BgL_old3349z00_1697 =
											PROCEDURE_ENTRY(BgL_nextzd2method3744zd2_1722)
											(BgL_nextzd2method3744zd2_1722, (obj_t) (BgL_oz00_1693),
											BgL_sz00_1694, BEOA);
									}
								else
									{	/* Globalize/ginfo.scm 19 */
										BgL_old3349z00_1697 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1693), BgL_sz00_1694));
									}
							}
							BgL_aux3350z00_1698 =
								STRUCT_REF(BgL_sz00_1694, (int) (((long) 0)));
							{	/* Globalize/ginfo.scm 19 */
								BgL_sfunzf2ginfozf2_bglt BgL_new3351z00_1699;

								BgL_new3351z00_1699 =
									((BgL_sfunzf2ginfozf2_bglt) (BgL_old3349z00_1697));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3351z00_1699),
									BGl_classzd2numzd2zz__objectz00
									(BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7));
								{	/* Globalize/ginfo.scm 19 */
									BgL_sfunzf2ginfozf2_bglt BgL_arg3961z00_1701;

									{	/* Globalize/ginfo.scm 19 */
										obj_t BgL_arg3962z00_1702;

										obj_t BgL_arg3963z00_1703;

										obj_t BgL_arg3964z00_1704;

										obj_t BgL_arg3965z00_1705;

										obj_t BgL_arg3966z00_1706;

										obj_t BgL_arg3967z00_1707;

										obj_t BgL_arg3968z00_1708;

										obj_t BgL_arg3969z00_1709;

										obj_t BgL_arg3970z00_1710;

										obj_t BgL_arg3972z00_1711;

										obj_t BgL_arg3973z00_1712;

										obj_t BgL_arg3974z00_1713;

										obj_t BgL_arg3975z00_1714;

										obj_t BgL_arg3976z00_1715;

										obj_t BgL_arg3977z00_1716;

										obj_t BgL_arg3978z00_1717;

										obj_t BgL_arg3979z00_1718;

										obj_t BgL_arg3980z00_1719;

										obj_t BgL_arg3981z00_1720;

										obj_t BgL_arg3982z00_1721;

										BgL_arg3962z00_1702 =
											STRUCT_REF(BgL_aux3350z00_1698, (int) (((long) 0)));
										BgL_arg3963z00_1703 =
											STRUCT_REF(BgL_aux3350z00_1698, (int) (((long) 1)));
										BgL_arg3964z00_1704 =
											STRUCT_REF(BgL_aux3350z00_1698, (int) (((long) 2)));
										BgL_arg3965z00_1705 =
											STRUCT_REF(BgL_aux3350z00_1698, (int) (((long) 3)));
										BgL_arg3966z00_1706 =
											STRUCT_REF(BgL_aux3350z00_1698, (int) (((long) 4)));
										BgL_arg3967z00_1707 =
											STRUCT_REF(BgL_aux3350z00_1698, (int) (((long) 5)));
										BgL_arg3968z00_1708 =
											STRUCT_REF(BgL_aux3350z00_1698, (int) (((long) 6)));
										BgL_arg3969z00_1709 =
											STRUCT_REF(BgL_aux3350z00_1698, (int) (((long) 7)));
										BgL_arg3970z00_1710 =
											STRUCT_REF(BgL_aux3350z00_1698, (int) (((long) 8)));
										BgL_arg3972z00_1711 =
											STRUCT_REF(BgL_aux3350z00_1698, (int) (((long) 9)));
										BgL_arg3973z00_1712 =
											STRUCT_REF(BgL_aux3350z00_1698, (int) (((long) 10)));
										BgL_arg3974z00_1713 =
											STRUCT_REF(BgL_aux3350z00_1698, (int) (((long) 11)));
										BgL_arg3975z00_1714 =
											STRUCT_REF(BgL_aux3350z00_1698, (int) (((long) 12)));
										BgL_arg3976z00_1715 =
											STRUCT_REF(BgL_aux3350z00_1698, (int) (((long) 13)));
										BgL_arg3977z00_1716 =
											STRUCT_REF(BgL_aux3350z00_1698, (int) (((long) 14)));
										BgL_arg3978z00_1717 =
											STRUCT_REF(BgL_aux3350z00_1698, (int) (((long) 15)));
										BgL_arg3979z00_1718 =
											STRUCT_REF(BgL_aux3350z00_1698, (int) (((long) 16)));
										BgL_arg3980z00_1719 =
											STRUCT_REF(BgL_aux3350z00_1698, (int) (((long) 17)));
										BgL_arg3981z00_1720 =
											STRUCT_REF(BgL_aux3350z00_1698, (int) (((long) 18)));
										BgL_arg3982z00_1721 =
											STRUCT_REF(BgL_aux3350z00_1698, (int) (((long) 19)));
										{	/* Globalize/ginfo.scm 19 */
											BgL_sfunzf2ginfozf2_bglt BgL_res4033z00_2716;

											{	/* Globalize/ginfo.scm 19 */
												bool_t BgL_gzf33242zf3_2653;

												long BgL_mark3253z00_2664;

												long BgL_bmark3258z00_2669;

												long BgL_umark3259z00_2670;

												BgL_gzf33242zf3_2653 = CBOOL(BgL_arg3962z00_1702);
												BgL_mark3253z00_2664 = (long) CINT(BgL_arg3974z00_1713);
												BgL_bmark3258z00_2669 =
													(long) CINT(BgL_arg3979z00_1718);
												BgL_umark3259z00_2670 =
													(long) CINT(BgL_arg3980z00_1719);
												{	/* Globalize/ginfo.scm 19 */
													BgL_sfunzf2ginfozf2_bglt BgL_new3262z00_2673;

													BgL_new3262z00_2673 =
														((BgL_sfunzf2ginfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_sfunzf2ginfozf2_bgl))));
													{	/* Globalize/ginfo.scm 19 */
														BgL_sfunzf2ginfozf2_bglt BgL_res4032z00_2715;

														{	/* Globalize/ginfo.scm 19 */
															BgL_sfunzf2ginfozf2_bglt BgL_new3323z00_2674;

															BgL_new3323z00_2674 = BgL_new3262z00_2673;
															{	/* Globalize/ginfo.scm 19 */
																bool_t BgL_gzf33303zf3_2695;

																obj_t BgL_cfrom3304z00_2696;

																obj_t BgL_cfromza23305za2_2697;

																obj_t BgL_cto3306z00_2698;

																obj_t BgL_ctoza23307za2_2699;

																obj_t BgL_cfunction3308z00_2700;

																obj_t BgL_integrator3309z00_2701;

																obj_t BgL_imark3310z00_2702;

																obj_t BgL_owner3311z00_2703;

																obj_t BgL_integrated3312z00_2704;

																obj_t BgL_pluggedzd2in3313zd2_2705;

																long BgL_mark3314z00_2706;

																obj_t BgL_freezd2mark3315zd2_2707;

																obj_t BgL_thezd2global3316zd2_2708;

																obj_t BgL_kaptured3317z00_2709;

																obj_t BgL_newzd2body3318zd2_2710;

																long BgL_bmark3319z00_2711;

																long BgL_umark3320z00_2712;

																obj_t BgL_free3321z00_2713;

																obj_t BgL_bound3322z00_2714;

																BgL_gzf33303zf3_2695 = BgL_gzf33242zf3_2653;
																BgL_cfrom3304z00_2696 = BgL_arg3963z00_1703;
																BgL_cfromza23305za2_2697 = BgL_arg3964z00_1704;
																BgL_cto3306z00_2698 = BgL_arg3965z00_1705;
																BgL_ctoza23307za2_2699 = BgL_arg3966z00_1706;
																BgL_cfunction3308z00_2700 = BgL_arg3967z00_1707;
																BgL_integrator3309z00_2701 =
																	BgL_arg3968z00_1708;
																BgL_imark3310z00_2702 = BgL_arg3969z00_1709;
																BgL_owner3311z00_2703 = BgL_arg3970z00_1710;
																BgL_integrated3312z00_2704 =
																	BgL_arg3972z00_1711;
																BgL_pluggedzd2in3313zd2_2705 =
																	BgL_arg3973z00_1712;
																BgL_mark3314z00_2706 = BgL_mark3253z00_2664;
																BgL_freezd2mark3315zd2_2707 =
																	BgL_arg3975z00_1714;
																BgL_thezd2global3316zd2_2708 =
																	BgL_arg3976z00_1715;
																BgL_kaptured3317z00_2709 = BgL_arg3977z00_1716;
																BgL_newzd2body3318zd2_2710 =
																	BgL_arg3978z00_1717;
																BgL_bmark3319z00_2711 = BgL_bmark3258z00_2669;
																BgL_umark3320z00_2712 = BgL_umark3259z00_2670;
																BgL_free3321z00_2713 = BgL_arg3981z00_1720;
																BgL_bound3322z00_2714 = BgL_arg3982z00_1721;
																((((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_new3323z00_2674))->BgL_gzf3zf3) =
																	((bool_t) BgL_gzf33303zf3_2695), BUNSPEC);
																((((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_new3323z00_2674))->
																		BgL_cfromz00) =
																	((obj_t) BgL_cfrom3304z00_2696), BUNSPEC);
																((((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_new3323z00_2674))->
																		BgL_cfromza2za2) =
																	((obj_t) BgL_cfromza23305za2_2697), BUNSPEC);
																((((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_new3323z00_2674))->BgL_ctoz00) =
																	((obj_t) BgL_cto3306z00_2698), BUNSPEC);
																((((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_new3323z00_2674))->
																		BgL_ctoza2za2) =
																	((obj_t) BgL_ctoza23307za2_2699), BUNSPEC);
																((((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_new3323z00_2674))->
																		BgL_cfunctionz00) =
																	((obj_t) BgL_cfunction3308z00_2700), BUNSPEC);
																((((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_new3323z00_2674))->
																		BgL_integratorz00) =
																	((obj_t) BgL_integrator3309z00_2701),
																	BUNSPEC);
																((((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_new3323z00_2674))->
																		BgL_imarkz00) =
																	((obj_t) BgL_imark3310z00_2702), BUNSPEC);
																((((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_new3323z00_2674))->
																		BgL_ownerz00) =
																	((obj_t) BgL_owner3311z00_2703), BUNSPEC);
																((((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_new3323z00_2674))->
																		BgL_integratedz00) =
																	((obj_t) BgL_integrated3312z00_2704),
																	BUNSPEC);
																((((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_new3323z00_2674))->
																		BgL_pluggedzd2inzd2) =
																	((obj_t) BgL_pluggedzd2in3313zd2_2705),
																	BUNSPEC);
																((((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_new3323z00_2674))->BgL_markz00) =
																	((long) BgL_mark3314z00_2706), BUNSPEC);
																((((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_new3323z00_2674))->
																		BgL_freezd2markzd2) =
																	((obj_t) BgL_freezd2mark3315zd2_2707),
																	BUNSPEC);
																((((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_new3323z00_2674))->
																		BgL_thezd2globalzd2) =
																	((obj_t) BgL_thezd2global3316zd2_2708),
																	BUNSPEC);
																((((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_new3323z00_2674))->
																		BgL_kapturedz00) =
																	((obj_t) BgL_kaptured3317z00_2709), BUNSPEC);
																((((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_new3323z00_2674))->
																		BgL_newzd2bodyzd2) =
																	((obj_t) BgL_newzd2body3318zd2_2710),
																	BUNSPEC);
																((((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_new3323z00_2674))->
																		BgL_bmarkz00) =
																	((long) BgL_bmark3319z00_2711), BUNSPEC);
																((((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_new3323z00_2674))->
																		BgL_umarkz00) =
																	((long) BgL_umark3320z00_2712), BUNSPEC);
																((((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_new3323z00_2674))->BgL_freez00) =
																	((obj_t) BgL_free3321z00_2713), BUNSPEC);
																((((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_new3323z00_2674))->
																		BgL_boundz00) =
																	((obj_t) BgL_bound3322z00_2714), BUNSPEC);
																BgL_res4032z00_2715 = BgL_new3323z00_2674;
														}} BgL_res4032z00_2715;
													}
													BgL_res4033z00_2716 = BgL_new3262z00_2673;
											}}
											BgL_arg3961z00_1701 = BgL_res4033z00_2716;
									}}
									{	/* Globalize/ginfo.scm 19 */
										obj_t BgL_auxz00_3804;

										BgL_objectz00_bglt BgL_auxz00_3802;

										BgL_auxz00_3804 = (obj_t) (BgL_arg3961z00_1701);
										BgL_auxz00_3802 =
											(BgL_objectz00_bglt) (BgL_new3351z00_1699);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3802, BgL_auxz00_3804);
								}}
								BgL_auxz00_3720 = BgL_new3351z00_1699;
					}}}
					return (obj_t) (BgL_auxz00_3720);
				}
			}
		}
	}



/* object->struct-sfun/3743 */
	obj_t BGl_objectzd2ze3structzd2sfunzf23743z11zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2918, obj_t BgL_obj3346z00_2919)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 19 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_obj3346z00_1645;

				BgL_obj3346z00_1645 = (BgL_sfunzf2ginfozf2_bglt) (BgL_obj3346z00_2919);
				{

					{	/* Globalize/ginfo.scm 19 */
						obj_t BgL_res3347z00_1648;

						{	/* Globalize/ginfo.scm 19 */
							obj_t BgL_nextzd2method3742zd2_1691;

							BgL_nextzd2method3742zd2_1691 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3346z00_1645),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7);
							if (PROCEDUREP(BgL_nextzd2method3742zd2_1691))
								{	/* Globalize/ginfo.scm 19 */
									BgL_res3347z00_1648 =
										PROCEDURE_ENTRY(BgL_nextzd2method3742zd2_1691)
										(BgL_nextzd2method3742zd2_1691,
										(obj_t) (BgL_obj3346z00_1645), BEOA);
								}
							else
								{	/* Globalize/ginfo.scm 19 */
									BgL_res3347z00_1648 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3346z00_1645));
								}
						}
						{	/* Globalize/ginfo.scm 19 */
							obj_t BgL_aux3348z00_1649;

							{	/* Globalize/ginfo.scm 19 */
								obj_t BgL_keyz00_2516;

								BgL_keyz00_2516 = CNST_TABLE_REF(((long) 0));
								BgL_aux3348z00_1649 =
									make_struct(BgL_keyz00_2516, (int) (((long) 20)), BUNSPEC);
							}
							{	/* Globalize/ginfo.scm 19 */
								bool_t BgL_arg3916z00_1651;

								{
									obj_t BgL_auxz00_3821;

									{	/* Globalize/ginfo.scm 19 */
										BgL_objectz00_bglt BgL_auxz00_3822;

										BgL_auxz00_3822 =
											(BgL_objectz00_bglt) (BgL_obj3346z00_1645);
										BgL_auxz00_3821 = BGL_OBJECT_WIDENING(BgL_auxz00_3822);
									}
									BgL_arg3916z00_1651 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3821))->
										BgL_gzf3zf3);
								}
								{	/* Globalize/ginfo.scm 19 */
									obj_t BgL_auxz00_3828;

									int BgL_auxz00_3826;

									BgL_auxz00_3828 = BBOOL(BgL_arg3916z00_1651);
									BgL_auxz00_3826 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3348z00_1649, BgL_auxz00_3826,
										BgL_auxz00_3828);
							}}
							{	/* Globalize/ginfo.scm 19 */
								obj_t BgL_arg3918z00_1653;

								{
									obj_t BgL_auxz00_3831;

									{	/* Globalize/ginfo.scm 19 */
										BgL_objectz00_bglt BgL_auxz00_3832;

										BgL_auxz00_3832 =
											(BgL_objectz00_bglt) (BgL_obj3346z00_1645);
										BgL_auxz00_3831 = BGL_OBJECT_WIDENING(BgL_auxz00_3832);
									}
									BgL_arg3918z00_1653 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3831))->
										BgL_cfromz00);
								}
								{	/* Globalize/ginfo.scm 19 */
									int BgL_auxz00_3836;

									BgL_auxz00_3836 = (int) (((long) 1));
									STRUCT_SET(BgL_aux3348z00_1649, BgL_auxz00_3836,
										BgL_arg3918z00_1653);
							}}
							{	/* Globalize/ginfo.scm 19 */
								obj_t BgL_arg3920z00_1655;

								{
									obj_t BgL_auxz00_3839;

									{	/* Globalize/ginfo.scm 19 */
										BgL_objectz00_bglt BgL_auxz00_3840;

										BgL_auxz00_3840 =
											(BgL_objectz00_bglt) (BgL_obj3346z00_1645);
										BgL_auxz00_3839 = BGL_OBJECT_WIDENING(BgL_auxz00_3840);
									}
									BgL_arg3920z00_1655 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3839))->
										BgL_cfromza2za2);
								}
								{	/* Globalize/ginfo.scm 19 */
									int BgL_auxz00_3844;

									BgL_auxz00_3844 = (int) (((long) 2));
									STRUCT_SET(BgL_aux3348z00_1649, BgL_auxz00_3844,
										BgL_arg3920z00_1655);
							}}
							{	/* Globalize/ginfo.scm 19 */
								obj_t BgL_arg3923z00_1657;

								{
									obj_t BgL_auxz00_3847;

									{	/* Globalize/ginfo.scm 19 */
										BgL_objectz00_bglt BgL_auxz00_3848;

										BgL_auxz00_3848 =
											(BgL_objectz00_bglt) (BgL_obj3346z00_1645);
										BgL_auxz00_3847 = BGL_OBJECT_WIDENING(BgL_auxz00_3848);
									}
									BgL_arg3923z00_1657 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3847))->
										BgL_ctoz00);
								}
								{	/* Globalize/ginfo.scm 19 */
									int BgL_auxz00_3852;

									BgL_auxz00_3852 = (int) (((long) 3));
									STRUCT_SET(BgL_aux3348z00_1649, BgL_auxz00_3852,
										BgL_arg3923z00_1657);
							}}
							{	/* Globalize/ginfo.scm 19 */
								obj_t BgL_arg3925z00_1659;

								{
									obj_t BgL_auxz00_3855;

									{	/* Globalize/ginfo.scm 19 */
										BgL_objectz00_bglt BgL_auxz00_3856;

										BgL_auxz00_3856 =
											(BgL_objectz00_bglt) (BgL_obj3346z00_1645);
										BgL_auxz00_3855 = BGL_OBJECT_WIDENING(BgL_auxz00_3856);
									}
									BgL_arg3925z00_1659 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3855))->
										BgL_ctoza2za2);
								}
								{	/* Globalize/ginfo.scm 19 */
									int BgL_auxz00_3860;

									BgL_auxz00_3860 = (int) (((long) 4));
									STRUCT_SET(BgL_aux3348z00_1649, BgL_auxz00_3860,
										BgL_arg3925z00_1659);
							}}
							{	/* Globalize/ginfo.scm 19 */
								obj_t BgL_arg3927z00_1661;

								{
									obj_t BgL_auxz00_3863;

									{	/* Globalize/ginfo.scm 19 */
										BgL_objectz00_bglt BgL_auxz00_3864;

										BgL_auxz00_3864 =
											(BgL_objectz00_bglt) (BgL_obj3346z00_1645);
										BgL_auxz00_3863 = BGL_OBJECT_WIDENING(BgL_auxz00_3864);
									}
									BgL_arg3927z00_1661 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3863))->
										BgL_cfunctionz00);
								}
								{	/* Globalize/ginfo.scm 19 */
									int BgL_auxz00_3868;

									BgL_auxz00_3868 = (int) (((long) 5));
									STRUCT_SET(BgL_aux3348z00_1649, BgL_auxz00_3868,
										BgL_arg3927z00_1661);
							}}
							{	/* Globalize/ginfo.scm 19 */
								obj_t BgL_arg3929z00_1663;

								{
									obj_t BgL_auxz00_3871;

									{	/* Globalize/ginfo.scm 19 */
										BgL_objectz00_bglt BgL_auxz00_3872;

										BgL_auxz00_3872 =
											(BgL_objectz00_bglt) (BgL_obj3346z00_1645);
										BgL_auxz00_3871 = BGL_OBJECT_WIDENING(BgL_auxz00_3872);
									}
									BgL_arg3929z00_1663 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3871))->
										BgL_integratorz00);
								}
								{	/* Globalize/ginfo.scm 19 */
									int BgL_auxz00_3876;

									BgL_auxz00_3876 = (int) (((long) 6));
									STRUCT_SET(BgL_aux3348z00_1649, BgL_auxz00_3876,
										BgL_arg3929z00_1663);
							}}
							{	/* Globalize/ginfo.scm 19 */
								obj_t BgL_arg3931z00_1665;

								{
									obj_t BgL_auxz00_3879;

									{	/* Globalize/ginfo.scm 19 */
										BgL_objectz00_bglt BgL_auxz00_3880;

										BgL_auxz00_3880 =
											(BgL_objectz00_bglt) (BgL_obj3346z00_1645);
										BgL_auxz00_3879 = BGL_OBJECT_WIDENING(BgL_auxz00_3880);
									}
									BgL_arg3931z00_1665 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3879))->
										BgL_imarkz00);
								}
								{	/* Globalize/ginfo.scm 19 */
									int BgL_auxz00_3884;

									BgL_auxz00_3884 = (int) (((long) 7));
									STRUCT_SET(BgL_aux3348z00_1649, BgL_auxz00_3884,
										BgL_arg3931z00_1665);
							}}
							{	/* Globalize/ginfo.scm 19 */
								obj_t BgL_arg3933z00_1667;

								{
									obj_t BgL_auxz00_3887;

									{	/* Globalize/ginfo.scm 19 */
										BgL_objectz00_bglt BgL_auxz00_3888;

										BgL_auxz00_3888 =
											(BgL_objectz00_bglt) (BgL_obj3346z00_1645);
										BgL_auxz00_3887 = BGL_OBJECT_WIDENING(BgL_auxz00_3888);
									}
									BgL_arg3933z00_1667 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3887))->
										BgL_ownerz00);
								}
								{	/* Globalize/ginfo.scm 19 */
									int BgL_auxz00_3892;

									BgL_auxz00_3892 = (int) (((long) 8));
									STRUCT_SET(BgL_aux3348z00_1649, BgL_auxz00_3892,
										BgL_arg3933z00_1667);
							}}
							{	/* Globalize/ginfo.scm 19 */
								obj_t BgL_arg3935z00_1669;

								{
									obj_t BgL_auxz00_3895;

									{	/* Globalize/ginfo.scm 19 */
										BgL_objectz00_bglt BgL_auxz00_3896;

										BgL_auxz00_3896 =
											(BgL_objectz00_bglt) (BgL_obj3346z00_1645);
										BgL_auxz00_3895 = BGL_OBJECT_WIDENING(BgL_auxz00_3896);
									}
									BgL_arg3935z00_1669 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3895))->
										BgL_integratedz00);
								}
								{	/* Globalize/ginfo.scm 19 */
									int BgL_auxz00_3900;

									BgL_auxz00_3900 = (int) (((long) 9));
									STRUCT_SET(BgL_aux3348z00_1649, BgL_auxz00_3900,
										BgL_arg3935z00_1669);
							}}
							{	/* Globalize/ginfo.scm 19 */
								obj_t BgL_arg3937z00_1671;

								{
									obj_t BgL_auxz00_3903;

									{	/* Globalize/ginfo.scm 19 */
										BgL_objectz00_bglt BgL_auxz00_3904;

										BgL_auxz00_3904 =
											(BgL_objectz00_bglt) (BgL_obj3346z00_1645);
										BgL_auxz00_3903 = BGL_OBJECT_WIDENING(BgL_auxz00_3904);
									}
									BgL_arg3937z00_1671 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3903))->
										BgL_pluggedzd2inzd2);
								}
								{	/* Globalize/ginfo.scm 19 */
									int BgL_auxz00_3908;

									BgL_auxz00_3908 = (int) (((long) 10));
									STRUCT_SET(BgL_aux3348z00_1649, BgL_auxz00_3908,
										BgL_arg3937z00_1671);
							}}
							{	/* Globalize/ginfo.scm 19 */
								long BgL_arg3939z00_1673;

								{
									obj_t BgL_auxz00_3911;

									{	/* Globalize/ginfo.scm 19 */
										BgL_objectz00_bglt BgL_auxz00_3912;

										BgL_auxz00_3912 =
											(BgL_objectz00_bglt) (BgL_obj3346z00_1645);
										BgL_auxz00_3911 = BGL_OBJECT_WIDENING(BgL_auxz00_3912);
									}
									BgL_arg3939z00_1673 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3911))->
										BgL_markz00);
								}
								{	/* Globalize/ginfo.scm 19 */
									obj_t BgL_auxz00_3918;

									int BgL_auxz00_3916;

									BgL_auxz00_3918 = BINT(BgL_arg3939z00_1673);
									BgL_auxz00_3916 = (int) (((long) 11));
									STRUCT_SET(BgL_aux3348z00_1649, BgL_auxz00_3916,
										BgL_auxz00_3918);
							}}
							{	/* Globalize/ginfo.scm 19 */
								obj_t BgL_arg3941z00_1675;

								{
									obj_t BgL_auxz00_3921;

									{	/* Globalize/ginfo.scm 19 */
										BgL_objectz00_bglt BgL_auxz00_3922;

										BgL_auxz00_3922 =
											(BgL_objectz00_bglt) (BgL_obj3346z00_1645);
										BgL_auxz00_3921 = BGL_OBJECT_WIDENING(BgL_auxz00_3922);
									}
									BgL_arg3941z00_1675 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3921))->
										BgL_freezd2markzd2);
								}
								{	/* Globalize/ginfo.scm 19 */
									int BgL_auxz00_3926;

									BgL_auxz00_3926 = (int) (((long) 12));
									STRUCT_SET(BgL_aux3348z00_1649, BgL_auxz00_3926,
										BgL_arg3941z00_1675);
							}}
							{	/* Globalize/ginfo.scm 19 */
								obj_t BgL_arg3943z00_1677;

								{
									obj_t BgL_auxz00_3929;

									{	/* Globalize/ginfo.scm 19 */
										BgL_objectz00_bglt BgL_auxz00_3930;

										BgL_auxz00_3930 =
											(BgL_objectz00_bglt) (BgL_obj3346z00_1645);
										BgL_auxz00_3929 = BGL_OBJECT_WIDENING(BgL_auxz00_3930);
									}
									BgL_arg3943z00_1677 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3929))->
										BgL_thezd2globalzd2);
								}
								{	/* Globalize/ginfo.scm 19 */
									int BgL_auxz00_3934;

									BgL_auxz00_3934 = (int) (((long) 13));
									STRUCT_SET(BgL_aux3348z00_1649, BgL_auxz00_3934,
										BgL_arg3943z00_1677);
							}}
							{	/* Globalize/ginfo.scm 19 */
								obj_t BgL_arg3945z00_1679;

								{
									obj_t BgL_auxz00_3937;

									{	/* Globalize/ginfo.scm 19 */
										BgL_objectz00_bglt BgL_auxz00_3938;

										BgL_auxz00_3938 =
											(BgL_objectz00_bglt) (BgL_obj3346z00_1645);
										BgL_auxz00_3937 = BGL_OBJECT_WIDENING(BgL_auxz00_3938);
									}
									BgL_arg3945z00_1679 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3937))->
										BgL_kapturedz00);
								}
								{	/* Globalize/ginfo.scm 19 */
									int BgL_auxz00_3942;

									BgL_auxz00_3942 = (int) (((long) 14));
									STRUCT_SET(BgL_aux3348z00_1649, BgL_auxz00_3942,
										BgL_arg3945z00_1679);
							}}
							{	/* Globalize/ginfo.scm 19 */
								obj_t BgL_arg3947z00_1681;

								{
									obj_t BgL_auxz00_3945;

									{	/* Globalize/ginfo.scm 19 */
										BgL_objectz00_bglt BgL_auxz00_3946;

										BgL_auxz00_3946 =
											(BgL_objectz00_bglt) (BgL_obj3346z00_1645);
										BgL_auxz00_3945 = BGL_OBJECT_WIDENING(BgL_auxz00_3946);
									}
									BgL_arg3947z00_1681 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3945))->
										BgL_newzd2bodyzd2);
								}
								{	/* Globalize/ginfo.scm 19 */
									int BgL_auxz00_3950;

									BgL_auxz00_3950 = (int) (((long) 15));
									STRUCT_SET(BgL_aux3348z00_1649, BgL_auxz00_3950,
										BgL_arg3947z00_1681);
							}}
							{	/* Globalize/ginfo.scm 19 */
								long BgL_arg3949z00_1683;

								{
									obj_t BgL_auxz00_3953;

									{	/* Globalize/ginfo.scm 19 */
										BgL_objectz00_bglt BgL_auxz00_3954;

										BgL_auxz00_3954 =
											(BgL_objectz00_bglt) (BgL_obj3346z00_1645);
										BgL_auxz00_3953 = BGL_OBJECT_WIDENING(BgL_auxz00_3954);
									}
									BgL_arg3949z00_1683 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3953))->
										BgL_bmarkz00);
								}
								{	/* Globalize/ginfo.scm 19 */
									obj_t BgL_auxz00_3960;

									int BgL_auxz00_3958;

									BgL_auxz00_3960 = BINT(BgL_arg3949z00_1683);
									BgL_auxz00_3958 = (int) (((long) 16));
									STRUCT_SET(BgL_aux3348z00_1649, BgL_auxz00_3958,
										BgL_auxz00_3960);
							}}
							{	/* Globalize/ginfo.scm 19 */
								long BgL_arg3951z00_1685;

								{
									obj_t BgL_auxz00_3963;

									{	/* Globalize/ginfo.scm 19 */
										BgL_objectz00_bglt BgL_auxz00_3964;

										BgL_auxz00_3964 =
											(BgL_objectz00_bglt) (BgL_obj3346z00_1645);
										BgL_auxz00_3963 = BGL_OBJECT_WIDENING(BgL_auxz00_3964);
									}
									BgL_arg3951z00_1685 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3963))->
										BgL_umarkz00);
								}
								{	/* Globalize/ginfo.scm 19 */
									obj_t BgL_auxz00_3970;

									int BgL_auxz00_3968;

									BgL_auxz00_3970 = BINT(BgL_arg3951z00_1685);
									BgL_auxz00_3968 = (int) (((long) 17));
									STRUCT_SET(BgL_aux3348z00_1649, BgL_auxz00_3968,
										BgL_auxz00_3970);
							}}
							{	/* Globalize/ginfo.scm 19 */
								obj_t BgL_arg3954z00_1687;

								{
									obj_t BgL_auxz00_3973;

									{	/* Globalize/ginfo.scm 19 */
										BgL_objectz00_bglt BgL_auxz00_3974;

										BgL_auxz00_3974 =
											(BgL_objectz00_bglt) (BgL_obj3346z00_1645);
										BgL_auxz00_3973 = BGL_OBJECT_WIDENING(BgL_auxz00_3974);
									}
									BgL_arg3954z00_1687 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3973))->
										BgL_freez00);
								}
								{	/* Globalize/ginfo.scm 19 */
									int BgL_auxz00_3978;

									BgL_auxz00_3978 = (int) (((long) 18));
									STRUCT_SET(BgL_aux3348z00_1649, BgL_auxz00_3978,
										BgL_arg3954z00_1687);
							}}
							{	/* Globalize/ginfo.scm 19 */
								obj_t BgL_arg3956z00_1689;

								{
									obj_t BgL_auxz00_3981;

									{	/* Globalize/ginfo.scm 19 */
										BgL_objectz00_bglt BgL_auxz00_3982;

										BgL_auxz00_3982 =
											(BgL_objectz00_bglt) (BgL_obj3346z00_1645);
										BgL_auxz00_3981 = BGL_OBJECT_WIDENING(BgL_auxz00_3982);
									}
									BgL_arg3956z00_1689 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3981))->
										BgL_boundz00);
								}
								{	/* Globalize/ginfo.scm 19 */
									int BgL_auxz00_3986;

									BgL_auxz00_3986 = (int) (((long) 19));
									STRUCT_SET(BgL_aux3348z00_1649, BgL_auxz00_3986,
										BgL_arg3956z00_1689);
							}}
							{	/* Globalize/ginfo.scm 19 */
								int BgL_auxz00_3989;

								BgL_auxz00_3989 = (int) (((long) 0));
								STRUCT_SET(BgL_res3347z00_1648, BgL_auxz00_3989,
									BgL_aux3348z00_1649);
							}
							{	/* Globalize/ginfo.scm 19 */
								obj_t BgL_auxz00_3992;

								BgL_auxz00_3992 = STRUCT_KEY(BgL_res3347z00_1648);
								STRUCT_KEY_SET(BgL_aux3348z00_1649, BgL_auxz00_3992);
							}
							{	/* Globalize/ginfo.scm 19 */
								obj_t BgL_kz00_2607;

								BgL_kz00_2607 = CNST_TABLE_REF(((long) 0));
								STRUCT_KEY_SET(BgL_res3347z00_1648, BgL_kz00_2607);
							}
							return BgL_res3347z00_1648;
						}
					}
				}
			}
		}
	}



/* struct+object->objec3741 */
	obj_t BGl_structzb2objectzd2ze3objec3741z83zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2920, obj_t BgL_oz00_2921, obj_t BgL_sz00_2922)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 61 */
			{
				BgL_svarzf2ginfozf2_bglt BgL_oz00_1630;

				obj_t BgL_sz00_1631;

				{	/* Globalize/ginfo.scm 61 */
					BgL_svarzf2ginfozf2_bglt BgL_auxz00_3998;

					BgL_oz00_1630 = (BgL_svarzf2ginfozf2_bglt) (BgL_oz00_2921);
					BgL_sz00_1631 = BgL_sz00_2922;
					{

						{	/* Globalize/ginfo.scm 61 */
							obj_t BgL_old3487z00_1634;

							obj_t BgL_aux3488z00_1635;

							{	/* Globalize/ginfo.scm 61 */
								obj_t BgL_nextzd2method3740zd2_1643;

								BgL_nextzd2method3740zd2_1643 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1630),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
								if (PROCEDUREP(BgL_nextzd2method3740zd2_1643))
									{	/* Globalize/ginfo.scm 61 */
										BgL_old3487z00_1634 =
											PROCEDURE_ENTRY(BgL_nextzd2method3740zd2_1643)
											(BgL_nextzd2method3740zd2_1643, (obj_t) (BgL_oz00_1630),
											BgL_sz00_1631, BEOA);
									}
								else
									{	/* Globalize/ginfo.scm 61 */
										BgL_old3487z00_1634 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1630), BgL_sz00_1631));
									}
							}
							BgL_aux3488z00_1635 =
								STRUCT_REF(BgL_sz00_1631, (int) (((long) 0)));
							{	/* Globalize/ginfo.scm 61 */
								BgL_svarzf2ginfozf2_bglt BgL_new3489z00_1636;

								BgL_new3489z00_1636 =
									((BgL_svarzf2ginfozf2_bglt) (BgL_old3487z00_1634));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3489z00_1636),
									BGl_classzd2numzd2zz__objectz00
									(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7));
								{	/* Globalize/ginfo.scm 61 */
									BgL_svarzf2ginfozf2_bglt BgL_arg3909z00_1638;

									{	/* Globalize/ginfo.scm 61 */
										obj_t BgL_arg3910z00_1639;

										obj_t BgL_arg3911z00_1640;

										obj_t BgL_arg3912z00_1641;

										obj_t BgL_arg3913z00_1642;

										BgL_arg3910z00_1639 =
											STRUCT_REF(BgL_aux3488z00_1635, (int) (((long) 0)));
										BgL_arg3911z00_1640 =
											STRUCT_REF(BgL_aux3488z00_1635, (int) (((long) 1)));
										BgL_arg3912z00_1641 =
											STRUCT_REF(BgL_aux3488z00_1635, (int) (((long) 2)));
										BgL_arg3913z00_1642 =
											STRUCT_REF(BgL_aux3488z00_1635, (int) (((long) 3)));
										{	/* Globalize/ginfo.scm 61 */
											BgL_svarzf2ginfozf2_bglt BgL_res4030z00_2514;

											{	/* Globalize/ginfo.scm 61 */
												bool_t BgL_kapturedzf33460zf3_2499;

												long BgL_freezd2mark3461zd2_2500;

												long BgL_mark3462z00_2501;

												bool_t BgL_celledzf33463zf3_2502;

												BgL_kapturedzf33460zf3_2499 =
													CBOOL(BgL_arg3910z00_1639);
												BgL_freezd2mark3461zd2_2500 =
													(long) CINT(BgL_arg3911z00_1640);
												BgL_mark3462z00_2501 = (long) CINT(BgL_arg3912z00_1641);
												BgL_celledzf33463zf3_2502 = CBOOL(BgL_arg3913z00_1642);
												{	/* Globalize/ginfo.scm 61 */
													BgL_svarzf2ginfozf2_bglt BgL_new3464z00_2503;

													BgL_new3464z00_2503 =
														((BgL_svarzf2ginfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_svarzf2ginfozf2_bgl))));
													{	/* Globalize/ginfo.scm 61 */
														BgL_svarzf2ginfozf2_bglt BgL_res4029z00_2513;

														{	/* Globalize/ginfo.scm 61 */
															BgL_svarzf2ginfozf2_bglt BgL_new3477z00_2504;

															BgL_new3477z00_2504 = BgL_new3464z00_2503;
															{	/* Globalize/ginfo.scm 61 */
																bool_t BgL_kapturedzf33473zf3_2509;

																long BgL_freezd2mark3474zd2_2510;

																long BgL_mark3475z00_2511;

																bool_t BgL_celledzf33476zf3_2512;

																BgL_kapturedzf33473zf3_2509 =
																	BgL_kapturedzf33460zf3_2499;
																BgL_freezd2mark3474zd2_2510 =
																	BgL_freezd2mark3461zd2_2500;
																BgL_mark3475z00_2511 = BgL_mark3462z00_2501;
																BgL_celledzf33476zf3_2512 =
																	BgL_celledzf33463zf3_2502;
																((((BgL_svarzf2ginfozf2_bglt)
																			CREF(BgL_new3477z00_2504))->
																		BgL_kapturedzf3zf3) =
																	((bool_t) BgL_kapturedzf33473zf3_2509),
																	BUNSPEC);
																((((BgL_svarzf2ginfozf2_bglt)
																			CREF(BgL_new3477z00_2504))->
																		BgL_freezd2markzd2) =
																	((long) BgL_freezd2mark3474zd2_2510),
																	BUNSPEC);
																((((BgL_svarzf2ginfozf2_bglt)
																			CREF(BgL_new3477z00_2504))->BgL_markz00) =
																	((long) BgL_mark3475z00_2511), BUNSPEC);
																((((BgL_svarzf2ginfozf2_bglt)
																			CREF(BgL_new3477z00_2504))->
																		BgL_celledzf3zf3) =
																	((bool_t) BgL_celledzf33476zf3_2512),
																	BUNSPEC);
																BgL_res4029z00_2513 = BgL_new3477z00_2504;
														}} BgL_res4029z00_2513;
													}
													BgL_res4030z00_2514 = BgL_new3464z00_2503;
											}}
											BgL_arg3909z00_1638 = BgL_res4030z00_2514;
									}}
									{	/* Globalize/ginfo.scm 61 */
										obj_t BgL_auxz00_4034;

										BgL_objectz00_bglt BgL_auxz00_4032;

										BgL_auxz00_4034 = (obj_t) (BgL_arg3909z00_1638);
										BgL_auxz00_4032 =
											(BgL_objectz00_bglt) (BgL_new3489z00_1636);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_4032, BgL_auxz00_4034);
								}}
								BgL_auxz00_3998 = BgL_new3489z00_1636;
					}}}
					return (obj_t) (BgL_auxz00_3998);
				}
			}
		}
	}



/* object->struct-svar/3738 */
	obj_t BGl_objectzd2ze3structzd2svarzf23738z11zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2923, obj_t BgL_obj3484z00_2924)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 61 */
			{
				BgL_svarzf2ginfozf2_bglt BgL_obj3484z00_1614;

				BgL_obj3484z00_1614 = (BgL_svarzf2ginfozf2_bglt) (BgL_obj3484z00_2924);
				{

					{	/* Globalize/ginfo.scm 61 */
						obj_t BgL_res3485z00_1617;

						{	/* Globalize/ginfo.scm 61 */
							obj_t BgL_nextzd2method3737zd2_1628;

							BgL_nextzd2method3737zd2_1628 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3484z00_1614),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
							if (PROCEDUREP(BgL_nextzd2method3737zd2_1628))
								{	/* Globalize/ginfo.scm 61 */
									BgL_res3485z00_1617 =
										PROCEDURE_ENTRY(BgL_nextzd2method3737zd2_1628)
										(BgL_nextzd2method3737zd2_1628,
										(obj_t) (BgL_obj3484z00_1614), BEOA);
								}
							else
								{	/* Globalize/ginfo.scm 61 */
									BgL_res3485z00_1617 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3484z00_1614));
								}
						}
						{	/* Globalize/ginfo.scm 61 */
							obj_t BgL_aux3486z00_1618;

							{	/* Globalize/ginfo.scm 61 */
								obj_t BgL_keyz00_2458;

								BgL_keyz00_2458 = CNST_TABLE_REF(((long) 1));
								BgL_aux3486z00_1618 =
									make_struct(BgL_keyz00_2458, (int) (((long) 4)), BUNSPEC);
							}
							{	/* Globalize/ginfo.scm 61 */
								bool_t BgL_arg3899z00_1620;

								{
									obj_t BgL_auxz00_4051;

									{	/* Globalize/ginfo.scm 61 */
										BgL_objectz00_bglt BgL_auxz00_4052;

										BgL_auxz00_4052 =
											(BgL_objectz00_bglt) (BgL_obj3484z00_1614);
										BgL_auxz00_4051 = BGL_OBJECT_WIDENING(BgL_auxz00_4052);
									}
									BgL_arg3899z00_1620 =
										(((BgL_svarzf2ginfozf2_bglt) CREF(BgL_auxz00_4051))->
										BgL_kapturedzf3zf3);
								}
								{	/* Globalize/ginfo.scm 61 */
									obj_t BgL_auxz00_4058;

									int BgL_auxz00_4056;

									BgL_auxz00_4058 = BBOOL(BgL_arg3899z00_1620);
									BgL_auxz00_4056 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3486z00_1618, BgL_auxz00_4056,
										BgL_auxz00_4058);
							}}
							{	/* Globalize/ginfo.scm 61 */
								long BgL_arg3901z00_1622;

								{
									obj_t BgL_auxz00_4061;

									{	/* Globalize/ginfo.scm 61 */
										BgL_objectz00_bglt BgL_auxz00_4062;

										BgL_auxz00_4062 =
											(BgL_objectz00_bglt) (BgL_obj3484z00_1614);
										BgL_auxz00_4061 = BGL_OBJECT_WIDENING(BgL_auxz00_4062);
									}
									BgL_arg3901z00_1622 =
										(((BgL_svarzf2ginfozf2_bglt) CREF(BgL_auxz00_4061))->
										BgL_freezd2markzd2);
								}
								{	/* Globalize/ginfo.scm 61 */
									obj_t BgL_auxz00_4068;

									int BgL_auxz00_4066;

									BgL_auxz00_4068 = BINT(BgL_arg3901z00_1622);
									BgL_auxz00_4066 = (int) (((long) 1));
									STRUCT_SET(BgL_aux3486z00_1618, BgL_auxz00_4066,
										BgL_auxz00_4068);
							}}
							{	/* Globalize/ginfo.scm 61 */
								long BgL_arg3903z00_1624;

								{
									obj_t BgL_auxz00_4071;

									{	/* Globalize/ginfo.scm 61 */
										BgL_objectz00_bglt BgL_auxz00_4072;

										BgL_auxz00_4072 =
											(BgL_objectz00_bglt) (BgL_obj3484z00_1614);
										BgL_auxz00_4071 = BGL_OBJECT_WIDENING(BgL_auxz00_4072);
									}
									BgL_arg3903z00_1624 =
										(((BgL_svarzf2ginfozf2_bglt) CREF(BgL_auxz00_4071))->
										BgL_markz00);
								}
								{	/* Globalize/ginfo.scm 61 */
									obj_t BgL_auxz00_4078;

									int BgL_auxz00_4076;

									BgL_auxz00_4078 = BINT(BgL_arg3903z00_1624);
									BgL_auxz00_4076 = (int) (((long) 2));
									STRUCT_SET(BgL_aux3486z00_1618, BgL_auxz00_4076,
										BgL_auxz00_4078);
							}}
							{	/* Globalize/ginfo.scm 61 */
								bool_t BgL_arg3905z00_1626;

								{
									obj_t BgL_auxz00_4081;

									{	/* Globalize/ginfo.scm 61 */
										BgL_objectz00_bglt BgL_auxz00_4082;

										BgL_auxz00_4082 =
											(BgL_objectz00_bglt) (BgL_obj3484z00_1614);
										BgL_auxz00_4081 = BGL_OBJECT_WIDENING(BgL_auxz00_4082);
									}
									BgL_arg3905z00_1626 =
										(((BgL_svarzf2ginfozf2_bglt) CREF(BgL_auxz00_4081))->
										BgL_celledzf3zf3);
								}
								{	/* Globalize/ginfo.scm 61 */
									obj_t BgL_auxz00_4088;

									int BgL_auxz00_4086;

									BgL_auxz00_4088 = BBOOL(BgL_arg3905z00_1626);
									BgL_auxz00_4086 = (int) (((long) 3));
									STRUCT_SET(BgL_aux3486z00_1618, BgL_auxz00_4086,
										BgL_auxz00_4088);
							}}
							{	/* Globalize/ginfo.scm 61 */
								int BgL_auxz00_4091;

								BgL_auxz00_4091 = (int) (((long) 0));
								STRUCT_SET(BgL_res3485z00_1617, BgL_auxz00_4091,
									BgL_aux3486z00_1618);
							}
							{	/* Globalize/ginfo.scm 61 */
								obj_t BgL_auxz00_4094;

								BgL_auxz00_4094 = STRUCT_KEY(BgL_res3485z00_1617);
								STRUCT_KEY_SET(BgL_aux3486z00_1618, BgL_auxz00_4094);
							}
							{	/* Globalize/ginfo.scm 61 */
								obj_t BgL_kz00_2485;

								BgL_kz00_2485 = CNST_TABLE_REF(((long) 1));
								STRUCT_KEY_SET(BgL_res3485z00_1617, BgL_kz00_2485);
							}
							return BgL_res3485z00_1617;
						}
					}
				}
			}
		}
	}



/* struct+object->objec3735 */
	obj_t BGl_structzb2objectzd2ze3objec3735z83zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2925, obj_t BgL_oz00_2926, obj_t BgL_sz00_2927)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 71 */
			{
				BgL_sexitzf2ginfozf2_bglt BgL_oz00_1599;

				obj_t BgL_sz00_1600;

				{	/* Globalize/ginfo.scm 71 */
					BgL_sexitzf2ginfozf2_bglt BgL_auxz00_4100;

					BgL_oz00_1599 = (BgL_sexitzf2ginfozf2_bglt) (BgL_oz00_2926);
					BgL_sz00_1600 = BgL_sz00_2927;
					{

						{	/* Globalize/ginfo.scm 71 */
							obj_t BgL_old3535z00_1603;

							obj_t BgL_aux3536z00_1604;

							{	/* Globalize/ginfo.scm 71 */
								obj_t BgL_nextzd2method3734zd2_1612;

								BgL_nextzd2method3734zd2_1612 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1599),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7);
								if (PROCEDUREP(BgL_nextzd2method3734zd2_1612))
									{	/* Globalize/ginfo.scm 71 */
										BgL_old3535z00_1603 =
											PROCEDURE_ENTRY(BgL_nextzd2method3734zd2_1612)
											(BgL_nextzd2method3734zd2_1612, (obj_t) (BgL_oz00_1599),
											BgL_sz00_1600, BEOA);
									}
								else
									{	/* Globalize/ginfo.scm 71 */
										BgL_old3535z00_1603 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1599), BgL_sz00_1600));
									}
							}
							BgL_aux3536z00_1604 =
								STRUCT_REF(BgL_sz00_1600, (int) (((long) 0)));
							{	/* Globalize/ginfo.scm 71 */
								BgL_sexitzf2ginfozf2_bglt BgL_new3537z00_1605;

								BgL_new3537z00_1605 =
									((BgL_sexitzf2ginfozf2_bglt) (BgL_old3535z00_1603));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3537z00_1605),
									BGl_classzd2numzd2zz__objectz00
									(BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7));
								{	/* Globalize/ginfo.scm 71 */
									BgL_sexitzf2ginfozf2_bglt BgL_arg3892z00_1607;

									{	/* Globalize/ginfo.scm 71 */
										obj_t BgL_arg3893z00_1608;

										obj_t BgL_arg3894z00_1609;

										obj_t BgL_arg3895z00_1610;

										obj_t BgL_arg3896z00_1611;

										BgL_arg3893z00_1608 =
											STRUCT_REF(BgL_aux3536z00_1604, (int) (((long) 0)));
										BgL_arg3894z00_1609 =
											STRUCT_REF(BgL_aux3536z00_1604, (int) (((long) 1)));
										BgL_arg3895z00_1610 =
											STRUCT_REF(BgL_aux3536z00_1604, (int) (((long) 2)));
										BgL_arg3896z00_1611 =
											STRUCT_REF(BgL_aux3536z00_1604, (int) (((long) 3)));
										{	/* Globalize/ginfo.scm 71 */
											BgL_sexitzf2ginfozf2_bglt BgL_res4027z00_2456;

											{	/* Globalize/ginfo.scm 71 */
												bool_t BgL_gzf33507zf3_2441;

												bool_t BgL_kapturedzf33508zf3_2442;

												long BgL_freezd2mark3509zd2_2443;

												long BgL_mark3510z00_2444;

												BgL_gzf33507zf3_2441 = CBOOL(BgL_arg3893z00_1608);
												BgL_kapturedzf33508zf3_2442 =
													CBOOL(BgL_arg3894z00_1609);
												BgL_freezd2mark3509zd2_2443 =
													(long) CINT(BgL_arg3895z00_1610);
												BgL_mark3510z00_2444 = (long) CINT(BgL_arg3896z00_1611);
												{	/* Globalize/ginfo.scm 71 */
													BgL_sexitzf2ginfozf2_bglt BgL_new3511z00_2445;

													BgL_new3511z00_2445 =
														((BgL_sexitzf2ginfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_sexitzf2ginfozf2_bgl))));
													{	/* Globalize/ginfo.scm 71 */
														BgL_sexitzf2ginfozf2_bglt BgL_res4026z00_2455;

														{	/* Globalize/ginfo.scm 71 */
															BgL_sexitzf2ginfozf2_bglt BgL_new3525z00_2446;

															BgL_new3525z00_2446 = BgL_new3511z00_2445;
															{	/* Globalize/ginfo.scm 71 */
																bool_t BgL_gzf33521zf3_2451;

																bool_t BgL_kapturedzf33522zf3_2452;

																long BgL_freezd2mark3523zd2_2453;

																long BgL_mark3524z00_2454;

																BgL_gzf33521zf3_2451 = BgL_gzf33507zf3_2441;
																BgL_kapturedzf33522zf3_2452 =
																	BgL_kapturedzf33508zf3_2442;
																BgL_freezd2mark3523zd2_2453 =
																	BgL_freezd2mark3509zd2_2443;
																BgL_mark3524z00_2454 = BgL_mark3510z00_2444;
																((((BgL_sexitzf2ginfozf2_bglt)
																			CREF(BgL_new3525z00_2446))->BgL_gzf3zf3) =
																	((bool_t) BgL_gzf33521zf3_2451), BUNSPEC);
																((((BgL_sexitzf2ginfozf2_bglt)
																			CREF(BgL_new3525z00_2446))->
																		BgL_kapturedzf3zf3) =
																	((bool_t) BgL_kapturedzf33522zf3_2452),
																	BUNSPEC);
																((((BgL_sexitzf2ginfozf2_bglt)
																			CREF(BgL_new3525z00_2446))->
																		BgL_freezd2markzd2) =
																	((long) BgL_freezd2mark3523zd2_2453),
																	BUNSPEC);
																((((BgL_sexitzf2ginfozf2_bglt)
																			CREF(BgL_new3525z00_2446))->BgL_markz00) =
																	((long) BgL_mark3524z00_2454), BUNSPEC);
																BgL_res4026z00_2455 = BgL_new3525z00_2446;
														}} BgL_res4026z00_2455;
													}
													BgL_res4027z00_2456 = BgL_new3511z00_2445;
											}}
											BgL_arg3892z00_1607 = BgL_res4027z00_2456;
									}}
									{	/* Globalize/ginfo.scm 71 */
										obj_t BgL_auxz00_4136;

										BgL_objectz00_bglt BgL_auxz00_4134;

										BgL_auxz00_4136 = (obj_t) (BgL_arg3892z00_1607);
										BgL_auxz00_4134 =
											(BgL_objectz00_bglt) (BgL_new3537z00_1605);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_4134, BgL_auxz00_4136);
								}}
								BgL_auxz00_4100 = BgL_new3537z00_1605;
					}}}
					return (obj_t) (BgL_auxz00_4100);
				}
			}
		}
	}



/* object->struct-sexit3732 */
	obj_t BGl_objectzd2ze3structzd2sexit3732ze3zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2928, obj_t BgL_obj3532z00_2929)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 71 */
			{
				BgL_sexitzf2ginfozf2_bglt BgL_obj3532z00_1583;

				BgL_obj3532z00_1583 = (BgL_sexitzf2ginfozf2_bglt) (BgL_obj3532z00_2929);
				{

					{	/* Globalize/ginfo.scm 71 */
						obj_t BgL_res3533z00_1586;

						{	/* Globalize/ginfo.scm 71 */
							obj_t BgL_nextzd2method3731zd2_1597;

							BgL_nextzd2method3731zd2_1597 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3532z00_1583),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7);
							if (PROCEDUREP(BgL_nextzd2method3731zd2_1597))
								{	/* Globalize/ginfo.scm 71 */
									BgL_res3533z00_1586 =
										PROCEDURE_ENTRY(BgL_nextzd2method3731zd2_1597)
										(BgL_nextzd2method3731zd2_1597,
										(obj_t) (BgL_obj3532z00_1583), BEOA);
								}
							else
								{	/* Globalize/ginfo.scm 71 */
									BgL_res3533z00_1586 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3532z00_1583));
								}
						}
						{	/* Globalize/ginfo.scm 71 */
							obj_t BgL_aux3534z00_1587;

							{	/* Globalize/ginfo.scm 71 */
								obj_t BgL_keyz00_2400;

								BgL_keyz00_2400 = CNST_TABLE_REF(((long) 2));
								BgL_aux3534z00_1587 =
									make_struct(BgL_keyz00_2400, (int) (((long) 4)), BUNSPEC);
							}
							{	/* Globalize/ginfo.scm 71 */
								bool_t BgL_arg3882z00_1589;

								{
									obj_t BgL_auxz00_4153;

									{	/* Globalize/ginfo.scm 71 */
										BgL_objectz00_bglt BgL_auxz00_4154;

										BgL_auxz00_4154 =
											(BgL_objectz00_bglt) (BgL_obj3532z00_1583);
										BgL_auxz00_4153 = BGL_OBJECT_WIDENING(BgL_auxz00_4154);
									}
									BgL_arg3882z00_1589 =
										(((BgL_sexitzf2ginfozf2_bglt) CREF(BgL_auxz00_4153))->
										BgL_gzf3zf3);
								}
								{	/* Globalize/ginfo.scm 71 */
									obj_t BgL_auxz00_4160;

									int BgL_auxz00_4158;

									BgL_auxz00_4160 = BBOOL(BgL_arg3882z00_1589);
									BgL_auxz00_4158 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3534z00_1587, BgL_auxz00_4158,
										BgL_auxz00_4160);
							}}
							{	/* Globalize/ginfo.scm 71 */
								bool_t BgL_arg3884z00_1591;

								{
									obj_t BgL_auxz00_4163;

									{	/* Globalize/ginfo.scm 71 */
										BgL_objectz00_bglt BgL_auxz00_4164;

										BgL_auxz00_4164 =
											(BgL_objectz00_bglt) (BgL_obj3532z00_1583);
										BgL_auxz00_4163 = BGL_OBJECT_WIDENING(BgL_auxz00_4164);
									}
									BgL_arg3884z00_1591 =
										(((BgL_sexitzf2ginfozf2_bglt) CREF(BgL_auxz00_4163))->
										BgL_kapturedzf3zf3);
								}
								{	/* Globalize/ginfo.scm 71 */
									obj_t BgL_auxz00_4170;

									int BgL_auxz00_4168;

									BgL_auxz00_4170 = BBOOL(BgL_arg3884z00_1591);
									BgL_auxz00_4168 = (int) (((long) 1));
									STRUCT_SET(BgL_aux3534z00_1587, BgL_auxz00_4168,
										BgL_auxz00_4170);
							}}
							{	/* Globalize/ginfo.scm 71 */
								long BgL_arg3886z00_1593;

								{
									obj_t BgL_auxz00_4173;

									{	/* Globalize/ginfo.scm 71 */
										BgL_objectz00_bglt BgL_auxz00_4174;

										BgL_auxz00_4174 =
											(BgL_objectz00_bglt) (BgL_obj3532z00_1583);
										BgL_auxz00_4173 = BGL_OBJECT_WIDENING(BgL_auxz00_4174);
									}
									BgL_arg3886z00_1593 =
										(((BgL_sexitzf2ginfozf2_bglt) CREF(BgL_auxz00_4173))->
										BgL_freezd2markzd2);
								}
								{	/* Globalize/ginfo.scm 71 */
									obj_t BgL_auxz00_4180;

									int BgL_auxz00_4178;

									BgL_auxz00_4180 = BINT(BgL_arg3886z00_1593);
									BgL_auxz00_4178 = (int) (((long) 2));
									STRUCT_SET(BgL_aux3534z00_1587, BgL_auxz00_4178,
										BgL_auxz00_4180);
							}}
							{	/* Globalize/ginfo.scm 71 */
								long BgL_arg3888z00_1595;

								{
									obj_t BgL_auxz00_4183;

									{	/* Globalize/ginfo.scm 71 */
										BgL_objectz00_bglt BgL_auxz00_4184;

										BgL_auxz00_4184 =
											(BgL_objectz00_bglt) (BgL_obj3532z00_1583);
										BgL_auxz00_4183 = BGL_OBJECT_WIDENING(BgL_auxz00_4184);
									}
									BgL_arg3888z00_1595 =
										(((BgL_sexitzf2ginfozf2_bglt) CREF(BgL_auxz00_4183))->
										BgL_markz00);
								}
								{	/* Globalize/ginfo.scm 71 */
									obj_t BgL_auxz00_4190;

									int BgL_auxz00_4188;

									BgL_auxz00_4190 = BINT(BgL_arg3888z00_1595);
									BgL_auxz00_4188 = (int) (((long) 3));
									STRUCT_SET(BgL_aux3534z00_1587, BgL_auxz00_4188,
										BgL_auxz00_4190);
							}}
							{	/* Globalize/ginfo.scm 71 */
								int BgL_auxz00_4193;

								BgL_auxz00_4193 = (int) (((long) 0));
								STRUCT_SET(BgL_res3533z00_1586, BgL_auxz00_4193,
									BgL_aux3534z00_1587);
							}
							{	/* Globalize/ginfo.scm 71 */
								obj_t BgL_auxz00_4196;

								BgL_auxz00_4196 = STRUCT_KEY(BgL_res3533z00_1586);
								STRUCT_KEY_SET(BgL_aux3534z00_1587, BgL_auxz00_4196);
							}
							{	/* Globalize/ginfo.scm 71 */
								obj_t BgL_kz00_2427;

								BgL_kz00_2427 = CNST_TABLE_REF(((long) 2));
								STRUCT_KEY_SET(BgL_res3533z00_1586, BgL_kz00_2427);
							}
							return BgL_res3533z00_1586;
						}
					}
				}
			}
		}
	}



/* struct+object->objec3730 */
	obj_t BGl_structzb2objectzd2ze3objec3730z83zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2930, obj_t BgL_oz00_2931, obj_t BgL_sz00_2932)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 81 */
			{
				BgL_localzf2ginfozf2_bglt BgL_oz00_1570;

				obj_t BgL_sz00_1571;

				{	/* Globalize/ginfo.scm 81 */
					BgL_localzf2ginfozf2_bglt BgL_auxz00_4202;

					BgL_oz00_1570 = (BgL_localzf2ginfozf2_bglt) (BgL_oz00_2931);
					BgL_sz00_1571 = BgL_sz00_2932;
					{

						{	/* Globalize/ginfo.scm 81 */
							obj_t BgL_old3586z00_1574;

							obj_t BgL_aux3587z00_1575;

							{	/* Globalize/ginfo.scm 81 */
								obj_t BgL_nextzd2method3729zd2_1581;

								BgL_nextzd2method3729zd2_1581 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1570),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7);
								if (PROCEDUREP(BgL_nextzd2method3729zd2_1581))
									{	/* Globalize/ginfo.scm 81 */
										BgL_old3586z00_1574 =
											PROCEDURE_ENTRY(BgL_nextzd2method3729zd2_1581)
											(BgL_nextzd2method3729zd2_1581, (obj_t) (BgL_oz00_1570),
											BgL_sz00_1571, BEOA);
									}
								else
									{	/* Globalize/ginfo.scm 81 */
										BgL_old3586z00_1574 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1570), BgL_sz00_1571));
									}
							}
							BgL_aux3587z00_1575 =
								STRUCT_REF(BgL_sz00_1571, (int) (((long) 0)));
							{	/* Globalize/ginfo.scm 81 */
								BgL_localzf2ginfozf2_bglt BgL_new3588z00_1576;

								BgL_new3588z00_1576 =
									((BgL_localzf2ginfozf2_bglt) (BgL_old3586z00_1574));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3588z00_1576),
									BGl_classzd2numzd2zz__objectz00
									(BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7));
								{	/* Globalize/ginfo.scm 81 */
									BgL_localzf2ginfozf2_bglt BgL_arg3877z00_1578;

									{	/* Globalize/ginfo.scm 81 */
										obj_t BgL_arg3878z00_1579;

										obj_t BgL_arg3879z00_1580;

										BgL_arg3878z00_1579 =
											STRUCT_REF(BgL_aux3587z00_1575, (int) (((long) 0)));
										BgL_arg3879z00_1580 =
											STRUCT_REF(BgL_aux3587z00_1575, (int) (((long) 1)));
										{	/* Globalize/ginfo.scm 81 */
											BgL_localzf2ginfozf2_bglt BgL_res4024z00_2398;

											{	/* Globalize/ginfo.scm 81 */
												bool_t BgL_escapezf33558zf3_2389;

												bool_t BgL_globaliza7edzf33559z54_2390;

												BgL_escapezf33558zf3_2389 = CBOOL(BgL_arg3878z00_1579);
												BgL_globaliza7edzf33559z54_2390 =
													CBOOL(BgL_arg3879z00_1580);
												{	/* Globalize/ginfo.scm 81 */
													BgL_localzf2ginfozf2_bglt BgL_new3560z00_2391;

													BgL_new3560z00_2391 =
														((BgL_localzf2ginfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_localzf2ginfozf2_bgl))));
													{	/* Globalize/ginfo.scm 81 */
														BgL_localzf2ginfozf2_bglt BgL_res4023z00_2397;

														{	/* Globalize/ginfo.scm 81 */
															BgL_localzf2ginfozf2_bglt BgL_new3578z00_2392;

															BgL_new3578z00_2392 = BgL_new3560z00_2391;
															{	/* Globalize/ginfo.scm 81 */
																bool_t BgL_escapezf33576zf3_2395;

																bool_t BgL_globaliza7edzf33577z54_2396;

																BgL_escapezf33576zf3_2395 =
																	BgL_escapezf33558zf3_2389;
																BgL_globaliza7edzf33577z54_2396 =
																	BgL_globaliza7edzf33559z54_2390;
																((((BgL_localzf2ginfozf2_bglt)
																			CREF(BgL_new3578z00_2392))->
																		BgL_escapezf3zf3) =
																	((bool_t) BgL_escapezf33576zf3_2395),
																	BUNSPEC);
																((((BgL_localzf2ginfozf2_bglt)
																			CREF(BgL_new3578z00_2392))->
																		BgL_globaliza7edzf3z54) =
																	((bool_t) BgL_globaliza7edzf33577z54_2396),
																	BUNSPEC);
																BgL_res4023z00_2397 = BgL_new3578z00_2392;
														}} BgL_res4023z00_2397;
													}
													BgL_res4024z00_2398 = BgL_new3560z00_2391;
											}}
											BgL_arg3877z00_1578 = BgL_res4024z00_2398;
									}}
									{	/* Globalize/ginfo.scm 81 */
										obj_t BgL_auxz00_4230;

										BgL_objectz00_bglt BgL_auxz00_4228;

										BgL_auxz00_4230 = (obj_t) (BgL_arg3877z00_1578);
										BgL_auxz00_4228 =
											(BgL_objectz00_bglt) (BgL_new3588z00_1576);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_4228, BgL_auxz00_4230);
								}}
								BgL_auxz00_4202 = BgL_new3588z00_1576;
					}}}
					return (obj_t) (BgL_auxz00_4202);
				}
			}
		}
	}



/* object->struct-local3728 */
	obj_t BGl_objectzd2ze3structzd2local3728ze3zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2933, obj_t BgL_obj3583z00_2934)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 81 */
			{
				BgL_localzf2ginfozf2_bglt BgL_obj3583z00_1558;

				BgL_obj3583z00_1558 = (BgL_localzf2ginfozf2_bglt) (BgL_obj3583z00_2934);
				{

					{	/* Globalize/ginfo.scm 81 */
						obj_t BgL_res3584z00_1561;

						{	/* Globalize/ginfo.scm 81 */
							obj_t BgL_nextzd2method3727zd2_1568;

							BgL_nextzd2method3727zd2_1568 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3583z00_1558),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7);
							if (PROCEDUREP(BgL_nextzd2method3727zd2_1568))
								{	/* Globalize/ginfo.scm 81 */
									BgL_res3584z00_1561 =
										PROCEDURE_ENTRY(BgL_nextzd2method3727zd2_1568)
										(BgL_nextzd2method3727zd2_1568,
										(obj_t) (BgL_obj3583z00_1558), BEOA);
								}
							else
								{	/* Globalize/ginfo.scm 81 */
									BgL_res3584z00_1561 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3583z00_1558));
								}
						}
						{	/* Globalize/ginfo.scm 81 */
							obj_t BgL_aux3585z00_1562;

							{	/* Globalize/ginfo.scm 81 */
								obj_t BgL_keyz00_2360;

								BgL_keyz00_2360 = CNST_TABLE_REF(((long) 3));
								BgL_aux3585z00_1562 =
									make_struct(BgL_keyz00_2360, (int) (((long) 2)), BUNSPEC);
							}
							{	/* Globalize/ginfo.scm 81 */
								bool_t BgL_arg3871z00_1564;

								{
									obj_t BgL_auxz00_4247;

									{	/* Globalize/ginfo.scm 81 */
										BgL_objectz00_bglt BgL_auxz00_4248;

										BgL_auxz00_4248 =
											(BgL_objectz00_bglt) (BgL_obj3583z00_1558);
										BgL_auxz00_4247 = BGL_OBJECT_WIDENING(BgL_auxz00_4248);
									}
									BgL_arg3871z00_1564 =
										(((BgL_localzf2ginfozf2_bglt) CREF(BgL_auxz00_4247))->
										BgL_escapezf3zf3);
								}
								{	/* Globalize/ginfo.scm 81 */
									obj_t BgL_auxz00_4254;

									int BgL_auxz00_4252;

									BgL_auxz00_4254 = BBOOL(BgL_arg3871z00_1564);
									BgL_auxz00_4252 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3585z00_1562, BgL_auxz00_4252,
										BgL_auxz00_4254);
							}}
							{	/* Globalize/ginfo.scm 81 */
								bool_t BgL_arg3873z00_1566;

								{
									obj_t BgL_auxz00_4257;

									{	/* Globalize/ginfo.scm 81 */
										BgL_objectz00_bglt BgL_auxz00_4258;

										BgL_auxz00_4258 =
											(BgL_objectz00_bglt) (BgL_obj3583z00_1558);
										BgL_auxz00_4257 = BGL_OBJECT_WIDENING(BgL_auxz00_4258);
									}
									BgL_arg3873z00_1566 =
										(((BgL_localzf2ginfozf2_bglt) CREF(BgL_auxz00_4257))->
										BgL_globaliza7edzf3z54);
								}
								{	/* Globalize/ginfo.scm 81 */
									obj_t BgL_auxz00_4264;

									int BgL_auxz00_4262;

									BgL_auxz00_4264 = BBOOL(BgL_arg3873z00_1566);
									BgL_auxz00_4262 = (int) (((long) 1));
									STRUCT_SET(BgL_aux3585z00_1562, BgL_auxz00_4262,
										BgL_auxz00_4264);
							}}
							{	/* Globalize/ginfo.scm 81 */
								int BgL_auxz00_4267;

								BgL_auxz00_4267 = (int) (((long) 0));
								STRUCT_SET(BgL_res3584z00_1561, BgL_auxz00_4267,
									BgL_aux3585z00_1562);
							}
							{	/* Globalize/ginfo.scm 81 */
								obj_t BgL_auxz00_4270;

								BgL_auxz00_4270 = STRUCT_KEY(BgL_res3584z00_1561);
								STRUCT_KEY_SET(BgL_aux3585z00_1562, BgL_auxz00_4270);
							}
							{	/* Globalize/ginfo.scm 81 */
								obj_t BgL_kz00_2379;

								BgL_kz00_2379 = CNST_TABLE_REF(((long) 3));
								STRUCT_KEY_SET(BgL_res3584z00_1561, BgL_kz00_2379);
							}
							return BgL_res3584z00_1561;
						}
					}
				}
			}
		}
	}



/* struct+object->objec3725 */
	obj_t BGl_structzb2objectzd2ze3objec3725z83zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2935, obj_t BgL_oz00_2936, obj_t BgL_sz00_2937)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 87 */
			{
				BgL_globalzf2ginfozf2_bglt BgL_oz00_1545;

				obj_t BgL_sz00_1546;

				{	/* Globalize/ginfo.scm 87 */
					BgL_globalzf2ginfozf2_bglt BgL_auxz00_4276;

					BgL_oz00_1545 = (BgL_globalzf2ginfozf2_bglt) (BgL_oz00_2936);
					BgL_sz00_1546 = BgL_sz00_2937;
					{

						{	/* Globalize/ginfo.scm 87 */
							obj_t BgL_old3659z00_1549;

							obj_t BgL_aux3660z00_1550;

							{	/* Globalize/ginfo.scm 87 */
								obj_t BgL_nextzd2method3724zd2_1556;

								BgL_nextzd2method3724zd2_1556 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1545),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7);
								if (PROCEDUREP(BgL_nextzd2method3724zd2_1556))
									{	/* Globalize/ginfo.scm 87 */
										BgL_old3659z00_1549 =
											PROCEDURE_ENTRY(BgL_nextzd2method3724zd2_1556)
											(BgL_nextzd2method3724zd2_1556, (obj_t) (BgL_oz00_1545),
											BgL_sz00_1546, BEOA);
									}
								else
									{	/* Globalize/ginfo.scm 87 */
										BgL_old3659z00_1549 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1545), BgL_sz00_1546));
									}
							}
							BgL_aux3660z00_1550 =
								STRUCT_REF(BgL_sz00_1546, (int) (((long) 0)));
							{	/* Globalize/ginfo.scm 87 */
								BgL_globalzf2ginfozf2_bglt BgL_new3661z00_1551;

								BgL_new3661z00_1551 =
									((BgL_globalzf2ginfozf2_bglt) (BgL_old3659z00_1549));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3661z00_1551),
									BGl_classzd2numzd2zz__objectz00
									(BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7));
								{	/* Globalize/ginfo.scm 87 */
									BgL_globalzf2ginfozf2_bglt BgL_arg3866z00_1553;

									{	/* Globalize/ginfo.scm 87 */
										obj_t BgL_arg3867z00_1554;

										obj_t BgL_arg3868z00_1555;

										BgL_arg3867z00_1554 =
											STRUCT_REF(BgL_aux3660z00_1550, (int) (((long) 0)));
										BgL_arg3868z00_1555 =
											STRUCT_REF(BgL_aux3660z00_1550, (int) (((long) 1)));
										{	/* Globalize/ginfo.scm 87 */
											BgL_globalzf2ginfozf2_bglt BgL_res4021z00_2358;

											{	/* Globalize/ginfo.scm 87 */
												bool_t BgL_escapezf33625zf3_2349;

												BgL_escapezf33625zf3_2349 = CBOOL(BgL_arg3867z00_1554);
												{	/* Globalize/ginfo.scm 87 */
													BgL_globalzf2ginfozf2_bglt BgL_new3627z00_2351;

													BgL_new3627z00_2351 =
														((BgL_globalzf2ginfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_globalzf2ginfozf2_bgl))));
													{	/* Globalize/ginfo.scm 87 */
														BgL_globalzf2ginfozf2_bglt BgL_res4020z00_2357;

														{	/* Globalize/ginfo.scm 87 */
															BgL_globalzf2ginfozf2_bglt BgL_new3651z00_2352;

															BgL_new3651z00_2352 = BgL_new3627z00_2351;
															{	/* Globalize/ginfo.scm 87 */
																bool_t BgL_escapezf33649zf3_2355;

																obj_t BgL_globalzd2closure3650zd2_2356;

																BgL_escapezf33649zf3_2355 =
																	BgL_escapezf33625zf3_2349;
																BgL_globalzd2closure3650zd2_2356 =
																	BgL_arg3868z00_1555;
																((((BgL_globalzf2ginfozf2_bglt)
																			CREF(BgL_new3651z00_2352))->
																		BgL_escapezf3zf3) =
																	((bool_t) BgL_escapezf33649zf3_2355),
																	BUNSPEC);
																((((BgL_globalzf2ginfozf2_bglt)
																			CREF(BgL_new3651z00_2352))->
																		BgL_globalzd2closurezd2) =
																	((obj_t) BgL_globalzd2closure3650zd2_2356),
																	BUNSPEC);
																BgL_res4020z00_2357 = BgL_new3651z00_2352;
														}} BgL_res4020z00_2357;
													}
													BgL_res4021z00_2358 = BgL_new3627z00_2351;
											}}
											BgL_arg3866z00_1553 = BgL_res4021z00_2358;
									}}
									{	/* Globalize/ginfo.scm 87 */
										obj_t BgL_auxz00_4303;

										BgL_objectz00_bglt BgL_auxz00_4301;

										BgL_auxz00_4303 = (obj_t) (BgL_arg3866z00_1553);
										BgL_auxz00_4301 =
											(BgL_objectz00_bglt) (BgL_new3661z00_1551);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_4301, BgL_auxz00_4303);
								}}
								BgL_auxz00_4276 = BgL_new3661z00_1551;
					}}}
					return (obj_t) (BgL_auxz00_4276);
				}
			}
		}
	}



/* object->struct-globa3723 */
	obj_t BGl_objectzd2ze3structzd2globa3723ze3zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_2938, obj_t BgL_obj3656z00_2939)
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 87 */
			{
				BgL_globalzf2ginfozf2_bglt BgL_obj3656z00_1533;

				BgL_obj3656z00_1533 =
					(BgL_globalzf2ginfozf2_bglt) (BgL_obj3656z00_2939);
				{

					{	/* Globalize/ginfo.scm 87 */
						obj_t BgL_res3657z00_1536;

						{	/* Globalize/ginfo.scm 87 */
							obj_t BgL_nextzd2method3722zd2_1543;

							BgL_nextzd2method3722zd2_1543 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3656z00_1533),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7);
							if (PROCEDUREP(BgL_nextzd2method3722zd2_1543))
								{	/* Globalize/ginfo.scm 87 */
									BgL_res3657z00_1536 =
										PROCEDURE_ENTRY(BgL_nextzd2method3722zd2_1543)
										(BgL_nextzd2method3722zd2_1543,
										(obj_t) (BgL_obj3656z00_1533), BEOA);
								}
							else
								{	/* Globalize/ginfo.scm 87 */
									BgL_res3657z00_1536 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3656z00_1533));
								}
						}
						{	/* Globalize/ginfo.scm 87 */
							obj_t BgL_aux3658z00_1537;

							{	/* Globalize/ginfo.scm 87 */
								obj_t BgL_keyz00_2320;

								BgL_keyz00_2320 = CNST_TABLE_REF(((long) 4));
								BgL_aux3658z00_1537 =
									make_struct(BgL_keyz00_2320, (int) (((long) 2)), BUNSPEC);
							}
							{	/* Globalize/ginfo.scm 87 */
								bool_t BgL_arg3860z00_1539;

								{
									obj_t BgL_auxz00_4320;

									{	/* Globalize/ginfo.scm 87 */
										BgL_objectz00_bglt BgL_auxz00_4321;

										BgL_auxz00_4321 =
											(BgL_objectz00_bglt) (BgL_obj3656z00_1533);
										BgL_auxz00_4320 = BGL_OBJECT_WIDENING(BgL_auxz00_4321);
									}
									BgL_arg3860z00_1539 =
										(((BgL_globalzf2ginfozf2_bglt) CREF(BgL_auxz00_4320))->
										BgL_escapezf3zf3);
								}
								{	/* Globalize/ginfo.scm 87 */
									obj_t BgL_auxz00_4327;

									int BgL_auxz00_4325;

									BgL_auxz00_4327 = BBOOL(BgL_arg3860z00_1539);
									BgL_auxz00_4325 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3658z00_1537, BgL_auxz00_4325,
										BgL_auxz00_4327);
							}}
							{	/* Globalize/ginfo.scm 87 */
								obj_t BgL_arg3862z00_1541;

								{
									obj_t BgL_auxz00_4330;

									{	/* Globalize/ginfo.scm 87 */
										BgL_objectz00_bglt BgL_auxz00_4331;

										BgL_auxz00_4331 =
											(BgL_objectz00_bglt) (BgL_obj3656z00_1533);
										BgL_auxz00_4330 = BGL_OBJECT_WIDENING(BgL_auxz00_4331);
									}
									BgL_arg3862z00_1541 =
										(((BgL_globalzf2ginfozf2_bglt) CREF(BgL_auxz00_4330))->
										BgL_globalzd2closurezd2);
								}
								{	/* Globalize/ginfo.scm 87 */
									int BgL_auxz00_4335;

									BgL_auxz00_4335 = (int) (((long) 1));
									STRUCT_SET(BgL_aux3658z00_1537, BgL_auxz00_4335,
										BgL_arg3862z00_1541);
							}}
							{	/* Globalize/ginfo.scm 87 */
								int BgL_auxz00_4338;

								BgL_auxz00_4338 = (int) (((long) 0));
								STRUCT_SET(BgL_res3657z00_1536, BgL_auxz00_4338,
									BgL_aux3658z00_1537);
							}
							{	/* Globalize/ginfo.scm 87 */
								obj_t BgL_auxz00_4341;

								BgL_auxz00_4341 = STRUCT_KEY(BgL_res3657z00_1536);
								STRUCT_KEY_SET(BgL_aux3658z00_1537, BgL_auxz00_4341);
							}
							{	/* Globalize/ginfo.scm 87 */
								obj_t BgL_kz00_2339;

								BgL_kz00_2339 = CNST_TABLE_REF(((long) 4));
								STRUCT_KEY_SET(BgL_res3657z00_1536, BgL_kz00_2339);
							}
							return BgL_res3657z00_1536;
						}
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_ginfoza7()
	{
		AN_OBJECT;
		{	/* Globalize/ginfo.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4050z00zzglobaliza7e_ginfoza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4050z00zzglobaliza7e_ginfoza7));
			return
				BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4050z00zzglobaliza7e_ginfoza7));
		}
	}

#ifdef __cplusplus
}
#endif
