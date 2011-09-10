/*===========================================================================*/
/*   (BackEnd/c.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/c.scm)*/
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

	typedef struct BgL_cvmz00_bgl
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
	}             *BgL_cvmz00_bglt;

	typedef struct BgL_sawcz00_bgl
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
	}              *BgL_sawcz00_bglt;

	typedef struct BgL_cgenz00_bgl
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
	}              *BgL_cgenz00_bglt;


	BGL_EXPORTED_DECL obj_t BGl_buildzd2cgenzd2backendz00zzbackend_cz00();
	extern obj_t BGl_stopzd2emissionz12zc0zzbackend_c_emitz00();
	extern obj_t BGl_za2czd2debugza2zd2zzengine_paramz00;
	static obj_t BGl_zc3exitza34388ze3z83zzbackend_cz00();
	extern obj_t BGl_za2mcozd2suffixza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_getzd2classzd2listz00zzobject_classz00();
	extern obj_t BGl_za2compilerzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_za2restzd2argsza2zd2zzengine_paramz00;
	BGL_IMPORT bool_t fexists(char *);
	extern obj_t BGl_za2dlopenzd2initza2zd2zzengine_paramz00;
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_emitzd2profzd2infoz00zzprof_emitz00(obj_t, obj_t);
	extern obj_t BGl_startzd2emissionz12zc0zzbackend_c_emitz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_getenvz00zz__osz00(char *);
	static obj_t BGl_cnstzd2initzd2zzbackend_cz00();
	extern obj_t
		BGl_emitzd2dlopenzd2initz00zzbackend_c_emitz00(BgL_globalz00_bglt, obj_t);
	extern obj_t BGl_setzd2backendz12zc0zzbackend_backendz00(obj_t);
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cczd2compilerzd2zzbackend_cz00(obj_t, obj_t);
	extern obj_t BGl_findzd2librarieszd2zzengine_linkz00(obj_t);
	static obj_t BGl_backendzd2linkzd2objects4169z00zzbackend_cz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2srczd2suffixza2zd2zzengine_paramz00;
	extern BgL_sawcz00_bglt BGl_makezd2sawczd2zzbackend_cvmz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, obj_t, obj_t,
		bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, obj_t, obj_t,
		bool_t, bool_t, bool_t, obj_t, obj_t, bool_t, bool_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzbackend_cz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_c_compilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_compilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_typezd2occurzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_setrcz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcc_ldz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcc_ccz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcc_indentz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_mainz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_initz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzprof_emitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbdb_settingz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbdb_emitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_buildz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_occurz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_alibraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_linkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_compilerz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_configurez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long,
		char *);
	static obj_t BGl_toplevelzd2initzd2zzbackend_cz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00;
	extern obj_t
		BGl_typezd2incrementzd2globalz12z12zzast_typezd2occurzd2
		(BgL_globalz00_bglt);
	extern obj_t BGl_emitzd2prototypeszd2zzbackend_c_prototypez00();
	static obj_t BGl_czd2walkzd2zzbackend_cz00(BgL_cvmz00_bglt);
	static obj_t BGl_zc3anonymousza34208ze3z83zzbackend_cz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34199ze3z83zzbackend_cz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_emitzd2classzd2typesz00zzbackend_c_prototypez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_getzd2modulezd2initz00zzbackend_initz00();
	BGL_IMPORT obj_t string_to_bstring(char *);
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_sawcz00zzbackend_cvmz00;
	extern obj_t BGl_za2mainza2z00zzmodule_modulez00;
	extern obj_t BGl_compilerz00zzengine_compilerz00();
	static obj_t BGl__cczd2compilerzd2zzbackend_cz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__buildzd2sawczd2backendz00zzbackend_cz00(obj_t);
	static obj_t BGl_zc3anonymousza34227ze3z83zzbackend_cz00(obj_t, obj_t);
	extern obj_t BGl_bdbzd2settingz12zc0zzbdb_settingz00();
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	extern obj_t BGl_emitzd2headerzd2zzbackend_c_emitz00();
	extern obj_t
		BGl_backendzd2compilezd2functionsz00zzbackend_backendz00
		(BgL_backendz00_bglt);
	BGL_IMPORT obj_t BGl_suffixz00zz__osz00(obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_emitzd2includezd2zzbackend_c_emitz00();
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_buildzd2sawczd2backendz00zzbackend_cz00();
	extern obj_t BGl_emitzd2bdbzd2infoz00zzbdb_emitz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34247ze3z83zzbackend_cz00(obj_t);
	extern obj_t BGl_ccz00zzcc_ccz00(obj_t, obj_t, bool_t);
	BGL_IMPORT obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_cvmz00zzbackend_cvmz00;
	static obj_t BGl_methodzd2initzd2zzbackend_cz00();
	extern obj_t BGl_loadzd2libraryzd2initz00zzinit_setrcz00();
	extern obj_t BGl_makezd2tmpzd2mainz00zzengine_linkz00(obj_t, bool_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_emitzd2mainzd2zzbackend_c_emitz00();
	extern obj_t BGl_ldz00zzcc_ldz00(obj_t, bool_t);
	extern obj_t BGl_za2profilezd2modeza2zd2zzengine_paramz00;
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_cz00 = BUNSPEC;
	static obj_t BGl_backendzd2cnstzd2tablezd2n4167zd2zzbackend_cz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzbackend_cz00();
	extern obj_t BGl_za2czd2userzd2headerza2z00zzengine_paramz00;
	extern obj_t BGl_emitzd2debugzd2activationz00zzbackend_c_emitz00();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_IMPORT obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_backendzd2linkzd2cvm4165z00zzbackend_cz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	extern obj_t BGl_za2czd2userzd2footza2z00zzengine_paramz00;
	static obj_t BGl_makezd2tmpzd2filezd2namezd2zzbackend_cz00();
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_backendzd2compilezd2cvm4163z00zzbackend_cz00(obj_t, obj_t);
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_emitzd2cnstszd2zzbackend_c_prototypez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_cz00();
	extern obj_t BGl_za2ozd2filesza2zd2zzengine_paramz00;
	extern obj_t BGl_registerzd2backendz12zc0zzbackend_backendz00(obj_t, obj_t);
	extern BgL_cgenz00_bglt BGl_makezd2cgenzd2zzbackend_cvmz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, obj_t, obj_t,
		bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, obj_t, obj_t,
		bool_t, bool_t, bool_t, obj_t, obj_t, bool_t, bool_t);
	extern obj_t BGl_za2bigloozd2tmpza2zd2zzengine_paramz00;
	extern obj_t BGl_usezd2libraryz12zc0zzmodule_alibraryz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34324ze3z83zzbackend_cz00(obj_t);
	extern obj_t BGl_stopzd2onzd2passz00zzengine_passz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34327ze3z83zzbackend_cz00(obj_t);
	BGL_IMPORT obj_t BGl_expandz00zz__expandz00(obj_t);
	static obj_t BGl_zc3anonymousza34333ze3z83zzbackend_cz00(obj_t);
	extern obj_t BGl_compilerzd2readzd2zzread_readerz00(obj_t);
	BGL_IMPORT obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_za2czd2portza2zd2zzbackend_c_emitz00;
	BGL_IMPORT obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t
		BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(BgL_typez00_bglt);
	extern obj_t
		BGl_emitzd2garbagezd2collectorzd2selectionzd2zzbackend_c_emitz00();
	extern obj_t BGl_localz00zzast_varz00;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_IMPORT char *BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_indentz00zzcc_indentz00(obj_t);
	static obj_t BGl__buildzd2cgenzd2backendz00zzbackend_cz00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern bool_t
		BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00(BgL_globalz00_bglt);
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_cz00();
	static obj_t __cnst[20];


	extern obj_t BGl_backendzd2linkzd2objectszd2envzd2zzbackend_backendz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4479z00zzbackend_cz00,
		BgL_bgl_za7c3anonymousza7a344521z00,
		BGl_zc3anonymousza34199ze3z83zzbackend_cz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4485z00zzbackend_cz00,
		BgL_bgl_za7c3anonymousza7a344522z00,
		BGl_zc3anonymousza34208ze3z83zzbackend_cz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4486z00zzbackend_cz00,
		BgL_bgl_za7c3anonymousza7a344523z00,
		BGl_zc3anonymousza34227ze3z83zzbackend_cz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4489z00zzbackend_cz00,
		BgL_bgl_za7c3anonymousza7a344524z00,
		BGl_zc3anonymousza34247ze3z83zzbackend_cz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4501z00zzbackend_cz00,
		BgL_bgl_backendza7d2linkza7d4525z00,
		BGl_backendzd2linkzd2objects4169z00zzbackend_cz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4495z00zzbackend_cz00,
		BgL_bgl_backendza7d2compil4526za7,
		BGl_backendzd2compilezd2cvm4163z00zzbackend_cz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4497z00zzbackend_cz00,
		BgL_bgl_backendza7d2linkza7d4527z00,
		BGl_backendzd2linkzd2cvm4165z00zzbackend_cz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4499z00zzbackend_cz00,
		BgL_bgl_backendza7d2cnstza7d4528z00,
		BGl_backendzd2cnstzd2tablezd2n4167zd2zzbackend_cz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4514z00zzbackend_cz00,
		BgL_bgl_za7c3anonymousza7a344529z00,
		BGl_zc3anonymousza34324ze3z83zzbackend_cz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4515z00zzbackend_cz00,
		BgL_bgl_za7c3anonymousza7a344530z00,
		BGl_zc3anonymousza34327ze3z83zzbackend_cz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4516z00zzbackend_cz00,
		BgL_bgl_za7c3anonymousza7a344531z00,
		BGl_zc3anonymousza34333ze3z83zzbackend_cz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cczd2compilerzd2envz00zzbackend_cz00,
		BgL_bgl__ccza7d2compilerza7d4532z00, BGl__cczd2compilerzd2zzbackend_cz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4474z00zzbackend_cz00,
		BgL_bgl_string4474za700za7za7b4533za7, "dummy", 5);
	      DEFINE_STRING(BGl_string4475z00zzbackend_cz00,
		BgL_bgl_string4475za700za7za7b4534za7, "heap", 4);
	      DEFINE_STRING(BGl_string4476z00zzbackend_cz00,
		BgL_bgl_string4476za700za7za7b4535za7, "C generation (saw)", 18);
	      DEFINE_STRING(BGl_string4477z00zzbackend_cz00,
		BgL_bgl_string4477za700za7za7b4536za7, "C generation (cgen)", 19);
	      DEFINE_STRING(BGl_string4478z00zzbackend_cz00,
		BgL_bgl_string4478za700za7za7b4537za7, "   . ", 5);
	      DEFINE_STRING(BGl_string4480z00zzbackend_cz00,
		BgL_bgl_string4480za700za7za7b4538za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string4481z00zzbackend_cz00,
		BgL_bgl_string4481za700za7za7b4539za7, "/* User header */", 17);
	      DEFINE_STRING(BGl_string4482z00zzbackend_cz00,
		BgL_bgl_string4482za700za7za7b4540za7, "#ifdef __cplusplus", 18);
	      DEFINE_STRING(BGl_string4483z00zzbackend_cz00,
		BgL_bgl_string4483za700za7za7b4541za7, "extern \"C\" {", 12);
	      DEFINE_STRING(BGl_string4484z00zzbackend_cz00,
		BgL_bgl_string4484za700za7za7b4542za7, "#endif", 6);
	      DEFINE_STRING(BGl_string4487z00zzbackend_cz00,
		BgL_bgl_string4487za700za7za7b4543za7, "}", 1);
	      DEFINE_STRING(BGl_string4488z00zzbackend_cz00,
		BgL_bgl_string4488za700za7za7b4544za7, ".c", 2);
	      DEFINE_STRING(BGl_string4500z00zzbackend_cz00,
		BgL_bgl_string4500za700za7za7b4545za7, "backend-cnst-table-name", 23);
	      DEFINE_STRING(BGl_string4490z00zzbackend_cz00,
		BgL_bgl_string4490za700za7za7b4546za7, "USER", 4);
	      DEFINE_STRING(BGl_string4491z00zzbackend_cz00,
		BgL_bgl_string4491za700za7za7b4547za7, "", 0);
	      DEFINE_STRING(BGl_string4502z00zzbackend_cz00,
		BgL_bgl_string4502za700za7za7b4548za7, "backend-link-objects", 20);
	      DEFINE_STRING(BGl_string4492z00zzbackend_cz00,
		BgL_bgl_string4492za700za7za7b4549za7, ".", 1);
	      DEFINE_STRING(BGl_string4503z00zzbackend_cz00,
		BgL_bgl_string4503za700za7za7b4550za7, " -- ", 4);
	      DEFINE_STRING(BGl_string4493z00zzbackend_cz00,
		BgL_bgl_string4493za700za7za7b4551za7, "@", 1);
	      DEFINE_STRING(BGl_string4504z00zzbackend_cz00,
		BgL_bgl_string4504za700za7za7b4552za7, "No source file found", 20);
	      DEFINE_STRING(BGl_string4494z00zzbackend_cz00,
		BgL_bgl_string4494za700za7za7b4553za7, "main-tmp", 8);
	      DEFINE_STRING(BGl_string4505z00zzbackend_cz00,
		BgL_bgl_string4505za700za7za7b4554za7, "link", 4);
	      DEFINE_STRING(BGl_string4506z00zzbackend_cz00,
		BgL_bgl_string4506za700za7za7b4555za7, "\"", 1);
	      DEFINE_STRING(BGl_string4496z00zzbackend_cz00,
		BgL_bgl_string4496za700za7za7b4556za7, "backend-compile", 15);
	      DEFINE_STRING(BGl_string4507z00zzbackend_cz00,
		BgL_bgl_string4507za700za7za7b4557za7, ")", 1);
	      DEFINE_STRING(BGl_string4508z00zzbackend_cz00,
		BgL_bgl_string4508za700za7za7b4558za7, " and ", 5);
	      DEFINE_STRING(BGl_string4498z00zzbackend_cz00,
		BgL_bgl_string4498za700za7za7b4559za7, "backend-link", 12);
	      DEFINE_STRING(BGl_string4510z00zzbackend_cz00,
		BgL_bgl_string4510za700za7za7b4560za7, "Illegal file", 12);
	      DEFINE_STRING(BGl_string4509z00zzbackend_cz00,
		BgL_bgl_string4509za700za7za7b4561za7, "Redeclaration of the main (files ",
		33);
	      DEFINE_STRING(BGl_string4511z00zzbackend_cz00,
		BgL_bgl_string4511za700za7za7b4562za7, "*__cnst", 7);
	      DEFINE_STRING(BGl_string4512z00zzbackend_cz00,
		BgL_bgl_string4512za700za7za7b4563za7, "__cnst[ ", 8);
	      DEFINE_STRING(BGl_string4513z00zzbackend_cz00,
		BgL_bgl_string4513za700za7za7b4564za7, " ] ", 3);
	      DEFINE_STRING(BGl_string4517z00zzbackend_cz00,
		BgL_bgl_string4517za700za7za7b4565za7, "backend_c", 9);
	      DEFINE_STRING(BGl_string4518z00zzbackend_cz00,
		BgL_bgl_string4518za700za7za7b4566za7,
		"cindent distrib cgen main module library now done cc have-dlopen imported (ld distrib) pass-started ((lambda () (start-emission! \".c\"))) native (c bdb module) (foreign extern) bigloo-c c-saw c ",
		193);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_buildzd2cgenzd2backendzd2envzd2zzbackend_cz00,
		BgL_bgl__buildza7d2cgenza7d24567z00,
		BGl__buildzd2cgenzd2backendz00zzbackend_cz00, 0L, BUNSPEC, 0);
	extern obj_t BGl_backendzd2linkzd2envz00zzbackend_backendz00;
	extern obj_t BGl_backendzd2cnstzd2tablezd2namezd2envz00zzbackend_backendz00;
	extern obj_t BGl_backendzd2compilezd2envz00zzbackend_backendz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_buildzd2sawczd2backendzd2envzd2zzbackend_cz00,
		BgL_bgl__buildza7d2sawcza7d24568z00,
		BGl__buildzd2sawczd2backendz00zzbackend_cz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzbackend_cz00(long
		BgL_checksumz00_2101, char *BgL_fromz00_2102)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_cz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_cz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzbackend_cz00();
					BGl_cnstzd2initzd2zzbackend_cz00();
					BGl_importedzd2moduleszd2initz00zzbackend_cz00();
					BGl_methodzd2initzd2zzbackend_cz00();
					BGl_toplevelzd2initzd2zzbackend_cz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_cz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 15 */
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "backend_c");
			BGl_modulezd2initializa7ationz75zz__configurez00(((long) 0), "backend_c");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "backend_c");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"backend_c");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "backend_c");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "backend_c");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"backend_c");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "backend_c");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"backend_c");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"backend_c");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"backend_c");
			BGl_modulezd2initializa7ationz75zz__expandz00(((long) 0), "backend_c");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"backend_c");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"backend_c");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbackend_cz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 15 */
			{	/* BackEnd/c.scm 15 */
				obj_t BgL_cportz00_2093;

				BgL_cportz00_2093 =
					bgl_open_input_string(BGl_string4518z00zzbackend_cz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2094;

					BgL_iz00_2094 = ((long) 19);
				BgL_loopz00_2095:
					if ((BgL_iz00_2094 == ((long) -1)))
						{	/* BackEnd/c.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* BackEnd/c.scm 15 */
							{	/* BackEnd/c.scm 15 */
								obj_t BgL_arg4520z00_2097;

								{	/* BackEnd/c.scm 15 */

									{	/* BackEnd/c.scm 15 */
										obj_t BgL_locationz00_2099;

										BgL_locationz00_2099 = BBOOL(((bool_t) 0));
										{	/* BackEnd/c.scm 15 */

											BgL_arg4520z00_2097 =
												BGl_readz00zz__readerz00(BgL_cportz00_2093,
												BgL_locationz00_2099);
										}
									}
								}
								{	/* BackEnd/c.scm 15 */
									int BgL_auxz00_2131;

									BgL_auxz00_2131 = (int) (BgL_iz00_2094);
									CNST_TABLE_SET(BgL_auxz00_2131, BgL_arg4520z00_2097);
							}}
							{	/* BackEnd/c.scm 15 */
								int BgL_auxz00_2100;

								BgL_auxz00_2100 = (int) ((BgL_iz00_2094 - ((long) 1)));
								{
									long BgL_iz00_2136;

									BgL_iz00_2136 = (long) (BgL_auxz00_2100);
									BgL_iz00_2094 = BgL_iz00_2136;
									goto BgL_loopz00_2095;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbackend_cz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 15 */
			BGl_registerzd2backendz12zc0zzbackend_backendz00(CNST_TABLE_REF(((long)
						0)), BGl_buildzd2cgenzd2backendzd2envzd2zzbackend_cz00);
			BGl_registerzd2backendz12zc0zzbackend_backendz00(CNST_TABLE_REF(((long)
						1)), BGl_buildzd2sawczd2backendzd2envzd2zzbackend_cz00);
			return BUNSPEC;
		}
	}



/* build-sawc-backend */
	BGL_EXPORTED_DEF obj_t BGl_buildzd2sawczd2backendz00zzbackend_cz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 71 */
			return
				(obj_t) (BGl_makezd2sawczd2zzbackend_cvmz00(CNST_TABLE_REF(((long) 1)),
					CNST_TABLE_REF(((long) 2)), BGl_string4474z00zzbackend_cz00, BNIL,
					BNIL, BNIL, BNIL, BNIL, BNIL, ((bool_t) 0),
					BGl_string4475z00zzbackend_cz00, CNST_TABLE_REF(((long) 0)),
					((bool_t) 1), ((bool_t) 0), ((bool_t) 0), ((bool_t) 0), ((bool_t) 1),
					((bool_t) 0), ((bool_t) 0), CNST_TABLE_REF(((long) 3)),
					CNST_TABLE_REF(((long) 4)), ((bool_t) 1), ((bool_t) 1), ((bool_t) 1),
					BNIL, BNIL, ((bool_t) 1), ((bool_t) 1)));
		}
	}



/* _build-sawc-backend */
	obj_t BGl__buildzd2sawczd2backendz00zzbackend_cz00(obj_t BgL_envz00_2046)
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 71 */
			return BGl_buildzd2sawczd2backendz00zzbackend_cz00();
		}
	}



/* build-cgen-backend */
	BGL_EXPORTED_DEF obj_t BGl_buildzd2cgenzd2backendz00zzbackend_cz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 82 */
			return
				(obj_t) (BGl_makezd2cgenzd2zzbackend_cvmz00(CNST_TABLE_REF(((long) 0)),
					CNST_TABLE_REF(((long) 2)), BGl_string4474z00zzbackend_cz00, BNIL,
					BNIL, BNIL, BNIL, BNIL, BNIL, ((bool_t) 0),
					BGl_string4475z00zzbackend_cz00, CNST_TABLE_REF(((long) 5)),
					((bool_t) 1), ((bool_t) 0), ((bool_t) 0), ((bool_t) 0), ((bool_t) 1),
					((bool_t) 0), ((bool_t) 1), CNST_TABLE_REF(((long) 3)),
					CNST_TABLE_REF(((long) 4)), ((bool_t) 1), ((bool_t) 1), ((bool_t) 0),
					BNIL, BNIL, ((bool_t) 1), ((bool_t) 1)));
		}
	}



/* _build-cgen-backend */
	obj_t BGl__buildzd2cgenzd2backendz00zzbackend_cz00(obj_t BgL_envz00_2045)
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 82 */
			return BGl_buildzd2cgenzd2backendz00zzbackend_cz00();
		}
	}



/* c-walk */
	obj_t BGl_czd2walkzd2zzbackend_cz00(BgL_cvmz00_bglt BgL_mez00_26)
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 109 */
			{	/* BackEnd/c.scm 110 */
				obj_t BgL_arg4183z00_1055;

				{	/* BackEnd/c.scm 110 */
					bool_t BgL_testz00_2158;

					{	/* BackEnd/c.scm 110 */
						obj_t BgL_obj3943z00_1866;

						BgL_obj3943z00_1866 = (obj_t) (BgL_mez00_26);
						BgL_testz00_2158 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj3943z00_1866,
							BGl_sawcz00zzbackend_cvmz00);
					}
					if (BgL_testz00_2158)
						{	/* BackEnd/c.scm 110 */
							BgL_arg4183z00_1055 = BGl_string4476z00zzbackend_cz00;
						}
					else
						{	/* BackEnd/c.scm 110 */
							BgL_arg4183z00_1055 = BGl_string4477z00zzbackend_cz00;
						}
				}
				{	/* BackEnd/c.scm 110 */
					obj_t BgL_list4184z00_1056;

					{	/* BackEnd/c.scm 110 */
						obj_t BgL_arg4185z00_1057;

						{	/* BackEnd/c.scm 110 */
							obj_t BgL_arg4186z00_1058;

							BgL_arg4186z00_1058 =
								MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
							BgL_arg4185z00_1057 =
								MAKE_PAIR(BgL_arg4183z00_1055, BgL_arg4186z00_1058);
						}
						BgL_list4184z00_1056 =
							MAKE_PAIR(BGl_string4478z00zzbackend_cz00, BgL_arg4185z00_1057);
					}
					BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
						BgL_list4184z00_1056);
			}}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			{	/* BackEnd/c.scm 110 */
				bool_t BgL_testz00_2168;

				{	/* BackEnd/c.scm 110 */
					obj_t BgL_obj3943z00_1867;

					BgL_obj3943z00_1867 = (obj_t) (BgL_mez00_26);
					BgL_testz00_2168 =
						BGl_iszd2azf3z21zz__objectz00(BgL_obj3943z00_1867,
						BGl_sawcz00zzbackend_cvmz00);
				}
				if (BgL_testz00_2168)
					{	/* BackEnd/c.scm 110 */
						BGl_za2currentzd2passza2zd2zzengine_passz00 =
							BGl_string4476z00zzbackend_cz00;
					}
				else
					{	/* BackEnd/c.scm 110 */
						BGl_za2currentzd2passza2zd2zzengine_passz00 =
							BGl_string4477z00zzbackend_cz00;
					}
			}
			{	/* BackEnd/c.scm 110 */
				obj_t BgL_g4131z00_1061;

				obj_t BgL_g4132z00_1062;

				{	/* BackEnd/c.scm 110 */
					obj_t BgL_list4198z00_1078;

					BgL_list4198z00_1078 = MAKE_PAIR(BGl_proc4479z00zzbackend_cz00, BNIL);
					BgL_g4131z00_1061 = BgL_list4198z00_1078;
				}
				BgL_g4132z00_1062 = CNST_TABLE_REF(((long) 6));
				{
					obj_t BgL_hooksz00_1064;

					obj_t BgL_hnamesz00_1065;

					BgL_hooksz00_1064 = BgL_g4131z00_1061;
					BgL_hnamesz00_1065 = BgL_g4132z00_1062;
				BgL_zc3anonymousza34188ze3z83_1066:
					if (NULLP(BgL_hooksz00_1064))
						{	/* BackEnd/c.scm 110 */
							CNST_TABLE_REF(((long) 7));
						}
					else
						{	/* BackEnd/c.scm 110 */
							bool_t BgL_testz00_2176;

							{	/* BackEnd/c.scm 110 */
								obj_t BgL_fun4196z00_1075;

								BgL_fun4196z00_1075 = CAR(BgL_hooksz00_1064);
								BgL_testz00_2176 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun4196z00_1075)
									(BgL_fun4196z00_1075, BEOA));
							}
							if (BgL_testz00_2176)
								{
									obj_t BgL_hnamesz00_2183;

									obj_t BgL_hooksz00_2181;

									BgL_hooksz00_2181 = CDR(BgL_hooksz00_1064);
									BgL_hnamesz00_2183 = CDR(BgL_hnamesz00_1065);
									BgL_hnamesz00_1065 = BgL_hnamesz00_2183;
									BgL_hooksz00_1064 = BgL_hooksz00_2181;
									goto BgL_zc3anonymousza34188ze3z83_1066;
								}
							else
								{	/* BackEnd/c.scm 110 */
									obj_t BgL_arg4193z00_1071;

									obj_t BgL_arg4195z00_1073;

									{	/* BackEnd/c.scm 110 */
										bool_t BgL_testz00_2185;

										{	/* BackEnd/c.scm 110 */
											obj_t BgL_obj3943z00_1874;

											BgL_obj3943z00_1874 = (obj_t) (BgL_mez00_26);
											BgL_testz00_2185 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj3943z00_1874,
												BGl_sawcz00zzbackend_cvmz00);
										}
										if (BgL_testz00_2185)
											{	/* BackEnd/c.scm 110 */
												BgL_arg4193z00_1071 = BGl_string4476z00zzbackend_cz00;
											}
										else
											{	/* BackEnd/c.scm 110 */
												BgL_arg4193z00_1071 = BGl_string4477z00zzbackend_cz00;
											}
									}
									BgL_arg4195z00_1073 = CAR(BgL_hnamesz00_1065);
									BGl_internalzd2errorzd2zztools_errorz00(BgL_arg4193z00_1071,
										BGl_string4480z00zzbackend_cz00, BgL_arg4195z00_1073);
								}
						}
				}
			}
			BGl_emitzd2headerzd2zzbackend_c_emitz00();
			BGl_emitzd2garbagezd2collectorzd2selectionzd2zzbackend_c_emitz00();
			{	/* BackEnd/c.scm 120 */
				bool_t BgL_testz00_2192;

				if (
					((long) CINT(BGl_za2compilerzd2debugza2zd2zzengine_paramz00) >
						((long) 0)))
					{	/* BackEnd/c.scm 120 */
						BgL_testz00_2192 = ((bool_t) 1);
					}
				else
					{	/* BackEnd/c.scm 120 */
						BgL_testz00_2192 = CBOOL(BGl_za2czd2debugza2zd2zzengine_paramz00);
					}
				if (BgL_testz00_2192)
					{	/* BackEnd/c.scm 120 */
						BGl_emitzd2debugzd2activationz00zzbackend_c_emitz00();
					}
				else
					{	/* BackEnd/c.scm 120 */
						BFALSE;
					}
			}
			BGl_emitzd2includezd2zzbackend_c_emitz00();
			if (PAIRP(BGl_za2czd2userzd2headerza2z00zzengine_paramz00))
				{	/* BackEnd/c.scm 127 */
					{	/* BackEnd/c.scm 128 */
						obj_t BgL_port4139z00_1084;

						BgL_port4139z00_1084 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
						bgl_display_string(BGl_string4481z00zzbackend_cz00,
							BgL_port4139z00_1084);
						bgl_display_char(((unsigned char) '\n'), BgL_port4139z00_1084);
					}
					{
						obj_t BgL_l4141z00_1086;

						BgL_l4141z00_1086 = BGl_za2czd2userzd2headerza2z00zzengine_paramz00;
					BgL_zc3anonymousza34203ze3z83_1087:
						if (PAIRP(BgL_l4141z00_1086))
							{	/* BackEnd/c.scm 129 */
								{	/* BackEnd/c.scm 129 */
									obj_t BgL_hz00_1089;

									BgL_hz00_1089 = CAR(BgL_l4141z00_1086);
									{	/* BackEnd/c.scm 129 */
										obj_t BgL_port4140z00_1090;

										BgL_port4140z00_1090 =
											BGl_za2czd2portza2zd2zzbackend_c_emitz00;
										bgl_display_obj(BgL_hz00_1089, BgL_port4140z00_1090);
										bgl_display_char(((unsigned char) '\n'),
											BgL_port4140z00_1090);
								}}
								{
									obj_t BgL_l4141z00_2208;

									BgL_l4141z00_2208 = CDR(BgL_l4141z00_1086);
									BgL_l4141z00_1086 = BgL_l4141z00_2208;
									goto BgL_zc3anonymousza34203ze3z83_1087;
								}
							}
						else
							{	/* BackEnd/c.scm 129 */
								((bool_t) 1);
							}
					}
				}
			else
				{	/* BackEnd/c.scm 127 */
					((bool_t) 0);
				}
			{	/* BackEnd/c.scm 132 */
				obj_t BgL_port4143z00_1093;

				BgL_port4143z00_1093 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				bgl_display_string(BGl_string4482z00zzbackend_cz00,
					BgL_port4143z00_1093);
				bgl_display_char(((unsigned char) '\n'), BgL_port4143z00_1093);
			}
			{	/* BackEnd/c.scm 133 */
				obj_t BgL_port4144z00_1094;

				BgL_port4144z00_1094 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				bgl_display_string(BGl_string4483z00zzbackend_cz00,
					BgL_port4144z00_1094);
				bgl_display_char(((unsigned char) '\n'), BgL_port4144z00_1094);
			}
			{	/* BackEnd/c.scm 134 */
				obj_t BgL_port4145z00_1095;

				BgL_port4145z00_1095 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				bgl_display_string(BGl_string4484z00zzbackend_cz00,
					BgL_port4145z00_1095);
				bgl_display_char(((unsigned char) '\n'), BgL_port4145z00_1095);
			}
			BGl_forzd2eachzd2globalz12z12zzast_envz00(BGl_proc4485z00zzbackend_cz00,
				BNIL);
			{	/* BackEnd/c.scm 153 */
				obj_t BgL_classesz00_1122;

				BgL_classesz00_1122 =
					BGl_filterz00zz__r4_control_features_6_9z00
					(BGl_proc4486z00zzbackend_cz00,
					BGl_getzd2classzd2listz00zzobject_classz00());
				BGl_emitzd2classzd2typesz00zzbackend_c_prototypez00(BgL_classesz00_1122,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
			}
			BGl_emitzd2prototypeszd2zzbackend_c_prototypez00();
			BGl_emitzd2cnstszd2zzbackend_c_prototypez00();
			{	/* BackEnd/c.scm 164 */
				obj_t BgL_globalsz00_1130;

				{
					BgL_backendz00_bglt BgL_auxz00_2222;

					BgL_auxz00_2222 = (BgL_backendz00_bglt) (BgL_mez00_26);
					BgL_globalsz00_1130 =
						(((BgL_backendz00_bglt) CREF(BgL_auxz00_2222))->BgL_functionsz00);
				}
				if (
					((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) > ((long) 0)))
					{	/* BackEnd/c.scm 168 */
						BGl_emitzd2bdbzd2infoz00zzbdb_emitz00(BgL_globalsz00_1130,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					}
				else
					{	/* BackEnd/c.scm 168 */
						BFALSE;
					}
				if (
					((long) CINT(BGl_za2profilezd2modeza2zd2zzengine_paramz00) >
						((long) 0)))
					{	/* BackEnd/c.scm 172 */
						BGl_emitzd2profzd2infoz00zzprof_emitz00(BgL_globalsz00_1130,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					}
				else
					{	/* BackEnd/c.scm 172 */
						BFALSE;
					}
				{	/* BackEnd/c.scm 176 */
					bool_t BgL_testz00_2233;

					{	/* BackEnd/c.scm 176 */
						bool_t BgL_testz00_2234;

						if (CBOOL(BGl_za2mainza2z00zzmodule_modulez00))
							{	/* BackEnd/c.scm 176 */
								BgL_testz00_2234 = ((bool_t) 1);
							}
						else
							{	/* BackEnd/c.scm 176 */
								BgL_testz00_2234 =
									CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
									(BGl_za2passza2z00zzengine_paramz00,
										CNST_TABLE_REF(((long) 8))));
							}
						if (BgL_testz00_2234)
							{	/* BackEnd/c.scm 176 */
								if (
									(BGl_za2mainza2z00zzmodule_modulez00 ==
										CNST_TABLE_REF(((long) 9))))
									{	/* BackEnd/c.scm 177 */
										BgL_testz00_2233 = ((bool_t) 0);
									}
								else
									{	/* BackEnd/c.scm 177 */
										BgL_testz00_2233 = ((bool_t) 1);
									}
							}
						else
							{	/* BackEnd/c.scm 176 */
								BgL_testz00_2233 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_2233)
						{	/* BackEnd/c.scm 176 */
							BGl_emitzd2mainzd2zzbackend_c_emitz00();
						}
					else
						{	/* BackEnd/c.scm 176 */
							BFALSE;
						}
				}
				{	/* BackEnd/c.scm 181 */
					obj_t BgL_modzd2initzd2_1136;

					BgL_modzd2initzd2_1136 =
						BGl_getzd2modulezd2initz00zzbackend_initz00();
					{	/* BackEnd/c.scm 182 */
						bool_t BgL_testz00_2245;

						if (CBOOL(BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF((
											(long) 10)))))
							{	/* BackEnd/c.scm 182 */
								BgL_testz00_2245 =
									BGl_iszd2azf3z21zz__objectz00(BgL_modzd2initzd2_1136,
									BGl_globalz00zzast_varz00);
							}
						else
							{	/* BackEnd/c.scm 182 */
								BgL_testz00_2245 = ((bool_t) 0);
							}
						if (BgL_testz00_2245)
							{	/* BackEnd/c.scm 182 */
								if (SYMBOLP(BGl_za2dlopenzd2initza2zd2zzengine_paramz00))
									{	/* BackEnd/c.scm 186 */
										obj_t BgL_arg4237z00_1139;

										{	/* BackEnd/c.scm 186 */
											obj_t BgL_res4461z00_1924;

											{	/* BackEnd/c.scm 186 */
												obj_t BgL_symbolz00_1922;

												BgL_symbolz00_1922 =
													BGl_za2dlopenzd2initza2zd2zzengine_paramz00;
												{	/* BackEnd/c.scm 186 */
													obj_t BgL_arg2063z00_1923;

													BgL_arg2063z00_1923 =
														SYMBOL_TO_STRING(BgL_symbolz00_1922);
													BgL_res4461z00_1924 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_1923);
												}
											}
											BgL_arg4237z00_1139 = BgL_res4461z00_1924;
										}
										BGl_emitzd2dlopenzd2initz00zzbackend_c_emitz00(
											(BgL_globalz00_bglt) (BgL_modzd2initzd2_1136),
											BgL_arg4237z00_1139);
									}
								else
									{	/* BackEnd/c.scm 185 */
										if (STRINGP(BGl_za2dlopenzd2initza2zd2zzengine_paramz00))
											{	/* BackEnd/c.scm 187 */
												BGl_emitzd2dlopenzd2initz00zzbackend_c_emitz00(
													(BgL_globalz00_bglt) (BgL_modzd2initzd2_1136),
													BGl_za2dlopenzd2initza2zd2zzengine_paramz00);
											}
										else
											{	/* BackEnd/c.scm 187 */
												if (CBOOL(BGl_za2dlopenzd2initza2zd2zzengine_paramz00))
													{	/* BackEnd/c.scm 189 */
														BGl_emitzd2dlopenzd2initz00zzbackend_c_emitz00(
															(BgL_globalz00_bglt) (BgL_modzd2initzd2_1136),
															string_to_bstring(BGL_DYNAMIC_LOAD_INIT));
													}
												else
													{	/* BackEnd/c.scm 189 */
														BUNSPEC;
													}
											}
									}
							}
						else
							{	/* BackEnd/c.scm 182 */
								BFALSE;
							}
					}
				}
				BGl_backendzd2compilezd2functionsz00zzbackend_backendz00(
					(BgL_backendz00_bglt) (BgL_mez00_26));
				{	/* BackEnd/c.scm 197 */
					obj_t BgL_port4149z00_1142;

					BgL_port4149z00_1142 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
					bgl_display_string(BGl_string4482z00zzbackend_cz00,
						BgL_port4149z00_1142);
					bgl_display_char(((unsigned char) '\n'), BgL_port4149z00_1142);
				}
				{	/* BackEnd/c.scm 198 */
					obj_t BgL_port4150z00_1143;

					BgL_port4150z00_1143 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
					bgl_display_string(BGl_string4487z00zzbackend_cz00,
						BgL_port4150z00_1143);
					bgl_display_char(((unsigned char) '\n'), BgL_port4150z00_1143);
				}
				{	/* BackEnd/c.scm 199 */
					obj_t BgL_port4151z00_1144;

					BgL_port4151z00_1144 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
					bgl_display_string(BGl_string4484z00zzbackend_cz00,
						BgL_port4151z00_1144);
					bgl_display_char(((unsigned char) '\n'), BgL_port4151z00_1144);
				}
				{
					obj_t BgL_l4153z00_1146;

					BgL_l4153z00_1146 = BGl_za2czd2userzd2footza2z00zzengine_paramz00;
				BgL_zc3anonymousza34240ze3z83_1147:
					if (PAIRP(BgL_l4153z00_1146))
						{	/* BackEnd/c.scm 202 */
							{	/* BackEnd/c.scm 202 */
								obj_t BgL_hz00_1149;

								BgL_hz00_1149 = CAR(BgL_l4153z00_1146);
								{	/* BackEnd/c.scm 202 */
									obj_t BgL_port4152z00_1150;

									BgL_port4152z00_1150 =
										BGl_za2czd2portza2zd2zzbackend_c_emitz00;
									bgl_display_obj(BgL_hz00_1149, BgL_port4152z00_1150);
									bgl_display_char(((unsigned char) '\n'),
										BgL_port4152z00_1150);
							}}
							{
								obj_t BgL_l4153z00_2279;

								BgL_l4153z00_2279 = CDR(BgL_l4153z00_1146);
								BgL_l4153z00_1146 = BgL_l4153z00_2279;
								goto BgL_zc3anonymousza34240ze3z83_1147;
							}
						}
					else
						{	/* BackEnd/c.scm 202 */
							((bool_t) 1);
						}
				}
				return BGl_stopzd2emissionz12zc0zzbackend_c_emitz00();
			}
		}
	}



/* <anonymous:4227> */
	obj_t BGl_zc3anonymousza34227ze3z83zzbackend_cz00(obj_t BgL_envz00_2050,
		obj_t BgL_tz00_2051)
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 153 */
			{
				obj_t BgL_tz00_1125;

				{	/* BackEnd/c.scm 154 */
					bool_t BgL_auxz00_2282;

					BgL_tz00_1125 = BgL_tz00_2051;
					{	/* BackEnd/c.scm 154 */
						long BgL_auxz00_2283;

						{	/* BackEnd/c.scm 154 */
							BgL_typez00_bglt BgL_obj1569z00_1912;

							BgL_obj1569z00_1912 = (BgL_typez00_bglt) (BgL_tz00_1125);
							BgL_auxz00_2283 =
								(long) (
								(((BgL_typez00_bglt) CREF(BgL_obj1569z00_1912))->
									BgL_occurrencez00));
						}
						BgL_auxz00_2282 = (BgL_auxz00_2283 > ((long) 0));
					}
					return BBOOL(BgL_auxz00_2282);
				}
			}
		}
	}



/* <anonymous:4208> */
	obj_t BGl_zc3anonymousza34208ze3z83zzbackend_cz00(obj_t BgL_envz00_2052,
		obj_t BgL_globalz00_2053)
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 138 */
			{
				obj_t BgL_globalz00_1098;

				BgL_globalz00_1098 = BgL_globalz00_2053;
				{	/* BackEnd/c.scm 140 */
					bool_t BgL_testz00_2289;

					{	/* BackEnd/c.scm 140 */
						bool_t BgL_testz00_2290;

						{	/* BackEnd/c.scm 140 */
							obj_t BgL_arg4224z00_1120;

							{
								BgL_globalz00_bglt BgL_auxz00_2291;

								BgL_auxz00_2291 = (BgL_globalz00_bglt) (BgL_globalz00_1098);
								BgL_arg4224z00_1120 =
									(((BgL_globalz00_bglt) CREF(BgL_auxz00_2291))->BgL_modulez00);
							}
							BgL_testz00_2290 =
								(BgL_arg4224z00_1120 == BGl_za2moduleza2z00zzmodule_modulez00);
						}
						if (BgL_testz00_2290)
							{	/* BackEnd/c.scm 141 */
								long BgL_auxz00_2295;

								{
									BgL_variablez00_bglt BgL_auxz00_2296;

									BgL_auxz00_2296 = (BgL_variablez00_bglt) (BgL_globalz00_1098);
									BgL_auxz00_2295 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_2296))->
										BgL_occurrencez00);
								}
								BgL_testz00_2289 = (BgL_auxz00_2295 > ((long) 0));
							}
						else
							{	/* BackEnd/c.scm 140 */
								BgL_testz00_2289 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_2289)
						{	/* BackEnd/c.scm 140 */
							return
								BGl_typezd2incrementzd2globalz12z12zzast_typezd2occurzd2(
								(BgL_globalz00_bglt) (BgL_globalz00_1098));
						}
					else
						{	/* BackEnd/c.scm 140 */
							if (BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00(
									(BgL_globalz00_bglt) (BgL_globalz00_1098)))
								{	/* BackEnd/c.scm 143 */
									{	/* BackEnd/c.scm 144 */
										BgL_typez00_bglt BgL_arg4211z00_1102;

										{
											BgL_variablez00_bglt BgL_auxz00_2305;

											BgL_auxz00_2305 =
												(BgL_variablez00_bglt) (BgL_globalz00_1098);
											BgL_arg4211z00_1102 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_2305))->
												BgL_typez00);
										}
										BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
											(BgL_arg4211z00_1102);
									}
									{	/* BackEnd/c.scm 145 */
										bool_t BgL_testz00_2309;

										{	/* BackEnd/c.scm 145 */
											BgL_valuez00_bglt BgL_arg4220z00_1116;

											{
												BgL_variablez00_bglt BgL_auxz00_2310;

												BgL_auxz00_2310 =
													(BgL_variablez00_bglt) (BgL_globalz00_1098);
												BgL_arg4220z00_1116 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_2310))->
													BgL_valuez00);
											}
											{	/* BackEnd/c.scm 145 */
												obj_t BgL_obj1978z00_1901;

												BgL_obj1978z00_1901 = (obj_t) (BgL_arg4220z00_1116);
												BgL_testz00_2309 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj1978z00_1901,
													BGl_sfunz00zzast_varz00);
											}
										}
										if (BgL_testz00_2309)
											{	/* BackEnd/c.scm 146 */
												obj_t BgL_g4148z00_1104;

												{	/* BackEnd/c.scm 152 */
													BgL_sfunz00_bglt BgL_obj1903z00_1903;

													{	/* BackEnd/c.scm 152 */
														BgL_variablez00_bglt BgL_obj1632z00_1902;

														BgL_obj1632z00_1902 =
															(BgL_variablez00_bglt) (BgL_globalz00_1098);
														BgL_obj1903z00_1903 =
															(BgL_sfunz00_bglt) (
															(((BgL_variablez00_bglt)
																	CREF(BgL_obj1632z00_1902))->BgL_valuez00));
													}
													BgL_g4148z00_1104 =
														(((BgL_sfunz00_bglt) CREF(BgL_obj1903z00_1903))->
														BgL_argsz00);
												}
												{
													obj_t BgL_l4146z00_1106;

													{	/* BackEnd/c.scm 152 */
														bool_t BgL_auxz00_2319;

														BgL_l4146z00_1106 = BgL_g4148z00_1104;
													BgL_zc3anonymousza34213ze3z83_1107:
														if (PAIRP(BgL_l4146z00_1106))
															{	/* BackEnd/c.scm 152 */
																{	/* BackEnd/c.scm 148 */
																	obj_t BgL_az00_1109;

																	BgL_az00_1109 = CAR(BgL_l4146z00_1106);
																	if (BGl_iszd2azf3z21zz__objectz00
																		(BgL_az00_1109, BGl_typez00zztype_typez00))
																		{	/* BackEnd/c.scm 148 */
																			BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
																				((BgL_typez00_bglt) (BgL_az00_1109));
																		}
																	else
																		{	/* BackEnd/c.scm 148 */
																			if (BGl_iszd2azf3z21zz__objectz00
																				(BgL_az00_1109,
																					BGl_localz00zzast_varz00))
																				{	/* BackEnd/c.scm 151 */
																					BgL_typez00_bglt BgL_arg4217z00_1112;

																					{
																						BgL_variablez00_bglt
																							BgL_auxz00_2329;
																						BgL_auxz00_2329 =
																							(BgL_variablez00_bglt) (
																							(BgL_localz00_bglt)
																							(BgL_az00_1109));
																						BgL_arg4217z00_1112 =
																							(((BgL_variablez00_bglt)
																								CREF(BgL_auxz00_2329))->
																							BgL_typez00);
																					}
																					BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
																						(BgL_arg4217z00_1112);
																				}
																			else
																				{	/* BackEnd/c.scm 150 */
																					BFALSE;
																				}
																		}
																}
																{
																	obj_t BgL_l4146z00_2334;

																	BgL_l4146z00_2334 = CDR(BgL_l4146z00_1106);
																	BgL_l4146z00_1106 = BgL_l4146z00_2334;
																	goto BgL_zc3anonymousza34213ze3z83_1107;
																}
															}
														else
															{	/* BackEnd/c.scm 152 */
																BgL_auxz00_2319 = ((bool_t) 1);
															}
														return BBOOL(BgL_auxz00_2319);
													}
												}
											}
										else
											{	/* BackEnd/c.scm 145 */
												return BFALSE;
											}
									}
								}
							else
								{	/* BackEnd/c.scm 143 */
									return BFALSE;
								}
						}
				}
			}
		}
	}



/* <anonymous:4199> */
	obj_t BGl_zc3anonymousza34199ze3z83zzbackend_cz00(obj_t BgL_envz00_2054)
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 111 */
			{

				return
					BGl_startzd2emissionz12zc0zzbackend_c_emitz00
					(BGl_string4488z00zzbackend_cz00);
			}
		}
	}



/* cc-compiler */
	BGL_EXPORTED_DEF obj_t BGl_cczd2compilerzd2zzbackend_cz00(obj_t
		BgL_czd2prefixzd2_27, obj_t BgL_ozd2prefixzd2_28)
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 209 */
			BGl_setzd2backendz12zc0zzbackend_backendz00(CNST_TABLE_REF(((long) 0)));
			{	/* BackEnd/c.scm 213 */
				bool_t BgL_arg4243z00_1153;

				if ((BGl_za2passza2z00zzengine_paramz00 == CNST_TABLE_REF(((long) 11))))
					{	/* BackEnd/c.scm 213 */
						BgL_arg4243z00_1153 = ((bool_t) 0);
					}
				else
					{	/* BackEnd/c.scm 213 */
						BgL_arg4243z00_1153 = ((bool_t) 1);
					}
				BGl_ccz00zzcc_ccz00(BgL_czd2prefixzd2_27, BgL_ozd2prefixzd2_28,
					BgL_arg4243z00_1153);
			}
			{	/* BackEnd/c.scm 214 */
				obj_t BgL_arg4245z00_1155;

				BgL_arg4245z00_1155 = CNST_TABLE_REF(((long) 11));
				BGl_stopzd2onzd2passz00zzengine_passz00(BgL_arg4245z00_1155,
					BGl_proc4489z00zzbackend_cz00);
			}
			{	/* BackEnd/c.scm 216 */
				obj_t BgL_arg4248z00_1159;

				if (STRINGP(BgL_ozd2prefixzd2_28))
					{	/* BackEnd/c.scm 216 */
						BgL_arg4248z00_1159 = BgL_ozd2prefixzd2_28;
					}
				else
					{	/* BackEnd/c.scm 216 */
						BgL_arg4248z00_1159 = BgL_czd2prefixzd2_27;
					}
				return BGl_ldz00zzcc_ldz00(BgL_arg4248z00_1159, ((bool_t) 0));
			}
		}
	}



/* _cc-compiler */
	obj_t BGl__cczd2compilerzd2zzbackend_cz00(obj_t BgL_envz00_2056,
		obj_t BgL_czd2prefixzd2_2057, obj_t BgL_ozd2prefixzd2_2058)
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 209 */
			return
				BGl_cczd2compilerzd2zzbackend_cz00(BgL_czd2prefixzd2_2057,
				BgL_ozd2prefixzd2_2058);
		}
	}



/* <anonymous:4247> */
	obj_t BGl_zc3anonymousza34247ze3z83zzbackend_cz00(obj_t BgL_envz00_2059)
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 214 */
			{

				return CNST_TABLE_REF(((long) 12));
		}}
	}



/* make-tmp-file-name */
	obj_t BGl_makezd2tmpzd2filezd2namezd2zzbackend_cz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 229 */
			{	/* BackEnd/c.scm 231 */
				obj_t BgL_arg4251z00_1161;

				{	/* BackEnd/c.scm 231 */
					obj_t BgL_arg4254z00_1164;

					obj_t BgL_arg4257z00_1166;

					{	/* BackEnd/c.scm 233 */
						obj_t BgL_userz00_1172;

						BgL_userz00_1172 =
							BGl_getenvz00zz__osz00(BSTRING_TO_STRING
							(BGl_string4490z00zzbackend_cz00));
						if (STRINGP(BgL_userz00_1172))
							{	/* BackEnd/c.scm 234 */
								BgL_arg4254z00_1164 = BgL_userz00_1172;
							}
						else
							{	/* BackEnd/c.scm 234 */
								BgL_arg4254z00_1164 = BGl_string4491z00zzbackend_cz00;
							}
					}
					BgL_arg4257z00_1166 = CAR(BGl_za2srczd2suffixza2zd2zzengine_paramz00);
					{	/* BackEnd/c.scm 231 */
						obj_t BgL_list4258z00_1167;

						{	/* BackEnd/c.scm 231 */
							obj_t BgL_arg4259z00_1168;

							{	/* BackEnd/c.scm 231 */
								obj_t BgL_arg4260z00_1169;

								{	/* BackEnd/c.scm 231 */
									obj_t BgL_arg4261z00_1170;

									{	/* BackEnd/c.scm 231 */
										obj_t BgL_arg4262z00_1171;

										BgL_arg4262z00_1171 = MAKE_PAIR(BgL_arg4257z00_1166, BNIL);
										BgL_arg4261z00_1170 =
											MAKE_PAIR(BGl_string4492z00zzbackend_cz00,
											BgL_arg4262z00_1171);
									}
									BgL_arg4260z00_1169 =
										MAKE_PAIR(BgL_arg4254z00_1164, BgL_arg4261z00_1170);
								}
								BgL_arg4259z00_1168 =
									MAKE_PAIR(BGl_string4493z00zzbackend_cz00,
									BgL_arg4260z00_1169);
							}
							BgL_list4258z00_1167 =
								MAKE_PAIR(BGl_string4494z00zzbackend_cz00, BgL_arg4259z00_1168);
						}
						BgL_arg4251z00_1161 =
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list4258z00_1167);
					}
				}
				return
					BGl_makezd2filezd2namez00zz__osz00
					(BGl_za2bigloozd2tmpza2zd2zzengine_paramz00, BgL_arg4251z00_1161);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_cz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_cz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2compilezd2envz00zzbackend_backendz00,
				BGl_cvmz00zzbackend_cvmz00, BGl_proc4495z00zzbackend_cz00,
				BGl_string4496z00zzbackend_cz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2linkzd2envz00zzbackend_backendz00,
				BGl_cvmz00zzbackend_cvmz00, BGl_proc4497z00zzbackend_cz00,
				BGl_string4498z00zzbackend_cz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2cnstzd2tablezd2namezd2envz00zzbackend_backendz00,
				BGl_cvmz00zzbackend_cvmz00, BGl_proc4499z00zzbackend_cz00,
				BGl_string4500z00zzbackend_cz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2linkzd2objectszd2envzd2zzbackend_backendz00,
				BGl_cvmz00zzbackend_cvmz00, BGl_proc4501z00zzbackend_cz00,
				BGl_string4502z00zzbackend_cz00);
		}
	}



/* backend-link-objects4169 */
	obj_t BGl_backendzd2linkzd2objects4169z00zzbackend_cz00(obj_t BgL_envz00_2067,
		obj_t BgL_mez00_2068, obj_t BgL_sourcesz00_2069)
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 243 */
			{
				BgL_cvmz00_bglt BgL_mez00_1688;

				obj_t BgL_sourcesz00_1689;

				BgL_mez00_1688 = (BgL_cvmz00_bglt) (BgL_mez00_2068);
				BgL_sourcesz00_1689 = BgL_sourcesz00_2069;
				if (
					((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) > ((long) 0)))
					{	/* BackEnd/c.scm 244 */
						BGl_bdbzd2settingz12zc0zzbdb_settingz00();
					}
				else
					{	/* BackEnd/c.scm 244 */
						BFALSE;
					}
				if (NULLP(BgL_sourcesz00_1689))
					{	/* BackEnd/c.scm 246 */
						obj_t BgL_firstz00_1694;

						BgL_firstz00_1694 =
							BGl_prefixz00zz__osz00(CAR
							(BGl_za2ozd2filesza2zd2zzengine_paramz00));
						{	/* BackEnd/c.scm 247 */
							obj_t BgL_list4344z00_1695;

							{	/* BackEnd/c.scm 247 */
								obj_t BgL_arg4346z00_1697;

								{	/* BackEnd/c.scm 247 */
									obj_t BgL_arg4348z00_1699;

									{	/* BackEnd/c.scm 247 */
										obj_t BgL_arg4350z00_1701;

										BgL_arg4350z00_1701 =
											MAKE_PAIR(BGl_za2ozd2filesza2zd2zzengine_paramz00, BNIL);
										BgL_arg4348z00_1699 =
											MAKE_PAIR(BGl_string4503z00zzbackend_cz00,
											BgL_arg4350z00_1701);
									}
									BgL_arg4346z00_1697 =
										MAKE_PAIR(BGl_string4504z00zzbackend_cz00,
										BgL_arg4348z00_1699);
								}
								BgL_list4344z00_1695 =
									MAKE_PAIR(BGl_string4505z00zzbackend_cz00,
									BgL_arg4346z00_1697);
							}
							BGl_warningz00zz__errorz00(BgL_list4344z00_1695);
						}
						BGl_loadzd2libraryzd2initz00zzinit_setrcz00();
						BGl_za2ozd2filesza2zd2zzengine_paramz00 =
							CDR(BGl_za2ozd2filesza2zd2zzengine_paramz00);
						return BGl_ldz00zzcc_ldz00(BgL_firstz00_1694, ((bool_t) 0));
					}
				else
					{
						obj_t BgL_sourcesz00_1706;

						obj_t BgL_clsz00_1707;

						obj_t BgL_mainz00_1708;

						obj_t BgL_fmainz00_1709;

						obj_t BgL_librariesz00_1710;

						BgL_sourcesz00_1706 = BgL_sourcesz00_1689;
						BgL_clsz00_1707 = BNIL;
						BgL_mainz00_1708 = BFALSE;
						BgL_fmainz00_1709 = BGl_string4491z00zzbackend_cz00;
						BgL_librariesz00_1710 = BNIL;
					BgL_zc3anonymousza34352ze3z83_1711:
						if (NULLP(BgL_sourcesz00_1706))
							{	/* BackEnd/c.scm 256 */
								if (CBOOL(BgL_mainz00_1708))
									{	/* BackEnd/c.scm 258 */
										obj_t BgL_firstz00_1713;

										BgL_firstz00_1713 =
											BGl_prefixz00zz__osz00(CAR
											(BGl_za2ozd2filesza2zd2zzengine_paramz00));
										{
											obj_t BgL_l4157z00_1715;

											BgL_l4157z00_1715 = BgL_librariesz00_1710;
										BgL_zc3anonymousza34354ze3z83_1716:
											if (PAIRP(BgL_l4157z00_1715))
												{	/* BackEnd/c.scm 261 */
													{	/* BackEnd/c.scm 262 */
														obj_t BgL_libz00_1718;

														BgL_libz00_1718 = CAR(BgL_l4157z00_1715);
														{
															obj_t BgL_libsz00_1719;

															if (PAIRP(BgL_libz00_1718))
																{	/* BackEnd/c.scm 262 */
																	if (
																		(CAR(BgL_libz00_1718) ==
																			CNST_TABLE_REF(((long) 14))))
																		{	/* BackEnd/c.scm 262 */
																			BgL_libsz00_1719 = CDR(BgL_libz00_1718);
																			{
																				obj_t BgL_l4155z00_1728;

																				BgL_l4155z00_1728 = BgL_libsz00_1719;
																			BgL_zc3anonymousza34361ze3z83_1729:
																				if (PAIRP(BgL_l4155z00_1728))
																					{	/* BackEnd/c.scm 264 */
																						{	/* BackEnd/c.scm 265 */
																							obj_t BgL_libz00_1731;

																							BgL_libz00_1731 =
																								CAR(BgL_l4155z00_1728);
																							BGl_usezd2libraryz12zc0zzmodule_alibraryz00
																								(BgL_libz00_1731,
																								CNST_TABLE_REF(((long) 13)));
																						}
																						{
																							obj_t BgL_l4155z00_2403;

																							BgL_l4155z00_2403 =
																								CDR(BgL_l4155z00_1728);
																							BgL_l4155z00_1728 =
																								BgL_l4155z00_2403;
																							goto
																								BgL_zc3anonymousza34361ze3z83_1729;
																						}
																					}
																				else
																					{	/* BackEnd/c.scm 264 */
																						((bool_t) 1);
																					}
																			}
																		}
																	else
																		{	/* BackEnd/c.scm 262 */
																			((bool_t) 0);
																		}
																}
															else
																{	/* BackEnd/c.scm 262 */
																	((bool_t) 0);
																}
														}
													}
													{
														obj_t BgL_l4157z00_2406;

														BgL_l4157z00_2406 = CDR(BgL_l4157z00_1715);
														BgL_l4157z00_1715 = BgL_l4157z00_2406;
														goto BgL_zc3anonymousza34354ze3z83_1716;
													}
												}
											else
												{	/* BackEnd/c.scm 261 */
													((bool_t) 1);
												}
										}
										BGl_loadzd2libraryzd2initz00zzinit_setrcz00();
										{	/* BackEnd/c.scm 270 */
											obj_t BgL_list4365z00_1736;

											BgL_list4365z00_1736 = MAKE_PAIR(BgL_fmainz00_1709, BNIL);
											BGl_za2srczd2filesza2zd2zzengine_paramz00 =
												BgL_list4365z00_1736;
										}
										BGl_za2ozd2filesza2zd2zzengine_paramz00 =
											CDR(BGl_za2ozd2filesza2zd2zzengine_paramz00);
										return BGl_ldz00zzcc_ldz00(BgL_firstz00_1713, ((bool_t) 0));
									}
								else
									{	/* BackEnd/c.scm 274 */
										obj_t BgL_tmpz00_1738;

										BgL_tmpz00_1738 =
											BGl_makezd2tmpzd2filezd2namezd2zzbackend_cz00();
										BGl_makezd2tmpzd2mainz00zzengine_linkz00(BgL_tmpz00_1738,
											CBOOL(BgL_mainz00_1708),
											BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
														15))), BgL_clsz00_1707, BgL_librariesz00_1710);
										{	/* BackEnd/c.scm 276 */
											obj_t BgL_list4368z00_1740;

											BgL_list4368z00_1740 = MAKE_PAIR(BgL_tmpz00_1738, BNIL);
											BGl_za2srczd2filesza2zd2zzengine_paramz00 =
												BgL_list4368z00_1740;
										}
										{
											obj_t BgL_raz00_1743;

											obj_t BgL_resz00_1744;

											BgL_raz00_1743 =
												BGl_za2restzd2argsza2zd2zzengine_paramz00;
											BgL_resz00_1744 = BNIL;
										BgL_zc3anonymousza34369ze3z83_1745:
											if (NULLP(BgL_raz00_1743))
												{	/* BackEnd/c.scm 282 */
													BGl_za2restzd2argsza2zd2zzengine_paramz00 =
														bgl_reverse_bang(BgL_resz00_1744);
												}
											else
												{	/* BackEnd/c.scm 284 */
													bool_t BgL_testz00_2421;

													{	/* BackEnd/c.scm 284 */
														obj_t BgL_arg4376z00_1752;

														BgL_arg4376z00_1752 =
															BGl_suffixz00zz__osz00(CAR(BgL_raz00_1743));
														BgL_testz00_2421 =
															CBOOL(BGl_memberz00zz__r4_pairs_and_lists_6_3z00
															(BgL_arg4376z00_1752,
																BGl_za2mcozd2suffixza2zd2zzengine_paramz00));
													}
													if (BgL_testz00_2421)
														{
															obj_t BgL_raz00_2426;

															BgL_raz00_2426 = CDR(BgL_raz00_1743);
															BgL_raz00_1743 = BgL_raz00_2426;
															goto BgL_zc3anonymousza34369ze3z83_1745;
														}
													else
														{	/* BackEnd/c.scm 287 */
															obj_t BgL_arg4373z00_1749;

															obj_t BgL_arg4374z00_1750;

															BgL_arg4373z00_1749 = CDR(BgL_raz00_1743);
															BgL_arg4374z00_1750 =
																MAKE_PAIR(CAR(BgL_raz00_1743), BgL_resz00_1744);
															{
																obj_t BgL_resz00_2432;

																obj_t BgL_raz00_2431;

																BgL_raz00_2431 = BgL_arg4373z00_1749;
																BgL_resz00_2432 = BgL_arg4374z00_1750;
																BgL_resz00_1744 = BgL_resz00_2432;
																BgL_raz00_1743 = BgL_raz00_2431;
																goto BgL_zc3anonymousza34369ze3z83_1745;
															}
														}
												}
										}
										{	/* BackEnd/c.scm 288 */
											obj_t BgL_val4136z00_1755;

											BgL_val4136z00_1755 =
												BGl_zc3exitza34388ze3z83zzbackend_cz00();
											BGl_loadzd2libraryzd2initz00zzinit_setrcz00();
											{	/* BackEnd/c.scm 293 */
												obj_t BgL_prez00_1756;

												BgL_prez00_1756 =
													BGl_prefixz00zz__osz00(BgL_tmpz00_1738);
												{	/* BackEnd/c.scm 293 */
													obj_t BgL_czd2filezd2_1757;

													BgL_czd2filezd2_1757 =
														string_append(BgL_prez00_1756,
														BGl_string4488z00zzbackend_cz00);
													{	/* BackEnd/c.scm 294 */
														obj_t BgL_ozd2filezd2_1758;

														BgL_ozd2filezd2_1758 =
															string_append_3(BgL_prez00_1756,
															BGl_string4492z00zzbackend_cz00,
															BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00);
														{	/* BackEnd/c.scm 295 */

															{	/* BackEnd/c.scm 299 */
																obj_t BgL_g4161z00_1759;

																{	/* BackEnd/c.scm 302 */
																	obj_t BgL_list4382z00_1768;

																	{	/* BackEnd/c.scm 302 */
																		obj_t BgL_arg4383z00_1769;

																		{	/* BackEnd/c.scm 302 */
																			obj_t BgL_arg4384z00_1770;

																			BgL_arg4384z00_1770 =
																				MAKE_PAIR(BgL_ozd2filezd2_1758, BNIL);
																			BgL_arg4383z00_1769 =
																				MAKE_PAIR(BgL_czd2filezd2_1757,
																				BgL_arg4384z00_1770);
																		}
																		BgL_list4382z00_1768 =
																			MAKE_PAIR(BgL_tmpz00_1738,
																			BgL_arg4383z00_1769);
																	}
																	BgL_g4161z00_1759 = BgL_list4382z00_1768;
																}
																{
																	obj_t BgL_l4159z00_1761;

																	BgL_l4159z00_1761 = BgL_g4161z00_1759;
																BgL_zc3anonymousza34378ze3z83_1762:
																	if (PAIRP(BgL_l4159z00_1761))
																		{	/* BackEnd/c.scm 302 */
																			{	/* BackEnd/c.scm 300 */
																				obj_t BgL_fz00_1764;

																				BgL_fz00_1764 = CAR(BgL_l4159z00_1761);
																				if (fexists(BSTRING_TO_STRING
																						(BgL_fz00_1764)))
																					{	/* BackEnd/c.scm 301 */
																						char *BgL_stringz00_1978;

																						BgL_stringz00_1978 =
																							BSTRING_TO_STRING(BgL_fz00_1764);
																						if (unlink(BgL_stringz00_1978))
																							{	/* BackEnd/c.scm 301 */
																								((bool_t) 0);
																							}
																						else
																							{	/* BackEnd/c.scm 301 */
																								((bool_t) 1);
																							}
																					}
																				else
																					{	/* BackEnd/c.scm 300 */
																						((bool_t) 0);
																					}
																			}
																			{
																				obj_t BgL_l4159z00_2450;

																				BgL_l4159z00_2450 =
																					CDR(BgL_l4159z00_1761);
																				BgL_l4159z00_1761 = BgL_l4159z00_2450;
																				goto BgL_zc3anonymousza34378ze3z83_1762;
																			}
																		}
																	else
																		{	/* BackEnd/c.scm 302 */
																			((bool_t) 1);
																		}
																}
															}
														}
													}
												}
											}
											if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
													(BgL_val4136z00_1755)))
												{	/* BackEnd/c.scm 293 */
													BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
														(BgL_val4136z00_1755), CDR(BgL_val4136z00_1755));
												}
											else
												{	/* BackEnd/c.scm 293 */
													BgL_val4136z00_1755;
												}
										}
										return BINT(((long) 0));
							}}
						else
							{	/* BackEnd/c.scm 304 */
								obj_t BgL_portz00_1777;

								{	/* BackEnd/c.scm 304 */
									obj_t BgL_arg4457z00_1859;

									{	/* BackEnd/c.scm 304 */
										obj_t BgL_pairz00_1983;

										BgL_pairz00_1983 = BgL_sourcesz00_1706;
										BgL_arg4457z00_1859 = CAR(CAR(BgL_pairz00_1983));
									}
									{	/* BackEnd/c.scm 304 */

										BgL_portz00_1777 =
											BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
											(BgL_arg4457z00_1859, BTRUE);
									}
								}
								if (INPUT_PORTP(BgL_portz00_1777))
									{	/* BackEnd/c.scm 307 */
										obj_t BgL_expz00_1779;

										{	/* BackEnd/c.scm 307 */
											obj_t BgL_arg4452z00_1854;

											{	/* BackEnd/c.scm 307 */
												obj_t BgL_list4453z00_1855;

												BgL_list4453z00_1855 =
													MAKE_PAIR(BgL_portz00_1777, BNIL);
												BgL_arg4452z00_1854 =
													BGl_compilerzd2readzd2zzread_readerz00
													(BgL_list4453z00_1855);
											}
											BgL_expz00_1779 =
												BGl_expandz00zz__expandz00(BgL_arg4452z00_1854);
										}
										bgl_close_input_port(BgL_portz00_1777);
										{
											obj_t BgL_namez00_1780;

											obj_t BgL_newzd2mainzd2_1781;

											obj_t BgL_namez00_1783;

											if (PAIRP(BgL_expz00_1779))
												{	/* BackEnd/c.scm 309 */
													obj_t BgL_cdrzd21699zd2_1788;

													BgL_cdrzd21699zd2_1788 = CDR(BgL_expz00_1779);
													if (
														(CAR(BgL_expz00_1779) ==
															CNST_TABLE_REF(((long) 15))))
														{	/* BackEnd/c.scm 309 */
															if (PAIRP(BgL_cdrzd21699zd2_1788))
																{
																	obj_t BgL_gzd21706zd2_1793;

																	BgL_gzd21706zd2_1793 =
																		CDR(BgL_cdrzd21699zd2_1788);
																BgL_zc3anonymousza34394ze3z83_1794:
																	if (PAIRP(BgL_gzd21706zd2_1793))
																		{	/* BackEnd/c.scm 309 */
																			obj_t BgL_carzd21709zd2_1796;

																			BgL_carzd21709zd2_1796 =
																				CAR(BgL_gzd21706zd2_1793);
																			if (PAIRP(BgL_carzd21709zd2_1796))
																				{	/* BackEnd/c.scm 309 */
																					obj_t BgL_cdrzd21713zd2_1798;

																					BgL_cdrzd21713zd2_1798 =
																						CDR(BgL_carzd21709zd2_1796);
																					if (
																						(CAR(BgL_carzd21709zd2_1796) ==
																							CNST_TABLE_REF(((long) 16))))
																						{	/* BackEnd/c.scm 309 */
																							if (PAIRP(BgL_cdrzd21713zd2_1798))
																								{	/* BackEnd/c.scm 309 */
																									if (NULLP(CDR
																											(BgL_cdrzd21713zd2_1798)))
																										{	/* BackEnd/c.scm 309 */
																											BgL_namez00_1780 =
																												CAR
																												(BgL_cdrzd21699zd2_1788);
																											BgL_newzd2mainzd2_1781 =
																												CAR
																												(BgL_cdrzd21713zd2_1798);
																											if (CBOOL
																												(BgL_mainz00_1708))
																												{	/* BackEnd/c.scm 312 */
																													obj_t
																														BgL_arg4414z00_1817;
																													obj_t
																														BgL_arg4415z00_1818;
																													{	/* BackEnd/c.scm 313 */
																														obj_t
																															BgL_arg4418z00_1821;
																														{	/* BackEnd/c.scm 317 */
																															obj_t
																																BgL_pairz00_2010;
																															BgL_pairz00_2010 =
																																BgL_sourcesz00_1706;
																															BgL_arg4418z00_1821
																																=
																																CAR(CAR
																																(BgL_pairz00_2010));
																														}
																														{	/* BackEnd/c.scm 313 */
																															obj_t
																																BgL_list4420z00_1823;
																															{	/* BackEnd/c.scm 313 */
																																obj_t
																																	BgL_arg4421z00_1824;
																																{	/* BackEnd/c.scm 313 */
																																	obj_t
																																		BgL_arg4422z00_1825;
																																	{	/* BackEnd/c.scm 313 */
																																		obj_t
																																			BgL_arg4423z00_1826;
																																		{	/* BackEnd/c.scm 313 */
																																			obj_t
																																				BgL_arg4424z00_1827;
																																			BgL_arg4424z00_1827
																																				=
																																				MAKE_PAIR
																																				(BGl_string4507z00zzbackend_cz00,
																																				BNIL);
																																			BgL_arg4423z00_1826
																																				=
																																				MAKE_PAIR
																																				(BgL_arg4418z00_1821,
																																				BgL_arg4424z00_1827);
																																		}
																																		BgL_arg4422z00_1825
																																			=
																																			MAKE_PAIR
																																			(BGl_string4508z00zzbackend_cz00,
																																			BgL_arg4423z00_1826);
																																	}
																																	BgL_arg4421z00_1824
																																		=
																																		MAKE_PAIR
																																		(BgL_fmainz00_1709,
																																		BgL_arg4422z00_1825);
																																}
																																BgL_list4420z00_1823
																																	=
																																	MAKE_PAIR
																																	(BGl_string4509z00zzbackend_cz00,
																																	BgL_arg4421z00_1824);
																															}
																															BgL_arg4414z00_1817
																																=
																																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																(BgL_list4420z00_1823);
																														}
																													}
																													BgL_arg4415z00_1818 =
																														MAKE_PAIR
																														(BgL_mainz00_1708,
																														BgL_newzd2mainzd2_1781);
																													BGl_errorz00zz__errorz00
																														(BGl_string4491z00zzbackend_cz00,
																														BgL_arg4414z00_1817,
																														BgL_arg4415z00_1818);
																												}
																											else
																												{	/* BackEnd/c.scm 311 */
																													BFALSE;
																												}
																											{	/* BackEnd/c.scm 319 */
																												obj_t
																													BgL_arg4425z00_1828;
																												obj_t
																													BgL_arg4426z00_1829;
																												obj_t
																													BgL_arg4427z00_1830;
																												obj_t
																													BgL_arg4428z00_1831;
																												BgL_arg4425z00_1828 =
																													CDR
																													(BgL_sourcesz00_1706);
																												{	/* BackEnd/c.scm 321 */
																													obj_t
																														BgL_arg4429z00_1832;
																													{	/* BackEnd/c.scm 321 */
																														obj_t
																															BgL_arg4430z00_1833;
																														{	/* BackEnd/c.scm 321 */
																															obj_t
																																BgL_arg4434z00_1837;
																															{	/* BackEnd/c.scm 322 */
																																obj_t
																																	BgL_pairz00_2015;
																																BgL_pairz00_2015
																																	=
																																	BgL_sourcesz00_1706;
																																BgL_arg4434z00_1837
																																	=
																																	CAR(CAR
																																	(BgL_pairz00_2015));
																															}
																															BgL_arg4430z00_1833
																																=
																																string_append_3
																																(BGl_string4506z00zzbackend_cz00,
																																BgL_arg4434z00_1837,
																																BGl_string4506z00zzbackend_cz00);
																														}
																														{	/* BackEnd/c.scm 320 */
																															obj_t
																																BgL_list4431z00_1834;
																															{	/* BackEnd/c.scm 320 */
																																obj_t
																																	BgL_arg4432z00_1835;
																																BgL_arg4432z00_1835
																																	=
																																	MAKE_PAIR
																																	(BgL_arg4430z00_1833,
																																	BNIL);
																																BgL_list4431z00_1834
																																	=
																																	MAKE_PAIR
																																	(BgL_namez00_1780,
																																	BgL_arg4432z00_1835);
																															}
																															BgL_arg4429z00_1832
																																=
																																BgL_list4431z00_1834;
																														}
																													}
																													BgL_arg4426z00_1829 =
																														MAKE_PAIR
																														(BgL_arg4429z00_1832,
																														BgL_clsz00_1707);
																												}
																												{	/* BackEnd/c.scm 325 */
																													obj_t
																														BgL_pairz00_2021;
																													BgL_pairz00_2021 =
																														BgL_sourcesz00_1706;
																													BgL_arg4427z00_1830 =
																														CAR(CAR
																														(BgL_pairz00_2021));
																												}
																												{	/* BackEnd/c.scm 326 */
																													obj_t
																														BgL_arg4437z00_1839;
																													{	/* BackEnd/c.scm 326 */
																														obj_t
																															BgL_arg4438z00_1840;
																														{	/* BackEnd/c.scm 326 */
																															obj_t
																																BgL_pairz00_2025;
																															BgL_pairz00_2025 =
																																BgL_expz00_1779;
																															BgL_arg4438z00_1840
																																=
																																CDR(CDR
																																(BgL_pairz00_2025));
																														}
																														BgL_arg4437z00_1839
																															=
																															BGl_findzd2librarieszd2zzengine_linkz00
																															(BgL_arg4438z00_1840);
																													}
																													BgL_arg4428z00_1831 =
																														bgl_append2
																														(BgL_arg4437z00_1839,
																														BgL_librariesz00_1710);
																												}
																												{
																													obj_t
																														BgL_librariesz00_2521;
																													obj_t
																														BgL_fmainz00_2520;
																													obj_t
																														BgL_mainz00_2519;
																													obj_t BgL_clsz00_2518;

																													obj_t
																														BgL_sourcesz00_2517;
																													BgL_sourcesz00_2517 =
																														BgL_arg4425z00_1828;
																													BgL_clsz00_2518 =
																														BgL_arg4426z00_1829;
																													BgL_mainz00_2519 =
																														BgL_newzd2mainzd2_1781;
																													BgL_fmainz00_2520 =
																														BgL_arg4427z00_1830;
																													BgL_librariesz00_2521
																														=
																														BgL_arg4428z00_1831;
																													BgL_librariesz00_1710
																														=
																														BgL_librariesz00_2521;
																													BgL_fmainz00_1709 =
																														BgL_fmainz00_2520;
																													BgL_mainz00_1708 =
																														BgL_mainz00_2519;
																													BgL_clsz00_1707 =
																														BgL_clsz00_2518;
																													BgL_sourcesz00_1706 =
																														BgL_sourcesz00_2517;
																													goto
																														BgL_zc3anonymousza34352ze3z83_1711;
																												}
																											}
																										}
																									else
																										{
																											obj_t
																												BgL_gzd21706zd2_2524;
																											BgL_gzd21706zd2_2524 =
																												CDR
																												(BgL_gzd21706zd2_1793);
																											BgL_gzd21706zd2_1793 =
																												BgL_gzd21706zd2_2524;
																											goto
																												BgL_zc3anonymousza34394ze3z83_1794;
																										}
																								}
																							else
																								{
																									obj_t BgL_gzd21706zd2_2526;

																									BgL_gzd21706zd2_2526 =
																										CDR(BgL_gzd21706zd2_1793);
																									BgL_gzd21706zd2_1793 =
																										BgL_gzd21706zd2_2526;
																									goto
																										BgL_zc3anonymousza34394ze3z83_1794;
																								}
																						}
																					else
																						{
																							obj_t BgL_gzd21706zd2_2528;

																							BgL_gzd21706zd2_2528 =
																								CDR(BgL_gzd21706zd2_1793);
																							BgL_gzd21706zd2_1793 =
																								BgL_gzd21706zd2_2528;
																							goto
																								BgL_zc3anonymousza34394ze3z83_1794;
																						}
																				}
																			else
																				{
																					obj_t BgL_gzd21706zd2_2530;

																					BgL_gzd21706zd2_2530 =
																						CDR(BgL_gzd21706zd2_1793);
																					BgL_gzd21706zd2_1793 =
																						BgL_gzd21706zd2_2530;
																					goto
																						BgL_zc3anonymousza34394ze3z83_1794;
																				}
																		}
																	else
																		{	/* BackEnd/c.scm 309 */
																			BgL_namez00_1783 =
																				CAR(CDR(BgL_expz00_1779));
																			{	/* BackEnd/c.scm 329 */
																				obj_t BgL_arg4439z00_1841;

																				obj_t BgL_arg4440z00_1842;

																				obj_t BgL_arg4441z00_1843;

																				BgL_arg4439z00_1841 =
																					CDR(BgL_sourcesz00_1706);
																				{	/* BackEnd/c.scm 331 */
																					obj_t BgL_arg4442z00_1844;

																					{	/* BackEnd/c.scm 331 */
																						obj_t BgL_arg4443z00_1845;

																						{	/* BackEnd/c.scm 331 */
																							obj_t BgL_arg4447z00_1849;

																							{	/* BackEnd/c.scm 332 */
																								obj_t BgL_pairz00_2030;

																								BgL_pairz00_2030 =
																									BgL_sourcesz00_1706;
																								BgL_arg4447z00_1849 =
																									CAR(CAR(BgL_pairz00_2030));
																							}
																							BgL_arg4443z00_1845 =
																								string_append_3
																								(BGl_string4506z00zzbackend_cz00,
																								BgL_arg4447z00_1849,
																								BGl_string4506z00zzbackend_cz00);
																						}
																						{	/* BackEnd/c.scm 330 */
																							obj_t BgL_list4444z00_1846;

																							{	/* BackEnd/c.scm 330 */
																								obj_t BgL_arg4445z00_1847;

																								BgL_arg4445z00_1847 =
																									MAKE_PAIR(BgL_arg4443z00_1845,
																									BNIL);
																								BgL_list4444z00_1846 =
																									MAKE_PAIR(BgL_namez00_1783,
																									BgL_arg4445z00_1847);
																							}
																							BgL_arg4442z00_1844 =
																								BgL_list4444z00_1846;
																						}
																					}
																					BgL_arg4440z00_1842 =
																						MAKE_PAIR(BgL_arg4442z00_1844,
																						BgL_clsz00_1707);
																				}
																				{	/* BackEnd/c.scm 336 */
																					obj_t BgL_arg4449z00_1851;

																					{	/* BackEnd/c.scm 336 */
																						obj_t BgL_arg4450z00_1852;

																						{	/* BackEnd/c.scm 336 */
																							obj_t BgL_pairz00_2036;

																							BgL_pairz00_2036 =
																								BgL_expz00_1779;
																							BgL_arg4450z00_1852 =
																								CDR(CDR(BgL_pairz00_2036));
																						}
																						BgL_arg4449z00_1851 =
																							BGl_findzd2librarieszd2zzengine_linkz00
																							(BgL_arg4450z00_1852);
																					}
																					BgL_arg4441z00_1843 =
																						bgl_append2(BgL_arg4449z00_1851,
																						BgL_librariesz00_1710);
																				}
																				{
																					obj_t BgL_librariesz00_2545;

																					obj_t BgL_clsz00_2544;

																					obj_t BgL_sourcesz00_2543;

																					BgL_sourcesz00_2543 =
																						BgL_arg4439z00_1841;
																					BgL_clsz00_2544 = BgL_arg4440z00_1842;
																					BgL_librariesz00_2545 =
																						BgL_arg4441z00_1843;
																					BgL_librariesz00_1710 =
																						BgL_librariesz00_2545;
																					BgL_clsz00_1707 = BgL_clsz00_2544;
																					BgL_sourcesz00_1706 =
																						BgL_sourcesz00_2543;
																					goto
																						BgL_zc3anonymousza34352ze3z83_1711;
																				}
																			}
																		}
																}
															else
																{	/* BackEnd/c.scm 309 */
																BgL_tagzd21690zd2_1785:
																	{
																		obj_t BgL_sourcesz00_2549;

																		BgL_sourcesz00_2549 =
																			CDR(BgL_sourcesz00_1706);
																		BgL_sourcesz00_1706 = BgL_sourcesz00_2549;
																		goto BgL_zc3anonymousza34352ze3z83_1711;
																	}
																}
														}
													else
														{	/* BackEnd/c.scm 309 */
															goto BgL_tagzd21690zd2_1785;
														}
												}
											else
												{	/* BackEnd/c.scm 309 */
													goto BgL_tagzd21690zd2_1785;
												}
										}
									}
								else
									{	/* BackEnd/c.scm 306 */
										obj_t BgL_arg4456z00_1858;

										{	/* BackEnd/c.scm 306 */
											obj_t BgL_pairz00_2041;

											BgL_pairz00_2041 = BgL_sourcesz00_1706;
											BgL_arg4456z00_1858 = CAR(CAR(BgL_pairz00_2041));
										}
										return
											BGl_errorz00zz__errorz00(BGl_string4491z00zzbackend_cz00,
											BGl_string4510z00zzbackend_cz00, BgL_arg4456z00_1858);
									}
							}
					}
			}
		}
	}



/* <exit:4388> */
	obj_t BGl_zc3exitza34388ze3z83zzbackend_cz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 292 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit4137z00_1775;

			if (SET_EXIT(BgL_an_exit4137z00_1775))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit4137z00_1775 = (void *) jmpbuf;
					{	/* BackEnd/c.scm 292 */

						PUSH_EXIT(BgL_an_exit4137z00_1775, ((long) 0));
						{	/* BackEnd/c.scm 289 */
							obj_t BgL_val4138z00_1776;

							BgL_val4138z00_1776 = BGl_compilerz00zzengine_compilerz00();
							POP_EXIT();
							return BgL_val4138z00_1776;
						}
					}
				}
		}
	}



/* backend-cnst-table-n4167 */
	obj_t BGl_backendzd2cnstzd2tablezd2n4167zd2zzbackend_cz00(obj_t
		BgL_envz00_2070, obj_t BgL_mez00_2071, obj_t BgL_offsetz00_2072)
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 221 */
			{
				BgL_cvmz00_bglt BgL_mez00_1676;

				obj_t BgL_offsetz00_1677;

				BgL_mez00_1676 = (BgL_cvmz00_bglt) (BgL_mez00_2071);
				BgL_offsetz00_1677 = BgL_offsetz00_2072;
				if (((long) CINT(BgL_offsetz00_1677) == ((long) 0)))
					{	/* BackEnd/c.scm 222 */
						return BGl_string4511z00zzbackend_cz00;
					}
				else
					{	/* BackEnd/c.scm 224 */
						char *BgL_arg4339z00_1682;

						{	/* BackEnd/c.scm 224 */

							BgL_arg4339z00_1682 =
								BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
								(BgL_offsetz00_1677, BINT(((long) 10)));
						}
						return
							string_append_3(BGl_string4512z00zzbackend_cz00,
							string_to_bstring(BgL_arg4339z00_1682),
							BGl_string4513z00zzbackend_cz00);
					}
			}
		}
	}



/* backend-link-cvm4165 */
	obj_t BGl_backendzd2linkzd2cvm4165z00zzbackend_cz00(obj_t BgL_envz00_2073,
		obj_t BgL_mez00_2074, obj_t BgL_resultz00_2075)
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 102 */
			{
				BgL_cvmz00_bglt BgL_mez00_1669;

				obj_t BgL_resultz00_1670;

				BgL_mez00_1669 = (BgL_cvmz00_bglt) (BgL_mez00_2074);
				BgL_resultz00_1670 = BgL_resultz00_2075;
				if (STRINGP(BgL_resultz00_1670))
					{	/* BackEnd/c.scm 103 */
						return
							BGl_cczd2compilerzd2zzbackend_cz00(BgL_resultz00_1670, BFALSE);
					}
				else
					{	/* BackEnd/c.scm 103 */
						return BFALSE;
					}
			}
		}
	}



/* backend-compile-cvm4163 */
	obj_t BGl_backendzd2compilezd2cvm4163z00zzbackend_cz00(obj_t BgL_envz00_2076,
		obj_t BgL_mez00_2077)
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 90 */
			{
				BgL_cvmz00_bglt BgL_mez00_1648;

				BgL_mez00_1648 = (BgL_cvmz00_bglt) (BgL_mez00_2077);
				{	/* BackEnd/c.scm 91 */
					obj_t BgL_czd2prefixzd2_1651;

					BgL_czd2prefixzd2_1651 =
						BGl_czd2walkzd2zzbackend_cz00(BgL_mez00_1648);
					{	/* BackEnd/c.scm 92 */
						obj_t BgL_arg4322z00_1652;

						BgL_arg4322z00_1652 = CNST_TABLE_REF(((long) 17));
						BGl_stopzd2onzd2passz00zzengine_passz00(BgL_arg4322z00_1652,
							BGl_proc4514z00zzbackend_cz00);
					}
					{	/* BackEnd/c.scm 93 */
						obj_t BgL_arg4325z00_1656;

						BgL_arg4325z00_1656 = CNST_TABLE_REF(((long) 18));
						BGl_stopzd2onzd2passz00zzengine_passz00(BgL_arg4325z00_1656,
							BGl_proc4515z00zzbackend_cz00);
					}
					if (STRINGP(BgL_czd2prefixzd2_1651))
						{	/* BackEnd/c.scm 94 */
							{	/* BackEnd/c.scm 95 */
								bool_t BgL_testz00_2579;

								if (
									(BGl_za2passza2z00zzengine_paramz00 ==
										CNST_TABLE_REF(((long) 19))))
									{	/* BackEnd/c.scm 95 */
										BgL_testz00_2579 = ((bool_t) 1);
									}
								else
									{	/* BackEnd/c.scm 95 */
										BgL_testz00_2579 =
											CBOOL(BGl_za2czd2debugza2zd2zzengine_paramz00);
									}
								if (BgL_testz00_2579)
									{	/* BackEnd/c.scm 95 */
										BGl_indentz00zzcc_indentz00(BgL_czd2prefixzd2_1651);
									}
								else
									{	/* BackEnd/c.scm 95 */
										BFALSE;
									}
							}
							{	/* BackEnd/c.scm 96 */
								obj_t BgL_arg4331z00_1663;

								BgL_arg4331z00_1663 = CNST_TABLE_REF(((long) 19));
								BGl_stopzd2onzd2passz00zzengine_passz00(BgL_arg4331z00_1663,
									BGl_proc4516z00zzbackend_cz00);
						}}
					else
						{	/* BackEnd/c.scm 94 */
							BFALSE;
						}
					return BgL_czd2prefixzd2_1651;
				}
			}
		}
	}



/* <anonymous:4333> */
	obj_t BGl_zc3anonymousza34333ze3z83zzbackend_cz00(obj_t BgL_envz00_2078)
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 96 */
			{

				return CNST_TABLE_REF(((long) 12));
		}}
	}



/* <anonymous:4327> */
	obj_t BGl_zc3anonymousza34327ze3z83zzbackend_cz00(obj_t BgL_envz00_2079)
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 93 */
			{

				return CNST_TABLE_REF(((long) 12));
		}}
	}



/* <anonymous:4324> */
	obj_t BGl_zc3anonymousza34324ze3z83zzbackend_cz00(obj_t BgL_envz00_2080)
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 92 */
			{

				return CNST_TABLE_REF(((long) 12));
		}}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_cz00()
	{
		AN_OBJECT;
		{	/* BackEnd/c.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzengine_configurez00(((long) 96794353),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzengine_compilerz00(((long) 450629069),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzengine_linkz00(((long) 392051205),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzmodule_libraryz00(((long) 79490170),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzmodule_alibraryz00(((long) 69061048),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzast_occurz00(((long) 335751924),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzast_buildz00(((long) 46924743),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzbdb_emitz00(((long) 444965315),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzbdb_settingz00(((long) 443437044),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzprof_emitz00(((long) 297285345),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzbackend_initz00(((long) 312007337),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzbackend_cvmz00(((long) 52967726),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(((long) 185927088),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(((long)
					14608757), BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_mainz00(((long) 179083793),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzcc_indentz00(((long) 499255160),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzcc_ccz00(((long) 473924),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzcc_ldz00(((long) 663636),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzinit_setrcz00(((long) 385369337),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzread_readerz00(((long) 182269387),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzast_typezd2occurzd2(((long) 507127505),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzcgen_compilez00(((long) 180636165),
				BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
			return BGl_modulezd2initializa7ationz75zzsaw_c_compilez00(((long)
					241379862), BSTRING_TO_STRING(BGl_string4517z00zzbackend_cz00));
		}
	}

#ifdef __cplusplus
}
#endif
