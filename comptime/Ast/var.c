/*===========================================================================*/
/*   (Ast/var.scm)                                                           */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/var.scm)*/
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

	typedef struct BgL_funz00_bgl
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
	}             *BgL_funz00_bglt;

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

	typedef struct BgL_cfunz00_bgl
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
		obj_t BgL_argszd2typezd2;
		bool_t BgL_macrozf3zf3;
		bool_t BgL_infixzf3zf3;
		obj_t BgL_methodz00;
	}              *BgL_cfunz00_bglt;

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

	typedef struct BgL_scnstz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_nodez00;
		obj_t BgL_classz00;
		obj_t BgL_locz00;
	}               *BgL_scnstz00_bglt;

	typedef struct BgL_cvarz00_bgl
	{
		header_t header;
		obj_t widening;
		bool_t BgL_macrozf3zf3;
	}              *BgL_cvarz00_bglt;

	typedef struct BgL_sexitz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_handlerz00;
		bool_t BgL_detachedzf3zf3;
	}               *BgL_sexitz00_bglt;

	typedef struct BgL_feffectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_readz00;
		obj_t BgL_writez00;
	}                 *BgL_feffectz00_bglt;


	static obj_t BGl__makezd2cfunzd2zzast_varz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2sexitzd2nilz52zzast_varz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_feffectz00_bglt
		BGl_z52allocatezd2feffectz80zzast_varz00();
	static obj_t BGl__fillzd2cvarz12zc0zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2valuezd2nilz52zzast_varz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_sexitz00_bglt
		BGl_fillzd2sexitz12zc0zzast_varz00(BgL_sexitz00_bglt, obj_t, bool_t);
	BGL_EXPORTED_DECL BgL_localz00_bglt BGl_makezd2localzd2zzast_varz00(obj_t,
		obj_t, BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long,
		bool_t, long);
	static obj_t BGl_objectzd2ze3structzd2feffe2484ze3zzast_varz00(obj_t, obj_t);
	static obj_t BGl__svarzd2nilzd2zzast_varz00(obj_t);
	static obj_t BGl__fillzd2funz12zc0zzast_varz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2variablezd2zzast_varz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2cfunz80zzast_varz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl__cfunzd2nilzd2zzast_varz00(obj_t);
	static obj_t BGl__makezd2scnstzd2zzast_varz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_variablezf3zf3zzast_varz00(obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_z52allocatezd2globalz80zzast_varz00();
	BGL_EXPORTED_DEF obj_t BGl_svarz00zzast_varz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	static obj_t BGl__fillzd2cfunz12zc0zzast_varz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_localzf3zf3zzast_varz00(obj_t);
	static obj_t BGl__cvarzd2nilzd2zzast_varz00(obj_t);
	static obj_t BGl__z52allocatezd2feffectz80zzast_varz00(obj_t);
	BGL_EXPORTED_DECL BgL_variablez00_bglt
		BGl_makezd2variablezd2zzast_varz00(obj_t, obj_t, BgL_typez00_bglt,
		BgL_valuez00_bglt, obj_t, obj_t, obj_t, long);
	static obj_t BGl__makezd2sexitzd2zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl__globalzd2keyzf3z21zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_feffectzf3zf3zzast_varz00(obj_t);
	BGL_EXPORTED_DECL BgL_variablez00_bglt
		BGl_fillzd2variablez12zc0zzast_varz00(BgL_variablez00_bglt, obj_t, obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long);
	BGL_EXPORTED_DECL bool_t BGl_scnstzf3zf3zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2setzd2readzd2onlyz12zc0zzast_varz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL BgL_feffectz00_bglt BGl_feffectzd2nilzd2zzast_varz00();
	static obj_t BGl__z52allocatezd2variablez80zzast_varz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_varz00();
	BGL_EXPORTED_DECL BgL_sexitz00_bglt BGl_sexitzd2nilzd2zzast_varz00();
	BGL_EXPORTED_DECL BgL_valuez00_bglt BGl_valuezd2nilzd2zzast_varz00();
	BGL_EXPORTED_DECL BgL_localz00_bglt BGl_z52allocatezd2localz80zzast_varz00();
	static obj_t BGl__funzd2nilzd2zzast_varz00(obj_t);
	static obj_t BGl__fillzd2sexitz12zc0zzast_varz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cvarz00_bglt BGl_z52allocatezd2cvarz80zzast_varz00();
	BGL_EXPORTED_DECL BgL_variablez00_bglt
		BGl_z52allocatezd2variablez80zzast_varz00();
	static obj_t BGl__makezd2feffectzd2zzast_varz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_variablez00zzast_varz00 = BUNSPEC;
	static obj_t BGl_z52thezd2feffectzd2nilz52zzast_varz00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2valuez80zzast_varz00(obj_t);
	static obj_t BGl_z52thezd2globalzd2nilz52zzast_varz00 = BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2sexit2488ze3zzast_varz00(obj_t, obj_t);
	static obj_t BGl__makezd2svarzd2zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_objectzd2ze3structzd2value2528ze3zzast_varz00(obj_t, obj_t);
	static obj_t BGl__fillzd2svarz12zc0zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl__feffectzf3zf3zzast_varz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2globa2520ze3zzast_varz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2svarz80zzast_varz00(obj_t);
	BGL_EXPORTED_DECL BgL_cvarz00_bglt BGl_makezd2cvarzd2zzast_varz00(bool_t);
	static obj_t BGl__z52allocatezd2globalz80zzast_varz00(obj_t);
	static obj_t BGl__feffectzd2nilzd2zzast_varz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2sfun2508ze3zzast_varz00(obj_t, obj_t);
	static obj_t BGl__variablezf3zf3zzast_varz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_fillzd2globalz12zc0zzast_varz00(BgL_globalz00_bglt, obj_t, obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, obj_t,
		obj_t, bool_t, obj_t, bool_t, obj_t, obj_t, obj_t);
	static obj_t BGl__valuezf3zf3zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_sfunz00_bglt BGl_z52allocatezd2sfunz80zzast_varz00();
	static obj_t BGl__fillzd2sfunz12zc0zzast_varz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2svar2500ze3zzast_varz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2cfun2504ze3zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2localzd2nilz52zzast_varz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_funz00_bglt BGl_makezd2funzd2zzast_varz00(long, obj_t,
		obj_t, obj_t, bool_t, obj_t, obj_t);
	static obj_t BGl__makezd2localzd2zzast_varz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cvarz00zzast_varz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_valuez00zzast_varz00 = BUNSPEC;
	static obj_t BGl__variablezd2nilzd2zzast_varz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_globalzd2optionalzf3z21zzast_varz00(obj_t);
	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_fillzd2localz12zc0zzast_varz00(BgL_localz00_bglt, obj_t, obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, bool_t,
		long);
	static obj_t BGl_objectzd2ze3structzd2cvar2492ze3zzast_varz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2varia2524ze3zzast_varz00(obj_t, obj_t);
	static obj_t BGl__sexitzd2nilzd2zzast_varz00(obj_t);
	static obj_t BGl__z52allocatezd2scnstz80zzast_varz00(obj_t);
	static obj_t BGl__valuezd2nilzd2zzast_varz00(obj_t);
	BGL_EXPORTED_DECL BgL_sfunz00_bglt BGl_makezd2sfunzd2zzast_varz00(long, obj_t,
		obj_t, obj_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_globalzd2argszd2safezf3zf3zzast_varz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL BgL_scnstz00_bglt
		BGl_fillzd2scnstz12zc0zzast_varz00(BgL_scnstz00_bglt, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_funzf3zf3zzast_varz00(obj_t);
	static obj_t BGl__funzd2optionalzd2arityz00zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_globalzf3zf3zzast_varz00(obj_t);
	static obj_t BGl__z52allocatezd2sexitz80zzast_varz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzast_varz00();
	static obj_t BGl__makezd2funzd2zzast_varz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_localz00_bglt BGl_localzd2nilzd2zzast_varz00();
	BGL_EXPORTED_DECL int
		BGl_funzd2optionalzd2arityz00zzast_varz00(BgL_funz00_bglt);
	static obj_t BGl__sexitzf3zf3zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_valuez00_bglt BGl_makezd2valuezd2zzast_varz00();
	static obj_t BGl__fillzd2variablez12zc0zzast_varz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cvarzf3zf3zzast_varz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_globalzd2readzd2onlyzf3zf3zzast_varz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_valuezf3zf3zzast_varz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_sfunz00zzast_varz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_sfunzd2optionalzf3z21zzast_varz00(obj_t);
	static obj_t BGl_z52thezd2scnstzd2nilz52zzast_varz00 = BUNSPEC;
	static obj_t BGl__globalzd2argszd2safezf3zf3zzast_varz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_varz00 = BUNSPEC;
	static obj_t BGl__makezd2cvarzd2zzast_varz00(obj_t, obj_t);
	static obj_t BGl__fillzd2localz12zc0zzast_varz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt BGl_globalzd2nilzd2zzast_varz00();
	BGL_EXPORTED_DEF obj_t BGl_scnstz00zzast_varz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzast_varz00();
	BGL_EXPORTED_DECL bool_t BGl_sfunzd2keyzf3z21zzast_varz00(obj_t);
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	static obj_t BGl__z52allocatezd2cvarz80zzast_varz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_funz00zzast_varz00 = BUNSPEC;
	static obj_t BGl__fillzd2scnstz12zc0zzast_varz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_globalz00zzast_varz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_cfunzf3zf3zzast_varz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2local2516ze3zzast_varz00(obj_t, obj_t);
	static obj_t BGl__cvarzf3zf3zzast_varz00(obj_t, obj_t);
	static obj_t BGl__globalzd2optionalzf3z21zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_sexitz00zzast_varz00 = BUNSPEC;
	static obj_t BGl__globalzd2readzd2onlyzf3zf3zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cfunz00_bglt BGl_z52allocatezd2cfunz80zzast_varz00();
	static obj_t BGl_structzb2objectzd2ze3objec2486z83zzast_varz00(obj_t, obj_t,
		obj_t);
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	static obj_t BGl_structzb2objectzd2ze3objec2490z83zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2502z83zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2494z83zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_cvarz00_bglt
		BGl_fillzd2cvarz12zc0zzast_varz00(BgL_cvarz00_bglt, bool_t);
	static obj_t BGl_structzb2objectzd2ze3objec2506z83zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2498z83zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_valuez00_bglt BGl_z52allocatezd2valuez80zzast_varz00();
	static obj_t BGl_structzb2objectzd2ze3objec2510z83zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2514z83zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2518z83zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2522z83zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2526z83zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2530z83zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_varz00();
	BGL_EXPORTED_DECL BgL_scnstz00_bglt BGl_scnstzd2nilzd2zzast_varz00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl__cfunzf3zf3zzast_varz00(obj_t, obj_t);
	static obj_t BGl__makezd2sfunzd2zzast_varz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_scnstz00_bglt BGl_makezd2scnstzd2zzast_varz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_sexitzf3zf3zzast_varz00(obj_t);
	static obj_t BGl__globalzf3zf3zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2sfunzd2nilz52zzast_varz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_cfunz00_bglt
		BGl_fillzd2cfunz12zc0zzast_varz00(BgL_cfunz00_bglt, long, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t, obj_t, bool_t, bool_t, obj_t);
	static obj_t BGl__z52allocatezd2sfunz80zzast_varz00(obj_t);
	BGL_EXPORTED_DECL BgL_cfunz00_bglt BGl_makezd2cfunzd2zzast_varz00(long, obj_t,
		obj_t, obj_t, bool_t, obj_t, obj_t, obj_t, bool_t, bool_t, obj_t);
	static obj_t BGl__z52allocatezd2localz80zzast_varz00(obj_t);
	BGL_EXPORTED_DECL BgL_sexitz00_bglt BGl_makezd2sexitzd2zzast_varz00(obj_t,
		bool_t);
	static obj_t BGl__fillzd2globalz12zc0zzast_varz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__localzd2nilzd2zzast_varz00(obj_t);
	BGL_EXPORTED_DECL BgL_feffectz00_bglt BGl_makezd2feffectzd2zzast_varz00(obj_t,
		obj_t);
	static obj_t BGl_z52thezd2svarzd2nilz52zzast_varz00 = BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2scnst2496ze3zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_funz00_bglt
		BGl_fillzd2funz12zc0zzast_varz00(BgL_funz00_bglt, long, obj_t, obj_t, obj_t,
		bool_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2cfunzd2nilz52zzast_varz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_svarzf3zf3zzast_varz00(obj_t);
	static obj_t BGl__funzf3zf3zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2variablezd2nilz52zzast_varz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_globalz00_bglt BGl_makezd2globalzd2zzast_varz00(obj_t,
		obj_t, BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long,
		obj_t, obj_t, bool_t, obj_t, bool_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z52thezd2cvarzd2nilz52zzast_varz00 = BUNSPEC;
	static obj_t BGl__fillzd2feffectz12zc0zzast_varz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_valuez00_bglt
		BGl_fillzd2valuez12zc0zzast_varz00(BgL_valuez00_bglt);
	static obj_t BGl__sfunzd2keyzf3z21zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_scnstz00_bglt BGl_z52allocatezd2scnstz80zzast_varz00();
	BGL_EXPORTED_DEF obj_t BGl_cfunz00zzast_varz00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2funz80zzast_varz00(obj_t);
	BGL_EXPORTED_DECL BgL_sfunz00_bglt BGl_sfunzd2nilzd2zzast_varz00();
	BGL_EXPORTED_DECL bool_t BGl_sfunzf3zf3zzast_varz00(obj_t);
	static obj_t BGl__makezd2valuezd2zzast_varz00(obj_t);
	static obj_t BGl__svarzf3zf3zzast_varz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2fun2512ze3zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_svarz00_bglt BGl_z52allocatezd2svarz80zzast_varz00();
	BGL_EXPORTED_DEF obj_t BGl_localz00zzast_varz00 = BUNSPEC;
	static obj_t BGl__localzf3zf3zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_feffectz00zzast_varz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_feffectz00_bglt
		BGl_fillzd2feffectz12zc0zzast_varz00(BgL_feffectz00_bglt, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_svarz00_bglt BGl_svarzd2nilzd2zzast_varz00();
	BGL_EXPORTED_DECL BgL_sexitz00_bglt BGl_z52allocatezd2sexitz80zzast_varz00();
	BGL_EXPORTED_DECL BgL_cfunz00_bglt BGl_cfunzd2nilzd2zzast_varz00();
	BGL_EXPORTED_DECL BgL_funz00_bglt BGl_z52allocatezd2funz80zzast_varz00();
	static obj_t BGl__globalzd2nilzd2zzast_varz00(obj_t);
	BGL_EXPORTED_DECL BgL_svarz00_bglt
		BGl_fillzd2svarz12zc0zzast_varz00(BgL_svarz00_bglt, obj_t);
	static obj_t BGl__globalzd2setzd2readzd2onlyz12zc0zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2funzd2nilz52zzast_varz00 = BUNSPEC;
	static obj_t BGl__sfunzd2optionalzf3z21zzast_varz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzast_varz00();
	BGL_EXPORTED_DECL BgL_funz00_bglt BGl_funzd2nilzd2zzast_varz00();
	static obj_t BGl__scnstzf3zf3zzast_varz00(obj_t, obj_t);
	static obj_t BGl__scnstzd2nilzd2zzast_varz00(obj_t);
	BGL_EXPORTED_DECL BgL_variablez00_bglt BGl_variablezd2nilzd2zzast_varz00();
	static obj_t BGl__sfunzf3zf3zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cvarz00_bglt BGl_cvarzd2nilzd2zzast_varz00();
	BGL_EXPORTED_DECL bool_t BGl_globalzd2keyzf3z21zzast_varz00(obj_t);
	static obj_t BGl__makezd2globalzd2zzast_varz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_varz00();
	BGL_EXPORTED_DECL BgL_svarz00_bglt BGl_makezd2svarzd2zzast_varz00(obj_t);
	static obj_t BGl__fillzd2valuez12zc0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_sfunz00_bglt
		BGl_fillzd2sfunz12zc0zzast_varz00(BgL_sfunz00_bglt, long, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__sfunzd2nilzd2zzast_varz00(obj_t);
	static obj_t __cnst[15];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2localzd2envz52zzast_varz00,
		BgL_bgl__za752allocateza7d2l3051z00,
		BGl__z52allocatezd2localz80zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_variablezf3zd2envz21zzast_varz00,
		BgL_bgl__variableza7f3za7f3za73052za7, BGl__variablezf3zf3zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2cvarz12zd2envz12zzast_varz00,
		BgL_bgl__fillza7d2cvarza712za73053za7, BGl__fillzd2cvarz12zc0zzast_varz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzf3zd2envz21zzast_varz00,
		BgL_bgl__localza7f3za7f3za7za7as3054z00, BGl__localzf3zf3zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvarzf3zd2envz21zzast_varz00,
		BgL_bgl__cvarza7f3za7f3za7za7ast3055z00, BGl__cvarzf3zf3zzast_varz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2readzd2onlyzf3zd2envz21zzast_varz00,
		BgL_bgl__globalza7d2readza7d3056z00,
		BGl__globalzd2readzd2onlyzf3zf3zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2nilzd2envz00zzast_varz00,
		BgL_bgl__sfunza7d2nilza7d2za7za73057z00, BGl__sfunzd2nilzd2zzast_varz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sexitzd2nilzd2envz00zzast_varz00,
		BgL_bgl__sexitza7d2nilza7d2za73058za7, BGl__sexitzd2nilzd2zzast_varz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2sfunz12zd2envz12zzast_varz00,
		BgL_bgl__fillza7d2sfunza712za73059za7, BGl__fillzd2sfunz12zc0zzast_varz00,
		0L, BUNSPEC, 18);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzf3zd2envz21zzast_varz00,
		BgL_bgl__sfunza7f3za7f3za7za7ast3060z00, BGl__sfunzf3zf3zzast_varz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2scnstzd2envz52zzast_varz00,
		BgL_bgl__za752allocateza7d2s3061z00,
		BGl__z52allocatezd2scnstz80zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2localzd2envz00zzast_varz00,
		BgL_bgl__makeza7d2localza7d23062z00, BGl__makezd2localzd2zzast_varz00, 0L,
		BUNSPEC, 10);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2globalzd2envz00zzast_varz00,
		BgL_bgl__makeza7d2globalza7d3063z00, BGl__makezd2globalzd2zzast_varz00, 0L,
		BUNSPEC, 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2feffectzd2envz52zzast_varz00,
		BgL_bgl__za752allocateza7d2f3064z00,
		BGl__z52allocatezd2feffectz80zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_scnstzd2nilzd2envz00zzast_varz00,
		BgL_bgl__scnstza7d2nilza7d2za73065za7, BGl__scnstzd2nilzd2zzast_varz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2globalz12zd2envz12zzast_varz00,
		BgL_bgl__fillza7d2globalza713066z00, BGl__fillzd2globalz12zc0zzast_varz00,
		0L, BUNSPEC, 17);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2scnstz12zd2envz12zzast_varz00,
		BgL_bgl__fillza7d2scnstza7123067z00, BGl__fillzd2scnstz12zc0zzast_varz00,
		0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2variablezd2envz52zzast_varz00,
		BgL_bgl__za752allocateza7d2v3068z00,
		BGl__z52allocatezd2variablez80zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2feffectzd2envz00zzast_varz00,
		BgL_bgl__makeza7d2feffectza73069z00, BGl__makezd2feffectzd2zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2scnstzd2envz00zzast_varz00,
		BgL_bgl__makeza7d2scnstza7d23070z00, BGl__makezd2scnstzd2zzast_varz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_valuezd2nilzd2envz00zzast_varz00,
		BgL_bgl__valueza7d2nilza7d2za73071za7, BGl__valuezd2nilzd2zzast_varz00, 0L,
		BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2sfunzd2envz00zzast_varz00,
		BgL_bgl__makeza7d2sfunza7d2za73072za7, BGl__makezd2sfunzd2zzast_varz00, 0L,
		BUNSPEC, 17);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvarzd2nilzd2envz00zzast_varz00,
		BgL_bgl__cvarza7d2nilza7d2za7za73073z00, BGl__cvarzd2nilzd2zzast_varz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2svarzd2envz00zzast_varz00,
		BgL_bgl__makeza7d2svarza7d2za73074za7, BGl__makezd2svarzd2zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cfunzd2envz00zzast_varz00,
		BgL_bgl__makeza7d2cfunza7d2za73075za7, BGl__makezd2cfunzd2zzast_varz00, 0L,
		BUNSPEC, 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2sexitz12zd2envz12zzast_varz00,
		BgL_bgl__fillza7d2sexitza7123076z00, BGl__fillzd2sexitz12zc0zzast_varz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2funzd2envz00zzast_varz00,
		BgL_bgl__makeza7d2funza7d2za7za73077z00, BGl__makezd2funzd2zzast_varz00, 0L,
		BUNSPEC, 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2keyzf3zd2envzf3zzast_varz00,
		BgL_bgl__globalza7d2keyza7f33078z00, BGl__globalzd2keyzf3z21zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2sfunzd2envz52zzast_varz00,
		BgL_bgl__za752allocateza7d2s3079z00, BGl__z52allocatezd2sfunz80zzast_varz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cvarzd2envz00zzast_varz00,
		BgL_bgl__makeza7d2cvarza7d2za73080za7, BGl__makezd2cvarzd2zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzf3zd2envz21zzast_varz00,
		BgL_bgl__globalza7f3za7f3za7za7a3081z00, BGl__globalzf3zf3zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2valuez12zd2envz12zzast_varz00,
		BgL_bgl__fillza7d2valueza7123082z00, BGl__fillzd2valuez12zc0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2svarz12zd2envz12zzast_varz00,
		BgL_bgl__fillza7d2svarza712za73083za7, BGl__fillzd2svarz12zc0zzast_varz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2nilzd2envz00zzast_varz00,
		BgL_bgl__localza7d2nilza7d2za73084za7, BGl__localzd2nilzd2zzast_varz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2svarzd2envz52zzast_varz00,
		BgL_bgl__za752allocateza7d2s3085z00, BGl__z52allocatezd2svarz80zzast_varz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2funz12zd2envz12zzast_varz00,
		BgL_bgl__fillza7d2funza712za7c3086za7, BGl__fillzd2funz12zc0zzast_varz00,
		0L, BUNSPEC, 8);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2cfunzd2envz52zzast_varz00,
		BgL_bgl__za752allocateza7d2c3087z00, BGl__z52allocatezd2cfunz80zzast_varz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_svarzf3zd2envz21zzast_varz00,
		BgL_bgl__svarza7f3za7f3za7za7ast3088z00, BGl__svarzf3zf3zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_variablezd2nilzd2envz00zzast_varz00,
		BgL_bgl__variableza7d2nilza73089z00, BGl__variablezd2nilzd2zzast_varz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_scnstzf3zd2envz21zzast_varz00,
		BgL_bgl__scnstza7f3za7f3za7za7as3090z00, BGl__scnstzf3zf3zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2cvarzd2envz52zzast_varz00,
		BgL_bgl__za752allocateza7d2c3091z00, BGl__z52allocatezd2cvarz80zzast_varz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2globalzd2envz52zzast_varz00,
		BgL_bgl__za752allocateza7d2g3092z00,
		BGl__z52allocatezd2globalz80zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2cfunz12zd2envz12zzast_varz00,
		BgL_bgl__fillza7d2cfunza712za73093za7, BGl__fillzd2cfunz12zc0zzast_varz00,
		0L, BUNSPEC, 12);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3000z00zzast_varz00,
		BgL_bgl_structza7b2objectza73094z00,
		BGl_structzb2objectzd2ze3objec2486z83zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3002z00zzast_varz00,
		BgL_bgl_objectza7d2za7e3stru3095z00,
		BGl_objectzd2ze3structzd2sexit2488ze3zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3003z00zzast_varz00,
		BgL_bgl_structza7b2objectza73096z00,
		BGl_structzb2objectzd2ze3objec2490z83zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3004z00zzast_varz00,
		BgL_bgl_objectza7d2za7e3stru3097z00,
		BGl_objectzd2ze3structzd2cvar2492ze3zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3005z00zzast_varz00,
		BgL_bgl_structza7b2objectza73098z00,
		BGl_structzb2objectzd2ze3objec2494z83zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3006z00zzast_varz00,
		BgL_bgl_objectza7d2za7e3stru3099z00,
		BGl_objectzd2ze3structzd2scnst2496ze3zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3007z00zzast_varz00,
		BgL_bgl_structza7b2objectza73100z00,
		BGl_structzb2objectzd2ze3objec2498z83zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3008z00zzast_varz00,
		BgL_bgl_objectza7d2za7e3stru3101z00,
		BGl_objectzd2ze3structzd2svar2500ze3zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3010z00zzast_varz00,
		BgL_bgl_objectza7d2za7e3stru3102z00,
		BGl_objectzd2ze3structzd2cfun2504ze3zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3009z00zzast_varz00,
		BgL_bgl_structza7b2objectza73103z00,
		BGl_structzb2objectzd2ze3objec2502z83zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3011z00zzast_varz00,
		BgL_bgl_structza7b2objectza73104z00,
		BGl_structzb2objectzd2ze3objec2506z83zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3012z00zzast_varz00,
		BgL_bgl_objectza7d2za7e3stru3105z00,
		BGl_objectzd2ze3structzd2sfun2508ze3zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3013z00zzast_varz00,
		BgL_bgl_structza7b2objectza73106z00,
		BGl_structzb2objectzd2ze3objec2510z83zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3014z00zzast_varz00,
		BgL_bgl_objectza7d2za7e3stru3107z00,
		BGl_objectzd2ze3structzd2fun2512ze3zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3015z00zzast_varz00,
		BgL_bgl_structza7b2objectza73108z00,
		BGl_structzb2objectzd2ze3objec2514z83zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3016z00zzast_varz00,
		BgL_bgl_objectza7d2za7e3stru3109z00,
		BGl_objectzd2ze3structzd2local2516ze3zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3017z00zzast_varz00,
		BgL_bgl_structza7b2objectza73110z00,
		BGl_structzb2objectzd2ze3objec2518z83zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3018z00zzast_varz00,
		BgL_bgl_objectza7d2za7e3stru3111z00,
		BGl_objectzd2ze3structzd2globa2520ze3zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3020z00zzast_varz00,
		BgL_bgl_objectza7d2za7e3stru3112z00,
		BGl_objectzd2ze3structzd2varia2524ze3zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3019z00zzast_varz00,
		BgL_bgl_structza7b2objectza73113z00,
		BGl_structzb2objectzd2ze3objec2522z83zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunzf3zd2envz21zzast_varz00,
		BgL_bgl__cfunza7f3za7f3za7za7ast3114z00, BGl__cfunzf3zf3zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3021z00zzast_varz00,
		BgL_bgl_structza7b2objectza73115z00,
		BGl_structzb2objectzd2ze3objec2526z83zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2sexitzd2envz52zzast_varz00,
		BgL_bgl__za752allocateza7d2s3116z00,
		BGl__z52allocatezd2sexitz80zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_svarzd2nilzd2envz00zzast_varz00,
		BgL_bgl__svarza7d2nilza7d2za7za73117z00, BGl__svarzd2nilzd2zzast_varz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3022z00zzast_varz00,
		BgL_bgl_objectza7d2za7e3stru3118z00,
		BGl_objectzd2ze3structzd2value2528ze3zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3023z00zzast_varz00,
		BgL_bgl_structza7b2objectza73119z00,
		BGl_structzb2objectzd2ze3objec2530z83zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2valuezd2envz52zzast_varz00,
		BgL_bgl__za752allocateza7d2v3120z00,
		BGl__z52allocatezd2valuez80zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2998z00zzast_varz00,
		BgL_bgl_objectza7d2za7e3stru3121z00,
		BGl_objectzd2ze3structzd2feffe2484ze3zzast_varz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2optionalzf3zd2envzf3zzast_varz00,
		BgL_bgl__globalza7d2option3122za7, BGl__globalzd2optionalzf3z21zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_funzd2nilzd2envz00zzast_varz00,
		BgL_bgl__funza7d2nilza7d2za7za7a3123z00, BGl__funzd2nilzd2zzast_varz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2localz12zd2envz12zzast_varz00,
		BgL_bgl__fillza7d2localza7123124z00, BGl__fillzd2localz12zc0zzast_varz00,
		0L, BUNSPEC, 11);
	      DEFINE_STRING(BGl_string3001z00zzast_varz00,
		BgL_bgl_string3001za700za7za7a3125za7, "struct+object->object::object", 29);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_feffectzf3zd2envz21zzast_varz00,
		BgL_bgl__feffectza7f3za7f3za7za73126z00, BGl__feffectzf3zf3zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2funzd2envz52zzast_varz00,
		BgL_bgl__za752allocateza7d2f3127z00, BGl__z52allocatezd2funz80zzast_varz00,
		0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3024z00zzast_varz00,
		BgL_bgl_string3024za700za7za7a3128za7, "ast_var", 7);
	      DEFINE_STRING(BGl_string3025z00zzast_varz00,
		BgL_bgl_string3025za700za7za7a3129za7,
		"_ feffect sexit cvar scnst svar cfun sfun fun local global variable value args-safe read-only ",
		94);
	      DEFINE_STRING(BGl_string2997z00zzast_varz00,
		BgL_bgl_string2997za700za7za7a3130za7, "", 0);
	      DEFINE_STRING(BGl_string2999z00zzast_varz00,
		BgL_bgl_string2999za700za7za7a3131za7, "object->struct::struct", 22);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_feffectzd2nilzd2envz00zzast_varz00,
		BgL_bgl__feffectza7d2nilza7d3132z00, BGl__feffectzd2nilzd2zzast_varz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2setzd2readzd2onlyz12zd2envz12zzast_varz00,
		BgL_bgl__globalza7d2setza7d23133z00,
		BGl__globalzd2setzd2readzd2onlyz12zc0zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2sexitzd2envz00zzast_varz00,
		BgL_bgl__makeza7d2sexitza7d23134z00, BGl__makezd2sexitzd2zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2valuezd2envz00zzast_varz00,
		BgL_bgl__makeza7d2valueza7d23135z00, BGl__makezd2valuezd2zzast_varz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sexitzf3zd2envz21zzast_varz00,
		BgL_bgl__sexitza7f3za7f3za7za7as3136z00, BGl__sexitzf3zf3zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2feffectz12zd2envz12zzast_varz00,
		BgL_bgl__fillza7d2feffectza73137z00, BGl__fillzd2feffectz12zc0zzast_varz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2keyzf3zd2envzf3zzast_varz00,
		BgL_bgl__sfunza7d2keyza7f3za723138za7, BGl__sfunzd2keyzf3z21zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2argszd2safezf3zd2envz21zzast_varz00,
		BgL_bgl__globalza7d2argsza7d3139z00,
		BGl__globalzd2argszd2safezf3zf3zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_funzf3zd2envz21zzast_varz00,
		BgL_bgl__funza7f3za7f3za7za7ast_3140z00, BGl__funzf3zf3zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_valuezf3zd2envz21zzast_varz00,
		BgL_bgl__valueza7f3za7f3za7za7as3141z00, BGl__valuezf3zf3zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunzd2nilzd2envz00zzast_varz00,
		BgL_bgl__cfunza7d2nilza7d2za7za73142z00, BGl__cfunzd2nilzd2zzast_varz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2variablez12zd2envz12zzast_varz00,
		BgL_bgl__fillza7d2variable3143za7, BGl__fillzd2variablez12zc0zzast_varz00,
		0L, BUNSPEC, 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2optionalzf3zd2envzf3zzast_varz00,
		BgL_bgl__sfunza7d2optional3144za7, BGl__sfunzd2optionalzf3z21zzast_varz00,
		0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2nilzd2envz00zzast_varz00,
		BgL_bgl__globalza7d2nilza7d23145z00, BGl__globalzd2nilzd2zzast_varz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_funzd2optionalzd2arityzd2envzd2zzast_varz00,
		BgL_bgl__funza7d2optionalza73146z00,
		BGl__funzd2optionalzd2arityz00zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2variablezd2envz00zzast_varz00,
		BgL_bgl__makeza7d2variable3147za7, BGl__makezd2variablezd2zzast_varz00, 0L,
		BUNSPEC, 8);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long
		BgL_checksumz00_3036, char *BgL_fromz00_3037)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_varz00))
				{
					BGl_requirezd2initializa7ationz75zzast_varz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_varz00();
					BGl_cnstzd2initzd2zzast_varz00();
					BGl_importedzd2moduleszd2initz00zzast_varz00();
					BGl_objectzd2initzd2zzast_varz00();
					BGl_methodzd2initzd2zzast_varz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 14 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_var");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_var");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_var");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 14 */
			{	/* Ast/var.scm 14 */
				obj_t BgL_cportz00_2699;

				BgL_cportz00_2699 =
					bgl_open_input_string(BGl_string3025z00zzast_varz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2700;

					BgL_iz00_2700 = ((long) 14);
				BgL_loopz00_2701:
					if ((BgL_iz00_2700 == ((long) -1)))
						{	/* Ast/var.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/var.scm 14 */
							{	/* Ast/var.scm 14 */
								obj_t BgL_arg3027z00_2703;

								{	/* Ast/var.scm 14 */

									{	/* Ast/var.scm 14 */
										obj_t BgL_locationz00_2705;

										BgL_locationz00_2705 = BBOOL(((bool_t) 0));
										{	/* Ast/var.scm 14 */

											BgL_arg3027z00_2703 =
												BGl_readz00zz__readerz00(BgL_cportz00_2699,
												BgL_locationz00_2705);
										}
									}
								}
								{	/* Ast/var.scm 14 */
									int BgL_auxz00_3055;

									BgL_auxz00_3055 = (int) (BgL_iz00_2700);
									CNST_TABLE_SET(BgL_auxz00_3055, BgL_arg3027z00_2703);
							}}
							{	/* Ast/var.scm 14 */
								int BgL_auxz00_2706;

								BgL_auxz00_2706 = (int) ((BgL_iz00_2700 - ((long) 1)));
								{
									long BgL_iz00_3060;

									BgL_iz00_3060 = (long) (BgL_auxz00_2706);
									BgL_iz00_2700 = BgL_iz00_3060;
									goto BgL_loopz00_2701;
								}
							}
						}
				}
			}
		}
	}



/* global-read-only? */
	BGL_EXPORTED_DEF bool_t
		BGl_globalzd2readzd2onlyzf3zf3zzast_varz00(BgL_globalz00_bglt
		BgL_globalz00_1)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 167 */
			{	/* Ast/var.scm 169 */
				obj_t BgL_auxz00_3062;

				BgL_auxz00_3062 =
					BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF(((long) 0)),
					(((BgL_globalz00_bglt) CREF(BgL_globalz00_1))->BgL_pragmaz00));
				return PAIRP(BgL_auxz00_3062);
			}
		}
	}



/* _global-read-only? */
	obj_t BGl__globalzd2readzd2onlyzf3zf3zzast_varz00(obj_t BgL_envz00_2354,
		obj_t BgL_globalz00_2355)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 167 */
			return
				BBOOL(BGl_globalzd2readzd2onlyzf3zf3zzast_varz00(
					(BgL_globalz00_bglt) (BgL_globalz00_2355)));
		}
	}



/* global-set-read-only! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2setzd2readzd2onlyz12zc0zzast_varz00(BgL_globalz00_bglt
		BgL_globalz00_2)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 174 */
			{	/* Ast/var.scm 176 */
				obj_t BgL_arg2550z00_499;

				{	/* Ast/var.scm 176 */
					obj_t BgL_arg2554z00_500;

					obj_t BgL_arg2555z00_501;

					BgL_arg2554z00_500 = CNST_TABLE_REF(((long) 0));
					BgL_arg2555z00_501 =
						(((BgL_globalz00_bglt) CREF(BgL_globalz00_2))->BgL_pragmaz00);
					BgL_arg2550z00_499 =
						MAKE_PAIR(BgL_arg2554z00_500, BgL_arg2555z00_501);
				}
				return
					((((BgL_globalz00_bglt) CREF(BgL_globalz00_2))->BgL_pragmaz00) =
					((obj_t) BgL_arg2550z00_499), BUNSPEC);
			}
		}
	}



/* _global-set-read-only! */
	obj_t BGl__globalzd2setzd2readzd2onlyz12zc0zzast_varz00(obj_t BgL_envz00_2356,
		obj_t BgL_globalz00_2357)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 174 */
			return
				BGl_globalzd2setzd2readzd2onlyz12zc0zzast_varz00(
				(BgL_globalz00_bglt) (BgL_globalz00_2357));
		}
	}



/* global-args-safe? */
	BGL_EXPORTED_DEF bool_t
		BGl_globalzd2argszd2safezf3zf3zzast_varz00(BgL_globalz00_bglt
		BgL_globalz00_3)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 181 */
			{	/* Ast/var.scm 183 */
				bool_t BgL__ortest_2461z00_503;

				{	/* Ast/var.scm 183 */
					bool_t BgL_testz00_3076;

					{	/* Ast/var.scm 183 */
						BgL_valuez00_bglt BgL_arg2561z00_510;

						{
							BgL_variablez00_bglt BgL_auxz00_3077;

							BgL_auxz00_3077 = (BgL_variablez00_bglt) (BgL_globalz00_3);
							BgL_arg2561z00_510 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_3077))->BgL_valuez00);
						}
						{	/* Ast/var.scm 183 */
							obj_t BgL_obj2328z00_1152;

							BgL_obj2328z00_1152 = (obj_t) (BgL_arg2561z00_510);
							BgL_testz00_3076 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj2328z00_1152,
								BGl_cfunz00zzast_varz00);
						}
					}
					if (BgL_testz00_3076)
						{	/* Ast/var.scm 183 */
							BgL__ortest_2461z00_503 = ((bool_t) 0);
						}
					else
						{	/* Ast/var.scm 183 */
							BgL__ortest_2461z00_503 = ((bool_t) 1);
						}
				}
				if (BgL__ortest_2461z00_503)
					{	/* Ast/var.scm 183 */
						return BgL__ortest_2461z00_503;
					}
				else
					{	/* Ast/var.scm 184 */
						bool_t BgL__ortest_2462z00_504;

						{	/* Ast/var.scm 184 */
							bool_t BgL_testz00_3083;

							{	/* Ast/var.scm 184 */
								BgL_cfunz00_bglt BgL_obj2237z00_1154;

								{	/* Ast/var.scm 184 */
									BgL_variablez00_bglt BgL_obj1615z00_1153;

									BgL_obj1615z00_1153 =
										(BgL_variablez00_bglt) (BgL_globalz00_3);
									BgL_obj2237z00_1154 =
										(BgL_cfunz00_bglt) (
										(((BgL_variablez00_bglt) CREF(BgL_obj1615z00_1153))->
											BgL_valuez00));
								}
								BgL_testz00_3083 =
									(((BgL_cfunz00_bglt) CREF(BgL_obj2237z00_1154))->
									BgL_macrozf3zf3);
							}
							if (BgL_testz00_3083)
								{	/* Ast/var.scm 184 */
									BgL__ortest_2462z00_504 = ((bool_t) 0);
								}
							else
								{	/* Ast/var.scm 184 */
									BgL__ortest_2462z00_504 = ((bool_t) 1);
								}
						}
						if (BgL__ortest_2462z00_504)
							{	/* Ast/var.scm 184 */
								return BgL__ortest_2462z00_504;
							}
						else
							{	/* Ast/var.scm 184 */
								return
									CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF(
											((long) 1)),
										(((BgL_globalz00_bglt) CREF(BgL_globalz00_3))->
											BgL_pragmaz00)));
		}}}}
	}



/* _global-args-safe? */
	obj_t BGl__globalzd2argszd2safezf3zf3zzast_varz00(obj_t BgL_envz00_2358,
		obj_t BgL_globalz00_2359)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 181 */
			return
				BBOOL(BGl_globalzd2argszd2safezf3zf3zzast_varz00(
					(BgL_globalz00_bglt) (BgL_globalz00_2359)));
		}
	}



/* fun-optional-arity */
	BGL_EXPORTED_DEF int BGl_funzd2optionalzd2arityz00zzast_varz00(BgL_funz00_bglt
		BgL_funz00_4)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 190 */
			{	/* Ast/var.scm 192 */
				bool_t BgL_testz00_3096;

				{	/* Ast/var.scm 192 */
					obj_t BgL_obj2216z00_1156;

					BgL_obj2216z00_1156 = (obj_t) (BgL_funz00_4);
					BgL_testz00_3096 =
						BGl_iszd2azf3z21zz__objectz00(BgL_obj2216z00_1156,
						BGl_sfunz00zzast_varz00);
				}
				if (BgL_testz00_3096)
					{	/* Ast/var.scm 193 */
						BgL_sfunz00_bglt BgL_instance2465z00_513;

						BgL_instance2465z00_513 = (BgL_sfunz00_bglt) (BgL_funz00_4);
						{	/* Ast/var.scm 194 */
							bool_t BgL_testz00_3100;

							{	/* Ast/var.scm 194 */
								obj_t BgL_auxz00_3101;

								BgL_auxz00_3101 =
									(((BgL_sfunz00_bglt) CREF(BgL_instance2465z00_513))->
									BgL_optionalsz00);
								BgL_testz00_3100 = PAIRP(BgL_auxz00_3101);
							}
							if (BgL_testz00_3100)
								{	/* Ast/var.scm 194 */
									return
										(int) (
										((((BgL_funz00_bglt) CREF(BgL_funz00_4))->BgL_arityz00) +
											((long) 1)));
								}
							else
								{	/* Ast/var.scm 194 */
									return
										(int) (
										(((BgL_funz00_bglt) CREF(BgL_funz00_4))->BgL_arityz00));
					}}}
				else
					{	/* Ast/var.scm 192 */
						return
							(int) ((((BgL_funz00_bglt) CREF(BgL_funz00_4))->BgL_arityz00));
		}}}
	}



/* _fun-optional-arity */
	obj_t BGl__funzd2optionalzd2arityz00zzast_varz00(obj_t BgL_envz00_2360,
		obj_t BgL_funz00_2361)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 190 */
			return
				BINT(BGl_funzd2optionalzd2arityz00zzast_varz00(
					(BgL_funz00_bglt) (BgL_funz00_2361)));
		}
	}



/* global-optional? */
	BGL_EXPORTED_DEF bool_t BGl_globalzd2optionalzf3z21zzast_varz00(obj_t
		BgL_gz00_5)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 202 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_gz00_5, BGl_globalz00zzast_varz00))
				{	/* Ast/var.scm 203 */
					obj_t BgL_auxz00_3116;

					{	/* Ast/var.scm 203 */
						BgL_valuez00_bglt BgL_auxz00_3117;

						{
							BgL_variablez00_bglt BgL_auxz00_3118;

							BgL_auxz00_3118 =
								(BgL_variablez00_bglt) ((BgL_globalz00_bglt) (BgL_gz00_5));
							BgL_auxz00_3117 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_3118))->BgL_valuez00);
						}
						BgL_auxz00_3116 = (obj_t) (BgL_auxz00_3117);
					}
					return BGl_sfunzd2optionalzf3z21zzast_varz00(BgL_auxz00_3116);
				}
			else
				{	/* Ast/var.scm 203 */
					return ((bool_t) 0);
				}
		}
	}



/* _global-optional? */
	obj_t BGl__globalzd2optionalzf3z21zzast_varz00(obj_t BgL_envz00_2362,
		obj_t BgL_gz00_2363)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 202 */
			return BBOOL(BGl_globalzd2optionalzf3z21zzast_varz00(BgL_gz00_2363));
		}
	}



/* sfun-optional? */
	BGL_EXPORTED_DEF bool_t BGl_sfunzd2optionalzf3z21zzast_varz00(obj_t
		BgL_funz00_6)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 210 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_funz00_6, BGl_sfunz00zzast_varz00))
				{	/* Ast/var.scm 211 */
					obj_t BgL_auxz00_3128;

					{
						BgL_sfunz00_bglt BgL_auxz00_3129;

						BgL_auxz00_3129 = (BgL_sfunz00_bglt) (BgL_funz00_6);
						BgL_auxz00_3128 =
							(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3129))->BgL_optionalsz00);
					}
					return PAIRP(BgL_auxz00_3128);
				}
			else
				{	/* Ast/var.scm 211 */
					return ((bool_t) 0);
				}
		}
	}



/* _sfun-optional? */
	obj_t BGl__sfunzd2optionalzf3z21zzast_varz00(obj_t BgL_envz00_2364,
		obj_t BgL_funz00_2365)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 210 */
			return BBOOL(BGl_sfunzd2optionalzf3z21zzast_varz00(BgL_funz00_2365));
		}
	}



/* global-key? */
	BGL_EXPORTED_DEF bool_t BGl_globalzd2keyzf3z21zzast_varz00(obj_t BgL_gz00_7)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 216 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_gz00_7, BGl_globalz00zzast_varz00))
				{	/* Ast/var.scm 217 */
					obj_t BgL_auxz00_3137;

					{	/* Ast/var.scm 217 */
						BgL_valuez00_bglt BgL_auxz00_3138;

						{
							BgL_variablez00_bglt BgL_auxz00_3139;

							BgL_auxz00_3139 =
								(BgL_variablez00_bglt) ((BgL_globalz00_bglt) (BgL_gz00_7));
							BgL_auxz00_3138 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_3139))->BgL_valuez00);
						}
						BgL_auxz00_3137 = (obj_t) (BgL_auxz00_3138);
					}
					return BGl_sfunzd2keyzf3z21zzast_varz00(BgL_auxz00_3137);
				}
			else
				{	/* Ast/var.scm 217 */
					return ((bool_t) 0);
				}
		}
	}



/* _global-key? */
	obj_t BGl__globalzd2keyzf3z21zzast_varz00(obj_t BgL_envz00_2366,
		obj_t BgL_gz00_2367)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 216 */
			return BBOOL(BGl_globalzd2keyzf3z21zzast_varz00(BgL_gz00_2367));
		}
	}



/* sfun-key? */
	BGL_EXPORTED_DEF bool_t BGl_sfunzd2keyzf3z21zzast_varz00(obj_t BgL_funz00_8)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 224 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_funz00_8, BGl_sfunz00zzast_varz00))
				{	/* Ast/var.scm 225 */
					obj_t BgL_auxz00_3149;

					{
						BgL_sfunz00_bglt BgL_auxz00_3150;

						BgL_auxz00_3150 = (BgL_sfunz00_bglt) (BgL_funz00_8);
						BgL_auxz00_3149 =
							(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3150))->BgL_keysz00);
					}
					return PAIRP(BgL_auxz00_3149);
				}
			else
				{	/* Ast/var.scm 225 */
					return ((bool_t) 0);
				}
		}
	}



/* _sfun-key? */
	obj_t BGl__sfunzd2keyzf3z21zzast_varz00(obj_t BgL_envz00_2368,
		obj_t BgL_funz00_2369)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 224 */
			return BBOOL(BGl_sfunzd2keyzf3z21zzast_varz00(BgL_funz00_2369));
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 14 */
			{	/* Ast/var.scm 19 */
				obj_t BgL_arg2587z00_526;

				obj_t BgL_arg2589z00_527;

				obj_t BgL_arg2595z00_530;

				BgL_arg2587z00_526 = CNST_TABLE_REF(((long) 2));
				BgL_arg2589z00_527 = BGl_objectz00zz__objectz00;
				{	/* Ast/var.scm 19 */
					obj_t BgL_v2471z00_531;

					BgL_v2471z00_531 = create_vector((int) (((long) 0)));
					BgL_arg2595z00_530 = BgL_v2471z00_531;
				}
				BGl_valuez00zzast_varz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2587z00_526,
					BgL_arg2589z00_527, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2valuezd2envz52zzast_varz00,
					BGl_valuezd2nilzd2envz00zzast_varz00,
					BGl_valuezf3zd2envz21zzast_varz00, ((long) 854814), BFALSE, BFALSE,
					BgL_arg2595z00_530);
			}
			{	/* Ast/var.scm 21 */
				obj_t BgL_arg2602z00_532;

				obj_t BgL_arg2608z00_533;

				obj_t BgL_arg2628z00_536;

				BgL_arg2602z00_532 = CNST_TABLE_REF(((long) 3));
				BgL_arg2608z00_533 = BGl_objectz00zz__objectz00;
				{	/* Ast/var.scm 21 */
					obj_t BgL_v2472z00_537;

					BgL_v2472z00_537 = create_vector((int) (((long) 0)));
					BgL_arg2628z00_536 = BgL_v2472z00_537;
				}
				BGl_variablez00zzast_varz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2602z00_532,
					BgL_arg2608z00_533, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2variablezd2envz52zzast_varz00,
					BGl_variablezd2nilzd2envz00zzast_varz00,
					BGl_variablezf3zd2envz21zzast_varz00, ((long) 202976834), BFALSE,
					BFALSE, BgL_arg2628z00_536);
			}
			{	/* Ast/var.scm 40 */
				obj_t BgL_arg2629z00_538;

				obj_t BgL_arg2630z00_539;

				obj_t BgL_arg2649z00_542;

				BgL_arg2629z00_538 = CNST_TABLE_REF(((long) 4));
				BgL_arg2630z00_539 = BGl_variablez00zzast_varz00;
				{	/* Ast/var.scm 40 */
					obj_t BgL_v2473z00_543;

					BgL_v2473z00_543 = create_vector((int) (((long) 0)));
					BgL_arg2649z00_542 = BgL_v2473z00_543;
				}
				BGl_globalz00zzast_varz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2629z00_538,
					BgL_arg2630z00_539, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2globalzd2envz52zzast_varz00,
					BGl_globalzd2nilzd2envz00zzast_varz00,
					BGl_globalzf3zd2envz21zzast_varz00, ((long) 350727735), BFALSE,
					BFALSE, BgL_arg2649z00_542);
			}
			{	/* Ast/var.scm 65 */
				obj_t BgL_arg2650z00_544;

				obj_t BgL_arg2651z00_545;

				obj_t BgL_arg2656z00_548;

				BgL_arg2650z00_544 = CNST_TABLE_REF(((long) 5));
				BgL_arg2651z00_545 = BGl_variablez00zzast_varz00;
				{	/* Ast/var.scm 65 */
					obj_t BgL_v2474z00_549;

					BgL_v2474z00_549 = create_vector((int) (((long) 0)));
					BgL_arg2656z00_548 = BgL_v2474z00_549;
				}
				BGl_localz00zzast_varz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2650z00_544,
					BgL_arg2651z00_545, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2localzd2envz52zzast_varz00,
					BGl_localzd2nilzd2envz00zzast_varz00,
					BGl_localzf3zd2envz21zzast_varz00, ((long) 302781829), BFALSE, BFALSE,
					BgL_arg2656z00_548);
			}
			{	/* Ast/var.scm 71 */
				obj_t BgL_arg2657z00_550;

				obj_t BgL_arg2658z00_551;

				obj_t BgL_arg2661z00_554;

				BgL_arg2657z00_550 = CNST_TABLE_REF(((long) 6));
				BgL_arg2658z00_551 = BGl_valuez00zzast_varz00;
				{	/* Ast/var.scm 71 */
					obj_t BgL_v2475z00_555;

					BgL_v2475z00_555 = create_vector((int) (((long) 0)));
					BgL_arg2661z00_554 = BgL_v2475z00_555;
				}
				BGl_funz00zzast_varz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2657z00_550,
					BgL_arg2658z00_551, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2funzd2envz52zzast_varz00,
					BGl_funzd2nilzd2envz00zzast_varz00, BGl_funzf3zd2envz21zzast_varz00,
					((long) 43901315), BFALSE, BFALSE, BgL_arg2661z00_554);
			}
			{	/* Ast/var.scm 94 */
				obj_t BgL_arg2663z00_556;

				obj_t BgL_arg2664z00_557;

				obj_t BgL_arg2667z00_560;

				BgL_arg2663z00_556 = CNST_TABLE_REF(((long) 7));
				BgL_arg2664z00_557 = BGl_funz00zzast_varz00;
				{	/* Ast/var.scm 94 */
					obj_t BgL_v2476z00_561;

					BgL_v2476z00_561 = create_vector((int) (((long) 0)));
					BgL_arg2667z00_560 = BgL_v2476z00_561;
				}
				BGl_sfunz00zzast_varz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2663z00_556,
					BgL_arg2664z00_557, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2sfunzd2envz52zzast_varz00,
					BGl_sfunzd2nilzd2envz00zzast_varz00, BGl_sfunzf3zd2envz21zzast_varz00,
					((long) 155583103), BFALSE, BFALSE, BgL_arg2667z00_560);
			}
			{	/* Ast/var.scm 119 */
				obj_t BgL_arg2668z00_562;

				obj_t BgL_arg2669z00_563;

				obj_t BgL_arg2672z00_566;

				BgL_arg2668z00_562 = CNST_TABLE_REF(((long) 8));
				BgL_arg2669z00_563 = BGl_funz00zzast_varz00;
				{	/* Ast/var.scm 119 */
					obj_t BgL_v2477z00_567;

					BgL_v2477z00_567 = create_vector((int) (((long) 0)));
					BgL_arg2672z00_566 = BgL_v2477z00_567;
				}
				BGl_cfunz00zzast_varz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2668z00_562,
					BgL_arg2669z00_563, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2cfunzd2envz52zzast_varz00,
					BGl_cfunzd2nilzd2envz00zzast_varz00, BGl_cfunzf3zd2envz21zzast_varz00,
					((long) 467998590), BFALSE, BFALSE, BgL_arg2672z00_566);
			}
			{	/* Ast/var.scm 129 */
				obj_t BgL_arg2673z00_568;

				obj_t BgL_arg2674z00_569;

				obj_t BgL_arg2677z00_572;

				BgL_arg2673z00_568 = CNST_TABLE_REF(((long) 9));
				BgL_arg2674z00_569 = BGl_valuez00zzast_varz00;
				{	/* Ast/var.scm 129 */
					obj_t BgL_v2478z00_573;

					BgL_v2478z00_573 = create_vector((int) (((long) 0)));
					BgL_arg2677z00_572 = BgL_v2478z00_573;
				}
				BGl_svarz00zzast_varz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2673z00_568,
					BgL_arg2674z00_569, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2svarzd2envz52zzast_varz00,
					BGl_svarzd2nilzd2envz00zzast_varz00, BGl_svarzf3zd2envz21zzast_varz00,
					((long) 87770), BFALSE, BFALSE, BgL_arg2677z00_572);
			}
			{	/* Ast/var.scm 133 */
				obj_t BgL_arg2678z00_574;

				obj_t BgL_arg2679z00_575;

				obj_t BgL_arg2682z00_578;

				BgL_arg2678z00_574 = CNST_TABLE_REF(((long) 10));
				BgL_arg2679z00_575 = BGl_valuez00zzast_varz00;
				{	/* Ast/var.scm 133 */
					obj_t BgL_v2479z00_579;

					BgL_v2479z00_579 = create_vector((int) (((long) 0)));
					BgL_arg2682z00_578 = BgL_v2479z00_579;
				}
				BGl_scnstz00zzast_varz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2678z00_574,
					BgL_arg2679z00_575, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2scnstzd2envz52zzast_varz00,
					BGl_scnstzd2nilzd2envz00zzast_varz00,
					BGl_scnstzf3zd2envz21zzast_varz00, ((long) 441667), BFALSE, BFALSE,
					BgL_arg2682z00_578);
			}
			{	/* Ast/var.scm 141 */
				obj_t BgL_arg2683z00_580;

				obj_t BgL_arg2684z00_581;

				obj_t BgL_arg2687z00_584;

				BgL_arg2683z00_580 = CNST_TABLE_REF(((long) 11));
				BgL_arg2684z00_581 = BGl_valuez00zzast_varz00;
				{	/* Ast/var.scm 141 */
					obj_t BgL_v2480z00_585;

					BgL_v2480z00_585 = create_vector((int) (((long) 0)));
					BgL_arg2687z00_584 = BgL_v2480z00_585;
				}
				BGl_cvarz00zzast_varz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2683z00_580,
					BgL_arg2684z00_581, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2cvarzd2envz52zzast_varz00,
					BGl_cvarzd2nilzd2envz00zzast_varz00, BGl_cvarzf3zd2envz21zzast_varz00,
					((long) 464065743), BFALSE, BFALSE, BgL_arg2687z00_584);
			}
			{	/* Ast/var.scm 145 */
				obj_t BgL_arg2688z00_586;

				obj_t BgL_arg2689z00_587;

				obj_t BgL_arg2692z00_590;

				BgL_arg2688z00_586 = CNST_TABLE_REF(((long) 12));
				BgL_arg2689z00_587 = BGl_valuez00zzast_varz00;
				{	/* Ast/var.scm 145 */
					obj_t BgL_v2481z00_591;

					BgL_v2481z00_591 = create_vector((int) (((long) 0)));
					BgL_arg2692z00_590 = BgL_v2481z00_591;
				}
				BGl_sexitz00zzast_varz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2688z00_586,
					BgL_arg2689z00_587, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2sexitzd2envz52zzast_varz00,
					BGl_sexitzd2nilzd2envz00zzast_varz00,
					BGl_sexitzf3zd2envz21zzast_varz00, ((long) 144184170), BFALSE, BFALSE,
					BgL_arg2692z00_590);
			}
			{	/* Ast/var.scm 151 */
				obj_t BgL_arg2693z00_592;

				obj_t BgL_arg2694z00_593;

				obj_t BgL_arg2697z00_596;

				BgL_arg2693z00_592 = CNST_TABLE_REF(((long) 13));
				BgL_arg2694z00_593 = BGl_objectz00zz__objectz00;
				{	/* Ast/var.scm 151 */
					obj_t BgL_v2482z00_597;

					BgL_v2482z00_597 = create_vector((int) (((long) 0)));
					BgL_arg2697z00_596 = BgL_v2482z00_597;
				}
				BGl_feffectz00zzast_varz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2693z00_592,
					BgL_arg2694z00_593, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2feffectzd2envz52zzast_varz00,
					BGl_feffectzd2nilzd2envz00zzast_varz00,
					BGl_feffectzf3zd2envz21zzast_varz00, ((long) 61711229), BFALSE,
					BFALSE, BgL_arg2697z00_596);
			}
			BGl_z52thezd2feffectzd2nilz52zzast_varz00 = BUNSPEC;
			BGl_z52thezd2sexitzd2nilz52zzast_varz00 = BUNSPEC;
			BGl_z52thezd2cvarzd2nilz52zzast_varz00 = BUNSPEC;
			BGl_z52thezd2scnstzd2nilz52zzast_varz00 = BUNSPEC;
			BGl_z52thezd2svarzd2nilz52zzast_varz00 = BUNSPEC;
			BGl_z52thezd2cfunzd2nilz52zzast_varz00 = BUNSPEC;
			BGl_z52thezd2sfunzd2nilz52zzast_varz00 = BUNSPEC;
			BGl_z52thezd2funzd2nilz52zzast_varz00 = BUNSPEC;
			BGl_z52thezd2localzd2nilz52zzast_varz00 = BUNSPEC;
			BGl_z52thezd2globalzd2nilz52zzast_varz00 = BUNSPEC;
			BGl_z52thezd2variablezd2nilz52zzast_varz00 = BUNSPEC;
			return (BGl_z52thezd2valuezd2nilz52zzast_varz00 = BUNSPEC, BUNSPEC);
		}
	}



/* feffect? */
	BGL_EXPORTED_DEF bool_t BGl_feffectzf3zf3zzast_varz00(obj_t BgL_obj2454z00_9)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 151 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2454z00_9,
				BGl_feffectz00zzast_varz00);
		}
	}



/* _feffect? */
	obj_t BGl__feffectzf3zf3zzast_varz00(obj_t BgL_envz00_2416,
		obj_t BgL_obj2454z00_2417)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 151 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2454z00_2417,
					BGl_feffectz00zzast_varz00));
		}
	}



/* make-feffect */
	BGL_EXPORTED_DEF BgL_feffectz00_bglt BGl_makezd2feffectzd2zzast_varz00(obj_t
		BgL_read2433z00_13, obj_t BgL_write2434z00_14)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 151 */
			{	/* Ast/var.scm 151 */
				BgL_feffectz00_bglt BgL_new2435z00_1174;

				{	/* Ast/var.scm 151 */
					BgL_feffectz00_bglt BgL_res2944z00_1179;

					{	/* Ast/var.scm 151 */
						BgL_feffectz00_bglt BgL_new2443z00_1175;

						BgL_new2443z00_1175 =
							((BgL_feffectz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_feffectz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2443z00_1175),
							BGl_classzd2numzd2zz__objectz00(BGl_feffectz00zzast_varz00));
						{	/* Ast/var.scm 151 */
							BgL_objectz00_bglt BgL_auxz00_3211;

							BgL_auxz00_3211 = (BgL_objectz00_bglt) (BgL_new2443z00_1175);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3211, BFALSE);
						}
						BgL_res2944z00_1179 = BgL_new2443z00_1175;
					}
					BgL_new2435z00_1174 = BgL_res2944z00_1179;
				}
				{	/* Ast/var.scm 151 */
					BgL_feffectz00_bglt BgL_res2945z00_1185;

					{	/* Ast/var.scm 151 */
						BgL_feffectz00_bglt BgL_new2439z00_1180;

						BgL_new2439z00_1180 = BgL_new2435z00_1174;
						{	/* Ast/var.scm 151 */
							obj_t BgL_read2437z00_1183;

							obj_t BgL_write2438z00_1184;

							BgL_read2437z00_1183 = BgL_read2433z00_13;
							BgL_write2438z00_1184 = BgL_write2434z00_14;
							((((BgL_feffectz00_bglt) CREF(BgL_new2439z00_1180))->
									BgL_readz00) = ((obj_t) BgL_read2437z00_1183), BUNSPEC);
							((((BgL_feffectz00_bglt) CREF(BgL_new2439z00_1180))->
									BgL_writez00) = ((obj_t) BgL_write2438z00_1184), BUNSPEC);
							BgL_res2945z00_1185 = BgL_new2439z00_1180;
					}} BgL_res2945z00_1185;
				}
				return BgL_new2435z00_1174;
			}
		}
	}



/* _make-feffect */
	obj_t BGl__makezd2feffectzd2zzast_varz00(obj_t BgL_envz00_2418,
		obj_t BgL_read2433z00_2419, obj_t BgL_write2434z00_2420)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 151 */
			return
				(obj_t) (BGl_makezd2feffectzd2zzast_varz00(BgL_read2433z00_2419,
					BgL_write2434z00_2420));
		}
	}



/* fill-feffect! */
	BGL_EXPORTED_DEF BgL_feffectz00_bglt
		BGl_fillzd2feffectz12zc0zzast_varz00(BgL_feffectz00_bglt BgL_new2439z00_15,
		obj_t BgL_read2437z00_16, obj_t BgL_write2438z00_17)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 151 */
			{	/* Ast/var.scm 151 */
				obj_t BgL_read2437z00_2708;

				obj_t BgL_write2438z00_2709;

				BgL_read2437z00_2708 = BgL_read2437z00_16;
				BgL_write2438z00_2709 = BgL_write2438z00_17;
				((((BgL_feffectz00_bglt) CREF(BgL_new2439z00_15))->BgL_readz00) =
					((obj_t) BgL_read2437z00_2708), BUNSPEC);
				((((BgL_feffectz00_bglt) CREF(BgL_new2439z00_15))->BgL_writez00) =
					((obj_t) BgL_write2438z00_2709), BUNSPEC);
				return BgL_new2439z00_15;
			}
		}
	}



/* _fill-feffect! */
	obj_t BGl__fillzd2feffectz12zc0zzast_varz00(obj_t BgL_envz00_2421,
		obj_t BgL_new2439z00_2422, obj_t BgL_read2437z00_2423,
		obj_t BgL_write2438z00_2424)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 151 */
			{	/* Ast/var.scm 151 */
				BgL_feffectz00_bglt BgL_auxz00_3220;

				{	/* Ast/var.scm 151 */
					BgL_feffectz00_bglt BgL_res3028z00_2715;

					{	/* Ast/var.scm 151 */
						BgL_feffectz00_bglt BgL_new2439z00_2710;

						BgL_new2439z00_2710 = (BgL_feffectz00_bglt) (BgL_new2439z00_2422);
						{	/* Ast/var.scm 151 */
							obj_t BgL_read2437z00_2713;

							obj_t BgL_write2438z00_2714;

							BgL_read2437z00_2713 = BgL_read2437z00_2423;
							BgL_write2438z00_2714 = BgL_write2438z00_2424;
							((((BgL_feffectz00_bglt) CREF(BgL_new2439z00_2710))->
									BgL_readz00) = ((obj_t) BgL_read2437z00_2713), BUNSPEC);
							((((BgL_feffectz00_bglt) CREF(BgL_new2439z00_2710))->
									BgL_writez00) = ((obj_t) BgL_write2438z00_2714), BUNSPEC);
							BgL_res3028z00_2715 = BgL_new2439z00_2710;
						}
					}
					BgL_auxz00_3220 = BgL_res3028z00_2715;
				}
				return (obj_t) (BgL_auxz00_3220);
			}
		}
	}



/* %allocate-feffect */
	BGL_EXPORTED_DEF BgL_feffectz00_bglt
		BGl_z52allocatezd2feffectz80zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 151 */
			{	/* Ast/var.scm 151 */
				BgL_feffectz00_bglt BgL_new2443z00_2716;

				BgL_new2443z00_2716 =
					((BgL_feffectz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_feffectz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2443z00_2716),
					BGl_classzd2numzd2zz__objectz00(BGl_feffectz00zzast_varz00));
				{	/* Ast/var.scm 151 */
					BgL_objectz00_bglt BgL_auxz00_3229;

					BgL_auxz00_3229 = (BgL_objectz00_bglt) (BgL_new2443z00_2716);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3229, BFALSE);
				}
				return BgL_new2443z00_2716;
			}
		}
	}



/* _%allocate-feffect */
	obj_t BGl__z52allocatezd2feffectz80zzast_varz00(obj_t BgL_envz00_2414)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 151 */
			{	/* Ast/var.scm 151 */
				BgL_feffectz00_bglt BgL_auxz00_3232;

				{	/* Ast/var.scm 151 */
					BgL_feffectz00_bglt BgL_res3029z00_2720;

					{	/* Ast/var.scm 151 */
						BgL_feffectz00_bglt BgL_new2443z00_2718;

						BgL_new2443z00_2718 =
							((BgL_feffectz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_feffectz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2443z00_2718),
							BGl_classzd2numzd2zz__objectz00(BGl_feffectz00zzast_varz00));
						{	/* Ast/var.scm 151 */
							BgL_objectz00_bglt BgL_auxz00_3237;

							BgL_auxz00_3237 = (BgL_objectz00_bglt) (BgL_new2443z00_2718);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3237, BFALSE);
						}
						BgL_res3029z00_2720 = BgL_new2443z00_2718;
					}
					BgL_auxz00_3232 = BgL_res3029z00_2720;
				}
				return (obj_t) (BgL_auxz00_3232);
			}
		}
	}



/* feffect-nil */
	BGL_EXPORTED_DEF BgL_feffectz00_bglt BGl_feffectzd2nilzd2zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 151 */
			if ((BGl_z52thezd2feffectzd2nilz52zzast_varz00 == BUNSPEC))
				{	/* Ast/var.scm 151 */
					{	/* Ast/var.scm 151 */
						BgL_feffectz00_bglt BgL_res2946z00_1196;

						{	/* Ast/var.scm 151 */
							BgL_feffectz00_bglt BgL_new2443z00_1192;

							BgL_new2443z00_1192 =
								((BgL_feffectz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_feffectz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2443z00_1192),
								BGl_classzd2numzd2zz__objectz00(BGl_feffectz00zzast_varz00));
							{	/* Ast/var.scm 151 */
								BgL_objectz00_bglt BgL_auxz00_3247;

								BgL_auxz00_3247 = (BgL_objectz00_bglt) (BgL_new2443z00_1192);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3247, BFALSE);
							}
							BgL_res2946z00_1196 = BgL_new2443z00_1192;
						}
						BGl_z52thezd2feffectzd2nilz52zzast_varz00 =
							(obj_t) (BgL_res2946z00_1196);
					}
					{	/* Ast/var.scm 151 */
						BgL_feffectz00_bglt BgL_res2947z00_1202;

						{	/* Ast/var.scm 151 */
							BgL_feffectz00_bglt BgL_new2439z00_1197;

							BgL_new2439z00_1197 =
								(BgL_feffectz00_bglt)
								(BGl_z52thezd2feffectzd2nilz52zzast_varz00);
							{	/* Ast/var.scm 151 */
								obj_t BgL_read2437z00_1200;

								obj_t BgL_write2438z00_1201;

								BgL_read2437z00_1200 = BUNSPEC;
								BgL_write2438z00_1201 = BUNSPEC;
								((((BgL_feffectz00_bglt) CREF(BgL_new2439z00_1197))->
										BgL_readz00) = ((obj_t) BgL_read2437z00_1200), BUNSPEC);
								((((BgL_feffectz00_bglt) CREF(BgL_new2439z00_1197))->
										BgL_writez00) = ((obj_t) BgL_write2438z00_1201), BUNSPEC);
								BgL_res2947z00_1202 = BgL_new2439z00_1197;
						}}
						(obj_t) (BgL_res2947z00_1202);
				}}
			else
				{	/* Ast/var.scm 151 */
					BFALSE;
				}
			return (BgL_feffectz00_bglt) (BGl_z52thezd2feffectzd2nilz52zzast_varz00);
		}
	}



/* _feffect-nil */
	obj_t BGl__feffectzd2nilzd2zzast_varz00(obj_t BgL_envz00_2415)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 151 */
			return (obj_t) (BGl_feffectzd2nilzd2zzast_varz00());
		}
	}



/* sexit? */
	BGL_EXPORTED_DEF bool_t BGl_sexitzf3zf3zzast_varz00(obj_t BgL_obj2426z00_24)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 145 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2426z00_24,
				BGl_sexitz00zzast_varz00);
		}
	}



/* _sexit? */
	obj_t BGl__sexitzf3zf3zzast_varz00(obj_t BgL_envz00_2412,
		obj_t BgL_obj2426z00_2413)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 145 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2426z00_2413,
					BGl_sexitz00zzast_varz00));
		}
	}



/* make-sexit */
	BGL_EXPORTED_DEF BgL_sexitz00_bglt BGl_makezd2sexitzd2zzast_varz00(obj_t
		BgL_handler2405z00_28, bool_t BgL_detachedzf32406zf3_29)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 145 */
			{	/* Ast/var.scm 145 */
				BgL_sexitz00_bglt BgL_new2407z00_1203;

				{	/* Ast/var.scm 145 */
					BgL_sexitz00_bglt BgL_res2948z00_1208;

					{	/* Ast/var.scm 145 */
						BgL_sexitz00_bglt BgL_new2415z00_1204;

						BgL_new2415z00_1204 =
							((BgL_sexitz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_sexitz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2415z00_1204),
							BGl_classzd2numzd2zz__objectz00(BGl_sexitz00zzast_varz00));
						{	/* Ast/var.scm 145 */
							BgL_objectz00_bglt BgL_auxz00_3265;

							BgL_auxz00_3265 = (BgL_objectz00_bglt) (BgL_new2415z00_1204);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3265, BFALSE);
						}
						BgL_res2948z00_1208 = BgL_new2415z00_1204;
					}
					BgL_new2407z00_1203 = BgL_res2948z00_1208;
				}
				{	/* Ast/var.scm 145 */
					BgL_sexitz00_bglt BgL_res2949z00_1214;

					{	/* Ast/var.scm 145 */
						BgL_sexitz00_bglt BgL_new2411z00_1209;

						BgL_new2411z00_1209 = BgL_new2407z00_1203;
						{	/* Ast/var.scm 145 */
							obj_t BgL_handler2409z00_1212;

							bool_t BgL_detachedzf32410zf3_1213;

							BgL_handler2409z00_1212 = BgL_handler2405z00_28;
							BgL_detachedzf32410zf3_1213 = BgL_detachedzf32406zf3_29;
							((((BgL_sexitz00_bglt) CREF(BgL_new2411z00_1209))->
									BgL_handlerz00) = ((obj_t) BgL_handler2409z00_1212), BUNSPEC);
							((((BgL_sexitz00_bglt) CREF(BgL_new2411z00_1209))->
									BgL_detachedzf3zf3) =
								((bool_t) BgL_detachedzf32410zf3_1213), BUNSPEC);
							BgL_res2949z00_1214 = BgL_new2411z00_1209;
					}} BgL_res2949z00_1214;
				}
				return BgL_new2407z00_1203;
			}
		}
	}



/* _make-sexit */
	obj_t BGl__makezd2sexitzd2zzast_varz00(obj_t BgL_envz00_2425,
		obj_t BgL_handler2405z00_2426, obj_t BgL_detachedzf32406zf3_2427)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 145 */
			return
				(obj_t) (BGl_makezd2sexitzd2zzast_varz00(BgL_handler2405z00_2426,
					CBOOL(BgL_detachedzf32406zf3_2427)));
		}
	}



/* fill-sexit! */
	BGL_EXPORTED_DEF BgL_sexitz00_bglt
		BGl_fillzd2sexitz12zc0zzast_varz00(BgL_sexitz00_bglt BgL_new2411z00_30,
		obj_t BgL_handler2409z00_31, bool_t BgL_detachedzf32410zf3_32)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 145 */
			{	/* Ast/var.scm 145 */
				obj_t BgL_handler2409z00_2722;

				bool_t BgL_detachedzf32410zf3_2723;

				BgL_handler2409z00_2722 = BgL_handler2409z00_31;
				BgL_detachedzf32410zf3_2723 = BgL_detachedzf32410zf3_32;
				((((BgL_sexitz00_bglt) CREF(BgL_new2411z00_30))->BgL_handlerz00) =
					((obj_t) BgL_handler2409z00_2722), BUNSPEC);
				((((BgL_sexitz00_bglt) CREF(BgL_new2411z00_30))->BgL_detachedzf3zf3) =
					((bool_t) BgL_detachedzf32410zf3_2723), BUNSPEC);
				return BgL_new2411z00_30;
			}
		}
	}



/* _fill-sexit! */
	obj_t BGl__fillzd2sexitz12zc0zzast_varz00(obj_t BgL_envz00_2428,
		obj_t BgL_new2411z00_2429, obj_t BgL_handler2409z00_2430,
		obj_t BgL_detachedzf32410zf3_2431)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 145 */
			{	/* Ast/var.scm 145 */
				BgL_sexitz00_bglt BgL_auxz00_3275;

				{	/* Ast/var.scm 145 */
					BgL_sexitz00_bglt BgL_res3030z00_2729;

					{	/* Ast/var.scm 145 */
						BgL_sexitz00_bglt BgL_new2411z00_2724;

						bool_t BgL_detachedzf32410zf3_2726;

						BgL_new2411z00_2724 = (BgL_sexitz00_bglt) (BgL_new2411z00_2429);
						BgL_detachedzf32410zf3_2726 = CBOOL(BgL_detachedzf32410zf3_2431);
						{	/* Ast/var.scm 145 */
							obj_t BgL_handler2409z00_2727;

							bool_t BgL_detachedzf32410zf3_2728;

							BgL_handler2409z00_2727 = BgL_handler2409z00_2430;
							BgL_detachedzf32410zf3_2728 = BgL_detachedzf32410zf3_2726;
							((((BgL_sexitz00_bglt) CREF(BgL_new2411z00_2724))->
									BgL_handlerz00) = ((obj_t) BgL_handler2409z00_2727), BUNSPEC);
							((((BgL_sexitz00_bglt) CREF(BgL_new2411z00_2724))->
									BgL_detachedzf3zf3) =
								((bool_t) BgL_detachedzf32410zf3_2728), BUNSPEC);
							BgL_res3030z00_2729 = BgL_new2411z00_2724;
						}
					}
					BgL_auxz00_3275 = BgL_res3030z00_2729;
				}
				return (obj_t) (BgL_auxz00_3275);
			}
		}
	}



/* %allocate-sexit */
	BGL_EXPORTED_DEF BgL_sexitz00_bglt BGl_z52allocatezd2sexitz80zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 145 */
			{	/* Ast/var.scm 145 */
				BgL_sexitz00_bglt BgL_new2415z00_2730;

				BgL_new2415z00_2730 =
					((BgL_sexitz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_sexitz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2415z00_2730),
					BGl_classzd2numzd2zz__objectz00(BGl_sexitz00zzast_varz00));
				{	/* Ast/var.scm 145 */
					BgL_objectz00_bglt BgL_auxz00_3285;

					BgL_auxz00_3285 = (BgL_objectz00_bglt) (BgL_new2415z00_2730);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3285, BFALSE);
				}
				return BgL_new2415z00_2730;
			}
		}
	}



/* _%allocate-sexit */
	obj_t BGl__z52allocatezd2sexitz80zzast_varz00(obj_t BgL_envz00_2410)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 145 */
			{	/* Ast/var.scm 145 */
				BgL_sexitz00_bglt BgL_auxz00_3288;

				{	/* Ast/var.scm 145 */
					BgL_sexitz00_bglt BgL_res3031z00_2734;

					{	/* Ast/var.scm 145 */
						BgL_sexitz00_bglt BgL_new2415z00_2732;

						BgL_new2415z00_2732 =
							((BgL_sexitz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_sexitz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2415z00_2732),
							BGl_classzd2numzd2zz__objectz00(BGl_sexitz00zzast_varz00));
						{	/* Ast/var.scm 145 */
							BgL_objectz00_bglt BgL_auxz00_3293;

							BgL_auxz00_3293 = (BgL_objectz00_bglt) (BgL_new2415z00_2732);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3293, BFALSE);
						}
						BgL_res3031z00_2734 = BgL_new2415z00_2732;
					}
					BgL_auxz00_3288 = BgL_res3031z00_2734;
				}
				return (obj_t) (BgL_auxz00_3288);
			}
		}
	}



/* sexit-nil */
	BGL_EXPORTED_DEF BgL_sexitz00_bglt BGl_sexitzd2nilzd2zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 145 */
			if ((BGl_z52thezd2sexitzd2nilz52zzast_varz00 == BUNSPEC))
				{	/* Ast/var.scm 145 */
					{	/* Ast/var.scm 145 */
						BgL_sexitz00_bglt BgL_res2950z00_1225;

						{	/* Ast/var.scm 145 */
							BgL_sexitz00_bglt BgL_new2415z00_1221;

							BgL_new2415z00_1221 =
								((BgL_sexitz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_sexitz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2415z00_1221),
								BGl_classzd2numzd2zz__objectz00(BGl_sexitz00zzast_varz00));
							{	/* Ast/var.scm 145 */
								BgL_objectz00_bglt BgL_auxz00_3303;

								BgL_auxz00_3303 = (BgL_objectz00_bglt) (BgL_new2415z00_1221);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3303, BFALSE);
							}
							BgL_res2950z00_1225 = BgL_new2415z00_1221;
						}
						BGl_z52thezd2sexitzd2nilz52zzast_varz00 =
							(obj_t) (BgL_res2950z00_1225);
					}
					{	/* Ast/var.scm 145 */
						BgL_sexitz00_bglt BgL_res2951z00_1231;

						{	/* Ast/var.scm 145 */
							BgL_sexitz00_bglt BgL_new2411z00_1226;

							BgL_new2411z00_1226 =
								(BgL_sexitz00_bglt) (BGl_z52thezd2sexitzd2nilz52zzast_varz00);
							{	/* Ast/var.scm 145 */
								obj_t BgL_handler2409z00_1229;

								bool_t BgL_detachedzf32410zf3_1230;

								BgL_handler2409z00_1229 = BUNSPEC;
								BgL_detachedzf32410zf3_1230 = ((bool_t) 0);
								((((BgL_sexitz00_bglt) CREF(BgL_new2411z00_1226))->
										BgL_handlerz00) =
									((obj_t) BgL_handler2409z00_1229), BUNSPEC);
								((((BgL_sexitz00_bglt) CREF(BgL_new2411z00_1226))->
										BgL_detachedzf3zf3) =
									((bool_t) BgL_detachedzf32410zf3_1230), BUNSPEC);
								BgL_res2951z00_1231 = BgL_new2411z00_1226;
						}}
						(obj_t) (BgL_res2951z00_1231);
				}}
			else
				{	/* Ast/var.scm 145 */
					BFALSE;
				}
			return (BgL_sexitz00_bglt) (BGl_z52thezd2sexitzd2nilz52zzast_varz00);
		}
	}



/* _sexit-nil */
	obj_t BGl__sexitzd2nilzd2zzast_varz00(obj_t BgL_envz00_2411)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 145 */
			return (obj_t) (BGl_sexitzd2nilzd2zzast_varz00());
		}
	}



/* cvar? */
	BGL_EXPORTED_DEF bool_t BGl_cvarzf3zf3zzast_varz00(obj_t BgL_obj2398z00_39)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 141 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2398z00_39,
				BGl_cvarz00zzast_varz00);
		}
	}



/* _cvar? */
	obj_t BGl__cvarzf3zf3zzast_varz00(obj_t BgL_envz00_2408,
		obj_t BgL_obj2398z00_2409)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 141 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2398z00_2409,
					BGl_cvarz00zzast_varz00));
		}
	}



/* make-cvar */
	BGL_EXPORTED_DEF BgL_cvarz00_bglt BGl_makezd2cvarzd2zzast_varz00(bool_t
		BgL_macrozf32384zf3_43)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 141 */
			{	/* Ast/var.scm 141 */
				BgL_cvarz00_bglt BgL_new2385z00_1232;

				{	/* Ast/var.scm 141 */
					BgL_cvarz00_bglt BgL_res2952z00_1237;

					{	/* Ast/var.scm 141 */
						BgL_cvarz00_bglt BgL_new2391z00_1233;

						BgL_new2391z00_1233 =
							((BgL_cvarz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cvarz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2391z00_1233),
							BGl_classzd2numzd2zz__objectz00(BGl_cvarz00zzast_varz00));
						{	/* Ast/var.scm 141 */
							BgL_objectz00_bglt BgL_auxz00_3321;

							BgL_auxz00_3321 = (BgL_objectz00_bglt) (BgL_new2391z00_1233);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3321, BFALSE);
						}
						BgL_res2952z00_1237 = BgL_new2391z00_1233;
					}
					BgL_new2385z00_1232 = BgL_res2952z00_1237;
				}
				{	/* Ast/var.scm 141 */
					BgL_cvarz00_bglt BgL_res2953z00_1241;

					{	/* Ast/var.scm 141 */
						BgL_cvarz00_bglt BgL_new2388z00_1238;

						BgL_new2388z00_1238 = BgL_new2385z00_1232;
						{	/* Ast/var.scm 141 */
							bool_t BgL_macrozf32387zf3_1240;

							BgL_macrozf32387zf3_1240 = BgL_macrozf32384zf3_43;
							((((BgL_cvarz00_bglt) CREF(BgL_new2388z00_1238))->
									BgL_macrozf3zf3) =
								((bool_t) BgL_macrozf32387zf3_1240), BUNSPEC);
							BgL_res2953z00_1241 = BgL_new2388z00_1238;
					}} BgL_res2953z00_1241;
				}
				return BgL_new2385z00_1232;
			}
		}
	}



/* _make-cvar */
	obj_t BGl__makezd2cvarzd2zzast_varz00(obj_t BgL_envz00_2432,
		obj_t BgL_macrozf32384zf3_2433)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 141 */
			return
				(obj_t) (BGl_makezd2cvarzd2zzast_varz00(CBOOL
					(BgL_macrozf32384zf3_2433)));
		}
	}



/* fill-cvar! */
	BGL_EXPORTED_DEF BgL_cvarz00_bglt
		BGl_fillzd2cvarz12zc0zzast_varz00(BgL_cvarz00_bglt BgL_new2388z00_44,
		bool_t BgL_macrozf32387zf3_45)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 141 */
			{	/* Ast/var.scm 141 */
				bool_t BgL_macrozf32387zf3_2736;

				BgL_macrozf32387zf3_2736 = BgL_macrozf32387zf3_45;
				((((BgL_cvarz00_bglt) CREF(BgL_new2388z00_44))->BgL_macrozf3zf3) =
					((bool_t) BgL_macrozf32387zf3_2736), BUNSPEC);
				return BgL_new2388z00_44;
			}
		}
	}



/* _fill-cvar! */
	obj_t BGl__fillzd2cvarz12zc0zzast_varz00(obj_t BgL_envz00_2434,
		obj_t BgL_new2388z00_2435, obj_t BgL_macrozf32387zf3_2436)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 141 */
			{	/* Ast/var.scm 141 */
				BgL_cvarz00_bglt BgL_auxz00_3329;

				{	/* Ast/var.scm 141 */
					BgL_cvarz00_bglt BgL_res3032z00_2740;

					{	/* Ast/var.scm 141 */
						BgL_cvarz00_bglt BgL_new2388z00_2737;

						bool_t BgL_macrozf32387zf3_2738;

						BgL_new2388z00_2737 = (BgL_cvarz00_bglt) (BgL_new2388z00_2435);
						BgL_macrozf32387zf3_2738 = CBOOL(BgL_macrozf32387zf3_2436);
						{	/* Ast/var.scm 141 */
							bool_t BgL_macrozf32387zf3_2739;

							BgL_macrozf32387zf3_2739 = BgL_macrozf32387zf3_2738;
							((((BgL_cvarz00_bglt) CREF(BgL_new2388z00_2737))->
									BgL_macrozf3zf3) =
								((bool_t) BgL_macrozf32387zf3_2739), BUNSPEC);
							BgL_res3032z00_2740 = BgL_new2388z00_2737;
						}
					}
					BgL_auxz00_3329 = BgL_res3032z00_2740;
				}
				return (obj_t) (BgL_auxz00_3329);
			}
		}
	}



/* %allocate-cvar */
	BGL_EXPORTED_DEF BgL_cvarz00_bglt BGl_z52allocatezd2cvarz80zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 141 */
			{	/* Ast/var.scm 141 */
				BgL_cvarz00_bglt BgL_new2391z00_2741;

				BgL_new2391z00_2741 =
					((BgL_cvarz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_cvarz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new2391z00_2741),
					BGl_classzd2numzd2zz__objectz00(BGl_cvarz00zzast_varz00));
				{	/* Ast/var.scm 141 */
					BgL_objectz00_bglt BgL_auxz00_3338;

					BgL_auxz00_3338 = (BgL_objectz00_bglt) (BgL_new2391z00_2741);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3338, BFALSE);
				}
				return BgL_new2391z00_2741;
			}
		}
	}



/* _%allocate-cvar */
	obj_t BGl__z52allocatezd2cvarz80zzast_varz00(obj_t BgL_envz00_2406)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 141 */
			{	/* Ast/var.scm 141 */
				BgL_cvarz00_bglt BgL_auxz00_3341;

				{	/* Ast/var.scm 141 */
					BgL_cvarz00_bglt BgL_res3033z00_2745;

					{	/* Ast/var.scm 141 */
						BgL_cvarz00_bglt BgL_new2391z00_2743;

						BgL_new2391z00_2743 =
							((BgL_cvarz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cvarz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2391z00_2743),
							BGl_classzd2numzd2zz__objectz00(BGl_cvarz00zzast_varz00));
						{	/* Ast/var.scm 141 */
							BgL_objectz00_bglt BgL_auxz00_3346;

							BgL_auxz00_3346 = (BgL_objectz00_bglt) (BgL_new2391z00_2743);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3346, BFALSE);
						}
						BgL_res3033z00_2745 = BgL_new2391z00_2743;
					}
					BgL_auxz00_3341 = BgL_res3033z00_2745;
				}
				return (obj_t) (BgL_auxz00_3341);
			}
		}
	}



/* cvar-nil */
	BGL_EXPORTED_DEF BgL_cvarz00_bglt BGl_cvarzd2nilzd2zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 141 */
			if ((BGl_z52thezd2cvarzd2nilz52zzast_varz00 == BUNSPEC))
				{	/* Ast/var.scm 141 */
					{	/* Ast/var.scm 141 */
						BgL_cvarz00_bglt BgL_res2954z00_1251;

						{	/* Ast/var.scm 141 */
							BgL_cvarz00_bglt BgL_new2391z00_1247;

							BgL_new2391z00_1247 =
								((BgL_cvarz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cvarz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2391z00_1247),
								BGl_classzd2numzd2zz__objectz00(BGl_cvarz00zzast_varz00));
							{	/* Ast/var.scm 141 */
								BgL_objectz00_bglt BgL_auxz00_3356;

								BgL_auxz00_3356 = (BgL_objectz00_bglt) (BgL_new2391z00_1247);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3356, BFALSE);
							}
							BgL_res2954z00_1251 = BgL_new2391z00_1247;
						}
						BGl_z52thezd2cvarzd2nilz52zzast_varz00 =
							(obj_t) (BgL_res2954z00_1251);
					}
					{	/* Ast/var.scm 141 */
						BgL_cvarz00_bglt BgL_res2955z00_1255;

						{	/* Ast/var.scm 141 */
							BgL_cvarz00_bglt BgL_new2388z00_1252;

							BgL_new2388z00_1252 =
								(BgL_cvarz00_bglt) (BGl_z52thezd2cvarzd2nilz52zzast_varz00);
							{	/* Ast/var.scm 141 */
								bool_t BgL_macrozf32387zf3_1254;

								BgL_macrozf32387zf3_1254 = ((bool_t) 0);
								((((BgL_cvarz00_bglt) CREF(BgL_new2388z00_1252))->
										BgL_macrozf3zf3) =
									((bool_t) BgL_macrozf32387zf3_1254), BUNSPEC);
								BgL_res2955z00_1255 = BgL_new2388z00_1252;
						}}
						(obj_t) (BgL_res2955z00_1255);
				}}
			else
				{	/* Ast/var.scm 141 */
					BFALSE;
				}
			return (BgL_cvarz00_bglt) (BGl_z52thezd2cvarzd2nilz52zzast_varz00);
		}
	}



/* _cvar-nil */
	obj_t BGl__cvarzd2nilzd2zzast_varz00(obj_t BgL_envz00_2407)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 141 */
			return (obj_t) (BGl_cvarzd2nilzd2zzast_varz00());
		}
	}



/* scnst? */
	BGL_EXPORTED_DEF bool_t BGl_scnstzf3zf3zzast_varz00(obj_t BgL_obj2382z00_47)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 133 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2382z00_47,
				BGl_scnstz00zzast_varz00);
		}
	}



/* _scnst? */
	obj_t BGl__scnstzf3zf3zzast_varz00(obj_t BgL_envz00_2404,
		obj_t BgL_obj2382z00_2405)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 133 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2382z00_2405,
					BGl_scnstz00zzast_varz00));
		}
	}



/* make-scnst */
	BGL_EXPORTED_DEF BgL_scnstz00_bglt BGl_makezd2scnstzd2zzast_varz00(obj_t
		BgL_node2354z00_51, obj_t BgL_class2355z00_52, obj_t BgL_loc2356z00_53)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 133 */
			{	/* Ast/var.scm 133 */
				BgL_scnstz00_bglt BgL_new2357z00_1256;

				{	/* Ast/var.scm 133 */
					BgL_scnstz00_bglt BgL_res2956z00_1261;

					{	/* Ast/var.scm 133 */
						BgL_scnstz00_bglt BgL_new2367z00_1257;

						BgL_new2367z00_1257 =
							((BgL_scnstz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_scnstz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2367z00_1257),
							BGl_classzd2numzd2zz__objectz00(BGl_scnstz00zzast_varz00));
						{	/* Ast/var.scm 133 */
							BgL_objectz00_bglt BgL_auxz00_3373;

							BgL_auxz00_3373 = (BgL_objectz00_bglt) (BgL_new2367z00_1257);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3373, BFALSE);
						}
						BgL_res2956z00_1261 = BgL_new2367z00_1257;
					}
					BgL_new2357z00_1256 = BgL_res2956z00_1261;
				}
				{	/* Ast/var.scm 133 */
					BgL_scnstz00_bglt BgL_res2957z00_1269;

					{	/* Ast/var.scm 133 */
						BgL_scnstz00_bglt BgL_new2362z00_1262;

						BgL_new2362z00_1262 = BgL_new2357z00_1256;
						{	/* Ast/var.scm 133 */
							obj_t BgL_node2359z00_1266;

							obj_t BgL_class2360z00_1267;

							obj_t BgL_loc2361z00_1268;

							BgL_node2359z00_1266 = BgL_node2354z00_51;
							BgL_class2360z00_1267 = BgL_class2355z00_52;
							BgL_loc2361z00_1268 = BgL_loc2356z00_53;
							((((BgL_scnstz00_bglt) CREF(BgL_new2362z00_1262))->BgL_nodez00) =
								((obj_t) BgL_node2359z00_1266), BUNSPEC);
							((((BgL_scnstz00_bglt) CREF(BgL_new2362z00_1262))->BgL_classz00) =
								((obj_t) BgL_class2360z00_1267), BUNSPEC);
							((((BgL_scnstz00_bglt) CREF(BgL_new2362z00_1262))->BgL_locz00) =
								((obj_t) BgL_loc2361z00_1268), BUNSPEC);
							BgL_res2957z00_1269 = BgL_new2362z00_1262;
					}} BgL_res2957z00_1269;
				}
				return BgL_new2357z00_1256;
			}
		}
	}



/* _make-scnst */
	obj_t BGl__makezd2scnstzd2zzast_varz00(obj_t BgL_envz00_2437,
		obj_t BgL_node2354z00_2438, obj_t BgL_class2355z00_2439,
		obj_t BgL_loc2356z00_2440)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 133 */
			return
				(obj_t) (BGl_makezd2scnstzd2zzast_varz00(BgL_node2354z00_2438,
					BgL_class2355z00_2439, BgL_loc2356z00_2440));
		}
	}



/* fill-scnst! */
	BGL_EXPORTED_DEF BgL_scnstz00_bglt
		BGl_fillzd2scnstz12zc0zzast_varz00(BgL_scnstz00_bglt BgL_new2362z00_54,
		obj_t BgL_node2359z00_55, obj_t BgL_class2360z00_56,
		obj_t BgL_loc2361z00_57)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 133 */
			{	/* Ast/var.scm 133 */
				obj_t BgL_node2359z00_2747;

				obj_t BgL_class2360z00_2748;

				obj_t BgL_loc2361z00_2749;

				BgL_node2359z00_2747 = BgL_node2359z00_55;
				BgL_class2360z00_2748 = BgL_class2360z00_56;
				BgL_loc2361z00_2749 = BgL_loc2361z00_57;
				((((BgL_scnstz00_bglt) CREF(BgL_new2362z00_54))->BgL_nodez00) =
					((obj_t) BgL_node2359z00_2747), BUNSPEC);
				((((BgL_scnstz00_bglt) CREF(BgL_new2362z00_54))->BgL_classz00) =
					((obj_t) BgL_class2360z00_2748), BUNSPEC);
				((((BgL_scnstz00_bglt) CREF(BgL_new2362z00_54))->BgL_locz00) =
					((obj_t) BgL_loc2361z00_2749), BUNSPEC);
				return BgL_new2362z00_54;
			}
		}
	}



/* _fill-scnst! */
	obj_t BGl__fillzd2scnstz12zc0zzast_varz00(obj_t BgL_envz00_2441,
		obj_t BgL_new2362z00_2442, obj_t BgL_node2359z00_2443,
		obj_t BgL_class2360z00_2444, obj_t BgL_loc2361z00_2445)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 133 */
			{	/* Ast/var.scm 133 */
				BgL_scnstz00_bglt BgL_auxz00_3384;

				{	/* Ast/var.scm 133 */
					BgL_scnstz00_bglt BgL_res3034z00_2757;

					{	/* Ast/var.scm 133 */
						BgL_scnstz00_bglt BgL_new2362z00_2750;

						BgL_new2362z00_2750 = (BgL_scnstz00_bglt) (BgL_new2362z00_2442);
						{	/* Ast/var.scm 133 */
							obj_t BgL_node2359z00_2754;

							obj_t BgL_class2360z00_2755;

							obj_t BgL_loc2361z00_2756;

							BgL_node2359z00_2754 = BgL_node2359z00_2443;
							BgL_class2360z00_2755 = BgL_class2360z00_2444;
							BgL_loc2361z00_2756 = BgL_loc2361z00_2445;
							((((BgL_scnstz00_bglt) CREF(BgL_new2362z00_2750))->BgL_nodez00) =
								((obj_t) BgL_node2359z00_2754), BUNSPEC);
							((((BgL_scnstz00_bglt) CREF(BgL_new2362z00_2750))->BgL_classz00) =
								((obj_t) BgL_class2360z00_2755), BUNSPEC);
							((((BgL_scnstz00_bglt) CREF(BgL_new2362z00_2750))->BgL_locz00) =
								((obj_t) BgL_loc2361z00_2756), BUNSPEC);
							BgL_res3034z00_2757 = BgL_new2362z00_2750;
						}
					}
					BgL_auxz00_3384 = BgL_res3034z00_2757;
				}
				return (obj_t) (BgL_auxz00_3384);
			}
		}
	}



/* %allocate-scnst */
	BGL_EXPORTED_DEF BgL_scnstz00_bglt BGl_z52allocatezd2scnstz80zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 133 */
			{	/* Ast/var.scm 133 */
				BgL_scnstz00_bglt BgL_new2367z00_2758;

				BgL_new2367z00_2758 =
					((BgL_scnstz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_scnstz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2367z00_2758),
					BGl_classzd2numzd2zz__objectz00(BGl_scnstz00zzast_varz00));
				{	/* Ast/var.scm 133 */
					BgL_objectz00_bglt BgL_auxz00_3394;

					BgL_auxz00_3394 = (BgL_objectz00_bglt) (BgL_new2367z00_2758);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3394, BFALSE);
				}
				return BgL_new2367z00_2758;
			}
		}
	}



/* _%allocate-scnst */
	obj_t BGl__z52allocatezd2scnstz80zzast_varz00(obj_t BgL_envz00_2402)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 133 */
			{	/* Ast/var.scm 133 */
				BgL_scnstz00_bglt BgL_auxz00_3397;

				{	/* Ast/var.scm 133 */
					BgL_scnstz00_bglt BgL_res3035z00_2762;

					{	/* Ast/var.scm 133 */
						BgL_scnstz00_bglt BgL_new2367z00_2760;

						BgL_new2367z00_2760 =
							((BgL_scnstz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_scnstz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2367z00_2760),
							BGl_classzd2numzd2zz__objectz00(BGl_scnstz00zzast_varz00));
						{	/* Ast/var.scm 133 */
							BgL_objectz00_bglt BgL_auxz00_3402;

							BgL_auxz00_3402 = (BgL_objectz00_bglt) (BgL_new2367z00_2760);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3402, BFALSE);
						}
						BgL_res3035z00_2762 = BgL_new2367z00_2760;
					}
					BgL_auxz00_3397 = BgL_res3035z00_2762;
				}
				return (obj_t) (BgL_auxz00_3397);
			}
		}
	}



/* scnst-nil */
	BGL_EXPORTED_DEF BgL_scnstz00_bglt BGl_scnstzd2nilzd2zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 133 */
			if ((BGl_z52thezd2scnstzd2nilz52zzast_varz00 == BUNSPEC))
				{	/* Ast/var.scm 133 */
					{	/* Ast/var.scm 133 */
						BgL_scnstz00_bglt BgL_res2958z00_1281;

						{	/* Ast/var.scm 133 */
							BgL_scnstz00_bglt BgL_new2367z00_1277;

							BgL_new2367z00_1277 =
								((BgL_scnstz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_scnstz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2367z00_1277),
								BGl_classzd2numzd2zz__objectz00(BGl_scnstz00zzast_varz00));
							{	/* Ast/var.scm 133 */
								BgL_objectz00_bglt BgL_auxz00_3412;

								BgL_auxz00_3412 = (BgL_objectz00_bglt) (BgL_new2367z00_1277);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3412, BFALSE);
							}
							BgL_res2958z00_1281 = BgL_new2367z00_1277;
						}
						BGl_z52thezd2scnstzd2nilz52zzast_varz00 =
							(obj_t) (BgL_res2958z00_1281);
					}
					{	/* Ast/var.scm 133 */
						BgL_scnstz00_bglt BgL_res2959z00_1289;

						{	/* Ast/var.scm 133 */
							BgL_scnstz00_bglt BgL_new2362z00_1282;

							BgL_new2362z00_1282 =
								(BgL_scnstz00_bglt) (BGl_z52thezd2scnstzd2nilz52zzast_varz00);
							{	/* Ast/var.scm 133 */
								obj_t BgL_node2359z00_1286;

								obj_t BgL_class2360z00_1287;

								obj_t BgL_loc2361z00_1288;

								BgL_node2359z00_1286 = BUNSPEC;
								BgL_class2360z00_1287 = BUNSPEC;
								BgL_loc2361z00_1288 = BUNSPEC;
								((((BgL_scnstz00_bglt) CREF(BgL_new2362z00_1282))->
										BgL_nodez00) = ((obj_t) BgL_node2359z00_1286), BUNSPEC);
								((((BgL_scnstz00_bglt) CREF(BgL_new2362z00_1282))->
										BgL_classz00) = ((obj_t) BgL_class2360z00_1287), BUNSPEC);
								((((BgL_scnstz00_bglt) CREF(BgL_new2362z00_1282))->BgL_locz00) =
									((obj_t) BgL_loc2361z00_1288), BUNSPEC);
								BgL_res2959z00_1289 = BgL_new2362z00_1282;
						}}
						(obj_t) (BgL_res2959z00_1289);
				}}
			else
				{	/* Ast/var.scm 133 */
					BFALSE;
				}
			return (BgL_scnstz00_bglt) (BGl_z52thezd2scnstzd2nilz52zzast_varz00);
		}
	}



/* _scnst-nil */
	obj_t BGl__scnstzd2nilzd2zzast_varz00(obj_t BgL_envz00_2403)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 133 */
			return (obj_t) (BGl_scnstzd2nilzd2zzast_varz00());
		}
	}



/* svar? */
	BGL_EXPORTED_DEF bool_t BGl_svarzf3zf3zzast_varz00(obj_t BgL_obj2346z00_65)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 129 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2346z00_65,
				BGl_svarz00zzast_varz00);
		}
	}



/* _svar? */
	obj_t BGl__svarzf3zf3zzast_varz00(obj_t BgL_envz00_2400,
		obj_t BgL_obj2346z00_2401)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 129 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2346z00_2401,
					BGl_svarz00zzast_varz00));
		}
	}



/* make-svar */
	BGL_EXPORTED_DEF BgL_svarz00_bglt BGl_makezd2svarzd2zzast_varz00(obj_t
		BgL_loc2332z00_69)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 129 */
			{	/* Ast/var.scm 129 */
				BgL_svarz00_bglt BgL_new2333z00_1290;

				{	/* Ast/var.scm 129 */
					BgL_svarz00_bglt BgL_res2960z00_1295;

					{	/* Ast/var.scm 129 */
						BgL_svarz00_bglt BgL_new2339z00_1291;

						BgL_new2339z00_1291 =
							((BgL_svarz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_svarz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2339z00_1291),
							BGl_classzd2numzd2zz__objectz00(BGl_svarz00zzast_varz00));
						{	/* Ast/var.scm 129 */
							BgL_objectz00_bglt BgL_auxz00_3431;

							BgL_auxz00_3431 = (BgL_objectz00_bglt) (BgL_new2339z00_1291);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3431, BFALSE);
						}
						BgL_res2960z00_1295 = BgL_new2339z00_1291;
					}
					BgL_new2333z00_1290 = BgL_res2960z00_1295;
				}
				{	/* Ast/var.scm 129 */
					BgL_svarz00_bglt BgL_res2961z00_1299;

					{	/* Ast/var.scm 129 */
						BgL_svarz00_bglt BgL_new2336z00_1296;

						BgL_new2336z00_1296 = BgL_new2333z00_1290;
						{	/* Ast/var.scm 129 */
							obj_t BgL_loc2335z00_1298;

							BgL_loc2335z00_1298 = BgL_loc2332z00_69;
							((((BgL_svarz00_bglt) CREF(BgL_new2336z00_1296))->BgL_locz00) =
								((obj_t) BgL_loc2335z00_1298), BUNSPEC);
							BgL_res2961z00_1299 = BgL_new2336z00_1296;
					}} BgL_res2961z00_1299;
				}
				return BgL_new2333z00_1290;
			}
		}
	}



/* _make-svar */
	obj_t BGl__makezd2svarzd2zzast_varz00(obj_t BgL_envz00_2446,
		obj_t BgL_loc2332z00_2447)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 129 */
			return (obj_t) (BGl_makezd2svarzd2zzast_varz00(BgL_loc2332z00_2447));
		}
	}



/* fill-svar! */
	BGL_EXPORTED_DEF BgL_svarz00_bglt
		BGl_fillzd2svarz12zc0zzast_varz00(BgL_svarz00_bglt BgL_new2336z00_70,
		obj_t BgL_loc2335z00_71)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 129 */
			{	/* Ast/var.scm 129 */
				obj_t BgL_loc2335z00_2764;

				BgL_loc2335z00_2764 = BgL_loc2335z00_71;
				((((BgL_svarz00_bglt) CREF(BgL_new2336z00_70))->BgL_locz00) =
					((obj_t) BgL_loc2335z00_2764), BUNSPEC);
				return BgL_new2336z00_70;
			}
		}
	}



/* _fill-svar! */
	obj_t BGl__fillzd2svarz12zc0zzast_varz00(obj_t BgL_envz00_2448,
		obj_t BgL_new2336z00_2449, obj_t BgL_loc2335z00_2450)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 129 */
			{	/* Ast/var.scm 129 */
				BgL_svarz00_bglt BgL_auxz00_3438;

				{	/* Ast/var.scm 129 */
					BgL_svarz00_bglt BgL_res3036z00_2768;

					{	/* Ast/var.scm 129 */
						BgL_svarz00_bglt BgL_new2336z00_2765;

						BgL_new2336z00_2765 = (BgL_svarz00_bglt) (BgL_new2336z00_2449);
						{	/* Ast/var.scm 129 */
							obj_t BgL_loc2335z00_2767;

							BgL_loc2335z00_2767 = BgL_loc2335z00_2450;
							((((BgL_svarz00_bglt) CREF(BgL_new2336z00_2765))->BgL_locz00) =
								((obj_t) BgL_loc2335z00_2767), BUNSPEC);
							BgL_res3036z00_2768 = BgL_new2336z00_2765;
						}
					}
					BgL_auxz00_3438 = BgL_res3036z00_2768;
				}
				return (obj_t) (BgL_auxz00_3438);
			}
		}
	}



/* %allocate-svar */
	BGL_EXPORTED_DEF BgL_svarz00_bglt BGl_z52allocatezd2svarz80zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 129 */
			{	/* Ast/var.scm 129 */
				BgL_svarz00_bglt BgL_new2339z00_2769;

				BgL_new2339z00_2769 =
					((BgL_svarz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_svarz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new2339z00_2769),
					BGl_classzd2numzd2zz__objectz00(BGl_svarz00zzast_varz00));
				{	/* Ast/var.scm 129 */
					BgL_objectz00_bglt BgL_auxz00_3446;

					BgL_auxz00_3446 = (BgL_objectz00_bglt) (BgL_new2339z00_2769);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3446, BFALSE);
				}
				return BgL_new2339z00_2769;
			}
		}
	}



/* _%allocate-svar */
	obj_t BGl__z52allocatezd2svarz80zzast_varz00(obj_t BgL_envz00_2398)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 129 */
			{	/* Ast/var.scm 129 */
				BgL_svarz00_bglt BgL_auxz00_3449;

				{	/* Ast/var.scm 129 */
					BgL_svarz00_bglt BgL_res3037z00_2773;

					{	/* Ast/var.scm 129 */
						BgL_svarz00_bglt BgL_new2339z00_2771;

						BgL_new2339z00_2771 =
							((BgL_svarz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_svarz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2339z00_2771),
							BGl_classzd2numzd2zz__objectz00(BGl_svarz00zzast_varz00));
						{	/* Ast/var.scm 129 */
							BgL_objectz00_bglt BgL_auxz00_3454;

							BgL_auxz00_3454 = (BgL_objectz00_bglt) (BgL_new2339z00_2771);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3454, BFALSE);
						}
						BgL_res3037z00_2773 = BgL_new2339z00_2771;
					}
					BgL_auxz00_3449 = BgL_res3037z00_2773;
				}
				return (obj_t) (BgL_auxz00_3449);
			}
		}
	}



/* svar-nil */
	BGL_EXPORTED_DEF BgL_svarz00_bglt BGl_svarzd2nilzd2zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 129 */
			if ((BGl_z52thezd2svarzd2nilz52zzast_varz00 == BUNSPEC))
				{	/* Ast/var.scm 129 */
					{	/* Ast/var.scm 129 */
						BgL_svarz00_bglt BgL_res2962z00_1309;

						{	/* Ast/var.scm 129 */
							BgL_svarz00_bglt BgL_new2339z00_1305;

							BgL_new2339z00_1305 =
								((BgL_svarz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_svarz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2339z00_1305),
								BGl_classzd2numzd2zz__objectz00(BGl_svarz00zzast_varz00));
							{	/* Ast/var.scm 129 */
								BgL_objectz00_bglt BgL_auxz00_3464;

								BgL_auxz00_3464 = (BgL_objectz00_bglt) (BgL_new2339z00_1305);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3464, BFALSE);
							}
							BgL_res2962z00_1309 = BgL_new2339z00_1305;
						}
						BGl_z52thezd2svarzd2nilz52zzast_varz00 =
							(obj_t) (BgL_res2962z00_1309);
					}
					{	/* Ast/var.scm 129 */
						BgL_svarz00_bglt BgL_res2963z00_1313;

						{	/* Ast/var.scm 129 */
							BgL_svarz00_bglt BgL_new2336z00_1310;

							BgL_new2336z00_1310 =
								(BgL_svarz00_bglt) (BGl_z52thezd2svarzd2nilz52zzast_varz00);
							{	/* Ast/var.scm 129 */
								obj_t BgL_loc2335z00_1312;

								BgL_loc2335z00_1312 = BUNSPEC;
								((((BgL_svarz00_bglt) CREF(BgL_new2336z00_1310))->BgL_locz00) =
									((obj_t) BgL_loc2335z00_1312), BUNSPEC);
								BgL_res2963z00_1313 = BgL_new2336z00_1310;
						}}
						(obj_t) (BgL_res2963z00_1313);
				}}
			else
				{	/* Ast/var.scm 129 */
					BFALSE;
				}
			return (BgL_svarz00_bglt) (BGl_z52thezd2svarzd2nilz52zzast_varz00);
		}
	}



/* _svar-nil */
	obj_t BGl__svarzd2nilzd2zzast_varz00(obj_t BgL_envz00_2399)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 129 */
			return (obj_t) (BGl_svarzd2nilzd2zzast_varz00());
		}
	}



/* cfun? */
	BGL_EXPORTED_DEF bool_t BGl_cfunzf3zf3zzast_varz00(obj_t BgL_obj2328z00_75)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 119 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2328z00_75,
				BGl_cfunz00zzast_varz00);
		}
	}



/* _cfun? */
	obj_t BGl__cfunzf3zf3zzast_varz00(obj_t BgL_envz00_2396,
		obj_t BgL_obj2328z00_2397)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 119 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2328z00_2397,
					BGl_cfunz00zzast_varz00));
		}
	}



/* make-cfun */
	BGL_EXPORTED_DEF BgL_cfunz00_bglt BGl_makezd2cfunzd2zzast_varz00(long
		BgL_arity2244z00_79, obj_t BgL_sidezd2effectzf32245z21_80,
		obj_t BgL_predicatezd2of2246zd2_81, obj_t BgL_stackzd2allocator2247zd2_82,
		bool_t BgL_topzf32248zf3_83, obj_t BgL_thezd2closure2249zd2_84,
		obj_t BgL_effect2250z00_85, obj_t BgL_argszd2type2251zd2_86,
		bool_t BgL_macrozf32252zf3_87, bool_t BgL_infixzf32253zf3_88,
		obj_t BgL_method2254z00_89)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 119 */
			{	/* Ast/var.scm 119 */
				BgL_cfunz00_bglt BgL_new2255z00_1314;

				{	/* Ast/var.scm 119 */
					BgL_cfunz00_bglt BgL_res2964z00_1319;

					{	/* Ast/var.scm 119 */
						BgL_cfunz00_bglt BgL_new2281z00_1315;

						BgL_new2281z00_1315 =
							((BgL_cfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cfunz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2281z00_1315),
							BGl_classzd2numzd2zz__objectz00(BGl_cfunz00zzast_varz00));
						{	/* Ast/var.scm 119 */
							BgL_objectz00_bglt BgL_auxz00_3481;

							BgL_auxz00_3481 = (BgL_objectz00_bglt) (BgL_new2281z00_1315);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3481, BFALSE);
						}
						BgL_res2964z00_1319 = BgL_new2281z00_1315;
					}
					BgL_new2255z00_1314 = BgL_res2964z00_1319;
				}
				{	/* Ast/var.scm 119 */
					BgL_cfunz00_bglt BgL_res2965z00_1343;

					{	/* Ast/var.scm 119 */
						BgL_cfunz00_bglt BgL_new2268z00_1320;

						BgL_new2268z00_1320 = BgL_new2255z00_1314;
						{	/* Ast/var.scm 119 */
							long BgL_arity2257z00_1332;

							obj_t BgL_sidezd2effectzf32258z21_1333;

							obj_t BgL_predicatezd2of2259zd2_1334;

							obj_t BgL_stackzd2allocator2260zd2_1335;

							bool_t BgL_topzf32261zf3_1336;

							obj_t BgL_thezd2closure2262zd2_1337;

							obj_t BgL_effect2263z00_1338;

							obj_t BgL_argszd2type2264zd2_1339;

							bool_t BgL_macrozf32265zf3_1340;

							bool_t BgL_infixzf32266zf3_1341;

							obj_t BgL_method2267z00_1342;

							BgL_arity2257z00_1332 = BgL_arity2244z00_79;
							BgL_sidezd2effectzf32258z21_1333 = BgL_sidezd2effectzf32245z21_80;
							BgL_predicatezd2of2259zd2_1334 = BgL_predicatezd2of2246zd2_81;
							BgL_stackzd2allocator2260zd2_1335 =
								BgL_stackzd2allocator2247zd2_82;
							BgL_topzf32261zf3_1336 = BgL_topzf32248zf3_83;
							BgL_thezd2closure2262zd2_1337 = BgL_thezd2closure2249zd2_84;
							BgL_effect2263z00_1338 = BgL_effect2250z00_85;
							BgL_argszd2type2264zd2_1339 = BgL_argszd2type2251zd2_86;
							BgL_macrozf32265zf3_1340 = BgL_macrozf32252zf3_87;
							BgL_infixzf32266zf3_1341 = BgL_infixzf32253zf3_88;
							BgL_method2267z00_1342 = BgL_method2254z00_89;
							((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_1320))->BgL_arityz00) =
								((long) BgL_arity2257z00_1332), BUNSPEC);
							((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_1320))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf32258z21_1333), BUNSPEC);
							((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_1320))->
									BgL_predicatezd2ofzd2) =
								((obj_t) BgL_predicatezd2of2259zd2_1334), BUNSPEC);
							((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_1320))->
									BgL_stackzd2allocatorzd2) =
								((obj_t) BgL_stackzd2allocator2260zd2_1335), BUNSPEC);
							((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_1320))->BgL_topzf3zf3) =
								((bool_t) BgL_topzf32261zf3_1336), BUNSPEC);
							((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_1320))->
									BgL_thezd2closurezd2) =
								((obj_t) BgL_thezd2closure2262zd2_1337), BUNSPEC);
							((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_1320))->BgL_effectz00) =
								((obj_t) BgL_effect2263z00_1338), BUNSPEC);
							((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_1320))->
									BgL_argszd2typezd2) =
								((obj_t) BgL_argszd2type2264zd2_1339), BUNSPEC);
							((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_1320))->
									BgL_macrozf3zf3) =
								((bool_t) BgL_macrozf32265zf3_1340), BUNSPEC);
							((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_1320))->
									BgL_infixzf3zf3) =
								((bool_t) BgL_infixzf32266zf3_1341), BUNSPEC);
							((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_1320))->BgL_methodz00) =
								((obj_t) BgL_method2267z00_1342), BUNSPEC);
							BgL_res2965z00_1343 = BgL_new2268z00_1320;
					}} BgL_res2965z00_1343;
				}
				return BgL_new2255z00_1314;
			}
		}
	}



/* _make-cfun */
	obj_t BGl__makezd2cfunzd2zzast_varz00(obj_t BgL_envz00_2451,
		obj_t BgL_arity2244z00_2452, obj_t BgL_sidezd2effectzf32245z21_2453,
		obj_t BgL_predicatezd2of2246zd2_2454,
		obj_t BgL_stackzd2allocator2247zd2_2455, obj_t BgL_topzf32248zf3_2456,
		obj_t BgL_thezd2closure2249zd2_2457, obj_t BgL_effect2250z00_2458,
		obj_t BgL_argszd2type2251zd2_2459, obj_t BgL_macrozf32252zf3_2460,
		obj_t BgL_infixzf32253zf3_2461, obj_t BgL_method2254z00_2462)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 119 */
			return
				(obj_t) (BGl_makezd2cfunzd2zzast_varz00(
					(long) CINT(BgL_arity2244z00_2452), BgL_sidezd2effectzf32245z21_2453,
					BgL_predicatezd2of2246zd2_2454, BgL_stackzd2allocator2247zd2_2455,
					CBOOL(BgL_topzf32248zf3_2456), BgL_thezd2closure2249zd2_2457,
					BgL_effect2250z00_2458, BgL_argszd2type2251zd2_2459,
					CBOOL(BgL_macrozf32252zf3_2460), CBOOL(BgL_infixzf32253zf3_2461),
					BgL_method2254z00_2462));
		}
	}



/* fill-cfun! */
	BGL_EXPORTED_DEF BgL_cfunz00_bglt
		BGl_fillzd2cfunz12zc0zzast_varz00(BgL_cfunz00_bglt BgL_new2268z00_90,
		long BgL_arity2257z00_91, obj_t BgL_sidezd2effectzf32258z21_92,
		obj_t BgL_predicatezd2of2259zd2_93, obj_t BgL_stackzd2allocator2260zd2_94,
		bool_t BgL_topzf32261zf3_95, obj_t BgL_thezd2closure2262zd2_96,
		obj_t BgL_effect2263z00_97, obj_t BgL_argszd2type2264zd2_98,
		bool_t BgL_macrozf32265zf3_99, bool_t BgL_infixzf32266zf3_100,
		obj_t BgL_method2267z00_101)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 119 */
			{	/* Ast/var.scm 119 */
				long BgL_arity2257z00_2775;

				obj_t BgL_sidezd2effectzf32258z21_2776;

				obj_t BgL_predicatezd2of2259zd2_2777;

				obj_t BgL_stackzd2allocator2260zd2_2778;

				bool_t BgL_topzf32261zf3_2779;

				obj_t BgL_thezd2closure2262zd2_2780;

				obj_t BgL_effect2263z00_2781;

				obj_t BgL_argszd2type2264zd2_2782;

				bool_t BgL_macrozf32265zf3_2783;

				bool_t BgL_infixzf32266zf3_2784;

				obj_t BgL_method2267z00_2785;

				BgL_arity2257z00_2775 = BgL_arity2257z00_91;
				BgL_sidezd2effectzf32258z21_2776 = BgL_sidezd2effectzf32258z21_92;
				BgL_predicatezd2of2259zd2_2777 = BgL_predicatezd2of2259zd2_93;
				BgL_stackzd2allocator2260zd2_2778 = BgL_stackzd2allocator2260zd2_94;
				BgL_topzf32261zf3_2779 = BgL_topzf32261zf3_95;
				BgL_thezd2closure2262zd2_2780 = BgL_thezd2closure2262zd2_96;
				BgL_effect2263z00_2781 = BgL_effect2263z00_97;
				BgL_argszd2type2264zd2_2782 = BgL_argszd2type2264zd2_98;
				BgL_macrozf32265zf3_2783 = BgL_macrozf32265zf3_99;
				BgL_infixzf32266zf3_2784 = BgL_infixzf32266zf3_100;
				BgL_method2267z00_2785 = BgL_method2267z00_101;
				((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_90))->BgL_arityz00) =
					((long) BgL_arity2257z00_2775), BUNSPEC);
				((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_90))->
						BgL_sidezd2effectzf3z21) =
					((obj_t) BgL_sidezd2effectzf32258z21_2776), BUNSPEC);
				((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_90))->BgL_predicatezd2ofzd2) =
					((obj_t) BgL_predicatezd2of2259zd2_2777), BUNSPEC);
				((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_90))->
						BgL_stackzd2allocatorzd2) =
					((obj_t) BgL_stackzd2allocator2260zd2_2778), BUNSPEC);
				((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_90))->BgL_topzf3zf3) =
					((bool_t) BgL_topzf32261zf3_2779), BUNSPEC);
				((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_90))->BgL_thezd2closurezd2) =
					((obj_t) BgL_thezd2closure2262zd2_2780), BUNSPEC);
				((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_90))->BgL_effectz00) =
					((obj_t) BgL_effect2263z00_2781), BUNSPEC);
				((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_90))->BgL_argszd2typezd2) =
					((obj_t) BgL_argszd2type2264zd2_2782), BUNSPEC);
				((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_90))->BgL_macrozf3zf3) =
					((bool_t) BgL_macrozf32265zf3_2783), BUNSPEC);
				((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_90))->BgL_infixzf3zf3) =
					((bool_t) BgL_infixzf32266zf3_2784), BUNSPEC);
				((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_90))->BgL_methodz00) =
					((obj_t) BgL_method2267z00_2785), BUNSPEC);
				return BgL_new2268z00_90;
			}
		}
	}



/* _fill-cfun! */
	obj_t BGl__fillzd2cfunz12zc0zzast_varz00(obj_t BgL_envz00_2463,
		obj_t BgL_new2268z00_2464, obj_t BgL_arity2257z00_2465,
		obj_t BgL_sidezd2effectzf32258z21_2466,
		obj_t BgL_predicatezd2of2259zd2_2467,
		obj_t BgL_stackzd2allocator2260zd2_2468, obj_t BgL_topzf32261zf3_2469,
		obj_t BgL_thezd2closure2262zd2_2470, obj_t BgL_effect2263z00_2471,
		obj_t BgL_argszd2type2264zd2_2472, obj_t BgL_macrozf32265zf3_2473,
		obj_t BgL_infixzf32266zf3_2474, obj_t BgL_method2267z00_2475)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 119 */
			{	/* Ast/var.scm 119 */
				BgL_cfunz00_bglt BgL_auxz00_3512;

				{	/* Ast/var.scm 119 */
					BgL_cfunz00_bglt BgL_res3038z00_2809;

					{	/* Ast/var.scm 119 */
						BgL_cfunz00_bglt BgL_new2268z00_2786;

						long BgL_arity2257z00_2787;

						bool_t BgL_topzf32261zf3_2791;

						bool_t BgL_macrozf32265zf3_2795;

						bool_t BgL_infixzf32266zf3_2796;

						obj_t BgL_method2267z00_2797;

						BgL_new2268z00_2786 = (BgL_cfunz00_bglt) (BgL_new2268z00_2464);
						BgL_arity2257z00_2787 = (long) CINT(BgL_arity2257z00_2465);
						BgL_topzf32261zf3_2791 = CBOOL(BgL_topzf32261zf3_2469);
						BgL_macrozf32265zf3_2795 = CBOOL(BgL_macrozf32265zf3_2473);
						BgL_infixzf32266zf3_2796 = CBOOL(BgL_infixzf32266zf3_2474);
						BgL_method2267z00_2797 = BgL_method2267z00_2475;
						{	/* Ast/var.scm 119 */
							long BgL_arity2257z00_2798;

							obj_t BgL_sidezd2effectzf32258z21_2799;

							obj_t BgL_predicatezd2of2259zd2_2800;

							obj_t BgL_stackzd2allocator2260zd2_2801;

							bool_t BgL_topzf32261zf3_2802;

							obj_t BgL_thezd2closure2262zd2_2803;

							obj_t BgL_effect2263z00_2804;

							obj_t BgL_argszd2type2264zd2_2805;

							bool_t BgL_macrozf32265zf3_2806;

							bool_t BgL_infixzf32266zf3_2807;

							obj_t BgL_method2267z00_2808;

							BgL_arity2257z00_2798 = BgL_arity2257z00_2787;
							BgL_sidezd2effectzf32258z21_2799 =
								BgL_sidezd2effectzf32258z21_2466;
							BgL_predicatezd2of2259zd2_2800 = BgL_predicatezd2of2259zd2_2467;
							BgL_stackzd2allocator2260zd2_2801 =
								BgL_stackzd2allocator2260zd2_2468;
							BgL_topzf32261zf3_2802 = BgL_topzf32261zf3_2791;
							BgL_thezd2closure2262zd2_2803 = BgL_thezd2closure2262zd2_2470;
							BgL_effect2263z00_2804 = BgL_effect2263z00_2471;
							BgL_argszd2type2264zd2_2805 = BgL_argszd2type2264zd2_2472;
							BgL_macrozf32265zf3_2806 = BgL_macrozf32265zf3_2795;
							BgL_infixzf32266zf3_2807 = BgL_infixzf32266zf3_2796;
							BgL_method2267z00_2808 = BgL_method2267z00_2797;
							((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_2786))->BgL_arityz00) =
								((long) BgL_arity2257z00_2798), BUNSPEC);
							((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_2786))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf32258z21_2799), BUNSPEC);
							((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_2786))->
									BgL_predicatezd2ofzd2) =
								((obj_t) BgL_predicatezd2of2259zd2_2800), BUNSPEC);
							((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_2786))->
									BgL_stackzd2allocatorzd2) =
								((obj_t) BgL_stackzd2allocator2260zd2_2801), BUNSPEC);
							((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_2786))->BgL_topzf3zf3) =
								((bool_t) BgL_topzf32261zf3_2802), BUNSPEC);
							((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_2786))->
									BgL_thezd2closurezd2) =
								((obj_t) BgL_thezd2closure2262zd2_2803), BUNSPEC);
							((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_2786))->BgL_effectz00) =
								((obj_t) BgL_effect2263z00_2804), BUNSPEC);
							((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_2786))->
									BgL_argszd2typezd2) =
								((obj_t) BgL_argszd2type2264zd2_2805), BUNSPEC);
							((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_2786))->
									BgL_macrozf3zf3) =
								((bool_t) BgL_macrozf32265zf3_2806), BUNSPEC);
							((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_2786))->
									BgL_infixzf3zf3) =
								((bool_t) BgL_infixzf32266zf3_2807), BUNSPEC);
							((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_2786))->BgL_methodz00) =
								((obj_t) BgL_method2267z00_2808), BUNSPEC);
							BgL_res3038z00_2809 = BgL_new2268z00_2786;
					}}
					BgL_auxz00_3512 = BgL_res3038z00_2809;
				}
				return (obj_t) (BgL_auxz00_3512);
			}
		}
	}



/* %allocate-cfun */
	BGL_EXPORTED_DEF BgL_cfunz00_bglt BGl_z52allocatezd2cfunz80zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 119 */
			{	/* Ast/var.scm 119 */
				BgL_cfunz00_bglt BgL_new2281z00_2810;

				BgL_new2281z00_2810 =
					((BgL_cfunz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_cfunz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new2281z00_2810),
					BGl_classzd2numzd2zz__objectz00(BGl_cfunz00zzast_varz00));
				{	/* Ast/var.scm 119 */
					BgL_objectz00_bglt BgL_auxz00_3534;

					BgL_auxz00_3534 = (BgL_objectz00_bglt) (BgL_new2281z00_2810);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3534, BFALSE);
				}
				return BgL_new2281z00_2810;
			}
		}
	}



/* _%allocate-cfun */
	obj_t BGl__z52allocatezd2cfunz80zzast_varz00(obj_t BgL_envz00_2394)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 119 */
			{	/* Ast/var.scm 119 */
				BgL_cfunz00_bglt BgL_auxz00_3537;

				{	/* Ast/var.scm 119 */
					BgL_cfunz00_bglt BgL_res3039z00_2814;

					{	/* Ast/var.scm 119 */
						BgL_cfunz00_bglt BgL_new2281z00_2812;

						BgL_new2281z00_2812 =
							((BgL_cfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cfunz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2281z00_2812),
							BGl_classzd2numzd2zz__objectz00(BGl_cfunz00zzast_varz00));
						{	/* Ast/var.scm 119 */
							BgL_objectz00_bglt BgL_auxz00_3542;

							BgL_auxz00_3542 = (BgL_objectz00_bglt) (BgL_new2281z00_2812);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3542, BFALSE);
						}
						BgL_res3039z00_2814 = BgL_new2281z00_2812;
					}
					BgL_auxz00_3537 = BgL_res3039z00_2814;
				}
				return (obj_t) (BgL_auxz00_3537);
			}
		}
	}



/* cfun-nil */
	BGL_EXPORTED_DEF BgL_cfunz00_bglt BGl_cfunzd2nilzd2zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 119 */
			if ((BGl_z52thezd2cfunzd2nilz52zzast_varz00 == BUNSPEC))
				{	/* Ast/var.scm 119 */
					{	/* Ast/var.scm 119 */
						BgL_cfunz00_bglt BgL_res2966z00_1363;

						{	/* Ast/var.scm 119 */
							BgL_cfunz00_bglt BgL_new2281z00_1359;

							BgL_new2281z00_1359 =
								((BgL_cfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cfunz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2281z00_1359),
								BGl_classzd2numzd2zz__objectz00(BGl_cfunz00zzast_varz00));
							{	/* Ast/var.scm 119 */
								BgL_objectz00_bglt BgL_auxz00_3552;

								BgL_auxz00_3552 = (BgL_objectz00_bglt) (BgL_new2281z00_1359);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3552, BFALSE);
							}
							BgL_res2966z00_1363 = BgL_new2281z00_1359;
						}
						BGl_z52thezd2cfunzd2nilz52zzast_varz00 =
							(obj_t) (BgL_res2966z00_1363);
					}
					{	/* Ast/var.scm 119 */
						BgL_cfunz00_bglt BgL_res2967z00_1387;

						{	/* Ast/var.scm 119 */
							BgL_cfunz00_bglt BgL_new2268z00_1364;

							BgL_new2268z00_1364 =
								(BgL_cfunz00_bglt) (BGl_z52thezd2cfunzd2nilz52zzast_varz00);
							{	/* Ast/var.scm 119 */
								long BgL_arity2257z00_1376;

								obj_t BgL_sidezd2effectzf32258z21_1377;

								obj_t BgL_predicatezd2of2259zd2_1378;

								obj_t BgL_stackzd2allocator2260zd2_1379;

								bool_t BgL_topzf32261zf3_1380;

								obj_t BgL_thezd2closure2262zd2_1381;

								obj_t BgL_effect2263z00_1382;

								obj_t BgL_argszd2type2264zd2_1383;

								bool_t BgL_macrozf32265zf3_1384;

								bool_t BgL_infixzf32266zf3_1385;

								obj_t BgL_method2267z00_1386;

								BgL_arity2257z00_1376 = ((long) 0);
								BgL_sidezd2effectzf32258z21_1377 = BUNSPEC;
								BgL_predicatezd2of2259zd2_1378 = BUNSPEC;
								BgL_stackzd2allocator2260zd2_1379 = BUNSPEC;
								BgL_topzf32261zf3_1380 = ((bool_t) 0);
								BgL_thezd2closure2262zd2_1381 = BUNSPEC;
								BgL_effect2263z00_1382 = BUNSPEC;
								BgL_argszd2type2264zd2_1383 = BUNSPEC;
								BgL_macrozf32265zf3_1384 = ((bool_t) 0);
								BgL_infixzf32266zf3_1385 = ((bool_t) 0);
								BgL_method2267z00_1386 = BNIL;
								((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_1364))->
										BgL_arityz00) = ((long) BgL_arity2257z00_1376), BUNSPEC);
								((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_1364))->
										BgL_sidezd2effectzf3z21) =
									((obj_t) BgL_sidezd2effectzf32258z21_1377), BUNSPEC);
								((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_1364))->
										BgL_predicatezd2ofzd2) =
									((obj_t) BgL_predicatezd2of2259zd2_1378), BUNSPEC);
								((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_1364))->
										BgL_stackzd2allocatorzd2) =
									((obj_t) BgL_stackzd2allocator2260zd2_1379), BUNSPEC);
								((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_1364))->
										BgL_topzf3zf3) =
									((bool_t) BgL_topzf32261zf3_1380), BUNSPEC);
								((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_1364))->
										BgL_thezd2closurezd2) =
									((obj_t) BgL_thezd2closure2262zd2_1381), BUNSPEC);
								((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_1364))->
										BgL_effectz00) = ((obj_t) BgL_effect2263z00_1382), BUNSPEC);
								((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_1364))->
										BgL_argszd2typezd2) =
									((obj_t) BgL_argszd2type2264zd2_1383), BUNSPEC);
								((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_1364))->
										BgL_macrozf3zf3) =
									((bool_t) BgL_macrozf32265zf3_1384), BUNSPEC);
								((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_1364))->
										BgL_infixzf3zf3) =
									((bool_t) BgL_infixzf32266zf3_1385), BUNSPEC);
								((((BgL_cfunz00_bglt) CREF(BgL_new2268z00_1364))->
										BgL_methodz00) = ((obj_t) BgL_method2267z00_1386), BUNSPEC);
								BgL_res2967z00_1387 = BgL_new2268z00_1364;
						}}
						(obj_t) (BgL_res2967z00_1387);
				}}
			else
				{	/* Ast/var.scm 119 */
					BFALSE;
				}
			return (BgL_cfunz00_bglt) (BGl_z52thezd2cfunzd2nilz52zzast_varz00);
		}
	}



/* _cfun-nil */
	obj_t BGl__cfunzd2nilzd2zzast_varz00(obj_t BgL_envz00_2395)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 119 */
			return (obj_t) (BGl_cfunzd2nilzd2zzast_varz00());
		}
	}



/* sfun? */
	BGL_EXPORTED_DEF bool_t BGl_sfunzf3zf3zzast_varz00(obj_t BgL_obj2216z00_110)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 94 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2216z00_110,
				BGl_sfunz00zzast_varz00);
		}
	}



/* _sfun? */
	obj_t BGl__sfunzf3zf3zzast_varz00(obj_t BgL_envz00_2392,
		obj_t BgL_obj2216z00_2393)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 94 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2216z00_2393,
					BGl_sfunz00zzast_varz00));
		}
	}



/* make-sfun */
	BGL_EXPORTED_DEF BgL_sfunz00_bglt BGl_makezd2sfunzd2zzast_varz00(long
		BgL_arity2090z00_114, obj_t BgL_sidezd2effectzf32091z21_115,
		obj_t BgL_predicatezd2of2092zd2_116, obj_t BgL_stackzd2allocator2093zd2_117,
		bool_t BgL_topzf32094zf3_118, obj_t BgL_thezd2closure2095zd2_119,
		obj_t BgL_effect2096z00_120, obj_t BgL_property2097z00_121,
		obj_t BgL_args2098z00_122, obj_t BgL_argszd2name2099zd2_123,
		obj_t BgL_body2100z00_124, obj_t BgL_class2101z00_125,
		obj_t BgL_dssslzd2keywords2102zd2_126, obj_t BgL_loc2103z00_127,
		obj_t BgL_optionals2104z00_128, obj_t BgL_keys2105z00_129,
		obj_t BgL_thezd2closurezd2global2106z00_130)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 94 */
			{	/* Ast/var.scm 94 */
				BgL_sfunz00_bglt BgL_new2107z00_1388;

				{	/* Ast/var.scm 94 */
					BgL_sfunz00_bglt BgL_res2968z00_1393;

					{	/* Ast/var.scm 94 */
						BgL_sfunz00_bglt BgL_new2145z00_1389;

						BgL_new2145z00_1389 =
							((BgL_sfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_sfunz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2145z00_1389),
							BGl_classzd2numzd2zz__objectz00(BGl_sfunz00zzast_varz00));
						{	/* Ast/var.scm 94 */
							BgL_objectz00_bglt BgL_auxz00_3579;

							BgL_auxz00_3579 = (BgL_objectz00_bglt) (BgL_new2145z00_1389);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3579, BFALSE);
						}
						BgL_res2968z00_1393 = BgL_new2145z00_1389;
					}
					BgL_new2107z00_1388 = BgL_res2968z00_1393;
				}
				{	/* Ast/var.scm 94 */
					BgL_sfunz00_bglt BgL_res2969z00_1429;

					{	/* Ast/var.scm 94 */
						BgL_sfunz00_bglt BgL_new2126z00_1394;

						BgL_new2126z00_1394 = BgL_new2107z00_1388;
						{	/* Ast/var.scm 94 */
							long BgL_arity2109z00_1412;

							obj_t BgL_sidezd2effectzf32110z21_1413;

							obj_t BgL_predicatezd2of2111zd2_1414;

							obj_t BgL_stackzd2allocator2112zd2_1415;

							bool_t BgL_topzf32113zf3_1416;

							obj_t BgL_thezd2closure2114zd2_1417;

							obj_t BgL_effect2115z00_1418;

							obj_t BgL_property2116z00_1419;

							obj_t BgL_args2117z00_1420;

							obj_t BgL_argszd2name2118zd2_1421;

							obj_t BgL_body2119z00_1422;

							obj_t BgL_class2120z00_1423;

							obj_t BgL_dssslzd2keywords2121zd2_1424;

							obj_t BgL_loc2122z00_1425;

							obj_t BgL_optionals2123z00_1426;

							obj_t BgL_keys2124z00_1427;

							obj_t BgL_thezd2closurezd2global2125z00_1428;

							BgL_arity2109z00_1412 = BgL_arity2090z00_114;
							BgL_sidezd2effectzf32110z21_1413 =
								BgL_sidezd2effectzf32091z21_115;
							BgL_predicatezd2of2111zd2_1414 = BgL_predicatezd2of2092zd2_116;
							BgL_stackzd2allocator2112zd2_1415 =
								BgL_stackzd2allocator2093zd2_117;
							BgL_topzf32113zf3_1416 = BgL_topzf32094zf3_118;
							BgL_thezd2closure2114zd2_1417 = BgL_thezd2closure2095zd2_119;
							BgL_effect2115z00_1418 = BgL_effect2096z00_120;
							BgL_property2116z00_1419 = BgL_property2097z00_121;
							BgL_args2117z00_1420 = BgL_args2098z00_122;
							BgL_argszd2name2118zd2_1421 = BgL_argszd2name2099zd2_123;
							BgL_body2119z00_1422 = BgL_body2100z00_124;
							BgL_class2120z00_1423 = BgL_class2101z00_125;
							BgL_dssslzd2keywords2121zd2_1424 =
								BgL_dssslzd2keywords2102zd2_126;
							BgL_loc2122z00_1425 = BgL_loc2103z00_127;
							BgL_optionals2123z00_1426 = BgL_optionals2104z00_128;
							BgL_keys2124z00_1427 = BgL_keys2105z00_129;
							BgL_thezd2closurezd2global2125z00_1428 =
								BgL_thezd2closurezd2global2106z00_130;
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1394))->BgL_arityz00) =
								((long) BgL_arity2109z00_1412), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1394))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf32110z21_1413), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1394))->
									BgL_predicatezd2ofzd2) =
								((obj_t) BgL_predicatezd2of2111zd2_1414), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1394))->
									BgL_stackzd2allocatorzd2) =
								((obj_t) BgL_stackzd2allocator2112zd2_1415), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1394))->BgL_topzf3zf3) =
								((bool_t) BgL_topzf32113zf3_1416), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1394))->
									BgL_thezd2closurezd2) =
								((obj_t) BgL_thezd2closure2114zd2_1417), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1394))->BgL_effectz00) =
								((obj_t) BgL_effect2115z00_1418), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1394))->
									BgL_propertyz00) =
								((obj_t) BgL_property2116z00_1419), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1394))->BgL_argsz00) =
								((obj_t) BgL_args2117z00_1420), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1394))->
									BgL_argszd2namezd2) =
								((obj_t) BgL_argszd2name2118zd2_1421), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1394))->BgL_bodyz00) =
								((obj_t) BgL_body2119z00_1422), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1394))->BgL_classz00) =
								((obj_t) BgL_class2120z00_1423), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1394))->
									BgL_dssslzd2keywordszd2) =
								((obj_t) BgL_dssslzd2keywords2121zd2_1424), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1394))->BgL_locz00) =
								((obj_t) BgL_loc2122z00_1425), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1394))->
									BgL_optionalsz00) =
								((obj_t) BgL_optionals2123z00_1426), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1394))->BgL_keysz00) =
								((obj_t) BgL_keys2124z00_1427), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1394))->
									BgL_thezd2closurezd2globalz00) =
								((obj_t) BgL_thezd2closurezd2global2125z00_1428), BUNSPEC);
							BgL_res2969z00_1429 = BgL_new2126z00_1394;
					}} BgL_res2969z00_1429;
				}
				return BgL_new2107z00_1388;
			}
		}
	}



/* _make-sfun */
	obj_t BGl__makezd2sfunzd2zzast_varz00(obj_t BgL_envz00_2476,
		obj_t BgL_arity2090z00_2477, obj_t BgL_sidezd2effectzf32091z21_2478,
		obj_t BgL_predicatezd2of2092zd2_2479,
		obj_t BgL_stackzd2allocator2093zd2_2480, obj_t BgL_topzf32094zf3_2481,
		obj_t BgL_thezd2closure2095zd2_2482, obj_t BgL_effect2096z00_2483,
		obj_t BgL_property2097z00_2484, obj_t BgL_args2098z00_2485,
		obj_t BgL_argszd2name2099zd2_2486, obj_t BgL_body2100z00_2487,
		obj_t BgL_class2101z00_2488, obj_t BgL_dssslzd2keywords2102zd2_2489,
		obj_t BgL_loc2103z00_2490, obj_t BgL_optionals2104z00_2491,
		obj_t BgL_keys2105z00_2492, obj_t BgL_thezd2closurezd2global2106z00_2493)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 94 */
			return
				(obj_t) (BGl_makezd2sfunzd2zzast_varz00(
					(long) CINT(BgL_arity2090z00_2477), BgL_sidezd2effectzf32091z21_2478,
					BgL_predicatezd2of2092zd2_2479, BgL_stackzd2allocator2093zd2_2480,
					CBOOL(BgL_topzf32094zf3_2481), BgL_thezd2closure2095zd2_2482,
					BgL_effect2096z00_2483, BgL_property2097z00_2484,
					BgL_args2098z00_2485, BgL_argszd2name2099zd2_2486,
					BgL_body2100z00_2487, BgL_class2101z00_2488,
					BgL_dssslzd2keywords2102zd2_2489, BgL_loc2103z00_2490,
					BgL_optionals2104z00_2491, BgL_keys2105z00_2492,
					BgL_thezd2closurezd2global2106z00_2493));
		}
	}



/* fill-sfun! */
	BGL_EXPORTED_DEF BgL_sfunz00_bglt
		BGl_fillzd2sfunz12zc0zzast_varz00(BgL_sfunz00_bglt BgL_new2126z00_131,
		long BgL_arity2109z00_132, obj_t BgL_sidezd2effectzf32110z21_133,
		obj_t BgL_predicatezd2of2111zd2_134, obj_t BgL_stackzd2allocator2112zd2_135,
		bool_t BgL_topzf32113zf3_136, obj_t BgL_thezd2closure2114zd2_137,
		obj_t BgL_effect2115z00_138, obj_t BgL_property2116z00_139,
		obj_t BgL_args2117z00_140, obj_t BgL_argszd2name2118zd2_141,
		obj_t BgL_body2119z00_142, obj_t BgL_class2120z00_143,
		obj_t BgL_dssslzd2keywords2121zd2_144, obj_t BgL_loc2122z00_145,
		obj_t BgL_optionals2123z00_146, obj_t BgL_keys2124z00_147,
		obj_t BgL_thezd2closurezd2global2125z00_148)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 94 */
			{	/* Ast/var.scm 94 */
				long BgL_arity2109z00_2816;

				obj_t BgL_sidezd2effectzf32110z21_2817;

				obj_t BgL_predicatezd2of2111zd2_2818;

				obj_t BgL_stackzd2allocator2112zd2_2819;

				bool_t BgL_topzf32113zf3_2820;

				obj_t BgL_thezd2closure2114zd2_2821;

				obj_t BgL_effect2115z00_2822;

				obj_t BgL_property2116z00_2823;

				obj_t BgL_args2117z00_2824;

				obj_t BgL_argszd2name2118zd2_2825;

				obj_t BgL_body2119z00_2826;

				obj_t BgL_class2120z00_2827;

				obj_t BgL_dssslzd2keywords2121zd2_2828;

				obj_t BgL_loc2122z00_2829;

				obj_t BgL_optionals2123z00_2830;

				obj_t BgL_keys2124z00_2831;

				obj_t BgL_thezd2closurezd2global2125z00_2832;

				BgL_arity2109z00_2816 = BgL_arity2109z00_132;
				BgL_sidezd2effectzf32110z21_2817 = BgL_sidezd2effectzf32110z21_133;
				BgL_predicatezd2of2111zd2_2818 = BgL_predicatezd2of2111zd2_134;
				BgL_stackzd2allocator2112zd2_2819 = BgL_stackzd2allocator2112zd2_135;
				BgL_topzf32113zf3_2820 = BgL_topzf32113zf3_136;
				BgL_thezd2closure2114zd2_2821 = BgL_thezd2closure2114zd2_137;
				BgL_effect2115z00_2822 = BgL_effect2115z00_138;
				BgL_property2116z00_2823 = BgL_property2116z00_139;
				BgL_args2117z00_2824 = BgL_args2117z00_140;
				BgL_argszd2name2118zd2_2825 = BgL_argszd2name2118zd2_141;
				BgL_body2119z00_2826 = BgL_body2119z00_142;
				BgL_class2120z00_2827 = BgL_class2120z00_143;
				BgL_dssslzd2keywords2121zd2_2828 = BgL_dssslzd2keywords2121zd2_144;
				BgL_loc2122z00_2829 = BgL_loc2122z00_145;
				BgL_optionals2123z00_2830 = BgL_optionals2123z00_146;
				BgL_keys2124z00_2831 = BgL_keys2124z00_147;
				BgL_thezd2closurezd2global2125z00_2832 =
					BgL_thezd2closurezd2global2125z00_148;
				((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_131))->BgL_arityz00) =
					((long) BgL_arity2109z00_2816), BUNSPEC);
				((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_131))->
						BgL_sidezd2effectzf3z21) =
					((obj_t) BgL_sidezd2effectzf32110z21_2817), BUNSPEC);
				((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_131))->
						BgL_predicatezd2ofzd2) =
					((obj_t) BgL_predicatezd2of2111zd2_2818), BUNSPEC);
				((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_131))->
						BgL_stackzd2allocatorzd2) =
					((obj_t) BgL_stackzd2allocator2112zd2_2819), BUNSPEC);
				((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_131))->BgL_topzf3zf3) =
					((bool_t) BgL_topzf32113zf3_2820), BUNSPEC);
				((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_131))->BgL_thezd2closurezd2) =
					((obj_t) BgL_thezd2closure2114zd2_2821), BUNSPEC);
				((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_131))->BgL_effectz00) =
					((obj_t) BgL_effect2115z00_2822), BUNSPEC);
				((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_131))->BgL_propertyz00) =
					((obj_t) BgL_property2116z00_2823), BUNSPEC);
				((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_131))->BgL_argsz00) =
					((obj_t) BgL_args2117z00_2824), BUNSPEC);
				((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_131))->BgL_argszd2namezd2) =
					((obj_t) BgL_argszd2name2118zd2_2825), BUNSPEC);
				((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_131))->BgL_bodyz00) =
					((obj_t) BgL_body2119z00_2826), BUNSPEC);
				((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_131))->BgL_classz00) =
					((obj_t) BgL_class2120z00_2827), BUNSPEC);
				((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_131))->
						BgL_dssslzd2keywordszd2) =
					((obj_t) BgL_dssslzd2keywords2121zd2_2828), BUNSPEC);
				((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_131))->BgL_locz00) =
					((obj_t) BgL_loc2122z00_2829), BUNSPEC);
				((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_131))->BgL_optionalsz00) =
					((obj_t) BgL_optionals2123z00_2830), BUNSPEC);
				((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_131))->BgL_keysz00) =
					((obj_t) BgL_keys2124z00_2831), BUNSPEC);
				((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_131))->
						BgL_thezd2closurezd2globalz00) =
					((obj_t) BgL_thezd2closurezd2global2125z00_2832), BUNSPEC);
				return BgL_new2126z00_131;
			}
		}
	}



/* _fill-sfun! */
	obj_t BGl__fillzd2sfunz12zc0zzast_varz00(obj_t BgL_envz00_2494,
		obj_t BgL_new2126z00_2495, obj_t BgL_arity2109z00_2496,
		obj_t BgL_sidezd2effectzf32110z21_2497,
		obj_t BgL_predicatezd2of2111zd2_2498,
		obj_t BgL_stackzd2allocator2112zd2_2499, obj_t BgL_topzf32113zf3_2500,
		obj_t BgL_thezd2closure2114zd2_2501, obj_t BgL_effect2115z00_2502,
		obj_t BgL_property2116z00_2503, obj_t BgL_args2117z00_2504,
		obj_t BgL_argszd2name2118zd2_2505, obj_t BgL_body2119z00_2506,
		obj_t BgL_class2120z00_2507, obj_t BgL_dssslzd2keywords2121zd2_2508,
		obj_t BgL_loc2122z00_2509, obj_t BgL_optionals2123z00_2510,
		obj_t BgL_keys2124z00_2511, obj_t BgL_thezd2closurezd2global2125z00_2512)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 94 */
			{	/* Ast/var.scm 94 */
				BgL_sfunz00_bglt BgL_auxz00_3620;

				{	/* Ast/var.scm 94 */
					BgL_sfunz00_bglt BgL_res3040z00_2868;

					{	/* Ast/var.scm 94 */
						BgL_sfunz00_bglt BgL_new2126z00_2833;

						long BgL_arity2109z00_2834;

						bool_t BgL_topzf32113zf3_2838;

						BgL_new2126z00_2833 = (BgL_sfunz00_bglt) (BgL_new2126z00_2495);
						BgL_arity2109z00_2834 = (long) CINT(BgL_arity2109z00_2496);
						BgL_topzf32113zf3_2838 = CBOOL(BgL_topzf32113zf3_2500);
						{	/* Ast/var.scm 94 */
							long BgL_arity2109z00_2851;

							obj_t BgL_sidezd2effectzf32110z21_2852;

							obj_t BgL_predicatezd2of2111zd2_2853;

							obj_t BgL_stackzd2allocator2112zd2_2854;

							bool_t BgL_topzf32113zf3_2855;

							obj_t BgL_thezd2closure2114zd2_2856;

							obj_t BgL_effect2115z00_2857;

							obj_t BgL_property2116z00_2858;

							obj_t BgL_args2117z00_2859;

							obj_t BgL_argszd2name2118zd2_2860;

							obj_t BgL_body2119z00_2861;

							obj_t BgL_class2120z00_2862;

							obj_t BgL_dssslzd2keywords2121zd2_2863;

							obj_t BgL_loc2122z00_2864;

							obj_t BgL_optionals2123z00_2865;

							obj_t BgL_keys2124z00_2866;

							obj_t BgL_thezd2closurezd2global2125z00_2867;

							BgL_arity2109z00_2851 = BgL_arity2109z00_2834;
							BgL_sidezd2effectzf32110z21_2852 =
								BgL_sidezd2effectzf32110z21_2497;
							BgL_predicatezd2of2111zd2_2853 = BgL_predicatezd2of2111zd2_2498;
							BgL_stackzd2allocator2112zd2_2854 =
								BgL_stackzd2allocator2112zd2_2499;
							BgL_topzf32113zf3_2855 = BgL_topzf32113zf3_2838;
							BgL_thezd2closure2114zd2_2856 = BgL_thezd2closure2114zd2_2501;
							BgL_effect2115z00_2857 = BgL_effect2115z00_2502;
							BgL_property2116z00_2858 = BgL_property2116z00_2503;
							BgL_args2117z00_2859 = BgL_args2117z00_2504;
							BgL_argszd2name2118zd2_2860 = BgL_argszd2name2118zd2_2505;
							BgL_body2119z00_2861 = BgL_body2119z00_2506;
							BgL_class2120z00_2862 = BgL_class2120z00_2507;
							BgL_dssslzd2keywords2121zd2_2863 =
								BgL_dssslzd2keywords2121zd2_2508;
							BgL_loc2122z00_2864 = BgL_loc2122z00_2509;
							BgL_optionals2123z00_2865 = BgL_optionals2123z00_2510;
							BgL_keys2124z00_2866 = BgL_keys2124z00_2511;
							BgL_thezd2closurezd2global2125z00_2867 =
								BgL_thezd2closurezd2global2125z00_2512;
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_2833))->BgL_arityz00) =
								((long) BgL_arity2109z00_2851), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_2833))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf32110z21_2852), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_2833))->
									BgL_predicatezd2ofzd2) =
								((obj_t) BgL_predicatezd2of2111zd2_2853), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_2833))->
									BgL_stackzd2allocatorzd2) =
								((obj_t) BgL_stackzd2allocator2112zd2_2854), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_2833))->BgL_topzf3zf3) =
								((bool_t) BgL_topzf32113zf3_2855), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_2833))->
									BgL_thezd2closurezd2) =
								((obj_t) BgL_thezd2closure2114zd2_2856), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_2833))->BgL_effectz00) =
								((obj_t) BgL_effect2115z00_2857), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_2833))->
									BgL_propertyz00) =
								((obj_t) BgL_property2116z00_2858), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_2833))->BgL_argsz00) =
								((obj_t) BgL_args2117z00_2859), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_2833))->
									BgL_argszd2namezd2) =
								((obj_t) BgL_argszd2name2118zd2_2860), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_2833))->BgL_bodyz00) =
								((obj_t) BgL_body2119z00_2861), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_2833))->BgL_classz00) =
								((obj_t) BgL_class2120z00_2862), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_2833))->
									BgL_dssslzd2keywordszd2) =
								((obj_t) BgL_dssslzd2keywords2121zd2_2863), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_2833))->BgL_locz00) =
								((obj_t) BgL_loc2122z00_2864), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_2833))->
									BgL_optionalsz00) =
								((obj_t) BgL_optionals2123z00_2865), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_2833))->BgL_keysz00) =
								((obj_t) BgL_keys2124z00_2866), BUNSPEC);
							((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_2833))->
									BgL_thezd2closurezd2globalz00) =
								((obj_t) BgL_thezd2closurezd2global2125z00_2867), BUNSPEC);
							BgL_res3040z00_2868 = BgL_new2126z00_2833;
					}}
					BgL_auxz00_3620 = BgL_res3040z00_2868;
				}
				return (obj_t) (BgL_auxz00_3620);
			}
		}
	}



/* %allocate-sfun */
	BGL_EXPORTED_DEF BgL_sfunz00_bglt BGl_z52allocatezd2sfunz80zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 94 */
			{	/* Ast/var.scm 94 */
				BgL_sfunz00_bglt BgL_new2145z00_2869;

				BgL_new2145z00_2869 =
					((BgL_sfunz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_sfunz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new2145z00_2869),
					BGl_classzd2numzd2zz__objectz00(BGl_sfunz00zzast_varz00));
				{	/* Ast/var.scm 94 */
					BgL_objectz00_bglt BgL_auxz00_3646;

					BgL_auxz00_3646 = (BgL_objectz00_bglt) (BgL_new2145z00_2869);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3646, BFALSE);
				}
				return BgL_new2145z00_2869;
			}
		}
	}



/* _%allocate-sfun */
	obj_t BGl__z52allocatezd2sfunz80zzast_varz00(obj_t BgL_envz00_2390)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 94 */
			{	/* Ast/var.scm 94 */
				BgL_sfunz00_bglt BgL_auxz00_3649;

				{	/* Ast/var.scm 94 */
					BgL_sfunz00_bglt BgL_res3041z00_2873;

					{	/* Ast/var.scm 94 */
						BgL_sfunz00_bglt BgL_new2145z00_2871;

						BgL_new2145z00_2871 =
							((BgL_sfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_sfunz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2145z00_2871),
							BGl_classzd2numzd2zz__objectz00(BGl_sfunz00zzast_varz00));
						{	/* Ast/var.scm 94 */
							BgL_objectz00_bglt BgL_auxz00_3654;

							BgL_auxz00_3654 = (BgL_objectz00_bglt) (BgL_new2145z00_2871);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3654, BFALSE);
						}
						BgL_res3041z00_2873 = BgL_new2145z00_2871;
					}
					BgL_auxz00_3649 = BgL_res3041z00_2873;
				}
				return (obj_t) (BgL_auxz00_3649);
			}
		}
	}



/* sfun-nil */
	BGL_EXPORTED_DEF BgL_sfunz00_bglt BGl_sfunzd2nilzd2zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 94 */
			if ((BGl_z52thezd2sfunzd2nilz52zzast_varz00 == BUNSPEC))
				{	/* Ast/var.scm 94 */
					{	/* Ast/var.scm 94 */
						BgL_sfunz00_bglt BgL_res2970z00_1455;

						{	/* Ast/var.scm 94 */
							BgL_sfunz00_bglt BgL_new2145z00_1451;

							BgL_new2145z00_1451 =
								((BgL_sfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_sfunz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2145z00_1451),
								BGl_classzd2numzd2zz__objectz00(BGl_sfunz00zzast_varz00));
							{	/* Ast/var.scm 94 */
								BgL_objectz00_bglt BgL_auxz00_3664;

								BgL_auxz00_3664 = (BgL_objectz00_bglt) (BgL_new2145z00_1451);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3664, BFALSE);
							}
							BgL_res2970z00_1455 = BgL_new2145z00_1451;
						}
						BGl_z52thezd2sfunzd2nilz52zzast_varz00 =
							(obj_t) (BgL_res2970z00_1455);
					}
					{	/* Ast/var.scm 94 */
						BgL_sfunz00_bglt BgL_res2971z00_1491;

						{	/* Ast/var.scm 94 */
							BgL_sfunz00_bglt BgL_new2126z00_1456;

							BgL_new2126z00_1456 =
								(BgL_sfunz00_bglt) (BGl_z52thezd2sfunzd2nilz52zzast_varz00);
							{	/* Ast/var.scm 94 */
								long BgL_arity2109z00_1474;

								obj_t BgL_sidezd2effectzf32110z21_1475;

								obj_t BgL_predicatezd2of2111zd2_1476;

								obj_t BgL_stackzd2allocator2112zd2_1477;

								bool_t BgL_topzf32113zf3_1478;

								obj_t BgL_thezd2closure2114zd2_1479;

								obj_t BgL_effect2115z00_1480;

								obj_t BgL_property2116z00_1481;

								obj_t BgL_args2117z00_1482;

								obj_t BgL_argszd2name2118zd2_1483;

								obj_t BgL_body2119z00_1484;

								obj_t BgL_class2120z00_1485;

								obj_t BgL_dssslzd2keywords2121zd2_1486;

								obj_t BgL_loc2122z00_1487;

								obj_t BgL_optionals2123z00_1488;

								obj_t BgL_keys2124z00_1489;

								obj_t BgL_thezd2closurezd2global2125z00_1490;

								BgL_arity2109z00_1474 = ((long) 0);
								BgL_sidezd2effectzf32110z21_1475 = BUNSPEC;
								BgL_predicatezd2of2111zd2_1476 = BUNSPEC;
								BgL_stackzd2allocator2112zd2_1477 = BUNSPEC;
								BgL_topzf32113zf3_1478 = ((bool_t) 0);
								BgL_thezd2closure2114zd2_1479 = BUNSPEC;
								BgL_effect2115z00_1480 = BUNSPEC;
								BgL_property2116z00_1481 = BUNSPEC;
								BgL_args2117z00_1482 = BUNSPEC;
								BgL_argszd2name2118zd2_1483 = BUNSPEC;
								BgL_body2119z00_1484 = BUNSPEC;
								BgL_class2120z00_1485 = BUNSPEC;
								BgL_dssslzd2keywords2121zd2_1486 = BUNSPEC;
								BgL_loc2122z00_1487 = BUNSPEC;
								BgL_optionals2123z00_1488 = BUNSPEC;
								BgL_keys2124z00_1489 = BUNSPEC;
								BgL_thezd2closurezd2global2125z00_1490 = BUNSPEC;
								((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1456))->
										BgL_arityz00) = ((long) BgL_arity2109z00_1474), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1456))->
										BgL_sidezd2effectzf3z21) =
									((obj_t) BgL_sidezd2effectzf32110z21_1475), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1456))->
										BgL_predicatezd2ofzd2) =
									((obj_t) BgL_predicatezd2of2111zd2_1476), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1456))->
										BgL_stackzd2allocatorzd2) =
									((obj_t) BgL_stackzd2allocator2112zd2_1477), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1456))->
										BgL_topzf3zf3) =
									((bool_t) BgL_topzf32113zf3_1478), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1456))->
										BgL_thezd2closurezd2) =
									((obj_t) BgL_thezd2closure2114zd2_1479), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1456))->
										BgL_effectz00) = ((obj_t) BgL_effect2115z00_1480), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1456))->
										BgL_propertyz00) =
									((obj_t) BgL_property2116z00_1481), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1456))->BgL_argsz00) =
									((obj_t) BgL_args2117z00_1482), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1456))->
										BgL_argszd2namezd2) =
									((obj_t) BgL_argszd2name2118zd2_1483), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1456))->BgL_bodyz00) =
									((obj_t) BgL_body2119z00_1484), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1456))->
										BgL_classz00) = ((obj_t) BgL_class2120z00_1485), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1456))->
										BgL_dssslzd2keywordszd2) =
									((obj_t) BgL_dssslzd2keywords2121zd2_1486), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1456))->BgL_locz00) =
									((obj_t) BgL_loc2122z00_1487), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1456))->
										BgL_optionalsz00) =
									((obj_t) BgL_optionals2123z00_1488), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1456))->BgL_keysz00) =
									((obj_t) BgL_keys2124z00_1489), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new2126z00_1456))->
										BgL_thezd2closurezd2globalz00) =
									((obj_t) BgL_thezd2closurezd2global2125z00_1490), BUNSPEC);
								BgL_res2971z00_1491 = BgL_new2126z00_1456;
						}}
						(obj_t) (BgL_res2971z00_1491);
				}}
			else
				{	/* Ast/var.scm 94 */
					BFALSE;
				}
			return (BgL_sfunz00_bglt) (BGl_z52thezd2sfunzd2nilz52zzast_varz00);
		}
	}



/* _sfun-nil */
	obj_t BGl__sfunzd2nilzd2zzast_varz00(obj_t BgL_envz00_2391)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 94 */
			return (obj_t) (BGl_sfunzd2nilzd2zzast_varz00());
		}
	}



/* fun? */
	BGL_EXPORTED_DEF bool_t BGl_funzf3zf3zzast_varz00(obj_t BgL_obj2046z00_173)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 71 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2046z00_173,
				BGl_funz00zzast_varz00);
		}
	}



/* _fun? */
	obj_t BGl__funzf3zf3zzast_varz00(obj_t BgL_envz00_2388,
		obj_t BgL_obj2046z00_2389)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 71 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2046z00_2389,
					BGl_funz00zzast_varz00));
		}
	}



/* make-fun */
	BGL_EXPORTED_DEF BgL_funz00_bglt BGl_makezd2funzd2zzast_varz00(long
		BgL_arity1990z00_177, obj_t BgL_sidezd2effectzf31991z21_178,
		obj_t BgL_predicatezd2of1992zd2_179, obj_t BgL_stackzd2allocator1993zd2_180,
		bool_t BgL_topzf31994zf3_181, obj_t BgL_thezd2closure1995zd2_182,
		obj_t BgL_effect1996z00_183)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 71 */
			{	/* Ast/var.scm 71 */
				BgL_funz00_bglt BgL_new1997z00_1492;

				{	/* Ast/var.scm 71 */
					BgL_funz00_bglt BgL_res2972z00_1497;

					{	/* Ast/var.scm 71 */
						BgL_funz00_bglt BgL_new2015z00_1493;

						BgL_new2015z00_1493 =
							((BgL_funz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_funz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2015z00_1493),
							BGl_classzd2numzd2zz__objectz00(BGl_funz00zzast_varz00));
						{	/* Ast/var.scm 71 */
							BgL_objectz00_bglt BgL_auxz00_3697;

							BgL_auxz00_3697 = (BgL_objectz00_bglt) (BgL_new2015z00_1493);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3697, BFALSE);
						}
						BgL_res2972z00_1497 = BgL_new2015z00_1493;
					}
					BgL_new1997z00_1492 = BgL_res2972z00_1497;
				}
				{	/* Ast/var.scm 71 */
					BgL_funz00_bglt BgL_res2973z00_1513;

					{	/* Ast/var.scm 71 */
						BgL_funz00_bglt BgL_new2006z00_1498;

						BgL_new2006z00_1498 = BgL_new1997z00_1492;
						{	/* Ast/var.scm 71 */
							long BgL_arity1999z00_1506;

							obj_t BgL_sidezd2effectzf32000z21_1507;

							obj_t BgL_predicatezd2of2001zd2_1508;

							obj_t BgL_stackzd2allocator2002zd2_1509;

							bool_t BgL_topzf32003zf3_1510;

							obj_t BgL_thezd2closure2004zd2_1511;

							obj_t BgL_effect2005z00_1512;

							BgL_arity1999z00_1506 = BgL_arity1990z00_177;
							BgL_sidezd2effectzf32000z21_1507 =
								BgL_sidezd2effectzf31991z21_178;
							BgL_predicatezd2of2001zd2_1508 = BgL_predicatezd2of1992zd2_179;
							BgL_stackzd2allocator2002zd2_1509 =
								BgL_stackzd2allocator1993zd2_180;
							BgL_topzf32003zf3_1510 = BgL_topzf31994zf3_181;
							BgL_thezd2closure2004zd2_1511 = BgL_thezd2closure1995zd2_182;
							BgL_effect2005z00_1512 = BgL_effect1996z00_183;
							((((BgL_funz00_bglt) CREF(BgL_new2006z00_1498))->BgL_arityz00) =
								((long) BgL_arity1999z00_1506), BUNSPEC);
							((((BgL_funz00_bglt) CREF(BgL_new2006z00_1498))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf32000z21_1507), BUNSPEC);
							((((BgL_funz00_bglt) CREF(BgL_new2006z00_1498))->
									BgL_predicatezd2ofzd2) =
								((obj_t) BgL_predicatezd2of2001zd2_1508), BUNSPEC);
							((((BgL_funz00_bglt) CREF(BgL_new2006z00_1498))->
									BgL_stackzd2allocatorzd2) =
								((obj_t) BgL_stackzd2allocator2002zd2_1509), BUNSPEC);
							((((BgL_funz00_bglt) CREF(BgL_new2006z00_1498))->BgL_topzf3zf3) =
								((bool_t) BgL_topzf32003zf3_1510), BUNSPEC);
							((((BgL_funz00_bglt) CREF(BgL_new2006z00_1498))->
									BgL_thezd2closurezd2) =
								((obj_t) BgL_thezd2closure2004zd2_1511), BUNSPEC);
							((((BgL_funz00_bglt) CREF(BgL_new2006z00_1498))->BgL_effectz00) =
								((obj_t) BgL_effect2005z00_1512), BUNSPEC);
							BgL_res2973z00_1513 = BgL_new2006z00_1498;
					}} BgL_res2973z00_1513;
				}
				return BgL_new1997z00_1492;
			}
		}
	}



/* _make-fun */
	obj_t BGl__makezd2funzd2zzast_varz00(obj_t BgL_envz00_2513,
		obj_t BgL_arity1990z00_2514, obj_t BgL_sidezd2effectzf31991z21_2515,
		obj_t BgL_predicatezd2of1992zd2_2516,
		obj_t BgL_stackzd2allocator1993zd2_2517, obj_t BgL_topzf31994zf3_2518,
		obj_t BgL_thezd2closure1995zd2_2519, obj_t BgL_effect1996z00_2520)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 71 */
			return
				(obj_t) (BGl_makezd2funzd2zzast_varz00(
					(long) CINT(BgL_arity1990z00_2514), BgL_sidezd2effectzf31991z21_2515,
					BgL_predicatezd2of1992zd2_2516, BgL_stackzd2allocator1993zd2_2517,
					CBOOL(BgL_topzf31994zf3_2518), BgL_thezd2closure1995zd2_2519,
					BgL_effect1996z00_2520));
		}
	}



/* fill-fun! */
	BGL_EXPORTED_DEF BgL_funz00_bglt
		BGl_fillzd2funz12zc0zzast_varz00(BgL_funz00_bglt BgL_new2006z00_184,
		long BgL_arity1999z00_185, obj_t BgL_sidezd2effectzf32000z21_186,
		obj_t BgL_predicatezd2of2001zd2_187, obj_t BgL_stackzd2allocator2002zd2_188,
		bool_t BgL_topzf32003zf3_189, obj_t BgL_thezd2closure2004zd2_190,
		obj_t BgL_effect2005z00_191)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 71 */
			{	/* Ast/var.scm 71 */
				long BgL_arity1999z00_2875;

				obj_t BgL_sidezd2effectzf32000z21_2876;

				obj_t BgL_predicatezd2of2001zd2_2877;

				obj_t BgL_stackzd2allocator2002zd2_2878;

				bool_t BgL_topzf32003zf3_2879;

				obj_t BgL_thezd2closure2004zd2_2880;

				obj_t BgL_effect2005z00_2881;

				BgL_arity1999z00_2875 = BgL_arity1999z00_185;
				BgL_sidezd2effectzf32000z21_2876 = BgL_sidezd2effectzf32000z21_186;
				BgL_predicatezd2of2001zd2_2877 = BgL_predicatezd2of2001zd2_187;
				BgL_stackzd2allocator2002zd2_2878 = BgL_stackzd2allocator2002zd2_188;
				BgL_topzf32003zf3_2879 = BgL_topzf32003zf3_189;
				BgL_thezd2closure2004zd2_2880 = BgL_thezd2closure2004zd2_190;
				BgL_effect2005z00_2881 = BgL_effect2005z00_191;
				((((BgL_funz00_bglt) CREF(BgL_new2006z00_184))->BgL_arityz00) =
					((long) BgL_arity1999z00_2875), BUNSPEC);
				((((BgL_funz00_bglt) CREF(BgL_new2006z00_184))->
						BgL_sidezd2effectzf3z21) =
					((obj_t) BgL_sidezd2effectzf32000z21_2876), BUNSPEC);
				((((BgL_funz00_bglt) CREF(BgL_new2006z00_184))->BgL_predicatezd2ofzd2) =
					((obj_t) BgL_predicatezd2of2001zd2_2877), BUNSPEC);
				((((BgL_funz00_bglt) CREF(BgL_new2006z00_184))->
						BgL_stackzd2allocatorzd2) =
					((obj_t) BgL_stackzd2allocator2002zd2_2878), BUNSPEC);
				((((BgL_funz00_bglt) CREF(BgL_new2006z00_184))->BgL_topzf3zf3) =
					((bool_t) BgL_topzf32003zf3_2879), BUNSPEC);
				((((BgL_funz00_bglt) CREF(BgL_new2006z00_184))->BgL_thezd2closurezd2) =
					((obj_t) BgL_thezd2closure2004zd2_2880), BUNSPEC);
				((((BgL_funz00_bglt) CREF(BgL_new2006z00_184))->BgL_effectz00) =
					((obj_t) BgL_effect2005z00_2881), BUNSPEC);
				return BgL_new2006z00_184;
			}
		}
	}



/* _fill-fun! */
	obj_t BGl__fillzd2funz12zc0zzast_varz00(obj_t BgL_envz00_2521,
		obj_t BgL_new2006z00_2522, obj_t BgL_arity1999z00_2523,
		obj_t BgL_sidezd2effectzf32000z21_2524,
		obj_t BgL_predicatezd2of2001zd2_2525,
		obj_t BgL_stackzd2allocator2002zd2_2526, obj_t BgL_topzf32003zf3_2527,
		obj_t BgL_thezd2closure2004zd2_2528, obj_t BgL_effect2005z00_2529)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 71 */
			{	/* Ast/var.scm 71 */
				BgL_funz00_bglt BgL_auxz00_3718;

				{	/* Ast/var.scm 71 */
					BgL_funz00_bglt BgL_res3042z00_2897;

					{	/* Ast/var.scm 71 */
						BgL_funz00_bglt BgL_new2006z00_2882;

						long BgL_arity1999z00_2883;

						bool_t BgL_topzf32003zf3_2887;

						BgL_new2006z00_2882 = (BgL_funz00_bglt) (BgL_new2006z00_2522);
						BgL_arity1999z00_2883 = (long) CINT(BgL_arity1999z00_2523);
						BgL_topzf32003zf3_2887 = CBOOL(BgL_topzf32003zf3_2527);
						{	/* Ast/var.scm 71 */
							long BgL_arity1999z00_2890;

							obj_t BgL_sidezd2effectzf32000z21_2891;

							obj_t BgL_predicatezd2of2001zd2_2892;

							obj_t BgL_stackzd2allocator2002zd2_2893;

							bool_t BgL_topzf32003zf3_2894;

							obj_t BgL_thezd2closure2004zd2_2895;

							obj_t BgL_effect2005z00_2896;

							BgL_arity1999z00_2890 = BgL_arity1999z00_2883;
							BgL_sidezd2effectzf32000z21_2891 =
								BgL_sidezd2effectzf32000z21_2524;
							BgL_predicatezd2of2001zd2_2892 = BgL_predicatezd2of2001zd2_2525;
							BgL_stackzd2allocator2002zd2_2893 =
								BgL_stackzd2allocator2002zd2_2526;
							BgL_topzf32003zf3_2894 = BgL_topzf32003zf3_2887;
							BgL_thezd2closure2004zd2_2895 = BgL_thezd2closure2004zd2_2528;
							BgL_effect2005z00_2896 = BgL_effect2005z00_2529;
							((((BgL_funz00_bglt) CREF(BgL_new2006z00_2882))->BgL_arityz00) =
								((long) BgL_arity1999z00_2890), BUNSPEC);
							((((BgL_funz00_bglt) CREF(BgL_new2006z00_2882))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf32000z21_2891), BUNSPEC);
							((((BgL_funz00_bglt) CREF(BgL_new2006z00_2882))->
									BgL_predicatezd2ofzd2) =
								((obj_t) BgL_predicatezd2of2001zd2_2892), BUNSPEC);
							((((BgL_funz00_bglt) CREF(BgL_new2006z00_2882))->
									BgL_stackzd2allocatorzd2) =
								((obj_t) BgL_stackzd2allocator2002zd2_2893), BUNSPEC);
							((((BgL_funz00_bglt) CREF(BgL_new2006z00_2882))->BgL_topzf3zf3) =
								((bool_t) BgL_topzf32003zf3_2894), BUNSPEC);
							((((BgL_funz00_bglt) CREF(BgL_new2006z00_2882))->
									BgL_thezd2closurezd2) =
								((obj_t) BgL_thezd2closure2004zd2_2895), BUNSPEC);
							((((BgL_funz00_bglt) CREF(BgL_new2006z00_2882))->BgL_effectz00) =
								((obj_t) BgL_effect2005z00_2896), BUNSPEC);
							BgL_res3042z00_2897 = BgL_new2006z00_2882;
					}}
					BgL_auxz00_3718 = BgL_res3042z00_2897;
				}
				return (obj_t) (BgL_auxz00_3718);
			}
		}
	}



/* %allocate-fun */
	BGL_EXPORTED_DEF BgL_funz00_bglt BGl_z52allocatezd2funz80zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 71 */
			{	/* Ast/var.scm 71 */
				BgL_funz00_bglt BgL_new2015z00_2898;

				BgL_new2015z00_2898 =
					((BgL_funz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_funz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new2015z00_2898),
					BGl_classzd2numzd2zz__objectz00(BGl_funz00zzast_varz00));
				{	/* Ast/var.scm 71 */
					BgL_objectz00_bglt BgL_auxz00_3734;

					BgL_auxz00_3734 = (BgL_objectz00_bglt) (BgL_new2015z00_2898);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3734, BFALSE);
				}
				return BgL_new2015z00_2898;
			}
		}
	}



/* _%allocate-fun */
	obj_t BGl__z52allocatezd2funz80zzast_varz00(obj_t BgL_envz00_2386)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 71 */
			{	/* Ast/var.scm 71 */
				BgL_funz00_bglt BgL_auxz00_3737;

				{	/* Ast/var.scm 71 */
					BgL_funz00_bglt BgL_res3043z00_2902;

					{	/* Ast/var.scm 71 */
						BgL_funz00_bglt BgL_new2015z00_2900;

						BgL_new2015z00_2900 =
							((BgL_funz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_funz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2015z00_2900),
							BGl_classzd2numzd2zz__objectz00(BGl_funz00zzast_varz00));
						{	/* Ast/var.scm 71 */
							BgL_objectz00_bglt BgL_auxz00_3742;

							BgL_auxz00_3742 = (BgL_objectz00_bglt) (BgL_new2015z00_2900);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3742, BFALSE);
						}
						BgL_res3043z00_2902 = BgL_new2015z00_2900;
					}
					BgL_auxz00_3737 = BgL_res3043z00_2902;
				}
				return (obj_t) (BgL_auxz00_3737);
			}
		}
	}



/* fun-nil */
	BGL_EXPORTED_DEF BgL_funz00_bglt BGl_funzd2nilzd2zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 71 */
			if ((BGl_z52thezd2funzd2nilz52zzast_varz00 == BUNSPEC))
				{	/* Ast/var.scm 71 */
					{	/* Ast/var.scm 71 */
						BgL_funz00_bglt BgL_res2974z00_1529;

						{	/* Ast/var.scm 71 */
							BgL_funz00_bglt BgL_new2015z00_1525;

							BgL_new2015z00_1525 =
								((BgL_funz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_funz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2015z00_1525),
								BGl_classzd2numzd2zz__objectz00(BGl_funz00zzast_varz00));
							{	/* Ast/var.scm 71 */
								BgL_objectz00_bglt BgL_auxz00_3752;

								BgL_auxz00_3752 = (BgL_objectz00_bglt) (BgL_new2015z00_1525);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3752, BFALSE);
							}
							BgL_res2974z00_1529 = BgL_new2015z00_1525;
						}
						BGl_z52thezd2funzd2nilz52zzast_varz00 =
							(obj_t) (BgL_res2974z00_1529);
					}
					{	/* Ast/var.scm 71 */
						BgL_funz00_bglt BgL_res2975z00_1545;

						{	/* Ast/var.scm 71 */
							BgL_funz00_bglt BgL_new2006z00_1530;

							BgL_new2006z00_1530 =
								(BgL_funz00_bglt) (BGl_z52thezd2funzd2nilz52zzast_varz00);
							{	/* Ast/var.scm 71 */
								long BgL_arity1999z00_1538;

								obj_t BgL_sidezd2effectzf32000z21_1539;

								obj_t BgL_predicatezd2of2001zd2_1540;

								obj_t BgL_stackzd2allocator2002zd2_1541;

								bool_t BgL_topzf32003zf3_1542;

								obj_t BgL_thezd2closure2004zd2_1543;

								obj_t BgL_effect2005z00_1544;

								BgL_arity1999z00_1538 = ((long) 0);
								BgL_sidezd2effectzf32000z21_1539 = BUNSPEC;
								BgL_predicatezd2of2001zd2_1540 = BUNSPEC;
								BgL_stackzd2allocator2002zd2_1541 = BUNSPEC;
								BgL_topzf32003zf3_1542 = ((bool_t) 0);
								BgL_thezd2closure2004zd2_1543 = BUNSPEC;
								BgL_effect2005z00_1544 = BUNSPEC;
								((((BgL_funz00_bglt) CREF(BgL_new2006z00_1530))->BgL_arityz00) =
									((long) BgL_arity1999z00_1538), BUNSPEC);
								((((BgL_funz00_bglt) CREF(BgL_new2006z00_1530))->
										BgL_sidezd2effectzf3z21) =
									((obj_t) BgL_sidezd2effectzf32000z21_1539), BUNSPEC);
								((((BgL_funz00_bglt) CREF(BgL_new2006z00_1530))->
										BgL_predicatezd2ofzd2) =
									((obj_t) BgL_predicatezd2of2001zd2_1540), BUNSPEC);
								((((BgL_funz00_bglt) CREF(BgL_new2006z00_1530))->
										BgL_stackzd2allocatorzd2) =
									((obj_t) BgL_stackzd2allocator2002zd2_1541), BUNSPEC);
								((((BgL_funz00_bglt) CREF(BgL_new2006z00_1530))->
										BgL_topzf3zf3) =
									((bool_t) BgL_topzf32003zf3_1542), BUNSPEC);
								((((BgL_funz00_bglt) CREF(BgL_new2006z00_1530))->
										BgL_thezd2closurezd2) =
									((obj_t) BgL_thezd2closure2004zd2_1543), BUNSPEC);
								((((BgL_funz00_bglt) CREF(BgL_new2006z00_1530))->
										BgL_effectz00) = ((obj_t) BgL_effect2005z00_1544), BUNSPEC);
								BgL_res2975z00_1545 = BgL_new2006z00_1530;
						}}
						(obj_t) (BgL_res2975z00_1545);
				}}
			else
				{	/* Ast/var.scm 71 */
					BFALSE;
				}
			return (BgL_funz00_bglt) (BGl_z52thezd2funzd2nilz52zzast_varz00);
		}
	}



/* _fun-nil */
	obj_t BGl__funzd2nilzd2zzast_varz00(obj_t BgL_envz00_2387)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 71 */
			return (obj_t) (BGl_funzd2nilzd2zzast_varz00());
		}
	}



/* local? */
	BGL_EXPORTED_DEF bool_t BGl_localzf3zf3zzast_varz00(obj_t BgL_obj1970z00_211)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 65 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1970z00_211,
				BGl_localz00zzast_varz00);
		}
	}



/* _local? */
	obj_t BGl__localzf3zf3zzast_varz00(obj_t BgL_envz00_2384,
		obj_t BgL_obj1970z00_2385)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 65 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1970z00_2385,
					BGl_localz00zzast_varz00));
		}
	}



/* make-local */
	BGL_EXPORTED_DEF BgL_localz00_bglt BGl_makezd2localzd2zzast_varz00(obj_t
		BgL_id1893z00_215, obj_t BgL_name1894z00_216,
		BgL_typez00_bglt BgL_type1895z00_217,
		BgL_valuez00_bglt BgL_value1896z00_218, obj_t BgL_access1897z00_219,
		obj_t BgL_fastzd2alpha1898zd2_220, obj_t BgL_removable1899z00_221,
		long BgL_occurrence1900z00_222, bool_t BgL_userzf31901zf3_223,
		long BgL_key1902z00_224)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 65 */
			{	/* Ast/var.scm 65 */
				BgL_localz00_bglt BgL_new1903z00_1546;

				{	/* Ast/var.scm 65 */
					BgL_localz00_bglt BgL_res2976z00_1551;

					{	/* Ast/var.scm 65 */
						BgL_localz00_bglt BgL_new1927z00_1547;

						BgL_new1927z00_1547 =
							((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_localz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1927z00_1547),
							BGl_classzd2numzd2zz__objectz00(BGl_localz00zzast_varz00));
						{	/* Ast/var.scm 65 */
							BgL_objectz00_bglt BgL_auxz00_3775;

							BgL_auxz00_3775 = (BgL_objectz00_bglt) (BgL_new1927z00_1547);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3775, BFALSE);
						}
						BgL_res2976z00_1551 = BgL_new1927z00_1547;
					}
					BgL_new1903z00_1546 = BgL_res2976z00_1551;
				}
				{	/* Ast/var.scm 65 */
					BgL_localz00_bglt BgL_res2977z00_1573;

					{	/* Ast/var.scm 65 */
						BgL_localz00_bglt BgL_new1915z00_1552;

						BgL_new1915z00_1552 = BgL_new1903z00_1546;
						{	/* Ast/var.scm 65 */
							obj_t BgL_id1905z00_1563;

							obj_t BgL_name1906z00_1564;

							BgL_typez00_bglt BgL_type1907z00_1565;

							BgL_valuez00_bglt BgL_value1908z00_1566;

							obj_t BgL_access1909z00_1567;

							obj_t BgL_fastzd2alpha1910zd2_1568;

							obj_t BgL_removable1911z00_1569;

							long BgL_occurrence1912z00_1570;

							bool_t BgL_userzf31913zf3_1571;

							long BgL_key1914z00_1572;

							BgL_id1905z00_1563 = BgL_id1893z00_215;
							BgL_name1906z00_1564 = BgL_name1894z00_216;
							BgL_type1907z00_1565 = BgL_type1895z00_217;
							BgL_value1908z00_1566 = BgL_value1896z00_218;
							BgL_access1909z00_1567 = BgL_access1897z00_219;
							BgL_fastzd2alpha1910zd2_1568 = BgL_fastzd2alpha1898zd2_220;
							BgL_removable1911z00_1569 = BgL_removable1899z00_221;
							BgL_occurrence1912z00_1570 = BgL_occurrence1900z00_222;
							BgL_userzf31913zf3_1571 = BgL_userzf31901zf3_223;
							BgL_key1914z00_1572 = BgL_key1902z00_224;
							((((BgL_localz00_bglt) CREF(BgL_new1915z00_1552))->BgL_idz00) =
								((obj_t) BgL_id1905z00_1563), BUNSPEC);
							((((BgL_localz00_bglt) CREF(BgL_new1915z00_1552))->BgL_namez00) =
								((obj_t) BgL_name1906z00_1564), BUNSPEC);
							((((BgL_localz00_bglt) CREF(BgL_new1915z00_1552))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type1907z00_1565), BUNSPEC);
							((((BgL_localz00_bglt) CREF(BgL_new1915z00_1552))->BgL_valuez00) =
								((BgL_valuez00_bglt) BgL_value1908z00_1566), BUNSPEC);
							((((BgL_localz00_bglt) CREF(BgL_new1915z00_1552))->
									BgL_accessz00) = ((obj_t) BgL_access1909z00_1567), BUNSPEC);
							((((BgL_localz00_bglt) CREF(BgL_new1915z00_1552))->
									BgL_fastzd2alphazd2) =
								((obj_t) BgL_fastzd2alpha1910zd2_1568), BUNSPEC);
							((((BgL_localz00_bglt) CREF(BgL_new1915z00_1552))->
									BgL_removablez00) =
								((obj_t) BgL_removable1911z00_1569), BUNSPEC);
							((((BgL_localz00_bglt) CREF(BgL_new1915z00_1552))->
									BgL_occurrencez00) =
								((long) BgL_occurrence1912z00_1570), BUNSPEC);
							((((BgL_localz00_bglt) CREF(BgL_new1915z00_1552))->
									BgL_userzf3zf3) =
								((bool_t) BgL_userzf31913zf3_1571), BUNSPEC);
							((((BgL_localz00_bglt) CREF(BgL_new1915z00_1552))->BgL_keyz00) =
								((long) BgL_key1914z00_1572), BUNSPEC);
							BgL_res2977z00_1573 = BgL_new1915z00_1552;
					}} BgL_res2977z00_1573;
				}
				return BgL_new1903z00_1546;
			}
		}
	}



/* _make-local */
	obj_t BGl__makezd2localzd2zzast_varz00(obj_t BgL_envz00_2530,
		obj_t BgL_id1893z00_2531, obj_t BgL_name1894z00_2532,
		obj_t BgL_type1895z00_2533, obj_t BgL_value1896z00_2534,
		obj_t BgL_access1897z00_2535, obj_t BgL_fastzd2alpha1898zd2_2536,
		obj_t BgL_removable1899z00_2537, obj_t BgL_occurrence1900z00_2538,
		obj_t BgL_userzf31901zf3_2539, obj_t BgL_key1902z00_2540)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 65 */
			return
				(obj_t) (BGl_makezd2localzd2zzast_varz00(BgL_id1893z00_2531,
					BgL_name1894z00_2532, (BgL_typez00_bglt) (BgL_type1895z00_2533),
					(BgL_valuez00_bglt) (BgL_value1896z00_2534), BgL_access1897z00_2535,
					BgL_fastzd2alpha1898zd2_2536, BgL_removable1899z00_2537,
					(long) CINT(BgL_occurrence1900z00_2538),
					CBOOL(BgL_userzf31901zf3_2539), (long) CINT(BgL_key1902z00_2540)));
		}
	}



/* fill-local! */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_fillzd2localz12zc0zzast_varz00(BgL_localz00_bglt BgL_new1915z00_225,
		obj_t BgL_id1905z00_226, obj_t BgL_name1906z00_227,
		BgL_typez00_bglt BgL_type1907z00_228,
		BgL_valuez00_bglt BgL_value1908z00_229, obj_t BgL_access1909z00_230,
		obj_t BgL_fastzd2alpha1910zd2_231, obj_t BgL_removable1911z00_232,
		long BgL_occurrence1912z00_233, bool_t BgL_userzf31913zf3_234,
		long BgL_key1914z00_235)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 65 */
			{	/* Ast/var.scm 65 */
				obj_t BgL_id1905z00_2904;

				obj_t BgL_name1906z00_2905;

				BgL_typez00_bglt BgL_type1907z00_2906;

				BgL_valuez00_bglt BgL_value1908z00_2907;

				obj_t BgL_access1909z00_2908;

				obj_t BgL_fastzd2alpha1910zd2_2909;

				obj_t BgL_removable1911z00_2910;

				long BgL_occurrence1912z00_2911;

				bool_t BgL_userzf31913zf3_2912;

				long BgL_key1914z00_2913;

				BgL_id1905z00_2904 = BgL_id1905z00_226;
				BgL_name1906z00_2905 = BgL_name1906z00_227;
				BgL_type1907z00_2906 = BgL_type1907z00_228;
				BgL_value1908z00_2907 = BgL_value1908z00_229;
				BgL_access1909z00_2908 = BgL_access1909z00_230;
				BgL_fastzd2alpha1910zd2_2909 = BgL_fastzd2alpha1910zd2_231;
				BgL_removable1911z00_2910 = BgL_removable1911z00_232;
				BgL_occurrence1912z00_2911 = BgL_occurrence1912z00_233;
				BgL_userzf31913zf3_2912 = BgL_userzf31913zf3_234;
				BgL_key1914z00_2913 = BgL_key1914z00_235;
				((((BgL_localz00_bglt) CREF(BgL_new1915z00_225))->BgL_idz00) =
					((obj_t) BgL_id1905z00_2904), BUNSPEC);
				((((BgL_localz00_bglt) CREF(BgL_new1915z00_225))->BgL_namez00) =
					((obj_t) BgL_name1906z00_2905), BUNSPEC);
				((((BgL_localz00_bglt) CREF(BgL_new1915z00_225))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1907z00_2906), BUNSPEC);
				((((BgL_localz00_bglt) CREF(BgL_new1915z00_225))->BgL_valuez00) =
					((BgL_valuez00_bglt) BgL_value1908z00_2907), BUNSPEC);
				((((BgL_localz00_bglt) CREF(BgL_new1915z00_225))->BgL_accessz00) =
					((obj_t) BgL_access1909z00_2908), BUNSPEC);
				((((BgL_localz00_bglt) CREF(BgL_new1915z00_225))->BgL_fastzd2alphazd2) =
					((obj_t) BgL_fastzd2alpha1910zd2_2909), BUNSPEC);
				((((BgL_localz00_bglt) CREF(BgL_new1915z00_225))->BgL_removablez00) =
					((obj_t) BgL_removable1911z00_2910), BUNSPEC);
				((((BgL_localz00_bglt) CREF(BgL_new1915z00_225))->BgL_occurrencez00) =
					((long) BgL_occurrence1912z00_2911), BUNSPEC);
				((((BgL_localz00_bglt) CREF(BgL_new1915z00_225))->BgL_userzf3zf3) =
					((bool_t) BgL_userzf31913zf3_2912), BUNSPEC);
				((((BgL_localz00_bglt) CREF(BgL_new1915z00_225))->BgL_keyz00) =
					((long) BgL_key1914z00_2913), BUNSPEC);
				return BgL_new1915z00_225;
			}
		}
	}



/* _fill-local! */
	obj_t BGl__fillzd2localz12zc0zzast_varz00(obj_t BgL_envz00_2541,
		obj_t BgL_new1915z00_2542, obj_t BgL_id1905z00_2543,
		obj_t BgL_name1906z00_2544, obj_t BgL_type1907z00_2545,
		obj_t BgL_value1908z00_2546, obj_t BgL_access1909z00_2547,
		obj_t BgL_fastzd2alpha1910zd2_2548, obj_t BgL_removable1911z00_2549,
		obj_t BgL_occurrence1912z00_2550, obj_t BgL_userzf31913zf3_2551,
		obj_t BgL_key1914z00_2552)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 65 */
			{	/* Ast/var.scm 65 */
				BgL_localz00_bglt BgL_auxz00_3805;

				{	/* Ast/var.scm 65 */
					BgL_localz00_bglt BgL_res3044z00_2935;

					{	/* Ast/var.scm 65 */
						BgL_localz00_bglt BgL_new1915z00_2914;

						obj_t BgL_id1905z00_2915;

						BgL_typez00_bglt BgL_type1907z00_2917;

						BgL_valuez00_bglt BgL_value1908z00_2918;

						long BgL_occurrence1912z00_2922;

						bool_t BgL_userzf31913zf3_2923;

						long BgL_key1914z00_2924;

						BgL_new1915z00_2914 = (BgL_localz00_bglt) (BgL_new1915z00_2542);
						BgL_id1905z00_2915 = BgL_id1905z00_2543;
						BgL_type1907z00_2917 = (BgL_typez00_bglt) (BgL_type1907z00_2545);
						BgL_value1908z00_2918 = (BgL_valuez00_bglt) (BgL_value1908z00_2546);
						BgL_occurrence1912z00_2922 =
							(long) CINT(BgL_occurrence1912z00_2550);
						BgL_userzf31913zf3_2923 = CBOOL(BgL_userzf31913zf3_2551);
						BgL_key1914z00_2924 = (long) CINT(BgL_key1914z00_2552);
						{	/* Ast/var.scm 65 */
							obj_t BgL_id1905z00_2925;

							obj_t BgL_name1906z00_2926;

							BgL_typez00_bglt BgL_type1907z00_2927;

							BgL_valuez00_bglt BgL_value1908z00_2928;

							obj_t BgL_access1909z00_2929;

							obj_t BgL_fastzd2alpha1910zd2_2930;

							obj_t BgL_removable1911z00_2931;

							long BgL_occurrence1912z00_2932;

							bool_t BgL_userzf31913zf3_2933;

							long BgL_key1914z00_2934;

							BgL_id1905z00_2925 = BgL_id1905z00_2915;
							BgL_name1906z00_2926 = BgL_name1906z00_2544;
							BgL_type1907z00_2927 = BgL_type1907z00_2917;
							BgL_value1908z00_2928 = BgL_value1908z00_2918;
							BgL_access1909z00_2929 = BgL_access1909z00_2547;
							BgL_fastzd2alpha1910zd2_2930 = BgL_fastzd2alpha1910zd2_2548;
							BgL_removable1911z00_2931 = BgL_removable1911z00_2549;
							BgL_occurrence1912z00_2932 = BgL_occurrence1912z00_2922;
							BgL_userzf31913zf3_2933 = BgL_userzf31913zf3_2923;
							BgL_key1914z00_2934 = BgL_key1914z00_2924;
							((((BgL_localz00_bglt) CREF(BgL_new1915z00_2914))->BgL_idz00) =
								((obj_t) BgL_id1905z00_2925), BUNSPEC);
							((((BgL_localz00_bglt) CREF(BgL_new1915z00_2914))->BgL_namez00) =
								((obj_t) BgL_name1906z00_2926), BUNSPEC);
							((((BgL_localz00_bglt) CREF(BgL_new1915z00_2914))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type1907z00_2927), BUNSPEC);
							((((BgL_localz00_bglt) CREF(BgL_new1915z00_2914))->BgL_valuez00) =
								((BgL_valuez00_bglt) BgL_value1908z00_2928), BUNSPEC);
							((((BgL_localz00_bglt) CREF(BgL_new1915z00_2914))->
									BgL_accessz00) = ((obj_t) BgL_access1909z00_2929), BUNSPEC);
							((((BgL_localz00_bglt) CREF(BgL_new1915z00_2914))->
									BgL_fastzd2alphazd2) =
								((obj_t) BgL_fastzd2alpha1910zd2_2930), BUNSPEC);
							((((BgL_localz00_bglt) CREF(BgL_new1915z00_2914))->
									BgL_removablez00) =
								((obj_t) BgL_removable1911z00_2931), BUNSPEC);
							((((BgL_localz00_bglt) CREF(BgL_new1915z00_2914))->
									BgL_occurrencez00) =
								((long) BgL_occurrence1912z00_2932), BUNSPEC);
							((((BgL_localz00_bglt) CREF(BgL_new1915z00_2914))->
									BgL_userzf3zf3) =
								((bool_t) BgL_userzf31913zf3_2933), BUNSPEC);
							((((BgL_localz00_bglt) CREF(BgL_new1915z00_2914))->BgL_keyz00) =
								((long) BgL_key1914z00_2934), BUNSPEC);
							BgL_res3044z00_2935 = BgL_new1915z00_2914;
					}}
					BgL_auxz00_3805 = BgL_res3044z00_2935;
				}
				return (obj_t) (BgL_auxz00_3805);
			}
		}
	}



/* %allocate-local */
	BGL_EXPORTED_DEF BgL_localz00_bglt BGl_z52allocatezd2localz80zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 65 */
			{	/* Ast/var.scm 65 */
				BgL_localz00_bglt BgL_new1927z00_2936;

				BgL_new1927z00_2936 =
					((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_localz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1927z00_2936),
					BGl_classzd2numzd2zz__objectz00(BGl_localz00zzast_varz00));
				{	/* Ast/var.scm 65 */
					BgL_objectz00_bglt BgL_auxz00_3827;

					BgL_auxz00_3827 = (BgL_objectz00_bglt) (BgL_new1927z00_2936);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3827, BFALSE);
				}
				return BgL_new1927z00_2936;
			}
		}
	}



/* _%allocate-local */
	obj_t BGl__z52allocatezd2localz80zzast_varz00(obj_t BgL_envz00_2382)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 65 */
			{	/* Ast/var.scm 65 */
				BgL_localz00_bglt BgL_auxz00_3830;

				{	/* Ast/var.scm 65 */
					BgL_localz00_bglt BgL_res3045z00_2940;

					{	/* Ast/var.scm 65 */
						BgL_localz00_bglt BgL_new1927z00_2938;

						BgL_new1927z00_2938 =
							((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_localz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1927z00_2938),
							BGl_classzd2numzd2zz__objectz00(BGl_localz00zzast_varz00));
						{	/* Ast/var.scm 65 */
							BgL_objectz00_bglt BgL_auxz00_3835;

							BgL_auxz00_3835 = (BgL_objectz00_bglt) (BgL_new1927z00_2938);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3835, BFALSE);
						}
						BgL_res3045z00_2940 = BgL_new1927z00_2938;
					}
					BgL_auxz00_3830 = BgL_res3045z00_2940;
				}
				return (obj_t) (BgL_auxz00_3830);
			}
		}
	}



/* local-nil */
	BGL_EXPORTED_DEF BgL_localz00_bglt BGl_localzd2nilzd2zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 65 */
			if ((BGl_z52thezd2localzd2nilz52zzast_varz00 == BUNSPEC))
				{	/* Ast/var.scm 65 */
					{	/* Ast/var.scm 65 */
						BgL_localz00_bglt BgL_res2978z00_1592;

						{	/* Ast/var.scm 65 */
							BgL_localz00_bglt BgL_new1927z00_1588;

							BgL_new1927z00_1588 =
								((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_localz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1927z00_1588),
								BGl_classzd2numzd2zz__objectz00(BGl_localz00zzast_varz00));
							{	/* Ast/var.scm 65 */
								BgL_objectz00_bglt BgL_auxz00_3845;

								BgL_auxz00_3845 = (BgL_objectz00_bglt) (BgL_new1927z00_1588);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3845, BFALSE);
							}
							BgL_res2978z00_1592 = BgL_new1927z00_1588;
						}
						BGl_z52thezd2localzd2nilz52zzast_varz00 =
							(obj_t) (BgL_res2978z00_1592);
					}
					{	/* Ast/var.scm 65 */
						obj_t BgL_arg2716z00_688;

						BgL_typez00_bglt BgL_arg2717z00_689;

						BgL_valuez00_bglt BgL_arg2718z00_690;

						BgL_arg2716z00_688 = CNST_TABLE_REF(((long) 14));
						BgL_arg2717z00_689 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg2718z00_690 = BGl_valuezd2nilzd2zzast_varz00();
						{	/* Ast/var.scm 65 */
							BgL_localz00_bglt BgL_res2979z00_1614;

							{	/* Ast/var.scm 65 */
								BgL_localz00_bglt BgL_new1915z00_1593;

								BgL_new1915z00_1593 =
									(BgL_localz00_bglt) (BGl_z52thezd2localzd2nilz52zzast_varz00);
								{	/* Ast/var.scm 65 */
									obj_t BgL_id1905z00_1604;

									obj_t BgL_name1906z00_1605;

									BgL_typez00_bglt BgL_type1907z00_1606;

									BgL_valuez00_bglt BgL_value1908z00_1607;

									obj_t BgL_access1909z00_1608;

									obj_t BgL_fastzd2alpha1910zd2_1609;

									obj_t BgL_removable1911z00_1610;

									long BgL_occurrence1912z00_1611;

									bool_t BgL_userzf31913zf3_1612;

									long BgL_key1914z00_1613;

									BgL_id1905z00_1604 = BgL_arg2716z00_688;
									BgL_name1906z00_1605 = BUNSPEC;
									BgL_type1907z00_1606 = BgL_arg2717z00_689;
									BgL_value1908z00_1607 = BgL_arg2718z00_690;
									BgL_access1909z00_1608 = BUNSPEC;
									BgL_fastzd2alpha1910zd2_1609 = BUNSPEC;
									BgL_removable1911z00_1610 = BUNSPEC;
									BgL_occurrence1912z00_1611 = ((long) 0);
									BgL_userzf31913zf3_1612 = ((bool_t) 0);
									BgL_key1914z00_1613 = ((long) 0);
									((((BgL_localz00_bglt) CREF(BgL_new1915z00_1593))->
											BgL_idz00) = ((obj_t) BgL_id1905z00_1604), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1915z00_1593))->
											BgL_namez00) = ((obj_t) BgL_name1906z00_1605), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1915z00_1593))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type1907z00_1606), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1915z00_1593))->
											BgL_valuez00) =
										((BgL_valuez00_bglt) BgL_value1908z00_1607), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1915z00_1593))->
											BgL_accessz00) =
										((obj_t) BgL_access1909z00_1608), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1915z00_1593))->
											BgL_fastzd2alphazd2) =
										((obj_t) BgL_fastzd2alpha1910zd2_1609), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1915z00_1593))->
											BgL_removablez00) =
										((obj_t) BgL_removable1911z00_1610), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1915z00_1593))->
											BgL_occurrencez00) =
										((long) BgL_occurrence1912z00_1611), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1915z00_1593))->
											BgL_userzf3zf3) =
										((bool_t) BgL_userzf31913zf3_1612), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1915z00_1593))->
											BgL_keyz00) = ((long) BgL_key1914z00_1613), BUNSPEC);
									BgL_res2979z00_1614 = BgL_new1915z00_1593;
							}}
							(obj_t) (BgL_res2979z00_1614);
				}}}
			else
				{	/* Ast/var.scm 65 */
					BFALSE;
				}
			return (BgL_localz00_bglt) (BGl_z52thezd2localzd2nilz52zzast_varz00);
		}
	}



/* _local-nil */
	obj_t BGl__localzd2nilzd2zzast_varz00(obj_t BgL_envz00_2383)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 65 */
			return (obj_t) (BGl_localzd2nilzd2zzast_varz00());
		}
	}



/* global? */
	BGL_EXPORTED_DEF bool_t BGl_globalzf3zf3zzast_varz00(obj_t BgL_obj1864z00_240)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 40 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1864z00_240,
				BGl_globalz00zzast_varz00);
		}
	}



/* _global? */
	obj_t BGl__globalzf3zf3zzast_varz00(obj_t BgL_envz00_2380,
		obj_t BgL_obj1864z00_2381)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 40 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1864z00_2381,
					BGl_globalz00zzast_varz00));
		}
	}



/* make-global */
	BGL_EXPORTED_DEF BgL_globalz00_bglt BGl_makezd2globalzd2zzast_varz00(obj_t
		BgL_id1745z00_244, obj_t BgL_name1746z00_245,
		BgL_typez00_bglt BgL_type1747z00_246,
		BgL_valuez00_bglt BgL_value1748z00_247, obj_t BgL_access1749z00_248,
		obj_t BgL_fastzd2alpha1750zd2_249, obj_t BgL_removable1751z00_250,
		long BgL_occurrence1752z00_251, obj_t BgL_module1753z00_252,
		obj_t BgL_import1754z00_253, bool_t BgL_evaluablezf31755zf3_254,
		obj_t BgL_library1756z00_255, bool_t BgL_userzf31757zf3_256,
		obj_t BgL_pragma1758z00_257, obj_t BgL_src1759z00_258,
		obj_t BgL_jvmzd2typezd2name1760z00_259)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 40 */
			{	/* Ast/var.scm 40 */
				BgL_globalz00_bglt BgL_new1761z00_1615;

				{	/* Ast/var.scm 40 */
					BgL_globalz00_bglt BgL_res2980z00_1620;

					{	/* Ast/var.scm 40 */
						BgL_globalz00_bglt BgL_new1797z00_1616;

						BgL_new1797z00_1616 =
							((BgL_globalz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_globalz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1797z00_1616),
							BGl_classzd2numzd2zz__objectz00(BGl_globalz00zzast_varz00));
						{	/* Ast/var.scm 40 */
							BgL_objectz00_bglt BgL_auxz00_3874;

							BgL_auxz00_3874 = (BgL_objectz00_bglt) (BgL_new1797z00_1616);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3874, BFALSE);
						}
						BgL_res2980z00_1620 = BgL_new1797z00_1616;
					}
					BgL_new1761z00_1615 = BgL_res2980z00_1620;
				}
				{	/* Ast/var.scm 40 */
					BgL_globalz00_bglt BgL_res2981z00_1654;

					{	/* Ast/var.scm 40 */
						BgL_globalz00_bglt BgL_new1779z00_1621;

						BgL_new1779z00_1621 = BgL_new1761z00_1615;
						{	/* Ast/var.scm 40 */
							obj_t BgL_id1763z00_1638;

							obj_t BgL_name1764z00_1639;

							BgL_typez00_bglt BgL_type1765z00_1640;

							BgL_valuez00_bglt BgL_value1766z00_1641;

							obj_t BgL_access1767z00_1642;

							obj_t BgL_fastzd2alpha1768zd2_1643;

							obj_t BgL_removable1769z00_1644;

							long BgL_occurrence1770z00_1645;

							obj_t BgL_module1771z00_1646;

							obj_t BgL_import1772z00_1647;

							bool_t BgL_evaluablezf31773zf3_1648;

							obj_t BgL_library1774z00_1649;

							bool_t BgL_userzf31775zf3_1650;

							obj_t BgL_pragma1776z00_1651;

							obj_t BgL_src1777z00_1652;

							obj_t BgL_jvmzd2typezd2name1778z00_1653;

							BgL_id1763z00_1638 = BgL_id1745z00_244;
							BgL_name1764z00_1639 = BgL_name1746z00_245;
							BgL_type1765z00_1640 = BgL_type1747z00_246;
							BgL_value1766z00_1641 = BgL_value1748z00_247;
							BgL_access1767z00_1642 = BgL_access1749z00_248;
							BgL_fastzd2alpha1768zd2_1643 = BgL_fastzd2alpha1750zd2_249;
							BgL_removable1769z00_1644 = BgL_removable1751z00_250;
							BgL_occurrence1770z00_1645 = BgL_occurrence1752z00_251;
							BgL_module1771z00_1646 = BgL_module1753z00_252;
							BgL_import1772z00_1647 = BgL_import1754z00_253;
							BgL_evaluablezf31773zf3_1648 = BgL_evaluablezf31755zf3_254;
							BgL_library1774z00_1649 = BgL_library1756z00_255;
							BgL_userzf31775zf3_1650 = BgL_userzf31757zf3_256;
							BgL_pragma1776z00_1651 = BgL_pragma1758z00_257;
							BgL_src1777z00_1652 = BgL_src1759z00_258;
							BgL_jvmzd2typezd2name1778z00_1653 =
								BgL_jvmzd2typezd2name1760z00_259;
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1621))->BgL_idz00) =
								((obj_t) BgL_id1763z00_1638), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1621))->BgL_namez00) =
								((obj_t) BgL_name1764z00_1639), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1621))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type1765z00_1640), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1621))->
									BgL_valuez00) =
								((BgL_valuez00_bglt) BgL_value1766z00_1641), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1621))->
									BgL_accessz00) = ((obj_t) BgL_access1767z00_1642), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1621))->
									BgL_fastzd2alphazd2) =
								((obj_t) BgL_fastzd2alpha1768zd2_1643), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1621))->
									BgL_removablez00) =
								((obj_t) BgL_removable1769z00_1644), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1621))->
									BgL_occurrencez00) =
								((long) BgL_occurrence1770z00_1645), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1621))->
									BgL_modulez00) = ((obj_t) BgL_module1771z00_1646), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1621))->
									BgL_importz00) = ((obj_t) BgL_import1772z00_1647), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1621))->
									BgL_evaluablezf3zf3) =
								((bool_t) BgL_evaluablezf31773zf3_1648), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1621))->
									BgL_libraryz00) = ((obj_t) BgL_library1774z00_1649), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1621))->
									BgL_userzf3zf3) =
								((bool_t) BgL_userzf31775zf3_1650), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1621))->
									BgL_pragmaz00) = ((obj_t) BgL_pragma1776z00_1651), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1621))->BgL_srcz00) =
								((obj_t) BgL_src1777z00_1652), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1621))->
									BgL_jvmzd2typezd2namez00) =
								((obj_t) BgL_jvmzd2typezd2name1778z00_1653), BUNSPEC);
							BgL_res2981z00_1654 = BgL_new1779z00_1621;
					}} BgL_res2981z00_1654;
				}
				return BgL_new1761z00_1615;
			}
		}
	}



/* _make-global */
	obj_t BGl__makezd2globalzd2zzast_varz00(obj_t BgL_envz00_2553,
		obj_t BgL_id1745z00_2554, obj_t BgL_name1746z00_2555,
		obj_t BgL_type1747z00_2556, obj_t BgL_value1748z00_2557,
		obj_t BgL_access1749z00_2558, obj_t BgL_fastzd2alpha1750zd2_2559,
		obj_t BgL_removable1751z00_2560, obj_t BgL_occurrence1752z00_2561,
		obj_t BgL_module1753z00_2562, obj_t BgL_import1754z00_2563,
		obj_t BgL_evaluablezf31755zf3_2564, obj_t BgL_library1756z00_2565,
		obj_t BgL_userzf31757zf3_2566, obj_t BgL_pragma1758z00_2567,
		obj_t BgL_src1759z00_2568, obj_t BgL_jvmzd2typezd2name1760z00_2569)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 40 */
			return
				(obj_t) (BGl_makezd2globalzd2zzast_varz00(BgL_id1745z00_2554,
					BgL_name1746z00_2555, (BgL_typez00_bglt) (BgL_type1747z00_2556),
					(BgL_valuez00_bglt) (BgL_value1748z00_2557), BgL_access1749z00_2558,
					BgL_fastzd2alpha1750zd2_2559, BgL_removable1751z00_2560,
					(long) CINT(BgL_occurrence1752z00_2561), BgL_module1753z00_2562,
					BgL_import1754z00_2563, CBOOL(BgL_evaluablezf31755zf3_2564),
					BgL_library1756z00_2565, CBOOL(BgL_userzf31757zf3_2566),
					BgL_pragma1758z00_2567, BgL_src1759z00_2568,
					BgL_jvmzd2typezd2name1760z00_2569));
		}
	}



/* fill-global! */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_fillzd2globalz12zc0zzast_varz00(BgL_globalz00_bglt BgL_new1779z00_260,
		obj_t BgL_id1763z00_261, obj_t BgL_name1764z00_262,
		BgL_typez00_bglt BgL_type1765z00_263,
		BgL_valuez00_bglt BgL_value1766z00_264, obj_t BgL_access1767z00_265,
		obj_t BgL_fastzd2alpha1768zd2_266, obj_t BgL_removable1769z00_267,
		long BgL_occurrence1770z00_268, obj_t BgL_module1771z00_269,
		obj_t BgL_import1772z00_270, bool_t BgL_evaluablezf31773zf3_271,
		obj_t BgL_library1774z00_272, bool_t BgL_userzf31775zf3_273,
		obj_t BgL_pragma1776z00_274, obj_t BgL_src1777z00_275,
		obj_t BgL_jvmzd2typezd2name1778z00_276)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 40 */
			{	/* Ast/var.scm 40 */
				obj_t BgL_id1763z00_2942;

				obj_t BgL_name1764z00_2943;

				BgL_typez00_bglt BgL_type1765z00_2944;

				BgL_valuez00_bglt BgL_value1766z00_2945;

				obj_t BgL_access1767z00_2946;

				obj_t BgL_fastzd2alpha1768zd2_2947;

				obj_t BgL_removable1769z00_2948;

				long BgL_occurrence1770z00_2949;

				obj_t BgL_module1771z00_2950;

				obj_t BgL_import1772z00_2951;

				bool_t BgL_evaluablezf31773zf3_2952;

				obj_t BgL_library1774z00_2953;

				bool_t BgL_userzf31775zf3_2954;

				obj_t BgL_pragma1776z00_2955;

				obj_t BgL_src1777z00_2956;

				obj_t BgL_jvmzd2typezd2name1778z00_2957;

				BgL_id1763z00_2942 = BgL_id1763z00_261;
				BgL_name1764z00_2943 = BgL_name1764z00_262;
				BgL_type1765z00_2944 = BgL_type1765z00_263;
				BgL_value1766z00_2945 = BgL_value1766z00_264;
				BgL_access1767z00_2946 = BgL_access1767z00_265;
				BgL_fastzd2alpha1768zd2_2947 = BgL_fastzd2alpha1768zd2_266;
				BgL_removable1769z00_2948 = BgL_removable1769z00_267;
				BgL_occurrence1770z00_2949 = BgL_occurrence1770z00_268;
				BgL_module1771z00_2950 = BgL_module1771z00_269;
				BgL_import1772z00_2951 = BgL_import1772z00_270;
				BgL_evaluablezf31773zf3_2952 = BgL_evaluablezf31773zf3_271;
				BgL_library1774z00_2953 = BgL_library1774z00_272;
				BgL_userzf31775zf3_2954 = BgL_userzf31775zf3_273;
				BgL_pragma1776z00_2955 = BgL_pragma1776z00_274;
				BgL_src1777z00_2956 = BgL_src1777z00_275;
				BgL_jvmzd2typezd2name1778z00_2957 = BgL_jvmzd2typezd2name1778z00_276;
				((((BgL_globalz00_bglt) CREF(BgL_new1779z00_260))->BgL_idz00) =
					((obj_t) BgL_id1763z00_2942), BUNSPEC);
				((((BgL_globalz00_bglt) CREF(BgL_new1779z00_260))->BgL_namez00) =
					((obj_t) BgL_name1764z00_2943), BUNSPEC);
				((((BgL_globalz00_bglt) CREF(BgL_new1779z00_260))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1765z00_2944), BUNSPEC);
				((((BgL_globalz00_bglt) CREF(BgL_new1779z00_260))->BgL_valuez00) =
					((BgL_valuez00_bglt) BgL_value1766z00_2945), BUNSPEC);
				((((BgL_globalz00_bglt) CREF(BgL_new1779z00_260))->BgL_accessz00) =
					((obj_t) BgL_access1767z00_2946), BUNSPEC);
				((((BgL_globalz00_bglt) CREF(BgL_new1779z00_260))->
						BgL_fastzd2alphazd2) =
					((obj_t) BgL_fastzd2alpha1768zd2_2947), BUNSPEC);
				((((BgL_globalz00_bglt) CREF(BgL_new1779z00_260))->BgL_removablez00) =
					((obj_t) BgL_removable1769z00_2948), BUNSPEC);
				((((BgL_globalz00_bglt) CREF(BgL_new1779z00_260))->BgL_occurrencez00) =
					((long) BgL_occurrence1770z00_2949), BUNSPEC);
				((((BgL_globalz00_bglt) CREF(BgL_new1779z00_260))->BgL_modulez00) =
					((obj_t) BgL_module1771z00_2950), BUNSPEC);
				((((BgL_globalz00_bglt) CREF(BgL_new1779z00_260))->BgL_importz00) =
					((obj_t) BgL_import1772z00_2951), BUNSPEC);
				((((BgL_globalz00_bglt) CREF(BgL_new1779z00_260))->
						BgL_evaluablezf3zf3) =
					((bool_t) BgL_evaluablezf31773zf3_2952), BUNSPEC);
				((((BgL_globalz00_bglt) CREF(BgL_new1779z00_260))->BgL_libraryz00) =
					((obj_t) BgL_library1774z00_2953), BUNSPEC);
				((((BgL_globalz00_bglt) CREF(BgL_new1779z00_260))->BgL_userzf3zf3) =
					((bool_t) BgL_userzf31775zf3_2954), BUNSPEC);
				((((BgL_globalz00_bglt) CREF(BgL_new1779z00_260))->BgL_pragmaz00) =
					((obj_t) BgL_pragma1776z00_2955), BUNSPEC);
				((((BgL_globalz00_bglt) CREF(BgL_new1779z00_260))->BgL_srcz00) =
					((obj_t) BgL_src1777z00_2956), BUNSPEC);
				((((BgL_globalz00_bglt) CREF(BgL_new1779z00_260))->
						BgL_jvmzd2typezd2namez00) =
					((obj_t) BgL_jvmzd2typezd2name1778z00_2957), BUNSPEC);
				return BgL_new1779z00_260;
			}
		}
	}



/* _fill-global! */
	obj_t BGl__fillzd2globalz12zc0zzast_varz00(obj_t BgL_envz00_2570,
		obj_t BgL_new1779z00_2571, obj_t BgL_id1763z00_2572,
		obj_t BgL_name1764z00_2573, obj_t BgL_type1765z00_2574,
		obj_t BgL_value1766z00_2575, obj_t BgL_access1767z00_2576,
		obj_t BgL_fastzd2alpha1768zd2_2577, obj_t BgL_removable1769z00_2578,
		obj_t BgL_occurrence1770z00_2579, obj_t BgL_module1771z00_2580,
		obj_t BgL_import1772z00_2581, obj_t BgL_evaluablezf31773zf3_2582,
		obj_t BgL_library1774z00_2583, obj_t BgL_userzf31775zf3_2584,
		obj_t BgL_pragma1776z00_2585, obj_t BgL_src1777z00_2586,
		obj_t BgL_jvmzd2typezd2name1778z00_2587)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 40 */
			{	/* Ast/var.scm 40 */
				BgL_globalz00_bglt BgL_auxz00_3916;

				{	/* Ast/var.scm 40 */
					BgL_globalz00_bglt BgL_res3046z00_2991;

					{	/* Ast/var.scm 40 */
						BgL_globalz00_bglt BgL_new1779z00_2958;

						obj_t BgL_id1763z00_2959;

						BgL_typez00_bglt BgL_type1765z00_2961;

						BgL_valuez00_bglt BgL_value1766z00_2962;

						long BgL_occurrence1770z00_2966;

						obj_t BgL_module1771z00_2967;

						bool_t BgL_evaluablezf31773zf3_2969;

						bool_t BgL_userzf31775zf3_2971;

						obj_t BgL_jvmzd2typezd2name1778z00_2974;

						BgL_new1779z00_2958 = (BgL_globalz00_bglt) (BgL_new1779z00_2571);
						BgL_id1763z00_2959 = BgL_id1763z00_2572;
						BgL_type1765z00_2961 = (BgL_typez00_bglt) (BgL_type1765z00_2574);
						BgL_value1766z00_2962 = (BgL_valuez00_bglt) (BgL_value1766z00_2575);
						BgL_occurrence1770z00_2966 =
							(long) CINT(BgL_occurrence1770z00_2579);
						BgL_module1771z00_2967 = BgL_module1771z00_2580;
						BgL_evaluablezf31773zf3_2969 = CBOOL(BgL_evaluablezf31773zf3_2582);
						BgL_userzf31775zf3_2971 = CBOOL(BgL_userzf31775zf3_2584);
						BgL_jvmzd2typezd2name1778z00_2974 =
							BgL_jvmzd2typezd2name1778z00_2587;
						{	/* Ast/var.scm 40 */
							obj_t BgL_id1763z00_2975;

							obj_t BgL_name1764z00_2976;

							BgL_typez00_bglt BgL_type1765z00_2977;

							BgL_valuez00_bglt BgL_value1766z00_2978;

							obj_t BgL_access1767z00_2979;

							obj_t BgL_fastzd2alpha1768zd2_2980;

							obj_t BgL_removable1769z00_2981;

							long BgL_occurrence1770z00_2982;

							obj_t BgL_module1771z00_2983;

							obj_t BgL_import1772z00_2984;

							bool_t BgL_evaluablezf31773zf3_2985;

							obj_t BgL_library1774z00_2986;

							bool_t BgL_userzf31775zf3_2987;

							obj_t BgL_pragma1776z00_2988;

							obj_t BgL_src1777z00_2989;

							obj_t BgL_jvmzd2typezd2name1778z00_2990;

							BgL_id1763z00_2975 = BgL_id1763z00_2959;
							BgL_name1764z00_2976 = BgL_name1764z00_2573;
							BgL_type1765z00_2977 = BgL_type1765z00_2961;
							BgL_value1766z00_2978 = BgL_value1766z00_2962;
							BgL_access1767z00_2979 = BgL_access1767z00_2576;
							BgL_fastzd2alpha1768zd2_2980 = BgL_fastzd2alpha1768zd2_2577;
							BgL_removable1769z00_2981 = BgL_removable1769z00_2578;
							BgL_occurrence1770z00_2982 = BgL_occurrence1770z00_2966;
							BgL_module1771z00_2983 = BgL_module1771z00_2967;
							BgL_import1772z00_2984 = BgL_import1772z00_2581;
							BgL_evaluablezf31773zf3_2985 = BgL_evaluablezf31773zf3_2969;
							BgL_library1774z00_2986 = BgL_library1774z00_2583;
							BgL_userzf31775zf3_2987 = BgL_userzf31775zf3_2971;
							BgL_pragma1776z00_2988 = BgL_pragma1776z00_2585;
							BgL_src1777z00_2989 = BgL_src1777z00_2586;
							BgL_jvmzd2typezd2name1778z00_2990 =
								BgL_jvmzd2typezd2name1778z00_2974;
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_2958))->BgL_idz00) =
								((obj_t) BgL_id1763z00_2975), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_2958))->BgL_namez00) =
								((obj_t) BgL_name1764z00_2976), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_2958))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type1765z00_2977), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_2958))->
									BgL_valuez00) =
								((BgL_valuez00_bglt) BgL_value1766z00_2978), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_2958))->
									BgL_accessz00) = ((obj_t) BgL_access1767z00_2979), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_2958))->
									BgL_fastzd2alphazd2) =
								((obj_t) BgL_fastzd2alpha1768zd2_2980), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_2958))->
									BgL_removablez00) =
								((obj_t) BgL_removable1769z00_2981), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_2958))->
									BgL_occurrencez00) =
								((long) BgL_occurrence1770z00_2982), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_2958))->
									BgL_modulez00) = ((obj_t) BgL_module1771z00_2983), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_2958))->
									BgL_importz00) = ((obj_t) BgL_import1772z00_2984), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_2958))->
									BgL_evaluablezf3zf3) =
								((bool_t) BgL_evaluablezf31773zf3_2985), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_2958))->
									BgL_libraryz00) = ((obj_t) BgL_library1774z00_2986), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_2958))->
									BgL_userzf3zf3) =
								((bool_t) BgL_userzf31775zf3_2987), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_2958))->
									BgL_pragmaz00) = ((obj_t) BgL_pragma1776z00_2988), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_2958))->BgL_srcz00) =
								((obj_t) BgL_src1777z00_2989), BUNSPEC);
							((((BgL_globalz00_bglt) CREF(BgL_new1779z00_2958))->
									BgL_jvmzd2typezd2namez00) =
								((obj_t) BgL_jvmzd2typezd2name1778z00_2990), BUNSPEC);
							BgL_res3046z00_2991 = BgL_new1779z00_2958;
					}}
					BgL_auxz00_3916 = BgL_res3046z00_2991;
				}
				return (obj_t) (BgL_auxz00_3916);
			}
		}
	}



/* %allocate-global */
	BGL_EXPORTED_DEF BgL_globalz00_bglt BGl_z52allocatezd2globalz80zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 40 */
			{	/* Ast/var.scm 40 */
				BgL_globalz00_bglt BgL_new1797z00_2992;

				BgL_new1797z00_2992 =
					((BgL_globalz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_globalz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1797z00_2992),
					BGl_classzd2numzd2zz__objectz00(BGl_globalz00zzast_varz00));
				{	/* Ast/var.scm 40 */
					BgL_objectz00_bglt BgL_auxz00_3944;

					BgL_auxz00_3944 = (BgL_objectz00_bglt) (BgL_new1797z00_2992);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3944, BFALSE);
				}
				return BgL_new1797z00_2992;
			}
		}
	}



/* _%allocate-global */
	obj_t BGl__z52allocatezd2globalz80zzast_varz00(obj_t BgL_envz00_2378)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 40 */
			{	/* Ast/var.scm 40 */
				BgL_globalz00_bglt BgL_auxz00_3947;

				{	/* Ast/var.scm 40 */
					BgL_globalz00_bglt BgL_res3047z00_2996;

					{	/* Ast/var.scm 40 */
						BgL_globalz00_bglt BgL_new1797z00_2994;

						BgL_new1797z00_2994 =
							((BgL_globalz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_globalz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1797z00_2994),
							BGl_classzd2numzd2zz__objectz00(BGl_globalz00zzast_varz00));
						{	/* Ast/var.scm 40 */
							BgL_objectz00_bglt BgL_auxz00_3952;

							BgL_auxz00_3952 = (BgL_objectz00_bglt) (BgL_new1797z00_2994);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3952, BFALSE);
						}
						BgL_res3047z00_2996 = BgL_new1797z00_2994;
					}
					BgL_auxz00_3947 = BgL_res3047z00_2996;
				}
				return (obj_t) (BgL_auxz00_3947);
			}
		}
	}



/* global-nil */
	BGL_EXPORTED_DEF BgL_globalz00_bglt BGl_globalzd2nilzd2zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 40 */
			if ((BGl_z52thezd2globalzd2nilz52zzast_varz00 == BUNSPEC))
				{	/* Ast/var.scm 40 */
					{	/* Ast/var.scm 40 */
						BgL_globalz00_bglt BgL_res2982z00_1679;

						{	/* Ast/var.scm 40 */
							BgL_globalz00_bglt BgL_new1797z00_1675;

							BgL_new1797z00_1675 =
								((BgL_globalz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_globalz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1797z00_1675),
								BGl_classzd2numzd2zz__objectz00(BGl_globalz00zzast_varz00));
							{	/* Ast/var.scm 40 */
								BgL_objectz00_bglt BgL_auxz00_3962;

								BgL_auxz00_3962 = (BgL_objectz00_bglt) (BgL_new1797z00_1675);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3962, BFALSE);
							}
							BgL_res2982z00_1679 = BgL_new1797z00_1675;
						}
						BGl_z52thezd2globalzd2nilz52zzast_varz00 =
							(obj_t) (BgL_res2982z00_1679);
					}
					{	/* Ast/var.scm 40 */
						obj_t BgL_arg2724z00_713;

						BgL_typez00_bglt BgL_arg2725z00_714;

						BgL_valuez00_bglt BgL_arg2726z00_715;

						obj_t BgL_arg2728z00_717;

						BgL_arg2724z00_713 = CNST_TABLE_REF(((long) 14));
						BgL_arg2725z00_714 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg2726z00_715 = BGl_valuezd2nilzd2zzast_varz00();
						BgL_arg2728z00_717 = CNST_TABLE_REF(((long) 14));
						{	/* Ast/var.scm 40 */
							BgL_globalz00_bglt BgL_res2983z00_1713;

							{	/* Ast/var.scm 40 */
								BgL_globalz00_bglt BgL_new1779z00_1680;

								BgL_new1779z00_1680 =
									(BgL_globalz00_bglt)
									(BGl_z52thezd2globalzd2nilz52zzast_varz00);
								{	/* Ast/var.scm 40 */
									obj_t BgL_id1763z00_1697;

									obj_t BgL_name1764z00_1698;

									BgL_typez00_bglt BgL_type1765z00_1699;

									BgL_valuez00_bglt BgL_value1766z00_1700;

									obj_t BgL_access1767z00_1701;

									obj_t BgL_fastzd2alpha1768zd2_1702;

									obj_t BgL_removable1769z00_1703;

									long BgL_occurrence1770z00_1704;

									obj_t BgL_module1771z00_1705;

									obj_t BgL_import1772z00_1706;

									bool_t BgL_evaluablezf31773zf3_1707;

									obj_t BgL_library1774z00_1708;

									bool_t BgL_userzf31775zf3_1709;

									obj_t BgL_pragma1776z00_1710;

									obj_t BgL_src1777z00_1711;

									obj_t BgL_jvmzd2typezd2name1778z00_1712;

									BgL_id1763z00_1697 = BgL_arg2724z00_713;
									BgL_name1764z00_1698 = BUNSPEC;
									BgL_type1765z00_1699 = BgL_arg2725z00_714;
									BgL_value1766z00_1700 = BgL_arg2726z00_715;
									BgL_access1767z00_1701 = BUNSPEC;
									BgL_fastzd2alpha1768zd2_1702 = BUNSPEC;
									BgL_removable1769z00_1703 = BUNSPEC;
									BgL_occurrence1770z00_1704 = ((long) 0);
									BgL_module1771z00_1705 = BgL_arg2728z00_717;
									BgL_import1772z00_1706 = BUNSPEC;
									BgL_evaluablezf31773zf3_1707 = ((bool_t) 0);
									BgL_library1774z00_1708 = BUNSPEC;
									BgL_userzf31775zf3_1709 = ((bool_t) 0);
									BgL_pragma1776z00_1710 = BUNSPEC;
									BgL_src1777z00_1711 = BUNSPEC;
									BgL_jvmzd2typezd2name1778z00_1712 =
										BGl_string2997z00zzast_varz00;
									((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1680))->
											BgL_idz00) = ((obj_t) BgL_id1763z00_1697), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1680))->
											BgL_namez00) = ((obj_t) BgL_name1764z00_1698), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1680))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type1765z00_1699), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1680))->
											BgL_valuez00) =
										((BgL_valuez00_bglt) BgL_value1766z00_1700), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1680))->
											BgL_accessz00) =
										((obj_t) BgL_access1767z00_1701), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1680))->
											BgL_fastzd2alphazd2) =
										((obj_t) BgL_fastzd2alpha1768zd2_1702), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1680))->
											BgL_removablez00) =
										((obj_t) BgL_removable1769z00_1703), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1680))->
											BgL_occurrencez00) =
										((long) BgL_occurrence1770z00_1704), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1680))->
											BgL_modulez00) =
										((obj_t) BgL_module1771z00_1705), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1680))->
											BgL_importz00) =
										((obj_t) BgL_import1772z00_1706), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1680))->
											BgL_evaluablezf3zf3) =
										((bool_t) BgL_evaluablezf31773zf3_1707), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1680))->
											BgL_libraryz00) =
										((obj_t) BgL_library1774z00_1708), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1680))->
											BgL_userzf3zf3) =
										((bool_t) BgL_userzf31775zf3_1709), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1680))->
											BgL_pragmaz00) =
										((obj_t) BgL_pragma1776z00_1710), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1680))->
											BgL_srcz00) = ((obj_t) BgL_src1777z00_1711), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1779z00_1680))->
											BgL_jvmzd2typezd2namez00) =
										((obj_t) BgL_jvmzd2typezd2name1778z00_1712), BUNSPEC);
									BgL_res2983z00_1713 = BgL_new1779z00_1680;
							}}
							(obj_t) (BgL_res2983z00_1713);
				}}}
			else
				{	/* Ast/var.scm 40 */
					BFALSE;
				}
			return (BgL_globalz00_bglt) (BGl_z52thezd2globalzd2nilz52zzast_varz00);
		}
	}



/* _global-nil */
	obj_t BGl__globalzd2nilzd2zzast_varz00(obj_t BgL_envz00_2379)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 40 */
			return (obj_t) (BGl_globalzd2nilzd2zzast_varz00());
		}
	}



/* variable? */
	BGL_EXPORTED_DEF bool_t BGl_variablezf3zf3zzast_varz00(obj_t
		BgL_obj1693z00_301)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 21 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1693z00_301,
				BGl_variablez00zzast_varz00);
		}
	}



/* _variable? */
	obj_t BGl__variablezf3zf3zzast_varz00(obj_t BgL_envz00_2376,
		obj_t BgL_obj1693z00_2377)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 21 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1693z00_2377,
					BGl_variablez00zzast_varz00));
		}
	}



/* make-variable */
	BGL_EXPORTED_DEF BgL_variablez00_bglt BGl_makezd2variablezd2zzast_varz00(obj_t
		BgL_id1630z00_305, obj_t BgL_name1631z00_306,
		BgL_typez00_bglt BgL_type1632z00_307,
		BgL_valuez00_bglt BgL_value1633z00_308, obj_t BgL_access1634z00_309,
		obj_t BgL_fastzd2alpha1635zd2_310, obj_t BgL_removable1636z00_311,
		long BgL_occurrence1637z00_312)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 21 */
			{	/* Ast/var.scm 21 */
				BgL_variablez00_bglt BgL_new1638z00_1714;

				{	/* Ast/var.scm 21 */
					BgL_variablez00_bglt BgL_res2984z00_1719;

					{	/* Ast/var.scm 21 */
						BgL_variablez00_bglt BgL_new1658z00_1715;

						BgL_new1658z00_1715 =
							((BgL_variablez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_variablez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1658z00_1715),
							BGl_classzd2numzd2zz__objectz00(BGl_variablez00zzast_varz00));
						{	/* Ast/var.scm 21 */
							BgL_objectz00_bglt BgL_auxz00_3998;

							BgL_auxz00_3998 = (BgL_objectz00_bglt) (BgL_new1658z00_1715);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3998, BFALSE);
						}
						BgL_res2984z00_1719 = BgL_new1658z00_1715;
					}
					BgL_new1638z00_1714 = BgL_res2984z00_1719;
				}
				{	/* Ast/var.scm 21 */
					BgL_variablez00_bglt BgL_res2985z00_1737;

					{	/* Ast/var.scm 21 */
						BgL_variablez00_bglt BgL_new1648z00_1720;

						BgL_new1648z00_1720 = BgL_new1638z00_1714;
						{	/* Ast/var.scm 21 */
							obj_t BgL_id1640z00_1729;

							obj_t BgL_name1641z00_1730;

							BgL_typez00_bglt BgL_type1642z00_1731;

							BgL_valuez00_bglt BgL_value1643z00_1732;

							obj_t BgL_access1644z00_1733;

							obj_t BgL_fastzd2alpha1645zd2_1734;

							obj_t BgL_removable1646z00_1735;

							long BgL_occurrence1647z00_1736;

							BgL_id1640z00_1729 = BgL_id1630z00_305;
							BgL_name1641z00_1730 = BgL_name1631z00_306;
							BgL_type1642z00_1731 = BgL_type1632z00_307;
							BgL_value1643z00_1732 = BgL_value1633z00_308;
							BgL_access1644z00_1733 = BgL_access1634z00_309;
							BgL_fastzd2alpha1645zd2_1734 = BgL_fastzd2alpha1635zd2_310;
							BgL_removable1646z00_1735 = BgL_removable1636z00_311;
							BgL_occurrence1647z00_1736 = BgL_occurrence1637z00_312;
							((((BgL_variablez00_bglt) CREF(BgL_new1648z00_1720))->BgL_idz00) =
								((obj_t) BgL_id1640z00_1729), BUNSPEC);
							((((BgL_variablez00_bglt) CREF(BgL_new1648z00_1720))->
									BgL_namez00) = ((obj_t) BgL_name1641z00_1730), BUNSPEC);
							((((BgL_variablez00_bglt) CREF(BgL_new1648z00_1720))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type1642z00_1731), BUNSPEC);
							((((BgL_variablez00_bglt) CREF(BgL_new1648z00_1720))->
									BgL_valuez00) =
								((BgL_valuez00_bglt) BgL_value1643z00_1732), BUNSPEC);
							((((BgL_variablez00_bglt) CREF(BgL_new1648z00_1720))->
									BgL_accessz00) = ((obj_t) BgL_access1644z00_1733), BUNSPEC);
							((((BgL_variablez00_bglt) CREF(BgL_new1648z00_1720))->
									BgL_fastzd2alphazd2) =
								((obj_t) BgL_fastzd2alpha1645zd2_1734), BUNSPEC);
							((((BgL_variablez00_bglt) CREF(BgL_new1648z00_1720))->
									BgL_removablez00) =
								((obj_t) BgL_removable1646z00_1735), BUNSPEC);
							((((BgL_variablez00_bglt) CREF(BgL_new1648z00_1720))->
									BgL_occurrencez00) =
								((long) BgL_occurrence1647z00_1736), BUNSPEC);
							BgL_res2985z00_1737 = BgL_new1648z00_1720;
					}} BgL_res2985z00_1737;
				}
				return BgL_new1638z00_1714;
			}
		}
	}



/* _make-variable */
	obj_t BGl__makezd2variablezd2zzast_varz00(obj_t BgL_envz00_2588,
		obj_t BgL_id1630z00_2589, obj_t BgL_name1631z00_2590,
		obj_t BgL_type1632z00_2591, obj_t BgL_value1633z00_2592,
		obj_t BgL_access1634z00_2593, obj_t BgL_fastzd2alpha1635zd2_2594,
		obj_t BgL_removable1636z00_2595, obj_t BgL_occurrence1637z00_2596)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 21 */
			return
				(obj_t) (BGl_makezd2variablezd2zzast_varz00(BgL_id1630z00_2589,
					BgL_name1631z00_2590, (BgL_typez00_bglt) (BgL_type1632z00_2591),
					(BgL_valuez00_bglt) (BgL_value1633z00_2592), BgL_access1634z00_2593,
					BgL_fastzd2alpha1635zd2_2594, BgL_removable1636z00_2595,
					(long) CINT(BgL_occurrence1637z00_2596)));
		}
	}



/* fill-variable! */
	BGL_EXPORTED_DEF BgL_variablez00_bglt
		BGl_fillzd2variablez12zc0zzast_varz00(BgL_variablez00_bglt
		BgL_new1648z00_313, obj_t BgL_id1640z00_314, obj_t BgL_name1641z00_315,
		BgL_typez00_bglt BgL_type1642z00_316,
		BgL_valuez00_bglt BgL_value1643z00_317, obj_t BgL_access1644z00_318,
		obj_t BgL_fastzd2alpha1645zd2_319, obj_t BgL_removable1646z00_320,
		long BgL_occurrence1647z00_321)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 21 */
			{	/* Ast/var.scm 21 */
				obj_t BgL_id1640z00_2998;

				obj_t BgL_name1641z00_2999;

				BgL_typez00_bglt BgL_type1642z00_3000;

				BgL_valuez00_bglt BgL_value1643z00_3001;

				obj_t BgL_access1644z00_3002;

				obj_t BgL_fastzd2alpha1645zd2_3003;

				obj_t BgL_removable1646z00_3004;

				long BgL_occurrence1647z00_3005;

				BgL_id1640z00_2998 = BgL_id1640z00_314;
				BgL_name1641z00_2999 = BgL_name1641z00_315;
				BgL_type1642z00_3000 = BgL_type1642z00_316;
				BgL_value1643z00_3001 = BgL_value1643z00_317;
				BgL_access1644z00_3002 = BgL_access1644z00_318;
				BgL_fastzd2alpha1645zd2_3003 = BgL_fastzd2alpha1645zd2_319;
				BgL_removable1646z00_3004 = BgL_removable1646z00_320;
				BgL_occurrence1647z00_3005 = BgL_occurrence1647z00_321;
				((((BgL_variablez00_bglt) CREF(BgL_new1648z00_313))->BgL_idz00) =
					((obj_t) BgL_id1640z00_2998), BUNSPEC);
				((((BgL_variablez00_bglt) CREF(BgL_new1648z00_313))->BgL_namez00) =
					((obj_t) BgL_name1641z00_2999), BUNSPEC);
				((((BgL_variablez00_bglt) CREF(BgL_new1648z00_313))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1642z00_3000), BUNSPEC);
				((((BgL_variablez00_bglt) CREF(BgL_new1648z00_313))->BgL_valuez00) =
					((BgL_valuez00_bglt) BgL_value1643z00_3001), BUNSPEC);
				((((BgL_variablez00_bglt) CREF(BgL_new1648z00_313))->BgL_accessz00) =
					((obj_t) BgL_access1644z00_3002), BUNSPEC);
				((((BgL_variablez00_bglt) CREF(BgL_new1648z00_313))->
						BgL_fastzd2alphazd2) =
					((obj_t) BgL_fastzd2alpha1645zd2_3003), BUNSPEC);
				((((BgL_variablez00_bglt) CREF(BgL_new1648z00_313))->BgL_removablez00) =
					((obj_t) BgL_removable1646z00_3004), BUNSPEC);
				((((BgL_variablez00_bglt) CREF(BgL_new1648z00_313))->
						BgL_occurrencez00) = ((long) BgL_occurrence1647z00_3005), BUNSPEC);
				return BgL_new1648z00_313;
			}
		}
	}



/* _fill-variable! */
	obj_t BGl__fillzd2variablez12zc0zzast_varz00(obj_t BgL_envz00_2597,
		obj_t BgL_new1648z00_2598, obj_t BgL_id1640z00_2599,
		obj_t BgL_name1641z00_2600, obj_t BgL_type1642z00_2601,
		obj_t BgL_value1643z00_2602, obj_t BgL_access1644z00_2603,
		obj_t BgL_fastzd2alpha1645zd2_2604, obj_t BgL_removable1646z00_2605,
		obj_t BgL_occurrence1647z00_2606)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 21 */
			{	/* Ast/var.scm 21 */
				BgL_variablez00_bglt BgL_auxz00_4022;

				{	/* Ast/var.scm 21 */
					BgL_variablez00_bglt BgL_res3048z00_3023;

					{	/* Ast/var.scm 21 */
						BgL_variablez00_bglt BgL_new1648z00_3006;

						obj_t BgL_id1640z00_3007;

						BgL_typez00_bglt BgL_type1642z00_3009;

						BgL_valuez00_bglt BgL_value1643z00_3010;

						long BgL_occurrence1647z00_3014;

						BgL_new1648z00_3006 = (BgL_variablez00_bglt) (BgL_new1648z00_2598);
						BgL_id1640z00_3007 = BgL_id1640z00_2599;
						BgL_type1642z00_3009 = (BgL_typez00_bglt) (BgL_type1642z00_2601);
						BgL_value1643z00_3010 = (BgL_valuez00_bglt) (BgL_value1643z00_2602);
						BgL_occurrence1647z00_3014 =
							(long) CINT(BgL_occurrence1647z00_2606);
						{	/* Ast/var.scm 21 */
							obj_t BgL_id1640z00_3015;

							obj_t BgL_name1641z00_3016;

							BgL_typez00_bglt BgL_type1642z00_3017;

							BgL_valuez00_bglt BgL_value1643z00_3018;

							obj_t BgL_access1644z00_3019;

							obj_t BgL_fastzd2alpha1645zd2_3020;

							obj_t BgL_removable1646z00_3021;

							long BgL_occurrence1647z00_3022;

							BgL_id1640z00_3015 = BgL_id1640z00_3007;
							BgL_name1641z00_3016 = BgL_name1641z00_2600;
							BgL_type1642z00_3017 = BgL_type1642z00_3009;
							BgL_value1643z00_3018 = BgL_value1643z00_3010;
							BgL_access1644z00_3019 = BgL_access1644z00_2603;
							BgL_fastzd2alpha1645zd2_3020 = BgL_fastzd2alpha1645zd2_2604;
							BgL_removable1646z00_3021 = BgL_removable1646z00_2605;
							BgL_occurrence1647z00_3022 = BgL_occurrence1647z00_3014;
							((((BgL_variablez00_bglt) CREF(BgL_new1648z00_3006))->BgL_idz00) =
								((obj_t) BgL_id1640z00_3015), BUNSPEC);
							((((BgL_variablez00_bglt) CREF(BgL_new1648z00_3006))->
									BgL_namez00) = ((obj_t) BgL_name1641z00_3016), BUNSPEC);
							((((BgL_variablez00_bglt) CREF(BgL_new1648z00_3006))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type1642z00_3017), BUNSPEC);
							((((BgL_variablez00_bglt) CREF(BgL_new1648z00_3006))->
									BgL_valuez00) =
								((BgL_valuez00_bglt) BgL_value1643z00_3018), BUNSPEC);
							((((BgL_variablez00_bglt) CREF(BgL_new1648z00_3006))->
									BgL_accessz00) = ((obj_t) BgL_access1644z00_3019), BUNSPEC);
							((((BgL_variablez00_bglt) CREF(BgL_new1648z00_3006))->
									BgL_fastzd2alphazd2) =
								((obj_t) BgL_fastzd2alpha1645zd2_3020), BUNSPEC);
							((((BgL_variablez00_bglt) CREF(BgL_new1648z00_3006))->
									BgL_removablez00) =
								((obj_t) BgL_removable1646z00_3021), BUNSPEC);
							((((BgL_variablez00_bglt) CREF(BgL_new1648z00_3006))->
									BgL_occurrencez00) =
								((long) BgL_occurrence1647z00_3022), BUNSPEC);
							BgL_res3048z00_3023 = BgL_new1648z00_3006;
					}}
					BgL_auxz00_4022 = BgL_res3048z00_3023;
				}
				return (obj_t) (BgL_auxz00_4022);
			}
		}
	}



/* %allocate-variable */
	BGL_EXPORTED_DEF BgL_variablez00_bglt
		BGl_z52allocatezd2variablez80zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 21 */
			{	/* Ast/var.scm 21 */
				BgL_variablez00_bglt BgL_new1658z00_3024;

				BgL_new1658z00_3024 =
					((BgL_variablez00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_variablez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1658z00_3024),
					BGl_classzd2numzd2zz__objectz00(BGl_variablez00zzast_varz00));
				{	/* Ast/var.scm 21 */
					BgL_objectz00_bglt BgL_auxz00_4040;

					BgL_auxz00_4040 = (BgL_objectz00_bglt) (BgL_new1658z00_3024);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4040, BFALSE);
				}
				return BgL_new1658z00_3024;
			}
		}
	}



/* _%allocate-variable */
	obj_t BGl__z52allocatezd2variablez80zzast_varz00(obj_t BgL_envz00_2374)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 21 */
			{	/* Ast/var.scm 21 */
				BgL_variablez00_bglt BgL_auxz00_4043;

				{	/* Ast/var.scm 21 */
					BgL_variablez00_bglt BgL_res3049z00_3028;

					{	/* Ast/var.scm 21 */
						BgL_variablez00_bglt BgL_new1658z00_3026;

						BgL_new1658z00_3026 =
							((BgL_variablez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_variablez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1658z00_3026),
							BGl_classzd2numzd2zz__objectz00(BGl_variablez00zzast_varz00));
						{	/* Ast/var.scm 21 */
							BgL_objectz00_bglt BgL_auxz00_4048;

							BgL_auxz00_4048 = (BgL_objectz00_bglt) (BgL_new1658z00_3026);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4048, BFALSE);
						}
						BgL_res3049z00_3028 = BgL_new1658z00_3026;
					}
					BgL_auxz00_4043 = BgL_res3049z00_3028;
				}
				return (obj_t) (BgL_auxz00_4043);
			}
		}
	}



/* variable-nil */
	BGL_EXPORTED_DEF BgL_variablez00_bglt BGl_variablezd2nilzd2zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 21 */
			if ((BGl_z52thezd2variablezd2nilz52zzast_varz00 == BUNSPEC))
				{	/* Ast/var.scm 21 */
					{	/* Ast/var.scm 21 */
						BgL_variablez00_bglt BgL_res2986z00_1754;

						{	/* Ast/var.scm 21 */
							BgL_variablez00_bglt BgL_new1658z00_1750;

							BgL_new1658z00_1750 =
								((BgL_variablez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_variablez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1658z00_1750),
								BGl_classzd2numzd2zz__objectz00(BGl_variablez00zzast_varz00));
							{	/* Ast/var.scm 21 */
								BgL_objectz00_bglt BgL_auxz00_4058;

								BgL_auxz00_4058 = (BgL_objectz00_bglt) (BgL_new1658z00_1750);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4058, BFALSE);
							}
							BgL_res2986z00_1754 = BgL_new1658z00_1750;
						}
						BGl_z52thezd2variablezd2nilz52zzast_varz00 =
							(obj_t) (BgL_res2986z00_1754);
					}
					{	/* Ast/var.scm 21 */
						obj_t BgL_arg2732z00_731;

						BgL_typez00_bglt BgL_arg2733z00_732;

						BgL_valuez00_bglt BgL_arg2734z00_733;

						BgL_arg2732z00_731 = CNST_TABLE_REF(((long) 14));
						BgL_arg2733z00_732 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg2734z00_733 = BGl_valuezd2nilzd2zzast_varz00();
						{	/* Ast/var.scm 21 */
							BgL_variablez00_bglt BgL_res2987z00_1772;

							{	/* Ast/var.scm 21 */
								BgL_variablez00_bglt BgL_new1648z00_1755;

								BgL_new1648z00_1755 =
									(BgL_variablez00_bglt)
									(BGl_z52thezd2variablezd2nilz52zzast_varz00);
								{	/* Ast/var.scm 21 */
									obj_t BgL_id1640z00_1764;

									obj_t BgL_name1641z00_1765;

									BgL_typez00_bglt BgL_type1642z00_1766;

									BgL_valuez00_bglt BgL_value1643z00_1767;

									obj_t BgL_access1644z00_1768;

									obj_t BgL_fastzd2alpha1645zd2_1769;

									obj_t BgL_removable1646z00_1770;

									long BgL_occurrence1647z00_1771;

									BgL_id1640z00_1764 = BgL_arg2732z00_731;
									BgL_name1641z00_1765 = BUNSPEC;
									BgL_type1642z00_1766 = BgL_arg2733z00_732;
									BgL_value1643z00_1767 = BgL_arg2734z00_733;
									BgL_access1644z00_1768 = BUNSPEC;
									BgL_fastzd2alpha1645zd2_1769 = BUNSPEC;
									BgL_removable1646z00_1770 = BUNSPEC;
									BgL_occurrence1647z00_1771 = ((long) 0);
									((((BgL_variablez00_bglt) CREF(BgL_new1648z00_1755))->
											BgL_idz00) = ((obj_t) BgL_id1640z00_1764), BUNSPEC);
									((((BgL_variablez00_bglt) CREF(BgL_new1648z00_1755))->
											BgL_namez00) = ((obj_t) BgL_name1641z00_1765), BUNSPEC);
									((((BgL_variablez00_bglt) CREF(BgL_new1648z00_1755))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type1642z00_1766), BUNSPEC);
									((((BgL_variablez00_bglt) CREF(BgL_new1648z00_1755))->
											BgL_valuez00) =
										((BgL_valuez00_bglt) BgL_value1643z00_1767), BUNSPEC);
									((((BgL_variablez00_bglt) CREF(BgL_new1648z00_1755))->
											BgL_accessz00) =
										((obj_t) BgL_access1644z00_1768), BUNSPEC);
									((((BgL_variablez00_bglt) CREF(BgL_new1648z00_1755))->
											BgL_fastzd2alphazd2) =
										((obj_t) BgL_fastzd2alpha1645zd2_1769), BUNSPEC);
									((((BgL_variablez00_bglt) CREF(BgL_new1648z00_1755))->
											BgL_removablez00) =
										((obj_t) BgL_removable1646z00_1770), BUNSPEC);
									((((BgL_variablez00_bglt) CREF(BgL_new1648z00_1755))->
											BgL_occurrencez00) =
										((long) BgL_occurrence1647z00_1771), BUNSPEC);
									BgL_res2987z00_1772 = BgL_new1648z00_1755;
							}}
							(obj_t) (BgL_res2987z00_1772);
				}}}
			else
				{	/* Ast/var.scm 21 */
					BFALSE;
				}
			return
				(BgL_variablez00_bglt) (BGl_z52thezd2variablezd2nilz52zzast_varz00);
		}
	}



/* _variable-nil */
	obj_t BGl__variablezd2nilzd2zzast_varz00(obj_t BgL_envz00_2375)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 21 */
			return (obj_t) (BGl_variablezd2nilzd2zzast_varz00());
		}
	}



/* value? */
	BGL_EXPORTED_DEF bool_t BGl_valuezf3zf3zzast_varz00(obj_t BgL_obj1607z00_344)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 19 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1607z00_344,
				BGl_valuez00zzast_varz00);
		}
	}



/* _value? */
	obj_t BGl__valuezf3zf3zzast_varz00(obj_t BgL_envz00_2372,
		obj_t BgL_obj1607z00_2373)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 19 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1607z00_2373,
					BGl_valuez00zzast_varz00));
		}
	}



/* make-value */
	BGL_EXPORTED_DEF BgL_valuez00_bglt BGl_makezd2valuezd2zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 19 */
			{	/* Ast/var.scm 19 */
				BgL_valuez00_bglt BgL_new1600z00_735;

				{	/* Ast/var.scm 19 */
					BgL_valuez00_bglt BgL_res2988z00_1777;

					{	/* Ast/var.scm 19 */
						BgL_valuez00_bglt BgL_new1604z00_1773;

						BgL_new1604z00_1773 =
							((BgL_valuez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_valuez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1604z00_1773),
							BGl_classzd2numzd2zz__objectz00(BGl_valuez00zzast_varz00));
						{	/* Ast/var.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_4085;

							BgL_auxz00_4085 = (BgL_objectz00_bglt) (BgL_new1604z00_1773);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4085, BFALSE);
						}
						BgL_res2988z00_1777 = BgL_new1604z00_1773;
					}
					BgL_new1600z00_735 = BgL_res2988z00_1777;
				}
				return BgL_new1600z00_735;
			}
		}
	}



/* _make-value */
	obj_t BGl__makezd2valuezd2zzast_varz00(obj_t BgL_envz00_2607)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 19 */
			return (obj_t) (BGl_makezd2valuezd2zzast_varz00());
		}
	}



/* fill-value! */
	BGL_EXPORTED_DEF BgL_valuez00_bglt
		BGl_fillzd2valuez12zc0zzast_varz00(BgL_valuez00_bglt BgL_new1602z00_348)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 19 */
			{	/* Ast/var.scm 19 */

				return BgL_new1602z00_348;
			}
		}
	}



/* _fill-value! */
	obj_t BGl__fillzd2valuez12zc0zzast_varz00(obj_t BgL_envz00_2608,
		obj_t BgL_new1602z00_2609)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 19 */
			{	/* Ast/var.scm 19 */
				BgL_valuez00_bglt BgL_auxz00_4090;

				{	/* Ast/var.scm 19 */

					BgL_auxz00_4090 = (BgL_valuez00_bglt) (BgL_new1602z00_2609);
				}
				return (obj_t) (BgL_auxz00_4090);
			}
		}
	}



/* %allocate-value */
	BGL_EXPORTED_DEF BgL_valuez00_bglt BGl_z52allocatezd2valuez80zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 19 */
			{	/* Ast/var.scm 19 */
				BgL_valuez00_bglt BgL_new1604z00_3031;

				BgL_new1604z00_3031 =
					((BgL_valuez00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_valuez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1604z00_3031),
					BGl_classzd2numzd2zz__objectz00(BGl_valuez00zzast_varz00));
				{	/* Ast/var.scm 19 */
					BgL_objectz00_bglt BgL_auxz00_4097;

					BgL_auxz00_4097 = (BgL_objectz00_bglt) (BgL_new1604z00_3031);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_4097, BFALSE);
				}
				return BgL_new1604z00_3031;
			}
		}
	}



/* _%allocate-value */
	obj_t BGl__z52allocatezd2valuez80zzast_varz00(obj_t BgL_envz00_2370)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 19 */
			{	/* Ast/var.scm 19 */
				BgL_valuez00_bglt BgL_auxz00_4100;

				{	/* Ast/var.scm 19 */
					BgL_valuez00_bglt BgL_res3050z00_3035;

					{	/* Ast/var.scm 19 */
						BgL_valuez00_bglt BgL_new1604z00_3033;

						BgL_new1604z00_3033 =
							((BgL_valuez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_valuez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1604z00_3033),
							BGl_classzd2numzd2zz__objectz00(BGl_valuez00zzast_varz00));
						{	/* Ast/var.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_4105;

							BgL_auxz00_4105 = (BgL_objectz00_bglt) (BgL_new1604z00_3033);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4105, BFALSE);
						}
						BgL_res3050z00_3035 = BgL_new1604z00_3033;
					}
					BgL_auxz00_4100 = BgL_res3050z00_3035;
				}
				return (obj_t) (BgL_auxz00_4100);
			}
		}
	}



/* value-nil */
	BGL_EXPORTED_DEF BgL_valuez00_bglt BGl_valuezd2nilzd2zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 19 */
			if ((BGl_z52thezd2valuezd2nilz52zzast_varz00 == BUNSPEC))
				{	/* Ast/var.scm 19 */
					{	/* Ast/var.scm 19 */
						BgL_valuez00_bglt BgL_res2989z00_1787;

						{	/* Ast/var.scm 19 */
							BgL_valuez00_bglt BgL_new1604z00_1783;

							BgL_new1604z00_1783 =
								((BgL_valuez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_valuez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1604z00_1783),
								BGl_classzd2numzd2zz__objectz00(BGl_valuez00zzast_varz00));
							{	/* Ast/var.scm 19 */
								BgL_objectz00_bglt BgL_auxz00_4115;

								BgL_auxz00_4115 = (BgL_objectz00_bglt) (BgL_new1604z00_1783);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4115, BFALSE);
							}
							BgL_res2989z00_1787 = BgL_new1604z00_1783;
						}
						BGl_z52thezd2valuezd2nilz52zzast_varz00 =
							(obj_t) (BgL_res2989z00_1787);
					}
					{	/* Ast/var.scm 19 */
						BgL_valuez00_bglt BgL_new1602z00_1788;

						BgL_new1602z00_1788 =
							(BgL_valuez00_bglt) (BGl_z52thezd2valuezd2nilz52zzast_varz00);
						{	/* Ast/var.scm 19 */

							(obj_t) (BgL_new1602z00_1788);
				}}}
			else
				{	/* Ast/var.scm 19 */
					BFALSE;
				}
			return (BgL_valuez00_bglt) (BGl_z52thezd2valuezd2nilz52zzast_varz00);
		}
	}



/* _value-nil */
	obj_t BGl__valuezd2nilzd2zzast_varz00(obj_t BgL_envz00_2371)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 19 */
			return (obj_t) (BGl_valuezd2nilzd2zzast_varz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 14 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_feffectz00zzast_varz00, BGl_proc2998z00zzast_varz00,
				BGl_string2999z00zzast_varz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_feffectz00zzast_varz00, BGl_proc3000z00zzast_varz00,
				BGl_string3001z00zzast_varz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_sexitz00zzast_varz00,
				BGl_proc3002z00zzast_varz00, BGl_string2999z00zzast_varz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_sexitz00zzast_varz00, BGl_proc3003z00zzast_varz00,
				BGl_string3001z00zzast_varz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_cvarz00zzast_varz00,
				BGl_proc3004z00zzast_varz00, BGl_string2999z00zzast_varz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_cvarz00zzast_varz00, BGl_proc3005z00zzast_varz00,
				BGl_string3001z00zzast_varz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_scnstz00zzast_varz00,
				BGl_proc3006z00zzast_varz00, BGl_string2999z00zzast_varz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_scnstz00zzast_varz00, BGl_proc3007z00zzast_varz00,
				BGl_string3001z00zzast_varz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_svarz00zzast_varz00,
				BGl_proc3008z00zzast_varz00, BGl_string2999z00zzast_varz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_svarz00zzast_varz00, BGl_proc3009z00zzast_varz00,
				BGl_string3001z00zzast_varz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_cfunz00zzast_varz00,
				BGl_proc3010z00zzast_varz00, BGl_string2999z00zzast_varz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_cfunz00zzast_varz00, BGl_proc3011z00zzast_varz00,
				BGl_string3001z00zzast_varz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_sfunz00zzast_varz00,
				BGl_proc3012z00zzast_varz00, BGl_string2999z00zzast_varz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_sfunz00zzast_varz00, BGl_proc3013z00zzast_varz00,
				BGl_string3001z00zzast_varz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_funz00zzast_varz00,
				BGl_proc3014z00zzast_varz00, BGl_string2999z00zzast_varz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_funz00zzast_varz00, BGl_proc3015z00zzast_varz00,
				BGl_string3001z00zzast_varz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_localz00zzast_varz00,
				BGl_proc3016z00zzast_varz00, BGl_string2999z00zzast_varz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_localz00zzast_varz00, BGl_proc3017z00zzast_varz00,
				BGl_string3001z00zzast_varz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_globalz00zzast_varz00, BGl_proc3018z00zzast_varz00,
				BGl_string2999z00zzast_varz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_globalz00zzast_varz00, BGl_proc3019z00zzast_varz00,
				BGl_string3001z00zzast_varz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_variablez00zzast_varz00, BGl_proc3020z00zzast_varz00,
				BGl_string2999z00zzast_varz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_variablez00zzast_varz00, BGl_proc3021z00zzast_varz00,
				BGl_string3001z00zzast_varz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_valuez00zzast_varz00,
				BGl_proc3022z00zzast_varz00, BGl_string2999z00zzast_varz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_valuez00zzast_varz00, BGl_proc3023z00zzast_varz00,
				BGl_string3001z00zzast_varz00);
		}
	}



/* struct+object->objec2530 */
	obj_t BGl_structzb2objectzd2ze3objec2530z83zzast_varz00(obj_t BgL_envz00_2634,
		obj_t BgL_oz00_2635, obj_t BgL_sz00_2636)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 19 */
			{
				BgL_valuez00_bglt BgL_oz00_1139;

				obj_t BgL_sz00_1140;

				{	/* Ast/var.scm 19 */
					BgL_valuez00_bglt BgL_auxz00_4148;

					BgL_oz00_1139 = (BgL_valuez00_bglt) (BgL_oz00_2635);
					BgL_sz00_1140 = BgL_sz00_2636;
					{	/* Ast/var.scm 19 */
						obj_t BgL_auxz00_4151;

						BgL_objectz00_bglt BgL_auxz00_4149;

						BgL_auxz00_4151 = STRUCT_REF(BgL_sz00_1140, (int) (((long) 0)));
						BgL_auxz00_4149 = (BgL_objectz00_bglt) (BgL_oz00_1139);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_4149, BgL_auxz00_4151);
					}
					BgL_auxz00_4148 = BgL_oz00_1139;
					return (obj_t) (BgL_auxz00_4148);
				}
			}
		}
	}



/* object->struct-value2528 */
	obj_t BGl_objectzd2ze3structzd2value2528ze3zzast_varz00(obj_t BgL_envz00_2637,
		obj_t BgL_obj1605z00_2638)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 19 */
			{
				BgL_valuez00_bglt BgL_obj1605z00_1133;

				BgL_obj1605z00_1133 = (BgL_valuez00_bglt) (BgL_obj1605z00_2638);
				{	/* Ast/var.scm 19 */
					obj_t BgL_res1606z00_1136;

					{	/* Ast/var.scm 19 */
						obj_t BgL_keyz00_2345;

						BgL_keyz00_2345 = CNST_TABLE_REF(((long) 2));
						BgL_res1606z00_1136 =
							make_struct(BgL_keyz00_2345, (int) (((long) 1)), BUNSPEC);
					}
					{	/* Ast/var.scm 19 */
						int BgL_auxz00_4160;

						BgL_auxz00_4160 = (int) (((long) 0));
						STRUCT_SET(BgL_res1606z00_1136, BgL_auxz00_4160, BFALSE);
					}
					return BgL_res1606z00_1136;
				}
			}
		}
	}



/* struct+object->objec2526 */
	obj_t BGl_structzb2objectzd2ze3objec2526z83zzast_varz00(obj_t BgL_envz00_2639,
		obj_t BgL_oz00_2640, obj_t BgL_sz00_2641)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 21 */
			{
				BgL_variablez00_bglt BgL_oz00_1118;

				obj_t BgL_sz00_1119;

				{	/* Ast/var.scm 21 */
					BgL_variablez00_bglt BgL_auxz00_4164;

					BgL_oz00_1118 = (BgL_variablez00_bglt) (BgL_oz00_2640);
					BgL_sz00_1119 = BgL_sz00_2641;
					{	/* Ast/var.scm 21 */
						obj_t BgL_arg2938z00_1122;

						BgL_arg2938z00_1122 = STRUCT_REF(BgL_sz00_1119, (int) (((long) 0)));
						{	/* Ast/var.scm 21 */
							BgL_objectz00_bglt BgL_auxz00_4167;

							BgL_auxz00_4167 = (BgL_objectz00_bglt) (BgL_oz00_1118);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4167, BgL_arg2938z00_1122);
					}}
					{
						obj_t BgL_auxz00_4170;

						BgL_auxz00_4170 = STRUCT_REF(BgL_sz00_1119, (int) (((long) 1)));
						((((BgL_variablez00_bglt) CREF(BgL_oz00_1118))->BgL_idz00) =
							((obj_t) BgL_auxz00_4170), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4174;

						BgL_auxz00_4174 = STRUCT_REF(BgL_sz00_1119, (int) (((long) 2)));
						((((BgL_variablez00_bglt) CREF(BgL_oz00_1118))->BgL_namez00) =
							((obj_t) BgL_auxz00_4174), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_4178;

						BgL_auxz00_4178 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_1119,
								(int) (((long) 3))));
						((((BgL_variablez00_bglt) CREF(BgL_oz00_1118))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_4178), BUNSPEC);
					}
					{
						BgL_valuez00_bglt BgL_auxz00_4183;

						BgL_auxz00_4183 =
							(BgL_valuez00_bglt) (STRUCT_REF(BgL_sz00_1119,
								(int) (((long) 4))));
						((((BgL_variablez00_bglt) CREF(BgL_oz00_1118))->BgL_valuez00) =
							((BgL_valuez00_bglt) BgL_auxz00_4183), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4188;

						BgL_auxz00_4188 = STRUCT_REF(BgL_sz00_1119, (int) (((long) 5)));
						((((BgL_variablez00_bglt) CREF(BgL_oz00_1118))->BgL_accessz00) =
							((obj_t) BgL_auxz00_4188), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4192;

						BgL_auxz00_4192 = STRUCT_REF(BgL_sz00_1119, (int) (((long) 6)));
						((((BgL_variablez00_bglt) CREF(BgL_oz00_1118))->
								BgL_fastzd2alphazd2) = ((obj_t) BgL_auxz00_4192), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4196;

						BgL_auxz00_4196 = STRUCT_REF(BgL_sz00_1119, (int) (((long) 7)));
						((((BgL_variablez00_bglt) CREF(BgL_oz00_1118))->BgL_removablez00) =
							((obj_t) BgL_auxz00_4196), BUNSPEC);
					}
					{
						long BgL_auxz00_4200;

						BgL_auxz00_4200 =
							(long) CINT(STRUCT_REF(BgL_sz00_1119, (int) (((long) 8))));
						((((BgL_variablez00_bglt) CREF(BgL_oz00_1118))->BgL_occurrencez00) =
							((long) BgL_auxz00_4200), BUNSPEC);
					}
					BgL_auxz00_4164 = BgL_oz00_1118;
					return (obj_t) (BgL_auxz00_4164);
				}
			}
		}
	}



/* object->struct-varia2524 */
	obj_t BGl_objectzd2ze3structzd2varia2524ze3zzast_varz00(obj_t BgL_envz00_2642,
		obj_t BgL_obj1659z00_2643)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 21 */
			{
				BgL_variablez00_bglt BgL_obj1659z00_1096;

				BgL_obj1659z00_1096 = (BgL_variablez00_bglt) (BgL_obj1659z00_2643);
				{	/* Ast/var.scm 21 */
					obj_t BgL_res1660z00_1099;

					{	/* Ast/var.scm 21 */
						obj_t BgL_keyz00_2289;

						BgL_keyz00_2289 = CNST_TABLE_REF(((long) 3));
						BgL_res1660z00_1099 =
							make_struct(BgL_keyz00_2289, (int) (((long) 9)), BUNSPEC);
					}
					{	/* Ast/var.scm 21 */
						int BgL_auxz00_4210;

						BgL_auxz00_4210 = (int) (((long) 0));
						STRUCT_SET(BgL_res1660z00_1099, BgL_auxz00_4210, BFALSE);
					}
					{	/* Ast/var.scm 21 */
						obj_t BgL_arg2922z00_1101;

						BgL_arg2922z00_1101 =
							(((BgL_variablez00_bglt) CREF(BgL_obj1659z00_1096))->BgL_idz00);
						{	/* Ast/var.scm 21 */
							int BgL_auxz00_4214;

							BgL_auxz00_4214 = (int) (((long) 1));
							STRUCT_SET(BgL_res1660z00_1099, BgL_auxz00_4214,
								BgL_arg2922z00_1101);
					}}
					{	/* Ast/var.scm 21 */
						obj_t BgL_arg2924z00_1103;

						BgL_arg2924z00_1103 =
							(((BgL_variablez00_bglt) CREF(BgL_obj1659z00_1096))->BgL_namez00);
						{	/* Ast/var.scm 21 */
							int BgL_auxz00_4218;

							BgL_auxz00_4218 = (int) (((long) 2));
							STRUCT_SET(BgL_res1660z00_1099, BgL_auxz00_4218,
								BgL_arg2924z00_1103);
					}}
					{	/* Ast/var.scm 21 */
						BgL_typez00_bglt BgL_arg2926z00_1105;

						BgL_arg2926z00_1105 =
							(((BgL_variablez00_bglt) CREF(BgL_obj1659z00_1096))->BgL_typez00);
						{	/* Ast/var.scm 21 */
							obj_t BgL_auxz00_4224;

							int BgL_auxz00_4222;

							BgL_auxz00_4224 = (obj_t) (BgL_arg2926z00_1105);
							BgL_auxz00_4222 = (int) (((long) 3));
							STRUCT_SET(BgL_res1660z00_1099, BgL_auxz00_4222, BgL_auxz00_4224);
					}}
					{	/* Ast/var.scm 21 */
						BgL_valuez00_bglt BgL_arg2928z00_1107;

						BgL_arg2928z00_1107 =
							(((BgL_variablez00_bglt) CREF(BgL_obj1659z00_1096))->
							BgL_valuez00);
						{	/* Ast/var.scm 21 */
							obj_t BgL_auxz00_4230;

							int BgL_auxz00_4228;

							BgL_auxz00_4230 = (obj_t) (BgL_arg2928z00_1107);
							BgL_auxz00_4228 = (int) (((long) 4));
							STRUCT_SET(BgL_res1660z00_1099, BgL_auxz00_4228, BgL_auxz00_4230);
					}}
					{	/* Ast/var.scm 21 */
						obj_t BgL_arg2930z00_1109;

						BgL_arg2930z00_1109 =
							(((BgL_variablez00_bglt) CREF(BgL_obj1659z00_1096))->
							BgL_accessz00);
						{	/* Ast/var.scm 21 */
							int BgL_auxz00_4234;

							BgL_auxz00_4234 = (int) (((long) 5));
							STRUCT_SET(BgL_res1660z00_1099, BgL_auxz00_4234,
								BgL_arg2930z00_1109);
					}}
					{	/* Ast/var.scm 21 */
						obj_t BgL_arg2932z00_1111;

						BgL_arg2932z00_1111 =
							(((BgL_variablez00_bglt) CREF(BgL_obj1659z00_1096))->
							BgL_fastzd2alphazd2);
						{	/* Ast/var.scm 21 */
							int BgL_auxz00_4238;

							BgL_auxz00_4238 = (int) (((long) 6));
							STRUCT_SET(BgL_res1660z00_1099, BgL_auxz00_4238,
								BgL_arg2932z00_1111);
					}}
					{	/* Ast/var.scm 21 */
						obj_t BgL_arg2934z00_1113;

						BgL_arg2934z00_1113 =
							(((BgL_variablez00_bglt) CREF(BgL_obj1659z00_1096))->
							BgL_removablez00);
						{	/* Ast/var.scm 21 */
							int BgL_auxz00_4242;

							BgL_auxz00_4242 = (int) (((long) 7));
							STRUCT_SET(BgL_res1660z00_1099, BgL_auxz00_4242,
								BgL_arg2934z00_1113);
					}}
					{	/* Ast/var.scm 21 */
						long BgL_arg2936z00_1115;

						BgL_arg2936z00_1115 =
							(((BgL_variablez00_bglt) CREF(BgL_obj1659z00_1096))->
							BgL_occurrencez00);
						{	/* Ast/var.scm 21 */
							obj_t BgL_auxz00_4248;

							int BgL_auxz00_4246;

							BgL_auxz00_4248 = BINT(BgL_arg2936z00_1115);
							BgL_auxz00_4246 = (int) (((long) 8));
							STRUCT_SET(BgL_res1660z00_1099, BgL_auxz00_4246, BgL_auxz00_4248);
					}}
					return BgL_res1660z00_1099;
				}
			}
		}
	}



/* struct+object->objec2522 */
	obj_t BGl_structzb2objectzd2ze3objec2522z83zzast_varz00(obj_t BgL_envz00_2644,
		obj_t BgL_oz00_2645, obj_t BgL_sz00_2646)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 40 */
			{
				BgL_globalz00_bglt BgL_oz00_1073;

				obj_t BgL_sz00_1074;

				{	/* Ast/var.scm 40 */
					BgL_globalz00_bglt BgL_auxz00_4252;

					BgL_oz00_1073 = (BgL_globalz00_bglt) (BgL_oz00_2645);
					BgL_sz00_1074 = BgL_sz00_2646;
					{	/* Ast/var.scm 40 */
						obj_t BgL_arg2919z00_1077;

						BgL_arg2919z00_1077 = STRUCT_REF(BgL_sz00_1074, (int) (((long) 0)));
						{	/* Ast/var.scm 40 */
							BgL_objectz00_bglt BgL_auxz00_4255;

							BgL_auxz00_4255 = (BgL_objectz00_bglt) (BgL_oz00_1073);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4255, BgL_arg2919z00_1077);
					}}
					{
						obj_t BgL_auxz00_4258;

						BgL_auxz00_4258 = STRUCT_REF(BgL_sz00_1074, (int) (((long) 1)));
						((((BgL_globalz00_bglt) CREF(BgL_oz00_1073))->BgL_idz00) =
							((obj_t) BgL_auxz00_4258), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4262;

						BgL_auxz00_4262 = STRUCT_REF(BgL_sz00_1074, (int) (((long) 2)));
						((((BgL_globalz00_bglt) CREF(BgL_oz00_1073))->BgL_namez00) =
							((obj_t) BgL_auxz00_4262), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_4266;

						BgL_auxz00_4266 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_1074,
								(int) (((long) 3))));
						((((BgL_globalz00_bglt) CREF(BgL_oz00_1073))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_4266), BUNSPEC);
					}
					{
						BgL_valuez00_bglt BgL_auxz00_4271;

						BgL_auxz00_4271 =
							(BgL_valuez00_bglt) (STRUCT_REF(BgL_sz00_1074,
								(int) (((long) 4))));
						((((BgL_globalz00_bglt) CREF(BgL_oz00_1073))->BgL_valuez00) =
							((BgL_valuez00_bglt) BgL_auxz00_4271), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4276;

						BgL_auxz00_4276 = STRUCT_REF(BgL_sz00_1074, (int) (((long) 5)));
						((((BgL_globalz00_bglt) CREF(BgL_oz00_1073))->BgL_accessz00) =
							((obj_t) BgL_auxz00_4276), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4280;

						BgL_auxz00_4280 = STRUCT_REF(BgL_sz00_1074, (int) (((long) 6)));
						((((BgL_globalz00_bglt) CREF(BgL_oz00_1073))->BgL_fastzd2alphazd2) =
							((obj_t) BgL_auxz00_4280), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4284;

						BgL_auxz00_4284 = STRUCT_REF(BgL_sz00_1074, (int) (((long) 7)));
						((((BgL_globalz00_bglt) CREF(BgL_oz00_1073))->BgL_removablez00) =
							((obj_t) BgL_auxz00_4284), BUNSPEC);
					}
					{
						long BgL_auxz00_4288;

						BgL_auxz00_4288 =
							(long) CINT(STRUCT_REF(BgL_sz00_1074, (int) (((long) 8))));
						((((BgL_globalz00_bglt) CREF(BgL_oz00_1073))->BgL_occurrencez00) =
							((long) BgL_auxz00_4288), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4293;

						BgL_auxz00_4293 = STRUCT_REF(BgL_sz00_1074, (int) (((long) 9)));
						((((BgL_globalz00_bglt) CREF(BgL_oz00_1073))->BgL_modulez00) =
							((obj_t) BgL_auxz00_4293), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4297;

						BgL_auxz00_4297 = STRUCT_REF(BgL_sz00_1074, (int) (((long) 10)));
						((((BgL_globalz00_bglt) CREF(BgL_oz00_1073))->BgL_importz00) =
							((obj_t) BgL_auxz00_4297), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_4301;

						BgL_auxz00_4301 =
							CBOOL(STRUCT_REF(BgL_sz00_1074, (int) (((long) 11))));
						((((BgL_globalz00_bglt) CREF(BgL_oz00_1073))->BgL_evaluablezf3zf3) =
							((bool_t) BgL_auxz00_4301), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4306;

						BgL_auxz00_4306 = STRUCT_REF(BgL_sz00_1074, (int) (((long) 12)));
						((((BgL_globalz00_bglt) CREF(BgL_oz00_1073))->BgL_libraryz00) =
							((obj_t) BgL_auxz00_4306), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_4310;

						BgL_auxz00_4310 =
							CBOOL(STRUCT_REF(BgL_sz00_1074, (int) (((long) 13))));
						((((BgL_globalz00_bglt) CREF(BgL_oz00_1073))->BgL_userzf3zf3) =
							((bool_t) BgL_auxz00_4310), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4315;

						BgL_auxz00_4315 = STRUCT_REF(BgL_sz00_1074, (int) (((long) 14)));
						((((BgL_globalz00_bglt) CREF(BgL_oz00_1073))->BgL_pragmaz00) =
							((obj_t) BgL_auxz00_4315), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4319;

						BgL_auxz00_4319 = STRUCT_REF(BgL_sz00_1074, (int) (((long) 15)));
						((((BgL_globalz00_bglt) CREF(BgL_oz00_1073))->BgL_srcz00) =
							((obj_t) BgL_auxz00_4319), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4323;

						BgL_auxz00_4323 = STRUCT_REF(BgL_sz00_1074, (int) (((long) 16)));
						((((BgL_globalz00_bglt) CREF(BgL_oz00_1073))->
								BgL_jvmzd2typezd2namez00) = ((obj_t) BgL_auxz00_4323), BUNSPEC);
					}
					BgL_auxz00_4252 = BgL_oz00_1073;
					return (obj_t) (BgL_auxz00_4252);
				}
			}
		}
	}



/* object->struct-globa2520 */
	obj_t BGl_objectzd2ze3structzd2globa2520ze3zzast_varz00(obj_t BgL_envz00_2647,
		obj_t BgL_obj1798z00_2648)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 40 */
			{
				BgL_globalz00_bglt BgL_obj1798z00_1035;

				BgL_obj1798z00_1035 = (BgL_globalz00_bglt) (BgL_obj1798z00_2648);
				{	/* Ast/var.scm 40 */
					obj_t BgL_res1799z00_1038;

					{	/* Ast/var.scm 40 */
						obj_t BgL_keyz00_2185;

						BgL_keyz00_2185 = CNST_TABLE_REF(((long) 4));
						BgL_res1799z00_1038 =
							make_struct(BgL_keyz00_2185, (int) (((long) 17)), BUNSPEC);
					}
					{	/* Ast/var.scm 40 */
						int BgL_auxz00_4332;

						BgL_auxz00_4332 = (int) (((long) 0));
						STRUCT_SET(BgL_res1799z00_1038, BgL_auxz00_4332, BFALSE);
					}
					{	/* Ast/var.scm 40 */
						obj_t BgL_arg2885z00_1040;

						{
							BgL_variablez00_bglt BgL_auxz00_4335;

							BgL_auxz00_4335 = (BgL_variablez00_bglt) (BgL_obj1798z00_1035);
							BgL_arg2885z00_1040 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_4335))->BgL_idz00);
						}
						{	/* Ast/var.scm 40 */
							int BgL_auxz00_4338;

							BgL_auxz00_4338 = (int) (((long) 1));
							STRUCT_SET(BgL_res1799z00_1038, BgL_auxz00_4338,
								BgL_arg2885z00_1040);
					}}
					{	/* Ast/var.scm 40 */
						obj_t BgL_arg2887z00_1042;

						{
							BgL_variablez00_bglt BgL_auxz00_4341;

							BgL_auxz00_4341 = (BgL_variablez00_bglt) (BgL_obj1798z00_1035);
							BgL_arg2887z00_1042 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_4341))->BgL_namez00);
						}
						{	/* Ast/var.scm 40 */
							int BgL_auxz00_4344;

							BgL_auxz00_4344 = (int) (((long) 2));
							STRUCT_SET(BgL_res1799z00_1038, BgL_auxz00_4344,
								BgL_arg2887z00_1042);
					}}
					{	/* Ast/var.scm 40 */
						BgL_typez00_bglt BgL_arg2890z00_1044;

						{
							BgL_variablez00_bglt BgL_auxz00_4347;

							BgL_auxz00_4347 = (BgL_variablez00_bglt) (BgL_obj1798z00_1035);
							BgL_arg2890z00_1044 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_4347))->BgL_typez00);
						}
						{	/* Ast/var.scm 40 */
							obj_t BgL_auxz00_4352;

							int BgL_auxz00_4350;

							BgL_auxz00_4352 = (obj_t) (BgL_arg2890z00_1044);
							BgL_auxz00_4350 = (int) (((long) 3));
							STRUCT_SET(BgL_res1799z00_1038, BgL_auxz00_4350, BgL_auxz00_4352);
					}}
					{	/* Ast/var.scm 40 */
						BgL_valuez00_bglt BgL_arg2892z00_1046;

						{
							BgL_variablez00_bglt BgL_auxz00_4355;

							BgL_auxz00_4355 = (BgL_variablez00_bglt) (BgL_obj1798z00_1035);
							BgL_arg2892z00_1046 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_4355))->BgL_valuez00);
						}
						{	/* Ast/var.scm 40 */
							obj_t BgL_auxz00_4360;

							int BgL_auxz00_4358;

							BgL_auxz00_4360 = (obj_t) (BgL_arg2892z00_1046);
							BgL_auxz00_4358 = (int) (((long) 4));
							STRUCT_SET(BgL_res1799z00_1038, BgL_auxz00_4358, BgL_auxz00_4360);
					}}
					{	/* Ast/var.scm 40 */
						obj_t BgL_arg2894z00_1048;

						{
							BgL_variablez00_bglt BgL_auxz00_4363;

							BgL_auxz00_4363 = (BgL_variablez00_bglt) (BgL_obj1798z00_1035);
							BgL_arg2894z00_1048 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_4363))->BgL_accessz00);
						}
						{	/* Ast/var.scm 40 */
							int BgL_auxz00_4366;

							BgL_auxz00_4366 = (int) (((long) 5));
							STRUCT_SET(BgL_res1799z00_1038, BgL_auxz00_4366,
								BgL_arg2894z00_1048);
					}}
					{	/* Ast/var.scm 40 */
						obj_t BgL_arg2897z00_1050;

						{
							BgL_variablez00_bglt BgL_auxz00_4369;

							BgL_auxz00_4369 = (BgL_variablez00_bglt) (BgL_obj1798z00_1035);
							BgL_arg2897z00_1050 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_4369))->
								BgL_fastzd2alphazd2);
						}
						{	/* Ast/var.scm 40 */
							int BgL_auxz00_4372;

							BgL_auxz00_4372 = (int) (((long) 6));
							STRUCT_SET(BgL_res1799z00_1038, BgL_auxz00_4372,
								BgL_arg2897z00_1050);
					}}
					{	/* Ast/var.scm 40 */
						obj_t BgL_arg2899z00_1052;

						{
							BgL_variablez00_bglt BgL_auxz00_4375;

							BgL_auxz00_4375 = (BgL_variablez00_bglt) (BgL_obj1798z00_1035);
							BgL_arg2899z00_1052 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_4375))->
								BgL_removablez00);
						}
						{	/* Ast/var.scm 40 */
							int BgL_auxz00_4378;

							BgL_auxz00_4378 = (int) (((long) 7));
							STRUCT_SET(BgL_res1799z00_1038, BgL_auxz00_4378,
								BgL_arg2899z00_1052);
					}}
					{	/* Ast/var.scm 40 */
						long BgL_arg2901z00_1054;

						{
							BgL_variablez00_bglt BgL_auxz00_4381;

							BgL_auxz00_4381 = (BgL_variablez00_bglt) (BgL_obj1798z00_1035);
							BgL_arg2901z00_1054 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_4381))->
								BgL_occurrencez00);
						}
						{	/* Ast/var.scm 40 */
							obj_t BgL_auxz00_4386;

							int BgL_auxz00_4384;

							BgL_auxz00_4386 = BINT(BgL_arg2901z00_1054);
							BgL_auxz00_4384 = (int) (((long) 8));
							STRUCT_SET(BgL_res1799z00_1038, BgL_auxz00_4384, BgL_auxz00_4386);
					}}
					{	/* Ast/var.scm 40 */
						obj_t BgL_arg2903z00_1056;

						BgL_arg2903z00_1056 =
							(((BgL_globalz00_bglt) CREF(BgL_obj1798z00_1035))->BgL_modulez00);
						{	/* Ast/var.scm 40 */
							int BgL_auxz00_4390;

							BgL_auxz00_4390 = (int) (((long) 9));
							STRUCT_SET(BgL_res1799z00_1038, BgL_auxz00_4390,
								BgL_arg2903z00_1056);
					}}
					{	/* Ast/var.scm 40 */
						obj_t BgL_arg2905z00_1058;

						BgL_arg2905z00_1058 =
							(((BgL_globalz00_bglt) CREF(BgL_obj1798z00_1035))->BgL_importz00);
						{	/* Ast/var.scm 40 */
							int BgL_auxz00_4394;

							BgL_auxz00_4394 = (int) (((long) 10));
							STRUCT_SET(BgL_res1799z00_1038, BgL_auxz00_4394,
								BgL_arg2905z00_1058);
					}}
					{	/* Ast/var.scm 40 */
						bool_t BgL_arg2907z00_1060;

						BgL_arg2907z00_1060 =
							(((BgL_globalz00_bglt) CREF(BgL_obj1798z00_1035))->
							BgL_evaluablezf3zf3);
						{	/* Ast/var.scm 40 */
							obj_t BgL_auxz00_4400;

							int BgL_auxz00_4398;

							BgL_auxz00_4400 = BBOOL(BgL_arg2907z00_1060);
							BgL_auxz00_4398 = (int) (((long) 11));
							STRUCT_SET(BgL_res1799z00_1038, BgL_auxz00_4398, BgL_auxz00_4400);
					}}
					{	/* Ast/var.scm 40 */
						obj_t BgL_arg2909z00_1062;

						BgL_arg2909z00_1062 =
							(((BgL_globalz00_bglt) CREF(BgL_obj1798z00_1035))->
							BgL_libraryz00);
						{	/* Ast/var.scm 40 */
							int BgL_auxz00_4404;

							BgL_auxz00_4404 = (int) (((long) 12));
							STRUCT_SET(BgL_res1799z00_1038, BgL_auxz00_4404,
								BgL_arg2909z00_1062);
					}}
					{	/* Ast/var.scm 40 */
						bool_t BgL_arg2911z00_1064;

						BgL_arg2911z00_1064 =
							(((BgL_globalz00_bglt) CREF(BgL_obj1798z00_1035))->
							BgL_userzf3zf3);
						{	/* Ast/var.scm 40 */
							obj_t BgL_auxz00_4410;

							int BgL_auxz00_4408;

							BgL_auxz00_4410 = BBOOL(BgL_arg2911z00_1064);
							BgL_auxz00_4408 = (int) (((long) 13));
							STRUCT_SET(BgL_res1799z00_1038, BgL_auxz00_4408, BgL_auxz00_4410);
					}}
					{	/* Ast/var.scm 40 */
						obj_t BgL_arg2913z00_1066;

						BgL_arg2913z00_1066 =
							(((BgL_globalz00_bglt) CREF(BgL_obj1798z00_1035))->BgL_pragmaz00);
						{	/* Ast/var.scm 40 */
							int BgL_auxz00_4414;

							BgL_auxz00_4414 = (int) (((long) 14));
							STRUCT_SET(BgL_res1799z00_1038, BgL_auxz00_4414,
								BgL_arg2913z00_1066);
					}}
					{	/* Ast/var.scm 40 */
						obj_t BgL_arg2915z00_1068;

						BgL_arg2915z00_1068 =
							(((BgL_globalz00_bglt) CREF(BgL_obj1798z00_1035))->BgL_srcz00);
						{	/* Ast/var.scm 40 */
							int BgL_auxz00_4418;

							BgL_auxz00_4418 = (int) (((long) 15));
							STRUCT_SET(BgL_res1799z00_1038, BgL_auxz00_4418,
								BgL_arg2915z00_1068);
					}}
					{	/* Ast/var.scm 40 */
						obj_t BgL_arg2917z00_1070;

						BgL_arg2917z00_1070 =
							(((BgL_globalz00_bglt) CREF(BgL_obj1798z00_1035))->
							BgL_jvmzd2typezd2namez00);
						{	/* Ast/var.scm 40 */
							int BgL_auxz00_4422;

							BgL_auxz00_4422 = (int) (((long) 16));
							STRUCT_SET(BgL_res1799z00_1038, BgL_auxz00_4422,
								BgL_arg2917z00_1070);
					}}
					return BgL_res1799z00_1038;
				}
			}
		}
	}



/* struct+object->objec2518 */
	obj_t BGl_structzb2objectzd2ze3objec2518z83zzast_varz00(obj_t BgL_envz00_2649,
		obj_t BgL_oz00_2650, obj_t BgL_sz00_2651)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 65 */
			{
				BgL_localz00_bglt BgL_oz00_1018;

				obj_t BgL_sz00_1019;

				{	/* Ast/var.scm 65 */
					BgL_localz00_bglt BgL_auxz00_4426;

					BgL_oz00_1018 = (BgL_localz00_bglt) (BgL_oz00_2650);
					BgL_sz00_1019 = BgL_sz00_2651;
					{	/* Ast/var.scm 65 */
						obj_t BgL_arg2882z00_1022;

						BgL_arg2882z00_1022 = STRUCT_REF(BgL_sz00_1019, (int) (((long) 0)));
						{	/* Ast/var.scm 65 */
							BgL_objectz00_bglt BgL_auxz00_4429;

							BgL_auxz00_4429 = (BgL_objectz00_bglt) (BgL_oz00_1018);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4429, BgL_arg2882z00_1022);
					}}
					{
						obj_t BgL_auxz00_4432;

						BgL_auxz00_4432 = STRUCT_REF(BgL_sz00_1019, (int) (((long) 1)));
						((((BgL_localz00_bglt) CREF(BgL_oz00_1018))->BgL_idz00) =
							((obj_t) BgL_auxz00_4432), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4436;

						BgL_auxz00_4436 = STRUCT_REF(BgL_sz00_1019, (int) (((long) 2)));
						((((BgL_localz00_bglt) CREF(BgL_oz00_1018))->BgL_namez00) =
							((obj_t) BgL_auxz00_4436), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_4440;

						BgL_auxz00_4440 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_1019,
								(int) (((long) 3))));
						((((BgL_localz00_bglt) CREF(BgL_oz00_1018))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_4440), BUNSPEC);
					}
					{
						BgL_valuez00_bglt BgL_auxz00_4445;

						BgL_auxz00_4445 =
							(BgL_valuez00_bglt) (STRUCT_REF(BgL_sz00_1019,
								(int) (((long) 4))));
						((((BgL_localz00_bglt) CREF(BgL_oz00_1018))->BgL_valuez00) =
							((BgL_valuez00_bglt) BgL_auxz00_4445), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4450;

						BgL_auxz00_4450 = STRUCT_REF(BgL_sz00_1019, (int) (((long) 5)));
						((((BgL_localz00_bglt) CREF(BgL_oz00_1018))->BgL_accessz00) =
							((obj_t) BgL_auxz00_4450), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4454;

						BgL_auxz00_4454 = STRUCT_REF(BgL_sz00_1019, (int) (((long) 6)));
						((((BgL_localz00_bglt) CREF(BgL_oz00_1018))->BgL_fastzd2alphazd2) =
							((obj_t) BgL_auxz00_4454), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4458;

						BgL_auxz00_4458 = STRUCT_REF(BgL_sz00_1019, (int) (((long) 7)));
						((((BgL_localz00_bglt) CREF(BgL_oz00_1018))->BgL_removablez00) =
							((obj_t) BgL_auxz00_4458), BUNSPEC);
					}
					{
						long BgL_auxz00_4462;

						BgL_auxz00_4462 =
							(long) CINT(STRUCT_REF(BgL_sz00_1019, (int) (((long) 8))));
						((((BgL_localz00_bglt) CREF(BgL_oz00_1018))->BgL_occurrencez00) =
							((long) BgL_auxz00_4462), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_4467;

						BgL_auxz00_4467 =
							CBOOL(STRUCT_REF(BgL_sz00_1019, (int) (((long) 9))));
						((((BgL_localz00_bglt) CREF(BgL_oz00_1018))->BgL_userzf3zf3) =
							((bool_t) BgL_auxz00_4467), BUNSPEC);
					}
					{
						long BgL_auxz00_4472;

						BgL_auxz00_4472 =
							(long) CINT(STRUCT_REF(BgL_sz00_1019, (int) (((long) 10))));
						((((BgL_localz00_bglt) CREF(BgL_oz00_1018))->BgL_keyz00) =
							((long) BgL_auxz00_4472), BUNSPEC);
					}
					BgL_auxz00_4426 = BgL_oz00_1018;
					return (obj_t) (BgL_auxz00_4426);
				}
			}
		}
	}



/* object->struct-local2516 */
	obj_t BGl_objectzd2ze3structzd2local2516ze3zzast_varz00(obj_t BgL_envz00_2652,
		obj_t BgL_obj1928z00_2653)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 65 */
			{
				BgL_localz00_bglt BgL_obj1928z00_992;

				BgL_obj1928z00_992 = (BgL_localz00_bglt) (BgL_obj1928z00_2653);
				{	/* Ast/var.scm 65 */
					obj_t BgL_res1929z00_995;

					{	/* Ast/var.scm 65 */
						obj_t BgL_keyz00_2117;

						BgL_keyz00_2117 = CNST_TABLE_REF(((long) 5));
						BgL_res1929z00_995 =
							make_struct(BgL_keyz00_2117, (int) (((long) 11)), BUNSPEC);
					}
					{	/* Ast/var.scm 65 */
						int BgL_auxz00_4482;

						BgL_auxz00_4482 = (int) (((long) 0));
						STRUCT_SET(BgL_res1929z00_995, BgL_auxz00_4482, BFALSE);
					}
					{	/* Ast/var.scm 65 */
						obj_t BgL_arg2862z00_997;

						{
							BgL_variablez00_bglt BgL_auxz00_4485;

							BgL_auxz00_4485 = (BgL_variablez00_bglt) (BgL_obj1928z00_992);
							BgL_arg2862z00_997 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_4485))->BgL_idz00);
						}
						{	/* Ast/var.scm 65 */
							int BgL_auxz00_4488;

							BgL_auxz00_4488 = (int) (((long) 1));
							STRUCT_SET(BgL_res1929z00_995, BgL_auxz00_4488,
								BgL_arg2862z00_997);
					}}
					{	/* Ast/var.scm 65 */
						obj_t BgL_arg2864z00_999;

						{
							BgL_variablez00_bglt BgL_auxz00_4491;

							BgL_auxz00_4491 = (BgL_variablez00_bglt) (BgL_obj1928z00_992);
							BgL_arg2864z00_999 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_4491))->BgL_namez00);
						}
						{	/* Ast/var.scm 65 */
							int BgL_auxz00_4494;

							BgL_auxz00_4494 = (int) (((long) 2));
							STRUCT_SET(BgL_res1929z00_995, BgL_auxz00_4494,
								BgL_arg2864z00_999);
					}}
					{	/* Ast/var.scm 65 */
						BgL_typez00_bglt BgL_arg2866z00_1001;

						{
							BgL_variablez00_bglt BgL_auxz00_4497;

							BgL_auxz00_4497 = (BgL_variablez00_bglt) (BgL_obj1928z00_992);
							BgL_arg2866z00_1001 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_4497))->BgL_typez00);
						}
						{	/* Ast/var.scm 65 */
							obj_t BgL_auxz00_4502;

							int BgL_auxz00_4500;

							BgL_auxz00_4502 = (obj_t) (BgL_arg2866z00_1001);
							BgL_auxz00_4500 = (int) (((long) 3));
							STRUCT_SET(BgL_res1929z00_995, BgL_auxz00_4500, BgL_auxz00_4502);
					}}
					{	/* Ast/var.scm 65 */
						BgL_valuez00_bglt BgL_arg2868z00_1003;

						{
							BgL_variablez00_bglt BgL_auxz00_4505;

							BgL_auxz00_4505 = (BgL_variablez00_bglt) (BgL_obj1928z00_992);
							BgL_arg2868z00_1003 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_4505))->BgL_valuez00);
						}
						{	/* Ast/var.scm 65 */
							obj_t BgL_auxz00_4510;

							int BgL_auxz00_4508;

							BgL_auxz00_4510 = (obj_t) (BgL_arg2868z00_1003);
							BgL_auxz00_4508 = (int) (((long) 4));
							STRUCT_SET(BgL_res1929z00_995, BgL_auxz00_4508, BgL_auxz00_4510);
					}}
					{	/* Ast/var.scm 65 */
						obj_t BgL_arg2870z00_1005;

						{
							BgL_variablez00_bglt BgL_auxz00_4513;

							BgL_auxz00_4513 = (BgL_variablez00_bglt) (BgL_obj1928z00_992);
							BgL_arg2870z00_1005 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_4513))->BgL_accessz00);
						}
						{	/* Ast/var.scm 65 */
							int BgL_auxz00_4516;

							BgL_auxz00_4516 = (int) (((long) 5));
							STRUCT_SET(BgL_res1929z00_995, BgL_auxz00_4516,
								BgL_arg2870z00_1005);
					}}
					{	/* Ast/var.scm 65 */
						obj_t BgL_arg2872z00_1007;

						{
							BgL_variablez00_bglt BgL_auxz00_4519;

							BgL_auxz00_4519 = (BgL_variablez00_bglt) (BgL_obj1928z00_992);
							BgL_arg2872z00_1007 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_4519))->
								BgL_fastzd2alphazd2);
						}
						{	/* Ast/var.scm 65 */
							int BgL_auxz00_4522;

							BgL_auxz00_4522 = (int) (((long) 6));
							STRUCT_SET(BgL_res1929z00_995, BgL_auxz00_4522,
								BgL_arg2872z00_1007);
					}}
					{	/* Ast/var.scm 65 */
						obj_t BgL_arg2874z00_1009;

						{
							BgL_variablez00_bglt BgL_auxz00_4525;

							BgL_auxz00_4525 = (BgL_variablez00_bglt) (BgL_obj1928z00_992);
							BgL_arg2874z00_1009 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_4525))->
								BgL_removablez00);
						}
						{	/* Ast/var.scm 65 */
							int BgL_auxz00_4528;

							BgL_auxz00_4528 = (int) (((long) 7));
							STRUCT_SET(BgL_res1929z00_995, BgL_auxz00_4528,
								BgL_arg2874z00_1009);
					}}
					{	/* Ast/var.scm 65 */
						long BgL_arg2876z00_1011;

						{
							BgL_variablez00_bglt BgL_auxz00_4531;

							BgL_auxz00_4531 = (BgL_variablez00_bglt) (BgL_obj1928z00_992);
							BgL_arg2876z00_1011 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_4531))->
								BgL_occurrencez00);
						}
						{	/* Ast/var.scm 65 */
							obj_t BgL_auxz00_4536;

							int BgL_auxz00_4534;

							BgL_auxz00_4536 = BINT(BgL_arg2876z00_1011);
							BgL_auxz00_4534 = (int) (((long) 8));
							STRUCT_SET(BgL_res1929z00_995, BgL_auxz00_4534, BgL_auxz00_4536);
					}}
					{	/* Ast/var.scm 65 */
						bool_t BgL_arg2878z00_1013;

						BgL_arg2878z00_1013 =
							(((BgL_localz00_bglt) CREF(BgL_obj1928z00_992))->BgL_userzf3zf3);
						{	/* Ast/var.scm 65 */
							obj_t BgL_auxz00_4542;

							int BgL_auxz00_4540;

							BgL_auxz00_4542 = BBOOL(BgL_arg2878z00_1013);
							BgL_auxz00_4540 = (int) (((long) 9));
							STRUCT_SET(BgL_res1929z00_995, BgL_auxz00_4540, BgL_auxz00_4542);
					}}
					{	/* Ast/var.scm 65 */
						long BgL_arg2880z00_1015;

						BgL_arg2880z00_1015 =
							(((BgL_localz00_bglt) CREF(BgL_obj1928z00_992))->BgL_keyz00);
						{	/* Ast/var.scm 65 */
							obj_t BgL_auxz00_4548;

							int BgL_auxz00_4546;

							BgL_auxz00_4548 = BINT(BgL_arg2880z00_1015);
							BgL_auxz00_4546 = (int) (((long) 10));
							STRUCT_SET(BgL_res1929z00_995, BgL_auxz00_4546, BgL_auxz00_4548);
					}}
					return BgL_res1929z00_995;
				}
			}
		}
	}



/* struct+object->objec2514 */
	obj_t BGl_structzb2objectzd2ze3objec2514z83zzast_varz00(obj_t BgL_envz00_2654,
		obj_t BgL_oz00_2655, obj_t BgL_sz00_2656)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 71 */
			{
				BgL_funz00_bglt BgL_oz00_978;

				obj_t BgL_sz00_979;

				{	/* Ast/var.scm 71 */
					BgL_funz00_bglt BgL_auxz00_4552;

					BgL_oz00_978 = (BgL_funz00_bglt) (BgL_oz00_2655);
					BgL_sz00_979 = BgL_sz00_2656;
					{	/* Ast/var.scm 71 */
						obj_t BgL_arg2858z00_982;

						BgL_arg2858z00_982 = STRUCT_REF(BgL_sz00_979, (int) (((long) 0)));
						{	/* Ast/var.scm 71 */
							BgL_objectz00_bglt BgL_auxz00_4555;

							BgL_auxz00_4555 = (BgL_objectz00_bglt) (BgL_oz00_978);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4555, BgL_arg2858z00_982);
					}}
					{
						long BgL_auxz00_4558;

						BgL_auxz00_4558 =
							(long) CINT(STRUCT_REF(BgL_sz00_979, (int) (((long) 1))));
						((((BgL_funz00_bglt) CREF(BgL_oz00_978))->BgL_arityz00) =
							((long) BgL_auxz00_4558), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4563;

						BgL_auxz00_4563 = STRUCT_REF(BgL_sz00_979, (int) (((long) 2)));
						((((BgL_funz00_bglt) CREF(BgL_oz00_978))->BgL_sidezd2effectzf3z21) =
							((obj_t) BgL_auxz00_4563), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4567;

						BgL_auxz00_4567 = STRUCT_REF(BgL_sz00_979, (int) (((long) 3)));
						((((BgL_funz00_bglt) CREF(BgL_oz00_978))->BgL_predicatezd2ofzd2) =
							((obj_t) BgL_auxz00_4567), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4571;

						BgL_auxz00_4571 = STRUCT_REF(BgL_sz00_979, (int) (((long) 4)));
						((((BgL_funz00_bglt) CREF(BgL_oz00_978))->
								BgL_stackzd2allocatorzd2) = ((obj_t) BgL_auxz00_4571), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_4575;

						BgL_auxz00_4575 =
							CBOOL(STRUCT_REF(BgL_sz00_979, (int) (((long) 5))));
						((((BgL_funz00_bglt) CREF(BgL_oz00_978))->BgL_topzf3zf3) =
							((bool_t) BgL_auxz00_4575), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4580;

						BgL_auxz00_4580 = STRUCT_REF(BgL_sz00_979, (int) (((long) 6)));
						((((BgL_funz00_bglt) CREF(BgL_oz00_978))->BgL_thezd2closurezd2) =
							((obj_t) BgL_auxz00_4580), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4584;

						BgL_auxz00_4584 = STRUCT_REF(BgL_sz00_979, (int) (((long) 7)));
						((((BgL_funz00_bglt) CREF(BgL_oz00_978))->BgL_effectz00) =
							((obj_t) BgL_auxz00_4584), BUNSPEC);
					}
					BgL_auxz00_4552 = BgL_oz00_978;
					return (obj_t) (BgL_auxz00_4552);
				}
			}
		}
	}



/* object->struct-fun2512 */
	obj_t BGl_objectzd2ze3structzd2fun2512ze3zzast_varz00(obj_t BgL_envz00_2657,
		obj_t BgL_obj2016z00_2658)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 71 */
			{
				BgL_funz00_bglt BgL_obj2016z00_958;

				BgL_obj2016z00_958 = (BgL_funz00_bglt) (BgL_obj2016z00_2658);
				{	/* Ast/var.scm 71 */
					obj_t BgL_res2017z00_961;

					{	/* Ast/var.scm 71 */
						obj_t BgL_keyz00_2067;

						BgL_keyz00_2067 = CNST_TABLE_REF(((long) 6));
						BgL_res2017z00_961 =
							make_struct(BgL_keyz00_2067, (int) (((long) 8)), BUNSPEC);
					}
					{	/* Ast/var.scm 71 */
						int BgL_auxz00_4593;

						BgL_auxz00_4593 = (int) (((long) 0));
						STRUCT_SET(BgL_res2017z00_961, BgL_auxz00_4593, BFALSE);
					}
					{	/* Ast/var.scm 71 */
						long BgL_arg2842z00_963;

						BgL_arg2842z00_963 =
							(((BgL_funz00_bglt) CREF(BgL_obj2016z00_958))->BgL_arityz00);
						{	/* Ast/var.scm 71 */
							obj_t BgL_auxz00_4599;

							int BgL_auxz00_4597;

							BgL_auxz00_4599 = BINT(BgL_arg2842z00_963);
							BgL_auxz00_4597 = (int) (((long) 1));
							STRUCT_SET(BgL_res2017z00_961, BgL_auxz00_4597, BgL_auxz00_4599);
					}}
					{	/* Ast/var.scm 71 */
						obj_t BgL_arg2844z00_965;

						BgL_arg2844z00_965 =
							(((BgL_funz00_bglt) CREF(BgL_obj2016z00_958))->
							BgL_sidezd2effectzf3z21);
						{	/* Ast/var.scm 71 */
							int BgL_auxz00_4603;

							BgL_auxz00_4603 = (int) (((long) 2));
							STRUCT_SET(BgL_res2017z00_961, BgL_auxz00_4603,
								BgL_arg2844z00_965);
					}}
					{	/* Ast/var.scm 71 */
						obj_t BgL_arg2846z00_967;

						BgL_arg2846z00_967 =
							(((BgL_funz00_bglt) CREF(BgL_obj2016z00_958))->
							BgL_predicatezd2ofzd2);
						{	/* Ast/var.scm 71 */
							int BgL_auxz00_4607;

							BgL_auxz00_4607 = (int) (((long) 3));
							STRUCT_SET(BgL_res2017z00_961, BgL_auxz00_4607,
								BgL_arg2846z00_967);
					}}
					{	/* Ast/var.scm 71 */
						obj_t BgL_arg2848z00_969;

						BgL_arg2848z00_969 =
							(((BgL_funz00_bglt) CREF(BgL_obj2016z00_958))->
							BgL_stackzd2allocatorzd2);
						{	/* Ast/var.scm 71 */
							int BgL_auxz00_4611;

							BgL_auxz00_4611 = (int) (((long) 4));
							STRUCT_SET(BgL_res2017z00_961, BgL_auxz00_4611,
								BgL_arg2848z00_969);
					}}
					{	/* Ast/var.scm 71 */
						bool_t BgL_arg2850z00_971;

						BgL_arg2850z00_971 =
							(((BgL_funz00_bglt) CREF(BgL_obj2016z00_958))->BgL_topzf3zf3);
						{	/* Ast/var.scm 71 */
							obj_t BgL_auxz00_4617;

							int BgL_auxz00_4615;

							BgL_auxz00_4617 = BBOOL(BgL_arg2850z00_971);
							BgL_auxz00_4615 = (int) (((long) 5));
							STRUCT_SET(BgL_res2017z00_961, BgL_auxz00_4615, BgL_auxz00_4617);
					}}
					{	/* Ast/var.scm 71 */
						obj_t BgL_arg2852z00_973;

						BgL_arg2852z00_973 =
							(((BgL_funz00_bglt) CREF(BgL_obj2016z00_958))->
							BgL_thezd2closurezd2);
						{	/* Ast/var.scm 71 */
							int BgL_auxz00_4621;

							BgL_auxz00_4621 = (int) (((long) 6));
							STRUCT_SET(BgL_res2017z00_961, BgL_auxz00_4621,
								BgL_arg2852z00_973);
					}}
					{	/* Ast/var.scm 71 */
						obj_t BgL_arg2856z00_975;

						BgL_arg2856z00_975 =
							(((BgL_funz00_bglt) CREF(BgL_obj2016z00_958))->BgL_effectz00);
						{	/* Ast/var.scm 71 */
							int BgL_auxz00_4625;

							BgL_auxz00_4625 = (int) (((long) 7));
							STRUCT_SET(BgL_res2017z00_961, BgL_auxz00_4625,
								BgL_arg2856z00_975);
					}}
					return BgL_res2017z00_961;
				}
			}
		}
	}



/* struct+object->objec2510 */
	obj_t BGl_structzb2objectzd2ze3objec2510z83zzast_varz00(obj_t BgL_envz00_2659,
		obj_t BgL_oz00_2660, obj_t BgL_sz00_2661)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 94 */
			{
				BgL_sfunz00_bglt BgL_oz00_934;

				obj_t BgL_sz00_935;

				{	/* Ast/var.scm 94 */
					BgL_sfunz00_bglt BgL_auxz00_4629;

					BgL_oz00_934 = (BgL_sfunz00_bglt) (BgL_oz00_2660);
					BgL_sz00_935 = BgL_sz00_2661;
					{	/* Ast/var.scm 94 */
						obj_t BgL_arg2839z00_938;

						BgL_arg2839z00_938 = STRUCT_REF(BgL_sz00_935, (int) (((long) 0)));
						{	/* Ast/var.scm 94 */
							BgL_objectz00_bglt BgL_auxz00_4632;

							BgL_auxz00_4632 = (BgL_objectz00_bglt) (BgL_oz00_934);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4632, BgL_arg2839z00_938);
					}}
					{
						long BgL_auxz00_4635;

						BgL_auxz00_4635 =
							(long) CINT(STRUCT_REF(BgL_sz00_935, (int) (((long) 1))));
						((((BgL_sfunz00_bglt) CREF(BgL_oz00_934))->BgL_arityz00) =
							((long) BgL_auxz00_4635), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4640;

						BgL_auxz00_4640 = STRUCT_REF(BgL_sz00_935, (int) (((long) 2)));
						((((BgL_sfunz00_bglt) CREF(BgL_oz00_934))->
								BgL_sidezd2effectzf3z21) = ((obj_t) BgL_auxz00_4640), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4644;

						BgL_auxz00_4644 = STRUCT_REF(BgL_sz00_935, (int) (((long) 3)));
						((((BgL_sfunz00_bglt) CREF(BgL_oz00_934))->BgL_predicatezd2ofzd2) =
							((obj_t) BgL_auxz00_4644), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4648;

						BgL_auxz00_4648 = STRUCT_REF(BgL_sz00_935, (int) (((long) 4)));
						((((BgL_sfunz00_bglt) CREF(BgL_oz00_934))->
								BgL_stackzd2allocatorzd2) = ((obj_t) BgL_auxz00_4648), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_4652;

						BgL_auxz00_4652 =
							CBOOL(STRUCT_REF(BgL_sz00_935, (int) (((long) 5))));
						((((BgL_sfunz00_bglt) CREF(BgL_oz00_934))->BgL_topzf3zf3) =
							((bool_t) BgL_auxz00_4652), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4657;

						BgL_auxz00_4657 = STRUCT_REF(BgL_sz00_935, (int) (((long) 6)));
						((((BgL_sfunz00_bglt) CREF(BgL_oz00_934))->BgL_thezd2closurezd2) =
							((obj_t) BgL_auxz00_4657), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4661;

						BgL_auxz00_4661 = STRUCT_REF(BgL_sz00_935, (int) (((long) 7)));
						((((BgL_sfunz00_bglt) CREF(BgL_oz00_934))->BgL_effectz00) =
							((obj_t) BgL_auxz00_4661), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4665;

						BgL_auxz00_4665 = STRUCT_REF(BgL_sz00_935, (int) (((long) 8)));
						((((BgL_sfunz00_bglt) CREF(BgL_oz00_934))->BgL_propertyz00) =
							((obj_t) BgL_auxz00_4665), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4669;

						BgL_auxz00_4669 = STRUCT_REF(BgL_sz00_935, (int) (((long) 9)));
						((((BgL_sfunz00_bglt) CREF(BgL_oz00_934))->BgL_argsz00) =
							((obj_t) BgL_auxz00_4669), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4673;

						BgL_auxz00_4673 = STRUCT_REF(BgL_sz00_935, (int) (((long) 10)));
						((((BgL_sfunz00_bglt) CREF(BgL_oz00_934))->BgL_argszd2namezd2) =
							((obj_t) BgL_auxz00_4673), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4677;

						BgL_auxz00_4677 = STRUCT_REF(BgL_sz00_935, (int) (((long) 11)));
						((((BgL_sfunz00_bglt) CREF(BgL_oz00_934))->BgL_bodyz00) =
							((obj_t) BgL_auxz00_4677), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4681;

						BgL_auxz00_4681 = STRUCT_REF(BgL_sz00_935, (int) (((long) 12)));
						((((BgL_sfunz00_bglt) CREF(BgL_oz00_934))->BgL_classz00) =
							((obj_t) BgL_auxz00_4681), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4685;

						BgL_auxz00_4685 = STRUCT_REF(BgL_sz00_935, (int) (((long) 13)));
						((((BgL_sfunz00_bglt) CREF(BgL_oz00_934))->
								BgL_dssslzd2keywordszd2) = ((obj_t) BgL_auxz00_4685), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4689;

						BgL_auxz00_4689 = STRUCT_REF(BgL_sz00_935, (int) (((long) 14)));
						((((BgL_sfunz00_bglt) CREF(BgL_oz00_934))->BgL_locz00) =
							((obj_t) BgL_auxz00_4689), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4693;

						BgL_auxz00_4693 = STRUCT_REF(BgL_sz00_935, (int) (((long) 15)));
						((((BgL_sfunz00_bglt) CREF(BgL_oz00_934))->BgL_optionalsz00) =
							((obj_t) BgL_auxz00_4693), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4697;

						BgL_auxz00_4697 = STRUCT_REF(BgL_sz00_935, (int) (((long) 16)));
						((((BgL_sfunz00_bglt) CREF(BgL_oz00_934))->BgL_keysz00) =
							((obj_t) BgL_auxz00_4697), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4701;

						BgL_auxz00_4701 = STRUCT_REF(BgL_sz00_935, (int) (((long) 17)));
						((((BgL_sfunz00_bglt) CREF(BgL_oz00_934))->
								BgL_thezd2closurezd2globalz00) =
							((obj_t) BgL_auxz00_4701), BUNSPEC);
					}
					BgL_auxz00_4629 = BgL_oz00_934;
					return (obj_t) (BgL_auxz00_4629);
				}
			}
		}
	}



/* object->struct-sfun2508 */
	obj_t BGl_objectzd2ze3structzd2sfun2508ze3zzast_varz00(obj_t BgL_envz00_2662,
		obj_t BgL_obj2146z00_2663)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 94 */
			{
				BgL_sfunz00_bglt BgL_obj2146z00_894;

				BgL_obj2146z00_894 = (BgL_sfunz00_bglt) (BgL_obj2146z00_2663);
				{	/* Ast/var.scm 94 */
					obj_t BgL_res2147z00_897;

					{	/* Ast/var.scm 94 */
						obj_t BgL_keyz00_1957;

						BgL_keyz00_1957 = CNST_TABLE_REF(((long) 7));
						BgL_res2147z00_897 =
							make_struct(BgL_keyz00_1957, (int) (((long) 18)), BUNSPEC);
					}
					{	/* Ast/var.scm 94 */
						int BgL_auxz00_4710;

						BgL_auxz00_4710 = (int) (((long) 0));
						STRUCT_SET(BgL_res2147z00_897, BgL_auxz00_4710, BFALSE);
					}
					{	/* Ast/var.scm 94 */
						long BgL_arg2803z00_899;

						{
							BgL_funz00_bglt BgL_auxz00_4713;

							BgL_auxz00_4713 = (BgL_funz00_bglt) (BgL_obj2146z00_894);
							BgL_arg2803z00_899 =
								(((BgL_funz00_bglt) CREF(BgL_auxz00_4713))->BgL_arityz00);
						}
						{	/* Ast/var.scm 94 */
							obj_t BgL_auxz00_4718;

							int BgL_auxz00_4716;

							BgL_auxz00_4718 = BINT(BgL_arg2803z00_899);
							BgL_auxz00_4716 = (int) (((long) 1));
							STRUCT_SET(BgL_res2147z00_897, BgL_auxz00_4716, BgL_auxz00_4718);
					}}
					{	/* Ast/var.scm 94 */
						obj_t BgL_arg2805z00_901;

						{
							BgL_funz00_bglt BgL_auxz00_4721;

							BgL_auxz00_4721 = (BgL_funz00_bglt) (BgL_obj2146z00_894);
							BgL_arg2805z00_901 =
								(((BgL_funz00_bglt) CREF(BgL_auxz00_4721))->
								BgL_sidezd2effectzf3z21);
						}
						{	/* Ast/var.scm 94 */
							int BgL_auxz00_4724;

							BgL_auxz00_4724 = (int) (((long) 2));
							STRUCT_SET(BgL_res2147z00_897, BgL_auxz00_4724,
								BgL_arg2805z00_901);
					}}
					{	/* Ast/var.scm 94 */
						obj_t BgL_arg2807z00_903;

						{
							BgL_funz00_bglt BgL_auxz00_4727;

							BgL_auxz00_4727 = (BgL_funz00_bglt) (BgL_obj2146z00_894);
							BgL_arg2807z00_903 =
								(((BgL_funz00_bglt) CREF(BgL_auxz00_4727))->
								BgL_predicatezd2ofzd2);
						}
						{	/* Ast/var.scm 94 */
							int BgL_auxz00_4730;

							BgL_auxz00_4730 = (int) (((long) 3));
							STRUCT_SET(BgL_res2147z00_897, BgL_auxz00_4730,
								BgL_arg2807z00_903);
					}}
					{	/* Ast/var.scm 94 */
						obj_t BgL_arg2809z00_905;

						{
							BgL_funz00_bglt BgL_auxz00_4733;

							BgL_auxz00_4733 = (BgL_funz00_bglt) (BgL_obj2146z00_894);
							BgL_arg2809z00_905 =
								(((BgL_funz00_bglt) CREF(BgL_auxz00_4733))->
								BgL_stackzd2allocatorzd2);
						}
						{	/* Ast/var.scm 94 */
							int BgL_auxz00_4736;

							BgL_auxz00_4736 = (int) (((long) 4));
							STRUCT_SET(BgL_res2147z00_897, BgL_auxz00_4736,
								BgL_arg2809z00_905);
					}}
					{	/* Ast/var.scm 94 */
						bool_t BgL_arg2811z00_907;

						{
							BgL_funz00_bglt BgL_auxz00_4739;

							BgL_auxz00_4739 = (BgL_funz00_bglt) (BgL_obj2146z00_894);
							BgL_arg2811z00_907 =
								(((BgL_funz00_bglt) CREF(BgL_auxz00_4739))->BgL_topzf3zf3);
						}
						{	/* Ast/var.scm 94 */
							obj_t BgL_auxz00_4744;

							int BgL_auxz00_4742;

							BgL_auxz00_4744 = BBOOL(BgL_arg2811z00_907);
							BgL_auxz00_4742 = (int) (((long) 5));
							STRUCT_SET(BgL_res2147z00_897, BgL_auxz00_4742, BgL_auxz00_4744);
					}}
					{	/* Ast/var.scm 94 */
						obj_t BgL_arg2813z00_909;

						{
							BgL_funz00_bglt BgL_auxz00_4747;

							BgL_auxz00_4747 = (BgL_funz00_bglt) (BgL_obj2146z00_894);
							BgL_arg2813z00_909 =
								(((BgL_funz00_bglt) CREF(BgL_auxz00_4747))->
								BgL_thezd2closurezd2);
						}
						{	/* Ast/var.scm 94 */
							int BgL_auxz00_4750;

							BgL_auxz00_4750 = (int) (((long) 6));
							STRUCT_SET(BgL_res2147z00_897, BgL_auxz00_4750,
								BgL_arg2813z00_909);
					}}
					{	/* Ast/var.scm 94 */
						obj_t BgL_arg2815z00_911;

						{
							BgL_funz00_bglt BgL_auxz00_4753;

							BgL_auxz00_4753 = (BgL_funz00_bglt) (BgL_obj2146z00_894);
							BgL_arg2815z00_911 =
								(((BgL_funz00_bglt) CREF(BgL_auxz00_4753))->BgL_effectz00);
						}
						{	/* Ast/var.scm 94 */
							int BgL_auxz00_4756;

							BgL_auxz00_4756 = (int) (((long) 7));
							STRUCT_SET(BgL_res2147z00_897, BgL_auxz00_4756,
								BgL_arg2815z00_911);
					}}
					{	/* Ast/var.scm 94 */
						obj_t BgL_arg2818z00_913;

						BgL_arg2818z00_913 =
							(((BgL_sfunz00_bglt) CREF(BgL_obj2146z00_894))->BgL_propertyz00);
						{	/* Ast/var.scm 94 */
							int BgL_auxz00_4760;

							BgL_auxz00_4760 = (int) (((long) 8));
							STRUCT_SET(BgL_res2147z00_897, BgL_auxz00_4760,
								BgL_arg2818z00_913);
					}}
					{	/* Ast/var.scm 94 */
						obj_t BgL_arg2820z00_915;

						BgL_arg2820z00_915 =
							(((BgL_sfunz00_bglt) CREF(BgL_obj2146z00_894))->BgL_argsz00);
						{	/* Ast/var.scm 94 */
							int BgL_auxz00_4764;

							BgL_auxz00_4764 = (int) (((long) 9));
							STRUCT_SET(BgL_res2147z00_897, BgL_auxz00_4764,
								BgL_arg2820z00_915);
					}}
					{	/* Ast/var.scm 94 */
						obj_t BgL_arg2822z00_917;

						BgL_arg2822z00_917 =
							(((BgL_sfunz00_bglt) CREF(BgL_obj2146z00_894))->
							BgL_argszd2namezd2);
						{	/* Ast/var.scm 94 */
							int BgL_auxz00_4768;

							BgL_auxz00_4768 = (int) (((long) 10));
							STRUCT_SET(BgL_res2147z00_897, BgL_auxz00_4768,
								BgL_arg2822z00_917);
					}}
					{	/* Ast/var.scm 94 */
						obj_t BgL_arg2825z00_919;

						BgL_arg2825z00_919 =
							(((BgL_sfunz00_bglt) CREF(BgL_obj2146z00_894))->BgL_bodyz00);
						{	/* Ast/var.scm 94 */
							int BgL_auxz00_4772;

							BgL_auxz00_4772 = (int) (((long) 11));
							STRUCT_SET(BgL_res2147z00_897, BgL_auxz00_4772,
								BgL_arg2825z00_919);
					}}
					{	/* Ast/var.scm 94 */
						obj_t BgL_arg2827z00_921;

						BgL_arg2827z00_921 =
							(((BgL_sfunz00_bglt) CREF(BgL_obj2146z00_894))->BgL_classz00);
						{	/* Ast/var.scm 94 */
							int BgL_auxz00_4776;

							BgL_auxz00_4776 = (int) (((long) 12));
							STRUCT_SET(BgL_res2147z00_897, BgL_auxz00_4776,
								BgL_arg2827z00_921);
					}}
					{	/* Ast/var.scm 94 */
						obj_t BgL_arg2829z00_923;

						BgL_arg2829z00_923 =
							(((BgL_sfunz00_bglt) CREF(BgL_obj2146z00_894))->
							BgL_dssslzd2keywordszd2);
						{	/* Ast/var.scm 94 */
							int BgL_auxz00_4780;

							BgL_auxz00_4780 = (int) (((long) 13));
							STRUCT_SET(BgL_res2147z00_897, BgL_auxz00_4780,
								BgL_arg2829z00_923);
					}}
					{	/* Ast/var.scm 94 */
						obj_t BgL_arg2831z00_925;

						BgL_arg2831z00_925 =
							(((BgL_sfunz00_bglt) CREF(BgL_obj2146z00_894))->BgL_locz00);
						{	/* Ast/var.scm 94 */
							int BgL_auxz00_4784;

							BgL_auxz00_4784 = (int) (((long) 14));
							STRUCT_SET(BgL_res2147z00_897, BgL_auxz00_4784,
								BgL_arg2831z00_925);
					}}
					{	/* Ast/var.scm 94 */
						obj_t BgL_arg2833z00_927;

						BgL_arg2833z00_927 =
							(((BgL_sfunz00_bglt) CREF(BgL_obj2146z00_894))->BgL_optionalsz00);
						{	/* Ast/var.scm 94 */
							int BgL_auxz00_4788;

							BgL_auxz00_4788 = (int) (((long) 15));
							STRUCT_SET(BgL_res2147z00_897, BgL_auxz00_4788,
								BgL_arg2833z00_927);
					}}
					{	/* Ast/var.scm 94 */
						obj_t BgL_arg2835z00_929;

						BgL_arg2835z00_929 =
							(((BgL_sfunz00_bglt) CREF(BgL_obj2146z00_894))->BgL_keysz00);
						{	/* Ast/var.scm 94 */
							int BgL_auxz00_4792;

							BgL_auxz00_4792 = (int) (((long) 16));
							STRUCT_SET(BgL_res2147z00_897, BgL_auxz00_4792,
								BgL_arg2835z00_929);
					}}
					{	/* Ast/var.scm 94 */
						obj_t BgL_arg2837z00_931;

						BgL_arg2837z00_931 =
							(((BgL_sfunz00_bglt) CREF(BgL_obj2146z00_894))->
							BgL_thezd2closurezd2globalz00);
						{	/* Ast/var.scm 94 */
							int BgL_auxz00_4796;

							BgL_auxz00_4796 = (int) (((long) 17));
							STRUCT_SET(BgL_res2147z00_897, BgL_auxz00_4796,
								BgL_arg2837z00_931);
					}}
					return BgL_res2147z00_897;
				}
			}
		}
	}



/* struct+object->objec2506 */
	obj_t BGl_structzb2objectzd2ze3objec2506z83zzast_varz00(obj_t BgL_envz00_2664,
		obj_t BgL_oz00_2665, obj_t BgL_sz00_2666)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 119 */
			{
				BgL_cfunz00_bglt BgL_oz00_876;

				obj_t BgL_sz00_877;

				{	/* Ast/var.scm 119 */
					BgL_cfunz00_bglt BgL_auxz00_4800;

					BgL_oz00_876 = (BgL_cfunz00_bglt) (BgL_oz00_2665);
					BgL_sz00_877 = BgL_sz00_2666;
					{	/* Ast/var.scm 119 */
						obj_t BgL_arg2800z00_880;

						BgL_arg2800z00_880 = STRUCT_REF(BgL_sz00_877, (int) (((long) 0)));
						{	/* Ast/var.scm 119 */
							BgL_objectz00_bglt BgL_auxz00_4803;

							BgL_auxz00_4803 = (BgL_objectz00_bglt) (BgL_oz00_876);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4803, BgL_arg2800z00_880);
					}}
					{
						long BgL_auxz00_4806;

						BgL_auxz00_4806 =
							(long) CINT(STRUCT_REF(BgL_sz00_877, (int) (((long) 1))));
						((((BgL_cfunz00_bglt) CREF(BgL_oz00_876))->BgL_arityz00) =
							((long) BgL_auxz00_4806), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4811;

						BgL_auxz00_4811 = STRUCT_REF(BgL_sz00_877, (int) (((long) 2)));
						((((BgL_cfunz00_bglt) CREF(BgL_oz00_876))->
								BgL_sidezd2effectzf3z21) = ((obj_t) BgL_auxz00_4811), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4815;

						BgL_auxz00_4815 = STRUCT_REF(BgL_sz00_877, (int) (((long) 3)));
						((((BgL_cfunz00_bglt) CREF(BgL_oz00_876))->BgL_predicatezd2ofzd2) =
							((obj_t) BgL_auxz00_4815), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4819;

						BgL_auxz00_4819 = STRUCT_REF(BgL_sz00_877, (int) (((long) 4)));
						((((BgL_cfunz00_bglt) CREF(BgL_oz00_876))->
								BgL_stackzd2allocatorzd2) = ((obj_t) BgL_auxz00_4819), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_4823;

						BgL_auxz00_4823 =
							CBOOL(STRUCT_REF(BgL_sz00_877, (int) (((long) 5))));
						((((BgL_cfunz00_bglt) CREF(BgL_oz00_876))->BgL_topzf3zf3) =
							((bool_t) BgL_auxz00_4823), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4828;

						BgL_auxz00_4828 = STRUCT_REF(BgL_sz00_877, (int) (((long) 6)));
						((((BgL_cfunz00_bglt) CREF(BgL_oz00_876))->BgL_thezd2closurezd2) =
							((obj_t) BgL_auxz00_4828), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4832;

						BgL_auxz00_4832 = STRUCT_REF(BgL_sz00_877, (int) (((long) 7)));
						((((BgL_cfunz00_bglt) CREF(BgL_oz00_876))->BgL_effectz00) =
							((obj_t) BgL_auxz00_4832), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4836;

						BgL_auxz00_4836 = STRUCT_REF(BgL_sz00_877, (int) (((long) 8)));
						((((BgL_cfunz00_bglt) CREF(BgL_oz00_876))->BgL_argszd2typezd2) =
							((obj_t) BgL_auxz00_4836), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_4840;

						BgL_auxz00_4840 =
							CBOOL(STRUCT_REF(BgL_sz00_877, (int) (((long) 9))));
						((((BgL_cfunz00_bglt) CREF(BgL_oz00_876))->BgL_macrozf3zf3) =
							((bool_t) BgL_auxz00_4840), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_4845;

						BgL_auxz00_4845 =
							CBOOL(STRUCT_REF(BgL_sz00_877, (int) (((long) 10))));
						((((BgL_cfunz00_bglt) CREF(BgL_oz00_876))->BgL_infixzf3zf3) =
							((bool_t) BgL_auxz00_4845), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4850;

						BgL_auxz00_4850 = STRUCT_REF(BgL_sz00_877, (int) (((long) 11)));
						((((BgL_cfunz00_bglt) CREF(BgL_oz00_876))->BgL_methodz00) =
							((obj_t) BgL_auxz00_4850), BUNSPEC);
					}
					BgL_auxz00_4800 = BgL_oz00_876;
					return (obj_t) (BgL_auxz00_4800);
				}
			}
		}
	}



/* object->struct-cfun2504 */
	obj_t BGl_objectzd2ze3structzd2cfun2504ze3zzast_varz00(obj_t BgL_envz00_2667,
		obj_t BgL_obj2282z00_2668)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 119 */
			{
				BgL_cfunz00_bglt BgL_obj2282z00_848;

				BgL_obj2282z00_848 = (BgL_cfunz00_bglt) (BgL_obj2282z00_2668);
				{	/* Ast/var.scm 119 */
					obj_t BgL_res2283z00_851;

					{	/* Ast/var.scm 119 */
						obj_t BgL_keyz00_1883;

						BgL_keyz00_1883 = CNST_TABLE_REF(((long) 8));
						BgL_res2283z00_851 =
							make_struct(BgL_keyz00_1883, (int) (((long) 12)), BUNSPEC);
					}
					{	/* Ast/var.scm 119 */
						int BgL_auxz00_4859;

						BgL_auxz00_4859 = (int) (((long) 0));
						STRUCT_SET(BgL_res2283z00_851, BgL_auxz00_4859, BFALSE);
					}
					{	/* Ast/var.scm 119 */
						long BgL_arg2776z00_853;

						{
							BgL_funz00_bglt BgL_auxz00_4862;

							BgL_auxz00_4862 = (BgL_funz00_bglt) (BgL_obj2282z00_848);
							BgL_arg2776z00_853 =
								(((BgL_funz00_bglt) CREF(BgL_auxz00_4862))->BgL_arityz00);
						}
						{	/* Ast/var.scm 119 */
							obj_t BgL_auxz00_4867;

							int BgL_auxz00_4865;

							BgL_auxz00_4867 = BINT(BgL_arg2776z00_853);
							BgL_auxz00_4865 = (int) (((long) 1));
							STRUCT_SET(BgL_res2283z00_851, BgL_auxz00_4865, BgL_auxz00_4867);
					}}
					{	/* Ast/var.scm 119 */
						obj_t BgL_arg2778z00_855;

						{
							BgL_funz00_bglt BgL_auxz00_4870;

							BgL_auxz00_4870 = (BgL_funz00_bglt) (BgL_obj2282z00_848);
							BgL_arg2778z00_855 =
								(((BgL_funz00_bglt) CREF(BgL_auxz00_4870))->
								BgL_sidezd2effectzf3z21);
						}
						{	/* Ast/var.scm 119 */
							int BgL_auxz00_4873;

							BgL_auxz00_4873 = (int) (((long) 2));
							STRUCT_SET(BgL_res2283z00_851, BgL_auxz00_4873,
								BgL_arg2778z00_855);
					}}
					{	/* Ast/var.scm 119 */
						obj_t BgL_arg2780z00_857;

						{
							BgL_funz00_bglt BgL_auxz00_4876;

							BgL_auxz00_4876 = (BgL_funz00_bglt) (BgL_obj2282z00_848);
							BgL_arg2780z00_857 =
								(((BgL_funz00_bglt) CREF(BgL_auxz00_4876))->
								BgL_predicatezd2ofzd2);
						}
						{	/* Ast/var.scm 119 */
							int BgL_auxz00_4879;

							BgL_auxz00_4879 = (int) (((long) 3));
							STRUCT_SET(BgL_res2283z00_851, BgL_auxz00_4879,
								BgL_arg2780z00_857);
					}}
					{	/* Ast/var.scm 119 */
						obj_t BgL_arg2783z00_859;

						{
							BgL_funz00_bglt BgL_auxz00_4882;

							BgL_auxz00_4882 = (BgL_funz00_bglt) (BgL_obj2282z00_848);
							BgL_arg2783z00_859 =
								(((BgL_funz00_bglt) CREF(BgL_auxz00_4882))->
								BgL_stackzd2allocatorzd2);
						}
						{	/* Ast/var.scm 119 */
							int BgL_auxz00_4885;

							BgL_auxz00_4885 = (int) (((long) 4));
							STRUCT_SET(BgL_res2283z00_851, BgL_auxz00_4885,
								BgL_arg2783z00_859);
					}}
					{	/* Ast/var.scm 119 */
						bool_t BgL_arg2785z00_861;

						{
							BgL_funz00_bglt BgL_auxz00_4888;

							BgL_auxz00_4888 = (BgL_funz00_bglt) (BgL_obj2282z00_848);
							BgL_arg2785z00_861 =
								(((BgL_funz00_bglt) CREF(BgL_auxz00_4888))->BgL_topzf3zf3);
						}
						{	/* Ast/var.scm 119 */
							obj_t BgL_auxz00_4893;

							int BgL_auxz00_4891;

							BgL_auxz00_4893 = BBOOL(BgL_arg2785z00_861);
							BgL_auxz00_4891 = (int) (((long) 5));
							STRUCT_SET(BgL_res2283z00_851, BgL_auxz00_4891, BgL_auxz00_4893);
					}}
					{	/* Ast/var.scm 119 */
						obj_t BgL_arg2787z00_863;

						{
							BgL_funz00_bglt BgL_auxz00_4896;

							BgL_auxz00_4896 = (BgL_funz00_bglt) (BgL_obj2282z00_848);
							BgL_arg2787z00_863 =
								(((BgL_funz00_bglt) CREF(BgL_auxz00_4896))->
								BgL_thezd2closurezd2);
						}
						{	/* Ast/var.scm 119 */
							int BgL_auxz00_4899;

							BgL_auxz00_4899 = (int) (((long) 6));
							STRUCT_SET(BgL_res2283z00_851, BgL_auxz00_4899,
								BgL_arg2787z00_863);
					}}
					{	/* Ast/var.scm 119 */
						obj_t BgL_arg2790z00_865;

						{
							BgL_funz00_bglt BgL_auxz00_4902;

							BgL_auxz00_4902 = (BgL_funz00_bglt) (BgL_obj2282z00_848);
							BgL_arg2790z00_865 =
								(((BgL_funz00_bglt) CREF(BgL_auxz00_4902))->BgL_effectz00);
						}
						{	/* Ast/var.scm 119 */
							int BgL_auxz00_4905;

							BgL_auxz00_4905 = (int) (((long) 7));
							STRUCT_SET(BgL_res2283z00_851, BgL_auxz00_4905,
								BgL_arg2790z00_865);
					}}
					{	/* Ast/var.scm 119 */
						obj_t BgL_arg2792z00_867;

						BgL_arg2792z00_867 =
							(((BgL_cfunz00_bglt) CREF(BgL_obj2282z00_848))->
							BgL_argszd2typezd2);
						{	/* Ast/var.scm 119 */
							int BgL_auxz00_4909;

							BgL_auxz00_4909 = (int) (((long) 8));
							STRUCT_SET(BgL_res2283z00_851, BgL_auxz00_4909,
								BgL_arg2792z00_867);
					}}
					{	/* Ast/var.scm 119 */
						bool_t BgL_arg2794z00_869;

						BgL_arg2794z00_869 =
							(((BgL_cfunz00_bglt) CREF(BgL_obj2282z00_848))->BgL_macrozf3zf3);
						{	/* Ast/var.scm 119 */
							obj_t BgL_auxz00_4915;

							int BgL_auxz00_4913;

							BgL_auxz00_4915 = BBOOL(BgL_arg2794z00_869);
							BgL_auxz00_4913 = (int) (((long) 9));
							STRUCT_SET(BgL_res2283z00_851, BgL_auxz00_4913, BgL_auxz00_4915);
					}}
					{	/* Ast/var.scm 119 */
						bool_t BgL_arg2796z00_871;

						BgL_arg2796z00_871 =
							(((BgL_cfunz00_bglt) CREF(BgL_obj2282z00_848))->BgL_infixzf3zf3);
						{	/* Ast/var.scm 119 */
							obj_t BgL_auxz00_4921;

							int BgL_auxz00_4919;

							BgL_auxz00_4921 = BBOOL(BgL_arg2796z00_871);
							BgL_auxz00_4919 = (int) (((long) 10));
							STRUCT_SET(BgL_res2283z00_851, BgL_auxz00_4919, BgL_auxz00_4921);
					}}
					{	/* Ast/var.scm 119 */
						obj_t BgL_arg2798z00_873;

						BgL_arg2798z00_873 =
							(((BgL_cfunz00_bglt) CREF(BgL_obj2282z00_848))->BgL_methodz00);
						{	/* Ast/var.scm 119 */
							int BgL_auxz00_4925;

							BgL_auxz00_4925 = (int) (((long) 11));
							STRUCT_SET(BgL_res2283z00_851, BgL_auxz00_4925,
								BgL_arg2798z00_873);
					}}
					return BgL_res2283z00_851;
				}
			}
		}
	}



/* struct+object->objec2502 */
	obj_t BGl_structzb2objectzd2ze3objec2502z83zzast_varz00(obj_t BgL_envz00_2669,
		obj_t BgL_oz00_2670, obj_t BgL_sz00_2671)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 129 */
			{
				BgL_svarz00_bglt BgL_oz00_840;

				obj_t BgL_sz00_841;

				{	/* Ast/var.scm 129 */
					BgL_svarz00_bglt BgL_auxz00_4929;

					BgL_oz00_840 = (BgL_svarz00_bglt) (BgL_oz00_2670);
					BgL_sz00_841 = BgL_sz00_2671;
					{	/* Ast/var.scm 129 */
						obj_t BgL_arg2773z00_844;

						BgL_arg2773z00_844 = STRUCT_REF(BgL_sz00_841, (int) (((long) 0)));
						{	/* Ast/var.scm 129 */
							BgL_objectz00_bglt BgL_auxz00_4932;

							BgL_auxz00_4932 = (BgL_objectz00_bglt) (BgL_oz00_840);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4932, BgL_arg2773z00_844);
					}}
					{
						obj_t BgL_auxz00_4935;

						BgL_auxz00_4935 = STRUCT_REF(BgL_sz00_841, (int) (((long) 1)));
						((((BgL_svarz00_bglt) CREF(BgL_oz00_840))->BgL_locz00) =
							((obj_t) BgL_auxz00_4935), BUNSPEC);
					}
					BgL_auxz00_4929 = BgL_oz00_840;
					return (obj_t) (BgL_auxz00_4929);
				}
			}
		}
	}



/* object->struct-svar2500 */
	obj_t BGl_objectzd2ze3structzd2svar2500ze3zzast_varz00(obj_t BgL_envz00_2672,
		obj_t BgL_obj2340z00_2673)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 129 */
			{
				BgL_svarz00_bglt BgL_obj2340z00_832;

				BgL_obj2340z00_832 = (BgL_svarz00_bglt) (BgL_obj2340z00_2673);
				{	/* Ast/var.scm 129 */
					obj_t BgL_res2341z00_835;

					{	/* Ast/var.scm 129 */
						obj_t BgL_keyz00_1869;

						BgL_keyz00_1869 = CNST_TABLE_REF(((long) 9));
						BgL_res2341z00_835 =
							make_struct(BgL_keyz00_1869, (int) (((long) 2)), BUNSPEC);
					}
					{	/* Ast/var.scm 129 */
						int BgL_auxz00_4944;

						BgL_auxz00_4944 = (int) (((long) 0));
						STRUCT_SET(BgL_res2341z00_835, BgL_auxz00_4944, BFALSE);
					}
					{	/* Ast/var.scm 129 */
						obj_t BgL_arg2770z00_837;

						BgL_arg2770z00_837 =
							(((BgL_svarz00_bglt) CREF(BgL_obj2340z00_832))->BgL_locz00);
						{	/* Ast/var.scm 129 */
							int BgL_auxz00_4948;

							BgL_auxz00_4948 = (int) (((long) 1));
							STRUCT_SET(BgL_res2341z00_835, BgL_auxz00_4948,
								BgL_arg2770z00_837);
					}}
					return BgL_res2341z00_835;
				}
			}
		}
	}



/* struct+object->objec2498 */
	obj_t BGl_structzb2objectzd2ze3objec2498z83zzast_varz00(obj_t BgL_envz00_2674,
		obj_t BgL_oz00_2675, obj_t BgL_sz00_2676)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 133 */
			{
				BgL_scnstz00_bglt BgL_oz00_822;

				obj_t BgL_sz00_823;

				{	/* Ast/var.scm 133 */
					BgL_scnstz00_bglt BgL_auxz00_4952;

					BgL_oz00_822 = (BgL_scnstz00_bglt) (BgL_oz00_2675);
					BgL_sz00_823 = BgL_sz00_2676;
					{	/* Ast/var.scm 133 */
						obj_t BgL_arg2767z00_826;

						BgL_arg2767z00_826 = STRUCT_REF(BgL_sz00_823, (int) (((long) 0)));
						{	/* Ast/var.scm 133 */
							BgL_objectz00_bglt BgL_auxz00_4955;

							BgL_auxz00_4955 = (BgL_objectz00_bglt) (BgL_oz00_822);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4955, BgL_arg2767z00_826);
					}}
					{
						obj_t BgL_auxz00_4958;

						BgL_auxz00_4958 = STRUCT_REF(BgL_sz00_823, (int) (((long) 1)));
						((((BgL_scnstz00_bglt) CREF(BgL_oz00_822))->BgL_nodez00) =
							((obj_t) BgL_auxz00_4958), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4962;

						BgL_auxz00_4962 = STRUCT_REF(BgL_sz00_823, (int) (((long) 2)));
						((((BgL_scnstz00_bglt) CREF(BgL_oz00_822))->BgL_classz00) =
							((obj_t) BgL_auxz00_4962), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4966;

						BgL_auxz00_4966 = STRUCT_REF(BgL_sz00_823, (int) (((long) 3)));
						((((BgL_scnstz00_bglt) CREF(BgL_oz00_822))->BgL_locz00) =
							((obj_t) BgL_auxz00_4966), BUNSPEC);
					}
					BgL_auxz00_4952 = BgL_oz00_822;
					return (obj_t) (BgL_auxz00_4952);
				}
			}
		}
	}



/* object->struct-scnst2496 */
	obj_t BGl_objectzd2ze3structzd2scnst2496ze3zzast_varz00(obj_t BgL_envz00_2677,
		obj_t BgL_obj2368z00_2678)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 133 */
			{
				BgL_scnstz00_bglt BgL_obj2368z00_810;

				BgL_obj2368z00_810 = (BgL_scnstz00_bglt) (BgL_obj2368z00_2678);
				{	/* Ast/var.scm 133 */
					obj_t BgL_res2369z00_813;

					{	/* Ast/var.scm 133 */
						obj_t BgL_keyz00_1843;

						BgL_keyz00_1843 = CNST_TABLE_REF(((long) 10));
						BgL_res2369z00_813 =
							make_struct(BgL_keyz00_1843, (int) (((long) 4)), BUNSPEC);
					}
					{	/* Ast/var.scm 133 */
						int BgL_auxz00_4975;

						BgL_auxz00_4975 = (int) (((long) 0));
						STRUCT_SET(BgL_res2369z00_813, BgL_auxz00_4975, BFALSE);
					}
					{	/* Ast/var.scm 133 */
						obj_t BgL_arg2761z00_815;

						BgL_arg2761z00_815 =
							(((BgL_scnstz00_bglt) CREF(BgL_obj2368z00_810))->BgL_nodez00);
						{	/* Ast/var.scm 133 */
							int BgL_auxz00_4979;

							BgL_auxz00_4979 = (int) (((long) 1));
							STRUCT_SET(BgL_res2369z00_813, BgL_auxz00_4979,
								BgL_arg2761z00_815);
					}}
					{	/* Ast/var.scm 133 */
						obj_t BgL_arg2763z00_817;

						BgL_arg2763z00_817 =
							(((BgL_scnstz00_bglt) CREF(BgL_obj2368z00_810))->BgL_classz00);
						{	/* Ast/var.scm 133 */
							int BgL_auxz00_4983;

							BgL_auxz00_4983 = (int) (((long) 2));
							STRUCT_SET(BgL_res2369z00_813, BgL_auxz00_4983,
								BgL_arg2763z00_817);
					}}
					{	/* Ast/var.scm 133 */
						obj_t BgL_arg2765z00_819;

						BgL_arg2765z00_819 =
							(((BgL_scnstz00_bglt) CREF(BgL_obj2368z00_810))->BgL_locz00);
						{	/* Ast/var.scm 133 */
							int BgL_auxz00_4987;

							BgL_auxz00_4987 = (int) (((long) 3));
							STRUCT_SET(BgL_res2369z00_813, BgL_auxz00_4987,
								BgL_arg2765z00_819);
					}}
					return BgL_res2369z00_813;
				}
			}
		}
	}



/* struct+object->objec2494 */
	obj_t BGl_structzb2objectzd2ze3objec2494z83zzast_varz00(obj_t BgL_envz00_2679,
		obj_t BgL_oz00_2680, obj_t BgL_sz00_2681)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 141 */
			{
				BgL_cvarz00_bglt BgL_oz00_802;

				obj_t BgL_sz00_803;

				{	/* Ast/var.scm 141 */
					BgL_cvarz00_bglt BgL_auxz00_4991;

					BgL_oz00_802 = (BgL_cvarz00_bglt) (BgL_oz00_2680);
					BgL_sz00_803 = BgL_sz00_2681;
					{	/* Ast/var.scm 141 */
						obj_t BgL_arg2758z00_806;

						BgL_arg2758z00_806 = STRUCT_REF(BgL_sz00_803, (int) (((long) 0)));
						{	/* Ast/var.scm 141 */
							BgL_objectz00_bglt BgL_auxz00_4994;

							BgL_auxz00_4994 = (BgL_objectz00_bglt) (BgL_oz00_802);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4994, BgL_arg2758z00_806);
					}}
					{
						bool_t BgL_auxz00_4997;

						BgL_auxz00_4997 =
							CBOOL(STRUCT_REF(BgL_sz00_803, (int) (((long) 1))));
						((((BgL_cvarz00_bglt) CREF(BgL_oz00_802))->BgL_macrozf3zf3) =
							((bool_t) BgL_auxz00_4997), BUNSPEC);
					}
					BgL_auxz00_4991 = BgL_oz00_802;
					return (obj_t) (BgL_auxz00_4991);
				}
			}
		}
	}



/* object->struct-cvar2492 */
	obj_t BGl_objectzd2ze3structzd2cvar2492ze3zzast_varz00(obj_t BgL_envz00_2682,
		obj_t BgL_obj2392z00_2683)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 141 */
			{
				BgL_cvarz00_bglt BgL_obj2392z00_794;

				BgL_obj2392z00_794 = (BgL_cvarz00_bglt) (BgL_obj2392z00_2683);
				{	/* Ast/var.scm 141 */
					obj_t BgL_res2393z00_797;

					{	/* Ast/var.scm 141 */
						obj_t BgL_keyz00_1829;

						BgL_keyz00_1829 = CNST_TABLE_REF(((long) 11));
						BgL_res2393z00_797 =
							make_struct(BgL_keyz00_1829, (int) (((long) 2)), BUNSPEC);
					}
					{	/* Ast/var.scm 141 */
						int BgL_auxz00_5007;

						BgL_auxz00_5007 = (int) (((long) 0));
						STRUCT_SET(BgL_res2393z00_797, BgL_auxz00_5007, BFALSE);
					}
					{	/* Ast/var.scm 141 */
						bool_t BgL_arg2755z00_799;

						BgL_arg2755z00_799 =
							(((BgL_cvarz00_bglt) CREF(BgL_obj2392z00_794))->BgL_macrozf3zf3);
						{	/* Ast/var.scm 141 */
							obj_t BgL_auxz00_5013;

							int BgL_auxz00_5011;

							BgL_auxz00_5013 = BBOOL(BgL_arg2755z00_799);
							BgL_auxz00_5011 = (int) (((long) 1));
							STRUCT_SET(BgL_res2393z00_797, BgL_auxz00_5011, BgL_auxz00_5013);
					}}
					return BgL_res2393z00_797;
				}
			}
		}
	}



/* struct+object->objec2490 */
	obj_t BGl_structzb2objectzd2ze3objec2490z83zzast_varz00(obj_t BgL_envz00_2684,
		obj_t BgL_oz00_2685, obj_t BgL_sz00_2686)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 145 */
			{
				BgL_sexitz00_bglt BgL_oz00_785;

				obj_t BgL_sz00_786;

				{	/* Ast/var.scm 145 */
					BgL_sexitz00_bglt BgL_auxz00_5017;

					BgL_oz00_785 = (BgL_sexitz00_bglt) (BgL_oz00_2685);
					BgL_sz00_786 = BgL_sz00_2686;
					{	/* Ast/var.scm 145 */
						obj_t BgL_arg2752z00_789;

						BgL_arg2752z00_789 = STRUCT_REF(BgL_sz00_786, (int) (((long) 0)));
						{	/* Ast/var.scm 145 */
							BgL_objectz00_bglt BgL_auxz00_5020;

							BgL_auxz00_5020 = (BgL_objectz00_bglt) (BgL_oz00_785);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5020, BgL_arg2752z00_789);
					}}
					{
						obj_t BgL_auxz00_5023;

						BgL_auxz00_5023 = STRUCT_REF(BgL_sz00_786, (int) (((long) 1)));
						((((BgL_sexitz00_bglt) CREF(BgL_oz00_785))->BgL_handlerz00) =
							((obj_t) BgL_auxz00_5023), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_5027;

						BgL_auxz00_5027 =
							CBOOL(STRUCT_REF(BgL_sz00_786, (int) (((long) 2))));
						((((BgL_sexitz00_bglt) CREF(BgL_oz00_785))->BgL_detachedzf3zf3) =
							((bool_t) BgL_auxz00_5027), BUNSPEC);
					}
					BgL_auxz00_5017 = BgL_oz00_785;
					return (obj_t) (BgL_auxz00_5017);
				}
			}
		}
	}



/* object->struct-sexit2488 */
	obj_t BGl_objectzd2ze3structzd2sexit2488ze3zzast_varz00(obj_t BgL_envz00_2687,
		obj_t BgL_obj2416z00_2688)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 145 */
			{
				BgL_sexitz00_bglt BgL_obj2416z00_775;

				BgL_obj2416z00_775 = (BgL_sexitz00_bglt) (BgL_obj2416z00_2688);
				{	/* Ast/var.scm 145 */
					obj_t BgL_res2417z00_778;

					{	/* Ast/var.scm 145 */
						obj_t BgL_keyz00_1809;

						BgL_keyz00_1809 = CNST_TABLE_REF(((long) 12));
						BgL_res2417z00_778 =
							make_struct(BgL_keyz00_1809, (int) (((long) 3)), BUNSPEC);
					}
					{	/* Ast/var.scm 145 */
						int BgL_auxz00_5037;

						BgL_auxz00_5037 = (int) (((long) 0));
						STRUCT_SET(BgL_res2417z00_778, BgL_auxz00_5037, BFALSE);
					}
					{	/* Ast/var.scm 145 */
						obj_t BgL_arg2748z00_780;

						BgL_arg2748z00_780 =
							(((BgL_sexitz00_bglt) CREF(BgL_obj2416z00_775))->BgL_handlerz00);
						{	/* Ast/var.scm 145 */
							int BgL_auxz00_5041;

							BgL_auxz00_5041 = (int) (((long) 1));
							STRUCT_SET(BgL_res2417z00_778, BgL_auxz00_5041,
								BgL_arg2748z00_780);
					}}
					{	/* Ast/var.scm 145 */
						bool_t BgL_arg2750z00_782;

						BgL_arg2750z00_782 =
							(((BgL_sexitz00_bglt) CREF(BgL_obj2416z00_775))->
							BgL_detachedzf3zf3);
						{	/* Ast/var.scm 145 */
							obj_t BgL_auxz00_5047;

							int BgL_auxz00_5045;

							BgL_auxz00_5047 = BBOOL(BgL_arg2750z00_782);
							BgL_auxz00_5045 = (int) (((long) 2));
							STRUCT_SET(BgL_res2417z00_778, BgL_auxz00_5045, BgL_auxz00_5047);
					}}
					return BgL_res2417z00_778;
				}
			}
		}
	}



/* struct+object->objec2486 */
	obj_t BGl_structzb2objectzd2ze3objec2486z83zzast_varz00(obj_t BgL_envz00_2689,
		obj_t BgL_oz00_2690, obj_t BgL_sz00_2691)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 151 */
			{
				BgL_feffectz00_bglt BgL_oz00_766;

				obj_t BgL_sz00_767;

				{	/* Ast/var.scm 151 */
					BgL_feffectz00_bglt BgL_auxz00_5051;

					BgL_oz00_766 = (BgL_feffectz00_bglt) (BgL_oz00_2690);
					BgL_sz00_767 = BgL_sz00_2691;
					{	/* Ast/var.scm 151 */
						obj_t BgL_arg2745z00_770;

						BgL_arg2745z00_770 = STRUCT_REF(BgL_sz00_767, (int) (((long) 0)));
						{	/* Ast/var.scm 151 */
							BgL_objectz00_bglt BgL_auxz00_5054;

							BgL_auxz00_5054 = (BgL_objectz00_bglt) (BgL_oz00_766);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5054, BgL_arg2745z00_770);
					}}
					{
						obj_t BgL_auxz00_5057;

						BgL_auxz00_5057 = STRUCT_REF(BgL_sz00_767, (int) (((long) 1)));
						((((BgL_feffectz00_bglt) CREF(BgL_oz00_766))->BgL_readz00) =
							((obj_t) BgL_auxz00_5057), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_5061;

						BgL_auxz00_5061 = STRUCT_REF(BgL_sz00_767, (int) (((long) 2)));
						((((BgL_feffectz00_bglt) CREF(BgL_oz00_766))->BgL_writez00) =
							((obj_t) BgL_auxz00_5061), BUNSPEC);
					}
					BgL_auxz00_5051 = BgL_oz00_766;
					return (obj_t) (BgL_auxz00_5051);
				}
			}
		}
	}



/* object->struct-feffe2484 */
	obj_t BGl_objectzd2ze3structzd2feffe2484ze3zzast_varz00(obj_t BgL_envz00_2692,
		obj_t BgL_obj2444z00_2693)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 151 */
			{
				BgL_feffectz00_bglt BgL_obj2444z00_756;

				BgL_obj2444z00_756 = (BgL_feffectz00_bglt) (BgL_obj2444z00_2693);
				{	/* Ast/var.scm 151 */
					obj_t BgL_res2445z00_759;

					{	/* Ast/var.scm 151 */
						obj_t BgL_keyz00_1789;

						BgL_keyz00_1789 = CNST_TABLE_REF(((long) 13));
						BgL_res2445z00_759 =
							make_struct(BgL_keyz00_1789, (int) (((long) 3)), BUNSPEC);
					}
					{	/* Ast/var.scm 151 */
						int BgL_auxz00_5070;

						BgL_auxz00_5070 = (int) (((long) 0));
						STRUCT_SET(BgL_res2445z00_759, BgL_auxz00_5070, BFALSE);
					}
					{	/* Ast/var.scm 151 */
						obj_t BgL_arg2740z00_761;

						BgL_arg2740z00_761 =
							(((BgL_feffectz00_bglt) CREF(BgL_obj2444z00_756))->BgL_readz00);
						{	/* Ast/var.scm 151 */
							int BgL_auxz00_5074;

							BgL_auxz00_5074 = (int) (((long) 1));
							STRUCT_SET(BgL_res2445z00_759, BgL_auxz00_5074,
								BgL_arg2740z00_761);
					}}
					{	/* Ast/var.scm 151 */
						obj_t BgL_arg2742z00_763;

						BgL_arg2742z00_763 =
							(((BgL_feffectz00_bglt) CREF(BgL_obj2444z00_756))->BgL_writez00);
						{	/* Ast/var.scm 151 */
							int BgL_auxz00_5078;

							BgL_auxz00_5078 = (int) (((long) 2));
							STRUCT_SET(BgL_res2445z00_759, BgL_auxz00_5078,
								BgL_arg2742z00_763);
					}}
					return BgL_res2445z00_759;
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_varz00()
	{
		AN_OBJECT;
		{	/* Ast/var.scm 14 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3024z00zzast_varz00));
			return
				BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3024z00zzast_varz00));
		}
	}

#ifdef __cplusplus
}
#endif
