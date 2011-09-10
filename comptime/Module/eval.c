/*===========================================================================*/
/*   (Module/eval.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/eval.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_z62errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                  *BgL_z62errorz62_bglt;

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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_ccompz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_producerz00;
		obj_t BgL_consumerz00;
		obj_t BgL_finaliza7erza7;
	}               *BgL_ccompz00_bglt;

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

	typedef struct BgL_slotz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		obj_t BgL_srcz00;
		obj_t BgL_classzd2ownerzd2;
		obj_t BgL_typez00;
		bool_t BgL_readzd2onlyzf3z21;
		obj_t BgL_defaultzd2valuezd2;
		obj_t BgL_virtualzd2numzd2;
		obj_t BgL_getterz00;
		obj_t BgL_setterz00;
		obj_t BgL_indexedz00;
		obj_t BgL_userzd2infozd2;
	}              *BgL_slotz00_bglt;

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

	typedef struct BgL_evglobalz00_bgl
	{
		char dummy;
	}                  *BgL_evglobalz00_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t
		BGl_evalzd2bindzd2superzd2accesszd2zzmodule_evalz00(BgL_typez00_bglt,
		bool_t);
	static obj_t BGl_getzd2evaluatedzd2classeszd2accesseszd2zzmodule_evalz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	BGL_IMPORT obj_t BGl_makezd2promisezd2zz__r4_control_features_6_9z00(obj_t);
	extern obj_t BGl_svarz00zzast_varz00;
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	static obj_t BGl_evalzd2finaliza7erz75zzmodule_evalz00();
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	static obj_t BGl_rememberzd2evalzd2exportedz12z12zzmodule_evalz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_setzd2evalzd2typesz12z12zzmodule_evalz00(obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	extern obj_t BGl_za2libzd2modeza2zd2zzengine_paramz00;
	static obj_t BGl_structzb2objectzd2ze3objec3794z83zzmodule_evalz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_tclasszd2allzd2slotsz00zzobject_classz00(BgL_tclassz00_bglt);
	static obj_t BGl_slotzd2bindzd2zzmodule_evalz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzmodule_evalz00();
	extern BgL_valuez00_bglt BGl_valuezd2nilzd2zzast_varz00();
	static obj_t BGl_zc3anonymousza34164ze3z83zzmodule_evalz00(obj_t, obj_t);
	static obj_t BGl__getzd2evaluatedzd2classzd2accesseszd2zzmodule_evalz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34180ze3z83zzmodule_evalz00(obj_t, obj_t);
	static obj_t BGl_getzd2evaluatedzd2classzd2macroszd2zzmodule_evalz00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzmodule_evalz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__libraryz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_getzd2globalzd2zzmodule_evalz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzmodule_evalz00();
	static obj_t BGl_z52thezd2evglobalzd2nilz52zzmodule_evalz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_appendzd2mapzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	static obj_t BGl_za2evalzd2classesza2zd2zzmodule_evalz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza33816ze3z83zzmodule_evalz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_library_ez00zzmodule_evalz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_getzd2toplevelzd2unitzd2weightzd2zzmodule_includez00();
	static BgL_evglobalz00_bglt BGl_wideningzd2evglobalzd2zzmodule_evalz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	BGL_EXPORTED_DEF obj_t BGl_za2allzd2modulezd2evalzf3za2zf3zzmodule_evalz00 =
		BUNSPEC;
	static obj_t BGl_za2evalzd2exportedza2zd2zzmodule_evalz00 = BUNSPEC;
	static obj_t BGl_getzd2libraryzd2infoz00zzmodule_evalz00(obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static BgL_evglobalz00_bglt BGl_evglobalzd2nilzd2zzmodule_evalz00();
	extern obj_t BGl_classzd2predicatezd2zzobject_classz00(BgL_tclassz00_bglt);
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	static obj_t BGl_za2evalzd2librariesza2zd2zzmodule_evalz00 = BUNSPEC;
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t
		BGl_classzd2nilzd2constructorz00zzobject_classz00(BgL_tclassz00_bglt);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	extern BgL_ccompz00_bglt BGl_makezd2ccompzd2zzmodule_modulez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__evalzd2producerzd2zzmodule_evalz00(obj_t, obj_t);
	extern obj_t BGl_classzd2fillzd2zzobject_classz00(BgL_tclassz00_bglt);
	static obj_t BGl_methodzd2initzd2zzmodule_evalz00();
	static obj_t BGl__evalzd2finaliza7erz75zzmodule_evalz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2allzd2evalzf3za2z21zzmodule_evalz00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2evglobalz80zzmodule_evalz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2evglo3792ze3zzmodule_evalz00(obj_t,
		obj_t);
	static bool_t BGl_za2onezd2evalzf3za2z21zzmodule_evalz00;
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_evalzd2producerzd2zzmodule_evalz00(obj_t);
	static obj_t BGl__evglobalzf3zf3zzmodule_evalz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_evalz00 = BUNSPEC;
	static obj_t BGl_getzd2evaluatedzd2classzd2accesseszd2zzmodule_evalz00(obj_t);
	BGL_IMPORT obj_t BGl_withzd2exceptionzd2handlerz00zz__errorz00(obj_t, obj_t);
	extern obj_t BGl_scnstz00zzast_varz00;
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_genericzd2initzd2zzmodule_evalz00();
	static obj_t BGl_evglobalz00zzmodule_evalz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza34005ze3z83zzmodule_evalz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33895ze3z83zzmodule_evalz00(obj_t);
	static obj_t BGl__makezd2evalzd2compilerz00zzmodule_evalz00(obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_evalzd2parserzd2zzmodule_evalz00(obj_t, obj_t);
	extern obj_t BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00(obj_t);
	BGL_IMPORT obj_t bigloo_module_mangle(obj_t, obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_libraryzd2infozd2zz__libraryz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2evalzd2compilerz00zzmodule_evalz00();
	extern obj_t BGl_classzd2makezd2zzobject_classz00(BgL_tclassz00_bglt);
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_evalz00();
	extern BgL_nodez00_bglt
		BGl_definezd2primopzd2ze3nodeze3zzast_sexpz00(BgL_globalz00_bglt);
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl__getzd2evalzd2librariesz00zzmodule_evalz00(obj_t);
	extern obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00;
	static obj_t BGl_getzd2evaluatedzd2globalsz00zzmodule_evalz00();
	static obj_t BGl_zc3anonymousza34040ze3z83zzmodule_evalz00(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_findzd2typezf2locationz20zztype_envz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_libraryzd2initzd2filez00zz__libraryz00(obj_t);
	static obj_t BGl_zc3anonymousza34042ze3z83zzmodule_evalz00(obj_t);
	BGL_IMPORT obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_getzd2evalzd2srfizd2librarieszd2zzmodule_evalz00();
	BGL_EXPORTED_DECL obj_t BGl_getzd2evalzd2librariesz00zzmodule_evalz00();
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2svarz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_nodez00_bglt
		BGl_locationzd2ze3nodez31zzast_sexpz00(BgL_globalz00_bglt);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_IMPORT obj_t BGl_errorzd2notifyzd2zz__errorz00(obj_t);
	extern BgL_nodez00_bglt
		BGl_definezd2primopzd2refzd2ze3nodez31zzast_sexpz00(BgL_globalz00_bglt,
		BgL_nodez00_bglt);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2allzd2exportzd2mutablezf3za2zf3zzmodule_evalz00
		= BUNSPEC;
	BGL_IMPORT obj_t BGl_loadqz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl__evglobalzd2nilzd2zzmodule_evalz00(obj_t);
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2allzd2exportzd2evalzf3za2zf3zzmodule_evalz00 =
		BUNSPEC;
	static obj_t BGl_zc3anonymousza34092ze3z83zzmodule_evalz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzmodule_evalz00();
	extern obj_t BGl_classzd2allocatezd2zzobject_classz00(BgL_tclassz00_bglt);
	BGL_IMPORT obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_evalz00();
	static obj_t __cnst[36];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_evglobalzf3zd2envz21zzmodule_evalz00,
		BgL_bgl__evglobalza7f3za7f3za74470za7, BGl__evglobalzf3zf3zzmodule_evalz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2evalzd2librarieszd2envzd2zzmodule_evalz00,
		BgL_bgl__getza7d2evalza7d2li4471z00,
		BGl__getzd2evalzd2librariesz00zzmodule_evalz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_evglobalzd2nilzd2envz00zzmodule_evalz00,
		BgL_bgl__evglobalza7d2nilza74472z00, BGl__evglobalzd2nilzd2zzmodule_evalz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4442z00zzmodule_evalz00,
		BgL_bgl_za7c3anonymousza7a334473z00,
		BGl_zc3anonymousza33816ze3z83zzmodule_evalz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4445z00zzmodule_evalz00,
		BgL_bgl_za7c3anonymousza7a334474z00,
		BGl_zc3anonymousza33895ze3z83zzmodule_evalz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4460z00zzmodule_evalz00,
		BgL_bgl_objectza7d2za7e3stru4475z00,
		BGl_objectzd2ze3structzd2evglo3792ze3zzmodule_evalz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4462z00zzmodule_evalz00,
		BgL_bgl_structza7b2objectza74476z00,
		BGl_structzb2objectzd2ze3objec3794z83zzmodule_evalz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4443z00zzmodule_evalz00,
		BgL_bgl_string4443za700za7za7m4477za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string4444z00zzmodule_evalz00,
		BgL_bgl_string4444za700za7za7m4478za7, "Illegal `eval' clause", 21);
	      DEFINE_STRING(BGl_string4446z00zzmodule_evalz00,
		BgL_bgl_string4446za700za7za7m4479za7, "cannot find info \"~a\"", 21);
	      DEFINE_STRING(BGl_string4447z00zzmodule_evalz00,
		BgL_bgl_string4447za700za7za7m4480za7,
		"cannot find file \"~a\" in lib path", 33);
	      DEFINE_STRING(BGl_string4448z00zzmodule_evalz00,
		BgL_bgl_string4448za700za7za7m4481za7, "~a( 0, ~s )", 11);
	      DEFINE_STRING(BGl_string4450z00zzmodule_evalz00,
		BgL_bgl_string4450za700za7za7m4482za7, "eval", 4);
	      DEFINE_STRING(BGl_string4449z00zzmodule_evalz00,
		BgL_bgl_string4449za700za7za7m4483za7, "cannot initialize library for eval",
		34);
	      DEFINE_STRING(BGl_string4451z00zzmodule_evalz00,
		BgL_bgl_string4451za700za7za7m4484za7,
		"Non bigloo prototyped value can't be evaluated", 46);
	      DEFINE_STRING(BGl_string4452z00zzmodule_evalz00,
		BgL_bgl_string4452za700za7za7m4485za7, "eval-init", 9);
	      DEFINE_STRING(BGl_string4453z00zzmodule_evalz00,
		BgL_bgl_string4453za700za7za7m4486za7,
		"This variable cannot be known by eval", 37);
	      DEFINE_STRING(BGl_string4454z00zzmodule_evalz00,
		BgL_bgl_string4454za700za7za7m4487za7, "Unbound eval variable", 21);
	      DEFINE_STRING(BGl_string4455z00zzmodule_evalz00,
		BgL_bgl_string4455za700za7za7m4488za7, "Undefined classes found", 23);
	      DEFINE_STRING(BGl_string4456z00zzmodule_evalz00,
		BgL_bgl_string4456za700za7za7m4489za7, "(eval (class ...)) malformed", 28);
	      DEFINE_STRING(BGl_string4457z00zzmodule_evalz00,
		BgL_bgl_string4457za700za7za7m4490za7,
		"Referenced type is not a Bigloo class", 37);
	      DEFINE_STRING(BGl_string4458z00zzmodule_evalz00,
		BgL_bgl_string4458za700za7za7m4491za7, "Can't find global access", 24);
	      DEFINE_STRING(BGl_string4459z00zzmodule_evalz00,
		BgL_bgl_string4459za700za7za7m4492za7, "", 0);
	      DEFINE_STRING(BGl_string4461z00zzmodule_evalz00,
		BgL_bgl_string4461za700za7za7m4493za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string4463z00zzmodule_evalz00,
		BgL_bgl_string4463za700za7za7m4494za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string4464z00zzmodule_evalz00,
		BgL_bgl_string4464za700za7za7m4495za7, "module_eval", 11);
	      DEFINE_STRING(BGl_string4465z00zzmodule_evalz00,
		BgL_bgl_string4465za700za7za7m4496za7,
		"_ evglobal eval-expand-with-access eval-expand-duplicate eval-expand-instantiate x o define eval! register-eval-srfi! -set! -ref -len - (export) (static export) (import static export) quote library-mark-loaded! __library pragma libinfo write begin (#unspecified) void unit library import class @ export export-module export-exports export-all eval ",
		348);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2evalzd2compilerzd2envzd2zzmodule_evalz00,
		BgL_bgl__makeza7d2evalza7d2c4497z00,
		BGl__makezd2evalzd2compilerz00zzmodule_evalz00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_getzd2evaluatedzd2classzd2accesseszd2envz00zzmodule_evalz00,
		BgL_bgl__getza7d2evaluated4498za7,
		BGl__getzd2evaluatedzd2classzd2accesseszd2zzmodule_evalz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2evglobalzd2envz52zzmodule_evalz00,
		BgL_bgl__za752allocateza7d2e4499z00,
		BGl__z52allocatezd2evglobalz80zzmodule_evalz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_evalzd2producerzd2envz00zzmodule_evalz00,
		BgL_bgl__evalza7d2producer4500za7, BGl__evalzd2producerzd2zzmodule_evalz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_evalzd2finaliza7erzd2envza7zzmodule_evalz00,
		BgL_bgl__evalza7d2finaliza7a4501z00,
		BGl__evalzd2finaliza7erz75zzmodule_evalz00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmodule_evalz00(long
		BgL_checksumz00_2759, char *BgL_fromz00_2760)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_evalz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_evalz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmodule_evalz00();
					BGl_cnstzd2initzd2zzmodule_evalz00();
					BGl_importedzd2moduleszd2initz00zzmodule_evalz00();
					BGl_objectzd2initzd2zzmodule_evalz00();
					BGl_methodzd2initzd2zzmodule_evalz00();
					BGl_toplevelzd2initzd2zzmodule_evalz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_evalz00()
	{
		AN_OBJECT;
		{	/* Module/eval.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "module_eval");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_eval");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "module_eval");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"module_eval");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"module_eval");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_eval");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "module_eval");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "module_eval");
			BGl_modulezd2initializa7ationz75zz__libraryz00(((long) 0), "module_eval");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "module_eval");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "module_eval");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"module_eval");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_evalz00()
	{
		AN_OBJECT;
		{	/* Module/eval.scm 15 */
			{	/* Module/eval.scm 15 */
				obj_t BgL_cportz00_2742;

				BgL_cportz00_2742 =
					bgl_open_input_string(BGl_string4465z00zzmodule_evalz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2743;

					BgL_iz00_2743 = ((long) 35);
				BgL_loopz00_2744:
					if ((BgL_iz00_2743 == ((long) -1)))
						{	/* Module/eval.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/eval.scm 15 */
							{	/* Module/eval.scm 15 */
								obj_t BgL_arg4467z00_2746;

								{	/* Module/eval.scm 15 */

									{	/* Module/eval.scm 15 */
										obj_t BgL_locationz00_2748;

										BgL_locationz00_2748 = BBOOL(((bool_t) 0));
										{	/* Module/eval.scm 15 */

											BgL_arg4467z00_2746 =
												BGl_readz00zz__readerz00(BgL_cportz00_2742,
												BgL_locationz00_2748);
										}
									}
								}
								{	/* Module/eval.scm 15 */
									int BgL_auxz00_2788;

									BgL_auxz00_2788 = (int) (BgL_iz00_2743);
									CNST_TABLE_SET(BgL_auxz00_2788, BgL_arg4467z00_2746);
							}}
							{	/* Module/eval.scm 15 */
								int BgL_auxz00_2749;

								BgL_auxz00_2749 = (int) ((BgL_iz00_2743 - ((long) 1)));
								{
									long BgL_iz00_2793;

									BgL_iz00_2793 = (long) (BgL_auxz00_2749);
									BgL_iz00_2743 = BgL_iz00_2793;
									goto BgL_loopz00_2744;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_evalz00()
	{
		AN_OBJECT;
		{	/* Module/eval.scm 15 */
			BGl_za2evalzd2exportedza2zd2zzmodule_evalz00 = BNIL;
			BGl_za2evalzd2classesza2zd2zzmodule_evalz00 = BNIL;
			BGl_za2evalzd2librariesza2zd2zzmodule_evalz00 = BNIL;
			BGl_za2allzd2evalzf3za2z21zzmodule_evalz00 = BFALSE;
			BGl_za2allzd2exportzd2evalzf3za2zf3zzmodule_evalz00 = BFALSE;
			BGl_za2allzd2modulezd2evalzf3za2zf3zzmodule_evalz00 = BFALSE;
			BGl_za2allzd2exportzd2mutablezf3za2zf3zzmodule_evalz00 = BFALSE;
			return (BGl_za2onezd2evalzf3za2z21zzmodule_evalz00 =
				((bool_t) 0), BUNSPEC);
		}
	}



/* make-eval-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2evalzd2compilerz00zzmodule_evalz00()
	{
		AN_OBJECT;
		{	/* Module/eval.scm 44 */
			{	/* Module/eval.scm 45 */
				obj_t BgL_arg3814z00_1076;

				BgL_arg3814z00_1076 = CNST_TABLE_REF(((long) 0));
				return
					(obj_t) (BGl_makezd2ccompzd2zzmodule_modulez00(BgL_arg3814z00_1076,
						BGl_evalzd2producerzd2envz00zzmodule_evalz00,
						BGl_proc4442z00zzmodule_evalz00,
						BGl_evalzd2finaliza7erzd2envza7zzmodule_evalz00));
			}
		}
	}



/* _make-eval-compiler */
	obj_t BGl__makezd2evalzd2compilerz00zzmodule_evalz00(obj_t BgL_envz00_2681)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 44 */
			return BGl_makezd2evalzd2compilerz00zzmodule_evalz00();
		}
	}



/* <anonymous:3816> */
	obj_t BGl_zc3anonymousza33816ze3z83zzmodule_evalz00(obj_t BgL_envz00_2682,
		obj_t BgL_mz00_2683, obj_t BgL_cz00_2684)
	{
		AN_OBJECT;
		{	/* Module/module.scm 52 */
			return BNIL;
		}
	}



/* eval-producer */
	obj_t BGl_evalzd2producerzd2zzmodule_evalz00(obj_t BgL_clausez00_73)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 52 */
			{
				obj_t BgL_protosz00_1082;

				if (PAIRP(BgL_clausez00_73))
					{	/* Module/eval.scm 53 */
						BgL_protosz00_1082 = CDR(BgL_clausez00_73);
						{
							obj_t BgL_l3760z00_1089;

							BgL_l3760z00_1089 = BgL_protosz00_1082;
						BgL_zc3anonymousza33819ze3z83_1090:
							if (PAIRP(BgL_l3760z00_1089))
								{	/* Module/eval.scm 55 */
									BGl_evalzd2parserzd2zzmodule_evalz00(CAR(BgL_l3760z00_1089),
										BgL_clausez00_73);
									{
										obj_t BgL_l3760z00_2805;

										BgL_l3760z00_2805 = CDR(BgL_l3760z00_1089);
										BgL_l3760z00_1089 = BgL_l3760z00_2805;
										goto BgL_zc3anonymousza33819ze3z83_1090;
									}
								}
							else
								{	/* Module/eval.scm 55 */
									((bool_t) 1);
								}
						}
						return BNIL;
					}
				else
					{	/* Module/eval.scm 53 */
						{	/* Module/eval.scm 58 */
							obj_t BgL_list3822z00_1095;

							BgL_list3822z00_1095 = MAKE_PAIR(BNIL, BNIL);
							return
								BGl_userzd2errorzd2zztools_errorz00
								(BGl_string4443z00zzmodule_evalz00,
								BGl_string4444z00zzmodule_evalz00, BgL_clausez00_73,
								BgL_list3822z00_1095);
						}
					}
			}
		}
	}



/* _eval-producer */
	obj_t BGl__evalzd2producerzd2zzmodule_evalz00(obj_t BgL_envz00_2685,
		obj_t BgL_clausez00_2686)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 52 */
			return BGl_evalzd2producerzd2zzmodule_evalz00(BgL_clausez00_2686);
		}
	}



/* eval-parser */
	obj_t BGl_evalzd2parserzd2zzmodule_evalz00(obj_t BgL_protoz00_74,
		obj_t BgL_clausez00_75)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 66 */
			{
				obj_t BgL_libsz00_1108;

				if (PAIRP(BgL_protoz00_74))
					{	/* Module/eval.scm 67 */
						if ((CAR(BgL_protoz00_74) == CNST_TABLE_REF(((long) 1))))
							{	/* Module/eval.scm 67 */
								if (NULLP(CDR(BgL_protoz00_74)))
									{	/* Module/eval.scm 67 */
										return (BGl_za2allzd2evalzf3za2z21zzmodule_evalz00 =
											BTRUE, BUNSPEC);
									}
								else
									{	/* Module/eval.scm 67 */
									BgL_tagzd21405zd2_1110:
										{	/* Module/eval.scm 93 */
											obj_t BgL_list3881z00_1186;

											BgL_list3881z00_1186 = MAKE_PAIR(BNIL, BNIL);
											return
												BGl_userzd2errorzd2zztools_errorz00
												(BGl_string4443z00zzmodule_evalz00,
												BGl_string4444z00zzmodule_evalz00, BgL_clausez00_75,
												BgL_list3881z00_1186);
										}
									}
							}
						else
							{	/* Module/eval.scm 67 */
								if ((CAR(BgL_protoz00_74) == CNST_TABLE_REF(((long) 2))))
									{	/* Module/eval.scm 67 */
										if (NULLP(CDR(BgL_protoz00_74)))
											{	/* Module/eval.scm 67 */
												return
													(BGl_za2allzd2exportzd2evalzf3za2zf3zzmodule_evalz00 =
													BTRUE, BUNSPEC);
											}
										else
											{	/* Module/eval.scm 67 */
												goto BgL_tagzd21405zd2_1110;
											}
									}
								else
									{	/* Module/eval.scm 67 */
										if ((CAR(BgL_protoz00_74) == CNST_TABLE_REF(((long) 3))))
											{	/* Module/eval.scm 67 */
												if (NULLP(CDR(BgL_protoz00_74)))
													{	/* Module/eval.scm 67 */
														return
															(BGl_za2allzd2modulezd2evalzf3za2zf3zzmodule_evalz00
															= BTRUE, BUNSPEC);
													}
												else
													{	/* Module/eval.scm 67 */
														goto BgL_tagzd21405zd2_1110;
													}
											}
										else
											{	/* Module/eval.scm 67 */
												obj_t BgL_cdrzd21503zd2_1122;

												BgL_cdrzd21503zd2_1122 = CDR(BgL_protoz00_74);
												if (
													(CAR(BgL_protoz00_74) == CNST_TABLE_REF(((long) 4))))
													{	/* Module/eval.scm 67 */
														if (PAIRP(BgL_cdrzd21503zd2_1122))
															{	/* Module/eval.scm 67 */
																obj_t BgL_carzd21505zd2_1125;

																BgL_carzd21505zd2_1125 =
																	CAR(BgL_cdrzd21503zd2_1122);
																if (SYMBOLP(BgL_carzd21505zd2_1125))
																	{	/* Module/eval.scm 67 */
																		if (NULLP(CDR(BgL_cdrzd21503zd2_1122)))
																			{	/* Module/eval.scm 67 */
																				obj_t BgL_varz00_2288;

																				BgL_varz00_2288 =
																					BgL_carzd21505zd2_1125;
																				BGl_za2onezd2evalzf3za2z21zzmodule_evalz00
																					= ((bool_t) 1);
																				return
																					BGl_rememberzd2evalzd2exportedz12z12zzmodule_evalz00
																					(BgL_varz00_2288, BFALSE,
																					BgL_protoz00_74);
																			}
																		else
																			{	/* Module/eval.scm 67 */
																				goto BgL_tagzd21405zd2_1110;
																			}
																	}
																else
																	{	/* Module/eval.scm 67 */
																		obj_t BgL_carzd21535zd2_1130;

																		BgL_carzd21535zd2_1130 =
																			CAR(BgL_cdrzd21503zd2_1122);
																		if (PAIRP(BgL_carzd21535zd2_1130))
																			{	/* Module/eval.scm 67 */
																				obj_t BgL_cdrzd21540zd2_1132;

																				BgL_cdrzd21540zd2_1132 =
																					CDR(BgL_carzd21535zd2_1130);
																				if (
																					(CAR(BgL_carzd21535zd2_1130) ==
																						CNST_TABLE_REF(((long) 5))))
																					{	/* Module/eval.scm 67 */
																						if (PAIRP(BgL_cdrzd21540zd2_1132))
																							{	/* Module/eval.scm 67 */
																								obj_t BgL_carzd21543zd2_1135;

																								obj_t BgL_cdrzd21544zd2_1136;

																								BgL_carzd21543zd2_1135 =
																									CAR(BgL_cdrzd21540zd2_1132);
																								BgL_cdrzd21544zd2_1136 =
																									CDR(BgL_cdrzd21540zd2_1132);
																								if (SYMBOLP
																									(BgL_carzd21543zd2_1135))
																									{	/* Module/eval.scm 67 */
																										if (PAIRP
																											(BgL_cdrzd21544zd2_1136))
																											{	/* Module/eval.scm 67 */
																												obj_t
																													BgL_carzd21549zd2_1139;
																												BgL_carzd21549zd2_1139 =
																													CAR
																													(BgL_cdrzd21544zd2_1136);
																												if (SYMBOLP
																													(BgL_carzd21549zd2_1139))
																													{	/* Module/eval.scm 67 */
																														if (NULLP(CDR
																																(BgL_cdrzd21544zd2_1136)))
																															{	/* Module/eval.scm 67 */
																																if (NULLP(CDR
																																		(BgL_cdrzd21503zd2_1122)))
																																	{	/* Module/eval.scm 67 */
																																		obj_t
																																			BgL_varz00_2305;
																																		obj_t
																																			BgL_modulez00_2306;
																																		BgL_varz00_2305
																																			=
																																			BgL_carzd21543zd2_1135;
																																		BgL_modulez00_2306
																																			=
																																			BgL_carzd21549zd2_1139;
																																		BGl_za2onezd2evalzf3za2z21zzmodule_evalz00
																																			=
																																			((bool_t)
																																			1);
																																		return
																																			BGl_rememberzd2evalzd2exportedz12z12zzmodule_evalz00
																																			(BgL_varz00_2305,
																																			BgL_modulez00_2306,
																																			BgL_protoz00_74);
																																	}
																																else
																																	{	/* Module/eval.scm 67 */
																																		goto
																																			BgL_tagzd21405zd2_1110;
																																	}
																															}
																														else
																															{	/* Module/eval.scm 67 */
																																goto
																																	BgL_tagzd21405zd2_1110;
																															}
																													}
																												else
																													{	/* Module/eval.scm 67 */
																														goto
																															BgL_tagzd21405zd2_1110;
																													}
																											}
																										else
																											{	/* Module/eval.scm 67 */
																												goto
																													BgL_tagzd21405zd2_1110;
																											}
																									}
																								else
																									{	/* Module/eval.scm 67 */
																										goto BgL_tagzd21405zd2_1110;
																									}
																							}
																						else
																							{	/* Module/eval.scm 67 */
																								goto BgL_tagzd21405zd2_1110;
																							}
																					}
																				else
																					{	/* Module/eval.scm 67 */
																						goto BgL_tagzd21405zd2_1110;
																					}
																			}
																		else
																			{	/* Module/eval.scm 67 */
																				goto BgL_tagzd21405zd2_1110;
																			}
																	}
															}
														else
															{	/* Module/eval.scm 67 */
																goto BgL_tagzd21405zd2_1110;
															}
													}
												else
													{	/* Module/eval.scm 67 */
														if (
															(CAR(BgL_protoz00_74) ==
																CNST_TABLE_REF(((long) 6))))
															{	/* Module/eval.scm 67 */
																if (PAIRP(BgL_cdrzd21503zd2_1122))
																	{	/* Module/eval.scm 67 */
																		obj_t BgL_carzd21654zd2_1150;

																		BgL_carzd21654zd2_1150 =
																			CAR(BgL_cdrzd21503zd2_1122);
																		if (SYMBOLP(BgL_carzd21654zd2_1150))
																			{	/* Module/eval.scm 67 */
																				if (NULLP(CDR(BgL_cdrzd21503zd2_1122)))
																					{	/* Module/eval.scm 67 */
																						return
																							(BGl_za2evalzd2classesza2zd2zzmodule_evalz00
																							=
																							MAKE_PAIR(BgL_protoz00_74,
																								BGl_za2evalzd2classesza2zd2zzmodule_evalz00),
																							BUNSPEC);
																					}
																				else
																					{	/* Module/eval.scm 67 */
																						goto BgL_tagzd21405zd2_1110;
																					}
																			}
																		else
																			{	/* Module/eval.scm 67 */
																				goto BgL_tagzd21405zd2_1110;
																			}
																	}
																else
																	{	/* Module/eval.scm 67 */
																		goto BgL_tagzd21405zd2_1110;
																	}
															}
														else
															{	/* Module/eval.scm 67 */
																obj_t BgL_cdrzd21678zd2_1154;

																BgL_cdrzd21678zd2_1154 = CDR(BgL_protoz00_74);
																if (
																	(CAR(BgL_protoz00_74) ==
																		CNST_TABLE_REF(((long) 7))))
																	{	/* Module/eval.scm 67 */
																		if (PAIRP(BgL_cdrzd21678zd2_1154))
																			{	/* Module/eval.scm 67 */
																				obj_t BgL_carzd21680zd2_1157;

																				BgL_carzd21680zd2_1157 =
																					CAR(BgL_cdrzd21678zd2_1154);
																				if (SYMBOLP(BgL_carzd21680zd2_1157))
																					{	/* Module/eval.scm 67 */
																						if (NULLP(CDR
																								(BgL_cdrzd21678zd2_1154)))
																							{	/* Module/eval.scm 67 */
																								obj_t BgL_varz00_2322;

																								BgL_varz00_2322 =
																									BgL_carzd21680zd2_1157;
																								return (obj_t)
																									(BGl_declarezd2globalzd2svarz12z12zzast_glozd2declzd2
																									(BgL_varz00_2322,
																										CNST_TABLE_REF(((long) 0)),
																										CNST_TABLE_REF(((long) 0)),
																										BgL_clausez00_75, BFALSE));
																							}
																						else
																							{	/* Module/eval.scm 67 */
																								goto BgL_tagzd21405zd2_1110;
																							}
																					}
																				else
																					{	/* Module/eval.scm 67 */
																						goto BgL_tagzd21405zd2_1110;
																					}
																			}
																		else
																			{	/* Module/eval.scm 67 */
																				goto BgL_tagzd21405zd2_1110;
																			}
																	}
																else
																	{	/* Module/eval.scm 67 */
																		if (
																			(CAR(BgL_protoz00_74) ==
																				CNST_TABLE_REF(((long) 8))))
																			{	/* Module/eval.scm 67 */
																				bool_t BgL_auxz00_2910;

																				BgL_libsz00_1108 =
																					BgL_cdrzd21678zd2_1154;
																				{
																					obj_t BgL_l3762z00_1178;

																					BgL_l3762z00_1178 = BgL_libsz00_1108;
																				BgL_zc3anonymousza33876ze3z83_1179:
																					if (PAIRP(BgL_l3762z00_1178))
																						{	/* Module/eval.scm 85 */
																							{	/* Module/eval.scm 86 */
																								obj_t BgL_libz00_1181;

																								BgL_libz00_1181 =
																									CAR(BgL_l3762z00_1178);
																								if (SYMBOLP(BgL_libz00_1181))
																									{	/* Module/eval.scm 86 */
																										BGl_za2evalzd2librariesza2zd2zzmodule_evalz00
																											=
																											MAKE_PAIR(BgL_libz00_1181,
																											BGl_za2evalzd2librariesza2zd2zzmodule_evalz00);
																									}
																								else
																									{	/* Module/eval.scm 87 */
																										obj_t BgL_list3879z00_1183;

																										BgL_list3879z00_1183 =
																											MAKE_PAIR(BNIL, BNIL);
																										BGl_userzd2errorzd2zztools_errorz00
																											(BGl_string4443z00zzmodule_evalz00,
																											BGl_string4444z00zzmodule_evalz00,
																											BgL_clausez00_75,
																											BgL_list3879z00_1183);
																									}
																							}
																							{
																								obj_t BgL_l3762z00_2919;

																								BgL_l3762z00_2919 =
																									CDR(BgL_l3762z00_1178);
																								BgL_l3762z00_1178 =
																									BgL_l3762z00_2919;
																								goto
																									BgL_zc3anonymousza33876ze3z83_1179;
																							}
																						}
																					else
																						{	/* Module/eval.scm 85 */
																							BgL_auxz00_2910 = ((bool_t) 1);
																						}
																				}
																				return BBOOL(BgL_auxz00_2910);
																			}
																		else
																			{	/* Module/eval.scm 67 */
																				goto BgL_tagzd21405zd2_1110;
																			}
																	}
															}
													}
											}
									}
							}
					}
				else
					{	/* Module/eval.scm 67 */
						goto BgL_tagzd21405zd2_1110;
					}
			}
		}
	}



/* get-eval-libraries */
	BGL_EXPORTED_DEF obj_t BGl_getzd2evalzd2librariesz00zzmodule_evalz00()
	{
		AN_OBJECT;
		{	/* Module/eval.scm 98 */
			return BGl_za2evalzd2librariesza2zd2zzmodule_evalz00;
		}
	}



/* _get-eval-libraries */
	obj_t BGl__getzd2evalzd2librariesz00zzmodule_evalz00(obj_t BgL_envz00_2688)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 98 */
			return BGl_za2evalzd2librariesza2zd2zzmodule_evalz00;
		}
	}



/* remember-eval-exported! */
	obj_t BGl_rememberzd2evalzd2exportedz12z12zzmodule_evalz00(obj_t
		BgL_varz00_76, obj_t BgL_modulez00_77, obj_t BgL_locz00_78)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 119 */
			{	/* Module/eval.scm 120 */
				obj_t BgL_arg3882z00_1187;

				{	/* Module/eval.scm 120 */
					obj_t BgL_list3883z00_1188;

					{	/* Module/eval.scm 120 */
						obj_t BgL_arg3884z00_1189;

						{	/* Module/eval.scm 120 */
							obj_t BgL_arg3885z00_1190;

							BgL_arg3885z00_1190 = MAKE_PAIR(BgL_locz00_78, BNIL);
							BgL_arg3884z00_1189 =
								MAKE_PAIR(BgL_modulez00_77, BgL_arg3885z00_1190);
						}
						BgL_list3883z00_1188 =
							MAKE_PAIR(BgL_varz00_76, BgL_arg3884z00_1189);
					}
					BgL_arg3882z00_1187 = BgL_list3883z00_1188;
				}
				return (BGl_za2evalzd2exportedza2zd2zzmodule_evalz00 =
					MAKE_PAIR(BgL_arg3882z00_1187,
						BGl_za2evalzd2exportedza2zd2zzmodule_evalz00), BUNSPEC);
			}
		}
	}



/* eval-finalizer */
	obj_t BGl_evalzd2finaliza7erz75zzmodule_evalz00()
	{
		AN_OBJECT;
		{	/* Module/eval.scm 144 */
			{	/* Module/eval.scm 146 */
				bool_t BgL_testz00_2926;

				if (BGl_za2onezd2evalzf3za2z21zzmodule_evalz00)
					{	/* Module/eval.scm 146 */
						BgL_testz00_2926 = ((bool_t) 1);
					}
				else
					{	/* Module/eval.scm 146 */
						if (CBOOL(BGl_za2allzd2evalzf3za2z21zzmodule_evalz00))
							{	/* Module/eval.scm 146 */
								BgL_testz00_2926 = ((bool_t) 1);
							}
						else
							{	/* Module/eval.scm 146 */
								if (CBOOL(BGl_za2allzd2exportzd2evalzf3za2zf3zzmodule_evalz00))
									{	/* Module/eval.scm 146 */
										BgL_testz00_2926 = ((bool_t) 1);
									}
								else
									{	/* Module/eval.scm 146 */
										if (CBOOL
											(BGl_za2allzd2modulezd2evalzf3za2zf3zzmodule_evalz00))
											{	/* Module/eval.scm 146 */
												BgL_testz00_2926 = ((bool_t) 1);
											}
										else
											{	/* Module/eval.scm 146 */
												if (PAIRP
													(BGl_za2evalzd2librariesza2zd2zzmodule_evalz00))
													{	/* Module/eval.scm 150 */
														BgL_testz00_2926 = ((bool_t) 1);
													}
												else
													{	/* Module/eval.scm 150 */
														BgL_testz00_2926 =
															PAIRP
															(BGl_za2evalzd2classesza2zd2zzmodule_evalz00);
													}
											}
									}
							}
					}
				if (BgL_testz00_2926)
					{	/* Module/eval.scm 154 */
						obj_t BgL_arg3887z00_1192;

						{	/* Module/eval.scm 154 */
							obj_t BgL_arg3889z00_1194;

							long BgL_arg3890z00_1195;

							obj_t BgL_arg3891z00_1196;

							BgL_arg3889z00_1194 = CNST_TABLE_REF(((long) 0));
							{	/* Module/eval.scm 155 */
								obj_t BgL_arg3892z00_1197;

								BgL_arg3892z00_1197 =
									BGl_getzd2toplevelzd2unitzd2weightzd2zzmodule_includez00();
								BgL_arg3890z00_1195 =
									((long) CINT(BgL_arg3892z00_1197) - ((long) 2));
							}
							BgL_arg3891z00_1196 =
								BGl_makezd2promisezd2zz__r4_control_features_6_9z00
								(BGl_proc4445z00zzmodule_evalz00);
							{	/* Module/eval.scm 153 */
								obj_t BgL_newz00_2364;

								BgL_newz00_2364 =
									create_struct(CNST_TABLE_REF(((long) 9)), (int) (((long) 5)));
								{	/* Module/eval.scm 153 */
									int BgL_auxz00_2945;

									BgL_auxz00_2945 = (int) (((long) 4));
									STRUCT_SET(BgL_newz00_2364, BgL_auxz00_2945, BFALSE);
								}
								{	/* Module/eval.scm 153 */
									int BgL_auxz00_2948;

									BgL_auxz00_2948 = (int) (((long) 3));
									STRUCT_SET(BgL_newz00_2364, BgL_auxz00_2948, BFALSE);
								}
								{	/* Module/eval.scm 153 */
									int BgL_auxz00_2951;

									BgL_auxz00_2951 = (int) (((long) 2));
									STRUCT_SET(BgL_newz00_2364, BgL_auxz00_2951,
										BgL_arg3891z00_1196);
								}
								{	/* Module/eval.scm 153 */
									obj_t BgL_auxz00_2956;

									int BgL_auxz00_2954;

									BgL_auxz00_2956 = BINT(BgL_arg3890z00_1195);
									BgL_auxz00_2954 = (int) (((long) 1));
									STRUCT_SET(BgL_newz00_2364, BgL_auxz00_2954, BgL_auxz00_2956);
								}
								{	/* Module/eval.scm 153 */
									int BgL_auxz00_2959;

									BgL_auxz00_2959 = (int) (((long) 0));
									STRUCT_SET(BgL_newz00_2364, BgL_auxz00_2959,
										BgL_arg3889z00_1194);
								}
								BgL_arg3887z00_1192 = BgL_newz00_2364;
						}}
						{	/* Module/eval.scm 152 */
							obj_t BgL_list3888z00_1193;

							BgL_list3888z00_1193 = MAKE_PAIR(BgL_arg3887z00_1192, BNIL);
							return BgL_list3888z00_1193;
						}
					}
				else
					{	/* Module/eval.scm 146 */
						return CNST_TABLE_REF(((long) 10));
		}}}
	}



/* _eval-finalizer */
	obj_t BGl__evalzd2finaliza7erz75zzmodule_evalz00(obj_t BgL_envz00_2687)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 144 */
			return BGl_evalzd2finaliza7erz75zzmodule_evalz00();
		}
	}



/* <anonymous:3895> */
	obj_t BGl_zc3anonymousza33895ze3z83zzmodule_evalz00(obj_t BgL_envz00_2690)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 156 */
			{

				{	/* Module/eval.scm 157 */
					obj_t BgL_g3755z00_1201;

					obj_t BgL_g3756z00_1202;

					BgL_g3755z00_1201 =
						BGl_getzd2evaluatedzd2globalsz00zzmodule_evalz00();
					BgL_g3756z00_1202 = CNST_TABLE_REF(((long) 11));
					{
						obj_t BgL_globalsz00_1204;

						obj_t BgL_initza2za2_1205;

						BgL_globalsz00_1204 = BgL_g3755z00_1201;
						BgL_initza2za2_1205 = BgL_g3756z00_1202;
					BgL_zc3anonymousza33896ze3z83_1206:
						if (NULLP(BgL_globalsz00_1204))
							{	/* Module/eval.scm 160 */
								obj_t BgL_arg3898z00_1208;

								obj_t BgL_arg3899z00_1209;

								BgL_arg3898z00_1208 = CNST_TABLE_REF(((long) 12));
								{	/* Module/eval.scm 162 */
									obj_t BgL_arg3900z00_1210;

									obj_t BgL_arg3901z00_1211;

									BgL_arg3900z00_1210 =
										BGl_getzd2evalzd2srfizd2librarieszd2zzmodule_evalz00();
									{	/* Module/eval.scm 164 */
										obj_t BgL_arg3902z00_1212;

										obj_t BgL_arg3903z00_1213;

										BgL_arg3902z00_1212 =
											BGl_getzd2evaluatedzd2classzd2macroszd2zzmodule_evalz00();
										{	/* Module/eval.scm 166 */
											obj_t BgL_arg3904z00_1214;

											obj_t BgL_arg3905z00_1215;

											BgL_arg3904z00_1214 =
												bgl_reverse_bang(BgL_initza2za2_1205);
											{	/* Module/eval.scm 168 */
												obj_t BgL_arg3906z00_1216;

												obj_t BgL_arg3908z00_1217;

												{	/* Module/eval.scm 168 */
													obj_t BgL_l3764z00_1218;

													BgL_l3764z00_1218 =
														BGl_za2evalzd2librariesza2zd2zzmodule_evalz00;
													if (NULLP(BgL_l3764z00_1218))
														{	/* Module/eval.scm 168 */
															BgL_arg3906z00_1216 = BNIL;
														}
													else
														{	/* Module/eval.scm 168 */
															obj_t BgL_head3766z00_1220;

															BgL_head3766z00_1220 =
																MAKE_PAIR(BGl_library_ez00zzmodule_evalz00(CAR
																	(BgL_l3764z00_1218)), BNIL);
															{	/* Module/eval.scm 168 */
																obj_t BgL_g3769z00_1221;

																BgL_g3769z00_1221 = CDR(BgL_l3764z00_1218);
																{
																	obj_t BgL_l3764z00_1223;

																	obj_t BgL_tail3767z00_1224;

																	BgL_l3764z00_1223 = BgL_g3769z00_1221;
																	BgL_tail3767z00_1224 = BgL_head3766z00_1220;
																BgL_zc3anonymousza33910ze3z83_1225:
																	if (NULLP(BgL_l3764z00_1223))
																		{	/* Module/eval.scm 168 */
																			BgL_arg3906z00_1216 =
																				BgL_head3766z00_1220;
																		}
																	else
																		{	/* Module/eval.scm 168 */
																			obj_t BgL_newtail3768z00_1227;

																			BgL_newtail3768z00_1227 =
																				MAKE_PAIR
																				(BGl_library_ez00zzmodule_evalz00(CAR
																					(BgL_l3764z00_1223)), BNIL);
																			SET_CDR(BgL_tail3767z00_1224,
																				BgL_newtail3768z00_1227);
																			{
																				obj_t BgL_tail3767z00_2987;

																				obj_t BgL_l3764z00_2985;

																				BgL_l3764z00_2985 =
																					CDR(BgL_l3764z00_1223);
																				BgL_tail3767z00_2987 =
																					BgL_newtail3768z00_1227;
																				BgL_tail3767z00_1224 =
																					BgL_tail3767z00_2987;
																				BgL_l3764z00_1223 = BgL_l3764z00_2985;
																				goto BgL_zc3anonymousza33910ze3z83_1225;
																			}
																		}
																}
															}
														}
												}
												BgL_arg3908z00_1217 = MAKE_PAIR(BUNSPEC, BNIL);
												BgL_arg3905z00_1215 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3906z00_1216, BgL_arg3908z00_1217);
											}
											BgL_arg3903z00_1213 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3904z00_1214, BgL_arg3905z00_1215);
										}
										BgL_arg3901z00_1211 =
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3902z00_1212, BgL_arg3903z00_1213);
									}
									BgL_arg3899z00_1209 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3900z00_1210, BgL_arg3901z00_1211);
								}
								return MAKE_PAIR(BgL_arg3898z00_1208, BgL_arg3899z00_1209);
							}
						else
							{	/* Module/eval.scm 170 */
								obj_t BgL_gz00_1236;

								BgL_gz00_1236 = CAR(BgL_globalsz00_1204);
								BGl_setzd2evalzd2typesz12z12zzmodule_evalz00(BgL_gz00_1236);
								{	/* Module/eval.scm 172 */
									obj_t BgL_arg3919z00_1237;

									obj_t BgL_arg3920z00_1238;

									BgL_arg3919z00_1237 = CDR(BgL_globalsz00_1204);
									if (BGl_iszd2azf3z21zz__objectz00(BgL_gz00_1236,
											BGl_evglobalz00zzmodule_evalz00))
										{	/* Module/eval.scm 173 */
											BgL_arg3920z00_1238 = BgL_initza2za2_1205;
										}
									else
										{	/* Module/eval.scm 173 */
											{	/* Module/eval.scm 176 */
												BgL_globalz00_bglt BgL_obj3757z00_1240;

												BgL_obj3757z00_1240 =
													((BgL_globalz00_bglt)
													(BgL_globalz00_bglt) (BgL_gz00_1236));
												{	/* Module/eval.scm 176 */
													BgL_evglobalz00_bglt BgL_arg3922z00_1241;

													BgL_arg3922z00_1241 =
														BGl_wideningzd2evglobalzd2zzmodule_evalz00();
													{	/* Module/eval.scm 176 */
														obj_t BgL_auxz00_3004;

														BgL_objectz00_bglt BgL_auxz00_3002;

														BgL_auxz00_3004 = (obj_t) (BgL_arg3922z00_1241);
														BgL_auxz00_3002 =
															(BgL_objectz00_bglt) (BgL_obj3757z00_1240);
														BGL_OBJECT_WIDENING_SET(BgL_auxz00_3002,
															BgL_auxz00_3004);
													}
												}
												BGL_OBJECT_CLASS_NUM_SET(
													(BgL_objectz00_bglt) (BgL_obj3757z00_1240),
													BGl_classzd2numzd2zz__objectz00
													(BGl_evglobalz00zzmodule_evalz00));
												BgL_obj3757z00_1240;
											}
											{	/* Module/eval.scm 178 */
												BgL_nodez00_bglt BgL_arg3924z00_1243;

												{	/* Module/eval.scm 178 */
													bool_t BgL_testz00_3010;

													{	/* Module/eval.scm 178 */
														BgL_valuez00_bglt BgL_arg3930z00_1249;

														{
															BgL_variablez00_bglt BgL_auxz00_3011;

															BgL_auxz00_3011 =
																(BgL_variablez00_bglt) (BgL_gz00_1236);
															BgL_arg3930z00_1249 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_auxz00_3011))->BgL_valuez00);
														}
														{	/* Module/eval.scm 178 */
															obj_t BgL_obj2029z00_2354;

															BgL_obj2029z00_2354 =
																(obj_t) (BgL_arg3930z00_1249);
															BgL_testz00_3010 =
																BGl_iszd2azf3z21zz__objectz00
																(BgL_obj2029z00_2354, BGl_svarz00zzast_varz00);
														}
													}
													if (BgL_testz00_3010)
														{	/* Module/eval.scm 178 */
															{	/* Module/eval.scm 179 */
																BgL_variablez00_bglt BgL_obj1616z00_2355;

																obj_t BgL_val1615z00_2356;

																BgL_obj1616z00_2355 =
																	(BgL_variablez00_bglt) (BgL_gz00_1236);
																BgL_val1615z00_2356 =
																	CNST_TABLE_REF(((long) 13));
																((((BgL_variablez00_bglt)
																			CREF(BgL_obj1616z00_2355))->
																		BgL_accessz00) =
																	((obj_t) BgL_val1615z00_2356), BUNSPEC);
															}
															BgL_arg3924z00_1243 =
																BGl_definezd2primopzd2refzd2ze3nodez31zzast_sexpz00
																((BgL_globalz00_bglt) (BgL_gz00_1236),
																BGl_locationzd2ze3nodez31zzast_sexpz00(
																	(BgL_globalz00_bglt) (BgL_gz00_1236)));
														}
													else
														{	/* Module/eval.scm 182 */
															bool_t BgL_testz00_3023;

															{	/* Module/eval.scm 182 */
																BgL_valuez00_bglt BgL_arg3929z00_1248;

																{
																	BgL_variablez00_bglt BgL_auxz00_3024;

																	BgL_auxz00_3024 =
																		(BgL_variablez00_bglt) (BgL_gz00_1236);
																	BgL_arg3929z00_1248 =
																		(((BgL_variablez00_bglt)
																			CREF(BgL_auxz00_3024))->BgL_valuez00);
																}
																{	/* Module/eval.scm 182 */
																	obj_t BgL_obj2049z00_2358;

																	BgL_obj2049z00_2358 =
																		(obj_t) (BgL_arg3929z00_1248);
																	BgL_testz00_3023 =
																		BGl_iszd2azf3z21zz__objectz00
																		(BgL_obj2049z00_2358,
																		BGl_scnstz00zzast_varz00);
																}
															}
															if (BgL_testz00_3023)
																{	/* Module/eval.scm 182 */
																	BgL_arg3924z00_1243 =
																		BGl_definezd2primopzd2refzd2ze3nodez31zzast_sexpz00
																		((BgL_globalz00_bglt) (BgL_gz00_1236),
																		BGl_locationzd2ze3nodez31zzast_sexpz00(
																			(BgL_globalz00_bglt) (BgL_gz00_1236)));
																}
															else
																{	/* Module/eval.scm 182 */
																	BgL_arg3924z00_1243 =
																		BGl_definezd2primopzd2ze3nodeze3zzast_sexpz00
																		((BgL_globalz00_bglt) (BgL_gz00_1236));
																}
														}
												}
												BgL_arg3920z00_1238 =
													MAKE_PAIR(
													(obj_t) (BgL_arg3924z00_1243), BgL_initza2za2_1205);
											}
										}
									{
										obj_t BgL_initza2za2_3038;

										obj_t BgL_globalsz00_3037;

										BgL_globalsz00_3037 = BgL_arg3919z00_1237;
										BgL_initza2za2_3038 = BgL_arg3920z00_1238;
										BgL_initza2za2_1205 = BgL_initza2za2_3038;
										BgL_globalsz00_1204 = BgL_globalsz00_3037;
										goto BgL_zc3anonymousza33896ze3z83_1206;
									}
								}
							}
					}
				}
			}
		}
	}



/* get-library-info */
	obj_t BGl_getzd2libraryzd2infoz00zzmodule_evalz00(obj_t BgL_libraryz00_80)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 195 */
			{	/* Module/eval.scm 196 */
				obj_t BgL__ortest_3758z00_1253;

				BgL__ortest_3758z00_1253 =
					BGl_libraryzd2infozd2zz__libraryz00(BgL_libraryz00_80);
				if (CBOOL(BgL__ortest_3758z00_1253))
					{	/* Module/eval.scm 196 */
						return BgL__ortest_3758z00_1253;
					}
				else
					{	/* Module/eval.scm 197 */
						obj_t BgL_initz00_1254;

						BgL_initz00_1254 =
							BGl_libraryzd2initzd2filez00zz__libraryz00(BgL_libraryz00_80);
						{	/* Module/eval.scm 197 */
							obj_t BgL_pathz00_1255;

							BgL_pathz00_1255 =
								BGl_findzd2filezf2pathz20zz__osz00(BgL_initz00_1254,
								BGl_za2libzd2dirza2zd2zzengine_paramz00);
							{	/* Module/eval.scm 198 */

								if (CBOOL(BgL_pathz00_1255))
									{	/* Module/eval.scm 199 */
										{	/* Module/eval.scm 201 */
											obj_t BgL_envz00_1257;

											BgL_envz00_1257 =
												BGl_defaultzd2environmentzd2zz__evalz00();
											{	/* Module/eval.scm 201 */

												BGl_loadqz00zz__evalz00(BgL_pathz00_1255,
													BgL_envz00_1257);
											}
										}
										{	/* Module/eval.scm 202 */
											obj_t BgL_iz00_1258;

											BgL_iz00_1258 =
												BGl_libraryzd2infozd2zz__libraryz00(BgL_libraryz00_80);
											if (CBOOL(BgL_iz00_1258))
												{	/* Module/eval.scm 203 */
													return BgL_iz00_1258;
												}
											else
												{	/* Module/eval.scm 205 */
													obj_t BgL_arg3932z00_1259;

													{	/* Module/eval.scm 205 */
														obj_t BgL_list3935z00_1262;

														BgL_list3935z00_1262 =
															MAKE_PAIR(BgL_initz00_1254, BNIL);
														BgL_arg3932z00_1259 =
															BGl_formatz00zz__r4_output_6_10_3z00
															(BGl_string4446z00zzmodule_evalz00,
															BgL_list3935z00_1262);
													}
													{	/* Module/eval.scm 205 */
														obj_t BgL_list3933z00_1260;

														{	/* Module/eval.scm 205 */
															obj_t BgL_arg3934z00_1261;

															BgL_arg3934z00_1261 =
																MAKE_PAIR(BgL_arg3932z00_1259, BNIL);
															BgL_list3933z00_1260 =
																MAKE_PAIR(BgL_libraryz00_80,
																BgL_arg3934z00_1261);
														}
														return
															BGl_warningz00zz__errorz00(BgL_list3933z00_1260);
													}
												}
										}
									}
								else
									{	/* Module/eval.scm 206 */
										obj_t BgL_arg3936z00_1263;

										{	/* Module/eval.scm 206 */
											obj_t BgL_list3939z00_1266;

											BgL_list3939z00_1266 = MAKE_PAIR(BgL_initz00_1254, BNIL);
											BgL_arg3936z00_1263 =
												BGl_formatz00zz__r4_output_6_10_3z00
												(BGl_string4447z00zzmodule_evalz00,
												BgL_list3939z00_1266);
										}
										{	/* Module/eval.scm 206 */
											obj_t BgL_list3937z00_1264;

											{	/* Module/eval.scm 206 */
												obj_t BgL_arg3938z00_1265;

												BgL_arg3938z00_1265 =
													MAKE_PAIR(BgL_arg3936z00_1263, BNIL);
												BgL_list3937z00_1264 =
													MAKE_PAIR(BgL_libraryz00_80, BgL_arg3938z00_1265);
											}
											return BGl_warningz00zz__errorz00(BgL_list3937z00_1264);
										}
									}
							}
						}
					}
			}
		}
	}



/* library_e */
	obj_t BGl_library_ez00zzmodule_evalz00(obj_t BgL_libz00_81)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 213 */
			{	/* Module/eval.scm 214 */
				obj_t BgL_infoz00_1267;

				BgL_infoz00_1267 =
					BGl_getzd2libraryzd2infoz00zzmodule_evalz00(BgL_libz00_81);
				{	/* Module/eval.scm 215 */
					bool_t BgL_testz00_3062;

					{	/* Module/eval.scm 215 */
						bool_t BgL_testz00_3063;

						if (STRUCTP(BgL_infoz00_1267))
							{	/* Module/eval.scm 215 */
								BgL_testz00_3063 =
									(STRUCT_KEY(BgL_infoz00_1267) == CNST_TABLE_REF(((long) 14)));
							}
						else
							{	/* Module/eval.scm 215 */
								BgL_testz00_3063 = ((bool_t) 0);
							}
						if (BgL_testz00_3063)
							{	/* Module/eval.scm 215 */
								BgL_testz00_3062 =
									CBOOL(STRUCT_REF(BgL_infoz00_1267, (int) (((long) 6))));
							}
						else
							{	/* Module/eval.scm 215 */
								BgL_testz00_3062 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_3062)
						{	/* Module/eval.scm 216 */
							obj_t BgL_initz00_1269;

							BgL_initz00_1269 =
								BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00
								(STRUCT_REF(BgL_infoz00_1267, (int) (((long) 6))));
							{	/* Module/eval.scm 217 */
								bool_t BgL_testz00_3075;

								{	/* Module/eval.scm 217 */
									obj_t BgL_arg3991z00_1317;

									BgL_arg3991z00_1317 =
										BGl_thezd2backendzd2zzbackend_backendz00();
									{
										BgL_backendz00_bglt BgL_auxz00_3077;

										BgL_auxz00_3077 =
											(BgL_backendz00_bglt) (BgL_arg3991z00_1317);
										BgL_testz00_3075 =
											(((BgL_backendz00_bglt) CREF(BgL_auxz00_3077))->
											BgL_pragmazd2supportzd2);
								}}
								if (BgL_testz00_3075)
									{	/* Module/eval.scm 218 */
										obj_t BgL_arg3942z00_1271;

										obj_t BgL_arg3943z00_1272;

										BgL_arg3942z00_1271 = CNST_TABLE_REF(((long) 12));
										{	/* Module/eval.scm 219 */
											obj_t BgL_arg3944z00_1273;

											obj_t BgL_arg3945z00_1274;

											{	/* Module/eval.scm 219 */
												obj_t BgL_arg3949z00_1278;

												obj_t BgL_arg3950z00_1279;

												BgL_arg3949z00_1278 = CNST_TABLE_REF(((long) 15));
												{	/* Module/eval.scm 219 */
													obj_t BgL_arg3951z00_1280;

													{	/* Module/eval.scm 219 */
														obj_t BgL_arg3956z00_1284;

														obj_t BgL_arg3958z00_1285;

														{	/* Module/eval.scm 221 */
															obj_t BgL_arg3961z00_1288;

															obj_t BgL_arg3962z00_1289;

															{	/* Module/eval.scm 221 */
																obj_t BgL_res4417z00_2408;

																{	/* Module/eval.scm 221 */
																	obj_t BgL_arg2063z00_2407;

																	BgL_arg2063z00_2407 =
																		SYMBOL_TO_STRING(BgL_initz00_1269);
																	BgL_res4417z00_2408 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg2063z00_2407);
																}
																BgL_arg3961z00_1288 = BgL_res4417z00_2408;
															}
															{	/* Module/eval.scm 222 */
																obj_t BgL_arg3963z00_1290;

																BgL_arg3963z00_1290 =
																	STRUCT_REF(BgL_infoz00_1267,
																	(int) (((long) 6)));
																{	/* Module/eval.scm 222 */
																	obj_t BgL_res4418z00_2414;

																	{	/* Module/eval.scm 222 */
																		obj_t BgL_symbolz00_2412;

																		BgL_symbolz00_2412 = BgL_arg3963z00_1290;
																		{	/* Module/eval.scm 222 */
																			obj_t BgL_arg2063z00_2413;

																			BgL_arg2063z00_2413 =
																				SYMBOL_TO_STRING(BgL_symbolz00_2412);
																			BgL_res4418z00_2414 =
																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																				(BgL_arg2063z00_2413);
																	}}
																	BgL_arg3962z00_1289 = BgL_res4418z00_2414;
															}}
															BgL_arg3956z00_1284 =
																bigloo_module_mangle(BgL_arg3961z00_1288,
																BgL_arg3962z00_1289);
														}
														{	/* Module/eval.scm 223 */
															obj_t BgL_res4419z00_2417;

															{	/* Module/eval.scm 223 */
																obj_t BgL_symbolz00_2415;

																BgL_symbolz00_2415 =
																	BGl_za2moduleza2z00zzmodule_modulez00;
																{	/* Module/eval.scm 223 */
																	obj_t BgL_arg2063z00_2416;

																	BgL_arg2063z00_2416 =
																		SYMBOL_TO_STRING(BgL_symbolz00_2415);
																	BgL_res4419z00_2417 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg2063z00_2416);
															}}
															BgL_arg3958z00_1285 = BgL_res4419z00_2417;
														}
														{	/* Module/eval.scm 219 */
															obj_t BgL_list3959z00_1286;

															{	/* Module/eval.scm 219 */
																obj_t BgL_arg3960z00_1287;

																BgL_arg3960z00_1287 =
																	MAKE_PAIR(BgL_arg3958z00_1285, BNIL);
																BgL_list3959z00_1286 =
																	MAKE_PAIR(BgL_arg3956z00_1284,
																	BgL_arg3960z00_1287);
															}
															BgL_arg3951z00_1280 =
																BGl_formatz00zz__r4_output_6_10_3z00
																(BGl_string4448z00zzmodule_evalz00,
																BgL_list3959z00_1286);
													}}
													{	/* Module/eval.scm 219 */
														obj_t BgL_list3954z00_1282;

														BgL_list3954z00_1282 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3950z00_1279 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3951z00_1280, BgL_list3954z00_1282);
												}}
												BgL_arg3944z00_1273 =
													MAKE_PAIR(BgL_arg3949z00_1278, BgL_arg3950z00_1279);
											}
											{	/* Module/eval.scm 224 */
												obj_t BgL_arg3964z00_1291;

												obj_t BgL_arg3965z00_1292;

												{	/* Module/eval.scm 224 */
													obj_t BgL_arg3966z00_1293;

													obj_t BgL_arg3967z00_1294;

													BgL_arg3966z00_1293 = CNST_TABLE_REF(((long) 5));
													{	/* Module/eval.scm 224 */
														obj_t BgL_list3968z00_1295;

														{	/* Module/eval.scm 224 */
															obj_t BgL_arg3969z00_1296;

															obj_t BgL_arg3970z00_1297;

															BgL_arg3969z00_1296 = CNST_TABLE_REF(((long) 16));
															BgL_arg3970z00_1297 = MAKE_PAIR(BNIL, BNIL);
															BgL_list3968z00_1295 =
																MAKE_PAIR(BgL_arg3969z00_1296,
																BgL_arg3970z00_1297);
														}
														BgL_arg3967z00_1294 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(CNST_TABLE_REF(((long) 17)),
															BgL_list3968z00_1295);
													}
													BgL_arg3964z00_1291 =
														MAKE_PAIR(BgL_arg3966z00_1293, BgL_arg3967z00_1294);
												}
												{	/* Module/eval.scm 224 */
													obj_t BgL_arg3972z00_1298;

													{	/* Module/eval.scm 224 */
														obj_t BgL_arg3975z00_1301;

														obj_t BgL_arg3976z00_1302;

														BgL_arg3975z00_1301 = CNST_TABLE_REF(((long) 18));
														{	/* Module/eval.scm 224 */
															obj_t BgL_list3977z00_1303;

															BgL_list3977z00_1303 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg3976z00_1302 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_libz00_81, BgL_list3977z00_1303);
														}
														BgL_arg3972z00_1298 =
															MAKE_PAIR(BgL_arg3975z00_1301,
															BgL_arg3976z00_1302);
													}
													{	/* Module/eval.scm 224 */
														obj_t BgL_list3974z00_1300;

														BgL_list3974z00_1300 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3965z00_1292 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3972z00_1298, BgL_list3974z00_1300);
												}}
												BgL_arg3945z00_1274 =
													MAKE_PAIR(BgL_arg3964z00_1291, BgL_arg3965z00_1292);
											}
											{	/* Module/eval.scm 218 */
												obj_t BgL_list3947z00_1276;

												{	/* Module/eval.scm 218 */
													obj_t BgL_arg3948z00_1277;

													BgL_arg3948z00_1277 = MAKE_PAIR(BNIL, BNIL);
													BgL_list3947z00_1276 =
														MAKE_PAIR(BgL_arg3945z00_1274, BgL_arg3948z00_1277);
												}
												BgL_arg3943z00_1272 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3944z00_1273, BgL_list3947z00_1276);
										}}
										return MAKE_PAIR(BgL_arg3942z00_1271, BgL_arg3943z00_1272);
									}
								else
									{	/* Module/eval.scm 225 */
										obj_t BgL_arg3978z00_1304;

										obj_t BgL_arg3979z00_1305;

										{	/* Module/eval.scm 225 */
											obj_t BgL_arg3980z00_1306;

											obj_t BgL_arg3981z00_1307;

											BgL_arg3980z00_1306 = CNST_TABLE_REF(((long) 5));
											{	/* Module/eval.scm 225 */
												obj_t BgL_list3982z00_1308;

												{	/* Module/eval.scm 225 */
													obj_t BgL_arg3983z00_1309;

													obj_t BgL_arg3984z00_1310;

													BgL_arg3983z00_1309 = CNST_TABLE_REF(((long) 16));
													BgL_arg3984z00_1310 = MAKE_PAIR(BNIL, BNIL);
													BgL_list3982z00_1308 =
														MAKE_PAIR(BgL_arg3983z00_1309, BgL_arg3984z00_1310);
												}
												BgL_arg3981z00_1307 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(CNST_TABLE_REF(((long) 17)), BgL_list3982z00_1308);
											}
											BgL_arg3978z00_1304 =
												MAKE_PAIR(BgL_arg3980z00_1306, BgL_arg3981z00_1307);
										}
										{	/* Module/eval.scm 225 */
											obj_t BgL_arg3985z00_1311;

											{	/* Module/eval.scm 225 */
												obj_t BgL_arg3988z00_1314;

												obj_t BgL_arg3989z00_1315;

												BgL_arg3988z00_1314 = CNST_TABLE_REF(((long) 18));
												{	/* Module/eval.scm 225 */
													obj_t BgL_list3990z00_1316;

													BgL_list3990z00_1316 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3989z00_1315 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_libz00_81, BgL_list3990z00_1316);
												}
												BgL_arg3985z00_1311 =
													MAKE_PAIR(BgL_arg3988z00_1314, BgL_arg3989z00_1315);
											}
											{	/* Module/eval.scm 225 */
												obj_t BgL_list3987z00_1313;

												BgL_list3987z00_1313 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3979z00_1305 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3985z00_1311, BgL_list3987z00_1313);
										}}
										return MAKE_PAIR(BgL_arg3978z00_1304, BgL_arg3979z00_1305);
									}
							}
						}
					else
						{	/* Module/eval.scm 226 */
							obj_t BgL_list3993z00_1319;

							{	/* Module/eval.scm 226 */
								obj_t BgL_arg3994z00_1320;

								BgL_arg3994z00_1320 =
									MAKE_PAIR(BGl_string4449z00zzmodule_evalz00, BNIL);
								BgL_list3993z00_1319 =
									MAKE_PAIR(BgL_libz00_81, BgL_arg3994z00_1320);
							}
							return BGl_warningz00zz__errorz00(BgL_list3993z00_1319);
						}
				}
			}
		}
	}



/* set-eval-types! */
	obj_t BGl_setzd2evalzd2typesz12z12zzmodule_evalz00(obj_t BgL_globalz00_82)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 234 */
			{	/* Module/eval.scm 235 */
				BgL_valuez00_bglt BgL_valz00_1322;

				{
					BgL_variablez00_bglt BgL_auxz00_3132;

					BgL_auxz00_3132 = (BgL_variablez00_bglt) (BgL_globalz00_82);
					BgL_valz00_1322 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_3132))->BgL_valuez00);
				}
				{	/* Module/eval.scm 236 */
					bool_t BgL_testz00_3135;

					{	/* Module/eval.scm 236 */
						obj_t BgL_obj1955z00_2419;

						BgL_obj1955z00_2419 = (obj_t) (BgL_valz00_1322);
						BgL_testz00_3135 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_2419,
							BGl_sfunz00zzast_varz00);
					}
					if (BgL_testz00_3135)
						{	/* Module/eval.scm 236 */
							return BFALSE;
						}
					else
						{	/* Module/eval.scm 237 */
							BgL_typez00_bglt BgL_typez00_1324;

							{
								BgL_variablez00_bglt BgL_auxz00_3138;

								BgL_auxz00_3138 = (BgL_variablez00_bglt) (BgL_globalz00_82);
								BgL_typez00_1324 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_3138))->BgL_typez00);
							}
							if (((obj_t) (BgL_typez00_1324) == BGl_za2_za2z00zztype_cachez00))
								{
									BgL_typez00_bglt BgL_auxz00_3146;

									BgL_variablez00_bglt BgL_auxz00_3144;

									BgL_auxz00_3146 =
										(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00);
									BgL_auxz00_3144 = (BgL_variablez00_bglt) (BgL_globalz00_82);
									return
										((((BgL_variablez00_bglt) CREF(BgL_auxz00_3144))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_auxz00_3146), BUNSPEC);
								}
							else
								{	/* Module/eval.scm 239 */
									if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_1324))
										{	/* Module/eval.scm 241 */
											return BFALSE;
										}
									else
										{	/* Module/eval.scm 242 */
											obj_t BgL_arg4001z00_1329;

											{
												BgL_variablez00_bglt BgL_auxz00_3151;

												BgL_auxz00_3151 =
													(BgL_variablez00_bglt) (BgL_globalz00_82);
												BgL_arg4001z00_1329 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_3151))->
													BgL_idz00);
											}
											return
												BGl_errorz00zz__errorz00
												(BGl_string4450z00zzmodule_evalz00,
												BGl_string4451z00zzmodule_evalz00, BgL_arg4001z00_1329);
										}
								}
						}
				}
			}
		}
	}



/* get-evaluated-globals */
	obj_t BGl_getzd2evaluatedzd2globalsz00zzmodule_evalz00()
	{
		AN_OBJECT;
		{	/* Module/eval.scm 249 */
			{	/* Module/eval.scm 250 */
				obj_t BgL_globalsz00_1330;

				{	/* Module/eval.scm 250 */
					obj_t BgL_cellvalz00_3155;

					BgL_cellvalz00_3155 =
						BGl_getzd2evaluatedzd2classeszd2accesseszd2zzmodule_evalz00();
					BgL_globalsz00_1330 = MAKE_CELL(BgL_cellvalz00_3155);
				}
				{	/* Module/eval.scm 250 */

					{	/* Module/eval.scm 251 */
						bool_t BgL_testz00_3157;

						if (CBOOL(BGl_za2allzd2evalzf3za2z21zzmodule_evalz00))
							{	/* Module/eval.scm 251 */
								BgL_testz00_3157 = ((bool_t) 1);
							}
						else
							{	/* Module/eval.scm 251 */
								if (CBOOL(BGl_za2allzd2exportzd2evalzf3za2zf3zzmodule_evalz00))
									{	/* Module/eval.scm 251 */
										BgL_testz00_3157 = ((bool_t) 1);
									}
								else
									{	/* Module/eval.scm 251 */
										BgL_testz00_3157 =
											CBOOL
											(BGl_za2allzd2modulezd2evalzf3za2zf3zzmodule_evalz00);
									}
							}
						if (BgL_testz00_3157)
							{	/* Module/eval.scm 252 */
								obj_t BgL_scopezd2lstzd2_1332;

								if (CBOOL(BGl_za2allzd2evalzf3za2z21zzmodule_evalz00))
									{	/* Module/eval.scm 253 */
										BgL_scopezd2lstzd2_1332 = CNST_TABLE_REF(((long) 19));
									}
								else
									{	/* Module/eval.scm 253 */
										if (CBOOL
											(BGl_za2allzd2modulezd2evalzf3za2zf3zzmodule_evalz00))
											{	/* Module/eval.scm 254 */
												BgL_scopezd2lstzd2_1332 = CNST_TABLE_REF(((long) 20));
											}
										else
											{	/* Module/eval.scm 254 */
												BgL_scopezd2lstzd2_1332 = CNST_TABLE_REF(((long) 21));
									}}
								{	/* Module/eval.scm 258 */
									obj_t BgL_zc3anonymousza34005ze3z83_2691;

									BgL_zc3anonymousza34005ze3z83_2691 =
										make_fx_procedure
										(BGl_zc3anonymousza34005ze3z83zzmodule_evalz00,
										(int) (((long) 1)), (int) (((long) 2)));
									PROCEDURE_SET(BgL_zc3anonymousza34005ze3z83_2691,
										(int) (((long) 0)), BgL_globalsz00_1330);
									PROCEDURE_SET(BgL_zc3anonymousza34005ze3z83_2691,
										(int) (((long) 1)), BgL_scopezd2lstzd2_1332);
									BGl_forzd2eachzd2globalz12z12zzast_envz00
										(BgL_zc3anonymousza34005ze3z83_2691, BNIL);
							}}
						else
							{	/* Module/eval.scm 251 */
								BFALSE;
							}
					}
					{
						obj_t BgL_evalzd2exportedzd2_1345;

						obj_t BgL_resz00_1346;

						BgL_evalzd2exportedzd2_1345 =
							BGl_za2evalzd2exportedza2zd2zzmodule_evalz00;
						BgL_resz00_1346 = CELL_REF(BgL_globalsz00_1330);
					BgL_zc3anonymousza34011ze3z83_1347:
						if (NULLP(BgL_evalzd2exportedzd2_1345))
							{	/* Module/eval.scm 264 */
								return BgL_resz00_1346;
							}
						else
							{	/* Module/eval.scm 266 */
								obj_t BgL_varze2moduleze2posz00_1349;

								BgL_varze2moduleze2posz00_1349 =
									CAR(BgL_evalzd2exportedzd2_1345);
								{	/* Module/eval.scm 267 */
									obj_t BgL_gz00_1350;

									{	/* Module/eval.scm 267 */
										bool_t BgL_testz00_3181;

										{	/* Module/eval.scm 267 */
											obj_t BgL_pairz00_2429;

											BgL_pairz00_2429 = BgL_varze2moduleze2posz00_1349;
											{	/* Module/eval.scm 267 */
												obj_t BgL_pairz00_2432;

												BgL_pairz00_2432 = CDR(BgL_pairz00_2429);
												BgL_testz00_3181 = CBOOL(CAR(BgL_pairz00_2432));
											}
										}
										if (BgL_testz00_3181)
											{	/* Module/eval.scm 268 */
												obj_t BgL_arg4034z00_1372;

												obj_t BgL_arg4035z00_1373;

												BgL_arg4034z00_1372 =
													CAR(BgL_varze2moduleze2posz00_1349);
												{	/* Module/eval.scm 269 */
													obj_t BgL_pairz00_2434;

													BgL_pairz00_2434 = BgL_varze2moduleze2posz00_1349;
													BgL_arg4035z00_1373 = CAR(CDR(BgL_pairz00_2434));
												}
												BgL_gz00_1350 =
													BGl_findzd2globalzf2modulez20zzast_envz00
													(BgL_arg4034z00_1372, BgL_arg4035z00_1373);
											}
										else
											{	/* Module/eval.scm 267 */
												BgL_gz00_1350 =
													BGl_findzd2globalzd2zzast_envz00(CAR
													(BgL_varze2moduleze2posz00_1349), BNIL);
											}
									}
									if (BGl_iszd2azf3z21zz__objectz00(BgL_gz00_1350,
											BGl_globalz00zzast_varz00))
										{	/* Module/eval.scm 280 */
											bool_t BgL_testz00_3193;

											{
												BgL_globalz00_bglt BgL_auxz00_3194;

												BgL_auxz00_3194 = (BgL_globalz00_bglt) (BgL_gz00_1350);
												BgL_testz00_3193 =
													(((BgL_globalz00_bglt) CREF(BgL_auxz00_3194))->
													BgL_evaluablezf3zf3);
											}
											if (BgL_testz00_3193)
												{	/* Module/eval.scm 289 */
													obj_t BgL_arg4015z00_1353;

													obj_t BgL_arg4016z00_1354;

													BgL_arg4015z00_1353 =
														CDR(BgL_evalzd2exportedzd2_1345);
													BgL_arg4016z00_1354 =
														MAKE_PAIR(BgL_gz00_1350, BgL_resz00_1346);
													{
														obj_t BgL_resz00_3200;

														obj_t BgL_evalzd2exportedzd2_3199;

														BgL_evalzd2exportedzd2_3199 = BgL_arg4015z00_1353;
														BgL_resz00_3200 = BgL_arg4016z00_1354;
														BgL_resz00_1346 = BgL_resz00_3200;
														BgL_evalzd2exportedzd2_1345 =
															BgL_evalzd2exportedzd2_3199;
														goto BgL_zc3anonymousza34011ze3z83_1347;
													}
												}
											else
												{	/* Module/eval.scm 280 */
													{	/* Module/eval.scm 282 */
														obj_t BgL_arg4017z00_1355;

														obj_t BgL_arg4020z00_1358;

														{	/* Module/eval.scm 282 */
															obj_t BgL_arg4023z00_1361;

															{	/* Module/eval.scm 282 */
																obj_t BgL_pairz00_2442;

																BgL_pairz00_2442 =
																	BgL_varze2moduleze2posz00_1349;
																BgL_arg4023z00_1361 =
																	CAR(CDR(CDR(BgL_pairz00_2442)));
															}
															BgL_arg4017z00_1355 =
																BGl_findzd2locationzd2zztools_locationz00
																(BgL_arg4023z00_1361);
														}
														BgL_arg4020z00_1358 =
															CAR(BgL_varze2moduleze2posz00_1349);
														{	/* Module/eval.scm 281 */
															obj_t BgL_list4022z00_1360;

															BgL_list4022z00_1360 = MAKE_PAIR(BNIL, BNIL);
															BGl_userzd2errorzf2locationz20zztools_errorz00
																(BgL_arg4017z00_1355,
																BGl_string4452z00zzmodule_evalz00,
																BGl_string4453z00zzmodule_evalz00,
																BgL_arg4020z00_1358, BgL_list4022z00_1360);
														}
													}
													{
														obj_t BgL_evalzd2exportedzd2_3208;

														BgL_evalzd2exportedzd2_3208 =
															CDR(BgL_evalzd2exportedzd2_1345);
														BgL_evalzd2exportedzd2_1345 =
															BgL_evalzd2exportedzd2_3208;
														goto BgL_zc3anonymousza34011ze3z83_1347;
													}
												}
										}
									else
										{	/* Module/eval.scm 272 */
											{	/* Module/eval.scm 274 */
												obj_t BgL_arg4025z00_1363;

												obj_t BgL_arg4028z00_1366;

												{	/* Module/eval.scm 274 */
													obj_t BgL_arg4031z00_1369;

													{	/* Module/eval.scm 274 */
														obj_t BgL_pairz00_2450;

														BgL_pairz00_2450 = BgL_varze2moduleze2posz00_1349;
														BgL_arg4031z00_1369 =
															CAR(CDR(CDR(BgL_pairz00_2450)));
													}
													BgL_arg4025z00_1363 =
														BGl_findzd2locationzd2zztools_locationz00
														(BgL_arg4031z00_1369);
												}
												BgL_arg4028z00_1366 =
													CAR(BgL_varze2moduleze2posz00_1349);
												{	/* Module/eval.scm 273 */
													obj_t BgL_list4030z00_1368;

													BgL_list4030z00_1368 = MAKE_PAIR(BNIL, BNIL);
													BGl_userzd2errorzf2locationz20zztools_errorz00
														(BgL_arg4025z00_1363,
														BGl_string4452z00zzmodule_evalz00,
														BGl_string4454z00zzmodule_evalz00,
														BgL_arg4028z00_1366, BgL_list4030z00_1368);
												}
											}
											{
												obj_t BgL_evalzd2exportedzd2_3217;

												BgL_evalzd2exportedzd2_3217 =
													CDR(BgL_evalzd2exportedzd2_1345);
												BgL_evalzd2exportedzd2_1345 =
													BgL_evalzd2exportedzd2_3217;
												goto BgL_zc3anonymousza34011ze3z83_1347;
											}
										}
								}
							}
					}
				}
			}
		}
	}



/* <anonymous:4005> */
	obj_t BGl_zc3anonymousza34005ze3z83zzmodule_evalz00(obj_t BgL_envz00_2692,
		obj_t BgL_gz00_2695)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 257 */
			{	/* Module/eval.scm 258 */
				obj_t BgL_globalsz00_2693;

				obj_t BgL_scopezd2lstzd2_2694;

				BgL_globalsz00_2693 =
					PROCEDURE_REF(BgL_envz00_2692, (int) (((long) 0)));
				BgL_scopezd2lstzd2_2694 =
					PROCEDURE_REF(BgL_envz00_2692, (int) (((long) 1)));
				{
					obj_t BgL_gz00_1335;

					BgL_gz00_1335 = BgL_gz00_2695;
					{	/* Module/eval.scm 258 */
						bool_t BgL_testz00_3223;

						{	/* Module/eval.scm 258 */
							bool_t BgL_testz00_3224;

							{	/* Module/eval.scm 258 */
								obj_t BgL_auxz00_3225;

								{	/* Module/eval.scm 258 */
									obj_t BgL_auxz00_3226;

									{
										BgL_globalz00_bglt BgL_auxz00_3227;

										BgL_auxz00_3227 = (BgL_globalz00_bglt) (BgL_gz00_1335);
										BgL_auxz00_3226 =
											(((BgL_globalz00_bglt) CREF(BgL_auxz00_3227))->
											BgL_importz00);
									}
									BgL_auxz00_3225 =
										BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3226,
										BgL_scopezd2lstzd2_2694);
								}
								BgL_testz00_3224 = CBOOL(BgL_auxz00_3225);
							}
							if (BgL_testz00_3224)
								{	/* Module/eval.scm 259 */
									bool_t BgL_testz00_3232;

									{
										BgL_globalz00_bglt BgL_auxz00_3233;

										BgL_auxz00_3233 = (BgL_globalz00_bglt) (BgL_gz00_1335);
										BgL_testz00_3232 =
											(((BgL_globalz00_bglt) CREF(BgL_auxz00_3233))->
											BgL_evaluablezf3zf3);
									}
									if (BgL_testz00_3232)
										{	/* Module/eval.scm 260 */
											obj_t BgL__ortest_3759z00_1340;

											BgL__ortest_3759z00_1340 =
												BGl_za2libzd2modeza2zd2zzengine_paramz00;
											if (CBOOL(BgL__ortest_3759z00_1340))
												{	/* Module/eval.scm 260 */
													BgL_testz00_3223 = CBOOL(BgL__ortest_3759z00_1340);
												}
											else
												{	/* Module/eval.scm 260 */
													bool_t BgL_testz00_3239;

													{	/* Module/eval.scm 260 */
														BgL_globalz00_bglt BgL_obj1685z00_2426;

														BgL_obj1685z00_2426 =
															(BgL_globalz00_bglt) (BgL_gz00_1335);
														BgL_testz00_3239 =
															CBOOL(
															(((BgL_globalz00_bglt)
																	CREF(BgL_obj1685z00_2426))->BgL_libraryz00));
													}
													if (BgL_testz00_3239)
														{	/* Module/eval.scm 260 */
															BgL_testz00_3223 = ((bool_t) 0);
														}
													else
														{	/* Module/eval.scm 260 */
															BgL_testz00_3223 = ((bool_t) 1);
														}
												}
										}
									else
										{	/* Module/eval.scm 259 */
											BgL_testz00_3223 = ((bool_t) 0);
										}
								}
							else
								{	/* Module/eval.scm 258 */
									BgL_testz00_3223 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_3223)
							{	/* Module/eval.scm 261 */
								obj_t BgL_auxz00_2696;

								BgL_auxz00_2696 =
									MAKE_PAIR(BgL_gz00_1335, CELL_REF(BgL_globalsz00_2693));
								return CELL_SET(BgL_globalsz00_2693, BgL_auxz00_2696);
							}
						else
							{	/* Module/eval.scm 258 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* get-evaluated-classes-accesses */
	obj_t BGl_getzd2evaluatedzd2classeszd2accesseszd2zzmodule_evalz00()
	{
		AN_OBJECT;
		{	/* Module/eval.scm 294 */
			{	/* Module/eval.scm 295 */
				obj_t BgL_errz00_1377;

				obj_t BgL_resz00_1378;

				BgL_errz00_1377 = MAKE_CELL(BNIL);
				BgL_resz00_1378 = MAKE_CELL(BNIL);
				{	/* Module/eval.scm 299 */
					obj_t BgL_zc3anonymousza34042ze3z83_2697;

					obj_t BgL_zc3anonymousza34040ze3z83_2700;

					BgL_zc3anonymousza34042ze3z83_2697 =
						make_fx_procedure(BGl_zc3anonymousza34042ze3z83zzmodule_evalz00,
						(int) (((long) 0)), (int) (((long) 1)));
					BgL_zc3anonymousza34040ze3z83_2700 =
						make_fx_procedure(BGl_zc3anonymousza34040ze3z83zzmodule_evalz00,
						(int) (((long) 1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza34042ze3z83_2697,
						(int) (((long) 0)), BgL_resz00_1378);
					PROCEDURE_SET(BgL_zc3anonymousza34040ze3z83_2700,
						(int) (((long) 0)), BgL_errz00_1377);
					BGl_withzd2exceptionzd2handlerz00zz__errorz00
						(BgL_zc3anonymousza34040ze3z83_2700,
						BgL_zc3anonymousza34042ze3z83_2697);
				}
				{	/* Module/eval.scm 308 */
					bool_t BgL_testz00_3255;

					{	/* Module/eval.scm 308 */
						obj_t BgL_objz00_2460;

						BgL_objz00_2460 = CELL_REF(BgL_errz00_1377);
						BgL_testz00_3255 = PAIRP(BgL_objz00_2460);
					}
					if (BgL_testz00_3255)
						{	/* Module/eval.scm 308 */
							return
								BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
								BGl_string4455z00zzmodule_evalz00, CELL_REF(BgL_errz00_1377));
						}
					else
						{	/* Module/eval.scm 308 */
							return CELL_REF(BgL_resz00_1378);
						}
				}
			}
		}
	}



/* <anonymous:4042> */
	obj_t BGl_zc3anonymousza34042ze3z83zzmodule_evalz00(obj_t BgL_envz00_2701)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 301 */
			{	/* Module/eval.scm 302 */
				obj_t BgL_resz00_2702;

				BgL_resz00_2702 = PROCEDURE_REF(BgL_envz00_2701, (int) (((long) 0)));
				{

					if (NULLP(BGl_za2evalzd2classesza2zd2zzmodule_evalz00))
						{	/* Module/eval.scm 302 */
							return BNIL;
						}
					else
						{	/* Module/eval.scm 304 */
							obj_t BgL_auxz00_2703;

							{	/* Module/eval.scm 306 */
								obj_t BgL_arg4044z00_1386;

								{	/* Module/eval.scm 306 */
									obj_t BgL_list4045z00_1387;

									BgL_list4045z00_1387 =
										MAKE_PAIR(BGl_za2evalzd2classesza2zd2zzmodule_evalz00,
										BNIL);
									BgL_arg4044z00_1386 =
										BGl_appendzd2mapzd2zz__r4_control_features_6_9z00
										(BGl_getzd2evaluatedzd2classzd2accesseszd2envz00zzmodule_evalz00,
										BgL_list4045z00_1387);
								}
								BgL_auxz00_2703 =
									bgl_append2(BgL_arg4044z00_1386, CELL_REF(BgL_resz00_2702));
							}
							return CELL_SET(BgL_resz00_2702, BgL_auxz00_2703);
						}
				}
			}
		}
	}



/* <anonymous:4040> */
	obj_t BGl_zc3anonymousza34040ze3z83zzmodule_evalz00(obj_t BgL_envz00_2704,
		obj_t BgL_ez00_2706)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 298 */
			{	/* Module/eval.scm 299 */
				obj_t BgL_errz00_2705;

				BgL_errz00_2705 = PROCEDURE_REF(BgL_envz00_2704, (int) (((long) 0)));
				{
					obj_t BgL_ez00_1381;

					BgL_ez00_1381 = BgL_ez00_2706;
					BGl_errorzd2notifyzd2zz__errorz00(BgL_ez00_1381);
					{	/* Module/eval.scm 300 */
						obj_t BgL_auxz00_2707;

						{	/* Module/eval.scm 300 */
							obj_t BgL_arg4041z00_1383;

							{
								BgL_z62errorz62_bglt BgL_auxz00_3269;

								BgL_auxz00_3269 = (BgL_z62errorz62_bglt) (BgL_ez00_1381);
								BgL_arg4041z00_1383 =
									(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_3269))->BgL_objz00);
							}
							BgL_auxz00_2707 =
								MAKE_PAIR(BgL_arg4041z00_1383, CELL_REF(BgL_errz00_2705));
						}
						return CELL_SET(BgL_errz00_2705, BgL_auxz00_2707);
					}
				}
			}
		}
	}



/* get-evaluated-class-accesses */
	obj_t BGl_getzd2evaluatedzd2classzd2accesseszd2zzmodule_evalz00(obj_t
		BgL_evz00_83)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 315 */
			{
				obj_t BgL_sz00_1471;

				obj_t BgL_idz00_1472;

				{
					obj_t BgL_idz00_1395;

					if (PAIRP(BgL_evz00_83))
						{	/* Module/eval.scm 338 */
							obj_t BgL_cdrzd21731zd2_1400;

							BgL_cdrzd21731zd2_1400 = CDR(BgL_evz00_83);
							if ((CAR(BgL_evz00_83) == CNST_TABLE_REF(((long) 6))))
								{	/* Module/eval.scm 338 */
									if (PAIRP(BgL_cdrzd21731zd2_1400))
										{	/* Module/eval.scm 338 */
											obj_t BgL_cdrzd21734zd2_1403;

											BgL_cdrzd21734zd2_1403 = CDR(BgL_cdrzd21731zd2_1400);
											if (PAIRP(BgL_cdrzd21734zd2_1403))
												{	/* Module/eval.scm 338 */
													if (
														(CAR(BgL_cdrzd21734zd2_1403) ==
															CNST_TABLE_REF(((long) 8))))
														{	/* Module/eval.scm 338 */
															if (NULLP(CDR(BgL_cdrzd21734zd2_1403)))
																{	/* Module/eval.scm 338 */
																	return BNIL;
																}
															else
																{	/* Module/eval.scm 338 */
																BgL_tagzd21726zd2_1397:
																	return
																		BGl_internalzd2errorzd2zztools_errorz00
																		(CNST_TABLE_REF(((long) 0)),
																		BGl_string4456z00zzmodule_evalz00,
																		BgL_evz00_83);
														}}
													else
														{	/* Module/eval.scm 338 */
															goto BgL_tagzd21726zd2_1397;
														}
												}
											else
												{	/* Module/eval.scm 338 */
													if (NULLP(CDR(BgL_cdrzd21731zd2_1400)))
														{	/* Module/eval.scm 338 */
															BgL_idz00_1395 = CAR(BgL_cdrzd21731zd2_1400);
															{	/* Module/eval.scm 342 */
																BgL_typez00_bglt BgL_tz00_1417;

																BgL_tz00_1417 =
																	BGl_findzd2typezf2locationz20zztype_envz00
																	(BgL_idz00_1395,
																	BGl_findzd2locationzd2zztools_locationz00
																	(BgL_evz00_83));
																{	/* Module/eval.scm 343 */
																	bool_t BgL_testz00_3299;

																	{	/* Module/eval.scm 343 */
																		obj_t BgL_obj3310z00_2476;

																		BgL_obj3310z00_2476 =
																			(obj_t) (BgL_tz00_1417);
																		BgL_testz00_3299 =
																			BGl_iszd2azf3z21zz__objectz00
																			(BgL_obj3310z00_2476,
																			BGl_tclassz00zzobject_classz00);
																	}
																	if (BgL_testz00_3299)
																		{	/* Module/eval.scm 348 */
																			obj_t BgL_slotsz00_1419;

																			{	/* Module/eval.scm 348 */
																				obj_t BgL_l3770z00_1441;

																				{	/* Module/eval.scm 349 */
																					obj_t BgL_arg4091z00_1456;

																					BgL_arg4091z00_1456 =
																						BGl_tclasszd2allzd2slotsz00zzobject_classz00
																						((BgL_tclassz00_bglt)
																						(BgL_tz00_1417));
																					{	/* Module/eval.scm 350 */
																						obj_t
																							BgL_zc3anonymousza34092ze3z83_2708;
																						BgL_zc3anonymousza34092ze3z83_2708 =
																							make_fx_procedure
																							(BGl_zc3anonymousza34092ze3z83zzmodule_evalz00,
																							(int) (((long) 1)),
																							(int) (((long) 1)));
																						PROCEDURE_SET
																							(BgL_zc3anonymousza34092ze3z83_2708,
																							(int) (((long) 0)),
																							(obj_t) (BgL_tz00_1417));
																						BgL_l3770z00_1441 =
																							BGl_filterz00zz__r4_control_features_6_9z00
																							(BgL_zc3anonymousza34092ze3z83_2708,
																							BgL_arg4091z00_1456);
																				}}
																				if (NULLP(BgL_l3770z00_1441))
																					{	/* Module/eval.scm 348 */
																						BgL_slotsz00_1419 = BNIL;
																					}
																				else
																					{	/* Module/eval.scm 348 */
																						obj_t BgL_head3772z00_1443;

																						BgL_head3772z00_1443 =
																							MAKE_PAIR(BNIL, BNIL);
																						{
																							obj_t BgL_l3770z00_1445;

																							obj_t BgL_tail3773z00_1446;

																							BgL_l3770z00_1445 =
																								BgL_l3770z00_1441;
																							BgL_tail3773z00_1446 =
																								BgL_head3772z00_1443;
																						BgL_zc3anonymousza34084ze3z83_1447:
																							if (NULLP(BgL_l3770z00_1445))
																								{	/* Module/eval.scm 348 */
																									BgL_slotsz00_1419 =
																										CDR(BgL_head3772z00_1443);
																								}
																							else
																								{	/* Module/eval.scm 348 */
																									obj_t BgL_newtail3774z00_1449;

																									{	/* Module/eval.scm 348 */
																										obj_t BgL_auxz00_3317;

																										BgL_sz00_1471 =
																											CAR(BgL_l3770z00_1445);
																										BgL_idz00_1472 =
																											BgL_idz00_1395;
																										{	/* Module/eval.scm 322 */
																											obj_t BgL_iz00_1474;

																											{
																												BgL_slotz00_bglt
																													BgL_auxz00_3318;
																												BgL_auxz00_3318 =
																													(BgL_slotz00_bglt)
																													(BgL_sz00_1471);
																												BgL_iz00_1474 =
																													(((BgL_slotz00_bglt)
																														CREF
																														(BgL_auxz00_3318))->
																													BgL_idz00);
																											}
																											{	/* Module/eval.scm 323 */
																												bool_t BgL_testz00_3321;

																												{	/* Module/eval.scm 323 */
																													BgL_slotz00_bglt
																														BgL_obj3545z00_2494;
																													BgL_obj3545z00_2494 =
																														(BgL_slotz00_bglt)
																														(BgL_sz00_1471);
																													BgL_testz00_3321 =
																														CBOOL(((
																																(BgL_slotz00_bglt)
																																CREF
																																(BgL_obj3545z00_2494))->
																															BgL_indexedz00));
																												}
																												if (BgL_testz00_3321)
																													{	/* Module/eval.scm 324 */
																														obj_t
																															BgL_gidlz00_1476;
																														{	/* Module/eval.scm 324 */
																															obj_t
																																BgL_list4122z00_1498;
																															{	/* Module/eval.scm 324 */
																																obj_t
																																	BgL_arg4123z00_1499;
																																{	/* Module/eval.scm 324 */
																																	obj_t
																																		BgL_arg4124z00_1500;
																																	obj_t
																																		BgL_arg4125z00_1501;
																																	BgL_arg4124z00_1500
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			22));
																																	{	/* Module/eval.scm 324 */
																																		obj_t
																																			BgL_arg4126z00_1502;
																																		BgL_arg4126z00_1502
																																			=
																																			MAKE_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					23)),
																																			BNIL);
																																		BgL_arg4125z00_1501
																																			=
																																			MAKE_PAIR
																																			(BgL_iz00_1474,
																																			BgL_arg4126z00_1502);
																																	}
																																	BgL_arg4123z00_1499
																																		=
																																		MAKE_PAIR
																																		(BgL_arg4124z00_1500,
																																		BgL_arg4125z00_1501);
																																}
																																BgL_list4122z00_1498
																																	=
																																	MAKE_PAIR
																																	(BgL_idz00_1472,
																																	BgL_arg4123z00_1499);
																															}
																															BgL_gidlz00_1476 =
																																BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																																(BgL_list4122z00_1498);
																														}
																														{	/* Module/eval.scm 324 */
																															obj_t
																																BgL_gidz00_1477;
																															{	/* Module/eval.scm 325 */
																																obj_t
																																	BgL_list4117z00_1493;
																																{	/* Module/eval.scm 325 */
																																	obj_t
																																		BgL_arg4118z00_1494;
																																	{	/* Module/eval.scm 325 */
																																		obj_t
																																			BgL_arg4119z00_1495;
																																		obj_t
																																			BgL_arg4120z00_1496;
																																		BgL_arg4119z00_1495
																																			=
																																			CNST_TABLE_REF
																																			(((long)
																																				22));
																																		{	/* Module/eval.scm 325 */
																																			obj_t
																																				BgL_arg4121z00_1497;
																																			BgL_arg4121z00_1497
																																				=
																																				MAKE_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						24)),
																																				BNIL);
																																			BgL_arg4120z00_1496
																																				=
																																				MAKE_PAIR
																																				(BgL_iz00_1474,
																																				BgL_arg4121z00_1497);
																																		}
																																		BgL_arg4118z00_1494
																																			=
																																			MAKE_PAIR
																																			(BgL_arg4119z00_1495,
																																			BgL_arg4120z00_1496);
																																	}
																																	BgL_list4117z00_1493
																																		=
																																		MAKE_PAIR
																																		(BgL_idz00_1472,
																																		BgL_arg4118z00_1494);
																																}
																																BgL_gidz00_1477
																																	=
																																	BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																																	(BgL_list4117z00_1493);
																															}
																															{	/* Module/eval.scm 325 */
																																obj_t
																																	BgL_sidz00_1478;
																																{	/* Module/eval.scm 326 */
																																	obj_t
																																		BgL_list4112z00_1488;
																																	{	/* Module/eval.scm 326 */
																																		obj_t
																																			BgL_arg4113z00_1489;
																																		{	/* Module/eval.scm 326 */
																																			obj_t
																																				BgL_arg4114z00_1490;
																																			obj_t
																																				BgL_arg4115z00_1491;
																																			BgL_arg4114z00_1490
																																				=
																																				CNST_TABLE_REF
																																				(((long)
																																					22));
																																			{	/* Module/eval.scm 326 */
																																				obj_t
																																					BgL_arg4116z00_1492;
																																				BgL_arg4116z00_1492
																																					=
																																					MAKE_PAIR
																																					(CNST_TABLE_REF
																																					(((long) 25)), BNIL);
																																				BgL_arg4115z00_1491
																																					=
																																					MAKE_PAIR
																																					(BgL_iz00_1474,
																																					BgL_arg4116z00_1492);
																																			}
																																			BgL_arg4113z00_1489
																																				=
																																				MAKE_PAIR
																																				(BgL_arg4114z00_1490,
																																				BgL_arg4115z00_1491);
																																		}
																																		BgL_list4112z00_1488
																																			=
																																			MAKE_PAIR
																																			(BgL_idz00_1472,
																																			BgL_arg4113z00_1489);
																																	}
																																	BgL_sidz00_1478
																																		=
																																		BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																																		(BgL_list4112z00_1488);
																																}
																																{	/* Module/eval.scm 326 */
																																	obj_t
																																		BgL_glz00_1479;
																																	BgL_glz00_1479
																																		=
																																		BGl_getzd2globalzd2zzmodule_evalz00
																																		(BgL_gidlz00_1476);
																																	{	/* Module/eval.scm 327 */
																																		obj_t
																																			BgL_gz00_1480;
																																		BgL_gz00_1480
																																			=
																																			BGl_getzd2globalzd2zzmodule_evalz00
																																			(BgL_gidz00_1477);
																																		{	/* Module/eval.scm 328 */

																																			{	/* Module/eval.scm 329 */
																																				bool_t
																																					BgL_testz00_3348;
																																				{
																																					BgL_slotz00_bglt
																																						BgL_auxz00_3349;
																																					BgL_auxz00_3349
																																						=
																																						(BgL_slotz00_bglt)
																																						(BgL_sz00_1471);
																																					BgL_testz00_3348
																																						=
																																						(((BgL_slotz00_bglt) CREF(BgL_auxz00_3349))->BgL_readzd2onlyzf3z21);
																																				}
																																				if (BgL_testz00_3348)
																																					{	/* Module/eval.scm 330 */
																																						obj_t
																																							BgL_list4106z00_1482;
																																						{	/* Module/eval.scm 330 */
																																							obj_t
																																								BgL_arg4107z00_1483;
																																							BgL_arg4107z00_1483
																																								=
																																								MAKE_PAIR
																																								(BgL_glz00_1479,
																																								BNIL);
																																							BgL_list4106z00_1482
																																								=
																																								MAKE_PAIR
																																								(BgL_glz00_1479,
																																								BgL_arg4107z00_1483);
																																						}
																																						BgL_auxz00_3317
																																							=
																																							BgL_list4106z00_1482;
																																					}
																																				else
																																					{	/* Module/eval.scm 331 */
																																						obj_t
																																							BgL_arg4108z00_1484;
																																						BgL_arg4108z00_1484
																																							=
																																							BGl_getzd2globalzd2zzmodule_evalz00
																																							(BgL_sidz00_1478);
																																						{	/* Module/eval.scm 331 */
																																							obj_t
																																								BgL_list4109z00_1485;
																																							{	/* Module/eval.scm 331 */
																																								obj_t
																																									BgL_arg4110z00_1486;
																																								{	/* Module/eval.scm 331 */
																																									obj_t
																																										BgL_arg4111z00_1487;
																																									BgL_arg4111z00_1487
																																										=
																																										MAKE_PAIR
																																										(BgL_arg4108z00_1484,
																																										BNIL);
																																									BgL_arg4110z00_1486
																																										=
																																										MAKE_PAIR
																																										(BgL_gz00_1480,
																																										BgL_arg4111z00_1487);
																																								}
																																								BgL_list4109z00_1485
																																									=
																																									MAKE_PAIR
																																									(BgL_glz00_1479,
																																									BgL_arg4110z00_1486);
																																							}
																																							BgL_auxz00_3317
																																								=
																																								BgL_list4109z00_1485;
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
																													{	/* Module/eval.scm 332 */
																														obj_t
																															BgL_gidz00_1503;
																														{	/* Module/eval.scm 332 */
																															obj_t
																																BgL_list4137z00_1516;
																															{	/* Module/eval.scm 332 */
																																obj_t
																																	BgL_arg4138z00_1517;
																																{	/* Module/eval.scm 332 */
																																	obj_t
																																		BgL_arg4139z00_1518;
																																	obj_t
																																		BgL_arg4140z00_1519;
																																	BgL_arg4139z00_1518
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			22));
																																	BgL_arg4140z00_1519
																																		=
																																		MAKE_PAIR
																																		(BgL_iz00_1474,
																																		BNIL);
																																	BgL_arg4138z00_1517
																																		=
																																		MAKE_PAIR
																																		(BgL_arg4139z00_1518,
																																		BgL_arg4140z00_1519);
																																}
																																BgL_list4137z00_1516
																																	=
																																	MAKE_PAIR
																																	(BgL_idz00_1472,
																																	BgL_arg4138z00_1517);
																															}
																															BgL_gidz00_1503 =
																																BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																																(BgL_list4137z00_1516);
																														}
																														{	/* Module/eval.scm 332 */
																															obj_t
																																BgL_sidz00_1504;
																															{	/* Module/eval.scm 333 */
																																obj_t
																																	BgL_arg4132z00_1511;
																																{	/* Module/eval.scm 333 */
																																	obj_t
																																		BgL_arg4133z00_1512;
																																	obj_t
																																		BgL_arg4134z00_1513;
																																	{	/* Module/eval.scm 333 */
																																		obj_t
																																			BgL_res4422z00_2502;
																																		{	/* Module/eval.scm 333 */
																																			obj_t
																																				BgL_arg2063z00_2501;
																																			BgL_arg2063z00_2501
																																				=
																																				SYMBOL_TO_STRING
																																				(BgL_gidz00_1503);
																																			BgL_res4422z00_2502
																																				=
																																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																				(BgL_arg2063z00_2501);
																																		}
																																		BgL_arg4133z00_1512
																																			=
																																			BgL_res4422z00_2502;
																																	}
																																	{	/* Module/eval.scm 333 */
																																		obj_t
																																			BgL_res4423z00_2505;
																																		{	/* Module/eval.scm 333 */
																																			obj_t
																																				BgL_symbolz00_2503;
																																			BgL_symbolz00_2503
																																				=
																																				CNST_TABLE_REF
																																				(((long)
																																					25));
																																			{	/* Module/eval.scm 333 */
																																				obj_t
																																					BgL_arg2063z00_2504;
																																				BgL_arg2063z00_2504
																																					=
																																					SYMBOL_TO_STRING
																																					(BgL_symbolz00_2503);
																																				BgL_res4423z00_2505
																																					=
																																					BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																					(BgL_arg2063z00_2504);
																																		}}
																																		BgL_arg4134z00_1513
																																			=
																																			BgL_res4423z00_2505;
																																	}
																																	{	/* Module/eval.scm 333 */
																																		obj_t
																																			BgL_list4135z00_1514;
																																		{	/* Module/eval.scm 333 */
																																			obj_t
																																				BgL_arg4136z00_1515;
																																			BgL_arg4136z00_1515
																																				=
																																				MAKE_PAIR
																																				(BgL_arg4134z00_1513,
																																				BNIL);
																																			BgL_list4135z00_1514
																																				=
																																				MAKE_PAIR
																																				(BgL_arg4133z00_1512,
																																				BgL_arg4136z00_1515);
																																		}
																																		BgL_arg4132z00_1511
																																			=
																																			BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																			(BgL_list4135z00_1514);
																																}}
																																BgL_sidz00_1504
																																	=
																																	string_to_symbol
																																	(BSTRING_TO_STRING
																																	(BgL_arg4132z00_1511));
																															}
																															{	/* Module/eval.scm 333 */
																																obj_t
																																	BgL_gz00_1505;
																																BgL_gz00_1505 =
																																	BGl_getzd2globalzd2zzmodule_evalz00
																																	(BgL_gidz00_1503);
																																{	/* Module/eval.scm 334 */

																																	{	/* Module/eval.scm 335 */
																																		bool_t
																																			BgL_testz00_3374;
																																		{
																																			BgL_slotz00_bglt
																																				BgL_auxz00_3375;
																																			BgL_auxz00_3375
																																				=
																																				(BgL_slotz00_bglt)
																																				(BgL_sz00_1471);
																																			BgL_testz00_3374
																																				=
																																				(((BgL_slotz00_bglt) CREF(BgL_auxz00_3375))->BgL_readzd2onlyzf3z21);
																																		}
																																		if (BgL_testz00_3374)
																																			{	/* Module/eval.scm 336 */
																																				obj_t
																																					BgL_list4128z00_1507;
																																				BgL_list4128z00_1507
																																					=
																																					MAKE_PAIR
																																					(BgL_gz00_1505,
																																					BNIL);
																																				BgL_auxz00_3317
																																					=
																																					BgL_list4128z00_1507;
																																			}
																																		else
																																			{	/* Module/eval.scm 337 */
																																				obj_t
																																					BgL_arg4129z00_1508;
																																				BgL_arg4129z00_1508
																																					=
																																					BGl_getzd2globalzd2zzmodule_evalz00
																																					(BgL_sidz00_1504);
																																				{	/* Module/eval.scm 337 */
																																					obj_t
																																						BgL_list4130z00_1509;
																																					{	/* Module/eval.scm 337 */
																																						obj_t
																																							BgL_arg4131z00_1510;
																																						BgL_arg4131z00_1510
																																							=
																																							MAKE_PAIR
																																							(BgL_arg4129z00_1508,
																																							BNIL);
																																						BgL_list4130z00_1509
																																							=
																																							MAKE_PAIR
																																							(BgL_gz00_1505,
																																							BgL_arg4131z00_1510);
																																					}
																																					BgL_auxz00_3317
																																						=
																																						BgL_list4130z00_1509;
																																				}
																																			}
																																	}
																																}
																															}
																														}
																													}
																											}
																										}
																										BgL_newtail3774z00_1449 =
																											MAKE_PAIR(BgL_auxz00_3317,
																											BNIL);
																									}
																									SET_CDR(BgL_tail3773z00_1446,
																										BgL_newtail3774z00_1449);
																									{
																										obj_t BgL_tail3773z00_3387;

																										obj_t BgL_l3770z00_3385;

																										BgL_l3770z00_3385 =
																											CDR(BgL_l3770z00_1445);
																										BgL_tail3773z00_3387 =
																											BgL_newtail3774z00_1449;
																										BgL_tail3773z00_1446 =
																											BgL_tail3773z00_3387;
																										BgL_l3770z00_1445 =
																											BgL_l3770z00_3385;
																										goto
																											BgL_zc3anonymousza34084ze3z83_1447;
																									}
																								}
																						}
																					}
																			}
																			{	/* Module/eval.scm 348 */
																				obj_t BgL_commonsz00_1420;

																				{	/* Module/eval.scm 352 */
																					obj_t BgL_arg4075z00_1433;

																					obj_t BgL_arg4076z00_1434;

																					BgL_arg4075z00_1433 =
																						BGl_getzd2globalzd2zzmodule_evalz00
																						(BGl_classzd2predicatezd2zzobject_classz00
																						((BgL_tclassz00_bglt)
																							(BgL_tz00_1417)));
																					{	/* Module/eval.scm 353 */
																						obj_t BgL_arg4078z00_1436;

																						obj_t BgL_arg4079z00_1437;

																						BgL_arg4078z00_1436 =
																							BGl_getzd2globalzd2zzmodule_evalz00
																							(BGl_classzd2nilzd2constructorz00zzobject_classz00
																							((BgL_tclassz00_bglt)
																								(BgL_tz00_1417)));
																						BgL_arg4079z00_1437 =
																							BGl_appendz00zz__r4_pairs_and_lists_6_3z00
																							(BgL_slotsz00_1419);
																						{	/* Module/eval.scm 352 */
																							obj_t BgL_list4080z00_1438;

																							BgL_list4080z00_1438 =
																								MAKE_PAIR(BgL_arg4079z00_1437,
																								BNIL);
																							BgL_arg4076z00_1434 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg4078z00_1436,
																								BgL_list4080z00_1438);
																						}
																					}
																					BgL_commonsz00_1420 =
																						MAKE_PAIR(BgL_arg4075z00_1433,
																						BgL_arg4076z00_1434);
																				}
																				{	/* Module/eval.scm 352 */

																					{	/* Module/eval.scm 355 */
																						bool_t BgL_testz00_3398;

																						{	/* Module/eval.scm 355 */
																							BgL_tclassz00_bglt
																								BgL_obj3329z00_2490;
																							BgL_obj3329z00_2490 =
																								(BgL_tclassz00_bglt)
																								(BgL_tz00_1417);
																							{
																								obj_t BgL_auxz00_3400;

																								{	/* Module/eval.scm 355 */
																									BgL_objectz00_bglt
																										BgL_auxz00_3401;
																									BgL_auxz00_3401 =
																										(BgL_objectz00_bglt)
																										(BgL_obj3329z00_2490);
																									BgL_auxz00_3400 =
																										BGL_OBJECT_WIDENING
																										(BgL_auxz00_3401);
																								}
																								BgL_testz00_3398 =
																									(((BgL_tclassz00_bglt)
																										CREF(BgL_auxz00_3400))->
																									BgL_abstractzf3zf3);
																							}
																						}
																						if (BgL_testz00_3398)
																							{	/* Module/eval.scm 355 */
																								return BgL_commonsz00_1420;
																							}
																						else
																							{	/* Module/eval.scm 357 */
																								obj_t BgL_arg4064z00_1422;

																								obj_t BgL_arg4065z00_1423;

																								BgL_arg4064z00_1422 =
																									BGl_getzd2globalzd2zzmodule_evalz00
																									(BGl_classzd2makezd2zzobject_classz00
																									((BgL_tclassz00_bglt)
																										(BgL_tz00_1417)));
																								{	/* Module/eval.scm 358 */
																									obj_t BgL_arg4067z00_1425;

																									obj_t BgL_arg4068z00_1426;

																									BgL_globalz00_bglt
																										BgL_arg4069z00_1427;
																									BgL_arg4067z00_1425 =
																										BGl_getzd2globalzd2zzmodule_evalz00
																										(BGl_classzd2allocatezd2zzobject_classz00
																										((BgL_tclassz00_bglt)
																											(BgL_tz00_1417)));
																									BgL_arg4068z00_1426 =
																										BGl_getzd2globalzd2zzmodule_evalz00
																										(BGl_classzd2fillzd2zzobject_classz00
																										((BgL_tclassz00_bglt)
																											(BgL_tz00_1417)));
																									{	/* Module/eval.scm 360 */
																										BgL_tclassz00_bglt
																											BgL_obj3317z00_2491;
																										BgL_obj3317z00_2491 =
																											(BgL_tclassz00_bglt)
																											(BgL_tz00_1417);
																										{
																											obj_t BgL_auxz00_3415;

																											{	/* Module/eval.scm 360 */
																												BgL_objectz00_bglt
																													BgL_auxz00_3416;
																												BgL_auxz00_3416 =
																													(BgL_objectz00_bglt)
																													(BgL_obj3317z00_2491);
																												BgL_auxz00_3415 =
																													BGL_OBJECT_WIDENING
																													(BgL_auxz00_3416);
																											}
																											BgL_arg4069z00_1427 =
																												(((BgL_tclassz00_bglt)
																													CREF
																													(BgL_auxz00_3415))->
																												BgL_holderz00);
																										}
																									}
																									{	/* Module/eval.scm 357 */
																										obj_t BgL_list4070z00_1428;

																										{	/* Module/eval.scm 357 */
																											obj_t BgL_arg4071z00_1429;

																											{	/* Module/eval.scm 357 */
																												obj_t
																													BgL_arg4072z00_1430;
																												BgL_arg4072z00_1430 =
																													MAKE_PAIR
																													(BgL_commonsz00_1420,
																													BNIL);
																												BgL_arg4071z00_1429 =
																													MAKE_PAIR((obj_t)
																													(BgL_arg4069z00_1427),
																													BgL_arg4072z00_1430);
																											}
																											BgL_list4070z00_1428 =
																												MAKE_PAIR
																												(BgL_arg4068z00_1426,
																												BgL_arg4071z00_1429);
																										}
																										BgL_arg4065z00_1423 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg4067z00_1425,
																											BgL_list4070z00_1428);
																									}
																								}
																								return
																									MAKE_PAIR(BgL_arg4064z00_1422,
																									BgL_arg4065z00_1423);
																							}
																					}
																				}
																			}
																		}
																	else
																		{	/* Module/eval.scm 344 */
																			obj_t BgL_arg4094z00_1461;

																			obj_t BgL_arg4096z00_1462;

																			BgL_arg4094z00_1461 =
																				BGl_findzd2locationzd2zztools_locationz00
																				(BgL_evz00_83);
																			BgL_arg4096z00_1462 =
																				CNST_TABLE_REF(((long) 0));
																			return
																				BGl_userzd2errorzf2locationz20zztools_errorz00
																				(BgL_arg4094z00_1461,
																				BgL_arg4096z00_1462,
																				BGl_string4457z00zzmodule_evalz00,
																				BgL_idz00_1395, BNIL);
																		}
																}
															}
														}
													else
														{	/* Module/eval.scm 338 */
															goto BgL_tagzd21726zd2_1397;
														}
												}
										}
									else
										{	/* Module/eval.scm 338 */
											goto BgL_tagzd21726zd2_1397;
										}
								}
							else
								{	/* Module/eval.scm 338 */
									goto BgL_tagzd21726zd2_1397;
								}
						}
					else
						{	/* Module/eval.scm 338 */
							goto BgL_tagzd21726zd2_1397;
						}
				}
			}
		}
	}



/* get-global */
	obj_t BGl_getzd2globalzd2zzmodule_evalz00(obj_t BgL_idz00_1466)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 320 */
			{	/* Module/eval.scm 317 */
				obj_t BgL_gz00_1468;

				BgL_gz00_1468 = BGl_findzd2globalzd2zzast_envz00(BgL_idz00_1466, BNIL);
				if (BGl_iszd2azf3z21zz__objectz00(BgL_gz00_1468,
						BGl_globalz00zzast_varz00))
					{	/* Module/eval.scm 318 */
						return BgL_gz00_1468;
					}
				else
					{	/* Module/eval.scm 318 */
						return
							BGl_internalzd2errorzd2zztools_errorz00(CNST_TABLE_REF(((long)
									0)), BGl_string4458z00zzmodule_evalz00, BgL_idz00_1466);
		}}}
	}



/* _get-evaluated-class-accesses */
	obj_t BGl__getzd2evaluatedzd2classzd2accesseszd2zzmodule_evalz00(obj_t
		BgL_envz00_2698, obj_t BgL_evz00_2699)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 315 */
			return
				BGl_getzd2evaluatedzd2classzd2accesseszd2zzmodule_evalz00
				(BgL_evz00_2699);
		}
	}



/* <anonymous:4092> */
	obj_t BGl_zc3anonymousza34092ze3z83zzmodule_evalz00(obj_t BgL_envz00_2709,
		obj_t BgL_sz00_2711)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 349 */
			{	/* Module/eval.scm 350 */
				obj_t BgL_tz00_2710;

				BgL_tz00_2710 = PROCEDURE_REF(BgL_envz00_2709, (int) (((long) 0)));
				{
					obj_t BgL_sz00_1457;

					{	/* Module/eval.scm 350 */
						bool_t BgL_auxz00_3438;

						BgL_sz00_1457 = BgL_sz00_2711;
						{	/* Module/eval.scm 350 */
							obj_t BgL_auxz00_3439;

							{
								BgL_slotz00_bglt BgL_auxz00_3440;

								BgL_auxz00_3440 = (BgL_slotz00_bglt) (BgL_sz00_1457);
								BgL_auxz00_3439 =
									(((BgL_slotz00_bglt) CREF(BgL_auxz00_3440))->
									BgL_classzd2ownerzd2);
							}
							BgL_auxz00_3438 = (BgL_auxz00_3439 == BgL_tz00_2710);
						}
						return BBOOL(BgL_auxz00_3438);
					}
				}
			}
		}
	}



/* get-eval-srfi-libraries */
	obj_t BGl_getzd2evalzd2srfizd2librarieszd2zzmodule_evalz00()
	{
		AN_OBJECT;
		{	/* Module/eval.scm 368 */
			{	/* Module/eval.scm 369 */
				obj_t BgL_l3775z00_1522;

				BgL_l3775z00_1522 = BGl_za2evalzd2librariesza2zd2zzmodule_evalz00;
				if (NULLP(BgL_l3775z00_1522))
					{	/* Module/eval.scm 369 */
						return BNIL;
					}
				else
					{	/* Module/eval.scm 369 */
						obj_t BgL_head3777z00_1524;

						BgL_head3777z00_1524 = MAKE_PAIR(BNIL, BNIL);
						{
							obj_t BgL_l3775z00_1526;

							obj_t BgL_tail3778z00_1527;

							BgL_l3775z00_1526 = BgL_l3775z00_1522;
							BgL_tail3778z00_1527 = BgL_head3777z00_1524;
						BgL_zc3anonymousza34142ze3z83_1528:
							if (NULLP(BgL_l3775z00_1526))
								{	/* Module/eval.scm 369 */
									return CDR(BgL_head3777z00_1524);
								}
							else
								{	/* Module/eval.scm 369 */
									obj_t BgL_newtail3779z00_1530;

									{	/* Module/eval.scm 369 */
										obj_t BgL_arg4145z00_1532;

										{	/* Module/eval.scm 369 */
											obj_t BgL_lz00_1534;

											BgL_lz00_1534 = CAR(BgL_l3775z00_1526);
											{	/* Module/eval.scm 370 */
												obj_t BgL_arg4147z00_1535;

												obj_t BgL_arg4148z00_1536;

												BgL_arg4147z00_1535 = CNST_TABLE_REF(((long) 12));
												{	/* Module/eval.scm 371 */
													obj_t BgL_arg4149z00_1537;

													{	/* Module/eval.scm 371 */
														obj_t BgL_arg4152z00_1540;

														obj_t BgL_arg4153z00_1541;

														BgL_arg4152z00_1540 = CNST_TABLE_REF(((long) 26));
														{	/* Module/eval.scm 371 */
															obj_t BgL_arg4154z00_1542;

															{	/* Module/eval.scm 371 */
																obj_t BgL_arg4158z00_1545;

																obj_t BgL_arg4159z00_1546;

																BgL_arg4158z00_1545 =
																	CNST_TABLE_REF(((long) 18));
																{	/* Module/eval.scm 371 */
																	obj_t BgL_list4160z00_1547;

																	BgL_list4160z00_1547 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg4159z00_1546 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_lz00_1534, BgL_list4160z00_1547);
																}
																BgL_arg4154z00_1542 =
																	MAKE_PAIR(BgL_arg4158z00_1545,
																	BgL_arg4159z00_1546);
															}
															{	/* Module/eval.scm 371 */
																obj_t BgL_list4156z00_1544;

																BgL_list4156z00_1544 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg4153z00_1541 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg4154z00_1542, BgL_list4156z00_1544);
														}}
														BgL_arg4149z00_1537 =
															MAKE_PAIR(BgL_arg4152z00_1540,
															BgL_arg4153z00_1541);
													}
													{	/* Module/eval.scm 370 */
														obj_t BgL_list4151z00_1539;

														BgL_list4151z00_1539 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg4148z00_1536 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg4149z00_1537, BgL_list4151z00_1539);
												}}
												BgL_arg4145z00_1532 =
													MAKE_PAIR(BgL_arg4147z00_1535, BgL_arg4148z00_1536);
										}}
										BgL_newtail3779z00_1530 =
											MAKE_PAIR(BgL_arg4145z00_1532, BNIL);
									}
									SET_CDR(BgL_tail3778z00_1527, BgL_newtail3779z00_1530);
									{
										obj_t BgL_tail3778z00_3468;

										obj_t BgL_l3775z00_3466;

										BgL_l3775z00_3466 = CDR(BgL_l3775z00_1526);
										BgL_tail3778z00_3468 = BgL_newtail3779z00_1530;
										BgL_tail3778z00_1527 = BgL_tail3778z00_3468;
										BgL_l3775z00_1526 = BgL_l3775z00_3466;
										goto BgL_zc3anonymousza34142ze3z83_1528;
									}
								}
						}
					}
			}
		}
	}



/* eval-bind-super-access */
	obj_t BGl_evalzd2bindzd2superzd2accesszd2zzmodule_evalz00(BgL_typez00_bglt
		BgL_tz00_84, bool_t BgL_librarypz00_85)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 377 */
			{	/* Module/eval.scm 378 */
				obj_t BgL_slotsz00_1549;

				obj_t BgL_idz00_1550;

				BgL_slotsz00_1549 =
					BGl_tclasszd2allzd2slotsz00zzobject_classz00(
					(BgL_tclassz00_bglt) (BgL_tz00_84));
				BgL_idz00_1550 = (((BgL_typez00_bglt) CREF(BgL_tz00_84))->BgL_idz00);
				if (BgL_librarypz00_85)
					{	/* Module/eval.scm 400 */
						obj_t BgL_arg4162z00_1554;

						BgL_arg4162z00_1554 =
							BGl_tclasszd2allzd2slotsz00zzobject_classz00(
							(BgL_tclassz00_bglt) (BgL_tz00_84));
						{	/* Module/eval.scm 401 */
							obj_t BgL_zc3anonymousza34164ze3z83_2713;

							BgL_zc3anonymousza34164ze3z83_2713 =
								make_fx_procedure(BGl_zc3anonymousza34164ze3z83zzmodule_evalz00,
								(int) (((long) 1)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3anonymousza34164ze3z83_2713,
								(int) (((long) 0)), BgL_idz00_1550);
							PROCEDURE_SET(BgL_zc3anonymousza34164ze3z83_2713,
								(int) (((long) 1)), (obj_t) (BgL_tz00_84));
							{	/* Module/eval.scm 400 */
								obj_t BgL_list4163z00_1555;

								BgL_list4163z00_1555 = MAKE_PAIR(BgL_arg4162z00_1554, BNIL);
								return
									BGl_appendzd2mapzd2zz__r4_control_features_6_9z00
									(BgL_zc3anonymousza34164ze3z83_2713, BgL_list4163z00_1555);
							}
						}
					}
				else
					{	/* Module/eval.scm 405 */
						obj_t BgL_l3780z00_1561;

						{	/* Module/eval.scm 406 */
							obj_t BgL_arg4178z00_1579;

							BgL_arg4178z00_1579 =
								BGl_tclasszd2allzd2slotsz00zzobject_classz00(
								(BgL_tclassz00_bglt) (BgL_tz00_84));
							{	/* Module/eval.scm 407 */
								obj_t BgL_zc3anonymousza34180ze3z83_2714;

								BgL_zc3anonymousza34180ze3z83_2714 =
									make_fx_procedure
									(BGl_zc3anonymousza34180ze3z83zzmodule_evalz00,
									(int) (((long) 1)), (int) (((long) 2)));
								PROCEDURE_SET(BgL_zc3anonymousza34180ze3z83_2714,
									(int) (((long) 0)), BgL_idz00_1550);
								PROCEDURE_SET(BgL_zc3anonymousza34180ze3z83_2714,
									(int) (((long) 1)), (obj_t) (BgL_tz00_84));
								{	/* Module/eval.scm 406 */
									obj_t BgL_list4179z00_1580;

									BgL_list4179z00_1580 = MAKE_PAIR(BgL_arg4178z00_1579, BNIL);
									BgL_l3780z00_1561 =
										BGl_appendzd2mapzd2zz__r4_control_features_6_9z00
										(BgL_zc3anonymousza34180ze3z83_2714, BgL_list4179z00_1580);
						}}}
						if (NULLP(BgL_l3780z00_1561))
							{	/* Module/eval.scm 405 */
								return BNIL;
							}
						else
							{	/* Module/eval.scm 405 */
								obj_t BgL_head3782z00_1563;

								BgL_head3782z00_1563 = MAKE_PAIR(BNIL, BNIL);
								{
									obj_t BgL_l3780z00_1565;

									obj_t BgL_tail3783z00_1566;

									BgL_l3780z00_1565 = BgL_l3780z00_1561;
									BgL_tail3783z00_1566 = BgL_head3782z00_1563;
								BgL_zc3anonymousza34168ze3z83_1567:
									if (NULLP(BgL_l3780z00_1565))
										{	/* Module/eval.scm 405 */
											return CDR(BgL_head3782z00_1563);
										}
									else
										{	/* Module/eval.scm 405 */
											obj_t BgL_newtail3784z00_1569;

											{	/* Module/eval.scm 405 */
												obj_t BgL_arg4171z00_1571;

												{	/* Module/eval.scm 405 */
													obj_t BgL_ez00_1573;

													BgL_ez00_1573 = CAR(BgL_l3780z00_1565);
													{	/* Module/eval.scm 405 */
														obj_t BgL_arg4173z00_1574;

														obj_t BgL_arg4174z00_1575;

														BgL_arg4173z00_1574 = CNST_TABLE_REF(((long) 27));
														{	/* Module/eval.scm 405 */
															obj_t BgL_list4175z00_1576;

															BgL_list4175z00_1576 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg4174z00_1575 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_ez00_1573, BgL_list4175z00_1576);
														}
														BgL_arg4171z00_1571 =
															MAKE_PAIR(BgL_arg4173z00_1574,
															BgL_arg4174z00_1575);
												}}
												BgL_newtail3784z00_1569 =
													MAKE_PAIR(BgL_arg4171z00_1571, BNIL);
											}
											SET_CDR(BgL_tail3783z00_1566, BgL_newtail3784z00_1569);
											{
												obj_t BgL_tail3783z00_3512;

												obj_t BgL_l3780z00_3510;

												BgL_l3780z00_3510 = CDR(BgL_l3780z00_1565);
												BgL_tail3783z00_3512 = BgL_newtail3784z00_1569;
												BgL_tail3783z00_1566 = BgL_tail3783z00_3512;
												BgL_l3780z00_1565 = BgL_l3780z00_3510;
												goto BgL_zc3anonymousza34168ze3z83_1567;
											}
										}
								}
							}
					}
			}
		}
	}



/* slot-bind */
	obj_t BGl_slotzd2bindzd2zzmodule_evalz00(obj_t BgL_idz00_2715,
		obj_t BgL_sz00_1586)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 389 */
			{	/* Module/eval.scm 381 */
				obj_t BgL_iz00_1588;

				{
					BgL_slotz00_bglt BgL_auxz00_3513;

					BgL_auxz00_3513 = (BgL_slotz00_bglt) (BgL_sz00_1586);
					BgL_iz00_1588 =
						(((BgL_slotz00_bglt) CREF(BgL_auxz00_3513))->BgL_idz00);
				}
				{	/* Module/eval.scm 381 */
					obj_t BgL_ssiz00_1589;

					{	/* Module/eval.scm 382 */
						obj_t BgL_arg4241z00_1649;

						obj_t BgL_arg4242z00_1650;

						{	/* Module/eval.scm 382 */
							BgL_typez00_bglt BgL_obj1508z00_2539;

							{	/* Module/eval.scm 382 */
								BgL_slotz00_bglt BgL_obj3530z00_2538;

								BgL_obj3530z00_2538 = (BgL_slotz00_bglt) (BgL_sz00_1586);
								BgL_obj1508z00_2539 =
									(BgL_typez00_bglt) (
									(((BgL_slotz00_bglt) CREF(BgL_obj3530z00_2538))->
										BgL_classzd2ownerzd2));
							}
							BgL_arg4241z00_1649 =
								(((BgL_typez00_bglt) CREF(BgL_obj1508z00_2539))->BgL_idz00);
						}
						BgL_arg4242z00_1650 = CNST_TABLE_REF(((long) 22));
						{	/* Module/eval.scm 382 */
							obj_t BgL_list4243z00_1651;

							{	/* Module/eval.scm 382 */
								obj_t BgL_arg4244z00_1652;

								{	/* Module/eval.scm 382 */
									obj_t BgL_arg4245z00_1653;

									BgL_arg4245z00_1653 = MAKE_PAIR(BgL_iz00_1588, BNIL);
									BgL_arg4244z00_1652 =
										MAKE_PAIR(BgL_arg4242z00_1650, BgL_arg4245z00_1653);
								}
								BgL_list4243z00_1651 =
									MAKE_PAIR(BgL_arg4241z00_1649, BgL_arg4244z00_1652);
							}
							BgL_ssiz00_1589 =
								BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
								(BgL_list4243z00_1651);
					}}
					{	/* Module/eval.scm 382 */
						obj_t BgL_asiz00_1590;

						{	/* Module/eval.scm 383 */
							obj_t BgL_list4237z00_1645;

							{	/* Module/eval.scm 383 */
								obj_t BgL_arg4238z00_1646;

								{	/* Module/eval.scm 383 */
									obj_t BgL_arg4239z00_1647;

									obj_t BgL_arg4240z00_1648;

									BgL_arg4239z00_1647 = CNST_TABLE_REF(((long) 22));
									BgL_arg4240z00_1648 = MAKE_PAIR(BgL_iz00_1588, BNIL);
									BgL_arg4238z00_1646 =
										MAKE_PAIR(BgL_arg4239z00_1647, BgL_arg4240z00_1648);
								}
								BgL_list4237z00_1645 =
									MAKE_PAIR(BgL_idz00_2715, BgL_arg4238z00_1646);
							}
							BgL_asiz00_1590 =
								BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
								(BgL_list4237z00_1645);
						}
						{	/* Module/eval.scm 383 */
							obj_t BgL_getz00_1591;

							{	/* Module/eval.scm 384 */
								obj_t BgL_arg4220z00_1629;

								obj_t BgL_arg4221z00_1630;

								BgL_arg4220z00_1629 = CNST_TABLE_REF(((long) 18));
								{	/* Module/eval.scm 384 */
									obj_t BgL_arg4222z00_1631;

									{	/* Module/eval.scm 384 */
										obj_t BgL_arg4225z00_1634;

										obj_t BgL_arg4226z00_1635;

										BgL_arg4225z00_1634 = CNST_TABLE_REF(((long) 28));
										{	/* Module/eval.scm 384 */
											obj_t BgL_arg4228z00_1636;

											obj_t BgL_arg4229z00_1637;

											{	/* Module/eval.scm 384 */
												obj_t BgL_arg4233z00_1641;

												{	/* Module/eval.scm 384 */
													obj_t BgL_list4234z00_1642;

													BgL_list4234z00_1642 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg4233z00_1641 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(CNST_TABLE_REF(((long) 29)), BgL_list4234z00_1642);
												}
												BgL_arg4228z00_1636 =
													MAKE_PAIR(BgL_asiz00_1590, BgL_arg4233z00_1641);
											}
											{	/* Module/eval.scm 384 */
												obj_t BgL_arg4235z00_1643;

												{	/* Module/eval.scm 384 */
													obj_t BgL_list4236z00_1644;

													BgL_list4236z00_1644 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg4235z00_1643 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(CNST_TABLE_REF(((long) 29)), BgL_list4236z00_1644);
												}
												BgL_arg4229z00_1637 =
													MAKE_PAIR(BgL_ssiz00_1589, BgL_arg4235z00_1643);
											}
											{	/* Module/eval.scm 384 */
												obj_t BgL_list4231z00_1639;

												{	/* Module/eval.scm 384 */
													obj_t BgL_arg4232z00_1640;

													BgL_arg4232z00_1640 = MAKE_PAIR(BNIL, BNIL);
													BgL_list4231z00_1639 =
														MAKE_PAIR(BgL_arg4229z00_1637, BgL_arg4232z00_1640);
												}
												BgL_arg4226z00_1635 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg4228z00_1636, BgL_list4231z00_1639);
										}}
										BgL_arg4222z00_1631 =
											MAKE_PAIR(BgL_arg4225z00_1634, BgL_arg4226z00_1635);
									}
									{	/* Module/eval.scm 384 */
										obj_t BgL_list4224z00_1633;

										BgL_list4224z00_1633 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg4221z00_1630 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg4222z00_1631, BgL_list4224z00_1633);
								}}
								BgL_getz00_1591 =
									MAKE_PAIR(BgL_arg4220z00_1629, BgL_arg4221z00_1630);
							}
							{	/* Module/eval.scm 384 */

								{	/* Module/eval.scm 385 */
									bool_t BgL_testz00_3547;

									{
										BgL_slotz00_bglt BgL_auxz00_3548;

										BgL_auxz00_3548 = (BgL_slotz00_bglt) (BgL_sz00_1586);
										BgL_testz00_3547 =
											(((BgL_slotz00_bglt) CREF(BgL_auxz00_3548))->
											BgL_readzd2onlyzf3z21);
									}
									if (BgL_testz00_3547)
										{	/* Module/eval.scm 386 */
											obj_t BgL_list4185z00_1593;

											BgL_list4185z00_1593 = MAKE_PAIR(BgL_getz00_1591, BNIL);
											return BgL_list4185z00_1593;
										}
									else
										{	/* Module/eval.scm 387 */
											obj_t BgL_sssiz00_1594;

											obj_t BgL_sasiz00_1595;

											{	/* Module/eval.scm 387 */
												obj_t BgL_arg4210z00_1619;

												{	/* Module/eval.scm 387 */
													obj_t BgL_arg4211z00_1620;

													obj_t BgL_arg4212z00_1621;

													{	/* Module/eval.scm 387 */
														obj_t BgL_res4427z00_2545;

														{	/* Module/eval.scm 387 */
															obj_t BgL_arg2063z00_2544;

															BgL_arg2063z00_2544 =
																SYMBOL_TO_STRING(BgL_ssiz00_1589);
															BgL_res4427z00_2545 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_2544);
														}
														BgL_arg4211z00_1620 = BgL_res4427z00_2545;
													}
													{	/* Module/eval.scm 387 */
														obj_t BgL_res4428z00_2548;

														{	/* Module/eval.scm 387 */
															obj_t BgL_symbolz00_2546;

															BgL_symbolz00_2546 = CNST_TABLE_REF(((long) 25));
															{	/* Module/eval.scm 387 */
																obj_t BgL_arg2063z00_2547;

																BgL_arg2063z00_2547 =
																	SYMBOL_TO_STRING(BgL_symbolz00_2546);
																BgL_res4428z00_2548 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_2547);
														}}
														BgL_arg4212z00_1621 = BgL_res4428z00_2548;
													}
													{	/* Module/eval.scm 387 */
														obj_t BgL_list4213z00_1622;

														{	/* Module/eval.scm 387 */
															obj_t BgL_arg4214z00_1623;

															BgL_arg4214z00_1623 =
																MAKE_PAIR(BgL_arg4212z00_1621, BNIL);
															BgL_list4213z00_1622 =
																MAKE_PAIR(BgL_arg4211z00_1620,
																BgL_arg4214z00_1623);
														}
														BgL_arg4210z00_1619 =
															BGl_stringzd2appendzd2zz__r4_strings_6_7z00
															(BgL_list4213z00_1622);
												}}
												BgL_sssiz00_1594 =
													string_to_symbol(BSTRING_TO_STRING
													(BgL_arg4210z00_1619));
											}
											{	/* Module/eval.scm 388 */
												obj_t BgL_arg4215z00_1624;

												{	/* Module/eval.scm 388 */
													obj_t BgL_arg4216z00_1625;

													obj_t BgL_arg4217z00_1626;

													{	/* Module/eval.scm 388 */
														obj_t BgL_res4429z00_2552;

														{	/* Module/eval.scm 388 */
															obj_t BgL_arg2063z00_2551;

															BgL_arg2063z00_2551 =
																SYMBOL_TO_STRING(BgL_asiz00_1590);
															BgL_res4429z00_2552 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_2551);
														}
														BgL_arg4216z00_1625 = BgL_res4429z00_2552;
													}
													{	/* Module/eval.scm 388 */
														obj_t BgL_res4430z00_2555;

														{	/* Module/eval.scm 388 */
															obj_t BgL_symbolz00_2553;

															BgL_symbolz00_2553 = CNST_TABLE_REF(((long) 25));
															{	/* Module/eval.scm 388 */
																obj_t BgL_arg2063z00_2554;

																BgL_arg2063z00_2554 =
																	SYMBOL_TO_STRING(BgL_symbolz00_2553);
																BgL_res4430z00_2555 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_2554);
														}}
														BgL_arg4217z00_1626 = BgL_res4430z00_2555;
													}
													{	/* Module/eval.scm 388 */
														obj_t BgL_list4218z00_1627;

														{	/* Module/eval.scm 388 */
															obj_t BgL_arg4219z00_1628;

															BgL_arg4219z00_1628 =
																MAKE_PAIR(BgL_arg4217z00_1626, BNIL);
															BgL_list4218z00_1627 =
																MAKE_PAIR(BgL_arg4216z00_1625,
																BgL_arg4219z00_1628);
														}
														BgL_arg4215z00_1624 =
															BGl_stringzd2appendzd2zz__r4_strings_6_7z00
															(BgL_list4218z00_1627);
												}}
												BgL_sasiz00_1595 =
													string_to_symbol(BSTRING_TO_STRING
													(BgL_arg4215z00_1624));
											}
											{	/* Module/eval.scm 389 */
												obj_t BgL_arg4186z00_1596;

												{	/* Module/eval.scm 389 */
													obj_t BgL_arg4189z00_1599;

													obj_t BgL_arg4190z00_1600;

													BgL_arg4189z00_1599 = CNST_TABLE_REF(((long) 18));
													{	/* Module/eval.scm 389 */
														obj_t BgL_arg4191z00_1601;

														{	/* Module/eval.scm 389 */
															obj_t BgL_arg4194z00_1604;

															obj_t BgL_arg4195z00_1605;

															BgL_arg4194z00_1604 = CNST_TABLE_REF(((long) 28));
															{	/* Module/eval.scm 389 */
																obj_t BgL_arg4196z00_1606;

																obj_t BgL_arg4197z00_1607;

																{	/* Module/eval.scm 389 */
																	obj_t BgL_arg4201z00_1611;

																	{	/* Module/eval.scm 389 */
																		obj_t BgL_list4202z00_1612;

																		{	/* Module/eval.scm 389 */
																			obj_t BgL_arg4204z00_1613;

																			obj_t BgL_arg4205z00_1614;

																			BgL_arg4204z00_1613 =
																				CNST_TABLE_REF(((long) 30));
																			BgL_arg4205z00_1614 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list4202z00_1612 =
																				MAKE_PAIR(BgL_arg4204z00_1613,
																				BgL_arg4205z00_1614);
																		}
																		BgL_arg4201z00_1611 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(CNST_TABLE_REF(((long) 29)),
																			BgL_list4202z00_1612);
																	}
																	BgL_arg4196z00_1606 =
																		MAKE_PAIR(BgL_sasiz00_1595,
																		BgL_arg4201z00_1611);
																}
																{	/* Module/eval.scm 389 */
																	obj_t BgL_arg4206z00_1615;

																	{	/* Module/eval.scm 389 */
																		obj_t BgL_list4207z00_1616;

																		{	/* Module/eval.scm 389 */
																			obj_t BgL_arg4208z00_1617;

																			obj_t BgL_arg4209z00_1618;

																			BgL_arg4208z00_1617 =
																				CNST_TABLE_REF(((long) 30));
																			BgL_arg4209z00_1618 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list4207z00_1616 =
																				MAKE_PAIR(BgL_arg4208z00_1617,
																				BgL_arg4209z00_1618);
																		}
																		BgL_arg4206z00_1615 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(CNST_TABLE_REF(((long) 29)),
																			BgL_list4207z00_1616);
																	}
																	BgL_arg4197z00_1607 =
																		MAKE_PAIR(BgL_sssiz00_1594,
																		BgL_arg4206z00_1615);
																}
																{	/* Module/eval.scm 389 */
																	obj_t BgL_list4199z00_1609;

																	{	/* Module/eval.scm 389 */
																		obj_t BgL_arg4200z00_1610;

																		BgL_arg4200z00_1610 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list4199z00_1609 =
																			MAKE_PAIR(BgL_arg4197z00_1607,
																			BgL_arg4200z00_1610);
																	}
																	BgL_arg4195z00_1605 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg4196z00_1606, BgL_list4199z00_1609);
															}}
															BgL_arg4191z00_1601 =
																MAKE_PAIR(BgL_arg4194z00_1604,
																BgL_arg4195z00_1605);
														}
														{	/* Module/eval.scm 389 */
															obj_t BgL_list4193z00_1603;

															BgL_list4193z00_1603 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg4190z00_1600 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg4191z00_1601, BgL_list4193z00_1603);
													}}
													BgL_arg4186z00_1596 =
														MAKE_PAIR(BgL_arg4189z00_1599, BgL_arg4190z00_1600);
												}
												{	/* Module/eval.scm 389 */
													obj_t BgL_list4187z00_1597;

													{	/* Module/eval.scm 389 */
														obj_t BgL_arg4188z00_1598;

														BgL_arg4188z00_1598 =
															MAKE_PAIR(BgL_arg4186z00_1596, BNIL);
														BgL_list4187z00_1597 =
															MAKE_PAIR(BgL_getz00_1591, BgL_arg4188z00_1598);
													}
													return BgL_list4187z00_1597;
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



/* <anonymous:4164> */
	obj_t BGl_zc3anonymousza34164ze3z83zzmodule_evalz00(obj_t BgL_envz00_2716,
		obj_t BgL_sz00_2719)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 400 */
			{	/* Module/eval.scm 401 */
				obj_t BgL_idz00_2717;

				obj_t BgL_tz00_2718;

				BgL_idz00_2717 = PROCEDURE_REF(BgL_envz00_2716, (int) (((long) 0)));
				BgL_tz00_2718 = PROCEDURE_REF(BgL_envz00_2716, (int) (((long) 1)));
				{
					obj_t BgL_sz00_1556;

					BgL_sz00_1556 = BgL_sz00_2719;
					{
						obj_t BgL_sz00_1655;

						{	/* Module/eval.scm 401 */
							bool_t BgL_testz00_3599;

							{	/* Module/eval.scm 401 */
								obj_t BgL_auxz00_3600;

								{
									BgL_slotz00_bglt BgL_auxz00_3601;

									BgL_auxz00_3601 = (BgL_slotz00_bglt) (BgL_sz00_1556);
									BgL_auxz00_3600 =
										(((BgL_slotz00_bglt) CREF(BgL_auxz00_3601))->
										BgL_classzd2ownerzd2);
								}
								BgL_testz00_3599 = (BgL_auxz00_3600 == BgL_tz00_2718);
							}
							if (BgL_testz00_3599)
								{	/* Module/eval.scm 401 */
									BgL_sz00_1655 = BgL_sz00_1556;
									{	/* Module/eval.scm 391 */
										obj_t BgL_iz00_1657;

										{
											BgL_slotz00_bglt BgL_auxz00_3605;

											BgL_auxz00_3605 = (BgL_slotz00_bglt) (BgL_sz00_1655);
											BgL_iz00_1657 =
												(((BgL_slotz00_bglt) CREF(BgL_auxz00_3605))->BgL_idz00);
										}
										{	/* Module/eval.scm 391 */
											obj_t BgL_ssiz00_1658;

											{	/* Module/eval.scm 392 */
												obj_t BgL_arg4263z00_1676;

												obj_t BgL_arg4265z00_1677;

												{	/* Module/eval.scm 392 */
													BgL_typez00_bglt BgL_obj1508z00_2561;

													{	/* Module/eval.scm 392 */
														BgL_slotz00_bglt BgL_obj3530z00_2560;

														BgL_obj3530z00_2560 =
															(BgL_slotz00_bglt) (BgL_sz00_1655);
														BgL_obj1508z00_2561 =
															(BgL_typez00_bglt) (
															(((BgL_slotz00_bglt) CREF(BgL_obj3530z00_2560))->
																BgL_classzd2ownerzd2));
													}
													BgL_arg4263z00_1676 =
														(((BgL_typez00_bglt) CREF(BgL_obj1508z00_2561))->
														BgL_idz00);
												}
												BgL_arg4265z00_1677 = CNST_TABLE_REF(((long) 22));
												{	/* Module/eval.scm 392 */
													obj_t BgL_list4266z00_1678;

													{	/* Module/eval.scm 392 */
														obj_t BgL_arg4267z00_1679;

														{	/* Module/eval.scm 392 */
															obj_t BgL_arg4268z00_1680;

															BgL_arg4268z00_1680 =
																MAKE_PAIR(BgL_iz00_1657, BNIL);
															BgL_arg4267z00_1679 =
																MAKE_PAIR(BgL_arg4265z00_1677,
																BgL_arg4268z00_1680);
														}
														BgL_list4266z00_1678 =
															MAKE_PAIR(BgL_arg4263z00_1676,
															BgL_arg4267z00_1679);
													}
													BgL_ssiz00_1658 =
														BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
														(BgL_list4266z00_1678);
											}}
											{	/* Module/eval.scm 392 */
												obj_t BgL_getz00_1659;

												{	/* Module/eval.scm 393 */
													obj_t BgL_list4262z00_1675;

													BgL_list4262z00_1675 =
														MAKE_PAIR(BGl_za2moduleza2z00zzmodule_modulez00,
														BNIL);
													BgL_getz00_1659 =
														BGl_findzd2globalzd2zzast_envz00(BgL_ssiz00_1658,
														BgL_list4262z00_1675);
												}
												{	/* Module/eval.scm 393 */

													{	/* Module/eval.scm 394 */
														bool_t BgL_testz00_3619;

														{
															BgL_slotz00_bglt BgL_auxz00_3620;

															BgL_auxz00_3620 =
																(BgL_slotz00_bglt) (BgL_sz00_1655);
															BgL_testz00_3619 =
																(((BgL_slotz00_bglt) CREF(BgL_auxz00_3620))->
																BgL_readzd2onlyzf3z21);
														}
														if (BgL_testz00_3619)
															{	/* Module/eval.scm 395 */
																BgL_nodez00_bglt BgL_arg4249z00_1661;

																BgL_arg4249z00_1661 =
																	BGl_definezd2primopzd2ze3nodeze3zzast_sexpz00(
																	(BgL_globalz00_bglt) (BgL_getz00_1659));
																{	/* Module/eval.scm 395 */
																	obj_t BgL_list4250z00_1662;

																	BgL_list4250z00_1662 =
																		MAKE_PAIR(
																		(obj_t) (BgL_arg4249z00_1661), BNIL);
																	return BgL_list4250z00_1662;
																}
															}
														else
															{	/* Module/eval.scm 396 */
																obj_t BgL_setz00_1663;

																{	/* Module/eval.scm 396 */
																	obj_t BgL_arg4255z00_1668;

																	{	/* Module/eval.scm 396 */
																		obj_t BgL_arg4257z00_1670;

																		{	/* Module/eval.scm 396 */
																			obj_t BgL_arg4258z00_1671;

																			obj_t BgL_arg4259z00_1672;

																			{	/* Module/eval.scm 396 */
																				obj_t BgL_res4433z00_2567;

																				{	/* Module/eval.scm 396 */
																					obj_t BgL_arg2063z00_2566;

																					BgL_arg2063z00_2566 =
																						SYMBOL_TO_STRING(BgL_ssiz00_1658);
																					BgL_res4433z00_2567 =
																						BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																						(BgL_arg2063z00_2566);
																				}
																				BgL_arg4258z00_1671 =
																					BgL_res4433z00_2567;
																			}
																			{	/* Module/eval.scm 396 */
																				obj_t BgL_res4434z00_2570;

																				{	/* Module/eval.scm 396 */
																					obj_t BgL_symbolz00_2568;

																					BgL_symbolz00_2568 =
																						CNST_TABLE_REF(((long) 25));
																					{	/* Module/eval.scm 396 */
																						obj_t BgL_arg2063z00_2569;

																						BgL_arg2063z00_2569 =
																							SYMBOL_TO_STRING
																							(BgL_symbolz00_2568);
																						BgL_res4434z00_2570 =
																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																							(BgL_arg2063z00_2569);
																				}}
																				BgL_arg4259z00_1672 =
																					BgL_res4434z00_2570;
																			}
																			{	/* Module/eval.scm 396 */
																				obj_t BgL_list4260z00_1673;

																				{	/* Module/eval.scm 396 */
																					obj_t BgL_arg4261z00_1674;

																					BgL_arg4261z00_1674 =
																						MAKE_PAIR(BgL_arg4259z00_1672,
																						BNIL);
																					BgL_list4260z00_1673 =
																						MAKE_PAIR(BgL_arg4258z00_1671,
																						BgL_arg4261z00_1674);
																				}
																				BgL_arg4257z00_1670 =
																					BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																					(BgL_list4260z00_1673);
																		}}
																		BgL_arg4255z00_1668 =
																			string_to_symbol(BSTRING_TO_STRING
																			(BgL_arg4257z00_1670));
																	}
																	{	/* Module/eval.scm 396 */
																		obj_t BgL_list4256z00_1669;

																		BgL_list4256z00_1669 =
																			MAKE_PAIR
																			(BGl_za2moduleza2z00zzmodule_modulez00,
																			BNIL);
																		BgL_setz00_1663 =
																			BGl_findzd2globalzd2zzast_envz00
																			(BgL_arg4255z00_1668,
																			BgL_list4256z00_1669);
																}}
																{	/* Module/eval.scm 397 */
																	BgL_nodez00_bglt BgL_arg4251z00_1664;

																	BgL_nodez00_bglt BgL_arg4252z00_1665;

																	BgL_arg4251z00_1664 =
																		BGl_definezd2primopzd2ze3nodeze3zzast_sexpz00
																		((BgL_globalz00_bglt) (BgL_getz00_1659));
																	BgL_arg4252z00_1665 =
																		BGl_definezd2primopzd2ze3nodeze3zzast_sexpz00
																		((BgL_globalz00_bglt) (BgL_setz00_1663));
																	{	/* Module/eval.scm 397 */
																		obj_t BgL_list4253z00_1666;

																		{	/* Module/eval.scm 397 */
																			obj_t BgL_arg4254z00_1667;

																			BgL_arg4254z00_1667 =
																				MAKE_PAIR(
																				(obj_t) (BgL_arg4252z00_1665), BNIL);
																			BgL_list4253z00_1666 =
																				MAKE_PAIR(
																				(obj_t) (BgL_arg4251z00_1664),
																				BgL_arg4254z00_1667);
																		}
																		return BgL_list4253z00_1666;
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
								{	/* Module/eval.scm 401 */
									return
										BGl_slotzd2bindzd2zzmodule_evalz00(BgL_idz00_2717,
										BgL_sz00_1556);
								}
						}
					}
				}
			}
		}
	}



/* <anonymous:4180> */
	obj_t BGl_zc3anonymousza34180ze3z83zzmodule_evalz00(obj_t BgL_envz00_2720,
		obj_t BgL_sz00_2723)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 406 */
			{	/* Module/eval.scm 407 */
				obj_t BgL_idz00_2721;

				obj_t BgL_tz00_2722;

				BgL_idz00_2721 = PROCEDURE_REF(BgL_envz00_2720, (int) (((long) 0)));
				BgL_tz00_2722 = PROCEDURE_REF(BgL_envz00_2720, (int) (((long) 1)));
				{
					obj_t BgL_sz00_1581;

					BgL_sz00_1581 = BgL_sz00_2723;
					{	/* Module/eval.scm 407 */
						bool_t BgL_testz00_3652;

						{	/* Module/eval.scm 407 */
							obj_t BgL_auxz00_3653;

							{
								BgL_slotz00_bglt BgL_auxz00_3654;

								BgL_auxz00_3654 = (BgL_slotz00_bglt) (BgL_sz00_1581);
								BgL_auxz00_3653 =
									(((BgL_slotz00_bglt) CREF(BgL_auxz00_3654))->
									BgL_classzd2ownerzd2);
							}
							BgL_testz00_3652 = (BgL_auxz00_3653 == BgL_tz00_2722);
						}
						if (BgL_testz00_3652)
							{	/* Module/eval.scm 407 */
								return BNIL;
							}
						else
							{	/* Module/eval.scm 407 */
								return
									BGl_slotzd2bindzd2zzmodule_evalz00(BgL_idz00_2721,
									BgL_sz00_1581);
							}
					}
				}
			}
		}
	}



/* get-evaluated-class-macros */
	obj_t BGl_getzd2evaluatedzd2classzd2macroszd2zzmodule_evalz00()
	{
		AN_OBJECT;
		{	/* Module/eval.scm 415 */
			{	/* Module/eval.scm 416 */
				obj_t BgL_l3785z00_1684;

				BgL_l3785z00_1684 = BGl_za2evalzd2classesza2zd2zzmodule_evalz00;
				if (NULLP(BgL_l3785z00_1684))
					{	/* Module/eval.scm 416 */
						return BNIL;
					}
				else
					{	/* Module/eval.scm 416 */
						obj_t BgL_head3787z00_1686;

						BgL_head3787z00_1686 = MAKE_PAIR(BNIL, BNIL);
						{
							obj_t BgL_l3785z00_1688;

							obj_t BgL_tail3788z00_1689;

							BgL_l3785z00_1688 = BgL_l3785z00_1684;
							BgL_tail3788z00_1689 = BgL_head3787z00_1686;
						BgL_zc3anonymousza34271ze3z83_1690:
							if (NULLP(BgL_l3785z00_1688))
								{	/* Module/eval.scm 416 */
									return CDR(BgL_head3787z00_1686);
								}
							else
								{	/* Module/eval.scm 416 */
									obj_t BgL_newtail3789z00_1692;

									{	/* Module/eval.scm 416 */
										obj_t BgL_arg4274z00_1694;

										{	/* Module/eval.scm 416 */
											obj_t BgL_sz00_1696;

											BgL_sz00_1696 = CAR(BgL_l3785z00_1688);
											{	/* Module/eval.scm 417 */
												BgL_typez00_bglt BgL_tz00_1697;

												{	/* Module/eval.scm 417 */
													obj_t BgL_arg4335z00_1757;

													obj_t BgL_arg4336z00_1758;

													{	/* Module/eval.scm 417 */
														obj_t BgL_pairz00_2580;

														BgL_pairz00_2580 = BgL_sz00_1696;
														BgL_arg4335z00_1757 = CAR(CDR(BgL_pairz00_2580));
													}
													BgL_arg4336z00_1758 =
														BGl_findzd2locationzd2zztools_locationz00
														(BgL_sz00_1696);
													BgL_tz00_1697 =
														BGl_findzd2typezf2locationz20zztype_envz00
														(BgL_arg4335z00_1757, BgL_arg4336z00_1758);
												}
												{	/* Module/eval.scm 417 */
													obj_t BgL_idz00_1698;

													BgL_idz00_1698 =
														(((BgL_typez00_bglt) CREF(BgL_tz00_1697))->
														BgL_idz00);
													{	/* Module/eval.scm 418 */
														bool_t BgL_libpz00_1699;

														{	/* Module/eval.scm 419 */
															obj_t BgL_auxz00_3671;

															{	/* Module/eval.scm 419 */
																obj_t BgL_pairz00_2585;

																BgL_pairz00_2585 = BgL_sz00_1696;
																BgL_auxz00_3671 = CDR(CDR(BgL_pairz00_2585));
															}
															BgL_libpz00_1699 = PAIRP(BgL_auxz00_3671);
														}
														{	/* Module/eval.scm 419 */

															{	/* Module/eval.scm 420 */
																obj_t BgL_arg4276z00_1700;

																obj_t BgL_arg4277z00_1701;

																BgL_arg4276z00_1700 =
																	CNST_TABLE_REF(((long) 12));
																{	/* Module/eval.scm 421 */
																	obj_t BgL_arg4278z00_1702;

																	obj_t BgL_arg4279z00_1703;

																	obj_t BgL_arg4280z00_1704;

																	{	/* Module/eval.scm 421 */
																		bool_t BgL_testz00_3676;

																		{	/* Module/eval.scm 421 */
																			BgL_tclassz00_bglt BgL_obj3329z00_2590;

																			BgL_obj3329z00_2590 =
																				(BgL_tclassz00_bglt) (BgL_tz00_1697);
																			{
																				obj_t BgL_auxz00_3678;

																				{	/* Module/eval.scm 421 */
																					BgL_objectz00_bglt BgL_auxz00_3679;

																					BgL_auxz00_3679 =
																						(BgL_objectz00_bglt)
																						(BgL_obj3329z00_2590);
																					BgL_auxz00_3678 =
																						BGL_OBJECT_WIDENING
																						(BgL_auxz00_3679);
																				}
																				BgL_testz00_3676 =
																					(((BgL_tclassz00_bglt)
																						CREF(BgL_auxz00_3678))->
																					BgL_abstractzf3zf3);
																		}}
																		if (BgL_testz00_3676)
																			{	/* Module/eval.scm 421 */
																				BgL_arg4278z00_1702 = BUNSPEC;
																			}
																		else
																			{	/* Module/eval.scm 423 */
																				obj_t BgL_arg4285z00_1708;

																				obj_t BgL_arg4286z00_1709;

																				BgL_arg4285z00_1708 =
																					CNST_TABLE_REF(((long) 12));
																				{	/* Module/eval.scm 424 */
																					obj_t BgL_arg4287z00_1710;

																					obj_t BgL_arg4288z00_1711;

																					{	/* Module/eval.scm 424 */
																						obj_t BgL_arg4292z00_1715;

																						obj_t BgL_arg4293z00_1716;

																						BgL_arg4292z00_1715 =
																							CNST_TABLE_REF(((long) 27));
																						{	/* Module/eval.scm 424 */
																							obj_t BgL_arg4294z00_1717;

																							{	/* Module/eval.scm 424 */
																								obj_t BgL_arg4297z00_1720;

																								obj_t BgL_arg4298z00_1721;

																								BgL_arg4297z00_1720 =
																									CNST_TABLE_REF(((long) 31));
																								{	/* Module/eval.scm 424 */
																									obj_t BgL_arg4299z00_1722;

																									{	/* Module/eval.scm 424 */
																										obj_t BgL_arg4303z00_1725;

																										obj_t BgL_arg4304z00_1726;

																										BgL_arg4303z00_1725 =
																											CNST_TABLE_REF(((long)
																												18));
																										{	/* Module/eval.scm 424 */
																											obj_t
																												BgL_list4305z00_1727;
																											BgL_list4305z00_1727 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg4304z00_1726 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_idz00_1698,
																												BgL_list4305z00_1727);
																										}
																										BgL_arg4299z00_1722 =
																											MAKE_PAIR
																											(BgL_arg4303z00_1725,
																											BgL_arg4304z00_1726);
																									}
																									{	/* Module/eval.scm 424 */
																										obj_t BgL_list4301z00_1724;

																										BgL_list4301z00_1724 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg4298z00_1721 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg4299z00_1722,
																											BgL_list4301z00_1724);
																								}}
																								BgL_arg4294z00_1717 =
																									MAKE_PAIR(BgL_arg4297z00_1720,
																									BgL_arg4298z00_1721);
																							}
																							{	/* Module/eval.scm 424 */
																								obj_t BgL_list4296z00_1719;

																								BgL_list4296z00_1719 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg4293z00_1716 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg4294z00_1717,
																									BgL_list4296z00_1719);
																						}}
																						BgL_arg4287z00_1710 =
																							MAKE_PAIR(BgL_arg4292z00_1715,
																							BgL_arg4293z00_1716);
																					}
																					{	/* Module/eval.scm 425 */
																						obj_t BgL_arg4306z00_1728;

																						obj_t BgL_arg4307z00_1729;

																						BgL_arg4306z00_1728 =
																							CNST_TABLE_REF(((long) 27));
																						{	/* Module/eval.scm 425 */
																							obj_t BgL_arg4308z00_1730;

																							{	/* Module/eval.scm 425 */
																								obj_t BgL_arg4311z00_1733;

																								obj_t BgL_arg4312z00_1734;

																								BgL_arg4311z00_1733 =
																									CNST_TABLE_REF(((long) 32));
																								{	/* Module/eval.scm 425 */
																									obj_t BgL_arg4313z00_1735;

																									{	/* Module/eval.scm 425 */
																										obj_t BgL_arg4316z00_1738;

																										obj_t BgL_arg4317z00_1739;

																										BgL_arg4316z00_1738 =
																											CNST_TABLE_REF(((long)
																												18));
																										{	/* Module/eval.scm 425 */
																											obj_t
																												BgL_list4318z00_1740;
																											BgL_list4318z00_1740 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg4317z00_1739 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_idz00_1698,
																												BgL_list4318z00_1740);
																										}
																										BgL_arg4313z00_1735 =
																											MAKE_PAIR
																											(BgL_arg4316z00_1738,
																											BgL_arg4317z00_1739);
																									}
																									{	/* Module/eval.scm 425 */
																										obj_t BgL_list4315z00_1737;

																										BgL_list4315z00_1737 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg4312z00_1734 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg4313z00_1735,
																											BgL_list4315z00_1737);
																								}}
																								BgL_arg4308z00_1730 =
																									MAKE_PAIR(BgL_arg4311z00_1733,
																									BgL_arg4312z00_1734);
																							}
																							{	/* Module/eval.scm 425 */
																								obj_t BgL_list4310z00_1732;

																								BgL_list4310z00_1732 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg4307z00_1729 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg4308z00_1730,
																									BgL_list4310z00_1732);
																						}}
																						BgL_arg4288z00_1711 =
																							MAKE_PAIR(BgL_arg4306z00_1728,
																							BgL_arg4307z00_1729);
																					}
																					{	/* Module/eval.scm 423 */
																						obj_t BgL_list4290z00_1713;

																						{	/* Module/eval.scm 423 */
																							obj_t BgL_arg4291z00_1714;

																							BgL_arg4291z00_1714 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list4290z00_1713 =
																								MAKE_PAIR(BgL_arg4288z00_1711,
																								BgL_arg4291z00_1714);
																						}
																						BgL_arg4286z00_1709 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg4287z00_1710,
																							BgL_list4290z00_1713);
																				}}
																				BgL_arg4278z00_1702 =
																					MAKE_PAIR(BgL_arg4285z00_1708,
																					BgL_arg4286z00_1709);
																	}}
																	{	/* Module/eval.scm 426 */
																		obj_t BgL_arg4319z00_1741;

																		obj_t BgL_arg4320z00_1742;

																		BgL_arg4319z00_1741 =
																			CNST_TABLE_REF(((long) 27));
																		{	/* Module/eval.scm 426 */
																			obj_t BgL_arg4321z00_1743;

																			{	/* Module/eval.scm 426 */
																				obj_t BgL_arg4324z00_1746;

																				obj_t BgL_arg4325z00_1747;

																				BgL_arg4324z00_1746 =
																					CNST_TABLE_REF(((long) 33));
																				{	/* Module/eval.scm 426 */
																					obj_t BgL_arg4326z00_1748;

																					{	/* Module/eval.scm 426 */
																						obj_t BgL_arg4329z00_1751;

																						obj_t BgL_arg4330z00_1752;

																						BgL_arg4329z00_1751 =
																							CNST_TABLE_REF(((long) 18));
																						{	/* Module/eval.scm 426 */
																							obj_t BgL_list4331z00_1753;

																							BgL_list4331z00_1753 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg4330z00_1752 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_idz00_1698,
																								BgL_list4331z00_1753);
																						}
																						BgL_arg4326z00_1748 =
																							MAKE_PAIR(BgL_arg4329z00_1751,
																							BgL_arg4330z00_1752);
																					}
																					{	/* Module/eval.scm 426 */
																						obj_t BgL_list4328z00_1750;

																						BgL_list4328z00_1750 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg4325z00_1747 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg4326z00_1748,
																							BgL_list4328z00_1750);
																				}}
																				BgL_arg4321z00_1743 =
																					MAKE_PAIR(BgL_arg4324z00_1746,
																					BgL_arg4325z00_1747);
																			}
																			{	/* Module/eval.scm 426 */
																				obj_t BgL_list4323z00_1745;

																				BgL_list4323z00_1745 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg4320z00_1742 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg4321z00_1743,
																					BgL_list4323z00_1745);
																		}}
																		BgL_arg4279z00_1703 =
																			MAKE_PAIR(BgL_arg4319z00_1741,
																			BgL_arg4320z00_1742);
																	}
																	BgL_arg4280z00_1704 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BGl_evalzd2bindzd2superzd2accesszd2zzmodule_evalz00
																		(BgL_tz00_1697, BgL_libpz00_1699), BNIL);
																	{	/* Module/eval.scm 420 */
																		obj_t BgL_list4281z00_1705;

																		{	/* Module/eval.scm 420 */
																			obj_t BgL_arg4282z00_1706;

																			BgL_arg4282z00_1706 =
																				MAKE_PAIR(BgL_arg4280z00_1704, BNIL);
																			BgL_list4281z00_1705 =
																				MAKE_PAIR(BgL_arg4279z00_1703,
																				BgL_arg4282z00_1706);
																		}
																		BgL_arg4277z00_1701 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg4278z00_1702,
																			BgL_list4281z00_1705);
																}}
																BgL_arg4274z00_1694 =
																	MAKE_PAIR(BgL_arg4276z00_1700,
																	BgL_arg4277z00_1701);
										}}}}}}
										BgL_newtail3789z00_1692 =
											MAKE_PAIR(BgL_arg4274z00_1694, BNIL);
									}
									SET_CDR(BgL_tail3788z00_1689, BgL_newtail3789z00_1692);
									{
										obj_t BgL_tail3788z00_3734;

										obj_t BgL_l3785z00_3732;

										BgL_l3785z00_3732 = CDR(BgL_l3785z00_1688);
										BgL_tail3788z00_3734 = BgL_newtail3789z00_1692;
										BgL_tail3788z00_1689 = BgL_tail3788z00_3734;
										BgL_l3785z00_1688 = BgL_l3785z00_3732;
										goto BgL_zc3anonymousza34271ze3z83_1690;
									}
								}
						}
					}
			}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzmodule_evalz00()
	{
		AN_OBJECT;
		{	/* Module/eval.scm 15 */
			{	/* Module/eval.scm 39 */
				obj_t BgL_arg4337z00_1760;

				obj_t BgL_arg4338z00_1761;

				obj_t BgL_arg4341z00_1764;

				BgL_arg4337z00_1760 = CNST_TABLE_REF(((long) 34));
				BgL_arg4338z00_1761 = BGl_globalz00zzast_varz00;
				{	/* Module/eval.scm 39 */
					obj_t BgL_v3790z00_1765;

					BgL_v3790z00_1765 = create_vector((int) (((long) 0)));
					BgL_arg4341z00_1764 = BgL_v3790z00_1765;
				}
				BGl_evglobalz00zzmodule_evalz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4337z00_1760,
					BgL_arg4338z00_1761, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2evglobalzd2envz52zzmodule_evalz00,
					BGl_evglobalzd2nilzd2envz00zzmodule_evalz00,
					BGl_evglobalzf3zd2envz21zzmodule_evalz00, ((long) 15799469), BFALSE,
					BFALSE, BgL_arg4341z00_1764);
			}
			return (BGl_z52thezd2evglobalzd2nilz52zzmodule_evalz00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* _evglobal? */
	obj_t BGl__evglobalzf3zf3zzmodule_evalz00(obj_t BgL_envz00_2726,
		obj_t BgL_obj3705z00_2727)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 39 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3705z00_2727,
					BGl_evglobalz00zzmodule_evalz00));
		}
	}



/* widening-evglobal */
	BgL_evglobalz00_bglt BGl_wideningzd2evglobalzd2zzmodule_evalz00()
	{
		AN_OBJECT;
		{	/* Module/eval.scm 39 */
			{	/* Module/eval.scm 39 */
				BgL_evglobalz00_bglt BgL_new3676z00_1766;

				BgL_new3676z00_1766 =
					((BgL_evglobalz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_evglobalz00_bgl))));
				return BgL_new3676z00_1766;
			}
		}
	}



/* _%allocate-evglobal */
	obj_t BGl__z52allocatezd2evglobalz80zzmodule_evalz00(obj_t BgL_envz00_2724)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 39 */
			{	/* Module/eval.scm 39 */
				BgL_globalz00_bglt BgL_auxz00_3742;

				{	/* Module/eval.scm 39 */
					BgL_globalz00_bglt BgL_res4469z00_2758;

					{	/* Module/eval.scm 39 */
						BgL_globalz00_bglt BgL_new3698z00_2756;

						BgL_new3698z00_2756 =
							((BgL_globalz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_globalz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3698z00_2756),
							BGl_classzd2numzd2zz__objectz00(BGl_evglobalz00zzmodule_evalz00));
						{	/* Module/eval.scm 39 */
							BgL_objectz00_bglt BgL_auxz00_3747;

							BgL_auxz00_3747 = (BgL_objectz00_bglt) (BgL_new3698z00_2756);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3747, BFALSE);
						}
						BgL_res4469z00_2758 = BgL_new3698z00_2756;
					}
					BgL_auxz00_3742 = BgL_res4469z00_2758;
				}
				return (obj_t) (BgL_auxz00_3742);
			}
		}
	}



/* evglobal-nil */
	BgL_evglobalz00_bglt BGl_evglobalzd2nilzd2zzmodule_evalz00()
	{
		AN_OBJECT;
		{	/* Module/eval.scm 39 */
			if ((BGl_z52thezd2evglobalzd2nilz52zzmodule_evalz00 == BUNSPEC))
				{	/* Module/eval.scm 39 */
					{	/* Module/eval.scm 39 */
						BgL_globalz00_bglt BgL_res4436z00_2605;

						{	/* Module/eval.scm 39 */
							BgL_globalz00_bglt BgL_new1750z00_2601;

							BgL_new1750z00_2601 =
								((BgL_globalz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_globalz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1750z00_2601),
								BGl_classzd2numzd2zz__objectz00(BGl_globalz00zzast_varz00));
							{	/* Module/eval.scm 39 */
								BgL_objectz00_bglt BgL_auxz00_3757;

								BgL_auxz00_3757 = (BgL_objectz00_bglt) (BgL_new1750z00_2601);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3757, BFALSE);
							}
							BgL_res4436z00_2605 = BgL_new1750z00_2601;
						}
						BGl_z52thezd2evglobalzd2nilz52zzmodule_evalz00 =
							(obj_t) (BgL_res4436z00_2605);
					}
					{	/* Module/eval.scm 39 */
						obj_t BgL_arg4346z00_1774;

						BgL_typez00_bglt BgL_arg4347z00_1775;

						BgL_valuez00_bglt BgL_arg4348z00_1776;

						obj_t BgL_arg4350z00_1778;

						BgL_arg4346z00_1774 = CNST_TABLE_REF(((long) 35));
						BgL_arg4347z00_1775 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4348z00_1776 = BGl_valuezd2nilzd2zzast_varz00();
						BgL_arg4350z00_1778 = CNST_TABLE_REF(((long) 35));
						{	/* Module/eval.scm 39 */
							BgL_globalz00_bglt BgL_res4437z00_2639;

							{	/* Module/eval.scm 39 */
								BgL_globalz00_bglt BgL_new1732z00_2606;

								BgL_new1732z00_2606 =
									(BgL_globalz00_bglt)
									(BGl_z52thezd2evglobalzd2nilz52zzmodule_evalz00);
								{	/* Module/eval.scm 39 */
									obj_t BgL_id1716z00_2623;

									obj_t BgL_name1717z00_2624;

									BgL_typez00_bglt BgL_type1718z00_2625;

									BgL_valuez00_bglt BgL_value1719z00_2626;

									obj_t BgL_access1720z00_2627;

									obj_t BgL_fastzd2alpha1721zd2_2628;

									obj_t BgL_removable1722z00_2629;

									long BgL_occurrence1723z00_2630;

									obj_t BgL_module1724z00_2631;

									obj_t BgL_import1725z00_2632;

									bool_t BgL_evaluablezf31726zf3_2633;

									obj_t BgL_library1727z00_2634;

									bool_t BgL_userzf31728zf3_2635;

									obj_t BgL_pragma1729z00_2636;

									obj_t BgL_src1730z00_2637;

									obj_t BgL_jvmzd2typezd2name1731z00_2638;

									BgL_id1716z00_2623 = BgL_arg4346z00_1774;
									BgL_name1717z00_2624 = BUNSPEC;
									BgL_type1718z00_2625 = BgL_arg4347z00_1775;
									BgL_value1719z00_2626 = BgL_arg4348z00_1776;
									BgL_access1720z00_2627 = BUNSPEC;
									BgL_fastzd2alpha1721zd2_2628 = BUNSPEC;
									BgL_removable1722z00_2629 = BUNSPEC;
									BgL_occurrence1723z00_2630 = ((long) 0);
									BgL_module1724z00_2631 = BgL_arg4350z00_1778;
									BgL_import1725z00_2632 = BUNSPEC;
									BgL_evaluablezf31726zf3_2633 = ((bool_t) 0);
									BgL_library1727z00_2634 = BUNSPEC;
									BgL_userzf31728zf3_2635 = ((bool_t) 0);
									BgL_pragma1729z00_2636 = BUNSPEC;
									BgL_src1730z00_2637 = BUNSPEC;
									BgL_jvmzd2typezd2name1731z00_2638 =
										BGl_string4459z00zzmodule_evalz00;
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_2606))->
											BgL_idz00) = ((obj_t) BgL_id1716z00_2623), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_2606))->
											BgL_namez00) = ((obj_t) BgL_name1717z00_2624), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_2606))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type1718z00_2625), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_2606))->
											BgL_valuez00) =
										((BgL_valuez00_bglt) BgL_value1719z00_2626), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_2606))->
											BgL_accessz00) =
										((obj_t) BgL_access1720z00_2627), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_2606))->
											BgL_fastzd2alphazd2) =
										((obj_t) BgL_fastzd2alpha1721zd2_2628), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_2606))->
											BgL_removablez00) =
										((obj_t) BgL_removable1722z00_2629), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_2606))->
											BgL_occurrencez00) =
										((long) BgL_occurrence1723z00_2630), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_2606))->
											BgL_modulez00) =
										((obj_t) BgL_module1724z00_2631), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_2606))->
											BgL_importz00) =
										((obj_t) BgL_import1725z00_2632), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_2606))->
											BgL_evaluablezf3zf3) =
										((bool_t) BgL_evaluablezf31726zf3_2633), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_2606))->
											BgL_libraryz00) =
										((obj_t) BgL_library1727z00_2634), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_2606))->
											BgL_userzf3zf3) =
										((bool_t) BgL_userzf31728zf3_2635), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_2606))->
											BgL_pragmaz00) =
										((obj_t) BgL_pragma1729z00_2636), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_2606))->
											BgL_srcz00) = ((obj_t) BgL_src1730z00_2637), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_2606))->
											BgL_jvmzd2typezd2namez00) =
										((obj_t) BgL_jvmzd2typezd2name1731z00_2638), BUNSPEC);
									BgL_res4437z00_2639 = BgL_new1732z00_2606;
							}} BgL_res4437z00_2639;
					}}
					{	/* Module/eval.scm 39 */
						long BgL_arg4352z00_1780;

						BgL_arg4352z00_1780 =
							BGl_classzd2numzd2zz__objectz00(BGl_evglobalz00zzmodule_evalz00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2evglobalzd2nilz52zzmodule_evalz00),
							BgL_arg4352z00_1780);
					}
					{	/* Module/eval.scm 39 */
						BgL_evglobalz00_bglt BgL_arg4353z00_1781;

						BgL_arg4353z00_1781 = BGl_wideningzd2evglobalzd2zzmodule_evalz00();
						{	/* Module/eval.scm 39 */
							obj_t BgL_auxz00_3788;

							BgL_objectz00_bglt BgL_auxz00_3786;

							BgL_auxz00_3788 = (obj_t) (BgL_arg4353z00_1781);
							BgL_auxz00_3786 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2evglobalzd2nilz52zzmodule_evalz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3786, BgL_auxz00_3788);
				}}}
			else
				{	/* Module/eval.scm 39 */
					BFALSE;
				}
			return
				(BgL_evglobalz00_bglt) (BGl_z52thezd2evglobalzd2nilz52zzmodule_evalz00);
		}
	}



/* _evglobal-nil */
	obj_t BGl__evglobalzd2nilzd2zzmodule_evalz00(obj_t BgL_envz00_2725)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 39 */
			return (obj_t) (BGl_evglobalzd2nilzd2zzmodule_evalz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_evalz00()
	{
		AN_OBJECT;
		{	/* Module/eval.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_evalz00()
	{
		AN_OBJECT;
		{	/* Module/eval.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_evglobalz00zzmodule_evalz00, BGl_proc4460z00zzmodule_evalz00,
				BGl_string4461z00zzmodule_evalz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_evglobalz00zzmodule_evalz00, BGl_proc4462z00zzmodule_evalz00,
				BGl_string4463z00zzmodule_evalz00);
		}
	}



/* struct+object->objec3794 */
	obj_t BGl_structzb2objectzd2ze3objec3794z83zzmodule_evalz00(obj_t
		BgL_envz00_2735, obj_t BgL_oz00_2736, obj_t BgL_sz00_2737)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 39 */
			{
				BgL_evglobalz00_bglt BgL_oz00_2204;

				obj_t BgL_sz00_2205;

				{	/* Module/eval.scm 39 */
					BgL_evglobalz00_bglt BgL_auxz00_3796;

					BgL_oz00_2204 = (BgL_evglobalz00_bglt) (BgL_oz00_2736);
					BgL_sz00_2205 = BgL_sz00_2737;
					{

						{	/* Module/eval.scm 39 */
							obj_t BgL_old3702z00_2208;

							{	/* Module/eval.scm 39 */
								obj_t BgL_nextzd2method3793zd2_2213;

								BgL_nextzd2method3793zd2_2213 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2204),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_evglobalz00zzmodule_evalz00);
								if (PROCEDUREP(BgL_nextzd2method3793zd2_2213))
									{	/* Module/eval.scm 39 */
										BgL_old3702z00_2208 =
											PROCEDURE_ENTRY(BgL_nextzd2method3793zd2_2213)
											(BgL_nextzd2method3793zd2_2213, (obj_t) (BgL_oz00_2204),
											BgL_sz00_2205, BEOA);
									}
								else
									{	/* Module/eval.scm 39 */
										BgL_old3702z00_2208 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2204), BgL_sz00_2205));
									}
							}
							{	/* Module/eval.scm 39 */
								BgL_evglobalz00_bglt BgL_new3704z00_2210;

								BgL_new3704z00_2210 =
									((BgL_evglobalz00_bglt) (BgL_old3702z00_2208));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3704z00_2210),
									BGl_classzd2numzd2zz__objectz00
									(BGl_evglobalz00zzmodule_evalz00));
								{	/* Module/eval.scm 39 */
									BgL_evglobalz00_bglt BgL_arg4409z00_2212;

									BgL_arg4409z00_2212 =
										BGl_wideningzd2evglobalzd2zzmodule_evalz00();
									{	/* Module/eval.scm 39 */
										obj_t BgL_auxz00_3814;

										BgL_objectz00_bglt BgL_auxz00_3812;

										BgL_auxz00_3814 = (obj_t) (BgL_arg4409z00_2212);
										BgL_auxz00_3812 =
											(BgL_objectz00_bglt) (BgL_new3704z00_2210);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3812, BgL_auxz00_3814);
									}
								}
								BgL_auxz00_3796 = BgL_new3704z00_2210;
							}
						}
					}
					return (obj_t) (BgL_auxz00_3796);
				}
			}
		}
	}



/* object->struct-evglo3792 */
	obj_t BGl_objectzd2ze3structzd2evglo3792ze3zzmodule_evalz00(obj_t
		BgL_envz00_2738, obj_t BgL_obj3699z00_2739)
	{
		AN_OBJECT;
		{	/* Module/eval.scm 39 */
			{
				BgL_evglobalz00_bglt BgL_obj3699z00_2196;

				BgL_obj3699z00_2196 = (BgL_evglobalz00_bglt) (BgL_obj3699z00_2739);
				{

					{	/* Module/eval.scm 39 */
						obj_t BgL_res3700z00_2199;

						{	/* Module/eval.scm 39 */
							obj_t BgL_nextzd2method3791zd2_2202;

							BgL_nextzd2method3791zd2_2202 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3699z00_2196),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_evglobalz00zzmodule_evalz00);
							if (PROCEDUREP(BgL_nextzd2method3791zd2_2202))
								{	/* Module/eval.scm 39 */
									BgL_res3700z00_2199 =
										PROCEDURE_ENTRY(BgL_nextzd2method3791zd2_2202)
										(BgL_nextzd2method3791zd2_2202,
										(obj_t) (BgL_obj3699z00_2196), BEOA);
								}
							else
								{	/* Module/eval.scm 39 */
									BgL_res3700z00_2199 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3699z00_2196));
								}
						}
						{	/* Module/eval.scm 39 */
							obj_t BgL_aux3701z00_2200;

							{	/* Module/eval.scm 39 */
								obj_t BgL_keyz00_2662;

								BgL_keyz00_2662 = CNST_TABLE_REF(((long) 34));
								BgL_aux3701z00_2200 =
									make_struct(BgL_keyz00_2662, (int) (((long) 0)), BUNSPEC);
							}
							{	/* Module/eval.scm 39 */
								int BgL_auxz00_3831;

								BgL_auxz00_3831 = (int) (((long) 0));
								STRUCT_SET(BgL_res3700z00_2199, BgL_auxz00_3831,
									BgL_aux3701z00_2200);
							}
							{	/* Module/eval.scm 39 */
								obj_t BgL_auxz00_3834;

								BgL_auxz00_3834 = STRUCT_KEY(BgL_res3700z00_2199);
								STRUCT_KEY_SET(BgL_aux3701z00_2200, BgL_auxz00_3834);
							}
							{	/* Module/eval.scm 39 */
								obj_t BgL_kz00_2673;

								BgL_kz00_2673 = CNST_TABLE_REF(((long) 34));
								STRUCT_KEY_SET(BgL_res3700z00_2199, BgL_kz00_2673);
							}
							return BgL_res3700z00_2199;
						}
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_evalz00()
	{
		AN_OBJECT;
		{	/* Module/eval.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4464z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4464z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4464z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string4464z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 256968439),
				BSTRING_TO_STRING(BGl_string4464z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string4464z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4464z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4464z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string4464z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4464z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string4464z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string4464z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string4464z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string4464z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(((long) 237711330),
				BSTRING_TO_STRING(BGl_string4464z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string4464z00zzmodule_evalz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string4464z00zzmodule_evalz00));
		}
	}

#ifdef __cplusplus
}
#endif
