/*===========================================================================*/
/*   (Cfa/cinfo2.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/cinfo2.scm)*/
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

	typedef struct BgL_variablez00_bgl
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
	}                  *BgL_variablez00_bglt;

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

	typedef struct BgL_appz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		struct BgL_varz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
	}             *BgL_appz00_bglt;

	typedef struct BgL_approxz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		bool_t BgL_typezd2lockedzf3z21;
		obj_t BgL_allocsz00;
		bool_t BgL_topzf3zf3;
		long BgL_lostzd2stampzd2;
	}                *BgL_approxz00_bglt;

	typedef struct BgL_prezd2arithmeticzd2appz00_bgl
	{
		obj_t BgL_speczd2typeszd2;
	}                                *BgL_prezd2arithmeticzd2appz00_bglt;

	typedef struct BgL_arithmeticzd2appzd2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		obj_t BgL_speczd2typeszd2;
	}                          *BgL_arithmeticzd2appzd2_bglt;

	typedef struct BgL_prezd2makezd2procedurezd2appzd2_bgl
	{
		struct BgL_variablez00_bgl *BgL_ownerz00;
	}                                     
		*BgL_prezd2makezd2procedurezd2appzd2_bglt;

	typedef struct BgL_prezd2procedurezd2refzd2appzd2_bgl
	{
		char dummy;
	}                                    
		*BgL_prezd2procedurezd2refzd2appzd2_bglt;

	typedef struct BgL_prezd2procedurezd2setz12zd2appzc0_bgl
	{
		char dummy;
	}                                       
		*BgL_prezd2procedurezd2setz12zd2appzc0_bglt;

	typedef struct BgL_makezd2procedurezd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		obj_t BgL_valueszd2approxzd2;
		long BgL_lostzd2stampzd2;
		bool_t BgL_xzd2tzf3z21;
		bool_t BgL_xz00;
		bool_t BgL_tz00;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		obj_t BgL_stackzd2stampzd2;
	}                                *BgL_makezd2procedurezd2appz00_bglt;

	typedef struct BgL_procedurezd2refzd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                               *BgL_procedurezd2refzd2appz00_bglt;

	typedef struct BgL_procedurezd2setz12zd2appz12_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                                  *BgL_procedurezd2setz12zd2appz12_bglt;

	typedef struct BgL_prezd2makezd2vectorzd2appzd2_bgl
	{
		struct BgL_variablez00_bgl *BgL_ownerz00;
	}                                   *BgL_prezd2makezd2vectorzd2appzd2_bglt;

	typedef struct BgL_makezd2vectorzd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_valuezd2approxzd2;
		long BgL_lostzd2stampzd2;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		obj_t BgL_stackzd2stampzd2;
		bool_t BgL_seenzf3zf3;
	}                             *BgL_makezd2vectorzd2appz00_bglt;

	typedef struct BgL_prezd2makezd2structzd2appzd2_bgl
	{
		struct BgL_variablez00_bgl *BgL_ownerz00;
	}                                   *BgL_prezd2makezd2structzd2appzd2_bglt;

	typedef struct BgL_prezd2structzd2refzd2appzd2_bgl
	{
		char dummy;
	}                                  *BgL_prezd2structzd2refzd2appzd2_bglt;

	typedef struct BgL_prezd2structzd2setz12zd2appzc0_bgl
	{
		char dummy;
	}                                    
		*BgL_prezd2structzd2setz12zd2appzc0_bglt;

	typedef struct BgL_makezd2structzd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_valuezd2approxzd2;
		long BgL_lostzd2stampzd2;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		obj_t BgL_stackzd2stampzd2;
	}                             *BgL_makezd2structzd2appz00_bglt;

	typedef struct BgL_structzd2refzd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                            *BgL_structzd2refzd2appz00_bglt;

	typedef struct BgL_structzd2setz12zd2appz12_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                               *BgL_structzd2setz12zd2appz12_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t BGl__structzd2setz12zd2appzf3ze1zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl__makezd2procedurezd2appzf3zf3zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl__z52allocatezd2prezd2makezd2structzd2appz52zzcfa_info2z00(obj_t);
	static obj_t BGl__makezd2structzd2appzd2nilzd2zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_z52allocatezd2prezd2makezd2procedurezd2appz52zzcfa_info2z00();
	static obj_t BGl__procedurezd2setz12zd2appzd2nilzc0zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_prezd2makezd2procedurezd2appzd2_bglt
		BGl_makezd2prezd2makezd2procedurezd2appz00zzcfa_info2z00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_varz00_bglt, obj_t,
		BgL_variablez00_bglt);
	BGL_EXPORTED_DECL BgL_procedurezd2setz12zd2appz12_bglt
		BGl_procedurezd2setz12zd2appzd2nilzc0zzcfa_info2z00();
	static obj_t
		BGl__z52allocatezd2prezd2arithmeticzd2appz80zzcfa_info2z00(obj_t);
	static obj_t BGl__wideningzd2prezd2arithmeticzd2appzd2zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_structzd2refzd2appz00zzcfa_info2z00 = BUNSPEC;
	static obj_t
		BGl__z52allocatezd2procedurezd2setz12zd2appz92zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_prezd2makezd2procedurezd2appzd2_bglt
		BGl_wideningzd2prezd2makezd2procedurezd2appz00zzcfa_info2z00
		(BgL_variablez00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl__arithmeticzd2appzf3z21zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl__wideningzd2procedurezd2setz12zd2appzc0zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl__prezd2procedurezd2refzd2appzf3z21zzcfa_info2z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_prezd2procedurezd2refzd2appzf3z21zzcfa_info2z00(obj_t);
	static obj_t
		BGl__wideningzd2prezd2procedurezd2setz12zd2appz12zzcfa_info2z00(obj_t);
	static obj_t BGl__z52allocatezd2arithmeticzd2appz52zzcfa_info2z00(obj_t);
	static obj_t BGl__procedurezd2refzd2appzf3zf3zzcfa_info2z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2structzd2setz12zd2appzc0zzcfa_info2z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__fillzd2makezd2vectorzd2appz12zc0zzcfa_info2z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__wideningzd2prezd2makezd2structzd2appz00zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_prezd2makezd2structzd2appzd2_bglt
		BGl_makezd2prezd2makezd2structzd2appz00zzcfa_info2z00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_varz00_bglt, obj_t,
		BgL_variablez00_bglt);
	BGL_EXPORTED_DECL BgL_arithmeticzd2appzd2_bglt
		BGl_makezd2arithmeticzd2appz00zzcfa_info2z00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, BgL_varz00_bglt, obj_t, BgL_approxz00_bglt, obj_t);
	static obj_t BGl__prezd2structzd2refzd2appzd2nilz00zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_prezd2procedurezd2refzd2appzd2_bglt
		BGl_fillzd2prezd2procedurezd2refzd2appz12z12zzcfa_info2z00
		(BgL_prezd2procedurezd2refzd2appzd2_bglt);
	static obj_t BGl__z52allocatezd2structzd2setz12zd2appz92zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_prezd2structzd2refzd2appzd2_bglt
		BGl_prezd2structzd2refzd2appzd2nilz00zzcfa_info2z00();
	BGL_EXPORTED_DECL bool_t
		BGl_prezd2makezd2structzd2appzf3z21zzcfa_info2z00(obj_t);
	static obj_t BGl__fillzd2prezd2structzd2refzd2appz12z12zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_procedurezd2refzd2appzf3zf3zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_structzd2refzd2appz00_bglt
		BGl_fillzd2structzd2refzd2appz12zc0zzcfa_info2z00
		(BgL_structzd2refzd2appz00_bglt, BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_z52allocatezd2prezd2procedurezd2refzd2appz52zzcfa_info2z00();
	static obj_t BGl__structzd2refzd2appzd2nilzd2zzcfa_info2z00(obj_t);
	static obj_t
		BGl__z52allocatezd2prezd2structzd2refzd2appz52zzcfa_info2z00(obj_t);
	static obj_t BGl_z52thezd2prezd2arithmeticzd2appzd2nilz52zzcfa_info2z00 =
		BUNSPEC;
	static obj_t BGl_z52thezd2makezd2vectorzd2appzd2nilz52zzcfa_info2z00 =
		BUNSPEC;
	BGL_EXPORTED_DECL bool_t
		BGl_prezd2structzd2refzd2appzf3z21zzcfa_info2z00(obj_t);
	static obj_t BGl__wideningzd2prezd2structzd2refzd2appz00zzcfa_info2z00(obj_t);
	extern BgL_appz00_bglt BGl_makezd2appzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t);
	static obj_t BGl_cnstzd2initzd2zzcfa_info2z00();
	BGL_EXPORTED_DECL BgL_prezd2procedurezd2setz12zd2appzc0_bglt
		BGl_prezd2procedurezd2setz12zd2appzd2nilz12zzcfa_info2z00();
	static obj_t
		BGl__fillzd2prezd2makezd2procedurezd2appz12z12zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__fillzd2prezd2makezd2structzd2appz12z12zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl__wideningzd2prezd2procedurezd2refzd2appz00zzcfa_info2z00(obj_t);
	static obj_t BGl_z52thezd2prezd2makezd2vectorzd2appzd2nilz80zzcfa_info2z00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_makezd2structzd2appz00zzcfa_info2z00 = BUNSPEC;
	static obj_t BGl__wideningzd2makezd2structzd2appzd2zzcfa_info2z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2structzd2refzd2appz80zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_z52allocatezd2structzd2setz12zd2appz92zzcfa_info2z00();
	BGL_EXPORTED_DECL BgL_makezd2procedurezd2appz00_bglt
		BGl_fillzd2makezd2procedurezd2appz12zc0zzcfa_info2z00
		(BgL_makezd2procedurezd2appz00_bglt, BgL_approxz00_bglt, obj_t, long,
		bool_t, bool_t, bool_t, BgL_variablez00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_makezd2structzd2appz00_bglt
		BGl_fillzd2makezd2structzd2appz12zc0zzcfa_info2z00
		(BgL_makezd2structzd2appz00_bglt, BgL_approxz00_bglt, BgL_approxz00_bglt,
		long, BgL_variablez00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_structzd2refzd2appz00_bglt
		BGl_structzd2refzd2appzd2nilzd2zzcfa_info2z00();
	static obj_t BGl__fillzd2prezd2arithmeticzd2appz12zc0zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_arithmeticzd2appzd2_bglt
		BGl_fillzd2arithmeticzd2appz12z12zzcfa_info2z00
		(BgL_arithmeticzd2appzd2_bglt, BgL_approxz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_prezd2arithmeticzd2appz00_bglt
		BGl_wideningzd2prezd2arithmeticzd2appzd2zzcfa_info2z00(obj_t);
	static obj_t BGl__fillzd2structzd2setz12zd2appz12zd2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl__z52allocatezd2prezd2procedurezd2setz12zd2appz40zzcfa_info2z00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2struc4891ze3zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_prezd2arithmeticzd2appzf3zf3zzcfa_info2z00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2struc4895ze3zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_z52allocatezd2prezd2structzd2setz12zd2appz40zzcfa_info2z00();
	BGL_EXPORTED_DECL BgL_procedurezd2setz12zd2appz12_bglt
		BGl_wideningzd2procedurezd2setz12zd2appzc0zzcfa_info2z00
		(BgL_approxz00_bglt);
	static obj_t BGl__procedurezd2refzd2appzd2nilzd2zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_prezd2makezd2structzd2appzd2_bglt
		BGl_fillzd2prezd2makezd2structzd2appz12z12zzcfa_info2z00
		(BgL_prezd2makezd2structzd2appzd2_bglt, BgL_variablez00_bglt);
	static obj_t BGl__prezd2structzd2setz12zd2appzd2nilz12zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_structzd2refzd2appz00_bglt
		BGl_makezd2structzd2refzd2appzd2zzcfa_info2z00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t, BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_makezd2vectorzd2appz00_bglt
		BGl_makezd2makezd2vectorzd2appzd2zzcfa_info2z00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t, BgL_approxz00_bglt,
		BgL_approxz00_bglt, long, BgL_variablez00_bglt, obj_t, bool_t);
	static obj_t BGl__makezd2prezd2structzd2setz12zd2appz12zzcfa_info2z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2makezd2procedurezd2appzd2nilz52zzcfa_info2z00 =
		BUNSPEC;
	BGL_EXPORTED_DECL BgL_prezd2procedurezd2refzd2appzd2_bglt
		BGl_makezd2prezd2procedurezd2refzd2appz00zzcfa_info2z00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_varz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcfa_info2z00();
	BGL_EXPORTED_DECL bool_t
		BGl_prezd2makezd2vectorzd2appzf3z21zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_prezd2structzd2setz12zd2appzc0_bglt
		BGl_wideningzd2prezd2structzd2setz12zd2appz12zzcfa_info2z00();
	static obj_t BGl__fillzd2procedurezd2setz12zd2appz12zd2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl__z52allocatezd2makezd2procedurezd2appz80zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_prezd2structzd2setz12zd2appzc0_bglt
		BGl_prezd2structzd2setz12zd2appzd2nilz12zzcfa_info2z00();
	static obj_t BGl__makezd2makezd2structzd2appzd2zzcfa_info2z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_procedurezd2setz12zd2appzf3ze1zzcfa_info2z00(obj_t);
	static obj_t BGl__wideningzd2makezd2procedurezd2appzd2zzcfa_info2z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_prezd2structzd2refzd2appzd2_bglt
		BGl_wideningzd2prezd2structzd2refzd2appz00zzcfa_info2z00();
	static obj_t BGl__fillzd2prezd2makezd2vectorzd2appz12z12zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_makezd2vectorzd2appz00_bglt
		BGl_wideningzd2makezd2vectorzd2appzd2zzcfa_info2z00(BgL_approxz00_bglt,
		BgL_approxz00_bglt, long, BgL_variablez00_bglt, obj_t, bool_t);
	static obj_t BGl_objectzd2ze3structzd2prezd2m4911z31zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2prezd2m4921z31zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t
		BGl__wideningzd2prezd2makezd2procedurezd2appz00zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_prezd2procedurezd2setz12zd2appzc0_bglt
		BGl_fillzd2prezd2procedurezd2setz12zd2appz12z00zzcfa_info2z00
		(BgL_prezd2procedurezd2setz12zd2appzc0_bglt);
	static obj_t BGl__z52allocatezd2makezd2structzd2appz80zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_makezd2vectorzd2appz00_bglt
		BGl_fillzd2makezd2vectorzd2appz12zc0zzcfa_info2z00
		(BgL_makezd2vectorzd2appz00_bglt, BgL_approxz00_bglt, BgL_approxz00_bglt,
		long, BgL_variablez00_bglt, obj_t, bool_t);
	BGL_EXPORTED_DECL BgL_makezd2vectorzd2appz00_bglt
		BGl_makezd2vectorzd2appzd2nilzd2zzcfa_info2z00();
	static obj_t BGl_objectzd2ze3structzd2prezd2m4947z31zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_z52thezd2makezd2structzd2appzd2nilz52zzcfa_info2z00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_procedurezd2refzd2appz00zzcfa_info2z00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_prezd2makezd2vectorzd2appzd2_bglt
		BGl_fillzd2prezd2makezd2vectorzd2appz12z12zzcfa_info2z00
		(BgL_prezd2makezd2vectorzd2appzd2_bglt, BgL_variablez00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00 =
		BUNSPEC;
	static obj_t BGl_z52thezd2procedurezd2refzd2appzd2nilz52zzcfa_info2z00 =
		BUNSPEC;
	static obj_t BGl_z52thezd2prezd2makezd2structzd2appzd2nilz80zzcfa_info2z00 =
		BUNSPEC;
	BGL_EXPORTED_DECL bool_t
		BGl_prezd2structzd2setz12zd2appzf3z33zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_z52allocatezd2makezd2structzd2appz80zzcfa_info2z00();
	static obj_t BGl__structzd2setz12zd2appzd2nilzc0zzcfa_info2z00(obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl__wideningzd2procedurezd2refzd2appzd2zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl__prezd2procedurezd2refzd2appzd2nilz00zzcfa_info2z00(obj_t);
	static obj_t
		BGl__fillzd2prezd2structzd2setz12zd2appz12z00zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_z52allocatezd2prezd2makezd2structzd2appz52zzcfa_info2z00();
	static obj_t
		BGl__z52allocatezd2prezd2procedurezd2refzd2appz52zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_structzd2refzd2appzf3zf3zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_z52allocatezd2prezd2arithmeticzd2appz80zzcfa_info2z00();
	static obj_t BGl_z52thezd2procedurezd2setz12zd2appzd2nilz40zzcfa_info2z00 =
		BUNSPEC;
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_z52allocatezd2procedurezd2setz12zd2appz92zzcfa_info2z00();
	BGL_EXPORTED_DECL BgL_structzd2setz12zd2appz12_bglt
		BGl_fillzd2structzd2setz12zd2appz12zd2zzcfa_info2z00
		(BgL_structzd2setz12zd2appz12_bglt, BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_procedurezd2refzd2appz00_bglt
		BGl_procedurezd2refzd2appzd2nilzd2zzcfa_info2z00();
	static obj_t BGl__makezd2prezd2makezd2structzd2appz00zzcfa_info2z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl__z52allocatezd2prezd2makezd2procedurezd2appz52zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_prezd2procedurezd2refzd2appzd2_bglt
		BGl_prezd2procedurezd2refzd2appzd2nilz00zzcfa_info2z00();
	BGL_EXPORTED_DECL BgL_prezd2structzd2setz12zd2appzc0_bglt
		BGl_fillzd2prezd2structzd2setz12zd2appz12z00zzcfa_info2z00
		(BgL_prezd2structzd2setz12zd2appzc0_bglt);
	BGL_EXPORTED_DECL BgL_makezd2procedurezd2appz00_bglt
		BGl_wideningzd2makezd2procedurezd2appzd2zzcfa_info2z00(BgL_approxz00_bglt,
		obj_t, long, bool_t, bool_t, bool_t, BgL_variablez00_bglt, obj_t);
	static obj_t BGl_z52thezd2arithmeticzd2appzd2nilz80zzcfa_info2z00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_arithmeticzd2appzf3z21zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_prezd2makezd2structzd2appzd2_bglt
		BGl_wideningzd2prezd2makezd2structzd2appz00zzcfa_info2z00
		(BgL_variablez00_bglt);
	static obj_t
		BGl__z52allocatezd2prezd2makezd2vectorzd2appz52zzcfa_info2z00(obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_info2z00();
	static obj_t BGl__fillzd2makezd2procedurezd2appz12zc0zzcfa_info2z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2prezd2structzd2refzd2appzd2nilz80zzcfa_info2z00 =
		BUNSPEC;
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_z52allocatezd2prezd2structzd2refzd2appz52zzcfa_info2z00();
	BGL_EXPORTED_DECL bool_t
		BGl_makezd2procedurezd2appzf3zf3zzcfa_info2z00(obj_t);
	static obj_t BGl__prezd2makezd2procedurezd2appzd2nilz00zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_makezd2structzd2appz00_bglt
		BGl_makezd2structzd2appzd2nilzd2zzcfa_info2z00();
	static obj_t BGl__makezd2prezd2arithmeticzd2appzd2zzcfa_info2z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2prezd2s4903z31zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2prezd2s4907z31zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4901z83zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4893z83zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4905z83zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4897z83zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4909z83zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2procedurezd2setz12zd2appzc0zzcfa_info2z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_prezd2makezd2procedurezd2appzd2_bglt
		BGl_fillzd2prezd2makezd2procedurezd2appz12z12zzcfa_info2z00
		(BgL_prezd2makezd2procedurezd2appzd2_bglt, BgL_variablez00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_makezd2structzd2appzf3zf3zzcfa_info2z00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4914z83zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4918z83zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4924z83zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4928z83zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4932z83zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4936z83zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4940z83zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4944z83zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2procedurezd2refzd2appzd2zzcfa_info2z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4949z83zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_info2z00 = BUNSPEC;
	static obj_t BGl_structzb2objectzd2ze3objec4954z83zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4958z83zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_procedurezd2refzd2appz00_bglt
		BGl_makezd2procedurezd2refzd2appzd2zzcfa_info2z00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t, BgL_approxz00_bglt);
	static obj_t BGl__wideningzd2prezd2makezd2vectorzd2appz00zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_prezd2makezd2vectorzd2appzd2_bglt
		BGl_makezd2prezd2makezd2vectorzd2appz00zzcfa_info2z00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_varz00_bglt, obj_t,
		BgL_variablez00_bglt);
	BGL_EXPORTED_DECL BgL_structzd2setz12zd2appz12_bglt
		BGl_makezd2structzd2setz12zd2appzc0zzcfa_info2z00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t, BgL_approxz00_bglt);
	static obj_t BGl_objectzd2ze3structzd2proce4926ze3zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2proce4930ze3zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzcfa_info2z00();
	BGL_EXPORTED_DECL BgL_prezd2procedurezd2refzd2appzd2_bglt
		BGl_wideningzd2prezd2procedurezd2refzd2appz00zzcfa_info2z00();
	static obj_t BGl_z52thezd2prezd2makezd2procedurezd2appzd2nilz80zzcfa_info2z00
		= BUNSPEC;
	BGL_EXPORTED_DECL BgL_prezd2arithmeticzd2appz00_bglt
		BGl_makezd2prezd2arithmeticzd2appzd2zzcfa_info2z00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2procedurezd2refzd2appz80zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_procedurezd2setz12zd2appz12_bglt
		BGl_makezd2procedurezd2setz12zd2appzc0zzcfa_info2z00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_varz00_bglt, obj_t, BgL_approxz00_bglt);
	static obj_t BGl__makezd2arithmeticzd2appz00zzcfa_info2z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl__makezd2prezd2procedurezd2setz12zd2appz12zzcfa_info2z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2prezd2structzd2refzd2appz00zzcfa_info2z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_makezd2vectorzd2appz00zzcfa_info2z00 = BUNSPEC;
	static obj_t BGl__wideningzd2makezd2vectorzd2appzd2zzcfa_info2z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00 =
		BUNSPEC;
	static obj_t BGl__prezd2procedurezd2setz12zd2appzf3z33zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl__prezd2structzd2refzd2appzf3z21zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_structzd2setz12zd2appz12_bglt
		BGl_wideningzd2structzd2setz12zd2appzc0zzcfa_info2z00(BgL_approxz00_bglt);
	extern BgL_approxz00_bglt BGl_approxzd2nilzd2zzcfa_infoz00();
	static obj_t BGl__prezd2makezd2structzd2appzf3z21zzcfa_info2z00(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	static obj_t BGl__fillzd2structzd2refzd2appz12zc0zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_z52allocatezd2makezd2procedurezd2appz80zzcfa_info2z00();
	static obj_t BGl__prezd2makezd2vectorzd2appzd2nilz00zzcfa_info2z00(obj_t);
	static obj_t BGl__fillzd2procedurezd2refzd2appz12zc0zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00 =
		BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_makezd2vectorzd2appzf3zf3zzcfa_info2z00(obj_t);
	static obj_t BGl_z52thezd2structzd2setz12zd2appzd2nilz40zzcfa_info2z00 =
		BUNSPEC;
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_info2z00();
	BGL_EXPORTED_DEF obj_t BGl_prezd2arithmeticzd2appz00zzcfa_info2z00 = BUNSPEC;
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t
		BGl__prezd2procedurezd2setz12zd2appzd2nilz12zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_procedurezd2setz12zd2appz12zzcfa_info2z00 =
		BUNSPEC;
	BGL_EXPORTED_DECL BgL_prezd2structzd2refzd2appzd2_bglt
		BGl_makezd2prezd2structzd2refzd2appz00zzcfa_info2z00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_varz00_bglt, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00 =
		BUNSPEC;
	static obj_t BGl__prezd2arithmeticzd2appzf3zf3zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z52thezd2prezd2structzd2setz12zd2appzd2nilz92zzcfa_info2z00 =
		BUNSPEC;
	BGL_EXPORTED_DECL bool_t
		BGl_prezd2procedurezd2setz12zd2appzf3z33zzcfa_info2z00(obj_t);
	static obj_t BGl__wideningzd2arithmeticzd2appz00zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2structzd2refzd2appzd2zzcfa_info2z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__fillzd2arithmeticzd2appz12z12zzcfa_info2z00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z52thezd2prezd2procedurezd2refzd2appzd2nilz80zzcfa_info2z00 =
		BUNSPEC;
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_z52allocatezd2arithmeticzd2appz52zzcfa_info2z00();
	BGL_EXPORTED_DECL BgL_prezd2makezd2vectorzd2appzd2_bglt
		BGl_prezd2makezd2vectorzd2appzd2nilz00zzcfa_info2z00();
	BGL_EXPORTED_DECL BgL_procedurezd2refzd2appz00_bglt
		BGl_fillzd2procedurezd2refzd2appz12zc0zzcfa_info2z00
		(BgL_procedurezd2refzd2appz00_bglt, BgL_approxz00_bglt);
	static obj_t BGl__prezd2arithmeticzd2appzd2nilzd2zzcfa_info2z00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2makezd24899z31zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl__makezd2makezd2vectorzd2appzd2zzcfa_info2z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2makezd24916z31zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_prezd2arithmeticzd2appz00_bglt
		BGl_prezd2arithmeticzd2appzd2nilzd2zzcfa_info2z00();
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_z52allocatezd2procedurezd2refzd2appz80zzcfa_info2z00();
	BGL_EXPORTED_DECL BgL_makezd2structzd2appz00_bglt
		BGl_makezd2makezd2structzd2appzd2zzcfa_info2z00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t, BgL_approxz00_bglt,
		BgL_approxz00_bglt, long, BgL_variablez00_bglt, obj_t);
	static obj_t BGl_objectzd2ze3structzd2makezd24934z31zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl__arithmeticzd2appzd2nilz00zzcfa_info2z00(obj_t);
	static obj_t BGl__makezd2structzd2appzf3zf3zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z52thezd2prezd2procedurezd2setz12zd2appzd2nilz92zzcfa_info2z00 =
		BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_structzd2setz12zd2appzf3ze1zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_z52allocatezd2prezd2procedurezd2setz12zd2appz40zzcfa_info2z00();
	BGL_EXPORTED_DECL BgL_prezd2procedurezd2setz12zd2appzc0_bglt
		BGl_makezd2prezd2procedurezd2setz12zd2appz12zzcfa_info2z00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_varz00_bglt, obj_t);
	static obj_t BGl__z52allocatezd2makezd2vectorzd2appz80zzcfa_info2z00(obj_t);
	static obj_t BGl__makezd2makezd2procedurezd2appzd2zzcfa_info2z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__makezd2prezd2procedurezd2refzd2appz00zzcfa_info2z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2arith4951ze3zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00 =
		BUNSPEC;
	BGL_EXPORTED_DECL BgL_arithmeticzd2appzd2_bglt
		BGl_wideningzd2arithmeticzd2appz00zzcfa_info2z00(BgL_approxz00_bglt, obj_t);
	static obj_t BGl__prezd2makezd2vectorzd2appzf3z21zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl__procedurezd2setz12zd2appzf3ze1zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_prezd2procedurezd2setz12zd2appzc0_bglt
		BGl_wideningzd2prezd2procedurezd2setz12zd2appz12zzcfa_info2z00();
	BGL_EXPORTED_DECL BgL_prezd2structzd2refzd2appzd2_bglt
		BGl_fillzd2prezd2structzd2refzd2appz12z12zzcfa_info2z00
		(BgL_prezd2structzd2refzd2appzd2_bglt);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl__wideningzd2structzd2refzd2appzd2zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_arithmeticzd2appzd2_bglt
		BGl_arithmeticzd2appzd2nilz00zzcfa_info2z00();
	static obj_t
		BGl__z52allocatezd2prezd2structzd2setz12zd2appz40zzcfa_info2z00(obj_t);
	static obj_t BGl__makezd2vectorzd2appzd2nilzd2zzcfa_info2z00(obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_z52allocatezd2makezd2vectorzd2appz80zzcfa_info2z00();
	static obj_t BGl_z52thezd2structzd2refzd2appzd2nilz52zzcfa_info2z00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_makezd2structzd2appz00_bglt
		BGl_wideningzd2makezd2structzd2appzd2zzcfa_info2z00(BgL_approxz00_bglt,
		BgL_approxz00_bglt, long, BgL_variablez00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_z52allocatezd2structzd2refzd2appz80zzcfa_info2z00();
	BGL_EXPORTED_DECL BgL_procedurezd2refzd2appz00_bglt
		BGl_wideningzd2procedurezd2refzd2appzd2zzcfa_info2z00(BgL_approxz00_bglt);
	static obj_t BGl__makezd2procedurezd2appzd2nilzd2zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_makezd2procedurezd2appz00_bglt
		BGl_makezd2makezd2procedurezd2appzd2zzcfa_info2z00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t, BgL_approxz00_bglt, obj_t, long,
		bool_t, bool_t, bool_t, BgL_variablez00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_makezd2procedurezd2appz00_bglt
		BGl_makezd2procedurezd2appzd2nilzd2zzcfa_info2z00();
	static obj_t BGl__prezd2makezd2procedurezd2appzf3z21zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_z52allocatezd2prezd2makezd2vectorzd2appz52zzcfa_info2z00();
	static obj_t BGl__prezd2makezd2structzd2appzd2nilz00zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_prezd2arithmeticzd2appz00_bglt
		BGl_fillzd2prezd2arithmeticzd2appz12zc0zzcfa_info2z00
		(BgL_prezd2arithmeticzd2appz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_structzd2setz12zd2appz12_bglt
		BGl_structzd2setz12zd2appzd2nilzc0zzcfa_info2z00();
	static obj_t BGl__makezd2prezd2makezd2procedurezd2appz00zzcfa_info2z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00 =
		BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2prezd2a4956z31zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl__makezd2prezd2makezd2vectorzd2appz00zzcfa_info2z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__prezd2structzd2setz12zd2appzf3z33zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_structzd2refzd2appz00_bglt
		BGl_wideningzd2structzd2refzd2appzd2zzcfa_info2z00(BgL_approxz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00 =
		BUNSPEC;
	static obj_t
		BGl__wideningzd2prezd2structzd2setz12zd2appz12zzcfa_info2z00(obj_t);
	static obj_t BGl__makezd2vectorzd2appzf3zf3zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_prezd2structzd2setz12zd2appzc0_bglt
		BGl_makezd2prezd2structzd2setz12zd2appz12zzcfa_info2z00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_varz00_bglt, obj_t);
	static obj_t BGl_objectzd2ze3structzd2prezd2p4938z31zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2prezd2p4942z31zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_prezd2makezd2procedurezd2appzf3z21zzcfa_info2z00(obj_t);
	static obj_t BGl_objectzd2initzd2zzcfa_info2z00();
	BGL_EXPORTED_DEF obj_t BGl_arithmeticzd2appzd2zzcfa_info2z00 = BUNSPEC;
	static obj_t
		BGl__fillzd2prezd2procedurezd2setz12zd2appz12z00zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_prezd2makezd2structzd2appzd2_bglt
		BGl_prezd2makezd2structzd2appzd2nilz00zzcfa_info2z00();
	BGL_EXPORTED_DECL BgL_prezd2makezd2vectorzd2appzd2_bglt
		BGl_wideningzd2prezd2makezd2vectorzd2appz00zzcfa_info2z00
		(BgL_variablez00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_makezd2procedurezd2appz00zzcfa_info2z00 = BUNSPEC;
	extern BgL_variablez00_bglt BGl_variablezd2nilzd2zzast_varz00();
	BGL_EXPORTED_DECL BgL_procedurezd2setz12zd2appz12_bglt
		BGl_fillzd2procedurezd2setz12zd2appz12zd2zzcfa_info2z00
		(BgL_procedurezd2setz12zd2appz12_bglt, BgL_approxz00_bglt);
	static obj_t BGl__fillzd2makezd2structzd2appz12zc0zzcfa_info2z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl__fillzd2prezd2procedurezd2refzd2appz12z12zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_structzd2setz12zd2appz12zzcfa_info2z00 = BUNSPEC;
	static obj_t BGl__wideningzd2structzd2setz12zd2appzc0zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_info2z00();
	BGL_EXPORTED_DECL BgL_prezd2makezd2procedurezd2appzd2_bglt
		BGl_prezd2makezd2procedurezd2appzd2nilz00zzcfa_info2z00();
	extern BgL_varz00_bglt BGl_varzd2nilzd2zzast_nodez00();
	static obj_t BGl__structzd2refzd2appzf3zf3zzcfa_info2z00(obj_t, obj_t);
	static obj_t __cnst[17];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2arithmeticzd2appzd2envzd2zzcfa_info2z00,
		BgL_bgl__wideningza7d2arit5639za7,
		BGl__wideningzd2arithmeticzd2appz00zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2procedurezd2appzd2nilzd2envzd2zzcfa_info2z00,
		BgL_bgl__preza7d2makeza7d2pr5640z00,
		BGl__prezd2makezd2procedurezd2appzd2nilz00zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2procedurezd2refzd2appzd2envz00zzcfa_info2z00,
		BgL_bgl__wideningza7d2proc5641za7,
		BGl__wideningzd2procedurezd2refzd2appzd2zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2structzd2setz12zd2appzd2envz40zzcfa_info2z00,
		BgL_bgl__za752allocateza7d2s5642z00,
		BGl__z52allocatezd2structzd2setz12zd2appz92zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2setz12zd2appzf3zd2envze1zzcfa_info2z00,
		BgL_bgl__preza7d2structza7d25643z00,
		BGl__prezd2structzd2setz12zd2appzf3z33zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2vectorzd2appzd2nilzd2envzd2zzcfa_info2z00,
		BgL_bgl__preza7d2makeza7d2ve5644z00,
		BGl__prezd2makezd2vectorzd2appzd2nilz00zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2prezd2structzd2refzd2appz12zd2envzc0zzcfa_info2z00,
		BgL_bgl__fillza7d2preza7d2st5645z00,
		BGl__fillzd2prezd2structzd2refzd2appz12z12zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2makezd2structzd2appz12zd2envz12zzcfa_info2z00,
		BgL_bgl__fillza7d2makeza7d2s5646z00,
		BGl__fillzd2makezd2structzd2appz12zc0zzcfa_info2z00, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2prezd2makezd2structzd2appzd2envzd2zzcfa_info2z00,
		BgL_bgl__wideningza7d2preza75647z00,
		BGl__wideningzd2prezd2makezd2structzd2appz00zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2setz12zd2appzd2nilzd2envzc0zzcfa_info2z00,
		BgL_bgl__preza7d2procedure5648za7,
		BGl__prezd2procedurezd2setz12zd2appzd2nilz12zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2appzf3zd2envz21zzcfa_info2z00,
		BgL_bgl__makeza7d2structza7d5649z00,
		BGl__makezd2structzd2appzf3zf3zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2vectorzd2appzf3zd2envzf3zzcfa_info2z00,
		BgL_bgl__preza7d2makeza7d2ve5650z00,
		BGl__prezd2makezd2vectorzd2appzf3z21zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2structzd2setz12zd2appzd2envz12zzcfa_info2z00,
		BgL_bgl__wideningza7d2stru5651za7,
		BGl__wideningzd2structzd2setz12zd2appzc0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2prezd2procedurezd2refzd2appzd2envz80zzcfa_info2z00,
		BgL_bgl__za752allocateza7d2p5652z00,
		BGl__z52allocatezd2prezd2procedurezd2refzd2appz52zzcfa_info2z00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzf3zd2envz21zzcfa_info2z00,
		BgL_bgl__makeza7d2procedur5653za7,
		BGl__makezd2procedurezd2appzf3zf3zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2refzd2appzf3zd2envz21zzcfa_info2z00,
		BgL_bgl__structza7d2refza7d25654z00,
		BGl__structzd2refzd2appzf3zf3zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2setz12zd2appzd2nilzd2envz12zzcfa_info2z00,
		BgL_bgl__structza7d2setza7125655z00,
		BGl__structzd2setz12zd2appzd2nilzc0zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2makezd2vectorzd2appzd2envz00zzcfa_info2z00,
		BgL_bgl__makeza7d2makeza7d2v5656z00,
		BGl__makezd2makezd2vectorzd2appzd2zzcfa_info2z00, 0L, BUNSPEC, 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2arithmeticzd2appzd2envz80zzcfa_info2z00,
		BgL_bgl__za752allocateza7d2a5657z00,
		BGl__z52allocatezd2arithmeticzd2appz52zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2procedurezd2setz12zd2appz12zd2envz00zzcfa_info2z00,
		BgL_bgl__fillza7d2procedur5658za7,
		BGl__fillzd2procedurezd2setz12zd2appz12zd2zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2arithmeticzd2appzf3zd2envz21zzcfa_info2z00,
		BgL_bgl__preza7d2arithmeti5659za7,
		BGl__prezd2arithmeticzd2appzf3zf3zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2procedurezd2appzf3zd2envzf3zzcfa_info2z00,
		BgL_bgl__preza7d2makeza7d2pr5660z00,
		BGl__prezd2makezd2procedurezd2appzf3z21zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2structzd2setz12zd2appz12zd2envz00zzcfa_info2z00,
		BgL_bgl__fillza7d2structza7d5661z00,
		BGl__fillzd2structzd2setz12zd2appz12zd2zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2prezd2structzd2setz12zd2appzd2envz92zzcfa_info2z00,
		BgL_bgl__za752allocateza7d2p5662z00,
		BGl__z52allocatezd2prezd2structzd2setz12zd2appz40zzcfa_info2z00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2setz12zd2appzf3zd2envz33zzcfa_info2z00,
		BgL_bgl__structza7d2setza7125663z00,
		BGl__structzd2setz12zd2appzf3ze1zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2procedurezd2refzd2appz12zd2envz12zzcfa_info2z00,
		BgL_bgl__fillza7d2procedur5664za7,
		BGl__fillzd2procedurezd2refzd2appz12zc0zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2prezd2procedurezd2setz12zd2appz12zd2envzd2zzcfa_info2z00,
		BgL_bgl__fillza7d2preza7d2pr5665z00,
		BGl__fillzd2prezd2procedurezd2setz12zd2appz12z00zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2prezd2structzd2setz12zd2appzd2envzc0zzcfa_info2z00,
		BgL_bgl__makeza7d2preza7d2st5666z00,
		BGl__makezd2prezd2structzd2setz12zd2appz12zzcfa_info2z00, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2setz12zd2appzd2nilzd2envzc0zzcfa_info2z00,
		BgL_bgl__preza7d2structza7d25667z00,
		BGl__prezd2structzd2setz12zd2appzd2nilz12zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2refzd2appzf3zd2envz21zzcfa_info2z00,
		BgL_bgl__procedureza7d2ref5668za7,
		BGl__procedurezd2refzd2appzf3zf3zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2prezd2makezd2structzd2appz12zd2envzc0zzcfa_info2z00,
		BgL_bgl__fillza7d2preza7d2ma5669z00,
		BGl__fillzd2prezd2makezd2structzd2appz12z12zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2makezd2vectorzd2appz12zd2envz12zzcfa_info2z00,
		BgL_bgl__fillza7d2makeza7d2v5670z00,
		BGl__fillzd2makezd2vectorzd2appz12zc0zzcfa_info2z00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzf3zd2envz21zzcfa_info2z00,
		BgL_bgl__makeza7d2vectorza7d5671z00,
		BGl__makezd2vectorzd2appzf3zf3zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2structzd2refzd2appzd2envz00zzcfa_info2z00,
		BgL_bgl__wideningza7d2stru5672za7,
		BGl__wideningzd2structzd2refzd2appzd2zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2arithmeticzd2appz12zd2envzc0zzcfa_info2z00,
		BgL_bgl__fillza7d2arithmet5673za7,
		BGl__fillzd2arithmeticzd2appz12z12zzcfa_info2z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2makezd2structzd2appzd2envz00zzcfa_info2z00,
		BgL_bgl__makeza7d2makeza7d2s5674z00,
		BGl__makezd2makezd2structzd2appzd2zzcfa_info2z00, 0L, BUNSPEC, 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2arithmeticzd2appzd2envzd2zzcfa_info2z00,
		BgL_bgl__makeza7d2arithmet5675za7,
		BGl__makezd2arithmeticzd2appz00zzcfa_info2z00, 0L, BUNSPEC, 8);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2prezd2procedurezd2refzd2appzd2envzd2zzcfa_info2z00,
		BgL_bgl__wideningza7d2preza75676z00,
		BGl__wideningzd2prezd2procedurezd2refzd2appz00zzcfa_info2z00, 0L, BUNSPEC,
		0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2refzd2appzf3zd2envzf3zzcfa_info2z00,
		BgL_bgl__preza7d2procedure5677za7,
		BGl__prezd2procedurezd2refzd2appzf3z21zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2prezd2structzd2setz12zd2appzd2envzc0zzcfa_info2z00,
		BgL_bgl__wideningza7d2preza75678z00,
		BGl__wideningzd2prezd2structzd2setz12zd2appz12zzcfa_info2z00, 0L, BUNSPEC,
		0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2prezd2structzd2setz12zd2appz12zd2envzd2zzcfa_info2z00,
		BgL_bgl__fillza7d2preza7d2st5679z00,
		BGl__fillzd2prezd2structzd2setz12zd2appz12z00zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2prezd2makezd2procedurezd2appzd2envzd2zzcfa_info2z00,
		BgL_bgl__wideningza7d2preza75680z00,
		BGl__wideningzd2prezd2makezd2procedurezd2appz00zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2makezd2vectorzd2appzd2envz52zzcfa_info2z00,
		BgL_bgl__za752allocateza7d2m5681z00,
		BGl__z52allocatezd2makezd2vectorzd2appz80zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2prezd2makezd2procedurezd2appzd2envzd2zzcfa_info2z00,
		BgL_bgl__makeza7d2preza7d2ma5682z00,
		BGl__makezd2prezd2makezd2procedurezd2appz00zzcfa_info2z00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2prezd2makezd2vectorzd2appz12zd2envzc0zzcfa_info2z00,
		BgL_bgl__fillza7d2preza7d2ma5683z00,
		BGl__fillzd2prezd2makezd2vectorzd2appz12z12zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2prezd2procedurezd2refzd2appzd2envzd2zzcfa_info2z00,
		BgL_bgl__makeza7d2preza7d2pr5684z00,
		BGl__makezd2prezd2procedurezd2refzd2appz00zzcfa_info2z00, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2procedurezd2refzd2appzd2envz52zzcfa_info2z00,
		BgL_bgl__za752allocateza7d2p5685z00,
		BGl__z52allocatezd2procedurezd2refzd2appz80zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2refzd2appzf3zd2envzf3zzcfa_info2z00,
		BgL_bgl__preza7d2structza7d25686z00,
		BGl__prezd2structzd2refzd2appzf3z21zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2prezd2arithmeticzd2appzd2envz52zzcfa_info2z00,
		BgL_bgl__za752allocateza7d2p5687z00,
		BGl__z52allocatezd2prezd2arithmeticzd2appz80zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2makezd2vectorzd2appzd2envz00zzcfa_info2z00,
		BgL_bgl__wideningza7d2make5688za7,
		BGl__wideningzd2makezd2vectorzd2appzd2zzcfa_info2z00, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2prezd2arithmeticzd2appzd2envz00zzcfa_info2z00,
		BgL_bgl__makeza7d2preza7d2ar5689z00,
		BGl__makezd2prezd2arithmeticzd2appzd2zzcfa_info2z00, 0L, BUNSPEC, 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5573z00zzcfa_info2z00,
		BgL_bgl_objectza7d2za7e3stru5690z00,
		BGl_objectzd2ze3structzd2struc4891ze3zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5575z00zzcfa_info2z00,
		BgL_bgl_structza7b2objectza75691z00,
		BGl_structzb2objectzd2ze3objec4893z83zzcfa_info2z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5577z00zzcfa_info2z00,
		BgL_bgl_objectza7d2za7e3stru5692z00,
		BGl_objectzd2ze3structzd2struc4895ze3zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5578z00zzcfa_info2z00,
		BgL_bgl_structza7b2objectza75693z00,
		BGl_structzb2objectzd2ze3objec4897z83zzcfa_info2z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5580z00zzcfa_info2z00,
		BgL_bgl_structza7b2objectza75694z00,
		BGl_structzb2objectzd2ze3objec4901z83zzcfa_info2z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5579z00zzcfa_info2z00,
		BgL_bgl_objectza7d2za7e3stru5695z00,
		BGl_objectzd2ze3structzd2makezd24899z31zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5581z00zzcfa_info2z00,
		BgL_bgl_objectza7d2za7e3stru5696z00,
		BGl_objectzd2ze3structzd2prezd2s4903z31zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5582z00zzcfa_info2z00,
		BgL_bgl_structza7b2objectza75697z00,
		BGl_structzb2objectzd2ze3objec4905z83zzcfa_info2z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5583z00zzcfa_info2z00,
		BgL_bgl_objectza7d2za7e3stru5698z00,
		BGl_objectzd2ze3structzd2prezd2s4907z31zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5584z00zzcfa_info2z00,
		BgL_bgl_structza7b2objectza75699z00,
		BGl_structzb2objectzd2ze3objec4909z83zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2structzd2refzd2appzd2envz52zzcfa_info2z00,
		BgL_bgl__za752allocateza7d2s5700z00,
		BGl__z52allocatezd2structzd2refzd2appz80zzcfa_info2z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5585z00zzcfa_info2z00,
		BgL_bgl_objectza7d2za7e3stru5701z00,
		BGl_objectzd2ze3structzd2prezd2m4911z31zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5586z00zzcfa_info2z00,
		BgL_bgl_structza7b2objectza75702z00,
		BGl_structzb2objectzd2ze3objec4914z83zzcfa_info2z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5587z00zzcfa_info2z00,
		BgL_bgl_objectza7d2za7e3stru5703z00,
		BGl_objectzd2ze3structzd2makezd24916z31zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5588z00zzcfa_info2z00,
		BgL_bgl_structza7b2objectza75704z00,
		BGl_structzb2objectzd2ze3objec4918z83zzcfa_info2z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5600z00zzcfa_info2z00,
		BgL_bgl_structza7b2objectza75705z00,
		BGl_structzb2objectzd2ze3objec4944z83zzcfa_info2z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5590z00zzcfa_info2z00,
		BgL_bgl_structza7b2objectza75706z00,
		BGl_structzb2objectzd2ze3objec4924z83zzcfa_info2z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5589z00zzcfa_info2z00,
		BgL_bgl_objectza7d2za7e3stru5707z00,
		BGl_objectzd2ze3structzd2prezd2m4921z31zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5601z00zzcfa_info2z00,
		BgL_bgl_objectza7d2za7e3stru5708z00,
		BGl_objectzd2ze3structzd2prezd2m4947z31zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5591z00zzcfa_info2z00,
		BgL_bgl_objectza7d2za7e3stru5709z00,
		BGl_objectzd2ze3structzd2proce4926ze3zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5602z00zzcfa_info2z00,
		BgL_bgl_structza7b2objectza75710z00,
		BGl_structzb2objectzd2ze3objec4949z83zzcfa_info2z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5592z00zzcfa_info2z00,
		BgL_bgl_structza7b2objectza75711z00,
		BGl_structzb2objectzd2ze3objec4928z83zzcfa_info2z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5603z00zzcfa_info2z00,
		BgL_bgl_objectza7d2za7e3stru5712z00,
		BGl_objectzd2ze3structzd2arith4951ze3zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5593z00zzcfa_info2z00,
		BgL_bgl_objectza7d2za7e3stru5713z00,
		BGl_objectzd2ze3structzd2proce4930ze3zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5604z00zzcfa_info2z00,
		BgL_bgl_structza7b2objectza75714z00,
		BGl_structzb2objectzd2ze3objec4954z83zzcfa_info2z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5594z00zzcfa_info2z00,
		BgL_bgl_structza7b2objectza75715z00,
		BGl_structzb2objectzd2ze3objec4932z83zzcfa_info2z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5605z00zzcfa_info2z00,
		BgL_bgl_objectza7d2za7e3stru5716z00,
		BGl_objectzd2ze3structzd2prezd2a4956z31zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5595z00zzcfa_info2z00,
		BgL_bgl_objectza7d2za7e3stru5717z00,
		BGl_objectzd2ze3structzd2makezd24934z31zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5606z00zzcfa_info2z00,
		BgL_bgl_structza7b2objectza75718z00,
		BGl_structzb2objectzd2ze3objec4958z83zzcfa_info2z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5596z00zzcfa_info2z00,
		BgL_bgl_structza7b2objectza75719z00,
		BGl_structzb2objectzd2ze3objec4936z83zzcfa_info2z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5597z00zzcfa_info2z00,
		BgL_bgl_objectza7d2za7e3stru5720z00,
		BGl_objectzd2ze3structzd2prezd2p4938z31zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5598z00zzcfa_info2z00,
		BgL_bgl_structza7b2objectza75721z00,
		BGl_structzb2objectzd2ze3objec4940z83zzcfa_info2z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5599z00zzcfa_info2z00,
		BgL_bgl_objectza7d2za7e3stru5722z00,
		BGl_objectzd2ze3structzd2prezd2p4942z31zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2prezd2arithmeticzd2appzd2envz00zzcfa_info2z00,
		BgL_bgl__wideningza7d2preza75723z00,
		BGl__wideningzd2prezd2arithmeticzd2appzd2zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_arithmeticzd2appzd2nilzd2envzd2zzcfa_info2z00,
		BgL_bgl__arithmeticza7d2ap5724za7,
		BGl__arithmeticzd2appzd2nilz00zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2refzd2appzd2nilzd2envzd2zzcfa_info2z00,
		BgL_bgl__preza7d2procedure5725za7,
		BGl__prezd2procedurezd2refzd2appzd2nilz00zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2prezd2procedurezd2setz12zd2appzd2envzc0zzcfa_info2z00,
		BgL_bgl__wideningza7d2preza75726z00,
		BGl__wideningzd2prezd2procedurezd2setz12zd2appz12zzcfa_info2z00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string5574z00zzcfa_info2z00,
		BgL_bgl_string5574za700za7za7c5727za7, "object->struct::struct", 22);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2makezd2procedurezd2appz12zd2envz12zzcfa_info2z00,
		BgL_bgl__fillza7d2makeza7d2p5728z00,
		BGl__fillzd2makezd2procedurezd2appz12zc0zzcfa_info2z00, 0L, BUNSPEC, 9);
	      DEFINE_STRING(BGl_string5576z00zzcfa_info2z00,
		BgL_bgl_string5576za700za7za7c5729za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string5607z00zzcfa_info2z00,
		BgL_bgl_string5607za700za7za7c5730za7, "cfa_info2", 9);
	      DEFINE_STRING(BGl_string5608z00zzcfa_info2z00,
		BgL_bgl_string5608za700za7za7c5731za7,
		"#() struct-set!-app struct-ref-app make-struct-app pre-struct-set!-app pre-struct-ref-app pre-make-struct-app make-vector-app pre-make-vector-app procedure-set!-app procedure-ref-app make-procedure-app pre-procedure-set!-app pre-procedure-ref-app pre-make-procedure-app arithmetic-app pre-arithmetic-app ",
		304);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2makezd2procedurezd2appzd2envz52zzcfa_info2z00,
		BgL_bgl__za752allocateza7d2m5732z00,
		BGl__z52allocatezd2makezd2procedurezd2appz80zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2refzd2appzd2envz00zzcfa_info2z00,
		BgL_bgl__makeza7d2procedur5733za7,
		BGl__makezd2procedurezd2refzd2appzd2zzcfa_info2z00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2makezd2procedurezd2appzd2envz00zzcfa_info2z00,
		BgL_bgl__makeza7d2makeza7d2p5734z00,
		BGl__makezd2makezd2procedurezd2appzd2zzcfa_info2z00, 0L, BUNSPEC, 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2makezd2structzd2appzd2envz52zzcfa_info2z00,
		BgL_bgl__za752allocateza7d2m5735z00,
		BGl__z52allocatezd2makezd2structzd2appz80zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2nilzd2envz00zzcfa_info2z00,
		BgL_bgl__makeza7d2procedur5736za7,
		BGl__makezd2procedurezd2appzd2nilzd2zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2makezd2procedurezd2appzd2envz00zzcfa_info2z00,
		BgL_bgl__wideningza7d2make5737za7,
		BGl__wideningzd2makezd2procedurezd2appzd2zzcfa_info2z00, 0L, BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2prezd2makezd2procedurezd2appz12zd2envzc0zzcfa_info2z00,
		BgL_bgl__fillza7d2preza7d2ma5738z00,
		BGl__fillzd2prezd2makezd2procedurezd2appz12z12zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2prezd2procedurezd2setz12zd2appzd2envzc0zzcfa_info2z00,
		BgL_bgl__makeza7d2preza7d2pr5739z00,
		BGl__makezd2prezd2procedurezd2setz12zd2appz12zzcfa_info2z00, 0L, BUNSPEC,
		6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2prezd2makezd2vectorzd2appzd2envz80zzcfa_info2z00,
		BgL_bgl__za752allocateza7d2p5740z00,
		BGl__z52allocatezd2prezd2makezd2vectorzd2appz52zzcfa_info2z00, 0L, BUNSPEC,
		0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2structzd2refzd2appz12zd2envz12zzcfa_info2z00,
		BgL_bgl__fillza7d2structza7d5741z00,
		BGl__fillzd2structzd2refzd2appz12zc0zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2prezd2makezd2procedurezd2appzd2envz80zzcfa_info2z00,
		BgL_bgl__za752allocateza7d2p5742z00,
		BGl__z52allocatezd2prezd2makezd2procedurezd2appz52zzcfa_info2z00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2setz12zd2appzf3zd2envz33zzcfa_info2z00,
		BgL_bgl__procedureza7d2set5743za7,
		BGl__procedurezd2setz12zd2appzf3ze1zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2prezd2makezd2vectorzd2appzd2envzd2zzcfa_info2z00,
		BgL_bgl__makeza7d2preza7d2ma5744z00,
		BGl__makezd2prezd2makezd2vectorzd2appz00zzcfa_info2z00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2setz12zd2appzd2envz12zzcfa_info2z00,
		BgL_bgl__makeza7d2structza7d5745z00,
		BGl__makezd2structzd2setz12zd2appzc0zzcfa_info2z00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2prezd2arithmeticzd2appz12zd2envz12zzcfa_info2z00,
		BgL_bgl__fillza7d2preza7d2ar5746z00,
		BGl__fillzd2prezd2arithmeticzd2appz12zc0zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2arithmeticzd2appzd2nilzd2envz00zzcfa_info2z00,
		BgL_bgl__preza7d2arithmeti5747za7,
		BGl__prezd2arithmeticzd2appzd2nilzd2zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2refzd2appzd2nilzd2envz00zzcfa_info2z00,
		BgL_bgl__structza7d2refza7d25748z00,
		BGl__structzd2refzd2appzd2nilzd2zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2makezd2structzd2appzd2envz00zzcfa_info2z00,
		BgL_bgl__wideningza7d2make5749za7,
		BGl__wideningzd2makezd2structzd2appzd2zzcfa_info2z00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2refzd2appzd2envz00zzcfa_info2z00,
		BgL_bgl__makeza7d2structza7d5750z00,
		BGl__makezd2structzd2refzd2appzd2zzcfa_info2z00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2setz12zd2appzd2nilzd2envz12zzcfa_info2z00,
		BgL_bgl__procedureza7d2set5751za7,
		BGl__procedurezd2setz12zd2appzd2nilzc0zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2appzd2nilzd2envz00zzcfa_info2z00,
		BgL_bgl__makeza7d2structza7d5752z00,
		BGl__makezd2structzd2appzd2nilzd2zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_arithmeticzd2appzf3zd2envzf3zzcfa_info2z00,
		BgL_bgl__arithmeticza7d2ap5753za7,
		BGl__arithmeticzd2appzf3z21zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2prezd2procedurezd2refzd2appz12zd2envzc0zzcfa_info2z00,
		BgL_bgl__fillza7d2preza7d2pr5754z00,
		BGl__fillzd2prezd2procedurezd2refzd2appz12z12zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2setz12zd2appzf3zd2envze1zzcfa_info2z00,
		BgL_bgl__preza7d2procedure5755za7,
		BGl__prezd2procedurezd2setz12zd2appzf3z33zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2procedurezd2setz12zd2appzd2envz40zzcfa_info2z00,
		BgL_bgl__za752allocateza7d2p5756z00,
		BGl__z52allocatezd2procedurezd2setz12zd2appz92zzcfa_info2z00, 0L, BUNSPEC,
		0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2setz12zd2appzd2envz12zzcfa_info2z00,
		BgL_bgl__makeza7d2procedur5757za7,
		BGl__makezd2procedurezd2setz12zd2appzc0zzcfa_info2z00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2procedurezd2setz12zd2appzd2envz12zzcfa_info2z00,
		BgL_bgl__wideningza7d2proc5758za7,
		BGl__wideningzd2procedurezd2setz12zd2appzc0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2refzd2appzd2nilzd2envzd2zzcfa_info2z00,
		BgL_bgl__preza7d2structza7d25759z00,
		BGl__prezd2structzd2refzd2appzd2nilz00zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2structzd2appzf3zd2envzf3zzcfa_info2z00,
		BgL_bgl__preza7d2makeza7d2st5760z00,
		BGl__prezd2makezd2structzd2appzf3z21zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2prezd2procedurezd2setz12zd2appzd2envz92zzcfa_info2z00,
		BgL_bgl__za752allocateza7d2p5761z00,
		BGl__z52allocatezd2prezd2procedurezd2setz12zd2appz40zzcfa_info2z00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2prezd2makezd2vectorzd2appzd2envzd2zzcfa_info2z00,
		BgL_bgl__wideningza7d2preza75762z00,
		BGl__wideningzd2prezd2makezd2vectorzd2appz00zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2structzd2appzd2nilzd2envzd2zzcfa_info2z00,
		BgL_bgl__preza7d2makeza7d2st5763z00,
		BGl__prezd2makezd2structzd2appzd2nilz00zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2prezd2makezd2structzd2appzd2envz80zzcfa_info2z00,
		BgL_bgl__za752allocateza7d2p5764z00,
		BGl__z52allocatezd2prezd2makezd2structzd2appz52zzcfa_info2z00, 0L, BUNSPEC,
		0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2prezd2makezd2structzd2appzd2envzd2zzcfa_info2z00,
		BgL_bgl__makeza7d2preza7d2ma5765z00,
		BGl__makezd2prezd2makezd2structzd2appz00zzcfa_info2z00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2refzd2appzd2nilzd2envz00zzcfa_info2z00,
		BgL_bgl__procedureza7d2ref5766za7,
		BGl__procedurezd2refzd2appzd2nilzd2zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzd2nilzd2envz00zzcfa_info2z00,
		BgL_bgl__makeza7d2vectorza7d5767z00,
		BGl__makezd2vectorzd2appzd2nilzd2zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2prezd2structzd2refzd2appzd2envz80zzcfa_info2z00,
		BgL_bgl__za752allocateza7d2p5768z00,
		BGl__z52allocatezd2prezd2structzd2refzd2appz52zzcfa_info2z00, 0L, BUNSPEC,
		0);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2prezd2structzd2refzd2appzd2envzd2zzcfa_info2z00,
		BgL_bgl__makeza7d2preza7d2st5769z00,
		BGl__makezd2prezd2structzd2refzd2appz00zzcfa_info2z00, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2prezd2structzd2refzd2appzd2envzd2zzcfa_info2z00,
		BgL_bgl__wideningza7d2preza75770z00,
		BGl__wideningzd2prezd2structzd2refzd2appz00zzcfa_info2z00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long
		BgL_checksumz00_4586, char *BgL_fromz00_4587)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_info2z00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_info2z00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcfa_info2z00();
					BGl_cnstzd2initzd2zzcfa_info2z00();
					BGl_importedzd2moduleszd2initz00zzcfa_info2z00();
					BGl_objectzd2initzd2zzcfa_info2z00();
					BGl_methodzd2initzd2zzcfa_info2z00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 16 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_info2");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_info2");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 16 */
			{	/* Cfa/cinfo2.scm 16 */
				obj_t BgL_cportz00_4367;

				BgL_cportz00_4367 =
					bgl_open_input_string(BGl_string5608z00zzcfa_info2z00,
					(int) (((long) 0)));
				{
					long BgL_iz00_4368;

					BgL_iz00_4368 = ((long) 16);
				BgL_loopz00_4369:
					if ((BgL_iz00_4368 == ((long) -1)))
						{	/* Cfa/cinfo2.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/cinfo2.scm 16 */
							{	/* Cfa/cinfo2.scm 16 */
								obj_t BgL_arg5610z00_4371;

								{	/* Cfa/cinfo2.scm 16 */

									{	/* Cfa/cinfo2.scm 16 */
										obj_t BgL_locationz00_4373;

										BgL_locationz00_4373 = BBOOL(((bool_t) 0));
										{	/* Cfa/cinfo2.scm 16 */

											BgL_arg5610z00_4371 =
												BGl_readz00zz__readerz00(BgL_cportz00_4367,
												BgL_locationz00_4373);
										}
									}
								}
								{	/* Cfa/cinfo2.scm 16 */
									int BgL_auxz00_4604;

									BgL_auxz00_4604 = (int) (BgL_iz00_4368);
									CNST_TABLE_SET(BgL_auxz00_4604, BgL_arg5610z00_4371);
							}}
							{	/* Cfa/cinfo2.scm 16 */
								int BgL_auxz00_4374;

								BgL_auxz00_4374 = (int) ((BgL_iz00_4368 - ((long) 1)));
								{
									long BgL_iz00_4609;

									BgL_iz00_4609 = (long) (BgL_auxz00_4374);
									BgL_iz00_4368 = BgL_iz00_4609;
									goto BgL_loopz00_4369;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 16 */
			return BUNSPEC;
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 16 */
			{	/* Cfa/cinfo2.scm 25 */
				obj_t BgL_arg4959z00_1239;

				obj_t BgL_arg4960z00_1240;

				obj_t BgL_arg4963z00_1243;

				BgL_arg4959z00_1239 = CNST_TABLE_REF(((long) 0));
				BgL_arg4960z00_1240 = BGl_appz00zzast_nodez00;
				{	/* Cfa/cinfo2.scm 25 */
					obj_t BgL_v4874z00_1244;

					BgL_v4874z00_1244 = create_vector((int) (((long) 0)));
					BgL_arg4963z00_1243 = BgL_v4874z00_1244;
				}
				BGl_prezd2arithmeticzd2appz00zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4959z00_1239,
					BgL_arg4960z00_1240, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2prezd2arithmeticzd2appzd2envz52zzcfa_info2z00,
					BGl_prezd2arithmeticzd2appzd2nilzd2envz00zzcfa_info2z00,
					BGl_prezd2arithmeticzd2appzf3zd2envz21zzcfa_info2z00,
					((long) 216683123), BFALSE, BFALSE, BgL_arg4963z00_1243);
			}
			{	/* Cfa/cinfo2.scm 27 */
				obj_t BgL_arg4964z00_1245;

				obj_t BgL_arg4965z00_1246;

				obj_t BgL_arg4968z00_1249;

				BgL_arg4964z00_1245 = CNST_TABLE_REF(((long) 1));
				BgL_arg4965z00_1246 = BGl_appz00zzast_nodez00;
				{	/* Cfa/cinfo2.scm 27 */
					obj_t BgL_v4875z00_1250;

					BgL_v4875z00_1250 = create_vector((int) (((long) 0)));
					BgL_arg4968z00_1249 = BgL_v4875z00_1250;
				}
				BGl_arithmeticzd2appzd2zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4964z00_1245,
					BgL_arg4965z00_1246, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2arithmeticzd2appzd2envz80zzcfa_info2z00,
					BGl_arithmeticzd2appzd2nilzd2envzd2zzcfa_info2z00,
					BGl_arithmeticzd2appzf3zd2envzf3zzcfa_info2z00, ((long) 222962358),
					BFALSE, BFALSE, BgL_arg4968z00_1249);
			}
			{	/* Cfa/cinfo2.scm 32 */
				obj_t BgL_arg4969z00_1251;

				obj_t BgL_arg4970z00_1252;

				obj_t BgL_arg4973z00_1255;

				BgL_arg4969z00_1251 = CNST_TABLE_REF(((long) 2));
				BgL_arg4970z00_1252 = BGl_appz00zzast_nodez00;
				{	/* Cfa/cinfo2.scm 32 */
					obj_t BgL_v4876z00_1256;

					BgL_v4876z00_1256 = create_vector((int) (((long) 0)));
					BgL_arg4973z00_1255 = BgL_v4876z00_1256;
				}
				BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4969z00_1251,
					BgL_arg4970z00_1252, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2prezd2makezd2procedurezd2appzd2envz80zzcfa_info2z00,
					BGl_prezd2makezd2procedurezd2appzd2nilzd2envzd2zzcfa_info2z00,
					BGl_prezd2makezd2procedurezd2appzf3zd2envzf3zzcfa_info2z00,
					((long) 499165881), BFALSE, BFALSE, BgL_arg4973z00_1255);
			}
			{	/* Cfa/cinfo2.scm 35 */
				obj_t BgL_arg4974z00_1257;

				obj_t BgL_arg4975z00_1258;

				obj_t BgL_arg4979z00_1261;

				BgL_arg4974z00_1257 = CNST_TABLE_REF(((long) 3));
				BgL_arg4975z00_1258 = BGl_appz00zzast_nodez00;
				{	/* Cfa/cinfo2.scm 35 */
					obj_t BgL_v4877z00_1262;

					BgL_v4877z00_1262 = create_vector((int) (((long) 0)));
					BgL_arg4979z00_1261 = BgL_v4877z00_1262;
				}
				BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4974z00_1257,
					BgL_arg4975z00_1258, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2prezd2procedurezd2refzd2appzd2envz80zzcfa_info2z00,
					BGl_prezd2procedurezd2refzd2appzd2nilzd2envzd2zzcfa_info2z00,
					BGl_prezd2procedurezd2refzd2appzf3zd2envzf3zzcfa_info2z00,
					((long) 2030942), BFALSE, BFALSE, BgL_arg4979z00_1261);
			}
			{	/* Cfa/cinfo2.scm 36 */
				obj_t BgL_arg4980z00_1263;

				obj_t BgL_arg4981z00_1264;

				obj_t BgL_arg4984z00_1267;

				BgL_arg4980z00_1263 = CNST_TABLE_REF(((long) 4));
				BgL_arg4981z00_1264 = BGl_appz00zzast_nodez00;
				{	/* Cfa/cinfo2.scm 36 */
					obj_t BgL_v4878z00_1268;

					BgL_v4878z00_1268 = create_vector((int) (((long) 0)));
					BgL_arg4984z00_1267 = BgL_v4878z00_1268;
				}
				BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4980z00_1263,
					BgL_arg4981z00_1264, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2prezd2procedurezd2setz12zd2appzd2envz92zzcfa_info2z00,
					BGl_prezd2procedurezd2setz12zd2appzd2nilzd2envzc0zzcfa_info2z00,
					BGl_prezd2procedurezd2setz12zd2appzf3zd2envze1zzcfa_info2z00,
					((long) 23770382), BFALSE, BFALSE, BgL_arg4984z00_1267);
			}
			{	/* Cfa/cinfo2.scm 38 */
				obj_t BgL_arg4985z00_1269;

				obj_t BgL_arg4986z00_1270;

				obj_t BgL_arg4989z00_1273;

				BgL_arg4985z00_1269 = CNST_TABLE_REF(((long) 5));
				BgL_arg4986z00_1270 = BGl_appz00zzast_nodez00;
				{	/* Cfa/cinfo2.scm 38 */
					obj_t BgL_v4879z00_1274;

					BgL_v4879z00_1274 = create_vector((int) (((long) 0)));
					BgL_arg4989z00_1273 = BgL_v4879z00_1274;
				}
				BGl_makezd2procedurezd2appz00zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4985z00_1269,
					BgL_arg4986z00_1270, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2makezd2procedurezd2appzd2envz52zzcfa_info2z00,
					BGl_makezd2procedurezd2appzd2nilzd2envz00zzcfa_info2z00,
					BGl_makezd2procedurezd2appzf3zd2envz21zzcfa_info2z00,
					((long) 439449302), BFALSE, BFALSE, BgL_arg4989z00_1273);
			}
			{	/* Cfa/cinfo2.scm 55 */
				obj_t BgL_arg4990z00_1275;

				obj_t BgL_arg4991z00_1276;

				obj_t BgL_arg4995z00_1279;

				BgL_arg4990z00_1275 = CNST_TABLE_REF(((long) 6));
				BgL_arg4991z00_1276 = BGl_appz00zzast_nodez00;
				{	/* Cfa/cinfo2.scm 55 */
					obj_t BgL_v4880z00_1280;

					BgL_v4880z00_1280 = create_vector((int) (((long) 0)));
					BgL_arg4995z00_1279 = BgL_v4880z00_1280;
				}
				BGl_procedurezd2refzd2appz00zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4990z00_1275,
					BgL_arg4991z00_1276, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2procedurezd2refzd2appzd2envz52zzcfa_info2z00,
					BGl_procedurezd2refzd2appzd2nilzd2envz00zzcfa_info2z00,
					BGl_procedurezd2refzd2appzf3zd2envz21zzcfa_info2z00,
					((long) 327821563), BFALSE, BFALSE, BgL_arg4995z00_1279);
			}
			{	/* Cfa/cinfo2.scm 56 */
				obj_t BgL_arg4996z00_1281;

				obj_t BgL_arg4997z00_1282;

				obj_t BgL_arg5000z00_1285;

				BgL_arg4996z00_1281 = CNST_TABLE_REF(((long) 7));
				BgL_arg4997z00_1282 = BGl_appz00zzast_nodez00;
				{	/* Cfa/cinfo2.scm 56 */
					obj_t BgL_v4881z00_1286;

					BgL_v4881z00_1286 = create_vector((int) (((long) 0)));
					BgL_arg5000z00_1285 = BgL_v4881z00_1286;
				}
				BGl_procedurezd2setz12zd2appz12zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4996z00_1281,
					BgL_arg4997z00_1282, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2procedurezd2setz12zd2appzd2envz40zzcfa_info2z00,
					BGl_procedurezd2setz12zd2appzd2nilzd2envz12zzcfa_info2z00,
					BGl_procedurezd2setz12zd2appzf3zd2envz33zzcfa_info2z00,
					((long) 206573483), BFALSE, BFALSE, BgL_arg5000z00_1285);
			}
			{	/* Cfa/cinfo2.scm 59 */
				obj_t BgL_arg5001z00_1287;

				obj_t BgL_arg5002z00_1288;

				obj_t BgL_arg5005z00_1291;

				BgL_arg5001z00_1287 = CNST_TABLE_REF(((long) 8));
				BgL_arg5002z00_1288 = BGl_appz00zzast_nodez00;
				{	/* Cfa/cinfo2.scm 59 */
					obj_t BgL_v4882z00_1292;

					BgL_v4882z00_1292 = create_vector((int) (((long) 0)));
					BgL_arg5005z00_1291 = BgL_v4882z00_1292;
				}
				BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5001z00_1287,
					BgL_arg5002z00_1288, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2prezd2makezd2vectorzd2appzd2envz80zzcfa_info2z00,
					BGl_prezd2makezd2vectorzd2appzd2nilzd2envzd2zzcfa_info2z00,
					BGl_prezd2makezd2vectorzd2appzf3zd2envzf3zzcfa_info2z00,
					((long) 66916191), BFALSE, BFALSE, BgL_arg5005z00_1291);
			}
			{	/* Cfa/cinfo2.scm 63 */
				obj_t BgL_arg5006z00_1293;

				obj_t BgL_arg5007z00_1294;

				obj_t BgL_arg5010z00_1297;

				BgL_arg5006z00_1293 = CNST_TABLE_REF(((long) 9));
				BgL_arg5007z00_1294 = BGl_appz00zzast_nodez00;
				{	/* Cfa/cinfo2.scm 63 */
					obj_t BgL_v4883z00_1298;

					BgL_v4883z00_1298 = create_vector((int) (((long) 0)));
					BgL_arg5010z00_1297 = BgL_v4883z00_1298;
				}
				BGl_makezd2vectorzd2appz00zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5006z00_1293,
					BgL_arg5007z00_1294, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2makezd2vectorzd2appzd2envz52zzcfa_info2z00,
					BGl_makezd2vectorzd2appzd2nilzd2envz00zzcfa_info2z00,
					BGl_makezd2vectorzd2appzf3zd2envz21zzcfa_info2z00, ((long) 326046466),
					BFALSE, BFALSE, BgL_arg5010z00_1297);
			}
			{	/* Cfa/cinfo2.scm 86 */
				obj_t BgL_arg5011z00_1299;

				obj_t BgL_arg5012z00_1300;

				obj_t BgL_arg5015z00_1303;

				BgL_arg5011z00_1299 = CNST_TABLE_REF(((long) 10));
				BgL_arg5012z00_1300 = BGl_appz00zzast_nodez00;
				{	/* Cfa/cinfo2.scm 86 */
					obj_t BgL_v4884z00_1304;

					BgL_v4884z00_1304 = create_vector((int) (((long) 0)));
					BgL_arg5015z00_1303 = BgL_v4884z00_1304;
				}
				BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5011z00_1299,
					BgL_arg5012z00_1300, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2prezd2makezd2structzd2appzd2envz80zzcfa_info2z00,
					BGl_prezd2makezd2structzd2appzd2nilzd2envzd2zzcfa_info2z00,
					BGl_prezd2makezd2structzd2appzf3zd2envzf3zzcfa_info2z00,
					((long) 90647181), BFALSE, BFALSE, BgL_arg5015z00_1303);
			}
			{	/* Cfa/cinfo2.scm 89 */
				obj_t BgL_arg5016z00_1305;

				obj_t BgL_arg5017z00_1306;

				obj_t BgL_arg5020z00_1309;

				BgL_arg5016z00_1305 = CNST_TABLE_REF(((long) 11));
				BgL_arg5017z00_1306 = BGl_appz00zzast_nodez00;
				{	/* Cfa/cinfo2.scm 89 */
					obj_t BgL_v4885z00_1310;

					BgL_v4885z00_1310 = create_vector((int) (((long) 0)));
					BgL_arg5020z00_1309 = BgL_v4885z00_1310;
				}
				BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5016z00_1305,
					BgL_arg5017z00_1306, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2prezd2structzd2refzd2appzd2envz80zzcfa_info2z00,
					BGl_prezd2structzd2refzd2appzd2nilzd2envzd2zzcfa_info2z00,
					BGl_prezd2structzd2refzd2appzf3zd2envzf3zzcfa_info2z00,
					((long) 237205074), BFALSE, BFALSE, BgL_arg5020z00_1309);
			}
			{	/* Cfa/cinfo2.scm 90 */
				obj_t BgL_arg5021z00_1311;

				obj_t BgL_arg5022z00_1312;

				obj_t BgL_arg5025z00_1315;

				BgL_arg5021z00_1311 = CNST_TABLE_REF(((long) 12));
				BgL_arg5022z00_1312 = BGl_appz00zzast_nodez00;
				{	/* Cfa/cinfo2.scm 90 */
					obj_t BgL_v4886z00_1316;

					BgL_v4886z00_1316 = create_vector((int) (((long) 0)));
					BgL_arg5025z00_1315 = BgL_v4886z00_1316;
				}
				BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5021z00_1311,
					BgL_arg5022z00_1312, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2prezd2structzd2setz12zd2appzd2envz92zzcfa_info2z00,
					BGl_prezd2structzd2setz12zd2appzd2nilzd2envzc0zzcfa_info2z00,
					BGl_prezd2structzd2setz12zd2appzf3zd2envze1zzcfa_info2z00,
					((long) 529724834), BFALSE, BFALSE, BgL_arg5025z00_1315);
			}
			{	/* Cfa/cinfo2.scm 92 */
				obj_t BgL_arg5026z00_1317;

				obj_t BgL_arg5027z00_1318;

				obj_t BgL_arg5030z00_1321;

				BgL_arg5026z00_1317 = CNST_TABLE_REF(((long) 13));
				BgL_arg5027z00_1318 = BGl_appz00zzast_nodez00;
				{	/* Cfa/cinfo2.scm 92 */
					obj_t BgL_v4887z00_1322;

					BgL_v4887z00_1322 = create_vector((int) (((long) 0)));
					BgL_arg5030z00_1321 = BgL_v4887z00_1322;
				}
				BGl_makezd2structzd2appz00zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5026z00_1317,
					BgL_arg5027z00_1318, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2makezd2structzd2appzd2envz52zzcfa_info2z00,
					BGl_makezd2structzd2appzd2nilzd2envz00zzcfa_info2z00,
					BGl_makezd2structzd2appzf3zd2envz21zzcfa_info2z00, ((long) 94769531),
					BFALSE, BFALSE, BgL_arg5030z00_1321);
			}
			{	/* Cfa/cinfo2.scm 104 */
				obj_t BgL_arg5031z00_1323;

				obj_t BgL_arg5032z00_1324;

				obj_t BgL_arg5035z00_1327;

				BgL_arg5031z00_1323 = CNST_TABLE_REF(((long) 14));
				BgL_arg5032z00_1324 = BGl_appz00zzast_nodez00;
				{	/* Cfa/cinfo2.scm 104 */
					obj_t BgL_v4888z00_1328;

					BgL_v4888z00_1328 = create_vector((int) (((long) 0)));
					BgL_arg5035z00_1327 = BgL_v4888z00_1328;
				}
				BGl_structzd2refzd2appz00zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5031z00_1323,
					BgL_arg5032z00_1324, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2structzd2refzd2appzd2envz52zzcfa_info2z00,
					BGl_structzd2refzd2appzd2nilzd2envz00zzcfa_info2z00,
					BGl_structzd2refzd2appzf3zd2envz21zzcfa_info2z00, ((long) 431745647),
					BFALSE, BFALSE, BgL_arg5035z00_1327);
			}
			{	/* Cfa/cinfo2.scm 105 */
				obj_t BgL_arg5036z00_1329;

				obj_t BgL_arg5037z00_1330;

				obj_t BgL_arg5040z00_1333;

				BgL_arg5036z00_1329 = CNST_TABLE_REF(((long) 15));
				BgL_arg5037z00_1330 = BGl_appz00zzast_nodez00;
				{	/* Cfa/cinfo2.scm 105 */
					obj_t BgL_v4889z00_1334;

					BgL_v4889z00_1334 = create_vector((int) (((long) 0)));
					BgL_arg5040z00_1333 = BgL_v4889z00_1334;
				}
				BGl_structzd2setz12zd2appz12zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5036z00_1329,
					BgL_arg5037z00_1330, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2structzd2setz12zd2appzd2envz40zzcfa_info2z00,
					BGl_structzd2setz12zd2appzd2nilzd2envz12zzcfa_info2z00,
					BGl_structzd2setz12zd2appzf3zd2envz33zzcfa_info2z00,
					((long) 403437055), BFALSE, BFALSE, BgL_arg5040z00_1333);
			}
			BGl_z52thezd2structzd2setz12zd2appzd2nilz40zzcfa_info2z00 = BUNSPEC;
			BGl_z52thezd2structzd2refzd2appzd2nilz52zzcfa_info2z00 = BUNSPEC;
			BGl_z52thezd2makezd2structzd2appzd2nilz52zzcfa_info2z00 = BUNSPEC;
			BGl_z52thezd2prezd2structzd2setz12zd2appzd2nilz92zzcfa_info2z00 = BUNSPEC;
			BGl_z52thezd2prezd2structzd2refzd2appzd2nilz80zzcfa_info2z00 = BUNSPEC;
			BGl_z52thezd2prezd2makezd2structzd2appzd2nilz80zzcfa_info2z00 = BUNSPEC;
			BGl_z52thezd2makezd2vectorzd2appzd2nilz52zzcfa_info2z00 = BUNSPEC;
			BGl_z52thezd2prezd2makezd2vectorzd2appzd2nilz80zzcfa_info2z00 = BUNSPEC;
			BGl_z52thezd2procedurezd2setz12zd2appzd2nilz40zzcfa_info2z00 = BUNSPEC;
			BGl_z52thezd2procedurezd2refzd2appzd2nilz52zzcfa_info2z00 = BUNSPEC;
			BGl_z52thezd2makezd2procedurezd2appzd2nilz52zzcfa_info2z00 = BUNSPEC;
			BGl_z52thezd2prezd2procedurezd2setz12zd2appzd2nilz92zzcfa_info2z00 =
				BUNSPEC;
			BGl_z52thezd2prezd2procedurezd2refzd2appzd2nilz80zzcfa_info2z00 = BUNSPEC;
			BGl_z52thezd2prezd2makezd2procedurezd2appzd2nilz80zzcfa_info2z00 =
				BUNSPEC;
			BGl_z52thezd2arithmeticzd2appzd2nilz80zzcfa_info2z00 = BUNSPEC;
			return (BGl_z52thezd2prezd2arithmeticzd2appzd2nilz52zzcfa_info2z00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* struct-set!-app? */
	BGL_EXPORTED_DEF bool_t BGl_structzd2setz12zd2appzf3ze1zzcfa_info2z00(obj_t
		BgL_obj4856z00_1)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 105 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4856z00_1,
				BGl_structzd2setz12zd2appz12zzcfa_info2z00);
		}
	}



/* _struct-set!-app? */
	obj_t BGl__structzd2setz12zd2appzf3ze1zzcfa_info2z00(obj_t BgL_envz00_3999,
		obj_t BgL_obj4856z00_4000)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 105 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4856z00_4000,
					BGl_structzd2setz12zd2appz12zzcfa_info2z00));
		}
	}



/* widening-struct-set!-app */
	BGL_EXPORTED_DEF BgL_structzd2setz12zd2appz12_bglt
		BGl_wideningzd2structzd2setz12zd2appzc0zzcfa_info2z00(BgL_approxz00_bglt
		BgL_approx4833z00_5)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 105 */
			{	/* Cfa/cinfo2.scm 105 */
				BgL_structzd2setz12zd2appz12_bglt BgL_new4834z00_2437;

				BgL_new4834z00_2437 =
					((BgL_structzd2setz12zd2appz12_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_structzd2setz12zd2appz12_bgl))));
				{	/* Cfa/cinfo2.scm 105 */
					BgL_structzd2setz12zd2appz12_bglt BgL_res5436z00_2441;

					{	/* Cfa/cinfo2.scm 105 */
						BgL_structzd2setz12zd2appz12_bglt BgL_new4846z00_2438;

						BgL_new4846z00_2438 = BgL_new4834z00_2437;
						{	/* Cfa/cinfo2.scm 105 */
							BgL_approxz00_bglt BgL_approx4845z00_2440;

							BgL_approx4845z00_2440 = BgL_approx4833z00_5;
							((((BgL_structzd2setz12zd2appz12_bglt)
										CREF(BgL_new4846z00_2438))->BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4845z00_2440), BUNSPEC);
							BgL_res5436z00_2441 = BgL_new4846z00_2438;
					}} BgL_res5436z00_2441;
				}
				return BgL_new4834z00_2437;
			}
		}
	}



/* _widening-struct-set!-app */
	obj_t BGl__wideningzd2structzd2setz12zd2appzc0zzcfa_info2z00(obj_t
		BgL_envz00_4001, obj_t BgL_approx4833z00_4002)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 105 */
			return
				(obj_t) (BGl_wideningzd2structzd2setz12zd2appzc0zzcfa_info2z00(
					(BgL_approxz00_bglt) (BgL_approx4833z00_4002)));
		}
	}



/* make-struct-set!-app */
	BGL_EXPORTED_DEF BgL_structzd2setz12zd2appz12_bglt
		BGl_makezd2structzd2setz12zd2appzc0zzcfa_info2z00(obj_t BgL_loc4837z00_6,
		BgL_typez00_bglt BgL_type4838z00_7, obj_t BgL_sidezd2effectzf34839z21_8,
		obj_t BgL_key4840z00_9, BgL_varz00_bglt BgL_fun4841z00_10,
		obj_t BgL_args4842z00_11, BgL_approxz00_bglt BgL_approx4836z00_12)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 105 */
			{	/* Cfa/cinfo2.scm 105 */
				BgL_appz00_bglt BgL_aux4843z00_2442;

				BgL_aux4843z00_2442 =
					BGl_makezd2appzd2zzast_nodez00(BgL_loc4837z00_6, BgL_type4838z00_7,
					BgL_sidezd2effectzf34839z21_8, BgL_key4840z00_9, BgL_fun4841z00_10,
					BgL_args4842z00_11);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4843z00_2442),
					BGl_classzd2numzd2zz__objectz00
					(BGl_structzd2setz12zd2appz12zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 105 */
					BgL_structzd2setz12zd2appz12_bglt BgL_arg5042z00_2444;

					{	/* Cfa/cinfo2.scm 105 */
						BgL_structzd2setz12zd2appz12_bglt BgL_res5438z00_2454;

						{	/* Cfa/cinfo2.scm 105 */
							BgL_structzd2setz12zd2appz12_bglt BgL_new4834z00_2449;

							BgL_new4834z00_2449 =
								((BgL_structzd2setz12zd2appz12_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_structzd2setz12zd2appz12_bgl))));
							{	/* Cfa/cinfo2.scm 105 */
								BgL_structzd2setz12zd2appz12_bglt BgL_res5437z00_2453;

								{	/* Cfa/cinfo2.scm 105 */
									BgL_structzd2setz12zd2appz12_bglt BgL_new4846z00_2450;

									BgL_new4846z00_2450 = BgL_new4834z00_2449;
									{	/* Cfa/cinfo2.scm 105 */
										BgL_approxz00_bglt BgL_approx4845z00_2452;

										BgL_approx4845z00_2452 = BgL_approx4836z00_12;
										((((BgL_structzd2setz12zd2appz12_bglt)
													CREF(BgL_new4846z00_2450))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4845z00_2452), BUNSPEC);
										BgL_res5437z00_2453 = BgL_new4846z00_2450;
								}} BgL_res5437z00_2453;
							}
							BgL_res5438z00_2454 = BgL_new4834z00_2449;
						}
						BgL_arg5042z00_2444 = BgL_res5438z00_2454;
					}
					{	/* Cfa/cinfo2.scm 105 */
						obj_t BgL_auxz00_4691;

						BgL_objectz00_bglt BgL_auxz00_4689;

						BgL_auxz00_4691 = (obj_t) (BgL_arg5042z00_2444);
						BgL_auxz00_4689 = (BgL_objectz00_bglt) (BgL_aux4843z00_2442);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_4689, BgL_auxz00_4691);
				}}
				return
					((BgL_structzd2setz12zd2appz12_bglt)
					(BgL_structzd2setz12zd2appz12_bglt) (BgL_aux4843z00_2442));
			}
		}
	}



/* _make-struct-set!-app */
	obj_t BGl__makezd2structzd2setz12zd2appzc0zzcfa_info2z00(obj_t
		BgL_envz00_4003, obj_t BgL_loc4837z00_4004, obj_t BgL_type4838z00_4005,
		obj_t BgL_sidezd2effectzf34839z21_4006, obj_t BgL_key4840z00_4007,
		obj_t BgL_fun4841z00_4008, obj_t BgL_args4842z00_4009,
		obj_t BgL_approx4836z00_4010)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 105 */
			return
				(obj_t) (BGl_makezd2structzd2setz12zd2appzc0zzcfa_info2z00
				(BgL_loc4837z00_4004, (BgL_typez00_bglt) (BgL_type4838z00_4005),
					BgL_sidezd2effectzf34839z21_4006, BgL_key4840z00_4007,
					(BgL_varz00_bglt) (BgL_fun4841z00_4008), BgL_args4842z00_4009,
					(BgL_approxz00_bglt) (BgL_approx4836z00_4010)));
		}
	}



/* fill-struct-set!-app! */
	BGL_EXPORTED_DEF BgL_structzd2setz12zd2appz12_bglt
		BGl_fillzd2structzd2setz12zd2appz12zd2zzcfa_info2z00
		(BgL_structzd2setz12zd2appz12_bglt BgL_new4846z00_13,
		BgL_approxz00_bglt BgL_approx4845z00_14)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 105 */
			{	/* Cfa/cinfo2.scm 105 */
				BgL_approxz00_bglt BgL_approx4845z00_4376;

				BgL_approx4845z00_4376 = BgL_approx4845z00_14;
				((((BgL_structzd2setz12zd2appz12_bglt) CREF(BgL_new4846z00_13))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4845z00_4376), BUNSPEC);
				return BgL_new4846z00_13;
			}
		}
	}



/* _fill-struct-set!-app! */
	obj_t BGl__fillzd2structzd2setz12zd2appz12zd2zzcfa_info2z00(obj_t
		BgL_envz00_4011, obj_t BgL_new4846z00_4012, obj_t BgL_approx4845z00_4013)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 105 */
			{	/* Cfa/cinfo2.scm 105 */
				BgL_structzd2setz12zd2appz12_bglt BgL_auxz00_4702;

				{	/* Cfa/cinfo2.scm 105 */
					BgL_structzd2setz12zd2appz12_bglt BgL_res5611z00_4380;

					{	/* Cfa/cinfo2.scm 105 */
						BgL_structzd2setz12zd2appz12_bglt BgL_new4846z00_4377;

						BgL_approxz00_bglt BgL_approx4845z00_4378;

						BgL_new4846z00_4377 =
							(BgL_structzd2setz12zd2appz12_bglt) (BgL_new4846z00_4012);
						BgL_approx4845z00_4378 =
							(BgL_approxz00_bglt) (BgL_approx4845z00_4013);
						{	/* Cfa/cinfo2.scm 105 */
							BgL_approxz00_bglt BgL_approx4845z00_4379;

							BgL_approx4845z00_4379 = BgL_approx4845z00_4378;
							((((BgL_structzd2setz12zd2appz12_bglt)
										CREF(BgL_new4846z00_4377))->BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4845z00_4379), BUNSPEC);
							BgL_res5611z00_4380 = BgL_new4846z00_4377;
						}
					}
					BgL_auxz00_4702 = BgL_res5611z00_4380;
				}
				return (obj_t) (BgL_auxz00_4702);
			}
		}
	}



/* %allocate-struct-set!-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_z52allocatezd2structzd2setz12zd2appz92zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 105 */
			{	/* Cfa/cinfo2.scm 105 */
				BgL_appz00_bglt BgL_new4849z00_4381;

				BgL_new4849z00_4381 =
					((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_appz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new4849z00_4381),
					BGl_classzd2numzd2zz__objectz00
					(BGl_structzd2setz12zd2appz12zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 105 */
					BgL_objectz00_bglt BgL_auxz00_4711;

					BgL_auxz00_4711 = (BgL_objectz00_bglt) (BgL_new4849z00_4381);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4711, BFALSE);
				}
				return BgL_new4849z00_4381;
			}
		}
	}



/* _%allocate-struct-set!-app */
	obj_t BGl__z52allocatezd2structzd2setz12zd2appz92zzcfa_info2z00(obj_t
		BgL_envz00_3997)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 105 */
			{	/* Cfa/cinfo2.scm 105 */
				BgL_appz00_bglt BgL_auxz00_4714;

				{	/* Cfa/cinfo2.scm 105 */
					BgL_appz00_bglt BgL_res5612z00_4385;

					{	/* Cfa/cinfo2.scm 105 */
						BgL_appz00_bglt BgL_new4849z00_4383;

						BgL_new4849z00_4383 =
							((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_appz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4849z00_4383),
							BGl_classzd2numzd2zz__objectz00
							(BGl_structzd2setz12zd2appz12zzcfa_info2z00));
						{	/* Cfa/cinfo2.scm 105 */
							BgL_objectz00_bglt BgL_auxz00_4719;

							BgL_auxz00_4719 = (BgL_objectz00_bglt) (BgL_new4849z00_4383);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4719, BFALSE);
						}
						BgL_res5612z00_4385 = BgL_new4849z00_4383;
					}
					BgL_auxz00_4714 = BgL_res5612z00_4385;
				}
				return (obj_t) (BgL_auxz00_4714);
			}
		}
	}



/* struct-set!-app-nil */
	BGL_EXPORTED_DEF BgL_structzd2setz12zd2appz12_bglt
		BGl_structzd2setz12zd2appzd2nilzc0zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 105 */
			if (
				(BGl_z52thezd2structzd2setz12zd2appzd2nilz40zzcfa_info2z00 == BUNSPEC))
				{	/* Cfa/cinfo2.scm 105 */
					{	/* Cfa/cinfo2.scm 105 */
						BgL_appz00_bglt BgL_res5439z00_2464;

						{	/* Cfa/cinfo2.scm 105 */
							BgL_appz00_bglt BgL_new2275z00_2460;

							BgL_new2275z00_2460 =
								((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2275z00_2460),
								BGl_classzd2numzd2zz__objectz00(BGl_appz00zzast_nodez00));
							{	/* Cfa/cinfo2.scm 105 */
								BgL_objectz00_bglt BgL_auxz00_4729;

								BgL_auxz00_4729 = (BgL_objectz00_bglt) (BgL_new2275z00_2460);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4729, BFALSE);
							}
							BgL_res5439z00_2464 = BgL_new2275z00_2460;
						}
						BGl_z52thezd2structzd2setz12zd2appzd2nilz40zzcfa_info2z00 =
							(obj_t) (BgL_res5439z00_2464);
					}
					{	/* Cfa/cinfo2.scm 105 */
						BgL_typez00_bglt BgL_arg5045z00_1344;

						BgL_varz00_bglt BgL_arg5046z00_1345;

						BgL_arg5045z00_1344 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg5046z00_1345 = BGl_varzd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo2.scm 105 */
							BgL_appz00_bglt BgL_res5440z00_2478;

							{	/* Cfa/cinfo2.scm 105 */
								BgL_appz00_bglt BgL_new2267z00_2465;

								BgL_new2267z00_2465 =
									(BgL_appz00_bglt)
									(BGl_z52thezd2structzd2setz12zd2appzd2nilz40zzcfa_info2z00);
								{	/* Cfa/cinfo2.scm 105 */
									obj_t BgL_loc2261z00_2472;

									BgL_typez00_bglt BgL_type2262z00_2473;

									obj_t BgL_sidezd2effectzf32263z21_2474;

									obj_t BgL_key2264z00_2475;

									BgL_varz00_bglt BgL_fun2265z00_2476;

									obj_t BgL_args2266z00_2477;

									BgL_loc2261z00_2472 = BUNSPEC;
									BgL_type2262z00_2473 = BgL_arg5045z00_1344;
									BgL_sidezd2effectzf32263z21_2474 = BUNSPEC;
									BgL_key2264z00_2475 = BUNSPEC;
									BgL_fun2265z00_2476 = BgL_arg5046z00_1345;
									BgL_args2266z00_2477 = BUNSPEC;
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2465))->BgL_locz00) =
										((obj_t) BgL_loc2261z00_2472), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2465))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2262z00_2473), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2465))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32263z21_2474), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2465))->BgL_keyz00) =
										((obj_t) BgL_key2264z00_2475), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2465))->BgL_funz00) =
										((BgL_varz00_bglt) BgL_fun2265z00_2476), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2465))->
											BgL_argsz00) = ((obj_t) BgL_args2266z00_2477), BUNSPEC);
									BgL_res5440z00_2478 = BgL_new2267z00_2465;
							}} BgL_res5440z00_2478;
					}}
					{	/* Cfa/cinfo2.scm 105 */
						long BgL_arg5047z00_1346;

						BgL_arg5047z00_1346 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_structzd2setz12zd2appz12zzcfa_info2z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2structzd2setz12zd2appzd2nilz40zzcfa_info2z00),
							BgL_arg5047z00_1346);
					}
					{	/* Cfa/cinfo2.scm 105 */
						BgL_structzd2setz12zd2appz12_bglt BgL_arg5048z00_1347;

						{	/* Cfa/cinfo2.scm 105 */
							BgL_approxz00_bglt BgL_arg5049z00_1348;

							BgL_arg5049z00_1348 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo2.scm 105 */
								BgL_structzd2setz12zd2appz12_bglt BgL_res5442z00_2487;

								{	/* Cfa/cinfo2.scm 105 */
									BgL_structzd2setz12zd2appz12_bglt BgL_new4834z00_2482;

									BgL_new4834z00_2482 =
										((BgL_structzd2setz12zd2appz12_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_structzd2setz12zd2appz12_bgl))));
									{	/* Cfa/cinfo2.scm 105 */
										BgL_structzd2setz12zd2appz12_bglt BgL_res5441z00_2486;

										{	/* Cfa/cinfo2.scm 105 */
											BgL_structzd2setz12zd2appz12_bglt BgL_new4846z00_2483;

											BgL_new4846z00_2483 = BgL_new4834z00_2482;
											{	/* Cfa/cinfo2.scm 105 */
												BgL_approxz00_bglt BgL_approx4845z00_2485;

												BgL_approx4845z00_2485 = BgL_arg5049z00_1348;
												((((BgL_structzd2setz12zd2appz12_bglt)
															CREF(BgL_new4846z00_2483))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4845z00_2485),
													BUNSPEC);
												BgL_res5441z00_2486 = BgL_new4846z00_2483;
										}} BgL_res5441z00_2486;
									}
									BgL_res5442z00_2487 = BgL_new4834z00_2482;
								}
								BgL_arg5048z00_1347 = BgL_res5442z00_2487;
						}}
						{	/* Cfa/cinfo2.scm 105 */
							obj_t BgL_auxz00_4750;

							BgL_objectz00_bglt BgL_auxz00_4748;

							BgL_auxz00_4750 = (obj_t) (BgL_arg5048z00_1347);
							BgL_auxz00_4748 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2structzd2setz12zd2appzd2nilz40zzcfa_info2z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4748, BgL_auxz00_4750);
				}}}
			else
				{	/* Cfa/cinfo2.scm 105 */
					BFALSE;
				}
			return
				(BgL_structzd2setz12zd2appz12_bglt)
				(BGl_z52thezd2structzd2setz12zd2appzd2nilz40zzcfa_info2z00);
		}
	}



/* _struct-set!-app-nil */
	obj_t BGl__structzd2setz12zd2appzd2nilzc0zzcfa_info2z00(obj_t BgL_envz00_3998)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 105 */
			return (obj_t) (BGl_structzd2setz12zd2appzd2nilzc0zzcfa_info2z00());
		}
	}



/* struct-ref-app? */
	BGL_EXPORTED_DEF bool_t BGl_structzd2refzd2appzf3zf3zzcfa_info2z00(obj_t
		BgL_obj4814z00_16)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 104 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4814z00_16,
				BGl_structzd2refzd2appz00zzcfa_info2z00);
		}
	}



/* _struct-ref-app? */
	obj_t BGl__structzd2refzd2appzf3zf3zzcfa_info2z00(obj_t BgL_envz00_3995,
		obj_t BgL_obj4814z00_3996)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 104 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4814z00_3996,
					BGl_structzd2refzd2appz00zzcfa_info2z00));
		}
	}



/* widening-struct-ref-app */
	BGL_EXPORTED_DEF BgL_structzd2refzd2appz00_bglt
		BGl_wideningzd2structzd2refzd2appzd2zzcfa_info2z00(BgL_approxz00_bglt
		BgL_approx4791z00_20)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 104 */
			{	/* Cfa/cinfo2.scm 104 */
				BgL_structzd2refzd2appz00_bglt BgL_new4792z00_2488;

				BgL_new4792z00_2488 =
					((BgL_structzd2refzd2appz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_structzd2refzd2appz00_bgl))));
				{	/* Cfa/cinfo2.scm 104 */
					BgL_structzd2refzd2appz00_bglt BgL_res5443z00_2492;

					{	/* Cfa/cinfo2.scm 104 */
						BgL_structzd2refzd2appz00_bglt BgL_new4804z00_2489;

						BgL_new4804z00_2489 = BgL_new4792z00_2488;
						{	/* Cfa/cinfo2.scm 104 */
							BgL_approxz00_bglt BgL_approx4803z00_2491;

							BgL_approx4803z00_2491 = BgL_approx4791z00_20;
							((((BgL_structzd2refzd2appz00_bglt) CREF(BgL_new4804z00_2489))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4803z00_2491), BUNSPEC);
							BgL_res5443z00_2492 = BgL_new4804z00_2489;
					}} BgL_res5443z00_2492;
				}
				return BgL_new4792z00_2488;
			}
		}
	}



/* _widening-struct-ref-app */
	obj_t BGl__wideningzd2structzd2refzd2appzd2zzcfa_info2z00(obj_t
		BgL_envz00_4014, obj_t BgL_approx4791z00_4015)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 104 */
			return
				(obj_t) (BGl_wideningzd2structzd2refzd2appzd2zzcfa_info2z00(
					(BgL_approxz00_bglt) (BgL_approx4791z00_4015)));
		}
	}



/* make-struct-ref-app */
	BGL_EXPORTED_DEF BgL_structzd2refzd2appz00_bglt
		BGl_makezd2structzd2refzd2appzd2zzcfa_info2z00(obj_t BgL_loc4795z00_21,
		BgL_typez00_bglt BgL_type4796z00_22, obj_t BgL_sidezd2effectzf34797z21_23,
		obj_t BgL_key4798z00_24, BgL_varz00_bglt BgL_fun4799z00_25,
		obj_t BgL_args4800z00_26, BgL_approxz00_bglt BgL_approx4794z00_27)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 104 */
			{	/* Cfa/cinfo2.scm 104 */
				BgL_appz00_bglt BgL_aux4801z00_2493;

				BgL_aux4801z00_2493 =
					BGl_makezd2appzd2zzast_nodez00(BgL_loc4795z00_21, BgL_type4796z00_22,
					BgL_sidezd2effectzf34797z21_23, BgL_key4798z00_24, BgL_fun4799z00_25,
					BgL_args4800z00_26);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4801z00_2493),
					BGl_classzd2numzd2zz__objectz00
					(BGl_structzd2refzd2appz00zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 104 */
					BgL_structzd2refzd2appz00_bglt BgL_arg5051z00_2495;

					{	/* Cfa/cinfo2.scm 104 */
						BgL_structzd2refzd2appz00_bglt BgL_res5445z00_2505;

						{	/* Cfa/cinfo2.scm 104 */
							BgL_structzd2refzd2appz00_bglt BgL_new4792z00_2500;

							BgL_new4792z00_2500 =
								((BgL_structzd2refzd2appz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_structzd2refzd2appz00_bgl))));
							{	/* Cfa/cinfo2.scm 104 */
								BgL_structzd2refzd2appz00_bglt BgL_res5444z00_2504;

								{	/* Cfa/cinfo2.scm 104 */
									BgL_structzd2refzd2appz00_bglt BgL_new4804z00_2501;

									BgL_new4804z00_2501 = BgL_new4792z00_2500;
									{	/* Cfa/cinfo2.scm 104 */
										BgL_approxz00_bglt BgL_approx4803z00_2503;

										BgL_approx4803z00_2503 = BgL_approx4794z00_27;
										((((BgL_structzd2refzd2appz00_bglt)
													CREF(BgL_new4804z00_2501))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4803z00_2503), BUNSPEC);
										BgL_res5444z00_2504 = BgL_new4804z00_2501;
								}} BgL_res5444z00_2504;
							}
							BgL_res5445z00_2505 = BgL_new4792z00_2500;
						}
						BgL_arg5051z00_2495 = BgL_res5445z00_2505;
					}
					{	/* Cfa/cinfo2.scm 104 */
						obj_t BgL_auxz00_4772;

						BgL_objectz00_bglt BgL_auxz00_4770;

						BgL_auxz00_4772 = (obj_t) (BgL_arg5051z00_2495);
						BgL_auxz00_4770 = (BgL_objectz00_bglt) (BgL_aux4801z00_2493);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_4770, BgL_auxz00_4772);
				}}
				return
					((BgL_structzd2refzd2appz00_bglt)
					(BgL_structzd2refzd2appz00_bglt) (BgL_aux4801z00_2493));
			}
		}
	}



/* _make-struct-ref-app */
	obj_t BGl__makezd2structzd2refzd2appzd2zzcfa_info2z00(obj_t BgL_envz00_4016,
		obj_t BgL_loc4795z00_4017, obj_t BgL_type4796z00_4018,
		obj_t BgL_sidezd2effectzf34797z21_4019, obj_t BgL_key4798z00_4020,
		obj_t BgL_fun4799z00_4021, obj_t BgL_args4800z00_4022,
		obj_t BgL_approx4794z00_4023)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 104 */
			return
				(obj_t) (BGl_makezd2structzd2refzd2appzd2zzcfa_info2z00
				(BgL_loc4795z00_4017, (BgL_typez00_bglt) (BgL_type4796z00_4018),
					BgL_sidezd2effectzf34797z21_4019, BgL_key4798z00_4020,
					(BgL_varz00_bglt) (BgL_fun4799z00_4021), BgL_args4800z00_4022,
					(BgL_approxz00_bglt) (BgL_approx4794z00_4023)));
		}
	}



/* fill-struct-ref-app! */
	BGL_EXPORTED_DEF BgL_structzd2refzd2appz00_bglt
		BGl_fillzd2structzd2refzd2appz12zc0zzcfa_info2z00
		(BgL_structzd2refzd2appz00_bglt BgL_new4804z00_28,
		BgL_approxz00_bglt BgL_approx4803z00_29)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 104 */
			{	/* Cfa/cinfo2.scm 104 */
				BgL_approxz00_bglt BgL_approx4803z00_4387;

				BgL_approx4803z00_4387 = BgL_approx4803z00_29;
				((((BgL_structzd2refzd2appz00_bglt) CREF(BgL_new4804z00_28))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4803z00_4387), BUNSPEC);
				return BgL_new4804z00_28;
			}
		}
	}



/* _fill-struct-ref-app! */
	obj_t BGl__fillzd2structzd2refzd2appz12zc0zzcfa_info2z00(obj_t
		BgL_envz00_4024, obj_t BgL_new4804z00_4025, obj_t BgL_approx4803z00_4026)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 104 */
			{	/* Cfa/cinfo2.scm 104 */
				BgL_structzd2refzd2appz00_bglt BgL_auxz00_4783;

				{	/* Cfa/cinfo2.scm 104 */
					BgL_structzd2refzd2appz00_bglt BgL_res5613z00_4391;

					{	/* Cfa/cinfo2.scm 104 */
						BgL_structzd2refzd2appz00_bglt BgL_new4804z00_4388;

						BgL_approxz00_bglt BgL_approx4803z00_4389;

						BgL_new4804z00_4388 =
							(BgL_structzd2refzd2appz00_bglt) (BgL_new4804z00_4025);
						BgL_approx4803z00_4389 =
							(BgL_approxz00_bglt) (BgL_approx4803z00_4026);
						{	/* Cfa/cinfo2.scm 104 */
							BgL_approxz00_bglt BgL_approx4803z00_4390;

							BgL_approx4803z00_4390 = BgL_approx4803z00_4389;
							((((BgL_structzd2refzd2appz00_bglt) CREF(BgL_new4804z00_4388))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4803z00_4390), BUNSPEC);
							BgL_res5613z00_4391 = BgL_new4804z00_4388;
						}
					}
					BgL_auxz00_4783 = BgL_res5613z00_4391;
				}
				return (obj_t) (BgL_auxz00_4783);
			}
		}
	}



/* %allocate-struct-ref-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_z52allocatezd2structzd2refzd2appz80zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 104 */
			{	/* Cfa/cinfo2.scm 104 */
				BgL_appz00_bglt BgL_new4807z00_4392;

				BgL_new4807z00_4392 =
					((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_appz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new4807z00_4392),
					BGl_classzd2numzd2zz__objectz00
					(BGl_structzd2refzd2appz00zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 104 */
					BgL_objectz00_bglt BgL_auxz00_4792;

					BgL_auxz00_4792 = (BgL_objectz00_bglt) (BgL_new4807z00_4392);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4792, BFALSE);
				}
				return BgL_new4807z00_4392;
			}
		}
	}



/* _%allocate-struct-ref-app */
	obj_t BGl__z52allocatezd2structzd2refzd2appz80zzcfa_info2z00(obj_t
		BgL_envz00_3993)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 104 */
			{	/* Cfa/cinfo2.scm 104 */
				BgL_appz00_bglt BgL_auxz00_4795;

				{	/* Cfa/cinfo2.scm 104 */
					BgL_appz00_bglt BgL_res5614z00_4396;

					{	/* Cfa/cinfo2.scm 104 */
						BgL_appz00_bglt BgL_new4807z00_4394;

						BgL_new4807z00_4394 =
							((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_appz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4807z00_4394),
							BGl_classzd2numzd2zz__objectz00
							(BGl_structzd2refzd2appz00zzcfa_info2z00));
						{	/* Cfa/cinfo2.scm 104 */
							BgL_objectz00_bglt BgL_auxz00_4800;

							BgL_auxz00_4800 = (BgL_objectz00_bglt) (BgL_new4807z00_4394);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4800, BFALSE);
						}
						BgL_res5614z00_4396 = BgL_new4807z00_4394;
					}
					BgL_auxz00_4795 = BgL_res5614z00_4396;
				}
				return (obj_t) (BgL_auxz00_4795);
			}
		}
	}



/* struct-ref-app-nil */
	BGL_EXPORTED_DEF BgL_structzd2refzd2appz00_bglt
		BGl_structzd2refzd2appzd2nilzd2zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 104 */
			if ((BGl_z52thezd2structzd2refzd2appzd2nilz52zzcfa_info2z00 == BUNSPEC))
				{	/* Cfa/cinfo2.scm 104 */
					{	/* Cfa/cinfo2.scm 104 */
						BgL_appz00_bglt BgL_res5446z00_2515;

						{	/* Cfa/cinfo2.scm 104 */
							BgL_appz00_bglt BgL_new2275z00_2511;

							BgL_new2275z00_2511 =
								((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2275z00_2511),
								BGl_classzd2numzd2zz__objectz00(BGl_appz00zzast_nodez00));
							{	/* Cfa/cinfo2.scm 104 */
								BgL_objectz00_bglt BgL_auxz00_4810;

								BgL_auxz00_4810 = (BgL_objectz00_bglt) (BgL_new2275z00_2511);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4810, BFALSE);
							}
							BgL_res5446z00_2515 = BgL_new2275z00_2511;
						}
						BGl_z52thezd2structzd2refzd2appzd2nilz52zzcfa_info2z00 =
							(obj_t) (BgL_res5446z00_2515);
					}
					{	/* Cfa/cinfo2.scm 104 */
						BgL_typez00_bglt BgL_arg5054z00_1358;

						BgL_varz00_bglt BgL_arg5055z00_1359;

						BgL_arg5054z00_1358 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg5055z00_1359 = BGl_varzd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo2.scm 104 */
							BgL_appz00_bglt BgL_res5447z00_2529;

							{	/* Cfa/cinfo2.scm 104 */
								BgL_appz00_bglt BgL_new2267z00_2516;

								BgL_new2267z00_2516 =
									(BgL_appz00_bglt)
									(BGl_z52thezd2structzd2refzd2appzd2nilz52zzcfa_info2z00);
								{	/* Cfa/cinfo2.scm 104 */
									obj_t BgL_loc2261z00_2523;

									BgL_typez00_bglt BgL_type2262z00_2524;

									obj_t BgL_sidezd2effectzf32263z21_2525;

									obj_t BgL_key2264z00_2526;

									BgL_varz00_bglt BgL_fun2265z00_2527;

									obj_t BgL_args2266z00_2528;

									BgL_loc2261z00_2523 = BUNSPEC;
									BgL_type2262z00_2524 = BgL_arg5054z00_1358;
									BgL_sidezd2effectzf32263z21_2525 = BUNSPEC;
									BgL_key2264z00_2526 = BUNSPEC;
									BgL_fun2265z00_2527 = BgL_arg5055z00_1359;
									BgL_args2266z00_2528 = BUNSPEC;
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2516))->BgL_locz00) =
										((obj_t) BgL_loc2261z00_2523), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2516))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2262z00_2524), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2516))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32263z21_2525), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2516))->BgL_keyz00) =
										((obj_t) BgL_key2264z00_2526), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2516))->BgL_funz00) =
										((BgL_varz00_bglt) BgL_fun2265z00_2527), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2516))->
											BgL_argsz00) = ((obj_t) BgL_args2266z00_2528), BUNSPEC);
									BgL_res5447z00_2529 = BgL_new2267z00_2516;
							}} BgL_res5447z00_2529;
					}}
					{	/* Cfa/cinfo2.scm 104 */
						long BgL_arg5056z00_1360;

						BgL_arg5056z00_1360 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_structzd2refzd2appz00zzcfa_info2z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2structzd2refzd2appzd2nilz52zzcfa_info2z00),
							BgL_arg5056z00_1360);
					}
					{	/* Cfa/cinfo2.scm 104 */
						BgL_structzd2refzd2appz00_bglt BgL_arg5057z00_1361;

						{	/* Cfa/cinfo2.scm 104 */
							BgL_approxz00_bglt BgL_arg5058z00_1362;

							BgL_arg5058z00_1362 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo2.scm 104 */
								BgL_structzd2refzd2appz00_bglt BgL_res5449z00_2538;

								{	/* Cfa/cinfo2.scm 104 */
									BgL_structzd2refzd2appz00_bglt BgL_new4792z00_2533;

									BgL_new4792z00_2533 =
										((BgL_structzd2refzd2appz00_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_structzd2refzd2appz00_bgl))));
									{	/* Cfa/cinfo2.scm 104 */
										BgL_structzd2refzd2appz00_bglt BgL_res5448z00_2537;

										{	/* Cfa/cinfo2.scm 104 */
											BgL_structzd2refzd2appz00_bglt BgL_new4804z00_2534;

											BgL_new4804z00_2534 = BgL_new4792z00_2533;
											{	/* Cfa/cinfo2.scm 104 */
												BgL_approxz00_bglt BgL_approx4803z00_2536;

												BgL_approx4803z00_2536 = BgL_arg5058z00_1362;
												((((BgL_structzd2refzd2appz00_bglt)
															CREF(BgL_new4804z00_2534))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4803z00_2536),
													BUNSPEC);
												BgL_res5448z00_2537 = BgL_new4804z00_2534;
										}} BgL_res5448z00_2537;
									}
									BgL_res5449z00_2538 = BgL_new4792z00_2533;
								}
								BgL_arg5057z00_1361 = BgL_res5449z00_2538;
						}}
						{	/* Cfa/cinfo2.scm 104 */
							obj_t BgL_auxz00_4831;

							BgL_objectz00_bglt BgL_auxz00_4829;

							BgL_auxz00_4831 = (obj_t) (BgL_arg5057z00_1361);
							BgL_auxz00_4829 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2structzd2refzd2appzd2nilz52zzcfa_info2z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4829, BgL_auxz00_4831);
				}}}
			else
				{	/* Cfa/cinfo2.scm 104 */
					BFALSE;
				}
			return
				(BgL_structzd2refzd2appz00_bglt)
				(BGl_z52thezd2structzd2refzd2appzd2nilz52zzcfa_info2z00);
		}
	}



/* _struct-ref-app-nil */
	obj_t BGl__structzd2refzd2appzd2nilzd2zzcfa_info2z00(obj_t BgL_envz00_3994)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 104 */
			return (obj_t) (BGl_structzd2refzd2appzd2nilzd2zzcfa_info2z00());
		}
	}



/* make-struct-app? */
	BGL_EXPORTED_DEF bool_t BGl_makezd2structzd2appzf3zf3zzcfa_info2z00(obj_t
		BgL_obj4761z00_31)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 92 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4761z00_31,
				BGl_makezd2structzd2appz00zzcfa_info2z00);
		}
	}



/* _make-struct-app? */
	obj_t BGl__makezd2structzd2appzf3zf3zzcfa_info2z00(obj_t BgL_envz00_3991,
		obj_t BgL_obj4761z00_3992)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 92 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4761z00_3992,
					BGl_makezd2structzd2appz00zzcfa_info2z00));
		}
	}



/* widening-make-struct-app */
	BGL_EXPORTED_DEF BgL_makezd2structzd2appz00_bglt
		BGl_wideningzd2makezd2structzd2appzd2zzcfa_info2z00(BgL_approxz00_bglt
		BgL_approx4722z00_35, BgL_approxz00_bglt BgL_valuezd2approx4723zd2_36,
		long BgL_lostzd2stamp4724zd2_37, BgL_variablez00_bglt BgL_owner4725z00_38,
		obj_t BgL_stackzd2stamp4726zd2_39)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 92 */
			{	/* Cfa/cinfo2.scm 92 */
				BgL_makezd2structzd2appz00_bglt BgL_new4727z00_2539;

				BgL_new4727z00_2539 =
					((BgL_makezd2structzd2appz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_makezd2structzd2appz00_bgl))));
				{	/* Cfa/cinfo2.scm 92 */
					BgL_makezd2structzd2appz00_bglt BgL_res5450z00_2551;

					{	/* Cfa/cinfo2.scm 92 */
						BgL_makezd2structzd2appz00_bglt BgL_new4747z00_2540;

						BgL_new4747z00_2540 = BgL_new4727z00_2539;
						{	/* Cfa/cinfo2.scm 92 */
							BgL_approxz00_bglt BgL_approx4742z00_2546;

							BgL_approxz00_bglt BgL_valuezd2approx4743zd2_2547;

							long BgL_lostzd2stamp4744zd2_2548;

							BgL_variablez00_bglt BgL_owner4745z00_2549;

							obj_t BgL_stackzd2stamp4746zd2_2550;

							BgL_approx4742z00_2546 = BgL_approx4722z00_35;
							BgL_valuezd2approx4743zd2_2547 = BgL_valuezd2approx4723zd2_36;
							BgL_lostzd2stamp4744zd2_2548 = BgL_lostzd2stamp4724zd2_37;
							BgL_owner4745z00_2549 = BgL_owner4725z00_38;
							BgL_stackzd2stamp4746zd2_2550 = BgL_stackzd2stamp4726zd2_39;
							((((BgL_makezd2structzd2appz00_bglt) CREF(BgL_new4747z00_2540))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4742z00_2546), BUNSPEC);
							((((BgL_makezd2structzd2appz00_bglt) CREF(BgL_new4747z00_2540))->
									BgL_valuezd2approxzd2) =
								((BgL_approxz00_bglt) BgL_valuezd2approx4743zd2_2547), BUNSPEC);
							((((BgL_makezd2structzd2appz00_bglt) CREF(BgL_new4747z00_2540))->
									BgL_lostzd2stampzd2) =
								((long) BgL_lostzd2stamp4744zd2_2548), BUNSPEC);
							((((BgL_makezd2structzd2appz00_bglt) CREF(BgL_new4747z00_2540))->
									BgL_ownerz00) =
								((BgL_variablez00_bglt) BgL_owner4745z00_2549), BUNSPEC);
							((((BgL_makezd2structzd2appz00_bglt) CREF(BgL_new4747z00_2540))->
									BgL_stackzd2stampzd2) =
								((obj_t) BgL_stackzd2stamp4746zd2_2550), BUNSPEC);
							BgL_res5450z00_2551 = BgL_new4747z00_2540;
					}} BgL_res5450z00_2551;
				}
				return BgL_new4727z00_2539;
			}
		}
	}



/* _widening-make-struct-app */
	obj_t BGl__wideningzd2makezd2structzd2appzd2zzcfa_info2z00(obj_t
		BgL_envz00_4027, obj_t BgL_approx4722z00_4028,
		obj_t BgL_valuezd2approx4723zd2_4029, obj_t BgL_lostzd2stamp4724zd2_4030,
		obj_t BgL_owner4725z00_4031, obj_t BgL_stackzd2stamp4726zd2_4032)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 92 */
			return
				(obj_t) (BGl_wideningzd2makezd2structzd2appzd2zzcfa_info2z00(
					(BgL_approxz00_bglt) (BgL_approx4722z00_4028),
					(BgL_approxz00_bglt) (BgL_valuezd2approx4723zd2_4029),
					(long) CINT(BgL_lostzd2stamp4724zd2_4030),
					(BgL_variablez00_bglt) (BgL_owner4725z00_4031),
					BgL_stackzd2stamp4726zd2_4032));
		}
	}



/* make-make-struct-app */
	BGL_EXPORTED_DEF BgL_makezd2structzd2appz00_bglt
		BGl_makezd2makezd2structzd2appzd2zzcfa_info2z00(obj_t BgL_loc4734z00_40,
		BgL_typez00_bglt BgL_type4735z00_41, obj_t BgL_sidezd2effectzf34736z21_42,
		obj_t BgL_key4737z00_43, BgL_varz00_bglt BgL_fun4738z00_44,
		obj_t BgL_args4739z00_45, BgL_approxz00_bglt BgL_approx4729z00_46,
		BgL_approxz00_bglt BgL_valuezd2approx4730zd2_47,
		long BgL_lostzd2stamp4731zd2_48, BgL_variablez00_bglt BgL_owner4732z00_49,
		obj_t BgL_stackzd2stamp4733zd2_50)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 92 */
			{	/* Cfa/cinfo2.scm 92 */
				BgL_appz00_bglt BgL_aux4740z00_2552;

				BgL_aux4740z00_2552 =
					BGl_makezd2appzd2zzast_nodez00(BgL_loc4734z00_40, BgL_type4735z00_41,
					BgL_sidezd2effectzf34736z21_42, BgL_key4737z00_43, BgL_fun4738z00_44,
					BgL_args4739z00_45);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4740z00_2552),
					BGl_classzd2numzd2zz__objectz00
					(BGl_makezd2structzd2appz00zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 92 */
					BgL_makezd2structzd2appz00_bglt BgL_arg5060z00_2554;

					{	/* Cfa/cinfo2.scm 92 */
						BgL_makezd2structzd2appz00_bglt BgL_res5452z00_2576;

						{	/* Cfa/cinfo2.scm 92 */
							BgL_makezd2structzd2appz00_bglt BgL_new4727z00_2563;

							BgL_new4727z00_2563 =
								((BgL_makezd2structzd2appz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_makezd2structzd2appz00_bgl))));
							{	/* Cfa/cinfo2.scm 92 */
								BgL_makezd2structzd2appz00_bglt BgL_res5451z00_2575;

								{	/* Cfa/cinfo2.scm 92 */
									BgL_makezd2structzd2appz00_bglt BgL_new4747z00_2564;

									BgL_new4747z00_2564 = BgL_new4727z00_2563;
									{	/* Cfa/cinfo2.scm 92 */
										BgL_approxz00_bglt BgL_approx4742z00_2570;

										BgL_approxz00_bglt BgL_valuezd2approx4743zd2_2571;

										long BgL_lostzd2stamp4744zd2_2572;

										BgL_variablez00_bglt BgL_owner4745z00_2573;

										obj_t BgL_stackzd2stamp4746zd2_2574;

										BgL_approx4742z00_2570 = BgL_approx4729z00_46;
										BgL_valuezd2approx4743zd2_2571 =
											BgL_valuezd2approx4730zd2_47;
										BgL_lostzd2stamp4744zd2_2572 = BgL_lostzd2stamp4731zd2_48;
										BgL_owner4745z00_2573 = BgL_owner4732z00_49;
										BgL_stackzd2stamp4746zd2_2574 = BgL_stackzd2stamp4733zd2_50;
										((((BgL_makezd2structzd2appz00_bglt)
													CREF(BgL_new4747z00_2564))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4742z00_2570), BUNSPEC);
										((((BgL_makezd2structzd2appz00_bglt)
													CREF(BgL_new4747z00_2564))->BgL_valuezd2approxzd2) =
											((BgL_approxz00_bglt) BgL_valuezd2approx4743zd2_2571),
											BUNSPEC);
										((((BgL_makezd2structzd2appz00_bglt)
													CREF(BgL_new4747z00_2564))->BgL_lostzd2stampzd2) =
											((long) BgL_lostzd2stamp4744zd2_2572), BUNSPEC);
										((((BgL_makezd2structzd2appz00_bglt)
													CREF(BgL_new4747z00_2564))->BgL_ownerz00) =
											((BgL_variablez00_bglt) BgL_owner4745z00_2573), BUNSPEC);
										((((BgL_makezd2structzd2appz00_bglt)
													CREF(BgL_new4747z00_2564))->BgL_stackzd2stampzd2) =
											((obj_t) BgL_stackzd2stamp4746zd2_2574), BUNSPEC);
										BgL_res5451z00_2575 = BgL_new4747z00_2564;
								}} BgL_res5451z00_2575;
							}
							BgL_res5452z00_2576 = BgL_new4727z00_2563;
						}
						BgL_arg5060z00_2554 = BgL_res5452z00_2576;
					}
					{	/* Cfa/cinfo2.scm 92 */
						obj_t BgL_auxz00_4864;

						BgL_objectz00_bglt BgL_auxz00_4862;

						BgL_auxz00_4864 = (obj_t) (BgL_arg5060z00_2554);
						BgL_auxz00_4862 = (BgL_objectz00_bglt) (BgL_aux4740z00_2552);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_4862, BgL_auxz00_4864);
				}}
				return
					((BgL_makezd2structzd2appz00_bglt)
					(BgL_makezd2structzd2appz00_bglt) (BgL_aux4740z00_2552));
			}
		}
	}



/* _make-make-struct-app */
	obj_t BGl__makezd2makezd2structzd2appzd2zzcfa_info2z00(obj_t BgL_envz00_4033,
		obj_t BgL_loc4734z00_4034, obj_t BgL_type4735z00_4035,
		obj_t BgL_sidezd2effectzf34736z21_4036, obj_t BgL_key4737z00_4037,
		obj_t BgL_fun4738z00_4038, obj_t BgL_args4739z00_4039,
		obj_t BgL_approx4729z00_4040, obj_t BgL_valuezd2approx4730zd2_4041,
		obj_t BgL_lostzd2stamp4731zd2_4042, obj_t BgL_owner4732z00_4043,
		obj_t BgL_stackzd2stamp4733zd2_4044)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 92 */
			return
				(obj_t) (BGl_makezd2makezd2structzd2appzd2zzcfa_info2z00
				(BgL_loc4734z00_4034, (BgL_typez00_bglt) (BgL_type4735z00_4035),
					BgL_sidezd2effectzf34736z21_4036, BgL_key4737z00_4037,
					(BgL_varz00_bglt) (BgL_fun4738z00_4038), BgL_args4739z00_4039,
					(BgL_approxz00_bglt) (BgL_approx4729z00_4040),
					(BgL_approxz00_bglt) (BgL_valuezd2approx4730zd2_4041),
					(long) CINT(BgL_lostzd2stamp4731zd2_4042),
					(BgL_variablez00_bglt) (BgL_owner4732z00_4043),
					BgL_stackzd2stamp4733zd2_4044));
		}
	}



/* fill-make-struct-app! */
	BGL_EXPORTED_DEF BgL_makezd2structzd2appz00_bglt
		BGl_fillzd2makezd2structzd2appz12zc0zzcfa_info2z00
		(BgL_makezd2structzd2appz00_bglt BgL_new4747z00_51,
		BgL_approxz00_bglt BgL_approx4742z00_52,
		BgL_approxz00_bglt BgL_valuezd2approx4743zd2_53,
		long BgL_lostzd2stamp4744zd2_54, BgL_variablez00_bglt BgL_owner4745z00_55,
		obj_t BgL_stackzd2stamp4746zd2_56)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 92 */
			{	/* Cfa/cinfo2.scm 92 */
				BgL_approxz00_bglt BgL_approx4742z00_4398;

				BgL_approxz00_bglt BgL_valuezd2approx4743zd2_4399;

				long BgL_lostzd2stamp4744zd2_4400;

				BgL_variablez00_bglt BgL_owner4745z00_4401;

				obj_t BgL_stackzd2stamp4746zd2_4402;

				BgL_approx4742z00_4398 = BgL_approx4742z00_52;
				BgL_valuezd2approx4743zd2_4399 = BgL_valuezd2approx4743zd2_53;
				BgL_lostzd2stamp4744zd2_4400 = BgL_lostzd2stamp4744zd2_54;
				BgL_owner4745z00_4401 = BgL_owner4745z00_55;
				BgL_stackzd2stamp4746zd2_4402 = BgL_stackzd2stamp4746zd2_56;
				((((BgL_makezd2structzd2appz00_bglt) CREF(BgL_new4747z00_51))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4742z00_4398), BUNSPEC);
				((((BgL_makezd2structzd2appz00_bglt) CREF(BgL_new4747z00_51))->
						BgL_valuezd2approxzd2) =
					((BgL_approxz00_bglt) BgL_valuezd2approx4743zd2_4399), BUNSPEC);
				((((BgL_makezd2structzd2appz00_bglt) CREF(BgL_new4747z00_51))->
						BgL_lostzd2stampzd2) =
					((long) BgL_lostzd2stamp4744zd2_4400), BUNSPEC);
				((((BgL_makezd2structzd2appz00_bglt) CREF(BgL_new4747z00_51))->
						BgL_ownerz00) =
					((BgL_variablez00_bglt) BgL_owner4745z00_4401), BUNSPEC);
				((((BgL_makezd2structzd2appz00_bglt) CREF(BgL_new4747z00_51))->
						BgL_stackzd2stampzd2) =
					((obj_t) BgL_stackzd2stamp4746zd2_4402), BUNSPEC);
				return BgL_new4747z00_51;
			}
		}
	}



/* _fill-make-struct-app! */
	obj_t BGl__fillzd2makezd2structzd2appz12zc0zzcfa_info2z00(obj_t
		BgL_envz00_4045, obj_t BgL_new4747z00_4046, obj_t BgL_approx4742z00_4047,
		obj_t BgL_valuezd2approx4743zd2_4048, obj_t BgL_lostzd2stamp4744zd2_4049,
		obj_t BgL_owner4745z00_4050, obj_t BgL_stackzd2stamp4746zd2_4051)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 92 */
			{	/* Cfa/cinfo2.scm 92 */
				BgL_makezd2structzd2appz00_bglt BgL_auxz00_4882;

				{	/* Cfa/cinfo2.scm 92 */
					BgL_makezd2structzd2appz00_bglt BgL_res5615z00_4414;

					{	/* Cfa/cinfo2.scm 92 */
						BgL_makezd2structzd2appz00_bglt BgL_new4747z00_4403;

						BgL_approxz00_bglt BgL_approx4742z00_4404;

						BgL_approxz00_bglt BgL_valuezd2approx4743zd2_4405;

						long BgL_lostzd2stamp4744zd2_4406;

						BgL_variablez00_bglt BgL_owner4745z00_4407;

						BgL_new4747z00_4403 =
							(BgL_makezd2structzd2appz00_bglt) (BgL_new4747z00_4046);
						BgL_approx4742z00_4404 =
							(BgL_approxz00_bglt) (BgL_approx4742z00_4047);
						BgL_valuezd2approx4743zd2_4405 =
							(BgL_approxz00_bglt) (BgL_valuezd2approx4743zd2_4048);
						BgL_lostzd2stamp4744zd2_4406 =
							(long) CINT(BgL_lostzd2stamp4744zd2_4049);
						BgL_owner4745z00_4407 =
							(BgL_variablez00_bglt) (BgL_owner4745z00_4050);
						{	/* Cfa/cinfo2.scm 92 */
							BgL_approxz00_bglt BgL_approx4742z00_4409;

							BgL_approxz00_bglt BgL_valuezd2approx4743zd2_4410;

							long BgL_lostzd2stamp4744zd2_4411;

							BgL_variablez00_bglt BgL_owner4745z00_4412;

							obj_t BgL_stackzd2stamp4746zd2_4413;

							BgL_approx4742z00_4409 = BgL_approx4742z00_4404;
							BgL_valuezd2approx4743zd2_4410 = BgL_valuezd2approx4743zd2_4405;
							BgL_lostzd2stamp4744zd2_4411 = BgL_lostzd2stamp4744zd2_4406;
							BgL_owner4745z00_4412 = BgL_owner4745z00_4407;
							BgL_stackzd2stamp4746zd2_4413 = BgL_stackzd2stamp4746zd2_4051;
							((((BgL_makezd2structzd2appz00_bglt) CREF(BgL_new4747z00_4403))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4742z00_4409), BUNSPEC);
							((((BgL_makezd2structzd2appz00_bglt) CREF(BgL_new4747z00_4403))->
									BgL_valuezd2approxzd2) =
								((BgL_approxz00_bglt) BgL_valuezd2approx4743zd2_4410), BUNSPEC);
							((((BgL_makezd2structzd2appz00_bglt) CREF(BgL_new4747z00_4403))->
									BgL_lostzd2stampzd2) =
								((long) BgL_lostzd2stamp4744zd2_4411), BUNSPEC);
							((((BgL_makezd2structzd2appz00_bglt) CREF(BgL_new4747z00_4403))->
									BgL_ownerz00) =
								((BgL_variablez00_bglt) BgL_owner4745z00_4412), BUNSPEC);
							((((BgL_makezd2structzd2appz00_bglt) CREF(BgL_new4747z00_4403))->
									BgL_stackzd2stampzd2) =
								((obj_t) BgL_stackzd2stamp4746zd2_4413), BUNSPEC);
							BgL_res5615z00_4414 = BgL_new4747z00_4403;
					}}
					BgL_auxz00_4882 = BgL_res5615z00_4414;
				}
				return (obj_t) (BgL_auxz00_4882);
			}
		}
	}



/* %allocate-make-struct-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_z52allocatezd2makezd2structzd2appz80zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 92 */
			{	/* Cfa/cinfo2.scm 92 */
				BgL_appz00_bglt BgL_new4754z00_4415;

				BgL_new4754z00_4415 =
					((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_appz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new4754z00_4415),
					BGl_classzd2numzd2zz__objectz00
					(BGl_makezd2structzd2appz00zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 92 */
					BgL_objectz00_bglt BgL_auxz00_4898;

					BgL_auxz00_4898 = (BgL_objectz00_bglt) (BgL_new4754z00_4415);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4898, BFALSE);
				}
				return BgL_new4754z00_4415;
			}
		}
	}



/* _%allocate-make-struct-app */
	obj_t BGl__z52allocatezd2makezd2structzd2appz80zzcfa_info2z00(obj_t
		BgL_envz00_3989)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 92 */
			{	/* Cfa/cinfo2.scm 92 */
				BgL_appz00_bglt BgL_auxz00_4901;

				{	/* Cfa/cinfo2.scm 92 */
					BgL_appz00_bglt BgL_res5616z00_4419;

					{	/* Cfa/cinfo2.scm 92 */
						BgL_appz00_bglt BgL_new4754z00_4417;

						BgL_new4754z00_4417 =
							((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_appz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4754z00_4417),
							BGl_classzd2numzd2zz__objectz00
							(BGl_makezd2structzd2appz00zzcfa_info2z00));
						{	/* Cfa/cinfo2.scm 92 */
							BgL_objectz00_bglt BgL_auxz00_4906;

							BgL_auxz00_4906 = (BgL_objectz00_bglt) (BgL_new4754z00_4417);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4906, BFALSE);
						}
						BgL_res5616z00_4419 = BgL_new4754z00_4417;
					}
					BgL_auxz00_4901 = BgL_res5616z00_4419;
				}
				return (obj_t) (BgL_auxz00_4901);
			}
		}
	}



/* make-struct-app-nil */
	BGL_EXPORTED_DEF BgL_makezd2structzd2appz00_bglt
		BGl_makezd2structzd2appzd2nilzd2zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 92 */
			if ((BGl_z52thezd2makezd2structzd2appzd2nilz52zzcfa_info2z00 == BUNSPEC))
				{	/* Cfa/cinfo2.scm 92 */
					{	/* Cfa/cinfo2.scm 92 */
						BgL_appz00_bglt BgL_res5453z00_2590;

						{	/* Cfa/cinfo2.scm 92 */
							BgL_appz00_bglt BgL_new2275z00_2586;

							BgL_new2275z00_2586 =
								((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2275z00_2586),
								BGl_classzd2numzd2zz__objectz00(BGl_appz00zzast_nodez00));
							{	/* Cfa/cinfo2.scm 92 */
								BgL_objectz00_bglt BgL_auxz00_4916;

								BgL_auxz00_4916 = (BgL_objectz00_bglt) (BgL_new2275z00_2586);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4916, BFALSE);
							}
							BgL_res5453z00_2590 = BgL_new2275z00_2586;
						}
						BGl_z52thezd2makezd2structzd2appzd2nilz52zzcfa_info2z00 =
							(obj_t) (BgL_res5453z00_2590);
					}
					{	/* Cfa/cinfo2.scm 92 */
						BgL_typez00_bglt BgL_arg5063z00_1376;

						BgL_varz00_bglt BgL_arg5064z00_1377;

						BgL_arg5063z00_1376 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg5064z00_1377 = BGl_varzd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo2.scm 92 */
							BgL_appz00_bglt BgL_res5454z00_2604;

							{	/* Cfa/cinfo2.scm 92 */
								BgL_appz00_bglt BgL_new2267z00_2591;

								BgL_new2267z00_2591 =
									(BgL_appz00_bglt)
									(BGl_z52thezd2makezd2structzd2appzd2nilz52zzcfa_info2z00);
								{	/* Cfa/cinfo2.scm 92 */
									obj_t BgL_loc2261z00_2598;

									BgL_typez00_bglt BgL_type2262z00_2599;

									obj_t BgL_sidezd2effectzf32263z21_2600;

									obj_t BgL_key2264z00_2601;

									BgL_varz00_bglt BgL_fun2265z00_2602;

									obj_t BgL_args2266z00_2603;

									BgL_loc2261z00_2598 = BUNSPEC;
									BgL_type2262z00_2599 = BgL_arg5063z00_1376;
									BgL_sidezd2effectzf32263z21_2600 = BUNSPEC;
									BgL_key2264z00_2601 = BUNSPEC;
									BgL_fun2265z00_2602 = BgL_arg5064z00_1377;
									BgL_args2266z00_2603 = BUNSPEC;
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2591))->BgL_locz00) =
										((obj_t) BgL_loc2261z00_2598), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2591))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2262z00_2599), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2591))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32263z21_2600), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2591))->BgL_keyz00) =
										((obj_t) BgL_key2264z00_2601), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2591))->BgL_funz00) =
										((BgL_varz00_bglt) BgL_fun2265z00_2602), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2591))->
											BgL_argsz00) = ((obj_t) BgL_args2266z00_2603), BUNSPEC);
									BgL_res5454z00_2604 = BgL_new2267z00_2591;
							}} BgL_res5454z00_2604;
					}}
					{	/* Cfa/cinfo2.scm 92 */
						long BgL_arg5065z00_1378;

						BgL_arg5065z00_1378 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_makezd2structzd2appz00zzcfa_info2z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2makezd2structzd2appzd2nilz52zzcfa_info2z00),
							BgL_arg5065z00_1378);
					}
					{	/* Cfa/cinfo2.scm 92 */
						BgL_makezd2structzd2appz00_bglt BgL_arg5066z00_1379;

						{	/* Cfa/cinfo2.scm 92 */
							BgL_approxz00_bglt BgL_arg5067z00_1380;

							BgL_approxz00_bglt BgL_arg5068z00_1381;

							BgL_variablez00_bglt BgL_arg5070z00_1383;

							BgL_arg5067z00_1380 = BGl_approxzd2nilzd2zzcfa_infoz00();
							BgL_arg5068z00_1381 = BGl_approxzd2nilzd2zzcfa_infoz00();
							BgL_arg5070z00_1383 = BGl_variablezd2nilzd2zzast_varz00();
							{	/* Cfa/cinfo2.scm 92 */
								BgL_makezd2structzd2appz00_bglt BgL_res5456z00_2625;

								{	/* Cfa/cinfo2.scm 92 */
									BgL_makezd2structzd2appz00_bglt BgL_new4727z00_2612;

									BgL_new4727z00_2612 =
										((BgL_makezd2structzd2appz00_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_makezd2structzd2appz00_bgl))));
									{	/* Cfa/cinfo2.scm 92 */
										BgL_makezd2structzd2appz00_bglt BgL_res5455z00_2624;

										{	/* Cfa/cinfo2.scm 92 */
											BgL_makezd2structzd2appz00_bglt BgL_new4747z00_2613;

											BgL_new4747z00_2613 = BgL_new4727z00_2612;
											{	/* Cfa/cinfo2.scm 92 */
												BgL_approxz00_bglt BgL_approx4742z00_2619;

												BgL_approxz00_bglt BgL_valuezd2approx4743zd2_2620;

												long BgL_lostzd2stamp4744zd2_2621;

												BgL_variablez00_bglt BgL_owner4745z00_2622;

												obj_t BgL_stackzd2stamp4746zd2_2623;

												BgL_approx4742z00_2619 = BgL_arg5067z00_1380;
												BgL_valuezd2approx4743zd2_2620 = BgL_arg5068z00_1381;
												BgL_lostzd2stamp4744zd2_2621 = ((long) 0);
												BgL_owner4745z00_2622 = BgL_arg5070z00_1383;
												BgL_stackzd2stamp4746zd2_2623 = BUNSPEC;
												((((BgL_makezd2structzd2appz00_bglt)
															CREF(BgL_new4747z00_2613))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4742z00_2619),
													BUNSPEC);
												((((BgL_makezd2structzd2appz00_bglt)
															CREF(BgL_new4747z00_2613))->
														BgL_valuezd2approxzd2) =
													((BgL_approxz00_bglt) BgL_valuezd2approx4743zd2_2620),
													BUNSPEC);
												((((BgL_makezd2structzd2appz00_bglt)
															CREF(BgL_new4747z00_2613))->BgL_lostzd2stampzd2) =
													((long) BgL_lostzd2stamp4744zd2_2621), BUNSPEC);
												((((BgL_makezd2structzd2appz00_bglt)
															CREF(BgL_new4747z00_2613))->BgL_ownerz00) =
													((BgL_variablez00_bglt) BgL_owner4745z00_2622),
													BUNSPEC);
												((((BgL_makezd2structzd2appz00_bglt)
															CREF(BgL_new4747z00_2613))->
														BgL_stackzd2stampzd2) =
													((obj_t) BgL_stackzd2stamp4746zd2_2623), BUNSPEC);
												BgL_res5455z00_2624 = BgL_new4747z00_2613;
										}} BgL_res5455z00_2624;
									}
									BgL_res5456z00_2625 = BgL_new4727z00_2612;
								}
								BgL_arg5066z00_1379 = BgL_res5456z00_2625;
						}}
						{	/* Cfa/cinfo2.scm 92 */
							obj_t BgL_auxz00_4943;

							BgL_objectz00_bglt BgL_auxz00_4941;

							BgL_auxz00_4943 = (obj_t) (BgL_arg5066z00_1379);
							BgL_auxz00_4941 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2makezd2structzd2appzd2nilz52zzcfa_info2z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4941, BgL_auxz00_4943);
				}}}
			else
				{	/* Cfa/cinfo2.scm 92 */
					BFALSE;
				}
			return
				(BgL_makezd2structzd2appz00_bglt)
				(BGl_z52thezd2makezd2structzd2appzd2nilz52zzcfa_info2z00);
		}
	}



/* _make-struct-app-nil */
	obj_t BGl__makezd2structzd2appzd2nilzd2zzcfa_info2z00(obj_t BgL_envz00_3990)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 92 */
			return (obj_t) (BGl_makezd2structzd2appzd2nilzd2zzcfa_info2z00());
		}
	}



/* pre-struct-set!-app? */
	BGL_EXPORTED_DEF bool_t
		BGl_prezd2structzd2setz12zd2appzf3z33zzcfa_info2z00(obj_t BgL_obj4704z00_68)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 90 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4704z00_68,
				BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00);
		}
	}



/* _pre-struct-set!-app? */
	obj_t BGl__prezd2structzd2setz12zd2appzf3z33zzcfa_info2z00(obj_t
		BgL_envz00_3987, obj_t BgL_obj4704z00_3988)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 90 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4704z00_3988,
					BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00));
		}
	}



/* widening-pre-struct-set!-app */
	BGL_EXPORTED_DEF BgL_prezd2structzd2setz12zd2appzc0_bglt
		BGl_wideningzd2prezd2structzd2setz12zd2appz12zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 90 */
			{	/* Cfa/cinfo2.scm 90 */
				BgL_prezd2structzd2setz12zd2appzc0_bglt BgL_new4685z00_1384;

				BgL_new4685z00_1384 =
					((BgL_prezd2structzd2setz12zd2appzc0_bglt)
					BREF(GC_MALLOC(sizeof(struct
								BgL_prezd2structzd2setz12zd2appzc0_bgl))));
				return BgL_new4685z00_1384;
			}
		}
	}



/* _widening-pre-struct-set!-app */
	obj_t BGl__wideningzd2prezd2structzd2setz12zd2appz12zzcfa_info2z00(obj_t
		BgL_envz00_4052)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 90 */
			return
				(obj_t) (BGl_wideningzd2prezd2structzd2setz12zd2appz12zzcfa_info2z00());
		}
	}



/* make-pre-struct-set!-app */
	BGL_EXPORTED_DEF BgL_prezd2structzd2setz12zd2appzc0_bglt
		BGl_makezd2prezd2structzd2setz12zd2appz12zzcfa_info2z00(obj_t
		BgL_loc4687z00_72, BgL_typez00_bglt BgL_type4688z00_73,
		obj_t BgL_sidezd2effectzf34689z21_74, obj_t BgL_key4690z00_75,
		BgL_varz00_bglt BgL_fun4691z00_76, obj_t BgL_args4692z00_77)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 90 */
			{	/* Cfa/cinfo2.scm 90 */
				BgL_appz00_bglt BgL_aux4693z00_2627;

				BgL_aux4693z00_2627 =
					BGl_makezd2appzd2zzast_nodez00(BgL_loc4687z00_72, BgL_type4688z00_73,
					BgL_sidezd2effectzf34689z21_74, BgL_key4690z00_75, BgL_fun4691z00_76,
					BgL_args4692z00_77);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4693z00_2627),
					BGl_classzd2numzd2zz__objectz00
					(BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 90 */
					BgL_prezd2structzd2setz12zd2appzc0_bglt BgL_arg5072z00_2629;

					BgL_arg5072z00_2629 =
						BGl_wideningzd2prezd2structzd2setz12zd2appz12zzcfa_info2z00();
					{	/* Cfa/cinfo2.scm 90 */
						obj_t BgL_auxz00_4962;

						BgL_objectz00_bglt BgL_auxz00_4960;

						BgL_auxz00_4962 = (obj_t) (BgL_arg5072z00_2629);
						BgL_auxz00_4960 = (BgL_objectz00_bglt) (BgL_aux4693z00_2627);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_4960, BgL_auxz00_4962);
					}
				}
				return
					((BgL_prezd2structzd2setz12zd2appzc0_bglt)
					(BgL_prezd2structzd2setz12zd2appzc0_bglt) (BgL_aux4693z00_2627));
			}
		}
	}



/* _make-pre-struct-set!-app */
	obj_t BGl__makezd2prezd2structzd2setz12zd2appz12zzcfa_info2z00(obj_t
		BgL_envz00_4053, obj_t BgL_loc4687z00_4054, obj_t BgL_type4688z00_4055,
		obj_t BgL_sidezd2effectzf34689z21_4056, obj_t BgL_key4690z00_4057,
		obj_t BgL_fun4691z00_4058, obj_t BgL_args4692z00_4059)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 90 */
			return
				(obj_t) (BGl_makezd2prezd2structzd2setz12zd2appz12zzcfa_info2z00
				(BgL_loc4687z00_4054, (BgL_typez00_bglt) (BgL_type4688z00_4055),
					BgL_sidezd2effectzf34689z21_4056, BgL_key4690z00_4057,
					(BgL_varz00_bglt) (BgL_fun4691z00_4058), BgL_args4692z00_4059));
		}
	}



/* fill-pre-struct-set!-app! */
	BGL_EXPORTED_DEF BgL_prezd2structzd2setz12zd2appzc0_bglt
		BGl_fillzd2prezd2structzd2setz12zd2appz12z00zzcfa_info2z00
		(BgL_prezd2structzd2setz12zd2appzc0_bglt BgL_new4695z00_78)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 90 */
			{	/* Cfa/cinfo2.scm 90 */

				return BgL_new4695z00_78;
			}
		}
	}



/* _fill-pre-struct-set!-app! */
	obj_t BGl__fillzd2prezd2structzd2setz12zd2appz12z00zzcfa_info2z00(obj_t
		BgL_envz00_4060, obj_t BgL_new4695z00_4061)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 90 */
			{	/* Cfa/cinfo2.scm 90 */
				BgL_prezd2structzd2setz12zd2appzc0_bglt BgL_auxz00_4971;

				{	/* Cfa/cinfo2.scm 90 */

					BgL_auxz00_4971 =
						(BgL_prezd2structzd2setz12zd2appzc0_bglt) (BgL_new4695z00_4061);
				}
				return (obj_t) (BgL_auxz00_4971);
			}
		}
	}



/* %allocate-pre-struct-set!-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_z52allocatezd2prezd2structzd2setz12zd2appz40zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 90 */
			{	/* Cfa/cinfo2.scm 90 */
				BgL_appz00_bglt BgL_new4697z00_4422;

				BgL_new4697z00_4422 =
					((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_appz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new4697z00_4422),
					BGl_classzd2numzd2zz__objectz00
					(BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 90 */
					BgL_objectz00_bglt BgL_auxz00_4978;

					BgL_auxz00_4978 = (BgL_objectz00_bglt) (BgL_new4697z00_4422);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4978, BFALSE);
				}
				return BgL_new4697z00_4422;
			}
		}
	}



/* _%allocate-pre-struct-set!-app */
	obj_t BGl__z52allocatezd2prezd2structzd2setz12zd2appz40zzcfa_info2z00(obj_t
		BgL_envz00_3985)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 90 */
			{	/* Cfa/cinfo2.scm 90 */
				BgL_appz00_bglt BgL_auxz00_4981;

				{	/* Cfa/cinfo2.scm 90 */
					BgL_appz00_bglt BgL_res5617z00_4426;

					{	/* Cfa/cinfo2.scm 90 */
						BgL_appz00_bglt BgL_new4697z00_4424;

						BgL_new4697z00_4424 =
							((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_appz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4697z00_4424),
							BGl_classzd2numzd2zz__objectz00
							(BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00));
						{	/* Cfa/cinfo2.scm 90 */
							BgL_objectz00_bglt BgL_auxz00_4986;

							BgL_auxz00_4986 = (BgL_objectz00_bglt) (BgL_new4697z00_4424);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4986, BFALSE);
						}
						BgL_res5617z00_4426 = BgL_new4697z00_4424;
					}
					BgL_auxz00_4981 = BgL_res5617z00_4426;
				}
				return (obj_t) (BgL_auxz00_4981);
			}
		}
	}



/* pre-struct-set!-app-nil */
	BGL_EXPORTED_DEF BgL_prezd2structzd2setz12zd2appzc0_bglt
		BGl_prezd2structzd2setz12zd2appzd2nilz12zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 90 */
			if (
				(BGl_z52thezd2prezd2structzd2setz12zd2appzd2nilz92zzcfa_info2z00 ==
					BUNSPEC))
				{	/* Cfa/cinfo2.scm 90 */
					{	/* Cfa/cinfo2.scm 90 */
						BgL_appz00_bglt BgL_res5457z00_2641;

						{	/* Cfa/cinfo2.scm 90 */
							BgL_appz00_bglt BgL_new2275z00_2637;

							BgL_new2275z00_2637 =
								((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2275z00_2637),
								BGl_classzd2numzd2zz__objectz00(BGl_appz00zzast_nodez00));
							{	/* Cfa/cinfo2.scm 90 */
								BgL_objectz00_bglt BgL_auxz00_4996;

								BgL_auxz00_4996 = (BgL_objectz00_bglt) (BgL_new2275z00_2637);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4996, BFALSE);
							}
							BgL_res5457z00_2641 = BgL_new2275z00_2637;
						}
						BGl_z52thezd2prezd2structzd2setz12zd2appzd2nilz92zzcfa_info2z00 =
							(obj_t) (BgL_res5457z00_2641);
					}
					{	/* Cfa/cinfo2.scm 90 */
						BgL_typez00_bglt BgL_arg5075z00_1392;

						BgL_varz00_bglt BgL_arg5076z00_1393;

						BgL_arg5075z00_1392 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg5076z00_1393 = BGl_varzd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo2.scm 90 */
							BgL_appz00_bglt BgL_res5458z00_2655;

							{	/* Cfa/cinfo2.scm 90 */
								BgL_appz00_bglt BgL_new2267z00_2642;

								BgL_new2267z00_2642 =
									(BgL_appz00_bglt)
									(BGl_z52thezd2prezd2structzd2setz12zd2appzd2nilz92zzcfa_info2z00);
								{	/* Cfa/cinfo2.scm 90 */
									obj_t BgL_loc2261z00_2649;

									BgL_typez00_bglt BgL_type2262z00_2650;

									obj_t BgL_sidezd2effectzf32263z21_2651;

									obj_t BgL_key2264z00_2652;

									BgL_varz00_bglt BgL_fun2265z00_2653;

									obj_t BgL_args2266z00_2654;

									BgL_loc2261z00_2649 = BUNSPEC;
									BgL_type2262z00_2650 = BgL_arg5075z00_1392;
									BgL_sidezd2effectzf32263z21_2651 = BUNSPEC;
									BgL_key2264z00_2652 = BUNSPEC;
									BgL_fun2265z00_2653 = BgL_arg5076z00_1393;
									BgL_args2266z00_2654 = BUNSPEC;
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2642))->BgL_locz00) =
										((obj_t) BgL_loc2261z00_2649), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2642))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2262z00_2650), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2642))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32263z21_2651), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2642))->BgL_keyz00) =
										((obj_t) BgL_key2264z00_2652), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2642))->BgL_funz00) =
										((BgL_varz00_bglt) BgL_fun2265z00_2653), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2642))->
											BgL_argsz00) = ((obj_t) BgL_args2266z00_2654), BUNSPEC);
									BgL_res5458z00_2655 = BgL_new2267z00_2642;
							}} BgL_res5458z00_2655;
					}}
					{	/* Cfa/cinfo2.scm 90 */
						long BgL_arg5077z00_1394;

						BgL_arg5077z00_1394 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2prezd2structzd2setz12zd2appzd2nilz92zzcfa_info2z00),
							BgL_arg5077z00_1394);
					}
					{	/* Cfa/cinfo2.scm 90 */
						BgL_prezd2structzd2setz12zd2appzc0_bglt BgL_arg5078z00_1395;

						BgL_arg5078z00_1395 =
							BGl_wideningzd2prezd2structzd2setz12zd2appz12zzcfa_info2z00();
						{	/* Cfa/cinfo2.scm 90 */
							obj_t BgL_auxz00_5015;

							BgL_objectz00_bglt BgL_auxz00_5013;

							BgL_auxz00_5015 = (obj_t) (BgL_arg5078z00_1395);
							BgL_auxz00_5013 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2prezd2structzd2setz12zd2appzd2nilz92zzcfa_info2z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5013, BgL_auxz00_5015);
				}}}
			else
				{	/* Cfa/cinfo2.scm 90 */
					BFALSE;
				}
			return
				(BgL_prezd2structzd2setz12zd2appzc0_bglt)
				(BGl_z52thezd2prezd2structzd2setz12zd2appzd2nilz92zzcfa_info2z00);
		}
	}



/* _pre-struct-set!-app-nil */
	obj_t BGl__prezd2structzd2setz12zd2appzd2nilz12zzcfa_info2z00(obj_t
		BgL_envz00_3986)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 90 */
			return (obj_t) (BGl_prezd2structzd2setz12zd2appzd2nilz12zzcfa_info2z00());
		}
	}



/* pre-struct-ref-app? */
	BGL_EXPORTED_DEF bool_t BGl_prezd2structzd2refzd2appzf3z21zzcfa_info2z00(obj_t
		BgL_obj4667z00_79)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 89 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4667z00_79,
				BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00);
		}
	}



/* _pre-struct-ref-app? */
	obj_t BGl__prezd2structzd2refzd2appzf3z21zzcfa_info2z00(obj_t BgL_envz00_3983,
		obj_t BgL_obj4667z00_3984)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 89 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4667z00_3984,
					BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00));
		}
	}



/* widening-pre-struct-ref-app */
	BGL_EXPORTED_DEF BgL_prezd2structzd2refzd2appzd2_bglt
		BGl_wideningzd2prezd2structzd2refzd2appz00zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 89 */
			{	/* Cfa/cinfo2.scm 89 */
				BgL_prezd2structzd2refzd2appzd2_bglt BgL_new4648z00_1396;

				BgL_new4648z00_1396 =
					((BgL_prezd2structzd2refzd2appzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_prezd2structzd2refzd2appzd2_bgl))));
				return BgL_new4648z00_1396;
			}
		}
	}



/* _widening-pre-struct-ref-app */
	obj_t BGl__wideningzd2prezd2structzd2refzd2appz00zzcfa_info2z00(obj_t
		BgL_envz00_4062)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 89 */
			return
				(obj_t) (BGl_wideningzd2prezd2structzd2refzd2appz00zzcfa_info2z00());
		}
	}



/* make-pre-struct-ref-app */
	BGL_EXPORTED_DEF BgL_prezd2structzd2refzd2appzd2_bglt
		BGl_makezd2prezd2structzd2refzd2appz00zzcfa_info2z00(obj_t
		BgL_loc4650z00_83, BgL_typez00_bglt BgL_type4651z00_84,
		obj_t BgL_sidezd2effectzf34652z21_85, obj_t BgL_key4653z00_86,
		BgL_varz00_bglt BgL_fun4654z00_87, obj_t BgL_args4655z00_88)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 89 */
			{	/* Cfa/cinfo2.scm 89 */
				BgL_appz00_bglt BgL_aux4656z00_2659;

				BgL_aux4656z00_2659 =
					BGl_makezd2appzd2zzast_nodez00(BgL_loc4650z00_83, BgL_type4651z00_84,
					BgL_sidezd2effectzf34652z21_85, BgL_key4653z00_86, BgL_fun4654z00_87,
					BgL_args4655z00_88);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4656z00_2659),
					BGl_classzd2numzd2zz__objectz00
					(BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 89 */
					BgL_prezd2structzd2refzd2appzd2_bglt BgL_arg5080z00_2661;

					BgL_arg5080z00_2661 =
						BGl_wideningzd2prezd2structzd2refzd2appz00zzcfa_info2z00();
					{	/* Cfa/cinfo2.scm 89 */
						obj_t BgL_auxz00_5034;

						BgL_objectz00_bglt BgL_auxz00_5032;

						BgL_auxz00_5034 = (obj_t) (BgL_arg5080z00_2661);
						BgL_auxz00_5032 = (BgL_objectz00_bglt) (BgL_aux4656z00_2659);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_5032, BgL_auxz00_5034);
					}
				}
				return
					((BgL_prezd2structzd2refzd2appzd2_bglt)
					(BgL_prezd2structzd2refzd2appzd2_bglt) (BgL_aux4656z00_2659));
			}
		}
	}



/* _make-pre-struct-ref-app */
	obj_t BGl__makezd2prezd2structzd2refzd2appz00zzcfa_info2z00(obj_t
		BgL_envz00_4063, obj_t BgL_loc4650z00_4064, obj_t BgL_type4651z00_4065,
		obj_t BgL_sidezd2effectzf34652z21_4066, obj_t BgL_key4653z00_4067,
		obj_t BgL_fun4654z00_4068, obj_t BgL_args4655z00_4069)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 89 */
			return
				(obj_t) (BGl_makezd2prezd2structzd2refzd2appz00zzcfa_info2z00
				(BgL_loc4650z00_4064, (BgL_typez00_bglt) (BgL_type4651z00_4065),
					BgL_sidezd2effectzf34652z21_4066, BgL_key4653z00_4067,
					(BgL_varz00_bglt) (BgL_fun4654z00_4068), BgL_args4655z00_4069));
		}
	}



/* fill-pre-struct-ref-app! */
	BGL_EXPORTED_DEF BgL_prezd2structzd2refzd2appzd2_bglt
		BGl_fillzd2prezd2structzd2refzd2appz12z12zzcfa_info2z00
		(BgL_prezd2structzd2refzd2appzd2_bglt BgL_new4658z00_89)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 89 */
			{	/* Cfa/cinfo2.scm 89 */

				return BgL_new4658z00_89;
			}
		}
	}



/* _fill-pre-struct-ref-app! */
	obj_t BGl__fillzd2prezd2structzd2refzd2appz12z12zzcfa_info2z00(obj_t
		BgL_envz00_4070, obj_t BgL_new4658z00_4071)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 89 */
			{	/* Cfa/cinfo2.scm 89 */
				BgL_prezd2structzd2refzd2appzd2_bglt BgL_auxz00_5043;

				{	/* Cfa/cinfo2.scm 89 */

					BgL_auxz00_5043 =
						(BgL_prezd2structzd2refzd2appzd2_bglt) (BgL_new4658z00_4071);
				}
				return (obj_t) (BgL_auxz00_5043);
			}
		}
	}



/* %allocate-pre-struct-ref-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_z52allocatezd2prezd2structzd2refzd2appz52zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 89 */
			{	/* Cfa/cinfo2.scm 89 */
				BgL_appz00_bglt BgL_new4660z00_4429;

				BgL_new4660z00_4429 =
					((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_appz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new4660z00_4429),
					BGl_classzd2numzd2zz__objectz00
					(BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 89 */
					BgL_objectz00_bglt BgL_auxz00_5050;

					BgL_auxz00_5050 = (BgL_objectz00_bglt) (BgL_new4660z00_4429);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5050, BFALSE);
				}
				return BgL_new4660z00_4429;
			}
		}
	}



/* _%allocate-pre-struct-ref-app */
	obj_t BGl__z52allocatezd2prezd2structzd2refzd2appz52zzcfa_info2z00(obj_t
		BgL_envz00_3981)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 89 */
			{	/* Cfa/cinfo2.scm 89 */
				BgL_appz00_bglt BgL_auxz00_5053;

				{	/* Cfa/cinfo2.scm 89 */
					BgL_appz00_bglt BgL_res5618z00_4433;

					{	/* Cfa/cinfo2.scm 89 */
						BgL_appz00_bglt BgL_new4660z00_4431;

						BgL_new4660z00_4431 =
							((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_appz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4660z00_4431),
							BGl_classzd2numzd2zz__objectz00
							(BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00));
						{	/* Cfa/cinfo2.scm 89 */
							BgL_objectz00_bglt BgL_auxz00_5058;

							BgL_auxz00_5058 = (BgL_objectz00_bglt) (BgL_new4660z00_4431);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5058, BFALSE);
						}
						BgL_res5618z00_4433 = BgL_new4660z00_4431;
					}
					BgL_auxz00_5053 = BgL_res5618z00_4433;
				}
				return (obj_t) (BgL_auxz00_5053);
			}
		}
	}



/* pre-struct-ref-app-nil */
	BGL_EXPORTED_DEF BgL_prezd2structzd2refzd2appzd2_bglt
		BGl_prezd2structzd2refzd2appzd2nilz00zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 89 */
			if (
				(BGl_z52thezd2prezd2structzd2refzd2appzd2nilz80zzcfa_info2z00 ==
					BUNSPEC))
				{	/* Cfa/cinfo2.scm 89 */
					{	/* Cfa/cinfo2.scm 89 */
						BgL_appz00_bglt BgL_res5459z00_2673;

						{	/* Cfa/cinfo2.scm 89 */
							BgL_appz00_bglt BgL_new2275z00_2669;

							BgL_new2275z00_2669 =
								((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2275z00_2669),
								BGl_classzd2numzd2zz__objectz00(BGl_appz00zzast_nodez00));
							{	/* Cfa/cinfo2.scm 89 */
								BgL_objectz00_bglt BgL_auxz00_5068;

								BgL_auxz00_5068 = (BgL_objectz00_bglt) (BgL_new2275z00_2669);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5068, BFALSE);
							}
							BgL_res5459z00_2673 = BgL_new2275z00_2669;
						}
						BGl_z52thezd2prezd2structzd2refzd2appzd2nilz80zzcfa_info2z00 =
							(obj_t) (BgL_res5459z00_2673);
					}
					{	/* Cfa/cinfo2.scm 89 */
						BgL_typez00_bglt BgL_arg5083z00_1404;

						BgL_varz00_bglt BgL_arg5084z00_1405;

						BgL_arg5083z00_1404 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg5084z00_1405 = BGl_varzd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo2.scm 89 */
							BgL_appz00_bglt BgL_res5460z00_2687;

							{	/* Cfa/cinfo2.scm 89 */
								BgL_appz00_bglt BgL_new2267z00_2674;

								BgL_new2267z00_2674 =
									(BgL_appz00_bglt)
									(BGl_z52thezd2prezd2structzd2refzd2appzd2nilz80zzcfa_info2z00);
								{	/* Cfa/cinfo2.scm 89 */
									obj_t BgL_loc2261z00_2681;

									BgL_typez00_bglt BgL_type2262z00_2682;

									obj_t BgL_sidezd2effectzf32263z21_2683;

									obj_t BgL_key2264z00_2684;

									BgL_varz00_bglt BgL_fun2265z00_2685;

									obj_t BgL_args2266z00_2686;

									BgL_loc2261z00_2681 = BUNSPEC;
									BgL_type2262z00_2682 = BgL_arg5083z00_1404;
									BgL_sidezd2effectzf32263z21_2683 = BUNSPEC;
									BgL_key2264z00_2684 = BUNSPEC;
									BgL_fun2265z00_2685 = BgL_arg5084z00_1405;
									BgL_args2266z00_2686 = BUNSPEC;
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2674))->BgL_locz00) =
										((obj_t) BgL_loc2261z00_2681), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2674))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2262z00_2682), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2674))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32263z21_2683), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2674))->BgL_keyz00) =
										((obj_t) BgL_key2264z00_2684), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2674))->BgL_funz00) =
										((BgL_varz00_bglt) BgL_fun2265z00_2685), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2674))->
											BgL_argsz00) = ((obj_t) BgL_args2266z00_2686), BUNSPEC);
									BgL_res5460z00_2687 = BgL_new2267z00_2674;
							}} BgL_res5460z00_2687;
					}}
					{	/* Cfa/cinfo2.scm 89 */
						long BgL_arg5085z00_1406;

						BgL_arg5085z00_1406 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2prezd2structzd2refzd2appzd2nilz80zzcfa_info2z00),
							BgL_arg5085z00_1406);
					}
					{	/* Cfa/cinfo2.scm 89 */
						BgL_prezd2structzd2refzd2appzd2_bglt BgL_arg5086z00_1407;

						BgL_arg5086z00_1407 =
							BGl_wideningzd2prezd2structzd2refzd2appz00zzcfa_info2z00();
						{	/* Cfa/cinfo2.scm 89 */
							obj_t BgL_auxz00_5087;

							BgL_objectz00_bglt BgL_auxz00_5085;

							BgL_auxz00_5087 = (obj_t) (BgL_arg5086z00_1407);
							BgL_auxz00_5085 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2prezd2structzd2refzd2appzd2nilz80zzcfa_info2z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5085, BgL_auxz00_5087);
				}}}
			else
				{	/* Cfa/cinfo2.scm 89 */
					BFALSE;
				}
			return
				(BgL_prezd2structzd2refzd2appzd2_bglt)
				(BGl_z52thezd2prezd2structzd2refzd2appzd2nilz80zzcfa_info2z00);
		}
	}



/* _pre-struct-ref-app-nil */
	obj_t BGl__prezd2structzd2refzd2appzd2nilz00zzcfa_info2z00(obj_t
		BgL_envz00_3982)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 89 */
			return (obj_t) (BGl_prezd2structzd2refzd2appzd2nilz00zzcfa_info2z00());
		}
	}



/* pre-make-struct-app? */
	BGL_EXPORTED_DEF bool_t
		BGl_prezd2makezd2structzd2appzf3z21zzcfa_info2z00(obj_t BgL_obj4629z00_90)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 86 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4629z00_90,
				BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00);
		}
	}



/* _pre-make-struct-app? */
	obj_t BGl__prezd2makezd2structzd2appzf3z21zzcfa_info2z00(obj_t
		BgL_envz00_3979, obj_t BgL_obj4629z00_3980)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 86 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4629z00_3980,
					BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00));
		}
	}



/* widening-pre-make-struct-app */
	BGL_EXPORTED_DEF BgL_prezd2makezd2structzd2appzd2_bglt
		BGl_wideningzd2prezd2makezd2structzd2appz00zzcfa_info2z00
		(BgL_variablez00_bglt BgL_owner4606z00_94)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 86 */
			{	/* Cfa/cinfo2.scm 86 */
				BgL_prezd2makezd2structzd2appzd2_bglt BgL_new4607z00_2690;

				BgL_new4607z00_2690 =
					((BgL_prezd2makezd2structzd2appzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_prezd2makezd2structzd2appzd2_bgl))));
				{	/* Cfa/cinfo2.scm 86 */
					BgL_prezd2makezd2structzd2appzd2_bglt BgL_res5461z00_2694;

					{	/* Cfa/cinfo2.scm 86 */
						BgL_prezd2makezd2structzd2appzd2_bglt BgL_new4619z00_2691;

						BgL_new4619z00_2691 = BgL_new4607z00_2690;
						{	/* Cfa/cinfo2.scm 86 */
							BgL_variablez00_bglt BgL_owner4618z00_2693;

							BgL_owner4618z00_2693 = BgL_owner4606z00_94;
							((((BgL_prezd2makezd2structzd2appzd2_bglt)
										CREF(BgL_new4619z00_2691))->BgL_ownerz00) =
								((BgL_variablez00_bglt) BgL_owner4618z00_2693), BUNSPEC);
							BgL_res5461z00_2694 = BgL_new4619z00_2691;
					}} BgL_res5461z00_2694;
				}
				return BgL_new4607z00_2690;
			}
		}
	}



/* _widening-pre-make-struct-app */
	obj_t BGl__wideningzd2prezd2makezd2structzd2appz00zzcfa_info2z00(obj_t
		BgL_envz00_4072, obj_t BgL_owner4606z00_4073)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 86 */
			return
				(obj_t) (BGl_wideningzd2prezd2makezd2structzd2appz00zzcfa_info2z00(
					(BgL_variablez00_bglt) (BgL_owner4606z00_4073)));
		}
	}



/* make-pre-make-struct-app */
	BGL_EXPORTED_DEF BgL_prezd2makezd2structzd2appzd2_bglt
		BGl_makezd2prezd2makezd2structzd2appz00zzcfa_info2z00(obj_t
		BgL_loc4610z00_95, BgL_typez00_bglt BgL_type4611z00_96,
		obj_t BgL_sidezd2effectzf34612z21_97, obj_t BgL_key4613z00_98,
		BgL_varz00_bglt BgL_fun4614z00_99, obj_t BgL_args4615z00_100,
		BgL_variablez00_bglt BgL_owner4609z00_101)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 86 */
			{	/* Cfa/cinfo2.scm 86 */
				BgL_appz00_bglt BgL_aux4616z00_2695;

				BgL_aux4616z00_2695 =
					BGl_makezd2appzd2zzast_nodez00(BgL_loc4610z00_95, BgL_type4611z00_96,
					BgL_sidezd2effectzf34612z21_97, BgL_key4613z00_98, BgL_fun4614z00_99,
					BgL_args4615z00_100);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4616z00_2695),
					BGl_classzd2numzd2zz__objectz00
					(BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 86 */
					BgL_prezd2makezd2structzd2appzd2_bglt BgL_arg5088z00_2697;

					{	/* Cfa/cinfo2.scm 86 */
						BgL_prezd2makezd2structzd2appzd2_bglt BgL_res5463z00_2707;

						{	/* Cfa/cinfo2.scm 86 */
							BgL_prezd2makezd2structzd2appzd2_bglt BgL_new4607z00_2702;

							BgL_new4607z00_2702 =
								((BgL_prezd2makezd2structzd2appzd2_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_prezd2makezd2structzd2appzd2_bgl))));
							{	/* Cfa/cinfo2.scm 86 */
								BgL_prezd2makezd2structzd2appzd2_bglt BgL_res5462z00_2706;

								{	/* Cfa/cinfo2.scm 86 */
									BgL_prezd2makezd2structzd2appzd2_bglt BgL_new4619z00_2703;

									BgL_new4619z00_2703 = BgL_new4607z00_2702;
									{	/* Cfa/cinfo2.scm 86 */
										BgL_variablez00_bglt BgL_owner4618z00_2705;

										BgL_owner4618z00_2705 = BgL_owner4609z00_101;
										((((BgL_prezd2makezd2structzd2appzd2_bglt)
													CREF(BgL_new4619z00_2703))->BgL_ownerz00) =
											((BgL_variablez00_bglt) BgL_owner4618z00_2705), BUNSPEC);
										BgL_res5462z00_2706 = BgL_new4619z00_2703;
								}} BgL_res5462z00_2706;
							}
							BgL_res5463z00_2707 = BgL_new4607z00_2702;
						}
						BgL_arg5088z00_2697 = BgL_res5463z00_2707;
					}
					{	/* Cfa/cinfo2.scm 86 */
						obj_t BgL_auxz00_5109;

						BgL_objectz00_bglt BgL_auxz00_5107;

						BgL_auxz00_5109 = (obj_t) (BgL_arg5088z00_2697);
						BgL_auxz00_5107 = (BgL_objectz00_bglt) (BgL_aux4616z00_2695);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_5107, BgL_auxz00_5109);
				}}
				return
					((BgL_prezd2makezd2structzd2appzd2_bglt)
					(BgL_prezd2makezd2structzd2appzd2_bglt) (BgL_aux4616z00_2695));
			}
		}
	}



/* _make-pre-make-struct-app */
	obj_t BGl__makezd2prezd2makezd2structzd2appz00zzcfa_info2z00(obj_t
		BgL_envz00_4074, obj_t BgL_loc4610z00_4075, obj_t BgL_type4611z00_4076,
		obj_t BgL_sidezd2effectzf34612z21_4077, obj_t BgL_key4613z00_4078,
		obj_t BgL_fun4614z00_4079, obj_t BgL_args4615z00_4080,
		obj_t BgL_owner4609z00_4081)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 86 */
			return
				(obj_t) (BGl_makezd2prezd2makezd2structzd2appz00zzcfa_info2z00
				(BgL_loc4610z00_4075, (BgL_typez00_bglt) (BgL_type4611z00_4076),
					BgL_sidezd2effectzf34612z21_4077, BgL_key4613z00_4078,
					(BgL_varz00_bglt) (BgL_fun4614z00_4079), BgL_args4615z00_4080,
					(BgL_variablez00_bglt) (BgL_owner4609z00_4081)));
		}
	}



/* fill-pre-make-struct-app! */
	BGL_EXPORTED_DEF BgL_prezd2makezd2structzd2appzd2_bglt
		BGl_fillzd2prezd2makezd2structzd2appz12z12zzcfa_info2z00
		(BgL_prezd2makezd2structzd2appzd2_bglt BgL_new4619z00_102,
		BgL_variablez00_bglt BgL_owner4618z00_103)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 86 */
			{	/* Cfa/cinfo2.scm 86 */
				BgL_variablez00_bglt BgL_owner4618z00_4435;

				BgL_owner4618z00_4435 = BgL_owner4618z00_103;
				((((BgL_prezd2makezd2structzd2appzd2_bglt) CREF(BgL_new4619z00_102))->
						BgL_ownerz00) =
					((BgL_variablez00_bglt) BgL_owner4618z00_4435), BUNSPEC);
				return BgL_new4619z00_102;
			}
		}
	}



/* _fill-pre-make-struct-app! */
	obj_t BGl__fillzd2prezd2makezd2structzd2appz12z12zzcfa_info2z00(obj_t
		BgL_envz00_4082, obj_t BgL_new4619z00_4083, obj_t BgL_owner4618z00_4084)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 86 */
			{	/* Cfa/cinfo2.scm 86 */
				BgL_prezd2makezd2structzd2appzd2_bglt BgL_auxz00_5120;

				{	/* Cfa/cinfo2.scm 86 */
					BgL_prezd2makezd2structzd2appzd2_bglt BgL_res5619z00_4439;

					{	/* Cfa/cinfo2.scm 86 */
						BgL_prezd2makezd2structzd2appzd2_bglt BgL_new4619z00_4436;

						BgL_variablez00_bglt BgL_owner4618z00_4437;

						BgL_new4619z00_4436 =
							(BgL_prezd2makezd2structzd2appzd2_bglt) (BgL_new4619z00_4083);
						BgL_owner4618z00_4437 =
							(BgL_variablez00_bglt) (BgL_owner4618z00_4084);
						{	/* Cfa/cinfo2.scm 86 */
							BgL_variablez00_bglt BgL_owner4618z00_4438;

							BgL_owner4618z00_4438 = BgL_owner4618z00_4437;
							((((BgL_prezd2makezd2structzd2appzd2_bglt)
										CREF(BgL_new4619z00_4436))->BgL_ownerz00) =
								((BgL_variablez00_bglt) BgL_owner4618z00_4438), BUNSPEC);
							BgL_res5619z00_4439 = BgL_new4619z00_4436;
						}
					}
					BgL_auxz00_5120 = BgL_res5619z00_4439;
				}
				return (obj_t) (BgL_auxz00_5120);
			}
		}
	}



/* %allocate-pre-make-struct-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_z52allocatezd2prezd2makezd2structzd2appz52zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 86 */
			{	/* Cfa/cinfo2.scm 86 */
				BgL_appz00_bglt BgL_new4622z00_4440;

				BgL_new4622z00_4440 =
					((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_appz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new4622z00_4440),
					BGl_classzd2numzd2zz__objectz00
					(BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 86 */
					BgL_objectz00_bglt BgL_auxz00_5129;

					BgL_auxz00_5129 = (BgL_objectz00_bglt) (BgL_new4622z00_4440);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5129, BFALSE);
				}
				return BgL_new4622z00_4440;
			}
		}
	}



/* _%allocate-pre-make-struct-app */
	obj_t BGl__z52allocatezd2prezd2makezd2structzd2appz52zzcfa_info2z00(obj_t
		BgL_envz00_3977)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 86 */
			{	/* Cfa/cinfo2.scm 86 */
				BgL_appz00_bglt BgL_auxz00_5132;

				{	/* Cfa/cinfo2.scm 86 */
					BgL_appz00_bglt BgL_res5620z00_4444;

					{	/* Cfa/cinfo2.scm 86 */
						BgL_appz00_bglt BgL_new4622z00_4442;

						BgL_new4622z00_4442 =
							((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_appz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4622z00_4442),
							BGl_classzd2numzd2zz__objectz00
							(BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00));
						{	/* Cfa/cinfo2.scm 86 */
							BgL_objectz00_bglt BgL_auxz00_5137;

							BgL_auxz00_5137 = (BgL_objectz00_bglt) (BgL_new4622z00_4442);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5137, BFALSE);
						}
						BgL_res5620z00_4444 = BgL_new4622z00_4442;
					}
					BgL_auxz00_5132 = BgL_res5620z00_4444;
				}
				return (obj_t) (BgL_auxz00_5132);
			}
		}
	}



/* pre-make-struct-app-nil */
	BGL_EXPORTED_DEF BgL_prezd2makezd2structzd2appzd2_bglt
		BGl_prezd2makezd2structzd2appzd2nilz00zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 86 */
			if (
				(BGl_z52thezd2prezd2makezd2structzd2appzd2nilz80zzcfa_info2z00 ==
					BUNSPEC))
				{	/* Cfa/cinfo2.scm 86 */
					{	/* Cfa/cinfo2.scm 86 */
						BgL_appz00_bglt BgL_res5464z00_2717;

						{	/* Cfa/cinfo2.scm 86 */
							BgL_appz00_bglt BgL_new2275z00_2713;

							BgL_new2275z00_2713 =
								((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2275z00_2713),
								BGl_classzd2numzd2zz__objectz00(BGl_appz00zzast_nodez00));
							{	/* Cfa/cinfo2.scm 86 */
								BgL_objectz00_bglt BgL_auxz00_5147;

								BgL_auxz00_5147 = (BgL_objectz00_bglt) (BgL_new2275z00_2713);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5147, BFALSE);
							}
							BgL_res5464z00_2717 = BgL_new2275z00_2713;
						}
						BGl_z52thezd2prezd2makezd2structzd2appzd2nilz80zzcfa_info2z00 =
							(obj_t) (BgL_res5464z00_2717);
					}
					{	/* Cfa/cinfo2.scm 86 */
						BgL_typez00_bglt BgL_arg5091z00_1417;

						BgL_varz00_bglt BgL_arg5092z00_1418;

						BgL_arg5091z00_1417 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg5092z00_1418 = BGl_varzd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo2.scm 86 */
							BgL_appz00_bglt BgL_res5465z00_2731;

							{	/* Cfa/cinfo2.scm 86 */
								BgL_appz00_bglt BgL_new2267z00_2718;

								BgL_new2267z00_2718 =
									(BgL_appz00_bglt)
									(BGl_z52thezd2prezd2makezd2structzd2appzd2nilz80zzcfa_info2z00);
								{	/* Cfa/cinfo2.scm 86 */
									obj_t BgL_loc2261z00_2725;

									BgL_typez00_bglt BgL_type2262z00_2726;

									obj_t BgL_sidezd2effectzf32263z21_2727;

									obj_t BgL_key2264z00_2728;

									BgL_varz00_bglt BgL_fun2265z00_2729;

									obj_t BgL_args2266z00_2730;

									BgL_loc2261z00_2725 = BUNSPEC;
									BgL_type2262z00_2726 = BgL_arg5091z00_1417;
									BgL_sidezd2effectzf32263z21_2727 = BUNSPEC;
									BgL_key2264z00_2728 = BUNSPEC;
									BgL_fun2265z00_2729 = BgL_arg5092z00_1418;
									BgL_args2266z00_2730 = BUNSPEC;
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2718))->BgL_locz00) =
										((obj_t) BgL_loc2261z00_2725), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2718))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2262z00_2726), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2718))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32263z21_2727), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2718))->BgL_keyz00) =
										((obj_t) BgL_key2264z00_2728), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2718))->BgL_funz00) =
										((BgL_varz00_bglt) BgL_fun2265z00_2729), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2718))->
											BgL_argsz00) = ((obj_t) BgL_args2266z00_2730), BUNSPEC);
									BgL_res5465z00_2731 = BgL_new2267z00_2718;
							}} BgL_res5465z00_2731;
					}}
					{	/* Cfa/cinfo2.scm 86 */
						long BgL_arg5093z00_1419;

						BgL_arg5093z00_1419 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2prezd2makezd2structzd2appzd2nilz80zzcfa_info2z00),
							BgL_arg5093z00_1419);
					}
					{	/* Cfa/cinfo2.scm 86 */
						BgL_prezd2makezd2structzd2appzd2_bglt BgL_arg5094z00_1420;

						{	/* Cfa/cinfo2.scm 86 */
							BgL_variablez00_bglt BgL_arg5095z00_1421;

							BgL_arg5095z00_1421 = BGl_variablezd2nilzd2zzast_varz00();
							{	/* Cfa/cinfo2.scm 86 */
								BgL_prezd2makezd2structzd2appzd2_bglt BgL_res5467z00_2740;

								{	/* Cfa/cinfo2.scm 86 */
									BgL_prezd2makezd2structzd2appzd2_bglt BgL_new4607z00_2735;

									BgL_new4607z00_2735 =
										((BgL_prezd2makezd2structzd2appzd2_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_prezd2makezd2structzd2appzd2_bgl))));
									{	/* Cfa/cinfo2.scm 86 */
										BgL_prezd2makezd2structzd2appzd2_bglt BgL_res5466z00_2739;

										{	/* Cfa/cinfo2.scm 86 */
											BgL_prezd2makezd2structzd2appzd2_bglt BgL_new4619z00_2736;

											BgL_new4619z00_2736 = BgL_new4607z00_2735;
											{	/* Cfa/cinfo2.scm 86 */
												BgL_variablez00_bglt BgL_owner4618z00_2738;

												BgL_owner4618z00_2738 = BgL_arg5095z00_1421;
												((((BgL_prezd2makezd2structzd2appzd2_bglt)
															CREF(BgL_new4619z00_2736))->BgL_ownerz00) =
													((BgL_variablez00_bglt) BgL_owner4618z00_2738),
													BUNSPEC);
												BgL_res5466z00_2739 = BgL_new4619z00_2736;
										}} BgL_res5466z00_2739;
									}
									BgL_res5467z00_2740 = BgL_new4607z00_2735;
								}
								BgL_arg5094z00_1420 = BgL_res5467z00_2740;
						}}
						{	/* Cfa/cinfo2.scm 86 */
							obj_t BgL_auxz00_5168;

							BgL_objectz00_bglt BgL_auxz00_5166;

							BgL_auxz00_5168 = (obj_t) (BgL_arg5094z00_1420);
							BgL_auxz00_5166 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2prezd2makezd2structzd2appzd2nilz80zzcfa_info2z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5166, BgL_auxz00_5168);
				}}}
			else
				{	/* Cfa/cinfo2.scm 86 */
					BFALSE;
				}
			return
				(BgL_prezd2makezd2structzd2appzd2_bglt)
				(BGl_z52thezd2prezd2makezd2structzd2appzd2nilz80zzcfa_info2z00);
		}
	}



/* _pre-make-struct-app-nil */
	obj_t BGl__prezd2makezd2structzd2appzd2nilz00zzcfa_info2z00(obj_t
		BgL_envz00_3978)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 86 */
			return (obj_t) (BGl_prezd2makezd2structzd2appzd2nilz00zzcfa_info2z00());
		}
	}



/* make-vector-app? */
	BGL_EXPORTED_DEF bool_t BGl_makezd2vectorzd2appzf3zf3zzcfa_info2z00(obj_t
		BgL_obj4573z00_105)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 63 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4573z00_105,
				BGl_makezd2vectorzd2appz00zzcfa_info2z00);
		}
	}



/* _make-vector-app? */
	obj_t BGl__makezd2vectorzd2appzf3zf3zzcfa_info2z00(obj_t BgL_envz00_3975,
		obj_t BgL_obj4573z00_3976)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 63 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4573z00_3976,
					BGl_makezd2vectorzd2appz00zzcfa_info2z00));
		}
	}



/* widening-make-vector-app */
	BGL_EXPORTED_DEF BgL_makezd2vectorzd2appz00_bglt
		BGl_wideningzd2makezd2vectorzd2appzd2zzcfa_info2z00(BgL_approxz00_bglt
		BgL_approx4530z00_109, BgL_approxz00_bglt BgL_valuezd2approx4531zd2_110,
		long BgL_lostzd2stamp4532zd2_111, BgL_variablez00_bglt BgL_owner4533z00_112,
		obj_t BgL_stackzd2stamp4534zd2_113, bool_t BgL_seenzf34535zf3_114)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 63 */
			{	/* Cfa/cinfo2.scm 63 */
				BgL_makezd2vectorzd2appz00_bglt BgL_new4536z00_2741;

				BgL_new4536z00_2741 =
					((BgL_makezd2vectorzd2appz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_makezd2vectorzd2appz00_bgl))));
				{	/* Cfa/cinfo2.scm 63 */
					BgL_makezd2vectorzd2appz00_bglt BgL_res5468z00_2755;

					{	/* Cfa/cinfo2.scm 63 */
						BgL_makezd2vectorzd2appz00_bglt BgL_new4558z00_2742;

						BgL_new4558z00_2742 = BgL_new4536z00_2741;
						{	/* Cfa/cinfo2.scm 63 */
							BgL_approxz00_bglt BgL_approx4552z00_2749;

							BgL_approxz00_bglt BgL_valuezd2approx4553zd2_2750;

							long BgL_lostzd2stamp4554zd2_2751;

							BgL_variablez00_bglt BgL_owner4555z00_2752;

							obj_t BgL_stackzd2stamp4556zd2_2753;

							bool_t BgL_seenzf34557zf3_2754;

							BgL_approx4552z00_2749 = BgL_approx4530z00_109;
							BgL_valuezd2approx4553zd2_2750 = BgL_valuezd2approx4531zd2_110;
							BgL_lostzd2stamp4554zd2_2751 = BgL_lostzd2stamp4532zd2_111;
							BgL_owner4555z00_2752 = BgL_owner4533z00_112;
							BgL_stackzd2stamp4556zd2_2753 = BgL_stackzd2stamp4534zd2_113;
							BgL_seenzf34557zf3_2754 = BgL_seenzf34535zf3_114;
							((((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_new4558z00_2742))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4552z00_2749), BUNSPEC);
							((((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_new4558z00_2742))->
									BgL_valuezd2approxzd2) =
								((BgL_approxz00_bglt) BgL_valuezd2approx4553zd2_2750), BUNSPEC);
							((((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_new4558z00_2742))->
									BgL_lostzd2stampzd2) =
								((long) BgL_lostzd2stamp4554zd2_2751), BUNSPEC);
							((((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_new4558z00_2742))->
									BgL_ownerz00) =
								((BgL_variablez00_bglt) BgL_owner4555z00_2752), BUNSPEC);
							((((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_new4558z00_2742))->
									BgL_stackzd2stampzd2) =
								((obj_t) BgL_stackzd2stamp4556zd2_2753), BUNSPEC);
							((((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_new4558z00_2742))->
									BgL_seenzf3zf3) =
								((bool_t) BgL_seenzf34557zf3_2754), BUNSPEC);
							BgL_res5468z00_2755 = BgL_new4558z00_2742;
					}} BgL_res5468z00_2755;
				}
				return BgL_new4536z00_2741;
			}
		}
	}



/* _widening-make-vector-app */
	obj_t BGl__wideningzd2makezd2vectorzd2appzd2zzcfa_info2z00(obj_t
		BgL_envz00_4085, obj_t BgL_approx4530z00_4086,
		obj_t BgL_valuezd2approx4531zd2_4087, obj_t BgL_lostzd2stamp4532zd2_4088,
		obj_t BgL_owner4533z00_4089, obj_t BgL_stackzd2stamp4534zd2_4090,
		obj_t BgL_seenzf34535zf3_4091)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 63 */
			return
				(obj_t) (BGl_wideningzd2makezd2vectorzd2appzd2zzcfa_info2z00(
					(BgL_approxz00_bglt) (BgL_approx4530z00_4086),
					(BgL_approxz00_bglt) (BgL_valuezd2approx4531zd2_4087),
					(long) CINT(BgL_lostzd2stamp4532zd2_4088),
					(BgL_variablez00_bglt) (BgL_owner4533z00_4089),
					BgL_stackzd2stamp4534zd2_4090, CBOOL(BgL_seenzf34535zf3_4091)));
		}
	}



/* make-make-vector-app */
	BGL_EXPORTED_DEF BgL_makezd2vectorzd2appz00_bglt
		BGl_makezd2makezd2vectorzd2appzd2zzcfa_info2z00(obj_t BgL_loc4544z00_115,
		BgL_typez00_bglt BgL_type4545z00_116, obj_t BgL_sidezd2effectzf34546z21_117,
		obj_t BgL_key4547z00_118, BgL_varz00_bglt BgL_fun4548z00_119,
		obj_t BgL_args4549z00_120, BgL_approxz00_bglt BgL_approx4538z00_121,
		BgL_approxz00_bglt BgL_valuezd2approx4539zd2_122,
		long BgL_lostzd2stamp4540zd2_123, BgL_variablez00_bglt BgL_owner4541z00_124,
		obj_t BgL_stackzd2stamp4542zd2_125, bool_t BgL_seenzf34543zf3_126)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 63 */
			{	/* Cfa/cinfo2.scm 63 */
				BgL_appz00_bglt BgL_aux4550z00_2756;

				BgL_aux4550z00_2756 =
					BGl_makezd2appzd2zzast_nodez00(BgL_loc4544z00_115,
					BgL_type4545z00_116, BgL_sidezd2effectzf34546z21_117,
					BgL_key4547z00_118, BgL_fun4548z00_119, BgL_args4549z00_120);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4550z00_2756),
					BGl_classzd2numzd2zz__objectz00
					(BGl_makezd2vectorzd2appz00zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 63 */
					BgL_makezd2vectorzd2appz00_bglt BgL_arg5097z00_2758;

					{	/* Cfa/cinfo2.scm 63 */
						BgL_makezd2vectorzd2appz00_bglt BgL_res5470z00_2783;

						{	/* Cfa/cinfo2.scm 63 */
							BgL_makezd2vectorzd2appz00_bglt BgL_new4536z00_2768;

							BgL_new4536z00_2768 =
								((BgL_makezd2vectorzd2appz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_makezd2vectorzd2appz00_bgl))));
							{	/* Cfa/cinfo2.scm 63 */
								BgL_makezd2vectorzd2appz00_bglt BgL_res5469z00_2782;

								{	/* Cfa/cinfo2.scm 63 */
									BgL_makezd2vectorzd2appz00_bglt BgL_new4558z00_2769;

									BgL_new4558z00_2769 = BgL_new4536z00_2768;
									{	/* Cfa/cinfo2.scm 63 */
										BgL_approxz00_bglt BgL_approx4552z00_2776;

										BgL_approxz00_bglt BgL_valuezd2approx4553zd2_2777;

										long BgL_lostzd2stamp4554zd2_2778;

										BgL_variablez00_bglt BgL_owner4555z00_2779;

										obj_t BgL_stackzd2stamp4556zd2_2780;

										bool_t BgL_seenzf34557zf3_2781;

										BgL_approx4552z00_2776 = BgL_approx4538z00_121;
										BgL_valuezd2approx4553zd2_2777 =
											BgL_valuezd2approx4539zd2_122;
										BgL_lostzd2stamp4554zd2_2778 = BgL_lostzd2stamp4540zd2_123;
										BgL_owner4555z00_2779 = BgL_owner4541z00_124;
										BgL_stackzd2stamp4556zd2_2780 =
											BgL_stackzd2stamp4542zd2_125;
										BgL_seenzf34557zf3_2781 = BgL_seenzf34543zf3_126;
										((((BgL_makezd2vectorzd2appz00_bglt)
													CREF(BgL_new4558z00_2769))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4552z00_2776), BUNSPEC);
										((((BgL_makezd2vectorzd2appz00_bglt)
													CREF(BgL_new4558z00_2769))->BgL_valuezd2approxzd2) =
											((BgL_approxz00_bglt) BgL_valuezd2approx4553zd2_2777),
											BUNSPEC);
										((((BgL_makezd2vectorzd2appz00_bglt)
													CREF(BgL_new4558z00_2769))->BgL_lostzd2stampzd2) =
											((long) BgL_lostzd2stamp4554zd2_2778), BUNSPEC);
										((((BgL_makezd2vectorzd2appz00_bglt)
													CREF(BgL_new4558z00_2769))->BgL_ownerz00) =
											((BgL_variablez00_bglt) BgL_owner4555z00_2779), BUNSPEC);
										((((BgL_makezd2vectorzd2appz00_bglt)
													CREF(BgL_new4558z00_2769))->BgL_stackzd2stampzd2) =
											((obj_t) BgL_stackzd2stamp4556zd2_2780), BUNSPEC);
										((((BgL_makezd2vectorzd2appz00_bglt)
													CREF(BgL_new4558z00_2769))->BgL_seenzf3zf3) =
											((bool_t) BgL_seenzf34557zf3_2781), BUNSPEC);
										BgL_res5469z00_2782 = BgL_new4558z00_2769;
								}} BgL_res5469z00_2782;
							}
							BgL_res5470z00_2783 = BgL_new4536z00_2768;
						}
						BgL_arg5097z00_2758 = BgL_res5470z00_2783;
					}
					{	/* Cfa/cinfo2.scm 63 */
						obj_t BgL_auxz00_5204;

						BgL_objectz00_bglt BgL_auxz00_5202;

						BgL_auxz00_5204 = (obj_t) (BgL_arg5097z00_2758);
						BgL_auxz00_5202 = (BgL_objectz00_bglt) (BgL_aux4550z00_2756);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_5202, BgL_auxz00_5204);
				}}
				return
					((BgL_makezd2vectorzd2appz00_bglt)
					(BgL_makezd2vectorzd2appz00_bglt) (BgL_aux4550z00_2756));
			}
		}
	}



/* _make-make-vector-app */
	obj_t BGl__makezd2makezd2vectorzd2appzd2zzcfa_info2z00(obj_t BgL_envz00_4092,
		obj_t BgL_loc4544z00_4093, obj_t BgL_type4545z00_4094,
		obj_t BgL_sidezd2effectzf34546z21_4095, obj_t BgL_key4547z00_4096,
		obj_t BgL_fun4548z00_4097, obj_t BgL_args4549z00_4098,
		obj_t BgL_approx4538z00_4099, obj_t BgL_valuezd2approx4539zd2_4100,
		obj_t BgL_lostzd2stamp4540zd2_4101, obj_t BgL_owner4541z00_4102,
		obj_t BgL_stackzd2stamp4542zd2_4103, obj_t BgL_seenzf34543zf3_4104)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 63 */
			return
				(obj_t) (BGl_makezd2makezd2vectorzd2appzd2zzcfa_info2z00
				(BgL_loc4544z00_4093, (BgL_typez00_bglt) (BgL_type4545z00_4094),
					BgL_sidezd2effectzf34546z21_4095, BgL_key4547z00_4096,
					(BgL_varz00_bglt) (BgL_fun4548z00_4097), BgL_args4549z00_4098,
					(BgL_approxz00_bglt) (BgL_approx4538z00_4099),
					(BgL_approxz00_bglt) (BgL_valuezd2approx4539zd2_4100),
					(long) CINT(BgL_lostzd2stamp4540zd2_4101),
					(BgL_variablez00_bglt) (BgL_owner4541z00_4102),
					BgL_stackzd2stamp4542zd2_4103, CBOOL(BgL_seenzf34543zf3_4104)));
		}
	}



/* fill-make-vector-app! */
	BGL_EXPORTED_DEF BgL_makezd2vectorzd2appz00_bglt
		BGl_fillzd2makezd2vectorzd2appz12zc0zzcfa_info2z00
		(BgL_makezd2vectorzd2appz00_bglt BgL_new4558z00_127,
		BgL_approxz00_bglt BgL_approx4552z00_128,
		BgL_approxz00_bglt BgL_valuezd2approx4553zd2_129,
		long BgL_lostzd2stamp4554zd2_130, BgL_variablez00_bglt BgL_owner4555z00_131,
		obj_t BgL_stackzd2stamp4556zd2_132, bool_t BgL_seenzf34557zf3_133)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 63 */
			{	/* Cfa/cinfo2.scm 63 */
				BgL_approxz00_bglt BgL_approx4552z00_4446;

				BgL_approxz00_bglt BgL_valuezd2approx4553zd2_4447;

				long BgL_lostzd2stamp4554zd2_4448;

				BgL_variablez00_bglt BgL_owner4555z00_4449;

				obj_t BgL_stackzd2stamp4556zd2_4450;

				bool_t BgL_seenzf34557zf3_4451;

				BgL_approx4552z00_4446 = BgL_approx4552z00_128;
				BgL_valuezd2approx4553zd2_4447 = BgL_valuezd2approx4553zd2_129;
				BgL_lostzd2stamp4554zd2_4448 = BgL_lostzd2stamp4554zd2_130;
				BgL_owner4555z00_4449 = BgL_owner4555z00_131;
				BgL_stackzd2stamp4556zd2_4450 = BgL_stackzd2stamp4556zd2_132;
				BgL_seenzf34557zf3_4451 = BgL_seenzf34557zf3_133;
				((((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_new4558z00_127))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4552z00_4446), BUNSPEC);
				((((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_new4558z00_127))->
						BgL_valuezd2approxzd2) =
					((BgL_approxz00_bglt) BgL_valuezd2approx4553zd2_4447), BUNSPEC);
				((((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_new4558z00_127))->
						BgL_lostzd2stampzd2) =
					((long) BgL_lostzd2stamp4554zd2_4448), BUNSPEC);
				((((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_new4558z00_127))->
						BgL_ownerz00) =
					((BgL_variablez00_bglt) BgL_owner4555z00_4449), BUNSPEC);
				((((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_new4558z00_127))->
						BgL_stackzd2stampzd2) =
					((obj_t) BgL_stackzd2stamp4556zd2_4450), BUNSPEC);
				((((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_new4558z00_127))->
						BgL_seenzf3zf3) = ((bool_t) BgL_seenzf34557zf3_4451), BUNSPEC);
				return BgL_new4558z00_127;
			}
		}
	}



/* _fill-make-vector-app! */
	obj_t BGl__fillzd2makezd2vectorzd2appz12zc0zzcfa_info2z00(obj_t
		BgL_envz00_4105, obj_t BgL_new4558z00_4106, obj_t BgL_approx4552z00_4107,
		obj_t BgL_valuezd2approx4553zd2_4108, obj_t BgL_lostzd2stamp4554zd2_4109,
		obj_t BgL_owner4555z00_4110, obj_t BgL_stackzd2stamp4556zd2_4111,
		obj_t BgL_seenzf34557zf3_4112)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 63 */
			{	/* Cfa/cinfo2.scm 63 */
				BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_5224;

				{	/* Cfa/cinfo2.scm 63 */
					BgL_makezd2vectorzd2appz00_bglt BgL_res5621z00_4465;

					{	/* Cfa/cinfo2.scm 63 */
						BgL_makezd2vectorzd2appz00_bglt BgL_new4558z00_4452;

						BgL_approxz00_bglt BgL_approx4552z00_4453;

						BgL_approxz00_bglt BgL_valuezd2approx4553zd2_4454;

						long BgL_lostzd2stamp4554zd2_4455;

						BgL_variablez00_bglt BgL_owner4555z00_4456;

						bool_t BgL_seenzf34557zf3_4458;

						BgL_new4558z00_4452 =
							(BgL_makezd2vectorzd2appz00_bglt) (BgL_new4558z00_4106);
						BgL_approx4552z00_4453 =
							(BgL_approxz00_bglt) (BgL_approx4552z00_4107);
						BgL_valuezd2approx4553zd2_4454 =
							(BgL_approxz00_bglt) (BgL_valuezd2approx4553zd2_4108);
						BgL_lostzd2stamp4554zd2_4455 =
							(long) CINT(BgL_lostzd2stamp4554zd2_4109);
						BgL_owner4555z00_4456 =
							(BgL_variablez00_bglt) (BgL_owner4555z00_4110);
						BgL_seenzf34557zf3_4458 = CBOOL(BgL_seenzf34557zf3_4112);
						{	/* Cfa/cinfo2.scm 63 */
							BgL_approxz00_bglt BgL_approx4552z00_4459;

							BgL_approxz00_bglt BgL_valuezd2approx4553zd2_4460;

							long BgL_lostzd2stamp4554zd2_4461;

							BgL_variablez00_bglt BgL_owner4555z00_4462;

							obj_t BgL_stackzd2stamp4556zd2_4463;

							bool_t BgL_seenzf34557zf3_4464;

							BgL_approx4552z00_4459 = BgL_approx4552z00_4453;
							BgL_valuezd2approx4553zd2_4460 = BgL_valuezd2approx4553zd2_4454;
							BgL_lostzd2stamp4554zd2_4461 = BgL_lostzd2stamp4554zd2_4455;
							BgL_owner4555z00_4462 = BgL_owner4555z00_4456;
							BgL_stackzd2stamp4556zd2_4463 = BgL_stackzd2stamp4556zd2_4111;
							BgL_seenzf34557zf3_4464 = BgL_seenzf34557zf3_4458;
							((((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_new4558z00_4452))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4552z00_4459), BUNSPEC);
							((((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_new4558z00_4452))->
									BgL_valuezd2approxzd2) =
								((BgL_approxz00_bglt) BgL_valuezd2approx4553zd2_4460), BUNSPEC);
							((((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_new4558z00_4452))->
									BgL_lostzd2stampzd2) =
								((long) BgL_lostzd2stamp4554zd2_4461), BUNSPEC);
							((((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_new4558z00_4452))->
									BgL_ownerz00) =
								((BgL_variablez00_bglt) BgL_owner4555z00_4462), BUNSPEC);
							((((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_new4558z00_4452))->
									BgL_stackzd2stampzd2) =
								((obj_t) BgL_stackzd2stamp4556zd2_4463), BUNSPEC);
							((((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_new4558z00_4452))->
									BgL_seenzf3zf3) =
								((bool_t) BgL_seenzf34557zf3_4464), BUNSPEC);
							BgL_res5621z00_4465 = BgL_new4558z00_4452;
					}}
					BgL_auxz00_5224 = BgL_res5621z00_4465;
				}
				return (obj_t) (BgL_auxz00_5224);
			}
		}
	}



/* %allocate-make-vector-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_z52allocatezd2makezd2vectorzd2appz80zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 63 */
			{	/* Cfa/cinfo2.scm 63 */
				BgL_appz00_bglt BgL_new4566z00_4466;

				BgL_new4566z00_4466 =
					((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_appz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new4566z00_4466),
					BGl_classzd2numzd2zz__objectz00
					(BGl_makezd2vectorzd2appz00zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 63 */
					BgL_objectz00_bglt BgL_auxz00_5242;

					BgL_auxz00_5242 = (BgL_objectz00_bglt) (BgL_new4566z00_4466);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5242, BFALSE);
				}
				return BgL_new4566z00_4466;
			}
		}
	}



/* _%allocate-make-vector-app */
	obj_t BGl__z52allocatezd2makezd2vectorzd2appz80zzcfa_info2z00(obj_t
		BgL_envz00_3973)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 63 */
			{	/* Cfa/cinfo2.scm 63 */
				BgL_appz00_bglt BgL_auxz00_5245;

				{	/* Cfa/cinfo2.scm 63 */
					BgL_appz00_bglt BgL_res5622z00_4470;

					{	/* Cfa/cinfo2.scm 63 */
						BgL_appz00_bglt BgL_new4566z00_4468;

						BgL_new4566z00_4468 =
							((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_appz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4566z00_4468),
							BGl_classzd2numzd2zz__objectz00
							(BGl_makezd2vectorzd2appz00zzcfa_info2z00));
						{	/* Cfa/cinfo2.scm 63 */
							BgL_objectz00_bglt BgL_auxz00_5250;

							BgL_auxz00_5250 = (BgL_objectz00_bglt) (BgL_new4566z00_4468);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5250, BFALSE);
						}
						BgL_res5622z00_4470 = BgL_new4566z00_4468;
					}
					BgL_auxz00_5245 = BgL_res5622z00_4470;
				}
				return (obj_t) (BgL_auxz00_5245);
			}
		}
	}



/* make-vector-app-nil */
	BGL_EXPORTED_DEF BgL_makezd2vectorzd2appz00_bglt
		BGl_makezd2vectorzd2appzd2nilzd2zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 63 */
			if ((BGl_z52thezd2makezd2vectorzd2appzd2nilz52zzcfa_info2z00 == BUNSPEC))
				{	/* Cfa/cinfo2.scm 63 */
					{	/* Cfa/cinfo2.scm 63 */
						BgL_appz00_bglt BgL_res5471z00_2798;

						{	/* Cfa/cinfo2.scm 63 */
							BgL_appz00_bglt BgL_new2275z00_2794;

							BgL_new2275z00_2794 =
								((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2275z00_2794),
								BGl_classzd2numzd2zz__objectz00(BGl_appz00zzast_nodez00));
							{	/* Cfa/cinfo2.scm 63 */
								BgL_objectz00_bglt BgL_auxz00_5260;

								BgL_auxz00_5260 = (BgL_objectz00_bglt) (BgL_new2275z00_2794);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5260, BFALSE);
							}
							BgL_res5471z00_2798 = BgL_new2275z00_2794;
						}
						BGl_z52thezd2makezd2vectorzd2appzd2nilz52zzcfa_info2z00 =
							(obj_t) (BgL_res5471z00_2798);
					}
					{	/* Cfa/cinfo2.scm 63 */
						BgL_typez00_bglt BgL_arg5100z00_1436;

						BgL_varz00_bglt BgL_arg5101z00_1437;

						BgL_arg5100z00_1436 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg5101z00_1437 = BGl_varzd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo2.scm 63 */
							BgL_appz00_bglt BgL_res5472z00_2812;

							{	/* Cfa/cinfo2.scm 63 */
								BgL_appz00_bglt BgL_new2267z00_2799;

								BgL_new2267z00_2799 =
									(BgL_appz00_bglt)
									(BGl_z52thezd2makezd2vectorzd2appzd2nilz52zzcfa_info2z00);
								{	/* Cfa/cinfo2.scm 63 */
									obj_t BgL_loc2261z00_2806;

									BgL_typez00_bglt BgL_type2262z00_2807;

									obj_t BgL_sidezd2effectzf32263z21_2808;

									obj_t BgL_key2264z00_2809;

									BgL_varz00_bglt BgL_fun2265z00_2810;

									obj_t BgL_args2266z00_2811;

									BgL_loc2261z00_2806 = BUNSPEC;
									BgL_type2262z00_2807 = BgL_arg5100z00_1436;
									BgL_sidezd2effectzf32263z21_2808 = BUNSPEC;
									BgL_key2264z00_2809 = BUNSPEC;
									BgL_fun2265z00_2810 = BgL_arg5101z00_1437;
									BgL_args2266z00_2811 = BUNSPEC;
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2799))->BgL_locz00) =
										((obj_t) BgL_loc2261z00_2806), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2799))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2262z00_2807), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2799))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32263z21_2808), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2799))->BgL_keyz00) =
										((obj_t) BgL_key2264z00_2809), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2799))->BgL_funz00) =
										((BgL_varz00_bglt) BgL_fun2265z00_2810), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2799))->
											BgL_argsz00) = ((obj_t) BgL_args2266z00_2811), BUNSPEC);
									BgL_res5472z00_2812 = BgL_new2267z00_2799;
							}} BgL_res5472z00_2812;
					}}
					{	/* Cfa/cinfo2.scm 63 */
						long BgL_arg5102z00_1438;

						BgL_arg5102z00_1438 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_makezd2vectorzd2appz00zzcfa_info2z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2makezd2vectorzd2appzd2nilz52zzcfa_info2z00),
							BgL_arg5102z00_1438);
					}
					{	/* Cfa/cinfo2.scm 63 */
						BgL_makezd2vectorzd2appz00_bglt BgL_arg5103z00_1439;

						{	/* Cfa/cinfo2.scm 63 */
							BgL_approxz00_bglt BgL_arg5104z00_1440;

							BgL_approxz00_bglt BgL_arg5105z00_1441;

							BgL_variablez00_bglt BgL_arg5107z00_1443;

							BgL_arg5104z00_1440 = BGl_approxzd2nilzd2zzcfa_infoz00();
							BgL_arg5105z00_1441 = BGl_approxzd2nilzd2zzcfa_infoz00();
							BgL_arg5107z00_1443 = BGl_variablezd2nilzd2zzast_varz00();
							{	/* Cfa/cinfo2.scm 63 */
								BgL_makezd2vectorzd2appz00_bglt BgL_res5474z00_2836;

								{	/* Cfa/cinfo2.scm 63 */
									BgL_makezd2vectorzd2appz00_bglt BgL_new4536z00_2821;

									BgL_new4536z00_2821 =
										((BgL_makezd2vectorzd2appz00_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_makezd2vectorzd2appz00_bgl))));
									{	/* Cfa/cinfo2.scm 63 */
										BgL_makezd2vectorzd2appz00_bglt BgL_res5473z00_2835;

										{	/* Cfa/cinfo2.scm 63 */
											BgL_makezd2vectorzd2appz00_bglt BgL_new4558z00_2822;

											BgL_new4558z00_2822 = BgL_new4536z00_2821;
											{	/* Cfa/cinfo2.scm 63 */
												BgL_approxz00_bglt BgL_approx4552z00_2829;

												BgL_approxz00_bglt BgL_valuezd2approx4553zd2_2830;

												long BgL_lostzd2stamp4554zd2_2831;

												BgL_variablez00_bglt BgL_owner4555z00_2832;

												obj_t BgL_stackzd2stamp4556zd2_2833;

												bool_t BgL_seenzf34557zf3_2834;

												BgL_approx4552z00_2829 = BgL_arg5104z00_1440;
												BgL_valuezd2approx4553zd2_2830 = BgL_arg5105z00_1441;
												BgL_lostzd2stamp4554zd2_2831 = ((long) 0);
												BgL_owner4555z00_2832 = BgL_arg5107z00_1443;
												BgL_stackzd2stamp4556zd2_2833 = BUNSPEC;
												BgL_seenzf34557zf3_2834 = ((bool_t) 0);
												((((BgL_makezd2vectorzd2appz00_bglt)
															CREF(BgL_new4558z00_2822))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4552z00_2829),
													BUNSPEC);
												((((BgL_makezd2vectorzd2appz00_bglt)
															CREF(BgL_new4558z00_2822))->
														BgL_valuezd2approxzd2) =
													((BgL_approxz00_bglt) BgL_valuezd2approx4553zd2_2830),
													BUNSPEC);
												((((BgL_makezd2vectorzd2appz00_bglt)
															CREF(BgL_new4558z00_2822))->BgL_lostzd2stampzd2) =
													((long) BgL_lostzd2stamp4554zd2_2831), BUNSPEC);
												((((BgL_makezd2vectorzd2appz00_bglt)
															CREF(BgL_new4558z00_2822))->BgL_ownerz00) =
													((BgL_variablez00_bglt) BgL_owner4555z00_2832),
													BUNSPEC);
												((((BgL_makezd2vectorzd2appz00_bglt)
															CREF(BgL_new4558z00_2822))->
														BgL_stackzd2stampzd2) =
													((obj_t) BgL_stackzd2stamp4556zd2_2833), BUNSPEC);
												((((BgL_makezd2vectorzd2appz00_bglt)
															CREF(BgL_new4558z00_2822))->BgL_seenzf3zf3) =
													((bool_t) BgL_seenzf34557zf3_2834), BUNSPEC);
												BgL_res5473z00_2835 = BgL_new4558z00_2822;
										}} BgL_res5473z00_2835;
									}
									BgL_res5474z00_2836 = BgL_new4536z00_2821;
								}
								BgL_arg5103z00_1439 = BgL_res5474z00_2836;
						}}
						{	/* Cfa/cinfo2.scm 63 */
							obj_t BgL_auxz00_5288;

							BgL_objectz00_bglt BgL_auxz00_5286;

							BgL_auxz00_5288 = (obj_t) (BgL_arg5103z00_1439);
							BgL_auxz00_5286 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2makezd2vectorzd2appzd2nilz52zzcfa_info2z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5286, BgL_auxz00_5288);
				}}}
			else
				{	/* Cfa/cinfo2.scm 63 */
					BFALSE;
				}
			return
				(BgL_makezd2vectorzd2appz00_bglt)
				(BGl_z52thezd2makezd2vectorzd2appzd2nilz52zzcfa_info2z00);
		}
	}



/* _make-vector-app-nil */
	obj_t BGl__makezd2vectorzd2appzd2nilzd2zzcfa_info2z00(obj_t BgL_envz00_3974)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 63 */
			return (obj_t) (BGl_makezd2vectorzd2appzd2nilzd2zzcfa_info2z00());
		}
	}



/* pre-make-vector-app? */
	BGL_EXPORTED_DEF bool_t
		BGl_prezd2makezd2vectorzd2appzf3z21zzcfa_info2z00(obj_t BgL_obj4512z00_148)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 59 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4512z00_148,
				BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00);
		}
	}



/* _pre-make-vector-app? */
	obj_t BGl__prezd2makezd2vectorzd2appzf3z21zzcfa_info2z00(obj_t
		BgL_envz00_3971, obj_t BgL_obj4512z00_3972)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 59 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4512z00_3972,
					BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00));
		}
	}



/* widening-pre-make-vector-app */
	BGL_EXPORTED_DEF BgL_prezd2makezd2vectorzd2appzd2_bglt
		BGl_wideningzd2prezd2makezd2vectorzd2appz00zzcfa_info2z00
		(BgL_variablez00_bglt BgL_owner4489z00_152)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 59 */
			{	/* Cfa/cinfo2.scm 59 */
				BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_new4490z00_2837;

				BgL_new4490z00_2837 =
					((BgL_prezd2makezd2vectorzd2appzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_prezd2makezd2vectorzd2appzd2_bgl))));
				{	/* Cfa/cinfo2.scm 59 */
					BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_res5475z00_2841;

					{	/* Cfa/cinfo2.scm 59 */
						BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_new4502z00_2838;

						BgL_new4502z00_2838 = BgL_new4490z00_2837;
						{	/* Cfa/cinfo2.scm 59 */
							BgL_variablez00_bglt BgL_owner4501z00_2840;

							BgL_owner4501z00_2840 = BgL_owner4489z00_152;
							((((BgL_prezd2makezd2vectorzd2appzd2_bglt)
										CREF(BgL_new4502z00_2838))->BgL_ownerz00) =
								((BgL_variablez00_bglt) BgL_owner4501z00_2840), BUNSPEC);
							BgL_res5475z00_2841 = BgL_new4502z00_2838;
					}} BgL_res5475z00_2841;
				}
				return BgL_new4490z00_2837;
			}
		}
	}



/* _widening-pre-make-vector-app */
	obj_t BGl__wideningzd2prezd2makezd2vectorzd2appz00zzcfa_info2z00(obj_t
		BgL_envz00_4113, obj_t BgL_owner4489z00_4114)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 59 */
			return
				(obj_t) (BGl_wideningzd2prezd2makezd2vectorzd2appz00zzcfa_info2z00(
					(BgL_variablez00_bglt) (BgL_owner4489z00_4114)));
		}
	}



/* make-pre-make-vector-app */
	BGL_EXPORTED_DEF BgL_prezd2makezd2vectorzd2appzd2_bglt
		BGl_makezd2prezd2makezd2vectorzd2appz00zzcfa_info2z00(obj_t
		BgL_loc4493z00_153, BgL_typez00_bglt BgL_type4494z00_154,
		obj_t BgL_sidezd2effectzf34495z21_155, obj_t BgL_key4496z00_156,
		BgL_varz00_bglt BgL_fun4497z00_157, obj_t BgL_args4498z00_158,
		BgL_variablez00_bglt BgL_owner4492z00_159)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 59 */
			{	/* Cfa/cinfo2.scm 59 */
				BgL_appz00_bglt BgL_aux4499z00_2842;

				BgL_aux4499z00_2842 =
					BGl_makezd2appzd2zzast_nodez00(BgL_loc4493z00_153,
					BgL_type4494z00_154, BgL_sidezd2effectzf34495z21_155,
					BgL_key4496z00_156, BgL_fun4497z00_157, BgL_args4498z00_158);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4499z00_2842),
					BGl_classzd2numzd2zz__objectz00
					(BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 59 */
					BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_arg5109z00_2844;

					{	/* Cfa/cinfo2.scm 59 */
						BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_res5477z00_2854;

						{	/* Cfa/cinfo2.scm 59 */
							BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_new4490z00_2849;

							BgL_new4490z00_2849 =
								((BgL_prezd2makezd2vectorzd2appzd2_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_prezd2makezd2vectorzd2appzd2_bgl))));
							{	/* Cfa/cinfo2.scm 59 */
								BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_res5476z00_2853;

								{	/* Cfa/cinfo2.scm 59 */
									BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_new4502z00_2850;

									BgL_new4502z00_2850 = BgL_new4490z00_2849;
									{	/* Cfa/cinfo2.scm 59 */
										BgL_variablez00_bglt BgL_owner4501z00_2852;

										BgL_owner4501z00_2852 = BgL_owner4492z00_159;
										((((BgL_prezd2makezd2vectorzd2appzd2_bglt)
													CREF(BgL_new4502z00_2850))->BgL_ownerz00) =
											((BgL_variablez00_bglt) BgL_owner4501z00_2852), BUNSPEC);
										BgL_res5476z00_2853 = BgL_new4502z00_2850;
								}} BgL_res5476z00_2853;
							}
							BgL_res5477z00_2854 = BgL_new4490z00_2849;
						}
						BgL_arg5109z00_2844 = BgL_res5477z00_2854;
					}
					{	/* Cfa/cinfo2.scm 59 */
						obj_t BgL_auxz00_5310;

						BgL_objectz00_bglt BgL_auxz00_5308;

						BgL_auxz00_5310 = (obj_t) (BgL_arg5109z00_2844);
						BgL_auxz00_5308 = (BgL_objectz00_bglt) (BgL_aux4499z00_2842);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_5308, BgL_auxz00_5310);
				}}
				return
					((BgL_prezd2makezd2vectorzd2appzd2_bglt)
					(BgL_prezd2makezd2vectorzd2appzd2_bglt) (BgL_aux4499z00_2842));
			}
		}
	}



/* _make-pre-make-vector-app */
	obj_t BGl__makezd2prezd2makezd2vectorzd2appz00zzcfa_info2z00(obj_t
		BgL_envz00_4115, obj_t BgL_loc4493z00_4116, obj_t BgL_type4494z00_4117,
		obj_t BgL_sidezd2effectzf34495z21_4118, obj_t BgL_key4496z00_4119,
		obj_t BgL_fun4497z00_4120, obj_t BgL_args4498z00_4121,
		obj_t BgL_owner4492z00_4122)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 59 */
			return
				(obj_t) (BGl_makezd2prezd2makezd2vectorzd2appz00zzcfa_info2z00
				(BgL_loc4493z00_4116, (BgL_typez00_bglt) (BgL_type4494z00_4117),
					BgL_sidezd2effectzf34495z21_4118, BgL_key4496z00_4119,
					(BgL_varz00_bglt) (BgL_fun4497z00_4120), BgL_args4498z00_4121,
					(BgL_variablez00_bglt) (BgL_owner4492z00_4122)));
		}
	}



/* fill-pre-make-vector-app! */
	BGL_EXPORTED_DEF BgL_prezd2makezd2vectorzd2appzd2_bglt
		BGl_fillzd2prezd2makezd2vectorzd2appz12z12zzcfa_info2z00
		(BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_new4502z00_160,
		BgL_variablez00_bglt BgL_owner4501z00_161)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 59 */
			{	/* Cfa/cinfo2.scm 59 */
				BgL_variablez00_bglt BgL_owner4501z00_4472;

				BgL_owner4501z00_4472 = BgL_owner4501z00_161;
				((((BgL_prezd2makezd2vectorzd2appzd2_bglt) CREF(BgL_new4502z00_160))->
						BgL_ownerz00) =
					((BgL_variablez00_bglt) BgL_owner4501z00_4472), BUNSPEC);
				return BgL_new4502z00_160;
			}
		}
	}



/* _fill-pre-make-vector-app! */
	obj_t BGl__fillzd2prezd2makezd2vectorzd2appz12z12zzcfa_info2z00(obj_t
		BgL_envz00_4123, obj_t BgL_new4502z00_4124, obj_t BgL_owner4501z00_4125)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 59 */
			{	/* Cfa/cinfo2.scm 59 */
				BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_auxz00_5321;

				{	/* Cfa/cinfo2.scm 59 */
					BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_res5623z00_4476;

					{	/* Cfa/cinfo2.scm 59 */
						BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_new4502z00_4473;

						BgL_variablez00_bglt BgL_owner4501z00_4474;

						BgL_new4502z00_4473 =
							(BgL_prezd2makezd2vectorzd2appzd2_bglt) (BgL_new4502z00_4124);
						BgL_owner4501z00_4474 =
							(BgL_variablez00_bglt) (BgL_owner4501z00_4125);
						{	/* Cfa/cinfo2.scm 59 */
							BgL_variablez00_bglt BgL_owner4501z00_4475;

							BgL_owner4501z00_4475 = BgL_owner4501z00_4474;
							((((BgL_prezd2makezd2vectorzd2appzd2_bglt)
										CREF(BgL_new4502z00_4473))->BgL_ownerz00) =
								((BgL_variablez00_bglt) BgL_owner4501z00_4475), BUNSPEC);
							BgL_res5623z00_4476 = BgL_new4502z00_4473;
						}
					}
					BgL_auxz00_5321 = BgL_res5623z00_4476;
				}
				return (obj_t) (BgL_auxz00_5321);
			}
		}
	}



/* %allocate-pre-make-vector-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_z52allocatezd2prezd2makezd2vectorzd2appz52zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 59 */
			{	/* Cfa/cinfo2.scm 59 */
				BgL_appz00_bglt BgL_new4505z00_4477;

				BgL_new4505z00_4477 =
					((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_appz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new4505z00_4477),
					BGl_classzd2numzd2zz__objectz00
					(BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 59 */
					BgL_objectz00_bglt BgL_auxz00_5330;

					BgL_auxz00_5330 = (BgL_objectz00_bglt) (BgL_new4505z00_4477);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5330, BFALSE);
				}
				return BgL_new4505z00_4477;
			}
		}
	}



/* _%allocate-pre-make-vector-app */
	obj_t BGl__z52allocatezd2prezd2makezd2vectorzd2appz52zzcfa_info2z00(obj_t
		BgL_envz00_3969)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 59 */
			{	/* Cfa/cinfo2.scm 59 */
				BgL_appz00_bglt BgL_auxz00_5333;

				{	/* Cfa/cinfo2.scm 59 */
					BgL_appz00_bglt BgL_res5624z00_4481;

					{	/* Cfa/cinfo2.scm 59 */
						BgL_appz00_bglt BgL_new4505z00_4479;

						BgL_new4505z00_4479 =
							((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_appz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4505z00_4479),
							BGl_classzd2numzd2zz__objectz00
							(BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00));
						{	/* Cfa/cinfo2.scm 59 */
							BgL_objectz00_bglt BgL_auxz00_5338;

							BgL_auxz00_5338 = (BgL_objectz00_bglt) (BgL_new4505z00_4479);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5338, BFALSE);
						}
						BgL_res5624z00_4481 = BgL_new4505z00_4479;
					}
					BgL_auxz00_5333 = BgL_res5624z00_4481;
				}
				return (obj_t) (BgL_auxz00_5333);
			}
		}
	}



/* pre-make-vector-app-nil */
	BGL_EXPORTED_DEF BgL_prezd2makezd2vectorzd2appzd2_bglt
		BGl_prezd2makezd2vectorzd2appzd2nilz00zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 59 */
			if (
				(BGl_z52thezd2prezd2makezd2vectorzd2appzd2nilz80zzcfa_info2z00 ==
					BUNSPEC))
				{	/* Cfa/cinfo2.scm 59 */
					{	/* Cfa/cinfo2.scm 59 */
						BgL_appz00_bglt BgL_res5478z00_2864;

						{	/* Cfa/cinfo2.scm 59 */
							BgL_appz00_bglt BgL_new2275z00_2860;

							BgL_new2275z00_2860 =
								((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2275z00_2860),
								BGl_classzd2numzd2zz__objectz00(BGl_appz00zzast_nodez00));
							{	/* Cfa/cinfo2.scm 59 */
								BgL_objectz00_bglt BgL_auxz00_5348;

								BgL_auxz00_5348 = (BgL_objectz00_bglt) (BgL_new2275z00_2860);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5348, BFALSE);
							}
							BgL_res5478z00_2864 = BgL_new2275z00_2860;
						}
						BGl_z52thezd2prezd2makezd2vectorzd2appzd2nilz80zzcfa_info2z00 =
							(obj_t) (BgL_res5478z00_2864);
					}
					{	/* Cfa/cinfo2.scm 59 */
						BgL_typez00_bglt BgL_arg5112z00_1453;

						BgL_varz00_bglt BgL_arg5113z00_1454;

						BgL_arg5112z00_1453 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg5113z00_1454 = BGl_varzd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo2.scm 59 */
							BgL_appz00_bglt BgL_res5479z00_2878;

							{	/* Cfa/cinfo2.scm 59 */
								BgL_appz00_bglt BgL_new2267z00_2865;

								BgL_new2267z00_2865 =
									(BgL_appz00_bglt)
									(BGl_z52thezd2prezd2makezd2vectorzd2appzd2nilz80zzcfa_info2z00);
								{	/* Cfa/cinfo2.scm 59 */
									obj_t BgL_loc2261z00_2872;

									BgL_typez00_bglt BgL_type2262z00_2873;

									obj_t BgL_sidezd2effectzf32263z21_2874;

									obj_t BgL_key2264z00_2875;

									BgL_varz00_bglt BgL_fun2265z00_2876;

									obj_t BgL_args2266z00_2877;

									BgL_loc2261z00_2872 = BUNSPEC;
									BgL_type2262z00_2873 = BgL_arg5112z00_1453;
									BgL_sidezd2effectzf32263z21_2874 = BUNSPEC;
									BgL_key2264z00_2875 = BUNSPEC;
									BgL_fun2265z00_2876 = BgL_arg5113z00_1454;
									BgL_args2266z00_2877 = BUNSPEC;
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2865))->BgL_locz00) =
										((obj_t) BgL_loc2261z00_2872), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2865))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2262z00_2873), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2865))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32263z21_2874), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2865))->BgL_keyz00) =
										((obj_t) BgL_key2264z00_2875), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2865))->BgL_funz00) =
										((BgL_varz00_bglt) BgL_fun2265z00_2876), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2865))->
											BgL_argsz00) = ((obj_t) BgL_args2266z00_2877), BUNSPEC);
									BgL_res5479z00_2878 = BgL_new2267z00_2865;
							}} BgL_res5479z00_2878;
					}}
					{	/* Cfa/cinfo2.scm 59 */
						long BgL_arg5114z00_1455;

						BgL_arg5114z00_1455 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2prezd2makezd2vectorzd2appzd2nilz80zzcfa_info2z00),
							BgL_arg5114z00_1455);
					}
					{	/* Cfa/cinfo2.scm 59 */
						BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_arg5115z00_1456;

						{	/* Cfa/cinfo2.scm 59 */
							BgL_variablez00_bglt BgL_arg5116z00_1457;

							BgL_arg5116z00_1457 = BGl_variablezd2nilzd2zzast_varz00();
							{	/* Cfa/cinfo2.scm 59 */
								BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_res5481z00_2887;

								{	/* Cfa/cinfo2.scm 59 */
									BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_new4490z00_2882;

									BgL_new4490z00_2882 =
										((BgL_prezd2makezd2vectorzd2appzd2_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_prezd2makezd2vectorzd2appzd2_bgl))));
									{	/* Cfa/cinfo2.scm 59 */
										BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_res5480z00_2886;

										{	/* Cfa/cinfo2.scm 59 */
											BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_new4502z00_2883;

											BgL_new4502z00_2883 = BgL_new4490z00_2882;
											{	/* Cfa/cinfo2.scm 59 */
												BgL_variablez00_bglt BgL_owner4501z00_2885;

												BgL_owner4501z00_2885 = BgL_arg5116z00_1457;
												((((BgL_prezd2makezd2vectorzd2appzd2_bglt)
															CREF(BgL_new4502z00_2883))->BgL_ownerz00) =
													((BgL_variablez00_bglt) BgL_owner4501z00_2885),
													BUNSPEC);
												BgL_res5480z00_2886 = BgL_new4502z00_2883;
										}} BgL_res5480z00_2886;
									}
									BgL_res5481z00_2887 = BgL_new4490z00_2882;
								}
								BgL_arg5115z00_1456 = BgL_res5481z00_2887;
						}}
						{	/* Cfa/cinfo2.scm 59 */
							obj_t BgL_auxz00_5369;

							BgL_objectz00_bglt BgL_auxz00_5367;

							BgL_auxz00_5369 = (obj_t) (BgL_arg5115z00_1456);
							BgL_auxz00_5367 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2prezd2makezd2vectorzd2appzd2nilz80zzcfa_info2z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5367, BgL_auxz00_5369);
				}}}
			else
				{	/* Cfa/cinfo2.scm 59 */
					BFALSE;
				}
			return
				(BgL_prezd2makezd2vectorzd2appzd2_bglt)
				(BGl_z52thezd2prezd2makezd2vectorzd2appzd2nilz80zzcfa_info2z00);
		}
	}



/* _pre-make-vector-app-nil */
	obj_t BGl__prezd2makezd2vectorzd2appzd2nilz00zzcfa_info2z00(obj_t
		BgL_envz00_3970)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 59 */
			return (obj_t) (BGl_prezd2makezd2vectorzd2appzd2nilz00zzcfa_info2z00());
		}
	}



/* procedure-set!-app? */
	BGL_EXPORTED_DEF bool_t BGl_procedurezd2setz12zd2appzf3ze1zzcfa_info2z00(obj_t
		BgL_obj4471z00_163)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 56 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4471z00_163,
				BGl_procedurezd2setz12zd2appz12zzcfa_info2z00);
		}
	}



/* _procedure-set!-app? */
	obj_t BGl__procedurezd2setz12zd2appzf3ze1zzcfa_info2z00(obj_t BgL_envz00_3967,
		obj_t BgL_obj4471z00_3968)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 56 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4471z00_3968,
					BGl_procedurezd2setz12zd2appz12zzcfa_info2z00));
		}
	}



/* widening-procedure-set!-app */
	BGL_EXPORTED_DEF BgL_procedurezd2setz12zd2appz12_bglt
		BGl_wideningzd2procedurezd2setz12zd2appzc0zzcfa_info2z00(BgL_approxz00_bglt
		BgL_approx4448z00_167)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 56 */
			{	/* Cfa/cinfo2.scm 56 */
				BgL_procedurezd2setz12zd2appz12_bglt BgL_new4449z00_2888;

				BgL_new4449z00_2888 =
					((BgL_procedurezd2setz12zd2appz12_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_procedurezd2setz12zd2appz12_bgl))));
				{	/* Cfa/cinfo2.scm 56 */
					BgL_procedurezd2setz12zd2appz12_bglt BgL_res5482z00_2892;

					{	/* Cfa/cinfo2.scm 56 */
						BgL_procedurezd2setz12zd2appz12_bglt BgL_new4461z00_2889;

						BgL_new4461z00_2889 = BgL_new4449z00_2888;
						{	/* Cfa/cinfo2.scm 56 */
							BgL_approxz00_bglt BgL_approx4460z00_2891;

							BgL_approx4460z00_2891 = BgL_approx4448z00_167;
							((((BgL_procedurezd2setz12zd2appz12_bglt)
										CREF(BgL_new4461z00_2889))->BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4460z00_2891), BUNSPEC);
							BgL_res5482z00_2892 = BgL_new4461z00_2889;
					}} BgL_res5482z00_2892;
				}
				return BgL_new4449z00_2888;
			}
		}
	}



/* _widening-procedure-set!-app */
	obj_t BGl__wideningzd2procedurezd2setz12zd2appzc0zzcfa_info2z00(obj_t
		BgL_envz00_4126, obj_t BgL_approx4448z00_4127)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 56 */
			return
				(obj_t) (BGl_wideningzd2procedurezd2setz12zd2appzc0zzcfa_info2z00(
					(BgL_approxz00_bglt) (BgL_approx4448z00_4127)));
		}
	}



/* make-procedure-set!-app */
	BGL_EXPORTED_DEF BgL_procedurezd2setz12zd2appz12_bglt
		BGl_makezd2procedurezd2setz12zd2appzc0zzcfa_info2z00(obj_t
		BgL_loc4452z00_168, BgL_typez00_bglt BgL_type4453z00_169,
		obj_t BgL_sidezd2effectzf34454z21_170, obj_t BgL_key4455z00_171,
		BgL_varz00_bglt BgL_fun4456z00_172, obj_t BgL_args4457z00_173,
		BgL_approxz00_bglt BgL_approx4451z00_174)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 56 */
			{	/* Cfa/cinfo2.scm 56 */
				BgL_appz00_bglt BgL_aux4458z00_2893;

				BgL_aux4458z00_2893 =
					BGl_makezd2appzd2zzast_nodez00(BgL_loc4452z00_168,
					BgL_type4453z00_169, BgL_sidezd2effectzf34454z21_170,
					BgL_key4455z00_171, BgL_fun4456z00_172, BgL_args4457z00_173);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4458z00_2893),
					BGl_classzd2numzd2zz__objectz00
					(BGl_procedurezd2setz12zd2appz12zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 56 */
					BgL_procedurezd2setz12zd2appz12_bglt BgL_arg5118z00_2895;

					{	/* Cfa/cinfo2.scm 56 */
						BgL_procedurezd2setz12zd2appz12_bglt BgL_res5484z00_2905;

						{	/* Cfa/cinfo2.scm 56 */
							BgL_procedurezd2setz12zd2appz12_bglt BgL_new4449z00_2900;

							BgL_new4449z00_2900 =
								((BgL_procedurezd2setz12zd2appz12_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_procedurezd2setz12zd2appz12_bgl))));
							{	/* Cfa/cinfo2.scm 56 */
								BgL_procedurezd2setz12zd2appz12_bglt BgL_res5483z00_2904;

								{	/* Cfa/cinfo2.scm 56 */
									BgL_procedurezd2setz12zd2appz12_bglt BgL_new4461z00_2901;

									BgL_new4461z00_2901 = BgL_new4449z00_2900;
									{	/* Cfa/cinfo2.scm 56 */
										BgL_approxz00_bglt BgL_approx4460z00_2903;

										BgL_approx4460z00_2903 = BgL_approx4451z00_174;
										((((BgL_procedurezd2setz12zd2appz12_bglt)
													CREF(BgL_new4461z00_2901))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4460z00_2903), BUNSPEC);
										BgL_res5483z00_2904 = BgL_new4461z00_2901;
								}} BgL_res5483z00_2904;
							}
							BgL_res5484z00_2905 = BgL_new4449z00_2900;
						}
						BgL_arg5118z00_2895 = BgL_res5484z00_2905;
					}
					{	/* Cfa/cinfo2.scm 56 */
						obj_t BgL_auxz00_5391;

						BgL_objectz00_bglt BgL_auxz00_5389;

						BgL_auxz00_5391 = (obj_t) (BgL_arg5118z00_2895);
						BgL_auxz00_5389 = (BgL_objectz00_bglt) (BgL_aux4458z00_2893);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_5389, BgL_auxz00_5391);
				}}
				return
					((BgL_procedurezd2setz12zd2appz12_bglt)
					(BgL_procedurezd2setz12zd2appz12_bglt) (BgL_aux4458z00_2893));
			}
		}
	}



/* _make-procedure-set!-app */
	obj_t BGl__makezd2procedurezd2setz12zd2appzc0zzcfa_info2z00(obj_t
		BgL_envz00_4128, obj_t BgL_loc4452z00_4129, obj_t BgL_type4453z00_4130,
		obj_t BgL_sidezd2effectzf34454z21_4131, obj_t BgL_key4455z00_4132,
		obj_t BgL_fun4456z00_4133, obj_t BgL_args4457z00_4134,
		obj_t BgL_approx4451z00_4135)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 56 */
			return
				(obj_t) (BGl_makezd2procedurezd2setz12zd2appzc0zzcfa_info2z00
				(BgL_loc4452z00_4129, (BgL_typez00_bglt) (BgL_type4453z00_4130),
					BgL_sidezd2effectzf34454z21_4131, BgL_key4455z00_4132,
					(BgL_varz00_bglt) (BgL_fun4456z00_4133), BgL_args4457z00_4134,
					(BgL_approxz00_bglt) (BgL_approx4451z00_4135)));
		}
	}



/* fill-procedure-set!-app! */
	BGL_EXPORTED_DEF BgL_procedurezd2setz12zd2appz12_bglt
		BGl_fillzd2procedurezd2setz12zd2appz12zd2zzcfa_info2z00
		(BgL_procedurezd2setz12zd2appz12_bglt BgL_new4461z00_175,
		BgL_approxz00_bglt BgL_approx4460z00_176)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 56 */
			{	/* Cfa/cinfo2.scm 56 */
				BgL_approxz00_bglt BgL_approx4460z00_4483;

				BgL_approx4460z00_4483 = BgL_approx4460z00_176;
				((((BgL_procedurezd2setz12zd2appz12_bglt) CREF(BgL_new4461z00_175))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4460z00_4483), BUNSPEC);
				return BgL_new4461z00_175;
			}
		}
	}



/* _fill-procedure-set!-app! */
	obj_t BGl__fillzd2procedurezd2setz12zd2appz12zd2zzcfa_info2z00(obj_t
		BgL_envz00_4136, obj_t BgL_new4461z00_4137, obj_t BgL_approx4460z00_4138)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 56 */
			{	/* Cfa/cinfo2.scm 56 */
				BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_5402;

				{	/* Cfa/cinfo2.scm 56 */
					BgL_procedurezd2setz12zd2appz12_bglt BgL_res5625z00_4487;

					{	/* Cfa/cinfo2.scm 56 */
						BgL_procedurezd2setz12zd2appz12_bglt BgL_new4461z00_4484;

						BgL_approxz00_bglt BgL_approx4460z00_4485;

						BgL_new4461z00_4484 =
							(BgL_procedurezd2setz12zd2appz12_bglt) (BgL_new4461z00_4137);
						BgL_approx4460z00_4485 =
							(BgL_approxz00_bglt) (BgL_approx4460z00_4138);
						{	/* Cfa/cinfo2.scm 56 */
							BgL_approxz00_bglt BgL_approx4460z00_4486;

							BgL_approx4460z00_4486 = BgL_approx4460z00_4485;
							((((BgL_procedurezd2setz12zd2appz12_bglt)
										CREF(BgL_new4461z00_4484))->BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4460z00_4486), BUNSPEC);
							BgL_res5625z00_4487 = BgL_new4461z00_4484;
						}
					}
					BgL_auxz00_5402 = BgL_res5625z00_4487;
				}
				return (obj_t) (BgL_auxz00_5402);
			}
		}
	}



/* %allocate-procedure-set!-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_z52allocatezd2procedurezd2setz12zd2appz92zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 56 */
			{	/* Cfa/cinfo2.scm 56 */
				BgL_appz00_bglt BgL_new4464z00_4488;

				BgL_new4464z00_4488 =
					((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_appz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new4464z00_4488),
					BGl_classzd2numzd2zz__objectz00
					(BGl_procedurezd2setz12zd2appz12zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 56 */
					BgL_objectz00_bglt BgL_auxz00_5411;

					BgL_auxz00_5411 = (BgL_objectz00_bglt) (BgL_new4464z00_4488);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5411, BFALSE);
				}
				return BgL_new4464z00_4488;
			}
		}
	}



/* _%allocate-procedure-set!-app */
	obj_t BGl__z52allocatezd2procedurezd2setz12zd2appz92zzcfa_info2z00(obj_t
		BgL_envz00_3965)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 56 */
			{	/* Cfa/cinfo2.scm 56 */
				BgL_appz00_bglt BgL_auxz00_5414;

				{	/* Cfa/cinfo2.scm 56 */
					BgL_appz00_bglt BgL_res5626z00_4492;

					{	/* Cfa/cinfo2.scm 56 */
						BgL_appz00_bglt BgL_new4464z00_4490;

						BgL_new4464z00_4490 =
							((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_appz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4464z00_4490),
							BGl_classzd2numzd2zz__objectz00
							(BGl_procedurezd2setz12zd2appz12zzcfa_info2z00));
						{	/* Cfa/cinfo2.scm 56 */
							BgL_objectz00_bglt BgL_auxz00_5419;

							BgL_auxz00_5419 = (BgL_objectz00_bglt) (BgL_new4464z00_4490);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5419, BFALSE);
						}
						BgL_res5626z00_4492 = BgL_new4464z00_4490;
					}
					BgL_auxz00_5414 = BgL_res5626z00_4492;
				}
				return (obj_t) (BgL_auxz00_5414);
			}
		}
	}



/* procedure-set!-app-nil */
	BGL_EXPORTED_DEF BgL_procedurezd2setz12zd2appz12_bglt
		BGl_procedurezd2setz12zd2appzd2nilzc0zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 56 */
			if (
				(BGl_z52thezd2procedurezd2setz12zd2appzd2nilz40zzcfa_info2z00 ==
					BUNSPEC))
				{	/* Cfa/cinfo2.scm 56 */
					{	/* Cfa/cinfo2.scm 56 */
						BgL_appz00_bglt BgL_res5485z00_2915;

						{	/* Cfa/cinfo2.scm 56 */
							BgL_appz00_bglt BgL_new2275z00_2911;

							BgL_new2275z00_2911 =
								((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2275z00_2911),
								BGl_classzd2numzd2zz__objectz00(BGl_appz00zzast_nodez00));
							{	/* Cfa/cinfo2.scm 56 */
								BgL_objectz00_bglt BgL_auxz00_5429;

								BgL_auxz00_5429 = (BgL_objectz00_bglt) (BgL_new2275z00_2911);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5429, BFALSE);
							}
							BgL_res5485z00_2915 = BgL_new2275z00_2911;
						}
						BGl_z52thezd2procedurezd2setz12zd2appzd2nilz40zzcfa_info2z00 =
							(obj_t) (BgL_res5485z00_2915);
					}
					{	/* Cfa/cinfo2.scm 56 */
						BgL_typez00_bglt BgL_arg5121z00_1467;

						BgL_varz00_bglt BgL_arg5122z00_1468;

						BgL_arg5121z00_1467 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg5122z00_1468 = BGl_varzd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo2.scm 56 */
							BgL_appz00_bglt BgL_res5486z00_2929;

							{	/* Cfa/cinfo2.scm 56 */
								BgL_appz00_bglt BgL_new2267z00_2916;

								BgL_new2267z00_2916 =
									(BgL_appz00_bglt)
									(BGl_z52thezd2procedurezd2setz12zd2appzd2nilz40zzcfa_info2z00);
								{	/* Cfa/cinfo2.scm 56 */
									obj_t BgL_loc2261z00_2923;

									BgL_typez00_bglt BgL_type2262z00_2924;

									obj_t BgL_sidezd2effectzf32263z21_2925;

									obj_t BgL_key2264z00_2926;

									BgL_varz00_bglt BgL_fun2265z00_2927;

									obj_t BgL_args2266z00_2928;

									BgL_loc2261z00_2923 = BUNSPEC;
									BgL_type2262z00_2924 = BgL_arg5121z00_1467;
									BgL_sidezd2effectzf32263z21_2925 = BUNSPEC;
									BgL_key2264z00_2926 = BUNSPEC;
									BgL_fun2265z00_2927 = BgL_arg5122z00_1468;
									BgL_args2266z00_2928 = BUNSPEC;
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2916))->BgL_locz00) =
										((obj_t) BgL_loc2261z00_2923), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2916))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2262z00_2924), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2916))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32263z21_2925), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2916))->BgL_keyz00) =
										((obj_t) BgL_key2264z00_2926), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2916))->BgL_funz00) =
										((BgL_varz00_bglt) BgL_fun2265z00_2927), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2916))->
											BgL_argsz00) = ((obj_t) BgL_args2266z00_2928), BUNSPEC);
									BgL_res5486z00_2929 = BgL_new2267z00_2916;
							}} BgL_res5486z00_2929;
					}}
					{	/* Cfa/cinfo2.scm 56 */
						long BgL_arg5123z00_1469;

						BgL_arg5123z00_1469 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_procedurezd2setz12zd2appz12zzcfa_info2z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2procedurezd2setz12zd2appzd2nilz40zzcfa_info2z00),
							BgL_arg5123z00_1469);
					}
					{	/* Cfa/cinfo2.scm 56 */
						BgL_procedurezd2setz12zd2appz12_bglt BgL_arg5124z00_1470;

						{	/* Cfa/cinfo2.scm 56 */
							BgL_approxz00_bglt BgL_arg5125z00_1471;

							BgL_arg5125z00_1471 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo2.scm 56 */
								BgL_procedurezd2setz12zd2appz12_bglt BgL_res5488z00_2938;

								{	/* Cfa/cinfo2.scm 56 */
									BgL_procedurezd2setz12zd2appz12_bglt BgL_new4449z00_2933;

									BgL_new4449z00_2933 =
										((BgL_procedurezd2setz12zd2appz12_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_procedurezd2setz12zd2appz12_bgl))));
									{	/* Cfa/cinfo2.scm 56 */
										BgL_procedurezd2setz12zd2appz12_bglt BgL_res5487z00_2937;

										{	/* Cfa/cinfo2.scm 56 */
											BgL_procedurezd2setz12zd2appz12_bglt BgL_new4461z00_2934;

											BgL_new4461z00_2934 = BgL_new4449z00_2933;
											{	/* Cfa/cinfo2.scm 56 */
												BgL_approxz00_bglt BgL_approx4460z00_2936;

												BgL_approx4460z00_2936 = BgL_arg5125z00_1471;
												((((BgL_procedurezd2setz12zd2appz12_bglt)
															CREF(BgL_new4461z00_2934))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4460z00_2936),
													BUNSPEC);
												BgL_res5487z00_2937 = BgL_new4461z00_2934;
										}} BgL_res5487z00_2937;
									}
									BgL_res5488z00_2938 = BgL_new4449z00_2933;
								}
								BgL_arg5124z00_1470 = BgL_res5488z00_2938;
						}}
						{	/* Cfa/cinfo2.scm 56 */
							obj_t BgL_auxz00_5450;

							BgL_objectz00_bglt BgL_auxz00_5448;

							BgL_auxz00_5450 = (obj_t) (BgL_arg5124z00_1470);
							BgL_auxz00_5448 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2procedurezd2setz12zd2appzd2nilz40zzcfa_info2z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5448, BgL_auxz00_5450);
				}}}
			else
				{	/* Cfa/cinfo2.scm 56 */
					BFALSE;
				}
			return
				(BgL_procedurezd2setz12zd2appz12_bglt)
				(BGl_z52thezd2procedurezd2setz12zd2appzd2nilz40zzcfa_info2z00);
		}
	}



/* _procedure-set!-app-nil */
	obj_t BGl__procedurezd2setz12zd2appzd2nilzc0zzcfa_info2z00(obj_t
		BgL_envz00_3966)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 56 */
			return (obj_t) (BGl_procedurezd2setz12zd2appzd2nilzc0zzcfa_info2z00());
		}
	}



/* procedure-ref-app? */
	BGL_EXPORTED_DEF bool_t BGl_procedurezd2refzd2appzf3zf3zzcfa_info2z00(obj_t
		BgL_obj4428z00_178)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 55 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4428z00_178,
				BGl_procedurezd2refzd2appz00zzcfa_info2z00);
		}
	}



/* _procedure-ref-app? */
	obj_t BGl__procedurezd2refzd2appzf3zf3zzcfa_info2z00(obj_t BgL_envz00_3963,
		obj_t BgL_obj4428z00_3964)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 55 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4428z00_3964,
					BGl_procedurezd2refzd2appz00zzcfa_info2z00));
		}
	}



/* widening-procedure-ref-app */
	BGL_EXPORTED_DEF BgL_procedurezd2refzd2appz00_bglt
		BGl_wideningzd2procedurezd2refzd2appzd2zzcfa_info2z00(BgL_approxz00_bglt
		BgL_approx4405z00_182)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 55 */
			{	/* Cfa/cinfo2.scm 55 */
				BgL_procedurezd2refzd2appz00_bglt BgL_new4406z00_2939;

				BgL_new4406z00_2939 =
					((BgL_procedurezd2refzd2appz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_procedurezd2refzd2appz00_bgl))));
				{	/* Cfa/cinfo2.scm 55 */
					BgL_procedurezd2refzd2appz00_bglt BgL_res5489z00_2943;

					{	/* Cfa/cinfo2.scm 55 */
						BgL_procedurezd2refzd2appz00_bglt BgL_new4418z00_2940;

						BgL_new4418z00_2940 = BgL_new4406z00_2939;
						{	/* Cfa/cinfo2.scm 55 */
							BgL_approxz00_bglt BgL_approx4417z00_2942;

							BgL_approx4417z00_2942 = BgL_approx4405z00_182;
							((((BgL_procedurezd2refzd2appz00_bglt)
										CREF(BgL_new4418z00_2940))->BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4417z00_2942), BUNSPEC);
							BgL_res5489z00_2943 = BgL_new4418z00_2940;
					}} BgL_res5489z00_2943;
				}
				return BgL_new4406z00_2939;
			}
		}
	}



/* _widening-procedure-ref-app */
	obj_t BGl__wideningzd2procedurezd2refzd2appzd2zzcfa_info2z00(obj_t
		BgL_envz00_4139, obj_t BgL_approx4405z00_4140)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 55 */
			return
				(obj_t) (BGl_wideningzd2procedurezd2refzd2appzd2zzcfa_info2z00(
					(BgL_approxz00_bglt) (BgL_approx4405z00_4140)));
		}
	}



/* make-procedure-ref-app */
	BGL_EXPORTED_DEF BgL_procedurezd2refzd2appz00_bglt
		BGl_makezd2procedurezd2refzd2appzd2zzcfa_info2z00(obj_t BgL_loc4409z00_183,
		BgL_typez00_bglt BgL_type4410z00_184, obj_t BgL_sidezd2effectzf34411z21_185,
		obj_t BgL_key4412z00_186, BgL_varz00_bglt BgL_fun4413z00_187,
		obj_t BgL_args4414z00_188, BgL_approxz00_bglt BgL_approx4408z00_189)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 55 */
			{	/* Cfa/cinfo2.scm 55 */
				BgL_appz00_bglt BgL_aux4415z00_2944;

				BgL_aux4415z00_2944 =
					BGl_makezd2appzd2zzast_nodez00(BgL_loc4409z00_183,
					BgL_type4410z00_184, BgL_sidezd2effectzf34411z21_185,
					BgL_key4412z00_186, BgL_fun4413z00_187, BgL_args4414z00_188);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4415z00_2944),
					BGl_classzd2numzd2zz__objectz00
					(BGl_procedurezd2refzd2appz00zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 55 */
					BgL_procedurezd2refzd2appz00_bglt BgL_arg5127z00_2946;

					{	/* Cfa/cinfo2.scm 55 */
						BgL_procedurezd2refzd2appz00_bglt BgL_res5491z00_2956;

						{	/* Cfa/cinfo2.scm 55 */
							BgL_procedurezd2refzd2appz00_bglt BgL_new4406z00_2951;

							BgL_new4406z00_2951 =
								((BgL_procedurezd2refzd2appz00_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_procedurezd2refzd2appz00_bgl))));
							{	/* Cfa/cinfo2.scm 55 */
								BgL_procedurezd2refzd2appz00_bglt BgL_res5490z00_2955;

								{	/* Cfa/cinfo2.scm 55 */
									BgL_procedurezd2refzd2appz00_bglt BgL_new4418z00_2952;

									BgL_new4418z00_2952 = BgL_new4406z00_2951;
									{	/* Cfa/cinfo2.scm 55 */
										BgL_approxz00_bglt BgL_approx4417z00_2954;

										BgL_approx4417z00_2954 = BgL_approx4408z00_189;
										((((BgL_procedurezd2refzd2appz00_bglt)
													CREF(BgL_new4418z00_2952))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4417z00_2954), BUNSPEC);
										BgL_res5490z00_2955 = BgL_new4418z00_2952;
								}} BgL_res5490z00_2955;
							}
							BgL_res5491z00_2956 = BgL_new4406z00_2951;
						}
						BgL_arg5127z00_2946 = BgL_res5491z00_2956;
					}
					{	/* Cfa/cinfo2.scm 55 */
						obj_t BgL_auxz00_5472;

						BgL_objectz00_bglt BgL_auxz00_5470;

						BgL_auxz00_5472 = (obj_t) (BgL_arg5127z00_2946);
						BgL_auxz00_5470 = (BgL_objectz00_bglt) (BgL_aux4415z00_2944);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_5470, BgL_auxz00_5472);
				}}
				return
					((BgL_procedurezd2refzd2appz00_bglt)
					(BgL_procedurezd2refzd2appz00_bglt) (BgL_aux4415z00_2944));
			}
		}
	}



/* _make-procedure-ref-app */
	obj_t BGl__makezd2procedurezd2refzd2appzd2zzcfa_info2z00(obj_t
		BgL_envz00_4141, obj_t BgL_loc4409z00_4142, obj_t BgL_type4410z00_4143,
		obj_t BgL_sidezd2effectzf34411z21_4144, obj_t BgL_key4412z00_4145,
		obj_t BgL_fun4413z00_4146, obj_t BgL_args4414z00_4147,
		obj_t BgL_approx4408z00_4148)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 55 */
			return
				(obj_t) (BGl_makezd2procedurezd2refzd2appzd2zzcfa_info2z00
				(BgL_loc4409z00_4142, (BgL_typez00_bglt) (BgL_type4410z00_4143),
					BgL_sidezd2effectzf34411z21_4144, BgL_key4412z00_4145,
					(BgL_varz00_bglt) (BgL_fun4413z00_4146), BgL_args4414z00_4147,
					(BgL_approxz00_bglt) (BgL_approx4408z00_4148)));
		}
	}



/* fill-procedure-ref-app! */
	BGL_EXPORTED_DEF BgL_procedurezd2refzd2appz00_bglt
		BGl_fillzd2procedurezd2refzd2appz12zc0zzcfa_info2z00
		(BgL_procedurezd2refzd2appz00_bglt BgL_new4418z00_190,
		BgL_approxz00_bglt BgL_approx4417z00_191)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 55 */
			{	/* Cfa/cinfo2.scm 55 */
				BgL_approxz00_bglt BgL_approx4417z00_4494;

				BgL_approx4417z00_4494 = BgL_approx4417z00_191;
				((((BgL_procedurezd2refzd2appz00_bglt) CREF(BgL_new4418z00_190))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4417z00_4494), BUNSPEC);
				return BgL_new4418z00_190;
			}
		}
	}



/* _fill-procedure-ref-app! */
	obj_t BGl__fillzd2procedurezd2refzd2appz12zc0zzcfa_info2z00(obj_t
		BgL_envz00_4149, obj_t BgL_new4418z00_4150, obj_t BgL_approx4417z00_4151)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 55 */
			{	/* Cfa/cinfo2.scm 55 */
				BgL_procedurezd2refzd2appz00_bglt BgL_auxz00_5483;

				{	/* Cfa/cinfo2.scm 55 */
					BgL_procedurezd2refzd2appz00_bglt BgL_res5627z00_4498;

					{	/* Cfa/cinfo2.scm 55 */
						BgL_procedurezd2refzd2appz00_bglt BgL_new4418z00_4495;

						BgL_approxz00_bglt BgL_approx4417z00_4496;

						BgL_new4418z00_4495 =
							(BgL_procedurezd2refzd2appz00_bglt) (BgL_new4418z00_4150);
						BgL_approx4417z00_4496 =
							(BgL_approxz00_bglt) (BgL_approx4417z00_4151);
						{	/* Cfa/cinfo2.scm 55 */
							BgL_approxz00_bglt BgL_approx4417z00_4497;

							BgL_approx4417z00_4497 = BgL_approx4417z00_4496;
							((((BgL_procedurezd2refzd2appz00_bglt)
										CREF(BgL_new4418z00_4495))->BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4417z00_4497), BUNSPEC);
							BgL_res5627z00_4498 = BgL_new4418z00_4495;
						}
					}
					BgL_auxz00_5483 = BgL_res5627z00_4498;
				}
				return (obj_t) (BgL_auxz00_5483);
			}
		}
	}



/* %allocate-procedure-ref-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_z52allocatezd2procedurezd2refzd2appz80zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 55 */
			{	/* Cfa/cinfo2.scm 55 */
				BgL_appz00_bglt BgL_new4421z00_4499;

				BgL_new4421z00_4499 =
					((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_appz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new4421z00_4499),
					BGl_classzd2numzd2zz__objectz00
					(BGl_procedurezd2refzd2appz00zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 55 */
					BgL_objectz00_bglt BgL_auxz00_5492;

					BgL_auxz00_5492 = (BgL_objectz00_bglt) (BgL_new4421z00_4499);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5492, BFALSE);
				}
				return BgL_new4421z00_4499;
			}
		}
	}



/* _%allocate-procedure-ref-app */
	obj_t BGl__z52allocatezd2procedurezd2refzd2appz80zzcfa_info2z00(obj_t
		BgL_envz00_3961)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 55 */
			{	/* Cfa/cinfo2.scm 55 */
				BgL_appz00_bglt BgL_auxz00_5495;

				{	/* Cfa/cinfo2.scm 55 */
					BgL_appz00_bglt BgL_res5628z00_4503;

					{	/* Cfa/cinfo2.scm 55 */
						BgL_appz00_bglt BgL_new4421z00_4501;

						BgL_new4421z00_4501 =
							((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_appz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4421z00_4501),
							BGl_classzd2numzd2zz__objectz00
							(BGl_procedurezd2refzd2appz00zzcfa_info2z00));
						{	/* Cfa/cinfo2.scm 55 */
							BgL_objectz00_bglt BgL_auxz00_5500;

							BgL_auxz00_5500 = (BgL_objectz00_bglt) (BgL_new4421z00_4501);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5500, BFALSE);
						}
						BgL_res5628z00_4503 = BgL_new4421z00_4501;
					}
					BgL_auxz00_5495 = BgL_res5628z00_4503;
				}
				return (obj_t) (BgL_auxz00_5495);
			}
		}
	}



/* procedure-ref-app-nil */
	BGL_EXPORTED_DEF BgL_procedurezd2refzd2appz00_bglt
		BGl_procedurezd2refzd2appzd2nilzd2zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 55 */
			if (
				(BGl_z52thezd2procedurezd2refzd2appzd2nilz52zzcfa_info2z00 == BUNSPEC))
				{	/* Cfa/cinfo2.scm 55 */
					{	/* Cfa/cinfo2.scm 55 */
						BgL_appz00_bglt BgL_res5492z00_2966;

						{	/* Cfa/cinfo2.scm 55 */
							BgL_appz00_bglt BgL_new2275z00_2962;

							BgL_new2275z00_2962 =
								((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2275z00_2962),
								BGl_classzd2numzd2zz__objectz00(BGl_appz00zzast_nodez00));
							{	/* Cfa/cinfo2.scm 55 */
								BgL_objectz00_bglt BgL_auxz00_5510;

								BgL_auxz00_5510 = (BgL_objectz00_bglt) (BgL_new2275z00_2962);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5510, BFALSE);
							}
							BgL_res5492z00_2966 = BgL_new2275z00_2962;
						}
						BGl_z52thezd2procedurezd2refzd2appzd2nilz52zzcfa_info2z00 =
							(obj_t) (BgL_res5492z00_2966);
					}
					{	/* Cfa/cinfo2.scm 55 */
						BgL_typez00_bglt BgL_arg5130z00_1481;

						BgL_varz00_bglt BgL_arg5131z00_1482;

						BgL_arg5130z00_1481 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg5131z00_1482 = BGl_varzd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo2.scm 55 */
							BgL_appz00_bglt BgL_res5493z00_2980;

							{	/* Cfa/cinfo2.scm 55 */
								BgL_appz00_bglt BgL_new2267z00_2967;

								BgL_new2267z00_2967 =
									(BgL_appz00_bglt)
									(BGl_z52thezd2procedurezd2refzd2appzd2nilz52zzcfa_info2z00);
								{	/* Cfa/cinfo2.scm 55 */
									obj_t BgL_loc2261z00_2974;

									BgL_typez00_bglt BgL_type2262z00_2975;

									obj_t BgL_sidezd2effectzf32263z21_2976;

									obj_t BgL_key2264z00_2977;

									BgL_varz00_bglt BgL_fun2265z00_2978;

									obj_t BgL_args2266z00_2979;

									BgL_loc2261z00_2974 = BUNSPEC;
									BgL_type2262z00_2975 = BgL_arg5130z00_1481;
									BgL_sidezd2effectzf32263z21_2976 = BUNSPEC;
									BgL_key2264z00_2977 = BUNSPEC;
									BgL_fun2265z00_2978 = BgL_arg5131z00_1482;
									BgL_args2266z00_2979 = BUNSPEC;
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2967))->BgL_locz00) =
										((obj_t) BgL_loc2261z00_2974), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2967))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2262z00_2975), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2967))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32263z21_2976), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2967))->BgL_keyz00) =
										((obj_t) BgL_key2264z00_2977), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2967))->BgL_funz00) =
										((BgL_varz00_bglt) BgL_fun2265z00_2978), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_2967))->
											BgL_argsz00) = ((obj_t) BgL_args2266z00_2979), BUNSPEC);
									BgL_res5493z00_2980 = BgL_new2267z00_2967;
							}} BgL_res5493z00_2980;
					}}
					{	/* Cfa/cinfo2.scm 55 */
						long BgL_arg5132z00_1483;

						BgL_arg5132z00_1483 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_procedurezd2refzd2appz00zzcfa_info2z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2procedurezd2refzd2appzd2nilz52zzcfa_info2z00),
							BgL_arg5132z00_1483);
					}
					{	/* Cfa/cinfo2.scm 55 */
						BgL_procedurezd2refzd2appz00_bglt BgL_arg5133z00_1484;

						{	/* Cfa/cinfo2.scm 55 */
							BgL_approxz00_bglt BgL_arg5134z00_1485;

							BgL_arg5134z00_1485 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo2.scm 55 */
								BgL_procedurezd2refzd2appz00_bglt BgL_res5495z00_2989;

								{	/* Cfa/cinfo2.scm 55 */
									BgL_procedurezd2refzd2appz00_bglt BgL_new4406z00_2984;

									BgL_new4406z00_2984 =
										((BgL_procedurezd2refzd2appz00_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_procedurezd2refzd2appz00_bgl))));
									{	/* Cfa/cinfo2.scm 55 */
										BgL_procedurezd2refzd2appz00_bglt BgL_res5494z00_2988;

										{	/* Cfa/cinfo2.scm 55 */
											BgL_procedurezd2refzd2appz00_bglt BgL_new4418z00_2985;

											BgL_new4418z00_2985 = BgL_new4406z00_2984;
											{	/* Cfa/cinfo2.scm 55 */
												BgL_approxz00_bglt BgL_approx4417z00_2987;

												BgL_approx4417z00_2987 = BgL_arg5134z00_1485;
												((((BgL_procedurezd2refzd2appz00_bglt)
															CREF(BgL_new4418z00_2985))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4417z00_2987),
													BUNSPEC);
												BgL_res5494z00_2988 = BgL_new4418z00_2985;
										}} BgL_res5494z00_2988;
									}
									BgL_res5495z00_2989 = BgL_new4406z00_2984;
								}
								BgL_arg5133z00_1484 = BgL_res5495z00_2989;
						}}
						{	/* Cfa/cinfo2.scm 55 */
							obj_t BgL_auxz00_5531;

							BgL_objectz00_bglt BgL_auxz00_5529;

							BgL_auxz00_5531 = (obj_t) (BgL_arg5133z00_1484);
							BgL_auxz00_5529 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2procedurezd2refzd2appzd2nilz52zzcfa_info2z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5529, BgL_auxz00_5531);
				}}}
			else
				{	/* Cfa/cinfo2.scm 55 */
					BFALSE;
				}
			return
				(BgL_procedurezd2refzd2appz00_bglt)
				(BGl_z52thezd2procedurezd2refzd2appzd2nilz52zzcfa_info2z00);
		}
	}



/* _procedure-ref-app-nil */
	obj_t BGl__procedurezd2refzd2appzd2nilzd2zzcfa_info2z00(obj_t BgL_envz00_3962)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 55 */
			return (obj_t) (BGl_procedurezd2refzd2appzd2nilzd2zzcfa_info2z00());
		}
	}



/* make-procedure-app? */
	BGL_EXPORTED_DEF bool_t BGl_makezd2procedurezd2appzf3zf3zzcfa_info2z00(obj_t
		BgL_obj4363z00_193)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 38 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4363z00_193,
				BGl_makezd2procedurezd2appz00zzcfa_info2z00);
		}
	}



/* _make-procedure-app? */
	obj_t BGl__makezd2procedurezd2appzf3zf3zzcfa_info2z00(obj_t BgL_envz00_3959,
		obj_t BgL_obj4363z00_3960)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 38 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4363z00_3960,
					BGl_makezd2procedurezd2appz00zzcfa_info2z00));
		}
	}



/* widening-make-procedure-app */
	BGL_EXPORTED_DEF BgL_makezd2procedurezd2appz00_bglt
		BGl_wideningzd2makezd2procedurezd2appzd2zzcfa_info2z00(BgL_approxz00_bglt
		BgL_approx4312z00_197, obj_t BgL_valueszd2approx4313zd2_198,
		long BgL_lostzd2stamp4314zd2_199, bool_t BgL_xzd2tzf34315z21_200,
		bool_t BgL_x4316z00_201, bool_t BgL_t4317z00_202,
		BgL_variablez00_bglt BgL_owner4318z00_203,
		obj_t BgL_stackzd2stamp4319zd2_204)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 38 */
			{	/* Cfa/cinfo2.scm 38 */
				BgL_makezd2procedurezd2appz00_bglt BgL_new4320z00_2990;

				BgL_new4320z00_2990 =
					((BgL_makezd2procedurezd2appz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_makezd2procedurezd2appz00_bgl))));
				{	/* Cfa/cinfo2.scm 38 */
					BgL_makezd2procedurezd2appz00_bglt BgL_res5496z00_3008;

					{	/* Cfa/cinfo2.scm 38 */
						BgL_makezd2procedurezd2appz00_bglt BgL_new4346z00_2991;

						BgL_new4346z00_2991 = BgL_new4320z00_2990;
						{	/* Cfa/cinfo2.scm 38 */
							BgL_approxz00_bglt BgL_approx4338z00_3000;

							obj_t BgL_valueszd2approx4339zd2_3001;

							long BgL_lostzd2stamp4340zd2_3002;

							bool_t BgL_xzd2tzf34341z21_3003;

							bool_t BgL_x4342z00_3004;

							bool_t BgL_t4343z00_3005;

							BgL_variablez00_bglt BgL_owner4344z00_3006;

							obj_t BgL_stackzd2stamp4345zd2_3007;

							BgL_approx4338z00_3000 = BgL_approx4312z00_197;
							BgL_valueszd2approx4339zd2_3001 = BgL_valueszd2approx4313zd2_198;
							BgL_lostzd2stamp4340zd2_3002 = BgL_lostzd2stamp4314zd2_199;
							BgL_xzd2tzf34341z21_3003 = BgL_xzd2tzf34315z21_200;
							BgL_x4342z00_3004 = BgL_x4316z00_201;
							BgL_t4343z00_3005 = BgL_t4317z00_202;
							BgL_owner4344z00_3006 = BgL_owner4318z00_203;
							BgL_stackzd2stamp4345zd2_3007 = BgL_stackzd2stamp4319zd2_204;
							((((BgL_makezd2procedurezd2appz00_bglt)
										CREF(BgL_new4346z00_2991))->BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4338z00_3000), BUNSPEC);
							((((BgL_makezd2procedurezd2appz00_bglt)
										CREF(BgL_new4346z00_2991))->BgL_valueszd2approxzd2) =
								((obj_t) BgL_valueszd2approx4339zd2_3001), BUNSPEC);
							((((BgL_makezd2procedurezd2appz00_bglt)
										CREF(BgL_new4346z00_2991))->BgL_lostzd2stampzd2) =
								((long) BgL_lostzd2stamp4340zd2_3002), BUNSPEC);
							((((BgL_makezd2procedurezd2appz00_bglt)
										CREF(BgL_new4346z00_2991))->BgL_xzd2tzf3z21) =
								((bool_t) BgL_xzd2tzf34341z21_3003), BUNSPEC);
							((((BgL_makezd2procedurezd2appz00_bglt)
										CREF(BgL_new4346z00_2991))->BgL_xz00) =
								((bool_t) BgL_x4342z00_3004), BUNSPEC);
							((((BgL_makezd2procedurezd2appz00_bglt)
										CREF(BgL_new4346z00_2991))->BgL_tz00) =
								((bool_t) BgL_t4343z00_3005), BUNSPEC);
							((((BgL_makezd2procedurezd2appz00_bglt)
										CREF(BgL_new4346z00_2991))->BgL_ownerz00) =
								((BgL_variablez00_bglt) BgL_owner4344z00_3006), BUNSPEC);
							((((BgL_makezd2procedurezd2appz00_bglt)
										CREF(BgL_new4346z00_2991))->BgL_stackzd2stampzd2) =
								((obj_t) BgL_stackzd2stamp4345zd2_3007), BUNSPEC);
							BgL_res5496z00_3008 = BgL_new4346z00_2991;
					}} BgL_res5496z00_3008;
				}
				return BgL_new4320z00_2990;
			}
		}
	}



/* _widening-make-procedure-app */
	obj_t BGl__wideningzd2makezd2procedurezd2appzd2zzcfa_info2z00(obj_t
		BgL_envz00_4152, obj_t BgL_approx4312z00_4153,
		obj_t BgL_valueszd2approx4313zd2_4154, obj_t BgL_lostzd2stamp4314zd2_4155,
		obj_t BgL_xzd2tzf34315z21_4156, obj_t BgL_x4316z00_4157,
		obj_t BgL_t4317z00_4158, obj_t BgL_owner4318z00_4159,
		obj_t BgL_stackzd2stamp4319zd2_4160)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 38 */
			return
				(obj_t) (BGl_wideningzd2makezd2procedurezd2appzd2zzcfa_info2z00(
					(BgL_approxz00_bglt) (BgL_approx4312z00_4153),
					BgL_valueszd2approx4313zd2_4154,
					(long) CINT(BgL_lostzd2stamp4314zd2_4155),
					CBOOL(BgL_xzd2tzf34315z21_4156), CBOOL(BgL_x4316z00_4157),
					CBOOL(BgL_t4317z00_4158),
					(BgL_variablez00_bglt) (BgL_owner4318z00_4159),
					BgL_stackzd2stamp4319zd2_4160));
		}
	}



/* make-make-procedure-app */
	BGL_EXPORTED_DEF BgL_makezd2procedurezd2appz00_bglt
		BGl_makezd2makezd2procedurezd2appzd2zzcfa_info2z00(obj_t BgL_loc4330z00_205,
		BgL_typez00_bglt BgL_type4331z00_206, obj_t BgL_sidezd2effectzf34332z21_207,
		obj_t BgL_key4333z00_208, BgL_varz00_bglt BgL_fun4334z00_209,
		obj_t BgL_args4335z00_210, BgL_approxz00_bglt BgL_approx4322z00_211,
		obj_t BgL_valueszd2approx4323zd2_212, long BgL_lostzd2stamp4324zd2_213,
		bool_t BgL_xzd2tzf34325z21_214, bool_t BgL_x4326z00_215,
		bool_t BgL_t4327z00_216, BgL_variablez00_bglt BgL_owner4328z00_217,
		obj_t BgL_stackzd2stamp4329zd2_218)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 38 */
			{	/* Cfa/cinfo2.scm 38 */
				BgL_appz00_bglt BgL_aux4336z00_3009;

				BgL_aux4336z00_3009 =
					BGl_makezd2appzd2zzast_nodez00(BgL_loc4330z00_205,
					BgL_type4331z00_206, BgL_sidezd2effectzf34332z21_207,
					BgL_key4333z00_208, BgL_fun4334z00_209, BgL_args4335z00_210);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4336z00_3009),
					BGl_classzd2numzd2zz__objectz00
					(BGl_makezd2procedurezd2appz00zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 38 */
					BgL_makezd2procedurezd2appz00_bglt BgL_arg5136z00_3011;

					{	/* Cfa/cinfo2.scm 38 */
						BgL_makezd2procedurezd2appz00_bglt BgL_res5498z00_3042;

						{	/* Cfa/cinfo2.scm 38 */
							BgL_makezd2procedurezd2appz00_bglt BgL_new4320z00_3023;

							BgL_new4320z00_3023 =
								((BgL_makezd2procedurezd2appz00_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_makezd2procedurezd2appz00_bgl))));
							{	/* Cfa/cinfo2.scm 38 */
								BgL_makezd2procedurezd2appz00_bglt BgL_res5497z00_3041;

								{	/* Cfa/cinfo2.scm 38 */
									BgL_makezd2procedurezd2appz00_bglt BgL_new4346z00_3024;

									BgL_new4346z00_3024 = BgL_new4320z00_3023;
									{	/* Cfa/cinfo2.scm 38 */
										BgL_approxz00_bglt BgL_approx4338z00_3033;

										obj_t BgL_valueszd2approx4339zd2_3034;

										long BgL_lostzd2stamp4340zd2_3035;

										bool_t BgL_xzd2tzf34341z21_3036;

										bool_t BgL_x4342z00_3037;

										bool_t BgL_t4343z00_3038;

										BgL_variablez00_bglt BgL_owner4344z00_3039;

										obj_t BgL_stackzd2stamp4345zd2_3040;

										BgL_approx4338z00_3033 = BgL_approx4322z00_211;
										BgL_valueszd2approx4339zd2_3034 =
											BgL_valueszd2approx4323zd2_212;
										BgL_lostzd2stamp4340zd2_3035 = BgL_lostzd2stamp4324zd2_213;
										BgL_xzd2tzf34341z21_3036 = BgL_xzd2tzf34325z21_214;
										BgL_x4342z00_3037 = BgL_x4326z00_215;
										BgL_t4343z00_3038 = BgL_t4327z00_216;
										BgL_owner4344z00_3039 = BgL_owner4328z00_217;
										BgL_stackzd2stamp4345zd2_3040 =
											BgL_stackzd2stamp4329zd2_218;
										((((BgL_makezd2procedurezd2appz00_bglt)
													CREF(BgL_new4346z00_3024))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4338z00_3033), BUNSPEC);
										((((BgL_makezd2procedurezd2appz00_bglt)
													CREF(BgL_new4346z00_3024))->BgL_valueszd2approxzd2) =
											((obj_t) BgL_valueszd2approx4339zd2_3034), BUNSPEC);
										((((BgL_makezd2procedurezd2appz00_bglt)
													CREF(BgL_new4346z00_3024))->BgL_lostzd2stampzd2) =
											((long) BgL_lostzd2stamp4340zd2_3035), BUNSPEC);
										((((BgL_makezd2procedurezd2appz00_bglt)
													CREF(BgL_new4346z00_3024))->BgL_xzd2tzf3z21) =
											((bool_t) BgL_xzd2tzf34341z21_3036), BUNSPEC);
										((((BgL_makezd2procedurezd2appz00_bglt)
													CREF(BgL_new4346z00_3024))->BgL_xz00) =
											((bool_t) BgL_x4342z00_3037), BUNSPEC);
										((((BgL_makezd2procedurezd2appz00_bglt)
													CREF(BgL_new4346z00_3024))->BgL_tz00) =
											((bool_t) BgL_t4343z00_3038), BUNSPEC);
										((((BgL_makezd2procedurezd2appz00_bglt)
													CREF(BgL_new4346z00_3024))->BgL_ownerz00) =
											((BgL_variablez00_bglt) BgL_owner4344z00_3039), BUNSPEC);
										((((BgL_makezd2procedurezd2appz00_bglt)
													CREF(BgL_new4346z00_3024))->BgL_stackzd2stampzd2) =
											((obj_t) BgL_stackzd2stamp4345zd2_3040), BUNSPEC);
										BgL_res5497z00_3041 = BgL_new4346z00_3024;
								}} BgL_res5497z00_3041;
							}
							BgL_res5498z00_3042 = BgL_new4320z00_3023;
						}
						BgL_arg5136z00_3011 = BgL_res5498z00_3042;
					}
					{	/* Cfa/cinfo2.scm 38 */
						obj_t BgL_auxz00_5572;

						BgL_objectz00_bglt BgL_auxz00_5570;

						BgL_auxz00_5572 = (obj_t) (BgL_arg5136z00_3011);
						BgL_auxz00_5570 = (BgL_objectz00_bglt) (BgL_aux4336z00_3009);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_5570, BgL_auxz00_5572);
				}}
				return
					((BgL_makezd2procedurezd2appz00_bglt)
					(BgL_makezd2procedurezd2appz00_bglt) (BgL_aux4336z00_3009));
			}
		}
	}



/* _make-make-procedure-app */
	obj_t BGl__makezd2makezd2procedurezd2appzd2zzcfa_info2z00(obj_t
		BgL_envz00_4161, obj_t BgL_loc4330z00_4162, obj_t BgL_type4331z00_4163,
		obj_t BgL_sidezd2effectzf34332z21_4164, obj_t BgL_key4333z00_4165,
		obj_t BgL_fun4334z00_4166, obj_t BgL_args4335z00_4167,
		obj_t BgL_approx4322z00_4168, obj_t BgL_valueszd2approx4323zd2_4169,
		obj_t BgL_lostzd2stamp4324zd2_4170, obj_t BgL_xzd2tzf34325z21_4171,
		obj_t BgL_x4326z00_4172, obj_t BgL_t4327z00_4173,
		obj_t BgL_owner4328z00_4174, obj_t BgL_stackzd2stamp4329zd2_4175)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 38 */
			return
				(obj_t) (BGl_makezd2makezd2procedurezd2appzd2zzcfa_info2z00
				(BgL_loc4330z00_4162, (BgL_typez00_bglt) (BgL_type4331z00_4163),
					BgL_sidezd2effectzf34332z21_4164, BgL_key4333z00_4165,
					(BgL_varz00_bglt) (BgL_fun4334z00_4166), BgL_args4335z00_4167,
					(BgL_approxz00_bglt) (BgL_approx4322z00_4168),
					BgL_valueszd2approx4323zd2_4169,
					(long) CINT(BgL_lostzd2stamp4324zd2_4170),
					CBOOL(BgL_xzd2tzf34325z21_4171), CBOOL(BgL_x4326z00_4172),
					CBOOL(BgL_t4327z00_4173),
					(BgL_variablez00_bglt) (BgL_owner4328z00_4174),
					BgL_stackzd2stamp4329zd2_4175));
		}
	}



/* fill-make-procedure-app! */
	BGL_EXPORTED_DEF BgL_makezd2procedurezd2appz00_bglt
		BGl_fillzd2makezd2procedurezd2appz12zc0zzcfa_info2z00
		(BgL_makezd2procedurezd2appz00_bglt BgL_new4346z00_219,
		BgL_approxz00_bglt BgL_approx4338z00_220,
		obj_t BgL_valueszd2approx4339zd2_221, long BgL_lostzd2stamp4340zd2_222,
		bool_t BgL_xzd2tzf34341z21_223, bool_t BgL_x4342z00_224,
		bool_t BgL_t4343z00_225, BgL_variablez00_bglt BgL_owner4344z00_226,
		obj_t BgL_stackzd2stamp4345zd2_227)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 38 */
			{	/* Cfa/cinfo2.scm 38 */
				BgL_approxz00_bglt BgL_approx4338z00_4505;

				obj_t BgL_valueszd2approx4339zd2_4506;

				long BgL_lostzd2stamp4340zd2_4507;

				bool_t BgL_xzd2tzf34341z21_4508;

				bool_t BgL_x4342z00_4509;

				bool_t BgL_t4343z00_4510;

				BgL_variablez00_bglt BgL_owner4344z00_4511;

				obj_t BgL_stackzd2stamp4345zd2_4512;

				BgL_approx4338z00_4505 = BgL_approx4338z00_220;
				BgL_valueszd2approx4339zd2_4506 = BgL_valueszd2approx4339zd2_221;
				BgL_lostzd2stamp4340zd2_4507 = BgL_lostzd2stamp4340zd2_222;
				BgL_xzd2tzf34341z21_4508 = BgL_xzd2tzf34341z21_223;
				BgL_x4342z00_4509 = BgL_x4342z00_224;
				BgL_t4343z00_4510 = BgL_t4343z00_225;
				BgL_owner4344z00_4511 = BgL_owner4344z00_226;
				BgL_stackzd2stamp4345zd2_4512 = BgL_stackzd2stamp4345zd2_227;
				((((BgL_makezd2procedurezd2appz00_bglt) CREF(BgL_new4346z00_219))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4338z00_4505), BUNSPEC);
				((((BgL_makezd2procedurezd2appz00_bglt) CREF(BgL_new4346z00_219))->
						BgL_valueszd2approxzd2) =
					((obj_t) BgL_valueszd2approx4339zd2_4506), BUNSPEC);
				((((BgL_makezd2procedurezd2appz00_bglt) CREF(BgL_new4346z00_219))->
						BgL_lostzd2stampzd2) =
					((long) BgL_lostzd2stamp4340zd2_4507), BUNSPEC);
				((((BgL_makezd2procedurezd2appz00_bglt) CREF(BgL_new4346z00_219))->
						BgL_xzd2tzf3z21) = ((bool_t) BgL_xzd2tzf34341z21_4508), BUNSPEC);
				((((BgL_makezd2procedurezd2appz00_bglt) CREF(BgL_new4346z00_219))->
						BgL_xz00) = ((bool_t) BgL_x4342z00_4509), BUNSPEC);
				((((BgL_makezd2procedurezd2appz00_bglt) CREF(BgL_new4346z00_219))->
						BgL_tz00) = ((bool_t) BgL_t4343z00_4510), BUNSPEC);
				((((BgL_makezd2procedurezd2appz00_bglt) CREF(BgL_new4346z00_219))->
						BgL_ownerz00) =
					((BgL_variablez00_bglt) BgL_owner4344z00_4511), BUNSPEC);
				((((BgL_makezd2procedurezd2appz00_bglt) CREF(BgL_new4346z00_219))->
						BgL_stackzd2stampzd2) =
					((obj_t) BgL_stackzd2stamp4345zd2_4512), BUNSPEC);
				return BgL_new4346z00_219;
			}
		}
	}



/* _fill-make-procedure-app! */
	obj_t BGl__fillzd2makezd2procedurezd2appz12zc0zzcfa_info2z00(obj_t
		BgL_envz00_4176, obj_t BgL_new4346z00_4177, obj_t BgL_approx4338z00_4178,
		obj_t BgL_valueszd2approx4339zd2_4179, obj_t BgL_lostzd2stamp4340zd2_4180,
		obj_t BgL_xzd2tzf34341z21_4181, obj_t BgL_x4342z00_4182,
		obj_t BgL_t4343z00_4183, obj_t BgL_owner4344z00_4184,
		obj_t BgL_stackzd2stamp4345zd2_4185)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 38 */
			{	/* Cfa/cinfo2.scm 38 */
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_5595;

				{	/* Cfa/cinfo2.scm 38 */
					BgL_makezd2procedurezd2appz00_bglt BgL_res5629z00_4530;

					{	/* Cfa/cinfo2.scm 38 */
						BgL_makezd2procedurezd2appz00_bglt BgL_new4346z00_4513;

						BgL_approxz00_bglt BgL_approx4338z00_4514;

						obj_t BgL_valueszd2approx4339zd2_4515;

						long BgL_lostzd2stamp4340zd2_4516;

						bool_t BgL_xzd2tzf34341z21_4517;

						bool_t BgL_x4342z00_4518;

						bool_t BgL_t4343z00_4519;

						BgL_variablez00_bglt BgL_owner4344z00_4520;

						BgL_new4346z00_4513 =
							(BgL_makezd2procedurezd2appz00_bglt) (BgL_new4346z00_4177);
						BgL_approx4338z00_4514 =
							(BgL_approxz00_bglt) (BgL_approx4338z00_4178);
						BgL_valueszd2approx4339zd2_4515 = BgL_valueszd2approx4339zd2_4179;
						BgL_lostzd2stamp4340zd2_4516 =
							(long) CINT(BgL_lostzd2stamp4340zd2_4180);
						BgL_xzd2tzf34341z21_4517 = CBOOL(BgL_xzd2tzf34341z21_4181);
						BgL_x4342z00_4518 = CBOOL(BgL_x4342z00_4182);
						BgL_t4343z00_4519 = CBOOL(BgL_t4343z00_4183);
						BgL_owner4344z00_4520 =
							(BgL_variablez00_bglt) (BgL_owner4344z00_4184);
						{	/* Cfa/cinfo2.scm 38 */
							BgL_approxz00_bglt BgL_approx4338z00_4522;

							obj_t BgL_valueszd2approx4339zd2_4523;

							long BgL_lostzd2stamp4340zd2_4524;

							bool_t BgL_xzd2tzf34341z21_4525;

							bool_t BgL_x4342z00_4526;

							bool_t BgL_t4343z00_4527;

							BgL_variablez00_bglt BgL_owner4344z00_4528;

							obj_t BgL_stackzd2stamp4345zd2_4529;

							BgL_approx4338z00_4522 = BgL_approx4338z00_4514;
							BgL_valueszd2approx4339zd2_4523 = BgL_valueszd2approx4339zd2_4515;
							BgL_lostzd2stamp4340zd2_4524 = BgL_lostzd2stamp4340zd2_4516;
							BgL_xzd2tzf34341z21_4525 = BgL_xzd2tzf34341z21_4517;
							BgL_x4342z00_4526 = BgL_x4342z00_4518;
							BgL_t4343z00_4527 = BgL_t4343z00_4519;
							BgL_owner4344z00_4528 = BgL_owner4344z00_4520;
							BgL_stackzd2stamp4345zd2_4529 = BgL_stackzd2stamp4345zd2_4185;
							((((BgL_makezd2procedurezd2appz00_bglt)
										CREF(BgL_new4346z00_4513))->BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4338z00_4522), BUNSPEC);
							((((BgL_makezd2procedurezd2appz00_bglt)
										CREF(BgL_new4346z00_4513))->BgL_valueszd2approxzd2) =
								((obj_t) BgL_valueszd2approx4339zd2_4523), BUNSPEC);
							((((BgL_makezd2procedurezd2appz00_bglt)
										CREF(BgL_new4346z00_4513))->BgL_lostzd2stampzd2) =
								((long) BgL_lostzd2stamp4340zd2_4524), BUNSPEC);
							((((BgL_makezd2procedurezd2appz00_bglt)
										CREF(BgL_new4346z00_4513))->BgL_xzd2tzf3z21) =
								((bool_t) BgL_xzd2tzf34341z21_4525), BUNSPEC);
							((((BgL_makezd2procedurezd2appz00_bglt)
										CREF(BgL_new4346z00_4513))->BgL_xz00) =
								((bool_t) BgL_x4342z00_4526), BUNSPEC);
							((((BgL_makezd2procedurezd2appz00_bglt)
										CREF(BgL_new4346z00_4513))->BgL_tz00) =
								((bool_t) BgL_t4343z00_4527), BUNSPEC);
							((((BgL_makezd2procedurezd2appz00_bglt)
										CREF(BgL_new4346z00_4513))->BgL_ownerz00) =
								((BgL_variablez00_bglt) BgL_owner4344z00_4528), BUNSPEC);
							((((BgL_makezd2procedurezd2appz00_bglt)
										CREF(BgL_new4346z00_4513))->BgL_stackzd2stampzd2) =
								((obj_t) BgL_stackzd2stamp4345zd2_4529), BUNSPEC);
							BgL_res5629z00_4530 = BgL_new4346z00_4513;
					}}
					BgL_auxz00_5595 = BgL_res5629z00_4530;
				}
				return (obj_t) (BgL_auxz00_5595);
			}
		}
	}



/* %allocate-make-procedure-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_z52allocatezd2makezd2procedurezd2appz80zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 38 */
			{	/* Cfa/cinfo2.scm 38 */
				BgL_appz00_bglt BgL_new4356z00_4531;

				BgL_new4356z00_4531 =
					((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_appz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new4356z00_4531),
					BGl_classzd2numzd2zz__objectz00
					(BGl_makezd2procedurezd2appz00zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 38 */
					BgL_objectz00_bglt BgL_auxz00_5616;

					BgL_auxz00_5616 = (BgL_objectz00_bglt) (BgL_new4356z00_4531);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5616, BFALSE);
				}
				return BgL_new4356z00_4531;
			}
		}
	}



/* _%allocate-make-procedure-app */
	obj_t BGl__z52allocatezd2makezd2procedurezd2appz80zzcfa_info2z00(obj_t
		BgL_envz00_3957)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 38 */
			{	/* Cfa/cinfo2.scm 38 */
				BgL_appz00_bglt BgL_auxz00_5619;

				{	/* Cfa/cinfo2.scm 38 */
					BgL_appz00_bglt BgL_res5630z00_4535;

					{	/* Cfa/cinfo2.scm 38 */
						BgL_appz00_bglt BgL_new4356z00_4533;

						BgL_new4356z00_4533 =
							((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_appz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4356z00_4533),
							BGl_classzd2numzd2zz__objectz00
							(BGl_makezd2procedurezd2appz00zzcfa_info2z00));
						{	/* Cfa/cinfo2.scm 38 */
							BgL_objectz00_bglt BgL_auxz00_5624;

							BgL_auxz00_5624 = (BgL_objectz00_bglt) (BgL_new4356z00_4533);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5624, BFALSE);
						}
						BgL_res5630z00_4535 = BgL_new4356z00_4533;
					}
					BgL_auxz00_5619 = BgL_res5630z00_4535;
				}
				return (obj_t) (BgL_auxz00_5619);
			}
		}
	}



/* make-procedure-app-nil */
	BGL_EXPORTED_DEF BgL_makezd2procedurezd2appz00_bglt
		BGl_makezd2procedurezd2appzd2nilzd2zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 38 */
			if (
				(BGl_z52thezd2makezd2procedurezd2appzd2nilz52zzcfa_info2z00 == BUNSPEC))
				{	/* Cfa/cinfo2.scm 38 */
					{	/* Cfa/cinfo2.scm 38 */
						BgL_appz00_bglt BgL_res5499z00_3059;

						{	/* Cfa/cinfo2.scm 38 */
							BgL_appz00_bglt BgL_new2275z00_3055;

							BgL_new2275z00_3055 =
								((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2275z00_3055),
								BGl_classzd2numzd2zz__objectz00(BGl_appz00zzast_nodez00));
							{	/* Cfa/cinfo2.scm 38 */
								BgL_objectz00_bglt BgL_auxz00_5634;

								BgL_auxz00_5634 = (BgL_objectz00_bglt) (BgL_new2275z00_3055);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5634, BFALSE);
							}
							BgL_res5499z00_3059 = BgL_new2275z00_3055;
						}
						BGl_z52thezd2makezd2procedurezd2appzd2nilz52zzcfa_info2z00 =
							(obj_t) (BgL_res5499z00_3059);
					}
					{	/* Cfa/cinfo2.scm 38 */
						BgL_typez00_bglt BgL_arg5139z00_1502;

						BgL_varz00_bglt BgL_arg5140z00_1503;

						BgL_arg5139z00_1502 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg5140z00_1503 = BGl_varzd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo2.scm 38 */
							BgL_appz00_bglt BgL_res5500z00_3073;

							{	/* Cfa/cinfo2.scm 38 */
								BgL_appz00_bglt BgL_new2267z00_3060;

								BgL_new2267z00_3060 =
									(BgL_appz00_bglt)
									(BGl_z52thezd2makezd2procedurezd2appzd2nilz52zzcfa_info2z00);
								{	/* Cfa/cinfo2.scm 38 */
									obj_t BgL_loc2261z00_3067;

									BgL_typez00_bglt BgL_type2262z00_3068;

									obj_t BgL_sidezd2effectzf32263z21_3069;

									obj_t BgL_key2264z00_3070;

									BgL_varz00_bglt BgL_fun2265z00_3071;

									obj_t BgL_args2266z00_3072;

									BgL_loc2261z00_3067 = BUNSPEC;
									BgL_type2262z00_3068 = BgL_arg5139z00_1502;
									BgL_sidezd2effectzf32263z21_3069 = BUNSPEC;
									BgL_key2264z00_3070 = BUNSPEC;
									BgL_fun2265z00_3071 = BgL_arg5140z00_1503;
									BgL_args2266z00_3072 = BUNSPEC;
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3060))->BgL_locz00) =
										((obj_t) BgL_loc2261z00_3067), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3060))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2262z00_3068), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3060))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32263z21_3069), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3060))->BgL_keyz00) =
										((obj_t) BgL_key2264z00_3070), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3060))->BgL_funz00) =
										((BgL_varz00_bglt) BgL_fun2265z00_3071), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3060))->
											BgL_argsz00) = ((obj_t) BgL_args2266z00_3072), BUNSPEC);
									BgL_res5500z00_3073 = BgL_new2267z00_3060;
							}} BgL_res5500z00_3073;
					}}
					{	/* Cfa/cinfo2.scm 38 */
						long BgL_arg5141z00_1504;

						BgL_arg5141z00_1504 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_makezd2procedurezd2appz00zzcfa_info2z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2makezd2procedurezd2appzd2nilz52zzcfa_info2z00),
							BgL_arg5141z00_1504);
					}
					{	/* Cfa/cinfo2.scm 38 */
						BgL_makezd2procedurezd2appz00_bglt BgL_arg5142z00_1505;

						{	/* Cfa/cinfo2.scm 38 */
							BgL_approxz00_bglt BgL_arg5143z00_1506;

							obj_t BgL_arg5144z00_1507;

							BgL_variablez00_bglt BgL_arg5146z00_1509;

							BgL_arg5143z00_1506 = BGl_approxzd2nilzd2zzcfa_infoz00();
							BgL_arg5144z00_1507 = CNST_TABLE_REF(((long) 16));
							BgL_arg5146z00_1509 = BGl_variablezd2nilzd2zzast_varz00();
							{	/* Cfa/cinfo2.scm 38 */
								BgL_makezd2procedurezd2appz00_bglt BgL_res5502z00_3103;

								{	/* Cfa/cinfo2.scm 38 */
									BgL_makezd2procedurezd2appz00_bglt BgL_new4320z00_3084;

									BgL_new4320z00_3084 =
										((BgL_makezd2procedurezd2appz00_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_makezd2procedurezd2appz00_bgl))));
									{	/* Cfa/cinfo2.scm 38 */
										BgL_makezd2procedurezd2appz00_bglt BgL_res5501z00_3102;

										{	/* Cfa/cinfo2.scm 38 */
											BgL_makezd2procedurezd2appz00_bglt BgL_new4346z00_3085;

											BgL_new4346z00_3085 = BgL_new4320z00_3084;
											{	/* Cfa/cinfo2.scm 38 */
												BgL_approxz00_bglt BgL_approx4338z00_3094;

												obj_t BgL_valueszd2approx4339zd2_3095;

												long BgL_lostzd2stamp4340zd2_3096;

												bool_t BgL_xzd2tzf34341z21_3097;

												bool_t BgL_x4342z00_3098;

												bool_t BgL_t4343z00_3099;

												BgL_variablez00_bglt BgL_owner4344z00_3100;

												obj_t BgL_stackzd2stamp4345zd2_3101;

												BgL_approx4338z00_3094 = BgL_arg5143z00_1506;
												BgL_valueszd2approx4339zd2_3095 = BgL_arg5144z00_1507;
												BgL_lostzd2stamp4340zd2_3096 = ((long) 0);
												BgL_xzd2tzf34341z21_3097 = ((bool_t) 0);
												BgL_x4342z00_3098 = ((bool_t) 0);
												BgL_t4343z00_3099 = ((bool_t) 0);
												BgL_owner4344z00_3100 = BgL_arg5146z00_1509;
												BgL_stackzd2stamp4345zd2_3101 = BUNSPEC;
												((((BgL_makezd2procedurezd2appz00_bglt)
															CREF(BgL_new4346z00_3085))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4338z00_3094),
													BUNSPEC);
												((((BgL_makezd2procedurezd2appz00_bglt)
															CREF(BgL_new4346z00_3085))->
														BgL_valueszd2approxzd2) =
													((obj_t) BgL_valueszd2approx4339zd2_3095), BUNSPEC);
												((((BgL_makezd2procedurezd2appz00_bglt)
															CREF(BgL_new4346z00_3085))->BgL_lostzd2stampzd2) =
													((long) BgL_lostzd2stamp4340zd2_3096), BUNSPEC);
												((((BgL_makezd2procedurezd2appz00_bglt)
															CREF(BgL_new4346z00_3085))->BgL_xzd2tzf3z21) =
													((bool_t) BgL_xzd2tzf34341z21_3097), BUNSPEC);
												((((BgL_makezd2procedurezd2appz00_bglt)
															CREF(BgL_new4346z00_3085))->BgL_xz00) =
													((bool_t) BgL_x4342z00_3098), BUNSPEC);
												((((BgL_makezd2procedurezd2appz00_bglt)
															CREF(BgL_new4346z00_3085))->BgL_tz00) =
													((bool_t) BgL_t4343z00_3099), BUNSPEC);
												((((BgL_makezd2procedurezd2appz00_bglt)
															CREF(BgL_new4346z00_3085))->BgL_ownerz00) =
													((BgL_variablez00_bglt) BgL_owner4344z00_3100),
													BUNSPEC);
												((((BgL_makezd2procedurezd2appz00_bglt)
															CREF(BgL_new4346z00_3085))->
														BgL_stackzd2stampzd2) =
													((obj_t) BgL_stackzd2stamp4345zd2_3101), BUNSPEC);
												BgL_res5501z00_3102 = BgL_new4346z00_3085;
										}} BgL_res5501z00_3102;
									}
									BgL_res5502z00_3103 = BgL_new4320z00_3084;
								}
								BgL_arg5142z00_1505 = BgL_res5502z00_3103;
						}}
						{	/* Cfa/cinfo2.scm 38 */
							obj_t BgL_auxz00_5664;

							BgL_objectz00_bglt BgL_auxz00_5662;

							BgL_auxz00_5664 = (obj_t) (BgL_arg5142z00_1505);
							BgL_auxz00_5662 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2makezd2procedurezd2appzd2nilz52zzcfa_info2z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5662, BgL_auxz00_5664);
				}}}
			else
				{	/* Cfa/cinfo2.scm 38 */
					BFALSE;
				}
			return
				(BgL_makezd2procedurezd2appz00_bglt)
				(BGl_z52thezd2makezd2procedurezd2appzd2nilz52zzcfa_info2z00);
		}
	}



/* _make-procedure-app-nil */
	obj_t BGl__makezd2procedurezd2appzd2nilzd2zzcfa_info2z00(obj_t
		BgL_envz00_3958)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 38 */
			return (obj_t) (BGl_makezd2procedurezd2appzd2nilzd2zzcfa_info2z00());
		}
	}



/* pre-procedure-set!-app? */
	BGL_EXPORTED_DEF bool_t
		BGl_prezd2procedurezd2setz12zd2appzf3z33zzcfa_info2z00(obj_t
		BgL_obj4294z00_250)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 36 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4294z00_250,
				BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00);
		}
	}



/* _pre-procedure-set!-app? */
	obj_t BGl__prezd2procedurezd2setz12zd2appzf3z33zzcfa_info2z00(obj_t
		BgL_envz00_3955, obj_t BgL_obj4294z00_3956)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 36 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4294z00_3956,
					BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00));
		}
	}



/* widening-pre-procedure-set!-app */
	BGL_EXPORTED_DEF BgL_prezd2procedurezd2setz12zd2appzc0_bglt
		BGl_wideningzd2prezd2procedurezd2setz12zd2appz12zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 36 */
			{	/* Cfa/cinfo2.scm 36 */
				BgL_prezd2procedurezd2setz12zd2appzc0_bglt BgL_new4275z00_1510;

				BgL_new4275z00_1510 =
					((BgL_prezd2procedurezd2setz12zd2appzc0_bglt)
					BREF(GC_MALLOC(sizeof(struct
								BgL_prezd2procedurezd2setz12zd2appzc0_bgl))));
				return BgL_new4275z00_1510;
			}
		}
	}



/* _widening-pre-procedure-set!-app */
	obj_t BGl__wideningzd2prezd2procedurezd2setz12zd2appz12zzcfa_info2z00(obj_t
		BgL_envz00_4186)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 36 */
			return
				(obj_t) (BGl_wideningzd2prezd2procedurezd2setz12zd2appz12zzcfa_info2z00
				());
		}
	}



/* make-pre-procedure-set!-app */
	BGL_EXPORTED_DEF BgL_prezd2procedurezd2setz12zd2appzc0_bglt
		BGl_makezd2prezd2procedurezd2setz12zd2appz12zzcfa_info2z00(obj_t
		BgL_loc4277z00_254, BgL_typez00_bglt BgL_type4278z00_255,
		obj_t BgL_sidezd2effectzf34279z21_256, obj_t BgL_key4280z00_257,
		BgL_varz00_bglt BgL_fun4281z00_258, obj_t BgL_args4282z00_259)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 36 */
			{	/* Cfa/cinfo2.scm 36 */
				BgL_appz00_bglt BgL_aux4283z00_3105;

				BgL_aux4283z00_3105 =
					BGl_makezd2appzd2zzast_nodez00(BgL_loc4277z00_254,
					BgL_type4278z00_255, BgL_sidezd2effectzf34279z21_256,
					BgL_key4280z00_257, BgL_fun4281z00_258, BgL_args4282z00_259);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4283z00_3105),
					BGl_classzd2numzd2zz__objectz00
					(BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 36 */
					BgL_prezd2procedurezd2setz12zd2appzc0_bglt BgL_arg5148z00_3107;

					BgL_arg5148z00_3107 =
						BGl_wideningzd2prezd2procedurezd2setz12zd2appz12zzcfa_info2z00();
					{	/* Cfa/cinfo2.scm 36 */
						obj_t BgL_auxz00_5683;

						BgL_objectz00_bglt BgL_auxz00_5681;

						BgL_auxz00_5683 = (obj_t) (BgL_arg5148z00_3107);
						BgL_auxz00_5681 = (BgL_objectz00_bglt) (BgL_aux4283z00_3105);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_5681, BgL_auxz00_5683);
					}
				}
				return
					((BgL_prezd2procedurezd2setz12zd2appzc0_bglt)
					(BgL_prezd2procedurezd2setz12zd2appzc0_bglt) (BgL_aux4283z00_3105));
			}
		}
	}



/* _make-pre-procedure-set!-app */
	obj_t BGl__makezd2prezd2procedurezd2setz12zd2appz12zzcfa_info2z00(obj_t
		BgL_envz00_4187, obj_t BgL_loc4277z00_4188, obj_t BgL_type4278z00_4189,
		obj_t BgL_sidezd2effectzf34279z21_4190, obj_t BgL_key4280z00_4191,
		obj_t BgL_fun4281z00_4192, obj_t BgL_args4282z00_4193)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 36 */
			return
				(obj_t) (BGl_makezd2prezd2procedurezd2setz12zd2appz12zzcfa_info2z00
				(BgL_loc4277z00_4188, (BgL_typez00_bglt) (BgL_type4278z00_4189),
					BgL_sidezd2effectzf34279z21_4190, BgL_key4280z00_4191,
					(BgL_varz00_bglt) (BgL_fun4281z00_4192), BgL_args4282z00_4193));
		}
	}



/* fill-pre-procedure-set!-app! */
	BGL_EXPORTED_DEF BgL_prezd2procedurezd2setz12zd2appzc0_bglt
		BGl_fillzd2prezd2procedurezd2setz12zd2appz12z00zzcfa_info2z00
		(BgL_prezd2procedurezd2setz12zd2appzc0_bglt BgL_new4285z00_260)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 36 */
			{	/* Cfa/cinfo2.scm 36 */

				return BgL_new4285z00_260;
			}
		}
	}



/* _fill-pre-procedure-set!-app! */
	obj_t BGl__fillzd2prezd2procedurezd2setz12zd2appz12z00zzcfa_info2z00(obj_t
		BgL_envz00_4194, obj_t BgL_new4285z00_4195)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 36 */
			{	/* Cfa/cinfo2.scm 36 */
				BgL_prezd2procedurezd2setz12zd2appzc0_bglt BgL_auxz00_5692;

				{	/* Cfa/cinfo2.scm 36 */

					BgL_auxz00_5692 =
						(BgL_prezd2procedurezd2setz12zd2appzc0_bglt) (BgL_new4285z00_4195);
				}
				return (obj_t) (BgL_auxz00_5692);
			}
		}
	}



/* %allocate-pre-procedure-set!-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_z52allocatezd2prezd2procedurezd2setz12zd2appz40zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 36 */
			{	/* Cfa/cinfo2.scm 36 */
				BgL_appz00_bglt BgL_new4287z00_4538;

				BgL_new4287z00_4538 =
					((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_appz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new4287z00_4538),
					BGl_classzd2numzd2zz__objectz00
					(BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 36 */
					BgL_objectz00_bglt BgL_auxz00_5699;

					BgL_auxz00_5699 = (BgL_objectz00_bglt) (BgL_new4287z00_4538);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5699, BFALSE);
				}
				return BgL_new4287z00_4538;
			}
		}
	}



/* _%allocate-pre-procedure-set!-app */
	obj_t BGl__z52allocatezd2prezd2procedurezd2setz12zd2appz40zzcfa_info2z00(obj_t
		BgL_envz00_3953)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 36 */
			{	/* Cfa/cinfo2.scm 36 */
				BgL_appz00_bglt BgL_auxz00_5702;

				{	/* Cfa/cinfo2.scm 36 */
					BgL_appz00_bglt BgL_res5631z00_4542;

					{	/* Cfa/cinfo2.scm 36 */
						BgL_appz00_bglt BgL_new4287z00_4540;

						BgL_new4287z00_4540 =
							((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_appz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4287z00_4540),
							BGl_classzd2numzd2zz__objectz00
							(BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00));
						{	/* Cfa/cinfo2.scm 36 */
							BgL_objectz00_bglt BgL_auxz00_5707;

							BgL_auxz00_5707 = (BgL_objectz00_bglt) (BgL_new4287z00_4540);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5707, BFALSE);
						}
						BgL_res5631z00_4542 = BgL_new4287z00_4540;
					}
					BgL_auxz00_5702 = BgL_res5631z00_4542;
				}
				return (obj_t) (BgL_auxz00_5702);
			}
		}
	}



/* pre-procedure-set!-app-nil */
	BGL_EXPORTED_DEF BgL_prezd2procedurezd2setz12zd2appzc0_bglt
		BGl_prezd2procedurezd2setz12zd2appzd2nilz12zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 36 */
			if (
				(BGl_z52thezd2prezd2procedurezd2setz12zd2appzd2nilz92zzcfa_info2z00 ==
					BUNSPEC))
				{	/* Cfa/cinfo2.scm 36 */
					{	/* Cfa/cinfo2.scm 36 */
						BgL_appz00_bglt BgL_res5503z00_3119;

						{	/* Cfa/cinfo2.scm 36 */
							BgL_appz00_bglt BgL_new2275z00_3115;

							BgL_new2275z00_3115 =
								((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2275z00_3115),
								BGl_classzd2numzd2zz__objectz00(BGl_appz00zzast_nodez00));
							{	/* Cfa/cinfo2.scm 36 */
								BgL_objectz00_bglt BgL_auxz00_5717;

								BgL_auxz00_5717 = (BgL_objectz00_bglt) (BgL_new2275z00_3115);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5717, BFALSE);
							}
							BgL_res5503z00_3119 = BgL_new2275z00_3115;
						}
						BGl_z52thezd2prezd2procedurezd2setz12zd2appzd2nilz92zzcfa_info2z00 =
							(obj_t) (BgL_res5503z00_3119);
					}
					{	/* Cfa/cinfo2.scm 36 */
						BgL_typez00_bglt BgL_arg5151z00_1518;

						BgL_varz00_bglt BgL_arg5152z00_1519;

						BgL_arg5151z00_1518 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg5152z00_1519 = BGl_varzd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo2.scm 36 */
							BgL_appz00_bglt BgL_res5504z00_3133;

							{	/* Cfa/cinfo2.scm 36 */
								BgL_appz00_bglt BgL_new2267z00_3120;

								BgL_new2267z00_3120 =
									(BgL_appz00_bglt)
									(BGl_z52thezd2prezd2procedurezd2setz12zd2appzd2nilz92zzcfa_info2z00);
								{	/* Cfa/cinfo2.scm 36 */
									obj_t BgL_loc2261z00_3127;

									BgL_typez00_bglt BgL_type2262z00_3128;

									obj_t BgL_sidezd2effectzf32263z21_3129;

									obj_t BgL_key2264z00_3130;

									BgL_varz00_bglt BgL_fun2265z00_3131;

									obj_t BgL_args2266z00_3132;

									BgL_loc2261z00_3127 = BUNSPEC;
									BgL_type2262z00_3128 = BgL_arg5151z00_1518;
									BgL_sidezd2effectzf32263z21_3129 = BUNSPEC;
									BgL_key2264z00_3130 = BUNSPEC;
									BgL_fun2265z00_3131 = BgL_arg5152z00_1519;
									BgL_args2266z00_3132 = BUNSPEC;
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3120))->BgL_locz00) =
										((obj_t) BgL_loc2261z00_3127), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3120))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2262z00_3128), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3120))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32263z21_3129), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3120))->BgL_keyz00) =
										((obj_t) BgL_key2264z00_3130), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3120))->BgL_funz00) =
										((BgL_varz00_bglt) BgL_fun2265z00_3131), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3120))->
											BgL_argsz00) = ((obj_t) BgL_args2266z00_3132), BUNSPEC);
									BgL_res5504z00_3133 = BgL_new2267z00_3120;
							}} BgL_res5504z00_3133;
					}}
					{	/* Cfa/cinfo2.scm 36 */
						long BgL_arg5153z00_1520;

						BgL_arg5153z00_1520 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2prezd2procedurezd2setz12zd2appzd2nilz92zzcfa_info2z00),
							BgL_arg5153z00_1520);
					}
					{	/* Cfa/cinfo2.scm 36 */
						BgL_prezd2procedurezd2setz12zd2appzc0_bglt BgL_arg5154z00_1521;

						BgL_arg5154z00_1521 =
							BGl_wideningzd2prezd2procedurezd2setz12zd2appz12zzcfa_info2z00();
						{	/* Cfa/cinfo2.scm 36 */
							obj_t BgL_auxz00_5736;

							BgL_objectz00_bglt BgL_auxz00_5734;

							BgL_auxz00_5736 = (obj_t) (BgL_arg5154z00_1521);
							BgL_auxz00_5734 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2prezd2procedurezd2setz12zd2appzd2nilz92zzcfa_info2z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5734, BgL_auxz00_5736);
				}}}
			else
				{	/* Cfa/cinfo2.scm 36 */
					BFALSE;
				}
			return
				(BgL_prezd2procedurezd2setz12zd2appzc0_bglt)
				(BGl_z52thezd2prezd2procedurezd2setz12zd2appzd2nilz92zzcfa_info2z00);
		}
	}



/* _pre-procedure-set!-app-nil */
	obj_t BGl__prezd2procedurezd2setz12zd2appzd2nilz12zzcfa_info2z00(obj_t
		BgL_envz00_3954)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 36 */
			return
				(obj_t) (BGl_prezd2procedurezd2setz12zd2appzd2nilz12zzcfa_info2z00());
		}
	}



/* pre-procedure-ref-app? */
	BGL_EXPORTED_DEF bool_t
		BGl_prezd2procedurezd2refzd2appzf3z21zzcfa_info2z00(obj_t
		BgL_obj4257z00_261)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 35 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4257z00_261,
				BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00);
		}
	}



/* _pre-procedure-ref-app? */
	obj_t BGl__prezd2procedurezd2refzd2appzf3z21zzcfa_info2z00(obj_t
		BgL_envz00_3951, obj_t BgL_obj4257z00_3952)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 35 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4257z00_3952,
					BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00));
		}
	}



/* widening-pre-procedure-ref-app */
	BGL_EXPORTED_DEF BgL_prezd2procedurezd2refzd2appzd2_bglt
		BGl_wideningzd2prezd2procedurezd2refzd2appz00zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 35 */
			{	/* Cfa/cinfo2.scm 35 */
				BgL_prezd2procedurezd2refzd2appzd2_bglt BgL_new4238z00_1522;

				BgL_new4238z00_1522 =
					((BgL_prezd2procedurezd2refzd2appzd2_bglt)
					BREF(GC_MALLOC(sizeof(struct
								BgL_prezd2procedurezd2refzd2appzd2_bgl))));
				return BgL_new4238z00_1522;
			}
		}
	}



/* _widening-pre-procedure-ref-app */
	obj_t BGl__wideningzd2prezd2procedurezd2refzd2appz00zzcfa_info2z00(obj_t
		BgL_envz00_4196)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 35 */
			return
				(obj_t) (BGl_wideningzd2prezd2procedurezd2refzd2appz00zzcfa_info2z00());
		}
	}



/* make-pre-procedure-ref-app */
	BGL_EXPORTED_DEF BgL_prezd2procedurezd2refzd2appzd2_bglt
		BGl_makezd2prezd2procedurezd2refzd2appz00zzcfa_info2z00(obj_t
		BgL_loc4240z00_265, BgL_typez00_bglt BgL_type4241z00_266,
		obj_t BgL_sidezd2effectzf34242z21_267, obj_t BgL_key4243z00_268,
		BgL_varz00_bglt BgL_fun4244z00_269, obj_t BgL_args4245z00_270)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 35 */
			{	/* Cfa/cinfo2.scm 35 */
				BgL_appz00_bglt BgL_aux4246z00_3137;

				BgL_aux4246z00_3137 =
					BGl_makezd2appzd2zzast_nodez00(BgL_loc4240z00_265,
					BgL_type4241z00_266, BgL_sidezd2effectzf34242z21_267,
					BgL_key4243z00_268, BgL_fun4244z00_269, BgL_args4245z00_270);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4246z00_3137),
					BGl_classzd2numzd2zz__objectz00
					(BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 35 */
					BgL_prezd2procedurezd2refzd2appzd2_bglt BgL_arg5156z00_3139;

					BgL_arg5156z00_3139 =
						BGl_wideningzd2prezd2procedurezd2refzd2appz00zzcfa_info2z00();
					{	/* Cfa/cinfo2.scm 35 */
						obj_t BgL_auxz00_5755;

						BgL_objectz00_bglt BgL_auxz00_5753;

						BgL_auxz00_5755 = (obj_t) (BgL_arg5156z00_3139);
						BgL_auxz00_5753 = (BgL_objectz00_bglt) (BgL_aux4246z00_3137);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_5753, BgL_auxz00_5755);
					}
				}
				return
					((BgL_prezd2procedurezd2refzd2appzd2_bglt)
					(BgL_prezd2procedurezd2refzd2appzd2_bglt) (BgL_aux4246z00_3137));
			}
		}
	}



/* _make-pre-procedure-ref-app */
	obj_t BGl__makezd2prezd2procedurezd2refzd2appz00zzcfa_info2z00(obj_t
		BgL_envz00_4197, obj_t BgL_loc4240z00_4198, obj_t BgL_type4241z00_4199,
		obj_t BgL_sidezd2effectzf34242z21_4200, obj_t BgL_key4243z00_4201,
		obj_t BgL_fun4244z00_4202, obj_t BgL_args4245z00_4203)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 35 */
			return
				(obj_t) (BGl_makezd2prezd2procedurezd2refzd2appz00zzcfa_info2z00
				(BgL_loc4240z00_4198, (BgL_typez00_bglt) (BgL_type4241z00_4199),
					BgL_sidezd2effectzf34242z21_4200, BgL_key4243z00_4201,
					(BgL_varz00_bglt) (BgL_fun4244z00_4202), BgL_args4245z00_4203));
		}
	}



/* fill-pre-procedure-ref-app! */
	BGL_EXPORTED_DEF BgL_prezd2procedurezd2refzd2appzd2_bglt
		BGl_fillzd2prezd2procedurezd2refzd2appz12z12zzcfa_info2z00
		(BgL_prezd2procedurezd2refzd2appzd2_bglt BgL_new4248z00_271)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 35 */
			{	/* Cfa/cinfo2.scm 35 */

				return BgL_new4248z00_271;
			}
		}
	}



/* _fill-pre-procedure-ref-app! */
	obj_t BGl__fillzd2prezd2procedurezd2refzd2appz12z12zzcfa_info2z00(obj_t
		BgL_envz00_4204, obj_t BgL_new4248z00_4205)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 35 */
			{	/* Cfa/cinfo2.scm 35 */
				BgL_prezd2procedurezd2refzd2appzd2_bglt BgL_auxz00_5764;

				{	/* Cfa/cinfo2.scm 35 */

					BgL_auxz00_5764 =
						(BgL_prezd2procedurezd2refzd2appzd2_bglt) (BgL_new4248z00_4205);
				}
				return (obj_t) (BgL_auxz00_5764);
			}
		}
	}



/* %allocate-pre-procedure-ref-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_z52allocatezd2prezd2procedurezd2refzd2appz52zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 35 */
			{	/* Cfa/cinfo2.scm 35 */
				BgL_appz00_bglt BgL_new4250z00_4545;

				BgL_new4250z00_4545 =
					((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_appz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new4250z00_4545),
					BGl_classzd2numzd2zz__objectz00
					(BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 35 */
					BgL_objectz00_bglt BgL_auxz00_5771;

					BgL_auxz00_5771 = (BgL_objectz00_bglt) (BgL_new4250z00_4545);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5771, BFALSE);
				}
				return BgL_new4250z00_4545;
			}
		}
	}



/* _%allocate-pre-procedure-ref-app */
	obj_t BGl__z52allocatezd2prezd2procedurezd2refzd2appz52zzcfa_info2z00(obj_t
		BgL_envz00_3949)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 35 */
			{	/* Cfa/cinfo2.scm 35 */
				BgL_appz00_bglt BgL_auxz00_5774;

				{	/* Cfa/cinfo2.scm 35 */
					BgL_appz00_bglt BgL_res5632z00_4549;

					{	/* Cfa/cinfo2.scm 35 */
						BgL_appz00_bglt BgL_new4250z00_4547;

						BgL_new4250z00_4547 =
							((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_appz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4250z00_4547),
							BGl_classzd2numzd2zz__objectz00
							(BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00));
						{	/* Cfa/cinfo2.scm 35 */
							BgL_objectz00_bglt BgL_auxz00_5779;

							BgL_auxz00_5779 = (BgL_objectz00_bglt) (BgL_new4250z00_4547);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5779, BFALSE);
						}
						BgL_res5632z00_4549 = BgL_new4250z00_4547;
					}
					BgL_auxz00_5774 = BgL_res5632z00_4549;
				}
				return (obj_t) (BgL_auxz00_5774);
			}
		}
	}



/* pre-procedure-ref-app-nil */
	BGL_EXPORTED_DEF BgL_prezd2procedurezd2refzd2appzd2_bglt
		BGl_prezd2procedurezd2refzd2appzd2nilz00zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 35 */
			if (
				(BGl_z52thezd2prezd2procedurezd2refzd2appzd2nilz80zzcfa_info2z00 ==
					BUNSPEC))
				{	/* Cfa/cinfo2.scm 35 */
					{	/* Cfa/cinfo2.scm 35 */
						BgL_appz00_bglt BgL_res5505z00_3151;

						{	/* Cfa/cinfo2.scm 35 */
							BgL_appz00_bglt BgL_new2275z00_3147;

							BgL_new2275z00_3147 =
								((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2275z00_3147),
								BGl_classzd2numzd2zz__objectz00(BGl_appz00zzast_nodez00));
							{	/* Cfa/cinfo2.scm 35 */
								BgL_objectz00_bglt BgL_auxz00_5789;

								BgL_auxz00_5789 = (BgL_objectz00_bglt) (BgL_new2275z00_3147);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5789, BFALSE);
							}
							BgL_res5505z00_3151 = BgL_new2275z00_3147;
						}
						BGl_z52thezd2prezd2procedurezd2refzd2appzd2nilz80zzcfa_info2z00 =
							(obj_t) (BgL_res5505z00_3151);
					}
					{	/* Cfa/cinfo2.scm 35 */
						BgL_typez00_bglt BgL_arg5159z00_1530;

						BgL_varz00_bglt BgL_arg5160z00_1531;

						BgL_arg5159z00_1530 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg5160z00_1531 = BGl_varzd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo2.scm 35 */
							BgL_appz00_bglt BgL_res5506z00_3165;

							{	/* Cfa/cinfo2.scm 35 */
								BgL_appz00_bglt BgL_new2267z00_3152;

								BgL_new2267z00_3152 =
									(BgL_appz00_bglt)
									(BGl_z52thezd2prezd2procedurezd2refzd2appzd2nilz80zzcfa_info2z00);
								{	/* Cfa/cinfo2.scm 35 */
									obj_t BgL_loc2261z00_3159;

									BgL_typez00_bglt BgL_type2262z00_3160;

									obj_t BgL_sidezd2effectzf32263z21_3161;

									obj_t BgL_key2264z00_3162;

									BgL_varz00_bglt BgL_fun2265z00_3163;

									obj_t BgL_args2266z00_3164;

									BgL_loc2261z00_3159 = BUNSPEC;
									BgL_type2262z00_3160 = BgL_arg5159z00_1530;
									BgL_sidezd2effectzf32263z21_3161 = BUNSPEC;
									BgL_key2264z00_3162 = BUNSPEC;
									BgL_fun2265z00_3163 = BgL_arg5160z00_1531;
									BgL_args2266z00_3164 = BUNSPEC;
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3152))->BgL_locz00) =
										((obj_t) BgL_loc2261z00_3159), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3152))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2262z00_3160), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3152))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32263z21_3161), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3152))->BgL_keyz00) =
										((obj_t) BgL_key2264z00_3162), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3152))->BgL_funz00) =
										((BgL_varz00_bglt) BgL_fun2265z00_3163), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3152))->
											BgL_argsz00) = ((obj_t) BgL_args2266z00_3164), BUNSPEC);
									BgL_res5506z00_3165 = BgL_new2267z00_3152;
							}} BgL_res5506z00_3165;
					}}
					{	/* Cfa/cinfo2.scm 35 */
						long BgL_arg5161z00_1532;

						BgL_arg5161z00_1532 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2prezd2procedurezd2refzd2appzd2nilz80zzcfa_info2z00),
							BgL_arg5161z00_1532);
					}
					{	/* Cfa/cinfo2.scm 35 */
						BgL_prezd2procedurezd2refzd2appzd2_bglt BgL_arg5162z00_1533;

						BgL_arg5162z00_1533 =
							BGl_wideningzd2prezd2procedurezd2refzd2appz00zzcfa_info2z00();
						{	/* Cfa/cinfo2.scm 35 */
							obj_t BgL_auxz00_5808;

							BgL_objectz00_bglt BgL_auxz00_5806;

							BgL_auxz00_5808 = (obj_t) (BgL_arg5162z00_1533);
							BgL_auxz00_5806 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2prezd2procedurezd2refzd2appzd2nilz80zzcfa_info2z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5806, BgL_auxz00_5808);
				}}}
			else
				{	/* Cfa/cinfo2.scm 35 */
					BFALSE;
				}
			return
				(BgL_prezd2procedurezd2refzd2appzd2_bglt)
				(BGl_z52thezd2prezd2procedurezd2refzd2appzd2nilz80zzcfa_info2z00);
		}
	}



/* _pre-procedure-ref-app-nil */
	obj_t BGl__prezd2procedurezd2refzd2appzd2nilz00zzcfa_info2z00(obj_t
		BgL_envz00_3950)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 35 */
			return (obj_t) (BGl_prezd2procedurezd2refzd2appzd2nilz00zzcfa_info2z00());
		}
	}



/* pre-make-procedure-app? */
	BGL_EXPORTED_DEF bool_t
		BGl_prezd2makezd2procedurezd2appzf3z21zzcfa_info2z00(obj_t
		BgL_obj4219z00_272)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 32 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4219z00_272,
				BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00);
		}
	}



/* _pre-make-procedure-app? */
	obj_t BGl__prezd2makezd2procedurezd2appzf3z21zzcfa_info2z00(obj_t
		BgL_envz00_3947, obj_t BgL_obj4219z00_3948)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 32 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4219z00_3948,
					BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00));
		}
	}



/* widening-pre-make-procedure-app */
	BGL_EXPORTED_DEF BgL_prezd2makezd2procedurezd2appzd2_bglt
		BGl_wideningzd2prezd2makezd2procedurezd2appz00zzcfa_info2z00
		(BgL_variablez00_bglt BgL_owner4196z00_276)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 32 */
			{	/* Cfa/cinfo2.scm 32 */
				BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_new4197z00_3168;

				BgL_new4197z00_3168 =
					((BgL_prezd2makezd2procedurezd2appzd2_bglt)
					BREF(GC_MALLOC(sizeof(struct
								BgL_prezd2makezd2procedurezd2appzd2_bgl))));
				{	/* Cfa/cinfo2.scm 32 */
					BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_res5507z00_3172;

					{	/* Cfa/cinfo2.scm 32 */
						BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_new4209z00_3169;

						BgL_new4209z00_3169 = BgL_new4197z00_3168;
						{	/* Cfa/cinfo2.scm 32 */
							BgL_variablez00_bglt BgL_owner4208z00_3171;

							BgL_owner4208z00_3171 = BgL_owner4196z00_276;
							((((BgL_prezd2makezd2procedurezd2appzd2_bglt)
										CREF(BgL_new4209z00_3169))->BgL_ownerz00) =
								((BgL_variablez00_bglt) BgL_owner4208z00_3171), BUNSPEC);
							BgL_res5507z00_3172 = BgL_new4209z00_3169;
					}} BgL_res5507z00_3172;
				}
				return BgL_new4197z00_3168;
			}
		}
	}



/* _widening-pre-make-procedure-app */
	obj_t BGl__wideningzd2prezd2makezd2procedurezd2appz00zzcfa_info2z00(obj_t
		BgL_envz00_4206, obj_t BgL_owner4196z00_4207)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 32 */
			return
				(obj_t) (BGl_wideningzd2prezd2makezd2procedurezd2appz00zzcfa_info2z00(
					(BgL_variablez00_bglt) (BgL_owner4196z00_4207)));
		}
	}



/* make-pre-make-procedure-app */
	BGL_EXPORTED_DEF BgL_prezd2makezd2procedurezd2appzd2_bglt
		BGl_makezd2prezd2makezd2procedurezd2appz00zzcfa_info2z00(obj_t
		BgL_loc4200z00_277, BgL_typez00_bglt BgL_type4201z00_278,
		obj_t BgL_sidezd2effectzf34202z21_279, obj_t BgL_key4203z00_280,
		BgL_varz00_bglt BgL_fun4204z00_281, obj_t BgL_args4205z00_282,
		BgL_variablez00_bglt BgL_owner4199z00_283)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 32 */
			{	/* Cfa/cinfo2.scm 32 */
				BgL_appz00_bglt BgL_aux4206z00_3173;

				BgL_aux4206z00_3173 =
					BGl_makezd2appzd2zzast_nodez00(BgL_loc4200z00_277,
					BgL_type4201z00_278, BgL_sidezd2effectzf34202z21_279,
					BgL_key4203z00_280, BgL_fun4204z00_281, BgL_args4205z00_282);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4206z00_3173),
					BGl_classzd2numzd2zz__objectz00
					(BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 32 */
					BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_arg5164z00_3175;

					{	/* Cfa/cinfo2.scm 32 */
						BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_res5509z00_3185;

						{	/* Cfa/cinfo2.scm 32 */
							BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_new4197z00_3180;

							BgL_new4197z00_3180 =
								((BgL_prezd2makezd2procedurezd2appzd2_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_prezd2makezd2procedurezd2appzd2_bgl))));
							{	/* Cfa/cinfo2.scm 32 */
								BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_res5508z00_3184;

								{	/* Cfa/cinfo2.scm 32 */
									BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_new4209z00_3181;

									BgL_new4209z00_3181 = BgL_new4197z00_3180;
									{	/* Cfa/cinfo2.scm 32 */
										BgL_variablez00_bglt BgL_owner4208z00_3183;

										BgL_owner4208z00_3183 = BgL_owner4199z00_283;
										((((BgL_prezd2makezd2procedurezd2appzd2_bglt)
													CREF(BgL_new4209z00_3181))->BgL_ownerz00) =
											((BgL_variablez00_bglt) BgL_owner4208z00_3183), BUNSPEC);
										BgL_res5508z00_3184 = BgL_new4209z00_3181;
								}} BgL_res5508z00_3184;
							}
							BgL_res5509z00_3185 = BgL_new4197z00_3180;
						}
						BgL_arg5164z00_3175 = BgL_res5509z00_3185;
					}
					{	/* Cfa/cinfo2.scm 32 */
						obj_t BgL_auxz00_5830;

						BgL_objectz00_bglt BgL_auxz00_5828;

						BgL_auxz00_5830 = (obj_t) (BgL_arg5164z00_3175);
						BgL_auxz00_5828 = (BgL_objectz00_bglt) (BgL_aux4206z00_3173);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_5828, BgL_auxz00_5830);
				}}
				return
					((BgL_prezd2makezd2procedurezd2appzd2_bglt)
					(BgL_prezd2makezd2procedurezd2appzd2_bglt) (BgL_aux4206z00_3173));
			}
		}
	}



/* _make-pre-make-procedure-app */
	obj_t BGl__makezd2prezd2makezd2procedurezd2appz00zzcfa_info2z00(obj_t
		BgL_envz00_4208, obj_t BgL_loc4200z00_4209, obj_t BgL_type4201z00_4210,
		obj_t BgL_sidezd2effectzf34202z21_4211, obj_t BgL_key4203z00_4212,
		obj_t BgL_fun4204z00_4213, obj_t BgL_args4205z00_4214,
		obj_t BgL_owner4199z00_4215)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 32 */
			return
				(obj_t) (BGl_makezd2prezd2makezd2procedurezd2appz00zzcfa_info2z00
				(BgL_loc4200z00_4209, (BgL_typez00_bglt) (BgL_type4201z00_4210),
					BgL_sidezd2effectzf34202z21_4211, BgL_key4203z00_4212,
					(BgL_varz00_bglt) (BgL_fun4204z00_4213), BgL_args4205z00_4214,
					(BgL_variablez00_bglt) (BgL_owner4199z00_4215)));
		}
	}



/* fill-pre-make-procedure-app! */
	BGL_EXPORTED_DEF BgL_prezd2makezd2procedurezd2appzd2_bglt
		BGl_fillzd2prezd2makezd2procedurezd2appz12z12zzcfa_info2z00
		(BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_new4209z00_284,
		BgL_variablez00_bglt BgL_owner4208z00_285)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 32 */
			{	/* Cfa/cinfo2.scm 32 */
				BgL_variablez00_bglt BgL_owner4208z00_4551;

				BgL_owner4208z00_4551 = BgL_owner4208z00_285;
				((((BgL_prezd2makezd2procedurezd2appzd2_bglt)
							CREF(BgL_new4209z00_284))->BgL_ownerz00) =
					((BgL_variablez00_bglt) BgL_owner4208z00_4551), BUNSPEC);
				return BgL_new4209z00_284;
			}
		}
	}



/* _fill-pre-make-procedure-app! */
	obj_t BGl__fillzd2prezd2makezd2procedurezd2appz12z12zzcfa_info2z00(obj_t
		BgL_envz00_4216, obj_t BgL_new4209z00_4217, obj_t BgL_owner4208z00_4218)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 32 */
			{	/* Cfa/cinfo2.scm 32 */
				BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_auxz00_5841;

				{	/* Cfa/cinfo2.scm 32 */
					BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_res5633z00_4555;

					{	/* Cfa/cinfo2.scm 32 */
						BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_new4209z00_4552;

						BgL_variablez00_bglt BgL_owner4208z00_4553;

						BgL_new4209z00_4552 =
							(BgL_prezd2makezd2procedurezd2appzd2_bglt) (BgL_new4209z00_4217);
						BgL_owner4208z00_4553 =
							(BgL_variablez00_bglt) (BgL_owner4208z00_4218);
						{	/* Cfa/cinfo2.scm 32 */
							BgL_variablez00_bglt BgL_owner4208z00_4554;

							BgL_owner4208z00_4554 = BgL_owner4208z00_4553;
							((((BgL_prezd2makezd2procedurezd2appzd2_bglt)
										CREF(BgL_new4209z00_4552))->BgL_ownerz00) =
								((BgL_variablez00_bglt) BgL_owner4208z00_4554), BUNSPEC);
							BgL_res5633z00_4555 = BgL_new4209z00_4552;
						}
					}
					BgL_auxz00_5841 = BgL_res5633z00_4555;
				}
				return (obj_t) (BgL_auxz00_5841);
			}
		}
	}



/* %allocate-pre-make-procedure-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_z52allocatezd2prezd2makezd2procedurezd2appz52zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 32 */
			{	/* Cfa/cinfo2.scm 32 */
				BgL_appz00_bglt BgL_new4212z00_4556;

				BgL_new4212z00_4556 =
					((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_appz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new4212z00_4556),
					BGl_classzd2numzd2zz__objectz00
					(BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 32 */
					BgL_objectz00_bglt BgL_auxz00_5850;

					BgL_auxz00_5850 = (BgL_objectz00_bglt) (BgL_new4212z00_4556);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5850, BFALSE);
				}
				return BgL_new4212z00_4556;
			}
		}
	}



/* _%allocate-pre-make-procedure-app */
	obj_t BGl__z52allocatezd2prezd2makezd2procedurezd2appz52zzcfa_info2z00(obj_t
		BgL_envz00_3945)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 32 */
			{	/* Cfa/cinfo2.scm 32 */
				BgL_appz00_bglt BgL_auxz00_5853;

				{	/* Cfa/cinfo2.scm 32 */
					BgL_appz00_bglt BgL_res5634z00_4560;

					{	/* Cfa/cinfo2.scm 32 */
						BgL_appz00_bglt BgL_new4212z00_4558;

						BgL_new4212z00_4558 =
							((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_appz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4212z00_4558),
							BGl_classzd2numzd2zz__objectz00
							(BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00));
						{	/* Cfa/cinfo2.scm 32 */
							BgL_objectz00_bglt BgL_auxz00_5858;

							BgL_auxz00_5858 = (BgL_objectz00_bglt) (BgL_new4212z00_4558);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5858, BFALSE);
						}
						BgL_res5634z00_4560 = BgL_new4212z00_4558;
					}
					BgL_auxz00_5853 = BgL_res5634z00_4560;
				}
				return (obj_t) (BgL_auxz00_5853);
			}
		}
	}



/* pre-make-procedure-app-nil */
	BGL_EXPORTED_DEF BgL_prezd2makezd2procedurezd2appzd2_bglt
		BGl_prezd2makezd2procedurezd2appzd2nilz00zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 32 */
			if (
				(BGl_z52thezd2prezd2makezd2procedurezd2appzd2nilz80zzcfa_info2z00 ==
					BUNSPEC))
				{	/* Cfa/cinfo2.scm 32 */
					{	/* Cfa/cinfo2.scm 32 */
						BgL_appz00_bglt BgL_res5510z00_3195;

						{	/* Cfa/cinfo2.scm 32 */
							BgL_appz00_bglt BgL_new2275z00_3191;

							BgL_new2275z00_3191 =
								((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2275z00_3191),
								BGl_classzd2numzd2zz__objectz00(BGl_appz00zzast_nodez00));
							{	/* Cfa/cinfo2.scm 32 */
								BgL_objectz00_bglt BgL_auxz00_5868;

								BgL_auxz00_5868 = (BgL_objectz00_bglt) (BgL_new2275z00_3191);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5868, BFALSE);
							}
							BgL_res5510z00_3195 = BgL_new2275z00_3191;
						}
						BGl_z52thezd2prezd2makezd2procedurezd2appzd2nilz80zzcfa_info2z00 =
							(obj_t) (BgL_res5510z00_3195);
					}
					{	/* Cfa/cinfo2.scm 32 */
						BgL_typez00_bglt BgL_arg5167z00_1543;

						BgL_varz00_bglt BgL_arg5168z00_1544;

						BgL_arg5167z00_1543 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg5168z00_1544 = BGl_varzd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo2.scm 32 */
							BgL_appz00_bglt BgL_res5511z00_3209;

							{	/* Cfa/cinfo2.scm 32 */
								BgL_appz00_bglt BgL_new2267z00_3196;

								BgL_new2267z00_3196 =
									(BgL_appz00_bglt)
									(BGl_z52thezd2prezd2makezd2procedurezd2appzd2nilz80zzcfa_info2z00);
								{	/* Cfa/cinfo2.scm 32 */
									obj_t BgL_loc2261z00_3203;

									BgL_typez00_bglt BgL_type2262z00_3204;

									obj_t BgL_sidezd2effectzf32263z21_3205;

									obj_t BgL_key2264z00_3206;

									BgL_varz00_bglt BgL_fun2265z00_3207;

									obj_t BgL_args2266z00_3208;

									BgL_loc2261z00_3203 = BUNSPEC;
									BgL_type2262z00_3204 = BgL_arg5167z00_1543;
									BgL_sidezd2effectzf32263z21_3205 = BUNSPEC;
									BgL_key2264z00_3206 = BUNSPEC;
									BgL_fun2265z00_3207 = BgL_arg5168z00_1544;
									BgL_args2266z00_3208 = BUNSPEC;
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3196))->BgL_locz00) =
										((obj_t) BgL_loc2261z00_3203), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3196))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2262z00_3204), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3196))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32263z21_3205), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3196))->BgL_keyz00) =
										((obj_t) BgL_key2264z00_3206), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3196))->BgL_funz00) =
										((BgL_varz00_bglt) BgL_fun2265z00_3207), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3196))->
											BgL_argsz00) = ((obj_t) BgL_args2266z00_3208), BUNSPEC);
									BgL_res5511z00_3209 = BgL_new2267z00_3196;
							}} BgL_res5511z00_3209;
					}}
					{	/* Cfa/cinfo2.scm 32 */
						long BgL_arg5169z00_1545;

						BgL_arg5169z00_1545 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2prezd2makezd2procedurezd2appzd2nilz80zzcfa_info2z00),
							BgL_arg5169z00_1545);
					}
					{	/* Cfa/cinfo2.scm 32 */
						BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_arg5170z00_1546;

						{	/* Cfa/cinfo2.scm 32 */
							BgL_variablez00_bglt BgL_arg5171z00_1547;

							BgL_arg5171z00_1547 = BGl_variablezd2nilzd2zzast_varz00();
							{	/* Cfa/cinfo2.scm 32 */
								BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_res5513z00_3218;

								{	/* Cfa/cinfo2.scm 32 */
									BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_new4197z00_3213;

									BgL_new4197z00_3213 =
										((BgL_prezd2makezd2procedurezd2appzd2_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_prezd2makezd2procedurezd2appzd2_bgl))));
									{	/* Cfa/cinfo2.scm 32 */
										BgL_prezd2makezd2procedurezd2appzd2_bglt
											BgL_res5512z00_3217;
										{	/* Cfa/cinfo2.scm 32 */
											BgL_prezd2makezd2procedurezd2appzd2_bglt
												BgL_new4209z00_3214;
											BgL_new4209z00_3214 = BgL_new4197z00_3213;
											{	/* Cfa/cinfo2.scm 32 */
												BgL_variablez00_bglt BgL_owner4208z00_3216;

												BgL_owner4208z00_3216 = BgL_arg5171z00_1547;
												((((BgL_prezd2makezd2procedurezd2appzd2_bglt)
															CREF(BgL_new4209z00_3214))->BgL_ownerz00) =
													((BgL_variablez00_bglt) BgL_owner4208z00_3216),
													BUNSPEC);
												BgL_res5512z00_3217 = BgL_new4209z00_3214;
										}} BgL_res5512z00_3217;
									}
									BgL_res5513z00_3218 = BgL_new4197z00_3213;
								}
								BgL_arg5170z00_1546 = BgL_res5513z00_3218;
						}}
						{	/* Cfa/cinfo2.scm 32 */
							obj_t BgL_auxz00_5889;

							BgL_objectz00_bglt BgL_auxz00_5887;

							BgL_auxz00_5889 = (obj_t) (BgL_arg5170z00_1546);
							BgL_auxz00_5887 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2prezd2makezd2procedurezd2appzd2nilz80zzcfa_info2z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5887, BgL_auxz00_5889);
				}}}
			else
				{	/* Cfa/cinfo2.scm 32 */
					BFALSE;
				}
			return
				(BgL_prezd2makezd2procedurezd2appzd2_bglt)
				(BGl_z52thezd2prezd2makezd2procedurezd2appzd2nilz80zzcfa_info2z00);
		}
	}



/* _pre-make-procedure-app-nil */
	obj_t BGl__prezd2makezd2procedurezd2appzd2nilz00zzcfa_info2z00(obj_t
		BgL_envz00_3946)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 32 */
			return
				(obj_t) (BGl_prezd2makezd2procedurezd2appzd2nilz00zzcfa_info2z00());
		}
	}



/* arithmetic-app? */
	BGL_EXPORTED_DEF bool_t BGl_arithmeticzd2appzf3z21zzcfa_info2z00(obj_t
		BgL_obj4174z00_287)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 27 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4174z00_287,
				BGl_arithmeticzd2appzd2zzcfa_info2z00);
		}
	}



/* _arithmetic-app? */
	obj_t BGl__arithmeticzd2appzf3z21zzcfa_info2z00(obj_t BgL_envz00_3943,
		obj_t BgL_obj4174z00_3944)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 27 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4174z00_3944,
					BGl_arithmeticzd2appzd2zzcfa_info2z00));
		}
	}



/* widening-arithmetic-app */
	BGL_EXPORTED_DEF BgL_arithmeticzd2appzd2_bglt
		BGl_wideningzd2arithmeticzd2appz00zzcfa_info2z00(BgL_approxz00_bglt
		BgL_approx4147z00_291, obj_t BgL_speczd2types4148zd2_292)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 27 */
			{	/* Cfa/cinfo2.scm 27 */
				BgL_arithmeticzd2appzd2_bglt BgL_new4149z00_3219;

				BgL_new4149z00_3219 =
					((BgL_arithmeticzd2appzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_arithmeticzd2appzd2_bgl))));
				{	/* Cfa/cinfo2.scm 27 */
					BgL_arithmeticzd2appzd2_bglt BgL_res5514z00_3225;

					{	/* Cfa/cinfo2.scm 27 */
						BgL_arithmeticzd2appzd2_bglt BgL_new4163z00_3220;

						BgL_new4163z00_3220 = BgL_new4149z00_3219;
						{	/* Cfa/cinfo2.scm 27 */
							BgL_approxz00_bglt BgL_approx4161z00_3223;

							obj_t BgL_speczd2types4162zd2_3224;

							BgL_approx4161z00_3223 = BgL_approx4147z00_291;
							BgL_speczd2types4162zd2_3224 = BgL_speczd2types4148zd2_292;
							((((BgL_arithmeticzd2appzd2_bglt) CREF(BgL_new4163z00_3220))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4161z00_3223), BUNSPEC);
							((((BgL_arithmeticzd2appzd2_bglt) CREF(BgL_new4163z00_3220))->
									BgL_speczd2typeszd2) =
								((obj_t) BgL_speczd2types4162zd2_3224), BUNSPEC);
							BgL_res5514z00_3225 = BgL_new4163z00_3220;
					}} BgL_res5514z00_3225;
				}
				return BgL_new4149z00_3219;
			}
		}
	}



/* _widening-arithmetic-app */
	obj_t BGl__wideningzd2arithmeticzd2appz00zzcfa_info2z00(obj_t BgL_envz00_4219,
		obj_t BgL_approx4147z00_4220, obj_t BgL_speczd2types4148zd2_4221)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 27 */
			return
				(obj_t) (BGl_wideningzd2arithmeticzd2appz00zzcfa_info2z00(
					(BgL_approxz00_bglt) (BgL_approx4147z00_4220),
					BgL_speczd2types4148zd2_4221));
		}
	}



/* make-arithmetic-app */
	BGL_EXPORTED_DEF BgL_arithmeticzd2appzd2_bglt
		BGl_makezd2arithmeticzd2appz00zzcfa_info2z00(obj_t BgL_loc4153z00_293,
		BgL_typez00_bglt BgL_type4154z00_294, obj_t BgL_sidezd2effectzf34155z21_295,
		obj_t BgL_key4156z00_296, BgL_varz00_bglt BgL_fun4157z00_297,
		obj_t BgL_args4158z00_298, BgL_approxz00_bglt BgL_approx4151z00_299,
		obj_t BgL_speczd2types4152zd2_300)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 27 */
			{	/* Cfa/cinfo2.scm 27 */
				BgL_appz00_bglt BgL_aux4159z00_3226;

				BgL_aux4159z00_3226 =
					BGl_makezd2appzd2zzast_nodez00(BgL_loc4153z00_293,
					BgL_type4154z00_294, BgL_sidezd2effectzf34155z21_295,
					BgL_key4156z00_296, BgL_fun4157z00_297, BgL_args4158z00_298);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4159z00_3226),
					BGl_classzd2numzd2zz__objectz00
					(BGl_arithmeticzd2appzd2zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 27 */
					BgL_arithmeticzd2appzd2_bglt BgL_arg5173z00_3228;

					{	/* Cfa/cinfo2.scm 27 */
						BgL_arithmeticzd2appzd2_bglt BgL_res5516z00_3241;

						{	/* Cfa/cinfo2.scm 27 */
							BgL_arithmeticzd2appzd2_bglt BgL_new4149z00_3234;

							BgL_new4149z00_3234 =
								((BgL_arithmeticzd2appzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_arithmeticzd2appzd2_bgl))));
							{	/* Cfa/cinfo2.scm 27 */
								BgL_arithmeticzd2appzd2_bglt BgL_res5515z00_3240;

								{	/* Cfa/cinfo2.scm 27 */
									BgL_arithmeticzd2appzd2_bglt BgL_new4163z00_3235;

									BgL_new4163z00_3235 = BgL_new4149z00_3234;
									{	/* Cfa/cinfo2.scm 27 */
										BgL_approxz00_bglt BgL_approx4161z00_3238;

										obj_t BgL_speczd2types4162zd2_3239;

										BgL_approx4161z00_3238 = BgL_approx4151z00_299;
										BgL_speczd2types4162zd2_3239 = BgL_speczd2types4152zd2_300;
										((((BgL_arithmeticzd2appzd2_bglt)
													CREF(BgL_new4163z00_3235))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4161z00_3238), BUNSPEC);
										((((BgL_arithmeticzd2appzd2_bglt)
													CREF(BgL_new4163z00_3235))->BgL_speczd2typeszd2) =
											((obj_t) BgL_speczd2types4162zd2_3239), BUNSPEC);
										BgL_res5515z00_3240 = BgL_new4163z00_3235;
								}} BgL_res5515z00_3240;
							}
							BgL_res5516z00_3241 = BgL_new4149z00_3234;
						}
						BgL_arg5173z00_3228 = BgL_res5516z00_3241;
					}
					{	/* Cfa/cinfo2.scm 27 */
						obj_t BgL_auxz00_5913;

						BgL_objectz00_bglt BgL_auxz00_5911;

						BgL_auxz00_5913 = (obj_t) (BgL_arg5173z00_3228);
						BgL_auxz00_5911 = (BgL_objectz00_bglt) (BgL_aux4159z00_3226);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_5911, BgL_auxz00_5913);
				}}
				return
					((BgL_arithmeticzd2appzd2_bglt)
					(BgL_arithmeticzd2appzd2_bglt) (BgL_aux4159z00_3226));
			}
		}
	}



/* _make-arithmetic-app */
	obj_t BGl__makezd2arithmeticzd2appz00zzcfa_info2z00(obj_t BgL_envz00_4222,
		obj_t BgL_loc4153z00_4223, obj_t BgL_type4154z00_4224,
		obj_t BgL_sidezd2effectzf34155z21_4225, obj_t BgL_key4156z00_4226,
		obj_t BgL_fun4157z00_4227, obj_t BgL_args4158z00_4228,
		obj_t BgL_approx4151z00_4229, obj_t BgL_speczd2types4152zd2_4230)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 27 */
			return
				(obj_t) (BGl_makezd2arithmeticzd2appz00zzcfa_info2z00
				(BgL_loc4153z00_4223, (BgL_typez00_bglt) (BgL_type4154z00_4224),
					BgL_sidezd2effectzf34155z21_4225, BgL_key4156z00_4226,
					(BgL_varz00_bglt) (BgL_fun4157z00_4227), BgL_args4158z00_4228,
					(BgL_approxz00_bglt) (BgL_approx4151z00_4229),
					BgL_speczd2types4152zd2_4230));
		}
	}



/* fill-arithmetic-app! */
	BGL_EXPORTED_DEF BgL_arithmeticzd2appzd2_bglt
		BGl_fillzd2arithmeticzd2appz12z12zzcfa_info2z00(BgL_arithmeticzd2appzd2_bglt
		BgL_new4163z00_301, BgL_approxz00_bglt BgL_approx4161z00_302,
		obj_t BgL_speczd2types4162zd2_303)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 27 */
			{	/* Cfa/cinfo2.scm 27 */
				BgL_approxz00_bglt BgL_approx4161z00_4562;

				obj_t BgL_speczd2types4162zd2_4563;

				BgL_approx4161z00_4562 = BgL_approx4161z00_302;
				BgL_speczd2types4162zd2_4563 = BgL_speczd2types4162zd2_303;
				((((BgL_arithmeticzd2appzd2_bglt) CREF(BgL_new4163z00_301))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4161z00_4562), BUNSPEC);
				((((BgL_arithmeticzd2appzd2_bglt) CREF(BgL_new4163z00_301))->
						BgL_speczd2typeszd2) =
					((obj_t) BgL_speczd2types4162zd2_4563), BUNSPEC);
				return BgL_new4163z00_301;
			}
		}
	}



/* _fill-arithmetic-app! */
	obj_t BGl__fillzd2arithmeticzd2appz12z12zzcfa_info2z00(obj_t BgL_envz00_4231,
		obj_t BgL_new4163z00_4232, obj_t BgL_approx4161z00_4233,
		obj_t BgL_speczd2types4162zd2_4234)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 27 */
			{	/* Cfa/cinfo2.scm 27 */
				BgL_arithmeticzd2appzd2_bglt BgL_auxz00_5925;

				{	/* Cfa/cinfo2.scm 27 */
					BgL_arithmeticzd2appzd2_bglt BgL_res5635z00_4569;

					{	/* Cfa/cinfo2.scm 27 */
						BgL_arithmeticzd2appzd2_bglt BgL_new4163z00_4564;

						BgL_approxz00_bglt BgL_approx4161z00_4565;

						obj_t BgL_speczd2types4162zd2_4566;

						BgL_new4163z00_4564 =
							(BgL_arithmeticzd2appzd2_bglt) (BgL_new4163z00_4232);
						BgL_approx4161z00_4565 =
							(BgL_approxz00_bglt) (BgL_approx4161z00_4233);
						BgL_speczd2types4162zd2_4566 = BgL_speczd2types4162zd2_4234;
						{	/* Cfa/cinfo2.scm 27 */
							BgL_approxz00_bglt BgL_approx4161z00_4567;

							obj_t BgL_speczd2types4162zd2_4568;

							BgL_approx4161z00_4567 = BgL_approx4161z00_4565;
							BgL_speczd2types4162zd2_4568 = BgL_speczd2types4162zd2_4566;
							((((BgL_arithmeticzd2appzd2_bglt) CREF(BgL_new4163z00_4564))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4161z00_4567), BUNSPEC);
							((((BgL_arithmeticzd2appzd2_bglt) CREF(BgL_new4163z00_4564))->
									BgL_speczd2typeszd2) =
								((obj_t) BgL_speczd2types4162zd2_4568), BUNSPEC);
							BgL_res5635z00_4569 = BgL_new4163z00_4564;
						}
					}
					BgL_auxz00_5925 = BgL_res5635z00_4569;
				}
				return (obj_t) (BgL_auxz00_5925);
			}
		}
	}



/* %allocate-arithmetic-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_z52allocatezd2arithmeticzd2appz52zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 27 */
			{	/* Cfa/cinfo2.scm 27 */
				BgL_appz00_bglt BgL_new4167z00_4570;

				BgL_new4167z00_4570 =
					((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_appz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new4167z00_4570),
					BGl_classzd2numzd2zz__objectz00
					(BGl_arithmeticzd2appzd2zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 27 */
					BgL_objectz00_bglt BgL_auxz00_5935;

					BgL_auxz00_5935 = (BgL_objectz00_bglt) (BgL_new4167z00_4570);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_5935, BFALSE);
				}
				return BgL_new4167z00_4570;
			}
		}
	}



/* _%allocate-arithmetic-app */
	obj_t BGl__z52allocatezd2arithmeticzd2appz52zzcfa_info2z00(obj_t
		BgL_envz00_3941)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 27 */
			{	/* Cfa/cinfo2.scm 27 */
				BgL_appz00_bglt BgL_auxz00_5938;

				{	/* Cfa/cinfo2.scm 27 */
					BgL_appz00_bglt BgL_res5636z00_4574;

					{	/* Cfa/cinfo2.scm 27 */
						BgL_appz00_bglt BgL_new4167z00_4572;

						BgL_new4167z00_4572 =
							((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_appz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4167z00_4572),
							BGl_classzd2numzd2zz__objectz00
							(BGl_arithmeticzd2appzd2zzcfa_info2z00));
						{	/* Cfa/cinfo2.scm 27 */
							BgL_objectz00_bglt BgL_auxz00_5943;

							BgL_auxz00_5943 = (BgL_objectz00_bglt) (BgL_new4167z00_4572);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5943, BFALSE);
						}
						BgL_res5636z00_4574 = BgL_new4167z00_4572;
					}
					BgL_auxz00_5938 = BgL_res5636z00_4574;
				}
				return (obj_t) (BgL_auxz00_5938);
			}
		}
	}



/* arithmetic-app-nil */
	BGL_EXPORTED_DEF BgL_arithmeticzd2appzd2_bglt
		BGl_arithmeticzd2appzd2nilz00zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 27 */
			if ((BGl_z52thezd2arithmeticzd2appzd2nilz80zzcfa_info2z00 == BUNSPEC))
				{	/* Cfa/cinfo2.scm 27 */
					{	/* Cfa/cinfo2.scm 27 */
						BgL_appz00_bglt BgL_res5517z00_3252;

						{	/* Cfa/cinfo2.scm 27 */
							BgL_appz00_bglt BgL_new2275z00_3248;

							BgL_new2275z00_3248 =
								((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2275z00_3248),
								BGl_classzd2numzd2zz__objectz00(BGl_appz00zzast_nodez00));
							{	/* Cfa/cinfo2.scm 27 */
								BgL_objectz00_bglt BgL_auxz00_5953;

								BgL_auxz00_5953 = (BgL_objectz00_bglt) (BgL_new2275z00_3248);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5953, BFALSE);
							}
							BgL_res5517z00_3252 = BgL_new2275z00_3248;
						}
						BGl_z52thezd2arithmeticzd2appzd2nilz80zzcfa_info2z00 =
							(obj_t) (BgL_res5517z00_3252);
					}
					{	/* Cfa/cinfo2.scm 27 */
						BgL_typez00_bglt BgL_arg5176z00_1558;

						BgL_varz00_bglt BgL_arg5177z00_1559;

						BgL_arg5176z00_1558 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg5177z00_1559 = BGl_varzd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo2.scm 27 */
							BgL_appz00_bglt BgL_res5518z00_3266;

							{	/* Cfa/cinfo2.scm 27 */
								BgL_appz00_bglt BgL_new2267z00_3253;

								BgL_new2267z00_3253 =
									(BgL_appz00_bglt)
									(BGl_z52thezd2arithmeticzd2appzd2nilz80zzcfa_info2z00);
								{	/* Cfa/cinfo2.scm 27 */
									obj_t BgL_loc2261z00_3260;

									BgL_typez00_bglt BgL_type2262z00_3261;

									obj_t BgL_sidezd2effectzf32263z21_3262;

									obj_t BgL_key2264z00_3263;

									BgL_varz00_bglt BgL_fun2265z00_3264;

									obj_t BgL_args2266z00_3265;

									BgL_loc2261z00_3260 = BUNSPEC;
									BgL_type2262z00_3261 = BgL_arg5176z00_1558;
									BgL_sidezd2effectzf32263z21_3262 = BUNSPEC;
									BgL_key2264z00_3263 = BUNSPEC;
									BgL_fun2265z00_3264 = BgL_arg5177z00_1559;
									BgL_args2266z00_3265 = BUNSPEC;
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3253))->BgL_locz00) =
										((obj_t) BgL_loc2261z00_3260), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3253))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2262z00_3261), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3253))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32263z21_3262), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3253))->BgL_keyz00) =
										((obj_t) BgL_key2264z00_3263), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3253))->BgL_funz00) =
										((BgL_varz00_bglt) BgL_fun2265z00_3264), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3253))->
											BgL_argsz00) = ((obj_t) BgL_args2266z00_3265), BUNSPEC);
									BgL_res5518z00_3266 = BgL_new2267z00_3253;
							}} BgL_res5518z00_3266;
					}}
					{	/* Cfa/cinfo2.scm 27 */
						long BgL_arg5178z00_1560;

						BgL_arg5178z00_1560 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_arithmeticzd2appzd2zzcfa_info2z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2arithmeticzd2appzd2nilz80zzcfa_info2z00),
							BgL_arg5178z00_1560);
					}
					{	/* Cfa/cinfo2.scm 27 */
						BgL_arithmeticzd2appzd2_bglt BgL_arg5179z00_1561;

						{	/* Cfa/cinfo2.scm 27 */
							BgL_approxz00_bglt BgL_arg5180z00_1562;

							obj_t BgL_arg5181z00_1563;

							BgL_arg5180z00_1562 = BGl_approxzd2nilzd2zzcfa_infoz00();
							BgL_arg5181z00_1563 = MAKE_PAIR(BFALSE, BFALSE);
							{	/* Cfa/cinfo2.scm 27 */
								BgL_arithmeticzd2appzd2_bglt BgL_res5520z00_3278;

								{	/* Cfa/cinfo2.scm 27 */
									BgL_arithmeticzd2appzd2_bglt BgL_new4149z00_3271;

									BgL_new4149z00_3271 =
										((BgL_arithmeticzd2appzd2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_arithmeticzd2appzd2_bgl))));
									{	/* Cfa/cinfo2.scm 27 */
										BgL_arithmeticzd2appzd2_bglt BgL_res5519z00_3277;

										{	/* Cfa/cinfo2.scm 27 */
											BgL_arithmeticzd2appzd2_bglt BgL_new4163z00_3272;

											BgL_new4163z00_3272 = BgL_new4149z00_3271;
											{	/* Cfa/cinfo2.scm 27 */
												BgL_approxz00_bglt BgL_approx4161z00_3275;

												obj_t BgL_speczd2types4162zd2_3276;

												BgL_approx4161z00_3275 = BgL_arg5180z00_1562;
												BgL_speczd2types4162zd2_3276 = BgL_arg5181z00_1563;
												((((BgL_arithmeticzd2appzd2_bglt)
															CREF(BgL_new4163z00_3272))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4161z00_3275),
													BUNSPEC);
												((((BgL_arithmeticzd2appzd2_bglt)
															CREF(BgL_new4163z00_3272))->BgL_speczd2typeszd2) =
													((obj_t) BgL_speczd2types4162zd2_3276), BUNSPEC);
												BgL_res5519z00_3277 = BgL_new4163z00_3272;
										}} BgL_res5519z00_3277;
									}
									BgL_res5520z00_3278 = BgL_new4149z00_3271;
								}
								BgL_arg5179z00_1561 = BgL_res5520z00_3278;
						}}
						{	/* Cfa/cinfo2.scm 27 */
							obj_t BgL_auxz00_5976;

							BgL_objectz00_bglt BgL_auxz00_5974;

							BgL_auxz00_5976 = (obj_t) (BgL_arg5179z00_1561);
							BgL_auxz00_5974 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2arithmeticzd2appzd2nilz80zzcfa_info2z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5974, BgL_auxz00_5976);
				}}}
			else
				{	/* Cfa/cinfo2.scm 27 */
					BFALSE;
				}
			return
				(BgL_arithmeticzd2appzd2_bglt)
				(BGl_z52thezd2arithmeticzd2appzd2nilz80zzcfa_info2z00);
		}
	}



/* _arithmetic-app-nil */
	obj_t BGl__arithmeticzd2appzd2nilz00zzcfa_info2z00(obj_t BgL_envz00_3942)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 27 */
			return (obj_t) (BGl_arithmeticzd2appzd2nilz00zzcfa_info2z00());
		}
	}



/* pre-arithmetic-app? */
	BGL_EXPORTED_DEF bool_t BGl_prezd2arithmeticzd2appzf3zf3zzcfa_info2z00(obj_t
		BgL_obj4126z00_306)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 25 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4126z00_306,
				BGl_prezd2arithmeticzd2appz00zzcfa_info2z00);
		}
	}



/* _pre-arithmetic-app? */
	obj_t BGl__prezd2arithmeticzd2appzf3zf3zzcfa_info2z00(obj_t BgL_envz00_3939,
		obj_t BgL_obj4126z00_3940)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 25 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4126z00_3940,
					BGl_prezd2arithmeticzd2appz00zzcfa_info2z00));
		}
	}



/* widening-pre-arithmetic-app */
	BGL_EXPORTED_DEF BgL_prezd2arithmeticzd2appz00_bglt
		BGl_wideningzd2prezd2arithmeticzd2appzd2zzcfa_info2z00(obj_t
		BgL_speczd2types4103zd2_310)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 25 */
			{	/* Cfa/cinfo2.scm 25 */
				BgL_prezd2arithmeticzd2appz00_bglt BgL_new4104z00_3279;

				BgL_new4104z00_3279 =
					((BgL_prezd2arithmeticzd2appz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_prezd2arithmeticzd2appz00_bgl))));
				{	/* Cfa/cinfo2.scm 25 */
					BgL_prezd2arithmeticzd2appz00_bglt BgL_res5521z00_3283;

					{	/* Cfa/cinfo2.scm 25 */
						BgL_prezd2arithmeticzd2appz00_bglt BgL_new4116z00_3280;

						BgL_new4116z00_3280 = BgL_new4104z00_3279;
						{	/* Cfa/cinfo2.scm 25 */
							obj_t BgL_speczd2types4115zd2_3282;

							BgL_speczd2types4115zd2_3282 = BgL_speczd2types4103zd2_310;
							((((BgL_prezd2arithmeticzd2appz00_bglt)
										CREF(BgL_new4116z00_3280))->BgL_speczd2typeszd2) =
								((obj_t) BgL_speczd2types4115zd2_3282), BUNSPEC);
							BgL_res5521z00_3283 = BgL_new4116z00_3280;
					}} BgL_res5521z00_3283;
				}
				return BgL_new4104z00_3279;
			}
		}
	}



/* _widening-pre-arithmetic-app */
	obj_t BGl__wideningzd2prezd2arithmeticzd2appzd2zzcfa_info2z00(obj_t
		BgL_envz00_4235, obj_t BgL_speczd2types4103zd2_4236)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 25 */
			return
				(obj_t) (BGl_wideningzd2prezd2arithmeticzd2appzd2zzcfa_info2z00
				(BgL_speczd2types4103zd2_4236));
		}
	}



/* make-pre-arithmetic-app */
	BGL_EXPORTED_DEF BgL_prezd2arithmeticzd2appz00_bglt
		BGl_makezd2prezd2arithmeticzd2appzd2zzcfa_info2z00(obj_t BgL_loc4107z00_311,
		BgL_typez00_bglt BgL_type4108z00_312, obj_t BgL_sidezd2effectzf34109z21_313,
		obj_t BgL_key4110z00_314, BgL_varz00_bglt BgL_fun4111z00_315,
		obj_t BgL_args4112z00_316, obj_t BgL_speczd2types4106zd2_317)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 25 */
			{	/* Cfa/cinfo2.scm 25 */
				BgL_appz00_bglt BgL_aux4113z00_3284;

				BgL_aux4113z00_3284 =
					BGl_makezd2appzd2zzast_nodez00(BgL_loc4107z00_311,
					BgL_type4108z00_312, BgL_sidezd2effectzf34109z21_313,
					BgL_key4110z00_314, BgL_fun4111z00_315, BgL_args4112z00_316);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4113z00_3284),
					BGl_classzd2numzd2zz__objectz00
					(BGl_prezd2arithmeticzd2appz00zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 25 */
					BgL_prezd2arithmeticzd2appz00_bglt BgL_arg5183z00_3286;

					{	/* Cfa/cinfo2.scm 25 */
						BgL_prezd2arithmeticzd2appz00_bglt BgL_res5523z00_3296;

						{	/* Cfa/cinfo2.scm 25 */
							BgL_prezd2arithmeticzd2appz00_bglt BgL_new4104z00_3291;

							BgL_new4104z00_3291 =
								((BgL_prezd2arithmeticzd2appz00_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_prezd2arithmeticzd2appz00_bgl))));
							{	/* Cfa/cinfo2.scm 25 */
								BgL_prezd2arithmeticzd2appz00_bglt BgL_res5522z00_3295;

								{	/* Cfa/cinfo2.scm 25 */
									BgL_prezd2arithmeticzd2appz00_bglt BgL_new4116z00_3292;

									BgL_new4116z00_3292 = BgL_new4104z00_3291;
									{	/* Cfa/cinfo2.scm 25 */
										obj_t BgL_speczd2types4115zd2_3294;

										BgL_speczd2types4115zd2_3294 = BgL_speczd2types4106zd2_317;
										((((BgL_prezd2arithmeticzd2appz00_bglt)
													CREF(BgL_new4116z00_3292))->BgL_speczd2typeszd2) =
											((obj_t) BgL_speczd2types4115zd2_3294), BUNSPEC);
										BgL_res5522z00_3295 = BgL_new4116z00_3292;
								}} BgL_res5522z00_3295;
							}
							BgL_res5523z00_3296 = BgL_new4104z00_3291;
						}
						BgL_arg5183z00_3286 = BgL_res5523z00_3296;
					}
					{	/* Cfa/cinfo2.scm 25 */
						obj_t BgL_auxz00_5997;

						BgL_objectz00_bglt BgL_auxz00_5995;

						BgL_auxz00_5997 = (obj_t) (BgL_arg5183z00_3286);
						BgL_auxz00_5995 = (BgL_objectz00_bglt) (BgL_aux4113z00_3284);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_5995, BgL_auxz00_5997);
				}}
				return
					((BgL_prezd2arithmeticzd2appz00_bglt)
					(BgL_prezd2arithmeticzd2appz00_bglt) (BgL_aux4113z00_3284));
			}
		}
	}



/* _make-pre-arithmetic-app */
	obj_t BGl__makezd2prezd2arithmeticzd2appzd2zzcfa_info2z00(obj_t
		BgL_envz00_4237, obj_t BgL_loc4107z00_4238, obj_t BgL_type4108z00_4239,
		obj_t BgL_sidezd2effectzf34109z21_4240, obj_t BgL_key4110z00_4241,
		obj_t BgL_fun4111z00_4242, obj_t BgL_args4112z00_4243,
		obj_t BgL_speczd2types4106zd2_4244)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 25 */
			return
				(obj_t) (BGl_makezd2prezd2arithmeticzd2appzd2zzcfa_info2z00
				(BgL_loc4107z00_4238, (BgL_typez00_bglt) (BgL_type4108z00_4239),
					BgL_sidezd2effectzf34109z21_4240, BgL_key4110z00_4241,
					(BgL_varz00_bglt) (BgL_fun4111z00_4242), BgL_args4112z00_4243,
					BgL_speczd2types4106zd2_4244));
		}
	}



/* fill-pre-arithmetic-app! */
	BGL_EXPORTED_DEF BgL_prezd2arithmeticzd2appz00_bglt
		BGl_fillzd2prezd2arithmeticzd2appz12zc0zzcfa_info2z00
		(BgL_prezd2arithmeticzd2appz00_bglt BgL_new4116z00_318,
		obj_t BgL_speczd2types4115zd2_319)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 25 */
			{	/* Cfa/cinfo2.scm 25 */
				obj_t BgL_speczd2types4115zd2_4576;

				BgL_speczd2types4115zd2_4576 = BgL_speczd2types4115zd2_319;
				((((BgL_prezd2arithmeticzd2appz00_bglt) CREF(BgL_new4116z00_318))->
						BgL_speczd2typeszd2) =
					((obj_t) BgL_speczd2types4115zd2_4576), BUNSPEC);
				return BgL_new4116z00_318;
			}
		}
	}



/* _fill-pre-arithmetic-app! */
	obj_t BGl__fillzd2prezd2arithmeticzd2appz12zc0zzcfa_info2z00(obj_t
		BgL_envz00_4245, obj_t BgL_new4116z00_4246,
		obj_t BgL_speczd2types4115zd2_4247)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 25 */
			{	/* Cfa/cinfo2.scm 25 */
				BgL_prezd2arithmeticzd2appz00_bglt BgL_auxz00_6007;

				{	/* Cfa/cinfo2.scm 25 */
					BgL_prezd2arithmeticzd2appz00_bglt BgL_res5637z00_4580;

					{	/* Cfa/cinfo2.scm 25 */
						BgL_prezd2arithmeticzd2appz00_bglt BgL_new4116z00_4577;

						obj_t BgL_speczd2types4115zd2_4578;

						BgL_new4116z00_4577 =
							(BgL_prezd2arithmeticzd2appz00_bglt) (BgL_new4116z00_4246);
						BgL_speczd2types4115zd2_4578 = BgL_speczd2types4115zd2_4247;
						{	/* Cfa/cinfo2.scm 25 */
							obj_t BgL_speczd2types4115zd2_4579;

							BgL_speczd2types4115zd2_4579 = BgL_speczd2types4115zd2_4578;
							((((BgL_prezd2arithmeticzd2appz00_bglt)
										CREF(BgL_new4116z00_4577))->BgL_speczd2typeszd2) =
								((obj_t) BgL_speczd2types4115zd2_4579), BUNSPEC);
							BgL_res5637z00_4580 = BgL_new4116z00_4577;
						}
					}
					BgL_auxz00_6007 = BgL_res5637z00_4580;
				}
				return (obj_t) (BgL_auxz00_6007);
			}
		}
	}



/* %allocate-pre-arithmetic-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_z52allocatezd2prezd2arithmeticzd2appz80zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 25 */
			{	/* Cfa/cinfo2.scm 25 */
				BgL_appz00_bglt BgL_new4119z00_4581;

				BgL_new4119z00_4581 =
					((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_appz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new4119z00_4581),
					BGl_classzd2numzd2zz__objectz00
					(BGl_prezd2arithmeticzd2appz00zzcfa_info2z00));
				{	/* Cfa/cinfo2.scm 25 */
					BgL_objectz00_bglt BgL_auxz00_6015;

					BgL_auxz00_6015 = (BgL_objectz00_bglt) (BgL_new4119z00_4581);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6015, BFALSE);
				}
				return BgL_new4119z00_4581;
			}
		}
	}



/* _%allocate-pre-arithmetic-app */
	obj_t BGl__z52allocatezd2prezd2arithmeticzd2appz80zzcfa_info2z00(obj_t
		BgL_envz00_3937)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 25 */
			{	/* Cfa/cinfo2.scm 25 */
				BgL_appz00_bglt BgL_auxz00_6018;

				{	/* Cfa/cinfo2.scm 25 */
					BgL_appz00_bglt BgL_res5638z00_4585;

					{	/* Cfa/cinfo2.scm 25 */
						BgL_appz00_bglt BgL_new4119z00_4583;

						BgL_new4119z00_4583 =
							((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_appz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4119z00_4583),
							BGl_classzd2numzd2zz__objectz00
							(BGl_prezd2arithmeticzd2appz00zzcfa_info2z00));
						{	/* Cfa/cinfo2.scm 25 */
							BgL_objectz00_bglt BgL_auxz00_6023;

							BgL_auxz00_6023 = (BgL_objectz00_bglt) (BgL_new4119z00_4583);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6023, BFALSE);
						}
						BgL_res5638z00_4585 = BgL_new4119z00_4583;
					}
					BgL_auxz00_6018 = BgL_res5638z00_4585;
				}
				return (obj_t) (BgL_auxz00_6018);
			}
		}
	}



/* pre-arithmetic-app-nil */
	BGL_EXPORTED_DEF BgL_prezd2arithmeticzd2appz00_bglt
		BGl_prezd2arithmeticzd2appzd2nilzd2zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 25 */
			if (
				(BGl_z52thezd2prezd2arithmeticzd2appzd2nilz52zzcfa_info2z00 == BUNSPEC))
				{	/* Cfa/cinfo2.scm 25 */
					{	/* Cfa/cinfo2.scm 25 */
						BgL_appz00_bglt BgL_res5524z00_3306;

						{	/* Cfa/cinfo2.scm 25 */
							BgL_appz00_bglt BgL_new2275z00_3302;

							BgL_new2275z00_3302 =
								((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2275z00_3302),
								BGl_classzd2numzd2zz__objectz00(BGl_appz00zzast_nodez00));
							{	/* Cfa/cinfo2.scm 25 */
								BgL_objectz00_bglt BgL_auxz00_6033;

								BgL_auxz00_6033 = (BgL_objectz00_bglt) (BgL_new2275z00_3302);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6033, BFALSE);
							}
							BgL_res5524z00_3306 = BgL_new2275z00_3302;
						}
						BGl_z52thezd2prezd2arithmeticzd2appzd2nilz52zzcfa_info2z00 =
							(obj_t) (BgL_res5524z00_3306);
					}
					{	/* Cfa/cinfo2.scm 25 */
						BgL_typez00_bglt BgL_arg5186z00_1573;

						BgL_varz00_bglt BgL_arg5187z00_1574;

						BgL_arg5186z00_1573 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg5187z00_1574 = BGl_varzd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo2.scm 25 */
							BgL_appz00_bglt BgL_res5525z00_3320;

							{	/* Cfa/cinfo2.scm 25 */
								BgL_appz00_bglt BgL_new2267z00_3307;

								BgL_new2267z00_3307 =
									(BgL_appz00_bglt)
									(BGl_z52thezd2prezd2arithmeticzd2appzd2nilz52zzcfa_info2z00);
								{	/* Cfa/cinfo2.scm 25 */
									obj_t BgL_loc2261z00_3314;

									BgL_typez00_bglt BgL_type2262z00_3315;

									obj_t BgL_sidezd2effectzf32263z21_3316;

									obj_t BgL_key2264z00_3317;

									BgL_varz00_bglt BgL_fun2265z00_3318;

									obj_t BgL_args2266z00_3319;

									BgL_loc2261z00_3314 = BUNSPEC;
									BgL_type2262z00_3315 = BgL_arg5186z00_1573;
									BgL_sidezd2effectzf32263z21_3316 = BUNSPEC;
									BgL_key2264z00_3317 = BUNSPEC;
									BgL_fun2265z00_3318 = BgL_arg5187z00_1574;
									BgL_args2266z00_3319 = BUNSPEC;
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3307))->BgL_locz00) =
										((obj_t) BgL_loc2261z00_3314), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3307))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2262z00_3315), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3307))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32263z21_3316), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3307))->BgL_keyz00) =
										((obj_t) BgL_key2264z00_3317), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3307))->BgL_funz00) =
										((BgL_varz00_bglt) BgL_fun2265z00_3318), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2267z00_3307))->
											BgL_argsz00) = ((obj_t) BgL_args2266z00_3319), BUNSPEC);
									BgL_res5525z00_3320 = BgL_new2267z00_3307;
							}} BgL_res5525z00_3320;
					}}
					{	/* Cfa/cinfo2.scm 25 */
						long BgL_arg5188z00_1575;

						BgL_arg5188z00_1575 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_prezd2arithmeticzd2appz00zzcfa_info2z00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2prezd2arithmeticzd2appzd2nilz52zzcfa_info2z00),
							BgL_arg5188z00_1575);
					}
					{	/* Cfa/cinfo2.scm 25 */
						BgL_prezd2arithmeticzd2appz00_bglt BgL_arg5189z00_1576;

						{	/* Cfa/cinfo2.scm 25 */
							obj_t BgL_arg5190z00_1577;

							BgL_arg5190z00_1577 = MAKE_PAIR(BFALSE, BFALSE);
							{	/* Cfa/cinfo2.scm 25 */
								BgL_prezd2arithmeticzd2appz00_bglt BgL_res5527z00_3329;

								{	/* Cfa/cinfo2.scm 25 */
									BgL_prezd2arithmeticzd2appz00_bglt BgL_new4104z00_3324;

									BgL_new4104z00_3324 =
										((BgL_prezd2arithmeticzd2appz00_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_prezd2arithmeticzd2appz00_bgl))));
									{	/* Cfa/cinfo2.scm 25 */
										BgL_prezd2arithmeticzd2appz00_bglt BgL_res5526z00_3328;

										{	/* Cfa/cinfo2.scm 25 */
											BgL_prezd2arithmeticzd2appz00_bglt BgL_new4116z00_3325;

											BgL_new4116z00_3325 = BgL_new4104z00_3324;
											{	/* Cfa/cinfo2.scm 25 */
												obj_t BgL_speczd2types4115zd2_3327;

												BgL_speczd2types4115zd2_3327 = BgL_arg5190z00_1577;
												((((BgL_prezd2arithmeticzd2appz00_bglt)
															CREF(BgL_new4116z00_3325))->BgL_speczd2typeszd2) =
													((obj_t) BgL_speczd2types4115zd2_3327), BUNSPEC);
												BgL_res5526z00_3328 = BgL_new4116z00_3325;
										}} BgL_res5526z00_3328;
									}
									BgL_res5527z00_3329 = BgL_new4104z00_3324;
								}
								BgL_arg5189z00_1576 = BgL_res5527z00_3329;
						}}
						{	/* Cfa/cinfo2.scm 25 */
							obj_t BgL_auxz00_6054;

							BgL_objectz00_bglt BgL_auxz00_6052;

							BgL_auxz00_6054 = (obj_t) (BgL_arg5189z00_1576);
							BgL_auxz00_6052 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2prezd2arithmeticzd2appzd2nilz52zzcfa_info2z00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6052, BgL_auxz00_6054);
				}}}
			else
				{	/* Cfa/cinfo2.scm 25 */
					BFALSE;
				}
			return
				(BgL_prezd2arithmeticzd2appz00_bglt)
				(BGl_z52thezd2prezd2arithmeticzd2appzd2nilz52zzcfa_info2z00);
		}
	}



/* _pre-arithmetic-app-nil */
	obj_t BGl__prezd2arithmeticzd2appzd2nilzd2zzcfa_info2z00(obj_t
		BgL_envz00_3938)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 25 */
			return (obj_t) (BGl_prezd2arithmeticzd2appzd2nilzd2zzcfa_info2z00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 16 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 16 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_structzd2setz12zd2appz12zzcfa_info2z00,
				BGl_proc5573z00zzcfa_info2z00, BGl_string5574z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_structzd2setz12zd2appz12zzcfa_info2z00,
				BGl_proc5575z00zzcfa_info2z00, BGl_string5576z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_structzd2refzd2appz00zzcfa_info2z00, BGl_proc5577z00zzcfa_info2z00,
				BGl_string5574z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_structzd2refzd2appz00zzcfa_info2z00, BGl_proc5578z00zzcfa_info2z00,
				BGl_string5576z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_makezd2structzd2appz00zzcfa_info2z00, BGl_proc5579z00zzcfa_info2z00,
				BGl_string5574z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_makezd2structzd2appz00zzcfa_info2z00, BGl_proc5580z00zzcfa_info2z00,
				BGl_string5576z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00,
				BGl_proc5581z00zzcfa_info2z00, BGl_string5574z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00,
				BGl_proc5582z00zzcfa_info2z00, BGl_string5576z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00,
				BGl_proc5583z00zzcfa_info2z00, BGl_string5574z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00,
				BGl_proc5584z00zzcfa_info2z00, BGl_string5576z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00,
				BGl_proc5585z00zzcfa_info2z00, BGl_string5574z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00,
				BGl_proc5586z00zzcfa_info2z00, BGl_string5576z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_makezd2vectorzd2appz00zzcfa_info2z00, BGl_proc5587z00zzcfa_info2z00,
				BGl_string5574z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_makezd2vectorzd2appz00zzcfa_info2z00, BGl_proc5588z00zzcfa_info2z00,
				BGl_string5576z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00,
				BGl_proc5589z00zzcfa_info2z00, BGl_string5574z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00,
				BGl_proc5590z00zzcfa_info2z00, BGl_string5576z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_procedurezd2setz12zd2appz12zzcfa_info2z00,
				BGl_proc5591z00zzcfa_info2z00, BGl_string5574z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_procedurezd2setz12zd2appz12zzcfa_info2z00,
				BGl_proc5592z00zzcfa_info2z00, BGl_string5576z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_procedurezd2refzd2appz00zzcfa_info2z00,
				BGl_proc5593z00zzcfa_info2z00, BGl_string5574z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_procedurezd2refzd2appz00zzcfa_info2z00,
				BGl_proc5594z00zzcfa_info2z00, BGl_string5576z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_makezd2procedurezd2appz00zzcfa_info2z00,
				BGl_proc5595z00zzcfa_info2z00, BGl_string5574z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_makezd2procedurezd2appz00zzcfa_info2z00,
				BGl_proc5596z00zzcfa_info2z00, BGl_string5576z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00,
				BGl_proc5597z00zzcfa_info2z00, BGl_string5574z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00,
				BGl_proc5598z00zzcfa_info2z00, BGl_string5576z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00,
				BGl_proc5599z00zzcfa_info2z00, BGl_string5574z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00,
				BGl_proc5600z00zzcfa_info2z00, BGl_string5576z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00,
				BGl_proc5601z00zzcfa_info2z00, BGl_string5574z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00,
				BGl_proc5602z00zzcfa_info2z00, BGl_string5576z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_arithmeticzd2appzd2zzcfa_info2z00, BGl_proc5603z00zzcfa_info2z00,
				BGl_string5574z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_arithmeticzd2appzd2zzcfa_info2z00, BGl_proc5604z00zzcfa_info2z00,
				BGl_string5576z00zzcfa_info2z00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_prezd2arithmeticzd2appz00zzcfa_info2z00,
				BGl_proc5605z00zzcfa_info2z00, BGl_string5574z00zzcfa_info2z00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_prezd2arithmeticzd2appz00zzcfa_info2z00,
				BGl_proc5606z00zzcfa_info2z00, BGl_string5576z00zzcfa_info2z00);
		}
	}



/* struct+object->objec4958 */
	obj_t BGl_structzb2objectzd2ze3objec4958z83zzcfa_info2z00(obj_t
		BgL_envz00_4285, obj_t BgL_oz00_4286, obj_t BgL_sz00_4287)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 25 */
			{
				BgL_prezd2arithmeticzd2appz00_bglt BgL_oz00_2425;

				obj_t BgL_sz00_2426;

				{	/* Cfa/cinfo2.scm 25 */
					BgL_prezd2arithmeticzd2appz00_bglt BgL_auxz00_6092;

					BgL_oz00_2425 = (BgL_prezd2arithmeticzd2appz00_bglt) (BgL_oz00_4286);
					BgL_sz00_2426 = BgL_sz00_4287;
					{

						{	/* Cfa/cinfo2.scm 25 */
							obj_t BgL_old4123z00_2429;

							obj_t BgL_aux4124z00_2430;

							{	/* Cfa/cinfo2.scm 25 */
								obj_t BgL_nextzd2method4957zd2_2435;

								BgL_nextzd2method4957zd2_2435 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2425),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_prezd2arithmeticzd2appz00zzcfa_info2z00);
								if (PROCEDUREP(BgL_nextzd2method4957zd2_2435))
									{	/* Cfa/cinfo2.scm 25 */
										BgL_old4123z00_2429 =
											PROCEDURE_ENTRY(BgL_nextzd2method4957zd2_2435)
											(BgL_nextzd2method4957zd2_2435, (obj_t) (BgL_oz00_2425),
											BgL_sz00_2426, BEOA);
									}
								else
									{	/* Cfa/cinfo2.scm 25 */
										BgL_old4123z00_2429 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2425), BgL_sz00_2426));
									}
							}
							BgL_aux4124z00_2430 =
								STRUCT_REF(BgL_sz00_2426, (int) (((long) 0)));
							{	/* Cfa/cinfo2.scm 25 */
								BgL_prezd2arithmeticzd2appz00_bglt BgL_new4125z00_2431;

								BgL_new4125z00_2431 =
									((BgL_prezd2arithmeticzd2appz00_bglt) (BgL_old4123z00_2429));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4125z00_2431),
									BGl_classzd2numzd2zz__objectz00
									(BGl_prezd2arithmeticzd2appz00zzcfa_info2z00));
								{	/* Cfa/cinfo2.scm 25 */
									BgL_prezd2arithmeticzd2appz00_bglt BgL_arg5433z00_2433;

									{	/* Cfa/cinfo2.scm 25 */
										obj_t BgL_arg5434z00_2434;

										BgL_arg5434z00_2434 =
											STRUCT_REF(BgL_aux4124z00_2430, (int) (((long) 0)));
										{	/* Cfa/cinfo2.scm 25 */
											BgL_prezd2arithmeticzd2appz00_bglt BgL_res5567z00_3935;

											{	/* Cfa/cinfo2.scm 25 */
												obj_t BgL_speczd2types4103zd2_3929;

												BgL_speczd2types4103zd2_3929 = BgL_arg5434z00_2434;
												{	/* Cfa/cinfo2.scm 25 */
													BgL_prezd2arithmeticzd2appz00_bglt
														BgL_new4104z00_3930;
													BgL_new4104z00_3930 =
														((BgL_prezd2arithmeticzd2appz00_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_prezd2arithmeticzd2appz00_bgl))));
													{	/* Cfa/cinfo2.scm 25 */
														BgL_prezd2arithmeticzd2appz00_bglt
															BgL_res5566z00_3934;
														{	/* Cfa/cinfo2.scm 25 */
															BgL_prezd2arithmeticzd2appz00_bglt
																BgL_new4116z00_3931;
															BgL_new4116z00_3931 = BgL_new4104z00_3930;
															{	/* Cfa/cinfo2.scm 25 */
																obj_t BgL_speczd2types4115zd2_3933;

																BgL_speczd2types4115zd2_3933 =
																	BgL_speczd2types4103zd2_3929;
																((((BgL_prezd2arithmeticzd2appz00_bglt)
																			CREF(BgL_new4116z00_3931))->
																		BgL_speczd2typeszd2) =
																	((obj_t) BgL_speczd2types4115zd2_3933),
																	BUNSPEC);
																BgL_res5566z00_3934 = BgL_new4116z00_3931;
														}} BgL_res5566z00_3934;
													}
													BgL_res5567z00_3935 = BgL_new4104z00_3930;
											}}
											BgL_arg5433z00_2433 = BgL_res5567z00_3935;
									}}
									{	/* Cfa/cinfo2.scm 25 */
										obj_t BgL_auxz00_6115;

										BgL_objectz00_bglt BgL_auxz00_6113;

										BgL_auxz00_6115 = (obj_t) (BgL_arg5433z00_2433);
										BgL_auxz00_6113 =
											(BgL_objectz00_bglt) (BgL_new4125z00_2431);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_6113, BgL_auxz00_6115);
								}}
								BgL_auxz00_6092 = BgL_new4125z00_2431;
					}}}
					return (obj_t) (BgL_auxz00_6092);
				}
			}
		}
	}



/* object->struct-pre-a4956 */
	obj_t BGl_objectzd2ze3structzd2prezd2a4956z31zzcfa_info2z00(obj_t
		BgL_envz00_4288, obj_t BgL_obj4120z00_4289)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 25 */
			{
				BgL_prezd2arithmeticzd2appz00_bglt BgL_obj4120z00_2415;

				BgL_obj4120z00_2415 =
					(BgL_prezd2arithmeticzd2appz00_bglt) (BgL_obj4120z00_4289);
				{

					{	/* Cfa/cinfo2.scm 25 */
						obj_t BgL_res4121z00_2418;

						{	/* Cfa/cinfo2.scm 25 */
							obj_t BgL_nextzd2method4955zd2_2423;

							BgL_nextzd2method4955zd2_2423 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4120z00_2415),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_prezd2arithmeticzd2appz00zzcfa_info2z00);
							if (PROCEDUREP(BgL_nextzd2method4955zd2_2423))
								{	/* Cfa/cinfo2.scm 25 */
									BgL_res4121z00_2418 =
										PROCEDURE_ENTRY(BgL_nextzd2method4955zd2_2423)
										(BgL_nextzd2method4955zd2_2423,
										(obj_t) (BgL_obj4120z00_2415), BEOA);
								}
							else
								{	/* Cfa/cinfo2.scm 25 */
									BgL_res4121z00_2418 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4120z00_2415));
								}
						}
						{	/* Cfa/cinfo2.scm 25 */
							obj_t BgL_aux4122z00_2419;

							{	/* Cfa/cinfo2.scm 25 */
								obj_t BgL_keyz00_3906;

								BgL_keyz00_3906 = CNST_TABLE_REF(((long) 0));
								BgL_aux4122z00_2419 =
									make_struct(BgL_keyz00_3906, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo2.scm 25 */
								obj_t BgL_arg5429z00_2421;

								{
									obj_t BgL_auxz00_6132;

									{	/* Cfa/cinfo2.scm 25 */
										BgL_objectz00_bglt BgL_auxz00_6133;

										BgL_auxz00_6133 =
											(BgL_objectz00_bglt) (BgL_obj4120z00_2415);
										BgL_auxz00_6132 = BGL_OBJECT_WIDENING(BgL_auxz00_6133);
									}
									BgL_arg5429z00_2421 =
										(((BgL_prezd2arithmeticzd2appz00_bglt)
											CREF(BgL_auxz00_6132))->BgL_speczd2typeszd2);
								}
								{	/* Cfa/cinfo2.scm 25 */
									int BgL_auxz00_6137;

									BgL_auxz00_6137 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4122z00_2419, BgL_auxz00_6137,
										BgL_arg5429z00_2421);
							}}
							{	/* Cfa/cinfo2.scm 25 */
								int BgL_auxz00_6140;

								BgL_auxz00_6140 = (int) (((long) 0));
								STRUCT_SET(BgL_res4121z00_2418, BgL_auxz00_6140,
									BgL_aux4122z00_2419);
							}
							{	/* Cfa/cinfo2.scm 25 */
								obj_t BgL_auxz00_6143;

								BgL_auxz00_6143 = STRUCT_KEY(BgL_res4121z00_2418);
								STRUCT_KEY_SET(BgL_aux4122z00_2419, BgL_auxz00_6143);
							}
							{	/* Cfa/cinfo2.scm 25 */
								obj_t BgL_kz00_3921;

								BgL_kz00_3921 = CNST_TABLE_REF(((long) 0));
								STRUCT_KEY_SET(BgL_res4121z00_2418, BgL_kz00_3921);
							}
							return BgL_res4121z00_2418;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4954 */
	obj_t BGl_structzb2objectzd2ze3objec4954z83zzcfa_info2z00(obj_t
		BgL_envz00_4290, obj_t BgL_oz00_4291, obj_t BgL_sz00_4292)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 27 */
			{
				BgL_arithmeticzd2appzd2_bglt BgL_oz00_2402;

				obj_t BgL_sz00_2403;

				{	/* Cfa/cinfo2.scm 27 */
					BgL_arithmeticzd2appzd2_bglt BgL_auxz00_6149;

					BgL_oz00_2402 = (BgL_arithmeticzd2appzd2_bglt) (BgL_oz00_4291);
					BgL_sz00_2403 = BgL_sz00_4292;
					{

						{	/* Cfa/cinfo2.scm 27 */
							obj_t BgL_old4171z00_2406;

							obj_t BgL_aux4172z00_2407;

							{	/* Cfa/cinfo2.scm 27 */
								obj_t BgL_nextzd2method4953zd2_2413;

								BgL_nextzd2method4953zd2_2413 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2402),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_arithmeticzd2appzd2zzcfa_info2z00);
								if (PROCEDUREP(BgL_nextzd2method4953zd2_2413))
									{	/* Cfa/cinfo2.scm 27 */
										BgL_old4171z00_2406 =
											PROCEDURE_ENTRY(BgL_nextzd2method4953zd2_2413)
											(BgL_nextzd2method4953zd2_2413, (obj_t) (BgL_oz00_2402),
											BgL_sz00_2403, BEOA);
									}
								else
									{	/* Cfa/cinfo2.scm 27 */
										BgL_old4171z00_2406 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2402), BgL_sz00_2403));
									}
							}
							BgL_aux4172z00_2407 =
								STRUCT_REF(BgL_sz00_2403, (int) (((long) 0)));
							{	/* Cfa/cinfo2.scm 27 */
								BgL_arithmeticzd2appzd2_bglt BgL_new4173z00_2408;

								BgL_new4173z00_2408 =
									((BgL_arithmeticzd2appzd2_bglt) (BgL_old4171z00_2406));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4173z00_2408),
									BGl_classzd2numzd2zz__objectz00
									(BGl_arithmeticzd2appzd2zzcfa_info2z00));
								{	/* Cfa/cinfo2.scm 27 */
									BgL_arithmeticzd2appzd2_bglt BgL_arg5424z00_2410;

									{	/* Cfa/cinfo2.scm 27 */
										obj_t BgL_arg5425z00_2411;

										obj_t BgL_arg5426z00_2412;

										BgL_arg5425z00_2411 =
											STRUCT_REF(BgL_aux4172z00_2407, (int) (((long) 0)));
										BgL_arg5426z00_2412 =
											STRUCT_REF(BgL_aux4172z00_2407, (int) (((long) 1)));
										{	/* Cfa/cinfo2.scm 27 */
											BgL_arithmeticzd2appzd2_bglt BgL_res5564z00_3904;

											{	/* Cfa/cinfo2.scm 27 */
												BgL_approxz00_bglt BgL_approx4147z00_3895;

												obj_t BgL_speczd2types4148zd2_3896;

												BgL_approx4147z00_3895 =
													(BgL_approxz00_bglt) (BgL_arg5425z00_2411);
												BgL_speczd2types4148zd2_3896 = BgL_arg5426z00_2412;
												{	/* Cfa/cinfo2.scm 27 */
													BgL_arithmeticzd2appzd2_bglt BgL_new4149z00_3897;

													BgL_new4149z00_3897 =
														((BgL_arithmeticzd2appzd2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_arithmeticzd2appzd2_bgl))));
													{	/* Cfa/cinfo2.scm 27 */
														BgL_arithmeticzd2appzd2_bglt BgL_res5563z00_3903;

														{	/* Cfa/cinfo2.scm 27 */
															BgL_arithmeticzd2appzd2_bglt BgL_new4163z00_3898;

															BgL_new4163z00_3898 = BgL_new4149z00_3897;
															{	/* Cfa/cinfo2.scm 27 */
																BgL_approxz00_bglt BgL_approx4161z00_3901;

																obj_t BgL_speczd2types4162zd2_3902;

																BgL_approx4161z00_3901 = BgL_approx4147z00_3895;
																BgL_speczd2types4162zd2_3902 =
																	BgL_speczd2types4148zd2_3896;
																((((BgL_arithmeticzd2appzd2_bglt)
																			CREF(BgL_new4163z00_3898))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4161z00_3901),
																	BUNSPEC);
																((((BgL_arithmeticzd2appzd2_bglt)
																			CREF(BgL_new4163z00_3898))->
																		BgL_speczd2typeszd2) =
																	((obj_t) BgL_speczd2types4162zd2_3902),
																	BUNSPEC);
																BgL_res5563z00_3903 = BgL_new4163z00_3898;
														}} BgL_res5563z00_3903;
													}
													BgL_res5564z00_3904 = BgL_new4149z00_3897;
											}}
											BgL_arg5424z00_2410 = BgL_res5564z00_3904;
									}}
									{	/* Cfa/cinfo2.scm 27 */
										obj_t BgL_auxz00_6176;

										BgL_objectz00_bglt BgL_auxz00_6174;

										BgL_auxz00_6176 = (obj_t) (BgL_arg5424z00_2410);
										BgL_auxz00_6174 =
											(BgL_objectz00_bglt) (BgL_new4173z00_2408);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_6174, BgL_auxz00_6176);
								}}
								BgL_auxz00_6149 = BgL_new4173z00_2408;
					}}}
					return (obj_t) (BgL_auxz00_6149);
				}
			}
		}
	}



/* object->struct-arith4951 */
	obj_t BGl_objectzd2ze3structzd2arith4951ze3zzcfa_info2z00(obj_t
		BgL_envz00_4293, obj_t BgL_obj4168z00_4294)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 27 */
			{
				BgL_arithmeticzd2appzd2_bglt BgL_obj4168z00_2390;

				BgL_obj4168z00_2390 =
					(BgL_arithmeticzd2appzd2_bglt) (BgL_obj4168z00_4294);
				{

					{	/* Cfa/cinfo2.scm 27 */
						obj_t BgL_res4169z00_2393;

						{	/* Cfa/cinfo2.scm 27 */
							obj_t BgL_nextzd2method4950zd2_2400;

							BgL_nextzd2method4950zd2_2400 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4168z00_2390),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_arithmeticzd2appzd2zzcfa_info2z00);
							if (PROCEDUREP(BgL_nextzd2method4950zd2_2400))
								{	/* Cfa/cinfo2.scm 27 */
									BgL_res4169z00_2393 =
										PROCEDURE_ENTRY(BgL_nextzd2method4950zd2_2400)
										(BgL_nextzd2method4950zd2_2400,
										(obj_t) (BgL_obj4168z00_2390), BEOA);
								}
							else
								{	/* Cfa/cinfo2.scm 27 */
									BgL_res4169z00_2393 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4168z00_2390));
								}
						}
						{	/* Cfa/cinfo2.scm 27 */
							obj_t BgL_aux4170z00_2394;

							{	/* Cfa/cinfo2.scm 27 */
								obj_t BgL_keyz00_3866;

								BgL_keyz00_3866 = CNST_TABLE_REF(((long) 1));
								BgL_aux4170z00_2394 =
									make_struct(BgL_keyz00_3866, (int) (((long) 2)), BUNSPEC);
							}
							{	/* Cfa/cinfo2.scm 27 */
								BgL_approxz00_bglt BgL_arg5417z00_2396;

								{
									obj_t BgL_auxz00_6193;

									{	/* Cfa/cinfo2.scm 27 */
										BgL_objectz00_bglt BgL_auxz00_6194;

										BgL_auxz00_6194 =
											(BgL_objectz00_bglt) (BgL_obj4168z00_2390);
										BgL_auxz00_6193 = BGL_OBJECT_WIDENING(BgL_auxz00_6194);
									}
									BgL_arg5417z00_2396 =
										(((BgL_arithmeticzd2appzd2_bglt) CREF(BgL_auxz00_6193))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo2.scm 27 */
									obj_t BgL_auxz00_6200;

									int BgL_auxz00_6198;

									BgL_auxz00_6200 = (obj_t) (BgL_arg5417z00_2396);
									BgL_auxz00_6198 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4170z00_2394, BgL_auxz00_6198,
										BgL_auxz00_6200);
							}}
							{	/* Cfa/cinfo2.scm 27 */
								obj_t BgL_arg5420z00_2398;

								{
									obj_t BgL_auxz00_6203;

									{	/* Cfa/cinfo2.scm 27 */
										BgL_objectz00_bglt BgL_auxz00_6204;

										BgL_auxz00_6204 =
											(BgL_objectz00_bglt) (BgL_obj4168z00_2390);
										BgL_auxz00_6203 = BGL_OBJECT_WIDENING(BgL_auxz00_6204);
									}
									BgL_arg5420z00_2398 =
										(((BgL_arithmeticzd2appzd2_bglt) CREF(BgL_auxz00_6203))->
										BgL_speczd2typeszd2);
								}
								{	/* Cfa/cinfo2.scm 27 */
									int BgL_auxz00_6208;

									BgL_auxz00_6208 = (int) (((long) 1));
									STRUCT_SET(BgL_aux4170z00_2394, BgL_auxz00_6208,
										BgL_arg5420z00_2398);
							}}
							{	/* Cfa/cinfo2.scm 27 */
								int BgL_auxz00_6211;

								BgL_auxz00_6211 = (int) (((long) 0));
								STRUCT_SET(BgL_res4169z00_2393, BgL_auxz00_6211,
									BgL_aux4170z00_2394);
							}
							{	/* Cfa/cinfo2.scm 27 */
								obj_t BgL_auxz00_6214;

								BgL_auxz00_6214 = STRUCT_KEY(BgL_res4169z00_2393);
								STRUCT_KEY_SET(BgL_aux4170z00_2394, BgL_auxz00_6214);
							}
							{	/* Cfa/cinfo2.scm 27 */
								obj_t BgL_kz00_3885;

								BgL_kz00_3885 = CNST_TABLE_REF(((long) 1));
								STRUCT_KEY_SET(BgL_res4169z00_2393, BgL_kz00_3885);
							}
							return BgL_res4169z00_2393;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4949 */
	obj_t BGl_structzb2objectzd2ze3objec4949z83zzcfa_info2z00(obj_t
		BgL_envz00_4295, obj_t BgL_oz00_4296, obj_t BgL_sz00_4297)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 32 */
			{
				BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_oz00_2378;

				obj_t BgL_sz00_2379;

				{	/* Cfa/cinfo2.scm 32 */
					BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_auxz00_6220;

					BgL_oz00_2378 =
						(BgL_prezd2makezd2procedurezd2appzd2_bglt) (BgL_oz00_4296);
					BgL_sz00_2379 = BgL_sz00_4297;
					{

						{	/* Cfa/cinfo2.scm 32 */
							obj_t BgL_old4216z00_2382;

							obj_t BgL_aux4217z00_2383;

							{	/* Cfa/cinfo2.scm 32 */
								obj_t BgL_nextzd2method4948zd2_2388;

								BgL_nextzd2method4948zd2_2388 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2378),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00);
								if (PROCEDUREP(BgL_nextzd2method4948zd2_2388))
									{	/* Cfa/cinfo2.scm 32 */
										BgL_old4216z00_2382 =
											PROCEDURE_ENTRY(BgL_nextzd2method4948zd2_2388)
											(BgL_nextzd2method4948zd2_2388, (obj_t) (BgL_oz00_2378),
											BgL_sz00_2379, BEOA);
									}
								else
									{	/* Cfa/cinfo2.scm 32 */
										BgL_old4216z00_2382 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2378), BgL_sz00_2379));
									}
							}
							BgL_aux4217z00_2383 =
								STRUCT_REF(BgL_sz00_2379, (int) (((long) 0)));
							{	/* Cfa/cinfo2.scm 32 */
								BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_new4218z00_2384;

								BgL_new4218z00_2384 =
									((BgL_prezd2makezd2procedurezd2appzd2_bglt)
									(BgL_old4216z00_2382));
								BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
									(BgL_new4218z00_2384),
									BGl_classzd2numzd2zz__objectz00
									(BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00));
								{	/* Cfa/cinfo2.scm 32 */
									BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_arg5413z00_2386;

									{	/* Cfa/cinfo2.scm 32 */
										obj_t BgL_arg5414z00_2387;

										BgL_arg5414z00_2387 =
											STRUCT_REF(BgL_aux4217z00_2383, (int) (((long) 0)));
										{	/* Cfa/cinfo2.scm 32 */
											BgL_prezd2makezd2procedurezd2appzd2_bglt
												BgL_res5561z00_3864;
											{	/* Cfa/cinfo2.scm 32 */
												BgL_variablez00_bglt BgL_owner4196z00_3858;

												BgL_owner4196z00_3858 =
													(BgL_variablez00_bglt) (BgL_arg5414z00_2387);
												{	/* Cfa/cinfo2.scm 32 */
													BgL_prezd2makezd2procedurezd2appzd2_bglt
														BgL_new4197z00_3859;
													BgL_new4197z00_3859 =
														((BgL_prezd2makezd2procedurezd2appzd2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_prezd2makezd2procedurezd2appzd2_bgl))));
													{	/* Cfa/cinfo2.scm 32 */
														BgL_prezd2makezd2procedurezd2appzd2_bglt
															BgL_res5560z00_3863;
														{	/* Cfa/cinfo2.scm 32 */
															BgL_prezd2makezd2procedurezd2appzd2_bglt
																BgL_new4209z00_3860;
															BgL_new4209z00_3860 = BgL_new4197z00_3859;
															{	/* Cfa/cinfo2.scm 32 */
																BgL_variablez00_bglt BgL_owner4208z00_3862;

																BgL_owner4208z00_3862 = BgL_owner4196z00_3858;
																((((BgL_prezd2makezd2procedurezd2appzd2_bglt)
																			CREF(BgL_new4209z00_3860))->
																		BgL_ownerz00) =
																	((BgL_variablez00_bglt)
																		BgL_owner4208z00_3862), BUNSPEC);
																BgL_res5560z00_3863 = BgL_new4209z00_3860;
														}} BgL_res5560z00_3863;
													}
													BgL_res5561z00_3864 = BgL_new4197z00_3859;
											}}
											BgL_arg5413z00_2386 = BgL_res5561z00_3864;
									}}
									{	/* Cfa/cinfo2.scm 32 */
										obj_t BgL_auxz00_6244;

										BgL_objectz00_bglt BgL_auxz00_6242;

										BgL_auxz00_6244 = (obj_t) (BgL_arg5413z00_2386);
										BgL_auxz00_6242 =
											(BgL_objectz00_bglt) (BgL_new4218z00_2384);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_6242, BgL_auxz00_6244);
								}}
								BgL_auxz00_6220 = BgL_new4218z00_2384;
					}}}
					return (obj_t) (BgL_auxz00_6220);
				}
			}
		}
	}



/* object->struct-pre-m4947 */
	obj_t BGl_objectzd2ze3structzd2prezd2m4947z31zzcfa_info2z00(obj_t
		BgL_envz00_4298, obj_t BgL_obj4213z00_4299)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 32 */
			{
				BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_obj4213z00_2368;

				BgL_obj4213z00_2368 =
					(BgL_prezd2makezd2procedurezd2appzd2_bglt) (BgL_obj4213z00_4299);
				{

					{	/* Cfa/cinfo2.scm 32 */
						obj_t BgL_res4214z00_2371;

						{	/* Cfa/cinfo2.scm 32 */
							obj_t BgL_nextzd2method4946zd2_2376;

							BgL_nextzd2method4946zd2_2376 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4213z00_2368),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00);
							if (PROCEDUREP(BgL_nextzd2method4946zd2_2376))
								{	/* Cfa/cinfo2.scm 32 */
									BgL_res4214z00_2371 =
										PROCEDURE_ENTRY(BgL_nextzd2method4946zd2_2376)
										(BgL_nextzd2method4946zd2_2376,
										(obj_t) (BgL_obj4213z00_2368), BEOA);
								}
							else
								{	/* Cfa/cinfo2.scm 32 */
									BgL_res4214z00_2371 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4213z00_2368));
								}
						}
						{	/* Cfa/cinfo2.scm 32 */
							obj_t BgL_aux4215z00_2372;

							{	/* Cfa/cinfo2.scm 32 */
								obj_t BgL_keyz00_3835;

								BgL_keyz00_3835 = CNST_TABLE_REF(((long) 2));
								BgL_aux4215z00_2372 =
									make_struct(BgL_keyz00_3835, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo2.scm 32 */
								BgL_variablez00_bglt BgL_arg5409z00_2374;

								{
									obj_t BgL_auxz00_6261;

									{	/* Cfa/cinfo2.scm 32 */
										BgL_objectz00_bglt BgL_auxz00_6262;

										BgL_auxz00_6262 =
											(BgL_objectz00_bglt) (BgL_obj4213z00_2368);
										BgL_auxz00_6261 = BGL_OBJECT_WIDENING(BgL_auxz00_6262);
									}
									BgL_arg5409z00_2374 =
										(((BgL_prezd2makezd2procedurezd2appzd2_bglt)
											CREF(BgL_auxz00_6261))->BgL_ownerz00);
								}
								{	/* Cfa/cinfo2.scm 32 */
									obj_t BgL_auxz00_6268;

									int BgL_auxz00_6266;

									BgL_auxz00_6268 = (obj_t) (BgL_arg5409z00_2374);
									BgL_auxz00_6266 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4215z00_2372, BgL_auxz00_6266,
										BgL_auxz00_6268);
							}}
							{	/* Cfa/cinfo2.scm 32 */
								int BgL_auxz00_6271;

								BgL_auxz00_6271 = (int) (((long) 0));
								STRUCT_SET(BgL_res4214z00_2371, BgL_auxz00_6271,
									BgL_aux4215z00_2372);
							}
							{	/* Cfa/cinfo2.scm 32 */
								obj_t BgL_auxz00_6274;

								BgL_auxz00_6274 = STRUCT_KEY(BgL_res4214z00_2371);
								STRUCT_KEY_SET(BgL_aux4215z00_2372, BgL_auxz00_6274);
							}
							{	/* Cfa/cinfo2.scm 32 */
								obj_t BgL_kz00_3850;

								BgL_kz00_3850 = CNST_TABLE_REF(((long) 2));
								STRUCT_KEY_SET(BgL_res4214z00_2371, BgL_kz00_3850);
							}
							return BgL_res4214z00_2371;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4944 */
	obj_t BGl_structzb2objectzd2ze3objec4944z83zzcfa_info2z00(obj_t
		BgL_envz00_4300, obj_t BgL_oz00_4301, obj_t BgL_sz00_4302)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 35 */
			{
				BgL_prezd2procedurezd2refzd2appzd2_bglt BgL_oz00_2357;

				obj_t BgL_sz00_2358;

				{	/* Cfa/cinfo2.scm 35 */
					BgL_prezd2procedurezd2refzd2appzd2_bglt BgL_auxz00_6280;

					BgL_oz00_2357 =
						(BgL_prezd2procedurezd2refzd2appzd2_bglt) (BgL_oz00_4301);
					BgL_sz00_2358 = BgL_sz00_4302;
					{

						{	/* Cfa/cinfo2.scm 35 */
							obj_t BgL_old4254z00_2361;

							{	/* Cfa/cinfo2.scm 35 */
								obj_t BgL_nextzd2method4943zd2_2366;

								BgL_nextzd2method4943zd2_2366 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2357),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00);
								if (PROCEDUREP(BgL_nextzd2method4943zd2_2366))
									{	/* Cfa/cinfo2.scm 35 */
										BgL_old4254z00_2361 =
											PROCEDURE_ENTRY(BgL_nextzd2method4943zd2_2366)
											(BgL_nextzd2method4943zd2_2366, (obj_t) (BgL_oz00_2357),
											BgL_sz00_2358, BEOA);
									}
								else
									{	/* Cfa/cinfo2.scm 35 */
										BgL_old4254z00_2361 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2357), BgL_sz00_2358));
									}
							}
							{	/* Cfa/cinfo2.scm 35 */
								BgL_prezd2procedurezd2refzd2appzd2_bglt BgL_new4256z00_2363;

								BgL_new4256z00_2363 =
									((BgL_prezd2procedurezd2refzd2appzd2_bglt)
									(BgL_old4254z00_2361));
								BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
									(BgL_new4256z00_2363),
									BGl_classzd2numzd2zz__objectz00
									(BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00));
								{	/* Cfa/cinfo2.scm 35 */
									BgL_prezd2procedurezd2refzd2appzd2_bglt BgL_arg5406z00_2365;

									BgL_arg5406z00_2365 =
										BGl_wideningzd2prezd2procedurezd2refzd2appz00zzcfa_info2z00
										();
									{	/* Cfa/cinfo2.scm 35 */
										obj_t BgL_auxz00_6298;

										BgL_objectz00_bglt BgL_auxz00_6296;

										BgL_auxz00_6298 = (obj_t) (BgL_arg5406z00_2365);
										BgL_auxz00_6296 =
											(BgL_objectz00_bglt) (BgL_new4256z00_2363);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_6296, BgL_auxz00_6298);
									}
								}
								BgL_auxz00_6280 = BgL_new4256z00_2363;
							}
						}
					}
					return (obj_t) (BgL_auxz00_6280);
				}
			}
		}
	}



/* object->struct-pre-p4942 */
	obj_t BGl_objectzd2ze3structzd2prezd2p4942z31zzcfa_info2z00(obj_t
		BgL_envz00_4303, obj_t BgL_obj4251z00_4304)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 35 */
			{
				BgL_prezd2procedurezd2refzd2appzd2_bglt BgL_obj4251z00_2349;

				BgL_obj4251z00_2349 =
					(BgL_prezd2procedurezd2refzd2appzd2_bglt) (BgL_obj4251z00_4304);
				{

					{	/* Cfa/cinfo2.scm 35 */
						obj_t BgL_res4252z00_2352;

						{	/* Cfa/cinfo2.scm 35 */
							obj_t BgL_nextzd2method4941zd2_2355;

							BgL_nextzd2method4941zd2_2355 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4251z00_2349),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00);
							if (PROCEDUREP(BgL_nextzd2method4941zd2_2355))
								{	/* Cfa/cinfo2.scm 35 */
									BgL_res4252z00_2352 =
										PROCEDURE_ENTRY(BgL_nextzd2method4941zd2_2355)
										(BgL_nextzd2method4941zd2_2355,
										(obj_t) (BgL_obj4251z00_2349), BEOA);
								}
							else
								{	/* Cfa/cinfo2.scm 35 */
									BgL_res4252z00_2352 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4251z00_2349));
								}
						}
						{	/* Cfa/cinfo2.scm 35 */
							obj_t BgL_aux4253z00_2353;

							{	/* Cfa/cinfo2.scm 35 */
								obj_t BgL_keyz00_3817;

								BgL_keyz00_3817 = CNST_TABLE_REF(((long) 3));
								BgL_aux4253z00_2353 =
									make_struct(BgL_keyz00_3817, (int) (((long) 0)), BUNSPEC);
							}
							{	/* Cfa/cinfo2.scm 35 */
								int BgL_auxz00_6315;

								BgL_auxz00_6315 = (int) (((long) 0));
								STRUCT_SET(BgL_res4252z00_2352, BgL_auxz00_6315,
									BgL_aux4253z00_2353);
							}
							{	/* Cfa/cinfo2.scm 35 */
								obj_t BgL_auxz00_6318;

								BgL_auxz00_6318 = STRUCT_KEY(BgL_res4252z00_2352);
								STRUCT_KEY_SET(BgL_aux4253z00_2353, BgL_auxz00_6318);
							}
							{	/* Cfa/cinfo2.scm 35 */
								obj_t BgL_kz00_3828;

								BgL_kz00_3828 = CNST_TABLE_REF(((long) 3));
								STRUCT_KEY_SET(BgL_res4252z00_2352, BgL_kz00_3828);
							}
							return BgL_res4252z00_2352;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4940 */
	obj_t BGl_structzb2objectzd2ze3objec4940z83zzcfa_info2z00(obj_t
		BgL_envz00_4305, obj_t BgL_oz00_4306, obj_t BgL_sz00_4307)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 36 */
			{
				BgL_prezd2procedurezd2setz12zd2appzc0_bglt BgL_oz00_2338;

				obj_t BgL_sz00_2339;

				{	/* Cfa/cinfo2.scm 36 */
					BgL_prezd2procedurezd2setz12zd2appzc0_bglt BgL_auxz00_6324;

					BgL_oz00_2338 =
						(BgL_prezd2procedurezd2setz12zd2appzc0_bglt) (BgL_oz00_4306);
					BgL_sz00_2339 = BgL_sz00_4307;
					{

						{	/* Cfa/cinfo2.scm 36 */
							obj_t BgL_old4291z00_2342;

							{	/* Cfa/cinfo2.scm 36 */
								obj_t BgL_nextzd2method4939zd2_2347;

								BgL_nextzd2method4939zd2_2347 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2338),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00);
								if (PROCEDUREP(BgL_nextzd2method4939zd2_2347))
									{	/* Cfa/cinfo2.scm 36 */
										BgL_old4291z00_2342 =
											PROCEDURE_ENTRY(BgL_nextzd2method4939zd2_2347)
											(BgL_nextzd2method4939zd2_2347, (obj_t) (BgL_oz00_2338),
											BgL_sz00_2339, BEOA);
									}
								else
									{	/* Cfa/cinfo2.scm 36 */
										BgL_old4291z00_2342 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2338), BgL_sz00_2339));
									}
							}
							{	/* Cfa/cinfo2.scm 36 */
								BgL_prezd2procedurezd2setz12zd2appzc0_bglt BgL_new4293z00_2344;

								BgL_new4293z00_2344 =
									((BgL_prezd2procedurezd2setz12zd2appzc0_bglt)
									(BgL_old4291z00_2342));
								BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
									(BgL_new4293z00_2344),
									BGl_classzd2numzd2zz__objectz00
									(BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00));
								{	/* Cfa/cinfo2.scm 36 */
									BgL_prezd2procedurezd2setz12zd2appzc0_bglt
										BgL_arg5401z00_2346;
									BgL_arg5401z00_2346 =
										BGl_wideningzd2prezd2procedurezd2setz12zd2appz12zzcfa_info2z00
										();
									{	/* Cfa/cinfo2.scm 36 */
										obj_t BgL_auxz00_6342;

										BgL_objectz00_bglt BgL_auxz00_6340;

										BgL_auxz00_6342 = (obj_t) (BgL_arg5401z00_2346);
										BgL_auxz00_6340 =
											(BgL_objectz00_bglt) (BgL_new4293z00_2344);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_6340, BgL_auxz00_6342);
									}
								}
								BgL_auxz00_6324 = BgL_new4293z00_2344;
							}
						}
					}
					return (obj_t) (BgL_auxz00_6324);
				}
			}
		}
	}



/* object->struct-pre-p4938 */
	obj_t BGl_objectzd2ze3structzd2prezd2p4938z31zzcfa_info2z00(obj_t
		BgL_envz00_4308, obj_t BgL_obj4288z00_4309)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 36 */
			{
				BgL_prezd2procedurezd2setz12zd2appzc0_bglt BgL_obj4288z00_2330;

				BgL_obj4288z00_2330 =
					(BgL_prezd2procedurezd2setz12zd2appzc0_bglt) (BgL_obj4288z00_4309);
				{

					{	/* Cfa/cinfo2.scm 36 */
						obj_t BgL_res4289z00_2333;

						{	/* Cfa/cinfo2.scm 36 */
							obj_t BgL_nextzd2method4937zd2_2336;

							BgL_nextzd2method4937zd2_2336 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4288z00_2330),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00);
							if (PROCEDUREP(BgL_nextzd2method4937zd2_2336))
								{	/* Cfa/cinfo2.scm 36 */
									BgL_res4289z00_2333 =
										PROCEDURE_ENTRY(BgL_nextzd2method4937zd2_2336)
										(BgL_nextzd2method4937zd2_2336,
										(obj_t) (BgL_obj4288z00_2330), BEOA);
								}
							else
								{	/* Cfa/cinfo2.scm 36 */
									BgL_res4289z00_2333 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4288z00_2330));
								}
						}
						{	/* Cfa/cinfo2.scm 36 */
							obj_t BgL_aux4290z00_2334;

							{	/* Cfa/cinfo2.scm 36 */
								obj_t BgL_keyz00_3799;

								BgL_keyz00_3799 = CNST_TABLE_REF(((long) 4));
								BgL_aux4290z00_2334 =
									make_struct(BgL_keyz00_3799, (int) (((long) 0)), BUNSPEC);
							}
							{	/* Cfa/cinfo2.scm 36 */
								int BgL_auxz00_6359;

								BgL_auxz00_6359 = (int) (((long) 0));
								STRUCT_SET(BgL_res4289z00_2333, BgL_auxz00_6359,
									BgL_aux4290z00_2334);
							}
							{	/* Cfa/cinfo2.scm 36 */
								obj_t BgL_auxz00_6362;

								BgL_auxz00_6362 = STRUCT_KEY(BgL_res4289z00_2333);
								STRUCT_KEY_SET(BgL_aux4290z00_2334, BgL_auxz00_6362);
							}
							{	/* Cfa/cinfo2.scm 36 */
								obj_t BgL_kz00_3810;

								BgL_kz00_3810 = CNST_TABLE_REF(((long) 4));
								STRUCT_KEY_SET(BgL_res4289z00_2333, BgL_kz00_3810);
							}
							return BgL_res4289z00_2333;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4936 */
	obj_t BGl_structzb2objectzd2ze3objec4936z83zzcfa_info2z00(obj_t
		BgL_envz00_4310, obj_t BgL_oz00_4311, obj_t BgL_sz00_4312)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 38 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_oz00_2311;

				obj_t BgL_sz00_2312;

				{	/* Cfa/cinfo2.scm 38 */
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_6368;

					BgL_oz00_2311 = (BgL_makezd2procedurezd2appz00_bglt) (BgL_oz00_4311);
					BgL_sz00_2312 = BgL_sz00_4312;
					{

						{	/* Cfa/cinfo2.scm 38 */
							obj_t BgL_old4360z00_2315;

							obj_t BgL_aux4361z00_2316;

							{	/* Cfa/cinfo2.scm 38 */
								obj_t BgL_nextzd2method4935zd2_2328;

								BgL_nextzd2method4935zd2_2328 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2311),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_makezd2procedurezd2appz00zzcfa_info2z00);
								if (PROCEDUREP(BgL_nextzd2method4935zd2_2328))
									{	/* Cfa/cinfo2.scm 38 */
										BgL_old4360z00_2315 =
											PROCEDURE_ENTRY(BgL_nextzd2method4935zd2_2328)
											(BgL_nextzd2method4935zd2_2328, (obj_t) (BgL_oz00_2311),
											BgL_sz00_2312, BEOA);
									}
								else
									{	/* Cfa/cinfo2.scm 38 */
										BgL_old4360z00_2315 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2311), BgL_sz00_2312));
									}
							}
							BgL_aux4361z00_2316 =
								STRUCT_REF(BgL_sz00_2312, (int) (((long) 0)));
							{	/* Cfa/cinfo2.scm 38 */
								BgL_makezd2procedurezd2appz00_bglt BgL_new4362z00_2317;

								BgL_new4362z00_2317 =
									((BgL_makezd2procedurezd2appz00_bglt) (BgL_old4360z00_2315));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4362z00_2317),
									BGl_classzd2numzd2zz__objectz00
									(BGl_makezd2procedurezd2appz00zzcfa_info2z00));
								{	/* Cfa/cinfo2.scm 38 */
									BgL_makezd2procedurezd2appz00_bglt BgL_arg5387z00_2319;

									{	/* Cfa/cinfo2.scm 38 */
										obj_t BgL_arg5388z00_2320;

										obj_t BgL_arg5389z00_2321;

										obj_t BgL_arg5390z00_2322;

										obj_t BgL_arg5391z00_2323;

										obj_t BgL_arg5392z00_2324;

										obj_t BgL_arg5393z00_2325;

										obj_t BgL_arg5394z00_2326;

										obj_t BgL_arg5396z00_2327;

										BgL_arg5388z00_2320 =
											STRUCT_REF(BgL_aux4361z00_2316, (int) (((long) 0)));
										BgL_arg5389z00_2321 =
											STRUCT_REF(BgL_aux4361z00_2316, (int) (((long) 1)));
										BgL_arg5390z00_2322 =
											STRUCT_REF(BgL_aux4361z00_2316, (int) (((long) 2)));
										BgL_arg5391z00_2323 =
											STRUCT_REF(BgL_aux4361z00_2316, (int) (((long) 3)));
										BgL_arg5392z00_2324 =
											STRUCT_REF(BgL_aux4361z00_2316, (int) (((long) 4)));
										BgL_arg5393z00_2325 =
											STRUCT_REF(BgL_aux4361z00_2316, (int) (((long) 5)));
										BgL_arg5394z00_2326 =
											STRUCT_REF(BgL_aux4361z00_2316, (int) (((long) 6)));
										BgL_arg5396z00_2327 =
											STRUCT_REF(BgL_aux4361z00_2316, (int) (((long) 7)));
										{	/* Cfa/cinfo2.scm 38 */
											BgL_makezd2procedurezd2appz00_bglt BgL_res5556z00_3797;

											{	/* Cfa/cinfo2.scm 38 */
												BgL_approxz00_bglt BgL_approx4312z00_3770;

												obj_t BgL_valueszd2approx4313zd2_3771;

												long BgL_lostzd2stamp4314zd2_3772;

												bool_t BgL_xzd2tzf34315z21_3773;

												bool_t BgL_x4316z00_3774;

												bool_t BgL_t4317z00_3775;

												BgL_variablez00_bglt BgL_owner4318z00_3776;

												BgL_approx4312z00_3770 =
													(BgL_approxz00_bglt) (BgL_arg5388z00_2320);
												BgL_valueszd2approx4313zd2_3771 = BgL_arg5389z00_2321;
												BgL_lostzd2stamp4314zd2_3772 =
													(long) CINT(BgL_arg5390z00_2322);
												BgL_xzd2tzf34315z21_3773 = CBOOL(BgL_arg5391z00_2323);
												BgL_x4316z00_3774 = CBOOL(BgL_arg5392z00_2324);
												BgL_t4317z00_3775 = CBOOL(BgL_arg5393z00_2325);
												BgL_owner4318z00_3776 =
													(BgL_variablez00_bglt) (BgL_arg5394z00_2326);
												{	/* Cfa/cinfo2.scm 38 */
													BgL_makezd2procedurezd2appz00_bglt
														BgL_new4320z00_3778;
													BgL_new4320z00_3778 =
														((BgL_makezd2procedurezd2appz00_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_makezd2procedurezd2appz00_bgl))));
													{	/* Cfa/cinfo2.scm 38 */
														BgL_makezd2procedurezd2appz00_bglt
															BgL_res5555z00_3796;
														{	/* Cfa/cinfo2.scm 38 */
															BgL_makezd2procedurezd2appz00_bglt
																BgL_new4346z00_3779;
															BgL_new4346z00_3779 = BgL_new4320z00_3778;
															{	/* Cfa/cinfo2.scm 38 */
																BgL_approxz00_bglt BgL_approx4338z00_3788;

																obj_t BgL_valueszd2approx4339zd2_3789;

																long BgL_lostzd2stamp4340zd2_3790;

																bool_t BgL_xzd2tzf34341z21_3791;

																bool_t BgL_x4342z00_3792;

																bool_t BgL_t4343z00_3793;

																BgL_variablez00_bglt BgL_owner4344z00_3794;

																obj_t BgL_stackzd2stamp4345zd2_3795;

																BgL_approx4338z00_3788 = BgL_approx4312z00_3770;
																BgL_valueszd2approx4339zd2_3789 =
																	BgL_valueszd2approx4313zd2_3771;
																BgL_lostzd2stamp4340zd2_3790 =
																	BgL_lostzd2stamp4314zd2_3772;
																BgL_xzd2tzf34341z21_3791 =
																	BgL_xzd2tzf34315z21_3773;
																BgL_x4342z00_3792 = BgL_x4316z00_3774;
																BgL_t4343z00_3793 = BgL_t4317z00_3775;
																BgL_owner4344z00_3794 = BgL_owner4318z00_3776;
																BgL_stackzd2stamp4345zd2_3795 =
																	BgL_arg5396z00_2327;
																((((BgL_makezd2procedurezd2appz00_bglt)
																			CREF(BgL_new4346z00_3779))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4338z00_3788),
																	BUNSPEC);
																((((BgL_makezd2procedurezd2appz00_bglt)
																			CREF(BgL_new4346z00_3779))->
																		BgL_valueszd2approxzd2) =
																	((obj_t) BgL_valueszd2approx4339zd2_3789),
																	BUNSPEC);
																((((BgL_makezd2procedurezd2appz00_bglt)
																			CREF(BgL_new4346z00_3779))->
																		BgL_lostzd2stampzd2) =
																	((long) BgL_lostzd2stamp4340zd2_3790),
																	BUNSPEC);
																((((BgL_makezd2procedurezd2appz00_bglt)
																			CREF(BgL_new4346z00_3779))->
																		BgL_xzd2tzf3z21) =
																	((bool_t) BgL_xzd2tzf34341z21_3791), BUNSPEC);
																((((BgL_makezd2procedurezd2appz00_bglt)
																			CREF(BgL_new4346z00_3779))->BgL_xz00) =
																	((bool_t) BgL_x4342z00_3792), BUNSPEC);
																((((BgL_makezd2procedurezd2appz00_bglt)
																			CREF(BgL_new4346z00_3779))->BgL_tz00) =
																	((bool_t) BgL_t4343z00_3793), BUNSPEC);
																((((BgL_makezd2procedurezd2appz00_bglt)
																			CREF(BgL_new4346z00_3779))->
																		BgL_ownerz00) =
																	((BgL_variablez00_bglt)
																		BgL_owner4344z00_3794), BUNSPEC);
																((((BgL_makezd2procedurezd2appz00_bglt)
																			CREF(BgL_new4346z00_3779))->
																		BgL_stackzd2stampzd2) =
																	((obj_t) BgL_stackzd2stamp4345zd2_3795),
																	BUNSPEC);
																BgL_res5555z00_3796 = BgL_new4346z00_3779;
														}} BgL_res5555z00_3796;
													}
													BgL_res5556z00_3797 = BgL_new4320z00_3778;
											}}
											BgL_arg5387z00_2319 = BgL_res5556z00_3797;
									}}
									{	/* Cfa/cinfo2.scm 38 */
										obj_t BgL_auxz00_6418;

										BgL_objectz00_bglt BgL_auxz00_6416;

										BgL_auxz00_6418 = (obj_t) (BgL_arg5387z00_2319);
										BgL_auxz00_6416 =
											(BgL_objectz00_bglt) (BgL_new4362z00_2317);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_6416, BgL_auxz00_6418);
								}}
								BgL_auxz00_6368 = BgL_new4362z00_2317;
					}}}
					return (obj_t) (BgL_auxz00_6368);
				}
			}
		}
	}



/* object->struct-make-4934 */
	obj_t BGl_objectzd2ze3structzd2makezd24934z31zzcfa_info2z00(obj_t
		BgL_envz00_4313, obj_t BgL_obj4357z00_4314)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 38 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_obj4357z00_2287;

				BgL_obj4357z00_2287 =
					(BgL_makezd2procedurezd2appz00_bglt) (BgL_obj4357z00_4314);
				{

					{	/* Cfa/cinfo2.scm 38 */
						obj_t BgL_res4358z00_2290;

						{	/* Cfa/cinfo2.scm 38 */
							obj_t BgL_nextzd2method4933zd2_2309;

							BgL_nextzd2method4933zd2_2309 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4357z00_2287),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_makezd2procedurezd2appz00zzcfa_info2z00);
							if (PROCEDUREP(BgL_nextzd2method4933zd2_2309))
								{	/* Cfa/cinfo2.scm 38 */
									BgL_res4358z00_2290 =
										PROCEDURE_ENTRY(BgL_nextzd2method4933zd2_2309)
										(BgL_nextzd2method4933zd2_2309,
										(obj_t) (BgL_obj4357z00_2287), BEOA);
								}
							else
								{	/* Cfa/cinfo2.scm 38 */
									BgL_res4358z00_2290 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4357z00_2287));
								}
						}
						{	/* Cfa/cinfo2.scm 38 */
							obj_t BgL_aux4359z00_2291;

							{	/* Cfa/cinfo2.scm 38 */
								obj_t BgL_keyz00_3705;

								BgL_keyz00_3705 = CNST_TABLE_REF(((long) 5));
								BgL_aux4359z00_2291 =
									make_struct(BgL_keyz00_3705, (int) (((long) 8)), BUNSPEC);
							}
							{	/* Cfa/cinfo2.scm 38 */
								BgL_approxz00_bglt BgL_arg5368z00_2293;

								{
									obj_t BgL_auxz00_6435;

									{	/* Cfa/cinfo2.scm 38 */
										BgL_objectz00_bglt BgL_auxz00_6436;

										BgL_auxz00_6436 =
											(BgL_objectz00_bglt) (BgL_obj4357z00_2287);
										BgL_auxz00_6435 = BGL_OBJECT_WIDENING(BgL_auxz00_6436);
									}
									BgL_arg5368z00_2293 =
										(((BgL_makezd2procedurezd2appz00_bglt)
											CREF(BgL_auxz00_6435))->BgL_approxz00);
								}
								{	/* Cfa/cinfo2.scm 38 */
									obj_t BgL_auxz00_6442;

									int BgL_auxz00_6440;

									BgL_auxz00_6442 = (obj_t) (BgL_arg5368z00_2293);
									BgL_auxz00_6440 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4359z00_2291, BgL_auxz00_6440,
										BgL_auxz00_6442);
							}}
							{	/* Cfa/cinfo2.scm 38 */
								obj_t BgL_arg5370z00_2295;

								{
									obj_t BgL_auxz00_6445;

									{	/* Cfa/cinfo2.scm 38 */
										BgL_objectz00_bglt BgL_auxz00_6446;

										BgL_auxz00_6446 =
											(BgL_objectz00_bglt) (BgL_obj4357z00_2287);
										BgL_auxz00_6445 = BGL_OBJECT_WIDENING(BgL_auxz00_6446);
									}
									BgL_arg5370z00_2295 =
										(((BgL_makezd2procedurezd2appz00_bglt)
											CREF(BgL_auxz00_6445))->BgL_valueszd2approxzd2);
								}
								{	/* Cfa/cinfo2.scm 38 */
									int BgL_auxz00_6450;

									BgL_auxz00_6450 = (int) (((long) 1));
									STRUCT_SET(BgL_aux4359z00_2291, BgL_auxz00_6450,
										BgL_arg5370z00_2295);
							}}
							{	/* Cfa/cinfo2.scm 38 */
								long BgL_arg5372z00_2297;

								{
									obj_t BgL_auxz00_6453;

									{	/* Cfa/cinfo2.scm 38 */
										BgL_objectz00_bglt BgL_auxz00_6454;

										BgL_auxz00_6454 =
											(BgL_objectz00_bglt) (BgL_obj4357z00_2287);
										BgL_auxz00_6453 = BGL_OBJECT_WIDENING(BgL_auxz00_6454);
									}
									BgL_arg5372z00_2297 =
										(((BgL_makezd2procedurezd2appz00_bglt)
											CREF(BgL_auxz00_6453))->BgL_lostzd2stampzd2);
								}
								{	/* Cfa/cinfo2.scm 38 */
									obj_t BgL_auxz00_6460;

									int BgL_auxz00_6458;

									BgL_auxz00_6460 = BINT(BgL_arg5372z00_2297);
									BgL_auxz00_6458 = (int) (((long) 2));
									STRUCT_SET(BgL_aux4359z00_2291, BgL_auxz00_6458,
										BgL_auxz00_6460);
							}}
							{	/* Cfa/cinfo2.scm 38 */
								bool_t BgL_arg5374z00_2299;

								{
									obj_t BgL_auxz00_6463;

									{	/* Cfa/cinfo2.scm 38 */
										BgL_objectz00_bglt BgL_auxz00_6464;

										BgL_auxz00_6464 =
											(BgL_objectz00_bglt) (BgL_obj4357z00_2287);
										BgL_auxz00_6463 = BGL_OBJECT_WIDENING(BgL_auxz00_6464);
									}
									BgL_arg5374z00_2299 =
										(((BgL_makezd2procedurezd2appz00_bglt)
											CREF(BgL_auxz00_6463))->BgL_xzd2tzf3z21);
								}
								{	/* Cfa/cinfo2.scm 38 */
									obj_t BgL_auxz00_6470;

									int BgL_auxz00_6468;

									BgL_auxz00_6470 = BBOOL(BgL_arg5374z00_2299);
									BgL_auxz00_6468 = (int) (((long) 3));
									STRUCT_SET(BgL_aux4359z00_2291, BgL_auxz00_6468,
										BgL_auxz00_6470);
							}}
							{	/* Cfa/cinfo2.scm 38 */
								bool_t BgL_arg5376z00_2301;

								{
									obj_t BgL_auxz00_6473;

									{	/* Cfa/cinfo2.scm 38 */
										BgL_objectz00_bglt BgL_auxz00_6474;

										BgL_auxz00_6474 =
											(BgL_objectz00_bglt) (BgL_obj4357z00_2287);
										BgL_auxz00_6473 = BGL_OBJECT_WIDENING(BgL_auxz00_6474);
									}
									BgL_arg5376z00_2301 =
										(((BgL_makezd2procedurezd2appz00_bglt)
											CREF(BgL_auxz00_6473))->BgL_xz00);
								}
								{	/* Cfa/cinfo2.scm 38 */
									obj_t BgL_auxz00_6480;

									int BgL_auxz00_6478;

									BgL_auxz00_6480 = BBOOL(BgL_arg5376z00_2301);
									BgL_auxz00_6478 = (int) (((long) 4));
									STRUCT_SET(BgL_aux4359z00_2291, BgL_auxz00_6478,
										BgL_auxz00_6480);
							}}
							{	/* Cfa/cinfo2.scm 38 */
								bool_t BgL_arg5378z00_2303;

								{
									obj_t BgL_auxz00_6483;

									{	/* Cfa/cinfo2.scm 38 */
										BgL_objectz00_bglt BgL_auxz00_6484;

										BgL_auxz00_6484 =
											(BgL_objectz00_bglt) (BgL_obj4357z00_2287);
										BgL_auxz00_6483 = BGL_OBJECT_WIDENING(BgL_auxz00_6484);
									}
									BgL_arg5378z00_2303 =
										(((BgL_makezd2procedurezd2appz00_bglt)
											CREF(BgL_auxz00_6483))->BgL_tz00);
								}
								{	/* Cfa/cinfo2.scm 38 */
									obj_t BgL_auxz00_6490;

									int BgL_auxz00_6488;

									BgL_auxz00_6490 = BBOOL(BgL_arg5378z00_2303);
									BgL_auxz00_6488 = (int) (((long) 5));
									STRUCT_SET(BgL_aux4359z00_2291, BgL_auxz00_6488,
										BgL_auxz00_6490);
							}}
							{	/* Cfa/cinfo2.scm 38 */
								BgL_variablez00_bglt BgL_arg5381z00_2305;

								{
									obj_t BgL_auxz00_6493;

									{	/* Cfa/cinfo2.scm 38 */
										BgL_objectz00_bglt BgL_auxz00_6494;

										BgL_auxz00_6494 =
											(BgL_objectz00_bglt) (BgL_obj4357z00_2287);
										BgL_auxz00_6493 = BGL_OBJECT_WIDENING(BgL_auxz00_6494);
									}
									BgL_arg5381z00_2305 =
										(((BgL_makezd2procedurezd2appz00_bglt)
											CREF(BgL_auxz00_6493))->BgL_ownerz00);
								}
								{	/* Cfa/cinfo2.scm 38 */
									obj_t BgL_auxz00_6500;

									int BgL_auxz00_6498;

									BgL_auxz00_6500 = (obj_t) (BgL_arg5381z00_2305);
									BgL_auxz00_6498 = (int) (((long) 6));
									STRUCT_SET(BgL_aux4359z00_2291, BgL_auxz00_6498,
										BgL_auxz00_6500);
							}}
							{	/* Cfa/cinfo2.scm 38 */
								obj_t BgL_arg5383z00_2307;

								{
									obj_t BgL_auxz00_6503;

									{	/* Cfa/cinfo2.scm 38 */
										BgL_objectz00_bglt BgL_auxz00_6504;

										BgL_auxz00_6504 =
											(BgL_objectz00_bglt) (BgL_obj4357z00_2287);
										BgL_auxz00_6503 = BGL_OBJECT_WIDENING(BgL_auxz00_6504);
									}
									BgL_arg5383z00_2307 =
										(((BgL_makezd2procedurezd2appz00_bglt)
											CREF(BgL_auxz00_6503))->BgL_stackzd2stampzd2);
								}
								{	/* Cfa/cinfo2.scm 38 */
									int BgL_auxz00_6508;

									BgL_auxz00_6508 = (int) (((long) 7));
									STRUCT_SET(BgL_aux4359z00_2291, BgL_auxz00_6508,
										BgL_arg5383z00_2307);
							}}
							{	/* Cfa/cinfo2.scm 38 */
								int BgL_auxz00_6511;

								BgL_auxz00_6511 = (int) (((long) 0));
								STRUCT_SET(BgL_res4358z00_2290, BgL_auxz00_6511,
									BgL_aux4359z00_2291);
							}
							{	/* Cfa/cinfo2.scm 38 */
								obj_t BgL_auxz00_6514;

								BgL_auxz00_6514 = STRUCT_KEY(BgL_res4358z00_2290);
								STRUCT_KEY_SET(BgL_aux4359z00_2291, BgL_auxz00_6514);
							}
							{	/* Cfa/cinfo2.scm 38 */
								obj_t BgL_kz00_3748;

								BgL_kz00_3748 = CNST_TABLE_REF(((long) 5));
								STRUCT_KEY_SET(BgL_res4358z00_2290, BgL_kz00_3748);
							}
							return BgL_res4358z00_2290;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4932 */
	obj_t BGl_structzb2objectzd2ze3objec4932z83zzcfa_info2z00(obj_t
		BgL_envz00_4315, obj_t BgL_oz00_4316, obj_t BgL_sz00_4317)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 55 */
			{
				BgL_procedurezd2refzd2appz00_bglt BgL_oz00_2275;

				obj_t BgL_sz00_2276;

				{	/* Cfa/cinfo2.scm 55 */
					BgL_procedurezd2refzd2appz00_bglt BgL_auxz00_6520;

					BgL_oz00_2275 = (BgL_procedurezd2refzd2appz00_bglt) (BgL_oz00_4316);
					BgL_sz00_2276 = BgL_sz00_4317;
					{

						{	/* Cfa/cinfo2.scm 55 */
							obj_t BgL_old4425z00_2279;

							obj_t BgL_aux4426z00_2280;

							{	/* Cfa/cinfo2.scm 55 */
								obj_t BgL_nextzd2method4931zd2_2285;

								BgL_nextzd2method4931zd2_2285 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2275),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_procedurezd2refzd2appz00zzcfa_info2z00);
								if (PROCEDUREP(BgL_nextzd2method4931zd2_2285))
									{	/* Cfa/cinfo2.scm 55 */
										BgL_old4425z00_2279 =
											PROCEDURE_ENTRY(BgL_nextzd2method4931zd2_2285)
											(BgL_nextzd2method4931zd2_2285, (obj_t) (BgL_oz00_2275),
											BgL_sz00_2276, BEOA);
									}
								else
									{	/* Cfa/cinfo2.scm 55 */
										BgL_old4425z00_2279 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2275), BgL_sz00_2276));
									}
							}
							BgL_aux4426z00_2280 =
								STRUCT_REF(BgL_sz00_2276, (int) (((long) 0)));
							{	/* Cfa/cinfo2.scm 55 */
								BgL_procedurezd2refzd2appz00_bglt BgL_new4427z00_2281;

								BgL_new4427z00_2281 =
									((BgL_procedurezd2refzd2appz00_bglt) (BgL_old4425z00_2279));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4427z00_2281),
									BGl_classzd2numzd2zz__objectz00
									(BGl_procedurezd2refzd2appz00zzcfa_info2z00));
								{	/* Cfa/cinfo2.scm 55 */
									BgL_procedurezd2refzd2appz00_bglt BgL_arg5364z00_2283;

									{	/* Cfa/cinfo2.scm 55 */
										obj_t BgL_arg5365z00_2284;

										BgL_arg5365z00_2284 =
											STRUCT_REF(BgL_aux4426z00_2280, (int) (((long) 0)));
										{	/* Cfa/cinfo2.scm 55 */
											BgL_procedurezd2refzd2appz00_bglt BgL_res5553z00_3703;

											{	/* Cfa/cinfo2.scm 55 */
												BgL_approxz00_bglt BgL_approx4405z00_3697;

												BgL_approx4405z00_3697 =
													(BgL_approxz00_bglt) (BgL_arg5365z00_2284);
												{	/* Cfa/cinfo2.scm 55 */
													BgL_procedurezd2refzd2appz00_bglt BgL_new4406z00_3698;

													BgL_new4406z00_3698 =
														((BgL_procedurezd2refzd2appz00_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_procedurezd2refzd2appz00_bgl))));
													{	/* Cfa/cinfo2.scm 55 */
														BgL_procedurezd2refzd2appz00_bglt
															BgL_res5552z00_3702;
														{	/* Cfa/cinfo2.scm 55 */
															BgL_procedurezd2refzd2appz00_bglt
																BgL_new4418z00_3699;
															BgL_new4418z00_3699 = BgL_new4406z00_3698;
															{	/* Cfa/cinfo2.scm 55 */
																BgL_approxz00_bglt BgL_approx4417z00_3701;

																BgL_approx4417z00_3701 = BgL_approx4405z00_3697;
																((((BgL_procedurezd2refzd2appz00_bglt)
																			CREF(BgL_new4418z00_3699))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4417z00_3701),
																	BUNSPEC);
																BgL_res5552z00_3702 = BgL_new4418z00_3699;
														}} BgL_res5552z00_3702;
													}
													BgL_res5553z00_3703 = BgL_new4406z00_3698;
											}}
											BgL_arg5364z00_2283 = BgL_res5553z00_3703;
									}}
									{	/* Cfa/cinfo2.scm 55 */
										obj_t BgL_auxz00_6544;

										BgL_objectz00_bglt BgL_auxz00_6542;

										BgL_auxz00_6544 = (obj_t) (BgL_arg5364z00_2283);
										BgL_auxz00_6542 =
											(BgL_objectz00_bglt) (BgL_new4427z00_2281);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_6542, BgL_auxz00_6544);
								}}
								BgL_auxz00_6520 = BgL_new4427z00_2281;
					}}}
					return (obj_t) (BgL_auxz00_6520);
				}
			}
		}
	}



/* object->struct-proce4930 */
	obj_t BGl_objectzd2ze3structzd2proce4930ze3zzcfa_info2z00(obj_t
		BgL_envz00_4318, obj_t BgL_obj4422z00_4319)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 55 */
			{
				BgL_procedurezd2refzd2appz00_bglt BgL_obj4422z00_2265;

				BgL_obj4422z00_2265 =
					(BgL_procedurezd2refzd2appz00_bglt) (BgL_obj4422z00_4319);
				{

					{	/* Cfa/cinfo2.scm 55 */
						obj_t BgL_res4423z00_2268;

						{	/* Cfa/cinfo2.scm 55 */
							obj_t BgL_nextzd2method4929zd2_2273;

							BgL_nextzd2method4929zd2_2273 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4422z00_2265),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_procedurezd2refzd2appz00zzcfa_info2z00);
							if (PROCEDUREP(BgL_nextzd2method4929zd2_2273))
								{	/* Cfa/cinfo2.scm 55 */
									BgL_res4423z00_2268 =
										PROCEDURE_ENTRY(BgL_nextzd2method4929zd2_2273)
										(BgL_nextzd2method4929zd2_2273,
										(obj_t) (BgL_obj4422z00_2265), BEOA);
								}
							else
								{	/* Cfa/cinfo2.scm 55 */
									BgL_res4423z00_2268 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4422z00_2265));
								}
						}
						{	/* Cfa/cinfo2.scm 55 */
							obj_t BgL_aux4424z00_2269;

							{	/* Cfa/cinfo2.scm 55 */
								obj_t BgL_keyz00_3674;

								BgL_keyz00_3674 = CNST_TABLE_REF(((long) 6));
								BgL_aux4424z00_2269 =
									make_struct(BgL_keyz00_3674, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo2.scm 55 */
								BgL_approxz00_bglt BgL_arg5360z00_2271;

								{
									obj_t BgL_auxz00_6561;

									{	/* Cfa/cinfo2.scm 55 */
										BgL_objectz00_bglt BgL_auxz00_6562;

										BgL_auxz00_6562 =
											(BgL_objectz00_bglt) (BgL_obj4422z00_2265);
										BgL_auxz00_6561 = BGL_OBJECT_WIDENING(BgL_auxz00_6562);
									}
									BgL_arg5360z00_2271 =
										(((BgL_procedurezd2refzd2appz00_bglt)
											CREF(BgL_auxz00_6561))->BgL_approxz00);
								}
								{	/* Cfa/cinfo2.scm 55 */
									obj_t BgL_auxz00_6568;

									int BgL_auxz00_6566;

									BgL_auxz00_6568 = (obj_t) (BgL_arg5360z00_2271);
									BgL_auxz00_6566 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4424z00_2269, BgL_auxz00_6566,
										BgL_auxz00_6568);
							}}
							{	/* Cfa/cinfo2.scm 55 */
								int BgL_auxz00_6571;

								BgL_auxz00_6571 = (int) (((long) 0));
								STRUCT_SET(BgL_res4423z00_2268, BgL_auxz00_6571,
									BgL_aux4424z00_2269);
							}
							{	/* Cfa/cinfo2.scm 55 */
								obj_t BgL_auxz00_6574;

								BgL_auxz00_6574 = STRUCT_KEY(BgL_res4423z00_2268);
								STRUCT_KEY_SET(BgL_aux4424z00_2269, BgL_auxz00_6574);
							}
							{	/* Cfa/cinfo2.scm 55 */
								obj_t BgL_kz00_3689;

								BgL_kz00_3689 = CNST_TABLE_REF(((long) 6));
								STRUCT_KEY_SET(BgL_res4423z00_2268, BgL_kz00_3689);
							}
							return BgL_res4423z00_2268;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4928 */
	obj_t BGl_structzb2objectzd2ze3objec4928z83zzcfa_info2z00(obj_t
		BgL_envz00_4320, obj_t BgL_oz00_4321, obj_t BgL_sz00_4322)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 56 */
			{
				BgL_procedurezd2setz12zd2appz12_bglt BgL_oz00_2253;

				obj_t BgL_sz00_2254;

				{	/* Cfa/cinfo2.scm 56 */
					BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_6580;

					BgL_oz00_2253 =
						(BgL_procedurezd2setz12zd2appz12_bglt) (BgL_oz00_4321);
					BgL_sz00_2254 = BgL_sz00_4322;
					{

						{	/* Cfa/cinfo2.scm 56 */
							obj_t BgL_old4468z00_2257;

							obj_t BgL_aux4469z00_2258;

							{	/* Cfa/cinfo2.scm 56 */
								obj_t BgL_nextzd2method4927zd2_2263;

								BgL_nextzd2method4927zd2_2263 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2253),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_procedurezd2setz12zd2appz12zzcfa_info2z00);
								if (PROCEDUREP(BgL_nextzd2method4927zd2_2263))
									{	/* Cfa/cinfo2.scm 56 */
										BgL_old4468z00_2257 =
											PROCEDURE_ENTRY(BgL_nextzd2method4927zd2_2263)
											(BgL_nextzd2method4927zd2_2263, (obj_t) (BgL_oz00_2253),
											BgL_sz00_2254, BEOA);
									}
								else
									{	/* Cfa/cinfo2.scm 56 */
										BgL_old4468z00_2257 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2253), BgL_sz00_2254));
									}
							}
							BgL_aux4469z00_2258 =
								STRUCT_REF(BgL_sz00_2254, (int) (((long) 0)));
							{	/* Cfa/cinfo2.scm 56 */
								BgL_procedurezd2setz12zd2appz12_bglt BgL_new4470z00_2259;

								BgL_new4470z00_2259 =
									((BgL_procedurezd2setz12zd2appz12_bglt)
									(BgL_old4468z00_2257));
								BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
									(BgL_new4470z00_2259),
									BGl_classzd2numzd2zz__objectz00
									(BGl_procedurezd2setz12zd2appz12zzcfa_info2z00));
								{	/* Cfa/cinfo2.scm 56 */
									BgL_procedurezd2setz12zd2appz12_bglt BgL_arg5356z00_2261;

									{	/* Cfa/cinfo2.scm 56 */
										obj_t BgL_arg5357z00_2262;

										BgL_arg5357z00_2262 =
											STRUCT_REF(BgL_aux4469z00_2258, (int) (((long) 0)));
										{	/* Cfa/cinfo2.scm 56 */
											BgL_procedurezd2setz12zd2appz12_bglt BgL_res5550z00_3672;

											{	/* Cfa/cinfo2.scm 56 */
												BgL_approxz00_bglt BgL_approx4448z00_3666;

												BgL_approx4448z00_3666 =
													(BgL_approxz00_bglt) (BgL_arg5357z00_2262);
												{	/* Cfa/cinfo2.scm 56 */
													BgL_procedurezd2setz12zd2appz12_bglt
														BgL_new4449z00_3667;
													BgL_new4449z00_3667 =
														((BgL_procedurezd2setz12zd2appz12_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_procedurezd2setz12zd2appz12_bgl))));
													{	/* Cfa/cinfo2.scm 56 */
														BgL_procedurezd2setz12zd2appz12_bglt
															BgL_res5549z00_3671;
														{	/* Cfa/cinfo2.scm 56 */
															BgL_procedurezd2setz12zd2appz12_bglt
																BgL_new4461z00_3668;
															BgL_new4461z00_3668 = BgL_new4449z00_3667;
															{	/* Cfa/cinfo2.scm 56 */
																BgL_approxz00_bglt BgL_approx4460z00_3670;

																BgL_approx4460z00_3670 = BgL_approx4448z00_3666;
																((((BgL_procedurezd2setz12zd2appz12_bglt)
																			CREF(BgL_new4461z00_3668))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4460z00_3670),
																	BUNSPEC);
																BgL_res5549z00_3671 = BgL_new4461z00_3668;
														}} BgL_res5549z00_3671;
													}
													BgL_res5550z00_3672 = BgL_new4449z00_3667;
											}}
											BgL_arg5356z00_2261 = BgL_res5550z00_3672;
									}}
									{	/* Cfa/cinfo2.scm 56 */
										obj_t BgL_auxz00_6604;

										BgL_objectz00_bglt BgL_auxz00_6602;

										BgL_auxz00_6604 = (obj_t) (BgL_arg5356z00_2261);
										BgL_auxz00_6602 =
											(BgL_objectz00_bglt) (BgL_new4470z00_2259);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_6602, BgL_auxz00_6604);
								}}
								BgL_auxz00_6580 = BgL_new4470z00_2259;
					}}}
					return (obj_t) (BgL_auxz00_6580);
				}
			}
		}
	}



/* object->struct-proce4926 */
	obj_t BGl_objectzd2ze3structzd2proce4926ze3zzcfa_info2z00(obj_t
		BgL_envz00_4323, obj_t BgL_obj4465z00_4324)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 56 */
			{
				BgL_procedurezd2setz12zd2appz12_bglt BgL_obj4465z00_2243;

				BgL_obj4465z00_2243 =
					(BgL_procedurezd2setz12zd2appz12_bglt) (BgL_obj4465z00_4324);
				{

					{	/* Cfa/cinfo2.scm 56 */
						obj_t BgL_res4466z00_2246;

						{	/* Cfa/cinfo2.scm 56 */
							obj_t BgL_nextzd2method4925zd2_2251;

							BgL_nextzd2method4925zd2_2251 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4465z00_2243),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_procedurezd2setz12zd2appz12zzcfa_info2z00);
							if (PROCEDUREP(BgL_nextzd2method4925zd2_2251))
								{	/* Cfa/cinfo2.scm 56 */
									BgL_res4466z00_2246 =
										PROCEDURE_ENTRY(BgL_nextzd2method4925zd2_2251)
										(BgL_nextzd2method4925zd2_2251,
										(obj_t) (BgL_obj4465z00_2243), BEOA);
								}
							else
								{	/* Cfa/cinfo2.scm 56 */
									BgL_res4466z00_2246 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4465z00_2243));
								}
						}
						{	/* Cfa/cinfo2.scm 56 */
							obj_t BgL_aux4467z00_2247;

							{	/* Cfa/cinfo2.scm 56 */
								obj_t BgL_keyz00_3643;

								BgL_keyz00_3643 = CNST_TABLE_REF(((long) 7));
								BgL_aux4467z00_2247 =
									make_struct(BgL_keyz00_3643, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo2.scm 56 */
								BgL_approxz00_bglt BgL_arg5352z00_2249;

								{
									obj_t BgL_auxz00_6621;

									{	/* Cfa/cinfo2.scm 56 */
										BgL_objectz00_bglt BgL_auxz00_6622;

										BgL_auxz00_6622 =
											(BgL_objectz00_bglt) (BgL_obj4465z00_2243);
										BgL_auxz00_6621 = BGL_OBJECT_WIDENING(BgL_auxz00_6622);
									}
									BgL_arg5352z00_2249 =
										(((BgL_procedurezd2setz12zd2appz12_bglt)
											CREF(BgL_auxz00_6621))->BgL_approxz00);
								}
								{	/* Cfa/cinfo2.scm 56 */
									obj_t BgL_auxz00_6628;

									int BgL_auxz00_6626;

									BgL_auxz00_6628 = (obj_t) (BgL_arg5352z00_2249);
									BgL_auxz00_6626 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4467z00_2247, BgL_auxz00_6626,
										BgL_auxz00_6628);
							}}
							{	/* Cfa/cinfo2.scm 56 */
								int BgL_auxz00_6631;

								BgL_auxz00_6631 = (int) (((long) 0));
								STRUCT_SET(BgL_res4466z00_2246, BgL_auxz00_6631,
									BgL_aux4467z00_2247);
							}
							{	/* Cfa/cinfo2.scm 56 */
								obj_t BgL_auxz00_6634;

								BgL_auxz00_6634 = STRUCT_KEY(BgL_res4466z00_2246);
								STRUCT_KEY_SET(BgL_aux4467z00_2247, BgL_auxz00_6634);
							}
							{	/* Cfa/cinfo2.scm 56 */
								obj_t BgL_kz00_3658;

								BgL_kz00_3658 = CNST_TABLE_REF(((long) 7));
								STRUCT_KEY_SET(BgL_res4466z00_2246, BgL_kz00_3658);
							}
							return BgL_res4466z00_2246;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4924 */
	obj_t BGl_structzb2objectzd2ze3objec4924z83zzcfa_info2z00(obj_t
		BgL_envz00_4325, obj_t BgL_oz00_4326, obj_t BgL_sz00_4327)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 59 */
			{
				BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_oz00_2231;

				obj_t BgL_sz00_2232;

				{	/* Cfa/cinfo2.scm 59 */
					BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_auxz00_6640;

					BgL_oz00_2231 =
						(BgL_prezd2makezd2vectorzd2appzd2_bglt) (BgL_oz00_4326);
					BgL_sz00_2232 = BgL_sz00_4327;
					{

						{	/* Cfa/cinfo2.scm 59 */
							obj_t BgL_old4509z00_2235;

							obj_t BgL_aux4510z00_2236;

							{	/* Cfa/cinfo2.scm 59 */
								obj_t BgL_nextzd2method4923zd2_2241;

								BgL_nextzd2method4923zd2_2241 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2231),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00);
								if (PROCEDUREP(BgL_nextzd2method4923zd2_2241))
									{	/* Cfa/cinfo2.scm 59 */
										BgL_old4509z00_2235 =
											PROCEDURE_ENTRY(BgL_nextzd2method4923zd2_2241)
											(BgL_nextzd2method4923zd2_2241, (obj_t) (BgL_oz00_2231),
											BgL_sz00_2232, BEOA);
									}
								else
									{	/* Cfa/cinfo2.scm 59 */
										BgL_old4509z00_2235 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2231), BgL_sz00_2232));
									}
							}
							BgL_aux4510z00_2236 =
								STRUCT_REF(BgL_sz00_2232, (int) (((long) 0)));
							{	/* Cfa/cinfo2.scm 59 */
								BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_new4511z00_2237;

								BgL_new4511z00_2237 =
									((BgL_prezd2makezd2vectorzd2appzd2_bglt)
									(BgL_old4509z00_2235));
								BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
									(BgL_new4511z00_2237),
									BGl_classzd2numzd2zz__objectz00
									(BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00));
								{	/* Cfa/cinfo2.scm 59 */
									BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_arg5348z00_2239;

									{	/* Cfa/cinfo2.scm 59 */
										obj_t BgL_arg5349z00_2240;

										BgL_arg5349z00_2240 =
											STRUCT_REF(BgL_aux4510z00_2236, (int) (((long) 0)));
										{	/* Cfa/cinfo2.scm 59 */
											BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_res5547z00_3641;

											{	/* Cfa/cinfo2.scm 59 */
												BgL_variablez00_bglt BgL_owner4489z00_3635;

												BgL_owner4489z00_3635 =
													(BgL_variablez00_bglt) (BgL_arg5349z00_2240);
												{	/* Cfa/cinfo2.scm 59 */
													BgL_prezd2makezd2vectorzd2appzd2_bglt
														BgL_new4490z00_3636;
													BgL_new4490z00_3636 =
														((BgL_prezd2makezd2vectorzd2appzd2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_prezd2makezd2vectorzd2appzd2_bgl))));
													{	/* Cfa/cinfo2.scm 59 */
														BgL_prezd2makezd2vectorzd2appzd2_bglt
															BgL_res5546z00_3640;
														{	/* Cfa/cinfo2.scm 59 */
															BgL_prezd2makezd2vectorzd2appzd2_bglt
																BgL_new4502z00_3637;
															BgL_new4502z00_3637 = BgL_new4490z00_3636;
															{	/* Cfa/cinfo2.scm 59 */
																BgL_variablez00_bglt BgL_owner4501z00_3639;

																BgL_owner4501z00_3639 = BgL_owner4489z00_3635;
																((((BgL_prezd2makezd2vectorzd2appzd2_bglt)
																			CREF(BgL_new4502z00_3637))->
																		BgL_ownerz00) =
																	((BgL_variablez00_bglt)
																		BgL_owner4501z00_3639), BUNSPEC);
																BgL_res5546z00_3640 = BgL_new4502z00_3637;
														}} BgL_res5546z00_3640;
													}
													BgL_res5547z00_3641 = BgL_new4490z00_3636;
											}}
											BgL_arg5348z00_2239 = BgL_res5547z00_3641;
									}}
									{	/* Cfa/cinfo2.scm 59 */
										obj_t BgL_auxz00_6664;

										BgL_objectz00_bglt BgL_auxz00_6662;

										BgL_auxz00_6664 = (obj_t) (BgL_arg5348z00_2239);
										BgL_auxz00_6662 =
											(BgL_objectz00_bglt) (BgL_new4511z00_2237);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_6662, BgL_auxz00_6664);
								}}
								BgL_auxz00_6640 = BgL_new4511z00_2237;
					}}}
					return (obj_t) (BgL_auxz00_6640);
				}
			}
		}
	}



/* object->struct-pre-m4921 */
	obj_t BGl_objectzd2ze3structzd2prezd2m4921z31zzcfa_info2z00(obj_t
		BgL_envz00_4328, obj_t BgL_obj4506z00_4329)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 59 */
			{
				BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_obj4506z00_2221;

				BgL_obj4506z00_2221 =
					(BgL_prezd2makezd2vectorzd2appzd2_bglt) (BgL_obj4506z00_4329);
				{

					{	/* Cfa/cinfo2.scm 59 */
						obj_t BgL_res4507z00_2224;

						{	/* Cfa/cinfo2.scm 59 */
							obj_t BgL_nextzd2method4920zd2_2229;

							BgL_nextzd2method4920zd2_2229 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4506z00_2221),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00);
							if (PROCEDUREP(BgL_nextzd2method4920zd2_2229))
								{	/* Cfa/cinfo2.scm 59 */
									BgL_res4507z00_2224 =
										PROCEDURE_ENTRY(BgL_nextzd2method4920zd2_2229)
										(BgL_nextzd2method4920zd2_2229,
										(obj_t) (BgL_obj4506z00_2221), BEOA);
								}
							else
								{	/* Cfa/cinfo2.scm 59 */
									BgL_res4507z00_2224 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4506z00_2221));
								}
						}
						{	/* Cfa/cinfo2.scm 59 */
							obj_t BgL_aux4508z00_2225;

							{	/* Cfa/cinfo2.scm 59 */
								obj_t BgL_keyz00_3612;

								BgL_keyz00_3612 = CNST_TABLE_REF(((long) 8));
								BgL_aux4508z00_2225 =
									make_struct(BgL_keyz00_3612, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo2.scm 59 */
								BgL_variablez00_bglt BgL_arg5344z00_2227;

								{
									obj_t BgL_auxz00_6681;

									{	/* Cfa/cinfo2.scm 59 */
										BgL_objectz00_bglt BgL_auxz00_6682;

										BgL_auxz00_6682 =
											(BgL_objectz00_bglt) (BgL_obj4506z00_2221);
										BgL_auxz00_6681 = BGL_OBJECT_WIDENING(BgL_auxz00_6682);
									}
									BgL_arg5344z00_2227 =
										(((BgL_prezd2makezd2vectorzd2appzd2_bglt)
											CREF(BgL_auxz00_6681))->BgL_ownerz00);
								}
								{	/* Cfa/cinfo2.scm 59 */
									obj_t BgL_auxz00_6688;

									int BgL_auxz00_6686;

									BgL_auxz00_6688 = (obj_t) (BgL_arg5344z00_2227);
									BgL_auxz00_6686 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4508z00_2225, BgL_auxz00_6686,
										BgL_auxz00_6688);
							}}
							{	/* Cfa/cinfo2.scm 59 */
								int BgL_auxz00_6691;

								BgL_auxz00_6691 = (int) (((long) 0));
								STRUCT_SET(BgL_res4507z00_2224, BgL_auxz00_6691,
									BgL_aux4508z00_2225);
							}
							{	/* Cfa/cinfo2.scm 59 */
								obj_t BgL_auxz00_6694;

								BgL_auxz00_6694 = STRUCT_KEY(BgL_res4507z00_2224);
								STRUCT_KEY_SET(BgL_aux4508z00_2225, BgL_auxz00_6694);
							}
							{	/* Cfa/cinfo2.scm 59 */
								obj_t BgL_kz00_3627;

								BgL_kz00_3627 = CNST_TABLE_REF(((long) 8));
								STRUCT_KEY_SET(BgL_res4507z00_2224, BgL_kz00_3627);
							}
							return BgL_res4507z00_2224;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4918 */
	obj_t BGl_structzb2objectzd2ze3objec4918z83zzcfa_info2z00(obj_t
		BgL_envz00_4330, obj_t BgL_oz00_4331, obj_t BgL_sz00_4332)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 63 */
			{
				BgL_makezd2vectorzd2appz00_bglt BgL_oz00_2204;

				obj_t BgL_sz00_2205;

				{	/* Cfa/cinfo2.scm 63 */
					BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_6700;

					BgL_oz00_2204 = (BgL_makezd2vectorzd2appz00_bglt) (BgL_oz00_4331);
					BgL_sz00_2205 = BgL_sz00_4332;
					{

						{	/* Cfa/cinfo2.scm 63 */
							obj_t BgL_old4570z00_2208;

							obj_t BgL_aux4571z00_2209;

							{	/* Cfa/cinfo2.scm 63 */
								obj_t BgL_nextzd2method4917zd2_2219;

								BgL_nextzd2method4917zd2_2219 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2204),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_makezd2vectorzd2appz00zzcfa_info2z00);
								if (PROCEDUREP(BgL_nextzd2method4917zd2_2219))
									{	/* Cfa/cinfo2.scm 63 */
										BgL_old4570z00_2208 =
											PROCEDURE_ENTRY(BgL_nextzd2method4917zd2_2219)
											(BgL_nextzd2method4917zd2_2219, (obj_t) (BgL_oz00_2204),
											BgL_sz00_2205, BEOA);
									}
								else
									{	/* Cfa/cinfo2.scm 63 */
										BgL_old4570z00_2208 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2204), BgL_sz00_2205));
									}
							}
							BgL_aux4571z00_2209 =
								STRUCT_REF(BgL_sz00_2205, (int) (((long) 0)));
							{	/* Cfa/cinfo2.scm 63 */
								BgL_makezd2vectorzd2appz00_bglt BgL_new4572z00_2210;

								BgL_new4572z00_2210 =
									((BgL_makezd2vectorzd2appz00_bglt) (BgL_old4570z00_2208));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4572z00_2210),
									BGl_classzd2numzd2zz__objectz00
									(BGl_makezd2vectorzd2appz00zzcfa_info2z00));
								{	/* Cfa/cinfo2.scm 63 */
									BgL_makezd2vectorzd2appz00_bglt BgL_arg5335z00_2212;

									{	/* Cfa/cinfo2.scm 63 */
										obj_t BgL_arg5336z00_2213;

										obj_t BgL_arg5337z00_2214;

										obj_t BgL_arg5338z00_2215;

										obj_t BgL_arg5339z00_2216;

										obj_t BgL_arg5340z00_2217;

										obj_t BgL_arg5341z00_2218;

										BgL_arg5336z00_2213 =
											STRUCT_REF(BgL_aux4571z00_2209, (int) (((long) 0)));
										BgL_arg5337z00_2214 =
											STRUCT_REF(BgL_aux4571z00_2209, (int) (((long) 1)));
										BgL_arg5338z00_2215 =
											STRUCT_REF(BgL_aux4571z00_2209, (int) (((long) 2)));
										BgL_arg5339z00_2216 =
											STRUCT_REF(BgL_aux4571z00_2209, (int) (((long) 3)));
										BgL_arg5340z00_2217 =
											STRUCT_REF(BgL_aux4571z00_2209, (int) (((long) 4)));
										BgL_arg5341z00_2218 =
											STRUCT_REF(BgL_aux4571z00_2209, (int) (((long) 5)));
										{	/* Cfa/cinfo2.scm 63 */
											BgL_makezd2vectorzd2appz00_bglt BgL_res5544z00_3610;

											{	/* Cfa/cinfo2.scm 63 */
												BgL_approxz00_bglt BgL_approx4530z00_3589;

												BgL_approxz00_bglt BgL_valuezd2approx4531zd2_3590;

												long BgL_lostzd2stamp4532zd2_3591;

												BgL_variablez00_bglt BgL_owner4533z00_3592;

												bool_t BgL_seenzf34535zf3_3594;

												BgL_approx4530z00_3589 =
													(BgL_approxz00_bglt) (BgL_arg5336z00_2213);
												BgL_valuezd2approx4531zd2_3590 =
													(BgL_approxz00_bglt) (BgL_arg5337z00_2214);
												BgL_lostzd2stamp4532zd2_3591 =
													(long) CINT(BgL_arg5338z00_2215);
												BgL_owner4533z00_3592 =
													(BgL_variablez00_bglt) (BgL_arg5339z00_2216);
												BgL_seenzf34535zf3_3594 = CBOOL(BgL_arg5341z00_2218);
												{	/* Cfa/cinfo2.scm 63 */
													BgL_makezd2vectorzd2appz00_bglt BgL_new4536z00_3595;

													BgL_new4536z00_3595 =
														((BgL_makezd2vectorzd2appz00_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_makezd2vectorzd2appz00_bgl))));
													{	/* Cfa/cinfo2.scm 63 */
														BgL_makezd2vectorzd2appz00_bglt BgL_res5543z00_3609;

														{	/* Cfa/cinfo2.scm 63 */
															BgL_makezd2vectorzd2appz00_bglt
																BgL_new4558z00_3596;
															BgL_new4558z00_3596 = BgL_new4536z00_3595;
															{	/* Cfa/cinfo2.scm 63 */
																BgL_approxz00_bglt BgL_approx4552z00_3603;

																BgL_approxz00_bglt
																	BgL_valuezd2approx4553zd2_3604;
																long BgL_lostzd2stamp4554zd2_3605;

																BgL_variablez00_bglt BgL_owner4555z00_3606;

																obj_t BgL_stackzd2stamp4556zd2_3607;

																bool_t BgL_seenzf34557zf3_3608;

																BgL_approx4552z00_3603 = BgL_approx4530z00_3589;
																BgL_valuezd2approx4553zd2_3604 =
																	BgL_valuezd2approx4531zd2_3590;
																BgL_lostzd2stamp4554zd2_3605 =
																	BgL_lostzd2stamp4532zd2_3591;
																BgL_owner4555z00_3606 = BgL_owner4533z00_3592;
																BgL_stackzd2stamp4556zd2_3607 =
																	BgL_arg5340z00_2217;
																BgL_seenzf34557zf3_3608 =
																	BgL_seenzf34535zf3_3594;
																((((BgL_makezd2vectorzd2appz00_bglt)
																			CREF(BgL_new4558z00_3596))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4552z00_3603),
																	BUNSPEC);
																((((BgL_makezd2vectorzd2appz00_bglt)
																			CREF(BgL_new4558z00_3596))->
																		BgL_valuezd2approxzd2) =
																	((BgL_approxz00_bglt)
																		BgL_valuezd2approx4553zd2_3604), BUNSPEC);
																((((BgL_makezd2vectorzd2appz00_bglt)
																			CREF(BgL_new4558z00_3596))->
																		BgL_lostzd2stampzd2) =
																	((long) BgL_lostzd2stamp4554zd2_3605),
																	BUNSPEC);
																((((BgL_makezd2vectorzd2appz00_bglt)
																			CREF(BgL_new4558z00_3596))->
																		BgL_ownerz00) =
																	((BgL_variablez00_bglt)
																		BgL_owner4555z00_3606), BUNSPEC);
																((((BgL_makezd2vectorzd2appz00_bglt)
																			CREF(BgL_new4558z00_3596))->
																		BgL_stackzd2stampzd2) =
																	((obj_t) BgL_stackzd2stamp4556zd2_3607),
																	BUNSPEC);
																((((BgL_makezd2vectorzd2appz00_bglt)
																			CREF(BgL_new4558z00_3596))->
																		BgL_seenzf3zf3) =
																	((bool_t) BgL_seenzf34557zf3_3608), BUNSPEC);
																BgL_res5543z00_3609 = BgL_new4558z00_3596;
														}} BgL_res5543z00_3609;
													}
													BgL_res5544z00_3610 = BgL_new4536z00_3595;
											}}
											BgL_arg5335z00_2212 = BgL_res5544z00_3610;
									}}
									{	/* Cfa/cinfo2.scm 63 */
										obj_t BgL_auxz00_6743;

										BgL_objectz00_bglt BgL_auxz00_6741;

										BgL_auxz00_6743 = (obj_t) (BgL_arg5335z00_2212);
										BgL_auxz00_6741 =
											(BgL_objectz00_bglt) (BgL_new4572z00_2210);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_6741, BgL_auxz00_6743);
								}}
								BgL_auxz00_6700 = BgL_new4572z00_2210;
					}}}
					return (obj_t) (BgL_auxz00_6700);
				}
			}
		}
	}



/* object->struct-make-4916 */
	obj_t BGl_objectzd2ze3structzd2makezd24916z31zzcfa_info2z00(obj_t
		BgL_envz00_4333, obj_t BgL_obj4567z00_4334)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 63 */
			{
				BgL_makezd2vectorzd2appz00_bglt BgL_obj4567z00_2184;

				BgL_obj4567z00_2184 =
					(BgL_makezd2vectorzd2appz00_bglt) (BgL_obj4567z00_4334);
				{

					{	/* Cfa/cinfo2.scm 63 */
						obj_t BgL_res4568z00_2187;

						{	/* Cfa/cinfo2.scm 63 */
							obj_t BgL_nextzd2method4915zd2_2202;

							BgL_nextzd2method4915zd2_2202 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4567z00_2184),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_makezd2vectorzd2appz00zzcfa_info2z00);
							if (PROCEDUREP(BgL_nextzd2method4915zd2_2202))
								{	/* Cfa/cinfo2.scm 63 */
									BgL_res4568z00_2187 =
										PROCEDURE_ENTRY(BgL_nextzd2method4915zd2_2202)
										(BgL_nextzd2method4915zd2_2202,
										(obj_t) (BgL_obj4567z00_2184), BEOA);
								}
							else
								{	/* Cfa/cinfo2.scm 63 */
									BgL_res4568z00_2187 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4567z00_2184));
								}
						}
						{	/* Cfa/cinfo2.scm 63 */
							obj_t BgL_aux4569z00_2188;

							{	/* Cfa/cinfo2.scm 63 */
								obj_t BgL_keyz00_3536;

								BgL_keyz00_3536 = CNST_TABLE_REF(((long) 9));
								BgL_aux4569z00_2188 =
									make_struct(BgL_keyz00_3536, (int) (((long) 6)), BUNSPEC);
							}
							{	/* Cfa/cinfo2.scm 63 */
								BgL_approxz00_bglt BgL_arg5321z00_2190;

								{
									obj_t BgL_auxz00_6760;

									{	/* Cfa/cinfo2.scm 63 */
										BgL_objectz00_bglt BgL_auxz00_6761;

										BgL_auxz00_6761 =
											(BgL_objectz00_bglt) (BgL_obj4567z00_2184);
										BgL_auxz00_6760 = BGL_OBJECT_WIDENING(BgL_auxz00_6761);
									}
									BgL_arg5321z00_2190 =
										(((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_auxz00_6760))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo2.scm 63 */
									obj_t BgL_auxz00_6767;

									int BgL_auxz00_6765;

									BgL_auxz00_6767 = (obj_t) (BgL_arg5321z00_2190);
									BgL_auxz00_6765 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4569z00_2188, BgL_auxz00_6765,
										BgL_auxz00_6767);
							}}
							{	/* Cfa/cinfo2.scm 63 */
								BgL_approxz00_bglt BgL_arg5323z00_2192;

								{
									obj_t BgL_auxz00_6770;

									{	/* Cfa/cinfo2.scm 63 */
										BgL_objectz00_bglt BgL_auxz00_6771;

										BgL_auxz00_6771 =
											(BgL_objectz00_bglt) (BgL_obj4567z00_2184);
										BgL_auxz00_6770 = BGL_OBJECT_WIDENING(BgL_auxz00_6771);
									}
									BgL_arg5323z00_2192 =
										(((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_auxz00_6770))->
										BgL_valuezd2approxzd2);
								}
								{	/* Cfa/cinfo2.scm 63 */
									obj_t BgL_auxz00_6777;

									int BgL_auxz00_6775;

									BgL_auxz00_6777 = (obj_t) (BgL_arg5323z00_2192);
									BgL_auxz00_6775 = (int) (((long) 1));
									STRUCT_SET(BgL_aux4569z00_2188, BgL_auxz00_6775,
										BgL_auxz00_6777);
							}}
							{	/* Cfa/cinfo2.scm 63 */
								long BgL_arg5325z00_2194;

								{
									obj_t BgL_auxz00_6780;

									{	/* Cfa/cinfo2.scm 63 */
										BgL_objectz00_bglt BgL_auxz00_6781;

										BgL_auxz00_6781 =
											(BgL_objectz00_bglt) (BgL_obj4567z00_2184);
										BgL_auxz00_6780 = BGL_OBJECT_WIDENING(BgL_auxz00_6781);
									}
									BgL_arg5325z00_2194 =
										(((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_auxz00_6780))->
										BgL_lostzd2stampzd2);
								}
								{	/* Cfa/cinfo2.scm 63 */
									obj_t BgL_auxz00_6787;

									int BgL_auxz00_6785;

									BgL_auxz00_6787 = BINT(BgL_arg5325z00_2194);
									BgL_auxz00_6785 = (int) (((long) 2));
									STRUCT_SET(BgL_aux4569z00_2188, BgL_auxz00_6785,
										BgL_auxz00_6787);
							}}
							{	/* Cfa/cinfo2.scm 63 */
								BgL_variablez00_bglt BgL_arg5327z00_2196;

								{
									obj_t BgL_auxz00_6790;

									{	/* Cfa/cinfo2.scm 63 */
										BgL_objectz00_bglt BgL_auxz00_6791;

										BgL_auxz00_6791 =
											(BgL_objectz00_bglt) (BgL_obj4567z00_2184);
										BgL_auxz00_6790 = BGL_OBJECT_WIDENING(BgL_auxz00_6791);
									}
									BgL_arg5327z00_2196 =
										(((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_auxz00_6790))->
										BgL_ownerz00);
								}
								{	/* Cfa/cinfo2.scm 63 */
									obj_t BgL_auxz00_6797;

									int BgL_auxz00_6795;

									BgL_auxz00_6797 = (obj_t) (BgL_arg5327z00_2196);
									BgL_auxz00_6795 = (int) (((long) 3));
									STRUCT_SET(BgL_aux4569z00_2188, BgL_auxz00_6795,
										BgL_auxz00_6797);
							}}
							{	/* Cfa/cinfo2.scm 63 */
								obj_t BgL_arg5329z00_2198;

								{
									obj_t BgL_auxz00_6800;

									{	/* Cfa/cinfo2.scm 63 */
										BgL_objectz00_bglt BgL_auxz00_6801;

										BgL_auxz00_6801 =
											(BgL_objectz00_bglt) (BgL_obj4567z00_2184);
										BgL_auxz00_6800 = BGL_OBJECT_WIDENING(BgL_auxz00_6801);
									}
									BgL_arg5329z00_2198 =
										(((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_auxz00_6800))->
										BgL_stackzd2stampzd2);
								}
								{	/* Cfa/cinfo2.scm 63 */
									int BgL_auxz00_6805;

									BgL_auxz00_6805 = (int) (((long) 4));
									STRUCT_SET(BgL_aux4569z00_2188, BgL_auxz00_6805,
										BgL_arg5329z00_2198);
							}}
							{	/* Cfa/cinfo2.scm 63 */
								bool_t BgL_arg5331z00_2200;

								{
									obj_t BgL_auxz00_6808;

									{	/* Cfa/cinfo2.scm 63 */
										BgL_objectz00_bglt BgL_auxz00_6809;

										BgL_auxz00_6809 =
											(BgL_objectz00_bglt) (BgL_obj4567z00_2184);
										BgL_auxz00_6808 = BGL_OBJECT_WIDENING(BgL_auxz00_6809);
									}
									BgL_arg5331z00_2200 =
										(((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_auxz00_6808))->
										BgL_seenzf3zf3);
								}
								{	/* Cfa/cinfo2.scm 63 */
									obj_t BgL_auxz00_6815;

									int BgL_auxz00_6813;

									BgL_auxz00_6815 = BBOOL(BgL_arg5331z00_2200);
									BgL_auxz00_6813 = (int) (((long) 5));
									STRUCT_SET(BgL_aux4569z00_2188, BgL_auxz00_6813,
										BgL_auxz00_6815);
							}}
							{	/* Cfa/cinfo2.scm 63 */
								int BgL_auxz00_6818;

								BgL_auxz00_6818 = (int) (((long) 0));
								STRUCT_SET(BgL_res4568z00_2187, BgL_auxz00_6818,
									BgL_aux4569z00_2188);
							}
							{	/* Cfa/cinfo2.scm 63 */
								obj_t BgL_auxz00_6821;

								BgL_auxz00_6821 = STRUCT_KEY(BgL_res4568z00_2187);
								STRUCT_KEY_SET(BgL_aux4569z00_2188, BgL_auxz00_6821);
							}
							{	/* Cfa/cinfo2.scm 63 */
								obj_t BgL_kz00_3571;

								BgL_kz00_3571 = CNST_TABLE_REF(((long) 9));
								STRUCT_KEY_SET(BgL_res4568z00_2187, BgL_kz00_3571);
							}
							return BgL_res4568z00_2187;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4914 */
	obj_t BGl_structzb2objectzd2ze3objec4914z83zzcfa_info2z00(obj_t
		BgL_envz00_4335, obj_t BgL_oz00_4336, obj_t BgL_sz00_4337)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 86 */
			{
				BgL_prezd2makezd2structzd2appzd2_bglt BgL_oz00_2172;

				obj_t BgL_sz00_2173;

				{	/* Cfa/cinfo2.scm 86 */
					BgL_prezd2makezd2structzd2appzd2_bglt BgL_auxz00_6827;

					BgL_oz00_2172 =
						(BgL_prezd2makezd2structzd2appzd2_bglt) (BgL_oz00_4336);
					BgL_sz00_2173 = BgL_sz00_4337;
					{

						{	/* Cfa/cinfo2.scm 86 */
							obj_t BgL_old4626z00_2176;

							obj_t BgL_aux4627z00_2177;

							{	/* Cfa/cinfo2.scm 86 */
								obj_t BgL_nextzd2method4913zd2_2182;

								BgL_nextzd2method4913zd2_2182 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2172),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00);
								if (PROCEDUREP(BgL_nextzd2method4913zd2_2182))
									{	/* Cfa/cinfo2.scm 86 */
										BgL_old4626z00_2176 =
											PROCEDURE_ENTRY(BgL_nextzd2method4913zd2_2182)
											(BgL_nextzd2method4913zd2_2182, (obj_t) (BgL_oz00_2172),
											BgL_sz00_2173, BEOA);
									}
								else
									{	/* Cfa/cinfo2.scm 86 */
										BgL_old4626z00_2176 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2172), BgL_sz00_2173));
									}
							}
							BgL_aux4627z00_2177 =
								STRUCT_REF(BgL_sz00_2173, (int) (((long) 0)));
							{	/* Cfa/cinfo2.scm 86 */
								BgL_prezd2makezd2structzd2appzd2_bglt BgL_new4628z00_2178;

								BgL_new4628z00_2178 =
									((BgL_prezd2makezd2structzd2appzd2_bglt)
									(BgL_old4626z00_2176));
								BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
									(BgL_new4628z00_2178),
									BGl_classzd2numzd2zz__objectz00
									(BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00));
								{	/* Cfa/cinfo2.scm 86 */
									BgL_prezd2makezd2structzd2appzd2_bglt BgL_arg5317z00_2180;

									{	/* Cfa/cinfo2.scm 86 */
										obj_t BgL_arg5318z00_2181;

										BgL_arg5318z00_2181 =
											STRUCT_REF(BgL_aux4627z00_2177, (int) (((long) 0)));
										{	/* Cfa/cinfo2.scm 86 */
											BgL_prezd2makezd2structzd2appzd2_bglt BgL_res5541z00_3534;

											{	/* Cfa/cinfo2.scm 86 */
												BgL_variablez00_bglt BgL_owner4606z00_3528;

												BgL_owner4606z00_3528 =
													(BgL_variablez00_bglt) (BgL_arg5318z00_2181);
												{	/* Cfa/cinfo2.scm 86 */
													BgL_prezd2makezd2structzd2appzd2_bglt
														BgL_new4607z00_3529;
													BgL_new4607z00_3529 =
														((BgL_prezd2makezd2structzd2appzd2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_prezd2makezd2structzd2appzd2_bgl))));
													{	/* Cfa/cinfo2.scm 86 */
														BgL_prezd2makezd2structzd2appzd2_bglt
															BgL_res5540z00_3533;
														{	/* Cfa/cinfo2.scm 86 */
															BgL_prezd2makezd2structzd2appzd2_bglt
																BgL_new4619z00_3530;
															BgL_new4619z00_3530 = BgL_new4607z00_3529;
															{	/* Cfa/cinfo2.scm 86 */
																BgL_variablez00_bglt BgL_owner4618z00_3532;

																BgL_owner4618z00_3532 = BgL_owner4606z00_3528;
																((((BgL_prezd2makezd2structzd2appzd2_bglt)
																			CREF(BgL_new4619z00_3530))->
																		BgL_ownerz00) =
																	((BgL_variablez00_bglt)
																		BgL_owner4618z00_3532), BUNSPEC);
																BgL_res5540z00_3533 = BgL_new4619z00_3530;
														}} BgL_res5540z00_3533;
													}
													BgL_res5541z00_3534 = BgL_new4607z00_3529;
											}}
											BgL_arg5317z00_2180 = BgL_res5541z00_3534;
									}}
									{	/* Cfa/cinfo2.scm 86 */
										obj_t BgL_auxz00_6851;

										BgL_objectz00_bglt BgL_auxz00_6849;

										BgL_auxz00_6851 = (obj_t) (BgL_arg5317z00_2180);
										BgL_auxz00_6849 =
											(BgL_objectz00_bglt) (BgL_new4628z00_2178);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_6849, BgL_auxz00_6851);
								}}
								BgL_auxz00_6827 = BgL_new4628z00_2178;
					}}}
					return (obj_t) (BgL_auxz00_6827);
				}
			}
		}
	}



/* object->struct-pre-m4911 */
	obj_t BGl_objectzd2ze3structzd2prezd2m4911z31zzcfa_info2z00(obj_t
		BgL_envz00_4338, obj_t BgL_obj4623z00_4339)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 86 */
			{
				BgL_prezd2makezd2structzd2appzd2_bglt BgL_obj4623z00_2162;

				BgL_obj4623z00_2162 =
					(BgL_prezd2makezd2structzd2appzd2_bglt) (BgL_obj4623z00_4339);
				{

					{	/* Cfa/cinfo2.scm 86 */
						obj_t BgL_res4624z00_2165;

						{	/* Cfa/cinfo2.scm 86 */
							obj_t BgL_nextzd2method4910zd2_2170;

							BgL_nextzd2method4910zd2_2170 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4623z00_2162),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00);
							if (PROCEDUREP(BgL_nextzd2method4910zd2_2170))
								{	/* Cfa/cinfo2.scm 86 */
									BgL_res4624z00_2165 =
										PROCEDURE_ENTRY(BgL_nextzd2method4910zd2_2170)
										(BgL_nextzd2method4910zd2_2170,
										(obj_t) (BgL_obj4623z00_2162), BEOA);
								}
							else
								{	/* Cfa/cinfo2.scm 86 */
									BgL_res4624z00_2165 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4623z00_2162));
								}
						}
						{	/* Cfa/cinfo2.scm 86 */
							obj_t BgL_aux4625z00_2166;

							{	/* Cfa/cinfo2.scm 86 */
								obj_t BgL_keyz00_3505;

								BgL_keyz00_3505 = CNST_TABLE_REF(((long) 10));
								BgL_aux4625z00_2166 =
									make_struct(BgL_keyz00_3505, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo2.scm 86 */
								BgL_variablez00_bglt BgL_arg5313z00_2168;

								{
									obj_t BgL_auxz00_6868;

									{	/* Cfa/cinfo2.scm 86 */
										BgL_objectz00_bglt BgL_auxz00_6869;

										BgL_auxz00_6869 =
											(BgL_objectz00_bglt) (BgL_obj4623z00_2162);
										BgL_auxz00_6868 = BGL_OBJECT_WIDENING(BgL_auxz00_6869);
									}
									BgL_arg5313z00_2168 =
										(((BgL_prezd2makezd2structzd2appzd2_bglt)
											CREF(BgL_auxz00_6868))->BgL_ownerz00);
								}
								{	/* Cfa/cinfo2.scm 86 */
									obj_t BgL_auxz00_6875;

									int BgL_auxz00_6873;

									BgL_auxz00_6875 = (obj_t) (BgL_arg5313z00_2168);
									BgL_auxz00_6873 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4625z00_2166, BgL_auxz00_6873,
										BgL_auxz00_6875);
							}}
							{	/* Cfa/cinfo2.scm 86 */
								int BgL_auxz00_6878;

								BgL_auxz00_6878 = (int) (((long) 0));
								STRUCT_SET(BgL_res4624z00_2165, BgL_auxz00_6878,
									BgL_aux4625z00_2166);
							}
							{	/* Cfa/cinfo2.scm 86 */
								obj_t BgL_auxz00_6881;

								BgL_auxz00_6881 = STRUCT_KEY(BgL_res4624z00_2165);
								STRUCT_KEY_SET(BgL_aux4625z00_2166, BgL_auxz00_6881);
							}
							{	/* Cfa/cinfo2.scm 86 */
								obj_t BgL_kz00_3520;

								BgL_kz00_3520 = CNST_TABLE_REF(((long) 10));
								STRUCT_KEY_SET(BgL_res4624z00_2165, BgL_kz00_3520);
							}
							return BgL_res4624z00_2165;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4909 */
	obj_t BGl_structzb2objectzd2ze3objec4909z83zzcfa_info2z00(obj_t
		BgL_envz00_4340, obj_t BgL_oz00_4341, obj_t BgL_sz00_4342)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 89 */
			{
				BgL_prezd2structzd2refzd2appzd2_bglt BgL_oz00_2151;

				obj_t BgL_sz00_2152;

				{	/* Cfa/cinfo2.scm 89 */
					BgL_prezd2structzd2refzd2appzd2_bglt BgL_auxz00_6887;

					BgL_oz00_2151 =
						(BgL_prezd2structzd2refzd2appzd2_bglt) (BgL_oz00_4341);
					BgL_sz00_2152 = BgL_sz00_4342;
					{

						{	/* Cfa/cinfo2.scm 89 */
							obj_t BgL_old4664z00_2155;

							{	/* Cfa/cinfo2.scm 89 */
								obj_t BgL_nextzd2method4908zd2_2160;

								BgL_nextzd2method4908zd2_2160 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2151),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00);
								if (PROCEDUREP(BgL_nextzd2method4908zd2_2160))
									{	/* Cfa/cinfo2.scm 89 */
										BgL_old4664z00_2155 =
											PROCEDURE_ENTRY(BgL_nextzd2method4908zd2_2160)
											(BgL_nextzd2method4908zd2_2160, (obj_t) (BgL_oz00_2151),
											BgL_sz00_2152, BEOA);
									}
								else
									{	/* Cfa/cinfo2.scm 89 */
										BgL_old4664z00_2155 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2151), BgL_sz00_2152));
									}
							}
							{	/* Cfa/cinfo2.scm 89 */
								BgL_prezd2structzd2refzd2appzd2_bglt BgL_new4666z00_2157;

								BgL_new4666z00_2157 =
									((BgL_prezd2structzd2refzd2appzd2_bglt)
									(BgL_old4664z00_2155));
								BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
									(BgL_new4666z00_2157),
									BGl_classzd2numzd2zz__objectz00
									(BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00));
								{	/* Cfa/cinfo2.scm 89 */
									BgL_prezd2structzd2refzd2appzd2_bglt BgL_arg5310z00_2159;

									BgL_arg5310z00_2159 =
										BGl_wideningzd2prezd2structzd2refzd2appz00zzcfa_info2z00();
									{	/* Cfa/cinfo2.scm 89 */
										obj_t BgL_auxz00_6905;

										BgL_objectz00_bglt BgL_auxz00_6903;

										BgL_auxz00_6905 = (obj_t) (BgL_arg5310z00_2159);
										BgL_auxz00_6903 =
											(BgL_objectz00_bglt) (BgL_new4666z00_2157);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_6903, BgL_auxz00_6905);
									}
								}
								BgL_auxz00_6887 = BgL_new4666z00_2157;
							}
						}
					}
					return (obj_t) (BgL_auxz00_6887);
				}
			}
		}
	}



/* object->struct-pre-s4907 */
	obj_t BGl_objectzd2ze3structzd2prezd2s4907z31zzcfa_info2z00(obj_t
		BgL_envz00_4343, obj_t BgL_obj4661z00_4344)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 89 */
			{
				BgL_prezd2structzd2refzd2appzd2_bglt BgL_obj4661z00_2143;

				BgL_obj4661z00_2143 =
					(BgL_prezd2structzd2refzd2appzd2_bglt) (BgL_obj4661z00_4344);
				{

					{	/* Cfa/cinfo2.scm 89 */
						obj_t BgL_res4662z00_2146;

						{	/* Cfa/cinfo2.scm 89 */
							obj_t BgL_nextzd2method4906zd2_2149;

							BgL_nextzd2method4906zd2_2149 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4661z00_2143),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00);
							if (PROCEDUREP(BgL_nextzd2method4906zd2_2149))
								{	/* Cfa/cinfo2.scm 89 */
									BgL_res4662z00_2146 =
										PROCEDURE_ENTRY(BgL_nextzd2method4906zd2_2149)
										(BgL_nextzd2method4906zd2_2149,
										(obj_t) (BgL_obj4661z00_2143), BEOA);
								}
							else
								{	/* Cfa/cinfo2.scm 89 */
									BgL_res4662z00_2146 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4661z00_2143));
								}
						}
						{	/* Cfa/cinfo2.scm 89 */
							obj_t BgL_aux4663z00_2147;

							{	/* Cfa/cinfo2.scm 89 */
								obj_t BgL_keyz00_3487;

								BgL_keyz00_3487 = CNST_TABLE_REF(((long) 11));
								BgL_aux4663z00_2147 =
									make_struct(BgL_keyz00_3487, (int) (((long) 0)), BUNSPEC);
							}
							{	/* Cfa/cinfo2.scm 89 */
								int BgL_auxz00_6922;

								BgL_auxz00_6922 = (int) (((long) 0));
								STRUCT_SET(BgL_res4662z00_2146, BgL_auxz00_6922,
									BgL_aux4663z00_2147);
							}
							{	/* Cfa/cinfo2.scm 89 */
								obj_t BgL_auxz00_6925;

								BgL_auxz00_6925 = STRUCT_KEY(BgL_res4662z00_2146);
								STRUCT_KEY_SET(BgL_aux4663z00_2147, BgL_auxz00_6925);
							}
							{	/* Cfa/cinfo2.scm 89 */
								obj_t BgL_kz00_3498;

								BgL_kz00_3498 = CNST_TABLE_REF(((long) 11));
								STRUCT_KEY_SET(BgL_res4662z00_2146, BgL_kz00_3498);
							}
							return BgL_res4662z00_2146;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4905 */
	obj_t BGl_structzb2objectzd2ze3objec4905z83zzcfa_info2z00(obj_t
		BgL_envz00_4345, obj_t BgL_oz00_4346, obj_t BgL_sz00_4347)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 90 */
			{
				BgL_prezd2structzd2setz12zd2appzc0_bglt BgL_oz00_2132;

				obj_t BgL_sz00_2133;

				{	/* Cfa/cinfo2.scm 90 */
					BgL_prezd2structzd2setz12zd2appzc0_bglt BgL_auxz00_6931;

					BgL_oz00_2132 =
						(BgL_prezd2structzd2setz12zd2appzc0_bglt) (BgL_oz00_4346);
					BgL_sz00_2133 = BgL_sz00_4347;
					{

						{	/* Cfa/cinfo2.scm 90 */
							obj_t BgL_old4701z00_2136;

							{	/* Cfa/cinfo2.scm 90 */
								obj_t BgL_nextzd2method4904zd2_2141;

								BgL_nextzd2method4904zd2_2141 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2132),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00);
								if (PROCEDUREP(BgL_nextzd2method4904zd2_2141))
									{	/* Cfa/cinfo2.scm 90 */
										BgL_old4701z00_2136 =
											PROCEDURE_ENTRY(BgL_nextzd2method4904zd2_2141)
											(BgL_nextzd2method4904zd2_2141, (obj_t) (BgL_oz00_2132),
											BgL_sz00_2133, BEOA);
									}
								else
									{	/* Cfa/cinfo2.scm 90 */
										BgL_old4701z00_2136 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2132), BgL_sz00_2133));
									}
							}
							{	/* Cfa/cinfo2.scm 90 */
								BgL_prezd2structzd2setz12zd2appzc0_bglt BgL_new4703z00_2138;

								BgL_new4703z00_2138 =
									((BgL_prezd2structzd2setz12zd2appzc0_bglt)
									(BgL_old4701z00_2136));
								BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
									(BgL_new4703z00_2138),
									BGl_classzd2numzd2zz__objectz00
									(BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00));
								{	/* Cfa/cinfo2.scm 90 */
									BgL_prezd2structzd2setz12zd2appzc0_bglt BgL_arg5305z00_2140;

									BgL_arg5305z00_2140 =
										BGl_wideningzd2prezd2structzd2setz12zd2appz12zzcfa_info2z00
										();
									{	/* Cfa/cinfo2.scm 90 */
										obj_t BgL_auxz00_6949;

										BgL_objectz00_bglt BgL_auxz00_6947;

										BgL_auxz00_6949 = (obj_t) (BgL_arg5305z00_2140);
										BgL_auxz00_6947 =
											(BgL_objectz00_bglt) (BgL_new4703z00_2138);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_6947, BgL_auxz00_6949);
									}
								}
								BgL_auxz00_6931 = BgL_new4703z00_2138;
							}
						}
					}
					return (obj_t) (BgL_auxz00_6931);
				}
			}
		}
	}



/* object->struct-pre-s4903 */
	obj_t BGl_objectzd2ze3structzd2prezd2s4903z31zzcfa_info2z00(obj_t
		BgL_envz00_4348, obj_t BgL_obj4698z00_4349)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 90 */
			{
				BgL_prezd2structzd2setz12zd2appzc0_bglt BgL_obj4698z00_2124;

				BgL_obj4698z00_2124 =
					(BgL_prezd2structzd2setz12zd2appzc0_bglt) (BgL_obj4698z00_4349);
				{

					{	/* Cfa/cinfo2.scm 90 */
						obj_t BgL_res4699z00_2127;

						{	/* Cfa/cinfo2.scm 90 */
							obj_t BgL_nextzd2method4902zd2_2130;

							BgL_nextzd2method4902zd2_2130 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4698z00_2124),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00);
							if (PROCEDUREP(BgL_nextzd2method4902zd2_2130))
								{	/* Cfa/cinfo2.scm 90 */
									BgL_res4699z00_2127 =
										PROCEDURE_ENTRY(BgL_nextzd2method4902zd2_2130)
										(BgL_nextzd2method4902zd2_2130,
										(obj_t) (BgL_obj4698z00_2124), BEOA);
								}
							else
								{	/* Cfa/cinfo2.scm 90 */
									BgL_res4699z00_2127 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4698z00_2124));
								}
						}
						{	/* Cfa/cinfo2.scm 90 */
							obj_t BgL_aux4700z00_2128;

							{	/* Cfa/cinfo2.scm 90 */
								obj_t BgL_keyz00_3469;

								BgL_keyz00_3469 = CNST_TABLE_REF(((long) 12));
								BgL_aux4700z00_2128 =
									make_struct(BgL_keyz00_3469, (int) (((long) 0)), BUNSPEC);
							}
							{	/* Cfa/cinfo2.scm 90 */
								int BgL_auxz00_6966;

								BgL_auxz00_6966 = (int) (((long) 0));
								STRUCT_SET(BgL_res4699z00_2127, BgL_auxz00_6966,
									BgL_aux4700z00_2128);
							}
							{	/* Cfa/cinfo2.scm 90 */
								obj_t BgL_auxz00_6969;

								BgL_auxz00_6969 = STRUCT_KEY(BgL_res4699z00_2127);
								STRUCT_KEY_SET(BgL_aux4700z00_2128, BgL_auxz00_6969);
							}
							{	/* Cfa/cinfo2.scm 90 */
								obj_t BgL_kz00_3480;

								BgL_kz00_3480 = CNST_TABLE_REF(((long) 12));
								STRUCT_KEY_SET(BgL_res4699z00_2127, BgL_kz00_3480);
							}
							return BgL_res4699z00_2127;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4901 */
	obj_t BGl_structzb2objectzd2ze3objec4901z83zzcfa_info2z00(obj_t
		BgL_envz00_4350, obj_t BgL_oz00_4351, obj_t BgL_sz00_4352)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 92 */
			{
				BgL_makezd2structzd2appz00_bglt BgL_oz00_2108;

				obj_t BgL_sz00_2109;

				{	/* Cfa/cinfo2.scm 92 */
					BgL_makezd2structzd2appz00_bglt BgL_auxz00_6975;

					BgL_oz00_2108 = (BgL_makezd2structzd2appz00_bglt) (BgL_oz00_4351);
					BgL_sz00_2109 = BgL_sz00_4352;
					{

						{	/* Cfa/cinfo2.scm 92 */
							obj_t BgL_old4758z00_2112;

							obj_t BgL_aux4759z00_2113;

							{	/* Cfa/cinfo2.scm 92 */
								obj_t BgL_nextzd2method4900zd2_2122;

								BgL_nextzd2method4900zd2_2122 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2108),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_makezd2structzd2appz00zzcfa_info2z00);
								if (PROCEDUREP(BgL_nextzd2method4900zd2_2122))
									{	/* Cfa/cinfo2.scm 92 */
										BgL_old4758z00_2112 =
											PROCEDURE_ENTRY(BgL_nextzd2method4900zd2_2122)
											(BgL_nextzd2method4900zd2_2122, (obj_t) (BgL_oz00_2108),
											BgL_sz00_2109, BEOA);
									}
								else
									{	/* Cfa/cinfo2.scm 92 */
										BgL_old4758z00_2112 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2108), BgL_sz00_2109));
									}
							}
							BgL_aux4759z00_2113 =
								STRUCT_REF(BgL_sz00_2109, (int) (((long) 0)));
							{	/* Cfa/cinfo2.scm 92 */
								BgL_makezd2structzd2appz00_bglt BgL_new4760z00_2114;

								BgL_new4760z00_2114 =
									((BgL_makezd2structzd2appz00_bglt) (BgL_old4758z00_2112));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4760z00_2114),
									BGl_classzd2numzd2zz__objectz00
									(BGl_makezd2structzd2appz00zzcfa_info2z00));
								{	/* Cfa/cinfo2.scm 92 */
									BgL_makezd2structzd2appz00_bglt BgL_arg5295z00_2116;

									{	/* Cfa/cinfo2.scm 92 */
										obj_t BgL_arg5296z00_2117;

										obj_t BgL_arg5297z00_2118;

										obj_t BgL_arg5298z00_2119;

										obj_t BgL_arg5299z00_2120;

										obj_t BgL_arg5300z00_2121;

										BgL_arg5296z00_2117 =
											STRUCT_REF(BgL_aux4759z00_2113, (int) (((long) 0)));
										BgL_arg5297z00_2118 =
											STRUCT_REF(BgL_aux4759z00_2113, (int) (((long) 1)));
										BgL_arg5298z00_2119 =
											STRUCT_REF(BgL_aux4759z00_2113, (int) (((long) 2)));
										BgL_arg5299z00_2120 =
											STRUCT_REF(BgL_aux4759z00_2113, (int) (((long) 3)));
										BgL_arg5300z00_2121 =
											STRUCT_REF(BgL_aux4759z00_2113, (int) (((long) 4)));
										{	/* Cfa/cinfo2.scm 92 */
											BgL_makezd2structzd2appz00_bglt BgL_res5536z00_3467;

											{	/* Cfa/cinfo2.scm 92 */
												BgL_approxz00_bglt BgL_approx4722z00_3449;

												BgL_approxz00_bglt BgL_valuezd2approx4723zd2_3450;

												long BgL_lostzd2stamp4724zd2_3451;

												BgL_variablez00_bglt BgL_owner4725z00_3452;

												BgL_approx4722z00_3449 =
													(BgL_approxz00_bglt) (BgL_arg5296z00_2117);
												BgL_valuezd2approx4723zd2_3450 =
													(BgL_approxz00_bglt) (BgL_arg5297z00_2118);
												BgL_lostzd2stamp4724zd2_3451 =
													(long) CINT(BgL_arg5298z00_2119);
												BgL_owner4725z00_3452 =
													(BgL_variablez00_bglt) (BgL_arg5299z00_2120);
												{	/* Cfa/cinfo2.scm 92 */
													BgL_makezd2structzd2appz00_bglt BgL_new4727z00_3454;

													BgL_new4727z00_3454 =
														((BgL_makezd2structzd2appz00_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_makezd2structzd2appz00_bgl))));
													{	/* Cfa/cinfo2.scm 92 */
														BgL_makezd2structzd2appz00_bglt BgL_res5535z00_3466;

														{	/* Cfa/cinfo2.scm 92 */
															BgL_makezd2structzd2appz00_bglt
																BgL_new4747z00_3455;
															BgL_new4747z00_3455 = BgL_new4727z00_3454;
															{	/* Cfa/cinfo2.scm 92 */
																BgL_approxz00_bglt BgL_approx4742z00_3461;

																BgL_approxz00_bglt
																	BgL_valuezd2approx4743zd2_3462;
																long BgL_lostzd2stamp4744zd2_3463;

																BgL_variablez00_bglt BgL_owner4745z00_3464;

																obj_t BgL_stackzd2stamp4746zd2_3465;

																BgL_approx4742z00_3461 = BgL_approx4722z00_3449;
																BgL_valuezd2approx4743zd2_3462 =
																	BgL_valuezd2approx4723zd2_3450;
																BgL_lostzd2stamp4744zd2_3463 =
																	BgL_lostzd2stamp4724zd2_3451;
																BgL_owner4745z00_3464 = BgL_owner4725z00_3452;
																BgL_stackzd2stamp4746zd2_3465 =
																	BgL_arg5300z00_2121;
																((((BgL_makezd2structzd2appz00_bglt)
																			CREF(BgL_new4747z00_3455))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4742z00_3461),
																	BUNSPEC);
																((((BgL_makezd2structzd2appz00_bglt)
																			CREF(BgL_new4747z00_3455))->
																		BgL_valuezd2approxzd2) =
																	((BgL_approxz00_bglt)
																		BgL_valuezd2approx4743zd2_3462), BUNSPEC);
																((((BgL_makezd2structzd2appz00_bglt)
																			CREF(BgL_new4747z00_3455))->
																		BgL_lostzd2stampzd2) =
																	((long) BgL_lostzd2stamp4744zd2_3463),
																	BUNSPEC);
																((((BgL_makezd2structzd2appz00_bglt)
																			CREF(BgL_new4747z00_3455))->
																		BgL_ownerz00) =
																	((BgL_variablez00_bglt)
																		BgL_owner4745z00_3464), BUNSPEC);
																((((BgL_makezd2structzd2appz00_bglt)
																			CREF(BgL_new4747z00_3455))->
																		BgL_stackzd2stampzd2) =
																	((obj_t) BgL_stackzd2stamp4746zd2_3465),
																	BUNSPEC);
																BgL_res5535z00_3466 = BgL_new4747z00_3455;
														}} BgL_res5535z00_3466;
													}
													BgL_res5536z00_3467 = BgL_new4727z00_3454;
											}}
											BgL_arg5295z00_2116 = BgL_res5536z00_3467;
									}}
									{	/* Cfa/cinfo2.scm 92 */
										obj_t BgL_auxz00_7014;

										BgL_objectz00_bglt BgL_auxz00_7012;

										BgL_auxz00_7014 = (obj_t) (BgL_arg5295z00_2116);
										BgL_auxz00_7012 =
											(BgL_objectz00_bglt) (BgL_new4760z00_2114);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_7012, BgL_auxz00_7014);
								}}
								BgL_auxz00_6975 = BgL_new4760z00_2114;
					}}}
					return (obj_t) (BgL_auxz00_6975);
				}
			}
		}
	}



/* object->struct-make-4899 */
	obj_t BGl_objectzd2ze3structzd2makezd24899z31zzcfa_info2z00(obj_t
		BgL_envz00_4353, obj_t BgL_obj4755z00_4354)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 92 */
			{
				BgL_makezd2structzd2appz00_bglt BgL_obj4755z00_2090;

				BgL_obj4755z00_2090 =
					(BgL_makezd2structzd2appz00_bglt) (BgL_obj4755z00_4354);
				{

					{	/* Cfa/cinfo2.scm 92 */
						obj_t BgL_res4756z00_2093;

						{	/* Cfa/cinfo2.scm 92 */
							obj_t BgL_nextzd2method4898zd2_2106;

							BgL_nextzd2method4898zd2_2106 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4755z00_2090),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_makezd2structzd2appz00zzcfa_info2z00);
							if (PROCEDUREP(BgL_nextzd2method4898zd2_2106))
								{	/* Cfa/cinfo2.scm 92 */
									BgL_res4756z00_2093 =
										PROCEDURE_ENTRY(BgL_nextzd2method4898zd2_2106)
										(BgL_nextzd2method4898zd2_2106,
										(obj_t) (BgL_obj4755z00_2090), BEOA);
								}
							else
								{	/* Cfa/cinfo2.scm 92 */
									BgL_res4756z00_2093 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4755z00_2090));
								}
						}
						{	/* Cfa/cinfo2.scm 92 */
							obj_t BgL_aux4757z00_2094;

							{	/* Cfa/cinfo2.scm 92 */
								obj_t BgL_keyz00_3402;

								BgL_keyz00_3402 = CNST_TABLE_REF(((long) 13));
								BgL_aux4757z00_2094 =
									make_struct(BgL_keyz00_3402, (int) (((long) 5)), BUNSPEC);
							}
							{	/* Cfa/cinfo2.scm 92 */
								BgL_approxz00_bglt BgL_arg5283z00_2096;

								{
									obj_t BgL_auxz00_7031;

									{	/* Cfa/cinfo2.scm 92 */
										BgL_objectz00_bglt BgL_auxz00_7032;

										BgL_auxz00_7032 =
											(BgL_objectz00_bglt) (BgL_obj4755z00_2090);
										BgL_auxz00_7031 = BGL_OBJECT_WIDENING(BgL_auxz00_7032);
									}
									BgL_arg5283z00_2096 =
										(((BgL_makezd2structzd2appz00_bglt) CREF(BgL_auxz00_7031))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo2.scm 92 */
									obj_t BgL_auxz00_7038;

									int BgL_auxz00_7036;

									BgL_auxz00_7038 = (obj_t) (BgL_arg5283z00_2096);
									BgL_auxz00_7036 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4757z00_2094, BgL_auxz00_7036,
										BgL_auxz00_7038);
							}}
							{	/* Cfa/cinfo2.scm 92 */
								BgL_approxz00_bglt BgL_arg5285z00_2098;

								{
									obj_t BgL_auxz00_7041;

									{	/* Cfa/cinfo2.scm 92 */
										BgL_objectz00_bglt BgL_auxz00_7042;

										BgL_auxz00_7042 =
											(BgL_objectz00_bglt) (BgL_obj4755z00_2090);
										BgL_auxz00_7041 = BGL_OBJECT_WIDENING(BgL_auxz00_7042);
									}
									BgL_arg5285z00_2098 =
										(((BgL_makezd2structzd2appz00_bglt) CREF(BgL_auxz00_7041))->
										BgL_valuezd2approxzd2);
								}
								{	/* Cfa/cinfo2.scm 92 */
									obj_t BgL_auxz00_7048;

									int BgL_auxz00_7046;

									BgL_auxz00_7048 = (obj_t) (BgL_arg5285z00_2098);
									BgL_auxz00_7046 = (int) (((long) 1));
									STRUCT_SET(BgL_aux4757z00_2094, BgL_auxz00_7046,
										BgL_auxz00_7048);
							}}
							{	/* Cfa/cinfo2.scm 92 */
								long BgL_arg5287z00_2100;

								{
									obj_t BgL_auxz00_7051;

									{	/* Cfa/cinfo2.scm 92 */
										BgL_objectz00_bglt BgL_auxz00_7052;

										BgL_auxz00_7052 =
											(BgL_objectz00_bglt) (BgL_obj4755z00_2090);
										BgL_auxz00_7051 = BGL_OBJECT_WIDENING(BgL_auxz00_7052);
									}
									BgL_arg5287z00_2100 =
										(((BgL_makezd2structzd2appz00_bglt) CREF(BgL_auxz00_7051))->
										BgL_lostzd2stampzd2);
								}
								{	/* Cfa/cinfo2.scm 92 */
									obj_t BgL_auxz00_7058;

									int BgL_auxz00_7056;

									BgL_auxz00_7058 = BINT(BgL_arg5287z00_2100);
									BgL_auxz00_7056 = (int) (((long) 2));
									STRUCT_SET(BgL_aux4757z00_2094, BgL_auxz00_7056,
										BgL_auxz00_7058);
							}}
							{	/* Cfa/cinfo2.scm 92 */
								BgL_variablez00_bglt BgL_arg5289z00_2102;

								{
									obj_t BgL_auxz00_7061;

									{	/* Cfa/cinfo2.scm 92 */
										BgL_objectz00_bglt BgL_auxz00_7062;

										BgL_auxz00_7062 =
											(BgL_objectz00_bglt) (BgL_obj4755z00_2090);
										BgL_auxz00_7061 = BGL_OBJECT_WIDENING(BgL_auxz00_7062);
									}
									BgL_arg5289z00_2102 =
										(((BgL_makezd2structzd2appz00_bglt) CREF(BgL_auxz00_7061))->
										BgL_ownerz00);
								}
								{	/* Cfa/cinfo2.scm 92 */
									obj_t BgL_auxz00_7068;

									int BgL_auxz00_7066;

									BgL_auxz00_7068 = (obj_t) (BgL_arg5289z00_2102);
									BgL_auxz00_7066 = (int) (((long) 3));
									STRUCT_SET(BgL_aux4757z00_2094, BgL_auxz00_7066,
										BgL_auxz00_7068);
							}}
							{	/* Cfa/cinfo2.scm 92 */
								obj_t BgL_arg5291z00_2104;

								{
									obj_t BgL_auxz00_7071;

									{	/* Cfa/cinfo2.scm 92 */
										BgL_objectz00_bglt BgL_auxz00_7072;

										BgL_auxz00_7072 =
											(BgL_objectz00_bglt) (BgL_obj4755z00_2090);
										BgL_auxz00_7071 = BGL_OBJECT_WIDENING(BgL_auxz00_7072);
									}
									BgL_arg5291z00_2104 =
										(((BgL_makezd2structzd2appz00_bglt) CREF(BgL_auxz00_7071))->
										BgL_stackzd2stampzd2);
								}
								{	/* Cfa/cinfo2.scm 92 */
									int BgL_auxz00_7076;

									BgL_auxz00_7076 = (int) (((long) 4));
									STRUCT_SET(BgL_aux4757z00_2094, BgL_auxz00_7076,
										BgL_arg5291z00_2104);
							}}
							{	/* Cfa/cinfo2.scm 92 */
								int BgL_auxz00_7079;

								BgL_auxz00_7079 = (int) (((long) 0));
								STRUCT_SET(BgL_res4756z00_2093, BgL_auxz00_7079,
									BgL_aux4757z00_2094);
							}
							{	/* Cfa/cinfo2.scm 92 */
								obj_t BgL_auxz00_7082;

								BgL_auxz00_7082 = STRUCT_KEY(BgL_res4756z00_2093);
								STRUCT_KEY_SET(BgL_aux4757z00_2094, BgL_auxz00_7082);
							}
							{	/* Cfa/cinfo2.scm 92 */
								obj_t BgL_kz00_3433;

								BgL_kz00_3433 = CNST_TABLE_REF(((long) 13));
								STRUCT_KEY_SET(BgL_res4756z00_2093, BgL_kz00_3433);
							}
							return BgL_res4756z00_2093;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4897 */
	obj_t BGl_structzb2objectzd2ze3objec4897z83zzcfa_info2z00(obj_t
		BgL_envz00_4355, obj_t BgL_oz00_4356, obj_t BgL_sz00_4357)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 104 */
			{
				BgL_structzd2refzd2appz00_bglt BgL_oz00_2078;

				obj_t BgL_sz00_2079;

				{	/* Cfa/cinfo2.scm 104 */
					BgL_structzd2refzd2appz00_bglt BgL_auxz00_7088;

					BgL_oz00_2078 = (BgL_structzd2refzd2appz00_bglt) (BgL_oz00_4356);
					BgL_sz00_2079 = BgL_sz00_4357;
					{

						{	/* Cfa/cinfo2.scm 104 */
							obj_t BgL_old4811z00_2082;

							obj_t BgL_aux4812z00_2083;

							{	/* Cfa/cinfo2.scm 104 */
								obj_t BgL_nextzd2method4896zd2_2088;

								BgL_nextzd2method4896zd2_2088 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2078),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_structzd2refzd2appz00zzcfa_info2z00);
								if (PROCEDUREP(BgL_nextzd2method4896zd2_2088))
									{	/* Cfa/cinfo2.scm 104 */
										BgL_old4811z00_2082 =
											PROCEDURE_ENTRY(BgL_nextzd2method4896zd2_2088)
											(BgL_nextzd2method4896zd2_2088, (obj_t) (BgL_oz00_2078),
											BgL_sz00_2079, BEOA);
									}
								else
									{	/* Cfa/cinfo2.scm 104 */
										BgL_old4811z00_2082 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2078), BgL_sz00_2079));
									}
							}
							BgL_aux4812z00_2083 =
								STRUCT_REF(BgL_sz00_2079, (int) (((long) 0)));
							{	/* Cfa/cinfo2.scm 104 */
								BgL_structzd2refzd2appz00_bglt BgL_new4813z00_2084;

								BgL_new4813z00_2084 =
									((BgL_structzd2refzd2appz00_bglt) (BgL_old4811z00_2082));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4813z00_2084),
									BGl_classzd2numzd2zz__objectz00
									(BGl_structzd2refzd2appz00zzcfa_info2z00));
								{	/* Cfa/cinfo2.scm 104 */
									BgL_structzd2refzd2appz00_bglt BgL_arg5279z00_2086;

									{	/* Cfa/cinfo2.scm 104 */
										obj_t BgL_arg5280z00_2087;

										BgL_arg5280z00_2087 =
											STRUCT_REF(BgL_aux4812z00_2083, (int) (((long) 0)));
										{	/* Cfa/cinfo2.scm 104 */
											BgL_structzd2refzd2appz00_bglt BgL_res5533z00_3400;

											{	/* Cfa/cinfo2.scm 104 */
												BgL_approxz00_bglt BgL_approx4791z00_3394;

												BgL_approx4791z00_3394 =
													(BgL_approxz00_bglt) (BgL_arg5280z00_2087);
												{	/* Cfa/cinfo2.scm 104 */
													BgL_structzd2refzd2appz00_bglt BgL_new4792z00_3395;

													BgL_new4792z00_3395 =
														((BgL_structzd2refzd2appz00_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_structzd2refzd2appz00_bgl))));
													{	/* Cfa/cinfo2.scm 104 */
														BgL_structzd2refzd2appz00_bglt BgL_res5532z00_3399;

														{	/* Cfa/cinfo2.scm 104 */
															BgL_structzd2refzd2appz00_bglt
																BgL_new4804z00_3396;
															BgL_new4804z00_3396 = BgL_new4792z00_3395;
															{	/* Cfa/cinfo2.scm 104 */
																BgL_approxz00_bglt BgL_approx4803z00_3398;

																BgL_approx4803z00_3398 = BgL_approx4791z00_3394;
																((((BgL_structzd2refzd2appz00_bglt)
																			CREF(BgL_new4804z00_3396))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4803z00_3398),
																	BUNSPEC);
																BgL_res5532z00_3399 = BgL_new4804z00_3396;
														}} BgL_res5532z00_3399;
													}
													BgL_res5533z00_3400 = BgL_new4792z00_3395;
											}}
											BgL_arg5279z00_2086 = BgL_res5533z00_3400;
									}}
									{	/* Cfa/cinfo2.scm 104 */
										obj_t BgL_auxz00_7112;

										BgL_objectz00_bglt BgL_auxz00_7110;

										BgL_auxz00_7112 = (obj_t) (BgL_arg5279z00_2086);
										BgL_auxz00_7110 =
											(BgL_objectz00_bglt) (BgL_new4813z00_2084);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_7110, BgL_auxz00_7112);
								}}
								BgL_auxz00_7088 = BgL_new4813z00_2084;
					}}}
					return (obj_t) (BgL_auxz00_7088);
				}
			}
		}
	}



/* object->struct-struc4895 */
	obj_t BGl_objectzd2ze3structzd2struc4895ze3zzcfa_info2z00(obj_t
		BgL_envz00_4358, obj_t BgL_obj4808z00_4359)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 104 */
			{
				BgL_structzd2refzd2appz00_bglt BgL_obj4808z00_2068;

				BgL_obj4808z00_2068 =
					(BgL_structzd2refzd2appz00_bglt) (BgL_obj4808z00_4359);
				{

					{	/* Cfa/cinfo2.scm 104 */
						obj_t BgL_res4809z00_2071;

						{	/* Cfa/cinfo2.scm 104 */
							obj_t BgL_nextzd2method4894zd2_2076;

							BgL_nextzd2method4894zd2_2076 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4808z00_2068),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_structzd2refzd2appz00zzcfa_info2z00);
							if (PROCEDUREP(BgL_nextzd2method4894zd2_2076))
								{	/* Cfa/cinfo2.scm 104 */
									BgL_res4809z00_2071 =
										PROCEDURE_ENTRY(BgL_nextzd2method4894zd2_2076)
										(BgL_nextzd2method4894zd2_2076,
										(obj_t) (BgL_obj4808z00_2068), BEOA);
								}
							else
								{	/* Cfa/cinfo2.scm 104 */
									BgL_res4809z00_2071 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4808z00_2068));
								}
						}
						{	/* Cfa/cinfo2.scm 104 */
							obj_t BgL_aux4810z00_2072;

							{	/* Cfa/cinfo2.scm 104 */
								obj_t BgL_keyz00_3371;

								BgL_keyz00_3371 = CNST_TABLE_REF(((long) 14));
								BgL_aux4810z00_2072 =
									make_struct(BgL_keyz00_3371, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo2.scm 104 */
								BgL_approxz00_bglt BgL_arg5275z00_2074;

								{
									obj_t BgL_auxz00_7129;

									{	/* Cfa/cinfo2.scm 104 */
										BgL_objectz00_bglt BgL_auxz00_7130;

										BgL_auxz00_7130 =
											(BgL_objectz00_bglt) (BgL_obj4808z00_2068);
										BgL_auxz00_7129 = BGL_OBJECT_WIDENING(BgL_auxz00_7130);
									}
									BgL_arg5275z00_2074 =
										(((BgL_structzd2refzd2appz00_bglt) CREF(BgL_auxz00_7129))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo2.scm 104 */
									obj_t BgL_auxz00_7136;

									int BgL_auxz00_7134;

									BgL_auxz00_7136 = (obj_t) (BgL_arg5275z00_2074);
									BgL_auxz00_7134 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4810z00_2072, BgL_auxz00_7134,
										BgL_auxz00_7136);
							}}
							{	/* Cfa/cinfo2.scm 104 */
								int BgL_auxz00_7139;

								BgL_auxz00_7139 = (int) (((long) 0));
								STRUCT_SET(BgL_res4809z00_2071, BgL_auxz00_7139,
									BgL_aux4810z00_2072);
							}
							{	/* Cfa/cinfo2.scm 104 */
								obj_t BgL_auxz00_7142;

								BgL_auxz00_7142 = STRUCT_KEY(BgL_res4809z00_2071);
								STRUCT_KEY_SET(BgL_aux4810z00_2072, BgL_auxz00_7142);
							}
							{	/* Cfa/cinfo2.scm 104 */
								obj_t BgL_kz00_3386;

								BgL_kz00_3386 = CNST_TABLE_REF(((long) 14));
								STRUCT_KEY_SET(BgL_res4809z00_2071, BgL_kz00_3386);
							}
							return BgL_res4809z00_2071;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4893 */
	obj_t BGl_structzb2objectzd2ze3objec4893z83zzcfa_info2z00(obj_t
		BgL_envz00_4360, obj_t BgL_oz00_4361, obj_t BgL_sz00_4362)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 105 */
			{
				BgL_structzd2setz12zd2appz12_bglt BgL_oz00_2056;

				obj_t BgL_sz00_2057;

				{	/* Cfa/cinfo2.scm 105 */
					BgL_structzd2setz12zd2appz12_bglt BgL_auxz00_7148;

					BgL_oz00_2056 = (BgL_structzd2setz12zd2appz12_bglt) (BgL_oz00_4361);
					BgL_sz00_2057 = BgL_sz00_4362;
					{

						{	/* Cfa/cinfo2.scm 105 */
							obj_t BgL_old4853z00_2060;

							obj_t BgL_aux4854z00_2061;

							{	/* Cfa/cinfo2.scm 105 */
								obj_t BgL_nextzd2method4892zd2_2066;

								BgL_nextzd2method4892zd2_2066 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2056),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_structzd2setz12zd2appz12zzcfa_info2z00);
								if (PROCEDUREP(BgL_nextzd2method4892zd2_2066))
									{	/* Cfa/cinfo2.scm 105 */
										BgL_old4853z00_2060 =
											PROCEDURE_ENTRY(BgL_nextzd2method4892zd2_2066)
											(BgL_nextzd2method4892zd2_2066, (obj_t) (BgL_oz00_2056),
											BgL_sz00_2057, BEOA);
									}
								else
									{	/* Cfa/cinfo2.scm 105 */
										BgL_old4853z00_2060 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2056), BgL_sz00_2057));
									}
							}
							BgL_aux4854z00_2061 =
								STRUCT_REF(BgL_sz00_2057, (int) (((long) 0)));
							{	/* Cfa/cinfo2.scm 105 */
								BgL_structzd2setz12zd2appz12_bglt BgL_new4855z00_2062;

								BgL_new4855z00_2062 =
									((BgL_structzd2setz12zd2appz12_bglt) (BgL_old4853z00_2060));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4855z00_2062),
									BGl_classzd2numzd2zz__objectz00
									(BGl_structzd2setz12zd2appz12zzcfa_info2z00));
								{	/* Cfa/cinfo2.scm 105 */
									BgL_structzd2setz12zd2appz12_bglt BgL_arg5271z00_2064;

									{	/* Cfa/cinfo2.scm 105 */
										obj_t BgL_arg5272z00_2065;

										BgL_arg5272z00_2065 =
											STRUCT_REF(BgL_aux4854z00_2061, (int) (((long) 0)));
										{	/* Cfa/cinfo2.scm 105 */
											BgL_structzd2setz12zd2appz12_bglt BgL_res5530z00_3369;

											{	/* Cfa/cinfo2.scm 105 */
												BgL_approxz00_bglt BgL_approx4833z00_3363;

												BgL_approx4833z00_3363 =
													(BgL_approxz00_bglt) (BgL_arg5272z00_2065);
												{	/* Cfa/cinfo2.scm 105 */
													BgL_structzd2setz12zd2appz12_bglt BgL_new4834z00_3364;

													BgL_new4834z00_3364 =
														((BgL_structzd2setz12zd2appz12_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_structzd2setz12zd2appz12_bgl))));
													{	/* Cfa/cinfo2.scm 105 */
														BgL_structzd2setz12zd2appz12_bglt
															BgL_res5529z00_3368;
														{	/* Cfa/cinfo2.scm 105 */
															BgL_structzd2setz12zd2appz12_bglt
																BgL_new4846z00_3365;
															BgL_new4846z00_3365 = BgL_new4834z00_3364;
															{	/* Cfa/cinfo2.scm 105 */
																BgL_approxz00_bglt BgL_approx4845z00_3367;

																BgL_approx4845z00_3367 = BgL_approx4833z00_3363;
																((((BgL_structzd2setz12zd2appz12_bglt)
																			CREF(BgL_new4846z00_3365))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4845z00_3367),
																	BUNSPEC);
																BgL_res5529z00_3368 = BgL_new4846z00_3365;
														}} BgL_res5529z00_3368;
													}
													BgL_res5530z00_3369 = BgL_new4834z00_3364;
											}}
											BgL_arg5271z00_2064 = BgL_res5530z00_3369;
									}}
									{	/* Cfa/cinfo2.scm 105 */
										obj_t BgL_auxz00_7172;

										BgL_objectz00_bglt BgL_auxz00_7170;

										BgL_auxz00_7172 = (obj_t) (BgL_arg5271z00_2064);
										BgL_auxz00_7170 =
											(BgL_objectz00_bglt) (BgL_new4855z00_2062);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_7170, BgL_auxz00_7172);
								}}
								BgL_auxz00_7148 = BgL_new4855z00_2062;
					}}}
					return (obj_t) (BgL_auxz00_7148);
				}
			}
		}
	}



/* object->struct-struc4891 */
	obj_t BGl_objectzd2ze3structzd2struc4891ze3zzcfa_info2z00(obj_t
		BgL_envz00_4363, obj_t BgL_obj4850z00_4364)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 105 */
			{
				BgL_structzd2setz12zd2appz12_bglt BgL_obj4850z00_2046;

				BgL_obj4850z00_2046 =
					(BgL_structzd2setz12zd2appz12_bglt) (BgL_obj4850z00_4364);
				{

					{	/* Cfa/cinfo2.scm 105 */
						obj_t BgL_res4851z00_2049;

						{	/* Cfa/cinfo2.scm 105 */
							obj_t BgL_nextzd2method4890zd2_2054;

							BgL_nextzd2method4890zd2_2054 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4850z00_2046),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_structzd2setz12zd2appz12zzcfa_info2z00);
							if (PROCEDUREP(BgL_nextzd2method4890zd2_2054))
								{	/* Cfa/cinfo2.scm 105 */
									BgL_res4851z00_2049 =
										PROCEDURE_ENTRY(BgL_nextzd2method4890zd2_2054)
										(BgL_nextzd2method4890zd2_2054,
										(obj_t) (BgL_obj4850z00_2046), BEOA);
								}
							else
								{	/* Cfa/cinfo2.scm 105 */
									BgL_res4851z00_2049 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4850z00_2046));
								}
						}
						{	/* Cfa/cinfo2.scm 105 */
							obj_t BgL_aux4852z00_2050;

							{	/* Cfa/cinfo2.scm 105 */
								obj_t BgL_keyz00_3340;

								BgL_keyz00_3340 = CNST_TABLE_REF(((long) 15));
								BgL_aux4852z00_2050 =
									make_struct(BgL_keyz00_3340, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo2.scm 105 */
								BgL_approxz00_bglt BgL_arg5267z00_2052;

								{
									obj_t BgL_auxz00_7189;

									{	/* Cfa/cinfo2.scm 105 */
										BgL_objectz00_bglt BgL_auxz00_7190;

										BgL_auxz00_7190 =
											(BgL_objectz00_bglt) (BgL_obj4850z00_2046);
										BgL_auxz00_7189 = BGL_OBJECT_WIDENING(BgL_auxz00_7190);
									}
									BgL_arg5267z00_2052 =
										(((BgL_structzd2setz12zd2appz12_bglt)
											CREF(BgL_auxz00_7189))->BgL_approxz00);
								}
								{	/* Cfa/cinfo2.scm 105 */
									obj_t BgL_auxz00_7196;

									int BgL_auxz00_7194;

									BgL_auxz00_7196 = (obj_t) (BgL_arg5267z00_2052);
									BgL_auxz00_7194 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4852z00_2050, BgL_auxz00_7194,
										BgL_auxz00_7196);
							}}
							{	/* Cfa/cinfo2.scm 105 */
								int BgL_auxz00_7199;

								BgL_auxz00_7199 = (int) (((long) 0));
								STRUCT_SET(BgL_res4851z00_2049, BgL_auxz00_7199,
									BgL_aux4852z00_2050);
							}
							{	/* Cfa/cinfo2.scm 105 */
								obj_t BgL_auxz00_7202;

								BgL_auxz00_7202 = STRUCT_KEY(BgL_res4851z00_2049);
								STRUCT_KEY_SET(BgL_aux4852z00_2050, BgL_auxz00_7202);
							}
							{	/* Cfa/cinfo2.scm 105 */
								obj_t BgL_kz00_3355;

								BgL_kz00_3355 = CNST_TABLE_REF(((long) 15));
								STRUCT_KEY_SET(BgL_res4851z00_2049, BgL_kz00_3355);
							}
							return BgL_res4851z00_2049;
						}
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_info2z00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo2.scm 16 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5607z00zzcfa_info2z00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string5607z00zzcfa_info2z00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5607z00zzcfa_info2z00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5607z00zzcfa_info2z00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 243010053),
				BSTRING_TO_STRING(BGl_string5607z00zzcfa_info2z00));
		}
	}

#ifdef __cplusplus
}
#endif
