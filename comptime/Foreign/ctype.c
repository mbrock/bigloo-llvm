/*===========================================================================*/
/*   (Foreign/ctype.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Foreign/ctype.scm)*/
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

	typedef struct BgL_caliasz00_bgl
	{
		bool_t BgL_arrayzf3zf3;
	}                *BgL_caliasz00_bglt;

	typedef struct BgL_cenumz00_bgl
	{
		struct BgL_typez00_bgl *BgL_btypez00;
		obj_t BgL_literalsz00;
	}               *BgL_cenumz00_bglt;

	typedef struct BgL_copaquez00_bgl
	{
		struct BgL_typez00_bgl *BgL_btypez00;
	}                 *BgL_copaquez00_bglt;

	typedef struct BgL_cfunctionz00_bgl
	{
		struct BgL_typez00_bgl *BgL_btypez00;
		long BgL_arityz00;
		struct BgL_typez00_bgl *BgL_typezd2reszd2;
		obj_t BgL_typezd2argszd2;
	}                   *BgL_cfunctionz00_bglt;

	typedef struct BgL_cptrz00_bgl
	{
		struct BgL_typez00_bgl *BgL_btypez00;
		struct BgL_typez00_bgl *BgL_pointzd2tozd2;
		bool_t BgL_arrayzf3zf3;
	}              *BgL_cptrz00_bglt;

	typedef struct BgL_cstructz00_bgl
	{
		bool_t BgL_structzf3zf3;
		obj_t BgL_fieldsz00;
		obj_t BgL_cstructza2za2;
	}                 *BgL_cstructz00_bglt;

	typedef struct BgL_cstructza2za2_bgl
	{
		struct BgL_typez00_bgl *BgL_btypez00;
		struct BgL_cstructz00_bgl *BgL_cstructz00;
	}                    *BgL_cstructza2za2_bglt;


	static obj_t BGl__cstructzd2nilzd2zzforeign_ctypez00(obj_t);
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ctypezf3zf3zzforeign_ctypez00(obj_t);
	static obj_t BGl__fillzd2cfunctionz12zc0zzforeign_ctypez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__declarezd2czd2typez12z12zzforeign_ctypez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cenumz00zzforeign_ctypez00 = BUNSPEC;
	static obj_t BGl__wideningzd2cfunctionzd2zzforeign_ctypez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__cfunctionzf3zf3zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_z52allocatezd2cptrz80zzforeign_ctypez00();
	static obj_t BGl__z52allocatezd2cstructz80zzforeign_ctypez00(obj_t);
	BGL_EXPORTED_DECL BgL_cstructza2za2_bglt
		BGl_cstructza2zd2nilz70zzforeign_ctypez00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	static obj_t BGl__fillzd2cstructza2z12z62zzforeign_ctypez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__cenumzf3zf3zzforeign_ctypez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_declarezd2czd2structza2z12zb0zzforeign_ctypez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cfunctionz00_bglt
		BGl_wideningzd2cfunctionzd2zzforeign_ctypez00(BgL_typez00_bglt, long,
		BgL_typez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	BGL_EXPORTED_DECL BgL_caliasz00_bglt
		BGl_fillzd2caliasz12zc0zzforeign_ctypez00(BgL_caliasz00_bglt, bool_t);
	static obj_t BGl__copaquezf3zf3zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2calia2269ze3zzforeign_ctypez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z52thezd2cenumzd2nilz52zzforeign_ctypez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_cptrz00_bglt BGl_makezd2cptrzd2zzforeign_ctypez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, int, BgL_typez00_bglt, BgL_typez00_bglt, bool_t);
	BGL_EXPORTED_DECL bool_t BGl_cptrzf3zf3zzforeign_ctypez00(obj_t);
	static obj_t BGl__makezd2cstructzd2zzforeign_ctypez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_declarezd2czd2functionz12z12zzforeign_ctypez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_copaquez00_bglt
		BGl_copaquezd2nilzd2zzforeign_ctypez00();
	static obj_t BGl_cnstzd2initzd2zzforeign_ctypez00();
	BGL_EXPORTED_DECL BgL_cenumz00_bglt
		BGl_makezd2cenumzd2zzforeign_ctypez00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int,
		BgL_typez00_bglt, obj_t);
	static obj_t BGl_objectzd2ze3structzd2cptr2253ze3zzforeign_ctypez00(obj_t,
		obj_t);
	static BgL_typez00_bglt
		BGl_declarezd2czd2pointerz12z12zzforeign_ctypez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2caliaszd2nilz52zzforeign_ctypez00 = BUNSPEC;
	static obj_t BGl_z52thezd2cfunctionzd2nilz52zzforeign_ctypez00 = BUNSPEC;
	static obj_t BGl__fillzd2cstructz12zc0zzforeign_ctypez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_z52allocatezd2cfunctionz80zzforeign_ctypez00();
	static obj_t BGl__cptrzf3zf3zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_declarezd2czd2aliasz12z12zzforeign_ctypez00(obj_t, obj_t, obj_t);
	extern long BGl_foreignzd2arityzd2zztools_argsz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cptrz00zzforeign_ctypez00 = BUNSPEC;
	static obj_t BGl_z52thezd2copaquezd2nilz52zzforeign_ctypez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_caliasz00zzforeign_ctypez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzforeign_ctypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL BgL_cstructza2za2_bglt
		BGl_wideningzd2cstructza2z70zzforeign_ctypez00(BgL_typez00_bglt,
		BgL_cstructz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_caliaszf3zf3zzforeign_ctypez00(obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cptrz00_bglt
		BGl_fillzd2cptrz12zc0zzforeign_ctypez00(BgL_cptrz00_bglt, BgL_typez00_bglt,
		BgL_typez00_bglt, bool_t);
	BGL_EXPORTED_DECL bool_t BGl_cenumzf3zf3zzforeign_ctypez00(obj_t);
	BGL_EXPORTED_DECL BgL_cenumz00_bglt BGl_cenumzd2nilzd2zzforeign_ctypez00();
	static obj_t BGl_objectzd2ze3structzd2cenum2265ze3zzforeign_ctypez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_cstructz00_bglt
		BGl_fillzd2cstructz12zc0zzforeign_ctypez00(BgL_cstructz00_bglt, bool_t,
		obj_t, obj_t);
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_z52allocatezd2cenumz80zzforeign_ctypez00();
	static obj_t BGl_objectzd2ze3structzd2cfunc2257ze3zzforeign_ctypez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_cenumz00_bglt
		BGl_wideningzd2cenumzd2zzforeign_ctypez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl__copaquezd2nilzd2zzforeign_ctypez00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl__makezd2cstructza2z70zzforeign_ctypez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_declarezd2czd2structz12z12zzforeign_ctypez00(obj_t, obj_t, obj_t);
	extern BgL_typez00_bglt BGl_declarezd2subtypez12zc0zztype_envz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__wideningzd2cstructza2z70zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__wideningzd2caliaszd2zzforeign_ctypez00(obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cstructza2za2_bglt
		BGl_makezd2cstructza2z70zzforeign_ctypez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int,
		BgL_typez00_bglt, BgL_cstructz00_bglt);
	static obj_t BGl__makezd2cptrzd2zzforeign_ctypez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cfunctionz00_bglt
		BGl_makezd2cfunctionzd2zzforeign_ctypez00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int,
		BgL_typez00_bglt, long, BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cfunctionz00zzforeign_ctypez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_copaquez00_bglt
		BGl_wideningzd2copaquezd2zzforeign_ctypez00(BgL_typez00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl__cfunctionzd2nilzd2zzforeign_ctypez00(obj_t);
	BGL_EXPORTED_DECL BgL_copaquez00_bglt
		BGl_makezd2copaquezd2zzforeign_ctypez00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_cfunctionz00_bglt
		BGl_fillzd2cfunctionz12zc0zzforeign_ctypez00(BgL_cfunctionz00_bglt,
		BgL_typez00_bglt, long, BgL_typez00_bglt, obj_t);
	static obj_t BGl__z52allocatezd2cstructza2z22zzforeign_ctypez00(obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	static obj_t BGl__z52allocatezd2cptrz80zzforeign_ctypez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_declarezd2czd2typez12z12zzforeign_ctypez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2cstru2245ze3zzforeign_ctypez00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2cstru2249ze3zzforeign_ctypez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_caliasz00_bglt
		BGl_makezd2caliaszd2zzforeign_ctypez00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int,
		bool_t);
	static obj_t BGl__declarezd2czd2aliasz12z12zzforeign_ctypez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__cstructza2zd2nilz70zzforeign_ctypez00(obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_z52allocatezd2cstructza2z22zzforeign_ctypez00();
	static obj_t BGl_methodzd2initzd2zzforeign_ctypez00();
	BGL_EXPORTED_DECL BgL_cfunctionz00_bglt
		BGl_cfunctionzd2nilzd2zzforeign_ctypez00();
	extern obj_t BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(obj_t);
	static obj_t BGl__caliaszf3zf3zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cstructza2za2zzforeign_ctypez00 = BUNSPEC;
	static obj_t BGl__makezd2cenumzd2zzforeign_ctypez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cstructzf3zf3zzforeign_ctypez00(obj_t);
	extern BgL_typez00_bglt BGl_makezd2typezd2zztype_typez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, int);
	BGL_EXPORTED_DECL BgL_caliasz00_bglt BGl_caliaszd2nilzd2zzforeign_ctypez00();
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__cenumzd2nilzd2zzforeign_ctypez00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_copaquez00zzforeign_ctypez00 = BUNSPEC;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzforeign_ctypez00 = BUNSPEC;
	static obj_t BGl__fillzd2caliasz12zc0zzforeign_ctypez00(obj_t, obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2247z83zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2251z83zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2255z83zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	extern bool_t BGl_typezd2existszf3z21zztype_envz00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2259z83zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2263z83zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2267z83zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2271z83zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzforeign_ctypez00();
	BGL_EXPORTED_DECL BgL_cenumz00_bglt
		BGl_fillzd2cenumz12zc0zzforeign_ctypez00(BgL_cenumz00_bglt,
		BgL_typez00_bglt, obj_t);
	extern obj_t BGl_za2allowzd2typezd2redefinitionza2z00zzengine_paramz00;
	static obj_t BGl_makezd2foreignzd2coercersz00zzforeign_ctypez00(obj_t, obj_t,
		obj_t);
	extern BgL_typez00_bglt
		BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_cstructza2zf3z51zzforeign_ctypez00(obj_t);
	static obj_t BGl__makezd2caliaszd2zzforeign_ctypez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t BGl__fillzd2cptrz12zc0zzforeign_ctypez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__wideningzd2copaquezd2zzforeign_ctypez00(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_z52allocatezd2copaquez80zzforeign_ctypez00();
	static obj_t BGl__cstructzf3zf3zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cstructza2za2_bglt
		BGl_fillzd2cstructza2z12z62zzforeign_ctypez00(BgL_cstructza2za2_bglt,
		BgL_typez00_bglt, BgL_cstructz00_bglt);
	static obj_t BGl__fillzd2copaquez12zc0zzforeign_ctypez00(obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzforeign_ctypez00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cfunctionzf3zf3zzforeign_ctypez00(obj_t);
	BGL_EXPORTED_DECL BgL_cstructz00_bglt
		BGl_wideningzd2cstructzd2zzforeign_ctypez00(bool_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2cptrzd2nilz52zzforeign_ctypez00 = BUNSPEC;
	static BgL_typez00_bglt BGl_declarezd2czd2enumz12z12zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_z52allocatezd2caliasz80zzforeign_ctypez00();
	static obj_t BGl__wideningzd2cenumzd2zzforeign_ctypez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cstructz00_bglt
		BGl_makezd2cstructzd2zzforeign_ctypez00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int,
		bool_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2cfunctionz80zzforeign_ctypez00(obj_t);
	static obj_t BGl__fillzd2cenumz12zc0zzforeign_ctypez00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_copaquez00_bglt
		BGl_fillzd2copaquez12zc0zzforeign_ctypez00(BgL_copaquez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl__wideningzd2cptrzd2zzforeign_ctypez00(obj_t, obj_t, obj_t,
		obj_t);
	extern BgL_typez00_bglt BGl_declarezd2aliastypez12zc0zztype_envz00(obj_t,
		obj_t, obj_t, BgL_typez00_bglt);
	static obj_t BGl__z52allocatezd2copaquez80zzforeign_ctypez00(obj_t);
	extern obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2copaq2261ze3zzforeign_ctypez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_EXPORTED_DECL BgL_caliasz00_bglt
		BGl_wideningzd2caliaszd2zzforeign_ctypez00(bool_t);
	static BgL_typez00_bglt
		BGl_declarezd2czd2opaquez12z12zzforeign_ctypez00(obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2cfunctionzd2zzforeign_ctypez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	extern BgL_typez00_bglt BGl_usezd2typez12zc0zztype_envz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl__ctypezf3zf3zzforeign_ctypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cptrz00_bglt BGl_cptrzd2nilzd2zzforeign_ctypez00();
	BGL_EXPORTED_DECL BgL_cptrz00_bglt
		BGl_wideningzd2cptrzd2zzforeign_ctypez00(BgL_typez00_bglt, BgL_typez00_bglt,
		bool_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cstructz00zzforeign_ctypez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_cstructz00_bglt
		BGl_cstructzd2nilzd2zzforeign_ctypez00();
	static obj_t BGl__makezd2copaquezd2zzforeign_ctypez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__cstructza2zf3z51zzforeign_ctypez00(obj_t, obj_t);
	static obj_t BGl__caliaszd2nilzd2zzforeign_ctypez00(obj_t);
	static obj_t BGl__z52allocatezd2cenumz80zzforeign_ctypez00(obj_t);
	static obj_t BGl_z52thezd2cstructza2zd2nilzf0zzforeign_ctypez00 = BUNSPEC;
	static obj_t BGl__wideningzd2cstructzd2zzforeign_ctypez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z52thezd2cstructzd2nilz52zzforeign_ctypez00 = BUNSPEC;
	static obj_t BGl_objectzd2initzd2zzforeign_ctypez00();
	static obj_t BGl__z52allocatezd2caliasz80zzforeign_ctypez00(obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_z52allocatezd2cstructz80zzforeign_ctypez00();
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl__cptrzd2nilzd2zzforeign_ctypez00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzforeign_ctypez00();
	BGL_EXPORTED_DECL bool_t BGl_copaquezf3zf3zzforeign_ctypez00(obj_t);
	extern obj_t
		BGl_makezd2pointerzd2tozd2namezd2zztype_toolsz00(BgL_typez00_bglt);
	extern obj_t BGl_za2cobjza2z00zztype_cachez00;
	static obj_t __cnst[32];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunctionzd2nilzd2envz00zzforeign_ctypez00,
		BgL_bgl__cfunctionza7d2nil3145za7,
		BGl__cfunctionzd2nilzd2zzforeign_ctypez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cenumzf3zd2envz21zzforeign_ctypez00,
		BgL_bgl__cenumza7f3za7f3za7za7fo3146z00, BGl__cenumzf3zf3zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2cfunctionzd2envz52zzforeign_ctypez00,
		BgL_bgl__za752allocateza7d2c3147z00,
		BGl__z52allocatezd2cfunctionz80zzforeign_ctypez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2cstructza2zd2envza2zzforeign_ctypez00,
		BgL_bgl__makeza7d2cstructza73148z00,
		BGl__makezd2cstructza2z70zzforeign_ctypez00, 0L, BUNSPEC, 17);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2cstructz12zd2envz12zzforeign_ctypez00,
		BgL_bgl__fillza7d2cstructza73149z00,
		BGl__fillzd2cstructz12zc0zzforeign_ctypez00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_caliaszf3zd2envz21zzforeign_ctypez00,
		BgL_bgl__caliasza7f3za7f3za7za7f3150z00,
		BGl__caliaszf3zf3zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2caliaszd2envz00zzforeign_ctypez00,
		BgL_bgl__makeza7d2caliasza7d3151z00,
		BGl__makezd2caliaszd2zzforeign_ctypez00, 0L, BUNSPEC, 16);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_caliaszd2nilzd2envz00zzforeign_ctypez00,
		BgL_bgl__caliasza7d2nilza7d23152z00, BGl__caliaszd2nilzd2zzforeign_ctypez00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2copaquezd2envz52zzforeign_ctypez00,
		BgL_bgl__za752allocateza7d2c3153z00,
		BGl__z52allocatezd2copaquez80zzforeign_ctypez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_wideningzd2cptrzd2envz00zzforeign_ctypez00,
		BgL_bgl__wideningza7d2cptr3154za7,
		BGl__wideningzd2cptrzd2zzforeign_ctypez00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ctypezf3zd2envz21zzforeign_ctypez00,
		BgL_bgl__ctypeza7f3za7f3za7za7fo3155z00, BGl__ctypezf3zf3zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2cfunctionzd2envz00zzforeign_ctypez00,
		BgL_bgl__wideningza7d2cfun3156za7,
		BGl__wideningzd2cfunctionzd2zzforeign_ctypez00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2cstructzd2envz00zzforeign_ctypez00,
		BgL_bgl__wideningza7d2cstr3157za7,
		BGl__wideningzd2cstructzd2zzforeign_ctypez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2czd2aliasz12zd2envzc0zzforeign_ctypez00,
		BgL_bgl__declareza7d2cza7d2a3158z00,
		BGl__declarezd2czd2aliasz12z12zzforeign_ctypez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2copaquezd2envz00zzforeign_ctypez00,
		BgL_bgl__makeza7d2copaqueza73159z00,
		BGl__makezd2copaquezd2zzforeign_ctypez00, 0L, BUNSPEC, 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2cstructza2zd2envzf0zzforeign_ctypez00,
		BgL_bgl__za752allocateza7d2c3160z00,
		BGl__z52allocatezd2cstructza2z22zzforeign_ctypez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cptrzd2envz00zzforeign_ctypez00,
		BgL_bgl__makeza7d2cptrza7d2za73161za7,
		BGl__makezd2cptrzd2zzforeign_ctypez00, 0L, BUNSPEC, 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2caliaszd2envz00zzforeign_ctypez00,
		BgL_bgl__wideningza7d2cali3162za7,
		BGl__wideningzd2caliaszd2zzforeign_ctypez00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cenumzd2nilzd2envz00zzforeign_ctypez00,
		BgL_bgl__cenumza7d2nilza7d2za73163za7,
		BGl__cenumzd2nilzd2zzforeign_ctypez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2cptrzd2envz52zzforeign_ctypez00,
		BgL_bgl__za752allocateza7d2c3164z00,
		BGl__z52allocatezd2cptrz80zzforeign_ctypez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cstructza2zd2nilzd2envza2zzforeign_ctypez00,
		BgL_bgl__cstructza7a2za7d2ni3165z00,
		BGl__cstructza2zd2nilz70zzforeign_ctypez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cfunctionzd2envz00zzforeign_ctypez00,
		BgL_bgl__makeza7d2cfunctio3166za7,
		BGl__makezd2cfunctionzd2zzforeign_ctypez00, 0L, BUNSPEC, 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2caliaszd2envz52zzforeign_ctypez00,
		BgL_bgl__za752allocateza7d2c3167z00,
		BGl__z52allocatezd2caliasz80zzforeign_ctypez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2copaquezd2envz00zzforeign_ctypez00,
		BgL_bgl__wideningza7d2copa3168za7,
		BGl__wideningzd2copaquezd2zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2cstructza2zd2envza2zzforeign_ctypez00,
		BgL_bgl__wideningza7d2cstr3169za7,
		BGl__wideningzd2cstructza2z70zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2czd2typez12zd2envzc0zzforeign_ctypez00,
		BgL_bgl__declareza7d2cza7d2t3170z00,
		BGl__declarezd2czd2typez12z12zzforeign_ctypez00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_wideningzd2cenumzd2envz00zzforeign_ctypez00,
		BgL_bgl__wideningza7d2cenu3171za7,
		BGl__wideningzd2cenumzd2zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2cenumz12zd2envz12zzforeign_ctypez00,
		BgL_bgl__fillza7d2cenumza7123172z00,
		BGl__fillzd2cenumz12zc0zzforeign_ctypez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_copaquezd2nilzd2envz00zzforeign_ctypez00,
		BgL_bgl__copaqueza7d2nilza7d3173z00,
		BGl__copaquezd2nilzd2zzforeign_ctypez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3111z00zzforeign_ctypez00,
		BgL_bgl_objectza7d2za7e3stru3174z00,
		BGl_objectzd2ze3structzd2cstru2245ze3zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3113z00zzforeign_ctypez00,
		BgL_bgl_structza7b2objectza73175z00,
		BGl_structzb2objectzd2ze3objec2247z83zzforeign_ctypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3115z00zzforeign_ctypez00,
		BgL_bgl_objectza7d2za7e3stru3176z00,
		BGl_objectzd2ze3structzd2cstru2249ze3zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3116z00zzforeign_ctypez00,
		BgL_bgl_structza7b2objectza73177z00,
		BGl_structzb2objectzd2ze3objec2251z83zzforeign_ctypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3117z00zzforeign_ctypez00,
		BgL_bgl_objectza7d2za7e3stru3178z00,
		BGl_objectzd2ze3structzd2cptr2253ze3zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3118z00zzforeign_ctypez00,
		BgL_bgl_structza7b2objectza73179z00,
		BGl_structzb2objectzd2ze3objec2255z83zzforeign_ctypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3120z00zzforeign_ctypez00,
		BgL_bgl_structza7b2objectza73180z00,
		BGl_structzb2objectzd2ze3objec2259z83zzforeign_ctypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3119z00zzforeign_ctypez00,
		BgL_bgl_objectza7d2za7e3stru3181z00,
		BGl_objectzd2ze3structzd2cfunc2257ze3zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3121z00zzforeign_ctypez00,
		BgL_bgl_objectza7d2za7e3stru3182z00,
		BGl_objectzd2ze3structzd2copaq2261ze3zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3122z00zzforeign_ctypez00,
		BgL_bgl_structza7b2objectza73183z00,
		BGl_structzb2objectzd2ze3objec2263z83zzforeign_ctypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3123z00zzforeign_ctypez00,
		BgL_bgl_objectza7d2za7e3stru3184z00,
		BGl_objectzd2ze3structzd2cenum2265ze3zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3124z00zzforeign_ctypez00,
		BgL_bgl_structza7b2objectza73185z00,
		BGl_structzb2objectzd2ze3objec2267z83zzforeign_ctypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3125z00zzforeign_ctypez00,
		BgL_bgl_objectza7d2za7e3stru3186z00,
		BGl_objectzd2ze3structzd2calia2269ze3zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3126z00zzforeign_ctypez00,
		BgL_bgl_structza7b2objectza73187z00,
		BGl_structzb2objectzd2ze3objec2271z83zzforeign_ctypez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3106z00zzforeign_ctypez00,
		BgL_bgl_string3106za700za7za7f3188za7, "Type redefinition -- ", 21);
	      DEFINE_STRING(BGl_string3107z00zzforeign_ctypez00,
		BgL_bgl_string3107za700za7za7f3189za7, "declare-c-type!", 15);
	      DEFINE_STRING(BGl_string3108z00zzforeign_ctypez00,
		BgL_bgl_string3108za700za7za7f3190za7, "Illegal c type declaration", 26);
	      DEFINE_STRING(BGl_string3110z00zzforeign_ctypez00,
		BgL_bgl_string3110za700za7za7f3191za7, ") 0)", 4);
	      DEFINE_STRING(BGl_string3109z00zzforeign_ctypez00,
		BgL_bgl_string3109za700za7za7f3192za7, "*((", 3);
	      DEFINE_STRING(BGl_string3112z00zzforeign_ctypez00,
		BgL_bgl_string3112za700za7za7f3193za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string3114z00zzforeign_ctypez00,
		BgL_bgl_string3114za700za7za7f3194za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string3127z00zzforeign_ctypez00,
		BgL_bgl_string3127za700za7za7f3195za7, "foreign_ctype", 13);
	      DEFINE_STRING(BGl_string3128z00zzforeign_ctypez00,
		BgL_bgl_string3128za700za7za7f3196za7,
		"_ cstruct* cstruct cptr cfunction copaque cenum calias quote x lambda foreign cobj coerce type -> ? * bigloo (obj) (cobj) b C union* struct* union struct array pointer function opaque enum ",
		189);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cstructzd2nilzd2envz00zzforeign_ctypez00,
		BgL_bgl__cstructza7d2nilza7d3197z00,
		BGl__cstructzd2nilzd2zzforeign_ctypez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2cenumzd2envz52zzforeign_ctypez00,
		BgL_bgl__za752allocateza7d2c3198z00,
		BGl__z52allocatezd2cenumz80zzforeign_ctypez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2cstructza2z12zd2envzb0zzforeign_ctypez00,
		BgL_bgl__fillza7d2cstructza73199z00,
		BGl__fillzd2cstructza2z12z62zzforeign_ctypez00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_copaquezf3zd2envz21zzforeign_ctypez00,
		BgL_bgl__copaqueza7f3za7f3za7za73200z00,
		BGl__copaquezf3zf3zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2cptrz12zd2envz12zzforeign_ctypez00,
		BgL_bgl__fillza7d2cptrza712za73201za7,
		BGl__fillzd2cptrz12zc0zzforeign_ctypez00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cptrzf3zd2envz21zzforeign_ctypez00,
		BgL_bgl__cptrza7f3za7f3za7za7for3202z00, BGl__cptrzf3zf3zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cptrzd2nilzd2envz00zzforeign_ctypez00,
		BgL_bgl__cptrza7d2nilza7d2za7za73203z00,
		BGl__cptrzd2nilzd2zzforeign_ctypez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2caliasz12zd2envz12zzforeign_ctypez00,
		BgL_bgl__fillza7d2caliasza713204z00,
		BGl__fillzd2caliasz12zc0zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cstructza2zf3zd2envz83zzforeign_ctypez00,
		BgL_bgl__cstructza7a2za7f3za753205za7,
		BGl__cstructza2zf3z51zzforeign_ctypez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunctionzf3zd2envz21zzforeign_ctypez00,
		BgL_bgl__cfunctionza7f3za7f33206z00, BGl__cfunctionzf3zf3zzforeign_ctypez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2copaquez12zd2envz12zzforeign_ctypez00,
		BgL_bgl__fillza7d2copaqueza73207z00,
		BGl__fillzd2copaquez12zc0zzforeign_ctypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2cstructzd2envz52zzforeign_ctypez00,
		BgL_bgl__za752allocateza7d2c3208z00,
		BGl__z52allocatezd2cstructz80zzforeign_ctypez00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cenumzd2envz00zzforeign_ctypez00,
		BgL_bgl__makeza7d2cenumza7d23209z00, BGl__makezd2cenumzd2zzforeign_ctypez00,
		0L, BUNSPEC, 17);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2cfunctionz12zd2envz12zzforeign_ctypez00,
		BgL_bgl__fillza7d2cfunctio3210za7,
		BGl__fillzd2cfunctionz12zc0zzforeign_ctypez00, 0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cstructzf3zd2envz21zzforeign_ctypez00,
		BgL_bgl__cstructza7f3za7f3za7za73211z00,
		BGl__cstructzf3zf3zzforeign_ctypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cstructzd2envz00zzforeign_ctypez00,
		BgL_bgl__makeza7d2cstructza73212z00,
		BGl__makezd2cstructzd2zzforeign_ctypez00, 0L, BUNSPEC, 18);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzforeign_ctypez00(long
		BgL_checksumz00_2576, char *BgL_fromz00_2577)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzforeign_ctypez00))
				{
					BGl_requirezd2initializa7ationz75zzforeign_ctypez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzforeign_ctypez00();
					BGl_cnstzd2initzd2zzforeign_ctypez00();
					BGl_importedzd2moduleszd2initz00zzforeign_ctypez00();
					BGl_objectzd2initzd2zzforeign_ctypez00();
					BGl_methodzd2initzd2zzforeign_ctypez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzforeign_ctypez00()
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"foreign_ctype");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"foreign_ctype");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"foreign_ctype");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"foreign_ctype");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "foreign_ctype");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"foreign_ctype");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzforeign_ctypez00()
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 15 */
			{	/* Foreign/ctype.scm 15 */
				obj_t BgL_cportz00_2464;

				BgL_cportz00_2464 =
					bgl_open_input_string(BGl_string3128z00zzforeign_ctypez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2465;

					BgL_iz00_2465 = ((long) 31);
				BgL_loopz00_2466:
					if ((BgL_iz00_2465 == ((long) -1)))
						{	/* Foreign/ctype.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Foreign/ctype.scm 15 */
							{	/* Foreign/ctype.scm 15 */
								obj_t BgL_arg3130z00_2468;

								{	/* Foreign/ctype.scm 15 */

									{	/* Foreign/ctype.scm 15 */
										obj_t BgL_locationz00_2470;

										BgL_locationz00_2470 = BBOOL(((bool_t) 0));
										{	/* Foreign/ctype.scm 15 */

											BgL_arg3130z00_2468 =
												BGl_readz00zz__readerz00(BgL_cportz00_2464,
												BgL_locationz00_2470);
										}
									}
								}
								{	/* Foreign/ctype.scm 15 */
									int BgL_auxz00_2598;

									BgL_auxz00_2598 = (int) (BgL_iz00_2465);
									CNST_TABLE_SET(BgL_auxz00_2598, BgL_arg3130z00_2468);
							}}
							{	/* Foreign/ctype.scm 15 */
								int BgL_auxz00_2471;

								BgL_auxz00_2471 = (int) ((BgL_iz00_2465 - ((long) 1)));
								{
									long BgL_iz00_2603;

									BgL_iz00_2603 = (long) (BgL_auxz00_2471);
									BgL_iz00_2465 = BgL_iz00_2603;
									goto BgL_loopz00_2466;
								}
							}
						}
				}
			}
		}
	}



/* ctype? */
	BGL_EXPORTED_DEF bool_t BGl_ctypezf3zf3zzforeign_ctypez00(obj_t BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 84 */
			{	/* Foreign/ctype.scm 85 */
				bool_t BgL__ortest_2215z00_393;

				BgL__ortest_2215z00_393 =
					BGl_iszd2azf3z21zz__objectz00(BgL_objz00_1,
					BGl_caliasz00zzforeign_ctypez00);
				if (BgL__ortest_2215z00_393)
					{	/* Foreign/ctype.scm 85 */
						return BgL__ortest_2215z00_393;
					}
				else
					{	/* Foreign/ctype.scm 86 */
						bool_t BgL__ortest_2216z00_394;

						BgL__ortest_2216z00_394 =
							BGl_iszd2azf3z21zz__objectz00(BgL_objz00_1,
							BGl_cenumz00zzforeign_ctypez00);
						if (BgL__ortest_2216z00_394)
							{	/* Foreign/ctype.scm 86 */
								return BgL__ortest_2216z00_394;
							}
						else
							{	/* Foreign/ctype.scm 87 */
								bool_t BgL__ortest_2217z00_395;

								BgL__ortest_2217z00_395 =
									BGl_iszd2azf3z21zz__objectz00(BgL_objz00_1,
									BGl_copaquez00zzforeign_ctypez00);
								if (BgL__ortest_2217z00_395)
									{	/* Foreign/ctype.scm 87 */
										return BgL__ortest_2217z00_395;
									}
								else
									{	/* Foreign/ctype.scm 88 */
										bool_t BgL__ortest_2218z00_396;

										BgL__ortest_2218z00_396 =
											BGl_iszd2azf3z21zz__objectz00(BgL_objz00_1,
											BGl_cfunctionz00zzforeign_ctypez00);
										if (BgL__ortest_2218z00_396)
											{	/* Foreign/ctype.scm 88 */
												return BgL__ortest_2218z00_396;
											}
										else
											{	/* Foreign/ctype.scm 89 */
												bool_t BgL__ortest_2219z00_397;

												BgL__ortest_2219z00_397 =
													BGl_iszd2azf3z21zz__objectz00(BgL_objz00_1,
													BGl_cptrz00zzforeign_ctypez00);
												if (BgL__ortest_2219z00_397)
													{	/* Foreign/ctype.scm 89 */
														return BgL__ortest_2219z00_397;
													}
												else
													{	/* Foreign/ctype.scm 90 */
														bool_t BgL__ortest_2220z00_398;

														BgL__ortest_2220z00_398 =
															BGl_iszd2azf3z21zz__objectz00(BgL_objz00_1,
															BGl_cstructz00zzforeign_ctypez00);
														if (BgL__ortest_2220z00_398)
															{	/* Foreign/ctype.scm 90 */
																return BgL__ortest_2220z00_398;
															}
														else
															{	/* Foreign/ctype.scm 90 */
																return
																	BGl_iszd2azf3z21zz__objectz00(BgL_objz00_1,
																	BGl_cstructza2za2zzforeign_ctypez00);
															}
													}
											}
									}
							}
					}
			}
		}
	}



/* _ctype? */
	obj_t BGl__ctypezf3zf3zzforeign_ctypez00(obj_t BgL_envz00_2190,
		obj_t BgL_objz00_2191)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 84 */
			return BBOOL(BGl_ctypezf3zf3zzforeign_ctypez00(BgL_objz00_2191));
		}
	}



/* declare-c-type! */
	BGL_EXPORTED_DEF obj_t BGl_declarezd2czd2typez12z12zzforeign_ctypez00(obj_t
		BgL_ctzd2defzd2_2, obj_t BgL_ctzd2idzd2_3, obj_t BgL_ctzd2expzd2_4,
		obj_t BgL_ctzd2namezd2_5)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 96 */
			if (BGl_typezd2existszf3z21zztype_envz00(BgL_ctzd2idzd2_3))
				{	/* Foreign/ctype.scm 98 */
					if (CBOOL(BGl_za2allowzd2typezd2redefinitionza2z00zzengine_paramz00))
						{	/* Foreign/ctype.scm 99 */
							BFALSE;
						}
					else
						{	/* Foreign/ctype.scm 100 */
							obj_t BgL_list2274z00_400;

							{	/* Foreign/ctype.scm 100 */
								obj_t BgL_arg2282z00_402;

								{	/* Foreign/ctype.scm 100 */
									obj_t BgL_arg2286z00_404;

									BgL_arg2286z00_404 = MAKE_PAIR(BgL_ctzd2idzd2_3, BNIL);
									BgL_arg2282z00_402 =
										MAKE_PAIR(BGl_string3106z00zzforeign_ctypez00,
										BgL_arg2286z00_404);
								}
								BgL_list2274z00_400 =
									MAKE_PAIR(BGl_string3107z00zzforeign_ctypez00,
									BgL_arg2282z00_402);
							}
							BGl_warningz00zz__errorz00(BgL_list2274z00_400);
						}
					return BUNSPEC;
				}
			else
				{	/* Foreign/ctype.scm 98 */
					if (SYMBOLP(BgL_ctzd2expzd2_4))
						{	/* Foreign/ctype.scm 102 */
							return
								(obj_t) (BGl_declarezd2czd2aliasz12z12zzforeign_ctypez00
								(BgL_ctzd2idzd2_3, BgL_ctzd2expzd2_4, BgL_ctzd2namezd2_5));
						}
					else
						{	/* Foreign/ctype.scm 102 */
							if (PAIRP(BgL_ctzd2expzd2_4))
								{	/* Foreign/ctype.scm 105 */
									obj_t BgL_casezd2valuezd2_407;

									BgL_casezd2valuezd2_407 = CAR(BgL_ctzd2expzd2_4);
									if ((BgL_casezd2valuezd2_407 == CNST_TABLE_REF(((long) 0))))
										{	/* Foreign/ctype.scm 105 */
											return
												(obj_t) (BGl_declarezd2czd2enumz12z12zzforeign_ctypez00
												(BgL_ctzd2idzd2_3, BgL_ctzd2expzd2_4,
													BgL_ctzd2namezd2_5));
										}
									else
										{	/* Foreign/ctype.scm 105 */
											if (
												(BgL_casezd2valuezd2_407 == CNST_TABLE_REF(((long) 1))))
												{	/* Foreign/ctype.scm 105 */
													return
														(obj_t)
														(BGl_declarezd2czd2opaquez12z12zzforeign_ctypez00
														(BgL_ctzd2idzd2_3, BgL_ctzd2expzd2_4,
															BgL_ctzd2namezd2_5));
												}
											else
												{	/* Foreign/ctype.scm 105 */
													if (
														(BgL_casezd2valuezd2_407 ==
															CNST_TABLE_REF(((long) 2))))
														{	/* Foreign/ctype.scm 105 */
															return
																(obj_t)
																(BGl_declarezd2czd2functionz12z12zzforeign_ctypez00
																(BgL_ctzd2idzd2_3, BgL_ctzd2expzd2_4,
																	BgL_ctzd2namezd2_5));
														}
													else
														{	/* Foreign/ctype.scm 105 */
															bool_t BgL_testz00_2650;

															{	/* Foreign/ctype.scm 105 */
																bool_t BgL__ortest_2221z00_416;

																BgL__ortest_2221z00_416 =
																	(BgL_casezd2valuezd2_407 ==
																	CNST_TABLE_REF(((long) 3)));
																if (BgL__ortest_2221z00_416)
																	{	/* Foreign/ctype.scm 105 */
																		BgL_testz00_2650 = BgL__ortest_2221z00_416;
																	}
																else
																	{	/* Foreign/ctype.scm 105 */
																		BgL_testz00_2650 =
																			(BgL_casezd2valuezd2_407 ==
																			CNST_TABLE_REF(((long) 4)));
															}}
															if (BgL_testz00_2650)
																{	/* Foreign/ctype.scm 105 */
																	return
																		(obj_t)
																		(BGl_declarezd2czd2pointerz12z12zzforeign_ctypez00
																		(BgL_ctzd2idzd2_3, BgL_ctzd2expzd2_4,
																			BgL_ctzd2namezd2_5));
																}
															else
																{	/* Foreign/ctype.scm 105 */
																	bool_t BgL_testz00_2658;

																	{	/* Foreign/ctype.scm 105 */
																		bool_t BgL__ortest_2222z00_415;

																		BgL__ortest_2222z00_415 =
																			(BgL_casezd2valuezd2_407 ==
																			CNST_TABLE_REF(((long) 5)));
																		if (BgL__ortest_2222z00_415)
																			{	/* Foreign/ctype.scm 105 */
																				BgL_testz00_2658 =
																					BgL__ortest_2222z00_415;
																			}
																		else
																			{	/* Foreign/ctype.scm 105 */
																				BgL_testz00_2658 =
																					(BgL_casezd2valuezd2_407 ==
																					CNST_TABLE_REF(((long) 6)));
																	}}
																	if (BgL_testz00_2658)
																		{	/* Foreign/ctype.scm 105 */
																			return
																				(obj_t)
																				(BGl_declarezd2czd2structz12z12zzforeign_ctypez00
																				(BgL_ctzd2idzd2_3, BgL_ctzd2expzd2_4,
																					BgL_ctzd2namezd2_5));
																		}
																	else
																		{	/* Foreign/ctype.scm 105 */
																			bool_t BgL_testz00_2666;

																			{	/* Foreign/ctype.scm 105 */
																				bool_t BgL__ortest_2223z00_414;

																				BgL__ortest_2223z00_414 =
																					(BgL_casezd2valuezd2_407 ==
																					CNST_TABLE_REF(((long) 7)));
																				if (BgL__ortest_2223z00_414)
																					{	/* Foreign/ctype.scm 105 */
																						BgL_testz00_2666 =
																							BgL__ortest_2223z00_414;
																					}
																				else
																					{	/* Foreign/ctype.scm 105 */
																						BgL_testz00_2666 =
																							(BgL_casezd2valuezd2_407 ==
																							CNST_TABLE_REF(((long) 8)));
																			}}
																			if (BgL_testz00_2666)
																				{	/* Foreign/ctype.scm 105 */
																					return
																						(obj_t)
																						(BGl_declarezd2czd2structza2z12zb0zzforeign_ctypez00
																						(BgL_ctzd2idzd2_3,
																							BgL_ctzd2expzd2_4,
																							BgL_ctzd2namezd2_5));
																				}
																			else
																				{	/* Foreign/ctype.scm 105 */
																					return
																						BGl_internalzd2errorzd2zztools_errorz00
																						(BGl_string3107z00zzforeign_ctypez00,
																						BGl_string3108z00zzforeign_ctypez00,
																						BgL_ctzd2defzd2_2);
																				}
																		}
																}
														}
												}
										}
								}
							else
								{	/* Foreign/ctype.scm 104 */
									return
										BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string3107z00zzforeign_ctypez00,
										BGl_string3108z00zzforeign_ctypez00, BgL_ctzd2defzd2_2);
								}
						}
				}
		}
	}



/* _declare-c-type! */
	obj_t BGl__declarezd2czd2typez12z12zzforeign_ctypez00(obj_t BgL_envz00_2192,
		obj_t BgL_ctzd2defzd2_2193, obj_t BgL_ctzd2idzd2_2194,
		obj_t BgL_ctzd2expzd2_2195, obj_t BgL_ctzd2namezd2_2196)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 96 */
			return
				BGl_declarezd2czd2typez12z12zzforeign_ctypez00(BgL_ctzd2defzd2_2193,
				BgL_ctzd2idzd2_2194, BgL_ctzd2expzd2_2195, BgL_ctzd2namezd2_2196);
		}
	}



/* declare-c-alias! */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_declarezd2czd2aliasz12z12zzforeign_ctypez00(obj_t BgL_idz00_6,
		obj_t BgL_expz00_7, obj_t BgL_namez00_8)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 130 */
			{	/* Foreign/ctype.scm 132 */
				BgL_typez00_bglt BgL_atypez00_417;

				BgL_atypez00_417 =
					BGl_getzd2aliasedzd2typez00zztype_typez00
					(BGl_findzd2typezd2zztype_envz00(BgL_expz00_7));
				if ((BgL_idz00_6 ==
						(((BgL_typez00_bglt) CREF(BgL_atypez00_417))->BgL_idz00)))
					{	/* Foreign/ctype.scm 133 */
						return BgL_atypez00_417;
					}
				else
					{	/* Foreign/ctype.scm 135 */
						BgL_typez00_bglt BgL_ctypez00_419;

						BgL_ctypez00_419 =
							BGl_declarezd2aliastypez12zc0zztype_envz00(BgL_idz00_6,
							BgL_namez00_8, CNST_TABLE_REF(((long) 9)), BgL_atypez00_417);
						{	/* Foreign/ctype.scm 136 */
							BgL_typez00_bglt BgL_obj2224z00_420;

							BgL_obj2224z00_420 = ((BgL_typez00_bglt) BgL_ctypez00_419);
							{	/* Foreign/ctype.scm 136 */
								BgL_caliasz00_bglt BgL_arg2297z00_421;

								{	/* Foreign/ctype.scm 136 */
									BgL_caliasz00_bglt BgL_res3004z00_1102;

									{	/* Foreign/ctype.scm 136 */
										BgL_caliasz00_bglt BgL_new1621z00_1097;

										BgL_new1621z00_1097 =
											((BgL_caliasz00_bglt) BREF(GC_MALLOC(sizeof(struct
														BgL_caliasz00_bgl))));
										{	/* Foreign/ctype.scm 136 */
											BgL_caliasz00_bglt BgL_res3003z00_1101;

											{	/* Foreign/ctype.scm 136 */
												BgL_caliasz00_bglt BgL_new1642z00_1098;

												BgL_new1642z00_1098 = BgL_new1621z00_1097;
												{	/* Foreign/ctype.scm 136 */
													bool_t BgL_arrayzf31641zf3_1100;

													BgL_arrayzf31641zf3_1100 = ((bool_t) 0);
													((((BgL_caliasz00_bglt) CREF(BgL_new1642z00_1098))->
															BgL_arrayzf3zf3) =
														((bool_t) BgL_arrayzf31641zf3_1100), BUNSPEC);
													BgL_res3003z00_1101 = BgL_new1642z00_1098;
											}} BgL_res3003z00_1101;
										}
										BgL_res3004z00_1102 = BgL_new1621z00_1097;
									}
									BgL_arg2297z00_421 = BgL_res3004z00_1102;
								}
								{	/* Foreign/ctype.scm 136 */
									obj_t BgL_auxz00_2689;

									BgL_objectz00_bglt BgL_auxz00_2687;

									BgL_auxz00_2689 = (obj_t) (BgL_arg2297z00_421);
									BgL_auxz00_2687 = (BgL_objectz00_bglt) (BgL_obj2224z00_420);
									BGL_OBJECT_WIDENING_SET(BgL_auxz00_2687, BgL_auxz00_2689);
							}}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_obj2224z00_420),
								BGl_classzd2numzd2zz__objectz00
								(BGl_caliasz00zzforeign_ctypez00));
							BgL_obj2224z00_420;
						}
						return BgL_ctypez00_419;
					}
			}
		}
	}



/* _declare-c-alias! */
	obj_t BGl__declarezd2czd2aliasz12z12zzforeign_ctypez00(obj_t BgL_envz00_2197,
		obj_t BgL_idz00_2198, obj_t BgL_expz00_2199, obj_t BgL_namez00_2200)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 130 */
			return
				(obj_t) (BGl_declarezd2czd2aliasz12z12zzforeign_ctypez00(BgL_idz00_2198,
					BgL_expz00_2199, BgL_namez00_2200));
		}
	}



/* declare-c-enum! */
	BgL_typez00_bglt BGl_declarezd2czd2enumz12z12zzforeign_ctypez00(obj_t
		BgL_idz00_9, obj_t BgL_expz00_10, obj_t BgL_namez00_11)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 142 */
			{	/* Foreign/ctype.scm 144 */
				obj_t BgL_cobjz00_425;

				BgL_cobjz00_425 = BGl_za2cobjza2z00zztype_cachez00;
				{	/* Foreign/ctype.scm 144 */
					obj_t BgL_objz00_426;

					BgL_objz00_426 = BGl_za2objza2z00zztype_cachez00;
					{	/* Foreign/ctype.scm 145 */
						obj_t BgL_bidz00_427;

						{	/* Foreign/ctype.scm 146 */
							obj_t BgL_arg2377z00_439;

							{	/* Foreign/ctype.scm 146 */
								obj_t BgL_arg2383z00_440;

								obj_t BgL_arg2390z00_441;

								{	/* Foreign/ctype.scm 146 */
									obj_t BgL_res3005z00_1107;

									{	/* Foreign/ctype.scm 146 */
										obj_t BgL_symbolz00_1105;

										BgL_symbolz00_1105 = CNST_TABLE_REF(((long) 10));
										{	/* Foreign/ctype.scm 146 */
											obj_t BgL_arg2063z00_1106;

											BgL_arg2063z00_1106 =
												SYMBOL_TO_STRING(BgL_symbolz00_1105);
											BgL_res3005z00_1107 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_1106);
									}}
									BgL_arg2383z00_440 = BgL_res3005z00_1107;
								}
								{	/* Foreign/ctype.scm 146 */
									obj_t BgL_res3006z00_1110;

									{	/* Foreign/ctype.scm 146 */
										obj_t BgL_arg2063z00_1109;

										BgL_arg2063z00_1109 = SYMBOL_TO_STRING(BgL_idz00_9);
										BgL_res3006z00_1110 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_1109);
									}
									BgL_arg2390z00_441 = BgL_res3006z00_1110;
								}
								{	/* Foreign/ctype.scm 146 */
									obj_t BgL_list2391z00_442;

									{	/* Foreign/ctype.scm 146 */
										obj_t BgL_arg2396z00_443;

										BgL_arg2396z00_443 = MAKE_PAIR(BgL_arg2390z00_441, BNIL);
										BgL_list2391z00_442 =
											MAKE_PAIR(BgL_arg2383z00_440, BgL_arg2396z00_443);
									}
									BgL_arg2377z00_439 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list2391z00_442);
							}}
							BgL_bidz00_427 =
								string_to_symbol(BSTRING_TO_STRING(BgL_arg2377z00_439));
						}
						{	/* Foreign/ctype.scm 146 */
							BgL_typez00_bglt BgL_ctypez00_428;

							BgL_ctypez00_428 =
								BGl_declarezd2subtypez12zc0zztype_envz00(BgL_idz00_9,
								BgL_namez00_11, CNST_TABLE_REF(((long) 11)),
								CNST_TABLE_REF(((long) 9)));
							{	/* Foreign/ctype.scm 147 */
								BgL_typez00_bglt BgL_btypez00_429;

								{	/* Foreign/ctype.scm 148 */
									obj_t BgL_arg2357z00_436;

									obj_t BgL_arg2364z00_437;

									obj_t BgL_arg2370z00_438;

									{
										BgL_typez00_bglt BgL_auxz00_2710;

										BgL_auxz00_2710 = (BgL_typez00_bglt) (BgL_objz00_426);
										BgL_arg2357z00_436 =
											(((BgL_typez00_bglt) CREF(BgL_auxz00_2710))->BgL_namez00);
									}
									BgL_arg2364z00_437 = CNST_TABLE_REF(((long) 12));
									BgL_arg2370z00_438 = CNST_TABLE_REF(((long) 13));
									BgL_btypez00_429 =
										BGl_declarezd2subtypez12zc0zztype_envz00(BgL_bidz00_427,
										BgL_arg2357z00_436, BgL_arg2364z00_437, BgL_arg2370z00_438);
								}
								{	/* Foreign/ctype.scm 148 */

									BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
										(BGl_makezd2foreignzd2coercersz00zzforeign_ctypez00
										(BGl_stringzd2sanszd2z42z42zztype_toolsz00(BgL_namez00_11),
											BgL_idz00_9, BgL_bidz00_427));
									{	/* Foreign/ctype.scm 154 */
										BgL_typez00_bglt BgL_obj2225z00_432;

										BgL_obj2225z00_432 = ((BgL_typez00_bglt) BgL_ctypez00_428);
										{	/* Foreign/ctype.scm 154 */
											BgL_cenumz00_bglt BgL_arg2338z00_433;

											{	/* Foreign/ctype.scm 154 */
												obj_t BgL_arg2344z00_434;

												BgL_arg2344z00_434 = CDR(BgL_expz00_10);
												{	/* Foreign/ctype.scm 154 */
													BgL_cenumz00_bglt BgL_res3008z00_1123;

													{	/* Foreign/ctype.scm 154 */
														BgL_cenumz00_bglt BgL_new1702z00_1116;

														BgL_new1702z00_1116 =
															((BgL_cenumz00_bglt) BREF(GC_MALLOC(sizeof(struct
																		BgL_cenumz00_bgl))));
														{	/* Foreign/ctype.scm 154 */
															BgL_cenumz00_bglt BgL_res3007z00_1122;

															{	/* Foreign/ctype.scm 154 */
																BgL_cenumz00_bglt BgL_new1725z00_1117;

																BgL_new1725z00_1117 = BgL_new1702z00_1116;
																{	/* Foreign/ctype.scm 154 */
																	BgL_typez00_bglt BgL_btype1723z00_1120;

																	obj_t BgL_literals1724z00_1121;

																	BgL_btype1723z00_1120 = BgL_btypez00_429;
																	BgL_literals1724z00_1121 = BgL_arg2344z00_434;
																	((((BgL_cenumz00_bglt)
																				CREF(BgL_new1725z00_1117))->
																			BgL_btypez00) =
																		((BgL_typez00_bglt) BgL_btype1723z00_1120),
																		BUNSPEC);
																	((((BgL_cenumz00_bglt)
																				CREF(BgL_new1725z00_1117))->
																			BgL_literalsz00) =
																		((obj_t) BgL_literals1724z00_1121),
																		BUNSPEC);
																	BgL_res3007z00_1122 = BgL_new1725z00_1117;
															}} BgL_res3007z00_1122;
														}
														BgL_res3008z00_1123 = BgL_new1702z00_1116;
													}
													BgL_arg2338z00_433 = BgL_res3008z00_1123;
											}}
											{	/* Foreign/ctype.scm 154 */
												obj_t BgL_auxz00_2726;

												BgL_objectz00_bglt BgL_auxz00_2724;

												BgL_auxz00_2726 = (obj_t) (BgL_arg2338z00_433);
												BgL_auxz00_2724 =
													(BgL_objectz00_bglt) (BgL_obj2225z00_432);
												BGL_OBJECT_WIDENING_SET(BgL_auxz00_2724,
													BgL_auxz00_2726);
										}}
										BGL_OBJECT_CLASS_NUM_SET(
											(BgL_objectz00_bglt) (BgL_obj2225z00_432),
											BGl_classzd2numzd2zz__objectz00
											(BGl_cenumz00zzforeign_ctypez00));
										BgL_obj2225z00_432;
									}
									return BgL_ctypez00_428;
								}
							}
						}
					}
				}
			}
		}
	}



/* declare-c-opaque! */
	BgL_typez00_bglt BGl_declarezd2czd2opaquez12z12zzforeign_ctypez00(obj_t
		BgL_idz00_12, obj_t BgL_expz00_13, obj_t BgL_namez00_14)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 160 */
			{	/* Foreign/ctype.scm 162 */
				obj_t BgL_cobjz00_444;

				BgL_cobjz00_444 = BGl_za2cobjza2z00zztype_cachez00;
				{	/* Foreign/ctype.scm 162 */
					obj_t BgL_objz00_445;

					BgL_objz00_445 = BGl_za2objza2z00zztype_cachez00;
					{	/* Foreign/ctype.scm 163 */
						obj_t BgL_bidz00_446;

						{	/* Foreign/ctype.scm 164 */
							obj_t BgL_arg2437z00_457;

							{	/* Foreign/ctype.scm 164 */
								obj_t BgL_arg2438z00_458;

								obj_t BgL_arg2444z00_459;

								{	/* Foreign/ctype.scm 164 */
									obj_t BgL_res3009z00_1128;

									{	/* Foreign/ctype.scm 164 */
										obj_t BgL_symbolz00_1126;

										BgL_symbolz00_1126 = CNST_TABLE_REF(((long) 10));
										{	/* Foreign/ctype.scm 164 */
											obj_t BgL_arg2063z00_1127;

											BgL_arg2063z00_1127 =
												SYMBOL_TO_STRING(BgL_symbolz00_1126);
											BgL_res3009z00_1128 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_1127);
									}}
									BgL_arg2438z00_458 = BgL_res3009z00_1128;
								}
								{	/* Foreign/ctype.scm 164 */
									obj_t BgL_res3010z00_1131;

									{	/* Foreign/ctype.scm 164 */
										obj_t BgL_arg2063z00_1130;

										BgL_arg2063z00_1130 = SYMBOL_TO_STRING(BgL_idz00_12);
										BgL_res3010z00_1131 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_1130);
									}
									BgL_arg2444z00_459 = BgL_res3010z00_1131;
								}
								{	/* Foreign/ctype.scm 164 */
									obj_t BgL_list2445z00_460;

									{	/* Foreign/ctype.scm 164 */
										obj_t BgL_arg2448z00_461;

										BgL_arg2448z00_461 = MAKE_PAIR(BgL_arg2444z00_459, BNIL);
										BgL_list2445z00_460 =
											MAKE_PAIR(BgL_arg2438z00_458, BgL_arg2448z00_461);
									}
									BgL_arg2437z00_457 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list2445z00_460);
							}}
							BgL_bidz00_446 =
								string_to_symbol(BSTRING_TO_STRING(BgL_arg2437z00_457));
						}
						{	/* Foreign/ctype.scm 164 */
							BgL_typez00_bglt BgL_ctypez00_447;

							BgL_ctypez00_447 =
								BGl_declarezd2subtypez12zc0zztype_envz00(BgL_idz00_12,
								BgL_namez00_14, CNST_TABLE_REF(((long) 11)),
								CNST_TABLE_REF(((long) 9)));
							{	/* Foreign/ctype.scm 165 */
								BgL_typez00_bglt BgL_btypez00_448;

								{	/* Foreign/ctype.scm 166 */
									obj_t BgL_arg2429z00_454;

									obj_t BgL_arg2430z00_455;

									obj_t BgL_arg2431z00_456;

									{
										BgL_typez00_bglt BgL_auxz00_2745;

										BgL_auxz00_2745 = (BgL_typez00_bglt) (BgL_objz00_445);
										BgL_arg2429z00_454 =
											(((BgL_typez00_bglt) CREF(BgL_auxz00_2745))->BgL_namez00);
									}
									BgL_arg2430z00_455 = CNST_TABLE_REF(((long) 12));
									BgL_arg2431z00_456 = CNST_TABLE_REF(((long) 13));
									BgL_btypez00_448 =
										BGl_declarezd2subtypez12zc0zztype_envz00(BgL_bidz00_446,
										BgL_arg2429z00_454, BgL_arg2430z00_455, BgL_arg2431z00_456);
								}
								{	/* Foreign/ctype.scm 166 */

									BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
										(BGl_makezd2foreignzd2coercersz00zzforeign_ctypez00
										(BGl_stringzd2sanszd2z42z42zztype_toolsz00(BgL_namez00_14),
											BgL_idz00_12, BgL_bidz00_446));
									{	/* Foreign/ctype.scm 172 */
										BgL_typez00_bglt BgL_obj2226z00_451;

										BgL_obj2226z00_451 = ((BgL_typez00_bglt) BgL_ctypez00_447);
										{	/* Foreign/ctype.scm 172 */
											BgL_copaquez00_bglt BgL_arg2416z00_452;

											{	/* Foreign/ctype.scm 172 */
												BgL_copaquez00_bglt BgL_res3012z00_1140;

												{	/* Foreign/ctype.scm 172 */
													BgL_copaquez00_bglt BgL_new1785z00_1135;

													BgL_new1785z00_1135 =
														((BgL_copaquez00_bglt) BREF(GC_MALLOC(sizeof(struct
																	BgL_copaquez00_bgl))));
													{	/* Foreign/ctype.scm 172 */
														BgL_copaquez00_bglt BgL_res3011z00_1139;

														{	/* Foreign/ctype.scm 172 */
															BgL_copaquez00_bglt BgL_new1806z00_1136;

															BgL_new1806z00_1136 = BgL_new1785z00_1135;
															{	/* Foreign/ctype.scm 172 */
																BgL_typez00_bglt BgL_btype1805z00_1138;

																BgL_btype1805z00_1138 = BgL_btypez00_448;
																((((BgL_copaquez00_bglt)
																			CREF(BgL_new1806z00_1136))->
																		BgL_btypez00) =
																	((BgL_typez00_bglt) BgL_btype1805z00_1138),
																	BUNSPEC);
																BgL_res3011z00_1139 = BgL_new1806z00_1136;
														}} BgL_res3011z00_1139;
													}
													BgL_res3012z00_1140 = BgL_new1785z00_1135;
												}
												BgL_arg2416z00_452 = BgL_res3012z00_1140;
											}
											{	/* Foreign/ctype.scm 172 */
												obj_t BgL_auxz00_2759;

												BgL_objectz00_bglt BgL_auxz00_2757;

												BgL_auxz00_2759 = (obj_t) (BgL_arg2416z00_452);
												BgL_auxz00_2757 =
													(BgL_objectz00_bglt) (BgL_obj2226z00_451);
												BGL_OBJECT_WIDENING_SET(BgL_auxz00_2757,
													BgL_auxz00_2759);
										}}
										BGL_OBJECT_CLASS_NUM_SET(
											(BgL_objectz00_bglt) (BgL_obj2226z00_451),
											BGl_classzd2numzd2zz__objectz00
											(BGl_copaquez00zzforeign_ctypez00));
										BgL_obj2226z00_451;
									}
									return BgL_ctypez00_447;
								}
							}
						}
					}
				}
			}
		}
	}



/* declare-c-function! */
	BgL_typez00_bglt BGl_declarezd2czd2functionz12z12zzforeign_ctypez00(obj_t
		BgL_idz00_15, obj_t BgL_expz00_16, obj_t BgL_namez00_17)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 178 */
			{	/* Foreign/ctype.scm 180 */
				obj_t BgL_cobjz00_462;

				BgL_cobjz00_462 = BGl_za2cobjza2z00zztype_cachez00;
				{	/* Foreign/ctype.scm 180 */
					obj_t BgL_objz00_463;

					BgL_objz00_463 = BGl_za2objza2z00zztype_cachez00;
					{	/* Foreign/ctype.scm 181 */
						obj_t BgL_bidz00_464;

						{	/* Foreign/ctype.scm 182 */
							obj_t BgL_arg2504z00_497;

							{	/* Foreign/ctype.scm 182 */
								obj_t BgL_arg2505z00_498;

								obj_t BgL_arg2523z00_499;

								{	/* Foreign/ctype.scm 182 */
									obj_t BgL_res3013z00_1145;

									{	/* Foreign/ctype.scm 182 */
										obj_t BgL_symbolz00_1143;

										BgL_symbolz00_1143 = CNST_TABLE_REF(((long) 10));
										{	/* Foreign/ctype.scm 182 */
											obj_t BgL_arg2063z00_1144;

											BgL_arg2063z00_1144 =
												SYMBOL_TO_STRING(BgL_symbolz00_1143);
											BgL_res3013z00_1145 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_1144);
									}}
									BgL_arg2505z00_498 = BgL_res3013z00_1145;
								}
								{	/* Foreign/ctype.scm 182 */
									obj_t BgL_res3014z00_1148;

									{	/* Foreign/ctype.scm 182 */
										obj_t BgL_arg2063z00_1147;

										BgL_arg2063z00_1147 = SYMBOL_TO_STRING(BgL_idz00_15);
										BgL_res3014z00_1148 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_1147);
									}
									BgL_arg2523z00_499 = BgL_res3014z00_1148;
								}
								{	/* Foreign/ctype.scm 182 */
									obj_t BgL_list2524z00_500;

									{	/* Foreign/ctype.scm 182 */
										obj_t BgL_arg2529z00_501;

										BgL_arg2529z00_501 = MAKE_PAIR(BgL_arg2523z00_499, BNIL);
										BgL_list2524z00_500 =
											MAKE_PAIR(BgL_arg2505z00_498, BgL_arg2529z00_501);
									}
									BgL_arg2504z00_497 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list2524z00_500);
							}}
							BgL_bidz00_464 =
								string_to_symbol(BSTRING_TO_STRING(BgL_arg2504z00_497));
						}
						{	/* Foreign/ctype.scm 182 */
							BgL_typez00_bglt BgL_ctypez00_465;

							BgL_ctypez00_465 =
								BGl_declarezd2subtypez12zc0zztype_envz00(BgL_idz00_15,
								BgL_namez00_17, CNST_TABLE_REF(((long) 11)),
								CNST_TABLE_REF(((long) 9)));
							{	/* Foreign/ctype.scm 183 */
								BgL_typez00_bglt BgL_btypez00_466;

								{	/* Foreign/ctype.scm 184 */
									obj_t BgL_arg2492z00_494;

									obj_t BgL_arg2493z00_495;

									obj_t BgL_arg2503z00_496;

									{
										BgL_typez00_bglt BgL_auxz00_2778;

										BgL_auxz00_2778 = (BgL_typez00_bglt) (BgL_objz00_463);
										BgL_arg2492z00_494 =
											(((BgL_typez00_bglt) CREF(BgL_auxz00_2778))->BgL_namez00);
									}
									BgL_arg2493z00_495 = CNST_TABLE_REF(((long) 12));
									BgL_arg2503z00_496 = CNST_TABLE_REF(((long) 13));
									BgL_btypez00_466 =
										BGl_declarezd2subtypez12zc0zztype_envz00(BgL_bidz00_464,
										BgL_arg2492z00_494, BgL_arg2493z00_495, BgL_arg2503z00_496);
								}
								{	/* Foreign/ctype.scm 184 */
									long BgL_arityz00_467;

									BgL_arityz00_467 =
										BGl_foreignzd2arityzd2zztools_argsz00(CAR(CDR(CDR
												(BgL_expz00_16))));
									{	/* Foreign/ctype.scm 185 */
										obj_t BgL_treszd2idzd2_468;

										BgL_treszd2idzd2_468 = CAR(CDR(BgL_expz00_16));
										{	/* Foreign/ctype.scm 186 */
											obj_t BgL_targszd2idzd2_469;

											BgL_targszd2idzd2_469 =
												BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(CAR(CDR
													(CDR(BgL_expz00_16))));
											{	/* Foreign/ctype.scm 187 */
												obj_t BgL_locz00_470;

												BgL_locz00_470 =
													BGl_findzd2locationzd2zztools_locationz00
													(BgL_expz00_16);
												{	/* Foreign/ctype.scm 188 */

													BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
														(BGl_makezd2foreignzd2coercersz00zzforeign_ctypez00
														(BGl_stringzd2sanszd2z42z42zztype_toolsz00
															(BgL_namez00_17), BgL_idz00_15, BgL_bidz00_464));
													{	/* Foreign/ctype.scm 194 */
														BgL_typez00_bglt BgL_obj2227z00_473;

														BgL_obj2227z00_473 =
															((BgL_typez00_bglt) BgL_ctypez00_465);
														{	/* Foreign/ctype.scm 197 */
															BgL_cfunctionz00_bglt BgL_arg2453z00_474;

															{	/* Foreign/ctype.scm 197 */
																BgL_typez00_bglt BgL_arg2454z00_475;

																obj_t BgL_arg2459z00_476;

																BgL_arg2454z00_475 =
																	BGl_usezd2typez12zc0zztype_envz00
																	(BgL_treszd2idzd2_468, BgL_locz00_470);
																if (NULLP(BgL_targszd2idzd2_469))
																	{	/* Foreign/ctype.scm 198 */
																		BgL_arg2459z00_476 = BNIL;
																	}
																else
																	{	/* Foreign/ctype.scm 198 */
																		obj_t BgL_head2233z00_479;

																		BgL_head2233z00_479 = MAKE_PAIR(BNIL, BNIL);
																		{
																			obj_t BgL_l2231z00_481;

																			obj_t BgL_tail2234z00_482;

																			BgL_l2231z00_481 = BgL_targszd2idzd2_469;
																			BgL_tail2234z00_482 = BgL_head2233z00_479;
																		BgL_zc3anonymousza32461ze3z83_483:
																			if (NULLP(BgL_l2231z00_481))
																				{	/* Foreign/ctype.scm 198 */
																					BgL_arg2459z00_476 =
																						CDR(BgL_head2233z00_479);
																				}
																			else
																				{	/* Foreign/ctype.scm 198 */
																					obj_t BgL_newtail2235z00_485;

																					{	/* Foreign/ctype.scm 198 */
																						BgL_typez00_bglt BgL_arg2471z00_487;

																						BgL_arg2471z00_487 =
																							BGl_usezd2typez12zc0zztype_envz00
																							(CAR(BgL_l2231z00_481),
																							BgL_locz00_470);
																						BgL_newtail2235z00_485 =
																							MAKE_PAIR((obj_t)
																							(BgL_arg2471z00_487), BNIL);
																					}
																					SET_CDR(BgL_tail2234z00_482,
																						BgL_newtail2235z00_485);
																					{
																						obj_t BgL_tail2234z00_2813;

																						obj_t BgL_l2231z00_2811;

																						BgL_l2231z00_2811 =
																							CDR(BgL_l2231z00_481);
																						BgL_tail2234z00_2813 =
																							BgL_newtail2235z00_485;
																						BgL_tail2234z00_482 =
																							BgL_tail2234z00_2813;
																						BgL_l2231z00_481 =
																							BgL_l2231z00_2811;
																						goto
																							BgL_zc3anonymousza32461ze3z83_483;
																					}
																				}
																		}
																	}
																{	/* Foreign/ctype.scm 194 */
																	BgL_cfunctionz00_bglt BgL_res3016z00_1193;

																	{	/* Foreign/ctype.scm 194 */
																		BgL_cfunctionz00_bglt BgL_new1865z00_1182;

																		BgL_new1865z00_1182 =
																			((BgL_cfunctionz00_bglt)
																			BREF(GC_MALLOC(sizeof(struct
																						BgL_cfunctionz00_bgl))));
																		{	/* Foreign/ctype.scm 194 */
																			BgL_cfunctionz00_bglt BgL_res3015z00_1192;

																			{	/* Foreign/ctype.scm 194 */
																				BgL_cfunctionz00_bglt
																					BgL_new1892z00_1183;
																				BgL_new1892z00_1183 =
																					BgL_new1865z00_1182;
																				{	/* Foreign/ctype.scm 194 */
																					BgL_typez00_bglt
																						BgL_btype1888z00_1188;
																					long BgL_arity1889z00_1189;

																					BgL_typez00_bglt
																						BgL_typezd2res1890zd2_1190;
																					obj_t BgL_typezd2args1891zd2_1191;

																					BgL_btype1888z00_1188 =
																						BgL_btypez00_466;
																					BgL_arity1889z00_1189 =
																						BgL_arityz00_467;
																					BgL_typezd2res1890zd2_1190 =
																						BgL_arg2454z00_475;
																					BgL_typezd2args1891zd2_1191 =
																						BgL_arg2459z00_476;
																					((((BgL_cfunctionz00_bglt)
																								CREF(BgL_new1892z00_1183))->
																							BgL_btypez00) =
																						((BgL_typez00_bglt)
																							BgL_btype1888z00_1188), BUNSPEC);
																					((((BgL_cfunctionz00_bglt)
																								CREF(BgL_new1892z00_1183))->
																							BgL_arityz00) =
																						((long) BgL_arity1889z00_1189),
																						BUNSPEC);
																					((((BgL_cfunctionz00_bglt)
																								CREF(BgL_new1892z00_1183))->
																							BgL_typezd2reszd2) =
																						((BgL_typez00_bglt)
																							BgL_typezd2res1890zd2_1190),
																						BUNSPEC);
																					((((BgL_cfunctionz00_bglt)
																								CREF(BgL_new1892z00_1183))->
																							BgL_typezd2argszd2) =
																						((obj_t)
																							BgL_typezd2args1891zd2_1191),
																						BUNSPEC);
																					BgL_res3015z00_1192 =
																						BgL_new1892z00_1183;
																			}} BgL_res3015z00_1192;
																		}
																		BgL_res3016z00_1193 = BgL_new1865z00_1182;
																	}
																	BgL_arg2453z00_474 = BgL_res3016z00_1193;
															}}
															{	/* Foreign/ctype.scm 194 */
																obj_t BgL_auxz00_2821;

																BgL_objectz00_bglt BgL_auxz00_2819;

																BgL_auxz00_2821 = (obj_t) (BgL_arg2453z00_474);
																BgL_auxz00_2819 =
																	(BgL_objectz00_bglt) (BgL_obj2227z00_473);
																BGL_OBJECT_WIDENING_SET(BgL_auxz00_2819,
																	BgL_auxz00_2821);
														}}
														BGL_OBJECT_CLASS_NUM_SET(
															(BgL_objectz00_bglt) (BgL_obj2227z00_473),
															BGl_classzd2numzd2zz__objectz00
															(BGl_cfunctionz00zzforeign_ctypez00));
														BgL_obj2227z00_473;
													}
													return BgL_ctypez00_465;
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



/* declare-c-pointer! */
	BgL_typez00_bglt BGl_declarezd2czd2pointerz12z12zzforeign_ctypez00(obj_t
		BgL_idz00_18, obj_t BgL_expz00_19, obj_t BgL_namez00_20)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 205 */
			{	/* Foreign/ctype.scm 207 */
				BgL_typez00_bglt BgL_pointedz00_502;

				BgL_pointedz00_502 =
					BGl_findzd2typezd2zztype_envz00(CAR(CDR(BgL_expz00_19)));
				{	/* Foreign/ctype.scm 207 */
					obj_t BgL_pointerz00_503;

					BgL_pointerz00_503 =
						(((BgL_typez00_bglt) CREF(BgL_pointedz00_502))->
						BgL_pointedzd2tozd2byz00);
					{	/* Foreign/ctype.scm 208 */

						if (BGl_iszd2azf3z21zz__objectz00(BgL_pointerz00_503,
								BGl_typez00zztype_typez00))
							{	/* Foreign/ctype.scm 212 */
								BgL_typez00_bglt BgL_aliasz00_505;

								{	/* Foreign/ctype.scm 213 */
									obj_t BgL_arg2554z00_512;

									obj_t BgL_arg2555z00_513;

									{
										BgL_typez00_bglt BgL_auxz00_2833;

										BgL_auxz00_2833 = (BgL_typez00_bglt) (BgL_pointerz00_503);
										BgL_arg2554z00_512 =
											(((BgL_typez00_bglt) CREF(BgL_auxz00_2833))->BgL_idz00);
									}
									BgL_arg2555z00_513 =
										BGl_makezd2pointerzd2tozd2namezd2zztype_toolsz00
										(BgL_pointedz00_502);
									BgL_aliasz00_505 =
										BGl_declarezd2czd2aliasz12z12zzforeign_ctypez00
										(BgL_idz00_18, BgL_arg2554z00_512, BgL_arg2555z00_513);
								}
								{	/* Foreign/ctype.scm 215 */
									bool_t BgL_testz00_2838;

									if ((CAR(BgL_expz00_19) == CNST_TABLE_REF(((long) 4))))
										{	/* Foreign/ctype.scm 215 */
											bool_t BgL_testz00_2843;

											{	/* Foreign/ctype.scm 215 */
												BgL_cptrz00_bglt BgL_obj1996z00_1204;

												BgL_obj1996z00_1204 =
													(BgL_cptrz00_bglt) (
													(BgL_typez00_bglt) (BgL_pointerz00_503));
												{
													obj_t BgL_auxz00_2846;

													{	/* Foreign/ctype.scm 215 */
														BgL_objectz00_bglt BgL_auxz00_2847;

														BgL_auxz00_2847 =
															(BgL_objectz00_bglt) (BgL_obj1996z00_1204);
														BgL_auxz00_2846 =
															BGL_OBJECT_WIDENING(BgL_auxz00_2847);
													}
													BgL_testz00_2843 =
														(((BgL_cptrz00_bglt) CREF(BgL_auxz00_2846))->
														BgL_arrayzf3zf3);
											}}
											if (BgL_testz00_2843)
												{	/* Foreign/ctype.scm 215 */
													BgL_testz00_2838 = ((bool_t) 0);
												}
											else
												{	/* Foreign/ctype.scm 215 */
													BgL_testz00_2838 = ((bool_t) 1);
												}
										}
									else
										{	/* Foreign/ctype.scm 215 */
											BgL_testz00_2838 = ((bool_t) 0);
										}
									if (BgL_testz00_2838)
										{	/* Foreign/ctype.scm 215 */
											{
												obj_t BgL_auxz00_2851;

												BgL_auxz00_2851 =
													BGl_stringzd2sanszd2z42z42zztype_toolsz00
													(BgL_namez00_20);
												((((BgL_typez00_bglt) CREF(BgL_aliasz00_505))->
														BgL_siza7eza7) =
													((obj_t) BgL_auxz00_2851), BUNSPEC);
											}
											{	/* Foreign/ctype.scm 218 */
												BgL_caliasz00_bglt BgL_obj1655z00_1207;

												bool_t BgL_val1654z00_1208;

												BgL_obj1655z00_1207 =
													(BgL_caliasz00_bglt) (BgL_aliasz00_505);
												BgL_val1654z00_1208 = ((bool_t) 1);
												{
													obj_t BgL_auxz00_2855;

													{	/* Foreign/ctype.scm 218 */
														BgL_objectz00_bglt BgL_auxz00_2856;

														BgL_auxz00_2856 =
															(BgL_objectz00_bglt) (BgL_obj1655z00_1207);
														BgL_auxz00_2855 =
															BGL_OBJECT_WIDENING(BgL_auxz00_2856);
													}
													((((BgL_caliasz00_bglt) CREF(BgL_auxz00_2855))->
															BgL_arrayzf3zf3) =
														((bool_t) BgL_val1654z00_1208), BUNSPEC);
												}
											}
										}
									else
										{	/* Foreign/ctype.scm 215 */
											BFALSE;
										}
								}
								return BgL_aliasz00_505;
							}
						else
							{	/* Foreign/ctype.scm 222 */
								obj_t BgL_cobjz00_514;

								BgL_cobjz00_514 = BGl_za2cobjza2z00zztype_cachez00;
								{	/* Foreign/ctype.scm 222 */
									obj_t BgL_objz00_515;

									BgL_objz00_515 = BGl_za2objza2z00zztype_cachez00;
									{	/* Foreign/ctype.scm 223 */
										obj_t BgL_nobjz00_516;

										{
											BgL_typez00_bglt BgL_auxz00_2860;

											BgL_auxz00_2860 = (BgL_typez00_bglt) (BgL_objz00_515);
											BgL_nobjz00_516 =
												(((BgL_typez00_bglt) CREF(BgL_auxz00_2860))->
												BgL_namez00);
										}
										{	/* Foreign/ctype.scm 224 */
											obj_t BgL_bidz00_517;

											{	/* Foreign/ctype.scm 225 */
												obj_t BgL_arg2564z00_530;

												{	/* Foreign/ctype.scm 225 */
													obj_t BgL_arg2565z00_531;

													obj_t BgL_arg2566z00_532;

													{	/* Foreign/ctype.scm 225 */
														obj_t BgL_res3017z00_1212;

														{	/* Foreign/ctype.scm 225 */
															obj_t BgL_symbolz00_1210;

															BgL_symbolz00_1210 = CNST_TABLE_REF(((long) 10));
															{	/* Foreign/ctype.scm 225 */
																obj_t BgL_arg2063z00_1211;

																BgL_arg2063z00_1211 =
																	SYMBOL_TO_STRING(BgL_symbolz00_1210);
																BgL_res3017z00_1212 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_1211);
														}}
														BgL_arg2565z00_531 = BgL_res3017z00_1212;
													}
													{	/* Foreign/ctype.scm 225 */
														obj_t BgL_res3018z00_1215;

														{	/* Foreign/ctype.scm 225 */
															obj_t BgL_arg2063z00_1214;

															BgL_arg2063z00_1214 =
																SYMBOL_TO_STRING(BgL_idz00_18);
															BgL_res3018z00_1215 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_1214);
														}
														BgL_arg2566z00_532 = BgL_res3018z00_1215;
													}
													{	/* Foreign/ctype.scm 225 */
														obj_t BgL_list2567z00_533;

														{	/* Foreign/ctype.scm 225 */
															obj_t BgL_arg2571z00_534;

															BgL_arg2571z00_534 =
																MAKE_PAIR(BgL_arg2566z00_532, BNIL);
															BgL_list2567z00_533 =
																MAKE_PAIR(BgL_arg2565z00_531,
																BgL_arg2571z00_534);
														}
														BgL_arg2564z00_530 =
															BGl_stringzd2appendzd2zz__r4_strings_6_7z00
															(BgL_list2567z00_533);
												}}
												BgL_bidz00_517 =
													string_to_symbol(BSTRING_TO_STRING
													(BgL_arg2564z00_530));
											}
											{	/* Foreign/ctype.scm 225 */
												obj_t BgL_tnamez00_518;

												BgL_tnamez00_518 =
													BGl_makezd2pointerzd2tozd2namezd2zztype_toolsz00
													(BgL_pointedz00_502);
												{	/* Foreign/ctype.scm 226 */
													BgL_typez00_bglt BgL_ctypez00_519;

													BgL_ctypez00_519 =
														BGl_declarezd2subtypez12zc0zztype_envz00
														(BgL_idz00_18, BgL_tnamez00_518,
														CNST_TABLE_REF(((long) 11)),
														CNST_TABLE_REF(((long) 9)));
													{	/* Foreign/ctype.scm 227 */
														BgL_typez00_bglt BgL_btypez00_520;

														BgL_btypez00_520 =
															BGl_declarezd2subtypez12zc0zztype_envz00
															(BgL_bidz00_517, BgL_nobjz00_516,
															CNST_TABLE_REF(((long) 12)),
															CNST_TABLE_REF(((long) 13)));
														{	/* Foreign/ctype.scm 228 */

															{
																obj_t BgL_auxz00_2880;

																BgL_auxz00_2880 =
																	BGl_stringzd2sanszd2z42z42zztype_toolsz00
																	(BgL_namez00_20);
																((((BgL_typez00_bglt) CREF(BgL_ctypez00_519))->
																		BgL_siza7eza7) =
																	((obj_t) BgL_auxz00_2880), BUNSPEC);
															}
															BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																(BGl_makezd2foreignzd2coercersz00zzforeign_ctypez00
																(BGl_stringzd2sanszd2z42z42zztype_toolsz00
																	(BgL_namez00_20), BgL_idz00_18,
																	BgL_bidz00_517));
															{
																obj_t BgL_auxz00_2886;

																BgL_auxz00_2886 = (obj_t) (BgL_ctypez00_519);
																((((BgL_typez00_bglt)
																			CREF(BgL_pointedz00_502))->
																		BgL_pointedzd2tozd2byz00) =
																	((obj_t) BgL_auxz00_2886), BUNSPEC);
															}
															{	/* Foreign/ctype.scm 238 */
																BgL_typez00_bglt BgL_obj2228z00_524;

																BgL_obj2228z00_524 =
																	((BgL_typez00_bglt) BgL_ctypez00_519);
																{	/* Foreign/ctype.scm 241 */
																	BgL_cptrz00_bglt BgL_arg2559z00_525;

																	{	/* Foreign/ctype.scm 241 */
																		bool_t BgL_arg2560z00_526;

																		BgL_arg2560z00_526 =
																			(CAR(BgL_expz00_19) ==
																			CNST_TABLE_REF(((long) 4)));
																		{	/* Foreign/ctype.scm 238 */
																			BgL_cptrz00_bglt BgL_res3020z00_1234;

																			{	/* Foreign/ctype.scm 238 */
																				BgL_cptrz00_bglt BgL_new1956z00_1225;

																				BgL_new1956z00_1225 =
																					((BgL_cptrz00_bglt)
																					BREF(GC_MALLOC(sizeof(struct
																								BgL_cptrz00_bgl))));
																				{	/* Foreign/ctype.scm 238 */
																					BgL_cptrz00_bglt BgL_res3019z00_1233;

																					{	/* Foreign/ctype.scm 238 */
																						BgL_cptrz00_bglt
																							BgL_new1981z00_1226;
																						BgL_new1981z00_1226 =
																							BgL_new1956z00_1225;
																						{	/* Foreign/ctype.scm 238 */
																							BgL_typez00_bglt
																								BgL_btype1978z00_1230;
																							BgL_typez00_bglt
																								BgL_pointzd2to1979zd2_1231;
																							bool_t BgL_arrayzf31980zf3_1232;

																							BgL_btype1978z00_1230 =
																								BgL_btypez00_520;
																							BgL_pointzd2to1979zd2_1231 =
																								BgL_pointedz00_502;
																							BgL_arrayzf31980zf3_1232 =
																								BgL_arg2560z00_526;
																							((((BgL_cptrz00_bglt)
																										CREF(BgL_new1981z00_1226))->
																									BgL_btypez00) =
																								((BgL_typez00_bglt)
																									BgL_btype1978z00_1230),
																								BUNSPEC);
																							((((BgL_cptrz00_bglt)
																										CREF(BgL_new1981z00_1226))->
																									BgL_pointzd2tozd2) =
																								((BgL_typez00_bglt)
																									BgL_pointzd2to1979zd2_1231),
																								BUNSPEC);
																							((((BgL_cptrz00_bglt)
																										CREF(BgL_new1981z00_1226))->
																									BgL_arrayzf3zf3) =
																								((bool_t)
																									BgL_arrayzf31980zf3_1232),
																								BUNSPEC);
																							BgL_res3019z00_1233 =
																								BgL_new1981z00_1226;
																					}} BgL_res3019z00_1233;
																				}
																				BgL_res3020z00_1234 =
																					BgL_new1956z00_1225;
																			}
																			BgL_arg2559z00_525 = BgL_res3020z00_1234;
																	}}
																	{	/* Foreign/ctype.scm 238 */
																		obj_t BgL_auxz00_2899;

																		BgL_objectz00_bglt BgL_auxz00_2897;

																		BgL_auxz00_2899 =
																			(obj_t) (BgL_arg2559z00_525);
																		BgL_auxz00_2897 =
																			(BgL_objectz00_bglt) (BgL_obj2228z00_524);
																		BGL_OBJECT_WIDENING_SET(BgL_auxz00_2897,
																			BgL_auxz00_2899);
																}}
																BGL_OBJECT_CLASS_NUM_SET(
																	(BgL_objectz00_bglt) (BgL_obj2228z00_524),
																	BGl_classzd2numzd2zz__objectz00
																	(BGl_cptrz00zzforeign_ctypez00));
																BgL_obj2228z00_524;
															}
															return BgL_ctypez00_519;
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



/* declare-c-struct! */
	BgL_typez00_bglt BGl_declarezd2czd2structz12z12zzforeign_ctypez00(obj_t
		BgL_idz00_21, obj_t BgL_expz00_22, obj_t BgL_namez00_23)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 247 */
			{	/* Foreign/ctype.scm 249 */
				obj_t BgL_cobjz00_536;

				BgL_cobjz00_536 = BGl_za2cobjza2z00zztype_cachez00;
				{	/* Foreign/ctype.scm 249 */
					obj_t BgL_objz00_537;

					BgL_objz00_537 = BGl_za2objza2z00zztype_cachez00;
					{	/* Foreign/ctype.scm 250 */
						obj_t BgL_bidz00_538;

						{	/* Foreign/ctype.scm 251 */
							obj_t BgL_arg2648z00_558;

							{	/* Foreign/ctype.scm 251 */
								obj_t BgL_arg2649z00_559;

								obj_t BgL_arg2650z00_560;

								{	/* Foreign/ctype.scm 251 */
									obj_t BgL_res3021z00_1239;

									{	/* Foreign/ctype.scm 251 */
										obj_t BgL_symbolz00_1237;

										BgL_symbolz00_1237 = CNST_TABLE_REF(((long) 10));
										{	/* Foreign/ctype.scm 251 */
											obj_t BgL_arg2063z00_1238;

											BgL_arg2063z00_1238 =
												SYMBOL_TO_STRING(BgL_symbolz00_1237);
											BgL_res3021z00_1239 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_1238);
									}}
									BgL_arg2649z00_559 = BgL_res3021z00_1239;
								}
								{	/* Foreign/ctype.scm 251 */
									obj_t BgL_res3022z00_1242;

									{	/* Foreign/ctype.scm 251 */
										obj_t BgL_arg2063z00_1241;

										BgL_arg2063z00_1241 = SYMBOL_TO_STRING(BgL_idz00_21);
										BgL_res3022z00_1242 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_1241);
									}
									BgL_arg2650z00_560 = BgL_res3022z00_1242;
								}
								{	/* Foreign/ctype.scm 251 */
									obj_t BgL_list2651z00_561;

									{	/* Foreign/ctype.scm 251 */
										obj_t BgL_arg2652z00_562;

										BgL_arg2652z00_562 = MAKE_PAIR(BgL_arg2650z00_560, BNIL);
										BgL_list2651z00_561 =
											MAKE_PAIR(BgL_arg2649z00_559, BgL_arg2652z00_562);
									}
									BgL_arg2648z00_558 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list2651z00_561);
							}}
							BgL_bidz00_538 =
								string_to_symbol(BSTRING_TO_STRING(BgL_arg2648z00_558));
						}
						{	/* Foreign/ctype.scm 251 */
							BgL_typez00_bglt BgL_ctypez00_539;

							BgL_ctypez00_539 =
								BGl_declarezd2subtypez12zc0zztype_envz00(BgL_idz00_21,
								BgL_namez00_23, CNST_TABLE_REF(((long) 11)),
								CNST_TABLE_REF(((long) 9)));
							{	/* Foreign/ctype.scm 252 */

								((((BgL_typez00_bglt) CREF(BgL_ctypez00_539))->BgL_siza7eza7) =
									((obj_t) BgL_namez00_23), BUNSPEC);
								{	/* Foreign/ctype.scm 255 */
									BgL_typez00_bglt BgL_obj2229z00_540;

									BgL_obj2229z00_540 = ((BgL_typez00_bglt) BgL_ctypez00_539);
									{	/* Foreign/ctype.scm 256 */
										BgL_cstructz00_bglt BgL_arg2576z00_541;

										{	/* Foreign/ctype.scm 256 */
											bool_t BgL_arg2586z00_542;

											obj_t BgL_arg2587z00_543;

											BgL_arg2586z00_542 =
												(CAR(BgL_expz00_22) == CNST_TABLE_REF(((long) 5)));
											BgL_arg2587z00_543 = CDR(BgL_expz00_22);
											{	/* Foreign/ctype.scm 255 */
												BgL_cstructz00_bglt BgL_res3024z00_1260;

												{	/* Foreign/ctype.scm 255 */
													BgL_cstructz00_bglt BgL_new2043z00_1251;

													BgL_new2043z00_1251 =
														((BgL_cstructz00_bglt) BREF(GC_MALLOC(sizeof(struct
																	BgL_cstructz00_bgl))));
													{	/* Foreign/ctype.scm 255 */
														BgL_cstructz00_bglt BgL_res3023z00_1259;

														{	/* Foreign/ctype.scm 255 */
															BgL_cstructz00_bglt BgL_new2068z00_1252;

															BgL_new2068z00_1252 = BgL_new2043z00_1251;
															{	/* Foreign/ctype.scm 255 */
																bool_t BgL_structzf32065zf3_1256;

																obj_t BgL_fields2066z00_1257;

																obj_t BgL_cstructza22067za2_1258;

																BgL_structzf32065zf3_1256 = BgL_arg2586z00_542;
																BgL_fields2066z00_1257 = BgL_arg2587z00_543;
																BgL_cstructza22067za2_1258 = BFALSE;
																((((BgL_cstructz00_bglt)
																			CREF(BgL_new2068z00_1252))->
																		BgL_structzf3zf3) =
																	((bool_t) BgL_structzf32065zf3_1256),
																	BUNSPEC);
																((((BgL_cstructz00_bglt)
																			CREF(BgL_new2068z00_1252))->
																		BgL_fieldsz00) =
																	((obj_t) BgL_fields2066z00_1257), BUNSPEC);
																((((BgL_cstructz00_bglt)
																			CREF(BgL_new2068z00_1252))->
																		BgL_cstructza2za2) =
																	((obj_t) BgL_cstructza22067za2_1258),
																	BUNSPEC);
																BgL_res3023z00_1259 = BgL_new2068z00_1252;
														}} BgL_res3023z00_1259;
													}
													BgL_res3024z00_1260 = BgL_new2043z00_1251;
												}
												BgL_arg2576z00_541 = BgL_res3024z00_1260;
										}}
										{	/* Foreign/ctype.scm 255 */
											obj_t BgL_auxz00_2930;

											BgL_objectz00_bglt BgL_auxz00_2928;

											BgL_auxz00_2930 = (obj_t) (BgL_arg2576z00_541);
											BgL_auxz00_2928 =
												(BgL_objectz00_bglt) (BgL_obj2229z00_540);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_2928, BgL_auxz00_2930);
									}}
									BGL_OBJECT_CLASS_NUM_SET(
										(BgL_objectz00_bglt) (BgL_obj2229z00_540),
										BGl_classzd2numzd2zz__objectz00
										(BGl_cstructz00zzforeign_ctypez00));
									BgL_obj2229z00_540;
								}
								{	/* Foreign/ctype.scm 259 */
									obj_t BgL_ptrzd2idzd2_547;

									{	/* Foreign/ctype.scm 259 */
										obj_t BgL_arg2621z00_553;

										{	/* Foreign/ctype.scm 259 */
											obj_t BgL_arg2628z00_554;

											obj_t BgL_arg2629z00_555;

											{	/* Foreign/ctype.scm 259 */
												obj_t BgL_res3025z00_1265;

												{	/* Foreign/ctype.scm 259 */
													obj_t BgL_arg2063z00_1264;

													BgL_arg2063z00_1264 = SYMBOL_TO_STRING(BgL_idz00_21);
													BgL_res3025z00_1265 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_1264);
												}
												BgL_arg2628z00_554 = BgL_res3025z00_1265;
											}
											{	/* Foreign/ctype.scm 259 */
												obj_t BgL_res3026z00_1268;

												{	/* Foreign/ctype.scm 259 */
													obj_t BgL_symbolz00_1266;

													BgL_symbolz00_1266 = CNST_TABLE_REF(((long) 14));
													{	/* Foreign/ctype.scm 259 */
														obj_t BgL_arg2063z00_1267;

														BgL_arg2063z00_1267 =
															SYMBOL_TO_STRING(BgL_symbolz00_1266);
														BgL_res3026z00_1268 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg2063z00_1267);
												}}
												BgL_arg2629z00_555 = BgL_res3026z00_1268;
											}
											{	/* Foreign/ctype.scm 259 */
												obj_t BgL_list2630z00_556;

												{	/* Foreign/ctype.scm 259 */
													obj_t BgL_arg2642z00_557;

													BgL_arg2642z00_557 =
														MAKE_PAIR(BgL_arg2629z00_555, BNIL);
													BgL_list2630z00_556 =
														MAKE_PAIR(BgL_arg2628z00_554, BgL_arg2642z00_557);
												}
												BgL_arg2621z00_553 =
													BGl_stringzd2appendzd2zz__r4_strings_6_7z00
													(BgL_list2630z00_556);
										}}
										BgL_ptrzd2idzd2_547 =
											string_to_symbol(BSTRING_TO_STRING(BgL_arg2621z00_553));
									}
									{	/* Foreign/ctype.scm 261 */
										obj_t BgL_arg2595z00_548;

										obj_t BgL_arg2602z00_549;

										{	/* Foreign/ctype.scm 261 */
											obj_t BgL_arg2608z00_550;

											obj_t BgL_arg2615z00_551;

											BgL_arg2608z00_550 = CAR(BgL_expz00_22);
											{	/* Foreign/ctype.scm 261 */
												obj_t BgL_list2616z00_552;

												BgL_list2616z00_552 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2615z00_551 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_idz00_21, BgL_list2616z00_552);
											}
											BgL_arg2595z00_548 =
												MAKE_PAIR(BgL_arg2608z00_550, BgL_arg2615z00_551);
										}
										BgL_arg2602z00_549 =
											BGl_makezd2pointerzd2tozd2namezd2zztype_toolsz00
											(BgL_ctypez00_539);
										return
											BGl_declarezd2czd2structza2z12zb0zzforeign_ctypez00
											(BgL_ptrzd2idzd2_547, BgL_arg2595z00_548,
											BgL_arg2602z00_549);
									}
								}
							}
						}
					}
				}
			}
		}
	}



/* declare-c-struct*! */
	BgL_typez00_bglt BGl_declarezd2czd2structza2z12zb0zzforeign_ctypez00(obj_t
		BgL_idz00_24, obj_t BgL_expz00_25, obj_t BgL_namez00_26)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 267 */
			{	/* Foreign/ctype.scm 269 */
				BgL_typez00_bglt BgL_structz00_563;

				BgL_structz00_563 =
					BGl_findzd2typezd2zztype_envz00(CAR(CDR(BgL_expz00_25)));
				{	/* Foreign/ctype.scm 269 */
					obj_t BgL_structza2za2_564;

					{	/* Foreign/ctype.scm 270 */
						BgL_cstructz00_bglt BgL_obj2083z00_1275;

						BgL_obj2083z00_1275 = (BgL_cstructz00_bglt) (BgL_structz00_563);
						{
							obj_t BgL_auxz00_2956;

							{	/* Foreign/ctype.scm 270 */
								BgL_objectz00_bglt BgL_auxz00_2957;

								BgL_auxz00_2957 = (BgL_objectz00_bglt) (BgL_obj2083z00_1275);
								BgL_auxz00_2956 = BGL_OBJECT_WIDENING(BgL_auxz00_2957);
							}
							BgL_structza2za2_564 =
								(((BgL_cstructz00_bglt) CREF(BgL_auxz00_2956))->
								BgL_cstructza2za2);
						}
					}
					{	/* Foreign/ctype.scm 270 */

						if (BGl_iszd2azf3z21zz__objectz00(BgL_structza2za2_564,
								BGl_cstructza2za2zzforeign_ctypez00))
							{	/* Foreign/ctype.scm 274 */
								obj_t BgL_arg2655z00_566;

								{
									BgL_typez00_bglt BgL_auxz00_2963;

									BgL_auxz00_2963 =
										(BgL_typez00_bglt) (
										(BgL_cstructza2za2_bglt) (BgL_structza2za2_564));
									BgL_arg2655z00_566 =
										(((BgL_typez00_bglt) CREF(BgL_auxz00_2963))->BgL_idz00);
								}
								return
									BGl_declarezd2czd2aliasz12z12zzforeign_ctypez00(BgL_idz00_24,
									BgL_arg2655z00_566, BgL_namez00_26);
							}
						else
							{	/* Foreign/ctype.scm 276 */
								obj_t BgL_cobjz00_567;

								BgL_cobjz00_567 = BGl_za2cobjza2z00zztype_cachez00;
								{	/* Foreign/ctype.scm 276 */
									obj_t BgL_objz00_568;

									BgL_objz00_568 = BGl_za2objza2z00zztype_cachez00;
									{	/* Foreign/ctype.scm 277 */
										obj_t BgL_nobjz00_569;

										{
											BgL_typez00_bglt BgL_auxz00_2968;

											BgL_auxz00_2968 = (BgL_typez00_bglt) (BgL_objz00_568);
											BgL_nobjz00_569 =
												(((BgL_typez00_bglt) CREF(BgL_auxz00_2968))->
												BgL_namez00);
										}
										{	/* Foreign/ctype.scm 278 */
											obj_t BgL_bidz00_570;

											{	/* Foreign/ctype.scm 279 */
												obj_t BgL_arg2665z00_582;

												{	/* Foreign/ctype.scm 279 */
													obj_t BgL_arg2666z00_583;

													obj_t BgL_arg2667z00_584;

													{	/* Foreign/ctype.scm 279 */
														obj_t BgL_res3027z00_1281;

														{	/* Foreign/ctype.scm 279 */
															obj_t BgL_symbolz00_1279;

															BgL_symbolz00_1279 = CNST_TABLE_REF(((long) 10));
															{	/* Foreign/ctype.scm 279 */
																obj_t BgL_arg2063z00_1280;

																BgL_arg2063z00_1280 =
																	SYMBOL_TO_STRING(BgL_symbolz00_1279);
																BgL_res3027z00_1281 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_1280);
														}}
														BgL_arg2666z00_583 = BgL_res3027z00_1281;
													}
													{	/* Foreign/ctype.scm 279 */
														obj_t BgL_res3028z00_1284;

														{	/* Foreign/ctype.scm 279 */
															obj_t BgL_arg2063z00_1283;

															BgL_arg2063z00_1283 =
																SYMBOL_TO_STRING(BgL_idz00_24);
															BgL_res3028z00_1284 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_1283);
														}
														BgL_arg2667z00_584 = BgL_res3028z00_1284;
													}
													{	/* Foreign/ctype.scm 279 */
														obj_t BgL_list2668z00_585;

														{	/* Foreign/ctype.scm 279 */
															obj_t BgL_arg2669z00_586;

															BgL_arg2669z00_586 =
																MAKE_PAIR(BgL_arg2667z00_584, BNIL);
															BgL_list2668z00_585 =
																MAKE_PAIR(BgL_arg2666z00_583,
																BgL_arg2669z00_586);
														}
														BgL_arg2665z00_582 =
															BGl_stringzd2appendzd2zz__r4_strings_6_7z00
															(BgL_list2668z00_585);
												}}
												BgL_bidz00_570 =
													string_to_symbol(BSTRING_TO_STRING
													(BgL_arg2665z00_582));
											}
											{	/* Foreign/ctype.scm 279 */
												BgL_typez00_bglt BgL_ctypez00_571;

												BgL_ctypez00_571 =
													BGl_declarezd2subtypez12zc0zztype_envz00(BgL_idz00_24,
													BgL_namez00_26, CNST_TABLE_REF(((long) 11)),
													CNST_TABLE_REF(((long) 9)));
												{	/* Foreign/ctype.scm 280 */
													BgL_typez00_bglt BgL_btypez00_572;

													BgL_btypez00_572 =
														BGl_declarezd2subtypez12zc0zztype_envz00
														(BgL_bidz00_570, BgL_nobjz00_569,
														CNST_TABLE_REF(((long) 12)),
														CNST_TABLE_REF(((long) 13)));
													{	/* Foreign/ctype.scm 281 */

														{
															obj_t BgL_auxz00_2987;

															BgL_auxz00_2987 =
																string_append_3
																(BGl_string3109z00zzforeign_ctypez00,
																BGl_stringzd2sanszd2z42z42zztype_toolsz00
																(BgL_namez00_26),
																BGl_string3110z00zzforeign_ctypez00);
															((((BgL_typez00_bglt) CREF(BgL_ctypez00_571))->
																	BgL_siza7eza7) =
																((obj_t) BgL_auxz00_2987), BUNSPEC);
														}
														BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
															(BGl_makezd2foreignzd2coercersz00zzforeign_ctypez00
															(BGl_stringzd2sanszd2z42z42zztype_toolsz00
																(BgL_namez00_26), BgL_idz00_24,
																BgL_bidz00_570));
														{	/* Foreign/ctype.scm 291 */
															BgL_cstructz00_bglt BgL_obj2085z00_1288;

															obj_t BgL_val2084z00_1289;

															BgL_obj2085z00_1288 =
																(BgL_cstructz00_bglt) (BgL_structz00_563);
															BgL_val2084z00_1289 = (obj_t) (BgL_ctypez00_571);
															{
																obj_t BgL_auxz00_2996;

																{	/* Foreign/ctype.scm 291 */
																	BgL_objectz00_bglt BgL_auxz00_2997;

																	BgL_auxz00_2997 =
																		(BgL_objectz00_bglt) (BgL_obj2085z00_1288);
																	BgL_auxz00_2996 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_2997);
																}
																((((BgL_cstructz00_bglt)
																			CREF(BgL_auxz00_2996))->
																		BgL_cstructza2za2) =
																	((obj_t) BgL_val2084z00_1289), BUNSPEC);
														}}
														{	/* Foreign/ctype.scm 293 */
															BgL_typez00_bglt BgL_obj2230z00_579;

															BgL_obj2230z00_579 =
																((BgL_typez00_bglt) BgL_ctypez00_571);
															{	/* Foreign/ctype.scm 293 */
																BgL_cstructza2za2_bglt BgL_arg2663z00_580;

																{	/* Foreign/ctype.scm 293 */
																	BgL_cstructza2za2_bglt BgL_res3030z00_1299;

																	{	/* Foreign/ctype.scm 293 */
																		BgL_cstructz00_bglt BgL_cstruct2130z00_1291;

																		BgL_cstruct2130z00_1291 =
																			(BgL_cstructz00_bglt) (BgL_structz00_563);
																		{	/* Foreign/ctype.scm 293 */
																			BgL_cstructza2za2_bglt
																				BgL_new2131z00_1292;
																			BgL_new2131z00_1292 =
																				((BgL_cstructza2za2_bglt)
																				BREF(GC_MALLOC(sizeof(struct
																							BgL_cstructza2za2_bgl))));
																			{	/* Foreign/ctype.scm 293 */
																				BgL_cstructza2za2_bglt
																					BgL_res3029z00_1298;
																				{	/* Foreign/ctype.scm 293 */
																					BgL_cstructza2za2_bglt
																						BgL_new2154z00_1293;
																					BgL_new2154z00_1293 =
																						BgL_new2131z00_1292;
																					{	/* Foreign/ctype.scm 293 */
																						BgL_typez00_bglt
																							BgL_btype2152z00_1296;
																						BgL_cstructz00_bglt
																							BgL_cstruct2153z00_1297;
																						BgL_btype2152z00_1296 =
																							BgL_btypez00_572;
																						BgL_cstruct2153z00_1297 =
																							BgL_cstruct2130z00_1291;
																						((((BgL_cstructza2za2_bglt)
																									CREF(BgL_new2154z00_1293))->
																								BgL_btypez00) =
																							((BgL_typez00_bglt)
																								BgL_btype2152z00_1296),
																							BUNSPEC);
																						((((BgL_cstructza2za2_bglt)
																									CREF(BgL_new2154z00_1293))->
																								BgL_cstructz00) =
																							((BgL_cstructz00_bglt)
																								BgL_cstruct2153z00_1297),
																							BUNSPEC);
																						BgL_res3029z00_1298 =
																							BgL_new2154z00_1293;
																				}} BgL_res3029z00_1298;
																			}
																			BgL_res3030z00_1299 = BgL_new2131z00_1292;
																	}}
																	BgL_arg2663z00_580 = BgL_res3030z00_1299;
																}
																{	/* Foreign/ctype.scm 293 */
																	obj_t BgL_auxz00_3008;

																	BgL_objectz00_bglt BgL_auxz00_3006;

																	BgL_auxz00_3008 =
																		(obj_t) (BgL_arg2663z00_580);
																	BgL_auxz00_3006 =
																		(BgL_objectz00_bglt) (BgL_obj2230z00_579);
																	BGL_OBJECT_WIDENING_SET(BgL_auxz00_3006,
																		BgL_auxz00_3008);
															}}
															BGL_OBJECT_CLASS_NUM_SET(
																(BgL_objectz00_bglt) (BgL_obj2230z00_579),
																BGl_classzd2numzd2zz__objectz00
																(BGl_cstructza2za2zzforeign_ctypez00));
															BgL_obj2230z00_579;
														}
														return BgL_ctypez00_571;
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



/* make-foreign-coercers */
	obj_t BGl_makezd2foreignzd2coercersz00zzforeign_ctypez00(obj_t BgL_namez00_27,
		obj_t BgL_idz00_28, obj_t BgL_bidz00_29)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 301 */
			{	/* Foreign/ctype.scm 302 */
				obj_t BgL_idzf3zf3_588;

				obj_t BgL_idzd2ze3bidz31_589;

				obj_t BgL_bidzd2ze3idz31_590;

				{	/* Foreign/ctype.scm 302 */
					obj_t BgL_arg2810z00_725;

					{	/* Foreign/ctype.scm 302 */
						obj_t BgL_arg2811z00_726;

						obj_t BgL_arg2812z00_727;

						{	/* Foreign/ctype.scm 302 */
							obj_t BgL_res3031z00_1304;

							{	/* Foreign/ctype.scm 302 */
								obj_t BgL_arg2063z00_1303;

								BgL_arg2063z00_1303 = SYMBOL_TO_STRING(BgL_idz00_28);
								BgL_res3031z00_1304 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2063z00_1303);
							}
							BgL_arg2811z00_726 = BgL_res3031z00_1304;
						}
						{	/* Foreign/ctype.scm 302 */
							obj_t BgL_res3032z00_1307;

							{	/* Foreign/ctype.scm 302 */
								obj_t BgL_symbolz00_1305;

								BgL_symbolz00_1305 = CNST_TABLE_REF(((long) 15));
								{	/* Foreign/ctype.scm 302 */
									obj_t BgL_arg2063z00_1306;

									BgL_arg2063z00_1306 = SYMBOL_TO_STRING(BgL_symbolz00_1305);
									BgL_res3032z00_1307 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_1306);
							}}
							BgL_arg2812z00_727 = BgL_res3032z00_1307;
						}
						{	/* Foreign/ctype.scm 302 */
							obj_t BgL_list2813z00_728;

							{	/* Foreign/ctype.scm 302 */
								obj_t BgL_arg2814z00_729;

								BgL_arg2814z00_729 = MAKE_PAIR(BgL_arg2812z00_727, BNIL);
								BgL_list2813z00_728 =
									MAKE_PAIR(BgL_arg2811z00_726, BgL_arg2814z00_729);
							}
							BgL_arg2810z00_725 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list2813z00_728);
					}}
					BgL_idzf3zf3_588 =
						string_to_symbol(BSTRING_TO_STRING(BgL_arg2810z00_725));
				}
				{	/* Foreign/ctype.scm 303 */
					obj_t BgL_list2815z00_730;

					{	/* Foreign/ctype.scm 303 */
						obj_t BgL_arg2816z00_731;

						{	/* Foreign/ctype.scm 303 */
							obj_t BgL_arg2818z00_732;

							obj_t BgL_arg2819z00_733;

							BgL_arg2818z00_732 = CNST_TABLE_REF(((long) 16));
							BgL_arg2819z00_733 = MAKE_PAIR(BgL_bidz00_29, BNIL);
							BgL_arg2816z00_731 =
								MAKE_PAIR(BgL_arg2818z00_732, BgL_arg2819z00_733);
						}
						BgL_list2815z00_730 = MAKE_PAIR(BgL_idz00_28, BgL_arg2816z00_731);
					}
					BgL_idzd2ze3bidz31_589 =
						BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_list2815z00_730);
				}
				{	/* Foreign/ctype.scm 304 */
					obj_t BgL_list2820z00_734;

					{	/* Foreign/ctype.scm 304 */
						obj_t BgL_arg2821z00_735;

						{	/* Foreign/ctype.scm 304 */
							obj_t BgL_arg2822z00_736;

							obj_t BgL_arg2823z00_737;

							BgL_arg2822z00_736 = CNST_TABLE_REF(((long) 16));
							BgL_arg2823z00_737 = MAKE_PAIR(BgL_idz00_28, BNIL);
							BgL_arg2821z00_735 =
								MAKE_PAIR(BgL_arg2822z00_736, BgL_arg2823z00_737);
						}
						BgL_list2820z00_734 = MAKE_PAIR(BgL_bidz00_29, BgL_arg2821z00_735);
					}
					BgL_bidzd2ze3idz31_590 =
						BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_list2820z00_734);
				}
				{	/* Foreign/ctype.scm 305 */
					obj_t BgL_resz00_591;

					{	/* Foreign/ctype.scm 305 */
						obj_t BgL_arg2671z00_592;

						obj_t BgL_arg2672z00_593;

						BgL_arg2671z00_592 = CNST_TABLE_REF(((long) 17));
						{	/* Foreign/ctype.scm 306 */
							obj_t BgL_arg2673z00_594;

							obj_t BgL_arg2674z00_595;

							obj_t BgL_arg2675z00_596;

							obj_t BgL_arg2676z00_597;

							obj_t BgL_arg2677z00_598;

							obj_t BgL_arg2678z00_599;

							obj_t BgL_arg2679z00_600;

							obj_t BgL_arg2680z00_601;

							{	/* Foreign/ctype.scm 306 */
								obj_t BgL_arg2690z00_611;

								obj_t BgL_arg2691z00_612;

								BgL_arg2690z00_611 = CNST_TABLE_REF(((long) 18));
								{	/* Foreign/ctype.scm 306 */
									obj_t BgL_list2692z00_613;

									{	/* Foreign/ctype.scm 306 */
										obj_t BgL_arg2693z00_614;

										obj_t BgL_arg2694z00_615;

										BgL_arg2693z00_614 = CNST_TABLE_REF(((long) 19));
										{	/* Foreign/ctype.scm 306 */
											obj_t BgL_arg2696z00_617;

											{	/* Foreign/ctype.scm 306 */
												obj_t BgL_arg2698z00_619;

												BgL_arg2698z00_619 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2696z00_617 =
													MAKE_PAIR(BNIL, BgL_arg2698z00_619);
											}
											BgL_arg2694z00_615 = MAKE_PAIR(BNIL, BgL_arg2696z00_617);
										}
										BgL_list2692z00_613 =
											MAKE_PAIR(BgL_arg2693z00_614, BgL_arg2694z00_615);
									}
									BgL_arg2691z00_612 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_idz00_28,
										BgL_list2692z00_613);
								}
								BgL_arg2673z00_594 =
									MAKE_PAIR(BgL_arg2690z00_611, BgL_arg2691z00_612);
							}
							{	/* Foreign/ctype.scm 307 */
								obj_t BgL_arg2699z00_620;

								obj_t BgL_arg2700z00_621;

								BgL_arg2699z00_620 = CNST_TABLE_REF(((long) 18));
								{	/* Foreign/ctype.scm 307 */
									obj_t BgL_list2701z00_622;

									{	/* Foreign/ctype.scm 307 */
										obj_t BgL_arg2702z00_623;

										{	/* Foreign/ctype.scm 307 */
											obj_t BgL_arg2704z00_625;

											{	/* Foreign/ctype.scm 307 */
												obj_t BgL_arg2706z00_627;

												BgL_arg2706z00_627 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2704z00_625 =
													MAKE_PAIR(BNIL, BgL_arg2706z00_627);
											}
											BgL_arg2702z00_623 = MAKE_PAIR(BNIL, BgL_arg2704z00_625);
										}
										BgL_list2701z00_622 =
											MAKE_PAIR(BgL_idz00_28, BgL_arg2702z00_623);
									}
									BgL_arg2700z00_621 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
												(long) 19)), BgL_list2701z00_622);
								}
								BgL_arg2674z00_595 =
									MAKE_PAIR(BgL_arg2699z00_620, BgL_arg2700z00_621);
							}
							{	/* Foreign/ctype.scm 308 */
								obj_t BgL_arg2707z00_628;

								obj_t BgL_arg2708z00_629;

								BgL_arg2707z00_628 = CNST_TABLE_REF(((long) 18));
								{	/* Foreign/ctype.scm 308 */
									obj_t BgL_list2709z00_630;

									{	/* Foreign/ctype.scm 308 */
										obj_t BgL_arg2710z00_631;

										obj_t BgL_arg2711z00_632;

										BgL_arg2710z00_631 = CNST_TABLE_REF(((long) 20));
										{	/* Foreign/ctype.scm 308 */
											obj_t BgL_arg2713z00_634;

											{	/* Foreign/ctype.scm 308 */
												obj_t BgL_arg2716z00_636;

												BgL_arg2716z00_636 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2713z00_634 =
													MAKE_PAIR(BNIL, BgL_arg2716z00_636);
											}
											BgL_arg2711z00_632 = MAKE_PAIR(BNIL, BgL_arg2713z00_634);
										}
										BgL_list2709z00_630 =
											MAKE_PAIR(BgL_arg2710z00_631, BgL_arg2711z00_632);
									}
									BgL_arg2708z00_629 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_bidz00_29,
										BgL_list2709z00_630);
								}
								BgL_arg2675z00_596 =
									MAKE_PAIR(BgL_arg2707z00_628, BgL_arg2708z00_629);
							}
							{	/* Foreign/ctype.scm 309 */
								obj_t BgL_arg2717z00_637;

								obj_t BgL_arg2718z00_638;

								BgL_arg2717z00_637 = CNST_TABLE_REF(((long) 18));
								{	/* Foreign/ctype.scm 309 */
									obj_t BgL_arg2719z00_639;

									obj_t BgL_arg2720z00_640;

									BgL_arg2719z00_639 = CNST_TABLE_REF(((long) 20));
									BgL_arg2720z00_640 = MAKE_PAIR(BgL_idzf3zf3_588, BNIL);
									{	/* Foreign/ctype.scm 309 */
										obj_t BgL_list2723z00_643;

										{	/* Foreign/ctype.scm 309 */
											obj_t BgL_arg2724z00_644;

											{	/* Foreign/ctype.scm 309 */
												obj_t BgL_arg2725z00_645;

												{	/* Foreign/ctype.scm 309 */
													obj_t BgL_arg2726z00_646;

													BgL_arg2726z00_646 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2725z00_645 =
														MAKE_PAIR(BNIL, BgL_arg2726z00_646);
												}
												BgL_arg2724z00_644 =
													MAKE_PAIR(BgL_arg2720z00_640, BgL_arg2725z00_645);
											}
											BgL_list2723z00_643 =
												MAKE_PAIR(BgL_bidz00_29, BgL_arg2724z00_644);
										}
										BgL_arg2718z00_638 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg2719z00_639, BgL_list2723z00_643);
								}}
								BgL_arg2676z00_597 =
									MAKE_PAIR(BgL_arg2717z00_637, BgL_arg2718z00_638);
							}
							{	/* Foreign/ctype.scm 310 */
								obj_t BgL_arg2727z00_647;

								obj_t BgL_arg2728z00_648;

								BgL_arg2727z00_647 = CNST_TABLE_REF(((long) 18));
								{	/* Foreign/ctype.scm 310 */
									obj_t BgL_arg2730z00_650;

									{	/* Foreign/ctype.scm 311 */
										obj_t BgL_arg2736z00_656;

										{	/* Foreign/ctype.scm 311 */
											obj_t BgL_arg2738z00_658;

											obj_t BgL_arg2739z00_659;

											BgL_arg2738z00_658 = CNST_TABLE_REF(((long) 21));
											{	/* Foreign/ctype.scm 311 */
												obj_t BgL_arg2740z00_660;

												obj_t BgL_arg2741z00_661;

												BgL_arg2740z00_660 =
													MAKE_PAIR(BGl_makezd2typedzd2identz00zzast_identz00
													(CNST_TABLE_REF(((long) 22)), BgL_idz00_28), BNIL);
												{	/* Foreign/ctype.scm 312 */
													obj_t BgL_arg2748z00_667;

													{	/* Foreign/ctype.scm 312 */
														obj_t BgL_arg2749z00_668;

														obj_t BgL_arg2750z00_669;

														{	/* Foreign/ctype.scm 312 */
															obj_t BgL_arg2755z00_673;

															obj_t BgL_arg2756z00_674;

															BgL_arg2755z00_673 = CNST_TABLE_REF(((long) 23));
															{	/* Foreign/ctype.scm 312 */
																obj_t BgL_list2757z00_675;

																BgL_list2757z00_675 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2756z00_674 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_bidz00_29, BgL_list2757z00_675);
															}
															BgL_arg2749z00_668 =
																MAKE_PAIR(BgL_arg2755z00_673,
																BgL_arg2756z00_674);
														}
														BgL_arg2750z00_669 = CNST_TABLE_REF(((long) 22));
														{	/* Foreign/ctype.scm 312 */
															obj_t BgL_list2753z00_671;

															{	/* Foreign/ctype.scm 312 */
																obj_t BgL_arg2754z00_672;

																BgL_arg2754z00_672 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2753z00_671 =
																	MAKE_PAIR(BgL_arg2750z00_669,
																	BgL_arg2754z00_672);
															}
															BgL_arg2748z00_667 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2749z00_668, BgL_list2753z00_671);
													}}
													BgL_arg2741z00_661 =
														MAKE_PAIR(BgL_idzd2ze3bidz31_589,
														BgL_arg2748z00_667);
												}
												{	/* Foreign/ctype.scm 311 */
													obj_t BgL_list2743z00_663;

													{	/* Foreign/ctype.scm 311 */
														obj_t BgL_arg2745z00_664;

														BgL_arg2745z00_664 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2743z00_663 =
															MAKE_PAIR(BgL_arg2741z00_661, BgL_arg2745z00_664);
													}
													BgL_arg2739z00_659 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2740z00_660, BgL_list2743z00_663);
											}}
											BgL_arg2736z00_656 =
												MAKE_PAIR(BgL_arg2738z00_658, BgL_arg2739z00_659);
										}
										BgL_arg2730z00_650 = MAKE_PAIR(BgL_arg2736z00_656, BNIL);
									}
									{	/* Foreign/ctype.scm 310 */
										obj_t BgL_list2732z00_652;

										{	/* Foreign/ctype.scm 310 */
											obj_t BgL_arg2733z00_653;

											{	/* Foreign/ctype.scm 310 */
												obj_t BgL_arg2734z00_654;

												{	/* Foreign/ctype.scm 310 */
													obj_t BgL_arg2735z00_655;

													BgL_arg2735z00_655 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2734z00_654 =
														MAKE_PAIR(BgL_arg2730z00_650, BgL_arg2735z00_655);
												}
												BgL_arg2733z00_653 =
													MAKE_PAIR(BNIL, BgL_arg2734z00_654);
											}
											BgL_list2732z00_652 =
												MAKE_PAIR(BgL_bidz00_29, BgL_arg2733z00_653);
										}
										BgL_arg2728z00_648 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_idz00_28,
											BgL_list2732z00_652);
								}}
								BgL_arg2677z00_598 =
									MAKE_PAIR(BgL_arg2727z00_647, BgL_arg2728z00_648);
							}
							{	/* Foreign/ctype.scm 313 */
								obj_t BgL_arg2758z00_676;

								obj_t BgL_arg2759z00_677;

								BgL_arg2758z00_676 = CNST_TABLE_REF(((long) 18));
								{	/* Foreign/ctype.scm 313 */
									obj_t BgL_arg2760z00_678;

									obj_t BgL_arg2762z00_680;

									BgL_arg2760z00_678 = CNST_TABLE_REF(((long) 20));
									{	/* Foreign/ctype.scm 314 */
										obj_t BgL_arg2768z00_686;

										{	/* Foreign/ctype.scm 314 */
											obj_t BgL_arg2770z00_688;

											obj_t BgL_arg2771z00_689;

											BgL_arg2770z00_688 = CNST_TABLE_REF(((long) 21));
											{	/* Foreign/ctype.scm 314 */
												obj_t BgL_arg2773z00_690;

												obj_t BgL_arg2774z00_691;

												BgL_arg2773z00_690 =
													MAKE_PAIR(BGl_makezd2typedzd2identz00zzast_identz00
													(CNST_TABLE_REF(((long) 22)), BgL_idz00_28), BNIL);
												{	/* Foreign/ctype.scm 315 */
													obj_t BgL_arg2780z00_697;

													{	/* Foreign/ctype.scm 315 */
														obj_t BgL_arg2782z00_698;

														obj_t BgL_arg2783z00_699;

														{	/* Foreign/ctype.scm 315 */
															obj_t BgL_arg2787z00_703;

															obj_t BgL_arg2789z00_704;

															BgL_arg2787z00_703 = CNST_TABLE_REF(((long) 23));
															{	/* Foreign/ctype.scm 315 */
																obj_t BgL_list2790z00_705;

																BgL_list2790z00_705 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2789z00_704 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_bidz00_29, BgL_list2790z00_705);
															}
															BgL_arg2782z00_698 =
																MAKE_PAIR(BgL_arg2787z00_703,
																BgL_arg2789z00_704);
														}
														BgL_arg2783z00_699 = CNST_TABLE_REF(((long) 22));
														{	/* Foreign/ctype.scm 315 */
															obj_t BgL_list2785z00_701;

															{	/* Foreign/ctype.scm 315 */
																obj_t BgL_arg2786z00_702;

																BgL_arg2786z00_702 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2785z00_701 =
																	MAKE_PAIR(BgL_arg2783z00_699,
																	BgL_arg2786z00_702);
															}
															BgL_arg2780z00_697 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2782z00_698, BgL_list2785z00_701);
													}}
													BgL_arg2774z00_691 =
														MAKE_PAIR(BgL_idzd2ze3bidz31_589,
														BgL_arg2780z00_697);
												}
												{	/* Foreign/ctype.scm 314 */
													obj_t BgL_list2776z00_693;

													{	/* Foreign/ctype.scm 314 */
														obj_t BgL_arg2777z00_694;

														BgL_arg2777z00_694 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2776z00_693 =
															MAKE_PAIR(BgL_arg2774z00_691, BgL_arg2777z00_694);
													}
													BgL_arg2771z00_689 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2773z00_690, BgL_list2776z00_693);
											}}
											BgL_arg2768z00_686 =
												MAKE_PAIR(BgL_arg2770z00_688, BgL_arg2771z00_689);
										}
										BgL_arg2762z00_680 = MAKE_PAIR(BgL_arg2768z00_686, BNIL);
									}
									{	/* Foreign/ctype.scm 313 */
										obj_t BgL_list2764z00_682;

										{	/* Foreign/ctype.scm 313 */
											obj_t BgL_arg2765z00_683;

											{	/* Foreign/ctype.scm 313 */
												obj_t BgL_arg2766z00_684;

												{	/* Foreign/ctype.scm 313 */
													obj_t BgL_arg2767z00_685;

													BgL_arg2767z00_685 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2766z00_684 =
														MAKE_PAIR(BgL_arg2762z00_680, BgL_arg2767z00_685);
												}
												BgL_arg2765z00_683 =
													MAKE_PAIR(BNIL, BgL_arg2766z00_684);
											}
											BgL_list2764z00_682 =
												MAKE_PAIR(BgL_arg2760z00_678, BgL_arg2765z00_683);
										}
										BgL_arg2759z00_677 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_idz00_28,
											BgL_list2764z00_682);
								}}
								BgL_arg2678z00_599 =
									MAKE_PAIR(BgL_arg2758z00_676, BgL_arg2759z00_677);
							}
							{	/* Foreign/ctype.scm 316 */
								obj_t BgL_arg2791z00_706;

								obj_t BgL_arg2792z00_707;

								BgL_arg2791z00_706 = CNST_TABLE_REF(((long) 18));
								{	/* Foreign/ctype.scm 316 */
									obj_t BgL_arg2794z00_709;

									BgL_arg2794z00_709 = MAKE_PAIR(BgL_bidzd2ze3idz31_590, BNIL);
									{	/* Foreign/ctype.scm 316 */
										obj_t BgL_list2796z00_711;

										{	/* Foreign/ctype.scm 316 */
											obj_t BgL_arg2797z00_712;

											{	/* Foreign/ctype.scm 316 */
												obj_t BgL_arg2798z00_713;

												{	/* Foreign/ctype.scm 316 */
													obj_t BgL_arg2799z00_714;

													BgL_arg2799z00_714 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2798z00_713 =
														MAKE_PAIR(BgL_arg2794z00_709, BgL_arg2799z00_714);
												}
												BgL_arg2797z00_712 =
													MAKE_PAIR(BNIL, BgL_arg2798z00_713);
											}
											BgL_list2796z00_711 =
												MAKE_PAIR(BgL_idz00_28, BgL_arg2797z00_712);
										}
										BgL_arg2792z00_707 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_bidz00_29,
											BgL_list2796z00_711);
								}}
								BgL_arg2679z00_600 =
									MAKE_PAIR(BgL_arg2791z00_706, BgL_arg2792z00_707);
							}
							{	/* Foreign/ctype.scm 317 */
								obj_t BgL_arg2800z00_715;

								obj_t BgL_arg2801z00_716;

								BgL_arg2800z00_715 = CNST_TABLE_REF(((long) 18));
								{	/* Foreign/ctype.scm 317 */
									obj_t BgL_arg2802z00_717;

									obj_t BgL_arg2803z00_718;

									obj_t BgL_arg2804z00_719;

									BgL_arg2802z00_717 = CNST_TABLE_REF(((long) 20));
									BgL_arg2803z00_718 = MAKE_PAIR(BgL_idzf3zf3_588, BNIL);
									BgL_arg2804z00_719 = MAKE_PAIR(BgL_bidzd2ze3idz31_590, BNIL);
									{	/* Foreign/ctype.scm 317 */
										obj_t BgL_list2806z00_721;

										{	/* Foreign/ctype.scm 317 */
											obj_t BgL_arg2807z00_722;

											{	/* Foreign/ctype.scm 317 */
												obj_t BgL_arg2808z00_723;

												{	/* Foreign/ctype.scm 317 */
													obj_t BgL_arg2809z00_724;

													BgL_arg2809z00_724 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2808z00_723 =
														MAKE_PAIR(BgL_arg2804z00_719, BgL_arg2809z00_724);
												}
												BgL_arg2807z00_722 =
													MAKE_PAIR(BgL_arg2803z00_718, BgL_arg2808z00_723);
											}
											BgL_list2806z00_721 =
												MAKE_PAIR(BgL_idz00_28, BgL_arg2807z00_722);
										}
										BgL_arg2801z00_716 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg2802z00_717, BgL_list2806z00_721);
								}}
								BgL_arg2680z00_601 =
									MAKE_PAIR(BgL_arg2800z00_715, BgL_arg2801z00_716);
							}
							{	/* Foreign/ctype.scm 305 */
								obj_t BgL_list2682z00_603;

								{	/* Foreign/ctype.scm 305 */
									obj_t BgL_arg2683z00_604;

									{	/* Foreign/ctype.scm 305 */
										obj_t BgL_arg2684z00_605;

										{	/* Foreign/ctype.scm 305 */
											obj_t BgL_arg2685z00_606;

											{	/* Foreign/ctype.scm 305 */
												obj_t BgL_arg2686z00_607;

												{	/* Foreign/ctype.scm 305 */
													obj_t BgL_arg2687z00_608;

													{	/* Foreign/ctype.scm 305 */
														obj_t BgL_arg2688z00_609;

														{	/* Foreign/ctype.scm 305 */
															obj_t BgL_arg2689z00_610;

															BgL_arg2689z00_610 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg2688z00_609 =
																MAKE_PAIR(BgL_arg2680z00_601,
																BgL_arg2689z00_610);
														}
														BgL_arg2687z00_608 =
															MAKE_PAIR(BgL_arg2679z00_600, BgL_arg2688z00_609);
													}
													BgL_arg2686z00_607 =
														MAKE_PAIR(BgL_arg2678z00_599, BgL_arg2687z00_608);
												}
												BgL_arg2685z00_606 =
													MAKE_PAIR(BgL_arg2677z00_598, BgL_arg2686z00_607);
											}
											BgL_arg2684z00_605 =
												MAKE_PAIR(BgL_arg2676z00_597, BgL_arg2685z00_606);
										}
										BgL_arg2683z00_604 =
											MAKE_PAIR(BgL_arg2675z00_596, BgL_arg2684z00_605);
									}
									BgL_list2682z00_603 =
										MAKE_PAIR(BgL_arg2674z00_595, BgL_arg2683z00_604);
								}
								BgL_arg2672z00_593 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2673z00_594, BgL_list2682z00_603);
						}}
						BgL_resz00_591 = MAKE_PAIR(BgL_arg2671z00_592, BgL_arg2672z00_593);
					}
					return BgL_resz00_591;
				}
			}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzforeign_ctypez00()
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 15 */
			{	/* Foreign/ctype.scm 31 */
				obj_t BgL_arg2825z00_738;

				obj_t BgL_arg2826z00_739;

				obj_t BgL_arg2829z00_742;

				BgL_arg2825z00_738 = CNST_TABLE_REF(((long) 24));
				BgL_arg2826z00_739 = BGl_typez00zztype_typez00;
				{	/* Foreign/ctype.scm 31 */
					obj_t BgL_v2236z00_743;

					BgL_v2236z00_743 = create_vector((int) (((long) 0)));
					BgL_arg2829z00_742 = BgL_v2236z00_743;
				}
				BGl_caliasz00zzforeign_ctypez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2825z00_738,
					BgL_arg2826z00_739, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2caliaszd2envz52zzforeign_ctypez00,
					BGl_caliaszd2nilzd2envz00zzforeign_ctypez00,
					BGl_caliaszf3zd2envz21zzforeign_ctypez00, ((long) 213636105), BFALSE,
					BFALSE, BgL_arg2829z00_742);
			}
			{	/* Foreign/ctype.scm 35 */
				obj_t BgL_arg2830z00_744;

				obj_t BgL_arg2831z00_745;

				obj_t BgL_arg2834z00_748;

				BgL_arg2830z00_744 = CNST_TABLE_REF(((long) 25));
				BgL_arg2831z00_745 = BGl_typez00zztype_typez00;
				{	/* Foreign/ctype.scm 35 */
					obj_t BgL_v2237z00_749;

					BgL_v2237z00_749 = create_vector((int) (((long) 0)));
					BgL_arg2834z00_748 = BgL_v2237z00_749;
				}
				BGl_cenumz00zzforeign_ctypez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2830z00_744,
					BgL_arg2831z00_745, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2cenumzd2envz52zzforeign_ctypez00,
					BGl_cenumzd2nilzd2envz00zzforeign_ctypez00,
					BGl_cenumzf3zd2envz21zzforeign_ctypez00, ((long) 489165987), BFALSE,
					BFALSE, BgL_arg2834z00_748);
			}
			{	/* Foreign/ctype.scm 41 */
				obj_t BgL_arg2835z00_750;

				obj_t BgL_arg2836z00_751;

				obj_t BgL_arg2839z00_754;

				BgL_arg2835z00_750 = CNST_TABLE_REF(((long) 26));
				BgL_arg2836z00_751 = BGl_typez00zztype_typez00;
				{	/* Foreign/ctype.scm 41 */
					obj_t BgL_v2238z00_755;

					BgL_v2238z00_755 = create_vector((int) (((long) 0)));
					BgL_arg2839z00_754 = BgL_v2238z00_755;
				}
				BGl_copaquez00zzforeign_ctypez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2835z00_750,
					BgL_arg2836z00_751, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2copaquezd2envz52zzforeign_ctypez00,
					BGl_copaquezd2nilzd2envz00zzforeign_ctypez00,
					BGl_copaquezf3zd2envz21zzforeign_ctypez00, ((long) 471987564), BFALSE,
					BFALSE, BgL_arg2839z00_754);
			}
			{	/* Foreign/ctype.scm 45 */
				obj_t BgL_arg2841z00_756;

				obj_t BgL_arg2842z00_757;

				obj_t BgL_arg2845z00_760;

				BgL_arg2841z00_756 = CNST_TABLE_REF(((long) 27));
				BgL_arg2842z00_757 = BGl_typez00zztype_typez00;
				{	/* Foreign/ctype.scm 45 */
					obj_t BgL_v2239z00_761;

					BgL_v2239z00_761 = create_vector((int) (((long) 0)));
					BgL_arg2845z00_760 = BgL_v2239z00_761;
				}
				BGl_cfunctionz00zzforeign_ctypez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2841z00_756,
					BgL_arg2842z00_757, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2cfunctionzd2envz52zzforeign_ctypez00,
					BGl_cfunctionzd2nilzd2envz00zzforeign_ctypez00,
					BGl_cfunctionzf3zd2envz21zzforeign_ctypez00, ((long) 135083834),
					BFALSE, BFALSE, BgL_arg2845z00_760);
			}
			{	/* Foreign/ctype.scm 55 */
				obj_t BgL_arg2846z00_762;

				obj_t BgL_arg2847z00_763;

				obj_t BgL_arg2850z00_766;

				BgL_arg2846z00_762 = CNST_TABLE_REF(((long) 28));
				BgL_arg2847z00_763 = BGl_typez00zztype_typez00;
				{	/* Foreign/ctype.scm 55 */
					obj_t BgL_v2240z00_767;

					BgL_v2240z00_767 = create_vector((int) (((long) 0)));
					BgL_arg2850z00_766 = BgL_v2240z00_767;
				}
				BGl_cptrz00zzforeign_ctypez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2846z00_762,
					BgL_arg2847z00_763, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2cptrzd2envz52zzforeign_ctypez00,
					BGl_cptrzd2nilzd2envz00zzforeign_ctypez00,
					BGl_cptrzf3zd2envz21zzforeign_ctypez00, ((long) 384999047), BFALSE,
					BFALSE, BgL_arg2850z00_766);
			}
			{	/* Foreign/ctype.scm 63 */
				obj_t BgL_arg2851z00_768;

				obj_t BgL_arg2852z00_769;

				obj_t BgL_arg2857z00_772;

				BgL_arg2851z00_768 = CNST_TABLE_REF(((long) 29));
				BgL_arg2852z00_769 = BGl_typez00zztype_typez00;
				{	/* Foreign/ctype.scm 63 */
					obj_t BgL_v2241z00_773;

					BgL_v2241z00_773 = create_vector((int) (((long) 0)));
					BgL_arg2857z00_772 = BgL_v2241z00_773;
				}
				BGl_cstructz00zzforeign_ctypez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2851z00_768,
					BgL_arg2852z00_769, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2cstructzd2envz52zzforeign_ctypez00,
					BGl_cstructzd2nilzd2envz00zzforeign_ctypez00,
					BGl_cstructzf3zd2envz21zzforeign_ctypez00, ((long) 416509823), BFALSE,
					BFALSE, BgL_arg2857z00_772);
			}
			{	/* Foreign/ctype.scm 71 */
				obj_t BgL_arg2858z00_774;

				obj_t BgL_arg2859z00_775;

				obj_t BgL_arg2863z00_778;

				BgL_arg2858z00_774 = CNST_TABLE_REF(((long) 30));
				BgL_arg2859z00_775 = BGl_typez00zztype_typez00;
				{	/* Foreign/ctype.scm 71 */
					obj_t BgL_v2242z00_779;

					BgL_v2242z00_779 = create_vector((int) (((long) 0)));
					BgL_arg2863z00_778 = BgL_v2242z00_779;
				}
				BGl_cstructza2za2zzforeign_ctypez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2858z00_774,
					BgL_arg2859z00_775, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2cstructza2zd2envzf0zzforeign_ctypez00,
					BGl_cstructza2zd2nilzd2envza2zzforeign_ctypez00,
					BGl_cstructza2zf3zd2envz83zzforeign_ctypez00, ((long) 93237165),
					BFALSE, BFALSE, BgL_arg2863z00_778);
			}
			BGl_z52thezd2cstructza2zd2nilzf0zzforeign_ctypez00 = BUNSPEC;
			BGl_z52thezd2cstructzd2nilz52zzforeign_ctypez00 = BUNSPEC;
			BGl_z52thezd2cptrzd2nilz52zzforeign_ctypez00 = BUNSPEC;
			BGl_z52thezd2cfunctionzd2nilz52zzforeign_ctypez00 = BUNSPEC;
			BGl_z52thezd2copaquezd2nilz52zzforeign_ctypez00 = BUNSPEC;
			BGl_z52thezd2cenumzd2nilz52zzforeign_ctypez00 = BUNSPEC;
			return (BGl_z52thezd2caliaszd2nilz52zzforeign_ctypez00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* cstruct*? */
	BGL_EXPORTED_DEF bool_t BGl_cstructza2zf3z51zzforeign_ctypez00(obj_t
		BgL_obj2165z00_30)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 71 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2165z00_30,
				BGl_cstructza2za2zzforeign_ctypez00);
		}
	}



/* _cstruct*? */
	obj_t BGl__cstructza2zf3z51zzforeign_ctypez00(obj_t BgL_envz00_2227,
		obj_t BgL_obj2165z00_2228)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 71 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2165z00_2228,
					BGl_cstructza2za2zzforeign_ctypez00));
		}
	}



/* widening-cstruct* */
	BGL_EXPORTED_DEF BgL_cstructza2za2_bglt
		BGl_wideningzd2cstructza2z70zzforeign_ctypez00(BgL_typez00_bglt
		BgL_btype2129z00_34, BgL_cstructz00_bglt BgL_cstruct2130z00_35)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 71 */
			{	/* Foreign/ctype.scm 71 */
				BgL_cstructza2za2_bglt BgL_new2131z00_1309;

				BgL_new2131z00_1309 =
					((BgL_cstructza2za2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_cstructza2za2_bgl))));
				{	/* Foreign/ctype.scm 71 */
					BgL_cstructza2za2_bglt BgL_res3033z00_1315;

					{	/* Foreign/ctype.scm 71 */
						BgL_cstructza2za2_bglt BgL_new2154z00_1310;

						BgL_new2154z00_1310 = BgL_new2131z00_1309;
						{	/* Foreign/ctype.scm 71 */
							BgL_typez00_bglt BgL_btype2152z00_1313;

							BgL_cstructz00_bglt BgL_cstruct2153z00_1314;

							BgL_btype2152z00_1313 = BgL_btype2129z00_34;
							BgL_cstruct2153z00_1314 = BgL_cstruct2130z00_35;
							((((BgL_cstructza2za2_bglt) CREF(BgL_new2154z00_1310))->
									BgL_btypez00) =
								((BgL_typez00_bglt) BgL_btype2152z00_1313), BUNSPEC);
							((((BgL_cstructza2za2_bglt) CREF(BgL_new2154z00_1310))->
									BgL_cstructz00) =
								((BgL_cstructz00_bglt) BgL_cstruct2153z00_1314), BUNSPEC);
							BgL_res3033z00_1315 = BgL_new2154z00_1310;
					}} BgL_res3033z00_1315;
				}
				return BgL_new2131z00_1309;
			}
		}
	}



/* _widening-cstruct* */
	obj_t BGl__wideningzd2cstructza2z70zzforeign_ctypez00(obj_t BgL_envz00_2229,
		obj_t BgL_btype2129z00_2230, obj_t BgL_cstruct2130z00_2231)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 71 */
			return
				(obj_t) (BGl_wideningzd2cstructza2z70zzforeign_ctypez00(
					(BgL_typez00_bglt) (BgL_btype2129z00_2230),
					(BgL_cstructz00_bglt) (BgL_cstruct2130z00_2231)));
		}
	}



/* make-cstruct* */
	BGL_EXPORTED_DEF BgL_cstructza2za2_bglt
		BGl_makezd2cstructza2z70zzforeign_ctypez00(obj_t BgL_id2135z00_36,
		obj_t BgL_name2136z00_37, obj_t BgL_siza7e2137za7_38,
		obj_t BgL_class2138z00_39, obj_t BgL_coercezd2to2139zd2_40,
		obj_t BgL_parents2140z00_41, bool_t BgL_initzf32141zf3_42,
		bool_t BgL_magiczf32142zf3_43, obj_t BgL_z422143z42_44,
		obj_t BgL_alias2144z00_45, obj_t BgL_pointedzd2tozd2by2145z00_46,
		obj_t BgL_tvector2146z00_47, obj_t BgL_location2147z00_48,
		obj_t BgL_importzd2location2148zd2_49, int BgL_occurrence2149z00_50,
		BgL_typez00_bglt BgL_btype2133z00_51,
		BgL_cstructz00_bglt BgL_cstruct2134z00_52)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 71 */
			{	/* Foreign/ctype.scm 71 */
				BgL_typez00_bglt BgL_aux2150z00_1316;

				BgL_aux2150z00_1316 =
					BGl_makezd2typezd2zztype_typez00(BgL_id2135z00_36, BgL_name2136z00_37,
					BgL_siza7e2137za7_38, BgL_class2138z00_39, BgL_coercezd2to2139zd2_40,
					BgL_parents2140z00_41, BgL_initzf32141zf3_42, BgL_magiczf32142zf3_43,
					BgL_z422143z42_44, BgL_alias2144z00_45,
					BgL_pointedzd2tozd2by2145z00_46, BgL_tvector2146z00_47,
					BgL_location2147z00_48, BgL_importzd2location2148zd2_49,
					BgL_occurrence2149z00_50);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux2150z00_1316),
					BGl_classzd2numzd2zz__objectz00(BGl_cstructza2za2zzforeign_ctypez00));
				{	/* Foreign/ctype.scm 71 */
					BgL_cstructza2za2_bglt BgL_arg2865z00_1318;

					{	/* Foreign/ctype.scm 71 */
						BgL_cstructza2za2_bglt BgL_res3035z00_1331;

						{	/* Foreign/ctype.scm 71 */
							BgL_cstructza2za2_bglt BgL_new2131z00_1324;

							BgL_new2131z00_1324 =
								((BgL_cstructza2za2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cstructza2za2_bgl))));
							{	/* Foreign/ctype.scm 71 */
								BgL_cstructza2za2_bglt BgL_res3034z00_1330;

								{	/* Foreign/ctype.scm 71 */
									BgL_cstructza2za2_bglt BgL_new2154z00_1325;

									BgL_new2154z00_1325 = BgL_new2131z00_1324;
									{	/* Foreign/ctype.scm 71 */
										BgL_typez00_bglt BgL_btype2152z00_1328;

										BgL_cstructz00_bglt BgL_cstruct2153z00_1329;

										BgL_btype2152z00_1328 = BgL_btype2133z00_51;
										BgL_cstruct2153z00_1329 = BgL_cstruct2134z00_52;
										((((BgL_cstructza2za2_bglt) CREF(BgL_new2154z00_1325))->
												BgL_btypez00) =
											((BgL_typez00_bglt) BgL_btype2152z00_1328), BUNSPEC);
										((((BgL_cstructza2za2_bglt) CREF(BgL_new2154z00_1325))->
												BgL_cstructz00) =
											((BgL_cstructz00_bglt) BgL_cstruct2153z00_1329), BUNSPEC);
										BgL_res3034z00_1330 = BgL_new2154z00_1325;
								}} BgL_res3034z00_1330;
							}
							BgL_res3035z00_1331 = BgL_new2131z00_1324;
						}
						BgL_arg2865z00_1318 = BgL_res3035z00_1331;
					}
					{	/* Foreign/ctype.scm 71 */
						obj_t BgL_auxz00_3194;

						BgL_objectz00_bglt BgL_auxz00_3192;

						BgL_auxz00_3194 = (obj_t) (BgL_arg2865z00_1318);
						BgL_auxz00_3192 = (BgL_objectz00_bglt) (BgL_aux2150z00_1316);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_3192, BgL_auxz00_3194);
				}}
				return
					((BgL_cstructza2za2_bglt)
					(BgL_cstructza2za2_bglt) (BgL_aux2150z00_1316));
			}
		}
	}



/* _make-cstruct* */
	obj_t BGl__makezd2cstructza2z70zzforeign_ctypez00(obj_t BgL_envz00_2232,
		obj_t BgL_id2135z00_2233, obj_t BgL_name2136z00_2234,
		obj_t BgL_siza7e2137za7_2235, obj_t BgL_class2138z00_2236,
		obj_t BgL_coercezd2to2139zd2_2237, obj_t BgL_parents2140z00_2238,
		obj_t BgL_initzf32141zf3_2239, obj_t BgL_magiczf32142zf3_2240,
		obj_t BgL_z422143z42_2241, obj_t BgL_alias2144z00_2242,
		obj_t BgL_pointedzd2tozd2by2145z00_2243, obj_t BgL_tvector2146z00_2244,
		obj_t BgL_location2147z00_2245, obj_t BgL_importzd2location2148zd2_2246,
		obj_t BgL_occurrence2149z00_2247, obj_t BgL_btype2133z00_2248,
		obj_t BgL_cstruct2134z00_2249)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 71 */
			return
				(obj_t) (BGl_makezd2cstructza2z70zzforeign_ctypez00(BgL_id2135z00_2233,
					BgL_name2136z00_2234, BgL_siza7e2137za7_2235, BgL_class2138z00_2236,
					BgL_coercezd2to2139zd2_2237, BgL_parents2140z00_2238,
					CBOOL(BgL_initzf32141zf3_2239), CBOOL(BgL_magiczf32142zf3_2240),
					BgL_z422143z42_2241, BgL_alias2144z00_2242,
					BgL_pointedzd2tozd2by2145z00_2243, BgL_tvector2146z00_2244,
					BgL_location2147z00_2245, BgL_importzd2location2148zd2_2246,
					CINT(BgL_occurrence2149z00_2247),
					(BgL_typez00_bglt) (BgL_btype2133z00_2248),
					(BgL_cstructz00_bglt) (BgL_cstruct2134z00_2249)));
		}
	}



/* fill-cstruct*! */
	BGL_EXPORTED_DEF BgL_cstructza2za2_bglt
		BGl_fillzd2cstructza2z12z62zzforeign_ctypez00(BgL_cstructza2za2_bglt
		BgL_new2154z00_53, BgL_typez00_bglt BgL_btype2152z00_54,
		BgL_cstructz00_bglt BgL_cstruct2153z00_55)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 71 */
			{	/* Foreign/ctype.scm 71 */
				BgL_typez00_bglt BgL_btype2152z00_2473;

				BgL_cstructz00_bglt BgL_cstruct2153z00_2474;

				BgL_btype2152z00_2473 = BgL_btype2152z00_54;
				BgL_cstruct2153z00_2474 = BgL_cstruct2153z00_55;
				((((BgL_cstructza2za2_bglt) CREF(BgL_new2154z00_53))->BgL_btypez00) =
					((BgL_typez00_bglt) BgL_btype2152z00_2473), BUNSPEC);
				((((BgL_cstructza2za2_bglt) CREF(BgL_new2154z00_53))->BgL_cstructz00) =
					((BgL_cstructz00_bglt) BgL_cstruct2153z00_2474), BUNSPEC);
				return BgL_new2154z00_53;
			}
		}
	}



/* _fill-cstruct*! */
	obj_t BGl__fillzd2cstructza2z12z62zzforeign_ctypez00(obj_t BgL_envz00_2250,
		obj_t BgL_new2154z00_2251, obj_t BgL_btype2152z00_2252,
		obj_t BgL_cstruct2153z00_2253)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 71 */
			{	/* Foreign/ctype.scm 71 */
				BgL_cstructza2za2_bglt BgL_auxz00_3208;

				{	/* Foreign/ctype.scm 71 */
					BgL_cstructza2za2_bglt BgL_res3131z00_2480;

					{	/* Foreign/ctype.scm 71 */
						BgL_cstructza2za2_bglt BgL_new2154z00_2475;

						BgL_typez00_bglt BgL_btype2152z00_2476;

						BgL_cstructz00_bglt BgL_cstruct2153z00_2477;

						BgL_new2154z00_2475 =
							(BgL_cstructza2za2_bglt) (BgL_new2154z00_2251);
						BgL_btype2152z00_2476 = (BgL_typez00_bglt) (BgL_btype2152z00_2252);
						BgL_cstruct2153z00_2477 =
							(BgL_cstructz00_bglt) (BgL_cstruct2153z00_2253);
						{	/* Foreign/ctype.scm 71 */
							BgL_typez00_bglt BgL_btype2152z00_2478;

							BgL_cstructz00_bglt BgL_cstruct2153z00_2479;

							BgL_btype2152z00_2478 = BgL_btype2152z00_2476;
							BgL_cstruct2153z00_2479 = BgL_cstruct2153z00_2477;
							((((BgL_cstructza2za2_bglt) CREF(BgL_new2154z00_2475))->
									BgL_btypez00) =
								((BgL_typez00_bglt) BgL_btype2152z00_2478), BUNSPEC);
							((((BgL_cstructza2za2_bglt) CREF(BgL_new2154z00_2475))->
									BgL_cstructz00) =
								((BgL_cstructz00_bglt) BgL_cstruct2153z00_2479), BUNSPEC);
							BgL_res3131z00_2480 = BgL_new2154z00_2475;
						}
					}
					BgL_auxz00_3208 = BgL_res3131z00_2480;
				}
				return (obj_t) (BgL_auxz00_3208);
			}
		}
	}



/* %allocate-cstruct* */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_z52allocatezd2cstructza2z22zzforeign_ctypez00()
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 71 */
			{	/* Foreign/ctype.scm 71 */
				BgL_typez00_bglt BgL_new2158z00_2481;

				BgL_new2158z00_2481 =
					((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_typez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new2158z00_2481),
					BGl_classzd2numzd2zz__objectz00(BGl_cstructza2za2zzforeign_ctypez00));
				{	/* Foreign/ctype.scm 71 */
					BgL_objectz00_bglt BgL_auxz00_3219;

					BgL_auxz00_3219 = (BgL_objectz00_bglt) (BgL_new2158z00_2481);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3219, BFALSE);
				}
				return BgL_new2158z00_2481;
			}
		}
	}



/* _%allocate-cstruct* */
	obj_t BGl__z52allocatezd2cstructza2z22zzforeign_ctypez00(obj_t
		BgL_envz00_2225)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 71 */
			{	/* Foreign/ctype.scm 71 */
				BgL_typez00_bglt BgL_auxz00_3222;

				{	/* Foreign/ctype.scm 71 */
					BgL_typez00_bglt BgL_res3132z00_2485;

					{	/* Foreign/ctype.scm 71 */
						BgL_typez00_bglt BgL_new2158z00_2483;

						BgL_new2158z00_2483 =
							((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_typez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2158z00_2483),
							BGl_classzd2numzd2zz__objectz00
							(BGl_cstructza2za2zzforeign_ctypez00));
						{	/* Foreign/ctype.scm 71 */
							BgL_objectz00_bglt BgL_auxz00_3227;

							BgL_auxz00_3227 = (BgL_objectz00_bglt) (BgL_new2158z00_2483);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3227, BFALSE);
						}
						BgL_res3132z00_2485 = BgL_new2158z00_2483;
					}
					BgL_auxz00_3222 = BgL_res3132z00_2485;
				}
				return (obj_t) (BgL_auxz00_3222);
			}
		}
	}



/* cstruct*-nil */
	BGL_EXPORTED_DEF BgL_cstructza2za2_bglt
		BGl_cstructza2zd2nilz70zzforeign_ctypez00()
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 71 */
			if ((BGl_z52thezd2cstructza2zd2nilzf0zzforeign_ctypez00 == BUNSPEC))
				{	/* Foreign/ctype.scm 71 */
					{	/* Foreign/ctype.scm 71 */
						BgL_typez00_bglt BgL_res3036z00_1342;

						{	/* Foreign/ctype.scm 71 */
							BgL_typez00_bglt BgL_new1598z00_1338;

							BgL_new1598z00_1338 =
								((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1598z00_1338),
								BGl_classzd2numzd2zz__objectz00(BGl_typez00zztype_typez00));
							{	/* Foreign/ctype.scm 71 */
								BgL_objectz00_bglt BgL_auxz00_3237;

								BgL_auxz00_3237 = (BgL_objectz00_bglt) (BgL_new1598z00_1338);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3237, BFALSE);
							}
							BgL_res3036z00_1342 = BgL_new1598z00_1338;
						}
						BGl_z52thezd2cstructza2zd2nilzf0zzforeign_ctypez00 =
							(obj_t) (BgL_res3036z00_1342);
					}
					{	/* Foreign/ctype.scm 71 */
						BgL_typez00_bglt BgL_res3037z00_1374;

						{	/* Foreign/ctype.scm 71 */
							BgL_typez00_bglt BgL_new1581z00_1343;

							obj_t BgL_id1566z00_1344;

							int BgL_occurrence1580z00_1358;

							BgL_new1581z00_1343 =
								(BgL_typez00_bglt)
								(BGl_z52thezd2cstructza2zd2nilzf0zzforeign_ctypez00);
							BgL_id1566z00_1344 = CNST_TABLE_REF(((long) 31));
							BgL_occurrence1580z00_1358 = (int) (((long) 0));
							{	/* Foreign/ctype.scm 71 */
								obj_t BgL_id1566z00_1359;

								obj_t BgL_name1567z00_1360;

								obj_t BgL_siza7e1568za7_1361;

								obj_t BgL_class1569z00_1362;

								obj_t BgL_coercezd2to1570zd2_1363;

								obj_t BgL_parents1571z00_1364;

								bool_t BgL_initzf31572zf3_1365;

								bool_t BgL_magiczf31573zf3_1366;

								obj_t BgL_z421574z42_1367;

								obj_t BgL_alias1575z00_1368;

								obj_t BgL_pointedzd2tozd2by1576z00_1369;

								obj_t BgL_tvector1577z00_1370;

								obj_t BgL_location1578z00_1371;

								obj_t BgL_importzd2location1579zd2_1372;

								int BgL_occurrence1580z00_1373;

								BgL_id1566z00_1359 = BgL_id1566z00_1344;
								BgL_name1567z00_1360 = BUNSPEC;
								BgL_siza7e1568za7_1361 = BUNSPEC;
								BgL_class1569z00_1362 = BUNSPEC;
								BgL_coercezd2to1570zd2_1363 = BUNSPEC;
								BgL_parents1571z00_1364 = BUNSPEC;
								BgL_initzf31572zf3_1365 = ((bool_t) 0);
								BgL_magiczf31573zf3_1366 = ((bool_t) 0);
								BgL_z421574z42_1367 = BUNSPEC;
								BgL_alias1575z00_1368 = BUNSPEC;
								BgL_pointedzd2tozd2by1576z00_1369 = BUNSPEC;
								BgL_tvector1577z00_1370 = BUNSPEC;
								BgL_location1578z00_1371 = BUNSPEC;
								BgL_importzd2location1579zd2_1372 = BUNSPEC;
								BgL_occurrence1580z00_1373 = BgL_occurrence1580z00_1358;
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1343))->BgL_idz00) =
									((obj_t) BgL_id1566z00_1359), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1343))->BgL_namez00) =
									((obj_t) BgL_name1567z00_1360), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1343))->
										BgL_siza7eza7) = ((obj_t) BgL_siza7e1568za7_1361), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1343))->
										BgL_classz00) = ((obj_t) BgL_class1569z00_1362), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1343))->
										BgL_coercezd2tozd2) =
									((obj_t) BgL_coercezd2to1570zd2_1363), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1343))->
										BgL_parentsz00) =
									((obj_t) BgL_parents1571z00_1364), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1343))->
										BgL_initzf3zf3) =
									((bool_t) BgL_initzf31572zf3_1365), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1343))->
										BgL_magiczf3zf3) =
									((bool_t) BgL_magiczf31573zf3_1366), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1343))->BgL_z42z42) =
									((obj_t) BgL_z421574z42_1367), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1343))->
										BgL_aliasz00) = ((obj_t) BgL_alias1575z00_1368), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1343))->
										BgL_pointedzd2tozd2byz00) =
									((obj_t) BgL_pointedzd2tozd2by1576z00_1369), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1343))->
										BgL_tvectorz00) =
									((obj_t) BgL_tvector1577z00_1370), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1343))->
										BgL_locationz00) =
									((obj_t) BgL_location1578z00_1371), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1343))->
										BgL_importzd2locationzd2) =
									((obj_t) BgL_importzd2location1579zd2_1372), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1343))->
										BgL_occurrencez00) =
									((int) BgL_occurrence1580z00_1373), BUNSPEC);
								BgL_res3037z00_1374 = BgL_new1581z00_1343;
						}} BgL_res3037z00_1374;
					}
					{	/* Foreign/ctype.scm 71 */
						long BgL_arg2868z00_790;

						BgL_arg2868z00_790 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_cstructza2za2zzforeign_ctypez00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2cstructza2zd2nilzf0zzforeign_ctypez00),
							BgL_arg2868z00_790);
					}
					{	/* Foreign/ctype.scm 71 */
						BgL_cstructza2za2_bglt BgL_arg2869z00_791;

						{	/* Foreign/ctype.scm 71 */
							BgL_typez00_bglt BgL_arg2870z00_792;

							BgL_cstructz00_bglt BgL_arg2871z00_793;

							BgL_arg2870z00_792 = BGl_typezd2nilzd2zztype_typez00();
							BgL_arg2871z00_793 = BGl_cstructzd2nilzd2zzforeign_ctypez00();
							{	/* Foreign/ctype.scm 71 */
								BgL_cstructza2za2_bglt BgL_res3039z00_1386;

								{	/* Foreign/ctype.scm 71 */
									BgL_cstructza2za2_bglt BgL_new2131z00_1379;

									BgL_new2131z00_1379 =
										((BgL_cstructza2za2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_cstructza2za2_bgl))));
									{	/* Foreign/ctype.scm 71 */
										BgL_cstructza2za2_bglt BgL_res3038z00_1385;

										{	/* Foreign/ctype.scm 71 */
											BgL_cstructza2za2_bglt BgL_new2154z00_1380;

											BgL_new2154z00_1380 = BgL_new2131z00_1379;
											{	/* Foreign/ctype.scm 71 */
												BgL_typez00_bglt BgL_btype2152z00_1383;

												BgL_cstructz00_bglt BgL_cstruct2153z00_1384;

												BgL_btype2152z00_1383 = BgL_arg2870z00_792;
												BgL_cstruct2153z00_1384 = BgL_arg2871z00_793;
												((((BgL_cstructza2za2_bglt) CREF(BgL_new2154z00_1380))->
														BgL_btypez00) =
													((BgL_typez00_bglt) BgL_btype2152z00_1383), BUNSPEC);
												((((BgL_cstructza2za2_bglt) CREF(BgL_new2154z00_1380))->
														BgL_cstructz00) =
													((BgL_cstructz00_bglt) BgL_cstruct2153z00_1384),
													BUNSPEC);
												BgL_res3038z00_1385 = BgL_new2154z00_1380;
										}} BgL_res3038z00_1385;
									}
									BgL_res3039z00_1386 = BgL_new2131z00_1379;
								}
								BgL_arg2869z00_791 = BgL_res3039z00_1386;
						}}
						{	/* Foreign/ctype.scm 71 */
							obj_t BgL_auxz00_3269;

							BgL_objectz00_bglt BgL_auxz00_3267;

							BgL_auxz00_3269 = (obj_t) (BgL_arg2869z00_791);
							BgL_auxz00_3267 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2cstructza2zd2nilzf0zzforeign_ctypez00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3267, BgL_auxz00_3269);
				}}}
			else
				{	/* Foreign/ctype.scm 71 */
					BFALSE;
				}
			return
				(BgL_cstructza2za2_bglt)
				(BGl_z52thezd2cstructza2zd2nilzf0zzforeign_ctypez00);
		}
	}



/* _cstruct*-nil */
	obj_t BGl__cstructza2zd2nilz70zzforeign_ctypez00(obj_t BgL_envz00_2226)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 71 */
			return (obj_t) (BGl_cstructza2zd2nilz70zzforeign_ctypez00());
		}
	}



/* cstruct? */
	BGL_EXPORTED_DEF bool_t BGl_cstructzf3zf3zzforeign_ctypez00(obj_t
		BgL_obj2080z00_58)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 63 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2080z00_58,
				BGl_cstructz00zzforeign_ctypez00);
		}
	}



/* _cstruct? */
	obj_t BGl__cstructzf3zf3zzforeign_ctypez00(obj_t BgL_envz00_2223,
		obj_t BgL_obj2080z00_2224)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 63 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2080z00_2224,
					BGl_cstructz00zzforeign_ctypez00));
		}
	}



/* widening-cstruct */
	BGL_EXPORTED_DEF BgL_cstructz00_bglt
		BGl_wideningzd2cstructzd2zzforeign_ctypez00(bool_t BgL_structzf32040zf3_62,
		obj_t BgL_fields2041z00_63, obj_t BgL_cstructza22042za2_64)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 63 */
			{	/* Foreign/ctype.scm 63 */
				BgL_cstructz00_bglt BgL_new2043z00_1387;

				BgL_new2043z00_1387 =
					((BgL_cstructz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_cstructz00_bgl))));
				{	/* Foreign/ctype.scm 63 */
					BgL_cstructz00_bglt BgL_res3040z00_1395;

					{	/* Foreign/ctype.scm 63 */
						BgL_cstructz00_bglt BgL_new2068z00_1388;

						BgL_new2068z00_1388 = BgL_new2043z00_1387;
						{	/* Foreign/ctype.scm 63 */
							bool_t BgL_structzf32065zf3_1392;

							obj_t BgL_fields2066z00_1393;

							obj_t BgL_cstructza22067za2_1394;

							BgL_structzf32065zf3_1392 = BgL_structzf32040zf3_62;
							BgL_fields2066z00_1393 = BgL_fields2041z00_63;
							BgL_cstructza22067za2_1394 = BgL_cstructza22042za2_64;
							((((BgL_cstructz00_bglt) CREF(BgL_new2068z00_1388))->
									BgL_structzf3zf3) =
								((bool_t) BgL_structzf32065zf3_1392), BUNSPEC);
							((((BgL_cstructz00_bglt) CREF(BgL_new2068z00_1388))->
									BgL_fieldsz00) = ((obj_t) BgL_fields2066z00_1393), BUNSPEC);
							((((BgL_cstructz00_bglt) CREF(BgL_new2068z00_1388))->
									BgL_cstructza2za2) =
								((obj_t) BgL_cstructza22067za2_1394), BUNSPEC);
							BgL_res3040z00_1395 = BgL_new2068z00_1388;
					}} BgL_res3040z00_1395;
				}
				return BgL_new2043z00_1387;
			}
		}
	}



/* _widening-cstruct */
	obj_t BGl__wideningzd2cstructzd2zzforeign_ctypez00(obj_t BgL_envz00_2254,
		obj_t BgL_structzf32040zf3_2255, obj_t BgL_fields2041z00_2256,
		obj_t BgL_cstructza22042za2_2257)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 63 */
			return
				(obj_t) (BGl_wideningzd2cstructzd2zzforeign_ctypez00(CBOOL
					(BgL_structzf32040zf3_2255), BgL_fields2041z00_2256,
					BgL_cstructza22042za2_2257));
		}
	}



/* make-cstruct */
	BGL_EXPORTED_DEF BgL_cstructz00_bglt
		BGl_makezd2cstructzd2zzforeign_ctypez00(obj_t BgL_id2048z00_65,
		obj_t BgL_name2049z00_66, obj_t BgL_siza7e2050za7_67,
		obj_t BgL_class2051z00_68, obj_t BgL_coercezd2to2052zd2_69,
		obj_t BgL_parents2053z00_70, bool_t BgL_initzf32054zf3_71,
		bool_t BgL_magiczf32055zf3_72, obj_t BgL_z422056z42_73,
		obj_t BgL_alias2057z00_74, obj_t BgL_pointedzd2tozd2by2058z00_75,
		obj_t BgL_tvector2059z00_76, obj_t BgL_location2060z00_77,
		obj_t BgL_importzd2location2061zd2_78, int BgL_occurrence2062z00_79,
		bool_t BgL_structzf32045zf3_80, obj_t BgL_fields2046z00_81,
		obj_t BgL_cstructza22047za2_82)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 63 */
			{	/* Foreign/ctype.scm 63 */
				BgL_typez00_bglt BgL_aux2063z00_1396;

				BgL_aux2063z00_1396 =
					BGl_makezd2typezd2zztype_typez00(BgL_id2048z00_65, BgL_name2049z00_66,
					BgL_siza7e2050za7_67, BgL_class2051z00_68, BgL_coercezd2to2052zd2_69,
					BgL_parents2053z00_70, BgL_initzf32054zf3_71, BgL_magiczf32055zf3_72,
					BgL_z422056z42_73, BgL_alias2057z00_74,
					BgL_pointedzd2tozd2by2058z00_75, BgL_tvector2059z00_76,
					BgL_location2060z00_77, BgL_importzd2location2061zd2_78,
					BgL_occurrence2062z00_79);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux2063z00_1396),
					BGl_classzd2numzd2zz__objectz00(BGl_cstructz00zzforeign_ctypez00));
				{	/* Foreign/ctype.scm 63 */
					BgL_cstructz00_bglt BgL_arg2873z00_1398;

					{	/* Foreign/ctype.scm 63 */
						BgL_cstructz00_bglt BgL_res3042z00_1414;

						{	/* Foreign/ctype.scm 63 */
							BgL_cstructz00_bglt BgL_new2043z00_1405;

							BgL_new2043z00_1405 =
								((BgL_cstructz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cstructz00_bgl))));
							{	/* Foreign/ctype.scm 63 */
								BgL_cstructz00_bglt BgL_res3041z00_1413;

								{	/* Foreign/ctype.scm 63 */
									BgL_cstructz00_bglt BgL_new2068z00_1406;

									BgL_new2068z00_1406 = BgL_new2043z00_1405;
									{	/* Foreign/ctype.scm 63 */
										bool_t BgL_structzf32065zf3_1410;

										obj_t BgL_fields2066z00_1411;

										obj_t BgL_cstructza22067za2_1412;

										BgL_structzf32065zf3_1410 = BgL_structzf32045zf3_80;
										BgL_fields2066z00_1411 = BgL_fields2046z00_81;
										BgL_cstructza22067za2_1412 = BgL_cstructza22047za2_82;
										((((BgL_cstructz00_bglt) CREF(BgL_new2068z00_1406))->
												BgL_structzf3zf3) =
											((bool_t) BgL_structzf32065zf3_1410), BUNSPEC);
										((((BgL_cstructz00_bglt) CREF(BgL_new2068z00_1406))->
												BgL_fieldsz00) =
											((obj_t) BgL_fields2066z00_1411), BUNSPEC);
										((((BgL_cstructz00_bglt) CREF(BgL_new2068z00_1406))->
												BgL_cstructza2za2) =
											((obj_t) BgL_cstructza22067za2_1412), BUNSPEC);
										BgL_res3041z00_1413 = BgL_new2068z00_1406;
								}} BgL_res3041z00_1413;
							}
							BgL_res3042z00_1414 = BgL_new2043z00_1405;
						}
						BgL_arg2873z00_1398 = BgL_res3042z00_1414;
					}
					{	/* Foreign/ctype.scm 63 */
						obj_t BgL_auxz00_3295;

						BgL_objectz00_bglt BgL_auxz00_3293;

						BgL_auxz00_3295 = (obj_t) (BgL_arg2873z00_1398);
						BgL_auxz00_3293 = (BgL_objectz00_bglt) (BgL_aux2063z00_1396);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_3293, BgL_auxz00_3295);
				}}
				return
					((BgL_cstructz00_bglt) (BgL_cstructz00_bglt) (BgL_aux2063z00_1396));
			}
		}
	}



/* _make-cstruct */
	obj_t BGl__makezd2cstructzd2zzforeign_ctypez00(obj_t BgL_envz00_2258,
		obj_t BgL_id2048z00_2259, obj_t BgL_name2049z00_2260,
		obj_t BgL_siza7e2050za7_2261, obj_t BgL_class2051z00_2262,
		obj_t BgL_coercezd2to2052zd2_2263, obj_t BgL_parents2053z00_2264,
		obj_t BgL_initzf32054zf3_2265, obj_t BgL_magiczf32055zf3_2266,
		obj_t BgL_z422056z42_2267, obj_t BgL_alias2057z00_2268,
		obj_t BgL_pointedzd2tozd2by2058z00_2269, obj_t BgL_tvector2059z00_2270,
		obj_t BgL_location2060z00_2271, obj_t BgL_importzd2location2061zd2_2272,
		obj_t BgL_occurrence2062z00_2273, obj_t BgL_structzf32045zf3_2274,
		obj_t BgL_fields2046z00_2275, obj_t BgL_cstructza22047za2_2276)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 63 */
			return
				(obj_t) (BGl_makezd2cstructzd2zzforeign_ctypez00(BgL_id2048z00_2259,
					BgL_name2049z00_2260, BgL_siza7e2050za7_2261, BgL_class2051z00_2262,
					BgL_coercezd2to2052zd2_2263, BgL_parents2053z00_2264,
					CBOOL(BgL_initzf32054zf3_2265), CBOOL(BgL_magiczf32055zf3_2266),
					BgL_z422056z42_2267, BgL_alias2057z00_2268,
					BgL_pointedzd2tozd2by2058z00_2269, BgL_tvector2059z00_2270,
					BgL_location2060z00_2271, BgL_importzd2location2061zd2_2272,
					CINT(BgL_occurrence2062z00_2273), CBOOL(BgL_structzf32045zf3_2274),
					BgL_fields2046z00_2275, BgL_cstructza22047za2_2276));
		}
	}



/* fill-cstruct! */
	BGL_EXPORTED_DEF BgL_cstructz00_bglt
		BGl_fillzd2cstructz12zc0zzforeign_ctypez00(BgL_cstructz00_bglt
		BgL_new2068z00_83, bool_t BgL_structzf32065zf3_84,
		obj_t BgL_fields2066z00_85, obj_t BgL_cstructza22067za2_86)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 63 */
			{	/* Foreign/ctype.scm 63 */
				bool_t BgL_structzf32065zf3_2487;

				obj_t BgL_fields2066z00_2488;

				obj_t BgL_cstructza22067za2_2489;

				BgL_structzf32065zf3_2487 = BgL_structzf32065zf3_84;
				BgL_fields2066z00_2488 = BgL_fields2066z00_85;
				BgL_cstructza22067za2_2489 = BgL_cstructza22067za2_86;
				((((BgL_cstructz00_bglt) CREF(BgL_new2068z00_83))->BgL_structzf3zf3) =
					((bool_t) BgL_structzf32065zf3_2487), BUNSPEC);
				((((BgL_cstructz00_bglt) CREF(BgL_new2068z00_83))->BgL_fieldsz00) =
					((obj_t) BgL_fields2066z00_2488), BUNSPEC);
				((((BgL_cstructz00_bglt) CREF(BgL_new2068z00_83))->BgL_cstructza2za2) =
					((obj_t) BgL_cstructza22067za2_2489), BUNSPEC);
				return BgL_new2068z00_83;
			}
		}
	}



/* _fill-cstruct! */
	obj_t BGl__fillzd2cstructz12zc0zzforeign_ctypez00(obj_t BgL_envz00_2277,
		obj_t BgL_new2068z00_2278, obj_t BgL_structzf32065zf3_2279,
		obj_t BgL_fields2066z00_2280, obj_t BgL_cstructza22067za2_2281)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 63 */
			{	/* Foreign/ctype.scm 63 */
				BgL_cstructz00_bglt BgL_auxz00_3309;

				{	/* Foreign/ctype.scm 63 */
					BgL_cstructz00_bglt BgL_res3133z00_2497;

					{	/* Foreign/ctype.scm 63 */
						BgL_cstructz00_bglt BgL_new2068z00_2490;

						bool_t BgL_structzf32065zf3_2491;

						BgL_new2068z00_2490 = (BgL_cstructz00_bglt) (BgL_new2068z00_2278);
						BgL_structzf32065zf3_2491 = CBOOL(BgL_structzf32065zf3_2279);
						{	/* Foreign/ctype.scm 63 */
							bool_t BgL_structzf32065zf3_2494;

							obj_t BgL_fields2066z00_2495;

							obj_t BgL_cstructza22067za2_2496;

							BgL_structzf32065zf3_2494 = BgL_structzf32065zf3_2491;
							BgL_fields2066z00_2495 = BgL_fields2066z00_2280;
							BgL_cstructza22067za2_2496 = BgL_cstructza22067za2_2281;
							((((BgL_cstructz00_bglt) CREF(BgL_new2068z00_2490))->
									BgL_structzf3zf3) =
								((bool_t) BgL_structzf32065zf3_2494), BUNSPEC);
							((((BgL_cstructz00_bglt) CREF(BgL_new2068z00_2490))->
									BgL_fieldsz00) = ((obj_t) BgL_fields2066z00_2495), BUNSPEC);
							((((BgL_cstructz00_bglt) CREF(BgL_new2068z00_2490))->
									BgL_cstructza2za2) =
								((obj_t) BgL_cstructza22067za2_2496), BUNSPEC);
							BgL_res3133z00_2497 = BgL_new2068z00_2490;
						}
					}
					BgL_auxz00_3309 = BgL_res3133z00_2497;
				}
				return (obj_t) (BgL_auxz00_3309);
			}
		}
	}



/* %allocate-cstruct */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_z52allocatezd2cstructz80zzforeign_ctypez00()
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 63 */
			{	/* Foreign/ctype.scm 63 */
				BgL_typez00_bglt BgL_new2073z00_2498;

				BgL_new2073z00_2498 =
					((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_typez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new2073z00_2498),
					BGl_classzd2numzd2zz__objectz00(BGl_cstructz00zzforeign_ctypez00));
				{	/* Foreign/ctype.scm 63 */
					BgL_objectz00_bglt BgL_auxz00_3320;

					BgL_auxz00_3320 = (BgL_objectz00_bglt) (BgL_new2073z00_2498);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3320, BFALSE);
				}
				return BgL_new2073z00_2498;
			}
		}
	}



/* _%allocate-cstruct */
	obj_t BGl__z52allocatezd2cstructz80zzforeign_ctypez00(obj_t BgL_envz00_2221)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 63 */
			{	/* Foreign/ctype.scm 63 */
				BgL_typez00_bglt BgL_auxz00_3323;

				{	/* Foreign/ctype.scm 63 */
					BgL_typez00_bglt BgL_res3134z00_2502;

					{	/* Foreign/ctype.scm 63 */
						BgL_typez00_bglt BgL_new2073z00_2500;

						BgL_new2073z00_2500 =
							((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_typez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2073z00_2500),
							BGl_classzd2numzd2zz__objectz00
							(BGl_cstructz00zzforeign_ctypez00));
						{	/* Foreign/ctype.scm 63 */
							BgL_objectz00_bglt BgL_auxz00_3328;

							BgL_auxz00_3328 = (BgL_objectz00_bglt) (BgL_new2073z00_2500);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3328, BFALSE);
						}
						BgL_res3134z00_2502 = BgL_new2073z00_2500;
					}
					BgL_auxz00_3323 = BgL_res3134z00_2502;
				}
				return (obj_t) (BgL_auxz00_3323);
			}
		}
	}



/* cstruct-nil */
	BGL_EXPORTED_DEF BgL_cstructz00_bglt BGl_cstructzd2nilzd2zzforeign_ctypez00()
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 63 */
			if ((BGl_z52thezd2cstructzd2nilz52zzforeign_ctypez00 == BUNSPEC))
				{	/* Foreign/ctype.scm 63 */
					{	/* Foreign/ctype.scm 63 */
						BgL_typez00_bglt BgL_res3043z00_1426;

						{	/* Foreign/ctype.scm 63 */
							BgL_typez00_bglt BgL_new1598z00_1422;

							BgL_new1598z00_1422 =
								((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1598z00_1422),
								BGl_classzd2numzd2zz__objectz00(BGl_typez00zztype_typez00));
							{	/* Foreign/ctype.scm 63 */
								BgL_objectz00_bglt BgL_auxz00_3338;

								BgL_auxz00_3338 = (BgL_objectz00_bglt) (BgL_new1598z00_1422);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3338, BFALSE);
							}
							BgL_res3043z00_1426 = BgL_new1598z00_1422;
						}
						BGl_z52thezd2cstructzd2nilz52zzforeign_ctypez00 =
							(obj_t) (BgL_res3043z00_1426);
					}
					{	/* Foreign/ctype.scm 63 */
						BgL_typez00_bglt BgL_res3044z00_1458;

						{	/* Foreign/ctype.scm 63 */
							BgL_typez00_bglt BgL_new1581z00_1427;

							obj_t BgL_id1566z00_1428;

							int BgL_occurrence1580z00_1442;

							BgL_new1581z00_1427 =
								(BgL_typez00_bglt)
								(BGl_z52thezd2cstructzd2nilz52zzforeign_ctypez00);
							BgL_id1566z00_1428 = CNST_TABLE_REF(((long) 31));
							BgL_occurrence1580z00_1442 = (int) (((long) 0));
							{	/* Foreign/ctype.scm 63 */
								obj_t BgL_id1566z00_1443;

								obj_t BgL_name1567z00_1444;

								obj_t BgL_siza7e1568za7_1445;

								obj_t BgL_class1569z00_1446;

								obj_t BgL_coercezd2to1570zd2_1447;

								obj_t BgL_parents1571z00_1448;

								bool_t BgL_initzf31572zf3_1449;

								bool_t BgL_magiczf31573zf3_1450;

								obj_t BgL_z421574z42_1451;

								obj_t BgL_alias1575z00_1452;

								obj_t BgL_pointedzd2tozd2by1576z00_1453;

								obj_t BgL_tvector1577z00_1454;

								obj_t BgL_location1578z00_1455;

								obj_t BgL_importzd2location1579zd2_1456;

								int BgL_occurrence1580z00_1457;

								BgL_id1566z00_1443 = BgL_id1566z00_1428;
								BgL_name1567z00_1444 = BUNSPEC;
								BgL_siza7e1568za7_1445 = BUNSPEC;
								BgL_class1569z00_1446 = BUNSPEC;
								BgL_coercezd2to1570zd2_1447 = BUNSPEC;
								BgL_parents1571z00_1448 = BUNSPEC;
								BgL_initzf31572zf3_1449 = ((bool_t) 0);
								BgL_magiczf31573zf3_1450 = ((bool_t) 0);
								BgL_z421574z42_1451 = BUNSPEC;
								BgL_alias1575z00_1452 = BUNSPEC;
								BgL_pointedzd2tozd2by1576z00_1453 = BUNSPEC;
								BgL_tvector1577z00_1454 = BUNSPEC;
								BgL_location1578z00_1455 = BUNSPEC;
								BgL_importzd2location1579zd2_1456 = BUNSPEC;
								BgL_occurrence1580z00_1457 = BgL_occurrence1580z00_1442;
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1427))->BgL_idz00) =
									((obj_t) BgL_id1566z00_1443), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1427))->BgL_namez00) =
									((obj_t) BgL_name1567z00_1444), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1427))->
										BgL_siza7eza7) = ((obj_t) BgL_siza7e1568za7_1445), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1427))->
										BgL_classz00) = ((obj_t) BgL_class1569z00_1446), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1427))->
										BgL_coercezd2tozd2) =
									((obj_t) BgL_coercezd2to1570zd2_1447), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1427))->
										BgL_parentsz00) =
									((obj_t) BgL_parents1571z00_1448), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1427))->
										BgL_initzf3zf3) =
									((bool_t) BgL_initzf31572zf3_1449), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1427))->
										BgL_magiczf3zf3) =
									((bool_t) BgL_magiczf31573zf3_1450), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1427))->BgL_z42z42) =
									((obj_t) BgL_z421574z42_1451), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1427))->
										BgL_aliasz00) = ((obj_t) BgL_alias1575z00_1452), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1427))->
										BgL_pointedzd2tozd2byz00) =
									((obj_t) BgL_pointedzd2tozd2by1576z00_1453), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1427))->
										BgL_tvectorz00) =
									((obj_t) BgL_tvector1577z00_1454), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1427))->
										BgL_locationz00) =
									((obj_t) BgL_location1578z00_1455), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1427))->
										BgL_importzd2locationzd2) =
									((obj_t) BgL_importzd2location1579zd2_1456), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1427))->
										BgL_occurrencez00) =
									((int) BgL_occurrence1580z00_1457), BUNSPEC);
								BgL_res3044z00_1458 = BgL_new1581z00_1427;
						}} BgL_res3044z00_1458;
					}
					{	/* Foreign/ctype.scm 63 */
						long BgL_arg2876z00_805;

						BgL_arg2876z00_805 =
							BGl_classzd2numzd2zz__objectz00(BGl_cstructz00zzforeign_ctypez00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2cstructzd2nilz52zzforeign_ctypez00),
							BgL_arg2876z00_805);
					}
					{	/* Foreign/ctype.scm 63 */
						BgL_cstructz00_bglt BgL_arg2877z00_806;

						{	/* Foreign/ctype.scm 63 */
							BgL_cstructz00_bglt BgL_res3046z00_1473;

							{	/* Foreign/ctype.scm 63 */
								BgL_cstructz00_bglt BgL_new2043z00_1464;

								BgL_new2043z00_1464 =
									((BgL_cstructz00_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_cstructz00_bgl))));
								{	/* Foreign/ctype.scm 63 */
									BgL_cstructz00_bglt BgL_res3045z00_1472;

									{	/* Foreign/ctype.scm 63 */
										BgL_cstructz00_bglt BgL_new2068z00_1465;

										BgL_new2068z00_1465 = BgL_new2043z00_1464;
										{	/* Foreign/ctype.scm 63 */
											bool_t BgL_structzf32065zf3_1469;

											obj_t BgL_fields2066z00_1470;

											obj_t BgL_cstructza22067za2_1471;

											BgL_structzf32065zf3_1469 = ((bool_t) 0);
											BgL_fields2066z00_1470 = BUNSPEC;
											BgL_cstructza22067za2_1471 = BUNSPEC;
											((((BgL_cstructz00_bglt) CREF(BgL_new2068z00_1465))->
													BgL_structzf3zf3) =
												((bool_t) BgL_structzf32065zf3_1469), BUNSPEC);
											((((BgL_cstructz00_bglt) CREF(BgL_new2068z00_1465))->
													BgL_fieldsz00) =
												((obj_t) BgL_fields2066z00_1470), BUNSPEC);
											((((BgL_cstructz00_bglt) CREF(BgL_new2068z00_1465))->
													BgL_cstructza2za2) =
												((obj_t) BgL_cstructza22067za2_1471), BUNSPEC);
											BgL_res3045z00_1472 = BgL_new2068z00_1465;
									}} BgL_res3045z00_1472;
								}
								BgL_res3046z00_1473 = BgL_new2043z00_1464;
							}
							BgL_arg2877z00_806 = BgL_res3046z00_1473;
						}
						{	/* Foreign/ctype.scm 63 */
							obj_t BgL_auxz00_3369;

							BgL_objectz00_bglt BgL_auxz00_3367;

							BgL_auxz00_3369 = (obj_t) (BgL_arg2877z00_806);
							BgL_auxz00_3367 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2cstructzd2nilz52zzforeign_ctypez00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3367, BgL_auxz00_3369);
				}}}
			else
				{	/* Foreign/ctype.scm 63 */
					BFALSE;
				}
			return
				(BgL_cstructz00_bglt) (BGl_z52thezd2cstructzd2nilz52zzforeign_ctypez00);
		}
	}



/* _cstruct-nil */
	obj_t BGl__cstructzd2nilzd2zzforeign_ctypez00(obj_t BgL_envz00_2222)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 63 */
			return (obj_t) (BGl_cstructzd2nilzd2zzforeign_ctypez00());
		}
	}



/* cptr? */
	BGL_EXPORTED_DEF bool_t BGl_cptrzf3zf3zzforeign_ctypez00(obj_t
		BgL_obj1993z00_92)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 55 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1993z00_92,
				BGl_cptrz00zzforeign_ctypez00);
		}
	}



/* _cptr? */
	obj_t BGl__cptrzf3zf3zzforeign_ctypez00(obj_t BgL_envz00_2219,
		obj_t BgL_obj1993z00_2220)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 55 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1993z00_2220,
					BGl_cptrz00zzforeign_ctypez00));
		}
	}



/* widening-cptr */
	BGL_EXPORTED_DEF BgL_cptrz00_bglt
		BGl_wideningzd2cptrzd2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_btype1953z00_96, BgL_typez00_bglt BgL_pointzd2to1954zd2_97,
		bool_t BgL_arrayzf31955zf3_98)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 55 */
			{	/* Foreign/ctype.scm 55 */
				BgL_cptrz00_bglt BgL_new1956z00_1474;

				BgL_new1956z00_1474 =
					((BgL_cptrz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_cptrz00_bgl))));
				{	/* Foreign/ctype.scm 55 */
					BgL_cptrz00_bglt BgL_res3047z00_1482;

					{	/* Foreign/ctype.scm 55 */
						BgL_cptrz00_bglt BgL_new1981z00_1475;

						BgL_new1981z00_1475 = BgL_new1956z00_1474;
						{	/* Foreign/ctype.scm 55 */
							BgL_typez00_bglt BgL_btype1978z00_1479;

							BgL_typez00_bglt BgL_pointzd2to1979zd2_1480;

							bool_t BgL_arrayzf31980zf3_1481;

							BgL_btype1978z00_1479 = BgL_btype1953z00_96;
							BgL_pointzd2to1979zd2_1480 = BgL_pointzd2to1954zd2_97;
							BgL_arrayzf31980zf3_1481 = BgL_arrayzf31955zf3_98;
							((((BgL_cptrz00_bglt) CREF(BgL_new1981z00_1475))->BgL_btypez00) =
								((BgL_typez00_bglt) BgL_btype1978z00_1479), BUNSPEC);
							((((BgL_cptrz00_bglt) CREF(BgL_new1981z00_1475))->
									BgL_pointzd2tozd2) =
								((BgL_typez00_bglt) BgL_pointzd2to1979zd2_1480), BUNSPEC);
							((((BgL_cptrz00_bglt) CREF(BgL_new1981z00_1475))->
									BgL_arrayzf3zf3) =
								((bool_t) BgL_arrayzf31980zf3_1481), BUNSPEC);
							BgL_res3047z00_1482 = BgL_new1981z00_1475;
					}} BgL_res3047z00_1482;
				}
				return BgL_new1956z00_1474;
			}
		}
	}



/* _widening-cptr */
	obj_t BGl__wideningzd2cptrzd2zzforeign_ctypez00(obj_t BgL_envz00_2282,
		obj_t BgL_btype1953z00_2283, obj_t BgL_pointzd2to1954zd2_2284,
		obj_t BgL_arrayzf31955zf3_2285)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 55 */
			return
				(obj_t) (BGl_wideningzd2cptrzd2zzforeign_ctypez00(
					(BgL_typez00_bglt) (BgL_btype1953z00_2283),
					(BgL_typez00_bglt) (BgL_pointzd2to1954zd2_2284),
					CBOOL(BgL_arrayzf31955zf3_2285)));
		}
	}



/* make-cptr */
	BGL_EXPORTED_DEF BgL_cptrz00_bglt BGl_makezd2cptrzd2zzforeign_ctypez00(obj_t
		BgL_id1961z00_99, obj_t BgL_name1962z00_100, obj_t BgL_siza7e1963za7_101,
		obj_t BgL_class1964z00_102, obj_t BgL_coercezd2to1965zd2_103,
		obj_t BgL_parents1966z00_104, bool_t BgL_initzf31967zf3_105,
		bool_t BgL_magiczf31968zf3_106, obj_t BgL_z421969z42_107,
		obj_t BgL_alias1970z00_108, obj_t BgL_pointedzd2tozd2by1971z00_109,
		obj_t BgL_tvector1972z00_110, obj_t BgL_location1973z00_111,
		obj_t BgL_importzd2location1974zd2_112, int BgL_occurrence1975z00_113,
		BgL_typez00_bglt BgL_btype1958z00_114,
		BgL_typez00_bglt BgL_pointzd2to1959zd2_115, bool_t BgL_arrayzf31960zf3_116)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 55 */
			{	/* Foreign/ctype.scm 55 */
				BgL_typez00_bglt BgL_aux1976z00_1483;

				BgL_aux1976z00_1483 =
					BGl_makezd2typezd2zztype_typez00(BgL_id1961z00_99,
					BgL_name1962z00_100, BgL_siza7e1963za7_101, BgL_class1964z00_102,
					BgL_coercezd2to1965zd2_103, BgL_parents1966z00_104,
					BgL_initzf31967zf3_105, BgL_magiczf31968zf3_106, BgL_z421969z42_107,
					BgL_alias1970z00_108, BgL_pointedzd2tozd2by1971z00_109,
					BgL_tvector1972z00_110, BgL_location1973z00_111,
					BgL_importzd2location1974zd2_112, BgL_occurrence1975z00_113);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux1976z00_1483),
					BGl_classzd2numzd2zz__objectz00(BGl_cptrz00zzforeign_ctypez00));
				{	/* Foreign/ctype.scm 55 */
					BgL_cptrz00_bglt BgL_arg2879z00_1485;

					{	/* Foreign/ctype.scm 55 */
						BgL_cptrz00_bglt BgL_res3049z00_1501;

						{	/* Foreign/ctype.scm 55 */
							BgL_cptrz00_bglt BgL_new1956z00_1492;

							BgL_new1956z00_1492 =
								((BgL_cptrz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cptrz00_bgl))));
							{	/* Foreign/ctype.scm 55 */
								BgL_cptrz00_bglt BgL_res3048z00_1500;

								{	/* Foreign/ctype.scm 55 */
									BgL_cptrz00_bglt BgL_new1981z00_1493;

									BgL_new1981z00_1493 = BgL_new1956z00_1492;
									{	/* Foreign/ctype.scm 55 */
										BgL_typez00_bglt BgL_btype1978z00_1497;

										BgL_typez00_bglt BgL_pointzd2to1979zd2_1498;

										bool_t BgL_arrayzf31980zf3_1499;

										BgL_btype1978z00_1497 = BgL_btype1958z00_114;
										BgL_pointzd2to1979zd2_1498 = BgL_pointzd2to1959zd2_115;
										BgL_arrayzf31980zf3_1499 = BgL_arrayzf31960zf3_116;
										((((BgL_cptrz00_bglt) CREF(BgL_new1981z00_1493))->
												BgL_btypez00) =
											((BgL_typez00_bglt) BgL_btype1978z00_1497), BUNSPEC);
										((((BgL_cptrz00_bglt) CREF(BgL_new1981z00_1493))->
												BgL_pointzd2tozd2) =
											((BgL_typez00_bglt) BgL_pointzd2to1979zd2_1498), BUNSPEC);
										((((BgL_cptrz00_bglt) CREF(BgL_new1981z00_1493))->
												BgL_arrayzf3zf3) =
											((bool_t) BgL_arrayzf31980zf3_1499), BUNSPEC);
										BgL_res3048z00_1500 = BgL_new1981z00_1493;
								}} BgL_res3048z00_1500;
							}
							BgL_res3049z00_1501 = BgL_new1956z00_1492;
						}
						BgL_arg2879z00_1485 = BgL_res3049z00_1501;
					}
					{	/* Foreign/ctype.scm 55 */
						obj_t BgL_auxz00_3397;

						BgL_objectz00_bglt BgL_auxz00_3395;

						BgL_auxz00_3397 = (obj_t) (BgL_arg2879z00_1485);
						BgL_auxz00_3395 = (BgL_objectz00_bglt) (BgL_aux1976z00_1483);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_3395, BgL_auxz00_3397);
				}}
				return ((BgL_cptrz00_bglt) (BgL_cptrz00_bglt) (BgL_aux1976z00_1483));
			}
		}
	}



/* _make-cptr */
	obj_t BGl__makezd2cptrzd2zzforeign_ctypez00(obj_t BgL_envz00_2286,
		obj_t BgL_id1961z00_2287, obj_t BgL_name1962z00_2288,
		obj_t BgL_siza7e1963za7_2289, obj_t BgL_class1964z00_2290,
		obj_t BgL_coercezd2to1965zd2_2291, obj_t BgL_parents1966z00_2292,
		obj_t BgL_initzf31967zf3_2293, obj_t BgL_magiczf31968zf3_2294,
		obj_t BgL_z421969z42_2295, obj_t BgL_alias1970z00_2296,
		obj_t BgL_pointedzd2tozd2by1971z00_2297, obj_t BgL_tvector1972z00_2298,
		obj_t BgL_location1973z00_2299, obj_t BgL_importzd2location1974zd2_2300,
		obj_t BgL_occurrence1975z00_2301, obj_t BgL_btype1958z00_2302,
		obj_t BgL_pointzd2to1959zd2_2303, obj_t BgL_arrayzf31960zf3_2304)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 55 */
			return
				(obj_t) (BGl_makezd2cptrzd2zzforeign_ctypez00(BgL_id1961z00_2287,
					BgL_name1962z00_2288, BgL_siza7e1963za7_2289, BgL_class1964z00_2290,
					BgL_coercezd2to1965zd2_2291, BgL_parents1966z00_2292,
					CBOOL(BgL_initzf31967zf3_2293), CBOOL(BgL_magiczf31968zf3_2294),
					BgL_z421969z42_2295, BgL_alias1970z00_2296,
					BgL_pointedzd2tozd2by1971z00_2297, BgL_tvector1972z00_2298,
					BgL_location1973z00_2299, BgL_importzd2location1974zd2_2300,
					CINT(BgL_occurrence1975z00_2301),
					(BgL_typez00_bglt) (BgL_btype1958z00_2302),
					(BgL_typez00_bglt) (BgL_pointzd2to1959zd2_2303),
					CBOOL(BgL_arrayzf31960zf3_2304)));
		}
	}



/* fill-cptr! */
	BGL_EXPORTED_DEF BgL_cptrz00_bglt
		BGl_fillzd2cptrz12zc0zzforeign_ctypez00(BgL_cptrz00_bglt BgL_new1981z00_117,
		BgL_typez00_bglt BgL_btype1978z00_118,
		BgL_typez00_bglt BgL_pointzd2to1979zd2_119, bool_t BgL_arrayzf31980zf3_120)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 55 */
			{	/* Foreign/ctype.scm 55 */
				BgL_typez00_bglt BgL_btype1978z00_2504;

				BgL_typez00_bglt BgL_pointzd2to1979zd2_2505;

				bool_t BgL_arrayzf31980zf3_2506;

				BgL_btype1978z00_2504 = BgL_btype1978z00_118;
				BgL_pointzd2to1979zd2_2505 = BgL_pointzd2to1979zd2_119;
				BgL_arrayzf31980zf3_2506 = BgL_arrayzf31980zf3_120;
				((((BgL_cptrz00_bglt) CREF(BgL_new1981z00_117))->BgL_btypez00) =
					((BgL_typez00_bglt) BgL_btype1978z00_2504), BUNSPEC);
				((((BgL_cptrz00_bglt) CREF(BgL_new1981z00_117))->BgL_pointzd2tozd2) =
					((BgL_typez00_bglt) BgL_pointzd2to1979zd2_2505), BUNSPEC);
				((((BgL_cptrz00_bglt) CREF(BgL_new1981z00_117))->BgL_arrayzf3zf3) =
					((bool_t) BgL_arrayzf31980zf3_2506), BUNSPEC);
				return BgL_new1981z00_117;
			}
		}
	}



/* _fill-cptr! */
	obj_t BGl__fillzd2cptrz12zc0zzforeign_ctypez00(obj_t BgL_envz00_2305,
		obj_t BgL_new1981z00_2306, obj_t BgL_btype1978z00_2307,
		obj_t BgL_pointzd2to1979zd2_2308, obj_t BgL_arrayzf31980zf3_2309)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 55 */
			{	/* Foreign/ctype.scm 55 */
				BgL_cptrz00_bglt BgL_auxz00_3413;

				{	/* Foreign/ctype.scm 55 */
					BgL_cptrz00_bglt BgL_res3135z00_2514;

					{	/* Foreign/ctype.scm 55 */
						BgL_cptrz00_bglt BgL_new1981z00_2507;

						BgL_typez00_bglt BgL_btype1978z00_2508;

						BgL_typez00_bglt BgL_pointzd2to1979zd2_2509;

						bool_t BgL_arrayzf31980zf3_2510;

						BgL_new1981z00_2507 = (BgL_cptrz00_bglt) (BgL_new1981z00_2306);
						BgL_btype1978z00_2508 = (BgL_typez00_bglt) (BgL_btype1978z00_2307);
						BgL_pointzd2to1979zd2_2509 =
							(BgL_typez00_bglt) (BgL_pointzd2to1979zd2_2308);
						BgL_arrayzf31980zf3_2510 = CBOOL(BgL_arrayzf31980zf3_2309);
						{	/* Foreign/ctype.scm 55 */
							BgL_typez00_bglt BgL_btype1978z00_2511;

							BgL_typez00_bglt BgL_pointzd2to1979zd2_2512;

							bool_t BgL_arrayzf31980zf3_2513;

							BgL_btype1978z00_2511 = BgL_btype1978z00_2508;
							BgL_pointzd2to1979zd2_2512 = BgL_pointzd2to1979zd2_2509;
							BgL_arrayzf31980zf3_2513 = BgL_arrayzf31980zf3_2510;
							((((BgL_cptrz00_bglt) CREF(BgL_new1981z00_2507))->BgL_btypez00) =
								((BgL_typez00_bglt) BgL_btype1978z00_2511), BUNSPEC);
							((((BgL_cptrz00_bglt) CREF(BgL_new1981z00_2507))->
									BgL_pointzd2tozd2) =
								((BgL_typez00_bglt) BgL_pointzd2to1979zd2_2512), BUNSPEC);
							((((BgL_cptrz00_bglt) CREF(BgL_new1981z00_2507))->
									BgL_arrayzf3zf3) =
								((bool_t) BgL_arrayzf31980zf3_2513), BUNSPEC);
							BgL_res3135z00_2514 = BgL_new1981z00_2507;
						}
					}
					BgL_auxz00_3413 = BgL_res3135z00_2514;
				}
				return (obj_t) (BgL_auxz00_3413);
			}
		}
	}



/* %allocate-cptr */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_z52allocatezd2cptrz80zzforeign_ctypez00()
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 55 */
			{	/* Foreign/ctype.scm 55 */
				BgL_typez00_bglt BgL_new1986z00_2515;

				BgL_new1986z00_2515 =
					((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_typez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new1986z00_2515),
					BGl_classzd2numzd2zz__objectz00(BGl_cptrz00zzforeign_ctypez00));
				{	/* Foreign/ctype.scm 55 */
					BgL_objectz00_bglt BgL_auxz00_3426;

					BgL_auxz00_3426 = (BgL_objectz00_bglt) (BgL_new1986z00_2515);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3426, BFALSE);
				}
				return BgL_new1986z00_2515;
			}
		}
	}



/* _%allocate-cptr */
	obj_t BGl__z52allocatezd2cptrz80zzforeign_ctypez00(obj_t BgL_envz00_2217)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 55 */
			{	/* Foreign/ctype.scm 55 */
				BgL_typez00_bglt BgL_auxz00_3429;

				{	/* Foreign/ctype.scm 55 */
					BgL_typez00_bglt BgL_res3136z00_2519;

					{	/* Foreign/ctype.scm 55 */
						BgL_typez00_bglt BgL_new1986z00_2517;

						BgL_new1986z00_2517 =
							((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_typez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1986z00_2517),
							BGl_classzd2numzd2zz__objectz00(BGl_cptrz00zzforeign_ctypez00));
						{	/* Foreign/ctype.scm 55 */
							BgL_objectz00_bglt BgL_auxz00_3434;

							BgL_auxz00_3434 = (BgL_objectz00_bglt) (BgL_new1986z00_2517);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3434, BFALSE);
						}
						BgL_res3136z00_2519 = BgL_new1986z00_2517;
					}
					BgL_auxz00_3429 = BgL_res3136z00_2519;
				}
				return (obj_t) (BgL_auxz00_3429);
			}
		}
	}



/* cptr-nil */
	BGL_EXPORTED_DEF BgL_cptrz00_bglt BGl_cptrzd2nilzd2zzforeign_ctypez00()
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 55 */
			if ((BGl_z52thezd2cptrzd2nilz52zzforeign_ctypez00 == BUNSPEC))
				{	/* Foreign/ctype.scm 55 */
					{	/* Foreign/ctype.scm 55 */
						BgL_typez00_bglt BgL_res3050z00_1513;

						{	/* Foreign/ctype.scm 55 */
							BgL_typez00_bglt BgL_new1598z00_1509;

							BgL_new1598z00_1509 =
								((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1598z00_1509),
								BGl_classzd2numzd2zz__objectz00(BGl_typez00zztype_typez00));
							{	/* Foreign/ctype.scm 55 */
								BgL_objectz00_bglt BgL_auxz00_3444;

								BgL_auxz00_3444 = (BgL_objectz00_bglt) (BgL_new1598z00_1509);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3444, BFALSE);
							}
							BgL_res3050z00_1513 = BgL_new1598z00_1509;
						}
						BGl_z52thezd2cptrzd2nilz52zzforeign_ctypez00 =
							(obj_t) (BgL_res3050z00_1513);
					}
					{	/* Foreign/ctype.scm 55 */
						BgL_typez00_bglt BgL_res3051z00_1545;

						{	/* Foreign/ctype.scm 55 */
							BgL_typez00_bglt BgL_new1581z00_1514;

							obj_t BgL_id1566z00_1515;

							int BgL_occurrence1580z00_1529;

							BgL_new1581z00_1514 =
								(BgL_typez00_bglt)
								(BGl_z52thezd2cptrzd2nilz52zzforeign_ctypez00);
							BgL_id1566z00_1515 = CNST_TABLE_REF(((long) 31));
							BgL_occurrence1580z00_1529 = (int) (((long) 0));
							{	/* Foreign/ctype.scm 55 */
								obj_t BgL_id1566z00_1530;

								obj_t BgL_name1567z00_1531;

								obj_t BgL_siza7e1568za7_1532;

								obj_t BgL_class1569z00_1533;

								obj_t BgL_coercezd2to1570zd2_1534;

								obj_t BgL_parents1571z00_1535;

								bool_t BgL_initzf31572zf3_1536;

								bool_t BgL_magiczf31573zf3_1537;

								obj_t BgL_z421574z42_1538;

								obj_t BgL_alias1575z00_1539;

								obj_t BgL_pointedzd2tozd2by1576z00_1540;

								obj_t BgL_tvector1577z00_1541;

								obj_t BgL_location1578z00_1542;

								obj_t BgL_importzd2location1579zd2_1543;

								int BgL_occurrence1580z00_1544;

								BgL_id1566z00_1530 = BgL_id1566z00_1515;
								BgL_name1567z00_1531 = BUNSPEC;
								BgL_siza7e1568za7_1532 = BUNSPEC;
								BgL_class1569z00_1533 = BUNSPEC;
								BgL_coercezd2to1570zd2_1534 = BUNSPEC;
								BgL_parents1571z00_1535 = BUNSPEC;
								BgL_initzf31572zf3_1536 = ((bool_t) 0);
								BgL_magiczf31573zf3_1537 = ((bool_t) 0);
								BgL_z421574z42_1538 = BUNSPEC;
								BgL_alias1575z00_1539 = BUNSPEC;
								BgL_pointedzd2tozd2by1576z00_1540 = BUNSPEC;
								BgL_tvector1577z00_1541 = BUNSPEC;
								BgL_location1578z00_1542 = BUNSPEC;
								BgL_importzd2location1579zd2_1543 = BUNSPEC;
								BgL_occurrence1580z00_1544 = BgL_occurrence1580z00_1529;
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1514))->BgL_idz00) =
									((obj_t) BgL_id1566z00_1530), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1514))->BgL_namez00) =
									((obj_t) BgL_name1567z00_1531), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1514))->
										BgL_siza7eza7) = ((obj_t) BgL_siza7e1568za7_1532), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1514))->
										BgL_classz00) = ((obj_t) BgL_class1569z00_1533), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1514))->
										BgL_coercezd2tozd2) =
									((obj_t) BgL_coercezd2to1570zd2_1534), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1514))->
										BgL_parentsz00) =
									((obj_t) BgL_parents1571z00_1535), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1514))->
										BgL_initzf3zf3) =
									((bool_t) BgL_initzf31572zf3_1536), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1514))->
										BgL_magiczf3zf3) =
									((bool_t) BgL_magiczf31573zf3_1537), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1514))->BgL_z42z42) =
									((obj_t) BgL_z421574z42_1538), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1514))->
										BgL_aliasz00) = ((obj_t) BgL_alias1575z00_1539), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1514))->
										BgL_pointedzd2tozd2byz00) =
									((obj_t) BgL_pointedzd2tozd2by1576z00_1540), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1514))->
										BgL_tvectorz00) =
									((obj_t) BgL_tvector1577z00_1541), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1514))->
										BgL_locationz00) =
									((obj_t) BgL_location1578z00_1542), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1514))->
										BgL_importzd2locationzd2) =
									((obj_t) BgL_importzd2location1579zd2_1543), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1514))->
										BgL_occurrencez00) =
									((int) BgL_occurrence1580z00_1544), BUNSPEC);
								BgL_res3051z00_1545 = BgL_new1581z00_1514;
						}} BgL_res3051z00_1545;
					}
					{	/* Foreign/ctype.scm 55 */
						long BgL_arg2882z00_818;

						BgL_arg2882z00_818 =
							BGl_classzd2numzd2zz__objectz00(BGl_cptrz00zzforeign_ctypez00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2cptrzd2nilz52zzforeign_ctypez00),
							BgL_arg2882z00_818);
					}
					{	/* Foreign/ctype.scm 55 */
						BgL_cptrz00_bglt BgL_arg2883z00_819;

						{	/* Foreign/ctype.scm 55 */
							BgL_typez00_bglt BgL_arg2884z00_820;

							BgL_typez00_bglt BgL_arg2885z00_821;

							BgL_arg2884z00_820 = BGl_typezd2nilzd2zztype_typez00();
							BgL_arg2885z00_821 = BGl_typezd2nilzd2zztype_typez00();
							{	/* Foreign/ctype.scm 55 */
								BgL_cptrz00_bglt BgL_res3053z00_1560;

								{	/* Foreign/ctype.scm 55 */
									BgL_cptrz00_bglt BgL_new1956z00_1551;

									BgL_new1956z00_1551 =
										((BgL_cptrz00_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_cptrz00_bgl))));
									{	/* Foreign/ctype.scm 55 */
										BgL_cptrz00_bglt BgL_res3052z00_1559;

										{	/* Foreign/ctype.scm 55 */
											BgL_cptrz00_bglt BgL_new1981z00_1552;

											BgL_new1981z00_1552 = BgL_new1956z00_1551;
											{	/* Foreign/ctype.scm 55 */
												BgL_typez00_bglt BgL_btype1978z00_1556;

												BgL_typez00_bglt BgL_pointzd2to1979zd2_1557;

												bool_t BgL_arrayzf31980zf3_1558;

												BgL_btype1978z00_1556 = BgL_arg2884z00_820;
												BgL_pointzd2to1979zd2_1557 = BgL_arg2885z00_821;
												BgL_arrayzf31980zf3_1558 = ((bool_t) 0);
												((((BgL_cptrz00_bglt) CREF(BgL_new1981z00_1552))->
														BgL_btypez00) =
													((BgL_typez00_bglt) BgL_btype1978z00_1556), BUNSPEC);
												((((BgL_cptrz00_bglt) CREF(BgL_new1981z00_1552))->
														BgL_pointzd2tozd2) =
													((BgL_typez00_bglt) BgL_pointzd2to1979zd2_1557),
													BUNSPEC);
												((((BgL_cptrz00_bglt) CREF(BgL_new1981z00_1552))->
														BgL_arrayzf3zf3) =
													((bool_t) BgL_arrayzf31980zf3_1558), BUNSPEC);
												BgL_res3052z00_1559 = BgL_new1981z00_1552;
										}} BgL_res3052z00_1559;
									}
									BgL_res3053z00_1560 = BgL_new1956z00_1551;
								}
								BgL_arg2883z00_819 = BgL_res3053z00_1560;
						}}
						{	/* Foreign/ctype.scm 55 */
							obj_t BgL_auxz00_3477;

							BgL_objectz00_bglt BgL_auxz00_3475;

							BgL_auxz00_3477 = (obj_t) (BgL_arg2883z00_819);
							BgL_auxz00_3475 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2cptrzd2nilz52zzforeign_ctypez00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3475, BgL_auxz00_3477);
				}}}
			else
				{	/* Foreign/ctype.scm 55 */
					BFALSE;
				}
			return (BgL_cptrz00_bglt) (BGl_z52thezd2cptrzd2nilz52zzforeign_ctypez00);
		}
	}



/* _cptr-nil */
	obj_t BGl__cptrzd2nilzd2zzforeign_ctypez00(obj_t BgL_envz00_2218)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 55 */
			return (obj_t) (BGl_cptrzd2nilzd2zzforeign_ctypez00());
		}
	}



/* cfunction? */
	BGL_EXPORTED_DEF bool_t BGl_cfunctionzf3zf3zzforeign_ctypez00(obj_t
		BgL_obj1905z00_124)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 45 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1905z00_124,
				BGl_cfunctionz00zzforeign_ctypez00);
		}
	}



/* _cfunction? */
	obj_t BGl__cfunctionzf3zf3zzforeign_ctypez00(obj_t BgL_envz00_2215,
		obj_t BgL_obj1905z00_2216)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 45 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1905z00_2216,
					BGl_cfunctionz00zzforeign_ctypez00));
		}
	}



/* widening-cfunction */
	BGL_EXPORTED_DEF BgL_cfunctionz00_bglt
		BGl_wideningzd2cfunctionzd2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_btype1861z00_128, long BgL_arity1862z00_129,
		BgL_typez00_bglt BgL_typezd2res1863zd2_130,
		obj_t BgL_typezd2args1864zd2_131)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 45 */
			{	/* Foreign/ctype.scm 45 */
				BgL_cfunctionz00_bglt BgL_new1865z00_1561;

				BgL_new1865z00_1561 =
					((BgL_cfunctionz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_cfunctionz00_bgl))));
				{	/* Foreign/ctype.scm 45 */
					BgL_cfunctionz00_bglt BgL_res3054z00_1571;

					{	/* Foreign/ctype.scm 45 */
						BgL_cfunctionz00_bglt BgL_new1892z00_1562;

						BgL_new1892z00_1562 = BgL_new1865z00_1561;
						{	/* Foreign/ctype.scm 45 */
							BgL_typez00_bglt BgL_btype1888z00_1567;

							long BgL_arity1889z00_1568;

							BgL_typez00_bglt BgL_typezd2res1890zd2_1569;

							obj_t BgL_typezd2args1891zd2_1570;

							BgL_btype1888z00_1567 = BgL_btype1861z00_128;
							BgL_arity1889z00_1568 = BgL_arity1862z00_129;
							BgL_typezd2res1890zd2_1569 = BgL_typezd2res1863zd2_130;
							BgL_typezd2args1891zd2_1570 = BgL_typezd2args1864zd2_131;
							((((BgL_cfunctionz00_bglt) CREF(BgL_new1892z00_1562))->
									BgL_btypez00) =
								((BgL_typez00_bglt) BgL_btype1888z00_1567), BUNSPEC);
							((((BgL_cfunctionz00_bglt) CREF(BgL_new1892z00_1562))->
									BgL_arityz00) = ((long) BgL_arity1889z00_1568), BUNSPEC);
							((((BgL_cfunctionz00_bglt) CREF(BgL_new1892z00_1562))->
									BgL_typezd2reszd2) =
								((BgL_typez00_bglt) BgL_typezd2res1890zd2_1569), BUNSPEC);
							((((BgL_cfunctionz00_bglt) CREF(BgL_new1892z00_1562))->
									BgL_typezd2argszd2) =
								((obj_t) BgL_typezd2args1891zd2_1570), BUNSPEC);
							BgL_res3054z00_1571 = BgL_new1892z00_1562;
					}} BgL_res3054z00_1571;
				}
				return BgL_new1865z00_1561;
			}
		}
	}



/* _widening-cfunction */
	obj_t BGl__wideningzd2cfunctionzd2zzforeign_ctypez00(obj_t BgL_envz00_2310,
		obj_t BgL_btype1861z00_2311, obj_t BgL_arity1862z00_2312,
		obj_t BgL_typezd2res1863zd2_2313, obj_t BgL_typezd2args1864zd2_2314)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 45 */
			return
				(obj_t) (BGl_wideningzd2cfunctionzd2zzforeign_ctypez00(
					(BgL_typez00_bglt) (BgL_btype1861z00_2311),
					(long) CINT(BgL_arity1862z00_2312),
					(BgL_typez00_bglt) (BgL_typezd2res1863zd2_2313),
					BgL_typezd2args1864zd2_2314));
		}
	}



/* make-cfunction */
	BGL_EXPORTED_DEF BgL_cfunctionz00_bglt
		BGl_makezd2cfunctionzd2zzforeign_ctypez00(obj_t BgL_id1871z00_132,
		obj_t BgL_name1872z00_133, obj_t BgL_siza7e1873za7_134,
		obj_t BgL_class1874z00_135, obj_t BgL_coercezd2to1875zd2_136,
		obj_t BgL_parents1876z00_137, bool_t BgL_initzf31877zf3_138,
		bool_t BgL_magiczf31878zf3_139, obj_t BgL_z421879z42_140,
		obj_t BgL_alias1880z00_141, obj_t BgL_pointedzd2tozd2by1881z00_142,
		obj_t BgL_tvector1882z00_143, obj_t BgL_location1883z00_144,
		obj_t BgL_importzd2location1884zd2_145, int BgL_occurrence1885z00_146,
		BgL_typez00_bglt BgL_btype1867z00_147, long BgL_arity1868z00_148,
		BgL_typez00_bglt BgL_typezd2res1869zd2_149,
		obj_t BgL_typezd2args1870zd2_150)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 45 */
			{	/* Foreign/ctype.scm 45 */
				BgL_typez00_bglt BgL_aux1886z00_1572;

				BgL_aux1886z00_1572 =
					BGl_makezd2typezd2zztype_typez00(BgL_id1871z00_132,
					BgL_name1872z00_133, BgL_siza7e1873za7_134, BgL_class1874z00_135,
					BgL_coercezd2to1875zd2_136, BgL_parents1876z00_137,
					BgL_initzf31877zf3_138, BgL_magiczf31878zf3_139, BgL_z421879z42_140,
					BgL_alias1880z00_141, BgL_pointedzd2tozd2by1881z00_142,
					BgL_tvector1882z00_143, BgL_location1883z00_144,
					BgL_importzd2location1884zd2_145, BgL_occurrence1885z00_146);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux1886z00_1572),
					BGl_classzd2numzd2zz__objectz00(BGl_cfunctionz00zzforeign_ctypez00));
				{	/* Foreign/ctype.scm 45 */
					BgL_cfunctionz00_bglt BgL_arg2887z00_1574;

					{	/* Foreign/ctype.scm 45 */
						BgL_cfunctionz00_bglt BgL_res3056z00_1593;

						{	/* Foreign/ctype.scm 45 */
							BgL_cfunctionz00_bglt BgL_new1865z00_1582;

							BgL_new1865z00_1582 =
								((BgL_cfunctionz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cfunctionz00_bgl))));
							{	/* Foreign/ctype.scm 45 */
								BgL_cfunctionz00_bglt BgL_res3055z00_1592;

								{	/* Foreign/ctype.scm 45 */
									BgL_cfunctionz00_bglt BgL_new1892z00_1583;

									BgL_new1892z00_1583 = BgL_new1865z00_1582;
									{	/* Foreign/ctype.scm 45 */
										BgL_typez00_bglt BgL_btype1888z00_1588;

										long BgL_arity1889z00_1589;

										BgL_typez00_bglt BgL_typezd2res1890zd2_1590;

										obj_t BgL_typezd2args1891zd2_1591;

										BgL_btype1888z00_1588 = BgL_btype1867z00_147;
										BgL_arity1889z00_1589 = BgL_arity1868z00_148;
										BgL_typezd2res1890zd2_1590 = BgL_typezd2res1869zd2_149;
										BgL_typezd2args1891zd2_1591 = BgL_typezd2args1870zd2_150;
										((((BgL_cfunctionz00_bglt) CREF(BgL_new1892z00_1583))->
												BgL_btypez00) =
											((BgL_typez00_bglt) BgL_btype1888z00_1588), BUNSPEC);
										((((BgL_cfunctionz00_bglt) CREF(BgL_new1892z00_1583))->
												BgL_arityz00) =
											((long) BgL_arity1889z00_1589), BUNSPEC);
										((((BgL_cfunctionz00_bglt) CREF(BgL_new1892z00_1583))->
												BgL_typezd2reszd2) =
											((BgL_typez00_bglt) BgL_typezd2res1890zd2_1590), BUNSPEC);
										((((BgL_cfunctionz00_bglt) CREF(BgL_new1892z00_1583))->
												BgL_typezd2argszd2) =
											((obj_t) BgL_typezd2args1891zd2_1591), BUNSPEC);
										BgL_res3055z00_1592 = BgL_new1892z00_1583;
								}} BgL_res3055z00_1592;
							}
							BgL_res3056z00_1593 = BgL_new1865z00_1582;
						}
						BgL_arg2887z00_1574 = BgL_res3056z00_1593;
					}
					{	/* Foreign/ctype.scm 45 */
						obj_t BgL_auxz00_3507;

						BgL_objectz00_bglt BgL_auxz00_3505;

						BgL_auxz00_3507 = (obj_t) (BgL_arg2887z00_1574);
						BgL_auxz00_3505 = (BgL_objectz00_bglt) (BgL_aux1886z00_1572);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_3505, BgL_auxz00_3507);
				}}
				return
					((BgL_cfunctionz00_bglt)
					(BgL_cfunctionz00_bglt) (BgL_aux1886z00_1572));
			}
		}
	}



/* _make-cfunction */
	obj_t BGl__makezd2cfunctionzd2zzforeign_ctypez00(obj_t BgL_envz00_2315,
		obj_t BgL_id1871z00_2316, obj_t BgL_name1872z00_2317,
		obj_t BgL_siza7e1873za7_2318, obj_t BgL_class1874z00_2319,
		obj_t BgL_coercezd2to1875zd2_2320, obj_t BgL_parents1876z00_2321,
		obj_t BgL_initzf31877zf3_2322, obj_t BgL_magiczf31878zf3_2323,
		obj_t BgL_z421879z42_2324, obj_t BgL_alias1880z00_2325,
		obj_t BgL_pointedzd2tozd2by1881z00_2326, obj_t BgL_tvector1882z00_2327,
		obj_t BgL_location1883z00_2328, obj_t BgL_importzd2location1884zd2_2329,
		obj_t BgL_occurrence1885z00_2330, obj_t BgL_btype1867z00_2331,
		obj_t BgL_arity1868z00_2332, obj_t BgL_typezd2res1869zd2_2333,
		obj_t BgL_typezd2args1870zd2_2334)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 45 */
			return
				(obj_t) (BGl_makezd2cfunctionzd2zzforeign_ctypez00(BgL_id1871z00_2316,
					BgL_name1872z00_2317, BgL_siza7e1873za7_2318, BgL_class1874z00_2319,
					BgL_coercezd2to1875zd2_2320, BgL_parents1876z00_2321,
					CBOOL(BgL_initzf31877zf3_2322), CBOOL(BgL_magiczf31878zf3_2323),
					BgL_z421879z42_2324, BgL_alias1880z00_2325,
					BgL_pointedzd2tozd2by1881z00_2326, BgL_tvector1882z00_2327,
					BgL_location1883z00_2328, BgL_importzd2location1884zd2_2329,
					CINT(BgL_occurrence1885z00_2330),
					(BgL_typez00_bglt) (BgL_btype1867z00_2331),
					(long) CINT(BgL_arity1868z00_2332),
					(BgL_typez00_bglt) (BgL_typezd2res1869zd2_2333),
					BgL_typezd2args1870zd2_2334));
		}
	}



/* fill-cfunction! */
	BGL_EXPORTED_DEF BgL_cfunctionz00_bglt
		BGl_fillzd2cfunctionz12zc0zzforeign_ctypez00(BgL_cfunctionz00_bglt
		BgL_new1892z00_151, BgL_typez00_bglt BgL_btype1888z00_152,
		long BgL_arity1889z00_153, BgL_typez00_bglt BgL_typezd2res1890zd2_154,
		obj_t BgL_typezd2args1891zd2_155)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 45 */
			{	/* Foreign/ctype.scm 45 */
				BgL_typez00_bglt BgL_btype1888z00_2521;

				long BgL_arity1889z00_2522;

				BgL_typez00_bglt BgL_typezd2res1890zd2_2523;

				obj_t BgL_typezd2args1891zd2_2524;

				BgL_btype1888z00_2521 = BgL_btype1888z00_152;
				BgL_arity1889z00_2522 = BgL_arity1889z00_153;
				BgL_typezd2res1890zd2_2523 = BgL_typezd2res1890zd2_154;
				BgL_typezd2args1891zd2_2524 = BgL_typezd2args1891zd2_155;
				((((BgL_cfunctionz00_bglt) CREF(BgL_new1892z00_151))->BgL_btypez00) =
					((BgL_typez00_bglt) BgL_btype1888z00_2521), BUNSPEC);
				((((BgL_cfunctionz00_bglt) CREF(BgL_new1892z00_151))->BgL_arityz00) =
					((long) BgL_arity1889z00_2522), BUNSPEC);
				((((BgL_cfunctionz00_bglt) CREF(BgL_new1892z00_151))->
						BgL_typezd2reszd2) =
					((BgL_typez00_bglt) BgL_typezd2res1890zd2_2523), BUNSPEC);
				((((BgL_cfunctionz00_bglt) CREF(BgL_new1892z00_151))->
						BgL_typezd2argszd2) =
					((obj_t) BgL_typezd2args1891zd2_2524), BUNSPEC);
				return BgL_new1892z00_151;
			}
		}
	}



/* _fill-cfunction! */
	obj_t BGl__fillzd2cfunctionz12zc0zzforeign_ctypez00(obj_t BgL_envz00_2335,
		obj_t BgL_new1892z00_2336, obj_t BgL_btype1888z00_2337,
		obj_t BgL_arity1889z00_2338, obj_t BgL_typezd2res1890zd2_2339,
		obj_t BgL_typezd2args1891zd2_2340)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 45 */
			{	/* Foreign/ctype.scm 45 */
				BgL_cfunctionz00_bglt BgL_auxz00_3524;

				{	/* Foreign/ctype.scm 45 */
					BgL_cfunctionz00_bglt BgL_res3137z00_2534;

					{	/* Foreign/ctype.scm 45 */
						BgL_cfunctionz00_bglt BgL_new1892z00_2525;

						BgL_typez00_bglt BgL_btype1888z00_2526;

						long BgL_arity1889z00_2527;

						BgL_typez00_bglt BgL_typezd2res1890zd2_2528;

						BgL_new1892z00_2525 = (BgL_cfunctionz00_bglt) (BgL_new1892z00_2336);
						BgL_btype1888z00_2526 = (BgL_typez00_bglt) (BgL_btype1888z00_2337);
						BgL_arity1889z00_2527 = (long) CINT(BgL_arity1889z00_2338);
						BgL_typezd2res1890zd2_2528 =
							(BgL_typez00_bglt) (BgL_typezd2res1890zd2_2339);
						{	/* Foreign/ctype.scm 45 */
							BgL_typez00_bglt BgL_btype1888z00_2530;

							long BgL_arity1889z00_2531;

							BgL_typez00_bglt BgL_typezd2res1890zd2_2532;

							obj_t BgL_typezd2args1891zd2_2533;

							BgL_btype1888z00_2530 = BgL_btype1888z00_2526;
							BgL_arity1889z00_2531 = BgL_arity1889z00_2527;
							BgL_typezd2res1890zd2_2532 = BgL_typezd2res1890zd2_2528;
							BgL_typezd2args1891zd2_2533 = BgL_typezd2args1891zd2_2340;
							((((BgL_cfunctionz00_bglt) CREF(BgL_new1892z00_2525))->
									BgL_btypez00) =
								((BgL_typez00_bglt) BgL_btype1888z00_2530), BUNSPEC);
							((((BgL_cfunctionz00_bglt) CREF(BgL_new1892z00_2525))->
									BgL_arityz00) = ((long) BgL_arity1889z00_2531), BUNSPEC);
							((((BgL_cfunctionz00_bglt) CREF(BgL_new1892z00_2525))->
									BgL_typezd2reszd2) =
								((BgL_typez00_bglt) BgL_typezd2res1890zd2_2532), BUNSPEC);
							((((BgL_cfunctionz00_bglt) CREF(BgL_new1892z00_2525))->
									BgL_typezd2argszd2) =
								((obj_t) BgL_typezd2args1891zd2_2533), BUNSPEC);
							BgL_res3137z00_2534 = BgL_new1892z00_2525;
					}}
					BgL_auxz00_3524 = BgL_res3137z00_2534;
				}
				return (obj_t) (BgL_auxz00_3524);
			}
		}
	}



/* %allocate-cfunction */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_z52allocatezd2cfunctionz80zzforeign_ctypez00()
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 45 */
			{	/* Foreign/ctype.scm 45 */
				BgL_typez00_bglt BgL_new1898z00_2535;

				BgL_new1898z00_2535 =
					((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_typez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new1898z00_2535),
					BGl_classzd2numzd2zz__objectz00(BGl_cfunctionz00zzforeign_ctypez00));
				{	/* Foreign/ctype.scm 45 */
					BgL_objectz00_bglt BgL_auxz00_3538;

					BgL_auxz00_3538 = (BgL_objectz00_bglt) (BgL_new1898z00_2535);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3538, BFALSE);
				}
				return BgL_new1898z00_2535;
			}
		}
	}



/* _%allocate-cfunction */
	obj_t BGl__z52allocatezd2cfunctionz80zzforeign_ctypez00(obj_t BgL_envz00_2213)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 45 */
			{	/* Foreign/ctype.scm 45 */
				BgL_typez00_bglt BgL_auxz00_3541;

				{	/* Foreign/ctype.scm 45 */
					BgL_typez00_bglt BgL_res3138z00_2539;

					{	/* Foreign/ctype.scm 45 */
						BgL_typez00_bglt BgL_new1898z00_2537;

						BgL_new1898z00_2537 =
							((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_typez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1898z00_2537),
							BGl_classzd2numzd2zz__objectz00
							(BGl_cfunctionz00zzforeign_ctypez00));
						{	/* Foreign/ctype.scm 45 */
							BgL_objectz00_bglt BgL_auxz00_3546;

							BgL_auxz00_3546 = (BgL_objectz00_bglt) (BgL_new1898z00_2537);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3546, BFALSE);
						}
						BgL_res3138z00_2539 = BgL_new1898z00_2537;
					}
					BgL_auxz00_3541 = BgL_res3138z00_2539;
				}
				return (obj_t) (BgL_auxz00_3541);
			}
		}
	}



/* cfunction-nil */
	BGL_EXPORTED_DEF BgL_cfunctionz00_bglt
		BGl_cfunctionzd2nilzd2zzforeign_ctypez00()
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 45 */
			if ((BGl_z52thezd2cfunctionzd2nilz52zzforeign_ctypez00 == BUNSPEC))
				{	/* Foreign/ctype.scm 45 */
					{	/* Foreign/ctype.scm 45 */
						BgL_typez00_bglt BgL_res3057z00_1606;

						{	/* Foreign/ctype.scm 45 */
							BgL_typez00_bglt BgL_new1598z00_1602;

							BgL_new1598z00_1602 =
								((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1598z00_1602),
								BGl_classzd2numzd2zz__objectz00(BGl_typez00zztype_typez00));
							{	/* Foreign/ctype.scm 45 */
								BgL_objectz00_bglt BgL_auxz00_3556;

								BgL_auxz00_3556 = (BgL_objectz00_bglt) (BgL_new1598z00_1602);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3556, BFALSE);
							}
							BgL_res3057z00_1606 = BgL_new1598z00_1602;
						}
						BGl_z52thezd2cfunctionzd2nilz52zzforeign_ctypez00 =
							(obj_t) (BgL_res3057z00_1606);
					}
					{	/* Foreign/ctype.scm 45 */
						BgL_typez00_bglt BgL_res3058z00_1638;

						{	/* Foreign/ctype.scm 45 */
							BgL_typez00_bglt BgL_new1581z00_1607;

							obj_t BgL_id1566z00_1608;

							int BgL_occurrence1580z00_1622;

							BgL_new1581z00_1607 =
								(BgL_typez00_bglt)
								(BGl_z52thezd2cfunctionzd2nilz52zzforeign_ctypez00);
							BgL_id1566z00_1608 = CNST_TABLE_REF(((long) 31));
							BgL_occurrence1580z00_1622 = (int) (((long) 0));
							{	/* Foreign/ctype.scm 45 */
								obj_t BgL_id1566z00_1623;

								obj_t BgL_name1567z00_1624;

								obj_t BgL_siza7e1568za7_1625;

								obj_t BgL_class1569z00_1626;

								obj_t BgL_coercezd2to1570zd2_1627;

								obj_t BgL_parents1571z00_1628;

								bool_t BgL_initzf31572zf3_1629;

								bool_t BgL_magiczf31573zf3_1630;

								obj_t BgL_z421574z42_1631;

								obj_t BgL_alias1575z00_1632;

								obj_t BgL_pointedzd2tozd2by1576z00_1633;

								obj_t BgL_tvector1577z00_1634;

								obj_t BgL_location1578z00_1635;

								obj_t BgL_importzd2location1579zd2_1636;

								int BgL_occurrence1580z00_1637;

								BgL_id1566z00_1623 = BgL_id1566z00_1608;
								BgL_name1567z00_1624 = BUNSPEC;
								BgL_siza7e1568za7_1625 = BUNSPEC;
								BgL_class1569z00_1626 = BUNSPEC;
								BgL_coercezd2to1570zd2_1627 = BUNSPEC;
								BgL_parents1571z00_1628 = BUNSPEC;
								BgL_initzf31572zf3_1629 = ((bool_t) 0);
								BgL_magiczf31573zf3_1630 = ((bool_t) 0);
								BgL_z421574z42_1631 = BUNSPEC;
								BgL_alias1575z00_1632 = BUNSPEC;
								BgL_pointedzd2tozd2by1576z00_1633 = BUNSPEC;
								BgL_tvector1577z00_1634 = BUNSPEC;
								BgL_location1578z00_1635 = BUNSPEC;
								BgL_importzd2location1579zd2_1636 = BUNSPEC;
								BgL_occurrence1580z00_1637 = BgL_occurrence1580z00_1622;
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1607))->BgL_idz00) =
									((obj_t) BgL_id1566z00_1623), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1607))->BgL_namez00) =
									((obj_t) BgL_name1567z00_1624), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1607))->
										BgL_siza7eza7) = ((obj_t) BgL_siza7e1568za7_1625), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1607))->
										BgL_classz00) = ((obj_t) BgL_class1569z00_1626), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1607))->
										BgL_coercezd2tozd2) =
									((obj_t) BgL_coercezd2to1570zd2_1627), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1607))->
										BgL_parentsz00) =
									((obj_t) BgL_parents1571z00_1628), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1607))->
										BgL_initzf3zf3) =
									((bool_t) BgL_initzf31572zf3_1629), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1607))->
										BgL_magiczf3zf3) =
									((bool_t) BgL_magiczf31573zf3_1630), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1607))->BgL_z42z42) =
									((obj_t) BgL_z421574z42_1631), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1607))->
										BgL_aliasz00) = ((obj_t) BgL_alias1575z00_1632), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1607))->
										BgL_pointedzd2tozd2byz00) =
									((obj_t) BgL_pointedzd2tozd2by1576z00_1633), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1607))->
										BgL_tvectorz00) =
									((obj_t) BgL_tvector1577z00_1634), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1607))->
										BgL_locationz00) =
									((obj_t) BgL_location1578z00_1635), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1607))->
										BgL_importzd2locationzd2) =
									((obj_t) BgL_importzd2location1579zd2_1636), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1607))->
										BgL_occurrencez00) =
									((int) BgL_occurrence1580z00_1637), BUNSPEC);
								BgL_res3058z00_1638 = BgL_new1581z00_1607;
						}} BgL_res3058z00_1638;
					}
					{	/* Foreign/ctype.scm 45 */
						long BgL_arg2890z00_834;

						BgL_arg2890z00_834 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_cfunctionz00zzforeign_ctypez00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2cfunctionzd2nilz52zzforeign_ctypez00),
							BgL_arg2890z00_834);
					}
					{	/* Foreign/ctype.scm 45 */
						BgL_cfunctionz00_bglt BgL_arg2891z00_835;

						{	/* Foreign/ctype.scm 45 */
							BgL_typez00_bglt BgL_arg2892z00_836;

							BgL_typez00_bglt BgL_arg2894z00_838;

							BgL_arg2892z00_836 = BGl_typezd2nilzd2zztype_typez00();
							BgL_arg2894z00_838 = BGl_typezd2nilzd2zztype_typez00();
							{	/* Foreign/ctype.scm 45 */
								BgL_cfunctionz00_bglt BgL_res3060z00_1656;

								{	/* Foreign/ctype.scm 45 */
									BgL_cfunctionz00_bglt BgL_new1865z00_1645;

									BgL_new1865z00_1645 =
										((BgL_cfunctionz00_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_cfunctionz00_bgl))));
									{	/* Foreign/ctype.scm 45 */
										BgL_cfunctionz00_bglt BgL_res3059z00_1655;

										{	/* Foreign/ctype.scm 45 */
											BgL_cfunctionz00_bglt BgL_new1892z00_1646;

											BgL_new1892z00_1646 = BgL_new1865z00_1645;
											{	/* Foreign/ctype.scm 45 */
												BgL_typez00_bglt BgL_btype1888z00_1651;

												long BgL_arity1889z00_1652;

												BgL_typez00_bglt BgL_typezd2res1890zd2_1653;

												obj_t BgL_typezd2args1891zd2_1654;

												BgL_btype1888z00_1651 = BgL_arg2892z00_836;
												BgL_arity1889z00_1652 = ((long) 0);
												BgL_typezd2res1890zd2_1653 = BgL_arg2894z00_838;
												BgL_typezd2args1891zd2_1654 = BUNSPEC;
												((((BgL_cfunctionz00_bglt) CREF(BgL_new1892z00_1646))->
														BgL_btypez00) =
													((BgL_typez00_bglt) BgL_btype1888z00_1651), BUNSPEC);
												((((BgL_cfunctionz00_bglt) CREF(BgL_new1892z00_1646))->
														BgL_arityz00) =
													((long) BgL_arity1889z00_1652), BUNSPEC);
												((((BgL_cfunctionz00_bglt) CREF(BgL_new1892z00_1646))->
														BgL_typezd2reszd2) =
													((BgL_typez00_bglt) BgL_typezd2res1890zd2_1653),
													BUNSPEC);
												((((BgL_cfunctionz00_bglt) CREF(BgL_new1892z00_1646))->
														BgL_typezd2argszd2) =
													((obj_t) BgL_typezd2args1891zd2_1654), BUNSPEC);
												BgL_res3059z00_1655 = BgL_new1892z00_1646;
										}} BgL_res3059z00_1655;
									}
									BgL_res3060z00_1656 = BgL_new1865z00_1645;
								}
								BgL_arg2891z00_835 = BgL_res3060z00_1656;
						}}
						{	/* Foreign/ctype.scm 45 */
							obj_t BgL_auxz00_3590;

							BgL_objectz00_bglt BgL_auxz00_3588;

							BgL_auxz00_3590 = (obj_t) (BgL_arg2891z00_835);
							BgL_auxz00_3588 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2cfunctionzd2nilz52zzforeign_ctypez00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3588, BgL_auxz00_3590);
				}}}
			else
				{	/* Foreign/ctype.scm 45 */
					BFALSE;
				}
			return
				(BgL_cfunctionz00_bglt)
				(BGl_z52thezd2cfunctionzd2nilz52zzforeign_ctypez00);
		}
	}



/* _cfunction-nil */
	obj_t BGl__cfunctionzd2nilzd2zzforeign_ctypez00(obj_t BgL_envz00_2214)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 45 */
			return (obj_t) (BGl_cfunctionzd2nilzd2zzforeign_ctypez00());
		}
	}



/* copaque? */
	BGL_EXPORTED_DEF bool_t BGl_copaquezf3zf3zzforeign_ctypez00(obj_t
		BgL_obj1816z00_160)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 41 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1816z00_160,
				BGl_copaquez00zzforeign_ctypez00);
		}
	}



/* _copaque? */
	obj_t BGl__copaquezf3zf3zzforeign_ctypez00(obj_t BgL_envz00_2211,
		obj_t BgL_obj1816z00_2212)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 41 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1816z00_2212,
					BGl_copaquez00zzforeign_ctypez00));
		}
	}



/* widening-copaque */
	BGL_EXPORTED_DEF BgL_copaquez00_bglt
		BGl_wideningzd2copaquezd2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_btype1784z00_164)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 41 */
			{	/* Foreign/ctype.scm 41 */
				BgL_copaquez00_bglt BgL_new1785z00_1657;

				BgL_new1785z00_1657 =
					((BgL_copaquez00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_copaquez00_bgl))));
				{	/* Foreign/ctype.scm 41 */
					BgL_copaquez00_bglt BgL_res3061z00_1661;

					{	/* Foreign/ctype.scm 41 */
						BgL_copaquez00_bglt BgL_new1806z00_1658;

						BgL_new1806z00_1658 = BgL_new1785z00_1657;
						{	/* Foreign/ctype.scm 41 */
							BgL_typez00_bglt BgL_btype1805z00_1660;

							BgL_btype1805z00_1660 = BgL_btype1784z00_164;
							((((BgL_copaquez00_bglt) CREF(BgL_new1806z00_1658))->
									BgL_btypez00) =
								((BgL_typez00_bglt) BgL_btype1805z00_1660), BUNSPEC);
							BgL_res3061z00_1661 = BgL_new1806z00_1658;
					}} BgL_res3061z00_1661;
				}
				return BgL_new1785z00_1657;
			}
		}
	}



/* _widening-copaque */
	obj_t BGl__wideningzd2copaquezd2zzforeign_ctypez00(obj_t BgL_envz00_2341,
		obj_t BgL_btype1784z00_2342)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 41 */
			return
				(obj_t) (BGl_wideningzd2copaquezd2zzforeign_ctypez00(
					(BgL_typez00_bglt) (BgL_btype1784z00_2342)));
		}
	}



/* make-copaque */
	BGL_EXPORTED_DEF BgL_copaquez00_bglt
		BGl_makezd2copaquezd2zzforeign_ctypez00(obj_t BgL_id1788z00_165,
		obj_t BgL_name1789z00_166, obj_t BgL_siza7e1790za7_167,
		obj_t BgL_class1791z00_168, obj_t BgL_coercezd2to1792zd2_169,
		obj_t BgL_parents1793z00_170, bool_t BgL_initzf31794zf3_171,
		bool_t BgL_magiczf31795zf3_172, obj_t BgL_z421796z42_173,
		obj_t BgL_alias1797z00_174, obj_t BgL_pointedzd2tozd2by1798z00_175,
		obj_t BgL_tvector1799z00_176, obj_t BgL_location1800z00_177,
		obj_t BgL_importzd2location1801zd2_178, int BgL_occurrence1802z00_179,
		BgL_typez00_bglt BgL_btype1787z00_180)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 41 */
			{	/* Foreign/ctype.scm 41 */
				BgL_typez00_bglt BgL_aux1803z00_1662;

				BgL_aux1803z00_1662 =
					BGl_makezd2typezd2zztype_typez00(BgL_id1788z00_165,
					BgL_name1789z00_166, BgL_siza7e1790za7_167, BgL_class1791z00_168,
					BgL_coercezd2to1792zd2_169, BgL_parents1793z00_170,
					BgL_initzf31794zf3_171, BgL_magiczf31795zf3_172, BgL_z421796z42_173,
					BgL_alias1797z00_174, BgL_pointedzd2tozd2by1798z00_175,
					BgL_tvector1799z00_176, BgL_location1800z00_177,
					BgL_importzd2location1801zd2_178, BgL_occurrence1802z00_179);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux1803z00_1662),
					BGl_classzd2numzd2zz__objectz00(BGl_copaquez00zzforeign_ctypez00));
				{	/* Foreign/ctype.scm 41 */
					BgL_copaquez00_bglt BgL_arg2897z00_1664;

					{	/* Foreign/ctype.scm 41 */
						BgL_copaquez00_bglt BgL_res3063z00_1674;

						{	/* Foreign/ctype.scm 41 */
							BgL_copaquez00_bglt BgL_new1785z00_1669;

							BgL_new1785z00_1669 =
								((BgL_copaquez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_copaquez00_bgl))));
							{	/* Foreign/ctype.scm 41 */
								BgL_copaquez00_bglt BgL_res3062z00_1673;

								{	/* Foreign/ctype.scm 41 */
									BgL_copaquez00_bglt BgL_new1806z00_1670;

									BgL_new1806z00_1670 = BgL_new1785z00_1669;
									{	/* Foreign/ctype.scm 41 */
										BgL_typez00_bglt BgL_btype1805z00_1672;

										BgL_btype1805z00_1672 = BgL_btype1787z00_180;
										((((BgL_copaquez00_bglt) CREF(BgL_new1806z00_1670))->
												BgL_btypez00) =
											((BgL_typez00_bglt) BgL_btype1805z00_1672), BUNSPEC);
										BgL_res3062z00_1673 = BgL_new1806z00_1670;
								}} BgL_res3062z00_1673;
							}
							BgL_res3063z00_1674 = BgL_new1785z00_1669;
						}
						BgL_arg2897z00_1664 = BgL_res3063z00_1674;
					}
					{	/* Foreign/ctype.scm 41 */
						obj_t BgL_auxz00_3612;

						BgL_objectz00_bglt BgL_auxz00_3610;

						BgL_auxz00_3612 = (obj_t) (BgL_arg2897z00_1664);
						BgL_auxz00_3610 = (BgL_objectz00_bglt) (BgL_aux1803z00_1662);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_3610, BgL_auxz00_3612);
				}}
				return
					((BgL_copaquez00_bglt) (BgL_copaquez00_bglt) (BgL_aux1803z00_1662));
			}
		}
	}



/* _make-copaque */
	obj_t BGl__makezd2copaquezd2zzforeign_ctypez00(obj_t BgL_envz00_2343,
		obj_t BgL_id1788z00_2344, obj_t BgL_name1789z00_2345,
		obj_t BgL_siza7e1790za7_2346, obj_t BgL_class1791z00_2347,
		obj_t BgL_coercezd2to1792zd2_2348, obj_t BgL_parents1793z00_2349,
		obj_t BgL_initzf31794zf3_2350, obj_t BgL_magiczf31795zf3_2351,
		obj_t BgL_z421796z42_2352, obj_t BgL_alias1797z00_2353,
		obj_t BgL_pointedzd2tozd2by1798z00_2354, obj_t BgL_tvector1799z00_2355,
		obj_t BgL_location1800z00_2356, obj_t BgL_importzd2location1801zd2_2357,
		obj_t BgL_occurrence1802z00_2358, obj_t BgL_btype1787z00_2359)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 41 */
			return
				(obj_t) (BGl_makezd2copaquezd2zzforeign_ctypez00(BgL_id1788z00_2344,
					BgL_name1789z00_2345, BgL_siza7e1790za7_2346, BgL_class1791z00_2347,
					BgL_coercezd2to1792zd2_2348, BgL_parents1793z00_2349,
					CBOOL(BgL_initzf31794zf3_2350), CBOOL(BgL_magiczf31795zf3_2351),
					BgL_z421796z42_2352, BgL_alias1797z00_2353,
					BgL_pointedzd2tozd2by1798z00_2354, BgL_tvector1799z00_2355,
					BgL_location1800z00_2356, BgL_importzd2location1801zd2_2357,
					CINT(BgL_occurrence1802z00_2358),
					(BgL_typez00_bglt) (BgL_btype1787z00_2359)));
		}
	}



/* fill-copaque! */
	BGL_EXPORTED_DEF BgL_copaquez00_bglt
		BGl_fillzd2copaquez12zc0zzforeign_ctypez00(BgL_copaquez00_bglt
		BgL_new1806z00_181, BgL_typez00_bglt BgL_btype1805z00_182)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 41 */
			{	/* Foreign/ctype.scm 41 */
				BgL_typez00_bglt BgL_btype1805z00_2541;

				BgL_btype1805z00_2541 = BgL_btype1805z00_182;
				((((BgL_copaquez00_bglt) CREF(BgL_new1806z00_181))->BgL_btypez00) =
					((BgL_typez00_bglt) BgL_btype1805z00_2541), BUNSPEC);
				return BgL_new1806z00_181;
			}
		}
	}



/* _fill-copaque! */
	obj_t BGl__fillzd2copaquez12zc0zzforeign_ctypez00(obj_t BgL_envz00_2360,
		obj_t BgL_new1806z00_2361, obj_t BgL_btype1805z00_2362)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 41 */
			{	/* Foreign/ctype.scm 41 */
				BgL_copaquez00_bglt BgL_auxz00_3624;

				{	/* Foreign/ctype.scm 41 */
					BgL_copaquez00_bglt BgL_res3139z00_2545;

					{	/* Foreign/ctype.scm 41 */
						BgL_copaquez00_bglt BgL_new1806z00_2542;

						BgL_typez00_bglt BgL_btype1805z00_2543;

						BgL_new1806z00_2542 = (BgL_copaquez00_bglt) (BgL_new1806z00_2361);
						BgL_btype1805z00_2543 = (BgL_typez00_bglt) (BgL_btype1805z00_2362);
						{	/* Foreign/ctype.scm 41 */
							BgL_typez00_bglt BgL_btype1805z00_2544;

							BgL_btype1805z00_2544 = BgL_btype1805z00_2543;
							((((BgL_copaquez00_bglt) CREF(BgL_new1806z00_2542))->
									BgL_btypez00) =
								((BgL_typez00_bglt) BgL_btype1805z00_2544), BUNSPEC);
							BgL_res3139z00_2545 = BgL_new1806z00_2542;
						}
					}
					BgL_auxz00_3624 = BgL_res3139z00_2545;
				}
				return (obj_t) (BgL_auxz00_3624);
			}
		}
	}



/* %allocate-copaque */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_z52allocatezd2copaquez80zzforeign_ctypez00()
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 41 */
			{	/* Foreign/ctype.scm 41 */
				BgL_typez00_bglt BgL_new1809z00_2546;

				BgL_new1809z00_2546 =
					((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_typez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new1809z00_2546),
					BGl_classzd2numzd2zz__objectz00(BGl_copaquez00zzforeign_ctypez00));
				{	/* Foreign/ctype.scm 41 */
					BgL_objectz00_bglt BgL_auxz00_3633;

					BgL_auxz00_3633 = (BgL_objectz00_bglt) (BgL_new1809z00_2546);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3633, BFALSE);
				}
				return BgL_new1809z00_2546;
			}
		}
	}



/* _%allocate-copaque */
	obj_t BGl__z52allocatezd2copaquez80zzforeign_ctypez00(obj_t BgL_envz00_2209)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 41 */
			{	/* Foreign/ctype.scm 41 */
				BgL_typez00_bglt BgL_auxz00_3636;

				{	/* Foreign/ctype.scm 41 */
					BgL_typez00_bglt BgL_res3140z00_2550;

					{	/* Foreign/ctype.scm 41 */
						BgL_typez00_bglt BgL_new1809z00_2548;

						BgL_new1809z00_2548 =
							((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_typez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1809z00_2548),
							BGl_classzd2numzd2zz__objectz00
							(BGl_copaquez00zzforeign_ctypez00));
						{	/* Foreign/ctype.scm 41 */
							BgL_objectz00_bglt BgL_auxz00_3641;

							BgL_auxz00_3641 = (BgL_objectz00_bglt) (BgL_new1809z00_2548);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3641, BFALSE);
						}
						BgL_res3140z00_2550 = BgL_new1809z00_2548;
					}
					BgL_auxz00_3636 = BgL_res3140z00_2550;
				}
				return (obj_t) (BgL_auxz00_3636);
			}
		}
	}



/* copaque-nil */
	BGL_EXPORTED_DEF BgL_copaquez00_bglt BGl_copaquezd2nilzd2zzforeign_ctypez00()
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 41 */
			if ((BGl_z52thezd2copaquezd2nilz52zzforeign_ctypez00 == BUNSPEC))
				{	/* Foreign/ctype.scm 41 */
					{	/* Foreign/ctype.scm 41 */
						BgL_typez00_bglt BgL_res3064z00_1684;

						{	/* Foreign/ctype.scm 41 */
							BgL_typez00_bglt BgL_new1598z00_1680;

							BgL_new1598z00_1680 =
								((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1598z00_1680),
								BGl_classzd2numzd2zz__objectz00(BGl_typez00zztype_typez00));
							{	/* Foreign/ctype.scm 41 */
								BgL_objectz00_bglt BgL_auxz00_3651;

								BgL_auxz00_3651 = (BgL_objectz00_bglt) (BgL_new1598z00_1680);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3651, BFALSE);
							}
							BgL_res3064z00_1684 = BgL_new1598z00_1680;
						}
						BGl_z52thezd2copaquezd2nilz52zzforeign_ctypez00 =
							(obj_t) (BgL_res3064z00_1684);
					}
					{	/* Foreign/ctype.scm 41 */
						BgL_typez00_bglt BgL_res3065z00_1716;

						{	/* Foreign/ctype.scm 41 */
							BgL_typez00_bglt BgL_new1581z00_1685;

							obj_t BgL_id1566z00_1686;

							int BgL_occurrence1580z00_1700;

							BgL_new1581z00_1685 =
								(BgL_typez00_bglt)
								(BGl_z52thezd2copaquezd2nilz52zzforeign_ctypez00);
							BgL_id1566z00_1686 = CNST_TABLE_REF(((long) 31));
							BgL_occurrence1580z00_1700 = (int) (((long) 0));
							{	/* Foreign/ctype.scm 41 */
								obj_t BgL_id1566z00_1701;

								obj_t BgL_name1567z00_1702;

								obj_t BgL_siza7e1568za7_1703;

								obj_t BgL_class1569z00_1704;

								obj_t BgL_coercezd2to1570zd2_1705;

								obj_t BgL_parents1571z00_1706;

								bool_t BgL_initzf31572zf3_1707;

								bool_t BgL_magiczf31573zf3_1708;

								obj_t BgL_z421574z42_1709;

								obj_t BgL_alias1575z00_1710;

								obj_t BgL_pointedzd2tozd2by1576z00_1711;

								obj_t BgL_tvector1577z00_1712;

								obj_t BgL_location1578z00_1713;

								obj_t BgL_importzd2location1579zd2_1714;

								int BgL_occurrence1580z00_1715;

								BgL_id1566z00_1701 = BgL_id1566z00_1686;
								BgL_name1567z00_1702 = BUNSPEC;
								BgL_siza7e1568za7_1703 = BUNSPEC;
								BgL_class1569z00_1704 = BUNSPEC;
								BgL_coercezd2to1570zd2_1705 = BUNSPEC;
								BgL_parents1571z00_1706 = BUNSPEC;
								BgL_initzf31572zf3_1707 = ((bool_t) 0);
								BgL_magiczf31573zf3_1708 = ((bool_t) 0);
								BgL_z421574z42_1709 = BUNSPEC;
								BgL_alias1575z00_1710 = BUNSPEC;
								BgL_pointedzd2tozd2by1576z00_1711 = BUNSPEC;
								BgL_tvector1577z00_1712 = BUNSPEC;
								BgL_location1578z00_1713 = BUNSPEC;
								BgL_importzd2location1579zd2_1714 = BUNSPEC;
								BgL_occurrence1580z00_1715 = BgL_occurrence1580z00_1700;
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1685))->BgL_idz00) =
									((obj_t) BgL_id1566z00_1701), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1685))->BgL_namez00) =
									((obj_t) BgL_name1567z00_1702), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1685))->
										BgL_siza7eza7) = ((obj_t) BgL_siza7e1568za7_1703), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1685))->
										BgL_classz00) = ((obj_t) BgL_class1569z00_1704), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1685))->
										BgL_coercezd2tozd2) =
									((obj_t) BgL_coercezd2to1570zd2_1705), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1685))->
										BgL_parentsz00) =
									((obj_t) BgL_parents1571z00_1706), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1685))->
										BgL_initzf3zf3) =
									((bool_t) BgL_initzf31572zf3_1707), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1685))->
										BgL_magiczf3zf3) =
									((bool_t) BgL_magiczf31573zf3_1708), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1685))->BgL_z42z42) =
									((obj_t) BgL_z421574z42_1709), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1685))->
										BgL_aliasz00) = ((obj_t) BgL_alias1575z00_1710), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1685))->
										BgL_pointedzd2tozd2byz00) =
									((obj_t) BgL_pointedzd2tozd2by1576z00_1711), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1685))->
										BgL_tvectorz00) =
									((obj_t) BgL_tvector1577z00_1712), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1685))->
										BgL_locationz00) =
									((obj_t) BgL_location1578z00_1713), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1685))->
										BgL_importzd2locationzd2) =
									((obj_t) BgL_importzd2location1579zd2_1714), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1685))->
										BgL_occurrencez00) =
									((int) BgL_occurrence1580z00_1715), BUNSPEC);
								BgL_res3065z00_1716 = BgL_new1581z00_1685;
						}} BgL_res3065z00_1716;
					}
					{	/* Foreign/ctype.scm 41 */
						long BgL_arg2900z00_848;

						BgL_arg2900z00_848 =
							BGl_classzd2numzd2zz__objectz00(BGl_copaquez00zzforeign_ctypez00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2copaquezd2nilz52zzforeign_ctypez00),
							BgL_arg2900z00_848);
					}
					{	/* Foreign/ctype.scm 41 */
						BgL_copaquez00_bglt BgL_arg2901z00_849;

						{	/* Foreign/ctype.scm 41 */
							BgL_typez00_bglt BgL_arg2902z00_850;

							BgL_arg2902z00_850 = BGl_typezd2nilzd2zztype_typez00();
							{	/* Foreign/ctype.scm 41 */
								BgL_copaquez00_bglt BgL_res3067z00_1725;

								{	/* Foreign/ctype.scm 41 */
									BgL_copaquez00_bglt BgL_new1785z00_1720;

									BgL_new1785z00_1720 =
										((BgL_copaquez00_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_copaquez00_bgl))));
									{	/* Foreign/ctype.scm 41 */
										BgL_copaquez00_bglt BgL_res3066z00_1724;

										{	/* Foreign/ctype.scm 41 */
											BgL_copaquez00_bglt BgL_new1806z00_1721;

											BgL_new1806z00_1721 = BgL_new1785z00_1720;
											{	/* Foreign/ctype.scm 41 */
												BgL_typez00_bglt BgL_btype1805z00_1723;

												BgL_btype1805z00_1723 = BgL_arg2902z00_850;
												((((BgL_copaquez00_bglt) CREF(BgL_new1806z00_1721))->
														BgL_btypez00) =
													((BgL_typez00_bglt) BgL_btype1805z00_1723), BUNSPEC);
												BgL_res3066z00_1724 = BgL_new1806z00_1721;
										}} BgL_res3066z00_1724;
									}
									BgL_res3067z00_1725 = BgL_new1785z00_1720;
								}
								BgL_arg2901z00_849 = BgL_res3067z00_1725;
						}}
						{	/* Foreign/ctype.scm 41 */
							obj_t BgL_auxz00_3681;

							BgL_objectz00_bglt BgL_auxz00_3679;

							BgL_auxz00_3681 = (obj_t) (BgL_arg2901z00_849);
							BgL_auxz00_3679 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2copaquezd2nilz52zzforeign_ctypez00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3679, BgL_auxz00_3681);
				}}}
			else
				{	/* Foreign/ctype.scm 41 */
					BFALSE;
				}
			return
				(BgL_copaquez00_bglt) (BGl_z52thezd2copaquezd2nilz52zzforeign_ctypez00);
		}
	}



/* _copaque-nil */
	obj_t BGl__copaquezd2nilzd2zzforeign_ctypez00(obj_t BgL_envz00_2210)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 41 */
			return (obj_t) (BGl_copaquezd2nilzd2zzforeign_ctypez00());
		}
	}



/* cenum? */
	BGL_EXPORTED_DEF bool_t BGl_cenumzf3zf3zzforeign_ctypez00(obj_t
		BgL_obj1736z00_184)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 35 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1736z00_184,
				BGl_cenumz00zzforeign_ctypez00);
		}
	}



/* _cenum? */
	obj_t BGl__cenumzf3zf3zzforeign_ctypez00(obj_t BgL_envz00_2207,
		obj_t BgL_obj1736z00_2208)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 35 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1736z00_2208,
					BGl_cenumz00zzforeign_ctypez00));
		}
	}



/* widening-cenum */
	BGL_EXPORTED_DEF BgL_cenumz00_bglt
		BGl_wideningzd2cenumzd2zzforeign_ctypez00(BgL_typez00_bglt
		BgL_btype1700z00_188, obj_t BgL_literals1701z00_189)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 35 */
			{	/* Foreign/ctype.scm 35 */
				BgL_cenumz00_bglt BgL_new1702z00_1726;

				BgL_new1702z00_1726 =
					((BgL_cenumz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_cenumz00_bgl))));
				{	/* Foreign/ctype.scm 35 */
					BgL_cenumz00_bglt BgL_res3068z00_1732;

					{	/* Foreign/ctype.scm 35 */
						BgL_cenumz00_bglt BgL_new1725z00_1727;

						BgL_new1725z00_1727 = BgL_new1702z00_1726;
						{	/* Foreign/ctype.scm 35 */
							BgL_typez00_bglt BgL_btype1723z00_1730;

							obj_t BgL_literals1724z00_1731;

							BgL_btype1723z00_1730 = BgL_btype1700z00_188;
							BgL_literals1724z00_1731 = BgL_literals1701z00_189;
							((((BgL_cenumz00_bglt) CREF(BgL_new1725z00_1727))->BgL_btypez00) =
								((BgL_typez00_bglt) BgL_btype1723z00_1730), BUNSPEC);
							((((BgL_cenumz00_bglt) CREF(BgL_new1725z00_1727))->
									BgL_literalsz00) =
								((obj_t) BgL_literals1724z00_1731), BUNSPEC);
							BgL_res3068z00_1732 = BgL_new1725z00_1727;
					}} BgL_res3068z00_1732;
				}
				return BgL_new1702z00_1726;
			}
		}
	}



/* _widening-cenum */
	obj_t BGl__wideningzd2cenumzd2zzforeign_ctypez00(obj_t BgL_envz00_2363,
		obj_t BgL_btype1700z00_2364, obj_t BgL_literals1701z00_2365)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 35 */
			return
				(obj_t) (BGl_wideningzd2cenumzd2zzforeign_ctypez00(
					(BgL_typez00_bglt) (BgL_btype1700z00_2364),
					BgL_literals1701z00_2365));
		}
	}



/* make-cenum */
	BGL_EXPORTED_DEF BgL_cenumz00_bglt BGl_makezd2cenumzd2zzforeign_ctypez00(obj_t
		BgL_id1706z00_190, obj_t BgL_name1707z00_191, obj_t BgL_siza7e1708za7_192,
		obj_t BgL_class1709z00_193, obj_t BgL_coercezd2to1710zd2_194,
		obj_t BgL_parents1711z00_195, bool_t BgL_initzf31712zf3_196,
		bool_t BgL_magiczf31713zf3_197, obj_t BgL_z421714z42_198,
		obj_t BgL_alias1715z00_199, obj_t BgL_pointedzd2tozd2by1716z00_200,
		obj_t BgL_tvector1717z00_201, obj_t BgL_location1718z00_202,
		obj_t BgL_importzd2location1719zd2_203, int BgL_occurrence1720z00_204,
		BgL_typez00_bglt BgL_btype1704z00_205, obj_t BgL_literals1705z00_206)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 35 */
			{	/* Foreign/ctype.scm 35 */
				BgL_typez00_bglt BgL_aux1721z00_1733;

				BgL_aux1721z00_1733 =
					BGl_makezd2typezd2zztype_typez00(BgL_id1706z00_190,
					BgL_name1707z00_191, BgL_siza7e1708za7_192, BgL_class1709z00_193,
					BgL_coercezd2to1710zd2_194, BgL_parents1711z00_195,
					BgL_initzf31712zf3_196, BgL_magiczf31713zf3_197, BgL_z421714z42_198,
					BgL_alias1715z00_199, BgL_pointedzd2tozd2by1716z00_200,
					BgL_tvector1717z00_201, BgL_location1718z00_202,
					BgL_importzd2location1719zd2_203, BgL_occurrence1720z00_204);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux1721z00_1733),
					BGl_classzd2numzd2zz__objectz00(BGl_cenumz00zzforeign_ctypez00));
				{	/* Foreign/ctype.scm 35 */
					BgL_cenumz00_bglt BgL_arg2904z00_1735;

					{	/* Foreign/ctype.scm 35 */
						BgL_cenumz00_bglt BgL_res3070z00_1748;

						{	/* Foreign/ctype.scm 35 */
							BgL_cenumz00_bglt BgL_new1702z00_1741;

							BgL_new1702z00_1741 =
								((BgL_cenumz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cenumz00_bgl))));
							{	/* Foreign/ctype.scm 35 */
								BgL_cenumz00_bglt BgL_res3069z00_1747;

								{	/* Foreign/ctype.scm 35 */
									BgL_cenumz00_bglt BgL_new1725z00_1742;

									BgL_new1725z00_1742 = BgL_new1702z00_1741;
									{	/* Foreign/ctype.scm 35 */
										BgL_typez00_bglt BgL_btype1723z00_1745;

										obj_t BgL_literals1724z00_1746;

										BgL_btype1723z00_1745 = BgL_btype1704z00_205;
										BgL_literals1724z00_1746 = BgL_literals1705z00_206;
										((((BgL_cenumz00_bglt) CREF(BgL_new1725z00_1742))->
												BgL_btypez00) =
											((BgL_typez00_bglt) BgL_btype1723z00_1745), BUNSPEC);
										((((BgL_cenumz00_bglt) CREF(BgL_new1725z00_1742))->
												BgL_literalsz00) =
											((obj_t) BgL_literals1724z00_1746), BUNSPEC);
										BgL_res3069z00_1747 = BgL_new1725z00_1742;
								}} BgL_res3069z00_1747;
							}
							BgL_res3070z00_1748 = BgL_new1702z00_1741;
						}
						BgL_arg2904z00_1735 = BgL_res3070z00_1748;
					}
					{	/* Foreign/ctype.scm 35 */
						obj_t BgL_auxz00_3705;

						BgL_objectz00_bglt BgL_auxz00_3703;

						BgL_auxz00_3705 = (obj_t) (BgL_arg2904z00_1735);
						BgL_auxz00_3703 = (BgL_objectz00_bglt) (BgL_aux1721z00_1733);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_3703, BgL_auxz00_3705);
				}}
				return ((BgL_cenumz00_bglt) (BgL_cenumz00_bglt) (BgL_aux1721z00_1733));
			}
		}
	}



/* _make-cenum */
	obj_t BGl__makezd2cenumzd2zzforeign_ctypez00(obj_t BgL_envz00_2366,
		obj_t BgL_id1706z00_2367, obj_t BgL_name1707z00_2368,
		obj_t BgL_siza7e1708za7_2369, obj_t BgL_class1709z00_2370,
		obj_t BgL_coercezd2to1710zd2_2371, obj_t BgL_parents1711z00_2372,
		obj_t BgL_initzf31712zf3_2373, obj_t BgL_magiczf31713zf3_2374,
		obj_t BgL_z421714z42_2375, obj_t BgL_alias1715z00_2376,
		obj_t BgL_pointedzd2tozd2by1716z00_2377, obj_t BgL_tvector1717z00_2378,
		obj_t BgL_location1718z00_2379, obj_t BgL_importzd2location1719zd2_2380,
		obj_t BgL_occurrence1720z00_2381, obj_t BgL_btype1704z00_2382,
		obj_t BgL_literals1705z00_2383)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 35 */
			return
				(obj_t) (BGl_makezd2cenumzd2zzforeign_ctypez00(BgL_id1706z00_2367,
					BgL_name1707z00_2368, BgL_siza7e1708za7_2369, BgL_class1709z00_2370,
					BgL_coercezd2to1710zd2_2371, BgL_parents1711z00_2372,
					CBOOL(BgL_initzf31712zf3_2373), CBOOL(BgL_magiczf31713zf3_2374),
					BgL_z421714z42_2375, BgL_alias1715z00_2376,
					BgL_pointedzd2tozd2by1716z00_2377, BgL_tvector1717z00_2378,
					BgL_location1718z00_2379, BgL_importzd2location1719zd2_2380,
					CINT(BgL_occurrence1720z00_2381),
					(BgL_typez00_bglt) (BgL_btype1704z00_2382),
					BgL_literals1705z00_2383));
		}
	}



/* fill-cenum! */
	BGL_EXPORTED_DEF BgL_cenumz00_bglt
		BGl_fillzd2cenumz12zc0zzforeign_ctypez00(BgL_cenumz00_bglt
		BgL_new1725z00_207, BgL_typez00_bglt BgL_btype1723z00_208,
		obj_t BgL_literals1724z00_209)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 35 */
			{	/* Foreign/ctype.scm 35 */
				BgL_typez00_bglt BgL_btype1723z00_2552;

				obj_t BgL_literals1724z00_2553;

				BgL_btype1723z00_2552 = BgL_btype1723z00_208;
				BgL_literals1724z00_2553 = BgL_literals1724z00_209;
				((((BgL_cenumz00_bglt) CREF(BgL_new1725z00_207))->BgL_btypez00) =
					((BgL_typez00_bglt) BgL_btype1723z00_2552), BUNSPEC);
				((((BgL_cenumz00_bglt) CREF(BgL_new1725z00_207))->BgL_literalsz00) =
					((obj_t) BgL_literals1724z00_2553), BUNSPEC);
				return BgL_new1725z00_207;
			}
		}
	}



/* _fill-cenum! */
	obj_t BGl__fillzd2cenumz12zc0zzforeign_ctypez00(obj_t BgL_envz00_2384,
		obj_t BgL_new1725z00_2385, obj_t BgL_btype1723z00_2386,
		obj_t BgL_literals1724z00_2387)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 35 */
			{	/* Foreign/ctype.scm 35 */
				BgL_cenumz00_bglt BgL_auxz00_3718;

				{	/* Foreign/ctype.scm 35 */
					BgL_cenumz00_bglt BgL_res3141z00_2559;

					{	/* Foreign/ctype.scm 35 */
						BgL_cenumz00_bglt BgL_new1725z00_2554;

						BgL_typez00_bglt BgL_btype1723z00_2555;

						BgL_new1725z00_2554 = (BgL_cenumz00_bglt) (BgL_new1725z00_2385);
						BgL_btype1723z00_2555 = (BgL_typez00_bglt) (BgL_btype1723z00_2386);
						{	/* Foreign/ctype.scm 35 */
							BgL_typez00_bglt BgL_btype1723z00_2557;

							obj_t BgL_literals1724z00_2558;

							BgL_btype1723z00_2557 = BgL_btype1723z00_2555;
							BgL_literals1724z00_2558 = BgL_literals1724z00_2387;
							((((BgL_cenumz00_bglt) CREF(BgL_new1725z00_2554))->BgL_btypez00) =
								((BgL_typez00_bglt) BgL_btype1723z00_2557), BUNSPEC);
							((((BgL_cenumz00_bglt) CREF(BgL_new1725z00_2554))->
									BgL_literalsz00) =
								((obj_t) BgL_literals1724z00_2558), BUNSPEC);
							BgL_res3141z00_2559 = BgL_new1725z00_2554;
						}
					}
					BgL_auxz00_3718 = BgL_res3141z00_2559;
				}
				return (obj_t) (BgL_auxz00_3718);
			}
		}
	}



/* %allocate-cenum */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_z52allocatezd2cenumz80zzforeign_ctypez00()
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 35 */
			{	/* Foreign/ctype.scm 35 */
				BgL_typez00_bglt BgL_new1729z00_2560;

				BgL_new1729z00_2560 =
					((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_typez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new1729z00_2560),
					BGl_classzd2numzd2zz__objectz00(BGl_cenumz00zzforeign_ctypez00));
				{	/* Foreign/ctype.scm 35 */
					BgL_objectz00_bglt BgL_auxz00_3728;

					BgL_auxz00_3728 = (BgL_objectz00_bglt) (BgL_new1729z00_2560);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3728, BFALSE);
				}
				return BgL_new1729z00_2560;
			}
		}
	}



/* _%allocate-cenum */
	obj_t BGl__z52allocatezd2cenumz80zzforeign_ctypez00(obj_t BgL_envz00_2205)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 35 */
			{	/* Foreign/ctype.scm 35 */
				BgL_typez00_bglt BgL_auxz00_3731;

				{	/* Foreign/ctype.scm 35 */
					BgL_typez00_bglt BgL_res3142z00_2564;

					{	/* Foreign/ctype.scm 35 */
						BgL_typez00_bglt BgL_new1729z00_2562;

						BgL_new1729z00_2562 =
							((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_typez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1729z00_2562),
							BGl_classzd2numzd2zz__objectz00(BGl_cenumz00zzforeign_ctypez00));
						{	/* Foreign/ctype.scm 35 */
							BgL_objectz00_bglt BgL_auxz00_3736;

							BgL_auxz00_3736 = (BgL_objectz00_bglt) (BgL_new1729z00_2562);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3736, BFALSE);
						}
						BgL_res3142z00_2564 = BgL_new1729z00_2562;
					}
					BgL_auxz00_3731 = BgL_res3142z00_2564;
				}
				return (obj_t) (BgL_auxz00_3731);
			}
		}
	}



/* cenum-nil */
	BGL_EXPORTED_DEF BgL_cenumz00_bglt BGl_cenumzd2nilzd2zzforeign_ctypez00()
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 35 */
			if ((BGl_z52thezd2cenumzd2nilz52zzforeign_ctypez00 == BUNSPEC))
				{	/* Foreign/ctype.scm 35 */
					{	/* Foreign/ctype.scm 35 */
						BgL_typez00_bglt BgL_res3071z00_1759;

						{	/* Foreign/ctype.scm 35 */
							BgL_typez00_bglt BgL_new1598z00_1755;

							BgL_new1598z00_1755 =
								((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1598z00_1755),
								BGl_classzd2numzd2zz__objectz00(BGl_typez00zztype_typez00));
							{	/* Foreign/ctype.scm 35 */
								BgL_objectz00_bglt BgL_auxz00_3746;

								BgL_auxz00_3746 = (BgL_objectz00_bglt) (BgL_new1598z00_1755);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3746, BFALSE);
							}
							BgL_res3071z00_1759 = BgL_new1598z00_1755;
						}
						BGl_z52thezd2cenumzd2nilz52zzforeign_ctypez00 =
							(obj_t) (BgL_res3071z00_1759);
					}
					{	/* Foreign/ctype.scm 35 */
						BgL_typez00_bglt BgL_res3072z00_1791;

						{	/* Foreign/ctype.scm 35 */
							BgL_typez00_bglt BgL_new1581z00_1760;

							obj_t BgL_id1566z00_1761;

							int BgL_occurrence1580z00_1775;

							BgL_new1581z00_1760 =
								(BgL_typez00_bglt)
								(BGl_z52thezd2cenumzd2nilz52zzforeign_ctypez00);
							BgL_id1566z00_1761 = CNST_TABLE_REF(((long) 31));
							BgL_occurrence1580z00_1775 = (int) (((long) 0));
							{	/* Foreign/ctype.scm 35 */
								obj_t BgL_id1566z00_1776;

								obj_t BgL_name1567z00_1777;

								obj_t BgL_siza7e1568za7_1778;

								obj_t BgL_class1569z00_1779;

								obj_t BgL_coercezd2to1570zd2_1780;

								obj_t BgL_parents1571z00_1781;

								bool_t BgL_initzf31572zf3_1782;

								bool_t BgL_magiczf31573zf3_1783;

								obj_t BgL_z421574z42_1784;

								obj_t BgL_alias1575z00_1785;

								obj_t BgL_pointedzd2tozd2by1576z00_1786;

								obj_t BgL_tvector1577z00_1787;

								obj_t BgL_location1578z00_1788;

								obj_t BgL_importzd2location1579zd2_1789;

								int BgL_occurrence1580z00_1790;

								BgL_id1566z00_1776 = BgL_id1566z00_1761;
								BgL_name1567z00_1777 = BUNSPEC;
								BgL_siza7e1568za7_1778 = BUNSPEC;
								BgL_class1569z00_1779 = BUNSPEC;
								BgL_coercezd2to1570zd2_1780 = BUNSPEC;
								BgL_parents1571z00_1781 = BUNSPEC;
								BgL_initzf31572zf3_1782 = ((bool_t) 0);
								BgL_magiczf31573zf3_1783 = ((bool_t) 0);
								BgL_z421574z42_1784 = BUNSPEC;
								BgL_alias1575z00_1785 = BUNSPEC;
								BgL_pointedzd2tozd2by1576z00_1786 = BUNSPEC;
								BgL_tvector1577z00_1787 = BUNSPEC;
								BgL_location1578z00_1788 = BUNSPEC;
								BgL_importzd2location1579zd2_1789 = BUNSPEC;
								BgL_occurrence1580z00_1790 = BgL_occurrence1580z00_1775;
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1760))->BgL_idz00) =
									((obj_t) BgL_id1566z00_1776), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1760))->BgL_namez00) =
									((obj_t) BgL_name1567z00_1777), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1760))->
										BgL_siza7eza7) = ((obj_t) BgL_siza7e1568za7_1778), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1760))->
										BgL_classz00) = ((obj_t) BgL_class1569z00_1779), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1760))->
										BgL_coercezd2tozd2) =
									((obj_t) BgL_coercezd2to1570zd2_1780), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1760))->
										BgL_parentsz00) =
									((obj_t) BgL_parents1571z00_1781), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1760))->
										BgL_initzf3zf3) =
									((bool_t) BgL_initzf31572zf3_1782), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1760))->
										BgL_magiczf3zf3) =
									((bool_t) BgL_magiczf31573zf3_1783), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1760))->BgL_z42z42) =
									((obj_t) BgL_z421574z42_1784), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1760))->
										BgL_aliasz00) = ((obj_t) BgL_alias1575z00_1785), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1760))->
										BgL_pointedzd2tozd2byz00) =
									((obj_t) BgL_pointedzd2tozd2by1576z00_1786), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1760))->
										BgL_tvectorz00) =
									((obj_t) BgL_tvector1577z00_1787), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1760))->
										BgL_locationz00) =
									((obj_t) BgL_location1578z00_1788), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1760))->
										BgL_importzd2locationzd2) =
									((obj_t) BgL_importzd2location1579zd2_1789), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1760))->
										BgL_occurrencez00) =
									((int) BgL_occurrence1580z00_1790), BUNSPEC);
								BgL_res3072z00_1791 = BgL_new1581z00_1760;
						}} BgL_res3072z00_1791;
					}
					{	/* Foreign/ctype.scm 35 */
						long BgL_arg2907z00_861;

						BgL_arg2907z00_861 =
							BGl_classzd2numzd2zz__objectz00(BGl_cenumz00zzforeign_ctypez00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2cenumzd2nilz52zzforeign_ctypez00),
							BgL_arg2907z00_861);
					}
					{	/* Foreign/ctype.scm 35 */
						BgL_cenumz00_bglt BgL_arg2908z00_862;

						{	/* Foreign/ctype.scm 35 */
							BgL_typez00_bglt BgL_arg2909z00_863;

							BgL_arg2909z00_863 = BGl_typezd2nilzd2zztype_typez00();
							{	/* Foreign/ctype.scm 35 */
								BgL_cenumz00_bglt BgL_res3074z00_1803;

								{	/* Foreign/ctype.scm 35 */
									BgL_cenumz00_bglt BgL_new1702z00_1796;

									BgL_new1702z00_1796 =
										((BgL_cenumz00_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_cenumz00_bgl))));
									{	/* Foreign/ctype.scm 35 */
										BgL_cenumz00_bglt BgL_res3073z00_1802;

										{	/* Foreign/ctype.scm 35 */
											BgL_cenumz00_bglt BgL_new1725z00_1797;

											BgL_new1725z00_1797 = BgL_new1702z00_1796;
											{	/* Foreign/ctype.scm 35 */
												BgL_typez00_bglt BgL_btype1723z00_1800;

												obj_t BgL_literals1724z00_1801;

												BgL_btype1723z00_1800 = BgL_arg2909z00_863;
												BgL_literals1724z00_1801 = BUNSPEC;
												((((BgL_cenumz00_bglt) CREF(BgL_new1725z00_1797))->
														BgL_btypez00) =
													((BgL_typez00_bglt) BgL_btype1723z00_1800), BUNSPEC);
												((((BgL_cenumz00_bglt) CREF(BgL_new1725z00_1797))->
														BgL_literalsz00) =
													((obj_t) BgL_literals1724z00_1801), BUNSPEC);
												BgL_res3073z00_1802 = BgL_new1725z00_1797;
										}} BgL_res3073z00_1802;
									}
									BgL_res3074z00_1803 = BgL_new1702z00_1796;
								}
								BgL_arg2908z00_862 = BgL_res3074z00_1803;
						}}
						{	/* Foreign/ctype.scm 35 */
							obj_t BgL_auxz00_3777;

							BgL_objectz00_bglt BgL_auxz00_3775;

							BgL_auxz00_3777 = (obj_t) (BgL_arg2908z00_862);
							BgL_auxz00_3775 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2cenumzd2nilz52zzforeign_ctypez00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3775, BgL_auxz00_3777);
				}}}
			else
				{	/* Foreign/ctype.scm 35 */
					BFALSE;
				}
			return
				(BgL_cenumz00_bglt) (BGl_z52thezd2cenumzd2nilz52zzforeign_ctypez00);
		}
	}



/* _cenum-nil */
	obj_t BGl__cenumzd2nilzd2zzforeign_ctypez00(obj_t BgL_envz00_2206)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 35 */
			return (obj_t) (BGl_cenumzd2nilzd2zzforeign_ctypez00());
		}
	}



/* calias? */
	BGL_EXPORTED_DEF bool_t BGl_caliaszf3zf3zzforeign_ctypez00(obj_t
		BgL_obj1652z00_212)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 31 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1652z00_212,
				BGl_caliasz00zzforeign_ctypez00);
		}
	}



/* _calias? */
	obj_t BGl__caliaszf3zf3zzforeign_ctypez00(obj_t BgL_envz00_2203,
		obj_t BgL_obj1652z00_2204)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 31 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1652z00_2204,
					BGl_caliasz00zzforeign_ctypez00));
		}
	}



/* widening-calias */
	BGL_EXPORTED_DEF BgL_caliasz00_bglt
		BGl_wideningzd2caliaszd2zzforeign_ctypez00(bool_t BgL_arrayzf31620zf3_216)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 31 */
			{	/* Foreign/ctype.scm 31 */
				BgL_caliasz00_bglt BgL_new1621z00_1804;

				BgL_new1621z00_1804 =
					((BgL_caliasz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_caliasz00_bgl))));
				{	/* Foreign/ctype.scm 31 */
					BgL_caliasz00_bglt BgL_res3075z00_1808;

					{	/* Foreign/ctype.scm 31 */
						BgL_caliasz00_bglt BgL_new1642z00_1805;

						BgL_new1642z00_1805 = BgL_new1621z00_1804;
						{	/* Foreign/ctype.scm 31 */
							bool_t BgL_arrayzf31641zf3_1807;

							BgL_arrayzf31641zf3_1807 = BgL_arrayzf31620zf3_216;
							((((BgL_caliasz00_bglt) CREF(BgL_new1642z00_1805))->
									BgL_arrayzf3zf3) =
								((bool_t) BgL_arrayzf31641zf3_1807), BUNSPEC);
							BgL_res3075z00_1808 = BgL_new1642z00_1805;
					}} BgL_res3075z00_1808;
				}
				return BgL_new1621z00_1804;
			}
		}
	}



/* _widening-calias */
	obj_t BGl__wideningzd2caliaszd2zzforeign_ctypez00(obj_t BgL_envz00_2388,
		obj_t BgL_arrayzf31620zf3_2389)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 31 */
			return
				(obj_t) (BGl_wideningzd2caliaszd2zzforeign_ctypez00(CBOOL
					(BgL_arrayzf31620zf3_2389)));
		}
	}



/* make-calias */
	BGL_EXPORTED_DEF BgL_caliasz00_bglt
		BGl_makezd2caliaszd2zzforeign_ctypez00(obj_t BgL_id1624z00_217,
		obj_t BgL_name1625z00_218, obj_t BgL_siza7e1626za7_219,
		obj_t BgL_class1627z00_220, obj_t BgL_coercezd2to1628zd2_221,
		obj_t BgL_parents1629z00_222, bool_t BgL_initzf31630zf3_223,
		bool_t BgL_magiczf31631zf3_224, obj_t BgL_z421632z42_225,
		obj_t BgL_alias1633z00_226, obj_t BgL_pointedzd2tozd2by1634z00_227,
		obj_t BgL_tvector1635z00_228, obj_t BgL_location1636z00_229,
		obj_t BgL_importzd2location1637zd2_230, int BgL_occurrence1638z00_231,
		bool_t BgL_arrayzf31623zf3_232)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 31 */
			{	/* Foreign/ctype.scm 31 */
				BgL_typez00_bglt BgL_aux1639z00_1809;

				BgL_aux1639z00_1809 =
					BGl_makezd2typezd2zztype_typez00(BgL_id1624z00_217,
					BgL_name1625z00_218, BgL_siza7e1626za7_219, BgL_class1627z00_220,
					BgL_coercezd2to1628zd2_221, BgL_parents1629z00_222,
					BgL_initzf31630zf3_223, BgL_magiczf31631zf3_224, BgL_z421632z42_225,
					BgL_alias1633z00_226, BgL_pointedzd2tozd2by1634z00_227,
					BgL_tvector1635z00_228, BgL_location1636z00_229,
					BgL_importzd2location1637zd2_230, BgL_occurrence1638z00_231);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux1639z00_1809),
					BGl_classzd2numzd2zz__objectz00(BGl_caliasz00zzforeign_ctypez00));
				{	/* Foreign/ctype.scm 31 */
					BgL_caliasz00_bglt BgL_arg2911z00_1811;

					{	/* Foreign/ctype.scm 31 */
						BgL_caliasz00_bglt BgL_res3077z00_1821;

						{	/* Foreign/ctype.scm 31 */
							BgL_caliasz00_bglt BgL_new1621z00_1816;

							BgL_new1621z00_1816 =
								((BgL_caliasz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_caliasz00_bgl))));
							{	/* Foreign/ctype.scm 31 */
								BgL_caliasz00_bglt BgL_res3076z00_1820;

								{	/* Foreign/ctype.scm 31 */
									BgL_caliasz00_bglt BgL_new1642z00_1817;

									BgL_new1642z00_1817 = BgL_new1621z00_1816;
									{	/* Foreign/ctype.scm 31 */
										bool_t BgL_arrayzf31641zf3_1819;

										BgL_arrayzf31641zf3_1819 = BgL_arrayzf31623zf3_232;
										((((BgL_caliasz00_bglt) CREF(BgL_new1642z00_1817))->
												BgL_arrayzf3zf3) =
											((bool_t) BgL_arrayzf31641zf3_1819), BUNSPEC);
										BgL_res3076z00_1820 = BgL_new1642z00_1817;
								}} BgL_res3076z00_1820;
							}
							BgL_res3077z00_1821 = BgL_new1621z00_1816;
						}
						BgL_arg2911z00_1811 = BgL_res3077z00_1821;
					}
					{	/* Foreign/ctype.scm 31 */
						obj_t BgL_auxz00_3799;

						BgL_objectz00_bglt BgL_auxz00_3797;

						BgL_auxz00_3799 = (obj_t) (BgL_arg2911z00_1811);
						BgL_auxz00_3797 = (BgL_objectz00_bglt) (BgL_aux1639z00_1809);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_3797, BgL_auxz00_3799);
				}}
				return
					((BgL_caliasz00_bglt) (BgL_caliasz00_bglt) (BgL_aux1639z00_1809));
			}
		}
	}



/* _make-calias */
	obj_t BGl__makezd2caliaszd2zzforeign_ctypez00(obj_t BgL_envz00_2390,
		obj_t BgL_id1624z00_2391, obj_t BgL_name1625z00_2392,
		obj_t BgL_siza7e1626za7_2393, obj_t BgL_class1627z00_2394,
		obj_t BgL_coercezd2to1628zd2_2395, obj_t BgL_parents1629z00_2396,
		obj_t BgL_initzf31630zf3_2397, obj_t BgL_magiczf31631zf3_2398,
		obj_t BgL_z421632z42_2399, obj_t BgL_alias1633z00_2400,
		obj_t BgL_pointedzd2tozd2by1634z00_2401, obj_t BgL_tvector1635z00_2402,
		obj_t BgL_location1636z00_2403, obj_t BgL_importzd2location1637zd2_2404,
		obj_t BgL_occurrence1638z00_2405, obj_t BgL_arrayzf31623zf3_2406)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 31 */
			return
				(obj_t) (BGl_makezd2caliaszd2zzforeign_ctypez00(BgL_id1624z00_2391,
					BgL_name1625z00_2392, BgL_siza7e1626za7_2393, BgL_class1627z00_2394,
					BgL_coercezd2to1628zd2_2395, BgL_parents1629z00_2396,
					CBOOL(BgL_initzf31630zf3_2397), CBOOL(BgL_magiczf31631zf3_2398),
					BgL_z421632z42_2399, BgL_alias1633z00_2400,
					BgL_pointedzd2tozd2by1634z00_2401, BgL_tvector1635z00_2402,
					BgL_location1636z00_2403, BgL_importzd2location1637zd2_2404,
					CINT(BgL_occurrence1638z00_2405), CBOOL(BgL_arrayzf31623zf3_2406)));
		}
	}



/* fill-calias! */
	BGL_EXPORTED_DEF BgL_caliasz00_bglt
		BGl_fillzd2caliasz12zc0zzforeign_ctypez00(BgL_caliasz00_bglt
		BgL_new1642z00_233, bool_t BgL_arrayzf31641zf3_234)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 31 */
			{	/* Foreign/ctype.scm 31 */
				bool_t BgL_arrayzf31641zf3_2566;

				BgL_arrayzf31641zf3_2566 = BgL_arrayzf31641zf3_234;
				((((BgL_caliasz00_bglt) CREF(BgL_new1642z00_233))->BgL_arrayzf3zf3) =
					((bool_t) BgL_arrayzf31641zf3_2566), BUNSPEC);
				return BgL_new1642z00_233;
			}
		}
	}



/* _fill-calias! */
	obj_t BGl__fillzd2caliasz12zc0zzforeign_ctypez00(obj_t BgL_envz00_2407,
		obj_t BgL_new1642z00_2408, obj_t BgL_arrayzf31641zf3_2409)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 31 */
			{	/* Foreign/ctype.scm 31 */
				BgL_caliasz00_bglt BgL_auxz00_3811;

				{	/* Foreign/ctype.scm 31 */
					BgL_caliasz00_bglt BgL_res3143z00_2570;

					{	/* Foreign/ctype.scm 31 */
						BgL_caliasz00_bglt BgL_new1642z00_2567;

						bool_t BgL_arrayzf31641zf3_2568;

						BgL_new1642z00_2567 = (BgL_caliasz00_bglt) (BgL_new1642z00_2408);
						BgL_arrayzf31641zf3_2568 = CBOOL(BgL_arrayzf31641zf3_2409);
						{	/* Foreign/ctype.scm 31 */
							bool_t BgL_arrayzf31641zf3_2569;

							BgL_arrayzf31641zf3_2569 = BgL_arrayzf31641zf3_2568;
							((((BgL_caliasz00_bglt) CREF(BgL_new1642z00_2567))->
									BgL_arrayzf3zf3) =
								((bool_t) BgL_arrayzf31641zf3_2569), BUNSPEC);
							BgL_res3143z00_2570 = BgL_new1642z00_2567;
						}
					}
					BgL_auxz00_3811 = BgL_res3143z00_2570;
				}
				return (obj_t) (BgL_auxz00_3811);
			}
		}
	}



/* %allocate-calias */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_z52allocatezd2caliasz80zzforeign_ctypez00()
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 31 */
			{	/* Foreign/ctype.scm 31 */
				BgL_typez00_bglt BgL_new1645z00_2571;

				BgL_new1645z00_2571 =
					((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_typez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new1645z00_2571),
					BGl_classzd2numzd2zz__objectz00(BGl_caliasz00zzforeign_ctypez00));
				{	/* Foreign/ctype.scm 31 */
					BgL_objectz00_bglt BgL_auxz00_3820;

					BgL_auxz00_3820 = (BgL_objectz00_bglt) (BgL_new1645z00_2571);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3820, BFALSE);
				}
				return BgL_new1645z00_2571;
			}
		}
	}



/* _%allocate-calias */
	obj_t BGl__z52allocatezd2caliasz80zzforeign_ctypez00(obj_t BgL_envz00_2201)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 31 */
			{	/* Foreign/ctype.scm 31 */
				BgL_typez00_bglt BgL_auxz00_3823;

				{	/* Foreign/ctype.scm 31 */
					BgL_typez00_bglt BgL_res3144z00_2575;

					{	/* Foreign/ctype.scm 31 */
						BgL_typez00_bglt BgL_new1645z00_2573;

						BgL_new1645z00_2573 =
							((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_typez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1645z00_2573),
							BGl_classzd2numzd2zz__objectz00(BGl_caliasz00zzforeign_ctypez00));
						{	/* Foreign/ctype.scm 31 */
							BgL_objectz00_bglt BgL_auxz00_3828;

							BgL_auxz00_3828 = (BgL_objectz00_bglt) (BgL_new1645z00_2573);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3828, BFALSE);
						}
						BgL_res3144z00_2575 = BgL_new1645z00_2573;
					}
					BgL_auxz00_3823 = BgL_res3144z00_2575;
				}
				return (obj_t) (BgL_auxz00_3823);
			}
		}
	}



/* calias-nil */
	BGL_EXPORTED_DEF BgL_caliasz00_bglt BGl_caliaszd2nilzd2zzforeign_ctypez00()
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 31 */
			if ((BGl_z52thezd2caliaszd2nilz52zzforeign_ctypez00 == BUNSPEC))
				{	/* Foreign/ctype.scm 31 */
					{	/* Foreign/ctype.scm 31 */
						BgL_typez00_bglt BgL_res3078z00_1831;

						{	/* Foreign/ctype.scm 31 */
							BgL_typez00_bglt BgL_new1598z00_1827;

							BgL_new1598z00_1827 =
								((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1598z00_1827),
								BGl_classzd2numzd2zz__objectz00(BGl_typez00zztype_typez00));
							{	/* Foreign/ctype.scm 31 */
								BgL_objectz00_bglt BgL_auxz00_3838;

								BgL_auxz00_3838 = (BgL_objectz00_bglt) (BgL_new1598z00_1827);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3838, BFALSE);
							}
							BgL_res3078z00_1831 = BgL_new1598z00_1827;
						}
						BGl_z52thezd2caliaszd2nilz52zzforeign_ctypez00 =
							(obj_t) (BgL_res3078z00_1831);
					}
					{	/* Foreign/ctype.scm 31 */
						BgL_typez00_bglt BgL_res3079z00_1863;

						{	/* Foreign/ctype.scm 31 */
							BgL_typez00_bglt BgL_new1581z00_1832;

							obj_t BgL_id1566z00_1833;

							int BgL_occurrence1580z00_1847;

							BgL_new1581z00_1832 =
								(BgL_typez00_bglt)
								(BGl_z52thezd2caliaszd2nilz52zzforeign_ctypez00);
							BgL_id1566z00_1833 = CNST_TABLE_REF(((long) 31));
							BgL_occurrence1580z00_1847 = (int) (((long) 0));
							{	/* Foreign/ctype.scm 31 */
								obj_t BgL_id1566z00_1848;

								obj_t BgL_name1567z00_1849;

								obj_t BgL_siza7e1568za7_1850;

								obj_t BgL_class1569z00_1851;

								obj_t BgL_coercezd2to1570zd2_1852;

								obj_t BgL_parents1571z00_1853;

								bool_t BgL_initzf31572zf3_1854;

								bool_t BgL_magiczf31573zf3_1855;

								obj_t BgL_z421574z42_1856;

								obj_t BgL_alias1575z00_1857;

								obj_t BgL_pointedzd2tozd2by1576z00_1858;

								obj_t BgL_tvector1577z00_1859;

								obj_t BgL_location1578z00_1860;

								obj_t BgL_importzd2location1579zd2_1861;

								int BgL_occurrence1580z00_1862;

								BgL_id1566z00_1848 = BgL_id1566z00_1833;
								BgL_name1567z00_1849 = BUNSPEC;
								BgL_siza7e1568za7_1850 = BUNSPEC;
								BgL_class1569z00_1851 = BUNSPEC;
								BgL_coercezd2to1570zd2_1852 = BUNSPEC;
								BgL_parents1571z00_1853 = BUNSPEC;
								BgL_initzf31572zf3_1854 = ((bool_t) 0);
								BgL_magiczf31573zf3_1855 = ((bool_t) 0);
								BgL_z421574z42_1856 = BUNSPEC;
								BgL_alias1575z00_1857 = BUNSPEC;
								BgL_pointedzd2tozd2by1576z00_1858 = BUNSPEC;
								BgL_tvector1577z00_1859 = BUNSPEC;
								BgL_location1578z00_1860 = BUNSPEC;
								BgL_importzd2location1579zd2_1861 = BUNSPEC;
								BgL_occurrence1580z00_1862 = BgL_occurrence1580z00_1847;
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1832))->BgL_idz00) =
									((obj_t) BgL_id1566z00_1848), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1832))->BgL_namez00) =
									((obj_t) BgL_name1567z00_1849), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1832))->
										BgL_siza7eza7) = ((obj_t) BgL_siza7e1568za7_1850), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1832))->
										BgL_classz00) = ((obj_t) BgL_class1569z00_1851), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1832))->
										BgL_coercezd2tozd2) =
									((obj_t) BgL_coercezd2to1570zd2_1852), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1832))->
										BgL_parentsz00) =
									((obj_t) BgL_parents1571z00_1853), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1832))->
										BgL_initzf3zf3) =
									((bool_t) BgL_initzf31572zf3_1854), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1832))->
										BgL_magiczf3zf3) =
									((bool_t) BgL_magiczf31573zf3_1855), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1832))->BgL_z42z42) =
									((obj_t) BgL_z421574z42_1856), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1832))->
										BgL_aliasz00) = ((obj_t) BgL_alias1575z00_1857), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1832))->
										BgL_pointedzd2tozd2byz00) =
									((obj_t) BgL_pointedzd2tozd2by1576z00_1858), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1832))->
										BgL_tvectorz00) =
									((obj_t) BgL_tvector1577z00_1859), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1832))->
										BgL_locationz00) =
									((obj_t) BgL_location1578z00_1860), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1832))->
										BgL_importzd2locationzd2) =
									((obj_t) BgL_importzd2location1579zd2_1861), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_1832))->
										BgL_occurrencez00) =
									((int) BgL_occurrence1580z00_1862), BUNSPEC);
								BgL_res3079z00_1863 = BgL_new1581z00_1832;
						}} BgL_res3079z00_1863;
					}
					{	/* Foreign/ctype.scm 31 */
						long BgL_arg2914z00_873;

						BgL_arg2914z00_873 =
							BGl_classzd2numzd2zz__objectz00(BGl_caliasz00zzforeign_ctypez00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2caliaszd2nilz52zzforeign_ctypez00),
							BgL_arg2914z00_873);
					}
					{	/* Foreign/ctype.scm 31 */
						BgL_caliasz00_bglt BgL_arg2915z00_874;

						{	/* Foreign/ctype.scm 31 */
							BgL_caliasz00_bglt BgL_res3081z00_1872;

							{	/* Foreign/ctype.scm 31 */
								BgL_caliasz00_bglt BgL_new1621z00_1867;

								BgL_new1621z00_1867 =
									((BgL_caliasz00_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_caliasz00_bgl))));
								{	/* Foreign/ctype.scm 31 */
									BgL_caliasz00_bglt BgL_res3080z00_1871;

									{	/* Foreign/ctype.scm 31 */
										BgL_caliasz00_bglt BgL_new1642z00_1868;

										BgL_new1642z00_1868 = BgL_new1621z00_1867;
										{	/* Foreign/ctype.scm 31 */
											bool_t BgL_arrayzf31641zf3_1870;

											BgL_arrayzf31641zf3_1870 = ((bool_t) 0);
											((((BgL_caliasz00_bglt) CREF(BgL_new1642z00_1868))->
													BgL_arrayzf3zf3) =
												((bool_t) BgL_arrayzf31641zf3_1870), BUNSPEC);
											BgL_res3080z00_1871 = BgL_new1642z00_1868;
									}} BgL_res3080z00_1871;
								}
								BgL_res3081z00_1872 = BgL_new1621z00_1867;
							}
							BgL_arg2915z00_874 = BgL_res3081z00_1872;
						}
						{	/* Foreign/ctype.scm 31 */
							obj_t BgL_auxz00_3867;

							BgL_objectz00_bglt BgL_auxz00_3865;

							BgL_auxz00_3867 = (obj_t) (BgL_arg2915z00_874);
							BgL_auxz00_3865 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2caliaszd2nilz52zzforeign_ctypez00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3865, BgL_auxz00_3867);
				}}}
			else
				{	/* Foreign/ctype.scm 31 */
					BFALSE;
				}
			return
				(BgL_caliasz00_bglt) (BGl_z52thezd2caliaszd2nilz52zzforeign_ctypez00);
		}
	}



/* _calias-nil */
	obj_t BGl__caliaszd2nilzd2zzforeign_ctypez00(obj_t BgL_envz00_2202)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 31 */
			return (obj_t) (BGl_caliaszd2nilzd2zzforeign_ctypez00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzforeign_ctypez00()
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzforeign_ctypez00()
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_cstructza2za2zzforeign_ctypez00, BGl_proc3111z00zzforeign_ctypez00,
				BGl_string3112z00zzforeign_ctypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_cstructza2za2zzforeign_ctypez00, BGl_proc3113z00zzforeign_ctypez00,
				BGl_string3114z00zzforeign_ctypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_cstructz00zzforeign_ctypez00, BGl_proc3115z00zzforeign_ctypez00,
				BGl_string3112z00zzforeign_ctypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_cstructz00zzforeign_ctypez00, BGl_proc3116z00zzforeign_ctypez00,
				BGl_string3114z00zzforeign_ctypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_cptrz00zzforeign_ctypez00, BGl_proc3117z00zzforeign_ctypez00,
				BGl_string3112z00zzforeign_ctypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_cptrz00zzforeign_ctypez00, BGl_proc3118z00zzforeign_ctypez00,
				BGl_string3114z00zzforeign_ctypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_cfunctionz00zzforeign_ctypez00, BGl_proc3119z00zzforeign_ctypez00,
				BGl_string3112z00zzforeign_ctypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_cfunctionz00zzforeign_ctypez00, BGl_proc3120z00zzforeign_ctypez00,
				BGl_string3114z00zzforeign_ctypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_copaquez00zzforeign_ctypez00, BGl_proc3121z00zzforeign_ctypez00,
				BGl_string3112z00zzforeign_ctypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_copaquez00zzforeign_ctypez00, BGl_proc3122z00zzforeign_ctypez00,
				BGl_string3114z00zzforeign_ctypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_cenumz00zzforeign_ctypez00, BGl_proc3123z00zzforeign_ctypez00,
				BGl_string3112z00zzforeign_ctypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_cenumz00zzforeign_ctypez00, BGl_proc3124z00zzforeign_ctypez00,
				BGl_string3114z00zzforeign_ctypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_caliasz00zzforeign_ctypez00, BGl_proc3125z00zzforeign_ctypez00,
				BGl_string3112z00zzforeign_ctypez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_caliasz00zzforeign_ctypez00, BGl_proc3126z00zzforeign_ctypez00,
				BGl_string3114z00zzforeign_ctypez00);
		}
	}



/* struct+object->objec2271 */
	obj_t BGl_structzb2objectzd2ze3objec2271z83zzforeign_ctypez00(obj_t
		BgL_envz00_2429, obj_t BgL_oz00_2430, obj_t BgL_sz00_2431)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 31 */
			{
				BgL_caliasz00_bglt BgL_oz00_1067;

				obj_t BgL_sz00_1068;

				{	/* Foreign/ctype.scm 31 */
					BgL_caliasz00_bglt BgL_auxz00_3887;

					BgL_oz00_1067 = (BgL_caliasz00_bglt) (BgL_oz00_2430);
					BgL_sz00_1068 = BgL_sz00_2431;
					{

						{	/* Foreign/ctype.scm 31 */
							obj_t BgL_old1649z00_1071;

							obj_t BgL_aux1650z00_1072;

							{	/* Foreign/ctype.scm 31 */
								obj_t BgL_nextzd2method2270zd2_1077;

								BgL_nextzd2method2270zd2_1077 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1067),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_caliasz00zzforeign_ctypez00);
								if (PROCEDUREP(BgL_nextzd2method2270zd2_1077))
									{	/* Foreign/ctype.scm 31 */
										BgL_old1649z00_1071 =
											PROCEDURE_ENTRY(BgL_nextzd2method2270zd2_1077)
											(BgL_nextzd2method2270zd2_1077, (obj_t) (BgL_oz00_1067),
											BgL_sz00_1068, BEOA);
									}
								else
									{	/* Foreign/ctype.scm 31 */
										BgL_old1649z00_1071 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1067), BgL_sz00_1068));
									}
							}
							BgL_aux1650z00_1072 =
								STRUCT_REF(BgL_sz00_1068, (int) (((long) 0)));
							{	/* Foreign/ctype.scm 31 */
								BgL_caliasz00_bglt BgL_new1651z00_1073;

								BgL_new1651z00_1073 =
									((BgL_caliasz00_bglt) (BgL_old1649z00_1071));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new1651z00_1073),
									BGl_classzd2numzd2zz__objectz00
									(BGl_caliasz00zzforeign_ctypez00));
								{	/* Foreign/ctype.scm 31 */
									BgL_caliasz00_bglt BgL_arg3000z00_1075;

									{	/* Foreign/ctype.scm 31 */
										obj_t BgL_arg3001z00_1076;

										BgL_arg3001z00_1076 =
											STRUCT_REF(BgL_aux1650z00_1072, (int) (((long) 0)));
										{	/* Foreign/ctype.scm 31 */
											BgL_caliasz00_bglt BgL_res3102z00_2188;

											{	/* Foreign/ctype.scm 31 */
												bool_t BgL_arrayzf31620zf3_2182;

												BgL_arrayzf31620zf3_2182 = CBOOL(BgL_arg3001z00_1076);
												{	/* Foreign/ctype.scm 31 */
													BgL_caliasz00_bglt BgL_new1621z00_2183;

													BgL_new1621z00_2183 =
														((BgL_caliasz00_bglt) BREF(GC_MALLOC(sizeof(struct
																	BgL_caliasz00_bgl))));
													{	/* Foreign/ctype.scm 31 */
														BgL_caliasz00_bglt BgL_res3101z00_2187;

														{	/* Foreign/ctype.scm 31 */
															BgL_caliasz00_bglt BgL_new1642z00_2184;

															BgL_new1642z00_2184 = BgL_new1621z00_2183;
															{	/* Foreign/ctype.scm 31 */
																bool_t BgL_arrayzf31641zf3_2186;

																BgL_arrayzf31641zf3_2186 =
																	BgL_arrayzf31620zf3_2182;
																((((BgL_caliasz00_bglt)
																			CREF(BgL_new1642z00_2184))->
																		BgL_arrayzf3zf3) =
																	((bool_t) BgL_arrayzf31641zf3_2186), BUNSPEC);
																BgL_res3101z00_2187 = BgL_new1642z00_2184;
														}} BgL_res3101z00_2187;
													}
													BgL_res3102z00_2188 = BgL_new1621z00_2183;
											}}
											BgL_arg3000z00_1075 = BgL_res3102z00_2188;
									}}
									{	/* Foreign/ctype.scm 31 */
										obj_t BgL_auxz00_3911;

										BgL_objectz00_bglt BgL_auxz00_3909;

										BgL_auxz00_3911 = (obj_t) (BgL_arg3000z00_1075);
										BgL_auxz00_3909 =
											(BgL_objectz00_bglt) (BgL_new1651z00_1073);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3909, BgL_auxz00_3911);
								}}
								BgL_auxz00_3887 = BgL_new1651z00_1073;
					}}}
					return (obj_t) (BgL_auxz00_3887);
				}
			}
		}
	}



/* object->struct-calia2269 */
	obj_t BGl_objectzd2ze3structzd2calia2269ze3zzforeign_ctypez00(obj_t
		BgL_envz00_2432, obj_t BgL_obj1646z00_2433)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 31 */
			{
				BgL_caliasz00_bglt BgL_obj1646z00_1057;

				BgL_obj1646z00_1057 = (BgL_caliasz00_bglt) (BgL_obj1646z00_2433);
				{

					{	/* Foreign/ctype.scm 31 */
						obj_t BgL_res1647z00_1060;

						{	/* Foreign/ctype.scm 31 */
							obj_t BgL_nextzd2method2268zd2_1065;

							BgL_nextzd2method2268zd2_1065 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj1646z00_1057),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_caliasz00zzforeign_ctypez00);
							if (PROCEDUREP(BgL_nextzd2method2268zd2_1065))
								{	/* Foreign/ctype.scm 31 */
									BgL_res1647z00_1060 =
										PROCEDURE_ENTRY(BgL_nextzd2method2268zd2_1065)
										(BgL_nextzd2method2268zd2_1065,
										(obj_t) (BgL_obj1646z00_1057), BEOA);
								}
							else
								{	/* Foreign/ctype.scm 31 */
									BgL_res1647z00_1060 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj1646z00_1057));
								}
						}
						{	/* Foreign/ctype.scm 31 */
							obj_t BgL_aux1648z00_1061;

							{	/* Foreign/ctype.scm 31 */
								obj_t BgL_keyz00_2159;

								BgL_keyz00_2159 = CNST_TABLE_REF(((long) 24));
								BgL_aux1648z00_1061 =
									make_struct(BgL_keyz00_2159, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Foreign/ctype.scm 31 */
								bool_t BgL_arg2995z00_1063;

								{
									obj_t BgL_auxz00_3928;

									{	/* Foreign/ctype.scm 31 */
										BgL_objectz00_bglt BgL_auxz00_3929;

										BgL_auxz00_3929 =
											(BgL_objectz00_bglt) (BgL_obj1646z00_1057);
										BgL_auxz00_3928 = BGL_OBJECT_WIDENING(BgL_auxz00_3929);
									}
									BgL_arg2995z00_1063 =
										(((BgL_caliasz00_bglt) CREF(BgL_auxz00_3928))->
										BgL_arrayzf3zf3);
								}
								{	/* Foreign/ctype.scm 31 */
									obj_t BgL_auxz00_3935;

									int BgL_auxz00_3933;

									BgL_auxz00_3935 = BBOOL(BgL_arg2995z00_1063);
									BgL_auxz00_3933 = (int) (((long) 0));
									STRUCT_SET(BgL_aux1648z00_1061, BgL_auxz00_3933,
										BgL_auxz00_3935);
							}}
							{	/* Foreign/ctype.scm 31 */
								int BgL_auxz00_3938;

								BgL_auxz00_3938 = (int) (((long) 0));
								STRUCT_SET(BgL_res1647z00_1060, BgL_auxz00_3938,
									BgL_aux1648z00_1061);
							}
							{	/* Foreign/ctype.scm 31 */
								obj_t BgL_auxz00_3941;

								BgL_auxz00_3941 = STRUCT_KEY(BgL_res1647z00_1060);
								STRUCT_KEY_SET(BgL_aux1648z00_1061, BgL_auxz00_3941);
							}
							{	/* Foreign/ctype.scm 31 */
								obj_t BgL_kz00_2174;

								BgL_kz00_2174 = CNST_TABLE_REF(((long) 24));
								STRUCT_KEY_SET(BgL_res1647z00_1060, BgL_kz00_2174);
							}
							return BgL_res1647z00_1060;
						}
					}
				}
			}
		}
	}



/* struct+object->objec2267 */
	obj_t BGl_structzb2objectzd2ze3objec2267z83zzforeign_ctypez00(obj_t
		BgL_envz00_2434, obj_t BgL_oz00_2435, obj_t BgL_sz00_2436)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 35 */
			{
				BgL_cenumz00_bglt BgL_oz00_1044;

				obj_t BgL_sz00_1045;

				{	/* Foreign/ctype.scm 35 */
					BgL_cenumz00_bglt BgL_auxz00_3947;

					BgL_oz00_1044 = (BgL_cenumz00_bglt) (BgL_oz00_2435);
					BgL_sz00_1045 = BgL_sz00_2436;
					{

						{	/* Foreign/ctype.scm 35 */
							obj_t BgL_old1733z00_1048;

							obj_t BgL_aux1734z00_1049;

							{	/* Foreign/ctype.scm 35 */
								obj_t BgL_nextzd2method2266zd2_1055;

								BgL_nextzd2method2266zd2_1055 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1044),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_cenumz00zzforeign_ctypez00);
								if (PROCEDUREP(BgL_nextzd2method2266zd2_1055))
									{	/* Foreign/ctype.scm 35 */
										BgL_old1733z00_1048 =
											PROCEDURE_ENTRY(BgL_nextzd2method2266zd2_1055)
											(BgL_nextzd2method2266zd2_1055, (obj_t) (BgL_oz00_1044),
											BgL_sz00_1045, BEOA);
									}
								else
									{	/* Foreign/ctype.scm 35 */
										BgL_old1733z00_1048 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1044), BgL_sz00_1045));
									}
							}
							BgL_aux1734z00_1049 =
								STRUCT_REF(BgL_sz00_1045, (int) (((long) 0)));
							{	/* Foreign/ctype.scm 35 */
								BgL_cenumz00_bglt BgL_new1735z00_1050;

								BgL_new1735z00_1050 =
									((BgL_cenumz00_bglt) (BgL_old1733z00_1048));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new1735z00_1050),
									BGl_classzd2numzd2zz__objectz00
									(BGl_cenumz00zzforeign_ctypez00));
								{	/* Foreign/ctype.scm 35 */
									BgL_cenumz00_bglt BgL_arg2990z00_1052;

									{	/* Foreign/ctype.scm 35 */
										obj_t BgL_arg2991z00_1053;

										obj_t BgL_arg2992z00_1054;

										BgL_arg2991z00_1053 =
											STRUCT_REF(BgL_aux1734z00_1049, (int) (((long) 0)));
										BgL_arg2992z00_1054 =
											STRUCT_REF(BgL_aux1734z00_1049, (int) (((long) 1)));
										{	/* Foreign/ctype.scm 35 */
											BgL_cenumz00_bglt BgL_res3099z00_2157;

											{	/* Foreign/ctype.scm 35 */
												BgL_typez00_bglt BgL_btype1700z00_2148;

												BgL_btype1700z00_2148 =
													(BgL_typez00_bglt) (BgL_arg2991z00_1053);
												{	/* Foreign/ctype.scm 35 */
													BgL_cenumz00_bglt BgL_new1702z00_2150;

													BgL_new1702z00_2150 =
														((BgL_cenumz00_bglt) BREF(GC_MALLOC(sizeof(struct
																	BgL_cenumz00_bgl))));
													{	/* Foreign/ctype.scm 35 */
														BgL_cenumz00_bglt BgL_res3098z00_2156;

														{	/* Foreign/ctype.scm 35 */
															BgL_cenumz00_bglt BgL_new1725z00_2151;

															BgL_new1725z00_2151 = BgL_new1702z00_2150;
															{	/* Foreign/ctype.scm 35 */
																BgL_typez00_bglt BgL_btype1723z00_2154;

																obj_t BgL_literals1724z00_2155;

																BgL_btype1723z00_2154 = BgL_btype1700z00_2148;
																BgL_literals1724z00_2155 = BgL_arg2992z00_1054;
																((((BgL_cenumz00_bglt)
																			CREF(BgL_new1725z00_2151))->
																		BgL_btypez00) =
																	((BgL_typez00_bglt) BgL_btype1723z00_2154),
																	BUNSPEC);
																((((BgL_cenumz00_bglt)
																			CREF(BgL_new1725z00_2151))->
																		BgL_literalsz00) =
																	((obj_t) BgL_literals1724z00_2155), BUNSPEC);
																BgL_res3098z00_2156 = BgL_new1725z00_2151;
														}} BgL_res3098z00_2156;
													}
													BgL_res3099z00_2157 = BgL_new1702z00_2150;
											}}
											BgL_arg2990z00_1052 = BgL_res3099z00_2157;
									}}
									{	/* Foreign/ctype.scm 35 */
										obj_t BgL_auxz00_3974;

										BgL_objectz00_bglt BgL_auxz00_3972;

										BgL_auxz00_3974 = (obj_t) (BgL_arg2990z00_1052);
										BgL_auxz00_3972 =
											(BgL_objectz00_bglt) (BgL_new1735z00_1050);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3972, BgL_auxz00_3974);
								}}
								BgL_auxz00_3947 = BgL_new1735z00_1050;
					}}}
					return (obj_t) (BgL_auxz00_3947);
				}
			}
		}
	}



/* object->struct-cenum2265 */
	obj_t BGl_objectzd2ze3structzd2cenum2265ze3zzforeign_ctypez00(obj_t
		BgL_envz00_2437, obj_t BgL_obj1730z00_2438)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 35 */
			{
				BgL_cenumz00_bglt BgL_obj1730z00_1032;

				BgL_obj1730z00_1032 = (BgL_cenumz00_bglt) (BgL_obj1730z00_2438);
				{

					{	/* Foreign/ctype.scm 35 */
						obj_t BgL_res1731z00_1035;

						{	/* Foreign/ctype.scm 35 */
							obj_t BgL_nextzd2method2264zd2_1042;

							BgL_nextzd2method2264zd2_1042 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj1730z00_1032),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_cenumz00zzforeign_ctypez00);
							if (PROCEDUREP(BgL_nextzd2method2264zd2_1042))
								{	/* Foreign/ctype.scm 35 */
									BgL_res1731z00_1035 =
										PROCEDURE_ENTRY(BgL_nextzd2method2264zd2_1042)
										(BgL_nextzd2method2264zd2_1042,
										(obj_t) (BgL_obj1730z00_1032), BEOA);
								}
							else
								{	/* Foreign/ctype.scm 35 */
									BgL_res1731z00_1035 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj1730z00_1032));
								}
						}
						{	/* Foreign/ctype.scm 35 */
							obj_t BgL_aux1732z00_1036;

							{	/* Foreign/ctype.scm 35 */
								obj_t BgL_keyz00_2119;

								BgL_keyz00_2119 = CNST_TABLE_REF(((long) 25));
								BgL_aux1732z00_1036 =
									make_struct(BgL_keyz00_2119, (int) (((long) 2)), BUNSPEC);
							}
							{	/* Foreign/ctype.scm 35 */
								BgL_typez00_bglt BgL_arg2984z00_1038;

								{
									obj_t BgL_auxz00_3991;

									{	/* Foreign/ctype.scm 35 */
										BgL_objectz00_bglt BgL_auxz00_3992;

										BgL_auxz00_3992 =
											(BgL_objectz00_bglt) (BgL_obj1730z00_1032);
										BgL_auxz00_3991 = BGL_OBJECT_WIDENING(BgL_auxz00_3992);
									}
									BgL_arg2984z00_1038 =
										(((BgL_cenumz00_bglt) CREF(BgL_auxz00_3991))->BgL_btypez00);
								}
								{	/* Foreign/ctype.scm 35 */
									obj_t BgL_auxz00_3998;

									int BgL_auxz00_3996;

									BgL_auxz00_3998 = (obj_t) (BgL_arg2984z00_1038);
									BgL_auxz00_3996 = (int) (((long) 0));
									STRUCT_SET(BgL_aux1732z00_1036, BgL_auxz00_3996,
										BgL_auxz00_3998);
							}}
							{	/* Foreign/ctype.scm 35 */
								obj_t BgL_arg2986z00_1040;

								{
									obj_t BgL_auxz00_4001;

									{	/* Foreign/ctype.scm 35 */
										BgL_objectz00_bglt BgL_auxz00_4002;

										BgL_auxz00_4002 =
											(BgL_objectz00_bglt) (BgL_obj1730z00_1032);
										BgL_auxz00_4001 = BGL_OBJECT_WIDENING(BgL_auxz00_4002);
									}
									BgL_arg2986z00_1040 =
										(((BgL_cenumz00_bglt) CREF(BgL_auxz00_4001))->
										BgL_literalsz00);
								}
								{	/* Foreign/ctype.scm 35 */
									int BgL_auxz00_4006;

									BgL_auxz00_4006 = (int) (((long) 1));
									STRUCT_SET(BgL_aux1732z00_1036, BgL_auxz00_4006,
										BgL_arg2986z00_1040);
							}}
							{	/* Foreign/ctype.scm 35 */
								int BgL_auxz00_4009;

								BgL_auxz00_4009 = (int) (((long) 0));
								STRUCT_SET(BgL_res1731z00_1035, BgL_auxz00_4009,
									BgL_aux1732z00_1036);
							}
							{	/* Foreign/ctype.scm 35 */
								obj_t BgL_auxz00_4012;

								BgL_auxz00_4012 = STRUCT_KEY(BgL_res1731z00_1035);
								STRUCT_KEY_SET(BgL_aux1732z00_1036, BgL_auxz00_4012);
							}
							{	/* Foreign/ctype.scm 35 */
								obj_t BgL_kz00_2138;

								BgL_kz00_2138 = CNST_TABLE_REF(((long) 25));
								STRUCT_KEY_SET(BgL_res1731z00_1035, BgL_kz00_2138);
							}
							return BgL_res1731z00_1035;
						}
					}
				}
			}
		}
	}



/* struct+object->objec2263 */
	obj_t BGl_structzb2objectzd2ze3objec2263z83zzforeign_ctypez00(obj_t
		BgL_envz00_2439, obj_t BgL_oz00_2440, obj_t BgL_sz00_2441)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 41 */
			{
				BgL_copaquez00_bglt BgL_oz00_1020;

				obj_t BgL_sz00_1021;

				{	/* Foreign/ctype.scm 41 */
					BgL_copaquez00_bglt BgL_auxz00_4018;

					BgL_oz00_1020 = (BgL_copaquez00_bglt) (BgL_oz00_2440);
					BgL_sz00_1021 = BgL_sz00_2441;
					{

						{	/* Foreign/ctype.scm 41 */
							obj_t BgL_old1813z00_1024;

							obj_t BgL_aux1814z00_1025;

							{	/* Foreign/ctype.scm 41 */
								obj_t BgL_nextzd2method2262zd2_1030;

								BgL_nextzd2method2262zd2_1030 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1020),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_copaquez00zzforeign_ctypez00);
								if (PROCEDUREP(BgL_nextzd2method2262zd2_1030))
									{	/* Foreign/ctype.scm 41 */
										BgL_old1813z00_1024 =
											PROCEDURE_ENTRY(BgL_nextzd2method2262zd2_1030)
											(BgL_nextzd2method2262zd2_1030, (obj_t) (BgL_oz00_1020),
											BgL_sz00_1021, BEOA);
									}
								else
									{	/* Foreign/ctype.scm 41 */
										BgL_old1813z00_1024 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1020), BgL_sz00_1021));
									}
							}
							BgL_aux1814z00_1025 =
								STRUCT_REF(BgL_sz00_1021, (int) (((long) 0)));
							{	/* Foreign/ctype.scm 41 */
								BgL_copaquez00_bglt BgL_new1815z00_1026;

								BgL_new1815z00_1026 =
									((BgL_copaquez00_bglt) (BgL_old1813z00_1024));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new1815z00_1026),
									BGl_classzd2numzd2zz__objectz00
									(BGl_copaquez00zzforeign_ctypez00));
								{	/* Foreign/ctype.scm 41 */
									BgL_copaquez00_bglt BgL_arg2980z00_1028;

									{	/* Foreign/ctype.scm 41 */
										obj_t BgL_arg2981z00_1029;

										BgL_arg2981z00_1029 =
											STRUCT_REF(BgL_aux1814z00_1025, (int) (((long) 0)));
										{	/* Foreign/ctype.scm 41 */
											BgL_copaquez00_bglt BgL_res3096z00_2117;

											{	/* Foreign/ctype.scm 41 */
												BgL_typez00_bglt BgL_btype1784z00_2111;

												BgL_btype1784z00_2111 =
													(BgL_typez00_bglt) (BgL_arg2981z00_1029);
												{	/* Foreign/ctype.scm 41 */
													BgL_copaquez00_bglt BgL_new1785z00_2112;

													BgL_new1785z00_2112 =
														((BgL_copaquez00_bglt) BREF(GC_MALLOC(sizeof(struct
																	BgL_copaquez00_bgl))));
													{	/* Foreign/ctype.scm 41 */
														BgL_copaquez00_bglt BgL_res3095z00_2116;

														{	/* Foreign/ctype.scm 41 */
															BgL_copaquez00_bglt BgL_new1806z00_2113;

															BgL_new1806z00_2113 = BgL_new1785z00_2112;
															{	/* Foreign/ctype.scm 41 */
																BgL_typez00_bglt BgL_btype1805z00_2115;

																BgL_btype1805z00_2115 = BgL_btype1784z00_2111;
																((((BgL_copaquez00_bglt)
																			CREF(BgL_new1806z00_2113))->
																		BgL_btypez00) =
																	((BgL_typez00_bglt) BgL_btype1805z00_2115),
																	BUNSPEC);
																BgL_res3095z00_2116 = BgL_new1806z00_2113;
														}} BgL_res3095z00_2116;
													}
													BgL_res3096z00_2117 = BgL_new1785z00_2112;
											}}
											BgL_arg2980z00_1028 = BgL_res3096z00_2117;
									}}
									{	/* Foreign/ctype.scm 41 */
										obj_t BgL_auxz00_4042;

										BgL_objectz00_bglt BgL_auxz00_4040;

										BgL_auxz00_4042 = (obj_t) (BgL_arg2980z00_1028);
										BgL_auxz00_4040 =
											(BgL_objectz00_bglt) (BgL_new1815z00_1026);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_4040, BgL_auxz00_4042);
								}}
								BgL_auxz00_4018 = BgL_new1815z00_1026;
					}}}
					return (obj_t) (BgL_auxz00_4018);
				}
			}
		}
	}



/* object->struct-copaq2261 */
	obj_t BGl_objectzd2ze3structzd2copaq2261ze3zzforeign_ctypez00(obj_t
		BgL_envz00_2442, obj_t BgL_obj1810z00_2443)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 41 */
			{
				BgL_copaquez00_bglt BgL_obj1810z00_1010;

				BgL_obj1810z00_1010 = (BgL_copaquez00_bglt) (BgL_obj1810z00_2443);
				{

					{	/* Foreign/ctype.scm 41 */
						obj_t BgL_res1811z00_1013;

						{	/* Foreign/ctype.scm 41 */
							obj_t BgL_nextzd2method2260zd2_1018;

							BgL_nextzd2method2260zd2_1018 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj1810z00_1010),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_copaquez00zzforeign_ctypez00);
							if (PROCEDUREP(BgL_nextzd2method2260zd2_1018))
								{	/* Foreign/ctype.scm 41 */
									BgL_res1811z00_1013 =
										PROCEDURE_ENTRY(BgL_nextzd2method2260zd2_1018)
										(BgL_nextzd2method2260zd2_1018,
										(obj_t) (BgL_obj1810z00_1010), BEOA);
								}
							else
								{	/* Foreign/ctype.scm 41 */
									BgL_res1811z00_1013 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj1810z00_1010));
								}
						}
						{	/* Foreign/ctype.scm 41 */
							obj_t BgL_aux1812z00_1014;

							{	/* Foreign/ctype.scm 41 */
								obj_t BgL_keyz00_2088;

								BgL_keyz00_2088 = CNST_TABLE_REF(((long) 26));
								BgL_aux1812z00_1014 =
									make_struct(BgL_keyz00_2088, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Foreign/ctype.scm 41 */
								BgL_typez00_bglt BgL_arg2976z00_1016;

								{
									obj_t BgL_auxz00_4059;

									{	/* Foreign/ctype.scm 41 */
										BgL_objectz00_bglt BgL_auxz00_4060;

										BgL_auxz00_4060 =
											(BgL_objectz00_bglt) (BgL_obj1810z00_1010);
										BgL_auxz00_4059 = BGL_OBJECT_WIDENING(BgL_auxz00_4060);
									}
									BgL_arg2976z00_1016 =
										(((BgL_copaquez00_bglt) CREF(BgL_auxz00_4059))->
										BgL_btypez00);
								}
								{	/* Foreign/ctype.scm 41 */
									obj_t BgL_auxz00_4066;

									int BgL_auxz00_4064;

									BgL_auxz00_4066 = (obj_t) (BgL_arg2976z00_1016);
									BgL_auxz00_4064 = (int) (((long) 0));
									STRUCT_SET(BgL_aux1812z00_1014, BgL_auxz00_4064,
										BgL_auxz00_4066);
							}}
							{	/* Foreign/ctype.scm 41 */
								int BgL_auxz00_4069;

								BgL_auxz00_4069 = (int) (((long) 0));
								STRUCT_SET(BgL_res1811z00_1013, BgL_auxz00_4069,
									BgL_aux1812z00_1014);
							}
							{	/* Foreign/ctype.scm 41 */
								obj_t BgL_auxz00_4072;

								BgL_auxz00_4072 = STRUCT_KEY(BgL_res1811z00_1013);
								STRUCT_KEY_SET(BgL_aux1812z00_1014, BgL_auxz00_4072);
							}
							{	/* Foreign/ctype.scm 41 */
								obj_t BgL_kz00_2103;

								BgL_kz00_2103 = CNST_TABLE_REF(((long) 26));
								STRUCT_KEY_SET(BgL_res1811z00_1013, BgL_kz00_2103);
							}
							return BgL_res1811z00_1013;
						}
					}
				}
			}
		}
	}



/* struct+object->objec2259 */
	obj_t BGl_structzb2objectzd2ze3objec2259z83zzforeign_ctypez00(obj_t
		BgL_envz00_2444, obj_t BgL_oz00_2445, obj_t BgL_sz00_2446)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 45 */
			{
				BgL_cfunctionz00_bglt BgL_oz00_995;

				obj_t BgL_sz00_996;

				{	/* Foreign/ctype.scm 45 */
					BgL_cfunctionz00_bglt BgL_auxz00_4078;

					BgL_oz00_995 = (BgL_cfunctionz00_bglt) (BgL_oz00_2445);
					BgL_sz00_996 = BgL_sz00_2446;
					{

						{	/* Foreign/ctype.scm 45 */
							obj_t BgL_old1902z00_999;

							obj_t BgL_aux1903z00_1000;

							{	/* Foreign/ctype.scm 45 */
								obj_t BgL_nextzd2method2258zd2_1008;

								BgL_nextzd2method2258zd2_1008 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_995),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_cfunctionz00zzforeign_ctypez00);
								if (PROCEDUREP(BgL_nextzd2method2258zd2_1008))
									{	/* Foreign/ctype.scm 45 */
										BgL_old1902z00_999 =
											PROCEDURE_ENTRY(BgL_nextzd2method2258zd2_1008)
											(BgL_nextzd2method2258zd2_1008, (obj_t) (BgL_oz00_995),
											BgL_sz00_996, BEOA);
									}
								else
									{	/* Foreign/ctype.scm 45 */
										BgL_old1902z00_999 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_995), BgL_sz00_996));
									}
							}
							BgL_aux1903z00_1000 =
								STRUCT_REF(BgL_sz00_996, (int) (((long) 0)));
							{	/* Foreign/ctype.scm 45 */
								BgL_cfunctionz00_bglt BgL_new1904z00_1001;

								BgL_new1904z00_1001 =
									((BgL_cfunctionz00_bglt) (BgL_old1902z00_999));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new1904z00_1001),
									BGl_classzd2numzd2zz__objectz00
									(BGl_cfunctionz00zzforeign_ctypez00));
								{	/* Foreign/ctype.scm 45 */
									BgL_cfunctionz00_bglt BgL_arg2969z00_1003;

									{	/* Foreign/ctype.scm 45 */
										obj_t BgL_arg2970z00_1004;

										obj_t BgL_arg2971z00_1005;

										obj_t BgL_arg2972z00_1006;

										obj_t BgL_arg2973z00_1007;

										BgL_arg2970z00_1004 =
											STRUCT_REF(BgL_aux1903z00_1000, (int) (((long) 0)));
										BgL_arg2971z00_1005 =
											STRUCT_REF(BgL_aux1903z00_1000, (int) (((long) 1)));
										BgL_arg2972z00_1006 =
											STRUCT_REF(BgL_aux1903z00_1000, (int) (((long) 2)));
										BgL_arg2973z00_1007 =
											STRUCT_REF(BgL_aux1903z00_1000, (int) (((long) 3)));
										{	/* Foreign/ctype.scm 45 */
											BgL_cfunctionz00_bglt BgL_res3093z00_2086;

											{	/* Foreign/ctype.scm 45 */
												BgL_typez00_bglt BgL_btype1861z00_2071;

												long BgL_arity1862z00_2072;

												BgL_typez00_bglt BgL_typezd2res1863zd2_2073;

												BgL_btype1861z00_2071 =
													(BgL_typez00_bglt) (BgL_arg2970z00_1004);
												BgL_arity1862z00_2072 =
													(long) CINT(BgL_arg2971z00_1005);
												BgL_typezd2res1863zd2_2073 =
													(BgL_typez00_bglt) (BgL_arg2972z00_1006);
												{	/* Foreign/ctype.scm 45 */
													BgL_cfunctionz00_bglt BgL_new1865z00_2075;

													BgL_new1865z00_2075 =
														((BgL_cfunctionz00_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_cfunctionz00_bgl))));
													{	/* Foreign/ctype.scm 45 */
														BgL_cfunctionz00_bglt BgL_res3092z00_2085;

														{	/* Foreign/ctype.scm 45 */
															BgL_cfunctionz00_bglt BgL_new1892z00_2076;

															BgL_new1892z00_2076 = BgL_new1865z00_2075;
															{	/* Foreign/ctype.scm 45 */
																BgL_typez00_bglt BgL_btype1888z00_2081;

																long BgL_arity1889z00_2082;

																BgL_typez00_bglt BgL_typezd2res1890zd2_2083;

																obj_t BgL_typezd2args1891zd2_2084;

																BgL_btype1888z00_2081 = BgL_btype1861z00_2071;
																BgL_arity1889z00_2082 = BgL_arity1862z00_2072;
																BgL_typezd2res1890zd2_2083 =
																	BgL_typezd2res1863zd2_2073;
																BgL_typezd2args1891zd2_2084 =
																	BgL_arg2973z00_1007;
																((((BgL_cfunctionz00_bglt)
																			CREF(BgL_new1892z00_2076))->
																		BgL_btypez00) =
																	((BgL_typez00_bglt) BgL_btype1888z00_2081),
																	BUNSPEC);
																((((BgL_cfunctionz00_bglt)
																			CREF(BgL_new1892z00_2076))->
																		BgL_arityz00) =
																	((long) BgL_arity1889z00_2082), BUNSPEC);
																((((BgL_cfunctionz00_bglt)
																			CREF(BgL_new1892z00_2076))->
																		BgL_typezd2reszd2) =
																	((BgL_typez00_bglt)
																		BgL_typezd2res1890zd2_2083), BUNSPEC);
																((((BgL_cfunctionz00_bglt)
																			CREF(BgL_new1892z00_2076))->
																		BgL_typezd2argszd2) =
																	((obj_t) BgL_typezd2args1891zd2_2084),
																	BUNSPEC);
																BgL_res3092z00_2085 = BgL_new1892z00_2076;
														}} BgL_res3092z00_2085;
													}
													BgL_res3093z00_2086 = BgL_new1865z00_2075;
											}}
											BgL_arg2969z00_1003 = BgL_res3093z00_2086;
									}}
									{	/* Foreign/ctype.scm 45 */
										obj_t BgL_auxz00_4113;

										BgL_objectz00_bglt BgL_auxz00_4111;

										BgL_auxz00_4113 = (obj_t) (BgL_arg2969z00_1003);
										BgL_auxz00_4111 =
											(BgL_objectz00_bglt) (BgL_new1904z00_1001);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_4111, BgL_auxz00_4113);
								}}
								BgL_auxz00_4078 = BgL_new1904z00_1001;
					}}}
					return (obj_t) (BgL_auxz00_4078);
				}
			}
		}
	}



/* object->struct-cfunc2257 */
	obj_t BGl_objectzd2ze3structzd2cfunc2257ze3zzforeign_ctypez00(obj_t
		BgL_envz00_2447, obj_t BgL_obj1899z00_2448)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 45 */
			{
				BgL_cfunctionz00_bglt BgL_obj1899z00_979;

				BgL_obj1899z00_979 = (BgL_cfunctionz00_bglt) (BgL_obj1899z00_2448);
				{

					{	/* Foreign/ctype.scm 45 */
						obj_t BgL_res1900z00_982;

						{	/* Foreign/ctype.scm 45 */
							obj_t BgL_nextzd2method2256zd2_993;

							BgL_nextzd2method2256zd2_993 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj1899z00_979),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_cfunctionz00zzforeign_ctypez00);
							if (PROCEDUREP(BgL_nextzd2method2256zd2_993))
								{	/* Foreign/ctype.scm 45 */
									BgL_res1900z00_982 =
										PROCEDURE_ENTRY(BgL_nextzd2method2256zd2_993)
										(BgL_nextzd2method2256zd2_993, (obj_t) (BgL_obj1899z00_979),
										BEOA);
								}
							else
								{	/* Foreign/ctype.scm 45 */
									BgL_res1900z00_982 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj1899z00_979));
								}
						}
						{	/* Foreign/ctype.scm 45 */
							obj_t BgL_aux1901z00_983;

							{	/* Foreign/ctype.scm 45 */
								obj_t BgL_keyz00_2030;

								BgL_keyz00_2030 = CNST_TABLE_REF(((long) 27));
								BgL_aux1901z00_983 =
									make_struct(BgL_keyz00_2030, (int) (((long) 4)), BUNSPEC);
							}
							{	/* Foreign/ctype.scm 45 */
								BgL_typez00_bglt BgL_arg2959z00_985;

								{
									obj_t BgL_auxz00_4130;

									{	/* Foreign/ctype.scm 45 */
										BgL_objectz00_bglt BgL_auxz00_4131;

										BgL_auxz00_4131 = (BgL_objectz00_bglt) (BgL_obj1899z00_979);
										BgL_auxz00_4130 = BGL_OBJECT_WIDENING(BgL_auxz00_4131);
									}
									BgL_arg2959z00_985 =
										(((BgL_cfunctionz00_bglt) CREF(BgL_auxz00_4130))->
										BgL_btypez00);
								}
								{	/* Foreign/ctype.scm 45 */
									obj_t BgL_auxz00_4137;

									int BgL_auxz00_4135;

									BgL_auxz00_4137 = (obj_t) (BgL_arg2959z00_985);
									BgL_auxz00_4135 = (int) (((long) 0));
									STRUCT_SET(BgL_aux1901z00_983, BgL_auxz00_4135,
										BgL_auxz00_4137);
							}}
							{	/* Foreign/ctype.scm 45 */
								long BgL_arg2961z00_987;

								{
									obj_t BgL_auxz00_4140;

									{	/* Foreign/ctype.scm 45 */
										BgL_objectz00_bglt BgL_auxz00_4141;

										BgL_auxz00_4141 = (BgL_objectz00_bglt) (BgL_obj1899z00_979);
										BgL_auxz00_4140 = BGL_OBJECT_WIDENING(BgL_auxz00_4141);
									}
									BgL_arg2961z00_987 =
										(((BgL_cfunctionz00_bglt) CREF(BgL_auxz00_4140))->
										BgL_arityz00);
								}
								{	/* Foreign/ctype.scm 45 */
									obj_t BgL_auxz00_4147;

									int BgL_auxz00_4145;

									BgL_auxz00_4147 = BINT(BgL_arg2961z00_987);
									BgL_auxz00_4145 = (int) (((long) 1));
									STRUCT_SET(BgL_aux1901z00_983, BgL_auxz00_4145,
										BgL_auxz00_4147);
							}}
							{	/* Foreign/ctype.scm 45 */
								BgL_typez00_bglt BgL_arg2963z00_989;

								{
									obj_t BgL_auxz00_4150;

									{	/* Foreign/ctype.scm 45 */
										BgL_objectz00_bglt BgL_auxz00_4151;

										BgL_auxz00_4151 = (BgL_objectz00_bglt) (BgL_obj1899z00_979);
										BgL_auxz00_4150 = BGL_OBJECT_WIDENING(BgL_auxz00_4151);
									}
									BgL_arg2963z00_989 =
										(((BgL_cfunctionz00_bglt) CREF(BgL_auxz00_4150))->
										BgL_typezd2reszd2);
								}
								{	/* Foreign/ctype.scm 45 */
									obj_t BgL_auxz00_4157;

									int BgL_auxz00_4155;

									BgL_auxz00_4157 = (obj_t) (BgL_arg2963z00_989);
									BgL_auxz00_4155 = (int) (((long) 2));
									STRUCT_SET(BgL_aux1901z00_983, BgL_auxz00_4155,
										BgL_auxz00_4157);
							}}
							{	/* Foreign/ctype.scm 45 */
								obj_t BgL_arg2965z00_991;

								{
									obj_t BgL_auxz00_4160;

									{	/* Foreign/ctype.scm 45 */
										BgL_objectz00_bglt BgL_auxz00_4161;

										BgL_auxz00_4161 = (BgL_objectz00_bglt) (BgL_obj1899z00_979);
										BgL_auxz00_4160 = BGL_OBJECT_WIDENING(BgL_auxz00_4161);
									}
									BgL_arg2965z00_991 =
										(((BgL_cfunctionz00_bglt) CREF(BgL_auxz00_4160))->
										BgL_typezd2argszd2);
								}
								{	/* Foreign/ctype.scm 45 */
									int BgL_auxz00_4165;

									BgL_auxz00_4165 = (int) (((long) 3));
									STRUCT_SET(BgL_aux1901z00_983, BgL_auxz00_4165,
										BgL_arg2965z00_991);
							}}
							{	/* Foreign/ctype.scm 45 */
								int BgL_auxz00_4168;

								BgL_auxz00_4168 = (int) (((long) 0));
								STRUCT_SET(BgL_res1900z00_982, BgL_auxz00_4168,
									BgL_aux1901z00_983);
							}
							{	/* Foreign/ctype.scm 45 */
								obj_t BgL_auxz00_4171;

								BgL_auxz00_4171 = STRUCT_KEY(BgL_res1900z00_982);
								STRUCT_KEY_SET(BgL_aux1901z00_983, BgL_auxz00_4171);
							}
							{	/* Foreign/ctype.scm 45 */
								obj_t BgL_kz00_2057;

								BgL_kz00_2057 = CNST_TABLE_REF(((long) 27));
								STRUCT_KEY_SET(BgL_res1900z00_982, BgL_kz00_2057);
							}
							return BgL_res1900z00_982;
						}
					}
				}
			}
		}
	}



/* struct+object->objec2255 */
	obj_t BGl_structzb2objectzd2ze3objec2255z83zzforeign_ctypez00(obj_t
		BgL_envz00_2449, obj_t BgL_oz00_2450, obj_t BgL_sz00_2451)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 55 */
			{
				BgL_cptrz00_bglt BgL_oz00_965;

				obj_t BgL_sz00_966;

				{	/* Foreign/ctype.scm 55 */
					BgL_cptrz00_bglt BgL_auxz00_4177;

					BgL_oz00_965 = (BgL_cptrz00_bglt) (BgL_oz00_2450);
					BgL_sz00_966 = BgL_sz00_2451;
					{

						{	/* Foreign/ctype.scm 55 */
							obj_t BgL_old1990z00_969;

							obj_t BgL_aux1991z00_970;

							{	/* Foreign/ctype.scm 55 */
								obj_t BgL_nextzd2method2254zd2_977;

								BgL_nextzd2method2254zd2_977 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_965),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_cptrz00zzforeign_ctypez00);
								if (PROCEDUREP(BgL_nextzd2method2254zd2_977))
									{	/* Foreign/ctype.scm 55 */
										BgL_old1990z00_969 =
											PROCEDURE_ENTRY(BgL_nextzd2method2254zd2_977)
											(BgL_nextzd2method2254zd2_977, (obj_t) (BgL_oz00_965),
											BgL_sz00_966, BEOA);
									}
								else
									{	/* Foreign/ctype.scm 55 */
										BgL_old1990z00_969 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_965), BgL_sz00_966));
									}
							}
							BgL_aux1991z00_970 = STRUCT_REF(BgL_sz00_966, (int) (((long) 0)));
							{	/* Foreign/ctype.scm 55 */
								BgL_cptrz00_bglt BgL_new1992z00_971;

								BgL_new1992z00_971 = ((BgL_cptrz00_bglt) (BgL_old1990z00_969));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new1992z00_971),
									BGl_classzd2numzd2zz__objectz00
									(BGl_cptrz00zzforeign_ctypez00));
								{	/* Foreign/ctype.scm 55 */
									BgL_cptrz00_bglt BgL_arg2953z00_973;

									{	/* Foreign/ctype.scm 55 */
										obj_t BgL_arg2954z00_974;

										obj_t BgL_arg2955z00_975;

										obj_t BgL_arg2956z00_976;

										BgL_arg2954z00_974 =
											STRUCT_REF(BgL_aux1991z00_970, (int) (((long) 0)));
										BgL_arg2955z00_975 =
											STRUCT_REF(BgL_aux1991z00_970, (int) (((long) 1)));
										BgL_arg2956z00_976 =
											STRUCT_REF(BgL_aux1991z00_970, (int) (((long) 2)));
										{	/* Foreign/ctype.scm 55 */
											BgL_cptrz00_bglt BgL_res3090z00_2028;

											{	/* Foreign/ctype.scm 55 */
												BgL_typez00_bglt BgL_btype1953z00_2016;

												BgL_typez00_bglt BgL_pointzd2to1954zd2_2017;

												bool_t BgL_arrayzf31955zf3_2018;

												BgL_btype1953z00_2016 =
													(BgL_typez00_bglt) (BgL_arg2954z00_974);
												BgL_pointzd2to1954zd2_2017 =
													(BgL_typez00_bglt) (BgL_arg2955z00_975);
												BgL_arrayzf31955zf3_2018 = CBOOL(BgL_arg2956z00_976);
												{	/* Foreign/ctype.scm 55 */
													BgL_cptrz00_bglt BgL_new1956z00_2019;

													BgL_new1956z00_2019 =
														((BgL_cptrz00_bglt) BREF(GC_MALLOC(sizeof(struct
																	BgL_cptrz00_bgl))));
													{	/* Foreign/ctype.scm 55 */
														BgL_cptrz00_bglt BgL_res3089z00_2027;

														{	/* Foreign/ctype.scm 55 */
															BgL_cptrz00_bglt BgL_new1981z00_2020;

															BgL_new1981z00_2020 = BgL_new1956z00_2019;
															{	/* Foreign/ctype.scm 55 */
																BgL_typez00_bglt BgL_btype1978z00_2024;

																BgL_typez00_bglt BgL_pointzd2to1979zd2_2025;

																bool_t BgL_arrayzf31980zf3_2026;

																BgL_btype1978z00_2024 = BgL_btype1953z00_2016;
																BgL_pointzd2to1979zd2_2025 =
																	BgL_pointzd2to1954zd2_2017;
																BgL_arrayzf31980zf3_2026 =
																	BgL_arrayzf31955zf3_2018;
																((((BgL_cptrz00_bglt)
																			CREF(BgL_new1981z00_2020))->
																		BgL_btypez00) =
																	((BgL_typez00_bglt) BgL_btype1978z00_2024),
																	BUNSPEC);
																((((BgL_cptrz00_bglt)
																			CREF(BgL_new1981z00_2020))->
																		BgL_pointzd2tozd2) =
																	((BgL_typez00_bglt)
																		BgL_pointzd2to1979zd2_2025), BUNSPEC);
																((((BgL_cptrz00_bglt)
																			CREF(BgL_new1981z00_2020))->
																		BgL_arrayzf3zf3) =
																	((bool_t) BgL_arrayzf31980zf3_2026), BUNSPEC);
																BgL_res3089z00_2027 = BgL_new1981z00_2020;
														}} BgL_res3089z00_2027;
													}
													BgL_res3090z00_2028 = BgL_new1956z00_2019;
											}}
											BgL_arg2953z00_973 = BgL_res3090z00_2028;
									}}
									{	/* Foreign/ctype.scm 55 */
										obj_t BgL_auxz00_4209;

										BgL_objectz00_bglt BgL_auxz00_4207;

										BgL_auxz00_4209 = (obj_t) (BgL_arg2953z00_973);
										BgL_auxz00_4207 = (BgL_objectz00_bglt) (BgL_new1992z00_971);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_4207, BgL_auxz00_4209);
								}}
								BgL_auxz00_4177 = BgL_new1992z00_971;
					}}}
					return (obj_t) (BgL_auxz00_4177);
				}
			}
		}
	}



/* object->struct-cptr2253 */
	obj_t BGl_objectzd2ze3structzd2cptr2253ze3zzforeign_ctypez00(obj_t
		BgL_envz00_2452, obj_t BgL_obj1987z00_2453)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 55 */
			{
				BgL_cptrz00_bglt BgL_obj1987z00_951;

				BgL_obj1987z00_951 = (BgL_cptrz00_bglt) (BgL_obj1987z00_2453);
				{

					{	/* Foreign/ctype.scm 55 */
						obj_t BgL_res1988z00_954;

						{	/* Foreign/ctype.scm 55 */
							obj_t BgL_nextzd2method2252zd2_963;

							BgL_nextzd2method2252zd2_963 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj1987z00_951),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_cptrz00zzforeign_ctypez00);
							if (PROCEDUREP(BgL_nextzd2method2252zd2_963))
								{	/* Foreign/ctype.scm 55 */
									BgL_res1988z00_954 =
										PROCEDURE_ENTRY(BgL_nextzd2method2252zd2_963)
										(BgL_nextzd2method2252zd2_963, (obj_t) (BgL_obj1987z00_951),
										BEOA);
								}
							else
								{	/* Foreign/ctype.scm 55 */
									BgL_res1988z00_954 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj1987z00_951));
								}
						}
						{	/* Foreign/ctype.scm 55 */
							obj_t BgL_aux1989z00_955;

							{	/* Foreign/ctype.scm 55 */
								obj_t BgL_keyz00_1981;

								BgL_keyz00_1981 = CNST_TABLE_REF(((long) 28));
								BgL_aux1989z00_955 =
									make_struct(BgL_keyz00_1981, (int) (((long) 3)), BUNSPEC);
							}
							{	/* Foreign/ctype.scm 55 */
								BgL_typez00_bglt BgL_arg2945z00_957;

								{
									obj_t BgL_auxz00_4226;

									{	/* Foreign/ctype.scm 55 */
										BgL_objectz00_bglt BgL_auxz00_4227;

										BgL_auxz00_4227 = (BgL_objectz00_bglt) (BgL_obj1987z00_951);
										BgL_auxz00_4226 = BGL_OBJECT_WIDENING(BgL_auxz00_4227);
									}
									BgL_arg2945z00_957 =
										(((BgL_cptrz00_bglt) CREF(BgL_auxz00_4226))->BgL_btypez00);
								}
								{	/* Foreign/ctype.scm 55 */
									obj_t BgL_auxz00_4233;

									int BgL_auxz00_4231;

									BgL_auxz00_4233 = (obj_t) (BgL_arg2945z00_957);
									BgL_auxz00_4231 = (int) (((long) 0));
									STRUCT_SET(BgL_aux1989z00_955, BgL_auxz00_4231,
										BgL_auxz00_4233);
							}}
							{	/* Foreign/ctype.scm 55 */
								BgL_typez00_bglt BgL_arg2947z00_959;

								{
									obj_t BgL_auxz00_4236;

									{	/* Foreign/ctype.scm 55 */
										BgL_objectz00_bglt BgL_auxz00_4237;

										BgL_auxz00_4237 = (BgL_objectz00_bglt) (BgL_obj1987z00_951);
										BgL_auxz00_4236 = BGL_OBJECT_WIDENING(BgL_auxz00_4237);
									}
									BgL_arg2947z00_959 =
										(((BgL_cptrz00_bglt) CREF(BgL_auxz00_4236))->
										BgL_pointzd2tozd2);
								}
								{	/* Foreign/ctype.scm 55 */
									obj_t BgL_auxz00_4243;

									int BgL_auxz00_4241;

									BgL_auxz00_4243 = (obj_t) (BgL_arg2947z00_959);
									BgL_auxz00_4241 = (int) (((long) 1));
									STRUCT_SET(BgL_aux1989z00_955, BgL_auxz00_4241,
										BgL_auxz00_4243);
							}}
							{	/* Foreign/ctype.scm 55 */
								bool_t BgL_arg2949z00_961;

								{
									obj_t BgL_auxz00_4246;

									{	/* Foreign/ctype.scm 55 */
										BgL_objectz00_bglt BgL_auxz00_4247;

										BgL_auxz00_4247 = (BgL_objectz00_bglt) (BgL_obj1987z00_951);
										BgL_auxz00_4246 = BGL_OBJECT_WIDENING(BgL_auxz00_4247);
									}
									BgL_arg2949z00_961 =
										(((BgL_cptrz00_bglt) CREF(BgL_auxz00_4246))->
										BgL_arrayzf3zf3);
								}
								{	/* Foreign/ctype.scm 55 */
									obj_t BgL_auxz00_4253;

									int BgL_auxz00_4251;

									BgL_auxz00_4253 = BBOOL(BgL_arg2949z00_961);
									BgL_auxz00_4251 = (int) (((long) 2));
									STRUCT_SET(BgL_aux1989z00_955, BgL_auxz00_4251,
										BgL_auxz00_4253);
							}}
							{	/* Foreign/ctype.scm 55 */
								int BgL_auxz00_4256;

								BgL_auxz00_4256 = (int) (((long) 0));
								STRUCT_SET(BgL_res1988z00_954, BgL_auxz00_4256,
									BgL_aux1989z00_955);
							}
							{	/* Foreign/ctype.scm 55 */
								obj_t BgL_auxz00_4259;

								BgL_auxz00_4259 = STRUCT_KEY(BgL_res1988z00_954);
								STRUCT_KEY_SET(BgL_aux1989z00_955, BgL_auxz00_4259);
							}
							{	/* Foreign/ctype.scm 55 */
								obj_t BgL_kz00_2004;

								BgL_kz00_2004 = CNST_TABLE_REF(((long) 28));
								STRUCT_KEY_SET(BgL_res1988z00_954, BgL_kz00_2004);
							}
							return BgL_res1988z00_954;
						}
					}
				}
			}
		}
	}



/* struct+object->objec2251 */
	obj_t BGl_structzb2objectzd2ze3objec2251z83zzforeign_ctypez00(obj_t
		BgL_envz00_2454, obj_t BgL_oz00_2455, obj_t BgL_sz00_2456)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 63 */
			{
				BgL_cstructz00_bglt BgL_oz00_937;

				obj_t BgL_sz00_938;

				{	/* Foreign/ctype.scm 63 */
					BgL_cstructz00_bglt BgL_auxz00_4265;

					BgL_oz00_937 = (BgL_cstructz00_bglt) (BgL_oz00_2455);
					BgL_sz00_938 = BgL_sz00_2456;
					{

						{	/* Foreign/ctype.scm 63 */
							obj_t BgL_old2077z00_941;

							obj_t BgL_aux2078z00_942;

							{	/* Foreign/ctype.scm 63 */
								obj_t BgL_nextzd2method2250zd2_949;

								BgL_nextzd2method2250zd2_949 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_937),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_cstructz00zzforeign_ctypez00);
								if (PROCEDUREP(BgL_nextzd2method2250zd2_949))
									{	/* Foreign/ctype.scm 63 */
										BgL_old2077z00_941 =
											PROCEDURE_ENTRY(BgL_nextzd2method2250zd2_949)
											(BgL_nextzd2method2250zd2_949, (obj_t) (BgL_oz00_937),
											BgL_sz00_938, BEOA);
									}
								else
									{	/* Foreign/ctype.scm 63 */
										BgL_old2077z00_941 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_937), BgL_sz00_938));
									}
							}
							BgL_aux2078z00_942 = STRUCT_REF(BgL_sz00_938, (int) (((long) 0)));
							{	/* Foreign/ctype.scm 63 */
								BgL_cstructz00_bglt BgL_new2079z00_943;

								BgL_new2079z00_943 =
									((BgL_cstructz00_bglt) (BgL_old2077z00_941));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new2079z00_943),
									BGl_classzd2numzd2zz__objectz00
									(BGl_cstructz00zzforeign_ctypez00));
								{	/* Foreign/ctype.scm 63 */
									BgL_cstructz00_bglt BgL_arg2938z00_945;

									{	/* Foreign/ctype.scm 63 */
										obj_t BgL_arg2939z00_946;

										obj_t BgL_arg2940z00_947;

										obj_t BgL_arg2942z00_948;

										BgL_arg2939z00_946 =
											STRUCT_REF(BgL_aux2078z00_942, (int) (((long) 0)));
										BgL_arg2940z00_947 =
											STRUCT_REF(BgL_aux2078z00_942, (int) (((long) 1)));
										BgL_arg2942z00_948 =
											STRUCT_REF(BgL_aux2078z00_942, (int) (((long) 2)));
										{	/* Foreign/ctype.scm 63 */
											BgL_cstructz00_bglt BgL_res3087z00_1979;

											{	/* Foreign/ctype.scm 63 */
												bool_t BgL_structzf32040zf3_1967;

												BgL_structzf32040zf3_1967 = CBOOL(BgL_arg2939z00_946);
												{	/* Foreign/ctype.scm 63 */
													BgL_cstructz00_bglt BgL_new2043z00_1970;

													BgL_new2043z00_1970 =
														((BgL_cstructz00_bglt) BREF(GC_MALLOC(sizeof(struct
																	BgL_cstructz00_bgl))));
													{	/* Foreign/ctype.scm 63 */
														BgL_cstructz00_bglt BgL_res3086z00_1978;

														{	/* Foreign/ctype.scm 63 */
															BgL_cstructz00_bglt BgL_new2068z00_1971;

															BgL_new2068z00_1971 = BgL_new2043z00_1970;
															{	/* Foreign/ctype.scm 63 */
																bool_t BgL_structzf32065zf3_1975;

																obj_t BgL_fields2066z00_1976;

																obj_t BgL_cstructza22067za2_1977;

																BgL_structzf32065zf3_1975 =
																	BgL_structzf32040zf3_1967;
																BgL_fields2066z00_1976 = BgL_arg2940z00_947;
																BgL_cstructza22067za2_1977 = BgL_arg2942z00_948;
																((((BgL_cstructz00_bglt)
																			CREF(BgL_new2068z00_1971))->
																		BgL_structzf3zf3) =
																	((bool_t) BgL_structzf32065zf3_1975),
																	BUNSPEC);
																((((BgL_cstructz00_bglt)
																			CREF(BgL_new2068z00_1971))->
																		BgL_fieldsz00) =
																	((obj_t) BgL_fields2066z00_1976), BUNSPEC);
																((((BgL_cstructz00_bglt)
																			CREF(BgL_new2068z00_1971))->
																		BgL_cstructza2za2) =
																	((obj_t) BgL_cstructza22067za2_1977),
																	BUNSPEC);
																BgL_res3086z00_1978 = BgL_new2068z00_1971;
														}} BgL_res3086z00_1978;
													}
													BgL_res3087z00_1979 = BgL_new2043z00_1970;
											}}
											BgL_arg2938z00_945 = BgL_res3087z00_1979;
									}}
									{	/* Foreign/ctype.scm 63 */
										obj_t BgL_auxz00_4295;

										BgL_objectz00_bglt BgL_auxz00_4293;

										BgL_auxz00_4295 = (obj_t) (BgL_arg2938z00_945);
										BgL_auxz00_4293 = (BgL_objectz00_bglt) (BgL_new2079z00_943);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_4293, BgL_auxz00_4295);
								}}
								BgL_auxz00_4265 = BgL_new2079z00_943;
					}}}
					return (obj_t) (BgL_auxz00_4265);
				}
			}
		}
	}



/* object->struct-cstru2249 */
	obj_t BGl_objectzd2ze3structzd2cstru2249ze3zzforeign_ctypez00(obj_t
		BgL_envz00_2457, obj_t BgL_obj2074z00_2458)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 63 */
			{
				BgL_cstructz00_bglt BgL_obj2074z00_923;

				BgL_obj2074z00_923 = (BgL_cstructz00_bglt) (BgL_obj2074z00_2458);
				{

					{	/* Foreign/ctype.scm 63 */
						obj_t BgL_res2075z00_926;

						{	/* Foreign/ctype.scm 63 */
							obj_t BgL_nextzd2method2248zd2_935;

							BgL_nextzd2method2248zd2_935 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj2074z00_923),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_cstructz00zzforeign_ctypez00);
							if (PROCEDUREP(BgL_nextzd2method2248zd2_935))
								{	/* Foreign/ctype.scm 63 */
									BgL_res2075z00_926 =
										PROCEDURE_ENTRY(BgL_nextzd2method2248zd2_935)
										(BgL_nextzd2method2248zd2_935, (obj_t) (BgL_obj2074z00_923),
										BEOA);
								}
							else
								{	/* Foreign/ctype.scm 63 */
									BgL_res2075z00_926 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj2074z00_923));
								}
						}
						{	/* Foreign/ctype.scm 63 */
							obj_t BgL_aux2076z00_927;

							{	/* Foreign/ctype.scm 63 */
								obj_t BgL_keyz00_1932;

								BgL_keyz00_1932 = CNST_TABLE_REF(((long) 29));
								BgL_aux2076z00_927 =
									make_struct(BgL_keyz00_1932, (int) (((long) 3)), BUNSPEC);
							}
							{	/* Foreign/ctype.scm 63 */
								bool_t BgL_arg2930z00_929;

								{
									obj_t BgL_auxz00_4312;

									{	/* Foreign/ctype.scm 63 */
										BgL_objectz00_bglt BgL_auxz00_4313;

										BgL_auxz00_4313 = (BgL_objectz00_bglt) (BgL_obj2074z00_923);
										BgL_auxz00_4312 = BGL_OBJECT_WIDENING(BgL_auxz00_4313);
									}
									BgL_arg2930z00_929 =
										(((BgL_cstructz00_bglt) CREF(BgL_auxz00_4312))->
										BgL_structzf3zf3);
								}
								{	/* Foreign/ctype.scm 63 */
									obj_t BgL_auxz00_4319;

									int BgL_auxz00_4317;

									BgL_auxz00_4319 = BBOOL(BgL_arg2930z00_929);
									BgL_auxz00_4317 = (int) (((long) 0));
									STRUCT_SET(BgL_aux2076z00_927, BgL_auxz00_4317,
										BgL_auxz00_4319);
							}}
							{	/* Foreign/ctype.scm 63 */
								obj_t BgL_arg2932z00_931;

								{
									obj_t BgL_auxz00_4322;

									{	/* Foreign/ctype.scm 63 */
										BgL_objectz00_bglt BgL_auxz00_4323;

										BgL_auxz00_4323 = (BgL_objectz00_bglt) (BgL_obj2074z00_923);
										BgL_auxz00_4322 = BGL_OBJECT_WIDENING(BgL_auxz00_4323);
									}
									BgL_arg2932z00_931 =
										(((BgL_cstructz00_bglt) CREF(BgL_auxz00_4322))->
										BgL_fieldsz00);
								}
								{	/* Foreign/ctype.scm 63 */
									int BgL_auxz00_4327;

									BgL_auxz00_4327 = (int) (((long) 1));
									STRUCT_SET(BgL_aux2076z00_927, BgL_auxz00_4327,
										BgL_arg2932z00_931);
							}}
							{	/* Foreign/ctype.scm 63 */
								obj_t BgL_arg2934z00_933;

								{
									obj_t BgL_auxz00_4330;

									{	/* Foreign/ctype.scm 63 */
										BgL_objectz00_bglt BgL_auxz00_4331;

										BgL_auxz00_4331 = (BgL_objectz00_bglt) (BgL_obj2074z00_923);
										BgL_auxz00_4330 = BGL_OBJECT_WIDENING(BgL_auxz00_4331);
									}
									BgL_arg2934z00_933 =
										(((BgL_cstructz00_bglt) CREF(BgL_auxz00_4330))->
										BgL_cstructza2za2);
								}
								{	/* Foreign/ctype.scm 63 */
									int BgL_auxz00_4335;

									BgL_auxz00_4335 = (int) (((long) 2));
									STRUCT_SET(BgL_aux2076z00_927, BgL_auxz00_4335,
										BgL_arg2934z00_933);
							}}
							{	/* Foreign/ctype.scm 63 */
								int BgL_auxz00_4338;

								BgL_auxz00_4338 = (int) (((long) 0));
								STRUCT_SET(BgL_res2075z00_926, BgL_auxz00_4338,
									BgL_aux2076z00_927);
							}
							{	/* Foreign/ctype.scm 63 */
								obj_t BgL_auxz00_4341;

								BgL_auxz00_4341 = STRUCT_KEY(BgL_res2075z00_926);
								STRUCT_KEY_SET(BgL_aux2076z00_927, BgL_auxz00_4341);
							}
							{	/* Foreign/ctype.scm 63 */
								obj_t BgL_kz00_1955;

								BgL_kz00_1955 = CNST_TABLE_REF(((long) 29));
								STRUCT_KEY_SET(BgL_res2075z00_926, BgL_kz00_1955);
							}
							return BgL_res2075z00_926;
						}
					}
				}
			}
		}
	}



/* struct+object->objec2247 */
	obj_t BGl_structzb2objectzd2ze3objec2247z83zzforeign_ctypez00(obj_t
		BgL_envz00_2459, obj_t BgL_oz00_2460, obj_t BgL_sz00_2461)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 71 */
			{
				BgL_cstructza2za2_bglt BgL_oz00_910;

				obj_t BgL_sz00_911;

				{	/* Foreign/ctype.scm 71 */
					BgL_cstructza2za2_bglt BgL_auxz00_4347;

					BgL_oz00_910 = (BgL_cstructza2za2_bglt) (BgL_oz00_2460);
					BgL_sz00_911 = BgL_sz00_2461;
					{

						{	/* Foreign/ctype.scm 71 */
							obj_t BgL_old2162z00_914;

							obj_t BgL_aux2163z00_915;

							{	/* Foreign/ctype.scm 71 */
								obj_t BgL_nextzd2method2246zd2_921;

								BgL_nextzd2method2246zd2_921 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_910),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_cstructza2za2zzforeign_ctypez00);
								if (PROCEDUREP(BgL_nextzd2method2246zd2_921))
									{	/* Foreign/ctype.scm 71 */
										BgL_old2162z00_914 =
											PROCEDURE_ENTRY(BgL_nextzd2method2246zd2_921)
											(BgL_nextzd2method2246zd2_921, (obj_t) (BgL_oz00_910),
											BgL_sz00_911, BEOA);
									}
								else
									{	/* Foreign/ctype.scm 71 */
										BgL_old2162z00_914 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_910), BgL_sz00_911));
									}
							}
							BgL_aux2163z00_915 = STRUCT_REF(BgL_sz00_911, (int) (((long) 0)));
							{	/* Foreign/ctype.scm 71 */
								BgL_cstructza2za2_bglt BgL_new2164z00_916;

								BgL_new2164z00_916 =
									((BgL_cstructza2za2_bglt) (BgL_old2162z00_914));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new2164z00_916),
									BGl_classzd2numzd2zz__objectz00
									(BGl_cstructza2za2zzforeign_ctypez00));
								{	/* Foreign/ctype.scm 71 */
									BgL_cstructza2za2_bglt BgL_arg2925z00_918;

									{	/* Foreign/ctype.scm 71 */
										obj_t BgL_arg2926z00_919;

										obj_t BgL_arg2927z00_920;

										BgL_arg2926z00_919 =
											STRUCT_REF(BgL_aux2163z00_915, (int) (((long) 0)));
										BgL_arg2927z00_920 =
											STRUCT_REF(BgL_aux2163z00_915, (int) (((long) 1)));
										{	/* Foreign/ctype.scm 71 */
											BgL_cstructza2za2_bglt BgL_res3084z00_1930;

											{	/* Foreign/ctype.scm 71 */
												BgL_typez00_bglt BgL_btype2129z00_1921;

												BgL_cstructz00_bglt BgL_cstruct2130z00_1922;

												BgL_btype2129z00_1921 =
													(BgL_typez00_bglt) (BgL_arg2926z00_919);
												BgL_cstruct2130z00_1922 =
													(BgL_cstructz00_bglt) (BgL_arg2927z00_920);
												{	/* Foreign/ctype.scm 71 */
													BgL_cstructza2za2_bglt BgL_new2131z00_1923;

													BgL_new2131z00_1923 =
														((BgL_cstructza2za2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_cstructza2za2_bgl))));
													{	/* Foreign/ctype.scm 71 */
														BgL_cstructza2za2_bglt BgL_res3083z00_1929;

														{	/* Foreign/ctype.scm 71 */
															BgL_cstructza2za2_bglt BgL_new2154z00_1924;

															BgL_new2154z00_1924 = BgL_new2131z00_1923;
															{	/* Foreign/ctype.scm 71 */
																BgL_typez00_bglt BgL_btype2152z00_1927;

																BgL_cstructz00_bglt BgL_cstruct2153z00_1928;

																BgL_btype2152z00_1927 = BgL_btype2129z00_1921;
																BgL_cstruct2153z00_1928 =
																	BgL_cstruct2130z00_1922;
																((((BgL_cstructza2za2_bglt)
																			CREF(BgL_new2154z00_1924))->
																		BgL_btypez00) =
																	((BgL_typez00_bglt) BgL_btype2152z00_1927),
																	BUNSPEC);
																((((BgL_cstructza2za2_bglt)
																			CREF(BgL_new2154z00_1924))->
																		BgL_cstructz00) =
																	((BgL_cstructz00_bglt)
																		BgL_cstruct2153z00_1928), BUNSPEC);
																BgL_res3083z00_1929 = BgL_new2154z00_1924;
														}} BgL_res3083z00_1929;
													}
													BgL_res3084z00_1930 = BgL_new2131z00_1923;
											}}
											BgL_arg2925z00_918 = BgL_res3084z00_1930;
									}}
									{	/* Foreign/ctype.scm 71 */
										obj_t BgL_auxz00_4375;

										BgL_objectz00_bglt BgL_auxz00_4373;

										BgL_auxz00_4375 = (obj_t) (BgL_arg2925z00_918);
										BgL_auxz00_4373 = (BgL_objectz00_bglt) (BgL_new2164z00_916);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_4373, BgL_auxz00_4375);
								}}
								BgL_auxz00_4347 = BgL_new2164z00_916;
					}}}
					return (obj_t) (BgL_auxz00_4347);
				}
			}
		}
	}



/* object->struct-cstru2245 */
	obj_t BGl_objectzd2ze3structzd2cstru2245ze3zzforeign_ctypez00(obj_t
		BgL_envz00_2462, obj_t BgL_obj2159z00_2463)
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 71 */
			{
				BgL_cstructza2za2_bglt BgL_obj2159z00_898;

				BgL_obj2159z00_898 = (BgL_cstructza2za2_bglt) (BgL_obj2159z00_2463);
				{

					{	/* Foreign/ctype.scm 71 */
						obj_t BgL_res2160z00_901;

						{	/* Foreign/ctype.scm 71 */
							obj_t BgL_nextzd2method2244zd2_908;

							BgL_nextzd2method2244zd2_908 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj2159z00_898),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_cstructza2za2zzforeign_ctypez00);
							if (PROCEDUREP(BgL_nextzd2method2244zd2_908))
								{	/* Foreign/ctype.scm 71 */
									BgL_res2160z00_901 =
										PROCEDURE_ENTRY(BgL_nextzd2method2244zd2_908)
										(BgL_nextzd2method2244zd2_908, (obj_t) (BgL_obj2159z00_898),
										BEOA);
								}
							else
								{	/* Foreign/ctype.scm 71 */
									BgL_res2160z00_901 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj2159z00_898));
								}
						}
						{	/* Foreign/ctype.scm 71 */
							obj_t BgL_aux2161z00_902;

							{	/* Foreign/ctype.scm 71 */
								obj_t BgL_keyz00_1892;

								BgL_keyz00_1892 = CNST_TABLE_REF(((long) 30));
								BgL_aux2161z00_902 =
									make_struct(BgL_keyz00_1892, (int) (((long) 2)), BUNSPEC);
							}
							{	/* Foreign/ctype.scm 71 */
								BgL_typez00_bglt BgL_arg2919z00_904;

								{
									obj_t BgL_auxz00_4392;

									{	/* Foreign/ctype.scm 71 */
										BgL_objectz00_bglt BgL_auxz00_4393;

										BgL_auxz00_4393 = (BgL_objectz00_bglt) (BgL_obj2159z00_898);
										BgL_auxz00_4392 = BGL_OBJECT_WIDENING(BgL_auxz00_4393);
									}
									BgL_arg2919z00_904 =
										(((BgL_cstructza2za2_bglt) CREF(BgL_auxz00_4392))->
										BgL_btypez00);
								}
								{	/* Foreign/ctype.scm 71 */
									obj_t BgL_auxz00_4399;

									int BgL_auxz00_4397;

									BgL_auxz00_4399 = (obj_t) (BgL_arg2919z00_904);
									BgL_auxz00_4397 = (int) (((long) 0));
									STRUCT_SET(BgL_aux2161z00_902, BgL_auxz00_4397,
										BgL_auxz00_4399);
							}}
							{	/* Foreign/ctype.scm 71 */
								BgL_cstructz00_bglt BgL_arg2921z00_906;

								{
									obj_t BgL_auxz00_4402;

									{	/* Foreign/ctype.scm 71 */
										BgL_objectz00_bglt BgL_auxz00_4403;

										BgL_auxz00_4403 = (BgL_objectz00_bglt) (BgL_obj2159z00_898);
										BgL_auxz00_4402 = BGL_OBJECT_WIDENING(BgL_auxz00_4403);
									}
									BgL_arg2921z00_906 =
										(((BgL_cstructza2za2_bglt) CREF(BgL_auxz00_4402))->
										BgL_cstructz00);
								}
								{	/* Foreign/ctype.scm 71 */
									obj_t BgL_auxz00_4409;

									int BgL_auxz00_4407;

									BgL_auxz00_4409 = (obj_t) (BgL_arg2921z00_906);
									BgL_auxz00_4407 = (int) (((long) 1));
									STRUCT_SET(BgL_aux2161z00_902, BgL_auxz00_4407,
										BgL_auxz00_4409);
							}}
							{	/* Foreign/ctype.scm 71 */
								int BgL_auxz00_4412;

								BgL_auxz00_4412 = (int) (((long) 0));
								STRUCT_SET(BgL_res2160z00_901, BgL_auxz00_4412,
									BgL_aux2161z00_902);
							}
							{	/* Foreign/ctype.scm 71 */
								obj_t BgL_auxz00_4415;

								BgL_auxz00_4415 = STRUCT_KEY(BgL_res2160z00_901);
								STRUCT_KEY_SET(BgL_aux2161z00_902, BgL_auxz00_4415);
							}
							{	/* Foreign/ctype.scm 71 */
								obj_t BgL_kz00_1911;

								BgL_kz00_1911 = CNST_TABLE_REF(((long) 30));
								STRUCT_KEY_SET(BgL_res2160z00_901, BgL_kz00_1911);
							}
							return BgL_res2160z00_901;
						}
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzforeign_ctypez00()
	{
		AN_OBJECT;
		{	/* Foreign/ctype.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3127z00zzforeign_ctypez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3127z00zzforeign_ctypez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string3127z00zzforeign_ctypez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3127z00zzforeign_ctypez00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string3127z00zzforeign_ctypez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3127z00zzforeign_ctypez00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string3127z00zzforeign_ctypez00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string3127z00zzforeign_ctypez00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3127z00zzforeign_ctypez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3127z00zzforeign_ctypez00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string3127z00zzforeign_ctypez00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3127z00zzforeign_ctypez00));
		}
	}

#ifdef __cplusplus
}
#endif
