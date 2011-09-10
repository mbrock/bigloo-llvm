/*===========================================================================*/
/*   (SawJvm/compile.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawJvm/compile.scm)*/
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

	typedef struct BgL_jvmz00_bgl
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
		obj_t BgL_qnamez00;
		obj_t BgL_classesz00;
		obj_t BgL_currentzd2classzd2;
		obj_t BgL_declarationsz00;
		obj_t BgL_fieldsz00;
		obj_t BgL_methodsz00;
		obj_t BgL_currentzd2methodzd2;
		obj_t BgL_codez00;
		obj_t BgL_inlinez00;
	}             *BgL_jvmz00_bglt;

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


	extern obj_t BGl_za2debugzd2moduleza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t
		BGl_saw_jvmzd2compilezd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_openzd2modulezd2zzsaw_jvm_outz00(BgL_jvmz00_bglt);
	extern obj_t BGl_codez12z12zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t);
	extern obj_t BGl_za2jvmzd2catchza2zd2zzengine_paramz00;
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_pushzd2numzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t, obj_t);
	static obj_t BGl_compilezd2classzd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
	static obj_t BGl_cnstzd2initzd2zzsaw_jvm_compilez00();
	extern BgL_tclassz00_bglt
		BGl_getzd2itszd2superz00zzbackend_cplibz00(BgL_typez00_bglt);
	extern obj_t
		BGl_registerzd2allocationzd2zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt, BgL_globalz00_bglt, obj_t, obj_t);
	static obj_t BGl_compilezd2modulezd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_jvm_compilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_codez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_funcallz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_outz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_namesz00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(long,
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
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_za2jvmzd2cinitzd2moduleza2z00zzengine_paramz00;
	static obj_t BGl_toplevelzd2initzd2zzsaw_jvm_compilez00();
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_closezd2classzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_callzd2globalzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt);
	extern obj_t
		BGl_nameszd2initializa7ationz75zzsaw_jvm_namesz00(BgL_jvmz00_bglt);
	static obj_t BGl_modulezd2dlopenzd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt);
	extern obj_t BGl_buildzd2treezd2zzsaw_exprz00(BgL_backendz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_za2mainza2z00zzmodule_modulez00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t
		BGl_getzd2globalzd2variableszd2tozd2bezd2initializa7edz75zzbackend_cplibz00
		(obj_t);
	extern bool_t BGl_globalzd2optionalzf3z21zzast_varz00(obj_t);
	extern obj_t BGl_compilezd2typezd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_declarezd2localszd2zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_modulezd2codezd2zzsaw_jvm_codez00(BgL_jvmz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_jvm_compilez00();
	static obj_t BGl_modulezd2mainzd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt);
	static obj_t BGl_modulezd2initzd2cnstz00zzsaw_jvm_compilez00(BgL_jvmz00_bglt,
		obj_t, BgL_valuez00_bglt);
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_openzd2libzd2methodz00zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		obj_t);
	extern obj_t BGl_compilezd2slotzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_slotz00_bglt);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_jvm_compilez00 = BUNSPEC;
	extern obj_t BGl_closezd2modulezd2zzsaw_jvm_outz00(BgL_jvmz00_bglt);
	static obj_t BGl_genericzd2initzd2zzsaw_jvm_compilez00();
	static obj_t BGl_modulezd2initzd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt);
	static bool_t BGl_keyzd2optzf3z21zzsaw_jvm_compilez00(obj_t);
	static obj_t BGl__saw_jvmzd2compilezd2zzsaw_jvm_compilez00(obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t
		BGl_modulezd2funcallzf2applyz20zzsaw_jvm_funcallz00(BgL_jvmz00_bglt);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_compilez00();
	extern obj_t BGl_getzd2declaredzd2classesz00zzbackend_cplibz00();
	extern obj_t BGl_closezd2methodzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt);
	extern BgL_globalz00_bglt
		BGl_globalzd2entryzd2zzbackend_cplibz00(BgL_globalz00_bglt);
	static bool_t BGl_modulezd2functionszd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt);
	extern obj_t BGl_compilezd2globalzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t
		BGl_getzd2declaredzd2fieldsz00zzbackend_cplibz00(BgL_typez00_bglt);
	extern obj_t BGl_openzd2globalzd2methodz00zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt);
	extern obj_t BGl_globalzd2ze3blocksz31zzsaw_woodcutterz00(BgL_backendz00_bglt,
		BgL_globalz00_bglt);
	static obj_t BGl_constructorz00zzsaw_jvm_compilez00(BgL_jvmz00_bglt);
	extern obj_t BGl_openzd2classzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_typez00_bglt, obj_t);
	extern obj_t BGl_pushzd2intzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t);
	extern obj_t BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
	extern obj_t BGl_declarezd2globalzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt);
	extern BgL_rtl_regz00_bglt
		BGl_localzd2ze3regz31zzsaw_node2rtlz00(BgL_localz00_bglt);
	extern obj_t
		BGl_getzd2declaredzd2globalzd2variableszd2zzbackend_cplibz00(obj_t);
	extern obj_t BGl_globalzd2arityzd2zzbackend_cplibz00(BgL_globalz00_bglt);
	extern obj_t BGl_pushzd2stringzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t);
	extern bool_t BGl_globalzd2keyzf3z21zzast_varz00(obj_t);
	static obj_t BGl_modulezd2functionzd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_compilez00();
	static obj_t __cnst[60];


	   
		 
		DEFINE_STRING(BGl_string5258z00zzsaw_jvm_compilez00,
		BgL_bgl_string5258za700za7za7s5264za7, "emit-cnst", 9);
	      DEFINE_STRING(BGl_string5260z00zzsaw_jvm_compilez00,
		BgL_bgl_string5260za700za7za7s5265za7, "saw_jvm_compile", 15);
	      DEFINE_STRING(BGl_string5259z00zzsaw_jvm_compilez00,
		BgL_bgl_string5259za700za7za7s5266za7, "Unknown cnst class", 18);
	      DEFINE_STRING(BGl_string5261z00zzsaw_jvm_compilez00,
		BgL_bgl_string5261za700za7za7s5267za7,
		"dlopen (aastore) (dastore) (fastore) (lastore) (iastore) (sastore) (castore) (bastore) anewarray newarray float int short char byte boolean stvector (putfield procenv) sgfun (putfield procarity) (putfield procindex) (invokespecial init) (dup) (new me) sfun (invokestatic llong_to_bllong) sllong (invokestatic elong_to_belong) long selong (invokestatic double_to_real) double sreal (invokestatic getbytes) sstring module-initialization (aconst_null) (iconst_0) putstatic (anewarray obj) (putstatic myname) (invokestatic foreign-print) ldc clinit (invokespecial super-init) (aload this) (this) init (invokestatic internalerror) catch (return) (pop) bigloo_main (invokestatic listargv) (aload argv) from (handler from catch catch throwable) (argv) main ",
		750);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_saw_jvmzd2compilezd2envz00zzsaw_jvm_compilez00,
		BgL_bgl__saw_jvmza7d2compi5268za7,
		BGl__saw_jvmzd2compilezd2zzsaw_jvm_compilez00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzsaw_jvm_compilez00(long
		BgL_checksumz00_2356, char *BgL_fromz00_2357)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_jvm_compilez00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_jvm_compilez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzsaw_jvm_compilez00();
					BGl_cnstzd2initzd2zzsaw_jvm_compilez00();
					BGl_importedzd2moduleszd2initz00zzsaw_jvm_compilez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_compilez00()
	{
		AN_OBJECT;
		{	/* SawJvm/compile.scm 1 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_jvm_compile");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_jvm_compile");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"saw_jvm_compile");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_jvm_compile");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"saw_jvm_compile");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_jvm_compilez00()
	{
		AN_OBJECT;
		{	/* SawJvm/compile.scm 1 */
			{	/* SawJvm/compile.scm 1 */
				obj_t BgL_cportz00_2348;

				BgL_cportz00_2348 =
					bgl_open_input_string(BGl_string5261z00zzsaw_jvm_compilez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2349;

					BgL_iz00_2349 = ((long) 59);
				BgL_loopz00_2350:
					if ((BgL_iz00_2349 == ((long) -1)))
						{	/* SawJvm/compile.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawJvm/compile.scm 1 */
							{	/* SawJvm/compile.scm 1 */
								obj_t BgL_arg5263z00_2352;

								{	/* SawJvm/compile.scm 1 */

									{	/* SawJvm/compile.scm 1 */
										obj_t BgL_locationz00_2354;

										BgL_locationz00_2354 = BBOOL(((bool_t) 0));
										{	/* SawJvm/compile.scm 1 */

											BgL_arg5263z00_2352 =
												BGl_readz00zz__readerz00(BgL_cportz00_2348,
												BgL_locationz00_2354);
										}
									}
								}
								{	/* SawJvm/compile.scm 1 */
									int BgL_auxz00_2375;

									BgL_auxz00_2375 = (int) (BgL_iz00_2349);
									CNST_TABLE_SET(BgL_auxz00_2375, BgL_arg5263z00_2352);
							}}
							{	/* SawJvm/compile.scm 1 */
								int BgL_auxz00_2355;

								BgL_auxz00_2355 = (int) ((BgL_iz00_2349 - ((long) 1)));
								{
									long BgL_iz00_2380;

									BgL_iz00_2380 = (long) (BgL_auxz00_2355);
									BgL_iz00_2349 = BgL_iz00_2380;
									goto BgL_loopz00_2350;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_jvm_compilez00()
	{
		AN_OBJECT;
		{	/* SawJvm/compile.scm 1 */
			return BUNSPEC;
		}
	}



/* saw_jvm-compile */
	BGL_EXPORTED_DEF obj_t
		BGl_saw_jvmzd2compilezd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt BgL_mez00_11)
	{
		AN_OBJECT;
		{	/* SawJvm/compile.scm 38 */
			BGl_nameszd2initializa7ationz75zzsaw_jvm_namesz00(BgL_mez00_11);
			{	/* SawJvm/compile.scm 40 */
				obj_t BgL_g5007z00_1404;

				BgL_g5007z00_1404 = BGl_getzd2declaredzd2classesz00zzbackend_cplibz00();
				{
					obj_t BgL_l5005z00_1406;

					BgL_l5005z00_1406 = BgL_g5007z00_1404;
				BgL_zc3anonymousza35035ze3z83_1407:
					if (PAIRP(BgL_l5005z00_1406))
						{	/* SawJvm/compile.scm 40 */
							BGl_compilezd2classzd2zzsaw_jvm_compilez00(BgL_mez00_11,
								CAR(BgL_l5005z00_1406));
							{
								obj_t BgL_l5005z00_2388;

								BgL_l5005z00_2388 = CDR(BgL_l5005z00_1406);
								BgL_l5005z00_1406 = BgL_l5005z00_2388;
								goto BgL_zc3anonymousza35035ze3z83_1407;
							}
						}
					else
						{	/* SawJvm/compile.scm 40 */
							((bool_t) 1);
						}
				}
			}
			return BGl_compilezd2modulezd2zzsaw_jvm_compilez00(BgL_mez00_11);
		}
	}



/* _saw_jvm-compile */
	obj_t BGl__saw_jvmzd2compilezd2zzsaw_jvm_compilez00(obj_t BgL_envz00_2345,
		obj_t BgL_mez00_2346)
	{
		AN_OBJECT;
		{	/* SawJvm/compile.scm 38 */
			return
				BGl_saw_jvmzd2compilezd2zzsaw_jvm_compilez00(
				(BgL_jvmz00_bglt) (BgL_mez00_2346));
		}
	}



/* compile-class */
	obj_t BGl_compilezd2classzd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt BgL_mez00_12,
		obj_t BgL_cz00_13)
	{
		AN_OBJECT;
		{	/* SawJvm/compile.scm 46 */
			{	/* SawJvm/compile.scm 47 */
				BgL_tclassz00_bglt BgL_arg5038z00_1412;

				BgL_arg5038z00_1412 =
					BGl_getzd2itszd2superz00zzbackend_cplibz00(
					(BgL_typez00_bglt) (BgL_cz00_13));
				BGl_openzd2classzd2zzsaw_jvm_outz00(BgL_mez00_12,
					(BgL_typez00_bglt) (BgL_cz00_13), (obj_t) (BgL_arg5038z00_1412));
			}
			{	/* SawJvm/compile.scm 48 */
				obj_t BgL_g5010z00_1413;

				BgL_g5010z00_1413 =
					BGl_getzd2declaredzd2fieldsz00zzbackend_cplibz00(
					(BgL_typez00_bglt) (BgL_cz00_13));
				{
					obj_t BgL_l5008z00_1415;

					BgL_l5008z00_1415 = BgL_g5010z00_1413;
				BgL_zc3anonymousza35039ze3z83_1416:
					if (PAIRP(BgL_l5008z00_1415))
						{	/* SawJvm/compile.scm 48 */
							{	/* SawJvm/compile.scm 48 */
								obj_t BgL_fz00_1418;

								BgL_fz00_1418 = CAR(BgL_l5008z00_1415);
								BGl_compilezd2slotzd2zzsaw_jvm_outz00(BgL_mez00_12,
									(BgL_slotz00_bglt) (BgL_fz00_1418));
							}
							{
								obj_t BgL_l5008z00_2405;

								BgL_l5008z00_2405 = CDR(BgL_l5008z00_1415);
								BgL_l5008z00_1415 = BgL_l5008z00_2405;
								goto BgL_zc3anonymousza35039ze3z83_1416;
							}
						}
					else
						{	/* SawJvm/compile.scm 48 */
							((bool_t) 1);
						}
				}
			}
			BGl_constructorz00zzsaw_jvm_compilez00(BgL_mez00_12);
			return
				BGl_closezd2classzd2zzsaw_jvm_outz00(BgL_mez00_12,
				(BgL_typez00_bglt) (BgL_cz00_13));
		}
	}



/* compile-module */
	obj_t BGl_compilezd2modulezd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt
		BgL_mez00_14)
	{
		AN_OBJECT;
		{	/* SawJvm/compile.scm 55 */
			BGl_openzd2modulezd2zzsaw_jvm_outz00(BgL_mez00_14);
			{	/* SawJvm/compile.scm 57 */
				obj_t BgL_g5013z00_1421;

				BgL_g5013z00_1421 =
					BGl_getzd2declaredzd2globalzd2variableszd2zzbackend_cplibz00
					(BGl_za2moduleza2z00zzmodule_modulez00);
				{
					obj_t BgL_l5011z00_1423;

					BgL_l5011z00_1423 = BgL_g5013z00_1421;
				BgL_zc3anonymousza35042ze3z83_1424:
					if (PAIRP(BgL_l5011z00_1423))
						{	/* SawJvm/compile.scm 58 */
							{	/* SawJvm/compile.scm 57 */
								obj_t BgL_vz00_1426;

								BgL_vz00_1426 = CAR(BgL_l5011z00_1423);
								BGl_compilezd2globalzd2zzsaw_jvm_outz00(BgL_mez00_14,
									(BgL_globalz00_bglt) (BgL_vz00_1426));
							}
							{
								obj_t BgL_l5011z00_2417;

								BgL_l5011z00_2417 = CDR(BgL_l5011z00_1423);
								BgL_l5011z00_1423 = BgL_l5011z00_2417;
								goto BgL_zc3anonymousza35042ze3z83_1424;
							}
						}
					else
						{	/* SawJvm/compile.scm 58 */
							((bool_t) 1);
						}
				}
			}
			{	/* SawJvm/compile.scm 59 */
				bool_t BgL_testz00_2419;

				{	/* SawJvm/compile.scm 59 */
					obj_t BgL_arg5047z00_1431;

					BgL_arg5047z00_1431 = BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
					BgL_testz00_2419 = ((long) CINT(BgL_arg5047z00_1431) > ((long) 0));
				}
				if (BgL_testz00_2419)
					{	/* SawJvm/compile.scm 59 */
						obj_t BgL_arg5046z00_1430;

						BgL_arg5046z00_1430 = BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
						BGl_compilezd2globalzd2zzsaw_jvm_outz00(BgL_mez00_14,
							(BgL_globalz00_bglt) (BgL_arg5046z00_1430));
					}
				else
					{	/* SawJvm/compile.scm 59 */
						BFALSE;
					}
			}
			{	/* SawJvm/compile.scm 60 */
				bool_t BgL_testz00_2426;

				{	/* SawJvm/compile.scm 60 */
					obj_t BgL_obj2935z00_2257;

					BgL_obj2935z00_2257 = BGl_za2mainza2z00zzmodule_modulez00;
					BgL_testz00_2426 =
						BGl_iszd2azf3z21zz__objectz00(BgL_obj2935z00_2257,
						BGl_globalz00zzast_varz00);
				}
				if (BgL_testz00_2426)
					{	/* SawJvm/compile.scm 60 */
						BGl_modulezd2mainzd2zzsaw_jvm_compilez00(BgL_mez00_14);
					}
				else
					{	/* SawJvm/compile.scm 60 */
						BFALSE;
					}
			}
			BGl_constructorz00zzsaw_jvm_compilez00(BgL_mez00_14);
			BGl_modulezd2funcallzf2applyz20zzsaw_jvm_funcallz00(BgL_mez00_14);
			BGl_modulezd2initzd2zzsaw_jvm_compilez00(BgL_mez00_14);
			BGl_modulezd2dlopenzd2zzsaw_jvm_compilez00(BgL_mez00_14);
			BGl_modulezd2functionszd2zzsaw_jvm_compilez00(BgL_mez00_14);
			return BGl_closezd2modulezd2zzsaw_jvm_outz00(BgL_mez00_14);
		}
	}



/* module-main */
	obj_t BGl_modulezd2mainzd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt BgL_mez00_15)
	{
		AN_OBJECT;
		{	/* SawJvm/compile.scm 71 */
			BGl_openzd2libzd2methodz00zzsaw_jvm_outz00(BgL_mez00_15,
				CNST_TABLE_REF(((long) 0)));
			BGl_declarezd2localszd2zzsaw_jvm_outz00(BgL_mez00_15,
				CNST_TABLE_REF(((long) 1)), BNIL);
			if (CBOOL(BGl_za2jvmzd2catchza2zd2zzengine_paramz00))
				{	/* SawJvm/compile.scm 74 */
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_15,
						CNST_TABLE_REF(((long) 2)));
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_15,
						CNST_TABLE_REF(((long) 3)));
				}
			else
				{	/* SawJvm/compile.scm 74 */
					BFALSE;
				}
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_15, CNST_TABLE_REF(((long) 4)));
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_15, CNST_TABLE_REF(((long) 5)));
			{	/* SawJvm/compile.scm 79 */
				obj_t BgL_arg5050z00_1434;

				{	/* SawJvm/compile.scm 79 */
					obj_t BgL_list5051z00_1435;

					BgL_list5051z00_1435 =
						MAKE_PAIR(BGl_za2moduleza2z00zzmodule_modulez00, BNIL);
					BgL_arg5050z00_1434 =
						BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 6)),
						BgL_list5051z00_1435);
				}
				BGl_callzd2globalzd2zzsaw_jvm_outz00(BgL_mez00_15,
					(BgL_globalz00_bglt) (BgL_arg5050z00_1434));
			}
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_15, CNST_TABLE_REF(((long) 7)));
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_15, CNST_TABLE_REF(((long) 8)));
			if (CBOOL(BGl_za2jvmzd2catchza2zd2zzengine_paramz00))
				{	/* SawJvm/compile.scm 82 */
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_15,
						CNST_TABLE_REF(((long) 9)));
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_15,
						CNST_TABLE_REF(((long) 10)));
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_15,
						CNST_TABLE_REF(((long) 8)));
				}
			else
				{	/* SawJvm/compile.scm 82 */
					BFALSE;
				}
			return BGl_closezd2methodzd2zzsaw_jvm_outz00(BgL_mez00_15);
		}
	}



/* constructor */
	obj_t BGl_constructorz00zzsaw_jvm_compilez00(BgL_jvmz00_bglt BgL_mez00_16)
	{
		AN_OBJECT;
		{	/* SawJvm/compile.scm 91 */
			BGl_openzd2libzd2methodz00zzsaw_jvm_outz00(BgL_mez00_16,
				CNST_TABLE_REF(((long) 11)));
			BGl_declarezd2localszd2zzsaw_jvm_outz00(BgL_mez00_16,
				CNST_TABLE_REF(((long) 12)), BNIL);
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_16, CNST_TABLE_REF(((long) 13)));
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_16, CNST_TABLE_REF(((long) 14)));
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_16, CNST_TABLE_REF(((long) 8)));
			return BGl_closezd2methodzd2zzsaw_jvm_outz00(BgL_mez00_16);
		}
	}



/* module-init */
	obj_t BGl_modulezd2initzd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt BgL_mez00_17)
	{
		AN_OBJECT;
		{	/* SawJvm/compile.scm 102 */
			BGl_openzd2libzd2methodz00zzsaw_jvm_outz00(BgL_mez00_17,
				CNST_TABLE_REF(((long) 15)));
			BGl_declarezd2localszd2zzsaw_jvm_outz00(BgL_mez00_17, BNIL, BNIL);
			if (BGl_2ze3ze3zz__r4_numbers_6_5z00
				(BGl_za2debugzd2moduleza2zd2zzengine_paramz00, BINT(((long) 0))))
				{	/* SawJvm/compile.scm 106 */
					{	/* SawJvm/compile.scm 107 */
						obj_t BgL_arg5053z00_1437;

						{	/* SawJvm/compile.scm 107 */
							obj_t BgL_arg5054z00_1438;

							obj_t BgL_arg5055z00_1439;

							BgL_arg5054z00_1438 = CNST_TABLE_REF(((long) 16));
							{	/* SawJvm/compile.scm 107 */
								obj_t BgL_arg5056z00_1440;

								{	/* SawJvm/compile.scm 107 */
									obj_t BgL_res5256z00_2260;

									{	/* SawJvm/compile.scm 107 */
										obj_t BgL_symbolz00_2258;

										BgL_symbolz00_2258 = BGl_za2moduleza2z00zzmodule_modulez00;
										{	/* SawJvm/compile.scm 107 */
											obj_t BgL_arg2063z00_2259;

											BgL_arg2063z00_2259 =
												SYMBOL_TO_STRING(BgL_symbolz00_2258);
											BgL_res5256z00_2260 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_2259);
									}}
									BgL_arg5056z00_1440 = BgL_res5256z00_2260;
								}
								{	/* SawJvm/compile.scm 107 */
									obj_t BgL_list5058z00_1442;

									BgL_list5058z00_1442 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg5055z00_1439 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg5056z00_1440, BgL_list5058z00_1442);
							}}
							BgL_arg5053z00_1437 =
								MAKE_PAIR(BgL_arg5054z00_1438, BgL_arg5055z00_1439);
						}
						BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_17, BgL_arg5053z00_1437);
					}
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_17,
						CNST_TABLE_REF(((long) 17)));
				}
			else
				{	/* SawJvm/compile.scm 106 */
					BFALSE;
				}
			{	/* SawJvm/compile.scm 110 */
				obj_t BgL_arg5059z00_1443;

				{	/* SawJvm/compile.scm 110 */
					obj_t BgL_arg5060z00_1444;

					obj_t BgL_arg5061z00_1445;

					BgL_arg5060z00_1444 = CNST_TABLE_REF(((long) 16));
					{	/* SawJvm/compile.scm 110 */
						obj_t BgL_arg5062z00_1446;

						{	/* SawJvm/compile.scm 110 */
							obj_t BgL_res5257z00_2263;

							{	/* SawJvm/compile.scm 110 */
								obj_t BgL_symbolz00_2261;

								BgL_symbolz00_2261 = BGl_za2moduleza2z00zzmodule_modulez00;
								{	/* SawJvm/compile.scm 110 */
									obj_t BgL_arg2063z00_2262;

									BgL_arg2063z00_2262 = SYMBOL_TO_STRING(BgL_symbolz00_2261);
									BgL_res5257z00_2263 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_2262);
							}}
							BgL_arg5062z00_1446 = BgL_res5257z00_2263;
						}
						{	/* SawJvm/compile.scm 110 */
							obj_t BgL_list5064z00_1448;

							BgL_list5064z00_1448 = MAKE_PAIR(BNIL, BNIL);
							BgL_arg5061z00_1445 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg5062z00_1446,
								BgL_list5064z00_1448);
					}}
					BgL_arg5059z00_1443 =
						MAKE_PAIR(BgL_arg5060z00_1444, BgL_arg5061z00_1445);
				}
				BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_17, BgL_arg5059z00_1443);
			}
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_17, CNST_TABLE_REF(((long) 18)));
			{	/* SawJvm/compile.scm 113 */
				obj_t BgL_siza7eza7_1449;

				BgL_siza7eza7_1449 = BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
				if (((long) CINT(BgL_siza7eza7_1449) > ((long) 0)))
					{	/* SawJvm/compile.scm 114 */
						BGl_pushzd2intzd2zzsaw_jvm_outz00(BgL_mez00_17, BgL_siza7eza7_1449);
						BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_17,
							CNST_TABLE_REF(((long) 19)));
						{	/* SawJvm/compile.scm 117 */
							obj_t BgL_arg5066z00_1451;

							{	/* SawJvm/compile.scm 117 */
								obj_t BgL_arg5067z00_1452;

								obj_t BgL_arg5068z00_1453;

								BgL_arg5067z00_1452 = CNST_TABLE_REF(((long) 20));
								{	/* SawJvm/compile.scm 117 */
									obj_t BgL_arg5069z00_1454;

									{	/* SawJvm/compile.scm 117 */
										obj_t BgL_arg5072z00_1457;

										BgL_arg5072z00_1457 =
											BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
										BgL_arg5069z00_1454 =
											BGl_declarezd2globalzd2zzsaw_jvm_outz00(BgL_mez00_17,
											(BgL_globalz00_bglt) (BgL_arg5072z00_1457));
									}
									{	/* SawJvm/compile.scm 117 */
										obj_t BgL_list5071z00_1456;

										BgL_list5071z00_1456 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg5068z00_1453 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg5069z00_1454, BgL_list5071z00_1456);
								}}
								BgL_arg5066z00_1451 =
									MAKE_PAIR(BgL_arg5067z00_1452, BgL_arg5068z00_1453);
							}
							BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_17, BgL_arg5066z00_1451);
					}}
				else
					{	/* SawJvm/compile.scm 114 */
						BFALSE;
					}
			}
			{	/* SawJvm/compile.scm 119 */
				obj_t BgL_g5016z00_1458;

				BgL_g5016z00_1458 =
					BGl_getzd2globalzd2variableszd2tozd2bezd2initializa7edz75zzbackend_cplibz00
					(BGl_za2moduleza2z00zzmodule_modulez00);
				{
					obj_t BgL_l5014z00_1460;

					BgL_l5014z00_1460 = BgL_g5016z00_1458;
				BgL_zc3anonymousza35073ze3z83_1461:
					if (PAIRP(BgL_l5014z00_1460))
						{	/* SawJvm/compile.scm 120 */
							{	/* SawJvm/compile.scm 119 */
								obj_t BgL_vz00_1463;

								BgL_vz00_1463 = CAR(BgL_l5014z00_1460);
								{	/* SawJvm/compile.scm 119 */
									BgL_valuez00_bglt BgL_arg5075z00_1464;

									{
										BgL_variablez00_bglt BgL_auxz00_2521;

										BgL_auxz00_2521 = (BgL_variablez00_bglt) (BgL_vz00_1463);
										BgL_arg5075z00_1464 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_2521))->
											BgL_valuez00);
									}
									BGl_modulezd2initzd2cnstz00zzsaw_jvm_compilez00(BgL_mez00_17,
										BgL_vz00_1463, BgL_arg5075z00_1464);
								}
							}
							{
								obj_t BgL_l5014z00_2525;

								BgL_l5014z00_2525 = CDR(BgL_l5014z00_1460);
								BgL_l5014z00_1460 = BgL_l5014z00_2525;
								goto BgL_zc3anonymousza35073ze3z83_1461;
							}
						}
					else
						{	/* SawJvm/compile.scm 120 */
							((bool_t) 1);
						}
				}
			}
			if (CBOOL(BGl_za2jvmzd2cinitzd2moduleza2z00zzengine_paramz00))
				{	/* SawJvm/compile.scm 121 */
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_17,
						CNST_TABLE_REF(((long) 21)));
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_17,
						CNST_TABLE_REF(((long) 22)));
					{	/* SawJvm/compile.scm 125 */
						obj_t BgL_arg5077z00_1467;

						{	/* SawJvm/compile.scm 125 */
							obj_t BgL_list5078z00_1468;

							BgL_list5078z00_1468 =
								MAKE_PAIR(BGl_za2moduleza2z00zzmodule_modulez00, BNIL);
							BgL_arg5077z00_1467 =
								BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 23)),
								BgL_list5078z00_1468);
						}
						BGl_callzd2globalzd2zzsaw_jvm_outz00(BgL_mez00_17,
							(BgL_globalz00_bglt) (BgL_arg5077z00_1467));
					}
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_17,
						CNST_TABLE_REF(((long) 7)));
				}
			else
				{	/* SawJvm/compile.scm 121 */
					BFALSE;
				}
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_17, CNST_TABLE_REF(((long) 8)));
			return BGl_closezd2methodzd2zzsaw_jvm_outz00(BgL_mez00_17);
		}
	}



/* key-opt? */
	bool_t BGl_keyzd2optzf3z21zzsaw_jvm_compilez00(obj_t BgL_vz00_18)
	{
		AN_OBJECT;
		{	/* SawJvm/compile.scm 130 */
			{	/* SawJvm/compile.scm 131 */
				BgL_globalz00_bglt BgL_vz00_1469;

				BgL_vz00_1469 =
					BGl_globalzd2entryzd2zzbackend_cplibz00(
					(BgL_globalz00_bglt) (BgL_vz00_18));
				{	/* SawJvm/compile.scm 132 */
					BgL_valuez00_bglt BgL_valz00_1470;

					{
						BgL_variablez00_bglt BgL_auxz00_2545;

						BgL_auxz00_2545 = (BgL_variablez00_bglt) (BgL_vz00_1469);
						BgL_valz00_1470 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_2545))->BgL_valuez00);
					}
					{	/* SawJvm/compile.scm 133 */
						bool_t BgL_testz00_2548;

						{	/* SawJvm/compile.scm 133 */
							obj_t BgL_obj3137z00_2271;

							BgL_obj3137z00_2271 = (obj_t) (BgL_valz00_1470);
							BgL_testz00_2548 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj3137z00_2271,
								BGl_sfunz00zzast_varz00);
						}
						if (BgL_testz00_2548)
							{	/* SawJvm/compile.scm 134 */
								obj_t BgL_cloz00_1472;

								{
									BgL_sfunz00_bglt BgL_auxz00_2551;

									BgL_auxz00_2551 = (BgL_sfunz00_bglt) (BgL_valz00_1470);
									BgL_cloz00_1472 =
										(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2551))->
										BgL_thezd2closurezd2globalz00);
								}
								{	/* SawJvm/compile.scm 135 */
									bool_t BgL_oz00_1473;

									bool_t BgL_kz00_1474;

									BgL_oz00_1473 =
										BGl_globalzd2optionalzf3z21zzast_varz00(BgL_cloz00_1472);
									BgL_kz00_1474 =
										BGl_globalzd2keyzf3z21zzast_varz00(BgL_cloz00_1472);
									if (BgL_oz00_1473)
										{	/* SawJvm/compile.scm 136 */
											return BgL_oz00_1473;
										}
									else
										{	/* SawJvm/compile.scm 136 */
											return BgL_kz00_1474;
										}
								}
							}
						else
							{	/* SawJvm/compile.scm 133 */
								return ((bool_t) 0);
							}
					}
				}
			}
		}
	}



/* module-init-cnst */
	obj_t BGl_modulezd2initzd2cnstz00zzsaw_jvm_compilez00(BgL_jvmz00_bglt
		BgL_mez00_19, obj_t BgL_varz00_20, BgL_valuez00_bglt BgL_valz00_21)
	{
		AN_OBJECT;
		{	/* SawJvm/compile.scm 138 */
			{	/* SawJvm/compile.scm 140 */
				obj_t BgL_casezd2valuezd2_1477;

				{
					BgL_scnstz00_bglt BgL_auxz00_2557;

					BgL_auxz00_2557 = (BgL_scnstz00_bglt) (BgL_valz00_21);
					BgL_casezd2valuezd2_1477 =
						(((BgL_scnstz00_bglt) CREF(BgL_auxz00_2557))->BgL_classz00);
				}
				if ((BgL_casezd2valuezd2_1477 == CNST_TABLE_REF(((long) 24))))
					{	/* SawJvm/compile.scm 140 */
						{	/* SawJvm/compile.scm 142 */
							obj_t BgL_arg5081z00_1479;

							{
								BgL_scnstz00_bglt BgL_auxz00_2563;

								BgL_auxz00_2563 = (BgL_scnstz00_bglt) (BgL_valz00_21);
								BgL_arg5081z00_1479 =
									(((BgL_scnstz00_bglt) CREF(BgL_auxz00_2563))->BgL_nodez00);
							}
							BGl_pushzd2stringzd2zzsaw_jvm_outz00(BgL_mez00_19,
								BgL_arg5081z00_1479);
						}
						BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
							CNST_TABLE_REF(((long) 25)));
					}
				else
					{	/* SawJvm/compile.scm 140 */
						if ((BgL_casezd2valuezd2_1477 == CNST_TABLE_REF(((long) 26))))
							{	/* SawJvm/compile.scm 140 */
								{	/* SawJvm/compile.scm 145 */
									obj_t BgL_arg5083z00_1481;

									obj_t BgL_arg5084z00_1482;

									{
										BgL_scnstz00_bglt BgL_auxz00_2572;

										BgL_auxz00_2572 = (BgL_scnstz00_bglt) (BgL_valz00_21);
										BgL_arg5083z00_1481 =
											(((BgL_scnstz00_bglt) CREF(BgL_auxz00_2572))->
											BgL_nodez00);
									}
									BgL_arg5084z00_1482 = CNST_TABLE_REF(((long) 27));
									BGl_pushzd2numzd2zzsaw_jvm_outz00(BgL_mez00_19,
										BgL_arg5083z00_1481, BgL_arg5084z00_1482);
								}
								BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
									CNST_TABLE_REF(((long) 28)));
							}
						else
							{	/* SawJvm/compile.scm 140 */
								if ((BgL_casezd2valuezd2_1477 == CNST_TABLE_REF(((long) 29))))
									{	/* SawJvm/compile.scm 140 */
										{	/* SawJvm/compile.scm 148 */
											obj_t BgL_arg5086z00_1484;

											obj_t BgL_arg5087z00_1485;

											{
												BgL_scnstz00_bglt BgL_auxz00_2582;

												BgL_auxz00_2582 = (BgL_scnstz00_bglt) (BgL_valz00_21);
												BgL_arg5086z00_1484 =
													(((BgL_scnstz00_bglt) CREF(BgL_auxz00_2582))->
													BgL_nodez00);
											}
											BgL_arg5087z00_1485 = CNST_TABLE_REF(((long) 30));
											BGl_pushzd2numzd2zzsaw_jvm_outz00(BgL_mez00_19,
												BgL_arg5086z00_1484, BgL_arg5087z00_1485);
										}
										BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
											CNST_TABLE_REF(((long) 31)));
									}
								else
									{	/* SawJvm/compile.scm 140 */
										if (
											(BgL_casezd2valuezd2_1477 == CNST_TABLE_REF(((long) 32))))
											{	/* SawJvm/compile.scm 140 */
												{	/* SawJvm/compile.scm 151 */
													obj_t BgL_arg5089z00_1487;

													obj_t BgL_arg5090z00_1488;

													{
														BgL_scnstz00_bglt BgL_auxz00_2592;

														BgL_auxz00_2592 =
															(BgL_scnstz00_bglt) (BgL_valz00_21);
														BgL_arg5089z00_1487 =
															(((BgL_scnstz00_bglt) CREF(BgL_auxz00_2592))->
															BgL_nodez00);
													}
													BgL_arg5090z00_1488 = CNST_TABLE_REF(((long) 30));
													BGl_pushzd2numzd2zzsaw_jvm_outz00(BgL_mez00_19,
														BgL_arg5089z00_1487, BgL_arg5090z00_1488);
												}
												BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
													CNST_TABLE_REF(((long) 33)));
											}
										else
											{	/* SawJvm/compile.scm 140 */
												if (
													(BgL_casezd2valuezd2_1477 ==
														CNST_TABLE_REF(((long) 34))))
													{	/* SawJvm/compile.scm 140 */
														BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
															CNST_TABLE_REF(((long) 35)));
														BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
															CNST_TABLE_REF(((long) 36)));
														BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
															CNST_TABLE_REF(((long) 37)));
														BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
															CNST_TABLE_REF(((long) 36)));
														{	/* SawJvm/compile.scm 158 */
															int BgL_arg5092z00_1490;

															{	/* SawJvm/compile.scm 158 */
																BgL_indexedz00_bglt BgL_obj4932z00_2288;

																BgL_obj4932z00_2288 =
																	(BgL_indexedz00_bglt) (BgL_varz00_20);
																{
																	obj_t BgL_auxz00_2611;

																	{	/* SawJvm/compile.scm 158 */
																		BgL_objectz00_bglt BgL_auxz00_2612;

																		BgL_auxz00_2612 =
																			(BgL_objectz00_bglt)
																			(BgL_obj4932z00_2288);
																		BgL_auxz00_2611 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_2612);
																	}
																	BgL_arg5092z00_1490 =
																		(((BgL_indexedz00_bglt)
																			CREF(BgL_auxz00_2611))->BgL_indexz00);
															}}
															BGl_pushzd2intzd2zzsaw_jvm_outz00(BgL_mez00_19,
																BINT(BgL_arg5092z00_1490));
														}
														BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
															CNST_TABLE_REF(((long) 38)));
														BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
															CNST_TABLE_REF(((long) 36)));
														{	/* SawJvm/compile.scm 161 */
															obj_t BgL_arg5093z00_1491;

															if (BGl_keyzd2optzf3z21zzsaw_jvm_compilez00
																(BgL_varz00_20))
																{	/* SawJvm/compile.scm 161 */
																	BgL_arg5093z00_1491 = BINT(((long) -1));
																}
															else
																{	/* SawJvm/compile.scm 161 */
																	BgL_arg5093z00_1491 =
																		BGl_globalzd2arityzd2zzbackend_cplibz00(
																		(BgL_globalz00_bglt) (BgL_varz00_20));
																}
															BGl_pushzd2intzd2zzsaw_jvm_outz00(BgL_mez00_19,
																BgL_arg5093z00_1491);
														}
														BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
															CNST_TABLE_REF(((long) 39)));
													}
												else
													{	/* SawJvm/compile.scm 140 */
														if (
															(BgL_casezd2valuezd2_1477 ==
																CNST_TABLE_REF(((long) 40))))
															{	/* SawJvm/compile.scm 140 */
																BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
																	CNST_TABLE_REF(((long) 35)));
																BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
																	CNST_TABLE_REF(((long) 36)));
																BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
																	CNST_TABLE_REF(((long) 37)));
																BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
																	CNST_TABLE_REF(((long) 36)));
																{	/* SawJvm/compile.scm 169 */
																	int BgL_arg5096z00_1494;

																	{	/* SawJvm/compile.scm 169 */
																		BgL_indexedz00_bglt BgL_obj4932z00_2291;

																		BgL_obj4932z00_2291 =
																			(BgL_indexedz00_bglt) (BgL_varz00_20);
																		{
																			obj_t BgL_auxz00_2642;

																			{	/* SawJvm/compile.scm 169 */
																				BgL_objectz00_bglt BgL_auxz00_2643;

																				BgL_auxz00_2643 =
																					(BgL_objectz00_bglt)
																					(BgL_obj4932z00_2291);
																				BgL_auxz00_2642 =
																					BGL_OBJECT_WIDENING(BgL_auxz00_2643);
																			}
																			BgL_arg5096z00_1494 =
																				(((BgL_indexedz00_bglt)
																					CREF(BgL_auxz00_2642))->BgL_indexz00);
																	}}
																	BGl_pushzd2intzd2zzsaw_jvm_outz00
																		(BgL_mez00_19, BINT(BgL_arg5096z00_1494));
																}
																BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
																	CNST_TABLE_REF(((long) 38)));
																BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
																	CNST_TABLE_REF(((long) 36)));
																{	/* SawJvm/compile.scm 172 */
																	obj_t BgL_arg5097z00_1495;

																	if (BGl_keyzd2optzf3z21zzsaw_jvm_compilez00
																		(BgL_varz00_20))
																		{	/* SawJvm/compile.scm 172 */
																			BgL_arg5097z00_1495 = BINT(((long) -1));
																		}
																	else
																		{	/* SawJvm/compile.scm 172 */
																			BgL_arg5097z00_1495 =
																				BGl_globalzd2arityzd2zzbackend_cplibz00(
																				(BgL_globalz00_bglt) (BgL_varz00_20));
																		}
																	BGl_pushzd2intzd2zzsaw_jvm_outz00
																		(BgL_mez00_19, BgL_arg5097z00_1495);
																}
																BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
																	CNST_TABLE_REF(((long) 39)));
																BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
																	CNST_TABLE_REF(((long) 36)));
																BGl_pushzd2intzd2zzsaw_jvm_outz00(BgL_mez00_19,
																	BINT(((long) 3)));
																BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
																	CNST_TABLE_REF(((long) 19)));
																BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
																	CNST_TABLE_REF(((long) 41)));
															}
														else
															{	/* SawJvm/compile.scm 140 */
																if (
																	(BgL_casezd2valuezd2_1477 ==
																		CNST_TABLE_REF(((long) 42))))
																	{	/* SawJvm/compile.scm 180 */
																		obj_t BgL_vecz00_1498;

																		{	/* SawJvm/compile.scm 180 */
																			obj_t BgL_sz00_2296;

																			{
																				BgL_scnstz00_bglt BgL_auxz00_2672;

																				BgL_auxz00_2672 =
																					(BgL_scnstz00_bglt) (BgL_valz00_21);
																				BgL_sz00_2296 =
																					(((BgL_scnstz00_bglt)
																						CREF(BgL_auxz00_2672))->
																					BgL_nodez00);
																			}
																			BgL_vecz00_1498 =
																				STRUCT_REF(BgL_sz00_2296,
																				(int) (((long) 1)));
																		}
																		{	/* SawJvm/compile.scm 180 */
																			BgL_typez00_bglt BgL_typez00_1499;

																			{	/* SawJvm/compile.scm 181 */
																				BgL_tvecz00_bglt BgL_obj3618z00_2302;

																				{	/* SawJvm/compile.scm 181 */
																					obj_t BgL_auxz00_2677;

																					{	/* SawJvm/compile.scm 181 */
																						obj_t BgL_sz00_2300;

																						{
																							BgL_scnstz00_bglt BgL_auxz00_2678;

																							BgL_auxz00_2678 =
																								(BgL_scnstz00_bglt)
																								(BgL_valz00_21);
																							BgL_sz00_2300 =
																								(((BgL_scnstz00_bglt)
																									CREF(BgL_auxz00_2678))->
																								BgL_nodez00);
																						}
																						BgL_auxz00_2677 =
																							STRUCT_REF(BgL_sz00_2300,
																							(int) (((long) 0)));
																					}
																					BgL_obj3618z00_2302 =
																						(BgL_tvecz00_bglt)
																						(BgL_auxz00_2677);
																				}
																				{
																					obj_t BgL_auxz00_2684;

																					{	/* SawJvm/compile.scm 181 */
																						BgL_objectz00_bglt BgL_auxz00_2685;

																						BgL_auxz00_2685 =
																							(BgL_objectz00_bglt)
																							(BgL_obj3618z00_2302);
																						BgL_auxz00_2684 =
																							BGL_OBJECT_WIDENING
																							(BgL_auxz00_2685);
																					}
																					BgL_typez00_1499 =
																						(((BgL_tvecz00_bglt)
																							CREF(BgL_auxz00_2684))->
																						BgL_itemzd2typezd2);
																			}}
																			{	/* SawJvm/compile.scm 181 */
																				obj_t BgL_idz00_1500;

																				BgL_idz00_1500 =
																					(((BgL_typez00_bglt)
																						CREF(BgL_typez00_1499))->
																					BgL_namez00);
																				{	/* SawJvm/compile.scm 182 */
																					int BgL_nz00_1501;

																					BgL_nz00_1501 =
																						VECTOR_LENGTH(BgL_vecz00_1498);
																					{	/* SawJvm/compile.scm 183 */

																						BGl_pushzd2intzd2zzsaw_jvm_outz00
																							(BgL_mez00_19,
																							BINT(BgL_nz00_1501));
																						{	/* SawJvm/compile.scm 185 */
																							bool_t BgL_testz00_2693;

																							{	/* SawJvm/compile.scm 185 */
																								bool_t BgL__ortest_4988z00_1516;

																								BgL__ortest_4988z00_1516 =
																									(BgL_idz00_1500 ==
																									CNST_TABLE_REF(((long) 43)));
																								if (BgL__ortest_4988z00_1516)
																									{	/* SawJvm/compile.scm 185 */
																										BgL_testz00_2693 =
																											BgL__ortest_4988z00_1516;
																									}
																								else
																									{	/* SawJvm/compile.scm 185 */
																										bool_t
																											BgL__ortest_4989z00_1517;
																										BgL__ortest_4989z00_1517 =
																											(BgL_idz00_1500 ==
																											CNST_TABLE_REF(((long)
																													44)));
																										if (BgL__ortest_4989z00_1517)
																											{	/* SawJvm/compile.scm 185 */
																												BgL_testz00_2693 =
																													BgL__ortest_4989z00_1517;
																											}
																										else
																											{	/* SawJvm/compile.scm 185 */
																												bool_t
																													BgL__ortest_4990z00_1518;
																												BgL__ortest_4990z00_1518
																													=
																													(BgL_idz00_1500 ==
																													CNST_TABLE_REF(((long)
																															45)));
																												if (BgL__ortest_4990z00_1518)
																													{	/* SawJvm/compile.scm 185 */
																														BgL_testz00_2693 =
																															BgL__ortest_4990z00_1518;
																													}
																												else
																													{	/* SawJvm/compile.scm 185 */
																														bool_t
																															BgL__ortest_4991z00_1519;
																														BgL__ortest_4991z00_1519
																															=
																															(BgL_idz00_1500 ==
																															CNST_TABLE_REF((
																																	(long) 46)));
																														if (BgL__ortest_4991z00_1519)
																															{	/* SawJvm/compile.scm 185 */
																																BgL_testz00_2693
																																	=
																																	BgL__ortest_4991z00_1519;
																															}
																														else
																															{	/* SawJvm/compile.scm 185 */
																																bool_t
																																	BgL__ortest_4992z00_1520;
																																BgL__ortest_4992z00_1520
																																	=
																																	(BgL_idz00_1500
																																	==
																																	CNST_TABLE_REF
																																	(((long)
																																			47)));
																																if (BgL__ortest_4992z00_1520)
																																	{	/* SawJvm/compile.scm 185 */
																																		BgL_testz00_2693
																																			=
																																			BgL__ortest_4992z00_1520;
																																	}
																																else
																																	{	/* SawJvm/compile.scm 185 */
																																		bool_t
																																			BgL__ortest_4993z00_1521;
																																		BgL__ortest_4993z00_1521
																																			=
																																			(BgL_idz00_1500
																																			==
																																			CNST_TABLE_REF
																																			(((long)
																																					30)));
																																		if (BgL__ortest_4993z00_1521)
																																			{	/* SawJvm/compile.scm 185 */
																																				BgL_testz00_2693
																																					=
																																					BgL__ortest_4993z00_1521;
																																			}
																																		else
																																			{	/* SawJvm/compile.scm 185 */
																																				bool_t
																																					BgL__ortest_4994z00_1522;
																																				BgL__ortest_4994z00_1522
																																					=
																																					(BgL_idz00_1500
																																					==
																																					CNST_TABLE_REF
																																					(((long) 48)));
																																				if (BgL__ortest_4994z00_1522)
																																					{	/* SawJvm/compile.scm 185 */
																																						BgL_testz00_2693
																																							=
																																							BgL__ortest_4994z00_1522;
																																					}
																																				else
																																					{	/* SawJvm/compile.scm 185 */
																																						BgL_testz00_2693
																																							=
																																							(BgL_idz00_1500
																																							==
																																							CNST_TABLE_REF
																																							(((long) 27)));
																							}}}}}}}}
																							if (BgL_testz00_2693)
																								{	/* SawJvm/compile.scm 187 */
																									obj_t BgL_arg5101z00_1504;

																									{	/* SawJvm/compile.scm 187 */
																										obj_t BgL_arg5102z00_1505;

																										obj_t BgL_arg5103z00_1506;

																										BgL_arg5102z00_1505 =
																											CNST_TABLE_REF(((long)
																												49));
																										{	/* SawJvm/compile.scm 187 */
																											obj_t BgL_arg5104z00_1507;

																											BgL_arg5104z00_1507 =
																												(((BgL_typez00_bglt)
																													CREF
																													(BgL_typez00_1499))->
																												BgL_namez00);
																											{	/* SawJvm/compile.scm 187 */
																												obj_t
																													BgL_list5106z00_1509;
																												BgL_list5106z00_1509 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg5103z00_1506 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg5104z00_1507,
																													BgL_list5106z00_1509);
																										}}
																										BgL_arg5101z00_1504 =
																											MAKE_PAIR
																											(BgL_arg5102z00_1505,
																											BgL_arg5103z00_1506);
																									}
																									BGl_codez12z12zzsaw_jvm_outz00
																										(BgL_mez00_19,
																										BgL_arg5101z00_1504);
																								}
																							else
																								{	/* SawJvm/compile.scm 189 */
																									obj_t BgL_arg5107z00_1510;

																									{	/* SawJvm/compile.scm 189 */
																										obj_t BgL_arg5108z00_1511;

																										obj_t BgL_arg5109z00_1512;

																										BgL_arg5108z00_1511 =
																											CNST_TABLE_REF(((long)
																												50));
																										{	/* SawJvm/compile.scm 189 */
																											obj_t BgL_arg5110z00_1513;

																											BgL_arg5110z00_1513 =
																												BGl_compilezd2typezd2zzsaw_jvm_outz00
																												(BgL_mez00_19,
																												BgL_typez00_1499);
																											{	/* SawJvm/compile.scm 189 */
																												obj_t
																													BgL_list5112z00_1515;
																												BgL_list5112z00_1515 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg5109z00_1512 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg5110z00_1513,
																													BgL_list5112z00_1515);
																										}}
																										BgL_arg5107z00_1510 =
																											MAKE_PAIR
																											(BgL_arg5108z00_1511,
																											BgL_arg5109z00_1512);
																									}
																									BGl_codez12z12zzsaw_jvm_outz00
																										(BgL_mez00_19,
																										BgL_arg5107z00_1510);
																						}}
																						{
																							long BgL_iz00_1524;

																							{	/* SawJvm/compile.scm 190 */
																								bool_t BgL_auxz00_2729;

																								BgL_iz00_1524 = ((long) 0);
																							BgL_zc3anonymousza35113ze3z83_1525:
																								if (
																									(BgL_iz00_1524 ==
																										(long) (BgL_nz00_1501)))
																									{	/* SawJvm/compile.scm 191 */
																										BgL_auxz00_2729 =
																											((bool_t) 0);
																									}
																								else
																									{	/* SawJvm/compile.scm 191 */
																										BGl_codez12z12zzsaw_jvm_outz00
																											(BgL_mez00_19,
																											CNST_TABLE_REF(((long)
																													36)));
																										BGl_pushzd2intzd2zzsaw_jvm_outz00
																											(BgL_mez00_19,
																											BINT(BgL_iz00_1524));
																										{	/* SawJvm/compile.scm 195 */
																											bool_t BgL_testz00_2737;

																											{	/* SawJvm/compile.scm 195 */
																												bool_t
																													BgL__ortest_4995z00_1531;
																												BgL__ortest_4995z00_1531
																													=
																													(BgL_idz00_1500 ==
																													CNST_TABLE_REF(((long)
																															43)));
																												if (BgL__ortest_4995z00_1531)
																													{	/* SawJvm/compile.scm 195 */
																														BgL_testz00_2737 =
																															BgL__ortest_4995z00_1531;
																													}
																												else
																													{	/* SawJvm/compile.scm 195 */
																														bool_t
																															BgL__ortest_4996z00_1532;
																														BgL__ortest_4996z00_1532
																															=
																															(BgL_idz00_1500 ==
																															CNST_TABLE_REF((
																																	(long) 44)));
																														if (BgL__ortest_4996z00_1532)
																															{	/* SawJvm/compile.scm 195 */
																																BgL_testz00_2737
																																	=
																																	BgL__ortest_4996z00_1532;
																															}
																														else
																															{	/* SawJvm/compile.scm 195 */
																																bool_t
																																	BgL__ortest_4997z00_1533;
																																BgL__ortest_4997z00_1533
																																	=
																																	(BgL_idz00_1500
																																	==
																																	CNST_TABLE_REF
																																	(((long)
																																			45)));
																																if (BgL__ortest_4997z00_1533)
																																	{	/* SawJvm/compile.scm 195 */
																																		BgL_testz00_2737
																																			=
																																			BgL__ortest_4997z00_1533;
																																	}
																																else
																																	{	/* SawJvm/compile.scm 195 */
																																		bool_t
																																			BgL__ortest_4998z00_1534;
																																		BgL__ortest_4998z00_1534
																																			=
																																			(BgL_idz00_1500
																																			==
																																			CNST_TABLE_REF
																																			(((long)
																																					46)));
																																		if (BgL__ortest_4998z00_1534)
																																			{	/* SawJvm/compile.scm 195 */
																																				BgL_testz00_2737
																																					=
																																					BgL__ortest_4998z00_1534;
																																			}
																																		else
																																			{	/* SawJvm/compile.scm 195 */
																																				bool_t
																																					BgL__ortest_4999z00_1535;
																																				BgL__ortest_4999z00_1535
																																					=
																																					(BgL_idz00_1500
																																					==
																																					CNST_TABLE_REF
																																					(((long) 47)));
																																				if (BgL__ortest_4999z00_1535)
																																					{	/* SawJvm/compile.scm 195 */
																																						BgL_testz00_2737
																																							=
																																							BgL__ortest_4999z00_1535;
																																					}
																																				else
																																					{	/* SawJvm/compile.scm 195 */
																																						bool_t
																																							BgL__ortest_5000z00_1536;
																																						BgL__ortest_5000z00_1536
																																							=
																																							(BgL_idz00_1500
																																							==
																																							CNST_TABLE_REF
																																							(((long) 30)));
																																						if (BgL__ortest_5000z00_1536)
																																							{	/* SawJvm/compile.scm 195 */
																																								BgL_testz00_2737
																																									=
																																									BgL__ortest_5000z00_1536;
																																							}
																																						else
																																							{	/* SawJvm/compile.scm 195 */
																																								bool_t
																																									BgL__ortest_5001z00_1537;
																																								BgL__ortest_5001z00_1537
																																									=
																																									(BgL_idz00_1500
																																									==
																																									CNST_TABLE_REF
																																									(((long) 48)));
																																								if (BgL__ortest_5001z00_1537)
																																									{	/* SawJvm/compile.scm 195 */
																																										BgL_testz00_2737
																																											=
																																											BgL__ortest_5001z00_1537;
																																									}
																																								else
																																									{	/* SawJvm/compile.scm 195 */
																																										BgL_testz00_2737
																																											=
																																											(BgL_idz00_1500
																																											==
																																											CNST_TABLE_REF
																																											(((long) 27)));
																											}}}}}}}}
																											if (BgL_testz00_2737)
																												{	/* SawJvm/compile.scm 195 */
																													BGl_pushzd2numzd2zzsaw_jvm_outz00
																														(BgL_mez00_19,
																														VECTOR_REF
																														(BgL_vecz00_1498,
																															(int)
																															(BgL_iz00_1524)),
																														BgL_idz00_1500);
																												}
																											else
																												{	/* SawJvm/compile.scm 195 */
																													BGl_pushzd2stringzd2zzsaw_jvm_outz00
																														(BgL_mez00_19,
																														VECTOR_REF
																														(BgL_vecz00_1498,
																															(int)
																															(BgL_iz00_1524)));
																													BGl_codez12z12zzsaw_jvm_outz00
																														(BgL_mez00_19,
																														CNST_TABLE_REF((
																																(long) 25)));
																										}}
																										{	/* SawJvm/compile.scm 201 */
																											obj_t BgL_arg5118z00_1538;

																											{	/* SawJvm/compile.scm 201 */
																												bool_t BgL_testz00_2769;

																												{	/* SawJvm/compile.scm 201 */
																													bool_t
																														BgL__ortest_5002z00_1547;
																													BgL__ortest_5002z00_1547
																														=
																														(BgL_idz00_1500 ==
																														CNST_TABLE_REF((
																																(long) 43)));
																													if (BgL__ortest_5002z00_1547)
																														{	/* SawJvm/compile.scm 201 */
																															BgL_testz00_2769 =
																																BgL__ortest_5002z00_1547;
																														}
																													else
																														{	/* SawJvm/compile.scm 201 */
																															BgL_testz00_2769 =
																																(BgL_idz00_1500
																																==
																																CNST_TABLE_REF((
																																		(long)
																																		44)));
																												}}
																												if (BgL_testz00_2769)
																													{	/* SawJvm/compile.scm 201 */
																														BgL_arg5118z00_1538
																															=
																															CNST_TABLE_REF((
																																(long) 51));
																													}
																												else
																													{	/* SawJvm/compile.scm 201 */
																														if (
																															(BgL_idz00_1500 ==
																																CNST_TABLE_REF((
																																		(long)
																																		45))))
																															{	/* SawJvm/compile.scm 201 */
																																BgL_arg5118z00_1538
																																	=
																																	CNST_TABLE_REF
																																	(((long) 52));
																															}
																														else
																															{	/* SawJvm/compile.scm 201 */
																																if (
																																	(BgL_idz00_1500
																																		==
																																		CNST_TABLE_REF
																																		(((long)
																																				46))))
																																	{	/* SawJvm/compile.scm 201 */
																																		BgL_arg5118z00_1538
																																			=
																																			CNST_TABLE_REF
																																			(((long)
																																				53));
																																	}
																																else
																																	{	/* SawJvm/compile.scm 201 */
																																		if (
																																			(BgL_idz00_1500
																																				==
																																				CNST_TABLE_REF
																																				(((long)
																																						47))))
																																			{	/* SawJvm/compile.scm 201 */
																																				BgL_arg5118z00_1538
																																					=
																																					CNST_TABLE_REF
																																					(((long) 54));
																																			}
																																		else
																																			{	/* SawJvm/compile.scm 201 */
																																				if (
																																					(BgL_idz00_1500
																																						==
																																						CNST_TABLE_REF
																																						(((long) 30))))
																																					{	/* SawJvm/compile.scm 201 */
																																						BgL_arg5118z00_1538
																																							=
																																							CNST_TABLE_REF
																																							(((long) 55));
																																					}
																																				else
																																					{	/* SawJvm/compile.scm 201 */
																																						if (
																																							(BgL_idz00_1500
																																								==
																																								CNST_TABLE_REF
																																								(((long) 48))))
																																							{	/* SawJvm/compile.scm 201 */
																																								BgL_arg5118z00_1538
																																									=
																																									CNST_TABLE_REF
																																									(
																																									((long) 56));
																																							}
																																						else
																																							{	/* SawJvm/compile.scm 201 */
																																								if ((BgL_idz00_1500 == CNST_TABLE_REF(((long) 27))))
																																									{	/* SawJvm/compile.scm 201 */
																																										BgL_arg5118z00_1538
																																											=
																																											CNST_TABLE_REF
																																											(
																																											((long) 57));
																																									}
																																								else
																																									{	/* SawJvm/compile.scm 201 */
																																										BgL_arg5118z00_1538
																																											=
																																											CNST_TABLE_REF
																																											(
																																											((long) 58));
																											}}}}}}}}
																											BGl_codez12z12zzsaw_jvm_outz00
																												(BgL_mez00_19,
																												BgL_arg5118z00_1538);
																										}
																										{
																											long BgL_iz00_2802;

																											BgL_iz00_2802 =
																												(BgL_iz00_1524 +
																												((long) 1));
																											BgL_iz00_1524 =
																												BgL_iz00_2802;
																											goto
																												BgL_zc3anonymousza35113ze3z83_1525;
																										}
																									}
																								BBOOL(BgL_auxz00_2729);
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																else
																	{	/* SawJvm/compile.scm 140 */
																		BGl_internalzd2errorzd2zztools_errorz00
																			(BGl_string5258z00zzsaw_jvm_compilez00,
																			BGl_string5259z00zzsaw_jvm_compilez00,
																			BgL_casezd2valuezd2_1477);
																	}
															}
													}
											}
									}
							}
					}
			}
			{	/* SawJvm/compile.scm 213 */
				obj_t BgL_arg5133z00_1556;

				{	/* SawJvm/compile.scm 213 */
					obj_t BgL_arg5134z00_1557;

					obj_t BgL_arg5135z00_1558;

					BgL_arg5134z00_1557 = CNST_TABLE_REF(((long) 20));
					{	/* SawJvm/compile.scm 213 */
						obj_t BgL_arg5136z00_1559;

						BgL_arg5136z00_1559 =
							BGl_declarezd2globalzd2zzsaw_jvm_outz00(BgL_mez00_19,
							(BgL_globalz00_bglt) (BgL_varz00_20));
						{	/* SawJvm/compile.scm 213 */
							obj_t BgL_list5138z00_1561;

							BgL_list5138z00_1561 = MAKE_PAIR(BNIL, BNIL);
							BgL_arg5135z00_1558 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg5136z00_1559,
								BgL_list5138z00_1561);
					}}
					BgL_arg5133z00_1556 =
						MAKE_PAIR(BgL_arg5134z00_1557, BgL_arg5135z00_1558);
				}
				return
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19, BgL_arg5133z00_1556);
			}
		}
	}



/* module-dlopen */
	obj_t BGl_modulezd2dlopenzd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt BgL_mez00_22)
	{
		AN_OBJECT;
		{	/* SawJvm/compile.scm 218 */
			BGl_openzd2libzd2methodz00zzsaw_jvm_outz00(BgL_mez00_22,
				CNST_TABLE_REF(((long) 59)));
			BGl_declarezd2localszd2zzsaw_jvm_outz00(BgL_mez00_22, BNIL, BNIL);
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_22, CNST_TABLE_REF(((long) 21)));
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_22, CNST_TABLE_REF(((long) 22)));
			{	/* SawJvm/compile.scm 223 */
				obj_t BgL_arg5139z00_1562;

				{	/* SawJvm/compile.scm 223 */
					obj_t BgL_list5140z00_1563;

					BgL_list5140z00_1563 =
						MAKE_PAIR(BGl_za2moduleza2z00zzmodule_modulez00, BNIL);
					BgL_arg5139z00_1562 =
						BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 23)),
						BgL_list5140z00_1563);
				}
				BGl_callzd2globalzd2zzsaw_jvm_outz00(BgL_mez00_22,
					(BgL_globalz00_bglt) (BgL_arg5139z00_1562));
			}
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_22, CNST_TABLE_REF(((long) 7)));
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_22, CNST_TABLE_REF(((long) 8)));
			return BGl_closezd2methodzd2zzsaw_jvm_outz00(BgL_mez00_22);
		}
	}



/* module-functions */
	bool_t BGl_modulezd2functionszd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt
		BgL_mez00_23)
	{
		AN_OBJECT;
		{	/* SawJvm/compile.scm 231 */
			{	/* SawJvm/compile.scm 232 */
				obj_t BgL_g5019z00_1564;

				{
					BgL_backendz00_bglt BgL_auxz00_2830;

					BgL_auxz00_2830 = (BgL_backendz00_bglt) (BgL_mez00_23);
					BgL_g5019z00_1564 =
						(((BgL_backendz00_bglt) CREF(BgL_auxz00_2830))->BgL_functionsz00);
				}
				{
					obj_t BgL_l5017z00_1566;

					BgL_l5017z00_1566 = BgL_g5019z00_1564;
				BgL_zc3anonymousza35141ze3z83_1567:
					if (PAIRP(BgL_l5017z00_1566))
						{	/* SawJvm/compile.scm 232 */
							BGl_modulezd2functionzd2zzsaw_jvm_compilez00(BgL_mez00_23,
								CAR(BgL_l5017z00_1566));
							{
								obj_t BgL_l5017z00_2837;

								BgL_l5017z00_2837 = CDR(BgL_l5017z00_1566);
								BgL_l5017z00_1566 = BgL_l5017z00_2837;
								goto BgL_zc3anonymousza35141ze3z83_1567;
							}
						}
					else
						{	/* SawJvm/compile.scm 232 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* module-function */
	obj_t BGl_modulezd2functionzd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt
		BgL_mez00_24, obj_t BgL_vz00_25)
	{
		AN_OBJECT;
		{	/* SawJvm/compile.scm 234 */
			{	/* SawJvm/compile.scm 236 */
				obj_t BgL_codez00_1573;

				obj_t BgL_paramsz00_1574;

				BgL_codez00_1573 =
					BGl_globalzd2ze3blocksz31zzsaw_woodcutterz00(
					(BgL_backendz00_bglt) (BgL_mez00_24),
					(BgL_globalz00_bglt) (BgL_vz00_25));
				{	/* SawJvm/compile.scm 237 */
					obj_t BgL_l5020z00_1575;

					{	/* SawJvm/compile.scm 237 */
						BgL_sfunz00_bglt BgL_obj3062z00_2332;

						{	/* SawJvm/compile.scm 237 */
							BgL_variablez00_bglt BgL_obj2795z00_2331;

							BgL_obj2795z00_2331 = (BgL_variablez00_bglt) (BgL_vz00_25);
							BgL_obj3062z00_2332 =
								(BgL_sfunz00_bglt) (
								(((BgL_variablez00_bglt) CREF(BgL_obj2795z00_2331))->
									BgL_valuez00));
						}
						BgL_l5020z00_1575 =
							(((BgL_sfunz00_bglt) CREF(BgL_obj3062z00_2332))->BgL_argsz00);
					}
					if (NULLP(BgL_l5020z00_1575))
						{	/* SawJvm/compile.scm 237 */
							BgL_paramsz00_1574 = BNIL;
						}
					else
						{	/* SawJvm/compile.scm 237 */
							obj_t BgL_head5022z00_1577;

							{	/* SawJvm/compile.scm 237 */
								BgL_rtl_regz00_bglt BgL_arg5151z00_1590;

								{	/* SawJvm/compile.scm 237 */
									obj_t BgL_arg5153z00_1592;

									BgL_arg5153z00_1592 = CAR(BgL_l5020z00_1575);
									BgL_arg5151z00_1590 =
										BGl_localzd2ze3regz31zzsaw_node2rtlz00(
										(BgL_localz00_bglt) (BgL_arg5153z00_1592));
								}
								BgL_head5022z00_1577 =
									MAKE_PAIR((obj_t) (BgL_arg5151z00_1590), BNIL);
							}
							{	/* SawJvm/compile.scm 237 */
								obj_t BgL_g5025z00_1578;

								BgL_g5025z00_1578 = CDR(BgL_l5020z00_1575);
								{
									obj_t BgL_l5020z00_1580;

									obj_t BgL_tail5023z00_1581;

									BgL_l5020z00_1580 = BgL_g5025z00_1578;
									BgL_tail5023z00_1581 = BgL_head5022z00_1577;
								BgL_zc3anonymousza35145ze3z83_1582:
									if (NULLP(BgL_l5020z00_1580))
										{	/* SawJvm/compile.scm 237 */
											BgL_paramsz00_1574 = BgL_head5022z00_1577;
										}
									else
										{	/* SawJvm/compile.scm 237 */
											obj_t BgL_newtail5024z00_1584;

											{	/* SawJvm/compile.scm 237 */
												BgL_rtl_regz00_bglt BgL_arg5148z00_1586;

												{	/* SawJvm/compile.scm 237 */
													obj_t BgL_arg5150z00_1588;

													BgL_arg5150z00_1588 = CAR(BgL_l5020z00_1580);
													BgL_arg5148z00_1586 =
														BGl_localzd2ze3regz31zzsaw_node2rtlz00(
														(BgL_localz00_bglt) (BgL_arg5150z00_1588));
												}
												BgL_newtail5024z00_1584 =
													MAKE_PAIR((obj_t) (BgL_arg5148z00_1586), BNIL);
											}
											SET_CDR(BgL_tail5023z00_1581, BgL_newtail5024z00_1584);
											{
												obj_t BgL_tail5023z00_2864;

												obj_t BgL_l5020z00_2862;

												BgL_l5020z00_2862 = CDR(BgL_l5020z00_1580);
												BgL_tail5023z00_2864 = BgL_newtail5024z00_1584;
												BgL_tail5023z00_1581 = BgL_tail5023z00_2864;
												BgL_l5020z00_1580 = BgL_l5020z00_2862;
												goto BgL_zc3anonymousza35145ze3z83_1582;
											}
										}
								}
							}
						}
				}
				BGl_openzd2globalzd2methodz00zzsaw_jvm_outz00(BgL_mez00_24,
					(BgL_globalz00_bglt) (BgL_vz00_25));
				BGl_buildzd2treezd2zzsaw_exprz00(
					(BgL_backendz00_bglt) (BgL_mez00_24), BgL_paramsz00_1574,
					BgL_codez00_1573);
				BgL_codez00_1573 =
					BGl_registerzd2allocationzd2zzsaw_registerzd2allocationzd2(
					(BgL_backendz00_bglt) (BgL_mez00_24),
					(BgL_globalz00_bglt) (BgL_vz00_25), BgL_paramsz00_1574,
					BgL_codez00_1573);
				BGl_modulezd2codezd2zzsaw_jvm_codez00(BgL_mez00_24, BgL_paramsz00_1574,
					BgL_codez00_1573);
				return BGl_closezd2methodzd2zzsaw_jvm_outz00(BgL_mez00_24);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_jvm_compilez00()
	{
		AN_OBJECT;
		{	/* SawJvm/compile.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_jvm_compilez00()
	{
		AN_OBJECT;
		{	/* SawJvm/compile.scm 1 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_compilez00()
	{
		AN_OBJECT;
		{	/* SawJvm/compile.scm 1 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzcnst_nodez00(((long) 110472871),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzcnst_allocz00(((long) 355177025),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 2222742),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 143212498),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_bvmz00(((long) 52967775),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(((long) 0),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_libz00(((long) 256265790),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long) 254412896),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 192042637),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(((long) 345795750),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzsaw_woodcutterz00(((long) 191999361),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzsaw_exprz00(((long) 159754019),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzsaw_registerzd2allocationzd2(((long)
					167519689), BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_namesz00(((long) 67756028),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_outz00(((long) 71277553),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_funcallz00(((long) 133573631),
				BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
			return BGl_modulezd2initializa7ationz75zzsaw_jvm_codez00(((long)
					382350697), BSTRING_TO_STRING(BGl_string5260z00zzsaw_jvm_compilez00));
		}
	}

#ifdef __cplusplus
}
#endif
