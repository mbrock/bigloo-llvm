/*===========================================================================*/
/*   (SawMsil/compile.scm)                                                   */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMsil/compile.scm)*/
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

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

	typedef struct BgL_scnstz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_nodez00;
		obj_t BgL_classz00;
		obj_t BgL_locz00;
	}               *BgL_scnstz00_bglt;

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

	typedef struct BgL_tvecz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}              *BgL_tvecz00_bglt;

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

	typedef struct BgL_dotnetz00_bgl
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
		obj_t BgL_outz00;
		obj_t BgL_qnamez00;
	}                *BgL_dotnetz00_bglt;

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

	typedef struct BgL_indexedz00_bgl
	{
		int BgL_indexz00;
	}                 *BgL_indexedz00_bglt;


	extern obj_t BGl_openzd2tryzd2zzmsil_outz00(BgL_dotnetz00_bglt);
	extern obj_t BGl_declarezd2fieldzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		BgL_slotz00_bglt);
	extern int BGl_maxstackz00zzmsil_maxstackz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(int, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_printzd2infozd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	extern obj_t BGl_pushzd2numzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	static obj_t BGl_compilezd2classzd2zzmsil_compilez00(BgL_dotnetz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
	static obj_t BGl_cnstzd2initzd2zzmsil_compilez00();
	extern BgL_tclassz00_bglt
		BGl_getzd2itszd2superz00zzbackend_cplibz00(BgL_typez00_bglt);
	extern obj_t BGl_libcallz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t
		BGl_registerzd2allocationzd2zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt, BgL_globalz00_bglt, obj_t, obj_t);
	static obj_t BGl_unclassz00zzmsil_compilez00(obj_t);
	extern obj_t BGl_openzd2methodzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_compilezd2modulezd2zzmsil_compilez00(BgL_dotnetz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmsil_compilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmsil_codez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmsil_maxstackz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmsil_funcallz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmsil_outz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmsil_namesz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzsaw_registerzd2allocationzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_exprz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_woodcutterz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_libz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_dotnet_classz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_allocz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzmsil_compilez00();
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_closezd2classzd2zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl__msilzd2compilezd2zzmsil_compilez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_callzd2globalzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		BgL_globalz00_bglt);
	extern obj_t BGl_buildzd2treezd2zzsaw_exprz00(BgL_backendz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_za2mainza2z00zzmodule_modulez00;
	extern obj_t BGl_newobjz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t
		BGl_getzd2globalzd2variableszd2tozd2bezd2initializa7edz75zzbackend_cplibz00
		(obj_t);
	extern bool_t BGl_globalzd2optionalzf3z21zzast_varz00(obj_t);
	extern obj_t
		BGl_openzd2methodzd2constructorz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	extern obj_t BGl_modulezd2codezd2zzmsil_codez00(BgL_dotnetz00_bglt,
		BgL_globalz00_bglt, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzmsil_compilez00();
	static obj_t BGl_modulezd2mainzd2zzmsil_compilez00(BgL_dotnetz00_bglt);
	extern obj_t BGl_storezd2vectorzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	static obj_t BGl_modulezd2initzd2cnstz00zzmsil_compilez00(BgL_dotnetz00_bglt,
		obj_t, BgL_valuez00_bglt);
	extern obj_t BGl_dupz00zzmsil_outz00(BgL_dotnetz00_bglt);
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmsil_compilez00 = BUNSPEC;
	extern obj_t BGl_getzd2nodezd2atomzd2valuezd2zzcnst_nodez00(BgL_nodez00_bglt);
	static obj_t BGl_genericzd2initzd2zzmsil_compilez00();
	static obj_t BGl_modulezd2initzd2zzmsil_compilez00(BgL_dotnetz00_bglt);
	static bool_t BGl_keyzd2optzf3z21zzmsil_compilez00(obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_loadzd2parzd2zzmsil_outz00(BgL_dotnetz00_bglt, int);
	extern obj_t
		BGl_modulezd2funcallzf2applyz20zzmsil_funcallz00(BgL_dotnetz00_bglt);
	extern obj_t BGl_openzd2catchzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_declarezd2maxstackzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzmsil_compilez00();
	extern obj_t BGl_getzd2declaredzd2classesz00zzbackend_cplibz00();
	extern obj_t BGl_closezd2methodzd2zzmsil_outz00(BgL_dotnetz00_bglt);
	extern BgL_globalz00_bglt
		BGl_globalzd2entryzd2zzbackend_cplibz00(BgL_globalz00_bglt);
	static bool_t BGl_modulezd2functionszd2zzmsil_compilez00(BgL_dotnetz00_bglt);
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	extern obj_t BGl_declarezd2entrypointzd2zzmsil_outz00(BgL_dotnetz00_bglt);
	extern obj_t BGl_openzd2namespacezd2zzmsil_outz00(BgL_dotnetz00_bglt);
	extern obj_t BGl_closezd2tryzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t
		BGl_openzd2methodzd2classzd2constructorzd2zzmsil_outz00(BgL_dotnetz00_bglt);
	extern obj_t
		BGl_getzd2declaredzd2fieldsz00zzbackend_cplibz00(BgL_typez00_bglt);
	extern obj_t BGl_openzd2globalzd2methodz00zzmsil_outz00(BgL_dotnetz00_bglt,
		BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_msilzd2compilezd2zzmsil_compilez00(BgL_dotnetz00_bglt, obj_t);
	extern obj_t BGl_closezd2namespacezd2zzmsil_outz00(BgL_dotnetz00_bglt);
	extern obj_t BGl_globalzd2ze3blocksz31zzsaw_woodcutterz00(BgL_backendz00_bglt,
		BgL_globalz00_bglt);
	static obj_t BGl_constructorz00zzmsil_compilez00(BgL_dotnetz00_bglt, long,
		obj_t);
	extern obj_t BGl_openzd2classzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_pushzd2intzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	extern obj_t BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
	extern obj_t BGl_declarezd2globalzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		BgL_globalz00_bglt);
	extern obj_t BGl_newarrayz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	extern BgL_rtl_regz00_bglt
		BGl_localzd2ze3regz31zzsaw_node2rtlz00(BgL_localz00_bglt);
	extern obj_t
		BGl_getzd2declaredzd2globalzd2variableszd2zzbackend_cplibz00(obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_globalzd2arityzd2zzbackend_cplibz00(BgL_globalz00_bglt);
	extern obj_t BGl_storezd2globalzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		BgL_globalz00_bglt);
	extern obj_t BGl_forzd2eachzd2typez12z12zztype_envz00(obj_t);
	extern obj_t BGl_pushzd2stringzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	extern obj_t BGl_returnz00zzmsil_outz00(BgL_dotnetz00_bglt);
	extern obj_t
		BGl_callzd2superzd2constructorz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t);
	extern bool_t BGl_globalzd2keyzf3z21zzast_varz00(obj_t);
	static obj_t BGl_modulezd2functionzd2zzmsil_compilez00(BgL_dotnetz00_bglt,
		obj_t);
	extern obj_t BGl_popz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzmsil_compilez00();
	static obj_t __cnst[37];


	extern obj_t BGl_msilzd2setzd2typezd2namesz12zd2envz12zzmsil_namesz00;
	   
		 
		DEFINE_STRING(BGl_string5121z00zzmsil_compilez00,
		BgL_bgl_string5121za700za7za7m5135za7, "bigloo.procedure", 16);
	      DEFINE_STRING(BGl_string5122z00zzmsil_compilez00,
		BgL_bgl_string5122za700za7za7m5136za7, "Main", 4);
	      DEFINE_STRING(BGl_string5123z00zzmsil_compilez00,
		BgL_bgl_string5123za700za7za7m5137za7, "System.Exception", 16);
	      DEFINE_STRING(BGl_string5124z00zzmsil_compilez00,
		BgL_bgl_string5124za700za7za7m5138za7, "_return", 7);
	      DEFINE_STRING(BGl_string5125z00zzmsil_compilez00,
		BgL_bgl_string5125za700za7za7m5139za7, "..ctor -> ", 10);
	      DEFINE_STRING(BGl_string5126z00zzmsil_compilez00,
		BgL_bgl_string5126za700za7za7m5140za7, "bigloo.real", 11);
	      DEFINE_STRING(BGl_string5127z00zzmsil_compilez00,
		BgL_bgl_string5127za700za7za7m5141za7, "bigloo.belong", 13);
	      DEFINE_STRING(BGl_string5128z00zzmsil_compilez00,
		BgL_bgl_string5128za700za7za7m5142za7, "bigloo.bllong", 13);
	      DEFINE_STRING(BGl_string5130z00zzmsil_compilez00,
		BgL_bgl_string5130za700za7za7m5143za7, "Unknown cnst class", 18);
	      DEFINE_STRING(BGl_string5129z00zzmsil_compilez00,
		BgL_bgl_string5129za700za7za7m5144za7, "emit-cnst", 9);
	      DEFINE_STRING(BGl_string5131z00zzmsil_compilez00,
		BgL_bgl_string5131za700za7za7m5145za7, "msil_compile", 12);
	      DEFINE_STRING(BGl_string5132z00zzmsil_compilez00,
		BgL_bgl_string5132za700za7za7m5146za7,
		"float long short ucs2 char byte bool stvector (int int int) sgfun (int int) sfun (llong) llong sllong (elong) elong selong (double) double sreal (fstring) getbytes bstring sstring int (exception) internalerror bigloo_main listargv bigloo.foreign obj init bigloo.realcallback (fstrings) void (public static) ",
		307);
	extern obj_t BGl_msilzd2setzd2globalzd2namesz12zd2envz12zzmsil_namesz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_msilzd2compilezd2envz00zzmsil_compilez00,
		BgL_bgl__msilza7d2compileza75147z00,
		BGl__msilzd2compilezd2zzmsil_compilez00, 0L, BUNSPEC, 2);
	extern obj_t BGl_resetzd2globalz12zd2envz12zzbackend_cplibz00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmsil_compilez00(long
		BgL_checksumz00_2318, char *BgL_fromz00_2319)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmsil_compilez00))
				{
					BGl_requirezd2initializa7ationz75zzmsil_compilez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmsil_compilez00();
					BGl_cnstzd2initzd2zzmsil_compilez00();
					BGl_importedzd2moduleszd2initz00zzmsil_compilez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmsil_compilez00()
	{
		AN_OBJECT;
		{	/* SawMsil/compile.scm 1 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "msil_compile");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"msil_compile");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"msil_compile");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "msil_compile");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmsil_compilez00()
	{
		AN_OBJECT;
		{	/* SawMsil/compile.scm 1 */
			{	/* SawMsil/compile.scm 1 */
				obj_t BgL_cportz00_2310;

				BgL_cportz00_2310 =
					bgl_open_input_string(BGl_string5132z00zzmsil_compilez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2311;

					BgL_iz00_2311 = ((long) 36);
				BgL_loopz00_2312:
					if ((BgL_iz00_2311 == ((long) -1)))
						{	/* SawMsil/compile.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMsil/compile.scm 1 */
							{	/* SawMsil/compile.scm 1 */
								obj_t BgL_arg5134z00_2314;

								{	/* SawMsil/compile.scm 1 */

									{	/* SawMsil/compile.scm 1 */
										obj_t BgL_locationz00_2316;

										BgL_locationz00_2316 = BBOOL(((bool_t) 0));
										{	/* SawMsil/compile.scm 1 */

											BgL_arg5134z00_2314 =
												BGl_readz00zz__readerz00(BgL_cportz00_2310,
												BgL_locationz00_2316);
										}
									}
								}
								{	/* SawMsil/compile.scm 1 */
									int BgL_auxz00_2336;

									BgL_auxz00_2336 = (int) (BgL_iz00_2311);
									CNST_TABLE_SET(BgL_auxz00_2336, BgL_arg5134z00_2314);
							}}
							{	/* SawMsil/compile.scm 1 */
								int BgL_auxz00_2317;

								BgL_auxz00_2317 = (int) ((BgL_iz00_2311 - ((long) 1)));
								{
									long BgL_iz00_2341;

									BgL_iz00_2341 = (long) (BgL_auxz00_2317);
									BgL_iz00_2311 = BgL_iz00_2341;
									goto BgL_loopz00_2312;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmsil_compilez00()
	{
		AN_OBJECT;
		{	/* SawMsil/compile.scm 1 */
			return BUNSPEC;
		}
	}



/* msil-compile */
	BGL_EXPORTED_DEF obj_t
		BGl_msilzd2compilezd2zzmsil_compilez00(BgL_dotnetz00_bglt BgL_mez00_11,
		obj_t BgL_outz00_12)
	{
		AN_OBJECT;
		{	/* SawMsil/compile.scm 38 */
			((((BgL_dotnetz00_bglt) CREF(BgL_mez00_11))->BgL_outz00) =
				((obj_t) BgL_outz00_12), BUNSPEC);
			BGl_forzd2eachzd2globalz12z12zzast_envz00
				(BGl_resetzd2globalz12zd2envz12zzbackend_cplibz00, BNIL);
			BGl_forzd2eachzd2typez12z12zztype_envz00
				(BGl_msilzd2setzd2typezd2namesz12zd2envz12zzmsil_namesz00);
			BGl_forzd2eachzd2globalz12z12zzast_envz00
				(BGl_msilzd2setzd2globalzd2namesz12zd2envz12zzmsil_namesz00, BNIL);
			BGl_openzd2namespacezd2zzmsil_outz00(BgL_mez00_11);
			BGl_compilezd2modulezd2zzmsil_compilez00(BgL_mez00_11);
			{	/* SawMsil/compile.scm 46 */
				obj_t BgL_g4895z00_1378;

				BgL_g4895z00_1378 = BGl_getzd2declaredzd2classesz00zzbackend_cplibz00();
				{
					obj_t BgL_l4893z00_1380;

					BgL_l4893z00_1380 = BgL_g4895z00_1378;
				BgL_zc3anonymousza34925ze3z83_1381:
					if (PAIRP(BgL_l4893z00_1380))
						{	/* SawMsil/compile.scm 46 */
							BGl_compilezd2classzd2zzmsil_compilez00(BgL_mez00_11,
								CAR(BgL_l4893z00_1380));
							{
								obj_t BgL_l4893z00_2354;

								BgL_l4893z00_2354 = CDR(BgL_l4893z00_1380);
								BgL_l4893z00_1380 = BgL_l4893z00_2354;
								goto BgL_zc3anonymousza34925ze3z83_1381;
							}
						}
					else
						{	/* SawMsil/compile.scm 46 */
							((bool_t) 1);
						}
				}
			}
			return BGl_closezd2namespacezd2zzmsil_outz00(BgL_mez00_11);
		}
	}



/* _msil-compile */
	obj_t BGl__msilzd2compilezd2zzmsil_compilez00(obj_t BgL_envz00_2300,
		obj_t BgL_mez00_2301, obj_t BgL_outz00_2302)
	{
		AN_OBJECT;
		{	/* SawMsil/compile.scm 38 */
			return
				BGl_msilzd2compilezd2zzmsil_compilez00(
				(BgL_dotnetz00_bglt) (BgL_mez00_2301), BgL_outz00_2302);
		}
	}



/* compile-class */
	obj_t BGl_compilezd2classzd2zzmsil_compilez00(BgL_dotnetz00_bglt BgL_mez00_13,
		obj_t BgL_cz00_14)
	{
		AN_OBJECT;
		{	/* SawMsil/compile.scm 53 */
			{	/* SawMsil/compile.scm 57 */
				obj_t BgL_cnamez00_1387;

				obj_t BgL_snamez00_1388;

				BgL_cnamez00_1387 = BGl_unclassz00zzmsil_compilez00(BgL_cz00_14);
				{	/* SawMsil/compile.scm 57 */
					BgL_tclassz00_bglt BgL_arg4931z00_1397;

					BgL_arg4931z00_1397 =
						BGl_getzd2itszd2superz00zzbackend_cplibz00(
						(BgL_typez00_bglt) (BgL_cz00_14));
					BgL_snamez00_1388 =
						BGl_unclassz00zzmsil_compilez00((obj_t) (BgL_arg4931z00_1397));
				}
				BGl_openzd2classzd2zzmsil_outz00(BgL_mez00_13, BgL_cnamez00_1387,
					BgL_snamez00_1388, BTRUE);
				{	/* SawMsil/compile.scm 60 */
					obj_t BgL_g4898z00_1389;

					BgL_g4898z00_1389 =
						BGl_getzd2declaredzd2fieldsz00zzbackend_cplibz00(
						(BgL_typez00_bglt) (BgL_cz00_14));
					{
						obj_t BgL_l4896z00_1391;

						BgL_l4896z00_1391 = BgL_g4898z00_1389;
					BgL_zc3anonymousza34928ze3z83_1392:
						if (PAIRP(BgL_l4896z00_1391))
							{	/* SawMsil/compile.scm 60 */
								{	/* SawMsil/compile.scm 60 */
									obj_t BgL_fz00_1394;

									BgL_fz00_1394 = CAR(BgL_l4896z00_1391);
									BGl_declarezd2fieldzd2zzmsil_outz00(BgL_mez00_13,
										(BgL_slotz00_bglt) (BgL_fz00_1394));
								}
								{
									obj_t BgL_l4896z00_2372;

									BgL_l4896z00_2372 = CDR(BgL_l4896z00_1391);
									BgL_l4896z00_1391 = BgL_l4896z00_2372;
									goto BgL_zc3anonymousza34928ze3z83_1392;
								}
							}
						else
							{	/* SawMsil/compile.scm 60 */
								((bool_t) 1);
							}
					}
				}
				BGl_constructorz00zzmsil_compilez00(BgL_mez00_13, ((long) 0),
					BgL_snamez00_1388);
				return BGl_closezd2classzd2zzmsil_outz00(BgL_mez00_13);
			}
		}
	}



/* unclass */
	obj_t BGl_unclassz00zzmsil_compilez00(obj_t BgL_cz00_1398)
	{
		AN_OBJECT;
		{	/* SawMsil/compile.scm 56 */
			{	/* SawMsil/compile.scm 55 */
				obj_t BgL_namez00_1400;

				{
					BgL_typez00_bglt BgL_auxz00_2376;

					BgL_auxz00_2376 = (BgL_typez00_bglt) (BgL_cz00_1398);
					BgL_namez00_1400 =
						(((BgL_typez00_bglt) CREF(BgL_auxz00_2376))->BgL_namez00);
				}
				return
					c_substring(BgL_namez00_1400, ((long) 6),
					STRING_LENGTH(BgL_namez00_1400));
		}}
	}



/* compile-module */
	obj_t BGl_compilezd2modulezd2zzmsil_compilez00(BgL_dotnetz00_bglt
		BgL_mez00_15)
	{
		AN_OBJECT;
		{	/* SawMsil/compile.scm 67 */
			{	/* SawMsil/compile.scm 69 */
				obj_t BgL_arg4935z00_1405;

				BgL_arg4935z00_1405 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_15))->BgL_qnamez00);
				BGl_openzd2classzd2zzmsil_outz00(BgL_mez00_15, BgL_arg4935z00_1405,
					BGl_string5121z00zzmsil_compilez00, BTRUE);
			}
			{	/* SawMsil/compile.scm 70 */
				obj_t BgL_g4901z00_1406;

				BgL_g4901z00_1406 =
					BGl_getzd2declaredzd2globalzd2variableszd2zzbackend_cplibz00
					(BGl_za2moduleza2z00zzmodule_modulez00);
				{
					obj_t BgL_l4899z00_1408;

					BgL_l4899z00_1408 = BgL_g4901z00_1406;
				BgL_zc3anonymousza34936ze3z83_1409:
					if (PAIRP(BgL_l4899z00_1408))
						{	/* SawMsil/compile.scm 71 */
							{	/* SawMsil/compile.scm 70 */
								obj_t BgL_vz00_1411;

								BgL_vz00_1411 = CAR(BgL_l4899z00_1408);
								BGl_declarezd2globalzd2zzmsil_outz00(BgL_mez00_15,
									(BgL_globalz00_bglt) (BgL_vz00_1411));
							}
							{
								obj_t BgL_l4899z00_2389;

								BgL_l4899z00_2389 = CDR(BgL_l4899z00_1408);
								BgL_l4899z00_1408 = BgL_l4899z00_2389;
								goto BgL_zc3anonymousza34936ze3z83_1409;
							}
						}
					else
						{	/* SawMsil/compile.scm 71 */
							((bool_t) 1);
						}
				}
			}
			{	/* SawMsil/compile.scm 72 */
				bool_t BgL_testz00_2391;

				{	/* SawMsil/compile.scm 72 */
					obj_t BgL_arg4941z00_1416;

					BgL_arg4941z00_1416 = BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
					BgL_testz00_2391 = ((long) CINT(BgL_arg4941z00_1416) > ((long) 0));
				}
				if (BgL_testz00_2391)
					{	/* SawMsil/compile.scm 72 */
						obj_t BgL_arg4940z00_1415;

						BgL_arg4940z00_1415 = BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
						BGl_declarezd2globalzd2zzmsil_outz00(BgL_mez00_15,
							(BgL_globalz00_bglt) (BgL_arg4940z00_1415));
					}
				else
					{	/* SawMsil/compile.scm 72 */
						BFALSE;
					}
			}
			{	/* SawMsil/compile.scm 73 */
				bool_t BgL_testz00_2398;

				{	/* SawMsil/compile.scm 73 */
					obj_t BgL_obj2935z00_2208;

					BgL_obj2935z00_2208 = BGl_za2mainza2z00zzmodule_modulez00;
					BgL_testz00_2398 =
						BGl_iszd2azf3z21zz__objectz00(BgL_obj2935z00_2208,
						BGl_globalz00zzast_varz00);
				}
				if (BgL_testz00_2398)
					{	/* SawMsil/compile.scm 73 */
						BGl_modulezd2mainzd2zzmsil_compilez00(BgL_mez00_15);
					}
				else
					{	/* SawMsil/compile.scm 73 */
						BFALSE;
					}
			}
			BGl_constructorz00zzmsil_compilez00(BgL_mez00_15, ((long) 0),
				BGl_string5121z00zzmsil_compilez00);
			BGl_constructorz00zzmsil_compilez00(BgL_mez00_15, ((long) 2),
				BGl_string5121z00zzmsil_compilez00);
			BGl_constructorz00zzmsil_compilez00(BgL_mez00_15, ((long) 3),
				BGl_string5121z00zzmsil_compilez00);
			BGl_modulezd2funcallzf2applyz20zzmsil_funcallz00(BgL_mez00_15);
			BGl_modulezd2initzd2zzmsil_compilez00(BgL_mez00_15);
			BGl_modulezd2functionszd2zzmsil_compilez00(BgL_mez00_15);
			return BGl_closezd2classzd2zzmsil_outz00(BgL_mez00_15);
		}
	}



/* module-main */
	obj_t BGl_modulezd2mainzd2zzmsil_compilez00(BgL_dotnetz00_bglt BgL_mez00_16)
	{
		AN_OBJECT;
		{	/* SawMsil/compile.scm 83 */
			BGl_openzd2methodzd2zzmsil_outz00(BgL_mez00_16,
				CNST_TABLE_REF(((long) 0)),
				CNST_TABLE_REF(((long) 1)), BGl_string5122z00zzmsil_compilez00,
				CNST_TABLE_REF(((long) 2)));
			BGl_declarezd2entrypointzd2zzmsil_outz00(BgL_mez00_16);
			BGl_declarezd2maxstackzd2zzmsil_outz00(BgL_mez00_16, BINT(((long) 1)));
			BGl_printzd2infozd2zzmsil_outz00(BgL_mez00_16,
				BGl_string5122z00zzmsil_compilez00);
			BGl_libcallz00zzmsil_outz00(BgL_mez00_16, CNST_TABLE_REF(((long) 1)),
				CNST_TABLE_REF(((long) 3)), CNST_TABLE_REF(((long) 4)), BNIL);
			BGl_openzd2tryzd2zzmsil_outz00(BgL_mez00_16);
			BGl_loadzd2parzd2zzmsil_outz00(BgL_mez00_16, (int) (((long) 0)));
			BGl_libcallz00zzmsil_outz00(BgL_mez00_16,
				CNST_TABLE_REF(((long) 5)),
				CNST_TABLE_REF(((long) 6)),
				CNST_TABLE_REF(((long) 7)), CNST_TABLE_REF(((long) 2)));
			{	/* SawMsil/compile.scm 93 */
				obj_t BgL_arg4944z00_1420;

				{	/* SawMsil/compile.scm 93 */
					obj_t BgL_list4945z00_1421;

					BgL_list4945z00_1421 =
						MAKE_PAIR(BGl_za2moduleza2z00zzmodule_modulez00, BNIL);
					BgL_arg4944z00_1420 =
						BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 8)),
						BgL_list4945z00_1421);
				}
				BGl_callzd2globalzd2zzmsil_outz00(BgL_mez00_16,
					(BgL_globalz00_bglt) (BgL_arg4944z00_1420));
			}
			BGl_popz00zzmsil_outz00(BgL_mez00_16);
			BGl_openzd2catchzd2zzmsil_outz00(BgL_mez00_16,
				BGl_string5123z00zzmsil_compilez00, BGl_string5124z00zzmsil_compilez00);
			BGl_libcallz00zzmsil_outz00(BgL_mez00_16, CNST_TABLE_REF(((long) 1)),
				CNST_TABLE_REF(((long) 6)), CNST_TABLE_REF(((long) 9)),
				CNST_TABLE_REF(((long) 10)));
			BGl_closezd2tryzd2zzmsil_outz00(BgL_mez00_16,
				BGl_string5124z00zzmsil_compilez00);
			BGl_returnz00zzmsil_outz00(BgL_mez00_16);
			return BGl_closezd2methodzd2zzmsil_outz00(BgL_mez00_16);
		}
	}



/* constructor */
	obj_t BGl_constructorz00zzmsil_compilez00(BgL_dotnetz00_bglt BgL_mez00_17,
		long BgL_nz00_18, obj_t BgL_superz00_19)
	{
		AN_OBJECT;
		{	/* SawMsil/compile.scm 102 */
			{	/* SawMsil/compile.scm 103 */
				obj_t BgL_lz00_1422;

				{	/* SawMsil/compile.scm 103 */
					obj_t BgL_list4950z00_1430;

					BgL_list4950z00_1430 = MAKE_PAIR(CNST_TABLE_REF(((long) 11)), BNIL);
					BgL_lz00_1422 =
						BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(
						(int) (BgL_nz00_18), BgL_list4950z00_1430);
				}
				BGl_openzd2methodzd2constructorz00zzmsil_outz00(BgL_mez00_17,
					BgL_lz00_1422);
				{	/* SawMsil/compile.scm 105 */
					long BgL_arg4946z00_1423;

					BgL_arg4946z00_1423 = (BgL_nz00_18 + ((long) 1));
					BGl_declarezd2maxstackzd2zzmsil_outz00(BgL_mez00_17,
						BINT(BgL_arg4946z00_1423));
				}
				{
					long BgL_iz00_1425;

					BgL_iz00_1425 = ((long) 0);
				BgL_zc3anonymousza34947ze3z83_1426:
					BGl_loadzd2parzd2zzmsil_outz00(BgL_mez00_17, (int) (BgL_iz00_1425));
					if ((BgL_iz00_1425 == BgL_nz00_18))
						{	/* SawMsil/compile.scm 109 */
							((bool_t) 0);
						}
					else
						{
							long BgL_iz00_2455;

							BgL_iz00_2455 = (BgL_iz00_1425 + ((long) 1));
							BgL_iz00_1425 = BgL_iz00_2455;
							goto BgL_zc3anonymousza34947ze3z83_1426;
						}
				}
				BGl_callzd2superzd2constructorz00zzmsil_outz00(BgL_mez00_17,
					BgL_superz00_19, BgL_lz00_1422);
				BGl_returnz00zzmsil_outz00(BgL_mez00_17);
				return BGl_closezd2methodzd2zzmsil_outz00(BgL_mez00_17);
			}
		}
	}



/* module-init */
	obj_t BGl_modulezd2initzd2zzmsil_compilez00(BgL_dotnetz00_bglt BgL_mez00_20)
	{
		AN_OBJECT;
		{	/* SawMsil/compile.scm 115 */
			BGl_openzd2methodzd2classzd2constructorzd2zzmsil_outz00(BgL_mez00_20);
			BGl_declarezd2maxstackzd2zzmsil_outz00(BgL_mez00_20, BINT(((long) 4)));
			{	/* SawMsil/compile.scm 118 */
				obj_t BgL_arg4951z00_1431;

				{	/* SawMsil/compile.scm 118 */
					obj_t BgL_arg4953z00_1433;

					{	/* SawMsil/compile.scm 118 */
						obj_t BgL_res5117z00_2217;

						{	/* SawMsil/compile.scm 118 */
							obj_t BgL_symbolz00_2215;

							BgL_symbolz00_2215 = BGl_za2moduleza2z00zzmodule_modulez00;
							{	/* SawMsil/compile.scm 118 */
								obj_t BgL_arg2063z00_2216;

								BgL_arg2063z00_2216 = SYMBOL_TO_STRING(BgL_symbolz00_2215);
								BgL_res5117z00_2217 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2063z00_2216);
						}}
						BgL_arg4953z00_1433 = BgL_res5117z00_2217;
					}
					BgL_arg4951z00_1431 =
						string_append(BGl_string5125z00zzmsil_compilez00,
						BgL_arg4953z00_1433);
				}
				BGl_printzd2infozd2zzmsil_outz00(BgL_mez00_20, BgL_arg4951z00_1431);
			}
			{	/* SawMsil/compile.scm 120 */
				obj_t BgL_siza7eza7_1434;

				BgL_siza7eza7_1434 = BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
				if (((long) CINT(BgL_siza7eza7_1434) > ((long) 0)))
					{	/* SawMsil/compile.scm 121 */
						BGl_pushzd2intzd2zzmsil_outz00(BgL_mez00_20, BgL_siza7eza7_1434);
						BGl_newarrayz00zzmsil_outz00(BgL_mez00_20,
							CNST_TABLE_REF(((long) 5)));
						{	/* SawMsil/compile.scm 124 */
							obj_t BgL_arg4955z00_1436;

							BgL_arg4955z00_1436 = BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
							BGl_storezd2globalzd2zzmsil_outz00(BgL_mez00_20,
								(BgL_globalz00_bglt) (BgL_arg4955z00_1436));
					}}
				else
					{	/* SawMsil/compile.scm 121 */
						BFALSE;
					}
			}
			{	/* SawMsil/compile.scm 130 */
				obj_t BgL_g4904z00_1437;

				BgL_g4904z00_1437 =
					BGl_getzd2globalzd2variableszd2tozd2bezd2initializa7edz75zzbackend_cplibz00
					(BGl_za2moduleza2z00zzmodule_modulez00);
				{
					obj_t BgL_l4902z00_1439;

					BgL_l4902z00_1439 = BgL_g4904z00_1437;
				BgL_zc3anonymousza34956ze3z83_1440:
					if (PAIRP(BgL_l4902z00_1439))
						{	/* SawMsil/compile.scm 131 */
							{	/* SawMsil/compile.scm 130 */
								obj_t BgL_vz00_1442;

								BgL_vz00_1442 = CAR(BgL_l4902z00_1439);
								{	/* SawMsil/compile.scm 130 */
									BgL_valuez00_bglt BgL_arg4958z00_1443;

									{
										BgL_variablez00_bglt BgL_auxz00_2481;

										BgL_auxz00_2481 = (BgL_variablez00_bglt) (BgL_vz00_1442);
										BgL_arg4958z00_1443 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_2481))->
											BgL_valuez00);
									}
									BGl_modulezd2initzd2cnstz00zzmsil_compilez00(BgL_mez00_20,
										BgL_vz00_1442, BgL_arg4958z00_1443);
								}
							}
							{
								obj_t BgL_l4902z00_2485;

								BgL_l4902z00_2485 = CDR(BgL_l4902z00_1439);
								BgL_l4902z00_1439 = BgL_l4902z00_2485;
								goto BgL_zc3anonymousza34956ze3z83_1440;
							}
						}
					else
						{	/* SawMsil/compile.scm 131 */
							((bool_t) 1);
						}
				}
			}
			BGl_returnz00zzmsil_outz00(BgL_mez00_20);
			return BGl_closezd2methodzd2zzmsil_outz00(BgL_mez00_20);
		}
	}



/* key-opt? */
	bool_t BGl_keyzd2optzf3z21zzmsil_compilez00(obj_t BgL_vz00_21)
	{
		AN_OBJECT;
		{	/* SawMsil/compile.scm 135 */
			{	/* SawMsil/compile.scm 136 */
				BgL_globalz00_bglt BgL_vz00_1446;

				BgL_vz00_1446 =
					BGl_globalzd2entryzd2zzbackend_cplibz00(
					(BgL_globalz00_bglt) (BgL_vz00_21));
				{	/* SawMsil/compile.scm 137 */
					BgL_valuez00_bglt BgL_valz00_1447;

					{
						BgL_variablez00_bglt BgL_auxz00_2491;

						BgL_auxz00_2491 = (BgL_variablez00_bglt) (BgL_vz00_1446);
						BgL_valz00_1447 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_2491))->BgL_valuez00);
					}
					{	/* SawMsil/compile.scm 138 */
						bool_t BgL_testz00_2494;

						{	/* SawMsil/compile.scm 138 */
							obj_t BgL_obj3137z00_2225;

							BgL_obj3137z00_2225 = (obj_t) (BgL_valz00_1447);
							BgL_testz00_2494 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj3137z00_2225,
								BGl_sfunz00zzast_varz00);
						}
						if (BgL_testz00_2494)
							{	/* SawMsil/compile.scm 139 */
								obj_t BgL_cloz00_1449;

								{
									BgL_sfunz00_bglt BgL_auxz00_2497;

									BgL_auxz00_2497 = (BgL_sfunz00_bglt) (BgL_valz00_1447);
									BgL_cloz00_1449 =
										(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2497))->
										BgL_thezd2closurezd2globalz00);
								}
								{	/* SawMsil/compile.scm 140 */
									bool_t BgL_oz00_1450;

									bool_t BgL_kz00_1451;

									BgL_oz00_1450 =
										BGl_globalzd2optionalzf3z21zzast_varz00(BgL_cloz00_1449);
									BgL_kz00_1451 =
										BGl_globalzd2keyzf3z21zzast_varz00(BgL_cloz00_1449);
									if (BgL_oz00_1450)
										{	/* SawMsil/compile.scm 141 */
											return BgL_oz00_1450;
										}
									else
										{	/* SawMsil/compile.scm 141 */
											return BgL_kz00_1451;
										}
								}
							}
						else
							{	/* SawMsil/compile.scm 138 */
								return ((bool_t) 0);
							}
					}
				}
			}
		}
	}



/* module-init-cnst */
	obj_t BGl_modulezd2initzd2cnstz00zzmsil_compilez00(BgL_dotnetz00_bglt
		BgL_mez00_22, obj_t BgL_varz00_23, BgL_valuez00_bglt BgL_valz00_24)
	{
		AN_OBJECT;
		{	/* SawMsil/compile.scm 143 */
			{	/* SawMsil/compile.scm 145 */
				obj_t BgL_casezd2valuezd2_1454;

				{
					BgL_scnstz00_bglt BgL_auxz00_2503;

					BgL_auxz00_2503 = (BgL_scnstz00_bglt) (BgL_valz00_24);
					BgL_casezd2valuezd2_1454 =
						(((BgL_scnstz00_bglt) CREF(BgL_auxz00_2503))->BgL_classz00);
				}
				if ((BgL_casezd2valuezd2_1454 == CNST_TABLE_REF(((long) 12))))
					{	/* SawMsil/compile.scm 145 */
						{	/* SawMsil/compile.scm 147 */
							obj_t BgL_arg4962z00_1456;

							{
								BgL_scnstz00_bglt BgL_auxz00_2509;

								BgL_auxz00_2509 = (BgL_scnstz00_bglt) (BgL_valz00_24);
								BgL_arg4962z00_1456 =
									(((BgL_scnstz00_bglt) CREF(BgL_auxz00_2509))->BgL_nodez00);
							}
							BGl_pushzd2stringzd2zzmsil_outz00(BgL_mez00_22,
								BgL_arg4962z00_1456);
						}
						BGl_libcallz00zzmsil_outz00(BgL_mez00_22,
							CNST_TABLE_REF(((long) 13)),
							CNST_TABLE_REF(((long) 6)),
							CNST_TABLE_REF(((long) 14)), CNST_TABLE_REF(((long) 15)));
					}
				else
					{	/* SawMsil/compile.scm 145 */
						if ((BgL_casezd2valuezd2_1454 == CNST_TABLE_REF(((long) 16))))
							{	/* SawMsil/compile.scm 145 */
								{	/* SawMsil/compile.scm 150 */
									obj_t BgL_arg4964z00_1458;

									obj_t BgL_arg4965z00_1459;

									{
										BgL_scnstz00_bglt BgL_auxz00_2521;

										BgL_auxz00_2521 = (BgL_scnstz00_bglt) (BgL_valz00_24);
										BgL_arg4964z00_1458 =
											(((BgL_scnstz00_bglt) CREF(BgL_auxz00_2521))->
											BgL_nodez00);
									}
									BgL_arg4965z00_1459 = CNST_TABLE_REF(((long) 17));
									BGl_pushzd2numzd2zzmsil_outz00(BgL_mez00_22,
										BgL_arg4964z00_1458, BgL_arg4965z00_1459);
								}
								BGl_newobjz00zzmsil_outz00(BgL_mez00_22,
									BGl_string5126z00zzmsil_compilez00,
									CNST_TABLE_REF(((long) 18)));
							}
						else
							{	/* SawMsil/compile.scm 145 */
								if ((BgL_casezd2valuezd2_1454 == CNST_TABLE_REF(((long) 19))))
									{	/* SawMsil/compile.scm 145 */
										{	/* SawMsil/compile.scm 153 */
											obj_t BgL_arg4967z00_1461;

											obj_t BgL_arg4968z00_1462;

											{
												BgL_scnstz00_bglt BgL_auxz00_2531;

												BgL_auxz00_2531 = (BgL_scnstz00_bglt) (BgL_valz00_24);
												BgL_arg4967z00_1461 =
													(((BgL_scnstz00_bglt) CREF(BgL_auxz00_2531))->
													BgL_nodez00);
											}
											BgL_arg4968z00_1462 = CNST_TABLE_REF(((long) 20));
											BGl_pushzd2numzd2zzmsil_outz00(BgL_mez00_22,
												BgL_arg4967z00_1461, BgL_arg4968z00_1462);
										}
										BGl_newobjz00zzmsil_outz00(BgL_mez00_22,
											BGl_string5127z00zzmsil_compilez00,
											CNST_TABLE_REF(((long) 21)));
									}
								else
									{	/* SawMsil/compile.scm 145 */
										if (
											(BgL_casezd2valuezd2_1454 == CNST_TABLE_REF(((long) 22))))
											{	/* SawMsil/compile.scm 145 */
												{	/* SawMsil/compile.scm 156 */
													obj_t BgL_arg4970z00_1464;

													obj_t BgL_arg4971z00_1465;

													{
														BgL_scnstz00_bglt BgL_auxz00_2541;

														BgL_auxz00_2541 =
															(BgL_scnstz00_bglt) (BgL_valz00_24);
														BgL_arg4970z00_1464 =
															(((BgL_scnstz00_bglt) CREF(BgL_auxz00_2541))->
															BgL_nodez00);
													}
													BgL_arg4971z00_1465 = CNST_TABLE_REF(((long) 23));
													BGl_pushzd2numzd2zzmsil_outz00(BgL_mez00_22,
														BgL_arg4970z00_1464, BgL_arg4971z00_1465);
												}
												BGl_newobjz00zzmsil_outz00(BgL_mez00_22,
													BGl_string5128z00zzmsil_compilez00,
													CNST_TABLE_REF(((long) 24)));
											}
										else
											{	/* SawMsil/compile.scm 145 */
												if (
													(BgL_casezd2valuezd2_1454 ==
														CNST_TABLE_REF(((long) 25))))
													{	/* SawMsil/compile.scm 159 */
														obj_t BgL_actualsz00_1467;

														{	/* SawMsil/compile.scm 159 */
															BgL_appz00_bglt BgL_obj1785z00_2243;

															{	/* SawMsil/compile.scm 159 */
																BgL_scnstz00_bglt BgL_obj3212z00_2242;

																BgL_obj3212z00_2242 =
																	(BgL_scnstz00_bglt) (BgL_valz00_24);
																BgL_obj1785z00_2243 =
																	(BgL_appz00_bglt) (
																	(((BgL_scnstz00_bglt)
																			CREF(BgL_obj3212z00_2242))->BgL_nodez00));
															}
															BgL_actualsz00_1467 =
																(((BgL_appz00_bglt) CREF(BgL_obj1785z00_2243))->
																BgL_argsz00);
														}
														{	/* SawMsil/compile.scm 159 */
															obj_t BgL_arityz00_1468;

															{	/* SawMsil/compile.scm 160 */
																obj_t BgL_arg4978z00_1474;

																{	/* SawMsil/compile.scm 160 */
																	obj_t BgL_pairz00_2244;

																	BgL_pairz00_2244 = BgL_actualsz00_1467;
																	BgL_arg4978z00_1474 =
																		CAR(CDR(BgL_pairz00_2244));
																}
																BgL_arityz00_1468 =
																	BGl_getzd2nodezd2atomzd2valuezd2zzcnst_nodez00
																	((BgL_nodez00_bglt) (BgL_arg4978z00_1474));
															}
															{	/* SawMsil/compile.scm 160 */
																int BgL_indexz00_1469;

																{	/* SawMsil/compile.scm 161 */
																	BgL_indexedz00_bglt BgL_obj4832z00_2248;

																	BgL_obj4832z00_2248 =
																		(BgL_indexedz00_bglt) (BgL_varz00_23);
																	{
																		obj_t BgL_auxz00_2560;

																		{	/* SawMsil/compile.scm 161 */
																			BgL_objectz00_bglt BgL_auxz00_2561;

																			BgL_auxz00_2561 =
																				(BgL_objectz00_bglt)
																				(BgL_obj4832z00_2248);
																			BgL_auxz00_2560 =
																				BGL_OBJECT_WIDENING(BgL_auxz00_2561);
																		}
																		BgL_indexz00_1469 =
																			(((BgL_indexedz00_bglt)
																				CREF(BgL_auxz00_2560))->BgL_indexz00);
																}}
																{	/* SawMsil/compile.scm 161 */

																	BGl_pushzd2intzd2zzmsil_outz00(BgL_mez00_22,
																		BINT(BgL_indexz00_1469));
																	{	/* SawMsil/compile.scm 163 */
																		obj_t BgL_arg4973z00_1470;

																		if (BGl_keyzd2optzf3z21zzmsil_compilez00
																			(BgL_varz00_23))
																			{	/* SawMsil/compile.scm 163 */
																				BgL_arg4973z00_1470 = BINT(((long) -1));
																			}
																		else
																			{	/* SawMsil/compile.scm 163 */
																				BgL_arg4973z00_1470 =
																					BGl_globalzd2arityzd2zzbackend_cplibz00
																					((BgL_globalz00_bglt)
																					(BgL_varz00_23));
																			}
																		BGl_pushzd2intzd2zzmsil_outz00(BgL_mez00_22,
																			BgL_arg4973z00_1470);
																	}
																	{	/* SawMsil/compile.scm 165 */
																		obj_t BgL_arg4975z00_1472;

																		obj_t BgL_arg4977z00_1473;

																		{
																			BgL_backendz00_bglt BgL_auxz00_2573;

																			BgL_auxz00_2573 =
																				(BgL_backendz00_bglt) (BgL_mez00_22);
																			BgL_arg4975z00_1472 =
																				(((BgL_backendz00_bglt)
																					CREF(BgL_auxz00_2573))->BgL_namez00);
																		}
																		BgL_arg4977z00_1473 =
																			CNST_TABLE_REF(((long) 26));
																		BGl_newobjz00zzmsil_outz00(BgL_mez00_22,
																			BgL_arg4975z00_1472, BgL_arg4977z00_1473);
													}}}}}
												else
													{	/* SawMsil/compile.scm 145 */
														if (
															(BgL_casezd2valuezd2_1454 ==
																CNST_TABLE_REF(((long) 27))))
															{	/* SawMsil/compile.scm 167 */
																obj_t BgL_actualsz00_1477;

																{	/* SawMsil/compile.scm 167 */
																	BgL_appz00_bglt BgL_obj1785z00_2253;

																	{	/* SawMsil/compile.scm 167 */
																		BgL_scnstz00_bglt BgL_obj3212z00_2252;

																		BgL_obj3212z00_2252 =
																			(BgL_scnstz00_bglt) (BgL_valz00_24);
																		BgL_obj1785z00_2253 =
																			(BgL_appz00_bglt) (
																			(((BgL_scnstz00_bglt)
																					CREF(BgL_obj3212z00_2252))->
																				BgL_nodez00));
																	}
																	BgL_actualsz00_1477 =
																		(((BgL_appz00_bglt)
																			CREF(BgL_obj1785z00_2253))->BgL_argsz00);
																}
																{	/* SawMsil/compile.scm 167 */
																	obj_t BgL_arityz00_1478;

																	{	/* SawMsil/compile.scm 168 */
																		obj_t BgL_arg4985z00_1484;

																		{	/* SawMsil/compile.scm 168 */
																			obj_t BgL_pairz00_2254;

																			BgL_pairz00_2254 = BgL_actualsz00_1477;
																			BgL_arg4985z00_1484 =
																				CAR(CDR(BgL_pairz00_2254));
																		}
																		BgL_arityz00_1478 =
																			BGl_getzd2nodezd2atomzd2valuezd2zzcnst_nodez00
																			((BgL_nodez00_bglt)
																			(BgL_arg4985z00_1484));
																	}
																	{	/* SawMsil/compile.scm 168 */
																		int BgL_indexz00_1479;

																		{	/* SawMsil/compile.scm 169 */
																			BgL_indexedz00_bglt BgL_obj4832z00_2258;

																			BgL_obj4832z00_2258 =
																				(BgL_indexedz00_bglt) (BgL_varz00_23);
																			{
																				obj_t BgL_auxz00_2590;

																				{	/* SawMsil/compile.scm 169 */
																					BgL_objectz00_bglt BgL_auxz00_2591;

																					BgL_auxz00_2591 =
																						(BgL_objectz00_bglt)
																						(BgL_obj4832z00_2258);
																					BgL_auxz00_2590 =
																						BGL_OBJECT_WIDENING
																						(BgL_auxz00_2591);
																				}
																				BgL_indexz00_1479 =
																					(((BgL_indexedz00_bglt)
																						CREF(BgL_auxz00_2590))->
																					BgL_indexz00);
																		}}
																		{	/* SawMsil/compile.scm 169 */

																			BGl_pushzd2intzd2zzmsil_outz00
																				(BgL_mez00_22, BINT(BgL_indexz00_1479));
																			{	/* SawMsil/compile.scm 171 */
																				obj_t BgL_arg4981z00_1480;

																				if (BGl_keyzd2optzf3z21zzmsil_compilez00
																					(BgL_varz00_23))
																					{	/* SawMsil/compile.scm 171 */
																						BgL_arg4981z00_1480 =
																							BINT(((long) -1));
																					}
																				else
																					{	/* SawMsil/compile.scm 171 */
																						BgL_arg4981z00_1480 =
																							BGl_globalzd2arityzd2zzbackend_cplibz00
																							((BgL_globalz00_bglt)
																							(BgL_varz00_23));
																					}
																				BGl_pushzd2intzd2zzmsil_outz00
																					(BgL_mez00_22, BgL_arg4981z00_1480);
																			}
																			BGl_pushzd2intzd2zzmsil_outz00
																				(BgL_mez00_22, BINT(((long) 3)));
																			{	/* SawMsil/compile.scm 174 */
																				obj_t BgL_arg4983z00_1482;

																				obj_t BgL_arg4984z00_1483;

																				{
																					BgL_backendz00_bglt BgL_auxz00_2605;

																					BgL_auxz00_2605 =
																						(BgL_backendz00_bglt)
																						(BgL_mez00_22);
																					BgL_arg4983z00_1482 =
																						(((BgL_backendz00_bglt)
																							CREF(BgL_auxz00_2605))->
																						BgL_namez00);
																				}
																				BgL_arg4984z00_1483 =
																					CNST_TABLE_REF(((long) 28));
																				BGl_newobjz00zzmsil_outz00(BgL_mez00_22,
																					BgL_arg4983z00_1482,
																					BgL_arg4984z00_1483);
															}}}}}
														else
															{	/* SawMsil/compile.scm 145 */
																if (
																	(BgL_casezd2valuezd2_1454 ==
																		CNST_TABLE_REF(((long) 29))))
																	{	/* SawMsil/compile.scm 176 */
																		obj_t BgL_vecz00_1487;

																		{	/* SawMsil/compile.scm 176 */
																			obj_t BgL_sz00_2264;

																			{
																				BgL_scnstz00_bglt BgL_auxz00_2613;

																				BgL_auxz00_2613 =
																					(BgL_scnstz00_bglt) (BgL_valz00_24);
																				BgL_sz00_2264 =
																					(((BgL_scnstz00_bglt)
																						CREF(BgL_auxz00_2613))->
																					BgL_nodez00);
																			}
																			BgL_vecz00_1487 =
																				STRUCT_REF(BgL_sz00_2264,
																				(int) (((long) 1)));
																		}
																		{	/* SawMsil/compile.scm 176 */
																			BgL_typez00_bglt BgL_typez00_1488;

																			{	/* SawMsil/compile.scm 177 */
																				BgL_tvecz00_bglt BgL_obj3618z00_2270;

																				{	/* SawMsil/compile.scm 177 */
																					obj_t BgL_auxz00_2618;

																					{	/* SawMsil/compile.scm 177 */
																						obj_t BgL_sz00_2268;

																						{
																							BgL_scnstz00_bglt BgL_auxz00_2619;

																							BgL_auxz00_2619 =
																								(BgL_scnstz00_bglt)
																								(BgL_valz00_24);
																							BgL_sz00_2268 =
																								(((BgL_scnstz00_bglt)
																									CREF(BgL_auxz00_2619))->
																								BgL_nodez00);
																						}
																						BgL_auxz00_2618 =
																							STRUCT_REF(BgL_sz00_2268,
																							(int) (((long) 0)));
																					}
																					BgL_obj3618z00_2270 =
																						(BgL_tvecz00_bglt)
																						(BgL_auxz00_2618);
																				}
																				{
																					obj_t BgL_auxz00_2625;

																					{	/* SawMsil/compile.scm 177 */
																						BgL_objectz00_bglt BgL_auxz00_2626;

																						BgL_auxz00_2626 =
																							(BgL_objectz00_bglt)
																							(BgL_obj3618z00_2270);
																						BgL_auxz00_2625 =
																							BGL_OBJECT_WIDENING
																							(BgL_auxz00_2626);
																					}
																					BgL_typez00_1488 =
																						(((BgL_tvecz00_bglt)
																							CREF(BgL_auxz00_2625))->
																						BgL_itemzd2typezd2);
																			}}
																			{	/* SawMsil/compile.scm 177 */
																				obj_t BgL_idz00_1489;

																				BgL_idz00_1489 =
																					(((BgL_typez00_bglt)
																						CREF(BgL_typez00_1488))->BgL_idz00);
																				{	/* SawMsil/compile.scm 178 */
																					int BgL_nz00_1490;

																					BgL_nz00_1490 =
																						VECTOR_LENGTH(BgL_vecz00_1487);
																					{	/* SawMsil/compile.scm 179 */

																						BGl_pushzd2intzd2zzmsil_outz00
																							(BgL_mez00_22,
																							BINT(BgL_nz00_1490));
																						BGl_newarrayz00zzmsil_outz00
																							(BgL_mez00_22,
																							(obj_t) (BgL_typez00_1488));
																						{
																							long BgL_iz00_1492;

																							{	/* SawMsil/compile.scm 182 */
																								bool_t BgL_auxz00_2636;

																								BgL_iz00_1492 = ((long) 0);
																							BgL_zc3anonymousza34990ze3z83_1493:
																								if (
																									(BgL_iz00_1492 ==
																										(long) (BgL_nz00_1490)))
																									{	/* SawMsil/compile.scm 183 */
																										BgL_auxz00_2636 =
																											((bool_t) 0);
																									}
																								else
																									{	/* SawMsil/compile.scm 183 */
																										BGl_dupz00zzmsil_outz00
																											(BgL_mez00_22);
																										BGl_pushzd2intzd2zzmsil_outz00
																											(BgL_mez00_22,
																											BINT(BgL_iz00_1492));
																										{	/* SawMsil/compile.scm 187 */
																											bool_t BgL_testz00_2643;

																											{	/* SawMsil/compile.scm 187 */
																												bool_t
																													BgL__ortest_4885z00_1499;
																												BgL__ortest_4885z00_1499
																													=
																													(BgL_idz00_1489 ==
																													CNST_TABLE_REF(((long)
																															30)));
																												if (BgL__ortest_4885z00_1499)
																													{	/* SawMsil/compile.scm 187 */
																														BgL_testz00_2643 =
																															BgL__ortest_4885z00_1499;
																													}
																												else
																													{	/* SawMsil/compile.scm 187 */
																														bool_t
																															BgL__ortest_4886z00_1500;
																														BgL__ortest_4886z00_1500
																															=
																															(BgL_idz00_1489 ==
																															CNST_TABLE_REF((
																																	(long) 31)));
																														if (BgL__ortest_4886z00_1500)
																															{	/* SawMsil/compile.scm 187 */
																																BgL_testz00_2643
																																	=
																																	BgL__ortest_4886z00_1500;
																															}
																														else
																															{	/* SawMsil/compile.scm 187 */
																																bool_t
																																	BgL__ortest_4887z00_1501;
																																BgL__ortest_4887z00_1501
																																	=
																																	(BgL_idz00_1489
																																	==
																																	CNST_TABLE_REF
																																	(((long)
																																			32)));
																																if (BgL__ortest_4887z00_1501)
																																	{	/* SawMsil/compile.scm 187 */
																																		BgL_testz00_2643
																																			=
																																			BgL__ortest_4887z00_1501;
																																	}
																																else
																																	{	/* SawMsil/compile.scm 187 */
																																		bool_t
																																			BgL__ortest_4888z00_1502;
																																		BgL__ortest_4888z00_1502
																																			=
																																			(BgL_idz00_1489
																																			==
																																			CNST_TABLE_REF
																																			(((long)
																																					33)));
																																		if (BgL__ortest_4888z00_1502)
																																			{	/* SawMsil/compile.scm 187 */
																																				BgL_testz00_2643
																																					=
																																					BgL__ortest_4888z00_1502;
																																			}
																																		else
																																			{	/* SawMsil/compile.scm 187 */
																																				bool_t
																																					BgL__ortest_4889z00_1503;
																																				BgL__ortest_4889z00_1503
																																					=
																																					(BgL_idz00_1489
																																					==
																																					CNST_TABLE_REF
																																					(((long) 34)));
																																				if (BgL__ortest_4889z00_1503)
																																					{	/* SawMsil/compile.scm 187 */
																																						BgL_testz00_2643
																																							=
																																							BgL__ortest_4889z00_1503;
																																					}
																																				else
																																					{	/* SawMsil/compile.scm 187 */
																																						bool_t
																																							BgL__ortest_4890z00_1504;
																																						BgL__ortest_4890z00_1504
																																							=
																																							(BgL_idz00_1489
																																							==
																																							CNST_TABLE_REF
																																							(((long) 11)));
																																						if (BgL__ortest_4890z00_1504)
																																							{	/* SawMsil/compile.scm 187 */
																																								BgL_testz00_2643
																																									=
																																									BgL__ortest_4890z00_1504;
																																							}
																																						else
																																							{	/* SawMsil/compile.scm 187 */
																																								bool_t
																																									BgL__ortest_4891z00_1505;
																																								BgL__ortest_4891z00_1505
																																									=
																																									(BgL_idz00_1489
																																									==
																																									CNST_TABLE_REF
																																									(((long) 35)));
																																								if (BgL__ortest_4891z00_1505)
																																									{	/* SawMsil/compile.scm 187 */
																																										BgL_testz00_2643
																																											=
																																											BgL__ortest_4891z00_1505;
																																									}
																																								else
																																									{	/* SawMsil/compile.scm 187 */
																																										bool_t
																																											BgL__ortest_4892z00_1506;
																																										BgL__ortest_4892z00_1506
																																											=
																																											(BgL_idz00_1489
																																											==
																																											CNST_TABLE_REF
																																											(((long) 36)));
																																										if (BgL__ortest_4892z00_1506)
																																											{	/* SawMsil/compile.scm 187 */
																																												BgL_testz00_2643
																																													=
																																													BgL__ortest_4892z00_1506;
																																											}
																																										else
																																											{	/* SawMsil/compile.scm 187 */
																																												BgL_testz00_2643
																																													=
																																													(BgL_idz00_1489
																																													==
																																													CNST_TABLE_REF
																																													(((long) 17)));
																											}}}}}}}}}
																											if (BgL_testz00_2643)
																												{	/* SawMsil/compile.scm 187 */
																													BGl_pushzd2numzd2zzmsil_outz00
																														(BgL_mez00_22,
																														VECTOR_REF
																														(BgL_vecz00_1487,
																															(int)
																															(BgL_iz00_1492)),
																														BgL_idz00_1489);
																												}
																											else
																												{	/* SawMsil/compile.scm 187 */
																													BGl_pushzd2stringzd2zzmsil_outz00
																														(BgL_mez00_22,
																														VECTOR_REF
																														(BgL_vecz00_1487,
																															(int)
																															(BgL_iz00_1492)));
																													BGl_libcallz00zzmsil_outz00
																														(BgL_mez00_22,
																														CNST_TABLE_REF((
																																(long) 13)),
																														CNST_TABLE_REF((
																																(long) 6)),
																														CNST_TABLE_REF((
																																(long) 14)),
																														CNST_TABLE_REF((
																																(long) 15)));
																										}}
																										BGl_storezd2vectorzd2zzmsil_outz00
																											(BgL_mez00_22,
																											(obj_t)
																											(BgL_typez00_1488));
																										{
																											long BgL_iz00_2683;

																											BgL_iz00_2683 =
																												(BgL_iz00_1492 +
																												((long) 1));
																											BgL_iz00_1492 =
																												BgL_iz00_2683;
																											goto
																												BgL_zc3anonymousza34990ze3z83_1493;
																										}
																									}
																								BBOOL(BgL_auxz00_2636);
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																else
																	{	/* SawMsil/compile.scm 145 */
																		BGl_internalzd2errorzd2zztools_errorz00
																			(BGl_string5129z00zzmsil_compilez00,
																			BGl_string5130z00zzmsil_compilez00,
																			BgL_casezd2valuezd2_1454);
																	}
															}
													}
											}
									}
							}
					}
			}
			return
				BGl_storezd2globalzd2zzmsil_outz00(BgL_mez00_22,
				(BgL_globalz00_bglt) (BgL_varz00_23));
		}
	}



/* module-functions */
	bool_t BGl_modulezd2functionszd2zzmsil_compilez00(BgL_dotnetz00_bglt
		BgL_mez00_25)
	{
		AN_OBJECT;
		{	/* SawMsil/compile.scm 203 */
			{	/* SawMsil/compile.scm 204 */
				obj_t BgL_g4907z00_1515;

				{
					BgL_backendz00_bglt BgL_auxz00_2689;

					BgL_auxz00_2689 = (BgL_backendz00_bglt) (BgL_mez00_25);
					BgL_g4907z00_1515 =
						(((BgL_backendz00_bglt) CREF(BgL_auxz00_2689))->BgL_functionsz00);
				}
				{
					obj_t BgL_l4905z00_1517;

					BgL_l4905z00_1517 = BgL_g4907z00_1515;
				BgL_zc3anonymousza35002ze3z83_1518:
					if (PAIRP(BgL_l4905z00_1517))
						{	/* SawMsil/compile.scm 204 */
							BGl_modulezd2functionzd2zzmsil_compilez00(BgL_mez00_25,
								CAR(BgL_l4905z00_1517));
							{
								obj_t BgL_l4905z00_2696;

								BgL_l4905z00_2696 = CDR(BgL_l4905z00_1517);
								BgL_l4905z00_1517 = BgL_l4905z00_2696;
								goto BgL_zc3anonymousza35002ze3z83_1518;
							}
						}
					else
						{	/* SawMsil/compile.scm 204 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* module-function */
	obj_t BGl_modulezd2functionzd2zzmsil_compilez00(BgL_dotnetz00_bglt
		BgL_mez00_26, obj_t BgL_vz00_27)
	{
		AN_OBJECT;
		{	/* SawMsil/compile.scm 206 */
			BGl_openzd2globalzd2methodz00zzmsil_outz00(BgL_mez00_26,
				(BgL_globalz00_bglt) (BgL_vz00_27));
			{	/* SawMsil/compile.scm 208 */
				obj_t BgL_codez00_1523;

				obj_t BgL_argsz00_1524;

				BgL_codez00_1523 =
					BGl_globalzd2ze3blocksz31zzsaw_woodcutterz00(
					(BgL_backendz00_bglt) (BgL_mez00_26),
					(BgL_globalz00_bglt) (BgL_vz00_27));
				{	/* SawMsil/compile.scm 208 */
					BgL_sfunz00_bglt BgL_obj3062z00_2287;

					{	/* SawMsil/compile.scm 208 */
						BgL_variablez00_bglt BgL_obj2795z00_2286;

						BgL_obj2795z00_2286 = (BgL_variablez00_bglt) (BgL_vz00_27);
						BgL_obj3062z00_2287 =
							(BgL_sfunz00_bglt) (
							(((BgL_variablez00_bglt) CREF(BgL_obj2795z00_2286))->
								BgL_valuez00));
					}
					BgL_argsz00_1524 =
						(((BgL_sfunz00_bglt) CREF(BgL_obj3062z00_2287))->BgL_argsz00);
				}
				{	/* SawMsil/compile.scm 209 */
					obj_t BgL_paramsz00_1525;

					if (NULLP(BgL_argsz00_1524))
						{	/* SawMsil/compile.scm 209 */
							BgL_paramsz00_1525 = BNIL;
						}
					else
						{	/* SawMsil/compile.scm 209 */
							obj_t BgL_head4910z00_1529;

							{	/* SawMsil/compile.scm 209 */
								BgL_rtl_regz00_bglt BgL_arg5013z00_1542;

								{	/* SawMsil/compile.scm 209 */
									obj_t BgL_arg5015z00_1544;

									BgL_arg5015z00_1544 = CAR(BgL_argsz00_1524);
									BgL_arg5013z00_1542 =
										BGl_localzd2ze3regz31zzsaw_node2rtlz00(
										(BgL_localz00_bglt) (BgL_arg5015z00_1544));
								}
								BgL_head4910z00_1529 =
									MAKE_PAIR((obj_t) (BgL_arg5013z00_1542), BNIL);
							}
							{	/* SawMsil/compile.scm 209 */
								obj_t BgL_g4913z00_1530;

								BgL_g4913z00_1530 = CDR(BgL_argsz00_1524);
								{
									obj_t BgL_l4908z00_1532;

									obj_t BgL_tail4911z00_1533;

									BgL_l4908z00_1532 = BgL_g4913z00_1530;
									BgL_tail4911z00_1533 = BgL_head4910z00_1529;
								BgL_zc3anonymousza35007ze3z83_1534:
									if (NULLP(BgL_l4908z00_1532))
										{	/* SawMsil/compile.scm 209 */
											BgL_paramsz00_1525 = BgL_head4910z00_1529;
										}
									else
										{	/* SawMsil/compile.scm 209 */
											obj_t BgL_newtail4912z00_1536;

											{	/* SawMsil/compile.scm 209 */
												BgL_rtl_regz00_bglt BgL_arg5010z00_1538;

												{	/* SawMsil/compile.scm 209 */
													obj_t BgL_arg5012z00_1540;

													BgL_arg5012z00_1540 = CAR(BgL_l4908z00_1532);
													BgL_arg5010z00_1538 =
														BGl_localzd2ze3regz31zzsaw_node2rtlz00(
														(BgL_localz00_bglt) (BgL_arg5012z00_1540));
												}
												BgL_newtail4912z00_1536 =
													MAKE_PAIR((obj_t) (BgL_arg5010z00_1538), BNIL);
											}
											SET_CDR(BgL_tail4911z00_1533, BgL_newtail4912z00_1536);
											{
												obj_t BgL_tail4911z00_2725;

												obj_t BgL_l4908z00_2723;

												BgL_l4908z00_2723 = CDR(BgL_l4908z00_1532);
												BgL_tail4911z00_2725 = BgL_newtail4912z00_1536;
												BgL_tail4911z00_1533 = BgL_tail4911z00_2725;
												BgL_l4908z00_1532 = BgL_l4908z00_2723;
												goto BgL_zc3anonymousza35007ze3z83_1534;
											}
										}
								}
							}
						}
					BGl_buildzd2treezd2zzsaw_exprz00(
						(BgL_backendz00_bglt) (BgL_mez00_26), BgL_paramsz00_1525,
						BgL_codez00_1523);
					BgL_codez00_1523 =
						BGl_registerzd2allocationzd2zzsaw_registerzd2allocationzd2(
						(BgL_backendz00_bglt) (BgL_mez00_26),
						(BgL_globalz00_bglt) (BgL_vz00_27), BgL_paramsz00_1525,
						BgL_codez00_1523);
					{	/* SawMsil/compile.scm 212 */
						int BgL_arg5005z00_1526;

						BgL_arg5005z00_1526 =
							BGl_maxstackz00zzmsil_maxstackz00(BgL_codez00_1523);
						BGl_declarezd2maxstackzd2zzmsil_outz00(BgL_mez00_26,
							BINT(BgL_arg5005z00_1526));
					}
					BGl_modulezd2codezd2zzmsil_codez00(BgL_mez00_26,
						(BgL_globalz00_bglt) (BgL_vz00_27), BgL_paramsz00_1525,
						BgL_codez00_1523);
			}}
			return BGl_closezd2methodzd2zzmsil_outz00(BgL_mez00_26);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmsil_compilez00()
	{
		AN_OBJECT;
		{	/* SawMsil/compile.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmsil_compilez00()
	{
		AN_OBJECT;
		{	/* SawMsil/compile.scm 1 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmsil_compilez00()
	{
		AN_OBJECT;
		{	/* SawMsil/compile.scm 1 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zzcnst_nodez00(((long) 110472871),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zzcnst_allocz00(((long) 355177025),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 2222742),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 143212498),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_bvmz00(((long) 52967775),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_dotnet_classz00(((long) 0),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_libz00(((long) 256265790),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long) 254412896),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 192042637),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(((long) 345795750),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zzsaw_woodcutterz00(((long) 191999361),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zzsaw_exprz00(((long) 159754019),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zzsaw_registerzd2allocationzd2(((long)
					167519689), BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zzmsil_namesz00(((long) 484617828),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zzmsil_outz00(((long) 112026228),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zzmsil_funcallz00(((long) 130083874),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			BGl_modulezd2initializa7ationz75zzmsil_maxstackz00(((long) 279916369),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
			return BGl_modulezd2initializa7ationz75zzmsil_codez00(((long) 446080200),
				BSTRING_TO_STRING(BGl_string5131z00zzmsil_compilez00));
		}
	}

#ifdef __cplusplus
}
#endif
