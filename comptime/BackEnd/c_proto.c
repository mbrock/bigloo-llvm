/*===========================================================================*/
/*   (BackEnd/c_proto.scm)                                                   */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/c_proto.scm)*/
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

	typedef struct BgL_tvecz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}              *BgL_tvecz00_bglt;


	static obj_t BGl_emitzd2cnstzd2realz00zzbackend_c_prototypez00(obj_t,
		BgL_globalz00_bglt);
	static obj_t BGl__emitzd2cnstszd2zzbackend_c_prototypez00(obj_t);
	BGL_IMPORT obj_t bgl_display_fixnum(obj_t, obj_t);
	static obj_t BGl_emitzd2cnstzd2stvectorz00zzbackend_c_prototypez00(obj_t,
		BgL_globalz00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_getzd2objectzd2typez00zztype_cachez00();
	static obj_t
		BGl_emitzd2prototypezd2scnst4280z00zzbackend_c_prototypez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_svarz00zzast_varz00;
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	static obj_t BGl_emitzd2cnstzd2llongz00zzbackend_c_prototypez00(obj_t,
		BgL_globalz00_bglt);
	extern obj_t BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzbackend_c_prototypez00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_emitzd2prototypezd2formalsz00zzbackend_c_prototypez00(obj_t);
	extern obj_t BGl_variablez00zzast_varz00;
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_emitzd2copzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_copz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_allocz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_cnstz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzbackend_c_prototypez00();
	extern obj_t
		BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(BgL_variablez00_bglt);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	static obj_t BGl_getzd2czd2scopezd2local4292zd2zzbackend_c_prototypez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_emitzd2prototypeszd2zzbackend_c_prototypez00();
	BGL_EXPORTED_DECL obj_t
		BGl_emitzd2classzd2typesz00zzbackend_c_prototypez00(obj_t, obj_t);
	extern obj_t BGl_tvectorzd2ze3czd2vectorze3zztvector_cnstz00(obj_t);
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	static obj_t BGl_emitzd2prototypezd2sfun4282z00zzbackend_c_prototypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_loopz00zzbackend_c_prototypez00(long, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_cvarz00zzast_varz00;
	extern obj_t BGl_valuez00zzast_varz00;
	static obj_t BGl_emitzd2prototypezd2svar4278z00zzbackend_c_prototypez00(obj_t,
		obj_t, obj_t);
	extern bool_t BGl_globalzd2optionalzf3z21zzast_varz00(obj_t);
	extern obj_t BGl_untrigraphz00zzbackend_c_emitz00(obj_t);
	static obj_t BGl_emitzd2prototypezd2cfun4284z00zzbackend_c_prototypez00(obj_t,
		obj_t, obj_t);
	extern bool_t BGl_subzd2typezf3z21zztype_envz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_loopz72z72zzbackend_c_prototypez00(obj_t);
	extern obj_t
		BGl_makezd2typedzd2declarationz00zztype_toolsz00(BgL_typez00_bglt, obj_t);
	extern obj_t BGl_llongzd2ze3czd2isoze3zzbackend_c_emitz00(BGL_LONGLONG_T);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_emitzd2prototypezd2cvar4286z00zzbackend_c_prototypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_emitzd2cnstzd2stringz00zzbackend_c_prototypez00(obj_t,
		BgL_globalz00_bglt);
	extern obj_t BGl_idzd2ze3namez31zzast_identz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzbackend_c_prototypez00();
	static obj_t
		BGl__getzd2czd2scopezd2default4287zd2zzbackend_c_prototypez00(obj_t, obj_t);
	extern obj_t BGl_typezd2namezd2sanszd2z42z90zztype_toolsz00(BgL_typez00_bglt);
	static obj_t BGl_emitzd2cnstzd2zzbackend_c_prototypez00(BgL_scnstz00_bglt,
		BgL_globalz00_bglt);
	extern obj_t BGl_za2maxzd2czd2tokenzd2lengthza2zd2zzengine_paramz00;
	extern obj_t BGl_typezd2classzd2namez00zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_crosszd2namezd2zzbackend_c_prototypez00(obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_c_prototypez00 =
		BUNSPEC;
	static obj_t BGl__emitzd2classzd2typesz00zzbackend_c_prototypez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_getzd2nodezd2atomzd2valuezd2zzcnst_nodez00(BgL_nodez00_bglt);
	extern obj_t BGl_scnstz00zzast_varz00;
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_genericzd2initzd2zzbackend_c_prototypez00();
	static obj_t
		BGl_getzd2czd2scopezd2default4287zd2zzbackend_c_prototypez00
		(BgL_variablez00_bglt);
	static obj_t
		BGl_emitzd2prototypezd2zzbackend_c_prototypez00(BgL_valuez00_bglt,
		BgL_variablez00_bglt);
	static obj_t
		BGl_getzd2czd2scopezd2global4290zd2zzbackend_c_prototypez00(obj_t, obj_t);
	BGL_IMPORT obj_t string_for_read(obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_emitzd2tvectorzd2typesz00zztvector_tvectorz00(obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t
		BGl_emitzd2prototypezd2defau4275z00zzbackend_c_prototypez00
		(BgL_valuez00_bglt, BgL_variablez00_bglt);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_loopz72z72z00zzbackend_c_prototypez00(obj_t);
	extern obj_t BGl_za2czd2splitzd2stringza2z00zzengine_paramz00;
	static obj_t BGl_emitzd2cnstzd2sfunzf2sgfunzf2zzbackend_c_prototypez00(obj_t,
		BgL_globalz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_emitzd2cnstszd2zzbackend_c_prototypez00();
	static obj_t
		BGl_getzd2czd2scopez00zzbackend_c_prototypez00(BgL_variablez00_bglt);
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_c_prototypez00();
	static obj_t BGl_emitzd2cnstzd2elongz00zzbackend_c_prototypez00(obj_t,
		BgL_globalz00_bglt);
	static obj_t BGl_zc3anonymousza34317ze3z83zzbackend_c_prototypez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34326ze3z83zzbackend_c_prototypez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	extern obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t);
	static obj_t
		BGl_emitzd2prototypezd2formalzd2typeszd2zzbackend_c_prototypez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_za2czd2portza2zd2zzbackend_c_emitz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	static obj_t BGl__getzd2czd2scopez00zzbackend_c_prototypez00(obj_t, obj_t);
	static obj_t BGl__emitzd2prototypeszd2zzbackend_c_prototypez00(obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl__requirezd2prototypezf3z21zzbackend_c_prototypez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t
		BGl__emitzd2prototypezd2defau4275z00zzbackend_c_prototypez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00(BgL_globalz00_bglt);
	extern bool_t BGl_globalzd2keyzf3z21zzast_varz00(obj_t);
	static obj_t
		BGl_emitzd2prototypezf2svarzf2scnstzd2zzbackend_c_prototypez00(obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_c_prototypez00();
	static obj_t BGl__emitzd2prototypezd2zzbackend_c_prototypez00(obj_t, obj_t,
		obj_t);
	static obj_t __cnst[16];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4697z00zzbackend_c_prototypez00,
		BgL_bgl_za7c3anonymousza7a344775z00,
		BGl_zc3anonymousza34317ze3z83zzbackend_c_prototypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4698z00zzbackend_c_prototypez00,
		BgL_bgl_za7c3anonymousza7a344776z00,
		BGl_zc3anonymousza34326ze3z83zzbackend_c_prototypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4756z00zzbackend_c_prototypez00,
		BgL_bgl_emitza7d2prototype4777za7,
		BGl_emitzd2prototypezd2svar4278z00zzbackend_c_prototypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4757z00zzbackend_c_prototypez00,
		BgL_bgl_emitza7d2prototype4778za7,
		BGl_emitzd2prototypezd2scnst4280z00zzbackend_c_prototypez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4758z00zzbackend_c_prototypez00,
		BgL_bgl_emitza7d2prototype4779za7,
		BGl_emitzd2prototypezd2sfun4282z00zzbackend_c_prototypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4760z00zzbackend_c_prototypez00,
		BgL_bgl_emitza7d2prototype4780za7,
		BGl_emitzd2prototypezd2cvar4286z00zzbackend_c_prototypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4759z00zzbackend_c_prototypez00,
		BgL_bgl_emitza7d2prototype4781za7,
		BGl_emitzd2prototypezd2cfun4284z00zzbackend_c_prototypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4761z00zzbackend_c_prototypez00,
		BgL_bgl_getza7d2cza7d2scopeza74782za7,
		BGl_getzd2czd2scopezd2global4290zd2zzbackend_c_prototypez00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4762z00zzbackend_c_prototypez00,
		BgL_bgl_getza7d2cza7d2scopeza74783za7,
		BGl_getzd2czd2scopezd2local4292zd2zzbackend_c_prototypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_emitzd2classzd2typeszd2envzd2zzbackend_c_prototypez00,
		BgL_bgl__emitza7d2classza7d24784z00,
		BGl__emitzd2classzd2typesz00zzbackend_c_prototypez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4700z00zzbackend_c_prototypez00,
		BgL_bgl_string4700za700za7za7b4785za7, " = BUNSPEC;", 11);
	      DEFINE_STRING(BGl_string4701z00zzbackend_c_prototypez00,
		BgL_bgl_string4701za700za7za7b4786za7, "BGL_EXPORTED_DEF ", 17);
	      DEFINE_STRING(BGl_string4702z00zzbackend_c_prototypez00,
		BgL_bgl_string4702za700za7za7b4787za7, "(", 1);
	      DEFINE_STRING(BGl_string4703z00zzbackend_c_prototypez00,
		BgL_bgl_string4703za700za7za7b4788za7, ")", 1);
	      DEFINE_STRING(BGl_string4704z00zzbackend_c_prototypez00,
		BgL_bgl_string4704za700za7za7b4789za7, ", ", 2);
	      DEFINE_STRING(BGl_string4705z00zzbackend_c_prototypez00,
		BgL_bgl_string4705za700za7za7b4790za7, "()", 2);
	      DEFINE_STRING(BGl_string4706z00zzbackend_c_prototypez00,
		BgL_bgl_string4706za700za7za7b4791za7, "PROCEDURE", 9);
	      DEFINE_STRING(BGl_string4707z00zzbackend_c_prototypez00,
		BgL_bgl_string4707za700za7za7b4792za7, "GENERIC", 7);
	      DEFINE_STRING(BGl_string4708z00zzbackend_c_prototypez00,
		BgL_bgl_string4708za700za7za7b4793za7, "Unknown cnst class", 18);
	      DEFINE_STRING(BGl_string4710z00zzbackend_c_prototypez00,
		BgL_bgl_string4710za700za7za7b4794za7, "), ", 3);
	      DEFINE_STRING(BGl_string4709z00zzbackend_c_prototypez00,
		BgL_bgl_string4709za700za7za7b4795za7, "DEFINE_STRING_START( ", 21);
	      DEFINE_STRING(BGl_string4699z00zzbackend_c_prototypez00,
		BgL_bgl_string4699za700za7za7b4796za7, "static", 6);
	      DEFINE_STRING(BGl_string4711z00zzbackend_c_prototypez00,
		BgL_bgl_string4711za700za7za7b4797za7, "{", 1);
	      DEFINE_STRING(BGl_string4712z00zzbackend_c_prototypez00,
		BgL_bgl_string4712za700za7za7b4798za7, "0 } \n", 5);
	      DEFINE_STRING(BGl_string4713z00zzbackend_c_prototypez00,
		BgL_bgl_string4713za700za7za7b4799za7, "DEFINE_STRING_STOP( ", 20);
	      DEFINE_STRING(BGl_string4714z00zzbackend_c_prototypez00,
		BgL_bgl_string4714za700za7za7b4800za7, ");", 2);
	      DEFINE_STRING(BGl_string4715z00zzbackend_c_prototypez00,
		BgL_bgl_string4715za700za7za7b4801za7, ",", 1);
	      DEFINE_STRING(BGl_string4716z00zzbackend_c_prototypez00,
		BgL_bgl_string4716za700za7za7b4802za7, "DEFINE_STRING( ", 15);
	      DEFINE_STRING(BGl_string4717z00zzbackend_c_prototypez00,
		BgL_bgl_string4717za700za7za7b4803za7, ", \"", 3);
	      DEFINE_STRING(BGl_string4718z00zzbackend_c_prototypez00,
		BgL_bgl_string4718za700za7za7b4804za7, "\", ", 3);
	      DEFINE_STRING(BGl_string4720z00zzbackend_c_prototypez00,
		BgL_bgl_string4720za700za7za7b4805za7, "emit-cnst-string", 16);
	      DEFINE_STRING(BGl_string4719z00zzbackend_c_prototypez00,
		BgL_bgl_string4719za700za7za7b4806za7, " );", 3);
	      DEFINE_STRING(BGl_string4721z00zzbackend_c_prototypez00,
		BgL_bgl_string4721za700za7za7b4807za7, "Can't emit string", 17);
	      DEFINE_STRING(BGl_string4722z00zzbackend_c_prototypez00,
		BgL_bgl_string4722za700za7za7b4808za7, "\"\n\"", 3);
	      DEFINE_STRING(BGl_string4723z00zzbackend_c_prototypez00,
		BgL_bgl_string4723za700za7za7b4809za7, "#define ", 8);
	      DEFINE_STRING(BGl_string4724z00zzbackend_c_prototypez00,
		BgL_bgl_string4724za700za7za7b4810za7, " bigloo_nan", 11);
	      DEFINE_STRING(BGl_string4725z00zzbackend_c_prototypez00,
		BgL_bgl_string4725za700za7za7b4811za7, " bigloo_infinity", 16);
	      DEFINE_STRING(BGl_string4726z00zzbackend_c_prototypez00,
		BgL_bgl_string4726za700za7za7b4812za7, " bigloo_minfinity", 17);
	      DEFINE_STRING(BGl_string4727z00zzbackend_c_prototypez00,
		BgL_bgl_string4727za700za7za7b4813za7, "DEFINE_REAL( ", 13);
	      DEFINE_STRING(BGl_string4728z00zzbackend_c_prototypez00,
		BgL_bgl_string4728za700za7za7b4814za7, "DEFINE_ELONG( ", 14);
	      DEFINE_STRING(BGl_string4730z00zzbackend_c_prototypez00,
		BgL_bgl_string4730za700za7za7b4815za7, "DEFINE_STATIC_BGL_", 18);
	      DEFINE_STRING(BGl_string4729z00zzbackend_c_prototypez00,
		BgL_bgl_string4729za700za7za7b4816za7, "DEFINE_LLONG( ", 14);
	      DEFINE_STRING(BGl_string4731z00zzbackend_c_prototypez00,
		BgL_bgl_string4731za700za7za7b4817za7, "( ", 2);
	      DEFINE_STRING(BGl_string4732z00zzbackend_c_prototypez00,
		BgL_bgl_string4732za700za7za7b4818za7, "DEFINE_EXPORT_BGL_", 18);
	      DEFINE_STRING(BGl_string4733z00zzbackend_c_prototypez00,
		BgL_bgl_string4733za700za7za7b4819za7, ", opt_generic_entry", 19);
	      DEFINE_STRING(BGl_string4734z00zzbackend_c_prototypez00,
		BgL_bgl_string4734za700za7za7b4820za7, ", BFALSE, ", 10);
	      DEFINE_STRING(BGl_string4735z00zzbackend_c_prototypez00,
		BgL_bgl_string4735za700za7za7b4821za7, ", 0L, BUNSPEC, ", 15);
	      DEFINE_STRING(BGl_string4736z00zzbackend_c_prototypez00,
		BgL_bgl_string4736za700za7za7b4822za7, ", va_generic_entry", 18);
	      DEFINE_STRING(BGl_string4737z00zzbackend_c_prototypez00,
		BgL_bgl_string4737za700za7za7b4823za7, ", BUNSPEC, ", 11);
	      DEFINE_STRING(BGl_string4738z00zzbackend_c_prototypez00,
		BgL_bgl_string4738za700za7za7b4824za7, "DEFINE_TVECTOR_START( ", 22);
	      DEFINE_STRING(BGl_string4740z00zzbackend_c_prototypez00,
		BgL_bgl_string4740za700za7za7b4825za7, " DEFINE_TVECTOR_STOP( ", 22);
	      DEFINE_STRING(BGl_string4739z00zzbackend_c_prototypez00,
		BgL_bgl_string4739za700za7za7b4826za7, " ) ", 3);
	      DEFINE_STRING(BGl_string4741z00zzbackend_c_prototypez00,
		BgL_bgl_string4741za700za7za7b4827za7, "   ", 3);
	      DEFINE_STRING(BGl_string4742z00zzbackend_c_prototypez00,
		BgL_bgl_string4742za700za7za7b4828za7, " *", 2);
	      DEFINE_STRING(BGl_string4743z00zzbackend_c_prototypez00,
		BgL_bgl_string4743za700za7za7b4829za7, ";", 1);
	      DEFINE_STRING(BGl_string4744z00zzbackend_c_prototypez00,
		BgL_bgl_string4744za700za7za7b4830za7, " ", 1);
	      DEFINE_STRING(BGl_string4745z00zzbackend_c_prototypez00,
		BgL_bgl_string4745za700za7za7b4831za7, "/* Object type definitions */", 29);
	      DEFINE_STRING(BGl_string4746z00zzbackend_c_prototypez00,
		BgL_bgl_string4746za700za7za7b4832za7, "typedef ", 8);
	      DEFINE_STRING(BGl_string4747z00zzbackend_c_prototypez00,
		BgL_bgl_string4747za700za7za7b4833za7, " {", 2);
	      DEFINE_STRING(BGl_string4748z00zzbackend_c_prototypez00,
		BgL_bgl_string4748za700za7za7b4834za7, "   char dummy;", 14);
	      DEFINE_STRING(BGl_string4750z00zzbackend_c_prototypez00,
		BgL_bgl_string4750za700za7za7b4835za7, "   obj_t widening;", 18);
	      DEFINE_STRING(BGl_string4749z00zzbackend_c_prototypez00,
		BgL_bgl_string4749za700za7za7b4836za7, "   header_t header;", 19);
	      DEFINE_STRING(BGl_string4751z00zzbackend_c_prototypez00,
		BgL_bgl_string4751za700za7za7b4837za7, "} *", 3);
	      DEFINE_STRING(BGl_string4752z00zzbackend_c_prototypez00,
		BgL_bgl_string4752za700za7za7b4838za7, ";\n", 2);
	      DEFINE_STRING(BGl_string4753z00zzbackend_c_prototypez00,
		BgL_bgl_string4753za700za7za7b4839za7, "emit-prototype", 14);
	      DEFINE_STRING(BGl_string4754z00zzbackend_c_prototypez00,
		BgL_bgl_string4754za700za7za7b4840za7, "get-c-scope", 11);
	      DEFINE_STRING(BGl_string4755z00zzbackend_c_prototypez00,
		BgL_bgl_string4755za700za7za7b4841za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string4763z00zzbackend_c_prototypez00,
		BgL_bgl_string4763za700za7za7b4842za7, "BGL_IMPORT", 10);
	      DEFINE_STRING(BGl_string4764z00zzbackend_c_prototypez00,
		BgL_bgl_string4764za700za7za7b4843za7, "extern", 6);
	      DEFINE_STRING(BGl_string4765z00zzbackend_c_prototypez00,
		BgL_bgl_string4765za700za7za7b4844za7, "BGL_EXPORTED_DECL", 17);
	      DEFINE_STRING(BGl_string4766z00zzbackend_c_prototypez00,
		BgL_bgl_string4766za700za7za7b4845za7, "Unknown importation", 19);
	      DEFINE_STRING(BGl_string4767z00zzbackend_c_prototypez00,
		BgL_bgl_string4767za700za7za7b4846za7, "BGL_IMPORT ", 11);
	      DEFINE_STRING(BGl_string4768z00zzbackend_c_prototypez00,
		BgL_bgl_string4768za700za7za7b4847za7, "extern ", 7);
	      DEFINE_STRING(BGl_string4770z00zzbackend_c_prototypez00,
		BgL_bgl_string4770za700za7za7b4848za7, "...)", 4);
	      DEFINE_STRING(BGl_string4769z00zzbackend_c_prototypez00,
		BgL_bgl_string4769za700za7za7b4849za7, ", ...)", 6);
	      DEFINE_STRING(BGl_string4771z00zzbackend_c_prototypez00,
		BgL_bgl_string4771za700za7za7b4850za7, "backend_c_prototype", 19);
	      DEFINE_STRING(BGl_string4772z00zzbackend_c_prototypez00,
		BgL_bgl_string4772za700za7za7b4851za7,
		"get-c-scope-default4287 emit-prototype-defau4275 import backend:emit-cnst stvector sgfun sfun sllong selong sreal sstring bigloo-initialized! __param never export static ",
		170);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_getzd2czd2scopezd2envzd2zzbackend_c_prototypez00,
		BgL_bgl__getza7d2cza7d2scope4852z00,
		BGl__getzd2czd2scopez00zzbackend_c_prototypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_requirezd2prototypezf3zd2envzf3zzbackend_c_prototypez00,
		BgL_bgl__requireza7d2proto4853za7,
		BGl__requirezd2prototypezf3z21zzbackend_c_prototypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_emitzd2prototypezd2defau4275zd2envzd2zzbackend_c_prototypez00,
		BgL_bgl__emitza7d2prototyp4854za7,
		BGl__emitzd2prototypezd2defau4275z00zzbackend_c_prototypez00, 0L, BUNSPEC,
		2);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_emitzd2prototypezd2envz00zzbackend_c_prototypez00,
		BgL_bgl__emitza7d2prototyp4855za7,
		BGl__emitzd2prototypezd2zzbackend_c_prototypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_emitzd2cnstszd2envz00zzbackend_c_prototypez00,
		BgL_bgl__emitza7d2cnstsza7d24856z00,
		BGl__emitzd2cnstszd2zzbackend_c_prototypez00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_getzd2czd2scopezd2default4287zd2envz00zzbackend_c_prototypez00,
		BgL_bgl__getza7d2cza7d2scope4857z00,
		BGl__getzd2czd2scopezd2default4287zd2zzbackend_c_prototypez00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_emitzd2prototypeszd2envz00zzbackend_c_prototypez00,
		BgL_bgl__emitza7d2prototyp4858za7,
		BGl__emitzd2prototypeszd2zzbackend_c_prototypez00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(long
		BgL_checksumz00_2779, char *BgL_fromz00_2780)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_c_prototypez00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_c_prototypez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzbackend_c_prototypez00();
					BGl_cnstzd2initzd2zzbackend_c_prototypez00();
					BGl_importedzd2moduleszd2initz00zzbackend_c_prototypez00();
					BGl_genericzd2initzd2zzbackend_c_prototypez00();
					BGl_methodzd2initzd2zzbackend_c_prototypez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_c_prototypez00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"backend_c_prototype");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"backend_c_prototype");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"backend_c_prototype");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"backend_c_prototype");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"backend_c_prototype");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"backend_c_prototype");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"backend_c_prototype");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"backend_c_prototype");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbackend_c_prototypez00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 15 */
			{	/* BackEnd/c_proto.scm 15 */
				obj_t BgL_cportz00_2770;

				BgL_cportz00_2770 =
					bgl_open_input_string(BGl_string4772z00zzbackend_c_prototypez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2771;

					BgL_iz00_2771 = ((long) 15);
				BgL_loopz00_2772:
					if ((BgL_iz00_2771 == ((long) -1)))
						{	/* BackEnd/c_proto.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* BackEnd/c_proto.scm 15 */
							{	/* BackEnd/c_proto.scm 15 */
								obj_t BgL_arg4774z00_2774;

								{	/* BackEnd/c_proto.scm 15 */

									{	/* BackEnd/c_proto.scm 15 */
										obj_t BgL_locationz00_2776;

										BgL_locationz00_2776 = BBOOL(((bool_t) 0));
										{	/* BackEnd/c_proto.scm 15 */

											BgL_arg4774z00_2774 =
												BGl_readz00zz__readerz00(BgL_cportz00_2770,
												BgL_locationz00_2776);
										}
									}
								}
								{	/* BackEnd/c_proto.scm 15 */
									int BgL_auxz00_2803;

									BgL_auxz00_2803 = (int) (BgL_iz00_2771);
									CNST_TABLE_SET(BgL_auxz00_2803, BgL_arg4774z00_2774);
							}}
							{	/* BackEnd/c_proto.scm 15 */
								int BgL_auxz00_2777;

								BgL_auxz00_2777 = (int) ((BgL_iz00_2771 - ((long) 1)));
								{
									long BgL_iz00_2808;

									BgL_iz00_2808 = (long) (BgL_auxz00_2777);
									BgL_iz00_2771 = BgL_iz00_2808;
									goto BgL_loopz00_2772;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbackend_c_prototypez00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 15 */
			return BUNSPEC;
		}
	}



/* require-prototype? */
	BGL_EXPORTED_DEF bool_t
		BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00(BgL_globalz00_bglt
		BgL_globalz00_11)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 48 */
			{	/* BackEnd/c_proto.scm 49 */
				bool_t BgL_testz00_2810;

				{	/* BackEnd/c_proto.scm 49 */
					bool_t BgL__ortest_4215z00_1129;

					{	/* BackEnd/c_proto.scm 49 */
						obj_t BgL_arg4313z00_1133;

						BgL_arg4313z00_1133 =
							(((BgL_globalz00_bglt) CREF(BgL_globalz00_11))->BgL_modulez00);
						BgL__ortest_4215z00_1129 =
							(BgL_arg4313z00_1133 == BGl_za2moduleza2z00zzmodule_modulez00);
					}
					if (BgL__ortest_4215z00_1129)
						{	/* BackEnd/c_proto.scm 49 */
							BgL_testz00_2810 = BgL__ortest_4215z00_1129;
						}
					else
						{	/* BackEnd/c_proto.scm 49 */
							if (
								((((BgL_globalz00_bglt) CREF(BgL_globalz00_11))->
										BgL_importz00) == CNST_TABLE_REF(((long) 0))))
								{	/* BackEnd/c_proto.scm 50 */
									BgL_testz00_2810 = ((bool_t) 0);
								}
							else
								{	/* BackEnd/c_proto.scm 50 */
									BgL_testz00_2810 = ((bool_t) 1);
								}
						}
				}
				if (BgL_testz00_2810)
					{	/* BackEnd/c_proto.scm 51 */
						bool_t BgL__ortest_4216z00_1119;

						{	/* BackEnd/c_proto.scm 51 */
							bool_t BgL_testz00_2818;

							{	/* BackEnd/c_proto.scm 51 */
								obj_t BgL_arg4309z00_1128;

								BgL_arg4309z00_1128 =
									(((BgL_globalz00_bglt) CREF(BgL_globalz00_11))->
									BgL_modulez00);
								BgL_testz00_2818 =
									(BgL_arg4309z00_1128 ==
									BGl_za2moduleza2z00zzmodule_modulez00);
							}
							if (BgL_testz00_2818)
								{	/* BackEnd/c_proto.scm 51 */
									BgL__ortest_4216z00_1119 =
										(
										(((BgL_globalz00_bglt) CREF(BgL_globalz00_11))->
											BgL_importz00) == CNST_TABLE_REF(((long) 1)));
								}
							else
								{	/* BackEnd/c_proto.scm 51 */
									BgL__ortest_4216z00_1119 = ((bool_t) 0);
								}
						}
						if (BgL__ortest_4216z00_1119)
							{	/* BackEnd/c_proto.scm 51 */
								return BgL__ortest_4216z00_1119;
							}
						else
							{	/* BackEnd/c_proto.scm 53 */
								bool_t BgL__ortest_4217z00_1120;

								{	/* BackEnd/c_proto.scm 53 */
									long BgL_auxz00_2825;

									{
										BgL_variablez00_bglt BgL_auxz00_2826;

										BgL_auxz00_2826 = (BgL_variablez00_bglt) (BgL_globalz00_11);
										BgL_auxz00_2825 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_2826))->
											BgL_occurrencez00);
									}
									BgL__ortest_4217z00_1120 = (BgL_auxz00_2825 > ((long) 0));
								}
								if (BgL__ortest_4217z00_1120)
									{	/* BackEnd/c_proto.scm 53 */
										return BgL__ortest_4217z00_1120;
									}
								else
									{	/* BackEnd/c_proto.scm 54 */
										obj_t BgL_auxz00_2831;

										{
											BgL_variablez00_bglt BgL_auxz00_2832;

											BgL_auxz00_2832 =
												(BgL_variablez00_bglt) (BgL_globalz00_11);
											BgL_auxz00_2831 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_2832))->
												BgL_removablez00);
										}
										return (BgL_auxz00_2831 == CNST_TABLE_REF(((long) 2)));
					}}}
				else
					{	/* BackEnd/c_proto.scm 49 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* _require-prototype? */
	obj_t BGl__requirezd2prototypezf3z21zzbackend_c_prototypez00(obj_t
		BgL_envz00_2719, obj_t BgL_globalz00_2720)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 48 */
			return
				BBOOL(BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00(
					(BgL_globalz00_bglt) (BgL_globalz00_2720)));
		}
	}



/* emit-prototypes */
	BGL_EXPORTED_DEF obj_t BGl_emitzd2prototypeszd2zzbackend_c_prototypez00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 59 */
			{	/* BackEnd/c_proto.scm 62 */
				obj_t BgL_initz00_1134;

				{	/* BackEnd/c_proto.scm 62 */
					obj_t BgL_list4314z00_1135;

					BgL_list4314z00_1135 = MAKE_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
					BgL_initz00_1134 =
						BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 4)),
						BgL_list4314z00_1135);
				}
				if (CBOOL(BgL_initz00_1134))
					{	/* BackEnd/c_proto.scm 63 */
						BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
							(BgL_variablez00_bglt) (BgL_initz00_1134));
					}
				else
					{	/* BackEnd/c_proto.scm 63 */
						BFALSE;
					}
			}
			BGl_forzd2eachzd2globalz12z12zzast_envz00
				(BGl_proc4697z00zzbackend_c_prototypez00, BNIL);
			{	/* BackEnd/c_proto.scm 73 */
				obj_t BgL_cnstzd2initzd2_1146;

				BgL_cnstzd2initzd2_1146 = BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
				{	/* BackEnd/c_proto.scm 74 */
					BgL_valuez00_bglt BgL_arg4323z00_1147;

					{
						BgL_variablez00_bglt BgL_auxz00_2850;

						BgL_auxz00_2850 = (BgL_variablez00_bglt) (BgL_cnstzd2initzd2_1146);
						BgL_arg4323z00_1147 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_2850))->BgL_valuez00);
					}
					{	/* BackEnd/c_proto.scm 74 */
						BgL_variablez00_bglt BgL_variablez00_2135;

						BgL_variablez00_2135 =
							(BgL_variablez00_bglt) (BgL_cnstzd2initzd2_1146);
						{	/* BackEnd/c_proto.scm 74 */
							obj_t BgL_method4276z00_2136;

							{	/* BackEnd/c_proto.scm 74 */
								BgL_objectz00_bglt BgL_objz00_2137;

								BgL_objz00_2137 = (BgL_objectz00_bglt) (BgL_arg4323z00_1147);
								{	/* BackEnd/c_proto.scm 74 */
									long BgL_objzd2classzd2numz00_2138;

									BgL_objzd2classzd2numz00_2138 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2137);
									{	/* BackEnd/c_proto.scm 74 */
										obj_t BgL_arg2643z00_2139;

										BgL_arg2643z00_2139 =
											PROCEDURE_REF
											(BGl_emitzd2prototypezd2envz00zzbackend_c_prototypez00,
											(int) (((long) 1)));
										{	/* BackEnd/c_proto.scm 74 */
											obj_t BgL_arrayz00_2141;

											int BgL_offsetz00_2142;

											BgL_arrayz00_2141 = BgL_arg2643z00_2139;
											BgL_offsetz00_2142 =
												(int) (BgL_objzd2classzd2numz00_2138);
											{	/* BackEnd/c_proto.scm 74 */
												long BgL_offsetz00_2143;

												BgL_offsetz00_2143 =
													((long) (BgL_offsetz00_2142) - OBJECT_TYPE);
												{	/* BackEnd/c_proto.scm 74 */
													long BgL_modz00_2144;

													{	/* BackEnd/c_proto.scm 74 */
														int BgL_arg2645z00_2145;

														BgL_arg2645z00_2145 = (int) (((long) 16));
														{	/* BackEnd/c_proto.scm 74 */
															long BgL_auxz00_2862;

															BgL_auxz00_2862 = (long) (BgL_arg2645z00_2145);
															BgL_modz00_2144 =
																(BgL_offsetz00_2143 / BgL_auxz00_2862);
													}}
													{	/* BackEnd/c_proto.scm 74 */
														long BgL_restz00_2146;

														{	/* BackEnd/c_proto.scm 74 */
															int BgL_arg2644z00_2147;

															BgL_arg2644z00_2147 = (int) (((long) 16));
															{	/* BackEnd/c_proto.scm 74 */
																long BgL_auxz00_2866;

																BgL_auxz00_2866 = (long) (BgL_arg2644z00_2147);
																BgL_restz00_2146 =
																	(BgL_offsetz00_2143 % BgL_auxz00_2866);
														}}
														{	/* BackEnd/c_proto.scm 74 */

															BgL_method4276z00_2136 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2141,
																	(int) (BgL_modz00_2144)),
																(int) (BgL_restz00_2146));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method4276z00_2136) (BgL_method4276z00_2136,
								(obj_t) (BgL_arg4323z00_1147),
								(obj_t) (BgL_variablez00_2135), BEOA);
			}}}}
			BGl_emitzd2tvectorzd2typesz00zztvector_tvectorz00
				(BGl_za2czd2portza2zd2zzbackend_c_emitz00);
			return bgl_display_char(((unsigned char) '\n'),
				BGl_za2czd2portza2zd2zzbackend_c_emitz00);
		}
	}



/* _emit-prototypes */
	obj_t BGl__emitzd2prototypeszd2zzbackend_c_prototypez00(obj_t BgL_envz00_2725)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 59 */
			return BGl_emitzd2prototypeszd2zzbackend_c_prototypez00();
		}
	}



/* <anonymous:4317> */
	obj_t BGl_zc3anonymousza34317ze3z83zzbackend_c_prototypez00(obj_t
		BgL_envz00_2726, obj_t BgL_globalz00_2727)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 66 */
			{
				obj_t BgL_globalz00_1138;

				BgL_globalz00_1138 = BgL_globalz00_2727;
				{	/* BackEnd/c_proto.scm 67 */
					bool_t BgL_testz00_2880;

					if (BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00(
							(BgL_globalz00_bglt) (BgL_globalz00_1138)))
						{	/* BackEnd/c_proto.scm 68 */
							bool_t BgL_testz00_2884;

							{	/* BackEnd/c_proto.scm 68 */
								BgL_valuez00_bglt BgL_arg4322z00_1144;

								{
									BgL_variablez00_bglt BgL_auxz00_2885;

									BgL_auxz00_2885 = (BgL_variablez00_bglt) (BgL_globalz00_1138);
									BgL_arg4322z00_1144 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_2885))->
										BgL_valuez00);
								}
								{	/* BackEnd/c_proto.scm 68 */
									obj_t BgL_obj2395z00_2104;

									BgL_obj2395z00_2104 = (obj_t) (BgL_arg4322z00_1144);
									BgL_testz00_2884 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj2395z00_2104,
										BGl_scnstz00zzast_varz00);
								}
							}
							if (BgL_testz00_2884)
								{	/* BackEnd/c_proto.scm 68 */
									BgL_testz00_2880 = ((bool_t) 0);
								}
							else
								{	/* BackEnd/c_proto.scm 68 */
									BgL_testz00_2880 = ((bool_t) 1);
								}
						}
					else
						{	/* BackEnd/c_proto.scm 67 */
							BgL_testz00_2880 = ((bool_t) 0);
						}
					if (BgL_testz00_2880)
						{	/* BackEnd/c_proto.scm 69 */
							BgL_valuez00_bglt BgL_arg4319z00_1141;

							{
								BgL_variablez00_bglt BgL_auxz00_2890;

								BgL_auxz00_2890 = (BgL_variablez00_bglt) (BgL_globalz00_1138);
								BgL_arg4319z00_1141 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_2890))->
									BgL_valuez00);
							}
							{	/* BackEnd/c_proto.scm 69 */
								BgL_variablez00_bglt BgL_variablez00_2107;

								BgL_variablez00_2107 =
									(BgL_variablez00_bglt) (BgL_globalz00_1138);
								{	/* BackEnd/c_proto.scm 69 */
									obj_t BgL_method4276z00_2108;

									{	/* BackEnd/c_proto.scm 69 */
										BgL_objectz00_bglt BgL_objz00_2109;

										BgL_objz00_2109 =
											(BgL_objectz00_bglt) (BgL_arg4319z00_1141);
										{	/* BackEnd/c_proto.scm 69 */
											long BgL_objzd2classzd2numz00_2110;

											BgL_objzd2classzd2numz00_2110 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2109);
											{	/* BackEnd/c_proto.scm 69 */
												obj_t BgL_arg2643z00_2111;

												BgL_arg2643z00_2111 =
													PROCEDURE_REF
													(BGl_emitzd2prototypezd2envz00zzbackend_c_prototypez00,
													(int) (((long) 1)));
												{	/* BackEnd/c_proto.scm 69 */
													obj_t BgL_arrayz00_2113;

													int BgL_offsetz00_2114;

													BgL_arrayz00_2113 = BgL_arg2643z00_2111;
													BgL_offsetz00_2114 =
														(int) (BgL_objzd2classzd2numz00_2110);
													{	/* BackEnd/c_proto.scm 69 */
														long BgL_offsetz00_2115;

														BgL_offsetz00_2115 =
															((long) (BgL_offsetz00_2114) - OBJECT_TYPE);
														{	/* BackEnd/c_proto.scm 69 */
															long BgL_modz00_2116;

															{	/* BackEnd/c_proto.scm 69 */
																int BgL_arg2645z00_2117;

																BgL_arg2645z00_2117 = (int) (((long) 16));
																{	/* BackEnd/c_proto.scm 69 */
																	long BgL_auxz00_2902;

																	BgL_auxz00_2902 =
																		(long) (BgL_arg2645z00_2117);
																	BgL_modz00_2116 =
																		(BgL_offsetz00_2115 / BgL_auxz00_2902);
															}}
															{	/* BackEnd/c_proto.scm 69 */
																long BgL_restz00_2118;

																{	/* BackEnd/c_proto.scm 69 */
																	int BgL_arg2644z00_2119;

																	BgL_arg2644z00_2119 = (int) (((long) 16));
																	{	/* BackEnd/c_proto.scm 69 */
																		long BgL_auxz00_2906;

																		BgL_auxz00_2906 =
																			(long) (BgL_arg2644z00_2119);
																		BgL_restz00_2118 =
																			(BgL_offsetz00_2115 % BgL_auxz00_2906);
																}}
																{	/* BackEnd/c_proto.scm 69 */

																	BgL_method4276z00_2108 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2113,
																			(int) (BgL_modz00_2116)),
																		(int) (BgL_restz00_2118));
									}}}}}}}}
									return
										PROCEDURE_ENTRY(BgL_method4276z00_2108)
										(BgL_method4276z00_2108, (obj_t) (BgL_arg4319z00_1141),
										(obj_t) (BgL_variablez00_2107), BEOA);
								}
							}
						}
					else
						{	/* BackEnd/c_proto.scm 67 */
							return BFALSE;
						}
				}
			}
		}
	}



/* emit-cnsts */
	BGL_EXPORTED_DEF obj_t BGl_emitzd2cnstszd2zzbackend_c_prototypez00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 83 */
			BGl_forzd2eachzd2globalz12z12zzast_envz00
				(BGl_proc4698z00zzbackend_c_prototypez00, BNIL);
			return bgl_display_char(((unsigned char) '\n'),
				BGl_za2czd2portza2zd2zzbackend_c_emitz00);
		}
	}



/* _emit-cnsts */
	obj_t BGl__emitzd2cnstszd2zzbackend_c_prototypez00(obj_t BgL_envz00_2729)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 83 */
			return BGl_emitzd2cnstszd2zzbackend_c_prototypez00();
		}
	}



/* <anonymous:4326> */
	obj_t BGl_zc3anonymousza34326ze3z83zzbackend_c_prototypez00(obj_t
		BgL_envz00_2730, obj_t BgL_globalz00_2731)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 85 */
			{
				obj_t BgL_globalz00_1150;

				BgL_globalz00_1150 = BgL_globalz00_2731;
				{	/* BackEnd/c_proto.scm 86 */
					bool_t BgL_testz00_2920;

					if (BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00(
							(BgL_globalz00_bglt) (BgL_globalz00_1150)))
						{	/* BackEnd/c_proto.scm 87 */
							BgL_valuez00_bglt BgL_arg4330z00_1155;

							{
								BgL_variablez00_bglt BgL_auxz00_2924;

								BgL_auxz00_2924 = (BgL_variablez00_bglt) (BgL_globalz00_1150);
								BgL_arg4330z00_1155 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_2924))->
									BgL_valuez00);
							}
							{	/* BackEnd/c_proto.scm 87 */
								obj_t BgL_obj2395z00_2163;

								BgL_obj2395z00_2163 = (obj_t) (BgL_arg4330z00_1155);
								BgL_testz00_2920 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj2395z00_2163,
									BGl_scnstz00zzast_varz00);
							}
						}
					else
						{	/* BackEnd/c_proto.scm 86 */
							BgL_testz00_2920 = ((bool_t) 0);
						}
					if (BgL_testz00_2920)
						{	/* BackEnd/c_proto.scm 88 */
							BgL_valuez00_bglt BgL_arg4328z00_1153;

							{
								BgL_variablez00_bglt BgL_auxz00_2929;

								BgL_auxz00_2929 = (BgL_variablez00_bglt) (BgL_globalz00_1150);
								BgL_arg4328z00_1153 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_2929))->
									BgL_valuez00);
							}
							return
								BGl_emitzd2cnstzd2zzbackend_c_prototypez00(
								(BgL_scnstz00_bglt) (BgL_arg4328z00_1153),
								(BgL_globalz00_bglt) (BgL_globalz00_1150));
						}
					else
						{	/* BackEnd/c_proto.scm 86 */
							return BFALSE;
						}
				}
			}
		}
	}



/* emit-prototype/svar/scnst */
	obj_t BGl_emitzd2prototypezf2svarzf2scnstzd2zzbackend_c_prototypez00(obj_t
		BgL_valuez00_20, obj_t BgL_variablez00_21)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 111 */
			BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
				(BgL_variablez00_bglt) (BgL_variablez00_21));
			{	/* BackEnd/c_proto.scm 115 */
				bool_t BgL_testz00_2937;

				{	/* BackEnd/c_proto.scm 115 */
					obj_t BgL_auxz00_2938;

					{
						BgL_globalz00_bglt BgL_auxz00_2939;

						BgL_auxz00_2939 = (BgL_globalz00_bglt) (BgL_variablez00_21);
						BgL_auxz00_2938 =
							(((BgL_globalz00_bglt) CREF(BgL_auxz00_2939))->BgL_importz00);
					}
					BgL_testz00_2937 = (BgL_auxz00_2938 == CNST_TABLE_REF(((long) 0)));
				}
				if (BgL_testz00_2937)
					{	/* BackEnd/c_proto.scm 116 */
						obj_t BgL_port4242z00_1159;

						BgL_port4242z00_1159 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
						bgl_display_string(BGl_string4699z00zzbackend_c_prototypez00,
							BgL_port4242z00_1159);
						bgl_display_char(((unsigned char) ' '), BgL_port4242z00_1159);
						{	/* BackEnd/c_proto.scm 119 */
							obj_t BgL_arg4332z00_1160;

							{	/* BackEnd/c_proto.scm 119 */
								BgL_typez00_bglt BgL_arg4333z00_1161;

								obj_t BgL_arg4334z00_1162;

								{
									BgL_variablez00_bglt BgL_auxz00_2946;

									BgL_auxz00_2946 = (BgL_variablez00_bglt) (BgL_variablez00_21);
									BgL_arg4333z00_1161 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_2946))->
										BgL_typez00);
								}
								{
									BgL_variablez00_bglt BgL_auxz00_2949;

									BgL_auxz00_2949 = (BgL_variablez00_bglt) (BgL_variablez00_21);
									BgL_arg4334z00_1162 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_2949))->
										BgL_namez00);
								}
								BgL_arg4332z00_1160 =
									BGl_makezd2typedzd2declarationz00zztype_toolsz00
									(BgL_arg4333z00_1161, BgL_arg4334z00_1162);
							}
							bgl_display_obj(BgL_arg4332z00_1160, BgL_port4242z00_1159);
						}
						{	/* BackEnd/c_proto.scm 120 */
							obj_t BgL_arg4335z00_1163;

							{	/* BackEnd/c_proto.scm 120 */
								bool_t BgL_testz00_2954;

								{	/* BackEnd/c_proto.scm 120 */
									BgL_typez00_bglt BgL_arg4337z00_1165;

									{
										BgL_variablez00_bglt BgL_auxz00_2955;

										BgL_auxz00_2955 =
											(BgL_variablez00_bglt) (BgL_variablez00_21);
										BgL_arg4337z00_1165 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_2955))->
											BgL_typez00);
									}
									BgL_testz00_2954 =
										BGl_subzd2typezf3z21zztype_envz00(BgL_arg4337z00_1165,
										(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
								}
								if (BgL_testz00_2954)
									{	/* BackEnd/c_proto.scm 120 */
										BgL_arg4335z00_1163 =
											BGl_string4700z00zzbackend_c_prototypez00;
									}
								else
									{	/* BackEnd/c_proto.scm 120 */
										BgL_arg4335z00_1163 = BCHAR(((unsigned char) ';'));
							}}
							bgl_display_obj(BgL_arg4335z00_1163, BgL_port4242z00_1159);
						}
						return
							bgl_display_char(((unsigned char) '\n'), BgL_port4242z00_1159);
					}
				else
					{	/* BackEnd/c_proto.scm 121 */
						bool_t BgL_testz00_2963;

						{	/* BackEnd/c_proto.scm 121 */
							obj_t BgL_auxz00_2964;

							{
								BgL_globalz00_bglt BgL_auxz00_2965;

								BgL_auxz00_2965 = (BgL_globalz00_bglt) (BgL_variablez00_21);
								BgL_auxz00_2964 =
									(((BgL_globalz00_bglt) CREF(BgL_auxz00_2965))->BgL_importz00);
							}
							BgL_testz00_2963 =
								(BgL_auxz00_2964 == CNST_TABLE_REF(((long) 1)));
						}
						if (BgL_testz00_2963)
							{	/* BackEnd/c_proto.scm 122 */
								obj_t BgL_port4243z00_1167;

								BgL_port4243z00_1167 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
								bgl_display_string(BGl_string4701z00zzbackend_c_prototypez00,
									BgL_port4243z00_1167);
								{	/* BackEnd/c_proto.scm 124 */
									obj_t BgL_arg4339z00_1168;

									{	/* BackEnd/c_proto.scm 124 */
										BgL_typez00_bglt BgL_arg4340z00_1169;

										obj_t BgL_arg4341z00_1170;

										{
											BgL_variablez00_bglt BgL_auxz00_2971;

											BgL_auxz00_2971 =
												(BgL_variablez00_bglt) (BgL_variablez00_21);
											BgL_arg4340z00_1169 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_2971))->
												BgL_typez00);
										}
										{
											BgL_variablez00_bglt BgL_auxz00_2974;

											BgL_auxz00_2974 =
												(BgL_variablez00_bglt) (BgL_variablez00_21);
											BgL_arg4341z00_1170 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_2974))->
												BgL_namez00);
										}
										BgL_arg4339z00_1168 =
											BGl_makezd2typedzd2declarationz00zztype_toolsz00
											(BgL_arg4340z00_1169, BgL_arg4341z00_1170);
									}
									bgl_display_obj(BgL_arg4339z00_1168, BgL_port4243z00_1167);
								}
								{	/* BackEnd/c_proto.scm 125 */
									obj_t BgL_arg4342z00_1171;

									{	/* BackEnd/c_proto.scm 125 */
										bool_t BgL_testz00_2979;

										{	/* BackEnd/c_proto.scm 125 */
											BgL_typez00_bglt BgL_arg4344z00_1173;

											{
												BgL_variablez00_bglt BgL_auxz00_2980;

												BgL_auxz00_2980 =
													(BgL_variablez00_bglt) (BgL_variablez00_21);
												BgL_arg4344z00_1173 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_2980))->
													BgL_typez00);
											}
											BgL_testz00_2979 =
												BGl_subzd2typezf3z21zztype_envz00(BgL_arg4344z00_1173,
												(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
										}
										if (BgL_testz00_2979)
											{	/* BackEnd/c_proto.scm 125 */
												BgL_arg4342z00_1171 =
													BGl_string4700z00zzbackend_c_prototypez00;
											}
										else
											{	/* BackEnd/c_proto.scm 125 */
												BgL_arg4342z00_1171 = BCHAR(((unsigned char) ';'));
									}}
									bgl_display_obj(BgL_arg4342z00_1171, BgL_port4243z00_1167);
								}
								return
									bgl_display_char(((unsigned char) '\n'),
									BgL_port4243z00_1167);
							}
						else
							{	/* BackEnd/c_proto.scm 127 */
								obj_t BgL_port4244z00_1174;

								BgL_port4244z00_1174 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
								{	/* BackEnd/c_proto.scm 128 */
									obj_t BgL_arg4345z00_1175;

									{	/* BackEnd/c_proto.scm 128 */
										obj_t BgL_res4687z00_2208;

										{	/* BackEnd/c_proto.scm 128 */
											BgL_variablez00_bglt BgL_variablez00_2182;

											BgL_variablez00_2182 =
												(BgL_variablez00_bglt) (BgL_variablez00_21);
											{	/* BackEnd/c_proto.scm 128 */
												obj_t BgL_method4288z00_2183;

												{	/* BackEnd/c_proto.scm 128 */
													BgL_objectz00_bglt BgL_objz00_2184;

													BgL_objz00_2184 =
														(BgL_objectz00_bglt) (BgL_variablez00_2182);
													{	/* BackEnd/c_proto.scm 128 */
														long BgL_objzd2classzd2numz00_2185;

														BgL_objzd2classzd2numz00_2185 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2184);
														{	/* BackEnd/c_proto.scm 128 */
															obj_t BgL_arg2643z00_2186;

															BgL_arg2643z00_2186 =
																PROCEDURE_REF
																(BGl_getzd2czd2scopezd2envzd2zzbackend_c_prototypez00,
																(int) (((long) 1)));
															{	/* BackEnd/c_proto.scm 128 */
																obj_t BgL_arrayz00_2188;

																int BgL_offsetz00_2189;

																BgL_arrayz00_2188 = BgL_arg2643z00_2186;
																BgL_offsetz00_2189 =
																	(int) (BgL_objzd2classzd2numz00_2185);
																{	/* BackEnd/c_proto.scm 128 */
																	long BgL_offsetz00_2190;

																	BgL_offsetz00_2190 =
																		((long) (BgL_offsetz00_2189) - OBJECT_TYPE);
																	{	/* BackEnd/c_proto.scm 128 */
																		long BgL_modz00_2191;

																		{	/* BackEnd/c_proto.scm 128 */
																			int BgL_arg2645z00_2192;

																			BgL_arg2645z00_2192 = (int) (((long) 16));
																			{	/* BackEnd/c_proto.scm 128 */
																				long BgL_auxz00_2997;

																				BgL_auxz00_2997 =
																					(long) (BgL_arg2645z00_2192);
																				BgL_modz00_2191 =
																					(BgL_offsetz00_2190 /
																					BgL_auxz00_2997);
																		}}
																		{	/* BackEnd/c_proto.scm 128 */
																			long BgL_restz00_2193;

																			{	/* BackEnd/c_proto.scm 128 */
																				int BgL_arg2644z00_2194;

																				BgL_arg2644z00_2194 =
																					(int) (((long) 16));
																				{	/* BackEnd/c_proto.scm 128 */
																					long BgL_auxz00_3001;

																					BgL_auxz00_3001 =
																						(long) (BgL_arg2644z00_2194);
																					BgL_restz00_2193 =
																						(BgL_offsetz00_2190 %
																						BgL_auxz00_3001);
																			}}
																			{	/* BackEnd/c_proto.scm 128 */

																				BgL_method4288z00_2183 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2188,
																						(int) (BgL_modz00_2191)),
																					(int) (BgL_restz00_2193));
												}}}}}}}}
												BgL_res4687z00_2208 =
													PROCEDURE_ENTRY(BgL_method4288z00_2183)
													(BgL_method4288z00_2183,
													(obj_t) (BgL_variablez00_2182), BEOA);
										}}
										BgL_arg4345z00_1175 = BgL_res4687z00_2208;
									}
									bgl_display_obj(BgL_arg4345z00_1175, BgL_port4244z00_1174);
								}
								bgl_display_char(((unsigned char) ' '), BgL_port4244z00_1174);
								{	/* BackEnd/c_proto.scm 130 */
									obj_t BgL_arg4346z00_1176;

									{	/* BackEnd/c_proto.scm 130 */
										BgL_typez00_bglt BgL_arg4347z00_1177;

										obj_t BgL_arg4348z00_1178;

										{
											BgL_variablez00_bglt BgL_auxz00_3013;

											BgL_auxz00_3013 =
												(BgL_variablez00_bglt) (BgL_variablez00_21);
											BgL_arg4347z00_1177 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_3013))->
												BgL_typez00);
										}
										{
											BgL_variablez00_bglt BgL_auxz00_3016;

											BgL_auxz00_3016 =
												(BgL_variablez00_bglt) (BgL_variablez00_21);
											BgL_arg4348z00_1178 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_3016))->
												BgL_namez00);
										}
										BgL_arg4346z00_1176 =
											BGl_makezd2typedzd2declarationz00zztype_toolsz00
											(BgL_arg4347z00_1177, BgL_arg4348z00_1178);
									}
									bgl_display_obj(BgL_arg4346z00_1176, BgL_port4244z00_1174);
								}
								bgl_display_char(((unsigned char) ';'), BgL_port4244z00_1174);
								return
									bgl_display_char(((unsigned char) '\n'),
									BgL_port4244z00_1174);
		}}}}
	}



/* emit-prototype-formal-types */
	obj_t BGl_emitzd2prototypezd2formalzd2typeszd2zzbackend_c_prototypez00(obj_t
		BgL_typesz00_24)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 155 */
			return
				string_append(BGl_string4702z00zzbackend_c_prototypez00,
				BGl_loopz72z72z00zzbackend_c_prototypez00(BgL_typesz00_24));
		}
	}



/* loop'' */
	obj_t BGl_loopz72z72z00zzbackend_c_prototypez00(obj_t BgL_typesz00_1187)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 160 */
			if (NULLP(CDR(BgL_typesz00_1187)))
				{	/* BackEnd/c_proto.scm 162 */
					obj_t BgL_arg4358z00_1190;

					{	/* BackEnd/c_proto.scm 162 */
						obj_t BgL_arg4360z00_1192;

						BgL_arg4360z00_1192 = CAR(BgL_typesz00_1187);
						BgL_arg4358z00_1190 =
							BGl_typezd2namezd2sanszd2z42z90zztype_toolsz00(
							(BgL_typez00_bglt) (BgL_arg4360z00_1192));
					}
					return
						string_append(BgL_arg4358z00_1190,
						BGl_string4703z00zzbackend_c_prototypez00);
				}
			else
				{	/* BackEnd/c_proto.scm 164 */
					obj_t BgL_arg4361z00_1193;

					obj_t BgL_arg4363z00_1195;

					{	/* BackEnd/c_proto.scm 164 */
						obj_t BgL_arg4364z00_1196;

						BgL_arg4364z00_1196 = CAR(BgL_typesz00_1187);
						BgL_arg4361z00_1193 =
							BGl_typezd2namezd2sanszd2z42z90zztype_toolsz00(
							(BgL_typez00_bglt) (BgL_arg4364z00_1196));
					}
					BgL_arg4363z00_1195 =
						BGl_loopz72z72z00zzbackend_c_prototypez00(CDR(BgL_typesz00_1187));
					return
						string_append_3(BgL_arg4361z00_1193,
						BGl_string4704z00zzbackend_c_prototypez00, BgL_arg4363z00_1195);
				}
		}
	}



/* emit-prototype-formals */
	obj_t BGl_emitzd2prototypezd2formalsz00zzbackend_c_prototypez00(obj_t
		BgL_argsz00_25)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 170 */
			if (NULLP(BgL_argsz00_25))
				{	/* BackEnd/c_proto.scm 171 */
					return BGl_string4705z00zzbackend_c_prototypez00;
				}
			else
				{	/* BackEnd/c_proto.scm 171 */
					return
						string_append(BGl_string4702z00zzbackend_c_prototypez00,
						BGl_loopz72z72zzbackend_c_prototypez00(BgL_argsz00_25));
				}
		}
	}



/* loop' */
	obj_t BGl_loopz72z72zzbackend_c_prototypez00(obj_t BgL_argsz00_1204)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 175 */
			if (NULLP(CDR(BgL_argsz00_1204)))
				{	/* BackEnd/c_proto.scm 177 */
					obj_t BgL_instance4223z00_1207;

					BgL_instance4223z00_1207 = CAR(BgL_argsz00_1204);
					{	/* BackEnd/c_proto.scm 178 */
						obj_t BgL_arg4372z00_1208;

						{	/* BackEnd/c_proto.scm 178 */
							BgL_typez00_bglt BgL_arg4374z00_1210;

							{
								BgL_variablez00_bglt BgL_auxz00_3046;

								BgL_auxz00_3046 =
									(BgL_variablez00_bglt) (BgL_instance4223z00_1207);
								BgL_arg4374z00_1210 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_3046))->BgL_typez00);
							}
							BgL_arg4372z00_1208 =
								BGl_typezd2namezd2sanszd2z42z90zztype_toolsz00
								(BgL_arg4374z00_1210);
						}
						return
							string_append(BgL_arg4372z00_1208,
							BGl_string4703z00zzbackend_c_prototypez00);
					}
				}
			else
				{	/* BackEnd/c_proto.scm 179 */
					obj_t BgL_instance4225z00_1211;

					BgL_instance4225z00_1211 = CAR(BgL_argsz00_1204);
					{	/* BackEnd/c_proto.scm 180 */
						obj_t BgL_arg4375z00_1212;

						obj_t BgL_arg4377z00_1214;

						{	/* BackEnd/c_proto.scm 180 */
							BgL_typez00_bglt BgL_arg4378z00_1215;

							{
								BgL_variablez00_bglt BgL_auxz00_3052;

								BgL_auxz00_3052 =
									(BgL_variablez00_bglt) (BgL_instance4225z00_1211);
								BgL_arg4378z00_1215 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_3052))->BgL_typez00);
							}
							BgL_arg4375z00_1212 =
								BGl_typezd2namezd2sanszd2z42z90zztype_toolsz00
								(BgL_arg4378z00_1215);
						}
						BgL_arg4377z00_1214 =
							BGl_loopz72z72zzbackend_c_prototypez00(CDR(BgL_argsz00_1204));
						return
							string_append_3(BgL_arg4375z00_1212,
							BGl_string4704z00zzbackend_c_prototypez00, BgL_arg4377z00_1214);
					}
				}
		}
	}



/* emit-cnst */
	obj_t BGl_emitzd2cnstzd2zzbackend_c_prototypez00(BgL_scnstz00_bglt
		BgL_valuez00_30, BgL_globalz00_bglt BgL_variablez00_31)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 229 */
			{	/* BackEnd/c_proto.scm 231 */
				obj_t BgL_casezd2valuezd2_1220;

				BgL_casezd2valuezd2_1220 =
					(((BgL_scnstz00_bglt) CREF(BgL_valuez00_30))->BgL_classz00);
				if ((BgL_casezd2valuezd2_1220 == CNST_TABLE_REF(((long) 5))))
					{	/* BackEnd/c_proto.scm 233 */
						obj_t BgL_arg4382z00_1222;

						BgL_arg4382z00_1222 =
							(((BgL_scnstz00_bglt) CREF(BgL_valuez00_30))->BgL_nodez00);
						return
							BGl_emitzd2cnstzd2stringz00zzbackend_c_prototypez00
							(BgL_arg4382z00_1222, BgL_variablez00_31);
					}
				else
					{	/* BackEnd/c_proto.scm 231 */
						if ((BgL_casezd2valuezd2_1220 == CNST_TABLE_REF(((long) 6))))
							{	/* BackEnd/c_proto.scm 235 */
								obj_t BgL_arg4384z00_1224;

								BgL_arg4384z00_1224 =
									(((BgL_scnstz00_bglt) CREF(BgL_valuez00_30))->BgL_nodez00);
								return
									BGl_emitzd2cnstzd2realz00zzbackend_c_prototypez00
									(BgL_arg4384z00_1224, BgL_variablez00_31);
							}
						else
							{	/* BackEnd/c_proto.scm 231 */
								if ((BgL_casezd2valuezd2_1220 == CNST_TABLE_REF(((long) 7))))
									{	/* BackEnd/c_proto.scm 237 */
										obj_t BgL_arg4386z00_1226;

										BgL_arg4386z00_1226 =
											(((BgL_scnstz00_bglt) CREF(BgL_valuez00_30))->
											BgL_nodez00);
										return
											BGl_emitzd2cnstzd2elongz00zzbackend_c_prototypez00
											(BgL_arg4386z00_1226, BgL_variablez00_31);
									}
								else
									{	/* BackEnd/c_proto.scm 231 */
										if (
											(BgL_casezd2valuezd2_1220 == CNST_TABLE_REF(((long) 8))))
											{	/* BackEnd/c_proto.scm 239 */
												obj_t BgL_arg4388z00_1228;

												BgL_arg4388z00_1228 =
													(((BgL_scnstz00_bglt) CREF(BgL_valuez00_30))->
													BgL_nodez00);
												return
													BGl_emitzd2cnstzd2llongz00zzbackend_c_prototypez00
													(BgL_arg4388z00_1228, BgL_variablez00_31);
											}
										else
											{	/* BackEnd/c_proto.scm 231 */
												if (
													(BgL_casezd2valuezd2_1220 ==
														CNST_TABLE_REF(((long) 9))))
													{	/* BackEnd/c_proto.scm 241 */
														obj_t BgL_arg4390z00_1230;

														BgL_arg4390z00_1230 =
															(((BgL_scnstz00_bglt) CREF(BgL_valuez00_30))->
															BgL_nodez00);
														return
															BGl_emitzd2cnstzd2sfunzf2sgfunzf2zzbackend_c_prototypez00
															(BgL_arg4390z00_1230, BgL_variablez00_31,
															BGl_string4706z00zzbackend_c_prototypez00);
													}
												else
													{	/* BackEnd/c_proto.scm 231 */
														if (
															(BgL_casezd2valuezd2_1220 ==
																CNST_TABLE_REF(((long) 10))))
															{	/* BackEnd/c_proto.scm 243 */
																obj_t BgL_arg4392z00_1232;

																BgL_arg4392z00_1232 =
																	(((BgL_scnstz00_bglt) CREF(BgL_valuez00_30))->
																	BgL_nodez00);
																return
																	BGl_emitzd2cnstzd2sfunzf2sgfunzf2zzbackend_c_prototypez00
																	(BgL_arg4392z00_1232, BgL_variablez00_31,
																	BGl_string4707z00zzbackend_c_prototypez00);
															}
														else
															{	/* BackEnd/c_proto.scm 231 */
																if (
																	(BgL_casezd2valuezd2_1220 ==
																		CNST_TABLE_REF(((long) 11))))
																	{	/* BackEnd/c_proto.scm 245 */
																		obj_t BgL_arg4394z00_1234;

																		BgL_arg4394z00_1234 =
																			(((BgL_scnstz00_bglt)
																				CREF(BgL_valuez00_30))->BgL_nodez00);
																		return
																			BGl_emitzd2cnstzd2stvectorz00zzbackend_c_prototypez00
																			(BgL_arg4394z00_1234, BgL_variablez00_31);
																	}
																else
																	{	/* BackEnd/c_proto.scm 247 */
																		obj_t BgL_arg4395z00_1235;

																		obj_t BgL_arg4398z00_1237;

																		BgL_arg4395z00_1235 =
																			CNST_TABLE_REF(((long) 12));
																		BgL_arg4398z00_1237 =
																			(((BgL_scnstz00_bglt)
																				CREF(BgL_valuez00_30))->BgL_classz00);
																		return
																			BGl_internalzd2errorzd2zztools_errorz00
																			(BgL_arg4395z00_1235,
																			BGl_string4708z00zzbackend_c_prototypez00,
																			BgL_arg4398z00_1237);
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



/* emit-cnst-string */
	obj_t BGl_emitzd2cnstzd2stringz00zzbackend_c_prototypez00(obj_t
		BgL_ostrz00_32, BgL_globalz00_bglt BgL_globalz00_33)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 252 */
			BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
				(BgL_variablez00_bglt) (BgL_globalz00_33));
			{	/* BackEnd/c_proto.scm 254 */
				bool_t BgL_testz00_3100;

				{	/* BackEnd/c_proto.scm 254 */
					bool_t BgL_testz00_3101;

					{	/* BackEnd/c_proto.scm 254 */
						long BgL_arg4449z00_1307;

						BgL_arg4449z00_1307 = STRING_LENGTH(BgL_ostrz00_32);
						BgL_testz00_3101 =
							BGl_2ze3ze3zz__r4_numbers_6_5z00(BINT(BgL_arg4449z00_1307),
							BGl_za2maxzd2czd2tokenzd2lengthza2zd2zzengine_paramz00);
					}
					if (BgL_testz00_3101)
						{	/* BackEnd/c_proto.scm 254 */
							BgL_testz00_3100 =
								CBOOL(BGl_za2czd2splitzd2stringza2z00zzengine_paramz00);
						}
					else
						{	/* BackEnd/c_proto.scm 254 */
							BgL_testz00_3100 = ((bool_t) 0);
						}
				}
				if (BgL_testz00_3100)
					{	/* BackEnd/c_proto.scm 257 */
						obj_t BgL_auxz00_1239;

						{	/* BackEnd/c_proto.scm 257 */
							obj_t BgL_arg4408z00_1254;

							{	/* BackEnd/c_proto.scm 257 */
								obj_t BgL_arg4409z00_1255;

								{
									BgL_variablez00_bglt BgL_auxz00_3106;

									BgL_auxz00_3106 = (BgL_variablez00_bglt) (BgL_globalz00_33);
									BgL_arg4409z00_1255 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_3106))->
										BgL_namez00);
								}
								BgL_arg4408z00_1254 =
									BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg4409z00_1255);
							}
							BgL_auxz00_1239 =
								BGl_idzd2ze3namez31zzast_identz00(BgL_arg4408z00_1254);
						}
						{	/* BackEnd/c_proto.scm 258 */
							obj_t BgL_port4248z00_1240;

							BgL_port4248z00_1240 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
							bgl_display_string(BGl_string4709z00zzbackend_c_prototypez00,
								BgL_port4248z00_1240);
							{	/* BackEnd/c_proto.scm 260 */
								obj_t BgL_arg4400z00_1241;

								{
									BgL_variablez00_bglt BgL_auxz00_3112;

									BgL_auxz00_3112 = (BgL_variablez00_bglt) (BgL_globalz00_33);
									BgL_arg4400z00_1241 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_3112))->
										BgL_namez00);
								}
								bgl_display_obj(BgL_arg4400z00_1241, BgL_port4248z00_1240);
							}
							bgl_display_string(BGl_string4704z00zzbackend_c_prototypez00,
								BgL_port4248z00_1240);
							bgl_display_obj(BgL_auxz00_1239, BgL_port4248z00_1240);
							bgl_display_string(BGl_string4704z00zzbackend_c_prototypez00,
								BgL_port4248z00_1240);
							{	/* BackEnd/c_proto.scm 264 */
								long BgL_arg4401z00_1242;

								BgL_arg4401z00_1242 = STRING_LENGTH(BgL_ostrz00_32);
								bgl_display_obj(BINT(BgL_arg4401z00_1242),
									BgL_port4248z00_1240);
							}
							bgl_display_string(BGl_string4710z00zzbackend_c_prototypez00,
								BgL_port4248z00_1240);
							bgl_display_char(((unsigned char) '\n'), BgL_port4248z00_1240);
						}
						bgl_display_string(BGl_string4711z00zzbackend_c_prototypez00,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						{	/* BackEnd/c_proto.scm 267 */
							long BgL_rlenz00_1243;

							BgL_rlenz00_1243 = STRING_LENGTH(BgL_ostrz00_32);
							{
								long BgL_iz00_1245;

								BgL_iz00_1245 = ((long) 0);
							BgL_zc3anonymousza34402ze3z83_1246:
								if ((BgL_iz00_1245 == BgL_rlenz00_1243))
									{	/* BackEnd/c_proto.scm 270 */
										obj_t BgL_port4249z00_1248;

										BgL_port4249z00_1248 =
											BGl_za2czd2portza2zd2zzbackend_c_emitz00;
										bgl_display_string
											(BGl_string4712z00zzbackend_c_prototypez00,
											BgL_port4249z00_1248);
										bgl_display_string
											(BGl_string4713z00zzbackend_c_prototypez00,
											BgL_port4249z00_1248);
										{	/* BackEnd/c_proto.scm 273 */
											obj_t BgL_arg4404z00_1249;

											{
												BgL_variablez00_bglt BgL_auxz00_3130;

												BgL_auxz00_3130 =
													(BgL_variablez00_bglt) (BgL_globalz00_33);
												BgL_arg4404z00_1249 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_3130))->
													BgL_namez00);
											}
											bgl_display_obj(BgL_arg4404z00_1249,
												BgL_port4249z00_1248);
										}
										bgl_display_string
											(BGl_string4704z00zzbackend_c_prototypez00,
											BgL_port4249z00_1248);
										bgl_display_obj(BgL_auxz00_1239, BgL_port4249z00_1248);
										bgl_display_string
											(BGl_string4714z00zzbackend_c_prototypez00,
											BgL_port4249z00_1248);
										return bgl_display_char(((unsigned char) '\n'),
											BgL_port4249z00_1248);
									}
								else
									{	/* BackEnd/c_proto.scm 269 */
										{	/* BackEnd/c_proto.scm 278 */
											long BgL_arg4405z00_1250;

											BgL_arg4405z00_1250 =
												(STRING_REF(BgL_ostrz00_32, BgL_iz00_1245));
											bgl_display_obj(BINT(BgL_arg4405z00_1250),
												BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										}
										bgl_display_string
											(BGl_string4715z00zzbackend_c_prototypez00,
											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										{
											long BgL_iz00_3143;

											BgL_iz00_3143 = (BgL_iz00_1245 + ((long) 1));
											BgL_iz00_1245 = BgL_iz00_3143;
											goto BgL_zc3anonymousza34402ze3z83_1246;
										}
									}
							}
						}
					}
				else
					{	/* BackEnd/c_proto.scm 281 */
						obj_t BgL_strz00_1256;

						BgL_strz00_1256 = string_for_read(BgL_ostrz00_32);
						{	/* BackEnd/c_proto.scm 283 */
							obj_t BgL_port4233z00_1257;

							BgL_port4233z00_1257 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
							bgl_display_string(BGl_string4716z00zzbackend_c_prototypez00,
								BgL_port4233z00_1257);
							{	/* BackEnd/c_proto.scm 285 */
								obj_t BgL_arg4410z00_1258;

								{
									BgL_variablez00_bglt BgL_auxz00_3147;

									BgL_auxz00_3147 = (BgL_variablez00_bglt) (BgL_globalz00_33);
									BgL_arg4410z00_1258 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_3147))->
										BgL_namez00);
								}
								bgl_display_obj(BgL_arg4410z00_1258, BgL_port4233z00_1257);
							}
							bgl_display_string(BGl_string4704z00zzbackend_c_prototypez00,
								BgL_port4233z00_1257);
							{	/* BackEnd/c_proto.scm 287 */
								obj_t BgL_arg4411z00_1259;

								{	/* BackEnd/c_proto.scm 287 */
									obj_t BgL_arg4412z00_1260;

									{	/* BackEnd/c_proto.scm 287 */
										obj_t BgL_arg4413z00_1261;

										{
											BgL_variablez00_bglt BgL_auxz00_3152;

											BgL_auxz00_3152 =
												(BgL_variablez00_bglt) (BgL_globalz00_33);
											BgL_arg4413z00_1261 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_3152))->
												BgL_namez00);
										}
										BgL_arg4412z00_1260 =
											BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg4413z00_1261);
									}
									BgL_arg4411z00_1259 =
										BGl_idzd2ze3namez31zzast_identz00(BgL_arg4412z00_1260);
								}
								bgl_display_obj(BgL_arg4411z00_1259, BgL_port4233z00_1257);
							}
							bgl_display_string(BGl_string4717z00zzbackend_c_prototypez00,
								BgL_port4233z00_1257);
						}
						{	/* BackEnd/c_proto.scm 289 */
							long BgL_g4234z00_1262;

							BgL_g4234z00_1262 = STRING_LENGTH(BgL_strz00_1256);
							{
								long BgL_readz00_1264;

								long BgL_rlenz00_1265;

								BgL_readz00_1264 = ((long) 0);
								BgL_rlenz00_1265 = BgL_g4234z00_1262;
							BgL_zc3anonymousza34414ze3z83_1266:
								if (
									(BgL_rlenz00_1265 <=
										(long)
										CINT
										(BGl_za2maxzd2czd2tokenzd2lengthza2zd2zzengine_paramz00)))
									{	/* BackEnd/c_proto.scm 292 */
										{	/* BackEnd/c_proto.scm 293 */
											obj_t BgL_arg4416z00_1268;

											BgL_arg4416z00_1268 =
												BGl_untrigraphz00zzbackend_c_emitz00(c_substring
												(BgL_strz00_1256, BgL_readz00_1264,
													(BgL_readz00_1264 + BgL_rlenz00_1265)));
											bgl_display_obj(BgL_arg4416z00_1268,
												BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										}
										{	/* BackEnd/c_proto.scm 295 */
											obj_t BgL_port4250z00_1271;

											BgL_port4250z00_1271 =
												BGl_za2czd2portza2zd2zzbackend_c_emitz00;
											bgl_display_string
												(BGl_string4718z00zzbackend_c_prototypez00,
												BgL_port4250z00_1271);
											{	/* BackEnd/c_proto.scm 295 */
												long BgL_arg4419z00_1272;

												BgL_arg4419z00_1272 = STRING_LENGTH(BgL_ostrz00_32);
												bgl_display_obj(BINT(BgL_arg4419z00_1272),
													BgL_port4250z00_1271);
											}
											bgl_display_string
												(BGl_string4719z00zzbackend_c_prototypez00,
												BgL_port4250z00_1271);
											return bgl_display_char(((unsigned char) '\n'),
												BgL_port4250z00_1271);
									}}
								else
									{	/* BackEnd/c_proto.scm 297 */
										long BgL_g4235z00_1273;

										BgL_g4235z00_1273 =
											(BgL_readz00_1264 +
											(long)
											CINT
											(BGl_za2maxzd2czd2tokenzd2lengthza2zd2zzengine_paramz00));
										{
											long BgL_offsetz00_1275;

											BgL_offsetz00_1275 = BgL_g4235z00_1273;
										BgL_zc3anonymousza34420ze3z83_1276:
											if (
												((BgL_readz00_1264 + ((long) 3)) >= BgL_offsetz00_1275))
												{	/* BackEnd/c_proto.scm 299 */
													return
														BGl_internalzd2errorzd2zztools_errorz00
														(BGl_string4720z00zzbackend_c_prototypez00,
														BGl_string4721z00zzbackend_c_prototypez00,
														BgL_ostrz00_32);
												}
											else
												{	/* BackEnd/c_proto.scm 299 */
													if (
														(STRING_REF(BgL_strz00_1256,
																(BgL_offsetz00_1275 - ((long) 1))) ==
															((unsigned char) '\\')))
														{
															long BgL_offsetz00_3183;

															BgL_offsetz00_3183 =
																(BgL_offsetz00_1275 - ((long) 1));
															BgL_offsetz00_1275 = BgL_offsetz00_3183;
															goto BgL_zc3anonymousza34420ze3z83_1276;
														}
													else
														{	/* BackEnd/c_proto.scm 305 */
															bool_t BgL_testz00_3185;

															if (
																(STRING_REF(BgL_strz00_1256,
																		(BgL_offsetz00_1275 - ((long) 2))) ==
																	((unsigned char) '\\')))
																{	/* BackEnd/c_proto.scm 306 */
																	unsigned char BgL_auxz00_3190;

																	BgL_auxz00_3190 =
																		STRING_REF(BgL_strz00_1256,
																		(BgL_offsetz00_1275 - ((long) 1)));
																	BgL_testz00_3185 = isdigit(BgL_auxz00_3190);
																}
															else
																{	/* BackEnd/c_proto.scm 305 */
																	BgL_testz00_3185 = ((bool_t) 0);
																}
															if (BgL_testz00_3185)
																{
																	long BgL_offsetz00_3194;

																	BgL_offsetz00_3194 =
																		(BgL_offsetz00_1275 - ((long) 2));
																	BgL_offsetz00_1275 = BgL_offsetz00_3194;
																	goto BgL_zc3anonymousza34420ze3z83_1276;
																}
															else
																{	/* BackEnd/c_proto.scm 308 */
																	bool_t BgL_testz00_3196;

																	if (
																		(STRING_REF(BgL_strz00_1256,
																				(BgL_offsetz00_1275 - ((long) 3))) ==
																			((unsigned char) '\\')))
																		{	/* BackEnd/c_proto.scm 309 */
																			bool_t BgL_testz00_3201;

																			{	/* BackEnd/c_proto.scm 309 */
																				unsigned char BgL_auxz00_3202;

																				BgL_auxz00_3202 =
																					STRING_REF(BgL_strz00_1256,
																					(BgL_offsetz00_1275 - ((long) 2)));
																				BgL_testz00_3201 =
																					isdigit(BgL_auxz00_3202);
																			}
																			if (BgL_testz00_3201)
																				{	/* BackEnd/c_proto.scm 310 */
																					unsigned char BgL_auxz00_3206;

																					BgL_auxz00_3206 =
																						STRING_REF(BgL_strz00_1256,
																						(BgL_offsetz00_1275 - ((long) 1)));
																					BgL_testz00_3196 =
																						isdigit(BgL_auxz00_3206);
																				}
																			else
																				{	/* BackEnd/c_proto.scm 309 */
																					BgL_testz00_3196 = ((bool_t) 0);
																				}
																		}
																	else
																		{	/* BackEnd/c_proto.scm 308 */
																			BgL_testz00_3196 = ((bool_t) 0);
																		}
																	if (BgL_testz00_3196)
																		{
																			long BgL_offsetz00_3210;

																			BgL_offsetz00_3210 =
																				(BgL_offsetz00_1275 - ((long) 3));
																			BgL_offsetz00_1275 = BgL_offsetz00_3210;
																			goto BgL_zc3anonymousza34420ze3z83_1276;
																		}
																	else
																		{	/* BackEnd/c_proto.scm 308 */
																			{	/* BackEnd/c_proto.scm 313 */
																				obj_t BgL_port4236z00_1284;

																				BgL_port4236z00_1284 =
																					BGl_za2czd2portza2zd2zzbackend_c_emitz00;
																				bgl_display_obj(c_substring
																					(BgL_strz00_1256, BgL_readz00_1264,
																						BgL_offsetz00_1275),
																					BgL_port4236z00_1284);
																				bgl_display_string
																					(BGl_string4722z00zzbackend_c_prototypez00,
																					BgL_port4236z00_1284);
																			}
																			{
																				long BgL_rlenz00_3216;

																				long BgL_readz00_3215;

																				BgL_readz00_3215 = BgL_offsetz00_1275;
																				BgL_rlenz00_3216 =
																					(BgL_rlenz00_1265 -
																					(BgL_offsetz00_1275 -
																						BgL_readz00_1264));
																				BgL_rlenz00_1265 = BgL_rlenz00_3216;
																				BgL_readz00_1264 = BgL_readz00_3215;
																				goto BgL_zc3anonymousza34414ze3z83_1266;
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



/* emit-cnst-real */
	obj_t BGl_emitzd2cnstzd2realz00zzbackend_c_prototypez00(obj_t BgL_realz00_34,
		BgL_globalz00_bglt BgL_globalz00_35)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 321 */
			BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
				(BgL_variablez00_bglt) (BgL_globalz00_35));
			if (BGL_IS_NAN(REAL_TO_DOUBLE(BgL_realz00_34)))
				{	/* BackEnd/c_proto.scm 325 */
					obj_t BgL_port4251z00_1309;

					BgL_port4251z00_1309 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
					bgl_display_string(BGl_string4723z00zzbackend_c_prototypez00,
						BgL_port4251z00_1309);
					{	/* BackEnd/c_proto.scm 325 */
						obj_t BgL_arg4451z00_1310;

						{
							BgL_variablez00_bglt BgL_auxz00_3225;

							BgL_auxz00_3225 = (BgL_variablez00_bglt) (BgL_globalz00_35);
							BgL_arg4451z00_1310 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_3225))->BgL_namez00);
						}
						bgl_display_obj(BgL_arg4451z00_1310, BgL_port4251z00_1309);
					}
					bgl_display_string(BGl_string4724z00zzbackend_c_prototypez00,
						BgL_port4251z00_1309);
					return bgl_display_char(((unsigned char) '\n'), BgL_port4251z00_1309);
				}
			else
				{	/* BackEnd/c_proto.scm 326 */
					bool_t BgL_testz00_3231;

					if (BGL_IS_INF(REAL_TO_DOUBLE(BgL_realz00_34)))
						{	/* BackEnd/c_proto.scm 326 */
							BgL_testz00_3231 =
								(REAL_TO_DOUBLE(BgL_realz00_34) > ((double) 0.0));
						}
					else
						{	/* BackEnd/c_proto.scm 326 */
							BgL_testz00_3231 = ((bool_t) 0);
						}
					if (BgL_testz00_3231)
						{	/* BackEnd/c_proto.scm 327 */
							obj_t BgL_port4252z00_1312;

							BgL_port4252z00_1312 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
							bgl_display_string(BGl_string4723z00zzbackend_c_prototypez00,
								BgL_port4252z00_1312);
							{	/* BackEnd/c_proto.scm 327 */
								obj_t BgL_arg4453z00_1313;

								{
									BgL_variablez00_bglt BgL_auxz00_3238;

									BgL_auxz00_3238 = (BgL_variablez00_bglt) (BgL_globalz00_35);
									BgL_arg4453z00_1313 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_3238))->
										BgL_namez00);
								}
								bgl_display_obj(BgL_arg4453z00_1313, BgL_port4252z00_1312);
							}
							bgl_display_string(BGl_string4725z00zzbackend_c_prototypez00,
								BgL_port4252z00_1312);
							return bgl_display_char(((unsigned char) '\n'),
								BgL_port4252z00_1312);
						}
					else
						{	/* BackEnd/c_proto.scm 326 */
							if (BGL_IS_INF(REAL_TO_DOUBLE(BgL_realz00_34)))
								{	/* BackEnd/c_proto.scm 329 */
									obj_t BgL_port4253z00_1315;

									BgL_port4253z00_1315 =
										BGl_za2czd2portza2zd2zzbackend_c_emitz00;
									bgl_display_string(BGl_string4723z00zzbackend_c_prototypez00,
										BgL_port4253z00_1315);
									{	/* BackEnd/c_proto.scm 329 */
										obj_t BgL_arg4455z00_1316;

										{
											BgL_variablez00_bglt BgL_auxz00_3248;

											BgL_auxz00_3248 =
												(BgL_variablez00_bglt) (BgL_globalz00_35);
											BgL_arg4455z00_1316 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_3248))->
												BgL_namez00);
										}
										bgl_display_obj(BgL_arg4455z00_1316, BgL_port4253z00_1315);
									}
									bgl_display_string(BGl_string4726z00zzbackend_c_prototypez00,
										BgL_port4253z00_1315);
									return bgl_display_char(((unsigned char) '\n'),
										BgL_port4253z00_1315);
								}
							else
								{	/* BackEnd/c_proto.scm 331 */
									obj_t BgL_port4254z00_1317;

									BgL_port4254z00_1317 =
										BGl_za2czd2portza2zd2zzbackend_c_emitz00;
									bgl_display_string(BGl_string4727z00zzbackend_c_prototypez00,
										BgL_port4254z00_1317);
									{	/* BackEnd/c_proto.scm 332 */
										obj_t BgL_arg4456z00_1318;

										{
											BgL_variablez00_bglt BgL_auxz00_3255;

											BgL_auxz00_3255 =
												(BgL_variablez00_bglt) (BgL_globalz00_35);
											BgL_arg4456z00_1318 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_3255))->
												BgL_namez00);
										}
										bgl_display_obj(BgL_arg4456z00_1318, BgL_port4254z00_1317);
									}
									bgl_display_string(BGl_string4704z00zzbackend_c_prototypez00,
										BgL_port4254z00_1317);
									{	/* BackEnd/c_proto.scm 333 */
										obj_t BgL_arg4457z00_1319;

										{	/* BackEnd/c_proto.scm 333 */
											obj_t BgL_arg4458z00_1320;

											{	/* BackEnd/c_proto.scm 333 */
												obj_t BgL_arg4459z00_1321;

												{
													BgL_variablez00_bglt BgL_auxz00_3260;

													BgL_auxz00_3260 =
														(BgL_variablez00_bglt) (BgL_globalz00_35);
													BgL_arg4459z00_1321 =
														(((BgL_variablez00_bglt) CREF(BgL_auxz00_3260))->
														BgL_namez00);
												}
												BgL_arg4458z00_1320 =
													BGl_gensymz00zz__r4_symbols_6_4z00
													(BgL_arg4459z00_1321);
											}
											BgL_arg4457z00_1319 =
												BGl_idzd2ze3namez31zzast_identz00(BgL_arg4458z00_1320);
										}
										bgl_display_obj(BgL_arg4457z00_1319, BgL_port4254z00_1317);
									}
									bgl_display_string(BGl_string4704z00zzbackend_c_prototypez00,
										BgL_port4254z00_1317);
									bgl_display_obj(BgL_realz00_34, BgL_port4254z00_1317);
									bgl_display_string(BGl_string4719z00zzbackend_c_prototypez00,
										BgL_port4254z00_1317);
									return bgl_display_char(((unsigned char) '\n'),
										BgL_port4254z00_1317);
		}}}}
	}



/* emit-cnst-elong */
	obj_t BGl_emitzd2cnstzd2elongz00zzbackend_c_prototypez00(obj_t
		BgL_elongz00_36, BgL_globalz00_bglt BgL_globalz00_37)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 339 */
			BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
				(BgL_variablez00_bglt) (BgL_globalz00_37));
			{	/* BackEnd/c_proto.scm 341 */
				obj_t BgL_port4255z00_1323;

				BgL_port4255z00_1323 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				bgl_display_string(BGl_string4728z00zzbackend_c_prototypez00,
					BgL_port4255z00_1323);
				{	/* BackEnd/c_proto.scm 343 */
					obj_t BgL_arg4461z00_1324;

					{
						BgL_variablez00_bglt BgL_auxz00_3273;

						BgL_auxz00_3273 = (BgL_variablez00_bglt) (BgL_globalz00_37);
						BgL_arg4461z00_1324 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_3273))->BgL_namez00);
					}
					bgl_display_obj(BgL_arg4461z00_1324, BgL_port4255z00_1323);
				}
				bgl_display_string(BGl_string4704z00zzbackend_c_prototypez00,
					BgL_port4255z00_1323);
				{	/* BackEnd/c_proto.scm 345 */
					obj_t BgL_arg4462z00_1325;

					{	/* BackEnd/c_proto.scm 345 */
						obj_t BgL_arg4463z00_1326;

						{	/* BackEnd/c_proto.scm 345 */
							obj_t BgL_arg4464z00_1327;

							{
								BgL_variablez00_bglt BgL_auxz00_3278;

								BgL_auxz00_3278 = (BgL_variablez00_bglt) (BgL_globalz00_37);
								BgL_arg4464z00_1327 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_3278))->BgL_namez00);
							}
							BgL_arg4463z00_1326 =
								BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg4464z00_1327);
						}
						BgL_arg4462z00_1325 =
							BGl_idzd2ze3namez31zzast_identz00(BgL_arg4463z00_1326);
					}
					bgl_display_obj(BgL_arg4462z00_1325, BgL_port4255z00_1323);
				}
				bgl_display_string(BGl_string4704z00zzbackend_c_prototypez00,
					BgL_port4255z00_1323);
				{	/* BackEnd/c_proto.scm 347 */
					obj_t BgL_arg4465z00_1328;

					BgL_arg4465z00_1328 =
						BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BELONG_TO_LONG
						(BgL_elongz00_36), BNIL);
					bgl_display_obj(BgL_arg4465z00_1328, BgL_port4255z00_1323);
				}
				bgl_display_string(BGl_string4719z00zzbackend_c_prototypez00,
					BgL_port4255z00_1323);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4255z00_1323);
		}}
	}



/* emit-cnst-llong */
	obj_t BGl_emitzd2cnstzd2llongz00zzbackend_c_prototypez00(obj_t
		BgL_llongz00_38, BgL_globalz00_bglt BgL_globalz00_39)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 353 */
			BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
				(BgL_variablez00_bglt) (BgL_globalz00_39));
			{	/* BackEnd/c_proto.scm 355 */
				obj_t BgL_port4256z00_1330;

				BgL_port4256z00_1330 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				bgl_display_string(BGl_string4729z00zzbackend_c_prototypez00,
					BgL_port4256z00_1330);
				{	/* BackEnd/c_proto.scm 357 */
					obj_t BgL_arg4467z00_1331;

					{
						BgL_variablez00_bglt BgL_auxz00_3293;

						BgL_auxz00_3293 = (BgL_variablez00_bglt) (BgL_globalz00_39);
						BgL_arg4467z00_1331 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_3293))->BgL_namez00);
					}
					bgl_display_obj(BgL_arg4467z00_1331, BgL_port4256z00_1330);
				}
				bgl_display_string(BGl_string4704z00zzbackend_c_prototypez00,
					BgL_port4256z00_1330);
				{	/* BackEnd/c_proto.scm 359 */
					obj_t BgL_arg4468z00_1332;

					{	/* BackEnd/c_proto.scm 359 */
						obj_t BgL_arg4469z00_1333;

						{	/* BackEnd/c_proto.scm 359 */
							obj_t BgL_arg4470z00_1334;

							{
								BgL_variablez00_bglt BgL_auxz00_3298;

								BgL_auxz00_3298 = (BgL_variablez00_bglt) (BgL_globalz00_39);
								BgL_arg4470z00_1334 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_3298))->BgL_namez00);
							}
							BgL_arg4469z00_1333 =
								BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg4470z00_1334);
						}
						BgL_arg4468z00_1332 =
							BGl_idzd2ze3namez31zzast_identz00(BgL_arg4469z00_1333);
					}
					bgl_display_obj(BgL_arg4468z00_1332, BgL_port4256z00_1330);
				}
				bgl_display_string(BGl_string4704z00zzbackend_c_prototypez00,
					BgL_port4256z00_1330);
				bgl_display_obj(BGl_llongzd2ze3czd2isoze3zzbackend_c_emitz00
					(BLLONG_TO_LLONG(BgL_llongz00_38)), BgL_port4256z00_1330);
				bgl_display_string(BGl_string4719z00zzbackend_c_prototypez00,
					BgL_port4256z00_1330);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4256z00_1330);
		}}
	}



/* emit-cnst-sfun/sgfun */
	obj_t BGl_emitzd2cnstzd2sfunzf2sgfunzf2zzbackend_c_prototypez00(obj_t
		BgL_funz00_44, BgL_globalz00_bglt BgL_globalz00_45, obj_t BgL_kindz00_46)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 379 */
			if (
				((((BgL_globalz00_bglt) CREF(BgL_globalz00_45))->BgL_importz00) ==
					CNST_TABLE_REF(((long) 13))))
				{	/* BackEnd/c_proto.scm 381 */
					BgL_valuez00_bglt BgL_arg4473z00_1337;

					{
						BgL_variablez00_bglt BgL_auxz00_3314;

						BgL_auxz00_3314 = (BgL_variablez00_bglt) (BgL_globalz00_45);
						BgL_arg4473z00_1337 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_3314))->BgL_valuez00);
					}
					{	/* BackEnd/c_proto.scm 381 */
						BgL_variablez00_bglt BgL_variablez00_2428;

						BgL_variablez00_2428 = (BgL_variablez00_bglt) (BgL_globalz00_45);
						{	/* BackEnd/c_proto.scm 381 */
							obj_t BgL_method4276z00_2429;

							{	/* BackEnd/c_proto.scm 381 */
								BgL_objectz00_bglt BgL_objz00_2430;

								BgL_objz00_2430 = (BgL_objectz00_bglt) (BgL_arg4473z00_1337);
								{	/* BackEnd/c_proto.scm 381 */
									long BgL_objzd2classzd2numz00_2431;

									BgL_objzd2classzd2numz00_2431 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2430);
									{	/* BackEnd/c_proto.scm 381 */
										obj_t BgL_arg2643z00_2432;

										BgL_arg2643z00_2432 =
											PROCEDURE_REF
											(BGl_emitzd2prototypezd2envz00zzbackend_c_prototypez00,
											(int) (((long) 1)));
										{	/* BackEnd/c_proto.scm 381 */
											obj_t BgL_arrayz00_2434;

											int BgL_offsetz00_2435;

											BgL_arrayz00_2434 = BgL_arg2643z00_2432;
											BgL_offsetz00_2435 =
												(int) (BgL_objzd2classzd2numz00_2431);
											{	/* BackEnd/c_proto.scm 381 */
												long BgL_offsetz00_2436;

												BgL_offsetz00_2436 =
													((long) (BgL_offsetz00_2435) - OBJECT_TYPE);
												{	/* BackEnd/c_proto.scm 381 */
													long BgL_modz00_2437;

													{	/* BackEnd/c_proto.scm 381 */
														int BgL_arg2645z00_2438;

														BgL_arg2645z00_2438 = (int) (((long) 16));
														{	/* BackEnd/c_proto.scm 381 */
															long BgL_auxz00_3326;

															BgL_auxz00_3326 = (long) (BgL_arg2645z00_2438);
															BgL_modz00_2437 =
																(BgL_offsetz00_2436 / BgL_auxz00_3326);
													}}
													{	/* BackEnd/c_proto.scm 381 */
														long BgL_restz00_2439;

														{	/* BackEnd/c_proto.scm 381 */
															int BgL_arg2644z00_2440;

															BgL_arg2644z00_2440 = (int) (((long) 16));
															{	/* BackEnd/c_proto.scm 381 */
																long BgL_auxz00_3330;

																BgL_auxz00_3330 = (long) (BgL_arg2644z00_2440);
																BgL_restz00_2439 =
																	(BgL_offsetz00_2436 % BgL_auxz00_3330);
														}}
														{	/* BackEnd/c_proto.scm 381 */

															BgL_method4276z00_2429 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2434,
																	(int) (BgL_modz00_2437)),
																(int) (BgL_restz00_2439));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method4276z00_2429) (BgL_method4276z00_2429,
								(obj_t) (BgL_arg4473z00_1337),
								(obj_t) (BgL_variablez00_2428), BEOA);
						}
					}
				}
			else
				{	/* BackEnd/c_proto.scm 382 */
					obj_t BgL_actualsz00_1338;

					{
						BgL_appz00_bglt BgL_auxz00_3341;

						BgL_auxz00_3341 = (BgL_appz00_bglt) (BgL_funz00_44);
						BgL_actualsz00_1338 =
							(((BgL_appz00_bglt) CREF(BgL_auxz00_3341))->BgL_argsz00);
					}
					{	/* BackEnd/c_proto.scm 382 */
						obj_t BgL_entryz00_1339;

						BgL_entryz00_1339 = CAR(BgL_actualsz00_1338);
						{	/* BackEnd/c_proto.scm 383 */
							obj_t BgL_arityz00_1340;

							{	/* BackEnd/c_proto.scm 384 */
								obj_t BgL_arg4504z00_1377;

								{	/* BackEnd/c_proto.scm 384 */
									obj_t BgL_pairz00_2456;

									BgL_pairz00_2456 = BgL_actualsz00_1338;
									BgL_arg4504z00_1377 = CAR(CDR(BgL_pairz00_2456));
								}
								BgL_arityz00_1340 =
									BGl_getzd2nodezd2atomzd2valuezd2zzcnst_nodez00(
									(BgL_nodez00_bglt) (BgL_arg4504z00_1377));
							}
							{	/* BackEnd/c_proto.scm 384 */
								obj_t BgL_vnamez00_1341;

								BgL_vnamez00_1341 =
									BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
									(BgL_variablez00_bglt) (BgL_globalz00_45));
								{	/* BackEnd/c_proto.scm 385 */
									obj_t BgL_namez00_1342;

									{	/* BackEnd/c_proto.scm 386 */
										BgL_variablez00_bglt BgL_arg4503z00_1376;

										{
											BgL_varz00_bglt BgL_auxz00_3351;

											BgL_auxz00_3351 = (BgL_varz00_bglt) (BgL_entryz00_1339);
											BgL_arg4503z00_1376 =
												(((BgL_varz00_bglt) CREF(BgL_auxz00_3351))->
												BgL_variablez00);
										}
										BgL_namez00_1342 =
											BGl_setzd2variablezd2namez12z12zzbackend_cplibz00
											(BgL_arg4503z00_1376);
									}
									{	/* BackEnd/c_proto.scm 386 */

										{	/* BackEnd/c_proto.scm 388 */
											bool_t BgL_testz00_3355;

											if (BGl_iszd2azf3z21zz__objectz00(BgL_entryz00_1339,
													BGl_varz00zzast_nodez00))
												{	/* BackEnd/c_proto.scm 389 */
													bool_t BgL_testz00_3358;

													{	/* BackEnd/c_proto.scm 389 */
														BgL_variablez00_bglt BgL_arg4502z00_1375;

														{
															BgL_varz00_bglt BgL_auxz00_3359;

															BgL_auxz00_3359 =
																(BgL_varz00_bglt) (BgL_entryz00_1339);
															BgL_arg4502z00_1375 =
																(((BgL_varz00_bglt) CREF(BgL_auxz00_3359))->
																BgL_variablez00);
														}
														{	/* BackEnd/c_proto.scm 389 */
															obj_t BgL_obj2096z00_2463;

															BgL_obj2096z00_2463 =
																(obj_t) (BgL_arg4502z00_1375);
															BgL_testz00_3358 =
																BGl_iszd2azf3z21zz__objectz00
																(BgL_obj2096z00_2463,
																BGl_globalz00zzast_varz00);
														}
													}
													if (BgL_testz00_3358)
														{	/* BackEnd/c_proto.scm 391 */
															bool_t BgL__ortest_4237z00_1368;

															{	/* BackEnd/c_proto.scm 391 */
																obj_t BgL_arg4499z00_1372;

																{	/* BackEnd/c_proto.scm 391 */
																	BgL_sfunz00_bglt BgL_obj2243z00_2466;

																	{	/* BackEnd/c_proto.scm 391 */
																		BgL_valuez00_bglt BgL_auxz00_3364;

																		{	/* BackEnd/c_proto.scm 391 */
																			BgL_variablez00_bglt BgL_obj1956z00_2465;

																			{
																				BgL_varz00_bglt BgL_auxz00_3365;

																				BgL_auxz00_3365 =
																					(BgL_varz00_bglt) (BgL_entryz00_1339);
																				BgL_obj1956z00_2465 =
																					(((BgL_varz00_bglt)
																						CREF(BgL_auxz00_3365))->
																					BgL_variablez00);
																			}
																			BgL_auxz00_3364 =
																				(((BgL_variablez00_bglt)
																					CREF(BgL_obj1956z00_2465))->
																				BgL_valuez00);
																		}
																		BgL_obj2243z00_2466 =
																			(BgL_sfunz00_bglt) (BgL_auxz00_3364);
																	}
																	BgL_arg4499z00_1372 =
																		(((BgL_sfunz00_bglt)
																			CREF(BgL_obj2243z00_2466))->
																		BgL_thezd2closurezd2globalz00);
																}
																BgL__ortest_4237z00_1368 =
																	BGl_globalzd2optionalzf3z21zzast_varz00
																	(BgL_arg4499z00_1372);
															}
															if (BgL__ortest_4237z00_1368)
																{	/* BackEnd/c_proto.scm 391 */
																	BgL_testz00_3355 = BgL__ortest_4237z00_1368;
																}
															else
																{	/* BackEnd/c_proto.scm 392 */
																	obj_t BgL_arg4496z00_1369;

																	{	/* BackEnd/c_proto.scm 392 */
																		BgL_sfunz00_bglt BgL_obj2243z00_2469;

																		{	/* BackEnd/c_proto.scm 392 */
																			BgL_valuez00_bglt BgL_auxz00_3373;

																			{	/* BackEnd/c_proto.scm 392 */
																				BgL_variablez00_bglt
																					BgL_obj1956z00_2468;
																				{
																					BgL_varz00_bglt BgL_auxz00_3374;

																					BgL_auxz00_3374 =
																						(BgL_varz00_bglt)
																						(BgL_entryz00_1339);
																					BgL_obj1956z00_2468 =
																						(((BgL_varz00_bglt)
																							CREF(BgL_auxz00_3374))->
																						BgL_variablez00);
																				}
																				BgL_auxz00_3373 =
																					(((BgL_variablez00_bglt)
																						CREF(BgL_obj1956z00_2468))->
																					BgL_valuez00);
																			}
																			BgL_obj2243z00_2469 =
																				(BgL_sfunz00_bglt) (BgL_auxz00_3373);
																		}
																		BgL_arg4496z00_1369 =
																			(((BgL_sfunz00_bglt)
																				CREF(BgL_obj2243z00_2469))->
																			BgL_thezd2closurezd2globalz00);
																	}
																	BgL_testz00_3355 =
																		BGl_globalzd2keyzf3z21zzast_varz00
																		(BgL_arg4496z00_1369);
																}
														}
													else
														{	/* BackEnd/c_proto.scm 389 */
															BgL_testz00_3355 = ((bool_t) 0);
														}
												}
											else
												{	/* BackEnd/c_proto.scm 388 */
													BgL_testz00_3355 = ((bool_t) 0);
												}
											if (BgL_testz00_3355)
												{	/* BackEnd/c_proto.scm 393 */
													obj_t BgL_port4257z00_1344;

													BgL_port4257z00_1344 =
														BGl_za2czd2portza2zd2zzbackend_c_emitz00;
													{	/* BackEnd/c_proto.scm 394 */
														obj_t BgL_arg4475z00_1345;

														if (
															((((BgL_globalz00_bglt) CREF(BgL_globalz00_45))->
																	BgL_importz00) == CNST_TABLE_REF(((long) 0))))
															{	/* BackEnd/c_proto.scm 394 */
																BgL_arg4475z00_1345 =
																	string_append_3
																	(BGl_string4730z00zzbackend_c_prototypez00,
																	BgL_kindz00_46,
																	BGl_string4731z00zzbackend_c_prototypez00);
															}
														else
															{	/* BackEnd/c_proto.scm 394 */
																BgL_arg4475z00_1345 =
																	string_append_3
																	(BGl_string4732z00zzbackend_c_prototypez00,
																	BgL_kindz00_46,
																	BGl_string4731z00zzbackend_c_prototypez00);
															}
														bgl_display_obj(BgL_arg4475z00_1345,
															BgL_port4257z00_1344);
													}
													bgl_display_obj(BgL_vnamez00_1341,
														BgL_port4257z00_1344);
													bgl_display_string
														(BGl_string4704z00zzbackend_c_prototypez00,
														BgL_port4257z00_1344);
													bgl_display_obj(BGl_idzd2ze3namez31zzast_identz00
														(BGl_gensymz00zz__r4_symbols_6_4z00
															(BgL_namez00_1342)), BgL_port4257z00_1344);
													bgl_display_string
														(BGl_string4733z00zzbackend_c_prototypez00,
														BgL_port4257z00_1344);
													bgl_display_string
														(BGl_string4704z00zzbackend_c_prototypez00,
														BgL_port4257z00_1344);
													bgl_display_obj(BgL_namez00_1342,
														BgL_port4257z00_1344);
													bgl_display_string
														(BGl_string4734z00zzbackend_c_prototypez00,
														BgL_port4257z00_1344);
													bgl_display_fixnum(BINT(((long) -1)),
														BgL_port4257z00_1344);
													bgl_display_string
														(BGl_string4719z00zzbackend_c_prototypez00,
														BgL_port4257z00_1344);
													return bgl_display_char(((unsigned char) '\n'),
														BgL_port4257z00_1344);
												}
											else
												{	/* BackEnd/c_proto.scm 388 */
													if (((long) CINT(BgL_arityz00_1340) >= ((long) 0)))
														{	/* BackEnd/c_proto.scm 408 */
															obj_t BgL_port4258z00_1352;

															BgL_port4258z00_1352 =
																BGl_za2czd2portza2zd2zzbackend_c_emitz00;
															{	/* BackEnd/c_proto.scm 409 */
																obj_t BgL_arg4482z00_1353;

																if (
																	((((BgL_globalz00_bglt)
																				CREF(BgL_globalz00_45))->
																			BgL_importz00) ==
																		CNST_TABLE_REF(((long) 0))))
																	{	/* BackEnd/c_proto.scm 409 */
																		BgL_arg4482z00_1353 =
																			string_append_3
																			(BGl_string4730z00zzbackend_c_prototypez00,
																			BgL_kindz00_46,
																			BGl_string4731z00zzbackend_c_prototypez00);
																	}
																else
																	{	/* BackEnd/c_proto.scm 409 */
																		BgL_arg4482z00_1353 =
																			string_append_3
																			(BGl_string4732z00zzbackend_c_prototypez00,
																			BgL_kindz00_46,
																			BGl_string4731z00zzbackend_c_prototypez00);
																	}
																bgl_display_obj(BgL_arg4482z00_1353,
																	BgL_port4258z00_1352);
															}
															bgl_display_obj(BgL_vnamez00_1341,
																BgL_port4258z00_1352);
															bgl_display_string
																(BGl_string4704z00zzbackend_c_prototypez00,
																BgL_port4258z00_1352);
															bgl_display_obj(BGl_idzd2ze3namez31zzast_identz00
																(BGl_gensymz00zz__r4_symbols_6_4z00
																	(BgL_namez00_1342)), BgL_port4258z00_1352);
															bgl_display_string
																(BGl_string4704z00zzbackend_c_prototypez00,
																BgL_port4258z00_1352);
															bgl_display_obj(BgL_namez00_1342,
																BgL_port4258z00_1352);
															bgl_display_string
																(BGl_string4735z00zzbackend_c_prototypez00,
																BgL_port4258z00_1352);
															bgl_display_obj(BgL_arityz00_1340,
																BgL_port4258z00_1352);
															bgl_display_string
																(BGl_string4719z00zzbackend_c_prototypez00,
																BgL_port4258z00_1352);
															return bgl_display_char(((unsigned char) '\n'),
																BgL_port4258z00_1352);
														}
													else
														{	/* BackEnd/c_proto.scm 421 */
															obj_t BgL_port4259z00_1359;

															BgL_port4259z00_1359 =
																BGl_za2czd2portza2zd2zzbackend_c_emitz00;
															{	/* BackEnd/c_proto.scm 422 */
																obj_t BgL_arg4488z00_1360;

																if (
																	((((BgL_globalz00_bglt)
																				CREF(BgL_globalz00_45))->
																			BgL_importz00) ==
																		CNST_TABLE_REF(((long) 0))))
																	{	/* BackEnd/c_proto.scm 422 */
																		BgL_arg4488z00_1360 =
																			string_append_3
																			(BGl_string4730z00zzbackend_c_prototypez00,
																			BgL_kindz00_46,
																			BGl_string4731z00zzbackend_c_prototypez00);
																	}
																else
																	{	/* BackEnd/c_proto.scm 422 */
																		BgL_arg4488z00_1360 =
																			string_append_3
																			(BGl_string4732z00zzbackend_c_prototypez00,
																			BgL_kindz00_46,
																			BGl_string4731z00zzbackend_c_prototypez00);
																	}
																bgl_display_obj(BgL_arg4488z00_1360,
																	BgL_port4259z00_1359);
															}
															bgl_display_obj(BgL_vnamez00_1341,
																BgL_port4259z00_1359);
															bgl_display_string
																(BGl_string4704z00zzbackend_c_prototypez00,
																BgL_port4259z00_1359);
															bgl_display_obj(BGl_idzd2ze3namez31zzast_identz00
																(BGl_gensymz00zz__r4_symbols_6_4z00
																	(BgL_namez00_1342)), BgL_port4259z00_1359);
															bgl_display_string
																(BGl_string4736z00zzbackend_c_prototypez00,
																BgL_port4259z00_1359);
															bgl_display_string
																(BGl_string4704z00zzbackend_c_prototypez00,
																BgL_port4259z00_1359);
															bgl_display_obj(BgL_namez00_1342,
																BgL_port4259z00_1359);
															bgl_display_string
																(BGl_string4737z00zzbackend_c_prototypez00,
																BgL_port4259z00_1359);
															bgl_display_obj(BgL_arityz00_1340,
																BgL_port4259z00_1359);
															bgl_display_string
																(BGl_string4719z00zzbackend_c_prototypez00,
																BgL_port4259z00_1359);
															return bgl_display_char(((unsigned char) '\n'),
																BgL_port4259z00_1359);
		}}}}}}}}}}
	}



/* emit-cnst-stvector */
	obj_t BGl_emitzd2cnstzd2stvectorz00zzbackend_c_prototypez00(obj_t
		BgL_tvecz00_47, BgL_globalz00_bglt BgL_globalz00_48)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 438 */
			{	/* BackEnd/c_proto.scm 439 */
				obj_t BgL_vecz00_1380;

				BgL_vecz00_1380 = STRUCT_REF(BgL_tvecz00_47, (int) (((long) 1)));
				{	/* BackEnd/c_proto.scm 439 */
					BgL_typez00_bglt BgL_itypez00_1381;

					{	/* BackEnd/c_proto.scm 440 */
						BgL_tvecz00_bglt BgL_obj3622z00_2514;

						{	/* BackEnd/c_proto.scm 440 */
							obj_t BgL_sz00_2512;

							BgL_sz00_2512 = BgL_tvecz00_47;
							BgL_obj3622z00_2514 =
								(BgL_tvecz00_bglt) (STRUCT_REF(BgL_sz00_2512,
									(int) (((long) 0))));
						}
						{
							obj_t BgL_auxz00_3446;

							{	/* BackEnd/c_proto.scm 440 */
								BgL_objectz00_bglt BgL_auxz00_3447;

								BgL_auxz00_3447 = (BgL_objectz00_bglt) (BgL_obj3622z00_2514);
								BgL_auxz00_3446 = BGL_OBJECT_WIDENING(BgL_auxz00_3447);
							}
							BgL_itypez00_1381 =
								(((BgL_tvecz00_bglt) CREF(BgL_auxz00_3446))->
								BgL_itemzd2typezd2);
					}}
					{	/* BackEnd/c_proto.scm 440 */
						obj_t BgL_czd2veczd2_1382;

						BgL_czd2veczd2_1382 =
							BGl_tvectorzd2ze3czd2vectorze3zztvector_cnstz00(BgL_tvecz00_47);
						{	/* BackEnd/c_proto.scm 441 */

							BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
								(BgL_variablez00_bglt) (BgL_globalz00_48));
							{	/* BackEnd/c_proto.scm 443 */
								obj_t BgL_auxz00_1383;

								{	/* BackEnd/c_proto.scm 443 */
									obj_t BgL_arg4511z00_1389;

									{	/* BackEnd/c_proto.scm 443 */
										obj_t BgL_arg4512z00_1390;

										{
											BgL_variablez00_bglt BgL_auxz00_3454;

											BgL_auxz00_3454 =
												(BgL_variablez00_bglt) (BgL_globalz00_48);
											BgL_arg4512z00_1390 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_3454))->
												BgL_namez00);
										}
										BgL_arg4511z00_1389 =
											BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg4512z00_1390);
									}
									BgL_auxz00_1383 =
										BGl_idzd2ze3namez31zzast_identz00(BgL_arg4511z00_1389);
								}
								{	/* BackEnd/c_proto.scm 444 */
									obj_t BgL_port4260z00_1384;

									BgL_port4260z00_1384 =
										BGl_za2czd2portza2zd2zzbackend_c_emitz00;
									bgl_display_string(BGl_string4738z00zzbackend_c_prototypez00,
										BgL_port4260z00_1384);
									bgl_display_obj(BgL_auxz00_1383, BgL_port4260z00_1384);
									bgl_display_string(BGl_string4704z00zzbackend_c_prototypez00,
										BgL_port4260z00_1384);
									{	/* BackEnd/c_proto.scm 448 */
										int BgL_arg4507z00_1385;

										BgL_arg4507z00_1385 = VECTOR_LENGTH(BgL_vecz00_1380);
										bgl_display_obj(BINT(BgL_arg4507z00_1385),
											BgL_port4260z00_1384);
									}
									bgl_display_string(BGl_string4704z00zzbackend_c_prototypez00,
										BgL_port4260z00_1384);
									{	/* BackEnd/c_proto.scm 450 */
										obj_t BgL_arg4508z00_1386;

										{	/* BackEnd/c_proto.scm 450 */
											obj_t BgL_arg4509z00_1387;

											BgL_arg4509z00_1387 =
												(((BgL_typez00_bglt) CREF(BgL_itypez00_1381))->
												BgL_namez00);
											BgL_arg4508z00_1386 =
												BGl_stringzd2sanszd2z42z42zztype_toolsz00
												(BgL_arg4509z00_1387);
										}
										bgl_display_obj(BgL_arg4508z00_1386, BgL_port4260z00_1384);
									}
									bgl_display_string(BGl_string4739z00zzbackend_c_prototypez00,
										BgL_port4260z00_1384);
									bgl_display_obj(BgL_czd2veczd2_1382, BgL_port4260z00_1384);
									bgl_display_string(BGl_string4740z00zzbackend_c_prototypez00,
										BgL_port4260z00_1384);
									{	/* BackEnd/c_proto.scm 454 */
										obj_t BgL_arg4510z00_1388;

										{
											BgL_variablez00_bglt BgL_auxz00_3472;

											BgL_auxz00_3472 =
												(BgL_variablez00_bglt) (BgL_globalz00_48);
											BgL_arg4510z00_1388 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_3472))->
												BgL_namez00);
										}
										bgl_display_obj(BgL_arg4510z00_1388, BgL_port4260z00_1384);
									}
									bgl_display_string(BGl_string4704z00zzbackend_c_prototypez00,
										BgL_port4260z00_1384);
									bgl_display_obj(BgL_auxz00_1383, BgL_port4260z00_1384);
									bgl_display_string(BGl_string4719z00zzbackend_c_prototypez00,
										BgL_port4260z00_1384);
									return bgl_display_char(((unsigned char) '\n'),
										BgL_port4260z00_1384);
		}}}}}}}
	}



/* emit-class-types */
	BGL_EXPORTED_DEF obj_t
		BGl_emitzd2classzd2typesz00zzbackend_c_prototypez00(obj_t
		BgL_classzd2listzd2_53, obj_t BgL_oportz00_54)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 488 */
			{
				obj_t BgL_slotz00_1423;

				if (PAIRP(BgL_classzd2listzd2_53))
					{	/* BackEnd/c_proto.scm 499 */
						bgl_display_char(((unsigned char) '\n'), BgL_oportz00_54);
						bgl_display_string(BGl_string4745z00zzbackend_c_prototypez00,
							BgL_oportz00_54);
						bgl_display_char(((unsigned char) '\n'), BgL_oportz00_54);
						{	/* BackEnd/c_proto.scm 501 */
							obj_t BgL_g4274z00_1395;

							BgL_g4274z00_1395 = bgl_reverse_bang(BgL_classzd2listzd2_53);
							{
								obj_t BgL_l4272z00_1397;

								BgL_l4272z00_1397 = BgL_g4274z00_1395;
							BgL_zc3anonymousza34515ze3z83_1398:
								if (PAIRP(BgL_l4272z00_1397))
									{	/* BackEnd/c_proto.scm 519 */
										{	/* BackEnd/c_proto.scm 502 */
											obj_t BgL_classz00_1400;

											BgL_classz00_1400 = CAR(BgL_l4272z00_1397);
											if (
												(BgL_classz00_1400 ==
													BGl_getzd2objectzd2typez00zztype_cachez00()))
												{	/* BackEnd/c_proto.scm 502 */
													BFALSE;
												}
											else
												{	/* BackEnd/c_proto.scm 502 */
													bgl_display_string
														(BGl_string4746z00zzbackend_c_prototypez00,
														BgL_oportz00_54);
													{	/* BackEnd/c_proto.scm 504 */
														obj_t BgL_arg4518z00_1403;

														{
															BgL_typez00_bglt BgL_auxz00_3493;

															BgL_auxz00_3493 =
																(BgL_typez00_bglt) (BgL_classz00_1400);
															BgL_arg4518z00_1403 =
																(((BgL_typez00_bglt) CREF(BgL_auxz00_3493))->
																BgL_siza7eza7);
														}
														bgl_display_obj(BgL_arg4518z00_1403,
															BgL_oportz00_54);
													}
													bgl_display_string
														(BGl_string4747z00zzbackend_c_prototypez00,
														BgL_oportz00_54);
													bgl_display_char(((unsigned char) '\n'),
														BgL_oportz00_54);
													{	/* BackEnd/c_proto.scm 505 */
														bool_t BgL_testz00_3499;

														{	/* BackEnd/c_proto.scm 505 */
															BgL_tclassz00_bglt BgL_obj1677z00_2548;

															BgL_obj1677z00_2548 =
																(BgL_tclassz00_bglt) (BgL_classz00_1400);
															{	/* BackEnd/c_proto.scm 505 */
																obj_t BgL_auxz00_3501;

																{
																	obj_t BgL_auxz00_3502;

																	{	/* BackEnd/c_proto.scm 505 */
																		BgL_objectz00_bglt BgL_auxz00_3503;

																		BgL_auxz00_3503 =
																			(BgL_objectz00_bglt)
																			(BgL_obj1677z00_2548);
																		BgL_auxz00_3502 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_3503);
																	}
																	BgL_auxz00_3501 =
																		(((BgL_tclassz00_bglt)
																			CREF(BgL_auxz00_3502))->BgL_wideningz00);
																}
																BgL_testz00_3499 = CBOOL(BgL_auxz00_3501);
														}}
														if (BgL_testz00_3499)
															{	/* BackEnd/c_proto.scm 510 */
																bool_t BgL_testz00_3508;

																{	/* BackEnd/c_proto.scm 510 */
																	obj_t BgL_auxz00_3509;

																	{	/* BackEnd/c_proto.scm 510 */
																		BgL_tclassz00_bglt BgL_obj1673z00_2549;

																		BgL_obj1673z00_2549 =
																			(BgL_tclassz00_bglt) (BgL_classz00_1400);
																		{
																			obj_t BgL_auxz00_3511;

																			{	/* BackEnd/c_proto.scm 510 */
																				BgL_objectz00_bglt BgL_auxz00_3512;

																				BgL_auxz00_3512 =
																					(BgL_objectz00_bglt)
																					(BgL_obj1673z00_2549);
																				BgL_auxz00_3511 =
																					BGL_OBJECT_WIDENING(BgL_auxz00_3512);
																			}
																			BgL_auxz00_3509 =
																				(((BgL_tclassz00_bglt)
																					CREF(BgL_auxz00_3511))->BgL_slotsz00);
																		}
																	}
																	BgL_testz00_3508 = NULLP(BgL_auxz00_3509);
																}
																if (BgL_testz00_3508)
																	{	/* BackEnd/c_proto.scm 510 */
																		bgl_display_string
																			(BGl_string4748z00zzbackend_c_prototypez00,
																			BgL_oportz00_54);
																		bgl_display_char(((unsigned char) '\n'),
																			BgL_oportz00_54);
																	}
																else
																	{	/* BackEnd/c_proto.scm 510 */
																		BFALSE;
																	}
															}
														else
															{	/* BackEnd/c_proto.scm 505 */
																bgl_display_string
																	(BGl_string4749z00zzbackend_c_prototypez00,
																	BgL_oportz00_54);
																bgl_display_char(((unsigned char) '\n'),
																	BgL_oportz00_54);
																bgl_display_string
																	(BGl_string4750z00zzbackend_c_prototypez00,
																	BgL_oportz00_54);
																bgl_display_char(((unsigned char) '\n'),
																	BgL_oportz00_54);
													}}
													{	/* BackEnd/c_proto.scm 517 */
														obj_t BgL_g4270z00_1410;

														{	/* BackEnd/c_proto.scm 517 */
															BgL_tclassz00_bglt BgL_obj1673z00_2560;

															BgL_obj1673z00_2560 =
																(BgL_tclassz00_bglt) (BgL_classz00_1400);
															{
																obj_t BgL_auxz00_3524;

																{	/* BackEnd/c_proto.scm 517 */
																	BgL_objectz00_bglt BgL_auxz00_3525;

																	BgL_auxz00_3525 =
																		(BgL_objectz00_bglt) (BgL_obj1673z00_2560);
																	BgL_auxz00_3524 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_3525);
																}
																BgL_g4270z00_1410 =
																	(((BgL_tclassz00_bglt)
																		CREF(BgL_auxz00_3524))->BgL_slotsz00);
														}}
														{
															obj_t BgL_l4268z00_1412;

															BgL_l4268z00_1412 = BgL_g4270z00_1410;
														BgL_zc3anonymousza34522ze3z83_1413:
															if (PAIRP(BgL_l4268z00_1412))
																{	/* BackEnd/c_proto.scm 517 */
																	BgL_slotz00_1423 = CAR(BgL_l4268z00_1412);
																	{	/* BackEnd/c_proto.scm 491 */
																		obj_t BgL_cnamez00_1426;

																		{	/* BackEnd/c_proto.scm 491 */
																			obj_t BgL_arg4536z00_1435;

																			{
																				BgL_slotz00_bglt BgL_auxz00_3531;

																				BgL_auxz00_3531 =
																					(BgL_slotz00_bglt) (BgL_slotz00_1423);
																				BgL_arg4536z00_1435 =
																					(((BgL_slotz00_bglt)
																						CREF(BgL_auxz00_3531))->
																					BgL_typez00);
																			}
																			BgL_cnamez00_1426 =
																				BGl_crosszd2namezd2zzbackend_c_prototypez00
																				(BgL_arg4536z00_1435);
																		}
																		{	/* BackEnd/c_proto.scm 493 */
																			bool_t BgL_testz00_3535;

																			{	/* BackEnd/c_proto.scm 493 */
																				long BgL_auxz00_3536;

																				{	/* BackEnd/c_proto.scm 493 */
																					BgL_slotz00_bglt BgL_obj1893z00_2572;

																					BgL_obj1893z00_2572 =
																						(BgL_slotz00_bglt)
																						(BgL_slotz00_1423);
																					BgL_auxz00_3536 =
																						(long) CINT((((BgL_slotz00_bglt)
																								CREF(BgL_obj1893z00_2572))->
																							BgL_virtualzd2numzd2));
																				}
																				BgL_testz00_3535 =
																					(BgL_auxz00_3536 >= ((long) 0));
																			}
																			if (BgL_testz00_3535)
																				{	/* BackEnd/c_proto.scm 493 */
																					BUNSPEC;
																				}
																			else
																				{	/* BackEnd/c_proto.scm 495 */
																					bool_t BgL_testz00_3541;

																					{	/* BackEnd/c_proto.scm 495 */
																						BgL_slotz00_bglt
																							BgL_obj1903z00_2575;
																						BgL_obj1903z00_2575 =
																							(BgL_slotz00_bglt)
																							(BgL_slotz00_1423);
																						BgL_testz00_3541 =
																							CBOOL((((BgL_slotz00_bglt)
																									CREF(BgL_obj1903z00_2575))->
																								BgL_indexedz00));
																					}
																					if (BgL_testz00_3541)
																						{	/* BackEnd/c_proto.scm 495 */
																							bgl_display_string
																								(BGl_string4741z00zzbackend_c_prototypez00,
																								BgL_oportz00_54);
																							bgl_display_obj(BgL_cnamez00_1426,
																								BgL_oportz00_54);
																							bgl_display_string
																								(BGl_string4742z00zzbackend_c_prototypez00,
																								BgL_oportz00_54);
																							{	/* BackEnd/c_proto.scm 496 */
																								obj_t BgL_arg4532z00_1430;

																								{
																									BgL_slotz00_bglt
																										BgL_auxz00_3548;
																									BgL_auxz00_3548 =
																										(BgL_slotz00_bglt)
																										(BgL_slotz00_1423);
																									BgL_arg4532z00_1430 =
																										(((BgL_slotz00_bglt)
																											CREF(BgL_auxz00_3548))->
																										BgL_namez00);
																								}
																								bgl_display_obj
																									(BgL_arg4532z00_1430,
																									BgL_oportz00_54);
																							}
																							bgl_display_string
																								(BGl_string4743z00zzbackend_c_prototypez00,
																								BgL_oportz00_54);
																							bgl_display_char(((unsigned char)
																									'\n'), BgL_oportz00_54);
																						}
																					else
																						{	/* BackEnd/c_proto.scm 495 */
																							bgl_display_string
																								(BGl_string4741z00zzbackend_c_prototypez00,
																								BgL_oportz00_54);
																							bgl_display_obj(BgL_cnamez00_1426,
																								BgL_oportz00_54);
																							bgl_display_string
																								(BGl_string4744z00zzbackend_c_prototypez00,
																								BgL_oportz00_54);
																							{	/* BackEnd/c_proto.scm 498 */
																								obj_t BgL_arg4533z00_1432;

																								{
																									BgL_slotz00_bglt
																										BgL_auxz00_3557;
																									BgL_auxz00_3557 =
																										(BgL_slotz00_bglt)
																										(BgL_slotz00_1423);
																									BgL_arg4533z00_1432 =
																										(((BgL_slotz00_bglt)
																											CREF(BgL_auxz00_3557))->
																										BgL_namez00);
																								}
																								bgl_display_obj
																									(BgL_arg4533z00_1432,
																									BgL_oportz00_54);
																							}
																							bgl_display_string
																								(BGl_string4743z00zzbackend_c_prototypez00,
																								BgL_oportz00_54);
																							bgl_display_char(((unsigned char)
																									'\n'), BgL_oportz00_54);
																	}}}}
																	{
																		obj_t BgL_l4268z00_3564;

																		BgL_l4268z00_3564 = CDR(BgL_l4268z00_1412);
																		BgL_l4268z00_1412 = BgL_l4268z00_3564;
																		goto BgL_zc3anonymousza34522ze3z83_1413;
																	}
																}
															else
																{	/* BackEnd/c_proto.scm 517 */
																	((bool_t) 1);
																}
														}
													}
													bgl_display_string
														(BGl_string4751z00zzbackend_c_prototypez00,
														BgL_oportz00_54);
													bgl_display_obj
														(BGl_typezd2classzd2namez00zzobject_classz00(
															(BgL_typez00_bglt) (BgL_classz00_1400)),
														BgL_oportz00_54);
													bgl_display_string
														(BGl_string4752z00zzbackend_c_prototypez00,
														BgL_oportz00_54);
													bgl_display_char(((unsigned char) '\n'),
														BgL_oportz00_54);
										}}
										{
											obj_t BgL_l4272z00_3572;

											BgL_l4272z00_3572 = CDR(BgL_l4272z00_1397);
											BgL_l4272z00_1397 = BgL_l4272z00_3572;
											goto BgL_zc3anonymousza34515ze3z83_1398;
										}
									}
								else
									{	/* BackEnd/c_proto.scm 519 */
										((bool_t) 1);
									}
							}
						}
						return bgl_display_char(((unsigned char) '\n'), BgL_oportz00_54);
					}
				else
					{	/* BackEnd/c_proto.scm 499 */
						return BFALSE;
					}
			}
		}
	}



/* _emit-class-types */
	obj_t BGl__emitzd2classzd2typesz00zzbackend_c_prototypez00(obj_t
		BgL_envz00_2734, obj_t BgL_classzd2listzd2_2735, obj_t BgL_oportz00_2736)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 488 */
			return
				BGl_emitzd2classzd2typesz00zzbackend_c_prototypez00
				(BgL_classzd2listzd2_2735, BgL_oportz00_2736);
		}
	}



/* cross-name */
	obj_t BGl_crosszd2namezd2zzbackend_c_prototypez00(obj_t BgL_typez00_55)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 529 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_typez00_55,
					BGl_tclassz00zzobject_classz00))
				{	/* BackEnd/c_proto.scm 531 */
					obj_t BgL_arg4538z00_1438;

					{
						BgL_typez00_bglt BgL_auxz00_3578;

						BgL_auxz00_3578 =
							(BgL_typez00_bglt) ((BgL_tclassz00_bglt) (BgL_typez00_55));
						BgL_arg4538z00_1438 =
							(((BgL_typez00_bglt) CREF(BgL_auxz00_3578))->BgL_siza7eza7);
					}
					return
						string_append(BgL_arg4538z00_1438,
						BGl_string4742z00zzbackend_c_prototypez00);
				}
			else
				{
					BgL_typez00_bglt BgL_auxz00_3583;

					BgL_auxz00_3583 = (BgL_typez00_bglt) (BgL_typez00_55);
					return (((BgL_typez00_bglt) CREF(BgL_auxz00_3583))->BgL_namez00);
				}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_c_prototypez00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_emitzd2prototypezd2envz00zzbackend_c_prototypez00,
				BGl_emitzd2prototypezd2defau4275zd2envzd2zzbackend_c_prototypez00,
				BGl_valuez00zzast_varz00, BGl_string4753z00zzbackend_c_prototypez00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_getzd2czd2scopezd2envzd2zzbackend_c_prototypez00,
				BGl_getzd2czd2scopezd2default4287zd2envz00zzbackend_c_prototypez00,
				BGl_variablez00zzast_varz00, BGl_string4754z00zzbackend_c_prototypez00);
		}
	}



/* emit-prototype */
	obj_t BGl_emitzd2prototypezd2zzbackend_c_prototypez00(BgL_valuez00_bglt
		BgL_valuez00_12, BgL_variablez00_bglt BgL_variablez00_13)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 94 */
			{	/* BackEnd/c_proto.scm 94 */
				obj_t BgL_method4276z00_2595;

				{	/* BackEnd/c_proto.scm 94 */
					BgL_objectz00_bglt BgL_objz00_2596;

					BgL_objz00_2596 = (BgL_objectz00_bglt) (BgL_valuez00_12);
					{	/* BackEnd/c_proto.scm 94 */
						long BgL_objzd2classzd2numz00_2597;

						BgL_objzd2classzd2numz00_2597 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2596);
						{	/* BackEnd/c_proto.scm 94 */
							obj_t BgL_arg2643z00_2598;

							BgL_arg2643z00_2598 =
								PROCEDURE_REF
								(BGl_emitzd2prototypezd2envz00zzbackend_c_prototypez00,
								(int) (((long) 1)));
							{	/* BackEnd/c_proto.scm 94 */
								obj_t BgL_arrayz00_2600;

								int BgL_offsetz00_2601;

								BgL_arrayz00_2600 = BgL_arg2643z00_2598;
								BgL_offsetz00_2601 = (int) (BgL_objzd2classzd2numz00_2597);
								{	/* BackEnd/c_proto.scm 94 */
									long BgL_offsetz00_2602;

									BgL_offsetz00_2602 =
										((long) (BgL_offsetz00_2601) - OBJECT_TYPE);
									{	/* BackEnd/c_proto.scm 94 */
										long BgL_modz00_2603;

										{	/* BackEnd/c_proto.scm 94 */
											int BgL_arg2645z00_2604;

											BgL_arg2645z00_2604 = (int) (((long) 16));
											{	/* BackEnd/c_proto.scm 94 */
												long BgL_auxz00_3596;

												BgL_auxz00_3596 = (long) (BgL_arg2645z00_2604);
												BgL_modz00_2603 =
													(BgL_offsetz00_2602 / BgL_auxz00_3596);
										}}
										{	/* BackEnd/c_proto.scm 94 */
											long BgL_restz00_2605;

											{	/* BackEnd/c_proto.scm 94 */
												int BgL_arg2644z00_2606;

												BgL_arg2644z00_2606 = (int) (((long) 16));
												{	/* BackEnd/c_proto.scm 94 */
													long BgL_auxz00_3600;

													BgL_auxz00_3600 = (long) (BgL_arg2644z00_2606);
													BgL_restz00_2605 =
														(BgL_offsetz00_2602 % BgL_auxz00_3600);
											}}
											{	/* BackEnd/c_proto.scm 94 */

												BgL_method4276z00_2595 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2600,
														(int) (BgL_modz00_2603)), (int) (BgL_restz00_2605));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method4276z00_2595) (BgL_method4276z00_2595,
					(obj_t) (BgL_valuez00_12), (obj_t) (BgL_variablez00_13), BEOA);
			}
		}
	}



/* _emit-prototype */
	obj_t BGl__emitzd2prototypezd2zzbackend_c_prototypez00(obj_t BgL_envz00_2722,
		obj_t BgL_valuez00_2723, obj_t BgL_variablez00_2724)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 94 */
			return
				BGl_emitzd2prototypezd2zzbackend_c_prototypez00(
				(BgL_valuez00_bglt) (BgL_valuez00_2723),
				(BgL_variablez00_bglt) (BgL_variablez00_2724));
		}
	}



/* emit-prototype-defau4275 */
	obj_t
		BGl_emitzd2prototypezd2defau4275z00zzbackend_c_prototypez00
		(BgL_valuez00_bglt BgL_valuez00_14, BgL_variablez00_bglt BgL_variablez00_15)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 15 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 14)),
				BGl_string4755z00zzbackend_c_prototypez00, (obj_t) (BgL_valuez00_14));
		}
	}



/* _emit-prototype-defau4275 */
	obj_t BGl__emitzd2prototypezd2defau4275z00zzbackend_c_prototypez00(obj_t
		BgL_envz00_2737, obj_t BgL_valuez00_2738, obj_t BgL_variablez00_2739)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 15 */
			return
				BGl_emitzd2prototypezd2defau4275z00zzbackend_c_prototypez00(
				(BgL_valuez00_bglt) (BgL_valuez00_2738),
				(BgL_variablez00_bglt) (BgL_variablez00_2739));
		}
	}



/* get-c-scope */
	obj_t BGl_getzd2czd2scopez00zzbackend_c_prototypez00(BgL_variablez00_bglt
		BgL_variablez00_49)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 462 */
			{	/* BackEnd/c_proto.scm 462 */
				obj_t BgL_method4288z00_2620;

				{	/* BackEnd/c_proto.scm 462 */
					BgL_objectz00_bglt BgL_objz00_2621;

					BgL_objz00_2621 = (BgL_objectz00_bglt) (BgL_variablez00_49);
					{	/* BackEnd/c_proto.scm 462 */
						long BgL_objzd2classzd2numz00_2622;

						BgL_objzd2classzd2numz00_2622 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2621);
						{	/* BackEnd/c_proto.scm 462 */
							obj_t BgL_arg2643z00_2623;

							BgL_arg2643z00_2623 =
								PROCEDURE_REF
								(BGl_getzd2czd2scopezd2envzd2zzbackend_c_prototypez00,
								(int) (((long) 1)));
							{	/* BackEnd/c_proto.scm 462 */
								obj_t BgL_arrayz00_2625;

								int BgL_offsetz00_2626;

								BgL_arrayz00_2625 = BgL_arg2643z00_2623;
								BgL_offsetz00_2626 = (int) (BgL_objzd2classzd2numz00_2622);
								{	/* BackEnd/c_proto.scm 462 */
									long BgL_offsetz00_2627;

									BgL_offsetz00_2627 =
										((long) (BgL_offsetz00_2626) - OBJECT_TYPE);
									{	/* BackEnd/c_proto.scm 462 */
										long BgL_modz00_2628;

										{	/* BackEnd/c_proto.scm 462 */
											int BgL_arg2645z00_2629;

											BgL_arg2645z00_2629 = (int) (((long) 16));
											{	/* BackEnd/c_proto.scm 462 */
												long BgL_auxz00_3628;

												BgL_auxz00_3628 = (long) (BgL_arg2645z00_2629);
												BgL_modz00_2628 =
													(BgL_offsetz00_2627 / BgL_auxz00_3628);
										}}
										{	/* BackEnd/c_proto.scm 462 */
											long BgL_restz00_2630;

											{	/* BackEnd/c_proto.scm 462 */
												int BgL_arg2644z00_2631;

												BgL_arg2644z00_2631 = (int) (((long) 16));
												{	/* BackEnd/c_proto.scm 462 */
													long BgL_auxz00_3632;

													BgL_auxz00_3632 = (long) (BgL_arg2644z00_2631);
													BgL_restz00_2630 =
														(BgL_offsetz00_2627 % BgL_auxz00_3632);
											}}
											{	/* BackEnd/c_proto.scm 462 */

												BgL_method4288z00_2620 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2625,
														(int) (BgL_modz00_2628)), (int) (BgL_restz00_2630));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method4288z00_2620) (BgL_method4288z00_2620,
					(obj_t) (BgL_variablez00_49), BEOA);
			}
		}
	}



/* _get-c-scope */
	obj_t BGl__getzd2czd2scopez00zzbackend_c_prototypez00(obj_t BgL_envz00_2732,
		obj_t BgL_variablez00_2733)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 462 */
			return
				BGl_getzd2czd2scopez00zzbackend_c_prototypez00(
				(BgL_variablez00_bglt) (BgL_variablez00_2733));
		}
	}



/* get-c-scope-default4287 */
	obj_t
		BGl_getzd2czd2scopezd2default4287zd2zzbackend_c_prototypez00
		(BgL_variablez00_bglt BgL_variablez00_50)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 15 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 15)),
				BGl_string4755z00zzbackend_c_prototypez00,
				(obj_t) (BgL_variablez00_50));
		}
	}



/* _get-c-scope-default4287 */
	obj_t BGl__getzd2czd2scopezd2default4287zd2zzbackend_c_prototypez00(obj_t
		BgL_envz00_2740, obj_t BgL_variablez00_2741)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 15 */
			return
				BGl_getzd2czd2scopezd2default4287zd2zzbackend_c_prototypez00(
				(BgL_variablez00_bglt) (BgL_variablez00_2741));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_c_prototypez00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2prototypezd2envz00zzbackend_c_prototypez00,
				BGl_svarz00zzast_varz00, BGl_proc4756z00zzbackend_c_prototypez00,
				BGl_string4753z00zzbackend_c_prototypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2prototypezd2envz00zzbackend_c_prototypez00,
				BGl_scnstz00zzast_varz00, BGl_proc4757z00zzbackend_c_prototypez00,
				BGl_string4753z00zzbackend_c_prototypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2prototypezd2envz00zzbackend_c_prototypez00,
				BGl_sfunz00zzast_varz00, BGl_proc4758z00zzbackend_c_prototypez00,
				BGl_string4753z00zzbackend_c_prototypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2prototypezd2envz00zzbackend_c_prototypez00,
				BGl_cfunz00zzast_varz00, BGl_proc4759z00zzbackend_c_prototypez00,
				BGl_string4753z00zzbackend_c_prototypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2prototypezd2envz00zzbackend_c_prototypez00,
				BGl_cvarz00zzast_varz00, BGl_proc4760z00zzbackend_c_prototypez00,
				BGl_string4753z00zzbackend_c_prototypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2czd2scopezd2envzd2zzbackend_c_prototypez00,
				BGl_globalz00zzast_varz00, BGl_proc4761z00zzbackend_c_prototypez00,
				BGl_string4754z00zzbackend_c_prototypez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2czd2scopezd2envzd2zzbackend_c_prototypez00,
				BGl_localz00zzast_varz00, BGl_proc4762z00zzbackend_c_prototypez00,
				BGl_string4754z00zzbackend_c_prototypez00);
		}
	}



/* get-c-scope-local4292 */
	obj_t BGl_getzd2czd2scopezd2local4292zd2zzbackend_c_prototypez00(obj_t
		BgL_envz00_2749, obj_t BgL_variablez00_2750)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 482 */
			return BGl_string4699z00zzbackend_c_prototypez00;
		}
	}



/* get-c-scope-global4290 */
	obj_t BGl_getzd2czd2scopezd2global4290zd2zzbackend_c_prototypez00(obj_t
		BgL_envz00_2751, obj_t BgL_variablez00_2752)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 467 */
			{
				BgL_globalz00_bglt BgL_variablez00_2071;

				BgL_variablez00_2071 = (BgL_globalz00_bglt) (BgL_variablez00_2752);
				{	/* BackEnd/c_proto.scm 469 */
					obj_t BgL_casezd2valuezd2_2075;

					BgL_casezd2valuezd2_2075 =
						(((BgL_globalz00_bglt) CREF(BgL_variablez00_2071))->BgL_importz00);
					if ((BgL_casezd2valuezd2_2075 == CNST_TABLE_REF(((long) 0))))
						{	/* BackEnd/c_proto.scm 469 */
							return BGl_string4699z00zzbackend_c_prototypez00;
						}
					else
						{	/* BackEnd/c_proto.scm 469 */
							if ((BgL_casezd2valuezd2_2075 == CNST_TABLE_REF(((long) 13))))
								{	/* BackEnd/c_proto.scm 469 */
									if (CBOOL(
											(((BgL_globalz00_bglt) CREF(BgL_variablez00_2071))->
												BgL_libraryz00)))
										{	/* BackEnd/c_proto.scm 473 */
											return BGl_string4763z00zzbackend_c_prototypez00;
										}
									else
										{	/* BackEnd/c_proto.scm 473 */
											return BGl_string4764z00zzbackend_c_prototypez00;
										}
								}
							else
								{	/* BackEnd/c_proto.scm 469 */
									if ((BgL_casezd2valuezd2_2075 == CNST_TABLE_REF(((long) 1))))
										{	/* BackEnd/c_proto.scm 469 */
											return BGl_string4765z00zzbackend_c_prototypez00;
										}
									else
										{	/* BackEnd/c_proto.scm 477 */
											obj_t BgL_arg4677z00_2082;

											BgL_arg4677z00_2082 =
												(((BgL_globalz00_bglt) CREF(BgL_variablez00_2071))->
												BgL_importz00);
											return
												BGl_internalzd2errorzd2zztools_errorz00
												(BGl_string4754z00zzbackend_c_prototypez00,
												BGl_string4766z00zzbackend_c_prototypez00,
												BgL_arg4677z00_2082);
										}
								}
						}
				}
			}
		}
	}



/* emit-prototype-cvar4286 */
	obj_t BGl_emitzd2prototypezd2cvar4286z00zzbackend_c_prototypez00(obj_t
		BgL_envz00_2753, obj_t BgL_valuez00_2754, obj_t BgL_variablez00_2755)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 219 */
			{
				BgL_cvarz00_bglt BgL_valuez00_2057;

				obj_t BgL_variablez00_2058;

				BgL_valuez00_2057 = (BgL_cvarz00_bglt) (BgL_valuez00_2754);
				BgL_variablez00_2058 = BgL_variablez00_2755;
				if ((((BgL_cvarz00_bglt) CREF(BgL_valuez00_2057))->BgL_macrozf3zf3))
					{	/* BackEnd/c_proto.scm 220 */
						return BFALSE;
					}
				else
					{	/* BackEnd/c_proto.scm 222 */
						obj_t BgL_port4247z00_2063;

						BgL_port4247z00_2063 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
						{	/* BackEnd/c_proto.scm 223 */
							obj_t BgL_arg4665z00_2064;

							{	/* BackEnd/c_proto.scm 223 */
								bool_t BgL_testz00_3674;

								{	/* BackEnd/c_proto.scm 223 */
									BgL_globalz00_bglt BgL_obj2030z00_2704;

									BgL_obj2030z00_2704 =
										(BgL_globalz00_bglt) (BgL_variablez00_2058);
									BgL_testz00_3674 =
										CBOOL(
										(((BgL_globalz00_bglt) CREF(BgL_obj2030z00_2704))->
											BgL_libraryz00));
								}
								if (BgL_testz00_3674)
									{	/* BackEnd/c_proto.scm 223 */
										BgL_arg4665z00_2064 =
											BGl_string4767z00zzbackend_c_prototypez00;
									}
								else
									{	/* BackEnd/c_proto.scm 223 */
										BgL_arg4665z00_2064 =
											BGl_string4768z00zzbackend_c_prototypez00;
									}
							}
							bgl_display_obj(BgL_arg4665z00_2064, BgL_port4247z00_2063);
						}
						{	/* BackEnd/c_proto.scm 224 */
							obj_t BgL_arg4667z00_2066;

							{	/* BackEnd/c_proto.scm 224 */
								BgL_typez00_bglt BgL_arg4668z00_2067;

								obj_t BgL_arg4669z00_2068;

								{
									BgL_variablez00_bglt BgL_auxz00_3679;

									BgL_auxz00_3679 =
										(BgL_variablez00_bglt) (BgL_variablez00_2058);
									BgL_arg4668z00_2067 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_3679))->
										BgL_typez00);
								}
								{
									BgL_variablez00_bglt BgL_auxz00_3682;

									BgL_auxz00_3682 =
										(BgL_variablez00_bglt) (BgL_variablez00_2058);
									BgL_arg4669z00_2068 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_3682))->
										BgL_namez00);
								}
								BgL_arg4667z00_2066 =
									BGl_makezd2typedzd2declarationz00zztype_toolsz00
									(BgL_arg4668z00_2067, BgL_arg4669z00_2068);
							}
							bgl_display_obj(BgL_arg4667z00_2066, BgL_port4247z00_2063);
						}
						bgl_display_char(((unsigned char) ';'), BgL_port4247z00_2063);
						return
							bgl_display_char(((unsigned char) '\n'), BgL_port4247z00_2063);
		}}}
	}



/* emit-prototype-cfun4284 */
	obj_t BGl_emitzd2prototypezd2cfun4284z00zzbackend_c_prototypez00(obj_t
		BgL_envz00_2756, obj_t BgL_valuez00_2757, obj_t BgL_variablez00_2758)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 186 */
			{
				BgL_cfunz00_bglt BgL_valuez00_2018;

				obj_t BgL_variablez00_2019;

				BgL_valuez00_2018 = (BgL_cfunz00_bglt) (BgL_valuez00_2757);
				BgL_variablez00_2019 = BgL_variablez00_2758;
				if ((((BgL_cfunz00_bglt) CREF(BgL_valuez00_2018))->BgL_macrozf3zf3))
					{	/* BackEnd/c_proto.scm 187 */
						return BFALSE;
					}
				else
					{	/* BackEnd/c_proto.scm 189 */
						long BgL_arityz00_2024;

						{
							BgL_funz00_bglt BgL_auxz00_3692;

							BgL_auxz00_3692 = (BgL_funz00_bglt) (BgL_valuez00_2018);
							BgL_arityz00_2024 =
								(((BgL_funz00_bglt) CREF(BgL_auxz00_3692))->BgL_arityz00);
						}
						{	/* BackEnd/c_proto.scm 189 */
							obj_t BgL_targsz00_2025;

							BgL_targsz00_2025 =
								(((BgL_cfunz00_bglt) CREF(BgL_valuez00_2018))->
								BgL_argszd2typezd2);
							{	/* BackEnd/c_proto.scm 190 */

								{	/* BackEnd/c_proto.scm 191 */
									obj_t BgL_port4246z00_2026;

									BgL_port4246z00_2026 =
										BGl_za2czd2portza2zd2zzbackend_c_emitz00;
									{	/* BackEnd/c_proto.scm 192 */
										obj_t BgL_arg4638z00_2027;

										{	/* BackEnd/c_proto.scm 192 */
											bool_t BgL_testz00_3696;

											{	/* BackEnd/c_proto.scm 192 */
												BgL_globalz00_bglt BgL_obj2030z00_2686;

												BgL_obj2030z00_2686 =
													(BgL_globalz00_bglt) (BgL_variablez00_2019);
												BgL_testz00_3696 =
													CBOOL(
													(((BgL_globalz00_bglt) CREF(BgL_obj2030z00_2686))->
														BgL_libraryz00));
											}
											if (BgL_testz00_3696)
												{	/* BackEnd/c_proto.scm 192 */
													BgL_arg4638z00_2027 =
														BGl_string4767z00zzbackend_c_prototypez00;
												}
											else
												{	/* BackEnd/c_proto.scm 192 */
													BgL_arg4638z00_2027 =
														BGl_string4768z00zzbackend_c_prototypez00;
												}
										}
										bgl_display_obj(BgL_arg4638z00_2027, BgL_port4246z00_2026);
									}
									{	/* BackEnd/c_proto.scm 193 */
										obj_t BgL_arg4640z00_2029;

										{	/* BackEnd/c_proto.scm 193 */
											BgL_typez00_bglt BgL_arg4641z00_2030;

											obj_t BgL_arg4642z00_2031;

											{
												BgL_variablez00_bglt BgL_auxz00_3701;

												BgL_auxz00_3701 =
													(BgL_variablez00_bglt) (BgL_variablez00_2019);
												BgL_arg4641z00_2030 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_3701))->
													BgL_typez00);
											}
											{	/* BackEnd/c_proto.scm 195 */
												obj_t BgL_arg4643z00_2032;

												obj_t BgL_arg4645z00_2034;

												{
													BgL_variablez00_bglt BgL_auxz00_3704;

													BgL_auxz00_3704 =
														(BgL_variablez00_bglt) (BgL_variablez00_2019);
													BgL_arg4643z00_2032 =
														(((BgL_variablez00_bglt) CREF(BgL_auxz00_3704))->
														BgL_namez00);
												}
												if (NULLP(BgL_targsz00_2025))
													{	/* BackEnd/c_proto.scm 199 */
														BgL_arg4645z00_2034 =
															BGl_string4703z00zzbackend_c_prototypez00;
													}
												else
													{	/* BackEnd/c_proto.scm 199 */
														if ((BgL_arityz00_2024 <= ((long) -1)))
															{	/* BackEnd/c_proto.scm 201 */
																obj_t BgL_arg4648z00_2037;

																{	/* BackEnd/c_proto.scm 201 */
																	obj_t BgL_arg4650z00_2039;

																	BgL_arg4650z00_2039 = CAR(BgL_targsz00_2025);
																	BgL_arg4648z00_2037 =
																		BGl_typezd2namezd2sanszd2z42z90zztype_toolsz00
																		((BgL_typez00_bglt) (BgL_arg4650z00_2039));
																}
																BgL_arg4645z00_2034 =
																	string_append(BgL_arg4648z00_2037,
																	BGl_string4769z00zzbackend_c_prototypez00);
															}
														else
															{	/* BackEnd/c_proto.scm 200 */
																BgL_arg4645z00_2034 =
																	BGl_loopz00zzbackend_c_prototypez00
																	(BgL_arityz00_2024, BgL_targsz00_2025);
															}
													}
												BgL_arg4642z00_2031 =
													string_append_3(BgL_arg4643z00_2032,
													BGl_string4702z00zzbackend_c_prototypez00,
													BgL_arg4645z00_2034);
											}
											BgL_arg4640z00_2029 =
												BGl_makezd2typedzd2declarationz00zztype_toolsz00
												(BgL_arg4641z00_2030, BgL_arg4642z00_2031);
										}
										bgl_display_obj(BgL_arg4640z00_2029, BgL_port4246z00_2026);
									}
									bgl_display_string(BGl_string4743z00zzbackend_c_prototypez00,
										BgL_port4246z00_2026);
									return bgl_display_char(((unsigned char) '\n'),
										BgL_port4246z00_2026);
		}}}}}}
	}



/* loop */
	obj_t BGl_loopz00zzbackend_c_prototypez00(long BgL_arityz00_2768,
		obj_t BgL_targsz00_2041)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 204 */
			if (NULLP(CDR(BgL_targsz00_2041)))
				{	/* BackEnd/c_proto.scm 205 */
					if ((BgL_arityz00_2768 < ((long) 0)))
						{	/* BackEnd/c_proto.scm 206 */
							return BGl_string4770z00zzbackend_c_prototypez00;
						}
					else
						{	/* BackEnd/c_proto.scm 209 */
							obj_t BgL_arg4654z00_2045;

							{	/* BackEnd/c_proto.scm 209 */
								obj_t BgL_arg4656z00_2047;

								BgL_arg4656z00_2047 = CAR(BgL_targsz00_2041);
								BgL_arg4654z00_2045 =
									BGl_typezd2namezd2sanszd2z42z90zztype_toolsz00(
									(BgL_typez00_bglt) (BgL_arg4656z00_2047));
							}
							return
								string_append(BgL_arg4654z00_2045,
								BGl_string4703z00zzbackend_c_prototypez00);
						}
				}
			else
				{	/* BackEnd/c_proto.scm 212 */
					obj_t BgL_arg4657z00_2048;

					obj_t BgL_arg4659z00_2050;

					{	/* BackEnd/c_proto.scm 212 */
						obj_t BgL_arg4660z00_2051;

						BgL_arg4660z00_2051 = CAR(BgL_targsz00_2041);
						BgL_arg4657z00_2048 =
							BGl_typezd2namezd2sanszd2z42z90zztype_toolsz00(
							(BgL_typez00_bglt) (BgL_arg4660z00_2051));
					}
					BgL_arg4659z00_2050 =
						BGl_loopz00zzbackend_c_prototypez00(BgL_arityz00_2768,
						CDR(BgL_targsz00_2041));
					return
						string_append_3(BgL_arg4657z00_2048,
						BGl_string4704z00zzbackend_c_prototypez00, BgL_arg4659z00_2050);
				}
		}
	}



/* emit-prototype-sfun4282 */
	obj_t BGl_emitzd2prototypezd2sfun4282z00zzbackend_c_prototypez00(obj_t
		BgL_envz00_2759, obj_t BgL_valuez00_2760, obj_t BgL_variablez00_2761)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 136 */
			{
				BgL_sfunz00_bglt BgL_valuez00_2000;

				obj_t BgL_variablez00_2001;

				BgL_valuez00_2000 = (BgL_sfunz00_bglt) (BgL_valuez00_2760);
				BgL_variablez00_2001 = BgL_variablez00_2761;
				BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
					(BgL_variablez00_bglt) (BgL_variablez00_2001));
				{	/* BackEnd/c_proto.scm 139 */
					obj_t BgL_port4245z00_2005;

					BgL_port4245z00_2005 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
					{	/* BackEnd/c_proto.scm 140 */
						obj_t BgL_arg4624z00_2006;

						{	/* BackEnd/c_proto.scm 140 */
							obj_t BgL_res4696z00_2671;

							{	/* BackEnd/c_proto.scm 140 */
								BgL_variablez00_bglt BgL_variablez00_2645;

								BgL_variablez00_2645 =
									(BgL_variablez00_bglt) (BgL_variablez00_2001);
								{	/* BackEnd/c_proto.scm 140 */
									obj_t BgL_method4288z00_2646;

									{	/* BackEnd/c_proto.scm 140 */
										BgL_objectz00_bglt BgL_objz00_2647;

										BgL_objz00_2647 =
											(BgL_objectz00_bglt) (BgL_variablez00_2645);
										{	/* BackEnd/c_proto.scm 140 */
											long BgL_objzd2classzd2numz00_2648;

											BgL_objzd2classzd2numz00_2648 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2647);
											{	/* BackEnd/c_proto.scm 140 */
												obj_t BgL_arg2643z00_2649;

												BgL_arg2643z00_2649 =
													PROCEDURE_REF
													(BGl_getzd2czd2scopezd2envzd2zzbackend_c_prototypez00,
													(int) (((long) 1)));
												{	/* BackEnd/c_proto.scm 140 */
													obj_t BgL_arrayz00_2651;

													int BgL_offsetz00_2652;

													BgL_arrayz00_2651 = BgL_arg2643z00_2649;
													BgL_offsetz00_2652 =
														(int) (BgL_objzd2classzd2numz00_2648);
													{	/* BackEnd/c_proto.scm 140 */
														long BgL_offsetz00_2653;

														BgL_offsetz00_2653 =
															((long) (BgL_offsetz00_2652) - OBJECT_TYPE);
														{	/* BackEnd/c_proto.scm 140 */
															long BgL_modz00_2654;

															{	/* BackEnd/c_proto.scm 140 */
																int BgL_arg2645z00_2655;

																BgL_arg2645z00_2655 = (int) (((long) 16));
																{	/* BackEnd/c_proto.scm 140 */
																	long BgL_auxz00_3748;

																	BgL_auxz00_3748 =
																		(long) (BgL_arg2645z00_2655);
																	BgL_modz00_2654 =
																		(BgL_offsetz00_2653 / BgL_auxz00_3748);
															}}
															{	/* BackEnd/c_proto.scm 140 */
																long BgL_restz00_2656;

																{	/* BackEnd/c_proto.scm 140 */
																	int BgL_arg2644z00_2657;

																	BgL_arg2644z00_2657 = (int) (((long) 16));
																	{	/* BackEnd/c_proto.scm 140 */
																		long BgL_auxz00_3752;

																		BgL_auxz00_3752 =
																			(long) (BgL_arg2644z00_2657);
																		BgL_restz00_2656 =
																			(BgL_offsetz00_2653 % BgL_auxz00_3752);
																}}
																{	/* BackEnd/c_proto.scm 140 */

																	BgL_method4288z00_2646 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2651,
																			(int) (BgL_modz00_2654)),
																		(int) (BgL_restz00_2656));
									}}}}}}}}
									BgL_res4696z00_2671 =
										PROCEDURE_ENTRY(BgL_method4288z00_2646)
										(BgL_method4288z00_2646, (obj_t) (BgL_variablez00_2645),
										BEOA);
							}}
							BgL_arg4624z00_2006 = BgL_res4696z00_2671;
						}
						bgl_display_obj(BgL_arg4624z00_2006, BgL_port4245z00_2005);
					}
					bgl_display_char(((unsigned char) ' '), BgL_port4245z00_2005);
					{	/* BackEnd/c_proto.scm 142 */
						obj_t BgL_arg4625z00_2007;

						{	/* BackEnd/c_proto.scm 142 */
							BgL_typez00_bglt BgL_arg4626z00_2008;

							obj_t BgL_arg4627z00_2009;

							{
								BgL_variablez00_bglt BgL_auxz00_3764;

								BgL_auxz00_3764 = (BgL_variablez00_bglt) (BgL_variablez00_2001);
								BgL_arg4626z00_2008 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_3764))->BgL_typez00);
							}
							{	/* BackEnd/c_proto.scm 144 */
								obj_t BgL_arg4628z00_2010;

								obj_t BgL_arg4629z00_2011;

								{
									BgL_variablez00_bglt BgL_auxz00_3767;

									BgL_auxz00_3767 =
										(BgL_variablez00_bglt) (BgL_variablez00_2001);
									BgL_arg4628z00_2010 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_3767))->
										BgL_namez00);
								}
								{	/* BackEnd/c_proto.scm 146 */
									obj_t BgL_argsz00_2012;

									BgL_argsz00_2012 =
										(((BgL_sfunz00_bglt) CREF(BgL_valuez00_2000))->BgL_argsz00);
									{	/* BackEnd/c_proto.scm 147 */
										bool_t BgL_testz00_3771;

										if (PAIRP(BgL_argsz00_2012))
											{	/* BackEnd/c_proto.scm 147 */
												obj_t BgL_arg4632z00_2015;

												BgL_arg4632z00_2015 = CAR(BgL_argsz00_2012);
												BgL_testz00_3771 =
													BGl_iszd2azf3z21zz__objectz00(BgL_arg4632z00_2015,
													BGl_typez00zztype_typez00);
											}
										else
											{	/* BackEnd/c_proto.scm 147 */
												BgL_testz00_3771 = ((bool_t) 0);
											}
										if (BgL_testz00_3771)
											{	/* BackEnd/c_proto.scm 147 */
												BgL_arg4629z00_2011 =
													BGl_emitzd2prototypezd2formalzd2typeszd2zzbackend_c_prototypez00
													(BgL_argsz00_2012);
											}
										else
											{	/* BackEnd/c_proto.scm 147 */
												BgL_arg4629z00_2011 =
													BGl_emitzd2prototypezd2formalsz00zzbackend_c_prototypez00
													(BgL_argsz00_2012);
											}
									}
								}
								BgL_arg4627z00_2009 =
									string_append(BgL_arg4628z00_2010, BgL_arg4629z00_2011);
							}
							BgL_arg4625z00_2007 =
								BGl_makezd2typedzd2declarationz00zztype_toolsz00
								(BgL_arg4626z00_2008, BgL_arg4627z00_2009);
						}
						bgl_display_obj(BgL_arg4625z00_2007, BgL_port4245z00_2005);
					}
					bgl_display_string(BGl_string4743z00zzbackend_c_prototypez00,
						BgL_port4245z00_2005);
					return bgl_display_char(((unsigned char) '\n'), BgL_port4245z00_2005);
		}}}
	}



/* emit-prototype-scnst4280 */
	obj_t BGl_emitzd2prototypezd2scnst4280z00zzbackend_c_prototypez00(obj_t
		BgL_envz00_2762, obj_t BgL_valuez00_2763, obj_t BgL_variablez00_2764)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 105 */
			{
				BgL_scnstz00_bglt BgL_valuez00_1994;

				obj_t BgL_variablez00_1995;

				BgL_valuez00_1994 = (BgL_scnstz00_bglt) (BgL_valuez00_2763);
				BgL_variablez00_1995 = BgL_variablez00_2764;
				return
					BGl_emitzd2prototypezf2svarzf2scnstzd2zzbackend_c_prototypez00(
					(obj_t) (BgL_valuez00_1994), BgL_variablez00_1995);
			}
		}
	}



/* emit-prototype-svar4278 */
	obj_t BGl_emitzd2prototypezd2svar4278z00zzbackend_c_prototypez00(obj_t
		BgL_envz00_2765, obj_t BgL_valuez00_2766, obj_t BgL_variablez00_2767)
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 99 */
			{
				BgL_svarz00_bglt BgL_valuez00_1988;

				obj_t BgL_variablez00_1989;

				BgL_valuez00_1988 = (BgL_svarz00_bglt) (BgL_valuez00_2766);
				BgL_variablez00_1989 = BgL_variablez00_2767;
				return
					BGl_emitzd2prototypezf2svarzf2scnstzd2zzbackend_c_prototypez00(
					(obj_t) (BgL_valuez00_1988), BgL_variablez00_1989);
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_c_prototypez00()
	{
		AN_OBJECT;
		{	/* BackEnd/c_proto.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4771z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4771z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string4771z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string4771z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4771z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4771z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string4771z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string4771z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string4771z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string4771z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4771z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4771z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string4771z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string4771z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 2222742),
				BSTRING_TO_STRING(BGl_string4771z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zztvector_cnstz00(((long) 462574443),
				BSTRING_TO_STRING(BGl_string4771z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzcnst_allocz00(((long) 355177025),
				BSTRING_TO_STRING(BGl_string4771z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzcgen_copz00(((long) 241571075),
				BSTRING_TO_STRING(BGl_string4771z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(((long) 185927088),
				BSTRING_TO_STRING(BGl_string4771z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long) 254412896),
				BSTRING_TO_STRING(BGl_string4771z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzcgen_emitzd2copzd2(((long) 356045708),
				BSTRING_TO_STRING(BGl_string4771z00zzbackend_c_prototypez00));
			return
				BGl_modulezd2initializa7ationz75zzcnst_nodez00(((long) 110472871),
				BSTRING_TO_STRING(BGl_string4771z00zzbackend_c_prototypez00));
		}
	}

#ifdef __cplusplus
}
#endif
