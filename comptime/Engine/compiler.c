/*===========================================================================*/
/*   (Engine/compiler.scm)                                                   */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Engine/compiler.scm)*/
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


	static obj_t BGl_zc3anonymousza33455ze3z83zzengine_compilerz00(obj_t);
	static obj_t BGl_zc3anonymousza33466ze3z83zzengine_compilerz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33469ze3z83zzengine_compilerz00(obj_t);
	static obj_t BGl_zc3anonymousza33472ze3z83zzengine_compilerz00(obj_t);
	extern obj_t BGl_buildzd2astzd2zzast_buildz00(obj_t);
	extern obj_t BGl_za2restzd2argsza2zd2zzengine_paramz00;
	static obj_t BGl_zc3anonymousza33475ze3z83zzengine_compilerz00(obj_t);
	extern obj_t BGl_dumpzd2modulezd2zzmodule_modulez00(obj_t);
	extern obj_t BGl_za2interpreterza2z00zzengine_paramz00;
	static obj_t BGl_zc3anonymousza33478ze3z83zzengine_compilerz00(obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_failzd2walkz12zc0zzfail_walkz00(obj_t);
	extern obj_t BGl_patchzd2vectorzd2setz12z12zzcfa_tvectorz00();
	extern obj_t BGl_za2libzd2modeza2zd2zzengine_paramz00;
	static obj_t BGl_zc3anonymousza33487ze3z83zzengine_compilerz00(obj_t);
	extern obj_t BGl_za2errorzd2localiza7ationza2z75zzengine_paramz00;
	extern obj_t BGl_initializa7ezd2Tenvz12z67zztype_envz00();
	extern obj_t BGl_tailczd2walkz12zc0zztailc_walkz00(obj_t);
	static obj_t BGl_zc3anonymousza33501ze3z83zzengine_compilerz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzengine_compilerz00();
	static obj_t BGl_zc3anonymousza33494ze3z83zzengine_compilerz00(obj_t);
	static obj_t BGl_zc3anonymousza33504ze3z83zzengine_compilerz00(obj_t);
	extern obj_t BGl_setzd2backendz12zc0zzbackend_backendz00(obj_t);
	extern obj_t BGl_getzd2toplevelzd2unitz00zzmodule_includez00();
	extern obj_t BGl_restorezd2heapzd2zzheap_restorez00();
	static obj_t BGl_zc3anonymousza33507ze3z83zzengine_compilerz00(obj_t);
	extern obj_t BGl_makezd2addzd2heapz00zzheap_makez00();
	static obj_t BGl_zc3anonymousza33498ze3z83zzengine_compilerz00(obj_t);
	static obj_t BGl_zc3anonymousza33512ze3z83zzengine_compilerz00(obj_t);
	extern obj_t BGl_checkzd2typeszd2zztype_envz00();
	static obj_t BGl_zc3anonymousza33516ze3z83zzengine_compilerz00(obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	static obj_t BGl_zc3anonymousza33519ze3z83zzengine_compilerz00(obj_t);
	static obj_t BGl_zc3anonymousza33522ze3z83zzengine_compilerz00(obj_t);
	static obj_t BGl_zc3anonymousza33525ze3z83zzengine_compilerz00(obj_t);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzengine_compilerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_dotnetz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcc_ldz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcc_ccz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzprof_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbdb_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbdb_spreadzd2objzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbdb_settingz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzhgen_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzreduce_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztailc_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_walkza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzdataflow_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzabound_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzfail_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcallcc_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbeta_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztrace_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_setrcz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_installz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_alibraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzuser_userz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_initz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzast_checkzd2globalzd2initz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_unitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_buildz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_checkzd2sharingzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzheap_makez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzheap_restorez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_accessz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzwrite_astz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzwrite_expandedz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_srcz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_enginez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_signalsz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__expander_srfi0z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	static obj_t BGl_zc3anonymousza33530ze3z83zzengine_compilerz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzengine_compilerz00();
	extern obj_t BGl_globaliza7ezd2walkz12z67zzglobaliza7e_walkza7(obj_t, obj_t);
	extern obj_t
		BGl_backendzd2checkzd2inlinesz00zzbackend_backendz00(BgL_backendz00_bglt);
	extern obj_t BGl_reducezd2walkz12zc0zzreduce_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33536ze3z83zzengine_compilerz00(obj_t);
	BGL_IMPORT int BGl_bigloozd2warningzd2zz__paramz00();
	extern obj_t BGl_dataflowzd2walkz12zc0zzdataflow_walkz00(obj_t, obj_t);
	extern obj_t BGl_readzd2jfilezd2zzread_jvmz00();
	static obj_t BGl_zc3anonymousza33544ze3z83zzengine_compilerz00(obj_t);
	extern obj_t BGl_makezd2profzd2unitz00zzprof_walkz00();
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_hellozd2worldzd2zzengine_enginez00();
	static obj_t BGl_zc3anonymousza33547ze3z83zzengine_compilerz00(obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33550ze3z83zzengine_compilerz00(obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t BGl_unitzd2sexpza2zd2addz12zb0zzast_unitz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33553ze3z83zzengine_compilerz00(obj_t);
	extern obj_t BGl_installzd2initialzd2expanderz00zzexpand_installz00();
	BGL_EXPORTED_DECL obj_t BGl_compilerz00zzengine_compilerz00();
	extern obj_t BGl_inlinezd2walkz12zc0zzinline_walkz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33557ze3z83zzengine_compilerz00(obj_t);
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_bdbzd2settingz12zc0zzbdb_settingz00();
	static obj_t BGl_zc3anonymousza33563ze3z83zzengine_compilerz00(obj_t);
	extern obj_t BGl_installzd2typezd2cachez12z12zztype_cachez00();
	extern obj_t BGl_makezd2heapzd2zzheap_makez00();
	extern obj_t BGl_integratezd2walkz12zc0zzintegrate_walkz00(obj_t);
	extern obj_t BGl_za2globalzd2tailzd2callzf3za2zf3zzengine_paramz00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_za2unsafezd2rangeza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	extern obj_t BGl_betazd2walkz12zc0zzbeta_walkz00(obj_t);
	extern obj_t BGl_callcczd2walkz12zc0zzcallcc_walkz00(obj_t);
	extern obj_t BGl_za2compilerzd2debugzd2traceza2z00zzengine_paramz00;
	extern obj_t BGl_readzd2srczd2zzread_srcz00();
	extern obj_t BGl_initializa7ezd2Genvz12z67zzast_envz00();
	static obj_t BGl_methodzd2initzd2zzengine_compilerz00();
	static obj_t BGl__compilerz00zzengine_compilerz00(obj_t);
	extern obj_t BGl_loadzd2libraryzd2initz00zzinit_setrcz00();
	extern obj_t BGl_getzd2alibraryzd2initsz00zzmodule_alibraryz00();
	BGL_IMPORT obj_t BGl_registerzd2srfiz12zc0zz__expander_srfi0z00(obj_t);
	extern obj_t BGl_bdbzd2walkz12zc0zzbdb_walkz00(obj_t);
	extern obj_t BGl_za2profilezd2modeza2zd2zzengine_paramz00;
	extern obj_t BGl_backendzd2walkzd2zzbackend_walkz00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzengine_compilerz00 = BUNSPEC;
	extern obj_t BGl_userzd2walkzd2zzuser_userz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzengine_compilerz00();
	extern obj_t BGl_readzd2accesszd2filesz00zzread_accessz00();
	extern obj_t BGl_za2optimzd2dataflowzd2typeszf3za2zf3zzengine_paramz00;
	extern obj_t BGl_za2unsafezd2typeza2zd2zzengine_paramz00;
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_writezd2astzd2zzwrite_astz00(obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzengine_compilerz00();
	extern obj_t BGl_tracezd2walkz12zc0zztrace_walkz00(obj_t);
	extern obj_t BGl_cnstzd2walkz12zc0zzcnst_walkz00(obj_t);
	extern obj_t
		BGl_checkzd2globalzd2initializa7ationza7zzast_checkzd2globalzd2initz00();
	extern obj_t BGl_stopzd2onzd2passz00zzengine_passz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_comptimezd2expandzf2errorz20zzexpand_epsz00(obj_t);
	extern obj_t BGl_za2callzf2cczf3za2z01zzengine_paramz00;
	extern obj_t BGl_writezd2expandedzd2zzwrite_expandedz00(obj_t);
	extern obj_t BGl_effectzd2walkz12zc0zzeffect_walkz00(obj_t, bool_t);
	extern obj_t BGl_astzd2initializa7ersz75zzast_initz00();
	extern obj_t BGl_aboundzd2walkz12zc0zzabound_walkz00(obj_t);
	static obj_t BGl_zc3anonymousza33402ze3z83zzengine_compilerz00(obj_t);
	extern obj_t BGl_za2optimzd2dataflowzd2forzd2errorszf3za2z21zzengine_paramz00;
	extern obj_t BGl_cfazd2walkz12zc0zzcfa_walkz00(obj_t);
	static obj_t BGl_zc3anonymousza33397ze3z83zzengine_compilerz00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_setzd2defaultzd2typez12z12zztype_cachez00(BgL_typez00_bglt);
	extern obj_t BGl_bdbzd2spreadzd2objz12z12zzbdb_spreadzd2objzd2(obj_t);
	extern obj_t BGl_enginez00zzengine_enginez00();
	BGL_IMPORT int BGl_bigloozd2compilerzd2debugz00zz__paramz00();
	extern obj_t BGl_unitzd2sexpza2zd2addzd2headz12z62zzast_unitz00(obj_t, obj_t);
	extern obj_t BGl_producezd2modulez12zc0zzmodule_modulez00(obj_t);
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	extern obj_t BGl_expandzd2unitszd2zzexpand_epsz00(obj_t);
	extern obj_t BGl_prognzd2firstzd2expressionz00zztools_prognz00(obj_t);
	extern obj_t BGl_removezd2varzd2zzast_removez00(obj_t, obj_t);
	extern obj_t BGl_appendzd2astzd2zzast_buildz00(obj_t, obj_t);
	extern obj_t BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2(obj_t, obj_t);
	extern obj_t BGl_za2targetzd2languageza2zd2zzengine_paramz00;
	static obj_t BGl_zc3anonymousza33434ze3z83zzengine_compilerz00(obj_t);
	static obj_t BGl_zc3anonymousza33437ze3z83zzengine_compilerz00(obj_t);
	static obj_t BGl_zc3anonymousza33441ze3z83zzengine_compilerz00(obj_t);
	extern obj_t BGl_compilerzd2exitzd2zzinit_mainz00(obj_t);
	extern obj_t BGl_za2modulezd2checksumzd2objectzf3za2zf3zzengine_paramz00;
	extern obj_t BGl_installzd2compilerzd2signalsz12z12zzengine_signalsz00();
	extern obj_t BGl_prognzd2tailzd2expressionsz00zztools_prognz00(obj_t);
	static obj_t BGl_zc3anonymousza33447ze3z83zzengine_compilerz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzengine_compilerz00();
	extern obj_t BGl_za2prezd2processorza2zd2zzengine_paramz00;
	extern obj_t BGl_writezd2effectzd2zzeffect_walkz00(obj_t);
	extern obj_t BGl_modulezd2checksumzd2objectz00zzmodule_modulez00();
	extern obj_t BGl_za2optimzd2unrollzd2loopzf3za2zf3zzengine_paramz00;
	extern obj_t BGl_coercezd2walkz12zc0zzcoerce_walkz00(obj_t);
	static obj_t __cnst[40];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_compilerzd2envzd2zzengine_compilerz00,
		BgL_bgl__compilerza700za7za7en3661za7, BGl__compilerz00zzengine_compilerz00,
		0L, BUNSPEC, 0);
	extern obj_t BGl_hgenzd2walkzd2envz00zzhgen_walkz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3624z00zzengine_compilerz00,
		BgL_bgl_za7c3anonymousza7a333662z00,
		BGl_zc3anonymousza33402ze3z83zzengine_compilerz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3631z00zzengine_compilerz00,
		BgL_bgl_za7c3anonymousza7a333663z00,
		BGl_zc3anonymousza33447ze3z83zzengine_compilerz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3636z00zzengine_compilerz00,
		BgL_bgl_za7c3anonymousza7a333664z00,
		BGl_zc3anonymousza33475ze3z83zzengine_compilerz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3621z00zzengine_compilerz00,
		BgL_bgl_string3621za700za7za7e3665za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string3622z00zzengine_compilerz00,
		BgL_bgl_string3622za700za7za7e3666za7, "Illegal source file", 19);
	      DEFINE_STRING(BGl_string3623z00zzengine_compilerz00,
		BgL_bgl_string3623za700za7za7e3667za7,
		"Don't know what to do with arguments: ", 38);
	      DEFINE_STRING(BGl_string3625z00zzengine_compilerz00,
		BgL_bgl_string3625za700za7za7e3668za7, " error", 6);
	      DEFINE_STRING(BGl_string3626z00zzengine_compilerz00,
		BgL_bgl_string3626za700za7za7e3669za7, "s", 1);
	      DEFINE_STRING(BGl_string3627z00zzengine_compilerz00,
		BgL_bgl_string3627za700za7za7e3670za7, "", 0);
	      DEFINE_STRING(BGl_string3628z00zzengine_compilerz00,
		BgL_bgl_string3628za700za7za7e3671za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string3630z00zzengine_compilerz00,
		BgL_bgl_string3630za700za7za7e3672za7, "ast", 3);
	      DEFINE_STRING(BGl_string3629z00zzengine_compilerz00,
		BgL_bgl_string3629za700za7za7e3673za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string3632z00zzengine_compilerz00,
		BgL_bgl_string3632za700za7za7e3674za7, "trace", 5);
	      DEFINE_STRING(BGl_string3633z00zzengine_compilerz00,
		BgL_bgl_string3633za700za7za7e3675za7, "callcc", 6);
	      DEFINE_STRING(BGl_string3634z00zzengine_compilerz00,
		BgL_bgl_string3634za700za7za7e3676za7, "effect", 6);
	      DEFINE_STRING(BGl_string3635z00zzengine_compilerz00,
		BgL_bgl_string3635za700za7za7e3677za7, "inline", 6);
	      DEFINE_STRING(BGl_string3637z00zzengine_compilerz00,
		BgL_bgl_string3637za700za7za7e3678za7, "beta", 4);
	      DEFINE_STRING(BGl_string3638z00zzengine_compilerz00,
		BgL_bgl_string3638za700za7za7e3679za7, "fail", 4);
	      DEFINE_STRING(BGl_string3640z00zzengine_compilerz00,
		BgL_bgl_string3640za700za7za7e3680za7, "dataflow", 8);
	      DEFINE_STRING(BGl_string3639z00zzengine_compilerz00,
		BgL_bgl_string3639za700za7za7e3681za7, "Reduce0", 7);
	      DEFINE_STRING(BGl_string3641z00zzengine_compilerz00,
		BgL_bgl_string3641za700za7za7e3682za7, "globalize", 9);
	      DEFINE_STRING(BGl_string3642z00zzengine_compilerz00,
		BgL_bgl_string3642za700za7za7e3683za7, "cfa", 3);
	      DEFINE_STRING(BGl_string3643z00zzengine_compilerz00,
		BgL_bgl_string3643za700za7za7e3684za7, "integrate", 9);
	      DEFINE_STRING(BGl_string3644z00zzengine_compilerz00,
		BgL_bgl_string3644za700za7za7e3685za7, "tailc", 5);
	      DEFINE_STRING(BGl_string3645z00zzengine_compilerz00,
		BgL_bgl_string3645za700za7za7e3686za7, "Reduce-", 7);
	      DEFINE_STRING(BGl_string3646z00zzengine_compilerz00,
		BgL_bgl_string3646za700za7za7e3687za7, "reduce-", 7);
	      DEFINE_STRING(BGl_string3647z00zzengine_compilerz00,
		BgL_bgl_string3647za700za7za7e3688za7, "abound", 6);
	      DEFINE_STRING(BGl_string3648z00zzengine_compilerz00,
		BgL_bgl_string3648za700za7za7e3689za7, "coerce", 6);
	      DEFINE_STRING(BGl_string3650z00zzengine_compilerz00,
		BgL_bgl_string3650za700za7za7e3690za7, "Reduce", 6);
	      DEFINE_STRING(BGl_string3649z00zzengine_compilerz00,
		BgL_bgl_string3649za700za7za7e3691za7, "dataflow+", 9);
	      DEFINE_STRING(BGl_string3651z00zzengine_compilerz00,
		BgL_bgl_string3651za700za7za7e3692za7, "reduce", 6);
	      DEFINE_STRING(BGl_string3652z00zzengine_compilerz00,
		BgL_bgl_string3652za700za7za7e3693za7, "cnst", 4);
	      DEFINE_STRING(BGl_string3653z00zzengine_compilerz00,
		BgL_bgl_string3653za700za7za7e3694za7, "inline+", 7);
	      DEFINE_STRING(BGl_string3654z00zzengine_compilerz00,
		BgL_bgl_string3654za700za7za7e3695za7, "init", 4);
	      DEFINE_STRING(BGl_string3655z00zzengine_compilerz00,
		BgL_bgl_string3655za700za7za7e3696za7, "Reduce+", 7);
	      DEFINE_STRING(BGl_string3656z00zzengine_compilerz00,
		BgL_bgl_string3656za700za7za7e3697za7, "reduce+", 7);
	      DEFINE_STRING(BGl_string3657z00zzengine_compilerz00,
		BgL_bgl_string3657za700za7za7e3698za7, "engine_compiler", 15);
	      DEFINE_STRING(BGl_string3658z00zzengine_compilerz00,
		BgL_bgl_string3658za700za7za7e3699za7,
		"now reduce+ effect+ init inline+ reducer cnst reduce egen dataflow+ coerce abound reduce- tailc integrate cfa globalize globalization dataflow fail trace beta make-add-heap inline all effect callcc bdb-spread-obj make-heap ast expand user hgen bigloo-debug-set! (#unspecified) mco dump-module bigloo-debug bigloo-compile bdb ",
		325);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzengine_compilerz00(long
		BgL_checksumz00_1712, char *BgL_fromz00_1713)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzengine_compilerz00))
				{
					BGl_requirezd2initializa7ationz75zzengine_compilerz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzengine_compilerz00();
					BGl_cnstzd2initzd2zzengine_compilerz00();
					BGl_importedzd2moduleszd2initz00zzengine_compilerz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzengine_compilerz00()
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"engine_compiler");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"engine_compiler");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"engine_compiler");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"engine_compiler");
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 0),
				"engine_compiler");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"engine_compiler");
			BGl_modulezd2initializa7ationz75zz__expander_srfi0z00(((long) 0),
				"engine_compiler");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"engine_compiler");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzengine_compilerz00()
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 15 */
			{	/* Engine/compiler.scm 15 */
				obj_t BgL_cportz00_1704;

				BgL_cportz00_1704 =
					bgl_open_input_string(BGl_string3658z00zzengine_compilerz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1705;

					BgL_iz00_1705 = ((long) 39);
				BgL_loopz00_1706:
					if ((BgL_iz00_1705 == ((long) -1)))
						{	/* Engine/compiler.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Engine/compiler.scm 15 */
							{	/* Engine/compiler.scm 15 */
								obj_t BgL_arg3660z00_1708;

								{	/* Engine/compiler.scm 15 */

									{	/* Engine/compiler.scm 15 */
										obj_t BgL_locationz00_1710;

										BgL_locationz00_1710 = BBOOL(((bool_t) 0));
										{	/* Engine/compiler.scm 15 */

											BgL_arg3660z00_1708 =
												BGl_readz00zz__readerz00(BgL_cportz00_1704,
												BgL_locationz00_1710);
										}
									}
								}
								{	/* Engine/compiler.scm 15 */
									int BgL_auxz00_1734;

									BgL_auxz00_1734 = (int) (BgL_iz00_1705);
									CNST_TABLE_SET(BgL_auxz00_1734, BgL_arg3660z00_1708);
							}}
							{	/* Engine/compiler.scm 15 */
								int BgL_auxz00_1711;

								BgL_auxz00_1711 = (int) ((BgL_iz00_1705 - ((long) 1)));
								{
									long BgL_iz00_1739;

									BgL_iz00_1739 = (long) (BgL_auxz00_1711);
									BgL_iz00_1705 = BgL_iz00_1739;
									goto BgL_loopz00_1706;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzengine_compilerz00()
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 15 */
			return BUNSPEC;
		}
	}



/* compiler */
	BGL_EXPORTED_DEF obj_t BGl_compilerz00zzengine_compilerz00()
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 88 */
			BGl_installzd2compilerzd2signalsz12z12zzengine_signalsz00();
			BGl_setzd2backendz12zc0zzbackend_backendz00
				(BGl_za2targetzd2languageza2zd2zzengine_paramz00);
			{	/* Engine/compiler.scm 96 */
				bool_t BgL_testz00_1743;

				{	/* Engine/compiler.scm 96 */
					int BgL_arg3378z00_905;

					BgL_arg3378z00_905 = BGl_bigloozd2compilerzd2debugz00zz__paramz00();
					BgL_testz00_1743 = ((long) (BgL_arg3378z00_905) > ((long) 0));
				}
				if (BgL_testz00_1743)
					{	/* Engine/compiler.scm 96 */
						BFALSE;
					}
				else
					{	/* Engine/compiler.scm 96 */
						{	/* Engine/compiler.scm 97 */
							bool_t BgL_testz00_1747;

							{	/* Engine/compiler.scm 97 */
								obj_t BgL_arg3375z00_902;

								BgL_arg3375z00_902 = BGl_thezd2backendzd2zzbackend_backendz00();
								{
									BgL_backendz00_bglt BgL_auxz00_1749;

									BgL_auxz00_1749 = (BgL_backendz00_bglt) (BgL_arg3375z00_902);
									BgL_testz00_1747 =
										(((BgL_backendz00_bglt) CREF(BgL_auxz00_1749))->
										BgL_boundzd2checkzd2);
								}
							}
							if (BgL_testz00_1747)
								{	/* Engine/compiler.scm 97 */
									BFALSE;
								}
							else
								{	/* Engine/compiler.scm 97 */
									BGl_za2unsafezd2rangeza2zd2zzengine_paramz00 = BTRUE;
								}
						}
						{	/* Engine/compiler.scm 99 */
							bool_t BgL_testz00_1752;

							{	/* Engine/compiler.scm 99 */
								obj_t BgL_arg3377z00_904;

								BgL_arg3377z00_904 = BGl_thezd2backendzd2zzbackend_backendz00();
								{
									BgL_backendz00_bglt BgL_auxz00_1754;

									BgL_auxz00_1754 = (BgL_backendz00_bglt) (BgL_arg3377z00_904);
									BgL_testz00_1752 =
										(((BgL_backendz00_bglt) CREF(BgL_auxz00_1754))->
										BgL_typezd2checkzd2);
								}
							}
							if (BgL_testz00_1752)
								{	/* Engine/compiler.scm 99 */
									BFALSE;
								}
							else
								{	/* Engine/compiler.scm 99 */
									BGl_za2unsafezd2typeza2zd2zzengine_paramz00 = BTRUE;
								}
						}
					}
			}
			{	/* Engine/compiler.scm 103 */
				obj_t BgL_srcz00_907;

				{	/* Engine/compiler.scm 103 */
					obj_t BgL_arg3569z00_1141;

					BgL_arg3569z00_1141 = BGl_readzd2srczd2zzread_srcz00();
					BgL_srcz00_907 =
						PROCEDURE_ENTRY(BGl_za2prezd2processorza2zd2zzengine_paramz00)
						(BGl_za2prezd2processorza2zd2zzengine_paramz00, BgL_arg3569z00_1141,
						BEOA);
				}
				if (CBOOL(BgL_srcz00_907))
					{	/* Engine/compiler.scm 108 */
						if (PAIRP(BgL_srcz00_907))
							{	/* Engine/compiler.scm 111 */
								BFALSE;
							}
						else
							{	/* Engine/compiler.scm 111 */
								BGl_userzd2errorzd2zztools_errorz00
									(BGl_string3621z00zzengine_compilerz00,
									BGl_string3622z00zzengine_compilerz00, BgL_srcz00_907, BNIL);
							}
					}
				else
					{	/* Engine/compiler.scm 108 */
						BGl_za2interpreterza2z00zzengine_paramz00 = BTRUE;
						BGl_compilerzd2exitzd2zzinit_mainz00(BGl_enginez00zzengine_enginez00
							());
					}
				BGl_hellozd2worldzd2zzengine_enginez00();
				{	/* Engine/compiler.scm 118 */
					bool_t BgL_testz00_1768;

					if (
						((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >
							((long) 0)))
						{	/* Engine/compiler.scm 119 */
							obj_t BgL_arg3385z00_913;

							obj_t BgL_arg3386z00_914;

							BgL_arg3385z00_913 = CNST_TABLE_REF(((long) 0));
							{	/* Engine/compiler.scm 119 */
								obj_t BgL_arg3387z00_915;

								BgL_arg3387z00_915 = BGl_thezd2backendzd2zzbackend_backendz00();
								{
									BgL_backendz00_bglt BgL_auxz00_1774;

									BgL_auxz00_1774 = (BgL_backendz00_bglt) (BgL_arg3387z00_915);
									BgL_arg3386z00_914 =
										(((BgL_backendz00_bglt) CREF(BgL_auxz00_1774))->
										BgL_debugzd2supportzd2);
							}}
							BgL_testz00_1768 =
								CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
								(BgL_arg3385z00_913, BgL_arg3386z00_914));
						}
					else
						{	/* Engine/compiler.scm 118 */
							BgL_testz00_1768 = ((bool_t) 0);
						}
					if (BgL_testz00_1768)
						{	/* Engine/compiler.scm 118 */
							BGl_bdbzd2settingz12zc0zzbdb_settingz00();
						}
					else
						{	/* Engine/compiler.scm 118 */
							BFALSE;
						}
				}
				if (NULLP(BGl_za2restzd2argsza2zd2zzengine_paramz00))
					{	/* Engine/compiler.scm 123 */
						BFALSE;
					}
				else
					{	/* Engine/compiler.scm 124 */
						obj_t BgL_list3389z00_917;

						{	/* Engine/compiler.scm 124 */
							obj_t BgL_arg3391z00_919;

							BgL_arg3391z00_919 =
								MAKE_PAIR(BGl_za2restzd2argsza2zd2zzengine_paramz00, BNIL);
							BgL_list3389z00_917 =
								MAKE_PAIR(BGl_string3623z00zzengine_compilerz00,
								BgL_arg3391z00_919);
						}
						BGl_warningz00zz__errorz00(BgL_list3389z00_917);
					}
				BGl_readzd2accesszd2filesz00zzread_accessz00();
				BGl_readzd2jfilezd2zzread_jvmz00();
				if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
					{	/* Engine/compiler.scm 131 */
						BGl_initializa7ezd2Genvz12z67zzast_envz00();
						BGl_initializa7ezd2Tenvz12z67zztype_envz00();
					}
				else
					{	/* Engine/compiler.scm 131 */
						BGl_restorezd2heapzd2zzheap_restorez00();
					}
				BGl_installzd2typezd2cachez12z12zztype_cachez00();
				BGl_patchzd2vectorzd2setz12z12zzcfa_tvectorz00();
				BGl_registerzd2srfiz12zc0zz__expander_srfi0z00(CNST_TABLE_REF(((long)
							1)));
				{	/* Engine/compiler.scm 147 */
					bool_t BgL_testz00_1796;

					{	/* Engine/compiler.scm 147 */
						int BgL_arg3393z00_921;

						BgL_arg3393z00_921 = BGl_bigloozd2compilerzd2debugz00zz__paramz00();
						BgL_testz00_1796 = ((long) (BgL_arg3393z00_921) >= ((long) 1));
					}
					if (BgL_testz00_1796)
						{	/* Engine/compiler.scm 147 */
							BGl_registerzd2srfiz12zc0zz__expander_srfi0z00(CNST_TABLE_REF((
										(long) 2)));
						}
					else
						{	/* Engine/compiler.scm 147 */
							BFALSE;
						}
				}
				BGl_installzd2initialzd2expanderz00zzexpand_installz00();
				{	/* Engine/compiler.scm 155 */
					obj_t BgL_exp0z00_923;

					BgL_exp0z00_923 =
						BGl_comptimezd2expandzf2errorz20zzexpand_epsz00(CAR
						(BgL_srcz00_907));
					{	/* Engine/compiler.scm 155 */
						obj_t BgL_modulez00_924;

						BgL_modulez00_924 =
							BGl_prognzd2firstzd2expressionz00zztools_prognz00
							(BgL_exp0z00_923);
						{	/* Engine/compiler.scm 156 */
							obj_t BgL_srczd2codezd2_925;

							BgL_srczd2codezd2_925 =
								bgl_append2(BGl_prognzd2tailzd2expressionsz00zztools_prognz00
								(BgL_exp0z00_923), CDR(BgL_srcz00_907));
							{	/* Engine/compiler.scm 157 */
								obj_t BgL_unitsz00_926;

								{	/* Engine/compiler.scm 158 */
									obj_t BgL_cellvalz00_1809;

									BgL_cellvalz00_1809 =
										BGl_producezd2modulez12zc0zzmodule_modulez00
										(BgL_modulez00_924);
									BgL_unitsz00_926 = MAKE_CELL(BgL_cellvalz00_1809);
								}
								{	/* Engine/compiler.scm 158 */

									{	/* Engine/compiler.scm 160 */
										obj_t BgL_arg3395z00_927;

										BgL_arg3395z00_927 = CNST_TABLE_REF(((long) 3));
										{	/* Engine/compiler.scm 160 */
											obj_t BgL_zc3anonymousza33397ze3z83_1616;

											BgL_zc3anonymousza33397ze3z83_1616 =
												make_fx_procedure
												(BGl_zc3anonymousza33397ze3z83zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3anonymousza33397ze3z83_1616,
												(int) (((long) 0)), BgL_modulez00_924);
											BGl_stopzd2onzd2passz00zzengine_passz00
												(BgL_arg3395z00_927,
												BgL_zc3anonymousza33397ze3z83_1616);
									}}
									if (
										((long) CINT(BGl_za2profilezd2modeza2zd2zzengine_paramz00)
											>= ((long) 1)))
										{	/* Engine/compiler.scm 164 */
											obj_t BgL_auxz00_1677;

											{	/* Engine/compiler.scm 164 */
												obj_t BgL_arg3399z00_932;

												BgL_arg3399z00_932 =
													BGl_makezd2profzd2unitz00zzprof_walkz00();
												BgL_auxz00_1677 =
													MAKE_PAIR(BgL_arg3399z00_932,
													CELL_REF(BgL_unitsz00_926));
											}
											CELL_SET(BgL_unitsz00_926, BgL_auxz00_1677);
										}
									else
										{	/* Engine/compiler.scm 163 */
											BFALSE;
										}
									if (CBOOL
										(BGl_za2modulezd2checksumzd2objectzf3za2zf3zzengine_paramz00))
										{	/* Engine/compiler.scm 167 */
											BGl_modulezd2checksumzd2objectz00zzmodule_modulez00();
										}
									else
										{	/* Engine/compiler.scm 167 */
											BFALSE;
										}
									{	/* Engine/compiler.scm 169 */
										obj_t BgL_arg3400z00_933;

										BgL_arg3400z00_933 = CNST_TABLE_REF(((long) 4));
										BGl_stopzd2onzd2passz00zzengine_passz00(BgL_arg3400z00_933,
											BGl_proc3624z00zzengine_compilerz00);
									}
									{	/* Engine/compiler.scm 172 */
										obj_t BgL_c0z00_937;

										if (NULLP(BgL_srczd2codezd2_925))
											{	/* Engine/compiler.scm 172 */
												BgL_c0z00_937 = CNST_TABLE_REF(((long) 5));
											}
										else
											{	/* Engine/compiler.scm 172 */
												BgL_c0z00_937 = BgL_srczd2codezd2_925;
											}
										{	/* Engine/compiler.scm 172 */
											obj_t BgL_c1z00_938;

											{	/* Engine/compiler.scm 173 */
												bool_t BgL_testz00_1831;

												{	/* Engine/compiler.scm 173 */
													int BgL_arg3411z00_947;

													BgL_arg3411z00_947 =
														BGl_bigloozd2compilerzd2debugz00zz__paramz00();
													BgL_testz00_1831 =
														((long) (BgL_arg3411z00_947) >= ((long) 2));
												}
												if (BgL_testz00_1831)
													{	/* Engine/compiler.scm 174 */
														obj_t BgL_arg3405z00_941;

														{	/* Engine/compiler.scm 174 */
															obj_t BgL_arg3406z00_942;

															obj_t BgL_arg3407z00_943;

															BgL_arg3406z00_942 = CNST_TABLE_REF(((long) 6));
															{	/* Engine/compiler.scm 174 */
																int BgL_arg3408z00_944;

																BgL_arg3408z00_944 =
																	BGl_bigloozd2compilerzd2debugz00zz__paramz00
																	();
																{	/* Engine/compiler.scm 174 */
																	obj_t BgL_list3410z00_946;

																	BgL_list3410z00_946 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg3407z00_943 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BINT(BgL_arg3408z00_944),
																		BgL_list3410z00_946);
															}}
															BgL_arg3405z00_941 =
																MAKE_PAIR(BgL_arg3406z00_942,
																BgL_arg3407z00_943);
														}
														BgL_c1z00_938 =
															MAKE_PAIR(BgL_arg3405z00_941, BgL_c0z00_937);
													}
												else
													{	/* Engine/compiler.scm 173 */
														BgL_c1z00_938 = BgL_c0z00_937;
													}
											}
											{	/* Engine/compiler.scm 173 */

												BGl_unitzd2sexpza2zd2addz12zb0zzast_unitz00
													(BGl_getzd2toplevelzd2unitz00zzmodule_includez00(),
													BgL_c1z00_938);
											}
										}
									}
									if (
										((long)
											CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
											> ((long) 0)))
										{	/* Engine/compiler.scm 179 */
											{	/* Engine/compiler.scm 179 */
												obj_t BgL_port3362z00_952;

												{	/* Engine/compiler.scm 179 */
													obj_t BgL_res3619z00_1544;

													{	/* Engine/compiler.scm 179 */
														obj_t BgL_auxz00_1847;

														BgL_auxz00_1847 = BGL_CURRENT_DYNAMIC_ENV();
														BgL_res3619z00_1544 =
															BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1847);
													}
													BgL_port3362z00_952 = BgL_res3619z00_1544;
												}
												bgl_display_obj
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BgL_port3362z00_952);
												bgl_display_string
													(BGl_string3625z00zzengine_compilerz00,
													BgL_port3362z00_952);
												{	/* Engine/compiler.scm 179 */
													obj_t BgL_arg3415z00_953;

													{	/* Engine/compiler.scm 179 */
														bool_t BgL_testz00_1852;

														if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
															(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
															{	/* Engine/compiler.scm 179 */
																BgL_testz00_1852 =
																	BGl_2ze3ze3zz__r4_numbers_6_5z00
																	(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
																	BINT(((long) 1)));
															}
														else
															{	/* Engine/compiler.scm 179 */
																BgL_testz00_1852 = ((bool_t) 0);
															}
														if (BgL_testz00_1852)
															{	/* Engine/compiler.scm 179 */
																BgL_arg3415z00_953 =
																	BGl_string3626z00zzengine_compilerz00;
															}
														else
															{	/* Engine/compiler.scm 179 */
																BgL_arg3415z00_953 =
																	BGl_string3627z00zzengine_compilerz00;
															}
													}
													bgl_display_obj(BgL_arg3415z00_953,
														BgL_port3362z00_952);
												}
												bgl_display_string
													(BGl_string3628z00zzengine_compilerz00,
													BgL_port3362z00_952);
												bgl_display_char(((unsigned char) '\n'),
													BgL_port3362z00_952);
											}
											{	/* Engine/compiler.scm 179 */
												obj_t BgL_list3418z00_956;

												BgL_list3418z00_956 =
													MAKE_PAIR(BINT(((long) -1)), BNIL);
												BGl_exitz00zz__errorz00(BgL_list3418z00_956);
										}}
									else
										{
											obj_t BgL_hooksz00_960;

											obj_t BgL_hnamesz00_961;

											BgL_hooksz00_960 = BNIL;
											BgL_hnamesz00_961 = BNIL;
										BgL_zc3anonymousza33419ze3z83_962:
											if (NULLP(BgL_hooksz00_960))
												{	/* Engine/compiler.scm 179 */
													BUNSPEC;
												}
											else
												{	/* Engine/compiler.scm 179 */
													bool_t BgL_testz00_1865;

													{	/* Engine/compiler.scm 179 */
														obj_t BgL_fun3427z00_969;

														BgL_fun3427z00_969 = CAR(BgL_hooksz00_960);
														BgL_testz00_1865 =
															CBOOL(PROCEDURE_ENTRY(BgL_fun3427z00_969)
															(BgL_fun3427z00_969, BEOA));
													}
													if (BgL_testz00_1865)
														{
															obj_t BgL_hnamesz00_1872;

															obj_t BgL_hooksz00_1870;

															BgL_hooksz00_1870 = CDR(BgL_hooksz00_960);
															BgL_hnamesz00_1872 = CDR(BgL_hnamesz00_961);
															BgL_hnamesz00_961 = BgL_hnamesz00_1872;
															BgL_hooksz00_960 = BgL_hooksz00_1870;
															goto BgL_zc3anonymousza33419ze3z83_962;
														}
													else
														{	/* Engine/compiler.scm 179 */
															obj_t BgL_arg3426z00_968;

															BgL_arg3426z00_968 = CAR(BgL_hnamesz00_961);
															BGl_internalzd2errorzd2zztools_errorz00
																(BGl_za2currentzd2passza2zd2zzengine_passz00,
																BGl_string3629z00zzengine_compilerz00,
																BgL_arg3426z00_968);
														}
												}
										}
									BGl_checkzd2typeszd2zztype_envz00();
									BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF(((long)
												7)), BGl_hgenzd2walkzd2envz00zzhgen_walkz00);
									BGl_loadzd2libraryzd2initz00zzinit_setrcz00();
									BGl_unitzd2sexpza2zd2addzd2headz12z62zzast_unitz00
										(BGl_getzd2toplevelzd2unitz00zzmodule_includez00(),
										BGl_getzd2alibraryzd2initsz00zzmodule_alibraryz00());
									BGl_userzd2walkzd2zzuser_userz00(CELL_REF(BgL_unitsz00_926));
									{	/* Engine/compiler.scm 195 */
										obj_t BgL_arg3432z00_974;

										BgL_arg3432z00_974 = CNST_TABLE_REF(((long) 8));
										{	/* Engine/compiler.scm 195 */
											obj_t BgL_zc3anonymousza33434ze3z83_1614;

											BgL_zc3anonymousza33434ze3z83_1614 =
												make_fx_procedure
												(BGl_zc3anonymousza33434ze3z83zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3anonymousza33434ze3z83_1614,
												(int) (((long) 0)), BgL_unitsz00_926);
											BGl_stopzd2onzd2passz00zzengine_passz00
												(BgL_arg3432z00_974,
												BgL_zc3anonymousza33434ze3z83_1614);
									}}
									BGl_expandzd2unitszd2zzexpand_epsz00(CELL_REF
										(BgL_unitsz00_926));
									{	/* Engine/compiler.scm 199 */
										obj_t BgL_arg3435z00_978;

										BgL_arg3435z00_978 = CNST_TABLE_REF(((long) 9));
										{	/* Engine/compiler.scm 199 */
											obj_t BgL_zc3anonymousza33437ze3z83_1613;

											BgL_zc3anonymousza33437ze3z83_1613 =
												make_fx_procedure
												(BGl_zc3anonymousza33437ze3z83zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3anonymousza33437ze3z83_1613,
												(int) (((long) 0)), BgL_unitsz00_926);
											BGl_stopzd2onzd2passz00zzengine_passz00
												(BgL_arg3435z00_978,
												BgL_zc3anonymousza33437ze3z83_1613);
									}}
									{	/* Engine/compiler.scm 202 */
										obj_t BgL_arg3438z00_982;

										BgL_arg3438z00_982 =
											BGl_thezd2backendzd2zzbackend_backendz00();
										BGl_backendzd2checkzd2inlinesz00zzbackend_backendz00(
											(BgL_backendz00_bglt) (BgL_arg3438z00_982));
									}
									{	/* Engine/compiler.scm 205 */
										obj_t BgL_astz00_983;

										{	/* Engine/compiler.scm 205 */
											obj_t BgL_cellvalz00_1902;

											BgL_cellvalz00_1902 =
												BGl_buildzd2astzd2zzast_buildz00(CELL_REF
												(BgL_unitsz00_926));
											BgL_astz00_983 = MAKE_CELL(BgL_cellvalz00_1902);
										}
										{	/* Engine/compiler.scm 206 */
											obj_t BgL_arg3439z00_984;

											BgL_arg3439z00_984 = CNST_TABLE_REF(((long) 10));
											{	/* Engine/compiler.scm 206 */
												obj_t BgL_zc3anonymousza33441ze3z83_1612;

												BgL_zc3anonymousza33441ze3z83_1612 =
													make_fx_procedure
													(BGl_zc3anonymousza33441ze3z83zzengine_compilerz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza33441ze3z83_1612,
													(int) (((long) 0)), BgL_astz00_983);
												BGl_stopzd2onzd2passz00zzengine_passz00
													(BgL_arg3439z00_984,
													BgL_zc3anonymousza33441ze3z83_1612);
										}}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string3630z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_983));
										{	/* Engine/compiler.scm 211 */
											bool_t BgL_testz00_1912;

											{	/* Engine/compiler.scm 211 */
												int BgL_arg3443z00_989;

												BgL_arg3443z00_989 =
													BGl_bigloozd2warningzd2zz__paramz00();
												BgL_testz00_1912 =
													((long) (BgL_arg3443z00_989) > ((long) 0));
											}
											if (BgL_testz00_1912)
												{	/* Engine/compiler.scm 211 */
													BGl_checkzd2globalzd2initializa7ationza7zzast_checkzd2globalzd2initz00
														();
												}
											else
												{	/* Engine/compiler.scm 211 */
													BFALSE;
												}
										}
										{	/* Engine/compiler.scm 215 */
											obj_t BgL_arg3445z00_991;

											BgL_arg3445z00_991 = CNST_TABLE_REF(((long) 11));
											BGl_stopzd2onzd2passz00zzengine_passz00
												(BgL_arg3445z00_991,
												BGl_proc3631z00zzengine_compilerz00);
										}
										{	/* Engine/compiler.scm 218 */
											bool_t BgL_testz00_1919;

											if (
												((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00)
													> ((long) 0)))
												{	/* Engine/compiler.scm 219 */
													obj_t BgL_arg3450z00_997;

													obj_t BgL_arg3451z00_998;

													BgL_arg3450z00_997 = CNST_TABLE_REF(((long) 0));
													{	/* Engine/compiler.scm 219 */
														obj_t BgL_arg3452z00_999;

														BgL_arg3452z00_999 =
															BGl_thezd2backendzd2zzbackend_backendz00();
														{
															BgL_backendz00_bglt BgL_auxz00_1925;

															BgL_auxz00_1925 =
																(BgL_backendz00_bglt) (BgL_arg3452z00_999);
															BgL_arg3451z00_998 =
																(((BgL_backendz00_bglt) CREF(BgL_auxz00_1925))->
																BgL_debugzd2supportzd2);
													}}
													BgL_testz00_1919 =
														CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
														(BgL_arg3450z00_997, BgL_arg3451z00_998));
												}
											else
												{	/* Engine/compiler.scm 218 */
													BgL_testz00_1919 = ((bool_t) 0);
												}
											if (BgL_testz00_1919)
												{	/* Engine/compiler.scm 218 */
													BGl_bdbzd2spreadzd2objz12z12zzbdb_spreadzd2objzd2
														(CELL_REF(BgL_astz00_983));
												}
											else
												{	/* Engine/compiler.scm 218 */
													BFALSE;
												}
										}
										{	/* Engine/compiler.scm 221 */
											obj_t BgL_arg3453z00_1000;

											BgL_arg3453z00_1000 = CNST_TABLE_REF(((long) 12));
											{	/* Engine/compiler.scm 221 */
												obj_t BgL_zc3anonymousza33455ze3z83_1610;

												BgL_zc3anonymousza33455ze3z83_1610 =
													make_fx_procedure
													(BGl_zc3anonymousza33455ze3z83zzengine_compilerz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza33455ze3z83_1610,
													(int) (((long) 0)), BgL_astz00_983);
												BGl_stopzd2onzd2passz00zzengine_passz00
													(BgL_arg3453z00_1000,
													BgL_zc3anonymousza33455ze3z83_1610);
										}}
										{	/* Engine/compiler.scm 225 */
											bool_t BgL_testz00_1938;

											if (
												((long)
													CINT
													(BGl_za2compilerzd2debugzd2traceza2z00zzengine_paramz00)
													> ((long) 0)))
												{	/* Engine/compiler.scm 226 */
													bool_t BgL_testz00_1942;

													{	/* Engine/compiler.scm 226 */
														int BgL_arg3460z00_1008;

														BgL_arg3460z00_1008 =
															BGl_bigloozd2compilerzd2debugz00zz__paramz00();
														BgL_testz00_1942 =
															((long) (BgL_arg3460z00_1008) > ((long) 1));
													}
													if (BgL_testz00_1942)
														{	/* Engine/compiler.scm 227 */
															obj_t BgL_arg3459z00_1007;

															BgL_arg3459z00_1007 =
																BGl_thezd2backendzd2zzbackend_backendz00();
															{
																BgL_backendz00_bglt BgL_auxz00_1947;

																BgL_auxz00_1947 =
																	(BgL_backendz00_bglt) (BgL_arg3459z00_1007);
																BgL_testz00_1938 =
																	(((BgL_backendz00_bglt)
																		CREF(BgL_auxz00_1947))->
																	BgL_tracezd2supportzd2);
															}
														}
													else
														{	/* Engine/compiler.scm 226 */
															BgL_testz00_1938 = ((bool_t) 0);
														}
												}
											else
												{	/* Engine/compiler.scm 225 */
													BgL_testz00_1938 = ((bool_t) 0);
												}
											if (BgL_testz00_1938)
												{	/* Engine/compiler.scm 228 */
													obj_t BgL_auxz00_1679;

													BgL_auxz00_1679 =
														BGl_tracezd2walkz12zc0zztrace_walkz00(CELL_REF
														(BgL_astz00_983));
													CELL_SET(BgL_astz00_983, BgL_auxz00_1679);
												}
											else
												{	/* Engine/compiler.scm 225 */
													BFALSE;
												}
										}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string3632z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_983));
										{	/* Engine/compiler.scm 233 */
											bool_t BgL_testz00_1952;

											if (CBOOL(BGl_za2callzf2cczf3za2z01zzengine_paramz00))
												{	/* Engine/compiler.scm 233 */
													obj_t BgL_arg3463z00_1011;

													BgL_arg3463z00_1011 =
														BGl_thezd2backendzd2zzbackend_backendz00();
													{
														BgL_backendz00_bglt BgL_auxz00_1956;

														BgL_auxz00_1956 =
															(BgL_backendz00_bglt) (BgL_arg3463z00_1011);
														BgL_testz00_1952 =
															(((BgL_backendz00_bglt) CREF(BgL_auxz00_1956))->
															BgL_callccz00);
													}
												}
											else
												{	/* Engine/compiler.scm 233 */
													BgL_testz00_1952 = ((bool_t) 0);
												}
											if (BgL_testz00_1952)
												{	/* Engine/compiler.scm 234 */
													obj_t BgL_auxz00_1680;

													BgL_auxz00_1680 =
														BGl_callcczd2walkz12zc0zzcallcc_walkz00(CELL_REF
														(BgL_astz00_983));
													CELL_SET(BgL_astz00_983, BgL_auxz00_1680);
												}
											else
												{	/* Engine/compiler.scm 233 */
													BFALSE;
												}
										}
										{	/* Engine/compiler.scm 235 */
											obj_t BgL_arg3464z00_1012;

											BgL_arg3464z00_1012 = CNST_TABLE_REF(((long) 13));
											{	/* Engine/compiler.scm 235 */
												obj_t BgL_zc3anonymousza33466ze3z83_1609;

												BgL_zc3anonymousza33466ze3z83_1609 =
													make_fx_procedure
													(BGl_zc3anonymousza33466ze3z83zzengine_compilerz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza33466ze3z83_1609,
													(int) (((long) 0)), BgL_astz00_983);
												BGl_stopzd2onzd2passz00zzengine_passz00
													(BgL_arg3464z00_1012,
													BgL_zc3anonymousza33466ze3z83_1609);
										}}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string3633z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_983));
										if (CBOOL
											(BGl_za2optimzd2unrollzd2loopzf3za2zf3zzengine_paramz00))
											{	/* Engine/compiler.scm 240 */
												obj_t BgL_auxz00_1681;

												BgL_auxz00_1681 =
													BGl_effectzd2walkz12zc0zzeffect_walkz00(CELL_REF
													(BgL_astz00_983), ((bool_t) 0));
												CELL_SET(BgL_astz00_983, BgL_auxz00_1681);
											}
										else
											{	/* Engine/compiler.scm 239 */
												BFALSE;
											}
										{	/* Engine/compiler.scm 241 */
											obj_t BgL_arg3467z00_1016;

											BgL_arg3467z00_1016 = CNST_TABLE_REF(((long) 14));
											{	/* Engine/compiler.scm 241 */
												obj_t BgL_zc3anonymousza33469ze3z83_1608;

												BgL_zc3anonymousza33469ze3z83_1608 =
													make_fx_procedure
													(BGl_zc3anonymousza33469ze3z83zzengine_compilerz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza33469ze3z83_1608,
													(int) (((long) 0)), BgL_astz00_983);
												BGl_stopzd2onzd2passz00zzengine_passz00
													(BgL_arg3467z00_1016,
													BgL_zc3anonymousza33469ze3z83_1608);
										}}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string3634z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_983));
										{	/* Engine/compiler.scm 245 */
											obj_t BgL_auxz00_1682;

											BgL_auxz00_1682 =
												BGl_inlinezd2walkz12zc0zzinline_walkz00(CELL_REF
												(BgL_astz00_983), CNST_TABLE_REF(((long) 15)));
											CELL_SET(BgL_astz00_983, BgL_auxz00_1682);
										}
										{	/* Engine/compiler.scm 246 */
											obj_t BgL_arg3470z00_1020;

											BgL_arg3470z00_1020 = CNST_TABLE_REF(((long) 16));
											{	/* Engine/compiler.scm 246 */
												obj_t BgL_zc3anonymousza33472ze3z83_1607;

												BgL_zc3anonymousza33472ze3z83_1607 =
													make_fx_procedure
													(BGl_zc3anonymousza33472ze3z83zzengine_compilerz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza33472ze3z83_1607,
													(int) (((long) 0)), BgL_astz00_983);
												BGl_stopzd2onzd2passz00zzengine_passz00
													(BgL_arg3470z00_1020,
													BgL_zc3anonymousza33472ze3z83_1607);
										}}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string3635z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_983));
										{	/* Engine/compiler.scm 256 */
											obj_t BgL_arg3473z00_1024;

											BgL_arg3473z00_1024 = CNST_TABLE_REF(((long) 17));
											BGl_stopzd2onzd2passz00zzengine_passz00
												(BgL_arg3473z00_1024,
												BGl_proc3636z00zzengine_compilerz00);
										}
										{	/* Engine/compiler.scm 259 */
											obj_t BgL_auxz00_1683;

											BgL_auxz00_1683 =
												BGl_betazd2walkz12zc0zzbeta_walkz00(CELL_REF
												(BgL_astz00_983));
											CELL_SET(BgL_astz00_983, BgL_auxz00_1683);
										}
										{	/* Engine/compiler.scm 260 */
											obj_t BgL_arg3476z00_1028;

											BgL_arg3476z00_1028 = CNST_TABLE_REF(((long) 18));
											{	/* Engine/compiler.scm 260 */
												obj_t BgL_zc3anonymousza33478ze3z83_1605;

												BgL_zc3anonymousza33478ze3z83_1605 =
													make_fx_procedure
													(BGl_zc3anonymousza33478ze3z83zzengine_compilerz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza33478ze3z83_1605,
													(int) (((long) 0)), BgL_astz00_983);
												BGl_stopzd2onzd2passz00zzengine_passz00
													(BgL_arg3476z00_1028,
													BgL_zc3anonymousza33478ze3z83_1605);
										}}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string3637z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_983));
										{	/* Engine/compiler.scm 264 */
											bool_t BgL_testz00_2000;

											if (
												((long)
													CINT
													(BGl_za2compilerzd2debugzd2traceza2z00zzengine_paramz00)
													> ((long) 0)))
												{	/* Engine/compiler.scm 265 */
													bool_t BgL_testz00_2004;

													{	/* Engine/compiler.scm 265 */
														int BgL_arg3483z00_1036;

														BgL_arg3483z00_1036 =
															BGl_bigloozd2compilerzd2debugz00zz__paramz00();
														BgL_testz00_2004 =
															((long) (BgL_arg3483z00_1036) == ((long) 1));
													}
													if (BgL_testz00_2004)
														{	/* Engine/compiler.scm 266 */
															obj_t BgL_arg3482z00_1035;

															BgL_arg3482z00_1035 =
																BGl_thezd2backendzd2zzbackend_backendz00();
															{
																BgL_backendz00_bglt BgL_auxz00_2009;

																BgL_auxz00_2009 =
																	(BgL_backendz00_bglt) (BgL_arg3482z00_1035);
																BgL_testz00_2000 =
																	(((BgL_backendz00_bglt)
																		CREF(BgL_auxz00_2009))->
																	BgL_tracezd2supportzd2);
															}
														}
													else
														{	/* Engine/compiler.scm 265 */
															BgL_testz00_2000 = ((bool_t) 0);
														}
												}
											else
												{	/* Engine/compiler.scm 264 */
													BgL_testz00_2000 = ((bool_t) 0);
												}
											if (BgL_testz00_2000)
												{	/* Engine/compiler.scm 267 */
													obj_t BgL_auxz00_1684;

													BgL_auxz00_1684 =
														BGl_tracezd2walkz12zc0zztrace_walkz00(CELL_REF
														(BgL_astz00_983));
													CELL_SET(BgL_astz00_983, BgL_auxz00_1684);
												}
											else
												{	/* Engine/compiler.scm 264 */
													BFALSE;
												}
										}
										{	/* Engine/compiler.scm 268 */
											obj_t BgL_arg3485z00_1038;

											BgL_arg3485z00_1038 = CNST_TABLE_REF(((long) 19));
											{	/* Engine/compiler.scm 268 */
												obj_t BgL_zc3anonymousza33487ze3z83_1604;

												BgL_zc3anonymousza33487ze3z83_1604 =
													make_fx_procedure
													(BGl_zc3anonymousza33487ze3z83zzengine_compilerz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza33487ze3z83_1604,
													(int) (((long) 0)), BgL_astz00_983);
												BGl_stopzd2onzd2passz00zzengine_passz00
													(BgL_arg3485z00_1038,
													BgL_zc3anonymousza33487ze3z83_1604);
										}}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string3632z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_983));
										{	/* Engine/compiler.scm 273 */
											bool_t BgL_testz00_2021;

											{	/* Engine/compiler.scm 273 */
												bool_t BgL_testz00_2022;

												{	/* Engine/compiler.scm 273 */
													int BgL_arg3490z00_1044;

													BgL_arg3490z00_1044 =
														BGl_bigloozd2compilerzd2debugz00zz__paramz00();
													BgL_testz00_2022 =
														((long) (BgL_arg3490z00_1044) > ((long) 0));
												}
												if (BgL_testz00_2022)
													{	/* Engine/compiler.scm 273 */
														BgL_testz00_2021 =
															CBOOL
															(BGl_za2errorzd2localiza7ationza2z75zzengine_paramz00);
													}
												else
													{	/* Engine/compiler.scm 273 */
														BgL_testz00_2021 = ((bool_t) 0);
													}
											}
											if (BgL_testz00_2021)
												{	/* Engine/compiler.scm 274 */
													obj_t BgL_auxz00_1685;

													BgL_auxz00_1685 =
														BGl_failzd2walkz12zc0zzfail_walkz00(CELL_REF
														(BgL_astz00_983));
													CELL_SET(BgL_astz00_983, BgL_auxz00_1685);
												}
											else
												{	/* Engine/compiler.scm 273 */
													BFALSE;
												}
										}
										{	/* Engine/compiler.scm 275 */
											obj_t BgL_arg3492z00_1046;

											BgL_arg3492z00_1046 = CNST_TABLE_REF(((long) 20));
											{	/* Engine/compiler.scm 275 */
												obj_t BgL_zc3anonymousza33494ze3z83_1603;

												BgL_zc3anonymousza33494ze3z83_1603 =
													make_fx_procedure
													(BGl_zc3anonymousza33494ze3z83zzengine_compilerz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza33494ze3z83_1603,
													(int) (((long) 0)), BgL_astz00_983);
												BGl_stopzd2onzd2passz00zzengine_passz00
													(BgL_arg3492z00_1046,
													BgL_zc3anonymousza33494ze3z83_1603);
										}}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string3638z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_983));
										if (CBOOL
											(BGl_za2optimzd2dataflowzd2typeszf3za2zf3zzengine_paramz00))
											{	/* Engine/compiler.scm 280 */
												if (CBOOL(BGl_za2callzf2cczf3za2z01zzengine_paramz00))
													{	/* Engine/compiler.scm 281 */
														BGl_za2optimzd2dataflowzd2typeszf3za2zf3zzengine_paramz00
															= BFALSE;
													}
												else
													{	/* Engine/compiler.scm 281 */
														{	/* Engine/compiler.scm 284 */
															obj_t BgL_auxz00_1686;

															{	/* Engine/compiler.scm 284 */
																obj_t BgL_list3495z00_1050;

																BgL_list3495z00_1050 = MAKE_PAIR(BTRUE, BNIL);
																BgL_auxz00_1686 =
																	BGl_reducezd2walkz12zc0zzreduce_walkz00
																	(CELL_REF(BgL_astz00_983),
																	BGl_string3639z00zzengine_compilerz00,
																	BgL_list3495z00_1050);
															}
															CELL_SET(BgL_astz00_983, BgL_auxz00_1686);
														}
														{	/* Engine/compiler.scm 285 */
															obj_t BgL_auxz00_1687;

															BgL_auxz00_1687 =
																BGl_dataflowzd2walkz12zc0zzdataflow_walkz00
																(CELL_REF(BgL_astz00_983),
																BGl_string3640z00zzengine_compilerz00);
															CELL_SET(BgL_astz00_983, BgL_auxz00_1687);
														}
													}
											}
										else
											{	/* Engine/compiler.scm 280 */
												BFALSE;
											}
										{	/* Engine/compiler.scm 286 */
											obj_t BgL_arg3496z00_1051;

											BgL_arg3496z00_1051 = CNST_TABLE_REF(((long) 21));
											{	/* Engine/compiler.scm 286 */
												obj_t BgL_zc3anonymousza33498ze3z83_1602;

												BgL_zc3anonymousza33498ze3z83_1602 =
													make_fx_procedure
													(BGl_zc3anonymousza33498ze3z83zzengine_compilerz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza33498ze3z83_1602,
													(int) (((long) 0)), BgL_astz00_983);
												BGl_stopzd2onzd2passz00zzengine_passz00
													(BgL_arg3496z00_1051,
													BgL_zc3anonymousza33498ze3z83_1602);
										}}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string3640z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_983));
										{	/* Engine/compiler.scm 290 */
											obj_t BgL_auxz00_1688;

											BgL_auxz00_1688 =
												BGl_globaliza7ezd2walkz12z67zzglobaliza7e_walkza7
												(CELL_REF(BgL_astz00_983), CNST_TABLE_REF(((long) 22)));
											CELL_SET(BgL_astz00_983, BgL_auxz00_1688);
										}
										{	/* Engine/compiler.scm 291 */
											obj_t BgL_arg3499z00_1055;

											BgL_arg3499z00_1055 = CNST_TABLE_REF(((long) 23));
											{	/* Engine/compiler.scm 291 */
												obj_t BgL_zc3anonymousza33501ze3z83_1601;

												BgL_zc3anonymousza33501ze3z83_1601 =
													make_fx_procedure
													(BGl_zc3anonymousza33501ze3z83zzengine_compilerz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza33501ze3z83_1601,
													(int) (((long) 0)), BgL_astz00_983);
												BGl_stopzd2onzd2passz00zzengine_passz00
													(BgL_arg3499z00_1055,
													BgL_zc3anonymousza33501ze3z83_1601);
										}}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string3641z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_983));
										{	/* Engine/compiler.scm 295 */
											obj_t BgL_auxz00_1689;

											BgL_auxz00_1689 =
												BGl_cfazd2walkz12zc0zzcfa_walkz00(CELL_REF
												(BgL_astz00_983));
											CELL_SET(BgL_astz00_983, BgL_auxz00_1689);
										}
										{	/* Engine/compiler.scm 296 */
											obj_t BgL_arg3502z00_1059;

											BgL_arg3502z00_1059 = CNST_TABLE_REF(((long) 24));
											{	/* Engine/compiler.scm 296 */
												obj_t BgL_zc3anonymousza33504ze3z83_1600;

												BgL_zc3anonymousza33504ze3z83_1600 =
													make_fx_procedure
													(BGl_zc3anonymousza33504ze3z83zzengine_compilerz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza33504ze3z83_1600,
													(int) (((long) 0)), BgL_astz00_983);
												BGl_stopzd2onzd2passz00zzengine_passz00
													(BgL_arg3502z00_1059,
													BgL_zc3anonymousza33504ze3z83_1600);
										}}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string3642z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_983));
										BGl_setzd2defaultzd2typez12z12zztype_cachez00(
											(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
										{	/* Engine/compiler.scm 304 */
											obj_t BgL_auxz00_1690;

											BgL_auxz00_1690 =
												BGl_integratezd2walkz12zc0zzintegrate_walkz00(CELL_REF
												(BgL_astz00_983));
											CELL_SET(BgL_astz00_983, BgL_auxz00_1690);
										}
										{	/* Engine/compiler.scm 305 */
											obj_t BgL_arg3505z00_1063;

											BgL_arg3505z00_1063 = CNST_TABLE_REF(((long) 25));
											{	/* Engine/compiler.scm 305 */
												obj_t BgL_zc3anonymousza33507ze3z83_1599;

												BgL_zc3anonymousza33507ze3z83_1599 =
													make_fx_procedure
													(BGl_zc3anonymousza33507ze3z83zzengine_compilerz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza33507ze3z83_1599,
													(int) (((long) 0)), BgL_astz00_983);
												BGl_stopzd2onzd2passz00zzengine_passz00
													(BgL_arg3505z00_1063,
													BgL_zc3anonymousza33507ze3z83_1599);
										}}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string3643z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_983));
										{	/* Engine/compiler.scm 309 */
											bool_t BgL_testz00_2081;

											if (CBOOL
												(BGl_za2globalzd2tailzd2callzf3za2zf3zzengine_paramz00))
												{	/* Engine/compiler.scm 309 */
													BgL_testz00_2081 = ((bool_t) 1);
												}
											else
												{	/* Engine/compiler.scm 310 */
													obj_t BgL_arg3509z00_1068;

													BgL_arg3509z00_1068 =
														BGl_thezd2backendzd2zzbackend_backendz00();
													{
														BgL_backendz00_bglt BgL_auxz00_2085;

														BgL_auxz00_2085 =
															(BgL_backendz00_bglt) (BgL_arg3509z00_1068);
														BgL_testz00_2081 =
															(((BgL_backendz00_bglt) CREF(BgL_auxz00_2085))->
															BgL_requirezd2tailczd2);
													}
												}
											if (BgL_testz00_2081)
												{	/* Engine/compiler.scm 309 */
													{	/* Engine/compiler.scm 311 */
														obj_t BgL_auxz00_1691;

														BgL_auxz00_1691 =
															BGl_tailczd2walkz12zc0zztailc_walkz00(CELL_REF
															(BgL_astz00_983));
														CELL_SET(BgL_astz00_983, BgL_auxz00_1691);
													}
													BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
														(BGl_string3644z00zzengine_compilerz00,
														CELL_REF(BgL_astz00_983));
												}
											else
												{	/* Engine/compiler.scm 309 */
													BFALSE;
												}
										}
										{	/* Engine/compiler.scm 313 */
											obj_t BgL_arg3510z00_1069;

											BgL_arg3510z00_1069 = CNST_TABLE_REF(((long) 26));
											{	/* Engine/compiler.scm 313 */
												obj_t BgL_zc3anonymousza33512ze3z83_1598;

												BgL_zc3anonymousza33512ze3z83_1598 =
													make_fx_procedure
													(BGl_zc3anonymousza33512ze3z83zzengine_compilerz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza33512ze3z83_1598,
													(int) (((long) 0)), BgL_astz00_983);
												BGl_stopzd2onzd2passz00zzengine_passz00
													(BgL_arg3510z00_1069,
													BgL_zc3anonymousza33512ze3z83_1598);
										}}
										if (CBOOL
											(BGl_za2optimzd2dataflowzd2forzd2errorszf3za2z21zzengine_paramz00))
											{	/* Engine/compiler.scm 316 */
												{	/* Engine/compiler.scm 317 */
													obj_t BgL_auxz00_1692;

													{	/* Engine/compiler.scm 317 */
														obj_t BgL_list3513z00_1073;

														BgL_list3513z00_1073 = MAKE_PAIR(BTRUE, BNIL);
														BgL_auxz00_1692 =
															BGl_reducezd2walkz12zc0zzreduce_walkz00(CELL_REF
															(BgL_astz00_983),
															BGl_string3645z00zzengine_compilerz00,
															BgL_list3513z00_1073);
													}
													CELL_SET(BgL_astz00_983, BgL_auxz00_1692);
												}
												BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
													(BGl_string3646z00zzengine_compilerz00,
													CELL_REF(BgL_astz00_983));
											}
										else
											{	/* Engine/compiler.scm 316 */
												BFALSE;
											}
										{	/* Engine/compiler.scm 319 */
											obj_t BgL_arg3514z00_1074;

											BgL_arg3514z00_1074 = CNST_TABLE_REF(((long) 27));
											{	/* Engine/compiler.scm 319 */
												obj_t BgL_zc3anonymousza33516ze3z83_1597;

												BgL_zc3anonymousza33516ze3z83_1597 =
													make_fx_procedure
													(BGl_zc3anonymousza33516ze3z83zzengine_compilerz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza33516ze3z83_1597,
													(int) (((long) 0)), BgL_astz00_983);
												BGl_stopzd2onzd2passz00zzengine_passz00
													(BgL_arg3514z00_1074,
													BgL_zc3anonymousza33516ze3z83_1597);
										}}
										if (CBOOL(BGl_za2unsafezd2rangeza2zd2zzengine_paramz00))
											{	/* Engine/compiler.scm 326 */
												BFALSE;
											}
										else
											{	/* Engine/compiler.scm 327 */
												obj_t BgL_auxz00_1693;

												BgL_auxz00_1693 =
													BGl_aboundzd2walkz12zc0zzabound_walkz00(CELL_REF
													(BgL_astz00_983));
												CELL_SET(BgL_astz00_983, BgL_auxz00_1693);
											}
										{	/* Engine/compiler.scm 328 */
											obj_t BgL_arg3517z00_1078;

											BgL_arg3517z00_1078 = CNST_TABLE_REF(((long) 28));
											{	/* Engine/compiler.scm 328 */
												obj_t BgL_zc3anonymousza33519ze3z83_1596;

												BgL_zc3anonymousza33519ze3z83_1596 =
													make_fx_procedure
													(BGl_zc3anonymousza33519ze3z83zzengine_compilerz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza33519ze3z83_1596,
													(int) (((long) 0)), BgL_astz00_983);
												BGl_stopzd2onzd2passz00zzengine_passz00
													(BgL_arg3517z00_1078,
													BgL_zc3anonymousza33519ze3z83_1596);
										}}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string3647z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_983));
										{	/* Engine/compiler.scm 332 */
											obj_t BgL_auxz00_1694;

											BgL_auxz00_1694 =
												BGl_coercezd2walkz12zc0zzcoerce_walkz00(CELL_REF
												(BgL_astz00_983));
											CELL_SET(BgL_astz00_983, BgL_auxz00_1694);
										}
										{	/* Engine/compiler.scm 333 */
											obj_t BgL_arg3520z00_1082;

											BgL_arg3520z00_1082 = CNST_TABLE_REF(((long) 29));
											{	/* Engine/compiler.scm 333 */
												obj_t BgL_zc3anonymousza33522ze3z83_1595;

												BgL_zc3anonymousza33522ze3z83_1595 =
													make_fx_procedure
													(BGl_zc3anonymousza33522ze3z83zzengine_compilerz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza33522ze3z83_1595,
													(int) (((long) 0)), BgL_astz00_983);
												BGl_stopzd2onzd2passz00zzengine_passz00
													(BgL_arg3520z00_1082,
													BgL_zc3anonymousza33522ze3z83_1595);
										}}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string3648z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_983));
										if (CBOOL
											(BGl_za2optimzd2dataflowzd2typeszf3za2zf3zzengine_paramz00))
											{	/* Engine/compiler.scm 339 */
												obj_t BgL_auxz00_1695;

												BgL_auxz00_1695 =
													BGl_dataflowzd2walkz12zc0zzdataflow_walkz00(CELL_REF
													(BgL_astz00_983),
													BGl_string3649z00zzengine_compilerz00);
												CELL_SET(BgL_astz00_983, BgL_auxz00_1695);
											}
										else
											{	/* Engine/compiler.scm 338 */
												BFALSE;
											}
										{	/* Engine/compiler.scm 340 */
											obj_t BgL_arg3523z00_1086;

											BgL_arg3523z00_1086 = CNST_TABLE_REF(((long) 30));
											{	/* Engine/compiler.scm 340 */
												obj_t BgL_zc3anonymousza33525ze3z83_1594;

												BgL_zc3anonymousza33525ze3z83_1594 =
													make_fx_procedure
													(BGl_zc3anonymousza33525ze3z83zzengine_compilerz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza33525ze3z83_1594,
													(int) (((long) 0)), BgL_astz00_983);
												BGl_stopzd2onzd2passz00zzengine_passz00
													(BgL_arg3523z00_1086,
													BgL_zc3anonymousza33525ze3z83_1594);
										}}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string3640z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_983));
										{	/* Engine/compiler.scm 345 */
											bool_t BgL_testz00_2140;

											if (
												((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >=
													((long) 1)))
												{	/* Engine/compiler.scm 345 */
													BgL_testz00_2140 = ((bool_t) 1);
												}
											else
												{	/* Engine/compiler.scm 345 */
													BgL_testz00_2140 =
														(BGl_za2passza2z00zzengine_paramz00 ==
														CNST_TABLE_REF(((long) 31)));
												}
											if (BgL_testz00_2140)
												{	/* Engine/compiler.scm 346 */
													obj_t BgL_auxz00_1696;

													BgL_auxz00_1696 =
														BGl_effectzd2walkz12zc0zzeffect_walkz00(CELL_REF
														(BgL_astz00_983), ((bool_t) 1));
													CELL_SET(BgL_astz00_983, BgL_auxz00_1696);
												}
											else
												{	/* Engine/compiler.scm 345 */
													BFALSE;
												}
										}
										{	/* Engine/compiler.scm 347 */
											obj_t BgL_arg3528z00_1092;

											BgL_arg3528z00_1092 = CNST_TABLE_REF(((long) 31));
											{	/* Engine/compiler.scm 347 */
												obj_t BgL_zc3anonymousza33530ze3z83_1593;

												BgL_zc3anonymousza33530ze3z83_1593 =
													make_fx_procedure
													(BGl_zc3anonymousza33530ze3z83zzengine_compilerz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza33530ze3z83_1593,
													(int) (((long) 0)), BgL_astz00_983);
												BGl_stopzd2onzd2passz00zzengine_passz00
													(BgL_arg3528z00_1092,
													BgL_zc3anonymousza33530ze3z83_1593);
										}}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string3634z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_983));
										if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >=
												((long) 1)))
											{	/* Engine/compiler.scm 352 */
												obj_t BgL_auxz00_1697;

												BgL_auxz00_1697 =
													BGl_reducezd2walkz12zc0zzreduce_walkz00(CELL_REF
													(BgL_astz00_983),
													BGl_string3650z00zzengine_compilerz00, BNIL);
												CELL_SET(BgL_astz00_983, BgL_auxz00_1697);
											}
										else
											{	/* Engine/compiler.scm 351 */
												BFALSE;
											}
										{	/* Engine/compiler.scm 353 */
											obj_t BgL_arg3533z00_1098;

											BgL_arg3533z00_1098 = CNST_TABLE_REF(((long) 32));
											{	/* Engine/compiler.scm 353 */
												obj_t BgL_zc3anonymousza33536ze3z83_1592;

												BgL_zc3anonymousza33536ze3z83_1592 =
													make_fx_procedure
													(BGl_zc3anonymousza33536ze3z83zzengine_compilerz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza33536ze3z83_1592,
													(int) (((long) 0)), BgL_astz00_983);
												BGl_stopzd2onzd2passz00zzengine_passz00
													(BgL_arg3533z00_1098,
													BgL_zc3anonymousza33536ze3z83_1592);
										}}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string3651z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_983));
										{	/* Engine/compiler.scm 357 */
											bool_t BgL_testz00_2167;

											if (
												((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00)
													> ((long) 0)))
												{	/* Engine/compiler.scm 358 */
													obj_t BgL_arg3539z00_1104;

													obj_t BgL_arg3540z00_1105;

													BgL_arg3539z00_1104 = CNST_TABLE_REF(((long) 0));
													{	/* Engine/compiler.scm 358 */
														obj_t BgL_arg3541z00_1106;

														BgL_arg3541z00_1106 =
															BGl_thezd2backendzd2zzbackend_backendz00();
														{
															BgL_backendz00_bglt BgL_auxz00_2173;

															BgL_auxz00_2173 =
																(BgL_backendz00_bglt) (BgL_arg3541z00_1106);
															BgL_arg3540z00_1105 =
																(((BgL_backendz00_bglt) CREF(BgL_auxz00_2173))->
																BgL_debugzd2supportzd2);
													}}
													BgL_testz00_2167 =
														CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
														(BgL_arg3539z00_1104, BgL_arg3540z00_1105));
												}
											else
												{	/* Engine/compiler.scm 357 */
													BgL_testz00_2167 = ((bool_t) 0);
												}
											if (BgL_testz00_2167)
												{	/* Engine/compiler.scm 359 */
													obj_t BgL_auxz00_1698;

													BgL_auxz00_1698 =
														BGl_bdbzd2walkz12zc0zzbdb_walkz00(CELL_REF
														(BgL_astz00_983));
													CELL_SET(BgL_astz00_983, BgL_auxz00_1698);
												}
											else
												{	/* Engine/compiler.scm 357 */
													BFALSE;
												}
										}
										{	/* Engine/compiler.scm 360 */
											obj_t BgL_arg3542z00_1107;

											BgL_arg3542z00_1107 = CNST_TABLE_REF(((long) 0));
											{	/* Engine/compiler.scm 360 */
												obj_t BgL_zc3anonymousza33544ze3z83_1591;

												BgL_zc3anonymousza33544ze3z83_1591 =
													make_fx_procedure
													(BGl_zc3anonymousza33544ze3z83zzengine_compilerz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza33544ze3z83_1591,
													(int) (((long) 0)), BgL_astz00_983);
												BGl_stopzd2onzd2passz00zzengine_passz00
													(BgL_arg3542z00_1107,
													BgL_zc3anonymousza33544ze3z83_1591);
										}}
										{	/* Engine/compiler.scm 363 */
											obj_t BgL_auxz00_1699;

											BgL_auxz00_1699 =
												BGl_cnstzd2walkz12zc0zzcnst_walkz00(CELL_REF
												(BgL_astz00_983));
											CELL_SET(BgL_astz00_983, BgL_auxz00_1699);
										}
										{	/* Engine/compiler.scm 364 */
											obj_t BgL_arg3545z00_1111;

											BgL_arg3545z00_1111 = CNST_TABLE_REF(((long) 33));
											{	/* Engine/compiler.scm 364 */
												obj_t BgL_zc3anonymousza33547ze3z83_1590;

												BgL_zc3anonymousza33547ze3z83_1590 =
													make_fx_procedure
													(BGl_zc3anonymousza33547ze3z83zzengine_compilerz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza33547ze3z83_1590,
													(int) (((long) 0)), BgL_astz00_983);
												BGl_stopzd2onzd2passz00zzengine_passz00
													(BgL_arg3545z00_1111,
													BgL_zc3anonymousza33547ze3z83_1590);
										}}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string3652z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_983));
										{	/* Engine/compiler.scm 369 */
											obj_t BgL_auxz00_1700;

											BgL_auxz00_1700 =
												BGl_inlinezd2walkz12zc0zzinline_walkz00(CELL_REF
												(BgL_astz00_983), CNST_TABLE_REF(((long) 34)));
											CELL_SET(BgL_astz00_983, BgL_auxz00_1700);
										}
										{	/* Engine/compiler.scm 370 */
											obj_t BgL_arg3548z00_1115;

											BgL_arg3548z00_1115 = CNST_TABLE_REF(((long) 35));
											{	/* Engine/compiler.scm 370 */
												obj_t BgL_zc3anonymousza33550ze3z83_1589;

												BgL_zc3anonymousza33550ze3z83_1589 =
													make_fx_procedure
													(BGl_zc3anonymousza33550ze3z83zzengine_compilerz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza33550ze3z83_1589,
													(int) (((long) 0)), BgL_astz00_983);
												BGl_stopzd2onzd2passz00zzengine_passz00
													(BgL_arg3548z00_1115,
													BgL_zc3anonymousza33550ze3z83_1589);
										}}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string3653z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_983));
										{	/* Engine/compiler.scm 374 */
											obj_t BgL_ast2z00_1119;

											{	/* Engine/compiler.scm 374 */
												obj_t BgL_cellvalz00_2205;

												{	/* Engine/compiler.scm 374 */
													obj_t BgL_arg3565z00_1137;

													BgL_arg3565z00_1137 =
														BGl_astzd2initializa7ersz75zzast_initz00();
													BgL_cellvalz00_2205 =
														BGl_appendzd2astzd2zzast_buildz00
														(BgL_arg3565z00_1137, CELL_REF(BgL_astz00_983));
												}
												BgL_ast2z00_1119 = MAKE_CELL(BgL_cellvalz00_2205);
											}
											{	/* Engine/compiler.scm 375 */
												obj_t BgL_arg3551z00_1120;

												BgL_arg3551z00_1120 = CNST_TABLE_REF(((long) 36));
												{	/* Engine/compiler.scm 375 */
													obj_t BgL_zc3anonymousza33553ze3z83_1588;

													BgL_zc3anonymousza33553ze3z83_1588 =
														make_fx_procedure
														(BGl_zc3anonymousza33553ze3z83zzengine_compilerz00,
														(int) (((long) 0)), (int) (((long) 1)));
													PROCEDURE_SET(BgL_zc3anonymousza33553ze3z83_1588,
														(int) (((long) 0)), BgL_ast2z00_1119);
													BGl_stopzd2onzd2passz00zzengine_passz00
														(BgL_arg3551z00_1120,
														BgL_zc3anonymousza33553ze3z83_1588);
											}}
											BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
												(BGl_string3654z00zzengine_compilerz00,
												CELL_REF(BgL_ast2z00_1119));
											{	/* Engine/compiler.scm 379 */
												bool_t BgL_testz00_2216;

												if (
													((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >=
														((long) 2)))
													{	/* Engine/compiler.scm 379 */
														BgL_testz00_2216 = ((bool_t) 1);
													}
												else
													{	/* Engine/compiler.scm 379 */
														obj_t BgL_arg3560z00_1131;

														BgL_arg3560z00_1131 =
															BGl_thezd2backendzd2zzbackend_backendz00();
														{
															BgL_backendz00_bglt BgL_auxz00_2221;

															BgL_auxz00_2221 =
																(BgL_backendz00_bglt) (BgL_arg3560z00_1131);
															BgL_testz00_2216 =
																(((BgL_backendz00_bglt) CREF(BgL_auxz00_2221))->
																BgL_effectzb2zb2);
														}
													}
												if (BgL_testz00_2216)
													{	/* Engine/compiler.scm 379 */
														{	/* Engine/compiler.scm 380 */
															obj_t BgL_auxz00_1701;

															BgL_auxz00_1701 =
																BGl_effectzd2walkz12zc0zzeffect_walkz00(CELL_REF
																(BgL_ast2z00_1119), ((bool_t) 1));
															CELL_SET(BgL_ast2z00_1119, BgL_auxz00_1701);
														}
														{	/* Engine/compiler.scm 381 */
															obj_t BgL_arg3555z00_1125;

															BgL_arg3555z00_1125 = CNST_TABLE_REF(((long) 37));
															{	/* Engine/compiler.scm 381 */
																obj_t BgL_zc3anonymousza33557ze3z83_1587;

																BgL_zc3anonymousza33557ze3z83_1587 =
																	make_fx_procedure
																	(BGl_zc3anonymousza33557ze3z83zzengine_compilerz00,
																	(int) (((long) 0)), (int) (((long) 1)));
																PROCEDURE_SET
																	(BgL_zc3anonymousza33557ze3z83_1587,
																	(int) (((long) 0)), BgL_ast2z00_1119);
																BGl_stopzd2onzd2passz00zzengine_passz00
																	(BgL_arg3555z00_1125,
																	BgL_zc3anonymousza33557ze3z83_1587);
														}}
														{	/* Engine/compiler.scm 382 */
															obj_t BgL_auxz00_1702;

															BgL_auxz00_1702 =
																BGl_reducezd2walkz12zc0zzreduce_walkz00(CELL_REF
																(BgL_ast2z00_1119),
																BGl_string3655z00zzengine_compilerz00, BNIL);
															CELL_SET(BgL_ast2z00_1119, BgL_auxz00_1702);
													}}
												else
													{	/* Engine/compiler.scm 379 */
														BFALSE;
													}
											}
											{	/* Engine/compiler.scm 383 */
												obj_t BgL_arg3561z00_1132;

												BgL_arg3561z00_1132 = CNST_TABLE_REF(((long) 38));
												{	/* Engine/compiler.scm 383 */
													obj_t BgL_zc3anonymousza33563ze3z83_1586;

													BgL_zc3anonymousza33563ze3z83_1586 =
														make_fx_procedure
														(BGl_zc3anonymousza33563ze3z83zzengine_compilerz00,
														(int) (((long) 0)), (int) (((long) 1)));
													PROCEDURE_SET(BgL_zc3anonymousza33563ze3z83_1586,
														(int) (((long) 0)), BgL_ast2z00_1119);
													BGl_stopzd2onzd2passz00zzengine_passz00
														(BgL_arg3561z00_1132,
														BgL_zc3anonymousza33563ze3z83_1586);
											}}
											BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
												(BGl_string3656z00zzengine_compilerz00,
												CELL_REF(BgL_ast2z00_1119));
											{	/* Engine/compiler.scm 386 */
												obj_t BgL_arg3564z00_1136;

												BgL_arg3564z00_1136 =
													BGl_removezd2varzd2zzast_removez00(CNST_TABLE_REF((
															(long) 39)), CELL_REF(BgL_ast2z00_1119));
												BGl_backendzd2walkzd2zzbackend_walkz00
													(BgL_arg3564z00_1136);
										}}
										return BINT(((long) 0));
		}}}}}}}}
	}



/* _compiler */
	obj_t BGl__compilerz00zzengine_compilerz00(obj_t BgL_envz00_1617)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 88 */
			return BGl_compilerz00zzengine_compilerz00();
		}
	}



/* <anonymous:3563> */
	obj_t BGl_zc3anonymousza33563ze3z83zzengine_compilerz00(obj_t BgL_envz00_1618)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 383 */
			{	/* Engine/compiler.scm 383 */
				obj_t BgL_ast2z00_1619;

				BgL_ast2z00_1619 = PROCEDURE_REF(BgL_envz00_1618, (int) (((long) 0)));
				{

					return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_ast2z00_1619));
				}
			}
		}
	}



/* <anonymous:3557> */
	obj_t BGl_zc3anonymousza33557ze3z83zzengine_compilerz00(obj_t BgL_envz00_1620)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 381 */
			{	/* Engine/compiler.scm 381 */
				obj_t BgL_ast2z00_1621;

				BgL_ast2z00_1621 = PROCEDURE_REF(BgL_envz00_1620, (int) (((long) 0)));
				{

					return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_ast2z00_1621));
				}
			}
		}
	}



/* <anonymous:3553> */
	obj_t BGl_zc3anonymousza33553ze3z83zzengine_compilerz00(obj_t BgL_envz00_1622)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 375 */
			{	/* Engine/compiler.scm 375 */
				obj_t BgL_ast2z00_1623;

				BgL_ast2z00_1623 = PROCEDURE_REF(BgL_envz00_1622, (int) (((long) 0)));
				{

					return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_ast2z00_1623));
				}
			}
		}
	}



/* <anonymous:3550> */
	obj_t BGl_zc3anonymousza33550ze3z83zzengine_compilerz00(obj_t BgL_envz00_1624)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 370 */
			{	/* Engine/compiler.scm 370 */
				obj_t BgL_astz00_1625;

				BgL_astz00_1625 = PROCEDURE_REF(BgL_envz00_1624, (int) (((long) 0)));
				{

					return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_1625));
				}
			}
		}
	}



/* <anonymous:3547> */
	obj_t BGl_zc3anonymousza33547ze3z83zzengine_compilerz00(obj_t BgL_envz00_1626)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 364 */
			{	/* Engine/compiler.scm 364 */
				obj_t BgL_astz00_1627;

				BgL_astz00_1627 = PROCEDURE_REF(BgL_envz00_1626, (int) (((long) 0)));
				{

					return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_1627));
				}
			}
		}
	}



/* <anonymous:3544> */
	obj_t BGl_zc3anonymousza33544ze3z83zzengine_compilerz00(obj_t BgL_envz00_1628)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 360 */
			{	/* Engine/compiler.scm 360 */
				obj_t BgL_astz00_1629;

				BgL_astz00_1629 = PROCEDURE_REF(BgL_envz00_1628, (int) (((long) 0)));
				{

					return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_1629));
				}
			}
		}
	}



/* <anonymous:3536> */
	obj_t BGl_zc3anonymousza33536ze3z83zzengine_compilerz00(obj_t BgL_envz00_1630)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 353 */
			{	/* Engine/compiler.scm 353 */
				obj_t BgL_astz00_1631;

				BgL_astz00_1631 = PROCEDURE_REF(BgL_envz00_1630, (int) (((long) 0)));
				{

					return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_1631));
				}
			}
		}
	}



/* <anonymous:3530> */
	obj_t BGl_zc3anonymousza33530ze3z83zzengine_compilerz00(obj_t BgL_envz00_1632)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 347 */
			{	/* Engine/compiler.scm 347 */
				obj_t BgL_astz00_1633;

				BgL_astz00_1633 = PROCEDURE_REF(BgL_envz00_1632, (int) (((long) 0)));
				{

					return
						BGl_writezd2effectzd2zzeffect_walkz00(CELL_REF(BgL_astz00_1633));
				}
			}
		}
	}



/* <anonymous:3525> */
	obj_t BGl_zc3anonymousza33525ze3z83zzengine_compilerz00(obj_t BgL_envz00_1634)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 340 */
			{	/* Engine/compiler.scm 340 */
				obj_t BgL_astz00_1635;

				BgL_astz00_1635 = PROCEDURE_REF(BgL_envz00_1634, (int) (((long) 0)));
				{

					return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_1635));
				}
			}
		}
	}



/* <anonymous:3522> */
	obj_t BGl_zc3anonymousza33522ze3z83zzengine_compilerz00(obj_t BgL_envz00_1636)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 333 */
			{	/* Engine/compiler.scm 333 */
				obj_t BgL_astz00_1637;

				BgL_astz00_1637 = PROCEDURE_REF(BgL_envz00_1636, (int) (((long) 0)));
				{

					return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_1637));
				}
			}
		}
	}



/* <anonymous:3519> */
	obj_t BGl_zc3anonymousza33519ze3z83zzengine_compilerz00(obj_t BgL_envz00_1638)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 328 */
			{	/* Engine/compiler.scm 328 */
				obj_t BgL_astz00_1639;

				BgL_astz00_1639 = PROCEDURE_REF(BgL_envz00_1638, (int) (((long) 0)));
				{

					return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_1639));
				}
			}
		}
	}



/* <anonymous:3516> */
	obj_t BGl_zc3anonymousza33516ze3z83zzengine_compilerz00(obj_t BgL_envz00_1640)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 319 */
			{	/* Engine/compiler.scm 319 */
				obj_t BgL_astz00_1641;

				BgL_astz00_1641 = PROCEDURE_REF(BgL_envz00_1640, (int) (((long) 0)));
				{

					return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_1641));
				}
			}
		}
	}



/* <anonymous:3512> */
	obj_t BGl_zc3anonymousza33512ze3z83zzengine_compilerz00(obj_t BgL_envz00_1642)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 313 */
			{	/* Engine/compiler.scm 313 */
				obj_t BgL_astz00_1643;

				BgL_astz00_1643 = PROCEDURE_REF(BgL_envz00_1642, (int) (((long) 0)));
				{

					return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_1643));
				}
			}
		}
	}



/* <anonymous:3507> */
	obj_t BGl_zc3anonymousza33507ze3z83zzengine_compilerz00(obj_t BgL_envz00_1644)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 305 */
			{	/* Engine/compiler.scm 305 */
				obj_t BgL_astz00_1645;

				BgL_astz00_1645 = PROCEDURE_REF(BgL_envz00_1644, (int) (((long) 0)));
				{

					return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_1645));
				}
			}
		}
	}



/* <anonymous:3504> */
	obj_t BGl_zc3anonymousza33504ze3z83zzengine_compilerz00(obj_t BgL_envz00_1646)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 296 */
			{	/* Engine/compiler.scm 296 */
				obj_t BgL_astz00_1647;

				BgL_astz00_1647 = PROCEDURE_REF(BgL_envz00_1646, (int) (((long) 0)));
				{

					return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_1647));
				}
			}
		}
	}



/* <anonymous:3501> */
	obj_t BGl_zc3anonymousza33501ze3z83zzengine_compilerz00(obj_t BgL_envz00_1648)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 291 */
			{	/* Engine/compiler.scm 291 */
				obj_t BgL_astz00_1649;

				BgL_astz00_1649 = PROCEDURE_REF(BgL_envz00_1648, (int) (((long) 0)));
				{

					return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_1649));
				}
			}
		}
	}



/* <anonymous:3498> */
	obj_t BGl_zc3anonymousza33498ze3z83zzengine_compilerz00(obj_t BgL_envz00_1650)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 286 */
			{	/* Engine/compiler.scm 286 */
				obj_t BgL_astz00_1651;

				BgL_astz00_1651 = PROCEDURE_REF(BgL_envz00_1650, (int) (((long) 0)));
				{

					return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_1651));
				}
			}
		}
	}



/* <anonymous:3494> */
	obj_t BGl_zc3anonymousza33494ze3z83zzengine_compilerz00(obj_t BgL_envz00_1652)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 275 */
			{	/* Engine/compiler.scm 275 */
				obj_t BgL_astz00_1653;

				BgL_astz00_1653 = PROCEDURE_REF(BgL_envz00_1652, (int) (((long) 0)));
				{

					return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_1653));
				}
			}
		}
	}



/* <anonymous:3487> */
	obj_t BGl_zc3anonymousza33487ze3z83zzengine_compilerz00(obj_t BgL_envz00_1654)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 268 */
			{	/* Engine/compiler.scm 268 */
				obj_t BgL_astz00_1655;

				BgL_astz00_1655 = PROCEDURE_REF(BgL_envz00_1654, (int) (((long) 0)));
				{

					return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_1655));
				}
			}
		}
	}



/* <anonymous:3478> */
	obj_t BGl_zc3anonymousza33478ze3z83zzengine_compilerz00(obj_t BgL_envz00_1656)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 260 */
			{	/* Engine/compiler.scm 260 */
				obj_t BgL_astz00_1657;

				BgL_astz00_1657 = PROCEDURE_REF(BgL_envz00_1656, (int) (((long) 0)));
				{

					return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_1657));
				}
			}
		}
	}



/* <anonymous:3475> */
	obj_t BGl_zc3anonymousza33475ze3z83zzengine_compilerz00(obj_t BgL_envz00_1658)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 256 */
			return BGl_makezd2addzd2heapz00zzheap_makez00();
		}
	}



/* <anonymous:3472> */
	obj_t BGl_zc3anonymousza33472ze3z83zzengine_compilerz00(obj_t BgL_envz00_1659)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 246 */
			{	/* Engine/compiler.scm 246 */
				obj_t BgL_astz00_1660;

				BgL_astz00_1660 = PROCEDURE_REF(BgL_envz00_1659, (int) (((long) 0)));
				{

					return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_1660));
				}
			}
		}
	}



/* <anonymous:3469> */
	obj_t BGl_zc3anonymousza33469ze3z83zzengine_compilerz00(obj_t BgL_envz00_1661)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 241 */
			{	/* Engine/compiler.scm 241 */
				obj_t BgL_astz00_1662;

				BgL_astz00_1662 = PROCEDURE_REF(BgL_envz00_1661, (int) (((long) 0)));
				{

					return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_1662));
				}
			}
		}
	}



/* <anonymous:3466> */
	obj_t BGl_zc3anonymousza33466ze3z83zzengine_compilerz00(obj_t BgL_envz00_1663)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 235 */
			{	/* Engine/compiler.scm 235 */
				obj_t BgL_astz00_1664;

				BgL_astz00_1664 = PROCEDURE_REF(BgL_envz00_1663, (int) (((long) 0)));
				{

					return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_1664));
				}
			}
		}
	}



/* <anonymous:3455> */
	obj_t BGl_zc3anonymousza33455ze3z83zzengine_compilerz00(obj_t BgL_envz00_1665)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 221 */
			{	/* Engine/compiler.scm 221 */
				obj_t BgL_astz00_1666;

				BgL_astz00_1666 = PROCEDURE_REF(BgL_envz00_1665, (int) (((long) 0)));
				{

					return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_1666));
				}
			}
		}
	}



/* <anonymous:3447> */
	obj_t BGl_zc3anonymousza33447ze3z83zzengine_compilerz00(obj_t BgL_envz00_1667)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 215 */
			return BGl_makezd2heapzd2zzheap_makez00();
		}
	}



/* <anonymous:3441> */
	obj_t BGl_zc3anonymousza33441ze3z83zzengine_compilerz00(obj_t BgL_envz00_1668)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 206 */
			{	/* Engine/compiler.scm 206 */
				obj_t BgL_astz00_1669;

				BgL_astz00_1669 = PROCEDURE_REF(BgL_envz00_1668, (int) (((long) 0)));
				{

					return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_1669));
				}
			}
		}
	}



/* <anonymous:3437> */
	obj_t BGl_zc3anonymousza33437ze3z83zzengine_compilerz00(obj_t BgL_envz00_1670)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 199 */
			{	/* Engine/compiler.scm 199 */
				obj_t BgL_unitsz00_1671;

				BgL_unitsz00_1671 = PROCEDURE_REF(BgL_envz00_1670, (int) (((long) 0)));
				{

					return
						BGl_writezd2expandedzd2zzwrite_expandedz00(CELL_REF
						(BgL_unitsz00_1671));
				}
			}
		}
	}



/* <anonymous:3434> */
	obj_t BGl_zc3anonymousza33434ze3z83zzengine_compilerz00(obj_t BgL_envz00_1672)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 195 */
			{	/* Engine/compiler.scm 195 */
				obj_t BgL_unitsz00_1673;

				BgL_unitsz00_1673 = PROCEDURE_REF(BgL_envz00_1672, (int) (((long) 0)));
				{

					return
						BGl_writezd2expandedzd2zzwrite_expandedz00(CELL_REF
						(BgL_unitsz00_1673));
				}
			}
		}
	}



/* <anonymous:3402> */
	obj_t BGl_zc3anonymousza33402ze3z83zzengine_compilerz00(obj_t BgL_envz00_1674)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 169 */
			return BINT(((long) 0));
		}
	}



/* <anonymous:3397> */
	obj_t BGl_zc3anonymousza33397ze3z83zzengine_compilerz00(obj_t BgL_envz00_1675)
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 160 */
			{	/* Engine/compiler.scm 160 */
				obj_t BgL_modulez00_1676;

				BgL_modulez00_1676 = PROCEDURE_REF(BgL_envz00_1675, (int) (((long) 0)));
				{

					return BGl_dumpzd2modulezd2zzmodule_modulez00(BgL_modulez00_1676);
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzengine_compilerz00()
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzengine_compilerz00()
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzengine_compilerz00()
	{
		AN_OBJECT;
		{	/* Engine/compiler.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 139728077),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzengine_signalsz00(((long) 469483682),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzengine_enginez00(((long) 528201616),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzread_srcz00(((long) 46676),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzwrite_expandedz00(((long) 46316395),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzwrite_astz00(((long) 262343635),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzread_accessz00(((long) 514536036),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 143212498),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzheap_restorez00(((long) 307873065),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzheap_makez00(((long) 138788146),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzast_checkzd2sharingzd2(((long)
					53844767), BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 52292466),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzast_buildz00(((long) 46924743),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzast_unitz00(((long) 386858258),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzast_checkzd2globalzd2initz00(((long)
					264087619), BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzast_initz00(((long) 93010666),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzuser_userz00(((long) 353464161),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 256968439),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzmodule_alibraryz00(((long) 69061048),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 46603742),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzexpand_installz00(((long) 17495966),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 230845835),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzinit_setrcz00(((long) 385369337),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zztrace_walkz00(((long) 417381032),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzbeta_walkz00(((long) 486363319),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzinline_walkz00(((long) 175384950),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzeffect_walkz00(((long) 495418105),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzcallcc_walkz00(((long) 323678462),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzfail_walkz00(((long) 124327882),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzabound_walkz00(((long) 265595672),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzdataflow_walkz00(((long) 154617515),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_walkza7(((long) 318753882),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzcfa_walkz00(((long) 260339786),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(((long) 249450490),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzintegrate_walkz00(((long) 486357961),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zztailc_walkz00(((long) 474778133),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzcoerce_walkz00(((long) 149488921),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzreduce_walkz00(((long) 70606829),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzcnst_walkz00(((long) 451163419),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzhgen_walkz00(((long) 354580680),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzbdb_settingz00(((long) 443437044),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzbdb_spreadzd2objzd2(((long) 174843754),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzbdb_walkz00(((long) 313322043),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzprof_walkz00(((long) 394501980),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzcc_ccz00(((long) 473924),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzcc_ldz00(((long) 663636),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzbackend_walkz00(((long) 729754),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzbackend_cz00(((long) 460817208),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzbackend_jvmz00(((long) 442578928),
				BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
			return BGl_modulezd2initializa7ationz75zzbackend_dotnetz00(((long)
					168424689), BSTRING_TO_STRING(BGl_string3657z00zzengine_compilerz00));
		}
	}

#ifdef __cplusplus
}
#endif
