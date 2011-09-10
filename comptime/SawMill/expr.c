/*===========================================================================*/
/*   (SawMill/expr.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/expr.scm)*/
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

	typedef struct BgL_feffectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_readz00;
		obj_t BgL_writez00;
	}                 *BgL_feffectz00_bglt;

	typedef struct BgL_backendz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_languagez00;
		obj_t BgL_srfi0z00;
		obj_t BgL_namez00;
		obj_t BgL_externzd2variableszd2;
		obj_t BgL_externzd2functionszd2;
		obj_t BgL_externzd2typeszd2;
		obj_t BgL_variablesz00;
		obj_t BgL_functionsz00;
		obj_t BgL_typesz00;
		bool_t BgL_typedz00;
		obj_t BgL_heapzd2suffixzd2;
		obj_t BgL_heapzd2compatiblezd2;
		bool_t BgL_callccz00;
		bool_t BgL_qualifiedzd2typeszd2;
		bool_t BgL_effectzb2zb2;
		bool_t BgL_removezd2emptyzd2letz00;
		bool_t BgL_foreignzd2closurezd2;
		bool_t BgL_typedzd2eqzd2;
		bool_t BgL_tracezd2supportzd2;
		obj_t BgL_foreignzd2clausezd2supportz00;
		obj_t BgL_debugzd2supportzd2;
		bool_t BgL_pragmazd2supportzd2;
		bool_t BgL_tvectorzd2descrzd2supportz00;
		bool_t BgL_requirezd2tailczd2;
		obj_t BgL_registersz00;
		obj_t BgL_pregistersz00;
		bool_t BgL_boundzd2checkzd2;
		bool_t BgL_typezd2checkzd2;
	}                 *BgL_backendz00_bglt;

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

	typedef struct BgL_rtl_callz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                  *BgL_rtl_callz00_bglt;

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

	typedef struct BgL_iregz00_bgl
	{
		obj_t BgL_indexz00;
		obj_t BgL_statusz00;
	}              *BgL_iregz00_bglt;

	typedef struct BgL_pregz00_bgl
	{
		obj_t BgL_indexz00;
		obj_t BgL_statusz00;
	}              *BgL_pregz00_bglt;

	typedef struct BgL_inlinedz00_bgl
	{
		char dummy;
	}                 *BgL_inlinedz00_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_acceptzd2foldingzf3z21zzsaw_exprz00(BgL_backendz00_bglt, obj_t, obj_t);
	static BgL_feffectz00_bglt BGl_za2vrefza2z00zzsaw_exprz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_rtl_storegz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	static obj_t BGl__z52allocatezd2pregz80zzsaw_exprz00(obj_t);
	static obj_t BGl_effectszd2rtl_funcall4284zd2zzsaw_exprz00(obj_t, obj_t);
	extern obj_t BGl_rtl_boxrefz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_protectz00zzsaw_defsz00;
	static BgL_feffectz00_bglt BGl_za2storegza2z00zzsaw_exprz00;
	extern BgL_rtl_insz00_bglt BGl_makezd2rtl_inszd2zzsaw_defsz00(obj_t, obj_t,
		obj_t, BgL_rtl_funz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	static obj_t BGl__effectsz00zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl__acceptzd2foldingzf3zd2defa4259zf3zzsaw_exprz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__effectszd2default4261zd2zzsaw_exprz00(obj_t, obj_t);
	extern obj_t BGl_rtl_boxsetz00zzsaw_defsz00;
	extern obj_t BGl_rtl_funz00zzsaw_defsz00;
	static BgL_feffectz00_bglt BGl_za2fullza2z00zzsaw_exprz00;
	static obj_t BGl_cnstzd2initzd2zzsaw_exprz00();
	static BgL_feffectz00_bglt BGl_za2loadgza2z00zzsaw_exprz00;
	static bool_t BGl_intersectionzf3zf3zzsaw_exprz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static bool_t BGl_matcheffectz00zzsaw_exprz00(obj_t, obj_t);
	static BgL_feffectz00_bglt BGl_za2psetza2z00zzsaw_exprz00;
	static obj_t BGl_zc3anonymousza34462ze3z83zzsaw_exprz00(obj_t, obj_t);
	extern obj_t BGl_rtl_insz00zzsaw_defsz00;
	static long BGl_za2countza2z00zzsaw_exprz00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzsaw_exprz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_prezd2analysezd2zzsaw_exprz00(BgL_backendz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzsaw_exprz00();
	static bool_t BGl_markzd2localszd2zzsaw_exprz00(obj_t, obj_t);
	extern obj_t BGl_rtl_funcallz00zzsaw_defsz00;
	static obj_t BGl__prezd2buildzd2treez00zzsaw_exprz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4300z83zzsaw_exprz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4305z83zzsaw_exprz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__rtl_inszf3zf3zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4296z83zzsaw_exprz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_rtl_getfieldz00zzsaw_defsz00;
	extern BgL_rtl_nopz00_bglt BGl_makezd2rtl_nopzd2zzsaw_defsz00(obj_t);
	static obj_t BGl_effectszd2rtl_vref4268zd2zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_regzd2ze3iregzf2writezc3zzsaw_exprz00(obj_t, obj_t);
	static bool_t BGl_prezd2markzd2localsz00zzsaw_exprz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_buildzd2treezd2zzsaw_exprz00(BgL_backendz00_bglt,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	static BgL_inlinedz00_bglt BGl_wideningzd2inlinedzd2zzsaw_exprz00();
	static obj_t BGl_iregz00zzsaw_exprz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_anyz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static BgL_feffectz00_bglt BGl_za2setfza2z00zzsaw_exprz00;
	static BgL_feffectz00_bglt BGl_za2boxrefza2z00zzsaw_exprz00;
	extern obj_t BGl_rtl_movz00zzsaw_defsz00;
	static obj_t BGl_usefullz00zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_regzd2ze3iregz31zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_effectszd2rtl_boxref4272zd2zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_regzd2ze3pregzf2writezc3zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_effectszd2rtl_protect4289zd2zzsaw_exprz00(obj_t, obj_t);
	static BgL_feffectz00_bglt BGl_za2vsetza2z00zzsaw_exprz00;
	BGL_IMPORT obj_t BGl_filterz12z12zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_exprz00();
	extern obj_t BGl_rtl_callz00zzsaw_defsz00;
	extern obj_t BGl_rtl_setfieldz00zzsaw_defsz00;
	static BgL_inlinedz00_bglt BGl_inlinedzd2nilzd2zzsaw_exprz00();
	static BgL_feffectz00_bglt BGl_za2noeffectza2z00zzsaw_exprz00;
	static obj_t BGl_inlinedz00zzsaw_exprz00 = BUNSPEC;
	static BgL_feffectz00_bglt
		BGl_manuzd2effectzd2zzsaw_exprz00(BgL_globalz00_bglt);
	static obj_t BGl__iregzf3zf3zzsaw_exprz00(obj_t, obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_rtl_regz00zzsaw_defsz00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_exprz00 = BUNSPEC;
	static obj_t BGl_z52thezd2iregzd2nilz52zzsaw_exprz00 = BUNSPEC;
	extern BgL_rtl_funz00_bglt BGl_rtl_funzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_effectszd2rtl_getfield4276zd2zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_exprz00();
	static obj_t BGl__z52allocatezd2iregz80zzsaw_exprz00(obj_t);
	static obj_t BGl_xxz00zzsaw_exprz00(obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2inlin4294ze3zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl__acceptzd2foldingzf3z21zzsaw_exprz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z52thezd2pregzd2nilz52zzsaw_exprz00 = BUNSPEC;
	extern obj_t BGl_rtl_applyz00zzsaw_defsz00;
	extern obj_t BGl_funz00zzast_varz00;
	static obj_t BGl_z52thezd2inlinedzd2nilz52zzsaw_exprz00 = BUNSPEC;
	static obj_t BGl_effectszd2rtl_pragma4286zd2zzsaw_exprz00(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	static obj_t BGl_effectszd2rtl_vset4270zd2zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl__inlinedzd2nilzd2zzsaw_exprz00(obj_t);
	static obj_t BGl__buildzd2treezd2zzsaw_exprz00(obj_t, obj_t, obj_t, obj_t);
	static BgL_iregz00_bglt BGl_iregzd2nilzd2zzsaw_exprz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_exprz00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl_effectszd2rtl_setfield4278zd2zzsaw_exprz00(obj_t, obj_t);
	static BgL_pregz00_bglt BGl_pregzd2nilzd2zzsaw_exprz00();
	static obj_t BGl__z52allocatezd2inlinedz80zzsaw_exprz00(obj_t);
	static obj_t BGl_effectszd2rtl_call4292zd2zzsaw_exprz00(obj_t, obj_t);
	extern obj_t BGl_rtl_pragmaz00zzsaw_defsz00;
	static obj_t BGl_objectzd2ze3structzd2ireg4302ze3zzsaw_exprz00(obj_t, obj_t);
	extern BgL_feffectz00_bglt BGl_makezd2feffectzd2zzast_varz00(obj_t, obj_t);
	static obj_t BGl_effectszd2rtl_boxset4274zd2zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_effectszd2rtl_loadg4264zd2zzsaw_exprz00(obj_t, obj_t);
	extern obj_t BGl_rtl_lightfuncallz00zzsaw_defsz00;
	extern obj_t BGl_backendz00zzbackend_backendz00;
	static obj_t BGl_objectzd2ze3structzd2preg4298ze3zzsaw_exprz00(obj_t, obj_t);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	static BgL_feffectz00_bglt BGl_za2prefza2z00zzsaw_exprz00;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static BgL_feffectz00_bglt BGl_za2boxsetza2z00zzsaw_exprz00;
	static obj_t BGl__iregzd2nilzd2zzsaw_exprz00(obj_t);
	static obj_t BGl__inlinedzf3zf3zzsaw_exprz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_loadgz00zzsaw_defsz00;
	static obj_t BGl__pregzd2nilzd2zzsaw_exprz00(obj_t);
	static obj_t BGl_pregz00zzsaw_exprz00 = BUNSPEC;
	static obj_t BGl_effectsz00zzsaw_exprz00(BgL_rtl_funz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2buildzd2treez00zzsaw_exprz00(BgL_backendz00_bglt, obj_t, obj_t);
	extern obj_t BGl_rtl_vrefz00zzsaw_defsz00;
	extern obj_t BGl_feffectz00zzast_varz00;
	static obj_t BGl_analysez00zzsaw_exprz00(BgL_backendz00_bglt, obj_t, obj_t);
	static obj_t BGl_regzd2ze3pregz31zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_effectszd2rtl_lightfun4282zd2zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_exprz00();
	extern obj_t BGl_rtl_vsetz00zzsaw_defsz00;
	static BgL_feffectz00_bglt BGl_za2getfza2z00zzsaw_exprz00;
	static obj_t BGl__pregzf3zf3zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_effectszd2rtl_apply4280zd2zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_exprz00();
	static obj_t BGl_effectszd2rtl_storeg4266zd2zzsaw_exprz00(obj_t, obj_t);
	static obj_t __cnst[24];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_inlinedzf3zd2envz21zzsaw_exprz00,
		BgL_bgl__inlinedza7f3za7f3za7za74729z00, BGl__inlinedzf3zf3zzsaw_exprz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_effectszd2envzd2zzsaw_exprz00,
		BgL_bgl__effectsza700za7za7saw4730za7, BGl__effectsz00zzsaw_exprz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4700z00zzsaw_exprz00,
		BgL_bgl_effectsza7d2rtl_lo4731za7,
		BGl_effectszd2rtl_loadg4264zd2zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4701z00zzsaw_exprz00,
		BgL_bgl_effectsza7d2rtl_st4732za7,
		BGl_effectszd2rtl_storeg4266zd2zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4702z00zzsaw_exprz00,
		BgL_bgl_effectsza7d2rtl_vr4733za7,
		BGl_effectszd2rtl_vref4268zd2zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4703z00zzsaw_exprz00,
		BgL_bgl_effectsza7d2rtl_vs4734za7,
		BGl_effectszd2rtl_vset4270zd2zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4704z00zzsaw_exprz00,
		BgL_bgl_effectsza7d2rtl_bo4735za7,
		BGl_effectszd2rtl_boxref4272zd2zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4705z00zzsaw_exprz00,
		BgL_bgl_effectsza7d2rtl_bo4736za7,
		BGl_effectszd2rtl_boxset4274zd2zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4706z00zzsaw_exprz00,
		BgL_bgl_effectsza7d2rtl_ge4737za7,
		BGl_effectszd2rtl_getfield4276zd2zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4707z00zzsaw_exprz00,
		BgL_bgl_effectsza7d2rtl_se4738za7,
		BGl_effectszd2rtl_setfield4278zd2zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4697z00zzsaw_exprz00,
		BgL_bgl_usefullza700za7za7saw_4739za7, BGl_usefullz00zzsaw_exprz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4708z00zzsaw_exprz00,
		BgL_bgl_effectsza7d2rtl_ap4740za7,
		BGl_effectszd2rtl_apply4280zd2zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4710z00zzsaw_exprz00,
		BgL_bgl_effectsza7d2rtl_fu4741za7,
		BGl_effectszd2rtl_funcall4284zd2zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4709z00zzsaw_exprz00,
		BgL_bgl_effectsza7d2rtl_li4742za7,
		BGl_effectszd2rtl_lightfun4282zd2zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4711z00zzsaw_exprz00,
		BgL_bgl_effectsza7d2rtl_pr4743za7,
		BGl_effectszd2rtl_pragma4286zd2zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4712z00zzsaw_exprz00,
		BgL_bgl_effectsza7d2rtl_pr4744za7,
		BGl_effectszd2rtl_protect4289zd2zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4713z00zzsaw_exprz00,
		BgL_bgl_effectsza7d2rtl_ca4745za7,
		BGl_effectszd2rtl_call4292zd2zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4714z00zzsaw_exprz00,
		BgL_bgl_objectza7d2za7e3stru4746z00,
		BGl_objectzd2ze3structzd2inlin4294ze3zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4716z00zzsaw_exprz00,
		BgL_bgl_structza7b2objectza74747z00,
		BGl_structzb2objectzd2ze3objec4296z83zzsaw_exprz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4718z00zzsaw_exprz00,
		BgL_bgl_objectza7d2za7e3stru4748z00,
		BGl_objectzd2ze3structzd2preg4298ze3zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4720z00zzsaw_exprz00,
		BgL_bgl_objectza7d2za7e3stru4749z00,
		BGl_objectzd2ze3structzd2ireg4302ze3zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4719z00zzsaw_exprz00,
		BgL_bgl_structza7b2objectza74750z00,
		BGl_structzb2objectzd2ze3objec4300z83zzsaw_exprz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4721z00zzsaw_exprz00,
		BgL_bgl_structza7b2objectza74751z00,
		BGl_structzb2objectzd2ze3objec4305z83zzsaw_exprz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_z52allocatezd2iregzd2envz52zzsaw_exprz00,
		BgL_bgl__za752allocateza7d2i4752z00,
		BGl__z52allocatezd2iregz80zzsaw_exprz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string4698z00zzsaw_exprz00,
		BgL_bgl_string4698za700za7za7s4753za7, "accept-folding?", 15);
	      DEFINE_STRING(BGl_string4699z00zzsaw_exprz00,
		BgL_bgl_string4699za700za7za7s4754za7, "effects", 7);
	      DEFINE_STRING(BGl_string4715z00zzsaw_exprz00,
		BgL_bgl_string4715za700za7za7s4755za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string4717z00zzsaw_exprz00,
		BgL_bgl_string4717za700za7za7s4756za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string4722z00zzsaw_exprz00,
		BgL_bgl_string4722za700za7za7s4757za7, "saw_expr", 8);
	      DEFINE_STRING(BGl_string4723z00zzsaw_exprz00,
		BgL_bgl_string4723za700za7za7s4758za7,
		"inlined preg ireg (print (global-id var) \" has no effect\") ko ok written readen reset c-write-char (output-port) c-current-output-port $tvector-descr-set! procedure-set! procedure-ref make-fx-procedure foreign c-cons (procedure) top (field) (box) (vector) (memory) ",
		265);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_z52allocatezd2pregzd2envz52zzsaw_exprz00,
		BgL_bgl__za752allocateza7d2p4759z00,
		BGl__z52allocatezd2pregz80zzsaw_exprz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_iregzd2nilzd2envz00zzsaw_exprz00,
		BgL_bgl__iregza7d2nilza7d2za7za74760z00, BGl__iregzd2nilzd2zzsaw_exprz00,
		0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_rtl_inszf3zd2envz21zzsaw_exprz00,
		BgL_bgl__rtl_insza7f3za7f3za7za74761z00, BGl__rtl_inszf3zf3zzsaw_exprz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_pregzd2nilzd2envz00zzsaw_exprz00,
		BgL_bgl__pregza7d2nilza7d2za7za74762z00, BGl__pregzd2nilzd2zzsaw_exprz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_prezd2buildzd2treezd2envzd2zzsaw_exprz00,
		BgL_bgl__preza7d2buildza7d2t4763z00,
		BGl__prezd2buildzd2treez00zzsaw_exprz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_iregzf3zd2envz21zzsaw_exprz00,
		BgL_bgl__iregza7f3za7f3za7za7saw4764z00, BGl__iregzf3zf3zzsaw_exprz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_z52allocatezd2inlinedzd2envz52zzsaw_exprz00,
		BgL_bgl__za752allocateza7d2i4765z00,
		BGl__z52allocatezd2inlinedz80zzsaw_exprz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_acceptzd2foldingzf3zd2envzf3zzsaw_exprz00,
		BgL_bgl__acceptza7d2foldin4766za7, BGl__acceptzd2foldingzf3z21zzsaw_exprz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_buildzd2treezd2envz00zzsaw_exprz00,
		BgL_bgl__buildza7d2treeza7d24767z00, BGl__buildzd2treezd2zzsaw_exprz00, 0L,
		BUNSPEC, 3);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_acceptzd2foldingzf3zd2defa4259zd2envz21zzsaw_exprz00,
		BgL_bgl__acceptza7d2foldin4768za7,
		BGl__acceptzd2foldingzf3zd2defa4259zf3zzsaw_exprz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_inlinedzd2nilzd2envz00zzsaw_exprz00,
		BgL_bgl__inlinedza7d2nilza7d4769z00, BGl__inlinedzd2nilzd2zzsaw_exprz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_pregzf3zd2envz21zzsaw_exprz00,
		BgL_bgl__pregza7f3za7f3za7za7saw4770z00, BGl__pregzf3zf3zzsaw_exprz00, 0L,
		BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_effectszd2default4261zd2envz00zzsaw_exprz00,
		BgL_bgl__effectsza7d2defau4771za7,
		BGl__effectszd2default4261zd2zzsaw_exprz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_exprz00(long
		BgL_checksumz00_3157, char *BgL_fromz00_3158)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_exprz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_exprz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzsaw_exprz00();
					BGl_cnstzd2initzd2zzsaw_exprz00();
					BGl_importedzd2moduleszd2initz00zzsaw_exprz00();
					BGl_objectzd2initzd2zzsaw_exprz00();
					BGl_genericzd2initzd2zzsaw_exprz00();
					BGl_methodzd2initzd2zzsaw_exprz00();
					BGl_toplevelzd2initzd2zzsaw_exprz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_exprz00()
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_expr");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_expr");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"saw_expr");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_expr");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"saw_expr");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_exprz00()
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 1 */
			{	/* SawMill/expr.scm 1 */
				obj_t BgL_cportz00_3113;

				BgL_cportz00_3113 =
					bgl_open_input_string(BGl_string4723z00zzsaw_exprz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_3114;

					BgL_iz00_3114 = ((long) 23);
				BgL_loopz00_3115:
					if ((BgL_iz00_3114 == ((long) -1)))
						{	/* SawMill/expr.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/expr.scm 1 */
							{	/* SawMill/expr.scm 1 */
								obj_t BgL_arg4725z00_3117;

								{	/* SawMill/expr.scm 1 */

									{	/* SawMill/expr.scm 1 */
										obj_t BgL_locationz00_3119;

										BgL_locationz00_3119 = BBOOL(((bool_t) 0));
										{	/* SawMill/expr.scm 1 */

											BgL_arg4725z00_3117 =
												BGl_readz00zz__readerz00(BgL_cportz00_3113,
												BgL_locationz00_3119);
										}
									}
								}
								{	/* SawMill/expr.scm 1 */
									int BgL_auxz00_3180;

									BgL_auxz00_3180 = (int) (BgL_iz00_3114);
									CNST_TABLE_SET(BgL_auxz00_3180, BgL_arg4725z00_3117);
							}}
							{	/* SawMill/expr.scm 1 */
								int BgL_auxz00_3120;

								BgL_auxz00_3120 = (int) ((BgL_iz00_3114 - ((long) 1)));
								{
									long BgL_iz00_3185;

									BgL_iz00_3185 = (long) (BgL_auxz00_3120);
									BgL_iz00_3114 = BgL_iz00_3185;
									goto BgL_loopz00_3115;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_exprz00()
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 1 */
			BGl_za2countza2z00zzsaw_exprz00 = ((long) 0);
			BGl_za2noeffectza2z00zzsaw_exprz00 =
				BGl_makezd2feffectzd2zzast_varz00(BNIL, BNIL);
			BGl_za2loadgza2z00zzsaw_exprz00 =
				BGl_makezd2feffectzd2zzast_varz00(CNST_TABLE_REF(((long) 0)), BNIL);
			BGl_za2storegza2z00zzsaw_exprz00 =
				BGl_makezd2feffectzd2zzast_varz00(BNIL, CNST_TABLE_REF(((long) 0)));
			BGl_za2vrefza2z00zzsaw_exprz00 =
				BGl_makezd2feffectzd2zzast_varz00(CNST_TABLE_REF(((long) 1)), BNIL);
			BGl_za2vsetza2z00zzsaw_exprz00 =
				BGl_makezd2feffectzd2zzast_varz00(BNIL, CNST_TABLE_REF(((long) 1)));
			BGl_za2boxrefza2z00zzsaw_exprz00 =
				BGl_makezd2feffectzd2zzast_varz00(CNST_TABLE_REF(((long) 2)), BNIL);
			BGl_za2boxsetza2z00zzsaw_exprz00 =
				BGl_makezd2feffectzd2zzast_varz00(BNIL, CNST_TABLE_REF(((long) 2)));
			BGl_za2getfza2z00zzsaw_exprz00 =
				BGl_makezd2feffectzd2zzast_varz00(CNST_TABLE_REF(((long) 3)), BNIL);
			BGl_za2setfza2z00zzsaw_exprz00 =
				BGl_makezd2feffectzd2zzast_varz00(BNIL, CNST_TABLE_REF(((long) 3)));
			BGl_za2fullza2z00zzsaw_exprz00 =
				BGl_makezd2feffectzd2zzast_varz00(CNST_TABLE_REF(((long) 4)),
				CNST_TABLE_REF(((long) 4)));
			BGl_za2prefza2z00zzsaw_exprz00 =
				BGl_makezd2feffectzd2zzast_varz00(CNST_TABLE_REF(((long) 5)), BNIL);
			BGl_za2psetza2z00zzsaw_exprz00 =
				BGl_makezd2feffectzd2zzast_varz00(BNIL, CNST_TABLE_REF(((long) 5)));
			{	/* SawMill/expr.scm 267 */
				obj_t BgL_arg4306z00_1278;

				obj_t BgL_arg4307z00_1279;

				BgL_feffectz00_bglt BgL_arg4308z00_1280;

				BgL_arg4306z00_1278 = CNST_TABLE_REF(((long) 6));
				BgL_arg4307z00_1279 = CNST_TABLE_REF(((long) 7));
				BgL_arg4308z00_1280 = BGl_makezd2feffectzd2zzast_varz00(BNIL, BNIL);
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4306z00_1278,
					BgL_arg4307z00_1279, (obj_t) (BgL_arg4308z00_1280));
			}
			{	/* SawMill/expr.scm 268 */
				obj_t BgL_arg4309z00_1281;

				obj_t BgL_arg4310z00_1282;

				BgL_feffectz00_bglt BgL_arg4311z00_1283;

				BgL_arg4309z00_1281 = CNST_TABLE_REF(((long) 8));
				BgL_arg4310z00_1282 = CNST_TABLE_REF(((long) 7));
				BgL_arg4311z00_1283 = BGl_makezd2feffectzd2zzast_varz00(BNIL, BNIL);
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4309z00_1281,
					BgL_arg4310z00_1282, (obj_t) (BgL_arg4311z00_1283));
			}
			{	/* SawMill/expr.scm 269 */
				obj_t BgL_arg4312z00_1284;

				obj_t BgL_arg4313z00_1285;

				BgL_feffectz00_bglt BgL_arg4314z00_1286;

				BgL_arg4312z00_1284 = CNST_TABLE_REF(((long) 9));
				BgL_arg4313z00_1285 = CNST_TABLE_REF(((long) 7));
				BgL_arg4314z00_1286 =
					BGl_makezd2feffectzd2zzast_varz00(CNST_TABLE_REF(((long) 5)), BNIL);
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4312z00_1284,
					BgL_arg4313z00_1285, (obj_t) (BgL_arg4314z00_1286));
			}
			{	/* SawMill/expr.scm 270 */
				obj_t BgL_arg4315z00_1287;

				obj_t BgL_arg4316z00_1288;

				BgL_feffectz00_bglt BgL_arg4317z00_1289;

				BgL_arg4315z00_1287 = CNST_TABLE_REF(((long) 10));
				BgL_arg4316z00_1288 = CNST_TABLE_REF(((long) 7));
				BgL_arg4317z00_1289 =
					BGl_makezd2feffectzd2zzast_varz00(BNIL, CNST_TABLE_REF(((long) 5)));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4315z00_1287,
					BgL_arg4316z00_1288, (obj_t) (BgL_arg4317z00_1289));
			}
			{	/* SawMill/expr.scm 271 */
				obj_t BgL_arg4318z00_1290;

				obj_t BgL_arg4319z00_1291;

				BgL_feffectz00_bglt BgL_arg4320z00_1292;

				BgL_arg4318z00_1290 = CNST_TABLE_REF(((long) 11));
				BgL_arg4319z00_1291 = CNST_TABLE_REF(((long) 7));
				BgL_arg4320z00_1292 =
					BGl_makezd2feffectzd2zzast_varz00(BNIL, CNST_TABLE_REF(((long) 1)));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4318z00_1290,
					BgL_arg4319z00_1291, (obj_t) (BgL_arg4320z00_1292));
			}
			{	/* SawMill/expr.scm 272 */
				obj_t BgL_arg4321z00_1293;

				obj_t BgL_arg4322z00_1294;

				BgL_feffectz00_bglt BgL_arg4323z00_1295;

				BgL_arg4321z00_1293 = CNST_TABLE_REF(((long) 12));
				BgL_arg4322z00_1294 = CNST_TABLE_REF(((long) 7));
				BgL_arg4323z00_1295 =
					BGl_makezd2feffectzd2zzast_varz00(CNST_TABLE_REF(((long) 13)), BNIL);
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4321z00_1293,
					BgL_arg4322z00_1294, (obj_t) (BgL_arg4323z00_1295));
			}
			{	/* SawMill/expr.scm 273 */
				obj_t BgL_arg4324z00_1296;

				obj_t BgL_arg4325z00_1297;

				BgL_feffectz00_bglt BgL_arg4326z00_1298;

				BgL_arg4324z00_1296 = CNST_TABLE_REF(((long) 14));
				BgL_arg4325z00_1297 = CNST_TABLE_REF(((long) 7));
				BgL_arg4326z00_1298 =
					BGl_makezd2feffectzd2zzast_varz00(BNIL, CNST_TABLE_REF(((long) 13)));
				return
					BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4324z00_1296,
					BgL_arg4325z00_1297, (obj_t) (BgL_arg4326z00_1298));
			}
		}
	}



/* pre-build-tree */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2buildzd2treez00zzsaw_exprz00(BgL_backendz00_bglt BgL_bez00_1,
		obj_t BgL_paramsz00_2, obj_t BgL_lz00_3)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 16 */
			BGl_prezd2markzd2localsz00zzsaw_exprz00(BgL_paramsz00_2, BgL_lz00_3);
			BGl_za2countza2z00zzsaw_exprz00 = ((long) 0);
			{
				obj_t BgL_l4230z00_1300;

				{	/* SawMill/expr.scm 19 */
					bool_t BgL_auxz00_3252;

					BgL_l4230z00_1300 = BgL_lz00_3;
				BgL_zc3anonymousza34327ze3z83_1301:
					if (PAIRP(BgL_l4230z00_1300))
						{	/* SawMill/expr.scm 19 */
							{	/* SawMill/expr.scm 21 */
								obj_t BgL_bz00_1303;

								BgL_bz00_1303 = CAR(BgL_l4230z00_1300);
								{	/* SawMill/expr.scm 21 */
									obj_t BgL_lz00_1304;

									obj_t BgL_movesz00_1305;

									{
										BgL_blockz00_bglt BgL_auxz00_3256;

										BgL_auxz00_3256 = (BgL_blockz00_bglt) (BgL_bz00_1303);
										BgL_lz00_1304 =
											(((BgL_blockz00_bglt) CREF(BgL_auxz00_3256))->
											BgL_firstz00);
									}
									BgL_movesz00_1305 = BNIL;
									{
										obj_t BgL_l4228z00_1307;

										BgL_l4228z00_1307 = BgL_lz00_1304;
									BgL_zc3anonymousza34329ze3z83_1308:
										if (PAIRP(BgL_l4228z00_1307))
											{	/* SawMill/expr.scm 22 */
												{	/* SawMill/expr.scm 22 */
													obj_t BgL_insz00_1310;

													BgL_insz00_1310 = CAR(BgL_l4228z00_1307);
													BgL_movesz00_1305 =
														BGl_prezd2analysezd2zzsaw_exprz00(BgL_bez00_1,
														BgL_movesz00_1305, BgL_insz00_1310);
												}
												{
													obj_t BgL_l4228z00_3263;

													BgL_l4228z00_3263 = CDR(BgL_l4228z00_1307);
													BgL_l4228z00_1307 = BgL_l4228z00_3263;
													goto BgL_zc3anonymousza34329ze3z83_1308;
												}
											}
										else
											{	/* SawMill/expr.scm 22 */
												((bool_t) 1);
											}
									}
								}
							}
							{
								obj_t BgL_l4230z00_3265;

								BgL_l4230z00_3265 = CDR(BgL_l4230z00_1300);
								BgL_l4230z00_1300 = BgL_l4230z00_3265;
								goto BgL_zc3anonymousza34327ze3z83_1301;
							}
						}
					else
						{	/* SawMill/expr.scm 19 */
							BgL_auxz00_3252 = ((bool_t) 1);
						}
					return BBOOL(BgL_auxz00_3252);
				}
			}
		}
	}



/* _pre-build-tree */
	obj_t BGl__prezd2buildzd2treez00zzsaw_exprz00(obj_t BgL_envz00_2997,
		obj_t BgL_bez00_2998, obj_t BgL_paramsz00_2999, obj_t BgL_lz00_3000)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 16 */
			return
				BGl_prezd2buildzd2treez00zzsaw_exprz00(
				(BgL_backendz00_bglt) (BgL_bez00_2998), BgL_paramsz00_2999,
				BgL_lz00_3000);
		}
	}



/* pre-mark-locals */
	bool_t BGl_prezd2markzd2localsz00zzsaw_exprz00(obj_t BgL_paramsz00_4,
		obj_t BgL_lz00_5)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 26 */
			{	/* SawMill/expr.scm 27 */
				obj_t BgL_nz00_1315;

				{	/* SawMill/expr.scm 27 */
					obj_t BgL_cellvalz00_3270;

					BgL_cellvalz00_3270 = BINT(((long) 0));
					BgL_nz00_1315 = MAKE_CELL(BgL_cellvalz00_3270);
				}
				{
					obj_t BgL_rz00_1344;

					BgL_blockz00_bglt BgL_bz00_1354;

					{
						obj_t BgL_l4238z00_1322;

						BgL_l4238z00_1322 = BgL_paramsz00_4;
					BgL_zc3anonymousza34333ze3z83_1323:
						if (PAIRP(BgL_l4238z00_1322))
							{	/* SawMill/expr.scm 51 */
								BGl_regzd2ze3pregzf2writezc3zzsaw_exprz00(BgL_nz00_1315,
									CAR(BgL_l4238z00_1322));
								{
									obj_t BgL_l4238z00_3276;

									BgL_l4238z00_3276 = CDR(BgL_l4238z00_1322);
									BgL_l4238z00_1322 = BgL_l4238z00_3276;
									goto BgL_zc3anonymousza34333ze3z83_1323;
								}
							}
						else
							{	/* SawMill/expr.scm 51 */
								((bool_t) 1);
							}
					}
					{
						obj_t BgL_l4240z00_1329;

						BgL_l4240z00_1329 = BgL_lz00_5;
					BgL_zc3anonymousza34337ze3z83_1330:
						if (PAIRP(BgL_l4240z00_1329))
							{	/* SawMill/expr.scm 52 */
								{	/* SawMill/expr.scm 52 */
									obj_t BgL_arg4339z00_1332;

									BgL_arg4339z00_1332 = CAR(BgL_l4240z00_1329);
									BgL_bz00_1354 = (BgL_blockz00_bglt) (BgL_arg4339z00_1332);
									{	/* SawMill/expr.scm 46 */
										obj_t BgL_g4237z00_1356;

										BgL_g4237z00_1356 =
											(((BgL_blockz00_bglt) CREF(BgL_bz00_1354))->BgL_firstz00);
										{
											obj_t BgL_l4235z00_1358;

											BgL_l4235z00_1358 = BgL_g4237z00_1356;
										BgL_zc3anonymousza34353ze3z83_1359:
											if (PAIRP(BgL_l4235z00_1358))
												{	/* SawMill/expr.scm 50 */
													{	/* SawMill/expr.scm 47 */
														obj_t BgL_insz00_1361;

														BgL_insz00_1361 = CAR(BgL_l4235z00_1358);
														{	/* SawMill/expr.scm 48 */
															bool_t BgL_testz00_3285;

															{	/* SawMill/expr.scm 48 */
																BgL_rtl_insz00_bglt BgL_obj3996z00_2420;

																BgL_obj3996z00_2420 =
																	(BgL_rtl_insz00_bglt) (BgL_insz00_1361);
																BgL_testz00_3285 =
																	CBOOL(
																	(((BgL_rtl_insz00_bglt)
																			CREF(BgL_obj3996z00_2420))->BgL_destz00));
															}
															if (BgL_testz00_3285)
																{	/* SawMill/expr.scm 48 */
																	obj_t BgL_arg4356z00_1364;

																	{
																		BgL_rtl_insz00_bglt BgL_auxz00_3289;

																		BgL_auxz00_3289 =
																			(BgL_rtl_insz00_bglt) (BgL_insz00_1361);
																		BgL_arg4356z00_1364 =
																			(((BgL_rtl_insz00_bglt)
																				CREF(BgL_auxz00_3289))->BgL_destz00);
																	}
																	BGl_regzd2ze3pregzf2writezc3zzsaw_exprz00
																		(BgL_nz00_1315, BgL_arg4356z00_1364);
																}
															else
																{	/* SawMill/expr.scm 48 */
																	BFALSE;
																}
														}
														{	/* SawMill/expr.scm 49 */
															obj_t BgL_g4234z00_1365;

															{
																BgL_rtl_insz00_bglt BgL_auxz00_3293;

																BgL_auxz00_3293 =
																	(BgL_rtl_insz00_bglt) (BgL_insz00_1361);
																BgL_g4234z00_1365 =
																	(((BgL_rtl_insz00_bglt)
																		CREF(BgL_auxz00_3293))->BgL_argsz00);
															}
															{
																obj_t BgL_l4232z00_1367;

																BgL_l4232z00_1367 = BgL_g4234z00_1365;
															BgL_zc3anonymousza34357ze3z83_1368:
																if (PAIRP(BgL_l4232z00_1367))
																	{	/* SawMill/expr.scm 49 */
																		BgL_rz00_1344 = CAR(BgL_l4232z00_1367);
																		{	/* SawMill/expr.scm 36 */
																			obj_t BgL_sz00_1346;

																			BgL_sz00_1346 =
																				BGl_regzd2ze3pregz31zzsaw_exprz00
																				(BgL_nz00_1315, BgL_rz00_1344);
																			if ((BgL_sz00_1346 ==
																					CNST_TABLE_REF(((long) 15))))
																				{	/* SawMill/expr.scm 37 */
																					obj_t BgL_nstatz00_2394;

																					BgL_nstatz00_2394 =
																						CNST_TABLE_REF(((long) 16));
																					{	/* SawMill/expr.scm 37 */
																						BgL_pregz00_bglt
																							BgL_obj4133z00_2395;
																						obj_t BgL_val4132z00_2396;

																						BgL_obj4133z00_2395 =
																							(BgL_pregz00_bglt)
																							(BgL_rz00_1344);
																						BgL_val4132z00_2396 =
																							BgL_nstatz00_2394;
																						{
																							obj_t BgL_auxz00_3304;

																							{	/* SawMill/expr.scm 37 */
																								BgL_objectz00_bglt
																									BgL_auxz00_3305;
																								BgL_auxz00_3305 =
																									(BgL_objectz00_bglt)
																									(BgL_obj4133z00_2395);
																								BgL_auxz00_3304 =
																									BGL_OBJECT_WIDENING
																									(BgL_auxz00_3305);
																							}
																							((((BgL_pregz00_bglt)
																										CREF(BgL_auxz00_3304))->
																									BgL_statusz00) =
																								((obj_t) BgL_val4132z00_2396),
																								BUNSPEC);
																				}}}
																			else
																				{	/* SawMill/expr.scm 37 */
																					if (
																						(BgL_sz00_1346 ==
																							CNST_TABLE_REF(((long) 17))))
																						{	/* SawMill/expr.scm 38 */
																							obj_t BgL_nstatz00_2398;

																							BgL_nstatz00_2398 =
																								CNST_TABLE_REF(((long) 18));
																							{	/* SawMill/expr.scm 38 */
																								BgL_pregz00_bglt
																									BgL_obj4133z00_2399;
																								obj_t BgL_val4132z00_2400;

																								BgL_obj4133z00_2399 =
																									(BgL_pregz00_bglt)
																									(BgL_rz00_1344);
																								BgL_val4132z00_2400 =
																									BgL_nstatz00_2398;
																								{
																									obj_t BgL_auxz00_3314;

																									{	/* SawMill/expr.scm 38 */
																										BgL_objectz00_bglt
																											BgL_auxz00_3315;
																										BgL_auxz00_3315 =
																											(BgL_objectz00_bglt)
																											(BgL_obj4133z00_2399);
																										BgL_auxz00_3314 =
																											BGL_OBJECT_WIDENING
																											(BgL_auxz00_3315);
																									}
																									((((BgL_pregz00_bglt)
																												CREF(BgL_auxz00_3314))->
																											BgL_statusz00) =
																										((obj_t)
																											BgL_val4132z00_2400),
																										BUNSPEC);
																						}}}
																					else
																						{	/* SawMill/expr.scm 39 */
																							obj_t BgL_nstatz00_2402;

																							BgL_nstatz00_2402 =
																								CNST_TABLE_REF(((long) 19));
																							{	/* SawMill/expr.scm 39 */
																								BgL_pregz00_bglt
																									BgL_obj4133z00_2403;
																								obj_t BgL_val4132z00_2404;

																								BgL_obj4133z00_2403 =
																									(BgL_pregz00_bglt)
																									(BgL_rz00_1344);
																								BgL_val4132z00_2404 =
																									BgL_nstatz00_2402;
																								{
																									obj_t BgL_auxz00_3321;

																									{	/* SawMill/expr.scm 39 */
																										BgL_objectz00_bglt
																											BgL_auxz00_3322;
																										BgL_auxz00_3322 =
																											(BgL_objectz00_bglt)
																											(BgL_obj4133z00_2403);
																										BgL_auxz00_3321 =
																											BGL_OBJECT_WIDENING
																											(BgL_auxz00_3322);
																									}
																									((((BgL_pregz00_bglt)
																												CREF(BgL_auxz00_3321))->
																											BgL_statusz00) =
																										((obj_t)
																											BgL_val4132z00_2404),
																										BUNSPEC);
																		}}}}}
																		{
																			obj_t BgL_l4232z00_3327;

																			BgL_l4232z00_3327 =
																				CDR(BgL_l4232z00_1367);
																			BgL_l4232z00_1367 = BgL_l4232z00_3327;
																			goto BgL_zc3anonymousza34357ze3z83_1368;
																		}
																	}
																else
																	{	/* SawMill/expr.scm 49 */
																		((bool_t) 1);
																	}
															}
														}
													}
													{
														obj_t BgL_l4235z00_3329;

														BgL_l4235z00_3329 = CDR(BgL_l4235z00_1358);
														BgL_l4235z00_1358 = BgL_l4235z00_3329;
														goto BgL_zc3anonymousza34353ze3z83_1359;
													}
												}
											else
												{	/* SawMill/expr.scm 50 */
													((bool_t) 1);
												}
										}
									}
								}
								{
									obj_t BgL_l4240z00_3332;

									BgL_l4240z00_3332 = CDR(BgL_l4240z00_1329);
									BgL_l4240z00_1329 = BgL_l4240z00_3332;
									goto BgL_zc3anonymousza34337ze3z83_1330;
								}
							}
						else
							{	/* SawMill/expr.scm 52 */
								return ((bool_t) 1);
							}
					}
				}
			}
		}
	}



/* reg->preg */
	obj_t BGl_regzd2ze3pregz31zzsaw_exprz00(obj_t BgL_nz00_3110,
		obj_t BgL_rz00_1338)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 34 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_rz00_1338,
					BGl_pregz00zzsaw_exprz00))
				{	/* SawMill/expr.scm 31 */
					BgL_pregz00_bglt BgL_obj4131z00_2378;

					BgL_obj4131z00_2378 = (BgL_pregz00_bglt) (BgL_rz00_1338);
					{
						obj_t BgL_auxz00_3337;

						{	/* SawMill/expr.scm 31 */
							BgL_objectz00_bglt BgL_auxz00_3338;

							BgL_auxz00_3338 = (BgL_objectz00_bglt) (BgL_obj4131z00_2378);
							BgL_auxz00_3337 = BGL_OBJECT_WIDENING(BgL_auxz00_3338);
						}
						return (((BgL_pregz00_bglt) CREF(BgL_auxz00_3337))->BgL_statusz00);
					}
				}
			else
				{	/* SawMill/expr.scm 30 */
					{	/* SawMill/expr.scm 32 */
						BgL_rtl_regz00_bglt BgL_obj4188z00_1341;

						BgL_obj4188z00_1341 =
							((BgL_rtl_regz00_bglt) (BgL_rtl_regz00_bglt) (BgL_rz00_1338));
						{	/* SawMill/expr.scm 32 */
							BgL_pregz00_bglt BgL_arg4344z00_1342;

							{	/* SawMill/expr.scm 32 */
								BgL_pregz00_bglt BgL_res4657z00_2388;

								{	/* SawMill/expr.scm 32 */
									obj_t BgL_index4100z00_2379;

									obj_t BgL_status4101z00_2380;

									BgL_index4100z00_2379 = CELL_REF(BgL_nz00_3110);
									BgL_status4101z00_2380 = CNST_TABLE_REF(((long) 15));
									{	/* SawMill/expr.scm 32 */
										BgL_pregz00_bglt BgL_new4102z00_2381;

										BgL_new4102z00_2381 =
											((BgL_pregz00_bglt) BREF(GC_MALLOC(sizeof(struct
														BgL_pregz00_bgl))));
										{	/* SawMill/expr.scm 32 */
											BgL_pregz00_bglt BgL_res4656z00_2387;

											{	/* SawMill/expr.scm 32 */
												BgL_pregz00_bglt BgL_new4116z00_2382;

												BgL_new4116z00_2382 = BgL_new4102z00_2381;
												{	/* SawMill/expr.scm 32 */
													obj_t BgL_index4114z00_2385;

													obj_t BgL_status4115z00_2386;

													BgL_index4114z00_2385 = BgL_index4100z00_2379;
													BgL_status4115z00_2386 = BgL_status4101z00_2380;
													((((BgL_pregz00_bglt) CREF(BgL_new4116z00_2382))->
															BgL_indexz00) =
														((obj_t) BgL_index4114z00_2385), BUNSPEC);
													((((BgL_pregz00_bglt) CREF(BgL_new4116z00_2382))->
															BgL_statusz00) =
														((obj_t) BgL_status4115z00_2386), BUNSPEC);
													BgL_res4656z00_2387 = BgL_new4116z00_2382;
											}} BgL_res4656z00_2387;
										}
										BgL_res4657z00_2388 = BgL_new4102z00_2381;
								}}
								BgL_arg4344z00_1342 = BgL_res4657z00_2388;
							}
							{	/* SawMill/expr.scm 32 */
								obj_t BgL_auxz00_3350;

								BgL_objectz00_bglt BgL_auxz00_3348;

								BgL_auxz00_3350 = (obj_t) (BgL_arg4344z00_1342);
								BgL_auxz00_3348 = (BgL_objectz00_bglt) (BgL_obj4188z00_1341);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3348, BgL_auxz00_3350);
						}}
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BgL_obj4188z00_1341),
							BGl_classzd2numzd2zz__objectz00(BGl_pregz00zzsaw_exprz00));
						BgL_obj4188z00_1341;
					}
					{	/* SawMill/expr.scm 33 */
						obj_t BgL_auxz00_3111;

						{	/* SawMill/expr.scm 33 */
							long BgL_za71za7_2391;

							BgL_za71za7_2391 = (long) CINT(CELL_REF(BgL_nz00_3110));
							BgL_auxz00_3111 = BINT((BgL_za71za7_2391 + ((long) 1)));
						}
						CELL_SET(BgL_nz00_3110, BgL_auxz00_3111);
					}
					return CNST_TABLE_REF(((long) 15));
		}}
	}



/* reg->preg/write */
	obj_t BGl_regzd2ze3pregzf2writezc3zzsaw_exprz00(obj_t BgL_nz00_3112,
		obj_t BgL_rz00_1349)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 44 */
			{	/* SawMill/expr.scm 41 */
				obj_t BgL_sz00_1351;

				BgL_sz00_1351 =
					BGl_regzd2ze3pregz31zzsaw_exprz00(BgL_nz00_3112, BgL_rz00_1349);
				if ((BgL_sz00_1351 == CNST_TABLE_REF(((long) 15))))
					{	/* SawMill/expr.scm 42 */
						obj_t BgL_nstatz00_2406;

						BgL_nstatz00_2406 = CNST_TABLE_REF(((long) 17));
						{	/* SawMill/expr.scm 42 */
							BgL_pregz00_bglt BgL_obj4133z00_2407;

							obj_t BgL_val4132z00_2408;

							BgL_obj4133z00_2407 = (BgL_pregz00_bglt) (BgL_rz00_1349);
							BgL_val4132z00_2408 = BgL_nstatz00_2406;
							{
								obj_t BgL_auxz00_3366;

								{	/* SawMill/expr.scm 42 */
									BgL_objectz00_bglt BgL_auxz00_3367;

									BgL_auxz00_3367 = (BgL_objectz00_bglt) (BgL_obj4133z00_2407);
									BgL_auxz00_3366 = BGL_OBJECT_WIDENING(BgL_auxz00_3367);
								}
								return
									((((BgL_pregz00_bglt) CREF(BgL_auxz00_3366))->BgL_statusz00) =
									((obj_t) BgL_val4132z00_2408), BUNSPEC);
							}
						}
					}
				else
					{	/* SawMill/expr.scm 42 */
						if ((BgL_sz00_1351 == CNST_TABLE_REF(((long) 16))))
							{	/* SawMill/expr.scm 43 */
								obj_t BgL_nstatz00_2410;

								BgL_nstatz00_2410 = CNST_TABLE_REF(((long) 18));
								{	/* SawMill/expr.scm 43 */
									BgL_pregz00_bglt BgL_obj4133z00_2411;

									obj_t BgL_val4132z00_2412;

									BgL_obj4133z00_2411 = (BgL_pregz00_bglt) (BgL_rz00_1349);
									BgL_val4132z00_2412 = BgL_nstatz00_2410;
									{
										obj_t BgL_auxz00_3376;

										{	/* SawMill/expr.scm 43 */
											BgL_objectz00_bglt BgL_auxz00_3377;

											BgL_auxz00_3377 =
												(BgL_objectz00_bglt) (BgL_obj4133z00_2411);
											BgL_auxz00_3376 = BGL_OBJECT_WIDENING(BgL_auxz00_3377);
										}
										return
											((((BgL_pregz00_bglt) CREF(BgL_auxz00_3376))->
												BgL_statusz00) =
											((obj_t) BgL_val4132z00_2412), BUNSPEC);
									}
								}
							}
						else
							{	/* SawMill/expr.scm 44 */
								obj_t BgL_nstatz00_2414;

								BgL_nstatz00_2414 = CNST_TABLE_REF(((long) 19));
								{	/* SawMill/expr.scm 44 */
									BgL_pregz00_bglt BgL_obj4133z00_2415;

									obj_t BgL_val4132z00_2416;

									BgL_obj4133z00_2415 = (BgL_pregz00_bglt) (BgL_rz00_1349);
									BgL_val4132z00_2416 = BgL_nstatz00_2414;
									{
										obj_t BgL_auxz00_3383;

										{	/* SawMill/expr.scm 44 */
											BgL_objectz00_bglt BgL_auxz00_3384;

											BgL_auxz00_3384 =
												(BgL_objectz00_bglt) (BgL_obj4133z00_2415);
											BgL_auxz00_3383 = BGL_OBJECT_WIDENING(BgL_auxz00_3384);
										}
										return
											((((BgL_pregz00_bglt) CREF(BgL_auxz00_3383))->
												BgL_statusz00) =
											((obj_t) BgL_val4132z00_2416), BUNSPEC);
									}
								}
							}
					}
			}
		}
	}



/* build-tree */
	BGL_EXPORTED_DEF obj_t BGl_buildzd2treezd2zzsaw_exprz00(BgL_backendz00_bglt
		BgL_bez00_6, obj_t BgL_paramsz00_7, obj_t BgL_lz00_8)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 57 */
			{

				BGl_markzd2localszd2zzsaw_exprz00(BgL_paramsz00_7, BgL_lz00_8);
				{
					obj_t BgL_l4244z00_1383;

					{	/* SawMill/expr.scm 71 */
						bool_t BgL_auxz00_3389;

						BgL_l4244z00_1383 = BgL_lz00_8;
					BgL_zc3anonymousza34362ze3z83_1384:
						if (PAIRP(BgL_l4244z00_1383))
							{	/* SawMill/expr.scm 71 */
								{	/* SawMill/expr.scm 72 */
									obj_t BgL_bz00_1386;

									BgL_bz00_1386 = CAR(BgL_l4244z00_1383);
									{	/* SawMill/expr.scm 72 */
										obj_t BgL_lz00_1387;

										obj_t BgL_movesz00_1388;

										{
											BgL_blockz00_bglt BgL_auxz00_3393;

											BgL_auxz00_3393 = (BgL_blockz00_bglt) (BgL_bz00_1386);
											BgL_lz00_1387 =
												(((BgL_blockz00_bglt) CREF(BgL_auxz00_3393))->
												BgL_firstz00);
										}
										BgL_movesz00_1388 = BNIL;
										{
											obj_t BgL_l4242z00_1390;

											BgL_l4242z00_1390 = BgL_lz00_1387;
										BgL_zc3anonymousza34364ze3z83_1391:
											if (PAIRP(BgL_l4242z00_1390))
												{	/* SawMill/expr.scm 73 */
													{	/* SawMill/expr.scm 73 */
														obj_t BgL_insz00_1393;

														BgL_insz00_1393 = CAR(BgL_l4242z00_1390);
														BgL_movesz00_1388 =
															BGl_analysez00zzsaw_exprz00(BgL_bez00_6,
															BgL_movesz00_1388, BgL_insz00_1393);
													}
													{
														obj_t BgL_l4242z00_3400;

														BgL_l4242z00_3400 = CDR(BgL_l4242z00_1390);
														BgL_l4242z00_1390 = BgL_l4242z00_3400;
														goto BgL_zc3anonymousza34364ze3z83_1391;
													}
												}
											else
												{	/* SawMill/expr.scm 73 */
													((bool_t) 1);
												}
										}
										{	/* SawMill/expr.scm 75 */
											obj_t BgL_rz00_1396;

											BgL_rz00_1396 =
												BGl_filterz12z12zz__r4_control_features_6_9z00
												(BGl_proc4697z00zzsaw_exprz00, BgL_lz00_1387);
											{	/* SawMill/expr.scm 76 */
												obj_t BgL_arg4367z00_1397;

												if (NULLP(BgL_rz00_1396))
													{	/* SawMill/expr.scm 76 */
														BgL_rtl_insz00_bglt BgL_arg4369z00_1399;

														{	/* SawMill/defs.scm 69 */
															BgL_rtl_nopz00_bglt BgL_arg4374z00_1405;

															BgL_arg4374z00_1405 =
																BGl_makezd2rtl_nopzd2zzsaw_defsz00(BFALSE);
															BgL_arg4369z00_1399 =
																BGl_makezd2rtl_inszd2zzsaw_defsz00(BFALSE, BNIL,
																BFALSE,
																(BgL_rtl_funz00_bglt) (BgL_arg4374z00_1405),
																BNIL);
														}
														{	/* SawMill/expr.scm 76 */
															obj_t BgL_list4370z00_1400;

															BgL_list4370z00_1400 =
																MAKE_PAIR((obj_t) (BgL_arg4369z00_1399), BNIL);
															BgL_arg4367z00_1397 = BgL_list4370z00_1400;
														}
													}
												else
													{	/* SawMill/expr.scm 76 */
														BgL_arg4367z00_1397 = BgL_rz00_1396;
													}
												{
													BgL_blockz00_bglt BgL_auxz00_3410;

													BgL_auxz00_3410 = (BgL_blockz00_bglt) (BgL_bz00_1386);
													((((BgL_blockz00_bglt) CREF(BgL_auxz00_3410))->
															BgL_firstz00) =
														((obj_t) BgL_arg4367z00_1397), BUNSPEC);
												}
											}
										}
									}
								}
								{
									obj_t BgL_l4244z00_3413;

									BgL_l4244z00_3413 = CDR(BgL_l4244z00_1383);
									BgL_l4244z00_1383 = BgL_l4244z00_3413;
									goto BgL_zc3anonymousza34362ze3z83_1384;
								}
							}
						else
							{	/* SawMill/expr.scm 71 */
								BgL_auxz00_3389 = ((bool_t) 1);
							}
						return BBOOL(BgL_auxz00_3389);
					}
				}
			}
		}
	}



/* _build-tree */
	obj_t BGl__buildzd2treezd2zzsaw_exprz00(obj_t BgL_envz00_3002,
		obj_t BgL_bez00_3003, obj_t BgL_paramsz00_3004, obj_t BgL_lz00_3005)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 57 */
			return
				BGl_buildzd2treezd2zzsaw_exprz00(
				(BgL_backendz00_bglt) (BgL_bez00_3003), BgL_paramsz00_3004,
				BgL_lz00_3005);
		}
	}



/* usefull */
	obj_t BGl_usefullz00zzsaw_exprz00(obj_t BgL_envz00_3006,
		obj_t BgL_insz00_3007)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 68 */
			{
				obj_t BgL_insz00_1407;

				{	/* SawMill/expr.scm 62 */
					bool_t BgL_auxz00_3418;

					BgL_insz00_1407 = BgL_insz00_3007;
					{
						obj_t BgL_insz00_1413;

						obj_t BgL_destz00_1414;

						{	/* SawMill/expr.scm 69 */
							bool_t BgL_testz00_3419;

							if (BGl_iszd2azf3z21zz__objectz00(BgL_insz00_1407,
									BGl_inlinedz00zzsaw_exprz00))
								{	/* SawMill/expr.scm 69 */
									BgL_testz00_3419 = ((bool_t) 1);
								}
							else
								{	/* SawMill/expr.scm 69 */
									BgL_insz00_1413 = BgL_insz00_1407;
									{
										BgL_rtl_insz00_bglt BgL_auxz00_3436;

										BgL_auxz00_3436 = (BgL_rtl_insz00_bglt) (BgL_insz00_1407);
										BgL_destz00_1414 =
											(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_3436))->
											BgL_destz00);
									}
								BgL_zc3anonymousza34380ze3z83_1415:
									{	/* SawMill/expr.scm 62 */
										BgL_rtl_funz00_bglt BgL_funz00_1416;

										{
											BgL_rtl_insz00_bglt BgL_auxz00_3422;

											BgL_auxz00_3422 = (BgL_rtl_insz00_bglt) (BgL_insz00_1413);
											BgL_funz00_1416 =
												(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_3422))->
												BgL_funz00);
										}
										{	/* SawMill/expr.scm 63 */
											bool_t BgL_testz00_3425;

											{	/* SawMill/expr.scm 63 */
												obj_t BgL_obj3575z00_2442;

												BgL_obj3575z00_2442 = (obj_t) (BgL_funz00_1416);
												BgL_testz00_3425 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj3575z00_2442,
													BGl_rtl_movz00zzsaw_defsz00);
											}
											if (BgL_testz00_3425)
												{	/* SawMill/expr.scm 64 */
													obj_t BgL_argz00_1418;

													{	/* SawMill/expr.scm 64 */
														obj_t BgL_pairz00_2444;

														{
															BgL_rtl_insz00_bglt BgL_auxz00_3428;

															BgL_auxz00_3428 =
																(BgL_rtl_insz00_bglt) (BgL_insz00_1413);
															BgL_pairz00_2444 =
																(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_3428))->
																BgL_argsz00);
														}
														BgL_argz00_1418 = CAR(BgL_pairz00_2444);
													}
													if (BGl_iszd2azf3z21zz__objectz00(BgL_argz00_1418,
															BGl_rtl_insz00zzsaw_defsz00))
														{
															obj_t BgL_insz00_3434;

															BgL_insz00_3434 = BgL_argz00_1418;
															BgL_insz00_1413 = BgL_insz00_3434;
															goto BgL_zc3anonymousza34380ze3z83_1415;
														}
													else
														{	/* SawMill/expr.scm 65 */
															BgL_testz00_3419 =
																(BgL_argz00_1418 == BgL_destz00_1414);
														}
												}
											else
												{	/* SawMill/expr.scm 63 */
													BgL_testz00_3419 = ((bool_t) 0);
												}
										}
									}
								}
							if (BgL_testz00_3419)
								{	/* SawMill/expr.scm 69 */
									BgL_auxz00_3418 = ((bool_t) 0);
								}
							else
								{	/* SawMill/expr.scm 69 */
									BgL_auxz00_3418 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_auxz00_3418);
				}
			}
		}
	}



/* mark-locals */
	bool_t BGl_markzd2localszd2zzsaw_exprz00(obj_t BgL_paramsz00_9,
		obj_t BgL_lz00_10)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 79 */
			{	/* SawMill/expr.scm 80 */
				obj_t BgL_nz00_1424;

				{	/* SawMill/expr.scm 80 */
					obj_t BgL_cellvalz00_3440;

					BgL_cellvalz00_3440 = BINT(((long) 0));
					BgL_nz00_1424 = MAKE_CELL(BgL_cellvalz00_3440);
				}
				{
					obj_t BgL_rz00_1453;

					BgL_blockz00_bglt BgL_bz00_1463;

					{
						obj_t BgL_l4252z00_1431;

						BgL_l4252z00_1431 = BgL_paramsz00_9;
					BgL_zc3anonymousza34384ze3z83_1432:
						if (PAIRP(BgL_l4252z00_1431))
							{	/* SawMill/expr.scm 104 */
								BGl_regzd2ze3iregzf2writezc3zzsaw_exprz00(BgL_nz00_1424,
									CAR(BgL_l4252z00_1431));
								{
									obj_t BgL_l4252z00_3446;

									BgL_l4252z00_3446 = CDR(BgL_l4252z00_1431);
									BgL_l4252z00_1431 = BgL_l4252z00_3446;
									goto BgL_zc3anonymousza34384ze3z83_1432;
								}
							}
						else
							{	/* SawMill/expr.scm 104 */
								((bool_t) 1);
							}
					}
					{
						obj_t BgL_l4254z00_1438;

						BgL_l4254z00_1438 = BgL_lz00_10;
					BgL_zc3anonymousza34388ze3z83_1439:
						if (PAIRP(BgL_l4254z00_1438))
							{	/* SawMill/expr.scm 105 */
								{	/* SawMill/expr.scm 105 */
									obj_t BgL_arg4390z00_1441;

									BgL_arg4390z00_1441 = CAR(BgL_l4254z00_1438);
									BgL_bz00_1463 = (BgL_blockz00_bglt) (BgL_arg4390z00_1441);
									{	/* SawMill/expr.scm 99 */
										obj_t BgL_g4251z00_1465;

										BgL_g4251z00_1465 =
											(((BgL_blockz00_bglt) CREF(BgL_bz00_1463))->BgL_firstz00);
										{
											obj_t BgL_l4249z00_1467;

											BgL_l4249z00_1467 = BgL_g4251z00_1465;
										BgL_zc3anonymousza34404ze3z83_1468:
											if (PAIRP(BgL_l4249z00_1467))
												{	/* SawMill/expr.scm 103 */
													{	/* SawMill/expr.scm 100 */
														obj_t BgL_insz00_1470;

														BgL_insz00_1470 = CAR(BgL_l4249z00_1467);
														{	/* SawMill/expr.scm 101 */
															bool_t BgL_testz00_3455;

															{	/* SawMill/expr.scm 101 */
																BgL_rtl_insz00_bglt BgL_obj3996z00_2497;

																BgL_obj3996z00_2497 =
																	(BgL_rtl_insz00_bglt) (BgL_insz00_1470);
																BgL_testz00_3455 =
																	CBOOL(
																	(((BgL_rtl_insz00_bglt)
																			CREF(BgL_obj3996z00_2497))->BgL_destz00));
															}
															if (BgL_testz00_3455)
																{	/* SawMill/expr.scm 101 */
																	obj_t BgL_arg4407z00_1473;

																	{
																		BgL_rtl_insz00_bglt BgL_auxz00_3459;

																		BgL_auxz00_3459 =
																			(BgL_rtl_insz00_bglt) (BgL_insz00_1470);
																		BgL_arg4407z00_1473 =
																			(((BgL_rtl_insz00_bglt)
																				CREF(BgL_auxz00_3459))->BgL_destz00);
																	}
																	BGl_regzd2ze3iregzf2writezc3zzsaw_exprz00
																		(BgL_nz00_1424, BgL_arg4407z00_1473);
																}
															else
																{	/* SawMill/expr.scm 101 */
																	BFALSE;
																}
														}
														{	/* SawMill/expr.scm 102 */
															obj_t BgL_g4248z00_1474;

															{
																BgL_rtl_insz00_bglt BgL_auxz00_3463;

																BgL_auxz00_3463 =
																	(BgL_rtl_insz00_bglt) (BgL_insz00_1470);
																BgL_g4248z00_1474 =
																	(((BgL_rtl_insz00_bglt)
																		CREF(BgL_auxz00_3463))->BgL_argsz00);
															}
															{
																obj_t BgL_l4246z00_1476;

																BgL_l4246z00_1476 = BgL_g4248z00_1474;
															BgL_zc3anonymousza34408ze3z83_1477:
																if (PAIRP(BgL_l4246z00_1476))
																	{	/* SawMill/expr.scm 102 */
																		BgL_rz00_1453 = CAR(BgL_l4246z00_1476);
																		{	/* SawMill/expr.scm 89 */
																			obj_t BgL_sz00_1455;

																			BgL_sz00_1455 =
																				BGl_regzd2ze3iregz31zzsaw_exprz00
																				(BgL_nz00_1424, BgL_rz00_1453);
																			if ((BgL_sz00_1455 ==
																					CNST_TABLE_REF(((long) 15))))
																				{	/* SawMill/expr.scm 90 */
																					obj_t BgL_nstatz00_2471;

																					BgL_nstatz00_2471 =
																						CNST_TABLE_REF(((long) 16));
																					{	/* SawMill/expr.scm 90 */
																						BgL_iregz00_bglt
																							BgL_obj4085z00_2472;
																						obj_t BgL_val4084z00_2473;

																						BgL_obj4085z00_2472 =
																							(BgL_iregz00_bglt)
																							(BgL_rz00_1453);
																						BgL_val4084z00_2473 =
																							BgL_nstatz00_2471;
																						{
																							obj_t BgL_auxz00_3474;

																							{	/* SawMill/expr.scm 90 */
																								BgL_objectz00_bglt
																									BgL_auxz00_3475;
																								BgL_auxz00_3475 =
																									(BgL_objectz00_bglt)
																									(BgL_obj4085z00_2472);
																								BgL_auxz00_3474 =
																									BGL_OBJECT_WIDENING
																									(BgL_auxz00_3475);
																							}
																							((((BgL_iregz00_bglt)
																										CREF(BgL_auxz00_3474))->
																									BgL_statusz00) =
																								((obj_t) BgL_val4084z00_2473),
																								BUNSPEC);
																				}}}
																			else
																				{	/* SawMill/expr.scm 90 */
																					if (
																						(BgL_sz00_1455 ==
																							CNST_TABLE_REF(((long) 17))))
																						{	/* SawMill/expr.scm 91 */
																							obj_t BgL_nstatz00_2475;

																							BgL_nstatz00_2475 =
																								CNST_TABLE_REF(((long) 18));
																							{	/* SawMill/expr.scm 91 */
																								BgL_iregz00_bglt
																									BgL_obj4085z00_2476;
																								obj_t BgL_val4084z00_2477;

																								BgL_obj4085z00_2476 =
																									(BgL_iregz00_bglt)
																									(BgL_rz00_1453);
																								BgL_val4084z00_2477 =
																									BgL_nstatz00_2475;
																								{
																									obj_t BgL_auxz00_3484;

																									{	/* SawMill/expr.scm 91 */
																										BgL_objectz00_bglt
																											BgL_auxz00_3485;
																										BgL_auxz00_3485 =
																											(BgL_objectz00_bglt)
																											(BgL_obj4085z00_2476);
																										BgL_auxz00_3484 =
																											BGL_OBJECT_WIDENING
																											(BgL_auxz00_3485);
																									}
																									((((BgL_iregz00_bglt)
																												CREF(BgL_auxz00_3484))->
																											BgL_statusz00) =
																										((obj_t)
																											BgL_val4084z00_2477),
																										BUNSPEC);
																						}}}
																					else
																						{	/* SawMill/expr.scm 92 */
																							obj_t BgL_nstatz00_2479;

																							BgL_nstatz00_2479 =
																								CNST_TABLE_REF(((long) 19));
																							{	/* SawMill/expr.scm 92 */
																								BgL_iregz00_bglt
																									BgL_obj4085z00_2480;
																								obj_t BgL_val4084z00_2481;

																								BgL_obj4085z00_2480 =
																									(BgL_iregz00_bglt)
																									(BgL_rz00_1453);
																								BgL_val4084z00_2481 =
																									BgL_nstatz00_2479;
																								{
																									obj_t BgL_auxz00_3491;

																									{	/* SawMill/expr.scm 92 */
																										BgL_objectz00_bglt
																											BgL_auxz00_3492;
																										BgL_auxz00_3492 =
																											(BgL_objectz00_bglt)
																											(BgL_obj4085z00_2480);
																										BgL_auxz00_3491 =
																											BGL_OBJECT_WIDENING
																											(BgL_auxz00_3492);
																									}
																									((((BgL_iregz00_bglt)
																												CREF(BgL_auxz00_3491))->
																											BgL_statusz00) =
																										((obj_t)
																											BgL_val4084z00_2481),
																										BUNSPEC);
																		}}}}}
																		{
																			obj_t BgL_l4246z00_3497;

																			BgL_l4246z00_3497 =
																				CDR(BgL_l4246z00_1476);
																			BgL_l4246z00_1476 = BgL_l4246z00_3497;
																			goto BgL_zc3anonymousza34408ze3z83_1477;
																		}
																	}
																else
																	{	/* SawMill/expr.scm 102 */
																		((bool_t) 1);
																	}
															}
														}
													}
													{
														obj_t BgL_l4249z00_3499;

														BgL_l4249z00_3499 = CDR(BgL_l4249z00_1467);
														BgL_l4249z00_1467 = BgL_l4249z00_3499;
														goto BgL_zc3anonymousza34404ze3z83_1468;
													}
												}
											else
												{	/* SawMill/expr.scm 103 */
													((bool_t) 1);
												}
										}
									}
								}
								{
									obj_t BgL_l4254z00_3502;

									BgL_l4254z00_3502 = CDR(BgL_l4254z00_1438);
									BgL_l4254z00_1438 = BgL_l4254z00_3502;
									goto BgL_zc3anonymousza34388ze3z83_1439;
								}
							}
						else
							{	/* SawMill/expr.scm 105 */
								return ((bool_t) 1);
							}
					}
				}
			}
		}
	}



/* reg->ireg */
	obj_t BGl_regzd2ze3iregz31zzsaw_exprz00(obj_t BgL_nz00_3107,
		obj_t BgL_rz00_1447)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 87 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_rz00_1447,
					BGl_iregz00zzsaw_exprz00))
				{	/* SawMill/expr.scm 84 */
					BgL_iregz00_bglt BgL_obj4083z00_2455;

					BgL_obj4083z00_2455 = (BgL_iregz00_bglt) (BgL_rz00_1447);
					{
						obj_t BgL_auxz00_3507;

						{	/* SawMill/expr.scm 84 */
							BgL_objectz00_bglt BgL_auxz00_3508;

							BgL_auxz00_3508 = (BgL_objectz00_bglt) (BgL_obj4083z00_2455);
							BgL_auxz00_3507 = BGL_OBJECT_WIDENING(BgL_auxz00_3508);
						}
						return (((BgL_iregz00_bglt) CREF(BgL_auxz00_3507))->BgL_statusz00);
					}
				}
			else
				{	/* SawMill/expr.scm 83 */
					{	/* SawMill/expr.scm 85 */
						BgL_rtl_regz00_bglt BgL_obj4193z00_1450;

						BgL_obj4193z00_1450 =
							((BgL_rtl_regz00_bglt) (BgL_rtl_regz00_bglt) (BgL_rz00_1447));
						{	/* SawMill/expr.scm 85 */
							BgL_iregz00_bglt BgL_arg4395z00_1451;

							{	/* SawMill/expr.scm 85 */
								BgL_iregz00_bglt BgL_res4660z00_2465;

								{	/* SawMill/expr.scm 85 */
									obj_t BgL_index4052z00_2456;

									obj_t BgL_status4053z00_2457;

									BgL_index4052z00_2456 = CELL_REF(BgL_nz00_3107);
									BgL_status4053z00_2457 = CNST_TABLE_REF(((long) 15));
									{	/* SawMill/expr.scm 85 */
										BgL_iregz00_bglt BgL_new4054z00_2458;

										BgL_new4054z00_2458 =
											((BgL_iregz00_bglt) BREF(GC_MALLOC(sizeof(struct
														BgL_iregz00_bgl))));
										{	/* SawMill/expr.scm 85 */
											BgL_iregz00_bglt BgL_res4659z00_2464;

											{	/* SawMill/expr.scm 85 */
												BgL_iregz00_bglt BgL_new4068z00_2459;

												BgL_new4068z00_2459 = BgL_new4054z00_2458;
												{	/* SawMill/expr.scm 85 */
													obj_t BgL_index4066z00_2462;

													obj_t BgL_status4067z00_2463;

													BgL_index4066z00_2462 = BgL_index4052z00_2456;
													BgL_status4067z00_2463 = BgL_status4053z00_2457;
													((((BgL_iregz00_bglt) CREF(BgL_new4068z00_2459))->
															BgL_indexz00) =
														((obj_t) BgL_index4066z00_2462), BUNSPEC);
													((((BgL_iregz00_bglt) CREF(BgL_new4068z00_2459))->
															BgL_statusz00) =
														((obj_t) BgL_status4067z00_2463), BUNSPEC);
													BgL_res4659z00_2464 = BgL_new4068z00_2459;
											}} BgL_res4659z00_2464;
										}
										BgL_res4660z00_2465 = BgL_new4054z00_2458;
								}}
								BgL_arg4395z00_1451 = BgL_res4660z00_2465;
							}
							{	/* SawMill/expr.scm 85 */
								obj_t BgL_auxz00_3520;

								BgL_objectz00_bglt BgL_auxz00_3518;

								BgL_auxz00_3520 = (obj_t) (BgL_arg4395z00_1451);
								BgL_auxz00_3518 = (BgL_objectz00_bglt) (BgL_obj4193z00_1450);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3518, BgL_auxz00_3520);
						}}
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BgL_obj4193z00_1450),
							BGl_classzd2numzd2zz__objectz00(BGl_iregz00zzsaw_exprz00));
						BgL_obj4193z00_1450;
					}
					{	/* SawMill/expr.scm 86 */
						obj_t BgL_auxz00_3108;

						{	/* SawMill/expr.scm 86 */
							long BgL_za71za7_2468;

							BgL_za71za7_2468 = (long) CINT(CELL_REF(BgL_nz00_3107));
							BgL_auxz00_3108 = BINT((BgL_za71za7_2468 + ((long) 1)));
						}
						CELL_SET(BgL_nz00_3107, BgL_auxz00_3108);
					}
					return CNST_TABLE_REF(((long) 15));
		}}
	}



/* reg->ireg/write */
	obj_t BGl_regzd2ze3iregzf2writezc3zzsaw_exprz00(obj_t BgL_nz00_3109,
		obj_t BgL_rz00_1458)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 97 */
			{	/* SawMill/expr.scm 94 */
				obj_t BgL_sz00_1460;

				BgL_sz00_1460 =
					BGl_regzd2ze3iregz31zzsaw_exprz00(BgL_nz00_3109, BgL_rz00_1458);
				if ((BgL_sz00_1460 == CNST_TABLE_REF(((long) 15))))
					{	/* SawMill/expr.scm 95 */
						obj_t BgL_nstatz00_2483;

						BgL_nstatz00_2483 = CNST_TABLE_REF(((long) 17));
						{	/* SawMill/expr.scm 95 */
							BgL_iregz00_bglt BgL_obj4085z00_2484;

							obj_t BgL_val4084z00_2485;

							BgL_obj4085z00_2484 = (BgL_iregz00_bglt) (BgL_rz00_1458);
							BgL_val4084z00_2485 = BgL_nstatz00_2483;
							{
								obj_t BgL_auxz00_3536;

								{	/* SawMill/expr.scm 95 */
									BgL_objectz00_bglt BgL_auxz00_3537;

									BgL_auxz00_3537 = (BgL_objectz00_bglt) (BgL_obj4085z00_2484);
									BgL_auxz00_3536 = BGL_OBJECT_WIDENING(BgL_auxz00_3537);
								}
								return
									((((BgL_iregz00_bglt) CREF(BgL_auxz00_3536))->BgL_statusz00) =
									((obj_t) BgL_val4084z00_2485), BUNSPEC);
							}
						}
					}
				else
					{	/* SawMill/expr.scm 95 */
						if ((BgL_sz00_1460 == CNST_TABLE_REF(((long) 16))))
							{	/* SawMill/expr.scm 96 */
								obj_t BgL_nstatz00_2487;

								BgL_nstatz00_2487 = CNST_TABLE_REF(((long) 18));
								{	/* SawMill/expr.scm 96 */
									BgL_iregz00_bglt BgL_obj4085z00_2488;

									obj_t BgL_val4084z00_2489;

									BgL_obj4085z00_2488 = (BgL_iregz00_bglt) (BgL_rz00_1458);
									BgL_val4084z00_2489 = BgL_nstatz00_2487;
									{
										obj_t BgL_auxz00_3546;

										{	/* SawMill/expr.scm 96 */
											BgL_objectz00_bglt BgL_auxz00_3547;

											BgL_auxz00_3547 =
												(BgL_objectz00_bglt) (BgL_obj4085z00_2488);
											BgL_auxz00_3546 = BGL_OBJECT_WIDENING(BgL_auxz00_3547);
										}
										return
											((((BgL_iregz00_bglt) CREF(BgL_auxz00_3546))->
												BgL_statusz00) =
											((obj_t) BgL_val4084z00_2489), BUNSPEC);
									}
								}
							}
						else
							{	/* SawMill/expr.scm 97 */
								obj_t BgL_nstatz00_2491;

								BgL_nstatz00_2491 = CNST_TABLE_REF(((long) 19));
								{	/* SawMill/expr.scm 97 */
									BgL_iregz00_bglt BgL_obj4085z00_2492;

									obj_t BgL_val4084z00_2493;

									BgL_obj4085z00_2492 = (BgL_iregz00_bglt) (BgL_rz00_1458);
									BgL_val4084z00_2493 = BgL_nstatz00_2491;
									{
										obj_t BgL_auxz00_3553;

										{	/* SawMill/expr.scm 97 */
											BgL_objectz00_bglt BgL_auxz00_3554;

											BgL_auxz00_3554 =
												(BgL_objectz00_bglt) (BgL_obj4085z00_2492);
											BgL_auxz00_3553 = BGL_OBJECT_WIDENING(BgL_auxz00_3554);
										}
										return
											((((BgL_iregz00_bglt) CREF(BgL_auxz00_3553))->
												BgL_statusz00) =
											((obj_t) BgL_val4084z00_2493), BUNSPEC);
									}
								}
							}
					}
			}
		}
	}



/* pre-analyse */
	obj_t BGl_prezd2analysezd2zzsaw_exprz00(BgL_backendz00_bglt BgL_bz00_11,
		obj_t BgL_movingz00_12, obj_t BgL_insz00_13)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 111 */
			{	/* SawMill/expr.scm 112 */
				obj_t BgL_inszd2effectzd2_1489;

				obj_t BgL_argsz00_1490;

				{	/* SawMill/expr.scm 112 */
					BgL_rtl_funz00_bglt BgL_arg4434z00_1525;

					{
						BgL_rtl_insz00_bglt BgL_auxz00_3558;

						BgL_auxz00_3558 = (BgL_rtl_insz00_bglt) (BgL_insz00_13);
						BgL_arg4434z00_1525 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_3558))->BgL_funz00);
					}
					{	/* SawMill/expr.scm 112 */
						obj_t BgL_method4262z00_2506;

						{	/* SawMill/expr.scm 112 */
							BgL_objectz00_bglt BgL_objz00_2507;

							BgL_objz00_2507 = (BgL_objectz00_bglt) (BgL_arg4434z00_1525);
							{	/* SawMill/expr.scm 112 */
								long BgL_objzd2classzd2numz00_2508;

								BgL_objzd2classzd2numz00_2508 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2507);
								{	/* SawMill/expr.scm 112 */
									obj_t BgL_arg2643z00_2509;

									BgL_arg2643z00_2509 =
										PROCEDURE_REF(BGl_effectszd2envzd2zzsaw_exprz00,
										(int) (((long) 1)));
									{	/* SawMill/expr.scm 112 */
										obj_t BgL_arrayz00_2511;

										int BgL_offsetz00_2512;

										BgL_arrayz00_2511 = BgL_arg2643z00_2509;
										BgL_offsetz00_2512 = (int) (BgL_objzd2classzd2numz00_2508);
										{	/* SawMill/expr.scm 112 */
											long BgL_offsetz00_2513;

											BgL_offsetz00_2513 =
												((long) (BgL_offsetz00_2512) - OBJECT_TYPE);
											{	/* SawMill/expr.scm 112 */
												long BgL_modz00_2514;

												{	/* SawMill/expr.scm 112 */
													int BgL_arg2645z00_2515;

													BgL_arg2645z00_2515 = (int) (((long) 16));
													{	/* SawMill/expr.scm 112 */
														long BgL_auxz00_3569;

														BgL_auxz00_3569 = (long) (BgL_arg2645z00_2515);
														BgL_modz00_2514 =
															(BgL_offsetz00_2513 / BgL_auxz00_3569);
												}}
												{	/* SawMill/expr.scm 112 */
													long BgL_restz00_2516;

													{	/* SawMill/expr.scm 112 */
														int BgL_arg2644z00_2517;

														BgL_arg2644z00_2517 = (int) (((long) 16));
														{	/* SawMill/expr.scm 112 */
															long BgL_auxz00_3573;

															BgL_auxz00_3573 = (long) (BgL_arg2644z00_2517);
															BgL_restz00_2516 =
																(BgL_offsetz00_2513 % BgL_auxz00_3573);
													}}
													{	/* SawMill/expr.scm 112 */

														BgL_method4262z00_2506 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2511,
																(int) (BgL_modz00_2514)),
															(int) (BgL_restz00_2516));
						}}}}}}}}
						BgL_inszd2effectzd2_1489 =
							PROCEDURE_ENTRY(BgL_method4262z00_2506) (BgL_method4262z00_2506,
							(obj_t) (BgL_arg4434z00_1525), BEOA);
				}}
				{
					BgL_rtl_insz00_bglt BgL_auxz00_3583;

					BgL_auxz00_3583 = (BgL_rtl_insz00_bglt) (BgL_insz00_13);
					BgL_argsz00_1490 =
						(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_3583))->BgL_argsz00);
				}
				{
					obj_t BgL_lz00_1506;

					obj_t BgL_rz00_1507;

					obj_t BgL_treez00_1501;

					obj_t BgL_posz00_1502;

					{	/* SawMill/expr.scm 127 */
						obj_t BgL_rz00_1493;

						obj_t BgL_dz00_1494;

						BgL_lz00_1506 = BgL_movingz00_12;
						BgL_rz00_1507 = BNIL;
					BgL_zc3anonymousza34422ze3z83_1508:
						if (NULLP(BgL_lz00_1506))
							{	/* SawMill/expr.scm 118 */
								BgL_rz00_1493 = BgL_rz00_1507;
							}
						else
							{	/* SawMill/expr.scm 119 */
								obj_t BgL_g4196z00_1510;

								{	/* SawMill/expr.scm 119 */
									obj_t BgL_auxz00_3588;

									{	/* SawMill/expr.scm 119 */
										BgL_rtl_insz00_bglt BgL_obj3996z00_2571;

										{	/* SawMill/expr.scm 119 */
											obj_t BgL_pairz00_2570;

											BgL_pairz00_2570 = BgL_lz00_1506;
											BgL_obj3996z00_2571 =
												(BgL_rtl_insz00_bglt) (CAR(BgL_pairz00_2570));
										}
										BgL_auxz00_3588 =
											(((BgL_rtl_insz00_bglt) CREF(BgL_obj3996z00_2571))->
											BgL_destz00);
									}
									BgL_g4196z00_1510 =
										BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3588,
										BgL_argsz00_1490);
								}
								if (CBOOL(BgL_g4196z00_1510))
									{	/* SawMill/expr.scm 119 */
										BgL_treez00_1501 = CAR(BgL_lz00_1506);
										BgL_posz00_1502 = BgL_g4196z00_1510;
										{	/* SawMill/expr.scm 114 */
											bool_t BgL_testz00_3595;

											{	/* SawMill/expr.scm 114 */
												obj_t BgL_method4260z00_2539;

												{	/* SawMill/expr.scm 114 */
													BgL_objectz00_bglt BgL_objz00_2540;

													BgL_objz00_2540 = (BgL_objectz00_bglt) (BgL_bz00_11);
													{	/* SawMill/expr.scm 114 */
														long BgL_objzd2classzd2numz00_2541;

														BgL_objzd2classzd2numz00_2541 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2540);
														{	/* SawMill/expr.scm 114 */
															obj_t BgL_arg2643z00_2542;

															BgL_arg2643z00_2542 =
																PROCEDURE_REF
																(BGl_acceptzd2foldingzf3zd2envzf3zzsaw_exprz00,
																(int) (((long) 1)));
															{	/* SawMill/expr.scm 114 */
																obj_t BgL_arrayz00_2544;

																int BgL_offsetz00_2545;

																BgL_arrayz00_2544 = BgL_arg2643z00_2542;
																BgL_offsetz00_2545 =
																	(int) (BgL_objzd2classzd2numz00_2541);
																{	/* SawMill/expr.scm 114 */
																	long BgL_offsetz00_2546;

																	BgL_offsetz00_2546 =
																		((long) (BgL_offsetz00_2545) - OBJECT_TYPE);
																	{	/* SawMill/expr.scm 114 */
																		long BgL_modz00_2547;

																		{	/* SawMill/expr.scm 114 */
																			int BgL_arg2645z00_2548;

																			BgL_arg2645z00_2548 = (int) (((long) 16));
																			{	/* SawMill/expr.scm 114 */
																				long BgL_auxz00_3604;

																				BgL_auxz00_3604 =
																					(long) (BgL_arg2645z00_2548);
																				BgL_modz00_2547 =
																					(BgL_offsetz00_2546 /
																					BgL_auxz00_3604);
																		}}
																		{	/* SawMill/expr.scm 114 */
																			long BgL_restz00_2549;

																			{	/* SawMill/expr.scm 114 */
																				int BgL_arg2644z00_2550;

																				BgL_arg2644z00_2550 =
																					(int) (((long) 16));
																				{	/* SawMill/expr.scm 114 */
																					long BgL_auxz00_3608;

																					BgL_auxz00_3608 =
																						(long) (BgL_arg2644z00_2550);
																					BgL_restz00_2549 =
																						(BgL_offsetz00_2546 %
																						BgL_auxz00_3608);
																			}}
																			{	/* SawMill/expr.scm 114 */

																				BgL_method4260z00_2539 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2544,
																						(int) (BgL_modz00_2547)),
																					(int) (BgL_restz00_2549));
												}}}}}}}}
												BgL_testz00_3595 =
													CBOOL(PROCEDURE_ENTRY(BgL_method4260z00_2539)
													(BgL_method4260z00_2539, (obj_t) (BgL_bz00_11),
														BgL_insz00_13, BgL_treez00_1501, BEOA));
											}
											if (BgL_testz00_3595)
												{	/* SawMill/expr.scm 114 */
													BGl_za2countza2z00zzsaw_exprz00 =
														(((long) 1) + BGl_za2countza2z00zzsaw_exprz00);
													{	/* SawMill/expr.scm 116 */
														obj_t BgL_arg4421z00_1505;

														{
															BgL_rtl_insz00_bglt BgL_auxz00_3620;

															BgL_auxz00_3620 =
																(BgL_rtl_insz00_bglt) (BgL_treez00_1501);
															BgL_arg4421z00_1505 =
																(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_3620))->
																BgL_destz00);
														}
														{
															BgL_rtl_regz00_bglt BgL_auxz00_3623;

															BgL_auxz00_3623 =
																(BgL_rtl_regz00_bglt) (BgL_arg4421z00_1505);
															((((BgL_rtl_regz00_bglt) CREF(BgL_auxz00_3623))->
																	BgL_onexprzf3zf3) = ((obj_t) BTRUE), BUNSPEC);
												}}}
											else
												{	/* SawMill/expr.scm 114 */
													BFALSE;
												}
										}
										{
											obj_t BgL_lz00_3627;

											BgL_lz00_3627 = CDR(BgL_lz00_1506);
											BgL_lz00_1506 = BgL_lz00_3627;
											goto BgL_zc3anonymousza34422ze3z83_1508;
										}
									}
								else
									{	/* SawMill/expr.scm 123 */
										bool_t BgL_testz00_3629;

										{	/* SawMill/expr.scm 123 */
											obj_t BgL_arg4431z00_1520;

											BgL_arg4431z00_1520 = CAR(BgL_lz00_1506);
											BgL_testz00_3629 =
												CBOOL(BGl_xxz00zzsaw_exprz00(BgL_arg4431z00_1520,
													BgL_insz00_13, BgL_inszd2effectzd2_1489));
										}
										if (BgL_testz00_3629)
											{
												obj_t BgL_lz00_3633;

												BgL_lz00_3633 = CDR(BgL_lz00_1506);
												BgL_lz00_1506 = BgL_lz00_3633;
												goto BgL_zc3anonymousza34422ze3z83_1508;
											}
										else
											{	/* SawMill/expr.scm 126 */
												obj_t BgL_arg4428z00_1517;

												obj_t BgL_arg4429z00_1518;

												BgL_arg4428z00_1517 = CDR(BgL_lz00_1506);
												BgL_arg4429z00_1518 =
													MAKE_PAIR(CAR(BgL_lz00_1506), BgL_rz00_1507);
												{
													obj_t BgL_rz00_3639;

													obj_t BgL_lz00_3638;

													BgL_lz00_3638 = BgL_arg4428z00_1517;
													BgL_rz00_3639 = BgL_arg4429z00_1518;
													BgL_rz00_1507 = BgL_rz00_3639;
													BgL_lz00_1506 = BgL_lz00_3638;
													goto BgL_zc3anonymousza34422ze3z83_1508;
												}
											}
									}
							}
						{
							BgL_rtl_insz00_bglt BgL_auxz00_3640;

							BgL_auxz00_3640 = (BgL_rtl_insz00_bglt) (BgL_insz00_13);
							BgL_dz00_1494 =
								(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_3640))->BgL_destz00);
						}
						{	/* SawMill/expr.scm 129 */
							bool_t BgL_testz00_3643;

							if (CBOOL(BgL_dz00_1494))
								{	/* SawMill/expr.scm 130 */
									bool_t BgL_testz00_3646;

									{	/* SawMill/expr.scm 130 */
										obj_t BgL_auxz00_3647;

										{	/* SawMill/expr.scm 130 */
											BgL_pregz00_bglt BgL_obj4131z00_2533;

											BgL_obj4131z00_2533 = (BgL_pregz00_bglt) (BgL_dz00_1494);
											{
												obj_t BgL_auxz00_3649;

												{	/* SawMill/expr.scm 130 */
													BgL_objectz00_bglt BgL_auxz00_3650;

													BgL_auxz00_3650 =
														(BgL_objectz00_bglt) (BgL_obj4131z00_2533);
													BgL_auxz00_3649 =
														BGL_OBJECT_WIDENING(BgL_auxz00_3650);
												}
												BgL_auxz00_3647 =
													(((BgL_pregz00_bglt) CREF(BgL_auxz00_3649))->
													BgL_statusz00);
											}
										}
										BgL_testz00_3646 =
											(BgL_auxz00_3647 == CNST_TABLE_REF(((long) 18)));
									}
									if (BgL_testz00_3646)
										{	/* SawMill/expr.scm 131 */
											bool_t BgL_testz00_3656;

											{	/* SawMill/expr.scm 131 */
												BgL_rtl_funz00_bglt BgL_arg4416z00_1498;

												{
													BgL_rtl_insz00_bglt BgL_auxz00_3657;

													BgL_auxz00_3657 =
														(BgL_rtl_insz00_bglt) (BgL_insz00_13);
													BgL_arg4416z00_1498 =
														(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_3657))->
														BgL_funz00);
												}
												{	/* SawMill/expr.scm 131 */
													obj_t BgL_obj3979z00_2535;

													BgL_obj3979z00_2535 = (obj_t) (BgL_arg4416z00_1498);
													BgL_testz00_3656 =
														BGl_iszd2azf3z21zz__objectz00(BgL_obj3979z00_2535,
														BGl_rtl_protectz00zzsaw_defsz00);
												}
											}
											if (BgL_testz00_3656)
												{	/* SawMill/expr.scm 131 */
													BgL_testz00_3643 = ((bool_t) 0);
												}
											else
												{	/* SawMill/expr.scm 131 */
													BgL_testz00_3643 = ((bool_t) 1);
												}
										}
									else
										{	/* SawMill/expr.scm 130 */
											BgL_testz00_3643 = ((bool_t) 0);
										}
								}
							else
								{	/* SawMill/expr.scm 129 */
									BgL_testz00_3643 = ((bool_t) 0);
								}
							if (BgL_testz00_3643)
								{	/* SawMill/expr.scm 129 */
									return MAKE_PAIR(BgL_insz00_13, BgL_rz00_1493);
								}
							else
								{	/* SawMill/expr.scm 129 */
									return BgL_rz00_1493;
								}
						}
					}
				}
			}
		}
	}



/* analyse */
	obj_t BGl_analysez00zzsaw_exprz00(BgL_backendz00_bglt BgL_bz00_14,
		obj_t BgL_movingz00_15, obj_t BgL_insz00_16)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 136 */
			{	/* SawMill/expr.scm 138 */
				obj_t BgL_inszd2effectzd2_1526;

				obj_t BgL_argsz00_1527;

				{	/* SawMill/expr.scm 138 */
					BgL_rtl_funz00_bglt BgL_arg4458z00_1565;

					{
						BgL_rtl_insz00_bglt BgL_auxz00_3663;

						BgL_auxz00_3663 = (BgL_rtl_insz00_bglt) (BgL_insz00_16);
						BgL_arg4458z00_1565 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_3663))->BgL_funz00);
					}
					{	/* SawMill/expr.scm 138 */
						obj_t BgL_method4262z00_2584;

						{	/* SawMill/expr.scm 138 */
							BgL_objectz00_bglt BgL_objz00_2585;

							BgL_objz00_2585 = (BgL_objectz00_bglt) (BgL_arg4458z00_1565);
							{	/* SawMill/expr.scm 138 */
								long BgL_objzd2classzd2numz00_2586;

								BgL_objzd2classzd2numz00_2586 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2585);
								{	/* SawMill/expr.scm 138 */
									obj_t BgL_arg2643z00_2587;

									BgL_arg2643z00_2587 =
										PROCEDURE_REF(BGl_effectszd2envzd2zzsaw_exprz00,
										(int) (((long) 1)));
									{	/* SawMill/expr.scm 138 */
										obj_t BgL_arrayz00_2589;

										int BgL_offsetz00_2590;

										BgL_arrayz00_2589 = BgL_arg2643z00_2587;
										BgL_offsetz00_2590 = (int) (BgL_objzd2classzd2numz00_2586);
										{	/* SawMill/expr.scm 138 */
											long BgL_offsetz00_2591;

											BgL_offsetz00_2591 =
												((long) (BgL_offsetz00_2590) - OBJECT_TYPE);
											{	/* SawMill/expr.scm 138 */
												long BgL_modz00_2592;

												{	/* SawMill/expr.scm 138 */
													int BgL_arg2645z00_2593;

													BgL_arg2645z00_2593 = (int) (((long) 16));
													{	/* SawMill/expr.scm 138 */
														long BgL_auxz00_3674;

														BgL_auxz00_3674 = (long) (BgL_arg2645z00_2593);
														BgL_modz00_2592 =
															(BgL_offsetz00_2591 / BgL_auxz00_3674);
												}}
												{	/* SawMill/expr.scm 138 */
													long BgL_restz00_2594;

													{	/* SawMill/expr.scm 138 */
														int BgL_arg2644z00_2595;

														BgL_arg2644z00_2595 = (int) (((long) 16));
														{	/* SawMill/expr.scm 138 */
															long BgL_auxz00_3678;

															BgL_auxz00_3678 = (long) (BgL_arg2644z00_2595);
															BgL_restz00_2594 =
																(BgL_offsetz00_2591 % BgL_auxz00_3678);
													}}
													{	/* SawMill/expr.scm 138 */

														BgL_method4262z00_2584 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2589,
																(int) (BgL_modz00_2592)),
															(int) (BgL_restz00_2594));
						}}}}}}}}
						BgL_inszd2effectzd2_1526 =
							PROCEDURE_ENTRY(BgL_method4262z00_2584) (BgL_method4262z00_2584,
							(obj_t) (BgL_arg4458z00_1565), BEOA);
				}}
				{
					BgL_rtl_insz00_bglt BgL_auxz00_3688;

					BgL_auxz00_3688 = (BgL_rtl_insz00_bglt) (BgL_insz00_16);
					BgL_argsz00_1527 =
						(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_3688))->BgL_argsz00);
				}
				{
					obj_t BgL_lz00_1546;

					obj_t BgL_rz00_1547;

					obj_t BgL_treez00_1538;

					obj_t BgL_posz00_1539;

					{	/* SawMill/expr.scm 156 */
						obj_t BgL_rz00_1530;

						obj_t BgL_dz00_1531;

						BgL_lz00_1546 = BgL_movingz00_15;
						BgL_rz00_1547 = BNIL;
					BgL_zc3anonymousza34446ze3z83_1548:
						if (NULLP(BgL_lz00_1546))
							{	/* SawMill/expr.scm 146 */
								BgL_rz00_1530 = BgL_rz00_1547;
							}
						else
							{	/* SawMill/expr.scm 147 */
								obj_t BgL_g4199z00_1550;

								{	/* SawMill/expr.scm 147 */
									obj_t BgL_auxz00_3693;

									{	/* SawMill/expr.scm 147 */
										BgL_rtl_insz00_bglt BgL_obj3996z00_2649;

										{	/* SawMill/expr.scm 147 */
											obj_t BgL_pairz00_2648;

											BgL_pairz00_2648 = BgL_lz00_1546;
											BgL_obj3996z00_2649 =
												(BgL_rtl_insz00_bglt) (CAR(BgL_pairz00_2648));
										}
										BgL_auxz00_3693 =
											(((BgL_rtl_insz00_bglt) CREF(BgL_obj3996z00_2649))->
											BgL_destz00);
									}
									BgL_g4199z00_1550 =
										BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3693,
										BgL_argsz00_1527);
								}
								if (CBOOL(BgL_g4199z00_1550))
									{	/* SawMill/expr.scm 147 */
										BgL_treez00_1538 = CAR(BgL_lz00_1546);
										BgL_posz00_1539 = BgL_g4199z00_1550;
										{	/* SawMill/expr.scm 140 */
											bool_t BgL_testz00_3700;

											{	/* SawMill/expr.scm 140 */
												obj_t BgL_method4260z00_2617;

												{	/* SawMill/expr.scm 140 */
													BgL_objectz00_bglt BgL_objz00_2618;

													BgL_objz00_2618 = (BgL_objectz00_bglt) (BgL_bz00_14);
													{	/* SawMill/expr.scm 140 */
														long BgL_objzd2classzd2numz00_2619;

														BgL_objzd2classzd2numz00_2619 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2618);
														{	/* SawMill/expr.scm 140 */
															obj_t BgL_arg2643z00_2620;

															BgL_arg2643z00_2620 =
																PROCEDURE_REF
																(BGl_acceptzd2foldingzf3zd2envzf3zzsaw_exprz00,
																(int) (((long) 1)));
															{	/* SawMill/expr.scm 140 */
																obj_t BgL_arrayz00_2622;

																int BgL_offsetz00_2623;

																BgL_arrayz00_2622 = BgL_arg2643z00_2620;
																BgL_offsetz00_2623 =
																	(int) (BgL_objzd2classzd2numz00_2619);
																{	/* SawMill/expr.scm 140 */
																	long BgL_offsetz00_2624;

																	BgL_offsetz00_2624 =
																		((long) (BgL_offsetz00_2623) - OBJECT_TYPE);
																	{	/* SawMill/expr.scm 140 */
																		long BgL_modz00_2625;

																		{	/* SawMill/expr.scm 140 */
																			int BgL_arg2645z00_2626;

																			BgL_arg2645z00_2626 = (int) (((long) 16));
																			{	/* SawMill/expr.scm 140 */
																				long BgL_auxz00_3709;

																				BgL_auxz00_3709 =
																					(long) (BgL_arg2645z00_2626);
																				BgL_modz00_2625 =
																					(BgL_offsetz00_2624 /
																					BgL_auxz00_3709);
																		}}
																		{	/* SawMill/expr.scm 140 */
																			long BgL_restz00_2627;

																			{	/* SawMill/expr.scm 140 */
																				int BgL_arg2644z00_2628;

																				BgL_arg2644z00_2628 =
																					(int) (((long) 16));
																				{	/* SawMill/expr.scm 140 */
																					long BgL_auxz00_3713;

																					BgL_auxz00_3713 =
																						(long) (BgL_arg2644z00_2628);
																					BgL_restz00_2627 =
																						(BgL_offsetz00_2624 %
																						BgL_auxz00_3713);
																			}}
																			{	/* SawMill/expr.scm 140 */

																				BgL_method4260z00_2617 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2622,
																						(int) (BgL_modz00_2625)),
																					(int) (BgL_restz00_2627));
												}}}}}}}}
												BgL_testz00_3700 =
													CBOOL(PROCEDURE_ENTRY(BgL_method4260z00_2617)
													(BgL_method4260z00_2617, (obj_t) (BgL_bz00_14),
														BgL_insz00_16, BgL_treez00_1538, BEOA));
											}
											if (BgL_testz00_3700)
												{	/* SawMill/expr.scm 140 */
													SET_CAR(BgL_posz00_1539, BgL_treez00_1538);
													if (BGl_iszd2azf3z21zz__objectz00(BgL_treez00_1538,
															BGl_inlinedz00zzsaw_exprz00))
														{	/* SawMill/expr.scm 143 */
															BFALSE;
														}
													else
														{	/* SawMill/expr.scm 143 */
															BgL_rtl_insz00_bglt BgL_obj4198z00_1543;

															BgL_obj4198z00_1543 =
																((BgL_rtl_insz00_bglt)
																(BgL_rtl_insz00_bglt) (BgL_treez00_1538));
															{	/* SawMill/expr.scm 143 */
																BgL_inlinedz00_bglt BgL_arg4444z00_1544;

																BgL_arg4444z00_1544 =
																	BGl_wideningzd2inlinedzd2zzsaw_exprz00();
																{	/* SawMill/expr.scm 143 */
																	obj_t BgL_auxz00_3732;

																	BgL_objectz00_bglt BgL_auxz00_3730;

																	BgL_auxz00_3732 =
																		(obj_t) (BgL_arg4444z00_1544);
																	BgL_auxz00_3730 =
																		(BgL_objectz00_bglt) (BgL_obj4198z00_1543);
																	BGL_OBJECT_WIDENING_SET(BgL_auxz00_3730,
																		BgL_auxz00_3732);
																}
															}
															BGL_OBJECT_CLASS_NUM_SET(
																(BgL_objectz00_bglt) (BgL_obj4198z00_1543),
																BGl_classzd2numzd2zz__objectz00
																(BGl_inlinedz00zzsaw_exprz00));
															(obj_t) (BgL_obj4198z00_1543);
														}
												}
											else
												{	/* SawMill/expr.scm 140 */
													BFALSE;
												}
										}
										{
											obj_t BgL_lz00_3740;

											BgL_lz00_3740 = CDR(BgL_lz00_1546);
											BgL_lz00_1546 = BgL_lz00_3740;
											goto BgL_zc3anonymousza34446ze3z83_1548;
										}
									}
								else
									{	/* SawMill/expr.scm 151 */
										bool_t BgL_testz00_3742;

										{	/* SawMill/expr.scm 151 */
											obj_t BgL_arg4455z00_1560;

											BgL_arg4455z00_1560 = CAR(BgL_lz00_1546);
											BgL_testz00_3742 =
												CBOOL(BGl_xxz00zzsaw_exprz00(BgL_arg4455z00_1560,
													BgL_insz00_16, BgL_inszd2effectzd2_1526));
										}
										if (BgL_testz00_3742)
											{
												obj_t BgL_lz00_3746;

												BgL_lz00_3746 = CDR(BgL_lz00_1546);
												BgL_lz00_1546 = BgL_lz00_3746;
												goto BgL_zc3anonymousza34446ze3z83_1548;
											}
										else
											{	/* SawMill/expr.scm 154 */
												obj_t BgL_arg4452z00_1557;

												obj_t BgL_arg4453z00_1558;

												BgL_arg4452z00_1557 = CDR(BgL_lz00_1546);
												BgL_arg4453z00_1558 =
													MAKE_PAIR(CAR(BgL_lz00_1546), BgL_rz00_1547);
												{
													obj_t BgL_rz00_3752;

													obj_t BgL_lz00_3751;

													BgL_lz00_3751 = BgL_arg4452z00_1557;
													BgL_rz00_3752 = BgL_arg4453z00_1558;
													BgL_rz00_1547 = BgL_rz00_3752;
													BgL_lz00_1546 = BgL_lz00_3751;
													goto BgL_zc3anonymousza34446ze3z83_1548;
												}
											}
									}
							}
						{
							BgL_rtl_insz00_bglt BgL_auxz00_3753;

							BgL_auxz00_3753 = (BgL_rtl_insz00_bglt) (BgL_insz00_16);
							BgL_dz00_1531 =
								(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_3753))->BgL_destz00);
						}
						{	/* SawMill/expr.scm 158 */
							bool_t BgL_testz00_3756;

							if (CBOOL(BgL_dz00_1531))
								{	/* SawMill/expr.scm 159 */
									bool_t BgL_testz00_3759;

									{	/* SawMill/expr.scm 159 */
										obj_t BgL_auxz00_3760;

										{	/* SawMill/expr.scm 159 */
											BgL_iregz00_bglt BgL_obj4083z00_2611;

											BgL_obj4083z00_2611 = (BgL_iregz00_bglt) (BgL_dz00_1531);
											{
												obj_t BgL_auxz00_3762;

												{	/* SawMill/expr.scm 159 */
													BgL_objectz00_bglt BgL_auxz00_3763;

													BgL_auxz00_3763 =
														(BgL_objectz00_bglt) (BgL_obj4083z00_2611);
													BgL_auxz00_3762 =
														BGL_OBJECT_WIDENING(BgL_auxz00_3763);
												}
												BgL_auxz00_3760 =
													(((BgL_iregz00_bglt) CREF(BgL_auxz00_3762))->
													BgL_statusz00);
											}
										}
										BgL_testz00_3759 =
											(BgL_auxz00_3760 == CNST_TABLE_REF(((long) 18)));
									}
									if (BgL_testz00_3759)
										{	/* SawMill/expr.scm 160 */
											bool_t BgL_testz00_3769;

											{	/* SawMill/expr.scm 160 */
												BgL_rtl_funz00_bglt BgL_arg4438z00_1535;

												{
													BgL_rtl_insz00_bglt BgL_auxz00_3770;

													BgL_auxz00_3770 =
														(BgL_rtl_insz00_bglt) (BgL_insz00_16);
													BgL_arg4438z00_1535 =
														(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_3770))->
														BgL_funz00);
												}
												{	/* SawMill/expr.scm 160 */
													obj_t BgL_obj3979z00_2613;

													BgL_obj3979z00_2613 = (obj_t) (BgL_arg4438z00_1535);
													BgL_testz00_3769 =
														BGl_iszd2azf3z21zz__objectz00(BgL_obj3979z00_2613,
														BGl_rtl_protectz00zzsaw_defsz00);
												}
											}
											if (BgL_testz00_3769)
												{	/* SawMill/expr.scm 160 */
													BgL_testz00_3756 = ((bool_t) 0);
												}
											else
												{	/* SawMill/expr.scm 160 */
													BgL_testz00_3756 = ((bool_t) 1);
												}
										}
									else
										{	/* SawMill/expr.scm 159 */
											BgL_testz00_3756 = ((bool_t) 0);
										}
								}
							else
								{	/* SawMill/expr.scm 158 */
									BgL_testz00_3756 = ((bool_t) 0);
								}
							if (BgL_testz00_3756)
								{	/* SawMill/expr.scm 158 */
									return MAKE_PAIR(BgL_insz00_16, BgL_rz00_1530);
								}
							else
								{	/* SawMill/expr.scm 158 */
									return BgL_rz00_1530;
								}
						}
					}
				}
			}
		}
	}



/* xx */
	obj_t BGl_xxz00zzsaw_exprz00(obj_t BgL_moverz00_26, obj_t BgL_insz00_27,
		obj_t BgL_inszd2effectszd2_28)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 175 */
			{	/* SawMill/expr.scm 176 */
				obj_t BgL__ortest_4201z00_1567;

				{	/* SawMill/expr.scm 176 */
					obj_t BgL_auxz00_3780;

					obj_t BgL_auxz00_3776;

					{
						BgL_rtl_insz00_bglt BgL_auxz00_3781;

						BgL_auxz00_3781 = (BgL_rtl_insz00_bglt) (BgL_moverz00_26);
						BgL_auxz00_3780 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_3781))->BgL_argsz00);
					}
					{
						BgL_rtl_insz00_bglt BgL_auxz00_3777;

						BgL_auxz00_3777 = (BgL_rtl_insz00_bglt) (BgL_insz00_27);
						BgL_auxz00_3776 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_3777))->BgL_destz00);
					}
					BgL__ortest_4201z00_1567 =
						BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3776,
						BgL_auxz00_3780);
				}
				if (CBOOL(BgL__ortest_4201z00_1567))
					{	/* SawMill/expr.scm 176 */
						return BgL__ortest_4201z00_1567;
					}
				else
					{	/* SawMill/expr.scm 177 */
						bool_t BgL__ortest_4202z00_1568;

						{	/* SawMill/expr.scm 177 */
							obj_t BgL_arg4464z00_1576;

							{	/* SawMill/expr.scm 177 */
								BgL_rtl_funz00_bglt BgL_arg4465z00_1577;

								{
									BgL_rtl_insz00_bglt BgL_auxz00_3787;

									BgL_auxz00_3787 = (BgL_rtl_insz00_bglt) (BgL_moverz00_26);
									BgL_arg4465z00_1577 =
										(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_3787))->BgL_funz00);
								}
								{	/* SawMill/expr.scm 177 */
									obj_t BgL_method4262z00_2665;

									{	/* SawMill/expr.scm 177 */
										BgL_objectz00_bglt BgL_objz00_2666;

										BgL_objz00_2666 =
											(BgL_objectz00_bglt) (BgL_arg4465z00_1577);
										{	/* SawMill/expr.scm 177 */
											long BgL_objzd2classzd2numz00_2667;

											BgL_objzd2classzd2numz00_2667 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2666);
											{	/* SawMill/expr.scm 177 */
												obj_t BgL_arg2643z00_2668;

												BgL_arg2643z00_2668 =
													PROCEDURE_REF(BGl_effectszd2envzd2zzsaw_exprz00,
													(int) (((long) 1)));
												{	/* SawMill/expr.scm 177 */
													obj_t BgL_arrayz00_2670;

													int BgL_offsetz00_2671;

													BgL_arrayz00_2670 = BgL_arg2643z00_2668;
													BgL_offsetz00_2671 =
														(int) (BgL_objzd2classzd2numz00_2667);
													{	/* SawMill/expr.scm 177 */
														long BgL_offsetz00_2672;

														BgL_offsetz00_2672 =
															((long) (BgL_offsetz00_2671) - OBJECT_TYPE);
														{	/* SawMill/expr.scm 177 */
															long BgL_modz00_2673;

															{	/* SawMill/expr.scm 177 */
																int BgL_arg2645z00_2674;

																BgL_arg2645z00_2674 = (int) (((long) 16));
																{	/* SawMill/expr.scm 177 */
																	long BgL_auxz00_3798;

																	BgL_auxz00_3798 =
																		(long) (BgL_arg2645z00_2674);
																	BgL_modz00_2673 =
																		(BgL_offsetz00_2672 / BgL_auxz00_3798);
															}}
															{	/* SawMill/expr.scm 177 */
																long BgL_restz00_2675;

																{	/* SawMill/expr.scm 177 */
																	int BgL_arg2644z00_2676;

																	BgL_arg2644z00_2676 = (int) (((long) 16));
																	{	/* SawMill/expr.scm 177 */
																		long BgL_auxz00_3802;

																		BgL_auxz00_3802 =
																			(long) (BgL_arg2644z00_2676);
																		BgL_restz00_2675 =
																			(BgL_offsetz00_2672 % BgL_auxz00_3802);
																}}
																{	/* SawMill/expr.scm 177 */

																	BgL_method4262z00_2665 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2670,
																			(int) (BgL_modz00_2673)),
																		(int) (BgL_restz00_2675));
									}}}}}}}}
									BgL_arg4464z00_1576 =
										PROCEDURE_ENTRY(BgL_method4262z00_2665)
										(BgL_method4262z00_2665, (obj_t) (BgL_arg4465z00_1577),
										BEOA);
							}}
							BgL__ortest_4202z00_1568 =
								BGl_matcheffectz00zzsaw_exprz00(BgL_arg4464z00_1576,
								BgL_inszd2effectszd2_28);
						}
						if (BgL__ortest_4202z00_1568)
							{	/* SawMill/expr.scm 177 */
								return BBOOL(BgL__ortest_4202z00_1568);
							}
						else
							{	/* SawMill/expr.scm 178 */
								obj_t BgL_arg4460z00_1570;

								{	/* SawMill/expr.scm 179 */
									obj_t BgL_arg4463z00_1574;

									{
										BgL_rtl_insz00_bglt BgL_auxz00_3815;

										BgL_auxz00_3815 = (BgL_rtl_insz00_bglt) (BgL_moverz00_26);
										BgL_arg4463z00_1574 =
											(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_3815))->
											BgL_argsz00);
									}
									BgL_arg4460z00_1570 =
										BGl_filterz00zz__r4_control_features_6_9z00
										(BGl_rtl_inszf3zd2envz21zzsaw_exprz00, BgL_arg4463z00_1574);
								}
								{	/* SawMill/expr.scm 178 */
									obj_t BgL_zc3anonymousza34462ze3z83_3014;

									BgL_zc3anonymousza34462ze3z83_3014 =
										make_fx_procedure
										(BGl_zc3anonymousza34462ze3z83zzsaw_exprz00,
										(int) (((long) 1)), (int) (((long) 2)));
									PROCEDURE_SET(BgL_zc3anonymousza34462ze3z83_3014,
										(int) (((long) 0)), BgL_insz00_27);
									PROCEDURE_SET(BgL_zc3anonymousza34462ze3z83_3014,
										(int) (((long) 1)), BgL_inszd2effectszd2_28);
									{	/* SawMill/expr.scm 178 */
										obj_t BgL_list4461z00_1571;

										BgL_list4461z00_1571 = MAKE_PAIR(BgL_arg4460z00_1570, BNIL);
										return
											BGl_anyz00zz__r4_pairs_and_lists_6_3z00
											(BgL_zc3anonymousza34462ze3z83_3014,
											BgL_list4461z00_1571);
									}
								}
							}
					}
			}
		}
	}



/* <anonymous:4462> */
	obj_t BGl_zc3anonymousza34462ze3z83zzsaw_exprz00(obj_t BgL_envz00_3015,
		obj_t BgL_subz00_3018)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 178 */
			{	/* SawMill/expr.scm 178 */
				obj_t BgL_insz00_3016;

				obj_t BgL_inszd2effectszd2_3017;

				BgL_insz00_3016 = PROCEDURE_REF(BgL_envz00_3015, (int) (((long) 0)));
				BgL_inszd2effectszd2_3017 =
					PROCEDURE_REF(BgL_envz00_3015, (int) (((long) 1)));
				{
					obj_t BgL_subz00_1572;

					BgL_subz00_1572 = BgL_subz00_3018;
					return
						BGl_xxz00zzsaw_exprz00(BgL_subz00_1572, BgL_insz00_3016,
						BgL_inszd2effectszd2_3017);
				}
			}
		}
	}



/* matcheffect */
	bool_t BGl_matcheffectz00zzsaw_exprz00(obj_t BgL_f1z00_29, obj_t BgL_f2z00_30)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 197 */
			{	/* SawMill/expr.scm 208 */
				obj_t BgL_w1z00_1582;

				obj_t BgL_w2z00_1583;

				{
					BgL_feffectz00_bglt BgL_auxz00_3833;

					BgL_auxz00_3833 = (BgL_feffectz00_bglt) (BgL_f1z00_29);
					BgL_w1z00_1582 =
						(((BgL_feffectz00_bglt) CREF(BgL_auxz00_3833))->BgL_writez00);
				}
				{
					BgL_feffectz00_bglt BgL_auxz00_3836;

					BgL_auxz00_3836 = (BgL_feffectz00_bglt) (BgL_f2z00_30);
					BgL_w2z00_1583 =
						(((BgL_feffectz00_bglt) CREF(BgL_auxz00_3836))->BgL_writez00);
				}
				{	/* SawMill/expr.scm 209 */
					bool_t BgL__ortest_4203z00_1584;

					BgL__ortest_4203z00_1584 =
						BGl_intersectionzf3zf3zzsaw_exprz00(BgL_w1z00_1582, BgL_w2z00_1583);
					if (BgL__ortest_4203z00_1584)
						{	/* SawMill/expr.scm 209 */
							return BgL__ortest_4203z00_1584;
						}
					else
						{	/* SawMill/expr.scm 210 */
							bool_t BgL__ortest_4204z00_1585;

							{	/* SawMill/expr.scm 210 */
								obj_t BgL_auxz00_3841;

								{
									BgL_feffectz00_bglt BgL_auxz00_3842;

									BgL_auxz00_3842 = (BgL_feffectz00_bglt) (BgL_f1z00_29);
									BgL_auxz00_3841 =
										(((BgL_feffectz00_bglt) CREF(BgL_auxz00_3842))->
										BgL_readz00);
								}
								BgL__ortest_4204z00_1585 =
									BGl_intersectionzf3zf3zzsaw_exprz00(BgL_auxz00_3841,
									BgL_w2z00_1583);
							}
							if (BgL__ortest_4204z00_1585)
								{	/* SawMill/expr.scm 210 */
									return BgL__ortest_4204z00_1585;
								}
							else
								{	/* SawMill/expr.scm 211 */
									obj_t BgL_auxz00_3847;

									{
										BgL_feffectz00_bglt BgL_auxz00_3848;

										BgL_auxz00_3848 = (BgL_feffectz00_bglt) (BgL_f2z00_30);
										BgL_auxz00_3847 =
											(((BgL_feffectz00_bglt) CREF(BgL_auxz00_3848))->
											BgL_readz00);
									}
									return
										BGl_intersectionzf3zf3zzsaw_exprz00(BgL_auxz00_3847,
										BgL_w1z00_1582);
								}
						}
				}
			}
		}
	}



/* intersection? */
	bool_t BGl_intersectionzf3zf3zzsaw_exprz00(obj_t BgL_l1z00_1595,
		obj_t BgL_l2z00_1596)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 207 */
			{
				obj_t BgL_l1z00_1588;

				obj_t BgL_l2z00_1589;

				if (NULLP(BgL_l1z00_1595))
					{	/* SawMill/expr.scm 203 */
						return ((bool_t) 0);
					}
				else
					{	/* SawMill/expr.scm 203 */
						if (NULLP(BgL_l2z00_1596))
							{	/* SawMill/expr.scm 204 */
								return ((bool_t) 0);
							}
						else
							{	/* SawMill/expr.scm 204 */
								if ((BgL_l1z00_1595 == CNST_TABLE_REF(((long) 4))))
									{	/* SawMill/expr.scm 205 */
										return ((bool_t) 1);
									}
								else
									{	/* SawMill/expr.scm 205 */
										if ((BgL_l2z00_1596 == CNST_TABLE_REF(((long) 4))))
											{	/* SawMill/expr.scm 206 */
												return ((bool_t) 1);
											}
										else
											{	/* SawMill/expr.scm 206 */
												BgL_l1z00_1588 = BgL_l1z00_1595;
												BgL_l2z00_1589 = BgL_l2z00_1596;
											BgL_zc3anonymousza34470ze3z83_1590:
												if (NULLP(BgL_l1z00_1588))
													{	/* SawMill/expr.scm 199 */
														return ((bool_t) 0);
													}
												else
													{	/* SawMill/expr.scm 199 */
														if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																(CAR(BgL_l1z00_1588), BgL_l2z00_1589)))
															{	/* SawMill/expr.scm 200 */
																return ((bool_t) 1);
															}
														else
															{
																obj_t BgL_l1z00_3868;

																BgL_l1z00_3868 = CDR(BgL_l1z00_1588);
																BgL_l1z00_1588 = BgL_l1z00_3868;
																goto BgL_zc3anonymousza34470ze3z83_1590;
															}
													}
											}
									}
							}
					}
			}
		}
	}



/* manu-effect */
	BgL_feffectz00_bglt BGl_manuzd2effectzd2zzsaw_exprz00(BgL_globalz00_bglt
		BgL_varz00_48)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 250 */
			{	/* SawMill/expr.scm 251 */
				BgL_valuez00_bglt BgL_funz00_1606;

				{
					BgL_variablez00_bglt BgL_auxz00_3870;

					BgL_auxz00_3870 = (BgL_variablez00_bglt) (BgL_varz00_48);
					BgL_funz00_1606 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_3870))->BgL_valuez00);
				}
				{	/* SawMill/expr.scm 252 */
					bool_t BgL_testz00_3873;

					{	/* SawMill/expr.scm 252 */
						obj_t BgL_obj1856z00_2709;

						BgL_obj1856z00_2709 = (obj_t) (BgL_funz00_1606);
						BgL_testz00_3873 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj1856z00_2709,
							BGl_funz00zzast_varz00);
					}
					if (BgL_testz00_3873)
						{	/* SawMill/expr.scm 253 */
							obj_t BgL_effectz00_1608;

							{
								BgL_funz00_bglt BgL_auxz00_3876;

								BgL_auxz00_3876 = (BgL_funz00_bglt) (BgL_funz00_1606);
								BgL_effectz00_1608 =
									(((BgL_funz00_bglt) CREF(BgL_auxz00_3876))->BgL_effectz00);
							}
							if (BGl_iszd2azf3z21zz__objectz00(BgL_effectz00_1608,
									BGl_feffectz00zzast_varz00))
								{	/* SawMill/expr.scm 254 */
									return (BgL_feffectz00_bglt) (BgL_effectz00_1608);
								}
							else
								{	/* SawMill/expr.scm 254 */
									CNST_TABLE_REF(((long) 20));
									return BGl_za2fullza2z00zzsaw_exprz00;
								}
						}
					else
						{	/* SawMill/expr.scm 252 */
							return BGl_za2fullza2z00zzsaw_exprz00;
						}
				}
			}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_exprz00()
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 1 */
			{	/* SawMill/expr.scm 11 */
				obj_t BgL_arg4484z00_1610;

				obj_t BgL_arg4485z00_1611;

				obj_t BgL_arg4488z00_1614;

				BgL_arg4484z00_1610 = CNST_TABLE_REF(((long) 21));
				BgL_arg4485z00_1611 = BGl_rtl_regz00zzsaw_defsz00;
				{	/* SawMill/expr.scm 11 */
					obj_t BgL_v4256z00_1615;

					BgL_v4256z00_1615 = create_vector((int) (((long) 0)));
					BgL_arg4488z00_1614 = BgL_v4256z00_1615;
				}
				BGl_iregz00zzsaw_exprz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4484z00_1610,
					BgL_arg4485z00_1611, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2iregzd2envz52zzsaw_exprz00,
					BGl_iregzd2nilzd2envz00zzsaw_exprz00,
					BGl_iregzf3zd2envz21zzsaw_exprz00, ((long) 8320164), BFALSE, BFALSE,
					BgL_arg4488z00_1614);
			}
			{	/* SawMill/expr.scm 12 */
				obj_t BgL_arg4489z00_1616;

				obj_t BgL_arg4490z00_1617;

				obj_t BgL_arg4493z00_1620;

				BgL_arg4489z00_1616 = CNST_TABLE_REF(((long) 22));
				BgL_arg4490z00_1617 = BGl_rtl_regz00zzsaw_defsz00;
				{	/* SawMill/expr.scm 12 */
					obj_t BgL_v4257z00_1621;

					BgL_v4257z00_1621 = create_vector((int) (((long) 0)));
					BgL_arg4493z00_1620 = BgL_v4257z00_1621;
				}
				BGl_pregz00zzsaw_exprz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4489z00_1616,
					BgL_arg4490z00_1617, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2pregzd2envz52zzsaw_exprz00,
					BGl_pregzd2nilzd2envz00zzsaw_exprz00,
					BGl_pregzf3zd2envz21zzsaw_exprz00, ((long) 8307035), BFALSE, BFALSE,
					BgL_arg4493z00_1620);
			}
			{	/* SawMill/expr.scm 13 */
				obj_t BgL_arg4494z00_1622;

				obj_t BgL_arg4495z00_1623;

				obj_t BgL_arg4498z00_1626;

				BgL_arg4494z00_1622 = CNST_TABLE_REF(((long) 23));
				BgL_arg4495z00_1623 = BGl_rtl_insz00zzsaw_defsz00;
				{	/* SawMill/expr.scm 13 */
					obj_t BgL_v4258z00_1627;

					BgL_v4258z00_1627 = create_vector((int) (((long) 0)));
					BgL_arg4498z00_1626 = BgL_v4258z00_1627;
				}
				BGl_inlinedz00zzsaw_exprz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4494z00_1622,
					BgL_arg4495z00_1623, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2inlinedzd2envz52zzsaw_exprz00,
					BGl_inlinedzd2nilzd2envz00zzsaw_exprz00,
					BGl_inlinedzf3zd2envz21zzsaw_exprz00, ((long) 63091748), BFALSE,
					BFALSE, BgL_arg4498z00_1626);
			}
			BGl_z52thezd2inlinedzd2nilz52zzsaw_exprz00 = BUNSPEC;
			BGl_z52thezd2pregzd2nilz52zzsaw_exprz00 = BUNSPEC;
			return (BGl_z52thezd2iregzd2nilz52zzsaw_exprz00 = BUNSPEC, BUNSPEC);
		}
	}



/* _inlined? */
	obj_t BGl__inlinedzf3zf3zzsaw_exprz00(obj_t BgL_envz00_3031,
		obj_t BgL_obj4170z00_3032)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 13 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4170z00_3032,
					BGl_inlinedz00zzsaw_exprz00));
		}
	}



/* widening-inlined */
	BgL_inlinedz00_bglt BGl_wideningzd2inlinedzd2zzsaw_exprz00()
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 13 */
			{	/* SawMill/expr.scm 13 */
				BgL_inlinedz00_bglt BgL_new4152z00_1628;

				BgL_new4152z00_1628 =
					((BgL_inlinedz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_inlinedz00_bgl))));
				return BgL_new4152z00_1628;
			}
		}
	}



/* _%allocate-inlined */
	obj_t BGl__z52allocatezd2inlinedz80zzsaw_exprz00(obj_t BgL_envz00_3029)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 13 */
			{	/* SawMill/expr.scm 13 */
				BgL_rtl_insz00_bglt BgL_auxz00_3898;

				{	/* SawMill/expr.scm 13 */
					BgL_rtl_insz00_bglt BgL_res4726z00_3126;

					{	/* SawMill/expr.scm 13 */
						BgL_rtl_insz00_bglt BgL_new4163z00_3124;

						BgL_new4163z00_3124 =
							((BgL_rtl_insz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_insz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4163z00_3124),
							BGl_classzd2numzd2zz__objectz00(BGl_inlinedz00zzsaw_exprz00));
						{	/* SawMill/expr.scm 13 */
							BgL_objectz00_bglt BgL_auxz00_3903;

							BgL_auxz00_3903 = (BgL_objectz00_bglt) (BgL_new4163z00_3124);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3903, BFALSE);
						}
						BgL_res4726z00_3126 = BgL_new4163z00_3124;
					}
					BgL_auxz00_3898 = BgL_res4726z00_3126;
				}
				return (obj_t) (BgL_auxz00_3898);
			}
		}
	}



/* inlined-nil */
	BgL_inlinedz00_bglt BGl_inlinedzd2nilzd2zzsaw_exprz00()
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 13 */
			if ((BGl_z52thezd2inlinedzd2nilz52zzsaw_exprz00 == BUNSPEC))
				{	/* SawMill/expr.scm 13 */
					{	/* SawMill/expr.scm 13 */
						BgL_rtl_insz00_bglt BgL_res4671z00_2721;

						{	/* SawMill/expr.scm 13 */
							BgL_rtl_insz00_bglt BgL_new4022z00_2717;

							BgL_new4022z00_2717 =
								((BgL_rtl_insz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_insz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4022z00_2717),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_insz00zzsaw_defsz00));
							{	/* SawMill/expr.scm 13 */
								BgL_objectz00_bglt BgL_auxz00_3913;

								BgL_auxz00_3913 = (BgL_objectz00_bglt) (BgL_new4022z00_2717);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3913, BFALSE);
							}
							BgL_res4671z00_2721 = BgL_new4022z00_2717;
						}
						BGl_z52thezd2inlinedzd2nilz52zzsaw_exprz00 =
							(obj_t) (BgL_res4671z00_2721);
					}
					{	/* SawMill/expr.scm 13 */
						BgL_rtl_funz00_bglt BgL_arg4504z00_1637;

						BgL_arg4504z00_1637 = BGl_rtl_funzd2nilzd2zzsaw_defsz00();
						{	/* SawMill/expr.scm 13 */
							BgL_rtl_insz00_bglt BgL_res4672z00_2733;

							{	/* SawMill/expr.scm 13 */
								BgL_rtl_insz00_bglt BgL_new4015z00_2722;

								BgL_new4015z00_2722 =
									(BgL_rtl_insz00_bglt)
									(BGl_z52thezd2inlinedzd2nilz52zzsaw_exprz00);
								{	/* SawMill/expr.scm 13 */
									obj_t BgL_loc4010z00_2728;

									obj_t BgL_z52spill4011z52_2729;

									obj_t BgL_dest4012z00_2730;

									BgL_rtl_funz00_bglt BgL_fun4013z00_2731;

									obj_t BgL_args4014z00_2732;

									BgL_loc4010z00_2728 = BUNSPEC;
									BgL_z52spill4011z52_2729 = BNIL;
									BgL_dest4012z00_2730 = BUNSPEC;
									BgL_fun4013z00_2731 = BgL_arg4504z00_1637;
									BgL_args4014z00_2732 = BNIL;
									((((BgL_rtl_insz00_bglt) CREF(BgL_new4015z00_2722))->
											BgL_locz00) = ((obj_t) BgL_loc4010z00_2728), BUNSPEC);
									((((BgL_rtl_insz00_bglt) CREF(BgL_new4015z00_2722))->
											BgL_z52spillz52) =
										((obj_t) BgL_z52spill4011z52_2729), BUNSPEC);
									((((BgL_rtl_insz00_bglt) CREF(BgL_new4015z00_2722))->
											BgL_destz00) = ((obj_t) BgL_dest4012z00_2730), BUNSPEC);
									((((BgL_rtl_insz00_bglt) CREF(BgL_new4015z00_2722))->
											BgL_funz00) =
										((BgL_rtl_funz00_bglt) BgL_fun4013z00_2731), BUNSPEC);
									((((BgL_rtl_insz00_bglt) CREF(BgL_new4015z00_2722))->
											BgL_argsz00) = ((obj_t) BgL_args4014z00_2732), BUNSPEC);
									BgL_res4672z00_2733 = BgL_new4015z00_2722;
							}} BgL_res4672z00_2733;
					}}
					{	/* SawMill/expr.scm 13 */
						long BgL_arg4506z00_1639;

						BgL_arg4506z00_1639 =
							BGl_classzd2numzd2zz__objectz00(BGl_inlinedz00zzsaw_exprz00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BGl_z52thezd2inlinedzd2nilz52zzsaw_exprz00),
							BgL_arg4506z00_1639);
					}
					{	/* SawMill/expr.scm 13 */
						BgL_inlinedz00_bglt BgL_arg4507z00_1640;

						BgL_arg4507z00_1640 = BGl_wideningzd2inlinedzd2zzsaw_exprz00();
						{	/* SawMill/expr.scm 13 */
							obj_t BgL_auxz00_3930;

							BgL_objectz00_bglt BgL_auxz00_3928;

							BgL_auxz00_3930 = (obj_t) (BgL_arg4507z00_1640);
							BgL_auxz00_3928 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2inlinedzd2nilz52zzsaw_exprz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3928, BgL_auxz00_3930);
				}}}
			else
				{	/* SawMill/expr.scm 13 */
					BFALSE;
				}
			return (BgL_inlinedz00_bglt) (BGl_z52thezd2inlinedzd2nilz52zzsaw_exprz00);
		}
	}



/* _inlined-nil */
	obj_t BGl__inlinedzd2nilzd2zzsaw_exprz00(obj_t BgL_envz00_3030)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 13 */
			return (obj_t) (BGl_inlinedzd2nilzd2zzsaw_exprz00());
		}
	}



/* _preg? */
	obj_t BGl__pregzf3zf3zzsaw_exprz00(obj_t BgL_envz00_3027,
		obj_t BgL_obj4127z00_3028)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 12 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4127z00_3028,
					BGl_pregz00zzsaw_exprz00));
		}
	}



/* _%allocate-preg */
	obj_t BGl__z52allocatezd2pregz80zzsaw_exprz00(obj_t BgL_envz00_3025)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 12 */
			{	/* SawMill/expr.scm 12 */
				BgL_rtl_regz00_bglt BgL_auxz00_3938;

				{	/* SawMill/expr.scm 12 */
					BgL_rtl_regz00_bglt BgL_res4727z00_3132;

					{	/* SawMill/expr.scm 12 */
						BgL_rtl_regz00_bglt BgL_new4120z00_3130;

						BgL_new4120z00_3130 =
							((BgL_rtl_regz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_regz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4120z00_3130),
							BGl_classzd2numzd2zz__objectz00(BGl_pregz00zzsaw_exprz00));
						{	/* SawMill/expr.scm 12 */
							BgL_objectz00_bglt BgL_auxz00_3943;

							BgL_auxz00_3943 = (BgL_objectz00_bglt) (BgL_new4120z00_3130);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3943, BFALSE);
						}
						BgL_res4727z00_3132 = BgL_new4120z00_3130;
					}
					BgL_auxz00_3938 = BgL_res4727z00_3132;
				}
				return (obj_t) (BgL_auxz00_3938);
			}
		}
	}



/* preg-nil */
	BgL_pregz00_bglt BGl_pregzd2nilzd2zzsaw_exprz00()
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 12 */
			if ((BGl_z52thezd2pregzd2nilz52zzsaw_exprz00 == BUNSPEC))
				{	/* SawMill/expr.scm 12 */
					{	/* SawMill/expr.scm 12 */
						BgL_rtl_regz00_bglt BgL_res4674z00_2753;

						{	/* SawMill/expr.scm 12 */
							BgL_rtl_regz00_bglt BgL_new3367z00_2749;

							BgL_new3367z00_2749 =
								((BgL_rtl_regz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_regz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3367z00_2749),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_regz00zzsaw_defsz00));
							{	/* SawMill/expr.scm 12 */
								BgL_objectz00_bglt BgL_auxz00_3953;

								BgL_auxz00_3953 = (BgL_objectz00_bglt) (BgL_new3367z00_2749);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3953, BFALSE);
							}
							BgL_res4674z00_2753 = BgL_new3367z00_2749;
						}
						BGl_z52thezd2pregzd2nilz52zzsaw_exprz00 =
							(obj_t) (BgL_res4674z00_2753);
					}
					{	/* SawMill/expr.scm 12 */
						BgL_typez00_bglt BgL_arg4512z00_1651;

						BgL_arg4512z00_1651 = BGl_typezd2nilzd2zztype_typez00();
						{	/* SawMill/expr.scm 12 */
							BgL_rtl_regz00_bglt BgL_res4675z00_2767;

							{	/* SawMill/expr.scm 12 */
								BgL_rtl_regz00_bglt BgL_new3359z00_2754;

								BgL_new3359z00_2754 =
									(BgL_rtl_regz00_bglt)
									(BGl_z52thezd2pregzd2nilz52zzsaw_exprz00);
								{	/* SawMill/expr.scm 12 */
									BgL_typez00_bglt BgL_type3353z00_2761;

									obj_t BgL_var3354z00_2762;

									obj_t BgL_onexprzf33355zf3_2763;

									obj_t BgL_name3356z00_2764;

									obj_t BgL_key3357z00_2765;

									obj_t BgL_hardware3358z00_2766;

									BgL_type3353z00_2761 = BgL_arg4512z00_1651;
									BgL_var3354z00_2762 = BUNSPEC;
									BgL_onexprzf33355zf3_2763 = BUNSPEC;
									BgL_name3356z00_2764 = BUNSPEC;
									BgL_key3357z00_2765 = BUNSPEC;
									BgL_hardware3358z00_2766 = BUNSPEC;
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3359z00_2754))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3353z00_2761), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3359z00_2754))->
											BgL_varz00) = ((obj_t) BgL_var3354z00_2762), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3359z00_2754))->
											BgL_onexprzf3zf3) =
										((obj_t) BgL_onexprzf33355zf3_2763), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3359z00_2754))->
											BgL_namez00) = ((obj_t) BgL_name3356z00_2764), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3359z00_2754))->
											BgL_keyz00) = ((obj_t) BgL_key3357z00_2765), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3359z00_2754))->
											BgL_hardwarez00) =
										((obj_t) BgL_hardware3358z00_2766), BUNSPEC);
									BgL_res4675z00_2767 = BgL_new3359z00_2754;
							}} BgL_res4675z00_2767;
					}}
					{	/* SawMill/expr.scm 12 */
						long BgL_arg4513z00_1652;

						BgL_arg4513z00_1652 =
							BGl_classzd2numzd2zz__objectz00(BGl_pregz00zzsaw_exprz00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BGl_z52thezd2pregzd2nilz52zzsaw_exprz00),
							BgL_arg4513z00_1652);
					}
					{	/* SawMill/expr.scm 12 */
						BgL_pregz00_bglt BgL_arg4514z00_1653;

						{	/* SawMill/expr.scm 12 */
							BgL_pregz00_bglt BgL_res4677z00_2779;

							{	/* SawMill/expr.scm 12 */
								BgL_pregz00_bglt BgL_new4102z00_2772;

								BgL_new4102z00_2772 =
									((BgL_pregz00_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_pregz00_bgl))));
								{	/* SawMill/expr.scm 12 */
									BgL_pregz00_bglt BgL_res4676z00_2778;

									{	/* SawMill/expr.scm 12 */
										BgL_pregz00_bglt BgL_new4116z00_2773;

										BgL_new4116z00_2773 = BgL_new4102z00_2772;
										{	/* SawMill/expr.scm 12 */
											obj_t BgL_index4114z00_2776;

											obj_t BgL_status4115z00_2777;

											BgL_index4114z00_2776 = BUNSPEC;
											BgL_status4115z00_2777 = BUNSPEC;
											((((BgL_pregz00_bglt) CREF(BgL_new4116z00_2773))->
													BgL_indexz00) =
												((obj_t) BgL_index4114z00_2776), BUNSPEC);
											((((BgL_pregz00_bglt) CREF(BgL_new4116z00_2773))->
													BgL_statusz00) =
												((obj_t) BgL_status4115z00_2777), BUNSPEC);
											BgL_res4676z00_2778 = BgL_new4116z00_2773;
									}} BgL_res4676z00_2778;
								}
								BgL_res4677z00_2779 = BgL_new4102z00_2772;
							}
							BgL_arg4514z00_1653 = BgL_res4677z00_2779;
						}
						{	/* SawMill/expr.scm 12 */
							obj_t BgL_auxz00_3973;

							BgL_objectz00_bglt BgL_auxz00_3971;

							BgL_auxz00_3973 = (obj_t) (BgL_arg4514z00_1653);
							BgL_auxz00_3971 =
								(BgL_objectz00_bglt) (BGl_z52thezd2pregzd2nilz52zzsaw_exprz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3971, BgL_auxz00_3973);
				}}}
			else
				{	/* SawMill/expr.scm 12 */
					BFALSE;
				}
			return (BgL_pregz00_bglt) (BGl_z52thezd2pregzd2nilz52zzsaw_exprz00);
		}
	}



/* _preg-nil */
	obj_t BGl__pregzd2nilzd2zzsaw_exprz00(obj_t BgL_envz00_3026)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 12 */
			return (obj_t) (BGl_pregzd2nilzd2zzsaw_exprz00());
		}
	}



/* _ireg? */
	obj_t BGl__iregzf3zf3zzsaw_exprz00(obj_t BgL_envz00_3023,
		obj_t BgL_obj4079z00_3024)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 11 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4079z00_3024,
					BGl_iregz00zzsaw_exprz00));
		}
	}



/* _%allocate-ireg */
	obj_t BGl__z52allocatezd2iregz80zzsaw_exprz00(obj_t BgL_envz00_3021)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 11 */
			{	/* SawMill/expr.scm 11 */
				BgL_rtl_regz00_bglt BgL_auxz00_3981;

				{	/* SawMill/expr.scm 11 */
					BgL_rtl_regz00_bglt BgL_res4728z00_3138;

					{	/* SawMill/expr.scm 11 */
						BgL_rtl_regz00_bglt BgL_new4072z00_3136;

						BgL_new4072z00_3136 =
							((BgL_rtl_regz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_regz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4072z00_3136),
							BGl_classzd2numzd2zz__objectz00(BGl_iregz00zzsaw_exprz00));
						{	/* SawMill/expr.scm 11 */
							BgL_objectz00_bglt BgL_auxz00_3986;

							BgL_auxz00_3986 = (BgL_objectz00_bglt) (BgL_new4072z00_3136);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3986, BFALSE);
						}
						BgL_res4728z00_3138 = BgL_new4072z00_3136;
					}
					BgL_auxz00_3981 = BgL_res4728z00_3138;
				}
				return (obj_t) (BgL_auxz00_3981);
			}
		}
	}



/* ireg-nil */
	BgL_iregz00_bglt BGl_iregzd2nilzd2zzsaw_exprz00()
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 11 */
			if ((BGl_z52thezd2iregzd2nilz52zzsaw_exprz00 == BUNSPEC))
				{	/* SawMill/expr.scm 11 */
					{	/* SawMill/expr.scm 11 */
						BgL_rtl_regz00_bglt BgL_res4679z00_2797;

						{	/* SawMill/expr.scm 11 */
							BgL_rtl_regz00_bglt BgL_new3367z00_2793;

							BgL_new3367z00_2793 =
								((BgL_rtl_regz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_regz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3367z00_2793),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_regz00zzsaw_defsz00));
							{	/* SawMill/expr.scm 11 */
								BgL_objectz00_bglt BgL_auxz00_3996;

								BgL_auxz00_3996 = (BgL_objectz00_bglt) (BgL_new3367z00_2793);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3996, BFALSE);
							}
							BgL_res4679z00_2797 = BgL_new3367z00_2793;
						}
						BGl_z52thezd2iregzd2nilz52zzsaw_exprz00 =
							(obj_t) (BgL_res4679z00_2797);
					}
					{	/* SawMill/expr.scm 11 */
						BgL_typez00_bglt BgL_arg4519z00_1664;

						BgL_arg4519z00_1664 = BGl_typezd2nilzd2zztype_typez00();
						{	/* SawMill/expr.scm 11 */
							BgL_rtl_regz00_bglt BgL_res4680z00_2811;

							{	/* SawMill/expr.scm 11 */
								BgL_rtl_regz00_bglt BgL_new3359z00_2798;

								BgL_new3359z00_2798 =
									(BgL_rtl_regz00_bglt)
									(BGl_z52thezd2iregzd2nilz52zzsaw_exprz00);
								{	/* SawMill/expr.scm 11 */
									BgL_typez00_bglt BgL_type3353z00_2805;

									obj_t BgL_var3354z00_2806;

									obj_t BgL_onexprzf33355zf3_2807;

									obj_t BgL_name3356z00_2808;

									obj_t BgL_key3357z00_2809;

									obj_t BgL_hardware3358z00_2810;

									BgL_type3353z00_2805 = BgL_arg4519z00_1664;
									BgL_var3354z00_2806 = BUNSPEC;
									BgL_onexprzf33355zf3_2807 = BUNSPEC;
									BgL_name3356z00_2808 = BUNSPEC;
									BgL_key3357z00_2809 = BUNSPEC;
									BgL_hardware3358z00_2810 = BUNSPEC;
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3359z00_2798))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3353z00_2805), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3359z00_2798))->
											BgL_varz00) = ((obj_t) BgL_var3354z00_2806), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3359z00_2798))->
											BgL_onexprzf3zf3) =
										((obj_t) BgL_onexprzf33355zf3_2807), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3359z00_2798))->
											BgL_namez00) = ((obj_t) BgL_name3356z00_2808), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3359z00_2798))->
											BgL_keyz00) = ((obj_t) BgL_key3357z00_2809), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3359z00_2798))->
											BgL_hardwarez00) =
										((obj_t) BgL_hardware3358z00_2810), BUNSPEC);
									BgL_res4680z00_2811 = BgL_new3359z00_2798;
							}} BgL_res4680z00_2811;
					}}
					{	/* SawMill/expr.scm 11 */
						long BgL_arg4520z00_1665;

						BgL_arg4520z00_1665 =
							BGl_classzd2numzd2zz__objectz00(BGl_iregz00zzsaw_exprz00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BGl_z52thezd2iregzd2nilz52zzsaw_exprz00),
							BgL_arg4520z00_1665);
					}
					{	/* SawMill/expr.scm 11 */
						BgL_iregz00_bglt BgL_arg4521z00_1666;

						{	/* SawMill/expr.scm 11 */
							BgL_iregz00_bglt BgL_res4682z00_2823;

							{	/* SawMill/expr.scm 11 */
								BgL_iregz00_bglt BgL_new4054z00_2816;

								BgL_new4054z00_2816 =
									((BgL_iregz00_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_iregz00_bgl))));
								{	/* SawMill/expr.scm 11 */
									BgL_iregz00_bglt BgL_res4681z00_2822;

									{	/* SawMill/expr.scm 11 */
										BgL_iregz00_bglt BgL_new4068z00_2817;

										BgL_new4068z00_2817 = BgL_new4054z00_2816;
										{	/* SawMill/expr.scm 11 */
											obj_t BgL_index4066z00_2820;

											obj_t BgL_status4067z00_2821;

											BgL_index4066z00_2820 = BUNSPEC;
											BgL_status4067z00_2821 = BUNSPEC;
											((((BgL_iregz00_bglt) CREF(BgL_new4068z00_2817))->
													BgL_indexz00) =
												((obj_t) BgL_index4066z00_2820), BUNSPEC);
											((((BgL_iregz00_bglt) CREF(BgL_new4068z00_2817))->
													BgL_statusz00) =
												((obj_t) BgL_status4067z00_2821), BUNSPEC);
											BgL_res4681z00_2822 = BgL_new4068z00_2817;
									}} BgL_res4681z00_2822;
								}
								BgL_res4682z00_2823 = BgL_new4054z00_2816;
							}
							BgL_arg4521z00_1666 = BgL_res4682z00_2823;
						}
						{	/* SawMill/expr.scm 11 */
							obj_t BgL_auxz00_4016;

							BgL_objectz00_bglt BgL_auxz00_4014;

							BgL_auxz00_4016 = (obj_t) (BgL_arg4521z00_1666);
							BgL_auxz00_4014 =
								(BgL_objectz00_bglt) (BGl_z52thezd2iregzd2nilz52zzsaw_exprz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4014, BgL_auxz00_4016);
				}}}
			else
				{	/* SawMill/expr.scm 11 */
					BFALSE;
				}
			return (BgL_iregz00_bglt) (BGl_z52thezd2iregzd2nilz52zzsaw_exprz00);
		}
	}



/* _ireg-nil */
	obj_t BGl__iregzd2nilzd2zzsaw_exprz00(obj_t BgL_envz00_3022)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 11 */
			return (obj_t) (BGl_iregzd2nilzd2zzsaw_exprz00());
		}
	}



/* _rtl_ins? */
	obj_t BGl__rtl_inszf3zf3zzsaw_exprz00(obj_t BgL_envz00_3019,
		obj_t BgL_obj4023z00_3020)
	{
		AN_OBJECT;
		{	/* SawMill/defs.scm 67 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4023z00_3020,
					BGl_rtl_insz00zzsaw_defsz00));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_exprz00()
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 1 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_acceptzd2foldingzf3zd2envzf3zzsaw_exprz00,
				BGl_acceptzd2foldingzf3zd2defa4259zd2envz21zzsaw_exprz00,
				BGl_backendz00zzbackend_backendz00, BGl_string4698z00zzsaw_exprz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00,
				BGl_effectszd2default4261zd2envz00zzsaw_exprz00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string4699z00zzsaw_exprz00);
		}
	}



/* accept-folding? */
	BGL_EXPORTED_DEF obj_t
		BGl_acceptzd2foldingzf3z21zzsaw_exprz00(BgL_backendz00_bglt BgL_bz00_17,
		obj_t BgL_insz00_18, obj_t BgL_treez00_19)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 165 */
			{	/* SawMill/expr.scm 165 */
				obj_t BgL_method4260z00_2843;

				{	/* SawMill/expr.scm 165 */
					BgL_objectz00_bglt BgL_objz00_2844;

					BgL_objz00_2844 = (BgL_objectz00_bglt) (BgL_bz00_17);
					{	/* SawMill/expr.scm 165 */
						long BgL_objzd2classzd2numz00_2845;

						BgL_objzd2classzd2numz00_2845 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2844);
						{	/* SawMill/expr.scm 165 */
							obj_t BgL_arg2643z00_2846;

							BgL_arg2643z00_2846 =
								PROCEDURE_REF(BGl_acceptzd2foldingzf3zd2envzf3zzsaw_exprz00,
								(int) (((long) 1)));
							{	/* SawMill/expr.scm 165 */
								obj_t BgL_arrayz00_2848;

								int BgL_offsetz00_2849;

								BgL_arrayz00_2848 = BgL_arg2643z00_2846;
								BgL_offsetz00_2849 = (int) (BgL_objzd2classzd2numz00_2845);
								{	/* SawMill/expr.scm 165 */
									long BgL_offsetz00_2850;

									BgL_offsetz00_2850 =
										((long) (BgL_offsetz00_2849) - OBJECT_TYPE);
									{	/* SawMill/expr.scm 165 */
										long BgL_modz00_2851;

										{	/* SawMill/expr.scm 165 */
											int BgL_arg2645z00_2852;

											BgL_arg2645z00_2852 = (int) (((long) 16));
											{	/* SawMill/expr.scm 165 */
												long BgL_auxz00_4034;

												BgL_auxz00_4034 = (long) (BgL_arg2645z00_2852);
												BgL_modz00_2851 =
													(BgL_offsetz00_2850 / BgL_auxz00_4034);
										}}
										{	/* SawMill/expr.scm 165 */
											long BgL_restz00_2853;

											{	/* SawMill/expr.scm 165 */
												int BgL_arg2644z00_2854;

												BgL_arg2644z00_2854 = (int) (((long) 16));
												{	/* SawMill/expr.scm 165 */
													long BgL_auxz00_4038;

													BgL_auxz00_4038 = (long) (BgL_arg2644z00_2854);
													BgL_restz00_2853 =
														(BgL_offsetz00_2850 % BgL_auxz00_4038);
											}}
											{	/* SawMill/expr.scm 165 */

												BgL_method4260z00_2843 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2848,
														(int) (BgL_modz00_2851)), (int) (BgL_restz00_2853));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method4260z00_2843) (BgL_method4260z00_2843,
					(obj_t) (BgL_bz00_17), BgL_insz00_18, BgL_treez00_19, BEOA);
			}
		}
	}



/* _accept-folding? */
	obj_t BGl__acceptzd2foldingzf3z21zzsaw_exprz00(obj_t BgL_envz00_3010,
		obj_t BgL_bz00_3011, obj_t BgL_insz00_3012, obj_t BgL_treez00_3013)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 165 */
			return
				BGl_acceptzd2foldingzf3z21zzsaw_exprz00(
				(BgL_backendz00_bglt) (BgL_bz00_3011), BgL_insz00_3012,
				BgL_treez00_3013);
		}
	}



/* _accept-folding?-defa4259 */
	obj_t BGl__acceptzd2foldingzf3zd2defa4259zf3zzsaw_exprz00(obj_t
		BgL_envz00_3033, obj_t BgL_bz00_3034, obj_t BgL_insz00_3035,
		obj_t BgL_treez00_3036)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 1 */
			return BBOOL(((bool_t) 1));
		}
	}



/* effects */
	obj_t BGl_effectsz00zzsaw_exprz00(BgL_rtl_funz00_bglt BgL_funz00_31)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 227 */
			{	/* SawMill/expr.scm 227 */
				obj_t BgL_method4262z00_2868;

				{	/* SawMill/expr.scm 227 */
					BgL_objectz00_bglt BgL_objz00_2869;

					BgL_objz00_2869 = (BgL_objectz00_bglt) (BgL_funz00_31);
					{	/* SawMill/expr.scm 227 */
						long BgL_objzd2classzd2numz00_2870;

						BgL_objzd2classzd2numz00_2870 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2869);
						{	/* SawMill/expr.scm 227 */
							obj_t BgL_arg2643z00_2871;

							BgL_arg2643z00_2871 =
								PROCEDURE_REF(BGl_effectszd2envzd2zzsaw_exprz00,
								(int) (((long) 1)));
							{	/* SawMill/expr.scm 227 */
								obj_t BgL_arrayz00_2873;

								int BgL_offsetz00_2874;

								BgL_arrayz00_2873 = BgL_arg2643z00_2871;
								BgL_offsetz00_2874 = (int) (BgL_objzd2classzd2numz00_2870);
								{	/* SawMill/expr.scm 227 */
									long BgL_offsetz00_2875;

									BgL_offsetz00_2875 =
										((long) (BgL_offsetz00_2874) - OBJECT_TYPE);
									{	/* SawMill/expr.scm 227 */
										long BgL_modz00_2876;

										{	/* SawMill/expr.scm 227 */
											int BgL_arg2645z00_2877;

											BgL_arg2645z00_2877 = (int) (((long) 16));
											{	/* SawMill/expr.scm 227 */
												long BgL_auxz00_4059;

												BgL_auxz00_4059 = (long) (BgL_arg2645z00_2877);
												BgL_modz00_2876 =
													(BgL_offsetz00_2875 / BgL_auxz00_4059);
										}}
										{	/* SawMill/expr.scm 227 */
											long BgL_restz00_2878;

											{	/* SawMill/expr.scm 227 */
												int BgL_arg2644z00_2879;

												BgL_arg2644z00_2879 = (int) (((long) 16));
												{	/* SawMill/expr.scm 227 */
													long BgL_auxz00_4063;

													BgL_auxz00_4063 = (long) (BgL_arg2644z00_2879);
													BgL_restz00_2878 =
														(BgL_offsetz00_2875 % BgL_auxz00_4063);
											}}
											{	/* SawMill/expr.scm 227 */

												BgL_method4262z00_2868 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2873,
														(int) (BgL_modz00_2876)), (int) (BgL_restz00_2878));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method4262z00_2868) (BgL_method4262z00_2868,
					(obj_t) (BgL_funz00_31), BEOA);
			}
		}
	}



/* _effects */
	obj_t BGl__effectsz00zzsaw_exprz00(obj_t BgL_envz00_3008,
		obj_t BgL_funz00_3009)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 227 */
			return
				BGl_effectsz00zzsaw_exprz00((BgL_rtl_funz00_bglt) (BgL_funz00_3009));
		}
	}



/* _effects-default4261 */
	obj_t BGl__effectszd2default4261zd2zzsaw_exprz00(obj_t BgL_envz00_3037,
		obj_t BgL_funz00_3038)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 1 */
			return (obj_t) (BGl_za2noeffectza2z00zzsaw_exprz00);
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_exprz00()
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_loadgz00zzsaw_defsz00,
				BGl_proc4700z00zzsaw_exprz00, BGl_string4699z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_storegz00zzsaw_defsz00,
				BGl_proc4701z00zzsaw_exprz00, BGl_string4699z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_vrefz00zzsaw_defsz00,
				BGl_proc4702z00zzsaw_exprz00, BGl_string4699z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_vsetz00zzsaw_defsz00,
				BGl_proc4703z00zzsaw_exprz00, BGl_string4699z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_boxrefz00zzsaw_defsz00,
				BGl_proc4704z00zzsaw_exprz00, BGl_string4699z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_boxsetz00zzsaw_defsz00,
				BGl_proc4705z00zzsaw_exprz00, BGl_string4699z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_getfieldz00zzsaw_defsz00,
				BGl_proc4706z00zzsaw_exprz00, BGl_string4699z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_setfieldz00zzsaw_defsz00,
				BGl_proc4707z00zzsaw_exprz00, BGl_string4699z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_applyz00zzsaw_defsz00,
				BGl_proc4708z00zzsaw_exprz00, BGl_string4699z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00,
				BGl_rtl_lightfuncallz00zzsaw_defsz00, BGl_proc4709z00zzsaw_exprz00,
				BGl_string4699z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_funcallz00zzsaw_defsz00,
				BGl_proc4710z00zzsaw_exprz00, BGl_string4699z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_pragmaz00zzsaw_defsz00,
				BGl_proc4711z00zzsaw_exprz00, BGl_string4699z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_protectz00zzsaw_defsz00,
				BGl_proc4712z00zzsaw_exprz00, BGl_string4699z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_callz00zzsaw_defsz00,
				BGl_proc4713z00zzsaw_exprz00, BGl_string4699z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_inlinedz00zzsaw_exprz00, BGl_proc4714z00zzsaw_exprz00,
				BGl_string4715z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_inlinedz00zzsaw_exprz00, BGl_proc4716z00zzsaw_exprz00,
				BGl_string4717z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_pregz00zzsaw_exprz00,
				BGl_proc4718z00zzsaw_exprz00, BGl_string4715z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_pregz00zzsaw_exprz00, BGl_proc4719z00zzsaw_exprz00,
				BGl_string4717z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_iregz00zzsaw_exprz00,
				BGl_proc4720z00zzsaw_exprz00, BGl_string4715z00zzsaw_exprz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_iregz00zzsaw_exprz00, BGl_proc4721z00zzsaw_exprz00,
				BGl_string4717z00zzsaw_exprz00);
		}
	}



/* struct+object->objec4305 */
	obj_t BGl_structzb2objectzd2ze3objec4305z83zzsaw_exprz00(obj_t
		BgL_envz00_3064, obj_t BgL_oz00_3065, obj_t BgL_sz00_3066)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 11 */
			{
				BgL_iregz00_bglt BgL_oz00_2349;

				obj_t BgL_sz00_2350;

				{	/* SawMill/expr.scm 11 */
					BgL_iregz00_bglt BgL_auxz00_4096;

					BgL_oz00_2349 = (BgL_iregz00_bglt) (BgL_oz00_3065);
					BgL_sz00_2350 = BgL_sz00_3066;
					{

						{	/* SawMill/expr.scm 11 */
							obj_t BgL_old4076z00_2353;

							obj_t BgL_aux4077z00_2354;

							{	/* SawMill/expr.scm 11 */
								obj_t BgL_nextzd2method4304zd2_2360;

								BgL_nextzd2method4304zd2_2360 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2349),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_iregz00zzsaw_exprz00);
								if (PROCEDUREP(BgL_nextzd2method4304zd2_2360))
									{	/* SawMill/expr.scm 11 */
										BgL_old4076z00_2353 =
											PROCEDURE_ENTRY(BgL_nextzd2method4304zd2_2360)
											(BgL_nextzd2method4304zd2_2360, (obj_t) (BgL_oz00_2349),
											BgL_sz00_2350, BEOA);
									}
								else
									{	/* SawMill/expr.scm 11 */
										BgL_old4076z00_2353 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2349), BgL_sz00_2350));
									}
							}
							BgL_aux4077z00_2354 =
								STRUCT_REF(BgL_sz00_2350, (int) (((long) 0)));
							{	/* SawMill/expr.scm 11 */
								BgL_iregz00_bglt BgL_new4078z00_2355;

								BgL_new4078z00_2355 =
									((BgL_iregz00_bglt) (BgL_old4076z00_2353));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4078z00_2355),
									BGl_classzd2numzd2zz__objectz00(BGl_iregz00zzsaw_exprz00));
								{	/* SawMill/expr.scm 11 */
									BgL_iregz00_bglt BgL_arg4652z00_2357;

									{	/* SawMill/expr.scm 11 */
										obj_t BgL_arg4653z00_2358;

										obj_t BgL_arg4654z00_2359;

										BgL_arg4653z00_2358 =
											STRUCT_REF(BgL_aux4077z00_2354, (int) (((long) 0)));
										BgL_arg4654z00_2359 =
											STRUCT_REF(BgL_aux4077z00_2354, (int) (((long) 1)));
										{	/* SawMill/expr.scm 11 */
											BgL_iregz00_bglt BgL_res4693z00_2995;

											{	/* SawMill/expr.scm 11 */
												BgL_iregz00_bglt BgL_new4054z00_2988;

												BgL_new4054z00_2988 =
													((BgL_iregz00_bglt) BREF(GC_MALLOC(sizeof(struct
																BgL_iregz00_bgl))));
												{	/* SawMill/expr.scm 11 */
													BgL_iregz00_bglt BgL_res4692z00_2994;

													{	/* SawMill/expr.scm 11 */
														BgL_iregz00_bglt BgL_new4068z00_2989;

														BgL_new4068z00_2989 = BgL_new4054z00_2988;
														{	/* SawMill/expr.scm 11 */
															obj_t BgL_index4066z00_2992;

															obj_t BgL_status4067z00_2993;

															BgL_index4066z00_2992 = BgL_arg4653z00_2358;
															BgL_status4067z00_2993 = BgL_arg4654z00_2359;
															((((BgL_iregz00_bglt) CREF(BgL_new4068z00_2989))->
																	BgL_indexz00) =
																((obj_t) BgL_index4066z00_2992), BUNSPEC);
															((((BgL_iregz00_bglt) CREF(BgL_new4068z00_2989))->
																	BgL_statusz00) =
																((obj_t) BgL_status4067z00_2993), BUNSPEC);
															BgL_res4692z00_2994 = BgL_new4068z00_2989;
													}} BgL_res4692z00_2994;
												}
												BgL_res4693z00_2995 = BgL_new4054z00_2988;
											}
											BgL_arg4652z00_2357 = BgL_res4693z00_2995;
									}}
									{	/* SawMill/expr.scm 11 */
										obj_t BgL_auxz00_4122;

										BgL_objectz00_bglt BgL_auxz00_4120;

										BgL_auxz00_4122 = (obj_t) (BgL_arg4652z00_2357);
										BgL_auxz00_4120 =
											(BgL_objectz00_bglt) (BgL_new4078z00_2355);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_4120, BgL_auxz00_4122);
								}}
								BgL_auxz00_4096 = BgL_new4078z00_2355;
					}}}
					return (obj_t) (BgL_auxz00_4096);
				}
			}
		}
	}



/* object->struct-ireg4302 */
	obj_t BGl_objectzd2ze3structzd2ireg4302ze3zzsaw_exprz00(obj_t BgL_envz00_3067,
		obj_t BgL_obj4073z00_3068)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 11 */
			{
				BgL_iregz00_bglt BgL_obj4073z00_2337;

				BgL_obj4073z00_2337 = (BgL_iregz00_bglt) (BgL_obj4073z00_3068);
				{

					{	/* SawMill/expr.scm 11 */
						obj_t BgL_res4074z00_2340;

						{	/* SawMill/expr.scm 11 */
							obj_t BgL_nextzd2method4301zd2_2347;

							BgL_nextzd2method4301zd2_2347 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4073z00_2337),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_iregz00zzsaw_exprz00);
							if (PROCEDUREP(BgL_nextzd2method4301zd2_2347))
								{	/* SawMill/expr.scm 11 */
									BgL_res4074z00_2340 =
										PROCEDURE_ENTRY(BgL_nextzd2method4301zd2_2347)
										(BgL_nextzd2method4301zd2_2347,
										(obj_t) (BgL_obj4073z00_2337), BEOA);
								}
							else
								{	/* SawMill/expr.scm 11 */
									BgL_res4074z00_2340 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4073z00_2337));
								}
						}
						{	/* SawMill/expr.scm 11 */
							obj_t BgL_aux4075z00_2341;

							{	/* SawMill/expr.scm 11 */
								obj_t BgL_keyz00_2957;

								BgL_keyz00_2957 = CNST_TABLE_REF(((long) 21));
								BgL_aux4075z00_2341 =
									make_struct(BgL_keyz00_2957, (int) (((long) 2)), BUNSPEC);
							}
							{	/* SawMill/expr.scm 11 */
								obj_t BgL_arg4645z00_2343;

								{
									obj_t BgL_auxz00_4139;

									{	/* SawMill/expr.scm 11 */
										BgL_objectz00_bglt BgL_auxz00_4140;

										BgL_auxz00_4140 =
											(BgL_objectz00_bglt) (BgL_obj4073z00_2337);
										BgL_auxz00_4139 = BGL_OBJECT_WIDENING(BgL_auxz00_4140);
									}
									BgL_arg4645z00_2343 =
										(((BgL_iregz00_bglt) CREF(BgL_auxz00_4139))->BgL_indexz00);
								}
								{	/* SawMill/expr.scm 11 */
									int BgL_auxz00_4144;

									BgL_auxz00_4144 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4075z00_2341, BgL_auxz00_4144,
										BgL_arg4645z00_2343);
							}}
							{	/* SawMill/expr.scm 11 */
								obj_t BgL_arg4648z00_2345;

								{
									obj_t BgL_auxz00_4147;

									{	/* SawMill/expr.scm 11 */
										BgL_objectz00_bglt BgL_auxz00_4148;

										BgL_auxz00_4148 =
											(BgL_objectz00_bglt) (BgL_obj4073z00_2337);
										BgL_auxz00_4147 = BGL_OBJECT_WIDENING(BgL_auxz00_4148);
									}
									BgL_arg4648z00_2345 =
										(((BgL_iregz00_bglt) CREF(BgL_auxz00_4147))->BgL_statusz00);
								}
								{	/* SawMill/expr.scm 11 */
									int BgL_auxz00_4152;

									BgL_auxz00_4152 = (int) (((long) 1));
									STRUCT_SET(BgL_aux4075z00_2341, BgL_auxz00_4152,
										BgL_arg4648z00_2345);
							}}
							{	/* SawMill/expr.scm 11 */
								int BgL_auxz00_4155;

								BgL_auxz00_4155 = (int) (((long) 0));
								STRUCT_SET(BgL_res4074z00_2340, BgL_auxz00_4155,
									BgL_aux4075z00_2341);
							}
							{	/* SawMill/expr.scm 11 */
								obj_t BgL_auxz00_4158;

								BgL_auxz00_4158 = STRUCT_KEY(BgL_res4074z00_2340);
								STRUCT_KEY_SET(BgL_aux4075z00_2341, BgL_auxz00_4158);
							}
							{	/* SawMill/expr.scm 11 */
								obj_t BgL_kz00_2976;

								BgL_kz00_2976 = CNST_TABLE_REF(((long) 21));
								STRUCT_KEY_SET(BgL_res4074z00_2340, BgL_kz00_2976);
							}
							return BgL_res4074z00_2340;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4300 */
	obj_t BGl_structzb2objectzd2ze3objec4300z83zzsaw_exprz00(obj_t
		BgL_envz00_3069, obj_t BgL_oz00_3070, obj_t BgL_sz00_3071)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 12 */
			{
				BgL_pregz00_bglt BgL_oz00_2324;

				obj_t BgL_sz00_2325;

				{	/* SawMill/expr.scm 12 */
					BgL_pregz00_bglt BgL_auxz00_4164;

					BgL_oz00_2324 = (BgL_pregz00_bglt) (BgL_oz00_3070);
					BgL_sz00_2325 = BgL_sz00_3071;
					{

						{	/* SawMill/expr.scm 12 */
							obj_t BgL_old4124z00_2328;

							obj_t BgL_aux4125z00_2329;

							{	/* SawMill/expr.scm 12 */
								obj_t BgL_nextzd2method4299zd2_2335;

								BgL_nextzd2method4299zd2_2335 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2324),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_pregz00zzsaw_exprz00);
								if (PROCEDUREP(BgL_nextzd2method4299zd2_2335))
									{	/* SawMill/expr.scm 12 */
										BgL_old4124z00_2328 =
											PROCEDURE_ENTRY(BgL_nextzd2method4299zd2_2335)
											(BgL_nextzd2method4299zd2_2335, (obj_t) (BgL_oz00_2324),
											BgL_sz00_2325, BEOA);
									}
								else
									{	/* SawMill/expr.scm 12 */
										BgL_old4124z00_2328 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2324), BgL_sz00_2325));
									}
							}
							BgL_aux4125z00_2329 =
								STRUCT_REF(BgL_sz00_2325, (int) (((long) 0)));
							{	/* SawMill/expr.scm 12 */
								BgL_pregz00_bglt BgL_new4126z00_2330;

								BgL_new4126z00_2330 =
									((BgL_pregz00_bglt) (BgL_old4124z00_2328));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4126z00_2330),
									BGl_classzd2numzd2zz__objectz00(BGl_pregz00zzsaw_exprz00));
								{	/* SawMill/expr.scm 12 */
									BgL_pregz00_bglt BgL_arg4640z00_2332;

									{	/* SawMill/expr.scm 12 */
										obj_t BgL_arg4641z00_2333;

										obj_t BgL_arg4642z00_2334;

										BgL_arg4641z00_2333 =
											STRUCT_REF(BgL_aux4125z00_2329, (int) (((long) 0)));
										BgL_arg4642z00_2334 =
											STRUCT_REF(BgL_aux4125z00_2329, (int) (((long) 1)));
										{	/* SawMill/expr.scm 12 */
											BgL_pregz00_bglt BgL_res4690z00_2955;

											{	/* SawMill/expr.scm 12 */
												BgL_pregz00_bglt BgL_new4102z00_2948;

												BgL_new4102z00_2948 =
													((BgL_pregz00_bglt) BREF(GC_MALLOC(sizeof(struct
																BgL_pregz00_bgl))));
												{	/* SawMill/expr.scm 12 */
													BgL_pregz00_bglt BgL_res4689z00_2954;

													{	/* SawMill/expr.scm 12 */
														BgL_pregz00_bglt BgL_new4116z00_2949;

														BgL_new4116z00_2949 = BgL_new4102z00_2948;
														{	/* SawMill/expr.scm 12 */
															obj_t BgL_index4114z00_2952;

															obj_t BgL_status4115z00_2953;

															BgL_index4114z00_2952 = BgL_arg4641z00_2333;
															BgL_status4115z00_2953 = BgL_arg4642z00_2334;
															((((BgL_pregz00_bglt) CREF(BgL_new4116z00_2949))->
																	BgL_indexz00) =
																((obj_t) BgL_index4114z00_2952), BUNSPEC);
															((((BgL_pregz00_bglt) CREF(BgL_new4116z00_2949))->
																	BgL_statusz00) =
																((obj_t) BgL_status4115z00_2953), BUNSPEC);
															BgL_res4689z00_2954 = BgL_new4116z00_2949;
													}} BgL_res4689z00_2954;
												}
												BgL_res4690z00_2955 = BgL_new4102z00_2948;
											}
											BgL_arg4640z00_2332 = BgL_res4690z00_2955;
									}}
									{	/* SawMill/expr.scm 12 */
										obj_t BgL_auxz00_4190;

										BgL_objectz00_bglt BgL_auxz00_4188;

										BgL_auxz00_4190 = (obj_t) (BgL_arg4640z00_2332);
										BgL_auxz00_4188 =
											(BgL_objectz00_bglt) (BgL_new4126z00_2330);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_4188, BgL_auxz00_4190);
								}}
								BgL_auxz00_4164 = BgL_new4126z00_2330;
					}}}
					return (obj_t) (BgL_auxz00_4164);
				}
			}
		}
	}



/* object->struct-preg4298 */
	obj_t BGl_objectzd2ze3structzd2preg4298ze3zzsaw_exprz00(obj_t BgL_envz00_3072,
		obj_t BgL_obj4121z00_3073)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 12 */
			{
				BgL_pregz00_bglt BgL_obj4121z00_2312;

				BgL_obj4121z00_2312 = (BgL_pregz00_bglt) (BgL_obj4121z00_3073);
				{

					{	/* SawMill/expr.scm 12 */
						obj_t BgL_res4122z00_2315;

						{	/* SawMill/expr.scm 12 */
							obj_t BgL_nextzd2method4297zd2_2322;

							BgL_nextzd2method4297zd2_2322 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4121z00_2312),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_pregz00zzsaw_exprz00);
							if (PROCEDUREP(BgL_nextzd2method4297zd2_2322))
								{	/* SawMill/expr.scm 12 */
									BgL_res4122z00_2315 =
										PROCEDURE_ENTRY(BgL_nextzd2method4297zd2_2322)
										(BgL_nextzd2method4297zd2_2322,
										(obj_t) (BgL_obj4121z00_2312), BEOA);
								}
							else
								{	/* SawMill/expr.scm 12 */
									BgL_res4122z00_2315 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4121z00_2312));
								}
						}
						{	/* SawMill/expr.scm 12 */
							obj_t BgL_aux4123z00_2316;

							{	/* SawMill/expr.scm 12 */
								obj_t BgL_keyz00_2917;

								BgL_keyz00_2917 = CNST_TABLE_REF(((long) 22));
								BgL_aux4123z00_2316 =
									make_struct(BgL_keyz00_2917, (int) (((long) 2)), BUNSPEC);
							}
							{	/* SawMill/expr.scm 12 */
								obj_t BgL_arg4634z00_2318;

								{
									obj_t BgL_auxz00_4207;

									{	/* SawMill/expr.scm 12 */
										BgL_objectz00_bglt BgL_auxz00_4208;

										BgL_auxz00_4208 =
											(BgL_objectz00_bglt) (BgL_obj4121z00_2312);
										BgL_auxz00_4207 = BGL_OBJECT_WIDENING(BgL_auxz00_4208);
									}
									BgL_arg4634z00_2318 =
										(((BgL_pregz00_bglt) CREF(BgL_auxz00_4207))->BgL_indexz00);
								}
								{	/* SawMill/expr.scm 12 */
									int BgL_auxz00_4212;

									BgL_auxz00_4212 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4123z00_2316, BgL_auxz00_4212,
										BgL_arg4634z00_2318);
							}}
							{	/* SawMill/expr.scm 12 */
								obj_t BgL_arg4636z00_2320;

								{
									obj_t BgL_auxz00_4215;

									{	/* SawMill/expr.scm 12 */
										BgL_objectz00_bglt BgL_auxz00_4216;

										BgL_auxz00_4216 =
											(BgL_objectz00_bglt) (BgL_obj4121z00_2312);
										BgL_auxz00_4215 = BGL_OBJECT_WIDENING(BgL_auxz00_4216);
									}
									BgL_arg4636z00_2320 =
										(((BgL_pregz00_bglt) CREF(BgL_auxz00_4215))->BgL_statusz00);
								}
								{	/* SawMill/expr.scm 12 */
									int BgL_auxz00_4220;

									BgL_auxz00_4220 = (int) (((long) 1));
									STRUCT_SET(BgL_aux4123z00_2316, BgL_auxz00_4220,
										BgL_arg4636z00_2320);
							}}
							{	/* SawMill/expr.scm 12 */
								int BgL_auxz00_4223;

								BgL_auxz00_4223 = (int) (((long) 0));
								STRUCT_SET(BgL_res4122z00_2315, BgL_auxz00_4223,
									BgL_aux4123z00_2316);
							}
							{	/* SawMill/expr.scm 12 */
								obj_t BgL_auxz00_4226;

								BgL_auxz00_4226 = STRUCT_KEY(BgL_res4122z00_2315);
								STRUCT_KEY_SET(BgL_aux4123z00_2316, BgL_auxz00_4226);
							}
							{	/* SawMill/expr.scm 12 */
								obj_t BgL_kz00_2936;

								BgL_kz00_2936 = CNST_TABLE_REF(((long) 22));
								STRUCT_KEY_SET(BgL_res4122z00_2315, BgL_kz00_2936);
							}
							return BgL_res4122z00_2315;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4296 */
	obj_t BGl_structzb2objectzd2ze3objec4296z83zzsaw_exprz00(obj_t
		BgL_envz00_3074, obj_t BgL_oz00_3075, obj_t BgL_sz00_3076)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 13 */
			{
				BgL_inlinedz00_bglt BgL_oz00_2301;

				obj_t BgL_sz00_2302;

				{	/* SawMill/expr.scm 13 */
					BgL_inlinedz00_bglt BgL_auxz00_4232;

					BgL_oz00_2301 = (BgL_inlinedz00_bglt) (BgL_oz00_3075);
					BgL_sz00_2302 = BgL_sz00_3076;
					{

						{	/* SawMill/expr.scm 13 */
							obj_t BgL_old4167z00_2305;

							{	/* SawMill/expr.scm 13 */
								obj_t BgL_nextzd2method4295zd2_2310;

								BgL_nextzd2method4295zd2_2310 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2301),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_inlinedz00zzsaw_exprz00);
								if (PROCEDUREP(BgL_nextzd2method4295zd2_2310))
									{	/* SawMill/expr.scm 13 */
										BgL_old4167z00_2305 =
											PROCEDURE_ENTRY(BgL_nextzd2method4295zd2_2310)
											(BgL_nextzd2method4295zd2_2310, (obj_t) (BgL_oz00_2301),
											BgL_sz00_2302, BEOA);
									}
								else
									{	/* SawMill/expr.scm 13 */
										BgL_old4167z00_2305 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2301), BgL_sz00_2302));
									}
							}
							{	/* SawMill/expr.scm 13 */
								BgL_inlinedz00_bglt BgL_new4169z00_2307;

								BgL_new4169z00_2307 =
									((BgL_inlinedz00_bglt) (BgL_old4167z00_2305));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4169z00_2307),
									BGl_classzd2numzd2zz__objectz00(BGl_inlinedz00zzsaw_exprz00));
								{	/* SawMill/expr.scm 13 */
									BgL_inlinedz00_bglt BgL_arg4631z00_2309;

									BgL_arg4631z00_2309 =
										BGl_wideningzd2inlinedzd2zzsaw_exprz00();
									{	/* SawMill/expr.scm 13 */
										obj_t BgL_auxz00_4250;

										BgL_objectz00_bglt BgL_auxz00_4248;

										BgL_auxz00_4250 = (obj_t) (BgL_arg4631z00_2309);
										BgL_auxz00_4248 =
											(BgL_objectz00_bglt) (BgL_new4169z00_2307);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_4248, BgL_auxz00_4250);
									}
								}
								BgL_auxz00_4232 = BgL_new4169z00_2307;
							}
						}
					}
					return (obj_t) (BgL_auxz00_4232);
				}
			}
		}
	}



/* object->struct-inlin4294 */
	obj_t BGl_objectzd2ze3structzd2inlin4294ze3zzsaw_exprz00(obj_t
		BgL_envz00_3077, obj_t BgL_obj4164z00_3078)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 13 */
			{
				BgL_inlinedz00_bglt BgL_obj4164z00_2293;

				BgL_obj4164z00_2293 = (BgL_inlinedz00_bglt) (BgL_obj4164z00_3078);
				{

					{	/* SawMill/expr.scm 13 */
						obj_t BgL_res4165z00_2296;

						{	/* SawMill/expr.scm 13 */
							obj_t BgL_nextzd2method4293zd2_2299;

							BgL_nextzd2method4293zd2_2299 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4164z00_2293),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_inlinedz00zzsaw_exprz00);
							if (PROCEDUREP(BgL_nextzd2method4293zd2_2299))
								{	/* SawMill/expr.scm 13 */
									BgL_res4165z00_2296 =
										PROCEDURE_ENTRY(BgL_nextzd2method4293zd2_2299)
										(BgL_nextzd2method4293zd2_2299,
										(obj_t) (BgL_obj4164z00_2293), BEOA);
								}
							else
								{	/* SawMill/expr.scm 13 */
									BgL_res4165z00_2296 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4164z00_2293));
								}
						}
						{	/* SawMill/expr.scm 13 */
							obj_t BgL_aux4166z00_2297;

							{	/* SawMill/expr.scm 13 */
								obj_t BgL_keyz00_2899;

								BgL_keyz00_2899 = CNST_TABLE_REF(((long) 23));
								BgL_aux4166z00_2297 =
									make_struct(BgL_keyz00_2899, (int) (((long) 0)), BUNSPEC);
							}
							{	/* SawMill/expr.scm 13 */
								int BgL_auxz00_4267;

								BgL_auxz00_4267 = (int) (((long) 0));
								STRUCT_SET(BgL_res4165z00_2296, BgL_auxz00_4267,
									BgL_aux4166z00_2297);
							}
							{	/* SawMill/expr.scm 13 */
								obj_t BgL_auxz00_4270;

								BgL_auxz00_4270 = STRUCT_KEY(BgL_res4165z00_2296);
								STRUCT_KEY_SET(BgL_aux4166z00_2297, BgL_auxz00_4270);
							}
							{	/* SawMill/expr.scm 13 */
								obj_t BgL_kz00_2910;

								BgL_kz00_2910 = CNST_TABLE_REF(((long) 23));
								STRUCT_KEY_SET(BgL_res4165z00_2296, BgL_kz00_2910);
							}
							return BgL_res4165z00_2296;
						}
					}
				}
			}
		}
	}



/* effects-rtl_call4292 */
	obj_t BGl_effectszd2rtl_call4292zd2zzsaw_exprz00(obj_t BgL_envz00_3079,
		obj_t BgL_funz00_3080)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 242 */
			{
				BgL_rtl_callz00_bglt BgL_funz00_2286;

				BgL_funz00_2286 = (BgL_rtl_callz00_bglt) (BgL_funz00_3080);
				{	/* SawMill/expr.scm 243 */
					BgL_globalz00_bglt BgL_varz00_2289;

					BgL_varz00_2289 =
						(((BgL_rtl_callz00_bglt) CREF(BgL_funz00_2286))->BgL_varz00);
					{	/* SawMill/expr.scm 244 */
						obj_t BgL__ortest_4215z00_2290;

						{	/* SawMill/expr.scm 244 */
							obj_t BgL_auxz00_4277;

							{
								BgL_variablez00_bglt BgL_auxz00_4278;

								BgL_auxz00_4278 = (BgL_variablez00_bglt) (BgL_varz00_2289);
								BgL_auxz00_4277 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_4278))->BgL_idz00);
							}
							BgL__ortest_4215z00_2290 =
								BGl_getpropz00zz__r4_symbols_6_4z00(BgL_auxz00_4277,
								(((BgL_globalz00_bglt) CREF(BgL_varz00_2289))->BgL_modulez00));
						}
						if (CBOOL(BgL__ortest_4215z00_2290))
							{	/* SawMill/expr.scm 244 */
								return BgL__ortest_4215z00_2290;
							}
						else
							{	/* SawMill/expr.scm 244 */
								return
									(obj_t) (BGl_manuzd2effectzd2zzsaw_exprz00(BgL_varz00_2289));
							}
					}
				}
			}
		}
	}



/* effects-rtl_protect4289 */
	obj_t BGl_effectszd2rtl_protect4289zd2zzsaw_exprz00(obj_t BgL_envz00_3081,
		obj_t BgL_funz00_3082)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 240 */
			return (obj_t) (BGl_za2fullza2z00zzsaw_exprz00);
		}
	}



/* effects-rtl_pragma4286 */
	obj_t BGl_effectszd2rtl_pragma4286zd2zzsaw_exprz00(obj_t BgL_envz00_3083,
		obj_t BgL_funz00_3084)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 239 */
			return (obj_t) (BGl_za2fullza2z00zzsaw_exprz00);
		}
	}



/* effects-rtl_funcall4284 */
	obj_t BGl_effectszd2rtl_funcall4284zd2zzsaw_exprz00(obj_t BgL_envz00_3085,
		obj_t BgL_funz00_3086)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 238 */
			return (obj_t) (BGl_za2fullza2z00zzsaw_exprz00);
		}
	}



/* effects-rtl_lightfun4282 */
	obj_t BGl_effectszd2rtl_lightfun4282zd2zzsaw_exprz00(obj_t BgL_envz00_3087,
		obj_t BgL_funz00_3088)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 237 */
			return (obj_t) (BGl_za2fullza2z00zzsaw_exprz00);
		}
	}



/* effects-rtl_apply4280 */
	obj_t BGl_effectszd2rtl_apply4280zd2zzsaw_exprz00(obj_t BgL_envz00_3089,
		obj_t BgL_funz00_3090)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 236 */
			return (obj_t) (BGl_za2fullza2z00zzsaw_exprz00);
		}
	}



/* effects-rtl_setfield4278 */
	obj_t BGl_effectszd2rtl_setfield4278zd2zzsaw_exprz00(obj_t BgL_envz00_3091,
		obj_t BgL_funz00_3092)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 235 */
			return (obj_t) (BGl_za2setfza2z00zzsaw_exprz00);
		}
	}



/* effects-rtl_getfield4276 */
	obj_t BGl_effectszd2rtl_getfield4276zd2zzsaw_exprz00(obj_t BgL_envz00_3093,
		obj_t BgL_funz00_3094)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 234 */
			return (obj_t) (BGl_za2getfza2z00zzsaw_exprz00);
		}
	}



/* effects-rtl_boxset4274 */
	obj_t BGl_effectszd2rtl_boxset4274zd2zzsaw_exprz00(obj_t BgL_envz00_3095,
		obj_t BgL_funz00_3096)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 233 */
			return (obj_t) (BGl_za2boxsetza2z00zzsaw_exprz00);
		}
	}



/* effects-rtl_boxref4272 */
	obj_t BGl_effectszd2rtl_boxref4272zd2zzsaw_exprz00(obj_t BgL_envz00_3097,
		obj_t BgL_funz00_3098)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 232 */
			return (obj_t) (BGl_za2boxrefza2z00zzsaw_exprz00);
		}
	}



/* effects-rtl_vset4270 */
	obj_t BGl_effectszd2rtl_vset4270zd2zzsaw_exprz00(obj_t BgL_envz00_3099,
		obj_t BgL_funz00_3100)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 231 */
			return (obj_t) (BGl_za2vsetza2z00zzsaw_exprz00);
		}
	}



/* effects-rtl_vref4268 */
	obj_t BGl_effectszd2rtl_vref4268zd2zzsaw_exprz00(obj_t BgL_envz00_3101,
		obj_t BgL_funz00_3102)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 230 */
			return (obj_t) (BGl_za2vrefza2z00zzsaw_exprz00);
		}
	}



/* effects-rtl_storeg4266 */
	obj_t BGl_effectszd2rtl_storeg4266zd2zzsaw_exprz00(obj_t BgL_envz00_3103,
		obj_t BgL_funz00_3104)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 229 */
			return (obj_t) (BGl_za2storegza2z00zzsaw_exprz00);
		}
	}



/* effects-rtl_loadg4264 */
	obj_t BGl_effectszd2rtl_loadg4264zd2zzsaw_exprz00(obj_t BgL_envz00_3105,
		obj_t BgL_funz00_3106)
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 228 */
			return (obj_t) (BGl_za2loadgza2z00zzsaw_exprz00);
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_exprz00()
	{
		AN_OBJECT;
		{	/* SawMill/expr.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4722z00zzsaw_exprz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4722z00zzsaw_exprz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4722z00zzsaw_exprz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string4722z00zzsaw_exprz00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 192042637),
				BSTRING_TO_STRING(BGl_string4722z00zzsaw_exprz00));
			return
				BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4722z00zzsaw_exprz00));
		}
	}

#ifdef __cplusplus
}
#endif
