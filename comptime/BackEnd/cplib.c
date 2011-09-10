/*===========================================================================*/
/*   (BackEnd/cplib.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/cplib.scm)*/
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

	typedef struct BgL_scnstz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_nodez00;
		obj_t BgL_classz00;
		obj_t BgL_locz00;
	}               *BgL_scnstz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

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


	BGL_EXPORTED_DECL obj_t
		BGl_qualifiedzd2tclasszd2namez00zzbackend_cplibz00(BgL_tclassz00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_getzd2objectzd2typez00zztype_cachez00();
	extern obj_t BGl_wclassz00zzobject_classz00;
	extern obj_t BGl_getzd2classzd2listz00zzobject_classz00();
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2fieldzd2typez00zzbackend_cplibz00(BgL_slotz00_bglt);
	static obj_t BGl__getzd2itszd2superz00zzbackend_cplibz00(obj_t, obj_t);
	static obj_t BGl__qualifiedzd2wclasszd2namez00zzbackend_cplibz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classzd2idzd2ze3typezd2namez31zzbackend_cplibz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzbackend_cplibz00();
	BGL_EXPORTED_DECL BgL_tclassz00_bglt
		BGl_getzd2itszd2superz00zzbackend_cplibz00(BgL_typez00_bglt);
	static obj_t BGl__globalzd2entryzd2zzbackend_cplibz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__setzd2variablezd2namez12z12zzbackend_cplibz00(obj_t, obj_t);
	static obj_t BGl__getzd2declaredzd2classesz00zzbackend_cplibz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_javaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzbackend_cplibz00();
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(BgL_variablez00_bglt);
	extern obj_t BGl_sawzd2widezd2classzd2idzd2zzobject_classz00(obj_t);
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	static obj_t BGl__forzd2eachzd2declaredzd2classeszd2zzbackend_cplibz00(obj_t,
		obj_t);
	static obj_t BGl__qualifiedzd2jclasszd2namez00zzbackend_cplibz00(obj_t,
		obj_t);
	static obj_t BGl__getzd2declaredzd2fieldsz00zzbackend_cplibz00(obj_t, obj_t);
	static obj_t BGl_typezd2ze3classz31zzbackend_cplibz00(BgL_typez00_bglt);
	extern obj_t BGl_findzd2javazd2classz00zzmodule_javaz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_qualifiedzd2wclasszd2namez00zzbackend_cplibz00(BgL_wclassz00_bglt);
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	extern bool_t BGl_slotzd2virtualzf3z21zzobject_slotsz00(BgL_slotz00_bglt);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	BGL_EXPORTED_DECL obj_t
		BGl_forzd2eachzd2declaredzd2classeszd2zzbackend_cplibz00(obj_t);
	static obj_t BGl__globalzd2arityzd2zzbackend_cplibz00(obj_t, obj_t);
	static obj_t BGl__resetzd2globalz12zc0zzbackend_cplibz00(obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2globalzd2variableszd2tozd2bezd2initializa7edz75zzbackend_cplibz00
		(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_resetzd2globalz12zc0zzbackend_cplibz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_qualifiedzd2typezd2namez00zzbackend_cplibz00(BgL_typez00_bglt);
	BGL_IMPORT bool_t BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzbackend_cplibz00();
	static obj_t BGl__getzd2fieldzd2typez00zzbackend_cplibz00(obj_t, obj_t);
	extern obj_t BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t bigloo_strcmp(obj_t, obj_t);
	static obj_t
		BGl_qualifiedzd2realzd2tclasszd2namezd2zzbackend_cplibz00
		(BgL_tclassz00_bglt);
	static obj_t
		BGl__getzd2declaredzd2globalzd2variableszd2zzbackend_cplibz00(obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_EXPORTED_DECL obj_t
		BGl_qualifiedzd2jclasszd2namez00zzbackend_cplibz00(BgL_jclassz00_bglt);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_cplibz00 = BUNSPEC;
	extern obj_t BGl_getzd2nodezd2atomzd2valuezd2zzcnst_nodez00(BgL_nodez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_widezd2ze3chunkz31zzbackend_cplibz00(BgL_tclassz00_bglt);
	BGL_IMPORT obj_t bigloo_mangle(obj_t);
	static obj_t
		BGl__getzd2globalzd2variableszd2tozd2bezd2initializa7edz75zzbackend_cplibz00
		(obj_t, obj_t);
	extern obj_t BGl_scnstz00zzast_varz00;
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_genericzd2initzd2zzbackend_cplibz00();
	extern obj_t BGl_za2jvmzd2foreignzd2classzd2nameza2zd2zzengine_paramz00;
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_IMPORT obj_t bigloo_module_mangle(obj_t, obj_t);
	extern bool_t BGl_widezd2classzf3z21zzobject_classz00(obj_t);
	static obj_t BGl__classzd2idzd2ze3typezd2namez31zzbackend_cplibz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_cplibz00();
	BGL_EXPORTED_DECL obj_t BGl_getzd2declaredzd2classesz00zzbackend_cplibz00();
	static obj_t BGl__widezd2ze3chunkz31zzbackend_cplibz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_globalzd2entryzd2zzbackend_cplibz00(BgL_globalz00_bglt);
	static obj_t BGl__qualifiedzd2tclasszd2namez00zzbackend_cplibz00(obj_t,
		obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2declaredzd2fieldsz00zzbackend_cplibz00(BgL_typez00_bglt);
	BGL_IMPORT obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	static obj_t BGl_zc3anonymousza33688ze3z83zzbackend_cplibz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33698ze3z83zzbackend_cplibz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33711ze3z83zzbackend_cplibz00(obj_t, obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2declaredzd2globalzd2variableszd2zzbackend_cplibz00(obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2arityzd2zzbackend_cplibz00(BgL_globalz00_bglt);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl__qualifiedzd2typezd2namez00zzbackend_cplibz00(obj_t, obj_t);
	extern bool_t
		BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00(BgL_globalz00_bglt);
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_cplibz00();
	static obj_t __cnst[6];


	   
		 
		DEFINE_STRING(BGl_string3780z00zzbackend_cplibz00,
		BgL_bgl_string3780za700za7za7b3796za7, "_K", 2);
	      DEFINE_STRING(BGl_string3781z00zzbackend_cplibz00,
		BgL_bgl_string3781za700za7za7b3797za7, "object", 6);
	      DEFINE_STRING(BGl_string3782z00zzbackend_cplibz00,
		BgL_bgl_string3782za700za7za7b3798za7, "", 0);
	      DEFINE_STRING(BGl_string3783z00zzbackend_cplibz00,
		BgL_bgl_string3783za700za7za7b3799za7, "bigloo", 6);
	      DEFINE_STRING(BGl_string3784z00zzbackend_cplibz00,
		BgL_bgl_string3784za700za7za7b3800za7, ".", 1);
	      DEFINE_STRING(BGl_string3785z00zzbackend_cplibz00,
		BgL_bgl_string3785za700za7za7b3801za7, "bigloo.", 7);
	      DEFINE_STRING(BGl_string3786z00zzbackend_cplibz00,
		BgL_bgl_string3786za700za7za7b3802za7, "_", 1);
	      DEFINE_STRING(BGl_string3787z00zzbackend_cplibz00,
		BgL_bgl_string3787za700za7za7b3803za7, "set-variable-name!", 18);
	      DEFINE_STRING(BGl_string3788z00zzbackend_cplibz00,
		BgL_bgl_string3788za700za7za7b3804za7, "Unknown variable sort", 21);
	      DEFINE_STRING(BGl_string3790z00zzbackend_cplibz00,
		BgL_bgl_string3790za700za7za7b3805za7, "wide-shunk", 10);
	      DEFINE_STRING(BGl_string3789z00zzbackend_cplibz00,
		BgL_bgl_string3789za700za7za7b3806za7, "Illegal type", 12);
	      DEFINE_STRING(BGl_string3791z00zzbackend_cplibz00,
		BgL_bgl_string3791za700za7za7b3807za7, "internal error", 14);
	      DEFINE_STRING(BGl_string3792z00zzbackend_cplibz00,
		BgL_bgl_string3792za700za7za7b3808za7, "backend_cplib", 13);
	      DEFINE_STRING(BGl_string3793z00zzbackend_cplibz00,
		BgL_bgl_string3793za700za7za7b3809za7,
		"__cnsts_table get-declared-fields import stvector foreign obj ", 62);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2entryzd2envz00zzbackend_cplibz00,
		BgL_bgl__globalza7d2entryza73810z00,
		BGl__globalzd2entryzd2zzbackend_cplibz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2declaredzd2classeszd2envzd2zzbackend_cplibz00,
		BgL_bgl__getza7d2declaredza73811z00,
		BGl__getzd2declaredzd2classesz00zzbackend_cplibz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2itszd2superzd2envzd2zzbackend_cplibz00,
		BgL_bgl__getza7d2itsza7d2sup3812z00,
		BGl__getzd2itszd2superz00zzbackend_cplibz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2variablezd2namez12zd2envzc0zzbackend_cplibz00,
		BgL_bgl__setza7d2variableza73813z00,
		BGl__setzd2variablezd2namez12z12zzbackend_cplibz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2idzd2ze3typezd2namezd2envze3zzbackend_cplibz00,
		BgL_bgl__classza7d2idza7d2za7e3814za7,
		BGl__classzd2idzd2ze3typezd2namez31zzbackend_cplibz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2arityzd2envz00zzbackend_cplibz00,
		BgL_bgl__globalza7d2arityza73815z00,
		BGl__globalzd2arityzd2zzbackend_cplibz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2globalzd2variableszd2tozd2bezd2initializa7edzd2envza7zzbackend_cplibz00,
		BgL_bgl__getza7d2globalza7d23816z00,
		BGl__getzd2globalzd2variableszd2tozd2bezd2initializa7edz75zzbackend_cplibz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_qualifiedzd2typezd2namezd2envzd2zzbackend_cplibz00,
		BgL_bgl__qualifiedza7d2typ3817za7,
		BGl__qualifiedzd2typezd2namez00zzbackend_cplibz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_qualifiedzd2wclasszd2namezd2envzd2zzbackend_cplibz00,
		BgL_bgl__qualifiedza7d2wcl3818za7,
		BGl__qualifiedzd2wclasszd2namez00zzbackend_cplibz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2declaredzd2globalzd2variableszd2envz00zzbackend_cplibz00,
		BgL_bgl__getza7d2declaredza73819z00,
		BGl__getzd2declaredzd2globalzd2variableszd2zzbackend_cplibz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_widezd2ze3chunkzd2envze3zzbackend_cplibz00,
		BgL_bgl__wideza7d2za7e3chunk3820z00,
		BGl__widezd2ze3chunkz31zzbackend_cplibz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2declaredzd2fieldszd2envzd2zzbackend_cplibz00,
		BgL_bgl__getza7d2declaredza73821z00,
		BGl__getzd2declaredzd2fieldsz00zzbackend_cplibz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2fieldzd2typezd2envzd2zzbackend_cplibz00,
		BgL_bgl__getza7d2fieldza7d2t3822z00,
		BGl__getzd2fieldzd2typez00zzbackend_cplibz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_forzd2eachzd2declaredzd2classeszd2envz00zzbackend_cplibz00,
		BgL_bgl__forza7d2eachza7d2de3823z00,
		BGl__forzd2eachzd2declaredzd2classeszd2zzbackend_cplibz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_qualifiedzd2tclasszd2namezd2envzd2zzbackend_cplibz00,
		BgL_bgl__qualifiedza7d2tcl3824za7,
		BGl__qualifiedzd2tclasszd2namez00zzbackend_cplibz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_qualifiedzd2jclasszd2namezd2envzd2zzbackend_cplibz00,
		BgL_bgl__qualifiedza7d2jcl3825za7,
		BGl__qualifiedzd2jclasszd2namez00zzbackend_cplibz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_resetzd2globalz12zd2envz12zzbackend_cplibz00,
		BgL_bgl__resetza7d2globalza73826z00,
		BGl__resetzd2globalz12zc0zzbackend_cplibz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long
		BgL_checksumz00_1686, char *BgL_fromz00_1687)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_cplibz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_cplibz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzbackend_cplibz00();
					BGl_cnstzd2initzd2zzbackend_cplibz00();
					BGl_importedzd2moduleszd2initz00zzbackend_cplibz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_cplibz00()
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"backend_cplib");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"backend_cplib");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "backend_cplib");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"backend_cplib");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"backend_cplib");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"backend_cplib");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"backend_cplib");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "backend_cplib");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbackend_cplibz00()
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 15 */
			{	/* BackEnd/cplib.scm 15 */
				obj_t BgL_cportz00_1672;

				BgL_cportz00_1672 =
					bgl_open_input_string(BGl_string3793z00zzbackend_cplibz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1673;

					BgL_iz00_1673 = ((long) 5);
				BgL_loopz00_1674:
					if ((BgL_iz00_1673 == ((long) -1)))
						{	/* BackEnd/cplib.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* BackEnd/cplib.scm 15 */
							{	/* BackEnd/cplib.scm 15 */
								obj_t BgL_arg3795z00_1676;

								{	/* BackEnd/cplib.scm 15 */

									{	/* BackEnd/cplib.scm 15 */
										obj_t BgL_locationz00_1678;

										BgL_locationz00_1678 = BBOOL(((bool_t) 0));
										{	/* BackEnd/cplib.scm 15 */

											BgL_arg3795z00_1676 =
												BGl_readz00zz__readerz00(BgL_cportz00_1672,
												BgL_locationz00_1678);
										}
									}
								}
								{	/* BackEnd/cplib.scm 15 */
									int BgL_auxz00_1708;

									BgL_auxz00_1708 = (int) (BgL_iz00_1673);
									CNST_TABLE_SET(BgL_auxz00_1708, BgL_arg3795z00_1676);
							}}
							{	/* BackEnd/cplib.scm 15 */
								int BgL_auxz00_1679;

								BgL_auxz00_1679 = (int) ((BgL_iz00_1673 - ((long) 1)));
								{
									long BgL_iz00_1713;

									BgL_iz00_1713 = (long) (BgL_auxz00_1679);
									BgL_iz00_1673 = BgL_iz00_1713;
									goto BgL_loopz00_1674;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbackend_cplibz00()
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 15 */
			return BUNSPEC;
		}
	}



/* class-id->type-name */
	BGL_EXPORTED_DEF obj_t
		BGl_classzd2idzd2ze3typezd2namez31zzbackend_cplibz00(obj_t BgL_cidz00_11,
		obj_t BgL_midz00_12)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 56 */
			{	/* BackEnd/cplib.scm 57 */
				obj_t BgL_idz00_1484;

				{	/* BackEnd/cplib.scm 57 */
					obj_t BgL_arg3595z00_1485;

					obj_t BgL_arg3596z00_1486;

					{	/* BackEnd/cplib.scm 57 */
						obj_t BgL_res3770z00_1489;

						{	/* BackEnd/cplib.scm 57 */
							obj_t BgL_arg2063z00_1488;

							BgL_arg2063z00_1488 = SYMBOL_TO_STRING(BgL_cidz00_11);
							BgL_res3770z00_1489 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2063z00_1488);
						}
						BgL_arg3595z00_1485 = BgL_res3770z00_1489;
					}
					{	/* BackEnd/cplib.scm 57 */
						obj_t BgL_res3771z00_1492;

						{	/* BackEnd/cplib.scm 57 */
							obj_t BgL_arg2063z00_1491;

							BgL_arg2063z00_1491 = SYMBOL_TO_STRING(BgL_midz00_12);
							BgL_res3771z00_1492 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2063z00_1491);
						}
						BgL_arg3596z00_1486 = BgL_res3771z00_1492;
					}
					BgL_idz00_1484 =
						bigloo_module_mangle(BgL_arg3595z00_1485, BgL_arg3596z00_1486);
				}
				return
					string_append(BGl_string3780z00zzbackend_cplibz00, BgL_idz00_1484);
			}
		}
	}



/* _class-id->type-name */
	obj_t BGl__classzd2idzd2ze3typezd2namez31zzbackend_cplibz00(obj_t
		BgL_envz00_1621, obj_t BgL_cidz00_1622, obj_t BgL_midz00_1623)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 56 */
			return
				BGl_classzd2idzd2ze3typezd2namez31zzbackend_cplibz00(BgL_cidz00_1622,
				BgL_midz00_1623);
		}
	}



/* qualified-real-tclass-name */
	obj_t
		BGl_qualifiedzd2realzd2tclasszd2namezd2zzbackend_cplibz00(BgL_tclassz00_bglt
		BgL_classz00_13)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 63 */
			{
				BgL_tclassz00_bglt BgL_superz00_920;

				obj_t BgL_namez00_915;

				BgL_tclassz00_bglt BgL_classz00_907;

				{	/* BackEnd/cplib.scm 97 */
					obj_t BgL_arg3597z00_901;

					obj_t BgL_arg3598z00_902;

					BgL_superz00_920 = BgL_classz00_13;
					{	/* BackEnd/cplib.scm 87 */
						bool_t BgL_testz00_1722;

						{	/* BackEnd/cplib.scm 87 */
							bool_t BgL_testz00_1723;

							{	/* BackEnd/cplib.scm 87 */
								obj_t BgL_arg3622z00_937;

								{
									obj_t BgL_auxz00_1724;

									{	/* BackEnd/cplib.scm 87 */
										BgL_objectz00_bglt BgL_auxz00_1725;

										BgL_auxz00_1725 = (BgL_objectz00_bglt) (BgL_superz00_920);
										BgL_auxz00_1724 = BGL_OBJECT_WIDENING(BgL_auxz00_1725);
									}
									BgL_arg3622z00_937 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1724))->
										BgL_itszd2superzd2);
								}
								BgL_testz00_1723 =
									BGl_iszd2azf3z21zz__objectz00(BgL_arg3622z00_937,
									BGl_tclassz00zzobject_classz00);
							}
							if (BgL_testz00_1723)
								{	/* BackEnd/cplib.scm 88 */
									bool_t BgL_testz00_1730;

									{	/* BackEnd/cplib.scm 88 */
										obj_t BgL_auxz00_1731;

										{
											obj_t BgL_auxz00_1733;

											{	/* BackEnd/cplib.scm 88 */
												BgL_objectz00_bglt BgL_auxz00_1734;

												BgL_auxz00_1734 =
													(BgL_objectz00_bglt) (BgL_superz00_920);
												BgL_auxz00_1733 = BGL_OBJECT_WIDENING(BgL_auxz00_1734);
											}
											BgL_auxz00_1731 =
												(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1733))->
												BgL_itszd2superzd2);
										}
										BgL_testz00_1730 =
											((obj_t) (BgL_superz00_920) == BgL_auxz00_1731);
									}
									if (BgL_testz00_1730)
										{	/* BackEnd/cplib.scm 89 */
											bool_t BgL_testz00_1739;

											{	/* BackEnd/cplib.scm 89 */
												obj_t BgL_auxz00_1740;

												{	/* BackEnd/cplib.scm 89 */
													BgL_typez00_bglt BgL_obj1508z00_1522;

													{	/* BackEnd/cplib.scm 89 */
														obj_t BgL_auxz00_1741;

														{
															obj_t BgL_auxz00_1742;

															{	/* BackEnd/cplib.scm 89 */
																BgL_objectz00_bglt BgL_auxz00_1743;

																BgL_auxz00_1743 =
																	(BgL_objectz00_bglt) (BgL_superz00_920);
																BgL_auxz00_1742 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_1743);
															}
															BgL_auxz00_1741 =
																(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1742))->
																BgL_itszd2superzd2);
														}
														BgL_obj1508z00_1522 =
															(BgL_typez00_bglt) (BgL_auxz00_1741);
													}
													BgL_auxz00_1740 =
														(((BgL_typez00_bglt) CREF(BgL_obj1508z00_1522))->
														BgL_idz00);
												}
												BgL_testz00_1739 =
													(BgL_auxz00_1740 == CNST_TABLE_REF(((long) 0)));
											}
											if (BgL_testz00_1739)
												{	/* BackEnd/cplib.scm 89 */
													BgL_testz00_1722 = ((bool_t) 0);
												}
											else
												{	/* BackEnd/cplib.scm 89 */
													BgL_testz00_1722 = ((bool_t) 1);
												}
										}
									else
										{	/* BackEnd/cplib.scm 88 */
											BgL_testz00_1722 = ((bool_t) 0);
										}
								}
							else
								{	/* BackEnd/cplib.scm 87 */
									BgL_testz00_1722 = ((bool_t) 1);
								}
						}
						if (BgL_testz00_1722)
							{	/* BackEnd/cplib.scm 87 */
								BgL_arg3597z00_901 = BGl_string3783z00zzbackend_cplibz00;
							}
						else
							{	/* BackEnd/cplib.scm 91 */
								BgL_globalz00_bglt BgL_holderz00_924;

								{
									obj_t BgL_auxz00_1751;

									{	/* BackEnd/cplib.scm 91 */
										BgL_objectz00_bglt BgL_auxz00_1752;

										BgL_auxz00_1752 = (BgL_objectz00_bglt) (BgL_superz00_920);
										BgL_auxz00_1751 = BGL_OBJECT_WIDENING(BgL_auxz00_1752);
									}
									BgL_holderz00_924 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1751))->
										BgL_holderz00);
								}
								{	/* BackEnd/cplib.scm 92 */
									obj_t BgL_arg3610z00_925;

									obj_t BgL_arg3612z00_926;

									obj_t BgL_arg3613z00_927;

									BgL_arg3610z00_925 =
										(((BgL_globalz00_bglt) CREF(BgL_holderz00_924))->
										BgL_modulez00);
									BgL_arg3612z00_926 =
										(((BgL_globalz00_bglt) CREF(BgL_holderz00_924))->
										BgL_jvmzd2typezd2namez00);
									{
										BgL_typez00_bglt BgL_auxz00_1758;

										BgL_auxz00_1758 = (BgL_typez00_bglt) (BgL_superz00_920);
										BgL_arg3613z00_927 =
											(((BgL_typez00_bglt) CREF(BgL_auxz00_1758))->BgL_idz00);
									}
									{	/* BackEnd/cplib.scm 92 */
										obj_t BgL_list3614z00_928;

										BgL_list3614z00_928 = MAKE_PAIR(BgL_arg3613z00_927, BNIL);
										BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00
											(BgL_arg3610z00_925, BgL_arg3612z00_926,
											BgL_list3614z00_928);
									}
								}
								{	/* BackEnd/cplib.scm 95 */
									obj_t BgL_arg3615z00_929;

									BgL_arg3615z00_929 =
										(((BgL_globalz00_bglt) CREF(BgL_holderz00_924))->
										BgL_modulez00);
									BgL_namez00_915 = BgL_arg3615z00_929;
									{	/* BackEnd/cplib.scm 79 */
										obj_t BgL_sz00_917;

										BgL_sz00_917 =
											BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00
											(BgL_namez00_915);
										{	/* BackEnd/cplib.scm 79 */
											obj_t BgL_prefz00_918;

											BgL_prefz00_918 = BGl_prefixz00zz__osz00(BgL_sz00_917);
											{	/* BackEnd/cplib.scm 80 */

												if (bigloo_strcmp(BgL_prefz00_918, BgL_sz00_917))
													{	/* BackEnd/cplib.scm 81 */
														BgL_arg3597z00_901 =
															BGl_string3782z00zzbackend_cplibz00;
													}
												else
													{	/* BackEnd/cplib.scm 81 */
														BgL_arg3597z00_901 = BgL_prefz00_918;
													}
											}
										}
									}
								}
							}
					}
					BgL_classz00_907 = BgL_classz00_13;
					if (
						((obj_t) (BgL_classz00_907) ==
							BGl_getzd2objectzd2typez00zztype_cachez00()))
						{	/* BackEnd/cplib.scm 72 */
							BgL_arg3598z00_902 = BGl_string3781z00zzbackend_cplibz00;
						}
					else
						{	/* BackEnd/cplib.scm 75 */
							obj_t BgL_modz00_911;

							{	/* BackEnd/cplib.scm 75 */
								BgL_globalz00_bglt BgL_obj1676z00_1502;

								{
									obj_t BgL_auxz00_1772;

									{	/* BackEnd/cplib.scm 75 */
										BgL_objectz00_bglt BgL_auxz00_1773;

										BgL_auxz00_1773 = (BgL_objectz00_bglt) (BgL_classz00_907);
										BgL_auxz00_1772 = BGL_OBJECT_WIDENING(BgL_auxz00_1773);
									}
									BgL_obj1676z00_1502 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1772))->
										BgL_holderz00);
								}
								BgL_modz00_911 =
									(((BgL_globalz00_bglt) CREF(BgL_obj1676z00_1502))->
									BgL_modulez00);
							}
							{	/* BackEnd/cplib.scm 76 */
								obj_t BgL_arg3603z00_912;

								{
									BgL_typez00_bglt BgL_auxz00_1778;

									BgL_auxz00_1778 = (BgL_typez00_bglt) (BgL_classz00_907);
									BgL_arg3603z00_912 =
										(((BgL_typez00_bglt) CREF(BgL_auxz00_1778))->BgL_idz00);
								}
								{	/* BackEnd/cplib.scm 76 */
									obj_t BgL_res3774z00_1515;

									{	/* BackEnd/cplib.scm 76 */
										obj_t BgL_idz00_1506;

										{	/* BackEnd/cplib.scm 76 */
											obj_t BgL_arg3595z00_1507;

											obj_t BgL_arg3596z00_1508;

											{	/* BackEnd/cplib.scm 76 */
												obj_t BgL_res3772z00_1511;

												{	/* BackEnd/cplib.scm 76 */
													obj_t BgL_arg2063z00_1510;

													BgL_arg2063z00_1510 =
														SYMBOL_TO_STRING(BgL_arg3603z00_912);
													BgL_res3772z00_1511 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_1510);
												}
												BgL_arg3595z00_1507 = BgL_res3772z00_1511;
											}
											{	/* BackEnd/cplib.scm 76 */
												obj_t BgL_res3773z00_1514;

												{	/* BackEnd/cplib.scm 76 */
													obj_t BgL_arg2063z00_1513;

													BgL_arg2063z00_1513 =
														SYMBOL_TO_STRING(BgL_modz00_911);
													BgL_res3773z00_1514 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_1513);
												}
												BgL_arg3596z00_1508 = BgL_res3773z00_1514;
											}
											BgL_idz00_1506 =
												bigloo_module_mangle(BgL_arg3595z00_1507,
												BgL_arg3596z00_1508);
										}
										BgL_res3774z00_1515 =
											string_append(BGl_string3780z00zzbackend_cplibz00,
											BgL_idz00_1506);
									}
									BgL_arg3598z00_902 = BgL_res3774z00_1515;
								}
							}
						}
					if (bigloo_strcmp(BgL_arg3597z00_901,
							BGl_string3782z00zzbackend_cplibz00))
						{	/* BackEnd/cplib.scm 97 */
							return BgL_arg3598z00_902;
						}
					else
						{	/* BackEnd/cplib.scm 97 */
							return
								string_append_3(BgL_arg3597z00_901,
								BGl_string3784z00zzbackend_cplibz00, BgL_arg3598z00_902);
						}
				}
			}
		}
	}



/* qualified-tclass-name */
	BGL_EXPORTED_DEF obj_t
		BGl_qualifiedzd2tclasszd2namez00zzbackend_cplibz00(BgL_tclassz00_bglt
		BgL_classz00_14)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 102 */
			{	/* BackEnd/cplib.scm 103 */
				obj_t BgL_cz00_942;

				if (BGl_widezd2classzf3z21zzobject_classz00((obj_t) (BgL_classz00_14)))
					{
						obj_t BgL_auxz00_1793;

						{	/* BackEnd/cplib.scm 103 */
							BgL_objectz00_bglt BgL_auxz00_1794;

							BgL_auxz00_1794 = (BgL_objectz00_bglt) (BgL_classz00_14);
							BgL_auxz00_1793 = BGL_OBJECT_WIDENING(BgL_auxz00_1794);
						}
						BgL_cz00_942 =
							(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1793))->
							BgL_itszd2superzd2);
					}
				else
					{	/* BackEnd/cplib.scm 103 */
						BgL_cz00_942 = (obj_t) (BgL_classz00_14);
					}
				return
					BGl_qualifiedzd2realzd2tclasszd2namezd2zzbackend_cplibz00(
					(BgL_tclassz00_bglt) (BgL_cz00_942));
			}
		}
	}



/* _qualified-tclass-name */
	obj_t BGl__qualifiedzd2tclasszd2namez00zzbackend_cplibz00(obj_t
		BgL_envz00_1624, obj_t BgL_classz00_1625)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 102 */
			return
				BGl_qualifiedzd2tclasszd2namez00zzbackend_cplibz00(
				(BgL_tclassz00_bglt) (BgL_classz00_1625));
		}
	}



/* qualified-wclass-name */
	BGL_EXPORTED_DEF obj_t
		BGl_qualifiedzd2wclasszd2namez00zzbackend_cplibz00(BgL_wclassz00_bglt
		BgL_classz00_15)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 109 */
			{	/* BackEnd/cplib.scm 110 */
				obj_t BgL_arg3624z00_1529;

				{
					obj_t BgL_auxz00_1803;

					{	/* BackEnd/cplib.scm 110 */
						BgL_objectz00_bglt BgL_auxz00_1804;

						BgL_auxz00_1804 = (BgL_objectz00_bglt) (BgL_classz00_15);
						BgL_auxz00_1803 = BGL_OBJECT_WIDENING(BgL_auxz00_1804);
					}
					BgL_arg3624z00_1529 =
						(((BgL_wclassz00_bglt) CREF(BgL_auxz00_1803))->BgL_itszd2classzd2);
				}
				return
					BGl_qualifiedzd2realzd2tclasszd2namezd2zzbackend_cplibz00(
					(BgL_tclassz00_bglt) (BgL_arg3624z00_1529));
			}
		}
	}



/* _qualified-wclass-name */
	obj_t BGl__qualifiedzd2wclasszd2namez00zzbackend_cplibz00(obj_t
		BgL_envz00_1626, obj_t BgL_classz00_1627)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 109 */
			return
				BGl_qualifiedzd2wclasszd2namez00zzbackend_cplibz00(
				(BgL_wclassz00_bglt) (BgL_classz00_1627));
		}
	}



/* qualified-jclass-name */
	BGL_EXPORTED_DEF obj_t
		BGl_qualifiedzd2jclasszd2namez00zzbackend_cplibz00(BgL_jclassz00_bglt
		BgL_classz00_16)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 115 */
			{
				BgL_typez00_bglt BgL_auxz00_1812;

				BgL_auxz00_1812 = (BgL_typez00_bglt) (BgL_classz00_16);
				return (((BgL_typez00_bglt) CREF(BgL_auxz00_1812))->BgL_namez00);
			}
		}
	}



/* _qualified-jclass-name */
	obj_t BGl__qualifiedzd2jclasszd2namez00zzbackend_cplibz00(obj_t
		BgL_envz00_1628, obj_t BgL_classz00_1629)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 115 */
			return
				BGl_qualifiedzd2jclasszd2namez00zzbackend_cplibz00(
				(BgL_jclassz00_bglt) (BgL_classz00_1629));
		}
	}



/* qualified-type-name */
	BGL_EXPORTED_DEF obj_t
		BGl_qualifiedzd2typezd2namez00zzbackend_cplibz00(BgL_typez00_bglt
		BgL_typez00_17)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 121 */
			{	/* BackEnd/cplib.scm 122 */
				obj_t BgL_idz00_945;

				BgL_idz00_945 = (((BgL_typez00_bglt) CREF(BgL_typez00_17))->BgL_idz00);
				if ((BgL_idz00_945 == CNST_TABLE_REF(((long) 1))))
					{	/* BackEnd/cplib.scm 123 */
						return BGl_za2jvmzd2foreignzd2classzd2nameza2zd2zzengine_paramz00;
					}
				else
					{	/* BackEnd/cplib.scm 125 */
						obj_t BgL_javazd2classzd2_947;

						BgL_javazd2classzd2_947 =
							BGl_findzd2javazd2classz00zzmodule_javaz00(BgL_idz00_945);
						if (STRINGP(BgL_javazd2classzd2_947))
							{	/* BackEnd/cplib.scm 126 */
								return BgL_javazd2classzd2_947;
							}
						else
							{	/* BackEnd/cplib.scm 128 */
								obj_t BgL_arg3628z00_950;

								{	/* BackEnd/cplib.scm 128 */
									obj_t BgL_res3775z00_1536;

									{	/* BackEnd/cplib.scm 128 */
										obj_t BgL_arg2063z00_1535;

										BgL_arg2063z00_1535 = SYMBOL_TO_STRING(BgL_idz00_945);
										BgL_res3775z00_1536 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_1535);
									}
									BgL_arg3628z00_950 = BgL_res3775z00_1536;
								}
								return
									string_append(BGl_string3785z00zzbackend_cplibz00,
									BgL_arg3628z00_950);
							}
					}
			}
		}
	}



/* _qualified-type-name */
	obj_t BGl__qualifiedzd2typezd2namez00zzbackend_cplibz00(obj_t BgL_envz00_1630,
		obj_t BgL_typez00_1631)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 121 */
			return
				BGl_qualifiedzd2typezd2namez00zzbackend_cplibz00(
				(BgL_typez00_bglt) (BgL_typez00_1631));
		}
	}



/* reset-global! */
	BGL_EXPORTED_DEF obj_t
		BGl_resetzd2globalz12zc0zzbackend_cplibz00(BgL_globalz00_bglt BgL_varz00_18)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 134 */
			{	/* BackEnd/cplib.scm 136 */
				obj_t BgL_namez00_951;

				{
					BgL_variablez00_bglt BgL_auxz00_1829;

					BgL_auxz00_1829 = (BgL_variablez00_bglt) (BgL_varz00_18);
					BgL_namez00_951 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_1829))->BgL_namez00);
				}
				if (STRINGP(BgL_namez00_951))
					{	/* BackEnd/cplib.scm 137 */
						BgL_namez00_951;
					}
				else
					{	/* BackEnd/cplib.scm 139 */
						obj_t BgL_namez00_953;

						{	/* BackEnd/cplib.scm 139 */
							obj_t BgL_arg3632z00_956;

							{
								BgL_variablez00_bglt BgL_auxz00_1834;

								BgL_auxz00_1834 = (BgL_variablez00_bglt) (BgL_varz00_18);
								BgL_arg3632z00_956 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_1834))->BgL_idz00);
							}
							{	/* BackEnd/cplib.scm 139 */
								obj_t BgL_res3776z00_1542;

								{	/* BackEnd/cplib.scm 139 */
									obj_t BgL_arg2063z00_1541;

									BgL_arg2063z00_1541 = SYMBOL_TO_STRING(BgL_arg3632z00_956);
									BgL_res3776z00_1542 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_1541);
								}
								BgL_namez00_953 = BgL_res3776z00_1542;
							}
						}
						{	/* BackEnd/cplib.scm 141 */
							obj_t BgL_arg3630z00_954;

							if (BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00
								(BgL_namez00_953))
								{	/* BackEnd/cplib.scm 141 */
									BgL_arg3630z00_954 = bigloo_mangle(BgL_namez00_953);
								}
							else
								{	/* BackEnd/cplib.scm 141 */
									BgL_arg3630z00_954 = BgL_namez00_953;
								}
							{
								BgL_variablez00_bglt BgL_auxz00_1842;

								BgL_auxz00_1842 = (BgL_variablez00_bglt) (BgL_varz00_18);
								((((BgL_variablez00_bglt) CREF(BgL_auxz00_1842))->BgL_namez00) =
									((obj_t) BgL_arg3630z00_954), BUNSPEC);
							}
						}
					}
			}
			{	/* BackEnd/cplib.scm 145 */
				BgL_valuez00_bglt BgL_valuez00_957;

				{
					BgL_variablez00_bglt BgL_auxz00_1845;

					BgL_auxz00_1845 = (BgL_variablez00_bglt) (BgL_varz00_18);
					BgL_valuez00_957 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_1845))->BgL_valuez00);
				}
				{	/* BackEnd/cplib.scm 146 */
					bool_t BgL_testz00_1848;

					{	/* BackEnd/cplib.scm 146 */
						bool_t BgL_testz00_1849;

						{	/* BackEnd/cplib.scm 146 */
							obj_t BgL_obj2049z00_1546;

							BgL_obj2049z00_1546 = (obj_t) (BgL_valuez00_957);
							BgL_testz00_1849 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj2049z00_1546,
								BGl_scnstz00zzast_varz00);
						}
						if (BgL_testz00_1849)
							{	/* BackEnd/cplib.scm 146 */
								obj_t BgL_auxz00_1852;

								{
									BgL_scnstz00_bglt BgL_auxz00_1853;

									BgL_auxz00_1853 = (BgL_scnstz00_bglt) (BgL_valuez00_957);
									BgL_auxz00_1852 =
										(((BgL_scnstz00_bglt) CREF(BgL_auxz00_1853))->BgL_classz00);
								}
								BgL_testz00_1848 =
									(BgL_auxz00_1852 == CNST_TABLE_REF(((long) 2)));
							}
						else
							{	/* BackEnd/cplib.scm 146 */
								BgL_testz00_1848 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_1848)
						{	/* BackEnd/cplib.scm 147 */
							obj_t BgL_arg3634z00_959;

							{	/* BackEnd/cplib.scm 147 */
								obj_t BgL_sz00_1550;

								{
									BgL_scnstz00_bglt BgL_auxz00_1858;

									BgL_auxz00_1858 = (BgL_scnstz00_bglt) (BgL_valuez00_957);
									BgL_sz00_1550 =
										(((BgL_scnstz00_bglt) CREF(BgL_auxz00_1858))->BgL_nodez00);
								}
								BgL_arg3634z00_959 =
									STRUCT_REF(BgL_sz00_1550, (int) (((long) 0)));
							}
							{
								BgL_typez00_bglt BgL_auxz00_1865;

								BgL_variablez00_bglt BgL_auxz00_1863;

								BgL_auxz00_1865 = (BgL_typez00_bglt) (BgL_arg3634z00_959);
								BgL_auxz00_1863 = (BgL_variablez00_bglt) (BgL_varz00_18);
								return
									((((BgL_variablez00_bglt) CREF(BgL_auxz00_1863))->
										BgL_typez00) =
									((BgL_typez00_bglt) BgL_auxz00_1865), BUNSPEC);
							}
						}
					else
						{	/* BackEnd/cplib.scm 146 */
							return BFALSE;
						}
				}
			}
		}
	}



/* _reset-global! */
	obj_t BGl__resetzd2globalz12zc0zzbackend_cplibz00(obj_t BgL_envz00_1632,
		obj_t BgL_varz00_1633)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 134 */
			return
				BGl_resetzd2globalz12zc0zzbackend_cplibz00(
				(BgL_globalz00_bglt) (BgL_varz00_1633));
		}
	}



/* set-variable-name! */
	BGL_EXPORTED_DEF obj_t
		BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(BgL_variablez00_bglt
		BgL_variablez00_19)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 152 */
			{	/* BackEnd/cplib.scm 154 */
				bool_t BgL_testz00_1870;

				{	/* BackEnd/cplib.scm 154 */
					obj_t BgL_auxz00_1871;

					BgL_auxz00_1871 =
						(((BgL_variablez00_bglt) CREF(BgL_variablez00_19))->BgL_namez00);
					BgL_testz00_1870 = STRINGP(BgL_auxz00_1871);
				}
				if (BgL_testz00_1870)
					{	/* BackEnd/cplib.scm 154 */
						return
							(((BgL_variablez00_bglt) CREF(BgL_variablez00_19))->BgL_namez00);
					}
				else
					{	/* BackEnd/cplib.scm 156 */
						obj_t BgL_nz00_966;

						{	/* BackEnd/cplib.scm 157 */
							bool_t BgL_testz00_1875;

							{	/* BackEnd/cplib.scm 157 */
								obj_t BgL_obj1751z00_1557;

								BgL_obj1751z00_1557 = (obj_t) (BgL_variablez00_19);
								BgL_testz00_1875 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_1557,
									BGl_globalz00zzast_varz00);
							}
							if (BgL_testz00_1875)
								{	/* BackEnd/cplib.scm 158 */
									BgL_globalz00_bglt BgL_instance3574z00_968;

									BgL_instance3574z00_968 =
										(BgL_globalz00_bglt) (BgL_variablez00_19);
									{	/* BackEnd/cplib.scm 159 */
										obj_t BgL_arg3641z00_969;

										obj_t BgL_arg3642z00_970;

										{	/* BackEnd/cplib.scm 159 */
											obj_t BgL_arg3643z00_971;

											{
												BgL_variablez00_bglt BgL_auxz00_1879;

												BgL_auxz00_1879 =
													(BgL_variablez00_bglt) (BgL_instance3574z00_968);
												BgL_arg3643z00_971 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_1879))->
													BgL_idz00);
											}
											{	/* BackEnd/cplib.scm 159 */
												obj_t BgL_res3777z00_1561;

												{	/* BackEnd/cplib.scm 159 */
													obj_t BgL_arg2063z00_1560;

													BgL_arg2063z00_1560 =
														SYMBOL_TO_STRING(BgL_arg3643z00_971);
													BgL_res3777z00_1561 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_1560);
												}
												BgL_arg3641z00_969 = BgL_res3777z00_1561;
											}
										}
										{	/* BackEnd/cplib.scm 160 */
											obj_t BgL_arg3644z00_972;

											BgL_arg3644z00_972 =
												(((BgL_globalz00_bglt) CREF(BgL_instance3574z00_968))->
												BgL_modulez00);
											{	/* BackEnd/cplib.scm 160 */
												obj_t BgL_res3778z00_1565;

												{	/* BackEnd/cplib.scm 160 */
													obj_t BgL_arg2063z00_1564;

													BgL_arg2063z00_1564 =
														SYMBOL_TO_STRING(BgL_arg3644z00_972);
													BgL_res3778z00_1565 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_1564);
												}
												BgL_arg3642z00_970 = BgL_res3778z00_1565;
											}
										}
										BgL_nz00_966 =
											bigloo_module_mangle(BgL_arg3641z00_969,
											BgL_arg3642z00_970);
									}
								}
							else
								{	/* BackEnd/cplib.scm 161 */
									bool_t BgL_testz00_1888;

									{	/* BackEnd/cplib.scm 161 */
										obj_t BgL_obj1812z00_1566;

										BgL_obj1812z00_1566 = (obj_t) (BgL_variablez00_19);
										BgL_testz00_1888 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj1812z00_1566,
											BGl_localz00zzast_varz00);
									}
									if (BgL_testz00_1888)
										{	/* BackEnd/cplib.scm 162 */
											BgL_localz00_bglt BgL_instance3576z00_974;

											BgL_instance3576z00_974 =
												(BgL_localz00_bglt) (BgL_variablez00_19);
											{	/* BackEnd/cplib.scm 164 */
												obj_t BgL_arg3646z00_975;

												{	/* BackEnd/cplib.scm 164 */
													obj_t BgL_arg3647z00_976;

													obj_t BgL_arg3649z00_978;

													{	/* BackEnd/cplib.scm 164 */
														obj_t BgL_arg3650z00_979;

														{
															BgL_variablez00_bglt BgL_auxz00_1892;

															BgL_auxz00_1892 =
																(BgL_variablez00_bglt)
																(BgL_instance3576z00_974);
															BgL_arg3650z00_979 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_auxz00_1892))->BgL_idz00);
														}
														{	/* BackEnd/cplib.scm 164 */
															obj_t BgL_res3779z00_1570;

															{	/* BackEnd/cplib.scm 164 */
																obj_t BgL_arg2063z00_1569;

																BgL_arg2063z00_1569 =
																	SYMBOL_TO_STRING(BgL_arg3650z00_979);
																BgL_res3779z00_1570 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_1569);
															}
															BgL_arg3647z00_976 = BgL_res3779z00_1570;
														}
													}
													{	/* BackEnd/cplib.scm 166 */

														BgL_arg3649z00_978 =
															BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
															((((BgL_localz00_bglt)
																	CREF(BgL_instance3576z00_974))->BgL_keyz00),
															((long) 10));
													}
													BgL_arg3646z00_975 =
														string_append_3(BgL_arg3647z00_976,
														BGl_string3786z00zzbackend_cplibz00,
														BgL_arg3649z00_978);
												}
												BgL_nz00_966 = bigloo_mangle(BgL_arg3646z00_975);
										}}
									else
										{	/* BackEnd/cplib.scm 161 */
											BgL_nz00_966 =
												BGl_internalzd2errorzd2zztools_errorz00
												(BGl_string3787z00zzbackend_cplibz00,
												BGl_string3788z00zzbackend_cplibz00,
												BGl_shapez00zztools_shapez00((obj_t)
													(BgL_variablez00_19)));
										}
								}
						}
						((((BgL_variablez00_bglt) CREF(BgL_variablez00_19))->BgL_namez00) =
							((obj_t) BgL_nz00_966), BUNSPEC);
						return BgL_nz00_966;
					}
			}
		}
	}



/* _set-variable-name! */
	obj_t BGl__setzd2variablezd2namez12z12zzbackend_cplibz00(obj_t
		BgL_envz00_1634, obj_t BgL_variablez00_1635)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 152 */
			return
				BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
				(BgL_variablez00_bglt) (BgL_variablez00_1635));
		}
	}



/* global-entry */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_globalzd2entryzd2zzbackend_cplibz00(BgL_globalz00_bglt BgL_varz00_20)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 177 */
			{	/* BackEnd/cplib.scm 179 */
				BgL_valuez00_bglt BgL_valuez00_987;

				{
					BgL_variablez00_bglt BgL_auxz00_1907;

					BgL_auxz00_1907 = (BgL_variablez00_bglt) (BgL_varz00_20);
					BgL_valuez00_987 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_1907))->BgL_valuez00);
				}
				{	/* BackEnd/cplib.scm 180 */
					bool_t BgL_testz00_1910;

					{	/* BackEnd/cplib.scm 180 */
						obj_t BgL_obj2049z00_1575;

						BgL_obj2049z00_1575 = (obj_t) (BgL_valuez00_987);
						BgL_testz00_1910 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj2049z00_1575,
							BGl_scnstz00zzast_varz00);
					}
					if (BgL_testz00_1910)
						{	/* BackEnd/cplib.scm 181 */
							BgL_varz00_bglt BgL_obj2155z00_1579;

							{	/* BackEnd/cplib.scm 181 */
								obj_t BgL_auxz00_1913;

								{	/* BackEnd/cplib.scm 181 */
									obj_t BgL_pairz00_1578;

									{	/* BackEnd/cplib.scm 181 */
										BgL_appz00_bglt BgL_obj2252z00_1577;

										{	/* BackEnd/cplib.scm 181 */
											BgL_scnstz00_bglt BgL_obj2030z00_1576;

											BgL_obj2030z00_1576 =
												(BgL_scnstz00_bglt) (BgL_valuez00_987);
											BgL_obj2252z00_1577 =
												(BgL_appz00_bglt) (
												(((BgL_scnstz00_bglt) CREF(BgL_obj2030z00_1576))->
													BgL_nodez00));
										}
										BgL_pairz00_1578 =
											(((BgL_appz00_bglt) CREF(BgL_obj2252z00_1577))->
											BgL_argsz00);
									}
									BgL_auxz00_1913 = CAR(BgL_pairz00_1578);
								}
								BgL_obj2155z00_1579 = (BgL_varz00_bglt) (BgL_auxz00_1913);
							}
							return
								(BgL_globalz00_bglt) (
								(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1579))->
									BgL_variablez00));
						}
					else
						{	/* BackEnd/cplib.scm 180 */
							return BgL_varz00_20;
						}
				}
			}
		}
	}



/* _global-entry */
	obj_t BGl__globalzd2entryzd2zzbackend_cplibz00(obj_t BgL_envz00_1636,
		obj_t BgL_varz00_1637)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 177 */
			return
				(obj_t) (BGl_globalzd2entryzd2zzbackend_cplibz00(
					(BgL_globalz00_bglt) (BgL_varz00_1637)));
		}
	}



/* global-arity */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2arityzd2zzbackend_cplibz00(BgL_globalz00_bglt BgL_varz00_21)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 187 */
			{	/* BackEnd/cplib.scm 189 */
				BgL_valuez00_bglt BgL_valuez00_992;

				{
					BgL_variablez00_bglt BgL_auxz00_1925;

					BgL_auxz00_1925 = (BgL_variablez00_bglt) (BgL_varz00_21);
					BgL_valuez00_992 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_1925))->BgL_valuez00);
				}
				{	/* BackEnd/cplib.scm 191 */
					bool_t BgL_testz00_1928;

					{	/* BackEnd/cplib.scm 191 */
						obj_t BgL_obj2049z00_1581;

						BgL_obj2049z00_1581 = (obj_t) (BgL_valuez00_992);
						BgL_testz00_1928 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj2049z00_1581,
							BGl_scnstz00zzast_varz00);
					}
					if (BgL_testz00_1928)
						{	/* BackEnd/cplib.scm 192 */
							obj_t BgL_arg3661z00_994;

							{	/* BackEnd/cplib.scm 192 */
								obj_t BgL_pairz00_1584;

								{	/* BackEnd/cplib.scm 192 */
									BgL_appz00_bglt BgL_obj2252z00_1583;

									{	/* BackEnd/cplib.scm 192 */
										BgL_scnstz00_bglt BgL_obj2030z00_1582;

										BgL_obj2030z00_1582 =
											(BgL_scnstz00_bglt) (BgL_valuez00_992);
										BgL_obj2252z00_1583 =
											(BgL_appz00_bglt) (
											(((BgL_scnstz00_bglt) CREF(BgL_obj2030z00_1582))->
												BgL_nodez00));
									}
									BgL_pairz00_1584 =
										(((BgL_appz00_bglt) CREF(BgL_obj2252z00_1583))->
										BgL_argsz00);
								}
								BgL_arg3661z00_994 = CAR(CDR(BgL_pairz00_1584));
							}
							return
								BGl_getzd2nodezd2atomzd2valuezd2zzcnst_nodez00(
								(BgL_nodez00_bglt) (BgL_arg3661z00_994));
						}
					else
						{	/* BackEnd/cplib.scm 193 */
							bool_t BgL_testz00_1939;

							{	/* BackEnd/cplib.scm 193 */
								obj_t BgL_obj1955z00_1588;

								BgL_obj1955z00_1588 = (obj_t) (BgL_valuez00_992);
								BgL_testz00_1939 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_1588,
									BGl_sfunz00zzast_varz00);
							}
							if (BgL_testz00_1939)
								{	/* BackEnd/cplib.scm 194 */
									long BgL_xz00_998;

									{
										BgL_funz00_bglt BgL_auxz00_1942;

										BgL_auxz00_1942 =
											(BgL_funz00_bglt) ((BgL_sfunz00_bglt) (BgL_valuez00_992));
										BgL_xz00_998 =
											(((BgL_funz00_bglt) CREF(BgL_auxz00_1942))->BgL_arityz00);
									}
									if ((BgL_xz00_998 >= ((long) 0)))
										{	/* BackEnd/cplib.scm 195 */
											return BINT((BgL_xz00_998 - ((long) 1)));
										}
									else
										{	/* BackEnd/cplib.scm 195 */
											return BINT((BgL_xz00_998 + ((long) 1)));
								}}
							else
								{	/* BackEnd/cplib.scm 193 */
									return BFALSE;
								}
						}
				}
			}
		}
	}



/* _global-arity */
	obj_t BGl__globalzd2arityzd2zzbackend_cplibz00(obj_t BgL_envz00_1638,
		obj_t BgL_varz00_1639)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 187 */
			return
				BGl_globalzd2arityzd2zzbackend_cplibz00(
				(BgL_globalz00_bglt) (BgL_varz00_1639));
		}
	}



/* for-each-declared-classes */
	BGL_EXPORTED_DEF obj_t
		BGl_forzd2eachzd2declaredzd2classeszd2zzbackend_cplibz00(obj_t
		BgL_funz00_22)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 202 */
			{	/* BackEnd/cplib.scm 203 */
				obj_t BgL_g3582z00_1000;

				BgL_g3582z00_1000 = BGl_getzd2declaredzd2classesz00zzbackend_cplibz00();
				{
					obj_t BgL_l3580z00_1002;

					{	/* BackEnd/cplib.scm 212 */
						bool_t BgL_auxz00_1955;

						BgL_l3580z00_1002 = BgL_g3582z00_1000;
					BgL_zc3anonymousza33666ze3z83_1003:
						if (PAIRP(BgL_l3580z00_1002))
							{	/* BackEnd/cplib.scm 212 */
								{	/* BackEnd/cplib.scm 204 */
									obj_t BgL_cz00_1005;

									BgL_cz00_1005 = CAR(BgL_l3580z00_1002);
									{	/* BackEnd/cplib.scm 204 */
										bool_t BgL_widezf3zf3_1006;

										BgL_widezf3zf3_1006 =
											BGl_widezd2classzf3z21zzobject_classz00(BgL_cz00_1005);
										{	/* BackEnd/cplib.scm 209 */
											obj_t BgL_arg3668z00_1007;

											obj_t BgL_arg3670z00_1008;

											if (BgL_widezf3zf3_1006)
												{	/* BackEnd/cplib.scm 209 */
													BgL_arg3668z00_1007 =
														BGl_widezd2ze3chunkz31zzbackend_cplibz00(
														(BgL_tclassz00_bglt) (BgL_cz00_1005));
												}
											else
												{	/* BackEnd/cplib.scm 209 */
													BgL_arg3668z00_1007 = BgL_cz00_1005;
												}
											if (BgL_widezf3zf3_1006)
												{	/* BackEnd/cplib.scm 211 */
													BgL_arg3670z00_1008 =
														(obj_t) (BGl_findzd2typezd2zztype_envz00
														(CNST_TABLE_REF(((long) 0))));
												}
											else
												{	/* BackEnd/cplib.scm 211 */
													BgL_tclassz00_bglt BgL_obj3291z00_1592;

													BgL_obj3291z00_1592 =
														(BgL_tclassz00_bglt) (BgL_cz00_1005);
													{
														obj_t BgL_auxz00_1968;

														{	/* BackEnd/cplib.scm 211 */
															BgL_objectz00_bglt BgL_auxz00_1969;

															BgL_auxz00_1969 =
																(BgL_objectz00_bglt) (BgL_obj3291z00_1592);
															BgL_auxz00_1968 =
																BGL_OBJECT_WIDENING(BgL_auxz00_1969);
														}
														BgL_arg3670z00_1008 =
															(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1968))->
															BgL_itszd2superzd2);
													}
												}
											PROCEDURE_ENTRY(BgL_funz00_22) (BgL_funz00_22,
												BgL_cz00_1005, BgL_arg3668z00_1007, BgL_arg3670z00_1008,
												BEOA);
										}
									}
								}
								{
									obj_t BgL_l3580z00_1975;

									BgL_l3580z00_1975 = CDR(BgL_l3580z00_1002);
									BgL_l3580z00_1002 = BgL_l3580z00_1975;
									goto BgL_zc3anonymousza33666ze3z83_1003;
								}
							}
						else
							{	/* BackEnd/cplib.scm 212 */
								BgL_auxz00_1955 = ((bool_t) 1);
							}
						return BBOOL(BgL_auxz00_1955);
					}
				}
			}
		}
	}



/* _for-each-declared-classes */
	obj_t BGl__forzd2eachzd2declaredzd2classeszd2zzbackend_cplibz00(obj_t
		BgL_envz00_1640, obj_t BgL_funz00_1641)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 202 */
			return
				BGl_forzd2eachzd2declaredzd2classeszd2zzbackend_cplibz00
				(BgL_funz00_1641);
		}
	}



/* get-declared-classes */
	BGL_EXPORTED_DEF obj_t BGl_getzd2declaredzd2classesz00zzbackend_cplibz00()
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 217 */
			{	/* BackEnd/cplib.scm 220 */
				obj_t BgL_rz00_1011;

				BgL_rz00_1011 = BNIL;
				{	/* BackEnd/cplib.scm 221 */
					obj_t BgL_g3585z00_1012;

					BgL_g3585z00_1012 = BGl_getzd2classzd2listz00zzobject_classz00();
					{
						obj_t BgL_l3583z00_1014;

						BgL_l3583z00_1014 = BgL_g3585z00_1012;
					BgL_zc3anonymousza33672ze3z83_1015:
						if (PAIRP(BgL_l3583z00_1014))
							{	/* BackEnd/cplib.scm 226 */
								{	/* BackEnd/cplib.scm 222 */
									obj_t BgL_cz00_1017;

									BgL_cz00_1017 = CAR(BgL_l3583z00_1014);
									{	/* BackEnd/cplib.scm 222 */
										bool_t BgL_testz00_1983;

										{	/* BackEnd/cplib.scm 222 */
											bool_t BgL_testz00_1984;

											{	/* BackEnd/cplib.scm 222 */
												obj_t BgL_auxz00_1985;

												{	/* BackEnd/cplib.scm 222 */
													BgL_globalz00_bglt BgL_obj1679z00_1597;

													{	/* BackEnd/cplib.scm 222 */
														BgL_tclassz00_bglt BgL_obj3297z00_1596;

														BgL_obj3297z00_1596 =
															(BgL_tclassz00_bglt) (BgL_cz00_1017);
														{
															obj_t BgL_auxz00_1987;

															{	/* BackEnd/cplib.scm 222 */
																BgL_objectz00_bglt BgL_auxz00_1988;

																BgL_auxz00_1988 =
																	(BgL_objectz00_bglt) (BgL_obj3297z00_1596);
																BgL_auxz00_1987 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_1988);
															}
															BgL_obj1679z00_1597 =
																(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1987))->
																BgL_holderz00);
														}
													}
													BgL_auxz00_1985 =
														(((BgL_globalz00_bglt) CREF(BgL_obj1679z00_1597))->
														BgL_importz00);
												}
												BgL_testz00_1984 =
													(BgL_auxz00_1985 == CNST_TABLE_REF(((long) 3)));
											}
											if (BgL_testz00_1984)
												{	/* BackEnd/cplib.scm 222 */
													BgL_testz00_1983 = ((bool_t) 1);
												}
											else
												{	/* BackEnd/cplib.scm 222 */
													BgL_testz00_1983 =
														(BgL_cz00_1017 ==
														BGl_getzd2objectzd2typez00zztype_cachez00());
												}
										}
										if (BgL_testz00_1983)
											{	/* BackEnd/cplib.scm 222 */
												BFALSE;
											}
										else
											{	/* BackEnd/cplib.scm 224 */
												obj_t BgL_arg3675z00_1019;

												if (BGl_widezd2classzf3z21zzobject_classz00
													(BgL_cz00_1017))
													{	/* BackEnd/cplib.scm 224 */
														BgL_arg3675z00_1019 =
															BGl_widezd2ze3chunkz31zzbackend_cplibz00(
															(BgL_tclassz00_bglt) (BgL_cz00_1017));
													}
												else
													{	/* BackEnd/cplib.scm 224 */
														BgL_arg3675z00_1019 = BgL_cz00_1017;
													}
												BgL_rz00_1011 =
													MAKE_PAIR(BgL_arg3675z00_1019, BgL_rz00_1011);
											}
									}
								}
								{
									obj_t BgL_l3583z00_2002;

									BgL_l3583z00_2002 = CDR(BgL_l3583z00_1014);
									BgL_l3583z00_1014 = BgL_l3583z00_2002;
									goto BgL_zc3anonymousza33672ze3z83_1015;
								}
							}
						else
							{	/* BackEnd/cplib.scm 226 */
								((bool_t) 1);
							}
					}
				}
				return BgL_rz00_1011;
			}
		}
	}



/* _get-declared-classes */
	obj_t BGl__getzd2declaredzd2classesz00zzbackend_cplibz00(obj_t
		BgL_envz00_1642)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 217 */
			return BGl_getzd2declaredzd2classesz00zzbackend_cplibz00();
		}
	}



/* type->class */
	obj_t BGl_typezd2ze3classz31zzbackend_cplibz00(BgL_typez00_bglt
		BgL_typez00_23)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 232 */
			{	/* BackEnd/cplib.scm 234 */
				bool_t BgL_testz00_2005;

				{	/* BackEnd/cplib.scm 234 */
					obj_t BgL_obj3290z00_1599;

					BgL_obj3290z00_1599 = (obj_t) (BgL_typez00_23);
					BgL_testz00_2005 =
						BGl_iszd2azf3z21zz__objectz00(BgL_obj3290z00_1599,
						BGl_tclassz00zzobject_classz00);
				}
				if (BgL_testz00_2005)
					{	/* BackEnd/cplib.scm 234 */
						return (obj_t) ((BgL_tclassz00_bglt) (BgL_typez00_23));
					}
				else
					{	/* BackEnd/cplib.scm 236 */
						bool_t BgL_testz00_2010;

						{	/* BackEnd/cplib.scm 236 */
							obj_t BgL_obj3460z00_1600;

							BgL_obj3460z00_1600 = (obj_t) (BgL_typez00_23);
							BgL_testz00_2010 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj3460z00_1600,
								BGl_wclassz00zzobject_classz00);
						}
						if (BgL_testz00_2010)
							{	/* BackEnd/cplib.scm 237 */
								BgL_wclassz00_bglt BgL_obj3461z00_1601;

								BgL_obj3461z00_1601 = (BgL_wclassz00_bglt) (BgL_typez00_23);
								{
									obj_t BgL_auxz00_2014;

									{	/* BackEnd/cplib.scm 237 */
										BgL_objectz00_bglt BgL_auxz00_2015;

										BgL_auxz00_2015 =
											(BgL_objectz00_bglt) (BgL_obj3461z00_1601);
										BgL_auxz00_2014 = BGL_OBJECT_WIDENING(BgL_auxz00_2015);
									}
									return
										(((BgL_wclassz00_bglt) CREF(BgL_auxz00_2014))->
										BgL_itszd2classzd2);
								}
							}
						else
							{	/* BackEnd/cplib.scm 236 */
								return
									BGl_internalzd2errorzd2zztools_errorz00(CNST_TABLE_REF(((long)
											4)), BGl_string3789z00zzbackend_cplibz00,
									(obj_t) (BgL_typez00_23));
		}}}}
	}



/* get-its-super */
	BGL_EXPORTED_DEF BgL_tclassz00_bglt
		BGl_getzd2itszd2superz00zzbackend_cplibz00(BgL_typez00_bglt BgL_typez00_24)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 244 */
			{	/* BackEnd/cplib.scm 245 */
				obj_t BgL_arg3685z00_1602;

				BgL_arg3685z00_1602 =
					BGl_typezd2ze3classz31zzbackend_cplibz00(BgL_typez00_24);
				{	/* BackEnd/cplib.scm 245 */
					BgL_tclassz00_bglt BgL_obj3291z00_1603;

					BgL_obj3291z00_1603 = (BgL_tclassz00_bglt) (BgL_arg3685z00_1602);
					{	/* BackEnd/cplib.scm 245 */
						obj_t BgL_auxz00_2024;

						{
							obj_t BgL_auxz00_2025;

							{	/* BackEnd/cplib.scm 245 */
								BgL_objectz00_bglt BgL_auxz00_2026;

								BgL_auxz00_2026 = (BgL_objectz00_bglt) (BgL_obj3291z00_1603);
								BgL_auxz00_2025 = BGL_OBJECT_WIDENING(BgL_auxz00_2026);
							}
							BgL_auxz00_2024 =
								(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2025))->
								BgL_itszd2superzd2);
						}
						return (BgL_tclassz00_bglt) (BgL_auxz00_2024);
					}
				}
			}
		}
	}



/* _get-its-super */
	obj_t BGl__getzd2itszd2superz00zzbackend_cplibz00(obj_t BgL_envz00_1643,
		obj_t BgL_typez00_1644)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 244 */
			return
				(obj_t) (BGl_getzd2itszd2superz00zzbackend_cplibz00(
					(BgL_typez00_bglt) (BgL_typez00_1644)));
		}
	}



/* get-declared-fields */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2declaredzd2fieldsz00zzbackend_cplibz00(BgL_typez00_bglt
		BgL_typez00_25)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 250 */
			{	/* BackEnd/cplib.scm 252 */
				obj_t BgL_classz00_1031;

				BgL_classz00_1031 =
					BGl_typezd2ze3classz31zzbackend_cplibz00(BgL_typez00_25);
				{	/* BackEnd/cplib.scm 253 */
					obj_t BgL_arg3687z00_1033;

					{	/* BackEnd/cplib.scm 256 */
						BgL_tclassz00_bglt BgL_obj3294z00_1604;

						BgL_obj3294z00_1604 = (BgL_tclassz00_bglt) (BgL_classz00_1031);
						{
							obj_t BgL_auxz00_2036;

							{	/* BackEnd/cplib.scm 256 */
								BgL_objectz00_bglt BgL_auxz00_2037;

								BgL_auxz00_2037 = (BgL_objectz00_bglt) (BgL_obj3294z00_1604);
								BgL_auxz00_2036 = BGL_OBJECT_WIDENING(BgL_auxz00_2037);
							}
							BgL_arg3687z00_1033 =
								(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2036))->BgL_slotsz00);
						}
					}
					{	/* BackEnd/cplib.scm 254 */
						obj_t BgL_zc3anonymousza33688ze3z83_1645;

						BgL_zc3anonymousza33688ze3z83_1645 =
							make_fx_procedure(BGl_zc3anonymousza33688ze3z83zzbackend_cplibz00,
							(int) (((long) 1)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3anonymousza33688ze3z83_1645,
							(int) (((long) 0)), BgL_classz00_1031);
						return
							BGl_filterz00zz__r4_control_features_6_9z00
							(BgL_zc3anonymousza33688ze3z83_1645, BgL_arg3687z00_1033);
					}
				}
			}
		}
	}



/* _get-declared-fields */
	obj_t BGl__getzd2declaredzd2fieldsz00zzbackend_cplibz00(obj_t BgL_envz00_1646,
		obj_t BgL_typez00_1647)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 250 */
			return
				BGl_getzd2declaredzd2fieldsz00zzbackend_cplibz00(
				(BgL_typez00_bglt) (BgL_typez00_1647));
		}
	}



/* <anonymous:3688> */
	obj_t BGl_zc3anonymousza33688ze3z83zzbackend_cplibz00(obj_t BgL_envz00_1648,
		obj_t BgL_slotz00_1650)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 253 */
			{	/* BackEnd/cplib.scm 254 */
				obj_t BgL_classz00_1649;

				BgL_classz00_1649 = PROCEDURE_REF(BgL_envz00_1648, (int) (((long) 0)));
				{
					BgL_slotz00_bglt BgL_slotz00_1034;

					{	/* BackEnd/cplib.scm 254 */
						bool_t BgL_auxz00_2051;

						BgL_slotz00_1034 = (BgL_slotz00_bglt) (BgL_slotz00_1650);
						{	/* BackEnd/cplib.scm 254 */
							bool_t BgL_testz00_2052;

							if (BGl_slotzd2virtualzf3z21zzobject_slotsz00(BgL_slotz00_1034))
								{	/* BackEnd/cplib.scm 254 */
									BgL_testz00_2052 = ((bool_t) 0);
								}
							else
								{	/* BackEnd/cplib.scm 254 */
									BgL_testz00_2052 = ((bool_t) 1);
								}
							if (BgL_testz00_2052)
								{	/* BackEnd/cplib.scm 254 */
									BgL_auxz00_2051 =
										(BgL_classz00_1649 ==
										(((BgL_slotz00_bglt) CREF(BgL_slotz00_1034))->
											BgL_classzd2ownerzd2));
								}
							else
								{	/* BackEnd/cplib.scm 254 */
									BgL_auxz00_2051 = ((bool_t) 0);
								}
						}
						return BBOOL(BgL_auxz00_2051);
					}
				}
			}
		}
	}



/* get-field-type */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2fieldzd2typez00zzbackend_cplibz00(BgL_slotz00_bglt BgL_slotz00_26)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 261 */
			{	/* BackEnd/cplib.scm 263 */
				obj_t BgL__ortest_3579z00_1606;

				BgL__ortest_3579z00_1606 =
					(((BgL_slotz00_bglt) CREF(BgL_slotz00_26))->BgL_indexedz00);
				if (CBOOL(BgL__ortest_3579z00_1606))
					{	/* BackEnd/cplib.scm 263 */
						return BgL__ortest_3579z00_1606;
					}
				else
					{	/* BackEnd/cplib.scm 263 */
						return (((BgL_slotz00_bglt) CREF(BgL_slotz00_26))->BgL_typez00);
					}
			}
		}
	}



/* _get-field-type */
	obj_t BGl__getzd2fieldzd2typez00zzbackend_cplibz00(obj_t BgL_envz00_1651,
		obj_t BgL_slotz00_1652)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 261 */
			return
				BGl_getzd2fieldzd2typez00zzbackend_cplibz00(
				(BgL_slotz00_bglt) (BgL_slotz00_1652));
		}
	}



/* wide->chunk */
	BGL_EXPORTED_DEF obj_t
		BGl_widezd2ze3chunkz31zzbackend_cplibz00(BgL_tclassz00_bglt BgL_cz00_27)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 268 */
			{	/* BackEnd/cplib.scm 272 */
				bool_t BgL_testz00_2065;

				{	/* BackEnd/cplib.scm 272 */
					BgL_typez00_bglt BgL_arg3692z00_1042;

					obj_t BgL_arg3693z00_1043;

					{	/* BackEnd/cplib.scm 272 */
						obj_t BgL_arg3694z00_1044;

						{	/* BackEnd/cplib.scm 272 */
							obj_t BgL_arg3695z00_1045;

							{
								BgL_typez00_bglt BgL_auxz00_2066;

								BgL_auxz00_2066 = (BgL_typez00_bglt) (BgL_cz00_27);
								BgL_arg3695z00_1045 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_2066))->BgL_idz00);
							}
							BgL_arg3694z00_1044 =
								BGl_sawzd2widezd2classzd2idzd2zzobject_classz00
								(BgL_arg3695z00_1045);
						}
						BgL_arg3692z00_1042 =
							BGl_findzd2typezd2zztype_envz00(BgL_arg3694z00_1044);
					}
					{
						obj_t BgL_auxz00_2071;

						{	/* BackEnd/cplib.scm 273 */
							BgL_objectz00_bglt BgL_auxz00_2072;

							BgL_auxz00_2072 = (BgL_objectz00_bglt) (BgL_cz00_27);
							BgL_auxz00_2071 = BGL_OBJECT_WIDENING(BgL_auxz00_2072);
						}
						BgL_arg3693z00_1043 =
							(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2071))->
							BgL_widezd2typezd2);
					}
					BgL_testz00_2065 =
						((obj_t) (BgL_arg3692z00_1042) == BgL_arg3693z00_1043);
				}
				if (BgL_testz00_2065)
					{
						obj_t BgL_auxz00_2078;

						{	/* BackEnd/cplib.scm 275 */
							BgL_objectz00_bglt BgL_auxz00_2079;

							BgL_auxz00_2079 = (BgL_objectz00_bglt) (BgL_cz00_27);
							BgL_auxz00_2078 = BGL_OBJECT_WIDENING(BgL_auxz00_2079);
						}
						return
							(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2078))->
							BgL_widezd2typezd2);
					}
				else
					{	/* BackEnd/cplib.scm 272 */
						return
							BGl_errorz00zz__errorz00(BGl_string3790z00zzbackend_cplibz00,
							BGl_string3791z00zzbackend_cplibz00, (obj_t) (BgL_cz00_27));
					}
			}
		}
	}



/* _wide->chunk */
	obj_t BGl__widezd2ze3chunkz31zzbackend_cplibz00(obj_t BgL_envz00_1653,
		obj_t BgL_cz00_1654)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 268 */
			return
				BGl_widezd2ze3chunkz31zzbackend_cplibz00(
				(BgL_tclassz00_bglt) (BgL_cz00_1654));
		}
	}



/* get-declared-global-variables */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2declaredzd2globalzd2variableszd2zzbackend_cplibz00(obj_t
		BgL_modulez00_28)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 280 */
			{	/* BackEnd/cplib.scm 282 */
				obj_t BgL_rz00_1046;

				BgL_rz00_1046 = MAKE_CELL(BNIL);
				{	/* BackEnd/cplib.scm 284 */
					obj_t BgL_zc3anonymousza33698ze3z83_1655;

					BgL_zc3anonymousza33698ze3z83_1655 =
						make_fx_procedure(BGl_zc3anonymousza33698ze3z83zzbackend_cplibz00,
						(int) (((long) 1)), (int) (((long) 2)));
					PROCEDURE_SET(BgL_zc3anonymousza33698ze3z83_1655,
						(int) (((long) 0)), BgL_rz00_1046);
					PROCEDURE_SET(BgL_zc3anonymousza33698ze3z83_1655,
						(int) (((long) 1)), BgL_modulez00_28);
					BGl_forzd2eachzd2globalz12z12zzast_envz00
						(BgL_zc3anonymousza33698ze3z83_1655, BNIL);
				}
				return CELL_REF(BgL_rz00_1046);
			}
		}
	}



/* _get-declared-global-variables */
	obj_t BGl__getzd2declaredzd2globalzd2variableszd2zzbackend_cplibz00(obj_t
		BgL_envz00_1656, obj_t BgL_modulez00_1657)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 280 */
			return
				BGl_getzd2declaredzd2globalzd2variableszd2zzbackend_cplibz00
				(BgL_modulez00_1657);
		}
	}



/* <anonymous:3698> */
	obj_t BGl_zc3anonymousza33698ze3z83zzbackend_cplibz00(obj_t BgL_envz00_1658,
		obj_t BgL_vz00_1661)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 283 */
			{	/* BackEnd/cplib.scm 284 */
				obj_t BgL_rz00_1659;

				obj_t BgL_modulez00_1660;

				BgL_rz00_1659 = PROCEDURE_REF(BgL_envz00_1658, (int) (((long) 0)));
				BgL_modulez00_1660 = PROCEDURE_REF(BgL_envz00_1658, (int) (((long) 1)));
				{
					obj_t BgL_vz00_1049;

					BgL_vz00_1049 = BgL_vz00_1661;
					{	/* BackEnd/cplib.scm 284 */
						bool_t BgL_testz00_2100;

						{	/* BackEnd/cplib.scm 284 */
							bool_t BgL_testz00_2101;

							{	/* BackEnd/cplib.scm 284 */
								obj_t BgL_auxz00_2102;

								{
									BgL_globalz00_bglt BgL_auxz00_2103;

									BgL_auxz00_2103 = (BgL_globalz00_bglt) (BgL_vz00_1049);
									BgL_auxz00_2102 =
										(((BgL_globalz00_bglt) CREF(BgL_auxz00_2103))->
										BgL_modulez00);
								}
								BgL_testz00_2101 = (BgL_auxz00_2102 == BgL_modulez00_1660);
							}
							if (BgL_testz00_2101)
								{	/* BackEnd/cplib.scm 285 */
									bool_t BgL_testz00_2107;

									{	/* BackEnd/cplib.scm 285 */
										BgL_valuez00_bglt BgL_arg3707z00_1059;

										{
											BgL_variablez00_bglt BgL_auxz00_2108;

											BgL_auxz00_2108 = (BgL_variablez00_bglt) (BgL_vz00_1049);
											BgL_arg3707z00_1059 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_2108))->
												BgL_valuez00);
										}
										{	/* BackEnd/cplib.scm 285 */
											obj_t BgL_obj2019z00_1614;

											BgL_obj2019z00_1614 = (obj_t) (BgL_arg3707z00_1059);
											BgL_testz00_2107 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj2019z00_1614,
												BGl_cfunz00zzast_varz00);
										}
									}
									if (BgL_testz00_2107)
										{	/* BackEnd/cplib.scm 285 */
											BgL_testz00_2100 = ((bool_t) 0);
										}
									else
										{	/* BackEnd/cplib.scm 286 */
											bool_t BgL_testz00_2113;

											{	/* BackEnd/cplib.scm 286 */
												BgL_valuez00_bglt BgL_arg3706z00_1058;

												{
													BgL_variablez00_bglt BgL_auxz00_2114;

													BgL_auxz00_2114 =
														(BgL_variablez00_bglt) (BgL_vz00_1049);
													BgL_arg3706z00_1058 =
														(((BgL_variablez00_bglt) CREF(BgL_auxz00_2114))->
														BgL_valuez00);
												}
												{	/* BackEnd/cplib.scm 286 */
													obj_t BgL_obj1955z00_1616;

													BgL_obj1955z00_1616 = (obj_t) (BgL_arg3706z00_1058);
													BgL_testz00_2113 =
														BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_1616,
														BGl_sfunz00zzast_varz00);
												}
											}
											if (BgL_testz00_2113)
												{	/* BackEnd/cplib.scm 286 */
													BgL_testz00_2100 = ((bool_t) 0);
												}
											else
												{	/* BackEnd/cplib.scm 287 */
													bool_t BgL_testz00_2119;

													{	/* BackEnd/cplib.scm 287 */
														obj_t BgL_auxz00_2120;

														{
															BgL_variablez00_bglt BgL_auxz00_2121;

															BgL_auxz00_2121 =
																(BgL_variablez00_bglt) (BgL_vz00_1049);
															BgL_auxz00_2120 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_auxz00_2121))->BgL_idz00);
														}
														BgL_testz00_2119 =
															(BgL_auxz00_2120 == CNST_TABLE_REF(((long) 5)));
													}
													if (BgL_testz00_2119)
														{	/* BackEnd/cplib.scm 287 */
															BgL_testz00_2100 = ((bool_t) 0);
														}
													else
														{	/* BackEnd/cplib.scm 287 */
															BgL_testz00_2100 = ((bool_t) 1);
														}
												}
										}
								}
							else
								{	/* BackEnd/cplib.scm 284 */
									BgL_testz00_2100 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_2100)
							{	/* BackEnd/cplib.scm 288 */
								obj_t BgL_auxz00_1662;

								BgL_auxz00_1662 =
									MAKE_PAIR(BgL_vz00_1049, CELL_REF(BgL_rz00_1659));
								return CELL_SET(BgL_rz00_1659, BgL_auxz00_1662);
							}
						else
							{	/* BackEnd/cplib.scm 284 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* get-global-variables-to-be-initialized */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2globalzd2variableszd2tozd2bezd2initializa7edz75zzbackend_cplibz00
		(obj_t BgL_modulez00_29)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 294 */
			{	/* BackEnd/cplib.scm 296 */
				obj_t BgL_rz00_1062;

				BgL_rz00_1062 = MAKE_CELL(BNIL);
				{	/* BackEnd/cplib.scm 298 */
					obj_t BgL_zc3anonymousza33711ze3z83_1663;

					BgL_zc3anonymousza33711ze3z83_1663 =
						make_fx_procedure(BGl_zc3anonymousza33711ze3z83zzbackend_cplibz00,
						(int) (((long) 1)), (int) (((long) 2)));
					PROCEDURE_SET(BgL_zc3anonymousza33711ze3z83_1663,
						(int) (((long) 0)), BgL_rz00_1062);
					PROCEDURE_SET(BgL_zc3anonymousza33711ze3z83_1663,
						(int) (((long) 1)), BgL_modulez00_29);
					BGl_forzd2eachzd2globalz12z12zzast_envz00
						(BgL_zc3anonymousza33711ze3z83_1663, BNIL);
				}
				return CELL_REF(BgL_rz00_1062);
			}
		}
	}



/* _get-global-variables-to-be-initialized */
	obj_t
		BGl__getzd2globalzd2variableszd2tozd2bezd2initializa7edz75zzbackend_cplibz00
		(obj_t BgL_envz00_1664, obj_t BgL_modulez00_1665)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 294 */
			return
				BGl_getzd2globalzd2variableszd2tozd2bezd2initializa7edz75zzbackend_cplibz00
				(BgL_modulez00_1665);
		}
	}



/* <anonymous:3711> */
	obj_t BGl_zc3anonymousza33711ze3z83zzbackend_cplibz00(obj_t BgL_envz00_1666,
		obj_t BgL_globalz00_1669)
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 297 */
			{	/* BackEnd/cplib.scm 298 */
				obj_t BgL_rz00_1667;

				obj_t BgL_modulez00_1668;

				BgL_rz00_1667 = PROCEDURE_REF(BgL_envz00_1666, (int) (((long) 0)));
				BgL_modulez00_1668 = PROCEDURE_REF(BgL_envz00_1666, (int) (((long) 1)));
				{
					obj_t BgL_globalz00_1065;

					BgL_globalz00_1065 = BgL_globalz00_1669;
					{	/* BackEnd/cplib.scm 298 */
						bool_t BgL_testz00_2140;

						{	/* BackEnd/cplib.scm 298 */
							bool_t BgL_testz00_2141;

							{	/* BackEnd/cplib.scm 298 */
								obj_t BgL_auxz00_2142;

								{
									BgL_globalz00_bglt BgL_auxz00_2143;

									BgL_auxz00_2143 = (BgL_globalz00_bglt) (BgL_globalz00_1065);
									BgL_auxz00_2142 =
										(((BgL_globalz00_bglt) CREF(BgL_auxz00_2143))->
										BgL_modulez00);
								}
								BgL_testz00_2141 = (BgL_auxz00_2142 == BgL_modulez00_1668);
							}
							if (BgL_testz00_2141)
								{	/* BackEnd/cplib.scm 298 */
									if (BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00(
											(BgL_globalz00_bglt) (BgL_globalz00_1065)))
										{	/* BackEnd/cplib.scm 301 */
											BgL_valuez00_bglt BgL_arg3715z00_1070;

											{
												BgL_variablez00_bglt BgL_auxz00_2150;

												BgL_auxz00_2150 =
													(BgL_variablez00_bglt) (BgL_globalz00_1065);
												BgL_arg3715z00_1070 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_2150))->
													BgL_valuez00);
											}
											{	/* BackEnd/cplib.scm 301 */
												obj_t BgL_obj2049z00_1620;

												BgL_obj2049z00_1620 = (obj_t) (BgL_arg3715z00_1070);
												BgL_testz00_2140 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj2049z00_1620,
													BGl_scnstz00zzast_varz00);
											}
										}
									else
										{	/* BackEnd/cplib.scm 300 */
											BgL_testz00_2140 = ((bool_t) 0);
										}
								}
							else
								{	/* BackEnd/cplib.scm 298 */
									BgL_testz00_2140 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_2140)
							{	/* BackEnd/cplib.scm 302 */
								obj_t BgL_auxz00_1670;

								BgL_auxz00_1670 =
									MAKE_PAIR(BgL_globalz00_1065, CELL_REF(BgL_rz00_1667));
								return CELL_SET(BgL_rz00_1667, BgL_auxz00_1670);
							}
						else
							{	/* BackEnd/cplib.scm 298 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_cplibz00()
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_cplibz00()
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_cplibz00()
	{
		AN_OBJECT;
		{	/* BackEnd/cplib.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3792z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3792z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string3792z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3792z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3792z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3792z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3792z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zzcnst_nodez00(((long) 110472871),
				BSTRING_TO_STRING(BGl_string3792z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3792z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string3792z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 143212498),
				BSTRING_TO_STRING(BGl_string3792z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zzmodule_javaz00(((long) 198447312),
				BSTRING_TO_STRING(BGl_string3792z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3792z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(((long)
					14608757), BSTRING_TO_STRING(BGl_string3792z00zzbackend_cplibz00));
			return BGl_modulezd2initializa7ationz75zztools_errorz00(((long)
					139755433), BSTRING_TO_STRING(BGl_string3792z00zzbackend_cplibz00));
		}
	}

#ifdef __cplusplus
}
#endif
